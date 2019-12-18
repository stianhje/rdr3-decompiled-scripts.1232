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
	struct<6> Local_21 = { 0, 0, 0, 0, 0, -1 } ;
	var uLocal_26 = -1;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == aggregate_func_13

void func_39(var uParam0)
{
	*uParam0 = *uParam0;
	uParam0->f_167.f_1813 = 1;
}

void func_44(var uParam0)
{
	uParam0->f_2421.f_35 = 1;
	uParam0->f_2421.f_36 = 61715;
}

void func_45(var uParam0)
{
	if (uParam0->f_4 == 69)
	{
		if (BUILTIN::VDIST2(aggregate_func_1977(PLAYER::PLAYER_ID()), uParam0->f_2371.f_11) <= 100f)
		{
			if (!aggregate_func_4268(uParam0->f_2371.f_11) && Local_21.f_5 == -1)
			{
				Local_21.f_5 = aggregate_func_3637(uParam0->f_19, 51, uParam0->f_2371.f_11, -1);
			}
		}
		else if (Local_21.f_5 != -1)
		{
			aggregate_func_1801(&(Local_21.f_5), 0);
			Local_21.f_5 = -1;
		}
	}
}

void func_90(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return;
	}
	if (uParam0->f_4 != 69)
	{
		if (!aggregate_func_4268(uParam0->f_2371.f_11) && Local_21.f_5 == -1)
		{
			Local_21.f_5 = aggregate_func_3637(uParam0->f_19, 51, uParam0->f_2371.f_11, -1);
		}
	}
}

void func_122(var uParam0)
{
	GRAPHICS::_0x37D7BDBA89F13959("CamTransitionBlink");
	func_448(uParam0);
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
		if (!func_725(&(uParam0->f_4), iParam1, iParam2, aggregate_func_6464(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_726(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate_func_4242(&(uParam0->f_4), 137558);
	aggregate_func_4242(&(uParam0->f_4), 137595);
	aggregate_func_4932(&(uParam0->f_4), 137623);
	aggregate_func_4932(&(uParam0->f_4), 138158);
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

void func_332(var uParam0)
{
	if (aggregate_func_4251() != -1)
	{
		aggregate_func_6708(uParam0, 0, 138963, 138972, 138981, 139523);
		aggregate_func_4958(uParam0, 0, 32);
	}
	aggregate_func_6708(uParam0, 1, 138963, 138972, 138981, 139523);
	if (uParam0->f_3 != 6 && uParam0->f_3 != 7)
	{
		func_749(uParam0, 2);
	}
	aggregate_func_4958(uParam0, 1, 32);
	aggregate_func_4958(uParam0, 2, 32);
	aggregate_func_4958(uParam0, 3, 32);
}

int func_338(var uParam0, bool bParam1, bool bParam2)
{
	if (aggregate_func_2852(bParam1, -1192049572))
	{
		if (bParam2)
		{
			uParam0->f_44 = func_759(2);
		}
		else
		{
			uParam0->f_44 = func_759(3);
		}
		return 1;
	}
	if (aggregate_func_2852(bParam1, -2085281117) || aggregate_func_2852(bParam1, -887064662))
	{
		if (bParam2)
		{
			uParam0->f_44 = func_759(4);
		}
		else
		{
			uParam0->f_44 = func_759(5);
		}
		return 1;
	}
	if (aggregate_func_2852(bParam1, 887366763))
	{
		if (bParam2)
		{
			uParam0->f_44 = func_759(12);
		}
		else
		{
			uParam0->f_44 = func_759(13);
		}
		return 1;
	}
	if (aggregate_func_2852(bParam1, -1359903382))
	{
		if (bParam2)
		{
			uParam0->f_44 = func_759(8);
		}
		else
		{
			uParam0->f_44 = func_759(9);
		}
		return 1;
	}
	if (aggregate_func_2852(bParam1, -1202768860))
	{
		if (bParam2)
		{
			uParam0->f_44 = func_759(10);
		}
		else
		{
			uParam0->f_44 = func_759(11);
		}
		return 1;
	}
	if (aggregate_func_2852(bParam1, 1490540191))
	{
		if (bParam2)
		{
			uParam0->f_44 = func_759(21);
		}
		else
		{
			uParam0->f_44 = func_759(22);
		}
		return 1;
	}
	if (aggregate_func_2852(bParam1, 554195525))
	{
		if (bParam2)
		{
			uParam0->f_44 = func_759(6);
		}
		else
		{
			uParam0->f_44 = func_759(7);
		}
		return 1;
	}
	return 0;
}

int func_402(var uParam0)
{
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransitionBlink"))
	{
		return 0;
	}
	return func_800(uParam0);
}

void func_403(var uParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_167.f_1778.f_30))
	{
		return;
	}
	if (aggregate_func_4268(Local_21))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_167.f_1778.f_30);
		Local_21 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 1.5f, 0f, 0f) };
	}
	func_801(uParam0);
}

void func_404(var uParam0)
{
	if (uParam0->f_2421.f_5 == 2)
	{
		if (aggregate_func_4268(uParam0->f_2421.f_46))
		{
			func_802(&(uParam0->f_2421), Local_21);
			if (aggregate_func_1231(uParam0->f_2421.f_4))
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0->f_2421.f_4, 0);
			}
		}
	}
	else if (!aggregate_func_4268(uParam0->f_2421.f_46))
	{
		func_803(&(uParam0->f_2421));
		if (aggregate_func_1231(uParam0->f_2421.f_4))
		{
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0->f_2421.f_4, 0);
		}
	}
	switch (uParam0->f_2421.f_5)
	{
		case 2:
			if (!Local_21.f_4)
			{
				Local_21.f_3 = uParam0->f_2421.f_18;
				uParam0->f_2421.f_18 = 0;
				aggregate_func_4283(&(uParam0->f_2421.f_77));
				Local_21.f_4 = 1;
			}
			func_804(uParam0);
			break;
		case 4:
			uParam0->f_2421.f_18 = Local_21.f_3;
			Local_21.f_4 = 0;
			break;
	}
}

