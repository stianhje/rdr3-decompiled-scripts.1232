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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_21 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-5220.2f, -3472.4f, -20.6f, 0f, 0f, 0f, 100f, 125f, 70f, "m_volBenedictPoint");
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBenedictPostOffice Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -5226.037f, -3468.296f, -19.99f, 0f, 0f, 0f, 6.727f, 3.065f, 3.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -5227.384f, -3470.978f, -19.99f, 0f, 0f, 0f, 2.011f, 2.184f, 3.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -5230.431f, -3468.341f, -20.375f, 0f, 0f, 0f, 2.753f, 2.804f, 4f);
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBenedictPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -5227.361f, -3470.487f, -20.226f, 0f, 0f, 0f, 1.695f, 1.082f, 3f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, -5229.832f, -3468.299f, -20.656f, 0f, 0f, 0f, 1.109f, 2.187f, 3.106f);
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5226.061f, -3468.279f, -21.52f, 0f, 0f, 0f, 6.85f, 3.25f, 4f, "m_volBenedictPostOfficeOffLimits");
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
	}
	iLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Benedict Point - m_volTrainStation Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_26, -5226.061f, -3471.827f, -21.52f, 0f, 0f, 0f, 7.421f, 10.471f, 4f);
	VOLUME::_0x39816F6F94F385AD(iLocal_26, -5230.431f, -3468.341f, -20.375f, 0f, 0f, 0f, 2.753f, 2.804f, 4f);
	return true;
}

void func_29(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		aggregate.annesburg.func_63(2, iLocal_22, iParam0, iLocal_23, 0, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
		aggregate.annesburg.func_66(2, 411637818, 0, 0);
		aggregate.annesburg.func_66(2, 1848132471, 0, 0);
		aggregate.beechershope.func_59(2, 0);
	}
	else
	{
		func_61(2, 501, iLocal_22, iParam0, iLocal_23, iLocal_24, 1540096, (12.5f * 2f), 0, 0);
		func_62(2, 411637818, 0, 0);
		func_62(2, 1848132471, 0, 0);
		func_63(2, -5224.11f, -3465.51f, -21.52f, -146.961f);
	}
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	aggregate.annesburg.func_67(501, iLocal_22, 1);
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	aggregate.aguasdulces.func_59(uParam1, iLocal_22, 10);
	aggregate.aguasdulces.func_59(uParam1, iLocal_21, 5);
}

