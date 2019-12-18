#region Local Var
	char* sLocal_0 = NULL;
	var uLocal_1 = 7;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = -1;
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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	vector3 vLocal_31 = { 0f, 0f, 0f };
	struct<2> Local_34 = { 0, 0 } ;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 10;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar16;

	sLocal_0 = "";
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	Global_34 = -1;
	Global_17142 = { aggregate_func_4289() };
	func_2();
	aggregate_func_4238();
	BUILTIN::WAIT(0);
	func_4();
	uVar0 = 15;
	while (!func_5(&uVar0))
	{
		BUILTIN::WAIT(0);
	}
	aggregate_func_1114(1);
	if (!Global_40)
	{
	}
	func_7();
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
	while (DLC::GET_IS_LOADING_SCREEN_ACTIVE() && aggregate_func_4249(&uLocal_37) < 2)
	{
		func_9();
		BUILTIN::WAIT(0);
	}
	NETWORK::_0xE5FF65CFF5160752();
	NETWORK::_0x603469298A4308AF(1);
	func_10(0);
	while (true)
	{
		if (aggregate_func_4251() == 0 && MISC::IS_ORBIS_VERSION())
		{
			if (!Global_1572887->f_10)
			{
				NETWORK::_0x236905C700FDB54D();
			}
			if (!aggregate_func_2820())
			{
				if (!aggregate_func_7305())
				{
					NETWORK::_0x236905C700FDB54D();
				}
			}
			if (aggregate_func_6493() > 3)
			{
				NETWORK::_0x236905C700FDB54D();
			}
		}
		iVar16 = CLOCK::GET_CLOCK_HOURS();
		func_15(iVar16);
		func_16(iVar16);
		func_17(&uLocal_121);
		func_19((aggregate_func_6493() == 3 && aggregate_func_9375() == 39));
		func_20(Global_1901829);
		func_9();
		if (aggregate_func_4297(1024))
		{
			AUDIO::_0x9428447DED71FC7E("Load_Menu_Scenes");
			aggregate_func_8629(1024);
		}
		switch (aggregate_func_6493())
		{
			case 0:
				if (Global_40)
				{
					aggregate_func_9340();
					aggregate_func_8629(4);
				}
				else if (MISC::_GAME_TRANSITION_MANAGER_GET_MODE() != 496295564)
				{
					if (!func_24())
					{
						aggregate_func_6909(1);
					}
				}
				else
				{
					aggregate_func_9340();
					aggregate_func_8629(4);
				}
				if (aggregate_func_7529() == 1 || aggregate_func_7529() == 0)
				{
					func_27();
					func_10(1);
				}
				else
				{
					aggregate_func_8629(4);
					func_10(2);
				}
				break;
			case 1:
				if (func_28())
				{
					aggregate_func_8629(4);
					func_10(2);
				}
				break;
			case 2:
				func_29();
				if (func_30(aggregate_func_7529()))
				{
					func_10(3);
				}
				break;
			case 3:
				aggregate_func_4238();
				aggregate_func_4238();
				aggregate_func_4238();
				if (func_34())
				{
					func_35();
					func_10(4);
				}
				break;
			case 4:
				if (func_36())
				{
					func_37();
					aggregate_func_8629(4);
					aggregate_func_4238();
					aggregate_func_3707();
					if (aggregate_func_7529() == 1)
					{
						func_10(5);
						NETWORK::_0xA4484173759749B1();
						SCRIPTS::_0xBC2C927F5C264243(0);
					}
					else if (aggregate_func_7529() != 5)
					{
						if (aggregate_func_7729() != 1)
						{
							func_10(5);
							SCRIPTS::_0xE98204D3C25AE14C(func_41());
						}
						else
						{
							func_10(2);
						}
					}
					else
					{
						func_10(2);
					}
				}
				break;
			case 5:
				NETWORK::_0xA4484173759749B1();
				SCRIPTS::_0xE98204D3C25AE14C(func_41());
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_2()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	NETWORK::_0x3E74A687A73979C6(1);
	AUDIO::_0x6339C1EA3979B5F7("Main_Menu", "Load_Menu_Scenes");
}

void func_4()
{
	MISC::SET_FADE_IN_AFTER_LOAD(false);
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
	aggregate_func_4129();
	func_43();
	func_44();
}

bool func_5(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (func_45(iVar1))
		{
			if (!func_46(iVar1, (*uParam0)[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (bVar0)
	{
		SCRIPTS::_0x11986B05885564D2(1);
	}
	return bVar0;
}

void func_7()
{
	aggregate_func_0();
	aggregate_func_4964();
	STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
	MAP::_0xA657EC9DBC6CC900(joaat("world"));
	func_49();
}

void func_9()
{
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		func_50(&uLocal_37);
	}
	else if (aggregate_func_4287(&uLocal_37))
	{
		func_52(&uLocal_37);
	}
}

void func_10(int iParam0)
{
	Local_34 = iParam0;
	Local_34.f_1 = MISC::GET_GAME_TIMER();
}

void func_15(int iParam0)
{
	if (iParam0 < 6)
	{
		Global_1902689 = 8;
		return;
	}
	if (iParam0 < 12)
	{
		Global_1902689 = 1;
		return;
	}
	if (iParam0 < 18)
	{
		Global_1902689 = 2;
		return;
	}
	Global_1902689 = 4;
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = ((((BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_SECONDS(), 0) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MINUTES(), 6)) || BUILTIN::SHIFT_LEFT(iParam0, 12)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_MONTH(), 22)) || BUILTIN::SHIFT_LEFT(CLOCK::GET_CLOCK_DAY_OF_MONTH(), 17));
	iVar1 = CLOCK::GET_CLOCK_YEAR();
	if ((iVar1 < 0 || iVar1 > 1930) || iVar1 < 1866)
	{
		return;
	}
	if (iVar1 < 1898)
	{
		iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((1898 - iVar1), 26)) | -2147483648;
	}
	else
	{
		iVar0 = (iVar0 || BUILTIN::SHIFT_LEFT((iVar1 - 1898), 26));
		iVar0 = (iVar0 - iVar0 & -2147483648);
	}
	Global_1902688 = iVar0;
}

void func_17(var uParam0)
{
	bool bVar0;

	if (aggregate_func_4251() == -3)
	{
		return;
	}
	bVar0 = _NAMESPACE84::_0x7AF1BB4504EA5ED9();
	if (&Global_1956121 != bVar0)
	{
		Global_1956121 = bVar0;
		if (bVar0)
		{
			aggregate_func_2975("COMP_APP_CONNECT", 10000, 0, 0, 0, 1);
		}
		else
		{
			*uParam0 = 0;
			aggregate_func_4313(&(uParam0->f_1));
			aggregate_func_2975("COMP_APP_DISCONNECT", 10000, 0, 0, 0, 1);
		}
		func_55();
	}
	if (&Global_1956121)
	{
		func_56(uParam0);
	}
	func_55();
}

void func_19(bool bParam0)
{
	int iVar0;

	func_57();
	func_58();
	if (!bParam0)
	{
		return;
	}
	func_59();
	func_60();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_61(Global_1070355->f_14.f_356[iVar0 /*64*/]);
		iVar0++;
	}
}

void func_20(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (!MISC::IS_ORBIS_VERSION())
			{
				func_62(3);
			}
			if (func_63())
			{
				aggregate_func_4285(&(Global_1901829->f_1));
				func_62(1);
			}
			break;
		case 1:
			if (func_65(&(Global_1901829->f_1), 10000, 1))
			{
				func_62(2);
			}
			break;
		case 2:
			func_66();
			if (!func_63())
			{
				func_62(0);
			}
			break;
		case 3:
			if (func_63())
			{
				func_67();
			}
			break;
		default:
			func_62(0);
			break;
	}
}

bool func_24()
{
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

void func_27()
{
	vector3 vVar0;

	vLocal_31 = { vVar0 };
}

bool func_28()
{
	func_70();
	switch (func_71())
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				MISC::SET_FADE_IN_AFTER_LOAD(false);
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, 0);
				PAD::_0xF239400E16C23E08(2, 0);
				func_72();
				aggregate_func_4093(1);
				aggregate_func_828(0);
				aggregate_func_8631();
				aggregate_func_6625(0);
				func_77();
				aggregate_func_6704(-1);
				NETWORK::_0x7AC752103856FB20(true);
				func_79(1);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				PED::RESURRECT_PED(PLAYER::PLAYER_PED_ID());
			}
			break;
		case 1:
			if (func_80())
			{
				func_79(2);
			}
			else if (REPLAY::_0x9EEB007317FA3B9C())
			{
				func_79(2);
				vLocal_31.f_2 = 5;
			}
			break;
		case 2:
			if (CAM::IS_SCREEN_FADED_OUT() || func_81())
			{
				if (func_82())
				{
					func_83();
				}
				else
				{
					vLocal_31.f_2 = 1;
					aggregate_func_6908(4);
				}
				if (func_81())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				aggregate_func_6909(vLocal_31.z);
				AUDIO::TRIGGER_MUSIC_EVENT("stop_title_screen_music");
				NETWORK::_0x7AC752103856FB20(false);
				PAD::_0xA0CEFCEA390AAB9B(2);
				return true;
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			break;
	}
	return false;
}

void func_29()
{
	if (!aggregate_func_4297(64))
	{
		return;
	}
	switch (aggregate_func_7737())
	{
		case joaat("freeroam"):
			if (aggregate_func_7518(655115506))
			{
				aggregate_func_6704(2);
			}
			else if (aggregate_func_7518(joaat("friendly")))
			{
				aggregate_func_6704(1);
			}
			else
			{
				aggregate_func_6704(0);
			}
			if (aggregate_func_7518(1651967528))
			{
				Global_29 = 1;
				Global_33 = 1;
			}
			if (aggregate_func_7518(-84928653))
			{
				Global_31 = 1;
			}
			if ((aggregate_func_7518(-2030542394) || aggregate_func_7518(1737952409)) || NETWORK::_0xFC4165C9165C166F())
			{
				Global_32 = 1;
			}
			else
			{
				Global_32 = 0;
			}
			if (aggregate_func_7518(-1357178860))
			{
				Global_1572887->f_5 = 1;
			}
			else
			{
				Global_1572887->f_5 = 0;
			}
			if (aggregate_func_7518(joaat("NEW_GAME")))
			{
				Global_28 = 1;
			}
			if (aggregate_func_7518(1306134188))
			{
			}
			if (aggregate_func_7518(2137301164))
			{
			}
			if (aggregate_func_7518(-159568751))
			{
			}
			if (aggregate_func_7518(-1879562593))
			{
			}
			if (aggregate_func_7518(1890312850))
			{
			}
			if (aggregate_func_7518(313296873))
			{
				Global_34 = 0;
			}
			else if (aggregate_func_7518(541270806))
			{
				Global_34 = 1;
			}
			else if (aggregate_func_7518(922800273))
			{
				Global_34 = 2;
			}
			else if (aggregate_func_7518(1298496858))
			{
				Global_34 = 3;
			}
			else
			{
				Global_34 = -1;
			}
			break;
		case -1330461529:
			break;
		case joaat("mission"):
			break;
		case 1495295997:
			break;
		case joaat("mission_creator"):
			Global_30 = 1;
			Global_1572887->f_5 = 1;
			break;
	}
	aggregate_func_8629(64);
}

bool func_30(int iParam0)
{
	char* sVar0;
	int iVar1;

	iVar1 = 1024;
	switch (iParam0)
	{
		case 1:
			aggregate_func_6908(4);
			return true;
		case 2:
			sVar0 = func_87(2);
			iVar1 = 1024;
			break;
		case 3:
			sVar0 = func_87(3);
			iVar1 = 25500;
			break;
		case 4:
			sVar0 = func_87(4);
			iVar1 = 25500;
			break;
		case 5:
			sVar0 = func_87(5);
			iVar1 = 1024;
			break;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(sVar0)) > 0)
	{
		aggregate_func_9376(iParam0);
		return true;
	}
	if (aggregate_func_882(sVar0, iVar1))
	{
		aggregate_func_9376(iParam0);
		func_90(iParam0);
		func_37();
		return true;
	}
	return false;
}

bool func_34()
{
	if (aggregate_func_7729() != aggregate_func_7529())
	{
		return true;
	}
	if (aggregate_func_4297(4))
	{
		return true;
	}
	if (func_80())
	{
		func_82();
		CAM::DO_SCREEN_FADE_OUT(0);
		return true;
	}
	return false;
}

void func_35()
{
	aggregate_func_4129();
	aggregate_func_8629(4);
	PAD::_0xA0CEFCEA390AAB9B(0);
	if (aggregate_func_7729() == 3)
	{
		if (SCRIPTS::_DOES_THREAD_EXIST(Global_1572887->f_17))
		{
			aggregate_func_6908(2048);
		}
	}
	else if (aggregate_func_7729() == 4)
	{
		if (SCRIPTS::_DOES_THREAD_EXIST(Global_1572887->f_17))
		{
			aggregate_func_6908(2048);
		}
	}
	else
	{
		PLAYER::FORCE_CLEANUP(2);
	}
}

bool func_36()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
	iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = 1;
	while (SCRIPTS::_DOES_THREAD_EXIST(iVar0))
	{
		bVar3 = true;
		if (iVar0 == iVar1)
		{
			bVar3 = false;
		}
		else if (SCRIPTS::_IS_BACKGROUND_SCRIPT(iVar0))
		{
			bVar3 = false;
		}
		if (bVar3)
		{
			if (!SCRIPTS::_0x30BED53646C86D11(iVar0))
			{
				SCRIPTS::_0x7DE4643157AD646C(iVar0);
			}
			if (aggregate_func_4251() == -1)
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, 2);
			}
			NETWORK::_0x236905C700FDB54D();
			iVar2 = 0;
			BUILTIN::WAIT(0);
		}
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
	}
	return iVar2;
}

void func_37()
{
	if (aggregate_func_7729() != 2)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_87(2));
	}
	if (aggregate_func_7729() != 3)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_87(3));
	}
	if (aggregate_func_7729() != 4)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_87(4));
	}
	if (aggregate_func_7729() != 5)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_87(5));
	}
}

char* func_41()
{
	char cVar0[64];
	char cVar8[64];
	struct<8> Var16[10];
	char cVar97[64];
	int iVar105;
	int iVar106;
	int iVar107;
	char cVar108[64];
	char cVar116[64];
	char cVar124[64];
	char cVar132[64];
	char cVar140[64];
	char cVar148[64];

	StringCopy(&cVar0, "-mode=", 64);
	StringConCat(&cVar0, func_91(aggregate_func_7737()), 64);
	StringCopy(&cVar8, "-char_slot=", 64);
	StringIntConCat(&cVar8, Global_1572887->f_387.f_9, 64);
	StringCopy(&cVar97, "", 64);
	switch (aggregate_func_7737())
	{
		case joaat("single_player"):
			return MISC::_CREATE_VAR_STRING(10, "LAUNCH_PARAMS", &cVar0);
		case joaat("freeroam"):
			iVar106 = 0;
			iVar107 = 0;
			iVar106 = 0;
			while (iVar106 <= 30)
			{
				iVar105 = func_92(iVar106);
				if (aggregate_func_7518(iVar105) && iVar107 < 10)
				{
					StringCopy(Var16[iVar107 /*8*/], "-arg_", 64);
					StringIntConCat(Var16[iVar107 /*8*/], iVar107, 64);
					StringConCat(Var16[iVar107 /*8*/], "=", 64);
					StringConCat(Var16[iVar107 /*8*/], func_93(iVar105), 64);
					iVar107++;
				}
				iVar106++;
			}
			if (Global_1572887->f_387.f_3 != -1)
			{
				StringCopy(&cVar108, "-region_id=", 64);
				StringConCat(&cVar108, aggregate_func_4715(Global_1572887->f_387.f_3), 64);
				return MISC::_CREATE_VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar108, Var16[0 /*8*/], Var16[1 /*8*/], Var16[2 /*8*/], Var16[3 /*8*/], Var16[4 /*8*/]);
			}
			else if (Global_1572887->f_387.f_4 != -1)
			{
				StringCopy(&cVar116, "-district_id=", 64);
				StringConCat(&cVar116, func_95(Global_1572887->f_387.f_4), 64);
				return MISC::_CREATE_VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar116, Var16[0 /*8*/], Var16[1 /*8*/], Var16[2 /*8*/], Var16[3 /*8*/], Var16[4 /*8*/]);
			}
			else if (Global_1572887->f_387.f_5 != -1)
			{
				StringCopy(&cVar124, "-state_id=", 64);
				StringConCat(&cVar124, func_96(Global_1572887->f_387.f_5), 64);
				return MISC::_CREATE_VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar124, Var16[0 /*8*/], Var16[1 /*8*/], Var16[2 /*8*/], Var16[3 /*8*/], Var16[4 /*8*/]);
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(174762, "LAUNCH_PARAMS", &cVar0, &cVar8, Var16[0 /*8*/], Var16[1 /*8*/], Var16[2 /*8*/], Var16[3 /*8*/], Var16[4 /*8*/], &cVar97);
			}
			break;
		case -1743646234:
			return MISC::_CREATE_VAR_STRING(42, "LAUNCH_PARAMS", &cVar0, &cVar8);
		case -1330461529:
			StringCopy(&cVar132, "-series_id=", 64);
			StringConCat(&cVar132, aggregate_func_8028(Global_1572887->f_387.f_2), 64);
			return MISC::_CREATE_VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar132);
		case joaat("mission"):
			StringCopy(&cVar140, "-mission_id=", 64);
			StringConCat(&cVar140, "", 64);
			return MISC::_CREATE_VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar140);
		case 1495295997:
			StringCopy(&cVar148, "-minigame_id=", 64);
			StringConCat(&cVar148, func_98(Global_1572887->f_387.f_7), 64);
			return MISC::_CREATE_VAR_STRING(170, "LAUNCH_PARAMS", &cVar0, &cVar8, &cVar148);
		case joaat("mission_creator"):
			return MISC::_CREATE_VAR_STRING(42, "LAUNCH_PARAMS", &cVar0, &cVar8);
	}
	return "";
}

void func_43()
{
	sLocal_0 = "startup";
	_NAMESPACE59::_0xED4B0C1057892B2E(&Global_17173, 3076, 0, sLocal_0);
	func_102(&Global_17173, "g_mpSavedGlobals.herbs", 0);
	func_103(&(Global_17173.f_54), "g_mpSavedGlobals.sPersona");
	func_104(&(Global_17173.f_2563), "g_mpSavedGlobals.eTutorialsRun", 0);
	func_105(&(Global_17173.f_2594), "g_mpSavedGlobals.iTutorialBuffer");
	func_106(&(Global_17173.f_2619), "g_mpSavedGlobals.sNotoriety");
	func_107(&(Global_17173.f_2622), "g_mpSavedGlobals.sNotorietyTU004");
	func_108(&(Global_17173.f_2623), "g_mpSavedGlobals.sOutfitSaveDataTU004");
	func_109(&(Global_17173.f_2712), "g_mpSavedGlobals.sWebInboxData");
	func_110(&(Global_17173.f_2758), "g_mpSavedGlobals.todLastVisited");
	func_111(&(Global_17173.f_2935), "g_mpSavedGlobals.sFlowData");
	func_112(&(Global_17173.f_2954), "g_mpSavedGlobals.mpCollectiblesMapBlip");
	func_113(&(Global_17173.f_2976), "g_mpSavedGlobals.sMGRestrictData");
	func_114(&(Global_17173.f_3065), "g_mpSavedGlobals.sNetShopsTU006");
	func_115(&(Global_17173.f_3067));
	_NAMESPACE59::_0xE8346E62FD7FB962();
	_NAMESPACE59::_0xC0ABF784590798A9(0);
}

void func_44()
{
	SCRIPTS::REQUEST_SCRIPT(func_87(2));
	SCRIPTS::REQUEST_SCRIPT(func_87(3));
	SCRIPTS::REQUEST_SCRIPT(func_87(4));
	SCRIPTS::REQUEST_SCRIPT(func_87(5));
	func_116();
}

bool func_45(int iParam0)
{
	if (iParam0 != 0 && iParam0 != 3)
	{
		return true;
	}
	return false;
}

bool func_46(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			if (func_117(iParam0, 1))
			{
				MISC::_0xE97240065406CB80(iParam0, 0);
				SCRIPTS::REQUEST_SCRIPT(func_118(iParam0));
				aggregate_func_7103(uParam1, 1, iParam0);
			}
			else
			{
				aggregate_func_7103(uParam1, 3, iParam0);
				return true;
			}
			break;
		case 1:
			if (SCRIPTS::HAS_SCRIPT_LOADED(func_118(iParam0)) && MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(512) > 0)
			{
				SCRIPTS::START_NEW_SCRIPT(func_118(iParam0), 512);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_118(iParam0));
				aggregate_func_7103(uParam1, 2, iParam0);
			}
			break;
		case 2:
			if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(func_118(iParam0))) == 0)
			{
				MISC::_0xE97240065406CB80(iParam0, 1);
				aggregate_func_7103(uParam1, 3, iParam0);
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_49()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 2778)
	{
		iVar0 = func_148(iVar1, 1);
		aggregate_func_3000(iVar0);
		iVar1++;
	}
}

int func_50(int iParam0)
{
	switch (aggregate_func_4249(iParam0))
	{
		case 0:
			if (func_150(iParam0))
			{
				iParam0->f_81 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "LoadingScreen");
				iParam0->f_82 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0->f_81, "TooltipText", "");
				iParam0->f_83 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iParam0->f_81, "isVisible", true);
				aggregate_func_4242(iParam0, 1);
				aggregate_func_4242(iParam0, 1);
			}
			else
			{
				aggregate_func_4242(iParam0, 3);
			}
			break;
		case 1:
			iParam0->f_77 = MISC::GET_GAME_TIMER();
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_82, iParam0->f_5[iParam0->f_78 /*7*/]);
			aggregate_func_4242(iParam0, 2);
			break;
		case 2:
			if (MISC::GET_GAME_TIMER() >= (iParam0->f_77 + (iParam0->f_5[iParam0->f_78 /*7*/])->f_5))
			{
				iParam0->f_78++;
				if (iParam0->f_78 < 10)
				{
					aggregate_func_4242(iParam0, 1);
				}
				else
				{
					aggregate_func_4242(iParam0, 3);
				}
			}
			break;
		case 3:
			func_52(iParam0);
			return 1;
	}
	return 0;
}

void func_52(int iParam0)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_81))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_81);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0->f_82))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_82, "");
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0->f_82);
	}
	if (DATAFILE::_0x7907969497EA92F5(*iParam0))
	{
		DATAFILE::_DATAFILE_UNLOAD(*iParam0);
	}
	aggregate_func_4242(iParam0, 0);
}

void func_55()
{
	while (!QUEUE::_EVENT_QUEUE_IS_EMPTY(-792505136))
	{
		QUEUE::_EVENT_QUEUE_POP(-792505136);
	}
}

void func_56(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = false;
	if (func_153() || func_154())
	{
		bVar1 = true;
	}
	if (bVar1 != *uParam0)
	{
		*uParam0 = bVar1;
		if (!bVar1)
		{
			aggregate_func_4293(&(uParam0->f_1), 0);
		}
		else if (aggregate_func_4260(&(uParam0->f_1)))
		{
			aggregate_func_4313(&(uParam0->f_1));
		}
	}
	if (!bVar1 && aggregate_func_4260(&(uParam0->f_1)))
	{
		if (aggregate_func_4298(&(uParam0->f_1)) >= 0.5f)
		{
			aggregate_func_4313(&(uParam0->f_1));
		}
		else
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		MISC::SET_BIT(&iVar0, 6);
	}
	if (CAM::IS_GAMEPLAY_CAM_RENDERING() || CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		MISC::SET_BIT(&iVar0, 2);
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&iVar0, 4);
		if (LAW::_0xDD5FD601481F648B(PLAYER::PLAYER_ID()) > 0)
		{
			MISC::SET_BIT(&iVar0, 3);
		}
	}
	func_158(iVar0);
}

void func_57()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		func_159(SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0), iVar0);
		iVar0++;
	}
}

void func_58()
{
	switch (Global_1572887->f_248.f_84)
	{
		case 0:
			func_160();
			break;
		case 1:
			func_161();
			break;
		case 2:
			func_162();
			break;
		case 3:
			func_163();
			break;
	}
}

void func_59()
{
	if (Global_1572887->f_248.f_82 == 0)
	{
		return;
	}
	switch (Global_1572887->f_248.f_82)
	{
		case 1:
			if (MISC::IS_PC_VERSION())
			{
				aggregate_func_6625(4);
			}
			else
			{
				aggregate_func_6625(2);
			}
			break;
		case 2:
			func_165();
			aggregate_func_6625(3);
			break;
		case 3:
			if (func_166() == 0)
			{
				return;
			}
			aggregate_func_6625(4);
			break;
		case 4:
			aggregate_func_6625(0);
			break;
	}
}

void func_60()
{
	if (aggregate_func_4297(4))
	{
		func_167();
	}
	switch (Global_1572887->f_248)
	{
		case 0:
			break;
		case 1:
			func_168();
			break;
		case 2:
			func_169();
			break;
		case 3:
			func_170();
			break;
		case 4:
			func_171();
			break;
		case 5:
			func_172();
			break;
		case 6:
			func_173();
			break;
		case 8:
			func_174();
			break;
		case 11:
			func_175();
			break;
		case 7:
			func_176();
			break;
		case 9:
			func_177();
			break;
		case 10:
			func_178();
			break;
		case 13:
			func_179();
			break;
		case 17:
			func_180();
			break;
		case 14:
			func_181();
			break;
		case 15:
			func_182();
			break;
		case 16:
			func_183();
			break;
		case 18:
			func_184();
			break;
		case 19:
			func_185();
			break;
		case 20:
			func_186();
			break;
		case 22:
			func_187();
			break;
		case 23:
			func_188();
			break;
	}
}

void func_61(char* sParam0)
{
	bool bVar0;
	char* sVar1;
	bool bVar2;
	struct<60> Var3;

	if (!sParam0->f_61 && !sParam0->f_62)
	{
		return;
	}
	bVar0 = (aggregate_func_4732(&(sParam0->f_50)) > 3000 && !sParam0->f_62);
	if (!bVar0)
	{
		sVar1 = func_190(sParam0, sParam0->f_63);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return;
		}
	}
	if (!sParam0->f_62)
	{
		if (sParam0->f_63 > 0)
		{
			func_191(sParam0, sVar1, bVar0);
		}
		else
		{
			aggregate_func_5068(sParam0, sVar1, bVar0);
		}
		sParam0->f_62 = 1;
		sParam0->f_59 = MISC::GET_GAME_TIMER();
	}
	bVar2 = (sParam0->f_59 != -1 && (MISC::GET_GAME_TIMER() - sParam0->f_59) > 15000);
	if (sParam0->f_60 == 0 || (sParam0->f_62 && (_NAMESPACE71::_0x59FA676177DBE4C9(sParam0->f_60) == 6 || bVar2)))
	{
		Var3.f_12.f_8 = -1;
		Var3.f_12.f_8.f_1 = -1;
		Var3.f_12.f_16.f_12 = -1;
		Var3.f_12.f_16.f_12.f_1 = -1;
		Var3.f_12.f_16.f_14 = 255;
		Var3.f_12.f_16.f_15 = 255;
		Var3.f_57 = -1;
		Var3.f_57.f_1 = -1;
		Var3.f_59 = -1;
		MISC::_COPY_MEMORY(sParam0, &Var3, 64);
	}
}

void func_62(int iParam0)
{
	Global_1901829 = iParam0;
}

bool func_63()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1900856[iVar1 /*47*/] != 0)
		{
			Global_1901829->f_99 = iVar1;
			iVar0 = 1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_65(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	aggregate_func_1330(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			aggregate_func_4285(uParam0);
			return true;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		aggregate_func_4285(uParam0);
		return true;
	}
	return false;
}

void func_66()
{
	int iVar0;

	if (!MISC::IS_ORBIS_VERSION())
	{
		if (func_63())
		{
			func_67();
		}
		return;
	}
	if (Global_1901829->f_99 >= 20 || Global_1901829->f_99 < 0)
	{
		return;
	}
	iVar0 = Global_1901829->f_99;
	if (func_194(Global_1900856[iVar0 /*47*/]))
	{
		func_195(iVar0);
		(*Global_1900856)[iVar0 /*47*/] = 0;
	}
	if (aggregate_func_4484(Global_1900856[iVar0 /*47*/]))
	{
		(*Global_1900856)[iVar0 /*47*/] = 0;
	}
	if (Global_1900856[iVar0 /*47*/] != 0)
	{
		func_197(*((*Global_1900856)[iVar0 /*47*/]), iVar0);
	}
	Global_1901829->f_99++;
	if (Global_1901829->f_99 == 31)
	{
		Global_1901829->f_99 = 0;
	}
}

void func_67()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_195(iVar0);
		iVar0++;
	}
	aggregate_func_4285(&(Global_1901829->f_1));
}

void func_70()
{
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_NEXT_CAMERA"), false);
	if (func_71() != 0)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

int func_71()
{
	return vLocal_31.x;
}

void func_72()
{
	Global_1572887->f_387.f_1 = 0;
}

void func_77()
{
	var uVar0;

	NETWORK::NETWORK_SET_RICH_PRESENCE(0, &uVar0, 1, 0);
}

void func_79(int iParam0)
{
	vLocal_31.x = iParam0;
	vLocal_31.f_1 = MISC::GET_GAME_TIMER();
}

bool func_80()
{
	int iVar0;
	vector3 vVar1;

	if (func_202())
	{
		return false;
	}
	iVar0 = 0;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(joaat("landing_page")))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(joaat("landing_page"), &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					if (vVar1.z == -490822059)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_SP", "Load_Menu_Scenes");
						aggregate_func_6704(joaat("single_player"));
						iVar0 = 1;
					}
					else if (vVar1.z == 2143694500)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
						iVar0 = 1;
					}
					else if (vVar1.z == 367452774)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
						iVar0 = 1;
					}
					else if (vVar1.z == 1317995259)
					{
						AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
						aggregate_func_6704(joaat("freeroam"));
						func_204(1306134188);
						iVar0 = 1;
					}
					else if (vVar1.z == 425390024)
					{
						NETWORK::_0x7AC752103856FB20(false);
					}
					else if (vVar1.z == 446331713)
					{
						NETWORK::_0x7AC752103856FB20(true);
					}
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(joaat("landing_page"));
	}
	return iVar0;
}

bool func_81()
{
	return func_205() > 120000;
}

bool func_82()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!NETWORK::_0x02E97CE283648CD9(func_206(joaat("mode"))))
	{
		if (aggregate_func_7737() == 0)
		{
			aggregate_func_6704(joaat("single_player"));
			aggregate_func_3723();
			return true;
		}
		else
		{
			aggregate_func_3723();
			return true;
		}
	}
	func_207(&(Global_1572887->f_387));
	sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_206(joaat("mode")));
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	if (iVar1 != 0)
	{
		aggregate_func_6704(iVar1);
	}
	if (NETWORK::_0x02E97CE283648CD9(func_206(82543689)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_206(82543689));
		Global_1572887->f_387.f_3 = aggregate_func_4690(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_0x02E97CE283648CD9(func_206(-1926951471)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_206(-1926951471));
		Global_1572887->f_387.f_4 = aggregate_func_4709(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_0x02E97CE283648CD9(func_206(-763890493)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_206(-763890493));
		Global_1572887->f_387.f_5 = func_210(MISC::GET_HASH_KEY(sVar0));
	}
	if (NETWORK::_0x02E97CE283648CD9(func_206(-875643756)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_206(-875643756));
		Global_1572887->f_387.f_7 = aggregate_func_4601(MISC::GET_HASH_KEY(sVar0));
		Global_1572887->f_387.f_6 = -1;
	}
	if (NETWORK::_0x02E97CE283648CD9(func_206(64789430)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_206(64789430));
		Global_1572887->f_387.f_2 = aggregate_func_7730(MISC::GET_HASH_KEY(sVar0));
		if (Global_1572887->f_387.f_2 <= -1)
		{
			aggregate_func_7013(49, -1);
		}
	}
	if (NETWORK::_0x02E97CE283648CD9(func_206(735882532)))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_206(735882532));
		Global_1572887->f_387.f_8 = MISC::GET_HASH_KEY(sVar0);
	}
	Global_1572887->f_387.f_9 = 0;
	if (NETWORK::_0x02E97CE283648CD9(func_206(joaat("p_fav01_grass_06_268"))))
	{
		sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_206(joaat("p_fav01_grass_06_268")));
		if (MISC::STRING_TO_INT(sVar0, &(Global_1572887->f_387.f_9)))
		{
		}
	}
	iVar2 = -730035725;
	iVar4 = 0;
	iVar5 = -730035725;
	iVar4 = 0;
	while (iVar4 <= 30)
	{
		iVar2 = (iVar5 + iVar4);
		if (NETWORK::_0x02E97CE283648CD9(func_206(iVar2)))
		{
			sVar0 = NETWORK::_0x65E65CA6A0FE59D4(func_206(iVar2));
			iVar3 = MISC::GET_HASH_KEY(sVar0);
			if (iVar3 != 0)
			{
				func_204(iVar3);
			}
		}
		iVar4++;
	}
	NETWORK::_0x966DD84FB6A46017();
	aggregate_func_3723();
	return true;
}

