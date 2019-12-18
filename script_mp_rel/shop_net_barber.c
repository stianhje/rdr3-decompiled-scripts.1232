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
	struct<44> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 } ;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == aggregate_func_13

void func_41(var uParam0)
{
	aggregate_func_6708(uParam0, 0, 60985, 61064, 61078, 61092);
	aggregate_func_4358(uParam0, 61194);
}

void func_90(var uParam0, bool bParam1)
{
	if (!TASK::_0x841475AC96E794D1(uParam0->f_2045))
	{
		uParam0->f_2045 = TASK::_0xF533D68FF970D190(aggregate_func_1977(PLAYER::GET_PLAYER_INDEX()), -289473187, 10f, 1, 0);
	}
	if (Local_21.f_6 < 2)
	{
		func_368(uParam0);
	}
	if (Local_21.f_7 < 2)
	{
		func_369(uParam0);
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
			Jump @2466; //curOff = 1480
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
			Jump @2466; //curOff = 1732
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
			Jump @2466; //curOff = 1820
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
			Jump @2466; //curOff = 1888
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
			Jump @2466; //curOff = 1976
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
			Jump @2466; //curOff = 2133
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
			Jump @2466; //curOff = 2228
			switch (uParam0->f_1)
			{
				case 26:
					return "0216_U_F_M_LagMother_01";
				default:
					break;
			}
			return "0216_U_F_M_LagMother_01";
			Jump @2466; //curOff = 2261
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
			Jump @2466; //curOff = 2336
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
			Jump @2466; //curOff = 2411
			if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[11 /*8*/]))
			{
				aggregate_func_6220();
			}
			return aggregate_func_1966(*(Global_1957543->f_319[11 /*8*/]));
			Jump @2466; //curOff = 2456
			return "SHOPKEEPER_TEST_PED";
			return "SHOPKEEPER_TEST_PED";
		}

