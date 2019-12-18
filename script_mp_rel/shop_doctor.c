#region Local Var
	struct<12> Local_0 = { 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
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
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == aggregate_func_13

void func_44(var uParam0)
{
	uParam0->f_2421.f_27 = 1;
	uParam0->f_2421.f_28 = 61613;
	uParam0->f_2421.f_35 = 1;
	uParam0->f_2421.f_36 = 61645;
	uParam0->f_2421.f_37 = 1;
	uParam0->f_2421.f_38 = 61907;
}

char* func_115(var uParam0)
{
	int iVar0;
	int iVar1;

	if (*uParam0 == 38)
	{
		aggregate_func_6123();
		return aggregate_func_1966(*(Global_1957543->f_319[38 /*8*/]));
	}
	if (*uParam0 == 15)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[15 /*8*/]))
		{
			aggregate_func_1639(15, uParam0->f_4);
		}
		return aggregate_func_1966(*(Global_1957543->f_319[15 /*8*/]));
	}
	if (*uParam0 == 35)
	{
		switch (uParam0->f_1)
		{
			case 109:
			case 113:
			case 114:
				return "JONES";
			default:
				break;
		}
	}
	iVar0 = aggregate_func_4314();
	switch (iVar0)
	{
		case 81:
			switch (uParam0->f_1)
			{
				case 84:
					return "0478_U_M_M_ValGenStoreOwner_01";
				case 85:
					return "0479_U_M_M_ValGunsmith_01";
				case 83:
					return "0477_U_M_M_ValDoctor_01";
				case 90:
					return "0480_U_M_M_ValHotelOwner_01";
				case 87:
				case 88:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				case 86:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate_func_2168();
					}
					return aggregate_func_1966(*(Global_1957543->f_319[9 /*8*/]));
				case 78:
					return "0710_U_M_M_ValBarber_01";
				case 79:
					return "0475_U_M_M_ValBartender_01";
				case 91:
					return "0686_U_M_O_ValBartender_01";
				case 82:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate_func_3148(81);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[10 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 83:
			switch (uParam0->f_1)
			{
				case 0:
					return "0036_U_M_M_AsbGunsmith_01";
				case 1:
				case 2:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 98:
			switch (uParam0->f_1)
			{
				case 93:
					return "0509_U_M_O_VhTExoticShopkeeper_01";
				case 97:
				case 98:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				case 94:
					return "1038_U_F_M_VhTBartender_01";
				case 96:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate_func_2168();
					}
					return aggregate_func_1966(*(Global_1957543->f_319[9 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 40:
			switch (uParam0->f_1)
			{
				case 6:
					return "0083_U_M_O_BlWGeneralStoreOwner_01";
				case 19:
					return "0820_S_M_M_Tailor_01_WHITE_01";
				case 13:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate_func_2168();
					}
					return aggregate_func_1966(*(Global_1957543->f_319[9 /*8*/]));
				case 8:
					return "0821_S_M_M_Barber_01_WHITE_01";
				case 14:
				case 15:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				case 10:
					return "0080_U_M_O_BlWBartender_01";
				case 12:
					return "1099_U_M_O_BLWPhotographer_01";
				case 9:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate_func_3148(40);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[10 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 26:
			switch (uParam0->f_1)
			{
				case 69:
					return "0678_U_M_M_StrGenStoreOwner_01";
				case 74:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				case 70:
					return "1039_U_M_M_StrWelcomeCenter_01";
				case 71:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate_func_2168();
					}
					return aggregate_func_1966(*(Global_1957543->f_319[9 /*8*/]));
				case 68:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate_func_3148(26);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[10 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
		case 5:
			switch (uParam0->f_1)
			{
				case 45:
					return "0315_U_M_M_NbxDoctor_01";
				case 48:
					return "0317_U_M_M_NbxGeneralStoreOwner_01";
				case 49:
					return "0319_U_M_M_NbxGunsmith_01";
				case 53:
					return "0820_S_M_M_Tailor_01_WHITE_01";
				case 46:
					return "0679_U_M_M_NBXShadyDealer_01";
				case 43:
					return "0821_S_M_M_Barber_01_WHITE_01";
				case 50:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate_func_2168();
					}
					return aggregate_func_1966(*(Global_1957543->f_319[9 /*8*/]));
				case 51:
				case 52:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				case 54:
					return "0311_U_M_M_NbxBartender_01";
				case 56:
					return "0312_U_M_M_NbxBartender_02";
				case 44:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate_func_3148(5);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[10 /*8*/]));
				case 60:
					return "1100_U_M_M_SDPhotographer_01";
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2497; //curOff = 1511
			switch (uParam0->f_1)
			{
				case 33:
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
					{
						iVar1 = aggregate_func_5518(uParam0->f_4, 0);
						if (aggregate_func_4455(iVar1) && aggregate_func_3338(iVar1) == joaat("cs_mrpearson"))
						{
							return "PEARSON_SHOPKEEPER";
						}
					}
					if (aggregate_func_4248())
					{
						return "PEARSON_SHOPKEEPER";
					}
					else
					{
						return "0400_U_M_M_RhdGenStoreOwner_01";
					}
					break;
				case 34:
					return "0401_U_M_M_RhdGunsmith_01";
				case 35:
				case 39:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				case 31:
					return "0694_U_M_M_RhdGenStoreOwner_02";
				case 36:
					return "0397_U_M_M_RhdBartender_01";
				case 30:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate_func_3148(111);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[10 /*8*/]));
				default:
					return "SHOPKEEPER_TEST_PED";
			}
			Jump @2497; //curOff = 1763
			switch (uParam0->f_1)
			{
				case 99:
					return "1036_U_M_M_WalGeneralStoreOwner_01";
				case 100:
				case 101:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2497; //curOff = 1851
			switch (uParam0->f_1)
			{
				case 41:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate_func_2168();
					}
					return aggregate_func_1966(*(Global_1957543->f_319[9 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2497; //curOff = 1919
			switch (uParam0->f_1)
			{
				case 22:
					return "EMR_Son1";
				case 24:
				case 25:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2497; //curOff = 2007
			switch (uParam0->f_1)
			{
				case 102:
					return "1084_U_F_M_TumGeneralStoreOwner_01";
				case 103:
					return "1085_U_M_M_TumGunsmith_01";
				case 105:
					return "1087_U_M_M_TumBartender_01";
				case 104:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate_func_3148(121);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[10 /*8*/]));
				case 107:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate_func_2168();
					}
					return aggregate_func_1966(*(Global_1957543->f_319[9 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2497; //curOff = 2164
			switch (uParam0->f_1)
			{
				case 108:
					return "1076_U_M_M_ArmGeneralStoreOwner_01";
				case 110:
					return "1077_U_M_O_ArmBartender_01";
				case 111:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2497; //curOff = 2259
			switch (uParam0->f_1)
			{
				case 26:
					return "0216_U_F_M_LagMother_01";
				default:
					break;
			}
			return "0216_U_F_M_LagMother_01";
			Jump @2497; //curOff = 2292
			switch (uParam0->f_1)
			{
				case 117:
				case 118:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2497; //curOff = 2367
			switch (uParam0->f_1)
			{
				case 27:
				case 28:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate_func_2167(iVar0);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2497; //curOff = 2442
			if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[11 /*8*/]))
			{
				aggregate_func_6220();
			}
			return aggregate_func_1966(*(Global_1957543->f_319[11 /*8*/]));
			Jump @2497; //curOff = 2487
			return "SHOPKEEPER_TEST_PED";
			return "SHOPKEEPER_TEST_PED";
		}

bool func_316(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	bool bVar0;

	if (aggregate_func_4268(vParam3))
	{
		return false;
	}
	if (aggregate_func_4268(vParam6))
	{
		return false;
	}
	if (!TASK::_0x841475AC96E794D1(iParam11))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam9))
	{
		return false;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1748) && (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1748, 0) || ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1748, 1, 0)))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1748, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1749) && (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1749, 0) || ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1749, 1, 0)))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1749, 0);
	}
	bVar0 = (MISC::IS_ORBIS_VERSION() && aggregate_func_6463(iParam2));
	if (iParam1 == 6 || iParam1 == 48)
	{
		bVar0 = false;
	}
	if (bVar0 && aggregate_func_3214(aggregate_func_6464(iParam2)))
	{
		if (!func_721(&(uParam0->f_4), iParam1, iParam2, aggregate_func_6464(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_722(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate_func_4242(&(uParam0->f_4), 135810);
	aggregate_func_4242(&(uParam0->f_4), 135847);
	aggregate_func_4932(&(uParam0->f_4), 135875);
	aggregate_func_4932(&(uParam0->f_4), 136410);
	uParam0->f_1746 = iParam1;
	uParam0->f_1747 = iParam2;
	uParam0->f_1776 = iParam10;
	uParam0->f_1777 = iParam11;
	uParam0->f_1751 = { vParam3 };
	uParam0->f_1754 = { vParam6 };
	uParam0->f_1768 = iParam9;
	aggregate_func_4750(uParam0, 1);
	return true;
}

void func_332(var uParam0)
{
	if (aggregate_func_4251() != -1)
	{
		aggregate_func_6708(uParam0, 0, 137215, 137224, 137233, 137775);
		aggregate_func_4958(uParam0, 0, 32);
	}
	aggregate_func_6708(uParam0, 1, 137215, 137224, 137233, 137775);
	if (uParam0->f_3 != 6 && uParam0->f_3 != 7)
	{
		func_745(uParam0, 2);
	}
	aggregate_func_4958(uParam0, 1, 32);
	aggregate_func_4958(uParam0, 2, 32);
	aggregate_func_4958(uParam0, 3, 32);
}

int func_338(var uParam0)
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) == 0)
	{
		uParam0->f_44 = func_755(0);
		return 1;
	}
	return 0;
}

int func_339(var uParam0, bool bParam1, bool bParam2)
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
	{
		case 0:
			if (aggregate_func_2852(bParam1, 887366763))
			{
				if (bParam2)
				{
					uParam0->f_44 = func_755(2);
				}
				else
				{
					uParam0->f_44 = func_755(1);
				}
				return 1;
			}
			break;
		case 1:
			if (aggregate_func_2852(bParam1, 836323602))
			{
				if (ENTITY::GET_ENTITY_HEALTH(Global_35) < BUILTIN::ROUND((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0)) / 2f)))
				{
					uParam0->f_44 = func_755(3);
				}
				else
				{
					uParam0->f_44 = func_755(5);
				}
				return 1;
			}
			if (aggregate_func_2852(bParam1, -906398725))
			{
				if (PLAYER::_0x3A6AE4EEE30370FE(PLAYER::PLAYER_ID(), 0) < 0.5f)
				{
					uParam0->f_44 = func_755(3);
				}
				else
				{
					uParam0->f_44 = func_755(6);
				}
				return 1;
			}
			if (aggregate_func_2852(bParam1, 18203328))
			{
				if (PED::_0x22F2A386D43048A9(Global_35) < 0.5f)
				{
					uParam0->f_44 = func_755(3);
				}
				else
				{
					uParam0->f_44 = func_755(4);
				}
				return 1;
			}
			break;
	}
	return 0;
}

