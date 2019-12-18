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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	struct<4> Var0;
	struct<4> Var4;

	fLocal_16 = 1f;
	fLocal_17 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	Var4.f_19 = -1;
	Var4.f_33 = -1;
	Var4.f_34 = -1;
	Var4.f_35 = -1;
	Var4.f_36 = -1;
	Var4.f_37 = 1;
	if (aggregate_func_4251() != -1)
	{
		aggregate_func_4444(&Var4);
	}
	else
	{
		func_3(&Var4);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_4(&Var4);
	}
	if (aggregate_func_4251() == -1)
	{
		while (true)
		{
			while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
			{
				if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var0))
				{
					func_5(&Var0, &Var4);
					switch (Var0.f_2)
					{
						case joaat("zone"):
							Var4.f_4 = { Var0 };
							Var4 = { Var0 };
							switch (Var0)
							{
								case -1740156697:
									func_6(&Var4);
									break;
								case -632467210:
									Var4.f_33 = -1;
									Var4.f_34 = -1;
									aggregate_func_4444(&Var4);
									break;
							}
							Var4.f_37 = 1;
							break;
						case 651783971: /* GXTEntry: "Blip" */
							Var4 = { Var0 };
							switch (Var0)
							{
								case -1740156697:
									func_8(&Var4);
									break;
								case -632467210:
									func_9(&Var4);
									Var4 = { Var4.f_4 };
									func_6(&Var4);
									break;
								case -1203660660:
									func_10(&Var4);
									break;
							}
							break;
					}
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
				}
			}
			func_11(&Var4);
			func_12(&Var4);
			BUILTIN::WAIT(0);
		}
	}
	else
	{
		while (!aggregate_func_523(1, 1))
		{
			func_14(iScriptParam_0, &Var4);
			func_11(&Var4);
			func_15(&Var4);
			BUILTIN::WAIT(0);
		}
	}
	func_4(&Var4);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0)
{
	struct<39> Var0;

	Var0.f_19 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = 1;
	*uParam0 = { Var0 };
	uParam0->f_20 = -1;
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH("", "MapFocus");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "Region", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_8, "ItemHovered", false);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "HoveredName", "");
	HUD::_TEXT_DATABASE_REQUEST("FMMC");
	if (TXD::_0xBA0163B277C2D2D0(-1859668514))
	{
		TXD::_0xDB1BD07FB464584D(-1859668514, 0);
	}
	uParam0->f_37 = 1;
}

