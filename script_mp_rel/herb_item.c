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
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	int iVar5;
	bool bVar6;

	bVar0 = ScriptParam_0.f_1;
	bVar1 = ScriptParam_0.f_3;
	bVar2 = ScriptParam_0.f_4;
	iVar5 = aggregate_func_4494(bVar0);
	bVar6 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate_func_4252(&Var3, 3);
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
			aggregate_func_4252(&Var3, 3);
		}
		switch (aggregate_func_4641(&Var3))
		{
			case 0:
				if (aggregate_func_3123(Global_35, 0) != joaat("weapon_unarmed"))
				{
				}
				else
				{
					aggregate_func_4252(&Var3, 1);
				}
				break;
			case 1:
				func_5(iVar5);
				func_6(bVar0);
				Var3.f_1 = MISC::GET_GAME_TIMER();
				aggregate_func_2919(iVar5, 1);
				aggregate_func_4252(&Var3, 2);
				break;
			case 2:
				if (bVar2)
				{
					if ((MISC::GET_GAME_TIMER() - Var3.f_1) > 5500)
					{
						bVar6 = func_8(ScriptParam_0);
						aggregate_func_4691(iVar5, 1, !bVar6);
						if (bVar1)
						{
							func_10(iVar5, bVar6, 1, 0);
						}
						if (bVar6)
						{
							aggregate_func_4740(238, aggregate_func_4539(iVar5), 1);
						}
						aggregate_func_4252(&Var3, 3);
					}
				}
				else
				{
					aggregate_func_4252(&Var3, 3);
				}
				break;
			case 3:
				aggregate_func_2819();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_5(int iParam0)
{
	var uVar0;

	uVar0 = aggregate_func_2861(MISC::_CREATE_VAR_STRING(10, "ITEM_TASTED_PUMP_MULT", MISC::_CREATE_VAR_STRING(0, aggregate_func_4462(aggregate_func_4781(iParam0))), 1), "", 0, 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	(*Global_1914742)[iParam0 /*4*/] = uVar0;
}

void func_6(bool bParam0)
{
	if (!aggregate_func_2823(bParam0, 0))
	{
	}
}

int func_8(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = Param0.f_1;
	bVar1 = Param0.f_3;
	bVar2 = Param0.f_4;
	iVar3 = aggregate_func_4494(iVar0);
	if (!bVar2 || aggregate_func_4668(iVar3))
	{
		return 0;
	}
	bVar4 = func_22(iVar3);
	if ((!bVar1 || !aggregate_func_2823(bVar4, 0)) || func_23(bVar4))
	{
		return 0;
	}
	return 1;
}

void func_10(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!aggregate_func_4542(iParam0))
	{
		return;
	}
	func_31(func_22(iParam0), 0, bParam1, bParam2, iParam3);
}

bool func_22(int iParam0)
{
	if (!aggregate_func_4542(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 2:
			return -1080874779 /* GXTEntry: "Special Health Cure" */;
		case 3:
			return -755485480 /* GXTEntry: "Potent Health Cure" */;
		case 6:
			return 747460826 /* GXTEntry: "Special Horse Stimulant" */;
		case 7:
			return 1627068364 /* GXTEntry: "Horse Reviver" */;
		case 13:
			return -1067476102 /* GXTEntry: "Potent Bitters" */;
		case 15:
			return -1080874779 /* GXTEntry: "Special Health Cure" */;
		case 18:
			return -801397594 /* GXTEntry: "Potent Horse Stimulant" */;
		case 19:
			return 730856618 /* GXTEntry: "Potent Miracle Tonic" */;
		case 20:
			return -486559882 /* GXTEntry: "Potent Snake Oil" */;
		case 23:
			return -1976480343 /* GXTEntry: "Special Miracle Tonic" */;
		case 26:
			return 2036955137 /* GXTEntry: "Potent Herbivore Bait" */;
		case 29:
			return -1067476102 /* GXTEntry: "Potent Bitters" */;
		case 34:
			return 1566032147 /* GXTEntry: "Special Bitters" */;
		case 38:
			return 2036955137 /* GXTEntry: "Potent Herbivore Bait" */;
		case 49:
			return 1566032147 /* GXTEntry: "Special Bitters" */;
		case 52:
			return -755485480 /* GXTEntry: "Potent Health Cure" */;
	}
	return false;
}

bool func_23(bool bParam0)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == 1644203656 && !func_39(bParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

int func_31(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 != 0 && !func_39(bParam0, iParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_39(bParam0, Var2, 1))
				{
					if (func_51(bParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_51(bParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			if (aggregate_func_4251() != -1)
			{
				aggregate_func_4322(571, 1);
			}
			else
			{
				aggregate_func_4322(235, 0);
			}
		}
	}
	if (bParam3)
	{
		if (!aggregate_func_1135(0, 0, 1))
		{
			aggregate_func_2895(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

bool func_39(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return aggregate_func_2070(aggregate_func_4280(bParam0), iParam1, bParam2);
	}
	if (aggregate_func_4537(bParam0))
	{
		return func_62(aggregate_func_2035(bParam0, 1), iParam1);
	}
	if ((bParam2 && aggregate_func_4251() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(bParam0))
	{
		return true;
	}
	if (!aggregate_func_2983(bParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_51(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (aggregate_func_4251() != -1)
	{
		return false;
	}
	if (aggregate_func_2983(bParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::_UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

int func_62(int iParam0, int iParam1)
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
		if (&Var0[iVar474 /*47*/] == iParam1)
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