void func_430(var uParam0)
{
	aggregate_func_4914(&(Global_1951131->f_1657));
	if (uParam0->f_4 != 69 && Local_21.f_5 != -1)
	{
		aggregate_func_1801(&(Local_21.f_5), 0);
	}
}

void func_448(var uParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2003.f_30))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_2003.f_30);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2515, "player", iVar0);
	}
	uParam0->f_2515.f_2 = 1;
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_2515))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_2515, 0);
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2515);
	}
}

void func_695(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate_func_4577() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1040(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate_func_4358(uParam0, 195357);
			aggregate_func_4358(uParam0, 196277);
			aggregate_func_4358(uParam0, 196880);
			aggregate_func_4358(uParam0, 197174);
			aggregate_func_4358(uParam0, 197377);
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
	if (!aggregate_func_2177(bParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1287 = 1;
	uParam0->f_1288 = bParam3;
	uParam0->f_1279 = 219991;
	uParam0->f_1280 = 220000;
	uParam0->f_1281 = 220009;
	uParam0->f_1282 = 220009;
	uParam0->f_222 = iParam5;
	aggregate_func_4252(uParam0, 0);
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
	if (!aggregate_func_770(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1279 = 219991;
	uParam0->f_1280 = 220000;
	uParam0->f_1281 = 220009;
	uParam0->f_1282 = 220009;
	uParam0->f_222 = iParam4;
	aggregate_func_4252(uParam0, 0);
	return true;
}

int func_749(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2 || iParam1 == 12)
	{
		return aggregate_func_6708(uParam0, iParam1, 221795, 221826, 221913, 223511);
	}
	else
	{
		iVar0 = 0;
		if (!aggregate_func_5729(iParam1, &iVar0))
		{
			return 0;
		}
		return aggregate_func_6708(uParam0, iParam1, 223721, 197487, 128737, 30792);
	}
	return 0;
}

char* func_759(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SALES_PITCH_BROWSING_GENERAL_GOODS";
		case 1:
			return "SALES_PITCH_BROWSING_LUXURY_GOODS";
		case 2:
			return "SALES_PITCH_PACKAGED_FOOD";
		case 3:
			return "SALES_PITCH_BROWSING_PACKAGED_FOOD";
		case 4:
			return "SALES_PITCH_PRODUCE";
		case 5:
			return "SALES_PITCH_BROWSING_PRODUCE";
		case 6:
			return "SALES_PITCH_CONFECTIONARY";
		case 7:
			return "SALES_PITCH_BROWSING_CONFECTIONARY";
		case 8:
			return "SALES_PITCH_OUTDOOR_SUPPLIES";
		case 9:
			return "SALES_PITCH_BROWSING_OUTDOOR_SUPPLIES";
		case 10:
			return "SALES_PITCH_VET";
		case 11:
			return "SALES_PITCH_BROWSING_VET";
		case 12:
			return "SALES_PITCH_MEDICAL";
		case 13:
			return "SALES_PITCH_BROWSING_MEDICAL";
		case 14:
			return "SALES_PITCH_CLOTHING";
		case 15:
			return "SALES_PITCH_BROWSING_CLOTHING";
		case 16:
			return "SALES_PITCH_CLOTHING_ACCESSORY";
		case 17:
			return "SALES_PITCH_WEAPON_GUN_GENERIC";
		case 18:
			return "SALES_PITCH_BROWSING_GUN_GENERIC";
		case 19:
			return "SALES_PITCH_WEAPON_UNIQUE";
		case 20:
			return "SALES_PITCH_BROWSING_WEAPON_UNIQUE";
		case 21:
			return "SALES_PITCH_LIQUOR";
		case 22:
			return "SALES_PITCH_BROWSING_LIQUOR";
		case 23:
			return "SALES_PITCH_NICE_HORSE";
		default:
			break;
	}
	return "";
}

int func_800(var uParam0)
{
	switch (uParam0->f_2515.f_1)
	{
		case 0:
			if (uParam0->f_2515 == -1)
			{
				aggregate_func_4242(&(uParam0->f_2515), 2);
			}
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_2515))
			{
				return 0;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2515);
			aggregate_func_4242(&(uParam0->f_2515), 1);
			break;
		case 1:
			if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_2515, 1, 0))
			{
				return 0;
			}
			aggregate_func_4242(&(uParam0->f_2515), 2);
			break;
		case 2:
			return 1;
	}
	return 0;
}

void func_801(var uParam0)
{
	int iVar0;

	if (uParam0->f_2515 == -1)
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_167.f_1778.f_30);
	switch (uParam0->f_2515.f_2)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2515, "player", iVar0, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2515, "player", Global_35, 0);
			}
			func_1239(uParam0);
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_2515);
			uParam0->f_2515.f_4 = 19;
			aggregate_func_4242(&(uParam0->f_2515), 6);
			break;
		case 2:
			if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2515, 0))
			{
				if (!ANIMSCENE::_0x8D81E7824B7753F7(uParam0->f_2515, "Idle", 1))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_2515, "IDLE_BOOL", false, false);
				}
				if (uParam0->f_2515.f_3 == uParam0->f_2074)
				{
				}
				else
				{
					uParam0->f_2515.f_4 = func_1241(uParam0->f_2074);
					if (uParam0->f_2515.f_4 == 0)
					{
					}
					else
					{
						aggregate_func_4242(&(uParam0->f_2515), 6);
						Jump @305; //curOff = 249
						if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2515, 0))
						{
							if (func_1243(func_1242(uParam0->f_2515.f_4), uParam0->f_2515, uParam0))
							{
								aggregate_func_4242(&(uParam0->f_2515), 2);
							}
						}
					}
				}
				uParam0->f_2515.f_3 = uParam0->f_2074;
			}
			default:
				break;
	}
}

