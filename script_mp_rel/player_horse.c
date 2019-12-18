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
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
		{
		}
		func_1();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (aggregate_func_4251() == -1)
	{
		while (!aggregate_func_7514(64))
		{
			BUILTIN::WAIT(0);
		}
	}
	func_4();
	bVar0 = false;
	while (!bVar0)
	{
		if (aggregate_func_4251() != -1)
		{
			if (aggregate_func_523(1, 1))
			{
				bVar0 = true;
			}
			else if (SCRIPTS::_0x9E4EF615E307FBBE())
			{
				bVar0 = true;
			}
			else
			{
				if (func_6())
				{
					func_7();
					func_8();
					func_9();
					func_10();
				}
				BUILTIN::WAIT(0);
			}
			func_1();
		}
	}
}

void func_1()
{
	func_11();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4()
{
	func_12();
	func_13();
	func_14(0);
	func_15();
}

bool func_6()
{
	if (!aggregate_func_7514(256))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (Global_1939168->f_6)
	{
		if (aggregate_func_4251() == -1)
		{
			return false;
		}
	}
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (aggregate_func_4297(68))
	{
		return false;
	}
	return true;
}

void func_7()
{
	struct<7> Var0;
	struct<12> Var7;
	struct<12> Var19;

	func_17();
	func_18();
	func_19(&Var0);
	func_20(0, &Var7);
	func_20(1, &Var19);
	func_21(Var7);
	func_21(Var19);
	func_22(Var7);
	func_22(Var19);
	func_23(Var0, Var7, Var19);
	func_24(0, &Var7);
	func_24(1, &Var19);
	func_25(0, &Var7);
	func_25(1, &Var19);
	aggregate_func_9312();
	func_27(Var0);
	func_28(Var0);
	func_29(Var0);
	aggregate_func_1907();
}

void func_8()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (Global_1903006->f_303)
	{
		case 0:
			func_32(0);
			break;
		case 1:
			func_32(1);
			break;
		case 2:
			func_32(6);
			break;
	}
	iVar0 = Global_1903006->f_303;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1903006->f_303 = iVar0;
}

void func_9()
{
	struct<7> Var0;
	struct<12> Var7;
	struct<12> Var19;
	struct<12> Var31;
	struct<12> Var43;
	int iVar55;

	switch (Global_1903006->f_408)
	{
		case 0:
		case 6:
			func_19(&Var0);
			func_20(0, &Var7);
			func_20(1, &Var19);
			func_20(6, &Var31);
			func_20(5, &Var43);
			func_33(Var0, Var7, 0);
			func_33(Var0, Var19, 1);
			func_33(Var0, Var31, 6);
			func_33(Var0, Var43, 5);
			func_34(Var0);
			func_35(Var0, Var7);
			func_36(Var0, Var7, 0);
			func_36(Var0, Var19, 1);
			func_36(Var0, Var31, 6);
			aggregate_func_4239(0);
			aggregate_func_4239(1);
			aggregate_func_4239(6);
			func_38(Var0, Var7, 0);
			func_38(Var0, Var19, 1);
			func_39(Var7, Var0, 0);
			func_39(Var19, Var0, 1);
			func_40(0);
			func_40(1);
			func_41(Var0, Var7, 0);
			func_41(Var0, Var19, 1);
			func_42(Var0, Var7, 0);
			func_42(Var0, Var19, 1);
			func_43(Var0);
			func_44(Var0);
			func_45();
			func_46();
			func_47(Var0);
			func_48();
			func_49();
			func_50();
			func_51();
			func_52();
			func_53(Var0, Var7, 0);
			func_53(Var0, Var19, 1);
			func_54(Var0, Var7, 0);
			func_54(Var0, Var19, 1);
			func_54(Var0, Var31, 6);
			func_55(Var0, Var7, Var19);
			break;
		case 1:
			func_56();
			break;
		case 2:
			func_57(0, 0);
			func_58(0, 0);
			break;
		case 3:
			func_57(1, 0);
			func_58(1, 0);
			break;
		case 9:
			func_59();
			break;
		case 11:
			func_60();
			break;
		case 4:
			aggregate_func_26(0);
			break;
		case 5:
			aggregate_func_26(1);
			break;
		case 7:
			aggregate_func_26(5);
			break;
		case 8:
			func_62();
			break;
	}
	iVar55 = Global_1903006->f_408;
	iVar55++;
	if (iVar55 >= 12)
	{
		iVar55 = 0;
	}
	Global_1903006->f_408 = iVar55;
}

void func_10()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	switch (Global_1903006->f_409)
	{
		case 0:
			func_63();
			break;
		case 1:
			func_64();
			break;
		case 2:
			func_65();
			break;
	}
	iVar0 = Global_1903006->f_409;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1903006->f_409 = iVar0;
}

void func_11()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (aggregate_func_2994(iVar0))
		{
			if (!aggregate_func_7880(iVar0))
			{
				aggregate_func_764(iVar0);
			}
		}
		iVar0++;
	}
}

void func_12()
{
	PED::_0xED9582B3DA8F02B4(1);
	func_17();
}

int func_13()
{
	int iVar0;

	iVar0 = func_69();
	STREAMING::REQUEST_MODEL(iVar0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_14(int iParam0)
{
	if (Global_1903006->f_364 != iParam0)
	{
	}
	Global_1903006->f_364 = iParam0;
}

int func_15()
{
	if (!func_71(-1898635967, aggregate_func_5233(), 1))
	{
		return 0;
	}
	if (aggregate_func_2930() || aggregate_func_2929())
	{
		if (!func_71(146323340, aggregate_func_5233(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	if (aggregate_func_5305(0) == 1)
	{
	}
	if (aggregate_func_5305(1) == 1)
	{
		iVar0++;
	}
	if (aggregate_func_5305(5) == 1)
	{
		iVar0++;
	}
	if (aggregate_func_5305(6) == 1)
	{
		iVar0++;
	}
	iVar0 = (iVar0 + func_75(0));
	iVar0 = (iVar0 + func_75(1));
	iVar1 = PED::_0x62DE46F061CAA468();
	if (iVar0 > iVar1)
	{
		iVar2 = (iVar0 - iVar1);
		PED::_0xF008E0BA1FE1D644(iVar2);
	}
	else if (iVar0 < iVar1)
	{
		iVar3 = (iVar1 - iVar0);
		PED::_0x7D4E70A67A651C71(iVar3);
	}
}

void func_18()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_76(iVar0);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	*uParam0 = PLAYER::PLAYER_ID();
	if (!PLAYER::IS_PLAYER_DEAD(*uParam0))
	{
		uParam0->f_1 = 1;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		uParam0->f_2 = 1;
		if (PED::IS_PED_INJURED(Global_35))
		{
			uParam0->f_4 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			uParam0->f_3 = 1;
		}
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = PED::GET_MOUNT(Global_35);
		}
	}
}

void func_20(int iParam0, int iParam1)
{
	float fVar0;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*iParam1 = 0;
	iParam1->f_1 = 0;
	iParam1->f_2 = 0;
	iParam1->f_3 = 0;
	iParam1->f_4 = 0;
	iParam1->f_5 = { 0f, 0f, 0f };
	iParam1->f_8 = 0f;
	iParam1->f_10 = 0;
	iParam1->f_9 = 0;
	iParam1->f_10 = 0;
	iParam1->f_11 = 0;
	if (aggregate_func_2994(iParam0))
	{
		iParam1->f_1 = 1;
		*iParam1 = aggregate_func_4938(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_2 = 1;
		}
		if (PED::IS_PED_INJURED(*iParam1))
		{
			iParam1->f_3 = 1;
		}
		if (TASK::IS_PED_IN_WRITHE(*iParam1))
		{
			iParam1->f_4 = 1;
		}
		iParam1->f_5 = { ENTITY::GET_ENTITY_COORDS(*iParam1, true, false) };
		iParam1->f_8 = ENTITY::GET_ENTITY_HEADING(*iParam1);
		iParam1->f_9 = PED::_0xB676EFDA03DADA52(*iParam1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_9))
		{
			if (iParam1->f_9 == Global_35)
			{
				iParam1->f_10 = 1;
			}
		}
		fVar0 = aggregate_func_823(iParam0);
		if (aggregate_func_2912(iParam1->f_5, Global_36) <= fVar0)
		{
			iParam1->f_11 = 1;
		}
	}
}

void func_21(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (Param0.f_1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(Param0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Param0, true, true);
		}
	}
}

void func_22(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (vParam0.z)
	{
		if (aggregate_func_9275(64))
		{
			PED::SET_PED_RESET_FLAG(vParam0.x, 6, true);
		}
	}
}

void func_23(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (func_82())
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), true);
		func_83(Param0, Param7, Param19);
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), false);
		func_14(1);
	}
	func_84();
}

void func_24(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;

	if (!uParam1->f_1)
	{
		return;
	}
	if (!uParam1->f_2)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 388;
	bVar2 = PED::GET_PED_CONFIG_FLAG(*uParam1, iVar1, false);
	if (bVar0 != bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, iVar1, bVar0);
	}
	if (aggregate_func_4506())
	{
		return;
	}
	bVar3 = func_86(iParam0);
	if (uParam1->f_4 != bVar3)
	{
		aggregate_func_5184(iParam0, uParam1->f_4);
		func_88(iParam0);
	}
	if (!uParam1->f_4)
	{
		return;
	}
	if (aggregate_func_9342(iParam0) == 0)
	{
		aggregate_func_7570(iParam0, MISC::GET_GAME_TIMER());
	}
	fVar4 = PED::_0xEBE89623EB861271(*uParam1, 0);
	func_91(iParam0, fVar4);
	if (Global_1915170->f_21961)
	{
		if (!PED::_0x12EB4E31F092C9B3(*uParam1))
		{
			PED::_0x925A160133003AC6(*uParam1, 1);
		}
	}
	else if (PED::_0x12EB4E31F092C9B3(*uParam1))
	{
		PED::_0x925A160133003AC6(*uParam1, 0);
	}
	if (func_92())
	{
		ENTITY::_SET_ENTITY_HEALTH(*uParam1, 0, 0);
	}
}

void func_25(int iParam0, var uParam1)
{
	if (!uParam1->f_1)
	{
		return;
	}
	if (aggregate_func_4506())
	{
		return;
	}
	if (!uParam1->f_2)
	{
		func_93(iParam0);
		return;
	}
}

void func_27(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		aggregate_func_9264();
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (!aggregate_func_295(iVar0))
	{
		return;
	}
	if (!func_97())
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_98(), false);
		aggregate_func_9277(vVar1);
		if (fVar4 > 0.01f)
		{
			fVar5 = func_100();
			fVar5 = (fVar5 + fVar4);
			aggregate_func_8062(fVar5);
		}
		if (func_100() >= 40f)
		{
			aggregate_func_8062(1);
		}
	}
	if (!func_97())
	{
		return;
	}
	aggregate_func_9251(iVar0);
}

void func_28(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!aggregate_func_2994(6))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	iVar1 = aggregate_func_4938(6);
	if (iVar0 != iVar1)
	{
		return;
	}
	if (aggregate_func_5234(6) == 0)
	{
		return;
	}
	if (aggregate_func_2994(1))
	{
		aggregate_func_161(1, 0);
	}
	aggregate_func_1175(1);
	aggregate_func_1107(iVar0);
	aggregate_func_1175(6);
}

void func_29(struct<7> Param0)
{
	int iVar0;
	int iVar1;

	if (!func_108(Param0, &iVar0, 1))
	{
		func_109();
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1903006->f_402))
	{
		Global_1903006->f_402 = iVar0;
		Global_1903006->f_402.f_1 = iVar1;
	}
	if (Global_1903006->f_402.f_1 + 5000 < iVar1)
	{
		func_110(iVar0);
		func_109();
	}
}

bool func_31()
{
	return &Global_1956125;
}

void func_32(int iParam0)
{
	int iVar0;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!aggregate_func_4276(42))
		{
			return;
		}
	}
	iVar0 = Global_1903006[iParam0 /*43*/];
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (&Global_1903006->f_410[iParam0])
	{
		case 0:
		case 1:
			func_123(iParam0);
			Global_1903006->f_410[iParam0] = 2;
			break;
		case 2:
			func_124(iParam0);
			Global_1903006->f_410[iParam0] = 3;
			break;
		case 3:
			func_125(iParam0);
			Global_1903006->f_410[iParam0] = 0;
			break;
	}
}

void func_33(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<9> Param7, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	func_126(iParam19, Param7.f_5, Param7.f_8);
}

void func_34(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	if (aggregate_func_9275(2048))
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = aggregate_func_9015(aggregate_func_4259(0));
	switch (iVar1)
	{
		case 2:
		case 3:
		case 4:
			bVar0 = true;
			break;
	}
	bVar2 = false;
	if (!aggregate_func_4276(41))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (bVar0 || bVar2)
	{
		bVar3 = true;
	}
	iVar4 = 367;
	if (PED::GET_PED_CONFIG_FLAG(Global_35, iVar4, true) != bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, iVar4, bVar3);
	}
	bVar5 = false;
	if (bVar0 && !bVar2)
	{
		bVar5 = true;
	}
	iVar4 = 487;
	if (PED::GET_PED_CONFIG_FLAG(Global_35, iVar4, true) != bVar5)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, iVar4, bVar5);
	}
}

void func_35(struct<5> Param0, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (aggregate_func_2905(Param7, 2043986356))
	{
	}
}

void func_36(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	bool bVar0;
	int iVar1;

	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (aggregate_func_7880(iParam19))
	{
		return;
	}
	bVar0 = false;
	iVar1 = 48;
	if (bVar0)
	{
		if (!FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1, true);
		}
	}
	else if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1, false);
	}
}

void func_38(struct<2> Param0, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, int iParam19)
{
	if (!Param0.f_1)
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (aggregate_func_9342(iParam19) == -1)
	{
		return;
	}
	aggregate_func_7570(iParam19, -1);
}

void func_39(struct<12> Param0, struct<2> Param12, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (func_132())
	{
		return;
	}
	iParam19 = aggregate_func_6496(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!Param12.f_1)
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_11)
	{
		return;
	}
	if (aggregate_func_9342(iParam19) == 1)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_RIDING_TRAIN(Param12))
	{
		return;
	}
	if (aggregate_func_927(Param0, 2043986356))
	{
		return;
	}
	func_134(Param0, Global_35);
}

void func_40(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!aggregate_func_7880(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_7187(iParam0);
	if (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
		{
			return;
		}
	}
	if (aggregate_func_2994(iParam0))
	{
		iVar1 = aggregate_func_4938(iParam0);
		func_136(iVar1, 1);
	}
	aggregate_func_5308(iParam0);
}

void func_41(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	iParam19 = aggregate_func_6496(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	iVar0 = PED::_0xB676EFDA03DADA52(Param7, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_138(iParam19);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		func_138(iParam19);
		return;
	}
	if (aggregate_func_9275(512))
	{
		return;
	}
	if (iVar0 == Global_35)
	{
		return;
	}
	iVar1 = aggregate_func_7187(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if ((iVar2 != -1538724068 && iVar2 != 1391706777) && iVar2 != 1030835986)
		{
			aggregate_func_7570(iParam19, iVar0);
		}
	}
	iVar1 = aggregate_func_7187(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (aggregate_func_918(Param7, Global_35, 1, 1) > aggregate_func_823(iParam19))
	{
		func_138(iParam19);
		func_142(iParam19, 2);
	}
}

void func_42(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!aggregate_func_7880(iParam19))
	{
		return;
	}
	fVar0 = aggregate_func_1050(Param7);
	bVar1 = false;
	if (fVar0 > 0f)
	{
		bVar1 = true;
	}
	iVar2 = MISC::GET_GAME_TIMER();
	if (!bVar1 || aggregate_func_9342(iParam19) + 30000 < iVar2)
	{
		aggregate_func_7570(iParam19, 0);
		aggregate_func_7570(iParam19, -1);
		if (aggregate_func_3080(16))
		{
			aggregate_func_7858(16);
		}
		if (aggregate_func_3083(16))
		{
			aggregate_func_4111(16);
		}
	}
}

void func_43(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	int iVar13;

	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	iVar0 = func_152(5);
	if (iVar0 == 0)
	{
		return;
	}
	func_20(5, &vVar1);
	if (iVar0 == 2)
	{
		if (vVar1.y && !vVar1.z)
		{
			func_138(5);
			aggregate_func_5184(5, 1);
		}
		if (vVar1.z)
		{
			if (aggregate_func_918(vVar1.x, Global_35, 1, 1) > aggregate_func_823(5) && !ENTITY::IS_ENTITY_ON_SCREEN(vVar1.x))
			{
				iVar13 = PED::_0xB676EFDA03DADA52(vVar1.x, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar13))
				{
					if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
					{
					}
					if (!ENTITY::_0x88AD6CC10D8D35B2(iVar13))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar13, true, true);
						PED::DELETE_PED(&iVar13);
					}
				}
				aggregate_func_764(5);
				aggregate_func_5184(5, 0);
			}
		}
		if (!vVar1.y && aggregate_func_5305(5) == 1)
		{
			aggregate_func_5184(5, 0);
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (!aggregate_func_4276(41))
	{
		return;
	}
	if (aggregate_func_5305(0) == 1 && aggregate_func_5136() == 0)
	{
		aggregate_func_161(5, 0);
		aggregate_func_1175(5);
	}
}

void func_44(struct<5> Param0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (aggregate_func_4276(41))
	{
		return;
	}
	bVar0 = false;
	if ((aggregate_func_5305(0) == 0 && aggregate_func_5305(5) == 1) && func_152(5) == 1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = aggregate_func_9015(aggregate_func_4259(0));
	bVar2 = false;
	if (iVar1 == 2)
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (!aggregate_func_4276(41))
		{
			aggregate_func_4767(41);
			aggregate_func_4767(29);
		}
		if (!aggregate_func_3014(55))
		{
			func_158(1);
		}
	}
}

void func_45()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_5231(0);
	iVar1 = aggregate_func_5231(1);
	if (Global_1903006->f_404 != 0)
	{
		if (Global_1903006->f_404 != iVar0)
		{
			if (!aggregate_func_4841(Global_1903006->f_404))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1903006->f_404, false);
			}
			Global_1903006->f_404 = 0;
		}
	}
	if (Global_1903006->f_404.f_1 != 0)
	{
		if (Global_1903006->f_404.f_1 != iVar1)
		{
			if (!aggregate_func_4841(Global_1903006->f_404.f_1))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1903006->f_404.f_1, false);
			}
			Global_1903006->f_404.f_1 = 0;
		}
	}
	if (iVar0 != 0)
	{
		if (!PED::_0xAA9F048DCF69B6DC(iVar0))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar0, true);
			Global_1903006->f_404 = iVar0;
		}
	}
	if (iVar1 != 0)
	{
		if (!PED::_0xAA9F048DCF69B6DC(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, true);
			Global_1903006->f_404.f_1 = iVar1;
		}
	}
}

