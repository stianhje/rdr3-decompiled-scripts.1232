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
	int iLocal_13 = 0;
	char* sLocal_14 = NULL;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	iLocal_13 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1134.233f, 447.732f, 77.166f, 0f, 0f, 0f, 75f, 75f, 75f, "Guthrie Farm - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Guthrie Farm - m_volRancherThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1119.103f, 491.625f, 94.789f, 0f, 0f, 40.29281f, 4.983408f, 12.47093f, 20f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1116.402f, 489.3356f, 94.789f, 0f, 0f, 40.29281f, 11.85608f, 5.358582f, 20f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1178.083f, 428.8635f, 93.85277f, 0f, 0f, 53.30451f, 6.700057f, 7.386477f, 11.96838f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1122.726f, 433.0324f, 94.789f, 0f, 0f, 37.03593f, 4.563203f, 6.540945f, 8.78159f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1117.072f, 440.526f, 94.789f, 0f, 0f, 37.03593f, 4.563203f, 6.540945f, 8.78159f);
		VOLUME::_0x39816F6F94F385AD(iLocal_17, 1111.182f, 447.2959f, 94.789f, 0f, 0f, 37.03593f, 4.563203f, 6.540945f, 8.78159f);
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Guthrie Farm - m_volRancherRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_16, iLocal_17);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1158.519f, 410.6769f, 92.74591f, 0f, 0f, -42.87345f, 53.38902f, 36.78405f, 32.92925f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1183.084f, 409.2454f, 94.789f, 0f, 0f, 62.77261f, 47.98455f, 17.14376f, 15.40531f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1155.914f, 449.3743f, 96.1861f, 0f, 0f, 47.14103f, 50.95671f, 69.55695f, 12.92893f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 1195.093f, 434.533f, 81.04297f, 0f, 0f, 0f, 7.797928f, 12.21736f, 21.62953f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1170.392f, 385.8856f, 94.80865f, 0f, 0f, 21.33961f, 15.42121f, 9.785769f, 12.92893f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 1125.095f, 489.7792f, 81.04297f, 0f, 0f, 0f, 22.93393f, 22.40263f, 21.62953f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1116.016f, 455.3546f, 94.789f, 0f, 0f, 39.8431f, 36.45f, 74.7347f, 15.40531f);
		iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Guthrie Farm - m_volRancherWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_18, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, 1125.095f, 466.7386f, 81.04297f, 0f, 0f, 31.95184f, 48.08396f, 52.23304f, 21.62953f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, 1151.546f, 440.5756f, 81.04297f, 0f, 0f, -44.24499f, 55.60196f, 50.99452f, 21.62953f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_18, 1158.093f, 392.0394f, 81.04297f, 0f, 0f, -24.17386f, 18.53472f, 13.09556f, 21.62953f);
		iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Guthrie Farm - m_volRancherRegistration Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_15, iLocal_18);
		sLocal_14 = "GUTHRIE_FARM";
		LAW::_CREATE_GUARD_ZONE(sLocal_14);
		LAW::_0x8C598A930F471938(sLocal_14, iLocal_15);
		LAW::_0x35815F372D43E1E5(sLocal_14, iLocal_16);
		LAW::_0xA1B0E6301E2E02A6(sLocal_14, iLocal_17);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_14, iLocal_18);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_14, 1117.13f, 490.0274f, 97.598f);
		LAW::_0xA8A74AA79FB67159(sLocal_14, iLocal_15);
	}
	return true;
}

void func_30(int iParam0)
{
	if (aggregate_func_4251() != -1)
	{
		return;
	}
	aggregate_func_2366(739, iLocal_16, 1);
	aggregate_func_2366(740, iLocal_16, 0);
	aggregate_func_2366(742, iLocal_16, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_16, 3, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, aggregate_func_4452(740));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_16, 3, 1, aggregate_func_4452(742));
	PED::_0x931B241409216C1F(aggregate_func_1988(739), aggregate_func_1988(742), 0);
}

void func_64()
{
	int iVar0;
	int iVar1;

	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(-35439674);
	iVar1 = _NAMESPACE48::_0x112DDF56300BC6E5(-1635184241);
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar0) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
			return;
		}
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar1))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar1) && TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
		}
		else if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar1) && !TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
}

void func_81(int iParam0)
{
	aggregate_func_2017(iLocal_15);
	aggregate_func_2017(iLocal_18);
	aggregate_func_2017(iLocal_17);
	LAW::_REMOVE_GUARD_ZONE(sLocal_14);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_16))
	{
		VOLUME::_0x998202B206872672(iLocal_16);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_16);
		VOLUME::_0x43F867EF5C463A53(iLocal_16);
	}
}