void func_802(var uParam0, vector3 vParam1)
{
	uParam0->f_46 = { vParam1 };
	aggregate_func_5251(uParam0, 512);
}

void func_803(var uParam0)
{
	uParam0->f_46 = { aggregate_func_4952() };
	aggregate_func_5285(uParam0, 512);
}

void func_804(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!aggregate_func_5852(uParam0->f_3))
	{
		return;
	}
	iVar0 = aggregate_func_3180(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	bVar1 = PED::GET_PED_CONFIG_FLAG(iVar0, 408, true);
	if (aggregate_func_4278(uParam0, 16))
	{
		aggregate_func_4266(uParam0, 16);
		aggregate_func_4266(uParam0, 32);
		if (aggregate_func_4278(uParam0, 128))
		{
			if (bVar1)
			{
				aggregate_func_4266(uParam0, 256);
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransitionBlink");
			}
			else
			{
				aggregate_func_4583(uParam0->f_2520.f_3, 1, 1, 1);
			}
			aggregate_func_4266(uParam0, 128);
		}
		if (!aggregate_func_4278(uParam0, 256) && ((uParam0->f_2520.f_1 == 0 && !aggregate_func_4745(uParam0->f_167.f_1757, func_1247(uParam0, uParam0->f_2520))) || !aggregate_func_4745(func_1247(uParam0, uParam0->f_2520.f_1), func_1247(uParam0, uParam0->f_2520))))
		{
			aggregate_func_4583(uParam0->f_2520.f_3, 0, 1, 1);
			aggregate_func_4266(uParam0, 256);
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransitionBlink");
		}
	}
	if (aggregate_func_4278(uParam0, 256) && MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uParam0->f_2520.f_2, NETWORK::GET_NETWORK_TIME_ACCURATE())) > 150)
	{
		aggregate_func_4583(uParam0->f_2520.f_3, 1, 1, 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
		aggregate_func_30(iVar0, func_1247(uParam0, uParam0->f_2520), uParam0->f_167.f_1760, 2, 1073741824 /* Float: 2f */);
		aggregate_func_4266(uParam0, 256);
	}
	bVar2 = false;
	if (!aggregate_func_4278(uParam0, 32))
	{
		aggregate_func_4583(uParam0->f_2520.f_3, 0, 1, 1);
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uParam0->f_2520.f_2, NETWORK::GET_NETWORK_TIME_ACCURATE())) > 1000)
		{
			aggregate_func_4266(uParam0, 32);
			bVar2 = true;
			aggregate_func_4583(uParam0->f_2520.f_3, 1, 1, 1);
		}
	}
	if (uParam0->f_2520 != 0)
	{
		if (!aggregate_func_2875(uParam0->f_2520.f_4))
		{
			uParam0->f_2520.f_4 = aggregate_func_2045("SHOP_VIEW_EMOTE", joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 2, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(uParam0->f_2520.f_4, 13, 1, 1);
			aggregate_func_2057(uParam0->f_2520.f_4, 10, 1, 1);
			aggregate_func_2057(uParam0->f_2520.f_4, 14, 1, 1);
			aggregate_func_4583(uParam0->f_2520.f_4, 1, 1, 1);
			aggregate_func_4823(uParam0->f_2520.f_4, 0, 1);
		}
		if (!aggregate_func_2875(uParam0->f_2520.f_3))
		{
			uParam0->f_2520.f_3 = aggregate_func_2045("SHOP_VIEW_EMOTE", joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
			aggregate_func_2057(uParam0->f_2520.f_3, 13, 1, 1);
			aggregate_func_2057(uParam0->f_2520.f_3, 10, 1, 1);
			aggregate_func_2057(uParam0->f_2520.f_3, 14, 1, 1);
			aggregate_func_2057(uParam0->f_2520.f_3, 19, 1, 1);
			aggregate_func_2057(uParam0->f_2520.f_3, 20, 1, 1);
			aggregate_func_4583(uParam0->f_2520.f_3, 1, 1, 1);
		}
		if (aggregate_func_2927(uParam0->f_2520.f_4, 1))
		{
			bVar2 = true;
			aggregate_func_4266(uParam0, 32);
		}
		if (!aggregate_func_4278(uParam0, 64))
		{
			if (!aggregate_func_4278(uParam0, 128) && bVar2)
			{
				if (bVar1)
				{
				}
				else
				{
					aggregate_func_4266(uParam0, 128);
					aggregate_func_1696(iVar0, uParam0->f_2520, 2, 0, 1, func_1249(uParam0->f_2520));
					aggregate_func_4583(uParam0->f_2520.f_3, 0, 1, 1);
				}
			}
			else if (!bVar1)
			{
				if (aggregate_func_4278(uParam0, 128))
				{
					aggregate_func_4266(uParam0, 128);
					aggregate_func_4583(uParam0->f_2520.f_3, 1, 1, 1);
				}
			}
		}
		if (!aggregate_func_4278(uParam0, 128) && aggregate_func_455(uParam0->f_2520.f_3, 1))
		{
			aggregate_func_4266(uParam0, 32);
			aggregate_func_4266(uParam0, 128);
			aggregate_func_4266(uParam0, 64);
			aggregate_func_1696(iVar0, uParam0->f_2520, 1, 1, 1, func_1249(uParam0->f_2520));
			if (!aggregate_func_2875(uParam0->f_2520.f_5))
			{
				uParam0->f_2520.f_5 = aggregate_func_2045("EMOTE_PERFORM_ACTION", joaat("INPUT_INSPECT_ZOOM"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				aggregate_func_2057(uParam0->f_2520.f_5, 13, 1, 1);
				aggregate_func_2057(uParam0->f_2520.f_5, 10, 1, 1);
				aggregate_func_2057(uParam0->f_2520.f_5, 14, 1, 1);
				aggregate_func_4583(uParam0->f_2520.f_5, 1, 1, 1);
			}
			aggregate_func_2968(uParam0, 1, 0);
			aggregate_func_2968(uParam0, 4, 0);
			aggregate_func_2968(uParam0, 2, 0);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_SHOP_CHANGE_CURRENCY"), false);
		}
		else if (aggregate_func_4278(uParam0, 64))
		{
			if (!aggregate_func_455(uParam0->f_2520.f_3, 1))
			{
				aggregate_func_2968(uParam0, 1, aggregate_func_2970());
				aggregate_func_2968(uParam0, 4, aggregate_func_2969(uParam0, 4));
				aggregate_func_2968(uParam0, 2, 1);
				aggregate_func_4266(uParam0, 64);
				if (aggregate_func_2875(uParam0->f_2520.f_5))
				{
					aggregate_func_2878(&(uParam0->f_2520.f_5), 1, 1);
				}
				aggregate_func_4583(uParam0->f_2520.f_3, 0, 1, 1);
				TASK::_0xBDFEEB7600BCD938(iVar0);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_SHOP_CHANGE_CURRENCY"), false);
				if (aggregate_func_2973(uParam0->f_2520.f_5, 1))
				{
					TASK::_0x6A1AF481407BF6E9(iVar0);
				}
			}
		}
	}
	else if (aggregate_func_2875(uParam0->f_2520.f_3))
	{
		aggregate_func_2878(&(uParam0->f_2520.f_3), 1, 1);
		aggregate_func_2878(&(uParam0->f_2520.f_4), 1, 1);
		aggregate_func_2878(&(uParam0->f_2520.f_5), 1, 1);
		aggregate_func_30(iVar0, uParam0->f_167.f_1757, uParam0->f_167.f_1760, 2, 1073741824 /* Float: 2f */);
	}
}

bool func_1040(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
	uParam0->f_2094.f_149 = 261120;
	uParam0->f_2094.f_150 = 262004;
	uParam0->f_2094.f_151 = 262932;
	uParam0->f_2094.f_152 = 263051;
	uParam0->f_2094.f_46 = 1;
	return true;
}

int func_1043(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = aggregate_func_2827(uParam1->f_7);
	bVar1 = false;
	switch (uParam1->f_10)
	{
		case 1:
			if (*uParam1 == -348190488)
			{
				aggregate_func_4300(uParam1->f_7);
			}
			break;
		case 2:
			bVar1 = aggregate_func_6024();
			if (aggregate_func_4911(uParam0) == 1256151078)
			{
				aggregate_func_6052(uParam0, -1934515925, 1, -1, 1, 1, 1, 0);
				return 1;
			}
			switch (*uParam1)
			{
				case 2077448405:
					bVar3 = true;
					break;
				case 1942587409:
					bVar3 = true;
					break;
				case 761079318:
					if (iVar0 == -2061583405)
					{
						bVar3 = true;
					}
					break;
			}
			switch (uParam1->f_7)
			{
				case -2065815962: /* GXTEntry: "No Hat" */
					bVar3 = false;
					break;
			}
			if (bVar3)
			{
				if (aggregate_func_5193(uParam1->f_7))
				{
					if (aggregate_func_5668(aggregate_func_6503(uParam0)))
					{
						aggregate_func_2175(uParam0, -1, 1);
					}
					aggregate_func_5195(uParam1->f_7, 0, 0);
					if (aggregate_func_2823(bVar1, 0))
					{
						aggregate_func_664(bVar1, 3);
					}
					else
					{
						aggregate_func_664(uParam1->f_7, 3);
					}
				}
				else
				{
					aggregate_func_3041(uParam1->f_7, 0, 0, 0);
					if (aggregate_func_2823(bVar1, 0))
					{
						aggregate_func_664(bVar1, 2);
					}
					else
					{
						aggregate_func_664(uParam1->f_7, 2);
					}
				}
			}
			aggregate_func_4719(1048576);
			break;
		case 3:
			if (!aggregate_func_5372(uParam1->f_7) || uParam1->f_7 == 491602716)
			{
			}
			else
			{
				uParam0->f_2371.f_8 = 2;
				uParam0->f_2371.f_7 = uParam1->f_7;
				Jump @574; //curOff = 377
				if ((aggregate_func_5372(uParam1->f_7) && aggregate_func_5667() != uParam1->f_7) && uParam1->f_7 != 491602716)
				{
					if (aggregate_func_5193(uParam1->f_7))
					{
						aggregate_func_5195(uParam1->f_7, 0, 0);
						aggregate_func_4719(1048576);
					}
					aggregate_func_664(uParam1->f_7, 1);
					if (aggregate_func_6025(uParam1->f_7, &iVar4, 1))
					{
						aggregate_func_6026(iVar4);
						aggregate_func_5487(2, iVar4, 6);
						aggregate_func_5488(iVar4);
						aggregate_func_4719(1048576);
					}
					aggregate_func_2175(uParam0, -1, 1);
				}
				else if (aggregate_func_6027(&(uParam0->f_2371.f_6)))
				{
					iVar2 = aggregate_func_5489(uParam0->f_2371.f_6);
					if (iVar2 != 0)
					{
						uParam0->f_2371.f_8 = 1;
						uParam0->f_2371.f_7 = iVar2;
					}
				}
			}
			return 1;
		}

bool func_1132(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	bool bVar13;
	struct<9> Var14;
	bool bVar24[10];
	int iVar35;
	int iVar36[10];
	int iVar47;
	bool bVar48;
	int iVar49;
	int iVar50;
	int iVar51;

	*bParam1 = 1;
	iVar0 = 0;
	iVar8 = aggregate_func_5692(uParam0);
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_2 = -1;
	Var14.f_3 = -1;
	Var14.f_4 = -1;
	Var14.f_5 = -1;
	Var14.f_6 = -1;
	Var14.f_7 = -1;
	Var14.f_8 = -1;
	bVar48 = false;
	if (bParam2)
	{
		bVar48 = -570078785;
	}
	iVar50 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2094.f_57);
	bVar1 = false;
	while (bVar1 < iVar50)
	{
		iVar49 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2094.f_57, bVar1);
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar49))
		{
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar49, aggregate_func_5557());
			bVar6 = bVar2;
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar49, aggregate_func_5712());
			iVar5 = iVar4;
			iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar49, aggregate_func_5713());
			if (aggregate_func_2823(bVar6, 0))
			{
				if (iVar5 == 1702073444)
				{
					if (aggregate_func_5722(bVar6))
					{
						Var14.f_8 = iVar3;
						iVar8 = aggregate_func_5692(uParam0);
						iVar10 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var14, &iVar9, 1);
						iVar11 = 0;
						while (iVar11 < iVar9)
						{
							bVar12 = aggregate_func_2076(iVar11, iVar10);
							if ((((aggregate_func_2823(bVar12, 0) && bVar12 != bVar6) && !aggregate_func_5723(bVar12, &bVar24, iVar35)) && aggregate_func_5724(&(uParam0->f_2094), bVar12, &uVar7)) || ITEMDATABASE::_ITEM_DATABASE_GET_ITEM_TAG_TYPE(bVar12, Var14.f_8) == -2089472884)
							{
								uParam0->f_2094.f_73 = uVar7;
								bVar13 = aggregate_func_6134(uParam0, bVar12);
								if (!func_1562(uParam0, bVar12, bVar13))
								{
									if (iVar47 < (iVar36 - 1))
									{
										iVar36[iVar47] = bVar12;
										iVar47++;
									}
								}
							}
							iVar11++;
						}
						uParam0->f_2094.f_73 = iVar8;
						ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar10);
					}
				}
				else if (!aggregate_func_5723(bVar6, &bVar24, iVar35))
				{
					if (!func_1562(uParam0, bVar6, iVar5))
					{
						if (!(aggregate_func_2896(bVar6, 59806960) && aggregate_func_4959()))
						{
							iVar0 = (iVar0 + aggregate_func_6264(bVar6, bVar48, 1, 0, 1));
						}
						*bParam1 = 0;
					}
					if (aggregate_func_2852(bVar6, 1954943838))
					{
						if (iVar47 < (iVar36 - 1))
						{
							iVar36[iVar47] = bVar6;
							iVar47++;
						}
					}
				}
				if (iVar35 < (bVar24 - 1))
				{
					bVar24[iVar35] = bVar12;
					iVar35++;
				}
			}
		}
		bVar1++;
	}
	bVar1 = false;
	while (bVar1 < iVar47)
	{
		if (&iVar36[bVar1] != 0 && !aggregate_func_2852(&(iVar36[bVar1]), 1954943838))
		{
			iVar51 = 0;
			while (iVar51 < iVar47)
			{
				if ((&iVar36[iVar51] != 0 && aggregate_func_2852(&(iVar36[iVar51]), 1954943838)) && aggregate_func_5725(&(iVar36[bVar1]), &(iVar36[iVar51])))
				{
					if (!(aggregate_func_2896(&(iVar36[bVar1]), 59806960) && aggregate_func_4959()))
					{
						iVar0 = (iVar0 + aggregate_func_6264(&(iVar36[bVar1]), bVar48, 1, 0, 1));
					}
					*bParam1 = 0;
					iVar36[bVar1] = 0;
				}
				else
				{
					iVar51++;
				}
			}
		}
		bVar1 = (bVar1 + 1);
	}
	return iVar0;
}

