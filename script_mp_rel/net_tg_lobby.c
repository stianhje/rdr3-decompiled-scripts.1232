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
	int iLocal_18 = 0;
	var uLocal_19 = -1;
	var uLocal_20 = -1;
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
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_78 = 4;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = -1;
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
	var uLocal_97 = -1;
	var uLocal_98 = -1;
	var uLocal_99 = -1;
	var uScriptParam_0 = -1;
#endregion

void __EntryFunction__()
{
	var uVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	uVar0 = uScriptParam_0;
	func_1(uVar0);
	func_2(&iLocal_18, &uScriptParam_0);
	while (!aggregate_func_523(1, 1) && iLocal_18 != 19)
	{
		aggregate_func_4444(&iLocal_18);
		BUILTIN::WAIT(0);
	}
	func_5(&iLocal_18);
	aggregate_func_2819();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(int iParam0, var uParam1)
{
	iParam0->f_1 = *uParam1;
	iParam0->f_2 = aggregate_func_8493(iParam0->f_1);
	iParam0->f_3 = { aggregate_func_8514(iParam0->f_1) };
	func_9(iParam0);
}

bool func_5(int iParam0)
{
	struct<2> Var0;

	if (SCRIPTS::_DOES_THREAD_EXIST(iParam0->f_7) && SCRIPTS::IS_THREAD_ACTIVE(iParam0->f_7, false))
	{
		SCRIPTS::_0x7DE4643157AD646C(iParam0->f_7);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0->f_6))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0->f_6);
	}
	if (!aggregate_func_2514(iParam0->f_1))
	{
		if (aggregate_func_2920(iParam0->f_15))
		{
			_NAMESPACE71::_0x2F901291EF177B02(iParam0->f_15, 0);
		}
	}
	if (aggregate_func_4278(iParam0, 2))
	{
		NETWORK::_0x78335E12DB0BF961(func_14());
	}
	func_15(iParam0, 0);
	aggregate_func_7727(iParam0);
	func_17(iParam0->f_2);
	func_18(iParam0, -1);
	func_19(iParam0);
	if (aggregate_func_7654(32768))
	{
		aggregate_func_4580();
	}
	aggregate_func_4285(iParam0);
	aggregate_func_8452(2);
	func_24();
	Var0 = { func_25(iParam0->f_1) };
	if (aggregate_func_4359(aggregate_func_4491(), Var0))
	{
		aggregate_func_7545();
	}
	if (aggregate_func_4718(Var0) || aggregate_func_4521(Var0))
	{
		aggregate_func_2037(Var0, 0, -1, 0);
		aggregate_func_4643(0);
	}
	return true;
}

void func_9(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "relPlayerClone", 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam0->f_1, 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(iParam0->f_14));
	func_33(2, iParam0->f_14);
}

void func_10(int iParam0)
{
	if (*iParam0 != 18 && func_34(iParam0))
	{
		func_35(iParam0, 18, 1, 1);
	}
	func_36(iParam0);
	switch (*iParam0)
	{
		case 0:
			func_37(iParam0);
			break;
		case 1:
			func_38(iParam0);
			break;
		case 2:
			func_39(iParam0);
			break;
		case 3:
			func_40(iParam0);
			break;
		case 4:
			func_41(iParam0);
			break;
		case 5:
			func_42(iParam0);
			break;
		case 6:
			func_43(iParam0);
			break;
		case 7:
			func_44(iParam0);
			break;
		case 8:
			func_45(iParam0);
			break;
		case 9:
			func_46(iParam0);
			break;
		case 10:
			func_47(iParam0);
			break;
		case 11:
			func_48(iParam0);
			break;
		case 12:
			func_49(iParam0);
			break;
		case 13:
			func_50(iParam0);
			break;
		case 14:
			func_51(iParam0);
			break;
		case 15:
			func_52(iParam0);
			break;
		case 16:
			func_53(iParam0);
			break;
		case 17:
			func_54(iParam0);
			break;
		case 18:
			func_55(iParam0);
			break;
	}
}

int func_14()
{
	if (aggregate_func_7654(2))
	{
	}
	return 152;
}

void func_15(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!aggregate_func_4278(iParam0, 32))
		{
			aggregate_func_4266(iParam0, 32);
			aggregate_func_1579(1, 1, 0, 1, 0, 0, 1, 0, 0);
		}
	}
	else if (aggregate_func_4278(iParam0, 32))
	{
		aggregate_func_4266(iParam0, 32);
		aggregate_func_1579(0, 1, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_17(int iParam0)
{
	if (MINIGAME::_0x3EECAADAB0D9FE29() == func_63(iParam0))
	{
		MINIGAME::_0x18A0D48DF9211C07();
	}
}

void func_18(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0->f_79 != iParam1)
	{
		iParam0->f_79 = iParam1;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return;
		}
		iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		if (iParam0->f_79 == -1)
		{
			if (DECORATOR::DECOR_EXIST_ON(iVar0, "iMinigameHash"))
			{
				DECORATOR::DECOR_REMOVE(iVar0, "iMinigameHash");
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar0, "iMinigameSeat"))
			{
				DECORATOR::DECOR_REMOVE(iVar0, "iMinigameSeat");
			}
		}
		else
		{
			if (!DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("iMinigameHash", 3))
			{
				return;
			}
			if (!DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("iMinigameSeat", 3))
			{
				return;
			}
			DECORATOR::DECOR_SET_INT(iVar0, "iMinigameHash", iParam0->f_1);
			DECORATOR::DECOR_SET_INT(iVar0, "iMinigameSeat", iParam1);
		}
	}
}

void func_19(int iParam0)
{
	if (aggregate_func_4278(iParam0, 128))
	{
		aggregate_func_2144(65536);
		aggregate_func_4266(iParam0, 128);
	}
}

void func_24()
{
	func_67();
	aggregate_func_8452(128);
	aggregate_func_8452(256);
	aggregate_func_8452(512);
	aggregate_func_8452(1024);
	aggregate_func_8452(2048);
	aggregate_func_8452(4096);
	aggregate_func_8452(8192);
	aggregate_func_8452(16384);
	aggregate_func_8452(32768);
}

struct<2> func_25(int iParam0)
{
	return (Global_1130954->f_1[iParam0 /*27*/])->f_4;
}

