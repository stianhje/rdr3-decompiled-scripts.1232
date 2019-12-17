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
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1();
	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	aggregate.aberdeenpigfarm.func_163(Global_1197508, 4);
	aggregate.aberdeenpigfarm.func_163(Global_1197508, 8);
	aggregate.aberdeenpigfarm.func_163(Global_1197508, 16);
	func_5(0);
	if (aggregate.net_deathmatch_ambient_manager.func_6() == 0)
	{
	}
	else
	{
		aggregate.net_deathmatch_ambient_manager.func_7(0);
	}
	if (func_8() == 0)
	{
	}
	else
	{
		aggregate.net_deathmatch_ambient_manager.func_7(0);
	}
}

void func_1()
{
	aggregate.flow_controller.func_7(32, -1);
	aggregate.flow_controller.func_8();
	if (aggregate.flow_controller.func_9())
	{
		aggregate.aberdeenpigfarm.func_46();
	}
	func_14();
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	aggregate.aberdeenpigfarm.func_106(Global_1197508, 1);
}

bool func_2()
{
	if (aggregate.aberdeenpigfarm.func_49(0, 0))
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	return false;
}

void func_3()
{
	if (aggregate.aberdeenpigfarm.func_45() != 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(956799153))
	{
		return;
	}
	func_19();
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_8() != 0)
		{
			aggregate.net_deathmatch_ambient_manager.func_7(0);
		}
		return;
	}
	switch (func_20())
	{
		case -1:
		default:
			break;
			aggregate.aberdeenpigfarm.func_23();
			break;
		case 0:
			func_22();
			break;
		case 1:
			func_23();
			break;
		case 2:
			func_24();
			break;
		case 3:
			func_25();
			break;
	}
}

void func_5(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Global_1197721 = iParam0;
}

int func_8()
{
	return Global_1197508->f_1;
}

void func_14()
{
	func_27(Global_1197721);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1197721, 86, 38);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(Global_1197721), 86, "g_mpDMAmbientManagerHostData");
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 != -507840394)
		{
		}
		else
		{
			SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar2, 4);
			if (iVar2 != 180)
			{
			}
			else
			{
				func_29(iVar0);
			}
		}
		iVar0++;
	}
}

int func_20()
{
	return &Global_1197721;
}

void func_22()
{
	if (aggregate.aberdeenpigfarm.func_175(&Global_1197508, 1))
	{
		func_5(1);
	}
}

void func_23()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if ((Global_1197721->f_5[iVar0 /*5*/])->f_1 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Global_1197721->f_3)
	{
		Global_1197721->f_3 = iVar1;
	}
	if (Global_1197508->f_1 == 5)
	{
		Global_1197721->f_1++;
		aggregate.net_deathmatch_ambient_manager.func_7(0);
	}
	if (Global_1197721->f_1 >= 3)
	{
		func_5(2);
		return;
	}
	if (iVar1 >= 3)
	{
		func_5(2);
		return;
	}
	func_31(Global_1197721->f_1);
}

void func_24()
{
	int iVar0;
	int iVar1;

	if (aggregate.aberdeenpigfarm.func_175(&Global_1197508, 2))
	{
		func_5(3);
		return;
	}
	if (Global_1197721->f_2 < 0)
	{
		Global_1197721->f_2 = 0;
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if ((Global_1197721->f_5[iVar0 /*5*/])->f_1 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Global_1197721->f_3)
	{
		Global_1197721->f_3 = iVar1;
	}
	func_32();
	if (Global_1197721->f_1 == -1)
	{
		if (!func_33())
		{
			return;
		}
	}
	if (Global_1197721->f_2 > 0)
	{
		if (func_31(Global_1197721->f_1))
		{
			aggregate.net_deathmatch_ambient_manager.func_7(0);
			Global_1197721->f_1++;
			Global_1197721->f_2 = (Global_1197721->f_2 - 1);
			if (Global_1197721->f_1 >= 16)
			{
				Global_1197721->f_1 = -1;
			}
		}
	}
	else if (iVar1 < 3)
	{
		Global_1197721->f_2++;
	}
}

void func_25()
{
	Global_1197508 = 0;
	func_34();
	func_27(Global_1197721);
	func_5(0);
}

void func_27(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Var0 = -1;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		*(uParam0->f_5[iVar5 /*5*/]) = { Var0 };
		iVar5++;
	}
	uParam0->f_2 = 0;
	uParam0->f_1 = 0;
	uParam0->f_4 = 0;
}