bool func_1193(var uParam0)
{
	struct<4> Var0;
	bool bVar4;

	if (!aggregate_func_4275(uParam0))
	{
		Var0 = { aggregate_func_6000(&(uParam0->f_167.f_4)) };
		if (func_1040(uParam0, Var0.f_2, Var0.f_3, 0))
		{
			aggregate_func_5892(uParam0, Var0);
			bVar4 = 1728382685; /* GXTEntry: "Right" */
			if (aggregate_func_5562(Var0, 1728382685 /* GXTEntry: "Right" */, 0) && aggregate_func_5562(Var0, -649335959 /* GXTEntry: "Left" */, 0))
			{
				bVar4 = -649335959; /* GXTEntry: "Left" */
			}
			aggregate_func_5704(uParam0, bVar4);
			aggregate_func_8078(uParam0, 172);
			aggregate_func_4358(uParam0, 324698);
			aggregate_func_4358(uParam0, 324902);
			aggregate_func_4358(uParam0, 325012);
			aggregate_func_2985(1);
		}
		else
		{
			return false;
		}
	}
	if (aggregate_func_4275(uParam0) && !aggregate_func_4275(uParam0))
	{
		if (aggregate_func_951(uParam0))
		{
		}
	}
	if (aggregate_func_4275(uParam0) && aggregate_func_4275(uParam0))
	{
		if (aggregate_func_105(uParam0))
		{
		}
		else
		{
			aggregate_func_1201(uParam0);
			return false;
		}
	}
	return true;
}

