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
	struct<7> Local_13 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(515))
	{
		func_1(&Local_13, 10);
	}
	else
	{
		func_1(&Local_13, 0);
	}
	Local_13.f_1 = ScriptParam_0.f_2;
	Local_13.f_6 = ScriptParam_0.f_4;
	Local_13.f_3 = ScriptParam_0;
	Local_13.f_4 = ScriptParam_0.f_3;
	while (func_2(&Local_13))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_5 = MISC::GET_GAME_TIMER();
}

bool func_2(var uParam0)
{
	func_3(uParam0);
	switch (*uParam0)
	{
		case 0:
			func_4(uParam0);
			break;
		case 1:
			if (func_5(uParam0->f_5, 4000))
			{
				func_1(uParam0, 9);
			}
			else
			{
				func_6(uParam0);
				Jump @886; //curOff = 126
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
				if (func_5(uParam0->f_5, 4000))
				{
					func_1(uParam0, 9);
				}
				else
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
					{
						func_7(uParam0->f_3);
						func_1(uParam0, 9);
					}
					Jump @886; //curOff = 207
					PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
					if (func_5(uParam0->f_5, 4000))
					{
						func_1(uParam0, 9);
					}
					else
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
						{
							func_8(uParam0->f_3);
							func_1(uParam0, 9);
						}
						Jump @886; //curOff = 288
						PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 37, 1);
						if (func_5(uParam0->f_5, 4000))
						{
							func_1(uParam0, 9);
						}
						else
						{
							if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
							{
								func_9(uParam0->f_3, uParam0->f_1, &(uParam0->f_6));
								func_1(uParam0, 9);
							}
							Jump @886; //curOff = 378
							if (func_5(uParam0->f_5, 4000))
							{
								func_1(uParam0, 9);
							}
							else
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
								{
									if (aggregate_func_2827(uParam0->f_1) == 81053684 || aggregate_func_2852(uParam0->f_1, -1348134986))
									{
										func_12(uParam0->f_3, uParam0->f_1);
									}
									else
									{
										func_13(uParam0->f_3, uParam0->f_1);
									}
									func_1(uParam0, 9);
								}
								Jump @886; //curOff = 503
								if (func_5(uParam0->f_5, 4000))
								{
									func_1(uParam0, 9);
								}
								else
								{
									if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
									{
										if (aggregate_func_2827(uParam0->f_1) == 81053684 || aggregate_func_2852(uParam0->f_1, -1348134986))
										{
											func_14(uParam0->f_3, uParam0->f_1);
										}
										else
										{
											func_13(uParam0->f_3, uParam0->f_1);
										}
										func_1(uParam0, 9);
									}
									Jump @886; //curOff = 628
									if (func_5(uParam0->f_5, 4000))
									{
										func_1(uParam0, 9);
									}
									else
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 822176400) || uParam0->f_4)
										{
											func_9(uParam0->f_3, uParam0->f_2, &(uParam0->f_6));
											uParam0->f_5 = aggregate_func_1510();
											func_1(uParam0, 8);
										}
										Jump @886; //curOff = 715
										if (func_5(uParam0->f_5, 4000))
										{
											func_1(uParam0, 9);
										}
										else if (TASK::_0xEC7E480FF8BD0BED(uParam0->f_3) && !uParam0->f_4)
										{
											if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_3, 108107462))
											{
											}
											else
											{
												Jump @886; //curOff = 784
												if (aggregate_func_6997())
												{
												}
												else if (func_17())
												{
													aggregate_func_8599();
												}
												else
												{
													if (Global_35 == uParam0->f_3)
													{
														Global_1951131->f_3253 = 0;
													}
													func_19(uParam0->f_1, 0);
													func_1(uParam0, 9);
													Jump @886; //curOff = 847
													if (Global_35 == uParam0->f_3)
													{
														Global_1951131->f_3253 = 0;
													}
													func_1(uParam0, 10);
													Jump @886; //curOff = 876
													return false;
												}
											}
											return true;
										}
									}
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