void func_33(int iParam0, int iParam1)
{
	aggregate_func_2565(iParam0, iParam1, 2097877918);
	aggregate_func_2565(iParam0, iParam1, -1158905413);
	aggregate_func_2565(iParam0, iParam1, 358397622);
	aggregate_func_2565(iParam0, iParam1, 65999835);
	aggregate_func_2565(iParam0, iParam1, 814443795);
	aggregate_func_2565(iParam0, iParam1, 519621102);
	aggregate_func_2565(iParam0, iParam1, -1628223003);
	aggregate_func_2565(iParam0, iParam1, 1278256225);
	aggregate_func_2565(iParam0, iParam1, 2038628101);
	aggregate_func_2565(iParam0, iParam1, 1742494648);
	aggregate_func_2565(iParam0, iParam1, -1010166918);
	aggregate_func_2565(iParam0, iParam1, 660170868);
	aggregate_func_2565(iParam0, iParam1, -1278312096);
	aggregate_func_2565(iParam0, iParam1, -509158128);
	aggregate_func_2565(iParam0, iParam1, -226656579);
	aggregate_func_2565(iParam0, iParam1, 2115868159);
	aggregate_func_2565(iParam0, iParam1, 1495813101);
	aggregate_func_2565(iParam0, iParam1, 1197385818);
	aggregate_func_2565(iParam0, iParam1, 1015780020);
	aggregate_func_2565(iParam0, iParam1, -1286733825);
	aggregate_func_2565(iParam0, iParam1, -1670393277);
	aggregate_func_2565(iParam0, iParam1, -415733461);
	aggregate_func_2565(iParam0, iParam1, -1207924036);
	aggregate_func_2565(iParam0, iParam1, 497702414);
	aggregate_func_2565(iParam0, iParam1, 719188085);
	aggregate_func_2565(iParam0, iParam1, 43753457);
	aggregate_func_2565(iParam0, iParam1, 771290791);
	aggregate_func_2565(iParam0, iParam1, 20356387);
	aggregate_func_2565(iParam0, iParam1, 309149584);
	aggregate_func_2565(iParam0, iParam1, 1613781781);
	aggregate_func_2565(iParam0, iParam1, 1693607065);
	aggregate_func_2565(iParam0, iParam1, 1132176120);
	aggregate_func_2565(iParam0, iParam1, 869270437);
}

bool func_34(int iParam0)
{
	var uVar0;

	if (aggregate_func_8511())
	{
		return true;
	}
	else if (aggregate_func_8493(iParam0->f_1) == -1)
	{
		return true;
	}
	else if (aggregate_func_2889(func_25(iParam0->f_1), 0, 2048))
	{
		return true;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return true;
	}
	else if (BUILTIN::VDIST(Global_36, iParam0->f_3) > 100f)
	{
		if (aggregate_func_4497(255))
		{
			return false;
		}
		if (aggregate_func_4956())
		{
			return false;
		}
		if (PLAYER::_0x0B7803F6F7BB43E0())
		{
			return false;
		}
		return true;
	}
	else if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && !aggregate_func_4278(iParam0, 1))
	{
		return true;
	}
	if (*iParam0 > 8 && *iParam0 < 14)
	{
		if (!func_94(iParam0->f_2, &uVar0))
		{
			return true;
		}
	}
	return false;
}

void func_35(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		iParam0->f_80 = MISC::GET_GAME_TIMER();
	}
	if (bParam3)
	{
		iParam0->f_81 = MISC::GET_GAME_TIMER();
	}
}

void func_36(int iParam0)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		fVar0 = BUILTIN::VDIST(Global_36, iParam0->f_3);
		if (fVar0 < 3f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2, true);
		}
		if (fVar0 < 6f)
		{
			PED::SET_PED_RESET_FLAG(Global_35, 219, true);
			PED::SET_PED_RESET_FLAG(Global_35, 220, true);
			PED::SET_PED_RESET_FLAG(Global_35, 187, true);
			PED::SET_PED_RESET_FLAG(Global_35, 129, true);
		}
	}
}

void func_37(int iParam0)
{
	if (!func_95())
	{
		return;
	}
	if (HUD::_0x2C729F2B94CEA911(func_96(iParam0->f_2)))
	{
		HUD::_0xF66090013DE648D5(func_96(iParam0->f_2));
	}
	func_35(iParam0, 1, 1, 1);
}

void func_38(int iParam0)
{
	bool bVar0;

	bVar0 = true;
	if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
		if (iParam0->f_81 == -1)
		{
		}
	}
	else if (aggregate_func_7654(4))
	{
		if (aggregate_func_4497(255))
		{
			bVar0 = false;
		}
	}
	else if (HUD::_0x2C729F2B94CEA911(func_96(iParam0->f_2)) && !HUD::_0xD0976CC34002DB57(func_96(iParam0->f_2)))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!aggregate_func_4956())
		{
			func_35(iParam0, 2, 1, 1);
		}
		else if (aggregate_func_7654(4))
		{
			func_35(iParam0, 6, 1, 1);
		}
	}
}

