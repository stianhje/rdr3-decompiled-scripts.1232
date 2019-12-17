#region Local Var
	struct<12> Local_0 = { 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
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
	struct<32> Local_25 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == shop_bait.__EntryFunction__

void func_18(var uParam0)
{
	if ((*uParam0 == 5 || *uParam0 == 7) || *uParam0 == 6)
	{
		func_233(uParam0);
		uParam0->f_2421.f_18 = 1;
	}
}

void func_39(var uParam0)
{
	int iVar0;

	aggregate.mp_intro.func_3303(uParam0->f_3, &iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !aggregate.fme_round_up.func_1021(iVar0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 522, true);
	}
}

void func_41(var uParam0)
{
	int iVar0;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
		if (ENTITY::IS_ENTITY_A_PED(iVar0) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			return;
		}
	}
	func_333(uParam0, 1);
	func_333(uParam0, 2);
	if (uParam0->f_3 == 15)
	{
		aggregate.mp_intro.func_1329(uParam0, 61656);
		aggregate.mp_intro.func_1329(uParam0, 61822);
	}
}

void func_44(var uParam0)
{
	uParam0->f_2421.f_23 = 1;
	uParam0->f_2421.f_24 = 62903;
	uParam0->f_2421.f_27 = 1;
	uParam0->f_2421.f_28 = 63041;
	uParam0->f_2421.f_29 = 1;
	uParam0->f_2421.f_30 = 63107;
	uParam0->f_2421.f_33 = 1;
	uParam0->f_2421.f_34 = 63622;
	uParam0->f_2421.f_39 = 1;
	uParam0->f_2421.f_40 = 63652;
}

void func_65(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_23);
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(Global_1051387->f_3222[uParam0->f_4 /*2*/]));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || aggregate.fme_round_up.func_1021(iVar1, 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iVar1, 234, true);
	PED::SET_PED_CONFIG_FLAG(iVar1, 252, false);
	func_361();
	iVar2 = 550;
	if (uParam0->f_3 == 15)
	{
		iVar2 = 551;
	}
	if (!aggregate.blackwater.func_77(iVar2))
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35) && (aggregate.shop_bait.func_1767(uParam0->f_4) || func_363() > 0))
		{
			aggregate.binoculars.func_18(iVar2, 0);
		}
	}
	if (!aggregate.blackwater.func_77(547))
	{
		if (!aggregate.fme_animal_tagging.func_916(15))
		{
			if (aggregate.long_update.func_247(547))
			{
				func_364(547);
			}
		}
		else
		{
			aggregate.binoculars.func_18(547, 0);
		}
	}
	Local_25.f_31 = 0;
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
			Jump @2500; //curOff = 1032
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
			Jump @2500; //curOff = 1225
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
			Jump @2500; //curOff = 1514
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
			Jump @2500; //curOff = 1766
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
			Jump @2500; //curOff = 1854
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
			Jump @2500; //curOff = 1922
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
			Jump @2500; //curOff = 2010
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
			Jump @2500; //curOff = 2167
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
			Jump @2500; //curOff = 2262
			switch (uParam0->f_1)
			{
				case 26:
					return "0216_U_F_M_LagMother_01";
				default:
					break;
			}
			return "0216_U_F_M_LagMother_01";
			Jump @2500; //curOff = 2295
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
			Jump @2500; //curOff = 2370
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
			Jump @2500; //curOff = 2445
			if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[11 /*8*/]))
			{
				aggregate.saloon_dining.func_667();
			}
			return aggregate.blackwater.func_268(*(Global_1957543->f_319[11 /*8*/]));
			Jump @2500; //curOff = 2490
			return "SHOPKEEPER_TEST_PED";
			return "SHOPKEEPER_TEST_PED";
		}

void func_122(var uParam0)
{
	int iVar0;

	if (VOLUME::_0x92A78D0BEDB332A3(Local_25.f_5))
	{
		VOLUME::_0x43F867EF5C463A53(Local_25.f_5);
	}
	func_457(uParam0);
	func_458(uParam0);
	func_459(uParam0->f_3);
	aggregate.shop_bait.func_138(uParam0);
	func_460();
	func_461(&(Local_25.f_8));
	aggregate.mp_intro.func_607();
	if (uParam0->f_3 == 15)
	{
		func_463(&(Local_25.f_7), Local_25.f_6, 0);
		if (PED::_0xA911EE21EDF69DAF(Global_35))
		{
			iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
			ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
		}
		func_464(uParam0);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
}

void func_233(var uParam0)
{
	int iVar0;

	if (!Local_25.f_2)
	{
		if (PED::_0xA911EE21EDF69DAF(Global_35))
		{
			iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (Local_25.f_3 && Local_25 == iVar0)
				{
					Local_25.f_3 = 0;
				}
				else
				{
					Local_25 = iVar0;
					Local_25.f_1 = aggregate.doc_book.func_340(Local_25);
				}
				Local_25.f_2 = 1;
			}
		}
	}
	else if (!PED::_0xA911EE21EDF69DAF(Global_35))
	{
		if (uParam0->f_20 == 2)
		{
			Local_25.f_2 = 0;
		}
		else
		{
			Local_25.f_3 = 1;
			Local_25.f_2 = 0;
		}
	}
}