void func_46()
{
	int iVar0;

	func_161(Global_1903006->f_422);
	iVar0 = Global_1903006->f_422;
	iVar0++;
	if (iVar0 >= 5)
	{
		iVar0 = 0;
	}
	Global_1903006->f_422 = iVar0;
}

void func_47(struct<5> Param0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (aggregate_func_4506())
	{
		return;
	}
	bVar0 = aggregate_func_4203();
	if (bVar0)
	{
		iVar1 = aggregate_func_6910();
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
	}
	bVar2 = false;
	if (bVar0)
	{
		bVar2 = func_164(Global_35, iVar1);
	}
	bVar3 = aggregate_func_4276(41);
	bVar4 = false;
	if (bVar0)
	{
		if (bVar2)
		{
			if (aggregate_func_5375() != 1 && !aggregate_func_4337(0))
			{
				aggregate_func_5267(1);
				bVar4 = true;
			}
		}
		else
		{
			if (aggregate_func_5375() == 1 && !aggregate_func_4337(0))
			{
				aggregate_func_5267(2);
				bVar4 = true;
			}
			if (ENTITY::IS_ENTITY_STATIC(iVar1))
			{
				ENTITY::SET_ENTITY_DYNAMIC(iVar1, true);
			}
		}
		vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
		aggregate_func_8701(vVar5);
	}
	else
	{
		if (aggregate_func_5375() == 0)
		{
			if (aggregate_func_5136() == 5)
			{
				if (aggregate_func_2994(5))
				{
					vVar8 = { ENTITY::GET_ENTITY_COORDS(aggregate_func_4938(5), false, false) };
					aggregate_func_8701(vVar8);
				}
				else if (bVar3)
				{
					vVar11 = { func_169() };
					aggregate_func_4748(-1);
					aggregate_func_5267(2);
					bVar4 = true;
				}
			}
		}
		if (aggregate_func_5375() == 2)
		{
			vVar14 = { func_169() };
			func_171(vVar14, 0f, 1);
		}
	}
	if (bVar4)
	{
		func_62();
	}
}

void func_48()
{
	vector3 vVar0;
	struct<4> Var12;
	bool bVar19;

	if (!aggregate_func_2994(6))
	{
		return;
	}
	func_20(6, &vVar0);
	if (!vVar0.z)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&vVar0);
		aggregate_func_1175(6);
		return;
	}
	func_19(&Var12);
	bVar19 = false;
	if (!Var12.f_3)
	{
		bVar19 = true;
	}
	if (aggregate_func_918(vVar0.x, Global_35, 1, 1) > 100f)
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		aggregate_func_161(6, 0);
		aggregate_func_1175(6);
	}
}

void func_49()
{
	struct<11> Var0;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!aggregate_func_2994(1))
	{
		func_172();
		return;
	}
	func_20(1, &Var0);
	if (!Var0.f_2)
	{
		func_172();
		return;
	}
	if (func_173(1))
	{
		func_172();
		return;
	}
	if (aggregate_func_5234(1) >= 1)
	{
		func_172();
		return;
	}
	if (!func_174(1))
	{
		func_172();
		return;
	}
	if (Var0.f_10)
	{
		func_172();
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Var0.f_9))
	{
		func_172();
		return;
	}
	iVar12 = MISC::GET_GAME_TIMER();
	if (!func_175())
	{
		iVar13 = func_176();
		if (iVar13 == 0)
		{
			aggregate_func_5129(iVar12);
		}
		else if (iVar13 + 5000 < iVar12)
		{
			func_178(1);
		}
	}
	if (!func_175())
	{
		return;
	}
	if (!aggregate_func_2905(Var0, 518218985))
	{
		TASK::TASK_SMART_FLEE_PED(Var0, Global_35, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(Var0, true);
	}
	if (func_179(Var0, -1))
	{
		return;
	}
	iVar14 = func_180();
	if (iVar14 == 0)
	{
		func_181(iVar12);
	}
	else if (iVar14 + 15000 < iVar12)
	{
		aggregate_func_161(1, 1);
		func_172();
	}
}

void func_50()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bVar1 = true;
		iVar0 = PED::GET_MOUNT(Global_35);
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if ((Global_40.f_277.f_1[iVar5 /*431*/])->f_9 == 0)
		{
			if ((Global_40.f_277.f_1[iVar5 /*431*/])->f_426 > -1)
			{
				(Global_40.f_277.f_1[iVar5 /*431*/])->f_426 = -1;
			}
		}
		else
		{
			bVar3 = false;
			bVar4 = false;
			iVar2 = Global_1903006[iVar5 /*43*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = true;
				if (bVar1)
				{
					if (iVar0 == iVar2)
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				if ((Global_40.f_277.f_1[iVar5 /*431*/])->f_426 > -1)
				{
					(Global_40.f_277.f_1[iVar5 /*431*/])->f_426 = -1;
				}
			}
			else
			{
				iVar6 = CLOCK::_GET_SECONDS_SINCE_BASE_YEAR();
				if (bVar3)
				{
					iVar7 = PED::_0xE8D1CCB9375C101B(iVar2, PLAYER::PLAYER_ID());
					if (iVar7 == -1 || iVar7 == 0)
					{
						iVar7 = iVar6;
						PED::_0xA691C10054275290(iVar2, PLAYER::PLAYER_ID(), iVar7);
					}
					if ((Global_40.f_277.f_1[iVar5 /*431*/])->f_426 != iVar7)
					{
						(Global_40.f_277.f_1[iVar5 /*431*/])->f_426 = iVar7;
					}
				}
				else if ((Global_40.f_277.f_1[iVar5 /*431*/])->f_426 == -1)
				{
					(Global_40.f_277.f_1[iVar5 /*431*/])->f_426 = iVar6;
				}
			}
		}
		iVar5++;
	}
}

void func_51()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (aggregate_func_7123())
	{
		bVar1 = true;
	}
	if (aggregate_func_2994(0))
	{
		iVar2 = aggregate_func_4938(0);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 31, 2, bVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 32, 2, bVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar2, 33, 2, bVar1);
	}
	if (aggregate_func_2994(1))
	{
		iVar3 = aggregate_func_4938(1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 31, 2, bVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 32, 2, bVar1);
		PLAYER::_0xA3DB37EDF9A74635(iVar0, iVar3, 33, 2, bVar1);
	}
}

void func_52()
{
	if (aggregate_func_4276(32))
	{
		if (!func_183())
		{
			aggregate_func_1144(1);
		}
	}
	else if (func_183())
	{
		aggregate_func_1144(0);
	}
	if (aggregate_func_4276(33))
	{
		if (!func_185())
		{
			aggregate_func_1145(1);
		}
	}
	else if (func_185())
	{
		aggregate_func_1145(0);
	}
	if (aggregate_func_4276(34))
	{
		if (!func_187())
		{
			aggregate_func_1146(1);
		}
	}
	else if (func_187())
	{
		aggregate_func_1146(0);
	}
}

