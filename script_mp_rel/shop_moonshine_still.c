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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	struct<1778> Local_23 = { 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, -1, 6, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, -1, 0, 2, 0, 0, 5, -1, 0, 0, 5, -1, 0, -1, 0, 2, 0, 0, 5, -1, 0, 0, 5, -1, -1, -1, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, 2, -1, -1, 493038497, 493038497, -1, -1, -1, 0, 0, 0, 5, -1, 0, -1, 0, 0, -1, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, -1, 0, 2, -1, 1, 0, 0, 0, 0, 0, 25, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, -719620017, 992265328, -388507855, 1072537860, 0, 0, 0, 2, 0, 0, 1000, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == aggregate_func_14

void func_18(var uParam0)
{
	if (aggregate_func_7561(1) != 3)
	{
		aggregate_func_6225(uParam0, 9);
	}
}

bool func_37(var uParam0)
{
	HUD::_0xF66090013DE648D5("COOKAUD");
	if (!HUD::_0xD0976CC34002DB57("COOKAUD"))
	{
		return false;
	}
	HUD::_0xF66090013DE648D5("SHOP");
	if (!HUD::_0xD0976CC34002DB57("SHOP"))
	{
		return false;
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("mp_moonshiner"))
	{
		TXD::REQUEST_STREAMED_TEXTURE_DICT("mp_moonshiner", false);
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("moonshiner_requests"))
	{
		TXD::REQUEST_STREAMED_TEXTURE_DICT("moonshiner_requests", false);
	}
	return true;
}

void func_41(var uParam0)
{
	aggregate_func_6708(uParam0, 0, 61309, 61528, 61760, 61837);
	aggregate_func_4358(uParam0, 61977);
	aggregate_func_4358(uParam0, 62585);
	aggregate_func_4358(uParam0, 62886);
	aggregate_func_4358(uParam0, 63180);
	aggregate_func_4358(uParam0, 63308);
	aggregate_func_4358(uParam0, 63341);
	aggregate_func_4358(uParam0, 63682);
	aggregate_func_7000(uParam0, 0, 64227);
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
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate_func_3148(26);
					}
					return aggregate_func_1966(*(Global_1957543->f_319[10 /*8*/]));
					return "SHOPKEEPER_TEST_PED";
					Jump @2453; //curOff = 1178
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
					Jump @2453; //curOff = 1467
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
					Jump @2453; //curOff = 1719
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
					Jump @2453; //curOff = 1807
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
					Jump @2453; //curOff = 1875
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
					Jump @2453; //curOff = 1963
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
					Jump @2453; //curOff = 2120
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
					Jump @2453; //curOff = 2215
					switch (uParam0->f_1)
					{
						case 26:
							return "0216_U_F_M_LagMother_01";
						default:
							break;
					}
					return "0216_U_F_M_LagMother_01";
					Jump @2453; //curOff = 2248
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
					Jump @2453; //curOff = 2323
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
					Jump @2453; //curOff = 2398
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[11 /*8*/]))
					{
						aggregate_func_6220();
					}
					return aggregate_func_1966(*(Global_1957543->f_319[11 /*8*/]));
					Jump @2453; //curOff = 2443
					return "SHOPKEEPER_TEST_PED";
					return "SHOPKEEPER_TEST_PED";
				}

void func_122(var uParam0)
{
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("swatches_camp_mp");
	AUDIO::_0x9428447DED71FC7E("shop_scenes");
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_100.f_1211.f_6.f_20))
	{
		aggregate_func_2577(&(Local_23.f_1), Local_23.f_100.f_1211.f_6.f_20);
		aggregate_func_2577(&(Local_23.f_1), Global_35);
	}
	Local_23.f_1772 = 0;
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
	}
	aggregate_func_588(1, 0);
	ENTITY::_0x0939E773925C4719();
	if ((!Local_23.f_1775 && !Local_23.f_100.f_1211.f_6.f_12) && ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		ENTITY::SET_ENTITY_HEADING(Global_35, Local_23.f_1777);
		aggregate_func_2444(0f, -4f);
		Local_23.f_1775 = 1;
	}
	func_467(&(Local_23.f_100.f_1211));
	if (Local_23.f_100.f_1211.f_6.f_12)
	{
		Local_23.f_100.f_1211.f_6.f_12 = 0;
	}
	Local_23.f_1775 = 0;
	Local_23.f_100.f_1211.f_6.f_11 = 0;
	func_468();
	func_469(1);
	if (aggregate_func_7100(512))
	{
		aggregate_func_6502(512);
	}
	func_472(Local_23.f_100.f_1211.f_6.f_20);
	aggregate_func_2182(uParam0, 0);
}

void func_136(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_100.f_1211.f_122))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_23.f_100.f_1211.f_122, true);
	}
	func_336(uParam0);
}

bool func_317(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
		if (!func_750(&(uParam0->f_4), iParam1, iParam2, aggregate_func_6464(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_751(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate_func_4242(&(uParam0->f_4), 139742);
	aggregate_func_4242(&(uParam0->f_4), 139779);
	aggregate_func_4932(&(uParam0->f_4), 139807);
	aggregate_func_4932(&(uParam0->f_4), 140342);
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

bool func_333(var uParam0)
{
	struct<7> Var0;
	var uVar7;

	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, 0);
	aggregate_func_1925();
	if (!aggregate_func_7100(4))
	{
		aggregate_func_588(1, 1);
		return false;
	}
	if (!func_770(&(Local_23.f_100.f_1211)))
	{
		return false;
	}
	if (!func_771(&(Local_23.f_100.f_1211)))
	{
		return false;
	}
	if (!aggregate_func_7100(512))
	{
		aggregate_func_6502(512);
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("swatches_camp_mp", false);
	aggregate_func_7374(1);
	Local_23.f_1766 = aggregate_func_5163() == PLAYER::PLAYER_ID();
	Local_23.f_1777 = aggregate_func_3570(Local_23.f_100.f_1211.f_146, Global_36);
	if (aggregate_func_5131(&Global_1273882, 256))
	{
		func_777();
	}
	Var0 = { aggregate_func_2843(aggregate_func_5163()) };
	aggregate_func_655(&(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_52), &uVar7, &Var0);
	return func_780(uParam0, -395929392, joaat("use"), 0);
}

bool func_334(var uParam0)
{
	bool bVar0;
	bool bVar1;

	aggregate_func_1926(1);
	aggregate_func_1925();
	bVar0 = true;
	if (!aggregate_func_4281(4))
	{
		bVar1 = true;
		if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("swatches_camp_mp"))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			uParam0->f_6++;
			if (uParam0->f_6 > 500)
			{
				bVar0 = false;
				return true;
			}
		}
		else
		{
			aggregate_func_7374(4);
		}
	}
	if (!aggregate_func_4281(8) && bVar0)
	{
		aggregate_func_7374(8);
	}
	if (aggregate_func_4281(8))
	{
		if (!aggregate_func_4281(2048))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			func_469(0);
		}
	}
	if (!aggregate_func_4281(4) || !aggregate_func_4281(8))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_100.f_1211.f_6.f_20) && !ENTITY::IS_ENTITY_VISIBLE(Local_23.f_100.f_1211.f_6.f_20))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_23.f_100.f_1211.f_6.f_20, true);
	}
	return aggregate_func_951(uParam0);
}

bool func_335(var uParam0)
{
	aggregate_func_1925();
	if (!aggregate_func_4281(4096) && func_784())
	{
		aggregate_func_7374(4096);
	}
	if (!uParam0->f_2094.f_47)
	{
		return false;
	}
	func_785(&(Local_23.f_100.f_1211));
	aggregate_func_1926(0);
	return aggregate_func_105(uParam0);
}

void func_336(var uParam0)
{
	if (!Local_23.f_100.f_1211.f_6.f_12)
	{
		Global_1274951->f_44 = -1;
	}
	aggregate_func_2017(uParam0->f_1999);
	aggregate_func_1201(uParam0);
	aggregate_func_7577(4096);
}

int func_338(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!Local_23.f_100.f_1211.f_6.f_10)
	{
		Local_23.f_100.f_1211.f_6.f_10 = 1;
	}
	aggregate_func_4310(uParam1->f_1);
	switch (uParam1->f_9)
	{
		case -822124724:
		case 827714260:
		case 1269193435:
			aggregate_func_8360(262144);
			if (!aggregate_func_6297(uParam1->f_9, aggregate_func_5845(uParam1->f_9), 1))
			{
				func_792(7);
			}
			break;
		default:
			aggregate_func_9320(262144);
			break;
	}
	switch (*uParam1)
	{
		case -1499658354:
			if (aggregate_func_3278(uParam0))
			{
				aggregate_func_5900(uParam0);
			}
			if (uParam1->f_1 == -644511797)
			{
				if (aggregate_func_5131(&Global_1273882, 4))
				{
					iVar0 = func_796();
					aggregate_func_3192(uParam0, MISC::_CREATE_VAR_STRING(2, "MSSR_MENU_PRDCTN_TIME_LEFT", iVar0));
					func_798(uParam0, "SHOP_MS_MASH_ALT_DESC");
				}
				else if (aggregate_func_5131(&Global_1273882, 128))
				{
					aggregate_func_3247(uParam0, -634036615);
					func_798(uParam0, "SHOP_MS_MASH_COMP_DESC");
				}
				else
				{
					aggregate_func_3247(uParam0, -417587985);
					func_798(uParam0, "SHOP_MS_MASH_DESC");
				}
			}
			else if (uParam1->f_1 == -1191946537)
			{
				if (aggregate_func_5131(&Global_1273882, 4))
				{
					if (aggregate_func_5131(&Global_1273882, 32) || aggregate_func_5131(&Global_1273882, 64))
					{
						aggregate_func_3247(uParam0, -1337489558);
					}
					else
					{
						aggregate_func_3247(uParam0, -382933358);
					}
					func_798(uParam0, "SHOP_MS_FLAVOR_DESC");
				}
				else
				{
					aggregate_func_3247(uParam0, 1367521593);
					func_798(uParam0, "SHOP_MS_FLAVOR_DESC");
				}
			}
			else if (uParam1->f_1 == 603940701)
			{
				iVar1 = func_801(aggregate_func_7407(-408236271), 81);
				if (aggregate_func_5131(&Global_1273882, 128) && (iVar1 == 5 || iVar1 == 19))
				{
					func_792(20);
				}
				else if (aggregate_func_5131(&Global_1273882, 128) && iVar1 == 8)
				{
					func_792(21);
				}
				func_802(uParam0);
			}
			break;
		case -1928601151:
			if (!aggregate_func_3278(uParam0))
			{
				aggregate_func_5900(uParam0);
			}
			break;
		case -1086794738:
			aggregate_func_3193(uParam0, 1);
			break;
		case -1702260384:
			aggregate_func_28(uParam0, 1592437185, 0, func_804(uParam0, uParam1), 0, 0, -1, 0, -1);
			aggregate_func_3280(uParam0, aggregate_func_2970());
			break;
	}
	return 1;
}

int func_340(var uParam0, var uParam1)
{
	if (uParam1->f_10 != 1 && uParam1->f_10 != 2)
	{
		return 1;
	}
	if (!Local_23.f_100.f_1211.f_6.f_10)
	{
		Local_23.f_100.f_1211.f_6.f_10 = 1;
	}
	switch (uParam1->f_7)
	{
		case 827714260:
			aggregate_func_8360(1024);
			break;
		case -822124724:
			aggregate_func_8360(2048);
			break;
		case 1269193435:
			aggregate_func_8360(4096);
			break;
		case -1498871949:
		case -1283370018:
		case -818346432:
		case -624685730:
		case -610395813:
		case 348064119:
		case 447784640:
		case 1739830455:
		case 1958345007:
		case 2103594888:
			if (aggregate_func_5131(&Global_1273882, 16))
			{
				func_808(uParam0, uParam1);
			}
			break;
		default:
			break;
	}
	if (Local_23.f_1736 == 2 && *uParam1 == -1702260384)
	{
		HUD::_0x8BC7C1F929D07BF3(557238883);
		if (!aggregate_func_4260(&(Local_23.f_1737)))
		{
			aggregate_func_4293(&(Local_23.f_1737), 0);
		}
		Local_23.f_1767 = uParam1->f_2;
		Local_23.f_1736 = 3;
	}
	return 1;
}

