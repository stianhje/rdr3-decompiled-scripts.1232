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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	bool bLocal_34 = false;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_33 = 1;
	iLocal_35 = 20000;
	iLocal_38 = vScriptParam_0.x;
	iLocal_36 = vScriptParam_0.z;
	bLocal_40 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		aggregate.aberdeenpigfarm.func_1();
	}
	aggregate.aberdeenpigfarm.func_2();
	aggregate.aberdeenpigfarm.func_23();
	iLocal_37 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (aggregate.aberdeenpigfarm.func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_37)
		{
			iLocal_37 = 0;
			aggregate.aberdeenpigfarm.func_5(iLocal_38, &iLocal_36);
			switch (iLocal_36)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_39 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_36 = 1;
					}
					else
					{
						iLocal_36 = 2;
					}
					break;
				case 1:
					if (!aggregate.aberdeenpigfarm.func_1() || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						bLocal_40 = false;
						iLocal_36 = 2;
					}
					break;
				case 2:
					aggregate.aberdeenpigfarm.func_154(iLocal_38);
					aggregate.aberdeenpigfarm.func_7();
					aggregate.aberdeenpigfarm.func_8();
					if (aggregate.aberdeenpigfarm.func_10(aggregate.aberdeenpigfarm.func_9(iLocal_38)))
					{
						aggregate.aberdeenpigfarm.func_11(aggregate.aberdeenpigfarm.func_9(iLocal_38), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), aggregate.aberdeenpigfarm.func_12(iLocal_38));
					Global_1896608 = -1;
					iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
					iLocal_36 = 3;
					break;
				case 3:
					if (func_13() || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						aggregate.aberdeenpigfarm.func_14(iLocal_38);
						iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
						iLocal_36 = 4;
					}
					break;
				case 4:
					if (aggregate.aberdeenpigfarm.func_15(iLocal_38) || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						aggregate.aberdeenpigfarm.func_14(iLocal_38);
						iLocal_39 = (MISC::GET_GAME_TIMER() + iLocal_35);
						iLocal_36 = 5;
					}
					break;
				case 5:
					if (aggregate.aberdeenpigfarm.func_15(iLocal_38) || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						aggregate.aberdeenpigfarm.func_14(iLocal_38);
						iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
						iLocal_36 = 7;
					}
					break;
				case 7:
					if (aggregate.aberdeenpigfarm.func_10(aggregate.aberdeenpigfarm.func_9(iLocal_38)))
					{
						if (aggregate.aberdeenpigfarm.func_19(aggregate.aberdeenpigfarm.func_9(iLocal_38), 4) && !iLocal_39 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (aggregate.aberdeenpigfarm.func_20(iLocal_38) || iLocal_39 < MISC::GET_GAME_TIMER())
							{
								aggregate.aberdeenpigfarm.func_21(iLocal_38, 4);
								iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
								iLocal_36 = 8;
							}
							Jump @816; //curOff = 532
							aggregate.aberdeenpigfarm.func_14(iLocal_38);
							aggregate.aberdeenpigfarm.func_23();
							if (!aggregate.aberdeenpigfarm.func_24(4105, 0))
							{
								aggregate.aberdeenpigfarm.func_23();
							}
							aggregate.aberdeenpigfarm.func_23();
							aggregate.aberdeenpigfarm.func_23();
							aggregate.aberdeenpigfarm.func_23();
							func_29(iLocal_38);
							func_30(iLocal_38);
							aggregate.aberdeenpigfarm.func_23();
							aggregate.aberdeenpigfarm.func_23();
							iLocal_36 = 9;
							Jump @816; //curOff = 600
							aggregate.aberdeenpigfarm.func_14(iLocal_38);
							aggregate.aberdeenpigfarm.func_34();
							iLocal_36 = 10;
							Jump @816; //curOff = 617
							aggregate.aberdeenpigfarm.func_35(Global_1896662);
							aggregate.aberdeenpigfarm.func_36(iLocal_38, Global_1896662);
							iLocal_36 = 11;
							Jump @816; //curOff = 642
							aggregate.aberdeenpigfarm.func_37(iLocal_38);
							aggregate.aberdeenpigfarm.func_21(iLocal_38, 8);
							if (aggregate.aberdeenpigfarm.func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								aggregate.aberdeenpigfarm.func_39(32);
							}
							iLocal_36 = 12;
							Jump @816; //curOff = 692
							if (func_40(iLocal_38))
							{
								iLocal_37 = MISC::GET_GAME_TIMER() + 1000;
							}
							aggregate.aberdeenpigfarm.func_41(Global_1896662, iLocal_38);
							aggregate.aberdeenpigfarm.func_42(iLocal_38);
							aggregate.aberdeenpigfarm.func_21(iLocal_38, 8);
							if (aggregate.aberdeenpigfarm.func_43())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_38 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_38 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_38 /*36*/])->f_12);
							}
							Jump @816; //curOff = 793
							aggregate.aberdeenpigfarm.func_8();
							aggregate.aberdeenpigfarm.func_44(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_38 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_38 /*36*/])->f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!aggregate.aberdeenpigfarm.func_44(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						if (aggregate.aberdeenpigfarm.func_45() != -1)
						{
							aggregate.aberdeenpigfarm.func_46();
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

bool func_13()
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		iLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1209.053f, -193.1814f, 101.852f, 0f, 0f, 19.83985f, 6.216366f, 11.62523f, 3.695f, "ScarlettMeadows Horse Shop - m_volHorseShop");
		iLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1207.376f, -186.3412f, 100.5991f, 0f, 0f, 17f, 4f, 4.18f, 7f, "ScarlettMeadows Horse Shop - m_volHorseShopOutsideDoor");
		aggregate.saintdenis.func_54(9, iLocal_30);
		iLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SCH_HORSESHOP_GUARD");
		VOLUME::_0x39816F6F94F385AD(iLocal_31, 1193.417f, -220.1935f, 101.9785f, 0f, 0f, 14.80028f, 34.68813f, 24.66934f, 23.864f);
		VOLUME::_0x39816F6F94F385AD(iLocal_31, 1214.513f, -212.8789f, 101.9785f, 0f, 0f, 15.60754f, 23.67516f, 28.10355f, 23.864f);
		VOLUME::_0x39816F6F94F385AD(iLocal_31, 1187.173f, -208.151f, 105.1929f, 0f, 0f, 43.4823f, 32.91484f, 13.00947f, 30.26328f);
		iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1209.053f, -193.1814f, 101.9785f, 0f, 0f, 19.83985f, 100.2164f, 100.6252f, 30.88881f, "ScarlettMeadows Horse Shop - GUARDS REGISTER");
	}
	else
	{
		iLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1209.053f, -193.1814f, 101.9785f, 0f, 0f, 19.83985f, 6.216366f, 11.62523f, 2.888809f, "ScarlettMeadows Horse Shop - m_volHorseShop");
	}
	return true;
}

