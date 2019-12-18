#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
#endregion

// __EntryFunction__ == aggregate_func_1808

void func_2()
{
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(4150f, -3650f, 105f, 0f, 0f, 0f, 95f, 95f, 35f, "m_volTemple_Restriction");
	aggregate_func_1307(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3935f, -3340f, 65f, 0f, 0f, 0f, 125f, 125f, 35f, "m_volVilla_Restriction");
	aggregate_func_1307(iLocal_18);
	iLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3900f, -3200f, 60f, 0f, 0f, 0f, 15f, 15f, 20f, "m_volLightHouse_Restriction");
	aggregate_func_1307(iLocal_19);
	iLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3910f, -3820f, 65f, 0f, 0f, 42f, 100f, 70f, 35f, "m_volManicato_Restriction");
	aggregate_func_1307(iLocal_20);
	iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquatic_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 1198.392f, -6996.118f, 40.56991f, 0f, 0f, -13.19622f, 107.2032f, 48.4901f, 16.01354f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 1122.764f, -6966.072f, 41.7932f, 0f, 0f, -13.23685f, 54.31777f, 34.31042f, 13.34025f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_21, 1061.422f, -6968.24f, 41.39648f, 0f, 0f, 0f, 46.10505f, 24.56085f, 7.935126f);
	VOLUME::_0x39816F6F94F385AD(iLocal_21, 1004.815f, -6902.04f, 40.91697f, 0f, 0f, 22.01897f, 20.89131f, 114.5361f, 13.15669f);
	aggregate_func_1369(iLocal_21);
}

