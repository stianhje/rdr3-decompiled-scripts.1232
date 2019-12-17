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
	struct<7> Local_21 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_28 = -1;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == shop_bait.__EntryFunction__

void func_44(var uParam0)
{
	uParam0->f_2421.f_21 = 1;
	uParam0->f_2421.f_22 = 61680;
	uParam0->f_2421.f_33 = 1;
	uParam0->f_2421.f_34 = 62037;
	uParam0->f_2421.f_29 = 1;
	uParam0->f_2421.f_30 = 62167;
	uParam0->f_2421.f_35 = 1;
	uParam0->f_2421.f_36 = 62506;
	uParam0->f_2421.f_27 = 1;
	uParam0->f_2421.f_28 = 63079;
	uParam0->f_2421.f_37 = 1;
	uParam0->f_2421.f_38 = 63127;
}

void func_90(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		return;
	}
	if (!aggregate.annesburg.func_121(uParam0->f_2371.f_11) && Local_21.f_7 == -1)
	{
		Local_21.f_7 = aggregate.long_update.func_68(uParam0->f_19, 51, uParam0->f_2371.f_11, -1);
	}
}

void func_122(var uParam0)
{
	GRAPHICS::_0x37D7BDBA89F13959("CamTransitionBlink");
	func_451(uParam0);
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
		if (!func_728(&(uParam0->f_4), iParam1, iParam2, aggregate.shop_bait.func_725(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_729(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate.camera_item.func_77(&(uParam0->f_4), 137858);
	aggregate.camera_item.func_77(&(uParam0->f_4), 137895);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 137923);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 138458);
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

void func_332(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() != -1)
	{
		aggregate.shop_bait.func_749(uParam0, 0, 139263, 139272, 139281, 139823);
		aggregate.shop_bait.func_42(uParam0, 0, 32);
	}
	aggregate.shop_bait.func_749(uParam0, 1, 139263, 139272, 139281, 139823);
	if (uParam0->f_3 != 6 && uParam0->f_3 != 7)
	{
		func_752(uParam0, 2);
	}
	aggregate.shop_bait.func_42(uParam0, 1, 32);
	aggregate.shop_bait.func_42(uParam0, 2, 32);
	aggregate.shop_bait.func_42(uParam0, 3, 32);
}

int func_338(var uParam0)
{
	if (uParam0->f_5 == 2)
	{
		if (!Local_21.f_5)
		{
			if (aggregate.fm_mission_controller.func_6305())
			{
				if (!aggregate.fme_animal_tagging.func_1676(Global_1051387->f_45))
				{
					uParam0->f_44 = func_763(36);
					aggregate.saloon_dining.func_463(uParam0, uParam0->f_44);
					uParam0->f_51 = 0;
					aggregate.barcustomer_interaction.func_43(&(uParam0->f_71));
					aggregate.barcustomer_interaction.func_43(&(uParam0->f_68));
					Local_21.f_5 = 1;
					return 1;
				}
			}
			if (Global_1051387->f_59 != 0 && aggregate.mp_intro.func_1856(Global_1051387->f_59))
			{
				uParam0->f_44 = func_763(33);
				aggregate.saloon_dining.func_463(uParam0, uParam0->f_44);
				uParam0->f_51 = 0;
				aggregate.barcustomer_interaction.func_43(&(uParam0->f_71));
				aggregate.barcustomer_interaction.func_43(&(uParam0->f_68));
				Local_21.f_5 = 1;
				return 1;
			}
		}
	}
	if (aggregate.long_update.func_581(*uParam0))
	{
		if (uParam0->f_5 == 0)
		{
			Local_21.f_5 = 0;
			Global_1051387->f_58 = 0;
			if (Global_1051387->f_44)
			{
				uParam0->f_44 = func_763(32);
				aggregate.saloon_dining.func_463(uParam0, uParam0->f_44);
				uParam0->f_51 = 0;
				Global_1051387->f_44 = 0;
				return 1;
			}
			if (uParam0->f_6 == 2 && Local_21.f_6 != 0)
			{
				if (aggregate.long_update.func_361(uParam0))
				{
					uParam0->f_51 = 0;
					Local_21.f_6 = 0;
					uParam0->f_6 = 0;
				}
				else
				{
					if (aggregate.saloon_dining.func_297(uParam0->f_4))
					{
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0->f_4, 0);
					}
					uParam0->f_44 = func_763(25);
					aggregate.saloon_dining.func_463(uParam0, uParam0->f_44);
					uParam0->f_51 = 0;
					Local_21.f_6 = 0;
					uParam0->f_6 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_339(var uParam0)
{
	float fVar0;

	if (PED::_0xFB4891BD7578CDC1(Global_35, -814227353) || PED::_0xFB4891BD7578CDC1(Global_35, -814227353))
	{
		uParam0->f_44 = func_763(43);
		return 1;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
	{
		fVar0 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (fVar0 < 10f)
		{
			uParam0->f_44 = func_763(41);
			return 1;
		}
		else if (fVar0 > 25f)
		{
			uParam0->f_44 = func_763(42);
			return 1;
		}
	}
	return 0;
}

int func_340(var uParam0)
{
	if (Global_1915170->f_21962)
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) > 50)
		{
			uParam0->f_44 = func_763(34);
		}
		else
		{
			uParam0->f_44 = func_763(35);
		}
		return 1;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			uParam0->f_44 = func_763(26);
			return 1;
		case 1:
			if (PED::IS_PED_MALE(Global_35))
			{
				uParam0->f_44 = func_763(27);
			}
			else
			{
				uParam0->f_44 = func_763(28);
			}
			return 1;
		case 2:
			if (((((((aggregate.bandana.func_10(uParam0->f_13) == 1769055947 || aggregate.bandana.func_10(uParam0->f_13) == -839140560) || aggregate.bandana.func_10(uParam0->f_13) == -1719060085) || aggregate.bandana.func_10(uParam0->f_13) == -163032984) || aggregate.bandana.func_10(uParam0->f_13) == 502936876) || aggregate.bandana.func_10(uParam0->f_13) == -923693316) || aggregate.bandana.func_10(uParam0->f_13) == 2016058810) || aggregate.bandana.func_10(uParam0->f_13) == 1282123855)
			{
				uParam0->f_44 = func_763(38);
				return 1;
			}
			else
			{
				uParam0->f_44 = func_763(39);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_341(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (aggregate.saloon_dining.func_297(uParam0->f_4))
	{
		return 0;
	}
	iVar0 = aggregate.bandana.func_10(bParam1);
	iVar1 = 0;
	Local_21.f_6 = iVar0;
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			if (uParam0->f_5 == 0)
			{
				uParam0->f_44 = func_763(23);
				iVar1 = 1;
			}
			else if (iVar0 != -999503751)
			{
				if (iVar0 == 688587926 && aggregate.fme_escaped_convicts.func_724())
				{
					uParam0->f_44 = func_763(18);
					iVar1 = 1;
				}
				else
				{
					uParam0->f_44 = func_763(17);
					iVar1 = 1;
				}
			}
			else if (aggregate.fme_escaped_convicts.func_724())
			{
				uParam0->f_44 = func_763(0);
				iVar1 = 1;
			}
			break;
		case 1:
			switch (iVar0)
			{
				case -999503751:
					if (aggregate.fme_escaped_convicts.func_724())
					{
						uParam0->f_44 = func_763(3);
					}
					else if (aggregate.fme_escaped_convicts.func_724())
					{
						uParam0->f_44 = func_763(1);
					}
					else
					{
						switch (aggregate.annesburg.func_122())
						{
							case 5:
								uParam0->f_44 = func_763(30);
								break;
							case 40:
								uParam0->f_44 = func_763(29);
								break;
						}
					}
					iVar1 = 1;
					break;
				case 502936876:
					uParam0->f_44 = func_763(13);
					iVar1 = 1;
					break;
				case 2047428024:
					uParam0->f_44 = func_763(7);
					iVar1 = 1;
					break;
				case 688587926:
					uParam0->f_44 = func_763(4);
					iVar1 = 1;
					break;
				case 684307653:
					uParam0->f_44 = func_763(10);
					iVar1 = 1;
					break;
				case 1868067663:
					if (aggregate.fme_escaped_convicts.func_724())
					{
						uParam0->f_44 = func_763(6);
					}
					else
					{
						uParam0->f_44 = func_763(1);
					}
					iVar1 = 1;
					break;
				case -2061583405:
					uParam0->f_44 = func_763(11);
					iVar1 = 1;
					break;
				case 698653232:
					uParam0->f_44 = func_763(5);
					iVar1 = 1;
					break;
				case 1769055947:
					uParam0->f_44 = func_763(9);
					iVar1 = 1;
					break;
				case -839140560:
					uParam0->f_44 = func_763(12);
					iVar1 = 1;
					break;
				case 1882579758:
					uParam0->f_44 = func_763(14);
					iVar1 = 1;
					break;
				case 1508306587:
					uParam0->f_44 = func_763(15);
					iVar1 = 1;
					break;
			}
			break;
		case 2:
			if (uParam0->f_5 == 2)
			{
				uParam0->f_44 = func_763(20);
				iVar1 = 1;
			}
			break;
		default:
			break;
	}
	return iVar1;
}

int func_342(var uParam0)
{
	if (!aggregate.long_update.func_581(*uParam0) && MISC::GET_RANDOM_INT_IN_RANGE(0, 8) == 0)
	{
		uParam0->f_44 = func_763(24);
		return 1;
	}
	return 0;
}

int func_343(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (aggregate.fme_escaped_convicts.func_724())
		{
			uParam0->f_44 = "SALES_PITCH_LATEST_ARRIVALS";
			return 1;
		}
	}
	return 0;
}

void func_357(var uParam0)
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

int func_404(var uParam0)
{
	GRAPHICS::_0x5199405EABFBD7F0("CamTransitionBlink");
	return 1;
}

int func_405(var uParam0)
{
	if (GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransitionBlink"))
	{
		return 0;
	}
	return func_806(uParam0);
}

void func_406(var uParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_167.f_1778.f_30))
	{
		return;
	}
	if (aggregate.annesburg.func_121(Local_21))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_167.f_1778.f_30);
		Local_21 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 1.5f, 0f, 0f) };
	}
	func_807(uParam0);
}

