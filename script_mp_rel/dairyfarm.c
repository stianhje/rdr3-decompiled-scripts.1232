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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	char* sLocal_17 = NULL;
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

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_13 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Dairy Farm - m_volTown");
	VOLUME::_0xBCE668AAF83608BE(iLocal_13, 1446.658f, -888.688f, 61.14607f, 0f, 0f, -30.46523f, 38.831f, 28.399f, 35.021f);
	VOLUME::_0x39816F6F94F385AD(iLocal_13, 1407.375f, -859.71f, 59.085f, 0f, 0f, -90.621f, 63.166f, 105.945f, 86.732f);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_16 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Dairy Farm - m_volThreat Agg");
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1372.365f, -874.1071f, 60.63414f, 0f, 0f, 105.3542f, 13.90285f, 14.67721f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1379.527f, -839.9418f, 70.09288f, 0f, 0f, 28.55685f, 26.50747f, 16.5324f, 20.06959f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1389.031f, -831.3408f, 67.95767f, 0f, 0f, 17.35302f, 5.587527f, 9.447437f, 11.73771f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1366.106f, -845.9993f, 67.95767f, 0f, 0f, 17.35302f, 4.930151f, 14.78831f, 11.73771f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 1368.879f, -851.3331f, 70.96919f, 0f, 0f, 0f, 3.971671f, 2.768736f, 7.919377f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1448.137f, -909.5335f, 58.70924f, 0f, 0f, 52.91796f, 9.811359f, 48.19019f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1464.168f, -883.314f, 59.08516f, 0f, 0f, 106.2223f, 38.17617f, 16.57248f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1451.656f, -880.889f, 59.08516f, 0f, 0f, 0f, 30.79945f, 37.44294f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1459.521f, -904.4871f, 58.70924f, 0f, 0f, 75.93813f, 23.5689f, 29.93386f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1414.417f, -868.4174f, 60.63414f, 0f, 0f, -160.2662f, 13.42301f, 10.60738f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1406.751f, -874.8239f, 60.63414f, 0f, 0f, 100.2132f, 11.28151f, 7.901964f, 37.7322f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 1427.325f, -884.8317f, 49.45563f, 0f, 0f, 1.967795f, 16.6387f, 14.40915f, 35.02085f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 1426.821f, -870.1688f, 49.45563f, 0f, 0f, 1.967794f, 16.6387f, 8.68586f, 35.02085f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1446.194f, -836.771f, 59.08516f, 0f, 0f, -74.26128f, 27.16599f, 24.853f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1428.484f, -833.5745f, 59.08516f, 0f, 0f, -90.62106f, 27.16599f, 39.94446f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1450.635f, -849.8392f, 59.08516f, 0f, 0f, -87.62164f, 4.481297f, 24.853f, 37.7322f);
		VOLUME::_0x39816F6F94F385AD(iLocal_16, 1423.217f, -846.8712f, 59.08516f, 0f, 0f, -90.62106f, 10.00643f, 39.94446f, 37.7322f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 1408.666f, -831.0827f, 49.45563f, 0f, 0f, 1.967795f, 9.140027f, 9.551268f, 35.02085f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_16, 1405.983f, -843.9208f, 70.19928f, 0f, 0f, 0f, 5.74873f, 11.05348f, 20.80677f);
		iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Dairy Farm - m_volRestricted Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_15, iLocal_16);
		VOLUME::_0xBCE668AAF83608BE(iLocal_15, 1374.823f, -866.7698f, 49.45563f, 0f, 0f, -89.62331f, 28.03277f, 26.98123f, 35.02085f);
		iLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Dairy Farm - m_volWarning Agg");
		VOLUME::_0x6E0D3C3F828DA773(iLocal_14, iLocal_15);
		VOLUME::_0xBCE668AAF83608BE(iLocal_14, 1445.876f, -840.8851f, 61.14609f, 0f, 0f, -94.3453f, 25.51381f, 23.81601f, 17.87893f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_14, 1461.857f, -868.7903f, 61.14607f, 0f, 0f, -82.23228f, 39.60072f, 15.04517f, 35.021f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_14, 1458.823f, -903.0386f, 61.14607f, 0f, 0f, -94.3453f, 29.6741f, 23.81601f, 35.021f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_14, 1410.49f, -862.8301f, 61.14607f, 0f, 0f, -84.98452f, 45.42525f, 64.49104f, 35.021f);
		VOLUME::_0xBCE668AAF83608BE(iLocal_14, 1446.658f, -888.688f, 61.14607f, 0f, 0f, -30.46523f, 38.831f, 28.399f, 35.021f);
		sLocal_17 = "DAIRY_FARM";
		LAW::_CREATE_GUARD_ZONE(sLocal_17);
		LAW::_0x8C598A930F471938(sLocal_17, iLocal_14);
		LAW::_0x35815F372D43E1E5(sLocal_17, iLocal_15);
		LAW::_0xAD3E07C37A7C1ADC(sLocal_17, iLocal_14);
		LAW::_0xA1B0E6301E2E02A6(sLocal_17, iLocal_16);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_17, 1372.172f, -874.3451f, 70.298f);
		LAW::_0xA8A74AA79FB67159(sLocal_17, iLocal_14);
	}
	return true;
}

bool func_40(int iParam0)
{
	func_61();
	return true;
}

void func_61()
{
	int iVar0;
	int iVar1;

	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_15))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(VOLUME::_0x7FD78DFD0C5D7B9B(iLocal_15)))
	{
		func_92();
	}
	iVar0 = 756;
	iVar1 = aggregate.aberdeenpigfarm.func_174(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(iVar1)))
	{
		func_94(iVar1);
	}
}

void func_78(int iParam0)
{
	int iVar0;
	int iVar1;

	LAW::_REMOVE_GUARD_ZONE(sLocal_17);
	aggregate.annesburg.func_166(iLocal_16);
	aggregate.annesburg.func_166(iLocal_14);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_15))
	{
		VOLUME::_0x998202B206872672(iLocal_15);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_15);
		aggregate.annesburg.func_166(iLocal_15);
	}
	iVar0 = 756;
	iVar1 = aggregate.aberdeenpigfarm.func_174(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		PED::_0xBCC76708E5677E1D(iVar1, 0);
	}
}

void func_92()
{
	aggregate.annesburg.func_67(754, iLocal_15, 1);
	aggregate.annesburg.func_67(755, iLocal_15, 0);
	aggregate.annesburg.func_67(756, iLocal_15, 0);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_15, 3, 1);
	VOLUME::_0x53D05D60E5F5B40C(iLocal_15, 3, 1, aggregate.aberdeenpigfarm.func_120(755));
	VOLUME::_0x53D05D60E5F5B40C(iLocal_15, 3, 1, aggregate.aberdeenpigfarm.func_120(756));
}

void func_94(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 754;
	iVar1 = aggregate.aberdeenpigfarm.func_174(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		PED::_0x931B241409216C1F(iVar1, iParam0, 0);
	}
}

