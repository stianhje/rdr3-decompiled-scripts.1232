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
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
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
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	bool bLocal_34 = false;
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	bool bLocal_38 = false;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == aggregate_func_1747

void func_6()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	bVar0 = aggregate_func_402(iLocal_30, 0);
	bVar1 = aggregate_func_6347(iLocal_41);
	bVar2 = ENTITY::DOES_ENTITY_EXIST(iLocal_31);
	if (!TASK::_0x841475AC96E794D1(uLocal_16))
	{
		iLocal_29 = 6;
		return;
	}
	if (iLocal_29 <= 1 && aggregate_func_2876(Global_36, TASK::_0xA8452DD321607029(uLocal_16, 1)) >= 1600f)
	{
		return;
	}
	if (iLocal_29 <= 1 && ENTITY::GET_ENTITY_SPEED(Global_35) >= 8f)
	{
		return;
	}
	if ((iLocal_29 > 1 && iLocal_29 != 6) && Global_1938932->f_51)
	{
		func_15();
		iLocal_29 = 2;
		bLocal_38 = true;
	}
	if (iLocal_29 > 1 && iLocal_29 != 6)
	{
		if ((iLocal_29 != 5 && iLocal_29 != 2) && !bVar0)
		{
			func_15();
			if (bLocal_33)
			{
				iLocal_29 = 5;
				iLocal_28 = 0;
			}
			else
			{
				iLocal_29 = 2;
			}
			return;
		}
		if (!bVar2)
		{
			iLocal_29 = 6;
			return;
		}
		if (PED::IS_PED_IN_COMBAT(iLocal_31, 0))
		{
			iLocal_29 = 6;
			return;
		}
	}
	func_16();
	func_17(bVar0);
	switch (iLocal_29)
	{
		case 0:
			iVar3 = func_18();
			iLocal_52 = aggregate_func_7217(aggregate_func_4314(), iVar3);
			if (iLocal_52 == -1)
			{
				return;
			}
			bLocal_32 = false;
			bLocal_39 = false;
			STREAMING::REQUEST_MODEL(joaat("p_coin01x"), false);
			bLocal_38 = false;
			iLocal_27 = 0;
			if (iLocal_17 == 817658057)
			{
				STREAMING::REQUEST_MODEL(joaat("p_bottlebeer01x"), false);
				iVar4 = -758981113;
				iLocal_18 = 130648332;
				iLocal_19 = -1003673600;
				iLocal_21 = 817534410;
				iLocal_22 = -425323829;
				iLocal_23 = -79611391;
				iLocal_24 = -1378615306;
				iLocal_25 = -1931194237;
				iLocal_26 = 18806614;
				STREAMING::_0x19A6BE7D9C6884D3(-758981113, 262144, 0, 0);
			}
			else
			{
				iVar4 = -1208105393;
				iLocal_18 = -766432658;
				iLocal_19 = 391391121;
				iLocal_21 = -226695311;
				iLocal_22 = 1999132356;
				iLocal_23 = -467366400;
				iLocal_24 = 2127356704;
				iLocal_25 = 1054334670;
				iLocal_26 = 1885925117;
				STREAMING::_0x19A6BE7D9C6884D3(-1208105393, 262144, 0, 0);
				STREAMING::REQUEST_MODEL(joaat("p_shotglass01x"), false);
				STREAMING::REQUEST_MODEL(joaat("p_bottlejd01x"), false);
			}
			fVar5 = TASK::_0xB93EA7184BAA85C3(uLocal_16, 1);
			iLocal_42 = TASK::CREATE_SCENARIO_POINT(iVar4, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(uLocal_16, 1), fVar5, func_21()), (fVar5 - 180f), 0, 0, 0);
			TASK::_0xD3A0DA8F91612C6E(iLocal_42, (fVar5 - 180f), 1);
			TASK::_0xA7479FB665361EDB(iLocal_42, 0);
			TASK::_0xE69FDA40AAC3EFC0(iLocal_42, 0);
			iLocal_30 = TASK::_0x5BA659955369B0E2(uLocal_16);
			iLocal_41 = func_22(iLocal_52);
			if (aggregate_func_4455(iLocal_41))
			{
				iLocal_31 = aggregate_func_3379(iLocal_41);
			}
			iLocal_29 = 1;
			aggregate_func_4293(&uLocal_46, 1);
			break;
		case 2:
			if (((!func_26() && !bVar1) && !Global_1938932->f_51) && bVar0)
			{
				iLocal_28 = 0;
				iLocal_29 = 3;
				if (bLocal_33)
				{
					iLocal_29 = 5;
				}
			}
			break;
		case 1:
			if (!STREAMING::HAS_MODEL_LOADED(joaat("p_coin01x")))
			{
				return;
			}
			if (iLocal_17 == 817658057)
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("p_bottlebeer01x")))
				{
					return;
				}
				if (!STREAMING::_0x9427C94D2E4094A4(-758981113, 0))
				{
					return;
				}
			}
			else
			{
				if (!STREAMING::HAS_MODEL_LOADED(joaat("p_shotglass01x")))
				{
					return;
				}
				if (!STREAMING::HAS_MODEL_LOADED(joaat("p_bottlejd01x")))
				{
					return;
				}
				if (!STREAMING::_0x9427C94D2E4094A4(-1208105393, 0))
				{
					return;
				}
			}
			if (!TASK::_0x841475AC96E794D1(iLocal_42))
			{
				return;
			}
			if (!aggregate_func_402(iLocal_30, 0))
			{
				iLocal_30 = TASK::_0x5BA659955369B0E2(uLocal_16);
				return;
			}
			if (!bVar2)
			{
				if (aggregate_func_4455(iLocal_41))
				{
					iLocal_31 = aggregate_func_3379(iLocal_41);
				}
				return;
			}
			aggregate_func_4293(&uLocal_43, 1);
			iLocal_28 = 0;
			iLocal_29 = 3;
			break;
		case 3:
			func_27(bVar0, bVar1, bVar2);
			break;
		case 4:
			aggregate_func_4238();
			break;
		case 5:
			func_29(bVar0, bVar1, bVar2);
			break;
		case 6:
			iLocal_13 = 0;
			break;
	}
}