bool func_317(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
		if (!func_740(&(uParam0->f_4), iParam1, iParam2, aggregate.shop_bait.func_725(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_741(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate.camera_item.func_77(&(uParam0->f_4), 139120);
	aggregate.camera_item.func_77(&(uParam0->f_4), 139157);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 139185);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 139720);
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

int func_333(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2 || iParam1 == 12)
	{
		return aggregate.shop_bait.func_749(uParam0, iParam1, 140525, 140556, 140643, 142241);
	}
	else
	{
		iVar0 = 0;
		if (!aggregate.mp_intro.func_2206(iParam1, &iVar0))
		{
			return 0;
		}
		return aggregate.shop_bait.func_749(uParam0, iParam1, 142539, 142591, 130299, 31080);
	}
	return 0;
}

void func_334(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 == 724483759 || iParam2 == 2090838701)
	{
		Global_1915170->f_22524.f_1 = -1483207246;
		CAM::DETACH_CAM(Local_25.f_8.f_21);
		CAM::STOP_CAM_POINTING(Local_25.f_8.f_21);
		(Global_1915170->f_22524.f_24[0 /*14*/])->f_11 = 2f;
		aggregate.mp_intro.func_1732(&(Local_25.f_8.f_21), Global_35);
	}
	else if (iParam2 == -887337659)
	{
		Global_1915170->f_22524.f_1 = 0;
		func_768(&(Local_25.f_8));
		func_769(Local_25.f_8.f_21, 1.26f);
	}
}

int func_336(var uParam0, var uParam1)
{
	bool bVar0;

	bVar0 = uParam1->f_9;
	if (aggregate.bandana.func_58(bVar0) == joaat("clothing"))
	{
		CAM::DETACH_CAM(Local_25.f_8.f_21);
		CAM::STOP_CAM_POINTING(Local_25.f_8.f_21);
		aggregate.mp_intro.func_1731(&(Local_25.f_8.f_21), aggregate.bandana.func_10(uParam1->f_9), uParam0->f_2094.f_108);
	}
	if (*uParam1 == 336033112)
	{
		if ((uParam1->f_1 == -1875215306 || uParam1->f_1 == 1185205164) || uParam1->f_1 == -2037227397)
		{
			aggregate.mp_intro.func_1786(uParam0, 1);
			aggregate.mp_intro.func_2739(uParam0, MISC::_CREATE_VAR_STRING(8, -98361879 /* GXTEntry: "Health Bonus: Buy the Complete ~1p~ set." */, HUD::_GET_LABEL_TEXT_BY_HASH(uParam1->f_1)), 1);
			aggregate.mp_intro.func_1788(uParam0, 1);
			aggregate.mp_intro.func_2740(uParam0, 2108381539 /* GXTEntry: "Additional Health Bonus: Buy the complete Horsemanship, Sharpshooter & Weapons Ex" +
    "pert sets." */, 1);
		}
		if ((uParam1->f_1 == -1434879520 || uParam1->f_1 == -512000168) || uParam1->f_1 == 1378184642)
		{
			aggregate.mp_intro.func_1786(uParam0, 1);
			aggregate.mp_intro.func_2739(uParam0, MISC::_CREATE_VAR_STRING(8, 2007244508 /* GXTEntry: "Stamina Bonus: Buy the Complete ~1p~ set." */, HUD::_GET_LABEL_TEXT_BY_HASH(uParam1->f_1)), 1);
			aggregate.mp_intro.func_1788(uParam0, 1);
			aggregate.mp_intro.func_2740(uParam0, -1765902359 /* GXTEntry: "Additional Stamina Bonus: Buy the complete Bandit, Gambler & Master Hunter sets." */, 1);
		}
		if ((uParam1->f_1 == 35515532 || uParam1->f_1 == 934341325) || uParam1->f_1 == -1030841924)
		{
			aggregate.mp_intro.func_1786(uParam0, 1);
			aggregate.mp_intro.func_2739(uParam0, MISC::_CREATE_VAR_STRING(8, -223318857 /* GXTEntry: "Deadeye Bonus: Buy the Complete ~1p~ set." */, HUD::_GET_LABEL_TEXT_BY_HASH(uParam1->f_1)), 1);
			aggregate.mp_intro.func_1788(uParam0, 1);
			aggregate.mp_intro.func_2740(uParam0, -704441424 /* GXTEntry: "Additional Deadeye Bonus: Buy the complete Bandit, Gambler & Master Hunter sets." */, 1);
		}
	}
	if (aggregate.bandana.func_11(bVar0, 930141731))
	{
		if (aggregate.mp_intro.func_2439(uParam0, bVar0))
		{
			aggregate.mp_intro.func_1786(uParam0, 1);
			func_778(uParam0, MISC::GET_HASH_KEY(func_777(bVar0)));
			aggregate.mp_intro.func_1787(uParam0, 1, 1210712530, 566347780, joaat("COLOR_WHITE"));
		}
	}
	return 1;
}

int func_343(var uParam0)
{
	var uVar0;

	if (Local_25.f_2)
	{
		if (aggregate.bandana.func_11(Local_25.f_1, 380250474))
		{
			uParam0->f_44 = func_789(0);
			return 1;
		}
		else if (aggregate.bandana.func_11(Local_25.f_1, 1686880204))
		{
			uParam0->f_44 = func_789(1);
			return 1;
		}
	}
	else if ((aggregate.bandana.func_23(&uVar0) && (uParam0->f_43 == 0 || uParam0->f_43 >= 3)) && MISC::GET_RANDOM_INT_IN_RANGE(0, 4) != 0)
	{
		uParam0->f_44 = func_789(2);
		return 1;
	}
	return 0;
}

int func_344(var uParam0)
{
	if (aggregate.saloon_dining.func_455(uParam0))
	{
	}
	else
	{
		if (Local_25.f_3)
		{
			uParam0->f_44 = func_789(22);
			return 1;
		}
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
		{
			uParam0->f_44 = func_789(26);
			return 1;
		}
	}
	return 0;
}

int func_345(var uParam0)
{
	int iVar0;

	if (aggregate.saloon_dining.func_455(uParam0))
	{
	}
	else
	{
		switch (uParam0->f_2)
		{
			case 1:
				if (func_790(uParam0))
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
				}
				else
				{
					iVar0 = 0;
				}
				switch (iVar0)
				{
					case 0:
						uParam0->f_44 = aggregate.saloon_dining.func_476(20);
						return 1;
					case 1:
					case 3:
						return 0;
					case 2:
					case 4:
						if (aggregate.bandana.func_11(uParam0->f_13, -749879895))
						{
							uParam0->f_44 = func_789(62);
							return 1;
						}
						else if (aggregate.bandana.func_11(uParam0->f_13, 1344951072))
						{
							uParam0->f_44 = func_789(63);
							return 1;
						}
						break;
				}
				break;
			case 2:
				if (aggregate.bandana.func_11(uParam0->f_13, 173360570) || aggregate.bandana.func_11(uParam0->f_13, 1837782419))
				{
				}
				else if (aggregate.bandana.func_11(uParam0->f_13, -750899063))
				{
					if (aggregate.bandana.func_11(uParam0->f_13, 1686880204) && aggregate.fme_escaped_convicts.func_724())
					{
						uParam0->f_44 = func_789(51);
						return 1;
					}
					else
					{
						uParam0->f_44 = func_789(52);
						return 1;
					}
				}
				else if (aggregate.bandana.func_11(uParam0->f_13, 606327695))
				{
					if (func_790(uParam0))
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					}
					else
					{
						iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
					}
					switch (iVar0)
					{
						case 0:
							uParam0->f_44 = func_789(27);
							return 1;
						case 1:
							uParam0->f_44 = func_789(53);
							return 1;
						case 2:
							if (aggregate.bandana.func_11(uParam0->f_13, 380250474))
							{
								uParam0->f_44 = func_789(55);
								return 1;
							}
							else
							{
								uParam0->f_44 = aggregate.saloon_dining.func_476(17);
								return 1;
							}
							break;
						case 3:
							break;
					}
				}
				else if (aggregate.fme_escaped_convicts.func_724())
				{
					uParam0->f_44 = func_789(56);
					return 1;
				}
				else if (!func_790(uParam0))
				{
					uParam0->f_44 = aggregate.saloon_dining.func_476(20);
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_346(var uParam0)
{
	if (Local_25.f_3)
	{
		uParam0->f_44 = func_789(23);
		return 1;
	}
	return 0;
}

int func_347(var uParam0)
{
	if (uParam0->f_53 == 0)
	{
		switch (uParam0->f_59)
		{
			case 1:
				switch (uParam0->f_61)
				{
					case 9:
						switch (uParam0->f_54)
						{
							case 0:
								uParam0->f_44 = aggregate.saloon_dining.func_349(12);
								uParam0->f_56 = 4;
								return 1;
						}
						break;
				}
				break;
		}
	}
	return 0;
}

void func_361()
{
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		Local_25 = PED::_0xD806CD2A4F2C2996(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(Local_25))
		{
			if (ENTITY::IS_ENTITY_A_PED(Local_25) && MISC::_0x5170DDA6D63ACAAA(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Local_25)))
			{
				aggregate.net_main_offline.func_312("SHOP_BUTCHER_DROPOFF_ROTTEN", 10000, 0, 0, 0, 1);
			}
			Local_25.f_1 = func_797(Local_25);
			Local_25.f_2 = 1;
		}
	}
}

int func_363()
{
	if (aggregate.fme_animal_tagging.func_654() == 16)
	{
		return aggregate.satchel_ui_event_handler.func_170(0);
	}
	return aggregate.satchel_ui_event_handler.func_169(0);
}

void func_364(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1904612[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	(*Global_1904612)[iVar1] = uVar3;
}

int func_410(var uParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(Local_25.f_5))
	{
		func_834(Local_25.f_5, 2);
	}
	func_835(uParam0, &Local_25);
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		if (func_836(uParam0->f_3, -1))
		{
			if (uParam0->f_3 == 15)
			{
				func_837(uParam0);
			}
			func_838(uParam0->f_3);
			func_768(&(Local_25.f_8));
			return 1;
		}
	}
	else
	{
		func_768(&(Local_25.f_8));
		return 1;
	}
	return 0;
}

int func_411(var uParam0)
{
	int iVar0;

	iVar0 = func_839(uParam0, 1, 1);
	iVar0 = (func_840(uParam0) && iVar0);
	return iVar0;
	return 1;
}

void func_413(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_836(uParam0->f_3, uParam0->f_4);
	aggregate.fishing_core.func_54();
	if (uParam0->f_3 == 15)
	{
		bVar0 = aggregate.mp_intro.func_1354(uParam0);
		switch (Local_25.f_30)
		{
			case 0:
				if (bVar0 == -1370622068)
				{
					aggregate.fme_animal_tagging.func_389(2);
				}
				else if (bVar0 == 724483759)
				{
					aggregate.fme_animal_tagging.func_389(1);
				}
				else if (bVar0 == 24948591)
				{
					aggregate.fme_animal_tagging.func_389(3);
				}
				else if (bVar0 == 2090838701)
				{
					aggregate.fme_animal_tagging.func_389(4);
				}
				else if (bVar0 == 1106804237)
				{
					aggregate.fme_animal_tagging.func_389(5);
				}
				break;
			default:
				if (bVar0 == -887337659)
				{
					aggregate.fme_animal_tagging.func_389(0);
				}
				break;
		}
		if (aggregate.aberdeenpigfarm.func_45() == -1)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_23);
		}
		else
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[uParam0->f_3 /*76*/])->f_21);
		}
		_NAMESPACE29::_0x0EABF182FBB63D72(iVar1, 1, 1);
	}
	else
	{
		iVar2 = aggregate.shop_bait.func_1213(0, 0);
		if (Local_25.f_4 != iVar2)
		{
			Local_25.f_4 = iVar2;
			Global_1939221->f_4 = 1;
		}
	}
}

