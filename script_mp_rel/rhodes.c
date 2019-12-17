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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = false;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	bool bLocal_97 = false;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	bool bLocal_103 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_21 = ((*Global_1887327)[111 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 25);
	iLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes - m_volGeneralOwner_DS Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_29, 1328.412f, -1292.11f, 77.3881f, 0f, 0f, -25.26236f, 6.60765f, 6.448709f, 2.912f);
	VOLUME::_0x39816F6F94F385AD(iLocal_29, 1324.871f, -1290.512f, 77.3881f, 0f, 0f, -24.32128f, 1.455032f, 6.472947f, 2.912f);
	VOLUME::_0x39816F6F94F385AD(iLocal_29, 1322.556f, -1291.914f, 77.3881f, 0f, 0f, -24.88738f, 1.644745f, 1.92852f, 2.912f);
	VOLUME::_0x39816F6F94F385AD(iLocal_29, 1323.714f, -1288.983f, 79.01204f, 0f, 0f, -25.93809f, 1.384575f, 4.53235f, 5.744565f);
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		iLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes - m_volGeneralOwner_US Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_30, 1325.331f, -1288.039f, 80.02451f, 0f, 0f, -24.26809f, 3.071211f, 1.555256f, 3.603793f);
		VOLUME::_0x39816F6F94F385AD(iLocal_30, 1327.144f, -1291.541f, 80.54637f, 0f, 0f, -24.82035f, 9.622256f, 6.45655f, 2.668802f);
		iLocal_70 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1289.142f, -1305.846f, 77.34f, 0f, 0f, 139.649f, 12.37f, 19.599f, 5.349f, "BRL_RHODES - Bank");
		iLocal_71 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1294.033f, -1303.264f, 77.05783f, 0f, 0f, -39.18061f, 1.50496f, 1.39075f, 2.166013f, "Rhodes - Bank prompt");
		iLocal_72 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1286.038f, -1302.973f, 77.05783f, 0f, 0f, -39.18061f, 2.506553f, 1.39075f, 2.166013f, "Rhodes - Bank offlimits");
		VOLUME::_0xB469CFD9E065EB99(iLocal_70, 10096);
		iLocal_33 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1325.218f, -1295.987f, 77.33764f, 0f, 0f, -25.37787f, 9.315759f, 3.709891f, 3.239843f, "Rhodes - m_volGeneralPorch");
		iLocal_40 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1328.033f, -1293.45f, 77.19467f, 0f, 0f, -24.13628f, 1.689458f, 2.836409f, 2.356988f, "Rhodes - m_volGeneralPrompt");
		iLocal_34 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1329.888f, -1294.527f, 77.19467f, 0f, 0f, -25.61476f, 1.321021f, 3.356372f, 2.356988f, "Rhodes - m_volGeneralCounterOff");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_30, iLocal_34);
		iLocal_81 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes - m_volWhiteSlumsDogOwner");
		VOLUME::_0x39816F6F94F385AD(iLocal_81, 1305.094f, -1133.663f, 88.6923f, 0f, 0f, -36.09979f, 10.1341f, 7.94723f, 19.78896f);
		VOLUME::_0x39816F6F94F385AD(iLocal_81, 1314.041f, -1132.649f, 85.41996f, 0f, 0f, -20.04774f, 27.60419f, 10.62754f, 11.45993f);
	}
	else
	{
		iLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes - m_volGeneralOwner_US");
		VOLUME::_0x39816F6F94F385AD(iLocal_30, 1328.336f, -1290.497f, 77.16785f, 0f, 0f, -24.13627f, 1.689458f, 2.836409f, 2.356988f);
		iLocal_34 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1329.258f, -1291.398f, 77.19467f, 0f, 0f, -25.61476f, 1f, 1f, 2.356988f, "Rhodes - m_volGeneralCounterOff");
		iLocal_40 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1328.361f, -1292.545f, 77.16785f, 0f, 0f, -24.13627f, 1.689458f, 5f, 2.356988f, "Rhodes - m_volGeneralPrompt");
		iLocal_70 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1289.142f, -1305.846f, 77.34f, 0f, 0f, 139.649f, 12.37f, 19.599f, 5.349f, "BRL_RHODES - Bank");
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_70, 0, 0, 0, -1, -1, 0);
		iLocal_22 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1229.248f, -1296.111f, 77.78931f, 0f, 0f, 45f, 5.400117f, 12.70134f, 3.920313f, "Rhodes - m_volTrainStationPARENT Agg");
	}
	iLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes - m_volGeneralOwner_PARENT Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_31, iLocal_29);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_31, iLocal_30);
	iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1326.922f, -1291.569f, 79.783f, 0f, 0f, 155.6584f, 13.018f, 12.553f, 9.577f, "Rhodes - m_volGeneral Owner");
	VOLUME::_0xB469CFD9E065EB99(iLocal_31, 10102);
	iLocal_35 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1322.924f, -1321.214f, 78.1557f, 0f, 0f, -15.47123f, 2.962892f, 1.419545f, 2.523224f, "Rhodes - m_volGunsmithPrompt");
	iLocal_36 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1327.209f, -1317.603f, 78.3512f, 0f, 0f, -15.61039f, 10.25591f, 2.999929f, 3.239843f, "Rhodes - m_volGunsmithPorch");
	iLocal_37 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes - m_volGunsmith_Off Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_37, 1327.031f, -1325.331f, 78.1557f, 0f, 0f, -15.04306f, 4.545384f, 2.596381f, 2.523224f);
	VOLUME::_0x39816F6F94F385AD(iLocal_37, 1322.495f, -1325.072f, 78.156f, 0f, 0f, -15.42848f, 4.452f, 4.786f, 2.523224f);
	VOLUME::_0x39816F6F94F385AD(iLocal_37, 1327.033f, -1327.818f, 78.156f, 0f, 0f, -15.42848f, 5.936f, 1.823f, 2.523f);
	VOLUME::_0x39816F6F94F385AD(iLocal_37, 1319.863f, -1324.946f, 78.156f, 0f, 0f, -15.42848f, 0.878f, 3.682f, 2.523f);
	iLocal_38 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes - m_volGunsmith_PARENT Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_38, 1325.168f, -1323.554f, 75.611f, 0f, 0f, -14.722f, 8.334f, 8.863f, 8.591f);
	VOLUME::_0x39816F6F94F385AD(iLocal_38, 1328.794f, -1328.319f, 75.86505f, 0f, 0f, -15.43357f, 2.198632f, 1.86921f, 6.623033f);
	VOLUME::_0x39816F6F94F385AD(iLocal_38, 1320.511f, -1325.132f, 75.86505f, 0f, 0f, -15.43357f, 2.198632f, 3.677522f, 6.623033f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_38, 10103);
	iLocal_39 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1326.275f, -1320.495f, 80.448f, 0f, 0f, -15.5f, 12.376f, 13.509f, 7.409f, "Rhodes - m_volGunsmith Owner");
	iLocal_41 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1319.062f, -1141.891f, 82.8495f, 0f, 0f, -21.30082f, 7.675726f, 3.517057f, 5.152f, "Rhodes - m_volFence");
	iLocal_42 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1320.373f, -1142.37f, 81.99889f, 0f, 0f, -20.874f, 3.006117f, 2.156289f, 5.725f, "Rhodes - m_volFencePrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_41, 10101);
	iLocal_75 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_53(111), 0f, 0f, -20f, 5f, 5f, 5f, "Rhodes - m_vol_SheriffStation");
	iLocal_76 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1357.908f, -1304.094f, 77.4f, 0f, 0f, -20f, 11.367f, 15.188f, 8.228f, "Rhodes - m_vol_Sheriff Owner");
	if (!aggregate.aberdeenpigfarm.func_123())
	{
		iLocal_77 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1360.667f, -1301.516f, 77.8f, 0f, 0f, -20f, 5.669293f, 8.551543f, 5f, "Rhodes - m_volSheriffStationLoitering");
		VOLUME::_0x3EFABB21E14A6BD1(iLocal_77, 5, 1);
	}
	iLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes - m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 1228.472f, -1296.871f, 77.554f, 0f, 0f, 46f, 3.38f, 6.503f, 4.035f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 1226.197f, -1297.297f, 77.554f, 0f, 0f, 46f, 1.222f, 3.986f, 3.92f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 1231.745f, -1300.01f, 77.554f, 0f, 0f, 46f, 2.894f, 2.755f, 3.92f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, 1225.236f, -1293.672f, 77.554f, 0f, 0f, 46f, 2.894f, 2.686f, 3.92f);
	iLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Rhodes - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_26, 1225.436f, -1293.831f, 77.78244f, 0f, 0f, -44.04891f, 1.531311f, 2.322421f, 3.736468f);
	iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1228.464f, -1296.895f, 77.79596f, 0f, 0f, 45f, 2.921727f, 6.382761f, 3.920313f, "Rhodes - m_volPostOfficeOfflimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_25, 10104);
	iLocal_43 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1296.911f, -1279.125f, 76.30206f, 0f, 0f, 143.609f, 6.017687f, 8.127035f, 4.350539f, "Rhodes - m_volButcher");
	iLocal_44 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1296.272f, -1279.315f, 75.90471f, 0f, 0f, 56.654f, 1.137136f, 2.311f, 2.480459f, "Rhodes - m_volButcherPrompt");
	iLocal_45 = VOLUME::_0x0EB78C2B156635B1(-1612834106, 1297.474f, -1277.489f, 75.905f, 0f, 0f, 56.654f, 2.137f, 3.011f, 2.48f);
	VOLUME::_0xBE551C2CC421185D(iLocal_45, 1);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_45, 0);
	VOLUME::_0xB469CFD9E065EB99(iLocal_43, 10098);
	iLocal_82 = VOLUME::_0x0EB78C2B156635B1(-1612834106, 1295.792f, -1278.091f, 75.254f, 0f, 0f, -121.549f, 2.024f, 1.461f, 2.48f);
	VOLUME::_0x5B23DFF8E0948BB2(iLocal_82, 1);
	iLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1289.736f, -1305.109f, 80.124f, 0f, 0f, 139.979f, 15.372f, 26.066f, 9.377f, "BRL_RHODES - Bank Owner");
	iLocal_93 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(1331.1f, -1284.6f, 76.5f, 120f, 3f, 3f, 0, 6f, 10f, 25f, 7.5f);
	iLocal_74 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volRhodesRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_74, 1365f, -1205f, 70f, 0f, 0f, 56f, 200f, 50f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_74, 1412.5f, -1290f, 70f, 0f, 0f, 98f, 300f, 100f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_74, 1330f, -1350f, 70f, 0f, 0f, 138f, 275f, 100f, 40f);
	VOLUME::_0x39816F6F94F385AD(iLocal_74, 1327.5f, -1225f, 70f, 0f, 0f, 94f, 225f, 160f, 40f);
	aggregate.annesburg.func_54(iLocal_74);
	aggregate.aberdeenpigfarm.func_23();
	func_57();
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1231.031f, -1295.826f, 77.796f, 0f, 0f, 46.091f, 8.632f, 22.405f, 3.92f, "Rhodes - m_volTrainStation");
	return true;
}