void func_4(var uParam0)
{
	if (aggregate_func_4251() == -1)
	{
		func_16(uParam0);
	}
	else
	{
		func_17(uParam0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_5(int iParam0, var uParam1)
{
	switch (iParam0->f_2)
	{
		case -590699808:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_33 = aggregate_func_5624(func_18(iParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
		case -2006263512:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_35 = func_18(iParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
		case -1666016325:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_36 = func_18(iParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
		case 1138540229:
			switch (*iParam0)
			{
				case -1740156697:
					uParam1->f_34 = func_20(func_18(iParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
	}
}

int func_6(var uParam0)
{
	uParam0->f_19 = uParam0->f_1;
	switch (func_21(uParam0))
	{
		case 2:
			uParam0->f_22 = func_22(uParam0->f_19);
			break;
		case 0:
			uParam0->f_22 = aggregate_func_4328(uParam0->f_20, 0);
			break;
		case 1:
			uParam0->f_22 = aggregate_func_8847(uParam0->f_21);
			break;
		default:
			func_25(uParam0);
			return 0;
	}
	func_25(uParam0);
	return 1;
}

int func_8(var uParam0)
{
	uParam0->f_25 = uParam0->f_1;
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	switch (uParam0->f_23)
	{
		case 70:
			if (func_27(uParam0->f_25, &(uParam0->f_29)))
			{
				uParam0->f_26 = MISSIONDATA::_0x57E798B57C45EE16(MISC::GET_HASH_KEY(&(((*Global_1835011)[uParam0->f_29 /*72*/])->f_9)));
			}
			else
			{
				uParam0->f_26 = -1640799778;
			}
			break;
		case 69:
			switch (func_21(uParam0))
			{
				case 0:
					uParam0->f_22 = aggregate_func_4328(uParam0->f_20, 0);
					uParam0->f_26 = func_28(uParam0->f_19);
					if (!TXD::_0xBA0163B277C2D2D0(uParam0->f_26))
					{
						uParam0->f_26 = func_29();
					}
					break;
			}
			break;
		case 51:
		case 90:
			uParam0->f_28 = 0;
			return 0;
		default:
			uParam0->f_26 = func_30(uParam0->f_23, uParam0->f_25);
			break;
	}
	if (TXD::_0xBA0163B277C2D2D0(uParam0->f_26))
	{
		TXD::_0xDB1BD07FB464584D(uParam0->f_26, 1);
		uParam0->f_28 = 1;
		return 1;
	}
	return 0;
}

void func_9(var uParam0)
{
	struct<2> Var0;

	func_31(uParam0);
	uParam0->f_23 = { Var0 };
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = -1;
	func_32(uParam0);
}

int func_10(var uParam0)
{
	if (uParam0->f_25 != uParam0->f_1)
	{
		return 0;
	}
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	if (TXD::_0xBA0163B277C2D2D0(uParam0->f_26))
	{
		if (!uParam0->f_28)
		{
			uParam0->f_38 = 0;
			UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("map"), -556114113);
			return 1;
		}
	}
	return 0;
}

void func_11(var uParam0)
{
	if (uParam0->f_37)
	{
		func_33(uParam0);
		uParam0->f_37 = 0;
	}
}

void func_12(var uParam0)
{
	if (func_34(uParam0))
	{
		switch (uParam0->f_23)
		{
			case 70:
				func_35(uParam0->f_25, uParam0);
				break;
			case 69:
				func_36(uParam0->f_19, uParam0);
				break;
			case 91:
				func_37(uParam0->f_25, uParam0);
				break;
			case 92:
				func_38(uParam0->f_25, uParam0);
				break;
			case 93:
				func_39(uParam0->f_25, uParam0);
				break;
			case 94:
				func_40(uParam0->f_23, uParam0);
				break;
			default:
				func_40(uParam0->f_23, uParam0);
				break;
		}
	}
}

void func_14(int iParam0, var uParam1)
{
	struct<4> Var0;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iParam0))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iParam0, &Var0))
		{
			func_5(&Var0, uParam1);
			switch (Var0.f_2)
			{
				case joaat("zone"):
					uParam1->f_4 = { Var0 };
					*uParam1 = { Var0 };
					switch (Var0)
					{
						case -1740156697:
							func_41(uParam1);
							break;
						case -632467210:
							aggregate_func_4444(uParam1);
							break;
					}
					break;
				case 651783971: /* GXTEntry: "Blip" */
					*uParam1 = { Var0 };
					switch (Var0)
					{
						case -1740156697:
							func_43(uParam1);
							break;
						case -632467210:
							aggregate_func_6630(uParam1);
							*uParam1 = { uParam1->f_4 };
							func_41(uParam1);
							break;
						case -1203660660:
							aggregate_func_4271(uParam1);
							break;
					}
					break;
				case joaat("card"):
					if (Var0 == -1203660660)
					{
						if (func_46(uParam1))
						{
							UIAPPS::_CLOSE_APP_BY_HASH(29649618);
						}
					}
					break;
			}
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(iParam0);
		}
	}
}

void func_15(var uParam0)
{
	var uVar0;

	if (func_34(uParam0))
	{
		if (!func_49(aggregate_func_4271(uParam0->f_23), func_48(uParam0->f_25), &uVar0))
		{
			return;
		}
		switch (uParam0->f_23)
		{
			case 90:
				func_50(uParam0->f_25, uParam0);
				break;
			case 70:
				func_51(uParam0, &uVar0);
				break;
			case 69:
				func_52(uParam0, &uVar0);
				break;
			case 95:
			case 96:
				func_53(uParam0, &uVar0);
				break;
			default:
				func_54(uParam0, &uVar0);
				break;
		}
	}
	func_55(uParam0);
	func_56(uParam0);
}

void func_16(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
}

void func_17(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
}

int func_18(int iParam0)
{
	if (iParam0->f_1 != 0)
	{
		return iParam0->f_1;
	}
	return -1;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 7359335:
			return 83;
		case joaat("ARMADILLO"):
			return 127;
		case -1708386982:
			return 39;
		case 1053078005:
			return 40;
		case 1778899666:
			return 99;
		case -1947415645:
			return 87;
		case 1862420670:
			return 101;
		case -1851305682:
			return 70;
		case -473051294:
			return 74;
		case 406627834:
			return 3;
		case 1463094051:
			return 116;
		case 2046780049:
			return 111;
		case -765540529:
			return 5;
		case 2147354003:
			return 33;
		case 427683330:
			return 26;
		case -1524959147:
			return 121;
		case 459833523:
			return 81;
		case 2126321341:
			return 98;
		case joaat("wallace"):
			return 37;
		case 1663398575:
			return 60;
		case -1207133769:
		case 201158410:
		case 1654810713:
			return 62;
		case 1299204683:
			return 66;
	}
	return -1;
}

int func_21(var uParam0)
{
	if (uParam0->f_19 == -1)
	{
		return -1;
	}
	uParam0->f_22 = func_22(uParam0->f_19);
	if (uParam0->f_22 != 0)
	{
		return 2;
	}
	uParam0->f_20 = func_20(uParam0->f_19);
	if (aggregate_func_4301(uParam0->f_20))
	{
		return 0;
	}
	uParam0->f_21 = aggregate_func_5624(uParam0->f_19);
	if (aggregate_func_4326(uParam0->f_21))
	{
		return 1;
	}
	return -1;
}

int func_22(int iParam0)
{
	switch (iParam0)
	{
		case -221059932: /* GXTEntry: "Ambarino" */
			return -594748684;
		case 10837344: /* GXTEntry: "Lemoyne" */
			return 1072597802;
		case 2045157995:
			return 1259085938;
		case -1289136221:
			return 1762760291;
		case 1246494439:
			return 1715468631;
		case -1973391500:
			return -960313506;
		case -1247148211:
			return -1581676015;
		case 1935063277: /* GXTEntry: "Guarma" */
			return -1431514117;
		default:
			break;
	}
	return 0;
}

void func_25(var uParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = false;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = func_20(uParam0->f_19);
	iVar4 = uParam0->f_33;
	if (!aggregate_func_4326(iVar4))
	{
		iVar4 = aggregate_func_5624(uParam0->f_19);
	}
	if (!aggregate_func_4326(iVar4))
	{
		iVar5 = aggregate_func_4665(aggregate_func_4662(iVar3, 1, 1));
	}
	else
	{
		iVar5 = aggregate_func_4336(iVar4);
	}
	if ((aggregate_func_4672(iVar4) || aggregate_func_4672(iVar5)) || aggregate_func_4671(iVar3))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
		}
		bVar0 = true;
	}
	else if (aggregate_func_4324(iVar5))
	{
		iVar1 = aggregate_func_4271(iVar5);
		if (iVar1 > 0)
		{
			bVar0 = true;
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, sVar2);
}

bool func_26(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;

	uVar2 = MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &uVar1);
	*uParam1 = uVar0;
	uParam1->f_1 = uVar1;
	return uVar2;
}

bool func_27(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < &Global_1900789)
	{
		if (!aggregate_func_4255(*((*Global_1900789)[iVar0 /*2*/])))
		{
		}
		else if (Global_1900789[iVar0 /*2*/] == 2)
		{
			*uParam1 = aggregate_func_4306(*((*Global_1900789)[iVar0 /*2*/]));
			if ((aggregate_func_6553(*uParam1) && MAP::DOES_BLIP_EXIST(((*Global_1835011)[*uParam1 /*72*/])->f_28)) && ((*Global_1835011)[*uParam1 /*72*/])->f_28 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 406627834:
			return 412187666;
		case -765540529:
			return -48955357;
		case 427683330:
			return -1366448499;
		case 1053078005:
			return -2142170718;
		case -473051294:
			return -652262915;
		case 459833523:
			return 1109427018;
		case 7359335:
			return -1353234788;
		case 2126321341:
			return -1965958161;
		case 2046780049:
			return -1059106609;
		case joaat("ARMADILLO"):
			return -1119990720;
		case -1524959147:
			return 539298361;
		default:
			break;
	}
	return -1;
}

int func_29()
{
	return 1109427018;
}

int func_30(int iParam0, int iParam1)
{
	var uVar0;
	struct<16> Var1;
	int iVar17;
	var uVar18;
	int iVar19;

	iVar17 = -1;
	switch (iParam0)
	{
		case 13:
			return -834434971;
		case 14:
			return -1014339941;
		case 15:
			return -1131397804;
		case 17:
			return -1211307166;
		case 18:
			return 909802596;
		case 19:
			return -1932898631;
		case 54:
			return -1212983574;
		case 55:
			return -1805795741;
		case 56:
			return -1949319444;
		case 60:
			return -40867973;
		case 61:
			return -700024937;
		case 62:
			return -422762807;
		case 63:
			return 1307627757;
		case 64:
			return -1341878153;
		case 65:
			return 1334885374;
		case 66:
			return 1718870684;
		case 90:
			return -1640799778;
		case 91:
			return -1640799778;
		case 92:
			return -1640799778;
		case 93:
			return -1640799778;
		case 94:
			return -1640799778;
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 52:
		case 58:
		case 67:
		case 68:
			Var1 = { func_70(iParam1, iParam0, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 16:
			iVar17 = MISC::GET_HASH_KEY("MAP_CARD_BLK_BOUNTY");
			break;
		case 57:
			Var1 = { func_71() };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 53:
		case 59:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			Var1 = { func_72(iParam0, iParam1, &uVar0) };
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 1:
		case 2:
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
			StringCopy(&Var1, func_73(iParam0), 128);
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
			MAP::SET_BLIP_FLASHES(iParam1, &uVar18, &iVar19);
			StringCopy(&Var1, func_74(iVar19), 128);
			iVar17 = MISC::GET_HASH_KEY(&Var1);
			break;
	}
	if (iVar17 != -1)
	{
		return iVar17;
	}
	return -1;
}

void func_31(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_8);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_9);
}

void func_32(var uParam0)
{
	if (!UIAPPS::_REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("map"), 1136348382))
	{
		uParam0->f_38 = 1;
	}
	else
	{
		uParam0->f_38 = 0;
	}
}

void func_33(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	sVar0 = func_75(uParam0->f_35, uParam0->f_36);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		if (uParam0->f_34 != -1)
		{
			iVar1 = func_76(uParam0->f_34);
		}
		if (uParam0->f_33 != -1)
		{
			iVar2 = aggregate_func_9675(uParam0->f_33);
			iVar3 = aggregate_func_9676(uParam0->f_33);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar2))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar1, iVar2);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar3))
		{
			sVar0 = MISC::_CREATE_VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar2, iVar3);
		}
		else
		{
			sVar0 = "";
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_10, sVar0);
}

