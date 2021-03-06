class dingor : Default
{
	worldSize = 0; // 0 = default to worldSize command
	plantLimit = 5;
	vehicleSpawnTypes[] = {
		{"FlatAreaCity",1},
		{"FlatAreaCitySmall",1},
		{"NameCity",2},
		{"NameVillage",1},
		{"NameCityCapital",4},
		{"Airport",5},
		{"NameLocal",2},
		{"StrongpointArea",1},
		{"VegetationBroadleaf",1},
		{"VegetationFir",1},
		{"ViewPoint",1}
	};
	traderBlds[] = {"House", "Building"};
	shipwreckLootEnabled = 0;
	telePos[] = {
		// N [-0.286865,8.17383,-10.3098]
		// S [-0.415527,-7.05298,-10.3098]
		// E [13.5127,0.410156,-10.3098]
		// W [-14.4316,0.112793,-10.3098]
			//{ "Transport_N_EPOCH", { -0.286865, 8.17383, -10.3098 }, "", "north" },
			//{ "Transport_W_EPOCH", { -14.4316, 0.112793, -10.3098 }, "", "west" },
			//{ "Transport_E_EPOCH", { 13.5127,0.410156,-10.3098 }, "", "east" }
			{ "Transport_C_EPOCH", { 13.5127, 0.410156, -10.3098 }, "", "center" } // temp for now
	};
	propsPos[] = {
	};
	staticNpcPos[] = {
	};
};