void func_439(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_23);
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[uParam0->f_3 /*76*/])->f_21);
	}
	func_852(&(Local_25.f_8));
	Local_25.f_2 = 0;
	Local_25.f_3 = 0;
	Local_25 = 0;
	Local_25.f_1 = 0;
	PED::SET_PED_CONFIG_FLAG(iVar1, 234, false);
	PED::SET_PED_CONFIG_FLAG(iVar1, 252, true);
	if (uParam0->f_3 == 15 && !aggregate.blackwater.func_77(548))
	{
		aggregate.binoculars.func_18(548, 0);
	}
}

void func_457(var uParam0)
{
	int iVar0;

	if (aggregate.net_fast_travel_barker.func_114(PLAYER::PLAYER_ID(), 1, 1))
	{
		aggregate.net_fast_travel_barker.func_115(0, 1);
	}
	func_863(0);
	iVar0 = aggregate.dynamic_craft_scenario.func_486(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar0, 0, 0, 256);
	}
	uParam0->f_2529 = 0;
}

void func_458(var uParam0)
{
	int iVar0;

	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	aggregate.fm_deathmatch_controller.func_95(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar0, 0, 0, 256);
	}
	uParam0->f_2530 = 0;
}

void func_459(int iParam0)
{
	int iVar0;

	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return;
	}
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (aggregate.saloon_dining.func_301(iParam0, (Global_1915170->f_3[iParam0 /*447*/])->f_9))
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_913(iParam0, 32))
	{
		return;
	}
	if (func_865(iParam0, 2))
	{
		func_866(iParam0, 2);
	}
	if (func_865(iParam0, 4))
	{
		func_866(iParam0, 4);
	}
	if (aggregate.fme_animal_tagging.func_913(iParam0, 8192))
	{
		aggregate.aberdeenpigfarm.func_139(iParam0, 8192);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1957543->f_3) || ENTITY::IS_ENTITY_DEAD(Global_1957543->f_3))
	{
		return;
	}
	Global_1957543->f_45[iParam0] = 0;
	if (func_865(iParam0, 16))
	{
		func_866(iParam0, 16);
		TASK::CLEAR_PED_TASKS(Global_1957543->f_3, 1, 0);
	}
	if (aggregate.aberdeenpigfarm.func_85(Global_1957543->f_2))
	{
		iVar0 = aggregate.aberdeenpigfarm.func_120(Global_1957543->f_2);
		if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0) && !_NAMESPACE48::_0xEB98B38CA60742D7(iVar0))
		{
			_NAMESPACE48::_0xA2B18FF8D39F6D87(iVar0);
			TASK::TASK_PERSISTENT_CHARACTER(Global_1957543->f_3);
		}
		aggregate.aberdeenpigfarm.func_139(iParam0, 32);
		func_866(iParam0, 32);
	}
}

void func_460()
{
	if (ANIMSCENE::_0x25557E324489393C(iLocal_14))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_14);
	}
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	iLocal_13 = 0;
}

void func_461(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_21))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_21, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(uParam0->f_21, false);
	}
}

void func_463(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_0xA1CFB35069D23C23(iParam1);
	POPULATION::_0x74C2B3DC0B294102(iParam1);
	if (PED::_0x91A5F9CBEBB9D936(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

void func_464(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_2515))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_2515);
	}
	if (uParam0->f_2515 != -1)
	{
		uParam0->f_2515 = -1;
	}
}

void func_710(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate.doc_book.func_307() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1085(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate.mp_intro.func_1329(uParam0, 202291);
			aggregate.mp_intro.func_1329(uParam0, 203186);
			aggregate.mp_intro.func_1329(uParam0, 203786);
			aggregate.mp_intro.func_1329(uParam0, 204080);
			aggregate.mp_intro.func_1329(uParam0, 204258);
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

bool func_740(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
	uParam0->f_1279 = 226743;
	uParam0->f_1280 = 226752;
	uParam0->f_1281 = 226761;
	uParam0->f_1282 = 226761;
	uParam0->f_222 = iParam5;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

bool func_741(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	uParam0->f_1279 = 226743;
	uParam0->f_1280 = 226752;
	uParam0->f_1281 = 226761;
	uParam0->f_1282 = 226761;
	uParam0->f_222 = iParam4;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

void func_768(var uParam0)
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_21))
	{
		uParam0->f_21 = CAM::CREATE_CAMERA(26379945, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_21, uParam0->f_8, 0.101f, 1.358f, 0.5381f, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_21, uParam0->f_8, 0.2912f, -1.6309f, 0.3644f, true);
	CAM::SET_CAM_FOV(uParam0->f_21, 37f);
	CAM::_0x1FC6C727D30FFDDE(uParam0->f_21);
}

void func_769(var uParam0, float fParam1)
{
	CAM::_0x1FC6C727D30FFDDE(uParam0);
	CAM::_0x11F32BB61B756732(uParam0, fParam1);
}

char* func_777(bool bParam0)
{
	switch (bParam0)
	{
		case -35737408: /* GXTEntry: "Gambler Holster" */
			return "PROVISION_REINFORCED_HOLSTER_BOAR_CHALLENGE";
		case -747118240: /* GXTEntry: "Gambler Bandolier" */
			return "PROVISION_REINFORCED_BANDOLIER_BOAR_CHALLENGE";
		case 351104126: /* GXTEntry: "Gambler Gun Belt" */
			return "PROVISION_REINFORCED_GUNBELT_BOAR_CHALLENGE";
		case 797308288: /* GXTEntry: "Gambler Off-Hand Holster" */
			return "PROVISION_REINFORCED_OFFHAND_BOAR_CHALLENGE";
		case -1669506545: /* GXTEntry: "Herbalist Off-Hand Holster" */
			return "PROVISION_REINFORCED_OFFHAND_BUFFALO_CHALLENGE";
		case -991258198: /* GXTEntry: "Herbalist Gun Belt" */
			return "PROVISION_REINFORCED_GUNBELT_BUFFALO_CHALLENGE";
		case 651323163: /* GXTEntry: "Herbalist Holster" */
			return "PROVISION_REINFORCED_HOLSTER_BUFFALO_CHALLENGE";
		case 356885366: /* GXTEntry: "Herbalist Bandolier" */
			return "PROVISION_REINFORCED_BANDOLIER_BUFFALO_CHALLENGE";
		case 2146082234:
			return "PROVISION_REINFORCED_GUNBELT_DEER_CHALLENGE";
		case 2072880089: /* GXTEntry: "Horseman Holster" */
			return "PROVISION_REINFORCED_HOLSTER_DEER_CHALLENGE";
		case -2010021430: /* GXTEntry: "Horseman Bandolier" */
			return "PROVISION_REINFORCED_BANDOLIER_DEER_CHALLENGE";
		case 516134254: /* GXTEntry: "Horseman Off-Hand Holster" */
			return "PROVISION_REINFORCED_OFFHAND_DEER_CHALLENGE";
		case -1208917184: /* GXTEntry: "Survivalist Gun Belt" */
			return "PROVISION_REINFORCED_GUNBELT_RABBIT_CHALLENGE";
		case 2030473481: /* GXTEntry: "Survivalist Off-Hand Holster" */
			return "PROVISION_REINFORCED_OFFHAND_RABBIT_CHALLENGE";
		case 1532314048: /* GXTEntry: "Survivalist Bandolier" */
			return "PROVISION_REINFORCED_BANDOLIER_RABBIT_CHALLENGE";
		case -1749072364: /* GXTEntry: "Survivalist Holster" */
			return "PROVISION_REINFORCED_HOLSTER_RABBIT_CHALLENGE";
		case -583780175: /* GXTEntry: "Weapons Expert Holster" */
			return "PROVISION_REINFORCED_HOLSTER_SNAKE_CHALLENGE";
		case -12904227: /* GXTEntry: "Weapons Expert Gun Belt" */
			return "PROVISION_REINFORCED_GUNBELT_SNAKE_CHALLENGE";
		case 2084389834: /* GXTEntry: "Weapons Expert Off-Hand Holster" */
			return "PROVISION_REINFORCED_OFFHAND_SNAKE_CHALLENGE";
		case -1378972544: /* GXTEntry: "Weapons Expert Bandolier" */
			return "PROVISION_REINFORCED_BANDOLIER_SNAKE_CHALLENGE";
	}
	return "";
}

void func_778(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_52, "ItemInfo1");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "RawText", aggregate.fm_mission_controller.func_3519());
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar0, "Text", bParam1);
}