bool func_34(var uParam0)
{
	if (uParam0->f_38)
	{
		func_32(uParam0);
	}
	if (!uParam0->f_28)
	{
		return false;
	}
	switch (uParam0->f_23)
	{
		case 0:
		case 51:
		case 90:
			uParam0->f_28 = 0;
			return false;
		default:
			break;
	}
	if ((TXD::_0xBA0163B277C2D2D0(uParam0->f_26) && TXD::_0xBE72591D1509FFE4(uParam0->f_26)) && (uParam0->f_27 == 0 || ((uParam0->f_27 != 0 && TXD::_0xBA0163B277C2D2D0(uParam0->f_27)) && TXD::_0xBE72591D1509FFE4(uParam0->f_27))))
	{
		uParam0->f_28 = 0;
		return true;
	}
	return false;
}

void func_35(int iParam0, var uParam1)
{
	char cVar0[16];
	bool bVar2;

	if (!aggregate_func_6553(uParam1->f_29))
	{
		if (!func_27(iParam0, &(uParam1->f_29)))
		{
			return;
		}
	}
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", ((*Global_1835011)[uParam1->f_29 /*72*/])->f_27);
	MemCopy(&cVar0, {((*Global_1835011)[uParam1->f_29 /*72*/])->f_9}, 2);
	StringConCat(&cVar0, "_DESC_PM", 16);
	if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		StringCopy(&cVar0, "", 16);
	}
	bVar2 = MISC::GET_HASH_KEY(&(((*Global_1835011)[uParam1->f_29 /*72*/])->f_9));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", bVar2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::_0x57E798B57C45EE16(bVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::_0x57E798B56C45EE15(bVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_36(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "Zone");
	uParam1->f_26 = func_28(iParam0);
	iVar0 = aggregate_func_4441(uParam1->f_20);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_80(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(aggregate_func_9675(iVar0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", func_81(iParam0));
	if (TXD::_0xBA0163B277C2D2D0(uParam1->f_26))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_28(iParam0));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", func_28(iParam0));
	}
	else
	{
		uParam1->f_26 = func_29();
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", uParam1->f_26);
	}
	iVar1 = aggregate_func_4336(iVar0);
	if (aggregate_func_4324(iVar1))
	{
		bVar2 = aggregate_func_4271(iVar1);
		if (bVar2 > 0)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", bVar2);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_NO_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", false);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_town", uParam1->f_9);
}

