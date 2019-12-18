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

// __EntryFunction__ == aggregate_func_88

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
	if (aggregate_func_4251() != -1)
	{
	}
	iLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Benedict Point - m_volTrainStation Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_26, -5226.061f, -3471.827f, -21.52f, 0f, 0f, 0f, 7.421f, 10.471f, 4f);
	VOLUME::_0x39816F6F94F385AD(iLocal_26, -5230.431f, -3468.341f, -20.375f, 0f, 0f, 0f, 2.753f, 2.804f, 4f);
	return true;
}

void func_29(int iParam0)
{
	if (aggregate_func_4251() != -1)
	{
		aggregate_func_348(2, iLocal_22, iParam0, iLocal_23, 0, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
		aggregate_func_7096(2, 411637818, 0, 0);
		aggregate_func_7096(2, 1848132471, 0, 0);
		aggregate_func_1218(2, 0);
	}
	else
	{
		aggregate_func_1479(2, 501, iLocal_22, iParam0, iLocal_23, iLocal_24, 1540096, (12.5f * 2f), 0, 0);
		func_62(2, 411637818, 0, 0);
		func_62(2, 1848132471, 0, 0);
		func_63(2, -5224.11f, -3465.51f, -21.52f, -146.961f);
	}
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	aggregate_func_2366(501, iLocal_22, 1);
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	aggregate_func_3063(uParam1, iLocal_22, 10);
	aggregate_func_3063(uParam1, iLocal_21, 5);
}

bool func_40(int iParam0)
{
	aggregate_func_7429(118, iLocal_26, &uLocal_25);
	return true;
}

void func_62(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = aggregate_func_4550(iParam0);
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