void func_407(var uParam0)
{
	int iVar0;

	if (uParam0->f_2421.f_5 == 2)
	{
		if (aggregate.annesburg.func_121(uParam0->f_2421.f_46))
		{
			func_808(&(uParam0->f_2421), Local_21);
			if (aggregate.saloon_dining.func_297(uParam0->f_2421.f_4))
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uParam0->f_2421.f_4, 0);
			}
		}
	}
	else if (!aggregate.annesburg.func_121(uParam0->f_2421.f_46))
	{
		func_809(&(uParam0->f_2421));
		if (aggregate.saloon_dining.func_297(uParam0->f_2421.f_4))
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
				aggregate.barcustomer_interaction.func_43(&(uParam0->f_2421.f_77));
				Local_21.f_4 = 1;
			}
			func_810(uParam0);
			break;
		case 4:
			uParam0->f_2421.f_18 = Local_21.f_3;
			Local_21.f_4 = 0;
			break;
	}
	iVar0 = aggregate.bandana.func_10(Global_1051387->f_59);
	switch (iVar0)
	{
		case -2101244071:
		case -1070622585:
		case -1057349201:
		case 874188557:
			if (!aggregate.saloon_dining.func_291(uParam0->f_4))
			{
				func_811(uParam0->f_4, 1);
			}
			break;
		case 0:
			break;
		default:
			if (aggregate.saloon_dining.func_291(uParam0->f_4))
			{
				func_811(uParam0->f_4, 0);
			}
			break;
	}
}

void func_433(var uParam0)
{
	aggregate.fme_animal_tagging.func_847(&(Global_1951131->f_1657));
	aggregate.net_camp_manager.func_17(&(Local_21.f_7), 0);
}

void func_451(var uParam0)
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

void func_472(var uParam0)
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