void func_3(var uParam0)
{
	if (aggregate_func_4641(uParam0) == 10)
	{
		return;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (Global_35 == uParam0->f_3)
		{
			uParam0->f_4 = 1;
			return;
		}
		else
		{
			uParam0->f_4 = 1;
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_1(uParam0, 10);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		if (Global_35 == uParam0->f_3)
		{
			func_1(uParam0, 9);
			return;
		}
		else
		{
			func_1(uParam0, 10);
			return;
		}
	}
}

void func_4(var uParam0)
{
	if (PED::IS_PED_A_PLAYER(uParam0->f_3))
	{
		if (Global_35 == uParam0->f_3)
		{
			if (Global_1951131->f_3253)
			{
				func_1(uParam0, 10);
			}
			else
			{
				Global_1951131->f_3253 = 1;
				func_1(uParam0, 1);
			}
		}
		else
		{
			func_1(uParam0, 1);
		}
	}
	else
	{
		func_1(uParam0, 10);
	}
}

bool func_5(int iParam0, int iParam1)
{
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - iParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_6(var uParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	if (!aggregate_func_4505(uParam0->f_1))
	{
		func_1(uParam0, 10);
		return;
	}
	bVar2 = false;
	bVar3 = true;
	if (aggregate_func_5072(&iVar0))
	{
		if (uParam0->f_1 == iVar0)
		{
			bVar2 = true;
			bVar3 = true;
		}
		else
		{
			uParam0->f_2 = iVar0;
			bVar3 = false;
		}
	}
	iVar4 = aggregate_func_2827(uParam0->f_1);
	bVar5 = aggregate_func_5073(&uVar1);
	if (bVar3)
	{
		iVar6 = aggregate_func_5527(uParam0->f_1);
		if (iVar6 != -358215195 && aggregate_func_4240(uParam0->f_6, 1))
		{
			func_1(uParam0, 6);
		}
		else if (bVar2)
		{
			if (bVar5)
			{
				if (iVar4 == 81053684 || aggregate_func_2852(uParam0->f_1, -1348134986))
				{
					func_1(uParam0, 4);
				}
				else
				{
					func_1(uParam0, 6);
				}
			}
			else
			{
				func_1(uParam0, 5);
			}
		}
		else if ((iVar4 == 81053684 || aggregate_func_2852(uParam0->f_1, -1348134986)) && aggregate_func_4240(uParam0->f_6, 2))
		{
			func_1(uParam0, 2);
			aggregate_func_4247(&(uParam0->f_6), 2);
		}
		else
		{
			func_1(uParam0, 3);
		}
	}
	else
	{
		func_1(uParam0, 7);
	}
}

void func_7(int iParam0)
{
	int iVar0;

	if (!aggregate_func_5073(&iVar0))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	aggregate_func_5992(iVar0, 2);
	aggregate_func_4733(22, 0, 0, 0, 0);
}

void func_8(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!aggregate_func_5072(&iVar0))
	{
		return;
	}
	if (aggregate_func_5073(&uVar1))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, iParam0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 0, -1, -1) > 0)
	{
	}
	aggregate_func_5992(iVar0, 1);
	aggregate_func_4733(22, 0, 0, 0, 0);
}

int func_9(int iParam0, int iParam1, var uParam2)
{
	if (!aggregate_func_4505(iParam1))
	{
		return 0;
	}
	if (!aggregate_func_5994(iParam1))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 13);
	aggregate_func_4247(uParam2, 1);
	aggregate_func_5992(iParam1, 8);
	aggregate_func_4733(22, 0, 0, 0, 0);
	return 1;
}

void func_12(int iParam0, int iParam1)
{
	if (aggregate_func_2827(iParam1) != 81053684 && !aggregate_func_2852(iParam1, -1348134986))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	aggregate_func_5992(iParam1, 2);
	aggregate_func_4733(22, 0, 0, 0, 0);
}

void func_13(int iParam0, int iParam1)
{
	if (aggregate_func_2827(iParam1) != -525676072)
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, iParam0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 0, -1, -1) > 0)
	{
	}
	aggregate_func_5992(iParam1, 1);
	aggregate_func_4733(22, 0, 0, 0, 0);
}

