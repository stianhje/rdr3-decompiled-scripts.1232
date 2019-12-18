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
	int iLocal_25 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == aggregate_func_13

void func_39(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 61:
			iLocal_25 = 0;
			break;
		case 62:
			iLocal_25 = 1;
			break;
		case 89:
			iLocal_25 = 2;
			break;
	}
	MISC::SET_BIT(Global_1268116, iLocal_25);
}

void func_41(var uParam0)
{
	if (aggregate_func_4251() != -1)
	{
		aggregate_func_8077(uParam0, 1);
		aggregate_func_7000(uParam0, 1, 60942);
		aggregate_func_7686(uParam0, 1, 61136);
	}
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
			Jump @2480; //curOff = 1494
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
			Jump @2480; //curOff = 1746
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
			Jump @2480; //curOff = 1834
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
			Jump @2480; //curOff = 1902
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
			Jump @2480; //curOff = 1990
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
			Jump @2480; //curOff = 2147
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
			Jump @2480; //curOff = 2242
			switch (uParam0->f_1)
			{
				case 26:
					return "0216_U_F_M_LagMother_01";
				default:
					break;
			}
			return "0216_U_F_M_LagMother_01";
			Jump @2480; //curOff = 2275
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
			Jump @2480; //curOff = 2350
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
			Jump @2480; //curOff = 2425
			if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[11 /*8*/]))
			{
				aggregate_func_6220();
			}
			return aggregate_func_1966(*(Global_1957543->f_319[11 /*8*/]));
			Jump @2480; //curOff = 2470
			return "SHOPKEEPER_TEST_PED";
			return "SHOPKEEPER_TEST_PED";
		}

