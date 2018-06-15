/*
	Author: Aaron Clark - EpochMod.com

    Contributors:

	Description:
	Epoch gamemode server Side map specific configs for Malden.

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_server_settngs/configs/maps/Malden.h
*/
class Malden : Default
{
	worldSize = 0; // 0 = default to worldSize command
	plantLimit = 8;
	vehicleSpawnTypes[] = {
        {"FlatAreaCity",1},
		{"FlatAreaCitySmall",1},
		{"NameCity",2},
		{"NameVillage",1},
		{"NameCityCapital",4},
		{"Airport",5}
	};
    traderBlds[] = { "Land_Kiosk_blueking_F", "Land_FuelStation_Build_F", "Land_CarService_F", "Land_i_Garage_V1_F", "Land_i_Shed_Ind_F", "Land_i_Shop_01_V1_F" };
	telePos[] = {
		// N [-0.286865,8.17383,-10.3098]
		// S [-0.415527,-7.05298,-10.3098]
		// E [13.5127,0.410156,-10.3098]
		// W [-14.4316,0.112793,-10.3098]
        { "Transport_N_EPOCH", { -0.286865, 8.17383, -10.3098 }, "", { 3074.63,8474.27,0.00150394 } },
        { "Transport_W_EPOCH", { -14.4316, 0.112793, -10.3098 }, "", { 2335.17, 3394.12, 0.000732422 } },
        { "Transport_E_EPOCH", { 13.5127,0.410156,-10.3098 }, "", { 8224.4,8756.69,0.00099802 } }
        //{ "Transport_C_EPOCH", { 13.5127, 0.410156, -10.3098 }, "", "south" }
	};
    propsPos[] = {
        // Phones and ATMs
        { "Land_ATM_02_malden_F", {3225.01,6276.43,0}, {{0.951241,-0.30845,0},{0,0,1}}, true },
        { "Land_PhoneBooth_01_malden_F", {3746.04,3256.26,0.161957}, {{-0.967747,-0.251925,0},{0,0,1}}, true },
        { "Land_ATM_01_malden_F", {5103,9074.26,0.508453}, {{0.595228,0.803557,0},{0,0,1}}, true },
        { "Land_PhoneBooth_01_malden_F", {5354.97,2805.33,0}, {{-0.384161,-0.923266,0},{0,0,1}}, true },
        { "Land_PhoneBooth_01_malden_F", {5495.61,7005.75,0.166534}, {{0.448686,-0.893689,0},{0,0,1}}, true },
        { "Land_PhoneBooth_02_malden_F", {5490.94,7003.29,0.169525}, {{0.440054,-0.897971,0},{0,0,1}}, true },
        { "Land_ATM_02_malden_F", {5507.85,3484.96,0}, {{0.984902,-0.173111,0},{0,0,1}}, true },
        { "Land_PhoneBooth_01_malden_F", {6028.37,8621.77,0}, {{-0.21328,-0.976991,0},{0,0,1}}, true },
        { "Land_PhoneBooth_01_malden_F", {6636.54,8819.84,-7.62939e-006}, {{-0.150817,0.988562,0},{0,0,1}}, true },
        { "Land_PhoneBooth_01_malden_F", {6639.32,8820.08,0}, {{-0.0954069,0.995438,0},{0,0,1}}, true },
        { "Land_PhoneBooth_01_malden_F", {6637.91,8819.96,0}, {{-0.103969,0.994581,0},{0,0,1}}, true },
        { "Land_PhoneBooth_02_malden_F", {7053.47,7058.09,0}, {{0.999621,-0.027522,0},{0,0,1}}, true },
        { "Land_PhoneBooth_02_malden_F", {7150.51,6003.52,0}, {{-0.0176981,0.999843,0},{0,0,1}}, true },
        { "Land_ATM_01_malden_F", {7211.19,7791.62,0.101868}, {{0.857566,0.514374,0},{0,0,1}}, true },
        { "Land_ATM_01_malden_F", {8057.78,4054.92,0.233646}, {{0.753691,-0.657229,0},{0,0,1}}, true }
    };
    traderPropsPos[] = {
        // "Northern" Trader Camp
        { "Land_Cargo20_orange_F", {2995.62,8434.97,0.0128599}, {{-0.528092,-0.84917,0.00549413},{-0.0805372,0.056524,0.995148}}, true },
        { "Land_Cargo20_orange_F", {3001.11,8431.97,0.0119005}, {{-0.528289,-0.849027,0.00800959},{-0.0757817,0.0565452,0.99552}}, true },
        { "Land_Cargo40_grey_F", {3010.16,8429.65,0.0138227}, {{0,0.999436,-0.0335804},{-0.0987155,0.0334163,0.994554}}, true },
        { "Land_Cargo20_white_F", {3019.54,8428.56,0.0277512}, {{0,0.999436,-0.0335804},{-0.140202,0.0332487,0.989565}}, true },
        { "Land_Cargo20_grey_F", {3026,8428.47,-0.00265026}, {{0,0.999586,-0.028787},{-0.0351779,0.0287692,0.998967}}, true },
        { "RoadBarrier_F", {3039.76,8429.82,0.00521612}, {{0.120292,0.99267,-0.0116707},{-0.0939822,0.0230904,0.995306}}, true },
        { "Land_ChairPlastic_F", {3070.96,8471.63,0.000873089}, {{0.992911,0.11875,-0.00503494},{0,0.0423614,0.999102}}, true },
        { "Land_FireExtinguisher_F", {3073,8467.91,0.000711918}, {{0,0.999102,-0.0423614},{0,0.0423614,0.999102}}, true },
        { "Land_CampingChair_V2_F", {3072.99,8470.89,0.000905991}, {{0.708442,0.705135,-0.0298973},{0,0.0423614,0.999102}}, true },
        { "Land_CampingChair_V2_F", {3073.42,8468.59,0.000888348}, {{0.919815,-0.392001,0.0166206},{0,0.0423614,0.999102}}, true },
        { "Land_GarbageContainer_open_F", {3083.92,8487.26,0.0002985}, {{-0.146009,0.988566,-0.0376563},{-0.0303859,0.0335649,0.998975}}, true },
        { "Land_WorkStand_F", {3080.67,8485.54,-0.0225635}, {{0,0.999436,-0.0335804},{-0.0303859,0.0335649,0.998975}}, true },
        { "Land_Icebox_F", {3085.06,8492.61,-0.000498295}, {{0.999975,0.00693204,0.00154894},{-0.00158221,0.00479658,0.999987}}, true },
        { "Tire_Van_02_F", {3085.19,8494.41,6.67572e-006}, {{0,0.999988,-0.00479659},{-0.00158221,0.00479658,0.999987}}, true },
        { "Tire_Van_02_F", {3085.14,8495.22,4.76837e-006}, {{0,0.999988,-0.00479659},{-0.00158221,0.00479658,0.999987}}, true },
        { "Tire_Van_02_F", {3085.22,8494.81,0.265893}, {{0,1,0},{0,0,1}}, true },
        { "Land_PortableGenerator_01_F", {3085.34,8490.96,1.23978e-005}, {{0.999964,-0.00833787,0.00162217},{-0.00158221,0.00479658,0.999987}}, true },
        { "Land_Metal_rack_Tall_F", {3085.44,8497.18,0}, {{0.99999,0.00409792,0.00156256},{-0.00158221,0.00479658,0.999987}}, true },
        { "Land_Metal_rack_Tall_F", {3085.42,8496.38,-4.76837e-007}, {{0.99999,0.00409792,0.00156256},{-0.00158221,0.00479658,0.999987}}, true },
        { "Land_Metal_rack_F", {3085.37,8498.23,2.14577e-005}, {{0.992478,-0.122408,0.00215748},{-0.00158221,0.00479658,0.999987}}, true },
        { "Land_CampingTable_F", {3079.78,8498.57,1.19209e-005}, {{0.997537,-0.0701184,0.00191467},{-0.00158221,0.00479658,0.999987}}, true },
        { "Land_Sink_F", {3079.76,8480.54,0.00252676}, {{0.876306,-0.478479,0.0560832},{-0.0638688,0,0.997958}}, true },
        { "Land_CampingTable_F", {3079.63,8507.07,1.43051e-006}, {{0.997943,-0.0640923,0.00147757},{-0.00158221,-0.00158197,0.999997}}, true },
        { "Land_CzechHedgehog_01_F", {2998.92,8422.76,-5.10216e-005}, {{0,1,0},{0,0,1}}, true },
        { "Land_CzechHedgehog_01_F", {2993.97,8422.44,-3.73125e-005}, {{0,1,0},{0,0,1}}, true },
        { "Land_CzechHedgehog_01_F", {2990.51,8425.96,-0.037242}, {{0,1,0},{0,0,1}}, true },
        { "Land_CzechHedgehog_01_F", {2987.69,8430.18,0.0677153}, {{0,1,0},{0,0,1}}, true },
        { "Land_CzechHedgehog_01_F", {3004.95,8422.89,-1.0252e-005}, {{0,1,0},{0,0,1}}, true },
        { "Land_CzechHedgehog_01_F", {3024.11,8421.45,-3.19481e-005}, {{0,1,0},{0,0,1}}, true },
        { "Land_CzechHedgehog_01_F", {3020.29,8421.5,0.0204887}, {{0,1,0},{0,0,1}}, true },
        { "Land_CzechHedgehog_01_F", {3010.32,8422.05,-2.45571e-005}, {{0,1,0},{0,0,1}}, true },
        { "Land_CzechHedgehog_01_F", {3015.56,8421.94,-0.000506878}, {{0,1,0},{0,0,1}}, true },
        { "Land_CzechHedgehog_01_F", {3027.56,8421.98,-5.29289e-005}, {{0,1,0},{0,0,1}}, true },
        { "Land_Wreck_Truck_F", {3045.11,8416.34,-0.0399089}, {{0.417845,-0.900498,0.120453},{-0.121494,0.0760071,0.989678}}, true },
        { "Land_LampShabby_F", {3040.54,8436.2,0.0175948}, {{-0.967344,0.253466,0},{0,0,1}}, true },
        { "Land_CncBarrier_F", {3038.68,8435.4,-0.065258}, {{0.954189,0.287336,0.0834337},{-0.0939822,0.0230904,0.995306}}, true },
        { "Land_CncBarrier_F", {3032,8431.31,5.91278e-005}, {{0.99894,0.022325,0.0402504},{-0.0407667,0.0231738,0.9989}}, true },
        { "Land_CncBarrier_F", {3030.59,8429.72,-0.0231225}, {{0,0.999586,-0.028787},{-0.0351779,0.0287692,0.998967}}, true },
        { "Land_Razorwire_F", {3049.69,8438.18,-0.0219493}, {{0.47678,-0.877605,0.0498977},{-0.0103981,0.0511302,0.998638}}, true },
        { "Land_Razorwire_F", {3042.89,8435.17,-0.0180011}, {{-0.467815,0.879819,-0.0840743},{-0.0471471,0.0701478,0.996422}}, true },
        { "PortableLight_Double_EPOCH", {3039.39,8461.92,-0.00410295}, {{-0.650916,-0.759109,0.00788934},{0,0.0103923,0.999946}}, true },
        { "Land_UWreck_MV22_F", {3028.78,8517.84,0}, {{0,1,0},{0,0,1}}, true },
        { "Land_Razorwire_F", {3056.91,8440.96,-0.328821}, {{-0.128,0.989448,-0.0678854},{-0.133202,0.0506773,0.989792}}, true },
        { "Land_Razorwire_F", {3071.99,8448.06,0.162379}, {{-0.717775,0.64651,-0.258505},{-0.0900331,0.281972,0.955189}}, true },
        { "Land_Razorwire_F", {3065.21,8443.7,-0.302259}, {{-0.464256,0.850586,-0.246922},{-0.208888,0.165771,0.963787}}, true },
        { "Land_Garbage_square3_F", {3067.21,8468.31,0.000768661}, {{0,1,0},{-0.0423614,0,0.999102}}, true },
        { "Land_GarbageHeap_03_F", {3074.78,8472.64,-0.00442696}, {{0,0.999102,-0.0423614},{0,0.0423614,0.999102}}, true },
        { "Land_WoodPile_F", {3072.45,8466.85,0.00233793}, {{0.872535,0.488114,-0.0206958},{0,0.0423614,0.999102}}, true },
        { "Land_HelipadCircle_F", {3056.01,8466.4,0}, {{0,1,0},{0,0,1}}, true },
        { "Land_Campfire_F", {3071.16,8469.5,0.000163078}, {{0,0.999102,-0.0423614},{0,0.0423614,0.999102}}, false },
        { "Land_LampShabby_F", {3074.85,8484.94,8.98838e-005}, {{-0.635439,0.772151,0},{0,0,1}}, true },
        { "ProtectionZone_Invisible_F", {3060.9,8484.89,6.44742}, {{0,0.999999,0.00161916},{0,-0.00161916,0.999999}}, true },
        { "Land_Razorwire_F", {3083.11,8465.72,-0.0561752}, {{-0.97853,-0.0183062,-0.205291},{-0.205892,0.0414538,0.977696}}, true },
        { "Land_Razorwire_F", {3084.93,8473.08,-0.292695}, {{0.932058,-0.340095,0.124915},{-0.0638688,0.185144,0.980634}}, true },
        { "Land_Razorwire_F", {3076.57,8454.27,-0.283497}, {{-0.823591,0.441944,-0.355503},{-0.364961,0.0668604,0.928619}}, true },
        { "Land_Razorwire_F", {3081.55,8460.04,0.0395131}, {{0.645025,-0.695578,0.316408},{-0.205892,0.240552,0.948548}}, true },
        { "Land_Garbage_square5_F", {3077.64,8490.77,0.00294161}, {{0,0.999712,0.023991},{-0.0303859,-0.0239799,0.999251}}, true },
        { "Land_StallWater_F", {3079.79,8477,-0.0317125}, {{0.997882,0.0124003,0.0638639},{-0.0638688,0,0.997958}}, true },
        { "Land_PicnicTable_01_F", {3079.19,8490.69,0}, {{0,1,0},{0,0,1}}, true },
        { "Land_Sunshade_01_F", {3076.76,8490.18,0.00111628}, {{0,0.999712,0.023991},{-0.0303859,-0.0239799,0.999251}}, true },
        { "Land_WoodenCrate_01_stack_x3_F", {3084.71,8499.77,-0.00206947}, {{0,0.999988,-0.00479659},{-0.00158221,0.00479658,0.999987}}, true },
        { "Land_Razorwire_F", {3090.33,8488.6,-0.260276}, {{-0.843112,0.345059,-0.412428},{-0.437984,0.00432321,0.898972}}, true },
        { "Land_Razorwire_F", {3088.2,8481.35,0.140541}, {{-0.856545,-0.0269148,-0.51537},{-0.516007,0.0287644,0.856102}}, true },
        { "Land_Razorwire_F", {3092.04,8496.52,0.103394}, {{0.920431,-0.0988834,0.378191},{-0.37075,0.0858176,0.924759}}, true },
        { "Land_CratesShabby_F", {3085.11,8504.5,0.000340462}, {{0,0.999872,-0.0159977},{0.0159975,0.0159956,0.999744}}, true },
        { "Land_CratesPlastic_F", {3085.18,8505.46,3.57628e-005}, {{0,0.999872,-0.0159977},{0.0159975,0.0159956,0.999744}}, true },
        { "Land_CratesWooden_F", {3084.38,8502.77,1.90735e-006}, {{-0.0545167,-0.998511,-0.00166587},{-0.00158221,-0.00158197,0.999997}}, true },
        { "Land_CratesWooden_F", {3081.82,8502.78,1.90735e-006}, {{0,0.999999,0.00158197},{-0.00158221,-0.00158197,0.999997}}, true },
        { "Land_Garbage_square5_F", {3077.78,8504.58,-0.000335217}, {{0,0.999999,0.00158197},{-0.00158221,-0.00158197,0.999997}}, true },
        { "Land_GarbagePallet_F", {3084.52,8512.91,-0.0360587}, {{0,0.982208,-0.187798},{0.0159975,0.187774,0.982082}}, true },
        { "Land_WoodenCrate_01_stack_x5_F", {3084.1,8509.15,0.000776291}, {{0.0709465,0.997334,-0.0170923},{0.0159975,0.0159956,0.999744}}, true },
        { "Land_Razorwire_F", {3079.73,8518.7,-0.0379169}, {{0.201449,0.961461,-0.187113},{0.0159975,0.187774,0.982082}}, true },
        { "Land_Razorwire_F", {3087.25,8517.05,-0.0491641}, {{0.201468,0.963169,-0.178091},{0.00800059,0.180195,0.983598}}, true },
        { "Land_Razorwire_F", {3092.3,8504.68,-0.0691781}, {{-0.925833,-0.0848631,-0.368282},{-0.37075,0.0148576,0.928614}}, true },
        { "Land_Razorwire_F", {3092.01,8512.5,0.545356}, {{-0.992275,0.0488398,-0.114041},{-0.0939822,0.304115,0.947988}}, true },
        { "PortableLight_Single_EPOCH", {3084.55,8501.35,-0.000876427}, {{0.94556,0.325441,0.00201092},{-0.00158221,-0.00158197,0.999997}}, true },
        // Eastern Trader Camp
        { "Land_MapBoard_01_Wall_Malden_F", {8199.73,8751.68,1.50435}, {{-0.998432,0.0559757,0},{0,0,1}}, true },
        { "Land_Canteen_F", {8220.15,8736.16,0.887077}, {{0,0.999997,0.00239211},{0,-0.00239211,0.999997}}, true },
        { "Land_Tableware_01_tray_F", {8220.33,8735.93,0.887081}, {{0,0.999997,0.00239211},{0,-0.00239211,0.999997}}, true },
        { "Land_Tableware_01_stackOfNapkins_F", {8221.4,8735.97,0.887082}, {{0,0.999997,0.00239211},{0,-0.00239211,0.999997}}, true },
        { "Land_Sleeping_bag_folded_F", {8216.63,8739.25,0.00943279}, {{0.536858,0.84361,0.0103293},{-0.00813388,-0.00706721,0.999942}}, true },
        { "Land_Sleeping_bag_folded_F", {8213.33,8742.03,0.00992632}, {{-0.555284,0.831659,0.00162426},{-0.00195312,-0.00325709,0.999993}}, true },
        { "Land_Sleeping_bag_folded_F", {8211.72,8745.21,0.00896549}, {{0.287965,-0.957616,0.00687788},{0.0115233,0.0106466,0.999877}}, true },
        { "Land_Sleeping_bag_folded_F", {8213.57,8743.15,-4.76837e-007}, {{-0.813133,-0.582079,0},{0,0,1}}, true },
        { "Land_ChairPlastic_F", {8222.85,8735.74,3.8147e-006}, {{-0.590678,-0.806905,-0.00193022},{0,-0.00239211,0.999997}}, true },
        { "Land_ChairPlastic_F", {8219.17,8735.11,1.90735e-006}, {{-0.795639,0.605769,0.00144907},{0,-0.00239211,0.999997}}, true },
        { "Land_TablePlastic_01_F", {8220.96,8736.08,1.43051e-006}, {{-0.065317,-0.997862,-0.00238701},{0,-0.00239211,0.999997}}, true },
        { "Land_FieldToilet_F", {8205.35,8744.03,0.000305176}, {{-0.746161,-0.665681,-0.0106481},{0,-0.0159937,0.999872}}, true },
        { "Land_FieldToilet_F", {8206.17,8743.04,0.000305176}, {{-0.746161,-0.665681,-0.0106481},{0,-0.0159937,0.999872}}, true },
        { "Land_FieldToilet_F", {8207.13,8742.06,0.000317097}, {{-0.746161,-0.665681,-0.0106481},{0,-0.0159937,0.999872}}, true },
        { "Land_CampingChair_V1_F", {8219.92,8734.58,3.33786e-006}, {{-0.365383,-0.930854,-0.00222672},{0,-0.00239211,0.999997}}, true },
        { "Land_CampingChair_V2_white_F", {8217.95,8740.93,-4.76837e-007}, {{-0.228351,-0.973579,0},{0,0,1}}, true },
        { "Land_CampingChair_V2_F", {8219.34,8744.08,-4.76837e-007}, {{0.48697,0.873419,0},{0,0,1}}, true },
        { "Land_CampingChair_V2_white_F", {8217.36,8744.34,-4.76837e-007}, {{-0.570688,0.821167,0},{0,0,1}}, true },
        { "Land_Sink_F", {8209.07,8740.61,0}, {{-0.704756,0.709359,0.0113467},{0,-0.0159937,0.999872}}, true },
        { "Land_PenBlack_F", {8202.94,8751.12,1.31026}, {{0.950445,0.310893,0},{0,0,1}}, true },
        { "Land_Money_F", {8200.91,8754.05,0.754758}, {{0,1,0},{0.00129158,0,0.999999}}, true },
        { "Land_Notepad_F", {8202.76,8750.62,1.28302}, {{0,0.999994,-0.00338291},{0,0.00338291,0.999994}}, true },
        { "Land_FlowerPot_01_Flower_F", {8200.66,8755.31,0.290066}, {{0,1,0},{0.00129158,0,0.999999}}, true },
        { "Land_TableSmall_01_F", {8202.32,8760.14,0.000129223}, {{0.987815,-0.154465,-0.0190204},{0.0159975,-0.0207896,0.999656}}, true },
        { "Land_TableSmall_01_F", {8200.89,8754.07,0.319301}, {{0.930367,-0.366628,-0.00120164},{0.00129158,0,0.999999}}, true },
        { "Land_ChairWood_F", {8200.77,8753.1,0.336327}, {{-0.988987,-0.148,0},{0,0,1}}, true },
        { "Land_ChairWood_F", {8201.53,8754.8,0.312427}, {{-0.53058,0.847635,0.000685285},{0.00129158,0,0.999999}}, true },
        { "Land_WoodenBed_01_F", {8205.4,8754.42,0.378473}, {{0.0844304,0.996429,-0.000109048},{0.00129158,0,0.999999}}, true },
        { "Land_Laptop_02_unfolded_F", {8202.87,8750.11,1.29723}, {{0.8,-0.599997,0.00202974},{0,0.00338291,0.999994}}, true },
        { "Land_File1_F", {8202.91,8750.98,1.28815}, {{0.98503,0.17238,0},{0,0,1}}, true },
        { "Land_SatelliteAntenna_01_F", {8209.93,8757.19,-0.00197601}, {{0.652561,0.757703,-0.00709392},{0.02479,-0.0119912,0.999621}}, true },
        { "Land_WoodenTable_large_F", {8203.04,8750.69,0.421222}, {{-0.0726553,-0.997351,0.00339149},{0,0.00340048,0.999994}}, true },
        { "Land_Sun_chair_F", {8203.34,8758.65,0.000140667}, {{0.993387,0.114013,-0.0135261},{0.0159975,-0.0207896,0.999656}}, true },
        { "Land_Sun_chair_F", {8203.05,8760.83,0.000155449}, {{0.976835,-0.212312,-0.0267717},{0.02479,-0.0119912,0.999621}}, true },
        { "Land_CampingTable_F", {8215.49,8750.42,6.00815e-005}, {{-0.99954,-0.0303333,-0.000364015},{0,-0.0119996,0.999928}}, true },
        { "RoadCone_F", {8222.23,8799.65,-0.207893}, {{0,0.998391,0.0567082},{0.0503349,-0.0566364,0.997125}}, true },
        { "RoadCone_F", {8215.55,8791.29,-0.201303}, {{0,0.999488,0.031983},{0.0749874,-0.0318929,0.996674}}, true },
        { "RoadCone_F", {8224.27,8792.71,-0.207889}, {{0,0.998391,0.0567082},{0.0503349,-0.0566364,0.997125}}, true },
        { "RoadCone_F", {8223.39,8795.95,-0.207932}, {{0,0.998391,0.0567082},{0.0503349,-0.0566364,0.997125}}, true },
        { "RoadCone_F", {8215.33,8795.33,-0.201246}, {{0,0.999488,0.031983},{0.0749874,-0.0318929,0.996674}}, true },
        { "RoadCone_F", {8215.82,8787.73,0.00180101}, {{0,0.999488,0.031983},{0.0749874,-0.0318929,0.996674}}, true },
        { "Land_GarbageContainer_closed_F", {8238.44,8747.71,0.0239067}, {{0.952562,-0.253598,-0.168264},{0.173336,-0.00238033,0.98486}}, true },
        { "Land_GarbageContainer_closed_F", {8238.88,8749.42,0.0274053}, {{0.954561,-0.23921,-0.177743},{0.185522,0.0102176,0.982587}}, true },
        { "Land_Workbench_01_F", {8234.04,8766.72,0.00433969}, {{-0.971237,-0.219147,0.0931256},{0.0884523,0.0310629,0.995596}}, true },
        { "Land_GarbageContainer_closed_F", {8239.42,8751.05,0.0285907}, {{-0.937222,0.310438,0.158879},{0.185522,0.0580706,0.980923}}, true },
        { "Land_GarbageBarrel_01_english_F", {8236.48,8768.79,0.00550508}, {{-0.692755,0.720114,0.0390791},{0.0884523,0.0310629,0.995596}}, true },
        { "Land_HelipadCircle_F", {8192.97,8791.68,0}, {{0,0.999672,0.0255917},{0.122276,-0.0253997,0.992171}}, true },
        { "Land_HBarrier_5_F", {8223.57,8732.43,-0.000534058}, {{-0.0980172,0.995182,0.0023806},{0,-0.00239211,0.999997}}, true },
        { "Land_HBarrier_5_F", {8212.46,8734.23,0}, {{-0.620428,-0.784264,0},{0,0,1}}, true },
        { "Land_HBarrier_5_F", {8200.71,8746.35,-0.0358186}, {{-0.998628,-0.0523504,-0.000837383},{0,-0.0159937,0.999872}}, true },
        { "Land_HBarrier_5_F", {8208.17,8738.05,0.0243478}, {{0.675598,0.737176,0.0117917},{0,-0.0159937,0.999872}}, true },
        { "Land_HBarrier_5_F", {8204.06,8742.11,0.0256491}, {{0.711713,0.70238,0.0112351},{0,-0.0159937,0.999872}}, true },
        { "Land_HBarrier_5_F", {8217.79,8732.08,-0.00536346}, {{-0.0723662,-0.997378,0.000173109},{0.00239211,0,0.999997}}, true },
        { "Land_TentA_F", {8217.81,8737.06,1.71661e-005}, {{-0.327965,-0.944687,-0.00225981},{0,-0.00239211,0.999997}}, true },
        { "Land_TentA_F", {8211.84,8743.5,5.29289e-005}, {{-0.952163,-0.305211,0.0152308},{0.015994,0,0.999872}}, true },
        { "Land_TentA_F", {8211.06,8746.34,2.28882e-005}, {{-0.995529,-0.0931043,0.0159242},{0.0159937,0,0.999872}}, true },
        { "Land_TentA_F", {8213.44,8740.86,0}, {{-0.807753,-0.589521,0},{0,0,1}}, true },
        { "Land_TentA_F", {8215.26,8738.64,0}, {{-0.650515,-0.759493,0},{0,0,1}}, true },
        { "Land_Garbage_square3_F", {8224.11,8738.91,0}, {{0,1,0},{0,0,1}}, true },
        { "Land_Garbage_square5_F", {8217.01,8747.23,0}, {{0,1,0},{0,0,1}}, true },
        { "Land_Campfire_F", {8218.38,8742.65,0}, {{0,1,0},{0,0,1}}, false },
        { "Land_WaterTank_04_F", {8205.41,8770.02,0}, {{-0.891667,0.452693,0},{0,0,1}}, true },
        { "ProtectionZone_Invisible_F", {8224.4,8756.69,0.00099802}, {{0,0.999974,-0.00720107},{0.0191948,0.00719974,0.99979}}, true },
        { "Land_HBarrier_5_F", {8200.46,8759.23,0.0446353}, {{0.997748,-0.0648074,-0.0173148},{0.0159975,-0.0207896,0.999656}}, true },
        { "Land_HBarrier_5_F", {8201.25,8770.14,0.0769663}, {{0.981896,-0.18675,-0.0316901},{0.0247923,-0.0391571,0.998925}}, true },
        { "Land_HBarrier_5_F", {8200.81,8764.41,0.083931}, {{0.996074,-0.083972,-0.0280132},{0.0247923,-0.0391571,0.998925}}, true },
        { "Land_TentDome_F", {8203.29,8763.57,0.00987482}, {{-0.177538,-0.983521,-0.0341469},{0.0247923,-0.0391571,0.998925}}, true },
        { "Land_Sunshade_F", {8202.34,8759.58,0.000490665}, {{0,0.999784,0.0207922},{0.0159975,-0.0207896,0.999656}}, true },
        { "Land_Garbage_square3_F", {8212.5,8769.83,0.00545883}, {{0,0.999409,0.0343797},{0.0191975,-0.0343733,0.999225}}, true },
        { "Land_Garbage_square5_F", {8212.51,8760.21,0.000863552}, {{0,0.999928,0.0119996},{0,-0.0119996,0.999928}}, true },
        { "Land_SignM_WarningMilitaryArea_english_F", {8214.52,8783.16,0}, {{0.0807734,-0.996732,0},{0,0,1}}, true },
        { "Flag_RedCrystal_F", {8216.19,8779.96,-4.76837e-007}, {{0,1,0},{0,0,1}}, true },
        { "Land_HBarrier_5_F", {8207.88,8779.19,0.0214648}, {{-0.290202,0.954198,0.0727313},{0.029589,-0.0670187,0.997313}}, true },
        { "Land_HBarrier_5_F", {8203.46,8775.56,0.094923}, {{0.847742,-0.52694,-0.0605614},{0.029589,-0.0670187,0.997313}}, true },
        { "Land_HBarrier_5_F", {8213.22,8781.17,0.0560451}, {{-0.289995,0.95312,0.0863969},{0.0479446,-0.0756943,0.995978}}, true },
        { "Land_BarGate_F", {8220.44,8782.99,0}, {{-0.114469,0.993427,0},{0,0,1}}, false },
        { "Land_Mil_ConcreteWall_F", {8223.92,8796.41,4.76837e-007}, {{0.975071,0.221895,0},{0,0,1}}, true },
        { "Land_Mil_ConcreteWall_F", {8214.73,8791.15,4.76837e-007}, {{0.990362,0.138503,0},{0,0,1}}, true },
        { "Land_Mil_ConcreteWall_F", {8215.21,8786.69,0}, {{0.990362,0.138503,0},{0,0,1}}, true },
        { "Land_Mil_ConcreteWall_F", {8214.22,8795.5,0}, {{0.990362,0.138503,0},{0,0,1}}, true },
        { "Land_Mil_ConcreteWall_F", {8222.54,8800.68,4.76837e-007}, {{-0.913812,-0.406138,0},{0,0,1}}, true },
        { "Land_Wreck_Heli_Attack_01_F", {8230.12,8702.72,-0.0943418}, {{0,0.991907,-0.126964},{0.109733,0.126197,0.985917}}, true },
        { "Land_SignM_WarningMilitaryArea_english_F", {8238.98,8738.46,0}, {{-0.7157,0.698408,0},{0,0,1}}, true },
        { "Flag_RedCrystal_F", {8235.69,8742.08,0}, {{0,1,0},{0,0,1}}, true },
        { "Land_HBarrier_5_F", {8238.48,8743.32,-0.203916}, {{0.812708,-0.564495,-0.144401},{0.173336,-0.00238033,0.98486}}, true },
        { "Land_HBarrier_5_F", {8240.79,8748.59,0.137378}, {{-0.952517,0.247559,0.177271},{0.185522,0.0102176,0.982587}}, true },
        { "Land_BarGate_F", {8232.11,8736.13,-4.76837e-007}, {{-0.552951,0.833214,0},{0,0,1}}, false },
        { "Land_BagFence_Long_F", {8238.28,8738.67,0.00416136}, {{0.592364,-0.798642,-0.106186},{0.173336,-0.00238033,0.98486}}, true },
        { "Land_BagFence_Corner_F", {8240.12,8739.77,0.0845289}, {{-0.478555,-0.87421,0.0821129},{0.173336,-0.00238033,0.98486}}, true },
        { "Land_BagFence_Corner_F", {8226.35,8730.97,0.0133686}, {{-0.995955,-0.077641,0.0452289},{0.0455516,-0.00238963,0.998959}}, true },
        { "Land_BagFence_Round_F", {8227.31,8729.58,0.00468349}, {{0.244496,0.96961,-0.00882935},{0.0455516,-0.00238963,0.998959}}, true },
        { "Land_BagFence_Round_F", {8229.18,8730.87,-0.014102}, {{-0.99371,0.102299,0.0455569},{0.0455516,-0.00238963,0.998959}}, true },
        { "Land_BagFence_Round_F", {8241.76,8742.07,-0.0326204}, {{-0.625078,-0.773034,0.108146},{0.173336,-0.00238033,0.98486}}, true },
        { "Land_BagFence_Round_F", {8241.81,8739.81,-0.0276465}, {{-0.663004,0.739182,0.118475},{0.173336,-0.00238033,0.98486}}, true },
        { "Land_LampHalogen_F", {8225.8,8735.55,-4.76837e-007}, {{0.942949,0.332936,0},{0,0,1}}, true },
        { "Land_LampHalogen_F", {8226.55,8734.46,0}, {{-0.649994,-0.75994,0},{0,0,1}}, true },
        { "Land_HBarrier_1_F", {8236.6,8740.2,1.57356e-005}, {{-0.633946,-0.773375,-0.00185001},{0,-0.00239211,0.999997}}, true },
        { "Land_HBarrier_1_F", {8227.19,8733.18,0.0010457}, {{0.938561,0.342549,-0.0419781},{0.0455516,-0.00238963,0.998959}}, true },
        { "Land_PaperBox_open_empty_F", {8234.91,8759.52,0.00190353}, {{-0.991253,-0.118236,0.0586348},{0.0519298,0.0590158,0.996905}}, true },
        { "Land_HBarrier_5_F", {8238.81,8765.79,0.00236273}, {{0.973259,0.152852,-0.171472},{0.168745,0.0307379,0.98518}}, true },
        { "Land_HBarrier_5_F", {8237.89,8771.46,0.00236273}, {{0.973259,0.152852,-0.171472},{0.168745,0.0307379,0.98518}}, true },
        { "Land_HBarrier_5_F", {8241.05,8754.42,-0.0505013}, {{0.970278,0.147022,-0.192213},{0.185522,0.0580706,0.980923}}, true },
        { "Land_HBarrier_5_F", {8239.78,8760.04,-0.0505013}, {{0.970278,0.147022,-0.192213},{0.185522,0.0580706,0.980923}}, true },
        { "Land_ScrapHeap_1_F", {8234.62,8771.85,-0.00834084}, {{-0.221623,0.975073,-0.0107328},{0.0884523,0.0310629,0.995596}}, true },
        { "Land_PaperBox_closed_F", {8236.63,8759.77,0.00311756}, {{0.988431,0.139408,-0.0597411},{0.0519298,0.0590158,0.996905}}, true },
        { "Land_Pallet_MilBoxes_F", {8235.1,8762.83,0.00204849}, {{-0.980306,-0.191075,0.0499058},{0.0519288,-0.00559174,0.998635}}, true },
        { "Land_GarbageHeap_04_F", {8237.09,8757.11,-0.00887489}, {{0,0.998252,-0.0590955},{0.0519298,0.0590158,0.996905}}, true },
        { "Land_GarbagePallet_F", {8235.77,8755.07,-0.0131106}, {{0,0.998252,-0.0590955},{0.0519298,0.0590158,0.996905}}, true },
        { "Land_Garbage_square5_F", {8229.27,8768.14,-0.00140619}, {{0,0.999984,0.00559929},{0.0519288,-0.00559174,0.998635}}, true },
        { "Land_GarbageBags_F", {8238.65,8753.3,0.137726}, {{0,0.998252,-0.0590965},{0.185522,0.0580706,0.980923}}, true },
        { "Land_Wreck_Hunter_F", {8228.89,8799.27,-0.0184212}, {{-0.784361,0.607893,0.123465},{0.0971384,-0.0762128,0.992349}}, true },
        { "Land_BagBunker_Small_F", {8227.83,8787.76,0.0522332}, {{0.203236,-0.975907,-0.0793713},{0.116795,-0.0563211,0.991558}}, true },
        { "Flag_NATO_F", {8226.87,8781.72,4.76837e-007}, {{0,1,0},{0,0,1}}, true },
        { "Land_PowerGenerator_F", {8232.82,8780.23,0.00719833}, {{-0.752689,0.650498,0.101543},{0.116795,-0.0198578,0.992957}}, true },
        { "Land_HBarrier_5_F", {8236.95,8777.19,0.0915666}, {{0.980661,0.160399,-0.112141},{0.116795,-0.0198578,0.992957}}, true },
        { "Land_HBarrier_5_F", {8233.95,8782.17,-0.231368}, {{-0.600282,-0.797919,0.05465},{0.116795,-0.0198578,0.992957}}, true },
        { "Land_HBarrier_5_F", {8228.36,8783.77,-0.186376}, {{0.0708746,-0.995973,-0.054904},{0.0884518,-0.0485504,0.994897}}, true },
        { "Land_LampHalogen_F", {8228.48,8780.74,0}, {{0.873624,0.486601,0},{0,0,1}}, true },
        { "Land_LampHalogen_F", {8234.58,8779,1.43051e-006}, {{-0.812201,0.583377,0},{0,0,1}}, true },
        { "Land_Mil_ConcreteWall_F", {8225.03,8792.2,4.76837e-007}, {{-0.956993,-0.290112,0},{0,0,1}}, true },
        { "Land_LuggageHeap_01_F", {8287.5,8720.69,0.00329256}, {{0,0.99998,-0.0063944},{0.112874,0.00635354,0.993589}}, true },
        { "Land_LuggageHeap_04_F", {8288.41,8718.79,0.000181437}, {{0,0.99998,-0.0063944},{0.112874,0.00635354,0.993589}}, true },
        { "Land_LuggageHeap_04_F", {8285.92,8722.28,0.00569487}, {{0.623789,-0.780154,-0.0474102},{0.0837045,0.00637196,0.99647}}, true },
        { "Land_LuggageHeap_03_F", {8287.61,8722.98,0.00234711}, {{0,0.99998,-0.0063944},{0.112874,0.00635354,0.993589}}, true },
        { "Land_LuggageHeap_03_F", {8290.21,8719.18,0.00234711}, {{0,0.99998,-0.0063944},{0.112874,0.00635354,0.993589}}, true },
        { "Land_LuggageHeap_02_F", {8287.69,8721.73,-0.00678658}, {{0,0.99998,-0.0063944},{0.112874,0.00635354,0.993589}}, true },
        { "Land_LuggageHeap_05_F", {8289.71,8721.17,0.0191203}, {{0,0.99998,-0.0063944},{0.112874,0.00635354,0.993589}}, true },
        { "Land_LuggageHeap_05_F", {8285.86,8719.33,0.0138569}, {{0,0.99998,-0.0063944},{0.0837045,0.00637196,0.99647}}, true },
        { "Land_Sign_WarningNoWeapon_F", {8280.21,8727.94,0}, {{0.999999,-0.00138812,0},{0,0,1}}, true },
        { "Land_Wreck_HMMWV_F", {8289.57,8738.86,0}, {{-0.999304,0.0373081,0},{0,0,1}}, true },
        { "Land_PortableLight_double_F", {8278.5,8730.81,0}, {{0.0128195,0.999918,0},{0,0,1}}, true },
        { "Land_UWreck_FishingBoat_F", {8312.56,8711.5,-0.266865}, {{0.868645,0.494922,-0.0225495},{0.063074,-0.0653286,0.995868}}, true },
        // "Western" Trader Camp
        { "Land_CampingChair_V1_F", {2311.88,3409.6,0.0055542}, {{-0.933025,0.3464,-0.0973245},{-0.116795,-0.0357304,0.992513}}, true },
        { "Land_CampingChair_V1_F", {2313.02,3407.45,0.0010376}, {{-0.364928,-0.930023,-0.0434126},{-0.0271882,-0.0359633,0.998983}}, true },
        { "Land_CampingChair_V2_F", {2314.42,3410.46,0.000213623}, {{0.653104,0.755931,0.0449882},{-0.0271882,-0.0359633,0.998983}}, true },
        { "Land_Bench_F", {2315.26,3408.7,-0.000488281}, {{0.252638,0.966663,0.0416755},{-0.0271882,-0.0359633,0.998983}}, true },
        { "PortableLight_Single_SIM_EPOCH", {2320.64,3416.14,0.000808716}, {{0.850793,0.524976,-0.0234907},{0.0127978,0.0239893,0.99963}}, true },
        { "PortableLight_Single_SIM_EPOCH", {2328.91,3388.61,0.00326538}, {{-0.921127,0.387624,-0.0356616},{-0.0487428,-0.0239649,0.998524}}, true },
        { "Land_GarbageContainer_open_F", {2330.92,3398.96,0.000228882}, {{0.977381,-0.210993,0.014426},{-0.011995,0.012797,0.999846}}, true },
        { "Land_BarrelWater_F", {2345.1,3379.22,0.00137329}, {{0,0.999233,-0.0391708},{-0.0431594,0.0391343,0.998301}}, true },
        { "Land_BarrelWater_F", {2345.7,3379.17,0.00138855}, {{0,0.999233,-0.0391708},{-0.0431594,0.0391343,0.998301}}, true },
        { "Land_BarrelWater_F", {2345.5,3378,0.00137329}, {{0.582642,-0.81073,0.0569705},{-0.0431594,0.0391343,0.998301}}, true },
        { "Land_CampingTable_F", {2331.68,3386.26,0.00161743}, {{-0.725634,-0.688029,-0.00846754},{-0.0487416,0.0391227,0.998045}}, true },
        { "Land_TablePlastic_01_F", {2334.87,3407.46,0.000106812}, {{-0.995764,0.0919293,-0.00147084},{0,0.0159977,0.999872}}, true },
        { "Land_WoodenTable_large_F", {2338.3,3401.98,0.000213623}, {{0.96056,-0.277419,0.0190381},{-0.0151952,0.0159958,0.999757}}, true },
        { "Land_Bench_F", {2362.77,3418.12,0.000488281}, {{-0.963148,0.268955,0.00307803},{0.0168009,0.0487359,0.99867}}, true },
        { "Land_Bench_F", {2359.21,3415.32,-0.000915527}, {{0.0511924,0.998687,-0.00182742},{0.0191947,0.000845572,0.999815}}, true },
        { "Land_HelipadSquare_F", {2320.92,3354.75,-1.52588e-005}, {{0.67542,0.737433,0.000311218},{-0.0829134,0.0755215,0.993691}}, true },
        { "Land_TentDome_F", {2313.72,3418.62,-0.00376892}, {{-0.807417,-0.589473,0.0244832},{0.0127978,0.0239893,0.99963}}, true },
        { "Land_TentDome_F", {2316.23,3405.6,-0.00708008}, {{0.939469,0.34054,0.0378279},{-0.0271882,-0.0359633,0.998983}}, true },
        { "Land_TentDome_F", {2318.97,3417.68,-0.0156403}, {{-0.899506,0.436907,0.001031},{0.0127978,0.0239893,0.99963}}, true },
        { "Land_TentDome_F", {2318.86,3417.65,-0.00643921}, {{-0.899506,0.436907,0.001031},{0.0127978,0.0239893,0.99963}}, true },
        { "Land_TentDome_F", {2319.62,3410.17,-0.00038147}, {{0.81714,0.576298,-0.0127619},{0.0127978,0.00399642,0.99991}}, true },
        { "Land_CampingChair_V1_folded_F", {2320.91,3413.5,1.52588e-005}, {{-0.737724,-0.674615,0.0256342},{0.0127978,0.0239893,0.99963}}, true },
        { "Land_Garbage_square3_F", {2314.48,3401.96,0.00643921}, {{0,0.999353,0.0359766},{-0.0271882,-0.0359633,0.998983}}, true },
        { "Land_Garbage_square5_F", {2315.04,3415.47,-0.00216675}, {{0,0.999712,-0.0239912},{0.0127978,0.0239893,0.99963}}, true },
        { "Land_Campfire_F", {2313.85,3408.93,-0.000305176}, {{0,0.999353,0.0359766},{-0.0271882,-0.0359633,0.998983}}, false },
        { "ProtectionZone_Invisible_F", {2335.17,3394.12,0.000732422}, {{0.159745,0.9871,-0.0107174},{-0.011995,0.012797,0.999846}}, true },
        { "Land_PortableLight_single_F", {2339.4,3377.5,-0.00457764}, {{-0.641599,-0.76704,0},{0,0,1}}, true },
        { "Land_ClothShelter_02_F", {2343.39,3379.52,0.00270081}, {{0,0.999233,-0.0391708},{-0.0431594,0.0391343,0.998301}}, true },
        { "Land_Garbage_square3_F", {2326.63,3392.23,0.00495911}, {{0,0.999712,0.0239934},{-0.0487428,-0.0239649,0.998524}}, true },
        { "Land_Garbage_square3_F", {2342.08,3398.28,-0.00131226}, {{0,0.999954,-0.00959931},{-0.0151952,0.0095982,0.999838}}, true },
        { "Land_Garbage_square5_F", {2345.81,3385.1,-0.00442505}, {{0,0.997531,-0.070225},{-0.012,0.07022,0.997459}}, true },
        { "Land_Garbage_square5_F", {2336.22,3388.28,0.00367737}, {{0,0.999712,0.0239934},{-0.0487428,-0.0239649,0.998524}}, true },
        { "Land_StallWater_F", {2341.81,3379.84,0.00115967}, {{-0.997554,-0.0566793,-0.0409052},{-0.0431594,0.0391343,0.998301}}, true },
        { "Land_PortableLight_single_F", {2332.02,3405.45,0}, {{-0.995439,0.0954,0},{0,0,1}}, true },
        { "Land_PartyTent_01_F", {2335.71,3404.76,0.000320435}, {{-0.155449,-0.987718,0.0158032},{0,0.0159977,0.999872}}, true },
        { "Land_GarbageWashingMachine_F", {2330.29,3421.09,0.00328064}, {{0,0.998436,0.0559132},{-0.10659,-0.0555947,0.992748}}, true },
        { "Land_Garbage_square5_F", {2342.82,3414.69,0.00460815}, {{0,0.998436,0.0559122},{-0.0127979,-0.0559077,0.998354}}, true },
        { "Land_Garbage_line_F", {2344.54,3410.43,0.0129242}, {{-0.8827,-0.469929,-0.00265337},{-0.0127979,0.0183943,0.999749}}, true },
        { "Land_Wreck_CarDismantled_F", {2331.54,3426.21,0.0324249}, {{0.655651,0.749953,0.0877054},{-0.10659,-0.0230633,0.994036}}, true },
        { "Land_GarbageHeap_01_F", {2356.66,3389.44,0.000198364}, {{0.997743,-0.0656321,0.0141985},{-0.0135972,0.00959842,0.999861}}, true },
        { "Land_Bench_01_F", {2365.13,3414.81,0}, {{0.979477,-0.201554,0},{0,0,1}}, true },
        { "Land_Garbage_square5_F", {2359.55,3413.34,-0.000778198}, {{0,1,-0.000845728},{0.0191947,0.000845572,0.999815}}, true },
        { "Land_Campfire_F", {2362.33,3415.94,-0.000335693}, {{0,0.998811,-0.0487416},{0.0670486,0.0486319,0.996564}}, false },
        { "Land_Wreck_Van_F", {2361.54,3427.32,0.00337219}, {{0,0.999712,-0.0239937},{0.0423613,0.0239722,0.998815}}, true }

    };
	staticNpcPos[] = {
		// Eastern Trader Camp
		{ "C_man_hunter_1_F", { 8232.18, 8771.34, 0.00125885 }, 256 },
		{ "C_man_pilot_F", { 8233.3, 8761.5, 0.00149393 }, 270 },
		{ "C_man_w_worker_F", { 8221.92, 8738.06, 0.00143862 }, 010 },
		{ "C_scientist_F", { 8209.06, 8761.39, 0.00152349 }, 054 },
		// "Northern" Trader Camp
		{ "C_man_polo_5_F", { 3040.71, 8465.4, 0.00144076 }, 052 },
		{ "C_journalist_F", { 3079.2, 8474.5, 0.00206375 }, 290 },
		{ "C_man_p_shorts_1_F_afro", { 3023.66, 8483.85, 8.38264 }, 047 },
		{ "C_man_polo_6_F", { 3080.98, 8496.67, 0.00145102 }, 258 },
		{ "C_man_shorts_2_F", { 3080.35, 8505.38, 0.00143909 }, 250 },
		// "Western" Trader Camp
		{ "C_man_polo_2_F_euro", { 2334.19, 3405.76, 0.00138855 }, 095 },
		{ "C_man_polo_1_F", { 2343.79, 3378.75, 0.00138855 }, 004 },
		{ "C_man_p_beggar_F", { 2330.36, 3388.18, 0.00140381 }, 082 }
	};
};