void func_39(int iParam0)
{
	float fVar0;

	if (aggregate_func_8512(iParam0->f_1))
	{
		func_5(iParam0);
		func_35(iParam0, 15, 1, 1);
		return;
	}
	if ((PLAYER::_0x0B7803F6F7BB43E0() && PLAYER::_0xC74EB3F2EC169F6B(-955807603) == 356437857) && PLAYER::_0xC74EB3F2EC169F6B(-769668011) == 3)
	{
		func_35(iParam0, 6, 1, 1);
		return;
	}
	if (!aggregate_func_4956())
	{
		fVar0 = func_98(iParam0->f_1);
		if (((BUILTIN::VDIST(Global_36, iParam0->f_3) < fVar0 && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !PED::IS_PED_DEAD_OR_DYING(Global_35, true))
		{
			if (iParam0->f_77 == 0f)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(Global_36, &(iParam0->f_77), 0);
			}
			if (func_99(iParam0))
			{
				Global_1130954->f_143 = iParam0->f_1;
				func_24();
				func_35(iParam0, 3, 1, 1);
				aggregate_func_7824(32768);
				aggregate_func_6633(9, 0);
			}
		}
		else
		{
			aggregate_func_7727(iParam0);
			if (iParam0->f_77 != 0f)
			{
				iParam0->f_77 = 0f;
			}
		}
	}
	else
	{
		aggregate_func_7727(iParam0);
		if (aggregate_func_7654(4))
		{
			func_35(iParam0, 6, 1, 1);
		}
	}
}

void func_40(int iParam0)
{
	float fVar0;
	struct<61> Var1;
	struct<7> Var62[7];
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	struct<61> Var118;
	struct<61> Var179;

	if (aggregate_func_8512(iParam0->f_1))
	{
		func_5(iParam0);
		func_35(iParam0, 15, 1, 1);
		return;
	}
	if (!aggregate_func_4956())
	{
		fVar0 = func_98(iParam0->f_1);
		if ((((BUILTIN::VDIST(Global_36, iParam0->f_3) < fVar0 && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !ENTITY::IS_ENTITY_DEAD(Global_35)) && !PED::IS_PED_DEAD_OR_DYING(Global_35, true)) && !aggregate_func_1569())
		{
			if (iParam0->f_77 == 0f)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(Global_36, &(iParam0->f_77), 0);
			}
			if (!VOLUME::_0x92A78D0BEDB332A3(iParam0->f_6))
			{
				aggregate_func_4014(&(iParam0->f_6), iParam0->f_3 + Vector(0.9f, 0f, 0f), 0f, 0f, 0f, (fVar0 + 1f), (fVar0 + 1f), 0.9f, func_103(iParam0->f_2));
			}
			if (aggregate_func_1534(Global_35, 0, 0, 1) == joaat("weapon_kit_camera"))
			{
				aggregate_func_3307(0);
			}
			if (aggregate_func_7654(256))
			{
				aggregate_func_8452(2);
				aggregate_func_8452(32768);
				aggregate_func_4580();
				if (!_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
				{
					func_35(iParam0, 6, 1, 1);
				}
				else
				{
					aggregate_func_4266(iParam0, 32768);
					Var1.f_44 = 4;
					Var1.f_52 = -1;
					iParam0->f_16 = { Var1 };
					StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
					StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGMS", 16);
					iParam0->f_16.f_43 = 2;
					iParam0->f_16.f_44[0] = 717564616; /* GXTEntry: "Continue Alone" */
					iParam0->f_16.f_44[1] = 433487458; /* GXTEntry: "Cancel" */
					aggregate_func_482(&(iParam0->f_16), 0);
					func_35(iParam0, 4, 1, 1);
				}
			}
			else if (aggregate_func_7654(128))
			{
				aggregate_func_5122(536870912);
				aggregate_func_7824(2);
				aggregate_func_8452(32768);
				aggregate_func_4580();
				if (!_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
				{
					func_35(iParam0, 6, 1, 1);
				}
				else if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
				{
					iVar116 = func_109(iParam0->f_2);
					iVar113 = _NAMESPACE26::_0xD1BF325C8252A982(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), &Var62);
					iVar112 = 0;
					while (iVar112 <= (iVar113 - 1))
					{
						iVar115 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var62[iVar112 /*7*/]);
						if (!NETWORK::_0x255A5EF65EDA9167(iVar115) || PLAYER::IS_PLAYER_DEAD(iVar115))
						{
						}
						else
						{
							iVar117 = func_110(iVar116, iVar115);
							if (iVar117 == -993470410)
							{
								iVar114++;
							}
						}
						iVar112++;
					}
					Var118.f_44 = 4;
					Var118.f_52 = -1;
					if (iVar114 > 0)
					{
						aggregate_func_4266(iParam0, 16384);
						iParam0->f_16 = { Var118 };
						StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
						StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGLB", 16);
						iParam0->f_16.f_43 = 1;
						iParam0->f_16.f_44[0] = joaat("ib_ok");
						aggregate_func_482(&(iParam0->f_16), 0);
						func_35(iParam0, 4, 1, 1);
					}
					else if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > aggregate_func_8046(iParam0->f_2))
					{
						aggregate_func_4266(iParam0, 8192);
						iParam0->f_16 = { Var118 };
						StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
						StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGLM", 16);
						iParam0->f_16.f_43 = 1;
						iParam0->f_16.f_44[0] = joaat("ib_ok");
						aggregate_func_482(&(iParam0->f_16), 0);
						func_35(iParam0, 4, 1, 1);
					}
					else
					{
						func_35(iParam0, 6, 1, 1);
					}
				}
				else
				{
					aggregate_func_4266(iParam0, 4096);
					Var179.f_44 = 4;
					Var179.f_52 = -1;
					iParam0->f_16 = { Var179 };
					StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
					StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGMA", 16);
					iParam0->f_16.f_43 = 2;
					iParam0->f_16.f_44[0] = 717564616; /* GXTEntry: "Continue Alone" */
					iParam0->f_16.f_44[1] = 433487458; /* GXTEntry: "Cancel" */
					aggregate_func_482(&(iParam0->f_16), 0);
					func_35(iParam0, 4, 1, 1);
				}
			}
			else if (!aggregate_func_4625())
			{
				func_67();
				aggregate_func_8452(32768);
				func_35(iParam0, 2, 1, 1);
			}
		}
		else
		{
			if (iParam0->f_77 != 0f)
			{
				iParam0->f_77 = 0f;
			}
			if (aggregate_func_4625())
			{
				aggregate_func_4580();
			}
			func_67();
			aggregate_func_8452(32768);
			func_35(iParam0, 2, 1, 1);
		}
	}
	else
	{
		if (aggregate_func_4625())
		{
			aggregate_func_4580();
		}
		func_67();
		aggregate_func_8452(32768);
		if (aggregate_func_7654(4))
		{
			func_35(iParam0, 6, 1, 1);
		}
	}
}

void func_41(int iParam0)
{
	int iVar0;

	if (_NAMESPACE76::_0x07954320D77F6A3D(iParam0->f_16) >= 3)
	{
		iVar0 = aggregate_func_799(&(iParam0->f_16), -1218098620, &(iParam0->f_16.f_49), 1);
		if (aggregate_func_4278(iParam0, 4096) || aggregate_func_4278(iParam0, 32768))
		{
			if (iVar0 == 0)
			{
				aggregate_func_346(1);
				_NAMESPACE76::_0x00A15B94CBA4F76F(iParam0->f_16);
				iParam0->f_16 = 0;
				aggregate_func_4266(iParam0, 4096);
				aggregate_func_4266(iParam0, 32768);
				func_35(iParam0, 5, 1, 1);
			}
			else if (iVar0 == 1)
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(iParam0->f_16);
				iParam0->f_16 = 0;
				aggregate_func_5122(536870912);
				aggregate_func_8452(2);
				func_24();
				aggregate_func_4266(iParam0, 4096);
				aggregate_func_4266(iParam0, 32768);
				func_35(iParam0, 2, 1, 1);
			}
		}
		else if (aggregate_func_4278(iParam0, 8192))
		{
			if (iVar0 == 0)
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(iParam0->f_16);
				iParam0->f_16 = 0;
				aggregate_func_5122(536870912);
				aggregate_func_8452(2);
				func_24();
				aggregate_func_4266(iParam0, 8192);
				func_35(iParam0, 2, 1, 1);
			}
		}
		else if (aggregate_func_4278(iParam0, 16384))
		{
			if (iVar0 == 0)
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(iParam0->f_16);
				iParam0->f_16 = 0;
				aggregate_func_5122(536870912);
				aggregate_func_8452(2);
				func_24();
				aggregate_func_4266(iParam0, 16384);
				func_35(iParam0, 2, 1, 1);
			}
		}
	}
}

void func_42(int iParam0)
{
	if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
	{
		return;
	}
	func_35(iParam0, 6, 1, 1);
}

void func_43(int iParam0)
{
	if (aggregate_func_7654(4))
	{
		if (aggregate_func_4497(255))
		{
			return;
		}
		aggregate_func_4266(iParam0, 1);
		aggregate_func_7824(2);
	}
	aggregate_func_4904(func_25(iParam0->f_1), 1);
	aggregate_func_7824(1);
	func_35(iParam0, 7, 0, 1);
}