void func_37(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(aggregate_func_8848(iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_38(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", &(Global_1070355->f_22101.f_366[iVar1 /*272*/]));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_39(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_83(iVar1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_40(int iParam0, var uParam1)
{
	int iVar0;
	struct<16> Var1;
	char cVar17[128];
	char cVar33[128];

	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	StringCopy(&cVar17, func_84(iParam0), 128);
	switch (func_85(iParam0))
	{
		case 1:
			Var1 = { func_70(uParam1->f_25, iParam0, &iVar0) };
			if (iParam0 == 16)
			{
				StringCopy(&Var1, "MAP_CARD_BOUNTY", 128);
			}
			StringCopy(&cVar33, func_76(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(&cVar17));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 2:
			StringCopy(&Var1, func_73(iParam0), 128);
			iVar0 = aggregate_func_3339(MAP::GET_BLIP_COORDS(uParam1->f_25), 1);
			StringCopy(&cVar33, func_76(iVar0), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 5:
			Var1 = { func_87(iVar0) };
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", false);
			break;
		default:
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&Var1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", false);
			break;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(iParam0, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_value", false);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

int func_41(var uParam0)
{
	struct<4> Var0;

	uParam0->f_19 = uParam0->f_1;
	if (func_49(uParam0->f_2, uParam0->f_1, &Var0))
	{
		uParam0->f_22 = Var0.f_3;
		func_88(uParam0);
		return 1;
	}
	func_88(uParam0);
	return 0;
}

int func_43(var uParam0)
{
	struct<15> Var0;

	uParam0->f_25 = uParam0->f_1;
	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}
	if (!func_49(aggregate_func_4271(uParam0->f_23), func_48(uParam0->f_25), &Var0))
	{
	}
	switch (uParam0->f_23)
	{
		case 70:
			uParam0->f_29 = func_89(uParam0->f_25);
			uParam0->f_26 = Var0.f_12;
			break;
		case 51:
		case 90:
			uParam0->f_28 = 0;
			uParam0->f_26 = 0;
			return 0;
		case 93:
			uParam0->f_26 = Var0.f_12;
			uParam0->f_27 = Var0.f_14;
			break;
		default:
			uParam0->f_26 = Var0.f_12;
			break;
	}
	if (!TXD::_0xBA0163B277C2D2D0(uParam0->f_26))
	{
		uParam0->f_26 = 1078908615; /* GXTEntry: "A daily meal of soup is prepared in the camp made with the best parts of the late" +
    "st hunted game. The soups help to revitalize the gang members and can provide a " +
    "variety of health benefits." */
	}
	if (TXD::_0xBA0163B277C2D2D0(uParam0->f_26))
	{
		TXD::_0xDB1BD07FB464584D(uParam0->f_26, 1);
		uParam0->f_28 = 1;
		if (uParam0->f_27 != 0 && TXD::_0xBA0163B277C2D2D0(uParam0->f_27))
		{
			TXD::_0xDB1BD07FB464584D(uParam0->f_27, 1);
		}
		return 1;
	}
	return 0;
}

bool func_46(var uParam0)
{
	struct<2> Var0;

	if (!func_49(aggregate_func_4271(uParam0->f_23), func_48(uParam0->f_25), &Var0))
	{
	}
	if (uParam0->f_23 == 91)
	{
		aggregate_func_8181(aggregate_func_7730(Var0.f_1), 6);
		return true;
	}
	return false;
}

int func_48(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return 0;
	}
	MAP::SET_BLIP_FLASHES(iParam0, &iVar0, &uVar1);
	switch (func_93(iVar0))
	{
		case 249251635:
			return uVar1;
		case -1258576797: /* GXTEntry: "Town" */
			return uVar1;
		case 1528833484:
			return uVar1;
		case 2133809007:
			return uVar1;
		case 1753392288:
			return uVar1;
		case -1397234361:
			return uVar1;
		case -1174166673:
			return uVar1;
		case 1355002354:
			return uVar1;
		case -891753673:
			return uVar1;
		default:
			break;
	}
	return uVar1;
}

bool func_49(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	Var0 = Global_1070355->f_26933;
	Var0.f_2 = -1629667380;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		*uParam2 = iParam0;
		uParam2->f_1 = iParam1;
		Var0.f_2 = -178053467;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_3), &Var0);
		Var0.f_2 = 2068408867;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_2), &Var0);
		Var0.f_2 = -2015838779;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_4), &Var0);
		Var0.f_2 = -837877152;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_5), &Var0);
		Var0.f_2 = -1422707781;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_6), &Var0);
		Var0.f_2 = -875438543;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_7), &Var0);
		Var0.f_2 = 680824008;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_8), &Var0);
		Var0.f_2 = -1832584664;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_9), &Var0);
		Var0.f_2 = 1926839997;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_10), &Var0);
		Var0.f_2 = -839757535;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_11), &Var0);
		Var0.f_2 = 378321223;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_12), &Var0);
		Var0.f_2 = -865732538;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_13), &Var0);
		Var0.f_2 = -1361232962;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_14), &Var0);
		Var0.f_2 = 680460752;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_15), &Var0);
		Var0.f_2 = 1929921658;
		DATAFILE::_DATAFILE_GET_HASH(&(uParam2->f_16), &Var0);
		Var0.f_2 = 1969633495;
		DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_17), &Var0);
		Var0.f_2 = -1607031478;
		DATAFILE::_DATAFILE_GET_STRING(&(uParam2->f_25), &Var0);
		return true;
	}
	return false;
}

void func_50(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	struct<7> Var2;
	var uVar9;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	Var2 = { aggregate_func_2843(PLAYER::INT_TO_PLAYERINDEX(iVar1)) };
	uParam1->f_15 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar1)), joaat("COLOR_PURE_WHITE")));
	uParam1->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	uParam1->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", false);
	func_96(&uVar9, Var2, 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISC::GET_HASH_KEY(&uVar9));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", -486609646);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", aggregate_func_2326(iVar1));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
}

void func_51(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "description", HUD::_GET_LABEL_TEXT_BY_HASH(-54516066 /* GXTEntry: "...downloading..." */));
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "description_title", "");
	func_98(uParam0, uParam1->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_52(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", uParam1->f_8);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_53(var uParam0, var uParam1)
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	if (uParam0->f_23 == 95 || uParam0->f_23 == 96)
	{
		uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", uParam1->f_8);
		uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
}

void func_54(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP");
	switch (uParam0->f_23)
	{
		case 93:
			iVar4 = aggregate_func_7407(uParam1->f_1);
			if (!aggregate_func_6926(iVar4))
			{
			}
			else
			{
				iVar6 = func_101(iVar4);
				if (iVar6 == joaat("none"))
				{
				}
				else
				{
					if (aggregate_func_7397(iVar4) != -323664079)
					{
						if (aggregate_func_7094(iVar4) == -1211851008)
						{
							if (!aggregate_func_7731(aggregate_func_7094(iVar4)))
							{
								iVar6 = joaat("secondary");
							}
						}
						iVar5 = PLAYER::_0x8E84119A23C16623(aggregate_func_8182(iVar4, iVar6), 0, 0);
						if (iVar5 == 0)
						{
						}
						else
						{
							bVar0 = PLAYER::_0xDA9D7BE231FE865F(aggregate_func_8182(iVar4, iVar6), 0, 0);
							if (PLAYER::_0x354F689C4FFAAB37(iVar5))
							{
								switch (iVar6)
								{
									case joaat("primary"):
										bVar3 = uParam1->f_8;
										bVar1 = uParam1->f_12;
										bVar2 = uParam1->f_13;
										break;
									case joaat("secondary"):
										if (aggregate_func_7094(iVar4) == -1211851008)
										{
											bVar3 = uParam1->f_8;
											bVar1 = uParam1->f_12;
											bVar2 = uParam1->f_13;
										}
										else
										{
											bVar3 = uParam1->f_9;
											bVar1 = uParam1->f_14;
											bVar2 = uParam1->f_15;
											uParam1->f_12 = uParam1->f_14;
											uParam1->f_13 = uParam1->f_15;
										}
										break;
									default:
										break;
								}
							}
							else
							{
								switch (func_106(iVar4, iVar6))
								{
									case joaat("female"):
										bVar3 = -648664377; /* GXTEntry: "A stranger has some business for you." */
										break;
									case joaat("male"):
										bVar3 = 1463582430; /* GXTEntry: "A stranger has some business for you." */
										break;
									default:
										break;
								}
								bVar1 = -1859668514;
								bVar2 = -712210889;
							}
							Jump @401; //curOff = 367
							bVar0 = aggregate_func_8182(iVar4, -1100859510);
							bVar3 = uParam1->f_8;
							bVar1 = uParam1->f_12;
							bVar2 = uParam1->f_13;
							Jump @431; //curOff = 401
							bVar0 = uParam1->f_4;
							bVar1 = uParam1->f_12;
							bVar2 = uParam1->f_13;
							bVar3 = uParam1->f_8;
						}
						uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", bVar0);
						uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", bVar3);
						uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
						DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", bVar1);
						DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", bVar2);
						DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
						DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
						if (uParam0->f_23 == 91)
						{
							iVar7 = aggregate_func_7730(uParam1->f_1);
							aggregate_func_8849(iVar7);
							uParam0->f_18 = 0;
							uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_9, "startable", true);
							uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "startPrompt", -578259052);
							func_55(uParam0);
						}
						DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
					}
				}
			}
			default:
				break;
	}
}

