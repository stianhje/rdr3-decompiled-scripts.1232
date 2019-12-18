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
	struct<16> Local_25 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == aggregate_func_13

void func_18(var uParam0)
{
	int iVar0;
	int iVar1;

	aggregate_func_1190(uParam0->f_3, &iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_FLEEING(iVar0) && !PED::_0xB086C8C0F5701D14(iVar0))
		{
			TASK::TASK_COWER(iVar0, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iVar0, true);
			aggregate_func_4466(uParam0->f_4, 1048576);
			aggregate_func_4675(uParam0->f_3, 16777216);
		}
		else if (TASK::GET_IS_TASK_ACTIVE(iVar0, 7))
		{
			if (aggregate_func_4453(uParam0->f_4, 1048576))
			{
				aggregate_func_4456(uParam0->f_4, 1048576);
			}
			if (aggregate_func_4692(uParam0->f_3, 16777216))
			{
				aggregate_func_4344(uParam0->f_3, 16777216);
			}
		}
		if ((MISC::GET_FRAME_COUNT() % 60) == 0)
		{
			iVar1 = func_237(iVar0);
			if (TASK::_0x841475AC96E794D1(iVar1))
			{
				if (TASK::_0xDF7993356F52359A(iVar0, 0) != iVar1)
				{
					TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar1, 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
				}
			}
		}
	}
}

void func_39(var uParam0)
{
	int iVar0;

	aggregate_func_1190(uParam0->f_3, &iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !aggregate_func_1557(iVar0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, true);
	}
}

void func_41(var uParam0)
{
	aggregate_func_8077(uParam0, 10);
	aggregate_func_7000(uParam0, 10, 61685);
	aggregate_func_7686(uParam0, 10, 61804);
	aggregate_func_8077(uParam0, 15);
	func_342(uParam0, 15, 61968);
	aggregate_func_7000(uParam0, 15, 62121);
	aggregate_func_7686(uParam0, 15, 62203);
	func_345(uParam0, 12);
	aggregate_func_7000(uParam0, 12, 62399);
	aggregate_func_6708(uParam0, 11, 62411, 62473, 62514, 62528);
	aggregate_func_7000(uParam0, 11, 62655);
}

void func_44(var uParam0)
{
	uParam0->f_2421.f_21 = 1;
	uParam0->f_2421.f_22 = 63418;
	uParam0->f_2421.f_23 = 1;
	uParam0->f_2421.f_24 = 63485;
	uParam0->f_2421.f_27 = 1;
	uParam0->f_2421.f_28 = 63552;
	uParam0->f_2421.f_37 = 1;
	uParam0->f_2421.f_38 = 63561;
	uParam0->f_2421.f_29 = 1;
	uParam0->f_2421.f_30 = 63659;
	uParam0->f_2421.f_33 = 1;
	uParam0->f_2421.f_34 = 63965;
}

