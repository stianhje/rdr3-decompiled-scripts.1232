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
	int iLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 1;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	var uLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	bool bLocal_75 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == armoire_corpse_scenario.__EntryFunction__

void func_6()
{
	var uVar0;
	bool bVar1;

	aggregate.dynamic_craft_scenario.func_12();
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		switch (iLocal_68)
		{
			case 0:
				PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 42, 0, 1);
				aggregate.coffee_drinking.func_5(&iLocal_68, 1);
				break;
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
				{
					if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, false, false) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) == 0)
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
						if (aggregate.aberdeenpigfarm.func_45() == 0)
						{
							if (aggregate.binoculars.func_32(-2035110427 /* GXTEntry: "Mortar and Pestle" */, 1) && (!aggregate.aberdeenpigfarm.func_125(0, 0, 1) || aggregate.dynamic_craft_scenario.func_17()))
							{
								iLocal_69 = aggregate.binoculars.func_20("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
								aggregate.camera_item.func_130(iLocal_69, 342152817, 0, 1);
								MISC::SET_BIT(&(Global_1956121->f_1), 2);
								MISC::CLEAR_BIT(&(Global_1956121->f_1), 3);
							}
						}
						else
						{
							if (!(aggregate.dynamic_craft_scenario.func_20("simple_crafting") || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) > 0))
							{
								if (aggregate.binoculars.func_32(-1448210800 /* GXTEntry: "Crafting Tools" */, 1) && (!aggregate.aberdeenpigfarm.func_125(0, 0, 1) || aggregate.dynamic_craft_scenario.func_17()))
								{
									if (!func_21())
									{
										iLocal_69 = aggregate.binoculars.func_20("CAMP_CRAFT", joaat("INPUT_CONTEXT_X"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
										aggregate.camera_item.func_130(iLocal_69, 342152817, 0, 1);
									}
								}
								if ((aggregate.dynamic_craft_scenario.func_22(0, 0) && (!aggregate.aberdeenpigfarm.func_175(Global_1956162->f_1, 1) || aggregate.aberdeenpigfarm.func_175(Global_1956162->f_1, 512))) && (aggregate.binoculars.func_32(-1838434463 /* GXTEntry: "Camp" */, 1) || aggregate.binoculars.func_32(2019377485 /* GXTEntry: "Camp" */, 1)))
								{
									iLocal_70 = aggregate.binoculars.func_20("SET_CAMP", joaat("INPUT_CONTEXT_Y"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
									aggregate.camera_item.func_130(iLocal_70, 342152817, 0, 1);
								}
							}
							MISC::SET_BIT(&(Global_1956121->f_1), 2);
							MISC::CLEAR_BIT(&(Global_1956121->f_1), 3);
						}
						iLocal_71 = aggregate.binoculars.func_20("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
						aggregate.binoculars.func_25(iLocal_71, 17, 1, 1);
						aggregate.camera_item.func_130(iLocal_71, 342152817, 0, 1);
						aggregate.coffee_drinking.func_5(&iLocal_68, 2);
					}
				}
				break;
			case 2:
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, false, false) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
				{
					func_25();
					aggregate.coffee_drinking.func_5(&iLocal_68, 1);
					return;
				}
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
				bVar1 = PED::IS_PED_IN_COMBAT(Global_35, 0);
				if ((func_26(-608558181) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) > 0) || Global_1913156->f_1581)
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					aggregate.coffee_drinking.func_5(&iLocal_68, 3);
					return;
				}
				else if (aggregate.doc_book.func_11())
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					aggregate.coffee_drinking.func_5(&iLocal_68, 4);
					return;
				}
				else if (aggregate.dynamic_craft_scenario.func_28())
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					aggregate.coffee_drinking.func_5(&iLocal_68, 5);
					return;
				}
				else if (TASK::_0xEC7E480FF8BD0BED(Global_35))
				{
					func_25();
					MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					aggregate.coffee_drinking.func_5(&iLocal_68, 6);
					return;
				}
				if (aggregate.binoculars.func_13(iLocal_69, 1))
				{
					aggregate.dynamic_craft_scenario.func_30(0);
					func_25();
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					aggregate.coffee_drinking.func_5(&iLocal_68, 3);
				}
				else if (aggregate.binoculars.func_13(iLocal_70, 1))
				{
					if ((aggregate.binoculars.func_32(-1838434463 /* GXTEntry: "Camp" */, 1) && func_31(-1838434463 /* GXTEntry: "Camp" */, 0, 0, 0, 1, 0, 0)) || (aggregate.binoculars.func_32(2019377485 /* GXTEntry: "Camp" */, 1) && func_31(2019377485 /* GXTEntry: "Camp" */, 0, 0, 0, 1, 0, 0)))
					{
						func_25();
						MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
					}
				}
				else if (aggregate.doc_book.func_50(iLocal_71, 1) || bVar1)
				{
					if (!bVar1)
					{
						PED::_0xD65FDC686A031C83(Global_35, 35709907, 2f);
					}
					TASK::CLEAR_PED_TASKS(Global_35, 0, 0);
					func_25();
				}
				if (!aggregate.barcustomer_interaction.func_42(&uLocal_72))
				{
					if (func_34())
					{
						aggregate.barcustomer_interaction.func_43(&uLocal_72);
					}
				}
				else if (!func_34())
				{
					bLocal_75 = false;
					aggregate.barcustomer_interaction.func_50(&uLocal_72);
				}
				else if (!aggregate.dynamic_craft_scenario.func_37(&uLocal_72, 0.15f))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_SPRINT")))
					{
						bLocal_75 = true;
					}
				}
				else if (!bLocal_75)
				{
					PED::_0xD65FDC686A031C83(Global_35, 35709907, 0.2f);
				}
				break;
			case 3:
				if ((!aggregate.dynamic_craft_scenario.func_20("simple_crafting") && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) == 0) && !Global_1913156->f_1581)
				{
					aggregate.coffee_drinking.func_5(&iLocal_68, 1);
				}
				break;
			case 4:
				if (!aggregate.doc_book.func_11())
				{
					aggregate.coffee_drinking.func_5(&iLocal_68, 1);
				}
				break;
			case 5:
				if (!aggregate.dynamic_craft_scenario.func_28())
				{
					aggregate.coffee_drinking.func_5(&iLocal_68, 1);
				}
				break;
			case 6:
				if (!TASK::_0xEC7E480FF8BD0BED(Global_35))
				{
					aggregate.coffee_drinking.func_5(&iLocal_68, 1);
				}
				break;
		}
		if ((!PED::IS_PED_USING_ANY_SCENARIO(Global_35) || (iLocal_68 > 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))) || TASK::_0xDF7993356F52359A(Global_35, 0) != iLocal_16)
		{
			iLocal_13 = 0;
		}
	}
}