void func_7()
{
	func_15();
	TASK::_0x4161648394262FDF(TASK::_0xA8452DD321607029(uLocal_16, 1), 0.15f);
	if (TASK::_0x841475AC96E794D1(iLocal_42))
	{
		TASK::_0x81948DFE4F5A0283(iLocal_42);
	}
}

void func_15()
{
	int iVar0;

	if (!Global_1938932->f_51)
	{
		if (Global_1938932->f_50 == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1938932->f_50 = 0;
		}
		iVar0 = aggregate_func_4452(iLocal_41);
		if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
		{
			_NAMESPACE48::_0xA2B18FF8D39F6D87(iVar0);
			_NAMESPACE48::_0x631CD2D77FDC0316(iVar0);
		}
	}
	else
	{
		Global_1938932->f_50 = 0;
	}
}

void func_16()
{
	if (bLocal_34 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, -1342079302))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
		{
			OBJECT::DELETE_OBJECT(&iLocal_55);
		}
		bLocal_34 = false;
	}
	if (bLocal_35 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 2131322378))
	{
		PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_54, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_SERVE_WHISKEY_RETURN_GLASS_UNDER_BAR_MALE_A", 1);
		bLocal_35 = false;
	}
}

void func_17(bool bParam0)
{
	int iVar0;

	if (bLocal_37 && PED::_0xC488B8C0E52560D8(iLocal_30))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_30, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_30, false);
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_30, 0, 1);
	}
	if ((!bLocal_32 && bLocal_38) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_30, 864365833))
	{
		if (iLocal_17 == 817658057)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				iLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_0xA8452DD321607029(iLocal_42, 1), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_37 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				iLocal_54 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_0xA8452DD321607029(iLocal_42, 1), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_54, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_37 = false;
			}
		}
	}
	if (bLocal_36 && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_30, 350240706))
	{
		iLocal_54 = PED::_0x4D0D2E3D8BC000EB(iLocal_30, "p_shotGlass01x_PH_L_Hand", 1);
		bLocal_36 = false;
	}
	if (bParam0)
	{
		iVar0 = PED::_0x569F1E1237508DEB(iLocal_30);
	}
	if (((bLocal_40 && !bLocal_32) && !bLocal_33) && (iVar0 == -446196418 || iVar0 == 266410079))
	{
		if (iLocal_17 == 817658057)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				iLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_0xA8452DD321607029(iLocal_42, 1), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARCUSTOMER_BEER", "WORLD_HUMAN_BARCUSTOMER_HAS_BEER_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_40 = false;
				bLocal_37 = false;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54))
			{
				iLocal_54 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_0xA8452DD321607029(iLocal_42, 1), true, true, false, false, true);
			}
			if (PED::_0x3BBDD6143FF16F98(iLocal_30, iLocal_54, "p_shotGlass01x_PH_L_Hand", "WORLD_HUMAN_BARCUSTOMER_WHISKEY", "WORLD_HUMAN_BARCUSTOMER_HAS_WHISKEY_GLASS_MALE_A", 1))
			{
				bLocal_32 = true;
				bLocal_38 = false;
				bLocal_33 = true;
				bLocal_40 = false;
				bLocal_37 = false;
			}
		}
	}
	if (((bLocal_40 && !bLocal_32) && !PED::_0x68821369A2CEADD5(iLocal_30, iLocal_18)) && !PED::_0x68821369A2CEADD5(iLocal_30, iLocal_19))
	{
		PED::_0x6D07B371E9439019(iLocal_30);
		if (iVar0 == -1265212358)
		{
			PED::_0xD65FDC686A031C83(iLocal_30, iLocal_18, 3f);
			bLocal_37 = true;
		}
		else if (iVar0 == -1488172634)
		{
			PED::_0xD65FDC686A031C83(iLocal_30, iLocal_19, 3f);
			bLocal_37 = true;
		}
	}
}