void func_698(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate.doc_book.func_307() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1046(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate.mp_intro.func_1329(uParam0, 196100);
			aggregate.mp_intro.func_1329(uParam0, 197021);
			aggregate.mp_intro.func_1329(uParam0, 197621);
			aggregate.mp_intro.func_1329(uParam0, 197915);
			aggregate.mp_intro.func_1329(uParam0, 198118);
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
	if (!aggregate.mp_intro.func_1707(bParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1287 = 1;
	uParam0->f_1288 = bParam3;
	uParam0->f_1279 = 220733;
	uParam0->f_1280 = 220742;
	uParam0->f_1281 = 220751;
	uParam0->f_1282 = 220751;
	uParam0->f_222 = iParam5;
	aggregate.coffee_drinking.func_5(uParam0, 0);
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
	if (!aggregate.mp_intro.func_1705(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1279 = 220733;
	uParam0->f_1280 = 220742;
	uParam0->f_1281 = 220751;
	uParam0->f_1282 = 220751;
	uParam0->f_222 = iParam4;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

int func_752(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2 || iParam1 == 12)
	{
		return aggregate.shop_bait.func_749(uParam0, iParam1, 222537, 222568, 222655, 224253);
	}
	else
	{
		iVar0 = 0;
		if (!aggregate.mp_intro.func_2206(iParam1, &iVar0))
		{
			return 0;
		}
		return aggregate.shop_bait.func_749(uParam0, iParam1, 224463, 198228, 129034, 30756);
	}
	return 0;
}

char* func_763(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SALES_PITCH_CLOTHING";
		case 1:
			return "SALES_PITCH_BROWSING_LUXURY_CLOTHING";
		case 2:
			return "SALES_PITCH_LATEST_ARRIVALS";
		case 3:
			return "SALES_PITCH_OUTFIT";
		case 4:
			return "SALES_PITCH_SHIRT";
		case 5:
			return "SALES_PITCH_VEST";
		case 6:
			return "SALES_PITCH_COAT";
		case 7:
			return "SALES_PITCH_PANTS";
		case 8:
			return "SALES_PITCH_CHEMISE";
		case 9:
			return "SALES_PITCH_CHAPS";
		case 10:
			return "SALES_PITCH_SKIRT";
		case 11:
			return "SALES_PITCH_HAT";
		case 12:
			return "SALES_PITCH_BOOTS";
		case 13:
			return "SALES_PITCH_OVERALLS";
		case 14:
			return "SALES_PITCH_UNION_SUIT";
		case 15:
			return "SALES_PITCH_ACCESSORIES";
		case 16:
			return "SALES_PITCH_TRAPPER_ITEMS";
		case 17:
			return "SUGGEST_COLOR";
		case 18:
			return "SUGGEST_FABRIC";
		case 19:
			return "CHANGE_STYLE";
		case 20:
			return "PUSH_SALE";
		case 22:
			return "ALREADY_OWNED_SUGGEST";
		case 23:
			return "TRY_IT_ON";
		case 24:
			return "TRY_IT_ON_PERSONAL";
		case 25:
			return "PASS_ON_SUGGESTION";
		case 26:
			return "LOOKING_GOOD";
		case 27:
			return "LOOKING_GOOD_MALE";
		case 28:
			return "LOOKING_GOOD_FEMALE";
		case 29:
			return "EXCLUSIVE_TO_BLACKWATER";
		case 30:
			return "EXCLUSIVE_TO_SAINT_DENIS";
		case 33:
			return "SALES_PITCH_GOLD_PREMIUM";
		case 34:
			return "GOLD_BUY_IT_NOW_DESPERATE";
		case 35:
			return "GOLD_BUY_IT_NOW_EXCEPTION";
		case 36:
			return "GOLD_BUY_IT_NOW_NOT_ENOUGH";
		case 37:
			return "CONVERT_GOLD_TO_CASH";
		case 38:
			return "SELL_ITEM_CLOTHING";
		case 39:
			return "SELL_ITEM_CLOTHING_ACCESSORY";
		case 40:
			return "USE_COUPON";
		case 41:
			return "FAREWELL_COLD_WEATHER";
		case 43:
			return "LOOKING_WEIRD_WARNING";
		case 44:
			return "PLAYER_PURCHASED_CLOTHING";
		case 42:
			return "FAREWELL_HOT_WEATHER";
		case 32:
			return "PREVIEW_UNAVAILABLE";
		default:
			break;
	}
	return "";
}

int func_806(var uParam0)
{
	switch (uParam0->f_2515.f_1)
	{
		case 0:
			if (uParam0->f_2515 == -1)
			{
				aggregate.camera_item.func_77(&(uParam0->f_2515), 2);
			}
			if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_2515))
			{
				return 0;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2515);
			aggregate.camera_item.func_77(&(uParam0->f_2515), 1);
			break;
		case 1:
			if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_2515, 1, 0))
			{
				return 0;
			}
			aggregate.camera_item.func_77(&(uParam0->f_2515), 2);
			break;
		case 2:
			return 1;
	}
	return 0;
}

