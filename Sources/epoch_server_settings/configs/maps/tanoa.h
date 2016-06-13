/*
	Author: Aaron Clark - EpochMod.com

    Contributors:

	Description:
	Epoch gamemode server Side map specific configs for altis.

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/master/Sources/epoch_server_settngs/configs/maps/altis.h
*/
class Tanoa : Default
{
	worldSize = 0; // 0 = default to worldSize command
	plantLimit = 10;
	// vehicles - Max vehicle slots is calculated from per vehicle limits below. Warning! Higher the number lower the performance.
	vehicleSpawnTypes[] = {
		{"FlatAreaCity",1},
		{"FlatAreaCitySmall",1},
		{"NameCity",2},
		{"NameVillage",1},
		{"NameCityCapital",4},
		{"Airport",5}
	};
	traderBlds[] = { "Land_Kiosk_blueking_F", "Land_FuelStation_Build_F", "Land_CarService_F", "Land_i_Garage_V1_F", "Land_i_Shed_Ind_F", "Land_i_Shop_01_V1_F" };
	containerPos[] = {};
	telePos[] = {
		// N [-0.286865,8.17383,-10.3098]
		// S [-0.415527,-7.05298,-10.3098]
		// E [13.5127,0.410156,-10.3098]
		// W [-14.4316,0.112793,-10.3098]

		{ "Transport_C_EPOCH", { -0.286865,8.17383,-10.3098 }, "", "north" }
	};
	propsPos[] = {};
	staticNpcPos[] = {};
	// Prefered locations for vehicles
	class whitelistedVehiclePos {};
};