void func_83()
{
	switch (aggregate_func_7737())
	{
		case joaat("single_player"):
			vLocal_31.f_2 = 2;
			break;
		case joaat("freeroam"):
			if (!NETWORK::_0x2A8112A974DE1EF6())
			{
				vLocal_31.f_2 = 1;
				aggregate_func_6908(4);
				if (aggregate_func_7518(-2030542394) || NETWORK::_0xFC4165C9165C166F())
				{
					NETWORK::_0xA4484173759749B1();
				}
			}
			else
			{
				vLocal_31.f_2 = 3;
				aggregate_func_6908(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case -1743646234:
			break;
		case -1330461529:
			if (!NETWORK::_0x2A8112A974DE1EF6())
			{
				vLocal_31.f_2 = 1;
				aggregate_func_6908(4);
				if (aggregate_func_7518(-2030542394) || NETWORK::_0xFC4165C9165C166F())
				{
					NETWORK::_0xA4484173759749B1();
				}
			}
			else
			{
				vLocal_31.f_2 = 3;
				aggregate_func_6908(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("mission"):
			if (!NETWORK::_0x2A8112A974DE1EF6())
			{
				vLocal_31.f_2 = 1;
				aggregate_func_6908(4);
				if (aggregate_func_7518(-2030542394) || NETWORK::_0xFC4165C9165C166F())
				{
					NETWORK::_0xA4484173759749B1();
				}
			}
			else
			{
				vLocal_31.f_2 = 3;
				aggregate_func_6908(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case 1495295997:
			if (!NETWORK::_0x2A8112A974DE1EF6())
			{
				vLocal_31.f_2 = 1;
				aggregate_func_6908(4);
				if (aggregate_func_7518(-2030542394) || NETWORK::_0xFC4165C9165C166F())
				{
					NETWORK::_0xA4484173759749B1();
				}
			}
			else
			{
				vLocal_31.f_2 = 3;
				aggregate_func_6908(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("mission_creator"):
			if (!NETWORK::_0x2A8112A974DE1EF6())
			{
				vLocal_31.f_2 = 1;
				aggregate_func_6908(4);
				if (aggregate_func_7518(-2030542394) || NETWORK::_0xFC4165C9165C166F())
				{
					NETWORK::_0xA4484173759749B1();
				}
			}
			else
			{
				vLocal_31.f_2 = 3;
				aggregate_func_6908(68);
				AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			}
			break;
		case joaat("clip"):
			vLocal_31.f_2 = 5;
			aggregate_func_6908(4);
			AUDIO::_0xAC84686C06184B0D("Fade_To_SP", "Load_Menu_Scenes");
			break;
	}
}

char* func_87(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "startup_sp";
		case 3:
			return "startup_mp";
		case 4:
			return "startup_tlg";
		case 5:
			return "startup_clip";
	}
	return "startup_sp";
}

void func_90(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			AUDIO::_0xAC84686C06184B0D("Fade_To_SP", "Load_Menu_Scenes");
			break;
		case 3:
			AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			break;
		case 4:
			AUDIO::_0xAC84686C06184B0D("Fade_To_MP", "Load_Menu_Scenes");
			break;
		case 5:
			AUDIO::_0xAC84686C06184B0D("Fade_To_Editor", "Load_Menu_Scenes");
			break;
	}
}

char* func_91(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("single_player"):
			sVar0 = "single_player";
			break;
		case joaat("freeroam"):
			sVar0 = "freeroam";
			break;
		case -1743646234:
			sVar0 = "goldstore";
			break;
		case -1330461529:
			sVar0 = "series";
			break;
		case joaat("mission"):
			sVar0 = "mission";
			break;
		case 1495295997:
			sVar0 = "minigame";
			break;
		case joaat("mission_creator"):
			sVar0 = "mission_creator";
			break;
		case joaat("clip"):
			sVar0 = "clip";
			break;
		case -1828660489:
			sVar0 = "tlg";
			break;
	}
	return sVar0;
}

int func_92(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("NEW_GAME");
			break;
		case 1:
			iVar0 = 1651967528;
			break;
		case 2:
			iVar0 = -84928653;
			break;
		case 3:
			iVar0 = 1306134188;
			break;
		case 4:
			iVar0 = -1357178860;
			break;
		case 5:
			iVar0 = joaat("friendly");
			break;
		case 6:
			iVar0 = 655115506;
			break;
		case 7:
			iVar0 = 1737952409;
			break;
		case 8:
			iVar0 = 2137301164;
			break;
		case 9:
			iVar0 = -110687166;
			break;
		case 10:
			iVar0 = -2030542394;
			break;
		case 11:
			iVar0 = -11301188;
			break;
		case 12:
			iVar0 = -1312679892;
			break;
		case 13:
			iVar0 = -61119924;
			break;
		case 14:
			iVar0 = 2134863183;
			break;
		case 15:
			iVar0 = -159568751;
			break;
		case 16:
			iVar0 = -1808811965;
			break;
		case 17:
			iVar0 = -1854341522;
			break;
		case 18:
			iVar0 = 1464020707;
			break;
		case 19:
			iVar0 = 1098974047;
			break;
		case 20:
			iVar0 = 868706284;
			break;
		case 21:
			iVar0 = 313296873;
			break;
		case 22:
			iVar0 = 541270806;
			break;
		case 23:
			iVar0 = 922800273;
			break;
		case 24:
			iVar0 = 1298496858;
			break;
		case 25:
			iVar0 = 1699163417;
			break;
		case 26:
			iVar0 = 864110990;
			break;
		case 27:
			iVar0 = -2127829790;
			break;
		case 28:
			iVar0 = -575777117;
			break;
		case 29:
			iVar0 = -1879562593;
			break;
		case 30:
			iVar0 = 1890312850;
			break;
	}
	return iVar0;
}

char* func_93(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		case joaat("NEW_GAME"):
			sVar0 = "new_game";
			break;
		case 1651967528:
			sVar0 = "shift_f";
			break;
		case -84928653:
			sVar0 = "demo";
			break;
		case 1306134188:
			sVar0 = "intro_not_done";
			break;
		case -1357178860:
			sVar0 = "private";
			break;
		case joaat("friendly"):
			sVar0 = "friendly";
			break;
		case 655115506:
			sVar0 = "hardcore";
			break;
		case 1737952409:
			sVar0 = "near_posse";
			break;
		case 2137301164:
			sVar0 = "random_posse";
			break;
		case -110687166:
			sVar0 = "open_posse";
			break;
		case -2030542394:
			sVar0 = "follow_invite";
			break;
		case -11301188:
			sVar0 = "random_region";
			break;
		case -1312679892:
			sVar0 = "last_region";
			break;
		case -61119924:
			sVar0 = "last_location";
			break;
		case 2134863183:
			sVar0 = "camp";
			break;
		case -159568751:
			sVar0 = "handheld";
			break;
		case -1808811965:
			sVar0 = "last_mission";
			break;
		case -1854341522:
			sVar0 = "random_poker";
			break;
		case 1464020707:
			sVar0 = "bg_custom_1";
			break;
		case 1098974047:
			sVar0 = "bg_custom_2";
			break;
		case 868706284:
			sVar0 = "bg_custom_3";
			break;
		case 313296873:
			sVar0 = "trade_1";
			break;
		case 541270806:
			sVar0 = "trade_2";
			break;
		case 922800273:
			sVar0 = "trade_3";
			break;
		case 1298496858:
			sVar0 = "trade_4";
			break;
		case 1699163417:
			sVar0 = "trade_5";
			break;
		case 864110990:
			sVar0 = "trade_6";
			break;
		case -2127829790:
			sVar0 = "trade_7";
			break;
		case -575777117:
			sVar0 = "cchar";
			break;
		case -1879562593:
			sVar0 = "coupon";
			break;
		case 1890312850:
			sVar0 = "hub";
			break;
	}
	return sVar0;
}

char* func_95(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DISTRICT_BAYOU_NWA";
		case 1:
			return "DISTRICT_BIG_VALLEY";
		case 2:
			return "DISTRICT_BLUEGILL_MARSH";
		case 3:
			return "DISTRICT_CUMBERLAND_FOREST";
		case 4:
			return "DISTRICT_GREAT_PLAINS";
		case 5:
			return "DISTRICT_GRIZZLIES";
		case 6:
			return "DISTRICT_GRIZZLIES_EAST";
		case 7:
			return "DISTRICT_GRIZZLIES_WEST";
		case 8:
			return "DISTRICT_GUAMA";
		case 9:
			return "DISTRICT_HEARTLAND";
		case 10:
			return "DISTRICT_ROANOKE_RIDGE";
		case 11:
			return "DISTRICT_SCARLETT_MEADOWS";
		case 12:
			return "DISTRICT_TALL_TREES";
		case 13:
			return "DISTRICT_GAPTOOTH_RIDGE";
		case 14:
			return "DISTRICT_RIO_BRAVO";
		case 15:
			return "DISTRICT_CHOLLA_SPRINGS";
		case 16:
			return "DISTRICT_HENNIGANS_STEAD";
		default:
			break;
	}
	return "";
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AMBARINO";
		case 1:
			return "LEMOYNE";
		case 2:
			return "NEWAUSTIN";
		case 3:
			return "NEWHANOVER";
		case 4:
			return "WESTELIZABETH";
		case 5:
			return "GUARMA";
		default:
			break;
	}
	return "";
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACKJACK";
		case 1:
			return "DOMINOES";
		case 2:
			return "POKER";
		case 3:
			return "FILLET";
		case 4:
			return "MILKING_COW";
		case 5:
			return "CLEAN_STALLS";
		case 6:
			return "FENCE_BUILDING";
		default:
			break;
	}
	return "invalid MINIGAME_TYPES";
}

void func_102(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	StringCopy(&cVar1, "herbs", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 54, &cVar1);
	iVar0 = 0;
	while (iVar0 < 53)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		Var17 = { Var9 };
		StringConCat(&Var17, ".eHerbTypeFlags", 64);
		_NAMESPACE59::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var17);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
}

void func_103(var uParam0, char* sParam1)
{
	_NAMESPACE59::_0x8E8FFB9E4AD051D2(uParam0, 2509, "persona", 11);
	_NAMESPACE59::_0xB25B5A375BE5BE26(uParam0, "psna_eLastValidRegion");
	func_216(&(uParam0->f_1), "psna_vLastValidPosition");
	func_217(&(uParam0->f_4));
	func_218(&(uParam0->f_14));
	func_219(&(uParam0->f_61));
	func_220(&(uParam0->f_644));
	func_221(&(uParam0->f_2435));
	func_222(&(uParam0->f_2438));
	func_223(&(uParam0->f_2480));
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_104(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	if (0 && !bParam2)
	{
	}
	StringCopy(&cVar1, "eTutorialsRun", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 31, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_NAMESPACE59::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
}

void func_105(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, "iTutorialBuffer", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 25, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
}

void func_106(var uParam0, char* sParam1)
{
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 3, "psna_sNotoriety");
	_NAMESPACE59::_0x35DEFECAE36D4FAE(uParam0, "psna_sNotoriety_fNotoriety");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1), "psna_sNotoriety_iPosixTimeStampOfLastReason");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_2), "psna_sNotoriety_ePassive");
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_107(var uParam0, char* sParam1)
{
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 1, "psna_sNotoriety_TU004");
	_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0, "iPosixTimeStampOfLastInfraction");
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_108(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];

	StringCopy(&cVar1, "clothingTU004", 64);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 89, &cVar1);
	StringConCat(&cVar1, "_OutfitArray", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 89, &cVar1);
	iVar0 = 0;
	while (iVar0 < 11)
	{
		StringCopy(&cVar1, "clothingTU004", 64);
		StringConCat(&cVar1, "_OutfitArray", 64);
		StringConCat(&cVar1, "_Element_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*8*/], 8, &cVar1);
		StringConCat(&cVar1, "_Name", 64);
		_NAMESPACE59::_0x186608A2AC6F9E88((*uParam0)[iVar0 /*8*/], &cVar1);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_109(var uParam0, char* sParam1)
{
	char cVar0[64];
	struct<8> Var8;
	struct<8> Var16;
	int iVar24;

	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 46, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".sGiftData", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 46, &cVar0);
	iVar24 = 0;
	while (iVar24 < *uParam0)
	{
		Var8 = { cVar0 };
		StringIntConCat(&Var8, iVar24, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F((*uParam0)[iVar24 /*3*/], 3, &Var8);
		Var16 = { Var8 };
		StringConCat(&Var16, ".bNotificationPushed", 64);
		_NAMESPACE59::_0xBB7F4273C186BC4B((*uParam0)[iVar24 /*3*/], &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iGiftItemHash", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar24 /*3*/])->f_1), &Var16);
		Var16 = { Var8 };
		StringConCat(&Var16, ".iItemMailCount", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar24 /*3*/])->f_2), &Var16);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar24++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_110(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;

	StringCopy(&cVar1, ".todLastVisited", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 177, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_NAMESPACE59::_0xB25B5A375BE5BE26((*uParam0)[iVar0], &Var9);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
}

void func_111(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	StringCopy(&cVar1, "MpFlow", 128);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 19, &cVar1);
	StringConCat(&cVar1, ".LastPositionArray", 128);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 19, &cVar1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		StringCopy(&cVar1, "MpFlow.LastPositionArray.Strand.", 128);
		StringIntConCat(&cVar1, iVar0, 128);
		_NAMESPACE59::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*3*/], 3, &cVar1);
		StringConCat(&cVar1, ".vPos", 128);
		func_216((*uParam0)[iVar0 /*3*/], &cVar1);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_112(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];

	StringCopy(&cVar1, sParam1, 64);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 22, "psna_blipsdatStruct");
	_NAMESPACE59::_0xB25B5A375BE5BE26(uParam0, "psna_sBlipsdatState");
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_1), 16, &cVar1);
	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "psna_itemDat", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F(uParam0->f_1[iVar0 /*5*/], 16, &cVar1);
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "ItemPickedUp", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0xBB7F4273C186BC4B(uParam0->f_1[iVar0 /*5*/], &cVar1);
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "SearchVector", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_216(&((uParam0->f_1[iVar0 /*5*/])->f_1), &cVar1);
		StringCopy(&cVar1, sParam1, 64);
		StringConCat(&cVar1, "Item", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0xB25B5A375BE5BE26(&((uParam0->f_1[iVar0 /*5*/])->f_4), &cVar1);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_17), "psna_sBlipsdatCurrentMap");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_18), "psna_sBlipsdatPrevMap");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_19), "psna_sBlipsdatStartingScenarioGroup");
	_NAMESPACE59::_0xBB7F4273C186BC4B(&(uParam0->f_20), "psna_sBlipsdatStateChanged");
	_NAMESPACE59::_0xBB7F4273C186BC4B(&(uParam0->f_21), "psna_sBlipsdatActiveMapBlips");
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_113(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];
	struct<8> Var9;
	struct<8> Var17;

	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 89, sParam1);
	StringCopy(&cVar1, sParam1, 64);
	StringConCat(&cVar1, ".Record", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 85, &cVar1);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		Var9 = { cVar1 };
		StringIntConCat(&Var9, iVar0, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*3*/], 3, &Var9);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iDate", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*3*/], &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGamblingSecs", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*3*/])->f_1), &Var17);
		Var17 = { Var9 };
		StringConCat(&Var17, ".iGameSecs", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*3*/])->f_2), &Var17);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iQueueFront", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_85), &Var17);
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iQueueBack", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_86), &Var17);
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iQueueSize", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_87), &Var17);
	StringCopy(&Var17, sParam1, 64);
	StringConCat(&Var17, ".iLockdownDate", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_88), &Var17);
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_114(var uParam0, char* sParam1)
{
	char cVar0[64];

	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 2, sParam1);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".bCollectorBlipDiscovered", 64);
	_NAMESPACE59::_0xBB7F4273C186BC4B(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".eCollectorCheckBlipShop", 64);
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_1), &cVar0);
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_115(var uParam0)
{
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 9, "psna_collGroup");
	_NAMESPACE59::_0xB25B5A375BE5BE26(uParam0, "psna_collGroupArrowhead");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_1), "psna_collGroupBottles");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_2), "psna_collGroupRandom");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_3), "psna_collGroupCoin");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_4), "psna_collGroupHeirloom");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_5), "psna_collGroupJewelry");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_6), "psna_collGroupEgg");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_7), "psna_collGroupFlower");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_8), "psna_collGroupCard");
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_116()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_45(iVar0))
		{
			SCRIPTS::REQUEST_SCRIPT(func_118(iVar0));
		}
		iVar0++;
	}
}

bool func_117(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = (iParam0 >= 0 && iParam0 < 15);
	if (bParam1 && !bVar0)
	{
	}
	return bVar0;
}

char* func_118(int iParam0)
{
	var uVar0;

	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "init_global_block_ugc";
		case 4:
			return "init_global_block_mp";
		case 3:
			return "init_global_block_profiler";
		case 5:
			return "init_global_block_sp";
		case 7:
			return "init_global_block_shared";
		case 6:
			return "init_global_block_transition";
		case 10:
			return "init_global_block_softsave";
		case 2:
			return "init_global_block_mc";
		case 9:
			return "init_global_block_mc_deathmatch";
		case 8:
			return "init_global_block_mc_race";
		case 11:
			return "init_global_block_creator";
		case 12:
			return "init_global_block_ugc_common";
		case 13:
			return "init_global_block_ugc_transition";
		case 14:
			return "init_global_block_ugc_cutscene";
	}
	return uVar0;
}

void func_147()
{
	BRAIN::REGISTER_OBJECT_SCRIPT_BRAIN("net_fast_travel_barker", 148678632, 100, 20f, -1, 4);
}