void func_342(var uParam0, int iParam1, var uParam2)
{
	func_811();
	if (iParam1 == 603940701 || aggregate_func_5076() == 603940701)
	{
		func_802(uParam0);
	}
	else if (iParam1 == -1191946537)
	{
		aggregate_func_3192(uParam0, func_813());
	}
	switch (Local_23.f_1736)
	{
		case 0:
			if (!aggregate_func_5131(&Global_1273882, 256))
			{
				aggregate_func_6052(uParam0, 1136954474, 1, -1, 0, 0, 0, 0);
				Local_23.f_1736 = 1;
			}
			break;
		case 1:
			if (aggregate_func_5131(&Global_1273882, 128))
			{
				aggregate_func_6052(uParam0, 1136954474, 1, -1, 0, 0, 0, 0);
				Local_23.f_1736 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			if (aggregate_func_5131(&Global_1273882, 128))
			{
				aggregate_func_9367(uParam0);
				aggregate_func_4957(&(Local_23.f_1737));
				Local_23.f_100.f_1211.f_6.f_12 = 1;
				Local_23.f_1736 = 4;
			}
			break;
		case 4:
			if (aggregate_func_5131(&Global_1273882, 256))
			{
				Local_23.f_1736 = 0;
			}
			break;
	}
}

void func_344(var uParam0, struct<9> Param1, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)
{
	if (aggregate_func_2827(Param1.f_8) == -1940066807)
	{
		if (iParam15 == 2113164098 || iParam15 == 541670136)
		{
			func_818();
		}
		func_819(uParam0->f_2047.f_1, 0);
	}
	else if (iParam15 == 2113164098 || iParam15 == 541670136)
	{
		if (!func_820(&Param1))
		{
		}
	}
}

int func_348(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;

	if (iParam1 == -1191946537)
	{
		if (!func_821(bParam2))
		{
			return 0;
		}
		if (!func_822(bParam2))
		{
			return 0;
		}
	}
	if (iParam1 == 603940701)
	{
		if (iParam3 == -1702260384)
		{
			bVar0 = bParam2;
			if (bVar0 != 0)
			{
				if (!aggregate_func_2850(bVar0, 1))
				{
					return 0;
				}
			}
		}
	}
	if (iParam1 == -644511797)
	{
		switch (bParam2)
		{
			case 827714260:
				if (aggregate_func_3710(aggregate_func_5163(), 0, 1) < 1)
				{
					return 0;
				}
				break;
			case -822124724:
				if (aggregate_func_3710(aggregate_func_5163(), 0, 1) < 2)
				{
					return 0;
				}
				break;
			case 1269193435:
				if (aggregate_func_3710(aggregate_func_5163(), 0, 1) < 3)
				{
					return 0;
				}
				break;
		}
	}
	if (iParam1 == 1136954474)
	{
		if (!aggregate_func_5131(&Global_1273882, 256))
		{
			if (bParam2 == -644511797)
			{
				return 0;
			}
		}
		if (aggregate_func_9351())
		{
			if (!aggregate_func_5131(&Global_1273882, 16))
			{
				if (bParam2 == -1191946537)
				{
					return 0;
				}
			}
		}
		if (!aggregate_func_5131(&Global_1273882, 128) || func_801(aggregate_func_7407(-408236271), 81) != 0)
		{
			if (bParam2 == 603940701)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_350(var uParam0, var uParam1, int iParam2, var uParam3)
{
	bool bVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	uParam3->f_4 = -2084715009;
	if (iParam2 == -644511797)
	{
		switch (aggregate_func_5326())
		{
			case 827714260:
				uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_WEAK_GROUP_LABEL");
				uParam3->f_3 = 1701351406;
				break;
			case -822124724:
				uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_MEDIUM_GROUP_LABEL");
				uParam3->f_3 = 1306382942;
				break;
			case 1269193435:
				uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_STRONG_GROUP_LABEL");
				uParam3->f_3 = 274711637;
				break;
			default:
				uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_EMPTY_GROUP_LABEL");
				uParam3->f_3 = -88898306;
				break;
		}
		if (aggregate_func_5131(&Global_1273882, 4))
		{
			*uParam3 = (BUILTIN::TO_FLOAT(((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_15) / BUILTIN::TO_FLOAT(INVENTORY::_0xE80E50BEE276A54A(827714260, 1039159916)));
			uParam3->f_2 = 1;
		}
		else
		{
			*uParam3 = 0f;
			uParam3->f_2 = 0;
		}
		func_826(uParam0, uParam3->f_3, uParam3->f_4);
	}
	else if (iParam2 == -1191946537)
	{
		uParam3->f_3 = -1631788627;
		bVar0 = aggregate_func_7391();
		if (bVar0 == 0)
		{
			uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MSHINE_FLAVOR_UNFLAVORED");
		}
		else
		{
			uParam3->f_1 = MISC::_CREATE_VAR_STRING(0, aggregate_func_4462(bVar0));
			vVar1 = { aggregate_func_5498(bVar0) };
			uParam3->f_4 = vVar1.y;
			uParam3->f_3 = vVar1.x;
		}
		if (aggregate_func_4260(&(Global_1274951->f_5)) && Global_1274951->f_8 > 0f)
		{
			*uParam3 = (aggregate_func_3724(&(Global_1274951->f_5)) / Global_1274951->f_8);
			uParam3->f_2 = 1;
		}
		else
		{
			*uParam3 = 0f;
			uParam3->f_2 = 0;
		}
		func_831(uParam0, uParam3->f_3, uParam3->f_4);
	}
	else if (iParam2 == 603940701)
	{
		iVar4 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
			iVar4 = PLAYER::PLAYER_ID();
		}
		iVar5 = aggregate_func_4106(iVar4);
		iVar6 = 20;
		uParam3->f_1 = MISC::_CREATE_VAR_STRING(2, "MSHINE_BOTTLES_FILLED", iVar5, iVar6);
		uParam3->f_3 = 1349568299;
		*uParam3 = (BUILTIN::TO_FLOAT(iVar5) / BUILTIN::TO_FLOAT(iVar6));
		uParam3->f_2 = 0;
		func_833(uParam0, uParam3->f_3, uParam3->f_4);
	}
}

Vector3 func_361(int iParam0)
{
	if (!aggregate_func_4375(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 2947.055f, 1320.15f, 43.8203f;
		case 1:
			return 2939.063f, 1287.116f, 43.6529f;
		case 2:
			return 2932.97f, 1282.56f, 43.67f;
		case 117:
			return -5227.357f, -3470.067f, -20.49293f;
			return -5228.75f, -3468.28f, -21.57f;
			return -784.49f, -1321.95f, 42.88f;
			return -753.4219f, -1284.24f, 43.20049f;
			return -814.4116f, -1367.243f, 43.7509f;
			return -868.3356f, -1366.207f, 44.75311f;
			return -875.03f, -1327.09f, 42.97f;
			return -875.02f, -1326.71f, 42.97f;
			return -762.0716f, -1293.549f, 42.8355f;
			return -813.6f, -1373.8f, 44.2f;
			return 1417.288f, 273.5687f, 88.4881f;
			return 1521.91f, 441.15f, 89.68f;
			return 1523.63f, 442.65f, 89.68f;
			return 2161.5f, -618.5f, 43f;
			return -1092.88f, -575.69f, 81.41f;
			return -1094.35f, -577.48f, 81.41f;
			return 1294.084f, -1303.102f, 76.0418f;
			return 1297.423f, -1278.412f, 75.65752f;
			return 1319.43f, -1142.08f, 81.41f;
			return 1329.755f, -1294.218f, 76.0092f;
			return 1323.734f, -1321.775f, 77.8924f;
			return 1226.71f, -1295.08f, 75.9f;
			return 1230.34f, -1298.578f, 75.9027f;
			return 1209.053f, -193.1814f, 101.9785f;
			return 2644.188f, -1292.507f, 51.2496f;
			return 2657.466f, -1180.96f, 53.2785f;
			return 2819.495f, -1331.29f, 45.514f;
			return 2721.24f, -1231.66f, 49.37f;
			return 2859.51f, -1202.16f, 48.59f;
			return 2825.607f, -1318.207f, 45.7557f;
			return 2718f, -1287f, 49.6f;
			return 2508.212f, -1449.654f, 48.41523f;
			return 2748.811f, -1398.277f, 45.18309f;
			return 2747.824f, -1396.384f, 45.18309f;
			return 2555.09f, -1166.98f, 52.68f;
			return 2832.02f, -1225.563f, 46.6422f;
			return 2734.174f, -1119.755f, 50.10792f;
			return -1753.404f, -392.557f, 155.2576f;
			return -1790f, -388.27f, 159.33f;
			return -1818.99f, -370.94f, 162.3f;
			return -1819.88f, -561.8194f, 157.2323f;
			return -1763.78f, -385.1118f, 156.7401f;
			return -307.9643f, 773.6048f, 117.7031f;
			return -306.3f, 815.08f, 117.98f;
			return 0f, 0f, 0f;
			return -338.8647f, 767.4334f, 115.5628f;
			return -287.9538f, 804.0544f, 118.3859f;
			return -324f, 803.72f, 116.88f;
			return -281.82f, 778.97f, 118.5f;
			return -369.4457f, 786.6935f, 115.9904f;
			return -178.0316f, 628.0621f, 113.0896f;
			return -175.0377f, 631.7999f, 113.0896f;
			return -325.532f, 773.6285f, 117.5038f;
			return 3025.786f, 562.7253f, 43.7167f;
			return 2986.224f, 569.9468f, 43.62284f;
			return 2986.94f, 574.9f, 43.64f;
			return 2967.273f, 796.7416f, 52.5948f;
			return -1302.951f, 394.6608f, 94.3817f;
			return -1300.83f, 399.7599f, 94.38248f;
			return -1299.891f, 401.3615f, 94.38248f;
			return -5518.071f, -2906.217f, -2.7513f;
			return -5487.197f, -2939.038f, -1.3872f;
			return -5507.993f, -2964.844f, -1.6215f;
			return -5509.019f, -2947.435f, -2.8934f;
			return -5520.701f, -3044.427f, -1.40419f;
			return -3687.3f, -2623.39f, -14.44f;
			return -2842.211f, 137.3398f, 183.8268f;
			return -1005.934f, -540.8262f, 97.9502f;
			return 2076.835f, 1000.829f, 111.4973f;
			return -2251.034f, -1916.911f, 115.9488f;
			return -142.072f, -23.5242f, 95.0883f;
			return 675.3091f, -1251.233f, 43.0152f;
			return 1875.2f, -1859.182f, 41.8f;
			return 2366.084f, 1347.122f, 105.1305f;
			return -1402f, -2317f, 43.6f;
			return 0f, 0f, 0f;
		}

void func_420(var uParam0)
{
	HUD::_0xC9CAEAEEC1256E54(1163138879);
}

bool func_432(var uParam0)
{
	int iVar0;

	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_23.f_100.f_1211.f_6) && ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
	}
	iVar0 = 0;
	if (aggregate_func_4497(255))
	{
		if (!Local_23.f_100.f_1211.f_6.f_12)
		{
			if (func_876(&(Local_23.f_100.f_1211)) || CAM::IS_SCREEN_FADED_OUT())
			{
				Local_23.f_100.f_1211.f_6.f_11 = 1;
				iVar0 = 1;
			}
		}
		else
		{
			func_877();
			if (Local_23.f_100.f_1211.f_6.f_11)
			{
				iVar0 = 1;
				aggregate_func_4957(&(Local_23.f_1737));
			}
		}
	}
	else
	{
		aggregate_func_1926(0);
		if (!Local_23.f_100.f_1211.f_6.f_12)
		{
			if (func_876(&(Local_23.f_100.f_1211)))
			{
				Local_23.f_100.f_1211.f_6.f_11 = 1;
				Global_1274951->f_44 = -1;
				iVar0 = 1;
			}
		}
		else
		{
			func_877();
			if (Local_23.f_100.f_1211.f_6.f_11)
			{
				iVar0 = 1;
				aggregate_func_4957(&(Local_23.f_1737));
			}
		}
	}
	if (iVar0 || Local_23.f_100.f_1211.f_6.f_11)
	{
		if (func_467(&(Local_23.f_100.f_1211)))
		{
			if (func_472(Local_23.f_100.f_1211.f_6.f_20))
			{
				return true;
			}
		}
	}
	return false;
}

int func_453(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (iParam1 == -1)
	{
		return -1;
	}
	if (!aggregate_func_4457(iParam1, &iVar0, &iVar1, 0, 0))
	{
		return -1;
	}
	return aggregate_func_1191(iParam0, iVar0, iVar1, bParam2);
}

bool func_467(var uParam0)
{
	if (!aggregate_func_2732(&(uParam0->f_6)))
	{
		return false;
	}
	aggregate_func_4935(&(uParam0->f_6.f_26), 0);
	aggregate_func_4935(&(uParam0->f_6.f_25), 0);
	aggregate_func_4935(&(uParam0->f_6.f_24), 0);
	return true;
}

void func_468()
{
	Local_23.f_1772 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
}

void func_469(bool bParam0)
{
	if (bParam0)
	{
		aggregate_func_7577(2048);
	}
	else
	{
		aggregate_func_7374(2048);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		ENTITY::SET_ENTITY_VISIBLE(Global_35, bParam0);
	}
}

bool func_472(int iParam0)
{
	aggregate_func_581(&iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	return false;
}

bool func_542(var uParam0, var uParam1, bool bParam2)
{
	char cVar0[64];
	char* sVar8;
	char* sVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	char* sVar14;
	char* sVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	bool bVar23;
	char cVar24[32];
	char cVar28[32];
	char cVar32[32];
	char cVar36[32];
	char cVar40[32];
	char cVar44[32];
	int iVar48;
	char* sVar49;
	int iVar50;
	char cVar51[64];
	char cVar59[64];
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	bool bVar71;

	if (!uParam1->f_1)
	{
		return false;
	}
	switch (*uParam1)
	{
		case 14:
		case 15:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[0 /*8*/]), "TextureDictionary", aggregate_func_6278(uParam0));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[0 /*8*/]), "TextureName", aggregate_func_6287(uParam0));
			break;
		case 1:
			if (uParam1->f_3 == uParam0->f_279)
			{
				sVar9 = "DEFAULT_NOTE_PAGE";
				sVar8 = "DEFAULT_NOTE_PAGE";
			}
			else
			{
				sVar9 = aggregate_func_4933(uParam0, uParam1);
				sVar8 = aggregate_func_4933(uParam0, uParam1);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[0 /*8*/]), "TextureDictionary", sVar9);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[0 /*8*/]), "TextureName", sVar8);
			break;
		case 0:
			if (aggregate_func_6254(uParam1))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_6, "CATALOG_INDEX_DOUBLE");
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_5, "CATALOG_INDEX_DOUBLE");
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_6, "DEFAULT_INDEX");
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_5, "DEFAULT_INDEX");
			}
			StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "CAT_HEADER"), 64);
			sVar14 = MISC::_CREATE_VAR_STRING(2, "CAT_TABLE_CONTENTS");
			if (uParam1->f_3 >= 2)
			{
				StringConCat(&cVar0, " - ", 64);
				StringConCat(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(uParam1->f_134), 64);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_3, &cVar0);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_4, sVar14);
			bVar11 = false;
			while (bVar11 < 16)
			{
				iVar17 = aggregate_func_2309(uParam1->f_154);
				if (bVar11 >= uParam1->f_154)
				{
					sVar15 = "";
				}
				else
				{
					sVar15 = HUD::_GET_LABEL_TEXT_BY_HASH(&(uParam1->f_155[bVar11]));
				}
				if (bParam2)
				{
					bVar13 = uParam0->f_281.f_1 == bVar11;
					if (bVar13)
					{
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(uParam1->f_4.f_45[bVar11]), bVar13);
				}
				bVar16 = (bVar11 < (uParam1->f_154 - 1) && (bVar11 % iVar17) < (iVar17 - 1));
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(uParam1->f_4.f_79[bVar11]), bVar16);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(uParam1->f_4.f_28[bVar11]), sVar15);
				bVar11++;
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			if (aggregate_func_6288(*uParam1) || !(aggregate_func_6289(&(uParam1->f_136[0 /*4*/])) && !aggregate_func_6290(&(uParam1->f_136[0 /*4*/]))))
			{
				StringCopy(&cVar0, MISC::_CREATE_VAR_STRING(2, "CAT_HEADER"), 64);
				StringConCat(&cVar0, " - ", 64);
				StringConCat(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(uParam1->f_134), 64);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_4.f_3, &cVar0);
			}
			iVar12 = uParam1->f_153;
			if (iVar12 <= 0)
			{
				if (aggregate_func_6288(*uParam1))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "SubHeader", "");
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemName", "");
				}
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Description", "");
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemDollarSymbolVisible", false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "IsSelected", false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Hovered", false);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemOldPrice", "");
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemRank", "");
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "PriceLabel", "");
				if (aggregate_func_6289(&(uParam1->f_136[bVar11 /*4*/])))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureName", MISC::GET_HASH_KEY(sVar8));
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureDictionary", sVar9);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureName", sVar8);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureDictionary", sVar9);
				}
				StringConCat(&cVar32, MISC::_CREATE_VAR_STRING(2, "NUMBER", 0), 32);
				StringConCat(&cVar24, MISC::_CREATE_VAR_STRING(2, "NUMBER", 0), 32);
				StringConCat(&cVar28, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", 0), 32);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPrice", &cVar28);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceDollar", &cVar32);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceCents", &cVar24);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenVisible", false);
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenPrice", "");
				iVar50 = 0;
				while (iVar50 < 6)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&((uParam1->f_4.f_96[bVar11 /*8*/])->f_1[iVar50]), "statLabel", false);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&((uParam1->f_4.f_96[bVar11 /*8*/])->f_1[iVar50]), "invertedPotentialStat", false);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&((uParam1->f_4.f_96[bVar11 /*8*/])->f_1[iVar50]), "invertedCurrentStat", 100);
					iVar50++;
				}
				uParam1->f_2 = 0;
			}
			else
			{
				bVar11 = false;
				while (bVar11 < iVar12)
				{
					bVar10 = &uParam1->f_136[bVar11 /*4*/];
					sVar8 = aggregate_func_6291(bVar10, *uParam1);
					sVar9 = aggregate_func_6282(bVar10);
					StringCopy(&cVar51, aggregate_func_2879(bVar10), 64);
					if (aggregate_func_2852(bVar10, -306684263))
					{
						StringCopy(&cVar51, aggregate_func_2854(bVar10), 64);
					}
					MISC::_0x49C44FE78A135A1D(&cVar51);
					if (!aggregate_func_6271(bVar10))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Header", "");
						if (aggregate_func_6288(*uParam1))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "SubHeader", "");
						}
						else if (aggregate_func_6290(bVar10))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemName", &cVar51);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemName", "");
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Description", "");
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemDollarSymbolVisible", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "IsSelected", false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Hovered", false);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemOldPrice", "");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemRank", "");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "PriceLabel", "");
						if (aggregate_func_6289(&(uParam1->f_136[bVar11 /*4*/])))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureName", MISC::GET_HASH_KEY(sVar8));
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureDictionary", sVar9);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureName", sVar8);
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureDictionary", sVar9);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPrice", "");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceDollar", "");
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceCents", "");
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenVisible", false);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenPrice", "");
					}
					else
					{
						StringCopy(&cVar59, aggregate_func_3370(bVar10), 64);
						MISC::_0x49C44FE78A135A1D(&cVar59);
						StringCopy(&cVar24, "", 32);
						StringCopy(&cVar32, "", 32);
						StringCopy(&cVar28, "", 32);
						StringCopy(&cVar36, "", 32);
						StringCopy(&cVar40, "", 32);
						StringCopy(&cVar44, "", 32);
						bVar67 = false;
						bVar68 = bVar10;
						bVar69 = -915411861;
						if (aggregate_func_6273(bVar10))
						{
							bVar70 = false;
							if (aggregate_func_1213((uParam1->f_136[bVar11 /*4*/])->f_2, (uParam1->f_136[bVar11 /*4*/])->f_3, &bVar70))
							{
								if (aggregate_func_2823(bVar70, 0))
								{
									bVar68 = bVar70;
								}
							}
						}
						if ((!aggregate_func_1552(bVar10) && !aggregate_func_2852(bVar10, 81450561)) && !aggregate_func_2852(bVar10, 1342455455))
						{
							aggregate_func_3245(bVar10, &iVar48, &iVar22, 1);
							if (iVar22 > aggregate_func_5052(iVar48))
							{
								StringCopy(&cVar40, MISC::_CREATE_VAR_STRING(2, "CAT_UNLOCK_RANK", iVar22), 32);
							}
						}
						if (aggregate_func_6292(bVar68) && !aggregate_func_2896(bVar68, -915411861))
						{
							bVar69 = -570078785;
							bVar67 = true;
						}
						bVar71 = aggregate_func_5209(bVar68, 0, 1, -1, 1);
						if (bVar71 == 997808187 || aggregate_func_4985(bVar71))
						{
							bVar18 = false;
							bVar21 = false;
						}
						else if (aggregate_func_5210(bVar71))
						{
							bVar18 = aggregate_func_6264(bVar68, bVar71, 0, 0, 1);
							bVar21 = aggregate_func_6264(bVar68, bVar69, 0, 0, 0);
						}
						else
						{
							bVar18 = aggregate_func_6264(bVar68, bVar69, 0, 0, 1);
							bVar21 = aggregate_func_6264(bVar68, bVar69, 0, 0, 0);
						}
						if (bVar21 != bVar18)
						{
							if (bVar67)
							{
								StringCopy(&cVar36, MISC::_CREATE_VAR_STRING(2, "CAT_OLD_PRICE_GOLD", bVar21), 32);
							}
							else
							{
								StringCopy(&cVar36, MISC::_CREATE_VAR_STRING(2, "CAT_OLD_PRICE", bVar21), 32);
							}
						}
						iVar19 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(bVar18) / 100f));
						iVar20 = (bVar18 - iVar19 * 100);
						if (iVar20 < 10)
						{
							StringCopy(&cVar24, "0", 32);
						}
						if (bVar67)
						{
							StringIntConCat(&cVar32, bVar18, 32);
							StringIntConCat(&cVar28, bVar18, 32);
							StringCopy(&cVar24, "", 32);
						}
						else
						{
							StringConCat(&cVar32, MISC::_CREATE_VAR_STRING(2, "NUMBER", iVar19), 32);
							StringConCat(&cVar24, MISC::_CREATE_VAR_STRING(2, "NUMBER", iVar20), 32);
							StringConCat(&cVar28, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", bVar18), 32);
						}
						sVar49 = "";
						if (!aggregate_func_3371(bVar10, uParam0->f_221))
						{
							sVar49 = "MISSING FROM INVENTORY";
						}
						else if (aggregate_func_6288(*uParam1))
						{
							if (aggregate_func_4251() == -1)
							{
								if (aggregate_func_6293(uParam0, bVar10))
								{
									StringCopy(&cVar40, MISC::_CREATE_VAR_STRING(2, "SHOP_PRICE"), 32);
								}
								else
								{
									sVar49 = MISC::_CREATE_VAR_STRING(2, "SHOP_PRICE");
								}
							}
							else if (!aggregate_func_1552(bVar10))
							{
								if (UNLOCK::_UNLOCK_IS_UNLOCK_FLAG_SET(bVar10, 64))
								{
									StringCopy(&cVar40, MISC::_CREATE_VAR_STRING(2, aggregate_func_6294(bVar10)), 32);
								}
							}
							else if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar40))
							{
								sVar49 = MISC::_CREATE_VAR_STRING(2, aggregate_func_6294(bVar10));
							}
						}
						bVar23 = false;
						if (aggregate_func_5119(bVar68, 1))
						{
							bVar23 = aggregate_func_7362(bVar68, 1);
						}
						StringIntConCat(&cVar44, bVar23, 32);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenVisible", bVar23 > 0);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemTokenPrice", &cVar44);
						if ((bVar23 > 0 && bVar21 != bVar18) && aggregate_func_6288(*uParam1))
						{
							StringConCat(&cVar36, " |", 32);
						}
						if (bParam2)
						{
							bVar13 = false;
							if (aggregate_func_4747(uParam0) == uParam1->f_3 && aggregate_func_4275(uParam0) == bVar11)
							{
								bVar13 = true;
							}
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "IsSelected", bVar13);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Header", &cVar59);
						if (aggregate_func_6288(*uParam1))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "SubHeader", &cVar51);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemName", &cVar51);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "Description", aggregate_func_550(bVar10));
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemDollarSymbolVisible", !bVar67);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemOldPrice", &cVar36);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemRank", &cVar40);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "PriceLabel", sVar49);
						if (aggregate_func_6289(&(uParam1->f_136[bVar11 /*4*/])))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureName", MISC::GET_HASH_KEY(sVar8));
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "AdvertTextureDictionary", sVar9);
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureName", sVar8);
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "TextureDictionary", sVar9);
						}
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPrice", &cVar28);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceDollar", &cVar32);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceCents", &cVar24);
						if (aggregate_func_6295(bVar10))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemDollarSymbolVisible", false);
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceDollar", "");
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam1->f_4.f_96[bVar11 /*8*/]), "ItemPriceCents", "");
						}
						aggregate_func_153(uParam1);
					}
					bVar11++;
				}
				aggregate_func_4242(uParam0, 1);
			}
			break;
		default:
			return false;
	}
	return true;
}