char* func_789(int iParam0)
{
	switch (iParam0)
	{
		case 48:
			return "BUY_BULK_QUALITY";
		case 49:
			return "BUY_BULK_AVERAGE";
		case 50:
			return "BUY_BULK_POOR";
		case 51:
			return "BUY_QUALITY_PELT";
		case 56:
			return "BUY_COMMON_ITEM";
		case 52:
			return "BUY_NICE_KILL";
		case 53:
			return "BUY_MESSY_KILL";
		case 54:
			return "BUY_FRESH_MEAT";
		case 62:
			return "SALES_PITCH_PORK";
		case 63:
			return "SALES_PITCH_BEEF";
		case 64:
			return "SALES_PITCH_VENISON";
		case 65:
			return "SALES_PITCH_BISON";
		case 2:
			return "GREET_PLAYER_MASK";
		case 0:
			return "GREET_POINT_OUT_CARCASS";
		case 1:
			return "GREET_POINT_OUT_PELT";
		case 3:
			return "GREET_POINT_OUT_LEGENDARY_ANIMAL";
		case 4:
			return "GREET_POINT_OUT_LEGENDARY_BEAR";
		case 5:
			return "GREET_POINT_OUT_LEGENDARY_ALLIGTAOR";
		case 6:
			return "GREET_POINT_OUT_LEGENDARY_WHITE_BUFFALO";
		case 7:
			return "GREET_POINT_OUT_LEGENDARY_BOAR";
		case 8:
			return "GREET_POINT_OUT_LEGENDARY_BUCK";
		case 9:
			return "GREET_POINT_OUT_LEGENDARY_FOX";
		case 10:
			return "GREET_POINT_OUT_LEGENDARY_ELK";
		case 11:
			return "GREET_POINT_OUT_LEGENDARY_PRONGHORN";
		case 12:
			return "GREET_POINT_OUT_LEGENDARY_COUGAR";
		case 13:
			return "GREET_POINT_OUT_LEGENDARY_MOOSE";
		case 14:
			return "GREET_POINT_OUT_LEGENDARY_PANTHER";
		case 15:
			return "GREET_POINT_OUT_LEGENDARY_WOLF";
		case 16:
			return "GREET_POINT_OUT_LEGENDARY_BIG_HORN_RAM";
		case 17:
			return "GREET_POINT_OUT_LEGENDARY_TATANKA_BUFFALO";
		case 18:
			return "GREET_POINT_OUT_LEGENDARY_BEAVER";
		case 19:
			return "GREET_POINT_OUT_LEGENDARY_COYOTE";
		case 28:
			return "CHAT_LEGENDARY_ANIMALS";
		case 29:
			return "CHAT_REMIND_LEGENDARY_ANIMALS";
		case 30:
			return "CHAT_LEGENDARY_ANIMAL_HINTS";
		case 31:
			return "CHAT_LEGENDARY_BEAR_HINT";
		case 32:
			return "CHAT_LEGENDARY_GATOR_HINT";
		case 33:
			return "CHAT_LEGENDARY_WHITE_BUFFALO_HINT";
		case 34:
			return "CHAT_LEGENDARY_BOAR_HINT";
		case 35:
			return "CHAT_LEGENDARY_BUCK_HINT";
		case 36:
			return "CHAT_LEGENDARY_FOX_HINT";
		case 37:
			return "CHAT_LEGENDARY_ELK_HINT";
		case 38:
			return "CHAT_LEGENDARY_PRONGHORN_HINT";
		case 39:
			return "CHAT_LEGENDARY_COUGAR_HINT";
		case 40:
			return "CHAT_LEGENDARY_MOOSE_HINT";
		case 41:
			return "CHAT_LEGENDARY_PANTHER_HINT";
		case 42:
			return "CHAT_LEGENDARY_WOLF_HINT";
		case 43:
			return "CHAT_LEGENDARY_RAM_HINT";
		case 44:
			return "CHAT_LEGENDARY_TATANKA_HINT";
		case 45:
			return "CHAT_LEGENDARY_BEAVER_HINT";
		case 46:
			return "CHAT_LEGENDARY_COYOTE_HINT";
		case 47:
			return "CHAT_EXLUSIVITY_REMINDER";
		case 57:
			return "REQUEST_CRAFT_ITEM";
		case 58:
			return "SELECT_CRAFT";
		case 59:
			return "HAND_OVER_CRAFT_ITEM";
		case 60:
			return "MISSING_ITEMS_FOR_CRAFT";
		case 61:
			return "MISSING_ITEMS_GUNSMITH";
		case 20:
			return "HOW_IS_ITEM_MEAT";
		case 21:
			return "PLAYER_LOITERING_WITH_KILL";
		case 25:
			return "PLAYER_LOITERING_BUTCHER";
		case 22:
			return "DROP_KILL_INTO_BUSINESS";
		case 23:
			return "DROP_KILL_INTO_BUSINESS_WALK_OUT";
		case 24:
			return "FAREWELL_MOVE_AROUND";
		case 26:
			return "CHAT_SHOPKEEPER_HUNT";
		case 27:
			return "CHAT_SHOPKEEPER_HUNT_POOR";
		case 66:
			return "SELL_ITEM_CLOTHING";
		case 67:
			return "SELL_ITEM_CLOTHING_ACCESSORY";
		case 68:
			return "SELL_ITEM_TOMAHAWK";
		case 69:
			return "SELL_ITEM_HUNTING_KIT_ITEMS";
		case 70:
			return "SELL_ITEM_SADDLE_DELIVERY_OPTION";
		case 71:
			return "SELL_ITEM_SADDLE_DELIVERY";
		case 72:
			return "SELL_ITEM_EQUIP_SADDLE";
		case 73:
			return "SELL_ITEM_HUNTING_EQUIPMENT";
		case 74:
			return "UPGRADE_EQUIPMENT";
		case 75:
			return "EQUIPMENT_SET";
		case 76:
			return "BUY_LEGENDARY_ANIMAL";
		case 77:
			return "RETURN_ANIMAL_PARTS";
		case 78:
			return "SALES_PITCH_CRAFTING";
		case 79:
			return "SALES_PITCH_CRAFTING_MATERIALS_AVAILABLE";
		case 80:
			return "SALES_PITCH_CLOTHING_MENU";
		case 81:
			return "SALES_PITCH_CLOTHING_PLAYER";
		case 82:
			return "SALES_PITCH_EQUIPMENT";
		case 83:
			return "SALES_PITCH_BROWSING_LUXURY_GOODS";
		case 84:
			return "SALES_PITCH_LUXURY";
		case 85:
			return "SALES_PITCH_GARMENT";
		case 86:
			return "SALES_PITCH_QUALITY_GARMENT";
		case 87:
			return "SALES_PITCH_UNLOCKED_GARMENT_SET";
		case 88:
			return "SALES_PITCH_BOOTS";
		case 89:
			return "SALES_PITCH_HAT";
		case 90:
			return "SALES_PITCH_CHAPS";
		case 91:
			return "SALES_PITCH_WOOLIES";
		case 92:
			return "SALES_PITCH_VEST";
		case 93:
			return "SALES_PITCH_COAT";
		case 94:
			return "SALES_PITCH_COOL_WEATHER_CLOTHING";
		case 95:
			return "SALES_PITCH_SADDLES";
		case 96:
			return "SALES_PITCH_WEAPON";
		case 97:
			return "SALES_PITCH_SHIRT";
		case 98:
			return "SALES_PITCH_PANTS";
		case 99:
			return "SALES_PITCH_SKIRT";
		case 100:
			return "SALES_PITCH_GLOVES";
		case 101:
			return "SALES_PITCH_SPATS";
		case 102:
			return "SALES_PITCH_UPGRADE";
		case 103:
			return "SALES_PITCH_LATEST_ARRIVALS";
		case 104:
			return "PUSH_SALE";
		case 105:
			return "PUSH_SALE_CLOTHES";
		case 106:
			return "TRY_IT_ON";
		case 107:
			return "BUY_LEGENDARY_ANIMALLOOKING_GOOD";
		case 108:
			return "PLAYER_SELL_TO_BUTCHER";
		case 109:
			return "PLAYER_PURCHASE_FROM_BUTCHER";
		case 110:
			return "PLAYER_SELL_TO_TRAPPER";
		case 111:
			return "PLAYER_PURCHASE_FROM_TRAPPER";
		case 112:
			return "PLAYER_PURCHASE_SADDLE";
		case 113:
			return "REFUSE_OFFER";
		default:
			break;
	}
	return "";
}

bool func_790(var uParam0)
{
	if (uParam0->f_1 == 82 || uParam0->f_1 == 104)
	{
		return true;
	}
	return false;
}