int func_148(int iParam0, int iParam1)
{
	if (iParam0 <= 999)
	{
		switch (iParam0)
		{
			case 0:
				return 1332067900;
			case 1:
				return -1118337851;
			case 2:
				return 1236490949;
			case 3:
				return -1701626270;
			case 4:
				return -557964826;
			case 5:
				return 603871447;
			case 6:
				return -1569624057;
			case 7:
				return -378395191;
			case 8:
				return 273551835;
			case 9:
				return -961488528;
			case 10:
				return 1936009597;
			case 11:
				return -425834853;
			case 12:
				return -1055748784;
			case 13:
				return -694809996;
			case 14:
				return -279703229;
			case 15:
				return -2053475031;
			case 16:
				return -623091266;
			case 17:
				return -217646849;
			case 18:
				return -313831898;
			case 19:
				return 1694736240;
			case 20:
				return 634920011;
			case 21:
				return 2035758463;
			case 22:
				return 425205960;
			case 23:
				return 54402003;
			case 24:
				return -481093102;
			case 25:
				return -1923021027;
			case 26:
				return -1721168110;
			case 27:
				return 937192284;
			case 28:
				return 706203603;
			case 29:
				return 579021239;
			case 30:
				return 272490690;
			case 31:
				return 263152228;
			case 32:
				return 996571604;
			case 33:
				return 301693437;
			case 34:
				return 846337294;
			case 35:
				return -512601161;
			case 36:
				return 765343099;
			case 37:
				return -909306169;
			case 38:
				return -879315604;
			case 39:
				return 1503442953;
			case 40:
				return 31909846;
			case 41:
				return -1227807056;
			case 42:
				return 1234648758;
			case 43:
				return 1616712776;
			case 44:
				return -414301703;
			case 45:
				return 1423912753;
			case 46:
				return 1049849921;
			case 47:
				return 1252084553;
			case 48:
				return -995906750;
			case 49:
				return -2112989134;
			case 50:
				return 722810050;
			case 51:
				return -1710969071;
			case 52:
				return 1499112197;
			case 53:
				return 929504930;
			case 54:
				return 37622013;
			case 55:
				return 808313916;
			case 56:
				return 276427301;
			case 57:
				return 539464064;
			case 58:
				return -1501864740;
			case 59:
				return -1070814495;
			case 60:
				return 1713296185;
			case 61:
				return 506519174;
			case 62:
				return 1903066940;
			case 63:
				return -563006151;
			case 64:
				return -792399058;
			case 65:
				return 2123794495;
			case 66:
				return -248246131;
			case 67:
				return -1435884039;
			case 68:
				return -108299713;
			case 69:
				return -2009032789;
			case 70:
				return -822172378;
			case 71:
				return -340009312;
			case 72:
				return 1122045165;
			case 73:
				return 1352837232;
			case 74:
				return -1740687448;
			case 75:
				return -1508256931;
			case 76:
				return 1739445890;
			case 77:
				return -817060178;
			case 78:
				return -737812908;
			case 79:
				return 389213738;
			case 80:
				return 2126897368;
			case 81:
				return 1314976319;
			case 82:
				return -780302065;
			case 83:
				return -1226654727;
			case 84:
				return 1849913721;
			case 85:
				return 573576705;
			case 86:
				return -173548630;
			case 87:
				return 1818260702;
			case 88:
				return 406701199;
			case 89:
				return 674386615;
			case 90:
				return 1502951187;
			case 91:
				return 728379187;
			case 92:
				return -2053832767;
			case 93:
				return -1082668955;
			case 94:
				return -86528958;
			case 95:
				return -772093381;
			case 96:
				return -1973910443;
			case 97:
				return 262039053;
			case 98:
				return 507232138;
			case 99:
				return -456215895;
			case 100:
				return -792369764;
			case 101:
				return -170108806;
			case 102:
				return -1967848432;
			case 103:
				return 1647812004;
			case 104:
				return -856826868;
			case 105:
				return -1775985984;
			case 106:
				return -1023478668;
			case 107:
				return -200270658;
			case 108:
				return -127497991;
			case 109:
				return -773956478;
			case 110:
				return 993438435;
			case 111:
				return 895825612;
			case 112:
				return -361709910;
			case 113:
				return 190848106;
			case 114:
				return -1928361302;
			case 115:
				return -315113250;
			case 116:
				return -1850873053;
			case 117:
				return 1548242606;
			case 118:
				return -1192753172;
			case 119:
				return -482255714;
			case 120:
				return -236914211;
			case 121:
				return 2130187273;
			case 122:
				return -833696851;
			case 123:
				return 882236853;
			case 124:
				return -2060277385;
			case 125:
				return -223199122;
			case 126:
				return 1239191982;
			case 127:
				return 132414998;
			case 128:
				return -1591103463;
			case 129:
				return -2051059045;
			case 130:
				return -522767301;
			case 131:
				return -1626434823;
			case 132:
				return -1411225477;
			case 133:
				return 263133813;
			case 134:
				return 416864911;
			case 135:
				return 1312163721;
			case 136:
				return 1843301309;
			case 137:
				return -1957607557;
			case 138:
				return 1311508924;
			case 139:
				return 1256749990;
			case 140:
				return -1521897637;
			case 141:
				return 967935536;
			case 142:
				return 771896020;
			case 143:
				return 1925740339;
			case 144:
				return 184411343;
			case 145:
				return -15009406;
			case 146:
				return 1337703077;
			case 147:
				return -615961815;
			case 148:
				return 184476093;
			case 149:
				return 413309170;
			case 150:
				return -636161219;
			case 151:
				return -1956708897;
			case 152:
				return 1988206529;
			case 153:
				return -1974746920;
			case 154:
				return 536714458;
			case 155:
				return 372806894;
			case 156:
				return -1122196204;
			case 157:
				return 1283988553;
			case 158:
				return 416759610;
			case 159:
				return 1916362667;
			case 160:
				return -76573194;
			case 161:
				return 391171508;
			case 162:
				return 827906606;
			case 163:
				return -169261100;
			case 164:
				return -8749224;
			case 165:
				return 1912754336;
			case 166:
				return 1883767827;
			case 167:
				return 1171226610;
			case 168:
				return 508578717;
			case 169:
				return 1975720265;
			case 170:
				return 1092530042;
			case 171:
				return 194929358;
			case 172:
				return 1851402669;
			case 173:
				return -629211790;
			case 174:
				return -1226747327;
			case 175:
				return -466634713;
			case 176:
				return -141795616;
			case 177:
				return 292362182;
			case 178:
				return 807262958;
			case 179:
				return 1717286956;
			case 180:
				return -599973510;
			case 181:
				return 306939642;
			case 182:
				return -1960392600;
			case 183:
				return -1255088882;
			case 184:
				return -1934886317;
			case 185:
				return -1615749463;
			case 186:
				return -429506139;
			case 187:
				return -691276094;
			case 188:
				return 1271362767;
			case 189:
				return -447844606;
			case 190:
				return 405490102;
			case 191:
				return 902305731;
			case 192:
				return -2103414139;
			case 193:
				return -1323334072;
			case 194:
				return 1191283411;
			case 195:
				return 2054555425;
			case 196:
				return 1627459254;
			case 197:
				return 1451629584;
			case 198:
				return 989607914;
			case 199:
				return 764325310;
			case 200:
				return -1935434583;
			case 201:
				return 636239983;
			case 202:
				return 845427792;
			case 203:
				return -1309532876;
			case 204:
				return -1961938422;
			case 205:
				return -24480300;
			case 206:
				return 712823073;
			case 207:
				return -2074957003;
			case 208:
				return 840395410;
			case 209:
				return -433293752;
			case 210:
				return 1831175752;
			case 211:
				return -1235304557;
			case 212:
				return 508853087;
			case 213:
				return -936204805;
			case 214:
				return 2118488614;
			case 215:
				return -1287270695;
			case 216:
				return -1885599866;
			case 217:
				return -118171082;
			case 218:
				return 1726559781;
			case 219:
				return 1455068616;
			case 220:
				return -1069586228;
			case 221:
				return -688744902;
			case 222:
				return -1993836161;
			case 223:
				return 402954041;
			case 224:
				return 616706228;
			case 225:
				return -1279832420;
			case 226:
				return 1280284302;
			case 227:
				return 99679839;
			case 228:
				return -195226224;
			case 229:
				return -1670262487;
			case 230:
				return -754458705;
			case 231:
				return -1725459238;
			case 232:
				return 283731391;
			case 233:
				return -31342544;
			case 234:
				return 588746212;
			case 235:
				return -834411899;
			case 236:
				return -50297425;
			case 237:
				return 34626245;
			case 238:
				return 1128425273;
			case 239:
				return 1405502979;
			case 240:
				return -1534019549;
			case 241:
				return -1218790373;
			case 242:
				return -1995447743;
			case 243:
				return 1495728629;
			case 244:
				return -205102142;
			case 245:
				return 2068117822;
			case 246:
				return 1646485471;
			case 247:
				return 2075683947;
			case 248:
				return 48202231;
			case 249:
				return 1532041436;
			case 250:
				return 1993833091;
			case 251:
				return -985843618;
			case 252:
				return 1542551103;
			case 253:
				return 298607063;
			case 254:
				return -1298966347;
			case 255:
				return 1117165375;
			case 256:
				return -1695492178;
			case 257:
				return -1985868973;
			case 258:
				return -1300575561;
			case 259:
				return 354638936;
			case 260:
				return 933157597;
			case 261:
				return 1416094782;
			case 262:
				return -1139312905;
			case 263:
				return 1062381624;
			case 264:
				return -1003150953;
			case 265:
				return -1986775954;
			case 266:
				return 929785619;
			case 267:
				return -899261623;
			case 268:
				return -476849231;
			case 269:
				return -557729610;
			case 270:
				return -639956757;
			case 271:
				return -1991979537;
			case 272:
				return 748846068;
			case 273:
				return 1193231534;
			case 274:
				return -663999418;
			case 275:
				return 1807258239;
			case 276:
				return -259044425;
			case 277:
				return 787640784;
			case 278:
				return 1199768352;
			case 279:
				return -1414272575;
			case 280:
				return -1392793470;
			case 281:
				return -1398290276;
			case 282:
				return 2006120810;
			case 283:
				return -1785392621;
			case 284:
				return 194103255;
			case 285:
				return -1809365172;
			case 286:
				return -1408478050;
			case 287:
				return -612173099;
			case 288:
				return -716370751;
			case 289:
				return -567121002;
			case 290:
				return 1344880374;
			case 291:
				return -1872364931;
			case 292:
				return -1923126393;
			case 293:
				return -313259746;
			case 294:
				return -367168072;
			case 295:
				return 1971923782;
			case 296:
				return 401043460;
			case 297:
				return 104287396;
			case 298:
				return 1014446371;
			case 299:
				return 715920781;
			case 300:
				return -900541220;
			case 301:
				return -1199296193;
			case 302:
				return -290546285;
			case 303:
				return -553189820;
			case 304:
				return 546408124;
			case 305:
				return 1313890873;
			case 306:
				return 129717520;
			case 307:
				return -1232784731;
			case 308:
				return -482898935;
			case 309:
				return 301558156;
			case 310:
				return 1859330882;
			case 311:
				return 1683033662;
			case 312:
				return -1419371417;
			case 313:
				return -643041038;
			case 314:
				return 1733394134;
			case 315:
				return 1529455145;
			case 316:
				return -911242864;
			case 317:
				return 1620300964;
			case 318:
				return -476377037;
			case 319:
				return -1440675331;
			case 320:
				return -848533860;
			case 321:
				return -1151968796;
			case 322:
				return -2024941402;
			case 323:
				return -1534577778;
			case 324:
				return -1211176762;
			case 325:
				return 857765025;
			case 326:
				return 1590446437;
			case 327:
				return 1466088082;
			case 328:
				return -1789074439;
			case 329:
				return -1852056457;
			case 330:
				return 499096137;
			case 331:
				return 556704039;
			case 332:
				return -368895393;
			case 333:
				return -105596478;
			case 334:
				return 190078209;
			case 335:
				return 561187138;
			case 336:
				return 859352269;
			case 337:
				return 1023328345;
			case 338:
				return 705065993;
			case 339:
				return -2090647942;
			case 340:
				return -2051019414;
			case 341:
				return 1174496881;
			case 342:
				return 1510350995;
			case 343:
				return -789679769;
			case 344:
				return 830856441;
			case 345:
				return -497360377;
			case 346:
				return 246150045;
			case 347:
				return 1514318372;
			case 348:
				return 680545654;
			case 349:
				return -262021866;
			case 350:
				return 62512826;
			case 351:
				return 1104817207;
			case 352:
				return 127191252;
			case 353:
				return -1207218596;
			case 354:
				return 1955414013;
			case 355:
				return 478888800;
			case 356:
				return 476687617;
			case 357:
				return 1856368424;
			case 358:
				return 226557169;
			case 359:
				return -320403109;
			case 360:
				return -576687258;
			case 361:
				return -605808708;
			case 362:
				return -331965904;
			case 363:
				return -100150000;
			case 364:
				return -116967529;
			case 365:
				return 568096966;
			case 366:
				return 18369533;
			case 367:
				return -770646513;
			case 368:
				return -1876837239;
			case 369:
				return -449454773;
			case 370:
				return 1308321372;
			case 371:
				return 516308968;
			case 372:
				return 143994875;
			case 373:
				return 1991621063;
			case 374:
				return -1798733774;
			case 375:
				return 677191274;
			case 376:
				return -2011620387;
			case 377:
				return 579127040;
			case 378:
				return -1314125880;
			case 379:
				return -953275122;
			case 380:
				return 1998087725;
			case 381:
				return 1145227353;
			case 382:
				return 1915867459;
			case 383:
				return -3571233;
			case 384:
				return -2105071972;
			case 385:
				return 1527084472;
			case 386:
				return 1635537886;
			case 387:
				return -1121783372;
			case 388:
				return 874022542;
			case 389:
				return 552030279;
			case 390:
				return -1639384288;
			case 391:
				return 274045919;
			case 392:
				return -1047394327;
			case 393:
				return -1141831946;
			case 394:
				return -591921971;
			case 395:
				return 1157155867;
			case 396:
				return 1397975248;
			case 397:
				return -820486040;
			case 398:
				return -1109901848;
			case 399:
				return -1010679388;
			case 400:
				return 98482444;
			case 401:
				return -1754541271;
			case 402:
				return -1363999915;
			case 403:
				return -163883900;
			case 404:
				return 26932594;
			case 405:
				return -1930879809;
			case 406:
				return 46370274;
			case 407:
				return 976641588;
			case 408:
				return 1121956769;
			case 409:
				return -340622004;
			case 410:
				return 510716616;
			case 411:
				return 1464851585;
			case 412:
				return 1763246099;
			case 413:
				return 920427419;
			case 414:
				return -860750371;
			case 415:
				return 1193359531;
			case 416:
				return 1707200698;
			case 417:
				return 1033367448;
			case 418:
				return -1279036865;
			case 419:
				return -1816233372;
			case 420:
				return -718318645;
			case 421:
				return 1717399635;
			case 422:
				return 40845437;
			case 423:
				return -1664053323;
			case 424:
				return -1535282356;
			case 425:
				return -363626454;
			case 426:
				return -1375030991;
			case 427:
				return -697003681;
			case 428:
				return 1193229750;
			case 429:
				return -2041779893;
			case 430:
				return 658964321;
			case 431:
				return 112266538;
			case 432:
				return -593457329;
			case 433:
				return 781058494;
			case 434:
				return -1022426685;
			case 435:
				return 1989203268;
			case 436:
				return 1020450527;
			case 437:
				return -531198053;
			case 438:
				return 1467466015;
			case 439:
				return -551038153;
			case 440:
				return -484929865;
			case 441:
				return 841781567;
			case 442:
				return -755250900;
			case 443:
				return 1262164851;
			case 444:
				return -620856989;
			case 445:
				return -1453850836;
			case 446:
				return 2006850489;
			case 447:
				return -338553155;
			case 448:
				return -1106668087;
			case 449:
				return -323126593;
			case 450:
				return 2028590076;
			case 451:
				return -1636879249;
			case 452:
				return -889869458;
			case 453:
				return 983546059;
			case 454:
				return 1590561203;
			case 455:
				return -739334986;
			case 456:
				return 1289304923;
			case 457:
				return 1113693078;
			case 458:
				return -1019727725;
			case 459:
				return -78852126;
			case 460:
				return 992791293;
			case 461:
				return 660686456;
			case 462:
				return -584714922;
			case 463:
				return -1513941904;
			case 464:
				return -1306375743;
			case 465:
				return 1489268640;
			case 466:
				return -1344255754;
			case 467:
				return 739805687;
			case 468:
				return 1003623269;
			case 469:
				return -395621323;
			case 470:
				return 1638937672;
			case 471:
				return 661576070;
			case 472:
				return 795060201;
			case 473:
				return -198004806;
			case 474:
				return -924329535;
			case 475:
				return -1815023148;
			case 476:
				return -537757838;
			case 477:
				return 1575123584;
			case 478:
				return -710506752;
			case 479:
				return -2117963426;
			case 480:
				return -419935200;
			case 481:
				return -1849681615;
			case 482:
				return 1122583474;
			case 483:
				return -828094297;
			case 484:
				return -1496155572;
			case 485:
				return 44502487;
			case 486:
				return -459648718;
			case 487:
				return 1102643191;
			case 488:
				return -1778044697;
			case 489:
				return 1387226336;
			case 490:
				return -1310355638;
			case 491:
				return 1069611813;
			case 492:
				return 531106429;
			case 493:
				return -407402757;
			case 494:
				return 1459136338;
			case 495:
				return -1162254606;
			case 496:
				return -1869016398;
			case 497:
				return 1561231200;
			case 498:
				return -1541842872;
			case 499:
				return 1311984381;
			case 500:
				return -771819139;
			case 501:
				return -1437554707;
			case 502:
				return -981684452;
			case 503:
				return 560821199;
			case 504:
				return 1547347496;
			case 505:
				return 806681228;
			case 506:
				return -1966238128;
			case 507:
				return -957510885;
			case 508:
				return -149795084;
			case 509:
				return 955352710;
			case 510:
				return -1016007592;
			case 511:
				return -1361342903;
			case 512:
				return 41956969;
			case 513:
				return -317096325;
			case 514:
				return 1025787994;
			case 515:
				return -1255331540;
			case 516:
				return -1063926197;
			case 517:
				return 629519239;
			case 518:
				return -483001024;
			case 519:
				return -2048221620;
			case 520:
				return 255767990;
			case 521:
				return 1104800593;
			case 522:
				return -1063259251;
			case 523:
				return -763678874;
			case 524:
				return -408234235;
			case 525:
				return 1423158124;
			case 526:
				return 360408116;
			case 527:
				return 339295570;
			case 528:
				return 668976634;
			case 529:
				return 968084866;
			case 530:
				return -696422730;
			case 531:
				return 1537844205;
			case 532:
				return -1766409506;
			case 533:
				return -724913398;
			case 534:
				return -1950049852;
			case 535:
				return -1786365097;
			case 536:
				return -1221875648;
			case 537:
				return -833857740;
			case 538:
				return 1929440211;
			case 539:
				return 1354870005;
			case 540:
				return -1718055184;
			case 541:
				return -1499162505;
			case 542:
				return -1832103801;
			case 543:
				return -262759679;
			case 544:
				return -624201308;
			case 545:
				return -1848077772;
			case 546:
				return -3789307;
			case 547:
				return 1368296489;
			case 548:
				return -436084091;
			case 549:
				return 1271713904;
			case 550:
				return 1423681694;
			case 551:
				return 1293624693;
			case 552:
				return -1305406402;
			case 553:
				return 1983816160;
			case 554:
				return -602816690;
			case 555:
				return 636278554;
			case 556:
				return -285245562;
			case 557:
				return 1031662866;
			case 558:
				return -1041976064;
			case 559:
				return 1221694281;
			case 560:
				return 1036815507;
			case 561:
				return 775893260;
			case 562:
				return -329355129;
			case 563:
				return 2117211184;
			case 564:
				return -1042390616;
			case 565:
				return -118700196;
			case 566:
				return 991016631;
			case 567:
				return 57105576;
			case 568:
				return 238757788;
			case 569:
				return 927020127;
			case 570:
				return 1388161943;
			case 571:
				return -7594117;
			case 572:
				return -1680050035;
			case 573:
				return 41398635;
			case 574:
				return 462263849;
			case 575:
				return 1422134667;
			case 576:
				return 1263244828;
			case 577:
				return -1813544782;
			case 578:
				return 1008375999;
			case 579:
				return 117485200;
			case 580:
				return -188216801;
			case 581:
				return -2047539266;
			case 582:
				return 1053919002;
			case 583:
				return -1754970007;
			case 584:
				return 1364276294;
			case 585:
				return -1194012756;
			case 586:
				return -1960338341;
			case 587:
				return 519905064;
			case 588:
				return 1986073536;
			case 589:
				return -835014781;
			case 590:
				return 2144414063;
			case 591:
				return 1108743226;
			case 592:
				return -2042475701;
			case 593:
				return -198101911;
			case 594:
				return 1358414393;
			case 595:
				return 672931117;
			case 596:
				return 1182205549;
			case 597:
				return 205214733;
			case 598:
				return -78801135;
			case 599:
				return -846371468;
			case 600:
				return joaat("q");
			case 601:
				return 1696372169;
			case 602:
				return 26544760;
			case 603:
				return 2100012223;
			case 604:
				return 1216075674;
			case 605:
				return 222513322;
			case 606:
				return 461989174;
			case 607:
				return -1316886711;
			case 608:
				return -37875204;
			case 609:
				return 258104717;
			case 610:
				return -76700394;
			case 611:
				return 1614255891;
			case 612:
				return 1492183352;
			case 613:
				return 1260721433;
			case 614:
				return 642301973;
			case 615:
				return -622475043;
			case 616:
				return 1138093977;
			case 617:
				return 339111695;
			case 618:
				return -518858513;
			case 619:
				return 1274804496;
			case 620:
				return -84516711;
			case 621:
				return 1597665303;
			case 622:
				return 918349577;
			case 623:
				return 116162819;
			case 624:
				return 1596089211;
			case 625:
				return -1112373128;
			case 626:
				return -657241692;
			case 627:
				return 1460466036;
			case 628:
				return -711890106;
			case 629:
				return -1031113966;
			case 630:
				return -2133417899;
			case 631:
				return -891994084;
			case 632:
				return 1733948592;
			case 633:
				return 634831342;
			case 634:
				return -528294019;
			case 635:
				return -943891161;
			case 636:
				return -914406102;
			case 637:
				return 1855900423;
			case 638:
				return 73781828;
			case 639:
				return -391567710;
			case 640:
				return -1809571159;
			case 641:
				return -1052023588;
			case 642:
				return 944314155;
			case 643:
				return 1531008020;
			case 644:
				return -745087561;
			case 645:
				return 1324480450;
			case 646:
				return 23211744;
			case 647:
				return 1672215059;
			case 648:
				return 604668055;
			case 649:
				return -1177027698;
			case 650:
				return 1708195603;
			case 651:
				return 2133280389;
			case 652:
				return -508205317;
			case 653:
				return -1773409329;
			case 654:
				return -205505701;
			case 655:
				return -51262018;
			case 656:
				return -432370325;
			case 657:
				return 1624069429;
			case 658:
				return 2075691867;
			case 659:
				return -2106432785;
			case 660:
				return 1903595390;
			case 661:
				return -24665995;
			case 662:
				return 1651555923;
			case 663:
				return -1132206051;
			case 664:
				return -1465375517;
			case 665:
				return -1233192626;
			case 666:
				return 453346329;
			case 667:
				return 1432023115;
			case 668:
				return 1817635528;
			case 669:
				return 1190000937;
			case 670:
				return 1274066881;
			case 671:
				return -2145807603;
			case 672:
				return -583431154;
			case 673:
				return 1096335200;
			case 674:
				return -270131786;
			case 675:
				return 1779169712;
			case 676:
				return 1083754485;
			case 677:
				return 815958096;
			case 678:
				return 1532789536;
			case 679:
				return -1364906332;
			case 680:
				return 1916363327;
			case 681:
				return -1279389329;
			case 682:
				return -1954638951;
			case 683:
				return 574916087;
			case 684:
				return 1793712122;
			case 685:
				return 1251554503;
			case 686:
				return -657334314;
			case 687:
				return -2004293616;
			case 688:
				return 1926231273;
			case 689:
				return -199228359;
			case 690:
				return -872975316;
			case 691:
				return 806606916;
			case 692:
				return 2137579614;
			case 693:
				return -724513114;
			case 694:
				return -476328287;
			case 695:
				return -936524034;
			case 696:
				return -2025289364;
			case 697:
				return 536560689;
			case 698:
				return -1834690693;
			case 699:
				return 1106131202;
			case 700:
				return 516107115;
			case 701:
				return -1428524966;
			case 702:
				return 722896594;
			case 703:
				return 1307857318;
			case 704:
				return 1951742298;
			case 705:
				return -313167137;
			case 706:
				return 848190976;
			case 707:
				return 1673463331;
			case 708:
				return 352739809;
			case 709:
				return 568859874;
			case 710:
				return 1199250380;
			case 711:
				return 1303859698;
			case 712:
				return 131702782;
			case 713:
				return -1358954864;
			case 714:
				return 1425800019;
			case 715:
				return 1216579993;
			case 716:
				return -1508001532;
			case 717:
				return -1389022397;
			case 718:
				return 1551178888;
			case 719:
				return -588218319;
			case 720:
				return 1857676106;
			case 721:
				return -387074757;
			case 722:
				return 2001473838;
			case 723:
				return 1283630779;
			case 724:
				return -752947810;
			case 725:
				return 1288855827;
			case 726:
				return -377841051;
			case 727:
				return -70959366;
			case 728:
				return 2087316443;
			case 729:
				return 905895682;
			case 730:
				return -1406112982;
			case 731:
				return 1920416437;
			case 732:
				return -186728578;
			case 733:
				return 1960643951;
			case 734:
				return 666617953;
			case 735:
				return 637874199;
			case 736:
				return 731209239;
			case 737:
				return 724436573;
			case 738:
				return -1475403379;
			case 739:
				return -518785376;
			case 740:
				return -1878882174;
			case 741:
				return 1202020135;
			case 742:
				return -1989899190;
			case 743:
				return 951314072;
			case 744:
				return -780819048;
			case 745:
				return -52140817;
			case 746:
				return 1186533019;
			case 747:
				return -713587740;
			case 748:
				return 999248445;
			case 749:
				return 2040843256;
			case 750:
				return -661560211;
			case 751:
				return -1933617196;
			case 752:
				return -1588793465;
			case 753:
				return 924412185;
			case 754:
				return -560409108;
			case 755:
				return 805009584;
			case 756:
				return 2470511;
			case 757:
				return -784156210;
			case 758:
				return -1905652203;
			case 759:
				return 1519091923;
			case 760:
				return -156313117;
			case 761:
				return -1579403437;
			case 762:
				return 774477221;
			case 763:
				return 1097534152;
			case 764:
				return -1217078386;
			case 765:
				return 135886022;
			case 766:
				return -1158072415;
			case 767:
				return 903666582;
			case 768:
				return 1081087978;
			case 769:
				return 696143352;
			case 770:
				return -981203673;
			case 771:
				return 1228600352;
			case 772:
				return -1301569116;
			case 773:
				return 282485265;
			case 774:
				return 56708243;
			case 775:
				return 199047531;
			case 776:
				return -776975047;
			case 777:
				return 2095116685;
			case 778:
				return -892659042;
			case 779:
				return 1136898294;
			case 780:
				return 897455211;
			case 781:
				return 1804593020;
			case 782:
				return -1049500949;
			case 783:
				return 1325716092;
			case 784:
				return -1781246069;
			case 785:
				return -1892595931;
			case 786:
				return -2009766528;
			case 787:
				return 406334892;
			case 788:
				return -554932707;
			case 789:
				return -1744253204;
			case 790:
				return 192173299;
			case 791:
				return 1385025009;
			case 792:
				return 1573766063;
			case 793:
				return -159723514;
			case 794:
				return -991619789;
			case 795:
				return -1000738568;
			case 796:
				return 1285430299;
			case 797:
				return 610256856;
			case 798:
				return 517553365;
			case 799:
				return -2083943324;
			case 800:
				return 30201771;
			case 801:
				return -1801047945;
			case 802:
				return -555917871;
			case 803:
				return 267578156;
			case 804:
				return -1871745961;
			case 805:
				return 2125514970;
			case 806:
				return 1777348822;
			case 807:
				return -1824080033;
			case 808:
				return 317070801;
			case 809:
				return -763477089;
			case 810:
				return -1617847332;
			case 811:
				return -2142987163;
			case 812:
				return 1027093524;
			case 813:
				return 1104143966;
			case 814:
				return 1879779330;
			case 815:
				return -799526632;
			case 816:
				return -791673850;
			case 817:
				return 1585258492;
			case 818:
				return 104102416;
			case 819:
				return -1265903940;
			case 820:
				return -474761969;
			case 821:
				return 782453481;
			case 822:
				return 203916786;
			case 823:
				return 1891601353;
			case 824:
				return 320262265;
			case 825:
				return -615794465;
			case 826:
				return -724540003;
			case 827:
				return -307327135;
			case 828:
				return 1492058366;
			case 829:
				return 920612809;
			case 830:
				return -437187151;
			case 831:
				return 820079465;
			case 832:
				return 1424964403;
			case 833:
				return 423891836;
			case 834:
				return -163787010;
			case 835:
				return 777001839;
			case 836:
				return -200959126;
			case 837:
				return -794503195;
			case 838:
				return 1364392658;
			case 839:
				return -882460089;
			case 840:
				return -1835067413;
			case 841:
				return -1392150519;
			case 842:
				return -389510791;
			case 843:
				return -910880980;
			case 844:
				return 382484708;
			case 845:
				return -411006854;
			case 846:
				return 1133453602;
			case 847:
				return -787042507;
			case 848:
				return 350637317;
			case 849:
				return 1968676233;
			case 850:
				return 2112594812;
			case 851:
				return 1750312025;
			case 852:
				return -1111286486;
			case 853:
				return -142900294;
			case 854:
				return -555736180;
			case 855:
				return 691955519;
			case 856:
				return -1022518533;
			case 857:
				return -196117122;
			case 858:
				return 499044444;
			case 859:
				return -805522215;
			case 860:
				return 2080640229;
			case 861:
				return -1386614896;
			case 862:
				return -693812694;
			case 863:
				return -1625703283;
			case 864:
				return 563581773;
			case 865:
				return 1628851253;
			case 866:
				return 746475990;
			case 867:
				return -753844687;
			case 868:
				return -1045062790;
			case 869:
				return -1272426249;
			case 870:
				return 334535013;
			case 871:
				return 582879672;
			case 872:
				return 1713454259;
			case 873:
				return -1417469821;
			case 874:
				return 1798244378;
			case 875:
				return -1665620584;
			case 876:
				return -537740003;
			case 877:
				return -1584316325;
			case 878:
				return -1085363933;
			case 879:
				return 1517736440;
			case 880:
				return -1509154451;
			case 881:
				return -693132475;
			case 882:
				return -1984145124;
			case 883:
				return -1315256079;
			case 884:
				return -1653831205;
			case 885:
				return -1307469679;
			case 886:
				return -2092712551;
			case 887:
				return -1595003151;
			case 888:
				return -1528647119;
			case 889:
				return -1207658444;
			case 890:
				return -1758697759;
			case 891:
				return 591001924;
			case 892:
				return -890900091;
			case 893:
				return -1055775145;
			case 894:
				return -276247702;
			case 895:
				return 585407854;
			case 896:
				return 1381573999;
			case 897:
				return 2116125345;
			case 898:
				return -1369880946;
			case 899:
				return 292369320;
			case 900:
				return 539566709;
			case 901:
				return 883579956;
			case 902:
				return -574996782;
			case 903:
				return 1169511062;
			case 904:
				return -2111718052;
			case 905:
				return -1266106154;
			case 906:
				return 242017654;
			case 907:
				return 120283199;
			case 908:
				return 2127497940;
			case 909:
				return -1643311717;
			case 910:
				return 1292550073;
			case 911:
				return -233702408;
			case 912:
				return -284530484;
			case 913:
				return 1510796294;
			case 914:
				return 42616763;
			case 915:
				return -948864541;
			case 916:
				return 879263546;
			case 917:
				return -751879320;
			case 918:
				return -864071044;
			case 919:
				return -1244697162;
			case 920:
				return 834697453;
			case 921:
				return 1419259602;
			case 922:
				return -378666035;
			case 923:
				return -1802111373;
			case 924:
				return 133584803;
			case 925:
				return 1297834604;
			case 926:
				return -476999974;
			case 927:
				return 719166833;
			case 928:
				return 1019232566;
			case 929:
				return -1311188166;
			case 930:
				return 1192526031;
			case 931:
				return 1091543855;
			case 932:
				return -952533419;
			case 933:
				return 1584946069;
			case 934:
				return 2123010634;
			case 935:
				return -1081335485;
			case 936:
				return -1176501741;
			case 937:
				return -2035177903;
			case 938:
				return -1147247388;
			case 939:
				return -1436313374;
			case 940:
				return 1149195254;
			case 941:
				return -1643869063;
			case 942:
				return -5339556;
			case 943:
				return -445068262;
			case 944:
				return 334010167;
			case 945:
				return -676881895;
			case 946:
				return 1331438832;
			case 947:
				return 376665102;
			case 948:
				return -928815382;
			case 949:
				return -645247737;
			case 950:
				return -299265919;
			case 951:
				return 883152450;
			case 952:
				return 1736837788;
			case 953:
				return 1814624585;
			case 954:
				return 1353861354;
			case 955:
				return 611701601;
			case 956:
				return 901412334;
			case 957:
				return 703356498;
			case 958:
				return -650822431;
			case 959:
				return -956131204;
			case 960:
				return 2006257967;
			case 961:
				return -2008632686;
			case 962:
				return -1615103170;
			case 963:
				return 578474998;
			case 964:
				return -1860722801;
			case 965:
				return -692583342;
			case 966:
				return -669282002;
			case 967:
				return -1355464862;
			case 968:
				return -1141450523;
			case 969:
				return -252820785;
			case 970:
				return 258899919;
			case 971:
				return -767883927;
			case 972:
				return -535715562;
			case 973:
				return 931647489;
			case 974:
				return 1467774743;
			case 975:
				return 2030594491;
			case 976:
				return -790660125;
			case 977:
				return 33260939;
			case 978:
				return 780653384;
			case 979:
				return 180676027;
			case 980:
				return -270212770;
			case 981:
				return -211623797;
			case 982:
				return 862349416;
			case 983:
				return 699225334;
			case 984:
				return 411742897;
			case 985:
				return 349494711;
			case 986:
				return -706105482;
			case 987:
				return 176369335;
			case 988:
				return 2087181890;
			case 989:
				return 637627640;
			case 990:
				return 44077654;
			case 991:
				return 839872819;
			case 992:
				return -1656895602;
			case 993:
				return -583969090;
			case 994:
				return -364121869;
			case 995:
				return -1073832871;
			case 996:
				return -1786558629;
			case 997:
				return -1548753996;
			case 998:
				return -1784133719;
			case 999:
				return -1667461262;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam0 <= 1999)
	{
		switch (iParam0)
		{
			case 1000:
				return 1236917971;
			case 1001:
				return 1757739778;
			case 1002:
				return -2029237844;
			case 1003:
				return -2000794023;
			case 1004:
				return -531137142;
			case 1005:
				return 5422464;
			case 1006:
				return 203845253;
			case 1007:
				return -1658679165;
			case 1008:
				return 258733332;
			case 1009:
				return 79028136;
			case 1010:
				return -218940381;
			case 1011:
				return 634752926;
			case 1012:
				return 984271748;
			case 1013:
				return 43335376;
			case 1014:
				return 1444950942;
			case 1015:
				return 910783469;
			case 1016:
				return 727408145;
			case 1017:
				return 429636242;
			case 1018:
				return -19364596;
			case 1019:
				return 2131035495;
			case 1020:
				return -316448350;
			case 1021:
				return -496874464;
			case 1022:
				return -794515291;
			case 1023:
				return 275588949;
			case 1024:
				return -52330434;
			case 1025:
				return -2131457946;
			case 1026:
				return 1819926822;
			case 1027:
				return 1529593482;
			case 1028:
				return -668911501;
			case 1029:
				return 480644817;
			case 1030:
				return 1681117196;
			case 1031:
				return -1012618146;
			case 1032:
				return 2111816145;
			case 1033:
				return -722030448;
			case 1034:
				return -974480336;
			case 1035:
				return 197447134;
			case 1036:
				return -918785150;
			case 1037:
				return 1256771838;
			case 1038:
				return -584332967;
			case 1039:
				return 449426161;
			case 1040:
				return -999913940;
			case 1041:
				return -30541382;
			case 1042:
				return -960328988;
			case 1043:
				return -392430949;
			case 1044:
				return -904669171;
			case 1045:
				return 1205945639;
			case 1046:
				return 1532774697;
			case 1047:
				return -803019223;
			case 1048:
				return -2093605706;
			case 1049:
				return -114633341;
			case 1050:
				return -90646166;
			case 1051:
				return 531960211;
			case 1052:
				return 537424819;
			case 1053:
				return -1613262779;
			case 1054:
				return -1306905398;
			case 1055:
				return 339409162;
			case 1056:
				return 647011769;
			case 1057:
				return -273633290;
			case 1058:
				return -118635920;
			case 1059:
				return 2038589758;
			case 1060:
				return 751578549;
			case 1061:
				return 446073162;
			case 1062:
				return -588668690;
			case 1063:
				return -242247633;
			case 1064:
				return -1439987356;
			case 1065:
				return -1126224181;
			case 1066:
				return -1956194332;
			case 1067:
				return 945532872;
			case 1068:
				return -1696865897;
			case 1069:
				return -890895654;
			case 1070:
				return 1953646620;
			case 1071:
				return 1299817544;
			case 1072:
				return 1204787444;
			case 1073:
				return 66523468;
			case 1074:
				return 131323483;
			case 1075:
				return -134556459;
			case 1076:
				return 2040259178;
			case 1077:
				return 1190076410;
			case 1078:
				return 1598834669;
			case 1079:
				return -1106517275;
			case 1080:
				return -1986209836;
			case 1081:
				return 1525054056;
			case 1082:
				return 749968899;
			case 1083:
				return -186143124;
			case 1084:
				return -2043326480;
			case 1085:
				return 270920361;
			case 1086:
				return 1924458218;
			case 1087:
				return 1892122519;
			case 1088:
				return -130638369;
			case 1089:
				return 966418260;
			case 1090:
				return -432154242;
			case 1091:
				return 2137790641;
			case 1092:
				return 1291083725;
			case 1093:
				return 500829173;
			case 1094:
				return 993595204;
			case 1095:
				return 1934919499;
			case 1096:
				return -515396642;
			case 1097:
				return -1387511711;
			case 1098:
				return 1901132483;
			case 1099:
				return -2082345587;
			case 1100:
				return -715865581;
			case 1101:
				return 77337110;
			case 1102:
				return 2029194243;
			case 1103:
				return -1125782227;
			case 1104:
				return -372970556;
			case 1105:
				return 1749008611;
			case 1106:
				return 2111695903;
			case 1107:
				return -1947695052;
			case 1108:
				return -1559513478;
			case 1109:
				return -1321905459;
			case 1110:
				return -1560816708;
			case 1111:
				return 823583740;
			case 1112:
				return -826466486;
			case 1113:
				return -593183975;
			case 1114:
				return -362883443;
			case 1115:
				return -630275010;
			case 1116:
				return -164693058;
			case 1117:
				return 118201723;
			case 1118:
				return 458453080;
			case 1119:
				return -1385360243;
			case 1120:
				return -1288790000;
			case 1121:
				return 758066107;
			case 1122:
				return -1995054197;
			case 1123:
				return -1623126047;
			case 1124:
				return 1943484686;
			case 1125:
				return 2056603274;
			case 1126:
				return 898257133;
			case 1127:
				return -380287375;
			case 1128:
				return 281153830;
			case 1129:
				return 1739101350;
			case 1130:
				return -634291786;
			case 1131:
				return -1047158045;
			case 1132:
				return 42081460;
			case 1133:
				return 870580095;
			case 1134:
				return 504746979;
			case 1135:
				return 138913863;
			case 1136:
				return -90108678;
			case 1137:
				return 1258244391;
			case 1138:
				return -501793326;
			case 1139:
				return 1490756544;
			case 1140:
				return -753454183;
			case 1141:
				return -1854368742;
			case 1142:
				return 466168676;
			case 1143:
				return 1343343014;
			case 1144:
				return 1173561253;
			case 1145:
				return -1123141803;
			case 1146:
				return 739412171;
			case 1147:
				return 1858796535;
			case 1148:
				return 411846009;
			case 1149:
				return -393583941;
			case 1150:
				return -2122914678;
			case 1151:
				return -518004776;
			case 1152:
				return 917434281;
			case 1153:
				return -1593160175;
			case 1154:
				return 1840600379;
			case 1155:
				return -1859373348;
			case 1156:
				return -442857872;
			case 1157:
				return 1251358153;
			case 1158:
				return 427220750;
			case 1159:
				return 872406077;
			case 1160:
				return -2040493861;
			case 1161:
				return 1471226731;
			case 1162:
				return -1382265257;
			case 1163:
				return -1471527776;
			case 1164:
				return 1867048850;
			case 1165:
				return -1149736196;
			case 1166:
				return -1490939730;
			case 1167:
				return -1926787493;
			case 1168:
				return 1552753100;
			case 1169:
				return 2136811572;
			case 1170:
				return -590227673;
			case 1171:
				return -232598845;
			case 1172:
				return 765141292;
			case 1173:
				return 1305415261;
			case 1174:
				return 1987335384;
			case 1175:
				return 271879652;
			case 1176:
				return -2045964586;
			case 1177:
				return -1926989471;
			case 1178:
				return -948615309;
			case 1179:
				return 66382979;
			case 1180:
				return 2077623691;
			case 1181:
				return -1393565861;
			case 1182:
				return -586415580;
			case 1183:
				return 2096286828;
			case 1184:
				return -1960936248;
			case 1185:
				return 1251859782;
			case 1186:
				return 1520095560;
			case 1187:
				return 994786977;
			case 1188:
				return 409171062;
			case 1189:
				return 998966461;
			case 1190:
				return -1381094502;
			case 1191:
				return -665831452;
			case 1192:
				return 1454866069;
			case 1193:
				return -1877706739;
			case 1194:
				return 437660121;
			case 1195:
				return -1325803862;
			case 1196:
				return 980904027;
			case 1197:
				return 1210622903;
			case 1198:
				return 905216692;
			case 1199:
				return -1299414622;
			case 1200:
				return -1035166057;
			case 1201:
				return -821741560;
			case 1202:
				return -574138996;
			case 1203:
				return -754870430;
			case 1204:
				return 1361745480;
			case 1205:
				return -84124751;
			case 1206:
				return 135073157;
			case 1207:
				return -1588838395;
			case 1208:
				return -601173298;
			case 1209:
				return -1852293718;
			case 1210:
				return 1202333215;
			case 1211:
				return -817579246;
			case 1212:
				return 1811369374;
			case 1213:
				return -1959752936;
			case 1214:
				return 1620292759;
			case 1215:
				return -971625396;
			case 1216:
				return -1260156441;
			case 1217:
				return 1705957630;
			case 1218:
				return 2002353235;
			case 1219:
				return 1111495201;
			case 1220:
				return -354071784;
			case 1221:
				return 558651865;
			case 1222:
				return 857341300;
			case 1223:
				return -1075177706;
			case 1224:
				return -826493765;
			case 1225:
				return -927211837;
			case 1226:
				return -710911638;
			case 1227:
				return -942555699;
			case 1228:
				return -760097927;
			case 1229:
				return 607574432;
			case 1230:
				return -1563072795;
			case 1231:
				return 825179479;
			case 1232:
				return -293283707;
			case 1233:
				return -539928451;
			case 1234:
				return 1526869387;
			case 1235:
				return 213881095;
			case 1236:
				return 2122708114;
			case 1237:
				return -1031045988;
			case 1238:
				return 1108342912;
			case 1239:
				return 976283842;
			case 1240:
				return 736578607;
			case 1241:
				return 1707393029;
			case 1242:
				return 478657470;
			case 1243:
				return -355608501;
			case 1244:
				return 957052101;
			case 1245:
				return 123244896;
			case 1246:
				return 607173790;
			case 1247:
				return -520400509;
			case 1248:
				return -1920340119;
			case 1249:
				return -1576393943;
			case 1250:
				return -413795019;
			case 1251:
				return 288413571;
			case 1252:
				return 1103365569;
			case 1253:
				return -2037661155;
			case 1254:
				return -1150137955;
			case 1255:
				return -1559012672;
			case 1256:
				return -1954657946;
			case 1257:
				return 207396248;
			case 1258:
				return -110381721;
			case 1259:
				return 1366418802;
			case 1260:
				return -2125611324;
			case 1261:
				return 1453569688;
			case 1262:
				return -80564929;
			case 1263:
				return 1157066259;
			case 1264:
				return 1720188956;
			case 1265:
				return 1475953931;
			case 1266:
				return -1166561064;
			case 1267:
				return -1365193577;
			case 1268:
				return 300868838;
			case 1269:
				return -316909020;
			case 1270:
				return 172011504;
			case 1271:
				return -1788578071;
			case 1272:
				return -1962893335;
			case 1273:
				return 1351589798;
			case 1274:
				return 1457661960;
			case 1275:
				return 163126540;
			case 1276:
				return -1620486708;
			case 1277:
				return -223906810;
			case 1278:
				return 2015311123;
			case 1279:
				return 1808508475;
			case 1280:
				return -379409079;
			case 1281:
				return -102951407;
			case 1282:
				return 1998041523;
			case 1283:
				return -1114426126;
			case 1284:
				return -1971474291;
			case 1285:
				return -1687561002;
			case 1286:
				return -1425946870;
			case 1287:
				return 1957225320;
			case 1288:
				return -860696938;
			case 1289:
				return -1893724593;
			case 1290:
				return 394987827;
			case 1291:
				return -937893311;
			case 1292:
				return 321670654;
			case 1293:
				return -1916602073;
			case 1294:
				return -1611076340;
			case 1295:
				return 1079303588;
			case 1296:
				return 970924250;
			case 1297:
				return -441619793;
			case 1298:
				return 1381006186;
			case 1299:
				return 140744122;
			case 1300:
				return -1177590512;
			case 1301:
				return 1267297807;
			case 1302:
				return -182995231;
			case 1303:
				return -1426249148;
			case 1304:
				return -1445186253;
			case 1305:
				return 2047954825;
			case 1306:
				return -2085723453;
			case 1307:
				return 1434945142;
			case 1308:
				return 658099812;
			case 1309:
				return 360721137;
			case 1310:
				return 1268291329;
			case 1311:
				return 943845492;
			case 1312:
				return -2037324418;
			case 1313:
				return 937052178;
			case 1314:
				return 698067861;
			case 1315:
				return -741769242;
			case 1316:
				return 2019747962;
			case 1317:
				return 1785810071;
			case 1318:
				return 1423450469;
			case 1319:
				return 1189709192;
			case 1320:
				return 512556003;
			case 1321:
				return 1770786479;
			case 1322:
				return 2022451711;
			case 1323:
				return -1933895237;
			case 1324:
				return -1987982797;
			case 1325:
				return -104137172;
			case 1326:
				return 1924209179;
			case 1327:
				return -2084193212;
			case 1328:
				return -838184752;
			case 1329:
				return -1433138716;
			case 1330:
				return -1103841944;
			case 1331:
				return -621941030;
			case 1332:
				return 1782877577;
			case 1333:
				return -584027313;
			case 1334:
				return 1219098211;
			case 1335:
				return 2097700639;
			case 1336:
				return 728120284;
			case 1337:
				return 1370097763;
			case 1338:
				return 1948051928;
			case 1339:
				return 1548546221;
			case 1340:
				return 106249677;
			case 1341:
				return 1546110128;
			case 1342:
				return -855912354;
			case 1343:
				return 324486076;
			case 1344:
				return -2052582076;
			case 1345:
				return -402976431;
			case 1346:
				return 1560807181;
			case 1347:
				return -723982773;
			case 1348:
				return -268335331;
			case 1349:
				return -302735166;
			case 1350:
				return -2104773585;
			case 1351:
				return 2101101756;
			case 1352:
				return -1472352094;
			case 1353:
				return -2077690059;
			case 1354:
				return 1029525997;
			case 1355:
				return -15722296;
			case 1356:
				return 327932996;
			case 1357:
				return -745860880;
			case 1358:
				return 1219276914;
			case 1359:
				return 711016796;
			case 1360:
				return 690962168;
			case 1361:
				return 384146021;
			case 1362:
				return 2082890965;
			case 1363:
				return -1192199739;
			case 1364:
				return -65072454;
			case 1365:
				return -770240157;
			case 1366:
				return 71064384;
			case 1367:
				return -1380983970;
			case 1368:
				return 135028740;
			case 1369:
				return -515910704;
			case 1370:
				return 398639187;
			case 1371:
				return 532770666;
			case 1372:
				return 948877318;
			case 1373:
				return -365969388;
			case 1374:
				return 780406120;
			case 1375:
				return 1372565859;
			case 1376:
				return 1111220101;
			case 1377:
				return -688011628;
			case 1378:
				return 114673428;
			case 1379:
				return 1822607116;
			case 1380:
				return 216214729;
			case 1381:
				return -87826930;
			case 1382:
				return 286801141;
			case 1383:
				return 622597018;
			case 1384:
				return 2016081133;
			case 1385:
				return -880373663;
			case 1386:
				return 58066174;
			case 1387:
				return 1944013855;
			case 1388:
				return -2137633069;
			case 1389:
				return -21876618;
			case 1390:
				return 1048790253;
			case 1391:
				return 363257921;
			case 1392:
				return 1649275138;
			case 1393:
				return -1872939092;
			case 1394:
				return -1484530238;
			case 1395:
				return -964156415;
			case 1396:
				return 188985281;
			case 1397:
				return -70021332;
			case 1398:
				return -437251660;
			case 1399:
				return 1601599776;
			case 1400:
				return 419559004;
			case 1401:
				return -677977650;
			case 1402:
				return 702350293;
			case 1403:
				return 1426715569;
			case 1404:
				return 2097480406;
			case 1405:
				return -1390612743;
			case 1406:
				return 1013712166;
			case 1407:
				return 107317036;
			case 1408:
				return -1656481590;
			case 1409:
				return -554880142;
			case 1410:
				return 810684093;
			case 1411:
				return 321594819;
			case 1412:
				return -385999832;
			case 1413:
				return -1284301817;
			case 1414:
				return -989202374;
			case 1415:
				return -1774140220;
			case 1416:
				return -262271608;
			case 1417:
				return 1601820048;
			case 1418:
				return 2025485344;
			case 1419:
				return 901520480;
			case 1420:
				return 157361403;
			case 1421:
				return 530288130;
			case 1422:
				return 1538837441;
			case 1423:
				return -1999825729;
			case 1424:
				return -2001921071;
			case 1425:
				return -1045282549;
			case 1426:
				return 853723410;
			case 1427:
				return -492479795;
			case 1428:
				return -1999465365;
			case 1429:
				return -347518940;
			case 1430:
				return -1887167048;
			case 1431:
				return -792944828;
			case 1432:
				return 1169958167;
			case 1433:
				return -112364237;
			case 1434:
				return -948006506;
			case 1435:
				return 1700045179;
			case 1436:
				return 1997423854;
			case 1437:
				return -814821283;
			case 1438:
				return -1045678888;
			case 1439:
				return -1663177928;
			case 1440:
				return -809371454;
			case 1441:
				return 1609975546;
			case 1442:
				return -1292493167;
			case 1443:
				return 1403324282;
			case 1444:
				return 1096093290;
			case 1445:
				return 626928579;
			case 1446:
				return 313722477;
			case 1447:
				return 976082270;
			case 1448:
				return 153759048;
			case 1449:
				return 202127432;
			case 1450:
				return -2016771661;
			case 1451:
				return 2072112547;
			case 1452:
				return -1739164071;
			case 1453:
				return -1331617405;
			case 1454:
				return -1676997321;
			case 1455:
				return 1952267752;
			case 1456:
				return 1620317782;
			case 1457:
				return -959814975;
			case 1458:
				return 721720861;
			case 1459:
				return 1027586707;
			case 1460:
				return 1351016737;
			case 1461:
				return 648514907;
			case 1462:
				return -1570232590;
			case 1463:
				return -205043526;
			case 1464:
				return 93121605;
			case 1465:
				return -1728638189;
			case 1466:
				return -1434077648;
			case 1467:
				return 102652153;
			case 1468:
				return 1210820782;
			case 1469:
				return -320577790;
			case 1470:
				return 1128417383;
			case 1471:
				return -1451784475;
			case 1472:
				return 1028224932;
			case 1473:
				return -1841279810;
			case 1474:
				return -619637948;
			case 1475:
				return 2119205605;
			case 1476:
				return -2000080725;
			case 1477:
				return 2123887232;
			case 1478:
				return 292845400;
			case 1479:
				return 719147410;
			case 1480:
				return 1070723367;
			case 1481:
				return -692521236;
			case 1482:
				return 1261237250;
			case 1483:
				return 1049842342;
			case 1484:
				return -160392273;
			case 1485:
				return 40009123;
			case 1486:
				return -146943962;
			case 1487:
				return 1034009086;
			case 1488:
				return -71508135;
			case 1489:
				return 180356041;
			case 1490:
				return -109425099;
			case 1491:
				return 539843907;
			case 1492:
				return -436009554;
			case 1493:
				return 2728487;
			case 1494:
				return 1674800958;
			case 1495:
				return -782359587;
			case 1496:
				return 1084869405;
			case 1497:
				return 1636281938;
			case 1498:
				return -1642249622;
			case 1499:
				return 1692451176;
			case 1500:
				return 220566669;
			case 1501:
				return 1700661865;
			case 1502:
				return -644575724;
			case 1503:
				return 1209017192;
			case 1504:
				return 291770965;
			case 1505:
				return -2143243848;
			case 1506:
				return 510052409;
			case 1507:
				return 1676971154;
			case 1508:
				return -1010466481;
			case 1509:
				return -1247551347;
			case 1510:
				return 1717489303;
			case 1511:
				return 1290371072;
			case 1512:
				return -1880340209;
			case 1513:
				return 2108368013;
			case 1514:
				return -1147256587;
			case 1515:
				return 1802272784;
			case 1516:
				return 1309652195;
			case 1517:
				return -1639921686;
			case 1518:
				return 1691578074;
			case 1519:
				return -387018143;
			case 1520:
				return -1458944281;
			case 1521:
				return -751959361;
			case 1522:
				return 110400393;
			case 1523:
				return 652735549;
			case 1524:
				return 1742990618;
			case 1525:
				return -916538063;
			case 1526:
				return 1729014506;
			case 1527:
				return -1279618207;
			case 1528:
				return 764763647;
			case 1529:
				return -1291679096;
			case 1530:
				return 5585502;
			case 1531:
				return 1074130180;
			case 1532:
				return -1370620659;
			case 1533:
				return -1362716862;
			case 1534:
				return 977061573;
			case 1535:
				return -624219879;
			case 1536:
				return 482931525;
			case 1537:
				return 349896400;
			case 1538:
				return 715730031;
			case 1539:
				return 126970802;
			case 1540:
				return -2066612507;
			case 1541:
				return 1662136507;
			case 1542:
				return 1386355334;
			case 1543:
				return -1397680620;
			case 1544:
				return 1467687992;
			case 1545:
				return 2017271733;
			case 1546:
				return -1507376753;
			case 1547:
				return 1125807846;
			case 1548:
				return -2111123884;
			case 1549:
				return 2047806036;
			case 1550:
				return -1894946791;
			case 1551:
				return 1886481528;
			case 1552:
				return 499090815;
			case 1553:
				return 1246210400;
			case 1554:
				return 1251925821;
			case 1555:
				return -1821269135;
			case 1556:
				return 1769061820;
			case 1557:
				return -1466334531;
			case 1558:
				return 1461000451;
			case 1559:
				return -780636043;
			case 1560:
				return -685270742;
			case 1561:
				return -1341918262;
			case 1562:
				return 82769080;
			case 1563:
				return -1983416665;
			case 1564:
				return -850189983;
			case 1565:
				return -172246728;
			case 1566:
				return -1836870707;
			case 1567:
				return 1706275010;
			case 1568:
				return -159557995;
			case 1569:
				return 438624963;
			case 1570:
				return 1402472902;
			case 1571:
				return 1679038623;
			case 1572:
				return -546137515;
			case 1573:
				return -1123811713;
			case 1574:
				return -462274808;
			case 1575:
				return -1906732332;
			case 1576:
				return -526829;
			case 1577:
				return -1754422016;
			case 1578:
				return 688413808;
			case 1579:
				return 794749213;
			case 1580:
				return 17042536;
			case 1581:
				return 298954243;
			case 1582:
				return 1003223945;
			case 1583:
				return 220012076;
			case 1584:
				return 1465430690;
			case 1585:
				return 716331350;
			case 1586:
				return 1734859244;
			case 1587:
				return -750963311;
			case 1588:
				return -886310806;
			case 1589:
				return 1926336063;
			case 1590:
				return -800534102;
			case 1591:
				return 1648013752;
			case 1592:
				return -753535900;
			case 1593:
				return -693870347;
			case 1594:
				return -877653131;
			case 1595:
				return 1335714585;
			case 1596:
				return -1382351182;
			case 1597:
				return -688890765;
			case 1598:
				return -313992757;
			case 1599:
				return 643415268;
			case 1600:
				return -383442850;
			case 1601:
				return -963708270;
			case 1602:
				return 1789847914;
			case 1603:
				return 1724935027;
			case 1604:
				return 170282000;
			case 1605:
				return -1323936218;
			case 1606:
				return -1378006849;
			case 1607:
				return 1527202601;
			case 1608:
				return 562620119;
			case 1609:
				return -1622723192;
			case 1610:
				return -872587325;
			case 1611:
				return 2076873943;
			case 1612:
				return -1176057358;
			case 1613:
				return 1253360932;
			case 1614:
				return -1656346086;
			case 1615:
				return -597695075;
			case 1616:
				return -1159690567;
			case 1617:
				return 719400048;
			case 1618:
				return 1737389826;
			case 1619:
				return -1033632314;
			case 1620:
				return 59954835;
			case 1621:
				return -98843293;
			case 1622:
				return 1928252407;
			case 1623:
				return -1562347907;
			case 1624:
				return 1529136698;
			case 1625:
				return -1842411116;
			case 1626:
				return 906570755;
			case 1627:
				return 1718863943;
			case 1628:
				return -605128543;
			case 1629:
				return -1395712024;
			case 1630:
				return -1232260252;
			case 1631:
				return -337712376;
			case 1632:
				return 2084338579;
			case 1633:
				return 1404611977;
			case 1634:
				return 1401474740;
			case 1635:
				return 516817794;
			case 1636:
				return -1466175146;
			case 1637:
				return -2093572127;
			case 1638:
				return -498256840;
			case 1639:
				return -1190435787;
			case 1640:
				return 291880860;
			case 1641:
				return 1996801454;
			case 1642:
				return -1023331176;
			case 1643:
				return -276524767;
			case 1644:
				return 1578454569;
			case 1645:
				return 2101399188;
			case 1646:
				return -1218507547;
			case 1647:
				return 483731764;
			case 1648:
				return 289521398;
			case 1649:
				return 1883534212;
			case 1650:
				return 209919309;
			case 1651:
				return -166639526;
			case 1652:
				return 1915768280;
			case 1653:
				return -105525329;
			case 1654:
				return 612040624;
			case 1655:
				return -1176903838;
			case 1656:
				return -1389718656;
			case 1657:
				return -958046355;
			case 1658:
				return 2107657444;
			case 1659:
				return -2023595928;
			case 1660:
				return -759698431;
			case 1661:
				return -406964748;
			case 1662:
				return 481636996;
			case 1663:
				return -1671953459;
			case 1664:
				return 910941329;
			case 1665:
				return 518127510;
			case 1666:
				return 758684739;
			case 1667:
				return -661825463;
			case 1668:
				return 1343484786;
			case 1669:
				return 1033721560;
			case 1670:
				return 1989074279;
			case 1671:
				return 349486662;
			case 1672:
				return 1603294144;
			case 1673:
				return -1754425204;
			case 1674:
				return -1036501021;
			case 1675:
				return 1871051363;
			case 1676:
				return -158824350;
			case 1677:
				return 945502524;
			case 1678:
				return -1436188587;
			case 1679:
				return -468702164;
			case 1680:
				return -687151759;
			case 1681:
				return 1882605165;
			case 1682:
				return 869642051;
			case 1683:
				return -184821200;
			case 1684:
				return -490818122;
			case 1685:
				return 1907352897;
			case 1686:
				return 1700234797;
			case 1687:
				return -708550718;
			case 1688:
				return -1377139506;
			case 1689:
				return 767293177;
			case 1690:
				return -1739900853;
			case 1691:
				return -646014955;
			case 1692:
				return 159921796;
			case 1693:
				return -2014929982;
			case 1694:
				return -1070054959;
			case 1695:
				return -558920293;
			case 1696:
				return -872749010;
			case 1697:
				return -1924933663;
			case 1698:
				return -54044677;
			case 1699:
				return 2116967107;
			case 1700:
				return 1721842998;
			case 1701:
				return 92080743;
			case 1702:
				return -1619008260;
			case 1703:
				return 964593693;
			case 1704:
				return -882188392;
			case 1705:
				return 773757120;
			case 1706:
				return -1618574684;
			case 1707:
				return 827269092;
			case 1708:
				return 1706509616;
			case 1709:
				return -90228526;
			case 1710:
				return -520163372;
			case 1711:
				return 1265596420;
			case 1712:
				return -1388202749;
			case 1713:
				return 54661488;
			case 1714:
				return 1079213989;
			case 1715:
				return -621187540;
			case 1716:
				return -638481378;
			case 1717:
				return 1833824812;
			case 1718:
				return 1865439665;
			case 1719:
				return 2036492390;
			case 1720:
				return -1062918766;
			case 1721:
				return -555683060;
			case 1722:
				return -415514741;
			case 1723:
				return 809554858;
			case 1724:
				return 1810083187;
			case 1725:
				return -412827149;
			case 1726:
				return 414622870;
			case 1727:
				return 923572416;
			case 1728:
				return 67198036;
			case 1729:
				return -1130111983;
			case 1730:
				return 557551306;
			case 1731:
				return 1674493966;
			case 1732:
				return -1115840558;
			case 1733:
				return -1910456812;
			case 1734:
				return -960337247;
			case 1735:
				return 1155877447;
			case 1736:
				return 928165666;
			case 1737:
				return 2048341166;
			case 1738:
				return -1015572514;
			case 1739:
				return -785304751;
			case 1740:
				return 1448230281;
			case 1741:
				return 1687083522;
			case 1742:
				return -2053999329;
			case 1743:
				return 2017155697;
			case 1744:
				return 1802911979;
			case 1745:
				return 1567139024;
			case 1746:
				return -1037436240;
			case 1747:
				return -1747868160;
			case 1748:
				return 1588507579;
			case 1749:
				return 1396808929;
			case 1750:
				return -1392451243;
			case 1751:
				return 2061467757;
			case 1752:
				return -1828030290;
			case 1753:
				return -2147051362;
			case 1754:
				return -997495998;
			case 1755:
				return 266022415;
			case 1756:
				return -414377604;
			case 1757:
				return -109593135;
			case 1758:
				return 990134505;
			case 1759:
				return 1279910772;
			case 1760:
				return 1677041346;
			case 1761:
				return 1936473519;
			case 1762:
				return 1956790299;
			case 1763:
				return -2029001482;
			case 1764:
				return -538645000;
			case 1765:
				return -789852154;
			case 1766:
				return -1003800955;
			case 1767:
				return -1250617063;
			case 1768:
				return 495480888;
			case 1769:
				return 884576413;
			case 1770:
				return 778703691;
			case 1771:
				return 514406510;
			case 1772:
				return -421730990;
			case 1773:
				return -134624703;
			case 1774:
				return 2004706822;
			case 1775:
				return -910918420;
			case 1776:
				return -327708229;
			case 1777:
				return 1048845581;
			case 1778:
				return -1535722316;
			case 1779:
				return 1547994518;
			case 1780:
				return -1276109918;
			case 1781:
				return -1386423483;
			case 1782:
				return -1331593143;
			case 1783:
				return -1405375965;
			case 1784:
				return 1881774051;
			case 1785:
				return 912202325;
			case 1786:
				return -536919806;
			case 1787:
				return 295117400;
			case 1788:
				return -1774606389;
			case 1789:
				return 1211453192;
			case 1790:
				return 999671710;
			case 1791:
				return -1051551519;
			case 1792:
				return -781631997;
			case 1793:
				return -1765524972;
			case 1794:
				return -274311999;
			case 1795:
				return 1364667248;
			case 1796:
				return -680105331;
			case 1797:
				return -507080758;
			case 1798:
				return -252982535;
			case 1799:
				return 908136834;
			case 1800:
				return 1657354548;
			case 1801:
				return -2001856298;
			case 1802:
				return 1108419054;
			case 1803:
				return 1665904081;
			case 1804:
				return 1508981319;
			case 1805:
				return -1279448947;
			case 1806:
				return -2143372379;
			case 1807:
				return -847027479;
			case 1808:
				return -946682429;
			case 1809:
				return -333204108;
			case 1810:
				return 67603480;
			case 1811:
				return 1424952082;
			case 1812:
				return 1991561012;
			case 1813:
				return -1353663029;
			case 1814:
				return 11141848;
			case 1815:
				return 1153240916;
			case 1816:
				return 405359977;
			case 1817:
				return -1754697240;
			case 1818:
				return 743168245;
			case 1819:
				return 1098358070;
			case 1820:
				return -1871896679;
			case 1821:
				return -590242693;
			case 1822:
				return 953570968;
			case 1823:
				return 353008762;
			case 1824:
				return -973153750;
			case 1825:
				return -394475958;
			case 1826:
				return 1277031798;
			case 1827:
				return -736226816;
			case 1828:
				return 1497923922;
			case 1829:
				return 87946549;
			case 1830:
				return 104172940;
			case 1831:
				return -2054468361;
			case 1832:
				return 616635225;
			case 1833:
				return 503099916;
			case 1834:
				return -25254585;
			case 1835:
				return -1058872649;
			case 1836:
				return -1916642580;
			case 1837:
				return -1818498296;
			case 1838:
				return -983957271;
			case 1839:
				return -697261290;
			case 1840:
				return 272864959;
			case 1841:
				return -1399009137;
			case 1842:
				return -901084182;
			case 1843:
				return -655349451;
			case 1844:
				return 1175400068;
			case 1845:
				return 854689865;
			case 1846:
				return 1772877245;
			case 1847:
				return -891504611;
			case 1848:
				return -810270260;
			case 1849:
				return 83602522;
			case 1850:
				return -2054476413;
			case 1851:
				return 1988923494;
			case 1852:
				return -1676256391;
			case 1853:
				return 901975752;
			case 1854:
				return 2119466214;
			case 1855:
				return 1812453453;
			case 1856:
				return 1393010249;
			case 1857:
				return -1799943886;
			case 1858:
				return 45121961;
			case 1859:
				return 1949854427;
			case 1860:
				return 580700069;
			case 1861:
				return 1347068672;
			case 1862:
				return 943998860;
			case 1863:
				return -2131576785;
			case 1864:
				return -2137016051;
			case 1865:
				return 1193151399;
			case 1866:
				return -1353871107;
			case 1867:
				return 2026630914;
			case 1868:
				return -225844616;
			case 1869:
				return 1056170594;
			case 1870:
				return -873881483;
			case 1871:
				return 881979872;
			case 1872:
				return 1157695860;
			case 1873:
				return 1859948183;
			case 1874:
				return -1688366042;
			case 1875:
				return -929277449;
			case 1876:
				return -723094901;
			case 1877:
				return -801609437;
			case 1878:
				return -278745837;
			case 1879:
				return -41173958;
			case 1880:
				return 1160690623;
			case 1881:
				return -660075384;
			case 1882:
				return 1547403545;
			case 1883:
				return -775951892;
			case 1884:
				return 808576710;
			case 1885:
				return 149553684;
			case 1886:
				return 137316925;
			case 1887:
				return 1431947993;
			case 1888:
				return 1017355491;
			case 1889:
				return -920505696;
			case 1890:
				return -596723840;
			case 1891:
				return -1762770596;
			case 1892:
				return -1026473536;
			case 1893:
				return -516683274;
			case 1894:
				return -1004522372;
			case 1895:
				return 281772765;
			case 1896:
				return -2084311522;
			case 1897:
				return -1667265438;
			case 1898:
				return 175578406;
			case 1899:
				return 1137646647;
			case 1900:
				return -898081380;
			case 1901:
				return -468635897;
			case 1902:
				return -771786794;
			case 1903:
				return -626641013;
			case 1904:
				return 1088045886;
			case 1905:
				return -1678761663;
			case 1906:
				return 535384482;
			case 1907:
				return 1724413302;
			case 1908:
				return -1267247536;
			case 1909:
				return 489834626;
			case 1910:
				return -1360840312;
			case 1911:
				return 1628286919;
			case 1912:
				return -704461521;
			case 1913:
				return 481139295;
			case 1914:
				return -274080837;
			case 1915:
				return 1082980257;
			case 1916:
				return -1725465949;
			case 1917:
				return 1821956151;
			case 1918:
				return -1993960878;
			case 1919:
				return 204868257;
			case 1920:
				return 432272547;
			case 1921:
				return 1895127686;
			case 1922:
				return 1461266126;
			case 1923:
				return -1473336090;
			case 1924:
				return -1490034522;
			case 1925:
				return -205116461;
			case 1926:
				return -1013403664;
			case 1927:
				return -670748311;
			case 1928:
				return -2124415277;
			case 1929:
				return -473077489;
			case 1930:
				return 619024057;
			case 1931:
				return -836433697;
			case 1932:
				return -494733971;
			case 1933:
				return 490883533;
			case 1934:
				return 752665876;
			case 1935:
				return 1136457806;
			case 1936:
				return -342806042;
			case 1937:
				return 1255880931;
			case 1938:
				return 1676972066;
			case 1939:
				return -643411908;
			case 1940:
				return -1901860833;
			case 1941:
				return -1225383143;
			case 1942:
				return 206289712;
			case 1943:
				return 1405627586;
			case 1944:
				return -1889108254;
			case 1945:
				return -1583923165;
			case 1946:
				return 1726243396;
			case 1947:
				return 96746001;
			case 1948:
				return 1871261290;
			case 1949:
				return 1767170589;
			case 1950:
				return 396094389;
			case 1951:
				return 68538405;
			case 1952:
				return -540286923;
			case 1953:
				return 695709062;
			case 1954:
				return 1395510290;
			case 1955:
				return -1366130296;
			case 1956:
				return 1205820933;
			case 1957:
				return 195206081;
			case 1958:
				return 1355914142;
			case 1959:
				return 165972019;
			case 1960:
				return -1036688493;
			case 1961:
				return -30157790;
			case 1962:
				return 1509141447;
			case 1963:
				return -469909433;
			case 1964:
				return -1461530058;
			case 1965:
				return 1826022799;
			case 1966:
				return -1859413313;
			case 1967:
				return 942470447;
			case 1968:
				return -1170563128;
			case 1969:
				return 1394163483;
			case 1970:
				return -483649675;
			case 1971:
				return -782601262;
			case 1972:
				return 212587871;
			case 1973:
				return -436566493;
			case 1974:
				return -677790400;
			case 1975:
				return 143811737;
			case 1976:
				return 1679182807;
			case 1977:
				return -1512794226;
			case 1978:
				return 146172383;
			case 1979:
				return 876228895;
			case 1980:
				return 1417687142;
			case 1981:
				return -2035101386;
			case 1982:
				return 1520435387;
			case 1983:
				return 1078633574;
			case 1984:
				return 1305074360;
			case 1985:
				return 1048677741;
			case 1986:
				return 1284188544;
			case 1987:
				return -1986089134;
			case 1988:
				return 913995529;
			case 1989:
				return -730093764;
			case 1990:
				return -359734366;
			case 1991:
				return 175173994;
			case 1992:
				return -686953321;
			case 1993:
				return 54029413;
			case 1994:
				return -739754595;
			case 1995:
				return -931280709;
			case 1996:
				return -1737485501;
			case 1997:
				return -1070234238;
			case 1998:
				return 191078900;
			case 1999:
				return -2096572276;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam0 <= 2777)
	{
		switch (iParam0)
		{
			case 2000:
				return 2015532863;
			case 2001:
				return -800942395;
			case 2002:
				return -741366935;
			case 2003:
				return -1593790123;
			case 2004:
				return -595698218;
			case 2005:
				return -1269989522;
			case 2006:
				return -1995815064;
			case 2007:
				return -614421509;
			case 2008:
				return 604920544;
			case 2009:
				return 1382135686;
			case 2010:
				return -1968130469;
			case 2011:
				return -276259505;
			case 2012:
				return -1716205818;
			case 2013:
				return 728046625;
			case 2014:
				return 350100475;
			case 2015:
				return 2033090463;
			case 2016:
				return 826576088;
			case 2017:
				return 1713084298;
			case 2018:
				return 928528900;
			case 2019:
				return 391022529;
			case 2020:
				return 1870870569;
			case 2021:
				return -2118853492;
			case 2022:
				return -597126658;
			case 2023:
				return 158063004;
			case 2024:
				return 1290812287;
			case 2025:
				return -1537525865;
			case 2026:
				return 2079207010;
			case 2027:
				return 1736386364;
			case 2028:
				return -2071756699;
			case 2029:
				return -1781758360;
			case 2030:
				return 1184975829;
			case 2031:
				return 1173232190;
			case 2032:
				return 105236016;
			case 2033:
				return -1081428331;
			case 2034:
				return -527717905;
			case 2035:
				return 1969270586;
			case 2036:
				return -1113878850;
			case 2037:
				return 1186551862;
			case 2038:
				return -1112692383;
			case 2039:
				return 526763180;
			case 2040:
				return 1802967124;
			case 2041:
				return -598586662;
			case 2042:
				return -1838419604;
			case 2043:
				return -626724117;
			case 2044:
				return -1912028958;
			case 2045:
				return 563944718;
			case 2046:
				return -1532653291;
			case 2047:
				return 739567292;
			case 2048:
				return 729601893;
			case 2049:
				return 1128276345;
			case 2050:
				return 1873580721;
			case 2051:
				return 1706906210;
			case 2052:
				return 2094371528;
			case 2053:
				return 1688216398;
			case 2054:
				return -1745210725;
			case 2055:
				return -1096712211;
			case 2056:
				return -1941005496;
			case 2057:
				return 1898267848;
			case 2058:
				return 974280355;
			case 2059:
				return 1756181464;
			case 2060:
				return -816857367;
			case 2061:
				return -72482077;
			case 2062:
				return -1122265410;
			case 2063:
				return -935952905;
			case 2064:
				return 1309948033;
			case 2065:
				return 1941336822;
			case 2066:
				return 712371053;
			case 2067:
				return 1710282603;
			case 2068:
				return -1802096589;
			case 2069:
				return 574303518;
			case 2070:
				return -752772715;
			case 2071:
				return 503623514;
			case 2072:
				return -407026996;
			case 2073:
				return 669655585;
			case 2074:
				return -58196573;
			case 2075:
				return -895099271;
			case 2076:
				return -2060408070;
			case 2077:
				return 364962188;
			case 2078:
				return 556610581;
			case 2079:
				return -1394479903;
			case 2080:
				return -786679704;
			case 2081:
				return -1029093195;
			case 2082:
				return -1325390493;
			case 2083:
				return -1622834706;
			case 2084:
				return -1443390498;
			case 2085:
				return 689576469;
			case 2086:
				return -1750010031;
			case 2087:
				return 257582350;
			case 2088:
				return -39730787;
			case 2089:
				return -1438901569;
			case 2090:
				return -1725439174;
			case 2091:
				return 1857654366;
			case 2092:
				return 2095655613;
			case 2093:
				return -772691681;
			case 2094:
				return -2110850686;
			case 2095:
				return -1142062162;
			case 2096:
				return 32078073;
			case 2097:
				return 1011350990;
			case 2098:
				return 1007204499;
			case 2099:
				return 705321299;
			case 2100:
				return 1049317994;
			case 2101:
				return -820561187;
			case 2102:
				return -280121448;
			case 2103:
				return -1268841107;
			case 2104:
				return -279038963;
			case 2105:
				return 2087785010;
			case 2106:
				return 161441935;
			case 2107:
				return -596115807;
			case 2108:
				return 112916013;
			case 2109:
				return -1603458673;
			case 2110:
				return 34346755;
			case 2111:
				return 482102371;
			case 2112:
				return -502343927;
			case 2113:
				return 1065585604;
			case 2114:
				return -175048740;
			case 2115:
				return -482127039;
			case 2116:
				return 1557698400;
			case 2117:
				return -1484676996;
			case 2118:
				return -1297130328;
			case 2119:
				return 1757890773;
			case 2120:
				return 1499445407;
			case 2121:
				return 472339111;
			case 2122:
				return -262371610;
			case 2123:
				return 1123990218;
			case 2124:
				return 1303507358;
			case 2125:
				return 1596889034;
			case 2126:
				return -519371139;
			case 2127:
				return 120604643;
			case 2128:
				return -1819679999;
			case 2129:
				return 1117275649;
			case 2130:
				return -2134390671;
			case 2131:
				return 1628921491;
			case 2132:
				return -1815797865;
			case 2133:
				return 1673216541;
			case 2134:
				return 331698185;
			case 2135:
				return 1803637785;
			case 2136:
				return 1812712970;
			case 2137:
				return 787163418;
			case 2138:
				return 474786474;
			case 2139:
				return -1604164737;
			case 2140:
				return 492662035;
			case 2141:
				return -1991086481;
			case 2142:
				return -1623539657;
			case 2143:
				return -1939338394;
			case 2144:
				return -860360254;
			case 2145:
				return -409479737;
			case 2146:
				return 30280292;
			case 2147:
				return -1211924901;
			case 2148:
				return 673909600;
			case 2149:
				return 2088585697;
			case 2150:
				return -14824697;
			case 2151:
				return 1908207721;
			case 2152:
				return -46828581;
			case 2153:
				return -1858229297;
			case 2154:
				return -216811017;
			case 2155:
				return -1431123016;
			case 2156:
				return -1448418975;
			case 2157:
				return -1645569664;
			case 2158:
				return -2122265662;
			case 2159:
				return -510114122;
			case 2160:
				return 696753474;
			case 2161:
				return 584821987;
			case 2162:
				return 54505570;
			case 2163:
				return -894288155;
			case 2164:
				return -1293181572;
			case 2165:
				return 1093030199;
			case 2166:
				return -1423344014;
			case 2167:
				return 1437809535;
			case 2168:
				return -1862782800;
			case 2169:
				return 1748373207;
			case 2170:
				return -1040386459;
			case 2171:
				return -113711908;
			case 2172:
				return -510950795;
			case 2173:
				return 1920766934;
			case 2174:
				return -749007702;
			case 2175:
				return 41732045;
			case 2176:
				return -1461922204;
			case 2177:
				return -1519499946;
			case 2178:
				return -535498894;
			case 2179:
				return 2116024182;
			case 2180:
				return 25328693;
			case 2181:
				return 1934461192;
			case 2182:
				return -1434912930;
			case 2183:
				return 491871729;
			case 2184:
				return -1078418763;
			case 2185:
				return -415281478;
			case 2186:
				return -722949619;
			case 2187:
				return 202086482;
			case 2188:
				return -87394864;
			case 2189:
				return 1473078398;
			case 2190:
				return -604091710;
			case 2191:
				return 375693548;
			case 2192:
				return -400238535;
			case 2193:
				return 832608336;
			case 2194:
				return 551513105;
			case 2195:
				return 642296010;
			case 2196:
				return 1416512144;
			case 2197:
				return -866774384;
			case 2198:
				return -687283562;
			case 2199:
				return 67497998;
			case 2200:
				return -991895362;
			case 2201:
				return -846479900;
			case 2202:
				return -693659956;
			case 2203:
				return -1578471167;
			case 2204:
				return 1113860407;
			case 2205:
				return -1351899990;
			case 2206:
				return 824748066;
			case 2207:
				return 240772357;
			case 2208:
				return -389681572;
			case 2209:
				return -1226896753;
			case 2210:
				return -1221107646;
			case 2211:
				return -1391542137;
			case 2212:
				return -562632536;
			case 2213:
				return -1013459033;
			case 2214:
				return -1406359343;
			case 2215:
				return -407068688;
			case 2216:
				return 1946521576;
			case 2217:
				return 1743765516;
			case 2218:
				return 1936501508;
			case 2219:
				return 27526098;
			case 2220:
				return -1295818914;
			case 2221:
				return -1056172583;
			case 2222:
				return 189901415;
			case 2223:
				return -575680736;
			case 2224:
				return 1715626179;
			case 2225:
				return 343391535;
			case 2226:
				return -1503000236;
			case 2227:
				return 1028580175;
			case 2228:
				return -117847307;
			case 2229:
				return 1181416174;
			case 2230:
				return 861187315;
			case 2231:
				return 554305630;
			case 2232:
				return 1423626752;
			case 2233:
				return -1923863493;
			case 2234:
				return -250669847;
			case 2235:
				return 970334657;
			case 2236:
				return 82281660;
			case 2237:
				return 1204906867;
			case 2238:
				return -1887958444;
			case 2239:
				return -783284068;
			case 2240:
				return 1700073271;
			case 2241:
				return 371690004;
			case 2242:
				return 1636184722;
			case 2243:
				return -1948374304;
			case 2244:
				return 2113806544;
			case 2245:
				return -1347357987;
			case 2246:
				return -91625813;
			case 2247:
				return 308410851;
			case 2248:
				return -100099838;
			case 2249:
				return -957276853;
			case 2250:
				return -1107759495;
			case 2251:
				return 1883360429;
			case 2252:
				return -1090537556;
			case 2253:
				return 1592112741;
			case 2254:
				return 1863648219;
			case 2255:
				return 50557240;
			case 2256:
				return 266825280;
			case 2257:
				return 94033046;
			case 2258:
				return -583928751;
			case 2259:
				return 1568543846;
			case 2260:
				return -210665175;
			case 2261:
				return -1196624012;
			case 2262:
				return 206749196;
			case 2263:
				return -1293161516;
			case 2264:
				return 1183263476;
			case 2265:
				return 401370450;
			case 2266:
				return 573140494;
			case 2267:
				return 2120179691;
			case 2268:
				return 962310476;
			case 2269:
				return 1956732224;
			case 2270:
				return 465137550;
			case 2271:
				return -1199165509;
			case 2272:
				return 409129751;
			case 2273:
				return -1630731514;
			case 2274:
				return -2031294856;
			case 2275:
				return 1363336888;
			case 2276:
				return -2095306558;
			case 2277:
				return 1687755487;
			case 2278:
				return 14065784;
			case 2279:
				return 516810429;
			case 2280:
				return 1226096098;
			case 2281:
				return -924548651;
			case 2282:
				return 1418611013;
			case 2283:
				return -1019371157;
			case 2284:
				return 2068484211;
			case 2285:
				return 1640603023;
			case 2286:
				return -515279524;
			case 2287:
				return 901738482;
			case 2288:
				return -1001336405;
			case 2289:
				return 1708614117;
			case 2290:
				return -2144326250;
			case 2291:
				return -605257184;
			case 2292:
				return 373802338;
			case 2293:
				return 620580306;
			case 2294:
				return -1962566219;
			case 2295:
				return 513934897;
			case 2296:
				return 483532006;
			case 2297:
				return 738652812;
			case 2298:
				return -509143136;
			case 2299:
				return 974243296;
			case 2300:
				return 95187046;
			case 2301:
				return 869083804;
			case 2302:
				return 1803556695;
			case 2303:
				return 90710077;
			case 2304:
				return -136805090;
			case 2305:
				return 1570947227;
			case 2306:
				return -214604861;
			case 2307:
				return 886997475;
			case 2308:
				return -428652579;
			case 2309:
				return 154479184;
			case 2310:
				return 1187864964;
			case 2311:
				return 1199685211;
			case 2312:
				return -1546507097;
			case 2313:
				return -1082524312;
			case 2314:
				return 925683259;
			case 2315:
				return 1817836578;
			case 2316:
				return -226455701;
			case 2317:
				return 495423143;
			case 2318:
				return 1225215575;
			case 2319:
				return -1666038504;
			case 2320:
				return 2111987179;
			case 2321:
				return -1407497494;
			case 2322:
				return -1161238459;
			case 2323:
				return -1583237641;
			case 2324:
				return 665690112;
			case 2325:
				return 1143189384;
			case 2326:
				return -833697651;
			case 2327:
				return 1480174383;
			case 2328:
				return 59120723;
			case 2329:
				return -1975145165;
			case 2330:
				return 1296658155;
			case 2331:
				return 1809507039;
			case 2332:
				return 1123782857;
			case 2333:
				return -1656839837;
			case 2334:
				return 734740942;
			case 2335:
				return 2107567819;
			case 2336:
				return -1202265833;
			case 2337:
				return -657697631;
			case 2338:
				return 1357101289;
			case 2339:
				return 1139876579;
			case 2340:
				return 412645416;
			case 2341:
				return 2037986663;
			case 2342:
				return -1852256117;
			case 2343:
				return 1773228786;
			case 2344:
				return -1744971427;
			case 2345:
				return 793572138;
			case 2346:
				return 266896652;
			case 2347:
				return -1947843638;
			case 2348:
				return -1562607865;
			case 2349:
				return 1108015391;
			case 2350:
				return 782876548;
			case 2351:
				return -1798979372;
			case 2352:
				return 1171027246;
			case 2353:
				return 1105828637;
			case 2354:
				return -1363817710;
			case 2355:
				return 859179462;
			case 2356:
				return -421457898;
			case 2357:
				return -928367655;
			case 2358:
				return 890107948;
			case 2359:
				return 1153046408;
			case 2360:
				return 1634621556;
			case 2361:
				return -243627670;
			case 2362:
				return 38567760;
			case 2363:
				return -1954278106;
			case 2364:
				return -947200121;
			case 2365:
				return 629362551;
			case 2366:
				return -786579336;
			case 2367:
				return -1305545118;
			case 2368:
				return -149223920;
			case 2369:
				return 1479152994;
			case 2370:
				return -910752885;
			case 2371:
				return 2129660496;
			case 2372:
				return -2076388321;
			case 2373:
				return 1049886174;
			case 2374:
				return 1208592031;
			case 2375:
				return 1947806010;
			case 2376:
				return 1644962309;
			case 2377:
				return -825836321;
			case 2378:
				return 446554495;
			case 2379:
				return -262959893;
			case 2380:
				return -735136865;
			case 2381:
				return -868830916;
			case 2382:
				return 764025611;
			case 2383:
				return 1802934313;
			case 2384:
				return 607468222;
			case 2385:
				return 2108112010;
			case 2386:
				return 1208537422;
			case 2387:
				return 361734047;
			case 2388:
				return -1552951782;
			case 2389:
				return 1391886974;
			case 2390:
				return -1142569437;
			case 2391:
				return 474113610;
			case 2392:
				return 1298607560;
			case 2393:
				return -297340751;
			case 2394:
				return -1079295176;
			case 2395:
				return 1861460906;
			case 2396:
				return 1044079550;
			case 2397:
				return 894787561;
			case 2398:
				return -689352221;
			case 2399:
				return -391187090;
			case 2400:
				return 1963724330;
			case 2401:
				return 1722569012;
			case 2402:
				return -451832572;
			case 2403:
				return 325677491;
			case 2404:
				return -1349539327;
			case 2405:
				return -1640200357;
			case 2406:
				return -2127665186;
			case 2407:
				return 1854980771;
			case 2408:
				return 1513363974;
			case 2409:
				return 1886602884;
			case 2410:
				return -1902184438;
			case 2411:
				return 1236921921;
			case 2412:
				return 740012805;
			case 2413:
				return -1280884206;
			case 2414:
				return 1823159188;
			case 2415:
				return -758463889;
			case 2416:
				return -1116430120;
			case 2417:
				return 1601053042;
			case 2418:
				return 1623114783;
			case 2419:
				return -703127827;
			case 2420:
				return -1933338814;
			case 2421:
				return 952753807;
			case 2422:
				return -64729392;
			case 2423:
				return 753181111;
			case 2424:
				return 1475089455;
			case 2425:
				return 637861796;
			case 2426:
				return 913170302;
			case 2427:
				return 702867922;
			case 2428:
				return 187740801;
			case 2429:
				return -523896426;
			case 2430:
				return 483041556;
			case 2431:
				return -797033116;
			case 2432:
				return -455342387;
			case 2433:
				return -1407773372;
			case 2434:
				return 2020752077;
			case 2435:
				return 593772301;
			case 2436:
				return 207032563;
			case 2437:
				return -1984361543;
			case 2438:
				return -869788001;
			case 2439:
				return -691393565;
			case 2440:
				return -1448947307;
			case 2441:
				return -1171033418;
			case 2442:
				return -487373767;
			case 2443:
				return 341106871;
			case 2444:
				return -835267464;
			case 2445:
				return 992700940;
			case 2446:
				return -1324099905;
			case 2447:
				return 1589293578;
			case 2448:
				return 1435082664;
			case 2449:
				return -2091615427;
			case 2450:
				return 227706189;
			case 2451:
				return 1587857798;
			case 2452:
				return -454287921;
			case 2453:
				return 1735860959;
			case 2454:
				return -109606367;
			case 2455:
				return -1997605640;
			case 2456:
				return 2066602358;
			case 2457:
				return -1374896333;
			case 2458:
				return 441668603;
			case 2459:
				return -165202905;
			case 2460:
				return -1377975054;
			case 2461:
				return 897624424;
			case 2462:
				return -1327148782;
			case 2463:
				return -1965378386;
			case 2464:
				return -960397707;
			case 2465:
				return 1424082059;
			case 2466:
				return -1939038021;
			case 2467:
				return -1613805696;
			case 2468:
				return 801042892;
			case 2469:
				return 25498969;
			case 2470:
				return 1419819915;
			case 2471:
				return 621272158;
			case 2472:
				return 422167750;
			case 2473:
				return 183712523;
			case 2474:
				return -1699673416;
			case 2475:
				return 1234767744;
			case 2476:
				return 1383396669;
			case 2477:
				return 1070583795;
			case 2478:
				return 692757225;
			case 2479:
				return -250563966;
			case 2480:
				return -1336911409;
			case 2481:
				return -1029570958;
			case 2482:
				return 56660208;
			case 2483:
				return -322991750;
			case 2484:
				return -610769108;
			case 2485:
				return -933576527;
			case 2486:
				return -1254057347;
			case 2487:
				return 686788855;
			case 2488:
				return -1228362565;
			case 2489:
				return -1793687930;
			case 2490:
				return 2081184892;
			case 2491:
				return -59515547;
			case 2492:
				return -785152283;
			case 2493:
				return -553835912;
			case 2494:
				return 1417440092;
			case 2495:
				return 649433039;
			case 2496:
				return 231100670;
			case 2497:
				return -2073602286;
			case 2498:
				return -1923847956;
			case 2499:
				return 1743953449;
			case 2500:
				return 1924707253;
			case 2501:
				return -209782407;
			case 2502:
				return -1068985587;
			case 2503:
				return 1984181016;
			case 2504:
				return 511673431;
			case 2505:
				return 254481872;
			case 2506:
				return 2096114765;
			case 2507:
				return 924267974;
			case 2508:
				return -1633151965;
			case 2509:
				return 916581544;
			case 2510:
				return 1210814395;
			case 2511:
				return -1735839627;
			case 2512:
				return -1430793006;
			case 2513:
				return -1616778617;
			case 2514:
				return -1852748182;
			case 2515:
				return -381473693;
			case 2516:
				return 1755785548;
			case 2517:
				return 1834537343;
			case 2518:
				return 505174455;
			case 2519:
				return -1645988897;
			case 2520:
				return 1679934574;
			case 2521:
				return 2077558044;
			case 2522:
				return 205032683;
			case 2523:
				return 908140270;
			case 2524:
				return -2036638644;
			case 2525:
				return -1790706759;
			case 2526:
				return 386105150;
			case 2527:
				return 411599432;
			case 2528:
				return 709895639;
			case 2529:
				return 1008617843;
			case 2530:
				return -269787403;
			case 2531:
				return -483215130;
			case 2532:
				return -1373409788;
			case 2533:
				return -1503851195;
			case 2534:
				return -1342300025;
			case 2535:
				return 2029007468;
			case 2536:
				return -1800377876;
			case 2537:
				return -1424779606;
			case 2538:
				return -961163794;
			case 2539:
				return -1897865659;
			case 2540:
				return -1725697333;
			case 2541:
				return 435889881;
			case 2542:
				return 1980374609;
			case 2543:
				return 1481756818;
			case 2544:
				return 22956558;
			case 2545:
				return 2135160782;
			case 2546:
				return 1614850834;
			case 2547:
				return 948536844;
			case 2548:
				return -1344285417;
			case 2549:
				return 324369003;
			case 2550:
				return -415953049;
			case 2551:
				return -281275366;
			case 2552:
				return 602205442;
			case 2553:
				return 640880475;
			case 2554:
				return 752327294;
			case 2555:
				return 2086295351;
			case 2556:
				return -1403908542;
			case 2557:
				return -2116659774;
			case 2558:
				return -893624314;
			case 2559:
				return 985448695;
			case 2560:
				return -1325016116;
			case 2561:
				return 1532009326;
			case 2562:
				return 1970695826;
			case 2563:
				return -706937940;
			case 2564:
				return -71885140;
			case 2565:
				return -1792872817;
			case 2566:
				return -1402083909;
			case 2567:
				return 255093300;
			case 2568:
				return 1344772301;
			case 2569:
				return -382865315;
			case 2570:
				return 181690478;
			case 2571:
				return 774601424;
			case 2572:
				return 431365499;
			case 2573:
				return -2090209059;
			case 2574:
				return 1965249616;
			case 2575:
				return 276582710;
			case 2576:
				return 1977031606;
			case 2577:
				return -2021605623;
			case 2578:
				return 1191890045;
			case 2579:
				return 1929454697;
			case 2580:
				return 1649902358;
			case 2581:
				return 1864768904;
			case 2582:
				return 938290967;
			case 2583:
				return 1169279648;
			case 2584:
				return -1765152778;
			case 2585:
				return -2072231077;
			case 2586:
				return 19217583;
			case 2587:
				return -284612948;
			case 2588:
				return -1253110600;
			case 2589:
				return -846230557;
			case 2590:
				return -1614141377;
			case 2591:
				return -926795318;
			case 2592:
				return 2095421392;
			case 2593:
				return 82084523;
			case 2594:
				return 1815262278;
			case 2595:
				return 1511919645;
			case 2596:
				return 767505137;
			case 2597:
				return 588062093;
			case 2598:
				return 471934509;
			case 2599:
				return 995675696;
			case 2600:
				return 706423733;
			case 2601:
				return -125588314;
			case 2602:
				return -1340001373;
			case 2603:
				return -2116397290;
			case 2604:
				return -922917541;
			case 2605:
				return 1524580507;
			case 2606:
				return 204481342;
			case 2607:
				return 174727090;
			case 2608:
				return -1466172032;
			case 2609:
				return -981873755;
			case 2610:
				return 2013143748;
			case 2611:
				return 1289178060;
			case 2612:
				return -642132908;
			case 2613:
				return -848315456;
			case 2614:
				return 105426297;
			case 2615:
				return 1202346365;
			case 2616:
				return -2139410267;
			case 2617:
				return 1433203214;
			case 2618:
				return -1795618779;
			case 2619:
				return -1873685184;
			case 2620:
				return -697307430;
			case 2621:
				return 633503129;
			case 2622:
				return -1536198599;
			case 2623:
				return 1759143160;
			case 2624:
				return -677362237;
			case 2625:
				return -2082201137;
			case 2626:
				return 1470738186;
			case 2627:
				return 1641449717;
			case 2628:
				return -1632348233;
			case 2629:
				return -562289114;
			case 2630:
				return -947895270;
			case 2631:
				return 386231914;
			case 2632:
				return -329705198;
			case 2633:
				return 18956962;
			case 2634:
				return 1587477916;
			case 2635:
				return -1018713880;
			case 2636:
				return 980234126;
			case 2637:
				return -61896664;
			case 2638:
				return -1496619689;
			case 2639:
				return 1891284833;
			case 2640:
				return 1576931820;
			case 2641:
				return -1296418825;
			case 2642:
				return -1936937394;
			case 2643:
				return -648893593;
			case 2644:
				return -1225606266;
			case 2645:
				return -1874720370;
			case 2646:
				return 2035942164;
			case 2647:
				return 519091847;
			case 2648:
				return 1764814553;
			case 2649:
				return -376056363;
			case 2650:
				return 1534006738;
			case 2651:
				return 748826019;
			case 2652:
				return -1892843345;
			case 2653:
				return 146746575;
			case 2654:
				return -2144587490;
			case 2655:
				return -960136064;
			case 2656:
				return -1366431554;
			case 2657:
				return 1812999696;
			case 2658:
				return -502582154;
			case 2659:
				return 1270535492;
			case 2660:
				return 1412515639;
			case 2661:
				return 366542865;
			case 2662:
				return 241205019;
			case 2663:
				return 1786931635;
			case 2664:
				return 26815048;
			case 2665:
				return -1162161651;
			case 2666:
				return 1284656212;
			case 2667:
				return 557212279;
			case 2668:
				return -1229109520;
			case 2669:
				return -1108618313;
			case 2670:
				return -1508467572;
			case 2671:
				return -990258606;
			case 2672:
				return -1184151355;
			case 2673:
				return -946313953;
			case 2674:
				return -889100155;
			case 2675:
				return -1521525254;
			case 2676:
				return 2056145270;
			case 2677:
				return -1603329230;
			case 2678:
				return -787678727;
			case 2679:
				return -1220264217;
			case 2680:
				return -665583358;
			case 2681:
				return -282972514;
			case 2682:
				return -64632667;
			case 2683:
				return 314111435;
			case 2684:
				return 24859476;
			case 2685:
				return 340621560;
			case 2686:
				return 1266707689;
			case 2687:
				return 434145706;
			case 2688:
				return 654746614;
			case 2689:
				return 1965736001;
			case 2690:
				return 1650694835;
			case 2691:
				return -761186147;
			case 2692:
				return 1133172356;
			case 2693:
				return -559257162;
			case 2694:
				return 418666411;
			case 2695:
				return 651621232;
			case 2696:
				return 979670262;
			case 2697:
				return 1277540472;
			case 2698:
				return -1452136643;
			case 2699:
				return -744260705;
			case 2700:
				return 1424293412;
			case 2701:
				return 1060557512;
			case 2702:
				return -362403544;
			case 2703:
				return -592147003;
			case 2704:
				return 352816221;
			case 2705:
				return 1128622296;
			case 2706:
				return 979982112;
			case 2707:
				return 1756640181;
			case 2708:
				return 1557076971;
			case 2709:
				return 1913538153;
			case 2710:
				return 2113454609;
			case 2711:
				return -1865650458;
			case 2712:
				return -1015786727;
			case 2713:
				return 908775155;
			case 2714:
				return 1310510260;
			case 2715:
				return -1455316832;
			case 2716:
				return -1653579880;
			case 2717:
				return -1640722758;
			case 2718:
				return -1349658419;
			case 2719:
				return -1597293752;
			case 2720:
				return -201465428;
			case 2721:
				return -382219232;
			case 2722:
				return -129668545;
			case 2723:
				return 1751470296;
			case 2724:
				return -2072507852;
			case 2725:
				return 1214168412;
			case 2726:
				return -1888820785;
			case 2727:
				return 1630537050;
			case 2728:
				return 1980575508;
			case 2729:
				return 1152076881;
			case 2730:
				return -679185919;
			case 2731:
				return -1439328412;
			case 2732:
				return -1155483334;
			case 2733:
				return -1916084593;
			case 2734:
				return -835606817;
			case 2735:
				return -1560636071;
			case 2736:
				return -904833761;
			case 2737:
				return 103750283;
			case 2738:
				return -1017701936;
			case 2739:
				return -743781837;
			case 2740:
				return 2114706334;
			case 2741:
				return -1670453688;
			case 2742:
				return -1991237877;
			case 2743:
				return -717025835;
			case 2744:
				return -2119625926;
			case 2745:
				return 867231253;
			case 2746:
				return 1248111234;
			case 2747:
				return 474287981;
			case 2748:
				return -1331012521;
			case 2749:
				return 2039534767;
			case 2750:
				return -1451954802;
			case 2751:
				return -1554566073;
			case 2752:
				return 510089692;
			case 2753:
				return -1208336782;
			case 2754:
				return joaat("prop_tree_02");
			case 2755:
				return joaat("prop_tree_log_01");
			case 2756:
				return -1377880324;
			case 2757:
				return -701897747;
			case 2758:
				return -1781252352;
			case 2759:
				return -1356658830;
			case 2760:
				return 1169154818;
			case 2761:
				return -102239629;
			case 2762:
				return 1507566204;
			case 2763:
				return -2122297972;
			case 2764:
				return -1360647871;
			case 2765:
				return 88716961;
			case 2766:
				return -2051158745;
			case 2767:
				return 488068970;
			case 2768:
				return 409306948;
			case 2769:
				return -1996105597;
			case 2770:
				return 1017072544;
			case 2771:
				return -1588780614;
			case 2772:
				return 1857501669;
			case 2773:
				return 2053819138;
			case 2774:
				return -763069375;
			case 2775:
				return -522714993;
			case 2776:
				return -1352620713;
			case 2777:
				return -492341871;
			default:
				break;
		}
		if (iParam1 >= 1)
		{
		}
		return StackVal;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_150(int iParam0)
{
	bool bVar0;
	vector3 vVar1[24];
	bool bVar4;
	int iVar5;
	struct<8> Var6;
	bool bVar14;
	var uVar15;
	var uVar16;
	int iVar24[100];
	int iVar125;
	int iVar126;
	int iVar127;
	struct<7> Var128;

	StringCopy(&cVar1, "loading_tips", 24);
	bVar0 = DATAFILE::_0x7907969497EA92F5(*iParam0);
	if (!bVar0)
	{
		*iParam0 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(&cVar1));
	}
	bVar4 = DATAFILE::_0x603AC35FD4602C76(*iParam0);
	if (!bVar4)
	{
		return false;
	}
	func_225(iParam0);
	iParam0->f_79 = aggregate_func_3062(iParam0, 1);
	if (iParam0->f_79 <= 0)
	{
		return false;
	}
	uVar15 = iParam0->f_1;
	iVar5 = 0;
	while (iVar5 < iParam0->f_79)
	{
		iVar24[iVar5] = iVar5;
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= (iParam0->f_79 - 1))
	{
		iVar125 = MISC::GET_RANDOM_INT_IN_RANGE(iVar5, (iParam0->f_79 - 1));
		iVar126 = &iVar24[iVar5];
		iVar24[iVar5] = &iVar24[iVar125];
		iVar24[iVar125] = iVar126;
		iVar5++;
	}
	iVar127 = 0;
	while (iVar127 < 10)
	{
		iParam0->f_1 = uVar15;
		iParam0->f_3 = &iVar24[iVar127];
		if (func_227(iParam0, 0))
		{
			if (func_228(iParam0, 2, &Var6))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
				{
					MemCopy(&Var128, {Var6}, 4);
					if (func_229(iParam0, 4, &bVar14))
					{
						if (bVar14)
						{
							aggregate_func_4254(&Var128, 1);
						}
					}
					if (func_229(iParam0, 5, &bVar14))
					{
						if (bVar14)
						{
							aggregate_func_4254(&Var128, 2);
						}
					}
					func_231(iParam0, 3, &(Var128.f_5));
					if (func_228(iParam0, 6, &uVar16))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar16))
						{
							Var128.f_6 = MISC::GET_HASH_KEY(&uVar16);
						}
					}
				}
			}
			if (Var128.f_6 == 0 || MISSIONDATA::_0x57E798B54C45EE1A(Var128.f_6) >= 2)
			{
				*(iParam0->f_5[iVar127 /*7*/]) = { Var128 };
				iVar127++;
			}
		}
	}
	DATAFILE::_DATAFILE_UNLOAD(*iParam0);
	return true;
}