bool func_683(var uParam0)
{
	bool bVar0;

	switch (uParam0->f_2)
	{
		case 0:
		case 1:
			if (aggregate_func_2298())
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
				{
					uParam0->f_45 = 1;
					if (aggregate_func_6010(uParam0) && aggregate_func_2083())
					{
						uParam0->f_44 = aggregate_func_6192(33);
					}
					else
					{
						uParam0->f_44 = aggregate_func_6192(32);
					}
					return true;
				}
			}
			Stack.Push((uParam0->f_11 < 3 && uParam0->f_29));
			Stack.Push(uParam0);
			Call_Loc(uParam0->f_30);
			if (StackVal && StackVal)
			{
				return true;
			}
			if (aggregate_func_2296(uParam0))
			{
				uParam0->f_44 = aggregate_func_6193(4);
				return true;
			}
			else if (aggregate_func_4278(uParam0, 4))
			{
				uParam0->f_44 = aggregate_func_6192(31);
				return true;
			}
			else if (aggregate_func_4278(uParam0, 8))
			{
				uParam0->f_44 = aggregate_func_6193(2);
				return true;
			}
			else if (aggregate_func_4278(uParam0, 16))
			{
				uParam0->f_44 = aggregate_func_6193(1);
				return true;
			}
			else if (uParam0->f_11 > 2)
			{
				if ((*uParam0 != 6 && aggregate_func_2823(uParam0->f_13, 0)) && aggregate_func_6499(uParam0->f_13, -915411861, 1, 0, 1, 0) >= 2500)
				{
					uParam0->f_44 = aggregate_func_6193(11);
				}
				else
				{
					uParam0->f_44 = aggregate_func_6193(10);
				}
				return true;
			}
			else if ((*uParam0 != 6 && aggregate_func_2823(uParam0->f_13, 0)) && aggregate_func_6499(uParam0->f_13, -915411861, 1, 0, 1, 0) >= 2500)
			{
				uParam0->f_44 = aggregate_func_6193(6);
				return true;
			}
			else
			{
				switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
				{
					case 0:
						uParam0->f_44 = aggregate_func_6193(9);
						return true;
					case 1:
						uParam0->f_44 = aggregate_func_6193(7);
						return true;
					case 2:
						uParam0->f_44 = aggregate_func_6193(20);
						return true;
					case 3:
						uParam0->f_44 = aggregate_func_6193(21);
						return true;
				}
			}
			break;
		case 2:
			if (!aggregate_func_2823(uParam0->f_13, 0))
			{
				bVar0 = uParam0->f_13;
				if (!aggregate_func_4246(bVar0))
				{
				}
				else
				{
					uParam0->f_17++;
					if (uParam0->f_11 > 2)
					{
						uParam0->f_44 = aggregate_func_6193(14);
						return true;
					}
					Stack.Push(uParam0->f_29);
					Stack.Push(uParam0);
					Call_Loc(uParam0->f_30);
					if (StackVal && StackVal)
					{
						return true;
					}
					if (!aggregate_func_2296(uParam0))
					{
						if (aggregate_func_2864(uParam0->f_13, 1073741824 /* Float: 2f */))
						{
							uParam0->f_44 = aggregate_func_6193(15);
							return true;
						}
						else if (aggregate_func_2864(uParam0->f_13, 268435456))
						{
							uParam0->f_44 = aggregate_func_6193(17);
							return true;
						}
						else if (aggregate_func_2864(uParam0->f_13, 134217728))
						{
							uParam0->f_44 = aggregate_func_6193(18);
							return true;
						}
						else
						{
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
							{
								case 0:
									uParam0->f_44 = aggregate_func_6193(21);
									break;
								case 1:
									uParam0->f_44 = aggregate_func_6193(16);
									break;
								case 2:
									uParam0->f_44 = aggregate_func_6193(20);
									break;
							}
							return true;
						}
					}
					else
					{
						uParam0->f_44 = aggregate_func_6193(4);
						return true;
					}
					Jump @810; //curOff = 781
					Stack.Push(uParam0->f_29);
					Stack.Push(uParam0);
					Call_Loc(uParam0->f_30);
					if (StackVal && StackVal)
					{
						return true;
					}
				}
				return false;
			}
			default:
				break;
	}
}

