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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	struct<201> Local_23 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 1, 0, 0, 0, 0, 0 } ;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 1084227584;
	var uLocal_233 = 1073741824;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 1;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == aggregate_func_14

bool func_37(var uParam0)
{
	HUD::_TEXT_DATABASE_REQUEST("SHOP");
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SHOP"))
	{
		return false;
	}
	return true;
}

void func_41(var uParam0)
{
	aggregate_func_6708(uParam0, 0, 60875, 61198, 61680, 61824);
	aggregate_func_4358(uParam0, 61977);
	aggregate_func_4358(uParam0, 62280);
	aggregate_func_4358(uParam0, 62570);
	aggregate_func_4358(uParam0, 62763);
	aggregate_func_7000(uParam0, 0, 62955);
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
			Jump @2462; //curOff = 1476
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
			Jump @2462; //curOff = 1728
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
			Jump @2462; //curOff = 1816
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
			Jump @2462; //curOff = 1884
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
			Jump @2462; //curOff = 1972
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
			Jump @2462; //curOff = 2129
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
			Jump @2462; //curOff = 2224
			switch (uParam0->f_1)
			{
				case 26:
					return "0216_U_F_M_LagMother_01";
				default:
					break;
			}
			return "0216_U_F_M_LagMother_01";
			Jump @2462; //curOff = 2257
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
			Jump @2462; //curOff = 2332
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
			Jump @2462; //curOff = 2407
			if (MISC::IS_STRING_NULL_OR_EMPTY(Global_1957543->f_319[11 /*8*/]))
			{
				aggregate_func_6220();
			}
			return aggregate_func_1966(*(Global_1957543->f_319[11 /*8*/]));
			Jump @2462; //curOff = 2452
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
		if (!func_732(&(uParam0->f_4), iParam1, iParam2, aggregate_func_6464(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_733(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate_func_4242(&(uParam0->f_4), 138019);
	aggregate_func_4242(&(uParam0->f_4), 138056);
	aggregate_func_4932(&(uParam0->f_4), 138084);
	aggregate_func_4932(&(uParam0->f_4), 138619);
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
	aggregate_func_7978(aggregate_func_995(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())), 2);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, 0);
	if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
		}
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
	}
	Local_23.f_13 = aggregate_func_4710(PLAYER::PLAYER_ID());
	Local_23.f_14 = { ((*Global_1123778)[Local_23.f_13 /*27*/])->f_1 };
	if (!aggregate_func_9012(aggregate_func_4650(), Local_23.f_13, &Local_23, &(Local_23.f_12), 0))
	{
		return false;
	}
	Local_23.f_3 = { func_756(0) };
	Local_23.f_62 = aggregate_func_4927(PLAYER::NETWORK_PLAYER_ID_TO_INT());
	Local_23.f_63 = Local_23.f_62;
	func_758();
	TXD::REQUEST_STREAMED_TEXTURE_DICT("swatches_camp_mp", false);
	Local_23.f_91 = func_759();
	func_760(Local_23.f_91);
	if (aggregate_func_4260(&(Local_23.f_24)))
	{
		aggregate_func_4957(&(Local_23.f_24));
	}
	aggregate_func_7374(1);
	AUDIO::_0x6339C1EA3979B5F7("shop_cripps", "shop_scenes");
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		aggregate_func_7374(2);
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(-1387714323))
		{
			return func_764(uParam0, -223575196, joaat("use"), 0);
		}
		else
		{
			return func_764(uParam0, 2063394340, joaat("use"), 0);
		}
	}
	return func_764(uParam0, -1833282437, joaat("use"), 0);
}

int func_333(var uParam0)
{
	bool bVar0;
	bool bVar1;

	aggregate_func_1926(1);
	bVar0 = true;
	if (!aggregate_func_4281(4))
	{
		bVar1 = true;
		if (!func_767())
		{
			bVar1 = false;
			bVar0 = false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(func_768()))
		{
			STREAMING::REQUEST_MODEL(func_768(), false);
			bVar1 = false;
			bVar0 = false;
		}
		if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("swatches_camp_mp"))
		{
			bVar1 = false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(func_769()))
		{
			STREAMING::REQUEST_MODEL(func_769(), false);
			bVar1 = false;
			bVar0 = false;
		}
		if (!func_770(Local_23.f_91))
		{
			bVar1 = false;
			bVar0 = false;
		}
		if (!func_772(func_771(Local_23.f_62, 0)))
		{
			bVar1 = false;
			bVar0 = false;
		}
		if (!func_773(uParam0))
		{
			bVar1 = false;
			bVar0 = false;
		}
		if (!aggregate_func_951(uParam0))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			if (!aggregate_func_4260(&(Local_23.f_24)))
			{
				aggregate_func_4293(&(Local_23.f_24), 0);
				return 0;
			}
			else if (aggregate_func_4732(&(Local_23.f_24)) >= Global_1901929->f_542.f_8)
			{
				aggregate_func_4957(&(Local_23.f_24));
				bVar0 = false;
				return 1;
			}
		}
		else
		{
			aggregate_func_7374(4);
		}
	}
	func_772(0);
	if (!aggregate_func_4281(8) && bVar0)
	{
		if (!func_777())
		{
			return 0;
		}
		if (!func_778())
		{
			return 0;
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_23.f_64, 0))
		{
			return 0;
		}
		if (!func_779(uParam0))
		{
			return 0;
		}
		if (!func_780())
		{
			return 0;
		}
		func_781();
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		aggregate_func_2904(&(uParam0->f_2077), Local_23, 5f, 1, -1, 0);
		aggregate_func_2904(&(uParam0->f_2078), Local_23, 7f, 1, 36, 0);
		aggregate_func_2904(&(Local_23.f_196), Local_23.f_6, 2f, 1, -1, 0);
		aggregate_func_4957(&(Local_23.f_24));
		aggregate_func_7374(8);
	}
	if (!aggregate_func_4281(4) || !aggregate_func_4281(8))
	{
		return 0;
	}
	if (!func_783())
	{
		return 0;
	}
	if (!func_784())
	{
		return 0;
	}
	return 1;
}

bool func_334(var uParam0)
{
	if (func_785())
	{
		return false;
	}
	if (Local_23.f_197)
	{
		func_786();
		if (func_787())
		{
			if (Local_23.f_198)
			{
				func_788();
			}
			func_789();
			Local_23.f_197 = 0;
			Local_23.f_198 = 0;
		}
	}
	if (aggregate_func_4911(uParam0) == -1979958621)
	{
		Local_23.f_61 = Global_1051387->f_3214;
		uParam0->f_2073 = Local_23.f_61;
	}
	aggregate_func_1926(0);
	func_772(0);
	func_781();
	func_778();
	func_791(uParam0);
	func_779(uParam0);
	func_792(uParam0);
	return aggregate_func_105(uParam0);
}

void func_335(var uParam0)
{
	func_793();
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && !ENTITY::IS_ENTITY_VISIBLE(Global_35))
	{
		ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
	}
	AUDIO::_0x9428447DED71FC7E("shop_scenes");
	aggregate_func_2017(uParam0->f_1999);
	aggregate_func_1201(uParam0);
}

int func_337(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	if (uParam1->f_9 != Local_23.f_60 && !Local_23.f_193)
	{
		Local_23.f_60 = uParam1->f_9;
	}
	if (aggregate_func_2823(uParam1->f_9, 0))
	{
		if (aggregate_func_2827(uParam1->f_9) == 1415299667)
		{
			Local_23.f_62 = uParam1->f_9;
		}
		else
		{
			Local_23.f_61 = uParam1->f_9;
		}
	}
	else
	{
		if (aggregate_func_4281(128))
		{
			if (Local_23.f_63 != 0 && Local_23.f_63 != Local_23.f_62)
			{
				Local_23.f_62 = Local_23.f_63;
			}
			aggregate_func_7577(128);
		}
		bVar0 = aggregate_func_5691();
		if (aggregate_func_3271(bVar0, &(uParam0->f_2094), &bVar1))
		{
			if (func_799(bVar1))
			{
				if (func_800(uParam0))
				{
					aggregate_func_3190(uParam0, 1, -1994162526 /* GXTEntry: "Replace" */, 1, 1, 0);
					aggregate_func_3190(uParam0, 2, 1942609879 /* GXTEntry: "Abandon" */, 1, 1, 1);
					aggregate_func_3190(uParam0, 3, -510723079 /* GXTEntry: "Rename" */, 1, 1, 0);
				}
				else
				{
					aggregate_func_3190(uParam0, 1, joaat("ib_select"), 1, 1, 0);
				}
			}
			else if (func_802(bVar1))
			{
				if (aggregate_func_2178(uParam0, aggregate_func_3183(uParam0), bVar1))
				{
					aggregate_func_3247(uParam0, -253826015);
				}
			}
		}
	}
	return 1;
}