void func_29(int iParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	struct<6> Var14;
	struct<6> Var26;
	struct<5> Var38;

	Var0.f_5 = -1;
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 12))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 5:
			if (!SCRIPTS::IS_THREAD_ACTIVE(&Global_1196787, false))
			{
			}
			else
			{
				iVar12 = NETWORK::_0xB4A25351D79B444C(&Global_1196787);
				if (PLAYER::PLAYER_ID() != iVar12)
				{
				}
				else
				{
					if (_NAMESPACE26::_0xD6F6ACF4392187FB(Var0.f_10))
					{
						if (Var0.f_5 != -1)
						{
							func_35(Var0.f_5, Var0.f_10);
						}
					}
					Jump @886; //curOff = 185
					if (!SCRIPTS::IS_THREAD_ACTIVE(&Global_1196787, false))
					{
					}
					else
					{
						iVar12 = NETWORK::_0xB4A25351D79B444C(&Global_1196787);
						if (PLAYER::PLAYER_ID() != iVar12)
						{
						}
						else
						{
							if (Var0.f_5 != -1)
							{
								if (func_36(Var0.f_5))
								{
									Var14.f_5 = -1;
									Var14.f_4 = 4;
									Var14.f_5 = { Var0.f_5 };
									func_38(&Var14, aggregate.dynamic_craft_scenario.func_194(0, 8));
								}
							}
							Jump @886; //curOff = 286
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							func_39(Var0);
							Jump @886; //curOff = 309
							switch (Global_1197508->f_211)
							{
								case 0:
									return;
								case 2:
									return;
								case 3:
									return;
								case 1:
									Global_1197508->f_206 = { Var0.f_5 };
									aggregate.net_deathmatch_ambient_manager.func_7(2);
									return;
								default:
									break;
							}
							Jump @886; //curOff = 379
							switch (Global_1197508->f_211)
							{
								case 0:
									return;
								case 2:
									return;
								case 3:
									return;
								case 1:
									aggregate.net_deathmatch_ambient_manager.func_7(3);
									return;
								default:
									break;
							}
							Jump @886; //curOff = 435
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (&Global_1197721->f_5[iVar13 /*5*/] != Var0.f_5)
								{
								}
								else
								{
									func_40(iVar13);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 508
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							Var26.f_5 = -1;
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (&Global_1197721->f_5[iVar13 /*5*/] != Var0.f_5)
								{
								}
								else
								{
									Var26.f_4 = 8;
									Var26.f_5 = { *(Global_1197721->f_5[iVar13 /*5*/]) };
									func_38(&Var26, aggregate.dynamic_craft_scenario.func_194(0, 8));
									func_41(iVar13);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 629
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (&Global_1197721->f_5[iVar13 /*5*/] != Var0.f_5)
								{
								}
								else
								{
									func_42(iVar13, Var0.f_11);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 706
							if (Var0.f_5 == Global_1197508->f_206)
							{
								Var38 = -1;
								Global_1197508->f_206 = { Var38 };
								aggregate.net_deathmatch_ambient_manager.func_7(0);
							}
							Jump @886; //curOff = 746
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							if (Var0.f_5 == -1)
							{
								return;
							}
							iVar13 = 0;
							while (iVar13 < 16)
							{
								if (&Global_1197721->f_5[iVar13 /*5*/] != Var0.f_5)
								{
								}
								else
								{
									func_43(iVar13);
								}
								else
								{
									iVar13++;
								}
							}
							Jump @886; //curOff = 819
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							if (aggregate.aberdeenpigfarm.func_175(&Global_1197508, 1))
							{
								return;
							}
							else
							{
								aggregate.aberdeenpigfarm.func_106(Global_1197508, 1);
							}
							Jump @886; //curOff = 860
							if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								return;
							}
							aggregate.aberdeenpigfarm.func_106(Global_1197508, 2);
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_31(int iParam0)
{
	struct<24> Var0;
	int iVar40;
	struct<5> Var41;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	switch (func_8())
	{
		case 0:
			aggregate.net_deathmatch_ambient_manager.func_7(1);
			break;
		case 1:
			aggregate.net_deathmatch_ambient_manager.func_7(2);
			break;
		case 2:
			func_44(&Var0, iParam0);
			aggregate.net_beat_manager.func_109(&Var0);
			if (func_46((*Global_1187677)[&Global_1273882 /*204*/], &Var0, 0, 0, 0, 0, 0))
			{
				aggregate.net_deathmatch_ambient_manager.func_7(3);
			}
			else
			{
				iVar40 = aggregate.net_beat_manager.func_146((*Global_1187677)[&Global_1273882 /*204*/], &Var0);
				if (iVar40 >= 0)
				{
					aggregate.net_ambient_content_evaluator.func_114((*Global_1187677)[&Global_1273882 /*204*/], iVar40);
				}
				aggregate.net_deathmatch_ambient_manager.func_7(4);
			}
			break;
		case 3:
			func_44(&Var0, iParam0);
			if (aggregate.net_beat_manager.func_146((*Global_1187677)[&Global_1273882 /*204*/], &Var0) != -1)
			{
			}
			else
			{
				Var41 = -1;
				Var41 = aggregate.la_alligator.func_69(&(Var0.f_8.f_5));
				if (Var41 == -1)
				{
					aggregate.net_deathmatch_ambient_manager.func_7(4);
				}
				else
				{
					Var41.f_1 = 1;
					*(Global_1197721->f_5[iParam0 /*5*/]) = { Var41 };
					aggregate.net_deathmatch_ambient_manager.func_7(5);
					Jump @647; //curOff = 553
					if (Global_1197721->f_4 <= 0)
					{
						Global_1197721->f_4 = MISC::ABSI(NETWORK::GET_CLOUD_TIME_AS_INT());
					}
					else if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1197721->f_4)) < 30)
					{
					}
					else
					{
						Global_1197721->f_4 = 0;
						aggregate.net_deathmatch_ambient_manager.func_7(1);
						Jump @647; //curOff = 618
						if (&Global_1197721->f_5[iParam0 /*5*/] == -1)
						{
							aggregate.net_deathmatch_ambient_manager.func_7(0);
						}
						else
						{
							return true;
						}
					}
				}
			}
			return false;
			default:
				break;
	}
}

void func_32()
{
	int iVar0;
	bool bVar1;
	struct<15> Var2;
	struct<11> Var17;
	var uVar29;
	int iVar30;

	iVar0 = 0;
	bVar1 = false;
	Var2 = 2;
	Var2.f_1 = -1;
	Var2.f_5 = -1;
	Var2.f_5.f_1 = -1;
	Var2.f_5.f_3 = -1;
	Var2.f_5.f_4 = -1;
	Var2.f_5.f_5 = -1;
	Var2.f_5.f_6 = -1;
	Var2.f_5.f_6.f_1 = -1;
	Var2.f_5.f_9 = 2;
	Var17.f_5 = -1;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if ((Global_1197721->f_5[iVar0 /*5*/])->f_1 != 2)
		{
		}
		else
		{
			if (!aggregate.la_alligator.func_19(&(Global_1197721->f_5[iVar0 /*5*/])))
			{
				func_41(iVar0);
				return;
			}
			Var2 = { aggregate.la_alligator.func_70(&(Global_1197721->f_5[iVar0 /*5*/])) };
			if (Var2.f_5.f_2 == Global_1273882->f_15)
			{
			}
			else
			{
				if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Var2.f_5.f_2))
				{
					bVar1 = true;
				}
				if (!_NAMESPACE26::_0x93A91A351A07360E(Var2.f_5.f_2))
				{
					bVar1 = true;
				}
				if (!_NAMESPACE26::_0x0F99F6436528A089(Var2.f_5.f_2))
				{
					bVar1 = true;
				}
				if ((_NAMESPACE26::_0x4BE6C13A45CCA8EC(Var2.f_5.f_2) <= -1 || _NAMESPACE26::_0x4BE6C13A45CCA8EC(Var2.f_5.f_2) == 255) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(_NAMESPACE26::_0x4BE6C13A45CCA8EC(Var2.f_5.f_2)))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					SCRIPTS::_0xDE544B7EC0C187CC(&uVar29);
					if (SCRIPTS::IS_THREAD_ACTIVE(&Global_1196787, false))
					{
						iVar30 = NETWORK::_0xB4A25351D79B444C(&Global_1196787);
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar30))
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar29, iVar30);
						}
					}
					if (!SCRIPTS::_0x179A6F0EE2E79026(&uVar29))
					{
					}
					else if (MISC::ABSI((&Global_1197807->f_8[iVar0] - NETWORK::GET_CLOUD_TIME_AS_INT())) < 2)
					{
					}
					else
					{
						Global_1197807->f_8[iVar0] = NETWORK::GET_CLOUD_TIME_AS_INT();
						Var17.f_4 = 5;
						Var17.f_5 = { *(Global_1197721->f_5[iVar0 /*5*/]) };
						Var17.f_10 = Global_1273882->f_15;
						func_38(&Var17, uVar29);
						return;
					}
				}
			}
		}
		iVar0++;
	}
	func_52();
}