void func_720(var uParam0)
{
	bool bVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		bVar0 = 614617847;
		if (aggregate_func_4577() == 2026485318)
		{
			bVar0 = 654746159;
		}
		if (func_780(uParam0, bVar0, joaat("root"), 1))
		{
			aggregate_func_4358(uParam0, 201050);
			aggregate_func_4358(uParam0, 201945);
			aggregate_func_4358(uParam0, 202520);
			aggregate_func_4358(uParam0, 202789);
			aggregate_func_4358(uParam0, 202967);
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

bool func_750(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
	uParam0->f_1279 = 225469;
	uParam0->f_1280 = 225478;
	uParam0->f_1281 = 225487;
	uParam0->f_1282 = 225487;
	uParam0->f_222 = iParam5;
	aggregate_func_4252(uParam0, 0);
	return true;
}

bool func_751(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	uParam0->f_1279 = 225469;
	uParam0->f_1280 = 225478;
	uParam0->f_1281 = 225487;
	uParam0->f_1282 = 225487;
	uParam0->f_222 = iParam4;
	aggregate_func_4252(uParam0, 0);
	return true;
}

bool func_770(var uParam0)
{
	if (!func_1264())
	{
		return false;
	}
	func_1265(uParam0);
	if (Local_23.f_1735 != 1)
	{
		Local_23.f_1735 = 1;
		return false;
	}
	if (uParam0->f_6.f_26 != 13)
	{
		aggregate_func_4935(&(uParam0->f_6.f_26), 13);
		return false;
	}
	if (!aggregate_func_737(&(uParam0->f_6), aggregate_func_9327(Local_23.f_1735), func_1267(uParam0->f_6.f_26)))
	{
		return false;
	}
	Global_1274951->f_44 = uParam0->f_6;
	return true;
}

bool func_771(var uParam0)
{
	Local_23.f_100.f_1211.f_6.f_12 = 0;
	Local_23.f_100.f_1211.f_6.f_10 = 0;
	if (!func_1269(uParam0))
	{
		return false;
	}
	if (!aggregate_func_1472(uParam0->f_6, uParam0->f_146, uParam0->f_149, func_1270(), aggregate_func_4270(uParam0->f_6.f_20)))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_100.f_1211.f_6.f_20) && !ENTITY::IS_ENTITY_VISIBLE(Local_23.f_100.f_1211.f_6.f_20))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_23.f_100.f_1211.f_6.f_20, true);
	}
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam0->f_6.f_20, 1, 0, ((*Global_1275475)[&Global_1273882 /*86*/])->f_3);
	aggregate_func_4935(&(uParam0->f_6.f_25), 3);
	AUDIO::_0x6339C1EA3979B5F7("shop_moonshine_cook", "shop_scenes");
	aggregate_func_648(&(Local_23.f_1), uParam0->f_6.f_20, "MARCEL", 1);
	aggregate_func_648(&(Local_23.f_1), Global_35, "ARTHUR", 1);
	return true;
}

void func_777()
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_19.f_1[iVar0] = (((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_19.f_1[iVar0] && uVar1);
		iVar0++;
	}
}

bool func_780(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
	uParam0->f_2094.f_149 = 228294;
	uParam0->f_2094.f_150 = 229178;
	uParam0->f_2094.f_151 = 230164;
	uParam0->f_2094.f_152 = 230283;
	uParam0->f_2094.f_46 = 1;
	return true;
}

bool func_784()
{
	int iVar0;

	if (aggregate_func_3027(1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_100.f_1211.f_6.f_20))
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (aggregate_func_7100(65536))
	{
		iVar0 = 3;
		aggregate_func_6502(65536);
	}
	else if (aggregate_func_4934())
	{
		iVar0 = 6;
	}
	else if (aggregate_func_3301(aggregate_func_4347(-1473368735)) == 0 && NETWORK::_0xFBE782B3165AC8EC(-1429796736))
	{
		iVar0 = 5;
		func_1295(aggregate_func_4347(-1473368735), 1);
	}
	else
	{
		iVar0 = 4;
	}
	HUD::_0xF66090013DE648D5(func_1296(iVar0));
	if (aggregate_func_938(&(Local_23.f_1), aggregate_func_6661(func_1296(iVar0)), 0, -1, 0, 0))
	{
		return true;
	}
	return false;
}

int func_785(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6.f_20) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_6.f_20))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6.f_20, true);
	}
	switch (uParam0->f_6.f_25)
	{
		case 3:
			uParam0->f_6.f_8 = 0;
			if (uParam0->f_6.f_26 == 13 && aggregate_func_3949(uParam0->f_6, 0.99f))
			{
				aggregate_func_4935(&(uParam0->f_6.f_26), 4);
				aggregate_func_4935(&(uParam0->f_6.f_25), 4);
			}
			if (uParam0->f_6.f_26 == 4 && aggregate_func_3949(uParam0->f_6, 0.99f))
			{
				if (func_1300(Local_23.f_1735, &(uParam0->f_6.f_44), &(uParam0->f_6.f_26), &(uParam0->f_6.f_10), &(uParam0->f_6.f_12)))
				{
					aggregate_func_4935(&(uParam0->f_6.f_25), 4);
				}
			}
			else if (aggregate_func_3949(uParam0->f_6, 0.99f))
			{
				aggregate_func_4935(&(uParam0->f_6.f_26), 4);
				func_1301();
				aggregate_func_4935(&(uParam0->f_6.f_25), 4);
			}
			if (uParam0->f_3)
			{
				if (func_1302(&(uParam0->f_6.f_26)))
				{
					uParam0->f_3 = 0;
					aggregate_func_4935(&(uParam0->f_6.f_25), 4);
				}
			}
			break;
		case 4:
			func_1303(uParam0->f_6, func_1267(uParam0->f_6.f_26), &(uParam0->f_6.f_8));
			if (uParam0->f_6.f_8)
			{
				aggregate_func_4935(&(uParam0->f_6.f_25), 3);
			}
			break;
	}
	return 1;
}

int func_792(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_100.f_1211.f_6.f_20))
	{
		return 0;
	}
	if (aggregate_func_3027(1))
	{
		return 0;
	}
	if (!aggregate_func_4260(&(Local_23.f_1740)))
	{
		Local_23.f_1744 = MISC::GET_RANDOM_INT_IN_RANGE(60000, 90000);
		aggregate_func_4293(&(Local_23.f_1740), 0);
	}
	else if (aggregate_func_4732(&(Local_23.f_1740)) > Local_23.f_1744 || !Local_23.f_1776)
	{
		Local_23.f_1776 = 1;
		aggregate_func_4957(&(Local_23.f_1740));
		if (aggregate_func_938(&(Local_23.f_1), aggregate_func_6661(func_1296(iParam0)), 0, -1, 0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_796()
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	iVar1 = iVar0;
	uVar2 = ((*Global_1275475)[iVar1 /*86*/])->f_19.f_16 * 5;
	return uVar2;
}

void func_798(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_52, "Business");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "Description", sParam1);
}

int func_801(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	int iVar9;
	int iVar11;
	int iVar12;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar1) != iVar0)
	{
		return 2;
	}
	if (aggregate_func_4255(aggregate_func_4320()))
	{
		return 4;
	}
	if (iParam1 & 4 == 0)
	{
		if (aggregate_func_8005(aggregate_func_7094(iParam0)) == 5)
		{
			return 19;
		}
	}
	if (iParam1 & 1 == 0)
	{
		if (aggregate_func_7557(iParam0))
		{
			return 5;
		}
	}
	if (aggregate_func_245(iVar0, 1, 0, 1))
	{
		return 7;
	}
	Var2 = { aggregate_func_2843(iVar0) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var2, &iVar9);
	if (iVar9 >= Global_1901929->f_160.f_2)
	{
		return 8;
	}
	iVar11 = aggregate_func_7053(iVar1);
	if (iVar11 == -1)
	{
		return 9;
	}
	if (aggregate_func_7213(iVar11) != 0)
	{
		return 25;
	}
	iVar12 = PLAYER::GET_PLAYER_PED(iVar0);
	if (TASK::_0xEC7E480FF8BD0BED(iVar12))
	{
		return 10;
	}
	if (aggregate_func_1316())
	{
		return 11;
	}
	if (aggregate_func_3115())
	{
		return 12;
	}
	if (aggregate_func_7807())
	{
		return 13;
	}
	if (aggregate_func_4913())
	{
		return 14;
	}
	if (aggregate_func_576(iVar0))
	{
		return 15;
	}
	if (iParam1 & 16 == 0)
	{
		if (_NAMESPACE26::_0x149A2751AB66AC02(iVar1) > 4)
		{
			return 20;
		}
	}
	if (iParam1 & 32 == 0)
	{
		if (aggregate_func_3639(-1784925006, PLAYER::PLAYER_ID(), 0, 1) != -1)
		{
			return 18;
		}
	}
	if (Global_1274951->f_45 & 1 != 0)
	{
		return 27;
	}
	return 0;
}

void func_802(var uParam0)
{
	if (aggregate_func_5131(&Global_1273882, 256))
	{
		aggregate_func_3247(uParam0, -1871110370);
	}
	else if (aggregate_func_5131(&Global_1273882, 4))
	{
		aggregate_func_3247(uParam0, -1277879663);
	}
	else
	{
		aggregate_func_3192(uParam0, func_813());
	}
	func_798(uParam0, "SHOP_MS_BUYER_DESC");
}

bool func_804(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<4> Var3;

	bVar2 = aggregate_func_5821(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_52[uParam1->f_2 /*4*/]);
	Var3.f_1 = -1;
	Var3 = { *(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_52[uParam1->f_2 /*4*/]) };
	bVar1 = !aggregate_func_5512(Var3.f_3) == joaat("default");
	if (!bVar1)
	{
		bVar2 = aggregate_func_7391();
		if (bVar2 == 0)
		{
			bVar1 = true;
		}
	}
	iVar0 = aggregate_func_2227(bVar2, bVar1);
	return iVar0;
}

void func_808(var uParam0, var uParam1)
{
	switch (uParam1->f_10)
	{
		case 1:
			aggregate_func_8360(32);
			func_1333(uParam1->f_7, 1);
			func_1334(0);
			func_1335(uParam1);
			break;
		case 2:
			func_1333(uParam1->f_7, 2);
			break;
	}
}

void func_811()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = PLAYER::PLAYER_ID();
	if (!aggregate_func_9351())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar4))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
			{
			}
			else
			{
				iVar3 = iVar4;
				if (iVar2 != iVar3)
				{
					if (aggregate_func_5163() == iVar4)
					{
						iVar1 = 0;
						while (iVar1 < 10)
						{
							((*Global_1275475)[iVar2 /*86*/])->f_19.f_1[iVar1] = (((*Global_1275475)[iVar2 /*86*/])->f_19.f_1[iVar1] || ((*Global_1275475)[iVar3 /*86*/])->f_19.f_1[iVar1]) // PointerArith;
							iVar1++;
						}
					}
				}
			}
			iVar0++;
		}
	}
}

char* func_813()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_1337();
	iVar0 = (bVar3 / 3600);
	iVar1 = ((bVar3 - iVar0 * 3600) / 60);
	iVar2 = ((bVar3 - iVar0 * 3600) - iVar1 * 60);
	return MISC::_CREATE_VAR_STRING(2, "SHOP_MS_STILL_TOOLTIP_CRAFT_NO_INGREDIENTS_PRS", iVar0, iVar1, iVar2);
}

void func_818()
{
	bool bVar0;
	bool bVar1;

	bVar0 = aggregate_func_7391();
	bVar1 = false;
	if (aggregate_func_2852(bVar0, 1372968408))
	{
		bVar1 = -1519683528;
	}
	else if (aggregate_func_2852(bVar0, -710171994))
	{
		bVar1 = 384689046;
	}
	else if (aggregate_func_2852(bVar0, 956386416))
	{
		bVar1 = 1435612062;
	}
	aggregate_func_4638(bVar1, 0, 255, 0, 0);
}

void func_819(var uParam0, bool bParam1)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	var uVar14;

	aggregate_func_3149(uParam0, &uVar0);
	iVar4 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_5.f_12;
	iVar5 = func_1348(iVar4);
	if (bParam1)
	{
		iVar6 = 1535463323;
	}
	else
	{
		iVar6 = 733252738;
	}
	if (bParam1)
	{
		uVar7 = Global_1274951->f_19;
	}
	uVar8 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_19;
	uVar9 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_17;
	uVar10 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_18;
	uVar11 = Global_1274951->f_33;
	iVar12 = func_1349();
	uVar13 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_16;
	uVar14 = &((*Global_1275475)[&Global_1273882 /*86*/])->f_5[0];
	TELEMETRY::_0xB5013EFBB5516867(&uVar0, iVar5, iVar6, uVar7, uVar8, uVar9, uVar10, uVar11, iVar12, uVar13, uVar14);
}

bool func_820(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_100.f_1211.f_6.f_20))
	{
		return false;
	}
	if (aggregate_func_3027(1))
	{
		return false;
	}
	iVar0 = 0;
	switch (uParam0->f_9)
	{
		case 1039159916:
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
			iVar2 = func_1350(1);
			switch (iVar2)
			{
				case 2:
					if (fVar1 < 0.7f)
					{
						iVar0 = 9;
					}
					break;
				case 1:
					if (fVar1 < 0.5f)
					{
						iVar0 = 10;
					}
					break;
				case 0:
					if (fVar1 < 0.7f)
					{
						iVar0 = 11;
					}
					break;
			}
			if (iVar0 == 0)
			{
				switch (uParam0->f_8)
				{
					case 827714260:
						iVar0 = 14;
						break;
					case -822124724:
						iVar0 = 13;
						break;
					case 1269193435:
						iVar0 = 12;
						break;
				}
			}
			break;
		default:
			return false;
	}
	if (aggregate_func_938(&(Local_23.f_1), aggregate_func_6661(func_1296(iVar0)), 0, -1, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_821(bool bParam0)
{
	if (!aggregate_func_9351())
	{
		if (aggregate_func_2827(bParam0) == -1940066807)
		{
			if (!func_1351(bParam0, 2))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_822(bool bParam0)
{
	if (aggregate_func_2827(bParam0) == -1940066807)
	{
		if (func_1351(bParam0, 1))
		{
			return false;
		}
	}
	return true;
}

void func_826(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_52, "Business");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "MaterialsTexture", bParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "MaterialsTextureDictionary", bParam2);
}

void func_831(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_52, "Business");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "ProductionTexture", bParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "ProductionTextureDictionary", bParam2);
}

void func_833(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_52, "Business");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "GoodsTexture", bParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "GoodsTextureDictionary", bParam2);
}

bool func_876(var uParam0)
{
	if (uParam0->f_6.f_26 != 14)
	{
		aggregate_func_4935(&(uParam0->f_6.f_26), 14);
		uParam0->f_6.f_8 = 0;
	}
	func_1303(uParam0->f_6, func_1267(uParam0->f_6.f_26), &(uParam0->f_6.f_8));
	if (uParam0->f_6.f_8)
	{
		if (aggregate_func_3949(uParam0->f_6, 0.85f))
		{
			uParam0->f_6.f_8 = 0;
			return true;
		}
	}
	return false;
}