void func_53(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	float fVar0;
	int iVar1;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (!Param7.f_4)
	{
		return;
	}
	iParam19 = aggregate_func_6496(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	fVar0 = aggregate_func_918(Param7, Global_35, 1, 1);
	if (fVar0 > 40f)
	{
		func_88(iParam19);
		return;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(Param7))
	{
		func_88(iParam19);
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!func_189(iParam19))
	{
		aggregate_func_7570(iParam19, iVar1);
		return;
	}
	if (aggregate_func_7187(iParam19) + 15000 < iVar1)
	{
		aggregate_func_7570(iParam19, iVar1);
	}
}

void func_54(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<6> Param7, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	iParam19 = aggregate_func_6496(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	vVar0 = { aggregate_func_8607(iParam19) };
	if (aggregate_func_4268(vVar0))
	{
		return;
	}
	vVar3 = { aggregate_func_8607(iParam19) };
	fVar6 = func_195(iParam19);
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param7.f_5, vVar3, true);
	if (fVar7 > 0.01f)
	{
		fVar6 = (fVar6 + fVar7);
		func_196(iParam19, Param7.f_5);
		aggregate_func_7570(iParam19, fVar6);
	}
}

void func_55(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	func_198(Param0);
	func_199(Param0);
	func_200(Param0, Param7);
	func_201();
	func_202(Param0, Param7, Param19);
	func_203(Param0);
	func_204(Param0, Param7, Param19);
	func_205(Param0, Param7, Param19);
	func_206();
	func_207(Param0);
	func_208();
	func_209(Param0);
	func_210(Param0);
	func_211(Param0, Param7);
	func_212(Param0, Param7, Param19);
	func_213(Param0);
}

void func_56()
{
	struct<2> Var0;
	int iVar2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	Var0 = { aggregate_func_4259(0) };
	if (aggregate_func_4255(Var0))
	{
		if (Var0 == 2)
		{
			return;
		}
	}
	iVar2 = func_215();
	WEAPON::_0x641351E9AD103890(Global_35, iVar2);
}

void func_57(int iParam0, bool bParam1)
{
	int iVar0;
	struct<95> Var1;
	struct<11> Var96;
	int iVar191;
	var uVar192;
	int iVar196;
	int iVar197;
	int iVar198;
	int iVar199;
	int iVar200;
	var uVar201;
	var uVar202;
	var uVar203;
	var uVar204;
	bool bVar205;
	bool bVar206;
	int iVar207;
	bool bVar208;
	int iVar209;
	bool bVar210;
	bool bVar211;
	int iVar212;

	if (!func_216(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::_0x8D9BFCE3352DE47F(iVar0))
	{
		return;
	}
	Var1.f_10 = 10;
	Var96.f_10 = 10;
	aggregate_func_5322(&Var1);
	bVar205 = false;
	bVar206 = ((PED::IS_PED_RAGDOLL(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || TASK::IS_PED_IN_WRITHE(iVar0));
	bVar208 = false;
	if (((func_218(10) || func_218(9)) || func_218(29)) || func_218(27))
	{
		bVar208 = true;
	}
	iVar209 = 1;
	bVar210 = false;
	bVar211 = aggregate_func_3031(131072, 255);
	if (!bVar211)
	{
		if (aggregate_func_4924())
		{
			bVar211 = true;
		}
	}
	iVar207 = 0;
	while (iVar207 < 3)
	{
		iVar191 = aggregate_func_5185(iVar207);
		iVar199 = iVar207;
		aggregate_func_5322(&Var1);
		bVar210 = false;
		bVar205 = bVar206;
		iVar197 = (Global_1268935->f_906.f_245[iVar207 /*4*/])->f_3;
		if (!bVar205)
		{
			if (!PED::_0x608BC6A6AACD5036(Global_1268935->f_906.f_245[iVar207 /*4*/], iVar0, iVar191, 0))
			{
				if (bParam1 && !Global_1903928->f_129)
				{
				}
				else
				{
					bVar205 = true;
					Jump @368; //curOff = 306
					if (ENTITY::DOES_ENTITY_EXIST(iVar197) && ENTITY::DOES_ENTITY_EXIST((Global_1268935->f_906.f_245[iVar207 /*4*/])->f_3))
					{
						if (iVar197 != (Global_1268935->f_906.f_245[iVar207 /*4*/])->f_3)
						{
							bVar205 = true;
							bVar210 = true;
						}
					}
					if (!bVar205)
					{
						iVar196 = (Global_1268935->f_906.f_245[iVar207 /*4*/])->f_3;
						if (!ENTITY::DOES_ENTITY_EXIST(iVar196))
						{
							bVar205 = true;
						}
					}
					if (!bVar205)
					{
						iVar212 = ENTITY::_0x61914209C36EFDDB(iVar196);
						if (iVar212 != 7)
						{
							bVar205 = true;
							if (!Global_1903928->f_130)
							{
								iVar209 = 0;
							}
							if (&Global_1268935->f_906.f_241[iVar207] == 7)
							{
								bVar210 = true;
							}
						}
						Global_1268935->f_906.f_241[iVar207] = iVar212;
					}
					if (!bVar205)
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar196))
						{
							bVar205 = true;
						}
					}
					if (!bVar205)
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar196))
						{
							iVar198 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar196);
							if (PED::IS_PED_HUMAN(iVar198))
							{
								bVar205 = true;
							}
							Var1.f_4 = PED::_0x7BCC6087D130312A(iVar198);
							Var1.f_9 = PED::_0x90403E8107B60E81(iVar198);
							Var1.f_6 = PED::_0x88EFFED5FE8B0B4A(iVar198);
							Var1.f_7 = PED::_0x6CFC373008A1EDAF(iVar198);
						}
					}
					if (!bVar205)
					{
						Var1 = ENTITY::GET_ENTITY_MODEL(iVar196);
						Var1.f_1 = aggregate_func_1522(iVar196);
						Var1.f_2 = ENTITY::_0xD21C7418C590BB40(iVar196);
						Var1.f_3 = ENTITY::_0x0FD25587BB306C86(iVar196);
						Var1.f_93 = ENTITY::_0xB16C780C51E51E2B(iVar196);
						if (bVar208)
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar196))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar196);
							}
						}
						if (((Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1 != 0)
						{
							if (((Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1 != Var1.f_1)
							{
								aggregate_func_3067(iVar0, ((Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1, 1, !bVar210, -142743235);
								if (Var1.f_1 != 0)
								{
									if (func_224(iVar0, iParam0, Var1.f_1, iVar207))
									{
										aggregate_func_3661(INVENTORY::_0x13D234A2A3F66E63(iVar0), Var1.f_1, 1);
									}
									((Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1 = Var1.f_1;
								}
								Global_1939221->f_4 = 1;
							}
						}
						else
						{
							Global_1939221->f_4 = 1;
							if (func_224(iVar0, iParam0, Var1.f_1, iVar207))
							{
								aggregate_func_3661(INVENTORY::_0x13D234A2A3F66E63(iVar0), Var1.f_1, 1);
							}
						}
					}
					else
					{
						if (((Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1 != 0)
						{
							Global_1939221->f_4 = 1;
							aggregate_func_3067(iVar0, ((Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/])->f_1, 1, !bVar210, -142743235);
						}
						Global_1268935->f_906.f_241[iVar207] = 0;
						MISC::_COPY_MEMORY(Global_1268935->f_906.f_245[iVar207 /*4*/], &uVar192, 4);
						aggregate_func_3069(&Var96, (Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/]);
					}
					else
					{
						if (STREAMING::IS_MODEL_A_PED(Var1))
						{
							Var1.f_8 = PED::_0x30569F348D126A5A(iVar198);
							if (Global_1903928->f_130)
							{
								if (Var1.f_9 <= 1)
								{
								}
								else if (Var1.f_9 > 10)
								{
									Var1.f_9 = 10;
								}
								iVar200 = 0;
								while (iVar200 < Var1.f_9)
								{
									if (iVar200 >= 10)
									{
									}
									else
									{
										if (PED::_0xA9C28516A6DC9D56(iVar198, iVar200, &uVar201, &uVar202, &uVar203, &uVar204))
										{
											Var1.f_10[iVar200 /*8*/] = uVar201;
											(Var1.f_10[iVar200 /*8*/])->f_1 = uVar202;
											(Var1.f_10[iVar200 /*8*/])->f_2 = uVar203;
											(Var1.f_10[iVar200 /*8*/])->f_3 = uVar204;
										}
										if (PED::_0xE7998FEC53A33BBE(iVar198, iVar200, &uVar201, &uVar202, &uVar203, &uVar204))
										{
											(Var1.f_10[iVar200 /*8*/])->f_4 = uVar201;
											(Var1.f_10[iVar200 /*8*/])->f_5 = uVar202;
											(Var1.f_10[iVar200 /*8*/])->f_6 = uVar203;
											(Var1.f_10[iVar200 /*8*/])->f_7 = uVar204;
										}
										iVar200++;
									}
								}
							}
							Var1.f_91 = _NAMESPACE49::_0x2E545965DF98D476(iVar196);
							if (PED::_0xFB4891BD7578CDC1(iVar198, 43391475) || ENTITY::_0x8DE41E9902E85756(iVar196))
							{
								Var1.f_92 = 1;
							}
							else
							{
								Var1.f_92 = 0;
							}
							Var1.f_94 = ENTITY::_0x37B01666BAE8F7EF(iVar196);
							if (MISC::_0x5170DDA6D63ACAAA(iVar198))
							{
								TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(Global_35, iVar0, iVar196);
								ENTITY::_0x18FF3110CF47115D(iVar196, 2, false);
								MISC::_0x674B90BE1115846D(iVar198, 1);
								if (aggregate_func_6546(aggregate_func_892(iVar198), 82))
								{
									aggregate_func_4322(113, 1);
								}
								aggregate_func_3069(&Var96, (Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/]);
							}
							else
							{
								if (Var1.f_91 >= 12)
								{
									if (aggregate_func_7081() && aggregate_func_6546(aggregate_func_892(iVar198), 82))
									{
										aggregate_func_4322(112, 0);
									}
								}
								else if (Var1.f_91 >= 2)
								{
									if (aggregate_func_7081() && aggregate_func_6546(aggregate_func_892(iVar198), 82))
									{
										aggregate_func_4322(111, 0);
									}
								}
								aggregate_func_3069(&Var1, (Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar199 /*95*/]);
							}
							iVar207++;
							if (Global_1903928->f_129)
							{
								if (!Global_1903928->f_130)
								{
									if (iVar209 == 1)
									{
										Global_1903928->f_130 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_58(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_216(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	if (!func_231(iVar0))
	{
		return;
	}
	if (bParam1)
	{
		if (!Global_1903928->f_129)
		{
			return;
		}
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	PED::_0x6F43C351A5D51E2F(iVar0, &((Global_40.f_277.f_1[iParam0 /*431*/])->f_353));
}

void func_59()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar6 = 0;
	while (iVar6 < 7)
	{
		if (!aggregate_func_2994(iVar6))
		{
		}
		else
		{
			iVar7 = aggregate_func_4938(iVar6);
			if (func_232(iVar6))
			{
				if (!func_233(iVar7))
				{
					iVar8 = func_234(iVar6);
					func_235(iVar7, iVar8);
				}
				else
				{
					iVar9 = func_236(iVar6);
					aggregate_func_4674(iVar9, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
					if (iVar3 >= 1)
					{
						func_238(iVar7);
						func_239(iVar6);
					}
					else if (!func_233(iVar7))
					{
					}
					else if (!func_232(iVar6))
					{
						iVar10 = func_240(iVar7);
						aggregate_func_5184(iVar6, 1);
						func_242(iVar6, iVar10);
						func_244(iVar6, aggregate_func_4265());
					}
				}
				iVar6++;
			}
		}
	}
}

void func_60()
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	char cVar10[64];

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!aggregate_func_2994(iVar0))
		{
		}
		else
		{
			iVar1 = aggregate_func_5231(iVar0);
			if (!func_245(iVar1))
			{
			}
			else
			{
				Var2 = { aggregate_func_5561(iVar0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
				{
				}
				else
				{
					StringCopy(&cVar10, func_247(iVar1), 64);
					StringCopy(&Var2, HUD::_GET_LABEL_TEXT_2(&cVar10), 64);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
					{
					}
					else
					{
						aggregate_func_5584(iVar0, Var2);
						aggregate_func_944(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_62()
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_1903006->f_379;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1903006->f_379.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1903006->f_379.f_1));
		}
		return;
	}
	if (Global_1939168->f_6)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	bVar1 = func_164(Global_35, iVar0);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1903006->f_379.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1903006->f_379.f_1));
		}
	}
	else if (aggregate_func_5375() == 3)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1903006->f_379.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1903006->f_379.f_1));
		}
	}
	else if (!MAP::DOES_BLIP_EXIST(Global_1903006->f_379.f_1))
	{
		Global_1903006->f_379.f_1 = MAP::_0x23F74C2FDA6E7C61(-515518185, iVar0);
		aggregate_func_1376(&(Global_1903006->f_379.f_1));
	}
}

void func_63()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_257(Global_1903006->f_418, Global_1903006->f_419);
	bVar0 = false;
	iVar1 = Global_1903006->f_419;
	iVar1++;
	if (iVar1 >= 2)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1903006->f_419 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1903006->f_418;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1903006->f_418 = iVar2;
	}
}

void func_64()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_258(Global_1903006->f_420, Global_1903006->f_421);
	bVar0 = false;
	iVar1 = Global_1903006->f_421;
	iVar1++;
	if (iVar1 >= 3)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1903006->f_421 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1903006->f_420;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1903006->f_420 = iVar2;
	}
}

void func_65()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (Global_1903006->f_303.f_1)
	{
		case 0:
			func_259(0);
			break;
		case 1:
			func_259(1);
			break;
		case 2:
			func_259(6);
			break;
	}
	iVar0 = Global_1903006->f_303.f_1;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1903006->f_303.f_1 = iVar0;
}

int func_69()
{
	int iVar0;

	iVar0 = -1427204870;
	return iVar0;
}

bool func_71(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (aggregate_func_2823(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (aggregate_func_1500(Var3, Param1, Var12.f_4, 0, 1, 0) > 0)
				{
				}
				else
				{
					aggregate_func_4600(&Var7);
					if (aggregate_func_2130(Var3, &Var7, &Var12, 1, 752097756, 0))
					{
						if (bParam5)
						{
							aggregate_func_2072(Var7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (iVar2 == -1)
		{
		}
		else if (iVar2 == 3)
		{
		}
		else
		{
			iVar1 = &(Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar2 /*95*/];
			if (iVar1 == 0)
			{
			}
			else if (!STREAMING::IS_MODEL_VALID(iVar1))
			{
			}
			else if (!STREAMING::IS_MODEL_A_PED(iVar1))
			{
			}
			else
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<2> Var12;
	struct<8> Var14;
	int iVar22;
	int iVar23;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!aggregate_func_8117(iParam0, 1))
	{
		return;
	}
	if (func_269(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	iVar1 = aggregate_func_4938(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		bVar2 = true;
	}
	else
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
		{
			return;
		}
	}
	vVar3 = { aggregate_func_8607(iParam0) };
	fVar6 = func_271(iParam0);
	if (aggregate_func_4268(vVar3))
	{
		return;
	}
	if (!bVar2)
	{
		aggregate_func_6630(iParam0);
		if (!func_273())
		{
			return;
		}
		if (!aggregate_func_8297(iParam0))
		{
			return;
		}
		iVar7 = aggregate_func_5231(iParam0);
		iVar1 = func_275(iVar7, vVar3, fVar6, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		aggregate_func_5307(iParam0, iVar1);
		aggregate_func_46(iVar1);
		func_277(iVar1, iParam0);
		aggregate_func_944(iParam0);
		PED::_SET_PED_OUTFIT_PRESET(iVar1, 0, 0);
		func_278(iParam0);
		func_279(iParam0);
		func_280(iParam0);
		if (iParam0 == 0)
		{
			PLAYER::_0x8FBF9EDB378CCB8C(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			PLAYER::_0x227B06324234FB09(iVar0, iVar1);
		}
		if (func_86(iParam0))
		{
			fVar8 = func_281(iParam0);
			PED::_0x4DB9D03AC4E1FA84(iVar1, fVar8, fVar8, 0);
			TASK::TASK_ANIMAL_WRITHE(iVar1, 0, 1);
		}
		aggregate_func_5184(iParam0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
	}
	if (!PED::_0xA0BC8FAED8CFEB3C(iVar1))
	{
		return;
	}
	bVar9 = false;
	iVar10 = aggregate_func_5136();
	if (iParam0 == iVar10)
	{
		PLAYER::_0xD2CB0FB0FDCB473D(iVar0, iVar1);
		bVar9 = true;
	}
	iVar11 = func_282(iParam0);
	aggregate_func_2022(iVar1, iVar11);
	Var12 = { aggregate_func_9631(iParam0) };
	if (bVar9)
	{
		Var14 = { aggregate_func_9632() };
	}
	else
	{
		aggregate_func_5564(&Var14);
	}
	iVar22 = aggregate_func_1402(iVar1, 2);
	iVar23 = func_288(iVar22);
	aggregate_func_7570(iParam0, iVar23);
	if (!bVar9 && func_290(iParam0))
	{
		aggregate_func_919(iVar1, 0);
	}
	aggregate_func_931(iVar1, &Var12, &Var14, iVar23, 1);
	aggregate_func_1818(iParam0);
	aggregate_func_26(iParam0);
	func_293(iParam0);
	aggregate_func_8702(iParam0);
}

bool func_82()
{
	if (!aggregate_func_7514(256))
	{
		return false;
	}
	if (aggregate_func_2059())
	{
		return false;
	}
	if (aggregate_func_4492() && !aggregate_func_4276(31))
	{
		return false;
	}
	if (aggregate_func_9275(2) || aggregate_func_9275(4))
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (Global_1939168->f_6)
	{
		return false;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return false;
	}
	if (PED::_0x3AA24CCC0D451379(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	return true;
}

void func_83(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;

	bVar0 = false;
	if (vParam7.z)
	{
		if (aggregate_func_5234(0) >= 1)
		{
			bVar0 = true;
		}
	}
	bVar1 = false;
	if (vParam19.z)
	{
		if (aggregate_func_5234(1) >= 1)
		{
			bVar1 = true;
		}
	}
	iVar2 = MISC::GET_GAME_TIMER();
	switch (func_300())
	{
		case 0:
			func_14(1);
		case 1:
			aggregate_func_9343(0);
			aggregate_func_9343(-72209530);
			func_303(0, 0);
			func_303(1, 0);
			func_304(1);
			func_14(2);
		case 2:
			if (!aggregate_func_9275(1))
			{
				return;
			}
			func_14(3);
		case 3:
			aggregate_func_9343(iVar2);
			func_304(1);
			func_14(4);
		case 4:
			bVar3 = false;
			bVar4 = true;
			bVar5 = true;
			if (aggregate_func_4371() == 8)
			{
				if (!bVar3)
				{
					if (!aggregate_func_2056())
					{
						aggregate_func_4322(12, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (aggregate_func_5304(5))
			{
				if (aggregate_func_5305(0) == 0 && (aggregate_func_5305(1) == 0 || !bVar1))
				{
					if (!bVar3)
					{
						if (!aggregate_func_2056())
						{
							func_309();
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if ((aggregate_func_5305(0) == 0 && (aggregate_func_5305(1) == 0 || !bVar1)) && aggregate_func_5305(5) == 0)
			{
				if (!bVar3)
				{
					if (!aggregate_func_2056())
					{
						aggregate_func_4322(11, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (aggregate_func_5305(0) == 1 || (aggregate_func_5305(1) == 1 && bVar1))
			{
				iVar6 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
				if (INTERIOR::IS_VALID_INTERIOR(iVar6))
				{
					if (!bVar3)
					{
						if (aggregate_func_2717(iVar6))
						{
							if (!aggregate_func_2056())
							{
								aggregate_func_4322(14, 1);
							}
						}
						else if (aggregate_func_2718(iVar6))
						{
							if (!aggregate_func_2056())
							{
								aggregate_func_4322(15, 1);
							}
						}
						else if (!aggregate_func_2056())
						{
							aggregate_func_4322(13, 1);
						}
						if (aggregate_func_2994(0))
						{
							fVar7 = aggregate_func_823(0);
							iVar8 = aggregate_func_4938(0);
							if (!aggregate_func_2797(0) && !func_173(0))
							{
								if (aggregate_func_918(Global_35, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_35, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
								}
							}
						}
						if (aggregate_func_2994(1))
						{
							fVar7 = aggregate_func_823(1);
							iVar8 = aggregate_func_4938(1);
							if (!aggregate_func_2797(1) && !func_173(1))
							{
								if (aggregate_func_918(Global_35, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_35, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
								}
							}
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if (aggregate_func_9275(16) || !aggregate_func_4276(31))
			{
				if (!bVar3)
				{
					if (!aggregate_func_2056())
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1903006->f_364.f_12)))
						{
							aggregate_func_2975(&(Global_1903006->f_364.f_12), 10000, 0, 0, 0, 1);
						}
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (vParam7.z)
			{
				if (!bVar0)
				{
					if (!bVar3)
					{
						if (!aggregate_func_2056())
						{
							aggregate_func_4322(7, 1);
						}
						bVar3 = true;
					}
					bVar4 = false;
				}
			}
			if (vParam19.z)
			{
				if (!bVar1)
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!aggregate_func_2056())
							{
								aggregate_func_4322(7, 1);
							}
							bVar3 = true;
						}
					}
					bVar5 = false;
				}
			}
			if (vParam7.z)
			{
				if (aggregate_func_7880(0))
				{
					if (!bVar3)
					{
						if (!aggregate_func_2056())
						{
							aggregate_func_4322(16, 1);
						}
						bVar3 = true;
					}
				}
			}
			if (vParam19.z && bVar1)
			{
				if (aggregate_func_7880(1))
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!aggregate_func_2056())
							{
								aggregate_func_4322(16, 1);
							}
							bVar3 = true;
						}
					}
				}
			}
			PLAYER::_0x9044835BE9D9DBFE(iParam0, (bVar4 || bVar5));
			if (!bVar4)
			{
				if (vParam7.z)
				{
					aggregate_func_26(0);
					func_314(0);
				}
			}
			if (!bVar5)
			{
				if (vParam19.z)
				{
					aggregate_func_26(1);
					func_314(1);
				}
			}
			if (!bVar4 && !bVar5)
			{
				func_14(1);
				return;
			}
			func_14(5);
		case 5:
			func_315(1);
			if (func_316(0) == 6 && func_316(1) == 6)
			{
				func_14(1);
			}
			break;
	}
}

int func_84()
{
	if (aggregate_func_9275(2) || aggregate_func_9275(4))
	{
		func_304(2);
		func_304(4);
		return 1;
	}
	return 0;
}

bool func_86(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_415;
}

void func_88(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903006)[iParam0 /*43*/])->f_41 = 0;
}

void func_91(int iParam0, float fParam1)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_277.f_1[iParam0 /*431*/])->f_415.f_1 = fParam1;
}

bool func_92()
{
	return Global_1956162->f_6;
}

void func_93(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (aggregate_func_3080(56))
	{
		aggregate_func_7858(56);
	}
	if (aggregate_func_3083(56))
	{
		aggregate_func_4111(56);
	}
	if (aggregate_func_3080(57))
	{
		aggregate_func_7858(57);
	}
	if (aggregate_func_3083(57))
	{
		aggregate_func_4111(57);
	}
	bVar1 = false;
	if (iParam0 == 0)
	{
		bVar1 = true;
	}
	else if ((iParam0 == 1 && aggregate_func_5305(0) == 0) && aggregate_func_5305(5) == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_142(iParam0, 1);
	}
	else
	{
		aggregate_func_161(iParam0, 0);
	}
}

void func_94(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_269(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (aggregate_func_2994(iParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = aggregate_func_4938(iParam0);
		if (!ENTITY::_0x88AD6CC10D8D35B2(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (PED::_0xAA9F048DCF69B6DC(iVar2))
		{
			if (!aggregate_func_4841(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		if (aggregate_func_8117(iParam0, 4))
		{
			aggregate_func_764(iParam0);
		}
		else if (aggregate_func_8117(iParam0, 8))
		{
			PED::SET_PED_KEEP_TASK(iVar1, true);
			TASK::TASK_SMART_FLEE_PED(iVar1, Global_35, 500f, -1, 0, 1f, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
		else if (aggregate_func_8117(iParam0, 2))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
	if (aggregate_func_8117(iParam0, 16))
	{
		aggregate_func_1175(iParam0);
	}
	aggregate_func_5307(iParam0, 0);
	aggregate_func_5308(iParam0);
	aggregate_func_8702(iParam0);
	aggregate_func_8149(iParam0, 2);
	aggregate_func_8149(iParam0, 4);
	aggregate_func_8149(iParam0, 8);
	aggregate_func_8149(iParam0, 16);
}

bool func_97()
{
	return Global_1903006->f_392.f_5;
}

Vector3 func_98()
{
	return Global_1903006->f_392.f_1;
}

float func_100()
{
	return Global_1903006->f_392.f_4;
}

bool func_108(struct<5> Param0, var uParam5, var uParam6, int iParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!Param0.f_2)
	{
		return false;
	}
	if (!Param0.f_3)
	{
		return false;
	}
	if (Param0.f_4)
	{
		return false;
	}
	if (bParam8)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			return false;
		}
		*iParam7 = PED::GET_MOUNT(Global_35);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam7))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*iParam7))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(*iParam7))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(*iParam7))
	{
		return false;
	}
	if (aggregate_func_1794(*iParam7))
	{
		return false;
	}
	if (aggregate_func_1918(*iParam7))
	{
		return false;
	}
	if (func_352(*iParam7))
	{
		return false;
	}
	if (func_353(*iParam7))
	{
		return false;
	}
	if (aggregate_func_1454(*iParam7))
	{
		return false;
	}
	if (aggregate_func_2575(*iParam7))
	{
		return false;
	}
	if (func_354(*iParam7))
	{
		return false;
	}
	bVar0 = aggregate_func_4717();
	bVar1 = false;
	iVar2 = PED::_0xF103823FFE72BB49(*iParam7);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar1 = true;
		}
	}
	if (bVar0 || bVar1)
	{
	}
	else
	{
		return false;
	}
	return true;
}

void func_109()
{
	Global_1903006->f_402 = 0;
	Global_1903006->f_402.f_1 = 0;
}

void func_110(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (aggregate_func_1454(iParam0))
	{
		return;
	}
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	iVar0 = aggregate_func_5231(iParam0);
	if (aggregate_func_5234(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = aggregate_func_4938(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PED::_0xB676EFDA03DADA52(iVar1, 0) != Global_35)
	{
		bVar3 = true;
	}
	bVar4 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar4 = true;
	}
	if ((fVar2 < 0.5f || bVar3) || !bVar4)
	{
		(Global_1903006->f_303.f_2[iParam0 /*5*/])->f_1 = -1;
		Global_1903006->f_303.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if ((Global_1903006->f_303.f_2[iParam0 /*5*/])->f_2 >= 100f)
	{
		aggregate_func_1916(1, 100f);
		fVar5 = ((Global_1903006->f_303.f_2[iParam0 /*5*/])->f_2 - 100f);
		(Global_1903006->f_303.f_2[iParam0 /*5*/])->f_2 = fVar5;
	}
	fVar6 = PED::_0x775A1CA7893AA8B5(iVar1);
	if (fVar6 < 1f)
	{
		(Global_1903006->f_303.f_2[iParam0 /*5*/])->f_1 = -1;
		Global_1903006->f_303.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if (fVar2 > 0.5f && fVar2 <= 4f)
	{
		if (&Global_1903006->f_303.f_2[iParam0 /*5*/] == -1)
		{
			Global_1903006->f_303.f_2[iParam0 /*5*/] = 0;
		}
	}
	if (fVar2 > 4f && fVar2 <= 6f)
	{
		if (&Global_1903006->f_303.f_2[iParam0 /*5*/] == -1 || &Global_1903006->f_303.f_2[iParam0 /*5*/] == 0)
		{
			Global_1903006->f_303.f_2[iParam0 /*5*/] = 1;
		}
	}
	if (fVar2 > 6f)
	{
		if ((&Global_1903006->f_303.f_2[iParam0 /*5*/] == -1 || &Global_1903006->f_303.f_2[iParam0 /*5*/] == 0) || &Global_1903006->f_303.f_2[iParam0 /*5*/] == 1)
		{
			Global_1903006->f_303.f_2[iParam0 /*5*/] = 2;
		}
	}
	if (fVar2 > 10f)
	{
		if (((&Global_1903006->f_303.f_2[iParam0 /*5*/] == -1 || &Global_1903006->f_303.f_2[iParam0 /*5*/] == 0) || &Global_1903006->f_303.f_2[iParam0 /*5*/] == 1) || &Global_1903006->f_303.f_2[iParam0 /*5*/] == 2)
		{
			Global_1903006->f_303.f_2[iParam0 /*5*/] = 3;
		}
	}
	if (&Global_1903006->f_303.f_2[iParam0 /*5*/] == -1)
	{
		return;
	}
	iVar7 = MISC::GET_GAME_TIMER();
	if ((Global_1903006->f_303.f_2[iParam0 /*5*/])->f_1 == -1)
	{
		(Global_1903006->f_303.f_2[iParam0 /*5*/])->f_1 = iVar7;
		return;
	}
	if ((Global_1903006->f_303.f_2[iParam0 /*5*/])->f_1 + 5000 < iVar7)
	{
		if (&Global_1903006->f_303.f_2[iParam0 /*5*/] == 0 || &Global_1903006->f_303.f_2[iParam0 /*5*/] == 1)
		{
			aggregate_func_2723(iParam0, 1);
		}
		else if (&Global_1903006->f_303.f_2[iParam0 /*5*/] == 2)
		{
			aggregate_func_2723(iParam0, 2);
		}
		else if (&Global_1903006->f_303.f_2[iParam0 /*5*/] == 3)
		{
			aggregate_func_2723(iParam0, 3);
		}
		(Global_1903006->f_303.f_2[iParam0 /*5*/])->f_1 = -1;
		Global_1903006->f_303.f_2[iParam0 /*5*/] = -1;
	}
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;

	iVar0 = aggregate_func_5231(iParam0);
	if (aggregate_func_5234(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = aggregate_func_4938(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar3 = true;
	}
	if (((!TASK::_0xEFC4303DDC6E60D3(Global_35) || TASK::_0xED1F514AF4732258(Global_35) != iVar1) || fVar2 < 0.5f) || !bVar3)
	{
		(Global_1903006->f_303.f_2[iParam0 /*5*/])->f_3 = -1;
		return;
	}
	if ((Global_1903006->f_303.f_2[iParam0 /*5*/])->f_4 >= 20f)
	{
		aggregate_func_1916(4, 20f);
		fVar4 = ((Global_1903006->f_303.f_2[iParam0 /*5*/])->f_4 - 20f);
		(Global_1903006->f_303.f_2[iParam0 /*5*/])->f_4 = fVar4;
	}
	iVar5 = MISC::GET_GAME_TIMER();
	if ((Global_1903006->f_303.f_2[iParam0 /*5*/])->f_3 == -1)
	{
		(Global_1903006->f_303.f_2[iParam0 /*5*/])->f_3 = iVar5;
		return;
	}
	if ((Global_1903006->f_303.f_2[iParam0 /*5*/])->f_3 + 5000 < iVar5)
	{
		aggregate_func_2723(iParam0, 4);
		(Global_1903006->f_303.f_2[iParam0 /*5*/])->f_3 = -1;
	}
}

void func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = aggregate_func_5231(iParam0);
	if (aggregate_func_5234(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = aggregate_func_4938(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return;
	}
	bVar2 = PED::_0xB676EFDA03DADA52(iVar1, 0) == Global_35;
	if (!bVar2)
	{
		return;
	}
	iVar3 = PED::_0xB65A4DAB460A19BD(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (DECORATOR::DECOR_EXIST_ON(iVar3, "bHasBeenLassoedFromHorse"))
	{
		return;
	}
	bVar4 = aggregate_func_447(iVar3, Global_35);
	if (bVar4)
	{
	}
	DECORATOR::DECOR_SET_BOOL(iVar3, "bHasBeenLassoedFromHorse", true);
}

void func_126(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_277.f_1[iParam0 /*431*/])->f_422 = { vParam1 };
	(Global_40.f_277.f_1[iParam0 /*431*/])->f_425 = uParam4;
}

bool func_132()
{
	if (aggregate_func_9275(8192))
	{
		func_304(8192);
		return true;
	}
	return false;
}

int func_134(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return 0;
	}
	TASK::TASK_GO_TO_WHISTLE(iParam0, iParam1, 0);
	FLOCK::_0xFF1E339CE40EAAAF(iParam0, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, false);
	POPULATION::_0xF74E134F40192884(iParam0, 1);
	return 1;
}

void func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!aggregate_func_1794(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_3078(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	aggregate_func_8148(iVar0);
	aggregate_func_2571(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = aggregate_func_7187(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!aggregate_func_7880(iVar0))
		{
			return;
		}
	}
	aggregate_func_5308(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && aggregate_func_4251() == -1)
	{
		if (!ENTITY::_0x88AD6CC10D8D35B2(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_138(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903006)[iParam0 /*43*/])->f_36 = 0;
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = aggregate_func_4938(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return;
	}
	aggregate_func_1818(iParam0);
	aggregate_func_1818(5);
	aggregate_func_449(iVar0, 5, iParam1);
	aggregate_func_5184(5, 1);
	if (PLAYER::_0x46FA0AE18F4C7FA9(iVar1) == iVar0)
	{
		PLAYER::_0x8FBF9EDB378CCB8C(iVar1, 0);
	}
	if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()))
	{
		PED::_0x6569F31A01B4C097(iVar0, 0, true);
		PED::_0x6569F31A01B4C097(iVar0, 1, true);
		DECORATOR::_DECOR_SET_STRING(iVar0, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		aggregate_func_4748(5);
		aggregate_func_5267(0);
		aggregate_func_8701(ENTITY::GET_ENTITY_COORDS(iVar0, true, false));
	}
	if (iParam1 == 2)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	func_280(iParam0);
	aggregate_func_5565(iParam0);
	aggregate_func_1175(iParam0);
	aggregate_func_8115();
}

int func_152(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_11;
}

void func_158(int iParam0)
{
	Global_40.f_277.f_3042.f_4 = iParam0;
}

void func_161(int iParam0)
{
	int iVar0;
	bool bVar1;
	struct<29> Var2;

	if (aggregate_func_5305(iParam0) == 0)
	{
		if (aggregate_func_5324(iParam0))
		{
			aggregate_func_9282(iParam0);
		}
		return;
	}
	if (!aggregate_func_5324(iParam0))
	{
		iVar0 = aggregate_func_5231(iParam0);
		bVar1 = aggregate_func_5378(iVar0);
		aggregate_func_9283(iParam0, bVar1);
	}
	Var2.f_9 = -1591664384;
	Var2.f_14 = aggregate_func_5231(iParam0);
	Var2.f_15 = aggregate_func_9629(iParam0);
	Var2.f_16 = { aggregate_func_5561(iParam0) };
	Var2.f_24 = Var2.f_24;
	Var2.f_26 = BUILTIN::FLOOR(func_401(iParam0));
	Var2.f_25 = BUILTIN::FLOOR(aggregate_func_6955(iParam0));
	Var2.f_27 = aggregate_func_9262(iParam0, 0);
	Var2.f_28 = aggregate_func_9262(iParam0, 1);
	func_403(iParam0, &Var2);
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (PED::_0x09B83E68DE004CD4(iParam1) != iParam0)
	{
		return 0;
	}
	iVar0 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

Vector3 func_169()
{
	return Global_40.f_277.f_3019.f_19;
}

int func_171(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (aggregate_func_4203())
	{
		func_404();
		aggregate_func_1185();
	}
	iVar0 = func_69();
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return 0;
	}
	iVar1 = OBJECT::CREATE_OBJECT(iVar0, vParam0, true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	aggregate_func_5129(iVar1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	ENTITY::SET_ENTITY_HEADING(iVar1, fParam3);
	if (bParam4)
	{
		ENTITY::_0x9587913B9E772D29(iVar1, 0);
	}
	TASK::_0xF0B4F759F35CC7F5(iVar1, 822715387, 0, 0, 0);
	return 1;
}

void func_172()
{
	Global_1903006->f_423 = 0;
	Global_1903006->f_423.f_1 = 0;
	Global_1903006->f_423.f_2 = 0;
}

bool func_173(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (aggregate_func_1162(Global_1903006[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

bool func_174(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_430;
}

bool func_175()
{
	return Global_1903006->f_423.f_1;
}

int func_176()
{
	return Global_1903006->f_423;
}

void func_178(int iParam0)
{
	Global_1903006->f_423.f_1 = iParam0;
}

bool func_179(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (iParam1 != -1)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(((*Global_1887327)[iParam1 /*36*/])->f_5))
		{
			return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, ((*Global_1887327)[iParam1 /*36*/])->f_5, true, 0);
		}
		else
		{
			return false;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_1893575->f_161)
	{
		iVar0 = &Global_1893575->f_10[iVar1];
		if (!VOLUME::_0x92A78D0BEDB332A3(((*Global_1887327)[iVar0 /*36*/])->f_5))
		{
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, ((*Global_1887327)[iVar0 /*36*/])->f_5, true, 0))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_180()
{
	return Global_1903006->f_423.f_2;
}

void func_181(int iParam0)
{
	Global_1903006->f_423.f_2 = iParam0;
}

bool func_183()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 440, true))
	{
		return false;
	}
	return true;
}

bool func_185()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 439, true))
	{
		return false;
	}
	return true;
}

bool func_187()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 438, true))
	{
		return false;
	}
	return true;
}

bool func_189(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (((*Global_1903006)[iParam0 /*43*/])->f_41 == 0)
	{
		return false;
	}
	return true;
}

float func_195(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((*Global_1903006)[iParam0 /*43*/])->f_33;
}

void func_196(int iParam0, vector3 vParam1)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903006)[iParam0 /*43*/])->f_30 = { vParam1 };
}

void func_198(struct<7> Param0)
{
	int iVar0;

	if (!Param0.f_5)
	{
		return;
	}
	if (aggregate_func_3014(34))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(Param0.f_6);
	if (aggregate_func_8554(iVar0) || aggregate_func_8555(iVar0))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	if (aggregate_func_7081())
	{
		aggregate_func_4322(34, 0);
	}
}

void func_199(struct<7> Param0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;

	if (!Param0.f_5)
	{
		return;
	}
	if (func_407() >= 3)
	{
		return;
	}
	if (aggregate_func_3083(36) || aggregate_func_3080(36))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_408();
	if (iVar1 > 0)
	{
		if (iVar1 + 5000 < iVar0)
		{
			aggregate_func_7682();
		}
		else
		{
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Param0.f_6))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Param0.f_6))
	{
		return;
	}
	bVar2 = false;
	if (TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		bVar2 = true;
	}
	if (TASK::IS_PED_RUNNING(Param0.f_6))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	fVar3 = PED::_0x22F2A386D43048A9(Param0.f_6);
	if (fVar3 > 0.15f)
	{
		return;
	}
	if (aggregate_func_3083(34))
	{
		aggregate_func_4111(34);
	}
	if (aggregate_func_3080(34))
	{
		aggregate_func_7858(34);
	}
	if (aggregate_func_3083(35))
	{
		aggregate_func_4111(35);
	}
	if (aggregate_func_3080(35))
	{
		aggregate_func_7858(35);
	}
	if (aggregate_func_7081())
	{
		aggregate_func_4322(36, 1);
		func_410();
		aggregate_func_7059(MISC::GET_GAME_TIMER());
	}
}

void func_200(struct<7> Param0, struct<11> Param7, var uParam18)
{
	bool bVar0;

	if (!Param7.f_2)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (aggregate_func_3014(45))
	{
		return;
	}
	bVar0 = false;
	if ((aggregate_func_4276(32) && aggregate_func_4276(33)) && aggregate_func_4276(34))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	if (!aggregate_func_1794(Param0.f_6))
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (aggregate_func_5234(7) == 0)
	{
		return;
	}
	if (aggregate_func_7081())
	{
		aggregate_func_4322(45, 0);
	}
}

void func_201()
{
	int iVar0;

	if (!func_412())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (func_413() < iVar0)
	{
		aggregate_func_4322(59, 0);
		aggregate_func_7059(0);
		aggregate_func_7682();
	}
}

void func_202(struct<4> Param0, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	struct<5> Var0;
	int iVar12;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar12 = -1;
	if (vParam7.z)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&Var0, &vParam7, 12);
	}
	else if (vParam19.z)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&Var0, &vParam19, 12);
	}
	if (!aggregate_func_2994(iVar12))
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!Var0.f_4)
	{
		if (aggregate_func_3080(56))
		{
			aggregate_func_7858(56);
		}
		if (aggregate_func_3083(56))
		{
			aggregate_func_4111(56);
		}
		if (aggregate_func_3080(57))
		{
			aggregate_func_7858(57);
		}
		if (aggregate_func_3083(57))
		{
			aggregate_func_4111(57);
		}
		return;
	}
	if (TASK::_0x3F8387DB1B9F31B7(Var0, 0) && !func_416())
	{
		if (!aggregate_func_3014(57) && !aggregate_func_3014(58))
		{
			if (aggregate_func_3080(56))
			{
				aggregate_func_7858(56);
			}
			if (aggregate_func_3083(56))
			{
				aggregate_func_4111(56);
			}
			if (aggregate_func_7081())
			{
				if (func_417(-1795542128 /* GXTEntry: "Special Horse Reviver" */))
				{
					aggregate_func_4322(57, 0);
				}
				else
				{
					aggregate_func_4322(58, 0);
				}
			}
		}
	}
}

void func_203(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar0 = func_418();
	bVar1 = false;
	iVar2 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		bVar1 = true;
		iVar2 = PED::_0x454AD4DA6C41B5BD(iVar0);
	}
	iVar3 = func_419();
	switch (iVar3)
	{
		case 0:
			func_420(1);
		case 1:
			if (bVar1)
			{
				aggregate_func_5129(iVar0);
				func_420(2);
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 1:
					func_420(3);
					break;
				case 2:
				case 3:
					func_420(5);
					break;
				case 7:
				case 8:
				case 9:
					func_420(7);
					break;
				case 4:
				case 5:
					func_420(9);
					break;
				case 6:
					func_420(11);
					break;
				default:
					if (!bVar1)
					{
						func_420(11);
					}
					break;
			}
			break;
		case 3:
			func_422();
			if (func_423(iVar0))
			{
				if (aggregate_func_7081())
				{
					aggregate_func_4322(48, 1);
				}
			}
			else if (aggregate_func_7081())
			{
				aggregate_func_4322(47, 1);
			}
			func_420(4);
			break;
		case 4:
			switch (iVar2)
			{
				case 1:
					if (aggregate_func_3080(47))
					{
						if (func_423(iVar0))
						{
							aggregate_func_7858(47);
							func_420(3);
						}
					}
					if (!bVar1)
					{
						func_420(11);
					}
					break;
				case 2:
				case 3:
					func_420(5);
					break;
				case 7:
				case 8:
				case 9:
					func_420(7);
					break;
				case 4:
				case 5:
					func_420(9);
					break;
				case 6:
					func_420(11);
					break;
				default:
					if (!bVar1)
					{
						func_420(11);
					}
					break;
			}
			break;
		case 5:
			func_422();
			if (aggregate_func_7081())
			{
				aggregate_func_4322(49, 1);
			}
			func_420(6);
			break;
		case 6:
			switch (iVar2)
			{
				case 2:
				case 3:
					break;
				case 7:
				case 8:
				case 9:
					func_420(7);
					break;
				case 4:
				case 5:
					func_420(9);
					break;
				case 6:
					func_420(11);
					break;
				default:
					if (!bVar1)
					{
						func_420(11);
					}
					break;
			}
			break;
		case 7:
			func_422();
			if (aggregate_func_7081())
			{
				aggregate_func_4322(50, 1);
			}
			func_424(MISC::GET_GAME_TIMER());
			func_420(8);
			break;
		case 8:
			if (func_425() + 5000 < MISC::GET_GAME_TIMER())
			{
				func_420(6);
			}
			break;
		case 9:
			func_422();
			if (aggregate_func_7081())
			{
				aggregate_func_4322(51, 1);
			}
			func_420(10);
			break;
		case 10:
			switch (iVar2)
			{
				case 2:
				case 3:
					func_420(5);
					break;
				case 7:
				case 8:
				case 9:
					func_420(7);
					break;
				case 4:
				case 5:
					break;
				case 6:
					func_420(11);
					break;
				default:
					if (!bVar1)
					{
						func_420(11);
					}
					break;
			}
			break;
		case 11:
			func_426();
			func_422();
			func_420(0);
			break;
	}
}

void func_204(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;

	if (!func_427())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&Var0, &Param7, 12);
	}
	else if (Param19.f_10)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&Var0, &Param19, 12);
	}
	else
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (Var0.f_3)
	{
		return;
	}
	if (Var0.f_4)
	{
		return;
	}
	iVar13 = aggregate_func_9262(iVar12, 0);
	bVar14 = false;
	iVar15 = -1;
	if (!bVar14)
	{
		if (iVar13 > 50)
		{
			if (func_428() < 3)
			{
				iVar15 = 26;
				bVar14 = true;
			}
		}
	}
	bVar16 = false;
	if (func_429() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar16 = true;
	}
	if (bVar16)
	{
		if (!bVar14)
		{
			aggregate_func_7059(0);
			aggregate_func_7682();
			return;
		}
	}
	if (!bVar16)
	{
		return;
	}
	if (!aggregate_func_7081())
	{
		return;
	}
	aggregate_func_4322(iVar15, 1);
	aggregate_func_7059(MISC::GET_GAME_TIMER());
	switch (iVar15)
	{
		case 26:
			func_433();
			break;
		default:
			break;
	}
	aggregate_func_7059(0);
	aggregate_func_7682();
}

void func_205(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;

	if (!func_434())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&Var0, &Param7, 12);
	}
	else if (Param19.f_10)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&Var0, &Param19, 12);
	}
	else
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (Var0.f_3)
	{
		return;
	}
	if (Var0.f_4)
	{
		return;
	}
	bVar13 = aggregate_func_8557(iVar12, 0);
	bVar14 = aggregate_func_8557(iVar12, 1);
	bVar15 = false;
	iVar16 = -1;
	if (!bVar15)
	{
		if (aggregate_func_7585(32) < 3)
		{
			if (bVar13 == 0 && bVar14 == 0)
			{
				iVar16 = 32;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (bVar13 == 0)
		{
			if (aggregate_func_7585(30) < 3)
			{
				iVar16 = 30;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (bVar14 == 0)
		{
			if (aggregate_func_7585(31) < 3)
			{
				if (!PED::IS_PED_SWIMMING(Var0))
				{
					iVar16 = 31;
					bVar15 = true;
				}
			}
		}
	}
	if (!bVar15)
	{
		if (bVar13 < 50)
		{
			if (aggregate_func_7585(28) < 1)
			{
				iVar16 = 28;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (bVar14 < 50)
		{
			if (aggregate_func_7585(29) < 1)
			{
				iVar16 = 29;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (bVar14 == 0)
		{
			if (aggregate_func_7585(33) < 3)
			{
				if (PED::IS_PED_SWIMMING(Var0))
				{
					iVar16 = 33;
					bVar15 = true;
				}
			}
		}
	}
	bVar17 = false;
	if (func_437() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar17 = true;
	}
	if (bVar17)
	{
		if (!bVar15)
		{
			aggregate_func_7059(0);
			aggregate_func_7682();
			return;
		}
	}
	if (!bVar17)
	{
		return;
	}
	if (!aggregate_func_7081())
	{
		return;
	}
	aggregate_func_4322(iVar16, 1);
	aggregate_func_7059(MISC::GET_GAME_TIMER());
	aggregate_func_7059(0);
	aggregate_func_7682();
}

void func_206()
{
	int iVar0[6];
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;

	if (func_440() == 0)
	{
		return;
	}
	iVar7 = 0;
	iVar0[iVar7] = 32;
	iVar7++;
	iVar0[iVar7] = 30;
	iVar7++;
	iVar0[iVar7] = 31;
	iVar7++;
	iVar0[iVar7] = 28;
	iVar7++;
	iVar0[iVar7] = 29;
	iVar7++;
	iVar0[iVar7] = 43;
	iVar7++;
	bVar8 = false;
	iVar9 = 0;
	while (iVar9 < iVar7)
	{
		if (bVar8)
		{
		}
		else if (aggregate_func_3080(&(iVar0[iVar9])))
		{
			bVar8 = true;
		}
		iVar9++;
	}
	if (bVar8)
	{
		if (!func_441())
		{
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			if (aggregate_func_3080(32))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (aggregate_func_3080(30))
			{
				bVar12 = true;
			}
			if (aggregate_func_3080(31))
			{
				bVar13 = true;
			}
			if (aggregate_func_3080(28))
			{
				bVar12 = true;
			}
			if (aggregate_func_3080(29))
			{
				bVar13 = true;
			}
			if (aggregate_func_3080(43))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (bVar10)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 3);
			}
			if (bVar11)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 3);
			}
			if (bVar12)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 3);
			}
			if (bVar13)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 3);
			}
			aggregate_func_7059(1);
		}
	}
	else if (func_441())
	{
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
		aggregate_func_7059(0);
		aggregate_func_7682();
	}
}

void func_207(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (!func_444())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (aggregate_func_3014(55))
	{
		return;
	}
	if (!aggregate_func_7081())
	{
		return;
	}
	func_158(0);
	if (aggregate_func_5305(0) == 1)
	{
		return;
	}
	aggregate_func_4322(55, 0);
	iVar0 = func_445(9, 1, 1, 0);
	if (iVar0 != 86)
	{
		iVar0 = func_445(9, 1, 1, 1);
	}
	if (!aggregate_func_4375(iVar0))
	{
		return;
	}
	vVar1 = { aggregate_func_6004(iVar0) };
	if (aggregate_func_4268(vVar1))
	{
		return;
	}
	iVar4 = MAP::_0x554D9D53F696D002(168093330, vVar1);
	MAP::SET_BLIP_SPRITE(iVar4, 1938782895 /* GXTEntry: "Stable" */, true);
	MAP::_0x662D364ABF16DE2F(iVar4, 580546400);
	MAP::_0x662D364ABF16DE2F(iVar4, 847579139);
	func_448(&iVar4);
}

void func_208()
{
	int iVar0;

	iVar0 = func_449();
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return;
	}
	if (aggregate_func_3083(55))
	{
		return;
	}
	if (aggregate_func_3080(55))
	{
		return;
	}
	MAP::REMOVE_BLIP(&iVar0);
}

void func_209(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (aggregate_func_4492() && !aggregate_func_4276(41))
	{
		return;
	}
	if (!func_450())
	{
		return;
	}
	if (aggregate_func_3014(65))
	{
		return;
	}
	if (aggregate_func_437(Global_35))
	{
		return;
	}
	if (func_452())
	{
		return;
	}
	if (!aggregate_func_7081())
	{
		return;
	}
	aggregate_func_4322(65, 0);
}

void func_210(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_1)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (aggregate_func_4492() && !aggregate_func_4276(41))
	{
		return;
	}
	if (aggregate_func_4492() && aggregate_func_4371() == 8)
	{
		return;
	}
	if (!aggregate_func_4203())
	{
		return;
	}
	if (aggregate_func_1757(7))
	{
		aggregate_func_7682();
		return;
	}
	if (aggregate_func_5375() == 3)
	{
		return;
	}
	if (aggregate_func_437(Global_35))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_455();
	if (iVar1 == 0)
	{
		aggregate_func_7059(MISC::GET_GAME_TIMER());
		return;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return;
	}
	if (aggregate_func_918(Global_35, aggregate_func_6910(), 1, 1) < 100f)
	{
		return;
	}
	if (aggregate_func_3014(64))
	{
		if ((iVar1 + 600000) > iVar0)
		{
			return;
		}
	}
	aggregate_func_4322(64, 1);
	aggregate_func_7059(MISC::GET_GAME_TIMER());
}

void func_211(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Param0.f_5)
	{
		return;
	}
	iVar0 = aggregate_func_7585(66);
	if (iVar0 >= 3)
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(Param0.f_6);
	if (aggregate_func_8554(iVar1) || aggregate_func_8555(iVar1))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	if (!PED::_0xA911EE21EDF69DAF(iParam7))
	{
		return;
	}
	if (!PED::_0x608BC6A6AACD5036(&uVar2, iParam7, 4, 0))
	{
		return;
	}
	if (func_457() == iParam7)
	{
		return;
	}
	if (aggregate_func_7081())
	{
		aggregate_func_5129(iParam7);
		aggregate_func_4322(66, 0);
	}
}

void func_212(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_10 && !Param19.f_10)
	{
		if (func_459())
		{
			aggregate_func_7059(0);
		}
		return;
	}
	if (aggregate_func_5325() < 2)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar0 = 0;
	}
	else if (Param19.f_10)
	{
		iVar0 = 1;
	}
	if (aggregate_func_5234(iVar0) >= 2)
	{
		return;
	}
	iVar1 = aggregate_func_7585(46);
	if (iVar1 >= 1)
	{
		return;
	}
	if (func_459())
	{
		return;
	}
	aggregate_func_7059(1);
	func_462();
	if (func_463() <= 1)
	{
		return;
	}
	if (!aggregate_func_7081())
	{
		return;
	}
	aggregate_func_4322(46, 1);
}

