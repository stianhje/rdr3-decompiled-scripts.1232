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
	struct<6> Local_25 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == shop_bait.__EntryFunction__

void func_39(var uParam0)
{
	*uParam0 = *uParam0;
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		aggregate.scarletthorseshop.func_60(4, 268435456);
	}
	else
	{
		aggregate.annesburg.func_64(4, 268435456);
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
	func_334(uParam0, 1);
	func_334(uParam0, 2);
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		func_334(uParam0, 4);
		aggregate.shop_bait.func_334(uParam0, 1, 61224);
	}
	if (uParam0->f_3 == 4)
	{
		aggregate.mp_intro.func_1329(uParam0, 61416);
		aggregate.mp_intro.func_1329(uParam0, 61464);
	}
}

void func_44(var uParam0)
{
	uParam0->f_2421.f_27 = 1;
	uParam0->f_2421.f_28 = 62124;
	uParam0->f_2421.f_29 = 1;
	uParam0->f_2421.f_30 = 62205;
	uParam0->f_2421.f_33 = 1;
	uParam0->f_2421.f_34 = 62631;
	uParam0->f_2421.f_37 = 1;
	uParam0->f_2421.f_38 = 62661;
	uParam0->f_2421.f_35 = 1;
	uParam0->f_2421.f_36 = 62711;
	uParam0->f_2421.f_23 = 1;
	uParam0->f_2421.f_24 = 62816;
}