int func_153()
{
	if (!SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		return 1;
	}
	if (!SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(7))
	{
		return 1;
	}
	if (!SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(0))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1956121->f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1956121->f_1, 5))
	{
		return 1;
	}
	if (aggregate_func_7116(255))
	{
		return 1;
	}
	if (aggregate_func_4337(0))
	{
		return 1;
	}
	if (Global_13)
	{
		return 1;
	}
	if (CAM::_0x81DCFD13CF39920E())
	{
		if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
		{
			return 1;
		}
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		if (HUD::_0x66F35DD9D2B58579())
		{
			return 1;
		}
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (GRAPHICS::GET_TV_CHANNEL() != -1)
	{
		if (HUD::_0x66F35DD9D2B58579())
		{
			return 1;
		}
	}
	if (CAM::_0x975F6EBB62632FE3() || CAM::_0x1811A02277A9E49D())
	{
		if (HUD::IS_RADAR_HIDDEN())
		{
			if (!CAM::_0x1204EB53A5FBC63D())
			{
				return 1;
			}
		}
	}
	if (aggregate_func_4497(255))
	{
		return 1;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return 1;
	}
	return 0;
}

int func_154()
{
	if (MISC::IS_BIT_SET(Global_1956121->f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1956121->f_1, 6))
	{
		return 1;
	}
	if (aggregate_func_4251() == -2)
	{
		return 1;
	}
	if (aggregate_func_4240(&Global_1939168, 8192))
	{
		return 1;
	}
	if (aggregate_func_4240(&Global_1939168, 4096))
	{
		return 1;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 1;
	}
	if (STREAMING::_0x99F92061EFE908BA() || aggregate_func_4240(&Global_1939168, 32768))
	{
		return 1;
	}
	if (Global_13 || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_GameIntro"))
	{
		return 1;
	}
	if (aggregate_func_4593())
	{
		if (HUD::IS_RADAR_HIDDEN())
		{
			return 1;
		}
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		if ((!CAM::_0x1204EB53A5FBC63D() && !CAM::IS_CINEMATIC_CAM_RENDERING()) && !aggregate_func_4593())
		{
			return 1;
		}
	}
	if (HUD::_0x66F35DD9D2B58579())
	{
		return 1;
	}
	if (aggregate_func_4251() == 0)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			if (aggregate_func_6969(255) > 2 && !aggregate_func_7117(Global_1273882->f_10, 8192))
			{
				return 1;
			}
			else if (aggregate_func_5349(16))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_158(int iParam0)
{
	if (iParam0 != Global_1956121->f_3)
	{
		_NAMESPACE84::_0x74BCCEB233AD95B2(612972714, iParam0);
		Global_1956121->f_3 = iParam0;
	}
}

void func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -725272239:
			func_244(iParam1);
			break;
		case 1121131740:
			func_245(iParam1);
			break;
		case 543140406:
			func_246(iParam1);
			break;
		case -2095977185:
			func_247(iParam1);
			break;
		case 809652668:
			func_248(iParam1);
			break;
		case 1860341470:
			func_249();
			break;
		case 516249386:
			func_250(iParam1);
			break;
		case 904577075:
			func_251(iParam1);
			break;
	}
}

