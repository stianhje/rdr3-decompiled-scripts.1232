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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	iLocal_13 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-73.33932f, -398.9078f, 72.24845f, 0f, 0f, 66.15892f, 99.58835f, 86.51411f, 42.63912f, "Granger's Hoggery - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Granger's Hoggery - m_volRancherThreat Agg");
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, -68.82082f, -387.3279f, 72.49265f, 0f, 0f, 48.19205f, 0.916038f, 0.967821f, 6.513287f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, -77.56838f, -392.186f, 72.49265f, 0f, 0f, 48.19205f, 2.563069f, 2.387336f, 6.513287f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, -75.34951f, -388.4147f, 72.1382f, 0f, 0f, 22.97115f, 4.397328f, 4.863138f, 6.900121f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -62.42026f, -409.1303f, 68.97523f, 0f, 0f, 13.57845f, 13.41282f, 8.335032f, 6.900121f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -62.5439f, -392.4335f, 72.1382f, 0f, 0f, 29.04495f, 7.979648f, 6.063315f, 6.900121f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, -68.68666f, -377.174f, 72.1382f, 0f, 0f, 76.32537f, 1.587863f, 1.493361f, 5.424076f);
		iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Granger's Hoggery - m_volRancherRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_15, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, -66.34515f, -395.8655f, 72.49265f, 0f, 0f, 20.19842f, 20.50491f, 22.65399f, 6.513287f);
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Granger's Hoggery - m_volRancherWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_17, iLocal_15);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, -66.34515f, -395.8655f, 72.49265f, 0f, 0f, 20.19842f, 44.28191f, 42.39419f, 6.513287f);
		sLocal_14 = "GRANGERS_HOGGERY";
		LAW::_CREATE_GUARD_ZONE(sLocal_14);
		LAW::_0x8C598A930F471938(sLocal_14, iLocal_13);
		LAW::_0x35815F372D43E1E5(sLocal_14, iLocal_15);
		LAW::_0xA1B0E6301E2E02A6(sLocal_14, iLocal_16);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_14, iLocal_17);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_14, -62.197f, -392.6637f, 72.1036f);
		LAW::_0xA8A74AA79FB67159(sLocal_14, iLocal_13);
	}
	return true;
}

void func_30(int iParam0)
{
	if (aggregate_func_4251() != -1)
	{
		return;
	}
	aggregate_func_4329(75, 16);
	aggregate_func_2366(745, iLocal_15, 1);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_15, 3, 1);
	TASK::SET_SCENARIO_GROUP_ENABLED("Shack_GunslingerLivestock", true);
}

void func_63()
{
	int iVar0;

	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(1359918978);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
	else if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
	{
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, true);
		}
	}
	else if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(-1625875143))
	{
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(-1625875143, false);
	}
}

void func_79(int iParam0)
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_14);
	aggregate_func_2017(iLocal_17);
	aggregate_func_2017(iLocal_16);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_15))
	{
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_15);
		VOLUME::_DELETE_VOLUME(iLocal_15);
	}
}

