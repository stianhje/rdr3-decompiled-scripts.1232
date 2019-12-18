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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	bVar0 = false;
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && !bVar0)
	{
		func_2();
		func_3();
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	var uVar0;

	Global_1939221->f_1433.f_4174.f_10 = uVar0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	if (func_4())
	{
		Global_1939221->f_1433.f_4174.f_2088 = 1;
	}
	else if (Global_1939221->f_1433.f_4174.f_2088)
	{
		func_5(Global_1939221->f_1433.f_4174.f_10);
		Global_1939221->f_1433.f_4174.f_2088 = 0;
	}
}

void func_3()
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	struct<34> Var6;
	vector3 vVar40;
	bool bVar43;

	iVar4 = joaat("abilities");
	Var6.f_7 = 1;
	Var6.f_13 = -1;
	Var6.f_15 = -1;
	Var6.f_16 = -1;
	Var6.f_17 = -1;
	Var6.f_18 = -1;
	Var6.f_19 = -1;
	Var6.f_32 = -1;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar4))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar4, &Var0))
		{
			switch (Var0)
			{
				case -2075827635:
					switch (Var0.f_2)
					{
						case -1218139183:
							aggregate_func_3821(PLAYER::PLAYER_ID(), 1);
							if (!UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("abilities"), -700246597))
							{
								UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("abilities"), joaat("exit"));
							}
							break;
						case -1546234005:
							aggregate_func_3821(func_7(), 1);
							if (!UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("abilities"), -700246597))
							{
								UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(joaat("abilities"), joaat("exit"));
							}
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case -1559642356:
							Global_1939221->f_1433.f_4174.f_10 = Var0.f_3;
							func_5(Var0.f_3);
							break;
						case -1895040713:
							func_8(Var0.f_3);
							break;
						case -273357828:
							func_9(Var0.f_3);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case 703281244:
					switch (Var0.f_2)
					{
						case -27281482:
							func_10(1);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -722926211:
					switch (Var0.f_2)
					{
						case -27281482:
							func_10(-1);
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 536653807:
							func_11(Var0.f_3, &Var6, 2, -1);
							aggregate_func_3822(&Var6);
							break;
						case 473608166:
							iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var0.f_3, "ability_card_loadout_index");
							aggregate_func_3823(iVar5);
							break;
						case 928621134:
							iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var0.f_3, "ability_card_loadout_index");
							func_14(iVar5);
							break;
						case -1636950965:
							func_11(Var0.f_3, &Var6, 2, -1);
							func_16(Var6, aggregate_func_6151());
							break;
						case 85169314:
							func_11(Var0.f_3, &Var6, 2, -1);
							if (Var6.f_26)
							{
								vVar40.f_2 = Var6.f_28;
							}
							else if (Var6.f_27)
							{
								vVar40.f_2 = Var6.f_28;
							}
							else if (Var6.f_29)
							{
								vVar40.f_2 = -915411861;
							}
							else if (Var6.f_30)
							{
								vVar40.f_2 = -570078785;
							}
						else
						{
							}
							else if (!aggregate_func_4985(vVar40.z))
							{
								vVar40.f_1 = aggregate_func_5524(Var6.f_2, vVar40.z);
								if (vVar40.y <= 0)
								{
								}
								else
								{
									vVar40.x = Var6;
									func_19(aggregate_func_6151(), 1, vVar40);
									Jump @797; //curOff = 678
									func_11(Var0.f_3, &Var6, 2, -1);
									if (Var6.f_23)
									{
										vVar40.f_2 = -489628648;
									}
									else if (Var6.f_24)
									{
										vVar40.f_2 = -570078785;
									}
								else
								{
									}
									else
									{
										bVar43 = aggregate_func_4582(aggregate_func_2438(Var6) + 1);
										vVar40.f_1 = aggregate_func_5524(bVar43, vVar40.z);
										if (vVar40.y <= 0)
										{
										}
										else
										{
											vVar40.x = Var6;
											func_19(aggregate_func_6151(), 2, vVar40);
										}
									}
								}
								UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
								Jump @815; //curOff = 803
								UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar4);
							}
							default:
								break;
					}
					default:
						break;
			}
		}
	}
}