int func_339(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<5> Var9;
	struct<4> Var14;
	struct<8> Var18;
	struct<16> Var26;
	struct<14> Var50;

	iVar0 = aggregate_func_2827(uParam1->f_7);
	if (iVar0 == 1415299667)
	{
		Local_23.f_63 = uParam1->f_7;
	}
	bVar1 = aggregate_func_5691();
	if (aggregate_func_3271(bVar1, &(uParam0->f_2094), &bVar2))
	{
		if (func_799(bVar2))
		{
			if (uParam1->f_10 == 3)
			{
				if (!aggregate_func_524(&(uParam0->f_2047), 0))
				{
					return 0;
				}
				Var9 = { aggregate_func_304(func_807(PLAYER::NETWORK_PLAYER_ID_TO_INT()), 1, 0) };
				Var14 = { aggregate_func_2828(func_807(PLAYER::NETWORK_PLAYER_ID_TO_INT()), Var9, Var9.f_4, 1) };
				if (aggregate_func_2245(&Var18))
				{
					Var26 = { func_811(Var14, 1, 0) };
					Var26.f_16 = { Var18 };
					if (!aggregate_func_2252(&(uParam0->f_2047), Var26, joaat("update"), 1, -1, 1))
					{
						return 0;
					}
					aggregate_func_933(Var26);
				}
			}
			else if (uParam1->f_10 == 2)
			{
				Local_23.f_197 = 1;
			}
		}
	}
	Var50.f_8 = aggregate_func_4710(PLAYER::PLAYER_ID());
	Var50.f_12 = uParam1->f_7;
	aggregate_func_1319(7, Var50, aggregate_func_4507(0, 8));
	return 1;
}

void func_341(var uParam0, struct<9> Param1, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)
{
	if (iParam15 == 2113164098 || iParam15 == 541670136)
	{
		if (!func_816(&Param1))
		{
		}
		if (func_817(Param1.f_8))
		{
			aggregate_func_5664(uParam0);
			aggregate_func_6052(uParam0, 811310738 /* GXTEntry: "Options" */, 1, -1, 0, 0, 0, 0);
		}
		if (Param1.f_8 == -428390721)
		{
			aggregate_func_6715(134217728);
			aggregate_func_3090(131072);
			aggregate_func_3608(262144);
		}
		else if ((func_823(Param1.f_8) || func_824(Param1.f_8)) || Param1.f_8 == -1396511102)
		{
			aggregate_func_3090(262144);
		}
	}
}

void func_343(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (func_802(bParam2))
	{
		uParam0->f_2094.f_122 = Local_23.f_192;
	}
	else if (func_825(bParam2))
	{
		Local_23.f_195 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2075))
		{
			ENTITY::DELETE_ENTITY(&(uParam0->f_2075));
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				if (PROPSET::_DOES_PROPSET_EXIST(Local_23.f_27[iVar0 /*4*/][iVar1]))
				{
					PROPSET::_DELETE_PROPSET(Local_23.f_27[iVar0 /*4*/][iVar1], true, false);
				}
				(*Local_23.f_40[iVar0 /*4*/])[iVar1] = 0;
				iVar1++;
			}
			iVar0++;
		}
		func_826();
		Local_23.f_61 = 0;
		uParam0->f_2073 = 0;
	}
}

int func_345(var uParam0)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { aggregate_func_4320() };
	bVar2 = aggregate_func_4255(Var0);
	if (bVar2)
	{
		return 0;
	}
	if (func_785())
	{
		return 0;
	}
	return 1;
}

bool func_425(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, 0);
	}
	bVar0 = false;
	if (aggregate_func_4497(255))
	{
		bVar0 = true;
	}
	else
	{
		aggregate_func_1926(0);
		if (!func_871())
		{
			return false;
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(250);
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	if (bVar0 || aggregate_func_4281(512))
	{
		if (!aggregate_func_4281(512))
		{
			TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("swatches_camp_mp");
			func_872(Local_23.f_91);
			if (TASK::_0x841475AC96E794D1(Local_23.f_90))
			{
				TASK::_0x81948DFE4F5A0283(Local_23.f_90);
			}
			Local_23.f_62 = 0;
			Local_23.f_63 = 0;
			Local_23.f_65 = 0;
			func_873();
			func_874();
			if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_64))
			{
				aggregate_func_2577(&(Local_23.f_92), Local_23.f_64);
				aggregate_func_2577(&(Local_23.f_92), Global_35);
				PED::DELETE_PED(&(Local_23.f_64));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2075))
			{
				ENTITY::DELETE_ENTITY(&(uParam0->f_2075));
			}
			aggregate_func_1924();
			if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_59))
			{
				OBJECT::DELETE_OBJECT(&(Local_23.f_59));
			}
			(Global_1051387->f_69[uParam0->f_3 /*76*/])->f_21 = 0;
			iVar1 = 0;
			while (iVar1 <= 2)
			{
				iVar2 = 0;
				while (iVar2 <= 2)
				{
					if (PROPSET::_DOES_PROPSET_EXIST(Local_23.f_27[iVar1 /*4*/][iVar2]))
					{
						PROPSET::_DELETE_PROPSET(Local_23.f_27[iVar1 /*4*/][iVar2], true, false);
					}
					(*Local_23.f_40[iVar1 /*4*/])[iVar2] = 0;
					iVar2++;
				}
				iVar1++;
			}
			func_826();
			Local_23.f_17 = 0;
			Local_23.f_61 = 0;
			uParam0->f_2073 = 0;
			if (aggregate_func_4508(&(uParam0->f_2077)))
			{
				aggregate_func_2899(&(uParam0->f_2077), 0);
			}
			if (aggregate_func_4508(&(uParam0->f_2078)))
			{
				aggregate_func_2899(&(uParam0->f_2078), 0);
			}
			if (aggregate_func_4508(&(Local_23.f_196)))
			{
				aggregate_func_2899(&(Local_23.f_196), 0);
			}
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
			}
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, true, 32, true);
			}
			ENTITY::_0x0939E773925C4719();
			aggregate_func_7977(aggregate_func_995(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())), 2);
			aggregate_func_7374(512);
		}
		else
		{
			if (!aggregate_func_4260(&(Local_23.f_18)))
			{
				aggregate_func_4293(&(Local_23.f_18), 0);
				return false;
			}
			else if (aggregate_func_4732(&(Local_23.f_18)) < 5000)
			{
				return false;
			}
			func_793();
			CAM::DO_SCREEN_FADE_IN(250);
			if (ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
			}
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
		if (aggregate_func_4577() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_764(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate_func_4358(uParam0, 199699);
			aggregate_func_4358(uParam0, 200594);
			aggregate_func_4358(uParam0, 201169);
			aggregate_func_4358(uParam0, 201463);
			aggregate_func_4358(uParam0, 201641);
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
	if (!aggregate_func_2177(bParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1287 = 1;
	uParam0->f_1288 = bParam3;
	uParam0->f_1279 = 224195;
	uParam0->f_1280 = 224204;
	uParam0->f_1281 = 224213;
	uParam0->f_1282 = 224213;
	uParam0->f_222 = iParam5;
	aggregate_func_4252(uParam0, 0);
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
	if (!aggregate_func_770(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1279 = 224195;
	uParam0->f_1280 = 224204;
	uParam0->f_1281 = 224213;
	uParam0->f_1282 = 224213;
	uParam0->f_222 = iParam4;
	aggregate_func_4252(uParam0, 0);
	return true;
}

Vector3 func_756(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { func_1257() };
			break;
		case 1:
			vVar0 = { 0f, 2.5f, 0f };
			break;
		case 2:
			vVar0 = { 3.95f, 1.75f, 0f };
			break;
	}
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_23, Local_23.f_12, vVar0);
}

void func_758()
{
	STREAMING::REQUEST_MODEL(func_768(), false);
	STREAMING::REQUEST_MODEL(func_769(), false);
}

int func_759()
{
	return -22664287;
}

void func_760(int iParam0)
{
	STREAMING::_0x19A6BE7D9C6884D3(iParam0, 15, 0, 0);
	switch (iParam0)
	{
		case -22664287:
			STREAMING::REQUEST_MODEL(joaat("p_cigarette_cs01x"), false);
			STREAMING::REQUEST_MODEL(joaat("p_pipe01x"), false);
			break;
	}
}

bool func_764(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
	uParam0->f_2094.f_149 = 225563;
	uParam0->f_2094.f_150 = 226447;
	uParam0->f_2094.f_151 = 144917;
	uParam0->f_2094.f_152 = 227243;
	uParam0->f_2094.f_46 = 1;
	return true;
}

bool func_767()
{
	if (!aggregate_func_4281(16))
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(250);
			}
			if (!aggregate_func_4260(&(Local_23.f_21)))
			{
				aggregate_func_4293(&(Local_23.f_21), 0);
			}
			return false;
		}
		aggregate_func_7374(16);
	}
	return true;
}

int func_768()
{
	return 1077976463;
}

int func_769()
{
	return 1935100224;
}

bool func_770(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!STREAMING::_0x9427C94D2E4094A4(iParam0, 0))
	{
		iVar0 = 0;
	}
	switch (iParam0)
	{
		case -22664287:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_cigarette_cs01x")))
			{
				iVar0 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_pipe01x")))
			{
				iVar0 = 0;
			}
			break;
	}
	return iVar0;
}

int func_771(bool bParam0, int iParam1)
{
	vector3 vVar0;

	if (!aggregate_func_4281(2) && iParam1 != 0)
	{
		return 0;
	}
	vVar0 = { aggregate_func_5046(255) };
	switch (iParam1)
	{
		case 0:
			switch (bParam0)
			{
				case -2146415538: /* GXTEntry: "Military Surplus" */
				case -1740150840: /* GXTEntry: "Bounty Hunter" */
				case -892962381: /* GXTEntry: "Survivor" */
				case -847503328: /* GXTEntry: "Trader" */
				case -766600612: /* GXTEntry: "Traveling Opulence" */
				case -698168422: /* GXTEntry: "Standard" */
				case -332466661: /* GXTEntry: "Collector" */
				case 226275223: /* GXTEntry: "The Hobo Life" */
					if (aggregate_func_4281(2))
					{
						return aggregate_func_5329(vVar0.z, 0, bParam0, 9);
					}
					return aggregate_func_5329(vVar0.z, aggregate_func_4927(PLAYER::NETWORK_PLAYER_ID_TO_INT()), bParam0, -1);
				default:
					break;
			}
			return aggregate_func_5329(vVar0.z, bParam0, func_1275(PLAYER::NETWORK_PLAYER_ID_TO_INT()), -1);
		case 1:
			switch (bParam0)
			{
				case -2146415538: /* GXTEntry: "Military Surplus" */
				case -1740150840: /* GXTEntry: "Bounty Hunter" */
				case -892962381: /* GXTEntry: "Survivor" */
				case -847503328: /* GXTEntry: "Trader" */
				case -766600612: /* GXTEntry: "Traveling Opulence" */
				case -698168422: /* GXTEntry: "Standard" */
				case -332466661: /* GXTEntry: "Collector" */
				case 226275223: /* GXTEntry: "The Hobo Life" */
					return aggregate_func_5329(vVar0.z, 0, bParam0, 12);
				default:
					break;
			}
			break;
		case 2:
			switch (bParam0)
			{
				case -2146415538: /* GXTEntry: "Military Surplus" */
				case -1740150840: /* GXTEntry: "Bounty Hunter" */
				case -892962381: /* GXTEntry: "Survivor" */
				case -847503328: /* GXTEntry: "Trader" */
				case -766600612: /* GXTEntry: "Traveling Opulence" */
				case -698168422: /* GXTEntry: "Standard" */
				case -332466661: /* GXTEntry: "Collector" */
				case 226275223: /* GXTEntry: "The Hobo Life" */
					return aggregate_func_5329(vVar0.z, 0, bParam0, 10);
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_772(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (aggregate_func_4281(64))
	{
		return true;
	}
	bVar0 = true;
	iVar2 = 110;
	while (iVar2 <= 132)
	{
		if (iParam0 == 0 || iParam0 == iVar2)
		{
			iVar3 = aggregate_func_7903(iVar2);
			if (iVar3 != 0)
			{
				if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(&(Local_23.f_66[iVar1])))
				{
					Local_23.f_66[iVar1] = PED::_REQUEST_METAPED_OUTFIT(func_1277(), iVar3);
				}
				else if (!PED::_0x610438375E5D1801(&(Local_23.f_66[iVar1])))
				{
					bVar0 = false;
				}
			}
		}
		iVar1++;
		iVar2++;
	}
	if (bVar0 && iParam0 == 0)
	{
		aggregate_func_7374(64);
	}
	return bVar0;
}

bool func_773(var uParam0)
{
	vector3 vVar0;

	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1999))
	{
		vVar0 = { Local_23 };
		if (!aggregate_func_4268(vVar0))
		{
			uParam0->f_1999 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar0, 0f, 0f, 0f, 10f, 10f, 8f);
		}
	}
	else
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_1999, 2016, 0, 0, -1, -1, 0);
		POPULATION::_0x18262CAFEBB5FBE1(uParam0->f_1999, 2016, 0, 0, -1, -1, 0);
		return true;
	}
	return false;
}