void func_55(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam0->f_23 == 91 && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_16))
	{
		bVar0 = ((Global_1572887->f_106.f_75 > 1 && Global_1572887->f_106.f_75 <= 14) && !aggregate_func_4478());
		bVar1 = (_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15) && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()));
		bVar2 = (bVar0 || bVar1);
		if (uParam0->f_18 != bVar2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, !bVar2);
			if (bVar0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, 1595859403);
			}
			else if (bVar1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, 740703372);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, -578259052);
			}
			uParam0->f_18 = bVar2;
		}
	}
}

void func_56(var uParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	if (uParam0->f_30)
	{
		uParam0->f_30 = 0;
		uParam0->f_30.f_1 = 1;
	}
	if (uParam0->f_30.f_1)
	{
		sVar1 = aggregate_func_723((Global_265331->f_4[uParam0->f_30.f_2 /*51*/])->f_22, &iVar0);
		if (iVar0 != 1)
		{
			uParam0->f_30.f_1 = 0;
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_13, sVar1);
			sVar2 = MISC::_CREATE_VAR_STRING(10, "LITERAL_STRING", &((Global_265331->f_4[uParam0->f_30.f_2 /*51*/])->f_7));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_14, sVar2);
		}
	}
}

struct<16> func_70(int iParam0, int iParam1, int iParam2)
{
	struct<16> Var0;
	vector3 vVar16;
	char cVar19[128];

	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return Var0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam0) };
	*iParam2 = aggregate_func_3339(vVar16, 1);
	while (vVar16.z < 200f && !aggregate_func_4301(*iParam2))
	{
		vVar16.f_2 = (vVar16.z + 25f);
		*iParam2 = aggregate_func_3339(vVar16, 1);
	}
	if (!aggregate_func_4301(*iParam2))
	{
		return Var0;
	}
	StringCopy(&Var0, "MAP_CARD_", 128);
	cVar19 = aggregate_func_9674(*iParam2);
	StringConCat(&Var0, &cVar19, 128);
	StringConCat(&Var0, "_", 128);
	StringConCat(&Var0, func_124(iParam1, *iParam2, vVar16), 128);
	return Var0;
}

struct<16> func_71()
{
	char cVar0[128];

	StringCopy(&cVar0, "MAP_CARD_NBX_STAGECOACH", 128);
	return cVar0;
}

struct<16> func_72(int iParam0, int iParam1, var uParam2)
{
	struct<16> Var0;
	vector3 vVar16;

	if (!MAP::DOES_BLIP_EXIST(iParam1))
	{
		return Var0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam1) };
	if (vVar16.z == 0f)
	{
		aggregate_func_832(&vVar16, 50, 10, 0, 0);
	}
	if (vVar16.z == 0f)
	{
		vVar16.f_2 = Global_36.f_2;
	}
	*uParam2 = aggregate_func_3339(vVar16, 1);
	if (!aggregate_func_4301(*uParam2))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 59:
			StringCopy(&Var0, "MAP_CARD_CAMP_", 128);
			StringConCat(&Var0, func_126(*uParam2), 128);
			break;
		case 53:
			StringCopy(&Var0, "MAP_CARD_CAMP_BEECHERSHOPE", 128);
			break;
		case 73:
			StringCopy(&Var0, "MAP_CARD_CAMP_FOOD", 128);
			break;
		case 74:
			StringCopy(&Var0, "MAP_CARD_CAMP_TITHING_BOX", 128);
			break;
		case 75:
			StringCopy(&Var0, "MAP_CARD_CAMP_BUTCHER", 128);
			break;
		case 76:
			StringCopy(&Var0, "MAP_CARD_CAMP_HORSE_HITCH", 128);
			break;
		case 77:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_AMMO", 128);
			break;
		case 78:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_MEDICINE", 128);
			break;
		case 79:
			StringCopy(&Var0, "MAP_CARD_CAMP_SUPPLY_PROVISIONS", 128);
			break;
		case 80:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_POKER", 128);
			break;
		case 81:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER", 128);
			break;
		case 82:
			StringCopy(&Var0, "MAP_CARD_CAMP_MINIGAME_DOMINOES", 128);
			break;
	}
	return Var0;
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MAP_CARD_MINIGAMES_BLACKJACK";
		case 7:
			return "MAP_CARD_MINIGAMES_FENCE_BUILDING";
		case 3:
			return "MAP_CARD_MINIGAMES_POKER";
		case 5:
			return "MAP_CARD_MINIGAMES_COW_MILKING";
		case 6:
			return "MAP_CARD_MINIGAMES_CLEANING_STALLS";
		case 2:
			return "MAP_CARD_MINIGAMES_DOMINOES_BLOCK";
		case 8:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_THREES";
		case 9:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_FIVES";
		case 10:
			return "MAP_CARD_MINIGAMES_DOMINOES_DRAW";
		case 4:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC";
		case 11:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_GUTS";
		default:
			break;
	}
	return "";
}

char* func_74(int iParam0)
{
	switch (iParam0)
	{
		case -1894360593:
			return "MAP_CARD_CAMP_HORSESHOE_HUNTING_CHARLES";
		case 581819093:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN";
		case 687859577:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER";
		case -103573613:
			return "MAP_CARD_CAMP_HORSESHOE_FIVE_FINGER_FILLET_LENNY";
		case 1202375449:
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON";
		case 2038046186:
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY";
		case -839878969:
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_SEAN";
		case -360730635:
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_BILL";
		case 194099983:
			return "MAP_CARD_CAMP_CLEMENSPOINT_FIVE_FINGER_FILLET_MICAH";
		case -1891229662:
			return "MAP_CARD_CAMP_SHADYBELLE_BANK_ROBBERY_CHARLES";
		case -668333238:
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_MICAH";
		case 99378894:
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_LENNY";
		case 673012160:
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE";
		case -1220302226:
			return "MAP_CARD_CAMP_HORSESHOE_HOME_ROBBERY_JAVIER";
		default:
			break;
	}
	return "";
}