void func_160()
{
	if (Global_1572887->f_248.f_64 != 0 && func_252())
	{
		aggregate_func_6625(1);
		return;
	}
	if (Global_1572887->f_248.f_86 > 2 && func_252())
	{
		aggregate_func_6625(1);
		return;
	}
	if (Global_1572887->f_248.f_66 != -1 && func_252())
	{
		aggregate_func_6625(1);
		return;
	}
	if (Global_1572887->f_248.f_88 != 0 && func_252())
	{
		aggregate_func_6625(1);
		return;
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 4194304) || aggregate_func_4240(Global_1572887->f_248.f_88, 16777216))
	{
		aggregate_func_7218(16384);
	}
	Global_1572887->f_248.f_88 = 0;
}

void func_161()
{
	struct<8> Var0;
	struct<4> Var19;
	char cVar23[16];
	char cVar25[64];
	char* sVar33;

	Global_1572887->f_248.f_91 = MISC::GET_GAME_TIMER();
	Var0 = "";
	Var0.f_1 = "";
	Var0.f_2 = 0;
	aggregate_func_7071();
	if (func_256(256) || func_256(512))
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		Var0.f_7 = MISC::GET_HASH_KEY("IB_EXIT");
		Var0.f_7.f_1 = 0;
		Var0.f_7.f_2 = 0;
		Var0.f_7.f_3 = 0;
	}
	else if (func_256(536870912))
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		Var0.f_7 = MISC::GET_HASH_KEY("IB_CANCEL");
		Var0.f_7.f_1 = 0;
		Var0.f_7.f_2 = 0;
		Var0.f_7.f_3 = 0;
	}
	else if (((((((((func_256(131072) || func_256(262144)) || func_256(524288)) || func_256(1048576)) || func_256(2097152)) || func_256(4194304)) || func_256(8388608)) || func_256(16777216)) || func_256(33554432)) || func_256(67108864))
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_OK");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
	}
	else
	{
		Var0.f_3 = MISC::GET_HASH_KEY("IB_EXIT");
		Var0.f_3.f_1 = 0;
		Var0.f_3.f_2 = 0;
		Var0.f_3.f_3 = 0;
		aggregate_func_7218(512);
	}
	aggregate_func_4239(&Var0);
	Var19 = 0;
	Var19.f_2 = "SG_HDNG";
	StringCopy(&cVar23, "JAIL_ALT_BODY", 16);
	StringCopy(&cVar25, func_258(), 64);
	sVar33 = aggregate_func_4295(MISC::ARE_STRINGS_EQUAL(&cVar25, &cVar23), Global_1273874->f_2.f_4, func_259());
	Var19.f_3 = MISC::_CREATE_VAR_STRING(2, &cVar25, sVar33);
	Var19.f_1 = 2;
	Global_1572887->f_248.f_85 = _NAMESPACE76::_0x339E16B41780FC35(&Var0, &Var19, 1);
	aggregate_func_6625(2);
	aggregate_func_3304(1);
}

void func_162()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	int iVar9;

	if (aggregate_func_4251() == 0)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1572887->f_17, false))
		{
			if (aggregate_func_4476() > 5)
			{
				if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				aggregate_func_6625(3);
				return;
			}
		}
	}
	if (_NAMESPACE76::_0xF8806EC3FF840FDC())
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
	}
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(-1218098620))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(-1218098620, &vVar5))
		{
			switch (vVar5.x)
			{
				case -1203660660:
					if (vVar5.y == Global_1572887->f_248.f_85)
					{
						if (vVar5.z == 2074623703)
						{
							UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1218098620);
							bVar0 = true;
						}
						if (vVar5.z == 444632721)
						{
							UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1218098620);
							bVar2 = true;
						}
						if (vVar5.z == 1400745903)
						{
							UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1218098620);
							bVar1 = true;
						}
					}
					break;
				case -445432096:
					if (vVar5.y == Global_1572887->f_248.f_85)
					{
						Global_1572887->f_248.f_85 = 0;
						bVar3 = true;
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1218098620);
					}
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(-1218098620);
	}
	iVar9 = (MISC::GET_GAME_TIMER() - Global_1572887->f_248.f_91);
	bVar4 = (iVar9 > Global_1901929->f_1.f_18 && Global_1572887->f_248.f_91 != -1);
	if ((((bVar4 || bVar0) || bVar1) || bVar2) || bVar3)
	{
		aggregate_func_6625(3);
		if (func_256(256) || func_256(512))
		{
			if (bVar0)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				aggregate_func_8450(1, 0, 0, 0, 1);
				aggregate_func_7218(8);
				if (func_256(512))
				{
					aggregate_func_7218(1024);
				}
			}
			else if ((bVar1 || bVar3) || bVar4)
			{
				aggregate_func_7218(16);
				aggregate_func_7218(2);
			}
		}
		else if (((((((((func_256(131072) || func_256(262144)) || func_256(524288)) || func_256(1048576)) || func_256(2097152)) || func_256(4194304)) || func_256(8388608)) || func_256(16777216)) || func_256(33554432)) || func_256(67108864))
		{
			if (bVar0)
			{
				aggregate_func_7218(16);
				aggregate_func_7218(2);
			}
		}
		else if (func_256(536870912))
		{
			if (bVar0)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				aggregate_func_8450(1, 0, 0, 0, 1);
				aggregate_func_7218(8);
			}
		}
	}
}

void func_163()
{
	int iVar0;

	if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		if ((aggregate_func_4497(255) && !(CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())) && !aggregate_func_7376(255))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
	}
	if (Global_1572887->f_248.f_85 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1572887->f_248.f_85);
	}
	if (Global_1572887->f_248.f_66 != -1)
	{
		iVar0 = (27200000 + Global_1572887->f_248.f_66);
		NETWORK::_0xA4484173759749B1();
		NETWORK::_0x966DD84FB6A46017();
		GRAPHICS::RESET_PAUSED_RENDERPHASES();
		SCRIPTS::_0xBC2C927F5C264243(iVar0);
	}
	AUDIO::_0x2E399EAFBEEA74D5();
	Global_1572887->f_248.f_65 = Global_1572887->f_248.f_64;
	Global_1572887->f_248.f_87 = Global_1572887->f_248.f_86;
	Global_1572887->f_248.f_85 = 0;
	Global_1572887->f_248.f_64 = 0;
	Global_1572887->f_248.f_88 = 0;
	Global_1572887->f_248.f_86 = 0;
	Global_1572887->f_248.f_66 = -1;
	Global_1572887->f_248.f_91 = -1;
	aggregate_func_6625(0);
}

