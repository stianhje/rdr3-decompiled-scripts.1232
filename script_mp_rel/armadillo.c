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
	int iLocal_29 = 0;
	int iLocal_30[3] = { 0, 0, 0 };
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = false;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	bool bLocal_42 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

void func_6(int iParam0)
{
	PED::SET_PED_MODEL_IS_SUPPRESSED(870067954, true);
}

bool func_13()
{
	iLocal_21 = ((*Global_1887327)[127 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 29);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Armadillo - m_volGeneral Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -3686.114f, -2623.858f, -12.89814f, 0f, 0f, 0f, 5.86845f, 3.98367f, 3.717603f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -3681.782f, -2626.667f, -12.97999f, 0f, 0f, 0f, 3.247781f, 3.506042f, 3.000762f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -3685.422f, -2627.413f, -12.92333f, 0f, 0f, 0f, 4.057125f, 5.521852f, 3.439446f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -3683.131f, -2624.525f, -13.041f, 0f, 0f, 44.914f, 3.072f, 3.99f, 2.949f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -3689.379f, -2628.766f, -12.813f, 0f, 0f, 0f, 3.741f, 5.57f, 3.389f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -3688.071f, -2623.283f, -9.7791f, 0f, 0f, 0f, 2.257698f, 2.906237f, 3.016091f);
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX(-3685.352f, -2623.258f, -13.4981f, 0f, 0f, 0f, 1.100183f, 2.220348f, 1.996734f);
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX(-3687.81f, -2623.527f, -13.30467f, 0f, 0f, 0f, 2.162535f, 3.2466f, 2.122298f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_22, 10111);
	iLocal_25 = VOLUME::_CREATE_VOLUME_BOX(-3701.056f, -2595.456f, -14.37373f, 0f, 0f, 0f, 21.94766f, 22.09092f, 14.36038f);
	iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3732.708f, -2597.881f, -12.7227f, 0f, 0f, 0f, 2.649177f, 2.373272f, 2.514402f, "m_volPostOffice");
	iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3732.708f, -2597.881f, -12.7227f, 0f, 0f, 0f, 2.649177f, 2.373272f, 2.514402f, "m_volPostOfficePrompt");
	iLocal_30[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3715.032f, -2610.383f, -14.5792f, 0f, 0f, 0f, 6f, 6f, 5f, "Fire 1 blocking volume");
	iLocal_30[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3635.024f, -2587.306f, -14.9224f, 0f, 0f, 0f, 6f, 6f, 5f, "Fire 2 blocking volume");
	iLocal_30[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3619.826f, -2627.633f, -14.5396f, 0f, 0f, 0f, 6f, 6f, 5f, "Fire 3 blocking volume");
	PATHFIND::_0x19C7567D2F2287D6(&(iLocal_30[0]), 7);
	PATHFIND::_0x19C7567D2F2287D6(&(iLocal_30[1]), 7);
	PATHFIND::_0x19C7567D2F2287D6(&(iLocal_30[2]), 7);
	iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3640.015f, -2777.934f, -13.33529f, 0.011471f, 0.064168f, 10.13543f, 7.095184f, 8.285556f, 4.615525f, "vol_Armadillo_OldManJones");
	iLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3640.015f, -2777.934f, -13.33529f, 0.011471f, 0.064168f, 10.13543f, 7.095184f, 8.285556f, 4.615525f, "vol_Armadillo_OldManJonesPrompt");
	iLocal_35 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3730.346f, -2604.482f, -12.723f, 0f, 0f, 0f, 5.896f, 17.555f, 2.514f, "Armadillo - m_volTrainStation");
	return true;
}

bool func_17(int iParam0)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-3622.756f, -2603.877f, -14.3425f);
	if (iVar0 != 0)
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, "arm_sheriff_int_normal_mp", 0);
	}
	return true;
}

void func_27()
{
	aggregate_func_7674(0, -3701.056f, -2595.456f, -14.37373f, iLocal_25, 127);
}

