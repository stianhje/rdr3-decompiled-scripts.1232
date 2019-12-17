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
	int iLocal_13 = 0;
#endregion

void __EntryFunction__()
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	func_1();
	sVar0 = func_3(func_2());
	func_4();
	aggregate.thread_monitor.func_26();
	func_6(0);
	Global_1051202->f_42 = 0;
	bVar1 = false;
	iLocal_13 = 0;
	while ((((func_7() && !aggregate.aberdeenpigfarm.func_49(1, 1)) && !aggregate.binoculars.func_66(4)) && !aggregate.binoculars.func_66(2048)) && func_11(aggregate.long_update.func_411()))
	{
		if (func_12())
		{
			func_13();
			func_14();
			switch (aggregate.dynamic_craft_scenario.func_372())
			{
				case 0:
					if (((aggregate.adlerranch.func_96() && aggregate.net_camp_manager.func_305(PLAYER::PLAYER_ID()) > 2) || !SCRIPTS::IS_THREAD_ACTIVE(&(Global_1051202->f_16[0]), false)) || !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar0, -1, true, 0))
					{
						if (func_18(0) == 0)
						{
							if (!func_19())
							{
							}
							if (func_18(0) != 0)
							{
							}
							aggregate.net_main_online.func_15();
							func_21();
						}
						else if (Global_1051202->f_7 > 0)
						{
							func_22();
						}
					}
					if (Global_1051202->f_11)
					{
					}
					if (func_23())
					{
						func_22();
						aggregate.net_main_online.func_15();
						aggregate.aberdeenpigfarm.func_23();
						func_26();
						func_6(1);
					}
					break;
				case 1:
					if (!func_19())
					{
						aggregate.net_main_online.func_16();
						bVar1 = false;
						func_6(2);
						SCRIPTS::REQUEST_SCRIPT(sVar0);
					}
					else
					{
						func_28();
					}
					break;
				case 2:
					if (aggregate.aberdeenpigfarm.func_123())
					{
						if ((func_30() % 1000) == 0)
						{
						}
					}
					else
					{
						if (!bVar1)
						{
							if (func_30() > Global_1901929->f_541)
							{
								NETWORK::_0x2C4E98DDA475364F("thread_monitor has been waiting on a session end for longer than 2 minutes now.  This is bad.");
								bVar1 = true;
								aggregate.fm_deathmatch_controller.func_798(30, -1);
							}
						}
						if (func_18(0) != 1)
						{
							if (Global_1051202->f_11)
							{
								func_6(3);
							}
						}
						else
						{
							func_22();
							if (Global_1051202->f_7 <= 0)
							{
								if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
								{
									func_6(3);
								}
								else
								{
									func_6(4);
								}
							}
							else
							{
								if (func_18(0) != 0)
								{
								}
								func_22();
							}
						}
					}
					break;
				case 3:
					if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						if (!bVar1)
						{
							if (func_30() > Global_1901929->f_541)
							{
								NETWORK::_0x2C4E98DDA475364F("thread_monitor has been waiting on NETWORK_IS_GAME_IN_PROGRESS for longer than 2 minutes now.  This is bad.");
								bVar1 = true;
								aggregate.fm_deathmatch_controller.func_798(30, -1);
							}
						}
					}
					else
					{
						func_6(4);
					}
					break;
				case 4:
					if (SCRIPTS::DOES_SCRIPT_EXIST(sVar0))
					{
						SCRIPTS::REQUEST_SCRIPT(sVar0);
						if (SCRIPTS::HAS_SCRIPT_LOADED(sVar0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6000) > 0)
						{
							if (Global_1051202->f_42)
							{
								func_32(1);
								aggregate.annesburg.func_112(1, 1);
								Global_1051202->f_42 = 0;
							}
							func_34();
							Global_1051202->f_16[0] = SCRIPTS::START_NEW_SCRIPT(sVar0, 6000);
							SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
							func_35();
							func_6(0);
							aggregate.net_main_online.func_16();
							if (Global_1051202->f_11)
							{
								Global_1051202->f_11 = 0;
							}
							aggregate.net_main_online.func_16();
						}
					}
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
	if (aggregate.binoculars.func_66(2048))
	{
	}
	else if (aggregate.binoculars.func_66(4))
	{
	}
	else if (!func_11(aggregate.long_update.func_411()))
	{
	}
	else if (!func_11(aggregate.mp_intro.func_504()))
	{
	}
	else
	{
		func_6(5);
		CAM::DO_SCREEN_FADE_OUT(0);
		bVar3 = false;
		while (!bVar3)
		{
			switch (aggregate.dynamic_craft_scenario.func_372())
			{
				case 5:
					iVar2 = MISC::_GET_SYSTEM_TIME();
					NETWORK::_0x7AC752103856FB20(false);
					func_6(6);
					break;
				case 6:
					if ((MISC::_GET_SYSTEM_TIME() - iVar2) > 1000)
					{
						func_6(7);
						if (!CAM::IS_SCREEN_FADING_OUT() || !CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(0);
						}
					}
					break;
				case 7:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						aggregate.fm_deathmatch_controller.func_798(iLocal_13, -1);
						bVar3 = true;
					}
					else if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					break;
			}
			BUILTIN::WAIT(0);
		}
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		NETWORK::_NETWORK_SESSION_LEAVE();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		PLAYER::FORCE_CLEANUP(2);
	}
	aggregate.startup.func_22(2048);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::_0xB711EB4BC8D06013();
	func_39(Global_1051202);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