void func_44(int iParam0)
{
	var uVar0;
	vector3 vVar1;

	if (aggregate_func_4278(iParam0, 512))
	{
		if (aggregate_func_6090())
		{
			aggregate_func_4266(iParam0, 2048);
		}
		if (((!aggregate_func_4278(iParam0, 1024) && aggregate_func_4278(iParam0, 2048)) && !aggregate_func_6090()) || Global_1099293->f_26.f_45.f_5)
		{
			vVar1 = { aggregate_func_8474(iParam0->f_1, &uVar0) };
			if (!aggregate_func_4268(vVar1))
			{
				aggregate_func_5123(vVar1, uVar0, 1);
			}
			aggregate_func_4266(iParam0, 1024);
		}
		if (aggregate_func_4497(255))
		{
			aggregate_func_5070(1);
			return;
		}
	}
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		aggregate_func_4266(iParam0, 512);
		return;
	}
	if (!aggregate_func_4278(iParam0, 1))
	{
		if (func_126(2, func_122(iParam0->f_2), 3, func_123(iParam0->f_1), func_25(iParam0->f_1), func_124(), -1, 0, func_125(), 0))
		{
			if (aggregate_func_7654(2))
			{
				aggregate_func_5122(536870912);
			}
			aggregate_func_4266(iParam0, 1);
		}
	}
	else if (!aggregate_func_4956())
	{
		if (!aggregate_func_7654(4))
		{
			if (!aggregate_func_7654(262144))
			{
				aggregate_func_2975(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
			}
			func_35(iParam0, 16, 1, 1);
		}
		func_24();
	}
	else if (aggregate_func_4478())
	{
		if (!SCRIPTS::_DOES_THREAD_EXIST(iParam0->f_7))
		{
			SCRIPTS::REQUEST_SCRIPT(func_130(iParam0->f_2));
		}
		if (!aggregate_func_7654(2))
		{
			NETWORK::_0xE546BDA1B3E288EE(func_14());
			if (NETWORK::NETWORK_IS_HOST() && !aggregate_func_4240(NETWORK::_0x51F33DBC1A41CBFD(), 8))
			{
				return;
			}
		}
		aggregate_func_3304(1);
		NETWORK::_0x0AE241A4A9ADEEEC(0);
		aggregate_func_3707();
		Global_1130954->f_143 = iParam0->f_1;
		if (aggregate_func_7654(4))
		{
			aggregate_func_8452(4);
			aggregate_func_4266(iParam0, 256);
		}
		else
		{
			aggregate_func_7824(512);
			aggregate_func_7824(1024);
		}
		aggregate_func_4266(iParam0, 1);
		aggregate_func_4266(iParam0, 2);
		if (!aggregate_func_7654(8))
		{
			aggregate_func_4266(iParam0, 32);
		}
		func_35(iParam0, 8, 0, 1);
	}
}

void func_45(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (!aggregate_func_4278(iParam0, 4))
	{
		iVar0 = 0;
		if (aggregate_func_7654(2))
		{
			iVar0 = 1;
		}
		if (func_134(iParam0->f_2, iParam0->f_1, iVar0))
		{
			aggregate_func_4266(iParam0, 4);
		}
		else
		{
			aggregate_func_7661(512);
			func_35(iParam0, 16, 1, 1);
		}
	}
	else
	{
		bVar1 = false;
		if (func_94(iParam0->f_2, &bVar1))
		{
			aggregate_func_2976(func_25(iParam0->f_1), 1, 0, 1);
			aggregate_func_4969(func_137(iParam0->f_2));
			func_35(iParam0, 9, 0, 1);
		}
		else if (bVar1)
		{
			aggregate_func_7661(512);
			func_35(iParam0, 16, 1, 1);
		}
	}
}

void func_46(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<11> Var3;

	if (!aggregate_func_4956())
	{
		aggregate_func_2975(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
		func_35(iParam0, 16, 1, 1);
	}
	if (!aggregate_func_4278(iParam0, 8))
	{
		MINIGAME::_MINIGAME_REQUEST_SEAT_AT_TABLE(&(iParam0->f_9));
		aggregate_func_4266(iParam0, 8);
	}
	else if (!aggregate_func_4278(iParam0, 16))
	{
		bVar1 = false;
		if (func_139(iParam0, &bVar1, &iVar0))
		{
			if (bVar1)
			{
				aggregate_func_4266(iParam0, 16);
			}
			else
			{
				if (iVar0 == -908749671)
				{
					func_140(iParam0->f_2, 1320901890, 0);
				}
				else
				{
					func_140(iParam0->f_2, -1700673948, 0);
				}
				func_35(iParam0, 16, 1, 1);
			}
		}
	}
	else
	{
		iVar2 = MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE();
		if (iVar2 == -1553724839)
		{
			Var3.f_10 = 6;
			if (MINIGAME::_MINIGAME_GET_NEXT_EVENT(&Var3, 72))
			{
				if (Var3.f_9 < 0 || Var3.f_9 >= aggregate_func_8046(iParam0->f_2))
				{
					aggregate_func_2975(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
					func_35(iParam0, 16, 1, 1);
					return;
				}
				func_18(iParam0, Var3.f_9);
				func_141(iParam0);
				func_35(iParam0, 10, 0, 1);
			}
			else
			{
				aggregate_func_2975(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
				func_35(iParam0, 16, 1, 1);
			}
		}
	}
}

void func_47(int iParam0)
{
	struct<36> Var0;

	if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
		func_35(iParam0, 16, 1, 1);
	}
	else
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(func_130(iParam0->f_2)))
		{
			return;
		}
		Var0 = -1;
		Var0.f_1 = -1;
		Var0.f_2 = -1;
		Var0.f_4 = -1;
		Var0.f_4.f_1 = -1;
		Var0.f_13 = -1;
		Var0.f_14 = -1;
		Var0.f_25 = 6;
		Var0.f_32 = -1;
		Var0.f_33 = 255;
		Var0 = { *(Global_1130954->f_1[iParam0->f_1 /*27*/]) };
		Var0.f_14 = iParam0->f_2;
		Var0.f_16 = { iParam0->f_3 };
		Var0.f_19 = func_142(iParam0->f_1);
		Var0.f_21 = iParam0->f_1;
		Var0.f_23 = Global_35;
		Var0.f_33 = 255;
		Var0.f_35 = 0;
		Var0.f_32 = iParam0->f_79;
		(Global_1130954->f_1[iParam0->f_1 /*27*/])->f_12 = iParam0->f_79;
		Var0.f_23 = iParam0->f_13;
		if (aggregate_func_7654(2))
		{
			Var0.f_34 = 1;
			Var0.f_20 = aggregate_func_7833(iParam0->f_1, 1);
		}
		else
		{
			Var0.f_34 = 0;
			Var0.f_20 = aggregate_func_7833(iParam0->f_1, 0);
			if (aggregate_func_7826(iParam0->f_1))
			{
				NETWORK::_0x29FE035D35B8589C(0);
			}
		}
		iParam0->f_7 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_130(iParam0->f_2), &Var0, 36, 6500);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_130(iParam0->f_2));
		func_145(iParam0->f_1);
		aggregate_func_9328(iParam0->f_1, 1);
		MISC::CLEAR_AREA(iParam0->f_3, 2f, 65536);
		if (SCRIPTS::_DOES_THREAD_EXIST(iParam0->f_7))
		{
			if (aggregate_func_7654(8))
			{
				aggregate_func_7824(32);
				func_35(iParam0, 12, 1, 1);
			}
			else if (aggregate_func_4278(iParam0, 512))
			{
				aggregate_func_7824(32);
				func_35(iParam0, 12, 1, 1);
			}
			else
			{
				aggregate_func_3877();
				func_35(iParam0, 11, 0, 1);
			}
		}
	}
}