void func_165()
{
	struct<7> Var0[2];

	*(Var0[0 /*7*/]) = { Global_1572887->f_248.f_12 };
	*(Var0[1 /*7*/]) = { Global_1572887->f_248.f_12.f_7 };
	Global_1572887->f_248.f_83 = NETWORK::_0xD66C9E72B3CC4982(&Var0, 2);
}

int func_166()
{
	struct<8> Var0[2];
	int iVar17;
	char* sVar18;
	char* sVar19;
	char* sVar20;
	char* sVar21;

	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		iVar17 = 0;
		if (!NETWORK::_0x7FEE4F07C54B6B3C(&(Global_1572887->f_248.f_12), Var0[0 /*8*/]))
		{
			iVar17 = -1;
		}
		else if (!NETWORK::_0x7FEE4F07C54B6B3C(&(Global_1572887->f_248.f_12.f_7), Var0[1 /*8*/]))
		{
			iVar17 = -1;
		}
	}
	else
	{
		iVar17 = NETWORK::_0x58CC181719256197(Global_1572887->f_248.f_83, &Var0, 2);
	}
	if (iVar17 == -1)
	{
		return 2;
	}
	else if (iVar17 == 1)
	{
		return 0;
	}
	sVar18 = aggregate_func_1524(Var0[0 /*8*/], joaat("COLOR_PURE_WHITE"));
	sVar19 = aggregate_func_1524(Var0[1 /*8*/], joaat("COLOR_PURE_WHITE"));
	sVar20 = sVar19;
	sVar21 = "";
	if (Global_1572887->f_248.f_2 == 0 || Global_1572887->f_248.f_2 == 1)
	{
		if (aggregate_func_4240(Global_1572887->f_248.f_28.f_16, 2))
		{
			sVar21 = MISC::_CREATE_VAR_STRING(10, "NT_INV_JOIN_EXTENDED", sVar18);
		}
		else
		{
			sVar21 = MISC::_CREATE_VAR_STRING(10, "NT_INV_EXTENDED", sVar18);
		}
	}
	else if (Global_1572887->f_248.f_2 == 2 || Global_1572887->f_248.f_2 == 3)
	{
		if (aggregate_func_4240(Global_1572887->f_248.f_3.f_8, 2))
		{
			sVar21 = MISC::_CREATE_VAR_STRING(10, "NT_INV_JOIN_EXTENDED", sVar18);
		}
		else
		{
			sVar21 = MISC::_CREATE_VAR_STRING(10, "NT_INV_EXTENDED", sVar18);
		}
	}
	else if (Global_1572887->f_248.f_2 == 4)
	{
		if (aggregate_func_4240(Global_1572887->f_248.f_12.f_15, 2))
		{
			sVar21 = MISC::_CREATE_VAR_STRING(10, "NT_INV_JOIN_EXTENDED", sVar18);
		}
		else
		{
			sVar21 = MISC::_CREATE_VAR_STRING(10, "NT_INV_EXTENDED", sVar18);
		}
	}
	else
	{
		sVar21 = MISC::_CREATE_VAR_STRING(10, "NT_INV_EXTENDED", sVar18);
	}
	aggregate_func_2903(sVar20, sVar21, joaat("blips"), 1183081869, 8000, 0, 0, 1, 0, 1, 1);
	return 1;
}

void func_167()
{
	NETWORK::_0xA4484173759749B1();
	aggregate_func_3304(1);
	aggregate_func_4093(0);
	aggregate_func_8631();
	if (Global_1572887->f_248.f_85 != 0)
	{
		_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1572887->f_248.f_85);
	}
	Global_1572887->f_248.f_84 = 0;
	Global_1572887->f_248.f_86 = 0;
	Global_1572887->f_248.f_87 = 0;
	Global_1572887->f_248.f_88 = 0;
	Global_1572887->f_248.f_89 = 0;
	Global_1572887->f_248.f_90 = 0;
	Global_1572887->f_248.f_91 = -1;
}

void func_168()
{
	bool bVar0;

	aggregate_func_3907();
	aggregate_func_6704(2);
	if (((func_267(Global_1572887->f_248.f_28, 131072) || func_268(64)) || func_268(128)) || Global_1572887->f_248.f_2 == 5)
	{
		aggregate_func_7218(8);
		return;
	}
	if (aggregate_func_4981())
	{
		func_270(536870912);
		return;
	}
	if ((Global_1273882->f_14 && _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15) != Global_1273882->f_10) && Global_1572887->f_248.f_2 != 4)
	{
		func_270(512);
		return;
	}
	if ((aggregate_func_7191() || aggregate_func_6688()) && Global_1572887->f_248.f_2 != 4)
	{
		func_270(256);
		return;
	}
	if (func_273() == 2)
	{
		bVar0 = true;
	}
	if (!func_274(bVar0))
	{
		return;
	}
	Global_1572887->f_248.f_86 = 0;
	Global_1572887->f_248.f_87 = 0;
	aggregate_func_7218(8);
}

void func_169()
{
	if (func_275(1))
	{
		aggregate_func_6704(23);
	}
	if (func_268(16))
	{
		aggregate_func_6704(23);
		return;
	}
	if (!func_268(8))
	{
		return;
	}
	if (!func_276())
	{
		return;
	}
	if (func_268(1024))
	{
		aggregate_func_346(1);
	}
	aggregate_func_9139();
	if (aggregate_func_4251() == -1)
	{
		aggregate_func_6704(8);
		return;
	}
	aggregate_func_3877();
	aggregate_func_6704(3);
}

void func_170()
{
	if (Global_1572887->f_248.f_84 != 0)
	{
		aggregate_func_7218(4);
		aggregate_func_2408();
		aggregate_func_6704(23);
		return;
	}
	if (CAM::IS_SCREEN_FADED_IN() && !aggregate_func_4913())
	{
		if (func_268(8192) && aggregate_func_1911())
		{
			aggregate_func_7218(8192);
			aggregate_func_1579(1, 1, 0, 0, 0, 0, 0, 0, 1);
		}
		else
		{
			aggregate_func_1579(1, 1, 0, 0, 0, 0, 1, 1, 0);
		}
		aggregate_func_6704(4);
		return;
	}
	if (aggregate_func_4946())
	{
		aggregate_func_4309(17);
	}
	else
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
		aggregate_func_2063(0, 5);
	}
	aggregate_func_6704(5);
}

void func_171()
{
	if (Global_1572887->f_248.f_84 != 0)
	{
		aggregate_func_7218(4);
		aggregate_func_2408();
		aggregate_func_6704(23);
		return;
	}
	if (!aggregate_func_7807() && !aggregate_func_4065())
	{
		return;
	}
	aggregate_func_6704(5);
}

void func_172()
{
	if (Global_1572887->f_248.f_84 != 0)
	{
		aggregate_func_7218(4);
		aggregate_func_2408();
		aggregate_func_6704(23);
		return;
	}
	aggregate_func_3307(1);
	if (aggregate_func_4337(0))
	{
		aggregate_func_3003(aggregate_func_4894(), 0);
	}
	aggregate_func_1095();
	aggregate_func_6704(6);
}

void func_173()
{
	struct<22> Var0;
	struct<4> Var22;

	if (Global_1572887->f_248.f_84 != 0)
	{
		aggregate_func_7218(4);
		aggregate_func_6704(23);
		return;
	}
	if (&Global_1572887 != 39)
	{
		return;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_3 = -1;
	Var22.f_3.f_1 = -1;
	if (!func_268(128))
	{
		switch (Global_1572887->f_248.f_2)
		{
			case 2:
			case 3:
				Global_1572887->f_248.f_1 = NETWORK::_0x9BCF28FB5D65A9BE();
				if (!NETWORK::_0x3B82ACC3F4B6240C())
				{
					Global_1572887->f_248.f_1 = -1;
					aggregate_func_6704(23);
					return;
				}
				break;
			case 0:
				Var0 = { func_294() };
				NETWORK::_0xC0CFFDA87C2C163D(NETWORK::_0x27B1AE4D8C652F08(Var0.f_15), &Var22, 11);
				aggregate_func_7835(&Var22);
				Global_1572887->f_248.f_1 = NETWORK::_0x6C27442A225A241A(NETWORK::_0x27B1AE4D8C652F08(Var0.f_15));
				if (!NETWORK::_0xB2CEA5105AAC8DDE(NETWORK::_0x27B1AE4D8C652F08(Var0.f_15)))
				{
					Global_1572887->f_248.f_1 = -1;
					aggregate_func_6704(23);
					return;
				}
				break;
			case 1:
				Global_1572887->f_248.f_1 = NETWORK::_0xE483BB6BE686F632(&(Global_1572887->f_248.f_28));
				if (Global_1572887->f_248.f_1 == -1)
				{
					aggregate_func_6704(23);
					return;
				}
				break;
		}
	}
	else
	{
		aggregate_func_6625(0);
	}
	if (NETWORK::_0xF0C0C94B404206FA() != 1)
	{
		aggregate_func_7218(2048);
	}
	func_296();
	aggregate_func_3907();
	aggregate_func_6704(7);
}

void func_174()
{
	if (!func_297())
	{
		aggregate_func_6704(23);
		return;
	}
	func_298();
	aggregate_func_6704(11);
}

void func_175()
{
	struct<22> Var0;

	if (!aggregate_func_4683())
	{
		return;
	}
	if (func_273() == 2 || func_273() == 3)
	{
		NETWORK::_0x3B82ACC3F4B6240C();
	}
	else if (func_273() == 0 || func_273() == 1)
	{
		Var0 = { func_294() };
		NETWORK::_0xB2CEA5105AAC8DDE(NETWORK::_0x27B1AE4D8C652F08(Var0.f_15));
	}
	aggregate_func_6704(7);
}

void func_176()
{
	if (!func_297())
	{
		aggregate_func_7218(4);
		aggregate_func_6704(23);
		return;
	}
	func_300();
	if (func_273() == 4 && SCRIPTS::IS_THREAD_ACTIVE(Global_265331->f_124671, false))
	{
		aggregate_func_1579(1, 0, 0, 1, 0, 0, 0, 0, 0);
	}
	aggregate_func_828(0);
	NETWORK::_0xC505036A35AFD01B(true);
	aggregate_func_3907();
	aggregate_func_6704(9);
}

void func_177()
{
	int iVar0;

	iVar0 = func_301();
	if (iVar0 == 1)
	{
		aggregate_func_6704(10);
	}
	else if (iVar0 == 2)
	{
		NETWORK::_0xC505036A35AFD01B(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		if (Global_1572887->f_248.f_87 == 15 || Global_1572887->f_248.f_86 == 15)
		{
			func_270(1073741824 /* Float: 2f */);
		}
		aggregate_func_7218(4);
		aggregate_func_6704(23);
	}
}

void func_178()
{
	aggregate_func_3907();
	aggregate_func_2015(0, 0, 0, 1);
	NETWORK::_0x236905C700FDB54D();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())) || !aggregate_func_4367(255))
		{
			aggregate_func_5070(1);
			aggregate_func_7218(4096);
		}
	}
	if (aggregate_func_4685(9))
	{
		aggregate_func_5070(1);
	}
	func_300();
	aggregate_func_6704(13);
	aggregate_func_3305(1, 0, 0);
}

void func_179()
{
	NETWORK::_0x236905C700FDB54D();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
	}
	aggregate_func_3907();
	aggregate_func_6704(17);
}

void func_180()
{
	int iVar0;

	if (!PED::_0xA911EE21EDF69DAF(Global_1273882->f_8) && !aggregate_func_927(Global_1273882->f_8, -208384378))
	{
		aggregate_func_6704(14);
	}
	else if (PED::_0xA911EE21EDF69DAF(Global_35) && !aggregate_func_927(Global_35, -208384378))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(Global_1273882->f_8);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			TASK::CLEAR_PED_TASKS(Global_1273882->f_8, 1, 0);
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_1273882->f_8, iVar0, Global_1273882->f_17, 1073741824 /* Float: 2f */, 9);
		}
	}
}

void func_181()
{
	aggregate_func_3907();
	aggregate_func_3878();
	aggregate_func_6704(15);
}

void func_182()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	if (aggregate_func_8451())
	{
		aggregate_func_3907();
		aggregate_func_512();
		aggregate_func_6704(16);
	}
	else if (func_275(0))
	{
		func_270(2048);
		aggregate_func_6704(23);
	}
}

void func_183()
{
	int iVar0;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	if (func_275(0))
	{
		func_270(4096);
		NETWORK::_0xC505036A35AFD01B(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		aggregate_func_7218(4);
		aggregate_func_6704(23);
	}
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(Global_1273882->f_8, 501393341, 1);
	if (iVar0 == 0 || iVar0 == 1)
	{
		return;
	}
	if (PED::IS_PED_ON_MOUNT(Global_1273882->f_8))
	{
		aggregate_func_1095();
		return;
	}
	aggregate_func_846("InviteFlow", 0, 0, 1);
	aggregate_func_7300();
	func_313();
	aggregate_func_6704(18);
}

void func_184()
{
	struct<7> Var0;
	struct<7> Var22;
	struct<7> Var31;
	struct<7> Var47;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	aggregate_func_512();
	if (func_275(0))
	{
		func_270(8192);
		func_314();
		return;
	}
	Var0 = { func_294() };
	Var22 = { func_315() };
	Var31 = { func_316() };
	switch (func_273())
	{
		case 0:
			Var47 = { Var0 };
			break;
		case 1:
			Var47 = { Var0 };
			break;
		case 2:
			Var47 = { Var22 };
			break;
		case 3:
			Var47 = { Var22 };
			break;
		case 4:
			Var47 = { Var31 };
			break;
		case 5:
			Var47 = { Var0 };
			break;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var47))
	{
		return;
	}
	aggregate_func_3907();
	aggregate_func_6704(19);
}

void func_185()
{
	struct<7> Var0;
	struct<7> Var22;
	struct<7> Var31;
	struct<7> Var47;
	int iVar54;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	aggregate_func_512();
	if (func_275(0))
	{
		func_270(16384);
		NETWORK::_0xC505036A35AFD01B(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		aggregate_func_7218(4);
		aggregate_func_6704(23);
	}
	Var0 = { func_294() };
	Var22 = { func_315() };
	Var31 = { func_316() };
	switch (func_273())
	{
		case 0:
			Var47 = { Var0 };
			break;
		case 1:
			Var47 = { Var0 };
			break;
		case 2:
			Var47 = { Var22 };
			break;
		case 3:
			Var47 = { Var22 };
			break;
		case 4:
			Var47 = { Var31 };
			break;
		case 5:
			Var47 = { Var0 };
			break;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var47))
	{
		func_270(8);
		func_317();
		aggregate_func_7218(2);
		NETWORK::_0xC505036A35AFD01B(false);
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		aggregate_func_7218(4);
		aggregate_func_6704(23);
	}
	iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var47);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar54))
	{
		return;
	}
	aggregate_func_6625(iVar54);
	NETWORK::_0x5A91BCEF74944E93(iVar54, 30f);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar54))
	{
		return;
	}
	aggregate_func_3907();
	aggregate_func_6704(20);
}

void func_186()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	aggregate_func_512();
	if ((aggregate_func_6548() && aggregate_func_7159()) && (aggregate_func_6969(255) > 0 && func_321() > -1))
	{
		aggregate_func_6704(22);
	}
}

void func_187()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	NETWORK::_0x236905C700FDB54D();
	POPULATION::_0xF45E46DEECF7DF6E(0, 0, 0, -1, -1);
	aggregate_func_512();
	if (func_275(0))
	{
		func_270(32768);
		aggregate_func_6704(23);
	}
	if (((CAM::IS_SCREEN_FADED_IN() && !SCRIPTS::_IS_LOADING_SCREEN_ACTIVE()) && !aggregate_func_4761()) && !aggregate_func_4913())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		aggregate_func_8450(1, 0, 0, 0, 0);
	}
	iVar0 = Global_1572887->f_248.f_61;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_270(16);
		aggregate_func_7065(1);
		func_317();
		aggregate_func_7218(2);
		aggregate_func_7218(4);
		aggregate_func_6704(23);
	}
	if (aggregate_func_6969(iVar0) == 0)
	{
		return;
	}
	if (func_324() != 2 && aggregate_func_4497(255))
	{
		return;
	}
	bVar1 = aggregate_func_5368();
	iVar2 = func_326();
	if (iVar2 == 1)
	{
		func_327();
		UIAPPS::_CLOSE_ALL_APPS();
		aggregate_func_7218(32);
		aggregate_func_7218(2);
		aggregate_func_5122(16384);
		aggregate_func_6704(23);
		if (func_329())
		{
			aggregate_func_5070(1);
			aggregate_func_7242(1);
			aggregate_func_7380(1);
		}
		if (bVar1)
		{
			func_332(iVar0, bVar1);
		}
		return;
	}
	else if (iVar2 == 0)
	{
		aggregate_func_5070(1);
		return;
	}
	else if ((iVar2 == 2 && NETWORK::_0xF0C0C94B404206FA() == 4) && !func_268(4))
	{
		func_270(134217728);
		aggregate_func_7218(4);
		return;
	}
	if (aggregate_func_8451())
	{
		aggregate_func_3304(1);
		return;
	}
	if (!aggregate_func_4240(Global_1572887->f_248.f_90, 8) || bVar1)
	{
		func_332(iVar0, bVar1);
	}
	if (!func_333())
	{
		return;
	}
	if (func_268(256))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), false, false, true, true);
	}
	if (func_268(4096))
	{
		aggregate_func_5070(0);
	}
	if (aggregate_func_4761() || aggregate_func_8032(1))
	{
		aggregate_func_6352(512);
	}
	if (aggregate_func_4913())
	{
		aggregate_func_8450(1, 0, 0, 0, 1);
		Global_1070355->f_27136.f_62.f_36 = 1;
	}
	UIAPPS::_CLOSE_ALL_APPS();
	aggregate_func_7218(2);
	aggregate_func_6704(23);
}

void func_188()
{
	int iVar0;

	NETWORK::_0x236905C700FDB54D();
	aggregate_func_512();
	if (func_268(4))
	{
		if (Global_1572887->f_248.f_84 != 0)
		{
			return;
		}
		if (aggregate_func_4761())
		{
			aggregate_func_6352(32768);
		}
		if (func_336())
		{
			if (!Global_1273882->f_14 || Global_1273882->f_16 == &Global_1273882)
			{
				aggregate_func_7810(0, 3, 0);
				aggregate_func_7218(2);
				aggregate_func_7065(0);
				aggregate_func_748(1, 1);
			}
			else
			{
				aggregate_func_7810(0, 129, 0);
				aggregate_func_7218(2);
				aggregate_func_7065(0);
				aggregate_func_748(1, 1);
			}
			if ((!func_268(2) && !aggregate_func_4497(255)) && !(CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
			{
				CAM::DO_SCREEN_FADE_IN(0);
			}
		}
		else if (aggregate_func_4251() == 0)
		{
			iVar0 = 45;
			if (func_268(512) || func_268(16384))
			{
				iVar0 = 0;
			}
			if (func_324() == 0 || func_324() == 1)
			{
				aggregate_func_7013(iVar0, -1);
			}
			else if (func_324() == 2)
			{
				if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4) && SCRIPTS::IS_THREAD_ACTIVE(Global_265331->f_124671, false))
				{
					aggregate_func_7013(iVar0, -1);
				}
			}
		}
	}
	if (!func_268(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
	{
		if (aggregate_func_4497(255))
		{
			return;
		}
		else if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			aggregate_func_7065(0);
			aggregate_func_748(1, 1);
		}
		else
		{
			func_329();
		}
	}
	if (SCRIPTS::_IS_LOADING_SCREEN_ACTIVE())
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !aggregate_func_4761())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	}
	if (Global_1572887->f_248.f_2 == 2 || Global_1572887->f_248.f_2 == 3)
	{
		NETWORK::_0xA4484173759749B1();
	}
	if (!func_268(32))
	{
		if (!aggregate_func_4296(0, 255) && aggregate_func_4346(255) == 1)
		{
			aggregate_func_1579(0, 1, 0, 0, 0, 0, 0, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
		}
		else if (!func_268(2))
		{
			aggregate_func_7065(1);
			func_341(1);
		}
	}
	if (!aggregate_func_4296(22, 255))
	{
		aggregate_func_7071();
	}
	if (!func_268(8))
	{
		aggregate_func_4309(24);
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
	aggregate_func_2064(0, 5, 0);
	AUDIO::_0x2E399EAFBEEA74D5();
	aggregate_func_3896(0);
	func_345();
	aggregate_func_4580();
	aggregate_func_6625(2);
	aggregate_func_8631();
}

char* func_190(char* sParam0, int iParam1)
{
	struct<16> Var0;
	struct<7> Var16;
	int iVar23;
	char* sVar24;

	sVar24 = "";
	switch (iParam1)
	{
		case 8:
		case 16:
		case 17:
		case 20:
			switch (aggregate_func_347(&Var0, sParam0->f_48, 1))
			{
				case 1:
					return sVar24;
				case 2:
					if (!aggregate_func_4260(&(sParam0->f_53)) || (aggregate_func_4732(&(sParam0->f_53)) > 500 && aggregate_func_5988() == 0))
					{
						aggregate_func_3715(sParam0->f_48);
						aggregate_func_4293(&(sParam0->f_53), 1);
					}
					return sVar24;
				case 3:
					return sVar24;
				case 4:
					sVar24 = aggregate_func_1976(Var0);
					return sVar24;
				default:
					break;
			}
			break;
		case 1:
			iVar23 = NETWORK::_0x27B1AE4D8C652F08(sParam0->f_11);
			NETWORK::_0x16EFB123C4451032(iVar23, &Var16);
			if (!aggregate_func_3096(Var16))
			{
				return sVar24;
			}
			sVar24 = NETWORK::_0xB5C4B18B12A2AF23(&Var16, 0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar24))
			{
				return sVar24;
			}
			return sVar24;
	}
	return sVar24;
}

void func_191(char* sParam0, char[4] cParam1, bool bParam2)
{
	struct<53> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = joaat("COLOR_WHITE");
	Var0.f_19 = joaat("COLOR_WHITE");
	Var0.f_23 = 300;
	Var0.f_31.f_8 = joaat("COLOR_WHITE");
	Var0.f_31.f_11 = joaat("COLOR_WHITE");
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = 1433015236;
	Var0.f_31.f_21 = 1;
	switch (sParam0->f_63)
	{
		case 8:
		case 16:
		case 17:
		case 20:
			if (Global_1070355->f_14 >= 10)
			{
				return;
			}
			func_356(sParam0, &Var0, sParam0->f_63, cParam1, bParam2);
			*(Global_1070355->f_14.f_5[Global_1070355->f_14 /*35*/]) = { sParam0->f_12 };
			Global_1070355->f_14++;
			break;
		case 1:
			func_357(sParam0, &Var0, cParam1, bParam2);
			break;
	}
	Global_1070355->f_14.f_2.f_1 = aggregate_func_201(Var0);
	sParam0->f_60 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1070355->f_14.f_2.f_1, aggregate_func_4915(91));
	func_360(sParam0, Global_1070355->f_14.f_2.f_1);
	if (aggregate_func_9188(&(sParam0->f_12)))
	{
		aggregate_func_9189(&(sParam0->f_12), Global_1070355->f_14);
	}
	if (aggregate_func_8043(&(sParam0->f_12)))
	{
		if (NETWORK::_0x255A5EF65EDA9167(sParam0->f_12.f_16.f_14) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(sParam0->f_12.f_16.f_14))
		{
			NETWORK::_0x5A91BCEF74944E93(sParam0->f_12.f_16.f_14, 30f);
		}
	}
}

bool func_194(int iParam0)
{
	if (iParam0 >= 31 || iParam0 <= 0)
	{
		return true;
	}
	return Global_1901797[iParam0] >= 1;
}

void func_195(int iParam0)
{
	int iVar0;

	if (iParam0 >= 0)
	{
		(*Global_1900856)[iParam0 /*47*/] = 0;
		((*Global_1900856)[iParam0 /*47*/])->f_1 = 0;
		StringCopy(&(((*Global_1900856)[iParam0 /*47*/])->f_2), "", 24);
		StringCopy(&(((*Global_1900856)[iParam0 /*47*/])->f_18), "", 24);
		StringCopy(&(((*Global_1900856)[iParam0 /*47*/])->f_21), "", 24);
		StringCopy(&(((*Global_1900856)[iParam0 /*47*/])->f_24), "", 24);
		StringCopy(&(((*Global_1900856)[iParam0 /*47*/])->f_27), "", 24);
		StringCopy(&(((*Global_1900856)[iParam0 /*47*/])->f_30), "", 128);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			StringCopy(((*Global_1900856)[iParam0 /*47*/])->f_5[iVar0 /*3*/], "", 24);
			iVar0++;
		}
	}
}

void func_197(struct<47> Param0, int iParam47)
{
	struct<7> Var0;
	int iVar7;

	if (!func_364(Param0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_18)) || MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_21)))
	{
		return;
	}
	MISC::_0xCC7FC854B956A128(&(Param0.f_18), &(Param0.f_21));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_2)))
	{
		MISC::_0x9935F76407C32539(&(Param0.f_2));
	}
	if (Param0.f_46)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_24)) && !MISC::IS_STRING_NULL_OR_EMPTY(Param0.f_5[0 /*3*/]))
		{
			MISC::_0x91D657230BC208D2(Param0.f_5[0 /*3*/], &(Param0.f_24));
			Var0 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
			if (aggregate_func_3096(Var0))
			{
				MISC::_0xAF530E56505D1BD6(&Var0);
			}
		}
		iVar7 = 1;
		while (iVar7 <= 3)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Param0.f_5[iVar7 /*3*/]))
			{
				MISC::_0x1694A053DFB61A34(Param0.f_5[iVar7 /*3*/]);
			}
			iVar7++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_30)))
	{
		MISC::_0xFF252E2BAFB7330F(&(Param0.f_30));
	}
	MISC::_0xB16FC7B364D86585();
	func_195(iParam47);
	(*Global_1901797)[Param0] = Global_1901797[Param0] + 1;
}

bool func_202()
{
	return Global_1572887->f_248.f_91 != -1;
}

void func_204(int iParam0)
{
	aggregate_func_4241(&(Global_1572887->f_387.f_1), aggregate_func_7738(iParam0));
}

int func_205()
{
	return (MISC::GET_GAME_TIMER() - vLocal_31.y);
}

char* func_206(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case joaat("mode"):
			sVar0 = "mode";
			break;
		case -763890493:
			sVar0 = "state_id";
			break;
		case -1926951471:
			sVar0 = "district_id";
			break;
		case 82543689:
			sVar0 = "region_id";
			break;
		case -875643756:
			sVar0 = "minigame_id";
			break;
		case 64789430:
			sVar0 = "series_id";
			break;
		case 735882532:
			sVar0 = "mission_id";
			break;
		case joaat("p_fav01_grass_06_268"):
			sVar0 = "char_slot";
			break;
		case -730035725:
			sVar0 = "arg_0";
			break;
		case -503077631:
			sVar0 = "arg_1";
			break;
		case 1860157115:
			sVar0 = "arg_2";
			break;
		case 2091932252:
			sVar0 = "arg_3";
			break;
		case -1955432480:
			sVar0 = "arg_4";
			break;
		case -1725164717:
			sVar0 = "arg_5";
			break;
		case 1056268003:
			sVar0 = "arg_6";
			break;
		case 1286208076:
			sVar0 = "arg_7";
			break;
		case 1529091912:
			sVar0 = "arg_8";
			break;
		case 1762505499:
			sVar0 = "arg_9";
			break;
		case -1723987907:
			sVar0 = "launchPreset";
			break;
		case -1590500238:
			sVar0 = "launchGender";
			break;
	}
	return sVar0;
}

void func_207(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

int func_210(int iParam0)
{
	switch (iParam0)
	{
		case -221059932: /* GXTEntry: "Ambarino" */
			return 0;
		case 10837344: /* GXTEntry: "Lemoyne" */
			return 1;
		case 2045157995:
			return 2;
		case -1289136221:
			return 3;
		case 1246494439:
			return 4;
		case 1935063277: /* GXTEntry: "Guarma" */
			return 5;
		default:
			break;
	}
	return -1;
}

void func_216(var uParam0, char* sParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".x", 64);
	_NAMESPACE59::_0x35DEFECAE36D4FAE(uParam0, &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".y", 64);
	_NAMESPACE59::_0x35DEFECAE36D4FAE(&(uParam0->f_1), &cVar0);
	StringCopy(&cVar0, sParam1, 64);
	StringConCat(&cVar0, ".z", 64);
	_NAMESPACE59::_0x35DEFECAE36D4FAE(&(uParam0->f_2), &cVar0);
}