bool func_1194(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	bool bVar5;
	bool bVar6;
	bool bVar7;

	if (!aggregate_func_4275(uParam0))
	{
		GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
		bVar0 = true;
		Var1 = { aggregate_func_6000(&(uParam0->f_167.f_4)) };
		bVar5 = -1;
		bVar6 = joaat("root");
		bVar5 = Var1.f_2;
		bVar6 = Var1.f_3;
		bVar0 = false;
		aggregate_func_1223(uParam0, aggregate_func_3316(&(uParam0->f_167.f_1778)));
		if (aggregate_func_2226(uParam0, bVar5, bVar6, &bVar7))
		{
			aggregate_func_2230(uParam0, bVar7);
			if (CAM::DOES_CAM_EXIST(uParam0->f_167.f_1778.f_28))
			{
				aggregate_func_663(&(uParam0->f_167.f_1778.f_28), aggregate_func_2827(bVar7), aggregate_func_3180(uParam0));
			}
		}
		if (func_1040(uParam0, bVar5, bVar6, 1))
		{
			aggregate_func_4786(uParam0);
			aggregate_func_8078(uParam0, 173);
			aggregate_func_4358(uParam0, 325717);
			aggregate_func_4358(uParam0, 325871);
			aggregate_func_4358(uParam0, 326084);
			aggregate_func_4300(Var1);
			if (bVar0)
			{
				if (!aggregate_func_6051(uParam0, Var1.f_2, Var1.f_3, -1, 1, 1))
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if ((aggregate_func_4275(uParam0) && !aggregate_func_4275(uParam0)) && !GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		if (!aggregate_func_6997() && PED::_0xA0BC8FAED8CFEB3C(aggregate_func_3180(uParam0)))
		{
			if (aggregate_func_951(uParam0))
			{
				if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
				aggregate_func_433(&(uParam0->f_167));
			}
		}
	}
	if (aggregate_func_4275(uParam0) && aggregate_func_4275(uParam0))
	{
		if (aggregate_func_105(uParam0) && !aggregate_func_4734(4194304))
		{
		}
		else
		{
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
			GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
			aggregate_func_1201(uParam0);
			if (uParam0->f_3 == 6)
			{
				aggregate_func_8078(uParam0, 172);
			}
			return false;
		}
	}
	return true;
}

bool func_1195(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	bool bVar5;
	bool bVar6;

	if (!aggregate_func_4275(uParam0))
	{
		GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
		bVar0 = true;
		Var1 = { aggregate_func_6000(&(uParam0->f_167.f_4)) };
		bVar5 = -1;
		bVar6 = joaat("root");
		bVar5 = Var1.f_2;
		bVar6 = Var1.f_3;
		bVar0 = false;
		aggregate_func_1223(uParam0, aggregate_func_3316(&(uParam0->f_167.f_1778)));
		if (func_1040(uParam0, bVar5, bVar6, 1))
		{
			aggregate_func_8078(uParam0, 173);
			aggregate_func_4358(uParam0, 326624);
			aggregate_func_4358(uParam0, 326691);
			aggregate_func_4358(uParam0, 326864);
			if (bVar0)
			{
				if (!aggregate_func_6051(uParam0, Var1.f_2, Var1.f_3, -1, 1, 1))
				{
					return false;
				}
			}
		}
		else
		{
			return false;
		}
	}
	if ((aggregate_func_4275(uParam0) && !aggregate_func_4275(uParam0)) && !GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		if (aggregate_func_951(uParam0))
		{
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
			aggregate_func_433(&(uParam0->f_167));
		}
	}
	if (aggregate_func_4275(uParam0) && aggregate_func_4275(uParam0))
	{
		if (aggregate_func_105(uParam0))
		{
			aggregate_func_2562(uParam0);
		}
		else
		{
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
			GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
			aggregate_func_1201(uParam0);
			return false;
		}
	}
	return true;
}

void func_1239(var uParam0)
{
	float fVar0;
	vector3 vVar1;

	if (aggregate_func_4268(uParam0->f_167.f_1757))
	{
	}
	else
	{
		fVar0 = (uParam0->f_167.f_1760 + 180f);
		if (fVar0 > 360f)
		{
			fVar0 = (fVar0 - 360f);
		}
		vVar1 = { 0f, 0f, fVar0 };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_2515, uParam0->f_167.f_1757, vVar1, 0);
	}
}

int func_1241(bool bParam0)
{
	struct<2> Var0;
	int iVar7;
	int iVar8;

	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		iVar8 = 0;
		return iVar8;
	}
	if (Var0.f_1 == -999503751)
	{
		iVar8 = func_1852(1, 6);
		return iVar8;
	}
	iVar7 = aggregate_func_3065(Var0.f_1);
	switch (iVar7)
	{
		case -1944638739:
			iVar8 = 15;
			return iVar8;
		case 1900541263:
			iVar8 = 15;
			return iVar8;
		case 1145151482:
			iVar8 = func_1852(7, 8);
			return iVar8;
		case 1108822547:
			iVar8 = 14;
			return iVar8;
		case -1197751823:
			iVar8 = func_1852(11, 13);
			return iVar8;
		case 788010710:
			iVar8 = func_1852(9, 10);
			return iVar8;
		case 1958421083:
			iVar8 = func_1852(9, 10);
			return iVar8;
		default:
			break;
	}
	iVar8 = func_1852(1, 6);
	return iVar8;
	iVar8 = 0;
	return iVar8;
}

char* func_1242(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "PB_CHECKOUT_SIDE";
		case 2:
			return "PB_CHECKOUT_V1";
		case 3:
			return "PB_CHECKOUT_V2";
		case 4:
			return "PB_CHECKOUT_V3";
		case 5:
			return "PB_NEW_LOOK_V1";
		case 6:
			return "PB_NEW_LOOK_V2";
		case 7:
			return "PB_GLOVES_V1";
		case 8:
			return "PB_GLOVES_V2";
		case 9:
			return "PB_PANTS_V1";
		case 10:
			return "PB_PANTS_V2";
		case 15:
			return "PB_BOOTS";
		case 14:
			return "PB_HAT";
		case 11:
			return "PB_ADJUST";
		case 12:
			return "PB_SHOULDER_ROLL_V1";
		case 13:
			return "PB_SHOULDER_ROLL_V2";
		case 16:
			return "PB_ENTER_LEFT";
		case 17:
			return "PB_ENTER_RIGHT";
		case 18:
			return "PB_ENTER_DOOR";
		case 19:
			return "PB_IDLE";
		default:
			break;
	}
	return "";
}