void func_16(int iParam0)
{
	struct<16> Var0;

	iParam0 = iParam0;
	TASK::_0x6C269F673C47031E(1819512979);
	if (func_58())
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(599196017) <= 0)
		{
			if (!aggregate.dynamic_craft_scenario.func_20("rhodes_donkeys"))
			{
				StringCopy(&(Var0.f_10), "rhodes_donkeys", 32);
				Var0.f_14 = 512;
				Var0.f_15 = 0;
				aggregate.dynamic_craft_scenario.func_68(Var0, 0);
			}
		}
	}
}

bool func_17(int iParam0)
{
	iParam0 = iParam0;
	iLocal_83 = OBJECT::GET_RAYFIRE_MAP_OBJECT(1353.15f, -1302.531f, 76.808f, 4f, "des_rho_sheriff");
	if (!TASK::_0xF97F462779B31786(1819512979))
	{
		return false;
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_83))
	{
		if (aggregate.adlerranch.func_93(-1164215952))
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_83, 4);
		}
		else if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_83) != 10)
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_83, 9);
		}
		return true;
	}
	return false;
}

void func_26()
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
	}
}

void func_27()
{
	aggregate.armadillo.func_58(2, 1343.574f, -1375.64f, 79.4806f, iLocal_79, 111);
}