bool func_777()
{
	float fVar0;
	int iVar1;
	vector3 vVar2;

	fVar0 = (Local_23.f_12 + 180f);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_23.f_64))
	{
		vVar2 = { -1.18f, -4.95f, 0f };
		STREAMING::REQUEST_MODEL(func_1277(), false);
		if (!STREAMING::HAS_MODEL_LOADED(func_1277()))
		{
			return false;
		}
		Local_23.f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_23, Local_23.f_12, vVar2) };
		aggregate_func_3615(&(Local_23.f_6), 1f);
		Local_23.f_64 = PED::CREATE_PED(func_1277(), Local_23.f_6, fVar0, false, false, false, false);
		iVar1 = 0;
	}
	if (!TASK::_0x841475AC96E794D1(Local_23.f_90))
	{
		Local_23.f_90 = TASK::CREATE_SCENARIO_POINT(Local_23.f_91, Local_23.f_6, fVar0, 0, 0, 0);
		iVar1 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_64) && !ENTITY::IS_ENTITY_DEAD(Local_23.f_64))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_23.f_64, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_23.f_64, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_23.f_64, true);
		if (TASK::_0x841475AC96E794D1(Local_23.f_90))
		{
			TASK::_TASK_USE_SCENARIO_POINT(Local_23.f_64, Local_23.f_90, 0, -1, false, true, 0, false, -1082130432 /* Float: -1f */, 0);
		}
		aggregate_func_648(&(Local_23.f_92), Local_23.f_64, "CRIPPS", 1);
		aggregate_func_648(&(Local_23.f_92), Global_35, "ARTHUR", 1);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_23.f_64, "rdro_shop_cripps_mixgroup", 0f);
		iVar1 = 1;
	}
	return iVar1;
}

bool func_778()
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_64) && PED::_0xA0BC8FAED8CFEB3C(Local_23.f_64))
	{
		iVar0 = func_771(Local_23.f_62, 0);
		iVar1 = aggregate_func_7903(iVar0);
		if (iVar1 != Local_23.f_65 && iVar1 != 0)
		{
			PED::_0x0BFA1BD465CDFEFD(Local_23.f_64);
			PED::_0x1902C4CFCC5BE57C(Local_23.f_64, iVar1);
			PED::_0xCC8CA3E88256E58F(Local_23.f_64, 0, 1, 1, 1, false);
			Local_23.f_65 = iVar1;
			aggregate_func_7374(128);
		}
		return true;
	}
	return false;
}

bool func_779(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_23.f_64))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_23.f_59))
	{
		iVar0 = func_769();
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
			return false;
		}
		vVar1 = { 0f, -6f, 1f };
		vVar4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_23, Local_23.f_12, vVar1) };
		Local_23.f_59 = OBJECT::CREATE_OBJECT(iVar0, vVar4, false, true, false, false, true);
	}
	(Global_1051387->f_69[uParam0->f_3 /*76*/])->f_21 = Local_23.f_64;
	func_1284(uParam0->f_3, uParam0->f_4);
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_59))
	{
		OBJECT::_0x63E39F09310F481F(Local_23.f_59, 1.25f);
		ENTITY::FREEZE_ENTITY_POSITION(Local_23.f_59, true);
		return true;
	}
	return false;
}

bool func_780()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_57) && ENTITY::DOES_ENTITY_EXIST(Local_23.f_58))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_23.f_56))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_64))
		{
			func_1285(&(Local_23.f_56), Local_23.f_3, Local_23.f_12);
			TASK::TASK_LOOK_AT_ENTITY(Local_23.f_64, Local_23.f_56, -1, 0, 51, 0);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_23.f_57))
	{
		func_1285(&(Local_23.f_57), Local_23.f_3, Local_23.f_12);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_23.f_58))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_64))
		{
			func_1285(&(Local_23.f_58), ENTITY::GET_ENTITY_COORDS(Local_23.f_64, true, false), ENTITY::GET_ENTITY_HEADING(Local_23.f_64));
		}
	}
	return false;
}

void func_781()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1286(Local_23.f_60);
	if (iVar0 != -1)
	{
		func_1287(iVar0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_23.f_56) && !ENTITY::IS_ENTITY_DEAD(Local_23.f_56)) && CAM::DOES_CAM_EXIST(Local_23.f_53))
	{
		vVar1 = { CAM::GET_CAM_COORD(Local_23.f_53) };
		ENTITY::SET_ENTITY_COORDS(Local_23.f_56, vVar1, true, false, true, true);
	}
}

bool func_783()
{
	if (!aggregate_func_4281(32))
	{
		if (!aggregate_func_4281(1024))
		{
			if (aggregate_func_4260(&(Local_23.f_21)))
			{
				if (aggregate_func_4732(&(Local_23.f_21)) > 4000)
				{
					aggregate_func_4957(&(Local_23.f_21));
					aggregate_func_7374(1024);
				}
				else
				{
					return false;
				}
			}
			else
			{
				aggregate_func_4293(&(Local_23.f_21), 0);
				return false;
			}
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(250);
			}
			return false;
		}
		aggregate_func_7577(1024);
		aggregate_func_7374(32);
	}
	return true;
}

