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
		aggregate_func_4548();
	}
	aggregate_func_630();
	aggregate_func_4238();
	iLocal_37 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (aggregate_func_4546())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_37)
		{
			iLocal_37 = 0;
			aggregate_func_4561(iLocal_38, &iLocal_36);
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
					if (!aggregate_func_4548() || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						bLocal_40 = false;
						iLocal_36 = 2;
					}
					break;
				case 2:
					aggregate_func_4239(iLocal_38);
					aggregate_func_4547();
					aggregate_func_4534();
					if (aggregate_func_4326(aggregate_func_4441(iLocal_38)))
					{
						aggregate_func_4541(aggregate_func_4441(iLocal_38), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), aggregate_func_4549(iLocal_38));
					Global_1896608 = -1;
					iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
					iLocal_36 = 3;
					break;
				case 3:
					if (func_13() || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_38);
						iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
						iLocal_36 = 4;
					}
					break;
				case 4:
					if (aggregate_func_4332(iLocal_38) || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_38);
						iLocal_39 = (MISC::GET_GAME_TIMER() + iLocal_35);
						iLocal_36 = 5;
					}
					break;
				case 5:
					if (aggregate_func_4332(iLocal_38) || iLocal_39 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_38);
						iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
						iLocal_36 = 7;
					}
					break;
				case 7:
					if (aggregate_func_4326(aggregate_func_4441(iLocal_38)))
					{
						if (aggregate_func_4544(aggregate_func_4441(iLocal_38), 4) && !iLocal_39 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (aggregate_func_4594(iLocal_38) || iLocal_39 < MISC::GET_GAME_TIMER())
							{
								aggregate_func_4343(iLocal_38, 4);
								iLocal_39 = (iLocal_35 + MISC::GET_GAME_TIMER());
								iLocal_36 = 8;
							}
							Jump @816; //curOff = 532
							aggregate_func_4245(iLocal_38);
							aggregate_func_4238();
							if (!aggregate_func_4553(4105, 0))
							{
								aggregate_func_4238();
							}
							aggregate_func_4238();
							aggregate_func_4238();
							aggregate_func_4238();
							func_29(iLocal_38);
							func_30(iLocal_38);
							aggregate_func_4238();
							aggregate_func_4238();
							iLocal_36 = 9;
							Jump @816; //curOff = 600
							aggregate_func_4245(iLocal_38);
							aggregate_func_2893();
							iLocal_36 = 10;
							Jump @816; //curOff = 617
							aggregate_func_4554(Global_1896662);
							aggregate_func_4960(iLocal_38, Global_1896662);
							iLocal_36 = 11;
							Jump @816; //curOff = 642
							aggregate_func_4588(iLocal_38);
							aggregate_func_4343(iLocal_38, 8);
							if (aggregate_func_4555(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								aggregate_func_4460(32);
							}
							iLocal_36 = 12;
							Jump @816; //curOff = 692
							if (func_40(iLocal_38))
							{
								iLocal_37 = MISC::GET_GAME_TIMER() + 1000;
							}
							aggregate_func_746(Global_1896662, iLocal_38);
							aggregate_func_4467(iLocal_38);
							aggregate_func_4343(iLocal_38, 8);
							if (aggregate_func_2898())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_38 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_38 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_38 /*36*/])->f_12);
							}
							Jump @816; //curOff = 793
							aggregate_func_4534();
							aggregate_func_917(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_38 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_38 /*36*/])->f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!aggregate_func_917(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						if (aggregate_func_4251() != -1)
						{
							aggregate_func_2819();
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
	if (aggregate_func_4251() == -1)
	{
		iLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1209.053f, -193.1814f, 101.852f, 0f, 0f, 19.83985f, 6.216366f, 11.62523f, 3.695f, "ScarlettMeadows Horse Shop - m_volHorseShop");
		iLocal_30 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1207.376f, -186.3412f, 100.5991f, 0f, 0f, 17f, 4f, 4.18f, 7f, "ScarlettMeadows Horse Shop - m_volHorseShopOutsideDoor");
		aggregate_func_7683(9, iLocal_30);
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
	if (aggregate_func_4251() == -1)
	{
		aggregate_func_1479(9, 798, iLocal_29, iParam0, 0, 0, 2, -1082130432 /* Float: -1f */, 0, 0);
		aggregate_func_5610(9, 1);
		aggregate_func_5610(9, 16384);
		func_61(9, 1024651048, 0, 0);
		func_61(9, -2089878557, 0, 0);
		func_61(9, 1889654345, -1f, 1);
		func_61(9, -937753286, 1f, 1);
		aggregate_func_6124(41, 9, 1, 0);
	}
	else
	{
		aggregate_func_348(9, iLocal_29, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
		aggregate_func_6609(9, 536870912);
		aggregate_func_6609(9, 16384);
		aggregate_func_6609(9, 32768);
		aggregate_func_6609(9, 1);
		aggregate_func_6609(9, 8388608);
		aggregate_func_6609(9, 8192);
		aggregate_func_6609(9, 4);
		aggregate_func_6609(9, 16777216);
		aggregate_func_6609(9, 67108864);
		if (!aggregate_func_2820() && aggregate_func_4442())
		{
			aggregate_func_7096(9, 1889654345, 0, 0);
			aggregate_func_7096(9, -937753286, 0, 0);
		}
		else
		{
			aggregate_func_7096(9, 1889654345, -1f, 1);
			aggregate_func_7096(9, -937753286, 1f, 1);
		}
	}
}

void func_30(int iParam0)
{
	aggregate_func_2366(798, iLocal_29, 1);
	LAW::_CREATE_GUARD_ZONE("SCARLET_HORSE_SHOP_OUTSIDE_PENS");
	LAW::_0x8C598A930F471938("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_32);
	LAW::_0x35815F372D43E1E5("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_31);
	LAW::_0xAD3E07C37A7C1ADC("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_31);
	LAW::_0xA1B0E6301E2E02A6("SCARLET_HORSE_SHOP_OUTSIDE_PENS", iLocal_31);
	aggregate_func_2366(798, iLocal_31, 1);
	aggregate_func_2366(800, iLocal_31, 0);
}

bool func_40(int iParam0)
{
	func_71(41, 799, iLocal_31, 9, &iLocal_33);
	if (aggregate_func_6721(&bLocal_34))
	{
		if (bLocal_34)
		{
			aggregate_func_6624(1024651048, 1);
			aggregate_func_6624(-2089878557, 1);
		}
	}
	return false;
}

void func_61(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = aggregate_func_4550(iParam0);
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
	if (aggregate_func_4251() != -1)
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam2))
	{
		return;
	}
	if (!aggregate_func_4455(iParam1))
	{
		return;
	}
	iVar0 = aggregate_func_1988(iParam1);
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
				if (!aggregate_func_1156(iVar6))
				{
				}
				else if (aggregate_func_1794(iVar6))
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
	if (aggregate_func_4251() == -1)
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