bool func_40(int iParam0)
{
	aggregate.annesburg.func_79(118, iLocal_26, &uLocal_25);
	return true;
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = aggregate.annesburg.func_114(iParam3, iParam0);
	vVar1 = { aggregate.benedictpoint.func_118(iVar0) };
	vVar4 = { func_119(iVar0) };
	if (aggregate.annesburg.func_121(vVar1))
	{
		return;
	}
	if (!aggregate.benedictpoint.func_120(16, 16384))
	{
		if (!aggregate.aberdeenpigfarm.func_85(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	aggregate.aberdeenpigfarm.func_110(iParam0);
	(Global_1915170->f_3[iParam0 /*447*/])->f_22 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_10 = { vVar1 };
	if (aggregate.annesburg.func_121(vVar4))
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_10 = { vVar1 };
	}
	else
	{
		(Global_1915170->f_17805[iVar0 /*11*/])->f_2 = { vVar4 };
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_9 = iVar0;
	(Global_1915170->f_3[iParam0 /*447*/])->f_25 = iParam2;
	(Global_1915170->f_3[iParam0 /*447*/])->f_26 = iParam4;
	(Global_1915170->f_3[iParam0 /*447*/])->f_28 = iParam5;
	(Global_1915170->f_3[iParam0 /*447*/])->f_29 = iParam9;
	(Global_1915170->f_3[iParam0 /*447*/])->f_8 = iParam3;
	(Global_1915170->f_3[iParam0 /*447*/])->f_410 = iParam8;
	*(Global_1957543->f_126[iParam0 /*3*/]) = { 0f, 0f, 0f };
	Global_1957543->f_244[iParam0] = 0f;
	Global_1957543->f_632[iParam0] = 0;
	StringCopy(Global_1957543->f_319[iParam0 /*8*/], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = aggregate.annesburg.func_116(iParam0);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_18 = fParam7;
	(Global_1915170->f_3[iParam0 /*447*/])->f_7 = iParam6;
	if (!func_122(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			aggregate.benedictpoint.func_123(iParam3);
			break;
		case 10:
			aggregate.benedictpoint.func_124(iParam3);
			break;
		case 15:
			aggregate.benedictpoint.func_125();
			break;
		case 9:
			aggregate.benedictpoint.func_126();
			break;
	}
	func_127((Global_1915170->f_3[iParam0 /*447*/])->f_9);
	aggregate.aberdeenpigfarm.func_139(iParam0, 16);
	aggregate.benedictpoint.func_129(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_62(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = aggregate.aberdeenpigfarm.func_140(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/] = iParam1;
	((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_4 = iParam2;
	((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_5 = iParam3;
	((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
	(Global_1915170->f_3[iParam0 /*447*/])->f_409++;
}

void func_63(int iParam0, vector3 vParam1, float fParam4)
{
	*(Global_1957543->f_126[iParam0 /*3*/]) = { vParam1 };
	Global_1957543->f_244[iParam0] = fParam4;
}

Vector3 func_119(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_166(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 1:
			return 2939f, 1287f, 0f;
		case 2:
			return 2931.596f, 1282.839f, 44.6783f;
		case 117:
			return -5227.45f, -3468.19f, -20.49293f;
		case 118:
			return -5228.75f, -3468.28f, -21.57f;
		case 9:
			return -753.4219f, -1285.01f, 43.20049f;
		case 6:
			return -785.1682f, -1324.179f, 46.3505f;
		case 8:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 19:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		case 22:
			return 1417.288f, 273.5687f, 88.4881f;
		case 24:
			return 1522.305f, 442.8598f, 89.6785f;
		case 25:
			return 1525.407f, 442.7721f, 90.6467f;
		case 26:
			return 2161.5f, -618.5f, 43f;
		case 27:
			return -1092.88f, -575.69f, 81.41f;
		case 28:
			return -1094.41f, -577.51f, 81.41f;
		case 29:
			return 1294.084f, -1303.102f, 76.0418f;
		case 30:
			return 1297.423f, -1278.412f, 75.65752f;
		case 31:
			return 1319.43f, -1142.08f, 81.41f;
		case 33:
			return 1327.036f, -1292.386f, 77.2488f;
		case 34:
			return 1326.268f, -1323.129f, 78.1929f;
		case 35:
			return 1228.508f, -1296.796f, 77.6347f;
		case 39:
			return 1232.206f, -1300.197f, 77.8496f;
		case 41:
			return 1209.053f, -193.1814f, 101.9785f;
		case 43:
			return 2657.466f, -1180.96f, 53.2785f;
		case 44:
			return 2819.495f, -1331.29f, 45.514f;
		case 45:
			return 2721.24f, -1231.66f, 49.37f;
		case 46:
			return 2858.207f, -1199.817f, 49.046f;
		case 48:
			return 2828.087f, -1315.179f, 47.4196f;
		case 49:
			return 2714.586f, -1286.893f, 50.3211f;
		case 50:
			return 2508.212f, -1449.654f, 48.41523f;
		case 51:
			return 2747.906f, -1397.089f, 47.1107f;
		case 52:
			return 2746.599f, -1394.278f, 46.918f;
		case 53:
			return 2554.144f, -1166.025f, 54.3474f;
		case 63:
			return 2832.02f, -1225.563f, 46.6422f;
		case 60:
			return 2734.174f, -1119.755f, 50.10792f;
		case 68:
			return -1753.404f, -392.557f, 155.2576f;
		case 69:
			return -1792.444f, -385.412f, 160.6924f;
		case 70:
			return -1812.343f, -370.618f, 161.8814f;
		case 71:
			return -1819.88f, -561.8194f, 157.2323f;
		case 74:
			return -1763.78f, -385.1118f, 156.7401f;
		case 77:
			return -307.9643f, 773.6048f, 117.7031f;
		case 78:
			return -306.7f, 813.6f, 118.7f;
		case 82:
			return -338.8647f, 767.4334f, 115.5628f;
		case 83:
			return -286.9307f, 809.6714f, 120.6565f;
		case 84:
			return -323.5066f, 799.6924f, 118.973f;
		case 85:
			return -279.273f, 781.7448f, 118.7954f;
		case 86:
			return -369.4457f, 786.6935f, 115.9904f;
		case 87:
			return -176.3f, 630.1f, 115.331f;
		case 88:
			return -174.0662f, 633.9207f, 115.109f;
		case 90:
			return -326.1232f, 771.9214f, 116.436f;
		case 93:
			return 3023.859f, 561.206f, 46.7352f;
		case 98:
			return 2986.003f, 567.9055f, 45.337f;
		case 96:
			return 2967.273f, 796.7416f, 52.5948f;
		case 99:
			return -1302.951f, 394.6608f, 94.3817f;
		case 101:
			return -1300.283f, 400.4247f, 94.3817f;
		case 100:
			return -1299.608f, 401.5503f, 94.97269f;
		case 105:
			return -5518.071f, -2906.217f, -2.7513f;
		case 102:
			return -5488.293f, -2937.662f, 0.6299f;
		case 103:
			return -5506.691f, -2968.343f, -1.2586f;
		case 104:
			return -5509.019f, -2947.435f, -2.8934f;
		case 107:
			return -5520.701f, -3044.427f, -1.40419f;
		case 108:
			return -3684.342f, -2626.877f, -12.5497f;
		case 3:
			return -2842.211f, 137.3398f, 183.8268f;
		case 4:
			return -1005.934f, -540.8262f, 97.9502f;
		case 40:
			return 2076.835f, 1000.829f, 111.4973f;
		case 76:
			return -2251.034f, -1916.911f, 115.9488f;
		case 64:
			return -142.072f, -23.5242f, 95.0883f;
		case 65:
			return 675.3091f, -1251.233f, 43.0152f;
		case 66:
			return 1875.2f, -1859.182f, 41.8f;
		case 67:
			return 2366.084f, 1347.122f, 105.1305f;
		case 130:
			return -1402f, -2317f, 43.6f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_122(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate.benedictpoint.func_120(iParam0, 16384))
	{
		return true;
	}
	if (!aggregate.aberdeenpigfarm.func_85(iParam1))
	{
		return false;
	}
	iVar0 = aggregate.aberdeenpigfarm.func_174(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1915170->f_3[iParam0 /*447*/])->f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B((Global_1915170->f_3[iParam0 /*447*/])->f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783((Global_1915170->f_3[iParam0 /*447*/])->f_25);
			}
		}
		aggregate.annesburg.func_67(iParam1, (Global_1915170->f_3[iParam0 /*447*/])->f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1915170->f_3[iParam0 /*447*/])->f_25, 1, 1);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1915170->f_3[iParam0 /*447*/])->f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B((Global_1915170->f_3[iParam0 /*447*/])->f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783((Global_1915170->f_3[iParam0 /*447*/])->f_28);
			}
		}
		aggregate.annesburg.func_67(iParam1, (Global_1915170->f_3[iParam0 /*447*/])->f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1915170->f_3[iParam0 /*447*/])->f_28, 0, 1);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_21 = iParam1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_23 = iVar0;
	return true;
}

void func_127(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_166(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 3:
		case 4:
		case 22:
		case 26:
		case 31:
		case 40:
		case 44:
		case 63:
		case 68:
		case 76:
		case 82:
		case 104:
			if (!aggregate.aberdeenpigfarm.func_167(iParam0, 2))
			{
				aggregate.aberdeenpigfarm.func_168(iParam0, 2);
			}
			break;
	}
}