void func_213(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_1)
	{
		return;
	}
	if (!aggregate_func_437(Global_35))
	{
		return;
	}
	if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, true, false))
	{
		return;
	}
	if (!aggregate_func_1156(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_465(iVar1))
	{
		return;
	}
	if (aggregate_func_7081())
	{
		aggregate_func_4322(67, 1);
	}
}

int func_215()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == iVar0)
		{
			iVar1 = 1;
		}
	}
	iVar2 = 0;
	bVar3 = WEAPON::_0xAFFD0CCF31F469B8(iVar0);
	if (aggregate_func_2823(bVar3, 0))
	{
		iVar2 = 1;
	}
	bVar4 = false;
	if (aggregate_func_7123() || aggregate_func_4717())
	{
		bVar4 = true;
	}
	if (iVar1 || iVar2)
	{
		if (bVar4)
		{
			return 1;
		}
	}
	return 0;
}

bool func_216(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return true;
}

int func_218(int iParam0)
{
	if (aggregate_func_4636())
	{
		if (Global_1915170->f_19742 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_224(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam3)
	{
		case 0:
			break;
		case 1:
		case 2:
			iVar0 = 2;
			break;
	}
	if (aggregate_func_2067(INVENTORY::_0x13D234A2A3F66E63(iParam0), bParam2) < iVar0)
	{
		return true;
	}
	return false;
}

bool func_231(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return true;
}

bool func_232(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_417;
}

bool func_233(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "StableOwnedHorse"))
	{
		return true;
	}
	return false;
}