char* func_75(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	if (iParam0 != -1)
	{
		iVar1 = func_127(iParam0);
		if (iVar1 == 0 || MAP::_0x3F81EA4275D39D6F(iVar1))
		{
			iVar0 = iParam0;
		}
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return MISC::_CREATE_VAR_STRING(0, iVar0);
}

char* func_76(int iParam0)
{
	if (!aggregate_func_4301(iParam0))
	{
		if (MISC::_0xACB7E1418A8B6E32(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return func_128(((*Global_1887327)[iParam0 /*36*/])->f_23);
}

int func_80(int iParam0)
{
	char* sVar0;

	sVar0 = func_129(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sVar0);
}

int func_81(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	StringCopy(&cVar0, func_129(iParam0), 64);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	StringCopy(&cVar8, "MAP_CARD_", 64);
	StringConCat(&cVar8, &cVar0, 64);
	StringConCat(&cVar8, "_DESC", 64);
	return MISC::GET_HASH_KEY(&cVar8);
}

var func_83(int iParam0)
{
	int iVar0;

	if (aggregate_func_7731(aggregate_func_7094(iParam0)))
	{
		iVar0 = -1100859510;
	}
	else
	{
		iVar0 = -107328778;
	}
	return &(((*Global_1112103)[iParam0 /*35*/])->f_13[aggregate_func_8183(iVar0, 1)]);
}

char* func_84(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BLIP_MG_POKER";
		case 1:
			return "BLIP_MG_BLACKJACK";
		case 2:
			return "BLIP_MG_DOMINOES";
		case 7:
			return "BLIP_MG_FENCE_BUILDING";
		case 4:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 5:
			return "BLIP_SUMMER_COW";
		case 6:
			return "BLIP_SUMMER_HORSE";
		case 8:
			return "BLIP_MG_DOMINOES_ALL3S";
		case 9:
			return "BLIP_MG_DOMINOES_ALL5S";
		case 10:
			return "BLIP_MG_DOMINOES_DRAW";
		case 11:
			return "BLIP_MG_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "BLIP_MG_FIVE_FINGER_FILLET_GUTS";
		case 14:
			return "BLIP_PROC_LOANSHARK";
		case 13:
			return "BLIP_AMBIENT_HERD";
		case 15:
			return "BLIP_PROC_BANK";
		case 16:
			return "BLIP_PROC_BOUNTY_POSTER";
		case 17:
			return "BLIP_AMBIENT_COACH";
		case 18:
			return "BLIP_AMBIENT_TRAIN";
		case 19:
			return "BLIP_AMBIENT_RIVERBOAT";
		case 20:
			return "BLIP_SHOP_STORE";
		case 21:
			return "BLIP_SHOP_SHADY_STORE";
		case 22:
			return "BLIP_AMBIENT_QUARTERMASTER";
		case 23:
			return "BLIP_SHOP_GUNSMITH";
		case 24:
			return "BLIP_SHOP_COACH_FENCING";
		case 25:
			return "BLIP_SHOP_DOCTOR";
		case 26:
			return "BLIP_SHOP_TAILOR";
		case 28:
			return "BLIP_SHOP_BLACKSMITH";
		case 29:
			return "BLIP_SHOP_TRAINER";
		case 33:
			return "BLIP_POST_OFFICE";
		case 34:
			return "BLIP_POST_OFFICE_REC";
		case 30:
			return "BLIP_SHOP_TRAIN";
		case 31:
			return "BLIP_SHOP_BARBER";
		case 32:
			return "BLIP_SHOP_BUTCHER";
		case 35:
			return "BLIP_SHOP_TACKLE";
		case 36:
			return "BLIP_SHOP_ANIMAL_TRAPPER";
		case 37:
			return "BLIP_SHOP_HORSE";
		case 38:
			return "BLIP_SHOP_HORSE_FENCING";
		case 39:
			return "BLIP_SHOP_HORSE_SADDLE";
		case 40:
			return "BLIP_HOTEL_BED";
		case 41:
			return "BLIP_PHOTO_STUDIO";
		case 27:
			return "BLIP_SALOON";
		case 51:
			return "BLIP_SHOP_WARDROBE";
		case 48:
			return "BLIP_MP_TRAVELLING_SALESWOMAN";
		case 49:
			return "BLIP_BUSINESS_MOONSHINE";
		case 50:
			return "BLIP_MOONSHINE_STILL";
		case 98:
			return "BLIP_MP_ROLE_MOONSHINER";
		case 52:
			return "BLIP_STABLE";
		case 53:
			return "BLIP_PROC_HOME";
		case 54:
			return "BLIP_PROC_HOME_LOCKED";
		case 55:
			return "BLIP_PROC_HOME";
		case 56:
			return "BLIP_AMBIENT_TELEGRAPH";
		case 57:
			return "BLIP_AMBIENT_COACH_TAXI";
		case 58:
			return "BLIP_AMBIENT_THEATRE";
		case 59:
			return "BLIP_REGION_CARAVAN";
		case 73:
			return "BLIP_CAMP_EAT";
		case 74:
			return "BLIP_AMBIENT_TITHING";
		case 75:
			return "BLIP_SHOP_PEARSON";
		case 76:
			return "BLIP_CAMP_HITCH";
		case 77:
			return "BLIP_SUPPLIES_AMMO";
		case 78:
			return "BLIP_SUPPLIES_HEALTH";
		case 79:
			return "BLIP_SUPPLIES_FOOD";
		case 80:
			return "BLIP_MG_POKER";
		case 81:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 82:
			return "BLIP_MG_DOMINOES";
		case 83:
			return "BLIP_REGION_HUNTING";
		case 84:
			return "BLIP_MG_FISHING";
		case 85:
			return "BLIP_ROBBERY_COACH";
		case 86:
			return "BLIP_REGION_HUNTING";
		case 87:
			return "BLIP_ROBBERY_BANK";
		case 88:
			return "BLIP_MG_DOMINOES";
		case 89:
			return "BLIP_AMBIENT_HERD";
		case 60:
			return "BLIP_EVENT_APPLESEED";
		case 61:
			return "BLIP_EVENT_CASTOR";
		case 62:
			return "BLIP_EVENT_RAILROAD_CAMP";
		case 63:
			return "BLIP_EVENT_RIGGS_CAMP";
		case 64:
			return "BLIP_REGION_HIDEOUT";
		case 65:
			return "BLIP_PROC_HOME";
		case 66:
			return "BLIP_MG_FISHING";
		case 67:
			return "BLIP_AMBIENT_THEATRE";
		case 68:
			return "BLIP_AMBIENT_THEATRE";
		default:
			return "";
	}
	return "";
}

int func_85(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
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
			return 2;
		case 16:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 58:
		case 67:
		case 68:
			return 1;
		case 53:
		case 59:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 3;
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
			return 4;
		case 57:
			return 5;
		default:
			break;
	}
	return 0;
	return 0;
}

struct<16> func_87(int iParam0)
{
	char cVar0[128];

	switch (iParam0)
	{
		case 111:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
		case 5:
			StringCopy(&cVar0, "MAP_CARD_TAXI_SAINTDENIS", 128);
			break;
		case 81:
			StringCopy(&cVar0, "MAP_CARD_TAXI_VALENTINE", 128);
			break;
		case 26:
			StringCopy(&cVar0, "MAP_CARD_TAXI_STRAWBERRY", 128);
			break;
		case 40:
			StringCopy(&cVar0, "MAP_CARD_TAXI_BLACKWATER", 128);
			break;
		default:
			StringCopy(&cVar0, "MAP_CARD_TAXI_RHODES", 128);
			break;
	}
	return cVar0;
}

void func_88(var uParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = uParam0->f_33;
	if (!aggregate_func_4326(iVar3))
	{
		iVar3 = aggregate_func_5624(uParam0->f_19);
	}
	iVar4 = aggregate_func_4336(iVar3);
	if ((aggregate_func_6688() || aggregate_func_4258()) || aggregate_func_7516())
	{
		return;
	}
	else if (aggregate_func_4672(iVar3) || aggregate_func_4672(iVar4))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
		}
		bVar0 = true;
	}
	else if (aggregate_func_4324(iVar4))
	{
		iVar1 = aggregate_func_4271(iVar4);
		if (iVar1 > 0)
		{
			bVar0 = true;
			sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, sVar2);
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < &Global_1900789)
	{
		if (!aggregate_func_4255(*((*Global_1900789)[iVar0 /*2*/])))
		{
		}
		else if (Global_1900789[iVar0 /*2*/] == 2)
		{
			iVar1 = aggregate_func_4306(*((*Global_1900789)[iVar0 /*2*/]));
			if ((aggregate_func_6553(iVar1) && MAP::DOES_BLIP_EXIST(((*Global_1835011)[iVar1 /*72*/])->f_28)) && ((*Global_1835011)[iVar1 /*72*/])->f_28 == iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_90(var uParam0)
{
	uParam0->f_30 = 0;
	uParam0->f_30.f_1 = 0;
	uParam0->f_30.f_2 = 0;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 90:
			return -523921054 /* GXTEntry: "Player" */;
		case 91:
			return 2133809007;
		case 92:
			return 1753392288;
		case 93:
			return -1397234361;
		case 94:
			return 1551310356;
		case 95:
			return -1174166673;
		case 96:
			return 1355002354;
		case 69:
			return -1258576797 /* GXTEntry: "Town" */;
		case 70:
			return 249251635;
		case 71:
			return -891753673;
		case 16:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 47:
		case 48:
		case 49:
		case 50:
		case 52:
		case 58:
		case 67:
		case 68:
		case 97:
			return 1528833484;
		case 1:
		case 2:
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
		case 46:
			return -188780617;
		default:
			break;
	}
	return 0;
}

int func_96(char* sParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uParam1))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	switch (iParam8)
	{
		case 0:
			StringCopy(sParam0, NETWORK::_0xB5C4B18B12A2AF23(&uParam1, iParam8), 128);
			return 4;
		case 1:
		case 2:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uParam1))
			{
				return 1;
			}
			return aggregate_func_347(sParam0, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uParam1), iParam8);
		default:
			break;
	}
	return 3;
}