int func_18()
{
	switch (aggregate_func_4314())
	{
		case 81:
			if (aggregate_func_2028(func_36(0), TASK::_0xA8452DD321607029(uLocal_16, 1)))
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		case 40:
		case 98:
		case 121:
		case 127:
			return 0;
		case 5:
			if (aggregate_func_2028(func_36(2), TASK::_0xA8452DD321607029(uLocal_16, 1)))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
		case 111:
			return 2;
	}
	return -1;
}

Vector3 func_21()
{
	return -0.235327f, 1.850775f, 0f;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		case 6:
			return 2;
		case 3:
			return 69;
		case 2:
			return 137;
		case 1:
			return 138;
		case 8:
			return 437;
		case 0:
			return 502;
		case 4:
			return 345;
		case 7:
			return 426;
		default:
			break;
	}
	return -1;
}

bool func_26()
{
	if (Global_1938932->f_50 != SCRIPTS::GET_ID_OF_THIS_THREAD())
	{
		if (Global_1938932->f_50 == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	if (Global_1938932->f_51)
	{
		return true;
	}
	return false;
}

void func_27(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (Global_1938932->f_51)
	{
		return;
	}
	switch (iLocal_28)
	{
		case 0:
			bVar0 = PED::_0x9C54041BB66BCF9E(iLocal_30, uLocal_16);
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_30, 1))
			{
				func_15();
				iLocal_29 = 5;
				iLocal_28 = 0;
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_55) && TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_30, 1))
			{
				iLocal_55 = PED::_0x4D0D2E3D8BC000EB(iLocal_30, "p_coin01x", 1);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_55))
				{
					ENTITY::_0x18FF3110CF47115D(iLocal_55, 2, false);
				}
				bLocal_34 = true;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_30, 0) && bVar0)
			{
				if ((bParam1 && !aggregate_func_2884(iLocal_41)) || func_26())
				{
					iLocal_29 = 2;
					return;
				}
				else
				{
					func_45();
				}
				iVar1 = PED::_0x569F1E1237508DEB(iLocal_30);
				if ((iVar1 != -1265212358 && iVar1 != -1488172634) && iVar1 != 1164151940)
				{
					iLocal_29 = 5;
					iLocal_28 = 0;
					bLocal_33 = true;
					func_15();
					return;
				}
				if (!Global_1938932->f_51)
				{
					PED::_0xA3A9299C4F2ADB98(iLocal_31);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_31, iLocal_42, 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					iLocal_28 = 1;
				}
			}
			break;
		case 1:
			bVar2 = PED::_0x9C54041BB66BCF9E(iLocal_31, iLocal_42);
			if (!bVar2 && !aggregate_func_927(iLocal_31, -76381094))
			{
				iLocal_28 = 0;
			}
			bVar0 = PED::_0x9C54041BB66BCF9E(iLocal_30, uLocal_16);
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_30, 1))
			{
				func_15();
				iLocal_29 = 5;
				iLocal_28 = 0;
				return;
			}
			if (!bVar2 || !TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_31, 0))
			{
				return;
			}
			if (!PED::_0x68821369A2CEADD5(iLocal_31, iLocal_21))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_31);
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_21, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				iLocal_27++;
			}
			if (iLocal_27 > 5)
			{
				func_15();
				iLocal_28 = 0;
			}
			if (PED::_0xC488B8C0E52560D8(iLocal_31))
			{
				aggregate_func_4293(&uLocal_49, 1);
				iLocal_28 = 3;
			}
			break;
		case 3:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_22, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				if (iLocal_17 == 1231068245)
				{
					iLocal_21 = 780205091;
				}
				aggregate_func_4293(&uLocal_49, 1);
				iLocal_28 = 4;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 595016159) && !bLocal_39)
			{
				func_48();
			}
			if (func_47())
			{
				if (!bLocal_39)
				{
					func_48();
				}
				if (iLocal_17 == 817658057)
				{
					iLocal_28 = 6;
					iLocal_53 = PED::_0x4D0D2E3D8BC000EB(iLocal_31, "p_bottleBeer01x_PH_R_HAND", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
					{
					}
				}
				else
				{
					iLocal_28 = 5;
					iLocal_54 = PED::_0x4D0D2E3D8BC000EB(iLocal_31, "p_shotGlass01x_PH_L_HAND", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_54))
					{
					}
				}
				if (iLocal_17 == 817658057)
				{
					PED::_0xD65FDC686A031C83(iLocal_31, iLocal_23, 3f);
				}
				else
				{
					PED::_0xD65FDC686A031C83(iLocal_31, iLocal_21, 3f);
				}
				PED::_0x6D07B371E9439019(iLocal_31);
				bLocal_38 = true;
				bLocal_40 = true;
				aggregate_func_4293(&uLocal_49, 1);
			}
			break;
		case 5:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_23, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				aggregate_func_4293(&uLocal_49, 1);
				iLocal_28 = 7;
			}
			break;
		case 7:
			if (func_49())
			{
				func_15();
				aggregate_func_4313(&uLocal_49);
				iLocal_29 = 5;
				iLocal_28 = 0;
				bLocal_33 = true;
			}
			break;
		case 6:
			if (func_49())
			{
				func_15();
				aggregate_func_4313(&uLocal_49);
				iLocal_29 = 5;
				iLocal_28 = 0;
				bLocal_33 = true;
			}
			break;
	}
}