void func_122(var uParam0)
{
	*uParam0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	}
	NETWORK::_0x4B05B97BA46F419D(1);
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_21.f_4, "player", Global_35);
	ANIMSCENE::_DELETE_ANIM_SCENE(Local_21.f_4);
	CAM::_0x0A5A4F1979ABB40E(&(Local_21.f_11));
	aggregate_func_5867(uParam0, 1);
	STREAMING::REMOVE_ANIM_DICT(func_452());
	WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
	Local_21.f_3 = 0;
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
		if (!func_728(&(uParam0->f_4), iParam1, iParam2, aggregate_func_6464(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_729(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate_func_4242(&(uParam0->f_4), 137359);
	aggregate_func_4242(&(uParam0->f_4), 137396);
	aggregate_func_4932(&(uParam0->f_4), 137424);
	aggregate_func_4932(&(uParam0->f_4), 137959);
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

bool func_332(var uParam0)
{
	int iVar0;

	iVar0 = aggregate_func_7031(0);
	if (iVar0 == 24043185)
	{
		return func_748(uParam0, 363280487, joaat("use"), 0);
	}
	else if (iVar0 == 2026485318)
	{
		return func_748(uParam0, -176772522, joaat("use"), 0);
	}
	return false;
}

int func_337(var uParam0, bool bParam1, var uParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;

	iVar3 = aggregate_func_5642(uParam0);
	if (func_752(uParam0, aggregate_func_3183(uParam0), bParam1, &uVar0, &uVar1, &bVar2))
	{
		if (iVar3 == 1705401718 || iVar3 == 310306577)
		{
			*uParam2 = uVar1;
			aggregate_func_3212(uParam0, bVar2);
		}
		else
		{
			*uParam2 = bVar2;
		}
		return 1;
	}
	return 0;
}

void func_368(var uParam0)
{
	switch (Local_21.f_6)
	{
		case 0:
			if (!TASK::_0x841475AC96E794D1(uParam0->f_2045))
			{
			}
			else
			{
				if (!ANIMSCENE::_0x25557E324489393C(Local_21.f_4))
				{
					Local_21.f_4 = ANIMSCENE::_CREATE_ANIM_SCENE("script@common@shop@barber_player", 0, func_779(uParam0), false, true);
				}
				else
				{
					aggregate_func_4714(1);
				}
				Jump @610; //curOff = 120
				if (ANIMSCENE::_0x25557E324489393C(Local_21.f_4))
				{
					if (!ANIMSCENE::_0x477122B8D05E7968(Local_21.f_4, 1, 0))
					{
						if (!ANIMSCENE::_0x59606519FF9D3EC2(Local_21.f_4, 1))
						{
							ANIMSCENE::LOAD_ANIM_SCENE(Local_21.f_4);
						}
					}
					else
					{
						aggregate_func_4714(2);
					}
				}
				else
				{
					aggregate_func_4714(0);
				}
				Jump @610; //curOff = 185
				if (uParam0->f_2045 != 0)
				{
					if (ANIMSCENE::_0x477122B8D05E7968(Local_21.f_4, 1, 0))
					{
						aggregate_func_3849(&(Global_1951131->f_1055), &(Global_1951131->f_1055.f_9));
						aggregate_func_8313();
						aggregate_func_4733(3, 0, 0, 0, 0);
						aggregate_func_4733(4, 0, 0, 0, 0);
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_4, "player", Global_35, 0);
						ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_21.f_4, TASK::_0xA8452DD321607029(uParam0->f_2045, 1) - Vector(0.75f, 0f, 0f), 0f, 0f, (180f + TASK::_0xB93EA7184BAA85C3(uParam0->f_2045, 1)), 2);
						ANIMSCENE::START_ANIM_SCENE(Local_21.f_4);
						PED::_0x7F5D88333EE8A86F(Global_35, 1);
						func_783(Global_35);
						aggregate_func_4293(&(Local_21.f_8), 1);
						aggregate_func_4714(5);
					}
				}
				else
				{
					uParam0->f_2045 = TASK::_0xF533D68FF970D190(aggregate_func_1977(PLAYER::GET_PLAYER_INDEX()), -289473187, 10f, 1, 0);
				}
				Jump @610; //curOff = 385
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_21.f_4, "Idle", 1))
				{
					if (func_785(func_784(), Local_21.f_4))
					{
						aggregate_func_4714(5);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_21.f_4, "IDLE_BOOL", true, false);
					}
				}
				Jump @610; //curOff = 438
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_21.f_4, "Idle", 1))
				{
					if (func_785(func_786(), Local_21.f_4))
					{
						aggregate_func_4714(5);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_21.f_4, "IDLE_BOOL", true, false);
					}
				}
				Jump @610; //curOff = 491
				if (aggregate_func_1526(&(Local_21.f_8)) > 100)
				{
					aggregate_func_5464(-1801499084, Global_35, 1, 1);
					WEAPON::_0x4F806A6CFED89468(Global_35, 0);
					aggregate_func_4283(&(Local_21.f_8));
					aggregate_func_7754(&(Local_21.f_8));
				}
				if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_21.f_4, "Idle", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_21.f_4, "IDLE_BOOL", false, false);
				}
				Jump @610; //curOff = 577
				func_789(uParam0);
				aggregate_func_4714(7);
				Jump @610; //curOff = 591
				func_785("PB_EXIT_NO_PAY_L", Local_21.f_4);
			}
			default:
				break;
	}
}

void func_369(var uParam0)
{
	switch (Local_21.f_7)
	{
		case 0:
			switch (uParam0->f_19)
			{
				case 5:
					Local_21.f_5 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@barber@barber_saint_denis", 0, 0, false, true);
					break;
				case 81:
					Local_21.f_5 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@barber@barber_valentine", 0, 0, false, true);
					break;
				case 40:
					Local_21.f_5 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@barber@barber_blackwater", 0, 0, false, true);
					break;
				default:
					Local_21.f_5 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@barber@barber_saint_denis", 0, 0, false, true);
					break;
			}
			aggregate_func_4714(1);
			break;
		case 1:
			if (ANIMSCENE::_0x25557E324489393C(Local_21.f_5))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_21.f_5);
				aggregate_func_4714(2);
			}
			break;
		case 2:
			if (ANIMSCENE::_0x477122B8D05E7968(Local_21.f_5, 1, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_21.f_5, TASK::_0xA8452DD321607029(uParam0->f_2045, 1), 0f, 0f, TASK::_0xB93EA7184BAA85C3(uParam0->f_2045, 1), 2);
				ANIMSCENE::START_ANIM_SCENE(Local_21.f_5);
				aggregate_func_4714(3);
			}
			break;
		case 3:
			if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() == -1)
			{
				switch (uParam0->f_19)
				{
					case 5:
						GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("INT_Barber_Exposure_StD", 2f);
						break;
					case 81:
						GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("INT_Barber_Exposure_Val", 2f);
						break;
					case 40:
						GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("INT_Barber_Exposure_Blk", 2f);
						break;
					default:
						GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("INT_Barber_Exposure_StD", 2f);
						break;
				}
			}
			if (func_785("plMain", Local_21.f_5))
			{
				aggregate_func_4714(4);
			}
			break;
		case 4:
			break;
		case 5:
			if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
			{
				GRAPHICS::_0xBB6C707F20D955D4(2f);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_21.f_5, "Breakout", true, false);
			aggregate_func_4714(6);
			break;
		case 6:
			aggregate_func_4714(0);
			break;
	}
}