int func_2()
{
	return Global_1572887->f_14;
}

char* func_3(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "net_main_tlg_online";
		default:
			break;
	}
	return "net_main_online";
	return "net_main_online";
}

void func_4()
{
	if (!Global_1051202->f_9)
	{
	}
	Global_1051202->f_9 = 1;
}

void func_6(int iParam0)
{
	Global_1051202->f_12 = iParam0;
	aggregate.net_main_offline.func_1(func_40(Global_1051202->f_12));
}

bool func_7()
{
	iLocal_13 = 0;
	if (func_42(1976253964))
	{
	}
	else if (func_42(1355399116))
	{
	}
	else if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	else if (Global_1572887->f_11)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((aggregate.binoculars.func_66(4) || aggregate.binoculars.func_66(2048)) || !func_11(aggregate.long_update.func_411()))
			{
				iLocal_13 = 0;
			}
			else
			{
				iLocal_13 = 24;
			}
		}
	}
	return true;
}

bool func_11(int iParam0)
{
	if (iParam0 == 3)
	{
		return true;
	}
	if (iParam0 == 4)
	{
		return true;
	}
	return false;
}

bool func_12()
{
	return Global_1051202->f_9;
}

void func_13()
{
	char cVar0[64];
	int iVar8;
	int iVar9;

	func_43();
	if (Global_1051202->f_7 > 0)
	{
		StringCopy(&cVar0, "", 64);
		iVar9 = 0;
		iVar9 = 0;
		while (iVar9 <= (Global_1051202->f_7 - 1))
		{
			iVar8 = func_18(iVar9);
			if (iVar8 == 0)
			{
				StringConCat(&cVar0, "S", 64);
			}
			else if (iVar8 == 1)
			{
				StringConCat(&cVar0, "E", 64);
			}
			else if (iVar8 == -1)
			{
				StringConCat(&cVar0, "N", 64);
			}
			iVar9++;
		}
	}
}

void func_14()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		switch (SCRIPTS::_0x54AE4FDEEFEAB77E())
		{
			case 2:
				aggregate.net_main_online.func_15();
				break;
			case 0:
				break;
			case 1:
				break;
			case 4:
				break;
			case 3:
				break;
		}
	}
}

int func_18(int iParam0)
{
	var uVar0;

	uVar0 = func_44(iParam0);
	return uVar0;
}

bool func_19()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (&Global_1051202->f_16[iVar0] != 0)
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[iVar0])))
			{
				iVar1 = 1;
			}
			else
			{
				Global_1051202->f_16[iVar0] = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_21()
{
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1051202->f_35))
	{
		SCRIPTS::TERMINATE_THREAD(Global_1051202->f_35);
	}
}

var func_22()
{
	var uVar0;
	var uVar1;
	int iVar2;

	if (Global_1051202->f_7 <= 0)
	{
		uVar0 = -1;
		return uVar0;
	}
	uVar1 = func_44(0);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		(*Global_1051202)[iVar2] = Global_1051202[iVar2 + 1];
		iVar2++;
	}
	func_45();
	return uVar1;
}

bool func_23()
{
	return (Global_1051202->f_10 || Global_1051202->f_11);
}

void func_26()
{
	Global_1051202->f_38 = MISC::_GET_SYSTEM_TIME();
}