void func_807(var uParam0)
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
			func_1245(uParam0);
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_2515);
			uParam0->f_2515.f_4 = 19;
			aggregate.camera_item.func_77(&(uParam0->f_2515), 6);
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
					uParam0->f_2515.f_4 = func_1247(uParam0->f_2074);
					if (uParam0->f_2515.f_4 == 0)
					{
					}
					else
					{
						aggregate.camera_item.func_77(&(uParam0->f_2515), 6);
						Jump @305; //curOff = 249
						if (ANIMSCENE::_0xCBFC7725DE6CE2E0(uParam0->f_2515, 0))
						{
							if (func_1249(func_1248(uParam0->f_2515.f_4), uParam0->f_2515, uParam0))
							{
								aggregate.camera_item.func_77(&(uParam0->f_2515), 2);
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

void func_808(var uParam0, vector3 vParam1)
{
	uParam0->f_46 = { vParam1 };
	aggregate.fishing_core.func_301(uParam0, 512);
}

void func_809(var uParam0)
{
	uParam0->f_46 = { aggregate.flow_controller.func_96() };
	aggregate.fishing_core.func_120(uParam0, 512);
}

void func_810(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!aggregate.mp_intro.func_2606(uParam0->f_3))
	{
		return;
	}
	iVar0 = aggregate.mp_intro.func_1366(uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	bVar1 = PED::GET_PED_CONFIG_FLAG(iVar0, 408, true);
	if (aggregate.fishing_core.func_34(uParam0, 16))
	{
		aggregate.fme_animal_tagging.func_1147(uParam0, 16);
		aggregate.fme_animal_tagging.func_1147(uParam0, 32);
		if (aggregate.fishing_core.func_34(uParam0, 128))
		{
			if (bVar1)
			{
				aggregate.fme_animal_tagging.func_1147(uParam0, 256);
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransitionBlink");
			}
			else
			{
				aggregate.binoculars.func_37(uParam0->f_2520.f_3, 1, 1, 1);
			}
			aggregate.fme_animal_tagging.func_1147(uParam0, 128);
		}
		if (!aggregate.fishing_core.func_34(uParam0, 256) && ((uParam0->f_2520.f_1 == 0 && !aggregate.flow_controller.func_195(uParam0->f_167.f_1757, func_1253(uParam0, uParam0->f_2520))) || !aggregate.flow_controller.func_195(func_1253(uParam0, uParam0->f_2520.f_1), func_1253(uParam0, uParam0->f_2520))))
		{
			aggregate.binoculars.func_37(uParam0->f_2520.f_3, 0, 1, 1);
			aggregate.fme_animal_tagging.func_1147(uParam0, 256);
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransitionBlink");
		}
	}
	if (aggregate.fishing_core.func_34(uParam0, 256) && MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uParam0->f_2520.f_2, NETWORK::GET_NETWORK_TIME_ACCURATE())) > 150)
	{
		aggregate.binoculars.func_37(uParam0->f_2520.f_3, 1, 1, 1);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
		aggregate.fm_deathmatch_controller.func_2189(iVar0, func_1253(uParam0, uParam0->f_2520), uParam0->f_167.f_1760, 2, 1073741824 /* Float: 2f */);
		aggregate.fme_animal_tagging.func_1147(uParam0, 256);
	}
	bVar2 = false;
	if (!aggregate.fishing_core.func_34(uParam0, 32))
	{
		aggregate.binoculars.func_37(uParam0->f_2520.f_3, 0, 1, 1);
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(uParam0->f_2520.f_2, NETWORK::GET_NETWORK_TIME_ACCURATE())) > 1000)
		{
			aggregate.fme_animal_tagging.func_1147(uParam0, 32);
			bVar2 = true;
			aggregate.binoculars.func_37(uParam0->f_2520.f_3, 1, 1, 1);
		}
	}
	if (uParam0->f_2520 != 0)
	{
		if (!aggregate.annesburg.func_217(uParam0->f_2520.f_4))
		{
			uParam0->f_2520.f_4 = aggregate.binoculars.func_24("SHOP_VIEW_EMOTE", joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 2, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate.binoculars.func_25(uParam0->f_2520.f_4, 13, 1, 1);
			aggregate.binoculars.func_25(uParam0->f_2520.f_4, 10, 1, 1);
			aggregate.binoculars.func_25(uParam0->f_2520.f_4, 14, 1, 1);
			aggregate.binoculars.func_37(uParam0->f_2520.f_4, 1, 1, 1);
			aggregate.fme_animal_tagging.func_454(uParam0->f_2520.f_4, 0, 1);
		}
		if (!aggregate.annesburg.func_217(uParam0->f_2520.f_3))
		{
			uParam0->f_2520.f_3 = aggregate.binoculars.func_24("SHOP_VIEW_EMOTE", joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
			aggregate.binoculars.func_25(uParam0->f_2520.f_3, 13, 1, 1);
			aggregate.binoculars.func_25(uParam0->f_2520.f_3, 10, 1, 1);
			aggregate.binoculars.func_25(uParam0->f_2520.f_3, 14, 1, 1);
			aggregate.binoculars.func_25(uParam0->f_2520.f_3, 19, 1, 1);
			aggregate.binoculars.func_25(uParam0->f_2520.f_3, 20, 1, 1);
			aggregate.binoculars.func_37(uParam0->f_2520.f_3, 1, 1, 1);
		}
		if (aggregate.binoculars.func_13(uParam0->f_2520.f_4, 1))
		{
			bVar2 = true;
			aggregate.fme_animal_tagging.func_1147(uParam0, 32);
		}
		if (!aggregate.fishing_core.func_34(uParam0, 64))
		{
			if (!aggregate.fishing_core.func_34(uParam0, 128) && bVar2)
			{
				if (bVar1)
				{
				}
				else
				{
					aggregate.fme_animal_tagging.func_1147(uParam0, 128);
					aggregate.fme_animal_tagging.func_300(iVar0, uParam0->f_2520, 2, 0, 1, func_1255(uParam0->f_2520));
					aggregate.binoculars.func_37(uParam0->f_2520.f_3, 0, 1, 1);
				}
			}
			else if (!bVar1)
			{
				if (aggregate.fishing_core.func_34(uParam0, 128))
				{
					aggregate.fme_animal_tagging.func_1147(uParam0, 128);
					aggregate.binoculars.func_37(uParam0->f_2520.f_3, 1, 1, 1);
				}
			}
		}
		if (!aggregate.fishing_core.func_34(uParam0, 128) && aggregate.doc_book.func_50(uParam0->f_2520.f_3, 1))
		{
			aggregate.fme_animal_tagging.func_1147(uParam0, 32);
			aggregate.fme_animal_tagging.func_1147(uParam0, 128);
			aggregate.fme_animal_tagging.func_1147(uParam0, 64);
			aggregate.fme_animal_tagging.func_300(iVar0, uParam0->f_2520, 1, 1, 1, func_1255(uParam0->f_2520));
			if (!aggregate.annesburg.func_217(uParam0->f_2520.f_5))
			{
				uParam0->f_2520.f_5 = aggregate.binoculars.func_24("EMOTE_PERFORM_ACTION", joaat("INPUT_INSPECT_ZOOM"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				aggregate.binoculars.func_25(uParam0->f_2520.f_5, 13, 1, 1);
				aggregate.binoculars.func_25(uParam0->f_2520.f_5, 10, 1, 1);
				aggregate.binoculars.func_25(uParam0->f_2520.f_5, 14, 1, 1);
				aggregate.binoculars.func_37(uParam0->f_2520.f_5, 1, 1, 1);
			}
			aggregate.mp_intro.func_1427(uParam0, 1, 0);
			aggregate.mp_intro.func_1427(uParam0, 4, 0);
			aggregate.mp_intro.func_1427(uParam0, 2, 0);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_SHOP_CHANGE_CURRENCY"), false);
		}
		else if (aggregate.fishing_core.func_34(uParam0, 64))
		{
			if (!aggregate.doc_book.func_50(uParam0->f_2520.f_3, 1))
			{
				aggregate.mp_intro.func_1427(uParam0, 1, aggregate.mp_intro.func_2035());
				aggregate.mp_intro.func_1427(uParam0, 4, aggregate.mp_intro.func_1746(uParam0, 4));
				aggregate.mp_intro.func_1427(uParam0, 2, 1);
				aggregate.fme_animal_tagging.func_1147(uParam0, 64);
				if (aggregate.annesburg.func_217(uParam0->f_2520.f_5))
				{
					aggregate.annesburg.func_218(&(uParam0->f_2520.f_5), 1, 1);
				}
				aggregate.binoculars.func_37(uParam0->f_2520.f_3, 0, 1, 1);
				TASK::_0xBDFEEB7600BCD938(iVar0);
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_SHOP_CHANGE_CURRENCY"), false);
				if (aggregate.camera_item.func_31(uParam0->f_2520.f_5, 1))
				{
					TASK::_0x6A1AF481407BF6E9(iVar0);
				}
			}
		}
	}
	else if (aggregate.annesburg.func_217(uParam0->f_2520.f_3))
	{
		aggregate.annesburg.func_218(&(uParam0->f_2520.f_3), 1, 1);
		aggregate.annesburg.func_218(&(uParam0->f_2520.f_4), 1, 1);
		aggregate.annesburg.func_218(&(uParam0->f_2520.f_5), 1, 1);
		aggregate.fm_deathmatch_controller.func_2189(iVar0, uParam0->f_167.f_1757, uParam0->f_167.f_1760, 2, 1073741824 /* Float: 2f */);
	}
}

void func_811(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!aggregate.saloon_dining.func_291(iParam0))
		{
			aggregate.aberdeenpigfarm.func_168(iParam0, 67108864);
		}
	}
	else if (aggregate.saloon_dining.func_291(iParam0))
	{
		aggregate.aberdeenpigfarm.func_169(iParam0, 67108864);
	}
}

int func_957(bool bParam0)
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
			return -1849788956;
			return -1561028528;
			return -1268368589;
			return -655694620;
			return -882128410;
			return -27217981;
			return 513863747;
			return 272520062;
			return 1115043821;
			return 434380030;
			return -1994163333;
			return 1445336445;
			return -1000181256;
			return -1601951172;
			return -1900673376;
			return -1722245291;
			return -1550994497;
			return -1654216923;
			return -956892603;
			return 2044551183;
			return 1816380636;
			return -1216565419;
			return -997045888;
			return -622430680;
			return -1279023141;
			return -1036761924;
			return -683249952;
			return 194792351;
			return -1974548202;
			return 1014738289;
			return 634486813;
			return 1408261210;
			return -768354077;
			return 1791083718;
			return 1484267571;
			return -632577068;
			return -872544455;
			return -1111430465;
			return -1351987694;
			return -803252891;
			return 2121544208;
			return -1667469728;
			return 466087145;
			return 98091275;
			return -1010615123;
			return -32097795;
			return -875834007;
			return 68797956;
			return -270885498;
			return 682069807;
			return 920726434;
			return 1379601741;
			return -245138056;
			return 115504824;
			return -1399728874;
			return -1090192900;
			return -1893000631;
			return -1583759578;
			return -204905596;
			return -974747713;
			return -701454253;
			return 678546644;
			return -1643732782;
			return -1879178047;
			return 2033604402;
			return 729201588;
			return 1695854319;
			return -2040860293;
			return 430601343;
			return 528449577;
			return 836052180;
			return 1126483827;
			return 1432546287;
			return 1721339484;
			return 1684533498;
			return 1404424086;
			return 69611632;
			return -221377088;
			return 1613326453;
			return 1307853835;
			return 2176663;
			return -292908182;
			return 1638955448;
			return 1374083621;
			return -1218075359;
			return -1516043876;
			return -726135810;
			return -458052621;
			return -926911473;
			return -1761242982;
			return -1388135148;
			return -1644486999;
			return -688485759;
			return -381735150;
			return 2046513300;
			return -1943603989;
			return -1635706465;
			return -1338786556;
			return -1434447686;
			return -675714260;
			return 249321841;
			return -1070777324;
			return 2065543650;
			return 1826887023;
			return -1810703525;
			return -1226563331;
			return -1466006414;
			return 724273546;
			return 1512859531;
			return 1266305575;
			return 1937278961;
			return 971478216;
			return 1202597973;
			return 507698559;
			return 746355186;
			return 523755373;
			return 1219798516;
			return -1568843392;
			return 1824681487;
			return 933561301;
			return -614970571;
			return -310186102;
			return 1209768883;
			return 1834280485;
			return 329528021;
			return 1778442129;
			return 805432208;
			return -25950091;
			return 922505133;
			return 120975393;
			return 426742932;
			return 2081118674;
			return -1914569345;
			return 1110533655;
			return -2005854180;
			return -1762511586;
			return -1609283862;
			return -1311675804;
			return -1952932365;
			return -1923309189;
			return -1262957735;
			return -1516622564;
			return -1741811132;
			return -1991740303;
			return 2071419087;
			return 1352008461;
			return -196656840;
			return 108848547;
			return -610365465;
			return -371774376;
			return -123352547;
			return 112125487;
			return -741695871;
			return -711024087;
			return 784454766;
			return 1114307520;
			return 2026825867;
			return 177900576;
			return 0;
		}