int func_797(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_0x31FEF6A20F00B963(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = aggregate.doc_book.func_333(&iParam0);
		}
	}
	return iVar0;
}

void func_834(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 512;
	if (iParam1 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_835(var uParam0, var uParam1)
{
	int iVar0;

	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_23);
	}
	else
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[uParam0->f_3 /*76*/])->f_21);
	}
	switch (aggregate.annesburg.func_122())
	{
		case 81:
			func_1311(&(uParam1->f_8), iVar0, -339.1187f, 767.4509f, 115.5749f, 101f, -341.0847f, 767.1586f, 115.7108f, 278.5947f, -340.3876f, 767.6069f, 116.4137f);
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5))
			{
				uParam1->f_5 = VOLUME::_CREATE_VOLUME_BOX(-339.9063f, 767.4564f, 116.3696f, 0f, 0f, -171.2032f, 0.894675f, 1.613694f, 1.564474f);
			}
			break;
		case 111:
			if (uParam0->f_4 == 30)
			{
				func_1311(&(uParam1->f_8), iVar0, 1297.676f, -1277.629f, 74.881f, 144.71f, 1296.429f, -1279.371f, 74.8411f, 328.7496f, 1296.594f, -1278.371f, 75.6666f);
				if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5))
				{
					uParam1->f_5 = VOLUME::_CREATE_VOLUME_BOX(1297.22f, -1278.003f, 75.90471f, 0f, 0f, 56.654f, 0.846061f, 1.442585f, 2.480459f);
				}
			}
			break;
		case 95:
		case 137:
			if (uParam0->f_4 == 40)
			{
				func_1311(&(uParam1->f_8), iVar0, 2075.266f, 999.9812f, 111.5449f, 290.3138f, 2077.025f, 1000.491f, 111.4851f, 113.8807f, 2075.851f, 1000.491f, 112.3411f);
				if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5))
				{
					uParam1->f_5 = VOLUME::_CREATE_VOLUME_BOX(2075.793f, 1000.405f, 112.4949f, 0f, 0f, 11.87342f, 1.162371f, 1.435581f, 1.414072f);
				}
			}
			break;
		case 5:
			if (uParam0->f_4 == 44)
			{
				func_1311(&(uParam1->f_8), iVar0, 2819.511f, -1331.339f, 45.5085f, 49.93f, 2817.743f, -1330.057f, 45.5139f, 232.4192f, 2818.488f, -1330.604f, 46.32197f);
				if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5))
				{
					uParam1->f_5 = VOLUME::_CREATE_VOLUME_BOX(2818.65f, -1330.746f, 46.45f, 0f, 0f, 49.75f, 1.613905f, 0.788669f, 1.119892f);
				}
			}
			else if (uParam0->f_4 == 63)
			{
				func_1311(&(uParam1->f_8), iVar0, 2832.32f, -1223.05f, 46.75f, 189.8299f, 2832.069f, -1225.649f, 46.6535f, 9.8299f, 2832.411f, -1224.729f, 47.51855f);
				if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5))
				{
					uParam1->f_5 = VOLUME::_CREATE_VOLUME_BOX(2832.481f, -1224.19f, 47.52882f, 0f, 0f, 0f, 2.082815f, 1.4134f, 2.029264f);
				}
			}
			break;
		case 26:
			func_1311(&(uParam1->f_8), iVar0, -1753.138f, -392.7723f, 155.232f, 176.4f, -1752.75f, -394.772f, 155.1888f, 1.9712f, -1753.235f, -393.8978f, 156.037f);
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5))
			{
				uParam1->f_5 = VOLUME::_CREATE_VOLUME_BOX(-1753.058f, -393.4279f, 156.2f, 0f, 0f, 0.043f, 1.044297f, 1.035441f, 1.473348f);
			}
			break;
		case 121:
			if (uParam0->f_4 == 104)
			{
				func_1311(&(uParam1->f_8), iVar0, -5509.964f, -2947.288f, -2.8676f, -102.99f, -5508.081f, -2947.577f, -2.8688f, 88.0957f, -5508.982f, -2947.619f, -2.06985f);
				if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5))
				{
					uParam1->f_5 = VOLUME::_CREATE_VOLUME_BOX(-5509.149f, -2947.479f, -1.733232f, 0f, 0f, -18.06135f, 0.811324f, 1.1507f, 1.859433f);
				}
			}
			break;
		case 119:
			if (uParam0->f_4 == 76)
			{
				func_1311(&(uParam1->f_8), iVar0, -2251.738f, -1914.852f, 116.0064f, 206.9256f, -2251.034f, -1916.911f, 115.9488f, 13.5871f, -2251.233f, -1915.702f, 116.8735f);
				if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5))
				{
					uParam1->f_5 = VOLUME::_CREATE_VOLUME_BOX(-2251.396f, -1915.746f, 117.2392f, 0f, 0f, 19.03913f, 1.542943f, 1f, 1.155026f);
				}
			}
			break;
		case 13:
			if (uParam0->f_4 == 3)
			{
				func_1311(&(uParam1->f_8), iVar0, -2844.139f, 136.5339f, 183.7605f, 279.4883f, -2842.262f, 137.3595f, 183.8226f, 116.6854f, -2843.218f, 136.964f, 184.5795f);
				if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5))
				{
					uParam1->f_5 = VOLUME::_CREATE_VOLUME_BOX(-2843.444f, 136.9017f, 184.7177f, 0f, 0f, 15.0305f, 1.205728f, 1.558203f, 1.450224f);
				}
			}
			break;
		case 14:
			if (uParam0->f_4 == 4)
			{
				func_1311(&(uParam1->f_8), iVar0, -1008.012f, -541.5708f, 98.12093f, 273.5871f, -1006.008f, -540.8176f, 97.9565f, 93.5933f, -1007.192f, -541.1581f, 98.90881f);
				if (!VOLUME::_0x92A78D0BEDB332A3(uParam1->f_5))
				{
					uParam1->f_5 = VOLUME::_CREATE_VOLUME_BOX(-1007.487f, -541.3747f, 99.25441f, 0f, 0f, 8.561835f, 1f, 1.806098f, 1.940772f);
				}
			}
			break;
		case 40:
			func_1311(&(uParam1->f_8), iVar0, -1753.138f, -392.7723f, 155.232f, 176.4f, -1752.75f, -394.772f, 155.1888f, 1.9712f, -1753.235f, -393.8978f, 156.037f);
			break;
			break;
	}
}

bool func_836(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (!func_1312(iParam0))
	{
		return true;
	}
	switch (iLocal_13)
	{
		case 0:
			if (MISC::IS_STRING_NULL_OR_EMPTY(func_1313(iParam0, iParam1)))
			{
				return false;
			}
			if (iParam0 == 9 || iParam0 == 27)
			{
				iVar0 = 1;
			}
			iLocal_14 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1313(iParam0, iParam1), iVar0, 0, false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_14);
			iLocal_13 = 1;
			break;
		case 1:
			if (ANIMSCENE::_0x477122B8D05E7968(iLocal_14, 1, 0))
			{
				iLocal_13 = 2;
			}
			break;
		case 2:
			if (aggregate.aberdeenpigfarm.func_45() == -1)
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915170->f_3[iParam0 /*447*/])->f_23);
			}
			else
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[iParam0 /*76*/])->f_21);
			}
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
			fVar5 = ENTITY::GET_ENTITY_HEADING(iVar1);
			if (iParam0 != 9)
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_14, vVar2, 0f, 0f, fVar5, 2);
				ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(iLocal_14, iVar1, -1);
			}
			ANIMSCENE::START_ANIM_SCENE(iLocal_14);
			iLocal_13 = 3;
			return true;
		case 3:
			break;
	}
	return false;
}

void func_837(var uParam0)
{
	uParam0->f_2515.f_2 = 1;
	uParam0->f_2515.f_3 = 0;
	uParam0->f_2515.f_1 = 0;
	uParam0->f_2515.f_4 = 0;
	if (uParam0->f_3 == 3 && (uParam0->f_19 == 5 || uParam0->f_19 == 40))
	{
		uParam0->f_2515 = -1;
	}
	else
	{
		uParam0->f_2515 = ANIMSCENE::_CREATE_ANIM_SCENE("script@common@shop@playercamp", 0, 0, false, true);
	}
}

