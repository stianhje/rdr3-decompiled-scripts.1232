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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	char* sLocal_30 = NULL;
	char* sLocal_31 = NULL;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_30 = "props_misc@campfires@5_logs";
	sLocal_31 = "Script_PropCampfire";
	uLocal_33 = uLocal_33;
	aggregate_func_1328("START THREAD");
	iVar0 = MISC::GET_GAME_TIMER();
	func_2();
	func_3();
	aggregate_func_1328("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - before");
	if (aggregate_func_5174(33554432))
	{
		aggregate_func_5122(33554432);
		aggregate_func_6913();
	}
	aggregate_func_1328("NETWORK_CACHE_MATCHMAKING_GLOBAL_DATA - after");
	aggregate_func_1328("Main loop start");
	if (!aggregate_func_523(0, 0))
	{
		func_8();
		aggregate_func_3719();
	}
	while (!aggregate_func_523(0, 0))
	{
		func_10();
		switch (aggregate_func_7777(PLAYER::PLAYER_ID()))
		{
			case 0:
				if (func_12() > 0)
				{
					if (aggregate_func_6953() && func_14())
					{
						aggregate_func_7841();
					}
					else if (Global_1572887->f_106.f_9 == -1 && Global_1572887->f_106.f_13 != 3)
					{
						aggregate_func_8560();
					}
					else if (Global_1572887->f_106.f_9 == -1 && Global_1572887->f_106.f_13 == 3)
					{
						aggregate_func_7841();
					}
					else if (aggregate_func_7127())
					{
						aggregate_func_8560();
					}
					else if (!aggregate_func_4255(Global_1572887->f_106.f_11))
					{
						aggregate_func_7841();
					}
					else
					{
						switch (aggregate_func_4376(Global_1572887->f_106.f_11))
						{
							case -1450443819:
							case -1084413800:
							case -994383356: /* GXTEntry: "Red Dead Online Mission - Intro Blackwater" */
							case -647435344:
							case -233421195: /* GXTEntry: "Red Dead Online Mission - Intro Tumbleweed" */
							case 322803854:
							case 397994890:
							case 765518144: /* GXTEntry: "Red Dead Online Mission - Intro Rhodes" */
							case 840529594: /* GXTEntry: "Red Dead Online Mission - Intro Valentine" */
							case 943006457:
							case 1852077510:
							case 2018479297:
								aggregate_func_8560();
								break;
							default:
								aggregate_func_7841();
								break;
						}
					}
					aggregate_func_8172(1);
					if (!aggregate_func_4345())
					{
						func_22(1);
					}
					else
					{
						func_22(2);
					}
				}
				break;
			case 1:
				if (aggregate_func_7737() != joaat("freeroam"))
				{
				}
				else
				{
					aggregate_func_3680();
				}
				func_22(2);
				break;
			case 2:
				if (func_25())
				{
					func_22(3);
				}
				break;
			case 3:
				if (aggregate_func_4345())
				{
					func_22(7);
				}
				else if (aggregate_func_7737() == 1495295997 && !aggregate_func_4345())
				{
					func_22(6);
				}
				else if (aggregate_func_7737() == -1330461529 && !aggregate_func_4345())
				{
					func_22(6);
				}
				else if (!aggregate_func_2820())
				{
					func_22(6);
				}
				else
				{
					func_22(4);
				}
				break;
			case 4:
				switch (func_27(uLocal_34))
				{
					case 0:
						break;
					case 1:
						break;
					case 2:
						break;
					case 4:
						aggregate_func_6978(32);
						break;
					case 3:
						func_22(5);
						break;
					case 5:
						func_22(5);
						break;
				}
				break;
			case 5:
				if (aggregate_func_6953())
				{
					if (func_29())
					{
						func_22(6);
					}
				}
				else
				{
					func_22(6);
				}
				break;
			case 6:
				func_30();
				func_22(7);
				break;
			case 7:
				func_31();
				func_32();
				func_33();
				aggregate_func_4093(1);
				aggregate_func_4241(&(((*Global_1055965)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_153.f_10), 1);
				func_22(8);
				break;
			case 8:
				func_36(&uLocal_32);
				func_37();
				func_38();
				break;
			case 9:
				aggregate_func_4264();
				aggregate_func_4943();
				if (NETWORK::NETWORK_CAN_SESSION_END() && NETWORK::NETWORK_IS_SESSION_STARTED())
				{
					PLAYER::FORCE_CLEANUP(523);
					NETWORK::_NETWORK_SESSION_LEAVE();
				}
				break;
			default:
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_12())
			{
				case 0:
					func_41(8);
					break;
				case 8:
					func_42();
					func_43("MP_GAME_STATE_MAIN_UPDATE", 8);
					break;
				case 9:
					break;
			}
		}
		BUILTIN::WAIT(0);
	}
	aggregate_func_4264();
	aggregate_func_4943();
	func_44();
	while (func_45())
	{
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	aggregate_func_2819();
}

void func_2()
{
	SCRIPTS::REQUEST_SCRIPT("net_train_manager");
	SCRIPTS::REQUEST_SCRIPT("net_fme_manager");
	SCRIPTS::REQUEST_SCRIPT("net_gangfeud_manager");
	SCRIPTS::REQUEST_SCRIPT("net_ugc_global_loader");
	SCRIPTS::REQUEST_SCRIPT("generic_show_mp_manager");
	SCRIPTS::REQUEST_SCRIPT("net_camp_manager");
	SCRIPTS::REQUEST_SCRIPT("net_camp_dog_manager");
	SCRIPTS::REQUEST_SCRIPT("net_ace_thread_manager");
	SCRIPTS::REQUEST_SCRIPT("net_fetch_manager");
	SCRIPTS::REQUEST_SCRIPT("net_crew_manager");
	SCRIPTS::REQUEST_SCRIPT("net_beat_manager");
	SCRIPTS::REQUEST_SCRIPT("net_scan_manager");
}

void func_3()
{
	aggregate_func_1328("NET_MAIN_ONLINE__PROCESS_PRE_GAME - start");
	aggregate_func_7014();
	aggregate_func_7014();
	aggregate_func_7014();
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	aggregate_func_306();
	if (aggregate_func_2318())
	{
	}
	aggregate_func_1328("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - before");
	func_52();
	aggregate_func_1328("PROCESS_PRE_GAME_BROADCAST_ARRAY_REGISTRATION - after");
	aggregate_func_453(0);
	aggregate_func_1328("WAIT_FOR_FIRST_NETWORK_BROADCAST");
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
	if (!aggregate_func_4345())
	{
		aggregate_func_4264();
	}
	func_22(0);
	func_55();
	Global_1051202->f_13 = 0;
	func_56();
	Global_1051165->f_36 = 0;
	aggregate_func_1328("NET_MAIN_ONLINE__PROCESS_PRE_GAME - end");
}

void func_8()
{
	aggregate_func_4094();
	aggregate_func_1034(-1, 0, 1);
	func_62();
	if ((aggregate_func_7518(1464020707) || aggregate_func_7518(1098974047)) || aggregate_func_7518(868706284))
	{
		Global_1099293->f_646.f_5 = 1;
	}
}

void func_10()
{
	func_64();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (Global_1055965[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/] < 7)
		{
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
	}
	aggregate_func_4094();
	func_65();
}

int func_12()
{
	return &Global_1070354;
}

bool func_14()
{
	struct<11> Var0;
	int iVar11;
	int iVar12;

	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0 = { aggregate_func_9286() };
	iVar11 = func_67();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar11))
	{
		iVar12 = iVar11;
		Var0.f_10 = aggregate_func_6706(iVar12);
		Var0 = aggregate_func_9287(iVar12);
		Var0.f_1 = aggregate_func_6706(iVar12);
		Var0.f_2 = aggregate_func_6706(iVar12);
		Var0.f_3 = { aggregate_func_9288(iVar12) };
	}
	if (Var0.f_3 == 6)
	{
		return false;
	}
	if (!aggregate_func_4240(Var0.f_10, 4))
	{
		return false;
	}
	switch (Var0)
	{
		case 2:
			if (aggregate_func_7117(iVar11, 4096))
			{
				return false;
			}
			break;
		case 0:
			if (Var0.f_1 >= 34 && Var0.f_1 <= 42)
			{
				return false;
			}
			break;
	}
	return true;
}

void func_22(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255 || iVar0 >= 32)
	{
	}
	else
	{
		(*Global_1055965)[iVar0 /*436*/] = iParam0;
		((*Global_1055965)[iVar0 /*436*/])->f_1++;
		aggregate_func_1328(func_86(Global_1055965[iVar0 /*436*/]));
	}
}

bool func_25()
{
	bool bVar0;

	bVar0 = false;
	if (func_87(1))
	{
		if (func_88("net_train_manager", 3, 1024))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 1);
		}
		bVar0 = true;
	}
	if (func_87(2))
	{
		if (func_88("net_fme_manager", 4, 1024))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 2);
		}
		bVar0 = true;
	}
	if (func_87(32))
	{
		if (func_88("net_gangfeud_manager", 8, 1024))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 32);
		}
		bVar0 = true;
	}
	if (func_87(4))
	{
		if (func_88("net_ugc_global_loader", 5, 3088))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 4);
		}
		bVar0 = true;
	}
	if (func_87(2048))
	{
		if (func_88("generic_show_mp_manager", 14, 1024))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 2048);
		}
		bVar0 = true;
	}
	if (func_87(64))
	{
		if (func_88("net_camp_manager", 9, 1024))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 64);
		}
		bVar0 = true;
	}
	if (func_87(128))
	{
		if (func_88("net_camp_dog_manager", 10, 1024))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 128);
		}
		bVar0 = true;
	}
	if (func_87(256))
	{
		if (func_88("net_ace_thread_manager", 11, 1024))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 256);
		}
		bVar0 = true;
	}
	if (func_87(512))
	{
		if (func_88("net_fetch_manager", 12, 2050))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 512);
		}
		bVar0 = true;
	}
	if (func_87(1024))
	{
		if (func_88("net_crew_manager", 13, 1024))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 1024);
		}
		bVar0 = true;
	}
	if (func_87(4096))
	{
		if (func_88("net_beat_manager", 15, 3500))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 4096);
		}
		bVar0 = true;
	}
	if (func_87(8192))
	{
		if (func_88("net_scan_manager", 16, 512))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 8192);
		}
		bVar0 = true;
	}
	if (func_87(16384))
	{
		if (func_88("net_moonshine_manager", 17, 1024))
		{
			aggregate_func_4241(&(Global_1051202->f_13), 16384);
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

int func_27(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(PLAYER::PLAYER_ID());
	switch (Global_1124870->f_1890)
	{
		case 1:
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
			{
			}
			else
			{
				vVar1 = { aggregate_func_7635() };
				if (vVar1.z != 0)
				{
					if (aggregate_func_2991(64))
					{
						vVar1.f_2 = -2;
					}
					if (aggregate_func_682(Global_1273882->f_15))
					{
						func_92(vVar1);
					}
					else
					{
						func_92(vVar1);
					}
					aggregate_func_9020(2);
				}
				else
				{
					aggregate_func_9020(4);
				}
				Jump @234; //curOff = 141
				if ((((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_3 != -1 && (Global_1123778->f_865[iVar0 /*7*/])->f_4 == ((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_3) && &Global_1123778->f_865[iVar0 /*7*/] == 6)
				{
					aggregate_func_9020(3);
					return 3;
				}
				Jump @234; //curOff = 223
				aggregate_func_9020(3);
			}
			if (Global_1124870->f_1913 == 0)
			{
				Global_1124870->f_1913 = MISC::_GET_SYSTEM_TIME();
			}
			else if ((MISC::_GET_SYSTEM_TIME() - Global_1124870->f_1913) >= Global_1901929->f_542.f_2)
			{
				return 5;
			}
			return func_94();
			default:
				break;
	}
}

bool func_29()
{
	return Global_1572887->f_248 > 19;
}

void func_30()
{
	float fVar0;
	struct<18> Var1;
	struct<7> Var31;

	fVar0 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	aggregate_func_2616(0);
	Global_1099293->f_262 = 1;
	if (((aggregate_func_4268(Global_17173.f_54.f_1) || aggregate_func_3311(Global_17173.f_54.f_1) == -1) || aggregate_func_3311(Global_17173.f_54.f_1) == 8) || aggregate_func_4441(Global_17173.f_54) == 8)
	{
		if (!aggregate_func_1676(&(Global_17173.f_54.f_1), &fVar0, 0))
		{
			Global_17173.f_54.f_1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
			fVar0 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
		}
		Global_17173.f_54 = aggregate_func_3339(Global_17173.f_54.f_1, 1);
	}
	if (aggregate_func_7737() == -1330461529)
	{
		aggregate_func_5070(1);
		aggregate_func_8707(1);
		aggregate_func_2435(122, 0);
	}
	else if (aggregate_func_7737() == 1495295997)
	{
		aggregate_func_5070(1);
		aggregate_func_8707(1);
	}
	else if (aggregate_func_2820())
	{
		if (aggregate_func_7518(-159568751))
		{
			func_105(1);
		}
		else
		{
			aggregate_func_7815(1, 1);
		}
		if (NETWORK::_0xFC4165C9165C166F() || aggregate_func_6953())
		{
			aggregate_func_7218(64);
			aggregate_func_7218(256);
		}
		else if (Global_1572887->f_387.f_3 != -1)
		{
			aggregate_func_2435(Global_1572887->f_387.f_3, 0);
			aggregate_func_9027();
		}
		else if (Global_1572887->f_387.f_4 != -1)
		{
			aggregate_func_2435(Global_1099293->f_25, 0);
			aggregate_func_9027();
		}
		else if (Global_1572887->f_387.f_5 != -1)
		{
			aggregate_func_2435(Global_1099293->f_25, 0);
			aggregate_func_9027();
		}
		else if ((aggregate_func_7518(1464020707) || aggregate_func_7518(1098974047)) || aggregate_func_7518(868706284))
		{
			aggregate_func_1296(&(Global_1099293->f_646.f_6), &(Global_1099293->f_646.f_36), 1, 1, 1);
			if (Global_1099293->f_646.f_45)
			{
				func_110();
			}
			if (Global_1099293->f_646.f_46)
			{
				aggregate_func_5403(1, 0);
			}
			Global_1099293->f_646.f_5 = 0;
			Global_1099293->f_646 = 0;
		}
		else if (aggregate_func_7518(-1879562593))
		{
			func_112(1);
			aggregate_func_7797();
			aggregate_func_7815(0, -1);
			func_105(0);
		}
		else if (aggregate_func_7518(1890312850))
		{
			func_114(1);
			aggregate_func_7797();
			aggregate_func_7815(0, -1);
			func_105(0);
		}
		else if (aggregate_func_7518(2134863183))
		{
			aggregate_func_7797();
			aggregate_func_7815(0, -1);
			func_105(0);
		}
		else if (aggregate_func_7518(-11301188))
		{
			aggregate_func_2435(Global_1099293->f_25, 0);
			aggregate_func_9027();
		}
		else if (aggregate_func_7518(-1312679892))
		{
			aggregate_func_2435(Global_17173.f_54, 0);
			aggregate_func_9027();
		}
		else if (aggregate_func_7518(-61119924))
		{
			aggregate_func_1309(Global_17173.f_54.f_1, fVar0, -1f, 75f, 1, 1, 1);
			aggregate_func_9027();
		}
		else if (aggregate_func_7518(-110687166) && func_116())
		{
			func_117();
		}
		else if (aggregate_func_7518(1737952409) && func_116())
		{
			func_117();
		}
		else if (aggregate_func_7518(2137301164) && func_116())
		{
			func_117();
		}
		else if (aggregate_func_7518(-1808811965))
		{
			if (BUILTIN::VDIST(aggregate_func_8561(1), 0f, 0f, 0f) < 2f)
			{
				aggregate_func_1309(Global_17173.f_54.f_1, fVar0, -1f, 75f, 1, 1, 1);
			}
			else
			{
				aggregate_func_4589(&Var1);
				aggregate_func_4443(&Var31);
				Var1.f_17.f_9 = -432403087;
				Var1.f_17.f_6 = { aggregate_func_8561(1) };
				Var1.f_17 = { 30f, 30f, 50f };
				Var1.f_16 = 1;
				Var1.f_6 = { Var1.f_17 };
				Var1.f_6 = { 1.5f, 1.5f, 5f };
				Var1.f_1 = { Var1.f_17.f_6 };
				Var1.f_5 = 2;
				Var31.f_5 = 1;
				if (!aggregate_func_1676(&(Var31.f_6), &Var31, 0))
				{
					Var31.f_6 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
					Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
				}
				aggregate_func_1296(&Var1, &Var31, 1, 1, 1);
				func_110();
			}
		}
		else if (aggregate_func_7518(-1854341522))
		{
			aggregate_func_4589(&Var1);
			aggregate_func_4443(&Var31);
			Var1.f_17.f_9 = -432403087;
			Var1.f_17.f_6 = { aggregate_func_1852(Global_17173.f_54.f_1, -471827042) };
			Var1.f_17 = { 30f, 30f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!aggregate_func_1676(&(Var31.f_6), &Var31, 0))
			{
				Var31.f_6 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			aggregate_func_1296(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (aggregate_func_7518(313296873))
		{
			aggregate_func_4589(&Var1);
			aggregate_func_4443(&Var31);
			Var1.f_17.f_9 = -432403087;
			if (aggregate_func_8562(3, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -1723.073f, -430.4347f, 151.0119f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 20f, 20f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!aggregate_func_1676(&(Var31.f_6), &Var31, 0))
			{
				Var31.f_6 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			aggregate_func_1296(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (aggregate_func_7518(541270806))
		{
			aggregate_func_4589(&Var1);
			aggregate_func_4443(&Var31);
			Var1.f_17.f_9 = -432403087;
			if (aggregate_func_8562(4, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -1723.073f, -430.4347f, 151.0119f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 20f, 20f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!aggregate_func_1676(&(Var31.f_6), &Var31, 0))
			{
				Var31.f_6 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			aggregate_func_1296(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (aggregate_func_7518(922800273))
		{
			aggregate_func_4589(&Var1);
			aggregate_func_4443(&Var31);
			Var1.f_17.f_9 = -432403087;
			if (aggregate_func_8562(2, &(Var1.f_17.f_6)))
			{
			}
			else
			{
				Var1.f_17.f_6 = { -190.3148f, 639.5237f, 112.2634f };
			}
			Var1.f_17 = { 50f, 50f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 20f, 20f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!aggregate_func_1676(&(Var31.f_6), &Var31, 0))
			{
				Var31.f_6 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			aggregate_func_1296(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (aggregate_func_7518(1298496858))
		{
			aggregate_func_4589(&Var1);
			if (aggregate_func_8562(5, &(Var1.f_17.f_6)))
			{
				aggregate_func_4443(&Var31);
				Var1.f_17.f_9 = -432403087;
				Var1.f_17 = { 50f, 50f, 30f };
				Var1.f_16 = 1;
				Var1.f_6 = { Var1.f_17 };
				Var1.f_6 = { 1.5f, 1.5f, 5f };
				Var1.f_1 = { Var1.f_17.f_6 };
				Var1.f_5 = 2;
				Var31.f_5 = 1;
				if (!aggregate_func_1676(&(Var31.f_6), &Var31, 0))
				{
					Var31.f_6 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
					Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
				}
				aggregate_func_1296(&Var1, &Var31, 1, 1, 1);
				func_110();
			}
			else
			{
				aggregate_func_4589(&Var1);
				aggregate_func_1309(Global_17173.f_54.f_1, fVar0, -1f, 75f, 1, 1, 1);
				aggregate_func_9027();
				aggregate_func_4322(902, 1);
			}
		}
		else if (aggregate_func_7518(1699163417))
		{
			aggregate_func_4589(&Var1);
			aggregate_func_4443(&Var31);
			Var1.f_17.f_9 = -432403087;
			Var1.f_17.f_6 = { 1235.993f, -1279.31f, 74.9174f };
			Var1.f_17 = { 30f, 30f, 30f };
			Var1.f_16 = 1;
			Var1.f_6 = { Var1.f_17 };
			Var1.f_6 = { 1.5f, 1.5f, 5f };
			Var1.f_1 = { Var1.f_17.f_6 };
			Var1.f_5 = 2;
			Var31.f_5 = 1;
			if (!aggregate_func_1676(&(Var31.f_6), &Var31, 0))
			{
				Var31.f_6 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
				Var31 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
			}
			aggregate_func_1296(&Var1, &Var31, 1, 1, 1);
			func_110();
		}
		else if (aggregate_func_7518(-575777117))
		{
			aggregate_func_5070(1);
			aggregate_func_7380(1);
			aggregate_func_5123(-561.4f, -3782.6f, 237.6f, 166.8f, 1);
			Global_1070355->f_27248 |= 1;
		}
		else
		{
			aggregate_func_1309(Global_17173.f_54.f_1, fVar0, -1f, 75f, 1, 1, 1);
		}
		((*Global_1055965)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_428 = 1;
	}
	else if (!aggregate_func_7842())
	{
		aggregate_func_5070(1);
		aggregate_func_7380(1);
		aggregate_func_1309(aggregate_func_1777(33, 1), 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	}
	else if (!aggregate_func_8063())
	{
		aggregate_func_5070(1);
		aggregate_func_7380(1);
		aggregate_func_7797();
	}
	else
	{
		aggregate_func_5070(1);
		aggregate_func_7380(1);
		aggregate_func_1309(aggregate_func_1777(aggregate_func_8563(Global_1070355->f_26827.f_2), 1), 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
	}
	((*Global_1055965)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_429 = NETWORK::_0x595F028698072DD9(-1);
}

void func_31()
{
	aggregate_func_3719();
	aggregate_func_8564();
	NETWORK::_0x0A428058079EE65C(1);
	if (aggregate_func_4345())
	{
		return;
	}
	if (aggregate_func_4248())
	{
		return;
	}
	NETWORK::_0xC505036A35AFD01B(false);
	aggregate_func_9289(-1);
	aggregate_func_4943();
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
	UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
	aggregate_func_1143(3);
	func_136();
	aggregate_func_3513();
	aggregate_func_3512();
	aggregate_func_3660();
	SCRIPTS::_0x11B0A0B282FA9B10(1);
	SCRIPTS::_0x6F700A4BF7C3331B(1);
	SCRIPTS::_0xF9E951A1E5517C06();
	STATS::_0x218F7710A139D012();
	func_140();
	Global_1070355->f_19946.f_262 = 1;
	Global_1572887->f_106.f_83 = 0;
	Global_1131373->f_6289 = 1;
	aggregate_func_505(0);
	NETWORK::_0x9C25E8EC4C535FBD(aggregate_func_3064(PLAYER::PLAYER_ID(), 0, 1));
	func_143(1, 6);
}

void func_32()
{
	if (aggregate_func_4248())
	{
		return;
	}
	if (aggregate_func_4345())
	{
		return;
	}
	if (aggregate_func_4251() != 0)
	{
		return;
	}
	func_144();
	func_145();
}

void func_33()
{
	if (!Global_1572887->f_9)
	{
		return;
	}
	NETWORK::_0x2CD41AC000E6F611();
	Global_1572887->f_9 = 0;
}

void func_36(var uParam0)
{
	struct<19> Var0;

	if (*uParam0)
	{
		return;
	}
	if (aggregate_func_4346(255) != 1)
	{
		return;
	}
	if (aggregate_func_4345())
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_4 = 0;
	aggregate_func_1362(Var0, aggregate_func_4507(3, 8), 0, 0);
	*uParam0 = 1;
}

void func_37()
{
	func_149();
	aggregate_func_431();
	aggregate_func_3716();
	func_152();
	func_153();
	func_154();
	aggregate_func_4238();
	func_156();
	func_157();
	func_158();
	func_159();
	func_160();
	func_161();
}

void func_38()
{
	if (aggregate_func_4251() != 0)
	{
		return;
	}
	switch (Global_1051165->f_36)
	{
		case 0:
			break;
		case 1:
			func_162();
			break;
	}
	Global_1051165->f_36++;
	if (Global_1051165->f_36 >= 3)
	{
		Global_1051165->f_36 = 0;
	}
	func_163();
	func_164();
	func_165();
	func_166();
	aggregate_func_4264();
	func_149();
	func_168();
}

void func_41(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Global_1070354 = iParam0;
	}
}

void func_42()
{
	Global_1273516 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_171();
	func_172();
}

void func_43(char* sParam0, int iParam1)
{
	iParam1 = iParam1;
	sParam0 = sParam0;
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
}

void func_44()
{
	aggregate_func_7014();
	aggregate_func_7014();
	aggregate_func_7014();
	func_173();
	aggregate_func_8560();
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		aggregate_func_8564();
	}
	func_175();
}

bool func_45()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iVar0 != 0)
		{
			if (&Global_1051202->f_16[iVar0] != 0)
			{
				if (SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[iVar0])))
				{
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_52()
{
	bool bVar0;

	Global_1070355->f_11 = 0;
	bVar0 = false;
	while (!aggregate_func_523(0, 0) && !bVar0)
	{
		switch (Global_1070355->f_11)
		{
			case 0:
				aggregate_func_5016(Global_1070354);
				NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1070354, 1, 81);
				aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1070354), 1, "g_mpHostData");
				if (aggregate_func_4345())
				{
					*Global_1069918 = { *((*Global_1055965)[aggregate_func_4294() /*436*/]) };
					aggregate_func_6729(Global_1055965);
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1055965, 13953, 82);
					aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1055965)[0 /*436*/]), 13953, "g_mpPlayerData");
					*((*Global_1055965)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/]) = { *Global_1069918 };
				}
				else
				{
					NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1055965, 13953, 82);
					aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1055965)[0 /*436*/]), 13953, "g_mpPlayerData");
				}
				Global_1070355->f_11++;
				break;
			case 1:
				func_182();
				Global_1070355->f_11++;
				break;
			case 2:
				func_183();
				Global_1070355->f_11++;
				break;
			case 3:
				func_184();
				Global_1070355->f_11++;
				break;
			case 4:
				func_185();
				Global_1070355->f_11++;
				break;
			case 5:
				func_186();
				Global_1070355->f_11++;
				break;
			case 6:
				func_187();
				Global_1070355->f_11++;
				break;
			case 7:
				func_188();
				Global_1070355->f_11++;
				break;
			case 8:
				func_189();
				Global_1070355->f_11++;
				break;
			case 9:
				func_190();
				Global_1070355->f_11++;
				break;
			case 10:
				func_191();
				Global_1070355->f_11++;
				break;
			case 11:
				func_192();
				Global_1070355->f_11++;
				break;
			case 12:
				func_193();
				Global_1070355->f_11++;
				break;
			case 13:
				func_194();
				Global_1070355->f_11++;
				break;
			case 14:
				bVar0 = true;
				break;
		}
		BUILTIN::WAIT(0);
	}
	aggregate_func_3719();
}

void func_55()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_1070355->f_14.f_5[iVar0 /*35*/] = 0;
		iVar0++;
	}
	Global_1070355->f_14 = 0;
}

void func_56()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 17)
	{
		iVar2 = &Global_1070355->f_17915[iVar1];
		Global_1070355->f_17915[iVar1] = &Global_40.f_106[iVar1];
		((*Global_1055965)[iVar0 /*436*/])->f_390[iVar1] = &Global_40.f_106[iVar1];
		((*Global_1055965)[iVar0 /*436*/])->f_390.f_19[iVar1] = -1;
		func_197(iVar1, iVar2, iVar0);
		iVar1++;
	}
	func_198(iVar0, Global_1070355->f_17915.f_21);
	Global_1070355->f_17915.f_21 = 0;
}

void func_62()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	aggregate_func_2878(&(Global_1273516->f_60), 1, 1);
	aggregate_func_2878(&(Global_1273516->f_61), 1, 1);
	if (iVar0 != 255)
	{
		(*Global_1273449)[iVar0 /*2*/] = 0;
	}
	aggregate_func_8565(1);
}

void func_64()
{
	Global_1051202->f_36 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
}

void func_65()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<35> Var3;
	struct<15> Var38;
	int iVar219;
	int iVar220;
	int iVar221;
	int iVar222;
	bool bVar223;
	struct<8> Var224;
	int iVar232;
	struct<35> Var233;
	char cVar268[64];

	bVar0 = false;
	iVar1 = 12;
	if (func_203(&iVar1))
	{
		bVar0 = true;
	}
	while (iVar1 != 12)
	{
		if (func_203(&iVar1))
		{
			bVar0 = true;
		}
	}
	if (Global_1051202->f_43.f_1)
	{
		iVar2 = 0;
		if (func_204(&iVar2))
		{
			bVar0 = true;
		}
		while (iVar2 != 0)
		{
			if (func_204(&iVar2))
			{
				bVar0 = true;
			}
		}
		Global_1051202->f_43.f_1 = 0;
	}
	else if (func_204(&(Global_1051202->f_43)))
	{
		bVar0 = true;
	}
	Var3 = { Global_1051202->f_43 };
	Var38 = 12;
	Var38.f_1.f_4 = 10;
	Var38.f_1.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	Var38.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_4 = 10;
	iVar219 = 0;
	while (iVar219 < 12)
	{
		Var38[iVar219 /*15*/] = 15;
		iVar219++;
	}
	iVar220 = 0;
	iVar222 = 0;
	bVar223 = true;
	if (Var3.f_2[0] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 0;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		(Var38[iVar220 /*15*/])->f_4[0] = func_206(aggregate_func_4259(0));
		iVar220++;
	}
	if (Var3.f_2[1] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 1;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		if ((SCRIPTS::_DOES_THREAD_EXIST(Global_1124870->f_1924) && SCRIPTS::IS_THREAD_ACTIVE(Global_1124870->f_1924, false)) && Global_1124870->f_1925 != -1)
		{
			(Var38[iVar220 /*15*/])->f_4[0] = MISC::_0x6C4DBF553885F9EB(((*Global_1123778)[Global_1124870->f_1925 /*27*/])->f_20);
		}
		else if (aggregate_func_7100(16))
		{
			(Var38[iVar220 /*15*/])->f_4[0] = aggregate_func_2023(aggregate_func_3450(PLAYER::PLAYER_ID(), 1));
		}
		iVar220++;
	}
	if (Var3.f_2[2] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 2;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		iVar221 = 0;
		iVar222 = (func_210() - 1);
		iVar221 = 0;
		while (iVar221 <= iVar222)
		{
			Var224 = { *(Global_1051202->f_78[iVar221 /*10*/]) };
			StringConCat(&Var224, " ", 64);
			StringIntConCat(&Var224, (Global_1051202->f_78[iVar221 /*10*/])->f_9, 64);
			(Var38[iVar220 /*15*/])->f_4[iVar221] = aggregate_func_1966(Var224);
			iVar221++;
		}
		iVar220++;
	}
	if (Var3.f_2[3] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 3;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		(Var38[iVar220 /*15*/])->f_4[0] = func_213(aggregate_func_8494(255));
		iVar220++;
	}
	if (Var3.f_2[4] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 4;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_214()))
		{
			if (func_215())
			{
				(Var38[iVar220 /*15*/])->f_4[0] = func_216();
			}
		}
		else
		{
			(Var38[iVar220 /*15*/])->f_4[0] = func_214();
		}
		iVar220++;
	}
	if (Var3.f_2[6] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 6;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		iVar221 = 0;
		if (aggregate_func_2636(0, &Global_1273882))
		{
			(Var38[iVar220 /*15*/])->f_4[iVar221] = func_218(0);
			iVar221++;
		}
		if (aggregate_func_2636(1, &Global_1273882))
		{
			(Var38[iVar220 /*15*/])->f_4[iVar221] = func_218(1);
			iVar221++;
		}
		if (aggregate_func_2636(2, &Global_1273882))
		{
			(Var38[iVar220 /*15*/])->f_4[iVar221] = func_218(2);
			iVar221++;
		}
		iVar220++;
	}
	if (Var3.f_2[7] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 7;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		(Var38[iVar220 /*15*/])->f_4[0] = func_219();
		iVar220++;
	}
	if (Var3.f_2[8] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 8;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		iVar221 = 0;
		Var233.f_8 = -1;
		Var233.f_8.f_1 = -1;
		Var233.f_16.f_12 = -1;
		Var233.f_16.f_12.f_1 = -1;
		Var233.f_16.f_14 = 255;
		Var233.f_16.f_15 = 255;
		iVar232 = 0;
		while (iVar232 < 10)
		{
			if (iVar221 >= 10)
			{
			}
			else
			{
				Var233 = { aggregate_func_7671(iVar232) };
				if (!aggregate_func_8043(&Var233))
				{
				}
				else
				{
					StringCopy(&cVar268, "Invite - ", 64);
					StringIntConCat(&cVar268, iVar232, 64);
					(Var38[iVar220 /*15*/])->f_4[iVar221] = aggregate_func_1966(cVar268);
					iVar221++;
				}
				iVar232++;
			}
		}
		iVar220++;
	}
	if (Var3.f_2[9] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 9;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		(Var38[iVar220 /*15*/])->f_4[0] = "Matchmaking Hack";
		iVar220++;
	}
	if (Var3.f_2[10] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 10;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		(Var38[iVar220 /*15*/])->f_4[0] = func_222(PLAYER::PLAYER_ID());
		iVar220++;
	}
	if (Var3.f_2[11] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 11;
		(Var38[iVar220 /*15*/])->f_1 = { func_223() };
		(Var38[iVar220 /*15*/])->f_4[0] = func_224();
		iVar220++;
	}
	if (Var3.f_2[12] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 12;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		iVar220++;
	}
	if (Var3.f_2[13] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 13;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		iVar220++;
	}
	if (Var3.f_2[14] && iVar220 < 12)
	{
		bVar223 = false;
		Var38[iVar220 /*15*/] = 14;
		(Var38[iVar220 /*15*/])->f_1 = { Global_1273882->f_17 };
		iVar220++;
	}
	if (!bVar223)
	{
		if (NETWORK::_0xAADED99A6B268A27() || bVar0)
		{
			NETWORK::_0x63246A24F5747510(0, &Var38);
		}
		if ((((Var3.f_2[12] || Var3.f_2[13]) // PointerArith || Var3.f_2[14]) // PointerArith || Var3.f_2[0]) // PointerArith)
		{
			if (NETWORK::_0xE258570E0C116A66())
			{
				NETWORK::_0x4440FEE3EFE78F54(0);
			}
		}
		else if (!NETWORK::_0xE258570E0C116A66())
		{
			NETWORK::_0x4440FEE3EFE78F54(1);
		}
	}
	else
	{
		if (!NETWORK::_0xAADED99A6B268A27())
		{
			NETWORK::_0x63246A24F5747510(1, &Var38);
		}
		if (!NETWORK::_0xE258570E0C116A66())
		{
			NETWORK::_0x4440FEE3EFE78F54(1);
		}
	}
}

int func_67()
{
	return Global_1572887->f_248.f_61;
}

char* func_86(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = "MP_GAME_STATE_INVALID";
			break;
		case 0:
			iVar0 = "MP_GAME_STATE_GAME_INIT";
			break;
		case 1:
			iVar0 = "MP_GAME_STATE_LOAD_INIT_THREADS";
			break;
		case 2:
			iVar0 = "MP_GAME_STATE_LOAD_MAIN_THREADS";
			break;
		case 3:
			iVar0 = "MP_GAME_STATE_ROUTE_TRANSITION";
			break;
		case 4:
			iVar0 = "MP_GAME_STATE_CREATE_PLAYER_CAMP";
			break;
		case 5:
			iVar0 = "MP_GAME_STATE_CHECK_FOR_INVITE";
			break;
		case 6:
			iVar0 = "MP_GAME_STATE_SPAWN_PLAYER";
			break;
		case 7:
			iVar0 = "MP_GAME_STATE_MAIN_UPDATE_FIRST_FRAME";
			break;
		case 8:
			iVar0 = "MP_GAME_STATE_MAIN_UPDATE";
			break;
		case 9:
			iVar0 = "MP_GAME_STATE_END";
			break;
		case 10:
			iVar0 = "MP_GAME_STATE_ALL_LEAVE";
			break;
	}
	return iVar0;
}

bool func_87(int iParam0)
{
	if (Global_1051202->f_15 && aggregate_func_4240(Global_1051202->f_14, iParam0))
	{
		return false;
	}
	if (aggregate_func_4240(Global_1051202->f_13, iParam0))
	{
		return false;
	}
	return true;
}

bool func_88(char* sParam0, int iParam1, int iParam2)
{
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (SCRIPTS::HAS_SCRIPT_LOADED(sParam0) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iParam2) > 0)
	{
		Global_1051202->f_16[iParam1] = SCRIPTS::START_NEW_SCRIPT(sParam0, iParam2);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return true;
	}
	return false;
}

int func_92(vector3 vParam0)
{
	if (!aggregate_func_1320(vParam0, 0))
	{
		return 0;
	}
	aggregate_func_3502(64);
	return 1;
}

var func_94()
{
	return Global_1124870->f_1890;
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		aggregate_func_4309(55);
	}
	else
	{
		aggregate_func_4309(55);
	}
}

void func_110()
{
	aggregate_func_4309(86);
	aggregate_func_4309(85);
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		aggregate_func_4309(51);
	}
	else
	{
		aggregate_func_4309(51);
	}
}

void func_114(bool bParam0)
{
	if (bParam0)
	{
		aggregate_func_4309(53);
	}
	else
	{
		aggregate_func_4309(53);
	}
}

bool func_116()
{
	int iVar0;
	int iVar1;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		return false;
	}
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
	{
		return false;
	}
	if (iVar1 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	return true;
}

void func_117()
{
	int iVar0;
	struct<18> Var1;
	struct<7> Var31;

	iVar0 = PLAYER::GET_PLAYER_PED(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	Var1.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	Var1.f_17 = { 25f, 25f, 25f };
	Var1.f_17.f_9 = -432403087;
	Var1.f_4 = iVar0;
	Var1.f_5 = 3;
	aggregate_func_1676(&(Var31.f_6), &Var31, 0);
	Var31.f_5 = 1;
	aggregate_func_1296(&Var1, &Var31, 1, 1, 1);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		aggregate_func_5403(1, 0);
	}
}

void func_136()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(func_268(iVar0)))
		{
			STREAMING::REQUEST_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_268(iVar0)));
		}
		iVar0++;
	}
}