int func_234(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_417.f_1;
}

void func_235(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	DECORATOR::DECOR_SET_INT(iParam0, "StableOwnedHorse", iParam1);
}

int func_236(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return -15;
	}
	if (iParam0 >= 7)
	{
		return -15;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_417.f_2;
}

void func_238(int iParam0)
{
	char* sVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	sVar0 = "StableOwnedHorse";
	if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		DECORATOR::DECOR_REMOVE(iParam0, sVar0);
	}
}

void func_239(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	aggregate_func_5316(&((Global_40.f_277.f_1[iParam0 /*431*/])->f_417));
}

int func_240(int iParam0)
{
	int iVar0;

	if (!func_233(iParam0))
	{
		return -1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "StableOwnedHorse");
	return iVar0;
}

void func_242(int iParam0, int iParam1)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_277.f_1[iParam0 /*431*/])->f_417.f_1 = iParam1;
}

void func_244(int iParam0, int iParam1)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(Global_40.f_277.f_1[iParam0 /*431*/])->f_417.f_2 = iParam1;
}

bool func_245(int iParam0)
{
	switch (iParam0)
	{
		case -2063289686:
		case 549900435:
			return true;
	}
	return false;
}

char* func_247(int iParam0)
{
	switch (iParam0)
	{
		case 549900435:
			return "HORSE_NAME_BUELL_WARVETS";
		case -2063289686:
			return "HORSE_NAME_JOHN_ENDLESSSUMMER";
	}
	return "";
}