bool func_4()
{
	if (Global_1939057->f_102 != -1)
	{
		return true;
	}
	if (Global_1939057->f_102.f_2 != -1)
	{
		return true;
	}
	return HUD::BUSYSPINNER_IS_ON();
}

void func_5(int iParam0)
{
	struct<34> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_11(iParam0, &Var0, 2, -1);
	aggregate_func_31(Global_1939221->f_1433.f_4174.f_37[aggregate_func_5410(Var0, 1) /*44*/], &Var0);
	aggregate_func_775(&(Global_1939221->f_1433.f_4174.f_1936), Var0);
	aggregate_func_4444(Var0);
	aggregate_func_1215(Var0);
}

int func_7()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1939221->f_1433.f_8));
	if (!func_30())
	{
		return PLAYER::PLAYER_ID();
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return PLAYER::PLAYER_ID();
	}
	iVar1 = iVar0;
	if (iVar1 < 0)
	{
		return PLAYER::PLAYER_ID();
	}
	if (iVar1 >= 32)
	{
		return PLAYER::PLAYER_ID();
	}
	return iVar0;
}

void func_8(int iParam0)
{
	struct<34> Var0;
	int iVar34;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar34 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "ability_card_loadout_index");
	aggregate_func_6630(iVar34);
	func_11(iParam0, &Var0, 2, -1);
	aggregate_func_5430(&(Global_1939221->f_1433.f_4174.f_1985), Var0, iVar34);
	aggregate_func_4444(Var0);
	aggregate_func_1215(Var0);
}

void func_9(int iParam0)
{
	int iVar0;
	struct<34> Var1;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "ability_card_upgrade_tier_index");
	Var1.f_7 = 1;
	Var1.f_13 = -1;
	Var1.f_15 = -1;
	Var1.f_16 = -1;
	Var1.f_17 = -1;
	Var1.f_18 = -1;
	Var1.f_19 = -1;
	Var1.f_32 = -1;
	func_11(iParam0, &Var1, 2, iVar0);
	aggregate_func_5444(Global_1939221->f_1433.f_4174.f_1797[iVar0 /*46*/], Var1);
	aggregate_func_1178(&(Global_1939221->f_1433.f_4174.f_2034), Var1);
	aggregate_func_4444(iVar0);
	aggregate_func_1215(Var1);
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1939221->f_1433.f_4174.f_2085;
	if (iVar0 == joaat("deadeye"))
	{
		return 0;
	}
	iVar1 = func_35(Global_1939221->f_1433.f_4174.f_2085, 1);
	iVar2 = (iVar1 + iParam0);
	if (iVar2 < 2)
	{
		iVar2 = 4;
	}
	else if (iVar2 > 4)
	{
		iVar2 = 2;
	}
	iVar0 = aggregate_func_8233(iVar2, 1);
	aggregate_func_1389(iVar0, 0);
	return 1;
}

void func_11(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_38(iParam0, uParam1);
	aggregate_func_5601(*uParam1, uParam1, iParam2, iParam3);
}

int func_14(int iParam0)
{
	vector3 vVar0;

	vVar0.x = aggregate_func_7250(iParam0, 1);
	return func_19(iParam0, 3, vVar0);
}

int func_16(var uParam0, int iParam1)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	return func_19(iParam1, 0, vVar0);
}

int func_19(int iParam0, int iParam1, vector3 vParam2)
{
	struct<15> Var0;

	if (aggregate_func_8206(iParam0))
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0 = iParam1;
	Var0.f_2 = { vParam2 };
	Var0.f_1 = 0;
	*(Global_1131373->f_5351.f_52[iParam0 /*15*/]) = { Var0 };
	return 1;
}

bool func_30()
{
	return NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1939221->f_1433.f_8));
}

int func_35(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1794176813:
			return 4;
		case 0:
			return 0;
		case joaat("deadeye"):
			return 1;
		case joaat("recovery"):
			return 3;
		case joaat("combat"):
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_38(int iParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, "ability_card_ability_hash");
	uParam1->f_13 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "ability_card_tier");
}