bool func_1243(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam6->f_2515, 0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam6->f_2515, sParam0))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam6->f_2515, sParam0))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam6->f_2515, sParam0);
		}
		return false;
	}
	if (ANIMSCENE::_0x1F0E401031E20146(uParam6->f_2515, sParam0))
	{
		return true;
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam6->f_2515, sParam0, true);
	return true;
}

Vector3 func_1247(var uParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { uParam0->f_167.f_1757 };
	if (uParam0->f_4 == 69)
	{
		if (iParam1 == -110352861)
		{
			vVar0 = { vVar0 + Vector(0f, 0.15f, 0.15f) };
		}
		else if (iParam1 == 523585988)
		{
			vVar0 = { vVar0 + Vector(0f, -0.2f, 0.2f) };
		}
		else if ((iParam1 == -773960361 || iParam1 == 796723886) || iParam1 == 1307697675)
		{
			vVar0 = { vVar0 + Vector(0f, -0.1f, 0.1f) };
		}
	}
	if (uParam0->f_4 == 84)
	{
		if (iParam1 == -110352861 || iParam1 == 1307697675)
		{
			vVar0 = { vVar0 + Vector(0f, -0.15f, 0.05f) };
		}
		else if (iParam1 == 523585988)
		{
			vVar0 = { vVar0 + Vector(0f, -0.4f, 0.15f) };
		}
		else if (iParam1 == -773960361 || iParam1 == 796723886)
		{
			vVar0 = { vVar0 + Vector(0f, -0.35f, 0.05f) };
		}
	}
	if (uParam0->f_4 == 19)
	{
		if (((iParam1 == -2121881035 || iParam1 == -2106738342) || iParam1 == -773960361) || iParam1 == 796723886)
		{
			vVar0 = { vVar0 + Vector(0f, -0.1f, 0.2f) };
		}
		else if (iParam1 == -110352861 || iParam1 == 803206066)
		{
			vVar0 = { vVar0 + Vector(0f, -0.2f, 0.3f) };
		}
	}
	if (uParam0->f_4 == 33)
	{
		if (iParam1 == 523585988)
		{
			vVar0 = { vVar0 + Vector(0f, 0f, -0.25f) };
		}
		else if (iParam1 == -773960361 || iParam1 == 796723886)
		{
			vVar0 = { vVar0 + Vector(0f, 0.05f, -0.15f) };
		}
	}
	if (uParam0->f_4 == 108)
	{
		if (iParam1 == -1118911493)
		{
			vVar0 = { vVar0 + Vector(0f, 0.15f, 0f) };
		}
		else if (iParam1 == -110352861)
		{
			vVar0 = { vVar0 + Vector(0f, 0.25f, 0f) };
		}
		else if (iParam1 == 523585988 || iParam1 == 1307697675)
		{
			vVar0 = { vVar0 + Vector(0f, 0.35f, 0.2f) };
		}
		else if (iParam1 == -2121881035)
		{
			vVar0 = { vVar0 + Vector(0f, 0.3f, -0.1f) };
		}
		else if (iParam1 == -773960361 || iParam1 == 796723886)
		{
			vVar0 = { vVar0 + Vector(0f, 0.2f, 0.1f) };
		}
	}
	if (uParam0->f_4 == 102)
	{
		if (((((iParam1 == -1118911493 || iParam1 == -2106738342) || iParam1 == 523585988) || iParam1 == 1879954891) || iParam1 == -773960361) || iParam1 == 796723886)
		{
			vVar0 = { vVar0 + Vector(0f, -0.25f, 0f) };
		}
		else if (iParam1 == -110352861)
		{
			vVar0 = { vVar0 + Vector(0f, -0.4f, 0f) };
		}
	}
	if (uParam0->f_4 == 99)
	{
		if (((iParam1 == -773960361 || iParam1 == 796723886) || iParam1 == 523585988) || iParam1 == 1307697675)
		{
			vVar0 = { vVar0 + Vector(0f, 0.05f, -0.1f) };
		}
	}
	return vVar0;
}