void func_877()
{
	Local_23.f_100.f_1211.f_6.f_8 = 0;
	switch (Local_23)
	{
		case 0:
			if (Local_23.f_100.f_1211.f_6.f_12)
			{
				aggregate_func_4627(1);
			}
			break;
		case 1:
			if (!aggregate_func_5131(&Global_1273882, 8))
			{
				aggregate_func_8360(8);
			}
			if (!aggregate_func_5131(&Global_1273882, 2))
			{
			}
			else
			{
				func_1388(Local_23.f_1767 != 0, *(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_52[Local_23.f_1767 /*4*/]));
				aggregate_func_4627(2);
				Jump @442; //curOff = 144
				if (!ANIMSCENE::_0x25557E324489393C(Local_23.f_100.f_1211.f_6))
				{
				}
				else
				{
					if ((ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p1") || ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p2")) || ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p3"))
					{
						Local_23.f_100.f_1211.f_6.f_8 = 1;
						aggregate_func_4627(3);
						aggregate_func_4957(&(Local_23.f_1737));
					}
					Jump @442; //curOff = 259
					Local_23.f_100.f_1211.f_6.f_8 = 1;
					if (!aggregate_func_3949(Local_23.f_100.f_1211.f_6, 0.99f))
					{
						if ((ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p1") || ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p2")) || ANIMSCENE::_0x1F0E401031E20146(Local_23.f_100.f_1211.f_6, "pl_ig4_jobbrief_p3"))
						{
							if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_23.f_100.f_1211.f_6.f_20))
							{
								Jump @442; //curOff = 380
							}
						}
					else
					{
						}
						else if (!CAM::IS_SCREEN_FADED_OUT())
						{
						}
						else
						{
							Local_23.f_100.f_1211.f_6.f_11 = 1;
							Local_23.f_100.f_1211.f_6.f_12 = 0;
							Global_1274951->f_43 = 1;
							aggregate_func_4627(0);
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_1012(bool bParam0)
{
	struct<4> Var0;
	struct<10> Var4;

	Var0 = { aggregate_func_5354(0) };
	Var4.f_9 = -1591664384;
	aggregate_func_4272(Var0, &Var4, bParam0, 0, -1);
	return aggregate_func_3302(Var4.f_4);
}

bool func_1170(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	bool bVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	var uVar20;
	int iVar24;
	int iVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	char* sVar30;

	iVar0 = aggregate_func_7139();
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, aggregate_func_5535());
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate_func_5656());
	iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate_func_5698());
	iVar4 = aggregate_func_7143();
	iVar2 = (iVar2 + iVar4);
	if (iVar2 >= iVar3)
	{
		iVar2 = 0;
	}
	else if (iVar2 < 0)
	{
		iVar2 = (iVar3 - 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate_func_5656(), iVar2);
	if (iVar1 == -395279071)
	{
		iVar5 = aggregate_func_2851();
		bVar6 = iVar5;
		iVar7 = aggregate_func_5699(bVar6);
		(Global_1951131->f_1461.f_1[bVar6 /*9*/])->f_8 = iVar2;
		if (!aggregate_func_1204(iVar7, &iVar8, &uVar9))
		{
			return false;
		}
		bVar10 = Global_1951131->f_1461.f_1[bVar6 /*9*/][iVar2];
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iVar0, aggregate_func_5700(), bVar10);
		iVar11 = aggregate_func_4716(iVar8, 1);
		aggregate_func_5031(iVar11);
		aggregate_func_5012();
		func_1717(&(Global_1951131->f_1538), &(Global_1951131->f_1538.f_1[iVar11 /*3*/]), iVar11, 1);
		(Global_1951131->f_1538.f_1[aggregate_func_4716(iVar8, 1) /*3*/])->f_1 = uVar9;
		if (aggregate_func_4856(iVar11) == -1)
		{
			aggregate_func_4743(iVar11, 0);
		}
		aggregate_func_5053(1, 1, 0, 1);
		aggregate_func_4733(19, 0, 2, 0, 0);
		aggregate_func_1589(uParam0);
	}
	else if (iVar1 == -339889117)
	{
		bVar12 = false;
		switch (iVar2)
		{
			case 0:
				bVar12 = 1728382685; /* GXTEntry: "Right" */
				break;
			case 1:
				bVar12 = -649335959; /* GXTEntry: "Left" */
				break;
		}
		if (bVar12 != 0)
		{
			if (aggregate_func_5701(aggregate_func_5650(), bVar12, &iVar13, &iVar14))
			{
				DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(iVar0, aggregate_func_5702(), iVar13);
				DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(iVar0, aggregate_func_5703(), iVar14);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iVar0, aggregate_func_5700(), bVar12);
			aggregate_func_5704(uParam0, bVar12);
			if ((aggregate_func_5642(uParam0) == -2144266389 || aggregate_func_5642(uParam0) == 2057502022) || aggregate_func_5642(uParam0) == 1275816411)
			{
				aggregate_func_55(uParam0, aggregate_func_5650(), 0);
			}
			bVar15 = aggregate_func_5650();
			if (WEAPON::_0xD955FEE4B87AFA07(bVar15))
			{
				bVar26 = true;
				bVar27 = true;
				bVar28 = true;
				iVar24 = -1610187846; /* GXTEntry: "Equip Sidearm" */
				iVar25 = 190417139; /* GXTEntry: "Equip Off-Hand Sidearm" */
				Var16 = { aggregate_func_2828(bVar15, aggregate_func_1972(0), bVar12, 0) };
				if (WEAPON::_0x6929E22158E52265(Global_35, 2, &uVar20))
				{
					if (aggregate_func_4632(&Var16, &uVar20))
					{
						bVar26 = false;
						bVar27 = false;
					}
				}
				if (WEAPON::_0x6929E22158E52265(Global_35, 3, &uVar20))
				{
					if (aggregate_func_4632(&Var16, &uVar20))
					{
						bVar26 = false;
						iVar25 = 165536584; /* GXTEntry: "Unequip Off-Hand Sidearm" */
					}
				}
				if (!aggregate_func_4292() || aggregate_func_3560() < 2)
				{
					bVar28 = false;
				}
				aggregate_func_3190(uParam0, 3, iVar24, bVar26, 1, 0);
				aggregate_func_3190(uParam0, 2, iVar25, (bVar27 && bVar28), bVar28, 0);
			}
		}
	}
	else if (iVar1 == -239176093)
	{
		iVar29 = aggregate_func_4267(uParam0);
		switch (iVar2)
		{
			case 0:
				sVar30 = aggregate_func_5374(1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar29))
				{
					aggregate_func_2022(iVar29, 1);
				}
				break;
			case 1:
				sVar30 = aggregate_func_5374(2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar29))
				{
					aggregate_func_2022(iVar29, 2);
				}
				break;
		}
		DATABINDING::_0xA3BD6FF95E713EE5(iVar0, aggregate_func_5700(), sVar30);
		if (ENTITY::DOES_ENTITY_EXIST(iVar29))
		{
			PED::_0xCC8CA3E88256E58F(iVar29, 0, 1, 1, 1, false);
		}
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_52, "HorseGender", MISC::GET_HASH_KEY(sVar30));
	}
	return true;
}

bool func_1264()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1273882->f_15;
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	return true;
}

void func_1265(var uParam0)
{
	uParam0->f_93 = aggregate_func_3450(aggregate_func_5163(), 1);
	switch (uParam0->f_93)
	{
		case 0:
			uParam0->f_146 = { 1789.989f, -818.1904f, 188.401f };
			uParam0->f_149 = { 0f, 0f, 28.4f };
			break;
		case 1:
			uParam0->f_146 = { -1091.248f, 712.8531f, 80.0358f };
			uParam0->f_149 = { 0f, 0f, -171.5f };
			break;
		case 2:
			uParam0->f_146 = { -2774.076f, -3045.214f, -12.8987f };
			uParam0->f_149 = { 0f, 0f, 137.3f };
			break;
		case 3:
			uParam0->f_146 = { 1630.838f, 827.6671f, 120.7437f };
			uParam0->f_149 = { 0f, 0f, 51.8f };
			break;
		case 4:
			uParam0->f_146 = { -1865.579f, -1726.884f, 85.0569f };
			uParam0->f_149 = { 0f, 0f, -135f };
			break;
	}
}

char* func_1267(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pl_ig4_jobbrief_p1";
		case 2:
			return "pl_ig4_jobbrief_p2";
		case 3:
			return "pl_ig4_jobbrief_p3";
		case 4:
			return "pl_ig1_idle_loop";
		case 5:
			return "pl_ig1_idle_variation_a";
		case 6:
			return "pl_ig1_idle_variation_b";
		case 7:
			return "pl_ig1_idle_variation_c";
		case 8:
			return "pl_ig1_idle_variation_d";
		case 9:
			return "pl_ig1_idle_variation_e";
		case 10:
			return "pl_ig1_idle_variation_f";
		case 11:
			return "pl_ig1_idle_variation_g";
		case 12:
			return "pl_ig1_idle_variation_h";
		case 13:
			return "pl_ig1_enter_fwd";
		case 14:
			return "pl_ig1_exit_fwd";
		case 0:
			return "FAIL";
		default:
			break;
	}
	return "FAIL";
}

bool func_1269(var uParam0)
{
	vector3 vVar0;

	func_1265(uParam0);
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_146, uParam0->f_149.f_2, 0.2f, 2f, 0f) };
	if (!ENTITY::DOES_ENTITY_EXIST(aggregate_func_4270(uParam0->f_6.f_20)))
	{
		uParam0->f_6.f_20 = aggregate_func_2073(-1619564045, vVar0, 0f, 1, 1, 0, 1, 1, 1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6.f_20, false);
		NETWORK::_0xF3354D6CA46F419D(uParam0->f_6.f_20, 0);
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(uParam0->f_6.f_20, true);
	}
	else if (func_1870(uParam0->f_6.f_20, 21756842))
	{
		return true;
	}
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_6.f_20, "rdro_shop_moonshine_cook_mixgroup", 0f);
	return false;
}

char* func_1270()
{
	return "COOK";
}

bool func_1287(var uParam0, var uParam1, bool bParam2)
{
	switch (*uParam1)
	{
		case -1499658354:
		case 336033112:
			return aggregate_func_5754(uParam0, uParam1);
		case -1968468235:
			return true;
		case -384358143:
			return aggregate_func_5755(uParam0, uParam1);
		case -1928601151:
		case -349391286:
			return aggregate_func_7144(uParam0, uParam1);
		case -760956867:
			return aggregate_func_1993(uParam0, uParam1);
		case 38807286:
			return aggregate_func_1993(uParam0, uParam1);
		case -1395073769:
			return aggregate_func_1993(uParam0, uParam1);
		case 1425890997:
			return aggregate_func_1993(uParam0, uParam1);
		case -853534656:
			return aggregate_func_2193(uParam0, uParam1);
		case 777890122:
			return aggregate_func_5756(uParam0, uParam1, bParam2);
		case -1502467280:
			if (aggregate_func_5166(uParam1->f_7))
			{
				return aggregate_func_5755(uParam0, uParam1);
			}
			else
			{
				return aggregate_func_5757(uParam0, uParam1, bParam2);
			}
			break;
		case -1048755899:
			return aggregate_func_5758(uParam0, uParam1);
		case -239176093:
			return aggregate_func_3224(uParam0, uParam1);
		case -87783305:
			return aggregate_func_3225(uParam0, uParam1);
		case 848718617:
			return aggregate_func_5759(uParam0, uParam1);
		case -1080155519:
			return aggregate_func_694(uParam0, uParam1);
		case 1394581936:
			return aggregate_func_5760(uParam0, uParam1);
		case 193788635:
			return aggregate_func_2194(uParam0, uParam1);
		case -1198174119:
			return aggregate_func_2195(uParam0, uParam1);
		case 1119253406:
			return aggregate_func_5761(uParam0, uParam1);
		case 1837492866:
			return aggregate_func_5762(uParam0, *uParam1);
		case -339889117:
			return aggregate_func_359(uParam0, *uParam1);
		case -348190488:
			return aggregate_func_2272(uParam0, *uParam1);
		case 1702073444:
			return aggregate_func_544(uParam0, *uParam1, bParam2);
		case -584027224:
			return aggregate_func_1208(uParam0, uParam1);
		case -467661559:
			return aggregate_func_5763(uParam0, uParam1);
		case 761079318:
			return aggregate_func_2196(uParam0, uParam1);
		case 1942587409:
			return aggregate_func_5764(uParam0, uParam1);
		case -2056428614:
			return aggregate_func_2265(uParam0, uParam1);
		case 2077448405:
			return aggregate_func_5765(uParam0, uParam1);
		case -698448975:
			return aggregate_func_7145(uParam0, uParam1);
		case -627085098:
			return aggregate_func_5766(uParam0, uParam1);
		case -841939068:
			return aggregate_func_5767(uParam0, uParam1);
		case 1751567119:
			return aggregate_func_5768(uParam0, uParam1);
		case -2092532275:
		case -1594421938:
		case -1352600334:
		case -772187037:
		case 317179309:
		case 2073652352:
			return aggregate_func_5769(uParam0, uParam1);
	}
	return true;
}

void func_1295(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::STAT_ID_SET_INT(&uParam0, iParam2, true);
}

char[] func_1296(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "COOK_BA_FLAVREP";
		case 2:
			return "COOK_UI_ENTERSU";
		case 3:
			return "COOK_UI_ENTERFT";
		case 4:
			return "COOK_UI_ENTER";
		case 5:
			return "COOK_UI_ENTERST";
		case 6:
			return "COOK_UI_DRUNL";
		case 7:
			return "COOK_UI_NOMONEY";
		case 8:
			return "COOK_UI_IDLE";
		case 9:
			return "COOK_UI_BUYHIGH";
		case 10:
			return "COOK_UI_BUYMED";
		case 11:
			return "COOK_UI_BUYLOW";
		case 12:
			return "COOK_UI_STRONG";
		case 13:
			return "COOK_UI_AVERAGE";
		case 14:
			return "COOK_UI_WEAK";
		case 15:
			return "COOK_BA_FLAVOR2";
		case 16:
			return "COOK_UI_FLSPECL";
		case 17:
			return "COOK_UI_FLIMPRV";
		case 18:
			return "COOK_UI_FLREGLR";
		case 19:
			return "COOK_UI_REFLAV";
		case 20:
			return "COOK_UI_SELLDLY";
		case 21:
			return "COOK_GN_BOUNTY";
		default:
			break;
	}
	return "";
}