bool func_784()
{
	int iVar0;

	if (aggregate_func_3027(1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_64))
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (aggregate_func_6960(64))
	{
		iVar0 = 2;
		aggregate_func_6978(64);
	}
	else
	{
		iVar0 = 1;
	}
	if (aggregate_func_938(&(Local_23.f_92), aggregate_func_6661(func_1290(iVar0)), 0, -1, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_785()
{
	int iVar0;

	iVar0 = aggregate_func_4710(PLAYER::PLAYER_ID());
	if (!aggregate_func_4598(iVar0))
	{
		return true;
	}
	if (aggregate_func_7398(iVar0, 128))
	{
		return true;
	}
	if (aggregate_func_4240(((*Global_1123778)[iVar0 /*27*/])->f_18, 1))
	{
		return true;
	}
	return false;
}

void func_786()
{
	struct<8> Var0;

	Var0.f_2 = 0;
	Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
	Var0.f_3.f_3 = 0;
	Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
	Var0.f_7.f_3 = 0;
	Local_23.f_199 = aggregate_func_3176(&Var0, "GLOBAL_ALERT_DEFAULT", "WS_PC_ABANDON_CAMP_DOG_SUBH", 0, 0, 1);
}

bool func_787()
{
	int iVar0;
	vector3 vVar1;
	int iVar5;

	if (Local_23.f_199 == 0)
	{
		return false;
	}
	iVar0 = -1218098620;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar0))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					iVar5 = vVar1.z;
					switch (iVar5)
					{
						case 2074623703:
							Local_23.f_198 = 1;
							UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
							return true;
						case 1400745903:
							Local_23.f_198 = 0;
							UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
							return true;
					}
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
	}
	return false;
}

int func_788()
{
	bool bVar0;

	bVar0 = func_807(PLAYER::NETWORK_PLAYER_ID_TO_INT());
	if (!aggregate_func_2823(bVar0, 0))
	{
		return 0;
	}
	if (!aggregate_func_2850(bVar0, 1))
	{
		return 0;
	}
	if (aggregate_func_1174(bVar0, 1, 0, -142743235))
	{
		return 1;
	}
	return 0;
}

void func_789()
{
	_NAMESPACE76::_0x00A15B94CBA4F76F(Local_23.f_199);
	Local_23.f_199 = 0;
}

int func_791(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	vector3 vVar9;
	vector3 vVar12;
	int iVar15;
	int iVar16;

	func_1296(uParam0);
	if (Local_23.f_193)
	{
		func_1297(uParam0);
	}
	else if (Local_23.f_194)
	{
		func_1298(uParam0);
	}
	else
	{
		if (Local_23.f_195 == 0)
		{
			return 0;
		}
		iVar0 = func_771(Local_23.f_61, 0);
		iVar1 = func_771(uParam0->f_2073, 0);
		if (!func_1299(iVar0))
		{
			return 0;
		}
		iVar2 = aggregate_func_8156(iVar0);
		bVar5 = iVar2 != aggregate_func_8156(iVar1);
		if (((STREAMING::_0x274EE1B90CFA669E(iVar2) && func_1301(iVar0, &iVar3) != 0) && func_1301(iVar1, &iVar4) != 0) && iVar3 != iVar4)
		{
			bVar6 = true;
		}
		if (bVar5 || bVar6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2075))
			{
				bVar7 = true;
				if (bVar6 && ENTITY::GET_ENTITY_MODEL(uParam0->f_2075) == iVar2)
				{
					bVar7 = false;
				}
				if (bVar7)
				{
					ENTITY::_0x0FD7D7C232876E72(uParam0->f_2075);
					ENTITY::DELETE_ENTITY(&(uParam0->f_2075));
				}
				func_1299(iVar0);
			}
			if (iVar2 != 0)
			{
				fVar8 = Local_23.f_12;
				vVar9 = { func_1302(iVar0) };
				vVar12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_23.f_3, fVar8, vVar9) };
				fVar8 = (fVar8 + func_1303(iVar0));
				if (STREAMING::IS_MODEL_A_VEHICLE(iVar2))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2075))
					{
						iVar15 = VEHICLE::CREATE_VEHICLE(iVar2, vVar12, fVar8, false, false, true, true);
						if (ENTITY::DOES_ENTITY_EXIST(iVar15))
						{
							uParam0->f_2075 = iVar15;
							func_1304(iVar15);
						}
						else
						{
							return 0;
						}
					}
				}
				else if (STREAMING::_0x274EE1B90CFA669E(iVar2))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2075))
					{
						iVar16 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar2, vVar12, false, false, false, true);
						if (ENTITY::DOES_ENTITY_EXIST(iVar16))
						{
							uParam0->f_2075 = iVar16;
							ENTITY::SET_ENTITY_HEADING(iVar16, fVar8);
							func_1304(iVar16);
						}
						else
						{
							return 0;
						}
					}
					else
					{
						iVar16 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_2075);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar16))
					{
						if (!func_1305(uParam0))
						{
							return 0;
						}
					}
				}
			}
		}
		func_1306();
		if (uParam0->f_2073 != Local_23.f_61)
		{
			uParam0->f_2073 = Local_23.f_61;
		}
		Local_23.f_191 = -1;
		Local_23.f_190 = 0;
	}
	return 1;
}

int func_792(var uParam0)
{
	int iVar0;
	var uVar1;
	bool bVar9;
	struct<5> Var10;
	struct<4> Var15;
	struct<4> Var19;
	struct<15> Var23;

	if (aggregate_func_4911(uParam0) != 811310738)
	{
		return 0;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(uParam0->f_2094.f_58, 4);
	if (!aggregate_func_8830(PLAYER::NETWORK_PLAYER_ID_TO_INT(), &uVar1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "rightLabelVisible", false);
		return 0;
	}
	bVar9 = func_807(PLAYER::NETWORK_PLAYER_ID_TO_INT());
	if (bVar9 == 0)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "rightLabelVisible", false);
		return 0;
	}
	Var10 = { aggregate_func_304(bVar9, 1, 0) };
	if (Var10.f_4 == 0)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "rightLabelVisible", false);
		return 0;
	}
	Var15 = { aggregate_func_2828(bVar9, Var10, Var10.f_4, 1) };
	Var19 = { aggregate_func_4289() };
	if (aggregate_func_4632(&Var15, &Var19))
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "rightLabelVisible", false);
		return 0;
	}
	Var23.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(aggregate_func_1499(1), &Var15, &Var23, 22, 1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "rightLabelVisible", false);
		return 0;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(aggregate_func_1966(Var23.f_14)))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "rightRawText", &(Var23.f_14));
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar0, "rightLabelVisible", true);
		return 1;
	}
	return 0;
}

void func_793()
{
	Local_23.f_17 = 0;
	aggregate_func_4957(&(Local_23.f_18));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
}

bool func_799(bool bParam0)
{
	if (bParam0 == -620094652)
	{
		return true;
	}
	return false;
}

bool func_800(var uParam0)
{
	if (((((((((func_1312(uParam0, -1535250369 /* GXTEntry: "Tan Brindle" */) || func_1312(uParam0, 914789466 /* GXTEntry: "Black & White" */)) || func_1312(uParam0, -1991362080 /* GXTEntry: "Black & Tan" */)) || func_1312(uParam0, 55994234 /* GXTEntry: "Dark Brown" */)) || func_1312(uParam0, 262209551 /* GXTEntry: "Dead Grass" */)) || func_1312(uParam0, 769866899 /* GXTEntry: "Brown" */)) || func_1312(uParam0, -429885089 /* GXTEntry: "Yellow" */)) || func_1312(uParam0, 536669287 /* GXTEntry: "Black" */)) || func_1312(uParam0, -289273358 /* GXTEntry: "Chocolate" */)) || func_1312(uParam0, 952368108))
	{
		return true;
	}
	return false;
}

bool func_802(bool bParam0)
{
	if (((bParam0 == 157665656 || bParam0 == -2112992057) || bParam0 == 252644427) || bParam0 == -906191890)
	{
		return true;
	}
	return false;
}

bool func_807(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return ((*Global_1129907)[iParam0 /*12*/])->f_1;
}

struct<24> func_811(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<24> Var0;
	struct<15> Var24;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return Var0;
	}
	Var24.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(aggregate_func_1499(bParam4), &uParam0, &Var24, 22, 1))
	{
		return Var0;
	}
	Var0 = { aggregate_func_4654(&Var24, bParam5) };
	Var0.f_16 = { Var24.f_14 };
	return Var0;
}