int func_1249(bool bParam0)
{
	if (!aggregate_func_4980(bParam0))
	{
		return -1;
	}
	return aggregate_func_5106(aggregate_func_5947(aggregate_func_2827(bParam0)));
}

bool func_1562(var uParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
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
							if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar26, &iVar2))
							{
								Var5 = { aggregate_func_4303(0, iVar2, -1591664384, -1591664384, 0, 0, 0) };
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
			bVar29 = aggregate_func_6503(uParam0);
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
									bVar52 = aggregate_func_6134(uParam0, bVar51);
									if (func_1562(uParam0, bVar51, bVar52))
									{
										bVar0 = true;
									}
									else
									{
										iVar50++;
									}
									ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar49);
									Jump @682; //curOff = 670
									bVar27++;
									Jump @709; //curOff = 682
									bVar53 = aggregate_func_4275(uParam0);
									bVar0 = aggregate_func_5785(bVar53, bParam1, aggregate_func_4275(uParam0));
									Jump @1246; //curOff = 709
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
										bVar56 = aggregate_func_6503(uParam0);
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
																bVar79 = aggregate_func_6134(uParam0, bVar78);
																if (func_1562(uParam0, bVar78, bVar79))
																{
																	bVar0 = true;
																}
																else
																{
																	iVar77++;
																}
																ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar76);
																Jump @1117; //curOff = 1105
																bVar54++;
																Jump @1246; //curOff = 1117
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