void func_29(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		func_59(9, 798, iLocal_29, iParam0, 0, 0, 2, -1082130432 /* Float: -1f */, 0, 0);
		aggregate.scarletthorseshop.func_60(9, 1);
		aggregate.scarletthorseshop.func_60(9, 16384);
		func_61(9, 1024651048, 0, 0);
		func_61(9, -2089878557, 0, 0);
		func_61(9, 1889654345, -1f, 1);
		func_61(9, -937753286, 1f, 1);
		aggregate.scarletthorseshop.func_62(41, 9, 1, 0);
	}
	else
	{
		aggregate.annesburg.func_63(9, iLocal_29, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
		aggregate.annesburg.func_64(9, 536870912);
		aggregate.annesburg.func_64(9, 16384);
		aggregate.annesburg.func_64(9, 32768);
		aggregate.annesburg.func_64(9, 1);
		aggregate.annesburg.func_64(9, 8388608);
		aggregate.annesburg.func_64(9, 8192);
		aggregate.annesburg.func_64(9, 4);
		aggregate.annesburg.func_64(9, 16777216);
		aggregate.annesburg.func_64(9, 67108864);
		if (!aggregate.annesburg.func_109() && aggregate.annesburg.func_110())
		{
			aggregate.annesburg.func_66(9, 1889654345, 0, 0);
			aggregate.annesburg.func_66(9, -937753286, 0, 0);
		}
		else
		{
			aggregate.annesburg.func_66(9, 1889654345, -1f, 1);
			aggregate.annesburg.func_66(9, -937753286, 1f, 1);
		}
	}
}