void func_136(var uParam0)
{
	MISC::CLEAR_BIT(Global_1268116, iLocal_25);
	aggregate_func_4285(uParam0);
	Global_1268116->f_46 = -1;
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
		if (!func_722(&(uParam0->f_4), iParam1, iParam2, aggregate_func_6464(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_723(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate_func_4242(&(uParam0->f_4), 135710);
	aggregate_func_4242(&(uParam0->f_4), 135747);
	aggregate_func_4932(&(uParam0->f_4), 135775);
	aggregate_func_4932(&(uParam0->f_4), 136310);
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

int func_333(var uParam0)
{
	int iVar0;

	if (Global_1268116->f_15)
	{
		return 0;
	}
	if (Global_1268116->f_2)
	{
		return 0;
	}
	if ((Global_1268203->f_3[iLocal_25 /*8*/])->f_4 == 3)
	{
		return 0;
	}
	if (aggregate_func_4258())
	{
		return 0;
	}
	if (aggregate_func_4255(aggregate_func_4320()))
	{
		return 0;
	}
	if (aggregate_func_4521(aggregate_func_4259(0)))
	{
		iVar0 = aggregate_func_9015(aggregate_func_4259(0));
	}
	else
	{
		return 1;
	}
	switch (iVar0)
	{
		case 2:
		case 6:
		case 7:
			return 0;
		default:
			break;
	}
	return 1;
}

int func_335(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate_func_2045(MISC::_CREATE_VAR_STRING(10, "SHOP_THEATER_MP_BUY_TICKET", "MONEY_ONE_DOLLAR"), iParam1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	return iVar0;
}

bool func_381(var uParam0, var uParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			HUD::_0xF66090013DE648D5(func_775());
			if (!HUD::_0xD0976CC34002DB57(func_775()))
			{
				return false;
			}
			if (HUD::_0x3CF96E16265B7DC8(func_775()))
			{
				return false;
			}
			aggregate_func_4242(uParam0, 7);
			break;
		case 7:
			func_776();
			aggregate_func_4242(uParam0, 10);
			return false;
		case 10:
			return true;
	}
	return false;
}

void func_692(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate_func_4577() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1023(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate_func_4358(uParam0, 190353);
			aggregate_func_4358(uParam0, 191273);
			aggregate_func_4358(uParam0, 191873);
			aggregate_func_4358(uParam0, 192167);
			aggregate_func_4358(uParam0, 192370);
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

bool func_722(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
	uParam0->f_1279 = 214988;
	uParam0->f_1280 = 214997;
	uParam0->f_1281 = 215006;
	uParam0->f_1282 = 215006;
	uParam0->f_222 = iParam5;
	aggregate_func_4252(uParam0, 0);
	return true;
}

bool func_723(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	uParam0->f_1279 = 214988;
	uParam0->f_1280 = 214997;
	uParam0->f_1281 = 215006;
	uParam0->f_1282 = 215006;
	uParam0->f_222 = iParam4;
	aggregate_func_4252(uParam0, 0);
	return true;
}

char* func_775()
{
	return "SHOP";
}

void func_776()
{
	Global_1268116->f_15 = 1;
	Global_1268116->f_2 = 1;
	Global_1268116->f_1 = iLocal_25;
}

bool func_1023(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
	uParam0->f_2094.f_149 = 248547;
	uParam0->f_2094.f_150 = 249431;
	uParam0->f_2094.f_151 = 250227;
	uParam0->f_2094.f_152 = 250346;
	uParam0->f_2094.f_46 = 1;
	return true;
}

bool func_2051(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<4> Var1;
	bool bVar5;
	struct<4> Var6;
	bool bVar10;
	var uVar11;
	int iVar12;
	struct<4> Var13;
	struct<4> Var17;
	struct<9> Var21;
	int iVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;
	struct<4> Var40;
	struct<4> Var44;
	int iVar48;
	int iVar49;
	bool bVar50;
	int iVar51;
	struct<4> Var52;
	struct<4> Var56;
	struct<4> Var60;
	int iVar64;
	bool bVar65;
	struct<4> Var66;
	struct<4> Var71;
	bool bVar75;
	struct<14> Var76;
	int iVar90;
	bool bVar91;
	struct<11> Var92;
	bool bVar106;
	bool bVar107;
	var uVar108;
	int iVar109;
	struct<4> Var110;
	struct<4> Var114;
	struct<9> Var118;
	int iVar128;
	int iVar129;
	int iVar130;
	bool bVar131;
	bool bVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	bool bVar136;
	bool bVar137;
	struct<11> Var138;
	struct<14> Var152;

	bVar0 = false;
	if (bParam4 == -1)
	{
		bParam4 = aggregate_func_6503(uParam0);
	}
	if (bParam2 == -1502467280 || bParam2 == 777890122)
	{
		if (aggregate_func_5784(bParam1))
		{
			return !aggregate_func_5805(uParam0);
		}
		if (aggregate_func_2852(bParam1, 1844906744))
		{
			bVar0 = true;
			Var1.f_2 = -1;
			Var1.f_3 = -1;
			if (aggregate_func_3236(aggregate_func_5306(&(uParam0->f_2094)), bParam4, &Var6))
			{
				bVar5 = false;
				while (bVar5 < Var6.f_3)
				{
					Var1 = { aggregate_func_3237(bVar5, Var6, &(uParam0->f_2094)) };
					if (Var1 != bParam1 && aggregate_func_2823(Var1, 0))
					{
						if (func_2051(uParam0, Var1, aggregate_func_6134(uParam0, Var1), -1, -1))
						{
							bVar0 = false;
						}
						else
						{
							bVar5++;
						}
						Jump @584; //curOff = 205
						if (aggregate_func_2852(bParam1, 188214926))
						{
							iVar12 = aggregate_func_5692(uParam0);
							Var13.f_2 = -1;
							Var13.f_3 = -1;
							Var21 = -1;
							Var21.f_1 = -1;
							Var21.f_2 = -1;
							Var21.f_3 = -1;
							Var21.f_4 = -1;
							Var21.f_5 = -1;
							Var21.f_6 = -1;
							Var21.f_7 = -1;
							Var21.f_8 = -1;
							if (aggregate_func_3236(aggregate_func_5306(&(uParam0->f_2094)), bParam4, &Var17))
							{
								bVar10 = false;
								while (bVar10 < Var17.f_3)
								{
									Var13 = { aggregate_func_3237(bVar10, Var17, &(uParam0->f_2094)) };
									if (Var13 == bParam1 && aggregate_func_2823(Var13, 0))
									{
										Var21.f_8 = Var13.f_2;
										iVar32 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var21, &iVar31, 1);
										if (iVar32 == -1)
										{
										}
										else
										{
											iVar33 = 0;
											while (iVar33 < iVar31)
											{
												bVar34 = aggregate_func_2076(iVar33, iVar32);
												if (((aggregate_func_2823(bVar34, 0) && bVar34 != bParam1) && aggregate_func_5724(&(uParam0->f_2094), bVar34, &uVar11)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(bVar34, Var21.f_8) == -2089472884)
												{
													uParam0->f_2094.f_73 = uVar11;
													bVar35 = aggregate_func_6134(uParam0, bVar34);
													if (func_2051(uParam0, bVar34, bVar35, -1, -1))
													{
														bVar0 = true;
													}
													else
													{
														iVar33++;
													}
													uParam0->f_2094.f_73 = iVar12;
													ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar32);
													Jump @556; //curOff = 544
													bVar10++;
													Jump @584; //curOff = 556
													bVar36 = aggregate_func_4275(uParam0);
													bVar0 = aggregate_func_5909(bVar36, bParam1, aggregate_func_4275(uParam0), 0);
													Jump @2281; //curOff = 584
													if ((((bParam2 == -853534656 || bParam2 == 761079318) || bParam2 == 1942587409) || bParam2 == -2056428614) || bParam2 == 2077448405)
													{
														if ((aggregate_func_2827(bParam1) == -999503751 || aggregate_func_2827(bParam1) == -1044137471) || aggregate_func_2827(bParam1) == 884451223)
														{
															if (aggregate_func_1586(bParam1))
															{
																return aggregate_func_5342(bParam1, &(Global_1951131->f_1657), -1, 0);
															}
															else
															{
																return aggregate_func_5667() == bParam1;
															}
														}
														if (aggregate_func_5024(bParam1, 0))
														{
															if (bParam1 == -992705550)
															{
																bVar37 = aggregate_func_5189(1742327865);
																if (!aggregate_func_5506(bVar37))
																{
																	return true;
																}
															}
															else if (bParam1 == -383172193)
															{
																bVar38 = aggregate_func_5189(1742327865);
																if (aggregate_func_5506(bVar38))
																{
																	return true;
																}
															}
															else if (bParam1 == -1870922521)
															{
																bVar39 = aggregate_func_5189(1108822547);
																if (!aggregate_func_5502(bVar39))
																{
																	return true;
																}
															}
															bParam1 = aggregate_func_6045(bParam1);
														}
														return aggregate_func_5636(bParam1);
													}
													else if ((bParam2 == -760956867 || bParam2 == -1395073769) || bParam2 == 38807286)
													{
														if (aggregate_func_5024(bParam1, 0))
														{
															bParam1 = aggregate_func_6045(bParam1);
														}
														return aggregate_func_5636(bParam1);
													}
													else if (bParam2 == 1425890997)
													{
														return aggregate_func_5799(bParam1);
													}
													else if (bParam2 == 1394581936)
													{
														if (aggregate_func_4923(bParam1))
														{
															Var40 = { aggregate_func_4615(uParam0) };
															if (aggregate_func_5903(bParam1))
															{
																return aggregate_func_4299(Var40, -2119169513, 0, -1) == bParam1;
															}
															if (aggregate_func_5902(bParam1))
															{
																return aggregate_func_4299(Var40, 1415981582, 0, -1) == bParam1;
															}
															if (aggregate_func_5904(bParam1))
															{
																return aggregate_func_4299(Var40, -653439684, 0, -1) == bParam1;
															}
														}
														else
														{
															Var44 = { aggregate_func_4615(uParam0) };
															iVar48 = aggregate_func_3134(bParam1);
															iVar49 = 0;
															while (iVar49 < iVar48)
															{
																bVar50 = aggregate_func_3283(bParam1, iVar49);
																if (bVar50 != 0)
																{
																	if (aggregate_func_4299(Var44, bVar50, 0, -1) == bParam1)
																	{
																		return true;
																	}
																}
																iVar49++;
															}
															return false;
														}
													}
													else if (bParam2 == -584027224 || bParam2 == -87783305)
													{
														iVar51 = aggregate_func_2827(bParam1);
														if (iVar51 == 2065516088)
														{
															Var52 = { aggregate_func_2828(1384535894, aggregate_func_1967(0), 1784584921, 1) };
															if (bParam1 == aggregate_func_4299(Var52, aggregate_func_5910(2065516088), 1, -1))
															{
																return true;
															}
														}
														else if (iVar51 == -186198417)
														{
															Var56 = { aggregate_func_2828(1384535894, aggregate_func_1967(0), 1784584921, 1) };
															if (bParam1 == aggregate_func_4299(Var56, aggregate_func_5910(-186198417), 1, -1))
															{
																return true;
															}
														}
														else
														{
															Var60 = { aggregate_func_2828(-1838434463 /* GXTEntry: "Camp" */, aggregate_func_1967(0), 1084182731, 1) };
															iVar64 = aggregate_func_2827(bParam1);
															switch (iVar64)
															{
																case -1941499753:
																case -1015460895:
																case -768291983:
																case 1193257440:
																case 1415299667:
																case 1795979421:
																	if (bParam1 == aggregate_func_4299(Var60, aggregate_func_5910(iVar64), 1, -1))
																	{
																		return true;
																	}
																	break;
																case 526314052:
																case 1206030994:
																	if (aggregate_func_5544(bParam1, 0))
																	{
																		return true;
																	}
																	break;
															}
														}
													}
													else if (bParam2 == 1702073444)
													{
														if (aggregate_func_5722(bParam1))
														{
															if (bParam3 == -1)
															{
																return false;
															}
															bVar65 = aggregate_func_4275(uParam0);
															if (!aggregate_func_2823(bVar65, 0))
															{
																return false;
															}
															Var66 = { aggregate_func_304(bVar65, 0, 0) };
															Var71 = { aggregate_func_2828(bVar65, Var66, aggregate_func_4275(uParam0), 0) };
															bVar75 = bParam3;
															if (bVar75 == 0)
															{
																return false;
															}
															Var76 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, 0, bVar75, 0) };
															if (aggregate_func_2836(&Var76, &iVar90, &bVar91, 0))
															{
																Var92.f_9 = -1591664384;
																bVar106 = false;
																while (bVar106 < bVar91)
																{
																	if (aggregate_func_2840(&Var92, bVar106, iVar90, bVar91))
																	{
																		if (aggregate_func_4632(&(Var92.f_5), &Var71))
																		{
																			if (Var92.f_10)
																			{
																				aggregate_func_2837(iVar90);
																				return true;
																			}
																		}
																	}
																	bVar106++;
																}
																aggregate_func_2837(iVar90);
															}
															return false;
														}
														iVar109 = aggregate_func_5692(uParam0);
														Var110.f_2 = -1;
														Var110.f_3 = -1;
														Var118 = -1;
														Var118.f_1 = -1;
														Var118.f_2 = -1;
														Var118.f_3 = -1;
														Var118.f_4 = -1;
														Var118.f_5 = -1;
														Var118.f_6 = -1;
														Var118.f_7 = -1;
														Var118.f_8 = -1;
														if (((bParam1 == 902806957 || bParam1 == 726009467) || bParam1 == 841778380) || bParam1 == 493688651)
														{
															bVar0 = false;
														}
														else if (aggregate_func_3236(aggregate_func_5306(&(uParam0->f_2094)), bParam4, &Var114))
														{
															bVar107 = false;
															while (bVar107 < Var114.f_3)
															{
																Var110 = { aggregate_func_3237(bVar107, Var114, &(uParam0->f_2094)) };
																if (Var110 == bParam1 && aggregate_func_2823(Var110, 0))
																{
																	Var118.f_8 = Var110.f_2;
																	iVar129 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var118, &iVar128, 1);
																	if (iVar129 == -1)
																	{
																	}
																	else
																	{
																		iVar130 = 0;
																		while (iVar130 < iVar128)
																		{
																			bVar131 = aggregate_func_2076(iVar130, iVar129);
																			if (((aggregate_func_2823(bVar131, 0) && bVar131 != bParam1) && aggregate_func_5724(&(uParam0->f_2094), bVar131, &uVar108)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(bVar131, Var118.f_8) == -2089472884)
																			{
																				uParam0->f_2094.f_73 = uVar108;
																				bVar132 = aggregate_func_6134(uParam0, bVar131);
																				if (func_2051(uParam0, bVar131, bVar132, -1, -1))
																				{
																					bVar0 = true;
																				}
																				else
																				{
																					iVar130++;
																				}
																				uParam0->f_2094.f_73 = iVar109;
																				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar129);
																				Jump @2104; //curOff = 2092
																				bVar107++;
																				Jump @2281; //curOff = 2104
																				if (bParam2 == -467661559)
																				{
																					iVar133 = aggregate_func_5893(bParam1);
																					iVar134 = iVar133;
																					if (iVar134 >= 0 && iVar134 < 4)
																					{
																						return aggregate_func_5911(bParam1, &((Global_17173.f_54.f_2480[iVar134 /*7*/])->f_2));
																					}
																					return false;
																				}
																				else
																				{
																					Var138.f_9 = -1591664384;
																					Var152 = { aggregate_func_4303(bParam1, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
																					if (aggregate_func_2836(&Var152, &iVar135, &bVar136, 0))
																					{
																						bVar137 = false;
																						while (bVar137 < bVar136)
																						{
																							if (aggregate_func_2840(&Var138, bVar137, iVar135, bVar136))
																							{
																								bVar0 = Var138.f_10;
																							}
																							else
																							{
																								bVar137++;
																							}
																						}
																					}
																					aggregate_func_2837(iVar135);
																				}
																				return bVar0;
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
				}
			}
		}
	}
}

int func_3191(bool bParam0)
{
	switch (bParam0)
	{
		case 1908704263: /* GXTEntry: "Good Skinned Alligator Carcass" */
			return 915880986 /* GXTEntry: "Good Alligator Carcass" */;
		case -2112217546: /* GXTEntry: "Perfect Skinned Alligator Carcass" */
			return -1424697962 /* GXTEntry: "Perfect Alligator Carcass" */;
		case -1745255175: /* GXTEntry: "Poor Skinned Alligator Carcass" */
			return -1643384846 /* GXTEntry: "Poor Alligator Carcass" */;
		case -237368063: /* GXTEntry: "Good Skinned Armadillo Carcass" */
			return -847420802 /* GXTEntry: "Good Armadillo Carcass" */;
		case 1598967299: /* GXTEntry: "Perfect Skinned Armadillo Carcass" */
			return -662726703 /* GXTEntry: "Perfect Armadillo Carcass" */;
		case -1809464109: /* GXTEntry: "Poor Skinned Armadillo Carcass" */
			return 1760886130 /* GXTEntry: "Poor Armadillo Carcass" */;
		case -165201917: /* GXTEntry: "Good Skinned Badger Carcass" */
			return -1243653490 /* GXTEntry: "Good Badger Carcass" */;
		case 815147738: /* GXTEntry: "Perfect Skinned Badger Carcass" */
			return 1988467099 /* GXTEntry: "Perfect Badger Carcass" */;
		case 1287583539: /* GXTEntry: "Poor Skinned Badger Carcass" */
			return -674590015 /* GXTEntry: "Poor Badger Carcass" */;
		case -2126985311: /* GXTEntry: "Good Skinned Beaver Carcass" */
			return -1480423460 /* GXTEntry: "Good Beaver Carcass" */;
		case -1268352491: /* GXTEntry: "Perfect Skinned Beaver Carcass" */
			return 924882045 /* GXTEntry: "Perfect Beaver Carcass" */;
		case -1940225526: /* GXTEntry: "Poor Skinned Beaver Carcass" */
			return 1415608202 /* GXTEntry: "Poor Beaver Carcass" */;
		case -212307068: /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */
			return -593311590 /* GXTEntry: "Good Bighorn Sheep Carcass" */;
		case 355421032: /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */
			return 765085831 /* GXTEntry: "Perfect Bighorn Sheep Carcass" */;
		case 1657729714: /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */
			return 2094730711 /* GXTEntry: "Poor Bighorn Sheep Carcass" */;
		case 1350692346: /* GXTEntry: "Good Skinned Buck Carcass" */
			return -1310590179 /* GXTEntry: "Good Buck Carcass" */;
		case -257850294: /* GXTEntry: "Perfect Skinned Buck Carcass" */
			return 992366796 /* GXTEntry: "Perfect Buck Carcass" */;
		case -918541014: /* GXTEntry: "Poor Skinned Buck Carcass" */
			return -244657613 /* GXTEntry: "Poor Buck Carcass" */;
		case -947573795: /* GXTEntry: "Good Plucked California Condor Carcass" */
			return -2026210939 /* GXTEntry: "Good California Condor Carcass" */;
		case -2068302756: /* GXTEntry: "Perfect Plucked California Condor Carcass" */
			return -1252472243 /* GXTEntry: "Perfect California Condor Carcass" */;
		case 1650829985: /* GXTEntry: "Poor Plucked California Condor Carcass" */
			return -980016656 /* GXTEntry: "Poor California Condor Carcass" */;
		case -1808044035: /* GXTEntry: "Good Skinned Chicken Carcass" */
			return -758005668 /* GXTEntry: "Good Chicken Carcass" */;
		case -1952647655: /* GXTEntry: "Perfect Skinned Chicken Carcass" */
			return -2139551030 /* GXTEntry: "Perfect Chicken Carcass" */;
		case 1293221440: /* GXTEntry: "Poor Skinned Chicken Carcass" */
			return 1607144310 /* GXTEntry: "Poor Chicken Carcass" */;
		case -642946194: /* GXTEntry: "Good Plucked Cormorant Carcass" */
			return 80093385 /* GXTEntry: "Good Cormorant Carcass" */;
		case 819214075: /* GXTEntry: "Perfect Plucked Cormorant Carcass" */
			return -867655342 /* GXTEntry: "Perfect Cormorant Carcass" */;
		case -858652427: /* GXTEntry: "Poor Plucked Cormorant Carcass" */
			return 991092621 /* GXTEntry: "Poor Cormorant Carcass" */;
		case 395625948: /* GXTEntry: "Good Skinned Cougar Carcass" */
			return 871746664 /* GXTEntry: "Good Cougar Carcass" */;
		case -2063800922: /* GXTEntry: "Perfect Skinned Cougar Carcass" */
			return 1626949878 /* GXTEntry: "Perfect Cougar Carcass" */;
		case -2117103642: /* GXTEntry: "Poor Skinned Cougar Carcass" */
			return -1722483116 /* GXTEntry: "Poor Cougar Carcass" */;
		case -1583694057: /* GXTEntry: "Good Skinned Coyote Carcass" */
			return -1739474417 /* GXTEntry: "Good Coyote Carcass" */;
		case -1550918713: /* GXTEntry: "Perfect Skinned Coyote Carcass" */
			return -161524199 /* GXTEntry: "Perfect Coyote Carcass" */;
		case 836539658: /* GXTEntry: "Poor Skinned Coyote Carcass" */
			return 156979555 /* GXTEntry: "Poor Coyote Carcass" */;
		case 773062352: /* GXTEntry: "Good Plucked Crane Carcass" */
			return 322141256 /* GXTEntry: "Good Crane Carcass" */;
		case 1306100270: /* GXTEntry: "Perfect Plucked Crane Carcass" */
			return 1310120320 /* GXTEntry: "Perfect Crane Carcass" */;
		case -1063194668: /* GXTEntry: "Poor Plucked Crane Carcass" */
			return -1228376431 /* GXTEntry: "Poor Crane Carcass" */;
		case 337839068: /* GXTEntry: "Good Skinned Deer Carcass" */
			return 472142656 /* GXTEntry: "Good Deer Carcass" */;
		case -1426520714: /* GXTEntry: "Perfect Skinned Deer Carcass" */
			return -1837840093 /* GXTEntry: "Perfect Deer Carcass" */;
		case -1456429189: /* GXTEntry: "Poor Skinned Deer Carcass" */
			return 58634176 /* GXTEntry: "Poor Deer Carcass" */;
		case -2032809253: /* GXTEntry: "Good Skinned Duck Carcass" */
			return 1023080408 /* GXTEntry: "Good Duck Carcass" */;
		case 781728005: /* GXTEntry: "Perfect Skinned Duck Carcass" */
			return 1001171791 /* GXTEntry: "Perfect Duck Carcass" */;
		case 1202409779: /* GXTEntry: "Poor Skinned Duck Carcass" */
			return 1210345318 /* GXTEntry: "Poor Duck Carcass" */;
		case 1520877300: /* GXTEntry: "Good Plucked Eagle Carcass" */
			return 399553313 /* GXTEntry: "Good Eagle Carcass" */;
		case -1736624361: /* GXTEntry: "Perfect Plucked Eagle Carcass" */
			return -1422869557 /* GXTEntry: "Perfect Eagle Carcass" */;
		case 719465997: /* GXTEntry: "Poor Plucked Eagle Carcass" */
			return -1378812236 /* GXTEntry: "Poor Eagle Carcass" */;
		case -361486526: /* GXTEntry: "Good Skinned Egret Carcass" */
			return 1011003885 /* GXTEntry: "Good Egret Carcass" */;
		case -765274711: /* GXTEntry: "Perfect Skinned Egret Carcass" */
			return 651035143 /* GXTEntry: "Perfect Egret Carcass" */;
		case -887205673: /* GXTEntry: "Poor Skinned Egret Carcass" */
			return 2013022756 /* GXTEntry: "Poor Egret Carcass" */;
		case -784020903: /* GXTEntry: "Good Skinned Fox Carcass" */
			return -1186289527 /* GXTEntry: "Good Fox Carcass" */;
		case -886117938: /* GXTEntry: "Perfect Skinned Fox Carcass" */
			return 877935135 /* GXTEntry: "Perfect Fox Carcass" */;
		case -1416771220: /* GXTEntry: "Poor Skinned Fox Carcass" */
			return -39646495 /* GXTEntry: "Poor Fox Carcass" */;
		case 1648676911: /* GXTEntry: "Good Skinned Gila Monster Carcass" */
			return 1582593525 /* GXTEntry: "Good Gila Monster Carcass" */;
		case 2103833563: /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */
			return -246542229 /* GXTEntry: "Perfect Gila Monster Carcass" */;
		case -831636369: /* GXTEntry: "Poor Skinned Gila Monster Carcass" */
			return -529454751 /* GXTEntry: "Poor Gila Monster Carcass" */;
		case -852290935: /* GXTEntry: "Good Skinned Goat Carcass" */
			return -46978629 /* GXTEntry: "Good Goat Carcass" */;
		case -1870415962: /* GXTEntry: "Perfect Skinned Goat Carcass" */
			return -1347000030 /* GXTEntry: "Perfect Goat Carcass" */;
		case -788684109: /* GXTEntry: "Poor Skinned Goat Carcass" */
			return -505583391 /* GXTEntry: "Poor Goat Carcass" */;
		case 1416435145: /* GXTEntry: "Good Skinned Goose Carcass" */
			return 1645887374 /* GXTEntry: "Good Goose Carcass" */;
		case -1483088274: /* GXTEntry: "Perfect Skinned Goose Carcass" */
			return -1559227925 /* GXTEntry: "Perfect Goose Carcass" */;
		case -791867098: /* GXTEntry: "Poor Skinned Goose Carcass" */
			return 1562528937 /* GXTEntry: "Poor Goose Carcass" */;
		case -1689552552: /* GXTEntry: "Good Plucked Hawk Carcass" */
			return -1471526136 /* GXTEntry: "Good Hawk Carcass" */;
		case -1850779170: /* GXTEntry: "Perfect Plucked Hawk Carcass" */
			return -1440794801 /* GXTEntry: "Perfect Hawk Carcass" */;
		case -121487803: /* GXTEntry: "Poor Plucked Hawk Carcass" */
			return 2144711797;
		case -1280499288: /* GXTEntry: "Good Skinned Heron Carcass" */
			return 718825539 /* GXTEntry: "Good Heron Carcass" */;
		case 820245961: /* GXTEntry: "Perfect Skinned Heron Carcass" */
			return 2105263879 /* GXTEntry: "Perfect Heron Carcass" */;
		case -889526774: /* GXTEntry: "Poor Skinned Heron Carcass" */
			return -905842006 /* GXTEntry: "Poor Heron Carcass" */;
		case -521025998: /* GXTEntry: "Good Skinned Iguana Carcass" */
			return 1191274340 /* GXTEntry: "Good Iguana Carcass" */;
		case 1583031244: /* GXTEntry: "Perfect Skinned Iguana Carcass" */
			return 1613453781 /* GXTEntry: "Perfect Iguana Carcass" */;
		case -2115599211: /* GXTEntry: "Poor Skinned Iguana Carcass" */
			return -1030182399 /* GXTEntry: "Poor Iguana Carcass" */;
		case -767176802: /* GXTEntry: "Good Skinned Loon Carcass" */
			return 987967309 /* GXTEntry: "Good Loon Carcass" */;
		case -750945821: /* GXTEntry: "Perfect Skinned Loon Carcass" */
			return -1060737769 /* GXTEntry: "Perfect Loon Carcass" */;
		case -2135749211: /* GXTEntry: "Poor Skinned Loon Carcass" */
			return 553310445 /* GXTEntry: "Poor Loon Carcass" */;
		case 2063108046: /* GXTEntry: "Good Skinned Muskrat Carcass" */
			return -1838865945 /* GXTEntry: "Good Muskrat Carcass" */;
		case 1299111759: /* GXTEntry: "Perfect Skinned Muskrat Carcass" */
			return 1418092959 /* GXTEntry: "Perfect Muskrat Carcass" */;
			return -1315697778 /* GXTEntry: "Poor Muskrat Carcass" */;
			return -1772126340 /* GXTEntry: "Good Opossum Carcass" */;
			return -935543049 /* GXTEntry: "Perfect Opossum Carcass" */;
			return 1772544356 /* GXTEntry: "Poor Opossum Carcass" */;
			return -266273535 /* GXTEntry: "Good Owl Carcass" */;
			return -1670544626 /* GXTEntry: "Perfect Owl Carcass" */;
			return 1290960696 /* GXTEntry: "Poor Owl Carcass" */;
			return 1913571052 /* GXTEntry: "Good Panther Carcass" */;
			return 1717601520 /* GXTEntry: "Perfect Panther Carcass" */;
			return 430397370 /* GXTEntry: "Poor Panther Carcass" */;
			return 16287711 /* GXTEntry: "Good Parrot Carcass" */;
			return -1356230367 /* GXTEntry: "Perfect Parrot Carcass" */;
			return 1417331079 /* GXTEntry: "Poor Parrot Carcass" */;
			return -884124246 /* GXTEntry: "Good Pelican Carcass" */;
			return 1884610748 /* GXTEntry: "Perfect Pelican Carcass" */;
			return 746558492 /* GXTEntry: "Poor Pelican Carcass" */;
			return -892811627 /* GXTEntry: "Good Pheasant Carcass" */;
			return -2040522845 /* GXTEntry: "Perfect Pheasant Carcass" */;
			return -1224510844 /* GXTEntry: "Poor Pheasant Carcass" */;
			return 1334837390 /* GXTEntry: "Good Pig Carcass" */;
			return 339620522 /* GXTEntry: "Perfect Pig Carcass" */;
			return 1770451033 /* GXTEntry: "Poor Pig Carcass" */;
			return 756657535 /* GXTEntry: "Good Prairie Chicken Carcass" */;
			return 862898895 /* GXTEntry: "Perfect Prairie Chicken Carcass" */;
			return 1997845858 /* GXTEntry: "Poor Prairie Chicken Carcass" */;
			return -1930144509 /* GXTEntry: "Good Pronghorn Carcass" */;
			return 1846915545 /* GXTEntry: "Perfect Pronghorn Carcass" */;
			return -1816929509 /* GXTEntry: "Poor Pronghorn Carcass" */;
			return 1197831625 /* GXTEntry: "Good Rabbit Carcass" */;
			return -1866642239 /* GXTEntry: "Perfect Rabbit Carcass" */;
			return -1508120809 /* GXTEntry: "Poor Rabbit Carcass" */;
			return -1007681885 /* GXTEntry: "Good Raccoon Carcass" */;
			return 434924608 /* GXTEntry: "Perfect Raccoon Carcass" */;
			return 1666393029 /* GXTEntry: "Poor Raccoon Carcass" */;
			return -1814593136 /* GXTEntry: "Good Ram Carcass" */;
			return -1188120304 /* GXTEntry: "Perfect Ram Carcass" */;
			return 1978734761 /* GXTEntry: "Poor Ram Carcass" */;
			return -824902132 /* GXTEntry: "Good Raven Carcass" */;
			return -1015531226 /* GXTEntry: "Perfect Raven Carcass" */;
			return -581619522 /* GXTEntry: "Poor Raven Carcass" */;
			return -861854914 /* GXTEntry: "Good Red-footed Booby Carcass" */;
			return -545447034 /* GXTEntry: "Perfect Red-footed Booby Carcass" */;
			return -1824684934 /* GXTEntry: "Poor Red-footed Booby Carcass" */;
			return 980653387 /* GXTEntry: "Good Rooster Carcass" */;
			return -1011598664 /* GXTEntry: "Perfect Rooster Carcass" */;
			return -177476569 /* GXTEntry: "Poor Rooster Carcass" */;
			return 416630124 /* GXTEntry: "Good Roseate Spoonbill Carcass" */;
			return 1925728375 /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */;
			return -1080457688 /* GXTEntry: "Poor Roseate Spoonbill Carcass" */;
			return 1742676369 /* GXTEntry: "Good Seagull Carcass" */;
			return -899751553 /* GXTEntry: "Perfect Seagull Carcass" */;
			return 431501574 /* GXTEntry: "Poor Seagull Carcass" */;
			return 2126795269;
			return 1489051752 /* GXTEntry: "Perfect Sheep Carcass" */;
			return -1705499323 /* GXTEntry: "Poor Sheep Carcass" */;
			return -2013445740 /* GXTEntry: "Good Skunk Carcass" */;
			return 102446365 /* GXTEntry: "Perfect Skunk Carcass" */;
			return -1927342740 /* GXTEntry: "Poor Skunk Carcass" */;
			return -410900360 /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */;
			return -1073614594 /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */;
			return 2060013792 /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */;
			return 581032175 /* GXTEntry: "Good Red Boa Carcass" */;
			return -581931638 /* GXTEntry: "Perfect Red Boa Carcass" */;
			return -1528265128 /* GXTEntry: "Poor Red Boa Carcass" */;
			return -142632645 /* GXTEntry: "Good Copperhead Carcass" */;
			return -2048519180 /* GXTEntry: "Perfect Copperhead Carcass" */;
			return 1442025993 /* GXTEntry: "Poor Copperhead Carcass" */;
			return 441195430 /* GXTEntry: "Good Fer-de-Lance Carcass" */;
			return 748665395 /* GXTEntry: "Perfect Fer-de-Lance Carcass" */;
			return 351048413 /* GXTEntry: "Poor Fer-de-Lance Carcass" */;
			return -914779013 /* GXTEntry: "Good Snake Carcass" */;
			return 1323485831 /* GXTEntry: "Perfect Snake Carcass" */;
			return -365111821 /* GXTEntry: "Poor Snake Carcass" */;
			return 101495387 /* GXTEntry: "Good Water Snake Carcass" */;
			return 157917500 /* GXTEntry: "Perfect Water Snake Carcass" */;
			return -936537044 /* GXTEntry: "Poor Water Snake Carcass" */;
			return -1610329427 /* GXTEntry: "Good Turkey Carcass" */;
			return -1836227998 /* GXTEntry: "Perfect Turkey Carcass" */;
			return 619479575 /* GXTEntry: "Poor Turkey Carcass" */;
			return -1444929945 /* GXTEntry: "Good Snapping Turtle Carcass" */;
			return -929322235 /* GXTEntry: "Perfect Snapping Turtle Carcass" */;
			return -548076717 /* GXTEntry: "Poor Snapping Turtle Carcass" */;
			return -281211381 /* GXTEntry: "Good Vulture Carcass" */;
			return 493457089 /* GXTEntry: "Perfect Vulture Carcass" */;
			return -479485786 /* GXTEntry: "Poor Vulture Carcass" */;
			return 27838955 /* GXTEntry: "Good Wolf Carcass" */;
			return 1641833719 /* GXTEntry: "Perfect Wolf Carcass" */;
			return -314933180 /* GXTEntry: "Poor Wolf Carcass" */;
			return 0;
		}