int func_1852(int iParam0, int iParam1)
{
	return MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1 + 1);
}

bool func_2232(var uParam0, bool bParam1, bool bParam2)
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
	bVar2 = func_1562(uParam0, bParam1, bVar0);
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
						Jump @1004; //curOff = 544
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
								Jump @1004; //curOff = 626
								bVar2 = false;
								bVar1 = (bVar3 && bVar4);
								Jump @1004; //curOff = 643
								if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
								{
								}
								else
								{
									if (aggregate_func_5852(uParam0->f_3))
									{
										bVar1 = aggregate_func_964(iVar9, bParam1, &uVar10);
									}
									Jump @1004; //curOff = 694
									aggregate_func_5810(uParam0->f_3, &bVar13);
									iVar14 = aggregate_func_5812(uParam0->f_3);
									bVar1 = ((!aggregate_func_2074(bParam1, bVar13, 1) && bVar4) && aggregate_func_5539(bParam1, bVar13, 0, 1, iVar14));
									Jump @1004; //curOff = 753
									bVar1 = ((aggregate_func_4574(aggregate_func_7063(bParam1, 0)) && bVar4) && !aggregate_func_5544(bParam1, 0));
									Jump @1004; //curOff = 789
									bVar1 = ((bVar3 && bVar4) && aggregate_func_5808());
									Jump @1004; //curOff = 812
									bVar1 = ((bVar3 && bVar4) && aggregate_func_5917());
									Jump @1004; //curOff = 835
									bVar1 = ((bVar3 || func_1562(uParam0, bParam1, bVar0)) && bVar4);
									Jump @1004; //curOff = 865
									bVar1 = ((bVar3 && bVar4) && !aggregate_func_5544(bParam1, 0));
									Jump @1004; //curOff = 893
									if (aggregate_func_5872(bParam1))
									{
										bVar6 = bVar2;
									}
									bVar1 = (aggregate_func_5544(bParam1, 0) || (bVar3 && bVar4));
									Jump @1004; //curOff = 933
									bVar7 = aggregate_func_5693(aggregate_func_4615(uParam0));
									bVar1 = !bVar7;
									Jump @1004; //curOff = 953
									bVar8 = aggregate_func_5694(aggregate_func_4615(uParam0));
									bVar1 = !bVar8;
									Jump @1004; //curOff = 973
									bVar1 = true;
									Jump @1004; //curOff = 979
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

int func_3286()
{
	struct<5> Var0;
	struct<4> Var5;
	bool bVar9;
	int iVar10;
	bool bVar11;
	bool bVar14;
	bool bVar15;
	struct<4> Var16;
	bool bVar20;
	bool bVar21;

	Var0 = { aggregate_func_304(856287005, 0, 0) };
	Var5 = { aggregate_func_2828(856287005, Var0, Var0.f_4, 0) };
	iVar10 = aggregate_func_2827(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, false, &bVar11))
	{
		bVar14 = aggregate_func_7074(Var5, -415648720, 0, -1);
	}
	if (!aggregate_func_2823(bVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	bVar20 = aggregate_func_3302(856287005);
	bVar9 = false;
	while (bVar9 < bVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, bVar9, &bVar11))
		{
			bVar15 = false;
			bVar21 = aggregate_func_7074(Var5, bVar11, 0, -1);
			if (!aggregate_func_2823(bVar21, 0))
			{
				if (bVar11 == 325139909)
				{
					if (((aggregate_func_5474(bVar14) || aggregate_func_5478(bVar14)) || aggregate_func_5479(bVar14)) || aggregate_func_5480(bVar14))
					{
					}
					else
					{
						Jump @308; //curOff = 220
						if (bVar11 == -1189569496)
						{
							if (aggregate_func_5479(bVar14) || aggregate_func_5480(bVar14))
							{
							}
							else
							{
								Jump @308; //curOff = 257
								if (bVar11 == -997150586)
								{
									if (aggregate_func_5480(bVar14))
									{
									}
									else
									{
										Jump @308; //curOff = 282
										if (bVar11 == 986998820)
										{
											if (aggregate_func_5474(bVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @348; //curOff = 311
												if (bVar11 == -1189569496)
												{
													if (!aggregate_func_5474(bVar14) && aggregate_func_5481(bVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (aggregate_func_5971(bVar11, &Var16, 1))
													{
														if (!aggregate_func_2072(Var16, 1))
														{
														}
													}
												}
											}
											bVar9++;
											return 1;
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