bool func_816(var uParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_64))
	{
		return false;
	}
	if (aggregate_func_3027(1))
	{
		return false;
	}
	switch (uParam0->f_9)
	{
		case 142663787:
			iVar0 = 4;
			break;
		case 1043717005:
			iVar0 = 5;
			break;
		case -421952220:
			iVar0 = 6;
			break;
		case -1774867076:
			switch (uParam0->f_8)
			{
				case -1411330704: /* GXTEntry: "Fast Travel Post" */
					iVar0 = 8;
					break;
				case -428390721: /* GXTEntry: "Butcher Table" */
					iVar0 = 7;
					break;
				case 1642014154: /* GXTEntry: "Stew Pot" */
					iVar0 = 9;
					break;
				case 1476279059: /* GXTEntry: "Medium Delivery Wagon" */
					iVar0 = 10;
					break;
				case -1490861779: /* GXTEntry: "Large Delivery Wagon" */
					iVar0 = 11;
					break;
			}
			break;
		case -1087003323:
		case 1231618917:
			if (aggregate_func_4890(uParam0->f_8))
			{
				iVar0 = 13;
			}
			else
			{
				iVar0 = 12;
			}
			break;
		case -1911121386:
		case 1756656691:
			iVar0 = 14;
			break;
		default:
			return false;
	}
	if (aggregate_func_938(&(Local_23.f_92), aggregate_func_6661(func_1290(iVar0)), 0, -1, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_817(bool bParam0)
{
	return aggregate_func_2830(bParam0) == joaat("dog");
}

bool func_823(bool bParam0)
{
	return aggregate_func_2827(bParam0) == -768291983;
}

bool func_824(bool bParam0)
{
	return aggregate_func_2827(bParam0) == -1015460895;
}

bool func_825(bool bParam0)
{
	if (bParam0 == 811310738)
	{
		return true;
	}
	return false;
}

void func_826()
{
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 204)
	{
		func_1343(iVar0);
		iVar0++;
	}
}

bool func_871()
{
	if (aggregate_func_2437(func_1290(3)))
	{
		return false;
	}
	else if (aggregate_func_4281(256))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_64))
	{
		return true;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return true;
	}
	if (aggregate_func_3027(1))
	{
		return false;
	}
	if (aggregate_func_938(&(Local_23.f_92), aggregate_func_6661(func_1290(3)), 0, -1, 0, 0))
	{
		aggregate_func_7374(256);
		return false;
	}
	return true;
}

void func_872(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (STREAMING::_0x9427C94D2E4094A4(iParam0, 0))
	{
		STREAMING::_0x4EDDD9E9CA5AF985(iParam0);
	}
	switch (iParam0)
	{
		case -22664287:
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cigarette_cs01x"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_pipe01x"));
			break;
	}
}

void func_873()
{
	int iVar0;
	int iVar1;

	iVar1 = 110;
	while (iVar1 <= 132)
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(&(Local_23.f_66[iVar0])))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(&(Local_23.f_66[iVar0]));
			Local_23.f_66[iVar0] = 0;
		}
		iVar0++;
		iVar1++;
	}
}

void func_874()
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_768());
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_769());
	Local_23.f_55 = -1;
	if (CAM::DOES_CAM_EXIST(Local_23.f_54))
	{
		if (CAM::IS_CAM_RENDERING(Local_23.f_54))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(Local_23.f_54, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_23.f_53))
	{
		if (CAM::IS_CAM_RENDERING(Local_23.f_53))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
		CAM::DESTROY_CAM(Local_23.f_53, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_56))
	{
		OBJECT::DELETE_OBJECT(&(Local_23.f_56));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_57))
	{
		OBJECT::DELETE_OBJECT(&(Local_23.f_57));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_58))
	{
		OBJECT::DELETE_OBJECT(&(Local_23.f_58));
	}
}

int func_998(var uParam0, int iParam1)
{
	struct<173> Var0;
	bool bVar189;
	struct<173> Var190;
	int iVar379;

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
	if (!aggregate_func_6277(uParam0, &Var0))
	{
		return 0;
	}
	bVar189 = aggregate_func_4275(uParam0);
	bVar189 = (bVar189 + iParam1);
	if (bVar189 < 0 || bVar189 >= Var0.f_153)
	{
		Var190 = 14;
		Var190.f_4.f_8 = 2;
		Var190.f_4.f_11 = 16;
		Var190.f_4.f_28 = 16;
		Var190.f_4.f_45 = 16;
		Var190.f_4.f_62 = 16;
		Var190.f_4.f_79 = 16;
		Var190.f_4.f_96 = 4;
		Var190.f_4.f_96.f_1.f_1 = 6;
		Var190.f_4.f_96.f_1.f_8.f_1 = 6;
		Var190.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
		Var190.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
		Var190.f_136 = 4;
		Var190.f_136.f_1.f_2 = -1;
		Var190.f_136.f_1.f_3 = -1;
		Var190.f_136.f_1.f_4.f_2 = -1;
		Var190.f_136.f_1.f_4.f_3 = -1;
		Var190.f_136.f_1.f_4.f_4.f_2 = -1;
		Var190.f_136.f_1.f_4.f_4.f_3 = -1;
		Var190.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
		Var190.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
		Var190.f_153 = -1;
		Var190.f_154 = -1;
		Var190.f_155 = 16;
		Var190.f_172 = 16;
		iVar379 = 0;
		while (iVar379 < uParam0->f_279)
		{
			if (!aggregate_func_6314(uParam0, (Var0.f_3 + iParam1), &Var190))
			{
				return 0;
			}
			if (Var190.f_153 >= 0)
			{
				if (!aggregate_func_2301(&(Var190.f_136[0 /*4*/])))
				{
					return 0;
				}
				else if (aggregate_func_2850(&(Var190.f_136[0 /*4*/]), 1))
				{
					if (iParam1 > 0)
					{
						iParam1++;
					}
					else
					{
						iParam1 = (iParam1 - 1);
					}
					Jump @553; //curOff = 536
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 0;
			}
			iVar379++;
		}
	}
	return 0;
}

Vector3 func_1257()
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { 0.5f, 0f, 0f };
	iVar3 = func_1857(Local_23.f_14);
	switch (iVar3)
	{
		case 1977666305:
			vVar0 = { 0.5f, 0f, -1.07f };
			break;
		case -2133563554:
			vVar0 = { 0.5f, 0f, -0.07f };
			break;
	}
	return vVar0;
}

bool func_1275(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return ((*Global_1126840)[iParam0 /*83*/])->f_38.f_12.f_8;
}

int func_1277()
{
	return 500320009;
}

int func_1284(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	if (!aggregate_func_9362(iParam0))
	{
		return 1;
	}
	switch (iLocal_13)
	{
		case 0:
			if (MISC::IS_STRING_NULL_OR_EMPTY(aggregate_func_9363(iParam0, iParam1)))
			{
				return 0;
			}
			if (iParam0 == 9 || iParam0 == 27)
			{
				iVar0 = 1;
			}
			iLocal_14 = ANIMSCENE::_CREATE_ANIM_SCENE(aggregate_func_9363(iParam0, iParam1), iVar0, 0, false, true);
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
			if (aggregate_func_4251() == -1)
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
			return 1;
		case 3:
			break;
	}
	return 0;
}

void func_1285(int iParam0, vector3 vParam1, float fParam4)
{
	*iParam0 = OBJECT::CREATE_OBJECT_NO_OFFSET(func_768(), vParam1, false, false, false, true);
	ENTITY::SET_ENTITY_HEADING(*iParam0, fParam4);
	ENTITY::SET_ENTITY_VISIBLE(*iParam0, false);
	ENTITY::SET_ENTITY_COLLISION(*iParam0, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
	ENTITY::FREEZE_ENTITY_POSITION(*iParam0, true);
}

int func_1286(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 == 0)
	{
		return 0;
	}
	iVar0 = aggregate_func_2827(bParam0);
	switch (iVar0)
	{
		case -1941499753:
			return 50;
		case 1193257440:
			return 3;
		case 1415299667:
			return 1;
		default:
			break;
	}
	if (iVar0 == 1795979421)
	{
		iVar1 = func_771(bParam0, 0);
		switch (iVar1)
		{
			case 60:
				return 2;
			case 66:
				return 51;
			case 65:
				return 46;
			case 61:
				return 45;
			case 62:
				return 49;
			case 63:
				return 48;
			case 2:
				return 47;
			default:
				break;
		}
	}
	if (aggregate_func_4281(2) && iVar0 == -768291983)
	{
		return 44;
	}
	else
	{
		iVar2 = func_771(bParam0, 0);
		switch (iVar2)
		{
			case 149:
				return 5;
			case 150:
				return 11;
			case 151:
				return 13;
			case 152:
				return 18;
			case 153:
				return 23;
			case 154:
				return 29;
			case 155:
				return 35;
			case 156:
				return 41;
			case 157:
				return 6;
			case 158:
				return 11;
			case 159:
				return 14;
			case 160:
				return 19;
			case 161:
				return 25;
			case 162:
				return 31;
			case 163:
				return 37;
			case 164:
				return 43;
			case 165:
				return 4;
			case 166:
				return 9;
			case 167:
				return 12;
			case 168:
				return 16;
			case 169:
				return 21;
			case 170:
				return 27;
			case 171:
				return 33;
			case 172:
				return 39;
			case 173:
				return 4;
			case 174:
				return 8;
			case 175:
				return 13;
			case 176:
				return 15;
			case 177:
				return 20;
			case 178:
				return 26;
			case 179:
				return 32;
			case 180:
				return 38;
			case 181:
				return 6;
			case 182:
				return 11;
			case 183:
				return 13;
			case 184:
				return 18;
			case 185:
				return 24;
			case 186:
				return 30;
			case 187:
				return 36;
			case 188:
				return 42;
			case 189:
				return 7;
			case 190:
				return 10;
			case 191:
				return 13;
			case 192:
				return 17;
			case 193:
				return 22;
			case 194:
				return 28;
			case 195:
				return 34;
			case 196:
				return 40;
			case 197:
				return 7;
			case 198:
				return 10;
			case 199:
				return 13;
			case 200:
				return 18;
			case 201:
				return 23;
			case 202:
				return 29;
			case 203:
				return 35;
			case 204:
				return 41;
			default:
				break;
		}
	}
	return -1;
}