int func_340(var uParam0, bool bParam1)
{
	return 0;
	if (bParam1)
	{
		if ((ENTITY::GET_ENTITY_HEALTH(Global_35) < BUILTIN::ROUND((BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0)) / 2f)) || PED::_0x22F2A386D43048A9(Global_35) < 0.5f) || PLAYER::_0x3A6AE4EEE30370FE(PLAYER::PLAYER_ID(), 0) < 0.5f)
		{
			uParam0->f_45 = 1;
			uParam0->f_44 = "PLAYER_ENTER_DOCTOR_CATALOG_INJURED";
		}
		else
		{
			uParam0->f_45 = 1;
			uParam0->f_44 = "PLAYER_ENTER_DOCTOR_CATALOG_HEALTHY";
		}
	}
	else if (aggregate_func_6010(uParam0))
	{
		uParam0->f_45 = 1;
		uParam0->f_44 = "PLAYER_EXIT_DOCTOR_CATALOG_PURCHASED";
	}
	return 1;
}

void func_691(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate_func_4577() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1022(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate_func_4358(uParam0, 191052);
			aggregate_func_4358(uParam0, 191972);
			aggregate_func_4358(uParam0, 192572);
			aggregate_func_4358(uParam0, 192866);
			aggregate_func_4358(uParam0, 193069);
			aggregate_func_4242(uParam0, uParam0->f_2371.f_10);
			aggregate_func_1223(uParam0, aggregate_func_3316(&(uParam0->f_167.f_1778)));
			MISC::SET_BIT(&(uParam0->f_2371.f_9), 1);
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 2))
		{
			if (aggregate_func_951(uParam0))
			{
				MISC::SET_BIT(&(uParam0->f_2371.f_9), 2);
			}
		}
	}
}