void func_29(int iParam0)
{
	aggregate.annesburg.func_63(3, iLocal_31, iParam0, iLocal_40, iLocal_34, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(3, 972368328, 0, 0);
	aggregate.annesburg.func_66(3, 1060413677, 0, 0);
	aggregate.annesburg.func_64(3, 8192);
	aggregate.beechershope.func_59(3, 0);
	aggregate.annesburg.func_63(6, iLocal_38, iParam0, iLocal_35, iLocal_37, 20, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(6, 393076024, 0, 0);
	aggregate.annesburg.func_66(6, 934926308, 0, 0);
	aggregate.annesburg.func_66(6, 743565308, 0, 0);
	aggregate.beechershope.func_59(6, 0);
	aggregate.annesburg.func_63(25, iLocal_75, iParam0, 0, 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(25, 1);
	aggregate.annesburg.func_64(25, 16384);
	aggregate.annesburg.func_64(25, 8192);
	aggregate.annesburg.func_64(25, 536870912);
	aggregate.aberdeenpigfarm.func_115();
	aggregate.blackwater.func_72(36);
	aggregate.annesburg.func_63(10, iLocal_43, iParam0, iLocal_44, 0, 460, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_64(10, 536870912);
	aggregate.beechershope.func_59(10, 0);
	aggregate.annesburg.func_63(4, iLocal_41, iParam0, iLocal_42, 0, 44, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.beechershope.func_59(4, 0);
	aggregate.annesburg.func_63(2, iLocal_22, iParam0, iLocal_26, iLocal_27, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate.annesburg.func_66(2, 414143916, 0, 0);
	aggregate.annesburg.func_66(2, 1567970773, 0, 0);
	aggregate.annesburg.func_66(2, 2049773380, 0, 0);
	aggregate.annesburg.func_66(2, 1404294126, 0, 0);
	aggregate.annesburg.func_66(2, -1088690954, 0, 0);
	aggregate.annesburg.func_66(2, -1627226365, 0, 0);
	aggregate.annesburg.func_66(2, 269176415, 0, 0);
	aggregate.annesburg.func_66(2, -293074087, 0, 0);
	aggregate.beechershope.func_59(2, 0);
	aggregate.blackwater.func_73(iParam0);
}

void func_36(int iParam0, var uParam1)
{
	aggregate.aguasdulces.func_59(uParam1, iLocal_21, 1);
	aggregate.aguasdulces.func_59(uParam1, iLocal_31, 2);
	aggregate.aguasdulces.func_59(uParam1, iLocal_38, 2);
}

void func_37(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_58(iParam0))
	{
		return;
	}
	aggregate.aberdeenpigfarm.func_59();
	aggregate.annesburg.func_72(0, 390157385);
	aggregate.annesburg.func_72(2, -1048652410);
}

bool func_40(int iParam0)
{
	func_80();
	if (aggregate.adlerranch.func_61(&bLocal_97))
	{
		if (bLocal_97)
		{
			aggregate.armadillo.func_69(1410133961, 1);
		}
	}
	aggregate.annesburg.func_79(39, iLocal_24, &uLocal_23);
	return false;
}

Vector3 func_53(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 2907.465f, 1311.91f, 45.43893f;
		case 81:
			return -275.6f, 805.3f, 119.4f;
		case 40:
			return -763f, -1269.2f, 44.5f;
		case 26:
			return -1809.3f, -349.3f, 164.6f;
		case 5:
			return 2512.3f, -1306f, 48f;
		case 111:
			return 1359.2f, -1302.9f, 77.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_57()
{
	iLocal_79 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1344.191f, -1375.425f, 82.6817f, 0f, 0f, 80.20001f, 11.88789f, 17.40125f, 7.115791f, "volSaloonParlorHouseInterior");
}

bool func_58()
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return false;
	}
	return true;
}

void func_80()
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(1296.185f, -1132.093f, 83.05431f);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (aggregate.adlerranch.func_93(1441416901))
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "rho_slum_player_trelawny01_stage_01"))
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "rho_slum_player_trelawny01_stage_01", 1);
				}
				if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "rho_slum_player_trelawny01_stage_02"))
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "rho_slum_player_trelawny01_stage_02", 0);
				}
			}
			else
			{
				if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "rho_slum_player_trelawny01_stage_02"))
				{
					INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, "rho_slum_player_trelawny01_stage_02", 1);
				}
				if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, "rho_slum_player_trelawny01_stage_01"))
				{
					INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "rho_slum_player_trelawny01_stage_01", 0);
				}
			}
		}
	}
}

