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
	int iLocal_18 = 0;
	char* sLocal_19 = NULL;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
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
	iLocal_18 = ((*Global_1887327)[73 /*36*/])->f_5;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Down's Ranch - m_volThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -861.1559f, 337.3949f, 97.83562f, 0f, 0f, -10.52764f, 11.36256f, 15.17971f, 10.22759f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -864.7891f, 321.0681f, 94.98614f, 0f, 0f, -10.52764f, 8.645713f, 12.50398f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -62.5439f, -392.4335f, 72.1382f, 0f, 0f, 29.04495f, 7.979648f, 6.063315f, 6.900121f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -851.4187f, 361.481f, 97.83562f, 0f, 0f, -13.36656f, 0.863879f, 8.798125f, 5.594934f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -846.2698f, 364.2993f, 96.90186f, 0f, 0f, -7.59012f, 9.607594f, 16.13778f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -854.8633f, 319.2234f, 94.98614f, 0f, 0f, -10.52763f, 11.77066f, 11.27451f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -790.8695f, 346.954f, 98.00078f, 0f, 0f, -8.615136f, 13.37762f, 8.146093f, 7.736006f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -797.3005f, 347.9039f, 98.69241f, -178.9669f, -86.9581f, 158.5464f, 6.802914f, 7.671669f, 3.322031f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -817.6839f, 353.5158f, 98.00078f, 0f, 0f, -9.719018f, 10.09804f, 10.20509f, 7.736006f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -874.6434f, 323.2318f, 94.98614f, 0f, 0f, -10.52763f, 12.96012f, 12.50398f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -883.0225f, 334.1583f, 94.98614f, 0f, 0f, -23.19702f, 8.645713f, 14.33108f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -857.598f, 357.7791f, 94.98614f, 0f, 0f, -4.378916f, 9.184352f, 2.478699f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -868.0872f, 338.0298f, 94.98614f, 0f, 0f, -10.52763f, 22.80199f, 22.79938f, 4.525191f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -859.0131f, 352.2604f, 94.98614f, 0f, 0f, -10.52763f, 9.726913f, 9.194143f, 4.525191f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_23, -868.4409f, 352.2944f, 95.5f, 0f, 0f, 121.5158f, 4.6843f, 11.06676f, 5.382992f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_23, -879.6567f, 344.2453f, 95.5f, 0f, 0f, -38.53438f, 2.935173f, 7.713624f, 5.382992f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_23, -882.3352f, 327.0211f, 95.5f, 0f, 0f, 156.2253f, 7.625237f, 7.713624f, 5.382992f);
		VOLUME::_0x39816F6F94F385AD(iLocal_23, -810.5886f, 353.7103f, 98.00078f, 0f, 0f, -9.719017f, 3.779373f, 6.791281f, 7.736006f);
		iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Down's Ranch - m_volRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_22, iLocal_23);
		VOLUME::_0xBCE668AAF83608BE(iLocal_22, -858.1369f, 346.6224f, 95.5f, 0f, 0f, -0.107f, 36.56057f, 35.55415f, 44f);
		VOLUME::_0x39816F6F94F385AD(iLocal_22, -815.7545f, 352.5984f, 105.6908f, 0f, 0f, -12.06673f, 85.78142f, 37.62513f, 28.168f);
		iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Down's Ranch - m_volWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_21, iLocal_22);
		VOLUME::_0xBCE668AAF83608BE(iLocal_21, -834.0826f, 345.0585f, 95.5f, 0f, 0f, -0.107f, 73.14397f, 44.90614f, 45.70249f);
		iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Down's Ranch - m_volRegistration Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_20, iLocal_21);
		sLocal_19 = "DOWNS_RANCH";
		LAW::_CREATE_GUARD_ZONE(sLocal_19);
		LAW::_0x8C598A930F471938(sLocal_19, iLocal_20);
		LAW::_0x35815F372D43E1E5(sLocal_19, iLocal_22);
		LAW::_0xA1B0E6301E2E02A6(sLocal_19, iLocal_23);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_19, iLocal_21);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_19, -818.1168f, 354.8587f, 98.5042f);
		LAW::_0xA8A74AA79FB67159(sLocal_19, iLocal_20);
	}
	return true;
}

void func_30(int iParam0)
{
	if (aggregate_func_4251() != -1)
	{
		return;
	}
	aggregate_func_2366(559, iLocal_22, 1);
	aggregate_func_2366(558, iLocal_22, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_22, 3, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_22, 3, 1, aggregate_func_4452(558));
	PED::_0x931B241409216C1F(aggregate_func_1988(559), aggregate_func_1988(558), 0);
}

void func_64()
{
	int iVar0;

	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(440337996);
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

void func_81(int iParam0)
{
	aggregate_func_6501(0.775f, 0.2f, 0.025f, 0f);
	LAW::_REMOVE_GUARD_ZONE(sLocal_19);
	aggregate_func_2017(iLocal_20);
	aggregate_func_2017(iLocal_21);
	aggregate_func_2017(iLocal_23);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_22))
	{
		VOLUME::_0x998202B206872672(iLocal_22);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_22);
		VOLUME::_DELETE_VOLUME(iLocal_22);
	}
}