void func_140()
{
	LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
	LAW::_0x55F37F5F3F2475E1();
}

void func_143(int iParam0, int iParam1)
{
	if (Global_1051384->f_1)
	{
	}
	Global_1051384->f_1 = iParam0;
	if (!func_271(iParam1))
	{
		return;
	}
	Global_1051384->f_2 = 0;
	Global_1051384 = Global_1901929->f_38;
	SCRIPTS::_0xBE7D814CFA181B56();
	if (!Global_1051384->f_1)
	{
		aggregate_func_2975("BGS_CONFIRM", 15000, 0, 0, 0, 1);
	}
	Global_1051384->f_1 = 0;
}

void func_144()
{
	Global_1070355->f_22101.f_366.f_4356 = -1;
	Global_1070355->f_22101 = 1;
}

void func_145()
{
	NETWORK::_0x807E119F80231732((1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0)));
}

void func_149()
{
	struct<2> Var0;

	Var0 = { aggregate_func_4259(0) };
	if (aggregate_func_4255(Var0))
	{
		((*Global_1055965)[&Global_1273882 /*436*/])->f_2 = { aggregate_func_4259(0) };
	}
	else
	{
		aggregate_func_4684(&(((*Global_1055965)[&Global_1273882 /*436*/])->f_2));
	}
}

void func_152()
{
	int iVar0;

	if (!Global_1572887->f_9)
	{
		return;
	}
	(*Global_1268239)[&Global_1273882] = (Global_1070355->f_19683.f_1[&Global_1273882 /*8*/])->f_7;
	((*Global_1055965)[&Global_1273882 /*436*/])->f_10 = Global_1070355->f_19683.f_259;
	((*Global_1055965)[&Global_1273882 /*436*/])->f_9 = Global_1070355->f_19683.f_258;
	SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1070355->f_19683.f_259));
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == &Global_1273882)
		{
		}
		else if (!&Global_1273882->f_22[iVar0])
		{
		}
		else if (aggregate_func_401(&(Global_1273882->f_154[iVar0]), 0))
		{
			if (aggregate_func_4240(Global_1268239[iVar0], 16))
			{
				SCRIPTS::_0xFFDDF802279BE128(&(((*Global_1055965)[iVar0 /*436*/])->f_9), &(Global_1070355->f_19683.f_259), &(Global_1070355->f_19683.f_259));
			}
		}
		iVar0++;
	}
}

void func_153()
{
	struct<35> Var0;

	Var0 = { aggregate_func_7671(0) };
	if (Var0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Var0.f_16.f_2) > Global_1901929->f_1.f_23)
		{
			func_278();
			aggregate_func_4239(&Var0);
		}
	}
	func_280();
	aggregate_func_7433((func_281() + 1 % 10));
	func_283();
}

void func_154()
{
	bool bVar0;
	int iVar1;

	if (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 1 != 0)
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_4 = Global_1268935->f_11.f_51;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_4 = -1;
	}
	if (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 2 != 0)
	{
		if (!NETWORK::_0x1B89BC43B6E69107(((*Global_1268274)[&Global_1273882 /*20*/])->f_10, ((*Global_1268274)[&Global_1273882 /*20*/])->f_11, ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 4 != 0, 0))
		{
			aggregate_func_3459(2);
			((*Global_1268274)[&Global_1273882 /*20*/])->f_10 = 0;
			((*Global_1268274)[&Global_1273882 /*20*/])->f_11 = -1;
		}
	}
	if (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 16 != 0)
	{
		if (!NETWORK::_0x1B89BC43B6E69107(((*Global_1268274)[&Global_1273882 /*20*/])->f_10, ((*Global_1268274)[&Global_1273882 /*20*/])->f_11, 1, 0))
		{
			aggregate_func_3459(16);
			((*Global_1268274)[&Global_1273882 /*20*/])->f_10 = 0;
			((*Global_1268274)[&Global_1273882 /*20*/])->f_11 = -1;
		}
	}
	if (((*Global_1268274)[&Global_1273882 /*20*/])->f_2 & 1 != 0)
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_5 = Global_1268935->f_513.f_46;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_5 = -1;
	}
	if (((*Global_1268274)[&Global_1273882 /*20*/])->f_2 & 8 != 0)
	{
		if (!NETWORK::_0x1B89BC43B6E69107(((*Global_1268274)[&Global_1273882 /*20*/])->f_12, ((*Global_1268274)[&Global_1273882 /*20*/])->f_13, ((*Global_1268274)[&Global_1273882 /*20*/])->f_2 & 16 != 0, 0))
		{
			aggregate_func_3459(8);
			((*Global_1268274)[&Global_1273882 /*20*/])->f_12 = 0;
			((*Global_1268274)[&Global_1273882 /*20*/])->f_13 = -1;
		}
	}
	if (aggregate_func_7011(53))
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 262144;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 262144);
	}
	if (aggregate_func_7011(54))
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 256;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 256);
	}
	if (aggregate_func_7011(55))
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 512;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 512);
	}
	if (aggregate_func_7011(56))
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 64;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 64);
	}
	if (aggregate_func_7011(57))
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 32;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 32);
	}
	if (aggregate_func_7011(58))
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 128;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 128);
	}
	if (aggregate_func_7011(59))
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 1024;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 1024);
	}
	if (aggregate_func_7011(60))
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 2048;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 2048);
	}
	if (aggregate_func_7011(66))
	{
		bVar0 = true;
		if (Global_1268935->f_11.f_344 == 0)
		{
			bVar0 = false;
		}
		if (bVar0 && !SCRIPTS::_DOES_THREAD_EXIST(Global_1268935->f_11.f_344))
		{
			bVar0 = false;
		}
		if (bVar0 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1268935->f_11.f_344, false))
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			Global_1268935->f_11.f_344 = 0;
			aggregate_func_7188(66);
		}
	}
	if (aggregate_func_7011(66))
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 8;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 8);
	}
	if (aggregate_func_7011(67))
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 16384;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 16384);
	}
	if (Global_17173.f_54.f_61.f_582 & 262144 != 0)
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 |= 8192;
	}
	else
	{
		((*Global_1268274)[&Global_1273882 /*20*/])->f_1 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_1 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_1 & 8192);
	}
	if ((((aggregate_func_7011(9) || aggregate_func_7011(10)) || aggregate_func_7011(11)) || aggregate_func_7011(12)) || aggregate_func_7011(13))
	{
		if (aggregate_func_7011(9))
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 1;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 1);
		}
		if (aggregate_func_7011(10))
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 2;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 2);
		}
		if (aggregate_func_7011(11))
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 4;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 4);
		}
		if (aggregate_func_7011(12))
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 8;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 8);
		}
		if (aggregate_func_7011(13))
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 16;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 16);
		}
	}
	else
	{
		if (Global_17173.f_54.f_61.f_582 & 1 != 0)
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 1;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 1);
		}
		if (Global_17173.f_54.f_61.f_582 & 2 != 0)
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 2;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 2);
		}
		if (Global_17173.f_54.f_61.f_582 & 4 != 0)
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 4;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 4);
		}
		if (Global_17173.f_54.f_61.f_582 & 8 != 0)
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 8;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 8);
		}
		if (Global_17173.f_54.f_61.f_582 & 16 != 0)
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 16;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 16);
		}
	}
	iVar1 = ((*Global_1268274)[&Global_1273882 /*20*/])->f_3;
	if ((((aggregate_func_7011(19) || aggregate_func_7011(20)) || aggregate_func_7011(21)) || aggregate_func_7011(22)) || aggregate_func_7011(23))
	{
		if (aggregate_func_7011(19))
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 |= 1;
		}
		else
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_3 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_3 & 1);
		}
		if (aggregate_func_7011(20))
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 |= 2;
		}
		else
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_3 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_3 & 2);
		}
		if (aggregate_func_7011(21))
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 |= 4;
		}
		else
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_3 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_3 & 4);
		}
		if (aggregate_func_7011(22))
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 |= 8;
		}
		else
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_3 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_3 & 8);
		}
		if (aggregate_func_7011(23))
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 |= 16;
		}
		else
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_3 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_3 & 16);
		}
	}
	else
	{
		if (Global_17173.f_54.f_61.f_582 & 262144 != 0)
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 |= 1;
		}
		else
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_3 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_3 & 1);
		}
		if (Global_17173.f_54.f_61.f_582 & 524288 != 0)
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 |= 2;
		}
		else
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_3 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_3 & 2);
		}
		if (Global_17173.f_54.f_61.f_582 & 1048576 != 0)
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 |= 4;
		}
		else
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_3 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_3 & 4);
		}
		if (Global_17173.f_54.f_61.f_582 & 2097152 != 0)
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 |= 8;
		}
		else
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_3 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_3 & 8);
		}
		if (Global_17173.f_54.f_61.f_582 & 4194304 != 0)
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 |= 16;
		}
		else
		{
			((*Global_1268274)[&Global_1273882 /*20*/])->f_3 = (((*Global_1268274)[&Global_1273882 /*20*/])->f_3 - ((*Global_1268274)[&Global_1273882 /*20*/])->f_3 & 16);
		}
	}
	if (iVar1 != ((*Global_1268274)[&Global_1273882 /*20*/])->f_3)
	{
		aggregate_func_4264();
	}
	if ((((aggregate_func_7011(14) || aggregate_func_7011(15)) || aggregate_func_7011(16)) || aggregate_func_7011(17)) || aggregate_func_7011(18))
	{
		if (aggregate_func_7011(14))
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 32;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 32);
		}
		if (aggregate_func_7011(15))
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 64;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 64);
		}
		if (aggregate_func_7011(16))
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 128;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 128);
		}
		if (aggregate_func_7011(17))
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 256;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 256);
		}
		if (aggregate_func_7011(18))
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 512;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 512);
		}
	}
	else
	{
		if (Global_17173.f_54.f_61.f_582 & 32 != 0)
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 32;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 32);
		}
		if (Global_17173.f_54.f_61.f_582 & 64 != 0)
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 64;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 64);
		}
		if (Global_17173.f_54.f_61.f_582 & 128 != 0)
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 128;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 128);
		}
		if (Global_17173.f_54.f_61.f_582 & 256 != 0)
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 256;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 256);
		}
		if (Global_17173.f_54.f_61.f_582 & 512 != 0)
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = Global_1268274[&Global_1273882 /*20*/] | 512;
		}
		else
		{
			(*Global_1268274)[&Global_1273882 /*20*/] = (Global_1268274[&Global_1273882 /*20*/] - Global_1268274[&Global_1273882 /*20*/] & 512);
		}
	}
	Global_1268935->f_887.f_2++;
	Global_1268935->f_887.f_2 = (Global_1268935->f_887.f_2 % 32);
}

void func_156()
{
	if (!aggregate_func_4240(Global_1572887->f_7, 1073741824 /* Float: 2f */))
	{
		return;
	}
	aggregate_func_4243(&(Global_1572887->f_7), 1073741824 /* Float: 2f */);
	if (aggregate_func_4478())
	{
		if (aggregate_func_7127())
		{
			func_290();
		}
		else if (aggregate_func_7084() == 3)
		{
			func_291();
		}
		else
		{
			func_292();
		}
	}
	else
	{
		func_293();
	}
}

void func_157()
{
	func_294();
	if (!func_271(9))
	{
		return;
	}
	func_143(0, 6);
}

void func_158()
{
	Global_1273516 = NETWORK::GET_NETWORK_TIME();
	switch (Global_1273516->f_1)
	{
		case 0:
			aggregate_func_4264();
			break;
		case 1:
			func_296();
			break;
		case 2:
			func_297();
			break;
		case 3:
			func_298();
			break;
		case 4:
			func_299();
			break;
		case 5:
			func_300();
			break;
		case 6:
			func_301();
			break;
	}
	Global_1273516->f_62 = &Global_1273516;
}

void func_159()
{
	if (Global_1099293->f_26.f_22)
	{
		if (func_302())
		{
			Global_1099293->f_26.f_22 = 0;
		}
	}
	if (Global_1099293->f_26.f_23)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1099293->f_26.f_21))
		{
			ENTITY::SET_ENTITY_COORDS(Global_1099293->f_26.f_21, Global_1099293->f_26.f_25, false, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(Global_1099293->f_26.f_21, Global_1099293->f_26.f_31, 2, false);
		}
		Global_1099293->f_26.f_23 = 0;
	}
	if (Global_1099293->f_26.f_24)
	{
		if (!aggregate_func_5522())
		{
			func_304();
			Global_1099293->f_26.f_24 = 0;
		}
	}
}

void func_160()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = Global_1180613[iVar0 /*8*/];
		if (((*Global_1180613)[iVar0 /*8*/])->f_6)
		{
			iVar2 = ((*Global_1180613)[iVar0 /*8*/])->f_1;
			iVar3 = ((*Global_1180613)[iVar0 /*8*/])->f_2;
			iVar4 = ((*Global_1180613)[iVar0 /*8*/])->f_3;
			bVar5 = ((*Global_1180613)[iVar0 /*8*/])->f_4;
			if (iVar3 != 0)
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(func_268(iVar3));
			}
			if (((*Global_1180613)[iVar0 /*8*/])->f_3 >= 0)
			{
				if (!bVar5)
				{
					iVar1 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_305(iVar2), Global_35, 0f, 0f, 0f, 0f, 0f, 0f, iVar4, 1065353216 /* Float: 1f */, 0, 0, 0);
				}
				else
				{
					iVar1 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_305(iVar2), Global_35, 0f, 0f, 0f, 0f, 0f, 0f, iVar4, 1f, false, false, false);
				}
			}
			else if (!bVar5)
			{
				iVar1 = GRAPHICS::START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(func_305(iVar2), Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216 /* Float: 1f */, 0, 0, 0);
			}
			else
			{
				iVar1 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY(func_305(iVar2), Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			}
			(*Global_1180613)[iVar0 /*8*/] = iVar1;
			((*Global_1180613)[iVar0 /*8*/])->f_6 = 0;
		}
		else if (((*Global_1180613)[iVar0 /*8*/])->f_7)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iVar1))
			{
				GRAPHICS::REMOVE_PARTICLE_FX(iVar1, false);
			}
			((*Global_1180613)[iVar0 /*8*/])->f_7 = 0;
		}
		iVar0++;
	}
}