bool func_721(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<173> Var0;
	int iVar189;

	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam4))
	{
		return false;
	}
	Var0 = 14;
	Var0.f_4.f_8 = 2;
	Var0.f_4.f_11 = 16;
	Var0.f_4.f_28 = 16;
	Var0.f_4.f_45 = 16;
	Var0.f_4.f_62 = 16;
	Var0.f_4.f_79 = 16;
	Var0.f_4.f_96 = 4;
	Var0.f_4.f_96.f_1.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_136 = 4;
	Var0.f_136.f_1.f_2 = -1;
	Var0.f_136.f_1.f_3 = -1;
	Var0.f_136.f_1.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_3 = -1;
	Var0.f_136.f_1.f_4.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_4.f_3 = -1;
	Var0.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var0.f_153 = -1;
	Var0.f_154 = -1;
	Var0.f_155 = 16;
	Var0.f_172 = 16;
	iVar189 = 0;
	iVar189 = 0;
	while (iVar189 < 4)
	{
		MISC::_COPY_MEMORY(uParam0->f_436[iVar189 /*189*/], &Var0, 189);
		iVar189++;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1286 = iParam4;
	if (!aggregate_func_2177(bParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1287 = 1;
	uParam0->f_1288 = bParam3;
	uParam0->f_1279 = 215691;
	uParam0->f_1280 = 215700;
	uParam0->f_1281 = 215709;
	uParam0->f_1282 = 215709;
	uParam0->f_222 = iParam5;
	aggregate_func_4252(uParam0, 0);
	return true;
}

bool func_722(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam3))
	{
		return false;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1286 = iParam3;
	if (!aggregate_func_770(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1279 = 215691;
	uParam0->f_1280 = 215700;
	uParam0->f_1281 = 215709;
	uParam0->f_1282 = 215709;
	uParam0->f_222 = iParam4;
	aggregate_func_4252(uParam0, 0);
	return true;
}

int func_745(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2 || iParam1 == 12)
	{
		return aggregate_func_6708(uParam0, iParam1, 217495, 217526, 217613, 219211);
	}
	else
	{
		iVar0 = 0;
		if (!aggregate_func_5729(iParam1, &iVar0))
		{
			return 0;
		}
		return aggregate_func_6708(uParam0, iParam1, 219421, 193179, 126989, 30652);
	}
	return 0;
}

char* func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CHAT_SHOPKEEPER_GOSSIP_PATIENTS";
		case 1:
			return "DD_SALES_PITCH_BROWSING_MEDICAL";
		case 2:
			return "DD_SALES_PITCH_MEDICAL";
		case 3:
			return "DD_SALES_PITCH_BROWSING_RECOMMENDED_ITEM";
		case 4:
			return "DD_SALES_PITCH_STAMINA";
		case 5:
			return "DD_SALES_PITCH_HEALTH";
		case 6:
			return "DD_SALES_PITCH_ABILITY";
		default:
			break;
	}
	return "";
}

