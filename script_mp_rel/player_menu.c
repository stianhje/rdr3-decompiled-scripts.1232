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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	char* sLocal_26 = NULL;
	char* sLocal_27 = NULL;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	sLocal_26 = "props_misc@campfires@5_logs";
	sLocal_27 = "Script_PropCampfire";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (aggregate_func_4477(255))
		{
			return;
		}
		switch (&Global_1896726)
		{
			case 0:
				PAD::_0x2804658EB7D8A50B(4, 1623465848);
				if (func_3())
				{
					MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
					func_4(1);
				}
				else
				{
					func_4(2);
				}
				break;
			case 1:
				if (!func_5())
				{
					func_4(2);
				}
				else
				{
					aggregate_func_383();
				}
				break;
			case 2:
				func_1();
				break;
		}
		_NAMESPACE79::_0x1C38C3577901AF1F();
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	func_7();
	aggregate_func_7267(0);
	aggregate_func_9344();
	func_10();
	if (func_11())
	{
		func_12();
	}
	aggregate_func_5048(0);
	NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
	MISC::_CANCEL_ONSCREEN_KEYBOARD();
	NETWORK::_0x49CF17A564918E8D();
	aggregate_func_5366();
	if (UIAPPS::_IS_APP_ACTIVE(1433015236))
	{
		UIAPPS::_CLOSE_APP_BY_HASH(1433015236);
	}
	func_4(0);
	HUD::_0x8BC7C1F929D07BF3(-523411361);
	HUD::_0x8BC7C1F929D07BF3(-1274560729);
	func_15();
	func_16();
	func_17();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3()
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	iVar0 = 0;
	bVar1 = false;
	if (UIAPPS::_IS_APP_ACTIVE(1433015236))
	{
		bVar1 = true;
	}
	sVar2 = func_19(Global_1896726->f_390);
	if (UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", sVar2) == 0 || bVar1)
	{
		iVar0 = 1;
		Global_1896726->f_386 = 0;
		aggregate_func_5470(0);
	}
	TXD::_0xDB1BD07FB464584D(-786228517, 0);
	TXD::_0xDB1BD07FB464584D(1997120069, 0);
	TXD::_0xDB1BD07FB464584D(908516622, 0);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_391))
	{
		Global_1896726->f_391 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedToReplay", 0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_392))
	{
		Global_1896726->f_392 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", 0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_391, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_392, false);
	if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
	{
		func_21(42, 0);
	}
	return iVar0;
}

void func_4(int iParam0)
{
	if (&Global_1896726 != iParam0)
	{
		Global_1896726 = iParam0;
	}
}

bool func_5()
{
	bool bVar0;

	bVar0 = aggregate_func_4625();
	if (func_23())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_24();
	}
	func_25();
	func_26();
	if (bVar0)
	{
		func_27(Global_1939221->f_1433);
	}
	func_28();
	return bVar0;
}

int func_7()
{
	char* sVar0;

	if (!aggregate_func_3096(Global_1273882->f_1))
	{
		return 0;
	}
	sVar0 = PLAYER::GET_PLAYER_NAME(&(Global_1273882->f_154[&Global_1273882]));
	if (!func_30(Global_1273882->f_1, sVar0))
	{
		return 0;
	}
	return 1;
}

void func_10()
{
	var uVar0;

	Global_1939221->f_1433.f_1314 = -1;
	MISC::_COPY_MEMORY(&(Global_1939221->f_1433.f_1314.f_1), &uVar0, 7);
	func_32();
}

bool func_11()
{
	return Global_1939221->f_3;
}

void func_12()
{
	aggregate_func_2853(1, -1343026476);
	aggregate_func_7219();
}

void func_15()
{
	Global_1896726->f_5 = 0;
}

void func_16()
{
	if (!func_35(0))
	{
		return;
	}
	func_36(0, 0);
}

void func_17()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1896726->f_1.f_3)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), &(Global_1896726->f_1[iVar0 /*2*/]), (Global_1896726->f_1[iVar0 /*2*/])->f_1, 0);
		iVar0++;
	}
	Global_1896726->f_1.f_3 = 0;
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mp";
		case 1:
			return "mp_matchmaking";
		case 2:
			return "mp_camp_selection";
		case 3:
			return "mp_moonshine_selection";
		case 4:
			return "mp_invites";
		case 5:
			return "mp_post_office";
		case 7:
			return "mp_emote_types";
		case 8:
			return "mp_minigame";
		case 9:
			return "mp_minigame_landing";
		case 10:
			return "mp_minigame_jip_landing";
		case 11:
			return "mp_minigame_invites";
		case 12:
			return "mp_minigame_invite_players";
		default:
			break;
	}
	return "mp";
}

int func_21(int iParam0, int iParam1)
{
	if (Global_1896726->f_1.f_3 >= 1)
	{
		return 0;
	}
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), iParam0, iParam1, 1);
	Global_1896726->f_1[Global_1896726->f_1.f_3 /*2*/] = iParam0;
	(Global_1896726->f_1[Global_1896726->f_1.f_3 /*2*/])->f_1 = iParam1;
	Global_1896726->f_1.f_3++;
	return 1;
}

bool func_23()
{
	int iVar0;

	iVar0 = 0;
	if (!UIAPPS::_IS_APP_ACTIVE(1433015236))
	{
		iVar0 = 1;
	}
	if (Global_1123331->f_293 && !Global_1113330->f_7999.f_4)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_24()
{
	int iVar0;

	iVar0 = aggregate_func_9256(UIAPPS::_0x96FD694FE5BE55DC(1433015236));
	if (!func_40(iVar0) && iVar0 != Global_1939221->f_1433)
	{
		func_41(Global_1939221->f_1433);
		Global_1939221->f_1433.f_1 = Global_1939221->f_1433;
		Global_1939221->f_1433 = iVar0;
		if (Global_1939221->f_1433.f_2 == -1)
		{
			func_43(Global_1939221->f_1433.f_1, func_42());
		}
		if (iVar0 != Global_1939221->f_1433.f_2)
		{
			func_44(iVar0);
		}
		func_45();
	}
	if (aggregate_func_9345())
	{
		func_43(Global_1939221->f_1433, func_42());
		func_47(1);
		func_48();
		func_44(Global_1939221->f_1433.f_2);
		func_27(Global_1939221->f_1433.f_2);
		func_36(5, 0);
	}
}

void func_25()
{
	var uVar0;
	var uVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<95> Var15;
	int iVar110;
	struct<7> Var111;
	bool bVar118;
	bool bVar119;
	bool bVar120;
	int iVar121;
	int iVar122;
	bool bVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	bool bVar128;
	bool bVar129;
	int iVar130;
	struct<4> Var131;

	if (!aggregate_func_4625())
	{
		return;
	}
	iVar6 = 1433015236;
	iVar7 = &Global_1273882->f_154[&Global_1273882];
	iVar9 = Global_1273882->f_15;
	Var15.f_38 = 7;
	Var15.f_91 = -1;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar6))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar6, &Var2))
		{
			switch (Var2)
			{
				case -1340543710:
					aggregate_func_342(Var2, Var2.f_2);
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
					break;
				case -1151569080:
					bVar10 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(38));
					if (bVar10 != 0)
					{
						bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33));
						func_51(bVar10, bVar13);
						switch (bVar10)
						{
							case 822989203:
								switch (bVar13)
								{
									case -2107252183:
										func_52(0, 0);
										break;
									case -6116668:
										func_52(1, 0);
										break;
								}
								break;
							case -1611253054:
								bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33));
								break;
							case 1908740613:
								bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33));
								bVar118 = bVar13;
								func_53(bVar118 == 126620015);
								func_54();
								break;
							case -91914989:
								bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33));
								bVar119 = bVar13;
								func_55(bVar119);
								func_54();
								break;
							case 1163184660:
								bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33));
								bVar120 = bVar13;
								func_56(bVar120 == -299269340);
								func_54();
								break;
							case -1703621955:
								aggregate_func_6150(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33)));
								break;
							case -736673978:
								func_58(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33)));
								aggregate_func_1064(1);
								aggregate_func_1400();
								aggregate_func_1791(aggregate_func_81(), joaat("COLOR_WHITE"));
								break;
							case 1601127062:
								func_63(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33)));
								break;
							case -758850690:
								func_65(func_64(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33))));
								break;
							case 87004688:
								aggregate_func_9212(func_64(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33))));
								break;
							case -2036453627:
								func_67(func_64(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33))));
								break;
							case 1505306971:
								func_68(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33)));
								break;
							case 1234263153:
								iVar12 = aggregate_func_4710(iVar7);
								bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33));
								if (bVar13 == 1388965074)
								{
									if (aggregate_func_7979(iVar12))
									{
										if (func_71(iVar12))
										{
											aggregate_func_8301(iVar12);
										}
									}
								}
								else if (bVar13 == -1272839496)
								{
									if (!aggregate_func_7979(iVar12))
									{
										if (aggregate_func_9259(iVar12))
										{
											aggregate_func_7980(iVar12);
										}
									}
								}
								break;
						}
					}
					else
					{
						switch (Var2.f_2)
						{
							case -1996395310:
								if (Var2.f_1 > 0)
								{
									func_75(1);
								}
								else
								{
									func_75(0);
								}
								break;
							case -1712603330:
								if (!func_77(func_76()))
								{
									func_47(1);
								}
								break;
						}
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
					break;
				case -1740156697:
					func_78(&Var2);
					func_79(&Var2);
					func_47(1);
					iVar11 = Var2.f_2;
					bVar10 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(38));
					bVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(33));
					func_51(bVar10, bVar13);
					switch (iVar11)
					{
						case -1537476917:
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_82, true);
							break;
						case -1594107850:
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_118, true);
							if (UNLOCK::_UNLOCK_IS_NEW(1392007362))
							{
								UNLOCK::_UNLOCK_SET_NEW(1392007362, false);
							}
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_124, false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_116, true);
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1497.f_115, MISC::_CREATE_VAR_STRING(2, "NM_FR_CHARACTER_DETAILS_INFO"));
							break;
						case 238850895:
							if (func_80())
							{
								iVar8 = func_81();
								if (NETWORK::_0x255A5EF65EDA9167(iVar8))
								{
									aggregate_func_3821(iVar8, 1);
									func_83(238850895, 1);
								}
							}
							break;
						case 1229094512:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case -758886156:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case 252544183:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case 573237416:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case 72556410:
							aggregate_func_1064(1);
							aggregate_func_1400();
							break;
						case -1080557963:
							func_85(1);
							func_86();
							aggregate_func_2620();
							break;
						case -1103748417:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case -779773310:
							if (!func_84(&(Var2.f_3)))
							{
							}
							break;
						case 298326212:
							if (func_88(&(Var2.f_3), &Var15))
							{
								func_89(&Var15);
							}
							break;
						case 1930452436:
							if (func_90())
							{
								if (func_91())
								{
									if (!NETWORK::_0x595F028698072DD9(-1) && MISC::IS_ORBIS_VERSION())
									{
										aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME"), joaat("COLOR_WHITE"));
									}
									else if (!NETWORK::_0x6506BFA755FB209C())
									{
										aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NM_GC_UGC_RESTRICT"), joaat("COLOR_WHITE"));
									}
									else
									{
										aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE"), joaat("COLOR_WHITE"));
									}
								}
								else
								{
									aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN"), joaat("COLOR_RED"));
								}
							}
							else
							{
								aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE_TEMP"), joaat("COLOR_WHITE"));
							}
							break;
						case 1962827136:
							func_92();
							func_93();
							func_94();
							break;
						case -949910923:
							func_95();
							break;
						case -1577085532:
						case -1181862186:
						case -715226337:
						case -265461064:
						case -183012873:
						case 161109887:
							func_96(Var2.f_1);
							break;
						case 271601522:
							func_97(3);
							break;
						case -766526475:
							func_97(0);
							break;
						case 388232363:
							func_97(1);
							break;
						case -783563355:
							func_97(2);
							break;
						case -446710138:
							func_98();
							break;
						case -1997447231:
						case -1890363343:
						case -630943934:
						case 1191420897:
						case 1222267777:
						case 1528509922:
							func_99(Var2.f_1);
							break;
						case 697595630:
							func_100(3);
							break;
						case -516833774:
							func_100(0);
							break;
						case -1523420457:
							func_100(1);
							break;
						case -189386465:
							func_100(2);
							break;
						case 908022114:
							break;
						case 1219657827:
							Global_1939221->f_242.f_1189 = 0;
							break;
						case 290710310:
						case 1685218753:
							Global_1939221->f_242 = Var2.f_3;
							break;
						case 1891046454:
							func_101(-682748, -1896177107);
							func_102(-1896177107);
							break;
						case -1431653946:
							func_101(-682748, 2042309940);
							func_102(2042309940);
							break;
						case 1603044301:
							func_103(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"));
							func_105(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"), func_104());
							func_106(func_104(), DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"));
							break;
						case 1537752051:
							Global_1939221->f_1433.f_6264 = 3;
							Global_1939221->f_1433.f_6264.f_1 = func_107(Global_1939221->f_1433.f_6264);
							func_108(Global_1939221->f_1433.f_6264.f_1);
							break;
						case 2073308105:
							Global_1939221->f_1433.f_6264 = 1;
							Global_1939221->f_1433.f_6264.f_1 = func_107(Global_1939221->f_1433.f_6264);
							func_108(Global_1939221->f_1433.f_6264.f_1);
							break;
						case 519925072:
							Global_1939221->f_1433.f_6264 = 0;
							Global_1939221->f_1433.f_6264.f_1 = func_107(Global_1939221->f_1433.f_6264);
							func_108(Global_1939221->f_1433.f_6264.f_1);
							break;
						case 1070510924:
							Global_1939221->f_1433.f_6264 = 2;
							Global_1939221->f_1433.f_6264.f_1 = func_107(Global_1939221->f_1433.f_6264);
							func_108(Global_1939221->f_1433.f_6264.f_1);
							break;
						case -1309595911:
							if (Global_1939221->f_1433.f_6264.f_5)
							{
								Global_1939221->f_1433.f_6264.f_2 = Var2.f_1;
								Global_1939221->f_1433.f_6264.f_1 = func_109(Global_1939221->f_1433.f_6264, Var2.f_1);
							}
							else
							{
								Global_1939221->f_1433.f_6264.f_2 = func_110(Global_1939221->f_1433.f_6264, Global_1939221->f_1433.f_6264.f_1);
								iVar14 = Global_1939221->f_1433.f_6264;
								if (iVar14 < 0 || iVar14 > (4 - 1))
								{
								}
								else
								{
									Global_1939221->f_1433.f_6264.f_1 = &(Global_17173.f_54.f_2480[iVar14 /*7*/])->f_2[Var2.f_1];
									func_108(Global_1939221->f_1433.f_6264.f_1);
									Jump @2522; //curOff = 2420
									func_111(Var2.f_3);
									func_112(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "moonshine_selection_district"));
									Jump @2522; //curOff = 2447
									aggregate_func_8849(func_113(iVar11));
									aggregate_func_4543(func_113(iVar11));
									Jump @2522; //curOff = 2470
									func_116();
									func_117();
									Jump @2522; //curOff = 2481
									Global_1113330->f_7999 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_mission_hash");
									Global_1113330->f_7999.f_5 = Var2.f_3;
								}
								UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
								Jump @7512; //curOff = 2528
								switch (Var2.f_2)
								{
									case -1537476917:
										DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_82, false);
										break;
								}
								UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
								Jump @7512; //curOff = 2572
								switch (Var2.f_2)
								{
									case 1930452436:
										func_118();
										break;
									case -55349945:
										func_119();
										break;
									case -135401173:
										func_120();
										break;
									case 101104516:
										UIAPPS::_CLOSE_APP_BY_HASH_IMMEDIATE(1433015236);
										func_121();
										break;
									case 290710310:
										aggregate_func_270(Var2.f_3);
										break;
									case 1685218753:
										func_123(Global_1939221->f_242);
										break;
									case -2111588953:
										func_124(Global_1939221->f_242);
										break;
									case -533058584:
										break;
									case 110545328:
										func_125(Global_1939221->f_242);
										break;
									case 1471279564:
										if (func_126())
										{
											func_128(func_127());
										}
										else
										{
											func_128(0);
										}
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										break;
									case 855278636:
										if (func_129())
										{
											func_131(func_130());
										}
										else
										{
											func_131(0);
										}
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										break;
									case -1390952377:
										func_132(5);
										break;
									case 1050964521:
										func_132(13);
										break;
									case 334553069:
										func_132(52);
										func_133();
										break;
									case -1239884668:
										func_132(51);
										func_133();
										break;
									case -1487960093:
										UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(-779472066, 348001928);
										break;
									case -350804472:
										aggregate_func_7824(128);
										break;
									case 647482278:
										aggregate_func_7824(256);
										break;
									case -2051980641:
										aggregate_func_9328(aggregate_func_8930(), 8);
										aggregate_func_4580();
										break;
									case -1862490249:
										aggregate_func_7824(512);
										if (!aggregate_func_7654(4096))
										{
											UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(1433015236, joaat("continue"));
										}
										else
										{
											aggregate_func_4580();
										}
										break;
									case 1211445926:
										aggregate_func_7824(16384);
										break;
									case 1671201754:
										func_133();
										func_132(18);
										break;
									case -1513928818:
										func_133();
										func_132(17);
										break;
									case -1321015585:
										func_132(22);
										break;
									case 298326212:
										func_36(7, 1);
										if (func_88(&(Var2.f_3), &Var15))
										{
											func_139();
											func_133();
											func_140(&Var15);
											func_132(16);
											func_141(394524610);
										}
										break;
									case -1103748417:
										if (func_142())
										{
											func_132(6);
											func_141(-1105836878);
										}
										break;
									case -974997823:
										func_132(22);
										break;
									case -1320685749:
										func_132(21);
										break;
									case 252544183:
										if (func_142())
										{
											func_139();
											func_132(6);
											func_141(-1105836878);
										}
										break;
									case 519925072:
									case 1070510924:
									case 1537752051:
									case 2073308105:
										iVar14 = Global_1939221->f_1433.f_6264;
										if (iVar14 < 0 || iVar14 > (4 - 1))
										{
										}
										else
										{
											DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1939221->f_1433.f_6264.f_13);
											Global_1939221->f_1433.f_6264.f_13 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Global_1939221->f_1433.f_6264.f_6, 1901482920);
											func_143(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar14 /*7*/]);
											DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_6264.f_8, func_144(Global_1939221->f_1433.f_6264));
											func_145(Global_1939221->f_1433.f_6264.f_1 != 0);
											Jump @7444; //curOff = 4021
											iVar14 = Global_1939221->f_1433.f_6264;
											if (iVar14 < 0 || iVar14 > (4 - 1))
											{
											}
											else
											{
												DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1939221->f_1433.f_6264.f_13);
												Global_1939221->f_1433.f_6264.f_13 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Global_1939221->f_1433.f_6264.f_6, 1901482920);
												if (Global_1939221->f_1433.f_6264.f_5)
												{
													Global_1939221->f_1433.f_6264.f_5 = !Global_1939221->f_1433.f_6264.f_5;
													func_146(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar14 /*7*/]);
												}
												else
												{
													Global_1939221->f_1433.f_6264.f_5 = !Global_1939221->f_1433.f_6264.f_5;
													func_143(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar14 /*7*/]);
												}
												Global_1939221->f_1433.f_6264.f_4 = 1;
												Jump @7444; //curOff = 4242
												iVar14 = Global_1939221->f_1433.f_6264;
												if (iVar14 < 0 || iVar14 > (4 - 1))
												{
												}
												else
												{
													if ((Global_17173.f_54.f_2480[iVar14 /*7*/])->f_1 == -1 || &(Global_17173.f_54.f_2480[iVar14 /*7*/])->f_2[(Global_17173.f_54.f_2480[iVar14 /*7*/])->f_1] != Global_1939221->f_1433.f_6264.f_1)
													{
														func_147(Global_17173.f_54.f_2480[iVar14 /*7*/], Global_1939221->f_1433.f_6264, Global_1939221->f_1433.f_6264.f_1);
													}
													else
													{
														func_148(Global_17173.f_54.f_2480[iVar14 /*7*/], Global_1939221->f_1433.f_6264);
													}
													Jump @7444; //curOff = 4416
													iVar14 = Global_1939221->f_1433.f_6264;
													if (iVar14 < 0 || iVar14 > (4 - 1))
													{
													}
													else
													{
														Global_1939221->f_1433.f_6264.f_3 = 1;
														if (Global_1939221->f_1433.f_6264.f_2 > -1 && Global_1939221->f_1433.f_6264.f_2 < 37)
														{
															Global_1939221->f_1433.f_6264.f_1162[Global_1939221->f_1433.f_6264.f_2] = 1;
														}
														iVar121 = aggregate_func_5566(&(Global_17173.f_54.f_2480), Global_1939221->f_1433.f_6264, Global_1939221->f_1433.f_6264.f_1);
														if (!Global_1939221->f_1433.f_6264.f_5 && iVar121 == 1)
														{
															DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1939221->f_1433.f_6264.f_13);
															Global_1939221->f_1433.f_6264.f_13 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Global_1939221->f_1433.f_6264.f_6, 1901482920);
															func_146(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar14 /*7*/]);
														}
														Global_1939221->f_1433.f_6264.f_4 = 1;
														Jump @7444; //curOff = 4681
														aggregate_func_887();
														aggregate_func_1913(aggregate_func_9167(), aggregate_func_9167());
														Jump @7444; //curOff = 4701
														aggregate_func_9168(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_walk_enum"));
														Jump @7444; //curOff = 4720
														aggregate_func_4580();
														Jump @7444; //curOff = 4727
														if (func_155(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "posse_versus_content_type"), aggregate_func_4464()))
														{
															aggregate_func_4580();
														}
														else
														{
															iVar122 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(54));
															if (iVar122 == 0)
															{
															}
															else
															{
																switch (iVar122)
																{
																	case 97603778:
																		func_132(20);
																		func_133();
																		break;
																}
															}
														}
														Jump @7444; //curOff = 4813
														if (func_155(4, aggregate_func_4464()) || func_155(5, aggregate_func_4464()))
														{
															aggregate_func_4580();
														}
														Jump @7444; //curOff = 4850
														bVar123 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district");
														iVar124 = func_104();
														if (func_156(iVar124, bVar123))
														{
															if (func_157())
															{
																func_158(bVar123, iVar124);
																func_141(joaat("exit"));
															}
															else if (aggregate_func_9199(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"), func_104(), 1, 0))
															{
																aggregate_func_3090(512);
																func_141(joaat("exit"));
															}
														}
														Jump @7444; //curOff = 4958
														func_161(-1896177107);
														func_132(39);
														Jump @7444; //curOff = 4977
														func_161(2042309940);
														func_132(39);
														Jump @7444; //curOff = 4996
														aggregate_func_1054();
														func_163();
														aggregate_func_4580();
														Jump @7444; //curOff = 5012
														func_132(38);
														Jump @7444; //curOff = 5022
														func_164();
														Global_1275329->f_65 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "moonshine_selection_property");
														Jump @7444; //curOff = 5047
														func_132(23);
														Jump @7444; //curOff = 5057
														func_132(41);
														Jump @7444; //curOff = 5067
														func_165();
														aggregate_func_4580();
														Jump @7444; //curOff = 5078
														aggregate_func_4580();
														Jump @7444; //curOff = 5085
														if (func_166())
														{
															func_167(13);
															func_141(-959354268);
														}
														else
														{
															func_132(13);
															func_141(-303450633);
														}
														func_133();
														Jump @7444; //curOff = 5135
														func_141(394524610);
														Jump @7444; //curOff = 5148
														func_168(func_35(3), 0);
														func_133();
														if (func_35(3))
														{
															func_36(3, 0);
														}
														Jump @7444; //curOff = 5179
														func_132(16);
														func_133();
														Jump @7444; //curOff = 5193
														func_48();
														func_169();
														Jump @7444; //curOff = 5204
														aggregate_func_8067(1);
														func_36(1, 0);
														func_132(14);
														func_133();
														func_141(-648381463);
														Jump @7444; //curOff = 5239
														aggregate_func_8067(0);
														func_133();
														func_36(1, 0);
														Jump @7444; //curOff = 5257
														func_132(19);
														func_133();
														Jump @7444; //curOff = 5271
														func_132(5);
														func_133();
														Jump @7444; //curOff = 5284
														if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var2.f_3))
														{
															Var111 = { func_171(Var2.f_3, aggregate_func_4915(29)) };
															iVar125 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(15));
															if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var111))
															{
															}
															else if (!func_172(Var111, iVar125, 0))
															{
															}
														}
														Jump @7444; //curOff = 5362
														func_174(&(Global_1896726->f_393.f_1), func_173());
														Jump @7444; //curOff = 5382
														if (!func_175())
														{
														}
														else if (func_176(&uVar1, &uVar0))
														{
															if (func_90())
															{
																func_180(func_177(), func_178(), uVar1, uVar0, func_179());
															}
															else
															{
																func_181(func_177(), func_178(), uVar1, uVar0);
															}
															func_182(0);
														}
														Jump @7444; //curOff = 5463
														Var15 = { func_183(1) };
														if (aggregate_func_4287(&Var15))
														{
															aggregate_func_1093(Var15.f_2, 1);
															func_186(4);
														}
														else if (Var15.f_1 == Global_1273882->f_15)
														{
															aggregate_func_346(1);
															func_186(4);
														}
														Jump @7444; //curOff = 5531
														Var15 = { func_183(1) };
														if (aggregate_func_4287(&Var15))
														{
															aggregate_func_4974(32);
															aggregate_func_385(1, 1);
															func_186(7);
														}
														else if (Var15.f_1 == Global_1273882->f_15)
														{
															aggregate_func_346(1);
															func_186(4);
														}
														Jump @7444; //curOff = 5602
														Var15 = { func_183(1) };
														if (aggregate_func_4287(&Var15))
														{
															aggregate_func_4974(32);
															aggregate_func_385(1, 1);
															func_186(7);
														}
														else if (Var15.f_1 == Global_1273882->f_15)
														{
															aggregate_func_346(1);
															func_186(4);
														}
														Jump @7444; //curOff = 5673
														func_191();
														Jump @7444; //curOff = 5680
														if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var2.f_3))
														{
															Var111 = { func_171(Var2.f_3, aggregate_func_4915(29)) };
															iVar126 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(Var2.f_3, aggregate_func_4915(15));
															if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var111))
															{
																iVar127 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var111);
																if (func_192(iVar127))
																{
																	func_47(1);
																}
															}
															else if (func_172(Var111, iVar126, 0))
															{
																func_47(1);
															}
														}
														Jump @7444; //curOff = 5790
														if (!func_193(func_76()))
														{
														}
														Jump @7444; //curOff = 5805
														if (!func_195(func_194()))
														{
														}
														Jump @7444; //curOff = 5820
														if (!func_195(func_196()))
														{
														}
														Jump @7444; //curOff = 5835
														if (func_197(Var2.f_3))
														{
															func_47(1);
														}
														Jump @7444; //curOff = 5857
														func_199(!func_198());
														func_47(1);
														Jump @7444; //curOff = 5874
														if (func_200())
														{
															func_47(1);
														}
														Jump @7444; //curOff = 5889
														if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar7))
														{
															return;
														}
														bVar128 = func_80();
														if (!bVar128)
														{
															if (Global_1939221->f_1433.f_156.f_2.f_4)
															{
																func_201(&(Global_1180694->f_501[Global_1180694->f_490 /*118*/]), Global_1939221->f_1433.f_8);
																func_141(joaat("back"));
															}
															else
															{
																return;
															}
														}
														else
														{
															bVar129 = _NAMESPACE26::_0x81FB74C83C2ED69F(func_81());
															if (bVar129 || Global_1939221->f_1433.f_156.f_2.f_4)
															{
																if (bVar129)
																{
																	func_202(func_81(), 1, 120);
																}
																else
																{
																	func_201(&(Global_1180694->f_501[Global_1180694->f_490 /*118*/]), Global_1939221->f_1433.f_8);
																}
																func_141(joaat("back"));
															}
														}
														Jump @7444; //curOff = 6083
														Var111 = { func_194() };
														if (!func_203(&Var111))
														{
														}
														Jump @7444; //curOff = 6104
														func_47(1);
														if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1828672432))
														{
															if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar7))
															{
																func_204(func_81(), 1);
															}
															else if (_NAMESPACE26::_0x149A2751AB66AC02(iVar9) == _NAMESPACE26::_0x853B0FA4D8732C57(iVar9))
															{
																func_204(func_81(), 2);
															}
															else if (func_204(func_81(), -1))
															{
															}
														}
														Jump @7444; //curOff = 6190
														if (func_172(func_194(), aggregate_func_5526(), 0))
														{
															func_47(1);
														}
														Jump @7444; //curOff = 6214
														func_206(func_81());
														Jump @7444; //curOff = 6226
														Var111 = { func_194() };
														aggregate_func_2720(&Var111);
														aggregate_func_4580();
														Jump @7444; //curOff = 6247
														Var111 = { func_194() };
														if (!func_208(&Var111))
														{
														}
														Jump @7444; //curOff = 6268
														Var111 = { func_194() };
														if (!func_209(&Var111))
														{
														}
														Jump @7444; //curOff = 6289
														func_36(3, 1);
														if (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(func_81())) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(func_81())))
														{
															if (func_210(_NAMESPACE26::_0x901E0DC25080C8B9(func_81()), &Var15, 1))
															{
																func_140(&Var15);
															}
														}
														Jump @7444; //curOff = 6360
														switch (Var2.f_2)
														{
															case -2012882360:
																iVar130 = 0;
																break;
															case 1717935887:
																iVar130 = 1;
																break;
															case 566751030:
																iVar130 = 2;
																break;
															case 575735035:
																iVar130 = 3;
																break;
															case 1302293867:
																iVar130 = 4;
																break;
															case 1284519075:
																iVar130 = 5;
																break;
															case -36476126:
																iVar130 = 6;
																break;
															case 1296297252:
																iVar130 = 7;
																break;
															case 1463101399:
																iVar130 = 8;
																break;
														}
														if (func_211(func_194(), iVar130, aggregate_func_5526()))
														{
														}
														Jump @7444; //curOff = 6499
														Var15 = { func_183(1) };
														if (func_212(&Var15))
														{
															if (func_213(&Var15))
															{
																func_186(3);
															}
														}
														Jump @7444; //curOff = 6542
														Var15 = { func_183(1) };
														if (func_212(&Var15))
														{
															if (func_213(&Var15))
															{
																func_186(5);
															}
														}
														Jump @7444; //curOff = 6585
														Var15 = { func_183(1) };
														if (func_212(&Var15))
														{
															if (func_213(&Var15))
															{
																func_186(6);
															}
														}
														Jump @7444; //curOff = 6628
														if (aggregate_func_1469(DATABINDING::_0xE6AAB897120492D6(Var2.f_3, "posse_list_entry_gang_id")))
														{
															func_141(1627801305);
														}
														Jump @7444; //curOff = 6663
														if (aggregate_func_4956())
														{
															aggregate_func_1055(1);
														}
														aggregate_func_7824(262144);
														Jump @7444; //curOff = 6686
														aggregate_func_8181(2, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6699
														aggregate_func_8181(3, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6712
														aggregate_func_8181(4, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6725
														aggregate_func_8181(5, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6738
														aggregate_func_8181(6, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6751
														aggregate_func_8181(8, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6765
														aggregate_func_8181(9, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6779
														aggregate_func_8181(0, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6792
														aggregate_func_8181(1, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6805
														iVar110 = func_218();
														aggregate_func_8181(iVar110, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6825
														aggregate_func_8181(15, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6839
														aggregate_func_8181(16, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6853
														aggregate_func_8181(17, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6867
														aggregate_func_8181(19, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6881
														aggregate_func_8181(18, 2);
														aggregate_func_4580();
														Jump @7444; //curOff = 6895
														func_219();
														aggregate_func_4580();
														Jump @7444; //curOff = 6906
														if (_NAMESPACE26::_0x0F99F6436528A089(iVar9))
														{
															if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar9) == iVar7 && _NAMESPACE26::_0x149A2751AB66AC02(iVar9) == 1)
															{
																func_141(962885784);
															}
															else
															{
																func_141(-1913939249);
															}
														}
														else
														{
															func_141(962885784);
														}
														Jump @7444; //curOff = 6979
														aggregate_func_252(1);
														aggregate_func_9459();
														aggregate_func_4580();
														func_222();
														if (aggregate_func_7376(255))
														{
															aggregate_func_2015(0, 0, 0, 1);
															if (!aggregate_func_4497(255))
															{
																aggregate_func_7695();
															}
															aggregate_func_748(1, 1);
														}
														if (aggregate_func_2820())
														{
															func_229();
															func_230(0, 129);
														}
														else
														{
															aggregate_func_346(1);
															func_231();
														}
														Jump @7444; //curOff = 7066
														func_232(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)));
														Jump @7444; //curOff = 7088
														func_233(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)));
														Jump @7444; //curOff = 7110
														func_234(0);
														func_235();
														Jump @7444; //curOff = 7122
														func_236(1);
														Jump @7444; //curOff = 7131
														func_237(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)));
														Jump @7444; //curOff = 7152
														func_238(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)));
														Jump @7444; //curOff = 7173
														func_239(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)), 0);
														Jump @7444; //curOff = 7195
														func_239(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)), 1);
														Jump @7444; //curOff = 7217
														func_239(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)), 2);
														Jump @7444; //curOff = 7239
														func_240(0);
														func_241();
														Jump @7444; //curOff = 7251
														func_242(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)));
														Jump @7444; //curOff = 7272
														func_243(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)), 4);
														Jump @7444; //curOff = 7294
														func_243(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)), 5);
														Jump @7444; //curOff = 7316
														func_243(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, aggregate_func_4915(80)), 6);
														Jump @7444; //curOff = 7338
														Var131 = { aggregate_func_934(0, 1, 0, -1) };
														TELEMETRY::_0xE67AF24C5A3B6058(-1842437844, &Var131, 0);
														func_245(Var131, 2, 2);
														aggregate_func_5082();
														Jump @7444; //curOff = 7380
														Global_1113330->f_7999 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_mission_hash");
														Global_1113330->f_7999.f_1 = 1;
														Global_1113330->f_7999.f_5 = Var2.f_3;
														Jump @7444; //curOff = 7425
														Global_1113330->f_7999.f_2 = 1;
													}
												}
											}
										}
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										Jump @7512; //curOff = 7450
										switch (Var2.f_2)
										{
											case -1373902020:
												aggregate_func_4264();
												break;
										}
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										Jump @7512; //curOff = 7482
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										Jump @7512; //curOff = 7491
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										Jump @7512; //curOff = 7500
										UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar6);
										func_248();
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

void func_26()
{
	var uVar0;

	if (Global_1939221->f_1433.f_7965 == 0)
	{
		return;
	}
	if (NETWORK::_0x5AE17C6B0134B7F1())
	{
		Global_1939221->f_1433.f_7964 = 1;
		Global_1939221->f_1433.f_7965 = 0;
		uVar0 = NETWORK::_0xDDAEB478E58F8DEA(&(Global_1939221->f_1433.f_7967), 801);
	}
}

void func_27(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_249();
			func_250();
			break;
		case 1:
			func_250();
			func_251();
			break;
		case 2:
			break;
		case 3:
			func_252();
			break;
		case 4:
			func_253();
			break;
		case 13:
			func_254();
			break;
		case 15:
			func_255();
			break;
		case 18:
			func_256();
			break;
		case 14:
			func_257();
			break;
		case 16:
			func_258();
			break;
		case 22:
			func_259();
			break;
		case 21:
			func_260();
			break;
		case 17:
			func_261();
			break;
		case 5:
			func_262();
			break;
		case 52:
			func_263();
			break;
		case 6:
			func_264();
			break;
		case 46:
			func_265();
			break;
		case 7:
		case 8:
		case 9:
			func_266();
			break;
		case 10:
			func_267();
			break;
		case 23:
			aggregate_func_4238();
			break;
		case 24:
			func_269();
			break;
		case 25:
			aggregate_func_4964();
			break;
		case 26:
			func_271();
			break;
		case 27:
			func_272();
			break;
		case 28:
			func_273();
			break;
		case 29:
			func_274();
			break;
		case 30:
			func_275();
			break;
		case 31:
			func_276();
			break;
		case 32:
			aggregate_func_4964();
			break;
		case 33:
			func_278();
			break;
		case 34:
			func_279();
			break;
		case 35:
			func_280();
			break;
		case 36:
			func_281();
			break;
		case 37:
			func_282();
			break;
		case 38:
			func_283();
			break;
		case 39:
			func_284();
			break;
		case 40:
			func_285();
			break;
		case 41:
			func_286();
			break;
		case 43:
			func_287();
			break;
		case 19:
			func_288();
			break;
		case 20:
			func_289();
			break;
		case 42:
			func_290();
			break;
		case 48:
			func_291();
			break;
		case 49:
			aggregate_func_4264();
			break;
		case 50:
			func_293();
			break;
		case 53:
			func_294(0);
			break;
		case 55:
			if (aggregate_func_6547())
			{
				func_296();
			}
			break;
		case 56:
			func_297(56);
			break;
		case 54:
			if (aggregate_func_6547())
			{
				func_298();
			}
			break;
	}
	func_299();
	if (func_300())
	{
		func_301();
		Global_1939221->f_1433.f_8769.f_238 = 0;
	}
	if (func_302())
	{
		func_303();
		Global_1939221->f_1433.f_8769.f_239 = 0;
	}
	func_304();
	func_305();
	func_306();
	func_307();
	if (func_308())
	{
		func_133();
	}
}

int func_28()
{
	if (Global_1896726->f_371.f_5)
	{
		Global_1896726->f_371.f_5 = 0;
		return 1;
	}
	return 0;
}

bool func_30(struct<7> Param0, char* sParam7)
{
	if (!aggregate_func_3096(Param0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(&(Global_1939221->f_1433.f_8), &Param0, 7);
	Global_1939221->f_1433.f_8.f_7 = { aggregate_func_8066(sParam7) };
	return true;
}

void func_32()
{
	_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1939221->f_1433.f_7961);
	Global_1939221->f_1433.f_7961 = 0;
}

bool func_35(int iParam0)
{
	return aggregate_func_2923(Global_1896726->f_5, iParam0);
}

void func_36(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate_func_2882(&(Global_1896726->f_5), iParam0);
	}
	else
	{
		aggregate_func_2925(&(Global_1896726->f_5), iParam0);
	}
}

bool func_40(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		default:
			break;
	}
	return false;
}

void func_41(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_35(7))
	{
		func_167(iParam0);
	}
	func_36(7, 0);
	aggregate_func_1791("", joaat("COLOR_WHITE"));
	iVar0 = aggregate_func_9256(UIAPPS::_0x96FD694FE5BE55DC(1433015236));
	switch (iParam0)
	{
		case 1:
			aggregate_func_4264();
			break;
		case 10:
			func_322();
			func_323();
			break;
		case 2:
		case 3:
			break;
		case 4:
			break;
		case 5:
		case 21:
		case 22:
			func_169();
			func_324();
			func_325(0);
			break;
		case 18:
			func_169();
			break;
		case 14:
			HUD::_0x8BC7C1F929D07BF3(-1274560729);
			break;
		case 19:
			Global_1102098->f_935.f_26 = -1;
			break;
		case 17:
			func_326();
			break;
		case 45:
			Global_1939221->f_1433.f_6264.f_5 = 1;
			if (Global_1939221->f_1433.f_6264.f_3)
			{
				aggregate_func_5263();
				Global_1939221->f_1433.f_6264.f_3 = 0;
			}
			break;
		case 46:
			func_145(0);
			break;
		case 39:
			HUD::_0x8BC7C1F929D07BF3(-523411361);
			break;
		case 53:
			HUD::_0x8BC7C1F929D07BF3(-523411361);
			break;
		case 6:
			if ((iVar0 != 7 && iVar0 != 9) && iVar0 != 8)
			{
				func_7();
			}
			aggregate_func_3821(func_81(), 1);
			func_328();
			break;
		case 42:
			aggregate_func_4964();
			break;
		case 13:
		case 15:
		case 16:
			break;
		case 23:
			aggregate_func_4238();
			break;
		case 24:
			aggregate_func_4238();
			break;
		case 31:
			aggregate_func_4238();
			break;
	}
}

int func_42()
{
	return Global_1939221->f_1433.f_8769;
}

void func_43(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 5:
			Global_1939221->f_1433.f_828 = iParam1;
			break;
		case 18:
			Global_1939221->f_1433.f_156.f_196.f_1 = iParam1;
			break;
		default:
			return;
	}
}

void func_44(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_333(iParam0);
	switch (iParam0)
	{
		case 0:
			func_334();
			func_48();
			break;
		case 1:
			aggregate_func_4238();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 12:
			func_336(0);
			break;
		case 6:
			func_337();
			break;
		case 15:
			func_338(iParam0, 1);
			break;
		case 13:
			func_339();
			break;
		case 14:
			func_340();
			break;
		case 18:
			func_341();
			break;
		case 16:
			func_338(iParam0, 0);
			func_342();
			break;
		case 17:
			func_343();
			break;
		case 5:
		case 21:
		case 22:
			func_344(iParam0);
			break;
		case 52:
			func_345();
			break;
		case 7:
		case 8:
		case 9:
			func_346();
			break;
		case 27:
			aggregate_func_4238();
			break;
		case 43:
			aggregate_func_4238();
			break;
		case 39:
			func_349();
			HUD::_0x4CC5F2FC1332577F(-523411361);
			break;
		case 40:
			func_350(2f, 1);
			break;
		case 41:
			break;
		case 20:
			func_351();
			break;
		case 42:
			aggregate_func_4964();
			break;
		case 48:
			func_353();
			break;
		case 49:
			aggregate_func_8118();
			break;
		case 50:
			func_355();
			break;
		case 23:
			func_356();
			break;
		case 24:
			aggregate_func_4238();
			break;
		case 31:
			func_358();
			break;
		case 55:
			func_350(3f, 1);
			break;
		case 54:
			func_350(3f, 1);
			break;
		case 53:
			func_359();
			HUD::_0x4CC5F2FC1332577F(-523411361);
			break;
		case 56:
			func_360();
			break;
	}
}

void func_45()
{
	Global_1939221->f_1433.f_2 = -1;
}

void func_47(bool bParam0)
{
	func_361(0, 1);
	if (bParam0)
	{
		func_361(1, 1);
	}
}

void func_48()
{
	int iVar0;

	Global_1939221->f_1433.f_8769 = 0;
	Global_1939221->f_1433.f_8769.f_1 = 0;
	Global_1939221->f_1433.f_8769.f_2 = -1;
	Global_1939221->f_1433.f_8769.f_3 = -1;
	Global_1939221->f_1433.f_8769.f_4 = 0;
	Global_1939221->f_1433.f_8769.f_236 = 1;
	Global_1939221->f_1433.f_8769.f_238 = 0;
	Global_1939221->f_1433.f_8769.f_240 = 1;
	Global_1939221->f_1433.f_8769.f_245 = 0;
	func_362(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&((Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_3), "", 128);
		(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_19 = 0;
		(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_2 = -1;
		Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/] = -1;
		iVar0++;
	}
}

void func_51(bool bParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (bParam0)
	{
		case 822989203:
			switch (bParam1)
			{
				case -2107252183:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_TYPE_TEMPORARY");
					break;
				case -6116668:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_TYPE_PERSISTENT");
					break;
			}
			break;
		case -1611253054:
			switch (bParam1)
			{
				case 126620015:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
					break;
				case 1513236523:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
					break;
			}
			break;
		case 1908740613:
			switch (bParam1)
			{
				case 126620015:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &(Global_1939221->f_1433.f_156.f_2.f_29)))
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
					}
					else
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
				case 1513236523:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &(Global_1939221->f_1433.f_156.f_2.f_29)))
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
					}
					else
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
			}
			break;
		case -395731946:
			if (!func_90())
			{
				sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_TEMP_OUTFIT");
			}
			else
			{
				switch (bParam1)
				{
					case -1895608703:
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
						break;
					default:
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
						break;
				}
			}
			break;
		case -91914989:
			switch (bParam1)
			{
				case -1895608703:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
					break;
				default:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
					break;
			}
			break;
		case 2131195733:
			switch (bParam1)
			{
				case -299269340:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
					break;
				case 1083456181:
					sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
					break;
			}
			break;
		case 1163184660:
			switch (bParam1)
			{
				case -299269340:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &(Global_1939221->f_1433.f_156.f_2.f_29)))
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
					}
					else
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
				case 1083456181:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &(Global_1939221->f_1433.f_156.f_2.f_29)))
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
					}
					else
					{
						sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		aggregate_func_1791(sVar0, joaat("COLOR_WHITE"));
	}
}

void func_52(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (bParam0)
	{
		bVar0 = aggregate_func_8489(-2040602682);
		aggregate_func_8067(aggregate_func_6048(-2040602682, 0, bVar0));
		if ((!NETWORK::_0x595F028698072DD9(-1) && MISC::IS_ORBIS_VERSION()) || !NETWORK::_0x6506BFA755FB209C())
		{
			func_375(0);
			func_377(aggregate_func_238(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), 0, 0));
		}
		else
		{
			func_375(1);
		}
	}
	else
	{
		aggregate_func_8067(0);
		func_375(0);
		if (func_176(&iVar1, &iVar2))
		{
			if (iVar2 != -1896177107)
			{
				iVar2 = -1896177107;
				func_158(iVar1, iVar2);
			}
		}
		func_377(aggregate_func_238(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), 0, 0));
	}
	func_378(-1895608703);
	func_380(func_379(PLAYER::PLAYER_ID(), 1), 1);
	if ((bParam1 && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_12.f_24)) && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_12.f_23))
	{
		if (bParam0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_12.f_24, false);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896726->f_13.f_50.f_12.f_23, -6116668);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_12.f_24, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896726->f_13.f_50.f_12.f_23, -2107252183);
		}
	}
}

void func_53(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	bVar0 = aggregate_func_682(Global_1273882->f_15);
	iVar1 = _NAMESPACE26::_0x9970AE8C3D706139();
	if (aggregate_func_7670())
	{
		iVar1 = func_383();
	}
	iVar2 = -1;
	switch (iVar1)
	{
		case 0:
		case 2:
			if (bParam0 == 0)
			{
				iVar2 = 1;
			}
			break;
		case 1:
			if (bParam0)
			{
				if (bVar0)
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = 2;
				}
			}
			break;
	}
	if (iVar2 == -1)
	{
		return;
	}
	_NAMESPACE26::_0xC5BF29F4035277C2(iVar2);
	iVar3 = aggregate_func_1048(PLAYER::PLAYER_ID());
	if (iVar3 != 0)
	{
		aggregate_func_2626(iVar3, bParam0);
	}
}

void func_54()
{
	Global_1939221->f_1433.f_156.f_263.f_90 = MISC::GET_GAME_TIMER();
}

void func_55(bool bParam0)
{
	int iVar0;
	int iVar1;

	switch (bParam0)
	{
		case -1895608703:
			iVar0 = 0;
			break;
		case 76824010:
			iVar0 = 1;
			break;
		case 1128045213:
			iVar0 = 2;
			break;
	}
	iVar1 = aggregate_func_1048(PLAYER::PLAYER_ID());
	if (iVar1 != 0)
	{
		func_386(iVar0, iVar1);
	}
}

void func_56(bool bParam0)
{
	int iVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	aggregate_func_557(bParam0, 1, 0);
	iVar0 = aggregate_func_1048(PLAYER::PLAYER_ID());
	if (iVar0 != 0)
	{
		aggregate_func_2626(iVar0, bParam0);
	}
}

void func_58(bool bParam0)
{
	int iVar0;

	iVar0 = func_391(bParam0);
	Global_1131373->f_6289.f_17 = iVar0;
	switch (iVar0)
	{
		case 1:
			if (aggregate_func_3588(&(Global_1273882->f_154[&Global_1273882])) == 0)
			{
				func_393();
			}
			Global_1131373->f_6289.f_13 = 0;
			break;
		case 0:
			if (aggregate_func_3588(&(Global_1273882->f_154[&Global_1273882])) == 2)
			{
				func_394();
			}
			Global_1131373->f_6289.f_12 = 0;
			break;
	}
}

void func_63(bool bParam0)
{
	switch (bParam0)
	{
		case 1534461337:
			if (!NETWORK::_0xD0541EF28E9C4783())
			{
				NETWORK::_0x777D0571A466B520(1);
			}
			break;
		case 2103335718:
			if (NETWORK::_0xD0541EF28E9C4783())
			{
				NETWORK::_0x777D0571A466B520(0);
			}
			break;
	}
}

int func_64(bool bParam0)
{
	switch (bParam0)
	{
		case 1972219037:
			return 0;
		case 1099303125:
			return 2;
		case -606838807:
			return 3;
		case -1615594685:
			return 4;
		case 1364158563:
			return 1;
		default:
			break;
	}
	return 2;
}

void func_65(int iParam0)
{
	aggregate_func_7715(32);
	aggregate_func_7715(64);
	aggregate_func_7715(128);
	aggregate_func_7715(256);
	aggregate_func_7715(512);
	aggregate_func_7715(1);
	aggregate_func_7715(2);
	aggregate_func_7715(4);
	aggregate_func_7715(8);
	aggregate_func_7715(16);
	switch (iParam0)
	{
		case 0:
			aggregate_func_7714(32);
			aggregate_func_7714(1);
			break;
		case 2:
			aggregate_func_7714(64);
			aggregate_func_7714(2);
			break;
		case 3:
			aggregate_func_7714(128);
			aggregate_func_7714(4);
			break;
		case 4:
			aggregate_func_7714(256);
			aggregate_func_7714(8);
			break;
		case 1:
			aggregate_func_7714(512);
			aggregate_func_7714(16);
			break;
	}
	aggregate_func_5004(0, 1);
}

void func_67(int iParam0)
{
	aggregate_func_7715(32);
	aggregate_func_7715(64);
	aggregate_func_7715(128);
	aggregate_func_7715(256);
	aggregate_func_7715(512);
	aggregate_func_7715(1);
	aggregate_func_7715(2);
	aggregate_func_7715(4);
	aggregate_func_7715(8);
	aggregate_func_7715(16);
	switch (iParam0)
	{
		case 0:
			aggregate_func_7714(32);
			aggregate_func_7714(1);
			break;
		case 2:
			aggregate_func_7714(64);
			aggregate_func_7714(2);
			break;
		case 3:
			aggregate_func_7714(128);
			aggregate_func_7714(4);
			break;
		case 4:
			aggregate_func_7714(256);
			aggregate_func_7714(8);
			break;
		case 1:
			aggregate_func_7714(512);
			aggregate_func_7714(16);
			break;
	}
	aggregate_func_5004(0, 1);
}

void func_68(bool bParam0)
{
	switch (func_408(bParam0))
	{
		case 0:
			aggregate_func_7714(262144);
			break;
		case 1:
			aggregate_func_7715(262144);
			break;
		default:
			break;
	}
}

bool func_71(int iParam0)
{
	if (!aggregate_func_4598(iParam0))
	{
		return false;
	}
	else if (!aggregate_func_7398(iParam0, 16))
	{
		return false;
	}
	else if (aggregate_func_4260(&(((*Global_1123778)[iParam0 /*27*/])->f_4)) && aggregate_func_4732(&(((*Global_1123778)[iParam0 /*27*/])->f_4)) < aggregate_func_8302())
	{
		return false;
	}
	return true;
}

void func_75(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (bParam0)
	{
		iVar0++;
	}
	else
	{
		iVar0 = (iVar0 - 1);
	}
	iVar1 = (Global_1896726->f_197.f_9 + iVar0);
	if (iVar1 < 0)
	{
		iVar1 = (Global_1896726->f_197.f_10 - 1);
	}
	else if (iVar1 >= Global_1896726->f_197.f_10)
	{
		iVar1 = 0;
	}
	Global_1896726->f_197.f_8 = iVar1;
}

int func_76()
{
	return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1939221->f_1433.f_31));
}

bool func_77(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/] == 1)
		{
			if ((Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/])->f_1 == iParam0)
			{
				switch ((Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/])->f_2)
				{
					case 0:
						(Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/])->f_2 = 1;
						break;
					case 1:
						(Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/])->f_2 = 0;
						break;
				}
				func_47(1);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_78(int iParam0)
{
	func_419(aggregate_func_7672());
	func_420(iParam0);
}

void func_79(var uParam0)
{
	int iVar0;
	char* sVar1;
	bool bVar2;

	if (*uParam0 != -1740156697)
	{
		return;
	}
	iVar0 = uParam0->f_2;
	sVar1 = "";
	bVar2 = joaat("COLOR_WHITE");
	if (!MISC::IS_ORBIS_VERSION())
	{
		if ((iVar0 == -862379603 || iVar0 == 1363191263) || iVar0 == 2132537609)
		{
			return;
		}
	}
	switch (iVar0)
	{
		case -916367143:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "LOG_FOOTER");
			break;
		case -1537476917:
			sVar1 = func_421();
			break;
		case -348311918:
			sVar1 = func_422();
			break;
		case 1486341085:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "CAMP_AND_PROPERTIES_FOOTER");
			break;
		case -880262015:
			sVar1 = func_423();
			break;
		case -260431196:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "PLAYERS_FOOTER");
			break;
		case 1219657827:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "INVITES_FOOTER");
			break;
		case 1615479072:
			sVar1 = func_424();
			break;
		case 1962827136:
			sVar1 = func_425();
			break;
		case -224013573:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "OPTIONS_FOOTER");
			break;
		case 1244828121:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "EMOTES_FOOTER");
			break;
		case -1694883932:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "PINNED_FOOTER");
			break;
		case -543289345:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NET_MOONSHINE_SET_SHACK_LOCATION_FOOTER");
			break;
		case 1222940221:
			sVar1 = MISC::_CREATE_VAR_STRING(2, func_427(func_426()));
			break;
		case 88228607:
			sVar1 = MISC::_CREATE_VAR_STRING(2, func_429(func_428()));
			break;
		case 290710310:
		case 1685218753:
			sVar1 = func_430(uParam0->f_3);
			break;
		case 504507386:
			sVar1 = func_431();
			break;
		case -1617941426:
			sVar1 = func_431();
			break;
		case 2054047271:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "");
			break;
		case -1465661771:
			sVar1 = func_432();
			break;
		case -1606096174:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_VERSUS_FOOTER");
			break;
		case -882681338:
			sVar1 = func_433();
			break;
		case 1671201754:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBERS_FOOTER");
			break;
		case 1689032681:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_SETTINGS_FOOTER");
			break;
		case 1854460024:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_ABANDON_LINK_FOOTER");
			break;
		case -327353888:
			sVar1 = func_434();
			break;
		case 154809164:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_PERSISTENCE_FOOTER");
			break;
		case -1103748417:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "");
			break;
		case -779773310:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "");
			break;
		case -1086306300:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CREW_FOOTER");
			break;
		case -2088725625:
			sVar1 = func_435(&bVar2);
			break;
		case -1320685749:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "INVITE_PLAYERS_LINK");
			break;
		case 1280146211:
			sVar1 = func_436();
			break;
		case -2012882360:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_CHEATING_FOOTER");
			break;
		case -1024115628:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_CHEATING_FOOTER");
			break;
		case 1717935887:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_ABUSIVE_FOOTER");
			break;
		case 566751030:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_DISRUPTIVE_FOOTER");
			break;
		case -757187920:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OFFENSIVE_FOOTER");
			break;
		case 575735035:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OLN_FOOTER");
			break;
		case 1302293867:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OSCN_FOOTER");
			break;
		case 1284519075:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OCN_FOOTER");
			break;
		case -36476126:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OCE_FOOTER");
			break;
		case 1296297252:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OPN_FOOTER");
			break;
		case 1463101399:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_REPORT_OHN_FOOTER");
			break;
		case -999900281:
			sVar1 = func_437();
			break;
		case -281834246:
			sVar1 = func_438();
			break;
		case 238850895:
			sVar1 = func_439();
			break;
		case -1108319209:
			sVar1 = func_440();
			break;
		case 60364622:
			sVar1 = func_441();
			break;
		case 515157779:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PW_MESSAGE_FOOTER");
			break;
		case 1029117766:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PW_REPORT_PLAYER_FOOTER");
			break;
		case -622415922:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PW_SHOW_GAMER_CARD_FOOTER");
			break;
		case 1891046454:
			sVar1 = func_442(-1896177107);
			break;
		case -1431653946:
			sVar1 = func_442(2042309940);
			break;
		case 921074654:
			sVar1 = func_443();
			break;
		case 2087912236:
			return;
		case -1913419121:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NET_CAMP_CAMP_STATS_FOOTER");
			break;
		case 1603044301:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NET_CAMP_LOCATION_ENTRY_FOOTER");
			break;
		case 2077941391:
			sVar1 = MISC::_CREATE_VAR_STRING(2, func_444(3));
			break;
		case 1018100553:
			sVar1 = MISC::_CREATE_VAR_STRING(2, func_444(8));
			break;
		case 1088802604:
			sVar1 = func_445(2, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_2));
			break;
		case -910546409:
			sVar1 = func_445(3, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_3));
			break;
		case -1902254786:
			sVar1 = func_445(4, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_4));
			break;
		case 1876618697:
			sVar1 = func_445(8, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_6));
			break;
		case 587836234:
			sVar1 = func_445(9, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_7));
			break;
		case 513547135:
			sVar1 = func_445(0, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_8));
			break;
		case 2047751621:
			sVar1 = func_445(1, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_9));
			break;
		case -862379603:
			sVar1 = func_445(15, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_10));
			break;
		case 1363191263:
			sVar1 = func_445(16, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_12));
			break;
		case 2132537609:
			sVar1 = func_445(17, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_11));
			break;
		case -1783088248:
			sVar1 = func_445(19, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_13));
			break;
		case 1095154187:
			sVar1 = func_445(18, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_14));
			break;
		case 562873073:
			sVar1 = func_446(DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1461.f_15));
			break;
		case 1835613473:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_EXIT_TO_FREEROAM_FOOTER");
			break;
		case -949910923:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "HORSES_FOOTER");
			break;
		case 649267219:
			sVar1 = func_447();
			break;
		case 867974977:
			sVar1 = func_448();
			break;
		case -1074910265:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_FOOTER");
			break;
		case -766526475:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_RACE_FOOTER");
			break;
		case 388232363:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_COOP_FOOTER");
			break;
		case -783563355:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_COMPETITIVE_FOOTER");
			break;
		case 271601522:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_FREEROAM_FOOTER");
			break;
		case 988182620:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "");
			break;
		case 1499523319:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "");
			break;
		case 1736193867:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "ALLOW_LEADING_FOOTER");
			break;
		case -446710138:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "VEHICLES_FOOTER");
			break;
		case 1129530111:
			sVar1 = func_449();
			break;
		case 1819530459:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_FOOTER");
			break;
		case -516833774:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_RACE_FOOTER");
			break;
		case -1523420457:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_COOP_FOOTER");
			break;
		case -189386465:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_COMPETITIVE_FOOTER");
			break;
		case 697595630:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "SPECIALTY_FREEROAM_FOOTER");
			break;
		case 746698552:
			sVar1 = func_450();
			break;
		case 1024301510:
			if (aggregate_func_4258())
			{
				sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
			}
			else
			{
				sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_FR_VOICE_CHAT_FILTER_FOOTER");
			}
			break;
		case 72556410:
			sVar1 = aggregate_func_81();
			break;
		case -1080557963:
			sVar1 = func_452();
			break;
		case -390113081:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_FR_SESSION_PREFERENCE_FOOTER");
			break;
		case 1537752051:
			sVar1 = func_453(3);
			break;
		case 2073308105:
			sVar1 = func_453(1);
			break;
		case 519925072:
			sVar1 = func_453(0);
			break;
		case 1070510924:
			sVar1 = func_453(2);
			break;
		case -1309595911:
			sVar1 = func_454();
			break;
		case -1899275725:
			sVar1 = func_455(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_3, "dynamic_list_item_walk_enum"));
			break;
		case -644769912:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_STYLES_FOOTER");
			break;
		case 823251548:
		case 1401564842:
			Global_1102098->f_935.f_26 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_3, "posse_versus_content_type");
			sVar1 = aggregate_func_24(Global_1102098->f_935.f_26);
			break;
		case 334553069:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MINIGAME_PLAYERS_FOOTER");
			break;
		case -1239884668:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MINIGAME_GAME_DETAILS_FOOTER");
			break;
		case -1487960093:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "MINIGAME_RULES_FOOTER");
			break;
		case -2051980641:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_MW_EXIT_TO_FREEROAM_FOOTER");
			break;
		case 596189658:
			sVar1 = func_457();
			break;
		case -2120689682:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "STABLES_HORSES_ENTRY_TOOLTIP");
			break;
		case 1664795258:
			sVar1 = MISC::_CREATE_VAR_STRING(2, "STABLES_VEHICLES_ENTRY_TOOLTIP");
			break;
		case 524868507:
			sVar1 = func_458();
			break;
	}
	aggregate_func_1791(sVar1, bVar2);
}

bool func_80()
{
	return NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1939221->f_1433.f_8));
}

int func_81()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1939221->f_1433.f_8));
	if (!func_80())
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

int func_83(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 238850895:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_54, bParam1);
			break;
		case -1108319209:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_156.f_613.f_4.f_1, bParam1);
			break;
	}
	return 1;
}

bool func_84(var uParam0)
{
	struct<7> Var0;
	int iVar7;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	Var0 = { func_171(*uParam0, aggregate_func_4915(29)) };
	iVar7 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(*uParam0, aggregate_func_4915(15));
	if (!func_461(Var0, iVar7))
	{
		return false;
	}
	return true;
}

void func_85(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar1 = aggregate_func_2043(&(Global_1273882->f_154[&Global_1273882]), 0);
	switch (iVar1)
	{
		case 0:
		case 1:
			iVar0 = 0;
			break;
		case 2:
		case 3:
			iVar0 = 1;
			break;
		case 4:
		case 5:
		case 6:
			iVar0 = 2;
			break;
	}
	bVar2 = func_463(iVar0);
	bVar3 = aggregate_func_8486(1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_111, -431776754);
	if (bVar2 != 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_112, bVar2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_112, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_114, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_113, bParam0);
}

void func_86()
{
	char* sVar0;
	int iVar1;

	iVar1 = aggregate_func_2043(&(Global_1273882->f_154[&Global_1273882]), 0);
	switch (iVar1)
	{
		case 0:
		case 1:
			sVar0 = MISC::_CREATE_VAR_STRING(2, "HOSTILITY_LOW_DESCRIPTION");
			break;
		case 2:
		case 3:
			sVar0 = MISC::_CREATE_VAR_STRING(2, "HOSTILITY_MEDIUM_DESCRIPTION");
			break;
		case 4:
		case 5:
		case 6:
			sVar0 = MISC::_CREATE_VAR_STRING(2, "HOSTILITY_HIGH_DESCRIPTION");
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1497.f_115, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_116, true);
}

bool func_88(int iParam0, var uParam1)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*iParam0))
	{
		return false;
	}
	DATABINDING::_0xE6AAB897120492D7(*iParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_ID", &iVar0);
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*iParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_LOCAL_MEMBERSHIP"))
	{
		if (!func_466(iVar0, uParam1, 1))
		{
			return false;
		}
	}
	else if (!func_210(DATABINDING::_0xE6AAB897120492D6(*iParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_GANG_ID"), uParam1, 1))
	{
		return false;
	}
	if (!func_212(uParam1))
	{
		return false;
	}
	return true;
}

void func_89(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar0++;
	}
	Global_1939221->f_1433.f_156.f_97 = { *uParam0 };
}

bool func_90()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_12.f_23))
	{
		switch (DATABINDING::_0x81D7183E7A8ECA72(Global_1896726->f_13.f_50.f_12.f_23))
		{
			case -2107252183:
				return false;
			case -6116668:
				return true;
			default:
				break;
		}
	}
	return false;
}

bool func_91()
{
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAVE_JUST_UPLOAD_LATER())
	{
		return false;
	}
	return true;
}

void func_92()
{
	if (func_467())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_479.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_479.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_479.f_1, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_479.f_28, -1);
		if (aggregate_func_7011(9))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, false);
		}
		else if (aggregate_func_7011(10))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, 2);
		}
		else if (aggregate_func_7011(11))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, 3);
		}
		else if (aggregate_func_7011(12))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, 4);
		}
		else if (aggregate_func_7011(13))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, true);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_479.f_22, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_479.f_1, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_479.f_28, -758850690);
		if (DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24) != aggregate_func_8530())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_479.f_24, aggregate_func_8530());
		}
	}
}

void func_93()
{
	if (func_467())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_508.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_508.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_508.f_1, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_508.f_28, -1);
		if (aggregate_func_7011(19))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, false);
		}
		else if (aggregate_func_7011(20))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, 2);
		}
		else if (aggregate_func_7011(21))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, 3);
		}
		else if (aggregate_func_7011(22))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, 4);
		}
		else if (aggregate_func_7011(23))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, true);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_508.f_22, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_508.f_1, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_508.f_28, 87004688);
		if (DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24) != aggregate_func_9224())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_508.f_24, aggregate_func_9224());
		}
	}
}

void func_94()
{
	if (func_467())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_378.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_378.f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_378.f_1, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_378.f_28, -1);
		if (aggregate_func_7011(9))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, false);
		}
		else if (aggregate_func_7011(10))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, 2);
		}
		else if (aggregate_func_7011(11))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, 3);
		}
		else if (aggregate_func_7011(12))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, 4);
		}
		else if (aggregate_func_7011(13))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, true);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_378.f_22, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_378.f_1, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_378.f_28, -2036453627);
		if (DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24) != aggregate_func_8530())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2190.f_378.f_24, aggregate_func_8530());
		}
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<29> Var6;
	int iVar48;
	bool bVar49;

	if (!aggregate_func_2842("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var2 = { aggregate_func_926(0, 1, 0, -1) };
	Var6.f_10 = -1;
	Var6.f_23 = 3;
	Var6.f_28 = 13;
	bVar49 = false;
	while (bVar49 < iVar1)
	{
		if (!aggregate_func_5181(bVar49, iVar0, iVar1, 0, &Var6, 0, 0))
		{
		}
		else
		{
			func_474(Var2, &Var6, iVar48, 0);
			iVar48++;
		}
		bVar49++;
	}
	while (iVar48 < 11)
	{
		func_474(Var2, &Var6, iVar48, 1);
		iVar48++;
	}
	aggregate_func_2837(iVar0);
}

void func_96(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<23> Var2;
	char* sVar44;
	int iVar45;
	bool bVar46;
	bool bVar47;
	bool bVar48;
	bool bVar49;
	bool bVar50;
	bool bVar51;
	char* sVar52;

	Global_1939221->f_1433.f_1622 = bParam0;
	Var2.f_10 = -1;
	Var2.f_23 = 3;
	Var2.f_28 = 13;
	if (!aggregate_func_2842("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (!aggregate_func_5181(bParam0, iVar0, iVar1, 0, &Var2, 0, 1))
	{
		aggregate_func_2837(iVar0);
		return;
	}
	sVar44 = func_476(0);
	if (aggregate_func_4299(Var2, -653439684, 0, -1) == 515427499)
	{
		sVar44 = func_476(1);
	}
	iVar45 = aggregate_func_5373(Var2.f_11);
	bVar46 = aggregate_func_2016(Var2.f_11) + 1;
	bVar46 = aggregate_func_5045(bVar46, 0, 10);
	bVar48 = bVar46 + 2;
	bVar48 = aggregate_func_5045(bVar48, 0, 10);
	bVar49 = aggregate_func_2016(Var2.f_11) + 1;
	bVar49 = aggregate_func_5045(bVar49, 0, 10);
	bVar51 = bVar49 + 2;
	bVar51 = aggregate_func_5045(bVar51, 0, 10);
	aggregate_func_1189(&Var2, &bVar47, &bVar50);
	bVar47 = BUILTIN::FLOOR((IntToFloat(bVar47) * 0.01f));
	bVar47 = (bVar47 + bVar46);
	bVar47 = aggregate_func_5045(bVar47, 0, 10);
	bVar50 = BUILTIN::FLOOR((IntToFloat(bVar50) * 0.01f));
	bVar50 = (bVar50 + bVar49);
	bVar50 = aggregate_func_5045(bVar50, 0, 10);
	sVar52 = aggregate_func_5253(func_483(Var2.f_11));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_473, MISC::GET_HASH_KEY(sVar52));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_474, MISC::GET_HASH_KEY(aggregate_func_5516(Var2.f_22)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_475, MISC::GET_HASH_KEY(aggregate_func_5284(iVar45, Var2.f_22)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_476, MISC::GET_HASH_KEY(sVar44));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_477, MISC::GET_HASH_KEY(aggregate_func_5165(Var2.f_22)));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_467, bVar46);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_468, bVar47);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_469, bVar48);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_470, bVar49);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_471, bVar50);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_472, bVar51);
	aggregate_func_2837(iVar0);
}

void func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<29> Var3;
	struct<4> Var45;
	int iVar49;

	Var3.f_10 = -1;
	Var3.f_23 = 3;
	Var3.f_28 = 13;
	if (!aggregate_func_2842("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var45 = { aggregate_func_926(0, 1, 0, iParam0) };
	bVar2 = false;
	while (bVar2 < iVar1)
	{
		if (!aggregate_func_5181(bVar2, iVar0, iVar1, 0, &Var3, 0, 0))
		{
		}
		else
		{
			func_488(Var45, &Var3, iVar49, iParam0, 0);
			iVar49++;
		}
		bVar2++;
	}
	while (iVar49 < 11)
	{
		func_474(Var45, &Var3, iVar49, 1);
		iVar49++;
	}
	aggregate_func_2837(iVar0);
}

void func_98()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	struct<29> Var20;
	int iVar62;
	bool bVar63;

	Var2 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!aggregate_func_2836(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var16 = { aggregate_func_934(0, 1, 0, -1) };
	Var20.f_10 = -1;
	Var20.f_23 = 3;
	Var20.f_28 = 13;
	bVar63 = false;
	while (bVar63 < iVar1)
	{
		if (!aggregate_func_5181(bVar63, iVar0, iVar1, 2, &Var20, 0, 0))
		{
		}
		else
		{
			func_491(Var16, &Var20, iVar62, 0);
			iVar62++;
		}
		bVar63++;
	}
	while (iVar62 < 9)
	{
		func_491(Var16, &Var20, iVar62, 1);
		iVar62++;
	}
	aggregate_func_2837(iVar0);
}

void func_99(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<29> Var16;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;

	Global_1939221->f_1433.f_2190 = bParam0;
	Var2 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!aggregate_func_2836(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	Var16.f_10 = -1;
	Var16.f_23 = 3;
	Var16.f_28 = 13;
	if (!aggregate_func_5181(bParam0, iVar0, iVar1, 2, &Var16, 0, 0))
	{
		aggregate_func_2837(iVar0);
		return;
	}
	iVar58 = Var16.f_11;
	iVar59 = aggregate_func_3152(iVar58);
	iVar60 = aggregate_func_3153(iVar58);
	iVar61 = aggregate_func_3154(iVar58);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_373, MISC::GET_HASH_KEY(aggregate_func_5554(iVar59)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_374, MISC::GET_HASH_KEY(aggregate_func_5555(iVar60)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_375, MISC::GET_HASH_KEY(aggregate_func_5556(iVar61)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_376, MISC::GET_HASH_KEY(aggregate_func_3155(iVar58)));
	aggregate_func_2837(iVar0);
}

void func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	struct<29> Var20;
	int iVar62;
	bool bVar63;

	Var2 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!aggregate_func_2836(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var16 = { aggregate_func_934(0, 1, 0, iParam0) };
	Var20.f_10 = -1;
	Var20.f_23 = 3;
	Var20.f_28 = 13;
	bVar63 = false;
	while (bVar63 < iVar1)
	{
		if (!aggregate_func_5181(bVar63, iVar0, iVar1, 2, &Var20, 0, 0))
		{
		}
		else
		{
			func_499(Var16, &Var20, iVar62, iParam0, 0);
			iVar62++;
		}
		bVar63++;
	}
	while (iVar62 < 9)
	{
		func_491(Var16, &Var20, iVar62, 1);
		iVar62++;
	}
	aggregate_func_2837(iVar0);
}

void func_101(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_501(aggregate_func_8052(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2628.f_39, bVar0);
}

void func_102(int iParam0)
{
	switch (iParam0)
	{
		case -1896177107:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2628.f_38, 442252665);
			break;
		case 2042309940:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2628.f_38, 771582374);
			break;
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2628.f_38, 2);
			break;
	}
}

void func_103(bool bParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (bParam0)
	{
		case -682748:
			sVar0 = "PLAYER_CAMP_GRIZZLIES";
			break;
		case 1357161730:
			sVar0 = "PLAYER_CAMP_BAYOU_NWA";
			break;
		case 1581179681:
			sVar0 = "PLAYER_CAMP_BIG_VALLEY";
			break;
		case -215258135:
			sVar0 = "PLAYER_CAMP_CHOLLA_SPRINGS";
			break;
		case -987049424:
			sVar0 = "PLAYER_CAMP_CUMBERLAND_FOREST";
			break;
		case 892234183:
			sVar0 = "PLAYER_CAMP_GAPTOOTH_RIDGE";
			break;
		case -1554232707:
			sVar0 = "PLAYER_CAMP_GREAT_PLAINS";
			break;
		case 1538293636:
			sVar0 = "PLAYER_CAMP_HEARTLANDS";
			break;
		case -1992167326:
			sVar0 = "PLAYER_CAMP_HENNIGANS_STEAD";
			break;
		case -1884014371:
			sVar0 = "PLAYER_CAMP_RIO_BRAVO";
			break;
		case -1871413878:
			sVar0 = "PLAYER_CAMP_ROANOKE_RIDGE";
			break;
		case 1483778247:
			sVar0 = "PLAYER_CAMP_SCARLETT_MEADOWS";
			break;
		case -724534761:
			sVar0 = "PLAYER_CAMP_TALL_TREES";
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_54.f_70, MISC::_CREATE_VAR_STRING(2, sVar0));
}

int func_104()
{
	return Global_1939221->f_1433.f_2628.f_47;
}

void func_105(bool bParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_502(aggregate_func_8052(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2628.f_43, bVar0);
}

void func_106(int iParam0, bool bParam1)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;

	if (&Global_1273882 != 255)
	{
		vVar0 = { aggregate_func_5046(&Global_1273882) };
		if (vVar0.y == bParam1 && vVar0.x == aggregate_func_8052(iParam0))
		{
			aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NET_CAMP_LOCATION_PITCHED_FOOTER"), joaat("COLOR_WHITE"));
			return;
		}
	}
	bVar3 = func_502(aggregate_func_8052(iParam0));
	if (!aggregate_func_4574(bVar3))
	{
		aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NET_CAMP_LOCATION_NO_CASH_FOOTER"), joaat("COLOR_WHITE"));
		return;
	}
	vVar0.f_1 = bParam1;
	vVar0.x = aggregate_func_8052(iParam0);
	if (func_505(vVar0, _NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15)))
	{
		aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NET_CAMP_LOCATION_TOO_SMALL"), joaat("COLOR_WHITE"));
		return;
	}
	iVar4 = _NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15);
	if (!func_506(vVar0.x, iVar4, bParam1))
	{
		aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NET_CAMP_DISTRICT_INVALID"), joaat("COLOR_WHITE"));
		return;
	}
	aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NET_CAMP_LOCATION_ENTRY_FOOTER"), joaat("COLOR_WHITE"));
}

int func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	struct<10> Var8;

	iVar2 = aggregate_func_1499(1);
	Var3 = { aggregate_func_2834(1) };
	bVar7 = aggregate_func_4271(iParam0);
	Var8.f_9 = -1591664384;
	if (bVar7 == 0)
	{
		return 0;
	}
	iVar1 = INVENTORY::_0x033EE4B89F3AC545(iVar2, &Var3, bVar7);
	if (iVar1 == 0)
	{
		return 0;
	}
	if (iVar1 > 37)
	{
		iVar1 = 37;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!INVENTORY::_0xBE012571B25F5ACA(iVar2, &Var3, bVar7, iVar0, &Var8))
		{
		}
		else
		{
			return Var8.f_4;
		}
		iVar0++;
	}
	return 0;
}

void func_108(bool bParam0)
{
	vector3 vVar0;

	if (bParam0 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_6264.f_11, -1);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_6264.f_12, -1);
	}
	else
	{
		vVar0 = { aggregate_func_5498(bParam0) };
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_6264.f_11, vVar0.x);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_6264.f_12, func_511(bParam0));
	}
}

int func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	struct<10> Var8;
	int iVar22;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = aggregate_func_1499(1);
	Var3 = { aggregate_func_2834(1) };
	Var8.f_9 = -1591664384;
	bVar7 = aggregate_func_4271(iParam0);
	iVar22 = INVENTORY::_0x033EE4B89F3AC545(iVar2, &Var3, bVar7);
	if (iParam1 > (iVar22 - 1))
	{
		return 0;
	}
	if (iVar22 > 0)
	{
		if (!INVENTORY::_0xBE012571B25F5ACA(iVar2, &Var3, bVar7, iParam1, &Var8))
		{
			return 0;
		}
		iVar1 = Var8.f_4;
	}
	else
	{
		return 0;
	}
	return iVar1;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar8;
	struct<10> Var9;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return -1;
	}
	iVar3 = aggregate_func_1499(1);
	Var4 = { aggregate_func_2834(1) };
	bVar8 = aggregate_func_4271(iVar0);
	Var9.f_9 = -1591664384;
	iVar2 = INVENTORY::_0x033EE4B89F3AC545(iVar3, &Var4, bVar8);
	if (iVar2 == 0)
	{
		return -1;
	}
	if (iVar2 > 37)
	{
		iVar2 = 37;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar2 - 1))
	{
		if (!INVENTORY::_0xBE012571B25F5ACA(iVar3, &Var4, bVar8, iVar1, &Var9))
		{
		}
		else if (iParam1 == Var9.f_4)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_111(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, "moonshine_selection_property");
	if (bVar0 != -1 && bVar0 < 5)
	{
		bVar1 = bVar0;
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_7711.f_248, bVar1);
	}
	func_512(1);
}

void func_112(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_513(bParam0);
	bVar1 = -1593595016;
	if (DATABINDING::_0x81D7183E7A8ECA72(Global_1939221->f_1433.f_7711.f_240) != bVar0)
	{
		if (!TXD::_0xBA0163B277C2D2D0(bVar1))
		{
			return;
		}
		TXD::_0xDB1BD07FB464584D(bVar1, 0);
		if (!TXD::_0xBE72591D1509FFE4(bVar1))
		{
			return;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_7711.f_241, bVar1);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_7711.f_240, bVar0);
	}
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 2077941391:
			return 3;
		case 1088802604:
			return 2;
		case -910546409:
			return 3;
		case -1902254786:
			return 4;
		case 491987586:
			return 5;
		case -240952777:
			return 6;
		case 1018100553:
			return 8;
		case 1876618697:
			return 8;
		case 587836234:
			return 9;
		case 513547135:
			return 0;
		case 2047751621:
			return 1;
		case -862379603:
			return 15;
		case 1363191263:
			return 16;
		case 2132537609:
			return 17;
		case -1783088248:
			return 19;
		case 1095154187:
			return 18;
		default:
			break;
	}
	return -1;
}

void func_116()
{
	aggregate_func_870(Global_1901929->f_117.f_41.f_1, Global_1901929->f_117.f_41);
}

void func_117()
{
	func_516(-1209711415);
}

int func_118()
{
	struct<51> Var0;

	func_517();
	Var0.f_50 = 256;
	Var0 = 1;
	StringCopy(&(Var0.f_1), func_518(), 128);
	StringCopy(&(Var0.f_17), func_519(), 128);
	Var0.f_49 = 20;
	return func_520(&Var0);
}

int func_119()
{
	struct<51> Var0;

	func_517();
	Var0.f_50 = 256;
	Var0 = 1;
	StringCopy(&(Var0.f_1), func_518(), 128);
	StringCopy(&(Var0.f_17), func_519(), 128);
	Var0.f_49 = 20;
	return func_520(&Var0);
}

void func_120()
{
	Global_1939221->f_1433.f_8769.f_245 = 0;
	Global_1939221->f_1433.f_8769.f_247 = 3;
	Global_1939221->f_1433.f_8769.f_246 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_121()
{
	aggregate_func_6908(68);
	aggregate_func_8605(joaat("freeroam"), 268435456);
	aggregate_func_6909(3);
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar14;
	int iVar15;
	int iVar16;
	char cVar17[64];

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(87));
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(50));
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_3.f_1 = -1;
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	switch (iVar0)
	{
		case 1:
			iVar2 = NETWORK::_0x27B1AE4D8C652F08(iVar1);
			NETWORK::_0xC0CFFDA87C2C163D(iVar2, &Var3, 11);
			iVar15 = NETWORK::_0xE79BA3BC265895DA(iVar2);
			iVar14 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(iParam0, aggregate_func_4915(15));
			break;
		case 10:
			StringCopy(&cVar17, MISC::_CREATE_VAR_STRING(2, "POSSE_INVITE_HDR"), 64);
			iVar15 = aggregate_func_1966(cVar17);
			iVar16 = MISC::_CREATE_VAR_STRING(2, "POSSE_INVITE_DESC");
			iVar14 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(iParam0, aggregate_func_4915(15));
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_242.f_7.f_1, iVar15);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_242.f_7.f_4, iVar14);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_242.f_7.f_5, iVar16);
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(87));
	switch (iVar0)
	{
		case 8:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(50));
			func_535(iVar1, iParam0);
			break;
		case 21:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(50));
			aggregate_func_2609(iVar1, 1);
			break;
		case 16:
		case 17:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(51));
			func_537(iVar1);
			break;
		case 6:
			break;
		case 1:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(50));
			aggregate_func_2728(iVar1, 0);
			break;
	}
	aggregate_func_1546(iParam0);
}

void func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3;
	struct<2> Var10;
	int iVar18;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(75));
	switch (iVar0)
	{
		case 2:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(50));
			iVar2 = NETWORK::_0x27B1AE4D8C652F08(iVar1);
			NETWORK::_0x16EFB123C4451032(iVar2, &Var3);
			NETWORK::NETWORK_SHOW_PROFILE_UI(&Var3);
			break;
		case 3:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(50));
			_NAMESPACE26::_0x7BAA30C9BBE8AEE7(iVar1, &Var10);
			NETWORK::NETWORK_SHOW_PROFILE_UI(&(Var10.f_1));
			break;
		case 4:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(51));
			iVar18 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar18) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar18))
			{
				return;
			}
			Var3 = { aggregate_func_2843(iVar18) };
			NETWORK::NETWORK_SHOW_PROFILE_UI(&Var3);
			break;
		case 22:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(50));
			iVar18 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar18) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar18))
			{
				return;
			}
			Var3 = { aggregate_func_2843(iVar18) };
			NETWORK::NETWORK_SHOW_PROFILE_UI(&Var3);
			break;
	}
}

bool func_126()
{
	int iVar0;

	iVar0 = func_539();
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

int func_127()
{
	bool bVar0;
	bool bVar1;

	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_19);
	bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_20);
	if (bVar1)
	{
		return 1;
	}
	if (bVar0)
	{
		return 2;
	}
	return 1;
}

void func_128(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_447, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_20, false);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_447, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_448, -138701133);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_19, true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_20, false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_447, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_448, 1012636423);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_20, true);
			break;
	}
}

bool func_129()
{
	int iVar0;

	iVar0 = func_540();
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

int func_130()
{
	bool bVar0;
	bool bVar1;

	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_19);
	bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_20);
	if (bVar1)
	{
		return 1;
	}
	if (bVar0)
	{
		return 2;
	}
	return 1;
}

void func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_370, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_20, false);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_370, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_371, 1810553290);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_19, true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_20, false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_370, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2190.f_371, 1049535948);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_20, true);
			break;
	}
}

int func_132(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	Global_1939221->f_1433.f_2 = iParam0;
	func_36(5, 1);
	return 1;
}

void func_133()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939221->f_1433.f_54.f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_54.f_5, "");
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939221->f_1433.f_54.f_6))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_54.f_6, joaat("COLOR_WHITE"));
	}
}

void func_139()
{
	aggregate_func_2882(&(Global_1896726->f_5), 7);
}

void func_140(var uParam0)
{
	Global_1939221->f_1433.f_156.f_2 = { *uParam0 };
}

bool func_141(int iParam0)
{
	if (!UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(1433015236, iParam0))
	{
		return false;
	}
	return true;
}

bool func_142()
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1939221->f_1433.f_31)))
	{
		return false;
	}
	if (!func_30(Global_1939221->f_1433.f_31, &(Global_1939221->f_1433.f_31.f_7)))
	{
		return false;
	}
	return true;
}

int func_143(var uParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	bool bVar5;
	struct<10> Var6;
	int iVar20;
	char cVar21[64];
	struct<36> Var29;
	int iVar65;

	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	iVar0 = aggregate_func_1499(1);
	Var1 = { aggregate_func_2834(1) };
	Var6.f_9 = -1591664384;
	bVar5 = aggregate_func_4271(*uParam0);
	iVar20 = INVENTORY::_0x033EE4B89F3AC545(iVar0, &Var1, bVar5);
	if (iVar20 > 37)
	{
		iVar20 = 37;
	}
	Var29 = 1;
	Var29.f_1 = 1;
	Var29.f_2 = joaat("COLOR_WHITE");
	Var29.f_4 = -1;
	Var29.f_5 = -1;
	Var29.f_6 = -1;
	Var29.f_10 = -1;
	Var29.f_11 = -1;
	Var29.f_12 = -1;
	Var29.f_32 = -1;
	Var29.f_35 = -1;
	if (iVar20 > 0)
	{
		iVar65 = 0;
		while (iVar65 <= (iVar20 - 1))
		{
			if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &Var1, bVar5, iVar65, &Var6))
			{
			}
			else
			{
				StringCopy(&cVar21, "emote_specific_", 64);
				StringIntConCat(&cVar21, iVar65, 64);
				func_544(&Var29, uParam1, Var6.f_4, uParam0->f_5);
				func_545(uParam0->f_14[iVar65 /*31*/], uParam0->f_13, cVar21, Var29);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "pm_dynamic_text_and_end_image_and_corner_end_image", &(uParam0->f_14[iVar65 /*31*/]));
			}
			iVar65++;
		}
	}
	return 1;
}

char* func_144(int iParam0)
{
	return aggregate_func_9280(iParam0);
}

void func_145(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_6264.f_10, bParam0);
}

int func_146(var uParam0, var uParam1)
{
	char cVar0[64];
	struct<36> Var8;
	int iVar44;
	int iVar45;

	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	Var8 = 1;
	Var8.f_1 = 1;
	Var8.f_2 = joaat("COLOR_WHITE");
	Var8.f_4 = -1;
	Var8.f_5 = -1;
	Var8.f_6 = -1;
	Var8.f_10 = -1;
	Var8.f_11 = -1;
	Var8.f_12 = -1;
	Var8.f_32 = -1;
	Var8.f_35 = -1;
	iVar45 = 3;
	iVar44 = 0;
	while (iVar44 <= iVar45)
	{
		if (&uParam1->f_2[iVar44] == 0)
		{
		}
		else
		{
			StringCopy(&cVar0, "emote_specific_", 64);
			StringIntConCat(&cVar0, iVar44, 64);
			func_544(&Var8, uParam1, &(uParam1->f_2[iVar44]), uParam0->f_5);
			func_545(uParam0->f_14[iVar44 /*31*/], uParam0->f_13, cVar0, Var8);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "pm_dynamic_text_and_end_image_and_corner_end_image", &(uParam0->f_14[iVar44 /*31*/]));
			iVar44++;
		}
	}
	return 1;
}

int func_147(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (bParam2 == &uParam0->f_2[iVar2])
		{
			bVar1 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar1)
	{
		return 0;
	}
	iVar3 = aggregate_func_5582(iVar0);
	Var4 = { aggregate_func_2828(bParam2, aggregate_func_2834(1), iVar3, 1) };
	return aggregate_func_5583(&(Global_1070355->f_26843.f_11), Var4);
}

int func_148(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	if (uParam0->f_1 == -1)
	{
		return 0;
	}
	iVar1 = aggregate_func_5582(iVar0);
	Var2 = { aggregate_func_2828(&(uParam0->f_2[uParam0->f_1]), aggregate_func_2834(1), iVar1, 1) };
	return aggregate_func_5388(&(Global_1070355->f_26843.f_11), Var2);
}

bool func_155(int iParam0, struct<2> Param1)
{
	switch (iParam0)
	{
		case 6:
			if (!func_560(Param1))
			{
				return false;
			}
			break;
		case 4:
			if (!func_561(Param1))
			{
				return false;
			}
			break;
		case 5:
			if (!func_562(Param1))
			{
				return false;
			}
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			if (!func_563(iParam0, &Param1))
			{
				return false;
			}
			break;
		default:
			return false;
	}
	aggregate_func_6525(iParam0, Param1, -1);
	return true;
}

bool func_156(int iParam0, bool bParam1)
{
	struct<2> Var0;
	int iVar3;
	int iVar4;

	if (!aggregate_func_2991(16))
	{
		return false;
	}
	iVar3 = aggregate_func_8052(iParam0);
	iVar4 = _NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15);
	Var0 = iVar3;
	Var0.f_1 = bParam1;
	if (aggregate_func_2991(64))
	{
		if (!aggregate_func_7087(aggregate_func_7988(Var0), 1, 59806960))
		{
			return false;
		}
	}
	return func_506(iVar3, iVar4, bParam1);
}

bool func_157()
{
	return Global_1896726->f_13.f_3;
}

int func_158(bool bParam0, int iParam1)
{
	Global_1896726->f_13.f_7 = bParam0;
	Global_1896726->f_13.f_8 = iParam1;
	Global_1896726->f_13.f_6 = 1;
	Global_1896726->f_13.f_9 = func_502(aggregate_func_8052(iParam1));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896726->f_13.f_50.f_4, MISC::_CREATE_VAR_STRING(2, aggregate_func_7748(bParam0, 0)));
	}
	return 1;
}

void func_161(int iParam0)
{
	Global_1939221->f_1433.f_2628.f_47 = iParam0;
}

void func_163()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		return;
	}
	Global_1180694->f_5[1] = 0;
	aggregate_func_4241(Global_1180694->f_5[1], 1);
	aggregate_func_346(1);
}

void func_164()
{
	bool bVar0;
	bool bVar1;

	if (aggregate_func_3450(PLAYER::GET_PLAYER_INDEX(), 1) == -1)
	{
		bVar0 = aggregate_func_5209(1384535894, 0, 1, -1, 1);
		bVar1 = aggregate_func_7790(1384535894, bVar0, 0, 1, 1);
		if ((bVar0 == -570078785 || (aggregate_func_5210(bVar0) && aggregate_func_5216(1384535894, 773203532 /* GXTEntry: "Gold Bar" */, bVar0, 1, 1) > 0)) && !aggregate_func_2926(bVar1))
		{
			aggregate_func_5370(0, 0, (bVar1 / 100));
			aggregate_func_5003(1);
		}
	}
}

void func_165()
{
	if (aggregate_func_4251() == -1)
	{
		PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()), 1, 21030, PLAYER::PLAYER_PED_ID());
	}
	else
	{
		aggregate_func_375(PLAYER::PLAYER_PED_ID(), joaat("weapon_fall"), 0, 0);
	}
}

bool func_166()
{
	return Global_1939221->f_1433.f_156.f_205.f_3;
}

void func_167(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 57)
	{
		return;
	}
	MISC::_COPY_MEMORY(&((Global_1896726->f_3715[iVar0 /*4*/])->f_3), &uVar1, 1);
	Global_1896726->f_3715[iVar0 /*4*/] = 0;
	(Global_1896726->f_3715[iVar0 /*4*/])->f_2 = 0;
	(Global_1896726->f_3715[iVar0 /*4*/])->f_1 = 0;
}

void func_168(bool bParam0, bool bParam1)
{
	bool bVar0;
	struct<95> Var1;
	int iVar96;

	Var1.f_38 = 7;
	Var1.f_91 = -1;
	if (!bParam1)
	{
		if (!bParam0)
		{
			if (func_586(&Var1, 1))
			{
				bVar0 = true;
			}
		}
		else
		{
			Var1 = { func_183(1) };
			if (func_212(&Var1))
			{
				bVar0 = true;
			}
		}
	}
	iVar96 = 0;
	if (bVar0)
	{
		func_140(&Var1);
		func_89(&Var1);
		func_132(16);
		iVar96 = 394524610;
	}
	else
	{
		func_587();
		func_588();
		if (func_589())
		{
			func_132(13);
			iVar96 = -303450633;
		}
		else
		{
			func_132(15);
			iVar96 = 1243396847;
		}
	}
	if (iVar96 == 0)
	{
	}
	else if (!func_141(iVar96))
	{
	}
}

void func_169()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_393.f_1))
	{
		DATABINDING::_0x3BF0767CF33FCC88(Global_1896726->f_393.f_1);
	}
}

struct<7> func_171(int iParam0, char* sParam1)
{
	struct<7> Var0;

	DATABINDING::_0xB138CA787F3DD858(iParam0, sParam1, &Var0);
	return Var0;
}

bool func_172(struct<7> Param0, char[4] cParam7, bool bParam8)
{
	struct<11> Var0;
	vector3 vVar11;

	if (!aggregate_func_3096(Param0))
	{
		return false;
	}
	else if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Param0))
	{
		return false;
	}
	if (!aggregate_func_7842())
	{
		aggregate_func_2975("NT_INV_FINISH_FIRST_MISSION", 10000, 0, 0, 0, 1);
		return false;
	}
	if (!bParam8)
	{
		if (Global_1939221->f_1433.f_1405 != -1 && (MISC::GET_GAME_TIMER() - Global_1939221->f_1433.f_1405) < Global_1901929->f_1.f_22)
		{
			Global_1939221->f_1433.f_1405 = MISC::GET_GAME_TIMER();
			return false;
		}
	}
	if (!bParam8)
	{
		Global_1939221->f_1433.f_1405 = MISC::GET_GAME_TIMER();
	}
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	if (aggregate_func_4478())
	{
		aggregate_func_4241(&(Var0.f_10), 4);
	}
	else
	{
		aggregate_func_4243(&(Var0.f_10), 4);
	}
	Var0 = aggregate_func_7084();
	Var0.f_1 = aggregate_func_7916();
	Var0.f_2 = aggregate_func_8543();
	Var0.f_3 = { aggregate_func_6588() };
	Var0.f_9 = aggregate_func_8544();
	if (NETWORK::NETWORK_IS_FRIEND(&Param0))
	{
		if (!NETWORK::_0xE348D1404BD80146(&Param0))
		{
			return false;
		}
	}
	vVar11 = { aggregate_func_8105() };
	func_600(&Param0, cParam7, &vVar11, &Var0, 0);
	return true;
}

int func_173()
{
	return Global_1939221->f_1433.f_8769.f_1;
}

void func_174(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3;
	int iVar10;
	int iVar11;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	iVar10 = func_601();
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (Global_1939221->f_1433.f_1405 != -1 && (MISC::GET_GAME_TIMER() - Global_1939221->f_1433.f_1405) < Global_1901929->f_1.f_22)
			{
			}
			else if (aggregate_func_9158(iVar10) && aggregate_func_9257(iVar10))
			{
				if (!func_604(iVar10, 1))
				{
				}
				else
				{
					bVar0 = false;
					while (bVar0 <= (iVar1 - 1))
					{
						iVar2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, bVar0);
						if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar2))
						{
						}
						else
						{
							Var3 = { func_171(iVar2, aggregate_func_4915(29)) };
							if (!aggregate_func_3096(Var3))
							{
							}
							else if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var3))
							{
							}
							else if (NETWORK::_0xA2837A5E21FB5A58(&Var3))
							{
							}
							else if (aggregate_func_9158(iVar10) && aggregate_func_9257(iVar10))
							{
								iVar11 = func_605(iVar10, &Var3);
								if (iVar11 != -1 && iVar11 != 0)
								{
								}
								else if (!func_172(Var3, NETWORK::_0x5659D87BE674AB17(&Var3), 1))
								{
								}
								bVar0++;
								Global_1939221->f_1433.f_1405 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_175()
{
	return Global_1896726->f_13.f_6;
}

bool func_176(bool bParam0, int iParam1)
{
	*bParam0 = Global_1896726->f_13.f_7;
	*iParam1 = Global_1896726->f_13.f_8;
	return Global_1896726->f_13.f_6;
}

int func_177()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_41.f_23))
	{
		switch (DATABINDING::_0x81D7183E7A8ECA72(Global_1896726->f_13.f_50.f_41.f_23))
		{
			case 1513236523:
				return 0;
			case 126620015:
				return 1;
			default:
				break;
		}
	}
	return 1;
}

int func_178()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_99.f_23))
	{
		switch (DATABINDING::_0x81D7183E7A8ECA72(Global_1896726->f_13.f_50.f_99.f_23))
		{
			case 1083456181:
				return 0;
			case -299269340:
				return 1;
			default:
				break;
		}
	}
	return 1;
}

char* func_179()
{
	return aggregate_func_4984(&(Global_1896726->f_13.f_10));
}

int func_180(int iParam0, int iParam1, var uParam2, var uParam3, char* sParam4)
{
	if (func_607())
	{
		return 0;
	}
	func_608();
	Global_1896726->f_13.f_37 = 1;
	Global_1896726->f_13.f_37.f_2 = iParam1;
	Global_1896726->f_13.f_37.f_1 = iParam0;
	Global_1896726->f_13.f_37.f_3 = uParam2;
	Global_1896726->f_13.f_37.f_4 = uParam3;
	Global_1896726->f_13.f_37.f_5 = { aggregate_func_4982(sParam4) };
	aggregate_func_8067(1);
	return 1;
}

int func_181(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_607())
	{
		return 0;
	}
	func_608();
	Global_1896726->f_13.f_37 = 0;
	Global_1896726->f_13.f_37.f_2 = iParam1;
	Global_1896726->f_13.f_37.f_1 = iParam0;
	Global_1896726->f_13.f_37.f_3 = uParam2;
	Global_1896726->f_13.f_37.f_4 = uParam3;
	StringCopy(&(Global_1896726->f_13.f_37.f_5), "", 64);
	aggregate_func_8067(1);
	return 1;
}

void func_182(int iParam0)
{
	aggregate_func_4996(iParam0);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_UP"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_DOWN"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_LEFT"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_RIGHT"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_TAB_LEFT"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_TAB_LEFT_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_TAB_RIGHT"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_GAME_MENU_TAB_RIGHT_SECONDARY"), false);
}

struct<95> func_183(bool bParam0)
{
	if (bParam0)
	{
		func_612(&(Global_1939221->f_1433.f_156.f_2));
	}
	return Global_1939221->f_1433.f_156.f_2;
}

int func_186(int iParam0)
{
	int iVar0;

	if (Global_1896726->f_191.f_1 != 0)
	{
		return 0;
	}
	Global_1896726->f_191.f_1 = iParam0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 5:
			iVar0 = 9;
			break;
		case 6:
			iVar0 = 8;
			break;
		case 1:
			iVar0 = 7;
			break;
	}
	func_614(30f, iVar0);
	return 1;
}

void func_191()
{
	struct<8> Var0;

	func_326();
	Var0.f_2 = 0;
	Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
	Var0.f_3.f_3 = 1;
	Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
	Var0.f_7.f_3 = 0;
	aggregate_func_4239(&Var0);
	Global_1939221->f_1433.f_156.f_263.f_2 = aggregate_func_3122(&Var0, "NM_MW_POSSE_DISBAND_WARNING_HEADER", "NM_MW_POSSE_DISBAND_WARNING_SUBHEADER", 0, 0, 1);
}

bool func_192(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1828672432))
	{
		return false;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (func_204(iParam0, 1))
		{
		}
		else
		{
			return false;
		}
	}
	else if (_NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15) >= _NAMESPACE26::_0x853B0FA4D8732C57(Global_1273882->f_15))
	{
		if (func_204(iParam0, 2))
		{
		}
	}
	else if (func_204(iParam0, -1))
	{
	}
	return true;
}

bool func_193(int iParam0)
{
	struct<20> Var0;
	int iVar26;

	if (Global_1275329->f_119.f_5)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!aggregate_func_4086(iParam0))
	{
		return false;
	}
	if (func_621(iParam0))
	{
		return false;
	}
	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	iVar26 = 0;
	while (iVar26 <= 31)
	{
		if (&Global_1275117->f_3.f_132[iVar26 /*2*/] == 255)
		{
			func_622(&Var0, iParam0);
			Global_1275117->f_3.f_132[iVar26 /*2*/] = iParam0;
			(Global_1275117->f_3.f_132[iVar26 /*2*/])->f_1 = MISC::_GET_SYSTEM_TIME();
			return true;
		}
		iVar26++;
	}
	return false;
}

struct<7> func_194()
{
	return Global_1939221->f_1433.f_8;
}

bool func_195(struct<7> Param0)
{
	if (!aggregate_func_3096(Param0))
	{
		return false;
	}
	NETWORK::NETWORK_SHOW_PROFILE_UI(&Param0);
	return true;
}

struct<7> func_196()
{
	return Global_1939221->f_1433.f_31;
}

bool func_197(int iParam0)
{
	struct<7> Var0;
	int iVar7;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0))
	{
		return false;
	}
	Var0 = { func_171(iParam0, aggregate_func_4915(29)) };
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&Var0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		return false;
	}
	iVar7 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar7))
	{
		return false;
	}
	if (!func_623(iVar7, !_NAMESPACE79::_0x0DED260A1958A82E(iVar7)))
	{
	}
	return true;
}

bool func_198()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (iVar2 == PLAYER::PLAYER_ID())
		{
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar1++;
			if (!_NAMESPACE79::_0x0DED260A1958A82E(iVar2))
			{
			}
			else
			{
				iVar0++;
			}
		}
		iVar3++;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	return iVar1 == iVar0;
}

void func_199(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (iVar0 == PLAYER::PLAYER_ID())
		{
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			func_623(iVar0, bParam0);
		}
		iVar1++;
	}
}

bool func_200()
{
	int iVar0;

	iVar0 = func_81();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_53, false);
		return false;
	}
	if (!func_624(iVar0, !_NAMESPACE79::_0x0DED260A1958A82E(iVar0)))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_52, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_53, true);
	return true;
}

bool func_201(int iParam0, struct<7> Param1)
{
	struct<28> Var0;
	struct<7> Var118;
	bool bVar125;
	int iVar126;

	Var0.f_27 = 10;
	if (iParam0 == 0 || !POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		return false;
	}
	Var118 = { aggregate_func_3106() };
	if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_19), &Var118))
	{
		return false;
	}
	if (!aggregate_func_3096(Param1))
	{
		return false;
	}
	iVar126 = 0;
	while (iVar126 <= (Var0.f_26 - 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Var0.f_27[iVar126 /*9*/], &Param1))
		{
			bVar125 = true;
		}
		else
		{
			iVar126++;
		}
	}
	if (!bVar125)
	{
		return false;
	}
	if (POSSE::_0xC08EFF658B2E51DB(iParam0, &Param1))
	{
		return true;
	}
	return false;
}

int func_202(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;
	int iVar9;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iParam0) != _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (aggregate_func_682(iVar1))
	{
		if (bParam1)
		{
			Var2 = { aggregate_func_2843(iParam0) };
			POSSE::_0xC08AFF658B2E51DA(&iVar9);
			if (func_201(iVar9, Var2))
			{
				bVar0 = true;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		_NAMESPACE26::_0xCD9E2D9BC52FD80F(iParam0, iParam2);
	}
	return 1;
}

bool func_203(int* iParam0)
{
	char* sVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return false;
	}
	if (!MISC::IS_DURANGO_VERSION())
	{
		return false;
	}
	sVar0 = "";
	NETWORK::_0x5759160AC17C13CE(iParam0, sVar0);
	return true;
}

bool func_204(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam1 == 1)
	{
		return false;
	}
	if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID())) || !_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (!aggregate_func_8030())
	{
		aggregate_func_2731(iVar0);
		return false;
	}
	if (aggregate_func_4103(iParam0))
	{
		return false;
	}
	if (!aggregate_func_1470(iParam0))
	{
		return false;
	}
	if (iParam1 == 2)
	{
		aggregate_func_3537("NG_FULL_S");
		return true;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1828672432))
	{
		aggregate_func_3537("NG_CANT_INVITE");
		return false;
	}
	if (!aggregate_func_9315())
	{
		aggregate_func_3537("NG_POSSE_INVITE_LIMIT");
		return false;
	}
	if (_NAMESPACE26::_0x6102830F764B3DE1(iParam0))
	{
		aggregate_func_1962(aggregate_func_4257(-1225075647, 1047079933), 1);
		sVar1 = MISC::_CREATE_VAR_STRING(10, "NG_INVITE_SENT_POSSE", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iParam0), aggregate_func_752(iParam0, 1, -1, 0)));
		aggregate_func_3002(sVar1, -2, 0, 0, 0, 1);
		aggregate_func_4104(iParam0);
		return true;
	}
	aggregate_func_3537("NG_CANT_INVITE");
	return false;
}

int func_206(int iParam0)
{
	char* sVar0;

	if (!aggregate_func_8322(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!CREW::_0xC685B014CE3D988B(iParam0))
	{
		return 0;
	}
	sVar0 = MISC::_CREATE_VAR_STRING(10, "NC_CREW_INVITE_SENT", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iParam0), aggregate_func_752(iParam0, 1, -1, 0)));
	aggregate_func_3002(sVar0, -2, 0, 0, 0, 1);
	return 1;
}

bool func_208(int* iParam0)
{
	char* sVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_FRIEND(iParam0))
	{
		return false;
	}
	sVar0 = "";
	if (!NETWORK::NETWORK_ADD_FRIEND(iParam0, sVar0))
	{
		return false;
	}
	return true;
}

bool func_209(int* iParam0)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_FRIEND(iParam0))
	{
		return false;
	}
	if (!NETWORK::_0x55F618F68AB854D3(iParam0))
	{
		return false;
	}
	return true;
}

bool func_210(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
		{
			return false;
		}
		if (!_NAMESPACE26::_0x0F99F6436528A089(iParam0))
		{
			return false;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0)))
		{
			return false;
		}
	}
	uParam1->f_1 = iParam0;
	uParam1->f_3 = 0;
	*uParam1 = 1;
	uParam1->f_4 = aggregate_func_682(iParam0);
	if (!func_612(uParam1))
	{
		return false;
	}
	return true;
}

bool func_211(struct<7> Param0, int iParam7, char[4] cParam8)
{
	struct<19> Var0;

	if (iParam7 < 0 || iParam7 > 8)
	{
		return false;
	}
	if (!aggregate_func_3096(Param0))
	{
		return false;
	}
	Global_1939221->f_1433.f_1314 = iParam7;
	Global_1939221->f_1433.f_1314.f_1 = { Param0 };
	Var0.f_2 = 0;
	Var0.f_3 = MISC::GET_HASH_KEY("CM_REPORT");
	Var0.f_3.f_3 = 1;
	Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
	Var0.f_7.f_3 = 0;
	aggregate_func_4239(&Var0);
	func_647(Var0, "CWS_REPORT", func_646(Global_1939221->f_1433.f_1314));
	return true;
}

bool func_212(var uParam0)
{
	struct<28> Var0;

	if (!*uParam0)
	{
		return false;
	}
	if (uParam0->f_4 && uParam0->f_3)
	{
		Var0.f_27 = 10;
		if (!POSSE::_0xC087FF658B2E51DA(uParam0->f_2, &Var0))
		{
			return false;
		}
	}
	else
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1))
		{
			return false;
		}
		if (!_NAMESPACE26::_0x0F99F6436528A089(uParam0->f_1))
		{
			return false;
		}
	}
	return true;
}

bool func_213(var uParam0)
{
	if (!func_212(uParam0))
	{
		return false;
	}
	if (aggregate_func_4287(uParam0))
	{
		if (func_648(uParam0))
		{
			if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)))
			{
				if (!func_649(uParam0->f_2, 0))
				{
					return false;
				}
			}
			else if (!func_650(uParam0->f_2))
			{
				return false;
			}
			else if (!func_651(uParam0->f_2))
			{
				return false;
			}
			else
			{
				aggregate_func_4580();
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1))
		{
			return false;
		}
		if (aggregate_func_4287(uParam0))
		{
			if (func_648(uParam0) && !func_652(_NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_1)))
			{
				aggregate_func_3537("NM_GC_POSSE_JOIN_FAIL");
			}
		}
		else
		{
			if (!aggregate_func_8048())
			{
				aggregate_func_3537("NG_CANT_JOIN");
				return false;
			}
			else if (!func_648(uParam0))
			{
				aggregate_func_3626("NG_FULL", aggregate_func_693(uParam0->f_1, 1, 0), aggregate_func_752(_NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_1), 1, -1, 0));
				return false;
			}
			aggregate_func_393(uParam0->f_1);
		}
	}
	return true;
}

int func_218()
{
	int iVar0;

	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 100);
	if (iVar0 >= 0 && iVar0 <= 20)
	{
		return 11;
	}
	else if (iVar0 <= 40)
	{
		return 10;
	}
	else if (iVar0 <= 80)
	{
		return 12;
	}
	else if (iVar0 <= 100)
	{
		return 13;
	}
	return 12;
}

void func_219()
{
	aggregate_func_4884(12);
	aggregate_func_239(1, 32, 2, -1, aggregate_func_4464(), 0, -1, 0, 3, 0);
}

void func_222()
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

void func_229()
{
	int iVar0;

	if (Global_1180694->f_490 == -1)
	{
		return;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(&(Global_1273882->f_154[&Global_1273882]));
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		POSSE::_0xC08BFF658B2E51DA(0);
		aggregate_func_3886(0, 0);
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
	{
		POSSE::_0xC08BFF658B2E51DA(0);
		aggregate_func_3886(0, 0);
	}
	else
	{
		aggregate_func_3886(1, 0);
	}
}

void func_230(int iParam0, int iParam1)
{
	int iVar0;

	if (&Global_1051089)
	{
		return;
	}
	if (!aggregate_func_1921(&iVar0))
	{
		aggregate_func_7810(iParam0, iParam1, 0);
		return;
	}
	aggregate_func_3729(0, iParam0, 1, iParam1, -1, 1, iVar0);
}

void func_231()
{
	int iVar0;

	if (&Global_1051089)
	{
		return;
	}
	if (!aggregate_func_1921(&iVar0))
	{
		func_688(1);
		return;
	}
	aggregate_func_3729(2, 0, 1, 0, -1, 1, iVar0);
}

int func_232(int iParam0)
{
	struct<4> Var0;
	int iVar4;

	Var0 = { func_689(&((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_32)) };
	DATABINDING::_DATABINDING_WRITE_DATA_INT((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_37, Global_1273882->f_21 + 3);
	if (!aggregate_func_7087(1806374467, 1, 59806960))
	{
		return -1;
	}
	iVar4 = aggregate_func_3030(1806374467, "NSTM_STABLE_REVIVE_FEEDPAID", 1, 1, 0, 59806960);
	if (iVar4 == -1)
	{
		return -1;
	}
	if (aggregate_func_8044(&Var0, 0, 1))
	{
		if (!func_692(Var0, 0, 0))
		{
			return -1;
		}
	}
	func_693(Var0, 0, 0);
	func_694(&Var0);
	aggregate_func_7188(32);
	return iVar4;
}

int func_233(int iParam0)
{
	struct<4> Var0;
	int iVar4;

	Var0 = { func_689(&((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_32)) };
	DATABINDING::_DATABINDING_WRITE_DATA_INT((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_37, Global_1273882->f_21 + 3);
	if (!aggregate_func_7087(852655472, 1, 59806960))
	{
		return -1;
	}
	iVar4 = aggregate_func_3030(852655472, "NSTM_VEHICLE_REVIVE_FEEDPAID", 1, 1, 0, 59806960);
	if (iVar4 == -1)
	{
		return -1;
	}
	if (aggregate_func_8044(&Var0, 2, 1))
	{
		if (!func_245(Var0, 2, 0))
		{
			return -1;
		}
	}
	func_693(Var0, 2, 0);
	aggregate_func_7188(32);
	return iVar4;
}

void func_234(bool bParam0)
{
	if (bParam0)
	{
		aggregate_func_485(10, 4);
	}
	else
	{
		aggregate_func_485(9, 4);
	}
}

void func_235()
{
	aggregate_func_485(11, 2);
}

int func_236(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = PED::_0xB676EFDA03DADA52(iVar0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 == PLAYER::PLAYER_PED_ID() && !bParam0)
		{
			return 0;
		}
	}
	Global_1268935->f_11.f_50 = Global_1273882->f_20;
	aggregate_func_6952(47);
	aggregate_func_6956();
	return 1;
}

void func_237(int iParam0)
{
	struct<4> Var0;
	struct<4> Var4;

	if (func_699())
	{
		return;
	}
	Var0 = { func_689(&((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_32)) };
	Var4 = { aggregate_func_4289() };
	if (INVENTORY::_0x4C543D5DFCD2DAFD(&Var0, &Var4))
	{
		return;
	}
	func_701(&Var0, 1);
	aggregate_func_7188(32);
}

void func_238(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar44;
	int iVar45;
	struct<4> Var46;
	struct<4> Var50;
	struct<4> Var54;
	bool bVar58;
	int iVar59;

	if (!aggregate_func_2842("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
	}
	if (bParam0 < 0 || bParam0 >= iVar1)
	{
		aggregate_func_2837(iVar0);
		return;
	}
	Var2.f_10 = -1;
	Var2.f_23 = 3;
	Var2.f_28 = 13;
	if (!aggregate_func_5181(bParam0, iVar0, iVar1, 0, &Var2, 0, 0))
	{
		aggregate_func_2837(iVar0);
		return;
	}
	iVar44 = PLAYER::PLAYER_ID();
	iVar45 = PLAYER::_0xF49F14462F0AE27C(iVar44);
	Var46 = { aggregate_func_926(0, 1, 0, -1) };
	Var50 = { Var2 };
	if (ENTITY::DOES_ENTITY_EXIST(iVar45))
	{
		if (DECORATOR::DECOR_EXIST_ON(iVar45, aggregate_func_8039()))
		{
			Var54 = DECORATOR::DECOR_GET_INT(iVar45, aggregate_func_8039());
		}
		if (DECORATOR::DECOR_EXIST_ON(iVar45, aggregate_func_8040()))
		{
			Var54.f_1 = DECORATOR::DECOR_GET_INT(iVar45, aggregate_func_8040());
		}
		if (DECORATOR::DECOR_EXIST_ON(iVar45, aggregate_func_8041()))
		{
			Var54.f_2 = DECORATOR::DECOR_GET_INT(iVar45, aggregate_func_8041());
		}
		if (DECORATOR::DECOR_EXIST_ON(iVar45, aggregate_func_8042()))
		{
			Var54.f_3 = DECORATOR::DECOR_GET_INT(iVar45, aggregate_func_8042());
		}
	}
	if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var46, &Var50))
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var54, &Var50))
		{
			bVar58 = false;
			if (ENTITY::DOES_ENTITY_EXIST(iVar45))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar45))
				{
					bVar58 = true;
				}
			}
			if (bVar58)
			{
				iVar59 = 120000;
			}
			else
			{
				iVar59 = 30000;
			}
			func_706(Var46, (Global_1273882->f_21 + (iVar59 / 1000)), 2, 0);
			aggregate_func_6956();
			func_234(1);
		}
		aggregate_func_3679(&Var50, 0);
	}
	aggregate_func_2837(iVar0);
}

void func_239(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	if (!aggregate_func_2842("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (bParam0 < 0 || bParam0 >= iVar1)
	{
		aggregate_func_2837(iVar0);
		return;
	}
	Var2.f_10 = -1;
	Var2.f_23 = 3;
	Var2.f_28 = 13;
	if (!aggregate_func_5181(bParam0, iVar0, iVar1, 0, &Var2, 0, 0))
	{
		aggregate_func_2837(iVar0);
		return;
	}
	if (iParam1 == 3)
	{
		aggregate_func_3679(&Var2, 0);
	}
	aggregate_func_9346(&Var2, func_708(iParam1, 0), 0);
	aggregate_func_2837(iVar0);
}

void func_240(bool bParam0)
{
	if (bParam0)
	{
		aggregate_func_485(13, 5);
	}
	else
	{
		aggregate_func_485(12, 5);
	}
}

void func_241()
{
	aggregate_func_485(14, 3);
}

void func_242(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar58;
	int iVar59;
	struct<4> Var60;
	struct<4> Var64;
	struct<4> Var68;
	struct<4> Var72;
	bool bVar76;
	int iVar77;

	Var2 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!aggregate_func_2836(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (bParam0 < 0 || bParam0 >= iVar1)
	{
		aggregate_func_2837(iVar0);
		return;
	}
	Var16.f_10 = -1;
	Var16.f_23 = 3;
	Var16.f_28 = 13;
	if (!aggregate_func_5181(bParam0, iVar0, iVar1, 2, &Var16, 0, 0))
	{
		aggregate_func_2837(iVar0);
		return;
	}
	iVar58 = PLAYER::PLAYER_ID();
	iVar59 = PLAYER::_0xB9050A97594C8832(iVar58);
	Var60 = { aggregate_func_4289() };
	Var64 = { aggregate_func_934(0, 0, 0, -1) };
	Var68 = { Var16 };
	Var72 = { func_710(2) };
	if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var60, &Var72))
	{
		if (aggregate_func_4349(&Var72) && INVENTORY::_0x4C543D5DFCD2DAFD(&Var72, &Var68))
		{
			aggregate_func_5082();
			aggregate_func_4082();
			aggregate_func_2837(iVar0);
			return;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID())))
	{
	}
	if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var64, &Var68))
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(&Var72, &Var68))
		{
			bVar76 = false;
			if (ENTITY::DOES_ENTITY_EXIST(iVar59))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar59))
				{
					bVar76 = true;
				}
			}
			if (bVar76)
			{
				iVar77 = 120000;
			}
			else
			{
				iVar77 = 30000;
			}
			func_714(Var64, (Global_1273882->f_21 + (iVar77 / 1000)), 2, 2);
			aggregate_func_5082();
			func_240(1);
		}
		aggregate_func_3756(&Var68, 0);
	}
	aggregate_func_734(&Var68, 2);
	aggregate_func_2837(iVar0);
}

void func_243(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<29> Var16;

	Var2 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!aggregate_func_2836(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (bParam0 < 0 || bParam0 >= iVar1)
	{
		aggregate_func_2837(iVar0);
		return;
	}
	Var16.f_10 = -1;
	Var16.f_23 = 3;
	Var16.f_28 = 13;
	if (!aggregate_func_5181(bParam0, iVar0, iVar1, 2, &Var16, 0, 0))
	{
		aggregate_func_2837(iVar0);
		return;
	}
	if (iParam1 == 7)
	{
		aggregate_func_3756(&Var16, 0);
	}
	func_717(&Var16, func_708(iParam1, 2), 0);
	aggregate_func_2837(iVar0);
}

bool func_245(struct<4> Param0, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;

	if (aggregate_func_8044(&Param0, 2, 1) && iParam5 == 2)
	{
		return false;
	}
	Var0 = { aggregate_func_4289() };
	iVar4 = 0;
	while (iVar4 < 16)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_513.f_125[iVar4 /*7*/], &Param0) && !INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_513.f_125[iVar4 /*7*/], &Var0))
		{
		}
		else
		{
			(Global_1268935->f_513.f_125[iVar4 /*7*/])->f_5 = Global_1273882->f_21 + 120;
			*(Global_1268935->f_513.f_125[iVar4 /*7*/]) = { Param0 };
			(Global_1268935->f_513.f_125[iVar4 /*7*/])->f_6 = iParam5;
			(Global_1268935->f_513.f_125[iVar4 /*7*/])->f_4 = iParam4;
			return true;
		}
		iVar4++;
	}
	return false;
}

void func_248()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 571466135;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar0))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar0, &vVar1))
		{
			if (vVar1.x == 2099701247)
			{
			}
			else if (vVar1.x == -1203660660)
			{
			}
			else if (vVar1.x == -632467210)
			{
				func_133();
			}
			else if (vVar1.x == -1740156697)
			{
				aggregate_func_1791(_NAMESPACE73::_0x3138582E0A13BFAB(vVar1.z), joaat("COLOR_WHITE"));
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
		}
	}
}

void func_249()
{
	bool bVar0;

	func_730(Global_1273882->f_1, 0);
	func_731();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_90, (UNLOCK::_UNLOCK_IS_UNLOCKED(-1810129149) && aggregate_func_7252()));
	if (aggregate_func_2820() && (aggregate_func_4478() || aggregate_func_4934()))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_91, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_91, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_86, func_734());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_79, func_735());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_78, func_736());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_89, func_737());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_84, func_738());
	bVar0 = func_739();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_80, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_95, bVar0);
	func_740();
}

void func_250()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<39> Var3;

	iVar2 = Global_1273882->f_21;
	if (Global_1939221->f_242.f_1186 <= 0)
	{
		return;
	}
	if (Global_1939221->f_242.f_1190 >= 30)
	{
		Global_1939221->f_242.f_1190 = 0;
	}
	Var3 = { *(Global_1939221->f_242.f_14[Global_1939221->f_242.f_1190 /*39*/]) };
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var3))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT(Var3.f_25);
		if (iVar0 < iVar2)
		{
			func_741(DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939221->f_242.f_14[Global_1939221->f_242.f_1190 /*39*/])->f_26));
			aggregate_func_1546(Var3);
		}
		switch (DATABINDING::_DATABINDING_READ_DATA_INT(Var3.f_26))
		{
			case 21:
				if (!func_742() || iVar0 < iVar2)
				{
					func_741(DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939221->f_242.f_14[Global_1939221->f_242.f_1190 /*39*/])->f_26));
					aggregate_func_1546(Var3);
					iVar1 = 0;
					while (iVar1 < Global_1223462->f_8943.f_14)
					{
						if (&Global_1223462->f_8943.f_9[iVar1 /*4*/] == PLAYER::INT_TO_PLAYERINDEX(DATABINDING::_DATABINDING_READ_DATA_INT(Var3.f_27)))
						{
							(Global_1223462->f_8943.f_9[iVar1 /*4*/])->f_2 = 1;
							(Global_1223462->f_8943.f_9[iVar1 /*4*/])->f_3 = iVar0 < iVar2;
						}
						iVar1++;
					}
				}
				break;
		}
	}
	Global_1939221->f_242.f_1190++;
}

void func_251()
{
	int iVar0;

	if (Global_1939221->f_242.f_1187 <= 0)
	{
		aggregate_func_1791("", joaat("COLOR_WHITE"));
		return;
	}
	func_743();
	iVar0 = Global_1273882->f_21;
	if (Global_1939221->f_242.f_1189 + 1 <= iVar0)
	{
		Global_1939221->f_242.f_1189 = iVar0;
		aggregate_func_1791(func_430(aggregate_func_7672()), joaat("COLOR_WHITE"));
	}
}

void func_252()
{
	char* sVar0;

	sVar0 = UILOG::_0x2A4765812202E671();
	aggregate_func_1791(sVar0, joaat("COLOR_WHITE"));
}

void func_253()
{
	char* sVar0;

	sVar0 = func_421();
	aggregate_func_1791(sVar0, joaat("COLOR_WHITE"));
}

void func_254()
{
	struct<28> Var0;
	struct<92> Var118;
	bool bVar213;
	int iVar214;
	int iVar215;
	int iVar216;
	var uVar217[32];
	int iVar250;
	int iVar251;
	bool bVar252;
	struct<19> Var253;
	int iVar352;
	int iVar353;
	bool bVar354;
	int iVar355;
	int iVar356;
	struct<92> Var357;
	struct<95> Var452;

	func_745(13);
	if (aggregate_func_6547() && !func_746(13))
	{
		Var0.f_27 = 10;
		Var118.f_38 = 7;
		Var118.f_91 = -1;
		bVar213 = false;
		iVar214 = 0;
		POSSE::_0xC08AFF658B2E51DA(&iVar215);
		if (iVar215 != 0)
		{
			func_747(&Var118);
			if (func_466(iVar215, &Var118, 0))
			{
				if (func_748(bVar213, &Var118))
				{
					bVar213++;
				}
			}
		}
		iVar216 = POSSE::_0xC088FF658B2E51DA();
		iVar214 = 0;
		while (iVar214 < iVar216)
		{
			func_747(&Var118);
			if (!func_749(iVar214, &Var0))
			{
			}
			else if (Var0 == 0)
			{
			}
			else if (Var0 == iVar215)
			{
			}
			else if (!func_466(Var0, &Var118, 0))
			{
			}
			else if (!func_748(bVar213, &Var118))
			{
			}
			else
			{
				bVar213++;
			}
			iVar214++;
		}
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) && _NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
		{
			if (!aggregate_func_682(Global_1273882->f_15))
			{
				func_747(&Var118);
				if (func_210(Global_1273882->f_15, &Var118, 1))
				{
					if (func_748(bVar213, &Var118))
					{
						bVar213++;
					}
				}
			}
		}
		iVar250 = _NAMESPACE26::_0x53A94294FDDCF98C(&uVar217, 1);
		iVar251 = 0;
		bVar252 = false;
		Var253.f_18 = 10;
		iVar352 = 0;
		while (iVar352 < 2)
		{
			iVar214 = 0;
			while (iVar214 < iVar250)
			{
				func_747(&Var118);
				bVar252 = false;
				if (!_NAMESPACE26::_0xD6F6ACF4392187FB(&(uVar217[iVar214])))
				{
				}
				else if (!_NAMESPACE26::_0x0F99F6436528A089(&(uVar217[iVar214])))
				{
				}
				else if (&uVar217[iVar214] == Global_1273882->f_15)
				{
				}
				else if (aggregate_func_682(&(uVar217[iVar214])))
				{
					if (aggregate_func_1094(&(uVar217[iVar214]), &Var253))
					{
						iVar251 = 0;
						while (iVar251 < 5)
						{
							if (func_749(iVar251, &Var0))
							{
								if (Var0 == Var253)
								{
									bVar252 = true;
								}
								else
								{
									iVar251++;
								}
								if (bVar252)
								{
								}
								else if (!func_210(&(uVar217[iVar214]), &Var118, 1))
								{
								}
								else
								{
									if (aggregate_func_4287(&Var118))
									{
										if (iVar352 != 0)
										{
										}
										else
										{
											Jump @537; //curOff = 524
											if (iVar352 != 1)
											{
											}
											else if (!func_748(bVar213, &Var118))
											{
											}
											else
											{
												bVar213++;
											}
										}
										iVar214++;
										iVar352++;
										iVar353 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_156.f_1);
										if (bVar213 <= iVar353)
										{
											bVar354 = iVar353;
											while (bVar354 >= bVar213)
											{
												DATABINDING::_0x6318FB3BE37E11B3(Global_1939221->f_1433.f_156.f_1, bVar354);
												bVar354 = (bVar354 + -1);
											}
										}
										if (!func_746(13))
										{
											if (func_35(6))
											{
												iVar355 = func_752(13);
												if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939221->f_1433.f_156.f_1))
												{
													if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_156.f_1) >= 1 && iVar355 < DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_156.f_1))
													{
														iVar356 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939221->f_1433.f_156.f_1, iVar355);
														if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar356))
														{
															Var357.f_38 = 7;
															Var357.f_91 = -1;
															if (func_88(&iVar356, &Var357))
															{
																func_89(&Var357);
															}
														}
													}
												}
												func_36(6, 0);
											}
											Var452 = { func_753(1) };
											if (func_212(&Var452))
											{
												if (func_612(&Var452))
												{
													if (aggregate_func_7672() == 298326212)
													{
														aggregate_func_1791(func_754(&Var452), joaat("COLOR_WHITE"));
													}
													func_755(&(Global_1939221->f_1433.f_156.f_613.f_4), Var452);
													func_756(&(Global_1939221->f_1433.f_156.f_613.f_4), Var452);
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
		}
	}
}

void func_255()
{
	func_745(15);
}

void func_256()
{
	struct<95> Var0;
	struct<2> Var95;

	Var0.f_38 = 7;
	Var0.f_91 = -1;
	Var0 = { func_183(1) };
	if (!aggregate_func_4287(&Var0) && !func_757(&Var0))
	{
		UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(1433015236, joaat("back"));
	}
	if (func_308())
	{
		func_47(1);
		func_758();
		func_169();
	}
	if (aggregate_func_4287(&Var0) && aggregate_func_4287(&Var0))
	{
		func_759(&Var0);
	}
	if (!func_746(18))
	{
		Var95 = 100009;
		switch (func_42())
		{
			case 0:
				if (aggregate_func_6547())
				{
					func_761(&Var0);
				}
				Var95 = 100009;
				break;
			case 1:
				aggregate_func_2631(&(Global_1939221->f_1433.f_156.f_196.f_3), 0);
				Var95 = 100522;
				break;
		}
		Var95.f_1 = func_752(18);
		func_764(&Var95);
	}
}

void func_257()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* sVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	struct<92> Var13;

	func_765();
	switch (func_766())
	{
		case 0:
			if (func_35(2))
			{
				return;
			}
			bVar0 = func_767();
			bVar1 = false;
			if ((_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) && _NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15)) && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				bVar1 = true;
			}
			else if (aggregate_func_1746(&(Global_1273882->f_154[&Global_1273882]), 0))
			{
				vVar2 = { aggregate_func_5046(&Global_1273882) };
				if (func_176(&iVar5, &iVar6))
				{
					if (vVar2.y != iVar5 || vVar2.x != aggregate_func_8052(iVar6))
					{
						bVar1 = true;
					}
				}
			}
			else if (func_175())
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar0 = (bVar0 + func_769());
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_10))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_10, true);
				if (bVar0 <= 0)
				{
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_7))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896726->f_13.f_50.f_7, "SHOP_FREE");
					}
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_8))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_8, true);
					}
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_9, false);
					}
				}
				else
				{
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_6))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_6, bVar0);
					}
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_9, true);
					}
					if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_8))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_8, false);
					}
				}
			}
			bVar7 = false;
			if (aggregate_func_2158() >= bVar0)
			{
				bVar7 = true;
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_11))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_11, bVar7);
			}
			bVar9 = joaat("COLOR_WHITE");
			bVar10 = func_771(func_90(), bVar0);
			bVar11 = true;
			if (func_90())
			{
				if (func_91())
				{
					if (!NETWORK::_0x595F028698072DD9(-1) && MISC::IS_ORBIS_VERSION())
					{
						sVar8 = "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME";
						bVar11 = false;
					}
					else if (!NETWORK::_0x6506BFA755FB209C())
					{
						sVar8 = "NM_GC_UGC_RESTRICT";
						bVar11 = false;
					}
					else
					{
						sVar8 = "NM_GC_FOOTER_NAME_CHANGE";
						bVar11 = true;
					}
				}
				else
				{
					bVar9 = joaat("COLOR_RED");
					sVar8 = "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN";
					bVar11 = false;
				}
			}
			else
			{
				sVar8 = "NM_GC_FOOTER_NAME_CHANGE_TEMP";
				bVar11 = false;
			}
			bVar12 = true;
			if (!aggregate_func_572(1, 0))
			{
				bVar12 = false;
				if (bVar1)
				{
					bVar10 = false;
				}
			}
			switch (aggregate_func_7672())
			{
				case -620534422:
					sVar8 = func_773(&bVar9);
					aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, sVar8), bVar9);
					break;
				case 1930452436:
					aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, sVar8), bVar9);
					break;
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_3))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_3, bVar11);
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_5))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_5, bVar12);
			}
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_10))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_1, bVar10);
			}
			break;
		case 3:
			func_36(2, 1);
			func_141(joaat("back"));
			break;
		case 2:
			func_36(2, 1);
			Var13.f_38 = 7;
			Var13.f_91 = -1;
			if (func_586(&Var13, 1))
			{
				func_140(&Var13);
				func_89(&Var13);
				func_132(16);
				func_141(394524610);
			}
			else
			{
				func_141(joaat("back"));
			}
			break;
	}
}

void func_258()
{
	int iVar0;
	struct<95> Var1;
	int iVar96;
	int iVar97;

	if (func_774())
	{
		iVar0 = func_775();
		switch (func_776())
		{
			case 3:
				switch (iVar0)
				{
					case 2:
						func_338(16, 0);
						func_777(3);
						func_141(-585660575);
						break;
					case 3:
						break;
				}
				break;
			case 5:
			case 6:
				switch (iVar0)
				{
					case 2:
						func_338(16, 0);
						func_777(3);
						func_141(-585660575);
						break;
					case 3:
						break;
				}
				break;
			case 7:
				switch (iVar0)
				{
					case 2:
						func_168(0, 1);
						break;
					case 3:
						break;
				}
				break;
			case 4:
				switch (iVar0)
				{
					case 2:
						func_168(0, 1);
						break;
					case 3:
						break;
				}
				break;
		}
		return;
	}
	if (!func_746(16))
	{
		func_745(16);
	}
	Var1 = { func_183(1) };
	if (!func_212(&Var1))
	{
		return;
	}
	func_755(&(Global_1939221->f_1433.f_156.f_205.f_7), Var1);
	func_756(&(Global_1939221->f_1433.f_156.f_205.f_7), Var1);
	if (!aggregate_func_6547() || func_746(16))
	{
		return;
	}
	iVar96 = func_778();
	iVar97 = func_42();
	if ((iVar97 == iVar96 && iVar97 > -1) && iVar97 < func_779())
	{
		if (!MISC::ARE_STRINGS_EQUAL(aggregate_func_9308(&Var1), DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1939221->f_1433.f_156.f_205.f_4.f_1)))
		{
			func_781(&(Global_1939221->f_1433.f_156.f_205.f_4), aggregate_func_9308(&Var1), Global_1939221->f_1433.f_8769.f_4 > 1, 1);
		}
	}
	func_782(&Var1);
}

void func_259()
{
	func_297(22);
}

void func_260()
{
	func_297(21);
}

void func_261()
{
	int iVar0;
	struct<95> Var1;

	func_783();
	if (func_746(17))
	{
		return;
	}
	if (func_774())
	{
		iVar0 = func_775();
		switch (func_776())
		{
			case 4:
				switch (iVar0)
				{
					case 2:
						func_168(0, 1);
						break;
					case 3:
						break;
				}
				break;
			case 8:
				switch (iVar0)
				{
					case 2:
						func_168(0, 1);
						break;
					case 3:
						break;
				}
				break;
		}
		return;
	}
	func_784();
	Var1 = { func_183(1) };
	if (!func_212(&Var1))
	{
		func_168(0, 0);
		return;
	}
	if (func_785())
	{
		func_786();
		return;
	}
	if (!aggregate_func_6547())
	{
		return;
	}
	func_787(&Var1);
}

void func_262()
{
	func_297(5);
}

void func_263()
{
	vector3 vVar0;

	if (func_788() == -1 || func_788() == 52)
	{
		func_789(15);
		vVar0.x = 106805;
		vVar0.f_1 = func_752(52);
		vVar0.f_2 = 15;
		func_764(&vVar0);
	}
}

void func_264()
{
	struct<7> Var0;
	int iVar7;
	int iVar8;
	bool bVar9;
	struct<95> Var10;
	bool bVar105;
	int iVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	char cVar110[128];
	int iVar126;
	int iVar127;
	bool bVar128;
	bool bVar129;
	bool bVar130;
	bool bVar131;
	bool bVar132;

	Var0 = { func_194() };
	if (!aggregate_func_3096(Var0))
	{
		return;
	}
	func_730(Var0, aggregate_func_5526());
	iVar7 = 255;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		iVar7 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	if (NETWORK::_0x255A5EF65EDA9167(iVar7))
	{
		iVar8 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar7);
	}
	bVar9 = false;
	if (aggregate_func_7672() == -1108319209)
	{
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar8) && _NAMESPACE26::_0x0F99F6436528A089(iVar8))
		{
			Var10.f_38 = 7;
			Var10.f_91 = -1;
			if (func_210(iVar8, &Var10, 1))
			{
				func_755(&(Global_1939221->f_1433.f_156.f_613.f_4), Var10);
				if (func_756(&(Global_1939221->f_1433.f_156.f_613.f_4), Var10))
				{
					bVar9 = true;
				}
			}
		}
	}
	aggregate_func_2631(&(Global_1939221->f_1433.f_156.f_613.f_4), bVar9);
	if (func_792() == 0)
	{
		if (Global_1939221->f_1433.f_7964)
		{
			aggregate_func_9307(func_793(&(Global_1939221->f_1433.f_7967), &(Global_1939221->f_1433.f_8), &(Global_1939221->f_1433.f_8.f_7)));
			aggregate_func_9307(NETWORK::GET_CLOUD_TIME_AS_INT());
			aggregate_func_5470(1);
			func_47(1);
		}
	}
	if (func_792() == 1)
	{
		if (Global_1901929->f_718 != 0)
		{
			if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_797())) >= Global_1901929->f_718)
			{
				aggregate_func_5470(2);
			}
		}
	}
	if (func_792() == 2)
	{
		if (func_798(Var0))
		{
			aggregate_func_5470(0);
		}
		else
		{
			aggregate_func_9307(NETWORK::GET_CLOUD_TIME_AS_INT());
			aggregate_func_5470(1);
		}
	}
	bVar105 = func_799() == true;
	if (!aggregate_func_6547())
	{
		return;
	}
	if (NETWORK::_0x255A5EF65EDA9167(iVar7))
	{
		aggregate_func_4247(&iVar106, 1);
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &Var0))
	{
		aggregate_func_4247(&iVar106, 16);
	}
	if (((aggregate_func_4258() || aggregate_func_6688()) || aggregate_func_4263(aggregate_func_4259(0)) == 6) || aggregate_func_4240(Global_1130954->f_137.f_1, 2))
	{
		aggregate_func_4247(&iVar106, 64);
	}
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
	{
		if (_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
		{
			aggregate_func_4247(&iVar106, 2);
			if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15) == PLAYER::PLAYER_ID())
			{
				aggregate_func_4247(&iVar106, 4);
			}
			if (aggregate_func_4240(iVar106, 1))
			{
				if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar7))
				{
					aggregate_func_4247(&iVar106, 32);
				}
			}
		}
	}
	if (!aggregate_func_4240(iVar106, 32))
	{
		if ((Global_1180694->f_490 != -1 && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((Global_1180694->f_501[Global_1180694->f_490 /*118*/])->f_19), &(Global_1273882->f_1))) && func_803(&Var0))
		{
			aggregate_func_4247(&iVar106, 32);
		}
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		aggregate_func_4247(&iVar106, 8);
	}
	if (((!aggregate_func_4240(iVar106, 16) && aggregate_func_4240(iVar106, 32)) && aggregate_func_4240(iVar106, 4)) && !aggregate_func_4240(iVar106, 64))
	{
		aggregate_func_4247(&iVar106, 128);
	}
	if ((!aggregate_func_4240(iVar106, 16) && aggregate_func_4240(iVar106, 32)) && aggregate_func_4240(iVar106, 4))
	{
		aggregate_func_4247(&iVar106, 512);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_8.f_2, ((aggregate_func_4240(iVar106, 4) && !aggregate_func_4240(iVar106, 16)) && aggregate_func_4240(iVar106, 32)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_8.f_1, (((aggregate_func_4240(iVar106, 4) && !aggregate_func_4240(iVar106, 16)) && aggregate_func_4240(iVar106, 32)) && !((aggregate_func_4240(iVar106, 64) || aggregate_func_7191()) || func_805())));
	bVar107 = NETWORK::_0x9C725D149622BFDE(7);
	bVar108 = NETWORK::NETWORK_IS_FRIEND(&Var0);
	bVar109 = true;
	if (bVar108 && bVar107)
	{
		bVar109 = NETWORK::_0xE348D1404BD80146(&Var0);
	}
	else if (bVar108)
	{
		bVar109 = NETWORK::_0x665161D250850A9F(&Var0);
	}
	StringCopy(&cVar110, "", 128);
	iVar126 = func_806(&Var0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_11.f_1, (iVar126 == 5 && bVar109));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_11.f_2, ((!aggregate_func_4240(iVar106, 16) && !aggregate_func_4240(iVar106, 32)) && aggregate_func_4240(iVar106, 4)));
	if (aggregate_func_7672() == 442978665)
	{
		func_807(iVar126, &cVar110);
		aggregate_func_1791(&cVar110, joaat("COLOR_WHITE"));
	}
	iVar127 = func_808(&Var0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_14.f_2, !aggregate_func_4240(iVar106, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_14.f_1, (iVar127 == 0 && bVar109));
	if (aggregate_func_7672() == -999900281)
	{
		StringCopy(&cVar110, func_437(), 128);
		aggregate_func_1791(&cVar110, joaat("COLOR_WHITE"));
	}
	bVar128 = aggregate_func_2820();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_17.f_2, !aggregate_func_4240(iVar106, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_17.f_1, (((!aggregate_func_4240(iVar106, 8) && bVar105) && bVar128) && !aggregate_func_4981()));
	if (aggregate_func_7672() == -281834246)
	{
		StringCopy(&cVar110, func_438(), 128);
		aggregate_func_1791(&cVar110, joaat("COLOR_WHITE"));
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_4174.f_2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_20.f_1, aggregate_func_4240(iVar106, 1));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_20.f_1, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_23.f_2, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_23.f_1, aggregate_func_4240(iVar106, 1));
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar8) && _NAMESPACE26::_0x0F99F6436528A089(iVar8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_26.f_1, (aggregate_func_4240(iVar106, 1) && !aggregate_func_4240(iVar106, 64)));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_26.f_1, false);
	}
	if (func_810())
	{
		NETWORK::_0x1F51F367B710A832();
	}
	bVar129 = false;
	if (MISC::_IS_STADIA_VERSION())
	{
		if (NETWORK::NETWORK_IS_FRIEND(&Var0) && !aggregate_func_4240(iVar106, 16))
		{
			bVar129 = true;
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_44.f_2, bVar129);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_44.f_1, true);
	bVar130 = false;
	if (!NETWORK::NETWORK_IS_FRIEND(&Var0) && !aggregate_func_4240(iVar106, 16))
	{
		bVar130 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_29.f_2, bVar130);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_29.f_1, NETWORK::_0x99ABE9BF9DADA162(&Var0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_32.f_2, !aggregate_func_4240(iVar106, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_32.f_1, func_811(iVar7));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_38.f_2, !aggregate_func_4240(iVar106, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_38.f_1, true);
	if (MISC::IS_DURANGO_VERSION())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_35.f_2, !aggregate_func_4240(iVar106, 16));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_35.f_1, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_35.f_2, false);
	}
	bVar131 = NETWORK::_0x9C725D149622BFDE(0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_41.f_2, bVar131);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_41.f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_47.f_2, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_47.f_1, false);
	bVar132 = _NAMESPACE79::_0x356135B9B10A2A82(&Var0);
	if (bVar132)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1405.f_47.f_3, MISC::_CREATE_VAR_STRING(2, "IB_VOICE_CHAT_CHANNEL_PRIVATE"));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1405.f_47.f_3, MISC::_CREATE_VAR_STRING(2, "IB_VOICE_CHAT_CHANNEL_PUBLIC"));
	}
	if ((aggregate_func_4240(iVar106, 1) && aggregate_func_4240(iVar106, 8)) && !aggregate_func_4240(iVar106, 16))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_52, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_53, true);
		if (_NAMESPACE79::_0x0DED260A1958A82E(iVar7))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1405.f_51, 979712174);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1405.f_51, 830040270);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_52, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_53, false);
	}
}

void func_265()
{
	int iVar0;

	if (Global_1939221->f_1433.f_6264.f_4)
	{
		iVar0 = Global_1939221->f_1433.f_6264;
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1939221->f_1433.f_6264.f_5)
			{
				func_812(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar0 /*7*/]);
			}
			else
			{
				func_813(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar0 /*7*/]);
			}
			Global_1939221->f_1433.f_6264.f_4 = 0;
		}
	}
}

void func_266()
{
	switch (Global_1939221->f_1433.f_1314.f_9)
	{
		case 0:
			if (func_814())
			{
				switch (aggregate_func_1471())
				{
					case 2074623703:
						if (!func_816(&(Global_1939221->f_1433.f_1314.f_1), Global_1939221->f_1433.f_1314))
						{
						}
						Global_1939221->f_1433.f_1314.f_8 = Global_1939221->f_1433.f_7961;
						Global_1939221->f_1433.f_1314.f_9 = 1;
						break;
					case 1400745903:
						func_10();
						break;
				}
			}
			break;
		case 1:
			if (_NAMESPACE76::_0x07954320D77F6A3D(Global_1939221->f_1433.f_1314.f_8) == 5)
			{
				return;
			}
			Global_1939221->f_1433.f_1314.f_9 = 2;
			break;
		case 2:
			Global_1939221->f_1433.f_1314.f_8 = 0;
			func_817();
			Global_1939221->f_1433.f_1314.f_9 = 3;
			break;
		case 3:
			if (func_814())
			{
				switch (aggregate_func_1471())
				{
					case 2074623703:
						_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1939221->f_1433.f_1314.f_8);
						Global_1939221->f_1433.f_1314.f_8 = 0;
						func_10();
						Global_1939221->f_1433.f_1314.f_9 = 0;
						aggregate_func_4580();
						break;
				}
			}
			break;
	}
}

void func_267()
{
	int iVar0;
	int iVar1;

	if (aggregate_func_4478() || aggregate_func_4934())
	{
		func_818(0);
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_INDEX();
		iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
		if ((iVar1 != 0 && _NAMESPACE26::_0x0F99F6436528A089(iVar1)) && !_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
		{
			func_818(0);
		}
		else
		{
			func_818(1);
		}
	}
}

void func_269()
{
	bool bVar0;
	bool bVar1;

	func_92();
	func_93();
	bVar0 = func_126();
	if (bVar0)
	{
		func_128(1);
	}
	else
	{
		func_128(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_21, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_22, bVar0);
	bVar1 = func_819();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_566, bVar1);
	if (aggregate_func_7672() == -409501472)
	{
		if (aggregate_func_4258())
		{
			aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP"), joaat("COLOR_WHITE"));
		}
		else
		{
			aggregate_func_1791(func_820(bVar1), joaat("COLOR_WHITE"));
		}
	}
}

void func_271()
{
	bool bVar0;

	bVar0 = func_126();
	if (bVar0)
	{
		func_128(2);
	}
	else
	{
		func_128(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_21, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1622.f_422.f_22, bVar0);
}

void func_272()
{
	func_821();
	func_97(3);
	func_822();
}

void func_273()
{
	func_821();
	func_97(0);
	func_822();
}

void func_274()
{
	func_821();
	func_97(1);
	func_822();
}

void func_275()
{
	func_821();
	func_97(2);
	func_822();
}

void func_276()
{
	bool bVar0;
	bool bVar1;

	func_94();
	bVar0 = func_129();
	if (bVar0)
	{
		func_131(1);
	}
	else
	{
		func_131(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_22, bVar0);
	bVar1 = func_823();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_436, bVar1);
	if (aggregate_func_7672() == 496174085)
	{
		if (aggregate_func_4258())
		{
			aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP"), joaat("COLOR_WHITE"));
		}
		else
		{
			aggregate_func_1791(func_824(bVar1), joaat("COLOR_WHITE"));
		}
	}
}

void func_278()
{
	bool bVar0;

	bVar0 = func_129();
	if (bVar0)
	{
		func_131(2);
	}
	else
	{
		func_131(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_346.f_22, bVar0);
}

void func_279()
{
	func_825();
	func_100(3);
	func_826();
}

void func_280()
{
	func_825();
	func_100(0);
	func_826();
}

void func_281()
{
	func_825();
	func_100(1);
	func_826();
}

void func_282()
{
	func_825();
	func_100(2);
	func_826();
}

void func_283()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	bVar0 = false;
	bVar1 = false;
	iVar2 = PLAYER::PLAYER_ID();
	bVar3 = (aggregate_func_2820() && aggregate_func_1746(iVar2, 0));
	bVar4 = _NAMESPACE26::_0x424B17A7DC5C90BC(iVar2);
	bVar0 = (bVar3 && bVar4);
	bVar1 = bVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_2, (((bVar4 && !aggregate_func_4240(Global_1129497->f_8, 1)) && (Global_1124870->f_1891 < 6 || Global_1124870->f_1891 > 12)) && !aggregate_func_3525()));
	if (aggregate_func_2820())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_3, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_3, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_5, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_4, bVar1);
	bVar5 = ((bVar3 && bVar4) && UNLOCK::_UNLOCK_IS_UNLOCKED(-212568391));
	iVar6 = func_828(_NAMESPACE26::_0x901E0DC25080C8B9(iVar2));
	if (aggregate_func_6960(4) && aggregate_func_7979(iVar6))
	{
		aggregate_func_6978(4);
	}
	if (aggregate_func_6960(8) && !aggregate_func_7979(iVar6))
	{
		aggregate_func_6978(8);
	}
	if ((aggregate_func_7979(iVar6) && !aggregate_func_6960(8)) || aggregate_func_6960(4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2628.f_6.f_24, false);
		if (!func_71(iVar6) || aggregate_func_6960(8))
		{
			bVar5 = false;
		}
	}
	else if ((!aggregate_func_7979(iVar6) && !aggregate_func_6960(4)) || aggregate_func_6960(8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_2628.f_6.f_24, true);
		if (!aggregate_func_9259(iVar6) || aggregate_func_6960(4))
		{
			bVar5 = false;
		}
	}
	if (aggregate_func_7672() == 921074654)
	{
		aggregate_func_1791(func_443(), joaat("COLOR_WHITE"));
	}
	if (aggregate_func_7672() == 2087912236)
	{
		aggregate_func_1791(func_830(), joaat("COLOR_WHITE"));
	}
	aggregate_func_2624(&(Global_1939221->f_1433.f_2628.f_6), bVar5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_1, aggregate_func_1746(&(Global_1273882->f_154[&Global_1273882]), 0));
}

void func_284()
{
	struct<2> Var0;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	bool bVar21;

	if (func_308())
	{
		func_832();
		func_47(1);
	}
	if (!aggregate_func_6547())
	{
		return;
	}
	Var0.f_1 = 13;
	iVar15 = func_104();
	bVar17 = false;
	iVar19 = func_833();
	switch (iVar19)
	{
		case 0:
			if (!func_834(&Var0))
			{
				func_832();
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				bVar16 = &Var0.f_1[iVar18];
				if (bVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42))
				{
					func_835(bVar17, bVar16);
				}
				func_837(bVar17, bVar16, iVar15, func_156(iVar15, bVar16), func_836(iVar15, bVar16));
				bVar17++;
				iVar18++;
			}
			break;
		case 1:
			if (!func_838(&Var0))
			{
				if (bVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42))
				{
					func_832();
				}
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				bVar16 = &Var0.f_1[iVar18];
				if (bVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42))
				{
					func_835(bVar17, bVar16);
				}
				func_837(bVar17, bVar16, iVar15, func_156(iVar15, bVar16), func_836(iVar15, bVar16));
				bVar17++;
				iVar18++;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iVar19)
			{
				case 2:
					iVar20 = 0;
					break;
				case 3:
					iVar20 = 1;
					break;
				case 6:
					iVar20 = 4;
					break;
				case 5:
					iVar20 = 3;
					break;
				case 4:
					iVar20 = 2;
					break;
			}
			if (!func_839(iVar20, Global_1273882->f_17, &Var0))
			{
				if (bVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42))
				{
					func_832();
				}
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				bVar16 = &Var0.f_1[iVar18];
				if (bVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42))
				{
					func_835(bVar17, bVar16);
				}
				func_837(bVar17, bVar16, iVar15, func_156(iVar15, bVar16), func_836(iVar15, bVar16));
				bVar17++;
				iVar18++;
			}
			break;
	}
	bVar21 = bVar17;
	while (bVar21 <= (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_2628.f_42) - 1))
	{
		DATABINDING::_0x6318FB3BE37E11B3(Global_1939221->f_1433.f_2628.f_42, bVar21);
		bVar21++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_44, aggregate_func_2158() >= DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939221->f_1433.f_2628.f_43));
}

void func_285()
{
	if (!aggregate_func_6547())
	{
		return;
	}
	func_840(((*Global_1126840)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_1);
}

void func_286()
{
	bool bVar0;

	bVar0 = false;
	if (func_157())
	{
		bVar0 = func_90();
	}
	else
	{
		bVar0 = aggregate_func_682(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_36, func_841(-1896177107, bVar0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2628.f_37, func_841(2042309940, bVar0));
}

void func_287()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<25> Var3;
	struct<25> Var28;
	float fVar53;

	Var3 = -1;
	Var3.f_1 = 1;
	Var3.f_1.f_1 = 1;
	Var3.f_1.f_2 = joaat("COLOR_WHITE");
	Var3.f_1.f_4 = -1;
	Var3.f_1.f_5 = -1;
	Var3.f_1.f_6 = -1;
	Var3.f_1.f_10 = -1;
	Var3.f_1.f_11 = -1;
	Var3.f_1.f_12 = -1;
	Var3.f_1.f_18 = joaat("COLOR_WHITE");
	Var3.f_1.f_19 = joaat("COLOR_WHITE");
	Var3.f_1.f_22 = 100;
	Var3.f_1.f_23 = 50;
	Var28 = -1;
	Var28.f_1 = 1;
	Var28.f_1.f_1 = 1;
	Var28.f_1.f_2 = joaat("COLOR_WHITE");
	Var28.f_1.f_4 = -1;
	Var28.f_1.f_5 = -1;
	Var28.f_1.f_6 = -1;
	Var28.f_1.f_10 = -1;
	Var28.f_1.f_11 = -1;
	Var28.f_1.f_12 = -1;
	Var28.f_1.f_18 = joaat("COLOR_WHITE");
	Var28.f_1.f_19 = joaat("COLOR_WHITE");
	Var28.f_1.f_22 = 100;
	Var28.f_1.f_23 = 50;
	Var3 = { Var28 };
	if (&Global_1939221->f_1433.f_3305.f_4[bVar0 /*27*/] == Global_1939221->f_1433.f_3305.f_3)
	{
	}
	if (iVar1 >= Global_1939221->f_1433.f_3305.f_2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939221->f_1433.f_3305.f_1, bVar0, "pm_dynamic_large_image_and_stacked_text_with_fill", &(Global_1939221->f_1433.f_3305.f_4[bVar0 /*27*/]));
	}
	Var3.f_1.f_23 = BUILTIN::FLOOR((IntToFloat(Var3.f_1.f_22) * fVar53));
	Var3.f_1.f_18 = joaat("COLOR_RED");
	Var3.f_1.f_5 = -1231195292;
	Var3.f_1.f_4 = 1433015236;
	Var3.f_1.f_20 = joaat("hud_textures");
	Var3.f_1.f_21 = -1102349958;
	func_842(Global_1939221->f_1433.f_3305.f_4[bVar0 /*27*/], Var3);
	iVar1++;
	bVar2 = iVar1;
	while (bVar2 <= (Global_1939221->f_1433.f_3305.f_2 - 1))
	{
		DATABINDING::_0x6318FB3BE37E11B3(Global_1939221->f_1433.f_3305.f_1, bVar2);
		bVar2++;
	}
	Global_1939221->f_1433.f_3305.f_2 = iVar1;
}

void func_288()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	func_843();
	aggregate_func_8374();
	bVar1 = false;
	if (Global_1102098->f_935.f_26 != -1 && (&Global_1102098->f_935.f_5[Global_1102098->f_935.f_26] - Global_1273882->f_21) < 180)
	{
		aggregate_func_1791(aggregate_func_24(Global_1102098->f_935.f_26), joaat("COLOR_WHITE"));
		Global_1102098->f_935.f_17 = 1;
		Global_1102098->f_935.f_28 = Global_1102098->f_935.f_26;
	}
	else if ((Global_1102098->f_935.f_17 && Global_1102098->f_935.f_28 == Global_1102098->f_935.f_26) && Global_1102098->f_935.f_28 != -1)
	{
		aggregate_func_1791(aggregate_func_24(Global_1102098->f_935.f_26), joaat("COLOR_WHITE"));
		Global_1102098->f_935.f_17 = 0;
	}
	else
	{
		Global_1102098->f_935.f_28 = -1;
		Global_1102098->f_935.f_17 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar2 = iVar0;
		bVar1 = aggregate_func_1904(iVar2);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_156.f_356.f_2[iVar0 /*21*/])->f_1, bVar1);
		iVar0++;
	}
}

void func_289()
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;
	struct<2> Var53;
	int iVar56;
	int iVar57;
	int iVar58;
	vector3 vVar65;
	vector3 vVar68;
	int iVar71[2];
	int iVar74;

	if (!aggregate_func_1904(4))
	{
		func_141(joaat("back"));
	}
	aggregate_func_8374();
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
	{
		return;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_393.f_1))
	{
		return;
	}
	if (aggregate_func_6547())
	{
		iVar50 = _NAMESPACE26::_0xD1BF325C8252A982(Global_1273882->f_15, &Var0);
		iVar56 = 0;
		iVar56 = 0;
		while (iVar56 < 7)
		{
			if (!func_846(iVar56, &Var53))
			{
			}
			else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1273882->f_15, Var53.f_1))
			{
				func_847(iVar56);
			}
			iVar56++;
		}
		iVar51 = 0;
		while (iVar51 < iVar50)
		{
			if (!aggregate_func_3096(*(Var0[iVar51 /*7*/])))
			{
			}
			else
			{
				iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar51 /*7*/]);
				if (!NETWORK::_0x255A5EF65EDA9167(iVar52))
				{
				}
				else if (!func_848(iVar52))
				{
					iVar57 = func_849();
					if (!func_850(iVar52, iVar57))
					{
					}
				}
			}
			iVar51++;
		}
		func_758();
		iVar56 = 0;
		while (iVar56 < 7)
		{
			if (!func_846(iVar56, &Var53))
			{
			}
			else
			{
				NETWORK::NETWORK_HANDLE_FROM_PLAYER(Var53.f_1, &iVar58);
				if (!func_851(&iVar58, PLAYER::GET_PLAYER_NAME(Var53.f_1), 0, 4))
				{
				}
			}
			iVar56++;
		}
	}
	vVar65.x = 115862;
	vVar65.f_2 = 4;
	vVar65.f_1 = func_752(20);
	func_764(&vVar65);
	if (aggregate_func_6547())
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197.f_1, true);
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197))
		{
			func_853(func_76(), &vVar68);
			iVar74 = 0;
			while (iVar74 < 2)
			{
				iVar71[iVar74] = func_854(iVar74);
				iVar74++;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197, &iVar71[vVar68.z] > 1);
		}
	}
}

void func_290()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar0 = true;
	iVar1 = PLAYER::PLAYER_PED_ID();
	func_855();
	if (!func_856())
	{
		bVar0 = false;
	}
	else if (aggregate_func_7116(255))
	{
		bVar0 = false;
	}
	else if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		bVar0 = false;
	}
	else if (aggregate_func_4981())
	{
		bVar0 = false;
	}
	else if (aggregate_func_4593())
	{
		bVar0 = false;
	}
	switch (aggregate_func_7672())
	{
		case 746698552:
			if (bVar0 != func_859())
			{
				aggregate_func_1791(func_450(), joaat("COLOR_WHITE"));
			}
			break;
		case -1594107850:
			HUD::_0xC9CAEAEEC1256E54(-1744263063);
			break;
	}
	func_860(bVar0);
	func_861(!(aggregate_func_6688() || aggregate_func_4478()));
	bVar2 = true;
	if (!_NAMESPACE79::_0xCCF71FCFA0070B1A())
	{
		bVar2 = false;
	}
	else if (aggregate_func_4258())
	{
		bVar2 = false;
	}
	func_862(bVar2);
	aggregate_func_8457();
	func_864();
	func_865();
}

void func_291()
{
	int iVar0;

	iVar0 = aggregate_func_8930();
	if (func_866(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_7, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_7, false);
	}
	if (func_867(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_9, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_9, false);
	}
	aggregate_func_4264();
}

void func_293()
{
	bool bVar0;
	bool bVar1;

	bVar0 = (aggregate_func_7654(8192) && !aggregate_func_7654(16384));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_10, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_11, true);
	bVar1 = func_739();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_80, bVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_95, bVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_86, func_734());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_79, func_869());
	func_870();
	aggregate_func_4264();
}

void func_294(bool bParam0)
{
	if (!bParam0)
	{
		if (func_308())
		{
			func_47(1);
		}
		if (!aggregate_func_6547())
		{
			return;
		}
	}
	func_871();
	func_512(0);
	aggregate_func_705();
}

void func_296()
{
	func_874(-165442446, 1);
	func_874(-1536030095, func_426() == 0);
}

void func_297(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<7> Var12[32];
	struct<29> Var237;
	int iVar321;

	iVar3 = func_173();
	iVar4 = func_875();
	switch (iParam0)
	{
		case 5:
		case default:
			iVar5 = 0;
			iVar6 = 1;
			iVar7 = 2;
			iVar8 = 3;
			vVar0.x = 117711;
			break;
		case 21:
			iVar6 = 12;
			iVar7 = 13;
			iVar8 = 14;
			vVar0.x = 118023;
			break;
		case 22:
			iVar5 = 7;
			iVar6 = 8;
			iVar7 = 9;
			iVar8 = 10;
			vVar0.x = 118269;
			break;
		case 56:
			iVar5 = 11;
			vVar0.x = 118603;
			break;
	}
	if (func_308())
	{
		func_47(1);
		if (iVar4 == 2 && iVar3 != 2)
		{
			func_880();
		}
		switch (iVar3)
		{
			case 0:
				func_881();
				break;
			case 1:
			case 3:
				func_881();
				func_758();
				func_169();
				break;
		}
		if (func_35(4))
		{
			func_36(4, 0);
		}
		else
		{
			aggregate_func_5470(0);
			func_325(0);
		}
	}
	func_883(iVar7, iVar3 == 2);
	if (func_788() == -1 || func_788() == iParam0)
	{
		switch (iVar3)
		{
			case 0:
				if (aggregate_func_6547())
				{
					func_884(iVar5);
				}
				break;
			case 1:
				func_885(iVar6);
				break;
			case 3:
				if (aggregate_func_6547())
				{
					func_886(iVar8);
				}
				break;
		}
		iVar11 = func_887();
		Var237.f_27 = -1;
		Var237.f_28 = -1;
		iVar321 = func_601();
		if (aggregate_func_9158(iVar321) && aggregate_func_9257(iVar321))
		{
			if (!MINIGAME::_0xBEA7D3CB47E1479C())
			{
				iVar9 = 0;
				while (iVar9 < iVar11)
				{
					if (!func_888(iVar9, &Var237))
					{
					}
					else if (iVar10 < 32)
					{
						*(Var12[iVar10 /*7*/]) = { Var237.f_1 };
						iVar10++;
					}
					iVar9++;
				}
				func_889(iVar321, &Var12, iVar10);
			}
		}
		vVar0.f_1 = func_752(iParam0);
		switch (iVar3)
		{
			case 0:
				vVar0.f_2 = iVar5;
				break;
			case 1:
				vVar0.f_2 = iVar6;
				break;
			case 3:
				vVar0.f_2 = iVar8;
				break;
			case 2:
				vVar0.f_2 = iVar7;
				break;
		}
		func_764(&vVar0);
	}
}

void func_298()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_92, func_428() == 0);
}

void func_299()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_890())
	{
		if (func_891() == 0 || MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_892())) > func_891())
		{
			func_120();
		}
	}
	bVar0 = false;
	iVar1 = &Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/];
	if (iVar1 == -1)
	{
		bVar0 = true;
	}
	else
	{
		iVar2 = aggregate_func_9256(UIAPPS::_0x96FD694FE5BE55DC(1433015236));
		bVar0 = iVar2 == iVar1;
	}
	if (Global_1939221->f_1433.f_8769.f_241)
	{
		Global_1939221->f_1433.f_8769.f_241 = 0;
	}
	if (Global_1939221->f_1433.f_8769.f_240 && !Global_1939221->f_1433.f_8769.f_239)
	{
		func_336(0);
		func_893("", 0);
	}
	Global_1939221->f_1433.f_8769.f_240 = 0;
	if (Global_1939221->f_1433.f_8769.f_236)
	{
		Global_1939221->f_1433.f_8769.f_236 = 0;
	}
	if (Global_1939221->f_1433.f_8769.f_4 <= 1)
	{
		return;
	}
	if (!bVar0)
	{
		return;
	}
	if (func_890())
	{
		return;
	}
	if (!func_894())
	{
		iVar3 = 0;
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_TAB_RIGHT")))
		{
			aggregate_func_2112("Bumper_Right", "HUD_PLAYER_MENU", 1);
			iVar3++;
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_TAB_LEFT")))
		{
			aggregate_func_2112("Bumper_Left", "HUD_PLAYER_MENU", 1);
			iVar3 = (iVar3 - 1);
		}
		if (iVar3 == 0)
		{
			return;
		}
		Global_1939221->f_1433.f_8769.f_244 = (Global_1939221->f_1433.f_8769 + iVar3);
		if (Global_1939221->f_1433.f_8769.f_244 < 0)
		{
			Global_1939221->f_1433.f_8769.f_244 = (Global_1939221->f_1433.f_8769.f_4 - 1);
		}
		else if (Global_1939221->f_1433.f_8769.f_244 > (Global_1939221->f_1433.f_8769.f_4 - 1))
		{
			Global_1939221->f_1433.f_8769.f_244 = 0;
		}
		if (func_896(Global_1939221->f_1433.f_8769.f_244))
		{
			func_614(7f, 0);
			func_362(1);
			return;
		}
	}
	else
	{
		switch (func_897())
		{
			case 0:
				if (!func_898())
				{
					func_899();
				}
				break;
			case 2:
				Global_1939221->f_1433.f_8769.f_244 = 0;
				func_362(0);
				return;
		}
		if (func_898())
		{
			func_362(0);
			func_16();
		}
		else
		{
			return;
		}
	}
	if (!func_900(Global_1939221->f_1433.f_8769.f_244, 1))
	{
	}
}

bool func_300()
{
	return Global_1939221->f_1433.f_8769.f_238;
}

void func_301()
{
	switch ((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_2)
	{
		case -303450633:
			func_132(13);
			break;
		case 394524610:
			if (Global_1939221->f_1433 == 13)
			{
				func_139();
			}
			func_132(16);
			break;
	}
}

bool func_302()
{
	return Global_1939221->f_1433.f_8769.f_239;
}

void func_303()
{
	bool bVar0;

	bVar0 = false;
	switch ((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_2)
	{
		case -303450633:
			func_781(&(Global_1939221->f_1433.f_156.f_193), aggregate_func_4984(&((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_3)), Global_1939221->f_1433.f_8769.f_4 > 1, (Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_19);
			bVar0 = true;
			break;
		case 394524610:
			func_781(&(Global_1939221->f_1433.f_156.f_205.f_4), aggregate_func_4984(&((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_3)), Global_1939221->f_1433.f_8769.f_4 > 1, (Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_19);
			bVar0 = true;
			break;
	}
	if (!bVar0)
	{
		func_893(aggregate_func_4984(&((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_3)), (Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_19);
	}
}

void func_304()
{
	int iVar0;

	if (func_901() == 0)
	{
		Global_1896726->f_3085.f_1 = 0;
		if (!CREW::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			return;
		}
		if (!CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&(Global_1273882->f_1)))
		{
			return;
		}
		if (!CREW::_0x58D378AF2C8765B7(&iVar0))
		{
			return;
		}
		Global_1896726->f_3085.f_1 = 1;
		if (func_902() != iVar0)
		{
			func_903(iVar0);
		}
		if (func_904() == 0 || func_904() != func_902())
		{
			Global_1896726->f_3085.f_6 = 0;
			func_880();
			func_905();
		}
		if (func_906() < 5000)
		{
			return;
		}
		if (!Global_1896726->f_3085.f_4)
		{
			return;
		}
		NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
		func_907(iVar0);
		aggregate_func_5470(1);
	}
	if (func_901() == 1)
	{
		if (NETWORK::NETWORK_IS_FINDING_GAMERS())
		{
			aggregate_func_5470(2);
		}
		else if (CREW::_0xE532D6811B3A4D2A(0))
		{
			aggregate_func_5470(2);
		}
		else
		{
			aggregate_func_5470(1);
		}
	}
	if (func_901() == 2)
	{
		if (NETWORK::_0x0E54D4DA6018FF8E() && NETWORK::_0xF9B83B77929D8863())
		{
			func_909();
			func_910();
			Global_1896726->f_3085.f_6 = NETWORK::_0x7BCA0A3972708436(&(Global_1896726->f_3085.f_7), 482);
			NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
			if (Global_1896726->f_3085.f_6 == 0)
			{
				aggregate_func_5470(0);
			}
			if (Global_1896726->f_3085.f_6 >= 32)
			{
				Global_1896726->f_3085.f_6 = 31;
			}
			aggregate_func_5470(0);
		}
		else if (!NETWORK::NETWORK_IS_FINDING_GAMERS())
		{
			aggregate_func_5470(1);
		}
	}
}

void func_305()
{
	if (func_873(1))
	{
		func_361(1, 0);
	}
	if (func_873(0))
	{
		func_361(0, 0);
		func_361(1, 1);
		Global_1896726->f_194.f_2 = 0f;
	}
	if (Global_1896726->f_194.f_1 > 0f)
	{
		Global_1896726->f_194.f_2 = (Global_1896726->f_194.f_2 + MISC::GET_FRAME_TIME());
		if (Global_1896726->f_194.f_2 >= Global_1896726->f_194.f_1)
		{
			func_361(1, 1);
			Global_1896726->f_194.f_2 = 0f;
		}
	}
}

void func_306()
{
	bool bVar0;

	switch (func_911())
	{
		case 0:
			if (func_774())
			{
				func_912(1);
				aggregate_func_5470(1);
			}
			break;
		case 1:
			switch (func_897())
			{
				case 0:
					aggregate_func_5470(3);
					break;
				case 2:
					func_912(3);
					aggregate_func_5470(2);
					break;
			}
			switch (func_776())
			{
				case 5:
				case 6:
					if (aggregate_func_5523())
					{
						if (func_915(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							aggregate_func_5470(2);
						}
					}
					break;
				case 7:
					if (aggregate_func_9345())
					{
						if (func_917(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							aggregate_func_5470(2);
						}
					}
					break;
				case 8:
					if (aggregate_func_6547())
					{
						if (func_919(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							aggregate_func_5470(2);
						}
					}
					break;
				case 3:
					if (func_920())
					{
						if (func_921(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							aggregate_func_5470(2);
						}
					}
					break;
				case 4:
					if (aggregate_func_8392())
					{
						if (func_923(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							aggregate_func_5470(2);
						}
					}
					break;
				case 2:
					if (func_924())
					{
						if (func_925(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							aggregate_func_5470(2);
						}
					}
					break;
				case 1:
					if (aggregate_func_8129())
					{
						if (func_927(&bVar0, 1))
						{
							if (bVar0)
							{
								func_912(2);
							}
							else
							{
								func_912(3);
							}
							aggregate_func_5470(2);
						}
					}
					break;
			}
			break;
		case 2:
			func_47(1);
			func_912(0);
			aggregate_func_5470(3);
			break;
		case 3:
			func_16();
			func_928();
			func_912(0);
			aggregate_func_5470(0);
			break;
	}
}

void func_307()
{
	if (func_929() == -1)
	{
		if (!func_35(0))
		{
			return;
		}
		aggregate_func_5470(0);
	}
	if (func_929() == 0)
	{
		aggregate_func_4313(&(Global_1896726->f_6.f_2));
		aggregate_func_5470(1);
	}
	if (func_929() == 1)
	{
		func_182(Global_1896726->f_6.f_1);
		if (!func_35(0))
		{
			aggregate_func_5470(3);
			return;
		}
		if (Global_1896726->f_6.f_5 != -1f)
		{
			if (!aggregate_func_4260(&(Global_1896726->f_6.f_2)))
			{
				aggregate_func_4293(&(Global_1896726->f_6.f_2), 0);
			}
			if (aggregate_func_4298(&(Global_1896726->f_6.f_2)) >= Global_1896726->f_6.f_5)
			{
				aggregate_func_5470(2);
				return;
			}
		}
	}
	if (func_929() == 2)
	{
		func_935(2);
		aggregate_func_5470(3);
		return;
	}
	if (func_929() == 3)
	{
		aggregate_func_5470(-1);
		aggregate_func_4313(&(Global_1896726->f_6.f_2));
		func_936(0);
		func_935(0);
		func_36(0, 0);
	}
}

bool func_308()
{
	return Global_1939221->f_1433.f_8769.f_236;
}

void func_322()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_100, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_97, false);
}

void func_323()
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1461.f_34, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1461.f_35, false);
}

void func_324()
{
	switch (Global_1939221->f_1433.f_828.f_1)
	{
		case 2:
			NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
			break;
		case 3:
			NETWORK::_0x49CF17A564918E8D();
			break;
	}
	aggregate_func_6543(&(Global_1939221->f_1433.f_828), -1);
}

void func_325(bool bParam0)
{
	if (Global_1896726->f_197.f_7 == bParam0)
	{
		return;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197) || !DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_1))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197.f_1, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197.f_5, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197.f_6, bParam0);
	Global_1896726->f_197.f_7 = bParam0;
}

void func_326()
{
	_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1939221->f_1433.f_156.f_263.f_2);
	Global_1939221->f_1433.f_156.f_263.f_2 = 0;
}

void func_328()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1405.f_54, false);
}

void func_333(int iParam0)
{
	char* sVar0;

	sVar0 = func_959(iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_54.f_3, sVar0);
}

void func_334()
{
	bool bVar0;

	func_730(Global_1273882->f_1, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_78, func_736());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_79, func_735());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_84, func_738());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_86, func_734());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_89, func_737());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_81, STATS::_0x3AEABAE3F3C7600C());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_83, UNLOCK::_UNLOCK_IS_UNLOCKED(2108779990));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_85, (((UNLOCK::_UNLOCK_IS_UNLOCKED(254907751) && !aggregate_func_4258()) && !aggregate_func_6688()) && aggregate_func_6007()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_87, ((((UNLOCK::_UNLOCK_IS_UNLOCKED(1015316659) && !aggregate_func_4258()) && !aggregate_func_6688()) && !aggregate_func_379()) && !aggregate_func_4981()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_88, (UNLOCK::_UNLOCK_IS_UNLOCKED(1349034126) && func_962()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_85, func_963());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_92, aggregate_func_5301());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_93, (func_963() || aggregate_func_5301()));
	bVar0 = func_739();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_80, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_95, bVar0);
	if ((Global_1572887->f_106.f_75 > 1 && Global_1572887->f_106.f_75 <= 14) && !aggregate_func_4478())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1572887->f_106.f_131, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_33, false);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1461.f_32, "MATCHMAKING_ACTIVE_LINK");
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1572887->f_106.f_131, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_33, true);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1461.f_32, "MATCHMAKING_LINK");
	}
	func_322();
}

void func_336(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_156.f_613.f_3, bParam0);
}

void func_337()
{
	func_730(func_194(), aggregate_func_5526());
	func_798(func_194());
	aggregate_func_9307(-1);
	aggregate_func_5470(0);
	func_325(0);
}

void func_338(int iParam0, bool bParam1)
{
	struct<95> Var0;
	bool bVar95;
	bool bVar96;
	int iVar97;
	int iVar98;
	int iVar99;

	func_48();
	Var0 = { func_183(1) };
	bVar95 = false;
	bVar96 = false;
	if (aggregate_func_3096(Var0.f_29) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0.f_29))))
	{
	}
	switch (iParam0)
	{
		case 15:
			func_48();
			break;
		case 13:
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) && _NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
			{
				if (aggregate_func_682(Global_1273882->f_15))
				{
					POSSE::_0xC08AFF658B2E51DA(&iVar97);
					if (iVar97 != 0)
					{
						bVar95 = true;
					}
				}
				else
				{
					bVar95 = true;
				}
			}
			bVar96 = true;
			break;
		case 16:
			aggregate_func_8596(func_965(&Var0));
			bVar95 = true;
			if (aggregate_func_4287(&Var0))
			{
				if (func_757(&Var0))
				{
					bVar96 = true;
				}
			}
			else if (func_967(&Var0))
			{
				bVar96 = true;
			}
			break;
	}
	if (bVar95)
	{
		iVar98 = func_968(aggregate_func_9308(&Var0), -1, 394524610, 1, 1, 0, 1, 16);
		aggregate_func_8596(iVar98);
	}
	if (bVar96)
	{
		iVar99 = func_968(MISC::_CREATE_VAR_STRING(2, "POSSE_SUBH"), -1, -303450633, 1, 1, 0, 1, 13);
	}
	switch (iParam0)
	{
		case 16:
			func_900(iVar98, bParam1);
			break;
		case 13:
			func_900(iVar99, bParam1);
			break;
	}
}

void func_339()
{
	struct<92> Var0;

	Var0.f_38 = 7;
	Var0.f_91 = -1;
	if (func_586(&Var0, 1))
	{
		func_140(&Var0);
	}
	func_36(6, 1);
	func_338(13, 1);
	func_350(1.5f, 1);
	aggregate_func_2631(&(Global_1939221->f_1433.f_156.f_613.f_4), 1);
}

void func_340()
{
	vector3 vVar0;

	if (!func_35(1))
	{
		func_970();
		func_971();
		if (aggregate_func_1746(&(Global_1273882->f_154[&Global_1273882]), 0))
		{
			vVar0 = { aggregate_func_5046(&Global_1273882) };
			func_158(vVar0.y, aggregate_func_8524(vVar0.x));
		}
		else
		{
			func_971();
		}
		func_52(0, 1);
		func_973(!Global_17173.f_54.f_14.f_5);
		func_974(0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_70.f_24, false);
		func_36(2, 0);
		func_36(1, 1);
	}
	HUD::_0x4CC5F2FC1332577F(-1274560729);
}

void func_341()
{
	struct<95> Var0;

	Var0.f_38 = 7;
	Var0.f_91 = -1;
	Var0 = { func_183(1) };
	if (Global_1939221->f_1433.f_1 != 6)
	{
	}
	func_350(3f, 1);
	func_48();
	func_968("POSSE_MEMBERS_SUBH", -1, -1, 0, 0, 0, 0, -1);
	if (func_212(&Var0))
	{
		if (aggregate_func_4287(&Var0) && aggregate_func_4287(&Var0))
		{
			func_968("POSSE_DEPUTIES_SUBH", -1, -1, 0, 0, 1, 0, -1);
		}
	}
	if (!func_975(18, 6))
	{
	}
	aggregate_func_5470(0);
	aggregate_func_2631(&(Global_1939221->f_1433.f_156.f_196.f_3), 1);
}

void func_342()
{
	func_350(1.5f, 1);
	aggregate_func_2631(&(Global_1939221->f_1433.f_156.f_205.f_7), 1);
}

void func_343()
{
	struct<95> Var0;

	func_350(1.5f, 1);
	func_517();
	Var0 = { func_183(1) };
	if (!func_212(&Var0))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939221->f_1433.f_156.f_263.f_92))
	{
		if (aggregate_func_4287(&Var0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_156.f_263.f_92, "NM_MW_POSSE_TYPE_PERSISTENT");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_156.f_263.f_92, "NM_MW_POSSE_TYPE_TEMPORARY");
		}
	}
	if (!func_977(aggregate_func_9308(&Var0)))
	{
	}
}

void func_344(int iParam0)
{
	int iVar0;

	func_881();
	func_350(2f, 1);
	if (Global_1939221->f_1433.f_1 == 6)
	{
		func_36(4, 1);
	}
	func_48();
	switch (iParam0)
	{
		case 21:
			if (aggregate_func_4373())
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					func_968(func_979(iVar0), iVar0, -1, 0, 0, 0, 0, -1);
					iVar0++;
				}
			}
			else
			{
				func_968(func_979(1), 1, -1, 0, 0, 0, 0, -1);
				func_968(func_979(2), 2, -1, 0, 0, 0, 0, -1);
				func_968(func_979(3), 3, -1, 0, 0, 0, 0, -1);
			}
			if (!func_975(5, 6))
			{
			}
			break;
		default:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				func_968(func_979(iVar0), iVar0, -1, 0, 0, 0, 0, -1);
				iVar0++;
			}
			if (!func_975(5, 6))
			{
			}
			break;
	}
	func_980();
}

void func_345()
{
	func_881();
	func_350(2f, 1);
	func_48();
	func_980();
	func_47(1);
}

void func_346()
{
	Global_1939221->f_1433.f_1314.f_9 = 0;
	_NAMESPACE76::_0x00A15B94CBA4F76F(Global_1939221->f_1433.f_1314.f_8);
	Global_1939221->f_1433.f_1314.f_8 = 0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1405.f_55, "");
	func_10();
}

void func_349()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = aggregate_func_7917(0, 1);
	func_105(iVar0, func_104());
	func_350(1f, 1);
	func_832();
	func_48();
	iVar2 = 7;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar1 = iVar3;
		func_968(func_982(iVar1), iVar3, iVar3, 0, 0, 0, 0, -1);
		iVar3++;
	}
}

void func_350(float fParam0, bool bParam1)
{
	Global_1896726->f_194.f_2 = 0f;
	Global_1896726->f_194.f_1 = fParam0;
	if (bParam1)
	{
		func_361(0, 1);
	}
}

void func_351()
{
	func_350(2f, 1);
	func_983();
	func_984();
}

void func_353()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_8930();
	iVar1 = aggregate_func_7829(iVar0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_7697.f_5, MISC::_CREATE_VAR_STRING(2, "NET_MG_CONTEXT_PUBLIC", iVar1));
	func_986(iVar0);
}

void func_355()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = aggregate_func_8930();
	bVar1 = aggregate_func_7654(2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_7697.f_1, MISC::_CREATE_VAR_STRING(42, "NET_MG_TITLE_ASSEMBLY", MISC::_CREATE_VAR_STRING(2, aggregate_func_4363(bVar1, "NET_MG_TITLE_PRIVATE", "NET_MG_TITLE_PUBLIC")), aggregate_func_5(func_988(iVar0))));
	func_986(iVar0);
	iVar2 = aggregate_func_7829(iVar0, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_7697.f_12, MISC::_CREATE_VAR_STRING(2, "MGPKR_UI_BUYIN", iVar2));
	bVar3 = (aggregate_func_7654(8192) && !aggregate_func_7654(16384));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_10, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_11, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_86, func_734());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_79, func_869());
	bVar4 = func_739();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_80, bVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_54.f_95, bVar4);
	func_870();
}

void func_356()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_371.f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_371.f_2, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_371.f_3, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_371.f_4, true);
}

void func_358()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_2190.f_436, false);
}

void func_359()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_350(1f, 1);
	func_48();
	iVar1 = 3;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = iVar2;
		func_968(func_990(iVar0), iVar2, iVar2, 0, 0, 0, 0, -1);
		iVar2++;
	}
}

void func_360()
{
	func_881();
	func_350(2f, 1);
	func_48();
	func_968(func_979(0), 0, -1, 0, 0, 0, 0, -1);
}

void func_361(int iParam0, bool bParam1)
{
	if (aggregate_func_2923(Global_1896726->f_194, iParam0) != bParam1)
	{
		if (bParam1)
		{
			aggregate_func_2882(&(Global_1896726->f_194), iParam0);
		}
		else
		{
			aggregate_func_2925(&(Global_1896726->f_194), iParam0);
		}
	}
}

void func_362(bool bParam0)
{
	Global_1939221->f_1433.f_8769.f_243 = bParam0;
	Global_1939221->f_1433.f_8769.f_242 = !bParam0;
}

bool func_365(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!aggregate_func_5409(iParam0))
	{
		return -1;
	}
	bVar2 = aggregate_func_4844(iParam0);
	bVar0 = false;
	while (bVar0 < 4)
	{
		iVar1 = aggregate_func_6097(bVar0);
		if (aggregate_func_5432(bVar2, iVar1, 1))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_375(bool bParam0)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_13.f_50.f_3, bParam0);
	}
}

void func_377(char* sParam0)
{
	StringCopy(&(Global_1180694->f_1092), sParam0, 64);
}

void func_378(bool bParam0)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_70.f_24) && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_70.f_23))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_70.f_24, func_1012(bParam0, 1));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896726->f_13.f_50.f_70.f_23, bParam0);
	}
}

char* func_379(int iParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	if (bParam1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iParam0), joaat("COLOR_PURE_WHITE")));
	}
	return MISC::_CREATE_VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(iParam0));
}

void func_380(char* sParam0, bool bParam1)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896726->f_13.f_50.f_2, sParam0);
	}
	if (bParam1)
	{
		Global_1896726->f_13.f_10 = { aggregate_func_8066(aggregate_func_238(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()), 0, 0)) };
	}
	else
	{
		Global_1896726->f_13.f_10 = { aggregate_func_8066(sParam0) };
	}
}

int func_383()
{
	return Global_1180694->f_409;
}

void func_386(int iParam0, int iParam1)
{
	struct<28> Var0;

	if (Global_1180694->f_116.f_3 == iParam0)
	{
		return;
	}
	Var0.f_27 = 10;
	Var0.f_9 = iParam0;
	aggregate_func_9177(&Var0);
	Global_1180694->f_116 = iParam0;
	Global_1180694->f_116.f_1 = iParam1;
	Global_1180694->f_116.f_4 = 1;
	aggregate_func_9176(1);
}

int func_389(bool bParam0)
{
	switch (bParam0)
	{
		case 1364158563:
			return 0;
		case -1615594685:
			return 1;
		case -606838807:
			return 2;
		case 1099303125:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_390(int iParam0)
{
	if (iParam0 == 0)
	{
		NETWORK::_0x3F0ABAE38A0515AD(0, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(0, 1);
	}
	if (iParam0 == 1)
	{
		NETWORK::_0x3F0ABAE38A0515AD(1, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(1, 1);
	}
	if (iParam0 == 2)
	{
		NETWORK::_0x3F0ABAE38A0515AD(2, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(2, 1);
	}
	if (iParam0 == 3)
	{
		NETWORK::_0x3F0ABAE38A0515AD(3, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(3, 1);
	}
}

int func_391(bool bParam0)
{
	switch (bParam0)
	{
		case 2118609260:
			return 1;
		case 910568583:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_393()
{
	if (!Global_1131373->f_6289)
	{
		return;
	}
	Global_1131373->f_6289.f_12 = 1;
}

void func_394()
{
	if (!Global_1131373->f_6289)
	{
		return;
	}
	Global_1131373->f_6289.f_13 = 1;
}

int func_408(bool bParam0)
{
	switch (bParam0)
	{
		case 470592719:
			return 0;
		case 1413457193:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_419(int iParam0)
{
	switch (iParam0)
	{
		case -1594107850:
		case -1080557963:
		case 72556410:
			aggregate_func_4964();
			break;
		default:
			break;
	}
	func_83(iParam0, 0);
}

int func_420(int iParam0)
{
	return func_1035(iParam0, Global_1939221->f_1433);
}

char* func_421()
{
	char* sVar0;

	sVar0 = STATS::_0x3F6FD87D2030ADC6();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "DAILY_DISABLED");
	}
	return sVar0;
}

char* func_422()
{
	char* sVar0;

	if (aggregate_func_4442())
	{
		sVar0 = "NM_POSSE_INFO_DISABLED_INTRO_MISSION_TOOLTIP";
	}
	else if (aggregate_func_4258())
	{
		sVar0 = "NM_POSSE_INFO_DISABLED_ACTIVITY_TOOLTIP";
	}
	else
	{
		sVar0 = "POSSE_FOOTER";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_423()
{
	char* sVar0;
	bool bVar1;
	int iVar2;

	bVar1 = aggregate_func_4442();
	if (bVar1)
	{
		iVar2 = aggregate_func_1500(-55206167, aggregate_func_1967(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0) + 1;
	}
	if (bVar1 && iVar2 <= 16)
	{
		sVar0 = "NET_CAMP_INTRO_MISSION_DISABLED_FOOTER";
	}
	else if (aggregate_func_4258() || Global_262996[&Global_1273882 /*70*/] > 2)
	{
		sVar0 = "NET_CAMP_DISABLED_ACTIVITY_FOOTER";
	}
	else
	{
		sVar0 = "CAMP_FOOTER";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_424()
{
	char* sVar0;

	if (aggregate_func_4442())
	{
		sVar0 = "NM_OPTION_DISABLED_INTRO_TOOLTIP";
	}
	else if (aggregate_func_4258() || Global_262996[&Global_1273882 /*70*/] > 2)
	{
		sVar0 = "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP";
	}
	else if (aggregate_func_379())
	{
		sVar0 = "JOB_POSSE_MEMBERS_IN_JAIL_FOOTER";
	}
	else if (aggregate_func_4981())
	{
		sVar0 = "JOB_PLAYER_IN_JAIL_FOOTER";
	}
	else
	{
		sVar0 = "MATCHMAKING_FOOTER";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_425()
{
	bool bVar0;
	char* sVar1;

	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_54.f_88);
	sVar1 = "STABLES_FOOTER";
	if (aggregate_func_4442())
	{
		sVar1 = "NM_OPTION_DISABLED_INTRO_TOOLTIP";
	}
	else if (UNLOCK::_UNLOCK_IS_UNLOCKED(1349034126) && !bVar0)
	{
		sVar1 = "NET_STABLES_UGC_DISABLED_FOOTER";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar1);
}

int func_426()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (aggregate_func_3653(PLAYER::PLAYER_ID(), &iVar0, &iVar1, 1))
	{
		if (iVar0 != -1)
		{
			if (iVar1 != Global_1275475[PLAYER::PLAYER_ID() /*86*/])
			{
				return 3;
			}
		}
	}
	iVar2 = PLAYER::GET_PLAYER_INDEX();
	if (iVar2 != 255)
	{
		iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar2);
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar3))
		{
			if (_NAMESPACE26::_0x0F99F6436528A089(iVar3))
			{
				if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar3) != iVar2)
				{
					return 1;
				}
			}
		}
	}
	if (aggregate_func_3450(PLAYER::PLAYER_ID(), 1) == -1)
	{
		return 2;
	}
	return 0;
}

char* func_427(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NET_MOONSHINE_INVITE_TO_SHACK_FOOTER";
		case 1:
			return "NET_MOONSHINE_INVITE_TO_SHACK_LEADER_ONLY_FOOTER";
		case 2:
			return "NET_MOONSHINE_INVITE_TO_SHACK_NO_SHACK_FOOTER";
		case 3:
			return "NET_MOONSHINE_INVITE_TO_SHACK_YOUR_SHACK_FOOTER";
		default:
			break;
	}
	return "";
}

int func_428()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (iVar0 != 255)
	{
		iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
		{
			if (_NAMESPACE26::_0x0F99F6436528A089(iVar1))
			{
				if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar1) != iVar0)
				{
					return 2;
				}
			}
		}
	}
	if ((aggregate_func_4258() || aggregate_func_6688()) || aggregate_func_4255(aggregate_func_4320()))
	{
		return 3;
	}
	if (!aggregate_func_1774(6))
	{
		return 1;
	}
	return 0;
}

char* func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MOONSHINE_FOOTER";
		case 1:
			return "MOONSHINE_FOOTER_INTRO";
		case 2:
			return "MOONSHINE_FOOTER_MEMBER";
		case 3:
			return "MOONSHINE_FOOTER_CONTENT";
		default:
			break;
	}
	return "";
}

char* func_430(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, aggregate_func_4915(89));
	iVar1 = Global_1273882->f_21;
	iVar2 = (iVar0 - iVar1);
	sVar3 = aggregate_func_1467(iVar2);
	if (aggregate_func_5017())
	{
		return MISC::_CREATE_VAR_STRING(2, "MI_WANTED_TT", func_1044());
	}
	if (iVar2 > 0)
	{
		return MISC::_CREATE_VAR_STRING(10, "INV_EXPIRE", sVar3);
	}
	return "";
}

char* func_431()
{
	char* sVar0;

	sVar0 = "NM_GC_FOOTER_CAMP_CHANGE";
	if (aggregate_func_9256(UIAPPS::_0x96FD694FE5BE55DC(1433015236)) == 14)
	{
		if (aggregate_func_6960(1))
		{
			sVar0 = "NET_CAMP_SET_LOC_FOLLOWER_DEAD";
		}
		else if (aggregate_func_3525())
		{
			sVar0 = "NET_CAMP_SET_LOC_CONTENT_LOCK";
		}
	}
	else if (aggregate_func_3096(Global_1939221->f_1433.f_156.f_2.f_29) && aggregate_func_3096(Global_1273882->f_1))
	{
		if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1939221->f_1433.f_156.f_2.f_29), &(Global_1273882->f_1)))
		{
			sVar0 = "NM_MW_POSSE_MEMBER_GENERIC_DISABLE";
		}
	}
	else if (aggregate_func_4710(PLAYER::PLAYER_ID()) != -1 && aggregate_func_7398(aggregate_func_4710(PLAYER::PLAYER_ID()), 512))
	{
		sVar0 = "NET_CAMP_SET_LOC_FOLLOWER_DEAD";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_432()
{
	char* sVar0;

	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1273882->f_1), &(Global_1939221->f_1433.f_156.f_2.f_29)))
	{
		if (Global_1939221->f_1433.f_156.f_2.f_4)
		{
			sVar0 = "NM_GC_FOOTER_STEP_TYPE_PERSISTENT";
		}
		else
		{
			sVar0 = "NM_GC_FOOTER_STEP_TYPE_TEMPORARY";
		}
	}
	else
	{
		sVar0 = "NM_MW_POSSE_MEMBER_GENERIC_DISABLE";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_433()
{
	if ((aggregate_func_8048() && _NAMESPACE26::_0x149A2751AB66AC02(Global_1939221->f_1433.f_156.f_2.f_1) < _NAMESPACE26::_0x853B0FA4D8732C57(Global_1939221->f_1433.f_156.f_2.f_1)) && _NAMESPACE26::_0x7933754F260B428A(_NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1939221->f_1433.f_156.f_2.f_1)) <= 0)
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_FOOTER");
	}
	return MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_BLOCKED_FOOTER");
}

char* func_434()
{
	char* sVar0;

	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_LEAVE_L_LINK_FOOTER");
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_LEAVE_M_LINK_FOOTER");
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_435(bool bParam0)
{
	char* sVar0;

	*bParam0 = joaat("COLOR_WHITE");
	if (!Global_1939221->f_1433.f_156.f_2.f_4)
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE_TEMP");
	}
	else if (aggregate_func_3096(Global_1939221->f_1433.f_156.f_2.f_29) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1939221->f_1433.f_156.f_2.f_29), &(Global_1273882->f_1)))
	{
		if (func_91())
		{
			if (!NETWORK::_0x595F028698072DD9(-1) && MISC::IS_ORBIS_VERSION())
			{
				sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME");
			}
			else if (!NETWORK::_0x6506BFA755FB209C())
			{
				sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_UGC_RESTRICT");
			}
			else
			{
				sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE");
			}
		}
		else
		{
			*bParam0 = joaat("COLOR_RED");
			sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN");
		}
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE_MEMBER");
	}
	return sVar0;
}

char* func_436()
{
	char* sVar0;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1405.f_8.f_1))
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GW_KICK_FOOTER");
	}
	else
	{
		sVar0 = MISC::_CREATE_VAR_STRING(2, "NM_GW_KICK_BLOCK_FOOTER");
	}
	return sVar0;
}

char* func_437()
{
	struct<7> Var0;

	if (aggregate_func_4442())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	Var0 = { func_194() };
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&Var0))
	{
		return "";
	}
	switch (func_808(&Var0))
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_SESSION_INVITE_SENT");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_SESSION_INVITE_ACCEPTED");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_SESSION_INVITE_REJECTED");
		default:
			break;
	}
	return "";
}

char* func_438()
{
	if (aggregate_func_4442())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	return "";
}

char* func_439()
{
	if (aggregate_func_4442())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	return MISC::_CREATE_VAR_STRING(2, "NM_PW_VIEW_ABILITY_LOADOUT_FOOTER");
}

char* func_440()
{
	if (aggregate_func_4442())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	return "";
}

char* func_441()
{
	char* sVar0;
	int iVar1;

	sVar0 = "NW_PW_C_CANT_INVITE";
	if (!aggregate_func_3096(Global_1939221->f_1433.f_31))
	{
		return sVar0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1939221->f_1433.f_31));
	if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		sVar0 = "NM_PW_C_NO_SC_LOCAL";
	}
	else if (!func_1045(iVar1))
	{
		sVar0 = "NW_PW_C_NO_SC_REMOTE";
	}
	else if (!aggregate_func_9334(PLAYER::PLAYER_ID()))
	{
		sVar0 = "NM_PW_C_NO_ACTIVE";
	}
	else if (func_1047(iVar1))
	{
		sVar0 = "NW_PW_C_CURRENT_MEMBER";
	}
	else
	{
		sVar0 = "NM_PW_INVITE_TO_CREW_FOOTER";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_442(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (Global_1896726->f_13.f_3)
	{
		bVar0 = func_90();
	}
	else
	{
		bVar0 = aggregate_func_682(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	}
	switch (iParam0)
	{
		case 2042309940:
			if (!bVar0)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_CAMP_SIZE_NEED_UPGRADE");
			}
			break;
	}
	return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_CAMP_SIZE");
}

char* func_443()
{
	struct<2> Var0;
	int iVar2;

	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (!aggregate_func_2991(16))
		{
			Var0 = { aggregate_func_4259(0) };
			if (aggregate_func_4255(Var0))
			{
				if (Var0 == 6)
				{
					iVar2 = aggregate_func_3578(PLAYER::PLAYER_ID(), 0);
					if (iVar2 != -1)
					{
						if (aggregate_func_4949(iVar2) == -785841056)
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_LOC_FAIL_POSSE_VERSUS");
						}
						else if (iVar2 == 1)
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_LOC_FAIL_CHALLENGE");
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_LOC_FAIL_EVENT");
						}
					}
				}
			}
		}
		else if (Global_1124870->f_1891 >= 6 && Global_1124870->f_1891 <= 12)
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_ALREADY_REQUESTED_FOOTER");
		}
		else if (aggregate_func_4710(PLAYER::PLAYER_ID()) != -1 && aggregate_func_7398(aggregate_func_4710(PLAYER::PLAYER_ID()), 512))
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_LOC_FOLLOWER_DEAD");
		}
		else if (aggregate_func_3525())
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_LOC_CONTENT_LOCK");
		}
		else
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER");
		}
	}
	return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER_MEMBER");
}

char* func_444(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "NM_PLAYLIST_ADVERSARY_SMALL_FOOTER";
		case 3:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM_FOOTER";
		case 4:
			return "NM_PLAYLIST_ADVERSARY_LARGE_FOOTER";
		case 5:
			return "NM_PLAYLIST_GUN_RUSH_TEAMS_FOOTER";
		case 6:
			return "NM_PLAYLIST_GUN_RUSH_FOOTER";
		case 7:
			return "NM_PLAYLIST_ELIMINATION_SMALL_FOOTER";
		case 8:
			return "NM_PLAYLIST_ELIMINATION_MEDIUM_FOOTER";
		case 9:
			return "NM_PLAYLIST_ELIMINATION_LARGE_FOOTER";
		case 0:
			return "NM_PLAYLIST_RACE_FOOTER";
		case 1:
			return "NM_PLAYLIST_FEATURED_001_FOOTER";
		case 10:
			return "NM_PLAYLIST_NOMINATED_FOOTER";
		case 15:
			return "NM_PLAYLIST_ORBIS_SERIES_1_FOOTER";
		case 16:
			return "NM_PLAYLIST_ORBIS_SERIES_2_FOOTER";
		case 17:
			return "NM_PLAYLIST_ORBIS_SERIES_3_FOOTER";
		case 19:
			return "NM_PLAYLIST_CAPTURE_FOOTER";
		case 18:
			return "NM_PLAYLIST_SHOOTOUT_FOOTER";
		default:
			break;
	}
	return "NM_PLAYLIST_FFA";
}

char* func_445(int iParam0, bool bParam1)
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(func_1050(iParam0)))
	{
		return MISC::_CREATE_VAR_STRING(2, "NG_SERIES_LOCKED");
	}
	if (func_1051())
	{
		return MISC::_CREATE_VAR_STRING(2, "JOB_LEADER_ONLY_FOOTER");
	}
	if (aggregate_func_5017())
	{
		return MISC::_CREATE_VAR_STRING(2, "MI_WANTED_TT", func_1044());
	}
	if (bParam1)
	{
		return MISC::_CREATE_VAR_STRING(2, func_444(iParam0));
	}
	if (aggregate_func_4478())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_MATCHMADE");
	}
	if (aggregate_func_4258())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_UGC");
	}
	if (Global_1273882->f_14)
	{
		return MISC::_CREATE_VAR_STRING(2, "NG_SIZE_LARGE_S");
	}
	return MISC::_CREATE_VAR_STRING(2, "NG_SERIES_LOCKED");
}

char* func_446(bool bParam0)
{
	if (func_1051())
	{
		return MISC::_CREATE_VAR_STRING(2, "JOB_LEADER_ONLY_FOOTER");
	}
	if (aggregate_func_5017())
	{
		return MISC::_CREATE_VAR_STRING(2, "MI_WANTED_TT", func_1044());
	}
	if (bParam0)
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_STORY_MISSION_ON_CALL_FOOTER");
	}
	if (aggregate_func_4478())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_MATCHMADE");
	}
	if (aggregate_func_4258())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_UGC");
	}
	if (Global_1273882->f_14)
	{
		return MISC::_CREATE_VAR_STRING(2, "NG_SIZE_LARGE_S");
	}
	if (!func_1052())
	{
		return MISC::_CREATE_VAR_STRING(2, "NG_SERIES_STORY_LOCKED");
	}
	return MISC::_CREATE_VAR_STRING(2, "NG_SERIES_LOCKED");
}

char* func_447()
{
	if (aggregate_func_4442())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	else if (aggregate_func_4258())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	else if (((((Global_1903928->f_485[9] || Global_1903928->f_485[10]) // PointerArith || Global_1903928->f_485[11]) // PointerArith || Global_1903928->f_485[12]) // PointerArith || Global_1903928->f_485[13]) // PointerArith)
	{
		return MISC::_CREATE_VAR_STRING(2, "HORSE_ACCESS_OVERRIDDEN_FOOTER");
	}
	return MISC::_CREATE_VAR_STRING(2, "HORSE_ACCESS_FOOTER");
}

char* func_448()
{
	if (aggregate_func_4442())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	else if (aggregate_func_4258())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	else if (((((Global_1903928->f_485[19] || Global_1903928->f_485[20]) // PointerArith || Global_1903928->f_485[21]) // PointerArith || Global_1903928->f_485[22]) // PointerArith || Global_1903928->f_485[23]) // PointerArith)
	{
		return MISC::_CREATE_VAR_STRING(2, "HORSE_ACCESS_OVERRIDDEN_FOOTER");
	}
	return MISC::_CREATE_VAR_STRING(2, "CARGO_ACCESS_FOOTER");
}

char* func_449()
{
	if (aggregate_func_4442())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	else if (aggregate_func_4258())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	else if (((((Global_1903928->f_485[9] || Global_1903928->f_485[10]) // PointerArith || Global_1903928->f_485[11]) // PointerArith || Global_1903928->f_485[12]) // PointerArith || Global_1903928->f_485[13]) // PointerArith)
	{
		return MISC::_CREATE_VAR_STRING(2, "VEHICLE_ACCESS_OVERRIDDEN_FOOTER");
	}
	return MISC::_CREATE_VAR_STRING(2, "VEHICLE_ACCESS_FOOTER");
}

char* func_450()
{
	if (aggregate_func_4442())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	else if (aggregate_func_4258())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	else if (!func_856())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_FR_KILL_YOURSELF_FOOTER_DISABLED_CONTENT");
	}
	else if (aggregate_func_4981())
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_FR_KILL_YOURSELF_FOOTER_DISABLED_JAIL");
	}
	return MISC::_CREATE_VAR_STRING(2, "NM_FR_KILL_YOURSELF_FOOTER");
}

char* func_452()
{
	int iVar0;

	iVar0 = aggregate_func_2043(&(Global_1273882->f_154[&Global_1273882]), 0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "HOSTILITY_LOW_FOOTER");
		case 2:
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "HOSTILITY_MEDIUM_FOOTER");
		case 4:
		case 5:
		case 6:
			return MISC::_CREATE_VAR_STRING(2, "HOSTILITY_HIGH_FOOTER");
		default:
			return MISC::_CREATE_VAR_STRING(2, "HOSTILITY_HIGH_FOOTER");
	}
	return "";
}

char* func_453(int iParam0)
{
	char* sVar0;
	bool bVar1;
	int iVar2;

	switch (iParam0)
	{
		case 0:
			sVar0 = "NM_FR_EMOTES_TYPE_ACTION_FOOTER";
			break;
		case 1:
			sVar0 = "NM_FR_EMOTES_TYPE_ANTAGONIZE_FOOTER";
			break;
		case 2:
			sVar0 = "NM_FR_EMOTES_TYPE_REACTION_FOOTER";
			break;
		case 3:
			sVar0 = "NM_FR_EMOTES_TYPE_GREET_FOOTER";
			break;
		default:
			return MISC::_CREATE_VAR_STRING(2, "NM_FR_EMOTES_TYPE_NONE_FOOTER");
	}
	aggregate_func_5303(iParam0, &bVar1);
	if (!aggregate_func_2823(bVar1, 0))
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_FR_EMOTES_TYPE_NONE_FOOTER");
	}
	if (!INVENTORY::_0x751A7E0EAEDAD0D3(bVar1, &iVar2, 4))
	{
		return MISC::_CREATE_VAR_STRING(2, "NM_FR_EMOTES_TYPE_NONE_FOOTER");
	}
	return MISC::_CREATE_VAR_STRING(10, sVar0, aggregate_func_1965(HUD::_GET_LABEL_TEXT_BY_HASH(iVar2), joaat("COLOR_PURE_WHITE")));
}

char* func_454()
{
	return MISC::_CREATE_VAR_STRING(2, "NM_FR_EMOTES_TYPE_ONE_FOOTER");
}

char* func_455(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_TYPES_DEFAULT_DESC");
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_TYPES_CASUAL_DESC");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_TYPES_CRAZY_DESC");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_TYPES_FLAMBOYANT_DESC");
		case 4:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_TYPES_GUNSLINGER_DESC");
		case 5:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_TYPES_REFINED_DESC");
		case 6:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_TYPES_SILENT_DESC");
		case 7:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_TYPES_GREENHORN_DESC");
		case 8:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_TYPES_VETERAN_DESC");
		case 9:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_TYPES_EASYRIDER_DESC");
		default:
			break;
	}
	return "";
}

char* func_457()
{
	if (func_735())
	{
		return MISC::_CREATE_VAR_STRING(2, "INVITE_PLAYERS_TO_MINIGAME_FOOTER");
	}
	return MISC::_CREATE_VAR_STRING(2, "INVITE_PLAYERS_PUBLIC_NOT_ALLOWED_FOOTER");
}

char* func_458()
{
	if (aggregate_func_576(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return MISC::_CREATE_VAR_STRING(2, "GFH_REPLAY_BOUNTY_JAILED_MEMBER");
	}
	else if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 4)
	{
		return MISC::_CREATE_VAR_STRING(2, "GFH_HELP_POSSE_TOO_LARGE_TO_ACCEPT_LEGENDARY_BOUNTY");
	}
	else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1113330->f_7999.f_5, "dynamic_list_item_enabled") && Global_1113330->f_7999.f_3 == 1)
	{
		return MISC::_CREATE_VAR_STRING(2, "GFH_REPLAY_BOUNTY_NOT_AVAILABLE");
	}
	else
	{
		return MISC::_CREATE_VAR_STRING(2, "GFH_REPLAY_BOUNTY_AVAILABLE");
	}
	return MISC::_CREATE_VAR_STRING(2, "GFH_REPLAY_BOUNTY_AVAILABLE");
}

bool func_461(struct<7> Param0, char* sParam7)
{
	if (!aggregate_func_3096(Param0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(&(Global_1939221->f_1433.f_31), &Param0, 7);
	Global_1939221->f_1433.f_31.f_7 = { aggregate_func_8066(sParam7) };
	return true;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1196426011;
		case 1:
			return 1196426011;
		case 2:
			return 1196426011;
		default:
			break;
	}
	return 1196426011;
}

bool func_466(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return false;
		}
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 == iParam0)
	{
		uParam1->f_1 = Global_1273882->f_15;
	}
	uParam1->f_2 = iParam0;
	uParam1->f_3 = 1;
	*uParam1 = 1;
	uParam1->f_4 = 1;
	if (!func_612(uParam1))
	{
		return false;
	}
	return true;
}

bool func_467()
{
	if ((((((((((((((aggregate_func_7011(9) || aggregate_func_7011(10)) || aggregate_func_7011(11)) || aggregate_func_7011(12)) || aggregate_func_7011(13)) || aggregate_func_7011(14)) || aggregate_func_7011(15)) || aggregate_func_7011(16)) || aggregate_func_7011(17)) || aggregate_func_7011(18)) || aggregate_func_7011(19)) || aggregate_func_7011(20)) || aggregate_func_7011(21)) || aggregate_func_7011(22)) || aggregate_func_7011(23))
	{
		return true;
	}
	return false;
}

void func_474(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	struct<8> Var9;
	bool bVar17;
	int iVar18;
	int iVar19;

	bVar0 = true;
	bVar1 = true;
	if (bParam6 || !bVar1)
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_2, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = INVENTORY::_0x4C543D5DFCD2DAFD(&uParam0, iParam4);
	bVar3 = aggregate_func_8044(iParam4, iParam4->f_10, 1);
	iVar4 = aggregate_func_4087(*iParam4);
	bVar5 = iVar4 > Global_1273882->f_21;
	bVar6 = aggregate_func_9194(*iParam4);
	bVar7 = aggregate_func_2937(iParam4, -415648720, 0) > 0;
	bVar8 = false;
	if (bVar7)
	{
		bVar8 = true;
	}
	Var9 = { aggregate_func_647(iParam4, 1) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_18, &Var9);
	func_1084(*iParam4, &((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_32));
	bVar17 = !aggregate_func_2889(aggregate_func_4464(), 0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_28, bVar17);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_29, bVar17);
	iVar18 = func_1086(bVar3, bVar5, bVar2);
	iVar19 = 3;
	switch (iVar18)
	{
		case 0:
			func_1087(iParam5, iVar19, bVar8);
			break;
		case 1:
			func_1088(iParam5, iVar19, bVar8);
			break;
		case 2:
			func_1089(iParam5, bVar6);
			break;
		case 3:
			func_1090(iParam5, iVar4);
			break;
	}
}

char* func_476(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_GENDER_MALE";
		case 1:
			return "HORSE_GENDER_FEMALE";
		case 2:
			return "HORSE_GENDER_GELDED";
		default:
			break;
	}
	return "";
}

int func_483(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (aggregate_func_2016(iParam0))
	{
		case 0:
		case 1:
			iVar0 = 0;
			break;
		case 2:
		case 3:
			iVar0 = 1;
			break;
		case 4:
		case 5:
			iVar0 = 2;
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

void func_488(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar16;

	bVar0 = true;
	bVar1 = true;
	if (bParam7 || !bVar1)
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_2, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = INVENTORY::_0x4C543D5DFCD2DAFD(&uParam0, iParam4);
	bVar3 = aggregate_func_8044(iParam4, iParam4->f_10, 1);
	iVar4 = aggregate_func_4087(*iParam4);
	bVar5 = iVar4 > Global_1273882->f_21;
	bVar6 = false;
	if (aggregate_func_2937(iParam4, -415648720, 0) > 0)
	{
		bVar6 = true;
	}
	bVar7 = true;
	if (!bVar6)
	{
		bVar7 = false;
	}
	Var8 = { aggregate_func_1044(iParam4, 0, 1) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_18, &Var8);
	func_1084(*iParam4, &((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_32));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam5 /*38*/])->f_29, false);
	iVar16 = func_1086(bVar3, bVar5, bVar2);
	switch (iVar16)
	{
		case 0:
			func_1087(iParam5, iParam6, 0);
			break;
		case 1:
			func_1088(iParam5, iParam6, bVar7);
			break;
		case 2:
		case 3:
			if (bVar2)
			{
				func_1087(iParam5, iParam6, 0);
			}
			else
			{
				func_1088(iParam5, iParam6, bVar7);
			}
			break;
	}
}

void func_491(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	struct<8> Var13;
	bool bVar21;
	int iVar22;
	int iVar23;

	bVar0 = true;
	bVar1 = func_1100(aggregate_func_9152(2, iParam4->f_11, 1));
	if (bParam6 || !bVar1)
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam5 /*38*/])->f_2, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam5 /*38*/])->f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = false;
	iVar3 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (func_1101(iVar3, iParam4))
		{
			bVar2 = true;
		}
	}
	bVar6 = INVENTORY::_0x4C543D5DFCD2DAFD(&uParam0, iParam4);
	bVar7 = aggregate_func_8044(iParam4, iParam4->f_10, 1);
	iVar8 = func_1102(*iParam4);
	bVar9 = iVar8 > Global_1273882->f_21;
	bVar10 = aggregate_func_9166(*iParam4);
	bVar11 = func_1104(&uParam0, iParam4, &iVar4);
	bVar12 = func_1105(&uParam0, iParam4, &iVar5);
	Var13 = { aggregate_func_647(iParam4, 1) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1939221->f_1433.f_2190.f_3[iParam5 /*38*/])->f_18, &Var13);
	func_1084(*iParam4, &((Global_1939221->f_1433.f_2190.f_3[iParam5 /*38*/])->f_32));
	bVar21 = !aggregate_func_2889(aggregate_func_4464(), 0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam5 /*38*/])->f_28, bVar21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam5 /*38*/])->f_29, bVar21);
	iVar22 = func_1106(bVar7, bVar9, bVar6, bVar2);
	iVar23 = 3;
	switch (iVar22)
	{
		case 0:
			func_1107(iVar4, iVar5, 1, 1);
			func_1108(iParam5, iVar23, bVar11, bVar12);
			break;
		case 1:
			func_1107(iVar4, iVar5, 1, 0);
			func_1109(iParam5, iVar23, bVar11);
			break;
		case 2:
			func_1107(iVar4, iVar5, 1, 0);
			func_1110(iParam5, iVar23, bVar11);
			break;
		case 3:
			func_1111(iParam5, bVar10);
			break;
		case 4:
			func_1112(iParam5, iVar8);
			break;
	}
}

void func_499(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<8> Var14;
	int iVar22;

	bVar0 = true;
	bVar1 = func_1100(aggregate_func_9152(2, iParam4->f_11, 1));
	if (bParam7 || !bVar1)
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam5 /*38*/])->f_2, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam5 /*38*/])->f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = false;
	iVar3 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (func_1101(iVar3, iParam4))
		{
			bVar2 = true;
		}
	}
	bVar8 = INVENTORY::_0x4C543D5DFCD2DAFD(&uParam0, iParam4);
	bVar9 = aggregate_func_8044(iParam4, iParam4->f_10, 1);
	iVar10 = func_1102(*iParam4);
	bVar11 = iVar10 > Global_1273882->f_21;
	bVar12 = func_1104(&uParam0, iParam4, &iVar6);
	bVar13 = func_1105(&uParam0, iParam4, &iVar7);
	Var14 = { aggregate_func_1044(iParam4, 2, 1) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1939221->f_1433.f_2190.f_3[iParam5 /*38*/])->f_18, &Var14);
	func_1084(*iParam4, &((Global_1939221->f_1433.f_2190.f_3[iParam5 /*38*/])->f_32));
	iVar22 = func_1106(bVar9, bVar11, bVar8, bVar2);
	switch (iVar22)
	{
		case 0:
			iVar5 = func_1113(iVar6, iVar7, &iVar4, 1, 1);
			func_1108(iParam5, iParam6, bVar12, bVar13);
			break;
		case 1:
			iVar5 = func_1113(iVar6, iVar7, &iVar4, 1, 0);
			func_1109(iParam5, iParam6, bVar12);
			break;
		case 2:
			iVar5 = func_1113(iVar6, iVar7, &iVar4, 1, 0);
			func_1110(iParam5, iParam6, bVar12);
			break;
		case 3:
		case 4:
			if (bVar8)
			{
				iVar5 = func_1113(iVar6, iVar7, &iVar4, 0, 0);
				func_1109(iParam5, iParam6, 0);
			}
			else
			{
				iVar5 = func_1113(iVar6, iVar7, &iVar4, 1, 0);
				func_1110(iParam5, iParam6, bVar12);
			}
			break;
	}
	func_1114(iVar5, iVar4);
}

int func_501(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_1115(iParam0);
	if (!aggregate_func_2823(bVar0, 0))
	{
		return 0;
	}
	iVar1 = aggregate_func_6048(bVar0, 0, 59806960);
	return iVar1;
}

int func_502(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (!aggregate_func_2991(64))
	{
		return 0;
	}
	bVar0 = aggregate_func_7988(iParam0);
	if (!aggregate_func_2823(bVar0, 0))
	{
		return 0;
	}
	iVar1 = aggregate_func_6048(bVar0, 0, 59806960);
	return iVar1;
}

bool func_505(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = iParam0;
	return iParam3 > iVar0;
	return false;
}

bool func_506(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;

	vVar0.x = iParam0;
	vVar0.f_1 = bParam2;
	iVar3 = 0;
	if (Global_1180694->f_490 != -1 && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		iVar3 = 1;
	}
	iVar4 = func_1117(vVar0);
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		vVar0.f_2 = func_1118(iVar5, vVar0);
		if (Global_1896726->f_13.f_3)
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_12.f_23))
			{
				if (DATABINDING::_0x81D7183E7A8ECA72(Global_1896726->f_13.f_50.f_12.f_23) != -6116668 && aggregate_func_8510(&vVar0))
				{
				}
				else
				{
					Jump @175; //curOff = 151
					if (aggregate_func_8510(&vVar0) && iVar3 == 0)
					{
					}
					else if (func_1120(vVar0, &Global_1273882, iParam1, 0))
					{
						return true;
					}
				}
				iVar5++;
				return false;
			}
		}
	}
}

int func_511(bool bParam0)
{
	int iVar0;

	iVar0 = aggregate_func_4494(bParam0);
	if ((iVar0 != 0 && !aggregate_func_4768(aggregate_func_4494(bParam0))) && !aggregate_func_4749(aggregate_func_4494(bParam0)))
	{
		if (!aggregate_func_4668(iVar0))
		{
			return -1994084079 /* GXTEntry: "The properties of this herb are not known yet." */;
		}
	}
	return aggregate_func_3620(bParam0);
}

void func_512(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!bParam0)
	{
		if (aggregate_func_7399(6))
		{
			return;
		}
	}
	bVar0 = 1384535894;
	if (aggregate_func_4349(&(Global_1275329->f_50)))
	{
		bVar0 = 786277441;
	}
	bVar1 = aggregate_func_5209(bVar0, 0, 1, -1, 1);
	bVar2 = aggregate_func_7790(bVar0, bVar1, 1, 0, 1);
	bVar3 = false;
	if (bVar1 == -570078785 || (aggregate_func_5210(bVar1) && aggregate_func_5216(bVar0, 773203532 /* GXTEntry: "Gold Bar" */, bVar1, 1, 1) > 0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_7711.f_245, bVar2);
		bVar2 = aggregate_func_7790(bVar0, bVar1, 1, 1, 1);
		bVar3 = aggregate_func_2926(bVar2);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7711.f_246, bVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7711.f_247, true);
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_7711.f_244))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7711.f_244, false);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_7711.f_242, bVar2);
		bVar3 = aggregate_func_4574(bVar2);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7711.f_243, bVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7711.f_244, true);
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_7711.f_247))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7711.f_247, false);
		}
	}
}

int func_513(bool bParam0)
{
	int iVar0;

	switch (bParam0)
	{
		case 0:
			iVar0 = -1894112717;
			break;
		case 5:
			iVar0 = -1072345087;
			break;
		case 9:
			iVar0 = 1065052233;
			break;
		case 16:
			iVar0 = 1228822029;
			break;
		case 12:
			iVar0 = -1365950789;
			break;
		default:
			iVar0 = -1894112717;
			break;
	}
	return iVar0;
}

bool func_515(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1831597626 /* GXTEntry: "Use this post to join a series of smaller showdown modes. You can also join the s" +
    "eries from the Quick Join section of the Player menu." */;
		case 3:
			return 265155422 /* GXTEntry: "Use this post to join a series of showdown modes with a moderate number of player" +
    "s. You can also join the series from the Quick Join section of the Player menu." */;
		case 4:
			return -474643995 /* GXTEntry: "Join a series of large showdown modes from this post. You can also join the serie" +
    "s from the Quick Join section of the Player menu." */;
		case 5:
			return 585717850;
		case 6:
			return -1831597626 /* GXTEntry: "Use this post to join a series of smaller showdown modes. You can also join the s" +
    "eries from the Quick Join section of the Player menu." */;
		case 8:
			return -1831597626 /* GXTEntry: "Use this post to join a series of smaller showdown modes. You can also join the s" +
    "eries from the Quick Join section of the Player menu." */;
		case 9:
			return 585717850;
		case 0:
			return -2055321196 /* GXTEntry: "Join a series of races from this post. You can also join the series from the Quic" +
    "k Join section of the Player menu." */;
		case 1:
			return -590680925;
		case 15:
			return 2073249693;
		case 16:
			return 2073249693;
		case 17:
			return 2073249693;
		case 18:
			return 1223020477;
		case 19:
			return 28771527;
		default:
			break;
	}
	return false;
}

void func_516(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1461.f_34, bParam0);
	if (bParam0 != 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1461.f_35, -712210889);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1461.f_35, false);
	}
}

void func_517()
{
	Global_1939221->f_1433.f_156.f_263.f_90 = -1;
}

char* func_518()
{
	return "NS_OSK_ENTER_NAME_TITLE";
}

char* func_519()
{
	return "NS_OSK_ENTER_NAME_DESC";
}

int func_520(int iParam0)
{
	if (func_1129() == 2)
	{
		return 0;
	}
	MISC::_COPY_MEMORY(Global_1958224, iParam0, 51);
	aggregate_func_8074(2);
	return 1;
}

void func_524(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	Var0 = { aggregate_func_6555(iParam0) };
	if (!aggregate_func_4255(Var0))
	{
		return;
	}
	iVar2 = aggregate_func_7128(Var0);
	if (iVar2 != -1)
	{
		iVar3 = (Global_1182978->f_1[iVar2 /*26*/])->f_3;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			if (aggregate_func_4325(1048576, PLAYER::PLAYER_ID()) || aggregate_func_4981())
			{
				bVar4 = Global_1273874->f_2.f_4;
				if (!aggregate_func_4574(bVar4))
				{
					aggregate_func_4634(iVar2, 131072);
				}
				else
				{
					aggregate_func_4634(iVar2, 32768);
				}
				return;
			}
			else if (aggregate_func_379())
			{
				aggregate_func_4634(iVar2, 65536);
				return;
			}
		}
		if (iVar3 != 0 && aggregate_func_1555(iVar2, Var0, iVar3))
		{
			iVar5 = aggregate_func_7203(iVar2);
			if (iVar5 != -1 && aggregate_func_4949(iVar5) == -785841056)
			{
				iVar6 = aggregate_func_6610(iVar5);
				if (!aggregate_func_6559(iVar6))
				{
					aggregate_func_6523(iVar6);
					aggregate_func_6618(aggregate_func_6610(iVar5), Var0, -1);
				}
			}
		}
	}
}

void func_535(int iParam0, int iParam1)
{
	struct<35> Var0;
	struct<2> Var35;
	int iVar37;
	int iVar38;
	int iVar39;

	Var0 = { aggregate_func_7671(iParam0) };
	Var35 = { Var0.f_8 };
	iVar37 = aggregate_func_4306(Var35);
	iVar38 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939221->f_242.f_14[iParam0 /*39*/])->f_25);
	iVar39 = (Global_1273882->f_21 - (iVar38 - (Global_1901929->f_295.f_167 / 1000)));
	switch (iVar37)
	{
		case 20:
			aggregate_func_861(DATABINDING::_0xE6AAB897120492D6(iParam1, aggregate_func_4915(88)));
			TELEMETRY::_0xF37A2149BC9A8A27(-1522841992, Var0.f_16.f_1, PLAYER::PLAYER_ID(), 0, iVar39);
			break;
		case 21:
			aggregate_func_861(DATABINDING::_0xE6AAB897120492D6(iParam1, aggregate_func_4915(88)));
			TELEMETRY::_0xF37A2149BC9A8A27(2112282570, Var0.f_16.f_1, PLAYER::PLAYER_ID(), 0, iVar39);
			break;
		case 28:
			aggregate_func_861(DATABINDING::_0xE6AAB897120492D6(iParam1, aggregate_func_4915(88)));
			TELEMETRY::_0xF37A2149BC9A8A27(1403358139, Var0.f_16.f_1, PLAYER::PLAYER_ID(), 0, iVar39);
			break;
	}
}

void func_537(int iParam0)
{
	struct<12> Var0;

	Var0.f_9 = 255;
	Var0.f_10 = 255;
	Var0.f_11 = 255;
	Var0 = 30;
	Var0.f_6 = 3;
	Var0.f_9 = PLAYER::PLAYER_ID();
	Var0.f_10 = iParam0;
	Var0.f_7 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_8 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	aggregate_func_2716(&Var0);
}

int func_539()
{
	int iVar0;
	var uVar1;

	if (!aggregate_func_2842("ALL HORSES", &iVar0, &uVar1, -1591664384, 0))
	{
		return 0;
	}
	aggregate_func_2837(iVar0);
	return uVar1;
}

int func_540()
{
	int iVar0;
	var uVar1;
	struct<14> Var2;

	Var2 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!aggregate_func_2836(&Var2, &iVar0, &uVar1, 0))
	{
		return 0;
	}
	aggregate_func_2837(iVar0);
	return uVar1;
}

int func_543()
{
	return Global_1130954->f_143;
}

void func_544(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (uParam1->f_1 == -1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = &uParam1->f_2[uParam1->f_1];
	}
	uParam0->f_8 = 1;
	StringCopy(&(uParam0->f_16), MISC::_CREATE_VAR_STRING(0, iParam2), 64);
	uParam0->f_24 = joaat("hud_textures");
	uParam0->f_25 = joaat("check");
	if (func_1174(iParam2, &(uParam1->f_2)))
	{
		uParam0->f_26 = 1;
		uParam0->f_7 = 33585163; /* GXTEntry: "Unequip" */
		uParam0->f_34 = 1;
	}
	else
	{
		uParam0->f_26 = 0;
		uParam0->f_7 = -1687063893; /* GXTEntry: "Equip" */
		uParam0->f_34 = 0;
	}
	uParam0->f_27 = 376878225;
	uParam0->f_28 = -1410441915;
	if (iVar0 == iParam2)
	{
		uParam0->f_29 = 1;
		uParam0->f_33 = -186220729; /* GXTEntry: "Unfavorite Emote" */
	}
	else
	{
		uParam0->f_29 = 0;
		uParam0->f_33 = 801794679; /* GXTEntry: "Favorite Emote" */
	}
	if (bParam3)
	{
		uParam0->f_30 = -439153934; /* GXTEntry: "Show Equipped" */
		if (aggregate_func_9240(uParam1))
		{
			uParam0->f_31 = 1;
		}
		else
		{
			uParam0->f_31 = 0;
		}
	}
	else
	{
		uParam0->f_30 = -1258266463; /* GXTEntry: "Show All" */
		uParam0->f_31 = 1;
	}
	uParam0->f_6 = -1309595911;
	uParam0->f_4 = 1433015236;
	uParam0->f_5 = -1309595911;
	uParam0->f_32 = -519851087;
	uParam0->f_35 = 1172957996;
}

void func_545(var uParam0, int iParam1, char[32] cParam2, struct<36> Param10)
{
	aggregate_func_186(uParam0, iParam1, cParam2, Param10);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, aggregate_func_4915(15), &(Param10.f_16));
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, aggregate_func_4915(21), Param10.f_24);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, aggregate_func_4915(22), Param10.f_25);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, aggregate_func_4915(23), Param10.f_26);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, aggregate_func_4915(24), Param10.f_27);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, aggregate_func_4915(25), Param10.f_28);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, aggregate_func_4915(26), Param10.f_29);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, aggregate_func_4915(68), Param10.f_30);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, aggregate_func_4915(69), Param10.f_31);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, aggregate_func_4915(71), Param10.f_32);
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, aggregate_func_4915(64), Param10.f_33);
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, aggregate_func_4915(65), Param10.f_34);
	uParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, aggregate_func_4915(67), Param10.f_35);
}

bool func_560(var uParam0, var uParam1)
{
	struct<13> Var0;
	var uVar18;
	int iVar19;

	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_12 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = 6;
	Var0.f_10 = Global_1901929->f_295.f_170;
	aggregate_func_8378(6, &uVar18);
	if (!aggregate_func_1904(6))
	{
		return false;
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uVar18))
	{
		return false;
	}
	Var0.f_6 = PLAYER::PLAYER_ID();
	iVar19 = (&Global_1197807 - aggregate_func_4939(3));
	if (iVar19 < 0 || iVar19 >= 16)
	{
		iVar19 = 0;
	}
	Var0.f_8 = { aggregate_func_4757((*Global_1102098)[0 /*17*/][iVar19], 3) };
	Var0.f_7 = uVar18;
	Var0.f_12 = { *Global_1197807 };
	func_1151(&Var0, &uVar18);
	_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 0);
	aggregate_func_4580();
	return true;
}

bool func_561(var uParam0, var uParam1)
{
	struct<13> Var0;
	var uVar18;
	int iVar19;

	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_12 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = 4;
	Var0.f_10 = Global_1901929->f_295.f_170;
	if (&Global_1197807 != -1)
	{
		if (!aggregate_func_7665(*Global_1197807) || aggregate_func_2611(*Global_1197807) > 58)
		{
			return false;
		}
		aggregate_func_7552(*Global_1197807, 1);
	}
	else
	{
		return false;
	}
	aggregate_func_8378(4, &uVar18);
	if (!aggregate_func_1904(4))
	{
		return false;
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uVar18))
	{
		return false;
	}
	Var0.f_6 = PLAYER::PLAYER_ID();
	iVar19 = (&Global_1197807 - aggregate_func_4939(3));
	if (iVar19 < 0 || iVar19 >= 16)
	{
		iVar19 = 0;
	}
	Var0.f_8 = { aggregate_func_8377(3, iVar19) };
	Var0.f_7 = uVar18;
	Var0.f_12 = { *Global_1197807 };
	func_1151(&Var0, &uVar18);
	_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 0);
	aggregate_func_4580();
	return true;
}

bool func_562(var uParam0, var uParam1)
{
	struct<13> Var0;
	var uVar18;
	int iVar19;

	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_12 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = 5;
	Var0.f_10 = Global_1901929->f_295.f_170;
	if (&Global_1197807 != -1)
	{
		if (!aggregate_func_7665(*Global_1197807) || aggregate_func_2611(*Global_1197807) > 58)
		{
			return false;
		}
		aggregate_func_7552(*Global_1197807, 1);
	}
	else
	{
		return false;
	}
	aggregate_func_8378(5, &uVar18);
	if (!aggregate_func_1904(5))
	{
		return false;
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uVar18))
	{
		return false;
	}
	Var0.f_6 = PLAYER::PLAYER_ID();
	iVar19 = (&Global_1197807 - aggregate_func_4939(3));
	if (iVar19 < 0 || iVar19 >= 16)
	{
		iVar19 = 0;
	}
	Var0.f_8 = { aggregate_func_8377(3, iVar19) };
	Var0.f_7 = uVar18;
	Var0.f_12 = { *Global_1197807 };
	func_1151(&Var0, &uVar18);
	_NAMESPACE71::_0xDD1232B332CBB9E7(6, 1, 0);
	_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 0);
	aggregate_func_4580();
	return true;
}

bool func_563(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate_func_8381(iParam0);
	iVar1 = aggregate_func_583(iVar0, Global_36);
	iVar2 = aggregate_func_2512(iVar0, iVar1);
	*uParam1 = { aggregate_func_8008(iVar0, iVar1, iVar2) };
	if (aggregate_func_4255(*uParam1))
	{
		func_1193(iVar0, iVar1, iVar2, 0);
		return true;
	}
	return false;
}

bool func_586(var uParam0, bool bParam1)
{
	int iVar0;

	if (aggregate_func_682(Global_1273882->f_15))
	{
		if (aggregate_func_1048(PLAYER::PLAYER_ID()) == 0)
		{
			return false;
		}
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		return func_466(iVar0, uParam0, bParam1);
	}
	else
	{
		if (bParam1)
		{
			if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
			{
				return false;
			}
			if (!_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
			{
				return false;
			}
		}
		return func_210(Global_1273882->f_15, uParam0, bParam1);
	}
	return false;
}

void func_587()
{
	Global_1939221->f_1433.f_156.f_2 = 0;
}

void func_588()
{
	Global_1939221->f_1433.f_156.f_97 = 0;
}

bool func_589()
{
	if (func_1225() >= 1 || POSSE::_0xC088FF658B2E51DA() >= 1)
	{
		return true;
	}
	return false;
}

void func_600(int* iParam0, char* sParam1, var uParam2, var uParam3, int iParam4)
{
	if (NETWORK::_0xE47001B7CB8B98AE(iParam0, uParam2, uParam3, 11, 0, iParam4))
	{
	}
	aggregate_func_3626("NJ_INVITE_SENT", sParam1, joaat("COLOR_PURE_WHITE"));
	aggregate_func_4239(uParam3);
}

int func_601()
{
	return aggregate_func_8473(Global_1130954->f_137);
}

bool func_604(int iParam0, int iParam1)
{
	if (iParam0 != &Global_1131111)
	{
		return false;
	}
	if (MINIGAME::_0xBEA7D3CB47E1479C())
	{
		return false;
	}
	if (!MINIGAME::_0x910B088E51A511AC())
	{
		return false;
	}
	if (Global_1131111->f_261 == 0)
	{
		if (MINIGAME::_0x9DD95B405AB4983E(&(Global_1131111->f_226), Global_1131111->f_259))
		{
			Global_1131111->f_261 = 1;
		}
	}
	return Global_1131111->f_261;
}

int func_605(int iParam0, int* iParam1)
{
	int iVar0;

	if (!aggregate_func_3096(*iParam1))
	{
		return 0;
	}
	if (iParam0 != &Global_1131111 || Global_1131111->f_261 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1131111->f_259)
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Global_1131111->f_1[iVar0 /*7*/], iParam1))
		{
			return &(Global_1131111->f_226[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_607()
{
	return Global_1896726->f_13.f_4;
}

void func_608()
{
	Global_1896726->f_13.f_37 = 0;
	Global_1896726->f_13.f_37.f_2 = 0;
	Global_1896726->f_13.f_37.f_1 = 0;
	StringCopy(&(Global_1896726->f_13.f_37.f_5), "", 64);
}

bool func_612(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<28> Var4;
	char* sVar122;
	struct<7> Var123;
	int iVar130;
	struct<19> Var131;

	if (!func_212(uParam0))
	{
		return false;
	}
	bVar0 = true;
	bVar2 = aggregate_func_7670();
	if (uParam0->f_3)
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar3);
		Var4.f_27 = 10;
		if (!POSSE::_0xC087FF658B2E51DA(uParam0->f_2, &Var4))
		{
			func_747(uParam0);
			return false;
		}
		uParam0->f_29 = { Var4.f_19 };
		bVar0 = true;
		iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam0->f_29));
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			uParam0->f_1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar1);
		}
		if (NETWORK::_0x595F028698072DD9(-1) || !MISC::IS_ORBIS_VERSION())
		{
			if (bVar0)
			{
				sVar122 = PLAYER::GET_PLAYER_NAME(iVar1);
			}
			else
			{
				sVar122 = func_1230(Var4);
			}
			if (func_1231(sVar122, &(Var4.f_1)))
			{
				if (bVar0)
				{
					StringCopy(&(uParam0->f_5), func_379(iVar1, 1), 64);
				}
				else
				{
					StringCopy(&(uParam0->f_5), aggregate_func_8490(Var4, 1, joaat("COLOR_PURE_WHITE")), 64);
				}
			}
			else
			{
				uParam0->f_5 = { Var4.f_1 };
			}
		}
		else if (bVar0 == 1)
		{
			StringCopy(&(uParam0->f_5), func_379(iVar1, 1), 64);
		}
		else
		{
			StringCopy(&(uParam0->f_5), aggregate_func_8490(Var4, 1, joaat("COLOR_PURE_WHITE")), 64);
		}
		if (aggregate_func_3096(Var4.f_19))
		{
			if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var4.f_19)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var4.f_19))))
			{
				StringCopy(&(uParam0->f_13), aggregate_func_1524(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var4.f_19))), joaat("COLOR_PURE_WHITE")), 128);
			}
			else
			{
				StringCopy(&(uParam0->f_13), aggregate_func_1524(func_1230(Var4), joaat("COLOR_PURE_WHITE")), 128);
			}
		}
		else
		{
			StringCopy(&(uParam0->f_13), "Invalid_grab", 128);
		}
		iVar130 = 0;
		while (iVar130 < 7)
		{
			*(uParam0->f_38[iVar130 /*7*/]) = { Var123 };
			iVar130++;
		}
		if ((_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1) && _NAMESPACE26::_0x0F99F6436528A089(uParam0->f_1)) && iVar3 == uParam0->f_2)
		{
			uParam0->f_36 = _NAMESPACE26::_0xD1BF325C8252A982(uParam0->f_1, &(uParam0->f_38));
			uParam0->f_37 = _NAMESPACE26::_0x853B0FA4D8732C57(uParam0->f_1);
		}
		else if (func_1233(uParam0->f_2))
		{
			if (((bVar0 && _NAMESPACE26::_0x424B17A7DC5C90BC(iVar1)) && _NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(iVar1))) && aggregate_func_1048(iVar1) == uParam0->f_2)
			{
				uParam0->f_36 = _NAMESPACE26::_0xD1BF325C8252A982(_NAMESPACE26::_0x901E0DC25080C8B9(iVar1), &(uParam0->f_38));
				uParam0->f_37 = _NAMESPACE26::_0x853B0FA4D8732C57(_NAMESPACE26::_0x901E0DC25080C8B9(iVar1));
			}
			else
			{
				uParam0->f_36 = 0;
				uParam0->f_37 = Var4.f_9.f_4;
			}
		}
		else if (func_1234(uParam0->f_2))
		{
			uParam0->f_36 = func_1235(uParam0->f_2);
			uParam0->f_37 = func_1236(uParam0->f_2);
		}
		else
		{
			uParam0->f_36 = 0;
			uParam0->f_37 = Var4.f_9.f_4;
		}
		uParam0->f_88 = Var4.f_9.f_4;
		uParam0->f_88.f_1 = Var4.f_9.f_5;
		uParam0->f_88.f_2 = Var4.f_9.f_6;
		if (bVar0)
		{
			uParam0->f_91 = aggregate_func_3504(iVar1);
		}
		else
		{
			uParam0->f_91 = func_1238(uParam0->f_2);
		}
		uParam0->f_92 = Var4.f_9.f_2;
		if (bVar2 && iVar3 == uParam0->f_2)
		{
			uParam0->f_92 = func_383() != 1;
		}
		uParam0->f_93 = Var4.f_9.f_1;
		uParam0->f_94 = func_1239(&Var4);
	}
	else
	{
		iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_1);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			return false;
		}
		if (aggregate_func_682(uParam0->f_1))
		{
			Var131.f_18 = 10;
			if (!func_1240(iVar1, &Var131))
			{
				return false;
			}
			StringCopy(&(uParam0->f_5), aggregate_func_693(uParam0->f_1, 1, 0), 64);
		}
		else
		{
			StringCopy(&(uParam0->f_5), aggregate_func_693(uParam0->f_1, 1, 0), 64);
		}
		_NAMESPACE26::_0xCE88A261DCBBA0D9(uParam0->f_1, &(uParam0->f_29));
		StringCopy(&(uParam0->f_13), aggregate_func_1524(aggregate_func_659(iVar1), joaat("COLOR_PURE_WHITE")), 128);
		uParam0->f_36 = _NAMESPACE26::_0xD1BF325C8252A982(uParam0->f_1, &(uParam0->f_38));
		uParam0->f_37 = _NAMESPACE26::_0x853B0FA4D8732C57(uParam0->f_1);
		if (bVar0)
		{
			uParam0->f_88 = { aggregate_func_5046(iVar1) };
		}
		if (bVar0)
		{
			uParam0->f_91 = aggregate_func_3504(iVar1);
		}
		else
		{
			uParam0->f_91 = func_1238(uParam0->f_2);
		}
		uParam0->f_92 = _NAMESPACE26::_0xFCF96CCBD81B24C8(uParam0->f_1);
		if (uParam0->f_1 == Global_1273882->f_15 && bVar2)
		{
			uParam0->f_92 = func_383() != 1;
		}
		uParam0->f_93 = aggregate_func_1846(uParam0->f_1);
		uParam0->f_94 = 0;
	}
	return true;
}

void func_614(float fParam0, int iParam1)
{
	if (func_35(0))
	{
		return;
	}
	if (func_929() != -1)
	{
		return;
	}
	Global_1896726->f_6.f_5 = fParam0;
	func_936(iParam1);
	func_935(1);
	func_36(0, 1);
	func_182(iParam1);
}

bool func_621(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1275117->f_3.f_132[iVar0 /*2*/] == iParam0 && (MISC::_GET_SYSTEM_TIME() - (Global_1275117->f_3.f_132[iVar0 /*2*/])->f_1) < 120000)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_622(var uParam0, int iParam1)
{
	var uVar0;

	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar0, iParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 16, &uVar0);
}

bool func_623(int iParam0, bool bParam1)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	return _NAMESPACE79::_0x49623BCFC3A3D829(iParam0, bParam1);
}

bool func_624(int iParam0, bool bParam1)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	return _NAMESPACE79::_0x49623BCFC3A3D829(iParam0, bParam1);
}

char* func_646(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "NM_PLAYER_REPORT_CHEATING_DESC";
			break;
		case 1:
			sVar0 = "NM_PLAYER_REPORT_ABUSIVE_DESC";
			break;
		case 2:
			sVar0 = "NM_PLAYER_REPORT_DISRUPTIVE_DESC";
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			sVar0 = "NM_PLAYER_REPORT_OFFENSIVE_DESC";
			break;
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

void func_647(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, char[4] cParam19, char* sParam20)
{
	func_32();
	Global_1939221->f_1433.f_7961 = aggregate_func_3122(&uParam0, cParam19, sParam20, 0, 0, 1);
}

bool func_648(var uParam0)
{
	int iVar0;

	if (func_1266(uParam0))
	{
		return false;
	}
	if (func_1267(uParam0))
	{
		return false;
	}
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1) && _NAMESPACE26::_0x0F99F6436528A089(uParam0->f_1))
	{
		if (_NAMESPACE26::_0x7933754F260B428A(_NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_1)) > 0)
		{
			return false;
		}
		if (uParam0->f_4 && !uParam0->f_3)
		{
			if (!func_1268(&(uParam0->f_29)))
			{
				return false;
			}
		}
	}
	else if (uParam0->f_3)
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam0->f_29));
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->f_29), &(Global_1273882->f_1)))
		{
			return true;
		}
		if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)))
		{
			if ((!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0) || !_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0))) || _NAMESPACE26::_0x7933754F260B428A(iVar0) > 0)
			{
				return false;
			}
		}
		else if (!func_650(uParam0->f_2))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_649(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;

	if (Global_1180694->f_1 != 0)
	{
		return true;
	}
	if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
	{
		if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			_NAMESPACE26::_0x0A04A07BC3074EDB(1);
		}
		else
		{
			_NAMESPACE26::_0x0A04A07BC3074EDB(0);
		}
	}
	aggregate_func_7301(iParam0);
	iVar0 = POSSE::_0xC088FF658B2E51DA();
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (&Global_1180694->f_501[iVar1 /*118*/] == iParam0)
		{
			Global_1180694->f_490 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	Global_1180694->f_14 = { (Global_1180694->f_501[Global_1180694->f_490 /*118*/])->f_19 };
	Global_1180694->f_14.f_7 = iParam0;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1180694->f_14)))
	{
		iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1180694->f_14));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			iVar3 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar2);
			Global_1180694->f_14.f_9 = iVar3;
		}
	}
	aggregate_func_6867(4);
	aggregate_func_4974(32);
	aggregate_func_7821(4);
	Var4 = { aggregate_func_3106() };
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((Global_1180694->f_501[iVar1 /*118*/])->f_19), &Var4) && iParam1 == 1)
	{
		aggregate_func_4974(16);
	}
	return true;
}

bool func_650(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1180694->f_28.f_22[iVar0 /*13*/] == iParam0 && iParam0 != 0)
		{
			return (((Global_1180694->f_28.f_22[iVar0 /*13*/])->f_1 && (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_2) && (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_3 < (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_4);
		}
		iVar0++;
	}
	return false;
}

bool func_651(var uParam0)
{
	if (Global_1180694->f_121.f_2 != 0)
	{
		return false;
	}
	aggregate_func_9175(1);
	Global_1180694->f_121 = uParam0;
	return true;
}

bool func_652(int iParam0)
{
	struct<7> Var0;
	struct<19> Var7;
	int iVar106;

	if (Global_1180694->f_1 == 6 || Global_1180694->f_1 == 7)
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)) && _NAMESPACE26::_0x7933754F260B428A(iParam0) > 0)
	{
		return false;
	}
	Var0 = { aggregate_func_2843(iParam0) };
	Var7.f_18 = 10;
	iVar106 = 0;
	while (iVar106 <= (POSSE::_0xC084FF658B2E61DA(&Var0) - 1))
	{
		if (POSSE::_0xC084FF658B2E71DA(&Var0, iVar106, &Var7))
		{
			if (Var7.f_9 == 1 && Var7 != 0)
			{
				if (aggregate_func_3706(Var7))
				{
					aggregate_func_7821(2);
					return func_649(Var7, 0);
				}
				else if (Var7.f_17 < 10)
				{
					Global_1180694->f_14 = { Var0 };
					Global_1180694->f_14.f_7 = Var7;
					Global_1180694->f_14.f_9 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
					aggregate_func_6867(6);
					aggregate_func_4974(32);
					aggregate_func_7821(2);
					if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
					{
						_NAMESPACE26::_0x0A04A07BC3074EDB(_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()));
					}
					return true;
				}
			}
		}
		iVar106++;
	}
	return false;
}

int func_688(int iParam0)
{
	if (Global_1572887->f_342.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887->f_248 >= 6 && Global_1572887->f_248 < 23)
	{
		return 0;
	}
	Global_1572887->f_342.f_4 = 4;
	Global_1572887->f_342.f_21 = iParam0;
	Global_1572887->f_342.f_5 = 18;
	Global_1572887->f_342.f_25 = 0;
	Global_1572887->f_342.f_26 = 0;
	NETWORK::_0xC505036A35AFD01B(true);
	return 1;
}

struct<4> func_689(var uParam0)
{
	struct<4> Var0;

	Var0 = DATABINDING::_DATABINDING_READ_DATA_INT(*uParam0);
	Var0.f_1 = DATABINDING::_DATABINDING_READ_DATA_INT(uParam0->f_1);
	Var0.f_2 = DATABINDING::_DATABINDING_READ_DATA_INT(uParam0->f_2);
	Var0.f_3 = DATABINDING::_DATABINDING_READ_DATA_INT(uParam0->f_3);
	return Var0;
}

bool func_692(struct<4> Param0, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;

	if (aggregate_func_8044(&Param0, 0, 1) && iParam5 == 2)
	{
		return false;
	}
	Var0 = { aggregate_func_4289() };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_11.f_200[iVar4 /*7*/], &Param0) && !INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_11.f_200[iVar4 /*7*/], &Var0))
		{
		}
		else
		{
			(Global_1268935->f_11.f_200[iVar4 /*7*/])->f_5 = Global_1273882->f_21 + 120;
			*(Global_1268935->f_11.f_200[iVar4 /*7*/]) = { Param0 };
			(Global_1268935->f_11.f_200[iVar4 /*7*/])->f_6 = iParam5;
			(Global_1268935->f_11.f_200[iVar4 /*7*/])->f_4 = iParam4;
			return true;
		}
		iVar4++;
	}
	return false;
}

int func_693(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5)
{
	if (!aggregate_func_4853(&uParam0, iParam4, 1, 0))
	{
		return 0;
	}
	aggregate_func_7392(Global_1903928, 2, bParam5);
	if (!aggregate_func_5203(Global_1903928))
	{
		return 0;
	}
	aggregate_func_1812(&uParam0, iParam4, bParam5);
	return 1;
}

int func_694(int iParam0)
{
	int iVar0;

	if (!aggregate_func_2535(iParam0, &iVar0))
	{
		return 0;
	}
	aggregate_func_8541(iVar0, 0, 100);
	aggregate_func_8541(iVar0, 1, 100);
	return 1;
}

bool func_699()
{
	if (aggregate_func_7011(34))
	{
		return true;
	}
	if (func_1328() != 1)
	{
		return true;
	}
	return false;
}

int func_701(int iParam0, int iParam1)
{
	if (aggregate_func_7011(34))
	{
		return 0;
	}
	if (func_699())
	{
		return 0;
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(iParam0))
	{
		return 0;
	}
	Global_1268935->f_897 = { *iParam0 };
	Global_1268935->f_897.f_4 = iParam1;
	aggregate_func_6952(34);
	return 1;
}

int func_706(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<4> Var1;

	if (aggregate_func_8044(&Param0, 0, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var1 = { aggregate_func_4289() };
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_11.f_200[iVar0 /*7*/], &Param0))
		{
			if ((Global_1268935->f_11.f_200[iVar0 /*7*/])->f_6 == 0)
			{
				return 0;
			}
		}
	else
	{
		}
		else if ((Global_1268935->f_11.f_200[iVar0 /*7*/])->f_6 == 0)
		{
		}
		else
		{
			if (iParam4 > (Global_1268935->f_11.f_200[iVar0 /*7*/])->f_5)
			{
				(Global_1268935->f_11.f_200[iVar0 /*7*/])->f_5 = iParam4;
			}
			*(Global_1268935->f_11.f_200[iVar0 /*7*/]) = { Param0 };
			(Global_1268935->f_11.f_200[iVar0 /*7*/])->f_6 = iParam5;
			(Global_1268935->f_11.f_200[iVar0 /*7*/])->f_4 = iParam6;
			return 1;
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_11.f_200[iVar0 /*7*/], &Var1))
		{
		}
		else
		{
			(Global_1268935->f_11.f_200[iVar0 /*7*/])->f_5 = iParam4;
			*(Global_1268935->f_11.f_200[iVar0 /*7*/]) = { Param0 };
			(Global_1268935->f_11.f_200[iVar0 /*7*/])->f_6 = iParam5;
			(Global_1268935->f_11.f_200[iVar0 /*7*/])->f_4 = iParam6;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_708(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				return 0;
			case 5:
				return 1;
			case 6:
				return 2;
			case 7:
				return 3;
			default:
				break;
		}
	}
	return -1;
}

struct<4> func_710(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	switch (iParam0)
	{
		case 0:
			iVar0 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
			break;
		case 2:
			iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((!DECORATOR::DECOR_EXIST_ON(iVar0, aggregate_func_8039()) || !DECORATOR::DECOR_EXIST_ON(iVar0, aggregate_func_8040())) || !DECORATOR::DECOR_EXIST_ON(iVar0, aggregate_func_8041())) || !DECORATOR::DECOR_EXIST_ON(iVar0, aggregate_func_8042()))
		{
			return aggregate_func_4289();
		}
		Var1 = DECORATOR::DECOR_GET_INT(iVar0, aggregate_func_8039());
		Var1.f_1 = DECORATOR::DECOR_GET_INT(iVar0, aggregate_func_8040());
		Var1.f_2 = DECORATOR::DECOR_GET_INT(iVar0, aggregate_func_8041());
		Var1.f_3 = DECORATOR::DECOR_GET_INT(iVar0, aggregate_func_8042());
		return Var1;
	}
	return aggregate_func_4289();
}

int func_714(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<4> Var1;

	if (aggregate_func_8044(&Param0, 2, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var1 = { aggregate_func_4289() };
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_513.f_125[iVar0 /*7*/], &Param0))
		{
			if ((Global_1268935->f_513.f_125[iVar0 /*7*/])->f_6 == 0)
			{
				return 0;
			}
		}
	else
	{
		}
		else if ((Global_1268935->f_513.f_125[iVar0 /*7*/])->f_6 == 0)
		{
		}
		else
		{
			if (iParam4 > (Global_1268935->f_513.f_125[iVar0 /*7*/])->f_5)
			{
				(Global_1268935->f_513.f_125[iVar0 /*7*/])->f_5 = iParam4;
			}
			*(Global_1268935->f_513.f_125[iVar0 /*7*/]) = { Param0 };
			(Global_1268935->f_513.f_125[iVar0 /*7*/])->f_6 = iParam5;
			(Global_1268935->f_513.f_125[iVar0 /*7*/])->f_4 = iParam6;
			return 1;
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_513.f_125[iVar0 /*7*/], &Var1))
		{
		}
		else
		{
			(Global_1268935->f_513.f_125[iVar0 /*7*/])->f_5 = iParam4;
			*(Global_1268935->f_513.f_125[iVar0 /*7*/]) = { Param0 };
			(Global_1268935->f_513.f_125[iVar0 /*7*/])->f_6 = iParam5;
			(Global_1268935->f_513.f_125[iVar0 /*7*/])->f_4 = iParam6;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_717(var uParam0, int iParam1, bool bParam2)
{
	struct<10> Var0;
	int iVar14;

	Var0.f_9 = -1591664384;
	if (!aggregate_func_4272(*uParam0, &Var0, bParam2, 0, -1))
	{
		return 0;
	}
	iVar14 = aggregate_func_4836(iParam1, 2);
	if (!aggregate_func_8594(iVar14))
	{
		return 0;
	}
	*(Global_17173.f_54.f_61[iVar14 /*4*/]) = { *uParam0 };
	return 1;
}

void func_730(struct<7> Param0, char* sParam7)
{
	struct<88> Var0;
	int iVar88;
	int iVar89;
	bool bVar90;
	int iVar91;
	int iVar92;

	if (!aggregate_func_3096(Param0))
	{
		return;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_21 = 1;
	Var0.f_86 = 255;
	Var0.f_87 = -2147483647;
	iVar88 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Param0);
	iVar89 = iVar88;
	bVar90 = func_1344(&Param0) == false;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		if (NETWORK::_0x255A5EF65EDA9167(iVar88) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar88))
		{
			StringCopy(&(Var0.f_25), aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iVar88), joaat("COLOR_PURE_WHITE")), 128);
		}
	}
	else
	{
		StringCopy(&(Var0.f_25), sParam7, 128);
	}
	if (bVar90)
	{
		Var0.f_2 = aggregate_func_752(iVar88, 1, -1, 0);
	}
	else
	{
		Var0.f_2 = joaat("COLOR_WHITE");
	}
	Var0.f_21 = 1;
	Var0.f_20 = 1292500213;
	Var0.f_19 = joaat("overhead");
	if (bVar90)
	{
		if (_NAMESPACE79::_0x0DED260A1958A82E(iVar88))
		{
			Var0.f_20 = -2020914324;
		}
		else if (_NAMESPACE79::_0xAA35FD9ABAB490A3(iVar88) && _NAMESPACE79::_0xEF6F2A35FAAF2ED7(iVar88))
		{
			Var0.f_20 = -129728325;
		}
		else
		{
			iVar91 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar88);
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar91))
			{
				if (aggregate_func_682(iVar91))
				{
					if (func_1345(iVar88, &iVar92))
					{
						switch (iVar92)
						{
							case joaat("leader"):
								Var0.f_20 = 202246788;
								break;
						}
					}
				}
				else if (_NAMESPACE26::_0x0F99F6436528A089(iVar91) && _NAMESPACE26::_0x424B17A7DC5C90BC(iVar88))
				{
					Var0.f_20 = 202246788;
				}
			}
		}
	}
	if (bVar90)
	{
		Var0.f_61 = 1;
		Var0.f_59 = -1693157378;
		Var0.f_60 = -1120556042;
		Var0.f_57 = 1;
		StringCopy(&(Var0.f_41), aggregate_func_3329(iVar89), 128);
	}
	else
	{
		Var0.f_61 = 0;
		Var0.f_57 = 0;
	}
	func_1347(&(Global_1939221->f_1433.f_54.f_7), Var0);
}

void func_731()
{
	switch (aggregate_func_7672())
	{
		case -1537476917:
			func_253();
			break;
	}
}

int func_734()
{
	if (func_1348(1))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(319332586))
	{
		return 0;
	}
	if (aggregate_func_4240(Global_1130954->f_137.f_1, 2))
	{
		if (!aggregate_func_7654(2))
		{
			return 0;
		}
	}
	return 1;
}

bool func_735()
{
	if (func_1348(2))
	{
		return false;
	}
	if (aggregate_func_4240(Global_1130954->f_137.f_1, 2))
	{
		if (!aggregate_func_4240(Global_1130954->f_145, 2))
		{
			return false;
		}
	}
	return true;
}

int func_736()
{
	if (func_1348(8))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(2032476253))
	{
		return 0;
	}
	return 1;
}

int func_737()
{
	if (func_1348(16))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(199773012))
	{
		return 0;
	}
	return 1;
}

int func_738()
{
	if (func_1348(32))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(56612678))
	{
		return 0;
	}
	if (aggregate_func_4258())
	{
		return 0;
	}
	if (aggregate_func_6688())
	{
		return 0;
	}
	return 1;
}

int func_739()
{
	if (func_1348(4))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-722216913))
	{
		return 0;
	}
	if (Global_1939221->f_242.f_1186 < 1)
	{
		return 0;
	}
	return 1;
}

void func_740()
{
	Global_1939221->f_1433.f_54 = 0;
}

void func_741(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 8:
			func_1349();
			break;
	}
}

bool func_742()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (((*Global_1213462)[iVar0 /*303*/])->f_300 & 1 == 0)
		{
		}
		else if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1212887->f_573), iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar1 == iVar2)
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (_NAMESPACE26::_0x3F59FE6F37869576(iVar1, iVar2))
			{
			}
			else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar2), false, false), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false, false)) > (Global_1901929->f_160.f_23 * ((*Global_1137800)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*34*/])->f_33))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_743()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 0;
	while (iVar0 <= (Global_1939221->f_242.f_1186 - 1))
	{
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939221->f_242.f_14[iVar0 /*39*/])->f_26);
		if (!func_1350(iVar1))
		{
		}
		else
		{
			sVar2 = func_1351(iVar1, iVar0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				bVar3 = MISC::GET_HASH_KEY(sVar2);
				bVar4 = bVar3;
			}
			else
			{
				bVar3 = 1700592256;
				bVar4 = 1434360011;
			}
			if (DATABINDING::_0x81D7183E7A8ECA72((Global_1939221->f_242.f_14[iVar0 /*39*/])->f_22) != bVar3)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_242.f_14[iVar0 /*39*/])->f_22, bVar3);
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_242.f_14[iVar0 /*39*/])->f_23, bVar4);
			}
		}
		iVar0++;
	}
}

void func_745(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<95> Var6;
	bool bVar101;

	bVar0 = true;
	bVar1 = aggregate_func_7191();
	bVar2 = aggregate_func_7100(16);
	bVar3 = func_805();
	bVar4 = aggregate_func_4934();
	bVar5 = UNLOCK::_UNLOCK_IS_UNLOCKED(-2019230505);
	if ((((bVar1 && bVar2 == 0) || bVar3) || bVar4) || bVar5 == 0)
	{
		bVar0 = false;
		if (bVar1 && bVar2 == 0)
		{
		}
		if (bVar3)
		{
		}
		if (bVar4)
		{
		}
		if (bVar5 == 0)
		{
		}
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_156.f_192) != bVar0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_156.f_192, bVar0);
	}
	switch (iParam0)
	{
		case 15:
			if (func_589())
			{
				UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(1433015236, -303450633);
			}
			break;
		case 13:
			if (func_1225() == 0 && POSSE::_0xC088FF658B2E51DA() == 0)
			{
				UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(1433015236, 1243396847);
			}
			break;
		case 16:
			Var6.f_38 = 7;
			Var6.f_91 = -1;
			Var6 = { func_183(1) };
			bVar101 = false;
			if (func_212(&Var6))
			{
				if (!aggregate_func_4287(&Var6))
				{
					if (!func_757(&Var6))
					{
						bVar101 = true;
					}
				}
			}
			else
			{
				bVar101 = true;
			}
			if (bVar101)
			{
				func_168(0, 0);
			}
			break;
	}
}

bool func_746(int iParam0)
{
	if (Global_1939221->f_1433.f_2 != -1 && Global_1939221->f_1433.f_2 != iParam0)
	{
		return true;
	}
	return false;
}

void func_747(var uParam0)
{
	var uVar0;
	int iVar7;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 64);
	StringCopy(&(uParam0->f_13), "", 128);
	uParam0->f_36 = 0;
	uParam0->f_37 = 0;
	uParam0->f_88 = 0;
	uParam0->f_88.f_2 = 0;
	uParam0->f_91 = -1;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	MISC::_COPY_MEMORY(&(uParam0->f_29), &uVar0, 7);
	iVar7 = 0;
	while (iVar7 < 7)
	{
		MISC::_COPY_MEMORY(uParam0->f_38[iVar7 /*7*/], &uVar0, 7);
		iVar7++;
	}
}

bool func_748(bool bParam0, var uParam1)
{
	if (bParam0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_156.f_1))
	{
		if (!func_1354(-1, uParam1, 0))
		{
			return false;
		}
	}
	if (!func_1355(bParam0, uParam1, 0))
	{
		return false;
	}
	if (aggregate_func_7672() == bParam0)
	{
		func_89(uParam1);
	}
	return true;
}

bool func_749(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= POSSE::_0xC088FF658B2E51DA())
	{
		*iParam1 = { *(Global_1180694->f_501[iParam0 /*118*/]) };
		return true;
	}
	return false;
}

int func_752(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 57)
	{
		return 0;
	}
	return (Global_1896726->f_3715[iVar0 /*4*/])->f_1;
}

struct<95> func_753(bool bParam0)
{
	if (bParam0)
	{
		func_612(&(Global_1939221->f_1433.f_156.f_97));
	}
	return Global_1939221->f_1433.f_156.f_97;
}

char* func_754(var uParam0)
{
	char* sVar0;

	if (*uParam0)
	{
		if (Global_1273882->f_15 == uParam0->f_1)
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->f_29), &(Global_1273882->f_1)))
			{
				sVar0 = "NM_MW_POSSE_JOIN_LEADER_FOOTER";
			}
			else
			{
				sVar0 = "NM_MW_POSSE_JOIN_MEMBER_FOOTER";
			}
		}
		else if (uParam0->f_36 >= uParam0->f_37)
		{
			sVar0 = "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER";
		}
		else if (uParam0->f_4 && func_1357(uParam0->f_2))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->f_29), &(Global_1273882->f_1)))
			{
				sVar0 = "NM_MW_POSSE_PERS_LEADER";
			}
			else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)) && func_1234(uParam0->f_2))
			{
				sVar0 = "NM_MW_POSSE_PERS_MEMB_JOIN_SESS";
			}
			else if (aggregate_func_1048(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam0->f_29))) == uParam0->f_2)
			{
				sVar0 = "NM_MW_POSSE_PERS_MEMB_JOINABLE";
			}
			else
			{
				sVar0 = "NM_MW_POSSE_PERS_MEMB_BLOCK";
			}
		}
		else if (uParam0->f_4 && POSSE::_0xC088FF658B2E51DA() >= 5)
		{
			sVar0 = "NM_GC_REQ_MAX_MEMBERSHIP";
		}
		else if (!aggregate_func_4287(uParam0))
		{
			sVar0 = "NM_MW_POSSE_JOIN_BLOCKED_PRIVACY_FOOTER";
		}
		else if (uParam0->f_88.f_1 != 0)
		{
			return MISC::_CREATE_VAR_STRING(10, "NM_MW_POSSE_CAMP_FOOTER", MISC::_CREATE_VAR_STRING(2, aggregate_func_7748(uParam0->f_88.f_1, 1)));
		}
		else
		{
			sVar0 = "NM_MW_POSSE_CAMP_NONE_FOOTER";
		}
	}
	else
	{
		sVar0 = "NM_MW_POSSE_ENTRY_FOOTER";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

int func_755(var uParam0, struct<39> Param1, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95)
{
	int iVar0;
	struct<4> Var1;
	char cVar5[128];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;

	if (!func_212(&Param1))
	{
		return 0;
	}
	iVar0 = aggregate_func_4249(&Param1);
	Var1 = 1;
	Var1.f_1 = 1;
	iVar23 = 0;
	while (iVar23 < 7)
	{
		Var1.f_2 = joaat("hud_textures");
		Var1.f_3 = 1178498246;
		Var1.f_1 = 0;
		Var1 = 0;
		if (iVar23 < iVar0)
		{
			Var1.f_1 = 1;
			if (aggregate_func_3096(*(Param1.f_38[iVar23 /*7*/])))
			{
				iVar22++;
				StringCopy(&cVar5, "", 128);
				if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(Param1.f_38[iVar23 /*7*/]))
				{
					iVar25 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Param1.f_38[iVar23 /*7*/]);
					if (NETWORK::_0x255A5EF65EDA9167(iVar25))
					{
						iVar24 = aggregate_func_347(&cVar5, iVar25, 1);
						switch (iVar24)
						{
							case 1:
							case 3:
								(uParam0->f_3[iVar23 /*6*/])->f_5 = 0;
								break;
							case 4:
								(uParam0->f_3[iVar23 /*6*/])->f_5 = 0;
								break;
							case 0:
							case 2:
								if (!(uParam0->f_3[iVar23 /*6*/])->f_5)
								{
									aggregate_func_3715(iVar25);
									(uParam0->f_3[iVar23 /*6*/])->f_5 = 1;
								}
								break;
						}
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar5))
				{
					Var1 = 1;
					Var1.f_3 = MISC::GET_HASH_KEY(&cVar5);
					Var1.f_2 = Var1.f_3;
					iVar21++;
				}
			}
		}
		func_1361(uParam0->f_3[iVar23 /*6*/], Var1);
		iVar23++;
	}
	if (iVar21 != iVar22)
	{
		return 0;
	}
	return 1;
}

bool func_756(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95)
{
	struct<66> Var0;
	int iVar66;

	if (!func_212(&Param1))
	{
		return false;
	}
	Var0 = 1;
	if (aggregate_func_3064(_NAMESPACE26::_0x4BE6C13A45CCA8EC(Param1.f_1), 0, 1))
	{
		StringCopy(&(Var0.f_1), MISC::_CREATE_VAR_STRING(10, "NM_POSSE_DEFENSIVE_LEADER", aggregate_func_9308(&Param1)), 128);
	}
	else
	{
		StringCopy(&(Var0.f_1), aggregate_func_9308(&Param1), 128);
	}
	if (func_1364(aggregate_func_4249(&Param1)))
	{
		StringCopy(&(Var0.f_50), "NM_HONOR_GOOD", 128);
	}
	else
	{
		StringCopy(&(Var0.f_50), "NM_HONOR_BAD", 128);
	}
	if (aggregate_func_4287(&Param1))
	{
		StringCopy(&(Var0.f_34), "NM_MW_POSSE_TYPE_PERSISTENT", 128);
	}
	else
	{
		StringCopy(&(Var0.f_34), "NM_MW_POSSE_TYPE_TEMPORARY", 128);
	}
	iVar66 = func_1365(&Param1);
	if (iVar66 == 0)
	{
		StringCopy(&(Var0.f_17), "HOSTILITY_NLOW", 128);
		Var0.f_33 = joaat("COLOR_WHITE");
	}
	else if (iVar66 == 1)
	{
		StringCopy(&(Var0.f_17), "HOSTILITY_NMED", 128);
		Var0.f_33 = joaat("COLOR_WHITE");
	}
	else
	{
		StringCopy(&(Var0.f_17), "HOSTILITY_NHIGH", 128);
		Var0.f_33 = joaat("COLOR_RED");
	}
	func_1366(uParam0, Var0, 0);
	return true;
}

bool func_757(var uParam0)
{
	int iVar0;

	if (uParam0->f_3)
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		if (iVar0 != uParam0->f_2)
		{
			return false;
		}
	}
	else
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1))
		{
			return false;
		}
		if (!_NAMESPACE26::_0x0F99F6436528A089(uParam0->f_1))
		{
			return false;
		}
	}
	return true;
}

void func_758()
{
	int iVar0;

	if (Global_1896726->f_393.f_2691 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_1367(Global_1896726->f_393.f_2[iVar0 /*84*/]);
		iVar0++;
	}
	Global_1896726->f_393.f_2691 = 0;
}

void func_759(var uParam0)
{
	bool bVar0;
	struct<28> Var1;
	bool bVar119;
	int iVar120;
	var uVar121;
	int iVar128;
	int iVar129;
	bool bVar130;
	int iVar131;
	int iVar132;

	switch (Global_1896726->f_209)
	{
		case 0:
			bVar0 = true;
			if (!func_212(uParam0))
			{
				bVar0 = false;
			}
			if (!aggregate_func_4287(uParam0))
			{
				bVar0 = false;
			}
			Var1.f_27 = 10;
			if (!POSSE::_0xC087FF658B2E51DA(uParam0->f_2, &Var1))
			{
				bVar0 = false;
			}
			if (!bVar0)
			{
				if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1896726->f_393.f_1) != 0)
				{
					DATABINDING::_0x3BF0767CF33FCC88(Global_1896726->f_393.f_1);
				}
				return;
			}
			bVar119 = false;
			if (Global_1896726->f_209.f_154 != Var1.f_26)
			{
				bVar119 = true;
			}
			if (!bVar119)
			{
				iVar120 = 0;
				while (iVar120 < Var1.f_26)
				{
					if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Var1.f_27[iVar120 /*9*/], Global_1896726->f_209.f_2[iVar120 /*7*/]))
					{
						bVar119 = true;
					}
					else
					{
						iVar120++;
					}
				}
			}
			Global_1896726->f_209.f_154 = Var1.f_26;
			iVar128 = 0;
			while (iVar128 < 10)
			{
				if (NETWORK::NETWORK_IS_HANDLE_VALID(Var1.f_27[iVar128 /*9*/]))
				{
					MISC::_COPY_MEMORY(Global_1896726->f_209.f_2[iVar128 /*7*/], Var1.f_27[iVar128 /*9*/], 7);
				}
				else
				{
					MISC::_COPY_MEMORY(Global_1896726->f_209.f_2[iVar128 /*7*/], &uVar121, 7);
				}
				iVar128++;
			}
			if (bVar119)
			{
				Global_1896726->f_209.f_155 = 0;
				Global_1896726->f_209.f_1 = -1;
				aggregate_func_5470(1);
			}
			else if (Global_1896726->f_209.f_155)
			{
				aggregate_func_5470(3);
				func_47(1);
			}
			else
			{
				Global_1896726->f_209.f_1 = -1;
				aggregate_func_5470(1);
			}
			break;
		case 4:
			aggregate_func_5470(0);
			break;
		case 1:
			if (Global_1896726->f_209.f_154 <= 0)
			{
				aggregate_func_5470(4);
				return;
			}
			if (Global_1896726->f_209.f_1 < 0)
			{
				if (MISC::IS_PC_VERSION() || MISC::_IS_STADIA_VERSION())
				{
					iVar129 = 0;
					while (iVar129 <= (Global_1896726->f_209.f_154 - 1))
					{
						if (!NETWORK::_0x7FEE4F07C54B6B3C(Global_1896726->f_209.f_2[iVar129 /*7*/], Global_1896726->f_209.f_73[iVar129 /*8*/]))
						{
							aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "FRIENDS_LIST_CONSENT_TOOLTIP"), joaat("COLOR_WHITE"));
						}
						iVar129++;
					}
					aggregate_func_5470(3);
					Global_1896726->f_209.f_155 = 1;
					func_47(1);
					return;
				}
				else
				{
					Global_1896726->f_209.f_1 = NETWORK::_0xD66C9E72B3CC4982(&(Global_1896726->f_209.f_2), Global_1896726->f_209.f_154);
				}
				if (Global_1896726->f_209.f_1 < 0)
				{
					aggregate_func_5470(4);
					return;
				}
			}
			switch (NETWORK::_0x58CC181719256197(Global_1896726->f_209.f_1, &(Global_1896726->f_209.f_73), Global_1896726->f_209.f_154))
			{
				case -1:
					aggregate_func_5470(4);
					break;
				case 0:
					aggregate_func_5470(3);
					Global_1896726->f_209.f_155 = 1;
					func_47(1);
					break;
				case 1:
					break;
			}
			break;
		case 3:
			if (func_894())
			{
				if (func_1368() == 1)
				{
					func_899();
					func_47(1);
				}
				return;
			}
			if (!aggregate_func_6547())
			{
				bVar130 = false;
				if (!aggregate_func_4260(&(Global_1896726->f_209.f_156)))
				{
					aggregate_func_4293(&(Global_1896726->f_209.f_156), 0);
				}
				if (aggregate_func_4850(&(Global_1896726->f_209.f_156)) >= 5f)
				{
					bVar130 = true;
				}
				if (bVar130)
				{
					aggregate_func_4313(&(Global_1896726->f_209.f_156));
					aggregate_func_5470(0);
					return;
				}
				return;
			}
			if (func_42() != 1)
			{
				return;
			}
			iVar131 = 0;
			func_758();
			iVar132 = 0;
			while (iVar132 < Global_1896726->f_209.f_154)
			{
				if (!aggregate_func_3096(*(Global_1896726->f_209.f_2[iVar132 /*7*/])))
				{
				}
				else if (!func_851(Global_1896726->f_209.f_2[iVar132 /*7*/], Global_1896726->f_209.f_73[iVar132 /*8*/], 0, 6))
				{
				}
				else
				{
					iVar131++;
				}
				iVar132++;
			}
			iVar132 = iVar131;
			while (iVar132 <= 9)
			{
				if (!func_1370(6))
				{
				}
				iVar132++;
			}
			break;
	}
}

void func_760(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 173341;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173462;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173842;
			uParam0->f_11++;
			uParam0->f_12 = 173973;
			uParam0->f_13 = 1;
			break;
		case -1419617212:
			(*uParam0)[uParam0->f_11] = 174072;
			uParam0->f_11++;
			uParam0->f_12 = 173973;
			uParam0->f_13 = 1;
			break;
		case 791621612:
			uParam0->f_12 = 173973;
			uParam0->f_13 = 1;
			break;
	}
}

void func_761(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;
	int iVar11;
	int iVar12;
	bool bVar13;

	if (!func_212(uParam0))
	{
		return;
	}
	iVar0 = aggregate_func_4249(uParam0);
	iVar1 = aggregate_func_4249(uParam0);
	iVar2 = func_1378(uParam0);
	func_758();
	iVar11 = 0;
	while (iVar11 < iVar2)
	{
		iVar3 = 255;
		if (iVar11 < iVar0)
		{
			if (!func_1379(uParam0, iVar11, &Var4))
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var4);
				if (!func_851(&Var4, PLAYER::GET_PLAYER_NAME(iVar3), 0, 5))
				{
				}
				else
				{
					if (func_1380(uParam0, Var4))
					{
						if (iVar11 != 0)
						{
							func_1381(0, (func_887() - 1));
						}
					}
					Jump @188; //curOff = 144
					if (iVar11 < iVar1)
					{
						if (!func_1370(5))
						{
						}
						else
						{
							Jump @188; //curOff = 166
							if (iVar11 < iVar2)
							{
								if (!func_1382(5))
								{
								}
							}
						}
						iVar11++;
						iVar12 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&((Global_1896726->f_393.f_2[aggregate_func_7672() /*84*/])->f_1));
						bVar13 = false;
						if (func_1383(&(Global_1939221->f_1433.f_156.f_196.f_3), *uParam0, iVar12))
						{
							bVar13 = true;
						}
						aggregate_func_2631(&(Global_1939221->f_1433.f_156.f_196.f_3), bVar13);
					}
				}
			}
		}
	}
}

void func_763(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 173341;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173462;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173842;
			uParam0->f_11++;
			uParam0->f_12 = 173973;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			break;
	}
}

void func_764(var uParam0)
{
	struct<14> Var0;
	int iVar14;
	struct<7> Var15;
	struct<88> Var22;
	struct<30> Var110;
	char cVar194[128];
	bool bVar210;
	int iVar211;
	int iVar212;

	Var0 = 10;
	Var22 = 1;
	Var22.f_1 = 1;
	Var22.f_2 = joaat("COLOR_WHITE");
	Var22.f_4 = -1;
	Var22.f_5 = -1;
	Var22.f_6 = -1;
	Var22.f_10 = -1;
	Var22.f_11 = -1;
	Var22.f_12 = -1;
	Var22.f_21 = 1;
	Var22.f_86 = 255;
	Var22.f_87 = -2147483647;
	Var110.f_27 = -1;
	Var110.f_28 = -1;
	StringCopy(&cVar194, "", 128);
	bVar210 = false;
	iVar211 = func_887();
	iVar212 = 0;
	while (iVar212 < iVar211)
	{
		func_1384(&Var22);
		if (!func_888(iVar212, &Var110))
		{
		}
		else if (!func_1385(&Var110))
		{
		}
		else
		{
			Var110.f_26 = uParam0->f_1 == bVar210;
			if (func_1386(&Var110))
			{
				aggregate_func_4252(&Var110, 0);
			}
			if (iVar211 >= func_1388())
			{
				aggregate_func_4252(&Var110, 0);
			}
			if (!aggregate_func_5306(&Var110))
			{
				if (!func_1390(&Var22, Var110.f_27, Var110.f_28))
				{
				}
				aggregate_func_4266(&Var110, -1);
				aggregate_func_4252(&Var110, 1);
			}
			if (!func_1392(&Var22, &Var110, 0))
			{
			}
			Stack.Push(&Var0);
			Stack.Push(Var110.f_27);
			Call_Loc(*uParam0);
			iVar14 = 0;
			while (iVar14 < Var0.f_11)
			{
				Stack.Push(&Var22);
				Stack.Push(&Var110);
				Stack.Push(0);
				Call_Loc(&Var0[iVar14]);
				iVar14++;
			}
			if (!func_1393(bVar210, &Var22, &(Var110.f_29), Var110.f_25))
			{
			}
			aggregate_func_4285(&Var110);
			func_1395(iVar212, &Var110);
			if (Var110.f_26)
			{
				Var15 = { func_196() };
				if (NETWORK::NETWORK_IS_HANDLE_VALID(&Var15) && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var15, &(Var110.f_1)))
				{
					func_461(Var110.f_1, &(Var110.f_8));
				}
				if (Var0.f_13)
				{
					Stack.Push(&Var110);
					Stack.Push(&cVar194);
					Call_Loc(Var0.f_12);
				}
			}
			bVar210++;
		}
		iVar212++;
	}
	if (iVar211 == 0)
	{
		func_1396(uParam0->f_2, &cVar194);
	}
	aggregate_func_1791(&cVar194, joaat("COLOR_WHITE"));
	func_1397(bVar210);
}

void func_765()
{
	if (!func_1398())
	{
		return;
	}
	if (func_1129() == 1)
	{
		func_16();
		func_54();
		func_380(func_1399(), 0);
		func_377(func_1399());
	}
}

int func_766()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (func_1400() > 0)
	{
		switch (func_897())
		{
			case 2:
				func_1401();
				break;
		}
	}
	switch (func_1400())
	{
		case 0:
			if (func_607())
			{
				func_614(((25f + 25f) + 10f), 7);
				func_1402(1);
			}
			return 0;
		case 1:
			func_1402(2);
			break;
		case 2:
			bVar0 = false;
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) && _NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
			{
				bVar0 = true;
			}
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_1402(3);
			}
			else
			{
				func_1402(5);
			}
			break;
		case 3:
			aggregate_func_346(1);
			func_1402(4);
			break;
		case 4:
			if (!aggregate_func_4260(&(Global_1896726->f_13)))
			{
				aggregate_func_4293(&(Global_1896726->f_13), 0);
			}
			if (func_923(&bVar2, 1))
			{
				if (bVar2)
				{
					func_1402(5);
				}
				else
				{
					func_1402(11);
				}
				else
				{
					Jump @338; //curOff = 307
					if (aggregate_func_4298(&(Global_1896726->f_13)) >= 25f)
					{
						func_1402(11);
					}
					else
					{
						Jump @927; //curOff = 338
						if (Global_1896726->f_13.f_37)
						{
							if (!func_1403(Global_1896726->f_13.f_37.f_1, Global_1896726->f_13.f_37.f_2, aggregate_func_1966(Global_1896726->f_13.f_37.f_5), aggregate_func_8052(Global_1896726->f_13.f_8)))
							{
								func_1402(11);
							}
							else
							{
								Jump @445; //curOff = 418
								func_1404(Global_1896726->f_13.f_37.f_1, Global_1896726->f_13.f_37.f_2);
								func_1402(6);
								Jump @927; //curOff = 450
								if (func_927(&bVar3, 1))
								{
									if (bVar3)
									{
										func_1402(7);
									}
									else
									{
										func_1402(11);
									}
									else
									{
										Jump @927; //curOff = 485
										bVar4 = aggregate_func_572(1, 0);
										if ((!aggregate_func_1746(&(Global_1273882->f_154[&Global_1273882]), 0) && !bVar4) || (!aggregate_func_2555(Global_1896726->f_13.f_7, aggregate_func_8052(Global_1896726->f_13.f_8)) && !bVar4))
										{
											func_1402(11);
										}
										else
										{
											if ((_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) && _NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15)) && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
											{
												func_1402(5);
											}
											else if (aggregate_func_1746(&(Global_1273882->f_154[&Global_1273882]), 0))
											{
												if (aggregate_func_2555(Global_1896726->f_13.f_7, aggregate_func_8052(Global_1896726->f_13.f_8)))
												{
													func_1402(10);
												}
												else
												{
													func_1402(8);
												}
											}
											else
											{
												func_1402(8);
											}
											Jump @927; //curOff = 694
											if (aggregate_func_9199(Global_1896726->f_13.f_37.f_3, Global_1896726->f_13.f_37.f_4, 1, 0))
											{
												aggregate_func_3090(512);
												func_1402(9);
											}
											else
											{
												func_1402(11);
											}
											else
											{
												Jump @927; //curOff = 751
												if (!aggregate_func_4260(&(Global_1896726->f_13)))
												{
													aggregate_func_4293(&(Global_1896726->f_13), 0);
												}
												if (aggregate_func_4298(&(Global_1896726->f_13)) < 25f)
												{
													if (aggregate_func_1746(&(Global_1273882->f_154[&Global_1273882]), 0))
													{
														if (!aggregate_func_2555(Global_1896726->f_13.f_7, aggregate_func_8052(Global_1896726->f_13.f_8)))
														{
															return 1;
														}
													}
													else
													{
														return 1;
													}
												}
												else
												{
													func_1402(11);
												}
												else
												{
													func_1402(10);
													Jump @927; //curOff = 875
													func_970();
													func_16();
													func_1402(0);
													return 2;
													Jump @927; //curOff = 895
													func_970();
													func_16();
													func_1402(0);
													aggregate_func_3537("NM_GC_POSSE_CREATE_FAIL");
													return 3;
												}
											}
										}
									}
									return 1;
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

bool func_767()
{
	return Global_1896726->f_13.f_26;
}

int func_769()
{
	return Global_1896726->f_13.f_9;
}

int func_771(bool bParam0, bool bParam1)
{
	int iVar0;

	if (aggregate_func_7670())
	{
		func_1406("NM_GC_REQ_POSSE_CREATE_LOCKED", joaat("COLOR_RED"));
		return 0;
	}
	if (!func_175())
	{
		func_1406("NM_GC_REQ_NO_CAMP", joaat("COLOR_RED"));
		return 0;
	}
	if (!aggregate_func_4574(bParam1))
	{
		func_1406("NM_GC_REQ_NO_COST", joaat("COLOR_RED"));
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-2019230505))
	{
		func_1406("NM_GC_REQ_POSSE_CREATE_LOCKED", joaat("COLOR_RED"));
		return 0;
	}
	if (!aggregate_func_2820())
	{
		func_1406("NM_GC_REQ_POSSE_CREATE_LOCKED", joaat("COLOR_RED"));
		return 0;
	}
	if (bParam0)
	{
		if (Global_1180694->f_500 != 0 && (MISC::GET_GAME_TIMER() - Global_1180694->f_500) < 15000)
		{
			func_1406("NM_GC_REQ_POSSE_CREATE_COOLDOWN", joaat("COLOR_RED"));
			return 0;
		}
		iVar0 = POSSE::_0xC088FF658B2E51DA();
		if (iVar0 >= 5)
		{
			func_1406("NM_GC_REQ_MAX_MEMBERSHIP", joaat("COLOR_RED"));
			return 0;
		}
	}
	if (bParam0)
	{
		func_1406("NM_GC_CREATE_PERSISTENT", joaat("COLOR_WHITE"));
	}
	else
	{
		func_1406("NM_GC_CREATE_TEMPORARY", joaat("COLOR_WHITE"));
	}
	return 1;
}

char[] func_773(bool bParam0)
{
	*bParam0 = Global_1896726->f_13.f_36;
	return aggregate_func_4984(&(Global_1896726->f_13.f_28));
}

bool func_774()
{
	return Global_1896726->f_191.f_1 != 0;
}

int func_775()
{
	return Global_1896726->f_191.f_2;
}

int func_776()
{
	return Global_1896726->f_191.f_1;
}

void func_777(int iParam0)
{
	Global_1939221->f_1433.f_8769.f_245 = 1;
	Global_1939221->f_1433.f_8769.f_247 = iParam0;
	Global_1939221->f_1433.f_8769.f_246 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

int func_778()
{
	return Global_1939221->f_1433.f_156.f_205.f_2;
}

int func_779()
{
	return Global_1939221->f_1433.f_8769.f_4;
}

void func_781(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (Global_1939221->f_1433.f_8769.f_241)
	{
		return;
	}
	if (bParam3)
	{
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_1))
		{
		}
		else
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(*uParam0, "");
			}
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, sParam1);
		}
	}
	else if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
	}
	else
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, "");
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(*uParam0, sParam1);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_2, bParam2);
	}
	Global_1939221->f_1433.f_8769.f_241 = 1;
	Global_1939221->f_1433.f_8769.f_240 = 0;
}

void func_782(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	char* sVar8;
	char* sVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;

	if (!func_212(uParam0))
	{
		return;
	}
	bVar0 = aggregate_func_4287(uParam0);
	bVar1 = func_757(uParam0);
	bVar2 = func_967(uParam0);
	bVar3 = func_1410(uParam0);
	bVar4 = aggregate_func_4287(uParam0);
	bVar5 = aggregate_func_7100(16);
	bVar6 = (((aggregate_func_4258() || aggregate_func_6688()) || (aggregate_func_1135(0, 0, 1) && bVar5 == 0)) || func_805());
	bVar7 = aggregate_func_7670();
	if (bVar0 && !bVar1)
	{
		bVar2 = false;
	}
	sVar8 = "";
	sVar9 = "";
	iVar15 = 8;
	iVar10 = 0;
	while (iVar10 < iVar15)
	{
		iVar13 = iVar10;
		func_1412(iVar13, &iVar16);
		iVar14 = iVar16;
		bVar11 = false;
		bVar12 = false;
		switch (iVar13)
		{
			case 0:
				bVar11 = (!bVar0 && !bVar2);
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (!func_1413(uParam0))
					{
						if (_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1) && _NAMESPACE26::_0x7933754F260B428A(_NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_1)) > 0)
						{
							sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_KICKED_FOOTER");
						}
						else if (func_1267(uParam0))
						{
							sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_JOIN_LOCK");
						}
						else if (func_1266(uParam0))
						{
							sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER");
						}
						else if (POSSE::_0xC088FF658B2E51DA() >= 5 && aggregate_func_4287(uParam0))
						{
							sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_GC_REQ_MAX_MEMBERSHIP");
						}
						else if (aggregate_func_4287(uParam0) && !func_1268(&(uParam0->f_29)))
						{
							sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_GC_REQ_TOO_MANY_P_MEMBERS");
						}
						else
						{
							sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_BLOCKED_FOOTER");
						}
					}
					else if ((!func_1410(uParam0) && !aggregate_func_4287(uParam0)) && !aggregate_func_4287(uParam0))
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_BLOCKED_PRIVACY_FOOTER");
					}
					else if (((!func_1410(uParam0) && aggregate_func_4287(uParam0)) && !aggregate_func_4287(uParam0)) && !bVar0)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_BLOCKED_PRIVACY_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_JOIN_FOOTER");
					}
					else
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 1:
				bVar11 = ((bVar0 && !bVar1) && func_1414(PLAYER::PLAYER_ID(), uParam0->f_2));
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (!func_1413(uParam0))
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_BLOCKED_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_ACTIVATE_FOOTER");
					}
					else
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_ACTIVATE_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 2:
				bVar11 = ((bVar0 && !bVar1) && !func_1414(PLAYER::PLAYER_ID(), uParam0->f_2));
				if (bVar11)
				{
					if (bVar7)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_JOIN_FOOTER");
					}
					else if (func_1415(uParam0->f_2))
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_OTHER_CONTENT_LOCK_REJOIN_FOOTER");
					}
					else if (aggregate_func_4981())
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JAIL_LOCK_REJOIN_FOOTER");
					}
					else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)))
					{
						if (func_650(uParam0->f_2))
						{
							bVar12 = true;
							sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_ACTIVATE_FOOTER_SM");
						}
						else if (!func_1416(uParam0->f_2))
						{
							sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_CONTENT_BLOCK_FOOTER");
						}
						else if (!func_1417(uParam0->f_2))
						{
							sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER");
						}
						else
						{
							sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_INACTIVE_POSSE_FOOTER");
						}
					}
					else if (bVar6)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1) && _NAMESPACE26::_0x7933754F260B428A(_NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_1)) > 0)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_KICKED_FOOTER");
					}
					else if (func_1267(uParam0))
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_JOIN_LOCK");
					}
					else if (func_1266(uParam0))
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER");
					}
					else if (!func_1413(uParam0))
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_JOIN_INACTIVE_POSSE_FOOTER");
					}
					else
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_ACTIVATE_FOOTER_M");
						bVar12 = true;
					}
				}
				break;
			case 3:
				bVar11 = (bVar3 && (bVar1 || bVar0));
				if (bVar11)
				{
					if (!bVar4)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_VERSUS_NO_PERSISTENT_POSSE_FOOTER");
					}
					else if (func_1418(PLAYER::PLAYER_ID()))
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_VERSUS_FOOTER_BLOCKED_JAIL");
					}
					else
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_VERSUS_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 4:
				if (bVar0)
				{
					bVar11 = true;
				}
				else
				{
					bVar11 = bVar2;
				}
				sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_SETTINGS_FOOTER");
				bVar12 = true;
				break;
			case 5:
				bVar11 = bVar3;
				if (bVar11)
				{
					if (!bVar1)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
					}
					else if (bVar6)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_INVITE_FOOTER");
					}
					else
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "");
						bVar12 = true;
					}
				}
				break;
			case 6:
				bVar11 = (!bVar4 && bVar2);
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_LEAVE_INACTIVE_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_LEAVE_FOOTER");
					}
					else
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_ABANDON_LINK_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 7:
				bVar11 = (bVar4 && bVar2);
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_LEAVE_INACTIVE_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_STANDDOWN_FOOTER");
					}
					else if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_LEAVE_L_LINK_FOOTER");
						bVar12 = true;
					}
					else
					{
						sVar9 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_LEAVE_M_LINK_FOOTER");
						bVar12 = true;
					}
				}
				break;
		}
		if (aggregate_func_7672() == iVar14)
		{
			sVar8 = sVar9;
			aggregate_func_1791(sVar8, joaat("COLOR_WHITE"));
		}
		if (func_1419(&(Global_1939221->f_1433.f_156.f_205.f_1), iVar10) != bVar11)
		{
			func_1420(&(Global_1939221->f_1433.f_156.f_205.f_1), iVar10, bVar11);
		}
		if (func_1421(&(Global_1939221->f_1433.f_156.f_205.f_1), iVar10) != bVar12)
		{
			func_1422(&(Global_1939221->f_1433.f_156.f_205.f_1), iVar10, bVar12);
		}
		iVar10++;
	}
}

void func_783()
{
	int iVar0;

	if (!func_1398())
	{
		return;
	}
	if (func_1129() == 1)
	{
		func_16();
		func_54();
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		if (aggregate_func_886(func_1399(), iVar0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_54.f_64, func_1399());
			func_977(func_1399());
			func_186(2);
		}
	}
}

void func_784()
{
	if (Global_1939221->f_1433.f_156.f_263.f_90 != -1)
	{
		if ((MISC::GET_GAME_TIMER() - Global_1939221->f_1433.f_156.f_263.f_90) >= 2000)
		{
			Global_1939221->f_1433.f_156.f_263.f_90 = -1;
		}
	}
}

bool func_785()
{
	return Global_1939221->f_1433.f_156.f_263.f_2 != 0;
}

void func_786()
{
	int iVar0;
	vector3 vVar1;
	int iVar5;

	iVar0 = -1218098620;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar0))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					iVar5 = vVar1.z;
					switch (iVar5)
					{
						case 2074623703:
							func_1424();
							func_186(8);
							func_326();
							break;
						case 1400745903:
							func_326();
							break;
					}
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
	}
}

void func_787(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_212(uParam0))
	{
		return;
	}
	bVar0 = aggregate_func_4287(uParam0);
	bVar1 = func_757(uParam0);
	bVar2 = aggregate_func_4287(uParam0);
	bVar3 = func_1410(uParam0);
	bVar4 = aggregate_func_7100(16);
	bVar5 = (((aggregate_func_4258() || aggregate_func_6688()) || (aggregate_func_1135(0, 0, 1) && bVar4 == 0)) || func_805());
	bVar6 = aggregate_func_3064(PLAYER::PLAYER_ID(), 1, 1);
	if (!func_1425())
	{
		if (aggregate_func_4287(uParam0))
		{
			bVar7 = true;
			bVar8 = 126620015;
		}
		else
		{
			bVar7 = false;
			bVar8 = 1513236523;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(Global_1939221->f_1433.f_156.f_263.f_3, aggregate_func_4915(34), bVar7);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Global_1939221->f_1433.f_156.f_263.f_3, aggregate_func_4915(33), bVar8);
		if (aggregate_func_4287(uParam0) && !bVar6)
		{
			bVar9 = true;
			bVar10 = -299269340;
		}
		else
		{
			bVar9 = false;
			bVar10 = 1083456181;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(Global_1939221->f_1433.f_156.f_263.f_61, aggregate_func_4915(34), bVar9);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Global_1939221->f_1433.f_156.f_263.f_61, aggregate_func_4915(33), bVar10);
		bVar11 = aggregate_func_4249(uParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(Global_1939221->f_1433.f_156.f_263.f_32, aggregate_func_4915(34), bVar11);
	}
	if (!bVar3)
	{
		func_977(aggregate_func_9308(uParam0));
	}
	bVar12 = joaat("COLOR_WHITE");
	sVar13 = "";
	sVar14 = "";
	iVar21 = 8;
	iVar15 = 0;
	while (iVar15 < iVar21)
	{
		iVar18 = aggregate_func_9222(iVar15, 1);
		func_1429(iVar18, &iVar20);
		iVar19 = iVar20;
		bVar16 = false;
		bVar17 = false;
		sVar14 = "";
		switch (iVar18)
		{
			case 630752600:
				bVar16 = true;
				bVar17 = ((bVar3 && bVar1) && !aggregate_func_7670());
				aggregate_func_2624(&(Global_1939221->f_1433.f_156.f_263.f_3), bVar17);
				if (bVar3 && !bVar1)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
				}
				else if (uParam0->f_92)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
				}
				else
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
				}
				break;
			case 55609673:
				bVar16 = true;
				bVar17 = ((bVar3 && bVar2) && bVar1);
				aggregate_func_2624(&(Global_1939221->f_1433.f_156.f_263.f_32), bVar17);
				if ((bVar3 && bVar2) && !bVar1)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
				}
				else if (!bVar2)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_TEMP_OUTFIT");
				}
				else
				{
					switch (aggregate_func_4249(uParam0))
					{
						case 0:
							sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
							break;
						default:
							sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
							break;
					}
				}
				break;
			case 845045048:
				bVar16 = true;
				bVar17 = (((bVar3 && bVar1) && !aggregate_func_6505()) && !bVar6);
				aggregate_func_2624(&(Global_1939221->f_1433.f_156.f_263.f_61), bVar17);
				if (bVar3 && !bVar1)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
				}
				else if (bVar6)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF_PASSIVE");
				}
				else if (uParam0->f_93)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
				}
				else
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
				}
				break;
			case -1676224755:
				bVar16 = true;
				bVar17 = (aggregate_func_9334(uParam0->f_1) && bVar3);
				break;
			case -353068451:
				bVar16 = true;
				if (bVar16)
				{
					if (bVar3 && !bVar1)
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
					}
					else if (!bVar3)
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER_MEMBER");
					}
					else if (bVar5)
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (bVar3 == 0)
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER_MEMBER");
					}
					else if (aggregate_func_4710(PLAYER::PLAYER_ID()) != -1 && aggregate_func_7398(aggregate_func_4710(PLAYER::PLAYER_ID()), 512))
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_LOC_FOLLOWER_DEAD");
					}
					else if (Global_1124870->f_1891 >= 6 && Global_1124870->f_1891 <= 12)
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NET_CAMP_ALREADY_REQUESTED_FOOTER");
					}
					else if (aggregate_func_3525())
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SET_LOC_CONTENT_LOCK");
					}
					else
					{
						bVar17 = ((bVar3 && bVar1) && aggregate_func_572(1, 1));
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NET_CAMP_SETTINGS_LOCATION_FOOTER");
					}
				}
				break;
			case 1527899327:
				bVar16 = true;
				bVar17 = (((((bVar3 && bVar2) && bVar1) && func_91()) && (NETWORK::_0x595F028698072DD9(-1) || !MISC::IS_ORBIS_VERSION())) && NETWORK::_0x6506BFA755FB209C());
				if ((bVar3 && bVar2) && !bVar1)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE_MEMBER");
				}
				else
				{
					sVar14 = func_435(&bVar12);
				}
				break;
			case -750400740:
				bVar16 = (bVar0 && !bVar3);
				if (bVar16)
				{
					if (bVar5)
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (aggregate_func_7670())
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_ABANDON_FOOTER");
					}
					else
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_ABANDON_LINK_FOOTER");
						bVar17 = true;
					}
					bVar17 = ((bVar0 && !bVar3) && !bVar5);
				}
				break;
			case 695290261:
				bVar16 = (bVar3 && bVar0);
				if (bVar16)
				{
					if (bVar5)
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (aggregate_func_7670())
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_DISBAND_FOOTER");
					}
					else
					{
						sVar14 = MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_DISBAND_LINK_FOOTER");
						bVar17 = true;
					}
				}
				break;
		}
		if (aggregate_func_7672() == iVar19)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar14))
			{
				sVar13 = sVar14;
				aggregate_func_1791(sVar13, bVar12);
			}
		}
		if (func_1419(&(Global_1939221->f_1433.f_156.f_263.f_1), iVar15) != bVar16)
		{
			func_1420(&(Global_1939221->f_1433.f_156.f_263.f_1), iVar15, bVar16);
		}
		if (func_1421(&(Global_1939221->f_1433.f_156.f_263.f_1), iVar15) != bVar17)
		{
			func_1422(&(Global_1939221->f_1433.f_156.f_263.f_1), iVar15, bVar17);
		}
		iVar15++;
	}
}

int func_788()
{
	return Global_1939221->f_1433.f_2;
}

void func_789(int iParam0)
{
	switch (Global_1939221->f_1433.f_828.f_2)
	{
		case 0:
			func_758();
			func_47(1);
			aggregate_func_6543(&(Global_1939221->f_1433.f_828), 1);
			break;
		case 1:
			func_1432(iParam0, aggregate_func_7813(aggregate_func_4259(0)));
			aggregate_func_6543(&(Global_1939221->f_1433.f_828), 2);
			break;
		case 2:
			if (!aggregate_func_6547())
			{
				return;
			}
			func_47(1);
			aggregate_func_6543(&(Global_1939221->f_1433.f_828), 1);
			break;
	}
}

void func_790(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 173341;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173462;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173842;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180162;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180328;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180423;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180518;
			uParam0->f_11++;
			uParam0->f_12 = 180701;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180892;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180954;
			uParam0->f_11++;
			uParam0->f_12 = 180701;
			uParam0->f_13 = 1;
			break;
		case -1419617212:
			uParam0->f_12 = 180701;
			uParam0->f_13 = 1;
			break;
	}
}

int func_792()
{
	return Global_1896726->f_368;
}

int func_793(var uParam0, int* iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939221->f_1433.f_7966)
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME((*uParam0)[iVar0 /*8*/], iParam1))
		{
			return ((*uParam0)[iVar0 /*8*/])->f_7;
		}
		iVar0++;
	}
	return -1;
}

int func_797()
{
	return Global_1896726->f_368.f_2;
}

bool func_798(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	struct<7> Var0[100];

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(Var0[0 /*7*/], &uParam0, 7);
	func_1440(&Var0, 1);
	return true;
}

int func_799()
{
	return Global_1896726->f_368.f_1;
}

bool func_803(int* iParam0)
{
	int iVar0;
	struct<28> Var1;
	int iVar119;

	if (!aggregate_func_3096(*iParam0))
	{
		return false;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	Var1.f_27 = 10;
	if (POSSE::_0xC087FF658B2E51DA(iVar0, &Var1))
	{
		iVar119 = 0;
		while (iVar119 <= (Var1.f_26 - 1))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Var1.f_27[iVar119 /*9*/], iParam0))
			{
				return true;
			}
			iVar119++;
		}
	}
	return false;
}

bool func_805()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_7163(PLAYER::PLAYER_ID());
	if (!aggregate_func_6924(iVar0))
	{
		return false;
	}
	if (!aggregate_func_4095(iVar0))
	{
		return false;
	}
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(aggregate_func_6925(iVar0));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	return aggregate_func_6694(iVar1, 1);
}

int func_806(int* iParam0)
{
	bool bVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return -1;
	}
	bVar0 = false;
	iVar1 = 255;
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		return 0;
	}
	bVar0 = true;
	if (aggregate_func_7191())
	{
		return 1;
	}
	if (func_805())
	{
		return 2;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1828672432))
	{
		return 3;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
	{
		return 13;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		return 13;
	}
	if (_NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15) >= _NAMESPACE26::_0x853B0FA4D8732C57(Global_1273882->f_15))
	{
		return 4;
	}
	switch (_NAMESPACE26::_0x48D82C83987E18E4(iParam0))
	{
		case 0:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam0))
			{
				return 0;
			}
			else if (bVar0 && !aggregate_func_1470(iVar1))
			{
				if (!NETWORK::_0xF23D6475640D29EB(iParam0))
				{
					return 6;
				}
				else if (bVar0 && _NAMESPACE26::_0xDA801F7F6A5278D3(iVar1))
				{
					return 7;
				}
				else
				{
					return 1;
				}
			}
			else if ((bVar0 && !func_1446(iVar1)) && aggregate_func_682(Global_1273882->f_15))
			{
				return 8;
			}
			else if (!aggregate_func_9315())
			{
				return 14;
			}
			else if ((bVar0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && aggregate_func_4103(iVar1))
			{
				if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1273882->f_15, iVar1))
				{
					return 9;
				}
			}
			return 5;
		case 1:
			return 9;
		case 2:
			return 10;
		case 3:
			return 11;
		default:
			break;
	}
	return 5;
}

bool func_807(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ON_CONTENT"), 128);
			return true;
		case 2:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ON_CONTENT"), 128);
			return true;
		case 6:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_POSSE_BLOCKED_INVITE"), 128);
			return true;
		case 7:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_POSSE_RECENTLY_KICKED"), 128);
			return true;
		case 9:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_POSSE_INVITE_SENT"), 128);
			return true;
		case 10:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_POSSE_INVITE_REJECTED"), 128);
			return true;
		case 11:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_POSSE_INVITE_ACCEPTED"), 128);
			return true;
		case 14:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_NO_INVITE_LEFT"), 128);
			return true;
		default:
			break;
	}
	return false;
}

int func_808(int* iParam0)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return -1;
	}
	if (aggregate_func_4240(NETWORK::_0x51F33DBC1A41CBFD(), 8))
	{
		return 5;
	}
	if (!aggregate_func_2820())
	{
		return -1;
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam0))
	{
		return 4;
	}
	if (!NETWORK::_0xA2837A5E21FB5A58(iParam0))
	{
		if (NETWORK::_0xD7BAD4062074B9C1(iParam0))
		{
			return 0;
		}
	}
	if (NETWORK::_0xA2837A5E21FB5A58(iParam0))
	{
		if (NETWORK::_0xC028B3F52C707C49(iParam0))
		{
			switch (NETWORK::_0xCA58D4FD20D70F24(iParam0))
			{
				case 0:
					if (NETWORK::_0xD7BAD4062074B9C1(iParam0))
					{
						return 0;
					}
					return 1;
				case 2:
					return 3;
				case 1:
					return 2;
				default:
					break;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (!NETWORK::_0xD7BAD4062074B9C1(iParam0))
	{
		return 6;
	}
	return 0;
}

bool func_810()
{
	if (NETWORK::_0x9C725D149622BFDE(3))
	{
		return false;
	}
	if (!NETWORK::_0x1AF5E28E64A76A9F())
	{
		return false;
	}
	return true;
}

int func_811(int iParam0)
{
	if (!aggregate_func_8322(2))
	{
		return 0;
	}
	if (!aggregate_func_8322(1))
	{
		return 0;
	}
	if (!func_1045(iParam0))
	{
		return 0;
	}
	if (func_1047(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_812(var uParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	bool bVar5;
	struct<10> Var6;
	int iVar20;
	int iVar21;

	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	iVar0 = aggregate_func_1499(1);
	Var1 = { aggregate_func_2834(1) };
	Var6.f_9 = -1591664384;
	bVar5 = aggregate_func_4271(*uParam0);
	iVar20 = INVENTORY::_0x033EE4B89F3AC545(iVar0, &Var1, bVar5);
	if (iVar20 > 37)
	{
		iVar20 = 37;
	}
	iVar21 = 0;
	while (iVar21 <= (iVar20 - 1))
	{
		if (!INVENTORY::_0xBE012571B25F5ACA(iVar0, &Var1, bVar5, iVar21, &Var6))
		{
		}
		else
		{
			func_1447(uParam0, uParam1, Var6.f_4, iVar21);
		}
		iVar21++;
	}
	return 1;
}

int func_813(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	iVar1 = 3;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		if (&uParam1->f_2[iVar0] == 0)
		{
			if (iVar0 == 0)
			{
				Global_1939221->f_1433.f_6264.f_5 = 1;
				iVar2 = Global_1939221->f_1433.f_6264;
				func_143(&(Global_1939221->f_1433.f_6264), Global_17173.f_54.f_2480[iVar2 /*7*/]);
				Global_1939221->f_1433.f_6264.f_4 = 1;
			}
		}
		else
		{
			func_1447(uParam0, uParam1, &(uParam1->f_2[iVar0]), iVar0);
			iVar0++;
		}
	}
	return 1;
}

bool func_814()
{
	return Global_1939221->f_1433.f_7961 != 0;
}

bool func_816(int* iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	if (iParam1 < 0 || iParam1 > 8)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return false;
	}
	func_1448();
	if (func_1449(iParam0))
	{
		return false;
	}
	sVar1 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1939221->f_1433.f_1405.f_55);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1405.f_55, "");
	func_1450(iParam0);
	NETWORK::_0xA197C35F73AC0F12(iVar0, iParam1, sVar1, "");
	return true;
}

void func_817()
{
	struct<19> Var0;

	Var0.f_2 = 0;
	Var0.f_3 = MISC::GET_HASH_KEY("IB_OK");
	Var0.f_3.f_3 = 0;
	aggregate_func_4239(&Var0);
	func_647(Var0, "CWS_THANKS", "NM_PLAYER_REPORT_CONFIRM");
}

void func_818(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;

	bVar0 = func_1052();
	bVar1 = ((aggregate_func_3049(2) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(2), 0));
	bVar2 = ((aggregate_func_3049(3) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(3), 0));
	bVar3 = ((aggregate_func_3049(4) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(4), 0));
	bVar4 = ((aggregate_func_3049(8) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(8), 0));
	bVar5 = ((aggregate_func_3049(9) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(9), 0));
	bVar6 = ((aggregate_func_3049(19) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(19), 0));
	bVar7 = ((aggregate_func_3049(18) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(18), 0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_1, ((bVar1 || bVar2) || bVar3));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_5, (bVar4 || bVar5));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_2, bVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_3, bVar2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_4, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_6, bVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_7, bVar5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_8, ((aggregate_func_3049(0) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(0), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_9, ((aggregate_func_3049(1) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(1), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_15, ((bParam0 && aggregate_func_1450(Global_1273882->f_15, 3, 0)) && bVar0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_13, bVar6);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_14, bVar7);
	bVar8 = (aggregate_func_3097(2) && aggregate_func_3049(2));
	bVar9 = (aggregate_func_3097(3) && aggregate_func_3049(3));
	bVar10 = (aggregate_func_3097(4) && aggregate_func_3049(4));
	bVar11 = (aggregate_func_3097(8) && aggregate_func_3049(8));
	bVar12 = (aggregate_func_3097(9) && aggregate_func_3049(9));
	bVar13 = (aggregate_func_3097(19) && aggregate_func_3049(19));
	bVar14 = (aggregate_func_3097(18) && aggregate_func_3049(18));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_17, ((bVar8 || bVar9) || bVar10));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_21, (bVar11 || bVar12));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_18, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_19, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_20, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_22, bVar11);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_23, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_24, (aggregate_func_3097(0) && aggregate_func_3049(0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_25, (aggregate_func_3097(1) && aggregate_func_3049(1)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_30, bVar13);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_31, bVar14);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_10, (((MISC::IS_ORBIS_VERSION() && aggregate_func_3049(15)) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(15), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_12, (((MISC::IS_ORBIS_VERSION() && aggregate_func_3049(16)) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(16), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_11, (((MISC::IS_ORBIS_VERSION() && aggregate_func_3049(17)) && bParam0) && aggregate_func_1450(Global_1273882->f_15, aggregate_func_7736(17), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_27, ((MISC::IS_ORBIS_VERSION() && aggregate_func_3097(15)) && aggregate_func_3049(15)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_29, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1461.f_28, ((MISC::IS_ORBIS_VERSION() && aggregate_func_3097(17)) && aggregate_func_3049(17)));
}

int func_819()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::_0xF49F14462F0AE27C(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar2))
	{
		return 0;
	}
	iVar3 = PED::_0xB676EFDA03DADA52(iVar2, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 0;
	}
	if (aggregate_func_4258())
	{
		return 0;
	}
	if (iVar3 != iVar1)
	{
		return 1;
	}
	if (AITRANSPORT::_0x2E2E06023D07631E(iVar2, -2))
	{
		return 1;
	}
	return 0;
}

char* func_820(bool bParam0)
{
	if (bParam0)
	{
		return MISC::_CREATE_VAR_STRING(2, "DISMOUNT_FOOTER");
	}
	return MISC::_CREATE_VAR_STRING(2, "NM_STABLE_NO_MOUNT");
}

void func_821()
{
	return;
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_TAB_RIGHT")))
	{
		if (Global_1939221->f_1433.f_1622.f_449 == 6)
		{
			func_1453(0);
		}
		else
		{
			func_1453(Global_1939221->f_1433.f_1622.f_449 + 1);
		}
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_TAB_LEFT")))
	{
		if (Global_1939221->f_1433.f_1622.f_449 == 0)
		{
			func_1453(6);
		}
		else
		{
			func_1453((Global_1939221->f_1433.f_1622.f_449 - 1));
		}
	}
}

void func_822()
{
	int iVar0;
	int iVar1;
	struct<23> Var2;
	int iVar44;
	bool bVar45;
	bool bVar46;
	bool bVar47;
	int iVar48;
	float fVar49;
	int iVar50;
	bool bVar51;
	int iVar52;
	float fVar53;
	int iVar54;
	bool bVar55;
	int iVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	int iVar60;
	int iVar61;
	bool bVar62;
	int iVar63;
	int iVar64;
	char* sVar65;
	int iVar66;

	if (!aggregate_func_2842("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (iVar1 == 0)
	{
		aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "HORSE_LIST_EMPTY"), joaat("COLOR_WHITE"));
		aggregate_func_2837(iVar0);
		return;
	}
	Var2.f_10 = -1;
	Var2.f_23 = 3;
	Var2.f_28 = 13;
	if (!aggregate_func_5181(Global_1939221->f_1433.f_1622, iVar0, iVar1, 0, &Var2, 0, 1))
	{
		aggregate_func_2837(iVar0);
		return;
	}
	iVar44 = aggregate_func_6073(&Var2, Var2.f_10);
	bVar45 = true;
	bVar46 = false;
	bVar47 = -217389439;
	if (bVar45)
	{
		if (iVar44 == 1)
		{
			bVar47 = 13992470;
		}
		else if (iVar44 == 2)
		{
			bVar47 = 396341162;
		}
		else if (iVar44 == 3)
		{
			bVar47 = 623069873;
		}
		else if (iVar44 == 4)
		{
			bVar47 = -637422489;
		}
	}
	else if (bVar46)
	{
		if (iVar44 == 0)
		{
			bVar47 = 937553910;
		}
		else if (iVar44 == 1)
		{
			bVar47 = 489732756;
		}
		else if (iVar44 == 2)
		{
			bVar47 = 195204984;
		}
		else if (iVar44 == 3)
		{
			bVar47 = -103418913;
		}
		else if (iVar44 == 4)
		{
			bVar47 = -815685893;
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1622.f_458, bVar47);
	iVar48 = ((aggregate_func_2016(Var2.f_11) + iVar44) - 1);
	fVar49 = (IntToFloat(iVar48 + 1) / 10f);
	iVar50 = aggregate_func_5045(func_1456(&Var2, 0), 20, 100);
	bVar51 = BUILTIN::ROUND((IntToFloat(iVar50) * 0.15f));
	iVar52 = ((aggregate_func_2016(Var2.f_11) + iVar44) - 1);
	fVar53 = (IntToFloat(iVar52 + 1) / 10f);
	iVar54 = aggregate_func_5045(func_1456(&Var2, 1), 20, 100);
	bVar55 = BUILTIN::ROUND((IntToFloat(iVar54) * 0.15f));
	iVar56 = PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID());
	if (func_1101(iVar56, &Var2))
	{
		iVar48 = aggregate_func_1732(iVar56);
		fVar49 = ((IntToFloat(iVar48 + 1) / 10f) * (BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iVar56)) / BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar56, 0))));
		iVar50 = aggregate_func_1365(iVar56, 0);
		bVar51 = BUILTIN::ROUND((IntToFloat(iVar50) * 0.15f));
		iVar52 = aggregate_func_1732(iVar56);
		fVar53 = ((IntToFloat(iVar52 + 1) / 10f) * PED::_0x22F2A386D43048A9(iVar56));
		iVar54 = aggregate_func_1365(iVar56, 1);
		bVar55 = BUILTIN::ROUND((IntToFloat(iVar54) * 0.15f));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_463, iVar48 + 1);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1939221->f_1433.f_1622.f_464, fVar49);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1939221->f_1433.f_1622.f_465, 1f);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_466, bVar51);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_459, iVar52 + 1);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1939221->f_1433.f_1622.f_460, fVar53);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1939221->f_1433.f_1622.f_461, 1f);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1622.f_462, bVar55);
	bVar57 = false;
	bVar58 = aggregate_func_2937(&Var2, -415648720, 0) > 0;
	bVar59 = aggregate_func_8044(&Var2, Var2.f_10, 1);
	iVar60 = aggregate_func_4087(Var2);
	iVar61 = func_1461(Var2);
	bVar62 = iVar60 > Global_1273882->f_21;
	iVar63 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar60 - Global_1273882->f_21)) / 60f));
	iVar64 = aggregate_func_5373(Var2.f_11);
	sVar65 = func_476(0);
	if (aggregate_func_4299(Var2, -653439684, 0, -1) == 515427499)
	{
		sVar65 = func_476(1);
	}
	iVar66 = func_1086(bVar59, bVar62, bVar57);
	switch (iVar66)
	{
		case 0:
		case 1:
			if (bVar58)
			{
				aggregate_func_1791(MISC::_CREATE_VAR_STRING(42, "HORSE_INFO_SUMMARY", sVar65, aggregate_func_5284(iVar64, Var2.f_22), iVar44), joaat("COLOR_WHITE"));
			}
			else
			{
				aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "HORSE_INFO_SUMMARY_UNSADDLED"), joaat("COLOR_WHITE"));
			}
			break;
		case 2:
			aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "HORSE_SUMMARY_DEAD", aggregate_func_6048(1806374467, 0, 59806960)), joaat("COLOR_WHITE"));
			break;
		case 3:
			if (iVar61 == 0)
			{
				if (iVar63 == 1)
				{
					aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "HORSE_SUMMARY_DEAD_RECOVERING_NO_PLURAL", iVar63), joaat("COLOR_WHITE"));
				}
				else
				{
					aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "HORSE_SUMMARY_DEAD_RECOVERING", iVar63), joaat("COLOR_WHITE"));
				}
			}
			else if (iVar63 == 1)
			{
				aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "HORSE_SUMMARY_HOTSWAP_RECOVERING_NO_PLURAL", iVar63), joaat("COLOR_WHITE"));
			}
			else
			{
				aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "HORSE_SUMMARY_HOTSWAP_RECOVERING", iVar63), joaat("COLOR_WHITE"));
			}
			break;
	}
	aggregate_func_2837(iVar0);
}

int func_823()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::_0xB9050A97594C8832(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	if (aggregate_func_4258())
	{
		return 0;
	}
	if (!func_1462(iVar1))
	{
		return 0;
	}
	return 1;
}

char* func_824(bool bParam0)
{
	if (bParam0)
	{
		return MISC::_CREATE_VAR_STRING(2, "DISMOUNT_VEHICLE_FOOTER");
	}
	return MISC::_CREATE_VAR_STRING(2, "NM_STABLE_VEHICLE_NO_MOUNT");
}

void func_825()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_TAB_RIGHT")))
	{
		if (Global_1939221->f_1433.f_2190.f_372 == 0)
		{
			func_1463(0);
		}
		else
		{
			func_1463(Global_1939221->f_1433.f_2190.f_372 + 1);
		}
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_TAB_LEFT")))
	{
		if (Global_1939221->f_1433.f_2190.f_372 == 0)
		{
			func_1463(0);
		}
		else
		{
			func_1463((Global_1939221->f_1433.f_2190.f_372 - 1));
		}
	}
}

void func_826()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	struct<4> Var58;
	int iVar62;
	int iVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	bool bVar67;
	bool bVar68;
	int iVar69;
	int iVar70;
	bool bVar71;
	int iVar72;
	int iVar73;

	Var2 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, 0, 0, joaat("coach")) };
	if (!aggregate_func_2836(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 == 0)
	{
		aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_LIST_EMPTY"), joaat("COLOR_WHITE"));
		aggregate_func_2837(iVar0);
		return;
	}
	Var16.f_10 = -1;
	Var16.f_23 = 3;
	Var16.f_28 = 13;
	if (!aggregate_func_5181(Global_1939221->f_1433.f_2190, iVar0, iVar1, 2, &Var16, 0, 0))
	{
		aggregate_func_2837(iVar0);
		return;
	}
	Var58 = { func_710(2) };
	func_1104(&Var58, &Var16, &iVar62);
	func_1105(&Var58, &Var16, &iVar63);
	iVar64 = PLAYER::PLAYER_ID();
	bVar65 = false;
	iVar66 = PLAYER::_0xB9050A97594C8832(iVar64);
	if (ENTITY::DOES_ENTITY_EXIST(iVar66))
	{
		if (func_1101(iVar66, &Var16))
		{
			bVar65 = true;
		}
	}
	bVar67 = false;
	bVar68 = aggregate_func_8044(&Var16, Var16.f_10, 1);
	iVar69 = func_1102(Var16);
	iVar70 = func_1464(Var16);
	bVar71 = iVar69 > Global_1273882->f_21;
	iVar72 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar69 - Global_1273882->f_21)) / 60f));
	iVar73 = func_1106(bVar68, bVar71, bVar67, bVar65);
	switch (iVar73)
	{
		case 0:
			if (!func_1107(iVar62, iVar63, 1, 1))
			{
				aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_INFO_SUMMARY_ACTIVE"), joaat("COLOR_WHITE"));
			}
			break;
		case 1:
			if (!func_1107(iVar62, iVar63, 1, 0))
			{
				aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_INFO_SUMMARY_STABLED"), joaat("COLOR_WHITE"));
			}
			break;
		case 2:
			if (!func_1107(iVar62, iVar63, 1, 0))
			{
				aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_INFO_SUMMARY_STABLED"), joaat("COLOR_WHITE"));
			}
			break;
		case 3:
			aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_SUMMARY_DEAD", aggregate_func_6048(852655472, 0, 59806960)), joaat("COLOR_WHITE"));
			break;
		case 4:
			if (iVar70 == 0)
			{
				if (iVar72 == 1)
				{
					aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_SUMMARY_DEAD_RECOVERING_NO_PLURAL", iVar72), joaat("COLOR_WHITE"));
				}
				else
				{
					aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_SUMMARY_DEAD_RECOVERING", iVar72), joaat("COLOR_WHITE"));
				}
			}
			else if (iVar72 == 1)
			{
				aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_SUMMARY_HOTSWAP_RECOVERING_NO_PLURAL", iVar72), joaat("COLOR_WHITE"));
			}
			else
			{
				aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_SUMMARY_HOTSWAP_RECOVERING", iVar72), joaat("COLOR_WHITE"));
			}
			break;
	}
	aggregate_func_2837(iVar0);
}

int func_828(int iParam0)
{
	int iVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return -1;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return aggregate_func_4710(iVar0);
	}
	return -1;
}

char* func_830()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_INVALID");
	}
	iVar0 = aggregate_func_4710(PLAYER::PLAYER_ID());
	if (!aggregate_func_4598(iVar0))
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_INVALID");
	}
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (aggregate_func_7979(iVar0))
		{
			if (func_71(iVar0))
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED");
			}
			else
			{
				iVar1 = func_1465(iVar0);
				if (iVar1 == 1)
				{
					return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED_COOLDOWN_SINGULAR", iVar1);
				}
				else
				{
					return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED_COOLDOWN", iVar1);
				}
			}
		}
		else if (aggregate_func_9259(iVar0))
		{
			return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED");
		}
		else
		{
			iVar2 = func_1465(iVar0);
			if (iVar2 == 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED_COOLDOWN_SINGULAR", iVar2);
			}
			else if (iVar2 <= 0)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOCKED");
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED_COOLDOWN", iVar2);
			}
		}
	}
	else if (aggregate_func_7979(iVar0))
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED_MEMBER");
	}
	else
	{
		return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED_MEMBER");
	}
	return MISC::_CREATE_VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_INVALID");
}

void func_832()
{
	DATABINDING::_0x3BF0767CF33FCC88(Global_1939221->f_1433.f_2628.f_42);
}

int func_833()
{
	return (Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_2;
}

bool func_834(var uParam0)
{
	return func_1466(Global_1273882->f_17, uParam0);
}

void func_835(bool bParam0, bool bParam1)
{
	struct<27> Var0;
	char cVar27[64];
	char cVar35[64];
	char cVar43[64];

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	StringCopy(&cVar27, "Camp_Location_Root_", 64);
	StringCopy(&cVar35, "Override_Camp_Location_Root_", 64);
	StringIntConCat(&cVar27, bParam0, 64);
	StringIntConCat(&cVar35, bParam0, 64);
	StringCopy(&cVar43, MISC::_CREATE_VAR_STRING(2, aggregate_func_7748(bParam1, 0)), 64);
	Var0.f_16 = { cVar43 };
	if (func_157() || !aggregate_func_2820())
	{
		Var0.f_7 = joaat("ib_select");
	}
	else
	{
		Var0.f_7 = -2494464; /* GXTEntry: "Buy" */
	}
	Var0.f_6 = 1603044301;
	Var0.f_5 = 1603044301;
	Var0.f_4 = 1433015236;
	Var0.f_24 = joaat("hud_textures");
	Var0.f_25 = joaat("check");
	Var0.f_26 = 0;
	aggregate_func_1363(&((Global_1939221->f_1433.f_2628.f_49[bParam0 /*23*/])->f_1), Global_1939221->f_1433.f_2628.f_41, cVar27, Var0);
	aggregate_func_1363(&((Global_1939221->f_1433.f_2628.f_349[bParam0 /*23*/])->f_1), Global_1939221->f_1433.f_2628.f_41, cVar35, Var0);
	Global_1939221->f_1433.f_2628.f_49[bParam0 /*23*/] = DATABINDING::_DATABINDING_ADD_DATA_HASH((Global_1939221->f_1433.f_2628.f_49[bParam0 /*23*/])->f_1, "camp_selection_district", bParam1);
	Global_1939221->f_1433.f_2628.f_349[bParam0 /*23*/] = DATABINDING::_DATABINDING_ADD_DATA_HASH((Global_1939221->f_1433.f_2628.f_349[bParam0 /*23*/])->f_1, "camp_selection_district", bParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939221->f_1433.f_2628.f_42, bParam0, "pm_dynamic_text_and_end_image", (Global_1939221->f_1433.f_2628.f_49[bParam0 /*23*/])->f_1);
}

bool func_836(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (func_157())
	{
		if (func_176(&bVar1, &iVar0))
		{
			if (iVar0 == iParam0 && bVar1 == bParam1)
			{
				return true;
			}
		}
	}
	else
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return false;
		}
		if (&Global_1273882 < 0 || &Global_1273882 >= 32)
		{
			return false;
		}
		if (!aggregate_func_1746(&(Global_1273882->f_154[&Global_1273882]), 0))
		{
			return false;
		}
		vVar2 = { aggregate_func_5046(&Global_1273882) };
		if (vVar2.y == bParam1 && vVar2.x == aggregate_func_8052(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_837(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];

	StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, aggregate_func_7748(bParam1, 0)), 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1939221->f_1433.f_2628.f_49[bParam0 /*23*/])->f_1.f_18, &cVar0);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(Global_1939221->f_1433.f_2628.f_49[bParam0 /*23*/])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&(Global_1939221->f_1433.f_2628.f_49[bParam0 /*23*/]), bParam1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(Global_1939221->f_1433.f_2628.f_349[bParam0 /*23*/])))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&(Global_1939221->f_1433.f_2628.f_349[bParam0 /*23*/]), bParam1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2628.f_49[bParam0 /*23*/])->f_1.f_1, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2628.f_49[bParam0 /*23*/])->f_1.f_9, (bParam3 && !bParam4));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2628.f_49[bParam0 /*23*/])->f_1.f_21, bParam4);
	if (aggregate_func_7672() == bParam0)
	{
		func_1467(bParam1);
		func_106(iParam2, bParam1);
	}
}

bool func_838(var uParam0)
{
	int iVar0;

	if (aggregate_func_4371() != -1)
	{
		return func_1469(aggregate_func_4371(), Global_1273882->f_17, uParam0);
	}
	iVar0 = func_1470(&(((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_38));
	return func_839(iVar0, ((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_38.f_4, uParam0);
}

bool func_839(int iParam0, vector3 vParam1, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			*uParam4 = 1;
			uParam4->f_1[0] = -682748;
			break;
		case 1:
			*uParam4 = 2;
			uParam4->f_1[0] = 1357161730;
			uParam4->f_1[1] = 1483778247;
			break;
		case 2:
			*uParam4 = 3;
			uParam4->f_1[0] = 1581179681;
			uParam4->f_1[1] = -1554232707;
			uParam4->f_1[2] = -724534761;
			break;
		case 3:
			*uParam4 = 3;
			uParam4->f_1[0] = -987049424;
			uParam4->f_1[1] = 1538293636;
			uParam4->f_1[2] = -1871413878;
			break;
		case 4:
			*uParam4 = 4;
			uParam4->f_1[0] = -215258135;
			uParam4->f_1[1] = 892234183;
			uParam4->f_1[2] = -1992167326;
			uParam4->f_1[3] = -1884014371;
			break;
		default:
			return false;
	}
	if (!func_1471(vParam1, uParam4))
	{
		return false;
	}
	return true;
}

void func_840(bool bParam0)
{
	bool bVar0;

	if (DATABINDING::_0x81D7183E7A8ECA72(Global_1939221->f_1433.f_54.f_69) != func_1472(bParam0))
	{
		bVar0 = func_1472(bParam0);
		if (!TXD::_0xBA0163B277C2D2D0(bVar0))
		{
			return;
		}
		TXD::_0xDB1BD07FB464584D(bVar0, 0);
		if (!TXD::_0xBE72591D1509FFE4(bVar0))
		{
			return;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_54.f_69, bVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_54.f_68, -712210889);
	}
	func_103(bParam0);
}

bool func_841(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1896177107:
			return true;
		case 2042309940:
			return bParam1;
		default:
			break;
	}
	return false;
}

void func_842(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25)
{
	func_1473(uParam0, Param1.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_26, Param1);
}

void func_843()
{
	vector3 vVar0;

	if (!aggregate_func_682(Global_1273882->f_15))
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	vVar0 = { MAP::_GET_WAYPOINT_COORDS() };
	vVar0.f_2 = PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(vVar0.x, vVar0.y);
	PATHFIND::_0xCF213A5FC3ABFC08(vVar0.x, vVar0.y, 50f);
}

bool func_846(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return false;
	}
	if (&Global_1939221->f_1433.f_156.f_356.f_234.f_1[iParam0 /*3*/] == 0)
	{
		return false;
	}
	MISC::_COPY_MEMORY(iParam1, Global_1939221->f_1433.f_156.f_356.f_234.f_1[iParam0 /*3*/], 3);
	return true;
}

int func_847(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 0;
	}
	Global_1939221->f_1433.f_156.f_356.f_234.f_1[iParam0 /*3*/] = 0;
	(Global_1939221->f_1433.f_156.f_356.f_234.f_1[iParam0 /*3*/])->f_1 = 255;
	(Global_1939221->f_1433.f_156.f_356.f_234.f_1[iParam0 /*3*/])->f_2 = -1;
	return 1;
}

bool func_848(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/] == 1)
		{
			if ((Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/])->f_1 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_849()
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;

	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (&Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar3 /*3*/])
		{
			if ((Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar3 /*3*/])->f_2 <= -1 || (Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar3 /*3*/])->f_2 >= 2)
			{
			}
			uVar0[(Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar3 /*3*/])->f_2] = &uVar0[(Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar3 /*3*/])->f_2] + 1;
		}
		iVar3++;
	}
	iVar4 = 0;
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 0)
		{
		}
		else if (&uVar0[iVar5] < &uVar0[iVar4])
		{
			iVar4 = iVar5;
		}
		iVar5++;
	}
	return iVar4;
}

bool func_850(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/] == 0)
		{
			if (func_1483(iVar0, iParam0, iParam1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_851(int* iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (Global_1896726->f_393.f_2691 >= 32)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(&((Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/])->f_1), iParam0, 7);
	(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/])->f_24 = iParam2;
	(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/])->f_8 = { aggregate_func_8066(sParam1) };
	if (func_1344(iParam0) == 0)
	{
		(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/])->f_27 = -1178838578;
	}
	else
	{
		(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/])->f_27 = -462010351;
	}
	(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/])->f_28 = iParam3;
	Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/] = 0;
	Global_1896726->f_393.f_2691++;
	return true;
}

void func_852(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 173341;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173462;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173842;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 185936;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 186062;
			uParam0->f_11++;
			break;
	}
}

bool func_853(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/] == 0)
		{
		}
		else if ((Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/])->f_1 == iParam0)
		{
			MISC::_COPY_MEMORY(iParam1, Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar0 /*3*/], 3);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_854(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (!&Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar1 /*3*/])
		{
		}
		else if ((Global_1939221->f_1433.f_156.f_356.f_234.f_1[iVar1 /*3*/])->f_2 != iParam0)
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

void func_855()
{
	bool bVar0;
	int iVar1;

	bVar0 = func_856();
	if (bVar0)
	{
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (iVar1 < Global_1939221->f_1433.f_7963)
	{
		return;
	}
	Global_1939221->f_1433.f_7962 = 1;
	Global_1939221->f_1433.f_7963 = -2147483647;
}

bool func_856()
{
	return Global_1939221->f_1433.f_7962;
}

bool func_859()
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_1433.f_1497.f_110);
}

void func_860(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_110, bParam0);
}

void func_861(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_6264.f_7, bParam0);
}

void func_862(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_1.f_1, bParam0);
}

void func_864()
{
	bool bVar0;

	bVar0 = joaat("COLOR_WHITE");
	aggregate_func_2620();
	if (aggregate_func_7672() == -1080557963)
	{
		func_85(1);
		func_86();
		aggregate_func_1791(func_452(), bVar0);
	}
}

void func_865()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = 0;
	iVar1 = 59806960;
	bVar2 = true;
	bVar3 = true;
	if (!aggregate_func_7842())
	{
		iVar0 = 2;
		bVar2 = false;
	}
	else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1392007362))
	{
		iVar0 = 3;
		bVar2 = false;
	}
	if (func_1486())
	{
		iVar1 = 997808187;
		bVar3 = true;
	}
	else if (func_1487())
	{
		iVar1 = -570078785;
		bVar3 = true;
	}
	else if (func_1488())
	{
		iVar1 = 59806960;
		bVar3 = true;
	}
	else
	{
		iVar0 = 1;
		bVar2 = false;
		bVar3 = false;
	}
	if (aggregate_func_4981())
	{
		iVar0 = 2;
		bVar2 = false;
	}
	func_1489(iVar1, bVar3);
	func_1490(iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_122, bVar2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_124, UNLOCK::_UNLOCK_IS_NEW(1392007362));
}

bool func_866(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	if (func_1491())
	{
		return false;
	}
	iVar0 = aggregate_func_7829(iParam0, 0);
	if (iVar0 <= 0)
	{
		return false;
	}
	else if (!aggregate_func_4574(iVar0))
	{
		aggregate_func_7824(65536);
		return false;
	}
	return true;
}

bool func_867(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	if (aggregate_func_9348(iParam0, 430260396))
	{
		return false;
	}
	iVar0 = aggregate_func_7829(iParam0, 1);
	if (iVar0 <= 0)
	{
		return false;
	}
	else if (!aggregate_func_4574(iVar0))
	{
		aggregate_func_7824(131072);
		return false;
	}
	return true;
}

bool func_869()
{
	if (!aggregate_func_4240(Global_1130954->f_137.f_1, 2))
	{
		return false;
	}
	return aggregate_func_4240(Global_1130954->f_145, 2);
}

void func_870()
{
	if (aggregate_func_8485())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_13, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_7697.f_13, false);
	}
}

void func_871()
{
	int iVar0[5];
	int iVar6;
	int iVar7;

	if (func_308())
	{
		func_1495();
		iVar6 = 0;
		iVar7 = func_833();
		switch (iVar7)
		{
			case 0:
				func_1495();
				iVar6 = (5 - 1);
				while (iVar6 >= 0)
				{
					iVar0[0] = iVar6;
					func_1496(&(iVar0[0]), iVar6);
					iVar6 = (iVar6 + -1);
				}
				break;
			case 1:
				func_1495();
				iVar0[0] = func_1497();
				func_1496(&(iVar0[0]), 0);
				break;
			case 2:
				func_1495();
				func_1498(&iVar0);
				iVar6 = (5 - 1);
				while (iVar6 >= 0)
				{
					func_1496(&(iVar0[iVar6]), iVar6);
					iVar6 = (iVar6 + -1);
				}
				break;
		}
	}
}

bool func_873(int iParam0)
{
	return aggregate_func_2923(Global_1896726->f_194, iParam0);
}

void func_874(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1501(iParam0, 1);
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 2)
	{
		return;
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(Global_1896726->f_377.f_2[iVar0])))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(Global_1896726->f_377.f_2[iVar0]), bParam1);
}

int func_875()
{
	return Global_1939221->f_1433.f_8769.f_3;
}

void func_876(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 173341;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173462;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173842;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180162;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180328;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180423;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180518;
			uParam0->f_11++;
			uParam0->f_12 = 187544;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180892;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180954;
			uParam0->f_11++;
			uParam0->f_12 = 187544;
			uParam0->f_13 = 1;
			break;
	}
}

void func_877(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 173341;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173462;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173842;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180162;
			uParam0->f_11++;
			uParam0->f_12 = 187833;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180954;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 188141;
			uParam0->f_11++;
			uParam0->f_12 = 187833;
			uParam0->f_13 = 1;
			break;
	}
}

void func_878(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 173341;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173462;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173842;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180162;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180892;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180954;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 188277;
			uParam0->f_11++;
			uParam0->f_12 = 188396;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180892;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180954;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 188277;
			uParam0->f_11++;
			uParam0->f_12 = 188396;
			uParam0->f_13 = 1;
			break;
	}
}

void func_879(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 173341;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173462;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173599;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 173842;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 180162;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 188495;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 188557;
			uParam0->f_11++;
			uParam0->f_12 = 188653;
			uParam0->f_13 = 1;
			break;
	}
}

void func_880()
{
	Global_1896726->f_3085.f_4 = 1;
}

void func_881()
{
	Global_1939221->f_1433.f_828.f_2.f_483 = 0;
	aggregate_func_6543(&(Global_1939221->f_1433.f_828), 0);
	NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
}

void func_883(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1510())
	{
		if (bParam1)
		{
			func_169();
			func_758();
		}
		return;
	}
	if (func_1511() == 0)
	{
		if (bParam1)
		{
			if (func_904() == func_902())
			{
				if (Global_1896726->f_3085.f_6 == 0)
				{
					func_758();
					func_169();
				}
				else
				{
					aggregate_func_5470(1);
				}
			}
			else if (func_1513())
			{
				func_758();
				func_169();
			}
			else
			{
				aggregate_func_5470(1);
			}
		}
	}
	if (func_1511() == 1)
	{
		func_1514(func_904());
		func_758();
		iVar0 = 0;
		while (iVar0 < Global_1896726->f_3085.f_6)
		{
			if (!func_1515(iParam0, Global_1896726->f_3085.f_7.f_1[iVar0 /*15*/]))
			{
			}
			else if (!func_851(Global_1896726->f_3085.f_7.f_1[iVar0 /*15*/], &((Global_1896726->f_3085.f_7.f_1[iVar0 /*15*/])->f_7), 0, iParam0))
			{
			}
			iVar0++;
		}
		aggregate_func_5470(2);
	}
	if (func_1511() == 2)
	{
		if (func_904() != func_1516())
		{
			aggregate_func_5470(0);
		}
		if (!bParam1)
		{
			aggregate_func_5470(0);
		}
	}
}

void func_884(int iParam0)
{
	int iVar0;
	var uVar1[32];
	struct<7> Var34[7];
	var uVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	var uVar97;

	if (iParam0 == 11)
	{
		if (func_1517(PLAYER::GET_PLAYER_INDEX()) && !func_1518(PLAYER::GET_PLAYER_INDEX()))
		{
			return;
		}
	}
	iVar0 = _NAMESPACE26::_0x53A94294FDDCF98C(&uVar1, 1);
	if (iVar0 > 1)
	{
		iVar89 = 0;
		while (iVar89 <= (iVar0 - 1))
		{
			if (iVar0 < 2)
			{
			}
			else if (!_NAMESPACE26::_0xD6F6ACF4392187FB(&(uVar1[iVar89])))
			{
			}
			else
			{
				iVar90 = iVar89 + 1;
				while (iVar90 <= (iVar0 - 1))
				{
					if (!_NAMESPACE26::_0xD6F6ACF4392187FB(&(uVar1[iVar90])))
					{
					}
					else
					{
						iVar87 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(&(uVar1[iVar89]));
						if (!NETWORK::_0x255A5EF65EDA9167(iVar87))
						{
						}
						else
						{
							iVar85 = aggregate_func_752(iVar87, 1, -1, 0);
							iVar88 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(&(uVar1[iVar90]));
							if (!NETWORK::_0x255A5EF65EDA9167(iVar88))
							{
							}
							else
							{
								iVar86 = aggregate_func_752(iVar88, 1, -1, 0);
								if (!func_1519(iVar86, iVar85))
								{
								}
								else
								{
									uVar84 = &uVar1[iVar89];
									uVar1[iVar89] = &uVar1[iVar90];
									uVar1[iVar90] = uVar84;
								}
							}
						}
					}
					iVar90++;
				}
			}
			iVar89++;
		}
		iVar89 = 0;
		while (iVar89 <= (iVar0 - 1))
		{
			if (!_NAMESPACE26::_0xD6F6ACF4392187FB(&(uVar1[iVar89])))
			{
			}
			else
			{
				iVar90 = iVar89 + 1;
				while (iVar90 <= (iVar0 - 1))
				{
					iVar87 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(&(uVar1[iVar89]));
					if (!NETWORK::_0x255A5EF65EDA9167(iVar87))
					{
					}
					else
					{
						iVar85 = aggregate_func_752(iVar87, 1, -1, 0);
						iVar91 = _NAMESPACE26::_0xD1BF325C8252A982(&(uVar1[iVar89]), &Var34);
						if (!_NAMESPACE26::_0xD6F6ACF4392187FB(&(uVar1[iVar90])))
						{
						}
						else
						{
							iVar88 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(&(uVar1[iVar90]));
							if (!NETWORK::_0x255A5EF65EDA9167(iVar88))
							{
							}
							else
							{
								iVar86 = aggregate_func_752(iVar88, 1, -1, 0);
								iVar92 = _NAMESPACE26::_0xD1BF325C8252A982(&(uVar1[iVar90]), &Var34);
								if (iVar86 != iVar85)
								{
								}
								else
								{
									if (iVar92 >= iVar91)
									{
									}
									else
									{
										uVar84 = &uVar1[iVar89];
										uVar1[iVar89] = &uVar1[iVar90];
										uVar1[iVar90] = uVar84;
									}
									iVar90++;
								}
								iVar89++;
								func_758();
								iVar94 = 0;
								while (iVar94 < 32)
								{
									if (!_NAMESPACE26::_0xD6F6ACF4392187FB(&(uVar1[iVar94])))
									{
									}
									else
									{
										iVar93 = _NAMESPACE26::_0xD1BF325C8252A982(&(uVar1[iVar94]), &Var34);
										iVar96 = 0;
										while (iVar96 < iVar93)
										{
											if (!aggregate_func_3096(*(Var34[iVar96 /*7*/])))
											{
											}
											else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(Var34[iVar96 /*7*/]))
											{
											}
											else
											{
												iVar95 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var34[iVar96 /*7*/]);
												if (!NETWORK::_0x255A5EF65EDA9167(iVar95))
												{
												}
												else if (_NAMESPACE26::_0x424B17A7DC5C90BC(iVar95))
												{
													MISC::_COPY_MEMORY(&uVar97, Var34[0 /*7*/], 7);
													MISC::_COPY_MEMORY(Var34[0 /*7*/], Var34[iVar96 /*7*/], 7);
													MISC::_COPY_MEMORY(Var34[iVar96 /*7*/], &uVar97, 7);
												}
												else
												{
													iVar96++;
												}
												iVar96 = 0;
												while (iVar96 < iVar93)
												{
													if (func_1344(Var34[iVar96 /*7*/]) != 0)
													{
													}
													else
													{
														iVar95 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var34[iVar96 /*7*/]);
														switch (iParam0)
														{
															case 7:
															case 8:
															case 9:
															case 10:
																if (func_1520(Var34[iVar96 /*7*/]))
																{
																}
																else
																{
																	Jump @799; //curOff = 767
																	if (func_1518(PLAYER::GET_PLAYER_INDEX()) && iVar95 == PLAYER::GET_PLAYER_INDEX())
																	{
																	}
																	else if (aggregate_func_4477(iVar95))
																	{
																	}
																	else if (!func_851(Var34[iVar96 /*7*/], PLAYER::GET_PLAYER_NAME(iVar95), aggregate_func_2122(iVar95), iParam0))
																	{
																	}
																}
																iVar96++;
																iVar94++;
																default:
																	break;
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
				}
			}
		}
	}
}

void func_885(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar582;
	int iVar583;

	if (!NETWORK::_0xA47D48D06AA5A188())
	{
		return;
	}
	switch (func_1522())
	{
		case 0:
			NETWORK::_0x5CB8B0C846D0F30B(0);
			if (!NETWORK::_0x3E4A16BC669E71B3())
			{
			}
			func_1523(NETWORK::_0xA94ECE191D90637A());
			func_1525(func_1524());
			func_1526();
			func_325(1);
			aggregate_func_5470(1);
		case 1:
			if (func_810())
			{
				if (NETWORK::_0x1F51F367B710A832())
				{
				}
			}
			bVar0 = false;
			bVar1 = false;
			iVar2 = 0;
			if (func_1527() < NETWORK::_0xA94ECE191D90637A() && func_1527() >= 0)
			{
				if (func_1524() != func_1527())
				{
					bVar1 = true;
				}
			}
			else
			{
				aggregate_func_5470(0);
				return;
			}
			if (bVar1)
			{
				while (bVar1)
				{
					if (iVar2 > 15)
					{
						bVar1 = false;
					}
					if (func_1524() < func_1527())
					{
						if (NETWORK::_0xDA1BFED8582F61F0())
						{
						}
						else
						{
							iVar2++;
						}
					}
					else if (func_1524() > func_1527())
					{
						if (NETWORK::_0x232E1EB23CDB313C())
						{
						}
						else
						{
							iVar2++;
						}
					}
					else
					{
						bVar1 = false;
						bVar0 = true;
					}
				}
				if (!bVar0)
				{
					aggregate_func_5470(0);
					return;
				}
			}
			if (!func_1528())
			{
				func_325(1);
			}
			func_1523(NETWORK::_0xA94ECE191D90637A());
			func_1525(func_1524());
			func_1526();
			vVar3.f_2 = 32;
			if (!NETWORK::_0xA3EEC0A5AFF3FC5B(&vVar3))
			{
				aggregate_func_5470(0);
				return;
			}
			func_758();
			iVar583 = 0;
			while (iVar583 < vVar3.y)
			{
				if (!NETWORK::NETWORK_IS_HANDLE_VALID(vVar3.f_2[iVar583 /*18*/]))
				{
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(vVar3.f_2[iVar583 /*18*/]))
					{
						iVar582 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(vVar3.f_2[iVar583 /*18*/]);
						if (aggregate_func_4477(iVar582))
						{
						}
						else
						{
							switch (iParam0)
							{
								case 7:
								case 8:
								case 9:
								case 10:
									if (func_1520(vVar3.f_2[iVar583 /*18*/]))
									{
									}
									else if (!func_851(vVar3.f_2[iVar583 /*18*/], &((vVar3.f_2[iVar583 /*18*/])->f_7), 0, iParam0))
									{
									}
									iVar583++;
									aggregate_func_5470(2);
									if (func_1529() != NETWORK::_0xA94ECE191D90637A())
									{
										NETWORK::_0x3E4A16BC669E71B3();
										aggregate_func_5470(1);
										return;
									}
									if (func_1527() != func_1530())
									{
										aggregate_func_5470(1);
										return;
									}
									if (aggregate_func_6547())
									{
										aggregate_func_5470(1);
										return;
									}
									if (func_810())
									{
										aggregate_func_5470(1);
										return;
									}
								}
							}
						}
					}
					default:
						break;
			}
		}

void func_886(int iParam0)
{
	if (Global_1939221->f_1433.f_828.f_2 == 0)
	{
		if (NETWORK::_0x4664D213A0CCAF40())
		{
			aggregate_func_6543(&(Global_1939221->f_1433.f_828), 1);
		}
		else if (NETWORK::_0x12AEB56B489415C5())
		{
			aggregate_func_6543(&(Global_1939221->f_1433.f_828), 1);
		}
		else if (NETWORK::_0x6D206D383BB5F6B1(0, 32))
		{
			aggregate_func_6543(&(Global_1939221->f_1433.f_828), 1);
		}
		else
		{
			func_881();
			NETWORK::_0x49CF17A564918E8D();
			func_169();
		}
	}
	if (Global_1939221->f_1433.f_828.f_2 == 1)
	{
		if (NETWORK::_0x12AEB56B489415C5())
		{
			Global_1939221->f_1433.f_828.f_2.f_483 = NETWORK::_0x37A834AEC6A4F74A();
			if (NETWORK::_0xFEFCC345CE357453(0, Global_1939221->f_1433.f_828.f_2.f_483, &(Global_1939221->f_1433.f_828.f_2.f_1), 482))
			{
				func_1531(iParam0);
				aggregate_func_6543(&(Global_1939221->f_1433.f_828), 2);
			}
			else
			{
				aggregate_func_6543(&(Global_1939221->f_1433.f_828), 0);
			}
		}
		else if (!NETWORK::_0x4664D213A0CCAF40())
		{
			aggregate_func_6543(&(Global_1939221->f_1433.f_828), 2);
		}
	}
	if (Global_1939221->f_1433.f_828.f_2 == 2)
	{
	}
}

int func_887()
{
	return Global_1896726->f_393.f_2691;
}

bool func_888(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_1896726->f_393.f_2691)
	{
		return false;
	}
	MISC::_COPY_MEMORY(iParam1, Global_1896726->f_393.f_2[iParam0 /*84*/], 84);
	return true;
}

int func_889(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	if (!aggregate_func_9257(iParam0))
	{
		return 0;
	}
	if (MINIGAME::_0xBEA7D3CB47E1479C())
	{
		return 0;
	}
	if (iParam2 > 32)
	{
		return 0;
	}
	bVar2 = func_1532(uParam1, iParam2);
	if (bVar2)
	{
		func_1533();
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (aggregate_func_3096(*((*uParam1)[iVar0 /*7*/])))
			{
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (iVar0 < iParam2 && aggregate_func_3096(*((*uParam1)[iVar0 /*7*/])))
			{
				*(Global_1131111->f_1[Global_1131111->f_259 /*7*/]) = { *((*uParam1)[iVar0 /*7*/]) };
				Global_1131111->f_259++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (aggregate_func_3096(*(Global_1131111->f_1[iVar0 /*7*/])))
			{
			}
			iVar0++;
		}
		iVar3 = 1;
	}
	Global_1131111->f_259 = aggregate_func_5045(Global_1131111->f_259, 0, 32);
	iVar0 = 0;
	while (iVar0 < Global_1131111->f_259)
	{
		if (aggregate_func_3096(*(Global_1131111->f_1[iVar0 /*7*/])))
		{
		}
		iVar0++;
	}
	if (Global_1131111->f_259 == 0)
	{
		return 0;
	}
	if (iVar3 == 0 && NETWORK::GET_CLOUD_TIME_AS_INT() < Global_1131111->f_260 + 30)
	{
		return 0;
	}
	Global_1131111->f_261 = 0;
	Global_1131111 = iParam0;
	iVar1 = func_1534(iParam0);
	if (MINIGAME::_0x398066F893149856(iVar1, &(Global_1131111->f_1), Global_1131111->f_259))
	{
		Global_1131111->f_260 = NETWORK::GET_CLOUD_TIME_AS_INT();
		return 1;
	}
	return 0;
}

bool func_890()
{
	return Global_1939221->f_1433.f_8769.f_245;
}

int func_891()
{
	return Global_1939221->f_1433.f_8769.f_247;
}

int func_892()
{
	return Global_1939221->f_1433.f_8769.f_246;
}

void func_893(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_156.f_613.f_1, "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_156.f_613.f_2, "");
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_156.f_613.f_2, sParam0);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_156.f_613.f_1, sParam0);
	}
	Global_1939221->f_1433.f_8769.f_240 = 0;
}

bool func_894()
{
	return Global_1939221->f_1433.f_8769.f_243;
}

bool func_896(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1939221->f_1433.f_8769.f_4)
	{
		return false;
	}
	return (Global_1939221->f_1433.f_8769.f_5[iParam0 /*23*/])->f_21;
}

int func_897()
{
	return Global_1896726->f_6.f_6;
}

bool func_898()
{
	return Global_1939221->f_1433.f_8769.f_242;
}

void func_899()
{
	Global_1939221->f_1433.f_8769.f_242 = 1;
}

bool func_900(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1939221->f_1433.f_8769.f_4)
	{
		return false;
	}
	Global_1939221->f_1433.f_8769.f_2 = Global_1939221->f_1433.f_8769;
	Global_1939221->f_1433.f_8769.f_3 = Global_1939221->f_1433.f_8769.f_1;
	Global_1939221->f_1433.f_8769 = iParam0;
	Global_1939221->f_1433.f_8769.f_1 = (Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_1;
	if (!(Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_22)
	{
	}
	Global_1939221->f_1433.f_8769.f_239 = 1;
	if (bParam1)
	{
		if ((Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_2 != -1)
		{
			UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(1433015236, (Global_1939221->f_1433.f_8769.f_5[Global_1939221->f_1433.f_8769 /*23*/])->f_2);
			Global_1939221->f_1433.f_8769.f_238 = 1;
		}
	}
	Global_1939221->f_1433.f_8769.f_236 = 1;
	return true;
}

int func_901()
{
	return Global_1896726->f_3085;
}

int func_902()
{
	return Global_1896726->f_3085.f_3;
}

void func_903(int iParam0)
{
	Global_1896726->f_3085.f_3 = iParam0;
}

int func_904()
{
	return Global_1896726->f_3085.f_2;
}

void func_905()
{
	Global_1896726->f_3085.f_5 = 0;
}

int func_906()
{
	return MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1896726->f_3085.f_5));
}

void func_907(int iParam0)
{
	Global_1896726->f_3085.f_2 = iParam0;
}

void func_909()
{
	Global_1896726->f_3085.f_5 = MISC::GET_GAME_TIMER();
}

void func_910()
{
	Global_1896726->f_3085.f_4 = 0;
}

int func_911()
{
	return Global_1896726->f_191;
}

void func_912(int iParam0)
{
	Global_1896726->f_191.f_2 = iParam0;
}

bool func_915(bool bParam0, bool bParam1)
{
	return func_1536(4, bParam0, bParam1);
}

bool func_917(bool bParam0, bool bParam1)
{
	return func_1536(5, bParam0, bParam1);
}

bool func_919(bool bParam0, bool bParam1)
{
	return func_1536(1, bParam0, bParam1);
}

bool func_920()
{
	return aggregate_func_6347(2);
}

bool func_921(bool bParam0, bool bParam1)
{
	return func_1536(2, bParam0, bParam1);
}

bool func_923(bool bParam0, bool bParam1)
{
	return func_1536(3, bParam0, bParam1);
}

bool func_924()
{
	return aggregate_func_6347(6);
}

bool func_925(bool bParam0, bool bParam1)
{
	return func_1536(6, bParam0, bParam1);
}

bool func_927(bool bParam0, bool bParam1)
{
	return func_1536(0, bParam0, bParam1);
}

void func_928()
{
	Global_1896726->f_191.f_1 = 0;
}

int func_929()
{
	return Global_1896726->f_6;
}

void func_935(int iParam0)
{
	Global_1896726->f_6.f_6 = iParam0;
}

void func_936(int iParam0)
{
	Global_1896726->f_6.f_1 = iParam0;
}

void func_956()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1497.f_115, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_116, false);
}

void func_957()
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_111, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_1497.f_112, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_113, false);
}

void func_958()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_118, false);
}

char* func_959(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1583();
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "INVITES_HEADER");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "LOG_HEADER");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "LOG_HEADER");
		case 4:
			return MISC::_CREATE_VAR_STRING(2, "DAILY_HEADER");
		case 5:
			return MISC::_CREATE_VAR_STRING(2, "PLAYERS_HEADER");
		case 21:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_INVITE_HEADER");
		case 6:
			return MISC::_CREATE_VAR_STRING(2, "PLAYERS_OPTIONS_HEADER");
		case 7:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_REPORT_HEADER");
		case 8:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_REPORT_HEADER");
		case 9:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_REPORT_HEADER");
		case 10:
			return MISC::_CREATE_VAR_STRING(2, "MATCHMAKING_HEADER");
		case 11:
			return MISC::_CREATE_VAR_STRING(2, "POST_OFFICE_HEADER");
		case 12:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_HEADER");
		case 13:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_HEADER");
		case 14:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_HEADER");
		case 15:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_HEADER");
		case 16:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_HEADER");
		case 17:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_HEADER");
		case 18:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_HEADER");
		case 19:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_HEADER");
		case 20:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_VERSUS_INFIGHTING_HEADER");
		case 22:
			return MISC::_CREATE_VAR_STRING(2, "POSSE_INVITE_HEADER");
		case 23:
			return MISC::_CREATE_VAR_STRING(2, "STABLES_HEADER");
		case 24:
			return MISC::_CREATE_VAR_STRING(2, "STABLES_HEADER");
		case 25:
			return MISC::_CREATE_VAR_STRING(2, "OWNED_HORSES_HEADER");
		case 26:
			return MISC::_CREATE_VAR_STRING(2, "HORSE_SPECIALTY_HEADER");
		case 27:
			return MISC::_CREATE_VAR_STRING(2, "HORSE_SPECIALTY_FREEROAM_SELECTION_HEADER");
		case 28:
			return MISC::_CREATE_VAR_STRING(2, "HORSE_SPECIALTY_RACE_SELECTION_HEADER");
		case 29:
			return MISC::_CREATE_VAR_STRING(2, "HORSE_SPECIALTY_COOP_SELECTION_HEADER");
		case 30:
			return MISC::_CREATE_VAR_STRING(2, "HORSE_SPECIALTY_COMPETITIVE_SELECTION_HEADER");
		case 31:
			return MISC::_CREATE_VAR_STRING(2, "STABLES_HEADER");
		case 32:
			return MISC::_CREATE_VAR_STRING(2, "OWNED_VEHICLES_HEADER");
		case 34:
			return MISC::_CREATE_VAR_STRING(2, "VEHICLE_SPECIALTY_FREEROAM_SELECTION_HEADER");
		case 35:
			return MISC::_CREATE_VAR_STRING(2, "VEHICLE_SPECIALTY_RACE_SELECTION_HEADER");
		case 36:
			return MISC::_CREATE_VAR_STRING(2, "VEHICLE_SPECIALTY_COOP_SELECTION_HEADER");
		case 37:
			return MISC::_CREATE_VAR_STRING(2, "VEHICLE_SPECIALTY_COMPETITIVE_SELECTION_HEADER");
		case 38:
			return MISC::_CREATE_VAR_STRING(2, "CAMP_HEADER");
		case 41:
			return MISC::_CREATE_VAR_STRING(2, "CAMP_LOCATION_HEADER");
		case 39:
			return MISC::_CREATE_VAR_STRING(2, "CAMP_LOCATION_HEADER");
		case 40:
			return MISC::_CREATE_VAR_STRING(2, "CAMP_HEADER");
		case 42:
			return MISC::_CREATE_VAR_STRING(2, "ONLINE_OPTIONS_HEADER");
		case 43:
			return MISC::_CREATE_VAR_STRING(2, "BOUNTY_HEADER_MP_OPEN_BOUNTIES");
		case 44:
			return MISC::_CREATE_VAR_STRING(2, "BOUNTY_REPLAY_HEADER");
		case 45:
			return MISC::_CREATE_VAR_STRING(2, "EMOTES_HEADER");
		case 46:
			return MISC::_CREATE_VAR_STRING(2, "EMOTES_HEADER");
		case 47:
			return MISC::_CREATE_VAR_STRING(2, "PLAYER_WALK_STYLES_HEADER");
		case 48:
		case 49:
		case 50:
		case 51:
			return MISC::_CREATE_VAR_STRING(2, "MINIGAME_POKER_HEADER");
		case 52:
			return MISC::_CREATE_VAR_STRING(2, "PLAYERS_HEADER");
		case 53:
			return MISC::_CREATE_VAR_STRING(2, "MOONSHINE_LOCATIONS_HEADER");
		case 54:
		case 55:
			return MISC::_CREATE_VAR_STRING(2, "CAMP_AND_PROPERTIES_HEADER");
		case 56:
			return MISC::_CREATE_VAR_STRING(2, "PROPERTY_INVITE_HEADER");
		default:
			break;
	}
	return "NULL";
}

bool func_962()
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_524288->f_39792;
	if (aggregate_func_4373())
	{
		return true;
	}
	if (!aggregate_func_4258())
	{
		return true;
	}
	if (aggregate_func_2619(255))
	{
		return true;
	}
	bVar1 = true;
	switch (iVar0)
	{
		case 1520184724:
			bVar1 = false;
			break;
	}
	if (bVar1)
	{
		if (aggregate_func_2255() == 2)
		{
			bVar1 = false;
		}
	}
	return bVar1;
}

bool func_963()
{
	return (aggregate_func_4442() || ((!aggregate_func_4258() && !aggregate_func_6688()) && !aggregate_func_4255(aggregate_func_4320())));
}

int func_965(var uParam0)
{
	int iVar0;

	if (uParam0->f_3)
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		if (iVar0 != uParam0->f_2)
		{
			return 0;
		}
	}
	else
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1))
		{
			return 0;
		}
		if (!_NAMESPACE26::_0x0F99F6436528A089(uParam0->f_1))
		{
			return 0;
		}
		if (uParam0->f_1 != Global_1273882->f_15)
		{
			return 0;
		}
	}
	return 1;
}

bool func_967(var uParam0)
{
	if (uParam0->f_3)
	{
		return true;
	}
	else
	{
		return _NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam0->f_1, PLAYER::PLAYER_ID());
	}
	return false;
}

int func_968(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	iVar0 = Global_1939221->f_1433.f_8769.f_4;
	if (iVar0 < 0)
	{
		return -1;
	}
	if (iVar0 >= 10)
	{
		return -1;
	}
	Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/] = iParam7;
	(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_1 = iParam1;
	(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_2 = iParam2;
	(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_3 = { aggregate_func_8066(sParam0) };
	(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_19 = iParam3;
	(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_20 = iParam4;
	(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_21 = iParam5;
	(Global_1939221->f_1433.f_8769.f_5[iVar0 /*23*/])->f_22 = iParam6;
	Global_1939221->f_1433.f_8769.f_4++;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_156.f_613.f_3, Global_1939221->f_1433.f_8769.f_4 > 1);
	if (iVar0 == 0)
	{
		Global_1939221->f_1433.f_8769.f_239 = 1;
		Global_1939221->f_1433.f_8769 = 0;
		Global_1939221->f_1433.f_8769.f_1 = iParam1;
		Global_1939221->f_1433.f_8769.f_2 = 0;
		Global_1939221->f_1433.f_8769.f_3 = iParam1;
	}
	return iVar0;
}

void func_970()
{
	aggregate_func_8067(0);
	func_1402(0);
	func_608();
	if (aggregate_func_4260(&(Global_1896726->f_13)))
	{
		aggregate_func_4313(&(Global_1896726->f_13));
	}
}

void func_971()
{
	Global_1896726->f_13.f_6 = 0;
	Global_1896726->f_13.f_9 = 0;
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896726->f_13.f_50.f_4, MISC::_CREATE_VAR_STRING(2, "NM_GC_TEXT_CAMP_NONE"));
	}
}

void func_973(bool bParam0)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_41.f_24) && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_41.f_23))
	{
		if (bParam0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_41.f_24, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896726->f_13.f_50.f_41.f_23, 1513236523);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_41.f_24, false);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896726->f_13.f_50.f_41.f_23, 126620015);
		}
	}
}

void func_974(bool bParam0)
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_99.f_24) && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_13.f_50.f_99.f_23))
	{
		if (bParam0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_99.f_24, false);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896726->f_13.f_50.f_99.f_23, -299269340);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_13.f_50.f_99.f_24, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896726->f_13.f_50.f_99.f_23, 1083456181);
		}
	}
}

bool func_975(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1586(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 < 0 || iVar0 >= func_779())
	{
		return false;
	}
	if (Global_1939221->f_1433.f_1 != iParam1)
	{
		return false;
	}
	func_900(iVar0, 1);
	return true;
}

bool func_977(char* sParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1939221->f_1433.f_156.f_263.f_91))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_156.f_263.f_91, sParam0);
	return true;
}

char* func_979(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PLAYERS_CATEGORY_NAME_NEARBY";
		case 1:
			return "PLAYERS_CATEGORY_NAME_FRIENDS";
		case 2:
			return "PLAYERS_CATEGORY_NAME_CREW";
		case 3:
			return "PLAYERS_CATEGORY_NAME_RECENT";
		default:
			break;
	}
	return "FILTER_ALL";
}

void func_980()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197.f_1, false);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197, false);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_197.f_3, 1433015236);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_197.f_4, -1996395310);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896726->f_197.f_2, "");
	}
}

char* func_982(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case 1:
			return "CAMP_LOCATION_CATEGORY_NEARBY";
		case 2:
			return "TITHE_AMBARINO";
		case 3:
			return "TITHE_LEMOYNE";
		case 4:
			return "TITHE_WEST_ELIZABETH";
		case 5:
			return "TITHE_NEW_HANOVER";
		case 6:
			return "TITHE_NEW_AUSTIN";
		default:
			break;
	}
	return "";
}

void func_983()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_393.f_1))
	{
		DATABINDING::_0x3BF0767CF33FCC88(Global_1896726->f_393.f_1);
	}
	aggregate_func_9312();
}

void func_984()
{
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197.f_1, true);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197, false);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_197.f_3, 1433015236);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896726->f_197.f_4, -1712603330);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896726->f_197.f_2, MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_VERSUS_CHANGE_TEAM"));
	}
}

void func_986(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_7697.f_2, -712210889);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_7697.f_3, func_1589(iParam0));
}

int func_988(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40;
		case 1:
			return 5;
		case 2:
			return 80;
		case 3:
			return 121;
		case 4:
			return 81;
		default:
			break;
	}
	return -1;
}

char* func_990(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case 1:
			return "MOONSHINE_LOC_FILTER_CLOSEST";
		case 2:
			return "MOONSHINE_LOC_FILTER_DISTANCE";
		default:
			break;
	}
	return "";
}

int func_1012(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -1895608703:
			return 0;
		case 76824010:
			return 1;
		case 1128045213:
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

int func_1035(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 57)
	{
		return 0;
	}
	MISC::_COPY_MEMORY(Global_1896726->f_3715[iVar0 /*4*/], iParam0, 4);
	return 1;
}

bool func_1044()
{
	bool bVar0;

	bVar0 = aggregate_func_4655(120839576, 59806960, 1, 0, 1, 0);
	if (!aggregate_func_4574(bVar0))
	{
		bVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return bVar0;
}

bool func_1045(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return ((*Global_1182189)[iParam0 /*17*/])->f_15;
}

bool func_1047(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (&Global_1181794 == 1)
	{
		return false;
	}
	if (!aggregate_func_8322(2))
	{
		return false;
	}
	if (Global_1181794->f_146 != 0 && &Global_1181794->f_168[iParam0 /*7*/] == Global_1181794->f_146)
	{
		return true;
	}
	return false;
}

int func_1050(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1412564789;
		case 3:
			return 2090637823;
		case 4:
			return -1740003396;
		case 5:
			return -1184411966;
		case 6:
			return -929764067;
		case 7:
			return 112216621;
		case 8:
			return -1767965617;
		case 9:
			return 81153145;
		case 0:
			return -1369928329;
		case 1:
			return -1804958860;
		case 10:
			return 485273815;
		case 15:
			return 1749906378;
		case 16:
			return 1485493317;
		case 17:
			return -1956038143;
		case 19:
			return 928731509;
		case 18:
			return -1013295952;
		default:
			break;
	}
	return 0;
}

bool func_1051()
{
	if ((Global_1273882->f_16 != 255 && &Global_1273882 != 255) && &Global_1273882 != Global_1273882->f_16)
	{
		return true;
	}
	return false;
}

bool func_1052()
{
	int iVar0;

	iVar0 = 13;
	while (iVar0 <= 15)
	{
		if (aggregate_func_3519(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1084(struct<4> Param0, var uParam4)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(*uParam4, Param0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam4->f_1, Param0.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam4->f_2, Param0.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam4->f_3, Param0.f_3);
}

int func_1086(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		return 3;
	}
	if (bParam0)
	{
		return 2;
	}
	if (bParam2)
	{
		return 0;
	}
	return 1;
}

void func_1087(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_1652(iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_22, 1210165179);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_20, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_27, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_7, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_8, -1915264523);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_9, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_10, true);
}

void func_1088(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (bParam2)
	{
		bVar0 = -44909892;
	}
	else
	{
		bVar0 = 444737100;
	}
	bVar1 = func_1653();
	bVar2 = false;
	if (bVar1)
	{
		bVar2 = aggregate_func_4790(75);
	}
	bVar3 = true;
	if (!bParam2 || (bVar1 && !bVar2))
	{
		bVar3 = false;
	}
	bVar4 = func_1652(iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_1, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_22, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_20, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_27, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_6, bVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_7, bVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_8, -1915264523);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_9, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_10, true);
}

void func_1089(int iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_22, -44909892);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_20, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_27, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_19, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", aggregate_func_6048(1806374467, 0, 59806960)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_7, 161109887);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_8, 1712450769);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_9, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_10, true);
}

void func_1090(int iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_1, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_22, -44909892);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_20, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_27, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_19, func_1654((iParam1 - Global_1273882->f_21) * 1000, 0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_7, -183012873);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_8, -1915264523);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_9, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_1622.f_3[iParam0 /*38*/])->f_10, false);
}

bool func_1100(int iParam0)
{
	switch (Global_1939221->f_1433.f_2190.f_372)
	{
		case 0:
			return (iParam0 >= 10 && iParam0 <= 14);
		default:
			break;
	}
	return false;
}

bool func_1101(int iParam0, int iParam1)
{
	var uVar0;
	bool bVar4;

	if (!aggregate_func_445(iParam0, &uVar0))
	{
		return false;
	}
	bVar4 = INVENTORY::_0x4C543D5DFCD2DAFD(&uVar0, iParam1);
	if (bVar4)
	{
		return true;
	}
	return false;
}

int func_1102(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_513.f_125[iVar0 /*7*/], &uParam0))
		{
			return (Global_1268935->f_513.f_125[iVar0 /*7*/])->f_5;
		}
		iVar0++;
	}
	return -1;
}

int func_1104(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam2 = 0;
	if (func_1661() || (func_1653() && !aggregate_func_4790(76)))
	{
		*iParam2 = 1;
		return 0;
	}
	if (func_1662() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	if (func_1663() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::_0xB9050A97594C8832(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if ((PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar1, iVar2) || PED::GET_VEHICLE_PED_IS_ENTERING(iVar1) == iVar2) || PED::GET_VEHICLE_PED_IS_USING(iVar1) == iVar2)
		{
			*iParam2 = 3;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar2) == -1772561076)
		{
			if (func_1664(iVar2) && !INVENTORY::_0x4C543D5DFCD2DAFD(iParam0, iParam1))
			{
				*iParam2 = 5;
				return 0;
			}
		}
	}
	if (aggregate_func_3031(4, iVar0))
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(iParam0, iParam1))
		{
			*iParam2 = 4;
			return 0;
		}
	}
	return 1;
}

int func_1105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*iParam2 = 0;
	if (func_1662() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	if (func_1663() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::_0xF49F14462F0AE27C(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		*iParam2 = 0;
		return 0;
	}
	iVar3 = PLAYER::_0xB9050A97594C8832(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		*iParam2 = 0;
		return 0;
	}
	if ((PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar1, iVar3) || PED::GET_VEHICLE_PED_IS_ENTERING(iVar1) == iVar3) || PED::GET_VEHICLE_PED_IS_USING(iVar1) == iVar3)
	{
		*iParam2 = 3;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if ((ENTITY::GET_ENTITY_MODEL(iVar3) == -1772561076 && func_1664(iVar3)) && INVENTORY::_0x4C543D5DFCD2DAFD(iParam0, iParam1))
		{
			*iParam2 = 5;
			return 0;
		}
	}
	return 1;
}

int func_1106(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		return 4;
	}
	if (bParam0)
	{
		return 3;
	}
	if (bParam3)
	{
		return 0;
	}
	if (bParam2)
	{
		return 1;
	}
	return 2;
}

bool func_1107(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1113(iParam0, iParam1, &iVar0, bParam2, bParam3);
	if (func_1114(iVar1, iVar0))
	{
		return true;
	}
	return false;
}

void func_1108(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (bParam2 || bParam3)
	{
		bVar0 = true;
	}
	bVar1 = func_1665(iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_1, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_21, joaat("blips"));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_22, 1012165077);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_20, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_27, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_7, bVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_8, 27564616);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_9, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_10, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_13, 908022114);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_14, 1380006198);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_15, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_16, true);
}

void func_1109(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = func_1653();
	bVar1 = false;
	if (bVar0)
	{
		bVar1 = aggregate_func_4790(76);
	}
	bVar2 = true;
	if (!bParam2 || (bVar0 && !bVar1))
	{
		bVar2 = false;
	}
	bVar3 = func_1665(iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_1, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_21, 672378911);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_22, -1236452613);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_20, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_27, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_7, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_8, 27564616);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_9, bVar2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_10, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_13, 908022114);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_14, 1380006198);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_15, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_16, false);
}

void func_1110(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = func_1653();
	bVar1 = false;
	if (bVar0)
	{
		bVar1 = aggregate_func_4790(76);
	}
	bVar2 = true;
	if (!bParam2 || (bVar0 && !bVar1))
	{
		bVar2 = false;
	}
	bVar3 = func_1665(iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_1, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_21, 672378911);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_22, -1236452613);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_20, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_27, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_6, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_7, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_8, 27564616);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_9, bVar2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_10, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_13, 908022114);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_14, 1380006198);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_15, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_16, false);
}

void func_1111(int iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_21, 672378911);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_22, -1236452613);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_20, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_27, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_19, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", aggregate_func_6048(852655472, 0, 59806960)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_7, -1997447231);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_8, 726532808);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_9, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_10, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_13, 908022114);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_14, 1380006198);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_15, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_16, false);
}

void func_1112(int iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_1, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_21, 672378911);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_22, -1236452613);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_20, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_27, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_19, func_1654((iParam1 - Global_1273882->f_21) * 1000, 0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_7, 1191420897);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_8, 27564616);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_9, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_10, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_13, 908022114);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_14, 1380006198);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_15, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2190.f_3[iParam0 /*38*/])->f_16, false);
}

int func_1113(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam2 = 0;
	if (!bParam3 && !bParam4)
	{
		return 0;
	}
	if (!bParam3)
	{
		*iParam2 = 2;
		return iParam1;
	}
	if (!bParam4)
	{
		*iParam2 = 1;
		return iParam0;
	}
	if (iParam0 >= iParam1)
	{
		*iParam2 = 1;
		return iParam0;
	}
	*iParam2 = 2;
	return iParam1;
}

bool func_1114(int iParam0, int iParam1)
{
	if (iParam0 != 0 && iParam1 != 0)
	{
		switch (iParam0)
		{
			case 1:
				switch (iParam1)
				{
					case 1:
						aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_DISABLE_CALLING_DISABLED"), joaat("COLOR_WHITE"));
						break;
					case 2:
						return false;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 1:
						aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_DISABLE_BUSY_CALL"), joaat("COLOR_WHITE"));
						break;
					case 2:
						aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_DISABLE_BUSY_DISMISS"), joaat("COLOR_WHITE"));
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 1:
						aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_DISABLE_ON_IT_CALL"), joaat("COLOR_WHITE"));
						break;
					case 2:
						aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_DISABLE_ON_IT_DISMISS"), joaat("COLOR_WHITE"));
						break;
				}
				break;
			case 4:
				switch (iParam1)
				{
					case 1:
						aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_DISABLE_SUMMON_CALL"), joaat("COLOR_WHITE"));
						break;
					case 2:
						return false;
				}
				break;
			case 5:
				switch (iParam1)
				{
					case 1:
						aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_DISABLE_BOUNTYP_CALL"), joaat("COLOR_WHITE"));
						break;
					case 2:
						aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_DISABLE_BOUNTYP_DISMISS"), joaat("COLOR_WHITE"));
						break;
				}
				break;
			case 6:
				switch (iParam1)
				{
					case 1:
						aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "VEHICLE_DISABLE_MOUNT_CALL"), joaat("COLOR_WHITE"));
						break;
					case 2:
						return false;
				}
				break;
		}
	}
	return true;
}

int func_1115(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1082007132;
		case 7:
			return -1321348724;
		default:
			break;
	}
	return 0;
}

int func_1117(vector3 vParam0)
{
	struct<4> Var0;
	int iVar5;

	if (!aggregate_func_1759(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -265879762;
	Var0.f_3 = 0;
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	return iVar5;
}

int func_1118(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	if (!aggregate_func_1759(&Var2, vParam1))
	{
		return 0;
	}
	Var2.f_2 = -265879762;
	Var2.f_3 = iParam0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = 536676462;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar1, &Var2))
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

bool func_1120(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	vector3 vVar0;

	if (vParam0.z == 0)
	{
		return false;
	}
	if (!aggregate_func_2606(vParam0, &vVar0))
	{
		return false;
	}
	if (func_1669(vParam0, iParam3, vVar0, iParam4, 1, 0, iParam5))
	{
		return true;
	}
	return false;
}

int func_1129()
{
	return Global_1958224->f_72;
}

void func_1148(struct<2> Param0, vector3 vParam2, float fParam5, int iParam6, int iParam7, float fParam8, struct<19> Param9)
{
	struct<27> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&fParam8))
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0 = { Param9 };
	Var0.f_19 = { Param0 };
	Var0.f_21 = { vParam2 };
	Var0.f_24 = fParam5;
	Var0.f_26 = iParam7;
	Var0.f_25 = iParam6;
	Var0.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 27, 37, &fParam8);
}

void func_1151(var uParam0, float fParam1)
{
	*uParam0 = 29;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 18, 38, fParam1);
}

bool func_1174(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam1[iVar0] == 0)
		{
			return false;
		}
		if (uParam1[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_1193(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<47> Var1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 65536);
	if (aggregate_func_1272() == PLAYER::PLAYER_ID())
	{
		aggregate_func_1062(iParam0, PLAYER::PLAYER_ID(), iParam1, iParam2, iVar0, iParam3);
	}
	else
	{
		Var1.f_5 = -1;
		Var1.f_9 = -1;
		Var1.f_10 = -1;
		Var1.f_11.f_1 = -1;
		Var1.f_11.f_5 = -1;
		Var1.f_11.f_5.f_1 = -1;
		Var1.f_11.f_7 = 255;
		Var1.f_4 = 1;
		Var1.f_5 = iParam0;
		Var1.f_6 = iParam1;
		Var1.f_7 = iParam2;
		Var1.f_8 = iVar0;
		Var1.f_46 = iParam3;
		func_1728(&Var1, aggregate_func_4507(0, 8));
	}
	return 1;
}

int func_1213(bool bParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	*iParam1 = 0;
	if (!aggregate_func_2823(bParam0, 0))
	{
		return 0;
	}
	if (aggregate_func_1552(bParam0))
	{
		return 0;
	}
	if (aggregate_func_2852(bParam0, 81450561) || aggregate_func_2852(bParam0, 1342455455))
	{
		return 0;
	}
	if (aggregate_func_4537(bParam0))
	{
		return 0;
	}
	iVar0 = aggregate_func_2035(bParam0, 1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!aggregate_func_2890(iVar0, -570078785, 0))
	{
		return 0;
	}
	if (Global_1915170->f_21989.f_2 == 1)
	{
		Var1 = { aggregate_func_304(bParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return 0;
		}
	}
	*iParam1 = iVar0;
	return 1;
}

int func_1225()
{
	var uVar0[32];
	int iVar33;
	int iVar34;
	int iVar35;

	iVar33 = 0;
	iVar34 = 0;
	iVar35 = 0;
	iVar33 = _NAMESPACE26::_0x53A94294FDDCF98C(&uVar0, 1);
	iVar34 = 0;
	while (iVar34 < iVar33)
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(&(uVar0[iVar34])))
		{
		}
		else if (!_NAMESPACE26::_0x0F99F6436528A089(&(uVar0[iVar34])))
		{
		}
		else
		{
			iVar35++;
		}
		iVar34++;
	}
	return iVar35;
}

char* func_1230(int iParam0)
{
	char* sVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (&Global_1180694->f_28.f_22[iVar1 /*13*/] == iParam0)
		{
			sVar0 = aggregate_func_1966((Global_1180694->f_28.f_22[iVar1 /*13*/])->f_5);
			return sVar0;
		}
		iVar1++;
	}
	return "FAILURE TO GRAB";
}

bool func_1231(char* sParam0, char* sParam1)
{
	int iVar0;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	if (iVar0 < 1)
	{
		return false;
	}
	if (MISC::COMPARE_STRINGS(sParam0, sParam1, false, iVar0) == 0)
	{
		return true;
	}
	return false;
}

bool func_1233(int iParam0)
{
	struct<28> Var0;

	Var0.f_27 = 10;
	if (POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		if (aggregate_func_3096(Var0.f_19) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var0.f_19)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_1234(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1180694->f_28.f_22[iVar0 /*13*/] == iParam0 && iParam0 != 0)
		{
			return (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_1;
		}
		iVar0++;
	}
	return false;
}

int func_1235(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1180694->f_28.f_22[iVar0 /*13*/] == iParam0 && (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_1)
		{
			iVar1 = (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_3;
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			else if (iVar1 > 7)
			{
				iVar1 = 7;
			}
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_1236(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<28> Var2;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1180694->f_28.f_22[iVar0 /*13*/] == iParam0 && (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_1)
		{
			iVar1 = (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_4;
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			else if (iVar1 > 7)
			{
				iVar1 = 7;
			}
			return iVar1;
		}
		iVar0++;
	}
	Var2.f_27 = 10;
	if (POSSE::_0xC087FF658B2E51DA(iParam0, &Var2))
	{
		return Var2.f_9.f_4;
	}
	return 0;
}

int func_1238(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1180694->f_440.f_2.f_9[iVar0 /*2*/] == iParam0)
		{
			return (Global_1180694->f_440.f_2.f_9[iVar0 /*2*/])->f_1;
		}
		iVar0++;
	}
	return -1;
}

int func_1239(var uParam0)
{
	int iVar0;

	if (Global_1180694->f_116.f_4)
	{
		iVar0 = Global_1180694->f_116;
	}
	else
	{
		iVar0 = aggregate_func_8526(uParam0);
	}
	return iVar0;
}

bool func_1240(int iParam0, var uParam1)
{
	struct<99> Var0;
	int iVar99;
	int iVar100;
	struct<7> Var101;
	struct<7> Var108;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	Var0.f_18 = 10;
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iParam0))
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
		{
			return false;
		}
		iVar100 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar100))
		{
			return false;
		}
		Var101 = { aggregate_func_2843(iVar100) };
		iVar99 = 0;
		while (iVar99 <= (POSSE::_0xC084FF658B2E61DA(&Var101) - 1))
		{
			if ((POSSE::_0xC084FF658B2E71DA(&Var101, iVar99, &Var0) && Var0 != 0) && Var0.f_9 == 1)
			{
				*uParam1 = { Var0 };
				return true;
			}
			iVar99++;
		}
	}
	else
	{
		Var108 = { aggregate_func_2843(iParam0) };
		iVar99 = 0;
		while (iVar99 <= (POSSE::_0xC084FF658B2E61DA(&Var108) - 1))
		{
			if (POSSE::_0xC084FF658B2E71DA(&Var108, iVar99, &Var0) && Var0.f_9 == 1)
			{
				*uParam1 = { Var0 };
				return true;
			}
			iVar99++;
		}
	}
	return false;
}

void func_1246(var uParam0)
{
	var uVar0;

	*uParam0 = 23;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uVar0 = aggregate_func_4507(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 17, &uVar0);
}

bool func_1266(var uParam0)
{
	if ((_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1) && _NAMESPACE26::_0x0F99F6436528A089(uParam0->f_1)) && _NAMESPACE26::_0x149A2751AB66AC02(uParam0->f_1) >= _NAMESPACE26::_0x853B0FA4D8732C57(uParam0->f_1))
	{
		return true;
	}
	return false;
}

bool func_1267(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_1))
	{
		return false;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(uParam0->f_1);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar1 = iVar0;
		if (iVar1 >= 0 && iVar1 < 32)
		{
			if (((*Global_1055965)[iVar1 /*436*/])->f_2 != -1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1268(int* iParam0)
{
	struct<19> Var0;
	int iVar99;

	if (!aggregate_func_3096(*iParam0))
	{
		return false;
	}
	Var0.f_18 = 10;
	iVar99 = 0;
	while (iVar99 <= (POSSE::_0xC084FF658B2E61DA(iParam0) - 1))
	{
		if (POSSE::_0xC084FF658B2E71DA(iParam0, iVar99, &Var0) && Var0.f_9)
		{
			if (Var0.f_17 >= 10)
			{
				return false;
			}
		}
		iVar99++;
	}
	return true;
}

int func_1328()
{
	return Global_1268935->f_897.f_5;
}

int func_1344(int* iParam0)
{
	int iVar0;

	if (!aggregate_func_6548())
	{
		return 4;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam0))
	{
		return 2;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 3;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 5;
	}
	if (!aggregate_func_7029(iVar0))
	{
		return 6;
	}
	if (func_1801(*iParam0) != 0)
	{
		return 7;
	}
	return 0;
}

bool func_1345(int iParam0, int iParam1)
{
	struct<7> Var0;
	int iVar7;
	struct<28> Var8;
	int iVar126;
	struct<19> Var127;
	int iVar226;
	int iVar227;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar7);
		Var8.f_27 = 10;
		if (iVar7 != 0)
		{
			Var0 = { aggregate_func_3106() };
			if (POSSE::_0xC087FF658B2E51DA(iVar7, &Var8))
			{
				iVar126 = 0;
				while (iVar126 <= 9)
				{
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Var8.f_27[iVar126 /*9*/], &Var0))
					{
						*iParam1 = (Var8.f_27[iVar126 /*9*/])->f_7;
						return true;
					}
					iVar126++;
				}
			}
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		Var0 = { aggregate_func_2843(iParam0) };
		Var127.f_18 = 10;
		iVar226 = 0;
		while (iVar226 <= (POSSE::_0xC084FF658B2E61DA(&Var0) - 1))
		{
			if (POSSE::_0xC084FF658B2E71DA(&Var0, iVar226, &Var127))
			{
				if (Var127.f_9 == 1)
				{
					iVar227 = 0;
					while (iVar227 <= (Var127.f_17 - 1))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Var127.f_18[iVar227 /*8*/], &Var0))
						{
							*iParam1 = (Var127.f_18[iVar227 /*8*/])->f_7;
							return true;
						}
						iVar227++;
					}
				}
				else
				{
					iVar226++;
				}
				return false;
				Jump @268; //curOff = 261
				return false;
				return false;
			}
		}
	}
}

void func_1347(var uParam0, struct<62> Param1, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3, Param1.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_21, Param1.f_19);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_22, Param1.f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, Param1.f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_27, &(Param1.f_25));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_28, &(Param1.f_41));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, Param1.f_57);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_31, Param1.f_59);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_32, Param1.f_60);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_33, Param1.f_61);
}

bool func_1348(int iParam0)
{
	return aggregate_func_4240(Global_1939221->f_1433.f_54, iParam0);
}

void func_1349()
{
	int iVar0;
	struct<35> Var1;
	struct<2> Var36;
	int iVar38;
	int iVar39;
	int iVar40;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939221->f_242.f_14[Global_1939221->f_242.f_1190 /*39*/])->f_27);
	Var1.f_8 = -1;
	Var1.f_8.f_1 = -1;
	Var1.f_16.f_12 = -1;
	Var1.f_16.f_12.f_1 = -1;
	Var1.f_16.f_14 = 255;
	Var1.f_16.f_15 = 255;
	if (Global_1070355->f_14 > 0 && iVar0 < 10)
	{
		Var1 = { *(Global_1070355->f_14.f_5[iVar0 /*35*/]) };
	}
	if (!Var1)
	{
		return;
	}
	Var36 = { Var1.f_8 };
	iVar38 = aggregate_func_4306(Var36);
	switch (iVar38)
	{
		case 20:
		case 21:
		case 28:
			iVar39 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939221->f_242.f_14[iVar0 /*39*/])->f_25);
			iVar40 = (Global_1273882->f_21 - (iVar39 - (Global_1901929->f_295.f_167 / 1000)));
			TELEMETRY::_0xF37A2149BC9A8A27(729112912, Var1.f_16.f_1, PLAYER::PLAYER_ID(), 0, iVar40);
			break;
	}
}

bool func_1350(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		case 16:
			return true;
		case 17:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

char* func_1351(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	struct<7> Var19;

	switch (iParam0)
	{
		case 8:
			iVar17 = DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939221->f_242.f_14[iParam1 /*39*/])->f_28);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar17))
			{
				return iVar0;
			}
			switch (aggregate_func_347(&Var1, iVar17, 1))
			{
				case 1:
					return iVar0;
				case 2:
					if (aggregate_func_5988() == 0)
					{
						aggregate_func_3715(PLAYER::INT_TO_PLAYERINDEX(iVar17));
					}
					return iVar0;
				case 3:
					return iVar0;
				case 4:
					iVar0 = aggregate_func_1976(Var1);
					return iVar0;
				default:
					break;
			}
			break;
		case 1:
			Var19 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
			aggregate_func_4239(&Var19);
			iVar18 = NETWORK::_0x27B1AE4D8C652F08(DATABINDING::_DATABINDING_READ_DATA_INT((Global_1939221->f_242.f_14[iParam1 /*39*/])->f_27));
			NETWORK::_0x16EFB123C4451032(iVar18, &Var19);
			aggregate_func_4239(&Var19);
			if (!aggregate_func_3096(Var19))
			{
				return iVar0;
			}
			iVar0 = NETWORK::_0xB5C4B18B12A2AF23(&Var19, 0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(iVar0))
			{
				return iVar0;
			}
			break;
	}
	return iVar0;
}

var func_1352(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 57)
	{
		return uVar1;
	}
	return (Global_1896726->f_3715[iVar0 /*4*/])->f_3;
}

bool func_1354(bool bParam0, var uParam1, bool bParam2)
{
	char cVar0[64];
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	char cVar13[64];

	if (bParam2)
	{
		if (!func_212(uParam1))
		{
			return false;
		}
	}
	StringCopy(&cVar0, "Posse_Entry_Root_", 64);
	StringIntConCat(&cVar0, DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_156.f_1), 64);
	iVar8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1939221->f_1433.f_156.f_1, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, aggregate_func_4915(0), true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, aggregate_func_4915(1), true);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(2), joaat("COLOR_WHITE"));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(55), 1433015236);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(57), 298326212);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(56), 298326212);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(58), joaat("ib_select"));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, aggregate_func_4915(59), true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, aggregate_func_4915(60), true);
	bVar9 = aggregate_func_4287(uParam1);
	bVar10 = func_757(uParam1);
	bVar11 = func_967(uParam1);
	bVar12 = aggregate_func_4287(uParam1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar8, aggregate_func_4915(15), aggregate_func_9308(uParam1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(5), joaat("overhead"));
	if (func_1410(uParam1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(6), 202246788);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(6), -799556240);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, aggregate_func_4915(7), bVar9);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(4), 551037070);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(21), joaat("hud_textures"));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, aggregate_func_4915(22), joaat("check"));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, aggregate_func_4915(23), (bVar11 && bVar10));
	IntToString(&cVar13, aggregate_func_4249(uParam1), 64);
	StringConCat(&cVar13, "/", 64);
	StringIntConCat(&cVar13, aggregate_func_4249(uParam1), 64);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar8, aggregate_func_4915(17), aggregate_func_1966(cVar13));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, aggregate_func_4915(19), !(bVar11 && bVar10));
	if (!bVar11)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, aggregate_func_4915(0), bVar12);
		if (bVar12)
		{
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_LOCAL_MEMBERSHIP", bVar9);
	DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(iVar8, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_GANG_ID", uParam1->f_1);
	DATABINDING::_0x7D0F2014DB28DD01(iVar8, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_ID", uParam1->f_2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939221->f_1433.f_156.f_1, bParam0, "pm_dynamic_posse_entry", iVar8);
	return true;
}

bool func_1355(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[64];

	if (bParam0 < 0 || bParam0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1939221->f_1433.f_156.f_1))
	{
		return false;
	}
	if (bParam2)
	{
		if (!func_212(uParam1))
		{
			return false;
		}
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1939221->f_1433.f_156.f_1, bParam0);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return false;
	}
	bVar1 = aggregate_func_4287(uParam1);
	bVar2 = func_757(uParam1);
	bVar3 = func_967(uParam1);
	bVar4 = aggregate_func_4287(uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, aggregate_func_4915(15), aggregate_func_9308(uParam1));
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, aggregate_func_4915(5), joaat("overhead"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, aggregate_func_4915(4), 551037070);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, aggregate_func_4915(7), (bVar1 && bVar3));
		if (func_1410(uParam1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, aggregate_func_4915(6), 202246788);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, aggregate_func_4915(6), 1292500213);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, aggregate_func_4915(5), 1210712530);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, aggregate_func_4915(7), !bVar4);
		if (!bVar4)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, aggregate_func_4915(4), -2028925062);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, aggregate_func_4915(6), 566347780);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, aggregate_func_4915(23), (bVar3 && bVar2));
	IntToString(&cVar5, aggregate_func_4249(uParam1), 64);
	StringConCat(&cVar5, "/", 64);
	StringIntConCat(&cVar5, aggregate_func_4249(uParam1), 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, aggregate_func_4915(17), aggregate_func_1966(cVar5));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, aggregate_func_4915(19), !(bVar3 && bVar2));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, aggregate_func_4915(0), bVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_LOCAL_MEMBERSHIP", bVar1);
	DATABINDING::_0xC70041408E16BE2D(iVar0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_GANG_ID", uParam1->f_1);
	DATABINDING::_0xC70041408E16BE2E(iVar0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_ID", uParam1->f_2);
	return true;
}

int func_1357(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	else if (POSSE::_0xC088FF658B2E51DA() == 0)
	{
		return 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (&Global_1180694->f_501[iVar0 /*118*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1361(var uParam0, struct<4> Param1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, Param1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_2, Param1.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3, Param1.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, Param1.f_3);
}

bool func_1364(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 16)
	{
		return false;
	}
	return aggregate_func_4250(Global_1131373->f_11.f_3216.f_1091[iParam0 /*4*/], 1);
}

int func_1365(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<7> Var2[7];
	int iVar52;
	int iVar53;
	int iVar54;

	iVar52 = _NAMESPACE26::_0xD1BF325C8252A982(uParam0->f_1, &Var2);
	iVar53 = 0;
	while (iVar53 < iVar52)
	{
		iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var2[iVar53 /*7*/]);
		iVar1 = aggregate_func_2043(iVar54, 0);
		switch (iVar1)
		{
			case 0:
			case 1:
				if (iVar0 < 1)
				{
					iVar0 = 0;
				}
				break;
			case 2:
			case 3:
				if (iVar0 < 2)
				{
					iVar0 = 1;
				}
				break;
			case 4:
			case 5:
			case 6:
				iVar0 = 2;
				break;
		}
		iVar53++;
	}
	return iVar0;
}

void func_1366(var uParam0, struct<51> Param1, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, bool bParam67)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, Param1);
	if (Param1 || bParam67)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_46, &(Param1.f_1));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, &(Param1.f_17));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_48, Param1.f_33);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_49, &(Param1.f_34));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_50, &(Param1.f_50));
	}
}

void func_1367(var uParam0)
{
	var uVar0;

	MISC::_COPY_MEMORY(&(uParam0->f_1), &uVar0, 7);
	uParam0->f_24 = 0;
	StringCopy(&(uParam0->f_8), "", 128);
	*uParam0 = 0;
	uParam0->f_27 = -1;
	uParam0->f_28 = -1;
	uParam0->f_25 = -1;
}

int func_1368()
{
	return Global_1939221->f_1433.f_8769.f_244;
}

bool func_1370(int iParam0)
{
	if (Global_1896726->f_393.f_2691 >= 32)
	{
		return false;
	}
	func_1367(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/]);
	(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/])->f_27 = -1419617212;
	(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/])->f_28 = iParam0;
	Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/] = 0;
	Global_1896726->f_393.f_2691++;
	return true;
}

int func_1371(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
	}
	uParam0->f_19 = joaat("overhead");
	uParam0->f_20 = 1292500213;
	aggregate_func_4247(&(uParam1->f_25), 256);
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 1;
	}
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		return 1;
	}
	if (!_NAMESPACE26::_0x0F99F6436528A089(iVar1))
	{
		return 1;
	}
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
	{
		uParam0->f_20 = 202246788;
	}
	return 1;
}

int func_1372(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam2)
	{
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_1)))
	{
		return 1;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 1;
	}
	bVar1 = (_NAMESPACE79::_0xAA35FD9ABAB490A3(iVar0) && _NAMESPACE79::_0xEF6F2A35FAAF2ED7(iVar0));
	if (_NAMESPACE79::_0x0DED260A1958A82E(iVar0))
	{
		uParam0->f_20 = -2020914324;
		uParam0->f_19 = joaat("overhead");
	}
	else if (bVar1)
	{
		uParam0->f_20 = -129728325;
		uParam0->f_19 = joaat("overhead");
	}
	aggregate_func_4247(&(uParam1->f_25), 256);
	return 1;
}

int func_1373(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	var uVar1;
	int iVar17;
	int iVar18;

	if (bParam2)
	{
	}
	aggregate_func_4247(&(uParam1->f_25), 128);
	bVar0 = false;
	iVar18 = 255;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_1)))
	{
		iVar18 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
		if (NETWORK::_0x255A5EF65EDA9167(iVar18))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		iVar17 = aggregate_func_347(&uVar1, iVar18, 1);
		if (iVar17 != 4)
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		iVar17 = func_1810(&uVar1, uParam1->f_1, 0);
	}
	switch (iVar17)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			uParam0->f_16 = 1700592256;
			uParam0->f_17 = 1434360011;
			uParam0->f_18 = 1;
			return 1;
		case 4:
			if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
			{
				uParam0->f_16 = 1700592256;
				uParam0->f_17 = 1434360011;
				uParam0->f_18 = 1;
			}
			else
			{
				uParam0->f_16 = MISC::GET_HASH_KEY(&uVar1);
				uParam0->f_17 = uParam0->f_16;
				uParam0->f_18 = 1;
			}
			return 1;
		default:
			break;
	}
	return 1;
}

int func_1374(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_1)))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	uParam1->f_24 = aggregate_func_2122(iVar0);
	uParam0->f_59 = -1693157378;
	uParam0->f_60 = -1120556042;
	uParam0->f_61 = 1;
	StringCopy(&(uParam0->f_41), func_1811(uParam1->f_24), 128);
	uParam0->f_57 = 1;
	aggregate_func_4247(&(uParam1->f_25), 1536);
	return 1;
}

int func_1375(var uParam0, char* sParam1)
{
	struct<95> Var0;

	Var0 = { func_183(1) };
	switch (uParam0->f_27)
	{
		case 791621612:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "NM_MW_POSSE_MEMBER_LOCKED_FOOTER"), 128);
			return 1;
		case -1419617212:
			if (!func_757(&Var0) && func_1410(&Var0))
			{
				StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP"), 128);
				return 1;
			}
			break;
	}
	return 0;
}

int func_1376(var uParam0, var uParam1, bool bParam2)
{
	struct<95> Var0;

	aggregate_func_4247(&(uParam1->f_25), 8192);
	if (bParam2)
	{
	}
	Var0 = { func_183(1) };
	switch (uParam1->f_27)
	{
		case -1419617212:
			uParam0->f_9 = func_1410(&Var0);
			uParam0->f_8 = ((func_1410(&Var0) && aggregate_func_9315()) && func_757(&Var0));
			break;
	}
	return 1;
}

int func_1378(var uParam0)
{
	if (uParam0->f_4)
	{
		return 7;
	}
	else
	{
		return 4;
	}
	return 0;
}

bool func_1379(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_36)
	{
		return false;
	}
	MISC::_COPY_MEMORY(iParam2, uParam0->f_38[iParam1 /*7*/], 7);
	return true;
}

bool func_1380(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_29)))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uParam1))
	{
		return false;
	}
	return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->f_29), &uParam1);
}

int func_1381(int iParam0, int iParam1)
{
	struct<29> Var0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	func_1812(&Var0, Global_1896726->f_393.f_2[iParam0 /*84*/]);
	func_1812(Global_1896726->f_393.f_2[iParam0 /*84*/], Global_1896726->f_393.f_2[iParam1 /*84*/]);
	func_1812(Global_1896726->f_393.f_2[iParam1 /*84*/], &Var0);
	return 1;
}

bool func_1382(int iParam0)
{
	if (Global_1896726->f_393.f_2691 >= 32)
	{
		return false;
	}
	func_1367(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/]);
	(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/])->f_27 = 791621612;
	(Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/])->f_28 = iParam0;
	Global_1896726->f_393.f_2[Global_1896726->f_393.f_2691 /*84*/] = 0;
	Global_1896726->f_393.f_2691++;
	return true;
}

bool func_1383(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, int iParam96)
{
	struct<5> Var0;
	struct<7> Var5;
	int iVar12;

	if (!func_212(&uParam1))
	{
		return false;
	}
	Var0 = 1;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam96))
	{
		Var0 = 1;
	}
	else
	{
		Var0 = 0;
		return false;
	}
	Var5 = { aggregate_func_2843(iParam96) };
	Var0.f_1 = func_1380(&uParam1, Var5);
	if (Var0.f_1)
	{
	}
	if (func_1364(aggregate_func_3504(iParam96)))
	{
		Var0.f_2 = "NM_HONOR_GOOD";
	}
	else
	{
		Var0.f_2 = "NM_HONOR_BAD";
	}
	iVar12 = aggregate_func_2043(iParam96, 0);
	switch (iVar12)
	{
		case 0:
		case 1:
			Var0.f_3 = "HOSTILITY_NLOW";
			Var0.f_4 = joaat("COLOR_WHITE");
			break;
		case 2:
		case 3:
			Var0.f_3 = "HOSTILITY_NMED";
			Var0.f_4 = joaat("COLOR_WHITE");
			break;
		case 4:
		case 5:
		case 6:
			Var0.f_3 = "HOSTILITY_NHIGH";
			Var0.f_4 = joaat("COLOR_RED");
			break;
		default:
			Var0.f_3 = "HOSTILITY_NMED";
			Var0.f_4 = joaat("COLOR_WHITE");
			break;
	}
	func_1813(uParam0, Var0, 0);
	return true;
}

void func_1384(int iParam0)
{
	struct<88> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_21 = 1;
	Var0.f_86 = 255;
	Var0.f_87 = -2147483647;
	MISC::_COPY_MEMORY(iParam0, &Var0, 88);
}

bool func_1385(var uParam0)
{
	if (uParam0->f_27 == 791621612 || uParam0->f_27 == -1419617212)
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_1)))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(aggregate_func_1976(uParam0->f_8)))
	{
		return false;
	}
	return true;
}

bool func_1386(var uParam0)
{
	switch (uParam0->f_27)
	{
		case -1178838578:
			if (func_1344(&(uParam0->f_1)) != 0)
			{
				if (uParam0->f_27 != -462010351)
				{
					uParam0->f_27 = -462010351;
					return true;
				}
			}
			break;
		case -462010351:
			if (func_1344(&(uParam0->f_1)) == 0)
			{
				if (uParam0->f_27 != -1178838578)
				{
					uParam0->f_27 = -1178838578;
					return true;
				}
			}
			break;
	}
	return false;
}

int func_1388()
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_393.f_1))
	{
		return 0;
	}
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1896726->f_393.f_1);
}

bool func_1390(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 == -1)
	{
		return false;
	}
	*uParam0 = 1;
	uParam0->f_4 = 1433015236;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_3 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_7 = 0;
	uParam0->f_18 = 1;
	uParam0->f_17 = 0;
	uParam0->f_16 = 0;
	uParam0->f_21 = 1;
	uParam0->f_20 = 1292500213;
	uParam0->f_19 = joaat("overhead");
	uParam0->f_61 = 0;
	uParam0->f_2 = joaat("COLOR_WHITE");
	switch (iParam1)
	{
		case -1178838578:
			uParam0->f_16 = joaat("hud_textures");
			uParam0->f_17 = -1102349958;
			uParam0->f_18 = 1;
			uParam0->f_57 = 1;
			uParam0->f_58 = 1;
			uParam0->f_61 = 1;
			uParam0->f_60 = -1120556042;
			uParam0->f_59 = -1693157378;
			break;
		case -462010351:
			uParam0->f_21 = 1;
			uParam0->f_8 = 1;
			uParam0->f_9 = 1;
			uParam0->f_7 = joaat("ib_select");
			uParam0->f_5 = 252544183;
			uParam0->f_6 = 252544183;
			break;
		case 791621612:
			uParam0->f_8 = 0;
			uParam0->f_5 = -1015941340;
			uParam0->f_18 = 0;
			uParam0->f_19 = 1210712530;
			uParam0->f_20 = 566347780;
			StringCopy(&(uParam0->f_25), MISC::_CREATE_VAR_STRING(2, "NM_PW_PLAYER_SLOT_LOCKED"), 128);
			uParam0->f_2 = joaat("COLOR_GREYDARK");
			break;
		case -1419617212:
			uParam0->f_8 = 0;
			uParam0->f_5 = -974997823;
			uParam0->f_18 = 0;
			uParam0->f_21 = 0;
			StringCopy(&(uParam0->f_25), MISC::_CREATE_VAR_STRING(2, "NM_PW_PLAYER_SLOT_EMPTY"), 128);
			uParam0->f_2 = joaat("COLOR_GREYDARK");
			break;
	}
	switch (iParam2)
	{
		case 11:
			uParam0->f_5 = -758886156;
			uParam0->f_6 = -758886156;
			uParam0->f_9 = 1;
			uParam0->f_8 = 1;
			uParam0->f_7 = joaat("ib_invite");
			if (MISC::IS_DURANGO_VERSION())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -523963307;
				uParam0->f_63 = 2073125152;
			}
			break;
		case 0:
		case 1:
		case 2:
		case 3:
			uParam0->f_3 = -1105836878;
			uParam0->f_5 = 252544183;
			uParam0->f_6 = 252544183;
			uParam0->f_8 = 1;
			uParam0->f_9 = 1;
			uParam0->f_7 = joaat("ib_select");
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_74 = -1333411438;
					uParam0->f_73 = 1;
					uParam0->f_70 = 295375257;
					uParam0->f_69 = 1;
					break;
				case -462010351:
					uParam0->f_3 = -1105836878;
					break;
			}
			break;
		case 4:
			uParam0->f_5 = -779773310;
			uParam0->f_9 = 1;
			uParam0->f_7 = 1722688309; /* GXTEntry: "Start" */
			if (MISC::IS_DURANGO_VERSION())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -523963307;
				uParam0->f_63 = 2073125152;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_3 = -1105836878;
					uParam0->f_5 = -1103748417;
					uParam0->f_6 = -1103748417;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = joaat("ib_select");
					break;
				case -462010351:
					uParam0->f_3 = -1105836878;
					uParam0->f_5 = 252544183;
					uParam0->f_6 = -1103748417;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = joaat("ib_select");
					break;
				case 791621612:
					uParam0->f_8 = 0;
					uParam0->f_5 = -1015941340;
					uParam0->f_18 = 0;
					break;
				case -1419617212:
					uParam0->f_3 = -1224643444;
					uParam0->f_9 = 1;
					uParam0->f_7 = joaat("ib_invite");
					uParam0->f_8 = 1;
					uParam0->f_8 = 0;
					uParam0->f_5 = -974997823;
					uParam0->f_18 = 0;
					uParam0->f_21 = 0;
					uParam0->f_2 = joaat("COLOR_GREYDARK");
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_3 = -1105836878;
					uParam0->f_5 = -1103748417;
					uParam0->f_6 = -1103748417;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = joaat("ib_select");
					break;
				case -462010351:
					uParam0->f_3 = -1105836878;
					uParam0->f_5 = 252544183;
					uParam0->f_6 = -1103748417;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = joaat("ib_select");
					break;
				case -1419617212:
					uParam0->f_8 = 0;
					uParam0->f_5 = -974997823;
					uParam0->f_18 = 0;
					uParam0->f_21 = 0;
					uParam0->f_2 = joaat("COLOR_GREYDARK");
					break;
			}
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			uParam0->f_5 = 1229094512;
			uParam0->f_6 = 1229094512;
			uParam0->f_9 = 1;
			uParam0->f_7 = joaat("ib_invite");
			if (MISC::IS_DURANGO_VERSION())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -523963307;
				uParam0->f_63 = 2073125152;
			}
			break;
		case 12:
		case 13:
		case 14:
			uParam0->f_5 = 573237416;
			uParam0->f_6 = 573237416;
			uParam0->f_9 = 1;
			uParam0->f_7 = joaat("ib_invite");
			if (MISC::IS_DURANGO_VERSION())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -523963307;
				uParam0->f_63 = 2073125152;
			}
			break;
		case 15:
			uParam0->f_8 = 1;
			uParam0->f_9 = 1;
			uParam0->f_7 = joaat("ib_select");
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_74 = -1333411438;
					uParam0->f_73 = 1;
					uParam0->f_70 = 295375257;
					uParam0->f_69 = 1;
					uParam0->f_5 = 252544183;
					uParam0->f_6 = 252544183;
					if (MISC::IS_DURANGO_VERSION())
					{
						uParam0->f_64 = 1;
						uParam0->f_65 = 1;
						uParam0->f_66 = -523963307;
						uParam0->f_63 = 2073125152;
					}
					break;
				case -1419617212:
					uParam0->f_3 = 410425589;
					uParam0->f_9 = 1;
					uParam0->f_8 = 1;
					uParam0->f_7 = joaat("ib_invite");
					if (func_735())
					{
						uParam0->f_5 = 596189658;
						uParam0->f_6 = 596189658;
					}
					break;
			}
			break;
	}
	return true;
}

bool func_1392(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	if (uParam1->f_27 == 791621612 || uParam1->f_27 == -1419617212)
	{
		return true;
	}
	iVar0 = 255;
	switch (uParam1->f_27)
	{
		case -1178838578:
			if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_1)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
			}
			MISC::_COPY_MEMORY(&(uParam0->f_79), &(uParam1->f_1), 7);
			StringCopy(&(uParam0->f_25), aggregate_func_1524(aggregate_func_1976(uParam1->f_8), joaat("COLOR_PURE_WHITE")), 128);
			uParam0->f_2 = aggregate_func_752(iVar0, 1, -1, 0);
			break;
		case -462010351:
			MISC::_COPY_MEMORY(&(uParam0->f_79), &(uParam1->f_1), 7);
			StringCopy(&(uParam0->f_25), aggregate_func_1524(aggregate_func_1976(uParam1->f_8), joaat("COLOR_PURE_WHITE")), 128);
			uParam0->f_2 = joaat("COLOR_WHITE");
			break;
	}
	aggregate_func_4247(&(uParam1->f_25), 2048);
	aggregate_func_4247(&(uParam1->f_25), 65536);
	aggregate_func_4247(&(uParam1->f_25), 32);
	return true;
}

bool func_1393(bool bParam0, var uParam1, var uParam2, var uParam3)
{
	char cVar0[64];

	if (bParam0 < 0 || bParam0 >= 32)
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1896726->f_393.f_1) > bParam0)
	{
		func_1815(uParam1, uParam2, uParam3);
	}
	else
	{
		StringCopy(&cVar0, "Player_List_Entry_", 64);
		StringIntConCat(&cVar0, bParam0, 64);
		aggregate_func_35(uParam2, Global_1896726->f_393, cVar0, *uParam1);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1896726->f_393.f_1, bParam0, "pm_dynamic_player_entry", *uParam2);
	}
	return true;
}

int func_1395(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_1896726->f_393.f_2691)
	{
		return 0;
	}
	MISC::_COPY_MEMORY(Global_1896726->f_393.f_2[iParam0 /*84*/], iParam1, 84);
	return 1;
}

int func_1396(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
		case 8:
		case 12:
			if (MISC::_IS_STADIA_VERSION())
			{
				switch (NETWORK::_0x3E8CCE6769DB5F34(1))
				{
					case -1:
					case 0:
					case 2:
						StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "FRIENDS_LIST_CONSENT_TOOLTIP"), 128);
						return 1;
				}
			}
			break;
	}
	return 0;
}

void func_1397(bool bParam0)
{
	bool bVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_393.f_1))
	{
		return;
	}
	bVar0 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1896726->f_393.f_1) - 1);
	while (bVar0 >= bParam0)
	{
		DATABINDING::_0x6318FB3BE37E11B3(Global_1896726->f_393.f_1, bVar0);
		bVar0 = (bVar0 + -1);
	}
}

bool func_1398()
{
	return Global_1958224->f_72 != 0;
}

char* func_1399()
{
	return aggregate_func_1976(Global_1958224->f_56);
}

int func_1400()
{
	return Global_1896726->f_13.f_5;
}

void func_1401()
{
	func_1402(11);
}

void func_1402(int iParam0)
{
	Global_1896726->f_13.f_5 = iParam0;
	if (aggregate_func_4260(&(Global_1896726->f_13)))
	{
		aggregate_func_4313(&(Global_1896726->f_13));
	}
}

bool func_1403(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	int iVar0;
	struct<28> Var1;
	struct<7> Var119;

	if (!func_1817())
	{
		return false;
	}
	if (!aggregate_func_3545(sParam2))
	{
		return false;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var1.f_27 = 10;
	StringCopy(&(Var1.f_1), sParam2, 64);
	Var119 = { aggregate_func_3106() };
	Var1.f_26 = 1;
	Var1.f_19 = { Var119 };
	*(Var1.f_27[0 /*9*/]) = { Var119 };
	(Var1.f_27[0 /*9*/])->f_8 = aggregate_func_8399(1);
	(Var1.f_27[0 /*9*/])->f_7 = joaat("leader");
	Var1.f_9.f_1 = uParam1;
	Var1.f_9.f_2 = uParam0;
	Var1.f_9 = -1;
	StringCopy(&(Var1.f_9.f_7), "", 24);
	aggregate_func_557(Var1.f_9.f_1, 0, 1);
	if (!POSSE::_0xC086FF658B2E51DA(&Var1))
	{
		return false;
	}
	Global_1180694->f_500 = MISC::GET_GAME_TIMER();
	Global_1180694->f_14.f_9 = iVar0;
	Global_1180694->f_14.f_10 = uParam0;
	Global_1180694->f_14.f_8 = iParam3;
	aggregate_func_6867(1);
	aggregate_func_4974(32);
	if (_NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		_NAMESPACE26::_0x0A04A07BC3074EDB(1);
	}
	aggregate_func_7821(0);
	return true;
}

void func_1404(var uParam0, var uParam1)
{
	int iVar0;

	if (Global_1180694->f_2 == 1 || Global_1180694->f_2 == 2)
	{
		return;
	}
	if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())))
	{
		_NAMESPACE26::_0x0A04A07BC3074EDB(1);
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		if (!POSSE::_0xC08BFF658B2E51DA(0))
		{
		}
	}
	Global_1180694->f_14.f_10 = uParam0;
	Global_1180694->f_14.f_11 = uParam1;
	Global_1180694->f_14.f_8 = 4;
	aggregate_func_7821(0);
	aggregate_func_6867(1);
}

void func_1406(char* sParam0, int iParam1)
{
	Global_1896726->f_13.f_28 = { aggregate_func_4982(sParam0) };
	Global_1896726->f_13.f_36 = iParam1;
}

bool func_1410(var uParam0)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_29)))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1273882->f_1)))
	{
		return false;
	}
	return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->f_29), &(Global_1273882->f_1));
}

int func_1412(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 405966388;
			return 1;
		case 1:
			*uParam1 = 858018263;
			return 1;
		case 2:
			*uParam1 = 1394492570;
			return 1;
		case 3:
			*uParam1 = -190751778;
			return 1;
		case 4:
			*uParam1 = -1513928818;
			return 1;
		case 5:
			*uParam1 = -1321015585;
			return 1;
		case 6:
			*uParam1 = 1852134540;
			return 1;
		case 7:
			*uParam1 = -523623920;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1413(var uParam0)
{
	struct<7> Var0;
	struct<19> Var7;
	int iVar106;

	if (uParam0->f_4)
	{
		if (uParam0->f_3)
		{
			if (!aggregate_func_3096(uParam0->f_29))
			{
				return false;
			}
			Var0 = { aggregate_func_3106() };
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &(uParam0->f_29)))
			{
				return true;
			}
			if (!func_648(uParam0))
			{
				return false;
			}
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)))
			{
				if (func_650(uParam0->f_2))
				{
					return true;
				}
			}
			else
			{
				Var7.f_18 = 10;
				if (func_1240(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam0->f_29)), &Var7))
				{
					if (Var7 == uParam0->f_2 && Var7.f_9 == 1)
					{
						return true;
					}
				}
			}
			return false;
		}
		else
		{
			iVar106 = POSSE::_0xC088FF658B2E51DA();
			if (iVar106 >= 5)
			{
				return false;
			}
			if (!func_648(uParam0))
			{
				return false;
			}
			return true;
		}
	}
	else
	{
		if (!func_648(uParam0))
		{
			return false;
		}
		return !uParam0->f_1 == Global_1273882->f_15;
	}
	return false;
}

bool func_1414(int iParam0, int iParam1)
{
	struct<7> Var0;
	int iVar7;
	struct<28> Var8;
	struct<19> Var126;
	int iVar225;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	Var0 = { aggregate_func_2843(iParam0) };
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		Var8.f_27 = 10;
		if (POSSE::_0xC087FF658B2E51DA(iParam1, &Var8) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var8.f_19), &Var0))
		{
			iVar7 = 1;
		}
	}
	else
	{
		Var126.f_18 = 10;
		iVar225 = 0;
		while (iVar225 <= (POSSE::_0xC084FF658B2E61DA(&Var0) - 1))
		{
			if ((POSSE::_0xC084FF658B2E71DA(&Var0, iVar225, &Var126) && Var126 == iParam1) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var126.f_10), &Var0))
			{
				iVar7 = 1;
			}
			else
			{
				iVar225++;
			}
		}
	}
	return iVar7;
}

bool func_1415(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1180694->f_409.f_10[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1416(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1180694->f_28.f_22[iVar0 /*13*/] == iParam0 && iParam0 != 0)
		{
			return (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_2;
		}
		iVar0++;
	}
	return false;
}

bool func_1417(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1180694->f_28.f_22[iVar0 /*13*/] == iParam0 && iParam0 != 0)
		{
			return (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_3 < (Global_1180694->f_28.f_22[iVar0 /*13*/])->f_4;
		}
		iVar0++;
	}
	return false;
}

bool func_1418(int iParam0)
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;

	if (!_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0)))
	{
		return false;
	}
	iVar51 = _NAMESPACE26::_0xD1BF325C8252A982(_NAMESPACE26::_0x901E0DC25080C8B9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar50 /*7*/]);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar52) || PLAYER::IS_PLAYER_DEAD(iVar52))
		{
		}
		else if (aggregate_func_4325(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

bool func_1419(var uParam0, int iParam1)
{
	bool bVar0;

	bVar0 = iParam1;
	if (bVar0 < 0 || bVar0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0))
	{
		return false;
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, bVar0), aggregate_func_4915(1));
}

void func_1420(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = iParam1;
	if (bVar0 < 0 || bVar0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, bVar0), aggregate_func_4915(1), bParam2);
}

bool func_1421(var uParam0, int iParam1)
{
	bool bVar0;

	bVar0 = iParam1;
	if (bVar0 < 0 || bVar0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0))
	{
		return false;
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, bVar0), aggregate_func_4915(0));
}

void func_1422(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = iParam1;
	if (bVar0 < 0 || bVar0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, bVar0), aggregate_func_4915(0), bParam2);
}

int func_1424()
{
	struct<95> Var0;

	Var0 = { func_183(1) };
	if (aggregate_func_4287(&Var0))
	{
		if (!func_1820(Var0.f_2))
		{
			return 0;
		}
	}
	else if (Var0.f_1 == Global_1273882->f_15)
	{
		func_163();
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_1425()
{
	if (Global_1939221->f_1433.f_156.f_263.f_90 > -1)
	{
		return true;
	}
	return false;
}

int func_1429(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 630752600:
			*uParam1 = 630752600;
			return 1;
		case 55609673:
			*uParam1 = 55609673;
			return 1;
		case 845045048:
			*uParam1 = 845045048;
			return 1;
		case -353068451:
			*uParam1 = -353068451;
			return 1;
		case 1527899327:
			*uParam1 = -55349945;
			return 1;
		case 695290261:
			*uParam1 = 1941935324;
			return 1;
		case -750400740:
			*uParam1 = 1854460024;
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1432(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_1822(iParam0, iParam1);
			break;
		default:
			break;
	}
}

int func_1433(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_1)))
	{
		return 1;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 1;
	}
	if (!aggregate_func_5522())
	{
		return 1;
	}
	if (aggregate_func_2289(iVar0))
	{
		uParam0->f_59 = 1210712530;
		uParam0->f_60 = 422580063;
		uParam0->f_61 = 1;
		uParam0->f_57 = 0;
	}
	else if (func_1824(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		uParam0->f_59 = 1210712530;
		uParam0->f_60 = 1975921174;
		uParam0->f_61 = 1;
		uParam0->f_57 = 0;
	}
	aggregate_func_4247(&(uParam1->f_25), 1536);
	return 1;
}

int func_1434(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	aggregate_func_4247(&(uParam1->f_25), 1536);
	iVar0 = func_806(&(uParam1->f_1));
	switch (iVar0)
	{
		case 9:
		case 10:
		case 11:
			if (func_1825(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
			{
				uParam0->f_57 = 0;
				uParam0->f_61 = 1;
				return 1;
			}
			break;
	}
	return 0;
}

int func_1435(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	aggregate_func_4247(&(uParam1->f_25), 1536);
	iVar0 = func_808(&(uParam1->f_1));
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
			if (func_1826(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
			{
				uParam0->f_57 = 0;
				uParam0->f_61 = 1;
				return 1;
			}
			break;
	}
	return 0;
}

int func_1436(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	switch (uParam1->f_27)
	{
		case -1178838578:
			if (NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				if (iVar0 == &Global_1273882->f_154[&Global_1273882])
				{
					uParam0->f_73 = 0;
					uParam0->f_69 = 0;
				}
				else
				{
					if (func_198())
					{
						uParam0->f_71 = -210801769;
					}
					else
					{
						uParam0->f_71 = 1499547490;
					}
					uParam0->f_73 = 1;
					uParam0->f_72 = 1;
					if (_NAMESPACE79::_0x0DED260A1958A82E(iVar0))
					{
						uParam0->f_67 = 979712174;
					}
					else
					{
						uParam0->f_67 = 830040270;
					}
					uParam0->f_69 = 1;
					uParam0->f_68 = 1;
				}
			}
			break;
	}
	aggregate_func_4247(&(uParam1->f_25), 32768);
	aggregate_func_4247(&(uParam1->f_25), 16384);
	return 1;
}

int func_1437(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;

	switch (uParam0->f_27)
	{
		case -1178838578:
		case -462010351:
			if (func_1827(&(uParam0->f_1), sParam1))
			{
				return 1;
			}
			iVar0 = func_808(&(uParam0->f_1));
			switch (iVar0)
			{
				case 1:
				case 2:
				case 3:
					if (func_1828(iVar0, sParam1))
					{
						return 1;
					}
					break;
			}
			iVar1 = func_806(&(uParam0->f_1));
			switch (iVar1)
			{
				case 9:
				case 10:
				case 11:
					if (func_807(iVar1, sParam1))
					{
						return 1;
					}
					break;
			}
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_FOOTER"), 128);
			return 1;
		case -1419617212:
			StringCopy(sParam1, func_457(), 128);
			return 1;
		default:
			break;
	}
	return 0;
}

void func_1440(var uParam0, int iParam1)
{
	if (Global_1939221->f_1433.f_7964 || NETWORK::_0x25189F9908E9CD65())
	{
		NETWORK::NETWORK_CLEAR_GET_GAMER_STATUS();
	}
	Global_1939221->f_1433.f_7964 = 0;
	Global_1939221->f_1433.f_7965 = 1;
	Global_1939221->f_1433.f_7966 = iParam1;
	if (NETWORK::_0xFBDFE1C1356E12E8(uParam0, iParam1))
	{
	}
}

bool func_1446(int iParam0)
{
	struct<7> Var0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	Var0 = { aggregate_func_2843(iParam0) };
	if (!aggregate_func_3096(Var0))
	{
		return false;
	}
	if ((POSSE::_0xC084FF658B2E61DA(&Var0) >= 5 && Global_1180694->f_490 != -1) && !aggregate_func_1910(&Var0, &(Global_1180694->f_501[Global_1180694->f_490 /*118*/])))
	{
		return false;
	}
	return true;
}

int func_1447(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 < 0 || iParam3 > 36)
	{
		return 0;
	}
	if (uParam1->f_1 == -1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = &uParam1->f_2[uParam1->f_1];
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((uParam0->f_14[iParam3 /*31*/])->f_18, MISC::_CREATE_VAR_STRING(0, iParam2));
	if (func_1174(iParam2, &(uParam1->f_2)))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_14[iParam3 /*31*/])->f_21, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((uParam0->f_14[iParam3 /*31*/])->f_8, 33585163);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_14[iParam3 /*31*/])->f_29, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_14[iParam3 /*31*/])->f_21, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((uParam0->f_14[iParam3 /*31*/])->f_8, -1687063893);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_14[iParam3 /*31*/])->f_29, false);
	}
	if (iVar0 == iParam2)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_14[iParam3 /*31*/])->f_24, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((uParam0->f_14[iParam3 /*31*/])->f_28, -186220729);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_14[iParam3 /*31*/])->f_24, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((uParam0->f_14[iParam3 /*31*/])->f_28, 801794679);
	}
	if (uParam0->f_5)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((uParam0->f_14[iParam3 /*31*/])->f_25, -439153934);
		if (aggregate_func_9240(uParam1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_14[iParam3 /*31*/])->f_26, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_14[iParam3 /*31*/])->f_26, false);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING((uParam0->f_14[iParam3 /*31*/])->f_25, -1258266463);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam0->f_14[iParam3 /*31*/])->f_26, true);
	}
	return 1;
}

void func_1448()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((Global_1939221->f_1433.f_1314.f_10[iVar1 /*8*/])->f_7 != 0)
		{
			if ((iVar0 - (Global_1939221->f_1433.f_1314.f_10[iVar1 /*8*/])->f_7) > 60000)
			{
				func_1833(iVar1);
			}
			else if (!aggregate_func_3096(*(Global_1939221->f_1433.f_1314.f_10[iVar1 /*8*/])))
			{
				func_1833(iVar1);
			}
		}
		iVar1++;
	}
}

bool func_1449(int* iParam0)
{
	int iVar0;

	if (!aggregate_func_3096(*iParam0))
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (((Global_1939221->f_1433.f_1314.f_10[iVar0 /*8*/])->f_7 != 0 && aggregate_func_3096(*(Global_1939221->f_1433.f_1314.f_10[iVar0 /*8*/]))) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(iParam0, Global_1939221->f_1433.f_1314.f_10[iVar0 /*8*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1450(int* iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((Global_1939221->f_1433.f_1314.f_10[iVar0 /*8*/])->f_7 == 0)
		{
			(Global_1939221->f_1433.f_1314.f_10[iVar0 /*8*/])->f_7 = MISC::GET_GAME_TIMER();
			*(Global_1939221->f_1433.f_1314.f_10[iVar0 /*8*/]) = { *iParam0 };
			return;
		}
		iVar0++;
	}
}

void func_1453(int iParam0)
{
	char* sVar0;

	if (Global_1939221->f_1433.f_1622.f_449 == iParam0)
	{
		return;
	}
	Global_1939221->f_1433.f_1622.f_449 = iParam0;
	sVar0 = func_1835(Global_1939221->f_1433.f_1622.f_449);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_1622.f_445, sVar0);
}

bool func_1456(int iParam0, int iParam1)
{
	int iVar0;

	if (!aggregate_func_4092(iParam0, iParam1, &iVar0))
	{
		return false;
	}
	return aggregate_func_9255(iVar0, iParam1);
}

int func_1461(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_11.f_200[iVar0 /*7*/], &uParam0))
		{
			return (Global_1268935->f_11.f_200[iVar0 /*7*/])->f_6;
		}
		iVar0++;
	}
	return -1;
}

bool func_1462(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::_0x7C803BDC8343228D(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar1 = iVar4;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (iVar1 == iVar0)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (aggregate_func_1061(iParam0, iVar2, &uVar3))
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

void func_1463(int iParam0)
{
	char* sVar0;

	if (Global_1939221->f_1433.f_2190.f_372 == iParam0)
	{
		return;
	}
	Global_1939221->f_1433.f_2190.f_372 = iParam0;
	sVar0 = aggregate_func_9225(Global_1939221->f_1433.f_2190.f_372);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_2190.f_369, sVar0);
}

int func_1464(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (INVENTORY::_0x4C543D5DFCD2DAFD(Global_1268935->f_513.f_125[iVar0 /*7*/], &uParam0))
		{
			return (Global_1268935->f_513.f_125[iVar0 /*7*/])->f_6;
		}
		iVar0++;
	}
	return -1;
}

int func_1465(int iParam0)
{
	int iVar0;

	if (!aggregate_func_4598(iParam0))
	{
		return 0;
	}
	if (!aggregate_func_4260(&(((*Global_1123778)[iParam0 /*27*/])->f_4)))
	{
		return 0;
	}
	iVar0 = (aggregate_func_8302() - aggregate_func_4732(&(((*Global_1123778)[iParam0 /*27*/])->f_4)));
	return BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar0) / 1000f));
}

int func_1466(vector3 vParam0, var uParam3)
{
	*uParam3 = 13;
	uParam3->f_1[0] = 1357161730;
	uParam3->f_1[1] = 1581179681;
	uParam3->f_1[2] = -215258135;
	uParam3->f_1[3] = -987049424;
	uParam3->f_1[4] = 892234183;
	uParam3->f_1[5] = -1554232707;
	uParam3->f_1[6] = -682748;
	uParam3->f_1[7] = 1538293636;
	uParam3->f_1[8] = -1992167326;
	uParam3->f_1[9] = -1884014371;
	uParam3->f_1[10] = -1871413878;
	uParam3->f_1[11] = 1483778247;
	uParam3->f_1[12] = -724534761;
	if (!func_1471(vParam0, uParam3))
	{
		return 0;
	}
	return 1;
}

void func_1467(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = func_1844(bParam0);
	bVar1 = -1593595016;
	if (DATABINDING::_0x81D7183E7A8ECA72(Global_1939221->f_1433.f_2628.f_45) != bVar0)
	{
		if (!TXD::_0xBA0163B277C2D2D0(bVar1))
		{
			return;
		}
		TXD::_0xDB1BD07FB464584D(bVar1, 0);
		if (!TXD::_0xBE72591D1509FFE4(bVar1))
		{
			return;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2628.f_46, bVar1);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_1433.f_2628.f_45, bVar0);
	}
}

int func_1469(int iParam0, vector3 vParam1, var uParam4)
{
	if (aggregate_func_4268(vParam1))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam4 = 3;
			uParam4->f_1[0] = 1357161730;
			uParam4->f_1[1] = -1871413878;
			uParam4->f_1[2] = 1483778247;
			break;
		case 1:
			*uParam4 = 5;
			uParam4->f_1[0] = 1581179681;
			uParam4->f_1[1] = -1554232707;
			uParam4->f_1[2] = -682748;
			uParam4->f_1[3] = 1538293636;
			uParam4->f_1[4] = -724534761;
			break;
		case 2:
			*uParam4 = 2;
			uParam4->f_1[0] = 1357161730;
			uParam4->f_1[1] = -1871413878;
			break;
		case 3:
			*uParam4 = 3;
			uParam4->f_1[0] = -987049424;
			uParam4->f_1[1] = -682748;
			uParam4->f_1[2] = 1538293636;
			break;
		case 4:
			*uParam4 = 4;
			uParam4->f_1[0] = 1581179681;
			uParam4->f_1[1] = -1554232707;
			uParam4->f_1[2] = -1992167326;
			uParam4->f_1[3] = -724534761;
			break;
		case 6:
			*uParam4 = 4;
			uParam4->f_1[0] = -987049424;
			uParam4->f_1[1] = -682748;
			uParam4->f_1[2] = 1538293636;
			uParam4->f_1[3] = -1871413878;
			break;
		case 7:
			*uParam4 = 4;
			uParam4->f_1[0] = 1581179681;
			uParam4->f_1[1] = -987049424;
			uParam4->f_1[2] = -682748;
			uParam4->f_1[3] = 1538293636;
			break;
		case 9:
			*uParam4 = 6;
			uParam4->f_1[0] = 1581179681;
			uParam4->f_1[1] = -987049424;
			uParam4->f_1[2] = -682748;
			uParam4->f_1[3] = 1538293636;
			uParam4->f_1[4] = -1871413878;
			uParam4->f_1[5] = 1483778247;
			break;
		case 10:
			*uParam4 = 6;
			uParam4->f_1[0] = 1357161730;
			uParam4->f_1[1] = -987049424;
			uParam4->f_1[2] = -682748;
			uParam4->f_1[3] = 1538293636;
			uParam4->f_1[4] = -1871413878;
			uParam4->f_1[5] = 1483778247;
			break;
		case 11:
			*uParam4 = 4;
			uParam4->f_1[0] = 1357161730;
			uParam4->f_1[1] = 1538293636;
			uParam4->f_1[2] = -1871413878;
			uParam4->f_1[3] = 1483778247;
			break;
		case 12:
			*uParam4 = 4;
			uParam4->f_1[0] = -1554232707;
			uParam4->f_1[1] = -1992167326;
			uParam4->f_1[2] = 1483778247;
			uParam4->f_1[3] = -724534761;
			break;
		case 13:
			*uParam4 = 3;
			uParam4->f_1[0] = -215258135;
			uParam4->f_1[1] = 892234183;
			uParam4->f_1[2] = -1884014371;
			break;
		case 14:
			*uParam4 = 3;
			uParam4->f_1[0] = -215258135;
			uParam4->f_1[1] = 892234183;
			uParam4->f_1[2] = -1884014371;
			break;
		case 15:
			*uParam4 = 4;
			uParam4->f_1[0] = -215258135;
			uParam4->f_1[1] = 892234183;
			uParam4->f_1[2] = -1992167326;
			uParam4->f_1[3] = -1884014371;
			break;
		case 16:
			*uParam4 = 4;
			uParam4->f_1[0] = -215258135;
			uParam4->f_1[1] = -1554232707;
			uParam4->f_1[2] = -1992167326;
			uParam4->f_1[3] = -724534761;
			break;
		default:
			return 0;
	}
	if (!func_1471(vParam1, uParam4))
	{
		return 0;
	}
	return 1;
}

int func_1470(var uParam0)
{
	int iVar0;

	switch (uParam0->f_1)
	{
		case -682748:
			iVar0 = 0;
			break;
		case 1357161730:
		case 1483778247:
			iVar0 = 1;
			break;
		case -1554232707:
		case -724534761:
		case 1581179681:
			iVar0 = 2;
			break;
		case -1871413878:
		case -987049424:
		case 1538293636:
			iVar0 = 3;
			break;
		case -1992167326:
		case -1884014371:
		case -215258135:
		case 892234183:
			iVar0 = 4;
			break;
		default:
			iVar0 = -1;
			break;
	}
	return iVar0;
}

bool func_1471(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1845(vParam0, uParam3);
	iVar1 = 0;
	while (iVar1 <= (*uParam3 - 1))
	{
		if (&uParam3->f_1[iVar1] == iVar0)
		{
			iVar2 = iVar1;
			while (iVar2 > 0)
			{
				uParam3->f_1[iVar2] = &uParam3->f_1[(iVar2 - 1)];
				iVar2 = (iVar2 - 1);
			}
			uParam3->f_1[0] = iVar0;
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_1472(bool bParam0)
{
	switch (bParam0)
	{
		case 1357161730:
			return -223388979;
		case 1581179681:
			return -1840081715;
		case -215258135:
			return -963201097;
		case -987049424:
			return -964546224;
		case 892234183:
			return -1555522343;
		case -1554232707:
			return -596383102;
		case -682748:
			return 2076383908;
		case 1538293636:
			return 1380216772;
		case -1992167326:
			return 136876275;
		case -1884014371:
			return -1031323199;
		case -1871413878:
			return -1829627533;
		case 1483778247:
			return -1285014065;
		case -724534761:
			return 505542003;
		default:
			break;
	}
	return 1380216772;
}

void func_1473(var uParam0, struct<24> Param1)
{
	func_1846(uParam0, Param1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_24, Param1.f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_25, Param1.f_23);
}

bool func_1483(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1))
	{
		return false;
	}
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return false;
	}
	Global_1939221->f_1433.f_156.f_356.f_234.f_1[iParam0 /*3*/] = 1;
	(Global_1939221->f_1433.f_156.f_356.f_234.f_1[iParam0 /*3*/])->f_1 = iParam1;
	(Global_1939221->f_1433.f_156.f_356.f_234.f_1[iParam0 /*3*/])->f_2 = iParam2;
	return true;
}

int func_1484(var uParam0, var uParam1, bool bParam2)
{
	int iVar0[2];
	int iVar3;

	aggregate_func_4247(&(uParam1->f_25), 8192);
	if (bParam2 && !func_1385(uParam1))
	{
		return 0;
	}
	if (!uParam1->f_26)
	{
	}
	switch (uParam1->f_27)
	{
		case -1178838578:
			iVar3 = 0;
			while (iVar3 < 2)
			{
				iVar0[iVar3] = func_854(iVar3);
				iVar3++;
			}
			uParam0->f_8 = (&iVar0[0] >= 1 && &iVar0[1] >= 1);
			break;
	}
	return 1;
}

int func_1485(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;

	if (bParam2 && !func_1385(uParam1))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 0;
	}
	if (func_853(iVar0, &vVar1))
	{
		uParam0->f_2 = func_1858(vVar1.z);
		aggregate_func_4247(&(uParam1->f_25), 65536);
	}
	return 1;
}

bool func_1486()
{
	var uVar0;

	return aggregate_func_4486(26930588, &uVar0);
}

bool func_1487()
{
	return aggregate_func_5254(26930588, 1, -570078785);
}

bool func_1488()
{
	return aggregate_func_5254(26930588, 1, 59806960);
}

void func_1489(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 997808187:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1497.f_119, -1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_120, false);
			break;
		case -570078785:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1497.f_119, aggregate_func_4944(aggregate_func_4655(26930588, -570078785, 1, 0, 1, 0)));
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_120, true);
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_1497.f_119, aggregate_func_4655(26930588, 59806960, 1, 0, 1, 0));
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_120, false);
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_1433.f_1497.f_121, bParam1);
}

void func_1490(int iParam0)
{
	if (aggregate_func_7672() != -1594107850)
	{
		return;
	}
	aggregate_func_1791(func_1859(iParam0), joaat("COLOR_WHITE"));
}

bool func_1491()
{
	if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
	{
		return NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT();
	}
	return false;
}

void func_1493()
{
	struct<4> Var0;
	int iVar12;
	int iVar13;

	iVar12 = func_543();
	iVar13 = aggregate_func_8493(iVar12);
	if (func_1491())
	{
		aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_NO_PARTY_CHAT"), joaat("COLOR_RED"));
	}
	else if (aggregate_func_2733(iVar12, 430260396, &Var0))
	{
		aggregate_func_1791(func_1861(iVar13, 1671747787, Var0.f_3), joaat("COLOR_RED"));
	}
	else if (aggregate_func_7654(131072))
	{
		aggregate_func_1791(func_1862(131072), joaat("COLOR_WHITE"));
	}
	else if (aggregate_func_7654(65536))
	{
		aggregate_func_1791(func_1862(65536), joaat("COLOR_WHITE"));
	}
	else
	{
		aggregate_func_1791(MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PUBLIC_HIDE_ID"), joaat("COLOR_WHITE"));
	}
}

void func_1495()
{
	DATABINDING::_0x3BF0767CF33FCC88(Global_1939221->f_1433.f_7711.f_1);
}

void func_1496(bool bParam0, int iParam1)
{
	struct<27> Var0;
	bool bVar27;
	bool bVar28;
	char cVar29[64];
	char cVar37[64];
	char cVar45[64];

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	StringCopy(&cVar37, "Moonshine_Location_Root_", 64);
	StringCopy(&cVar45, "Override_Moonshine_Location_Root_", 64);
	StringIntConCat(&cVar37, iParam1, 64);
	StringIntConCat(&cVar45, iParam1, 64);
	bVar28 = aggregate_func_9184(bParam0);
	StringCopy(&cVar29, MISC::_CREATE_VAR_STRING(2, aggregate_func_9180(bParam0)), 64);
	Var0.f_16 = { cVar29 };
	Var0.f_5 = 268082424;
	Var0.f_4 = 1433015236;
	Var0.f_24 = joaat("hud_textures");
	Var0.f_25 = joaat("check");
	Var0.f_26 = 0;
	Var0.f_7 = 1447387479;
	Var0.f_9 = 1;
	aggregate_func_1363(&((Global_1939221->f_1433.f_7711.f_2[iParam1 /*23*/])->f_1), Global_1939221->f_1433.f_7711, cVar37, Var0);
	aggregate_func_1363(&((Global_1939221->f_1433.f_7711.f_118[iParam1 /*23*/])->f_1), Global_1939221->f_1433.f_7711, cVar45, Var0);
	Global_1939221->f_1433.f_7711.f_2[iParam1 /*23*/] = DATABINDING::_DATABINDING_ADD_DATA_HASH((Global_1939221->f_1433.f_7711.f_2[iParam1 /*23*/])->f_1, "moonshine_selection_district", bVar28);
	Global_1939221->f_1433.f_7711.f_118[iParam1 /*23*/] = DATABINDING::_DATABINDING_ADD_DATA_HASH((Global_1939221->f_1433.f_7711.f_118[iParam1 /*23*/])->f_1, "moonshine_selection_district", bVar28);
	Global_1939221->f_1433.f_7711.f_234[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_INT((Global_1939221->f_1433.f_7711.f_2[iParam1 /*23*/])->f_1, "moonshine_selection_property", bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT((Global_1939221->f_1433.f_7711.f_2[iParam1 /*23*/])->f_1, "dynamic_list_item_prompt_enabled", true);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1939221->f_1433.f_7711.f_1, bVar27, "pm_dynamic_text_and_end_image_hold", (Global_1939221->f_1433.f_7711.f_2[iParam1 /*23*/])->f_1);
}

int func_1497()
{
	return Global_1275329->f_54;
}

void func_1498(int iParam0)
{
	float fVar0[5];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;

	iVar6 = 0;
	iVar7 = 0;
	iVar8 = *iParam0;
	iVar9 = -1;
	fVar10 = 0f;
	iVar6 = 0;
	while (iVar6 <= (iVar8 - 1))
	{
		(*iParam0)[iVar6] = iVar6;
		fVar0[iVar6] = aggregate_func_8034(iParam0[iVar6]);
		iVar6++;
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= (iVar8 - 1))
	{
		iVar7 = iVar6 + 1;
		while (iVar7 <= (5 - 1))
		{
			if (&fVar0[iVar6] > &fVar0[iVar7])
			{
				iVar9 = iParam0[iVar6];
				(*iParam0)[iVar6] = iParam0[iVar7];
				(*iParam0)[iVar7] = iVar9;
				fVar10 = &fVar0[iVar6];
				fVar0[iVar6] = &fVar0[iVar7];
				fVar0[iVar7] = fVar10;
			}
			iVar7++;
		}
		iVar6++;
	}
}

int func_1501(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1536030095:
			return 1;
		case -165442446:
			return 0;
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

int func_1502(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;

	if (MISC::_IS_STADIA_VERSION())
	{
		switch (uParam0->f_28)
		{
			case 1:
			case 8:
			case 12:
				switch (NETWORK::_0x3E8CCE6769DB5F34(1))
				{
					case -1:
					case 0:
					case 2:
						StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "FRIENDS_LIST_CONSENT_TOOLTIP"), 128);
						return 1;
				}
				break;
		}
	}
	if (!func_1385(uParam0))
	{
		return 0;
	}
	if (func_1827(&(uParam0->f_1), sParam1))
	{
		return 1;
	}
	iVar0 = func_808(&(uParam0->f_1));
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
			if (func_1828(iVar0, sParam1))
			{
				return 1;
			}
			break;
	}
	iVar1 = func_806(&(uParam0->f_1));
	switch (iVar1)
	{
		case 9:
		case 10:
		case 11:
			if (func_807(iVar1, sParam1))
			{
				return 1;
			}
			break;
	}
	switch (uParam0->f_27)
	{
		case -1178838578:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_INFO_IN_SESSION_TOOLTIP"), 128);
			break;
		case -462010351:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "NM_PLAYER_INFO_NOT_IN_SESSION_TOOLTIP"), 128);
			break;
	}
	return 1;
}

int func_1503(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (uParam0->f_27)
	{
		case -1178838578:
		case -462010351:
			iVar0 = func_601();
			if (aggregate_func_9158(iVar0) && aggregate_func_9257(iVar0))
			{
				if (!func_604(iVar0, 1))
				{
					return 1;
				}
				iVar1 = func_605(iVar0, &(uParam0->f_1));
				switch (iVar1)
				{
					case 1711458128:
						StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "NET_MG_PLYRMENU_LOCK_OVERALLBUYIN"), 128);
						return 1;
					case -909793512:
						StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "NET_MG_PLYRMENU_LOCK_OVERALLPROFIT"), 128);
						return 1;
					case -993470410:
						StringCopy(sParam1, MISC::_CREATE_VAR_STRING(10, "NET_MG_PLYRMENU_LOCK_GEOGRAPHIC", aggregate_func_7814(iVar0)), 128);
						return 1;
					case 1873015794:
						StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "NET_MG_PLYRMENU_LOCK_OVERALLCAP"), 128);
						return 1;
					case -758661171:
						StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "NET_MG_PLYRMENU_LOCK_PRIVBUYIN"), 128);
						return 1;
					case -127293234:
						StringCopy(sParam1, MISC::_CREATE_VAR_STRING(10, "NET_MG_PLYRMENU_LOCK_BANNED", aggregate_func_7814(iVar0)), 128);
						return 1;
					default:
						break;
				}
				StringCopy(sParam1, "", 128);
			}
			iVar2 = func_808(&(uParam0->f_1));
			switch (iVar2)
			{
				case 1:
				case 2:
				case 3:
					if (func_1828(iVar2, sParam1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1504(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2 && !func_1385(uParam1))
	{
		return 0;
	}
	uParam0->f_8 = 0;
	aggregate_func_4247(&(uParam1->f_25), 8192);
	iVar1 = func_601();
	if (aggregate_func_9158(iVar1) && aggregate_func_9257(iVar1))
	{
		if (!func_604(iVar1, 1))
		{
			return 0;
		}
		iVar0 = func_605(iVar1, &(uParam1->f_1));
		if (iVar0 != -1 && iVar0 != 0)
		{
			return 0;
		}
	}
	if (func_808(&(uParam1->f_1)) == 0)
	{
		uParam0->f_8 = 1;
	}
	return 1;
}

int func_1505(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2 && !func_1385(uParam1))
	{
		return 0;
	}
	switch (uParam1->f_27)
	{
		case -1178838578:
			uParam0->f_8 = func_806(&(uParam1->f_1)) == 5;
			break;
		case -462010351:
			uParam0->f_8 = func_808(&(uParam1->f_1)) == 0;
			break;
		case -1419617212:
		case -1:
		case 791621612:
			return 1;
	}
	aggregate_func_4247(&(uParam1->f_25), 8192);
	return 1;
}

int func_1506(var uParam0, char* sParam1)
{
	int iVar0;

	if (!func_1385(uParam0))
	{
		return 0;
	}
	if (func_1827(&(uParam0->f_1), sParam1))
	{
		return 1;
	}
	if (NETWORK::_0xA2837A5E21FB5A58(&(uParam0->f_1)))
	{
		StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_INVITED_TO_SESSION_FOOTER"), 128);
		return 1;
	}
	iVar0 = func_806(&(uParam0->f_1));
	if (iVar0 != 5)
	{
		if (func_807(iVar0, sParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1508(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2 && !func_1385(uParam1))
	{
		return 0;
	}
	switch (uParam1->f_27)
	{
		case -1178838578:
			uParam0->f_8 = func_1868(&(uParam1->f_1)) == 5;
			break;
		case -1419617212:
		case -1:
		case 791621612:
			return 1;
	}
	aggregate_func_4247(&(uParam1->f_25), 8192);
	return 1;
}

int func_1509(var uParam0, char[4] cParam1)
{
	int iVar0;

	if (!func_1385(uParam0))
	{
		return 0;
	}
	iVar0 = func_1868(&(uParam0->f_1));
	if (func_1870(&iVar0, cParam1))
	{
		return 1;
	}
	return 0;
}

bool func_1510()
{
	return Global_1896726->f_3085.f_1;
}

int func_1511()
{
	return Global_1896726->f_3574;
}

bool func_1513()
{
	if (func_901() == 1 || func_901() == 2)
	{
		return true;
	}
	return false;
}

void func_1514(int iParam0)
{
	Global_1896726->f_3574.f_1 = iParam0;
}

bool func_1515(int iParam0, int* iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam1))
	{
		return false;
	}
	iVar0 = 255;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
		if (aggregate_func_4477(iVar0))
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
			if (func_1520(iParam1))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_1516()
{
	return Global_1896726->f_3574.f_1;
}

bool func_1517(int iParam0)
{
	var uVar0;
	int iVar1;

	if (aggregate_func_3653(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_1518(int iParam0)
{
	var uVar0;
	int iVar1;

	if (aggregate_func_3653(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return iVar1 == aggregate_func_3587(iParam0, 0);
		}
	}
	return false;
}

bool func_1519(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -963477619:
			if (iParam1 == 1891514641 || iParam1 == 636925055)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1891514641:
			if (iParam1 == 636925055)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
	}
	return false;
}

bool func_1520(int* iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return false;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15))
	{
		return false;
	}
	if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1273882->f_15, iVar0))
	{
		return false;
	}
	return true;
}

int func_1522()
{
	return Global_1896726->f_208;
}

void func_1523(int iParam0)
{
	Global_1896726->f_197.f_10 = iParam0;
}

int func_1524()
{
	return BUILTIN::FLOOR((BUILTIN::TO_FLOAT(NETWORK::_0xB389289F031F059A()) / BUILTIN::TO_FLOAT(32)));
}

int func_1525(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1896726->f_197.f_10)
	{
		return 0;
	}
	Global_1896726->f_197.f_9 = iParam0;
	Global_1896726->f_197.f_8 = iParam0;
	return 1;
}

int func_1526()
{
	int iVar0;
	char* sVar1;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1896726->f_197.f_2))
	{
		return 0;
	}
	if (Global_1896726->f_197.f_10 <= 0)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = Global_1896726->f_197.f_10;
	}
	sVar1 = MISC::_CREATE_VAR_STRING(2, "NM_PW_PLAYER_LIST_PAGE", Global_1896726->f_197.f_9 + 1, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896726->f_197.f_2, sVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896726->f_197, Global_1896726->f_197.f_10 > 1);
	return 1;
}

int func_1527()
{
	return Global_1896726->f_197.f_8;
}

bool func_1528()
{
	return Global_1896726->f_197.f_7;
}

int func_1529()
{
	return Global_1896726->f_197.f_10;
}

int func_1530()
{
	return Global_1896726->f_197.f_9;
}

void func_1531(int iParam0)
{
	int iVar0;
	int iVar1;

	func_758();
	iVar0 = 255;
	iVar1 = 0;
	while (iVar1 < Global_1939221->f_1433.f_828.f_2.f_483)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(Global_1939221->f_1433.f_828.f_2.f_1.f_1[iVar1 /*15*/]))
		{
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(Global_1939221->f_1433.f_828.f_2.f_1.f_1[iVar1 /*15*/]))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Global_1939221->f_1433.f_828.f_2.f_1.f_1[iVar1 /*15*/]);
				if (aggregate_func_4477(iVar0))
				{
				}
				else
				{
					switch (iParam0)
					{
						case 7:
						case 8:
						case 9:
						case 10:
							if (func_1520(Global_1939221->f_1433.f_828.f_2.f_1.f_1[iVar1 /*15*/]))
							{
							}
							else if (!func_851(Global_1939221->f_1433.f_828.f_2.f_1.f_1[iVar1 /*15*/], &((Global_1939221->f_1433.f_828.f_2.f_1.f_1[iVar1 /*15*/])->f_7), 0, iParam0))
							{
							}
							iVar1++;
							default:
								break;
					}
				}
			}
		}
	}
}

int func_1532(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != Global_1131111->f_259)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < Global_1131111->f_1)
		{
			if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(Global_1131111->f_1[iVar0 /*7*/], (*uParam0)[iVar0 /*7*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1533()
{
	int iVar0;
	struct<7> Var1;

	Global_1131111->f_259 = 0;
	Global_1131111->f_261 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		*(Global_1131111->f_1[iVar0 /*7*/]) = { Var1 };
		Global_1131111->f_226[iVar0] = 0;
		iVar0++;
	}
}

int func_1534(int iParam0)
{
	if (iParam0 == 2)
	{
		return -471827042;
	}
	return 0;
}

int func_1536(int iParam0, bool bParam1, bool bParam2)
{
	*bParam1 = 0;
	if (aggregate_func_7822(iParam0, 2))
	{
		*bParam1 = aggregate_func_7822(iParam0, 4);
		if (bParam2)
		{
			aggregate_func_7828(iParam0);
		}
		return 1;
	}
	return 0;
}

char* func_1583()
{
	struct<64> Var0;
	int iVar64;

	if (aggregate_func_4934())
	{
		Var0 = { aggregate_func_9316(&(Global_1273882->f_154[&Global_1273882])) };
		iVar64 = Var0.f_21.f_2;
		switch (iVar64)
		{
			case -504335712:
				return aggregate_func_736(Global_524288->f_39792, &(Global_3145858->f_11));
			case 395262693:
				return func_1886(Global_2359296->f_155);
			case -933924539:
				return func_1887(Global_2097152->f_32);
			default:
				break;
		}
	}
	return MISC::_CREATE_VAR_STRING(2, "FREEROAM_HEADER");
}

int func_1586(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_1939221->f_1433.f_828;
		case 18:
			return Global_1939221->f_1433.f_156.f_196.f_1;
		default:
			break;
	}
	return -1;
}

int func_1589(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -910183757;
		case 1:
			return -1204301712;
		case 2:
			return 827722112;
		case 3:
			return -529367264;
		case 4:
			return 1945361740;
		default:
			break;
	}
	return 0;
}

int func_1608(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	var uVar1[8];

	if (!aggregate_func_1915(iParam0, &uVar1, &iVar0))
	{
		return 0;
	}
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (iParam2 <= -1)
	{
		iParam2 = aggregate_func_2431(iVar0);
	}
	else if (iParam2 >= iVar0)
	{
		iParam2 = aggregate_func_2431(iVar0);
	}
	if (bParam1)
	{
		aggregate_func_9218(&(uVar1[iParam2]));
	}
	else
	{
		aggregate_func_9219(&(uVar1[iParam2]));
	}
	return 1;
}

int func_1621(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	return Global_1182189[iParam0 /*17*/];
}

int func_1652(int iParam0)
{
	int iVar0;

	iVar0 = -183012873;
	switch (iParam0)
	{
		case 3:
			iVar0 = -183012873;
			break;
		case 0:
			iVar0 = -265461064;
			break;
		case 1:
			iVar0 = -1577085532;
			break;
		case 2:
			iVar0 = -715226337;
			break;
		default:
			iVar0 = -183012873;
			break;
	}
	return iVar0;
}

bool func_1653()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1 = { aggregate_func_4259(iVar0) };
		if (aggregate_func_4263(Var1) == 7)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_1654(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];

	iVar0 = ((iParam0 / 1000) / 3600);
	iVar1 = (((iParam0 / 1000) / 60) - iVar0 * 60);
	iVar2 = ((iParam0 - (iVar1 + iVar0 * 60) * 60 * 1000) / 1000);
	iVar3 = (iParam0 - (iVar2 + (iVar1 + iVar0 * 60) * 60) * 1000);
	if (iVar0 > 0)
	{
		StringIntConCat(&cVar4, iVar0, 64);
		StringConCat(&cVar4, ":", 64);
		if (iVar1 < 10)
		{
			StringConCat(&cVar4, "0", 64);
			if (iVar1 < 0)
			{
				StringIntConCat(&cVar4, iVar1, 64);
				StringConCat(&cVar4, ":", 64);
				if (iVar2 < 10)
				{
					StringConCat(&cVar4, "0", 64);
				}
			}
		}
	}
	if (iVar1 > 0)
	{
		if (iVar1 < 10)
		{
			StringIntConCat(&cVar4, 0, 64);
		}
		StringIntConCat(&cVar4, iVar1, 64);
	}
	else
	{
		StringConCat(&cVar4, "00", 64);
	}
	StringConCat(&cVar4, ":", 64);
	if (iVar2 < 10)
	{
		StringConCat(&cVar4, "0", 64);
	}
	StringIntConCat(&cVar4, iVar2, 64);
	if (bParam1)
	{
		StringConCat(&cVar4, ".", 64);
		if (iVar3 >= 0)
		{
			StringIntConCat(&cVar4, iVar3, 64);
		}
		else
		{
			StringIntConCat(&cVar4, (iVar3 * -1), 64);
		}
		if (iVar3 < 10)
		{
			StringConCat(&cVar4, "00", 64);
		}
		else if (iVar3 < 100)
		{
			StringConCat(&cVar4, "0", 64);
		}
	}
	return HUD::_0xD8402B858F4DDD88(&cVar4, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar4));
}

bool func_1661()
{
	return Global_1896726->f_371.f_5;
}

int func_1662()
{
	return Global_1268935->f_11;
}

int func_1663()
{
	return Global_1268935->f_513;
}

bool func_1664(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam0));
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = (iVar1 - 1);
		if (iVar2 == -1 || iVar2 == 0)
		{
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(AITRANSPORT::_0xFFEC4B0A1A3ED515(iParam0, iVar2)))
		{
		}
		else
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_1665(int iParam0)
{
	int iVar0;

	iVar0 = 1191420897;
	switch (iParam0)
	{
		case 3:
			iVar0 = 1191420897;
			break;
		case 0:
			iVar0 = 1222267777;
			break;
		case 1:
			iVar0 = -630943934;
			break;
		case 2:
			iVar0 = 1528509922;
			break;
		default:
			iVar0 = 1191420897;
			break;
	}
	return iVar0;
}

bool func_1669(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	int iVar0;

	if (aggregate_func_2991(32))
	{
		if (aggregate_func_7984(vParam0.z))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (aggregate_func_2991(64))
	{
		iVar0 = func_1936(vParam0);
		if (iVar0 == 0)
		{
			return false;
		}
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
		{
			return false;
		}
	}
	if (func_505(vParam0, iParam7))
	{
		return false;
	}
	if (!bParam9 && VOLUME::_0x397769175A7DBB30(vParam4, Global_1901929->f_542.f_5, 0, 0, 0))
	{
		return false;
	}
	if (!bParam9 && VOLUME::_0x397769175A7DBB30(vParam4, Global_1901929->f_542.f_4, 0, func_1937(), 0))
	{
		return false;
	}
	if (iParam10 == 0 && func_1938(vParam4))
	{
		return false;
	}
	if (iParam10 == 0 && func_1939(vParam4, iParam3))
	{
		return false;
	}
	return true;
}

void func_1728(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 26;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 47, 8, &uParam1);
	aggregate_func_8373(uParam0);
}

int func_1801(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uParam0))
	{
		return 2;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 3;
	}
	iVar1 = iVar0;
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(((*Global_1137800)[iVar1 /*34*/])->f_1)))
	{
		return 5;
	}
	if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&uParam0, &(((*Global_1137800)[iVar1 /*34*/])->f_1)))
	{
		return 4;
	}
	return 0;
}

void func_1808(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	struct<8> Var6;
	struct<8> Var14;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_0x31010318BA9897AC(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			aggregate_func_4863(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			aggregate_func_4863(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar3])))
					{
					}
					else if (&Global_1273882->f_154[iVar3] == Global_1273882->f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1273882->f_154[iVar3]));
					}
					iVar3++;
				}
				aggregate_func_1153(&Var6, uVar5);
				Jump @395; //curOff = 224
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				aggregate_func_4863(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar3])))
						{
						}
						else if (&Global_1273882->f_154[iVar3] == Global_1273882->f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1273882->f_154[iVar3]));
						}
						iVar3++;
					}
					aggregate_func_1153(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

int func_1810(char* sParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uParam1))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	switch (iParam8)
	{
		case 0:
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uParam1, iParam8), 128);
			return 4;
		case 1:
		case 2:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uParam1))
			{
				return 1;
			}
			return aggregate_func_347(sParam0, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uParam1), iParam8);
		default:
			break;
	}
	return 3;
}

char* func_1811(int iParam0)
{
	struct<4> Var0;

	MISC::_INT_TO_STRING(iParam0, "%i", &Var0);
	return aggregate_func_2094(Var0);
}

void func_1812(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_27 = uParam1->f_27;
	uParam0->f_28 = uParam1->f_28;
	MISC::_COPY_MEMORY(&(uParam0->f_1), &(uParam1->f_1), 7);
	uParam0->f_25 = uParam1->f_25;
	uParam0->f_24 = uParam1->f_24;
	uParam0->f_8 = { uParam1->f_8 };
}

void func_1813(var uParam0, struct<5> Param1, bool bParam6)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, Param1);
	if (Param1 || bParam6)
	{
		if (Param1.f_1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, "POSSE_LEADER");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, "POSSE_HIRED_MEMBER");
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, Param1.f_2);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_4, Param1.f_3);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, Param1.f_4);
	}
}

void func_1815(var uParam0, var uParam1, var uParam2)
{
	if (aggregate_func_4240(uParam2, 4096))
	{
		func_2030(uParam1, *uParam0);
	}
	if (aggregate_func_4240(uParam2, 65536))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_3, uParam0->f_2);
	}
	if (aggregate_func_4240(uParam2, 128))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_18, uParam0->f_16);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_19, uParam0->f_17);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_20, uParam0->f_18);
	}
	if (aggregate_func_4240(uParam2, 256))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_21, uParam0->f_19);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_22, uParam0->f_20);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_23, uParam0->f_21);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_24, uParam0->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_25, uParam0->f_23);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_26, uParam0->f_24);
	if (aggregate_func_4240(uParam2, 2048))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_27, &(uParam0->f_25));
	}
	if (aggregate_func_4240(uParam2, 512))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_28, &(uParam0->f_41));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_29, uParam0->f_57);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_30, uParam0->f_58);
	}
	if (aggregate_func_4240(uParam2, 1024))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_31, uParam0->f_59);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_32, uParam0->f_60);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_33, uParam0->f_61);
	}
	if (aggregate_func_4240(uParam2, 64))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_34, uParam0->f_62);
	}
	if (aggregate_func_4240(uParam2, 32))
	{
		if (aggregate_func_3096(uParam0->f_79))
		{
			DATABINDING::_0x422179C7F6AD9304(uParam1->f_36, &(uParam0->f_79));
		}
	}
	if (aggregate_func_4240(uParam2, 1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_9, uParam0->f_8);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_10, uParam0->f_9);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_8, uParam0->f_7);
	}
	if (aggregate_func_4240(uParam2, 2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_42, uParam0->f_66);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_40, uParam0->f_64);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_41, uParam0->f_65);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_39, uParam0->f_63);
	}
	if (aggregate_func_4240(uParam2, 4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_46, uParam0->f_70);
	}
	if (aggregate_func_4240(uParam2, 4) || aggregate_func_4240(uParam2, 16384))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_44, uParam0->f_68);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_45, uParam0->f_69);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_43, uParam0->f_67);
	}
	if (aggregate_func_4240(uParam2, 8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_50, uParam0->f_74);
	}
	if (aggregate_func_4240(uParam2, 8) || aggregate_func_4240(uParam2, 32768))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, uParam0->f_72);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, uParam0->f_73);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_47, uParam0->f_71);
	}
	if (aggregate_func_4240(uParam2, 16))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_54, uParam0->f_78);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_51, uParam0->f_75);
	}
	if (aggregate_func_4240(uParam2, 16) || aggregate_func_4240(uParam2, 131072))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_52, uParam0->f_76);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, uParam0->f_77);
	}
}

bool func_1817()
{
	bool bVar0;
	char* sVar1;
	int iVar2;

	if (Global_1180694->f_500 != 0 && (MISC::GET_GAME_TIMER() - Global_1180694->f_500) < 15000)
	{
		return false;
	}
	bVar0 = aggregate_func_8489(-2040602682);
	if (!aggregate_func_5254(-2040602682, 1, bVar0))
	{
		sVar1 = MISC::_CREATE_VAR_STRING(2, "NG_PP_POOR", aggregate_func_6048(-2040602682, 0, bVar0));
		aggregate_func_2975(sVar1, 10000, 0, 0, 0, 1);
		return false;
	}
	iVar2 = POSSE::_0xC088FF658B2E51DA();
	if (iVar2 >= 5)
	{
		return false;
	}
	return true;
}

bool func_1820(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		_NAMESPACE26::_0x0A04A07BC3074EDB(1);
		if (POSSE::_0xC08FFF658B2E51DA())
		{
			_NAMESPACE26::_0x0A04A07BC3074EDB(1);
			aggregate_func_7821(1);
			return true;
		}
	}
	else
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		if (iParam0 == iVar0)
		{
			_NAMESPACE26::_0x0A04A07BC3074EDB(1);
		}
		if (POSSE::_0xC08FFF658B2E51DB(iParam0))
		{
			aggregate_func_7821(1);
			return true;
		}
	}
	return false;
}

int func_1821(int iParam0)
{
	int iVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return 0;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1182189[iVar0 /*17*/];
}

void func_1822(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<7> Var4;
	int iVar11;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = aggregate_func_8046(iParam1);
	iVar3 = 255;
	func_758();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (!MINIGAME::_0x8593A8CB0ED2C3B4(iVar0))
		{
		}
		else
		{
			iVar3 = MINIGAME::_0xD39D32EB3B52DD83(iVar0);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar3))
			{
			}
			else
			{
				Var4 = { aggregate_func_2843(iVar3) };
				if (!aggregate_func_3096(Var4))
				{
				}
				else
				{
					func_851(&Var4, PLAYER::GET_PLAYER_NAME(iVar3), 0, iParam0);
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	iVar11 = (iVar2 - iVar1);
	iVar0 = 0;
	if (iVar11 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar11)
		{
			func_1370(iParam0);
			iVar1++;
			iVar0++;
		}
	}
}

bool func_1824(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return true;
	}
	iVar0 = iParam0;
	if (aggregate_func_4477(iVar0))
	{
		return true;
	}
	if (aggregate_func_4296(30, iVar0))
	{
		return true;
	}
	if (aggregate_func_4325(262144, iVar0))
	{
		return true;
	}
	return false;
}

bool func_1825(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 3:
		case 4:
		case 6:
		case 7:
		case 12:
			*uParam2 = 1210712530;
			*uParam1 = 566347780;
			return true;
		case 9:
			*uParam2 = 1210712530;
			*uParam1 = -1289525013;
			return true;
		case 11:
			*uParam2 = 1210712530;
			*uParam1 = 160330423;
			return true;
		case 10:
			*uParam2 = 1210712530;
			*uParam1 = -907357718;
			return true;
		default:
			break;
	}
	return false;
}

bool func_1826(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			*uParam2 = 1210712530;
			*uParam1 = -1289525013;
			return true;
		case 2:
			*uParam2 = 1210712530;
			*uParam1 = 160330423;
			return true;
		case 3:
			*uParam2 = 1210712530;
			*uParam1 = -907357718;
			return true;
		case 5:
		case 6:
			*uParam2 = 1210712530;
			*uParam1 = 566347780;
			return true;
		default:
			break;
	}
	return false;
}

bool func_1827(int* iParam0, char* sParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam0))
	{
		return false;
	}
	iVar0 = func_2033(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam0));
	if (iVar0 > -1)
	{
		StringCopy(sParam1, MISC::_CREATE_VAR_STRING(10, "PLAYER_ENTRY_PARLEY_REMAINING", aggregate_func_1965(aggregate_func_761(iVar0, 0, 0, 0, 0, 0), joaat("COLOR_PURE_WHITE"))), 128);
		return true;
	}
	return false;
}

bool func_1828(int iParam0, char* sParam1)
{
	if (aggregate_func_4442())
	{
		StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP"), 128);
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_SESSION_INVITE_SENT"), 128);
				return true;
			case 2:
				StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_SESSION_INVITE_ACCEPTED"), 128);
				return true;
			case 3:
				StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_SESSION_INVITE_REJECTED"), 128);
				return true;
			default:
				break;
		}
	}
	return false;
}

void func_1833(int iParam0)
{
	struct<8> Var0;

	if (iParam0 >= 0 && iParam0 < 10)
	{
		*(Global_1939221->f_1433.f_1314.f_10[iParam0 /*8*/]) = { Var0 };
	}
}

char* func_1835(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NM_STABLE_FILTER_ALL_HORSES";
		case 1:
			return "NM_STABLE_FILTER_GENERIC_HORSE";
		case 2:
			return "NM_STABLE_FILTER_DRAFT_HORSE";
		case 3:
			return "NM_STABLE_FILTER_RACE_HORSE";
		case 4:
			return "NM_STABLE_FILTER_WAR_HORSE";
		case 5:
			return "NM_STABLE_FILTER_WORK_HORSE";
		case 6:
			return "NM_STABLE_FILTER_SUPERIOR_HORSE";
		default:
			break;
	}
	return "NM_STABLE_FILTER_ALL_HORSES";
}

int func_1844(bool bParam0)
{
	int iVar0;

	switch (bParam0)
	{
		case 1357161730:
			iVar0 = -1894112717;
			break;
		case 1581179681:
			iVar0 = 936171928;
			break;
		case -215258135:
			iVar0 = -1851879392;
			break;
		case -987049424:
			iVar0 = -10370486;
			break;
		case 892234183:
			iVar0 = -615306425;
			break;
		case -1554232707:
			iVar0 = 319325517;
			break;
		case -682748:
			iVar0 = -1072345087;
			break;
		case 1538293636:
			iVar0 = 1065052233;
			break;
		case -1992167326:
			iVar0 = 1228822029;
			break;
		case -1884014371:
			iVar0 = -1485503520;
			break;
		case -1871413878:
			iVar0 = -1238611766;
			break;
		case 1483778247:
			iVar0 = -1298021330;
			break;
		case -724534761:
			iVar0 = -1365950789;
			break;
		default:
			iVar0 = -1894112717;
			break;
	}
	return iVar0;
}

int func_1845(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	iVar1 = aggregate_func_3311(vParam0);
	if (func_2036(iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam3 - 1))
		{
			if (&uParam3->f_1[iVar0] == iVar2)
			{
				return iVar2;
			}
			iVar0++;
		}
	}
	fVar6 = 100000f;
	iVar0 = 0;
	while (iVar0 <= (*uParam3 - 1))
	{
		vVar3 = { func_2037(&(uParam3->f_1[iVar0])) };
		fVar7 = BUILTIN::VDIST(vVar3, vParam0);
		if (fVar7 < fVar6)
		{
			fVar6 = fVar7;
			iVar2 = &uParam3->f_1[iVar0];
		}
		iVar0++;
	}
	return iVar2;
}

void func_1846(var uParam0, struct<22> Param1)
{
	func_2030(uParam0, Param1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, Param1.f_16);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_19, Param1.f_17);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_20, Param1.f_18);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_21, Param1.f_19);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_22, Param1.f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_23, Param1.f_21);
}

int func_1858(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -963477619;
		case 1:
			return 1891514641;
		default:
			break;
	}
	return 636925055;
}

char* func_1859(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return MISC::_CREATE_VAR_STRING(2, "NM_FR_CHARACTER_REROLL_FAIL_INSUFFICIENT_FUND");
		case 2:
			return MISC::_CREATE_VAR_STRING(2, "NM_FR_CHARACTER_REROLL_FAIL_CONTENT");
		case 3:
			return MISC::_CREATE_VAR_STRING(2, "NM_FR_CHARACTER_REROLL_FAIL_GENERIC");
		default:
			break;
	}
	return MISC::_CREATE_VAR_STRING(2, "NM_FR_CHARACTER_REROLL_INFO");
}

char* func_1861(int iParam0, int iParam1, int iParam2)
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
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_PROFIT_CAP", func_2046(iVar0, 0, 0));
		case -1589038658:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_DAILY_BUYIN_CAP";
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_BUYIN_CAP", func_2046(iVar0, 0, 0));
		case 1671747787:
			if (iVar0 == 0)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP");
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP", func_2046(iVar0, 1, 0));
		case 1053423395:
			return "NET_MG_HELP_PUB_RE_BUYIN_CAP";
		case 579389526:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_OVERALL_CAP";
			}
			return MISC::_CREATE_VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_OVERALL_CAP", func_2046(iVar0, 0, 0));
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

char* func_1862(int iParam0)
{
	switch (iParam0)
	{
		case 65536:
			return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PUBLIC_NO_MONEY");
		case 131072:
			return MISC::_CREATE_VAR_STRING(2, "NET_MG_HELP_PRIVATE_NO_MONEY");
		default:
			break;
	}
	return "";
}

int func_1866(bool bParam0, int iParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	struct<2> Var0[15];
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (aggregate_func_4537(bParam0))
	{
		return aggregate_func_7590(aggregate_func_2035(bParam0, 1), bParam2, uParam3);
	}
	if (!aggregate_func_2010(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (aggregate_func_2892(0) && !aggregate_func_1519());
	if (iParam6 != 0)
	{
		if (aggregate_func_4251() == 0)
		{
			return 0;
		}
		bParam5 = false;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0 || &Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			bVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == 2084597891 && aggregate_func_4574(bVar32))
			{
				Jump @438; //curOff = 179
			}
			else if (&Var0[iVar34 /*2*/] == 773203532 && aggregate_func_2926(bVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = aggregate_func_2080(&(Var0[iVar34 /*2*/]), iParam6);
				}
				else
				{
					iVar33 = aggregate_func_1136(&(Var0[iVar34 /*2*/]), 0, !bVar35, 1);
				}
				if (iVar33 >= bVar32)
				{
				}
				else if (bVar35)
				{
					if (aggregate_func_4998(&(Var0[iVar34 /*2*/])) || aggregate_func_4999(&(Var0[iVar34 /*2*/])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = aggregate_func_230(7, &(Var0[iVar34 /*2*/]), &iVar36);
						}
						iVar38 = aggregate_func_5000(&(Var0[iVar34 /*2*/]), iParam6);
						if (((iVar33 + iVar37) + iVar38) >= bVar32)
						{
							if ((iVar33 + iVar38) < bVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*uParam4 = iVar36;
							}
						}
						else
						{
							Jump @422; //curOff = 378
							if (bParam5 && ((iVar33 + aggregate_func_1157(7, &(Var0[iVar34 /*2*/]))) + aggregate_func_928(&(Var0[iVar34 /*2*/]))) >= bVar32)
							{
							}
							else
							{
								*uParam3 = { *(Var0[iVar34 /*2*/]) };
								return 0;
							}
						}
						iVar34++;
						return 1;
					}
				}
			}
		}
	}
}

int func_1868(int* iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(iParam0))
	{
		return -1;
	}
	iVar0 = 255;
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return 0;
	}
	if (func_805())
	{
		return 2;
	}
	if (!aggregate_func_3653(PLAYER::PLAYER_ID(), &uVar1, &uVar2, 1))
	{
		return 4;
	}
	if (!aggregate_func_4086(iVar0))
	{
		return 1;
	}
	if (aggregate_func_2628(iVar0))
	{
		return 3;
	}
	if (func_621(iVar0))
	{
		return 6;
	}
	return 5;
}

bool func_1869(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam2 = 1210712530;
			*uParam1 = -1289525013;
			return true;
		case 7:
			*uParam2 = 1210712530;
			*uParam1 = -907357718;
			return true;
		case 8:
			*uParam2 = 1210712530;
			*uParam1 = 160330423;
			return true;
		default:
			break;
	}
	return false;
}

bool func_1870(int iParam0, char* sParam1)
{
	switch (*iParam0)
	{
		case 1:
		case 2:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ON_CONTENT"), 128);
			return true;
		case 6:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_SHACK_INVITE_SENT"), 128);
			return true;
		case 3:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_SHACK_ALREADY_INSIDE"), 128);
			return true;
		case 4:
			StringCopy(sParam1, MISC::_CREATE_VAR_STRING(2, "PLAYER_ENTRY_SHACK_LEADER_NOT_IN"), 128);
			return true;
		default:
			break;
	}
	return false;
}

char* func_1886(int iParam0)
{
	switch (iParam0)
	{
		case 1816768801:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH");
		case -533426613:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_TEAM");
		case -1918441640:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_LTS");
		case -457802746:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_FTB");
		case 1788958412:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_PITP");
		case 1153715636:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_LMS");
		case 424482930:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_MM");
		case 1272390114:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_WOC");
		case -1581094459:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_EXC");
		case 1842544025:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_TLG");
		case -632356431:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_TTLG");
		case -559809431:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_HT");
		case 1175500245:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_TFTB");
		case -1437925683:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_TWOC");
		case -548018579:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_EC");
		case 10577687:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_MC");
		case -222655798:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_GR");
		case -725256130:
			return MISC::_CREATE_VAR_STRING(2, "GST_DEATHMATCH_TGR");
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* func_1887(int iParam0)
{
	switch (iParam0)
	{
		case -784189810:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_STANDA");
		case 1579717899:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_COMBAT");
		case -63669280:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_DUALCO");
		case 851921060:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_ELIM");
		case 2028478397:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_SURVIV");
		case 1457860192:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_TIMECP");
		case -79999383:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_GOLDRU");
		case -1957416901:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_RUNAWT");
		case 218185167:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_TARRAC");
		case 1744858848:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_OPERAC");
		case -1185533313:
			return MISC::_CREATE_VAR_STRING(2, "GST_RACE_OPTARA");
		default:
			break;
	}
	return "Invalid RACE_SUB_TYPE";
}

bool func_1893(int iParam0)
{
	if (!aggregate_func_5409(iParam0))
	{
		return false;
	}
	return (Global_1131373->f_11.f_1556[aggregate_func_5410(iParam0, 1) /*46*/])->f_7;
}

int func_1936(vector3 vParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!aggregate_func_1759(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 1462115960;
	Var0.f_3 = vParam0.z;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 759645552;
		DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	}
	return uVar5;
}

int func_1937()
{
	return -1635525483;
}

bool func_1938(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (aggregate_func_7777(iVar1) == 4)
			{
			}
			else if (BUILTIN::VDIST(vParam0, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) < Global_1901929->f_542)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1939(vector3 vParam0, int iParam3)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;

	if (aggregate_func_4268(vParam0))
	{
		return true;
	}
	if (iParam3 >= 0 && iParam3 < 32)
	{
		iVar5 = ((*Global_1126840)[iParam3 /*83*/])->f_33.f_3;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!aggregate_func_4268(((*Global_1123778)[iVar0 /*27*/])->f_20))
		{
			fVar1 = BUILTIN::VDIST(((*Global_1123778)[iVar0 /*27*/])->f_20, vParam0);
			if (fVar1 <= Global_1901929->f_542.f_3)
			{
				return true;
			}
		}
		if ((((Global_1123778->f_865[iVar0 /*7*/])->f_4 != iVar5 && ((Global_1123778->f_865[iVar0 /*7*/])->f_1.f_2 > 0 || (Global_1123778->f_865[iVar0 /*7*/])->f_1.f_2 < -2)) && &Global_1123778->f_865[iVar0 /*7*/] != -1) && &Global_1123778->f_865[iVar0 /*7*/] != 6)
		{
			if (aggregate_func_2606((Global_1123778->f_865[iVar0 /*7*/])->f_1, &vVar2) && !aggregate_func_4268(vVar2))
			{
				fVar1 = BUILTIN::VDIST(vVar2, vParam0);
				if (fVar1 <= Global_1901929->f_542.f_3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_1956()
{
	bool bVar0;

	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(Global_1273882->f_10))
	{
		return;
	}
	bVar0 = func_2104();
	if (bVar0 > 0)
	{
		aggregate_func_4646(-1228177771, bVar0, 0);
	}
}

void func_1957()
{
	bool bVar0;

	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(Global_1273882->f_10))
	{
		return;
	}
	bVar0 = func_1044();
	if (bVar0 > 0)
	{
		aggregate_func_4653(bVar0, 0, -142743235, 0);
	}
}

void func_2030(var uParam0, struct<7> Param1, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, Param1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_2, Param1.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3, Param1.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, Param1.f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_7, Param1.f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, Param1.f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, Param1.f_4);
}

int func_2033(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return -1;
	}
	iVar0 = iParam0;
	if ((Global_1102098->f_34[iVar0 /*11*/])->f_6)
	{
		return (600000 - NETWORK::GET_TIME_DIFFERENCE((Global_1102098->f_34[iVar0 /*11*/])->f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	return -1;
}

bool func_2036(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 2:
			*iParam1 = 1357161730;
			break;
		case 1:
			*iParam1 = 1581179681;
			break;
		case 3:
			*iParam1 = -987049424;
			break;
		case 4:
			*iParam1 = -1554232707;
			break;
		case 5:
		case 6:
		case 7:
			*iParam1 = -682748;
			break;
		case 9:
			*iParam1 = 1538293636;
			break;
		case 10:
			*iParam1 = -1871413878;
			break;
		case 11:
			*iParam1 = 1483778247;
			break;
		case 12:
			*iParam1 = -724534761;
			break;
		case 13:
			*iParam1 = 892234183;
			break;
		case 14:
			*iParam1 = -1884014371;
			break;
		case 15:
			*iParam1 = -215258135;
			break;
		case 16:
			*iParam1 = -1992167326;
			break;
		default:
			return false;
	}
	return true;
}

Vector3 func_2037(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case -682748:
			return 647.2103f, 2360.843f, 239.6554f;
		case 1357161730:
			return 2282.835f, -1006.151f, 40.1097f;
		case 1581179681:
			return -1559.206f, -314.5247f, 148.6195f;
		case -215258135:
			return -3954.582f, -2645.501f, -9.7229f;
		case -987049424:
			return 337.7321f, 1136.433f, 184.0823f;
		case 892234183:
			return -5582.125f, -3035.32f, -0.2484f;
		case -1554232707:
			return -1233.934f, -1454.895f, 82.1183f;
		case 1538293636:
			return 576.2291f, 159.81f, 134.4652f;
		case -1992167326:
			return -2343.532f, -2577.507f, 69.3761f;
		case -1884014371:
			return -4540.5f, -3435.194f, 33.0395f;
		case -1871413878:
			return 2504.218f, 952.7603f, 91.8079f;
		case 1483778247:
			return 1259.451f, -764.5186f, 79.1552f;
		case -724534761:
			return -2099.944f, -1361.193f, 126.1889f;
		default:
			break;
	}
	return vVar0;
}

char* func_2046(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	func_2134(iParam0, &Var0);
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

bool func_2104()
{
	bool bVar0;

	bVar0 = Global_1273874->f_2.f_4;
	if (!aggregate_func_4574(bVar0))
	{
		bVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return bVar0;
}

void func_2134(int iParam0, var uParam1)
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