void func_65(var uParam0)
{
	Local_25.f_5 = -1;
	Local_25.f_7 = 0;
	Local_25.f_6 = 0;
	*uParam0 = *uParam0;
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
			Jump @2453; //curOff = 985
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

int func_237(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar0 = { vVar0 + aggregate_func_2907(Global_36 - vVar0) * Vector(2f, 2f, 2f) };
	iVar3 = TASK::_0xF533D68FF970D190(vVar0, 1041923169, 4f, 0, 0);
	if (TASK::_0x841475AC96E794D1(iVar3))
	{
		return iVar3;
	}
	return 0;
}

bool func_320(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
		if (!func_742(&(uParam0->f_4), iParam1, iParam2, aggregate_func_6464(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_743(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate_func_4242(&(uParam0->f_4), 137976);
	aggregate_func_4242(&(uParam0->f_4), 138013);
	aggregate_func_4932(&(uParam0->f_4), 138041);
	aggregate_func_4932(&(uParam0->f_4), 138576);
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

int func_337(var uParam0)
{
	if (Local_25.f_10)
	{
		if (!BOUNTY::_0x03B61CD51097DE60(&(Local_25.f_11)))
		{
			Local_25.f_10 = 0;
		}
		else
		{
			return 0;
		}
	}
	if (Local_25.f_8 > 0 && aggregate_func_4574(Local_25.f_8))
	{
		return 1;
	}
	return 0;
}

int func_339(var uParam0, int iParam1)
{
	struct<2> Var0;
	struct<7> Var2;
	int iVar9;

	Var2 = { aggregate_func_3106() };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var2, &Var0);
	Local_25.f_8 = Var0.f_1;
	if (Local_25.f_10)
	{
		Local_25.f_8 = 0;
	}
	iVar9 = aggregate_func_2045("SHOP_POSTOFFICE_PAY_BOUNTY", iParam1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	if (Local_25.f_8 > 0)
	{
		aggregate_func_1558(iVar9, "SHOP_POSTOFFICE_PAY_BOUNTY_MP", Local_25.f_8, 1);
	}
	return iVar9;
}

int func_341(var uParam0)
{
	if (Local_25.f_10)
	{
		return 0;
	}
	else if (Local_25.f_8 == 0)
	{
		return 0;
	}
	else if (!aggregate_func_4486(-1458756770, &(Local_25.f_15)) && !aggregate_func_4488(-1458756770, &(Local_25.f_15)))
	{
		return 0;
	}
	Local_25.f_9 = aggregate_func_6499(-1458756770, Local_25.f_15, 1, 0, 1, 0);
	return 1;
}

int func_342(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 16 || iParam1 <= -1)
	{
		return 0;
	}
	(uParam0->f_21[iParam1 /*8*/])->f_6 = iParam2;
	aggregate_func_4958(uParam0, iParam1, 256);
	return 1;
}

int func_343(var uParam0)
{
	if (Local_25.f_10)
	{
		if (!BOUNTY::_0x03B61CD51097DE60(&(Local_25.f_11)))
		{
			Local_25.f_10 = 0;
		}
		else
		{
			return 0;
		}
	}
	if (aggregate_func_4985(Local_25.f_15) || (aggregate_func_5210(Local_25.f_15) && aggregate_func_4574(Local_25.f_9)))
	{
		return 1;
	}
	return 0;
}

int func_344(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate_func_2045("SHOP_POSTOFFICE_PAY_BOUNTY_MP_REWARD", iParam1, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	if (aggregate_func_5210(Local_25.f_15))
	{
		aggregate_func_1558(iVar0, "SHOP_POSTOFFICE_PAY_BOUNTY_MP_OFFER", Local_25.f_9, 1);
	}
	else
	{
		aggregate_func_1558(iVar0, "SHOP_POSTOFFICE_PAY_BOUNTY_MP_REWARD", Local_25.f_9, 1);
	}
	return iVar0;
}

int func_345(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2 || iParam1 == 12)
	{
		return aggregate_func_6708(uParam0, iParam1, 139845, 139876, 139963, 141561);
	}
	else
	{
		iVar0 = 0;
		if (!aggregate_func_5729(iParam1, &iVar0))
		{
			return 0;
		}
		return aggregate_func_6708(uParam0, iParam1, 141771, 141823, 129155, 31127);
	}
	return 0;
}

bool func_347(var uParam0)
{
	if (aggregate_func_4251() == -1)
	{
		if (!aggregate_func_5132(5, &(Global_1904602->f_3)))
		{
		}
		TXD::REQUEST_STREAMED_TEXTURE_DICT("toast_log_blips", false);
	}
	Global_1904602->f_4 = 0;
	HUD::_0x4CC5F2FC1332577F(559258637);
	return aggregate_func_7338(uParam0);
}

bool func_348(var uParam0)
{
	if (aggregate_func_4251() == -1 && !TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("toast_log_blips"))
	{
		return false;
	}
	return aggregate_func_951(uParam0);
}

void func_350(var uParam0)
{
	if (aggregate_func_4251() == -1)
	{
		TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("toast_log_blips");
	}
	HUD::_0x8BC7C1F929D07BF3(559258637);
	aggregate_func_1201(uParam0);
}

int func_352(var uParam0)
{
	struct<4> Var0;
	struct<14> Var4;

	if (aggregate_func_4251() == -1)
	{
		return Global_1915170->f_22751;
	}
	Var0 = { aggregate_func_2828(-1268909760, aggregate_func_1967(1), 359221401, 1) };
	if (aggregate_func_3973(&Var0, 1) > 0)
	{
		return 1;
	}
	Var4 = { aggregate_func_4303(0, 1045621973, -1591664384, -1591664384, 0, 0, 0) };
	if (aggregate_func_5543(&Var4, 1) > 0)
	{
		return 1;
	}
	if (aggregate_func_2220())
	{
		if (aggregate_func_2850(-858931429, 1))
		{
			aggregate_func_1174(-858931429, 1, 1, -142743235);
		}
		return 1;
	}
	return 0;
}

int func_358(var uParam0)
{
	if (!aggregate_func_4685(*uParam0))
	{
		return 1;
	}
	if (aggregate_func_530(uParam0->f_4, 0, 0, 0))
	{
		return 1;
	}
	if (Local_25.f_6)
	{
		if (func_792(uParam0))
		{
			Local_25.f_6 = 0;
		}
		return 1;
	}
	return 0;
}

int func_359(var uParam0)
{
	if (aggregate_func_4251() == 0 || !aggregate_func_402(uParam0->f_4, 0))
	{
		return 0;
	}
	if (!func_793(uParam0))
	{
		Local_25.f_6 = 1;
		uParam0->f_44 = func_794(23);
		return 1;
	}
	return 0;
}

int func_361(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (uParam0->f_2)
		{
			case 10:
			case 15:
				if (func_795())
				{
					uParam0->f_44 = func_794(3);
					return 1;
				}
				else
				{
					uParam0->f_44 = func_794(5);
					return 1;
				}
				break;
			case 12:
				uParam0->f_44 = func_794(18);
				return 1;
		}
	}
	return 0;
}

int func_362(var uParam0)
{
	switch (uParam0->f_2)
	{
		case 10:
		case 15:
			if (uParam0->f_20 > 10000)
			{
				uParam0->f_44 = func_794(7);
				return 1;
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
				case 1:
					uParam0->f_44 = func_794(6);
					return 1;
				case 2:
				case 3:
					switch (uParam0->f_19)
					{
						case 0:
							uParam0->f_44 = func_794(8);
							return 1;
						case 1:
							uParam0->f_44 = func_794(9);
							return 1;
						case 2:
							uParam0->f_44 = func_794(10);
							return 1;
						case 3:
							uParam0->f_44 = func_794(11);
							return 1;
						case 4:
							uParam0->f_44 = func_794(12);
							return 1;
						case 6:
							uParam0->f_44 = func_794(14);
							return 1;
					}
					break;
			}
			break;
		case 11:
			uParam0->f_44 = func_794(17);
			return 1;
		case 12:
			uParam0->f_44 = func_794(19);
			return 1;
	}
	return 0;
}

int func_363(var uParam0)
{
	if (Local_25.f_5 != -1)
	{
		uParam0->f_44 = "";
		return 1;
	}
	if (!aggregate_func_4278(uParam0, 32))
	{
		aggregate_func_5251(uParam0, 8192);
	}
	return 0;
}

bool func_402(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			BOUNTY::_0x537CE992BD2D7BCB(&(Local_25.f_11));
			break;
		case 15:
			BOUNTY::_0x587BCEC31D64F382(&(Local_25.f_11), -1458756770, Local_25.f_15);
			break;
	}
	Local_25.f_10 = 1;
	aggregate_func_8001(8);
	return true;
}

int func_420(var uParam0)
{
	int iVar0;
	int iVar1;

	if (aggregate_func_1190(uParam0->f_3, &iVar0))
	{
		if (!CAM::DOES_CAM_EXIST(uParam0->f_2036))
		{
			uParam0->f_2036 = CAM::CREATE_CAMERA(26379945, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		iVar1 = func_237(iVar0);
		if (TASK::_0x841475AC96E794D1(iVar1))
		{
			CAM::SET_CAM_COORD(uParam0->f_2036, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(iVar1, 1), TASK::_0xB93EA7184BAA85C3(iVar1, 1), 0.15f, 1.358f, 1.5381f));
			CAM::SET_CAM_ROT(uParam0->f_2036, 0f, 0f, (180f + TASK::_0xB93EA7184BAA85C3(iVar1, 1)), 2);
		}
		else
		{
			CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2036, iVar0, 0.201f, 1.358f, 0.5381f, true);
			CAM::POINT_CAM_AT_ENTITY(uParam0->f_2036, iVar0, 0.3912f, -1.6309f, 0.3644f, true);
		}
		CAM::SET_CAM_FOV(uParam0->f_2036, 37f);
	}
	return 1;
}

bool func_435(var uParam0)
{
	if (Local_25.f_5 > -1 && Local_25.f_5 <= 138)
	{
		if (aggregate_func_1231(uParam0->f_2421.f_4))
		{
			return false;
		}
		if (!SCRIPTS::HAS_SCRIPT_LOADED("train_fast_travel_core"))
		{
			SCRIPTS::REQUEST_SCRIPT("train_fast_travel_core");
			return false;
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1527681014) <= 0)
		{
			SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("train_fast_travel_core", &(Local_25.f_5), 1, 1024);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("train_fast_travel_core");
		}
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_2036))
	{
		CAM::DESTROY_CAM(uParam0->f_2036, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	return true;
}

void func_712(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate_func_4577() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1058(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate_func_4358(uParam0, 197528);
			aggregate_func_4358(uParam0, 198448);
			aggregate_func_4358(uParam0, 199048);
			aggregate_func_4358(uParam0, 199342);
			aggregate_func_4358(uParam0, 199545);
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

bool func_742(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
	uParam0->f_1279 = 222048;
	uParam0->f_1280 = 222057;
	uParam0->f_1281 = 222066;
	uParam0->f_1282 = 222066;
	uParam0->f_222 = iParam5;
	aggregate_func_4252(uParam0, 0);
	return true;
}

bool func_743(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	uParam0->f_1279 = 222048;
	uParam0->f_1280 = 222057;
	uParam0->f_1281 = 222066;
	uParam0->f_1282 = 222066;
	uParam0->f_222 = iParam4;
	aggregate_func_4252(uParam0, 0);
	return true;
}

int func_775()
{
	if ((((((((((((((aggregate_func_3594(56759509) || aggregate_func_3594(2145533727)) || aggregate_func_3594(1632674359)) || aggregate_func_3594(332438661)) || aggregate_func_3594(-1452445456)) || aggregate_func_3594(-1874365462)) || aggregate_func_3594(-1658668866)) || aggregate_func_3594(1997097980)) || aggregate_func_3594(90781239)) || aggregate_func_3594(920487791)) || aggregate_func_3594(-668555046)) || aggregate_func_3594(-839148413)) || aggregate_func_3594(10424351)) || aggregate_func_3594(-623226361)) || aggregate_func_2463(0))
	{
		return 1;
	}
	return 0;
}

bool func_792(var uParam0)
{
	switch (Local_25.f_7)
	{
		case 0:
			if (!aggregate_func_1231(uParam0->f_4) && func_793(uParam0))
			{
				if (uParam0->f_43 == 1 || uParam0->f_43 == 2)
				{
					uParam0->f_44 = func_794(24);
				}
				else
				{
					uParam0->f_44 = func_794(25);
				}
				aggregate_func_4310(5);
			}
			break;
		case 5:
			aggregate_func_471(uParam0, 0);
			aggregate_func_4310(6);
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_793(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;

	iVar4 = aggregate_func_4746(aggregate_func_4314(), 2);
	vVar5 = { aggregate_func_6004(iVar4) };
	iVar8 = aggregate_func_4746(aggregate_func_4314(), 1);
	vVar9 = { aggregate_func_6004(iVar8) };
	fVar0 = aggregate_func_1501(Global_35, vVar5, 1);
	fVar1 = aggregate_func_1501(Global_35, vVar9, 1);
	fVar2 = aggregate_func_1501(uParam0->f_4, vVar5, 1);
	fVar3 = aggregate_func_1501(uParam0->f_4, vVar9, 1);
	if (fVar0 < fVar1)
	{
		if (fVar2 < fVar3)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (fVar2 < fVar3)
	{
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

char* func_794(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "SELECT_PAY_BOUNTY_HIGH";
		case 4:
			return "SELECT_PAY_BOUNTY_AGAIN";
		case 5:
			return "SELECT_PAY_BOUNTY";
		case 6:
			return "PAID_GENERAL_BOUNTY";
		case 7:
			return "PAID_PAY_BOUNTY_HIGH";
		case 8:
			return "PAID_AMBARINO_BOUNTY";
		case 9:
			return "PAID_NEW_HANOVER_BOUNTY";
		case 10:
			return "PAID_LEMOYNE_BOUNTY";
		case 11:
			return "PAID_WEST_ELIZABETH_BOUNTY";
		case 12:
			return "PAID_NEW_AUSTIN_BOUNTY";
		case 13:
			return "PAID_ANOTHER_GENERAL_BOUNTY";
		case 14:
			return "PAID_ALL_STATE_BOUNTY";
		case 15:
			return "PAID_PARTIAL_BOUNTY";
		case 16:
			return "REFUSE_PAY_BOUNTY";
		case 17:
			return "HAND_OVER_POSTAGE";
		case 18:
			return "SELECT_RECEIVE_MAIL";
		case 19:
			return "HANDLE_SEND_MAIL";
		case 20:
			return "HANDLE_SEND_MAIL_CARE";
		case 21:
			return "OVERSIZED_PACKAGE_OUTSIDE";
		case 22:
			return "RETURN_TO_BOOTH";
		case 23:
			return "RIGHT_WITH_YOU";
		case 24:
			return "GREET_OTHER_WINDOW";
		case 25:
			return "RANG_BELL";
		case 26:
			return "SELL_TRAIN_TICKET_WARY";
		case 27:
			return "SELL_TRAIN_TICKET";
		case 0:
			return "PLAYER_SEND_MAIL";
		case 1:
			return "PLAYER_RECIEVE_MAIL";
		case 2:
			return "PLAYER_PAY_BOUNTY";
		default:
			break;
	}
	return "";
	return "";
}

bool func_795()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	while (bVar0 < 6)
	{
		if ((bVar0 == 6 || bVar0 == -1) || bVar0 == 5)
		{
		}
		else
		{
			iVar1 = (iVar1 + aggregate_func_1987(bVar0));
			if (iVar1 > 10000)
			{
				return true;
			}
		}
		bVar0++;
	}
	return false;
}

bool func_1058(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
	uParam0->f_2094.f_149 = 261339;
	uParam0->f_2094.f_150 = 262224;
	uParam0->f_2094.f_151 = 263020;
	uParam0->f_2094.f_152 = 263139;
	uParam0->f_2094.f_46 = 1;
	return true;
}

void func_1648(var uParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	vector3 vVar22;
	int iVar29;
	int iVar30;
	bool bVar31;
	bool bVar32;
	int iVar33;
	float fVar34;
	struct<2> Var35;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	struct<5> Var44;
	struct<4> Var49;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	bool bVar56;
	bool bVar57;
	bool bVar58;
	bool bVar59;
	bool bVar60;
	bool bVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;

	if (!aggregate_func_2823(bParam1, 0))
	{
		return;
	}
	if (!aggregate_func_4585(bParam1))
	{
		return;
	}
	Var0.f_1 = 20;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bParam1, &Var0))
	{
	}
	else if (Var0 <= 0)
	{
	}
	else
	{
		fVar34 = 100f;
		Var35 = { aggregate_func_4257(-664570214, WEAPON::_0x8EC44AE8DECFF841(bParam1)) };
		if (STATS::_STAT_ID_IS_VALID(&Var35))
		{
			STATS::STAT_ID_GET_FLOAT(&Var35, &fVar34);
		}
		iVar37 = 0;
		while (iVar37 < Var0)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar37]), &vVar22))
			{
				if (vVar22.y == -266488916)
				{
					iVar29 = (iVar29 + vVar22.z);
				}
				else if (vVar22.y == 1648497600)
				{
					iVar30 = (iVar30 + vVar22.z);
				}
				else if (vVar22.y == -1856731002)
				{
					bVar31 = (bVar31 + vVar22.z);
				}
				else if (vVar22.y == 2038990430)
				{
					bVar32 = (bVar32 + vVar22.f_2);
				}
				else if (vVar22.y == 983649838)
				{
					iVar33 = (iVar33 + vVar22.z);
				}
				if (vVar22.y == 1465168878)
				{
					iVar30 = (iVar30 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
				}
				else if (vVar22.y == -1103443887)
				{
					bVar32 = (bVar32 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
				}
				else if (vVar22.y == -800430237)
				{
					iVar33 = (iVar33 + BUILTIN::FLOOR((BUILTIN::TO_FLOAT(vVar22.z) * (fVar34 / 100f))));
				}
			}
			iVar37++;
		}
		iVar38 = 0;
		iVar39 = 0;
		iVar40 = 0;
		iVar41 = 0;
		iVar42 = 0;
		iVar43 = 0;
		Var44 = { aggregate_func_304(bParam1, 0, 0) };
		Var44.f_4 = aggregate_func_4275(uParam0);
		Var49 = { aggregate_func_2828(bParam1, Var44, Var44.f_4, 0) };
		bVar53 = aggregate_func_3302(bParam1);
		bVar58 = true;
		bVar54 = false;
		while (bVar54 < bVar53)
		{
			bVar55 = aggregate_func_3135(bParam1, bVar54);
			if (bVar55 != 0)
			{
				bVar56 = aggregate_func_4299(Var49, bVar55, 0, -1);
				bVar58 = true;
				if (aggregate_func_2823(bParam2, 0))
				{
					if (aggregate_func_3133(bParam2, bVar55) || aggregate_func_2852(bParam2, 1844906744))
					{
						if (aggregate_func_2852(bParam2, 1844906744))
						{
							if (aggregate_func_5817(uParam0, aggregate_func_3183(uParam0), aggregate_func_6503(uParam0), &bVar57))
							{
								if (aggregate_func_3133(bVar57, bVar55))
								{
									bVar58 = false;
								}
							}
						}
						else if (!aggregate_func_2823(bVar56, 0))
						{
							bVar58 = false;
						}
						else if (bVar56 != bParam2)
						{
							bVar58 = false;
						}
					}
				}
				if (aggregate_func_2823(bVar56, 0))
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar56, &Var0))
					{
						iVar37 = 0;
						iVar37 = 0;
						while (iVar37 < Var0)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar37]), &vVar22))
							{
								if (vVar22.y == 1999781523)
								{
									iVar41 = (iVar41 + vVar22.z);
									if (bVar58)
									{
										iVar38 = (iVar38 + vVar22.z);
									}
								}
								else if (vVar22.y == 1173003838)
								{
									iVar43 = (iVar43 + vVar22.z);
									if (bVar58)
									{
										iVar39 = (iVar39 + vVar22.z);
									}
								}
								else if (vVar22.y == -1657343230)
								{
									iVar42 = (iVar42 + vVar22.z);
									if (bVar58)
									{
										iVar40 = (iVar40 + vVar22.z);
									}
								}
							}
							iVar37++;
						}
					}
				}
				if (!bVar58)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bParam2, &Var0))
					{
						iVar37 = 0;
						iVar37 = 0;
						while (iVar37 < Var0)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar37]), &vVar22))
							{
								if (vVar22.y == 1999781523)
								{
									iVar38 = (iVar38 + vVar22.z);
								}
								else if (vVar22.y == 1173003838)
								{
									iVar39 = (iVar39 + vVar22.z);
								}
								else if (vVar22.y == -1657343230)
								{
									iVar40 = (iVar40 + vVar22.z);
								}
							}
							iVar37++;
						}
					}
				}
			}
			bVar54++;
		}
		if (aggregate_func_2830(bParam2) == joaat("ammo"))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bParam2, &Var0))
			{
				iVar37 = 0;
				iVar37 = 0;
				while (iVar37 < Var0)
				{
					if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar37]), &vVar22))
					{
						if (vVar22.y == 1999781523)
						{
							iVar29 = (iVar29 + vVar22.z);
						}
						else if (vVar22.y == 1173003838)
						{
							iVar33 = (iVar33 + vVar22.z);
						}
						else if (vVar22.y == -1657343230)
						{
							iVar30 = (iVar30 + vVar22.z);
						}
					}
					iVar37++;
				}
			}
		}
		bVar59 = (iVar29 + iVar41);
		if (iVar29 + iVar38) > (iVar29 + iVar41)
		{
			bVar59 = (iVar29 + iVar38);
		}
		bVar60 = (iVar30 + iVar42);
		if (iVar30 + iVar40) > (iVar30 + iVar42)
		{
			bVar60 = (iVar30 + iVar40);
		}
		bVar61 = (iVar33 + iVar43);
		if (iVar33 + iVar39) > (iVar33 + iVar43)
		{
			bVar61 = (iVar33 + iVar39);
		}
		bVar62 = (iVar29 + iVar41);
		if (iVar29 + iVar38) < (iVar29 + iVar41)
		{
			bVar62 = (iVar29 + iVar38);
		}
		bVar63 = (iVar30 + iVar42);
		if (iVar30 + iVar40) < (iVar30 + iVar42)
		{
			bVar63 = (iVar30 + iVar40);
		}
		bVar64 = (iVar33 + iVar43);
		if (iVar33 + iVar39) < (iVar33 + iVar43)
		{
			bVar64 = (iVar33 + iVar39);
		}
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponPowerValue", bVar59);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponRangeValue", bVar60);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponAccuracyValue", bVar61);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponFireRateValue", bVar31);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponReloadValue", bVar32);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponPowerDiff", (iVar29 + iVar41));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponRangeDiff", (iVar30 + iVar42));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponAccuracyDiff", (iVar33 + iVar43));
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponFireRateDiff", bVar31);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponReloadDiff", bVar32);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponPowerNew", bVar62);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponRangeNew", bVar63);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponAccuracyNew", bVar64);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponFireRateNew", bVar31);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_2094.f_52, "WeaponReloadNew", bVar32);
	}
}