bool func_33()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if ((Global_1197721->f_5[iVar0 /*5*/])->f_1 != 1)
		{
		}
		else
		{
			Global_1197721->f_1 = iVar0;
			return true;
		}
		iVar0++;
	}
	Global_1197721->f_1 = -1;
	return false;
}

void func_34()
{
	struct<213> Var0;

	Var0.f_2.f_2 = 5;
	Var0.f_2.f_3 = 5;
	Var0.f_2.f_3.f_1 = -1;
	Var0.f_2.f_3.f_1.f_1 = -1;
	Var0.f_2.f_3.f_1.f_2 = -1;
	Var0.f_2.f_3.f_1.f_3 = 255;
	Var0.f_2.f_3.f_1.f_4 = -1;
	Var0.f_2.f_3.f_1.f_5 = -1;
	Var0.f_2.f_3.f_1.f_6 = -1;
	Var0.f_2.f_3.f_1.f_8 = 2;
	Var0.f_2.f_3.f_1.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_2.f_3.f_1.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_2.f_3.f_1.f_40.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_2.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_2.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	Var0.f_206 = -1;
	*Global_1197508 = { Var0 };
}

void func_35(int iParam0, var uParam1)
{
	(Global_1184672->f_231[iParam0 /*15*/])->f_5.f_2 = uParam1;
}