bool func_1046(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
	uParam0->f_2094.f_149 = 262111;
	uParam0->f_2094.f_150 = 263020;
	uParam0->f_2094.f_151 = 263816;
	uParam0->f_2094.f_152 = 263935;
	uParam0->f_2094.f_46 = 1;
	return true;
}

int func_1047(var uParam0, var uParam1)
{
	int iVar0;

	if (!aggregate.mp_intro.func_1722(uParam0))
	{
		aggregate.mp_intro.func_1723(uParam0, 4, 1945003767, 0, 0, 0);
	}
	else
	{
		aggregate.mp_intro.func_1723(uParam0, 4, 1945003767, aggregate.mp_intro.func_1724(), 1, 0);
	}
	switch (*uParam1)
	{
		case 2077448405:
			if (aggregate.bandana.func_10(uParam1->f_9) != -999503751)
			{
			}
			else
			{
				if (aggregate.mp_intro.func_1725(uParam1->f_9) && uParam1->f_9 != 491602716)
				{
					iVar0 = aggregate.dynamic_craft_scenario.func_428(uParam1->f_9);
					if ((iVar0 <= -1 || aggregate.mp_intro.func_1726() == uParam1->f_9) || !aggregate.dynamic_craft_scenario.func_366(2, iVar0))
					{
						aggregate.mp_intro.func_1723(uParam0, 4, 904671343, 0, 0, 0);
					}
					else
					{
						aggregate.mp_intro.func_1723(uParam0, 4, 904671343, 1, 1, 0);
					}
				}
				if (aggregate.mp_intro.func_1725(uParam1->f_9) && uParam1->f_9 != 491602716)
				{
					iVar0 = aggregate.dynamic_craft_scenario.func_428(uParam1->f_9);
					if (iVar0 <= -1 || !aggregate.dynamic_craft_scenario.func_366(2, iVar0))
					{
						aggregate.mp_intro.func_1723(uParam0, 3, -1503720446 /* GXTEntry: "Rename Outfit" */, 0, 0, 1);
					}
					else
					{
						aggregate.mp_intro.func_1723(uParam0, 3, -1503720446 /* GXTEntry: "Rename Outfit" */, 1, 1, 1);
					}
				}
				if (aggregate.mp_intro.func_1726() == uParam1->f_9 || aggregate.dynamic_craft_scenario.func_170(uParam1->f_9, 0))
				{
					aggregate.mp_intro.func_1723(uParam0, 2, -1208531349, 0, 0, 0);
				}
				else if (aggregate.dynamic_craft_scenario.func_162(uParam1->f_9))
				{
					aggregate.mp_intro.func_1723(uParam0, 2, -1208531349, 1, 1, 0);
				}
				else
				{
					iVar0 = aggregate.dynamic_craft_scenario.func_428(uParam1->f_9);
					if (iVar0 <= -1)
					{
						aggregate.mp_intro.func_1723(uParam0, 2, 920855044, aggregate.mp_intro.func_1728() > 0, 1, 0);
					}
					else if (uParam1->f_9 == 491602716)
					{
						if (aggregate.mp_intro.func_1726() == 491602716)
						{
							aggregate.mp_intro.func_1723(uParam0, 2, 920855044, (aggregate.mp_intro.func_1728() > 0 && aggregate.dynamic_craft_scenario.func_366(2, iVar0)), 1, 0);
						}
					}
					else
					{
						aggregate.mp_intro.func_1723(uParam0, 2, 920855044, (aggregate.mp_intro.func_1728() > 0 && aggregate.dynamic_craft_scenario.func_366(2, iVar0)), 1, 0);
					}
				}
				Jump @769; //curOff = 496
				if (aggregate.mp_intro.func_942(uParam1->f_9) || aggregate.dynamic_craft_scenario.func_170(uParam1->f_9, 0))
				{
					aggregate.mp_intro.func_1723(uParam0, 2, -1208531349, 0, 0, 0);
				}
				else if (aggregate.dynamic_craft_scenario.func_162(uParam1->f_9))
				{
					aggregate.mp_intro.func_1723(uParam0, 2, -1208531349, 1, 1, 0);
				}
				else
				{
					aggregate.mp_intro.func_1723(uParam0, 2, 920855044, aggregate.dynamic_craft_scenario.func_161(-525676072, 0), 1, 0);
				}
				Jump @769; //curOff = 597
				if (aggregate.bandana.func_75(-55206167, aggregate.bandana.func_57(1), joaat("SLOTID_PROGRESSION"), 1, 0, 0) >= 5)
				{
					if (aggregate.bandana.func_10(uParam1->f_9) == -2061583405)
					{
						if (aggregate.dynamic_craft_scenario.func_170(uParam1->f_9, 0))
						{
							aggregate.mp_intro.func_1723(uParam0, 2, -1208531349, 0, 0, 0);
						}
						else if (aggregate.dynamic_craft_scenario.func_162(uParam1->f_9))
						{
							aggregate.mp_intro.func_1723(uParam0, 2, -1208531349, uParam1->f_9 != aggregate.fm_mission_controller.func_7586(1108822547), 1, 0);
						}
						else
						{
							aggregate.mp_intro.func_1723(uParam0, 2, 920855044, aggregate.dynamic_craft_scenario.func_161(-2061583405, 0), 1, 0);
						}
					}
				}
				else
				{
					aggregate.mp_intro.func_1723(uParam0, 2, 0, 0, 0, 0);
				}
				Jump @769; //curOff = 752
				aggregate.mp_intro.func_1723(uParam0, 2, 0, 0, 0, 0);
			}
			if (aggregate.bandana.func_58(uParam1->f_9) == joaat("clothing") && aggregate.mp_intro.func_1555(aggregate.bandana.func_10(uParam1->f_9)))
			{
				aggregate.mp_intro.func_1731(&(uParam0->f_2371.f_2), aggregate.bandana.func_10(uParam1->f_9), uParam0->f_2094.f_108);
			}
			else
			{
				aggregate.mp_intro.func_1732(&(uParam0->f_2371.f_2), uParam0->f_2094.f_108);
			}
			if (aggregate.mp_intro.func_1354(uParam0) == 1256151078 && !aggregate.bandana.func_47(64))
			{
				aggregate.mp_intro.func_1723(uParam0, 2, -810523886, 1, 1, 0);
			}
			return 1;
			default:
				break;
	}
}