void func_838(int iParam0)
{
	float fVar0;

	if (aggregate.fme_animal_tagging.func_913(iParam0, 64))
	{
		return;
	}
	if (iParam0 == 11)
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_913(iParam0, 32) && aggregate.aberdeenpigfarm.func_85(Global_1957543->f_2))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(aggregate.aberdeenpigfarm.func_120(Global_1957543->f_2)))
		{
			_NAMESPACE48::_0x406808610220405B(aggregate.aberdeenpigfarm.func_120(Global_1957543->f_2));
		}
		aggregate.benedictpoint.func_129(iParam0, 32);
	}
	if (!aggregate.shop_bait.func_617(Global_1957543->f_3))
	{
		if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1957543->f_3, 0) && !aggregate.saloon_dining.func_603(iParam0, -1)) && !func_1314(Global_1957543->f_2, 0))
		{
			if (!func_1315(iParam0))
			{
				fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1957543->f_3, true, false), (Global_1915170->f_3[iParam0 /*447*/])->f_10);
				if (fVar0 < 20f)
				{
					TASK::TASK_GO_TO_ENTITY(Global_1957543->f_3, Global_35, -1, 1.5f, 1f, 2f, 0);
				}
			}
		}
	}
}

int func_839(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!uParam0->f_2529)
	{
		iVar0 = aggregate.dynamic_craft_scenario.func_486(0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (!bParam2 || aggregate.net_stable_mount.func_203(uParam0->f_4, iVar0))
			{
				if (!aggregate.net_fast_travel_barker.func_53(1, 1))
				{
					return 0;
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
					return 0;
				}
				if (!func_1318(255))
				{
					func_863(1);
					return 0;
				}
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar0, iParam1, 1, 256);
				uParam0->f_2529 = 1;
			}
			else if (aggregate.net_fast_travel_barker.func_114(PLAYER::PLAYER_ID(), 1, 0))
			{
				aggregate.net_fast_travel_barker.func_115(0, 1);
			}
		}
	}
	return 1;
}

int func_840(var uParam0)
{
	int iVar0;

	if (!uParam0->f_2530)
	{
		iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
				return 0;
			}
			if (!aggregate.net_bounty_wagon.func_72(PLAYER::PLAYER_ID()))
			{
				aggregate.fm_deathmatch_controller.func_95(1);
				return 0;
			}
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar0, 0, 1, 256);
			uParam0->f_2530 = 1;
		}
	}
	return 1;
}

void func_852(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_20))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_20);
	}
	uParam0->f_4 = 0;
	func_461(uParam0);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
}

void func_863(int iParam0)
{
	Global_1903928->f_485[67] = iParam0;
}

bool func_865(int iParam0, int iParam1)
{
	if (!aggregate.aberdeenpigfarm.func_171(iParam0))
	{
		return false;
	}
	return (Global_1957543->f_85[iParam0] && iParam1) != 0;
}

void func_866(int iParam0, int iParam1)
{
	if (!aggregate.aberdeenpigfarm.func_171(iParam0))
	{
		return;
	}
	Global_1957543->f_85[iParam0] = (&Global_1957543->f_85[iParam0] - (Global_1957543->f_85[iParam0] && iParam1));
}

bool func_1085(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
	uParam0->f_2094.f_149 = 269036;
	uParam0->f_2094.f_150 = 269920;
	uParam0->f_2094.f_151 = 270716;
	uParam0->f_2094.f_152 = 270835;
	uParam0->f_2094.f_46 = 1;
	return true;
}

bool func_1139(var uParam0)
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

	iVar0 = aggregate.mp_intro.func_1412();
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, aggregate.generic_shop_ui_events.func_31());
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1413());
	iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1910());
	iVar4 = aggregate.mp_intro.func_1906();
	iVar2 = (iVar2 + iVar4);
	if (iVar2 >= iVar3)
	{
		iVar2 = 0;
	}
	else if (iVar2 < 0)
	{
		iVar2 = (iVar3 - 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1413(), iVar2);
	if (iVar1 == -395279071)
	{
		iVar5 = aggregate.generic_shop_ui_events.func_11();
		bVar6 = iVar5;
		iVar7 = aggregate.mp_intro.func_1911(bVar6);
		(Global_1951131->f_1461.f_1[bVar6 /*9*/])->f_8 = iVar2;
		if (!aggregate.mp_intro.func_1912(iVar7, &iVar8, &uVar9))
		{
			return false;
		}
		bVar10 = Global_1951131->f_1461.f_1[bVar6 /*9*/][iVar2];
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1913(), bVar10);
		iVar11 = aggregate.bandana.func_44(iVar8, 1);
		aggregate.dynamic_craft_scenario.func_285(iVar11);
		aggregate.dynamic_craft_scenario.func_283();
		aggregate.generic_single_use_item.func_169(&(Global_1951131->f_1538), &(Global_1951131->f_1538.f_1[iVar11 /*3*/]), iVar11, 1);
		(Global_1951131->f_1538.f_1[aggregate.bandana.func_44(iVar8, 1) /*3*/])->f_1 = uVar9;
		if (aggregate.fme_animal_tagging.func_1294(iVar11) == -1)
		{
			aggregate.dynamic_craft_scenario.func_286(iVar11, 0);
		}
		aggregate.dynamic_craft_scenario.func_169(1, 1, 0, 1);
		aggregate.bandana.func_28(19, 0, 2, 0, 0);
		aggregate.mp_intro.func_1415(uParam0);
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
			if (aggregate.mp_intro.func_1914(aggregate.mp_intro.func_1381(), bVar12, &iVar13, &iVar14))
			{
				DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(iVar0, aggregate.mp_intro.func_1915(), iVar13);
				DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(iVar0, aggregate.mp_intro.func_1916(), iVar14);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1913(), bVar12);
			aggregate.mp_intro.func_1917(uParam0, bVar12);
			if ((aggregate.mp_intro.func_1355(uParam0) == -2144266389 || aggregate.mp_intro.func_1355(uParam0) == 2057502022) || aggregate.mp_intro.func_1355(uParam0) == 1275816411)
			{
				aggregate.shop_bait.func_1617(uParam0, aggregate.mp_intro.func_1381(), 0);
			}
			bVar15 = aggregate.mp_intro.func_1381();
			if (WEAPON::_0xD955FEE4B87AFA07(bVar15))
			{
				bVar26 = true;
				bVar27 = true;
				bVar28 = true;
				iVar24 = -1610187846; /* GXTEntry: "Equip Sidearm" */
				iVar25 = 190417139; /* GXTEntry: "Equip Off-Hand Sidearm" */
				Var16 = { aggregate.bandana.func_59(bVar15, aggregate.bandana.func_60(0), bVar12, 0) };
				if (WEAPON::_0x6929E22158E52265(Global_35, 2, &uVar20))
				{
					if (aggregate.fishing_core.func_583(&Var16, &uVar20))
					{
						bVar26 = false;
						bVar27 = false;
					}
				}
				if (WEAPON::_0x6929E22158E52265(Global_35, 3, &uVar20))
				{
					if (aggregate.fishing_core.func_583(&Var16, &uVar20))
					{
						bVar26 = false;
						iVar25 = 165536584; /* GXTEntry: "Unequip Off-Hand Sidearm" */
					}
				}
				if (!aggregate.bandana.func_74() || aggregate.shop_butcher.func_1682() < 2)
				{
					bVar28 = false;
				}
				aggregate.mp_intro.func_1723(uParam0, 3, iVar24, bVar26, 1, 0);
				aggregate.mp_intro.func_1723(uParam0, 2, iVar25, (bVar27 && bVar28), bVar28, 0);
			}
		}
	}
	else if (iVar1 == -239176093)
	{
		iVar29 = aggregate.hub_offers.func_106(uParam0);
		switch (iVar2)
		{
			case 0:
				sVar30 = aggregate.mp_intro.func_1921(1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar29))
				{
					aggregate.butchercreek.func_191(iVar29, 1);
				}
				break;
			case 1:
				sVar30 = aggregate.mp_intro.func_1921(2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar29))
				{
					aggregate.butchercreek.func_191(iVar29, 2);
				}
				break;
		}
		DATABINDING::_0xA3BD6FF95E713EE5(iVar0, aggregate.mp_intro.func_1913(), sVar30);
		if (ENTITY::DOES_ENTITY_EXIST(iVar29))
		{
			PED::_0xCC8CA3E88256E58F(iVar29, 0, 1, 1, 1, false);
		}
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_52, "HorseGender", MISC::GET_HASH_KEY(sVar30));
	}
	return true;
}

void func_1311(var uParam0, int iParam1, vector3 vParam2, float fParam5, vector3 vParam6, float fParam9, vector3 vParam10)
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = { vParam2 };
	uParam0->f_12 = fParam5;
	uParam0->f_13 = { vParam10 };
	uParam0->f_16 = { vParam6 };
	uParam0->f_19 = fParam9;
	uParam0->f_4 = 0;
}

