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
	var uLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	bool bLocal_30 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Riggs Stn - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1095.52f, -576.564f, 82.8243f, 0f, 0f, 52.00422f, 2.27305f, 1.013785f, 2.820909f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1094.093f, -574.7371f, 82.8243f, 0f, 0f, 52.00422f, 2.27305f, 1.013785f, 2.820909f);
	iLocal_21 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1094.383f, -575.865f, 82.807f, 0f, 0f, 52.00422f, 4.73f, 5.502f, 2.821f, "Riggs Stn - m_volPostOfficeOwner");
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1093.137f, -576.9941f, 82.84734f, 0f, 0f, 52.00422f, 4.470828f, 2.119287f, 2.820909f, "Riggs Stn - m_volPostOfficeOfflimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 10025);
	return true;
}

void func_29(int iParam0)
{
	aggregate_func_348(2, iLocal_21, iParam0, iLocal_22, iLocal_23, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_7096(2, 1217836331, 0, 0);
	aggregate_func_1218(2, 0);
}

void func_30(int iParam0)
{
	aggregate_func_2366(795, iLocal_21, 1);
}

void func_36(int iParam0, var uParam1)
{
	aggregate_func_3063(uParam1, iLocal_21, 10);
}

bool func_40(int iParam0)
{
	aggregate_func_7429(28, iLocal_21, &uLocal_24);
	return true;
}