void func_395(var uParam0)
{
	uParam0->f_2045 = TASK::_0xF533D68FF970D190((Global_1051387->f_69[uParam0->f_3 /*76*/])->f_3, -289473187, 10f, 0, 0);
	if (uParam0->f_2045 == 0)
	{
		aggregate_func_9367(uParam0);
	}
}

int func_405(var uParam0)
{
	bool bVar0;

	bVar0 = true;
	STREAMING::REQUEST_ANIM_DICT(func_452());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_452()))
	{
		bVar0 = false;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_35))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
		return 0;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 408, true))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		return 0;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, 0);
	if (bVar0)
	{
		Local_21 = (Global_1051387->f_69[uParam0->f_3 /*76*/])->f_21;
		Local_21.f_1 = TASK::_0x7467165EE97D3C68(uParam0->f_2045);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
		return 1;
	}
	return 0;
}

void func_407(var uParam0)
{
	func_368(uParam0);
	func_369(uParam0);
	if (CAM::_0xDD0B7C5AE58F721D(&(Local_21.f_11)))
	{
		if (CAM::_0x927B810E43E99932(&(Local_21.f_11)))
		{
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 71936841) || Local_21.f_42)
		{
			Local_21.f_42 = 0;
			CAM::_0xB8B207C34285E978(&(Local_21.f_11));
			Local_21.f_11.f_16 = Global_35;
			CAM::_0xAC77757C05DE9E5A(&(Local_21.f_11));
		}
		CAM::_0x8370D34BD2E60B73();
	}
	else
	{
		StringCopy(&(Local_21.f_11.f_8), "BARBER_ORBIT_REQUEST", 64);
		StringCopy(&(Local_21.f_11), "barber_orbit_cam", 64);
		CAM::_0x6A4D224FC7643941(&(Local_21.f_11));
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 71936841))
		{
			Local_21.f_42 = 1;
		}
	}
}

void func_408(var uParam0)
{
	_NAMESPACE30::_0x0546B117BB17548B();
	if (aggregate_func_2851() != 0)
	{
		Local_21.f_3 = aggregate_func_2851();
	}
	if (Local_21.f_3 == -1395073769)
	{
		func_808(uParam0);
	}
	else
	{
		func_809(uParam0);
	}
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_0x8910C24B7E0046EC();
	CAM::_0x3C8F74E8FE751614();
}

bool func_420(var uParam0)
{
	func_368(uParam0);
	if (Local_21.f_7 < 6)
	{
		func_369(uParam0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 853179478))
	{
		CAM::_0x0A5A4F1979ABB40E(&(Local_21.f_11));
	}
	if (ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_21.f_4) > 0.75f && NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		NETWORK::_0x4B05B97BA46F419D(0);
		aggregate_func_668(0, 1, 1, 0);
	}
	func_811(Local_21.f_43, ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_21.f_4), Global_35);
	Local_21.f_42 = 0;
	Local_21.f_3 = 0;
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_4, 0))
	{
		aggregate_func_4714(0);
		return true;
	}
	if (Local_21.f_6 < 6)
	{
		aggregate_func_4714(6);
	}
	if (Local_21.f_7 < 6)
	{
		aggregate_func_4714(5);
	}
	return false;
}

