
params [["_newChar",false]];

// fade in sound and screen
if (!_newChar || { !(["CfgEpochClient", "useCinematicSpawn", false] call EPOCH_fnc_returnConfigEntryV2) }) then {
	3 fadeSound 1;
	titleCut ["", "BLACK IN", 1];
	1338 cutText ["","PLAIN",0]; 
} else {
	
	cutText ["","BLACK OUT",0.001];
	1338 cutText ["","PLAIN",0];
    disableUserInput true; 
	player switchCamera "Internal"; 
	player setUnconscious true; 
	uisleep 3; 
	private _effect = ppEffectCreate ["DynamicBlur", 600]; 
	_effect ppEffectEnable true;
	_effect ppEffectAdjust [0.5];    
	_effect ppEffectCommit 0;
	player setUnconscious false; 
	3 fadeSound 1;
	cutText ["", "BLACK IN", 0.3];     
	uisleep 1; 
	cutText ["","BLACK OUT",0.1]; 
	uisleep 1; 
	cutText ["", "BLACK IN", 0.1];  
	uisleep 1; 
	cutText ["","BLACK OUT",0.1]; 
	uisleep 1; 
	cutText ["", "BLACK IN", 0.1];  
	_effect ppEffectAdjust [0];   
	_effect ppEffectCommit 3; 
	uisleep 3; 
	ppEffectDestroy _effect; 
	disableUserInput false;

};