void func_100(int iParam0)
{
	aggregate.aguasdulces.func_58(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_74))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_74);
		POPULATION::_0xA1CFB35069D23C23(iLocal_74);
	}
	if (bLocal_84)
	{
		aggregate.caligahall.func_112(1);
	}
	func_178(iLocal_21, &bLocal_84);
	aggregate.annesburg.func_166(iLocal_80);
	VEHICLE::_REMOVE_SPEED_ZONE(iLocal_93);
	TASK::_0x9667CCE29BFA0780(1819512979);
	func_180(&uLocal_96, iLocal_74, 0);
	if (HUD::_0x2C729F2B94CEA911("SCVRAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("SCVRAUD"))
		{
			HUD::_0xAA03F130A637D923("SCVRAUD");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("RHRGNAU"))
	{
		if (HUD::_0xD0976CC34002DB57("RHRGNAU"))
		{
			HUD::_0xAA03F130A637D923("RHRGNAU");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("REDBAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("REDBAUD"))
		{
			HUD::_0xAA03F130A637D923("REDBAUD");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("REPAAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("REPAAUD"))
		{
			HUD::_0xAA03F130A637D923("REPAAUD");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("RHDSTFA"))
	{
		if (HUD::_0xD0976CC34002DB57("RHDSTFA"))
		{
			HUD::_0xAA03F130A637D923("RHDSTFA");
		}
	}
	if (HUD::_0x2C729F2B94CEA911("SRRGAUD"))
	{
		if (HUD::_0xD0976CC34002DB57("SRRGAUD"))
		{
			HUD::_0xAA03F130A637D923("SRRGAUD");
		}
	}
}

void func_176()
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return;
	}
	func_232(iLocal_73);
	func_232(iLocal_43);
	func_232(iLocal_41);
	func_232(iLocal_32);
	func_232(iLocal_39);
	func_232(iLocal_25);
	func_232(iLocal_28);
	func_232(iLocal_27);
	func_232(iLocal_78);
	func_232(iLocal_76);
}

void func_178(int iParam0, bool bParam1)
{
	if (VOLUME::_0x666C2F53ABEFC952(iParam0) != 623901053)
	{
		VOLUME::_0xFD010A2154B40676(iParam0, 623901053);
	}
	if (bParam1->f_4)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 20, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 19, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 0);
		bParam1->f_4 = 0;
	}
}

void func_180(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam1);
	POPULATION::_0x74C2B3DC0B294102(iParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

void func_232(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x6D5F9E69BA1BE783(iParam0);
	}
}