void func_28()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	bVar1 = false;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (&Global_1051202->f_16[iVar0] != 0)
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[iVar0])))
			{
				SCRIPTS::_0xD92FA81B64920E85(&(Global_1051202->f_16[iVar0]), &bVar1, &bVar2);
				if (bVar1)
				{
					if (!SCRIPTS::_0x30BED53646C86D11(&(Global_1051202->f_16[iVar0])))
					{
						SCRIPTS::_0x7DE4643157AD646C(&(Global_1051202->f_16[iVar0]));
					}
				}
				else if (bVar2)
				{
				}
			}
			else
			{
				Global_1051202->f_16[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

int func_30()
{
	return (MISC::_GET_SYSTEM_TIME() - Global_1051202->f_38);
}

void func_32(bool bParam0)
{
	if (!bParam0)
	{
		aggregate.annesburg.func_182(2);
	}
	else
	{
		aggregate.annesburg.func_182(2);
		PLAYER::_0x2C2D287748E8E9B7(0);
	}
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (&Global_1051202->f_16[iVar0] != 0)
		{
			if (SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[iVar0])))
			{
			}
			Global_1051202->f_16[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_35()
{
	Global_1572887->f_8 = 0;
	aggregate.net_main_offline.func_612();
}

void func_39(var uParam0)
{
	struct<182> Var0;

	Var0 = 6;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_1.f_1.f_1.f_1 = -1;
	Var0.f_9 = 1;
	Var0.f_16 = 18;
	Var0.f_43.f_2 = 32;
	Var0.f_78 = 10;
	*uParam0 = { Var0 };
}

char* func_40(int iParam0)
{
	char* sVar0;

	sVar0 = "invalid";
	switch (iParam0)
	{
		case 0:
			sVar0 = "MPTM_RUNNING";
			break;
		case 1:
			sVar0 = "MPTM_SHUTDOWN";
			break;
		case 2:
			sVar0 = "MPTM_DEAD";
			break;
		case 3:
			sVar0 = "MPTM_WAIT_TO_REBOOT";
			break;
		case 4:
			sVar0 = "MPTM_REBOOT";
			break;
		case 5:
			sVar0 = "MPTM_MP_BAIL";
			break;
		case 6:
			sVar0 = "MPTM_FADE_OUT";
			break;
		case 7:
			sVar0 = "MPTM_EXIT";
			break;
	}
	return sVar0;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return SCRIPTS::GET_EVENT_EXISTS(1, iParam0);
}

void func_43()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -857756425:
				func_59();
				if (SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar1, 1))
				{
					switch (iVar1)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							break;
						case 3:
							Global_1051202->f_42 = 1;
							break;
						case 4:
							break;
						case 5:
							break;
						case 7:
							break;
					}
				}
				break;
			case -2119801478:
				func_60();
				if (SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar1, 1))
				{
					switch (iVar1)
					{
						case 0:
							break;
						case 1:
							break;
						case 2:
							break;
						case 3:
							break;
						case 4:
							break;
						case 5:
							break;
						case 7:
							break;
					}
				}
				break;
		}
		iVar0++;
	}
}

var func_44(int iParam0)
{
	var uVar0;

	if (Global_1051202->f_7 <= 0)
	{
		uVar0 = -1;
		return uVar0;
	}
	return Global_1051202[iParam0];
}

void func_45()
{
	Global_1051202->f_7 = (Global_1051202->f_7 - 1);
	if (Global_1051202->f_7 < 0)
	{
		Global_1051202->f_7 = 0;
	}
}

void func_59()
{
	if (Global_1051202->f_7 >= 6)
	{
		return;
	}
	if (Global_1051202->f_7 > 0)
	{
		if (Global_1051202[(Global_1051202->f_7 - 1)] == 0)
		{
			return;
		}
	}
	(*Global_1051202)[Global_1051202->f_7] = 0;
	func_69();
}

void func_60()
{
	if (Global_1051202->f_7 >= 6)
	{
		return;
	}
	if (Global_1051202->f_7 > 0)
	{
		if (Global_1051202[(Global_1051202->f_7 - 1)] == 1)
		{
			return;
		}
	}
	(*Global_1051202)[Global_1051202->f_7] = 1;
	func_69();
}

void func_69()
{
	Global_1051202->f_7++;
	if (Global_1051202->f_7 > 6)
	{
		Global_1051202->f_7 = 6;
	}
}