void func_29(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	if (Global_1938932->f_51)
	{
		return;
	}
	switch (iLocal_28)
	{
		case 0:
			if (bParam0)
			{
				bVar0 = PED::_0x9C54041BB66BCF9E(iLocal_30, uLocal_16);
			}
			else
			{
				bVar0 = false;
			}
			if ((bParam1 && !aggregate_func_2884(iLocal_41)) || func_26())
			{
				iLocal_29 = 2;
				return;
			}
			if (!bLocal_36 && TASK::_0x0C3CB2E600C8977D(iLocal_30, 0))
			{
				bLocal_36 = true;
			}
			if ((bParam0 && bVar0) && !bLocal_33)
			{
				iLocal_29 = 0;
				iLocal_28 = 0;
				return;
			}
			if (!bVar0 && !TASK::_0x0C3CB2E600C8977D(iLocal_30, 0))
			{
				if (iLocal_17 == 817658057)
				{
					if (!TASK::_0xEA31F199A73801D3(uLocal_16))
					{
						iLocal_29 = 6;
						return;
					}
				}
				else if (!bLocal_33)
				{
					iLocal_29 = 6;
					return;
				}
				bLocal_35 = true;
				if (!Global_1938932->f_51)
				{
					PED::_0xA3A9299C4F2ADB98(iLocal_31);
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_31, iLocal_42, 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					iLocal_28 = 1;
				}
			}
			break;
		case 1:
			if ((bParam1 && !aggregate_func_2884(iLocal_41)) || func_26())
			{
				iLocal_29 = 2;
				iLocal_28 = 0;
				return;
			}
			if (!PED::_0x9C54041BB66BCF9E(iLocal_31, iLocal_42))
			{
				return;
			}
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_31, 0) && !PED::_0x68821369A2CEADD5(iLocal_31, iLocal_24))
			{
				func_45();
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_24, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
			}
			if (PED::_0xC488B8C0E52560D8(iLocal_31))
			{
				aggregate_func_4293(&uLocal_49, 1);
				iLocal_28 = 2;
			}
			break;
		case 2:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_25, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				iLocal_28 = 3;
				aggregate_func_4293(&uLocal_49, 1);
			}
			break;
		case 3:
			if (func_47())
			{
				PED::_0xD65FDC686A031C83(iLocal_31, iLocal_26, 3f);
				PED::_0x6D07B371E9439019(iLocal_31);
				iLocal_28 = 7;
				aggregate_func_4293(&uLocal_49, 1);
			}
			break;
		case 7:
			if (func_49())
			{
				func_15();
				iLocal_29 = 6;
			}
			break;
	}
}