void func_98(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate_func_6970(iParam1);
	if (iVar0 < 0)
	{
		return;
	}
	uParam0->f_30 = 1;
	uParam0->f_30.f_1 = 0;
	uParam0->f_30.f_2 = iVar0;
}

int func_101(int iParam0)
{
	return (Global_1103536->f_255.f_4839[iParam0 /*13*/])->f_1;
}

int func_106(int iParam0, int iParam1)
{
	return (((*Global_1112103)[iParam0 /*35*/])->f_2[aggregate_func_7733(iParam1, 1) /*2*/])->f_1;
}

char* func_124(int iParam0, int iParam1, vector3 vParam2)
{
	switch (iParam0)
	{
		case 20:
			return "GENERALSTORE";
		case 21:
			return "FENCE";
		case 23:
			return "GUNSMITH";
		case 25:
			return "DOCTOR";
		case 26:
			return "TAILOR";
		case 28:
			return "BLACKSMITH";
		case 33:
			switch (iParam1)
			{
				case 111:
					return "TRAINSTATION";
				default:
					return "DEPOT";
			}
			break;
		case 34:
			return "DEPOT";
		case 30:
			switch (iParam1)
			{
				case 5:
					return "DEPOT";
				default:
					return "TRAINSTATION";
			}
			break;
		case 31:
			return "BARBER";
		case 32:
			return "BUTCHER";
		case 35:
			return "BAITSHOP";
		case 36:
			return "TRAPPER";
		case 37:
			return "HORSESHOP";
		case 38:
			return "HORSESHOP";
		case 40:
			return "HOTEL";
		case 41:
			return "PHOTOGRAPHER";
		case 58:
			return "MAGICLANTERN";
		case 67:
			return "VAUDEVILLE";
		case 68:
			return "VAUDEVILLE";
		case 57:
			return "STAGECOACH";
		case 27:
			switch (iParam1)
			{
				case 5:
					if (BUILTIN::VDIST(vParam2, 2796f, -1167f, vParam2.z) <= 25f)
					{
						return "SLUMSALOON";
					}
					else
					{
						return "NICESALOON";
					}
					break;
				case 81:
					if (BUILTIN::VDIST(vParam2, -308f, 807.05f, vParam2.z) <= 25f)
					{
						return "SALOON_BARBER";
					}
					else
					{
						return "SALOON2";
					}
					break;
				default:
					return "SALOON";
			}
			break;
		case 16:
			return "BOUNTY";
		case 51:
			return "WARDROBE";
	}
	return "";
}