bool func_1199(var uParam0)
{
	struct<4> Var0;
	bool bVar4;

	if (!aggregate.mp_intro.func_1426(uParam0))
	{
		Var0 = { aggregate.shop_bait.func_184(&(uParam0->f_167.f_4)) };
		if (func_1046(uParam0, Var0.f_2, Var0.f_3, 0))
		{
			aggregate.mp_intro.func_2789(uParam0, Var0);
			bVar4 = 1728382685; /* GXTEntry: "Right" */
			if (aggregate.mp_intro.func_2579(Var0, 1728382685 /* GXTEntry: "Right" */, 0) && aggregate.mp_intro.func_2579(Var0, -649335959 /* GXTEntry: "Left" */, 0))
			{
				bVar4 = -649335959; /* GXTEntry: "Left" */
			}
			aggregate.mp_intro.func_1917(uParam0, bVar4);
			aggregate.shop_doctor.func_1735(uParam0, 172);
			aggregate.mp_intro.func_1329(uParam0, 325584);
			aggregate.mp_intro.func_1329(uParam0, 325788);
			aggregate.mp_intro.func_1329(uParam0, 325898);
			aggregate.binoculars.func_17(1);
		}
		else
		{
			return false;
		}
	}
	if (aggregate.mp_intro.func_1426(uParam0) && !aggregate.mp_intro.func_1426(uParam0))
	{
		if (aggregate.mp_intro.func_1341(uParam0))
		{
		}
	}
	if (aggregate.mp_intro.func_1426(uParam0) && aggregate.mp_intro.func_1426(uParam0))
	{
		if (aggregate.net_camp.func_812(uParam0))
		{
		}
		else
		{
			aggregate.mp_intro.func_599(uParam0);
			return false;
		}
	}
	return true;
}