bool func_36(int iParam0)
{
	struct<15> Var0;
	struct<15> Var15;
	int iVar30;
	int iVar31;

	if (!aggregate.la_alligator.func_19(iParam0))
	{
		return false;
	}
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var15 = { *(Global_1184672->f_231[iParam0 /*15*/]) };
	Var0.f_1 = 0;
	*(Global_1184672->f_231[iParam0 /*15*/]) = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1184672->f_13[iVar31] = (&Global_1184672->f_13[iVar31] - 1);
	Global_1184672->f_8[iVar30] = (&Global_1184672->f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1184672->f_18[iVar30] = (&Global_1184672->f_18[iVar30] - 1);
	}
	if (aggregate.net_ambient_content_evaluator.func_169(iParam0))
	{
		Global_1184672->f_23[iVar30] = (&Global_1184672->f_23[iVar30] - 1);
	}
	return true;
}

void func_38(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 180;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 24, &uParam1);
}

void func_39(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	struct<11> Var0;
	int iVar12;
	bool bVar13;
	var uVar14;
	int iVar15;
	int iVar16;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	Var0.f_5 = -1;
	if (Global_1197721->f_3 <= 0)
	{
		Var0.f_4 = 2;
		func_38(&Var0, aggregate.interactive_campfire.func_808(Param0.f_1));
		return;
	}
	iVar12 = 0;
	bVar13 = false;
	iVar12 = 0;
	while (iVar12 < 16)
	{
		if ((Global_1197721->f_5[iVar12 /*5*/])->f_1 != 1)
		{
		}
		else
		{
			Var0.f_5 = { *(Global_1197721->f_5[iVar12 /*5*/]) };
			bVar13 = true;
		}
		else
		{
			iVar12++;
		}
	}
	if (!bVar13)
	{
		Var0.f_4 = 2;
		func_38(&Var0, aggregate.interactive_campfire.func_808(Param0.f_1));
		return;
	}
	(Global_1197721->f_5[iVar12 /*5*/])->f_1 = 2;
	(Global_1197721->f_5[iVar12 /*5*/])->f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Var0.f_4 = 1;
	SCRIPTS::_0x31010318BA9897AC(&uVar14, Param0.f_1);
	func_38(&Var0, uVar14);
	SCRIPTS::_0xDE544B7EC0C187CC(&uVar14);
	iVar15 = _NAMESPACE26::_0x901E0DC25080C8B9(Param0.f_1);
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar15) && _NAMESPACE26::_0x0F99F6436528A089(iVar15))
	{
		Var0.f_10 = iVar15;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(&Global_1196787, false))
	{
		iVar16 = NETWORK::_0xB4A25351D79B444C(&Global_1196787);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar16))
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar14, iVar16);
		}
	}
	Var0.f_4 = 5;
	func_38(&Var0, uVar14);
}