void func_257(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!aggregate_func_2994(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_4938(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return;
	}
	if (!aggregate_func_4276(39))
	{
		if (aggregate_func_8117(iParam0, 128))
		{
			return;
		}
		if (aggregate_func_5049(iParam1, &uVar1))
		{
			bVar2 = func_491(iParam1);
			if (aggregate_func_1365(iVar0, iParam1) != bVar2)
			{
				aggregate_func_1302(iVar0, iParam1, bVar2);
			}
		}
		return;
	}
	if (aggregate_func_2575(iVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_494(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_495(iParam0, iParam1, iVar3);
		return;
	}
	bVar5 = aggregate_func_8557(iParam0, iParam1);
	func_496(iVar0, iParam0, iParam1);
	if (func_497(iParam0, iParam1) > 0f)
	{
		aggregate_func_7838(iParam0, iParam1);
	}
	else
	{
		func_499(iVar0, iParam0, iParam1);
		bVar6 = aggregate_func_8557(iParam0, iParam1);
		func_500(iParam0, iParam1, bVar5, bVar6);
	}
	func_495(iParam0, iParam1, iVar3);
}

void func_258(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!aggregate_func_2994(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_4938(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return;
	}
	if (!aggregate_func_4276(40))
	{
		if (aggregate_func_7834(iParam1, &iVar1))
		{
			bVar2 = func_502(iParam1);
			ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iVar0, iVar1, bVar2);
		}
		return;
	}
	if (aggregate_func_2575(iVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_503(iParam0, iParam1);
	if (fVar4 >= 30f)
	{
		func_504(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = aggregate_func_9262(iParam0, iParam1);
	func_505(iVar0, iParam0, iParam1);
	if (func_506(iParam0, iParam1) > 0f)
	{
		aggregate_func_7838(iParam0, iParam1);
	}
	else
	{
		func_508(iVar0, iParam0, iParam1);
		iVar6 = aggregate_func_9262(iParam0, iParam1);
		func_509(iParam0, iParam1, iVar5, iVar6);
	}
	func_504(iParam0, iParam1, iVar3);
}

void func_259(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	bool bVar17;
	struct<2> Var18;
	struct<6> Var40;
	int iVar47;
	struct<2> Var48;
	struct<6> Var70;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	float fVar82;
	float fVar83;
	float fVar84;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!aggregate_func_2994(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_4938(iParam0);
	fVar1 = 1f;
	fVar2 = 1f;
	fVar3 = 0f;
	fVar4 = 1f;
	fVar5 = 1f;
	fVar6 = 0f;
	iVar7 = 0;
	iVar8 = 0;
	if (iParam0 == aggregate_func_5136())
	{
		Var9 = { aggregate_func_9632() };
		bVar17 = Var9.f_1;
		if (aggregate_func_2823(bVar17, 0))
		{
			Var18.f_1 = 20;
			ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar17, &Var18);
			iVar47 = 0;
			while (iVar47 < Var18)
			{
				ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var18.f_1[iVar47]), &Var40);
				switch (Var40.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var40.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + BUILTIN::FLOOR((IntToFloat(Var40.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var40.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var40.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var40.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var40.f_5 * 0.01f));
						break;
				}
				iVar47++;
			}
		}
		bVar17 = Var9.f_3;
		if (aggregate_func_2823(bVar17, 0))
		{
			Var48.f_1 = 20;
			ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar17, &Var48);
			iVar77 = 0;
			while (iVar77 < Var48)
			{
				ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var48.f_1[iVar77]), &Var70);
				switch (Var70.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var70.f_2) * 0.01f)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + BUILTIN::FLOOR((IntToFloat(Var70.f_2) * 0.01f)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var70.f_5 * 0.01f));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var70.f_5 * 0.01f));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var70.f_5 * 0.01f));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var70.f_5 * 0.01f));
						break;
				}
				iVar77++;
			}
		}
	}
	if (func_510())
	{
		iVar7++;
	}
	func_511(0, fVar3);
	func_511(1, fVar6);
	iVar78 = aggregate_func_5255();
	iVar79 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, iVar78);
	if (iVar79 != iVar7)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, iVar78, iVar7);
	}
	iVar80 = aggregate_func_5211();
	iVar81 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, iVar80);
	if (iVar81 != iVar8)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, iVar80, iVar8);
	}
	fVar82 = PED::_0x95B8E397B8F4360F(iVar0);
	if (fVar82 != fVar1)
	{
		PED::_0xDE1B1907A83A1550(iVar0, fVar1);
	}
	fVar2 = fVar2;
	fVar83 = PED::_0xE7687EB2F634ABF0(iVar0);
	if (fVar83 != fVar4)
	{
		PED::_0x345C9F993A8AB4A4(iVar0, fVar4);
	}
	fVar84 = PED::_0x825F6DD559A0895B(iVar0);
	if (fVar84 != fVar5)
	{
		PED::_0xEF5A3D2285D8924B(iVar0, fVar5);
	}
}

bool func_269(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if ((aggregate_func_8117(iParam0, 2) || aggregate_func_8117(iParam0, 4)) || aggregate_func_8117(iParam0, 8))
	{
		return true;
	}
	return false;
}

float func_271(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((*Global_1903006)[iParam0 /*43*/])->f_22;
}

bool func_273()
{
	bool bVar0;

	bVar0 = PED::_0x5E420FF293EE5472();
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_275(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (!PED::_0x772A1969F649E902(iParam0))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam0));
	return iVar0;
}

void func_277(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	int iVar8;

	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_282(iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "HorseGender", iVar0);
	bVar1 = aggregate_func_5234(iParam1);
	func_526(iParam0, bVar1);
	PED::_0xA69899995997A63B(iParam0, bVar1);
	iVar2 = BUILTIN::FLOOR(aggregate_func_6955(iParam1));
	aggregate_func_1173(iParam0, iVar2);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (aggregate_func_5049(iVar4, &uVar3))
		{
			bVar5 = aggregate_func_8557(iParam1, iVar4);
			aggregate_func_1302(iParam0, iVar4, bVar5);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (aggregate_func_7834(iVar7, &uVar6))
		{
			bVar5 = aggregate_func_9262(iParam1, iVar7);
			func_528(iParam0, iVar7, bVar5);
		}
		iVar7++;
	}
	iVar8 = PLAYER::PLAYER_ID();
	PED::_0xA691C10054275290(iParam0, iVar8, func_529(iParam1));
	if (iParam1 == 0)
	{
		PED::_0x6734F0A6A52C371C(iVar8, func_530(iParam1));
		PED::_0x024EC9B649111915(iParam0, 1);
	}
}

void func_278(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_216(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	if (!func_231(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_531(iVar0, (Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar1 /*95*/], iVar1);
		iVar1++;
	}
}

void func_279(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;

	if (!func_216(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::GET_PLAYER_INDEX());
	if (!func_231(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		bVar2 = &(Global_40.f_277.f_1[iParam0 /*431*/])->f_353[iVar1 /*5*/];
		if (aggregate_func_2823(bVar2, 0))
		{
			bVar3 = bVar2;
			uVar4 = ((Global_40.f_277.f_1[iParam0 /*431*/])->f_353[iVar1 /*5*/])->f_1;
			uVar5 = ((Global_40.f_277.f_1[iParam0 /*431*/])->f_353[iVar1 /*5*/])->f_2;
			PED::_0xC412AA1C73111FE0(iVar0, bVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

void func_280(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	aggregate_func_5579(iParam0);
	func_533();
}

float func_281(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_415.f_1;
}

int func_282(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_10;
}

int func_288(int iParam0)
{
	int iVar0;

	iVar0 = 1745919061;
	if (iParam0 <= 0)
	{
		iVar0 = -2045421226;
	}
	else if (iParam0 < 5)
	{
		iVar0 = -1745814259;
	}
	else if (iParam0 < 10)
	{
		iVar0 = -325933489;
	}
	else if (iParam0 < 15)
	{
		iVar0 = -1065791927;
	}
	else if (iParam0 < 20)
	{
		iVar0 = -844699484;
	}
	else if (iParam0 < 25)
	{
		iVar0 = -1273449080;
	}
	else if (iParam0 < 30)
	{
		iVar0 = 927185840;
	}
	else if (iParam0 < 35)
	{
		iVar0 = 149872391;
	}
	else if (iParam0 < 40)
	{
		iVar0 = 399015098;
	}
	else if (iParam0 < 45)
	{
		iVar0 = -644349862;
	}
	else if (iParam0 < 50)
	{
		iVar0 = 1745919061;
	}
	else if (iParam0 < 55)
	{
		iVar0 = 1004225511;
	}
	else if (iParam0 < 60)
	{
		iVar0 = 1278600348;
	}
	else if (iParam0 < 65)
	{
		iVar0 = 502499352;
	}
	else if (iParam0 < 70)
	{
		iVar0 = -2093198664;
	}
	else if (iParam0 < 75)
	{
		iVar0 = -1837436619;
	}
	else if (iParam0 < 80)
	{
		iVar0 = 1736416063;
	}
	else if (iParam0 < 85)
	{
		iVar0 = 2040610690;
	}
	else if (iParam0 < 90)
	{
		iVar0 = -1173634986;
	}
	else if (iParam0 < 95)
	{
		iVar0 = -867801909;
	}
	else if (iParam0 >= 95)
	{
		iVar0 = 1960266524;
	}
	return iVar0;
}

bool func_290(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_428;
}

void func_293(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((*Global_1903006)[iParam0 /*43*/])->f_19 = { 0f, 0f, 0f };
	((*Global_1903006)[iParam0 /*43*/])->f_22 = 0f;
}

int func_300()
{
	return Global_1903006->f_364;
}

void func_303(int iParam0, int iParam1)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (&Global_1903006->f_364.f_1[iParam0] != iParam1)
	{
	}
	Global_1903006->f_364.f_1[iParam0] = iParam1;
}

void func_304(int iParam0)
{
	Global_1903006->f_302 = (Global_1903006->f_302 - (Global_1903006->f_302 && iParam0));
}

void func_309()
{
	int iVar0;

	iVar0 = (Global_40.f_277.f_1[5 /*431*/])->f_11;
	switch (iVar0)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(aggregate_func_4938(6)) && aggregate_func_918(Global_35, aggregate_func_4938(6), 1, 1) <= 80f)
			{
				aggregate_func_2975("WHISTLE_NEAR_UNBONDED", 10000, 0, 0, 0, 1);
			}
			else
			{
				aggregate_func_2975("WHISTLE_HORSE_DEAD", 10000, 0, 0, 0, 1);
			}
			break;
		case 2:
			aggregate_func_2975("WHISTLE_HORSE_STOLEN", 10000, 0, 0, 0, 1);
			break;
	}
}

void func_314(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(((*Global_1903006)[iParam0 /*43*/])->f_25))
	{
		if (((*Global_1903006)[iParam0 /*43*/])->f_24 == 2)
		{
			MAP::_0xB059D7BD3D78C16F(((*Global_1903006)[iParam0 /*43*/])->f_25, -1814032670);
			MAP::_0x662D364ABF16DE2F(((*Global_1903006)[iParam0 /*43*/])->f_25, -1814032670);
		}
		else if (((*Global_1903006)[iParam0 /*43*/])->f_24 == 1)
		{
			MAP::_0xB059D7BD3D78C16F(((*Global_1903006)[iParam0 /*43*/])->f_25, -272772079);
			MAP::_0x662D364ABF16DE2F(((*Global_1903006)[iParam0 /*43*/])->f_25, -272772079);
		}
	}
}

void func_315(int iParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<12> Var15;
	struct<12> Var27;
	int iVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	struct<12> Var44;
	int iVar56;
	int iVar57;
	vector3 vVar58;
	float fVar61;
	vector3 vVar62;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	int iVar68;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_20(iParam0, &Var0);
	iVar12 = aggregate_func_5231(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar12))
	{
		func_303(iParam0, 6);
		return;
	}
	iVar13 = aggregate_func_5234(iParam0);
	iVar14 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar12, 7);
	func_20(0, &Var15);
	func_20(1, &Var27);
	if (iParam0 == 1 && !Var27.f_2)
	{
		func_303(iParam0, 6);
		return;
	}
	iVar39 = MISC::GET_GAME_TIMER();
	bVar40 = false;
	if (iParam0 == 0)
	{
		bVar40 = true;
		if (!Var15.f_11)
		{
			if (Var27.f_11 && !Var27.f_10)
			{
				bVar40 = false;
			}
		}
	}
	if (iParam0 == 1)
	{
		if (!Var15.f_2)
		{
			bVar40 = true;
		}
	}
	if (bVar40)
	{
	}
	switch (func_316(iParam0))
	{
		case 0:
			func_303(iParam0, 1);
		case 1:
			if (iParam0 == 0)
			{
				if (aggregate_func_5305(0) == 1 && !aggregate_func_2994(0))
				{
					func_303(iParam0, 2);
					return;
				}
			}
			if (!aggregate_func_2994(iParam0))
			{
				func_303(iParam0, 6);
				return;
			}
			if (aggregate_func_5234(iParam0) < 1)
			{
				func_303(iParam0, 6);
				return;
			}
			if (!Var0.f_11)
			{
				if (func_550())
				{
					func_303(iParam0, 2);
					return;
				}
				bVar41 = false;
				if (iParam0 == 0)
				{
					if (Var27.f_10)
					{
						bVar41 = true;
					}
				}
				if (iParam0 == 1)
				{
					if (Var15.f_10)
					{
						bVar41 = true;
					}
				}
				if (!bVar40 && bVar41)
				{
					bVar40 = true;
				}
				if (!aggregate_func_7081())
				{
					bVar40 = false;
				}
				if (bVar40)
				{
					iVar42 = -1;
					iVar43 = -1;
					if (aggregate_func_7585(1) < 3)
					{
						iVar42 = 1;
						if (iVar13 < iVar14)
						{
							iVar43 = 6;
						}
					}
					else
					{
						iVar42 = 2;
					}
					if (bVar41)
					{
						if (iParam0 == 0)
						{
							iVar42 = 3;
						}
						else if (iParam0 == 1)
						{
							iVar42 = 4;
						}
					}
					else
					{
						if (iParam0 == 0)
						{
							MISC::_COPY_MEMORY(&Var44, &Var27, 12);
						}
						else if (iParam0 == 1)
						{
							MISC::_COPY_MEMORY(&Var44, &Var15, 12);
						}
						if (Var44.f_1)
						{
							if (!Var44.f_11)
							{
								iVar42 = 5;
							}
						}
					}
					if (iVar43 != -1)
					{
						aggregate_func_4322(iVar43, 1);
					}
					if ((iVar42 == 1 || iVar42 == 3) || iVar42 == 4)
					{
						iVar56 = 0;
						if (iParam0 == 0)
						{
							iVar56 = -1925605092;
						}
						else if (iParam0 == 1)
						{
							iVar56 = -1230993421;
						}
						if (iVar56 != 0)
						{
							if (iParam0 == 0)
							{
								iVar57 = func_551();
							}
							else if (iParam0 == 1)
							{
								iVar57 = func_552();
							}
							if (!MAP::DOES_BLIP_EXIST(iVar57))
							{
								iVar57 = MAP::_0x3E593DF9C2962EC6(iVar56);
								MAP::_0x662D364ABF16DE2F(iVar57, 1313031610);
								if (iParam0 == 0)
								{
									func_553(&iVar57);
								}
								else if (iParam0 == 1)
								{
									func_554(&iVar57);
								}
							}
							aggregate_func_8107(iVar42, iVar57, 1);
						}
					}
					else if (iVar42 != -1)
					{
						aggregate_func_4322(iVar42, 1);
					}
				}
			}
			func_303(iParam0, 5);
			break;
		case 2:
			aggregate_func_7774(&(((*Global_1903006)[iParam0 /*43*/])->f_4));
			func_303(iParam0, 3);
		case 3:
			vVar62 = { aggregate_func_8607(iParam0) };
			if (!func_558(&(((*Global_1903006)[iParam0 /*43*/])->f_4), Global_36, vVar62, Var0, 1065353216 /* Float: 1f */))
			{
				if (((*Global_1903006)[iParam0 /*43*/])->f_4.f_1)
				{
					if (!aggregate_func_2056())
					{
						aggregate_func_2975("WHISTLE_NOSPAWN_AREA", 10000, 0, 0, 0, 1);
					}
					aggregate_func_1818(iParam0);
					aggregate_func_4975(Global_35, "HORSE_NO_SHOW", joaat("speech_params_standard"), 0, 1, 0, 0, 1);
					func_303(iParam0, 6);
				}
				return;
			}
			vVar58 = { aggregate_func_7632(&(((*Global_1903006)[iParam0 /*43*/])->f_4)) };
			fVar61 = aggregate_func_3018(vVar58, Global_36, 1);
			if (!aggregate_func_2994(iParam0))
			{
				aggregate_func_9630(iParam0, vVar58, fVar61);
				aggregate_func_8702(iParam0);
			}
			func_303(iParam0, 4);
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(Var0) || PED::IS_PED_INJURED(Var0))
			{
				return;
			}
			vVar58 = { aggregate_func_7632(&(((*Global_1903006)[iParam0 /*43*/])->f_4)) };
			fVar61 = aggregate_func_3018(vVar58, Global_36, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Var0, false);
			ENTITY::SET_ENTITY_COORDS(Var0, vVar58, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Var0, fVar61);
			ENTITY::_0x9587913B9E772D29(Var0, 0);
			func_303(iParam0, 5);
		case 5:
			if (!Var0.f_2)
			{
				func_303(iParam0, 6);
				return;
			}
			if (Var0.f_10)
			{
				func_303(iParam0, 6);
				return;
			}
			bVar65 = false;
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_9))
			{
				if (func_564(iParam0))
				{
					bVar65 = true;
				}
			}
			if (bVar65)
			{
				func_565(iParam0, 1);
			}
			bVar66 = false;
			if (Var0.f_11 || func_550())
			{
				bVar66 = true;
			}
			if (!bVar66)
			{
				aggregate_func_26(iParam0);
				func_314(iParam0);
				func_303(iParam0, 6);
				return;
			}
			bVar67 = true;
			if (bVar67)
			{
				PHYSICS::_0x0348469DAA17576C(Var0);
				ENTITY::FREEZE_ENTITY_POSITION(Var0, false);
				if (func_566() == 0)
				{
					if (aggregate_func_2905(Var0, 2043986356))
					{
						aggregate_func_9343(1);
					}
				}
				iVar68 = func_566();
				TASK::TASK_GO_TO_WHISTLE(Var0, Global_35, iVar68);
				FLOCK::_0xFF1E339CE40EAAAF(Var0, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Var0, 48, false);
				aggregate_func_9343(iVar39);
			}
			aggregate_func_26(iParam0);
			func_314(iParam0);
			func_303(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_316(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return &(Global_1903006->f_364.f_1[iParam0]);
}

int func_327()
{
	return Global_1903006->f_392.f_6;
}

bool func_352(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "CaravanCommonHorse"))
	{
		return true;
	}
	return false;
}