bool func_1300(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			if (*uParam3)
			{
				iVar0 = func_1966(iParam0);
				iVar2 = iVar0;
				if (func_1967(iVar2) && iVar2 != *uParam2)
				{
					aggregate_func_4935(uParam2, iVar2);
					return true;
				}
			}
			if (*uParam4)
			{
			}
			break;
		case 2:
			if (*uParam3)
			{
				iVar0 = func_1966(iParam0);
				iVar1 = iVar0;
				if (func_1968(iVar1) && iVar1 != *uParam1)
				{
					aggregate_func_4935(uParam1, iVar1);
					*uParam3 = 0;
					return true;
				}
			}
			if (*uParam4)
			{
			}
			break;
	}
	return false;
}

int func_1301()
{
	int iVar0;

	if (aggregate_func_3027(1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_100.f_1211.f_6.f_20))
	{
		return 0;
	}
	iVar0 = 8;
	if (aggregate_func_938(&(Local_23.f_1), aggregate_func_6661(func_1296(iVar0)), 0, -1, 0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_1302(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar2 = *uParam0;
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 >= 16)
	{
		iVar0 = 1;
	}
	*uParam0 = iVar0;
	if ((*uParam0 != 0 && *uParam0 != 15) && *uParam0 != iVar2)
	{
		iVar1 = 1;
	}
	else
	{
		*uParam0 = 1;
		iVar1 = 1;
	}
	return iVar1;
}

void func_1303(int iParam0, char* sParam1, var uParam2)
{
	*uParam2 = 0;
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		if ((!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1)) && !ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
		}
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1) && !ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
		}
		if (ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
		{
			*uParam2 = 1;
		}
	}
}

bool func_1326(var uParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = aggregate_func_5544(bParam1, 0);
	return aggregate_func_5862(uParam0, bParam1, bVar0);
}