void func_161()
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	func_306();
	switch (func_307())
	{
		case 0:
			if (!func_308())
			{
			}
			else if (!func_309())
			{
			}
			else
			{
				func_310(1);
				Jump @109; //curOff = 64
				if (!func_311())
				{
				}
				else
				{
					func_312();
					func_313();
					func_314();
					func_310(2);
					Jump @109; //curOff = 95
					func_315(2);
				}
			}
			iVar0 = func_316();
			if (func_317(iVar0))
			{
				aggregate_func_7843(12);
			}
			switch (iVar0)
			{
				case 0:
					if (!&Global_1048577)
					{
					}
					else
					{
						aggregate_func_7843(1);
						Jump @838; //curOff = 244
						if (&Global_1273882 < 0 || &Global_1273882 >= 32)
						{
						}
						else if (func_319(&Global_1273882) == 0)
						{
							if (aggregate_func_4255(aggregate_func_4259(0)))
							{
								aggregate_func_7843(2);
							}
						}
						else
						{
							aggregate_func_7843(2);
							Jump @838; //curOff = 309
							if (&Global_1273882 < 0 || &Global_1273882 >= 32)
							{
							}
							else
							{
								func_320(func_319(&Global_1273882));
								if (func_321(func_319(&Global_1273882)))
								{
									aggregate_func_7843(3);
								}
								else
								{
									func_322(1);
									aggregate_func_7843(4);
								}
								Jump @838; //curOff = 382
								if (!aggregate_func_4255(aggregate_func_4259(0)))
								{
								}
								else
								{
									aggregate_func_7843(5);
									Jump @838; //curOff = 406
									if (aggregate_func_4255(aggregate_func_4259(0)))
									{
									}
									else
									{
										aggregate_func_7843(14);
										Jump @838; //curOff = 430
										func_324(func_323());
										aggregate_func_7843(6);
										Jump @838; //curOff = 447
										if (!aggregate_func_9691(1))
										{
										}
										else
										{
											if (aggregate_func_9691(4))
											{
												aggregate_func_7843(8);
											}
											else
											{
												aggregate_func_7843(7);
											}
											Jump @838; //curOff = 484
											aggregate_func_7843(9);
											Jump @838; //curOff = 493
											func_326(4);
											aggregate_func_7843(9);
											Jump @838; //curOff = 507
											if (!aggregate_func_9691(2))
											{
											}
											else
											{
												if (aggregate_func_9691(4))
												{
													aggregate_func_7843(11);
												}
												else
												{
													aggregate_func_7843(10);
												}
												Jump @838; //curOff = 545
												aggregate_func_8118();
												aggregate_func_7843(12);
												Jump @838; //curOff = 558
												func_326(2);
												aggregate_func_7843(6);
												Jump @838; //curOff = 571
												if (!CAM::IS_SCREEN_FADED_IN())
												{
												}
												else if (aggregate_func_4761())
												{
												}
												else if (&Global_1048577)
												{
												}
												else if (&Global_1048584)
												{
												}
												else
												{
													Var1 = { func_330(aggregate_func_9690(0)) };
													if (!MISC::_0x375F5870A7B8BEC1(aggregate_func_1966(Var1)))
													{
														AUDIO::PREPARE_MUSIC_EVENT(aggregate_func_1966(Var1));
													}
													aggregate_func_7843(13);
													Jump @838; //curOff = 666
													iVar9 = aggregate_func_4306(aggregate_func_9689(0));
													switch (iVar9)
													{
														case 9:
															if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
															{
																if (UNLOCK::_UNLOCK_IS_UNLOCKED(-319651633))
																{
																	aggregate_func_7434(-1208093116);
																}
																else if (aggregate_func_3450(PLAYER::PLAYER_ID(), 1) != -1)
																{
																	aggregate_func_7661(2048);
																}
																else
																{
																	aggregate_func_7434(-1221663008);
																}
															}
															Var1 = { func_330(aggregate_func_9690(0)) };
															if (!MISC::IS_STRING_NULL_OR_EMPTY(aggregate_func_1966(Var1)))
															{
																AUDIO::TRIGGER_MUSIC_EVENT(aggregate_func_1966(Var1));
															}
															break;
													}
													aggregate_func_7843(14);
													Jump @838; //curOff = 816
													func_336();
													func_337();
													aggregate_func_7843(0);
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
			default:
				break;
	}
}

void func_162()
{
	switch (aggregate_func_4995())
	{
		case -1:
			break;
		case 0:
			break;
		case 1:
			func_339();
			break;
		case 2:
			break;
		default:
			break;
	}
}

void func_163()
{
	Global_1102098->f_34.f_772 = (Global_1102098->f_34.f_772 + 1 % 32);
}

void func_164()
{
	int iVar0;
	int iVar1;

	if (aggregate_func_4251() != 0)
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	if ((aggregate_func_4258() || Global_1048585) // PointerArith)
	{
		aggregate_func_3757();
	}
	iVar1 = Global_1070355->f_17915.f_21;
	((*Global_1055965)[iVar0 /*436*/])->f_390[iVar1] = &Global_40.f_106[iVar1];
	if (func_342(iVar1, iVar0))
	{
		Global_1070355->f_17915.f_21++;
		if (Global_1070355->f_17915.f_21 > 17)
		{
			Global_1070355->f_17915.f_21 = 0;
		}
		func_198(iVar0, Global_1070355->f_17915.f_21);
	}
	func_343();
}

void func_165()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1070355->f_26827.f_1 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1070355->f_26827.f_1 = iVar0;
	if (aggregate_func_7587(((*Global_1835011)[iVar0 /*72*/])->f_32))
	{
		return;
	}
	func_345();
	if ((Global_1131373->f_5641[iVar0 /*3*/])->f_2)
	{
		if (!aggregate_func_1719(iVar0, PLAYER::GET_PLAYER_INDEX()))
		{
			aggregate_func_9062();
		}
		func_348(iVar0);
	}
	else
	{
		aggregate_func_1305(iVar0);
	}
	if (((*Global_1835011)[iVar0 /*72*/])->f_3 == 0)
	{
		return;
	}
	if (!aggregate_func_4255(((*Global_1835011)[iVar0 /*72*/])->f_1))
	{
		return;
	}
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	iVar2 = aggregate_func_4522(((*Global_1835011)[iVar0 /*72*/])->f_1);
	if (!aggregate_func_1719(iVar0, iVar1))
	{
		if (iVar2 == 1)
		{
			aggregate_func_696(iVar0, -1, 0, 0, 1, 0, 0);
			return;
		}
		return;
	}
	switch (iVar2)
	{
		case 3:
		case 4:
			return;
		case 1:
		case 2:
			return;
		default:
			break;
	}
	aggregate_func_4926(((*Global_1835011)[iVar0 /*72*/])->f_1);
}

void func_166()
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (Global_1274070->f_422)
	{
		return;
	}
	func_353();
	iVar0 = func_354();
	if (iVar0 > 0 && iVar0 < 7)
	{
		if (func_355(4))
		{
			if (!&Global_1048577)
			{
				func_356(11);
			}
		}
		else if (&Global_1048577)
		{
			aggregate_func_7897(4);
		}
	}
	if (func_358())
	{
		if ((iVar0 > 0 && iVar0 < 11) && func_359())
		{
			aggregate_func_1447(1);
			func_361();
		}
	}
	switch (iVar0)
	{
		case 0:
			if (!func_362(1))
			{
			}
			else
			{
				if (func_358())
				{
					func_356(1);
				}
				else
				{
					func_356(2);
				}
				Jump @1181; //curOff = 241
				if (!func_359())
				{
				}
				else
				{
					func_361();
					func_356(3);
					Jump @1181; //curOff = 264
					func_363();
					if (!func_359())
					{
					}
					else
					{
						func_356(3);
						Jump @1181; //curOff = 287
						if (!func_364(PLAYER::PLAYER_ID(), 1))
						{
						}
						else
						{
							if (func_358())
							{
								func_356(4);
							}
							else
							{
								func_356(6);
							}
							Jump @1181; //curOff = 326
							if (!BOUNTY::_0xFC81D7C7A151CFAA(&(Global_1274070->f_374.f_6), aggregate_func_7465(func_365()), aggregate_func_9075(func_367())))
							{
								func_356(6);
							}
							else
							{
								aggregate_func_6520(MISC::GET_GAME_TIMER());
								aggregate_func_7897(1);
								func_356(5);
								Jump @1181; //curOff = 388
								if (func_355(536870912))
								{
									aggregate_func_6520(MISC::GET_GAME_TIMER());
									aggregate_func_1447(4);
									func_356(6);
									func_370();
								}
								else if (func_355(1073741824 /* Float: 2f */))
								{
									func_356(6);
									func_370();
								}
								else if (func_355(268435456))
								{
									func_356(6);
									func_370();
								}
								Jump @1181; //curOff = 473
								if (func_362(4))
								{
									aggregate_func_7897(8);
								}
								if (!func_371())
								{
								}
								else
								{
									if (func_372())
									{
										aggregate_func_7897(32);
									}
									func_356(8);
									Jump @1181; //curOff = 520
									if (func_355(8))
									{
										aggregate_func_6520(aggregate_func_2020());
										aggregate_func_6520(aggregate_func_1500(773203532 /* GXTEntry: "Gold Bar" */, aggregate_func_1967(1), 1084182731, 1, 0, 0));
										aggregate_func_6520(aggregate_func_3897(0));
										aggregate_func_6520(aggregate_func_3897(7));
										aggregate_func_8713();
										if (func_355(32))
										{
											BOUNTY::_0xA7309AC0DCF6D950(&(Global_1274070->f_374.f_6), &(Global_1274070->f_374.f_16.f_1));
										}
										else
										{
											BOUNTY::_0xC1F04FB37E3F0E57(&(Global_1274070->f_374.f_6), &(Global_1274070->f_374.f_16.f_1));
										}
										aggregate_func_7897(64);
										aggregate_func_6520(MISC::GET_GAME_TIMER());
										aggregate_func_7897(2);
										func_356(9);
									}
									else
									{
										func_356(11);
									}
									Jump @1181; //curOff = 684
									if (func_355(1879048192))
									{
										func_356(7);
										func_382();
										func_370();
										BOUNTY::_0x2BA1BCC99826CDA2();
									}
									Jump @1181; //curOff = 716
									if (!CAM::IS_SCREEN_FADED_IN())
									{
									}
									else if (aggregate_func_4761())
									{
									}
									else if (&Global_1048577)
									{
									}
									else if (&Global_1048584)
									{
									}
									else
									{
										func_356(10);
										Jump @1181; //curOff = 766
										if (!aggregate_func_4378())
										{
											if (func_355(64))
											{
												aggregate_func_8566();
												func_385(64);
											}
										}
										iVar1 = (aggregate_func_2020() - func_386());
										if (iVar1 > 0)
										{
											aggregate_func_2861(MISC::_CREATE_VAR_STRING(2, "FEED_MONEY_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
										}
										iVar1 = (aggregate_func_1500(773203532 /* GXTEntry: "Gold Bar" */, aggregate_func_1967(1), 1084182731, 1, 0, 0) - func_388());
										if (iVar1 > 0)
										{
											fVar2 = (IntToFloat(aggregate_func_4944(iVar1)) + (IntToFloat(aggregate_func_7919(iVar1, 1)) * (1f / 100f)));
											aggregate_func_2861(MISC::_CREATE_VAR_STRING(6, "SHOP_GOLD_PRICE_READ", fVar2), "ITEMTYPE_TEXTURES", -1959861270, 0, 1684603218, 0, 0, 0, 1);
										}
										iVar1 = (aggregate_func_3897(0) - func_391());
										if (iVar1 > 0)
										{
											aggregate_func_2861(MISC::_CREATE_VAR_STRING(2, "PLAYER_RPG_XP_GAIN", iVar1), "itemtype_textures", 1088654639, 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
										}
										iVar1 = (aggregate_func_3897(7) - func_392());
										if (iVar1 > 0)
										{
											aggregate_func_2861(MISC::_CREATE_VAR_STRING(2, "NET_TRADE_BOUNTY_HUNTER_XP", iVar1), "itemtype_textures", 1088654639, 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
										}
										if (func_367() != 0)
										{
											func_356(11);
										}
										else
										{
											if (func_393() == 4)
											{
												func_394(1);
											}
											else if (func_393() < 4 && func_355(16))
											{
												func_394(2);
											}
											func_394(4);
											func_356(11);
											Jump @1181; //curOff = 1131
											BOUNTY::_0x2BA1BCC99826CDA2();
											func_395();
											func_396();
											func_397();
											func_356(12);
											Jump @1181; //curOff = 1156
											if (func_362(1))
											{
											}
											else
											{
												func_356(0);
											}
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

void func_168()
{
	if (aggregate_func_4258())
	{
		return;
	}
	if (Global_1197953[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] != Global_1198018->f_1.f_8 || ((*Global_1197953)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/])->f_1 != Global_1198018->f_1.f_9)
	{
		(*Global_1197953)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] = Global_1198018->f_1.f_8;
		((*Global_1197953)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/])->f_1 = Global_1198018->f_1.f_9;
	}
	if (Global_1198018->f_1200 >= 32)
	{
		Global_1198018->f_1200 = 0;
	}
	func_399(Global_1198018->f_1200);
	Global_1198018->f_1200++;
}

void func_170()
{
	aggregate_func_6504();
	func_304();
	Global_1099293->f_26.f_24 = 0;
	Global_1099293->f_26.f_22 = 0;
}

void func_171()
{
	func_402(Global_1273516->f_66, Global_1273516->f_67);
	Global_1273516->f_66++;
	if (Global_1273516->f_66 >= 1)
	{
		Global_1273516->f_66 = 0;
		Global_1273516->f_67++;
		Global_1273516->f_67 = (Global_1273516->f_67 % 32);
	}
}

void func_172()
{
	Global_1273516->f_68++;
	if (Global_1273516->f_68 >= Global_1273422->f_22)
	{
		Global_1273516->f_68 = 0;
		Global_1273516->f_69++;
		Global_1273516->f_69 = (Global_1273516->f_69 % 32);
	}
	if (Global_1273516->f_68 >= Global_1273422->f_22)
	{
		return;
	}
	switch ((Global_1273422->f_3[Global_1273516->f_68 /*6*/])->f_1)
	{
		case 0:
			func_403(Global_1273422->f_3[Global_1273516->f_68 /*6*/]);
			break;
		case 1:
			func_404(Global_1273422->f_3[Global_1273516->f_68 /*6*/]);
			break;
		case 2:
			func_405(Global_1273422->f_3[Global_1273516->f_68 /*6*/], Global_1273516->f_68);
			break;
	}
}

void func_173()
{
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_train_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_train_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_fme_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fme_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_gangfeud_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_gangfeud_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ugc_global_loader"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ugc_global_loader");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("generic_show_mp_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("generic_show_mp_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_camp_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_camp_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_camp_dog_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_camp_dog_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_ace_thread_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_ace_thread_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_fetch_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_fetch_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_crew_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_crew_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_beat_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_beat_manager");
	}
	if (SCRIPTS::HAS_SCRIPT_LOADED("net_scan_manager"))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("net_scan_manager");
	}
}

void func_175()
{
	SCRIPTS::_0xDE544B7EC0C187CC(&(((*Global_1055965)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*436*/])->f_10));
}

void func_182()
{
	if (aggregate_func_4345())
	{
		*Global_1099242 = { *((*Global_1097609)[aggregate_func_4294() /*51*/]) };
		aggregate_func_6729(Global_1097609);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1097609, 1633, 67);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1097609)[0 /*51*/]), 1633, "g_mpPlayerStatusSyncData");
		*((*Global_1097609)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*51*/]) = { *Global_1099242 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1097609, 1633, 67);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1097609)[0 /*51*/]), 1633, "g_mpPlayerStatusSyncData");
	}
}

void func_183()
{
	if (aggregate_func_4345())
	{
		aggregate_func_6729(Global_1137800);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1137800, 1089, 64);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1137800)[0 /*34*/]), 1089, "g_mpPlayerPersona");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1137800, 1089, 64);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1137800)[0 /*34*/]), 1089, "g_mpPlayerPersona");
	}
	aggregate_func_3716();
	aggregate_func_431();
}

void func_184()
{
	aggregate_func_8568(Global_1100949);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1100949, 33, 50);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1100949), 33, "g_mpHostJobData.sGangImpromptuRaceData");
	if (aggregate_func_4345())
	{
		*Global_1103522 = { *((*Global_1103072)[aggregate_func_4294() /*6*/]) };
		aggregate_func_6729(Global_1103072);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1103072, 193, 51);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1103072)[0 /*6*/]), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
		*((*Global_1103072)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*6*/]) = { *Global_1103522 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1103072, 193, 51);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1103072)[0 /*6*/]), 193, "g_mpPlayerJobData.sGangImpromptuRaceData");
	}
}

void func_185()
{
	func_412(Global_1183982);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1183982, 385, 43);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1183982)[0 /*12*/]), 385, "g_mpSessionManagerPlayerData");
	func_196();
}

void func_186()
{
	func_413(Global_1255386);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1255386, 177, 44);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1255386), 177, "g_mpShopManagerHostData");
	if (aggregate_func_4345())
	{
		*Global_1261228 = { *((*Global_1255563)[aggregate_func_4294() /*177*/]) };
		func_414(Global_1255563);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1255563, 5665, 45);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1255563)[0 /*177*/]), 5665, "g_mpShopManagerPlayerData");
		*((*Global_1255563)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*177*/]) = { *Global_1261228 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1255563, 5665, 45);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1255563)[0 /*177*/]), 5665, "g_mpShopManagerPlayerData");
	}
}

void func_187()
{
	if (aggregate_func_4345())
	{
		Global_1268272 = Global_1268239[Global_1099293->f_339];
		aggregate_func_6729(Global_1268239);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1268239, 33, 4);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1268239)[0]), 33, "g_mpPlayerNetHudData");
		(*Global_1268239)[PLAYER::NETWORK_PLAYER_ID_TO_INT()] = &Global_1268272;
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1268239, 33, 4);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1268239)[0]), 33, "g_mpPlayerNetHudData");
	}
}

void func_188()
{
	aggregate_func_8569(&(Global_1100949->f_33));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1100949->f_33), 717, 70);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&(Global_1100949->f_33)), 717, "g_mpHostJobData.sGunForHireMissionData");
	aggregate_func_7085(&(Global_1100949->f_750));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1100949->f_750), 2, 71);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&(Global_1100949->f_750)), 2, "g_mpHostJobData.sGunForHireLocationGiverData");
	if (aggregate_func_4345())
	{
		aggregate_func_8570((*Global_1121338)[aggregate_func_4294() /*54*/]);
		aggregate_func_7546(Global_1121338);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1121338, 1729, 72);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1121338)[0 /*54*/]), 1729, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		aggregate_func_8571((*Global_1123067)[aggregate_func_4294() /*7*/]);
		aggregate_func_7546(Global_1123067);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1123067, 225, 73);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1123067)[0 /*7*/]), 225, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1121338, 1729, 72);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1121338)[0 /*54*/]), 1729, "g_mpGunForHireGangPlayerData.sGunForHireGangData");
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1123067, 225, 73);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1123067)[0 /*7*/]), 225, "g_mpGunForHireCooldownPlayerData.sGunForHireCooldownData");
	}
	func_422(1);
	func_423();
	func_424();
	aggregate_func_8013(4);
}

void func_189()
{
	aggregate_func_4591(Global_1268273);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1268273, 1, 76);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1268273), 1, "g_mpStableHostData");
	if (aggregate_func_4345())
	{
		*Global_1268915 = { *((*Global_1268274)[aggregate_func_4294() /*20*/]) };
		func_427((*Global_1268274)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*20*/]);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1268274, 641, 77);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1268274)[0 /*20*/]), 641, "g_mpStablePlayerData");
		*((*Global_1268274)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*20*/]) = { *Global_1268915 };
	}
	else
	{
		func_428(Global_1268935);
		aggregate_func_5264(Global_1268274);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1268274, 641, 77);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1268274)[0 /*20*/]), 641, "g_mpStablePlayerData");
	}
}

void func_190()
{
	aggregate_func_8572(&(Global_1100949->f_752));
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&(Global_1100949->f_752), 397, 29);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&(Global_1100949->f_752)), 397, "g_mpHostJobData.sPosseVersusData");
	if (aggregate_func_4345())
	{
		Global_1103522->f_6 = { *(Global_1103072->f_193[aggregate_func_4294() /*8*/]) };
		aggregate_func_6729(&(Global_1103072->f_193));
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1103072->f_193), 257, 30);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Global_1103072->f_193[0 /*8*/]), 257, "g_mpPlayerJobData.sPosseVersusData");
		*(Global_1103072->f_193[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/]) = { Global_1103522->f_6 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&(Global_1103072->f_193), 257, 30);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Global_1103072->f_193[0 /*8*/]), 257, "g_mpPlayerJobData.sPosseVersusData");
	}
}

void func_191()
{
	func_432(Global_1273422);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1273422, 27, 65);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1273422), 27, "g_mpStoryCoopTransitionHostData");
	if (aggregate_func_4345())
	{
		*Global_1273514 = { *((*Global_1273449)[aggregate_func_4294() /*2*/]) };
		func_433((*Global_1273449)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/]);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1273449, 65, 66);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1273449)[0 /*2*/]), 65, "g_mpStoryCoopTransitionPlayerData");
		*((*Global_1273449)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/]) = { *Global_1273514 };
	}
	else
	{
		func_434(Global_1273516);
		aggregate_func_5264(Global_1273449);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1273449, 65, 66);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1273449)[0 /*2*/]), 65, "g_mpStoryCoopTransitionPlayerData");
	}
}

void func_192()
{
	func_436();
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1197953, 65, 78);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17((*Global_1197953)[0 /*2*/]), 65, "g_mpAbandonedLootPlayerData");
}

void func_193()
{
	if (aggregate_func_4345())
	{
		*Global_1268018 = { *((*Global_1264881)[aggregate_func_4294() /*98*/]) };
		aggregate_func_6729(Global_1264881);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1264881, 3137, 11);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1264881)[0 /*98*/]), 3137, "g_mpParleyPlayerData");
		*((*Global_1264881)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*98*/]) = { *Global_1268018 };
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1264881, 3137, 11);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1264881)[0 /*98*/]), 3137, "g_mpParleyPlayerData");
	}
}

void func_194()
{
	if (aggregate_func_4345())
	{
		func_438((*Global_1199220)[aggregate_func_4294() /*9*/]);
		aggregate_func_7546(Global_1199220);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1199220, 289, 23);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1199220)[0 /*9*/]), 289, "g_mpCollectiblePlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1199220, 289, 23);
		aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1199220)[0 /*9*/]), 289, "g_mpCollectiblePlayerData");
	}
}

void func_196()
{
	(*Global_1183982)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/] = 0;
	((*Global_1183982)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*12*/])->f_2 = 0;
	Global_1184367->f_1 = 0;
	Global_1184367->f_1.f_1 = 1;
}

void func_197(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_440(iParam0);
	if (iVar2 != -1)
	{
		iVar0 = iVar2;
		while (iVar0 <= 31)
		{
			iVar1 = (iParam0 * 31 + iVar0);
			if (iVar1 >= 546)
			{
			}
			else
			{
				if (MISC::IS_BIT_SET(iParam1, iVar0) && !func_441(iVar1))
				{
					MISC::SET_BIT(((*Global_1055965)[iParam2 /*436*/])->f_390[iParam0], iVar0);
				}
				iVar0++;
			}
		}
		Global_1070355->f_17915[iParam0] = (Global_1070355->f_17915[iParam0] || ((*Global_1055965)[iParam2 /*436*/])->f_390[iParam0]) // PointerArith;
	}
}

void func_198(int iParam0, int iParam1)
{
	Global_1070355->f_17915.f_19 = 0;
	Global_1070355->f_17915.f_20 = &((*Global_1055965)[iParam0 /*436*/])->f_390.f_19[iParam1];
	Global_1070355->f_17915.f_22 = 0;
	Global_1070355->f_17915.f_23 = 0;
}

bool func_203(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	switch (*iParam0)
	{
		case 12:
			bVar0 = !aggregate_func_7029(255);
			iVar1 = 13;
			break;
		case 13:
			bVar0 = !aggregate_func_7842();
			iVar1 = 14;
			break;
		case 14:
			bVar0 = !aggregate_func_7159();
			iVar1 = 12;
			break;
	}
	bVar2 = &Global_1051202->f_43.f_2[*iParam0] != bVar0;
	Global_1051202->f_43.f_2[*iParam0] = bVar0;
	*iParam0 = iVar1;
	return bVar2;
}

bool func_204(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	switch (*iParam0)
	{
		case 0:
			bVar0 = (!Global_1184367->f_1 & 3 != 0 && aggregate_func_7191());
			iVar1 = 4;
			break;
		case 4:
			bVar0 = (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || func_215());
			iVar1 = 6;
			break;
		case 6:
			bVar0 = (!Global_1184367->f_1 & 64 != 0 && func_450(PLAYER::NETWORK_PLAYER_ID_TO_INT()));
			iVar1 = 7;
			break;
		case 7:
			bVar0 = func_451(255);
			iVar1 = 8;
			break;
		case 8:
			bVar0 = func_452() > 0;
			iVar1 = 9;
			break;
		case 9:
			bVar0 = aggregate_func_5118() != true;
			iVar1 = 2;
			break;
		case 2:
			bVar0 = (!Global_1184367->f_1 & 3 != 0 && func_454());
			iVar1 = 1;
			break;
		case 1:
			bVar0 = ((!Global_1184367->f_1 & 16 != 0 && func_455()) || (!Global_1184367->f_1 & 512 != 0 && aggregate_func_7100(16)));
			iVar1 = 10;
			break;
		case 10:
			bVar0 = func_456();
			iVar1 = 11;
			break;
		case 11:
			bVar0 = aggregate_func_9290();
			iVar1 = 0;
			break;
	}
	bVar2 = &Global_1051202->f_43.f_2[*iParam0] != bVar0;
	Global_1051202->f_43.f_2[*iParam0] = bVar0;
	*iParam0 = iVar1;
	return bVar2;
}

char* func_206(struct<2> Param0)
{
	char cVar0[128];
	char cVar16[128];

	StringCopy(&cVar0, "(", 128);
	StringConCat(&cVar0, func_458(Param0), 128);
	StringConCat(&cVar0, ",", 128);
	StringIntConCat(&cVar0, Param0.f_1, 128);
	StringConCat(&cVar0, ")", 128);
	if (aggregate_func_4255(Param0))
	{
		StringConCat(&cVar0, "|", 128);
		StringCopy(&cVar16, "", 128);
		IntToString(&cVar16, aggregate_func_4376(Param0), 128);
		StringConCat(&cVar0, &cVar16, 128);
	}
	return HUD::_0xD8402B858F4DDD88(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

int func_210()
{
	return Global_1051202->f_78.f_102;
}

char* func_213(int iParam0)
{
	if (!aggregate_func_4301(iParam0))
	{
		return "Wilderness";
	}
	switch (iParam0)
	{
		case 0:
			return "CrawdadWillies";
		case 1:
			return "MacombsEnd";
		case 2:
			return "MerkinsWaller";
		case 3:
			return "Lagras";
		case 4:
			return "Lakay";
		case 5:
			return "SaintDenis";
		case 6:
			return "OrangePlantation";
		case 7:
			return "SerialKiller";
		case 8:
			return "Serendipity";
		case 9:
			return "ShadyBelle";
		case 10:
			return "SiltwaterStrand";
		case 11:
			return "AppleseedTimberCo";
		case 12:
			return "BerylsDream";
		case 13:
			return "BigValleyTrapper";
		case 14:
			return "DakotaRiverTrapper";
		case 15:
			return "FortRiggsHoldingCamp";
		case 16:
			return "HangingDogRanch";
		case 17:
			return "LoneMuleStead";
		case 18:
			return "MissingHusband";
		case 19:
			return "MontoRest";
		case 20:
			return "OwanjilaDam";
		case 21:
			return "PaintedSky";
		case 22:
			return "PronghornRanch";
		case 23:
			return "RiggsStation";
		case 24:
			return "BigvalleyShack";
		case 25:
			return "ShepherdsRise";
		case 26:
			return "Strawberry";
		case 27:
			return "ValleyView";
		case 28:
			return "WallaceStation";
		case 30:
			return "WatsonsCabin";
		case 29:
			return "BigValleyOldManJones";
		case 31:
			return "Canebreak Manor";
		case 32:
			return "Copperhead";
		case 33:
			return "SisikaPenitentiary";
		case 34:
			return "BluewaterTravelSales";
		case 35:
			return "BacchuBridge";
		case 36:
			return "DinoLady";
		case 37:
			return "OldFortWallace";
		case 38:
			return "SixPointCabin";
		case 39:
			return "BeechersHope";
		case 40:
			return "Blackwater";
		case 41:
			return "QuakersCove";
		case 42:
			return "AdlerRanch";
		case 43:
			return "DeadRival";
		case 53:
			return "CalumetRavine";
		case 54:
			return "CivilWarBride";
		case 44:
			return "ChezPorter";
		case 55:
			return "Cohutta";
		case 45:
			return "Colter";
		case 56:
			return "CotorraSprings";
		case 46:
			return "FrozenExplorer";
		case 57:
			return "GunFight";
		case 47:
			return "MillesaniClaim";
		case 49:
			return "MountHagenPeak";
		case 48:
			return "MountainMan";
		case 50:
			return "StarvingChildren";
		case 51:
			return "TempestRim";
		case 58:
			return "TheLoft";
		case 59:
			return "Veteran";
		case 60:
			return "Wapiti";
		case 52:
			return "WinterMiningTown";
		case 61:
			return "GrizzliesTravelSales";
		case 62:
			return "AguasDulces";
		case 63:
			return "GuarmaCamp";
		case 64:
			return "CincoTorres";
		case 65:
			return "LaCapilla";
		case 66:
			return "Manicato";
		case 67:
			return "Abandoned Mill";
		case 69:
			return "CarmodyDell";
		case 70:
			return "CornwallKerosene";
		case 71:
			return "CropFarm";
		case 72:
			return "CumberlandFalls";
		case 73:
			return "DownsRanch";
		case 74:
			return "EmeraldRanch";
		case 75:
			return "GrangersHoggery";
		case 76:
			return "HorseshoeOverlook";
		case 77:
			return "LarnedSod";
		case 78:
			return "LoonyCult";
		case 79:
			return "LuckysCabin";
		case 80:
			return "SwansonsStation";
		case 81:
			return "Valentine";
		case 82:
			return "AberdeenPigFarm";
		case 83:
			return "Annesburg";
		case 68:
			return "BeechersC";
		case 84:
			return "BeaverHollow";
		case 85:
			return "BlackBalsamRise";
		case 86:
			return "BrandywineDrop";
		case 87:
			return "ButcherCreek";
		case 88:
			return "Doverhill";
		case 89:
			return "HappyFamily";
		case 90:
			return "Isolationist";
		case 91:
			return "MacLeansHouse";
		case 92:
			return "MossyFlats";
		case 93:
			return "RoanokeValley";
		case 94:
			return "RockySeven";
		case 95:
			return "RoanokeTrapper";
		case 97:
			return "VanHornMansion";
		case 98:
			return "VanHornTradingPost";
		case 96:
			return "RoanokeOldManJones";
		case 99:
			return "BraithewaiteManor";
		case 100:
			return "BulgerGlade";
		case 101:
			return "CaligaHall";
		case 102:
			return "CatfishJacksons";
		case 103:
			return "ClemensCove";
		case 104:
			return "ClemensPoint";
		case 105:
			return "CompsonsStead";
		case 106:
			return "Dairy Farm";
		case 107:
			return "ScarletMeadowsHorseShop";
		case 108:
			return "LonniesShack";
		case 109:
			return "LoveTriangle";
		case 110:
			return "Radleys Pasture";
		case 111:
			return "Rhodes";
		case 112:
			return "SlavePen";
		case 113:
			return "AuroraBasinShack";
		case 114:
			return "DeadSettler";
		case 115:
			return "Cochinay";
		case 116:
			return "ManzanitaPost";
		case 117:
			return "PacificUnionRailroad";
		case 118:
			return "TannersReach";
		case 119:
			return "TallTreesTrapper";
		case 134:
			return "MacFarlanesRanch";
		case 135:
			return "ThievesLanding";
		case 136:
			return "HenniganTravelSales";
		case 127:
			return "Armadillo";
		case 128:
			return "CootsChapel";
		case 129:
			return "DonJulioHouse";
		case 131:
			return "RidgewoodFarm";
		case 130:
			return "RileysCharge";
		case 132:
			return "TwinRocks";
		case 133:
			return "ChollaTravelSales";
		case 120:
			return "Gaptooth Breach";
		case 121:
			return "Tumbleweed";
		case 122:
			return "Rathskeller Fork";
		case 123:
			return "BenedictPoint";
		case 124:
			return "FortMercer";
		case 125:
			return "Plainview";
		case 126:
			return "RioBravoTravelSales";
		case 137:
			return "CentralUnionRRCamp";
		default:
			break;
	}
	return "Wilderness";
}

char* func_214()
{
	if (aggregate_func_2059())
	{
		return HUD::_0xD8402B858F4DDD88(&Global_26288, HUD::GET_LENGTH_OF_LITERAL_STRING(&Global_26288));
	}
	return "";
}

bool func_215()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!aggregate_func_7537(iVar0))
		{
		}
		else if (!aggregate_func_7399(iVar0))
		{
		}
		else if (aggregate_func_2669(Global_1270337->f_16[iVar0 /*11*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_216()
{
	char cVar0[128];
	int iVar16;
	int iVar17;

	StringCopy(&cVar0, "[", 128);
	iVar17 = 0;
	iVar16 = 0;
	while (iVar16 < 7)
	{
		if (!aggregate_func_7537(iVar16))
		{
		}
		else if (!aggregate_func_7399(iVar16))
		{
		}
		else if (!aggregate_func_2669(Global_1270337->f_16[iVar16 /*11*/]))
		{
		}
		else
		{
			if (iVar17 > 0)
			{
				StringConCat(&cVar0, ",", 128);
			}
			StringConCat(&cVar0, "'", 128);
			StringIntConCat(&cVar0, (Global_1270337->f_16[iVar16 /*11*/])->f_1, 128);
			StringConCat(&cVar0, "'", 128);
			iVar17++;
		}
		iVar16++;
	}
	if (iVar17 <= 0)
	{
		StringCopy(&cVar0, "[NONE]", 128);
	}
	else
	{
		StringConCat(&cVar0, "]", 128);
	}
	return aggregate_func_4984(&cVar0);
}

