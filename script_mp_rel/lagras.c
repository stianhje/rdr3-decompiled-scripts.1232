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
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	iLocal_21 = ((*Global_1887327)[3 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 1);
	iLocal_22 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2162.926f, -618.1368f, 42.473f, 0f, 0f, 44.5f, 10.521f, 13f, 4f, "Lagras - m_volBaitShop");
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2162.323f, -619.085f, 43.189f, 0f, 0f, -44f, 2.27f, 2.954f, 2.579f, "Lagras - m_volBaitPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_22, 10000);
	if (aggregate_func_4251() != -1)
	{
	}
	return true;
}

void func_29(int iParam0)
{
	if (aggregate_func_4251() == -1)
	{
		aggregate_func_1479(14, 639, iLocal_22, iParam0, iLocal_23, 0, 12, 50f, 0, 0);
		func_59(14, 2168.851f, -622.9775f, 41.8217f, 332.7766f);
	}
	else
	{
		aggregate_func_348(14, iLocal_22, iParam0, iLocal_22, 0, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
		aggregate_func_1218(14, 0);
	}
}

void func_30(int iParam0)
{
	aggregate_func_2366(638, iLocal_22, 1);
}

void func_33(int iParam0)
{
	iParam0 = iParam0;
	aggregate_func_6501(0.8f, 0.2f, 0f, 0f);
}

void func_59(int iParam0, vector3 vParam1, float fParam4)
{
	*(Global_1957543->f_126[iParam0 /*3*/]) = { vParam1 };
	Global_1957543->f_244[iParam0] = fParam4;
}