void func_217(var uParam0)
{
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 10, "psna_sCamp");
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 3, "psna_sCampLocation");
	_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0, "psna_sCampiSize");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_1), "psna_sCampeDistrict");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_2), "psna_sCampeLocation");
	_NAMESPACE59::_0xE0B45E983BFC0768();
	_NAMESPACE59::_0x443174C20B8B9E7F(&(uParam0->f_3), 7, "psna_sCampRecharge");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_3), "psna_sCampRechargeYear");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_1), "psna_sCampRechargeMonth");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_2), "psna_sCampRechargeDay");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_3), "psna_sCampRechargeHour");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_4), "psna_sCampRechargeMinute");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_5), "psna_sCampRechargeSecond");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_3.f_6), "psna_sCampRechargeMilliseconds");
	_NAMESPACE59::_0xE0B45E983BFC0768();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_218(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char cVar9[64];
	struct<8> Var17;
	struct<8> Var25;

	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 47, "psna_sPosse");
	_NAMESPACE59::_0x4845E7E7643A908C(uParam0, "psna_sPosse_txtGamertag");
	_NAMESPACE59::_0x529B9CCD0972AF4E(&(uParam0->f_4), "psna_sPosse_iLastPosseID");
	_NAMESPACE59::_0xBB7F4273C186BC4B(&(uParam0->f_5), "psna_sPosse_bPreferOpen");
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_6), 41, "psna_sPosse_sPosseDataArray");
	StringCopy(&cVar9, "psna_sPosse_data_", 64);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Var1 = { cVar9 };
		StringIntConCat(&Var1, iVar0, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F(uParam0->f_6[iVar0 /*8*/], 8, &Var1);
		Var17 = { Var1 };
		StringConCat(&Var17, "_iPosseID", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4E(uParam0->f_6[iVar0 /*8*/], &Var17);
		Var17 = { Var1 };
		StringConCat(&Var17, "_sPosseLock", 64);
		_NAMESPACE59::_0x443174C20B8B9E7F(&((uParam0->f_6[iVar0 /*8*/])->f_1), 7, &Var17);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Year", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Month", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_1.f_1), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Day", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_1.f_2), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Hour", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_1.f_3), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Minute", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_1.f_4), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Second", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_1.f_5), &Var25);
		Var25 = { Var17 };
		StringConCat(&Var25, "_Milliseconds", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_6[iVar0 /*8*/])->f_1.f_6), &Var25);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		_NAMESPACE59::_0xE0B45E983BFC0768();
		StringCopy(&Var17, "", 64);
		StringCopy(&Var25, "", 64);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_219(var uParam0)
{
	int iVar0;
	char cVar1[64];

	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 583, "nssd_sStable_Data");
	func_368(uParam0);
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_41), 541, "nssd_sStableBonding_array");
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		StringCopy(&cVar1, "nssd_sStableBonding_array_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		func_369(uParam0->f_41[iVar0 /*54*/], &cVar1);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_582), "nssd_eSavedSystemFlags");
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_220(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char cVar9[64];

	StringCopy(&cVar9, "psna_sClothes", 64);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 1791, &cVar9);
	Var1 = { cVar9 };
	StringConCat(&Var1, "PortableWardrobe", 64);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 32, &Var1);
	func_370(uParam0, Var1);
	_NAMESPACE59::_0xE0B45E983BFC0768();
	StringCopy(&Var1, "psna_sClothes_OutfitList", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_32), 1321, &Var1);
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		func_371(uParam0->f_32[iVar0 /*120*/], Var1, iVar0);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	StringCopy(&Var1, "psna_sClothes_HeadOverlay", 64);
	func_372(&(uParam0->f_1353), Var1);
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_1733), "psna_sClothes_SystemFlags");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_1734), "psna_sClothes_PlayerType");
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_1735), 40, "psna_sClothes_fExpressions");
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Var1 = { cVar9 };
		StringConCat(&Var1, "_fExpression", 64);
		StringIntConCat(&Var1, iVar0, 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(uParam0->f_1735[iVar0], &Var1);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0x35DEFECAE36D4FAE(&(uParam0->f_1775), "psna_sClothes_fEyeRedness");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1776), "psna_sClothes_iCurOutfit");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1777), "psna_sClothes_iWhistleStyle");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1778), "psna_sClothes_iWhistlePitch");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1779), "psna_sClothes_iWhistleClarity");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1780), "psna_sClothes_iDeathsWithPomade");
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_1781), "psna_sClothes_ePomadeLifetime");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1782), "psna_sClothes_iPreferredWalkStyle");
	_NAMESPACE59::_0x186608A2AC6F9E88(&(uParam0->f_1783), "psna_sClothes_tlPlayerSaveName");
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_221(var uParam0)
{
	int iVar0;
	struct<8> Var1;
	char cVar9[64];

	StringCopy(&cVar9, "psna_sAbandonedLoot", 64);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 3, &cVar9);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 3, &Var1);
	Var1 = { cVar9 };
	StringIntConCat(&Var1, iVar0, 64);
	func_373((*uParam0)[0 /*2*/], Var1);
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_222(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	struct<8> Var10;
	char cVar18[64];

	StringCopy(&cVar18, "psna_sRpg", 64);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 42, &cVar18);
	StringConCat(&cVar18, "psna_sAttributeData", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 24, &cVar18);
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		Var2 = { cVar18 };
		StringIntConCat(&Var2, iVar0, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F((*uParam0)[iVar0], 1, &Var2);
		StringConCat(&Var2, "fAttributeXP", 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE((*uParam0)[iVar0], &Var2);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	StringCopy(&cVar18, "psna_sRpg", 64);
	StringConCat(&cVar18, "psna_sAttributeCoreData", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_24), 10, &cVar18);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Var2 = { cVar18 };
		StringIntConCat(&Var2, iVar0, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F(uParam0->f_24[iVar0 /*3*/], 3, &Var2);
		Var10 = { Var2 };
		StringConCat(&Var10, "fCoreValue", 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(uParam0->f_24[iVar0 /*3*/], &Var10);
		Var10 = { Var2 };
		StringConCat(&Var10, "todDegradeLastFixed", 64);
		_NAMESPACE59::_0xB25B5A375BE5BE26(&((uParam0->f_24[iVar0 /*3*/])->f_1), &Var10);
		Var10 = { Var2 };
		StringConCat(&Var10, "iDegradeCount", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_24[iVar0 /*3*/])->f_2), &Var10);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	StringCopy(&cVar18, "psna_sRpg", 64);
	StringConCat(&cVar18, "psna_sAttributeOverpoweredTime", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_34), 7, &cVar18);
	iVar1 = 0;
	while (iVar1 < uParam0->f_34)
	{
		Var2 = { cVar18 };
		StringIntConCat(&Var2, iVar1, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F(uParam0->f_34[iVar1 /*2*/], 2, &Var2);
		Var10 = { Var2 };
		StringConCat(&Var10, "fTankTime", 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(uParam0->f_34[iVar1 /*2*/], &Var10);
		Var10 = { Var2 };
		StringConCat(&Var10, "fCoreTime", 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(&((uParam0->f_34[iVar1 /*2*/])->f_1), &Var10);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar1++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	StringCopy(&cVar18, "psna_sRpg", 64);
	StringConCat(&cVar18, "iTimesEatenFood", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_41), &cVar18);
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_223(var uParam0)
{
	char cVar0[64];
	struct<8> Var8;
	int iVar16;

	StringCopy(&cVar0, "essd_emotes", 64);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 29, &cVar0);
	StringConCat(&cVar0, ".sArr", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 29, &cVar0);
	iVar16 = 0;
	while (iVar16 <= (4 - 1))
	{
		Var8 = { cVar0 };
		StringConCat(&Var8, ".sCat", 64);
		StringIntConCat(&Var8, iVar16, 64);
		func_374((*uParam0)[iVar16 /*7*/], Var8);
		iVar16++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_225(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		DATAFILE::_DATAFILE_REGISTER_QUERY(*iParam0, iVar0, func_376(iVar0));
		iVar0++;
	}
}

bool func_227(int iParam0, int iParam1)
{
	bool bVar0;

	iParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(iParam0->f_1), iParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_228(int iParam0, int iParam1, char[4] cParam2)
{
	bool bVar0;

	iParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_STRING(cParam2, iParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_229(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	iParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_BOOL(bParam2, iParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_231(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	iParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_INT(iParam2, iParam0);
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_244(int iParam0)
{
	struct<22> Var0;
	int iVar22;
	struct<22> Var23;
	char* sVar45;
	struct<53> Var46;
	struct<4> Var99;
	int iVar110;
	int iVar111;
	int iVar112;
	char* sVar113;
	char* sVar114;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 22))
	{
		return;
	}
	if (aggregate_func_4251() != -1)
	{
		if (!aggregate_func_2820())
		{
			aggregate_func_7218(2);
			return;
		}
		if (Global_1070355->f_27249)
		{
			aggregate_func_7218(2);
			return;
		}
	}
	iVar22 = NETWORK::_0x27B1AE4D8C652F08(Var0.f_15);
	if (iVar22 == -1)
	{
		return;
	}
	if (aggregate_func_6953())
	{
		Var23 = { func_294() };
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var23, &Var0))
		{
			return;
		}
	}
	if (func_267(Var0, 131072))
	{
		func_381(Var0.f_15);
		aggregate_func_6625(0);
		aggregate_func_7218(8);
		aggregate_func_7566(0);
	}
	if ((func_267(Var0, 2048) && func_267(Var0, 32)) || aggregate_func_4477(255))
	{
		if (func_384())
		{
			Global_1572887->f_248.f_93 = 1;
		}
	}
	if (aggregate_func_4251() != -1)
	{
		if (func_385(Var0, 1))
		{
			return;
		}
	}
	sVar45 = aggregate_func_1524(NETWORK::_0xE59F4924BD3A718D(iVar22), 636925055);
	Var46 = 1;
	Var46.f_1 = 1;
	Var46.f_2 = joaat("COLOR_WHITE");
	Var46.f_4 = -1;
	Var46.f_5 = -1;
	Var46.f_6 = -1;
	Var46.f_10 = -1;
	Var46.f_11 = -1;
	Var46.f_12 = -1;
	Var46.f_18 = joaat("COLOR_WHITE");
	Var46.f_19 = joaat("COLOR_WHITE");
	Var46.f_23 = 300;
	Var46.f_31.f_8 = joaat("COLOR_WHITE");
	Var46.f_31.f_11 = joaat("COLOR_WHITE");
	Var46.f_31.f_12 = 8000;
	Var46.f_31.f_13 = 1511356879;
	Var46.f_31.f_15 = 1433015236;
	Var46.f_31.f_21 = 1;
	Var46.f_24 = 1;
	Var46.f_25 = Var0.f_15;
	Var46.f_16 = sVar45;
	Var46.f_20 = 1700592256;
	Var46.f_21 = 1434360011;
	Var46.f_30 = NETWORK::_0x9C725D149622BFDE(0);
	Var46.f_29 = "IB_GAMERCARD";
	Var46.f_28 = 2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var0.f_17)))
	{
		Var99.f_1 = -1;
		Var99.f_2 = -1;
		Var99.f_3 = -1;
		Var99.f_3.f_1 = -1;
		NETWORK::_0xC0CFFDA87C2C163D(iVar22, &Var99, 11);
		if (Var99 == 3)
		{
			iVar110 = aggregate_func_7813(Var99.f_3);
			Var46.f_17 = MISC::_CREATE_VAR_STRING(10, "NT_INV_RCV_BODY_INFO", aggregate_func_7814(aggregate_func_8473(iVar110)));
			Var46.f_31.f_3 = MISC::_CREATE_VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", aggregate_func_7814(aggregate_func_8473(iVar110)));
			Var46.f_31.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			Var46.f_17 = MISC::_CREATE_VAR_STRING(42, "NT_INV_BODY_INFO", aggregate_func_1524(&(Var0.f_7), joaat("COLOR_PURE_WHITE")), "LANDING_FREEROAM_TITLE");
			Var46.f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "NT_INV_FM_CONTENT");
			Var46.f_31.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
	}
	else if (aggregate_func_4251() != -1)
	{
		iVar111 = aggregate_func_6970(MISC::GET_HASH_KEY(&(Var0.f_17)));
		if (iVar111 != -1)
		{
			iVar112 = (Global_265331->f_4[iVar111 /*51*/])->f_29;
			if (iVar112 == -504335712)
			{
				sVar114 = aggregate_func_7886((Global_265331->f_4[iVar111 /*51*/])->f_31);
			}
			else if (iVar112 == 395262693)
			{
				sVar114 = aggregate_func_9485((Global_265331->f_4[iVar111 /*51*/])->f_31);
			}
			else if (iVar112 == -933924539)
			{
				sVar114 = aggregate_func_8733((Global_265331->f_4[iVar111 /*51*/])->f_31);
			}
			Var46.f_31.f_3 = MISC::_CREATE_VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", sVar114);
			sVar113 = MISC::_CREATE_VAR_STRING(2, sVar114);
			Var46.f_17 = MISC::_CREATE_VAR_STRING(10, "NT_INV_RCV_BODY_INFO", sVar113);
		}
	}
	else
	{
		Var46.f_17 = MISC::_CREATE_VAR_STRING(42, "NT_INV_BODY_INFO", aggregate_func_1524(&(Var0.f_7), joaat("COLOR_PURE_WHITE")), "PRES_SET_MODE_MP");
		Var46.f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "NT_INV_MP_PLAYER_JOIN");
	}
	Var46.f_31.f_2 = sVar45;
	Var46.f_31.f_6 = 1700592256;
	Var46.f_31.f_7 = 1434360011;
	Var46.f_31.f_17 = "HUD_Toast_Soundset";
	Var46.f_31.f_18 = "Toast_On";
	Var46.f_23 = Global_1901929->f_1.f_21;
	Var46.f_22 = 1;
	aggregate_func_201(Var46);
}

void func_245(int iParam0)
{
	struct<15> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 16))
	{
		return;
	}
	if (aggregate_func_6953())
	{
		if (Global_1572887->f_248 > 6)
		{
			aggregate_func_7708(&Var0);
			return;
		}
		else
		{
			if (Global_1572887->f_248.f_85 != 0)
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1572887->f_248.f_85);
			}
			aggregate_func_8631();
			func_163();
		}
	}
	if (Global_1572887->f_248.f_1 == -1)
	{
		Global_1572887->f_248.f_1 = Var0.f_14;
	}
	if (aggregate_func_4251() != -1)
	{
		if (!aggregate_func_2820())
		{
			func_270(2);
			aggregate_func_7218(2);
			aggregate_func_6704(23);
			return;
		}
		if (Global_1070355->f_27249)
		{
			func_270(268435456);
			aggregate_func_7218(2);
			aggregate_func_6704(23);
			return;
		}
	}
	aggregate_func_7708(&Var0);
	func_394(&Var0);
	aggregate_func_6625(4);
	aggregate_func_7566(0);
	aggregate_func_6625(1);
}

void func_246(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 2))
	{
		return;
	}
	func_395(1, iVar0);
	aggregate_func_4239(&iVar0);
}

void func_247(int iParam0)
{
	struct<9> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 9))
	{
		return;
	}
	if (aggregate_func_6953() && !func_268(16384))
	{
		NETWORK::_0xA4484173759749B1();
		aggregate_func_4444(&Var0);
		return;
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		NETWORK::_0xA4484173759749B1();
		func_270(128);
		return;
	}
	if (aggregate_func_4251() != -1)
	{
		if (!aggregate_func_2820())
		{
			func_270(2);
			aggregate_func_7218(2);
			aggregate_func_6704(23);
			NETWORK::_0xA4484173759749B1();
			return;
		}
		if (Global_1070355->f_27249)
		{
			func_270(268435456);
			aggregate_func_7218(2);
			aggregate_func_6704(23);
			NETWORK::_0xA4484173759749B1();
			return;
		}
	}
	if (!func_297())
	{
		aggregate_func_7218(4);
		return;
	}
	Global_1572887->f_248.f_1 = Var0.f_7;
	aggregate_func_4444(&Var0);
	func_398(&Var0);
	if (aggregate_func_9087(Var0, 2))
	{
		aggregate_func_6625(3);
	}
	else
	{
		aggregate_func_6625(2);
	}
	aggregate_func_7218(16384);
	aggregate_func_7566(0);
}

void func_248(int iParam0)
{
	struct<16> Var0;
	struct<7> Var17;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 17))
	{
		return;
	}
	if (Global_1572887->f_248.f_1 != -1 && Global_1572887->f_248.f_1 != Var0.f_14)
	{
		return;
	}
	Var17 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
	if (aggregate_func_4240(Var0.f_15, 2) || aggregate_func_4240(Var0.f_15, 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var17) && !aggregate_func_6953())
		{
			return;
		}
	}
	else if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_7), &Var17) && !aggregate_func_6953())
	{
		return;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var17) && Var0.f_16 == 4)
	{
		return;
	}
	if (Global_1572887->f_248.f_1 != -1 && Global_1572887->f_248.f_1 != Var0.f_14)
	{
		return;
	}
	if (aggregate_func_4240(Var0.f_16, 4194304))
	{
		if (func_400() >= 3 && func_400() <= 5)
		{
			aggregate_func_2408();
		}
		aggregate_func_7218(4);
		aggregate_func_7218(16384);
		aggregate_func_6704(23);
	}
	Global_1572887->f_248.f_88 = Var0.f_16;
	Global_1572887->f_248.f_68 = { Var0 };
	Global_1572887->f_248.f_75 = { Var0.f_7 };
	Global_1572887->f_248.f_89 = Var0.f_15;
}

void func_249()
{
	if (MISC::IS_ORBIS_VERSION())
	{
		Global_1572887->f_248.f_66 = NETWORK::_0x74FB3E29E6D10FA9();
	}
}

void func_250(int iParam0)
{
	struct<8> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 16))
	{
		return;
	}
	func_270(65536);
	Global_1572887->f_248.f_86 = 3;
	Global_1572887->f_248.f_68 = { Var0 };
	Global_1572887->f_248.f_75 = { Var0.f_7 };
}

void func_251(int iParam0)
{
	struct<17> Var0;
	struct<7> Var17;
	bool bVar24;
	struct<7> Var25;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 17))
	{
		return;
	}
	if (Global_1572887->f_248.f_1 != -1 && Global_1572887->f_248.f_1 != Var0.f_14)
	{
		return;
	}
	Var17 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
	bVar24 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var17);
	if (aggregate_func_4240(Var0.f_16, 8) && bVar24)
	{
		return;
	}
	aggregate_func_4239(&Var0);
	Global_1572887->f_248.f_86 = Var0.f_15;
	Global_1572887->f_248.f_87 = Global_1572887->f_248.f_86;
	Global_1572887->f_248.f_68 = { Var0 };
	Global_1572887->f_248.f_75 = { Var0.f_7 };
	Global_1572887->f_248.f_90 = Var0.f_16;
	if (func_268(128))
	{
		Var25 = { Var0 };
		aggregate_func_4444(&Var25);
		func_398(&Var25);
		if (aggregate_func_4240(Var0.f_16, 8))
		{
			aggregate_func_6625(3);
		}
		else
		{
			aggregate_func_6625(2);
		}
	}
	if (Global_1572887->f_248.f_86 > 2 && !func_252())
	{
		Global_1572887->f_248.f_86 = 0;
		Global_1572887->f_248.f_87 = 0;
	}
	else if (Global_1572887->f_248.f_86 == 2 && bVar24)
	{
		Global_1572887->f_248.f_86 = 0;
		Global_1572887->f_248.f_87 = 0;
	}
}

bool func_252()
{
	struct<7> Var0;
	bool bVar7;
	struct<7> Var8;
	bool bVar15;
	bool bVar16;
	struct<7> Var17;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;
	bool bVar32;
	bool bVar33;

	if (Global_1572887->f_248.f_64 != 0)
	{
		return true;
	}
	if (Global_1572887->f_248.f_66 != -1)
	{
		return true;
	}
	if (Global_1572887->f_248.f_86 > 2)
	{
		Var0 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
		bVar7 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887->f_248.f_75), &Var0);
		Var8 = { aggregate_func_2843(_NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15)) };
		bVar15 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887->f_248.f_75), &Var8);
		bVar16 = (bVar7 || bVar15);
		if (Global_1572887->f_248.f_86 == 3)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 4)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 5)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 6)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 7)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 8)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 9)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 10)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 11)
		{
			return false;
		}
		if (Global_1572887->f_248.f_86 == 12)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 13)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 14)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 15)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 16)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 17)
		{
			return false;
		}
		if (Global_1572887->f_248.f_86 == 18)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 19)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 20)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 21)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 22)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 23)
		{
			return bVar16;
		}
		if (Global_1572887->f_248.f_86 == 24)
		{
			return bVar16;
		}
	}
	if (Global_1572887->f_248.f_88 != 0)
	{
		Var17 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
		bVar24 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887->f_248.f_75), &Var17);
		bVar25 = false;
		if (Global_1572887->f_248 > 0)
		{
			bVar25 = true;
		}
		bVar26 = !aggregate_func_4240(Global_1572887->f_248.f_89, 524288);
		bVar27 = !aggregate_func_4240(Global_1572887->f_248.f_89, 2);
		bVar28 = aggregate_func_4240(Global_1572887->f_248.f_89, 2);
		bVar29 = aggregate_func_4240(Global_1572887->f_248.f_89, 1);
		bVar30 = MISC::IS_DURANGO_VERSION();
		bVar31 = (bVar24 && (bVar25 || bVar29));
		bVar32 = (bVar31 && !bVar30);
		bVar33 = ((bVar26 && bVar27) && !bVar24);
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 1))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 2))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 4))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 32))
		{
			return (bVar31 || bVar33);
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 64))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 8))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 16))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 128))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 512))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 8388608))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 1024))
		{
			return bVar32;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 2048))
		{
			return bVar32;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 4096))
		{
			return (bVar33 || bVar33);
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 8192))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 16384))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 32768))
		{
			return (bVar31 || bVar33);
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 65536))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 262144))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 524288))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 2097152))
		{
			return bVar31;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 4194304))
		{
			return false;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 16777216))
		{
			return false;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 256))
		{
			return false;
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 1048576))
		{
			return (bVar31 && bVar28);
		}
		if (aggregate_func_4240(Global_1572887->f_248.f_88, 131072))
		{
			return false;
		}
	}
	return false;
}

bool func_256(int iParam0)
{
	return aggregate_func_4240(Global_1572887->f_248.f_64, iParam0);
}

char* func_258()
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;

	Var0 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
	bVar7 = false;
	bVar8 = false;
	if (((Global_1572887->f_248.f_2 == 3 || Global_1572887->f_248.f_2 == 1) || aggregate_func_4240(Global_1572887->f_248.f_89, 2)) || aggregate_func_4240(Global_1572887->f_248.f_90, 8))
	{
		bVar7 = true;
	}
	if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1572887->f_248.f_68)) && NETWORK::NETWORK_IS_HANDLE_VALID(&Var0))
	{
		bVar8 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1572887->f_248.f_68), &Var0);
	}
	if (func_256(1))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET";
	}
	if (func_256(2))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER";
	}
	if (func_256(4))
	{
		return "NT_INV_INCOMPATIBLE_LOBBY_LOAD_FAILURE";
	}
	if (func_256(4096))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(8192))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(1024))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(16384))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(65536))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(2048))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(32768))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(64))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (func_256(8))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(16))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(32))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(128))
	{
		return aggregate_func_4363(bVar7, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (func_256(256))
	{
		return aggregate_func_4363(bVar7, "NT_INV_LEAVE_WARNING_JIP", "NT_INV_LEAVE_WARNING");
	}
	if (func_256(512))
	{
		return aggregate_func_4363(bVar7, "NT_INV_LEAVE_WARNING_POSSE_JIP", "NT_INV_LEAVE_WARNING_POSSE");
	}
	if (func_256(131072))
	{
		return "MG_NO_MONEY_INV";
	}
	if (func_256(262144))
	{
		return "MG_ALERT_GANGLF";
	}
	if (func_256(524288))
	{
		return "MG_ALERT_GANGBR";
	}
	if (func_256(1048576))
	{
		return "MG_ALERT_BANNED2";
	}
	if (func_256(2097152))
	{
		return "MG_ALERT_CAPPED";
	}
	if (func_256(4194304))
	{
		return "MG_ALERT_CAPPED";
	}
	if (func_256(8388608))
	{
		return "MG_ALERT_CAPPED";
	}
	if (func_256(16777216))
	{
		return "MG_ALERT_PRIV_CAP";
	}
	if (func_256(33554432))
	{
		return "MG_ALERT_INV_MAINT";
	}
	if (func_256(67108864))
	{
		return "MG_ALERT_WANTED";
	}
	if (func_256(134217728))
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT";
	}
	if (func_256(268435456))
	{
		return "NT_INV_INCOMPATIBLE_PLAYER_RE_ROLL";
	}
	if (func_256(536870912))
	{
		return "JAIL_ALT_BODY";
	}
	if (func_256(1073741824 /* Float: 2f */))
	{
		return "MG_ALERT_GANGLF";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 1))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_LOCKED";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 1024))
	{
		return "NT_INV_INCOMPATIBLE_MULTIPLAYER_PRIVILEGE";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 2048))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 4096))
	{
		return "NT_INV_INCOMPATIBLE_COMMUNICATION_PRIVILEGE";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 8192))
	{
		return "NT_INV_INCOMPATIBLE_INACTIVE_PRIVILEGE";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 16384))
	{
		return "NT_INV_INCOMPATIBLE_USER_CONTENT_PRIVILEGE_REMOTE";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 512))
	{
		return "NT_INV_INCOMPATIBLE";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 8388608))
	{
		return "NT_INV_INCOMPATIBLE_AIM";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 2))
	{
		return "NT_INV_INCOMPATIBLE_LOCAL_NOT_IN_MULTIPLAYER";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 4))
	{
		return "NT_INV_INCOMPATIBLE_NOT_IN_SESSION";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 8))
	{
		return "NT_INV_POLICIES_NEED_ACCEPTING";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 16))
	{
		return "NT_INV_POLICIES_DOWNLOAD_FAILED";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 32))
	{
		return aggregate_func_4363(bVar8, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_TARGET", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 64))
	{
		return aggregate_func_4363(bVar7, "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINING_PLAYER", "NT_INV_INCOMPATIBLE_PLAYER_INTRO_MISSION_PASSED_JOINER");
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 128))
	{
		return "NT_INV_INCOMPATIBLE_JOIN_TO_LOCAL";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 32768))
	{
		return aggregate_func_4363(bVar8, "NT_INV_INCOMPATIBLE_REP_TARGET", "NT_INV_INCOMPATIBLE_REP_JOINER");
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 65536))
	{
		return aggregate_func_4363(bVar7, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 262144))
	{
		return "NT_INV_INCOMPATIBLE_NOT_FRIENDS";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 524288))
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 2097152))
	{
		return "NT_INV_INCOMPATIBLE_IN_PUBLIC_POKER";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 4194304))
	{
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 16777216))
	{
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 256))
	{
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 1048576))
	{
		return "NT_INV_INCOMPATIBLE_BLOCKED_BY_JOIN_TARGET";
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 131072))
	{
	}
	if (Global_1572887->f_248.f_86 == 3)
	{
		return "NT_INV_INCOMPATIBLE_TIMEOUT_RESULT";
	}
	if (Global_1572887->f_248.f_86 == 4)
	{
		return aggregate_func_4363(bVar7, "NT_INV_IN_SESSION", "NT_INV_INCOMPATIBLE_ALREADY_IN_SESSION");
	}
	if (Global_1572887->f_248.f_86 == 5)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887->f_248.f_86 == 6)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_DISABLED";
	}
	if (Global_1572887->f_248.f_86 == 7)
	{
		return "NT_INV_INCOMPATIBLE_DISCRIMINATOR";
	}
	if (Global_1572887->f_248.f_86 == 8)
	{
		return "NT_INV_INCOMPATIBLE_INSTANCED";
	}
	if (Global_1572887->f_248.f_86 == 9)
	{
		return "NT_INV_INCOMPATIBLE_VALIDATION_INVITEE";
	}
	if (Global_1572887->f_248.f_86 == 10)
	{
		return "NT_INV_INCOMPATIBLE_PRIVATE_SESSION";
	}
	if (Global_1572887->f_248.f_86 == 11)
	{
	}
	if (Global_1572887->f_248.f_86 == 12)
	{
		return "NT_INV_INCOMPATIBLE_INVITES_BLOCKED";
	}
	if (Global_1572887->f_248.f_86 == 13)
	{
		return "NT_INV_INCOMPATIBLE_JOIN_BLOCKED";
	}
	if (Global_1572887->f_248.f_86 == 14)
	{
		return "NT_INV_INCOMPATIBLE_HOST_INVITES_ONLY";
	}
	if (Global_1572887->f_248.f_86 == 15)
	{
		return "NT_INV_FAILED_SESSION_FULL";
	}
	if (Global_1572887->f_248.f_86 == 16)
	{
		return "NT_INV_FAILED_INVITER_CLEANED_UP";
	}
	if (Global_1572887->f_248.f_86 == 17)
	{
	}
	if (Global_1572887->f_248.f_86 == 18)
	{
		return "NT_INV_FAILED_NO_LONGER_IN_GANG";
	}
	if (Global_1572887->f_248.f_86 == 19)
	{
		return "NT_INV_FAILED_ADD_TO_GANG";
	}
	if (Global_1572887->f_248.f_86 == 20)
	{
		return "NT_INV_FAILED_GANG_CHANGED";
	}
	if (Global_1572887->f_248.f_86 == 21)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_248.f_86 == 22)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_248.f_86 == 23)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_248.f_86 == 24)
	{
		return "NT_INV_FAILED_SESSION_SWITCH";
	}
	if (Global_1572887->f_248.f_66 == 0)
	{
		return "NT_INV_INCOMPATIBLE_REASON_OTHER";
	}
	if (Global_1572887->f_248.f_66 == 1)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SYSTEM_UPDATE";
	}
	if (Global_1572887->f_248.f_66 == 2)
	{
		return "NT_INV_INCOMPATIBLE_REASON_GAME_UPDATE";
	}
	if (Global_1572887->f_248.f_66 == 3)
	{
		return "NT_INV_INCOMPATIBLE_REASON_SIGNED_OUT";
	}
	if (Global_1572887->f_248.f_66 == 4)
	{
		return "NT_INV_INCOMPATIBLE_AGE";
	}
	if (Global_1572887->f_248.f_66 == 5)
	{
		return "NT_INV_INCOMPATIBLE_REASON_CONNECTION";
	}
	return "NT_INV_FAILED_GENERIC";
}

int func_259()
{
	if (func_256(4096))
	{
		return 27100000;
	}
	if (func_256(8192))
	{
		return 27110000;
	}
	if (func_256(1024))
	{
		return 27120000;
	}
	if (func_256(16384))
	{
		return 27130000;
	}
	if (func_256(65536))
	{
		return 27140000;
	}
	if (func_256(2048))
	{
		return 27150000;
	}
	if (func_256(32768))
	{
		return 27160000;
	}
	if (func_256(8))
	{
		return 27170000;
	}
	if (func_256(16))
	{
		return 27180000;
	}
	if (func_256(32))
	{
		return 27190000;
	}
	if (func_256(131072))
	{
		return 27300000;
	}
	if (func_256(262144))
	{
		return 27310000;
	}
	if (func_256(524288))
	{
		return 27320000;
	}
	if (func_256(1048576))
	{
		return 27330000;
	}
	if (func_256(2097152))
	{
		return 27340000;
	}
	if (func_256(4194304))
	{
		return 27350000;
	}
	if (func_256(8388608))
	{
		return 27360000;
	}
	if (func_256(16777216))
	{
		return 27370000;
	}
	if (func_256(33554432))
	{
		return 27380000;
	}
	if (func_256(67108864))
	{
		return 27390000;
	}
	if (func_256(134217728))
	{
		return 27400000;
	}
	if (func_256(1073741824 /* Float: 2f */))
	{
		return 27410000;
	}
	return -1;
}

bool func_267(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22)
{
	return aggregate_func_4240(Param0.f_16, iParam22);
}

bool func_268(int iParam0)
{
	return aggregate_func_4240(Global_1572887->f_248.f_63, iParam0);
}

void func_270(int iParam0)
{
	aggregate_func_4241(&(Global_1572887->f_248.f_64), iParam0);
}

int func_273()
{
	return Global_1572887->f_248.f_2;
}

bool func_274(bool bParam0)
{
	struct<22> Var0;
	struct<11> Var22;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_3 = -1;
	Var22.f_3.f_1 = -1;
	if (bParam0)
	{
		Var22 = { aggregate_func_9286() };
		iVar33 = func_407();
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar33))
		{
			iVar34 = iVar33;
			if (func_408(iVar34))
			{
				aggregate_func_4241(&(Var22.f_10), 4);
			}
			else
			{
				aggregate_func_4243(&(Var22.f_10), 4);
			}
			Var22 = aggregate_func_9287(iVar34);
			Var22.f_1 = aggregate_func_6706(iVar34);
			Var22.f_2 = aggregate_func_6706(iVar34);
			Var22.f_3 = { aggregate_func_9288(iVar34) };
		}
	}
	else
	{
		Var0 = { func_294() };
		if (NETWORK::_0xD1FFB246F4E088AC(Var0.f_15))
		{
			NETWORK::_0xC0CFFDA87C2C163D(NETWORK::_0x27B1AE4D8C652F08(Var0.f_15), &Var22, 11);
		}
	}
	iVar35 = aggregate_func_7813(Var22.f_3);
	Global_1130954->f_143 = iVar35;
	if (Var22 == 3)
	{
		aggregate_func_7218(8192);
		iVar36 = aggregate_func_513(iVar35);
		if (!iVar36 == 0)
		{
			if (iVar36 == 5)
			{
				func_270(262144);
			}
			else if (iVar36 == 8)
			{
				func_270(1048576);
			}
			else if (iVar36 == 9)
			{
				func_270(2097152);
			}
			else if (iVar36 == 10)
			{
				func_270(4194304);
			}
			else if (iVar36 == 11)
			{
				func_270(8388608);
			}
			else if (iVar36 == 12)
			{
				func_270(16777216);
			}
			else if (iVar36 == 14)
			{
				func_270(33554432);
			}
			else if (iVar36 == 15)
			{
				func_270(67108864);
			}
			else if (iVar36 == 6)
			{
				func_270(131072);
			}
			else if (iVar36 == 7)
			{
				func_270(524288);
			}
			return false;
		}
	}
	return true;
}

bool func_275(bool bParam0)
{
	int iVar0;

	iVar0 = aggregate_func_4295(bParam0, Global_1901929->f_1.f_20, Global_1901929->f_1.f_19);
	return (MISC::GET_GAME_TIMER() - Global_1572887->f_248.f_62) > iVar0;
}

bool func_276()
{
	int iVar0;

	if (&Global_1051089)
	{
		return false;
	}
	if (aggregate_func_1921(&iVar0))
	{
		aggregate_func_3729(3, 0, 1, 0, -1, 1, iVar0);
		return false;
	}
	return true;
}

struct<22> func_294()
{
	return Global_1572887->f_248.f_28;
}

void func_296()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iVar0 /*20*/])->f_5))
		{
			SCRIPTS::_0x7DE4643157AD646C((Global_1183537->f_66[iVar0 /*20*/])->f_5);
		}
		if (SCRIPTS::_DOES_THREAD_EXIST((Global_1183537->f_66[iVar0 /*20*/])->f_4))
		{
			SCRIPTS::_0x7DE4643157AD646C((Global_1183537->f_66[iVar0 /*20*/])->f_4);
		}
		iVar0++;
	}
}

bool func_297()
{
	var uVar0;

	if (!NETWORK::_0x2A8112A974DE1EF6())
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return false;
	}
	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&uVar0))
	{
		return false;
	}
	return true;
}

void func_298()
{
	aggregate_func_6908(64);
	aggregate_func_8605(joaat("freeroam"), 1024);
	aggregate_func_6909(3);
	CAM::DO_SCREEN_FADE_OUT(0);
}

void func_300()
{
	switch (Global_1572887->f_248.f_2)
	{
		case 0:
		case 2:
		case 4:
			aggregate_func_2510(2);
			break;
		case 1:
		case 3:
		case 5:
			aggregate_func_2510(3);
			break;
	}
}

int func_301()
{
	int iVar0;

	if (func_275(1))
	{
		func_270(1024);
		return 2;
	}
	if (!aggregate_func_2820())
	{
		func_270(2);
		aggregate_func_7218(2);
		aggregate_func_6625(0);
		return 2;
	}
	if (Global_1070355->f_27249)
	{
		func_270(268435456);
		aggregate_func_7218(2);
		return 2;
	}
	if (func_268(16384))
	{
		return 2;
	}
	iVar0 = func_429();
	return iVar0;
}

void func_313()
{
	int iVar0;

	iVar0 = MISC::GET_HASH_KEY("net_ugc_end_flow");
	SCRIPTS::_0x7423F7835770F619(iVar0);
	iVar0 = MISC::GET_HASH_KEY("mc_transition_results");
	SCRIPTS::_0x7423F7835770F619(iVar0);
	iVar0 = MISC::GET_HASH_KEY("mc_transition_cutscene");
	SCRIPTS::_0x7423F7835770F619(iVar0);
	iVar0 = MISC::GET_HASH_KEY("net_mc_vs_mission_intro");
	SCRIPTS::_0x7423F7835770F619(iVar0);
	iVar0 = MISC::GET_HASH_KEY("net_mission_intro_story_gvo");
	SCRIPTS::_0x7423F7835770F619(iVar0);
}