bool func_1312(int iParam0)
{
	switch (iParam0)
	{
		case 9:
		case 10:
		case 15:
		case 27:
			return true;
		default:
			break;
	}
	return false;
}

char* func_1313(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 10:
			return "lightrig@shops@butcher_generic";
		case 15:
			return "lightrig@shops@trapper_generic";
		case 27:
			return "lightrig_mp@ui_lightrigs@camp_wilderness";
		case 9:
			if (iParam1 == 86)
			{
				return "lightrig_mp@horseshop@shop_val_horse_shop_lighting";
			}
			else if (iParam1 == 13)
			{
				return "lightrig_mp@horseshop@shop_blk_horse_shop_lighting";
			}
			else if (iParam1 == 107)
			{
				return "lightrig_mp@horseshop@shop_tbl_horse_shop_lighting";
			}
			else if (iParam1 == 41)
			{
				return "lightrig_mp@horseshop@shop_scm_first_lighting";
			}
			else if (iParam1 == 71)
			{
				return "lightrig_mp@horseshop@shop_str_horse_lighting";
			}
			else if (iParam1 == 50)
			{
				return "lightrig_mp@horseshop@shop_sdn_horse_shop_lighting";
			}
			else if (iParam1 == 96)
			{
				return "lightrig_mp@horseshop@shop_van_horse_shop_lighting";
			}
			break;
	}
	return "";
}

bool func_1314(int iParam0, bool bParam1)
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		return false;
	}
	if (!aggregate.aberdeenpigfarm.func_85(iParam0))
	{
		return false;
	}
	if (!aggregate.aberdeenpigfarm.func_136(iParam0) && bParam1)
	{
		return false;
	}
	return aggregate.aberdeenpigfarm.func_111(iParam0, 1);
}

bool func_1315(int iParam0)
{
	return (Global_1915170->f_3[iParam0 /*447*/])->f_411;
}

bool func_1318(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (aggregate.fm_mission_controller.func_3456(16384, iParam0))
	{
		return true;
	}
	return false;
}

var func_1606(var uParam0)
{
	if (uParam0->f_42 > 1)
	{
		if ((uParam0->f_42 - 1) >= 0)
		{
			return &(uParam0->f_31[(uParam0->f_42 - 1)]);
		}
	}
	return aggregate.hub.func_16(uParam0);
}

int func_2451(bool bParam0)
{
	switch (bParam0)
	{
		case 1237770824: /* GXTEntry: "Animal Fat" */
			return -2059491326;
		case -858567048: /* GXTEntry: "Legendary Buck Antler" */
			return -2054061821;
		case 529305859: /* GXTEntry: "Buck Antlers" */
			return -2054061821;
		case -725003445: /* GXTEntry: "Legendary Elk Antler" */
			return -276530555;
		case -407659715: /* GXTEntry: "Elk Antler" */
			return -276530555;
		case 967601061: /* GXTEntry: "Legendary Moose Antler" */
			return 1786362058;
		case 895033262: /* GXTEntry: "Moose Antler" */
			return 1786362058;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -1925097470;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return -1925097470;
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return -1925097470;
		case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
			return -179784009;
		case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
			return -179784009;
		case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
			return -179784009;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return -549843543;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return -549843543;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return -549843543;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return 547453549;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return 547453549;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return 547453549;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return -185670568;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return -185670568;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -185670568;
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return -68530554;
		case 563848610: /* GXTEntry: "Poor Bat Carcass" */
			return -68530554;
		case -1457420231: /* GXTEntry: "Good Bat Carcass" */
			return -68530554;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -1882667332;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -1882667332;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return -1882667332;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return -549843543;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -549843543;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return -549843543;
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
			return 251523924;
		case -2120099592: /* GXTEntry: "Poor Blue Jay Carcass" */
			return 251523924;
		case 1848456619: /* GXTEntry: "Good Blue Jay Carcass" */
			return 251523924;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return 128689452;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return 128689452;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 128689452;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -795926005;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return -795926005;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return -795926005;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
			return 1766735806;
		case 1948158930: /* GXTEntry: "Poor Cardinal Carcass" */
			return 1766735806;
		case 183958842: /* GXTEntry: "Good Cardinal Carcass" */
			return 1766735806;
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return -1260301848;
		case -1323780599: /* GXTEntry: "Poor Cedar Waxwing Carcass" */
			return -1260301848;
		case -532099639: /* GXTEntry: "Good Cedar Waxwing Carcass" */
			return -1260301848;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return 362062697;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return 362062697;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return 362062697;
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
			return -557557374;
		case -1586332975: /* GXTEntry: "Poor Chipmunk Carcass" */
			return -557557374;
		case 1857501916: /* GXTEntry: "Good Chipmunk Carcass" */
			return -557557374;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return 2145928766;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return 2145928766;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return 2145928766;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return 2103138183;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return 2103138183;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 2103138183;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return 1176634776;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 1176634776;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return 1176634776;
		case -1888757291: /* GXTEntry: "Perfect Crab Carcass" */
			return -48308129;
		case 995863399: /* GXTEntry: "Poor Crab Carcass" */
			return -48308129;
		case 894877715: /* GXTEntry: "Good Crab Carcass" */
			return -48308129;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return -234392368;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -234392368;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return -234392368;
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 489332694;
		case -110353515: /* GXTEntry: "Poor Crow Carcass" */
			return 489332694;
		case -1905834457: /* GXTEntry: "Good Crow Carcass" */
			return 489332694;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return -972505668;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -972505668;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return -972505668;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return -1482721140;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return -1482721140;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -1482721140;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return 1943206759;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 1943206759;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1943206759;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return -479944273;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return -479944273;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return -479944273;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			return -1900245017;
		case 306916738: /* GXTEntry: "Bullhead Catfish" */
			return 996737485;
		case 724563284: /* GXTEntry: "Chain Pickerel" */
			return -317318063;
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			return -1179145184;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
			return 49841414;
		case -5376850: /* GXTEntry: "Largemouth Bass" */
			return 1853004765;
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			return -613244561;
		case -1538397860: /* GXTEntry: "Muskie" */
			return 998459086;
		case 193037129: /* GXTEntry: "Northern Pike" */
			return -1185304294;
		case 1416872916: /* GXTEntry: "Perch" */
			return 1606770041;
		case 1500919793: /* GXTEntry: "Redfin Pickerel" */
			return 592705199;
		case 1042542561: /* GXTEntry: "Rock Bass" */
			return 1001427351;
		case 1570826681: /* GXTEntry: "Sockeye Salmon" */
			return -2134757665;
		case 56657913: /* GXTEntry: "Smallmouth Bass" */
			return 1296165525;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -1389099466;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return -1389099466;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return -1389099466;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
			return 2032362047;
		case -1134447619: /* GXTEntry: "Poor Bullfrog Carcass" */
			return 2032362047;
		case -1640704323: /* GXTEntry: "Good Bullfrog Carcass" */
			return 2032362047;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return -600158588;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return -600158588;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return -600158588;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return -348997013;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -348997013;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -348997013;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return -855155400;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -855155400;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return -855155400;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return 1743453709;
		case 2144711797:
			return 1743453709;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return 1743453709;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return -1910050550;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -1910050550;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return -1910050550;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return -1634769991;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -1634769991;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return -1634769991;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return 556997951;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return 556997951;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return 556997951;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 727714355;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 727714355;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return 727714355;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
			return -71380070;
		case -610456424: /* GXTEntry: "Poor Oriole Carcass" */
			return -71380070;
		case -284151822: /* GXTEntry: "Good Oriole Carcass" */
			return -71380070;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return -729503995;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return -729503995;
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return -729503995;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return 1786644138;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return 1786644138;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1786644138;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return -1466769106;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return -1466769106;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return -1466769106;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -2079514583;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return -2079514583;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return -2079514583;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return -409309194;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return -409309194;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return -409309194;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return 2020893799;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return 2020893799;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 2020893799;
		case -245335326: /* GXTEntry: "Perfect Pigeon Carcass" */
			return 195131818;
		case -1999212658: /* GXTEntry: "Poor Pigeon Carcass" */
			return 195131818;
		case -593435395: /* GXTEntry: "Good Pigeon Carcass" */
			return 195131818;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1445465787;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return 1445465787;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return 1445465787;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return -1817406451;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return -1817406451;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return -1817406451;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1521192478;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return 1521192478;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return 1521192478;
		case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
			return -1517999735;
		case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
			return -1517999735;
		case -1726572562: /* GXTEntry: "Good Quail Carcass" */
			return -1517999735;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return -2084641708;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -2084641708;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return -2084641708;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return -1125378664;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return -1125378664;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return -1125378664;
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return 708951363;
		case -1788506246: /* GXTEntry: "Poor Rat Carcass" */
			return 708951363;
		case -1909348309: /* GXTEntry: "Good Rat Carcass" */
			return 708951363;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 714611525;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return 714611525;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 714611525;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1699761828;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return 1699761828;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return 1699761828;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
			return -158140634;
		case -350704687: /* GXTEntry: "Poor Robin Carcass" */
			return -158140634;
		case 765892430: /* GXTEntry: "Good Robin Carcass" */
			return -158140634;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return 1272884971;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return 1272884971;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return 1272884971;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return -1552076723;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -1552076723;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return -1552076723;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -334414989;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return -334414989;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return -334414989;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return -352732121;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return -352732121;
		case 2126795269:
			return -352732121;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 117556329;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return 117556329;
			return 117556329;
			return 469453151;
			return 469453151;
			return 469453151;
			return 621465116;
			return 621465116;
			return 621465116;
			return -523607607;
			return -523607607;
			return -523607607;
			return 1662628197;
			return 1662628197;
			return 1662628197;
			return 2084847747;
			return 2084847747;
			return 2084847747;
			return 1656226638;
			return 1656226638;
			return 1656226638;
			return -1608525320;
			return -1608525320;
			return -1608525320;
			return 1717540687;
			return 1717540687;
			return 1717540687;
			return 1622797153;
			return 1622797153;
			return 1622797153;
			return -252750557;
			return -252750557;
			return -252750557;
			return 513869240;
			return 513869240;
			return 513869240;
			return -482152318;
			return -482152318;
			return -482152318;
			return -329015022;
			return -329015022;
			return -329015022;
			return 340488205;
			return 340488205;
			return 340488205;
			return 1228602887;
			return -1749311280;
			return -770230168;
			return -1761903019;
			return -202898890;
			return -324172879;
			return 221026557;
			return 2055874470;
			return 1383597214;
			return -695920779;
			return 1864240538;
			return 135251025;
			return -1380974753;
			return 1918940015;
			return 1606360364;
			return 949154977;
			return 1327585677;
			return -424223638;
			return -817814915;
			return 1324361660;
			return -1740875511;
			return -1114206422;
			return 1129016218;
			return 74265533;
			return -1687205102;
			return -2112352640;
			return -1179922595;
			return -1777044066;
			return -427774472;
			return -862133853;
			return -153093028;
			return 1961151934;
			return -1429428300;
			return 641025903;
			return 1014343203;
			return -977684174;
			return 753992067;
			return 975102591;
			return -742266708;
			return 1002050200;
			return 970250315;
			return 913562114;
			return 1415886451;
			return 1244458697;
			return 322165109;
			return -2083991045;
			return 709722347;
			return 709722347;
			return 709722347;
			return 144513283;
			return 144513283;
			return 144513283;
			return -78603574;
			return -78603574;
			return -78603574;
			return 956393401;
			return 956393401;
			return 956393401;
			return -1604538436;
			return -1604538436;
			return -1604538436;
			return -1583116953;
			return -1583116953;
			return -1583116953;
			return 1995645004;
			return 1995645004;
			return 1995645004;
			return 439094686;
			return 439094686;
			return 439094686;
			return 1069834732;
			return 1069834732;
			return 1069834732;
			return -1508151163;
			return -1508151163;
			return -1508151163;
			return 854098596;
			return 854098596;
			return 854098596;
			return 1467162138;
			return 1467162138;
			return 1467162138;
			return 1322026128;
			return 1322026128;
			return 1322026128;
			return 711086189;
			return 711086189;
			return 711086189;
			return -1334624683;
			return -1334624683;
			return -1334624683;
			return 2118150058;
			return 2118150058;
			return 2118150058;
			return 1889550255;
			return 1889550255;
			return 1889550255;
			return 1684561350;
			return 1684561350;
			return 1684561350;
			return 1763709491;
			return 1763709491;
			return 1763709491;
			return 1828340319;
			return 1828340319;
			return 1828340319;
			return 344414895;
			return 344414895;
			return 344414895;
			return -1875079046;
			return -1875079046;
			return -1875079046;
			return -1273558742;
			return -1273558742;
			return -1273558742;
			return -839975185;
			return -839975185;
			return -839975185;
			return -401745683;
			return -401745683;
			return -401745683;
			return -2096730839;
			return -2096730839;
			return -2096730839;
			return 1871609823;
			return 1871609823;
			return 1871609823;
			return -1028335922;
			return -1028335922;
			return -1028335922;
			return 172698521;
			return 172698521;
			return 172698521;
			return 212330241;
			return 212330241;
			return 212330241;
			return -555536739;
			return -555536739;
			return -555536739;
			return -1896091463;
			return -1896091463;
			return -1896091463;
			return 1854095100;
			return 1854095100;
			return 1854095100;
			return 1690246594;
			return 1690246594;
			return 1690246594;
			return -885435577;
			return -885435577;
			return -885435577;
			return -1923252111;
			return -1923252111;
			return -1923252111;
			return -470304000;
			return -1074986502;
			return -1042059910;
			return 1234479911;
			return -591134272;
			return 2092024647;
			return -1902618794;
			return 0;
		}

void func_2766(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = aggregate.coffee_drinking.func_101(bParam0, 1224357681);
	bVar1 = aggregate.satchel_ui_event_handler.func_354(bParam0);
	if (aggregate.aberdeenpigfarm.func_165(bVar0))
	{
		if (Global_1939221->f_38.f_1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1939221->f_38.f_1)
			{
				if (bVar0 == &Global_1939221->f_38.f_2[iVar2 /*2*/])
				{
					aggregate.satchel_ui_event_handler.func_369(iVar2, 1);
					return;
				}
				iVar2++;
			}
			aggregate.satchel_ui_event_handler.func_370(bVar0, bVar1);
		}
		else
		{
			aggregate.satchel_ui_event_handler.func_370(bVar0, bVar1);
		}
	}
}