bool func_1329(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<14> Var5;
	struct<4> Var19;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	var uVar28;
	bool bVar29;
	struct<4> Var30;
	struct<4> Var34;
	struct<9> Var38;
	int iVar48;
	int iVar49;
	int iVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	var uVar55;
	bool bVar56;
	struct<4> Var57;
	struct<4> Var61;
	struct<9> Var65;
	int iVar75;
	int iVar76;
	int iVar77;
	bool bVar78;
	bool bVar79;
	struct<4> Var80;
	struct<4> Var84;
	int iVar88;
	int iVar89;
	struct<14> Var90;

	bVar0 = false;
	if (bParam2 == -1502467280 || bParam2 == 777890122)
	{
		if (aggregate_func_5784(bParam1))
		{
			bVar0 = true;
		}
		else if (aggregate_func_2852(bParam1, 1844906744))
		{
			iVar1 = aggregate_func_2827(bParam1);
			if ((bParam2 == 777890122 || iVar1 == 146649851) || iVar1 == -1954920608)
			{
				bVar0 = true;
			}
			else if (bParam2 == -1502467280)
			{
				Var5 = -1;
				Var5.f_1 = -1;
				Var5.f_2 = -1;
				Var5.f_3 = -1;
				Var5.f_4 = -1;
				Var5.f_5 = -1;
				Var5.f_6 = -1;
				Var5.f_7 = -1;
				Var5.f_8 = -1;
				Var5.f_13 = -1;
				bVar23 = aggregate_func_4275(uParam0);
				bVar24 = aggregate_func_4275(uParam0);
				if (bVar23 != 0 && bVar24 != 0)
				{
					Var19 = { aggregate_func_2828(bVar23, aggregate_func_1972(0), bVar24, 0) };
					if (iVar1 != 0)
					{
						bVar0 = true;
						iVar25 = aggregate_func_3134(bParam1);
						iVar26 = 0;
						while (iVar26 < iVar25)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar26, &bVar2))
							{
								Var5 = { aggregate_func_4303(0, bVar2, -1591664384, -1591664384, 0, 0, 0) };
								aggregate_func_2839(&Var5, Var19);
								if (aggregate_func_2836(&Var5, &iVar3, &iVar4, 1))
								{
									if (iVar4 != 0)
									{
										bVar0 = false;
									}
									aggregate_func_2837(iVar3);
								}
							}
							iVar26++;
						}
					}
				}
			}
		}
		else if (aggregate_func_2852(bParam1, 188214926))
		{
			bVar29 = aggregate_func_8209(uParam0);
			Var30.f_2 = -1;
			Var30.f_3 = -1;
			Var38 = -1;
			Var38.f_1 = -1;
			Var38.f_2 = -1;
			Var38.f_3 = -1;
			Var38.f_4 = -1;
			Var38.f_5 = -1;
			Var38.f_6 = -1;
			Var38.f_7 = -1;
			Var38.f_8 = -1;
			if (aggregate_func_3236(aggregate_func_5306(&(uParam0->f_2094)), bVar29, &Var34))
			{
				bVar27 = false;
				while (bVar27 < Var34.f_3)
				{
					Var30 = { aggregate_func_3237(bVar27, Var34, &(uParam0->f_2094)) };
					if (Var30 == bParam1 && aggregate_func_2823(Var30, 0))
					{
						Var38.f_8 = Var30.f_2;
						iVar49 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var38, &iVar48, 1);
						if (iVar49 == -1)
						{
						}
						else
						{
							iVar50 = 0;
							while (iVar50 < iVar48)
							{
								bVar51 = aggregate_func_2076(iVar50, iVar49);
								if (((aggregate_func_2823(bVar51, 0) && bVar51 != bParam1) && aggregate_func_5724(&(uParam0->f_2094), bVar51, &uVar28)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(bVar51, Var38.f_8) == -2089472884)
								{
									bVar52 = func_1326(uParam0, bVar51);
									if (func_1329(uParam0, bVar51, bVar52))
									{
										bVar0 = true;
									}
									else
									{
										iVar50++;
									}
									ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar49);
									Jump @681; //curOff = 669
									bVar27++;
									Jump @708; //curOff = 681
									bVar53 = aggregate_func_4275(uParam0);
									bVar0 = aggregate_func_5785(bVar53, bParam1, aggregate_func_4275(uParam0));
									Jump @1245; //curOff = 708
									if (bParam2 == -584027224 || bParam2 == -87783305)
									{
										if (aggregate_func_1970(bParam1, 1, 0, 0) > 0)
										{
											return true;
										}
										if (aggregate_func_3238(897456793, bParam1))
										{
											return true;
										}
										if (aggregate_func_3238(-1565675519, bParam1))
										{
											return true;
										}
									}
									else if (bParam2 == 1702073444)
									{
										bVar56 = aggregate_func_8209(uParam0);
										Var57.f_2 = -1;
										Var57.f_3 = -1;
										Var65 = -1;
										Var65.f_1 = -1;
										Var65.f_2 = -1;
										Var65.f_3 = -1;
										Var65.f_4 = -1;
										Var65.f_5 = -1;
										Var65.f_6 = -1;
										Var65.f_7 = -1;
										Var65.f_8 = -1;
										if (aggregate_func_3236(aggregate_func_5306(&(uParam0->f_2094)), bVar56, &Var61))
										{
											bVar54 = false;
											while (bVar54 < Var61.f_3)
											{
												Var57 = { aggregate_func_3237(bVar54, Var61, &(uParam0->f_2094)) };
												if (Var57 == bParam1 && aggregate_func_2823(Var57, 0))
												{
													Var65.f_8 = Var57.f_2;
													iVar76 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var65, &iVar75, 1);
													if (iVar76 == -1)
													{
													}
													else
													{
														iVar77 = 0;
														while (iVar77 < iVar75)
														{
															bVar78 = aggregate_func_2076(iVar77, iVar76);
															if (((aggregate_func_2823(bVar78, 0) && bVar78 != bParam1) && aggregate_func_5724(&(uParam0->f_2094), bVar78, &uVar55)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(bVar78, Var65.f_8) == -2089472884)
															{
																bVar79 = func_1326(uParam0, bVar78);
																if (func_1329(uParam0, bVar78, bVar79))
																{
																	bVar0 = true;
																}
																else
																{
																	iVar77++;
																}
																ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar76);
																Jump @1116; //curOff = 1104
																bVar54++;
																Jump @1245; //curOff = 1116
																if (bParam2 == 1394581936)
																{
																	if (aggregate_func_4923(bParam1))
																	{
																		Var80 = { aggregate_func_4615(uParam0) };
																		return aggregate_func_2200(&Var80, bParam1);
																	}
																	else
																	{
																		Var84 = { aggregate_func_4615(uParam0) };
																		return aggregate_func_2200(&Var84, bParam1);
																	}
																}
																else
																{
																	Var90 = { aggregate_func_4303(bParam1, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
																	if (aggregate_func_2836(&Var90, &iVar88, &iVar89, 0))
																	{
																		if (iVar89 > 0)
																		{
																			bVar0 = true;
																		}
																	}
																	aggregate_func_2837(iVar88);
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

void func_1333(bool bParam0, int iParam1)
{
	aggregate_func_4247(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_19.f_1[func_2004(bParam0)], iParam1);
}

void func_1334(int iParam0)
{
	var uVar0;
	struct<19> Var1;

	uVar0 = aggregate_func_4507(32768, 8);
	Var1.f_12 = -1;
	Var1.f_12.f_1 = -1;
	Var1.f_14 = 255;
	Var1.f_15 = 255;
	Var1.f_14 = &Global_1273882->f_154[&Global_1273882];
	Var1 = 0;
	Var1.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var1.f_4 = 109;
	aggregate_func_1266(Var1, uVar0, 0, 0);
}

int func_1335(var uParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_100.f_1211.f_6.f_20))
	{
		return 0;
	}
	if (aggregate_func_3027(1))
	{
		return 0;
	}
	iVar0 = Global_1274951->f_33;
	iVar1 = 0;
	if (iVar0 >= 1)
	{
		iVar1 = 19;
	}
	else
	{
		fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar2 <= 0.6f)
		{
			switch (uParam0->f_7)
			{
				case -1498871949:
				case -610395813:
				case 447784640:
					iVar1 = 18;
					break;
				case -818346432:
				case 348064119:
				case 2103594888:
					iVar1 = 17;
					break;
				case -1283370018:
				case -624685730:
				case 1739830455:
				case 1958345007:
					iVar1 = 16;
					break;
			}
		}
		else
		{
			iVar1 = 15;
		}
	}
	if (aggregate_func_938(&(Local_23.f_1), aggregate_func_6661(func_1296(iVar1)), 0, -1, 0, 0))
	{
		return 1;
	}
	return 0;
}

bool func_1337()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = aggregate_func_8491() + 1;
	iVar1 = (iVar0 * Global_1901929->f_295.f_145);
	bVar2 = (iVar1 - NETWORK::GET_CLOUD_TIME_AS_INT());
	return aggregate_func_5207(bVar2, 0, bVar2);
}

int func_1348(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 2037940248;
		case 0:
			return 1397223979;
		case 1:
			return 677707590;
		case 2:
			return -269277617;
		case 3:
			return -1463831630;
		case 4:
			return 2031672089;
		default:
			break;
	}
	return 2037940248;
}

int func_1349()
{
	bool bVar0;
	int iVar1;

	if (!aggregate_func_4349(&(Global_1275329->f_50)))
	{
		return 0;
	}
	bVar0 = aggregate_func_4274(Global_1275329->f_50, -268973591, 0, 1);
	if (aggregate_func_2852(bVar0, 1372968408))
	{
		iVar1 = 1372968408;
	}
	else if (aggregate_func_2852(bVar0, -710171994))
	{
		iVar1 = -710171994;
	}
	else if (aggregate_func_2852(bVar0, 956386416))
	{
		iVar1 = 956386416;
	}
	return iVar1;
}

int func_1350(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (!bParam0)
	{
		bVar0 = func_2011(827714260, 0);
	}
	else
	{
		bVar0 = Global_1274951->f_19;
	}
	bVar1 = aggregate_func_6499(827714260, -915411861, 1, 0, 1, 0);
	if (IntToFloat(bVar0) < (IntToFloat(bVar1) * 0.3f))
	{
		return 0;
	}
	if (IntToFloat(bVar0) > (IntToFloat(bVar1) * 0.7f))
	{
		return 2;
	}
	return 1;
}

bool func_1351(bool bParam0, int iParam1)
{
	return aggregate_func_4240(&(((*Global_1275475)[PLAYER::PLAYER_ID() /*86*/])->f_19.f_1[func_2004(bParam0)]), iParam1);
}

bool func_1384(var uParam0)
{
	bool bVar0;
	struct<173> Var1;

	if (uParam0->f_279 < 0)
	{
		bVar0 = false;
		Var1 = 14;
		Var1.f_4.f_8 = 2;
		Var1.f_4.f_11 = 16;
		Var1.f_4.f_28 = 16;
		Var1.f_4.f_45 = 16;
		Var1.f_4.f_62 = 16;
		Var1.f_4.f_79 = 16;
		Var1.f_4.f_96 = 4;
		Var1.f_4.f_96.f_1.f_1 = 6;
		Var1.f_4.f_96.f_1.f_8.f_1 = 6;
		Var1.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
		Var1.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
		Var1.f_136 = 4;
		Var1.f_136.f_1.f_2 = -1;
		Var1.f_136.f_1.f_3 = -1;
		Var1.f_136.f_1.f_4.f_2 = -1;
		Var1.f_136.f_1.f_4.f_3 = -1;
		Var1.f_136.f_1.f_4.f_4.f_2 = -1;
		Var1.f_136.f_1.f_4.f_4.f_3 = -1;
		Var1.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
		Var1.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
		Var1.f_153 = -1;
		Var1.f_154 = -1;
		Var1.f_155 = 16;
		Var1.f_172 = 16;
		while (aggregate_func_6314(uParam0, bVar0, &Var1))
		{
			if (!aggregate_func_673(aggregate_func_5306(&(uParam0->f_223)), Var1.f_134))
			{
			}
			else
			{
				bVar0++;
			}
		}
		uParam0->f_279 = (bVar0 - 1);
	}
	return uParam0->f_279;
}

void func_1388(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1 = -1;
	Var0 = 2;
	if (bParam0)
	{
		Var0.f_1 = 4;
	}
	else
	{
		Var0.f_1 = 3;
	}
	MISC::_COPY_MEMORY(&(Global_1274951->f_34), &Var0, 2);
	MISC::_COPY_MEMORY(&(Global_1274951->f_36), &uParam1, 4);
}

char[] func_1472(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return "CATALOG_CLOSE_PROMPT_TAG";
		case 0:
			return "CATALOG_TURN_LEFT_PROMPT_TAG";
		case 1:
			return "CATALOG_TURN_RIGHT_PROMPT_TAG";
		case 3:
			return "CATALOG_SELECT_PROMPT_TAG";
		case 4:
			return "CATALOG_HOLD_PROMPT_TAG";
		case 7:
			return "CATALOG_VIEW_PROMPT_TAG";
		case 9:
			return "CATALOG_READ_PROMPT_TAG";
		case 5:
			return "CATALOG_BACK_PROMPT_TAG";
		case 8:
			return "CATALOG_ZOOM_PROMPT_TAG";
	}
	return "";
}

void func_1717(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	bVar3 = bParam1;
	iVar4 = aggregate_func_2827(bVar3);
	iVar5 = 0;
	if (aggregate_func_4577() == 24043185)
	{
		iVar2 = 1;
	}
	if (bParam3)
	{
		iVar5 = 3;
	}
	switch (iVar4)
	{
		case 1297434125:
			if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
				{
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 0 || (uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base"))
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
					}
					else
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1334603721;
					}
					aggregate_func_4743(iVar0, iVar5);
				}
				Jump @3217; //curOff = 253
				if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
				{
				}
				else
				{
					iVar0 = 34;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						bVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == aggregate_func_2827(bVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							aggregate_func_4743(iVar0, iVar5);
						}
					}
					Jump @3217; //curOff = 543
					if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						aggregate_func_4743(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -1473580422))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate_func_2852(bVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (aggregate_func_2089(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, 1583165364))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate_func_2827(bVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								aggregate_func_4743(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -1650340550))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate_func_2827(bVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
						}
						Jump @3217; //curOff = 918
						if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
							aggregate_func_4743(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 20;
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar1, 1090938458)) && aggregate_func_2852(bVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							Jump @3217; //curOff = 1171
							aggregate_func_4743(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							Jump @3217; //curOff = 1454
							aggregate_func_4743(16, iVar5);
							if (aggregate_func_5024(bVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate_func_4743(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -985549034))
								{
									if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
									}
									else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
									}
								}
								iVar0 = 12;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate_func_4743(iVar0, iVar5);
								}
								Jump @3217; //curOff = 1747
								if (aggregate_func_5024(bVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										aggregate_func_4743(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && aggregate_func_2852(bVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
											aggregate_func_4743(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											aggregate_func_4743(iVar0, iVar5);
										}
									}
									Jump @3217; //curOff = 1988
									if (aggregate_func_5024(bVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											aggregate_func_4743(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											bVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (aggregate_func_2852(bVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												aggregate_func_4743(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												bVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate_func_2827(bVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													aggregate_func_4743(iParam2, iVar5);
												}
											}
										}
										Jump @3217; //curOff = 2215
										if (aggregate_func_5024(bVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3217; //curOff = 2439
											if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												bVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((aggregate_func_2852(bVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate_func_2827(bVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												if ((aggregate_func_2852(bVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate_func_2827(bVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												iVar0 = 37;
												if (aggregate_func_2852(bVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
											}
											Jump @3217; //curOff = 2922
											iVar0 = 37;
											if (aggregate_func_2852(bVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3004
											iVar0 = 10;
											if (-525676072 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3068
											iVar0 = 12;
											if (81053684 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3132
											if (!aggregate_func_2852(bVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
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
			switch (aggregate_func_4735(iParam2, 1))
			{
				case -207860920:
					if (aggregate_func_5041(99217379) && aggregate_func_2852(bVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						aggregate_func_4743(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						aggregate_func_4743(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (2056714954 == PED::_0x5FF9A878C3D115B8(&(uParam0->f_1[iVar0 /*3*/]), iVar2, 1))
					{
						if ((bParam1 == &Global_1951131->f_81[iParam2 /*12*/] || aggregate_func_2852(bVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							aggregate_func_4743(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!aggregate_func_5024(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate_func_2852(bVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!aggregate_func_5024(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate_func_2852(bVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					break;
				case -1130352927:
					if (bParam1 == -230310728 || bParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
				case 1367443060:
					if (bParam1 == 1733464892)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
			}
			default:
				break;
	}
}

bool func_1860(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		MISC::SET_BIT(iParam1, 0);
		if (fParam2 > 0f)
		{
			aggregate_func_4283(&(iParam1->f_18));
			return false;
		}
		else if (aggregate_func_4260(&(iParam1->f_18)))
		{
			aggregate_func_4313(&(iParam1->f_18));
			return false;
		}
	}
	if (!aggregate_func_4260(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	return aggregate_func_6121(&(iParam1->f_18), fParam2);
	return true;
}

bool func_1870(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate_func_8361(iParam1, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 == PED::_0x30569F348D126A5A(iParam0))
	{
		return true;
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, false);
		return true;
	}
	return false;
}

int func_1966(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 1:
			iVar1 = 16;
			break;
		case 2:
			iVar1 = 13;
			break;
		case 3:
			iVar1 = 8;
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	return iVar0;
}

bool func_1967(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return true;
	}
	return false;
}

bool func_1968(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return true;
	}
	return false;
}

bool func_1984(int iParam0)
{
	switch (iParam0)
	{
		case 1100375982:
			return 1637396385;
		case 734354744:
			return -750821175;
		case -8716208:
			return 863859481;
		case joaat("joe"):
			return -1564456688;
		case -705903163:
			return -43444905;
		case -190306145:
			return 878149797;
		case -1211851008:
			return -1972063755;
		case 842749101:
			return 1140320446;
		case -384872762:
			return -928778254;
		case 220113328:
			return -291799454;
		case -920491224:
			return 575720194;
		case 539824333:
			return 1886703229;
		case 1309348282:
			return -1891887312;
		case -701311458:
			return -1521318110;
		case 2048329431:
			return 1231714993;
		case -1601260627:
			return -197170169;
		case joaat("alden"):
			return -1157925372;
		case -604384854:
			return -853455962;
		case -399874304:
			return -1060127263;
		case -743855838:
			return -1490734701;
		case 1782409743:
			return 1685495859;
		case -1801643148:
			return -583455445;
		case -936554981:
			return -567552001;
		case 1693634754:
			return -950321673;
		case 1445116843:
			return 664333876;
		case -1616419296:
			return 515385649;
		case -587679385:
			return 391853669;
		case 279467723:
			return -1520322625;
		case 1301079447:
			return 464168739;
		case 314334361:
			return 1683882639;
		case 92524177:
			return -95879657;
		case 1346815252:
			return 1757204629;
		case -667711246:
			return 2060758004;
		case 2132950130:
			return -177810373;
		case 1766283257:
			return 1442898590;
		case -408236271:
			return 1174971643;
		default:
			break;
	}
	return false;
}

int func_2004(bool bParam0)
{
	switch (bParam0)
	{
		case 1958345007:
			return 0;
		case 348064119:
			return 1;
		case -818346432:
			return 2;
		case -610395813:
			return 3;
		case 2103594888:
			return 4;
		case -624685730:
			return 5;
		case 1739830455:
			return 6;
		case -1498871949:
			return 7;
		case 447784640:
			return 8;
		case -1283370018:
			return 9;
	}
	return -1;
}

bool func_2011(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (bParam0 == 0)
	{
		bParam0 = aggregate_func_5326();
	}
	if (!aggregate_func_2823(bParam0, 0))
	{
		return -1;
	}
	bVar0 = false;
	bVar1 = aggregate_func_5209(bParam0, 0, 1, -1, 1);
	bVar2 = aggregate_func_6499(bParam0, bVar1, 1, 0, 1, 0);
	if (aggregate_func_3099(bParam0, &bVar0, &bVar1, bParam1))
	{
		bVar3 = aggregate_func_5796(bVar0, bVar1, 0, 1);
		if (bVar3 < bVar2)
		{
			return bVar3;
		}
	}
	return bVar2;
}

void func_2061(var uParam0, int iParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	struct<173> Var2;
	int iVar191;

	bVar0 = false;
	iVar1 = iParam1;
	Var2 = 14;
	Var2.f_4.f_8 = 2;
	Var2.f_4.f_11 = 16;
	Var2.f_4.f_28 = 16;
	Var2.f_4.f_45 = 16;
	Var2.f_4.f_62 = 16;
	Var2.f_4.f_79 = 16;
	Var2.f_4.f_96 = 4;
	Var2.f_4.f_96.f_1.f_1 = 6;
	Var2.f_4.f_96.f_1.f_8.f_1 = 6;
	Var2.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var2.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var2.f_136 = 4;
	Var2.f_136.f_1.f_2 = -1;
	Var2.f_136.f_1.f_3 = -1;
	Var2.f_136.f_1.f_4.f_2 = -1;
	Var2.f_136.f_1.f_4.f_3 = -1;
	Var2.f_136.f_1.f_4.f_4.f_2 = -1;
	Var2.f_136.f_1.f_4.f_4.f_3 = -1;
	Var2.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var2.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var2.f_153 = -1;
	Var2.f_154 = -1;
	Var2.f_155 = 16;
	Var2.f_172 = 16;
	while (aggregate_func_6314(uParam0, bVar0, &Var2))
	{
		if (Var2 != 1 && Var2 != 15)
		{
			iVar191 = 0;
			while (iVar191 < iParam1)
			{
				if (iParam3[iVar191] == -1 && Var2.f_134 == uParam2[iVar191])
				{
					(*iParam3)[iVar191] = Var2.f_3;
					iVar1 = (iVar1 - 1);
				}
				iVar191++;
			}
			if (iVar1 == 0)
			{
				return;
			}
		}
		bVar0++;
	}
}

bool func_2339(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar2 = 20;
	iVar3 = 35;
	*iParam2 = 0;
	if (aggregate_func_4734(64))
	{
		*iParam2 = 1259720784; /* GXTEntry: "Your current outfit cannot be altered." */
		return false;
	}
	if (aggregate_func_2951(&(Global_1951131->f_1657.f_1[34 /*3*/])) != 0)
	{
		*iParam2 = 1676404845; /* GXTEntry: "Your outfit does not support this item." */
		return false;
	}
	switch (bParam1)
	{
		case 3:
			iVar0 = 25;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/])
			{
				*iParam2 = 2016241289;
				return false;
			}
			if ((Global_1951131->f_1461.f_1[bParam1 /*9*/])->f_7 <= 1)
			{
				*iParam2 = 1391009982;
				return false;
			}
			break;
		case 4:
			iVar0 = 18;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/] || 698653232 == aggregate_func_2827(&(Global_1951131->f_1657.f_1[iVar0 /*3*/])))
			{
				*iParam2 = 524717989;
				return false;
			}
			iVar0 = 35;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate_func_2827(&(Global_1951131->f_1657.f_1[iVar0 /*3*/])))
			{
				*iParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			iVar0 = 34;
			if (aggregate_func_2852(&(Global_1951131->f_1657.f_1[iVar0 /*3*/]), 1583165364))
			{
				*iParam2 = -1034452951; /* GXTEntry: "Your pants do not support this." */
				return false;
			}
			if ((Global_1951131->f_1461.f_1[bParam1 /*9*/])->f_7 <= 1)
			{
				*iParam2 = 710806085;
				return false;
			}
			Jump @1118; //curOff = 403
			if (PED::_0xFB4891BD7578CDC1(iParam0, 2056714954))
			{
				*iParam2 = -1978934058; /* GXTEntry: "Your Collar cannot be modified while wearing a necktie." */
				return false;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, 694822476))
			{
				*iParam2 = 522400877; /* GXTEntry: "Your shirt does not support collar modification." */
				return false;
			}
			iVar0 = 12;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
			{
				*iParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			iVar0 = 20;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(&(Global_1951131->f_1657.f_1[iVar0 /*3*/]), -985549034))
			{
				*iParam2 = -15902206;
				return false;
			}
			iVar0 = 18;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(&(Global_1951131->f_1657.f_1[iVar0 /*3*/]), -985549034))
			{
				*iParam2 = -651987738;
				return false;
			}
			iVar0 = 16;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(&(Global_1951131->f_1657.f_1[iVar0 /*3*/]), -985549034))
			{
				*iParam2 = 522400877; /* GXTEntry: "Your shirt does not support collar modification." */
				return false;
			}
			if ((Global_1951131->f_1461.f_1[bParam1 /*9*/])->f_7 <= 1)
			{
				*iParam2 = -1379615715;
				return false;
			}
			return true;
			bVar1 = &Global_1951131->f_1657.f_1[iVar2 /*3*/];
			if (&Global_1951131->f_1657.f_1[iVar2 /*3*/] != &Global_1951131->f_81[iVar2 /*12*/] && aggregate_func_2827(bVar1) == 1868067663)
			{
				*iParam2 = -523289378; /* GXTEntry: "Sleeves cannot be modified while wearing a coat." */
				return false;
			}
			iVar0 = 21;
			bVar1 = &Global_1951131->f_1657.f_1[iVar0 /*3*/];
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2827(bVar1) == 1297434125)
			{
				*iParam2 = 13905014; /* GXTEntry: "Sleeves cannot be modified while wearing gauntlets." */
				return false;
			}
			if ((Global_1951131->f_1461.f_1[bParam1 /*9*/])->f_7 <= 1)
			{
				*iParam2 = -1379615715;
				return false;
			}
			return true;
			iVar0 = 36;
			if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] == &Global_1951131->f_81[iVar0 /*12*/])
			{
				*iParam2 = -279809718;
				return false;
			}
			iVar0 = 34;
			if (aggregate_func_2852(&(Global_1951131->f_1657.f_1[iVar0 /*3*/]), 626143778))
			{
				*iParam2 = 1271245555; /* GXTEntry: "Your pants do not support modification." */
				return false;
			}
			if (684307653 == aggregate_func_2827(&(Global_1951131->f_1657.f_1[iVar0 /*3*/])))
			{
				*iParam2 = 749926372; /* GXTEntry: "Your skirt does not support modification." */
				return false;
			}
			if (&Global_1951131->f_1657.f_1[iVar3 /*3*/] != &Global_1951131->f_81[iVar3 /*12*/])
			{
				*iParam2 = -874441321; /* GXTEntry: "Boots cannot be modified while wearing chaps." */
				return false;
			}
			if ((Global_1951131->f_1461.f_1[bParam1 /*9*/])->f_7 <= 1)
			{
				*iParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
				return false;
			}
			return true;
			return true;
		}

int func_3066(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case -766600612: /* GXTEntry: "Traveling Opulence" */
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 158;
				case 1421598733: /* GXTEntry: "Covered" */
					return 174;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 182;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 166;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 190;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 198;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 150;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 22;
				case 12:
					return 4;
				case 13:
					return 12;
				case 9:
					return 41;
				case 10:
					return 33;
				case 8:
					return 49;
				default:
					break;
			}
			Jump @1217; //curOff = 245
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 159;
				case 1421598733: /* GXTEntry: "Covered" */
					return 175;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 183;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 167;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 191;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 199;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 151;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 23;
				case 12:
					return 5;
				case 13:
					return 13;
				case 9:
					return 42;
				case 10:
					return 34;
				case 8:
					return 50;
				default:
					break;
			}
			Jump @1217; //curOff = 406
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 160;
				case 1421598733: /* GXTEntry: "Covered" */
					return 176;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 184;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 168;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 192;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 200;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 152;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 24;
				case 12:
					return 6;
				case 13:
					return 14;
				case 9:
					return 43;
				case 10:
					return 35;
				case 8:
					return 51;
				default:
					break;
			}
			Jump @1217; //curOff = 567
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 161;
				case 1421598733: /* GXTEntry: "Covered" */
					return 177;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 185;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 169;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 193;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 201;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 153;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 25;
				case 12:
					return 7;
				case 13:
					return 15;
				case 9:
					return 44;
				case 10:
					return 36;
				case 8:
					return 52;
				default:
					break;
			}
			Jump @1217; //curOff = 728
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 162;
				case 1421598733: /* GXTEntry: "Covered" */
					return 178;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 186;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 170;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 194;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 202;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 154;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 26;
				case 12:
					return 8;
				case 13:
					return 16;
				case 9:
					return 45;
				case 10:
					return 37;
				case 8:
					return 53;
				default:
					break;
			}
			Jump @1217; //curOff = 890
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 163;
				case 1421598733: /* GXTEntry: "Covered" */
					return 179;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 187;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 171;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 195;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 203;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 155;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 27;
				case 12:
					return 9;
				case 13:
					return 17;
				case 9:
					return 46;
				case 10:
					return 38;
				case 8:
					return 54;
				default:
					break;
			}
			Jump @1217; //curOff = 1052
			switch (bParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 164;
				case 1421598733: /* GXTEntry: "Covered" */
					return 180;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 188;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 172;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 196;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 204;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 156;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 28;
				case 12:
					return 10;
				case 13:
					return 18;
				case 9:
					return 47;
				case 10:
					return 39;
				case 8:
					return 55;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 21;
				case 12:
					return 3;
				case 10:
					return 31;
				case 9:
					return 40;
				case 8:
					return 56;
				default:
					break;
			}
			switch (bParam1)
			{
				case -1411330704: /* GXTEntry: "Fast Travel Post" */
					return 60;
				case -428390721: /* GXTEntry: "Butcher Table" */
					return 61;
				case 2073294138: /* GXTEntry: "Weapons Locker" */
					return 66;
				case -1490861779: /* GXTEntry: "Large Delivery Wagon" */
					return 62;
				case 1476279059: /* GXTEntry: "Medium Delivery Wagon" */
					return 63;
				case 913131737: /* GXTEntry: "Small Delivery Wagon" */
					return 64;
				case 1642014154: /* GXTEntry: "Stew Pot" */
					return 65;
				case -1396511102: /* GXTEntry: "Deluxe Campfire" */
					return 2;
				case -1991362080: /* GXTEntry: "Black & Tan" */
				case -1535250369: /* GXTEntry: "Tan Brindle" */
				case 914789466: /* GXTEntry: "Black & White" */
					return 67;
				case 55994234: /* GXTEntry: "Dark Brown" */
				case 262209551: /* GXTEntry: "Dead Grass" */
				case 769866899: /* GXTEntry: "Brown" */
					return 68;
				case -429885089: /* GXTEntry: "Yellow" */
				case -289273358: /* GXTEntry: "Chocolate" */
				case 536669287: /* GXTEntry: "Black" */
					return 69;
				case 952368108:
					return 70;
				case 1671341100: /* GXTEntry: "Aqua" */
					return 71;
				case -1336962048: /* GXTEntry: "Blue" */
					return 72;
				case 1262519305: /* GXTEntry: "Green" */
					return 73;
				case -510449329: /* GXTEntry: "Orange" */
					return 74;
				case -474096794: /* GXTEntry: "Pink" */
					return 75;
				case 2022645972: /* GXTEntry: "Purple" */
					return 76;
				case -1867469444: /* GXTEntry: "Red" */
					return 77;
				case 81790578: /* GXTEntry: "Yellow" */
					return 78;
				case 42875037: /* GXTEntry: "White" */
					return 79;
				case 1321477211: /* GXTEntry: "Alligator" */
					return 80;
				case -1970354802: /* GXTEntry: "Bear" */
					return 81;
				case 1915847437: /* GXTEntry: "Buck" */
					return 82;
				case -418668047: /* GXTEntry: "Coyote" */
					return 83;
				case -1490747347: /* GXTEntry: "Eagle" */
					return 84;
				case 1853960588: /* GXTEntry: "Gila Monster" */
					return 85;
				case -669648504: /* GXTEntry: "Morgan" */
					return 86;
				case 2121739823:
					return 87;
				case -801482238: /* GXTEntry: "Tennessee Walker" */
					return 88;
				case -1535222926: /* GXTEntry: "Vulture" */
					return 89;
				case 1101681612: /* GXTEntry: "Baltz" */
					return 90;
				case 1687066518: /* GXTEntry: "Clam Juice" */
					return 91;
				case 846374071: /* GXTEntry: "Festa" */
					return 92;
				case 1173221821: /* GXTEntry: "Gelatin" */
					return 93;
				case -872063735: /* GXTEntry: "Jolly Jacks" */
					return 94;
				case 1659150076: /* GXTEntry: "Cola" */
					return 95;
				case 495709860: /* GXTEntry: "Lucifer\'s Cradle" */
					return 96;
				case -1981287626: /* GXTEntry: "Old Blood Eyes" */
					return 97;
				case -373605683: /* GXTEntry: "Prairie Moon" */
					return 98;
				case -1030438211: /* GXTEntry: "Schiffer" */
					return 99;
				case -1413081099: /* GXTEntry: "Ace" */
					return 100;
				case -1291835985: /* GXTEntry: "Ambarino State" */
					return 101;
				case 1051756150: /* GXTEntry: "Anchor" */
					return 102;
				case -1568446057: /* GXTEntry: "Guarma" */
					return 103;
				case 271439292: /* GXTEntry: "Lemoyne State" */
					return 104;
				case -132276375: /* GXTEntry: "New Hanover State" */
					return 105;
				case -908539768: /* GXTEntry: "Skulls" */
					return 106;
				case 1092029674:
					return 107;
				case -1958953278: /* GXTEntry: "Saint Denis" */
					return 108;
				case 733303292: /* GXTEntry: "West Elizabeth State" */
					return 109;
				case -144166169: /* GXTEntry: "Standard 1" */
					return 110;
				case -492687949: /* GXTEntry: "Standard 2" */
					return 111;
				case -874512337: /* GXTEntry: "Standard 3" */
					return 112;
				case -415385882: /* GXTEntry: "Standard 4" */
					return 113;
				case -797537960: /* GXTEntry: "Standard 5" */
					return 114;
				case -941076000: /* GXTEntry: "Traveling Opulence 1" */
					return 119;
				case -1567174399: /* GXTEntry: "Traveling Opulence 2" */
					return 120;
				case -763924656: /* GXTEntry: "The Hobo Life 1" */
					return 121;
				case 1928558912: /* GXTEntry: "The Hobo Life 2" */
					return 122;
				case 524939438: /* GXTEntry: "Military Surplus 1" */
					return 123;
				case -1949362405: /* GXTEntry: "Military Surplus 2" */
					return 124;
				case 908640876: /* GXTEntry: "Survivor 1" */
					return 125;
				case 501275986: /* GXTEntry: "Survivor 2" */
					return 126;
				case 1257532163: /* GXTEntry: "Bounty Hunter" */
					return 127;
				case 1160088249: /* GXTEntry: "Collector" */
					return 128;
				case -267422042: /* GXTEntry: "Trader" */
					return 129;
				case 800085008: /* GXTEntry: "Bandito" */
					return 130;
				case 738479284: /* GXTEntry: "Veteran" */
					return 131;
				case 900620296: /* GXTEntry: "Trapper" */
					return 132;
				case 1054660175:
					return 115;
				case -2043878162:
					return 116;
				case 594616184:
					return 117;
				case -92189287:
					return 118;
				case -811830793: /* GXTEntry: "Bedroll" */
					return 157;
				case 1421598733: /* GXTEntry: "Covered" */
					return 173;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 181;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 165;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 189;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 197;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 149;
				default:
					break;
			}
			return 0;
		}

int func_3354(bool bParam0)
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
		case 1595322723: /* GXTEntry: "Poor Skinned Muskrat Carcass" */
			return -1315697778 /* GXTEntry: "Poor Muskrat Carcass" */;
		case 784918835: /* GXTEntry: "Good Skinned Opossum Carcass" */
			return -1772126340 /* GXTEntry: "Good Opossum Carcass" */;
		case -676310905: /* GXTEntry: "Perfect Skinned Opossum Carcass" */
			return -935543049 /* GXTEntry: "Perfect Opossum Carcass" */;
		case -1719545959: /* GXTEntry: "Poor Skinned Opossum Carcass" */
			return 1772544356 /* GXTEntry: "Poor Opossum Carcass" */;
		case -2142423934: /* GXTEntry: "Good Plucked Owl Carcass" */
			return -266273535 /* GXTEntry: "Good Owl Carcass" */;
		case 747751566: /* GXTEntry: "Perfect Plucked Owl Carcass" */
			return -1670544626 /* GXTEntry: "Perfect Owl Carcass" */;
		case -1942682403: /* GXTEntry: "Poor Plucked Owl Carcass" */
			return 1290960696 /* GXTEntry: "Poor Owl Carcass" */;
		case 1018433784: /* GXTEntry: "Good Skinned Panther Carcass" */
			return 1913571052 /* GXTEntry: "Good Panther Carcass" */;
		case -796185392: /* GXTEntry: "Perfect Skinned Panther Carcass" */
			return 1717601520 /* GXTEntry: "Perfect Panther Carcass" */;
		case -49549406: /* GXTEntry: "Poor Skinned Panther Carcass" */
			return 430397370 /* GXTEntry: "Poor Panther Carcass" */;
		case 857788498: /* GXTEntry: "Good Plucked Parrot Carcass" */
			return 16287711 /* GXTEntry: "Good Parrot Carcass" */;
		case 1223148871: /* GXTEntry: "Perfect Plucked Parrot Carcass" */
			return -1356230367 /* GXTEntry: "Perfect Parrot Carcass" */;
		case 939407236: /* GXTEntry: "Poor Plucked Parrot Carcass" */
			return 1417331079 /* GXTEntry: "Poor Parrot Carcass" */;
		case 1608778431: /* GXTEntry: "Good Plucked Pelican Carcass" */
			return -884124246 /* GXTEntry: "Good Pelican Carcass" */;
		case -2033821082: /* GXTEntry: "Perfect Plucked Pelican Carcass" */
			return 1884610748 /* GXTEntry: "Perfect Pelican Carcass" */;
		case -993340234: /* GXTEntry: "Poor Plucked Pelican Carcass" */
			return 746558492 /* GXTEntry: "Poor Pelican Carcass" */;
		case -1861062075: /* GXTEntry: "Good Skinned Pheasant Carcass" */
			return -892811627 /* GXTEntry: "Good Pheasant Carcass" */;
		case 1645001514: /* GXTEntry: "Perfect Skinned Pheasant Carcass" */
			return -2040522845 /* GXTEntry: "Perfect Pheasant Carcass" */;
		case 782371031: /* GXTEntry: "Poor Skinned Pheasant Carcass" */
			return -1224510844 /* GXTEntry: "Poor Pheasant Carcass" */;
		case 1255529169: /* GXTEntry: "Good Skinned Pig Carcass" */
			return 1334837390 /* GXTEntry: "Good Pig Carcass" */;
		case 70898308: /* GXTEntry: "Perfect Skinned Pig Carcass" */
			return 339620522 /* GXTEntry: "Perfect Pig Carcass" */;
		case -1050350982: /* GXTEntry: "Poor Skinned Pig Carcass" */
			return 1770451033 /* GXTEntry: "Poor Pig Carcass" */;
		case 581781784: /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */
			return 756657535 /* GXTEntry: "Good Prairie Chicken Carcass" */;
		case -1363330863: /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */
			return 862898895 /* GXTEntry: "Perfect Prairie Chicken Carcass" */;
		case -1780911288: /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */
			return 1997845858 /* GXTEntry: "Poor Prairie Chicken Carcass" */;
		case 1018306802: /* GXTEntry: "Good Skinned Pronghorn Carcass" */
			return -1930144509 /* GXTEntry: "Good Pronghorn Carcass" */;
		case 1615521415: /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */
			return 1846915545 /* GXTEntry: "Perfect Pronghorn Carcass" */;
		case -1499066338: /* GXTEntry: "Poor Skinned Pronghorn Carcass" */
			return -1816929509 /* GXTEntry: "Poor Pronghorn Carcass" */;
		case 1711081908: /* GXTEntry: "Good Skinned Rabbit Carcass" */
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