void func_29(int iParam0)
{
	aggregate_func_348(3, iLocal_22, iParam0, iLocal_23, iLocal_24, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_6609(3, 8192);
	func_61(3, 0);
	aggregate_func_348(2, iLocal_26, iParam0, iLocal_27, 0, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_61(2, 0);
	aggregate_func_348(35, iLocal_28, iParam0, iLocal_29, 0, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	func_61(35, 0);
	aggregate_func_228();
	func_63(110);
}

void func_36(int iParam0, var uParam1)
{
	aggregate_func_3063(uParam1, iLocal_21, 1);
	aggregate_func_3063(uParam1, iLocal_26, 10);
}

bool func_40(int iParam0)
{
	if (aggregate_func_6721(&bLocal_36))
	{
		if (bLocal_36)
		{
			aggregate_func_6624(-278659788, 1);
			aggregate_func_6624(-59369632, 1);
			aggregate_func_6624(238975959, 1);
		}
	}
	aggregate_func_7429(112, iLocal_35, &uLocal_34);
	return false;
}

int func_61(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;

	if ((aggregate_func_4458(iParam0, 16384) || aggregate_func_4458(iParam0, 32768)) || aggregate_func_4268((Global_1051387->f_69[iParam0 /*76*/])->f_3))
	{
		if (TASK::_0x841475AC96E794D1((Global_1051387->f_69[iParam0 /*76*/])->f_6))
		{
			TASK::_0x81948DFE4F5A0283((Global_1051387->f_69[iParam0 /*76*/])->f_6);
		}
		if (TASK::_0x841475AC96E794D1((Global_1915170->f_3[iParam0 /*447*/])->f_16))
		{
			TASK::_0x81948DFE4F5A0283((Global_1915170->f_3[iParam0 /*447*/])->f_16);
		}
		(Global_1051387->f_69[iParam0 /*76*/])->f_6 = 0;
		(Global_1915170->f_3[iParam0 /*447*/])->f_16 = 0;
		(Global_1051387->f_69[iParam0 /*76*/])->f_8 = 0;
		return 0;
	}
	iVar0 = aggregate_func_4746(aggregate_func_4314(), iParam0);
	if ((!bParam1 && aggregate_func_7832(iVar0, &uVar1, &uVar2, &vVar3)) || (bParam1 && aggregate_func_6068(iVar0, &uVar1, &uVar2, &vVar3)))
	{
		aggregate_func_1577(iParam0, uVar1, vVar3, uVar2, 0);
		(Global_1051387->f_69[iParam0 /*76*/])->f_3 = { vVar3 };
		(Global_1051387->f_69[iParam0 /*76*/])->f_8 = uVar1;
	}
	return (Global_1051387->f_69[iParam0 /*76*/])->f_6;
}

void func_63(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	int iVar6;
	bool bVar7;

	iVar0 = 0;
	while (iVar0 < 4 && &Global_1051387->f_3582[iVar0 /*19*/] != -1)
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return;
	}
	(Global_1051387->f_3582[iVar0 /*19*/])->f_1 = 0;
	Global_1051387->f_3582[iVar0 /*19*/] = iParam0;
	if (aggregate_func_7832(&(Global_1051387->f_3582[iVar0 /*19*/]), &uVar1, &uVar2, &vVar3))
	{
		(Global_1051387->f_3582[iVar0 /*19*/])->f_6 = aggregate_func_3487(uVar1, vVar3, uVar2, 0, 0, 0);
		(Global_1051387->f_3582[iVar0 /*19*/])->f_2 = { vVar3 };
		TASK::_0xA7479FB665361EDB((Global_1051387->f_3582[iVar0 /*19*/])->f_6, 0);
		TASK::_0xE69FDA40AAC3EFC0((Global_1051387->f_3582[iVar0 /*19*/])->f_6, 0);
	}
	iVar6 = aggregate_func_7676(&(Global_1051387->f_3582[iVar0 /*19*/]));
	bVar7 = iVar6 != -1;
	if (bVar7)
	{
		(Global_1051387->f_3582[iVar0 /*19*/])->f_9 = iVar6;
		if (aggregate_func_7832(iVar6, &uVar1, &uVar2, &vVar3))
		{
			(Global_1051387->f_3582[iVar0 /*19*/])->f_13 = aggregate_func_3487(uVar1, vVar3, uVar2, 0, 0, 0);
			(Global_1051387->f_3582[iVar0 /*19*/])->f_10 = { vVar3 };
			TASK::_0xA7479FB665361EDB((Global_1051387->f_3582[iVar0 /*19*/])->f_13, 0);
			TASK::_0xE69FDA40AAC3EFC0((Global_1051387->f_3582[iVar0 /*19*/])->f_13, 0);
		}
	}
	(Global_1051387->f_3582[iVar0 /*19*/])->f_5 = aggregate_func_5121(&(Global_1051387->f_3582[iVar0 /*19*/]));
	if (!aggregate_func_4429(30, 4))
	{
		aggregate_func_4789(30, 4);
		aggregate_func_5262(30);
	}
}

void func_87(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < iLocal_30)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(&(iLocal_30[iVar0])))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(&(iLocal_30[iVar0]));
			VOLUME::_DELETE_VOLUME(&(iLocal_30[iVar0]));
		}
		iVar0++;
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("SCVTFAU"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("SCVTFAU"))
		{
			HUD::_TEXT_DATABASE_DELETE("SCVTFAU");
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("ARRGNAU"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("ARRGNAU"))
		{
			HUD::_TEXT_DATABASE_DELETE("ARRGNAU");
		}
	}
	if (HUD::_DOES_TEXT_DATABASE_EXIST("ARMRDAU"))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED("ARMRDAU"))
		{
			HUD::_TEXT_DATABASE_DELETE("ARMRDAU");
		}
	}
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(-3622.756f, -2603.877f, -14.3425f);
	if (iVar1 != 0)
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar1, "arm_sheriff_int_normal_mp", 1);
	}
	aggregate_func_6501(0.775f, 0.2f, 0.025f, 0f);
}