int func_2798(bool bParam0, bool bParam1, int iParam2, struct<4> Param3, bool bParam7)
{
	bool bVar0;
	struct<10> Var1;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;

	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return 0;
	}
	bVar0 = false;
	Var1.f_9 = -1591664384;
	if (aggregate.bandana.func_66(Param3, &Var1, 1, 1, -1))
	{
		bVar0 = Var1.f_4;
	}
	if (bParam7)
	{
		bVar16 = iParam2;
		if (bVar16 == 0)
		{
			return 0;
		}
		if (bVar16 != -915411861 && bVar16 != -570078785)
		{
			return 0;
		}
		iVar17 = 1;
		if (aggregate.mp_freemode_tutorial.func_753(bParam0, bVar16, &iVar17, 0))
		{
			bParam1 = (bParam1 / iVar17);
		}
		bVar15 = aggregate.mp_intro.func_2428(bParam0, bVar16, 1, 0, 1, 0);
		if (bVar16 == -915411861 && bVar15 > 0)
		{
			aggregate.aberdeenpigfarm.func_108(aggregate.coffee_drinking.func_50(-759715161), (bVar15 * bParam1));
		}
	}
	else
	{
		iVar18 = iParam2;
		if (iVar18 == 0)
		{
			bVar15 = false;
		}
		else
		{
			bVar15 = aggregate.fme_condor_egg.func_602(bParam0, iVar18, 1, 0);
		}
	}
	return aggregate.shop_bait.func_3051(bParam0, bParam1, bVar0, bParam7);
}

void func_3221(bool bParam0)
{
	bool bVar0;
	struct<2> Var1;
	bool bVar4;
	int iVar5;
	bool bVar6;

	bVar0 = bParam0;
	Var1.f_1 = aggregate.satchel_ui_event_handler.func_704(bVar0);
	Var1 = aggregate.satchel_ui_event_handler.func_705(bVar0);
	bVar4 = true;
	iVar5 = aggregate.satchel_ui_event_handler.func_706(bVar0);
	bVar6 = COLLECTION::_0xCC644BC1DD655269(iVar5, 0);
	if (aggregate.aberdeenpigfarm.func_165(bVar6))
	{
		bVar4 = aggregate.shop_bait.func_2998(bVar6);
	}
	aggregate.satchel_ui_event_handler.func_376(-1715238242, bParam0, &Var1, aggregate.satchel_ui_event_handler.func_707(bParam0), bVar4, 0, 0, joaat("COLOR_PURE_WHITE"));
	Global_1939221->f_38.f_203++;
	Global_1939221->f_38.f_1++;
}