bool func_1022(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 == -1)
	{
		iVar0 = uParam0->f_3;
		if (iVar0 == 28)
		{
			iVar0 = 2;
		}
		if (!aggregate_func_770(uParam0->f_4, iVar0, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate_func_5663(uParam0, uParam0->f_20))
		{
			if (!aggregate_func_2177(bParam1, &(uParam0->f_2094)))
			{
				return false;
			}
			if (aggregate_func_5663(uParam0, uParam0->f_20))
			{
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		if (!aggregate_func_2177(bParam1, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate_func_6052(uParam0, bParam2, 1, -1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	uParam0->f_2094.f_70 = aggregate_func_4287(&(uParam0->f_2094));
	uParam0->f_2094.f_73 = 0;
	uParam0->f_2094.f_75 = 0;
	uParam0->f_2094.f_76 = 0;
	uParam0->f_2094.f_68 = 0;
	uParam0->f_2094.f_48 = 0;
	uParam0->f_2094.f_121 = 0;
	uParam0->f_2094.f_122 = -1;
	uParam0->f_2094.f_123 = -1;
	uParam0->f_2094.f_81 = 0;
	uParam0->f_2094.f_83 = 0;
	uParam0->f_2094.f_118 = 0;
	aggregate_func_5664(uParam0);
	aggregate_func_5640();
	aggregate_func_4285(uParam0);
	aggregate_func_5534();
	aggregate_func_5665(uParam0);
	uParam0->f_2094.f_50 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "GenericShop");
	uParam0->f_2094.f_51 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_50, "Title", MISC::GET_HASH_KEY(aggregate_func_5666(uParam0->f_3)));
	uParam0->f_2094.f_53 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Prompts");
	uParam0->f_2094.f_52 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Scene");
	aggregate_func_3188(uParam0, 6, joaat("IB_EXIT"));
	aggregate_func_2968(uParam0, 6, 1);
	aggregate_func_2968(uParam0, 6, 1);
	aggregate_func_3189(uParam0, 6, 0);
	aggregate_func_3188(uParam0, 1, joaat("ib_select"));
	aggregate_func_2968(uParam0, 1, 1);
	aggregate_func_2968(uParam0, 1, 1);
	aggregate_func_3189(uParam0, 1, 0);
	aggregate_func_3188(uParam0, 2, 1891107858);
	aggregate_func_2968(uParam0, 2, 0);
	aggregate_func_2968(uParam0, 2, 0);
	aggregate_func_3189(uParam0, 2, 0);
	aggregate_func_3188(uParam0, 3, -405106071);
	aggregate_func_2968(uParam0, 3, 0);
	aggregate_func_2968(uParam0, 3, 0);
	aggregate_func_3189(uParam0, 2, 0);
	if (bParam3)
	{
		uParam0->f_2094.f_133 = 0;
		uParam0->f_2094.f_135 = 0;
		uParam0->f_2094.f_131 = 0;
		uParam0->f_2094.f_137 = 0;
		uParam0->f_2094.f_143 = 0;
		uParam0->f_2094.f_139 = 0;
		uParam0->f_2094.f_145 = 0;
		uParam0->f_2094.f_147 = 0;
	}
	uParam0->f_2094.f_149 = 252357;
	uParam0->f_2094.f_150 = 253241;
	uParam0->f_2094.f_151 = 254037;
	uParam0->f_2094.f_152 = 254156;
	uParam0->f_2094.f_46 = 1;
	return true;
}

bool func_1175(var uParam0)
{
	struct<4> Var0;
	bool bVar4;

	if (!aggregate_func_4275(uParam0))
	{
		Var0 = { aggregate_func_6000(&(uParam0->f_167.f_4)) };
		if (func_1022(uParam0, Var0.f_2, Var0.f_3, 0))
		{
			aggregate_func_5892(uParam0, Var0);
			bVar4 = 1728382685; /* GXTEntry: "Right" */
			if (aggregate_func_5562(Var0, 1728382685 /* GXTEntry: "Right" */, 0) && aggregate_func_5562(Var0, -649335959 /* GXTEntry: "Left" */, 0))
			{
				bVar4 = -649335959; /* GXTEntry: "Left" */
			}
			aggregate_func_5704(uParam0, bVar4);
			aggregate_func_8078(uParam0, 172);
			aggregate_func_4358(uParam0, 315870);
			aggregate_func_4358(uParam0, 316074);
			aggregate_func_4358(uParam0, 316184);
			aggregate_func_2985(1);
		}
		else
		{
			return false;
		}
	}
	if (aggregate_func_4275(uParam0) && !aggregate_func_4275(uParam0))
	{
		if (aggregate_func_951(uParam0))
		{
		}
	}
	if (aggregate_func_4275(uParam0) && aggregate_func_4275(uParam0))
	{
		if (aggregate_func_105(uParam0))
		{
		}
		else
		{
			aggregate_func_1201(uParam0);
			return false;
		}
	}
	return true;
}

bool func_1176(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	bool bVar5;
	bool bVar6;
	bool bVar7;

	if (!aggregate_func_4275(uParam0))
	{
		GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
		bVar0 = true;
		Var1 = { aggregate_func_6000(&(uParam0->f_167.f_4)) };
		bVar5 = -1;
		bVar6 = joaat("root");
		bVar5 = Var1.f_2;
		bVar6 = Var1.f_3;
		bVar0 = false;
		aggregate_func_1223(uParam0, aggregate_func_3316(&(uParam0->f_167.f_1778)));
		if (aggregate_func_2226(uParam0, bVar5, bVar6, &bVar7))
		{
			aggregate_func_2230(uParam0, bVar7);
			if (CAM::DOES_CAM_EXIST(uParam0->f_167.f_1778.f_28))
			{
				aggregate_func_663(&(uParam0->f_167.f_1778.f_28), aggregate_func_2827(bVar7), aggregate_func_3180(uParam0));
			}
		}
		if (func_1022(uParam0, bVar5, bVar6, 1))
		{
			aggregate_func_4786(uParam0);
			aggregate_func_8078(uParam0, 173);
			aggregate_func_4358(uParam0, 316889);
			aggregate_func_4358(uParam0, 317043);
			aggregate_func_4358(uParam0, 317256);
			aggregate_func_4300(Var1);
			if (bVar0)
			{
				if (!aggregate_func_6051(uParam0, Var1.f_2, Var1.f_3, -1, 1, 1))
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if ((aggregate_func_4275(uParam0) && !aggregate_func_4275(uParam0)) && !GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		if (!aggregate_func_6997() && PED::_0xA0BC8FAED8CFEB3C(aggregate_func_3180(uParam0)))
		{
			if (aggregate_func_951(uParam0))
			{
				if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
				aggregate_func_433(&(uParam0->f_167));
			}
		}
	}
	if (aggregate_func_4275(uParam0) && aggregate_func_4275(uParam0))
	{
		if (aggregate_func_105(uParam0) && !aggregate_func_4734(4194304))
		{
		}
		else
		{
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
			GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
			aggregate_func_1201(uParam0);
			if (uParam0->f_3 == 6)
			{
				aggregate_func_8078(uParam0, 172);
			}
			return false;
		}
	}
	return true;
}

bool func_1177(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	bool bVar5;
	bool bVar6;

	if (!aggregate_func_4275(uParam0))
	{
		GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
		bVar0 = true;
		Var1 = { aggregate_func_6000(&(uParam0->f_167.f_4)) };
		bVar5 = -1;
		bVar6 = joaat("root");
		bVar5 = Var1.f_2;
		bVar6 = Var1.f_3;
		bVar0 = false;
		aggregate_func_1223(uParam0, aggregate_func_3316(&(uParam0->f_167.f_1778)));
		if (func_1022(uParam0, bVar5, bVar6, 1))
		{
			aggregate_func_8078(uParam0, 173);
			aggregate_func_4358(uParam0, 317796);
			aggregate_func_4358(uParam0, 317863);
			aggregate_func_4358(uParam0, 318036);
			if (bVar0)
			{
				if (!aggregate_func_6051(uParam0, Var1.f_2, Var1.f_3, -1, 1, 1))
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if ((aggregate_func_4275(uParam0) && !aggregate_func_4275(uParam0)) && !GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		if (aggregate_func_951(uParam0))
		{
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
			aggregate_func_433(&(uParam0->f_167));
		}
	}
	if (aggregate_func_4275(uParam0) && aggregate_func_4275(uParam0))
	{
		if (aggregate_func_105(uParam0))
		{
			aggregate_func_2562(uParam0);
		}
		else
		{
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
			GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
			aggregate_func_1201(uParam0);
			return false;
		}
	}
	return true;
}

bool func_1695(var uParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = aggregate_func_5544(bParam1, 0);
	return aggregate_func_5862(uParam0, bParam1, bVar0);
}

void func_2696(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar16;
	struct<9> Var20;
	bool bVar30;
	int iVar31;
	var uVar32;
	bool bVar35;

	uVar5 = 1;
	Var20 = -1;
	Var20.f_1 = -1;
	Var20.f_2 = -1;
	Var20.f_3 = -1;
	Var20.f_4 = -1;
	Var20.f_5 = -1;
	Var20.f_6 = -1;
	Var20.f_7 = -1;
	Var20.f_8 = -1;
	Var20.f_3 = aggregate_func_2827(bParam1);
	iVar0 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var20, &iVar1, 1);
	if (iVar1 > 1)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar0, iVar2, &bVar3))
			{
				if ((bVar3 != bParam1 && !aggregate_func_2852(bVar3, 1844906744)) && WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3))
				{
					iVar7 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ID(bVar3);
					if (iVar7 != 0)
					{
						iVar8 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iVar7, &uVar5);
						iVar4 = 0;
						while (iVar4 < iVar8)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iVar7, &uVar5, iVar4, &bVar16))
							{
								if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bVar16, &vVar9))
								{
									if (vVar9.z == -1013984273 || vVar9.z == 658570475)
									{
										if (!aggregate_func_2852(vVar9.x, 1844906744) && WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), vVar9.x))
										{
											WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), vVar9.x);
										}
									}
								}
							}
							iVar4++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar0);
	WEAPON::_0x74C9090FDD1BB48E(iParam0, bParam1, iParam2, 0);
	iVar31 = aggregate_func_2827(bParam1);
	bVar35 = aggregate_func_3302(bParam1);
	bVar30 = false;
	while (bVar30 < bVar35)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar31, bVar30, &uVar32))
		{
			Var20.f_3 = -1;
			Var20 = uVar32;
			iVar0 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var20, &iVar1, 1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					if (ITEMDATABASE::_0x8750F69A720C2E41(iVar0, iVar2, &bVar3))
					{
						if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3))
						{
							WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3);
						}
					}
					iVar2++;
				}
			}
			ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar0);
		}
		bVar30++;
	}
	iVar7 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ID(bParam1);
	if (iVar7 != 0)
	{
		iVar8 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iVar7, &uVar5);
		iVar4 = 0;
		while (iVar4 < iVar8)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iVar7, &uVar5, iVar4, &bVar16))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bVar16, &vVar9))
				{
					if (vVar9.z == -1013984273 || vVar9.z == 658570475)
					{
						if (!aggregate_func_2852(vVar9.x, 1844906744) && !WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), vVar9.x))
						{
							WEAPON::_0x74C9090FDD1BB48E(iParam0, vVar9.x, iParam2, 0);
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (aggregate_func_2852(bParam1, -1644819871))
	{
		Var20.f_3 = -1;
		Var20.f_8 = 1851054657;
		Var20.f_1 = -1;
		iVar0 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var20, &iVar1, 1);
		if (iVar1 > 1)
		{
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				if (ITEMDATABASE::_0x8750F69A720C2E41(iVar0, iVar2, &bVar3))
				{
					if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3);
					}
				}
				iVar2++;
			}
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar0);
	}
}