bool func_353(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "CaravanLivestock"))
	{
		return true;
	}
	return false;
}

bool func_354(int iParam0)
{
	char* sVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	sVar0 = "bHorseHasBeenStolen";
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return false;
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return true;
	}
	return false;
}

int func_377()
{
	return Global_1904590->f_8;
}

int func_380(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	aggregate_func_4773(Global_1903928);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!aggregate_func_4475(iParam0, Global_1903928, &(Global_1903928->f_71), bParam3))
			{
				return 0;
			}
			break;
		case 2:
			if (!aggregate_func_4475(iParam0, Global_1903928, &(Global_1903928->f_100), bParam3))
			{
				return 0;
			}
			break;
	}
	if (bParam2)
	{
		aggregate_func_2051(Global_1903928);
	}
	return 1;
}

float func_401(int iParam0)
{
	int iVar0;
	float fVar1;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	if (!aggregate_func_2994(iParam0))
	{
		return 0f;
	}
	iVar0 = aggregate_func_4938(iParam0);
	fVar1 = aggregate_func_1050(iVar0);
	return fVar1;
}

int func_403(int iParam0, var uParam1)
{
	struct<29> Var0;

	Var0.f_9 = -1591664384;
	if (!aggregate_func_9672(iParam0, &Var0))
	{
		return 0;
	}
	Var0.f_14 = uParam1->f_14;
	Var0.f_15 = uParam1->f_15;
	Var0.f_16 = { uParam1->f_16 };
	Var0.f_24 = uParam1->f_24;
	Var0.f_25 = uParam1->f_25;
	Var0.f_26 = uParam1->f_26;
	Var0.f_27 = uParam1->f_27;
	Var0.f_28 = uParam1->f_28;
	if (!INVENTORY::_0xD80A8854DB5CFBA5(aggregate_func_1499(0), &Var0, &Var0, 29))
	{
		return 0;
	}
	return 1;
}

void func_404()
{
	int iVar0;

	if (func_654())
	{
		iVar0 = func_655();
		MAP::REMOVE_BLIP(&iVar0);
		func_656(0);
	}
}

int func_407()
{
	return Global_40.f_277.f_3042.f_1;
}

int func_408()
{
	return Global_1903006->f_429.f_2;
}

void func_410()
{
	Global_40.f_277.f_3042.f_1++;
}

bool func_412()
{
	return Global_1903006->f_429.f_3;
}

int func_413()
{
	return Global_1903006->f_429.f_4;
}

bool func_416()
{
	if (aggregate_func_2850(1627068364 /* GXTEntry: "Horse Reviver" */, 1) || aggregate_func_2850(-1795542128 /* GXTEntry: "Special Horse Reviver" */, 1))
	{
		return true;
	}
	return false;
}

bool func_417(bool bParam0)
{
	int iVar0;
	struct<37> Var1;
	bool bVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	bVar48 = false;
	while (bVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam0, bVar48, &Var1))
		{
			if (Var1.f_2 == 1644203656 && !aggregate_func_2074(bParam0, Var1, 1))
			{
				return true;
			}
		}
		bVar48++;
	}
	return false;
}

int func_418()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 0;
	}
	if (!PLAYER::_0x3EE1F7A8C32F24E1(iVar0, &iVar1, false, false))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (PED::IS_PED_INJURED(iVar2))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar2))
	{
		return 0;
	}
	if (!aggregate_func_1454(iVar2))
	{
		return 0;
	}
	return iVar2;
}

int func_419()
{
	return Global_1903006->f_399.f_1;
}

void func_420(int iParam0)
{
	Global_1903006->f_399.f_1 = iParam0;
}

void func_422()
{
	if (aggregate_func_3080(47))
	{
		aggregate_func_7858(47);
	}
	if (aggregate_func_3083(47))
	{
		aggregate_func_4111(47);
	}
	if (aggregate_func_3080(48))
	{
		aggregate_func_7858(48);
	}
	if (aggregate_func_3083(47))
	{
		aggregate_func_4111(47);
	}
	if (aggregate_func_3080(49))
	{
		aggregate_func_7858(49);
	}
	if (aggregate_func_3083(49))
	{
		aggregate_func_4111(49);
	}
	if (aggregate_func_3080(50))
	{
		aggregate_func_7858(50);
	}
	if (aggregate_func_3083(50))
	{
		aggregate_func_4111(50);
	}
	if (aggregate_func_3080(51))
	{
		aggregate_func_7858(51);
	}
	if (aggregate_func_3083(51))
	{
		aggregate_func_4111(51);
	}
}

bool func_423(int iParam0)
{
	var uVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar1 = PLAYER::_0x0139637A3BFF8B6D(iParam0, &uVar0);
	if (PLAYER::_0x354F689C4FFAAB37(iVar1))
	{
		return true;
	}
	return false;
}

void func_424(int iParam0)
{
	Global_1903006->f_399.f_2 = iParam0;
}

int func_425()
{
	return Global_1903006->f_399.f_2;
}

void func_426()
{
	aggregate_func_5129(0);
	func_420(0);
	func_424(0);
}

bool func_427()
{
	return Global_1903006->f_429.f_5;
}

int func_428()
{
	return Global_40.f_277.f_3042.f_3;
}

int func_429()
{
	return Global_1903006->f_429.f_6;
}

void func_433()
{
	Global_40.f_277.f_3042.f_3++;
}

bool func_434()
{
	return Global_1903006->f_429.f_7;
}

int func_437()
{
	return Global_1903006->f_429.f_8;
}

int func_440()
{
	return Global_1903006->f_429.f_9;
}

bool func_441()
{
	return Global_1903006->f_429.f_10;
}

bool func_444()
{
	return Global_40.f_277.f_3042.f_4;
}

int func_445(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 176)
	{
		if (!aggregate_func_4375(iVar0))
		{
		}
		else if (aggregate_func_4369(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!aggregate_func_5594(iVar0))
			{
			}
			else
			{
				iVar2 = aggregate_func_5278(iVar0);
				if (bParam3)
				{
					if (!aggregate_func_5497(iVar2))
					{
					}
					else if (bParam2)
					{
						if (aggregate_func_4330(iVar2))
						{
						}
						else
						{
							fVar3 = aggregate_func_1501(Global_35, aggregate_func_6004(iVar0), 1);
							if (fVar3 < fVar4 || fVar4 == -1f)
							{
								iVar1 = iVar0;
								fVar4 = fVar3;
							}
						}
						iVar0++;
						return iVar1;
					}
				}
			}
		}
	}
}

void func_448(int iParam0)
{
	Global_1903006->f_429.f_11 = *iParam0;
}

int func_449()
{
	return Global_1903006->f_429.f_11;
}

bool func_450()
{
	if (aggregate_func_2797(7))
	{
		return true;
	}
	if (aggregate_func_4203())
	{
		return true;
	}
	return false;
}

bool func_452()
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!aggregate_func_2797(7))
	{
		if (aggregate_func_1757(7))
		{
			aggregate_func_7682();
			return true;
		}
	}
	if (aggregate_func_2797(7))
	{
		if (aggregate_func_5375() == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(aggregate_func_4938(7)))
			{
				if (!ENTITY::IS_ENTITY_IN_WATER(aggregate_func_4938(7)))
				{
					return true;
				}
			}
		}
	}
	if (aggregate_func_437(Global_35))
	{
		return true;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_667();
	if (iVar1 == 0)
	{
		aggregate_func_7059(MISC::GET_GAME_TIMER());
		return true;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return true;
	}
	if (ENTITY::_0x383F64263F946E45(&uVar2, aggregate_func_6910(), 4, Global_35, 0, 1))
	{
		aggregate_func_7682();
		return true;
	}
	return false;
}

int func_455()
{
	return Global_1903006->f_429.f_12;
}

int func_457()
{
	return Global_1903006->f_427;
}

bool func_459()
{
	return Global_1903006->f_429.f_15;
}

void func_462()
{
	Global_1903006->f_429.f_16++;
}

int func_463()
{
	return Global_1903006->f_429.f_16;
}

