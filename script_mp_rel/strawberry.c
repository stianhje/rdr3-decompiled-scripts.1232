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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	vector3 vLocal_48 = { 0f, 0f, 0f };
	bool bLocal_51 = false;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	vLocal_48 = { -1837.777f, -440.5519f, 158.5646f };
	iLocal_52 = 20000;
	iLocal_55 = vScriptParam_0.x;
	iLocal_53 = vScriptParam_0.z;
	bLocal_57 = false;
	if (Global_1901929->f_1.f_24 > 0)
	{
		aggregate_func_4548();
	}
	aggregate_func_630();
	aggregate_func_4238();
	iLocal_54 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (aggregate_func_4546())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_54)
		{
			iLocal_54 = 0;
			aggregate_func_4561(iLocal_55, &iLocal_53);
			switch (iLocal_53)
			{
				case 0:
					if (Global_1901929->f_1.f_24 > 0)
					{
						iLocal_56 = (MISC::GET_GAME_TIMER() + Global_1901929->f_1.f_24);
						iLocal_53 = 1;
					}
					else
					{
						iLocal_53 = 2;
					}
					break;
				case 1:
					if (!aggregate_func_4548() || iLocal_56 < MISC::GET_GAME_TIMER())
					{
						bLocal_57 = false;
						iLocal_53 = 2;
					}
					break;
				case 2:
					aggregate_func_4239(iLocal_55);
					aggregate_func_4547();
					aggregate_func_4534();
					if (aggregate_func_4326(aggregate_func_4441(iLocal_55)))
					{
						aggregate_func_4541(aggregate_func_4441(iLocal_55), 4);
					}
					LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), aggregate_func_4549(iLocal_55));
					Global_1896608 = -1;
					iLocal_56 = (iLocal_52 + MISC::GET_GAME_TIMER());
					iLocal_53 = 3;
					break;
				case 3:
					if (func_13() || iLocal_56 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_55);
						iLocal_56 = (iLocal_52 + MISC::GET_GAME_TIMER());
						iLocal_53 = 4;
					}
					break;
				case 4:
					if (aggregate_func_4332(iLocal_55) || iLocal_56 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_55);
						iLocal_56 = (MISC::GET_GAME_TIMER() + iLocal_52);
						iLocal_53 = 5;
					}
					break;
				case 5:
					if (aggregate_func_4332(iLocal_55) || iLocal_56 < MISC::GET_GAME_TIMER())
					{
						aggregate_func_4245(iLocal_55);
						iLocal_56 = (iLocal_52 + MISC::GET_GAME_TIMER());
						iLocal_53 = 7;
					}
					break;
				case 7:
					if (aggregate_func_4326(aggregate_func_4441(iLocal_55)))
					{
						if (aggregate_func_4544(aggregate_func_4441(iLocal_55), 4) && !iLocal_56 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (aggregate_func_4594(iLocal_55) || iLocal_56 < MISC::GET_GAME_TIMER())
							{
								aggregate_func_4343(iLocal_55, 4);
								iLocal_56 = (iLocal_52 + MISC::GET_GAME_TIMER());
								iLocal_53 = 8;
							}
							Jump @832; //curOff = 548
							aggregate_func_4245(iLocal_55);
							aggregate_func_4238();
							if (!aggregate_func_4553(4105, 0))
							{
								aggregate_func_4238();
							}
							func_26();
							aggregate_func_4238();
							aggregate_func_4238();
							func_29(iLocal_55);
							func_30(iLocal_55);
							aggregate_func_4238();
							aggregate_func_4238();
							iLocal_53 = 9;
							Jump @832; //curOff = 616
							func_33(iLocal_55);
							aggregate_func_2893();
							iLocal_53 = 10;
							Jump @832; //curOff = 633
							aggregate_func_4554(Global_1896662);
							func_36(iLocal_55, Global_1896662);
							iLocal_53 = 11;
							Jump @832; //curOff = 658
							func_37(iLocal_55);
							aggregate_func_4343(iLocal_55, 8);
							if (aggregate_func_4555(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								aggregate_func_4460(32);
							}
							iLocal_53 = 12;
							Jump @832; //curOff = 708
							if (func_40(iLocal_55))
							{
								iLocal_54 = MISC::GET_GAME_TIMER() + 1000;
							}
							aggregate_func_746(Global_1896662, iLocal_55);
							aggregate_func_4467(iLocal_55);
							aggregate_func_4343(iLocal_55, 8);
							if (aggregate_func_2898())
							{
								PED::_0xBA0980B5C0A11924(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(((*Global_1887327)[iLocal_55 /*36*/])->f_11);
							if (((*Global_1887327)[iLocal_55 /*36*/])->f_12 > 0f)
							{
								PED::_0xA77FA7BE9312F8C0(((*Global_1887327)[iLocal_55 /*36*/])->f_12);
							}
							Jump @832; //curOff = 809
							aggregate_func_4534();
							aggregate_func_917(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (((*Global_1887327)[iLocal_55 /*36*/])->f_13 != 0)
						{
							PED::_0x95423627A9CA598E(((*Global_1887327)[iLocal_55 /*36*/])->f_13);
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
	iLocal_21 = ((*Global_1887327)[26 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 7);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry - m_volGeneral Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1791.951f, -386.005f, 161.147f, 0f, 0f, -34.984f, 8.855f, 6.307f, 3.139f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, -1793.558f, -394.3542f, 160.6098f, 0f, 0f, -34.79824f, 2f, 4.25f, 2.559283f);
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1791.368f, -386.7759f, 160.8563f, 0f, 0f, -34.984f, 1.732364f, 2.839859f, 3.059408f, "Strawberry - m_volGeneralPrompt");
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1789.667f, -388.7473f, 160.8563f, 0f, 0f, -34.984f, 1.732364f, 3.896986f, 3.059408f, "Strawberry - m_volGeneralCounterOff");
	VOLUME::_0xB469CFD9E065EB99(iLocal_22, 10031);
	iLocal_39 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1815.467f, -370.5389f, 164.0239f, 0f, 0f, 0f, 11.60175f, 9.167067f, 6.826107f, "Strawberry - m_volHotel");
	iLocal_40 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1818.428f, -370.8229f, 163.5279f, 0f, 0f, 0f, 3.110365f, 1.628369f, 2.537012f, "Strawberry - m_volHotelPrompt");
	iLocal_41 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1817.185f, -372.616f, 163.5279f, 0f, 0f, 0f, 2.140435f, 1.628369f, 2.537012f, "Strawberry - m_volHotelOfflimits");
	iLocal_42 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1808.08f, -370.6061f, 162.8967f, 0f, 0f, 0f, 3.017183f, 9.270863f, 2.154101f, "Strawberry - m_volHotelPorch");
	iLocal_43 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1815.467f, -370.539f, 166.547f, 0f, 0f, 0f, 12.2f, 9.494f, 2.515f, "Strawberry - m_volMute");
	iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1764.683f, -382.6835f, 158.2782f, 0f, 0f, -34.984f, 9.48952f, 5.821443f, 3.059408f, "Strawberry - m_volPostOfficeOwner");
	iLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry - m_volPostOfficeOfflimits Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_30, -1763.516f, -378.3214f, 158.2782f, 0f, 0f, -34.984f, 4.345877f, 2.597463f, 3.059408f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, -1766.218f, -379.3755f, 158.2782f, 0f, 0f, -34.984f, 3.121531f, 2.179444f, 3.059408f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, -1762.194f, -384.4291f, 158.2782f, 0f, 0f, -34.984f, 3.429085f, 5.790822f, 3.059408f);
	iLocal_29 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1765.216f, -384.046f, 158.2782f, 0f, 0f, -34.984f, 1.835f, 2.004f, 3.059f, "Strawberry - m_volPostOfficePrompt");
	iLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry Stn - m_volPostOfficePARENT Agg");
	VOLUME::_0x6E0D3C3F828DA773(iLocal_31, iLocal_28);
	VOLUME::_0x6E0D3C3F828DA773(iLocal_31, iLocal_30);
	VOLUME::_0xB469CFD9E065EB99(iLocal_31, 10032);
	iLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry - m_volSheriff");
	VOLUME::_0x39816F6F94F385AD(iLocal_26, aggregate_func_9077(26), 0f, 0f, 65.016f, 12f, 7f, 7.256f);
	VOLUME::_0x39816F6F94F385AD(iLocal_26, -1815.8f, -346.5f, 162.9f, 0f, 0f, 65.016f, 12f, 4f, 12f);
	iLocal_37 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1791.951f, -386.005f, 160.8563f, 0f, 0f, -34.984f, 9.1f, 6.4f, 3.256194f, "Strawberry - m_volGeneralPerscharOwnerVolume");
	iLocal_38 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1812.002f, -350.8301f, 161.6032f, 0f, 0f, 65.01599f, 11.2f, 6.3f, 4f, "Strawberry - m_volSheriffPerscharOwnerVolume");
	iLocal_32 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1753.4f, -392.8f, 156.3f, 0f, 0f, 58.4334f, 12.83099f, 10.50166f, 3.5f, "Strawberry - m_volButcher");
	iLocal_33 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1753.057f, -395.413f, 156.2f, 0f, 0f, 0.043f, 3f, 2f, 2f, "Strawberry - m_volButcherPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_32, 10028);
	iLocal_45 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1792.105f, -567.4036f, 156.8778f, 0f, 0f, -17.23253f, 31.23772f, 57.05016f, 16.08004f, "Strawberry - m_volHorseShopPen");
	iLocal_46 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1774.928f, -442.6181f, 155.4679f, 0f, 0f, -15.38216f, 6.696809f, 7.42134f, 4.243239f, "Strawberry - m_volRancherOwner");
	if (aggregate_func_4251() == -1)
	{
		iLocal_35 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1819.88f, -561.8194f, 156.632f, 0f, 0f, 74.99999f, 6.328568f, 11.11597f, 4.543f, "Strawberry Horse Shop - m_volHorseShop");
		iLocal_36 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1813.551f, -563.673f, 157.3218f, 0f, 0f, 74.99999f, 3.5f, 3.557868f, 4.892247f, "StrawberryHorse Shop - m_volHorseShopOutsideDoor");
		aggregate_func_7683(9, iLocal_36);
	}
	else
	{
		iLocal_35 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1819.88f, -561.8194f, 157.2323f, 0f, 0f, 74.99999f, 6.328568f, 11.11597f, 3.806699f, "Strawberry - m_volHorseShop");
	}
	iLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Strawberry - m_volSheriffLoitering Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_27, -1812.852f, -352.8134f, 163.3997f, 0f, 0f, 65.01599f, 6.286466f, 5.825926f, 7.256f);
	VOLUME::_0x39816F6F94F385AD(iLocal_27, -1810.468f, -349.3962f, 163.3997f, 0f, 0f, 65.01599f, 6.286466f, 7.111871f, 7.151284f);
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_27, 5, 1);
	func_55();
	return true;
}