bool func_2448(bool bParam0)
{
	switch (bParam0)
	{
		case -802026654: /* GXTEntry: "Good Alligator Skin" */
			return -113609972;
		case 1806153689: /* GXTEntry: "Poor Alligator Skin" */
			return 940277804;
		case -1625078531: /* GXTEntry: "Perfect Alligator Skin" */
			return -2021981862;
		case 27448453: /* GXTEntry: "Good Armadillo Skin" */
			return -1493288070;
		case -1726837022: /* GXTEntry: "Poor Armadillo Skin" */
			return -710989256;
		case 361430638: /* GXTEntry: "Perfect Armadillo Skin" */
			return -47986288;
		case -467109021: /* GXTEntry: "Good Badger Pelt" */
			return 803974758;
		case 959196213: /* GXTEntry: "Poor Badger Pelt" */
			return 373952588;
		case -463248330: /* GXTEntry: "Perfect Badger Pelt" */
			return 1242607258;
		case 143941906: /* GXTEntry: "Good Bear Pelt" */
			return 1997574525;
		case 957520252: /* GXTEntry: "Poor Bear Pelt" */
			return -1985838637;
		case 1292673537: /* GXTEntry: "Perfect Bear Pelt" */
			return -1813237797;
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return -2016089088;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return 2146572053;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return -1839367994;
		case 1490032862: /* GXTEntry: "Good Black Bear Pelt" */
			return -1091189928;
		case 1083865179: /* GXTEntry: "Poor Black Bear Pelt" */
			return -1635115397;
		case 663376218: /* GXTEntry: "Perfect Black Bear Pelt" */
			return -2042006570;
		case 2116849039:
			return -1314791863;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return -1823555382;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return -1940860112;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return 1415794275;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return 125158553;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return -653766286;
		case -591117838: /* GXTEntry: "Good Bison Pelt" */
			return 1895811321;
		case -1730060063: /* GXTEntry: "Poor Bison Pelt" */
			return 299919606;
		case -237756948: /* GXTEntry: "Perfect Bison Pelt" */
			return 753379773;
		case -1618402788: /* GXTEntry: "Bison Horn" */
			return 1352867568;
		case -336086818: /* GXTEntry: "Good Bull Hide" */
			return 1097784084;
		case 9293261: /* GXTEntry: "Poor Bull Hide" */
			return -1943430854;
		case -53270317: /* GXTEntry: "Perfect Bull Hide" */
			return 182141962;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return -1468691308;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return -57484815;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 1946049104;
		case 1150594075: /* GXTEntry: "Good Cow Hide" */
			return 1185884283;
		case 334093551: /* GXTEntry: "Poor Cow Hide" */
			return -321839561;
		case -845037222: /* GXTEntry: "Perfect Cow Hide" */
			return -2120314726;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return -1364771053;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return 1278304830;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return -1708243835;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return -396086695;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return -1091137361;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return -354836003;
		case 1181652728: /* GXTEntry: "Good Elk Pelt" */
			return -861596076;
		case 2053771712: /* GXTEntry: "Poor Elk Pelt" */
			return 205905613;
		case -1332163079: /* GXTEntry: "Perfect Elk Pelt" */
			return -1196787069;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 881436265;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return -2014005467;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 1738298985;
		case -732511557: /* GXTEntry: "Good Frog Skin" */
			return 1211835284;
		case 1855671180: /* GXTEntry: "Poor Frog Skin" */
			return 1658545555;
		case -564530632: /* GXTEntry: "Perfect Frog Skin" */
			return 2004662589;
		case 95044528: /* GXTEntry: "Good Gila Monster Skin" */
			return 432134278;
		case 2136062430:
			return 56287881;
		case 463481876: /* GXTEntry: "Perfect Gila Monster Skin" */
			return 2038260929;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return -292516362;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 1097330746;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return -1664486394;
		case 1204918860: /* GXTEntry: "Good Iguana Skin" */
			return 715839674;
		case -2066910871: /* GXTEntry: "Poor Iguana Skin" */
			return -1754534999;
		case 1677266727: /* GXTEntry: "Perfect Iguana Skin" */
			return -224255707;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return 1582863244;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return 1014727010;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return -493748684;
		case 1636891382: /* GXTEntry: "Good Moose Pelt" */
			return -506979242;
		case 1868576868: /* GXTEntry: "Poor Moose Pelt" */
			return 1790050043;
		case -217731719: /* GXTEntry: "Perfect Moose Pelt" */
			return -420589518;
		case -771861010: /* GXTEntry: "Good Muskrat Pelt" */
			return 1740405833;
		case -1912460485: /* GXTEntry: "Poor Muskrat Pelt" */
			return -294760237;
		case 2022921849: /* GXTEntry: "Perfect Muskrat Pelt" */
			return 399589289;
		case 416535067: /* GXTEntry: "Good Opossum Pelt" */
			return -779978170;
		case 1627318551: /* GXTEntry: "Poor Opossum Pelt" */
			return -1474732778;
		case -475820303: /* GXTEntry: "Perfect Opossum Pelt" */
			return -859460682;
			return -37721227;
			return -2119897246;
			return -1197044283;
			return 286691937;
			return -876261935;
			return 695977222;
			return -1126723863;
			return 755838510;
			return -871797197;
			return 1445549666;
			return -954694400;
			return -327638924;
			return 608806106;
			return 445332351;
			return 391928970;
			return 683327822;
			return -217595210;
			return 334167008;
			return 311086070;
			return 1413149376;
			return -1469642502;
			return -146398768;
			return -357528239;
			return -1936951665;
			return -85737661;
			return 1710562692;
			return -1912945257;
			return -2035397573;
			return 1925504740;
			return -1261342366;
			return 498542642;
			return 1958005095;
			return 1942918539;
			return -16864021;
			return 781168718;
			return -630360032;
			return 1888465490;
			return -543054460;
			return -1037558485;
			return 71874057;
			return 827985446;
			return 652886453;
			return -1039971240;
			return -1106747914;
			return -550722674;
			return -1444987366;
			return -1471435589;
			return 1193731881;
			return -1017619862;
			return -1698910498;
			return -1134347623;
			return -719421785;
			return -1406416279;
			return 482295805;
			return -520151885;
			return 1901018987;
			return 935219765;
			return -615433613;
			return -1149578066;
			return 1228716113;
			return -1898963991;
			return -763965887;
			return -91027264;
			return 998052367;
			return -1841069460;
			return 319613183;
			return 89885133;
			return -236264927;
			return -661841886;
			return 882369722;
			return 230068405;
			return 708397125;
			return 1663105645;
			return 2104496586;
			return -867628281;
			return -1127988903;
			return 1177722124;
			return 2095431713;
			return -1946085310;
			return -50004308;
			return 1066632230;
			return -1593775395;
			return -1462436745;
			return 128688729;
			return 1036479497;
			return 525245761;
			return 1434203725;
			return -540853698;
			return -817013819;
			return 222702434;
			return -372998867;
			return -1765786196;
			return -597920617;
			return -986217609;
			return 1591915275;
			return 434164104;
			return 2010460530;
			return 798445127;
			return -1512781803;
			return 1951854232;
			return 685557689;
			return -655396129;
			return -138348534;
			return -615195506;
			return -1143073531;
			return -76512165;
			return 435345037;
			return 566505619;
			return 2061704444;
			return -420922520;
			return 1402000467;
			return -571080009;
			return 1856405476;
			return 234473853;
			return -459025832;
			return -1538065056;
			return 1513811193;
			return -376064362;
			return 1362644733;
			return 1527066094;
			return -1135994830;
			return -411118339;
			return 1934921511;
			return -1664302460;
			return -1370325893;
			return -1597885804;
			return -82035689;
			return 399214021;
			return 333629896;
			return 354443590;
			return -1043338230;
			return -591593823;
			return 1914687828;
			return -728170563;
			return 1026974357;
			return 1847023377;
			return -102918483;
			return -749802886;
			return 1171297014;
			return 1888858793;
			return 696072937;
			return 1744784728;
			return -191973744;
			return 1013351618;
			return 930648145;
			return -218437162;
			return -1654489460;
			return 1362828838;
			return 1558424746;
			return 1074454855 /* Float: 2.17f */;
			return 661991465;
			return 217385405;
			return 1863856147;
			return -1783404197;
			return 127122;
			return 1568268202;
			return -907802863;
			return 1885588858;
			return 2135346669;
			return 1564672281;
			return -149209420;
			return 431321694;
			return 2054544328;
			return 961836667;
			return 487431050;
			return -1103475665;
			return 322947093;
			return 1204808018;
			return -2033244642;
			return 981960619;
			return 1448526072;
			return 1393502004;
			return -1266905662;
			return -2080399983;
			return 33483590;
			return -1838135661;
			return -1573277590;
			return 261129135;
			return 1243458250;
			return -185030876;
			return 1317537296;
			return 1018367377;
			return 824037606;
			return -1731017100;
			return 1615937768;
			return -251297033;
			return -759993020;
			return -1625595431;
			return 1402002731;
			return -893738363;
			return 1168912955;
			return -883362976;
			return 439065517;
			return 2028934772;
			return 1635254052;
			return -1876315724;
			return 2125035709;
			return -688961870;
			return -1534250051;
			return -121066912;
			return -1571202765;
			return 1007184712;
			return 750199142;
			return 223717659;
			return 25399937;
			return -1970088555;
			return -555756782;
			return 1373687372;
			return -595937662;
			return -383405751;
			return -827185700;
			return -835681068;
			return 1758422954;
			return -1350812151;
			return -971769000;
			return 232508262;
			return -1733134177;
			return 1122586172;
			return -1735702522;
			return 859638047;
			return -2079288781;
			return -1007285267;
			return 281050817;
			return -2005182834;
			return -1716047352;
			return -860252225;
			return -825143744;
			return -19626769;
			return -2135500076;
			return 1818491588;
			return 1492572787;
			return 1750541244;
			return -182749690;
			return -874350081;
			return -1243014409;
			return -1312925436;
			return -1354257753;
			return 610016221;
			return -898492052;
			return 721113188;
			return -1900079889;
			return -1717931006;
			return -1752692172;
			return 728009189;
			return 393351033;
			return -755636829;
			return -1849715375;
			return -751278632;
			return -2061292617;
			return 927949229;
			return -1371828520;
			return -1153167846;
			return 674701766;
			return 1934089692;
			return 1607434899;
			return -979794154;
			return 973446589;
			return 184660339;
			return -482133347;
			return -498483069;
			return 1217842783;
			return 432212831;
			return 452336188;
			return 1979660764;
			return 471441354;
			return -1694997273;
			return -928742863;
			return 623939807;
			return -650616528;
			return 834057600;
			return -823379321;
			return -1155190042;
			return -1215385959;
			return -2021366376;
			return 909323574;
			return 371810529;
			return 2081548585;
			return 1601387810;
			return -989449592;
			return -1089443869;
			return -1569242066;
			return 1971632203;
			return 714162759;
			return 160408746;
			return false;
		}

