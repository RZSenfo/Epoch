/*
	Author/s:
		Aaron Clark - EpochMod.com

	Description:
		Spawns Bunker Dynamically.

	Improvements and or bugfixes and other contributions are welcome via the github:
	https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_server_bunker_event/EpochEvents/BunkerSpawner.sqf
*/
//[[[cog import generate_private_arrays ]]]
private ["_allBunkers","_animationStates","_bunkerCounter","_bunkerLocations","_bunkerLocationsKey","_colCount","_debug","_debugLocation","_expiresBunker","_firstBunker","_instanceID","_list","_loc1","_location","_maxRows","_maxBunkerLimitSlots","_maxColumns","_memoryPoints","_modelInfo","_newBunkerCounter","_object","_originalLocation","_pOffset","_response","_rng","_rngChance","_rowCount","_score","_scriptHiveKey","_seed","_selectedBunker","_size","_valuesAndWeights","_veh"];
//[[[end]]]
if (worldName == "VR") then {

	_debug = false;
	_expiresBunker = 14400; // four hours
	_debugLocation = getMarkerPos "respawn_west";
	_memoryPoints = ["one","two","three","four"];
	_bunkerCounter = 0;
	_newBunkerCounter = 0;

	_instanceID = call EPOCH_fn_InstanceID;
	// size
	_maxRows = 20;
	_maxColumns = 20;

	_rngChance = 0; // Lower this to spawn more positions
	_scriptHiveKey = "EPOCH:DynamicBunker004"; // change this to force a new seed to be generated.

	_bunkerLocationsKey = format ["%1:%2", _instanceID, worldname];
	_response = [_scriptHiveKey, _bunkerLocationsKey] call EPOCH_fnc_server_hiveGETRANGE;
	_response params [["_status",0],["_data",[]] ];

	_firstBunker = objNull;
	_bunkerLocations = [];

	// check for proper return and data type
	if (_status == 1 && _data isEqualType [] && !(_data isEqualTo [])) then {
		_bunkerLocations = _data;

		// spawn cached bunkers
		{
			if (_x isEqualType [] && !(_x isEqualTo [])) then {
				_x params ["_selectedBunker", "_posWorld", ["_memoryPointsStatus",[]] ];
				_object = createSimpleObject [_selectedBunker, _posWorld];
				if (isNull _firstBunker) then {_firstBunker = _object;};
				{
					_object animate [_x,(_memoryPointsStatus param [_forEachIndex,1]),true];
				} forEach _memoryPoints;
				_bunkerCounter = _bunkerCounter + 1;
			};
		} forEach _bunkerLocations;

	} else {

		// generate new bunker
		_size = 13.081;

		_allBunkers = [];
		_newBunkerCounter = 0;
		// Generate Seed
		_seed = random 999999;
		diag_log format["Generating bunker with seed: %1",_seed];
		_location = _debugLocation;
		_originalLocation = +_location;
		_valuesAndWeights = [
			"bunker_epoch", 0.2, // empty bunker
			"bunker_epoch_01", 0.1, // tall concrete maze 1
			"bunker_epoch_02", 0.05, // Epoch Corp storage
			// "bunker_epoch_03", 0.01, // save for xmas
			"bunker_epoch_04", 0.05, // generator room
			// "bunker_epoch_05", 0.01, // invisible walls
			"bunker_epoch_06", 0.05, // jail
			"bunker_epoch_07", 0.05, // clone chamber
			"bunker_epoch_08", 0.01, // epoch celebration room
			"bunker_epoch_09", 0.05, // tallest concrete walls
			"bunker_epoch_10", 0.05, // knee high concrete walls
			"bunker_epoch_11", 0.1, // sewer
			"bunker_epoch_12", 0.05, // concrete mid wall
			"bunker_epoch_13", 0.05, // tall concrete maze 2
			"bunker_epoch_14", 0.08, // odd concrete walls
			"bunker_epoch_15", 0.05   // concrete mid wall maze
		];
		_rowCount = 0;
		_colCount = 0;
		//spawn x number of connected bunkers.
		while {true} do {
			if (_colCount > _maxColumns) exitWith {};
			_rng = _seed random [_location select 0,_location select 1];
			if (_rng > _rngChance) then {
				_selectedBunker = selectRandomWeighted _valuesAndWeights;
				// _object = createSimpleObject [_selectedBunker, _location];
				_object = createVehicle [_selectedBunker, _location, [], 0, "CAN_COLLIDE"];
				if (isNull _firstBunker) then {_firstBunker = _object;};
				_allBunkers pushBack _object;
				_newBunkerCounter = _newBunkerCounter + 1;
			};
			_location set [0,(_location select 0) + _size];
			_rowCount = _rowCount + 1;
			if (_rowCount >= _maxRows) then {
				_rngChance = 0.3;
				_colCount = _colCount + 1;
				_rowCount = 0;
				_location set [0,_originalLocation select 0];
				_location set [1,(_location select 1) + _size];
			};
		};
		_score = 0;
		{
			_veh = _x;
			_animationStates = [];
			{
				_pOffset = _veh selectionPosition _x;
				if !(_pOffset isEqualTo [0,0,0]) then {
					_loc1 = _veh modelToWorldVisual _pOffset;
					_list = nearestObjects[_loc1, [], 1];
					if !(_list isEqualTo []) then {
						_score = _score + 1;
						_animationStates pushBack 0;
						_veh animate [_x,0];
					} else {
						_animationStates pushBack 1;
						_veh animate [_x,1];
					};
				};
			} forEach _memoryPoints;
			_modelInfo = getModelInfo _veh;
			_bunkerLocations pushBack [_modelInfo select 1, getPosWorld _veh, _animationStates, _score];
		} forEach _allBunkers;

		// save to DB
		[_scriptHiveKey, _bunkerLocationsKey, _expiresBunker, _bunkerLocations] call EPOCH_fnc_server_hiveSETEX;
	};

	// move respawn point into first bunker.
	if (!(isNull _firstBunker) && {_firstBunker distance _debugLocation > 1}) then {
		deleteMarker "respawn_west";
		createMarker ["respawn_west", getposATL _firstBunker];
	};

	if (_debug) then {
	    diag_log format["DEBUG: Spawned %1 Existing Bunker",_bunkerCounter];
	    if (_newBunkerCounter > 0) then {
	        diag_log format["DEBUG: Spawned %1 New Bunker.",_newBunkerCounter];
	    };
	};
};