char* func_218(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Primary";
		case 1:
			return "Secondary";
		case 2:
			return "Trolley";
		default:
			break;
	}
	return "undefined";
}

char* func_219()
{
	return HUD::_0xD8402B858F4DDD88(&(((*Global_262996)[&Global_1273882 /*70*/])->f_1.f_27), HUD::GET_LENGTH_OF_LITERAL_STRING(&(((*Global_262996)[&Global_1273882 /*70*/])->f_1.f_27)));
}

char* func_222(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	iVar0 = aggregate_func_7210(iParam0);
	if (!aggregate_func_6924(iVar0))
	{
		return "NoSlot";
	}
	Var1 = -1;
	Var1.f_1 = -1;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		Var1 = { aggregate_func_8391(iVar3) };
		if (aggregate_func_4255(Var1))
		{
		}
		else
		{
			iVar3++;
		}
	}
	return func_206(Var1);
}

Vector3 func_223()
{
	if (Global_1223462->f_9329 == -1)
	{
		return 0f, 0f, 0f;
	}
	return ((*Global_1223462)[Global_1223462->f_9329 /*686*/])->f_606;
}

char* func_224()
{
	char cVar0[64];

	StringCopy(&cVar0, "DynamicNearby", 64);
	return aggregate_func_1966(cVar0);
}

void func_265()
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	if (PATHFIND::_0x5AC0944C156E5F44("dewclm_nav_camp_00"))
	{
		PATHFIND::_0x527B97C203BB8606("dewclm_nav_camp_00");
	}
	if (PATHFIND::_0x5AC0944C156E5F44("shb_nav_camp_00"))
	{
		PATHFIND::_0x527B97C203BB8606("shb_nav_camp_00");
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar9 = 0;
		while (iVar9 <= 2)
		{
			if (func_504(iVar0, iVar9))
			{
				Var1 = { func_505(iVar0, iVar9) };
				if (PATHFIND::_0x5AC0944C156E5F44(&Var1))
				{
					PATHFIND::_0x527B97C203BB8606(&Var1);
				}
			}
			iVar9++;
		}
		iVar0++;
	}
}

void func_266()
{
	int iVar0[3];
	int iVar4;

	iVar0[0] = 67198036;
	iVar0[1] = -1656481590;
	iVar0[2] = -1670262487;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(&(iVar0[iVar4])))
		{
			aggregate_func_2077(&(iVar0[iVar4]));
		}
		iVar4++;
	}
}

void func_267()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_507(iVar0, func_506(iVar0), 0, 0);
		iVar0++;
	}
}

char* func_268(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "scr_deadeye";
		default:
			break;
	}
	return "";
}

bool func_271(int iParam0)
{
	int iVar0;

	if (Global_1051384->f_1)
	{
		return true;
	}
	if (Global_1901929->f_38.f_1 == 0)
	{
		return false;
	}
	if (Global_1901929->f_38 == 0)
	{
		return false;
	}
	if (&Global_1051384 != Global_1901929->f_38)
	{
		iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901929->f_38.f_1);
		if (iVar0 > 0)
		{
			return true;
		}
	}
	return false;
}

struct<35> func_278()
{
	vector3 vVar0;
	struct<35> Var4;
	int iVar39;

	Var4.f_8 = -1;
	Var4.f_8.f_1 = -1;
	Var4.f_16.f_12 = -1;
	Var4.f_16.f_12.f_1 = -1;
	Var4.f_16.f_14 = 255;
	Var4.f_16.f_15 = 255;
	Var4.f_16.f_1 = 255;
	Var4.f_16.f_2 = vVar0.z;
	aggregate_func_4684(&(Var4.f_8));
	if (Global_1070355->f_14 > 0)
	{
		Global_1070355->f_14 = (Global_1070355->f_14 - 1);
		if (aggregate_func_7562() == Global_1070355->f_14)
		{
			aggregate_func_7563();
		}
		Var4 = { *(Global_1070355->f_14.f_5[Global_1070355->f_14 /*35*/]) };
		Global_1070355->f_14.f_5[Global_1070355->f_14 /*35*/] = 0;
	}
	iVar39 = 0;
	iVar39 = 0;
	while (iVar39 <= 8)
	{
		if (aggregate_func_7562() == iVar39 + 1)
		{
			aggregate_func_7433(iVar39);
		}
		*(Global_1070355->f_14.f_5[iVar39 /*35*/]) = { *(Global_1070355->f_14.f_5[iVar39 + 1 /*35*/]) };
		Global_1070355->f_14.f_5[iVar39 + 1 /*35*/] = 0;
		iVar39++;
	}
	return Var4;
}

void func_280()
{
	struct<35> Var0;

	Var0 = { aggregate_func_7671(func_281()) };
	if (!Var0)
	{
		return;
	}
}

int func_281()
{
	return Global_1070355->f_14.f_1;
}

void func_283()
{
	if (aggregate_func_7562() == -1)
	{
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_1070355->f_14.f_2.f_2) > (Global_1901929->f_1.f_23 / 2))
	{
		aggregate_func_7563();
		return;
	}
}

void func_290()
{
	aggregate_func_1779(1);
	aggregate_func_1779(2);
	aggregate_func_1779(4);
	aggregate_func_1779(8);
	aggregate_func_1779(16);
	aggregate_func_1779(256);
	aggregate_func_1779(512);
	aggregate_func_1779(1024);
	aggregate_func_1779(4096);
	aggregate_func_1779(8192);
}

void func_291()
{
	aggregate_func_1779(1);
	aggregate_func_1779(2);
	aggregate_func_1779(4);
	aggregate_func_1779(8);
	aggregate_func_1779(16);
	aggregate_func_1779(64);
	aggregate_func_1779(128);
	aggregate_func_1779(256);
	aggregate_func_1779(512);
	aggregate_func_1779(1024);
	aggregate_func_1779(4096);
}

void func_292()
{
	aggregate_func_1779(1);
	aggregate_func_1779(2);
	aggregate_func_1779(8);
	aggregate_func_1779(16);
	aggregate_func_1779(64);
	aggregate_func_1779(128);
	aggregate_func_1779(256);
	aggregate_func_1779(512);
	aggregate_func_1779(1024);
	aggregate_func_1779(2048);
	aggregate_func_1779(4096);
	aggregate_func_1779(8192);
}

void func_293()
{
	aggregate_func_1724(1);
	aggregate_func_1724(2);
	aggregate_func_1724(4);
	aggregate_func_1724(8);
	aggregate_func_1724(16);
	aggregate_func_1724(32);
	aggregate_func_1724(64);
	aggregate_func_1724(128);
	aggregate_func_1724(256);
	aggregate_func_1724(512);
	aggregate_func_1724(1024);
	aggregate_func_1724(2048);
	aggregate_func_1724(4096);
	aggregate_func_1724(8192);
}

void func_294()
{
	int iVar0;

	if (Global_1901929->f_38.f_1 == 0)
	{
		return;
	}
	if (Global_1901929->f_38 == 0)
	{
		return;
	}
	iVar0 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1901929->f_38.f_1);
	if (iVar0 < func_521(1))
	{
		func_522(1, 1022);
	}
	else if (iVar0 < func_521(2))
	{
		func_522(2, 1020);
	}
	else if (iVar0 < func_521(4))
	{
		func_522(4, 1016);
	}
	else if (iVar0 < func_521(8))
	{
		func_522(8, 1008);
	}
	else if (iVar0 < func_521(16))
	{
		func_522(16, 992);
	}
	else if (iVar0 < func_521(32))
	{
		func_522(32, 960);
	}
	else if (iVar0 < func_521(64))
	{
		func_522(64, 896);
	}
	else if (iVar0 < func_521(128))
	{
		func_522(128, 768);
	}
	else if (iVar0 < func_521(256))
	{
		func_522(256, 512);
	}
	else if (iVar0 < func_521(512))
	{
		func_522(512, 512);
	}
}

void func_296()
{
	if (!aggregate_func_3750(1, &Global_1273882))
	{
		return;
	}
	if (aggregate_func_3750(2, 255))
	{
		aggregate_func_3803(8);
		aggregate_func_8565(3);
	}
	else
	{
		aggregate_func_8565(2);
	}
}

void func_297()
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1273422->f_2), &Global_1273882))
	{
		aggregate_func_2878(&(Global_1273516->f_60), 1, 1);
		aggregate_func_2878(&(Global_1273516->f_61), 1, 1);
		aggregate_func_8565(3);
		return;
	}
	if (!aggregate_func_3750(1, &Global_1273882))
	{
		aggregate_func_8565(0);
		return;
	}
	if (aggregate_func_3750(8, 255))
	{
		aggregate_func_2878(&(Global_1273516->f_60), 1, 1);
		if (!aggregate_func_2875(Global_1273516->f_61))
		{
			Global_1273516->f_61 = aggregate_func_2385("STORY_COOP_TRANSITION_CANCEL", joaat("INPUT_CONTEXT_B"), 2, 0, 1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if (aggregate_func_455(Global_1273516->f_61, 1))
		{
			aggregate_func_3801(8);
		}
		return;
	}
	aggregate_func_2878(&(Global_1273516->f_61), 1, 1);
	if (!func_528(&Global_1273882))
	{
		return;
	}
	if (!aggregate_func_2875(Global_1273516->f_60))
	{
		Global_1273516->f_60 = aggregate_func_2385("STORY_COOP_TRANSITION_CONFIRM", joaat("INPUT_CONTEXT_X"), 2, 0, 1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	if (aggregate_func_455(Global_1273516->f_60, 1))
	{
		aggregate_func_3803(8);
	}
}

void func_298()
{
	int iVar0;

	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1273422->f_2), &Global_1273882))
	{
		if (!aggregate_func_3750(1, &Global_1273882))
		{
			aggregate_func_8565(0);
			return;
		}
		return;
	}
	Global_1273516->f_63 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1273422->f_22)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(&((Global_1273422->f_3[iVar0 /*6*/])->f_2), &Global_1273882))
		{
			Global_1273516->f_63 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (Global_1273516->f_63 == -1)
	{
		return;
	}
	aggregate_func_8565(4);
}

void func_299()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(2000);
		}
		return;
	}
	aggregate_func_3803(16);
	aggregate_func_8565(0);
	aggregate_func_8565(5);
}

void func_300()
{
	if ((Global_1273422->f_3[Global_1273516->f_63 /*6*/])->f_1 >= 2)
	{
		aggregate_func_8565(6);
		return;
	}
	switch (Global_1273516->f_64)
	{
		case 0:
			if ((Global_1273422->f_3[Global_1273516->f_63 /*6*/])->f_3 != Global_1273882->f_10)
			{
				return;
			}
			if (Global_1273516->f_65 >= 15)
			{
				aggregate_func_3803(64);
				return;
			}
			if (!NETWORK::_0xE404BFF0ABA23CDC(&((Global_1273422->f_3[Global_1273516->f_63 /*6*/])->f_2)))
			{
				return;
			}
			NETWORK::_0xC505036A35AFD01B(true);
			if (!NETWORK::_0xC223D299C670413D(1, 32, 0, -1))
			{
				return;
			}
			aggregate_func_8565(1);
			break;
		case 1:
			if (NETWORK::_0xA021095C983F20D8())
			{
				return;
			}
			if (!NETWORK::_0x6D87BA8EF15226CD())
			{
				Global_1273516->f_65++;
				aggregate_func_8565(0);
				return;
			}
			if (!NETWORK::_0x277865A734918AE6())
			{
				Global_1273516->f_65++;
				aggregate_func_8565(0);
				return;
			}
			if (!NETWORK::_0x0B6B4507AC5EA8B8())
			{
				if (!NETWORK::_0x1BB50CD340A996E6())
				{
					NETWORK::_0x101F538C25ABB39A(0, 0);
				}
			}
			aggregate_func_8565(2);
			break;
		case 2:
			aggregate_func_3803(32);
			break;
	}
}

void func_301()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 == 255)
	{
		return;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1273422->f_2), iVar0))
	{
		func_62();
		return;
	}
	aggregate_func_3803(128);
}

bool func_302()
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_1099293->f_26.f_21))
	{
		ENTITY::SET_ENTITY_COORDS(Global_1099293->f_26.f_21, Global_1099293->f_26.f_25, false, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Global_1099293->f_26.f_21, Global_1099293->f_26.f_31, 2, false);
		ENTITY::SET_ENTITY_VISIBLE(Global_1099293->f_26.f_21, false);
		ENTITY::SET_ENTITY_COLLISION(Global_1099293->f_26.f_21, false, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1099293->f_26.f_21, false, false);
		ENTITY::SET_ENTITY_INVINCIBLE(Global_1099293->f_26.f_21, true);
		ENTITY::FREEZE_ENTITY_POSITION(Global_1099293->f_26.f_21, true);
		NETWORK::_0x9ED3108D6847760A(NETWORK::PED_TO_NET(Global_1099293->f_26.f_21), 1);
		PED::SET_PED_CONFIG_FLAG(Global_1099293->f_26.f_21, 301, true);
		PED::SET_PED_CONFIG_FLAG(Global_1099293->f_26.f_21, 277, true);
		PED::SET_PED_CONFIG_FLAG(Global_1099293->f_26.f_21, 417, true);
		PED::SET_PED_CONFIG_FLAG(Global_1099293->f_26.f_21, 394, true);
		PED::SET_PED_CONFIG_FLAG(Global_1099293->f_26.f_21, 253, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1099293->f_26.f_21, true);
		TASK::TASK_PLAY_ANIM(Global_1099293->f_26.f_21, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1090519040 /* Float: 8f */, -8f, -1, 0, 0, 0, 0, 0, 0, 0);
		Global_1099293->f_26.f_34 = { Global_1099293->f_26.f_31 };
		return true;
	}
	STREAMING::REQUEST_MODEL(joaat("a_c_owl_01"), false);
	if (!STREAMING::HAS_MODEL_LOADED(joaat("a_c_owl_01")))
	{
		return false;
	}
	STREAMING::REQUEST_ANIM_DICT("CREATURES_BIRD@OWL@NORMAL@DEAD");
	if (!STREAMING::HAS_ANIM_DICT_LOADED("CREATURES_BIRD@OWL@NORMAL@DEAD"))
	{
		return false;
	}
	if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		NETWORK::_0x807E119F80231732((1 + NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0)));
	}
	else
	{
		return false;
	}
	PED::_0xC6136B40FFFB778B(1);
	Global_1099293->f_26.f_21 = PED::CREATE_PED(joaat("a_c_owl_01"), Global_1099293->f_26.f_25, 0f, true, false, true, false);
	ENTITY::SET_ENTITY_COORDS(Global_1099293->f_26.f_21, Global_1099293->f_26.f_25, false, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(Global_1099293->f_26.f_21, Global_1099293->f_26.f_31, 2, false);
	ENTITY::SET_ENTITY_VISIBLE(Global_1099293->f_26.f_21, false);
	ENTITY::SET_ENTITY_COLLISION(Global_1099293->f_26.f_21, false, false);
	ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_1099293->f_26.f_21, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_1099293->f_26.f_21, true);
	ENTITY::FREEZE_ENTITY_POSITION(Global_1099293->f_26.f_21, true);
	NETWORK::_0x9ED3108D6847760A(NETWORK::PED_TO_NET(Global_1099293->f_26.f_21), 1);
	PED::SET_PED_CONFIG_FLAG(Global_1099293->f_26.f_21, 301, true);
	PED::SET_PED_CONFIG_FLAG(Global_1099293->f_26.f_21, 277, true);
	PED::SET_PED_CONFIG_FLAG(Global_1099293->f_26.f_21, 417, true);
	PED::SET_PED_CONFIG_FLAG(Global_1099293->f_26.f_21, 394, true);
	PED::SET_PED_CONFIG_FLAG(Global_1099293->f_26.f_21, 253, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1099293->f_26.f_21, true);
	TASK::TASK_PLAY_ANIM(Global_1099293->f_26.f_21, "CREATURES_BIRD@OWL@NORMAL@DEAD", "Dead_Up", 1000f, -8f, -1, 1, 0, 0, 0, 0, 0, 0);
	Global_1099293->f_26.f_34 = { Global_1099293->f_26.f_31 };
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_owl_01"));
	PED::_0xC6136B40FFFB778B(0);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Global_1099293->f_26.f_21, "Hide_and_Mute_Entity_group", 0f);
	AUDIO::START_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	return true;
}

void func_304()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1099293->f_26.f_21))
	{
		return;
	}
	AUDIO::STOP_AUDIO_SCENE("Hide_and_Mute_Entity_Scene");
	PED::DELETE_PED(&(Global_1099293->f_26.f_21));
	Global_1099293->f_26.f_22 = 0;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_owl_01"));
}

char* func_305(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "scr_de_slippery_haze_head";
		case 1:
			return "scr_de_slippery_haze_torso";
		case 2:
			return "scr_de_slippery_haze_limb";
		case 3:
			return "scr_de_recuperate_wisps";
		case 4:
			return "scr_de_steady_smoke_torso";
		default:
			break;
	}
	return "";
}

void func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!CAM::IS_SCREEN_FADED_IN() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	func_532();
	if (func_533() != 0)
	{
		if (!aggregate_func_2534(func_534()))
		{
			iVar3 = func_536(func_533());
			if (func_537() < iVar3)
			{
				if (!aggregate_func_2090())
				{
					aggregate_func_8573(func_539());
					return;
				}
			}
			else
			{
				aggregate_func_7434(func_533());
				func_542();
				aggregate_func_8573(0);
			}
		}
		else
		{
			aggregate_func_8573(func_537() + 1);
			aggregate_func_8573(0);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 0)
		{
			if (func_544(iVar1) == 0)
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 31)
				{
					iVar0 = func_545((iVar1 * 32 + iVar2), 1);
					if (!func_546(iVar0))
					{
					}
					else
					{
						aggregate_func_7843(iVar0);
					}
					else
					{
						iVar2++;
					}
				}
				if (func_533() != 0)
				{
				}
				else
				{
					iVar1++;
				}
			}
		}
	}
}

int func_307()
{
	return &Global_1274493;
}

bool func_308()
{
	if (!DATAFILE::_0x7907969497EA92F5((Global_1070355->f_26934[29 /*4*/])->f_3))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76((Global_1070355->f_26934[29 /*4*/])->f_3))
	{
		return false;
	}
	return true;
}

bool func_309()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	struct<5> Var9;

	Var9 = -1;
	Var9.f_1 = -1;
	Var9.f_2 = -1;
	Var9.f_3 = -1;
	Var9.f_4 = -1;
	iVar1 = func_548();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var9 = iVar0;
		iVar4 = aggregate_func_3797(&Var9);
		iVar3 = func_550(iVar0);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			Var5 = { func_551(iVar0, iVar2) };
			func_552(&Var5, iVar4);
			iVar2++;
		}
		iVar0++;
	}
	return true;
}

void func_310(int iParam0)
{
	Global_1274493 = iParam0;
}

bool func_311()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		aggregate_func_3898(iVar0, &uVar1);
		if (aggregate_func_4349(&uVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_312()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;

	iVar1 = func_548();
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = iVar0;
		iVar3 = aggregate_func_8574(iVar6);
		bVar10 = false;
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar7 = iVar2;
			iVar5 = aggregate_func_8575(iVar6, iVar7);
			bVar9 = false;
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				iVar8 = iVar4;
				if (!func_557(iVar6, iVar7, iVar8, 3))
				{
				}
				else
				{
					aggregate_func_8576(iVar6, iVar7, iVar4);
					bVar9 = true;
				}
				else
				{
					iVar4++;
				}
			}
			if (iVar5 <= 0)
			{
				aggregate_func_8576(iVar6, iVar7, -1);
			}
			else if (!bVar9)
			{
				aggregate_func_8576(iVar6, iVar7, 15);
			}
			if ((iVar4 == 0 && bVar9) && !bVar10)
			{
				aggregate_func_8577(iVar6, iVar2);
				bVar10 = true;
			}
			iVar2++;
		}
		if (iVar3 <= 0)
		{
			aggregate_func_8577(iVar6, -1);
		}
		else if (!bVar10)
		{
			aggregate_func_8577(iVar6, 15);
		}
		iVar0++;
	}
}

void func_313()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	bool bVar10;
	int iVar11;

	iVar1 = func_548();
	func_560(iVar1);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar6 = iVar0;
		iVar3 = aggregate_func_8574(iVar6);
		aggregate_func_7567(iVar6, iVar3);
		uVar4 = func_562(iVar6);
		aggregate_func_7567(iVar6, uVar4);
		Var8 = { func_564(iVar6, -1919535953) };
		func_565(iVar6, Var8);
		bVar10 = func_566(iVar6);
		aggregate_func_7567(iVar6, bVar10);
		iVar11 = func_568(iVar6, 0);
		aggregate_func_7567(iVar6, iVar11);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			iVar7 = iVar2;
			uVar5 = aggregate_func_7606(iVar6, iVar7);
			func_571(iVar6, iVar7, uVar5);
			iVar2++;
		}
		iVar0++;
	}
}

void func_314()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (func_572() - 1))
	{
		iVar1 = (iVar1 + func_573(iVar0));
		iVar0++;
	}
	func_315(iVar1);
}

void func_315(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<2> Var14;
	int iVar16;

	iVar9 = PLAYER::PLAYER_ID();
	iVar11 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar9);
	iVar10 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar11);
	iVar1 = _NAMESPACE26::_0x149A2751AB66AC02(iVar11);
	bVar8 = ((iVar9 == iVar10 && NETWORK::_0x255A5EF65EDA9167(iVar9)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9));
	iVar5 = Global_1273882->f_21;
	iVar0 = 0;
	while (iVar0 <= (iParam0 - 1))
	{
		iVar6 = func_574();
		iVar7 = func_575();
		uVar2 = func_576(iVar6, iVar7);
		iVar3 = func_577(iVar6);
		Var14 = { func_578(iVar6) };
		STATS::STAT_ID_GET_INT(&Var14, &iVar4);
		if (func_579(iVar6))
		{
			if (MISSIONDATA::_0xE54DC27571D5EDC5(uVar2))
			{
				iVar12 = MISSIONDATA::MISSIONDATA_GET_REPLAY_STATE(uVar2);
				iVar13 = func_580(iVar6);
				iVar16 = func_581(iVar6);
				if (bVar8)
				{
					if (iVar1 <= 4)
					{
						if (iVar4 == 0 || (iVar4 + iVar3) <= iVar5)
						{
							if (iVar13 == 15)
							{
								if (iVar12 != 0)
								{
									MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 0);
								}
							}
							else if (iVar13 > iVar7)
							{
								if (iVar12 != 0)
								{
									MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 0);
								}
							}
							else if (iVar12 != 3)
							{
								MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 3);
							}
						}
						else if (iVar12 != 1)
						{
							MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 1);
						}
					}
					else if (iVar12 != 2)
					{
						MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 2);
					}
				}
				else if (iVar12 != 6)
				{
					MISSIONDATA::_0xE4E2C581F127A11C(uVar2, 6);
				}
			}
			if (iVar13 == 15)
			{
				if (MISSIONDATA::_0xE145864DECC34219(iVar16))
				{
					MISSIONDATA::_0x957A830C9B4B99EA(iVar16, 0);
				}
			}
			else if (!MISSIONDATA::_0xE145864DECC34219(iVar16))
			{
				MISSIONDATA::_0x957A830C9B4B99EA(iVar16, 1);
			}
		}
		else
		{
			iVar7 = (func_573(iVar6) - 1);
		}
		iVar7 = (iVar7 + 1 % func_573(iVar6));
		func_582(iVar7);
		if (iVar7 == 0)
		{
			iVar6 = (iVar6 + 1 % func_572());
			aggregate_func_7843(iVar6);
		}
		iVar0++;
	}
}

int func_316()
{
	return Global_1274493->f_55;
}

bool func_317(int iParam0)
{
	if (&Global_1048577)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
		case 12:
		case 13:
		case 14:
			return false;
		default:
			break;
	}
	return true;
}

int func_319(int iParam0)
{
	return ((*Global_1055965)[iParam0 /*436*/])->f_153.f_9;
}

void func_320(int iParam0)
{
	Global_1274493->f_55.f_1 = iParam0;
}