void func_30(int iParam0)
{
	aggregate.annesburg.func_67(798, iLocal_29, 1);
	LAW::_CREATE_GUARD_ZONE("SCARLET_HORSE_SHOP_OUTSIDE_PENS");
	LAW::_0x8C598A930F471938("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_32);
	LAW::_0x35815F372D43E1E5("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_31);
	LAW::_0xAD3E07C37A7C1ADC("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_31);
	LAW::_0xA1B0E6301E2E02A6("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_31);
	aggregate.annesburg.func_67(798, iLocal_31, 1);
	aggregate.annesburg.func_67(800, iLocal_31, 0);
}

bool func_40(int iParam0)
{
	func_71(41, 799, iLocal_31, 9, &iLocal_33);
	if (aggregate.adlerranch.func_61(&bLocal_34))
	{
		if (bLocal_34)
		{
			aggregate.armadillo.func_69(1024651048, 1);
			aggregate.armadillo.func_69(-2089878557, 1);
		}
	}
	return false;
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = aggregate.annesburg.func_114(iParam3, iParam0);
	vVar1 = { aggregate.benedictpoint.func_118(iVar0) };
	vVar4 = { func_104(iVar0) };
	if (aggregate.annesburg.func_121(vVar1))
	{
		return;
	}
	if (!aggregate.benedictpoint.func_120(16, 16384))
	{
		if (!aggregate.aberdeenpigfarm.func_85(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	aggregate.aberdeenpigfarm.func_110(iParam0);
	(Global_1915170->f_3[iParam0 /*447*/])->f_22 = -1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_10 = { vVar1 };
	if (aggregate.annesburg.func_121(vVar4))
	{
		(Global_1915170->f_3[iParam0 /*447*/])->f_10 = { vVar1 };
	}
	else
	{
		(Global_1915170->f_17805[iVar0 /*11*/])->f_2 = { vVar4 };
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_9 = iVar0;
	(Global_1915170->f_3[iParam0 /*447*/])->f_25 = iParam2;
	(Global_1915170->f_3[iParam0 /*447*/])->f_26 = iParam4;
	(Global_1915170->f_3[iParam0 /*447*/])->f_28 = iParam5;
	(Global_1915170->f_3[iParam0 /*447*/])->f_29 = iParam9;
	(Global_1915170->f_3[iParam0 /*447*/])->f_8 = iParam3;
	(Global_1915170->f_3[iParam0 /*447*/])->f_410 = iParam8;
	*(Global_1957543->f_126[iParam0 /*3*/]) = { 0f, 0f, 0f };
	Global_1957543->f_244[iParam0] = 0f;
	Global_1957543->f_632[iParam0] = 0;
	StringCopy(Global_1957543->f_319[iParam0 /*8*/], "", 64);
	if (fParam7 <= 0f)
	{
		fParam7 = aggregate.annesburg.func_116(iParam0);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_18 = fParam7;
	(Global_1915170->f_3[iParam0 /*447*/])->f_7 = iParam6;
	if (!func_109(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			aggregate.benedictpoint.func_123(iParam3);
			break;
		case 10:
			aggregate.benedictpoint.func_124(iParam3);
			break;
		case 15:
			aggregate.benedictpoint.func_125();
			break;
		case 9:
			aggregate.benedictpoint.func_126();
			break;
	}
	func_114((Global_1915170->f_3[iParam0 /*447*/])->f_9);
	aggregate.aberdeenpigfarm.func_139(iParam0, 16);
	aggregate.benedictpoint.func_129(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = aggregate.aberdeenpigfarm.func_140(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/] = iParam1;
	((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_4 = iParam2;
	((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_5 = iParam3;
	((Global_1915170->f_3[iParam0 /*447*/])->f_318[iVar0 /*6*/])->f_1 = { 0f, 0f, 0f };
	(Global_1915170->f_3[iParam0 /*447*/])->f_409++;
}

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if ((MISC::GET_FRAME_COUNT() % 10) != 0)
	{
		return;
	}
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return;
	}
	if (!aggregate.aberdeenpigfarm.func_85(iParam1))
	{
		return;
	}
	iVar0 = aggregate.aberdeenpigfarm.func_174(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (*iParam4)
		{
			iVar3 = ITEMSET::CREATE_ITEMSET(true);
			iVar1 = ENTITY::_0x84CCF9A12942C83D(iParam2, iVar3, 1, 1, 0, 0);
			iVar4 = 0;
			while (iVar4 < iVar1)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar3);
				iVar6 = MISC::_0x3FFB15534067DCD4(iVar5);
				if (!aggregate.fm_deathmatch_controller.func_565(iVar6))
				{
				}
				else if (aggregate.fme_challenges.func_1088(iVar6))
				{
				}
				else if (func_143(iVar6))
				{
				}
				else
				{
					func_144(iVar6, iParam0);
					iVar2++;
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar3);
			if (iVar2 < iParam3)
			{
				*iParam4 = 1;
			}
			else
			{
				*iParam4 = 0;
			}
		}
	}
	else
	{
		*iParam4 = 1;
	}
}

void func_90(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		if (HUD::_0x2C729F2B94CEA911("RHRGNAU"))
		{
			if (HUD::_0xD0976CC34002DB57("RHRGNAU"))
			{
				HUD::_0xAA03F130A637D923("RHRGNAU");
			}
		}
	}
}

Vector3 func_104(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_166(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2941.929f, 1320.927f, 46.2401f;
		case 1:
			return 2939f, 1287f, 0f;
		case 2:
			return 2931.596f, 1282.839f, 44.6783f;
		case 117:
			return -5227.45f, -3468.19f, -20.49293f;
		case 118:
			return -5228.75f, -3468.28f, -21.57f;
		case 9:
			return -753.4219f, -1285.01f, 43.20049f;
		case 6:
			return -785.1682f, -1324.179f, 46.3505f;
		case 8:
			return -814.4116f, -1367.243f, 43.7509f;
		case 13:
			return -868.3356f, -1366.207f, 44.75311f;
		case 14:
			return -875.0186f, -1328.058f, 44.00846f;
		case 19:
			return -764.2743f, -1292.576f, 44.3442f;
		case 12:
			return -813.7f, -1374.1f, 44.2f;
		case 22:
			return 1417.288f, 273.5687f, 88.4881f;
		case 24:
			return 1522.305f, 442.8598f, 89.6785f;
		case 25:
			return 1525.407f, 442.7721f, 90.6467f;
		case 26:
			return 2161.5f, -618.5f, 43f;
		case 27:
			return -1092.88f, -575.69f, 81.41f;
		case 28:
			return -1094.41f, -577.51f, 81.41f;
		case 29:
			return 1294.084f, -1303.102f, 76.0418f;
		case 30:
			return 1297.423f, -1278.412f, 75.65752f;
		case 31:
			return 1319.43f, -1142.08f, 81.41f;
		case 33:
			return 1327.036f, -1292.386f, 77.2488f;
		case 34:
			return 1326.268f, -1323.129f, 78.1929f;
		case 35:
			return 1228.508f, -1296.796f, 77.6347f;
		case 39:
			return 1232.206f, -1300.197f, 77.8496f;
		case 41:
			return 1209.053f, -193.1814f, 101.9785f;
		case 43:
			return 2657.466f, -1180.96f, 53.2785f;
		case 44:
			return 2819.495f, -1331.29f, 45.514f;
		case 45:
			return 2721.24f, -1231.66f, 49.37f;
		case 46:
			return 2858.207f, -1199.817f, 49.046f;
		case 48:
			return 2828.087f, -1315.179f, 47.4196f;
		case 49:
			return 2714.586f, -1286.893f, 50.3211f;
		case 50:
			return 2508.212f, -1449.654f, 48.41523f;
		case 51:
			return 2747.906f, -1397.089f, 47.1107f;
		case 52:
			return 2746.599f, -1394.278f, 46.918f;
		case 53:
			return 2554.144f, -1166.025f, 54.3474f;
		case 63:
			return 2832.02f, -1225.563f, 46.6422f;
		case 60:
			return 2734.174f, -1119.755f, 50.10792f;
		case 68:
			return -1753.404f, -392.557f, 155.2576f;
		case 69:
			return -1792.444f, -385.412f, 160.6924f;
		case 70:
			return -1812.343f, -370.618f, 161.8814f;
		case 71:
			return -1819.88f, -561.8194f, 157.2323f;
		case 74:
			return -1763.78f, -385.1118f, 156.7401f;
		case 77:
			return -307.9643f, 773.6048f, 117.7031f;
		case 78:
			return -306.7f, 813.6f, 118.7f;
		case 82:
			return -338.8647f, 767.4334f, 115.5628f;
		case 83:
			return -286.9307f, 809.6714f, 120.6565f;
		case 84:
			return -323.5066f, 799.6924f, 118.973f;
		case 85:
			return -279.273f, 781.7448f, 118.7954f;
		case 86:
			return -369.4457f, 786.6935f, 115.9904f;
		case 87:
			return -176.3f, 630.1f, 115.331f;
		case 88:
			return -174.0662f, 633.9207f, 115.109f;
		case 90:
			return -326.1232f, 771.9214f, 116.436f;
		case 93:
			return 3023.859f, 561.206f, 46.7352f;
		case 98:
			return 2986.003f, 567.9055f, 45.337f;
		case 96:
			return 2967.273f, 796.7416f, 52.5948f;
		case 99:
			return -1302.951f, 394.6608f, 94.3817f;
		case 101:
			return -1300.283f, 400.4247f, 94.3817f;
		case 100:
			return -1299.608f, 401.5503f, 94.97269f;
		case 105:
			return -5518.071f, -2906.217f, -2.7513f;
		case 102:
			return -5488.293f, -2937.662f, 0.6299f;
		case 103:
			return -5506.691f, -2968.343f, -1.2586f;
		case 104:
			return -5509.019f, -2947.435f, -2.8934f;
		case 107:
			return -5520.701f, -3044.427f, -1.40419f;
		case 108:
			return -3684.342f, -2626.877f, -12.5497f;
		case 3:
			return -2842.211f, 137.3398f, 183.8268f;
		case 4:
			return -1005.934f, -540.8262f, 97.9502f;
		case 40:
			return 2076.835f, 1000.829f, 111.4973f;
		case 76:
			return -2251.034f, -1916.911f, 115.9488f;
		case 64:
			return -142.072f, -23.5242f, 95.0883f;
		case 65:
			return 675.3091f, -1251.233f, 43.0152f;
		case 66:
			return 1875.2f, -1859.182f, 41.8f;
		case 67:
			return 2366.084f, 1347.122f, 105.1305f;
		case 130:
			return -1402f, -2317f, 43.6f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate.benedictpoint.func_120(iParam0, 16384))
	{
		return true;
	}
	if (!aggregate.aberdeenpigfarm.func_85(iParam1))
	{
		return false;
	}
	iVar0 = aggregate.aberdeenpigfarm.func_174(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1915170->f_3[iParam0 /*447*/])->f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B((Global_1915170->f_3[iParam0 /*447*/])->f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783((Global_1915170->f_3[iParam0 /*447*/])->f_25);
			}
		}
		aggregate.annesburg.func_67(iParam1, (Global_1915170->f_3[iParam0 /*447*/])->f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1915170->f_3[iParam0 /*447*/])->f_25, 1, 1);
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1915170->f_3[iParam0 /*447*/])->f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B((Global_1915170->f_3[iParam0 /*447*/])->f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783((Global_1915170->f_3[iParam0 /*447*/])->f_28);
			}
		}
		aggregate.annesburg.func_67(iParam1, (Global_1915170->f_3[iParam0 /*447*/])->f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B((Global_1915170->f_3[iParam0 /*447*/])->f_28, 0, 1);
	}
	(Global_1915170->f_3[iParam0 /*447*/])->f_21 = iParam1;
	(Global_1915170->f_3[iParam0 /*447*/])->f_23 = iVar0;
	return true;
}

void func_114(int iParam0)
{
	if (!aggregate.aberdeenpigfarm.func_166(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 3:
		case 4:
		case 22:
		case 26:
		case 31:
		case 40:
		case 44:
		case 63:
		case 68:
		case 76:
		case 82:
		case 104:
			if (!aggregate.aberdeenpigfarm.func_167(iParam0, 2))
			{
				aggregate.aberdeenpigfarm.func_168(iParam0, 2);
			}
			break;
	}
}

bool func_143(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "StableOwnedHorse"))
	{
		return true;
	}
	return false;
}

void func_144(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	DECORATOR::DECOR_SET_INT(iParam0, "StableOwnedHorse", iParam1);
}