void func_48(int iParam0)
{
	if (aggregate_func_6696() || aggregate_func_3456())
	{
		if (iParam0->f_80 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_80) > 1000)
		{
		}
		else
		{
			return;
		}
	}
	else if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
	}
	else
	{
		return;
	}
	if (aggregate_func_5174(4194304))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_151(&(Global_1572887->f_22.f_59));
		aggregate_func_5122(4194304);
	}
	aggregate_func_7824(32);
	func_35(iParam0, 12, 1, 1);
}

void func_49(int iParam0)
{
	bool bVar0;

	if (!aggregate_func_4956())
	{
		aggregate_func_2975(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
		func_35(iParam0, 16, 1, 1);
	}
	else if (!SCRIPTS::_DOES_THREAD_EXIST(iParam0->f_7))
	{
		aggregate_func_2975(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
		func_35(iParam0, 16, 1, 1);
	}
	if (aggregate_func_4278(iParam0, 256))
	{
		bVar0 = true;
		if (!func_154(func_152(iParam0), aggregate_func_8513(iParam0->f_1), 1))
		{
			bVar0 = false;
		}
		if (HUD::_0x2C729F2B94CEA911(func_96(iParam0->f_2)) && !HUD::_0xD0976CC34002DB57(func_96(iParam0->f_2)))
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			return;
		}
	}
	if (aggregate_func_8546(iParam0->f_1, 2))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		if (aggregate_func_7654(8))
		{
			aggregate_func_8452(8);
			func_35(iParam0, 13, 0, 1);
		}
		else
		{
			func_35(iParam0, 13, 1, 1);
		}
	}
}

void func_50(int iParam0)
{
	int iVar0;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (iParam0->f_80 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_80) > 333)
		{
			func_15(iParam0, 0);
		}
		else
		{
			return;
		}
	}
	else
	{
		iParam0->f_80 = MISC::GET_GAME_TIMER();
		if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
		{
		}
		else
		{
			return;
		}
	}
	iVar0 = func_156(iParam0->f_1);
	if (iVar0 == 0)
	{
		func_157(iParam0->f_1, MISC::GET_FRAME_COUNT() + 1);
	}
	else if (MISC::GET_FRAME_COUNT() >= iVar0)
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		AUDIO::_0x2E399EAFBEEA74D5();
		func_35(iParam0, 14, 1, 1);
	}
}

void func_51(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (!SCRIPTS::_DOES_THREAD_EXIST(iParam0->f_7))
	{
		bVar0 = true;
	}
	else if (aggregate_func_8546(iParam0->f_1, 4) && MISC::GET_FRAME_COUNT() >= func_158(iParam0->f_1))
	{
		bVar0 = true;
	}
	else if (aggregate_func_5607() == 1)
	{
		aggregate_func_7824(8);
		bVar0 = true;
	}
	if (bVar0)
	{
		if (aggregate_func_4956())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(Global_1273882->f_10))
			{
			}
			if (CAM::IS_SCREEN_FADING_OUT())
			{
			}
			NETWORK::_0x236905C700FDB54D();
		}
		if (aggregate_func_4587() == iParam0->f_1)
		{
			if (aggregate_func_7826(iParam0->f_1))
			{
				if (NETWORK::_0x273E04A3A7AD1F2D() == 0)
				{
					NETWORK::_0x29FE035D35B8589C(1);
				}
			}
			iVar1 = func_161(iParam0->f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, false, true);
				iParam0->f_13 = iVar1;
			}
			func_162();
			aggregate_func_7824(64);
		}
		func_35(iParam0, 16, 1, 1);
	}
}

void func_52(int iParam0)
{
	if (!aggregate_func_8512(iParam0->f_1))
	{
		func_35(iParam0, 16, 1, 1);
	}
}

void func_53(int iParam0)
{
	if (aggregate_func_4956())
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(Global_1273882->f_10))
		{
			NETWORK::_0x236905C700FDB54D();
		}
	}
	if (func_5(iParam0))
	{
		func_35(iParam0, 17, 1, 1);
	}
}

void func_54(int iParam0)
{
	struct<30> Var0;
	struct<9> Var30;
	int iVar39;
	vector3 vVar40;
	float fVar43;
	int iVar44;

	if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
	}
	else
	{
		if (aggregate_func_4497(255))
		{
			if (aggregate_func_7654(64))
			{
				if (aggregate_func_5519(255))
				{
					Var0.f_5 = 2;
					Var0.f_1 = { (Global_1130954->f_1[iParam0->f_1 /*27*/])->f_7 };
					Var0.f_16 = 1;
					Var0.f_6.f_9 = -432403087;
					Var0.f_6.f_6 = { Var0.f_1 };
					Var0.f_6 = { 1.5f, 1.5f, 5f };
					Var0.f_17.f_9 = -432403087;
					Var0.f_17.f_6 = { Var0.f_1 };
					Var0.f_17 = { 30f, 30f, 30f };
					Var30.f_5 = 1;
					if (!aggregate_func_1676(&(Var30.f_6), &Var30, 1))
					{
						Var30.f_6 = { (Global_1070355->f_22101.f_366[MISC::GET_RANDOM_INT_IN_RANGE(0, 16) /*272*/])->f_2 };
						Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
					}
					NETWORK::_0xF94A0D5B254375DF(32);
					NETWORK::_0xEB6027FD1B4600D5(5, true, 0.9f);
					iVar39 = 0;
					while (iVar39 <= 5)
					{
						vVar40 = { func_165(iParam0->f_1, (Global_1130954->f_1[iParam0->f_1 /*27*/])->f_12, iVar39, &fVar43) };
						if (!aggregate_func_4268(vVar40))
						{
							NETWORK::_0xFD1AC0B3858F224C(vVar40, fVar43);
						}
						iVar39++;
					}
					aggregate_func_5982(Var0, Var30, 0, 0, 0);
				}
			}
			return;
		}
		if ((aggregate_func_7654(8) && aggregate_func_7654(4)) && BUILTIN::VDIST(Global_36, iParam0->f_3) <= 100f)
		{
		}
		else
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			if (aggregate_func_4956())
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(Global_1273882->f_10))
				{
				}
				else
				{
					NETWORK::_0x236905C700FDB54D();
				}
				return;
			}
		}
	}
	iVar44 = 0;
	while (iVar44 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar44)))
		{
		}
		aggregate_func_7864(iVar44);
		aggregate_func_1329(iVar44, 0);
		aggregate_func_7864(iVar44);
		iVar44++;
	}
	aggregate_func_8452(16);
	func_169(iParam0);
	func_170();
	aggregate_func_8452(64);
	aggregate_func_5299(0);
	func_35(iParam0, 0, 1, 1);
}