bool func_1200(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	bool bVar5;
	bool bVar6;
	bool bVar7;

	if (!aggregate.mp_intro.func_1426(uParam0))
	{
		GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
		bVar0 = true;
		Var1 = { aggregate.shop_bait.func_184(&(uParam0->f_167.f_4)) };
		bVar5 = -1;
		bVar6 = joaat("root");
		bVar5 = Var1.f_2;
		bVar6 = Var1.f_3;
		bVar0 = false;
		aggregate.mp_intro.func_1340(uParam0, aggregate.mp_intro.func_1339(&(uParam0->f_167.f_1778)));
		if (aggregate.mp_intro.func_2584(uParam0, bVar5, bVar6, &bVar7))
		{
			aggregate.mp_intro.func_2714(uParam0, bVar7);
			if (CAM::DOES_CAM_EXIST(uParam0->f_167.f_1778.f_28))
			{
				aggregate.mp_intro.func_1731(&(uParam0->f_167.f_1778.f_28), aggregate.bandana.func_10(bVar7), aggregate.mp_intro.func_1366(uParam0));
			}
		}
		if (func_1046(uParam0, bVar5, bVar6, 1))
		{
			aggregate.mp_intro.func_1425(uParam0);
			aggregate.shop_doctor.func_1735(uParam0, 173);
			aggregate.mp_intro.func_1329(uParam0, 326603);
			aggregate.mp_intro.func_1329(uParam0, 326757);
			aggregate.mp_intro.func_1329(uParam0, 326970);
			aggregate.aberdeenpigfarm.func_181(Var1);
			if (bVar0)
			{
				if (!aggregate.net_camp.func_1094(uParam0, Var1.f_2, Var1.f_3, -1, 1, 1))
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
	if ((aggregate.mp_intro.func_1426(uParam0) && !aggregate.mp_intro.func_1426(uParam0)) && !GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		if (!aggregate.bandana.func_16() && PED::_0xA0BC8FAED8CFEB3C(aggregate.mp_intro.func_1366(uParam0)))
		{
			if (aggregate.mp_intro.func_1341(uParam0))
			{
				if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
				aggregate.shop_doctor.func_1747(&(uParam0->f_167));
			}
		}
	}
	if (aggregate.mp_intro.func_1426(uParam0) && aggregate.mp_intro.func_1426(uParam0))
	{
		if (aggregate.net_camp.func_812(uParam0) && !aggregate.bandana.func_47(4194304))
		{
		}
		else
		{
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
			GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
			aggregate.mp_intro.func_599(uParam0);
			if (uParam0->f_3 == 6)
			{
				aggregate.shop_doctor.func_1735(uParam0, 172);
			}
			return false;
		}
	}
	return true;
}

bool func_1201(var uParam0)
{
	bool bVar0;
	struct<4> Var1;
	bool bVar5;
	bool bVar6;

	if (!aggregate.mp_intro.func_1426(uParam0))
	{
		GRAPHICS::_0x5199405EABFBD7F0("CamTransition01");
		bVar0 = true;
		Var1 = { aggregate.shop_bait.func_184(&(uParam0->f_167.f_4)) };
		bVar5 = -1;
		bVar6 = joaat("root");
		bVar5 = Var1.f_2;
		bVar6 = Var1.f_3;
		bVar0 = false;
		aggregate.mp_intro.func_1340(uParam0, aggregate.mp_intro.func_1339(&(uParam0->f_167.f_1778)));
		if (func_1046(uParam0, bVar5, bVar6, 1))
		{
			aggregate.shop_doctor.func_1735(uParam0, 173);
			aggregate.mp_intro.func_1329(uParam0, 327510);
			aggregate.mp_intro.func_1329(uParam0, 327577);
			aggregate.mp_intro.func_1329(uParam0, 327752);
			if (bVar0)
			{
				if (!aggregate.net_camp.func_1094(uParam0, Var1.f_2, Var1.f_3, -1, 1, 1))
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
	if ((aggregate.mp_intro.func_1426(uParam0) && !aggregate.mp_intro.func_1426(uParam0)) && !GRAPHICS::_0xBF2DD155B2ADCD0A("CamTransition01"))
	{
		if (aggregate.mp_intro.func_1341(uParam0))
		{
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
			aggregate.shop_doctor.func_1747(&(uParam0->f_167));
		}
	}
	if (aggregate.mp_intro.func_1426(uParam0) && aggregate.mp_intro.func_1426(uParam0))
	{
		if (aggregate.net_camp.func_812(uParam0))
		{
			aggregate.shop_doctor.func_1751(uParam0);
		}
		else
		{
			if (!CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
			}
			GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
			aggregate.mp_intro.func_599(uParam0);
			return false;
		}
	}
	return true;
}

void func_1245(var uParam0)
{
	float fVar0;
	vector3 vVar1;

	if (aggregate.annesburg.func_121(uParam0->f_167.f_1757))
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

int func_1247(bool bParam0)
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
		iVar8 = func_1857(1, 6);
		return iVar8;
	}
	iVar7 = aggregate.bandana.func_48(Var0.f_1);
	switch (iVar7)
	{
		case -1944638739:
			iVar8 = 15;
			return iVar8;
		case 1900541263:
			iVar8 = 15;
			return iVar8;
		case 1145151482:
			iVar8 = func_1857(7, 8);
			return iVar8;
		case 1108822547:
			iVar8 = 14;
			return iVar8;
		case -1197751823:
			iVar8 = func_1857(11, 13);
			return iVar8;
		case 788010710:
			iVar8 = func_1857(9, 10);
			return iVar8;
		case 1958421083:
			iVar8 = func_1857(9, 10);
			return iVar8;
		default:
			break;
	}
	iVar8 = func_1857(1, 6);
	return iVar8;
	iVar8 = 0;
	return iVar8;
}

char* func_1248(int iParam0)
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

bool func_1249(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
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

Vector3 func_1253(var uParam0, int iParam1)
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

int func_1255(bool bParam0)
{
	if (!aggregate.fme_animal_tagging.func_547(bParam0))
	{
		return -1;
	}
	return aggregate.dynamic_craft_scenario.func_151(aggregate.mp_intro.func_3158(aggregate.bandana.func_10(bParam0)));
}

int func_1857(int iParam0, int iParam1)
{
	return MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1 + 1);
}

bool func_2237(var uParam0, bool bParam1, bool bParam2)
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
		bVar0 = aggregate.mp_intro.func_2052(uParam0, bParam1);
	}
	else
	{
		bVar0 = bParam2;
	}
	bVar1 = true;
	bVar2 = aggregate.shop_bait.func_1564(uParam0, bParam1, bVar0);
	bVar3 = aggregate.shop_bait.func_931(bParam1, aggregate.mp_intro.func_2594(bParam1), 1);
	bVar4 = !aggregate.mp_intro.func_2439(uParam0, bParam1);
	bVar6 = aggregate.net_camp.func_2189(uParam0, bParam1, bVar0, -1, -1);
	if (aggregate.role_progression.func_366(bParam1))
	{
		bVar3 = true;
		bVar4 = true;
	}
	iVar9 = aggregate.mp_intro.func_1366(uParam0);
	switch (bVar0)
	{
		case -384358143:
			bVar1 = ((bVar3 && bVar4) && !aggregate.long_update.func_603(bParam1, 0));
			break;
		case 1394581936:
			if (aggregate.fishing_core.func_34(uParam0, 32) && aggregate.mp_intro.func_1429(bParam1))
			{
				bVar3 = aggregate.fme_animal_tagging.func_1525(bParam1, 205718222);
			}
			bVar1 = ((bVar3 && bVar4) || (bVar2 && !bVar6));
			if (aggregate.mp_intro.func_2729(bParam1))
			{
				bVar1 = ((bVar3 && bVar4) || bVar2);
			}
			if (aggregate.mp_intro.func_1429(bParam1))
			{
				iVar11 = aggregate.mp_intro.func_2432(0);
				iVar12 = aggregate.mp_freemode_tutorial.func_764(0);
				if (iVar11 >= iVar12)
				{
					bVar1 = false;
				}
			}
			break;
		case -853534656:
			bVar1 = ((bVar3 && bVar4) || bVar2);
			if ((aggregate.bandana.func_10(bParam1) != -999503751 && aggregate.bandana.func_10(bParam1) != -1044137471) && aggregate.bandana.func_10(bParam1) != 884451223)
			{
				if (aggregate.mp_intro.func_2606(uParam0->f_3))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
					{
					}
					else
					{
						bVar5 = aggregate.mp_intro.func_2464(iVar9, bParam1, &uVar10);
						if (!bVar5)
						{
						}
						bVar1 = (bVar1 && bVar5);
						Jump @1005; //curOff = 546
						bVar1 = (bVar3 && bVar4);
						bVar2 = false;
						bVar5 = aggregate.mp_intro.func_2464(iVar9, bParam1, &uVar10);
						if (aggregate.mp_intro.func_2606(uParam0->f_3))
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
								Jump @1005; //curOff = 628
								bVar2 = false;
								bVar1 = (bVar3 && bVar4);
								Jump @1005; //curOff = 645
								if (!ENTITY::DOES_ENTITY_EXIST(iVar9) || ENTITY::IS_ENTITY_DEAD(iVar9))
								{
								}
								else
								{
									if (aggregate.mp_intro.func_2606(uParam0->f_3))
									{
										bVar1 = aggregate.mp_intro.func_2464(iVar9, bParam1, &uVar10);
									}
									Jump @1005; //curOff = 696
									aggregate.mp_intro.func_2466(uParam0->f_3, &bVar13);
									iVar14 = aggregate.mp_intro.func_2468(uParam0->f_3);
									bVar1 = ((!aggregate.fm_mission_controller.func_5485(bParam1, bVar13, 1) && bVar4) && aggregate.interactive_campfire.func_629(bParam1, bVar13, 0, 1, iVar14));
									Jump @1005; //curOff = 755
									bVar1 = ((aggregate.fme_animal_tagging.func_1400(aggregate.shop_bait.func_2153(bParam1, 0)) && bVar4) && !aggregate.long_update.func_603(bParam1, 0));
									Jump @1005; //curOff = 791
									bVar1 = ((bVar3 && bVar4) && aggregate.mp_intro.func_2458());
									Jump @1005; //curOff = 814
									bVar1 = ((bVar3 && bVar4) && aggregate.mp_intro.func_2944());
									Jump @1005; //curOff = 837
									bVar1 = ((bVar3 || aggregate.shop_bait.func_1564(uParam0, bParam1, bVar0)) && bVar4);
									Jump @1005; //curOff = 867
									bVar1 = ((bVar3 && bVar4) && !aggregate.long_update.func_603(bParam1, 0));
									Jump @1005; //curOff = 894
									if (aggregate.mp_intro.func_2736(bParam1))
									{
										bVar6 = bVar2;
									}
									bVar1 = (aggregate.long_update.func_603(bParam1, 0) || (bVar3 && bVar4));
									Jump @1005; //curOff = 934
									bVar7 = aggregate.mp_intro.func_1883(aggregate.mp_intro.func_1882(uParam0));
									bVar1 = !bVar7;
									Jump @1005; //curOff = 954
									bVar8 = aggregate.mp_intro.func_1885(aggregate.mp_intro.func_1882(uParam0));
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
								Stack.Push(aggregate.mp_intro.func_1354(uParam0));
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

void func_2737(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar16;
	struct<9> Var20;
	bool bVar30;
	int iVar31;
	var uVar32;
	int iVar35;

	uVar5 = 1;
	Var20 = -1;
	Var20.f_1 = -1;
	Var20.f_2 = -1;
	Var20.f_3 = -1;
	Var20.f_4 = -1;
	Var20.f_5 = -1;
	Var20.f_6 = -1;
	Var20.f_7 = -1;
	Var20.f_8 = -1;
	Var20.f_3 = aggregate.bandana.func_10(bParam1);
	iVar0 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var20, &iVar1, 1);
	if (iVar1 > 1)
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (ITEMDATABASE::_0x8750F69A720C2E41(iVar0, iVar2, &bVar3))
			{
				if ((bVar3 != bParam1 && !aggregate.bandana.func_11(bVar3, 1844906744)) && WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3))
				{
					iVar7 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ID(bVar3);
					if (iVar7 != 0)
					{
						iVar8 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iVar7, &uVar5);
						iVar4 = 0;
						while (iVar4 < iVar8)
						{
							if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iVar7, &uVar5, iVar4, &bVar16))
							{
								if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bVar16, &vVar9))
								{
									if (vVar9.z == -1013984273 || vVar9.z == 658570475)
									{
										if (!aggregate.bandana.func_11(vVar9.x, 1844906744) && WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), vVar9.x))
										{
											WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), vVar9.x);
										}
									}
								}
							}
							iVar4++;
						}
					}
				}
			}
			iVar2++;
		}
	}
	ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar0);
	WEAPON::_0x74C9090FDD1BB48E(iParam0, bParam1, iParam2, 0);
	iVar31 = aggregate.bandana.func_10(bParam1);
	iVar35 = aggregate.net_camp.func_2216(bParam1);
	bVar30 = false;
	while (bVar30 < iVar35)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar31, bVar30, &uVar32))
		{
			Var20.f_3 = -1;
			Var20 = uVar32;
			iVar0 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var20, &iVar1, 1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					if (ITEMDATABASE::_0x8750F69A720C2E41(iVar0, iVar2, &bVar3))
					{
						if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3))
						{
							WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3);
						}
					}
					iVar2++;
				}
			}
			ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar0);
		}
		bVar30++;
	}
	iVar7 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ID(bParam1);
	if (iVar7 != 0)
	{
		iVar8 = ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_COUNT(iVar7, &uVar5);
		iVar4 = 0;
		while (iVar4 < iVar8)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_BUNDLE_ITEM_INFO(iVar7, &uVar5, iVar4, &bVar16))
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bVar16, &vVar9))
				{
					if (vVar9.z == -1013984273 || vVar9.z == 658570475)
					{
						if (!aggregate.bandana.func_11(vVar9.x, 1844906744) && !WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), vVar9.x))
						{
							WEAPON::_0x74C9090FDD1BB48E(iParam0, vVar9.x, iParam2, 0);
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (aggregate.bandana.func_11(bParam1, -1644819871))
	{
		Var20.f_3 = -1;
		Var20.f_8 = 1851054657;
		Var20.f_1 = -1;
		iVar0 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var20, &iVar1, 1);
		if (iVar1 > 1)
		{
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				if (ITEMDATABASE::_0x8750F69A720C2E41(iVar0, iVar2, &bVar3))
				{
					if (WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3);
					}
				}
				iVar2++;
			}
		}
		ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar0);
	}
}