int func_36(int iParam0)
{
	int iVar0;

	switch (aggregate_func_4314())
	{
		case 81:
			if (iParam0 == 0)
			{
				return VOLUME::_CREATE_VOLUME_BOX(-309.497f, 809.019f, 119.378f, 0f, 0f, 99.715f, 20.984f, 11.374f, 8.647388f);
			}
			else
			{
				return VOLUME::_CREATE_VOLUME_BOX(-241.294f, 770f, 118.14f, 0f, 0f, 110.709f, 8.286f, 7.345f, 5f);
			}
			break;
		case 98:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSaloonInterior");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2946.662f, 523.323f, 46.02f, 0f, 0f, 180f, 9.627f, 13.43f, 3.143f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2939.132f, 523.346f, 46.02f, 0f, 0f, 180f, 5.235f, 9.883f, 3.143f);
			return iVar0;
		case 127:
			return VOLUME::_CREATE_VOLUME_BOX(-3701.056f, -2595.456f, -14.37373f, 0f, 0f, 0f, 21.94766f, 22.09092f, 14.36038f);
		case 121:
			return VOLUME::_CREATE_VOLUME_BOX(-5514.454f, -2910.941f, 0.196263f, 0f, 0f, 28.00368f, 12.9595f, 18.61485f, 9.427321f);
		case 40:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Blackwater - m_volSaloonInterior");
			VOLUME::_0x39816F6F94F385AD(iVar0, -818.523f, -1319.681f, 46.59f, 0f, 0f, 90f, 15.6f, 16f, 8f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -809.672f, -1319.568f, 48.818f, 0f, 0f, 90f, 15.5f, 2f, 4f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -809.672f, -1324.85f, 44.569f, 0f, 0f, 90f, 5.2f, 2f, 3.8f);
			return iVar0;
		case 5:
			if (iParam0 == 2)
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSaloonFancyInterior");
				VOLUME::_0x39816F6F94F385AD(iVar0, 2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
				VOLUME::_0x39816F6F94F385AD(iVar0, 2628.751f, -1228.086f, 54.83224f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
				VOLUME::_0x39816F6F94F385AD(iVar0, 2635.506f, -1227.165f, 54.83224f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
				return iVar0;
			}
			else
			{
				return VOLUME::_CREATE_VOLUME_BOX(2796.705f, -1167.971f, 48.56161f, 0f, 0f, -120.25f, 13.49097f, 10.18626f, 3.324371f);
			}
			break;
		case 111:
			return VOLUME::_CREATE_VOLUME_BOX(1345.534f, -1375.4f, 81.161f, 0f, 0f, 80.2f, 11.601f, 14.755f, 3.376f);
	}
	return VOLUME::_CREATE_VOLUME_BOX(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
}

void func_45()
{
	int iVar0;

	if (Global_1938932->f_51)
	{
		return;
	}
	Global_1938932->f_50 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar0 = aggregate_func_4452(iLocal_41);
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		_NAMESPACE48::_0x406808610220405B(aggregate_func_4452(iLocal_41));
	}
}

bool func_47()
{
	if (((!Global_1938932->f_51 && aggregate_func_1526(&uLocal_49) > 1250) && !TASK::_0x916B8E075ABC8B4E(iLocal_31, 1)) && (!PED::_0xC488B8C0E52560D8(iLocal_31) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 1004907005)))
	{
		return true;
	}
	return false;
}

void func_48()
{
	if (!bLocal_39)
	{
		if (iLocal_17 == 817658057)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53))
			{
				iLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_bottlebeer01x"), TASK::_0xA8452DD321607029(iLocal_42, 1), true, true, false, false, true);
				PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_53, "p_bottleBeer01x_PH_R_HAND", "WORLD_HUMAN_BARTENDER_BEER", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
				bLocal_39 = true;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_53) && !ENTITY::DOES_ENTITY_EXIST(iLocal_54))
		{
			iLocal_53 = OBJECT::CREATE_OBJECT(joaat("p_bottlejd01x"), TASK::_0xA8452DD321607029(iLocal_42, 1), true, true, false, false, true);
			iLocal_54 = OBJECT::CREATE_OBJECT(joaat("p_shotglass01x"), TASK::_0xA8452DD321607029(iLocal_42, 1), true, true, false, false, true);
			PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_53, "p_bottleJD01x_ph_r_hand", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
			PED::_0x3BBDD6143FF16F98(iLocal_31, iLocal_54, "p_shotGlass01x_PH_L_HAND", "WORLD_HUMAN_BARTENDER_WHISKEY", "WORLD_HUMAN_BARTENDER_BARFRONT_MALE_A", 1);
			bLocal_39 = true;
		}
	}
}

bool func_49()
{
	if ((!PED::_0xC488B8C0E52560D8(iLocal_31) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_31, 1004907005)) && aggregate_func_1526(&uLocal_49) > 1250)
	{
		return true;
	}
	return false;
}