void func_7()
{
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
	func_25();
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 42, 0, 0);
	MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
}

bool func_21()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return false;
	}
	return false;
}

void func_25()
{
	if (aggregate.annesburg.func_217(iLocal_69))
	{
		aggregate.annesburg.func_218(&iLocal_69, 1, 1);
	}
	if (aggregate.annesburg.func_217(iLocal_70))
	{
		aggregate.annesburg.func_218(&iLocal_70, 1, 1);
	}
	if (aggregate.annesburg.func_217(iLocal_71))
	{
		aggregate.annesburg.func_218(&iLocal_71, 1, 1);
	}
}

bool func_26(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1938407->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1938407)[iVar0 /*16*/])->f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_31(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;

	if (aggregate.dynamic_craft_scenario.func_58())
	{
		Global_1939221->f_10479 = iParam0;
		aggregate.dynamic_craft_scenario.func_59(iParam0, 1, -142743235, 0, 0);
		return false;
	}
	if (!aggregate.dynamic_craft_scenario.func_60(iParam0, bParam4))
	{
		return false;
	}
	if (aggregate.dynamic_craft_scenario.func_61(iParam0))
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return false;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == -418848773)
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (aggregate.bandana.func_11(iParam0, -2081717885))
	{
		aggregate.dynamic_craft_scenario.func_63(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (aggregate.bandana.func_11(iParam0, -1909684001))
	{
		aggregate.dynamic_craft_scenario.func_64(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (aggregate.bandana.func_11(iParam0, 587975446))
	{
		aggregate.dynamic_craft_scenario.func_65(iParam0, Var10);
	}
	else if (aggregate.bandana.func_11(iParam0, 566155764))
	{
		if (!aggregate.dynamic_craft_scenario.func_66(iParam0))
		{
			return false;
		}
	}
	if (aggregate.dynamic_craft_scenario.func_67(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1912966 = iParam0;
		Global_1913155 = MISC::GET_GAME_TIMER();
		return true;
	}
	if (aggregate.bandana.func_11(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		aggregate.dynamic_craft_scenario.func_68(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((aggregate.bandana.func_11(iParam0, -1472964441) || aggregate.bandana.func_11(iParam0, -228153877)) || aggregate.bandana.func_11(iParam0, 566155764))
	{
	}
	else if (aggregate.bandana.func_11(iParam0, 1919582297))
	{
		if (((aggregate.dynamic_craft_scenario.func_69() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return false;
		}
		switch (iParam0)
		{
			case 1929383243: /* GXTEntry: "Herbivore Bait" */
			case 2036955137: /* GXTEntry: "Potent Herbivore Bait" */
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397: /* GXTEntry: "Predator Bait" */
			case 1831763320: /* GXTEntry: "Potent Predator Bait" */
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		aggregate.dynamic_craft_scenario.func_68(Var10, 0);
		bVar28 = false;
	}
	else if (aggregate.dynamic_craft_scenario.func_70(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = aggregate.dynamic_craft_scenario.func_156(Global_1070355->f_26843.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		aggregate.dynamic_craft_scenario.func_68(Var10, 0);
		iVar29 = 1;
	}
	else if (aggregate.bandana.func_58(iParam0) == joaat("clothing"))
	{
		if (!aggregate.dynamic_craft_scenario.func_72(iParam0))
		{
			aggregate.camera_item.func_73("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = aggregate.bandana.func_10(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = aggregate.dynamic_craft_scenario.func_75();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (aggregate.dynamic_craft_scenario.func_76(PLAYER::PLAYER_ID()))
			{
				aggregate.camera_item.func_73("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				aggregate.camera_item.func_73("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1951131->f_1657 != iParam0)
			{
				aggregate.bandana.func_28(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					aggregate.dynamic_craft_scenario.func_78(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_79(iParam0);
					aggregate.bandana.func_28(35, 0, 0, 0, 0);
					return true;
				case -1719060085:
					if (iParam0 == &Global_1951131->f_1657.f_1[23 /*3*/])
					{
						aggregate.dynamic_craft_scenario.func_80(Global_35, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipGlovesFidget", true, 15);
						aggregate.dynamic_craft_scenario.func_81(iParam0, 0);
						return true;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipGlovesFidget", true, 15);
						aggregate.dynamic_craft_scenario.func_81(iParam0, 1);
					}
					break;
				default:
					if (!aggregate.bandana.func_11(iParam0, -1348134986))
					{
					}
					else
					{
						aggregate.dynamic_craft_scenario.func_78(iParam0, 0);
					}
					break;
			}
			aggregate.dynamic_craft_scenario.func_80(Global_35, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				aggregate.doc_book.func_51(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (aggregate.aberdeenpigfarm.func_45() != -1)
				{
				}
				else if (!aggregate.dynamic_craft_scenario.func_72(iParam0))
				{
					aggregate.camera_item.func_73("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = aggregate.dynamic_craft_scenario.func_83(7, iParam0);
					bVar31 = aggregate.dynamic_craft_scenario.func_83(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17095))
						{
							MAP::REMOVE_BLIP(&Global_17095);
						}
						Global_17095 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_17095, 673950256);
						aggregate.camera_item.func_73(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17095), 10000, 0, 0, 0, 1);
					}
					else if (!aggregate.dynamic_craft_scenario.func_84(7))
					{
						aggregate.camera_item.func_73("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (aggregate.dynamic_craft_scenario.func_86(Global_35, aggregate.dynamic_craft_scenario.func_85(7), 0))
						{
							aggregate.camera_item.func_73("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17095))
							{
								MAP::REMOVE_BLIP(&Global_17095);
							}
							Global_17095 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_17095, 673950256);
							aggregate.camera_item.func_73(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17095), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							aggregate.dynamic_craft_scenario.func_68(Var10, 0);
						}
						Jump @2063; //curOff = 1560
						aggregate.dynamic_craft_scenario.func_87();
						Jump @2063; //curOff = 1567
						if (!aggregate.aberdeenpigfarm.func_175(Global_1956162->f_1, 1) || aggregate.aberdeenpigfarm.func_175(Global_1956162->f_1, 512))
						{
							if (aggregate.dynamic_craft_scenario.func_72(-1838434463 /* GXTEntry: "Camp" */))
							{
								if (aggregate.dynamic_craft_scenario.func_88(1, 1))
								{
									aggregate.dynamic_craft_scenario.func_89(2, 1);
								}
								else if (aggregate.dynamic_craft_scenario.func_90(1))
								{
									aggregate.camera_item.func_73("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else if (aggregate.dynamic_craft_scenario.func_91())
								{
									aggregate.camera_item.func_73("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										aggregate.dynamic_craft_scenario.func_92();
									}
									else
									{
										aggregate.camera_item.func_73("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									aggregate.dynamic_craft_scenario.func_93(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								aggregate.camera_item.func_73("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								aggregate.dynamic_craft_scenario.func_93(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else if (aggregate.dynamic_craft_scenario.func_91())
							{
								aggregate.camera_item.func_73("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								aggregate.camera_item.func_73("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1956162->f_1 |= 2;
							iVar29 = 1;
						}
						Jump @2063; //curOff = 1842
						if (!WEAPON::_0xC853230E76A152DF(aggregate.binoculars.func_8(Global_35, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iParam0, true, 0, false, false);
						}
						return true;
						Jump @2063; //curOff = 1880
						if (aggregate.binoculars.func_8(Global_35, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return true;
						Jump @2063; //curOff = 1921
						Jump @2063; //curOff = 1924
						aggregate.binoculars.func_18(533, 1);
						Jump @2063; //curOff = 1935
						aggregate.dynamic_craft_scenario.func_30(1);
						Jump @2063; //curOff = 1943
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar28 = false;
						return true;
						Jump @2063; //curOff = 1978
						UIAPPS::_LAUNCH_APP_BY_HASH(-76766502);
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							aggregate.dynamic_craft_scenario.func_68(Var10, 0);
						}
						return true;
						Jump @2063; //curOff = 2054
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
				default:
					break;
		}
	}
}

bool func_34()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.1f * 0.1f))
	{
		return true;
	}
	return false;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 10;
	iVar1 = &Global_1951131->f_1657.f_1[iVar0 /*3*/];
	if (iVar1 == iParam0)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipHatFidget", true, 15);
		aggregate.dynamic_craft_scenario.func_80(Global_35, -2065815962 /* GXTEntry: "No Hat" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		aggregate.dynamic_craft_scenario.func_81(iParam0, 0);
		return;
	}
	PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipHatFidget", true, 15);
	aggregate.dynamic_craft_scenario.func_80(Global_35, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (aggregate.bandana.func_47(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		aggregate.dynamic_craft_scenario.func_160();
		aggregate.bandana.func_52(128);
		return;
	}
	if (iVar1 == &Global_1951131->f_81[iVar0 /*12*/])
	{
		aggregate.dynamic_craft_scenario.func_81(iParam0, 1);
		return;
	}
	if (aggregate.dynamic_craft_scenario.func_161(-2061583405, 0))
	{
		if (aggregate.dynamic_craft_scenario.func_162(iVar1))
		{
			aggregate.dynamic_craft_scenario.func_81(iVar1, 0);
		}
		else
		{
			aggregate.dynamic_craft_scenario.func_163(iVar1, 1, 1, 0);
		}
		aggregate.dynamic_craft_scenario.func_81(iParam0, 1);
		return;
	}
	if (aggregate.dynamic_craft_scenario.func_162(iVar1))
	{
		aggregate.dynamic_craft_scenario.func_81(iVar1, 0);
		aggregate.dynamic_craft_scenario.func_81(iParam0, 1);
	}
	else if (aggregate.dynamic_craft_scenario.func_162(iParam0))
	{
		if (iParam0 != func_164(0))
		{
			aggregate.dynamic_craft_scenario.func_165(iParam0, iVar1);
			aggregate.dynamic_craft_scenario.func_81(iParam0, 0);
			aggregate.dynamic_craft_scenario.func_81(iVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			aggregate.bandana.func_52(128);
			aggregate.dynamic_craft_scenario.func_81(iParam0, 1);
		}
	}
}

var func_125(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915170->f_20136;
	}
	return (Global_1915170->f_20136 || Global_1915170->f_21989.f_1);
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;

	bVar3 = aggregate.dynamic_craft_scenario.func_263(iParam0);
	if (aggregate.bandana.func_11(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (aggregate.bandana.func_23(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = aggregate.bandana.func_35();
			}
			else
			{
				iVar0 = aggregate.bandana.func_36();
			}
		}
		else if (bVar1)
		{
			iVar0 = aggregate.bandana.func_37();
		}
		else
		{
			iVar0 = aggregate.bandana.func_38();
		}
	}
	else if (aggregate.bandana.func_22(&iVar2))
	{
		if (aggregate.bandana.func_11(iVar2, -1303648999))
		{
			iVar0 = aggregate.bandana.func_35();
		}
		else
		{
			iVar0 = aggregate.bandana.func_36();
		}
	}
	else if (bVar1)
	{
		iVar0 = aggregate.bandana.func_37();
	}
	else
	{
		iVar0 = aggregate.bandana.func_38();
	}
	if (iVar0 != 0)
	{
		Global_1951131->f_3251 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, iParam0, iVar0, 1, iParam1, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = aggregate.doc_book.func_307();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846 /* GXTEntry: "John\'s Classic Hat" */;
	}
	return -1535516064 /* GXTEntry: "Arthur\'s Hat" */;
}

bool func_171(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<5> Var4;
	int iVar9;

	Var4 = { aggregate.bandana.func_41(iParam0, 0, 0) };
	if (aggregate.dynamic_craft_scenario.func_170(iParam0, 0))
	{
		iVar9 = aggregate.bandana.func_81(Var4, Var4.f_4, 0, -1);
		if (iVar9 != 0)
		{
			Var4 = { aggregate.bandana.func_41(iVar9, 0, 0) };
			Var0 = { aggregate.bandana.func_59(iVar9, Var4, Var4.f_4, 0) };
			return aggregate.dynamic_craft_scenario.func_292(Var0, 0);
		}
		return true;
	}
	Var0 = { aggregate.bandana.func_59(iParam0, Var4, Var4.f_4, 0) };
	return aggregate.dynamic_craft_scenario.func_292(Var0, iParam1);
}

int func_251()
{
	int iVar0;
	int iVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !aggregate.bandana.func_71(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_0xC853230E76A152DF(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && aggregate.bandana.func_71(iVar0)) || WEAPON::_0x6E4E1A82081EABED(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_253(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.dynamic_craft_scenario.func_326(iParam0);
	iVar1 = aggregate.coffee_drinking.func_52(iVar0);
	if (iVar1 != iParam0)
	{
		aggregate.dynamic_craft_scenario.func_327(iVar1, 4);
	}
	if (!aggregate.dynamic_craft_scenario.func_328(iParam0))
	{
		return;
	}
	if (aggregate.dynamic_craft_scenario.func_329(iParam0))
	{
		return;
	}
	aggregate.dynamic_craft_scenario.func_327(iParam0, 4);
	aggregate.dynamic_craft_scenario.func_330(iParam0, bParam1);
	if (!aggregate.dynamic_craft_scenario.func_331(iParam0))
	{
		aggregate.dynamic_craft_scenario.func_332(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!aggregate.aberdeenpigfarm.func_125(0, 0, 1))
		{
			aggregate.dynamic_craft_scenario.func_333(1, 6);
		}
	}
}

int func_256(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!aggregate.bandana.func_30(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (aggregate.dynamic_craft_scenario.func_345(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = aggregate.binoculars.func_69(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			aggregate.doc_book.func_122(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!aggregate.binoculars.func_32(iParam0, 1))
	{
		return 0;
	}
	Var5 = { aggregate.doc_book.func_119(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((aggregate.binoculars.func_54(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((aggregate.binoculars.func_54(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_256(iParam0, aggregate.binoculars.func_54(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (aggregate.bandana.func_58(iParam0) == joaat("weapon"))
	{
		if (!aggregate.dynamic_craft_scenario.func_348(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!aggregate.dynamic_craft_scenario.func_59(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { aggregate.bandana.func_41(iParam0, 0, 0) };
		if (aggregate.doc_book.func_93(0) && Var7.f_4 == 1084182731)
		{
			aggregate.dynamic_craft_scenario.func_349(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1939057->f_21 = 0;
	}
	if (!aggregate.doc_book.func_93(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		aggregate.doc_book.func_122(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_288(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	iVar3 = iParam1;
	iVar4 = aggregate.bandana.func_10(iVar3);
	iVar5 = 0;
	if (aggregate.doc_book.func_307() == 24043185)
	{
		iVar2 = 1;
	}
	if (bParam3)
	{
		iVar5 = 3;
	}
	switch (iVar4)
	{
		case 1297434125:
			if (iParam1 == &Global_1951131->f_81[iParam2 /*12*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
				{
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 0 || (uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base"))
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
					}
					else
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1334603721;
					}
					aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
				}
				Jump @3216; //curOff = 253
				if (iParam1 == &Global_1951131->f_81[iParam2 /*12*/])
				{
				}
				else
				{
					iVar0 = 34;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						iVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == aggregate.bandana.func_10(iVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
						}
					}
					Jump @3216; //curOff = 543
					if (iParam1 == &Global_1951131->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar3, -1473580422))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate.bandana.func_11(iVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (aggregate.dynamic_craft_scenario.func_362(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar3, 1583165364))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate.bandana.func_10(iVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar3, -1650340550))
						{
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate.bandana.func_10(iVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
						}
						Jump @3216; //curOff = 918
						if (iParam1 == &Global_1951131->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
							aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							iVar0 = 20;
							iVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar1, 1090938458)) && aggregate.bandana.func_11(iVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1171
							aggregate.dynamic_craft_scenario.func_286(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							Jump @3216; //curOff = 1454
							aggregate.dynamic_craft_scenario.func_286(16, iVar5);
							if (aggregate.dynamic_craft_scenario.func_170(iVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar3, -985549034))
								{
									if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
									}
									else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
									}
								}
								iVar0 = 12;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
								}
								Jump @3216; //curOff = 1747
								if (aggregate.dynamic_craft_scenario.func_170(iVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && aggregate.bandana.func_11(iVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
											aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
										}
									}
									Jump @3216; //curOff = 1988
									if (aggregate.dynamic_craft_scenario.func_170(iVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											iVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (aggregate.bandana.func_11(iVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												aggregate.dynamic_craft_scenario.func_286(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate.bandana.func_10(iVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													aggregate.dynamic_craft_scenario.func_286(iParam2, iVar5);
												}
											}
										}
										Jump @3216; //curOff = 2214
										if (aggregate.dynamic_craft_scenario.func_170(iVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(iVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3216; //curOff = 2438
											if (iParam1 == &Global_1951131->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												iVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((aggregate.bandana.func_11(iVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate.bandana.func_10(iVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
												if ((aggregate.bandana.func_11(iVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate.bandana.func_10(iVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
												iVar0 = 37;
												if (aggregate.bandana.func_11(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
											}
											Jump @3216; //curOff = 2921
											iVar0 = 37;
											if (aggregate.bandana.func_11(iVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3003
											iVar0 = 10;
											if (-525676072 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3067
											iVar0 = 12;
											if (81053684 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3216; //curOff = 3131
											if (!aggregate.bandana.func_11(iVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
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
			switch (aggregate.bandana.func_49(iParam2, 1))
			{
				case -207860920:
					if (aggregate.dynamic_craft_scenario.func_363(99217379) && aggregate.bandana.func_11(iVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (2056714954 == PED::_0x5FF9A878C3D115B8(&(uParam0->f_1[iVar0 /*3*/]), iVar2, 1))
					{
						if ((iParam1 == &Global_1951131->f_81[iParam2 /*12*/] || aggregate.bandana.func_11(iVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!aggregate.dynamic_craft_scenario.func_170(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate.bandana.func_11(iVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!aggregate.dynamic_craft_scenario.func_170(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate.bandana.func_11(iVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					break;
				case -1130352927:
					if (iParam1 == -230310728 || iParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
				case 1367443060:
					if (iParam1 == 1733464892)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
			}
			default:
				break;
	}
}

bool func_352(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = aggregate.bandana.func_44(aggregate.bandana.func_48(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1951131->f_1657.f_1[iVar1 /*3*/] != 0 && &Global_1951131->f_1657.f_1[iVar1 /*3*/] != &Global_1951131->f_81[iVar1 /*12*/])
	{
		iVar0 = &Global_1951131->f_1657.f_1[iVar1 /*3*/];
		if (aggregate.bandana.func_10(iVar0) == iParam0 || (iParam0 == 81053684 && aggregate.bandana.func_11(iVar0, -1348134986)))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_353()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1951131->f_3109.f_25)
	{
		iVar1 = &Global_1951131->f_3109[iVar0];
		if (aggregate.bandana.func_10(iVar1) == -999503751)
		{
			if (aggregate.dynamic_craft_scenario.func_426() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_359(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	var uVar119;
	int iVar120;
	int iVar121;

	switch (aggregate.bandana.func_10(iParam0))
	{
		case -2061583405:
			aggregate.dynamic_craft_scenario.func_429(iParam0, &(Global_1951131->f_3109.f_27));
			break;
		case 81053684:
			aggregate.dynamic_craft_scenario.func_429(iParam0, &(Global_1951131->f_3109.f_29));
			break;
		case -999503751:
			aggregate.dynamic_craft_scenario.func_429(iParam0, &(Global_1951131->f_3109.f_26));
			if (aggregate.bandana.func_11(iParam0, -166674229))
			{
				Var0.f_1 = 39;
				if (aggregate.dynamic_craft_scenario.func_430(&Var0, iParam0, &uVar119, 0, 1, 0, 0, 0))
				{
					iVar120 = 0;
					while (iVar120 < 39)
					{
						iVar121 = &Var0.f_1[iVar120 /*3*/];
						if (aggregate.bandana.func_30(iVar121, 0))
						{
							func_359(iVar121, 0, 0);
						}
						iVar120++;
					}
				}
			}
			break;
		case -525676072:
			aggregate.dynamic_craft_scenario.func_429(iParam0, &(Global_1951131->f_3109.f_28));
			break;
		case -1719060085:
			aggregate.dynamic_craft_scenario.func_429(iParam0, &(Global_1951131->f_3109.f_30));
			break;
		case -413129408:
			aggregate.dynamic_craft_scenario.func_429(iParam0, &(Global_1951131->f_3109.f_31));
			break;
		default:
			if (aggregate.bandana.func_11(iParam0, -1348134986))
			{
				aggregate.dynamic_craft_scenario.func_429(iParam0, &(Global_1951131->f_3109.f_29));
			}
			break;
	}
	if (bParam2)
	{
		aggregate.dynamic_craft_scenario.func_278();
	}
	if (bParam1)
	{
		aggregate.dynamic_craft_scenario.func_280(0, 0);
	}
}

int func_427(bool bParam0)
{
	struct<4> Var0;
	int iVar14;
	struct<4> Var15;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<14> Var22;

	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { aggregate.bandana.func_59(889965687 /* GXTEntry: "Wardrobe" */, aggregate.bandana.func_57(1), 1034665895, 1) };
	iVar19 = aggregate.bandana.func_81(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == -1645121954)
		{
			iVar14 = 24043185;
		}
		else if (iVar19 == 897974632)
		{
			iVar14 = 2026485318;
		}
		return iVar14;
	}
	Var22 = { aggregate.binoculars.func_85(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (aggregate.binoculars.func_88(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && aggregate.binoculars.func_71(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == -1645121954)
			{
				iVar14 = 24043185;
			}
			else if (Var0.f_4 == 897974632)
			{
				iVar14 = 2026485318;
			}
			else
			{
				aggregate.binoculars.func_73(iVar20);
				return 0;
			}
			if (bParam0)
			{
				aggregate.dynamic_craft_scenario.func_292(Var0, 1);
			}
			aggregate.binoculars.func_73(iVar20);
			return iVar14;
		}
		aggregate.binoculars.func_73(iVar20);
	}
	return 0;
}