void func_434(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	}
	aggregate_func_5867(uParam0, 1);
	aggregate_func_4733(13, 0, 0, 0, 0);
	aggregate_func_4733(36, 0, 0, 0, 0);
	aggregate_func_5004(0, 1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
	func_811(Local_21.f_43, 1f, Global_35);
}

char* func_452()
{
	return "face_human@gen_male@base";
}

void func_698(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate_func_4577() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_748(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate_func_4358(uParam0, 194142);
			aggregate_func_4358(uParam0, 195062);
			aggregate_func_4358(uParam0, 195662);
			aggregate_func_4358(uParam0, 195956);
			aggregate_func_4358(uParam0, 196159);
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

bool func_728(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
	uParam0->f_1279 = 218573;
	uParam0->f_1280 = 218582;
	uParam0->f_1281 = 218591;
	uParam0->f_1282 = 218591;
	uParam0->f_222 = iParam5;
	aggregate_func_4252(uParam0, 0);
	return true;
}

bool func_729(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	uParam0->f_1279 = 218573;
	uParam0->f_1280 = 218582;
	uParam0->f_1281 = 218591;
	uParam0->f_1282 = 218591;
	uParam0->f_222 = iParam4;
	aggregate_func_4252(uParam0, 0);
	return true;
}

bool func_748(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
	uParam0->f_2094.f_149 = 220588;
	uParam0->f_2094.f_150 = 221472;
	uParam0->f_2094.f_151 = 222268;
	uParam0->f_2094.f_152 = 222387;
	uParam0->f_2094.f_46 = 1;
	return true;
}

bool func_752(var uParam0, bool bParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5)
{
	struct<6> Var0;
	bool bVar7;

	*bParam3 = 0;
	if (!aggregate_func_3214(bParam1))
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_INFO_BY_ID(bParam1, bParam2, &Var0))
	{
		if (Var0.f_5 > 0)
		{
			bVar7 = -1;
			*uParam4 = 0;
			*uParam4 = 0;
			while (*uParam4 < Var0.f_5)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_GET_SHOP_LAYOUT_MENU_PAGE_KEY(bParam1, bParam2, *uParam4, &bVar7))
				{
					if (aggregate_func_2239(uParam0, bParam1, bVar7, bParam3, bParam5))
					{
						return true;
					}
				}
				*uParam4++;
			}
		}
	}
	return false;
}

char* func_779(var uParam0)
{
	return "PB_ENTER_L_NO_HAT";
}

void func_783(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

char* func_784()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			return "PB_OK";
		case 1:
			return "PB_APPROVE";
		case 2:
			return "PB_CHECKOUT_SHORT";
		default:
			break;
	}
	return "Invalid";
}

bool func_785(char* sParam0, int iParam1)
{
	if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iParam1, 0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iParam1, sParam0) && !ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iParam1, sParam0);
		}
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam0) && !ANIMSCENE::_0x1F0E401031E20146(iParam1, sParam0))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam1, sParam0, true);
			return true;
		}
	}
	return false;
}

char* func_786()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			return "PB_ALITTLE_MORE";
		case 1:
			return "PB_CUT_N_SHAVE";
		default:
			break;
	}
	return "Invalid";
}

void func_789(var uParam0)
{
	Local_21.f_43 = func_1240(uParam0);
	ANIMSCENE::SET_ANIM_SCENE_INT(Local_21.f_4, "CameraIndex", Local_21.f_43, false);
}

void func_808(var uParam0)
{
	float fVar0;

	if (!aggregate_func_4278(uParam0, 1))
	{
		if (!aggregate_func_927(PLAYER::PLAYER_PED_ID(), -2017877118))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_452(), func_1259(), 1090519040 /* Float: 8f */, -8f, -1, 16, 0, 0, 0, 0, 0, 0);
			aggregate_func_4266(uParam0, 1);
			aggregate_func_4266(uParam0, 2);
		}
	}
	else if (!aggregate_func_4278(uParam0, 4))
	{
		fVar0 = ENTITY::_0x627520389E288A73(PLAYER::PLAYER_PED_ID(), func_452(), func_1259());
		if (fVar0 >= Local_21.f_2)
		{
			Local_21.f_2 = fVar0;
			return;
		}
		if (!aggregate_func_927(PLAYER::PLAYER_PED_ID(), -2017877118))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_452(), func_1261(), 1090519040 /* Float: 8f */, -8f, -1, 16, 0, 0, 0, 0, 0, 0);
			aggregate_func_4266(uParam0, 4);
			Local_21.f_2 = 0f;
		}
	}
	else
	{
		fVar0 = ENTITY::_0x627520389E288A73(PLAYER::PLAYER_PED_ID(), func_452(), func_1261());
		if (fVar0 >= Local_21.f_2)
		{
			Local_21.f_2 = fVar0;
			return;
		}
		if (!aggregate_func_927(PLAYER::PLAYER_PED_ID(), -2017877118))
		{
			TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_452(), func_1261(), 1090519040 /* Float: 8f */, -8f, -1, 16, 0, 0, 0, 0, 0, 0);
			Local_21.f_2 = 0f;
		}
	}
}

