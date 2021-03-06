class BTR40_MG_base_EP1;
class BTR40_MG_TK_GUE_EP1_DZ : BTR40_MG_base_EP1 {
	scope = public;
	displayname = $STR_VEH_NAME_BTR40_DSHKM_GREEN;
	crew = "";
	typicalCargo[] = {};
	class TransportMagazines {};
	class TransportWeapons {};
	class Turrets;
	class MainTurret;
	hiddenSelectionsTextures[] = {"ca\wheeled_e\btr40\data\btr40ext_co.paa"};
};

class BTR40_MG_TK_GUE_EP1_DZE : BTR40_MG_TK_GUE_EP1_DZ {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
};

class BTR40_MG_TK_INS_EP1_DZ : BTR40_MG_TK_GUE_EP1_DZ {
	scope = public;
	displayname = $STR_VEH_NAME_BTR40_DSHKM_WOOD;
	hiddenSelectionsTextures[] = {"ca\wheeled_e\btr40\data\btr40extcamo_co.paa"};
};

class BTR40_MG_TK_INS_EP1_DZE : BTR40_MG_TK_INS_EP1_DZ {
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			magazines[] = {};
		};
	};
};