void func_45(var uParam0)
{
	if (!uParam0->f_4 == 44)
	{
		return;
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
			Jump @2482; //curOff = 1207
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
			Jump @2482; //curOff = 1496
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
			Jump @2482; //curOff = 1748
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
			Jump @2482; //curOff = 1836
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
			Jump @2482; //curOff = 1904
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
			Jump @2482; //curOff = 1992
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
			Jump @2482; //curOff = 2149
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
			Jump @2482; //curOff = 2244
			switch (uParam0->f_1)
			{
				case 26:
					return "0216_U_F_M_LagMother_01";
				default:
					break;
			}
			return "0216_U_F_M_LagMother_01";
			Jump @2482; //curOff = 2277
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
			Jump @2482; //curOff = 2352
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
			Jump @2482; //curOff = 2427
			if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[11 /*8*/]))
			{
				aggregate.saloon_dining.func_667();
			}
			return aggregate.blackwater.func_268(*(Global_1957543->f_319[11 /*8*/]));
			Jump @2482; //curOff = 2472
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
		if (!func_732(&(uParam0->f_4), iParam1, iParam2, aggregate.shop_bait.func_725(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_733(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate.camera_item.func_77(&(uParam0->f_4), 137114);
	aggregate.camera_item.func_77(&(uParam0->f_4), 137151);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 137179);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 137714);
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

int func_334(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2 || iParam1 == 12)
	{
		return aggregate.shop_bait.func_749(uParam0, iParam1, 138519, 138550, 138637, 140235);
	}
	else
	{
		iVar0 = 0;
		if (!aggregate.mp_intro.func_2206(iParam1, &iVar0))
		{
			return 0;
		}
		return aggregate.shop_bait.func_749(uParam0, iParam1, 140533, 140585, 128291, 30860);
	}
	return 0;
}

bool func_335(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		if (aggregate.aberdeenpigfarm.func_85((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_21) && aggregate.annesburg.func_130((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_21, 0))
		{
			if (!func_636(aggregate.barcustomer_interaction.func_24((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_21), uParam0->f_3))
			{
				return false;
			}
		}
		return true;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME((Global_1051387->f_69[uParam0->f_3 /*76*/])->f_21, (Global_1051387->f_69[uParam0->f_3 /*76*/])->f_25, true, 0);
}

void func_337(var uParam0, var uParam1, var uParam2)
{
	if (!aggregate.benedictpoint.func_17(uParam0->f_4))
	{
		return;
	}
}

int func_339(var uParam0, var uParam1)
{
	if (!aggregate.benedictpoint.func_17(uParam0->f_4))
	{
		return 1;
	}
	return 1;
}

int func_346(var uParam0)
{
	if (aggregate.saloon_dining.func_455(uParam0))
	{
	}
	else if (aggregate.broom_scenario.func_29(&(uParam0->f_80)) > 180f)
	{
		switch (uParam0->f_49)
		{
			case 0:
				uParam0->f_44 = func_771(20);
				uParam0->f_49++;
				return 1;
		}
	}
	return 0;
}

int func_347(var uParam0)
{
	if (aggregate.saloon_dining.func_455(uParam0))
	{
	}
	else
	{
		switch (uParam0->f_2)
		{
			case 1:
				if (WEAPON::IS_WEAPON_VALID(uParam0->f_13) && aggregate.fme_escaped_convicts.func_724())
				{
					uParam0->f_44 = func_771(6);
					return 1;
				}
				switch (uParam0->f_13)
				{
					case 480079517: /* GXTEntry: "Dynamite" */
						uParam0->f_44 = func_771(9);
						return 1;
					case joaat("ammo_molotov"):
						uParam0->f_44 = func_771(7);
						return 1;
					case joaat("weapon_melee_hatchet"):
						uParam0->f_44 = func_771(8);
						return 1;
					case joaat("weapon_thrown_tomahawk"):
					case 1235846615: /* GXTEntry: "Tomahawk" */
						uParam0->f_44 = func_771(10);
						return 1;
					case 299161628: /* GXTEntry: "Moonshine" */
						uParam0->f_44 = func_771(12);
						return 1;
					case -911719054: /* GXTEntry: "Forged Horse Deed" */
						uParam0->f_44 = func_771(11);
						return 1;
				}
				if (aggregate.bandana.func_11(uParam0->f_13, -228153877))
				{
					uParam0->f_44 = func_771(13);
					return 1;
				}
				break;
			case 2:
				if (aggregate.bandana.func_11(uParam0->f_13, 765268565))
				{
					uParam0->f_44 = func_771(16);
					return 1;
				}
				if (aggregate.bandana.func_11(uParam0->f_13, 134758040))
				{
					uParam0->f_44 = func_771(17);
					return 1;
				}
				if (aggregate.bandana.func_11(uParam0->f_13, -687467589))
				{
					uParam0->f_44 = func_771(18);
					return 1;
				}
				if (uParam0->f_13 == -2046502963)
				{
					uParam0->f_44 = func_771(19);
					return 1;
				}
				break;
			case 4:
				if (aggregate.fme_escaped_convicts.func_724())
				{
					uParam0->f_44 = func_771(3);
					return 1;
				}
				else
				{
					uParam0->f_44 = func_771(4);
					return 1;
				}
				break;
		}
	}
	return 0;
}

int func_348(var uParam0)
{
	if (aggregate.fme_escaped_convicts.func_724())
	{
		uParam0->f_44 = func_771(24);
		return 1;
	}
	return 0;
}

int func_349(var uParam0, bool bParam1)
{
	if (bParam1 && uParam0->f_2 == 4)
	{
		if (aggregate.saloon_dining.func_455(uParam0))
		{
		}
		else
		{
			uParam0->f_44 = func_771(2);
			return 1;
		}
	}
	return 0;
}

int func_350(var uParam0, int iParam1, var uParam2)
{
	if (aggregate.saloon_dining.func_455(uParam0))
	{
	}
	else
	{
		if (iParam1 == 480079517 || iParam1 == joaat("ammo_molotov"))
		{
			if (aggregate.fme_escaped_convicts.func_724())
			{
				uParam0->f_44 = func_771(23);
				return 1;
			}
			else
			{
				uParam0->f_44 = func_771(22);
				return 1;
			}
		}
		if (aggregate.fme_escaped_convicts.func_724())
		{
			uParam0->f_44 = func_771(21);
			return 1;
		}
	}
	return 0;
}

int func_351(var uParam0)
{
	var uVar0;

	if ((aggregate.bandana.func_23(&uVar0) && (uParam0->f_43 == 0 || uParam0->f_43 >= 3)) && MISC::GET_RANDOM_INT_IN_RANGE(0, 4) != 0)
	{
		uParam0->f_44 = func_771(26);
		return 1;
	}
	return 0;
}

int func_410(var uParam0)
{
	if (!aggregate.benedictpoint.func_17(uParam0->f_4))
	{
		return 1;
	}
	func_803(uParam0, &Local_25);
	aggregate.fm_deathmatch_controller.func_2189(Global_35, Local_25.f_2, Local_25.f_5, 2, 1073741824 /* Float: 2f */);
	PED::_0x2208438012482A1A(Global_35, false, false);
	func_804(&Local_25);
	return 1;
}

int func_411(var uParam0)
{
	if (uParam0->f_3 == 4)
	{
		if (!aggregate.benedictpoint.func_17(uParam0->f_4))
		{
			return 1;
		}
		func_805(uParam0);
	}
	return 1;
}

bool func_425(var uParam0)
{
	if (func_807(uParam0))
	{
		func_808(&(Local_25.f_1));
		return true;
	}
	return false;
}

void func_439(var uParam0)
{
	if (!aggregate.benedictpoint.func_17(uParam0->f_4))
	{
		return;
	}
	func_808(&(Local_25.f_1));
}

void func_608(var uParam0)
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
			aggregate.fme_animal_tagging.func_1552(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			aggregate.fme_animal_tagging.func_1552(vVar0);
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
				aggregate.fme_animal_tagging.func_1553(&Var6, uVar5);
				Jump @394; //curOff = 223
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				aggregate.fme_animal_tagging.func_1552(vVar0);
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
					aggregate.fme_animal_tagging.func_1553(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

bool func_636(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam1 /*76*/])->f_25))
	{
		if (aggregate.annesburg.func_142(iParam0, (Global_1051387->f_69[iParam1 /*76*/])->f_25, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_702(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate.doc_book.func_307() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1043(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate.mp_intro.func_1329(uParam0, 194869);
			aggregate.mp_intro.func_1329(uParam0, 195764);
			aggregate.mp_intro.func_1329(uParam0, 196364);
			aggregate.mp_intro.func_1329(uParam0, 196658);
			aggregate.mp_intro.func_1329(uParam0, 196836);
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

bool func_732(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
	uParam0->f_1279 = 219365;
	uParam0->f_1280 = 219374;
	uParam0->f_1281 = 219383;
	uParam0->f_1282 = 219383;
	uParam0->f_222 = iParam5;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

bool func_733(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	uParam0->f_1279 = 219365;
	uParam0->f_1280 = 219374;
	uParam0->f_1281 = 219383;
	uParam0->f_1282 = 219383;
	uParam0->f_222 = iParam4;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

char* func_771(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SALES_PITCH_CRAFTING_NEW";
		case 1:
			return "SALES_PITCH_CRAFTING_AGAIN";
		case 2:
			return "SELECT_CRAFT";
		case 3:
			return "REQUEST_CRAFT_ITEM";
		case 4:
			return "HAND_OVER_CRAFT_ITEM";
		case 5:
			return "SELL_ILLICIT_ITEM";
		case 6:
			return "SELL_WEAPON";
		case 7:
			return "SELL_FIRE_BOTTLE";
		case 8:
			return "SELL_HATCHET";
		case 9:
			return "SELL_DYNAMITE";
		case 10:
			return "SELL_TOMAHAWK";
		case 11:
			return "SELL_FAKE_PAPERS";
		case 12:
			return "SELL_MOONSHINE";
		case 13:
			return "SELL_TREASURE_MAP";
		case 16:
			return "BUY_ILLICIT_ITEM";
		case 17:
			return "BUY_QUALITY_ILLICIT_ITEM";
		case 18:
			return "BUY_UNUSUAL_ITEM";
		case 19:
			return "BUY_REUTLINGER";
		case 20:
			return "SALES_PITCH_BUY_STOLEN_GOODS";
		case 21:
			return "SALES_PITCH_STOLEN_PRICES";
		case 22:
			return "SALES_PITCH_EXPLOSIVES";
		case 23:
			return "SALES_PITCH_BROWSING_EXPLOSIVES";
		case 24:
			return "FAREWELL_WARNING";
		case 25:
			return "MASK_PURCHASED_WORN";
		case 14:
			return "PLAYER_EXIT_FENCE_MENU_PURCHASED";
		case 15:
			return "PLAYER_PURCHASED_TALISMAN_TRINKET_MATERIALS";
		case 26:
			return "GREET_PLAYER_MASK";
		default:
			break;
	}
	return "";
}

void func_803(var uParam0, var uParam1)
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
		case 98:
			func_1261(uParam1, iVar0, 3025.72f, 562.38f, 43.72f, 255.5313f, 3027.894f, 561.3553f, 43.72456f, 95.1822f);
			break;
		case 74:
			func_1261(uParam1, iVar0, 1417.53f, 273.71f, 88.48f, 191.5621f, 1418.108f, 270.7622f, 88.5484f, 15.3865f);
			break;
		case 111:
			func_1261(uParam1, iVar0, 1319.43f, -1142.08f, 81.41f, 251.7574f, 1321.426f, -1142.571f, 81.3542f, 68.4548f);
			break;
		case 5:
			func_1261(uParam1, iVar0, 2859.51f, -1202.12f, 48.59f, 3.3853f, 2859.267f, -1199.578f, 48.5936f, 184.1089f);
			break;
		case 135:
			func_1261(uParam1, iVar0, -1401.694f, -2317.165f, 42.6241f, 92.5851f, -1403.2f, -2316.9f, 43.6f, 273.5f);
			break;
	}
}

void func_804(var uParam0)
{
	if (!CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		uParam0->f_1 = CAM::CREATE_CAMERA(26379945, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, *uParam0, 0.101f, 1.358f, 0.5381f, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_1, *uParam0, 0.2912f, -1.6309f, 0.3644f, true);
	CAM::SET_CAM_FOV(uParam0->f_1, 37f);
}

int func_805(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	if (aggregate.mp_intro.func_2315(&vVar0, uParam0->f_3, uParam0->f_19, -2087301726) && aggregate.mp_intro.func_2320(&fVar3, uParam0->f_3, uParam0->f_19, -36654156))
	{
		func_1262(uParam0, vVar0);
		ENTITY::SET_ENTITY_COORDS(Global_35, vVar0, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_35, fVar3);
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
		return 1;
	}
	return 0;
}

bool func_807(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	if (aggregate.aberdeenpigfarm.func_45() == 0)
	{
		return true;
	}
	if (aggregate.shop_bait.func_400(uParam0, &vVar0, &fVar3))
	{
		ENTITY::SET_ENTITY_COORDS(Global_35, vVar0, true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_35, fVar3);
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		PED::_0x2208438012482A1A(Global_35, false, false);
		return true;
	}
	return false;
}

void func_808(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::SET_CAM_ACTIVE(*uParam0, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(*uParam0, false);
	}
}

int func_953(bool bParam0)
{
	if (!aggregate.mp_intro.func_2423(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case -2068637111: /* GXTEntry: "The Copperhead Enforcer" */
			return -705751660;
		case -1871922677: /* GXTEntry: "The Blackrose Bounty Hunter" */
			return 1364634153;
		case -905031115: /* GXTEntry: "The Grizzlies Outlaw" */
			return -388301838;
		case 1928115537: /* GXTEntry: "The Déchaux" */
			return 208175031;
		case 453281150: /* GXTEntry: "The Mercer" */
			return -98968806;
		case 153739721: /* GXTEntry: "The Schefield" */
			return -402606360;
		case 1167678119: /* GXTEntry: "The Hettinger" */
			return -709946811;
		case 736667462: /* GXTEntry: "The Ajaccio" */
			return -362300646;
		case -673644764: /* GXTEntry: "The Tasman" */
			return -65380737;
		case -980133221: /* GXTEntry: "The Zacateca" */
			return 100758093;
		case -209930641: /* GXTEntry: "The Clayton" */
			return -1740761400;
		case -1735897526: /* GXTEntry: "The Wakeeney" */
			return -27480348;
		case -482614352: /* GXTEntry: "The Wakeeney" */
			return -257977494;
		case -1258944731: /* GXTEntry: "The Wakeeney" */
			return -582914898;
		case 1536480356: /* GXTEntry: "The Wakeeney" */
			return -814067424;
		case 1827632921: /* GXTEntry: "The Wakeeney" */
			return -1179212391;
		case -1483084691: /* GXTEntry: "The Wakeeney" */
			return -1407415707;
		case -1855140882: /* GXTEntry: "The Bullard" */
			return -9237745;
		case -1605932637: /* GXTEntry: "The Bullard" */
			return 296464256;
		case 838274308: /* GXTEntry: "The Bullard" */
			return -1849217095;
		case 1423463110: /* GXTEntry: "The Bullard" */
			return 1698584232;
		case 1722021469: /* GXTEntry: "The Bullard" */
			return 1996257828;
		case 1293960018: /* GXTEntry: "The Bullard" */
			return 1186175379;
		case 1084020314: /* GXTEntry: "The Garwood" */
			return -1332741910;
		case 1384905272: /* GXTEntry: "The Garwood" */
			return -1632447184;
		case 166258931: /* GXTEntry: "The Garwood" */
			return -1930088011;
		case -285691117: /* GXTEntry: "The Garwood" */
			return 2065632777;
		case -1506238056: /* GXTEntry: "The Garwood" */
			return 937854865;
		case -141245365: /* GXTEntry: "The Garwood" */
			return -1520409981;
		case 962175652: /* GXTEntry: "The Carthage" */
			return 1356000914;
		case 687079897: /* GXTEntry: "The Carthage" */
			return -423388555;
		case 373021801: /* GXTEntry: "The Carthage" */
			return -188959129;
		case 75839740: /* GXTEntry: "The Carthage" */
			return -93765184;
		case -208529642: /* GXTEntry: "The Carthage" */
			return 401046716;
		case -504466477: /* GXTEntry: "The Carthage" */
			return -845387737;
		case -1896067425: /* GXTEntry: "The Wentworth" */
			return -229247533;
		case -1732419039: /* GXTEntry: "The Wentworth" */
			return 57481217;
		case 1620668890: /* GXTEntry: "The Wentworth" */
			return 383434460;
		case 2095557238: /* GXTEntry: "The Wentworth" */
			return 404275544;
		case -700719823: /* GXTEntry: "The Wentworth" */
			return 721381157;
		case -520949089: /* GXTEntry: "The Wentworth" */
			return 1027509151;
		case 783963696: /* GXTEntry: "The Wallingford" */
			return -1688869940;
		case 477409701: /* GXTEntry: "The Wallingford" */
			return -97312371;
		case 325427079: /* GXTEntry: "The Wallingford" */
			return -870234774;
		case -2127824110: /* GXTEntry: "The Wallingford" */
			return -573609786;
		case -478920799: /* GXTEntry: "The Wallingford" */
			return -1336767027;
		case -784753876: /* GXTEntry: "The Wallingford" */
			return 1125692243;
		case -1991069642: /* GXTEntry: "The Gladewater" */
			return 1599850951;
		case 1534579841: /* GXTEntry: "The Gladewater" */
			return 1505836690;
		case 1755770591: /* GXTEntry: "The Gladewater" */
			return 1007026972;
		case 852591413: /* GXTEntry: "The Gladewater" */
			return -1271696523;
		case -1269692868: /* GXTEntry: "The Gladewater" */
			return -1501734903;
		case -1638540740: /* GXTEntry: "The Gladewater" */
			return -466660528;
		case 1404368072: /* GXTEntry: "The Londonderry" */
			return -1675392330;
		case 561909851: /* GXTEntry: "The Londonderry" */
			return -1377882579;
		case 1369829534: /* GXTEntry: "The Londonderry" */
			return 2136592667;
		case 669687080: /* GXTEntry: "The Londonderry" */
			return -1849788956;
		case 908671397: /* GXTEntry: "The Londonderry" */
			return -1561028528;
		case -50313388: /* GXTEntry: "The Londonderry" */
			return -1268368589;
		case 896138350: /* GXTEntry: "The Monterey" */
			return -655694620;
		case -1347489546: /* GXTEntry: "The Monterey" */
			return -882128410;
		case -1127937242: /* GXTEntry: "The Monterey" */
			return -27217981;
		case -821055557: /* GXTEntry: "The Monterey" */
			return 513863747;
		case -666844643: /* GXTEntry: "The Monterey" */
			return 272520062;
		case 1507149124: /* GXTEntry: "The Monterey" */
			return 1115043821;
		case 1797068311: /* GXTEntry: "The Sunderland" */
			return 434380030;
		case 1509389260: /* GXTEntry: "The Sunderland" */
			return -1994163333;
		case 1196052082: /* GXTEntry: "The Sunderland" */
			return 1445336445;
		case 914074837: /* GXTEntry: "The Sunderland" */
			return -1000181256;
		case 599099209: /* GXTEntry: "The Sunderland" */
			return -1601951172;
		case 774216741: /* GXTEntry: "The Sunderland" */
			return -1900673376;
		case 180232641: /* GXTEntry: "The Worthington" */
			return -1722245291;
		case -1597878813: /* GXTEntry: "The Worthington" */
			return -1550994497;
		case -895311481: /* GXTEntry: "The Worthington" */
			return -1654216923;
		case -2075290374: /* GXTEntry: "The Worthington" */
			return -956892603;
		case -1349063796: /* GXTEntry: "The Worthington" */
			return 2044551183;
		case 1649135863: /* GXTEntry: "The Worthington" */
			return 1816380636;
		case 10498108: /* GXTEntry: "The Tyringham" */
			return -1216565419;
		case 317576407: /* GXTEntry: "The Tyringham" */
			return -997045888;
		case -803057859: /* GXTEntry: "The Tyringham" */
			return -622430680;
		case -229076051: /* GXTEntry: "The Tyringham" */
			return -1279023141;
		case -1445559642: /* GXTEntry: "The Tyringham" */
			return -1036761924;
		case -1140185331: /* GXTEntry: "The Tyringham" */
			return -683249952;
		case 913153433:
			return 194792351;
		case 606730510:
			return -1974548202;
		case -964051505:
			return 1014738289;
		case -1267459676:
			return 634486813;
		case -483756272:
			return 1408261210;
		case -805187393:
			return -768354077;
		case -1116096467:
			return 1791083718;
		case -4997980:
			return 1484267571;
		case -305588017:
			return -632577068;
		case -694850968:
			return -872544455;
		case -985380922:
			return -1111430465;
		case 974827889:
			return -1351987694;
		case -1156770257:
			return -803252891;
		case -843695231:
			return 2121544208;
		case 1854078224:
			return -1667469728;
		case -2137185980:
			return 466087145;
		case -1830566447:
			return 98091275;
		case -1537546049:
			return -1010615123;
		case 469166476:
			return -32097795;
		case 1229079574:
			return -875834007;
		case 990422947:
			return 68797956;
		case -229665218:
			return -270885498;
		case -527568197:
			return 682069807;
		case 242634379:
			return 920726434;
		case 275775515: /* GXTEntry: "The Copperhead Enforcer" */
			return 1379601741;
		case -1160690408: /* GXTEntry: "The Blackrose Bounty Hunter" */
			return -245138056;
		case -1763097043: /* GXTEntry: "The Grizzlies Outlaw" */
			return 115504824;
		case 912572382: /* GXTEntry: "The Breckenridge" */
			return -1399728874;
		case 73391061: /* GXTEntry: "The Roanoke" */
			return -1090192900;
		case 332495544: /* GXTEntry: "The Summerfield" */
			return -1893000631;
		case -501475506: /* GXTEntry: "The Kimberly" */
			return -1583759578;
		case -280579677: /* GXTEntry: "The Danube" */
			return -204905596;
		case -814845497: /* GXTEntry: "The Dauphine" */
			return -974747713;
		case -1610902814: /* GXTEntry: "The Redington" */
			return -701454253;
		case -1313261987: /* GXTEntry: "The Quinton" */
			return 678546644;
		case -668402627: /* GXTEntry: "The Wakeeney" */
			return -1643732782;
		case -1436966753: /* GXTEntry: "The Wakeeney" */
			return -1879178047;
		case -1105410003: /* GXTEntry: "The Wakeeney" */
			return 2033604402;
		case -792302208: /* GXTEntry: "The Wakeeney" */
			return 729201588;
		case -1544547372: /* GXTEntry: "The Wakeeney" */
			return 1695854319;
		case -1268599623: /* GXTEntry: "The Wakeeney" */
			return -2040860293;
		case 1281867320: /* GXTEntry: "The Bullard" */
			return 430601343;
		case -1699226913: /* GXTEntry: "The Bullard" */
			return 528449577;
		case -1610553999: /* GXTEntry: "The Bullard" */
			return 836052180;
		case -1909243438: /* GXTEntry: "The Bullard" */
			return 1126483827;
		case -1551799186: /* GXTEntry: "The Bullard" */
			return 1432546287;
		case -1999554802: /* GXTEntry: "The Bullard" */
			return 1721339484;
		case 723981565: /* GXTEntry: "The Garwood" */
			return 1684533498;
		case 963752338: /* GXTEntry: "The Garwood" */
			return 1404424086;
		case 372402960: /* GXTEntry: "The Garwood" */
			return 69611632;
		case 989901996: /* GXTEntry: "The Garwood" */
			return -221377088;
		case -239754729: /* GXTEntry: "The Garwood" */
			return 1613326453;
		case 142266273: /* GXTEntry: "The Garwood" */
			return 1307853835;
		case 911761394: /* GXTEntry: "The Carthage" */
			return 2176663;
		case 1676688161: /* GXTEntry: "The Carthage" */
			return -292908182;
		case 1907906229: /* GXTEntry: "The Carthage" */
			return 1638955448;
		case -1621282302: /* GXTEntry: "The Carthage" */
			return 1374083621;
		case -1801773954: /* GXTEntry: "The Carthage" */
			return -1218075359;
		case -1003029579: /* GXTEntry: "The Carthage" */
			return -1516043876;
		case 165089723: /* GXTEntry: "The Wentworth" */
			return -726135810;
		case 395586869: /* GXTEntry: "The Wentworth" */
			return -458052621;
		case 623560802: /* GXTEntry: "The Wentworth" */
			return -926911473;
		case 888203246: /* GXTEntry: "The Wentworth" */
			return -1761242982;
		case 1123550204: /* GXTEntry: "The Wentworth" */
			return -1388135148;
		case 1862360078: /* GXTEntry: "The Wentworth" */
			return -1644486999;
		case -1320869011: /* GXTEntry: "The Wallingford" */
			return -688485759;
		case -1078345642: /* GXTEntry: "The Wallingford" */
			return -381735150;
		case -571278136: /* GXTEntry: "The Wallingford" */
			return 2046513300;
		case -856663353: /* GXTEntry: "The Wallingford" */
			return -1943603989;
		case -632654469: /* GXTEntry: "The Wallingford" */
			return -1635706465;
		case -380562552: /* GXTEntry: "The Wallingford" */
			return -1338786556;
		case 1911459413: /* GXTEntry: "The Gladewater" */
			return -1434447686;
		case -1606456586: /* GXTEntry: "The Gladewater" */
			return -675714260;
		case -1888892597: /* GXTEntry: "The Gladewater" */
			return 249321841;
		case 1154823199: /* GXTEntry: "The Gladewater" */
			return -1070777324;
		case 856068226: /* GXTEntry: "The Gladewater" */
			return 2065543650;
		case 1786380136: /* GXTEntry: "The Gladewater" */
			return 1826887023;
		case 1943475930: /* GXTEntry: "The Londonderry" */
			return -1810703525;
		case 1697315198: /* GXTEntry: "The Londonderry" */
			return -1226563331;
		case -1787340262: /* GXTEntry: "The Londonderry" */
			return -1466006414;
		case -1341845703: /* GXTEntry: "The Londonderry" */
			return 724273546;
		case -1632670578: /* GXTEntry: "The Londonderry" */
			return 1512859531;
		case -932593662: /* GXTEntry: "The Londonderry" */
			return 1266305575;
		case -499308854: /* GXTEntry: "The Monterey" */
			return 1937278961;
		case -785677145: /* GXTEntry: "The Monterey" */
			return 971478216;
		case -18849776: /* GXTEntry: "The Monterey" */
			return 1202597973;
		case -806059467: /* GXTEntry: "The Monterey" */
			return 507698559;
		case 91876671: /* GXTEntry: "The Monterey" */
			return 746355186;
		case -199538046: /* GXTEntry: "The Monterey" */
			return 523755373;
		case -1754780383: /* GXTEntry: "The Sunderland" */
			return 1219798516;
		case -2050586146: /* GXTEntry: "The Sunderland" */
			return -1568843392;
		case -1622000367: /* GXTEntry: "The Sunderland" */
			return 1824681487;
		case -1930520502: /* GXTEntry: "The Sunderland" */
			return 933561301;
		case 1689602008: /* GXTEntry: "The Sunderland" */
			return -614970571;
		case 1384162159: /* GXTEntry: "The Sunderland" */
			return -310186102;
		case -733625577: /* GXTEntry: "The Worthington" */
			return 1209768883;
		case -370348443: /* GXTEntry: "The Worthington" */
			return 1834280485;
		case -1205728560: /* GXTEntry: "The Worthington" */
			return 329528021;
		case 459985248: /* GXTEntry: "The Worthington" */
			return 1778442129;
		case 834207228: /* GXTEntry: "The Worthington" */
			return 805432208;
		case 1230744937: /* GXTEntry: "The Worthington" */
			return -25950091;
		case 1859098900: /* GXTEntry: "The Tyringham" */
			return 922505133;
		case -2137310037: /* GXTEntry: "The Tyringham" */
			return 120975393;
		case 1086995730: /* GXTEntry: "The Tyringham" */
			return 426742932;
		case -1962290800: /* GXTEntry: "The Tyringham" */
			return 2081118674;
		case 1736084082: /* GXTEntry: "The Tyringham" */
			return -1914569345;
		case 2038967949: /* GXTEntry: "The Tyringham" */
			return 1110533655;
		case -1732116082:
			return -2005854180;
		case -2043224964:
			return -1762511586;
		case 1970158315:
			return -1609283862;
		case 1655444839:
			return -1311675804;
		case 1373270980:
			return -1952932365;
		case 1058885194:
			return -1923309189;
		case -1944199774:
			return -1262957735;
		case 999079041:
			return -1516622564;
		case 635605293:
			return -1741811132;
		case 1493792634:
			return -1991740303;
		case -213406744:
			return 2071419087;
		case -505870069:
			return 1352008461;
		case -152330007:
			return -196656840;
		case 2024678512:
			return 108848547;
		case 1188643011:
			return -610365465;
		case 1680243549:
			return -371774376;
		case 845486043:
			return -123352547;
		case -1351118334:
			return 112125487;
		case -1206325201:
			return -741695871;
		case -1514091649:
			return -711024087;
		case 1284413724:
			return 784454766;
		case 976581738:
			return 1114307520;
			return 2026825867;
			return 177900576;
			return 0;
		}

bool func_1043(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
	uParam0->f_2094.f_149 = 257176;
	uParam0->f_2094.f_150 = 258060;
	uParam0->f_2094.f_151 = 258856;
	uParam0->f_2094.f_152 = 258975;
	uParam0->f_2094.f_46 = 1;
	return true;
}

void func_1261(var uParam0, int iParam1, vector3 vParam2, float fParam5, vector3 vParam6, float fParam9)
{
	*uParam0 = iParam1;
	uParam0->f_2 = { vParam6 };
	uParam0->f_5 = fParam9;
	uParam0->f_6 = { vParam2 };
	uParam0->f_9 = fParam5;
}

void func_1262(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!aggregate.mp_intro.func_2315(&vVar0, uParam0->f_3, uParam0->f_19, 527180387) || !aggregate.mp_intro.func_2320(&uVar3, uParam0->f_3, uParam0->f_19, 1807333184))
	{
		return;
	}
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	iVar6 = ENTITY::_0x59B57C4B06531E1E(vParam1, 4f, iVar4, 1);
	iVar5 = 0;
	while (iVar5 < iVar6)
	{
		iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar4);
		if (MISC::_0xBDC6E364C9C78178(iVar7))
		{
			iVar8 = MISC::_0x3FFB15534067DCD4(iVar7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && PED::_0x2D64376CF437363E(iVar8))
			{
				aggregate.fm_deathmatch_controller.func_2189(iVar8, vVar0, uVar3, 2, 1073741824 /* Float: 2f */);
			}
		}
		iVar5++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar4);
}

int func_1647(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2[15];
	var uVar33[8];
	int iVar42;
	int iVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	bool bVar48;
	bool bVar49;
	struct<4> Var50;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<12> Var57;
	struct<14> Var71;

	if (!bParam1 && iParam2 == -1)
	{
		iParam2 = 0;
	}
	iVar0 = 0;
	bVar1 = Global_1051387->f_3214;
	iVar44 = 0;
	while (iVar44 < 8)
	{
		iVar43 = 0;
		if (iVar0 >= 8)
		{
		}
		else
		{
			bVar48 = aggregate.fme_animal_tagging.func_1717(iVar44, 1, 1);
			if (!aggregate.fme_animal_tagging.func_1529(bVar1, bVar48, &Var2, &iVar43, 1, 0))
			{
			}
			else
			{
				bVar46 = false;
				while (bVar46 < iVar43)
				{
					if (aggregate.doc_book.func_272(&(Var2[bVar46 /*2*/])))
					{
						bVar49 = false;
						iVar47 = 0;
						while (iVar47 < iVar42)
						{
							if (&uVar33[iVar47] == &Var2[bVar46 /*2*/])
							{
								bVar49 = true;
							}
							else
							{
								iVar47++;
							}
						}
						if (!bVar49)
						{
							uVar33[iVar42] = &Var2[bVar46 /*2*/];
							iVar42++;
							bVar45 = aggregate.fm_mission_controller.func_1632(&(Var2[bVar46 /*2*/]), 0, 0, 1);
							if (bVar45 > 0)
							{
								if (!bParam1)
								{
									Var50 = { aggregate.binoculars.func_81(&(Var2[bVar46 /*2*/]), 0) };
									aggregate.mp_intro.func_2535(uParam0, &Var50, &(Var2[bVar46 /*2*/]), bVar45, (iParam2 + iVar0));
								}
								iVar0++;
							}
						}
						Jump @290; //curOff = 262
					}
					else if (&Var2[bVar46 /*2*/] == 0)
					{
					}
					else
					{
						bVar46++;
					}
				}
			}
			iVar44++;
		}
	}
	if (iVar42 == 0)
	{
		return 0;
	}
	iVar54 = aggregate.mp_intro.func_2536(&(uVar33[0]));
	if (iVar54 == 0)
	{
		return iVar0;
	}
	Var57.f_9 = -1591664384;
	Var71 = { aggregate.binoculars.func_85(0, -1591664384, -1591664384, -1591664384, 0, iVar54, 0) };
	if (aggregate.binoculars.func_88(&Var71, &iVar55, &iVar56, 1))
	{
		bVar46 = false;
		while (bVar46 < iVar56)
		{
			if (aggregate.binoculars.func_71(&Var57, bVar46, iVar55, iVar56))
			{
				bVar49 = false;
				iVar47 = 0;
				while (iVar47 < iVar42)
				{
					if (&uVar33[iVar47] == Var57.f_4)
					{
						bVar49 = true;
					}
					else
					{
						iVar47++;
					}
				}
				if (!bVar49 && !aggregate.hub.func_86(&Var57))
				{
					if (!bParam1)
					{
						aggregate.mp_intro.func_2535(uParam0, &Var57, Var57.f_4, Var57.f_11, (iParam2 + iVar0));
					}
					iVar0++;
				}
			}
			bVar46++;
		}
		aggregate.binoculars.func_73(iVar55);
	}
	return iVar0;
}

float func_2052(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 1:
			fVar0 = 10f;
			break;
		case 2:
			fVar0 = 10f;
			break;
		case 3:
			fVar0 = 10f;
			break;
		case 4:
			fVar0 = 10f;
			break;
		case 5:
			fVar0 = 10f;
			break;
		case 6:
			fVar0 = 10f;
			Jump @226; //curOff = 153
			fVar0 = 10f;
			Jump @226; //curOff = 163
			fVar0 = 10f;
			Jump @226; //curOff = 173
			fVar0 = 10f;
			Jump @226; //curOff = 183
			fVar0 = 10f;
			Jump @226; //curOff = 193
			fVar0 = 10f;
			Jump @226; //curOff = 203
			fVar0 = 10f;
			Jump @226; //curOff = 213
			fVar0 = 10f;
			return fVar0;
		}

int func_3232(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117 /* GXTEntry: "Alaskan Ginseng" */;
		case 3:
			return 1660962977 /* GXTEntry: "American Ginseng" */;
		case 4:
			return -131409450 /* GXTEntry: "Bay Bolete" */;
		case 5:
			return -1487527516 /* GXTEntry: "Blackberry" */;
		case 6:
			return 561629573 /* GXTEntry: "Blackcurrant" */;
		case 7:
			return 1829679323 /* GXTEntry: "Burdock Root" */;
		case 8:
			return -618617794 /* GXTEntry: "Chanterelles" */;
		case 11:
			return 653458791 /* GXTEntry: "Common Bulrush" */;
		case 12:
			return 437319607 /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return -1519488075 /* GXTEntry: "Desert Sage" */;
			Jump @901; //curOff = 436
			return 1014445254 /* GXTEntry: "English Mace" */;
			Jump @901; //curOff = 447
			return 224814421 /* GXTEntry: "Evergreen Huckleberry" */;
			Jump @901; //curOff = 458
			return 1012187868 /* GXTEntry: "Golden Currant" */;
			Jump @901; //curOff = 469
			return -1040706491 /* GXTEntry: "Hummingbird Sage" */;
			Jump @901; //curOff = 480
			return -1910627346 /* GXTEntry: "Indian Tobacco" */;
			Jump @901; //curOff = 491
			return -1812487593 /* GXTEntry: "Milkweed" */;
			Jump @901; //curOff = 502
			return 1983971282 /* GXTEntry: "Oleander Sage" */;
			Jump @901; //curOff = 513
			return 1561519041 /* GXTEntry: "Oregano" */;
			Jump @901; //curOff = 524
			return -980496853 /* GXTEntry: "Parasol Mushroom" */;
			Jump @901; //curOff = 535
			return -1738887126 /* GXTEntry: "Prairie Poppy" */;
			Jump @901; //curOff = 546
			return 424771379 /* GXTEntry: "Ram\'s Head" */;
			Jump @901; //curOff = 557
			return 787316814 /* GXTEntry: "Red Raspberry" */;
			Jump @901; //curOff = 568
			return 984616481 /* GXTEntry: "Red Sage" */;
			Jump @901; //curOff = 579
			return 1078285403 /* GXTEntry: "Vanilla Flower" */;
			Jump @901; //curOff = 590
			return -262897007 /* GXTEntry: "Violet Snowdrop" */;
			Jump @901; //curOff = 601
			return -1727702531 /* GXTEntry: "Wild Carrot" */;
			Jump @901; //curOff = 612
			return 1783324404 /* GXTEntry: "Wild Feverfew" */;
			Jump @901; //curOff = 623
			return 1288848815 /* GXTEntry: "Wild Mint" */;
			Jump @901; //curOff = 634
			return 918090738 /* GXTEntry: "Wintergreen Berry" */;
			Jump @901; //curOff = 645
			return 170272501 /* GXTEntry: "Yarrow" */;
			Jump @901; //curOff = 656
			return 2056650000 /* GXTEntry: "Acuna\'s Star Orchid" */;
			Jump @901; //curOff = 667
			return -1195354638 /* GXTEntry: "Cigar Orchid" */;
			Jump @901; //curOff = 678
			return 1077596967 /* GXTEntry: "Clamshell Orchid" */;
			Jump @901; //curOff = 689
			return -2145199848 /* GXTEntry: "Dragon\'s Mouth Orchid" */;
			Jump @901; //curOff = 700
			return 752824478 /* GXTEntry: "Ghost Orchid" */;
			Jump @901; //curOff = 711
			return -819513569 /* GXTEntry: "Lady of the Night Orchid" */;
			Jump @901; //curOff = 722
			return 1906968775 /* GXTEntry: "Lady Slipper Orchid" */;
			Jump @901; //curOff = 733
			return -135434663 /* GXTEntry: "Moccasin Flower Orchid" */;
			Jump @901; //curOff = 744
			return 920123680 /* GXTEntry: "Night Scented Orchid" */;
			Jump @901; //curOff = 755
			return 150470908 /* GXTEntry: "Queen\'s Orchid" */;
			Jump @901; //curOff = 766
			return -1665125257 /* GXTEntry: "Rat Tail Orchid" */;
			Jump @901; //curOff = 777
			return 1587928307 /* GXTEntry: "Sparrow\'s Egg Orchid" */;
			Jump @901; //curOff = 788
			return -1738925422 /* GXTEntry: "Spider Orchid" */;
			Jump @901; //curOff = 799
			return 656594395;
			Jump @901; //curOff = 810
			return -1174738785;
			Jump @901; //curOff = 821
			return 1073505629;
			Jump @901; //curOff = 832
			return -658674894;
			Jump @901; //curOff = 843
			return -1504155535;
			Jump @901; //curOff = 854
			return -1917345716;
			Jump @901; //curOff = 865
			return 1823406682;
			Jump @901; //curOff = 876
			return -1003637772;
			Jump @901; //curOff = 887
			return -1571524081;
			return 0;
		}