void func_809(var uParam0)
{
	if (aggregate_func_4278(uParam0, 1) && !aggregate_func_4278(uParam0, 2))
	{
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_452(), func_1262(), 1090519040 /* Float: 8f */, -8f, -1, 16, 0, 0, 0, 0, 0, 0);
		aggregate_func_4266(uParam0, 2);
		aggregate_func_4266(uParam0, 1);
		aggregate_func_4266(uParam0, 4);
		Local_21.f_2 = 0f;
	}
}

void func_811(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2) || ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = iParam0;
	if ((iVar0 >= 3 && fParam1 > 0.8f) || (iVar0 < 3 && fParam1 > 0.6f))
	{
		CAM::_0x82E41D6ADE924FCA(Global_35);
		aggregate_func_6074(Global_35, -1801499084, 0, 0);
		WEAPON::_0x4F806A6CFED89468(Global_35, 1);
	}
}

bool func_1152(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.f_1)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_1240(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	int iVar17;

	vVar0 = { TASK::_0xA8452DD321607029(uParam0->f_2045, 1) };
	vVar0.f_2 = 0f;
	vVar3 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
	vVar3.f_2 = 0f;
	vVar6 = { aggregate_func_2907(vVar3 - vVar0) };
	vVar9 = { aggregate_func_2371(TASK::_0xB93EA7184BAA85C3(uParam0->f_2045, 1)) };
	vVar12 = { aggregate_func_8932(vVar9, 0) };
	fVar15 = aggregate_func_5364(vVar12, vVar6);
	fVar16 = aggregate_func_5364(vVar9, vVar6);
	if (fVar16 > 0f)
	{
		if (fVar15 >= -0.4f && fVar15 <= 0.4f)
		{
			iVar17 = 1;
		}
		else if (fVar15 > 0f)
		{
			iVar17 = 6;
		}
		else
		{
			iVar17 = 2;
		}
	}
	else if (fVar15 >= -0.4f && fVar15 <= 0.4f)
	{
		iVar17 = 4;
	}
	else if (fVar15 > 0f)
	{
		iVar17 = 5;
	}
	else
	{
		iVar17 = 3;
	}
	return iVar17;
}

char* func_1259()
{
	return "Face_Dentistry_In";
}

char* func_1261()
{
	return "Face_Dentistry_Loop";
}

char* func_1262()
{
	return "Face_Dentistry_Out";
}