void func_26()
{
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_29(int iParam0)
{
	aggregate_func_348(3, iLocal_22, iParam0, iLocal_23, iLocal_24, 4, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_7096(3, 1595373759, 0, 0);
	aggregate_func_7096(3, 1854467923, 0, 0);
	aggregate_func_6609(3, 8192);
	aggregate_func_1218(3, 0);
	aggregate_func_348(25, iLocal_26, iParam0, 0, 0, 2, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_6609(25, 1);
	aggregate_func_6609(25, 16384);
	aggregate_func_6609(25, 8192);
	aggregate_func_6609(25, 536870912);
	aggregate_func_348(10, iLocal_32, iParam0, iLocal_33, 0, 460, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_6609(10, 536870912);
	aggregate_func_1218(10, 0);
	aggregate_func_348(9, iLocal_35, iParam0, 0, 0, 2, 1, 0, -1082130432 /* Float: -1f */, 0);
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
	aggregate_func_348(2, iLocal_31, iParam0, iLocal_29, iLocal_30, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_1218(2, 0);
	aggregate_func_8095(iParam0);
	ENTITY::CREATE_MODEL_HIDE(vLocal_48, 5f, 2052583298, false);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	if (func_68(466, iLocal_38, 1))
	{
		func_68(467, iLocal_38, 0);
		VOLUME::_0x3EFABB21E14A6BD1(iLocal_38, 5, 1);
	}
	func_68(468, iLocal_37, 1);
	func_68(470, iLocal_31, 1);
	func_68(473, iLocal_45, 1);
	func_68(474, iLocal_45, 0);
	func_68(478, iLocal_46, 1);
}

void func_33(int iParam0)
{
	aggregate_func_6501(1f, 0f, 0f, 0f);
	iLocal_47 = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(-1809.28f, -396.9163f, 153.0447f, 85f, 2f, 2f, 0, 6f, 10f, 25f, 7.5f);
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	aggregate_func_3063(uParam1, iLocal_21, 1);
	aggregate_func_3063(uParam1, iLocal_32, 2);
	aggregate_func_3063(uParam1, iLocal_22, 2);
	aggregate_func_3063(uParam1, iLocal_31, 10);
}

void func_37(int iParam0)
{
	if (!aggregate_func_4301(iParam0))
	{
		return;
	}
	aggregate_func_4538();
	aggregate_func_7655(0, -1885260346);
	aggregate_func_7655(2, 885069200);
}

bool func_40(int iParam0)
{
	func_74();
	if (aggregate_func_6721(&bLocal_51))
	{
		if (bLocal_51)
		{
			aggregate_func_6624(-1751348037, 1);
			aggregate_func_1155(-387803631, 1, 0, 0, 0, 0, 0, 0);
			aggregate_func_6624(1024651048, 1);
			aggregate_func_6624(-2089878557, 1);
		}
	}
	return false;
}

void func_55()
{
	iLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGeneralStorePorch Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_25, -1796.973f, -382.4901f, 160.8563f, 0f, 0f, -34.984f, 3.075656f, 10.30693f, 3.256194f);
	VOLUME::_0x39816F6F94F385AD(iLocal_25, -1789.325f, -382.7872f, 160.8563f, 0f, 0f, -124.786f, 1.84945f, 10.30693f, 3.256194f);
}

bool func_68(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (aggregate_func_4251() != -1)
	{
		return false;
	}
	if (!aggregate_func_1545(iParam0, 0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	iVar0 = aggregate_func_4452(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return true;
}

void func_74()
{
	if (!aggregate_func_4484(26))
	{
		return;
	}
	func_134(26);
}

void func_94(int iParam0)
{
	aggregate_func_6501(0.775f, 0.2f, 0.025f, 0f);
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_44))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_44);
	}
	VEHICLE::_REMOVE_SPEED_ZONE(iLocal_47);
	ENTITY::REMOVE_MODEL_HIDE(vLocal_48, 5f, 2052583298, 0);
	iParam0 = iParam0;
}

void func_134(int iParam0)
{
	if (!aggregate_func_5265(1, 1))
	{
		return;
	}
	if (!LAW::_0xC7DC5A0A7DF608CB(aggregate_func_8613(1)))
	{
		return;
	}
	if (aggregate_func_1135(0, 0, 1))
	{
		return;
	}
	if (aggregate_func_4375(aggregate_func_4746(iParam0, 3)))
	{
		if (aggregate_func_1501(Global_35, (Global_1915170->f_3[3 /*447*/])->f_10, 1) > 80f)
		{
			return;
		}
	}
	if (aggregate_func_4375(aggregate_func_4746(iParam0, 0)))
	{
		if (aggregate_func_1501(Global_35, (Global_1915170->f_3[0 /*447*/])->f_10, 1) > 100f)
		{
			return;
		}
	}
	aggregate_func_4335(1, iParam0);
}

