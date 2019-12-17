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
	struct<2> Local_25 = { 0, 0 } ;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == shop_bait.__EntryFunction__

void func_41(var uParam0)
{
	aggregate.shop_camp_lockbox.func_332(uParam0, 0);
	aggregate.shop_bait.func_334(uParam0, 0, 60925);
	aggregate.shop_camp_butchertable.func_338(uParam0, 0, 61019);
}

void func_90(var uParam0, bool bParam1)
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		if (aggregate.net_camp.func_559(uParam0->f_3))
		{
			aggregate.fme_animal_tagging.func_655(1, 1);
		}
		else
		{
			aggregate.fme_animal_tagging.func_655(1, 0);
		}
		if (func_367(uParam0))
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED("train_summon"))
			{
				if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1337352009) <= 0)
				{
					SCRIPTS::START_NEW_SCRIPT("train_summon", 1024);
				}
			}
			else
			{
				SCRIPTS::REQUEST_SCRIPT("train_summon");
			}
		}
	}
}

char* func_115(var uParam0)
{
	int iVar0;
	int iVar1;

	if (*uParam0 == 38)
	{
		aggregate.saloon_dining.func_659();
		return aggregate.blackwater.func_268(*(Global_1957543->f_319[38 /*8*/]));
	}
	if (*uParam0 == 15)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[15 /*8*/]))
		{
			aggregate.saloon_dining.func_661(15, uParam0->f_4);
		}
		return aggregate.blackwater.func_268(*(Global_1957543->f_319[15 /*8*/]));
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
	iVar0 = aggregate.annesburg.func_122();
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
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				case 86:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
				case 78:
					return "0710_U_M_M_ValBarber_01";
				case 79:
					return "0475_U_M_M_ValBartender_01";
				case 91:
					return "0686_U_M_O_ValBartender_01";
				case 82:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate.benedictpoint.func_124(81);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
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
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
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
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				case 94:
					return "1038_U_F_M_VhTBartender_01";
				case 96:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
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
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
				case 8:
					return "0821_S_M_M_Barber_01_WHITE_01";
				case 14:
				case 15:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				case 10:
					return "0080_U_M_O_BlWBartender_01";
				case 12:
					return "1099_U_M_O_BLWPhotographer_01";
				case 9:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate.benedictpoint.func_124(40);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
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
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				case 70:
					return "1039_U_M_M_StrWelcomeCenter_01";
				case 71:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
				case 68:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate.benedictpoint.func_124(26);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
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
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
				case 51:
				case 52:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				case 54:
					return "0311_U_M_M_NbxBartender_01";
				case 56:
					return "0312_U_M_M_NbxBartender_02";
				case 44:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate.benedictpoint.func_124(5);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
				case 60:
					return "1100_U_M_M_SDPhotographer_01";
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2457; //curOff = 1471
			switch (uParam0->f_1)
			{
				case 33:
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
					{
						iVar1 = aggregate.net_fetch.func_4672(uParam0->f_4, 0);
						if (aggregate.aberdeenpigfarm.func_85(iVar1) && aggregate.barcustomer_interaction.func_41(iVar1) == joaat("cs_mrpearson"))
						{
							return "PEARSON_SHOPKEEPER";
						}
					}
					if (aggregate.aberdeenpigfarm.func_123())
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
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				case 31:
					return "0694_U_M_M_RhdGenStoreOwner_02";
				case 36:
					return "0397_U_M_M_RhdBartender_01";
				case 30:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[10 /*8*/]))
					{
						aggregate.benedictpoint.func_124(111);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
				default:
					return "SHOPKEEPER_TEST_PED";
			}
			Jump @2457; //curOff = 1723
			switch (uParam0->f_1)
			{
				case 99:
					return "1036_U_M_M_WalGeneralStoreOwner_01";
				case 100:
				case 101:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2457; //curOff = 1811
			switch (uParam0->f_1)
			{
				case 41:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2457; //curOff = 1879
			switch (uParam0->f_1)
			{
				case 22:
					return "EMR_Son1";
				case 24:
				case 25:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2457; //curOff = 1967
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
						aggregate.benedictpoint.func_124(121);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[10 /*8*/]));
				case 107:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[9 /*8*/]))
					{
						aggregate.benedictpoint.func_126();
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[9 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2457; //curOff = 2124
			switch (uParam0->f_1)
			{
				case 108:
					return "1076_U_M_M_ArmGeneralStoreOwner_01";
				case 110:
					return "1077_U_M_O_ArmBartender_01";
				case 111:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2457; //curOff = 2219
			switch (uParam0->f_1)
			{
				case 26:
					return "0216_U_F_M_LagMother_01";
				default:
					break;
			}
			return "0216_U_F_M_LagMother_01";
			Jump @2457; //curOff = 2252
			switch (uParam0->f_1)
			{
				case 117:
				case 118:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2457; //curOff = 2327
			switch (uParam0->f_1)
			{
				case 27:
				case 28:
					if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[2 /*8*/]))
					{
						aggregate.benedictpoint.func_123(iVar0);
					}
					return aggregate.blackwater.func_268(*(Global_1957543->f_319[2 /*8*/]));
				default:
					break;
			}
			return "SHOPKEEPER_TEST_PED";
			Jump @2457; //curOff = 2402
			if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[11 /*8*/]))
			{
				aggregate.saloon_dining.func_667();
			}
			return aggregate.blackwater.func_268(*(Global_1957543->f_319[11 /*8*/]));
			Jump @2457; //curOff = 2447
			return "SHOPKEEPER_TEST_PED";
			return "SHOPKEEPER_TEST_PED";
		}