char* func_126(int iParam0)
{
	switch (func_159(iParam0))
	{
		case 6:
			return "BEAVERHOLLOW";
		case 2:
			return "CLEMENSPOINT";
		case 0:
			return "COLTER";
		case 4:
			return "GUARMA";
		case 1:
			return "HORSESHOE";
		case 5:
			return "LAKAY";
		case 3:
			return "SHADYBELLE";
		case 7:
			return "PRONGHORN";
	}
	return "";
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case -787401661:
			return 993246734;
		case 1154382595:
			return 1352537560;
		case -744066564:
			return -1262808306;
		case 1448805167:
			return 1582457845;
		case -1753216046:
			return 460210291;
		case -832065774:
			return 2021420613;
		case -1942169613:
			return 1195199040;
		case 1307292947:
			return -1212881551;
		case 893044669:
			return -2011320133;
		case 1716154100:
			return -1988847961;
		case -1173672830:
			return 2056389698;
		case -2074284650:
			return -942443338;
		case -2133063188:
			return 539572870;
		case -769726319:
			return 66159563;
		case 863351250:
			return 387869270;
		case -419963911:
			return -496244122;
		case -619014970:
			return -238119963;
		case 538198805:
			return 1028223611;
		case 1557904547:
			return 730222325;
		case 1251481628:
			return -597970767;
		case -828659305:
			return -732274047;
		case -139400310:
			return -1368676121;
		case 1830267951:
			return 759314201;
		case -1496551068:
			return 1826504111;
		case 39999178:
			return 1728445882;
		case -103399754:
			return -12216052;
		case -1359523911:
			return -431488293;
		case -336631570:
			return 1474106589;
		case 866178028:
			return -353968602;
		case 2056953687:
			return -918096609;
		case 878474860:
			return 1979340260;
		case 219097977:
			return 1472232821;
		case -1043500161:
			return 462373845;
		case -1902025470:
			return -1836330842;
		case 1701820039:
			return -1150244084;
		case -2034338067:
			return -1727895786;
		case 1767462106:
			return -1101810198;
		case 770707682:
			return 2143316225;
		case -1592070727:
			return 121074776;
		case -1521776363:
			return -2086563810;
		case 1544029611:
			return -1332669948;
		case 881209616:
			return 85299473;
		case -1161186391:
			return -1813267128;
		case -154855189:
			return 458479023;
		case 1212679502:
			return -678676588;
		case -969933882:
			return 1602161184;
		case -1539536559:
			return -656861063;
		case -916903901:
			return 1735191955;
		case -2126414432:
			return 2073023198;
		case 580715948:
			return -1941572412;
		case -814535426:
			return 215480587;
		case 1987954784:
			return 545498183;
		case 320988519:
			return 820139809;
		case 522499758:
			return 2063457042;
		case 1082216465:
			return 1006072805;
		case 1247830528:
			return 428613469;
		case -645154787:
			return -161135375;
		case -657053325:
			return -1276637644;
		case 1030217084:
			return -960425936;
		case -1821194396:
			return 532401286;
		case -146460093:
			return -1347759053;
		case 2087258933:
			return 1542246539;
		case 1922831023:
			return 1740117339;
		case -1472363892:
			return 770074951;
		case 30800579:
			return -237206861;
		case -1769528472:
			return 1877776161;
		case 1895254880:
			return 1837393665;
		case -1692509313:
			return 1603579970;
		case -576782619:
			return -1456731677;
		case 229479634:
			return -1344767066;
		case 1062452343:
			return 1092217275;
		case 1350749955:
			return 1855549007;
		case 1506834348:
			return -875696111;
		case 2132554759:
			return -91026072;
		case 1016304714:
			return 1876184276;
		case 375900073:
			return -876779166;
		case -631265576:
			return -1116738159;
		case -291091669:
			return 415864829;
		case 1603158849:
			return -1408667066;
		case -2035208924:
			return -1730421200;
		case 1860552235:
			return 1374995365;
		case 1987585677:
			return -1393093729;
		case -259784188:
			return -1623232489;
		case 1477464408:
			return -1394664008;
		case 1136441188:
			return -325788416;
		case 738939338:
			return -1807212021;
		case -1247294802:
			return -792566558;
		case 6184171:
			return -2089448537;
		case -868607615:
			return 82527577;
		case 930788089:
			return -1354901649;
		case 1871224592:
			return -1585921053;
		case 1094048700:
			return 222265732;
		case -1419869345:
			return 1561007383;
		case -1894004139:
			return 1104975149;
		case 31314838:
			return 1515744307;
		case -438809735:
			return 893855320;
		case 690770514:
			return 235472255;
		case 126047903:
			return -1173041902;
		case 1001341519:
			return 326709244;
		case 1704544150:
			return -1337880478;
		case 245588937:
			return 205568929;
		case 199607503:
			return 276890716;
		case -264897431:
			return -2110824426;
		case -2000021141:
			return 43681669;
		case 1645047683:
			return 562599937;
		case -1164281509:
			return 1822876181;
		case 696910142:
			return -683043834;
		case -1768736648:
			return 532503220;
		case -930437658:
			return 379859357;
		case -1622112934:
			return 1610646968;
		case -9585484:
			return 1268001912;
		case -870780939:
			return 653958186;
		case 570617421:
			return -1917132299;
		case 230920996:
			return -134804027;
		case 1071862910:
			return 1116308524;
		case 1436995883:
			return 1625008147;
		case 806217109:
			return -727372692;
		case 1347794144:
			return 1354284392;
		case -215175141:
			return 1871337449;
		case 359085936:
			return -1249289544;
		case -1699818764:
			return 1714554710;
		case 1499492436:
			return -443207523;
		case -793097117:
			return -33677540;
		case 1400897589:
			return -763271696;
		case 848488661:
			return 2027689141;
		case -504005310:
			return -1484929764;
		case -1099073636:
			return -1430883057;
		case 372957665:
			return 2133877879;
		case 1427239788:
			return -508074447;
		case 1677148641:
			return -507075109;
		case -425430549:
			return 147256338;
		case -61172588:
			return 929640770;
		case 492552869:
			return 648073069;
		case -545967610:
			return 653799702;
		case -1999797981:
			return -296815465;
		case 1613985721:
			return 1944800674;
		case -120578354:
			return 221661572;
		default:
			break;
	}
	return 0;
}

char* func_128(var uParam0)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 2126321341:
			return "VHT";
		case -473051294:
			return "EMR";
		case 7359335:
			return "ANN";
		case 406627834:
			return "LAG";
		case 2046780049:
			return "RHO";
		case 427683330:
			return "STR";
		case 1053078005:
			return "BLA";
		case -765540529:
			return "NBX";
		case 459833523:
			return "VAL";
		case joaat("ARMADILLO"):
			return "AMD";
		case -1524959147:
			return "TBL";
		default:
			break;
	}
	return "";
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 84:
			return 6;
		case 45:
			return 0;
		case 104:
			return 2;
		case 63:
			return 4;
		case 76:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 39:
			return 8;
		default:
			break;
	}
	return -1;
}