void func_55(int iParam0)
{
	if (func_5(iParam0))
	{
		func_35(iParam0, 19, 1, 1);
	}
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1150372370;
		case 1:
			return 355424894;
		case 2:
			return -471827042;
		case 3:
			return -2033178055;
		default:
			break;
	}
	return 0;
}

void func_67()
{
	aggregate_func_8452(65536);
	aggregate_func_8452(131072);
	aggregate_func_8452(262144);
}

bool func_94(int iParam0, bool bParam1)
{
	if (MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(func_63(iParam0)))
	{
		return true;
	}
	else if (MINIGAME::_0x39654E1F68B78287())
	{
		*bParam1 = 1;
		return false;
	}
	return false;
}

bool func_95()
{
	if (&Global_1130954 == 2)
	{
		return true;
	}
	return false;
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR";
		default:
			break;
	}
	return "";
}

float func_98(int iParam0)
{
	return (Global_1130954->f_1[iParam0 /*27*/])->f_6;
}

bool func_99(int iParam0)
{
	float fVar0;

	fVar0 = func_98(iParam0->f_1);
	if (!aggregate_func_2875(iParam0->f_8) && func_200(iParam0))
	{
		if (!aggregate_func_2920(iParam0->f_15))
		{
			iParam0->f_8 = aggregate_func_2087(MISC::_CREATE_VAR_STRING(2, "NET_MG_CONTEXT_POKER"), joaat("INPUT_CONTEXT_Y"), iParam0->f_3, fVar0, 1, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		}
	}
	else
	{
		if (!func_202(iParam0))
		{
			aggregate_func_4583(iParam0->f_8, 0, 1, 1);
		}
		else
		{
			aggregate_func_4583(iParam0->f_8, 1, 1, 1);
		}
		if (aggregate_func_455(iParam0->f_8, 1))
		{
			aggregate_func_7727(iParam0);
			return true;
		}
	}
	return false;
}

char* func_103(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "Invalid";
		case 0:
			return "Blackjack";
		case 1:
			return "Dominoes";
		case 2:
			return "Poker";
		case 3:
			return "Five Finger Fillet";
		case 4:
			return "Milking Cows";
		case 5:
			return "Cleaning Stalls";
		case 6:
			return "Fence Building";
		case 7:
			return "Max Minigames";
	}
	return "Unknown Minigame";
}

int func_109(int iParam0)
{
	if (iParam0 == 2)
	{
		return -471827042;
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return -1;
	}
	iVar1 = iParam1;
	if (!aggregate_func_9217(iParam0, &iVar0))
	{
		return -1;
	}
	return &(((*Global_1055965)[iVar1 /*436*/])->f_431[iVar0]);
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 6;
		case 0:
			return 4;
		case 3:
			return 2;
		default:
			break;
	}
	return 1;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 9;
		default:
			break;
	}
	return -1;
}

int func_124()
{
	if (aggregate_func_7654(2))
	{
		return 268435457;
	}
	return 268435456;
}

bool func_125()
{
	if (aggregate_func_7654(2))
	{
		return 2;
	}
	return false;
}

bool func_126(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	struct<7> Var0;
	char cVar57[64];
	struct<56> Var65;

	if (!aggregate_func_7201(iParam2, iParam3))
	{
		return false;
	}
	if (aggregate_func_4956() && Global_1572887->f_106.f_75 != 8)
	{
		return false;
	}
	if (!aggregate_func_1745(Global_1273882->f_10))
	{
		return false;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	aggregate_func_3580(&Var0);
	aggregate_func_7026(iParam2, iParam3, iParam7, 1);
	aggregate_func_7083(Param4, 1);
	aggregate_func_4884(iParam6);
	aggregate_func_4884(bParam9);
	aggregate_func_7202(iParam10, 1);
	if ((aggregate_func_4255(Param4) && !aggregate_func_7127()) && &Global_1197951 == -1)
	{
		aggregate_func_6719(Param4);
	}
	NETWORK::_0x0AE241A4A9ADEEEC(1);
	if (iParam2 != 2)
	{
		aggregate_func_3549();
	}
	if (aggregate_func_7127())
	{
		aggregate_func_498(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!aggregate_func_5174(268435456))
		{
			if (!UIAPPS::_IS_APP_ACTIVE(1433015236))
			{
				aggregate_func_6633(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			aggregate_func_7604(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, aggregate_func_1965(&(Var65.f_37), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, aggregate_func_7256(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, MISC::_CREATE_VAR_STRING(2, aggregate_func_7257(aggregate_func_7084(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_133, &cVar57);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887->f_106.f_135, MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_136);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_137);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_138);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_139);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_140);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887->f_106.f_141);
	}
	if ((!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && aggregate_func_1735(255, 0)) && !bParam8)
	{
		aggregate_func_3537("NM_MATCHMAKING_WARNING");
	}
	aggregate_func_4884(9);
	return true;
}

char* func_127(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_8493(iParam0);
	switch (iVar0)
	{
		case 2:
			return MISC::_CREATE_VAR_STRING(10, "MG_FAILED_LAUNCH", "MG_POKER");
		default:
			break;
	}
	return "";
}

char* func_130(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "tg_p";
		default:
			break;
	}
	return "";
}

bool func_134(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2 == 1)
	{
		uVar0 = func_247(iParam1, 1);
	}
	else
	{
		uVar0 = func_247(iParam1, 0);
	}
	if (MINIGAME::_0x3FFE60DD8A936551(func_63(iParam0), uVar0))
	{
		return true;
	}
	return false;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 9;
		default:
			break;
	}
	return 9;
}