bool func_316(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	bool bVar0;

	if (aggregate.annesburg.func_121(vParam3))
	{
		return false;
	}
	if (aggregate.annesburg.func_121(vParam6))
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
	bVar0 = (MISC::IS_ORBIS_VERSION() && aggregate.shop_bait.func_724(iParam2));
	if (iParam1 == 6 || iParam1 == 48)
	{
		bVar0 = false;
	}
	if (bVar0 && aggregate.mp_intro.func_1946(aggregate.shop_bait.func_725(iParam2)))
	{
		if (!func_725(&(uParam0->f_4), iParam1, iParam2, aggregate.shop_bait.func_725(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_726(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate.camera_item.func_77(&(uParam0->f_4), 135920);
	aggregate.camera_item.func_77(&(uParam0->f_4), 135957);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 135985);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 136520);
	uParam0->f_1746 = iParam1;
	uParam0->f_1747 = iParam2;
	uParam0->f_1776 = iParam10;
	uParam0->f_1777 = iParam11;
	uParam0->f_1751 = { vParam3 };
	uParam0->f_1754 = { vParam6 };
	uParam0->f_1768 = iParam9;
	aggregate.interactive_campfire.func_44(uParam0, 1);
	return true;
}

int func_333(var uParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = aggregate.fme_animal_tagging.func_257();
	bVar1 = aggregate.shop_bait.func_562(bVar0, 0, 1, 0, 1);
	if (!aggregate.fme_animal_tagging.func_1400(bVar1))
	{
		return 0;
	}
	return 1;
}

int func_335(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	bool bVar2;

	bVar2 = aggregate.fme_animal_tagging.func_257();
	sVar1 = MISC::_CREATE_VAR_STRING(2, "SHOP_BUY_TICKET_PRICE", aggregate.shop_bait.func_562(bVar2, 0, 1, 0, 1));
	iVar0 = aggregate.binoculars.func_24(sVar1, iParam1, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
	return iVar0;
}

bool func_367(var uParam0)
{
	if (!uParam0->f_2047.f_3)
	{
		return false;
	}
	else
	{
		if (aggregate.saloon_dining.func_455(&(uParam0->f_2421)))
		{
			func_771(uParam0, 2, 1);
			aggregate.saloon_dining.func_473(&(uParam0->f_2421));
		}
		else
		{
			func_771(uParam0, 4, 1);
			aggregate.saloon_dining.func_473(&(uParam0->f_2421));
		}
		if (func_772(uParam0, 2))
		{
			return false;
		}
	}
	return false;
	if (Global_1915170->f_20136)
	{
		return false;
	}
	return true;
}

bool func_384(var uParam0, var uParam1)
{
	bool bVar0;

	bVar0 = aggregate.fme_animal_tagging.func_257();
	if (func_776(uParam0, bVar0, -1, 1, 0))
	{
	}
	return true;
}

void func_695(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate.doc_book.func_307() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1024(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate.mp_intro.func_1329(uParam0, 191422);
			aggregate.mp_intro.func_1329(uParam0, 192342);
			aggregate.mp_intro.func_1329(uParam0, 192942);
			aggregate.mp_intro.func_1329(uParam0, 193236);
			aggregate.mp_intro.func_1329(uParam0, 193439);
			aggregate.camera_item.func_77(uParam0, uParam0->f_2371.f_10);
			aggregate.mp_intro.func_1340(uParam0, aggregate.mp_intro.func_1339(&(uParam0->f_167.f_1778)));
			MISC::SET_BIT(&(uParam0->f_2371.f_9), 1);
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 2))
		{
			if (aggregate.mp_intro.func_1341(uParam0))
			{
				MISC::SET_BIT(&(uParam0->f_2371.f_9), 2);
			}
		}
	}
}

bool func_725(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
	if (!aggregate.mp_intro.func_1707(bParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1287 = 1;
	uParam0->f_1288 = bParam3;
	uParam0->f_1279 = 215877;
	uParam0->f_1280 = 215886;
	uParam0->f_1281 = 215895;
	uParam0->f_1282 = 215895;
	uParam0->f_222 = iParam5;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

bool func_726(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (!aggregate.mp_intro.func_1705(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1279 = 215877;
	uParam0->f_1280 = 215886;
	uParam0->f_1281 = 215895;
	uParam0->f_1282 = 215895;
	uParam0->f_222 = iParam4;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

int func_771(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_2421.f_44 = func_1194(iParam1);
	if (bParam2)
	{
		if (aggregate.fme_escaped_convicts.func_408(iParam1))
		{
			return 0;
		}
	}
	if (!func_772(uParam0, -1))
	{
		aggregate.saloon_dining.func_463(&(uParam0->f_2421), uParam0->f_2421.f_44);
		aggregate.fme_wreckage.func_1274(iParam1);
		aggregate.barcustomer_interaction.func_50(&(Local_25.f_1));
		return 1;
	}
	return 0;
}

bool func_772(var uParam0, int iParam1)
{
	if (!aggregate.barcustomer_interaction.func_42(&(Local_25.f_1)))
	{
		aggregate.barcustomer_interaction.func_25(&(Local_25.f_1), 1);
	}
	if (iParam1 >= 0)
	{
		if (aggregate.broom_scenario.func_29(&(Local_25.f_1)) < IntToFloat(iParam1))
		{
			return true;
		}
	}
	if (aggregate.saloon_dining.func_297(uParam0->f_2421.f_4))
	{
		return true;
	}
	return false;
}

bool func_776(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	var uVar6[45];
	int iVar52;
	int iVar53;
	bool bVar54;
	int iVar55;
	int iVar56;

	if (!aggregate.bandana.func_30(bParam1, 0))
	{
		return false;
	}
	bVar0 = bParam1;
	bVar1 = true;
	if (aggregate.mp_intro.func_1680(&bVar0))
	{
		bVar1 = false;
	}
	if (aggregate.bandana.func_58(bParam1) == joaat("ammo") && aggregate.bandana.func_11(bParam1, -1588156645))
	{
		bVar1 = false;
	}
	bVar2 = aggregate.shop_bait.func_562(bParam1, 0, 1, 0, 1);
	if (iParam2 != -1)
	{
		bVar2 = iParam2;
	}
	if (!aggregate.fme_animal_tagging.func_1400(bVar2))
	{
		aggregate.net_main_offline.func_312("SHOP_H_TOO_POOR", 10000, 0, 0, 0, 1);
		return false;
	}
	if (aggregate.bandana.func_30(aggregate.mp_intro.func_3048(uParam0->f_4), 0))
	{
		if (bParam1 != aggregate.mp_intro.func_3048(uParam0->f_4))
		{
			if (!aggregate.fme_animal_tagging.func_1400((bVar2 + aggregate.shop_bait.func_562(aggregate.mp_intro.func_3048(uParam0->f_4), 0, 1, 0, 1))))
			{
				return false;
			}
		}
	}
	bVar3 = false;
	if (!aggregate.mp_freemode_tutorial.func_753(bParam1, -915411861, &bVar3, 0))
	{
		bVar3 = true;
	}
	if (uParam0->f_167.f_1774 > 1)
	{
		bVar3 = (bVar3 * uParam0->f_167.f_1774);
		bVar2 = (bVar2 * uParam0->f_167.f_1774);
	}
	if (bParam3)
	{
		if (aggregate.long_update.func_603(bVar0, 0))
		{
			aggregate.net_main_offline.func_312("SHOP_H_MAX_ITEM", 10000, 0, 0, 0, 1);
			return false;
		}
	}
	iVar5 = aggregate.bandana.func_58(bVar0);
	if (iVar5 == joaat("horse"))
	{
	}
	else if (iVar5 == -1977020088)
	{
	}
	else if (iVar5 == joaat("clothing"))
	{
		if (bParam3 && !aggregate.mp_intro.func_377(bParam1, bVar3, 1, 0, 1, 1248274121, 0, 0, 0, 0))
		{
			return false;
		}
		if (aggregate.mp_intro.func_2423(bParam1))
		{
			if (aggregate.mp_intro.func_3049(bParam1))
			{
				iVar52 = aggregate.mp_intro.func_3050(bParam1, &uVar6);
				iVar53 = 0;
				while (iVar53 < iVar52)
				{
					if (!aggregate.binoculars.func_32(&(uVar6[iVar53]), 1) && !aggregate.mp_intro.func_377(&(uVar6[iVar53]), 1, 1, 0, 0, 1248274121, 0, 0, 0, 0))
					{
						return false;
					}
					iVar53++;
				}
			}
		}
		else if (uParam0->f_3 == 15)
		{
			aggregate.mp_intro.func_3051(bParam1);
		}
		else if (uParam0->f_3 == 6)
		{
		}
	}
	else if (aggregate.mp_intro.func_3052(bParam1))
	{
		if (iVar5 == joaat("ammo"))
		{
			iVar4 = aggregate.bandana.func_80(bParam1, 0, 0, 0);
		}
		if (!aggregate.mp_intro.func_377(bParam1, bVar3, 1, 0, 1, 1248274121, 0, 0, 0, 0))
		{
			return false;
		}
		else if (aggregate.doc_book.func_158(bParam1))
		{
			if (!aggregate.doc_book.func_173(bParam1))
			{
				aggregate.doc_book.func_92(bParam1);
			}
		}
	}
	else if (aggregate.dynamic_craft_scenario.func_345(bParam1))
	{
		bVar54 = bParam1;
		if (!aggregate.mp_intro.func_377(bVar54, bVar3, 1, 0, 1, 1248274121, 0, 0, 0, 0))
		{
			return false;
		}
	}
	else if (bParam3)
	{
		if (!aggregate.mp_intro.func_377(bParam1, 1, 1, 0, 1, 1248274121, 0, 0, 0, 0))
		{
			return false;
		}
	}
	if (aggregate.aberdeenpigfarm.func_167(uParam0->f_4, 262144))
	{
		aggregate.aberdeenpigfarm.func_169(uParam0->f_4, 262144);
	}
	aggregate.mp_intro.func_2806(bVar2, 0, 0, 0, 0);
	iVar55 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(bVar0))
	{
		iVar55 = 1;
	}
	if (bVar1)
	{
		if (bParam4 != 0)
		{
			aggregate.fm_mission_controller.func_1645(bParam4, bVar3, 0, 1, iVar55, 0, 0);
		}
		else
		{
			if (iVar5 == joaat("ammo"))
			{
				bVar3 = aggregate.mp_intro.func_999(bVar3, 0, (aggregate.fishing_core.func_521(bParam1, 0) - iVar4));
			}
			aggregate.fm_mission_controller.func_1645(bVar0, bVar3, 0, 1, iVar55, 0, 0);
		}
	}
	aggregate.mp_intro.func_3056(uParam0->f_3, uParam0->f_4, bParam1, bVar3, bVar2);
	aggregate.mp_intro.func_3057(uParam0->f_3, Global_35, bParam1);
	uParam0->f_2072 = uParam0->f_2071;
	uParam0->f_2071 = bParam1;
	uParam0->f_2421.f_12 = 1;
	uParam0->f_2047.f_3 = 1;
	uParam0->f_7 = 1;
	if (!Global_5653.f_2229)
	{
		Global_5653.f_2229 = 1;
	}
	if (aggregate.mp_intro.func_3048(uParam0->f_4) == bParam1)
	{
		aggregate.mp_intro.func_3058(uParam0->f_4);
	}
	iVar56 = aggregate.mp_intro.func_3059(bParam1, 0);
	if (!AUDIO::_0x6DF942C4179BE5AB(iVar56, -41291407))
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
	else
	{
		AUDIO::_0xE8EAFF7B41EDD291(iVar56, -41291407, 0);
	}
	return true;
}

int func_945(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<173> Var0;
	int iVar189;
	int iVar190;
	struct<173> Var191;
	int iVar380;

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
	if (!aggregate.shop_bait.func_846(uParam0, &Var0))
	{
		return 0;
	}
	if (bParam1)
	{
		iVar189 = 1;
	}
	else
	{
		iVar189 = -1;
	}
	iVar190 = aggregate.hub_offers.func_106(uParam0);
	iVar190 = (iVar190 + iVar189);
	if (iVar190 < 0 || iVar190 >= Var0.f_153)
	{
		Var191 = 14;
		Var191.f_4.f_8 = 2;
		Var191.f_4.f_11 = 16;
		Var191.f_4.f_28 = 16;
		Var191.f_4.f_45 = 16;
		Var191.f_4.f_62 = 16;
		Var191.f_4.f_79 = 16;
		Var191.f_4.f_96 = 4;
		Var191.f_4.f_96.f_1.f_1 = 6;
		Var191.f_4.f_96.f_1.f_8.f_1 = 6;
		Var191.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
		Var191.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
		Var191.f_136 = 4;
		Var191.f_136.f_1.f_2 = -1;
		Var191.f_136.f_1.f_3 = -1;
		Var191.f_136.f_1.f_4.f_2 = -1;
		Var191.f_136.f_1.f_4.f_3 = -1;
		Var191.f_136.f_1.f_4.f_4.f_2 = -1;
		Var191.f_136.f_1.f_4.f_4.f_3 = -1;
		Var191.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
		Var191.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
		Var191.f_153 = -1;
		Var191.f_154 = -1;
		Var191.f_155 = 16;
		Var191.f_172 = 16;
		iVar380 = 0;
		while (iVar380 < uParam0->f_279)
		{
			if (!aggregate.shop_bait.func_1294(uParam0, (Var0.f_3 + iVar189), &Var191))
			{
				return 0;
			}
			if (Var191.f_153 >= 0)
			{
				if (Var191.f_134 == Var0.f_134 || !bParam2)
				{
					if (!aggregate.shop_bait.func_171(&(Var191.f_136[0 /*4*/])))
					{
						return 0;
					}
					else if (aggregate.binoculars.func_32(&(Var191.f_136[0 /*4*/]), 1))
					{
						if (iVar189 > 0)
						{
							iVar189++;
						}
						else
						{
							iVar189 = (iVar189 - 1);
						}
						Jump @715; //curOff = 570
					}
					else if (((aggregate.shop_bait.func_1312(uParam0) && !bParam1) || (!aggregate.shop_bait.func_1312(uParam0) && bParam1)) || MISC::ABSI(iVar189) > 1)
					{
						if (aggregate.shop_bait.func_871(uParam0, (Var0.f_3 + iVar189), bParam3))
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else
					{
						if (bParam1)
						{
							iVar190 = 0;
						}
						else
						{
							iVar190 = (Var191.f_153 - 1);
						}
						if (!aggregate.shop_bait.func_857(uParam0, !bParam1, iVar190))
						{
							return 0;
						}
						return 1;
					}
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
			iVar380++;
		}
	}
	else
	{
		aggregate.shop_bait.func_859(uParam0, iVar190, 0, 1, -2, 1);
		return 1;
	}
	return 0;
}

bool func_1024(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 == -1)
	{
		iVar0 = uParam0->f_3;
		if (iVar0 == 28)
		{
			iVar0 = 2;
		}
		if (!aggregate.mp_intro.func_1705(uParam0->f_4, iVar0, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate.mp_intro.func_1706(uParam0, uParam0->f_20))
		{
			if (!aggregate.mp_intro.func_1707(bParam1, &(uParam0->f_2094)))
			{
				return false;
			}
			if (aggregate.mp_intro.func_1706(uParam0, uParam0->f_20))
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
		if (!aggregate.mp_intro.func_1707(bParam1, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate.net_camp.func_1328(uParam0, bParam2, 1, -1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	uParam0->f_2094.f_70 = aggregate.binoculars.func_15(&(uParam0->f_2094));
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
	aggregate.mp_intro.func_1710(uParam0);
	aggregate.mp_intro.func_1105();
	aggregate.binoculars.func_16(uParam0);
	aggregate.generic_shop_ui_events.func_27();
	aggregate.mp_intro.func_1713(uParam0);
	uParam0->f_2094.f_50 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "GenericShop");
	uParam0->f_2094.f_51 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_50, "Title", MISC::GET_HASH_KEY(aggregate.mp_intro.func_1714(uParam0->f_3)));
	uParam0->f_2094.f_53 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Prompts");
	uParam0->f_2094.f_52 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Scene");
	aggregate.mp_intro.func_1715(uParam0, 6, joaat("IB_EXIT"));
	aggregate.mp_intro.func_1427(uParam0, 6, 1);
	aggregate.mp_intro.func_1427(uParam0, 6, 1);
	aggregate.mp_intro.func_1717(uParam0, 6, 0);
	aggregate.mp_intro.func_1715(uParam0, 1, joaat("ib_select"));
	aggregate.mp_intro.func_1427(uParam0, 1, 1);
	aggregate.mp_intro.func_1427(uParam0, 1, 1);
	aggregate.mp_intro.func_1717(uParam0, 1, 0);
	aggregate.mp_intro.func_1715(uParam0, 2, 1891107858);
	aggregate.mp_intro.func_1427(uParam0, 2, 0);
	aggregate.mp_intro.func_1427(uParam0, 2, 0);
	aggregate.mp_intro.func_1717(uParam0, 2, 0);
	aggregate.mp_intro.func_1715(uParam0, 3, -405106071);
	aggregate.mp_intro.func_1427(uParam0, 3, 0);
	aggregate.mp_intro.func_1427(uParam0, 3, 0);
	aggregate.mp_intro.func_1717(uParam0, 2, 0);
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
	uParam0->f_2094.f_149 = 254752;
	uParam0->f_2094.f_150 = 255636;
	uParam0->f_2094.f_151 = 256432;
	uParam0->f_2094.f_152 = 256551;
	uParam0->f_2094.f_46 = 1;
	return true;
}

char* func_1194(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "SELL_TRAIN_TICKET_WARY";
		case 4:
			return "SELL_TRAIN_TICKET";
		case 8:
			return "NO_TRAIN_TICKET";
		case 16:
			return "RANG_BELL";
		case 32:
			return "RIGHT_WITH_YOU";
		case 64:
			return "RIGHT_WITH_YOU_SHOUTED";
		case 128:
			return "GREET_OTHER_WINDOW";
		case 256:
			return "ANNOUNCE_NEXT_TRAIN_ARRIVAL";
		case 512:
			return "ANNOUNCE_TRAIN_DELAY";
		case 1024:
			return "CHAT_TRAIN_DELAY";
		case 2048:
			return "ANNOUNCE_TRAIN_ARRIVAL";
		case 4096:
			return "CHAT_DELAYED_TRAIN_ARRIVAL";
		default:
			break;
	}
	return "";
	return "";
}