void func_1287(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (Local_23.f_55 != iParam0)
	{
		if (CAM::DOES_CAM_EXIST(Local_23.f_53))
		{
			if (CAM::DOES_CAM_EXIST(Local_23.f_54))
			{
				CAM::DESTROY_CAM(Local_23.f_54, false);
			}
			Local_23.f_54 = Local_23.f_53;
		}
		iVar0 = func_1945(iParam0);
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, func_1946(iParam0)) };
		Local_23.f_53 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", vVar1, 0f, 0f, 0f, func_1947(iParam0), false, 2);
		CAM::POINT_CAM_AT_ENTITY(Local_23.f_53, iVar0, func_1948(iParam0), true);
		if (Local_23.f_55 == -1)
		{
			CAM::SET_CAM_ACTIVE(Local_23.f_53, true);
		}
		else
		{
			iVar4 = func_1949(iParam0, Local_23.f_55);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_23.f_53, Local_23.f_54, iVar4, 1, 1);
		}
		Local_23.f_55 = iParam0;
	}
}

char[] func_1290(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "TRAD_WO_LAUNCH";
		case 2:
			return "TRAD_WO_LAUNCHF";
		case 3:
			return "TRAD_WO_LEAVE";
		case 4:
			return "TRAD_WO_THEME";
		case 5:
			return "TRAD_WO_TENT";
		case 6:
			return "TRAD_WO_FLAG";
		case 7:
			return "TRAD_WO_BUTCH";
		case 8:
			return "TRAD_WO_FTPOST";
		case 9:
			return "TRAD_WO_STEW";
		case 10:
			return "TRAD_WO_WAGONM";
		case 11:
			return "TRAD_WO_WAGONL";
		case 12:
			return "TRAD_WO_OUTFIT";
		case 13:
			return "TRAD_WO_OUTFITG";
		case 14:
			return "TRAD_CA_DOG";
		default:
			break;
	}
	return "";
}

void func_1296(var uParam0)
{
	bool bVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_200))
	{
		aggregate_func_49(&(Local_23.f_200), &(Local_23.f_200));
	}
	bVar0 = aggregate_func_4911(uParam0);
	Local_23.f_195 = 1;
	if (func_799(bVar0))
	{
		if (Local_23.f_193 == 0)
		{
			aggregate_func_4286(Local_23.f_191);
		}
		Local_23.f_193 = 1;
		Local_23.f_194 = 0;
	}
	else if (func_802(bVar0))
	{
		if (Local_23.f_194 == 0)
		{
			aggregate_func_4286(Local_23.f_192);
		}
		Local_23.f_193 = 0;
		Local_23.f_194 = 1;
	}
	else if (func_825(bVar0))
	{
		Local_23.f_195 = 0;
		Local_23.f_193 = 0;
		Local_23.f_194 = 0;
	}
	else
	{
		Local_23.f_193 = 0;
		Local_23.f_194 = 0;
	}
}

int func_1297(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	int iVar16;

	iVar3 = aggregate_func_2851();
	switch (iVar3)
	{
		case 157665656: /* GXTEntry: "American Foxhound" */
			iVar0 = func_771(-1535250369 /* GXTEntry: "Tan Brindle" */, 0);
			Local_23.f_61 = -1535250369; /* GXTEntry: "Tan Brindle" */
			Local_23.f_60 = -1535250369; /* GXTEntry: "Tan Brindle" */
			break;
		case -2112992057: /* GXTEntry: "Ches. Bay Retriever" */
			iVar0 = func_771(55994234 /* GXTEntry: "Dark Brown" */, 0);
			Local_23.f_61 = 55994234; /* GXTEntry: "Dark Brown" */
			Local_23.f_60 = 55994234; /* GXTEntry: "Dark Brown" */
			break;
		case 252644427: /* GXTEntry: "Labrador" */
			iVar0 = func_771(-429885089 /* GXTEntry: "Yellow" */, 0);
			Local_23.f_61 = -429885089; /* GXTEntry: "Yellow" */
			Local_23.f_60 = -429885089; /* GXTEntry: "Yellow" */
			break;
		case -906191890:
			iVar0 = func_771(952368108, 0);
			Local_23.f_61 = 952368108;
			Local_23.f_60 = 952368108;
			break;
		default:
			return 0;
	}
	if (!func_1299(iVar0))
	{
		return 0;
	}
	iVar1 = aggregate_func_8156(iVar0);
	bVar2 = iVar3 != Local_23.f_190;
	if (bVar2)
	{
		Local_23.f_192 = 0;
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2075))
		{
			ENTITY::DELETE_ENTITY(&(uParam0->f_2075));
			func_1299(iVar0);
		}
		if (iVar1 != 0)
		{
			fVar4 = Local_23.f_12;
			vVar5 = { func_1302(iVar0) };
			vVar8 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_23.f_3, fVar4, vVar5) };
			fVar4 = (fVar4 + func_1303(iVar0));
			if (STREAMING::IS_MODEL_A_PED(iVar1))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2075))
				{
					iVar11 = aggregate_func_2073(iVar1, vVar8, fVar4, 0, 0, 0, 0, 0, 1, 0, 1);
					if (Local_23.f_192 < 0)
					{
						PED::_SET_PED_OUTFIT_PRESET(iVar11, 0, 0);
					}
					else
					{
						PED::_SET_PED_OUTFIT_PRESET(iVar11, Local_23.f_192, 0);
					}
					PED::_0xCC8CA3E88256E58F(iVar11, 0, 1, 1, 1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						ENTITY::SET_ENTITY_VISIBLE(iVar11, false);
						ENTITY::_0x9587913B9E772D29(iVar11, 0);
						uParam0->f_2075 = iVar11;
						func_1304(iVar11);
						PED::_0xAAB050DA48B57978(iVar11, "Interaction_Happy", 0, -1, 4);
						iVar12 = func_1945(50);
						vVar13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar12, func_1946(50)) };
						TASK::TASK_LOOK_AT_COORD(iVar11, vVar13, -1, 0, 51, 0);
					}
					else
					{
						return 0;
					}
				}
			}
		}
	}
	if (((!bVar2 && STREAMING::IS_MODEL_A_PED(iVar1)) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_2075)) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_2075))
	{
		iVar16 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_2075);
		if (PED::_0xA0BC8FAED8CFEB3C(iVar16))
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_2075, true);
		}
	}
	if (uParam0->f_2073 != Local_23.f_61)
	{
		uParam0->f_2073 = Local_23.f_61;
	}
	Local_23.f_190 = iVar3;
	Local_23.f_191 = aggregate_func_5691();
	func_1306();
	return 1;
}

int func_1298(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = aggregate_func_5691();
	bVar1 = aggregate_func_2851();
	if (iVar0 != Local_23.f_192)
	{
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_2075);
		PED::_SET_PED_OUTFIT_PRESET(iVar2, func_1960(bVar1), 0);
		PED::_0xCC8CA3E88256E58F(iVar2, 0, 1, 1, 1, false);
	}
	Local_23.f_192 = iVar0;
	func_1306();
	return 1;
}