void func_314()
{
	NETWORK::_0xC505036A35AFD01B(false);
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(0);
	}
	aggregate_func_7218(4);
	aggregate_func_6704(23);
}

struct<9> func_315()
{
	return Global_1572887->f_248.f_3;
}

struct<16> func_316()
{
	return Global_1572887->f_248.f_12;
}

void func_317()
{
	if (!func_329())
	{
		func_452(Global_1273882->f_17);
	}
}

int func_321()
{
	return &Global_262155;
}

int func_324()
{
	return Global_1572887->f_248.f_67;
}

int func_326()
{
	struct<11> Var0;
	bool bVar11;
	int iVar12;
	int iVar13;

	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0 = { aggregate_func_9286() };
	bVar11 = NETWORK::_0xF0C0C94B404206FA() == 4;
	iVar12 = func_407();
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar12))
	{
		iVar13 = iVar12;
		Var0.f_10 = aggregate_func_6706(iVar13);
		Var0 = aggregate_func_9287(iVar13);
		Var0.f_1 = aggregate_func_6706(iVar13);
		Var0.f_2 = aggregate_func_6706(iVar13);
		Var0.f_3 = { aggregate_func_9288(iVar13) };
		Var0.f_9 = aggregate_func_6706(iVar13);
	}
	if (!aggregate_func_4240(Var0.f_10, 1))
	{
		return 0;
	}
	if ((Var0 == 0 && Var0.f_1 == -1) && !aggregate_func_4255(Var0.f_3))
	{
		return 2;
	}
	if (!aggregate_func_4240(Var0.f_10, 4) && !bVar11)
	{
		return 2;
	}
	switch (Var0)
	{
		case 3:
			if (func_273() == 2)
			{
				if (!func_457())
				{
					return 0;
				}
			}
			if (!func_274(1))
			{
				aggregate_func_7218(4);
				aggregate_func_7218(4096);
				return 2;
			}
			if (!aggregate_func_9145(Var0.f_3))
			{
				return 0;
			}
			break;
		case 2:
			if (aggregate_func_7117(iVar12, 4096))
			{
				return 2;
			}
			break;
	}
	switch (func_273())
	{
		case 0:
		case 2:
			aggregate_func_4884(4);
			break;
		case 1:
		case 3:
		case 5:
			aggregate_func_4884(9);
			break;
		case 4:
			aggregate_func_4884(8);
			break;
	}
	aggregate_func_9143(Var0, Var0.f_1, Var0.f_3, Var0.f_2, 0, Var0.f_9);
	return 1;
}

void func_327()
{
	Global_1572887->f_248.f_92 = 1;
}

bool func_329()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_268(256))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), false, false, true, true);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
	iVar1 = aggregate_func_4131(iVar0);
	iVar2 = aggregate_func_178(iVar1);
	aggregate_func_2435(iVar2, 0);
	return true;
}

void func_332(int iParam0, bool bParam1)
{
	bool bVar0;

	if (aggregate_func_682(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
	{
		bVar0 = aggregate_func_297(iParam0);
	}
	else
	{
		bVar0 = _NAMESPACE26::_0xC0474C8BCF6787AD(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0));
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			aggregate_func_3896(1);
		}
		else
		{
			func_466();
		}
	}
}

bool func_333()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	vector3 vVar8;
	float fVar11;

	iVar0 = PLAYER::GET_PLAYER_PED(Global_1572887->f_248.f_61);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (aggregate_func_4497(255))
	{
		aggregate_func_5070(1);
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	vVar1.f_2 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(vVar1.x, vVar1.y);
	vVar4 = { vVar1 };
	vVar4.f_2 = (vVar4.z + 7f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar7, 0))
	{
		vVar1.f_2 = uVar7;
	}
	fVar11 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
	if (!aggregate_func_1676(&vVar8, &fVar11, 0))
	{
		vVar8 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
	}
	aggregate_func_5070(0);
	aggregate_func_7065(0);
	aggregate_func_6542(vVar1, fVar11, vVar8, fVar11, 5f, 20f, 1, 1, 1, 1);
	return true;
}

bool func_336()
{
	if (func_324() != 2)
	{
		return false;
	}
	if (!aggregate_func_2820())
	{
		return false;
	}
	if (func_268(2048))
	{
		return true;
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_65, 1342177410))
	{
		return false;
	}
	if (Global_1572887->f_248.f_87 != 2 && Global_1572887->f_248.f_65 == 0)
	{
		return false;
	}
	if (aggregate_func_4240(Global_1572887->f_248.f_88, 65536))
	{
		return false;
	}
	return true;
}

void func_341(bool bParam0)
{
	if (!bParam0)
	{
		aggregate_func_4309(22);
	}
	else
	{
		aggregate_func_4309(22);
	}
}

void func_345()
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<39> Var9;
	int iVar48;

	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Var9 = { *(Global_1939221->f_242.f_14[iVar0 /*39*/]) };
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT(Var9.f_26);
		if (iVar1 != 1)
		{
		}
		else
		{
			iVar48 = NETWORK::_0x27B1AE4D8C652F08(DATABINDING::_DATABINDING_READ_DATA_INT(Var9.f_27));
			if (!NETWORK::_0x16EFB123C4451032(iVar48, &uVar2))
			{
			}
			else if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uVar2))
			{
				aggregate_func_1546(Var9);
			}
		}
		iVar0++;
	}
}

void func_356(char* sParam0, var uParam1, int iParam2, char* sParam3, bool bParam4)
{
	char* sVar0;
	bool bVar1;
	int iVar2;

	bVar1 = true;
	iVar2 = MISC::GET_HASH_KEY(sParam3);
	switch (iParam2)
	{
		case 17:
			aggregate_func_2975(MISC::_CREATE_VAR_STRING(42, "GF_FEUD_HELP_MEMBER_REQUEST_PLF", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_48), joaat("COLOR_PURE_WHITE")), aggregate_func_693(sParam0->f_47, 1, 0)), Global_1901929->f_295.f_166, 0, 0, 0, 1);
			if (bParam4)
			{
				uParam1->f_20 = 1700592256;
				uParam1->f_21 = 1434360011;
				uParam1->f_31.f_6 = 1700592256;
				uParam1->f_31.f_7 = 1434360011;
				uParam1->f_31.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = iVar2;
				uParam1->f_21 = iVar2;
				uParam1->f_31.f_6 = iVar2;
				uParam1->f_31.f_7 = iVar2;
				uParam1->f_31.f_21 = 0;
			}
			uParam1->f_25.f_2 = sParam0->f_47;
			uParam1->f_25.f_1 = sParam0->f_48;
			uParam1->f_24 = 17;
			uParam1->f_16 = MISC::_CREATE_VAR_STRING(10, "GF_FEUD_REQUEST_TITLE", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_48), joaat("COLOR_PURE_WHITE")));
			uParam1->f_17 = MISC::_CREATE_VAR_STRING(10, "GF_FEUD_REQUEST_LEADER_BODY", aggregate_func_693(sParam0->f_47, 1, 0));
			uParam1->f_23 = 120;
			uParam1->f_30 = NETWORK::_0x9C725D149622BFDE(0);
			uParam1->f_29 = "IB_GAMERCARD";
			uParam1->f_28 = 4;
			uParam1->f_31.f_2 = aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_48), joaat("COLOR_PURE_WHITE"));
			uParam1->f_31.f_3 = MISC::_CREATE_VAR_STRING(10, "GF_FEUD_TOAST_OPT_IN_TITLE", "GF_FEUD_POSSE_LEADER_FEUD");
			uParam1->f_31.f_17 = "HUD_Toast_Soundset";
			uParam1->f_31.f_18 = "Toast_On";
			uParam1->f_22 = 1;
			break;
		case 16:
			aggregate_func_2975(MISC::_CREATE_VAR_STRING(42, "GF_FEUD_HELP_MEMBER_REQUEST_PF", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_48), joaat("COLOR_PURE_WHITE")), aggregate_func_693(sParam0->f_47, 1, 0)), Global_1901929->f_295.f_166, 0, 0, 0, 1);
			if (bParam4)
			{
				uParam1->f_20 = 1700592256;
				uParam1->f_21 = 1434360011;
				uParam1->f_31.f_6 = 1700592256;
				uParam1->f_31.f_7 = 1434360011;
				uParam1->f_31.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = iVar2;
				uParam1->f_21 = iVar2;
				uParam1->f_31.f_6 = iVar2;
				uParam1->f_31.f_7 = iVar2;
				uParam1->f_31.f_21 = 0;
			}
			uParam1->f_25.f_2 = sParam0->f_47;
			uParam1->f_25.f_1 = sParam0->f_48;
			uParam1->f_24 = 16;
			uParam1->f_16 = MISC::_CREATE_VAR_STRING(10, "GF_FEUD_REQUEST_TITLE", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_48), joaat("COLOR_PURE_WHITE")));
			uParam1->f_17 = MISC::_CREATE_VAR_STRING(10, "GF_FEUD_REQUEST_BODY", aggregate_func_693(sParam0->f_47, 1, 0));
			uParam1->f_23 = 120;
			uParam1->f_30 = NETWORK::_0x9C725D149622BFDE(0);
			uParam1->f_29 = "IB_GAMERCARD";
			uParam1->f_28 = 4;
			uParam1->f_31.f_2 = aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_48), joaat("COLOR_PURE_WHITE"));
			uParam1->f_31.f_3 = MISC::_CREATE_VAR_STRING(10, "GF_FEUD_TOAST_OPT_IN_TITLE", "GF_FEUD_POSSE_FEUD");
			uParam1->f_31.f_17 = "HUD_Toast_Soundset";
			uParam1->f_31.f_18 = "Toast_On";
			uParam1->f_22 = 1;
			break;
		case 8:
			sVar0 = aggregate_func_9186(sParam0->f_12.f_16.f_4, &bVar1);
			if (bVar1)
			{
				if (bParam4)
				{
					uParam1->f_20 = 1700592256;
					uParam1->f_21 = 1434360011;
					uParam1->f_31.f_6 = 1700592256;
					uParam1->f_31.f_7 = 1434360011;
					uParam1->f_31.f_21 = 1;
				}
				else
				{
					uParam1->f_20 = iVar2;
					uParam1->f_21 = iVar2;
					uParam1->f_31.f_6 = iVar2;
					uParam1->f_31.f_7 = iVar2;
					uParam1->f_31.f_21 = 0;
				}
				uParam1->f_24 = 8;
				uParam1->f_25 = Global_1070355->f_14;
				uParam1->f_25.f_1 = sParam0->f_48;
				uParam1->f_25.f_2 = sParam0->f_47;
				uParam1->f_16 = MISC::_CREATE_VAR_STRING(2, sVar0);
				uParam1->f_17 = aggregate_func_1965(MISC::_CREATE_VAR_STRING(10, "CHALLENGE_NOTICE_SUB_INFO", aggregate_func_2320(sParam0->f_48)), joaat("COLOR_PURE_WHITE"));
				uParam1->f_23 = (Global_1901929->f_295.f_167 / 1000);
				uParam1->f_30 = NETWORK::_0x9C725D149622BFDE(0);
				uParam1->f_29 = "IB_GAMERCARD";
				uParam1->f_28 = 4;
				uParam1->f_31.f_2 = aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_48), joaat("COLOR_PURE_WHITE"));
				uParam1->f_31.f_3 = MISC::_CREATE_VAR_STRING(2, aggregate_func_1966(aggregate_func_9187(sParam0->f_12)));
				uParam1->f_31.f_17 = "HUD_Toast_Soundset";
				uParam1->f_31.f_18 = "Toast_On";
				uParam1->f_22 = 1;
			}
			break;
		case 20:
			if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(sParam0->f_49)) == 1)
			{
				aggregate_func_2975(MISC::_CREATE_VAR_STRING(10, "PARLEY_HELP_REQUESTED_SOLO", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_48), joaat("COLOR_PURE_WHITE"))), 10000, 0, 0, 0, 1);
			}
			else
			{
				aggregate_func_2975(MISC::_CREATE_VAR_STRING(10, "PARLEY_HELP_REQUESTED", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_48), joaat("COLOR_PURE_WHITE"))), 10000, 0, 0, 0, 1);
			}
			if (bParam4)
			{
				uParam1->f_20 = 1700592256;
				uParam1->f_21 = 1434360011;
				uParam1->f_31.f_6 = 1700592256;
				uParam1->f_31.f_7 = 1434360011;
				uParam1->f_31.f_21 = 1;
			}
			else
			{
				uParam1->f_20 = iVar2;
				uParam1->f_21 = iVar2;
				uParam1->f_31.f_6 = iVar2;
				uParam1->f_31.f_7 = iVar2;
				uParam1->f_31.f_21 = 0;
			}
			uParam1->f_25 = sParam0->f_48;
			uParam1->f_25.f_1 = sParam0->f_49;
			uParam1->f_24 = 20;
			uParam1->f_16 = MISC::_CREATE_VAR_STRING(10, "PARLEY_REQUEST_TITLE", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_48), joaat("COLOR_PURE_WHITE")));
			if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(sParam0->f_49)) > 1)
			{
				uParam1->f_17 = MISC::_CREATE_VAR_STRING(10, "PARLEY_REQUEST_BODY_GANG", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_49), joaat("COLOR_PURE_WHITE")));
			}
			else
			{
				uParam1->f_17 = MISC::_CREATE_VAR_STRING(10, "PARLEY_REQUEST_BODY", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(sParam0->f_49), joaat("COLOR_PURE_WHITE")));
			}
			uParam1->f_23 = 120;
			uParam1->f_31.f_2 = MISC::_CREATE_VAR_STRING(2, "PARLEY_TOAST_OPT_IN");
			uParam1->f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "PARLEY_TOAST_OPT_IN_BODY");
			uParam1->f_31.f_17 = "HUD_Toast_Soundset";
			uParam1->f_31.f_18 = "Toast_On";
			uParam1->f_22 = 1;
			break;
	}
}

void func_357(char* sParam0, var uParam1, char* sParam2, bool bParam3)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	struct<4> Var3;
	int iVar14;
	int iVar15;
	int iVar16;
	char* sVar17;

	iVar0 = NETWORK::_0x27B1AE4D8C652F08(sParam0->f_11);
	sVar1 = aggregate_func_1524(NETWORK::_0xE59F4924BD3A718D(iVar0), 636925055);
	iVar2 = MISC::GET_HASH_KEY(sParam2);
	uParam1->f_24 = 1;
	uParam1->f_25 = sParam0->f_11;
	uParam1->f_16 = sVar1;
	uParam1->f_30 = NETWORK::_0x9C725D149622BFDE(0);
	uParam1->f_29 = "IB_GAMERCARD";
	uParam1->f_28 = 2;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(sParam0->f_8)))
	{
		Var3.f_1 = -1;
		Var3.f_2 = -1;
		Var3.f_3 = -1;
		Var3.f_3.f_1 = -1;
		NETWORK::_0xC0CFFDA87C2C163D(iVar0, &Var3, 11);
		if (Var3 == 3)
		{
			iVar14 = aggregate_func_7813(Var3.f_3);
			uParam1->f_17 = MISC::_CREATE_VAR_STRING(10, "NT_INV_RCV_BODY_INFO", aggregate_func_7814(aggregate_func_8473(iVar14)));
			uParam1->f_31.f_3 = MISC::_CREATE_VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", aggregate_func_7814(aggregate_func_8473(iVar14)));
			uParam1->f_31.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam1->f_17 = MISC::_CREATE_VAR_STRING(42, "NT_INV_BODY_INFO", aggregate_func_1524(sParam0, joaat("COLOR_PURE_WHITE")), "LANDING_FREEROAM_TITLE");
			uParam1->f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "NT_INV_FM_CONTENT");
			uParam1->f_31.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
	}
	else if (aggregate_func_4251() != -1)
	{
		iVar15 = aggregate_func_6970(MISC::GET_HASH_KEY(&(sParam0->f_8)));
		if (iVar15 != -1)
		{
			iVar16 = (Global_265331->f_4[iVar15 /*51*/])->f_29;
			if (iVar16 == -504335712)
			{
				sVar17 = MISC::_CREATE_VAR_STRING(2, aggregate_func_7886((Global_265331->f_4[iVar15 /*51*/])->f_31));
			}
			else if (iVar16 == 395262693)
			{
				sVar17 = MISC::_CREATE_VAR_STRING(2, aggregate_func_9485((Global_265331->f_4[iVar15 /*51*/])->f_31));
			}
			else if (iVar16 == -933924539)
			{
				sVar17 = MISC::_CREATE_VAR_STRING(2, aggregate_func_8733((Global_265331->f_4[iVar15 /*51*/])->f_31));
			}
			uParam1->f_17 = MISC::_CREATE_VAR_STRING(10, "NT_INV_RCV_BODY_INFO", sVar17);
			uParam1->f_31.f_3 = MISC::_CREATE_VAR_STRING(10, "NM_TI_VIEW_INVITE_SUBTYPE", sVar17);
			uParam1->f_31.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
	}
	uParam1->f_31.f_2 = sVar1;
	uParam1->f_31.f_17 = "HUD_Toast_Soundset";
	uParam1->f_31.f_18 = "Toast_On";
	uParam1->f_23 = Global_1901929->f_1.f_21;
	uParam1->f_22 = 1;
	if (bParam3)
	{
		uParam1->f_20 = 1700592256;
		uParam1->f_21 = 1434360011;
		uParam1->f_31.f_6 = 1700592256;
		uParam1->f_31.f_7 = 1434360011;
		uParam1->f_31.f_21 = 1;
	}
	else
	{
		uParam1->f_20 = iVar2;
		uParam1->f_21 = iVar2;
		uParam1->f_31.f_6 = iVar2;
		uParam1->f_31.f_7 = iVar2;
		uParam1->f_31.f_21 = 0;
	}
}

void func_360(char* sParam0, var uParam1)
{
	switch (sParam0->f_63)
	{
		case 8:
		case 16:
		case 17:
			Global_1264800->f_40[Global_1264800->f_73] = uParam1;
			Global_1264800->f_73 = (Global_1264800->f_73 + 1 % 32);
			break;
	}
}

bool func_364(int iParam0)
{
	if (!&Global_1901829->f_66[iParam0])
	{
		if (!aggregate_func_4287(Global_1901829->f_3[iParam0 /*2*/]))
		{
			aggregate_func_1330(Global_1901829->f_3[iParam0 /*2*/], 0, 0);
		}
		Global_1901829->f_66[iParam0] = 1;
	}
	else if (func_65(Global_1901829->f_3[iParam0 /*2*/], func_505(iParam0), 0))
	{
		aggregate_func_4285(Global_1901829->f_3[iParam0 /*2*/]);
		return true;
	}
	return false;
}

void func_368(var uParam0)
{
	int iVar0;
	char cVar1[64];

	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 41, "nssd_sStableInventory");
	iVar0 = 0;
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 33, "nssd_MountItemGUID_array");
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		StringCopy(&cVar1, "nssd_StableMountGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F((*uParam0)[iVar0 /*4*/], 4, &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data1", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D((*uParam0)[iVar0 /*4*/], &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data2", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_1), &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data3", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_2), &cVar1);
		StringCopy(&cVar1, "nssd_StableItemGUID_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		StringConCat(&cVar1, "_data4", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&(((*uParam0)[iVar0 /*4*/])->f_3), &cVar1);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xB25B5A375BE5BE26(&(uParam0->f_33), "nssd_eFeeState");
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_34), "nssd_iFeesTimer");
	iVar0 = 0;
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_35), 6, "nssd_iReservedStats_array");
	iVar0 = 0;
	while (iVar0 <= (5 - 1))
	{
		StringCopy(&cVar1, "nssd_iReservedStats_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0->f_35[iVar0], &cVar1);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_369(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[64];

	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 54, sParam1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sStableBonding", 64);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 4, &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data1", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0, &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data2", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1), &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data3", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_2), &cVar1);
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sHorseGUID_data4", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_3), &cVar1);
	_NAMESPACE59::_0xE0B45E983BFC0768();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_fHorseEventXP", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_4), 25, &cVar1);
	iVar0 = 0;
	while (iVar0 < 24)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_fHorseEventXP_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(uParam0->f_4[iVar0], &cVar1);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sCoreData_array", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_29), 9, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F(uParam0->f_29[iVar0 /*4*/], 4, &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_iValue_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0->f_29[iVar0 /*4*/], &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_fValueBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(&((uParam0->f_29[iVar0 /*4*/])->f_1), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_fDrainBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(&((uParam0->f_29[iVar0 /*4*/])->f_2), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sCoreData_iLastGameTime_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_29[iVar0 /*4*/])->f_3), &cVar1);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	iVar0 = 0;
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_sEfficiencyData_array", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_38), 13, &cVar1);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F(uParam0->f_38[iVar0 /*4*/], 4, &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iValue_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0->f_38[iVar0 /*4*/], &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fValueBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(&((uParam0->f_38[iVar0 /*4*/])->f_1), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_fDrainBuffer_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(&((uParam0->f_38[iVar0 /*4*/])->f_2), &cVar1);
		cVar1 = { *sParam1 };
		StringConCat(&cVar1, "_sEfficiencyData_iLastGameTime_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_38[iVar0 /*4*/])->f_3), &cVar1);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	cVar1 = { *sParam1 };
	StringConCat(&cVar1, "_vLastHitch", 64);
	func_216(&(uParam0->f_51), &cVar1);
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_370(var uParam0, struct<8> Param1)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;

	Var9 = { Param1 };
	StringConCat(&Var9, "PortableList", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(uParam0, 25, &Var9);
	iVar0 = 0;
	while (iVar0 < 24)
	{
		Var1 = { Var9 };
		StringIntConCat(&Var1, iVar0, 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D((*uParam0)[iVar0], &Var1);
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	Var9 = { Param1 };
	StringConCat(&Var9, "PortableArraySize", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_25), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "OutfitSlotCount", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_26), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iHatSlotCount", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_27), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBigMaskSlotCount", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_28), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iSmallMaskSlotCount", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_29), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iGloveSlotCount", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_30), &Var9);
	Var9 = { Param1 };
	StringConCat(&Var9, "iBadgeSlotCount", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_31), &Var9);
}

void func_371(var uParam0, struct<8> Param1, int iParam9)
{
	struct<8> Var0;
	struct<8> Var8;

	Var8 = { Param1 };
	StringConCat(&Var8, "Data", 64);
	StringIntConCat(&Var8, iParam9, 64);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 120, &Var8);
	Var0 = { Var8 };
	StringConCat(&Var0, "_eFlags", 64);
	_NAMESPACE59::_0xB25B5A375BE5BE26(uParam0, &Var0);
	Var0 = { Var8 };
	StringConCat(&Var0, "_Components", 64);
	func_506(&(uParam0->f_1), Var0);
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_372(var uParam0, struct<8> Param1)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;
	struct<8> Var17;

	Var17 = { Param1 };
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 380, &Param1);
	StringConCat(&Var17, "_BaseLayer", 64);
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 5, &Var17);
	Var1 = { Var17 };
	StringConCat(&Var1, "_drawable", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0, &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_albedo", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_normal", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_2), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_material", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_3), &Var1);
	Var1 = { Var17 };
	StringConCat(&Var1, "_tag", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_4), &Var1);
	_NAMESPACE59::_0xE0B45E983BFC0768();
	Var17 = { Param1 };
	StringConCat(&Var17, "_Layers", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_5), 375, &Var17);
	iVar0 = 0;
	while (iVar0 < 22)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Layer", 64);
		StringIntConCat(&Var1, iVar0, 64);
		_NAMESPACE59::_0x8E8FFB9E4AD051D2(uParam0->f_5[iVar0 /*17*/], 17, &Var1, 17);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerHash", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0->f_5[iVar0 /*17*/], &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerPriority", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Albedo", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_2), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Normal", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_3), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Material", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_4), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_SheetGridIndex", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_5), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModTexture", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_6), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModChannel", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_7), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_Palette", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_8), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint0", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_9), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint1", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_10), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_tint2", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_5[iVar0 /*17*/])->f_11), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexAlpha", 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(&((uParam0->f_5[iVar0 /*17*/])->f_12), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_ModAlpha", 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(&((uParam0->f_5[iVar0 /*17*/])->f_13), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_TexRough", 64);
		_NAMESPACE59::_0x35DEFECAE36D4FAE(&((uParam0->f_5[iVar0 /*17*/])->f_14), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_BlendType", 64);
		_NAMESPACE59::_0xB25B5A375BE5BE26(&((uParam0->f_5[iVar0 /*17*/])->f_15), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_LayerType", 64);
		_NAMESPACE59::_0xB25B5A375BE5BE26(&((uParam0->f_5[iVar0 /*17*/])->f_16), &Var9);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_373(var uParam0, struct<8> Param1)
{
	struct<8> Var0;
	struct<8> Var8;

	Var8 = { Param1 };
	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 2, &Var8);
	Var0 = { Var8 };
	StringConCat(&Var0, "iLocationIndex", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0, &Var0);
	Var0 = { Var8 };
	StringConCat(&Var0, "iVariation", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var0);
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

void func_374(var uParam0, struct<8> Param1)
{
	struct<8> Var0;
	int iVar8;

	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 7, &Param1);
	Var0 = { Param1 };
	StringConCat(&Var0, ".iNxtIndex", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0, &Var0);
	Var0 = { Param1 };
	StringConCat(&Var0, ".iFavEm", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(&(uParam0->f_1), &Var0);
	Var0 = { Param1 };
	StringConCat(&Var0, ".emArray", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_2), 5, &Var0);
	iVar8 = 0;
	while (iVar8 <= 3)
	{
		Var0 = { Var0 };
		StringConCat(&Var0, ".em_", 64);
		StringIntConCat(&Var0, iVar8, 64);
		_NAMESPACE59::_0xB25B5A375BE5BE26(uParam0->f_2[iVar8], &Var0);
		iVar8++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

char* func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "tooltips/tooltip(%i)";
		case 1:
			return "tooltips/tooltip";
		case 2:
			return ":label";
		case 3:
			return ":duration";
		case 4:
			return ":onlyInSP";
		case 5:
			return ":onlyInMP";
		case 6:
			return ":requiredMissionID";
	}
	return "";
}

void func_381(int iParam0)
{
	int iVar0;
	struct<22> Var1;

	iVar0 = NETWORK::_0x27B1AE4D8C652F08(iParam0);
	StringCopy(&(Var1.f_7), NETWORK::_0xE59F4924BD3A718D(iVar0), 64);
	NETWORK::_0x16EFB123C4451032(iVar0, &Var1);
	StringCopy(&(Var1.f_17), NETWORK::_0xE79BA3BC265895DA(iVar0), 24);
	Var1.f_15 = iParam0;
	Var1.f_21 = NETWORK::_0x5ED39DA62BEB1330(iVar0);
	aggregate_func_7565(&Var1);
}

bool func_384()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

bool func_385(struct<18> Param0, var uParam18, var uParam19, var uParam20, var uParam21, int iParam22)
{
	int iVar0;

	iVar0 = aggregate_func_4079();
	if (iVar0 == -1)
	{
		return false;
	}
	*(Global_1070355->f_14.f_356[iVar0 /*64*/]) = { Param0.f_7 };
	(Global_1070355->f_14.f_356[iVar0 /*64*/])->f_8 = { Param0.f_17 };
	(Global_1070355->f_14.f_356[iVar0 /*64*/])->f_11 = Param0.f_15;
	(Global_1070355->f_14.f_356[iVar0 /*64*/])->f_61 = 1;
	(Global_1070355->f_14.f_356[iVar0 /*64*/])->f_63 = iParam22;
	aggregate_func_4293(&((Global_1070355->f_14.f_356[iVar0 /*64*/])->f_50), 1);
	return true;
}

void func_394(var uParam0)
{
	Global_1572887->f_248.f_12 = { *uParam0 };
}

void func_395(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<39> Var2;
	int iVar41;

	iVar0 = 29;
	while (iVar0 >= 0)
	{
		Var2 = { *(Global_1939221->f_242.f_14[iVar0 /*39*/]) };
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_26);
		iVar41 = iVar1;
		if (iParam0 != iVar41)
		{
		}
		else
		{
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT(Var2.f_27);
			if (iParam1 != iVar1)
			{
			}
			else
			{
				aggregate_func_1546(Var2);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_398(var uParam0)
{
	Global_1572887->f_248.f_3 = { *uParam0 };
}

int func_400()
{
	return Global_1572887->f_248;
}

int func_407()
{
	return Global_1572887->f_248.f_61;
}

bool func_408(int iParam0)
{
	return aggregate_func_4240(((*Global_1055965)[iParam0 /*436*/])->f_153.f_10, 4);
}

int func_429()
{
	if (Global_1572887->f_248.f_88 != 0)
	{
		return 2;
	}
	if (Global_1572887->f_248.f_66 != -1)
	{
		return 2;
	}
	if (Global_1572887->f_248.f_86 > 2 || Global_1572887->f_248.f_87 > 2)
	{
		return 2;
	}
	if (Global_1572887->f_248.f_86 == 2)
	{
		Global_1572887->f_248.f_86 = 0;
		Global_1572887->f_248.f_87 = 0;
		return 1;
	}
	return 0;
}

void func_452(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	vector3 vVar6;

	vVar2 = { vParam0 };
	iVar0 = func_532(vParam0);
	if (iVar0 != -1)
	{
		iVar1 = ((*Global_1887327)[iVar0 /*36*/])->f_5;
		if (VOLUME::_DOES_VOLUME_EXIST(iVar1))
		{
			vVar2 = { VOLUME::_0xF70F00013A62F866(iVar1) };
		}
	}
	else
	{
		fVar5 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
		if (!aggregate_func_1676(&vVar2, &fVar5, 0))
		{
			vVar2 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
		}
	}
	vVar6.x = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	vVar6.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-3f, 3f);
	vVar2 = { vVar2 + vVar6 };
	vParam0 = { vParam0 + vVar6 };
	aggregate_func_6542(vVar2, 0f, vParam0, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1, 1);
	aggregate_func_7866(0);
}

bool func_457()
{
	if (&Global_1130954 == 2)
	{
		return true;
	}
	return false;
}

void func_466()
{
	if (aggregate_func_6353(1024))
	{
		aggregate_func_4974(1024);
	}
}

int func_505(int iParam0)
{
	return 60000;
}

void func_506(var uParam0, struct<8> Param1)
{
	int iVar0;
	struct<8> Var1;
	struct<8> Var9;

	_NAMESPACE59::_0x443174C20B8B9E7F(uParam0, 119, &Param1);
	Var1 = { Param1 };
	StringConCat(&Var1, "_iOutfitHash", 64);
	_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0, &Var1);
	Var1 = { Param1 };
	StringConCat(&Var1, "_Array", 64);
	_NAMESPACE59::_0x81F4E92BE3958364(&(uParam0->f_1), 118, &Var1);
	iVar0 = 0;
	while (iVar0 <= 38)
	{
		Var1 = { Param1 };
		StringConCat(&Var1, "_Array_Idx", 64);
		StringIntConCat(&Var1, iVar0, 64);
		_NAMESPACE59::_0x443174C20B8B9E7F(uParam0->f_1[iVar0 /*3*/], 3, &Var1);
		Var9 = { Var1 };
		StringConCat(&Var9, "_CompHash", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(uParam0->f_1[iVar0 /*3*/], &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_WearHash", 64);
		_NAMESPACE59::_0x529B9CCD0972AF4D(&((uParam0->f_1[iVar0 /*3*/])->f_1), &Var9);
		Var9 = { Var1 };
		StringConCat(&Var9, "_eFlags", 64);
		_NAMESPACE59::_0xB25B5A375BE5BE26(&((uParam0->f_1[iVar0 /*3*/])->f_2), &Var9);
		_NAMESPACE59::_0xE0B45E983BFC0768();
		iVar0++;
	}
	_NAMESPACE59::_0xA844FEB5C22C2C74();
	_NAMESPACE59::_0xE0B45E983BFC0768();
}

int func_532(vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = -1;
	fVar1 = 999999.9f;
	if (aggregate_func_4268(vParam0))
	{
		return -1;
	}
	iVar3 = 0;
	while (iVar3 < Global_1893575->f_161)
	{
		iVar2 = &Global_1893575->f_10[iVar3];
		fVar4 = BUILTIN::VDIST2(vParam0, ((*Global_1887327)[iVar2 /*36*/])->f_7);
		if (fVar4 < fVar1)
		{
			iVar0 = iVar2;
			fVar1 = fVar4;
		}
		iVar3++;
	}
	if (aggregate_func_4301(iVar0))
	{
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

void func_604(var uParam0)
{
	var uVar0;

	*uParam0 = 23;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uVar0 = aggregate_func_4507(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 39, &uVar0);
}

int func_609(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	vVar0.f_2 = -2;
	vVar0.f_1 = uParam0;
	vVar0.x = aggregate_func_8052(iParam1);
	Global_1124870->f_1908.f_3 = bParam2;
	if (bParam2)
	{
		if (!aggregate_func_7985(vVar0, 1))
		{
			return 0;
		}
		aggregate_func_7775(1);
	}
	if (aggregate_func_1320(vVar0, 0))
	{
		if (iParam3 == 0)
		{
			aggregate_func_8536(vVar0.y);
		}
		return 1;
	}
	return 0;
}