bool func_2885(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_1626(bParam0, bParam1, 0))
	{
		return false;
	}
	if (aggregate.aberdeenpigfarm.func_175(bParam2, 2))
	{
		if (aggregate.fme_animal_tagging.func_1699(bParam0, bParam1))
		{
			return false;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(bParam0))
	{
		return false;
	}
	if (aggregate.aberdeenpigfarm.func_175(bParam2, 8))
	{
		return aggregate.mp_intro.func_3601(bParam0, bParam1);
	}
	return true;
}

int func_3292()
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

	Var0 = { aggregate.bandana.func_41(856287005, 0, 0) };
	Var5 = { aggregate.bandana.func_59(856287005, Var0, Var0.f_4, 0) };
	iVar10 = aggregate.bandana.func_10(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, false, &bVar11))
	{
		bVar14 = aggregate.fm_mission_controller.func_4397(Var5, -415648720, 0, -1);
	}
	if (!aggregate.bandana.func_30(bVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	bVar20 = aggregate.net_camp.func_2216(856287005);
	bVar9 = false;
	while (bVar9 < bVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, bVar9, &bVar11))
		{
			bVar15 = false;
			bVar21 = aggregate.fm_mission_controller.func_4397(Var5, bVar11, 0, -1);
			if (!aggregate.bandana.func_30(bVar21, 0))
			{
				if (bVar11 == 325139909)
				{
					if (((aggregate.interactive_campfire.func_415(bVar14) || aggregate.interactive_campfire.func_640(bVar14)) || aggregate.interactive_campfire.func_642(bVar14)) || aggregate.interactive_campfire.func_643(bVar14))
					{
					}
					else
					{
						Jump @308; //curOff = 220
						if (bVar11 == -1189569496)
						{
							if (aggregate.interactive_campfire.func_642(bVar14) || aggregate.interactive_campfire.func_643(bVar14))
							{
							}
							else
							{
								Jump @308; //curOff = 257
								if (bVar11 == -997150586)
								{
									if (aggregate.interactive_campfire.func_643(bVar14))
									{
									}
									else
									{
										Jump @308; //curOff = 282
										if (bVar11 == 986998820)
										{
											if (aggregate.interactive_campfire.func_415(bVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @348; //curOff = 311
												if (bVar11 == -1189569496)
												{
													if (!aggregate.interactive_campfire.func_415(bVar14) && aggregate.interactive_campfire.func_644(bVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (aggregate.net_camp.func_2531(bVar11, &Var16, 1))
													{
														if (!aggregate.dynamic_craft_scenario.func_292(Var16, 1))
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