void func_40(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	(Global_1197721->f_5[iParam0 /*5*/])->f_2 = 0;
	(Global_1197721->f_5[iParam0 /*5*/])->f_1 = 1;
}

void func_41(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	(Global_1197721->f_5[iParam0 /*5*/])->f_2 = 0;
	(Global_1197721->f_5[iParam0 /*5*/])->f_1 = 0;
	Global_1197721->f_5[iParam0 /*5*/] = -1;
}

void func_42(int iParam0, bool bParam1)
{
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	(Global_1197721->f_5[iParam0 /*5*/])->f_2 = bParam1;
	if (!bParam1)
	{
		(Global_1197721->f_5[iParam0 /*5*/])->f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_43(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return;
	}
	if ((Global_1197721->f_5[iParam0 /*5*/])->f_2)
	{
		return;
	}
	(Global_1197721->f_5[iParam0 /*5*/])->f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

struct<40> func_44(var uParam0, var uParam1)
{
	struct<40> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	*uParam0 = { Var0 };
	*uParam0 = 1;
	uParam0->f_2 = 6;
	uParam0->f_5 = 0;
	uParam0->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uParam0->f_8 = 3;
	uParam0->f_8.f_1 = 2;
	uParam0->f_8.f_5.f_2 = Global_1273882->f_15;
	uParam0->f_8.f_5.f_5 = uParam1;
	uParam0->f_8.f_5.f_9 = 3;
	return *uParam0;
}

bool func_46(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (aggregate.net_beat_manager.func_144(uParam0))
	{
		return false;
	}
	if (!aggregate.net_ambient_content_evaluator.func_184(&(uParam1->f_8)))
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = PLAYER::PLAYER_ID();
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	iVar0 = aggregate.net_beat_manager.func_146(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return false;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!aggregate.net_beat_manager.func_147(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return false;
			}
			break;
	}
	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	*(uParam0->f_3[iVar1 /*40*/]) = { *uParam1 };
	aggregate.coffee_drinking.func_5(uParam0->f_3[iVar1 /*40*/], 0);
	*uParam0++;
	return true;
}

void func_52()
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7;

	Var0 = -1;
	iVar5 = 0;
	Var7.f_5 = -1;
	iVar5 = 0;
	while (iVar5 < 16)
	{
		Var0 = { *(Global_1197721->f_5[iVar5 /*5*/]) };
		if (Var0 == -1)
		{
		}
		else if (Var0.f_1 != 2)
		{
		}
		else if (func_66(iVar5))
		{
		}
		else
		{
			iVar6 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - Var0.f_4));
			if (iVar6 >= 60)
			{
				aggregate.camera_item.func_77(&Var0, 0);
				Var7.f_4 = 6;
				Var7.f_5 = { Var0 };
				func_38(&Var7, aggregate.dynamic_craft_scenario.func_194(0, 8));
			}
			*(Global_1197721->f_5[iVar5 /*5*/]) = { Var0 };
		}
		iVar5++;
	}
}

void func_56(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 45, 36, &uParam1);
}

bool func_66(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 16)
	{
		return false;
	}
	return (Global_1197721->f_5[iParam0 /*5*/])->f_2;
}

int func_89(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!aggregate.aberdeenpigfarm.func_176(iParam0))
	{
		return 0;
	}
	if (aggregate.annesburg.func_267(iParam0, iParam1, &uVar0))
	{
		aggregate.fme_animal_tagging.func_1399(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