bool func_1299(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = 1;
	iVar1 = aggregate_func_8156(iParam0);
	if (iVar1 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar1, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar1))
		{
			iVar0 = 0;
		}
	}
	bVar2 = aggregate_func_4350(iParam0);
	if (bVar2 != 0 && TXD::_0xBA0163B277C2D2D0(bVar2))
	{
		TXD::_0xDB1BD07FB464584D(bVar2, 0);
		if (!TXD::_0xBE72591D1509FFE4(bVar2))
		{
			iVar0 = 0;
		}
	}
	iVar3 = 0;
	while (iVar3 <= 2)
	{
		iVar4 = aggregate_func_8304(iParam0, iVar3);
		if (iVar4 != 0)
		{
			PROPSET::_REQUEST_PROPSET(iVar4);
			if (!PROPSET::_HAS_PROPSET_LOADED(iVar4))
			{
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_1301(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 71:
			*iParam1 = 2;
			return -1550362321;
		case 72:
			*iParam1 = 7;
			return -1550362321;
		case 73:
			*iParam1 = 6;
			return -1550362321;
		case 74:
			*iParam1 = 4;
			return -1550362321;
		case 75:
			*iParam1 = 5;
			return -1550362321;
		case 76:
			*iParam1 = 3;
			return -1550362321;
		case 77:
			*iParam1 = 0;
			return -1550362321;
		case 78:
			*iParam1 = 1;
			return -1550362321;
		case 79:
			*iParam1 = 8;
			return -1550362321;
		default:
			break;
	}
	return 0;
}

Vector3 func_1302(int iParam0)
{
	if ((iParam0 >= 71 && iParam0 <= 109) && iParam0 != 79)
	{
		return -0.029f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

float func_1303(int iParam0)
{
	switch (iParam0)
	{
		case 79:
			return 260f;
		case 60:
			return 180f;
		case 62:
			return 180f;
		case 63:
			return 180f;
		case 64:
			return 180f;
		case 67:
			return 180f;
		case 68:
			return 180f;
		case 69:
			return 180f;
		case 70:
			return 180f;
		case 2:
			return 110f;
		default:
			break;
	}
	if (iParam0 >= 110 && iParam0 <= 132)
	{
		return 180f;
	}
	else if (iParam0 >= 71 && iParam0 <= 109)
	{
		return 80f;
	}
	return 0f;
}

void func_1304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
		ENTITY::SET_ENTITY_COLLISION(iParam0, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		PED::_0x2EB75FB86C41F026(iVar0, 0, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		iVar1 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (ENTITY::GET_ENTITY_MODEL(iVar1) == aggregate_func_8156(62))
		{
			VEHICLE::SET_VEHICLE_EXTRA(iVar1, 1, true);
			VEHICLE::SET_VEHICLE_EXTRA(iVar1, 2, true);
			VEHICLE::SET_VEHICLE_EXTRA(iVar1, 3, true);
		}
		VEHICLE::_0xF89D82A0582E46ED(iVar1, 0);
		VEHICLE::_0x8268B098F6FCA4E2(iVar1, 0);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (ENTITY::GET_ENTITY_MODEL(iVar2) == aggregate_func_8156(2))
		{
			Local_23.f_200 = iVar2;
			Local_23.f_200.f_1 = 1;
			aggregate_func_4489(&(Local_23.f_200));
		}
	}
}

bool func_1305(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2075))
	{
		if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0->f_2075))
		{
			iVar0 = func_771(Local_23.f_61, 0);
			iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_2075);
			iVar3 = func_1301(iVar0, &iVar2);
			if (iVar3 != 0 && iVar3 == ENTITY::GET_ENTITY_MODEL(uParam0->f_2075))
			{
				OBJECT::_SET_OBJECT_TEXTURE_VARIATION(iVar1, iVar2);
			}
			if (aggregate_func_4484(iVar0))
			{
				iVar5 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
				if (func_1965(iVar5))
				{
					bVar4 = func_1966(iVar5);
				}
			}
			else
			{
				bVar4 = aggregate_func_4350(iVar0);
			}
			if (bVar4 != 0 && TXD::_0xBA0163B277C2D2D0(bVar4))
			{
				OBJECT::_0xE124889AE0521FCF(iVar1, bVar4, 0, 0);
			}
		}
		return true;
	}
	return false;
}

int func_1306()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar4 = func_771(Local_23.f_61, iVar1);
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			iVar2 = aggregate_func_8304(iVar4, iVar3);
			if (Local_23.f_40[iVar1 /*4*/][iVar3] != iVar2)
			{
				if (PROPSET::_DOES_PROPSET_EXIST(Local_23.f_27[iVar1 /*4*/][iVar3]))
				{
					(*Local_23.f_40[iVar1 /*4*/])[iVar3] = 0;
					PROPSET::_DELETE_PROPSET(Local_23.f_27[iVar1 /*4*/][iVar3], true, false);
					func_1343(iVar4);
					bVar0 = true;
				}
			}
			iVar3++;
		}
		iVar1++;
	}
	if (bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		iVar4 = func_771(Local_23.f_61, iVar1);
		if (!func_1299(iVar4))
		{
			return 0;
		}
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			iVar2 = aggregate_func_8304(iVar4, iVar3);
			if (iVar2 != 0 && iVar2 != Local_23.f_40[iVar1 /*4*/][iVar3])
			{
				fVar5 = func_1967(iVar4, iVar1);
				if ((iVar4 == 36 || iVar4 == 31) || iVar4 == 8)
				{
					fVar5 = (fVar5 + 90f);
				}
				else if (iVar4 == 39)
				{
					fVar5 = (fVar5 + 45f);
				}
				if (!PROPSET::_DOES_PROPSET_EXIST(Local_23.f_27[iVar1 /*4*/][iVar3]))
				{
					(*Local_23.f_27[iVar1 /*4*/])[iVar3] = PROPSET::_CREATE_PROPSET(iVar2, func_756(iVar1), func_1968(iVar4), fVar5, 1200f, false, false);
					func_1969(Local_23.f_27[iVar1 /*4*/][iVar3]);
					(*Local_23.f_40[iVar1 /*4*/])[iVar3] = iVar2;
				}
			}
			iVar3++;
		}
		iVar1++;
	}
	return 1;
}

int func_1312(var uParam0, bool bParam1)
{
	if (!aggregate_func_681(uParam0, bParam1, -87783305))
	{
		return 0;
	}
	return 1;
}

void func_1343(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = aggregate_func_8304(iParam0, iVar0);
		if (iVar1 != 0)
		{
			if (PROPSET::_HAS_PROPSET_LOADED(iVar1))
			{
				PROPSET::_RELEASE_PROPSET(iVar1);
			}
		}
		iVar0++;
	}
}

int func_1857(vector3 vParam0)
{
	var uVar0;
	struct<4> Var1;

	if (!aggregate_func_1759(&Var1, vParam0))
	{
		return uVar0;
	}
	Var1.f_2 = 1462115960;
	Var1.f_3 = vParam0.z;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 759645552;
		DATAFILE::_DATAFILE_GET_HASH(&uVar0, &Var1);
	}
	return uVar0;
}

int func_1945(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return Local_23.f_58;
	}
	return Local_23.f_57;
}

Vector3 func_1946(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.641f, 1.313f, 0.496f;
		case 1:
			return 0.252f, 2.435f, 0.299f;
		case 2:
			return 1.29f, -2.673f, 1.065f;
		case 3:
			return 2.983f, -4.74f, 1.985f;
		case 4:
			return 0.27f, -4.466f, 1.195f;
		case 5:
			return 0.55f, -4.028f, 1.195f;
		case 6:
			return 0.548f, -3.925f, 1.195f;
		case 7:
			return 0.55f, -4.213f, 1.195f;
		case 8:
			return 0.633f, -3.393f, 0.973f;
		case 9:
			return 0.878f, -4.706f, 1.279f;
		case 10:
			return 1.458f, -4.323f, 1.453f;
		case 11:
			return 1.458f, -4.323f, 1.453f;
		case 12:
			return 0.69f, -4.596f, 1.506f;
		case 13:
			return 1.458f, -4.323f, 1.453f;
		case 14:
			return 1.458f, -4.323f, 1.453f;
		case 15:
			return 0.183f, -4.656f, 1.504f;
		case 16:
			return 0.513f, -4.463f, 1.699f;
		case 17:
			return 1.451f, -3.601f, 1.853f;
		case 18:
			return 1.458f, -4.323f, 1.468f;
		case 19:
			return 0.591f, -4.278f, 1.816f;
		case 20:
			return 1.368f, -4.271f, 2.069f;
		case 21:
			return 0.593f, -4.811f, 1.334f;
		case 22:
			return 0.366f, -4.323f, 1.976f;
		case 23:
			return 0.714f, -5.026f, 1.976f;
		case 24:
			return 0.221f, -5.243f, 1.816f;
		case 25:
			return 0.591f, -4.806f, 1.816f;
		case 26:
			return 1.368f, -4.271f, 2.069f;
		case 27:
			return 0.593f, -5.436f, 1.767f;
		case 28:
			return 0.366f, -4.92f, 1.98f;
		case 29:
			return 0.714f, -5.026f, 1.976f;
		case 30:
			return 0.221f, -5.243f, 1.816f;
		case 31:
			return 0.199f, -4.229f, 1.816f;
		case 32:
			return 1.546f, -4.849f, 2.159f;
		case 33:
			return 0.593f, -5.049f, 1.334f;
		case 34:
			return 0.366f, -4.323f, 1.976f;
		case 35:
			return 0.714f, -5.164f, 1.976f;
		case 36:
			return 0.221f, -5.243f, 1.816f;
		case 37:
			return 0.591f, -4.806f, 1.816f;
		case 38:
			return 1.258f, -4.891f, 2.069f;
		case 39:
			return 0.406f, -5.346f, 1.492f;
		case 40:
			return 0.366f, -4.323f, 1.976f;
		case 41:
			return 0.714f, -5.026f, 1.976f;
		case 42:
			return 0.221f, -5.243f, 1.899f;
		case 43:
			return 0.591f, -4.806f, 1.816f;
		case 44:
			return -2.005f, -2.628f, 1.65f;
		case 45:
			return 1.426f, -3.083f, 1.623f;
		case 46:
			return 1.221f, -4.013f, 1.285f;
		case 47:
			return 2.214f, -4.571f, 1.788f;
		case 48:
			return 1.915f, -4.243f, 1.865f;
		case 49:
			return 2.495f, -4.368f, 2.508f;
		case 50:
			return 0.64f, -1.577f, 0.893f;
		case 51:
			return 0.878f, -2.278f, 0.985f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_1947(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 37.8f;
		case 1:
			return 51.2f;
		case 2:
			return 51.2f;
		case 3:
			return 51.2f;
		case 4:
			return 73.8f;
		case 5:
			return 62.65f;
		case 6:
			return 62.65f;
		case 7:
			return 62.65f;
		case 8:
			return 73.8f;
		case 9:
			return 73.8f;
		case 10:
			return 65.25f;
		case 11:
			return 56.275f;
		case 12:
			return 73.8f;
		case 13:
			return 65.25f;
		case 14:
			return 56.25f;
		case 15:
			return 73.8f;
		case 16:
			return 73.8f;
		case 17:
			return 58.1f;
		case 18:
			return 60.5f;
		case 19:
			return 58.1f;
		case 20:
			return 73.8f;
		case 21:
			return 73.8f;
		case 22:
			return 52f;
		case 23:
			return 58.1f;
		case 24:
			return 58.1f;
		case 25:
			return 56.275f;
		case 26:
			return 73.8f;
		case 27:
			return 75.25f;
		case 28:
			return 54f;
		case 29:
			return 58.1f;
		case 30:
			return 58.1f;
		case 31:
			return 56.275f;
		case 32:
			return 75.525f;
		case 33:
			return 73.8f;
		case 34:
			return 52f;
		case 35:
			return 59f;
		case 36:
			return 58.1f;
		case 37:
			return 56.275f;
		case 38:
			return 78.425f;
		case 39:
			return 73.8f;
		case 40:
			return 58f;
		case 41:
			return 62.25f;
		case 42:
			return 58.1f;
		case 43:
			return 56.275f;
		case 44:
			return 51.2f;
		case 45:
			return 50f;
		case 46:
			return 51.2f;
		case 47:
			return 53.1f;
		case 48:
			return 51.2f;
		case 49:
			return 51.2f;
		case 50:
			return 50f;
		case 51:
			return 51.2f;
		default:
			break;
	}
	return 65f;
}