bool func_2162(var uParam0, bool bParam1, bool bParam2)
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
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;

	if (bParam2 == 0)
	{
		bVar0 = aggregate_func_6134(uParam0, bParam1);
	}
	else
	{
		bVar0 = bParam2;
	}
	bVar1 = true;
	bVar2 = aggregate_func_681(uParam0, bParam1, bVar0);
	bVar3 = aggregate_func_6297(bParam1, aggregate_func_5845(bParam1), 1);
	bVar4 = !aggregate_func_3244(uParam0, bParam1);
	bVar6 = aggregate_func_800(uParam0, bParam1, bVar0, -1, -1);
	if (aggregate_func_3145(bParam1))
	{
		bVar3 = true;
		bVar4 = true;
	}
	iVar9 = aggregate_func_3180(uParam0);
	switch (bVar0)
	{
		case -384358143:
			bVar1 = ((bVar3 && bVar4) && !aggregate_func_5544(bParam1, 0));
			break;
		case 1394581936:
			if (aggregate_func_4278(uParam0, 32) && aggregate_func_5659(bParam1))
			{
				bVar3 = aggregate_func_2896(bParam1, 205718222);
			}
			bVar1 = ((bVar3 && bVar4) || (bVar2 && !bVar6));
			if (aggregate_func_5870(bParam1))
			{
				bVar1 = ((bVar3 && bVar4) || bVar2);
			}
			if (aggregate_func_5659(bParam1))
			{
				iVar11 = aggregate_func_5797(0);
				iVar12 = aggregate_func_5635(0);
				if (iVar11 >= iVar12)
				{
					bVar1 = false;
				}
			}
			break;
		case -853534656:
			bVar1 = ((bVar3 && bVar4) || bVar2);
			if ((aggregate_func_2827(bParam1) != -999503751 && aggregate_func_2827(bParam1) != -1044137471) && aggregate_func_2827(bParam1) != 884451223)
			{
				if (aggregate_func_5852(uParam0->f_3))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
					{
					}
					else
					{
						bVar5 = aggregate_func_964(iVar9, bParam1, &uVar10);
						if (!bVar5)
						{
						}
						bVar1 = (bVar1 && bVar5);
						Jump @1005; //curOff = 544
						bVar1 = (bVar3 && bVar4);
						bVar2 = false;
						bVar5 = aggregate_func_964(iVar9, bParam1, &uVar10);
						if (aggregate_func_5852(uParam0->f_3))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
							{
							}
							else
							{
								if (!bVar5)
								{
								}
								bVar1 = (bVar1 && bVar5);
								Jump @1005; //curOff = 626
								bVar2 = false;
								bVar1 = (bVar3 && bVar4);
								Jump @1005; //curOff = 643
								if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
								{
								}
								else
								{
									if (aggregate_func_5852(uParam0->f_3))
									{
										bVar1 = aggregate_func_964(iVar9, bParam1, &uVar10);
									}
									Jump @1005; //curOff = 696
									aggregate_func_5810(uParam0->f_3, &bVar13);
									iVar14 = aggregate_func_5812(uParam0->f_3);
									bVar1 = ((!aggregate_func_2074(bParam1, bVar13, 1) && bVar4) && aggregate_func_5539(bParam1, bVar13, 0, 1, iVar14));
									Jump @1005; //curOff = 755
									bVar1 = ((aggregate_func_4574(aggregate_func_7063(bParam1, 0)) && bVar4) && !aggregate_func_5544(bParam1, 0));
									Jump @1005; //curOff = 791
									bVar1 = ((bVar3 && bVar4) && aggregate_func_5808());
									Jump @1005; //curOff = 814
									bVar1 = ((bVar3 && bVar4) && aggregate_func_5917());
									Jump @1005; //curOff = 837
									bVar1 = ((bVar3 || aggregate_func_681(uParam0, bParam1, bVar0)) && bVar4);
									Jump @1005; //curOff = 867
									bVar1 = ((bVar3 && bVar4) && !aggregate_func_5544(bParam1, 0));
									Jump @1005; //curOff = 894
									if (aggregate_func_5872(bParam1))
									{
										bVar6 = bVar2;
									}
									bVar1 = (aggregate_func_5544(bParam1, 0) || (bVar3 && bVar4));
									Jump @1005; //curOff = 934
									bVar7 = aggregate_func_5693(aggregate_func_4615(uParam0));
									bVar1 = !bVar7;
									Jump @1005; //curOff = 954
									bVar8 = aggregate_func_5694(aggregate_func_4615(uParam0));
									bVar1 = !bVar8;
									Jump @1005; //curOff = 974
									bVar1 = true;
									Jump @1005; //curOff = 980
									bVar1 = ((bVar3 && bVar4) || bVar2);
								}
							}
							if (uParam0->f_2094.f_139)
							{
								Stack.Push(bVar1);
								Stack.Push(uParam0);
								Stack.Push(aggregate_func_4911(uParam0));
								Stack.Push(bParam1);
								Stack.Push(bVar0);
								Call_Loc(uParam0->f_2094.f_140);
								bVar1 = (StackVal && StackVal);
							}
							return bVar1;
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_2197(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	var uVar1;

	return func_752(uParam0, bParam1, bParam2, bParam3, &uVar0, &uVar1);
}

