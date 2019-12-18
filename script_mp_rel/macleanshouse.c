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
	iLocal_13 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2257.921f, -129.5337f, 51.985f, 0f, -1E-06f, 13.20028f, 82.29547f, 67.60979f, 21.17161f, "MacLean's Ranch - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacLean's Ranch - m_volRancherThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2241.916f, -109.335f, 47.39677f, 0f, 0f, 81.00094f, 15.27625f, 30.5406f, 14.65559f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2242.125f, -118.91f, 49.79729f, 0f, 0f, -9.792401f, 22.84632f, 3.968585f, 11.03726f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2229.892f, -115.0595f, 50.13812f, 0f, 0f, -43.69167f, 7.061154f, 5.28716f, 10.09026f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2253.012f, -119.7667f, 49.20896f, 0f, 0f, -55.08507f, 2.867169f, 4.725968f, 9.455753f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2244.684f, -99.80244f, 49.79729f, 0f, 0f, -6.792556f, 27.39669f, 5.430289f, 11.03726f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2230.888f, -99.64697f, 49.20896f, 0f, 0f, -141.6504f, 5.207262f, 4.725968f, 9.455753f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2236.452f, -142.7769f, 50.13812f, 0f, 0f, -49.1528f, 7.766057f, 7.596688f, 10.09026f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2236.481f, -142.6387f, 47.39677f, 0f, 0f, 39.75399f, 7.495997f, 7.665227f, 14.65559f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2282.604f, -118.0235f, 45.6339f, 0f, 0f, -24.74522f, 3.359454f, 14.73906f, 12.52731f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2274.63f, -102.5251f, 46.93924f, 0f, 0f, -12.90716f, 17.48779f, 5.873432f, 15.33682f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 2273.252f, -116.878f, 46.93924f, 0f, 0f, -9.949313f, 19.00171f, 22.66021f, 15.33682f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 2283.666f, -109.4251f, 44.44471f, 0f, 0f, 0f, 3.780884f, 6.839418f, 7.568232f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 2275.129f, -99.41361f, 44.81648f, 0f, 0f, -12.62545f, 8.420317f, 1f, 9.244777f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 2269.443f, -125.7176f, 44.44471f, 0f, 0f, 73.07793f, 3.302727f, 7.064869f, 7.568232f);
		iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacLean's Ranch - m_volRancherRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_15, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 2255.429f, -122.8375f, 51.985f, -1E-06f, 0f, 78.69922f, 38.29042f, 36.90052f, 21.17161f);
		iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("MacLean's Ranch - m_volRancherWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_17, iLocal_15);
		VOLUME::_0xBCE668AAF83608BE(iLocal_17, 2254.417f, -126.5447f, 51.985f, -1E-06f, 0f, 78.69922f, 51.7244f, 47.73219f, 21.17161f);
		sLocal_14 = "MACLEANS_RANCH";
		LAW::_CREATE_GUARD_ZONE(sLocal_14);
		LAW::_0x8C598A930F471938(sLocal_14, iLocal_13);
		LAW::_0x35815F372D43E1E5(sLocal_14, iLocal_15);
		LAW::_0xA1B0E6301E2E02A6(sLocal_14, iLocal_16);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_14, iLocal_17);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_14, 2235.653f, -143.1516f, 47.8762f);
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
	aggregate_func_2366(899, iLocal_15, 1);
	aggregate_func_2366(766, iLocal_15, 0);
	aggregate_func_2366(900, iLocal_15, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_15, 3, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_15, 3, 1, aggregate_func_4452(900));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_15, 3, 1, aggregate_func_4452(766));
	PED::_0x931B241409216C1F(aggregate_func_1988(899), aggregate_func_1988(766), 0);
}

void func_80(int iParam0)
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_14);
	aggregate_func_2017(iLocal_17);
	aggregate_func_2017(iLocal_16);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_15))
	{
		VOLUME::_0x998202B206872672(iLocal_15);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_15);
		VOLUME::_0x43F867EF5C463A53(iLocal_15);
	}
}

