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
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	struct<4> Var1;

	iVar0 = ScriptParam_0;
	Var1.f_3 = 2;
	Var1.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate_func_4252(&Var1, 3);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (aggregate_func_3123(Global_35, 0) != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
		}
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("weapon_unarmed"), 0);
	while (true)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			aggregate_func_4252(&Var1, 3);
		}
		switch (aggregate_func_4641(&Var1))
		{
			case 0:
				if (aggregate_func_3123(Global_35, 0) != joaat("weapon_unarmed"))
				{
				}
				else
				{
					aggregate_func_4252(&Var1, 1);
				}
				break;
			case 1:
				func_4(&Var1);
				func_5(5, &(Var1.f_2));
				func_6(&Var1);
				aggregate_func_4252(&Var1, 2);
				break;
			case 2:
				if (aggregate_func_2927(&(Var1.f_3[0]), 1))
				{
					func_8(&Var1, 1);
				}
				else if (aggregate_func_2927(&(Var1.f_3[1]), 1))
				{
					func_8(&Var1, 0);
				}
				if (Global_1939221->f_10477 != 1061777683 || Global_1939221->f_10478 != iVar0)
				{
					aggregate_func_4252(&Var1, 3);
				}
				break;
			case 3:
				func_9(&Var1);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_4(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (aggregate_func_2875(&(uParam0->f_3[iVar0])))
		{
			aggregate_func_2878(uParam0->f_3[iVar0], 1, 1);
		}
		iVar0++;
	}
}

int func_5(int iParam0, var uParam1)
{
	if (!aggregate_func_5105(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1915121[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

void func_6(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!aggregate_func_4246(uParam0->f_1))
	{
		return;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uParam0->f_2))
	{
		return;
	}
	if (func_14(uParam0->f_1))
	{
		return;
	}
	iVar0 = func_15(uParam0->f_1, uParam0->f_2);
	iVar1 = func_16(uParam0->f_1, uParam0->f_2);
	if (iVar0 > 0)
	{
		uParam0->f_3[0] = aggregate_func_1523("IB_POS_RESP", joaat("INPUT_INTERACT_LOCKON_POS"), Global_35, 1, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	}
	if (iVar1 > 0)
	{
		uParam0->f_3[1] = aggregate_func_1523("IB_NEG_RESP", joaat("INPUT_INTERACT_LOCKON_NEG"), Global_35, 1, 0, 0, 1, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	}
}

void func_8(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!aggregate_func_4246(uParam0->f_1))
	{
		return;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uParam0->f_2))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	iVar1 = func_19(uParam0->f_1);
	if (iVar1 == -1)
	{
		return;
	}
	aggregate_func_4254(Global_40.f_4514[iVar1 /*6*/], iVar0);
	func_21(uParam0->f_1, uParam0->f_2, bParam1);
	func_4(uParam0);
}

void func_9(var uParam0)
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_14(int iParam0)
{
	int iVar0;

	if (!aggregate_func_4246(iParam0))
	{
		return false;
	}
	iVar0 = func_19(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return (aggregate_func_4250(Global_40.f_4514[iVar0 /*6*/], 1) || aggregate_func_4250(Global_40.f_4514[iVar0 /*6*/], 2));
}

int func_15(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!aggregate_func_4246(iParam0))
	{
		return 0;
	}
	Var0 = uParam1;
	Var0.f_2 = 396654621;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_16(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!aggregate_func_4246(iParam0))
	{
		return 0;
	}
	Var0 = uParam1;
	Var0.f_2 = 1450050975;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!aggregate_func_4246(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_4514[iVar1 /*6*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

void func_21(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!aggregate_func_4246(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		iVar0 = func_15(iParam0, uParam1);
	}
	else
	{
		iVar0 = func_16(iParam0, uParam1);
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (bParam2)
		{
			func_26(iParam0, iVar1, uParam1, &bVar2, &iVar3);
		}
		else
		{
			func_27(iParam0, iVar1, uParam1, &bVar2, &iVar3);
		}
		aggregate_func_220(bVar2, iVar3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		iVar1++;
	}
	if (aggregate_func_4866())
	{
		aggregate_func_4918(1, 0, 0);
	}
}

int func_26(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4)
{
	struct<5> Var0;

	if (!aggregate_func_4246(iParam0))
	{
		return 0;
	}
	Var0 = uParam2;
	Var0.f_2 = -122991295;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1392893044;
		DATAFILE::_DATAFILE_GET_HASH(bParam3, &Var0);
		Var0.f_2 = 1214284824;
		DATAFILE::_DATAFILE_GET_INT(iParam4, &Var0);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_27(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4)
{
	struct<5> Var0;

	if (!aggregate_func_4246(iParam0))
	{
		return 0;
	}
	Var0 = uParam2;
	Var0.f_2 = -1902296053;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1392893044;
		DATAFILE::_DATAFILE_GET_HASH(bParam3, &Var0);
		Var0.f_2 = 1214284824;
		DATAFILE::_DATAFILE_GET_INT(iParam4, &Var0);
	}
	else
	{
		return 0;
	}
	return 1;
}