bool func_139(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<6> Var1;
	int iVar7;

	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (SCRIPTS::GET_NUMBER_OF_EVENTS(1) - 1))
	{
		iVar0 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar7);
		switch (iVar0)
		{
			case -1126217932:
				if (SCRIPTS::GET_EVENT_DATA(1, iVar7, &Var1, 6))
				{
					if (((iParam0->f_9 == Var1 && iParam0->f_9.f_1 == Var1.f_1) && iParam0->f_9.f_2 == Var1.f_2) && iParam0->f_9.f_3 == Var1.f_3)
					{
						*iParam2 = Var1.f_5;
						if (Var1.f_4)
						{
							*bParam1 = 1;
						}
						return true;
					}
				}
				break;
		}
		iVar7++;
	}
	return false;
}

void func_140(var uParam0, int iParam1, int iParam2)
{
	Global_1131100->f_2.f_1 = uParam0;
	Global_1131100->f_2 = iParam1;
	Global_1131100->f_2.f_2 = iParam2;
}

void func_141(int iParam0)
{
	if (!aggregate_func_4278(iParam0, 128))
	{
		aggregate_func_2150(65536);
		aggregate_func_4266(iParam0, 128);
	}
}

var func_142(int iParam0)
{
	return (Global_1130954->f_1[iParam0 /*27*/])->f_10;
}

void func_145(int iParam0)
{
	if (Global_1130954->f_137 != iParam0)
	{
		Global_1130954->f_137 = iParam0;
	}
}

void func_151(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (CAM::DOES_CAM_EXIST(uParam0[iVar0]))
		{
			CAM::DESTROY_CAM(uParam0[iVar0], false);
		}
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	if (uParam0->f_20 != -1)
	{
		if (ANIMSCENE::_0x25557E324489393C(uParam0->f_20))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_20, "LIVE"))
			{
				ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_20, "LIVE");
			}
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_20, false);
			ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_20, 0);
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_20);
		}
	}
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_17 = 0;
	uParam0->f_16 = 0;
	aggregate_func_4285(&(uParam0->f_18));
	uParam0->f_20 = -1;
	uParam0->f_21 = -1;
	uParam0->f_22 = 0;
}

char* func_152(int iParam0)
{
	switch (iParam0->f_1)
	{
		case 0:
			return "bla_saloon_int";
		case 1:
			return "new_saloon_int_main";
		case 2:
			return "swa_depot01_int";
		case 3:
			return "tum_saloon_int_gamble";
		case 4:
			return "val_saloon_int";
		default:
			break;
	}
	return "";
}

bool func_154(char* sParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (bParam4)
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 0);
			}
			else
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 1);
			}
			return true;
		}
	}
	return false;
}

int func_156(int iParam0)
{
	if (iParam0 != Global_1130954->f_137)
	{
		return 0;
	}
	return Global_1130954->f_137.f_2;
}

void func_157(int iParam0, var uParam1)
{
	if (iParam0 != Global_1130954->f_137)
	{
		return;
	}
	Global_1130954->f_137.f_2 = uParam1;
}

int func_158(int iParam0)
{
	if (iParam0 != Global_1130954->f_137)
	{
		return 0;
	}
	return Global_1130954->f_137.f_3;
}

int func_161(int iParam0)
{
	if (iParam0 != Global_1130954->f_137)
	{
		return 0;
	}
	return Global_1130954->f_137.f_4;
}

void func_162()
{
	struct<5> Var0;

	Var0 = -1;
	Global_1130954->f_137 = { Var0 };
}

Vector3 func_165(int iParam0, int iParam1, int iParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -25.54f;
							return -805.4941f, -1313.922f, 43.5456f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -122.05f;
							return -805.842f, -1316.401f, 43.5497f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -83.36f;
							return -806.1149f, -1322.44f, 42.6598f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -99.05f;
							return -805.8666f, -1324.778f, 42.6619f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 170.59f;
							return -809.6326f, -1330.971f, 42.6642f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 171.6245f;
							return -812.5016f, -1330.454f, 42.6573f;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 6.13f;
							return 2636.574f, -1216.953f, 52.3057f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -16.87f;
							return 2634.233f, -1216.81f, 52.2891f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -2.64f;
							return 2631.507f, -1216.629f, 52.2713f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 60.25f;
							return 2622.006f, -1222.144f, 52.2653f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 92.26f;
							return 2621.835f, -1225.913f, 52.3185f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 93.46f;
							return 2621.801f, -1229.233f, 52.3836f;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -20.56f;
							return -323.8307f, -353.4378f, 87.0216f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -82.44f;
							return -325.278f, -351.2291f, 87.051f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 46.4f;
							return -329.2828f, -349.7032f, 87.0626f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 31.32f;
							return -332.8652f, -351.3506f, 87.0617f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 39.52f;
							return -336.8102f, -353.0264f, 87.0052f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 24.63f;
							return -341.9986f, -355.8522f, 87.0358f;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -178.99f;
							return -5502.251f, -2913.421f, -3.391f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 154.78f;
							return -5507.202f, -2919.03f, -3.2789f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -136.18f;
							return -5518.356f, -2919.355f, -3.4585f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -170.03f;
							return -5523.738f, -2910.123f, -3.501f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 33.86f;
							return -5524.939f, -2906.375f, -3.6494f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 31.68f;
							return -5518.795f, -2901.151f, -3.4988f;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -164.32f;
							return -305.3323f, 796.2567f, 117.9622f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -167.42f;
							return -303.728f, 796.605f, 117.9601f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -164.13f;
							return -302.3611f, 796.8258f, 117.9617f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -170.44f;
							return -311.0975f, 795.3132f, 117.9633f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -164.6f;
							return -314.7917f, 798.2899f, 116.6698f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 41.65f;
							return -317.6014f, 808.0834f, 116.9352f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_169(int iParam0)
{
	char* sVar0;

	if (aggregate_func_2920(iParam0->f_15))
	{
		return;
	}
	if (!func_263())
	{
		return;
	}
	sVar0 = func_264(Global_1131100->f_2.f_1, Global_1131100->f_2, Global_1131100->f_2.f_2);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	iParam0->f_15 = aggregate_func_2975(sVar0, 10000, 0, 0, 0, 1);
}

void func_170()
{
	Global_1131100->f_2.f_1 = -1;
	Global_1131100->f_2 = 0;
	Global_1131100->f_2.f_2 = 0;
}

bool func_200(int iParam0)
{
	if (!aggregate_func_4683())
	{
		return false;
	}
	else if (aggregate_func_4478())
	{
		return false;
	}
	else if (!PED::IS_PED_ON_FOOT(Global_35))
	{
		return false;
	}
	else if (ENTITY::_0x61914209C36EFDDB(Global_35) != 0)
	{
		return false;
	}
	else if (aggregate_func_1616(1106247680 /* Float: 30f */, 0))
	{
		return false;
	}
	else if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	else if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	else if (PED::_0x9682F850056C9ADE(Global_35))
	{
		return false;
	}
	else if (PED::_0x3AA24CCC0D451379(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_SHOOTING(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_JUMPING(Global_35))
	{
		return false;
	}
	else if (PED::_0x3E592D0486DEC0F6(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_FALLING(Global_35))
	{
		return false;
	}
	else if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return false;
	}
	else if (PED::_0x0E99E3BF11BB6367(Global_35))
	{
		return false;
	}
	else if (PED::_0x3BDFCF25B58B0415(Global_35))
	{
		return false;
	}
	else if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 512, 0))
	{
		return false;
	}
	else if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return false;
	}
	else if (!func_282(iParam0))
	{
		return false;
	}
	else if (TASK::_0x038B1F1674F0E242(Global_35))
	{
		return false;
	}
	else if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1077801405) > 0)
	{
		return false;
	}
	return true;
}