bool func_321(int iParam0)
{
	struct<5> Var0;

	Var0 = { aggregate_func_3709(iParam0) };
	return aggregate_func_7606(Var0, Var0.f_1) != 0;
}

void func_322(int iParam0)
{
	Global_1274493->f_55.f_1.f_2 = (Global_1274493->f_55.f_1.f_2 || iParam0);
}

int func_323()
{
	return Global_1274493->f_55.f_1;
}

int func_324(var uParam0)
{
	struct<2> Var0;
	int iVar8;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { aggregate_func_3709(uParam0) };
	iVar8 = aggregate_func_7606(Var0.f_3, Var0.f_3.f_1);
	if (iVar8 == 0)
	{
		return 0;
	}
	Var0 = { aggregate_func_4757(iVar8, 7) };
	Var0.f_2 = MISC::GET_GAME_TIMER();
	if (!aggregate_func_4255(Var0))
	{
		return 0;
	}
	func_587(0, &Var0);
	return 1;
}

void func_326(int iParam0)
{
	Global_1274493->f_55.f_1.f_1 = (Global_1274493->f_55.f_1.f_1 - (Global_1274493->f_55.f_1.f_1 && iParam0));
}

struct<8> func_330(int iParam0)
{
	var uVar0;
	struct<8> Var5;

	if (!aggregate_func_1718(&uVar0))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 53, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 54, 0, 0, 1))
	{
		return Var5;
	}
	return aggregate_func_3094(&uVar0, 59, 1);
}

void func_336()
{
	struct<8> Var0;

	Var0 = { func_593(0) };
	Var0.f_2 = MISC::GET_GAME_TIMER();
	func_594(0);
	if (func_595(1))
	{
		return;
	}
	func_587(1, &Var0);
}

void func_337()
{
	var uVar0;

	MISC::_COPY_MEMORY(&(Global_1274493->f_55.f_1), &uVar0, 3);
}

void func_339()
{
	aggregate_func_8351(func_597(1));
	aggregate_func_8238((Global_1100949->f_33[func_597(2) /*16*/])->f_1, -1);
	if (aggregate_func_7004())
	{
		aggregate_func_8239(&(Global_1100949->f_33.f_513), &(Global_1103536->f_10));
		func_602(func_597(0));
		func_603(func_597(3));
		func_604(func_597(0));
		func_605();
	}
	func_606();
	func_607();
	func_608();
	func_609();
	func_610();
	func_611();
	func_612();
	func_613();
	func_614();
	func_615();
	func_616();
	if (Global_1103536->f_15)
	{
		aggregate_func_8448();
		Global_1103536->f_15 = 0;
	}
	func_618();
}

bool func_342(int iParam0, int iParam1)
{
	int iVar0;

	if (!aggregate_func_4616(iParam0))
	{
		return true;
	}
	switch (Global_1070355->f_17915.f_23)
	{
		case 0:
			func_621(iParam0, &iVar0);
			break;
		case 1:
			func_622(iParam1, iParam0);
			break;
		case 2:
			Global_1070355->f_17915[iParam0] = func_623(Global_1070355->f_17915.f_19, Global_1070355->f_17915.f_20);
			iVar0 = 1;
			break;
	}
	return iVar0;
}

void func_343()
{
	if (Global_1070355->f_17915.f_25 == MISC::GET_FRAME_COUNT())
	{
		return;
	}
	if (Global_1070355->f_17915.f_24)
	{
		Global_1070355->f_17915.f_24 = 0;
	}
	else if (Global_1070355->f_17915.f_25 != -1)
	{
		Global_1070355->f_17915.f_25 = -1;
		aggregate_func_8064();
	}
}

void func_345()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(Global_1273882->f_10);
	if (Global_1273882->f_15 != iVar0)
	{
		Global_1273882->f_15 = iVar0;
	}
	if (Global_1070355->f_26827 != Global_1273882->f_15)
	{
		Global_1070355->f_26827 = Global_1273882->f_15;
	}
}

void func_348(int iParam0)
{
	int iVar0;

	if (!aggregate_func_6922(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	if (aggregate_func_1719(iParam0, iVar0))
	{
		return;
	}
	MISC::_0xE84AAC1B22A73E99(&(((*Global_1055965)[iVar0 /*436*/])->f_15.f_18), iParam0);
}

void func_353()
{
	int iVar0;
	int iVar1;

	iVar0 = func_636();
	if (iVar0 == 0)
	{
		func_637();
	}
	else
	{
		if (_NAMESPACE71::_0xC17F69E1418CD11F(1) == iVar0)
		{
			return;
		}
		iVar1 = func_638();
		if (MAP::DOES_BLIP_EXIST(iVar1))
		{
			MAP::REMOVE_BLIP(&iVar1);
			aggregate_func_8578(0);
		}
		aggregate_func_8578(0);
	}
}

int func_354()
{
	return Global_1274070->f_374;
}

bool func_355(int iParam0)
{
	return (Global_1274070->f_374.f_1 && iParam0) != 0;
}

void func_356(int iParam0)
{
	Global_1274070->f_374 = iParam0;
}

bool func_358()
{
	return aggregate_func_8024() == PLAYER::PLAYER_ID();
}

bool func_359()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_365();
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_642() == 9)
	{
		return false;
	}
	if (func_393() == 6)
	{
		return false;
	}
	iVar1 = func_367();
	if (iVar1 == -1)
	{
		return false;
	}
	iVar2 = func_643(iVar0, iVar1);
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar2))
	{
		return false;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar2))
	{
		return false;
	}
	iVar3 = aggregate_func_8394(aggregate_func_8014(iVar0, iVar1));
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar3))
	{
		return false;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar3))
	{
		return false;
	}
	return true;
}

void func_361()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	aggregate_func_3627(func_365());
	aggregate_func_3627(func_642());
	aggregate_func_3627(func_393());
	aggregate_func_3627(func_367());
}

bool func_362(int iParam0)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return false;
	}
	return (((*Global_1055965)[iVar0 /*436*/])->f_384 && iParam0) != 0;
}

void func_363()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	aggregate_func_6520(aggregate_func_6706(iVar0));
	aggregate_func_6520(aggregate_func_6706(iVar0));
	aggregate_func_6520(aggregate_func_6706(iVar0));
	aggregate_func_6520(aggregate_func_6706(iVar0));
}

bool func_364(int iParam0, int iParam1)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	return (((*Global_1055965)[iParam0 /*436*/])->f_384.f_1 && iParam1) != 0;
}

int func_365()
{
	return Global_1274070->f_374.f_2;
}

int func_367()
{
	return Global_1274070->f_374.f_5;
}

void func_370()
{
	var uVar0;

	func_385(536870912);
	func_385(1073741824 /* Float: 2f */);
	func_385(268435456);
	MISC::_COPY_MEMORY(&(Global_1274070->f_374.f_6), &uVar0, 4);
}

bool func_371()
{
	return Global_1274070->f_374.f_29;
}

bool func_372()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar0 == 0)
	{
		return true;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		return true;
	}
	return _NAMESPACE26::_0x149A2751AB66AC02(iVar0) <= 1;
}

void func_382()
{
	struct<2> Var0;

	Var0.f_1 = 11;
	MISC::_COPY_MEMORY(&(Global_1274070->f_374.f_16), &Var0, 13);
}

void func_385(int iParam0)
{
	Global_1274070->f_374.f_1 = (Global_1274070->f_374.f_1 - (Global_1274070->f_374.f_1 && iParam0));
}

int func_386()
{
	return Global_1274070->f_374.f_14;
}

int func_388()
{
	return Global_1274070->f_374.f_15;
}

int func_391()
{
	return Global_1274070->f_374.f_12;
}

int func_392()
{
	return Global_1274070->f_374.f_13;
}

int func_393()
{
	return Global_1274070->f_374.f_4;
}

void func_394(int iParam0)
{
	Global_1274070->f_419 = (Global_1274070->f_419 || iParam0);
}

void func_395()
{
	int iVar0;
	int iVar1;

	if (aggregate_func_8024() == PLAYER::PLAYER_ID())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	iVar1 = func_367();
	if (iVar1 == -1)
	{
		return;
	}
	aggregate_func_8580(iVar0, iVar1, func_365());
	func_664(iVar0, iVar1, MISC::GET_GAME_TIMER());
	aggregate_func_8580(iVar0, iVar1, func_393());
}

void func_396()
{
	struct<17> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = 9;
	Var0.f_4 = 6;
	Var0.f_5 = -1;
	Var0.f_16.f_1 = 11;
	Var0 = func_354();
	MISC::_COPY_MEMORY(&(Global_1274070->f_374), &Var0, 30);
}

void func_397()
{
	struct<6> Var0;

	Var0.f_2 = -1;
	Var0.f_3 = 9;
	Var0.f_4 = 6;
	Var0.f_5 = -1;
	MISC::_COPY_MEMORY(&(((*Global_1055965)[PLAYER::PLAYER_ID() /*436*/])->f_384), &Var0, 6);
}

void func_398()
{
	Global_1184367->f_1 = 0;
	if (&Global_1273882->f_22[0])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[0 /*12*/]);
	}
	if (&Global_1273882->f_22[1])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[1 /*12*/]);
	}
	if (&Global_1273882->f_22[2])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[2 /*12*/]);
	}
	if (&Global_1273882->f_22[3])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[3 /*12*/]);
	}
	if (&Global_1273882->f_22[4])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[4 /*12*/]);
	}
	if (&Global_1273882->f_22[5])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[5 /*12*/]);
	}
	if (&Global_1273882->f_22[6])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[6 /*12*/]);
	}
	if (&Global_1273882->f_22[7])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[7 /*12*/]);
	}
	if (&Global_1273882->f_22[8])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[8 /*12*/]);
	}
	if (&Global_1273882->f_22[9])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[9 /*12*/]);
	}
	if (&Global_1273882->f_22[10])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[10 /*12*/]);
	}
	if (&Global_1273882->f_22[11])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[11 /*12*/]);
	}
	if (&Global_1273882->f_22[12])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[12 /*12*/]);
	}
	if (&Global_1273882->f_22[13])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[13 /*12*/]);
	}
	if (&Global_1273882->f_22[14])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[14 /*12*/]);
	}
	if (&Global_1273882->f_22[15])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[15 /*12*/]);
	}
	if (&Global_1273882->f_22[16])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[16 /*12*/]);
	}
	if (&Global_1273882->f_22[17])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[17 /*12*/]);
	}
	if (&Global_1273882->f_22[18])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[18 /*12*/]);
	}
	if (&Global_1273882->f_22[19])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[19 /*12*/]);
	}
	if (&Global_1273882->f_22[20])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[20 /*12*/]);
	}
	if (&Global_1273882->f_22[21])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[21 /*12*/]);
	}
	if (&Global_1273882->f_22[22])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[22 /*12*/]);
	}
	if (&Global_1273882->f_22[23])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[23 /*12*/]);
	}
	if (&Global_1273882->f_22[24])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[24 /*12*/]);
	}
	if (&Global_1273882->f_22[25])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[25 /*12*/]);
	}
	if (&Global_1273882->f_22[26])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[26 /*12*/]);
	}
	if (&Global_1273882->f_22[27])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[27 /*12*/]);
	}
	if (&Global_1273882->f_22[28])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[28 /*12*/]);
	}
	if (&Global_1273882->f_22[29])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[29 /*12*/]);
	}
	if (&Global_1273882->f_22[30])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[30 /*12*/]);
	}
	if (&Global_1273882->f_22[31])
	{
		Global_1184367->f_1 = (Global_1184367->f_1 || Global_1183982[31 /*12*/]);
	}
	if (!&Global_1184367)
	{
		if (aggregate_func_4361(8192))
		{
			POPULATION::_0xC6DCC2A3A8825C85(1);
		}
		else
		{
			POPULATION::_0xBC90BDF4E5228EA1();
		}
		Global_1184367 = 1;
	}
}

void func_399(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == &Global_1273882)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_400(iParam0);
		return;
	}
	iVar1 = Global_1197953[iParam0 /*2*/];
	iVar2 = ((*Global_1197953)[iParam0 /*2*/])->f_1;
	if (iVar1 == -1 || iVar2 == -1)
	{
		func_400(iParam0);
		return;
	}
	if (iVar1 == Global_1197953[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/] && iVar2 == ((*Global_1197953)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*2*/])->f_1)
	{
		func_400(iParam0);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1198018->f_48[iVar1 /*21*/][iVar2 /*4*/]))
	{
		func_400(iParam0);
		return;
	}
	if (BUILTIN::VDIST(Global_36, ((*Global_1198018->f_48[iVar1 /*21*/])[iVar2 /*4*/])->f_1) > 100f)
	{
		func_400(iParam0);
		return;
	}
	func_667(iParam0, iVar1, iVar2);
}

void func_400(int iParam0)
{
	if (PED::_0x91A5F9CBEBB9D936(&(Global_1198018->f_1099[iParam0 /*3*/])))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(&(Global_1198018->f_1099[iParam0 /*3*/]), false);
	}
}

void func_402(int iParam0, int iParam1)
{
	if (func_668(iParam1, iParam0))
	{
		if (!SCRIPTS::_0x179A6F0EE2E79026(Global_1273422->f_23[iParam0 /*3*/]))
		{
			(Global_1273422->f_23[iParam0 /*3*/])->f_1 = &Global_1273516;
			(Global_1273422->f_23[iParam0 /*3*/])->f_2 = 4000;
		}
		else if (!SCRIPTS::_0x72B2E00C9BAC6789(Global_1273422->f_23[iParam0 /*3*/], iParam1))
		{
			(Global_1273422->f_23[iParam0 /*3*/])->f_1 = &Global_1273516;
			(Global_1273422->f_23[iParam0 /*3*/])->f_2 += 2000;
			if ((Global_1273422->f_23[iParam0 /*3*/])->f_2 > 5000)
			{
				(Global_1273422->f_23[iParam0 /*3*/])->f_2 = 5000;
			}
		}
		SCRIPTS::_0x31010318BA9897AC(Global_1273422->f_23[iParam0 /*3*/], iParam1);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(Global_1273422->f_23[iParam0 /*3*/], iParam1);
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(Global_1273422->f_23[iParam0 /*3*/]))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE((Global_1273422->f_23[iParam0 /*3*/])->f_1, &Global_1273516)) < (Global_1273422->f_23[iParam0 /*3*/])->f_2)
			{
				return;
			}
			break;
	}
	if (!func_669(&(Global_1273422->f_23[iParam0 /*3*/]), iParam0))
	{
		return;
	}
	SCRIPTS::_0xDE544B7EC0C187CC(Global_1273422->f_23[iParam0 /*3*/]);
}

void func_403(var uParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1273516->f_69);
	if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
	{
		aggregate_func_4242(uParam0, 2);
		return;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_2), Global_1273516->f_69))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_671(uParam0, iVar0, Global_1273516->f_69);
		}
		else if (aggregate_func_3750(16, Global_1273516->f_69))
		{
			SCRIPTS::_0x31010318BA9897AC(&(uParam0->f_4), Global_1273516->f_69);
		}
	}
	if (SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_4)) < SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_2)))
	{
		return;
	}
	aggregate_func_4242(uParam0, 1);
}

void func_404(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(uParam0->f_3))
	{
		uParam0->f_3 = 255;
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_2), iVar0))
			{
			}
			else
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1))
				{
					func_671(uParam0, iVar1, iVar0);
				}
				else if (aggregate_func_3750(64, iVar0))
				{
				}
				else
				{
					uParam0->f_3 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
				else
				{
					iVar0++;
				}
				if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_3))
				{
					aggregate_func_4242(uParam0, 2);
				}
				return;
				iVar2 = uParam0->f_3;
				if (aggregate_func_3750(64, iVar2))
				{
					uParam0->f_3 = 255;
					return;
				}
				if (!aggregate_func_3750(32, iVar2))
				{
					return;
				}
				aggregate_func_4242(uParam0, 2);
			}
		}
	}
}

void func_405(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1273516->f_69);
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_2), Global_1273516->f_69))
	{
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
		{
			func_671(uParam0, iVar0, Global_1273516->f_69);
		}
		else if (aggregate_func_3750(128, Global_1273516->f_69))
		{
			SCRIPTS::_0x31010318BA9897AC(&(uParam0->f_5), Global_1273516->f_69);
		}
	}
	if (SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
	{
		if (SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_5)) < SCRIPTS::COUNT_PLAYER_BITS(&(uParam0->f_2)))
		{
			return;
		}
	}
	func_672(iParam1);
}

void func_412(var uParam0)
{
	struct<12> Var0;
	int iVar12;

	Var0.f_1 = 1;
	Var0.f_2.f_1 = 1;
	Var0.f_4 = 7;
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 <= 31)
	{
		*((*uParam0)[iVar12 /*12*/]) = { Var0 };
		iVar12++;
	}
}

void func_413(var uParam0)
{
	struct<177> Var0;

	Var0 = 176;
	*uParam0 = { Var0 };
}

void func_414(var uParam0)
{
	struct<177> Var0;
	int iVar177;

	Var0 = 176;
	iVar177 = 0;
	while (iVar177 < 32)
	{
		*((*uParam0)[iVar177 /*177*/]) = { Var0 };
		iVar177++;
	}
}

void func_422(int iParam0)
{
	Global_1100949->f_750 = iParam0;
}

