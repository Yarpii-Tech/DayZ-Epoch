class Farm : Default
{
	zombieChance = 0.3;
	maxRoaming = 3;
	zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_new_villager2","z_new_villager3","z_new_villager4"};
	lootChance = 0.5;
	lootGroup = Farm;
};

class Land_stodola_old_open: Farm {
	zedPos[] = {{-2.58887,-5.9209,-5.08057},{-3.06787,8.63086,-5.08057},{2.52539,10.5234,-5.08044},{4.11035,-10.9307,-5.07043},{-2.62793,-6.55762,-0.99585},{-2.79443,10.2344,-0.993469},{4.62646,10.498,-0.993408},{4.76807,5.00781,-0.993408},{0.749023,-10.5703,2.96448},{1.09131,10.6787,2.96448}};
	lootPos[] = {{-3.06787,8.63086,-5.08057},{2.52539,10.5234,-5.08044},{4.76807,5.00781,-0.993408},{-2.79443,10.2344,-0.993469},{4.62646,10.498,-0.993408},{1.09131,10.6787,2.96448},{-2.58887,-5.9209,-5.08057},{4.11035,-10.9307,-5.07043},{-2.62793,-6.55762,-0.99585},{0.749023,-10.5703,2.96448}};
	lootPosSmall[] = {{2.7832,-9.15698,-4.13055},{-1.83765,7.05908,-4.13055},{3.73218,-5.77075,-0.0403633},{0.913818,-11.1099,2.96444},{5.14795,-10.01,-0.997503},{-2.89819,7.21069,-5.08055},{1.79053,8.75171,-5.08055},{5.07788,9.51514,-0.993513},{3.65845,10.1985,2.96444},{0.85498,-3.37793,-4.13055}};
	hangPos[] = {{-1.50537,5.34473,-5.08813},{0.494141,9.42725,-5.09016},{2.59473,-6.21191,-5.08055},{-1.74854,-2.39844,-1.14301}};
};

class Land_Farm_Cowshed_a: Farm {
	zedPos[] = {{7.87988,2.94141,-3.08789},{9.74023,-2.48633,-3.08771},{-1.06836,-5.92188,-3.08765},{-1.32764,5.61426,-3.08765},{2.88428,-2.34473,-3.08765},{4.81982,5.72852,-3.08765},{8.83936,-5.60254,-3.06757}};
	lootPos[] = {{-1.06836,-5.92188,-3.08765},{8.83936,-5.60254,-3.06757},{9.74023,-2.48633,-3.08771},{2.88428,-2.34473,-3.08765},{7.87988,2.94141,-3.08789},{4.81982,5.72852,-3.08765},{-1.32764,5.61426,-3.08765}};
	lootPosSmall[] = {{-6.74829,-2.98145,-3.03766},{1.34399,3.79199,-3.03766}};
};

class Land_stodola_open: Farm {
	zedPos[] = {{-2.58228,-0.526367,-4.17346},{-0.0480957,-4.88965,-4.13593},{-2.60376,5.31641,-4.12805},{0.98291,6.20508,-4.11121}};
	lootPos[] = {{-2.60376,5.31641,-4.12805},{-2.58228,-0.526367,-4.17346},{-0.0480957,-4.88965,-4.13593},{0.98291,6.20508,-4.11121}};
	lootPosSmall[] = {{-4.22217,-6.12866,-3.32453}};
	hangPos[] = {{-0.932617,-3.35962,-4.16446},{-2.01563,-0.115112,-4.19492}};
};

class Land_Barn_W_01: Farm {
	zedPos[] = {{5.78711,18.9463,-2.62683},{-4.4646,16.665,-2.61633},{4.93188,-17.0469,-2.59064},{-3.82788,-18.6699,-2.59021},{-2.99072,-4.16992,-2.58276},{3.95435,4.88379,-2.57434}};
	lootPos[] = {{4.93188,-17.0469,-2.59064},{-3.82788,-18.6699,-2.59021},{-4.4646,16.665,-2.61633},{5.78711,18.9463,-2.62683},{3.95435,4.88379,-2.57434},{-2.99072,-4.16992,-2.58276}};
	lootPosSmall[] = {{4.09351,10.3872,-2.69559},{0.10791,3.48096,-2.64446},{-4.51636,-12.2603,-2.67148},{3.54419,-15.8311,-2.63077}};
};

class land_shed_m01: Farm { //DZE ADDED
	zedPos[] = {{0.218262,-1.78369,-0.347349}};
};

class Land_Barn_W_02: Farm {
	zedPos[] = {{3.35938,-0.151367,-2.31305},{-2.84351,0.213867,-2.31177},{-2.94604,-5.01465,-2.28998},{2.53711,-5.89258,-2.28949},{3.16479,5.56543,-2.28406},{-5.63306,4.83105,-2.26355}};
	lootPos[] = {{3.17,5.57,-2.28},{2.54,-5.89,-2.29},{-2.84,0.21,-2.31},{-5.63,4.83,-2.26},{-0.21,3.44,-2.31},{-0.74,-5.93,-2.31}};
};

class Land_Farm_Cowshed_c: Farm {
	zedPos[] = {{-2.41504,2.98633,-3.12582}};	
	lootPos[] = {{-2.41504,2.98633,-3.12582}};	
	lootPosSmall[] = {{-2.82446,3.18457,-3.11581}};
};

class Land_Farm_Cowshed_b: Farm {
	zedPos[] = {{0.0620117,0.0517578,-3.11111},{-4.77441,-2.4834,-3.05106},{4.68506,2.18945,-3.04105}};
	lootPos[] = {{4.68506,2.18945,-3.04105},{0.0620117,0.0517578,-3.11111},{-4.77441,-2.4834,-3.05106}};
	lootPosSmall[] = {{3.46802,3.36621,-3.05112},{-9.98511,-3.2793,-3.09109}};
};

class Land_Shed_W02: Farm {
	maxRoaming = 0;
	zedPos[] = {{0.688232,1.88281,-0.00292969}};
	lootPos[] = {{0.688232,1.88281,-0.00292969}};
};

//DZE ADDED BELOW
class land_jzd_kr2: Farm {
	lootPos[] = {{1.92139,-4.90527,-6.17321},{0.709961,5.00488,-6.17321},{1.8623,7.37109,1.40623},{3.00684,-3.30566,1.41873},{-3.0625,-3.38477,-2.05339},{-2.62646,10.8418,-2.05339}};
};
class land_jzd_kr1: Farm {
	lootPos[] = {{-1.04834,-3.67578,-6.27279},{1.63818,0.775391,-6.27279},{-1.41992,5.10449,-6.27279},{-0.993164,2.94629,-2.15298},{0.717285,-3.79688,-2.15298}};
};
class land_jzd_stodola2: Farm {
	lootPos[] = {{8.15527,11.8477,-2.0262},{5.5127,5.6377,-2.0262},{-4.16113,3.67383,-2.0262},{7.53223,-14.4741,-2.0262},{1.16992,0.390625,1.31123}};
};
class land_jzd_stodola1: Farm {
	lootPos[] = {{-3.81592,-11.418,-2.0262},{1.73877,-6.20605,-2.0262},{-4.13477,-0.265625,-2.0262},{-1.04883,0.180664,-2.0262}};
};
class Land_sara_stodola: Farm {
	lootPos[] = {{5.01367,3.33118,-2.19523},{2.51758,1.05737,-2.19523},{-1.30957,-1.02954,-2.19523},{-4.24414,4.0238,-2.19523},{5.16211,-0.661621,-2.19523}};
};