void func_14(int iParam0, int iParam1)
{
	if (aggregate_func_2827(iParam1) != 81053684 && !aggregate_func_2852(iParam1, -1348134986))
	{
		return;
	}
	PED::_0x2208438012482A1A(iParam0, false, false);
	PED::_0xC494C76A34266E82(iParam0, 0);
	if (EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1925708505, iParam0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 0, -1, -1) > 0)
	{
	}
	aggregate_func_5992(iParam1, 1);
	aggregate_func_4733(22, 0, 0, 0, 0);
}

bool func_17()
{
	int iVar0;

	iVar0 = 0;
	if (func_33(81053684, &iVar0))
	{
		return true;
	}
	if (func_33(-525676072, &iVar0))
	{
		return true;
	}
	return false;
}

int func_19(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = aggregate_func_5994(iParam0);
	if (aggregate_func_2852(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (aggregate_func_5073(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = aggregate_func_7437();
			}
			else
			{
				iVar0 = aggregate_func_7438();
			}
		}
		else if (bVar1)
		{
			iVar0 = aggregate_func_7439();
		}
		else
		{
			iVar0 = aggregate_func_7440();
		}
	}
	else if (aggregate_func_5072(&iVar2))
	{
		if (aggregate_func_2852(iVar2, -1303648999))
		{
			iVar0 = aggregate_func_7437();
		}
		else
		{
			iVar0 = aggregate_func_7438();
		}
	}
	else if (bVar1)
	{
		iVar0 = aggregate_func_7439();
	}
	else
	{
		iVar0 = aggregate_func_7440();
	}
	if (iVar0 != 0)
	{
		Global_1951131->f_3251 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

bool func_33(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = aggregate_func_4716(aggregate_func_3065(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1951131->f_1657.f_1[iVar1 /*3*/] != 0 && &Global_1951131->f_1657.f_1[iVar1 /*3*/] != &Global_1951131->f_81[iVar1 /*12*/])
	{
		iVar0 = &Global_1951131->f_1657.f_1[iVar1 /*3*/];
		if (aggregate_func_2827(iVar0) == iParam0 || (iParam0 == 81053684 && aggregate_func_2852(iVar0, -1348134986)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

void func_34()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_33(81053684, &iVar1))
	{
		if (func_39(iVar1))
		{
			func_55(81053684);
			bVar0 = true;
		}
	}
	if (func_33(-525676072, &iVar1))
	{
		if (func_39(iVar1))
		{
			func_55(-525676072);
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		PED::_0xC494C76A34266E82(Global_35, 13);
	}
}

bool func_39(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_2827(iParam0);
	if ((iVar0 == 81053684 || iVar0 == -525676072) || aggregate_func_2852(iParam0, -1348134986))
	{
		return true;
	}
	return false;
}

int func_45(int iParam0)
{
	switch (aggregate_func_2827(iParam0))
	{
		case -2061583405:
			return 1;
		case -1719060085:
			return 1;
		case -999503751:
			return 1;
		case -525676072:
			return 1;
		case 81053684:
			return 1;
		case -413129408:
			return 1;
		default:
			break;
	}
	if (aggregate_func_2852(iParam0, -1348134986))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)
{
	var uVar0;

	return func_67(iParam0, &uVar0);
}

void func_55(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_4716(aggregate_func_3065(iParam0), 1);
	if (iVar0 == 39)
	{
		return;
	}
	aggregate_func_5992(&(Global_1951131->f_81[iVar0 /*12*/]), 8);
	aggregate_func_4733(22, 0, 0, 0, 0);
}

int func_56()
{
	int iVar0;
	int iVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !aggregate_func_2910(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_0xC853230E76A152DF(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && aggregate_func_2910(iVar0)) || WEAPON::_0x6E4E1A82081EABED(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_67(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1951131->f_3109.f_25)
	{
		if (iParam0 == &Global_1951131->f_3109[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