Vector3 func_1948(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.245f, 0f, 0.44f;
		case 1:
			return 0.543f, 0.258f, -0.018f;
		case 2:
			return -0.468f, 0f, 0.84f;
		case 3:
			return -0.048f, 0f, 2f;
		case 4:
			return -1.923f, 0f, 1.34f;
		case 5:
			return -1.608f, 0f, 1.09f;
		case 6:
			return -0.828f, 0f, 0.598f;
		case 7:
			return -1.496f, 0f, 0.883f;
		case 8:
			return -0.383f, -1.965f, 1.066f;
		case 9:
			return -2.321f, 0.015f, 1.883f;
		case 10:
			return -1.746f, -0.078f, 1.398f;
		case 11:
			return -1.323f, -0.078f, 0.823f;
		case 12:
			return -2.243f, 0.015f, 1.459f;
		case 13:
			return -1.594f, -0.078f, 0.771f;
		case 14:
			return -1.541f, -0.078f, 0.553f;
		case 15:
			return -2.113f, 0f, 1.726f;
		case 16:
			return -2.316f, 0.015f, 1.501f;
		case 17:
			return -0.196f, -0.078f, 1.311f;
		case 18:
			return -1.471f, -0.078f, 0.836f;
		case 19:
			return -2.041f, -0.078f, 0.886f;
		case 20:
			return -2.246f, 0.048f, 0.759f;
		case 21:
			return -2.686f, 0.015f, 2.132f;
		case 22:
			return -0.066f, -0.078f, 0.786f;
		case 23:
			return -1.596f, -0.078f, 0.851f;
		case 24:
			return -2.021f, -0.078f, 0.546f;
		case 25:
			return -2.024f, -0.078f, 0.609f;
		case 26:
			return -2.246f, 0.048f, 0.759f;
		case 27:
			return -1.326f, 0.535f, 1.632f;
		case 28:
			return -0.42f, -0.248f, 0.746f;
		case 29:
			return -0.666f, 0.162f, 0.851f;
		case 30:
			return -1.641f, 0.792f, 0.546f;
		case 31:
			return -1.134f, -0.078f, 0.609f;
		case 32:
			return -2.226f, 1.488f, 0.069f;
		case 33:
			return -2.686f, 1.875f, 1.622f;
		case 34:
			return -0.796f, -0.078f, 0.786f;
		case 35:
			return -0.856f, -0.078f, 0.851f;
		case 36:
			return -1.571f, -0.078f, 0.546f;
		case 37:
			return -1.324f, -0.078f, 0.609f;
		case 38:
			return -1.296f, -0.162f, 0.359f;
		case 39:
			return -1.346f, 0.015f, 1.442f;
		case 40:
			return -0.556f, -0.078f, 0.786f;
		case 41:
			return -1.086f, -0.078f, 0.851f;
		case 42:
			return -1.741f, 0.142f, 0.546f;
		case 43:
			return -1.204f, -0.078f, 0.609f;
		case 44:
			return 0.123f, 2.328f, 0.115f;
		case 45:
			return -0.92f, -0.71f, 0.84f;
		case 46:
			return -0.86f, -0.56f, 0.91f;
		case 47:
			return -0.39f, -0.53f, 0.54f;
		case 48:
			return -1.21f, -0.97f, 0.99f;
		case 49:
			return -1.14f, -1.31f, 1.63f;
		case 50:
			return -0.92f, 0.48f, 0.13f;
		case 51:
			return -0.86f, 0.33f, 0.49f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_1949(int iParam0, var uParam1)
{
	return 500;
}

int func_1960(bool bParam0)
{
	int iVar0;

	if (aggregate_func_2852(bParam0, -1372720971))
	{
		iVar0 = 0;
	}
	else if (aggregate_func_2852(bParam0, 1028787971))
	{
		iVar0 = 1;
	}
	else if (aggregate_func_2852(bParam0, 1271835644))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_1965(int iParam0)
{
	int iVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return false;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	return func_2551(iVar0);
}

int func_1966(int iParam0)
{
	int iVar0;

	if (func_1965(iParam0))
	{
		iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
		return (Global_1182734->f_1[iVar0 /*3*/])->f_2;
	}
	return 0;
}

float func_1967(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		return aggregate_func_3018(Local_23.f_3, func_756(iParam1), 1);
	}
	return (Local_23.f_12 + func_2553(iParam0));
}

int func_1968(int iParam0)
{
	if (iParam0 >= 71 && iParam0 <= 109)
	{
		return 0;
	}
	return 7;
}

int func_1969(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (PROPSET::_DOES_PROPSET_EXIST(iParam0))
	{
		iVar0 = ITEMSET::CREATE_ITEMSET(false);
		iVar2 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iParam0, iVar0, 0, false, false);
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 <= (iVar2 - 1))
		{
			iVar1 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar0));
			func_1304(iVar1);
			iVar3++;
		}
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return 1;
	}
	return 0;
}

Vector3 func_2110(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0 = { 0.2888f, 0.0967f, 0.395f };
			break;
		case 2:
			vVar0 = { 0.2724f, -0.3441f, 0.63f };
			if (aggregate_func_4577() == 24043185)
			{
				vVar0 = { vVar0.x, vVar0.y, (vVar0.z - 0.1f) };
			}
			break;
		case 3:
			vVar0 = { 0.21f, 0.19f, -0.4f };
			break;
		case 4:
			vVar0 = { 0.23f, 0.18f, -0.69f };
			break;
		case 5:
			vVar0 = { 0.2853f, 0.0589f, 0.01f };
			break;
		case 6:
			vVar0 = { 0.2853f, 0.0589f, -0.11f };
			break;
		case 7:
			vVar0 = { 0.2371f, -0.1028f, 0.48f };
			break;
		case 8:
			vVar0 = { 0.4475f, 0.0964f, 0.275f };
			break;
		case 9:
			vVar0 = { 0.1719f, 0.2036f, -0.45f };
			Jump @417; //curOff = 326
			vVar0 = { 0.3872f, -0.6841f, 0.425f };
			Jump @417; //curOff = 348
			vVar0 = { 0.296f, -0.186f, -0.105f };
			Jump @417; //curOff = 370
			vVar0 = { 0.2198f, 0.0241f, -0.105f };
			Jump @417; //curOff = 392
			vVar0 = { 0.4866f, -0.6752f, -0.1223f };
			return vVar0;
		}

bool func_2551(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	return (((Global_1182734->f_1[iVar0 /*3*/])->f_1 == 0 && &Global_1182734->f_1[iVar0 /*3*/] != 0) && (Global_1182734->f_1[iVar0 /*3*/])->f_2 != 0);
}

float func_2553(int iParam0)
{
	if (iParam0 >= 71 && iParam0 <= 109)
	{
		return 180f;
	}
	return 0f;
}