bool func_202(int iParam0)
{
	struct<4> Var0;
	int iVar12;

	if (aggregate_func_2514(iParam0->f_1))
	{
		iParam0->f_15 = aggregate_func_2975("NET_MG_HELP_BANNED", 10000, 0, 0, 0, 1);
		return false;
	}
	else if (aggregate_func_8045(iParam0->f_1))
	{
		iParam0->f_15 = aggregate_func_2975(func_264(iParam0->f_2, 579389526, func_287()), 10000, 0, 0, 0, 1);
		return false;
	}
	else if (aggregate_func_2733(iParam0->f_1, -1038316793, &Var0))
	{
		iParam0->f_15 = aggregate_func_2975(func_264(iParam0->f_2, -1300909614, Var0.f_3), 10000, 0, 0, 0, 1);
		return false;
	}
	else if (aggregate_func_2733(iParam0->f_1, 1485265289, &Var0))
	{
		iParam0->f_15 = aggregate_func_2975(func_264(iParam0->f_2, -1589038658, Var0.f_3), 10000, 0, 0, 0, 1);
		return false;
	}
	else if (aggregate_func_4484(iParam0->f_1))
	{
		iParam0->f_15 = aggregate_func_2975(MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_MAINTENANCE", aggregate_func_7814(iParam0->f_2)), 10000, 0, 0, 0, 1);
		return false;
	}
	else if (aggregate_func_246(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		iParam0->f_15 = aggregate_func_2975(MISC::_CREATE_VAR_STRING(10, "MISSION_WANTED_REGION", aggregate_func_7814(iParam0->f_2)), 10000, 0, 0, 0, 1);
		return false;
	}
	else if (aggregate_func_379())
	{
		iParam0->f_15 = aggregate_func_2975("MG_POSSE_MEM_IN_JAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	else if (aggregate_func_1569() || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1077801405) > 0)
	{
		return false;
	}
	iVar12 = aggregate_func_7829(iParam0->f_1, 1);
	if (iVar12 > 0 && !aggregate_func_4574(iVar12))
	{
		iParam0->f_15 = aggregate_func_2975(MISC::_CREATE_VAR_STRING(2, "MGPKR_BROKE_MP", iVar12), 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

var func_247(int iParam0, int iParam1)
{
	return &((Global_1130954->f_1[iParam0 /*27*/])->f_15[iParam1 /*3*/]);
}

bool func_263()
{
	return Global_1131100->f_2 != 0;
}

char* func_264(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (iParam2 != 0)
	{
		iVar0 = (iParam2 - Global_1131100->f_7);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
	}
	switch (iParam1)
	{
		case -1385120212:
		case -1249239171:
		case 0:
			return "";
		case -1695230319:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_PLAYER_CLEAN", aggregate_func_7814(iParam0));
		case -1300909614:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_DAILY_PROFIT_CAP";
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_PROFIT_CAP", func_337(iVar0, 0, 0));
		case -1589038658:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_DAILY_BUYIN_CAP";
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_BUYIN_CAP", func_337(iVar0, 0, 0));
		case 1671747787:
			if (iVar0 == 0)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP");
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP", func_337(iVar0, 1, 0));
		case 1053423395:
			return "NET_MG_HELP_PUB_RE_BUYIN_CAP";
		case 579389526:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_OVERALL_CAP";
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_OVERALL_CAP", func_337(iVar0, 0, 0));
		case -1878199881:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_GEO_TOGGLE", aggregate_func_7814(iParam0));
		case -592991683:
			return "NET_MG_HELP_NO_PARTY_CHAT";
		case -1517426354:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_MAINTENANCE", aggregate_func_7814(iParam0));
		case -1720361368:
			return "NET_MG_HELP_BANNED";
		case -1166915294:
			return "NET_MG_HELP_BANNED2";
		case 1406403638:
			return "NET_MG_HELP_POSSE_LEADER_LEFT";
		case 1320901890:
			return "NET_MG_HELP_ARBITLEGAL";
		case -1700673948:
			return MISC::_CREATE_VAR_STRING(10, "MG_FAILED_LAUNCH", aggregate_func_7814(iParam0));
		case 1736016924:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_DISCONNECTED", aggregate_func_7814(iParam0));
		case -835571454:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_NETWORK_ERROR", aggregate_func_7814(iParam0));
		case -301240451:
			return MISC::_CREATE_VAR_STRING(10, "NET_MG_HELP_SCRIPT_ERROR", aggregate_func_7814(iParam0));
		case 2124908670:
			return "NET_MG_HELP_BUYIN_TIMEOUT";
		default:
			break;
	}
	return "";
}

bool func_282(int iParam0)
{
	float fVar0;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Global_36, &fVar0, 0))
	{
		return false;
	}
	if (iParam0->f_2 == 0 && MISC::ABSF((fVar0 - iParam0->f_77)) > 0.5f)
	{
		return false;
	}
	if (BUILTIN::VDIST(Global_36, Global_36, Global_36.f_1, fVar0) > 1.2f)
	{
		return false;
	}
	return true;
}

int func_287()
{
	return Global_17173.f_2976.f_88;
}

char* func_337(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	func_376(iParam0, &Var0);
	if (iParam1 == 0)
	{
		if (bParam2)
		{
			if (iParam0 > 86400)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
			}
			else if (iParam0 > 3600)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_H", Var0.f_3, Var0.f_4);
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_M", Var0.f_4);
		}
		return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
	}
	if (bParam2)
	{
		if (iParam0 > 86400)
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
		}
		else if (iParam0 > 3600)
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_H", Var0.f_3, Var0.f_4);
		}
		return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_M", Var0.f_4);
	}
	return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
}

void func_376(int iParam0, var uParam1)
{
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = (iParam0 / 86400);
	iParam0 = (iParam0 % 86400);
	uParam1->f_3 = (iParam0 / 3600);
	iParam0 = (iParam0 % 3600);
	uParam1->f_4 = (iParam0 / 60);
	iParam0 = (iParam0 % 60);
	uParam1->f_5 = iParam0;
}