bool func_465(int iParam0)
{
	int iVar0;

	if (aggregate_func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_1463(iParam0))
	{
		return false;
	}
	if (aggregate_func_894(iParam0, &iVar0, -1082130432 /* Float: -1f */))
	{
		if (PED::_0x7F9B9791D4CB71F6(iParam0, iVar0, false, 0) == 1)
		{
			return false;
		}
		if (LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_471(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (bVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			bVar0 = aggregate_func_892(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return bVar0;
}

int func_491(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 100;
	}
	return 0;
}

float func_494(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	float fVar2;

	iVar0 = MISC::GET_GAME_TIMER();
	bVar1 = (iVar0 - ((Global_40.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_3);
	bVar1 = aggregate_func_5207(bVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(bVar1) * 0.001f);
	return fVar2;
}

void func_495(int iParam0, int iParam1, int iParam2)
{
	((Global_40.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/])->f_3 = iParam2;
}

void func_496(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (aggregate_func_5049(iParam2, &iVar1))
	{
		iVar0 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar1);
	}
	bVar2 = aggregate_func_8557(iParam1, iParam2);
	if (bVar2 != iVar0)
	{
		aggregate_func_1851(iParam1, iParam2, iVar0);
	}
}

float func_497(int iParam0, int iParam1)
{
	return ((Global_40.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/])->f_2;
}

void func_499(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	int iVar14;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (aggregate_func_5305(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (aggregate_func_1162(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == iParam0)
		{
			bVar2 = true;
		}
	}
	bVar3 = false;
	if (TASK::_0xEFC4303DDC6E60D3(Global_35))
	{
		if (TASK::_0xED1F514AF4732258(Global_35) == iParam0)
		{
			bVar3 = true;
		}
	}
	bVar6 = false;
	bVar7 = false;
	switch (iParam2)
	{
		case 0:
		case 1:
			bVar5 = aggregate_func_8557(iParam1, iParam2);
			if (bVar0)
			{
				if (bVar5 < 100)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar1)
			{
				if (bVar5 < 55)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar3)
			{
				if (bVar5 < 45)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (!bVar2)
			{
				if (bVar5 < 30)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (aggregate_func_4091(iParam0, iParam2))
			{
				bVar7 = true;
			}
			else
			{
				fVar4 = -60f;
				fVar8 = func_698(iParam1, iParam2);
				fVar4 = (fVar4 - (fVar4 * fVar8));
			}
			break;
	}
	if (fVar4 < 0f)
	{
		if (aggregate_func_9275(4096))
		{
			bVar7 = true;
		}
	}
	if (bVar6)
	{
		if (aggregate_func_8117(iParam1, 128))
		{
			bVar7 = true;
		}
		else
		{
			fVar4 = 1f;
		}
	}
	fVar9 = (fVar4 * 60f);
	fVar10 = func_494(iParam1, iParam2);
	fVar11 = ((fVar10 / fVar9) * 100f);
	fVar12 = func_699(iParam1, iParam2);
	bVar13 = aggregate_func_8557(iParam1, iParam2);
	iVar14 = 0;
	if (!bVar7)
	{
		if ((fVar12 < 0f && fVar11 > 0f) || (fVar12 > 0f && fVar11 < 0f))
		{
			fVar12 = 0f;
		}
		fVar12 = (fVar12 + fVar11);
		if (fVar12 >= 1f)
		{
			fVar12 = (fVar12 - 1f);
			iVar14++;
		}
		else if (fVar12 <= -1f)
		{
			fVar12 = (fVar12 + 1f);
			iVar14 = (iVar14 - 1);
		}
		func_700(iParam1, iParam2, fVar12);
	}
	if (iVar14 == 0)
	{
		return;
	}
	aggregate_func_1851(iParam1, iParam2, (bVar13 + iVar14));
}

void func_500(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	var uVar12;
	bool bVar24;
	bool bVar25;
	bool bVar26;

	func_20(0, &uVar0);
	func_20(1, &uVar12);
	bVar24 = false;
	if (aggregate_func_4276(39))
	{
		bVar24 = true;
	}
	bVar25 = false;
	bVar26 = false;
	switch (iParam1)
	{
		case 0:
			if (bParam2 >= 50 && bParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (bParam2 > 0 && bParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
		case 1:
			if (bParam2 >= 50 && bParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (bParam2 > 0 && bParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
	}
	if (bVar25)
	{
		aggregate_func_7059(1);
		aggregate_func_7059(MISC::GET_GAME_TIMER());
	}
	if (bVar26)
	{
		aggregate_func_1962(aggregate_func_4347(2009660790), 1);
	}
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
			return 50;
	}
	return 0;
}

float func_503(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	float fVar2;

	iVar0 = MISC::GET_GAME_TIMER();
	bVar1 = (iVar0 - ((Global_40.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_3);
	bVar1 = aggregate_func_5207(bVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(bVar1) * 0.001f);
	return fVar2;
}

void func_504(int iParam0, int iParam1, int iParam2)
{
	((Global_40.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_3 = iParam2;
}

void func_505(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (aggregate_func_7834(iParam2, &iVar0))
	{
		bVar1 = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, iVar0);
	}
	iVar2 = aggregate_func_9262(iParam1, iParam2);
	if (iVar2 != bVar1)
	{
		aggregate_func_1917(iParam1, iParam2, bVar1);
	}
}

float func_506(int iParam0, int iParam1)
{
	return ((Global_40.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_2;
}

void func_508(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (aggregate_func_5305(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (aggregate_func_1162(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	switch (iParam2)
	{
		case 1:
			if (bVar0)
			{
				fVar3 = -60f;
			}
			else if (bVar1)
			{
				fVar3 = 192f;
			}
			else if (aggregate_func_1105(iParam0))
			{
				bVar2 = true;
			}
			else
			{
				fVar3 = 96f;
			}
			break;
		case 0:
			if (bVar0)
			{
				fVar3 = -60f;
			}
			else
			{
				bVar2 = true;
			}
			break;
		case 2:
			iVar4 = aggregate_func_9262(iParam1, 2);
			iVar5 = (100 - aggregate_func_9262(iParam1, 1));
			if (iVar5 < 50)
			{
				fVar3 = -96f;
			}
			else if (iVar4 > 50)
			{
				fVar3 = -60f;
			}
			else if (iVar4 < 50)
			{
				fVar3 = 60f;
			}
			else
			{
				bVar2 = true;
			}
			break;
	}
	fVar6 = (fVar3 * 60f);
	fVar7 = func_503(iParam1, iParam2);
	fVar8 = ((fVar7 / fVar6) * 100f);
	fVar9 = func_707(iParam1, iParam2);
	iVar10 = aggregate_func_9262(iParam1, iParam2);
	iVar11 = 0;
	if (!bVar2)
	{
		fVar9 = (fVar9 + fVar8);
		if (fVar9 >= 1f)
		{
			fVar9 = (fVar9 - 1f);
			iVar11++;
		}
		else if (fVar9 <= -1f)
		{
			fVar9 = (fVar9 + 1f);
			iVar11 = (iVar11 - 1);
		}
		func_708(iParam1, iParam2, fVar9);
	}
	if (iParam2 == 2)
	{
		if (iVar4 > 50)
		{
			if (iVar10 <= 50)
			{
				iVar10 = 50;
				func_709(iParam1, iParam2);
			}
		}
		else if (iVar4 < 50)
		{
			if (iVar10 >= 50)
			{
				iVar10 = 50;
				func_709(iParam1, iParam2);
			}
		}
	}
	if (iVar11 == 0)
	{
		return;
	}
	aggregate_func_1917(iParam1, iParam2, (iVar10 + iVar11));
}

void func_509(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	struct<11> Var12;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;

	func_20(0, &Var0);
	func_20(1, &Var12);
	iVar24 = aggregate_func_4938(iParam0);
	bVar25 = false;
	if (iParam0 == 0 || (iParam0 == 1 && !Var0.f_2))
	{
		if ((iParam0 == 0 && Var0.f_10) || (iParam0 == 1 && Var12.f_10))
		{
			if (aggregate_func_4276(40))
			{
				bVar25 = true;
			}
		}
	}
	bVar26 = false;
	iVar27 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
					bVar26 = true;
					iVar27 = 4;
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 1:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 2:
			iVar28 = aggregate_func_1402(iVar24, 2);
			iVar29 = aggregate_func_7187(iParam0);
			iVar30 = func_288(iVar28);
			if (iVar29 != iVar30)
			{
				bVar31 = aggregate_func_932(iVar24, iVar30, 1);
				if (bVar31)
				{
					aggregate_func_7570(iParam0, iVar30);
				}
			}
			if (iParam3 > 70)
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar24, 14, 100);
			}
			else
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar24, 14, 50);
			}
			break;
	}
	if (bVar26)
	{
		aggregate_func_7059(1);
		aggregate_func_7059(MISC::GET_GAME_TIMER());
	}
	if (iVar27 != 0)
	{
		ATTRIBUTE::_0xA4D3A1C008F250DF(iVar27);
	}
}

bool func_510()
{
	return Global_40.f_277.f_3047.f_1;
}

void func_511(int iParam0, float fParam1)
{
	Global_1903006->f_379.f_10[iParam0] = fParam1;
}

void func_521(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_5231(iParam0);
	STREAMING::REQUEST_MODEL(iVar0, false);
}

void func_522(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &(Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar1 /*95*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
		}
		iVar1++;
	}
}

bool func_523(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_5231(iParam0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return false;
	}
	return true;
}

bool func_524(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = &(Global_40.f_277.f_1[iParam0 /*431*/])->f_15[iVar1 /*95*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

void func_526(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, 7, bParam1);
}

void func_528(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bParam2 = aggregate_func_5207(bParam2, 0, 100);
	if (aggregate_func_7834(iParam1, &iVar0))
	{
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, iVar0, bParam2);
	}
}

int func_529(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_426;
}

int func_530(int iParam0)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_277.f_1[iParam0 /*431*/])->f_427;
}

void func_531(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;

	Global_1268935->f_906.f_241[iParam2] = 0;
	if (!STREAMING::IS_MODEL_VALID(*uParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			vVar3 = { 0f, -1f, 0f };
			break;
		case 1:
			vVar3 = { -1f, 0f, 0f };
			break;
		case 2:
			vVar3 = { 1f, 0f, 0f };
			break;
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
	if (STREAMING::_0x274EE1B90CFA669E(*uParam1))
	{
		iVar6 = OBJECT::CREATE_OBJECT(*uParam1, vVar0, true, false, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return;
		}
		iVar8 = func_729(iParam2);
		TASK::_0xF0B4F759F35CC7F5(iVar6, uParam1->f_3, iParam0, iVar8, 256);
		ENTITY::_0x399657ED871B3A6C(iVar6, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar6, uParam1->f_93);
		iVar18 = func_730(iParam0, iVar6);
	}
	else if (STREAMING::IS_MODEL_A_PED(*uParam1))
	{
		iVar7 = aggregate_func_2073(*uParam1, vVar0, 0, 1, 0, 0, 1, 1, 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			return;
		}
		if (uParam1->f_8 != 0)
		{
			PED::_0x1902C4CFCC5BE57C(iVar7, uParam1->f_8);
		}
		iVar9 = 0;
		while (iVar9 < uParam1->f_9)
		{
			uVar10 = &uParam1->f_10[iVar9 /*8*/];
			uVar11 = (uParam1->f_10[iVar9 /*8*/])->f_1;
			uVar12 = (uParam1->f_10[iVar9 /*8*/])->f_2;
			uVar13 = (uParam1->f_10[iVar9 /*8*/])->f_3;
			uVar14 = (uParam1->f_10[iVar9 /*8*/])->f_4;
			uVar15 = (uParam1->f_10[iVar9 /*8*/])->f_5;
			uVar16 = (uParam1->f_10[iVar9 /*8*/])->f_6;
			uVar17 = (uParam1->f_10[iVar9 /*8*/])->f_7;
			PED::_0xBC6DF00D7A4A6819(iVar7, uVar10, uVar11, uVar12, uVar13, uVar14, uVar15, uVar16, uVar17);
			iVar9++;
		}
		PED::_0xCC8CA3E88256E58F(iVar7, 0, 1, 1, 1, false);
		if (uParam1->f_2 == 2)
		{
			ENTITY::_SET_ENTITY_HEALTH(iVar7, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar7, 517, true);
			_NAMESPACE49::_0xF5622FA6ACFCA7DB(iVar7, uParam1->f_91);
		}
		if (ENTITY::_0x9A100F1CF4546629(iVar7))
		{
			PED::_0xCE6B874286D640BB(iVar7, uParam1->f_4);
			FLOCK::_0x8B6F0F59B1B99801(iVar7, uParam1->f_5);
			PED::_0x7528720101A807A5(iVar7, uParam1->f_6);
			PED::_0xDACE03C65C6666DB(iVar7, uParam1->f_7);
		}
		if (uParam1->f_92)
		{
			PED::_0x6569F31A01B4C097(iVar7, 0, false);
			ENTITY::_0x6BCF5F3D8FFE988D(iVar7, 1);
		}
		iVar8 = func_729(iParam2);
		TASK::_0xF0B4F759F35CC7F5(iVar7, uParam1->f_3, iParam0, iVar8, 256);
		ENTITY::_0x399657ED871B3A6C(iVar7, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar7, uParam1->f_93);
		if (uParam1->f_94)
		{
			ENTITY::SET_ENTITY_RENDER_SCORCHED(iVar7, true);
			FIRE::START_ENTITY_FIRE(iVar7, 0f, -1, 8);
		}
		iVar19 = aggregate_func_4270(iVar7);
		bVar20 = aggregate_func_1522(iVar19);
		if (aggregate_func_2823(bVar20, 0))
		{
			if (bVar20 != uParam1->f_1)
			{
				uParam1->f_1 = bVar20;
			}
		}
		iVar21 = func_730(iParam0, iVar7);
	}
}

void func_533()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1903006->f_303.f_2[iVar0 /*5*/] = -1;
		(Global_1903006->f_303.f_2[iVar0 /*5*/])->f_1 = -1;
		(Global_1903006->f_303.f_2[iVar0 /*5*/])->f_2 = 0f;
		(Global_1903006->f_303.f_2[iVar0 /*5*/])->f_3 = -1;
		(Global_1903006->f_303.f_2[iVar0 /*5*/])->f_4 = 0f;
		iVar0++;
	}
}

bool func_550()
{
	if (!aggregate_func_9275(8))
	{
		return false;
	}
	return true;
}

int func_551()
{
	return Global_1903006->f_429;
}

int func_552()
{
	return Global_1903006->f_429.f_1;
}

void func_553(int iParam0)
{
	Global_1903006->f_429 = *iParam0;
}

void func_554(int iParam0)
{
	Global_1903006->f_429.f_1 = *iParam0;
}

bool func_558(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	bool bVar11;
	bool bVar12;

	iVar6 = 12;
	if (aggregate_func_4268(vParam4))
	{
		vVar8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = aggregate_func_3018(vParam4, vParam1, 1);
	}
	fVar7 = (fVar7 + ((BUILTIN::TO_FLOAT(uParam0->f_2) * 10f) * aggregate_func_4947((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar0 = { vParam1 + Vector(0f, -BUILTIN::COS(fVar7), BUILTIN::SIN(fVar7)) * FtoV(((80f + 40f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (aggregate_func_4641(uParam0))
	{
		case 0:
			aggregate_func_4788(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			aggregate_func_4252(uParam0, 1);
			break;
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3f, 0f))
			{
				if (func_741(vVar3, vParam1, 0, 0))
				{
					aggregate_func_4788(uParam0, vVar3);
					if (uParam0->f_12)
					{
						aggregate_func_4252(uParam0, 3);
					}
					else
					{
						aggregate_func_4252(uParam0, 4);
					}
				}
				else
				{
					aggregate_func_4252(uParam0, 2);
				}
			}
			else
			{
				aggregate_func_4252(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (aggregate_func_695(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, 0))
			{
				if (func_741(aggregate_func_7632(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						aggregate_func_4252(uParam0, 3);
					}
					else
					{
						aggregate_func_4252(uParam0, 4);
					}
				}
				else
				{
					aggregate_func_4252(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				aggregate_func_4252(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::_0x348F211CA2404039(iParam7, aggregate_func_7632(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						aggregate_func_4252(uParam0, 5);
					}
				}
			}
			else
			{
				switch (PATHFIND::_0x3A0F82F6EE2291C8(uParam0->f_13))
				{
					case 2:
						break;
					case 0:
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						aggregate_func_4252(uParam0, 5);
						break;
					case 1:
						bVar12 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (aggregate_func_4240(bVar12, 2) && iVar6 != 13)
						{
							aggregate_func_4252(uParam0, 5);
						}
						else
						{
							aggregate_func_4252(uParam0, 4);
						}
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			aggregate_func_832(&(uParam0->f_3.f_3), 1, 1, 0, 0);
			aggregate_func_4252(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			aggregate_func_4252(uParam0, 0);
			break;
	}
	return false;
}

bool func_564(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!aggregate_func_2994(iParam0))
	{
		return false;
	}
	iVar0 = aggregate_func_4938(iParam0);
	iVar1 = aggregate_func_7187(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::GET_MOUNT(iVar1) == iVar0)
	{
		return true;
	}
	return false;
}

void func_565(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1903006[iParam0 /*43*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = PED::_0xB676EFDA03DADA52(iVar0, 0);
	iVar2 = PED::_0xB676EFDA03DADA52(iVar0, 1);
	if (iVar1 != iVar2)
	{
		return;
	}
	if (bParam1)
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = 1;
	}
	TASK::TASK_HORSE_ACTION(iVar0, iVar3, 0, 0);
}

int func_566()
{
	return Global_1903006->f_364.f_9;
}

void func_575(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	bool bVar10;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = aggregate_func_4938(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	iVar2 = aggregate_func_4791(iVar1);
	if (DECORATOR::DECOR_EXIST_ON(iVar0, "HorseGender"))
	{
		iVar3 = DECORATOR::DECOR_GET_INT(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = aggregate_func_3103(iVar0);
		DECORATOR::DECOR_SET_INT(iVar0, "HorseGender", iVar3);
	}
	aggregate_func_5184(iParam0, iVar1);
	aggregate_func_5184(iParam0, iVar2);
	aggregate_func_5184(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = MISC::GET_GAME_TIMER();
		iVar5 = aggregate_func_4265();
	}
	aggregate_func_5184(iParam0, iParam1);
	aggregate_func_5184(iParam0, iVar4);
	aggregate_func_5184(iParam0, iVar5);
	bVar6 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(iVar0, 7));
	aggregate_func_667(iParam0, bVar6);
	aggregate_func_968(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (aggregate_func_7834(iVar8, &iVar9))
		{
			bVar10 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, iVar9);
			aggregate_func_1917(iParam0, iVar8, bVar10);
		}
		iVar8++;
	}
}

void func_631(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	int iVar0;

	bParam6 = aggregate_func_5207(bParam6, 0, 100);
	aggregate_func_2629(Param1, iParam5, bParam6);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (aggregate_func_7834(iParam5, &iVar0))
	{
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, iVar0, bParam6);
	}
}

void func_639(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = aggregate_func_5231(iParam0);
	iVar1 = aggregate_func_5234(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	(Global_40.f_277.f_1[iParam0 /*431*/])->f_369.f_1 = ((Global_40.f_277.f_1[iParam0 /*431*/])->f_369.f_1 + fParam1);
	iVar3 = aggregate_func_4938(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	aggregate_func_1173(iVar3, BUILTIN::FLOOR((Global_40.f_277.f_1[iParam0 /*431*/])->f_369.f_1));
	bVar4 = aggregate_func_1171(iVar3);
	(Global_40.f_277.f_1[iParam0 /*431*/])->f_369 = bVar4;
	PED::_0xA69899995997A63B(iVar3, bVar4);
	aggregate_func_5323(bVar4);
	if (bVar4 > iVar1)
	{
		aggregate_func_2726(iParam0, bVar4);
		if (iParam0 == 6)
		{
			if (bVar4 == 1)
			{
				if (aggregate_func_4276(41))
				{
					aggregate_func_4322(19, 1);
				}
				else
				{
					aggregate_func_4322(20, 1);
				}
			}
		}
		if (bVar4 == 2)
		{
			aggregate_func_4322(21, 1);
		}
		else if (bVar4 == 3)
		{
			aggregate_func_4322(22, 1);
		}
		else if (bVar4 == 4)
		{
			aggregate_func_4322(23, 1);
		}
		if (bVar4 >= 2)
		{
			iVar5 = aggregate_func_1732(iVar3);
			iVar6 = aggregate_func_4658();
			aggregate_func_1919(iVar6, iVar5);
			iVar7 = aggregate_func_1732(iVar3);
			iVar8 = aggregate_func_4650();
			aggregate_func_1919(iVar8, iVar7);
		}
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(iVar3, bVar4);
		aggregate_func_1962(aggregate_func_4347(352983236), 1);
		if (bVar4 == iVar2)
		{
			aggregate_func_1962(aggregate_func_4347(-2116919750), 1);
		}
		aggregate_func_2895(0, -1);
	}
}

bool func_654()
{
	int iVar0;

	iVar0 = func_655();
	if (MAP::DOES_BLIP_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

int func_655()
{
	return Global_1903006->f_379.f_1;
}

void func_656(int iParam0)
{
	Global_1903006->f_379.f_1 = iParam0;
}

int func_667()
{
	return Global_1903006->f_429.f_13;
}

void func_696(int iParam0, int iParam1, float fParam2)
{
	fParam2 = aggregate_func_4333(fParam2, 0f, 1E+09f);
	((Global_40.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/])->f_2 = fParam2;
}

float func_698(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 0f;
	if (iParam1 == 0)
	{
		if (aggregate_func_9262(iParam0, 0) > 50)
		{
			fVar0 = (fVar0 + 0.25f);
		}
	}
	if (aggregate_func_2850(-184823984 /* GXTEntry: "Boar Tusk Talisman" */, 1))
	{
		fVar0 = (fVar0 - -0.1f);
	}
	if (aggregate_func_5375() == 0 && aggregate_func_5136() == iParam0)
	{
		fVar1 = func_848(iParam1);
		fVar0 = (fVar0 - fVar1);
	}
	return fVar0;
}

float func_699(int iParam0, int iParam1)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((Global_40.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/])->f_1;
}

void func_700(int iParam0, int iParam1, float fParam2)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = aggregate_func_4333(fParam2, -1f, 1f);
	((Global_40.f_277.f_1[iParam0 /*431*/])->f_393[iParam1 /*4*/])->f_1 = fParam2;
}

float func_707(int iParam0, int iParam1)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return ((Global_40.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_1;
}

void func_708(int iParam0, int iParam1, float fParam2)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = aggregate_func_4333(fParam2, -1f, 1f);
	((Global_40.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_1 = fParam2;
}

void func_709(int iParam0, int iParam1)
{
	iParam0 = aggregate_func_6496(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	((Global_40.f_277.f_1[iParam0 /*431*/])->f_402[iParam1 /*4*/])->f_1 = 0f;
}

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	return 0;
}

int func_730(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = INVENTORY::_0x13D234A2A3F66E63(iParam0);
	bVar1 = aggregate_func_1522(iParam1);
	iVar2 = aggregate_func_3661(iVar0, bVar1, 1);
	return iVar2;
}

bool func_734(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = aggregate_func_2827(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = aggregate_func_3500(bParam0);
			bVar0 = false;
			while (bVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar5, bVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				bVar0++;
			}
		}
	}
	return false;
}

bool func_741(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7)
{
	bool bVar0;
	var uVar1;
	float fVar2;

	bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);
	if (bParam6)
	{
		if (aggregate_func_1848(vParam0 + Vector(0.2f, 0f, 0f)))
		{
			return false;
		}
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(1f, 0f, 0f), &uVar1, 0))
	{
		return false;
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
	{
		return false;
	}
	if (bVar0)
	{
	}
	else
	{
		if (bParam7)
		{
			if (vParam0.z > (vParam3.z + 10f))
			{
				return false;
			}
		}
		fVar2 = BUILTIN::VDIST(vParam0, vParam3);
		if (fVar2 > 40f && fVar2 < 80f)
		{
			return true;
		}
	}
	return false;
}

int func_834(int iParam0, bool bParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(iParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return 0;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (&Var0[iVar474 /*47*/] == bParam1)
		{
			iVar473 = (Var0[iVar474 /*47*/])->f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = &(Var0[iVar474 /*47*/])->f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar472))
				{
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

float func_848(int iParam0)
{
	var uVar0;

	uVar0 = &Global_1903006->f_379.f_10[iParam0];
	return uVar0;
}

void func_891(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_1171(iParam0);
	if (iVar0 >= 4)
	{
		return;
	}
	aggregate_func_1405(iParam0, BUILTIN::FLOOR(fParam1));
	bVar1 = aggregate_func_1171(iParam0);
	if (bVar1 > iVar0)
	{
		iVar2 = (bVar1 - iVar0);
		aggregate_func_1962(aggregate_func_4347(352983236), iVar2);
		PED::_0xA69899995997A63B(iParam0, bVar1);
		if (bVar1 >= 4)
		{
			aggregate_func_1962(aggregate_func_4347(-2116919750), 1);
		}
		if (bVar1 == 2)
		{
			aggregate_func_4322(21, 1);
		}
		else if (bVar1 == 3)
		{
			aggregate_func_4322(22, 1);
		}
		else if (bVar1 == 4)
		{
			aggregate_func_4322(23, 1);
		}
		aggregate_func_1850(bVar1, iParam0);
		aggregate_func_8047();
	}
}