void func_423()
{
	Global_1100949->f_750.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_424()
{
	((*Global_1121338)[PLAYER::PLAYER_ID() /*54*/])->f_48.f_3 = 1;
}

void func_427(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = -1;
}

void func_428(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_1[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_10 = 0;
	aggregate_func_8458(&(uParam0->f_11));
	aggregate_func_1845(&(uParam0->f_513));
	aggregate_func_8459(&(uParam0->f_840));
	func_682(&(uParam0->f_887));
	aggregate_func_6494(&(uParam0->f_896));
	func_684(&(uParam0->f_897));
	uParam0->f_1370 = 0;
	func_685(&(uParam0->f_1371));
	func_686(&(uParam0->f_1394));
	aggregate_func_7248(&(uParam0->f_1400));
}

void func_432(var uParam0)
{
	struct<27> Var0;

	Var0.f_3 = 3;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_1.f_3 = 255;
	Var0.f_3.f_1.f_6 = -1;
	Var0.f_3.f_1.f_6.f_3 = 255;
	Var0.f_3.f_1.f_6.f_6 = -1;
	Var0.f_3.f_1.f_6.f_6.f_3 = 255;
	Var0.f_23 = 1;
	*uParam0 = { Var0 };
}

void func_433(var uParam0)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	*uParam0 = { Var0 };
}

void func_434(var uParam0)
{
	struct<70> Var0;

	Var0.f_3.f_3 = -1;
	Var0.f_3.f_3.f_1 = -1;
	Var0.f_3.f_5 = 1;
	Var0.f_3.f_6 = 7;
	Var0.f_63 = -1;
	*uParam0 = { Var0 };
}

void func_436()
{
	func_689(Global_1197953);
}

void func_438(int iParam0)
{
	struct<9> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_8 = -1082130432;
	MISC::_COPY_MEMORY(iParam0, &Var0, 9);
}

int func_440(int iParam0)
{
	if (!aggregate_func_4616(iParam0))
	{
		return -1;
	}
	if (aggregate_func_4619(iParam0) >= 337)
	{
		return 0;
	}
	return (30 - (aggregate_func_4618(iParam0) - 337));
}

bool func_441(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_693(iParam0, 1);
	if (iVar0 == -1)
	{
		return true;
	}
	if (Global_1070355->f_17915.f_24 && !aggregate_func_4617(iVar0))
	{
		return true;
	}
	switch (iVar0)
	{
		case -2043909922:
			if (!aggregate_func_1518(-1145153057) && func_696(-763.5972f, -1263.053f, 43.02452f, 100f))
			{
				return false;
			}
			break;
		case -1145153057:
			if (!aggregate_func_1518(-2043909922) && func_696(-763.5972f, -1263.053f, 43.02452f, 100f))
			{
				return false;
			}
			break;
		case 589380360:
			if (!aggregate_func_1518(468797819) && func_696(2499.046f, -1307.856f, 47.95675f, 100f))
			{
				return false;
			}
			break;
		case 468797819:
			if (!aggregate_func_1518(589380360) && func_696(2499.046f, -1307.856f, 47.95675f, 100f))
			{
				return false;
			}
			break;
		case -632127260:
			if (!aggregate_func_1518(965467037) && func_696(-1811.496f, -352.1608f, 160.4848f, 100f))
			{
				return false;
			}
			break;
		case 965467037:
			if (!aggregate_func_1518(-632127260) && func_696(-1811.496f, -352.1608f, 160.4848f, 100f))
			{
				return false;
			}
			break;
		case -209894800:
			if (!aggregate_func_1518(-279765076) && func_696(-272.9644f, 810.0542f, 118.3835f, 100f))
			{
				return false;
			}
			break;
		case -279765076:
			if (!aggregate_func_1518(-209894800) && func_696(-272.9644f, 810.0542f, 118.3835f, 100f))
			{
				return false;
			}
			break;
		case -1585840296:
		case -510945576:
			if (func_696(347.239f, 1490.71f, 178.557f, 100f))
			{
				return false;
			}
			break;
		case 1238086793:
			if (!func_697(-414301703, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1344601768:
			if (!func_697(728379187, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1302228510:
			if (!func_697(-1809365172, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			else if (func_698())
			{
				return false;
			}
			break;
		case -460024530:
			if (!func_697(1092530042, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -108780030:
			if (!func_697(-2051059045, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1698972798:
			if (!func_697(-1408478050, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1340339190:
			if (!func_697(-612173099, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1296807958:
			if (!func_697(-1974746920, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1283202000:
			if (!func_697(1171226610, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1610966108:
			if (!func_697(406701199, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -693828600:
			if (!func_697(1502951187, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1321892118:
			if (!func_697(-1151968796, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -61411516:
			if (!func_697(1975720265, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 582380806:
			if (!func_697(508578717, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1932172605:
			if (!func_697(-848533860, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1159471771:
			if (!func_697(830856441, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 784360470:
			if (!func_697(-522767301, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1881028477:
			if (!func_697(-2103414139, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1703398561:
			if (!func_697(771896020, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1209597203:
			if (!func_697(895825612, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -897750037:
			if (!func_697(1256749990, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 929582877:
			if (!func_697(-1934886317, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -911126844:
			if (!func_697(993438435, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -355531636:
			if (!func_697(1495728629, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1455998786:
			if (!func_697(967935536, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -851626677:
			if (!func_697(-773956478, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -734416508:
			if (!func_697(-1615749463, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -396624371:
			if (!func_697(-361709910, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 885777893:
			if (!func_697(-1323334072, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 619839857:
			if (!func_697(-1521897637, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 2113625508:
			if (!func_697(-716370751, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1549124796:
			if (!func_697(-2053832767, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -502473159:
			if (!func_697(372806894, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 229371495:
			if (!func_697(-1534577778, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -781631220:
			if (!func_697(-2024941402, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1708045337:
			if (!func_697(-50297425, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1166612791:
			if (!func_697(536714458, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 74872959:
			if (!func_697(2068117822, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1744443559:
			if (!func_697(-576687258, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 509781469:
			if (!func_697(226557169, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 885378256:
			if (!func_697(476687617, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -524787708:
			if (!func_697(1856368424, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1861414976:
			if (!func_697(568096966, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 747514327:
			if (!func_697(1104817207, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1042021329:
			if (!func_697(478888800, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -591815673:
			if (!func_697(1955414013, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 883901517:
			if (!func_697(-1207218596, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1561093093:
			if (!func_697(-116967529, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1287917122:
			if (!func_697(-605808708, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1943367752:
			if (!func_697(-100150000, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -371827125:
			if (!func_697(-320403109, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -889906510:
			if (!func_697(18369533, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 64896505:
			if (!func_697(-331965904, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1161687045:
			if (!func_697(127191252, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 526003171:
			if (!func_697(-2074957003, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -895073533:
			if (!func_697(-1226747327, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */) || !func_697(-141795616, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -2066272360:
			if (!func_697(-1973910443, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 93964309:
			if (!func_697(1707200698, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 2103908624:
			if (!func_697(1883767827, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -2142074819:
		case -2141419899:
		case -2100409704:
		case -2056579774:
		case -1939389836:
		case -1932919229:
		case -1914141706:
		case -1906892166:
		case -1882707460:
		case -1848799275:
		case -1842033327:
		case -1827602683:
		case -1808329564:
		case -1753769127:
		case -1749433374:
		case -1749043433:
		case -1719055206:
		case -1705799799:
		case -1684974589:
		case -1673998598:
		case -1664435783:
		case -1624627591:
		case -1578292898:
		case -1573753524:
		case -1556041029:
		case -1547280108:
		case -1502194556:
		case -1462313959:
		case -1445041595:
		case -1442844448:
		case -1422877860:
		case -1395855864:
		case -1387772214:
		case -1378911044:
		case -1369678628:
		case -1341750998:
		case -1339871203:
		case -1319875891:
		case -1290997627:
		case -1287894233:
		case -1262828457:
		case -1181950077:
		case -1120447016:
		case -1095341658:
		case -1023919011:
		case -1004266677:
		case -947815572:
		case -941648233:
		case -931337253:
		case -895307590:
		case -888632790:
		case -852602679:
		case -839820438:
		case -800891377:
		case -797689456:
		case -729679654:
		case -677920206:
		case -635323621:
		case -630295963:
		case -604603161:
		case -583127403:
		case -574190021:
		case -500245243:
		case -492731190:
		case -489737721:
		case -448554447:
		case -414883443:
		case -381925743:
		case -364475655:
		case -329176208:
		case -297483764:
		case -243260793:
		case -226366310:
		case -211583122:
		case -207792846:
		case -110352060:
		case -102827640:
		case -101740709:
		case -90486812:
		case -89829333:
		case -75928821:
		case -74031276:
		case -70727482:
		case -38135693:
		case 16844748:
		case 84709454:
		case 148595040:
		case 215903338:
		case 237155783:
		case 321629486:
		case 404823609:
		case 560154875:
		case 565812320:
		case 640520536:
		case 642824856:
		case 673606600:
		case 715735881:
		case 730069127:
		case 799106423:
		case 803929300:
		case 804063423:
		case 826868753:
		case 831940854:
		case 846837291:
		case 896725436:
		case 943561238:
		case 982765715:
		case 1028084603:
		case 1032791043:
		case 1126565489:
		case 1153686207:
		case 1157309080:
		case 1232840551:
		case 1248935549:
		case 1279586666:
		case 1280406542:
		case 1325325699:
		case 1341699707:
		case 1362354162:
		case 1421300489:
		case 1480425906:
		case 1494062795:
		case 1517951665:
		case 1521272922:
		case 1601722481:
		case 1666964801:
		case 1788424349:
		case 1812677765:
		case 1866434585:
		case 1891256113:
		case 2013720626:
		case 2048790450:
		case 2068208444:
		case 2068253437:
		case 2079292950:
		case 2127412005:
			iVar1 = aggregate_func_7911(iVar0);
			if (iVar1 != -1554566073)
			{
				if (!func_697(iVar1, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
				{
					return false;
				}
			}
			else
			{
				return BUILTIN::VDIST(Global_36, func_700(iVar0)) > 100f;
			}
			break;
		case -812641169:
			if (!func_697(104287396, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -554519756:
			if (!func_697(715920781, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 865557632:
			if (!func_697(-900541220, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1112996351:
			if (!func_697(-1199296193, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -1608141409:
			if (!func_697(546408124, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -311373772:
			if (!func_697(-1232784731, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 61537448:
			if (!func_697(301558156, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case -925071604:
			if (!func_697(1683033662, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
		case 1195508693:
			if (!func_697(-643041038, 1120403456 /* Float: 100f */, 1133084672 /* Float: 275f */))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_450(int iParam0)
{
	return ((aggregate_func_2636(0, iParam0) || aggregate_func_2636(1, iParam0)) || aggregate_func_2636(2, iParam0));
}

int func_451(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = iParam0;
	if (aggregate_func_6969(iParam0) > 2)
	{
		return 1;
	}
	if (((*Global_262996)[iVar0 /*70*/])->f_1.f_16 != 0)
	{
		return 1;
	}
	if (((*Global_262996)[iVar0 /*70*/])->f_1 != 255)
	{
		return 1;
	}
	if (((*Global_262996)[iVar0 /*70*/])->f_1.f_18 != 2147483647)
	{
		return 1;
	}
	return 0;
}

int func_452()
{
	int iVar0;
	int iVar1;
	struct<35> Var2;

	iVar0 = 0;
	Var2.f_8 = -1;
	Var2.f_8.f_1 = -1;
	Var2.f_16.f_12 = -1;
	Var2.f_16.f_12.f_1 = -1;
	Var2.f_16.f_14 = 255;
	Var2.f_16.f_15 = 255;
	iVar1 = 0;
	while (iVar1 < Global_1070355->f_14)
	{
		Var2 = { aggregate_func_7671(iVar1) };
		if (!aggregate_func_8043(&Var2))
		{
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_454()
{
	return Global_1051202->f_78.f_102 > 0;
}

bool func_455()
{
	return Global_1124870->f_1914 > 0;
}

int func_456()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_1100949->f_33[iVar0 /*16*/] != 0)
		{
			if (_NAMESPACE26::_0x93A91A351A07360E(&(Global_1100949->f_33[iVar0 /*16*/])))
			{
				if (&Global_1100949->f_33[iVar0 /*16*/] == Global_1273882->f_15)
				{
					if (aggregate_func_4255((Global_1100949->f_33[iVar0 /*16*/])->f_3.f_5))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

char* func_458(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "Stry";
		case 3:
			return "Proc";
		case 4:
			return "Fetch";
		case 5:
			return "Mini";
		case 8:
			return "Beat";
		case 7:
			return "UGC";
		case 6:
			return "FMA";
		default:
			break;
	}
	return "Unknown";
}

void func_499()
{
	aggregate_func_3000(-1687561002);
	aggregate_func_3000(1957225320);
	aggregate_func_3000(-860696938);
	aggregate_func_3000(-1971474291);
	aggregate_func_3000(-1425946870);
	aggregate_func_3000(-1114426126);
	aggregate_func_3000(-316909020);
	aggregate_func_3000(-1962893335);
	aggregate_func_3000(1351589798);
	aggregate_func_3000(300868838);
	aggregate_func_3000(-1788578071);
	aggregate_func_3000(1157066259);
	aggregate_func_3000(1475953931);
	aggregate_func_3000(2022451711);
	aggregate_func_3000(970924250);
	aggregate_func_3000(-1177590512);
	aggregate_func_3000(-1611076340);
	aggregate_func_2476(446964392);
}

void func_500()
{
	aggregate_func_3000(1209017192);
	aggregate_func_3000(-2143243848);
	aggregate_func_3000(510052409);
	aggregate_func_3000(-644575724);
	aggregate_func_3000(291770965);
	aggregate_func_3000(1700661865);
	aggregate_func_3000(1070723367);
	aggregate_func_3000(1261237250);
	aggregate_func_3000(-109425099);
	aggregate_func_3000(1402472902);
	aggregate_func_3000(1802272784);
	aggregate_func_3000(-1458944281);
	aggregate_func_3000(2108368013);
	aggregate_func_2476(1802272784);
	aggregate_func_2476(-1999825729);
}

void func_501()
{
	aggregate_func_3000(-1232260252);
	aggregate_func_3000(1404611977);
	aggregate_func_3000(-1395712024);
}

void func_502()
{
	aggregate_func_3000(414622870);
	aggregate_func_3000(557551306);
	aggregate_func_3000(-412827149);
	aggregate_func_2476(1802272784);
	aggregate_func_2476(414622870);
}

void func_503()
{
	aggregate_func_3000(531106429);
	aggregate_func_3000(1069611813);
	aggregate_func_3000(1102643191);
	aggregate_func_3000(44502487);
	aggregate_func_3000(-1869016398);
	aggregate_func_3000(806681228);
	aggregate_func_3000(1311984381);
	aggregate_func_3000(-1162254606);
}

bool func_504(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 7:
		case 8:
			return false;
		case 3:
		case 5:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return false;
			}
			break;
	}
	return true;
}

struct<8> func_505(int iParam0, int iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, func_716(iParam0), 64);
	StringConCat(&cVar0, "_nav_camp_", 64);
	StringConCat(&cVar0, func_717(iParam1), 64);
	return cVar0;
}

int func_506(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 84;
		case 0:
			return 45;
		case 2:
			return 104;
		case 4:
			return 63;
		case 1:
			return 76;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 39;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_507(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			func_718(iParam1, iVar0, iVar1, bParam2, bParam3);
			iVar1++;
		}
		iVar0++;
	}
}

void func_518()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (((*Global_1268274)[iVar1 /*20*/])->f_3 & 1 == 0)
	{
		if (((*Global_1268274)[iVar1 /*20*/])->f_3 & 2 != 0)
		{
			iVar0 |= 4;
		}
		if (((*Global_1268274)[iVar1 /*20*/])->f_3 & 4 != 0)
		{
			iVar0 |= 8;
		}
		if (((*Global_1268274)[iVar1 /*20*/])->f_3 & 8 != 0)
		{
			iVar0 |= 16;
		}
		if (((*Global_1268274)[iVar1 /*20*/])->f_3 & 16 != 0)
		{
			iVar0 = 2;
		}
	}
	PLAYER::_0x4EC8BE63B8A5D4EF(PLAYER::PLAYER_ID(), iVar0);
}

int func_521(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 60;
		case 2:
			return 300;
		case 4:
			return 600;
		case 8:
			return 1800;
		case 16:
			return 3600;
		case 32:
			return 7200;
		case 64:
			return 10800;
		case 128:
			return 14400;
		case 256:
			return 18000;
		case 512:
			return 21600;
		default:
			break;
	}
	return 0;
}

void func_522(int iParam0, int iParam1)
{
	if (aggregate_func_4240(Global_1051384->f_2, iParam0))
	{
		return;
	}
	aggregate_func_4241(&(Global_1051384->f_2), (iParam0 || iParam1));
}

bool func_528(int iParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1273422->f_2), iParam0))
	{
		return false;
	}
	return true;
}

void func_532()
{
	int iVar0;

	if (!func_725(2))
	{
		return;
	}
	if (aggregate_func_7305())
	{
		return;
	}
	if (aggregate_func_9690(0) != -1)
	{
		return;
	}
	iVar0 = aggregate_func_9690(1);
	if (iVar0 != -1 && !func_727(iVar0))
	{
		func_728(2);
		aggregate_func_7434(-373925780);
	}
}

int func_533()
{
	return Global_1274493->f_50;
}

int func_534()
{
	return Global_1274493->f_50.f_1;
}

int func_536(int iParam0)
{
	var uVar0;

	if (!aggregate_func_1718(&uVar0))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 41, iParam0, 0, 1))
	{
		return 0;
	}
	return aggregate_func_3449(&uVar0, 7);
}

int func_537()
{
	return Global_1274493->f_50.f_2;
}

int func_539()
{
	char* sVar0;

	sVar0 = MISC::_CREATE_VAR_STRING(0, func_730(func_533(), func_537()));
	return aggregate_func_2975(sVar0, 10000, 0, 0, 0, 1);
}

void func_542()
{
	var uVar0;

	Global_1274493->f_50 = uVar0;
}

int func_544(int iParam0)
{
	return &(Global_1274493->f_50.f_3[iParam0]);
}

int func_545(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -667134878;
		case 1:
			return -1813872822;
		case 2:
			return -887362116;
		case 3:
			return -1221663008;
		case 4:
			return -1208093116;
		case 5:
			return -551064688;
		case 6:
			return -373925780;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_546(int iParam0)
{
	return aggregate_func_1963(&(Global_1274493->f_50.f_3), aggregate_func_7675(iParam0, 1), 1);
}

int func_548()
{
	var uVar0;

	if (!aggregate_func_1718(&uVar0))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	return aggregate_func_3449(&uVar0, 0);
}

int func_550(int iParam0)
{
	var uVar0;

	if (!aggregate_func_1718(&uVar0))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 36, 0, 0, 0))
	{
		return 0;
	}
	return aggregate_func_3449(&uVar0, 8);
}

struct<4> func_551(int iParam0, int iParam1)
{
	var uVar0;
	struct<4> Var5;
	int iVar9;

	if (!aggregate_func_1718(&uVar0))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 36, 0, 0, 0))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 37, iParam1, 0, 1))
	{
		return Var5;
	}
	iVar9 = func_733(&uVar0);
	return aggregate_func_8587(iVar9);
}

void func_552(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_735(uParam0, iParam1))
	{
		return;
	}
	iVar0 = func_736();
	if (iVar0 == -1)
	{
		return;
	}
	if (!aggregate_func_8352(*uParam0, &uVar1, 1, 255, 0, 0))
	{
		return;
	}
	func_738(iVar0, &uVar1, iParam1, uParam0->f_3);
}

bool func_557(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<4> Var0;
	struct<5> Var4;
	var uVar9;
	int iVar10;
	int iVar11;

	if (!aggregate_func_1718(&Var4))
	{
		return false;
	}
	if (!aggregate_func_3460(&Var4, 13, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3460(&Var4, 17, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3460(&Var4, 19, iParam0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3460(&Var4, 20, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3460(&Var4, 23, iParam1, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3460(&Var4, 43, 0, 0, 0))
	{
		if (aggregate_func_3460(&Var4, 24, 0, 0, 0))
		{
			if (!aggregate_func_3460(&Var4, 25, iParam2, 0, 1))
			{
				return false;
			}
			if (!aggregate_func_3460(&Var4, 43, 0, 0, 1))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	uVar9 = Var4.f_1;
	iVar11 = aggregate_func_3449(&Var4, 9);
	iVar10 = 0;
	while (iVar10 <= (iVar11 - 1))
	{
		Var4.f_1 = uVar9;
		if (!aggregate_func_3460(&Var4, 44, iVar10, 0, 1))
		{
			return false;
		}
		Var0 = { aggregate_func_8188(Var4) };
		if (!aggregate_func_3799(&Var0, iParam3))
		{
			return false;
		}
		iVar10++;
	}
	return true;
}

void func_560(int iParam0)
{
	Global_1274493->f_2.f_45 = iParam0;
}

var func_562(int iParam0)
{
	var uVar0;

	if (!aggregate_func_9291(&uVar0, iParam0, -337291755))
	{
		return 0;
	}
	return aggregate_func_9292(&uVar0);
}

struct<2> func_564(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var5;
	var uVar7;
	var uVar8;

	if (!aggregate_func_1718(&uVar0))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 19, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 34, 0, 0, 0))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 35, iParam1, 0, 0))
	{
		return Var5;
	}
	uVar7 = aggregate_func_9697(&uVar0);
	uVar8 = aggregate_func_9698(&uVar0);
	return aggregate_func_4257(uVar7, uVar8);
}

void func_565(int iParam0, struct<2> Param1)
{
	(Global_1274493->f_2[iParam0 /*22*/])->f_18 = { Param1 };
}

bool func_566(int iParam0)
{
	return func_568(iParam0, 0) != 0;
}

int func_568(int iParam0, int iParam1)
{
	var uVar0;

	if (!aggregate_func_1718(&uVar0))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	return func_745(&uVar0, iParam1);
}

void func_571(int iParam0, int iParam1, var uParam2)
{
	(*Global_1274493->f_2[iParam0 /*22*/])[iParam1] = uParam2;
}

int func_572()
{
	return Global_1274493->f_2.f_45;
}

int func_573(int iParam0)
{
	return (Global_1274493->f_2[iParam0 /*22*/])->f_16;
}

int func_574()
{
	return Global_1274493->f_48;
}

int func_575()
{
	return Global_1274493->f_48.f_1;
}

var func_576(int iParam0, int iParam1)
{
	return Global_1274493->f_2[iParam0 /*22*/][iParam1];
}

int func_577(int iParam0)
{
	return (Global_1274493->f_2[iParam0 /*22*/])->f_17 * 60;
}

struct<2> func_578(int iParam0)
{
	return (Global_1274493->f_2[iParam0 /*22*/])->f_18;
}

bool func_579(int iParam0)
{
	return (Global_1274493->f_2[iParam0 /*22*/])->f_20;
}

int func_580(int iParam0)
{
	return &(Global_1274493->f_76[iParam0 /*17*/]);
}

int func_581(int iParam0)
{
	return (Global_1274493->f_2[iParam0 /*22*/])->f_21;
}

void func_582(int iParam0)
{
	Global_1274493->f_48.f_1 = iParam0;
}

void func_587(int iParam0, var uParam1)
{
	aggregate_func_7568(iParam0, uParam1->f_3.f_2);
	aggregate_func_7568(iParam0, uParam1->f_3.f_3);
	aggregate_func_7568(iParam0, uParam1->f_3.f_4);
	aggregate_func_8588(iParam0, uParam1->f_3);
	aggregate_func_7568(iParam0, uParam1->f_3.f_1);
	func_756(iParam0, *uParam1);
	aggregate_func_8588(iParam0, uParam1->f_2);
}

void func_588(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<6> Var6;
	struct<5> Var12;
	struct<8> Var17;

	Var17 = -1;
	Var17.f_1 = -1;
	Var17.f_3 = -1;
	Var17.f_3.f_1 = -1;
	Var17.f_3.f_2 = -1;
	Var17.f_3.f_3 = -1;
	Var17.f_3.f_4 = -1;
	Var17.f_3 = { aggregate_func_3709(iParam0) };
	iVar1 = func_758(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var6 = { func_759(Var17, iVar0) };
		func_760(&Var6, iParam0);
		iVar0++;
	}
	iVar1 = func_761(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var12 = { func_762(&Var17, iVar0) };
		func_763(&Var12, iParam0);
		iVar0++;
	}
	iVar1 = func_764(Var17.f_3, Var17.f_3.f_1, Var17.f_3.f_2);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var2 = { func_765(Var17, iVar0) };
		func_552(&Var2, iParam0);
		iVar0++;
	}
}

struct<8> func_593(int iParam0)
{
	struct<8> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	MISC::_COPY_MEMORY(&Var0, Global_1274493->f_55.f_4[iParam0 /*8*/], 8);
	return Var0;
}

void func_594(int iParam0)
{
	struct<4> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	func_587(iParam0, &Var0);
}

bool func_595(int iParam0)
{
	return (Global_1274493->f_55.f_1.f_2 && iParam0) != 0;
}

var func_596()
{
	return Global_1103536->f_21;
}

int func_597(int iParam0)
{
	return Global_1103536[iParam0];
}

void func_602(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar11;

	iVar0 = aggregate_func_6925(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (!_NAMESPACE26::_0x93A91A351A07360E(iVar0))
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_3 = -1;
		Var1.f_4 = -1;
		Var1.f_5 = -1;
		Var1.f_6 = -1;
		Var1.f_6.f_1 = -1;
		Var1.f_9 = 2;
		Var1 = { aggregate_func_8391(iParam0) };
		if (aggregate_func_4255(Var1))
		{
			iVar11 = aggregate_func_4989(&Var1);
			if (iVar11 != func_778(iParam0))
			{
				if (aggregate_func_4987(iVar11))
				{
					func_780(iParam0, iVar11);
				}
			}
		}
		aggregate_func_8589(iParam0);
	}
}

void func_603(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = aggregate_func_3542(iVar0, -1);
	iVar4 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	if (aggregate_func_6924(iVar1))
	{
		if (aggregate_func_6925(iVar1) == iVar4)
		{
			return;
		}
	}
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar5 = aggregate_func_6925(iVar2);
		if (aggregate_func_7213(iVar2) != -1)
		{
		}
		else
		{
			if (iVar5 == 0)
			{
				iVar3 = iVar2;
			}
			else if (!_NAMESPACE26::_0x93A91A351A07360E(iVar5))
			{
				iVar3 = iVar2;
			}
			else
			{
				if (iVar5 == iVar4)
				{
					return;
				}
				iVar2++;
			}
			if (iVar3 == -1)
			{
				return;
			}
			func_784(iVar3, iVar4);
		}
	}
}

void func_604(int iParam0)
{
	var uVar0;
	bool bVar1;

	switch (aggregate_func_7213(iParam0))
	{
		case -1:
			bVar1 = func_785(iParam0, &uVar0);
			break;
		case 0:
			bVar1 = func_786(iParam0, &uVar0);
			break;
		case 1:
			bVar1 = func_787(iParam0, &uVar0);
			break;
		case 2:
			bVar1 = func_788(iParam0, &uVar0);
			break;
		case 3:
			bVar1 = func_789(iParam0, &uVar0);
			break;
		case 4:
			bVar1 = func_790(iParam0, &uVar0);
			break;
		case 5:
			bVar1 = func_791(iParam0, &uVar0);
			break;
		case 6:
			bVar1 = func_792(iParam0, &uVar0);
			break;
		case 7:
			bVar1 = func_793(iParam0, &uVar0);
			break;
		case 9:
			bVar1 = func_794(iParam0, &uVar0);
			break;
		case 8:
			bVar1 = func_795(iParam0, &uVar0);
			break;
		default:
			break;
	}
	if (bVar1)
	{
		func_797(iParam0, uVar0, func_796(iParam0));
	}
}

void func_605()
{
	func_798(3, (func_597(3) + 1 % 32));
	func_798(0, (func_597(0) + 1 % 32));
}

void func_606()
{
	int iVar0;
	struct<13> Var1;
	struct<4> Var14;

	iVar0 = aggregate_func_3542(PLAYER::PLAYER_ID(), -1);
	if (!aggregate_func_6924(iVar0))
	{
		return;
	}
	Var1 = { aggregate_func_8362(iVar0) };
	if (!func_800(Var1.f_5, Var1.f_3))
	{
		return;
	}
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_3 = -1;
	Var14 = { Var1.f_5 };
	if (aggregate_func_4255(Var1.f_5))
	{
		Var14.f_3 = Var1.f_3;
		Var14.f_2 = aggregate_func_4376(Var1.f_5);
	}
	else
	{
		Var14.f_3 = -1;
		Var14.f_2 = 0;
	}
	func_801(&Var14);
}

void func_607()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;

	iVar8 = PLAYER::PLAYER_ID();
	bVar2 = aggregate_func_6694(iVar8, 1);
	bVar3 = aggregate_func_6694(iVar8, 2);
	bVar0 = aggregate_func_6694(iVar8, 4);
	bVar1 = aggregate_func_6694(iVar8, 8);
	bVar4 = aggregate_func_6694(iVar8, 32);
	bVar5 = (aggregate_func_4255(aggregate_func_7387()) && !aggregate_func_4255(aggregate_func_9117()));
	bVar7 = aggregate_func_8461() == true;
	bVar6 = (aggregate_func_8437() >= 19 || aggregate_func_8437() == 0);
	if (aggregate_func_9116() != _NAMESPACE26::_0x901E0DC25080C8B9(iVar8) && (aggregate_func_7749() == 4 || (bVar4 && !aggregate_func_4497(255))))
	{
		if (bVar4)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(2000);
			}
		}
		func_810();
		return;
	}
	if (bVar4)
	{
		if ((aggregate_func_9111() == 0 && !bVar0) || bVar1)
		{
			if (CAM::IS_SCREEN_FADED_IN() && !aggregate_func_4497(255))
			{
				aggregate_func_3780(4);
				aggregate_func_3780(8);
				aggregate_func_3780(32);
				aggregate_func_5300(0);
				aggregate_func_8503(aggregate_func_4464());
			}
		}
	}
	if ((aggregate_func_8012() == -1 && !bVar5) && ((bVar7 && bVar6) || !bVar7))
	{
		if (bVar2)
		{
			func_810();
		}
		return;
	}
	iVar9 = aggregate_func_3542(iVar8, -1);
	if (!aggregate_func_6924(iVar9))
	{
		return;
	}
	if (((((!bVar5 && ((bVar7 && bVar6) || !bVar7)) && aggregate_func_9116() != _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && bVar3) && !bVar0) && aggregate_func_7749() != 2)
	{
		func_810();
		return;
	}
	if (!bVar2)
	{
		return;
	}
	if (!bVar5 && aggregate_func_7749() != 4)
	{
		if (aggregate_func_8012() != 4)
		{
			return;
		}
	}
	if (!bVar3)
	{
		switch (aggregate_func_8012())
		{
			case 4:
				if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
				{
					aggregate_func_3577(2);
				}
				break;
			default:
				aggregate_func_3577(2);
				break;
		}
		return;
	}
	if (!bVar1)
	{
		return;
	}
	func_810();
}

void func_608()
{
	int iVar0;

	iVar0 = func_597(4);
	if (aggregate_func_7557(iVar0))
	{
		aggregate_func_3581(iVar0);
	}
	else
	{
		aggregate_func_3581(iVar0);
	}
}

void func_609()
{
	int iVar0;
	int iVar1;

	iVar0 = func_597(5);
	iVar1 = iVar0;
	if (func_820(iVar1))
	{
		aggregate_func_3642(iVar1);
	}
	else
	{
		aggregate_func_3642(iVar1);
	}
}

void func_610()
{
	if (aggregate_func_7630(255))
	{
		func_824(1);
	}
	else
	{
		func_824(2);
	}
}

void func_611()
{
	int iVar0;
	int iVar1;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!aggregate_func_8462(iVar0, 1024))
	{
		return;
	}
	if (aggregate_func_4255(aggregate_func_7387()))
	{
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (aggregate_func_7804(32768))
	{
		if ((iVar1 - func_827()) < Global_1901929->f_295.f_36)
		{
			return;
		}
	}
	func_828(iVar0);
	aggregate_func_7817(iVar1);
	aggregate_func_8011(32768);
}

void func_612()
{
	int iVar0;
	struct<4> Var1;

	if (!func_831())
	{
		return;
	}
	if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != aggregate_func_8504())
	{
		func_833();
		return;
	}
	iVar0 = aggregate_func_7053(aggregate_func_8504());
	if (iVar0 == -1)
	{
		return;
	}
	if (!func_835(iVar0))
	{
		return;
	}
	if (aggregate_func_7213(iVar0) != 0)
	{
		return;
	}
	if (!aggregate_func_4359(func_836(), aggregate_func_8391(iVar0)) && aggregate_func_4255(aggregate_func_8391(iVar0)))
	{
		func_833();
		return;
	}
	if (aggregate_func_7082(iVar0, 2))
	{
		func_833();
		return;
	}
	Var1.f_1 = -1;
	func_839(&Var1);
	aggregate_func_1802(func_840(), func_841(), func_842(), func_843(), func_836(), Var1, 1);
	func_833();
}

void func_613()
{
	struct<4> Var0;
	int iVar4;

	Var0 = 2;
	iVar4 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::_0x255A5EF65EDA9167(iVar4) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
	{
		aggregate_func_3720(iVar4, &Var0);
		if (Var0.f_3)
		{
			aggregate_func_6606(&Var0);
		}
	}
	if (func_847(2))
	{
		aggregate_func_4480(&Var0);
		aggregate_func_2630(&Var0);
		func_850(2);
	}
}

void func_614()
{
	struct<4> Var0;
	int iVar4;

	Var0 = 2;
	iVar4 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::_0x255A5EF65EDA9167(iVar4) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
	{
		aggregate_func_3720(iVar4, &Var0);
		if (Var0.f_3)
		{
			aggregate_func_6606(&Var0);
		}
	}
	if (func_847(4))
	{
		aggregate_func_4480(&Var0);
		aggregate_func_2630(&Var0);
		func_850(4);
	}
}

void func_615()
{
	struct<4> Var0;
	var uVar4;
	int iVar8;
	int iVar9;

	Var0 = 2;
	uVar4 = 2;
	if (PLAYER::PLAYER_ID() == Global_1099293->f_341)
	{
		iVar8 = 0;
		while (iVar8 <= 6)
		{
			if (!NETWORK::_0x255A5EF65EDA9167(&(Global_1099293->f_342[iVar8])))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1099293->f_342[iVar8])))
			{
			}
			else
			{
				aggregate_func_3720(&(Global_1099293->f_342[iVar8]), &uVar4);
				if (!uVar4.f_3)
				{
				}
				else
				{
					iVar9 = 0;
					while (iVar9 <= 1)
					{
						Var0[iVar9] = (Var0[iVar9] || uVar4[iVar9]) // PointerArith;
						iVar9++;
					}
				}
			}
			iVar8++;
		}
		Var0.f_3 = 1;
	}
	func_856(&Var0);
}

void func_616()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_597(6);
	iVar3 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (iVar0 == aggregate_func_7645(iVar1))
		{
			if (aggregate_func_8464(iVar1) != 0)
			{
				bVar2 = true;
			}
		}
	else
	{
		}
		iVar1++;
	}
	if (!bVar2)
	{
		if (aggregate_func_8385(iVar3, iVar0))
		{
			aggregate_func_3871(iVar0);
			return;
		}
	}
}

void func_618()
{
	func_798(1, (func_597(1) + 1 % 32));
	func_798(2, (func_597(2) + 1 % 32));
	func_798(4, (func_597(4) + 1 % 35));
	func_798(5, (func_597(5) + 1 % 70));
	func_798(6, (func_597(6) + 1 % 59));
}

void func_621(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1070355->f_17915.f_20;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (aggregate_func_7777(iVar2) != 8)
		{
		}
		else
		{
			Global_1070355->f_17915.f_19 = (Global_1070355->f_17915.f_19 || ((*Global_1055965)[iVar1 /*436*/])->f_390[iParam0]) // PointerArith;
			Global_1070355->f_17915.f_20 = (Global_1070355->f_17915.f_20 && ((*Global_1055965)[iVar1 /*436*/])->f_390.f_19[iParam0]) // PointerArith;
		}
		iVar1++;
	}
	func_862(iParam0);
	if (Global_1070355->f_17915.f_19 == &Global_1070355->f_17915[iParam0] && iVar0 == Global_1070355->f_17915.f_20)
	{
		*iParam1 = 1;
	}
	else
	{
		Global_1070355->f_17915.f_23 = 1;
	}
}

void func_622(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = (Global_1070355->f_17915.f_22 + iVar1);
		if (iVar2 > 31)
		{
			bVar0 = true;
		}
		else
		{
			if (MISC::IS_BIT_SET(&(((*Global_1055965)[iParam0 /*436*/])->f_390[iParam1]), iVar2))
			{
				MISC::CLEAR_BIT(((*Global_1055965)[iParam0 /*436*/])->f_390.f_19[iParam1], iVar2);
			}
			else if (!MISC::IS_BIT_SET(&(Global_1070355->f_17915[iParam1]), iVar2))
			{
				MISC::SET_BIT(((*Global_1055965)[iParam0 /*436*/])->f_390.f_19[iParam1], iVar2);
			}
			else
			{
				iVar3 = (iParam1 * 31 + iVar2);
				if (iVar3 > 545)
				{
					bVar0 = true;
				}
				else
				{
					if (func_441(iVar3))
					{
						MISC::SET_BIT(((*Global_1055965)[iParam0 /*436*/])->f_390.f_19[iParam1], iVar2);
					}
					else
					{
						MISC::CLEAR_BIT(((*Global_1055965)[iParam0 /*436*/])->f_390.f_19[iParam1], iVar2);
					}
					iVar1++;
				}
				Global_1070355->f_17915.f_22 = iVar2 + 1;
				if (bVar0 || iVar2 == 31)
				{
					if (Global_1070355->f_17915.f_20 != &((*Global_1055965)[iParam0 /*436*/])->f_390.f_19[iParam1])
					{
						Global_1070355->f_17915.f_20 = (Global_1070355->f_17915.f_20 && ((*Global_1055965)[iParam0 /*436*/])->f_390.f_19[iParam1]) // PointerArith;
					}
					Global_1070355->f_17915.f_23 = 2;
				}
			}
		}
	}
}

var func_623(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar1))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		else if (!MISC::IS_BIT_SET(iParam1, iVar1))
		{
			MISC::SET_BIT(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_636()
{
	return Global_1274070->f_419.f_1;
}

void func_637()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_877())
	{
		return;
	}
	if (!func_878())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = BUILTIN::SHIFT_LEFT(1, iVar0);
		iVar2 = iVar1;
		if (!func_879(iVar2))
		{
		}
		else if (!func_880(iVar2))
		{
		}
		else
		{
			func_881(iVar2);
		}
		else
		{
			iVar0++;
		}
	}
}

int func_638()
{
	return Global_1274070->f_419.f_2;
}

int func_642()
{
	return Global_1274070->f_374.f_3;
}

int func_643(int iParam0, int iParam1)
{
	return (*Global_1274070)[iParam0 /*37*/][iParam1];
}

void func_664(int iParam0, int iParam1, int iParam2)
{
	(*Global_1274070->f_404[iParam0 /*7*/])[iParam1 /*3*/] = iParam2;
}

void func_667(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	if ((!PED::_0x91A5F9CBEBB9D936(&(Global_1198018->f_1099[iParam0 /*3*/])) || (Global_1198018->f_1099[iParam0 /*3*/])->f_1 != iParam1) || (Global_1198018->f_1099[iParam0 /*3*/])->f_2 != iParam2)
	{
		func_400(iParam0);
		vVar0 = { ((*Global_1198018->f_48[iParam1 /*21*/])[iParam2 /*4*/])->f_1 };
		vVar3 = { 2f, 2f, 2f };
		Global_1198018->f_1099[iParam0 /*3*/] = PED::ADD_SCENARIO_BLOCKING_AREA((vVar0.x - vVar3.x), (vVar0.y - vVar3.y), (vVar0.z - vVar3.z), (vVar0.x + vVar3.x), (vVar0.y + vVar3.y), (vVar0.z + vVar3.z), 0, 16);
		(Global_1198018->f_1099[iParam0 /*3*/])->f_1 = iParam1;
		(Global_1198018->f_1099[iParam0 /*3*/])->f_2 = iParam2;
	}
}

bool func_668(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (((*Global_1273449)[iParam0 /*2*/])->f_1 != iParam1)
	{
		return false;
	}
	if (!aggregate_func_3750(1, iParam0))
	{
		return false;
	}
	if (!aggregate_func_3750(8, iParam0))
	{
		return false;
	}
	if (!aggregate_func_3750(4, iParam0))
	{
		return false;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1273422->f_2), iParam0))
	{
		return false;
	}
	return true;
}

bool func_669(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (Global_1273422->f_22 >= 3)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&uParam0, iVar0))
		{
		}
		else if (!func_668(iVar0, iParam1))
		{
			SCRIPTS::_0xD426E2E3288469D6(&uParam0, iVar0);
		}
		iVar0++;
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam0))
	{
		return true;
	}
	func_882(Global_1273422->f_3[Global_1273422->f_22 /*6*/]);
	Global_1273422->f_3[Global_1273422->f_22 /*6*/] = iParam1;
	(Global_1273422->f_3[Global_1273422->f_22 /*6*/])->f_2 = uParam0;
	SCRIPTS::_0xFFDDF802279BE128(&(Global_1273422->f_2), &((Global_1273422->f_3[Global_1273422->f_22 /*6*/])->f_2), &uVar1);
	Global_1273422->f_2 = uVar1;
	Global_1273422->f_22++;
	return true;
}

void func_671(var uParam0, int iParam1, int iParam2)
{
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1273422->f_2), iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_2), iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_4), iParam2);
	SCRIPTS::_0xD426E2E3288469D6(&(uParam0->f_5), iParam2);
	if (uParam0->f_3 == iParam1)
	{
		uParam0->f_3 = 255;
	}
}

void func_672(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 < 0 || iParam0 >= 3)
	{
		return;
	}
	if (Global_1273422->f_22 <= 0)
	{
		return;
	}
	iVar0 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1273422->f_2), 0);
	iVar1 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&(Global_1273422->f_2), 1);
	iVar2 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&((Global_1273422->f_3[iParam0 /*6*/])->f_2), 0);
	iVar3 = SCRIPTS::GET_BLOCK_OF_PLAYER_BITS(&((Global_1273422->f_3[iParam0 /*6*/])->f_2), 1);
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1273422->f_2), 0, (iVar0 - iVar2));
	SCRIPTS::SET_BLOCK_OF_PLAYER_BITS(&(Global_1273422->f_2), 1, (iVar1 - iVar3));
	Global_1273422->f_22 = (Global_1273422->f_22 - 1);
	*(Global_1273422->f_3[iParam0 /*6*/]) = { *(Global_1273422->f_3[Global_1273422->f_22 /*6*/]) };
	func_882(Global_1273422->f_3[Global_1273422->f_22 /*6*/]);
}

void func_682(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
	uParam0->f_8 = 0;
}

void func_684(var uParam0)
{
	aggregate_func_4600(uParam0);
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = 0;
}

void func_685(var uParam0)
{
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0f;
	uParam0->f_9 = -1;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_15 = 0;
	uParam0->f_17 = 0;
	uParam0->f_21 = -15;
	uParam0->f_22 = 0;
}

void func_686(var uParam0)
{
	int iVar0;

	aggregate_func_4313(uParam0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3[iVar0] = 0f;
		iVar0++;
	}
}

void func_689(var uParam0)
{
	struct<2> Var0;
	int iVar2;

	Var0 = -1;
	Var0.f_1 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		*((*uParam0)[iVar2 /*2*/]) = { Var0 };
		iVar2++;
	}
}

void func_690(var uParam0)
{
	struct<98> Var0;

	Var0 = 32;
	Var0.f_1 = 255;
	Var0.f_1.f_3 = 255;
	Var0.f_1.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3 = 255;
	*uParam0 = { Var0 };
}

int func_693(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 0;
		case 2:
			return 473295046;
		case 3:
			return -1738165526;
		case 4:
			return -699277634;
		case 5:
			return 1497516462;
		case 6:
			return 2016141805;
		case 7:
			return 1010885152;
		case 8:
			return -502324015;
		case 9:
			return 1607768502;
		case 10:
			return -1852605133;
		case 11:
			return -129643890;
		case 12:
			return -1433686245;
		case 13:
			return -1711895055;
		case 14:
			return 192515737;
		case 15:
			return 426191476;
		case 16:
			return 187862543;
		case 17:
			return 417081698;
		case 18:
			return 791041526;
		case 19:
			return 965986934;
		case 20:
			return 1350371763;
		case 21:
			return -1257057567;
		case 22:
			return -1419919497;
		case 23:
			return -1718674470;
		case 24:
			return -35658630;
		case 25:
			return -2069570138;
		case 26:
			return -1838712533;
		case 27:
			return 1140218954;
		case 28:
			return -108307814;
		case 29:
			return -1123615607;
		case 30:
			return -261141318;
		case 31:
			return 440043364;
		case 32:
			return -1425209566;
		case 33:
			return -1666278201;
		case 34:
			return 405586984;
		case 35:
			return 1509509592;
		case 36:
			return -959357075;
		case 37:
			return -1311865656;
		case 38:
			return 1177464213;
		case 39:
			return 2091701359;
		case 40:
			return -919512195;
		case 41:
			return -1925798111;
		case 42:
			return 420709909;
		case 43:
			return 1703426636;
		case 44:
			return -939420910;
		case 45:
			return -1187950766;
		case 46:
			return -1170496998;
		case 47:
			return 356365161;
		case 48:
			return 753127042;
		case 49:
			return -2038424081;
		case 50:
			return 1485195808;
		case 51:
			return 1884271742;
		case 52:
			return 269047710;
		case 53:
			return -1674179981;
		case 54:
			return -1835851517;
		case 55:
			return -1838352012;
		case 56:
			return -1053549743;
		case 57:
			return -2073072369;
		case 58:
			return -741351766;
		case 59:
			return -1717960576;
		case 60:
			return 210001842;
		case 61:
			return 2037589949;
		case 62:
			return -1741667789;
		case 63:
			return -853383233;
		case 64:
			return 330026330;
		case 65:
			return -664512648;
		case 66:
			return 1691618738;
		case 67:
			return -334729750;
		case 68:
			return 1867912207;
		case 69:
			return -628542779;
		case 70:
			return 1500064347;
		case 71:
			return -1414537028;
		case 72:
			return 38162571;
		case 73:
			return 1350391819;
		case 74:
			return 54073871;
		case 75:
			return 618699440;
		case 76:
			return -748969569;
		case 77:
			return -1062490780;
		case 78:
			return -683458244;
		case 79:
			return 273461605;
		case 80:
			return 1360745816;
		case 81:
			return -857964358;
		case 82:
			return -868076593;
		case 83:
			return 1205826474;
		case 84:
			return 153152452;
		case 85:
			return 2136753624;
		case 86:
			return -796902762;
		case 87:
			return -63926460;
		case 88:
			return 374115931;
		case 89:
			return 1982676972;
		case 90:
			return -2034257789;
		case 91:
			return 1665756137;
		case 92:
			return 1766284049;
		case 93:
			return 280705402;
		case 94:
			return 1926308480;
		case 95:
			return -150493654;
		case 96:
			return -1271608261;
		case 97:
			return 1846061697;
		case 98:
			return -1145519186;
		case 99:
			return 106479759;
		case 100:
			return 1485494263;
		case 101:
			return -356975260;
		case 102:
			return -2106214197;
		case 103:
			return -1405998267;
		case 104:
			return -1029225159;
		case 105:
			return 1609506757;
		case 106:
			return 439465264;
		case 107:
			return 757752139;
		case 108:
			return 1064154891;
		case 109:
			return -468693731;
		case 110:
			return -2021582629;
		case 111:
			return -1232809834;
		case 112:
			return 141950038;
		case 113:
			return 544152906;
		case 114:
			return -1532284567;
		case 115:
			return -524145696;
		case 116:
			return 1626481264;
		case 117:
			return 282809459;
		case 118:
			return 1466547629;
		case 119:
			return -238080464;
		case 120:
			return 1015669983;
		case 121:
			return -1831552326;
		case 122:
			return -1151084372;
		case 123:
			return 1453909576;
		case 124:
			return -1223121209;
		case 125:
			return 1643531967;
		case 126:
			return 630808005;
		case 127:
			return -9438024;
		case 128:
			return -534215902;
		case 129:
			return -1215445344;
		case 130:
			return -254562075;
		case 131:
			return 320943355;
		case 132:
			return 689024866;
		case 133:
			return 1160698568;
		case 134:
			return -1179948750;
		case 135:
			return 1713221411;
		case 136:
			return 300221584;
		case 137:
			return -220282381;
		case 138:
			return -1329135070;
		case 139:
			return -1763509974;
		case 140:
			return 224551212;
		case 141:
			return -397760715;
		case 142:
			return 1074873669;
		case 143:
			return -86199844;
		case 144:
			return -1582926490;
		case 145:
			return -1579419919;
		case 146:
			return 478884033;
		case 147:
			return -191424539;
		case 148:
			return 1660024373;
		case 149:
			return -1063147448;
		case 150:
			return -950054349;
		case 151:
			return 2639906;
		case 152:
			return -80522843;
		case 153:
			return -1523910291;
		case 154:
			return -1206122982;
		case 155:
			return -666014935;
		case 156:
			return 1164928979;
		case 157:
			return 527226204;
		case 158:
			return 1213993593;
		case 159:
			return 1944170089;
		case 160:
			return -350863510;
		case 161:
			return 1557082963;
		case 162:
			return 249726958;
		case 163:
			return -1952856164;
		case 164:
			return 1433244935;
		case 165:
			return -99303535;
		case 166:
			return 1512816328;
		case 167:
			return 1207048789;
		case 168:
			return -1230112817;
		case 169:
			return -1278074582;
		case 170:
			return -1436021162;
		case 171:
			return 407136781;
		case 172:
			return -538880323;
		case 173:
			return -538889627;
		case 174:
			return -1056767524;
		case 175:
			return -182889087;
		case 176:
			return 704802028;
		case 177:
			return 588987611;
		case 178:
			return 2008888900;
		case 179:
			return 1649996811;
		case 180:
			return 227918160;
		case 181:
			return 168171957;
		case 182:
			return 1193080109;
		case 183:
			return -639037538;
		case 184:
			return -491981251;
		case 185:
			return -618620429;
		case 186:
			return 373691918;
		case 187:
			return 2019386373;
		case 188:
			return -664252410;
		case 189:
			return 2109952320;
		case 190:
			return 2024121624;
		case 191:
			return -1077783786;
		case 192:
			return -2101264851;
		case 193:
			return 1850082804;
		case 194:
			return -2058120606;
		case 195:
			return 311708813;
		case 196:
			return 434558613;
		case 197:
			return 1822001510;
		case 198:
			return -1612662716;
		case 199:
			return 1306158345;
		case 200:
			return 1952610440;
		case 201:
			return -223469678;
		case 202:
			return -404698347;
		case 203:
			return 1517904467;
		case 204:
			return 689930684;
		case 205:
			return -1957523409;
		case 206:
			return -1524512402;
		case 207:
			return 1399676951;
		case 208:
			return 1441416901;
		case 209:
			return 1410198831;
		case 210:
			return 1376646519;
		case 211:
			return 931649776;
		case 212:
			return -434590080;
		case 213:
			return 1743048395;
		case 214:
			return 449774763;
		case 215:
			return -764163380;
		case 216:
			return 1947931439;
		case 217:
			return 1186594126;
		case 218:
			return 469053995;
		case 219:
			return 476714362;
		case 220:
			return -1706438978;
		case 221:
			return -1164215952;
		case 222:
			return -1236261996;
		case 223:
			return -879507474;
		case 224:
			return 26245360;
		case 225:
			return -515561750;
		case 226:
			return -1060078174;
		case 227:
			return 817925178;
		case 228:
			return 198200492;
		case 229:
			return -1124061431;
		case 230:
			return 52706132;
		case 231:
			return -259123672;
		case 232:
			return -811637947;
		case 233:
			return 514932331;
		case 234:
			return 945612176;
		case 235:
			return -503955743;
		case 236:
			return -785605431;
		case 237:
			return -978957786;
		case 238:
			return 559573222;
		case 239:
			return -1818850842;
		case 240:
			return -792853067;
		case 241:
			return 2127577956;
		case 242:
			return 1151197909;
		case 243:
			return -1799960545;
		case 244:
			return -75024673;
		case 245:
			return 1250636944;
		case 246:
			return -828139293;
		case 247:
			return -644722288;
		case 248:
			return -789397228;
		case 249:
			return 1358491857;
		case 250:
			return 723021499;
		case 251:
			return -2022369555;
		case 252:
			return -1825294305;
		case 253:
			return -270094635;
		case 254:
			return -464836488;
		case 255:
			return -1282804314;
		case 256:
			return 1352699670;
		case 257:
			return -389056691;
		case 258:
			return -233743613;
		case 259:
			return 1203043430;
		case 260:
			return 299694527;
		case 261:
			return -1949204933;
		case 262:
			return -1824738758;
		case 263:
			return -2020023971;
		case 264:
			return 522677506;
		case 265:
			return 1522511407;
		case 266:
			return 371850993;
		case 267:
			return 2080210939;
		case 268:
			return 171499483;
		case 269:
			return 1050128548;
		case 270:
			return 868326136;
		case 271:
			return 235928616;
		case 272:
			return 345808947;
		case 273:
			return -1014145132;
		case 274:
			return -1840704908;
		case 275:
			return -25901845;
		case 276:
			return 94263042;
		case 277:
			return -2106445152;
		case 278:
			return 409602249;
		case 279:
			return 651395116;
		case 280:
			return 1488286867;
		case 281:
			return 665676602;
		case 282:
			return 8924991;
		case 283:
			return 932909855;
		case 284:
			return 2051822093;
		case 285:
			return -1241340344;
		case 286:
			return -1558439474;
		case 287:
			return 442317566;
		case 288:
			return 417525590;
		case 289:
			return 1583012985;
		case 290:
			return 479419429;
		case 291:
			return 2077022393;
		case 292:
			return 1167397384;
		case 293:
			return 2024769126;
		case 294:
			return -154581735;
		case 295:
			return 976539083;
		case 296:
			return -1530132748;
		case 297:
			return 664571177;
		case 298:
			return -349064220;
		case 299:
			return 1776302352;
		case 300:
			return -523522517;
		case 301:
			return 1591451572;
		case 302:
			return -736853952;
		case 303:
			return 1478132521;
		case 304:
			return -360036154;
		case 305:
			return 2024383613;
		case 306:
			return -622554983;
		case 307:
			return 1954026328;
		case 308:
			return -1764522338;
		case 309:
			return -76237062;
		case 310:
			return 1221801385;
		case 311:
			return -306246697;
		case 312:
			return -1847672446;
		case 313:
			return -545450213;
		case 314:
			return -1080627546;
		case 315:
			return 885203519;
		case 316:
			return 459290420;
		case 317:
			return -1700452710;
		case 318:
			return 1488453464;
		case 319:
			return -299522880;
		case 320:
			return -640663440;
		case 321:
			return -1447311849;
		case 322:
			return 302205488;
		case 323:
			return 26054262;
		case 324:
			return 2113625508;
		case 325:
			return 1549124796;
		case 326:
			return -502473159;
		case 327:
			return 229371495;
		case 328:
			return -781631220;
		case 329:
			return 1708045337;
		case 330:
			return 1166612791;
		case 331:
			return 74872959;
		case 332:
			return 1582370975;
		case 333:
			return -330120947;
		case 334:
			return -333135263;
		case 335:
			return 1908151693;
		case 336:
			return -1943021821;
		case 337:
			return -1585840296;
		case 338:
			return -510945576;
		case 339:
			return -2043909922;
		case 340:
			return -1145153057;
		case 341:
			return 589380360;
		case 342:
			return 468797819;
		case 343:
			return -632127260;
		case 344:
			return 965467037;
		case 345:
			return -209894800;
		case 346:
			return -279765076;
		case 347:
			return 1238086793;
		case 348:
			return -1344601768;
		case 349:
			return 1302228510;
		case 350:
			return -460024530;
		case 351:
			return -108780030;
		case 352:
			return 1698972798;
		case 353:
			return -1296807958;
		case 354:
			return -1283202000;
		case 355:
			return -1610966108;
		case 356:
			return -693828600;
		case 357:
			return 1321892118;
		case 358:
			return -61411516;
		case 359:
			return 582380806;
		case 360:
			return 1932172605;
		case 361:
			return 1159471771;
		case 362:
			return 784360470;
		case 363:
			return -1340339190;
		case 364:
			return 1881028477;
		case 365:
			return 1703398561;
		case 366:
			return -1209597203;
		case 367:
			return -897750037;
		case 368:
			return 929582877;
		case 369:
			return -911126844;
		case 370:
			return -355531636;
		case 371:
			return -1455998786;
		case 372:
			return -851626677;
		case 373:
			return -734416508;
		case 374:
			return -396624371;
		case 375:
			return 885777893;
		case 376:
			return 619839857;
		case 377:
			return 1744443559;
		case 378:
			return 509781469;
		case 379:
			return 885378256;
		case 380:
			return -524787708;
		case 381:
			return -1861414976;
		case 382:
			return 747514327;
		case 383:
			return -1042021329;
		case 384:
			return -591815673;
		case 385:
			return 883901517;
		case 386:
			return 1561093093;
		case 387:
			return 1287917122;
		case 388:
			return -1943367752;
		case 389:
			return -371827125;
		case 390:
			return -889906510;
		case 391:
			return 64896505;
		case 392:
			return -1161687045;
		case 393:
			return 526003171;
		case 394:
			return -895073533;
		case 395:
			return -2066272360;
		case 396:
			return 93964309;
		case 397:
			return 2103908624;
		case 398:
			return 1812677765;
		case 399:
			return -1753769127;
		case 400:
			return -947815572;
		case 401:
			return -1181950077;
		case 402:
			return -489737721;
		case 403:
			return -102827640;
		case 404:
			return -1906892166;
		case 405:
			return -2141419899;
		case 406:
			return 16844748;
		case 407:
			return 831940854;
		case 408:
			return -1387772214;
		case 409:
			return -1095341658;
		case 410:
			return -1848799275;
		case 411:
			return -1556041029;
		case 412:
			return -1808329564;
		case 413:
			return 1866434585;
		case 414:
			return 1421300489;
		case 415:
			return 1248935549;
		case 416:
			return 943561238;
		case 417:
			return -1939389836;
		case 418:
			return -243260793;
		case 419:
			return -492731190;
		case 420:
			return -839820438;
		case 421:
			return 1325325699;
		case 422:
			return -1705799799;
		case 423:
			return -89829333;
		case 424:
			return -1262828457;
		case 425:
			return -931337253;
		case 426:
			return 1494062795;
		case 427:
			return -1287894233;
		case 428:
			return 2068208444;
		case 429:
			return -1932919229;
		case 430:
			return -364475655;
		case 431:
			return -110352060;
		case 432:
			return -1023919011;
		case 433:
			return -852602679;
		case 434:
			return -297483764;
		case 435:
			return -1578292898;
		case 436:
			return 1517951665;
		case 437:
			return 1891256113;
		case 438:
			return -1319875891;
		case 439:
			return -1624627591;
		case 440:
			return -1914141706;
		case 441:
			return -74031276;
		case 442:
			return 1280406542;
		case 443:
			return 982765715;
		case 444:
			return -1120447016;
		case 445:
			return 1788424349;
		case 446:
			return 1028084603;
		case 447:
			return -1827602683;
		case 448:
			return 565812320;
		case 449:
			return 1279586666;
		case 450:
			return 1480425906;
		case 451:
			return 846837291;
		case 452:
			return 1153686207;
		case 453:
			return -70727482;
		case 454:
			return 84709454;
		case 455:
			return 799106423;
		case 456:
			return 560154875;
		case 457:
			return 2079292950;
		case 458:
			return 1521272922;
		case 459:
			return -677920206;
		case 460:
			return -414883443;
		case 461:
			return -1004266677;
		case 462:
			return -1290997627;
		case 463:
			return -1462313959;
		case 464:
			return -1882707460;
		case 465:
			return -2056579774;
		case 466:
			return -1442844448;
		case 467:
			return -1684974589;
		case 468:
			return -38135693;
		case 469:
			return 803929300;
		case 470:
			return 640520536;
		case 471:
			return -2100409704;
		case 472:
			return -604603161;
		case 473:
			return -1422877860;
		case 474:
			return 826868753;
		case 475:
			return 730069127;
		case 476:
			return -1378911044;
		case 477:
			return -1341750998;
		case 478:
			return 2068253437;
		case 479:
			return -1395855864;
		case 480:
			return -1749433374;
		case 481:
			return 1232840551;
		case 482:
			return 642824856;
		case 483:
			return -207792846;
		case 484:
			return 715735881;
		case 485:
			return 404823609;
		case 486:
			return 1126565489;
		case 487:
			return -1664435783;
		case 488:
			return -1369678628;
		case 489:
			return 2013720626;
		case 490:
			return 215903338;
		case 491:
			return -90486812;
		case 492:
			return -329176208;
		case 493:
			return -574190021;
		case 494:
			return -800891377;
		case 495:
			return -630295963;
		case 496:
			return 2127412005;
		case 497:
			return 1362354162;
		case 498:
			return 2048790450;
		case 499:
			return -101740709;
		case 500:
			return 673606600;
		case 501:
			return -895307590;
		case 502:
			return 1032791043;
		case 503:
			return 804063423;
		case 504:
			return -1573753524;
		case 505:
			return -1842033327;
		case 506:
			return -888632790;
		case 507:
			return -583127403;
		case 508:
			return -381925743;
		case 509:
			return -75928821;
		case 510:
			return 321629486;
		case 511:
			return 896725436;
		case 512:
			return -941648233;
		case 513:
			return -635323621;
		case 514:
			return 1157309080;
		case 515:
			return -797689456;
		case 516:
			return -500245243;
		case 517:
			return -211583122;
		case 518:
			return 237155783;
		case 519:
			return -1547280108;
		case 520:
			return -1719055206;
		case 521:
			return 1601722481;
		case 522:
			return -2142074819;
		case 523:
			return -226366310;
		case 524:
			return -1502194556;
		case 525:
			return -1749043433;
		case 526:
			return 1341699707;
		case 527:
			return 1666964801;
		case 528:
			return -1673998598;
		case 529:
			return -1445041595;
		case 530:
			return 148595040;
		case 531:
			return -729679654;
		case 532:
			return -448554447;
		case 533:
			return -1339871203;
		case 534:
			return -441204543;
		case 535:
			return -812641169;
		case 536:
			return -554519756;
		case 537:
			return 865557632;
		case 538:
			return 1112996351;
		case 539:
			return -1608141409;
		case 540:
			return -311373772;
		case 541:
			return 61537448;
		case 542:
			return -925071604;
		case 543:
			return 1195508693;
		case 544:
			return 1774060092;
		case 545:
			return 424920933;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_696(vector3 vParam0, float fParam3)
{
	return BUILTIN::VDIST(Global_36, vParam0) < fParam3;
}

bool func_697(int iParam0, float fParam1, float fParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	if (!STREAMING::_IS_IMAP_ACTIVE(iParam0))
	{
		return true;
	}
	if (!STREAMING::_0x9C77964B0E07B633(iParam0, &vVar0, &fVar3))
	{
		return false;
	}
	fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar0);
	if (fVar4 <= fParam1)
	{
		return false;
	}
	if (fVar4 > fParam2)
	{
		return true;
	}
	if (CAM::IS_SPHERE_VISIBLE(vVar0, fVar3))
	{
		return false;
	}
	return true;
}

bool func_698()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		if (iVar0 != 0 && INTERIOR::_0x3039BE60B3749716(iVar0) == 768224943)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_700(int iParam0)
{
	switch (iParam0)
	{
		case -1319875891:
			return -329.744f, -151.659f, 50.562f;
		case 640520536:
			return -1519.495f, 740.865f, 124.87f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_716(int iParam0)
{
	if (iParam0 == 2)
	{
		return "dewclm";
	}
	if (iParam0 == 4)
	{
		return "gua";
	}
	return aggregate_func_4984(&(((*Global_1887327)[func_506(iParam0) /*36*/])->f_23));
}

char* func_717(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "setup";
		case 1:
			return "running";
		case 2:
			if (PATHFIND::_0x5AC0944C156E5F44("bvh_nav_camp_teardown"))
			{
				PATHFIND::_0x527B97C203BB8606("bvh_nav_camp_teardown");
			}
			if (PATHFIND::_0x5AC0944C156E5F44("bvh_nav_camp_finale1"))
			{
				PATHFIND::_0x527B97C203BB8606("bvh_nav_camp_finale1");
			}
			return "teardown";
	}
	return "";
}

void func_718(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];
	struct<8> Var8;

	MemCopy(&cVar0, {((*Global_1887327)[iParam0 /*36*/])->f_23}, 8);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_894(iParam1), 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, func_895(iParam2), 64);
	Var8 = { cVar0 };
	StringConCat(&Var8, "_setup", 64);
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&Var8))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&Var8, bParam4);
	}
	else if (bParam4)
	{
		bParam3 = true;
	}
	if (TASK::DOES_SCENARIO_GROUP_EXIST(&cVar0))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED(&cVar0, bParam3);
	}
}

bool func_725(int iParam0)
{
	return (Global_1274493->f_1 && iParam0) != 0;
}

bool func_727(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	iVar0 = Global_1273882->f_21;
	iVar1 = func_577(iParam0);
	Var3 = { func_578(iParam0) };
	STATS::STAT_ID_GET_INT(&Var3, &iVar2);
	if (iVar2 == 0 || (iVar2 + iVar1) > iVar0)
	{
		return true;
	}
	return false;
}

void func_728(int iParam0)
{
	Global_1274493->f_1 = (Global_1274493->f_1 - (Global_1274493->f_1 && iParam0));
}

var func_730(int iParam0, int iParam1)
{
	var uVar0;

	if (!aggregate_func_1718(&uVar0))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 41, iParam0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 42, iParam1, 0, 1))
	{
		return 0;
	}
	return func_903(&uVar0);
}

int func_733(int iParam0)
{
	return aggregate_func_3735(iParam0, 71, 1);
}

bool func_735(var uParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1;
	Var0.f_3.f_3 = -1;
	Var0.f_3.f_4 = -1;
	Var0.f_3 = { aggregate_func_3709(iParam1) };
	if (uParam0->f_1 & 2 != 0)
	{
		if (func_307() != 0)
		{
			return false;
		}
	}
	if (uParam0->f_1 & 1 != 0)
	{
		if (NETWORK::_0xFBE782B3165AC8EC(*uParam0))
		{
			return false;
		}
	}
	if (uParam0->f_1 & 4 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!aggregate_func_9691(8))
		{
			return false;
		}
	}
	if (uParam0->f_1 & 8 != 0)
	{
		if (Var0.f_3 == -1 || Var0.f_3.f_1 == -1)
		{
			return false;
		}
		if (!func_557(Var0.f_3, Var0.f_3.f_1, Var0.f_3.f_2, 0))
		{
			return false;
		}
	}
	return true;
}

int func_736()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		aggregate_func_3898(iVar0, &uVar1);
		if (!aggregate_func_4349(&uVar1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_738(int iParam0, int iParam1, int iParam2, var uParam3)
{
	func_913(iParam0, iParam1);
	aggregate_func_8591(iParam0, iParam2);
	aggregate_func_8591(iParam0, uParam3);
}

var func_745(int iParam0, int iParam1)
{
	return aggregate_func_3735(iParam0, 86, iParam1);
}

void func_756(int iParam0, struct<2> Param1)
{
	*(Global_1274493->f_55.f_4[iParam0 /*8*/]) = { Param1 };
}

int func_758(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!aggregate_func_1718(&uVar0))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 46, 0, 0, 0))
	{
		return 0;
	}
	return aggregate_func_3449(&uVar0, 10);
}

struct<6> func_759(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	var uVar0;
	struct<6> Var5;
	int iVar11;

	if (!aggregate_func_1718(&uVar0))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 19, Param0.f_3, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 23, Param0.f_3.f_1, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 25, Param0.f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 46, 0, 0, 0))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 47, iParam8, 0, 1))
	{
		return Var5;
	}
	iVar11 = func_925(&uVar0);
	return func_926(iVar11);
}

void func_760(var uParam0, int iParam1)
{
	if (!aggregate_func_8592(uParam0, iParam1))
	{
		return;
	}
	switch (uParam0->f_3)
	{
		case joaat("int"):
			if (STATS::CHAL_IS_GOAL_ACTIVE(uParam0->f_1, uParam0->f_2))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(uParam0->f_1, uParam0->f_2, uParam0->f_4);
			}
			break;
		default:
			break;
	}
}

int func_761(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!aggregate_func_1718(&uVar0))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 56, 0, 0, 0))
	{
		return 0;
	}
	return aggregate_func_3449(&uVar0, 12);
}

struct<5> func_762(var uParam0, int iParam1)
{
	struct<5> Var0;
	struct<5> Var5;
	var uVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	var uVar14;

	if (!aggregate_func_1718(&Var0))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&Var0, 13, 0, 0, 1))
	{
		return Var5;
	}
	uVar14 = Var0.f_1;
	if (!aggregate_func_3460(&Var0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&Var0, 19, uParam0->f_3, 0, 1))
	{
		return Var5;
	}
	uVar10 = func_745(&Var0, 1);
	if (!aggregate_func_3460(&Var0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&Var0, 23, uParam0->f_3.f_1, 0, 1))
	{
		return Var5;
	}
	uVar13 = aggregate_func_8857(&Var0);
	if (!aggregate_func_3460(&Var0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&Var0, 25, uParam0->f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&Var0, 56, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&Var0, 57, iParam1, 0, 1))
	{
		return Var5;
	}
	iVar12 = aggregate_func_6914(&Var0);
	Var0.f_1 = uVar14;
	if (!aggregate_func_3460(&Var0, 55, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&Var0, 58, iVar12, 0, 1))
	{
		return Var5;
	}
	uVar11 = func_929(&Var0);
	Var5 = iVar12;
	Var5.f_2 = uVar13;
	Var5.f_3 = uVar10;
	Var5.f_1 = uVar11;
	func_930(Var0, &Var5);
	return Var5;
}

void func_763(var uParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;

	if (!aggregate_func_8592(uParam0, iParam1))
	{
		return;
	}
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_3.f_1 = -1;
	Var1.f_3.f_2 = -1;
	Var1.f_3.f_3 = -1;
	Var1.f_3.f_4 = -1;
	Var1.f_3 = { aggregate_func_3709(iParam1) };
	switch (uParam0->f_1)
	{
		case 2049349725:
			MISSIONDATA::_0xE54DC27571D5EDC4(uParam0->f_2);
			switch (Var1.f_3.f_2)
			{
				case 0:
					iVar0 = 3;
					break;
				case 1:
					iVar0 = 4;
					break;
				case 2:
					iVar0 = 5;
					break;
			}
			MISSIONDATA::_0xE824CE7D13FCB300(uParam0->f_2, iVar0);
			break;
		case 759256821:
			MISSIONDATA::_0x957A830C9B4B99EA(uParam0->f_3, 0);
			break;
		default:
			break;
	}
}

int func_764(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!aggregate_func_1718(&uVar0))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 19, iParam0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 20, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 23, iParam1, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 24, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 25, iParam2, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3460(&uVar0, 36, 0, 0, 1))
	{
		return 0;
	}
	return aggregate_func_3449(&uVar0, 8);
}

struct<4> func_765(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	var uVar0;
	struct<4> Var5;
	int iVar9;

	if (!aggregate_func_1718(&uVar0))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 17, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 19, Param0.f_3, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 20, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 23, Param0.f_3.f_1, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 24, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 25, Param0.f_3.f_2, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 36, 0, 0, 1))
	{
		return Var5;
	}
	if (!aggregate_func_3460(&uVar0, 37, iParam8, 0, 1))
	{
		return Var5;
	}
	iVar9 = func_733(&uVar0);
	return aggregate_func_8587(iVar9);
}

int func_773()
{
	if (Global_1572887->f_13 == -1)
	{
		return 0;
	}
	return Global_1051202->f_36;
}

int func_778(int iParam0)
{
	return (Global_1100949->f_33[iParam0 /*16*/])->f_1;
}

void func_780(int iParam0, int iParam1)
{
	(Global_1100949->f_33[iParam0 /*16*/])->f_1 = iParam1;
}

void func_784(int iParam0, int iParam1)
{
	Global_1100949->f_33[iParam0 /*16*/] = iParam1;
}

int func_785(int iParam0, var uParam1)
{
	if (!aggregate_func_4095(iParam0))
	{
		return 0;
	}
	*uParam1 = 0;
	return 1;
}

int func_786(int iParam0, var uParam1)
{
	if (!aggregate_func_4095(iParam0))
	{
		*uParam1 = 9;
		return 1;
	}
	if (!aggregate_func_4255(aggregate_func_8391(iParam0)))
	{
		return 0;
	}
	if (aggregate_func_7082(iParam0, 4))
	{
		func_984(aggregate_func_8391(iParam0));
		*uParam1 = 6;
		return 1;
	}
	func_985(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
	*uParam1 = 1;
	return 1;
}

int func_787(int iParam0, var uParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar12;
	int iVar13;

	if (!aggregate_func_4095(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	Var0 = { aggregate_func_8391(iParam0) };
	if (!aggregate_func_4255(Var0))
	{
		*uParam1 = 6;
		return 1;
	}
	if (aggregate_func_7082(iParam0, 4))
	{
		func_984(aggregate_func_8391(iParam0));
		*uParam1 = 6;
		return 1;
	}
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_6.f_1 = -1;
	Var2.f_9 = 2;
	Var2 = { Var0 };
	iVar12 = aggregate_func_4989(&Var2);
	if (aggregate_func_4987(iVar12))
	{
		func_780(iParam0, iVar12);
		func_985(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		*uParam1 = 2;
		return 1;
	}
	iVar13 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_986(iParam0), iVar13) > func_987())
	{
		if (func_988(Var0, iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
		return 1;
	}
	return 0;
}

int func_788(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!aggregate_func_4095(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	iVar0 = func_989(iParam0);
	if (iVar0 & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}
	if (iVar0 & 1 != 0)
	{
		*uParam1 = 3;
		return 1;
	}
	if (aggregate_func_7082(iParam0, 4))
	{
		func_984(aggregate_func_8391(iParam0));
		*uParam1 = 6;
		return 1;
	}
	iVar1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_986(iParam0), iVar1) > func_987())
	{
		if (func_988(aggregate_func_8391(iParam0), iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
		return 1;
	}
	return 0;
}

int func_789(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_989(iParam0);
	if (iVar0 & 2 != 0)
	{
		*uParam1 = 4;
		return 1;
	}
	if (aggregate_func_7082(iParam0, 4))
	{
		func_984(aggregate_func_8391(iParam0));
		*uParam1 = 6;
		return 1;
	}
	if (iVar0 & 1 != 0)
	{
		return 0;
	}
	if (func_988(aggregate_func_8391(iParam0), iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		*uParam1 = 7;
	}
	return 1;
}

int func_790(int iParam0, var uParam1)
{
	int iVar0;

	if (!aggregate_func_4095(iParam0))
	{
		*uParam1 = 5;
		return 1;
	}
	iVar0 = func_989(iParam0);
	if (iVar0 & 2 != 0)
	{
		return 0;
	}
	if (iVar0 & 1 != 0)
	{
		*uParam1 = 3;
		return 1;
	}
	if (aggregate_func_7082(iParam0, 4))
	{
		func_984(aggregate_func_8391(iParam0));
		*uParam1 = 6;
		return 1;
	}
	if (Global_1103536->f_18)
	{
		if (func_988(aggregate_func_8391(iParam0), iParam0))
		{
			*uParam1 = 6;
		}
		else
		{
			*uParam1 = 7;
		}
	}
	else
	{
		func_988(aggregate_func_8391(iParam0), iParam0);
		*uParam1 = 6;
	}
	return 1;
}

int func_791(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_989(iParam0);
	if (iVar0 & 2 != 0)
	{
		return 0;
	}
	if (iVar0 & 1 != 0)
	{
		return 0;
	}
	if (func_988(aggregate_func_8391(iParam0), iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		*uParam1 = 7;
	}
	return 1;
}

int func_792(int iParam0, var uParam1)
{
	struct<2> Var0;
	int iVar10;
	int iVar11;

	if (!aggregate_func_4255(aggregate_func_8391(iParam0)))
	{
		*uParam1 = 7;
		return 1;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var0 = { aggregate_func_8391(iParam0) };
	iVar10 = aggregate_func_4989(&Var0);
	if (!aggregate_func_4987(iVar10))
	{
		func_990(iParam0);
		*uParam1 = 7;
		return 1;
	}
	iVar11 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(func_986(iParam0), iVar11) > func_987())
	{
		func_984(Var0);
		func_985(iParam0, iVar11);
	}
	return 0;
}

int func_793(int iParam0, var uParam1)
{
	if (aggregate_func_4095(iParam0))
	{
		*uParam1 = 8;
		return 1;
	}
	else
	{
		*uParam1 = 9;
		return 1;
	}
	return 0;
}

int func_794(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	bVar1 = true;
	if (Global_1103536->f_19)
	{
		iVar0 = func_991();
		if (iVar0 <= 1)
		{
			if (aggregate_func_7082(iParam0, 4))
			{
				bVar1 = false;
			}
			else
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (NETWORK::_0x51F33DBC1A41CBFD() & 9 != 0 && aggregate_func_7082(iParam0, 1))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(func_992(), NETWORK::GET_NETWORK_TIME_ACCURATE()) > 5000)
			{
				func_993();
				func_423();
			}
			return 0;
		}
	}
	aggregate_func_7462(iParam0);
	*uParam1 = -1;
	return 1;
}

int func_795(int iParam0, var uParam1)
{
	switch (func_796(iParam0))
	{
		case 0:
			return func_995(iParam0, uParam1);
		case 1:
			return func_996(iParam0, uParam1);
		default:
			break;
	}
	return 0;
}

int func_796(int iParam0)
{
	return (Global_1100949->f_33[iParam0 /*16*/])->f_3.f_2;
}

void func_797(int iParam0, var uParam1, int iParam2)
{
	(Global_1100949->f_33[iParam0 /*16*/])->f_2 = uParam1;
}

void func_798(int iParam0, int iParam1)
{
	(*Global_1103536)[iParam0] = iParam1;
}

bool func_800(struct<2> Param0, int iParam2)
{
	return (!aggregate_func_4359(func_997(), Param0) || func_998() != iParam2);
}

void func_801(var uParam0)
{
	Global_1103536->f_11 = { *uParam0 };
}

void func_810()
{
	aggregate_func_5300(-1);
	aggregate_func_5300(-1);
	aggregate_func_5300(-1);
	func_1002();
	aggregate_func_3883();
}

bool func_820(int iParam0)
{
	return aggregate_func_1963(&(Global_1103536->f_242.f_9), iParam0, 3);
}

void func_824(int iParam0)
{
	if (((*Global_1121338)[PLAYER::PLAYER_ID() /*54*/])->f_46 == iParam0)
	{
		return;
	}
	((*Global_1121338)[PLAYER::PLAYER_ID() /*54*/])->f_46 = iParam0;
}

int func_827()
{
	return Global_1123292->f_24.f_5;
}

void func_828(int iParam0)
{
	struct<28> Var0;
	var uVar31;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_4 = 14;
	Var0.f_10 = PLAYER::PLAYER_ID();
	SCRIPTS::_0x31010318BA9897AC(&uVar31, iParam0);
	aggregate_func_1359(&Var0, uVar31);
}

bool func_831()
{
	return Global_1103536->f_21.f_107.f_6;
}

void func_833()
{
	struct<2> Var0;

	aggregate_func_6705(-1);
	aggregate_func_7033(-1);
	aggregate_func_6705(-1);
	aggregate_func_8505(aggregate_func_4464());
	aggregate_func_6705(0);
	aggregate_func_6705(0);
	aggregate_func_6705(0);
	aggregate_func_6705(0);
	Var0.f_1 = -1;
	func_1015(&Var0);
}

bool func_835(int iParam0)
{
	struct<2> Var0;

	if (!aggregate_func_6926(func_841()))
	{
		if (aggregate_func_6926(aggregate_func_7616(iParam0)))
		{
			aggregate_func_6705(aggregate_func_7616(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!aggregate_func_7095(func_840()))
	{
		if (aggregate_func_7095(aggregate_func_7766(iParam0)))
		{
			aggregate_func_7033(aggregate_func_7766(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!aggregate_func_6554(func_843()))
	{
		if (aggregate_func_6554(aggregate_func_7964(iParam0)))
		{
			aggregate_func_6705(aggregate_func_7964(iParam0));
		}
		else
		{
			return false;
		}
	}
	if (!func_1022() && aggregate_func_4271(aggregate_func_7093(func_843())) == 7)
	{
		Var0.f_1 = -1;
		aggregate_func_3748(iParam0, &Var0);
		if (Var0 == 0)
		{
		}
		else
		{
			func_1015(&Var0);
			aggregate_func_6705(1);
		}
	}
	return true;
}

struct<2> func_836()
{
	return Global_1103536->f_21.f_107.f_3;
}

void func_839(int iParam0)
{
	MISC::_COPY_MEMORY(iParam0, &(Global_1103536->f_21.f_107.f_9), 4);
}

int func_840()
{
	return Global_1103536->f_21.f_107;
}

int func_841()
{
	return Global_1103536->f_21.f_107.f_1;
}

var func_842()
{
	return Global_1103536->f_21.f_107.f_7;
}

int func_843()
{
	return Global_1103536->f_21.f_107.f_2;
}

bool func_847(int iParam0)
{
	return (Global_1103536->f_6063.f_2 && iParam0) != 0;
}

void func_850(int iParam0)
{
	Global_1103536->f_6063.f_2 = (Global_1103536->f_6063.f_2 - (Global_1103536->f_6063.f_2 && iParam0));
}

void func_856(int iParam0)
{
	MISC::_COPY_MEMORY(&(Global_1103536->f_6063.f_20), iParam0, 4);
}

void func_862(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_440(iParam0);
	if (iVar0 == -1)
	{
		Global_1070355->f_17915.f_19 = &Global_1070355->f_17915[iParam0];
		return;
	}
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (MISC::IS_BIT_SET(&(Global_40.f_106[iParam0]), iVar1))
		{
			MISC::SET_BIT(&(Global_1070355->f_17915.f_19), iVar1);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1070355->f_17915.f_19), iVar1);
		}
		iVar1++;
	}
}

bool func_877()
{
	return Global_1274070->f_419 != 0;
}

bool func_878()
{
	if (_NAMESPACE71::_0xC17F69E1418CD11F(1) != 0)
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	return true;
}

bool func_879(int iParam0)
{
	return (Global_1274070->f_419 && iParam0) != 0;
}

bool func_880(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = func_1046(iParam0);
	iVar2 = func_1047(iParam0);
	iVar3 = func_638();
	switch (iVar2)
	{
		case 0:
			iVar0 = aggregate_func_2975(MISC::_CREATE_VAR_STRING(0, iVar1), 10000, 0, 0, 0, 1);
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(iVar3))
			{
				iVar3 = MAP::_0x3E593DF9C2962EC6(1699087565);
				if (!MAP::DOES_BLIP_EXIST(iVar3))
				{
					return false;
				}
				MAP::SET_BLIP_SPRITE(iVar3, -1636832113 /* GXTEntry: "Bounty Poster" */, true);
				MAP::_0x662D364ABF16DE2F(iVar3, -244815569);
				aggregate_func_8578(iVar3);
			}
			iVar0 = aggregate_func_2975(MISC::_CREATE_VAR_STRING(0, iVar1, iVar3), 10000, 0, 0, 0, 1);
			break;
	}
	return iVar0 != 0;
}

void func_881(int iParam0)
{
	Global_1274070->f_419 = (Global_1274070->f_419 - (Global_1274070->f_419 && iParam0));
}

void func_882(var uParam0)
{
	struct<6> Var0;

	Var0 = -1;
	Var0.f_3 = 255;
	*uParam0 = { Var0 };
}

char* func_894(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DUTCH";
		case 3:
			return "BILL";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 4:
			return "UNCLE";
		case 5:
			return "HOSEA";
		case 6:
			return "MICAH";
		case 7:
			return "CHARLES";
		case 8:
			return "SEAN";
		case 9:
			return "LENNY";
		case 13:
			return "ABIGAIL";
		case 10:
			return "KIERAN";
		case 14:
			return "JACK";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 17:
			return "PEARSON";
		case 18:
			return "STRAUSS";
		case 19:
			return "GRIMSHAW";
		case 20:
			return "KAREN";
		case 21:
			return "SWANSON";
		case 22:
			return "TILLY";
		case 23:
			return "TRELAWNY";
		case 11:
			return "SADIE";
		case 24:
			return "CLEET";
		case 25:
			return "JOE";
		case 26:
			return "EAGLEFLIES";
		case 12:
			return "DOG";
		default:
			break;
	}
	return "Companion unknown";
}

char* func_895(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Morning";
		case 1:
			return "Day";
		case 2:
			return "LongDay";
		case 3:
			return "Afternoon";
		case 4:
			return "Evening";
		case 5:
			return "Night";
		default:
			break;
	}
	return "";
}

var func_903(int iParam0)
{
	return aggregate_func_3735(iParam0, 74, 1);
}

void func_913(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(Global_1274493->f_111[iParam0 /*6*/], iParam1, 4);
}

int func_925(int iParam0)
{
	return aggregate_func_3735(iParam0, 82, 1);
}

struct<6> func_926(int iParam0)
{
	struct<5> Var0;
	struct<6> Var5;
	struct<6> Var11;

	if (!aggregate_func_1718(&Var0))
	{
		return Var11;
	}
	if (!aggregate_func_3460(&Var0, 13, 0, 0, 1))
	{
		return Var11;
	}
	if (!aggregate_func_3460(&Var0, 15, 0, 0, 1))
	{
		return Var11;
	}
	if (!aggregate_func_3460(&Var0, 48, iParam0, 0, 1))
	{
		return Var11;
	}
	Var5 = iParam0;
	Var5.f_1 = func_1056(&Var0);
	Var5.f_2 = func_1057(&Var0);
	Var5.f_3 = func_1058(&Var0);
	switch (Var5.f_3)
	{
		case joaat("int"):
			Var5.f_4 = func_1059(&Var0);
			break;
		default:
			break;
	}
	func_1060(Var0, &Var5);
	return Var5;
}

var func_929(int iParam0)
{
	return aggregate_func_3735(iParam0, 87, 1);
}

void func_930(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = aggregate_func_3449(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!aggregate_func_3460(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = aggregate_func_7913(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("replay"):
				uParam5->f_4 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

void func_984(struct<2> Param0)
{
	struct<24> Var0;

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
	Var0.f_2 = 0;
	Var0.f_5 = 7;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = 1;
	Var0.f_8.f_5.f_9 = 1;
	Var0.f_8.f_5 = { Param0 };
	aggregate_func_2503(&(Global_1100949->f_33.f_513), &Var0, 0, 0, 0, 0, 0);
}

void func_985(int iParam0, int iParam1)
{
	(Global_1100949->f_33[iParam0 /*16*/])->f_3.f_7 = iParam1;
}

var func_986(int iParam0)
{
	return (Global_1100949->f_33[iParam0 /*16*/])->f_3.f_7;
}

int func_987()
{
	return Global_1901929->f_295.f_39;
}

bool func_988(struct<2> Param0, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = aggregate_func_6925(iParam2);
	bVar1 = (iVar0 != 0 && _NAMESPACE26::_0x93A91A351A07360E(iVar0));
	if (Global_1103536->f_18)
	{
		iVar2 = func_1116(Param0);
		if (func_1117(iVar2, bVar1))
		{
			func_984(Param0);
			return true;
		}
	}
	else
	{
		func_984(Param0);
		return true;
	}
	return false;
}

int func_989(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (!&Global_1273882->f_22[iVar1])
		{
		}
		else
		{
			iVar0 = (iVar0 || ((*Global_1121338)[iVar1 /*54*/])->f_1[iParam0]) // PointerArith;
		}
		iVar1++;
	}
	return iVar0;
}

void func_990(int iParam0)
{
	(Global_1100949->f_33[iParam0 /*16*/])->f_1 = -1;
}

int func_991()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (aggregate_func_6925(iVar0) == 0)
		{
		}
		else if (!_NAMESPACE26::_0x93A91A351A07360E(aggregate_func_6925(iVar0)))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

var func_992()
{
	return Global_1100949->f_750.f_1;
}

void func_993()
{
	struct<28> Var0;
	var uVar31;
	int iVar32;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	if (!aggregate_func_7004())
	{
		return;
	}
	iVar32 = NETWORK::_0x8DC9AA3B508B1A85();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar32))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar32))
	{
		return;
	}
	SCRIPTS::_0x31010318BA9897AC(&uVar31, iVar32);
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = _NAMESPACE26::_0x901E0DC25080C8B9(Var0.f_10);
	Var0.f_4 = 9;
	func_423();
	aggregate_func_1359(&Var0, uVar31);
}

int func_995(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_989(iParam0);
	if (iVar0 & 8 != 0)
	{
		return 0;
	}
	if (Global_1103536->f_19)
	{
		if (!aggregate_func_7082(iParam0, 4))
		{
			if (NETWORK::_0x51F33DBC1A41CBFD() & 9 != 0)
			{
				return 0;
			}
		}
	}
	else if (NETWORK::_0x51F33DBC1A41CBFD() & 9 != 0)
	{
		return 0;
	}
	func_1119(iParam0);
	func_990(iParam0);
	*uParam1 = 0;
	return 1;
}

int func_996(int iParam0, var uParam1)
{
	func_1119(iParam0);
	func_990(iParam0);
	*uParam1 = 0;
	return 1;
}

struct<2> func_997()
{
	return Global_1103536->f_11;
}

int func_998()
{
	return Global_1103536->f_11.f_3;
}

void func_1002()
{
	func_1120(&(Global_1103536->f_21.f_12));
}

void func_1015(int iParam0)
{
	MISC::_COPY_MEMORY(&(Global_1103536->f_21.f_107.f_9), iParam0, 4);
}

bool func_1022()
{
	return Global_1103536->f_21.f_107.f_8;
}

void func_1029(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(Global_1103536->f_6063.f_3[iParam1 /*8*/], iParam0, 4);
}

void func_1030(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(iParam0, Global_1103536->f_6063.f_3[iParam1 /*8*/], 4);
}

void func_1031(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&((Global_1103536->f_6063.f_3[iParam1 /*8*/])->f_4), iParam0, 4);
}

void func_1032(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(iParam0, &((Global_1103536->f_6063.f_3[iParam1 /*8*/])->f_4), 4);
}

int func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1193206973 /* GXTEntry: "You have completed this mission on the highest difficulty." */;
		case 2:
			return -1344025432 /* GXTEntry: "The next time you play this mission the difficulty will be increased." */;
		case 4:
			return -108962728 /* GXTEntry: "Check back at the Bounty Board ~1b~ soon to replay this mission." */;
		default:
			break;
	}
	return 0;
}

int func_1047(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_1056(int iParam0)
{
	return aggregate_func_3735(iParam0, 78, 1);
}

int func_1057(int iParam0)
{
	return aggregate_func_3735(iParam0, 79, 1);
}

int func_1058(int iParam0)
{
	return aggregate_func_3735(iParam0, 80, 1);
}

var func_1059(int iParam0)
{
	return aggregate_func_3800(iParam0, 81, 1);
}

void func_1060(struct<5> Param0, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	uVar4 = Param0.f_1;
	iVar1 = aggregate_func_3449(&Param0, 4);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar2 = 0;
		Param0.f_1 = uVar4;
		if (!aggregate_func_3460(&Param0, 31, iVar0, 0, 1))
		{
			return;
		}
		iVar2 = aggregate_func_7913(Param0, &iVar3);
		switch (iVar3)
		{
			case joaat("challenge"):
				uParam5->f_5 = iVar2;
				break;
			default:
				break;
		}
		iVar0++;
	}
}

int func_1116(struct<2> Param0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!aggregate_func_4255(Param0))
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		Var0 = { aggregate_func_8391(iVar2) };
		if (aggregate_func_4359(Var0, Param0))
		{
			iVar4 = aggregate_func_7213(iVar2);
			iVar5 = aggregate_func_6925(iVar2);
			if (iVar4 >= 1 && iVar4 <= 4)
			{
				if (iVar5 != 0 && _NAMESPACE26::_0x93A91A351A07360E(iVar5))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	return iVar3;
}

bool func_1117(int iParam0, bool bParam1)
{
	if (iParam0 > 1)
	{
		return false;
	}
	if (iParam0 < 1)
	{
		return true;
	}
	if (bParam1)
	{
		return true;
	}
	return false;
}

void func_1119(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_9.f_1 = -1;
	MISC::_COPY_MEMORY(&((Global_1100949->f_33[iParam0 /*16*/])->f_3), &Var0, 13);
}

void func_1120(var uParam0)
{
	struct<25> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_9 = -1;
	Var0.f_9.f_1 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = 7;
	Var0.f_12.f_1 = 255;
	Var0.f_12.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_12.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_23 = -1;
	Var0.f_23.f_1 = -1;
	*uParam0 = { Var0 };
}

