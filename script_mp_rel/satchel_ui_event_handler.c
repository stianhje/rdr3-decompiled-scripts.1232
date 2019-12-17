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
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1(&uVar0);
	func_2();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_3(&uVar0);
	}
	aggregate.net_stable_mount.func_115(1);
	bVar5 = PED::_0xD5FE956C70FF370B(Global_35);
	while (true)
	{
		if (((PED::IS_PED_FALLING(Global_35) || PED::_0x3E592D0486DEC0F6(Global_35)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true)) || PED::_0x3AA24CCC0D451379(Global_35))
		{
			aggregate.doc_book.func_51(0);
		}
		HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
		if ((PED::_0xD5FE956C70FF370B(Global_35) != bVar5 && !Global_1939221->f_6) && func_6(Global_1939221->f_10478, 1224357681) != 0)
		{
			func_7(func_6(Global_1939221->f_10478, 1224357681));
			bVar5 = !bVar5;
		}
		if (Global_1939221->f_4)
		{
			func_8();
			func_9();
			aggregate.satchel_ui_event_handler.func_10(Global_1939221->f_10477);
			if (Global_1939221->f_34 == 0)
			{
			}
			else
			{
				func_7(Global_1939221->f_34);
			}
			func_2();
			if (Global_1939221->f_10485 != 0 && !aggregate.satchel_ui_event_handler.func_11())
			{
				func_12(Global_1939221->f_10485, &(Var1.f_3));
			}
			Global_1939221->f_4 = 0;
			Global_1939221->f_34 = 0;
		}
		if (func_13())
		{
			func_12(Global_1939221->f_10485, &(Var1.f_3));
			func_2();
			aggregate.doc_book.func_280(0);
			Global_1939221->f_6 = 0;
		}
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var1))
			{
				Global_1939221->f_6 = 0;
				switch (Var1)
				{
					case -1740156697:
						Global_1939221->f_10485 = Var1.f_1;
						if (!aggregate.satchel_ui_event_handler.func_11())
						{
							switch (Var1.f_2)
							{
								case -1287062382:
									func_15(Var1.f_1, &(Var1.f_3));
									break;
								case -1706653313:
								case 1086195311:
									ATTRIBUTE::_0xD962F8579D702DB5();
									func_12(Var1.f_1, &(Var1.f_3));
									break;
								case -1715238242:
									ATTRIBUTE::_0xD962F8579D702DB5();
									func_16(Var1.f_1, &(Var1.f_3));
									break;
							}
						}
						else
						{
							func_2();
							ATTRIBUTE::_0xD962F8579D702DB5();
						}
						func_17(Var1.f_2);
						aggregate.net_stable_mount.func_115(2);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -722926211:
					case 703281244:
						func_18();
						func_2();
						ATTRIBUTE::_0xD962F8579D702DB5();
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -1203660660:
						switch (Var1.f_2)
						{
							case -1706653313:
							case -594808149:
							case 1086195311:
								if (aggregate.satchel_ui_event_handler.func_19() || aggregate.dynamic_craft_scenario.func_58())
								{
									if (func_21(Global_1939221->f_10478, 0, 0, 0, 1, 0, 0))
									{
										aggregate.doc_book.func_51(0);
									}
								}
								else if (aggregate.satchel_ui_event_handler.func_22())
								{
								}
								else if (!aggregate.doc_book.func_278(0))
								{
									func_24();
								}
								aggregate.net_stable_mount.func_115(4);
								break;
							case -1193234750: /* GXTEntry: "Discard" */
								func_25(Global_1939221->f_10478, 1);
								break;
							case 301804921:
								if (aggregate.doc_book.func_278(0))
								{
									aggregate.net_stable_mount.func_115(32);
								}
								else
								{
									func_26(Global_1939221->f_10478);
								}
								break;
							case 1329361007:
								aggregate.net_stable_mount.func_115(64);
								break;
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case 922460030:
						aggregate.net_stable_mount.func_115(16);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					case -2075827635:
						aggregate.net_stable_mount.func_115(8);
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
					default:
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
						break;
				}
			}
		}
		BUILTIN::WAIT(0);
	}
	func_3(&uVar0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		func_28();
	}
	(*Global_1913102)[0 /*11*/] = 0;
	func_29(uParam0);
	return 1;
}

void func_2()
{
	if (aggregate.satchel_ui_event_handler.func_11())
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		INVENTORY::_0x75CFAC49301E134F(Global_1939221->f_10501, false, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10494, aggregate.satchel_ui_event_handler.func_30(Global_1939221->f_10477));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10495, func_31(Global_1939221->f_10477));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10514, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10510, false);
		if (aggregate.doc_book.func_278(0) || aggregate.satchel_ui_event_handler.func_32())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10496, "");
		}
		if (aggregate.fme_animal_tagging.func_916(29))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(818738914));
		}
		else
		{
			func_34(Global_1939221->f_10477);
		}
	}
}

void func_3(var uParam0)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1939221->f_6 = 0;
	Global_1939221->f_38 = 0;
	Global_1939221->f_33 = -1;
	Global_1939221->f_34 = 0;
	Global_1939221->f_10481 = 0;
	aggregate.doc_book.func_280(822208792);
	aggregate.doc_book.func_280(0);
	aggregate.doc_book.func_280(0);
	func_38(uParam0);
	if (!TASK::_0x038B1F1674F0E242(Global_35))
	{
		aggregate.doc_book.func_18(0);
	}
	aggregate.satchel.func_13(1);
	func_41();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return false;
}

void func_7(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	Global_1939221->f_10484 = 0;
	func_43(Global_1939221->f_10468[aggregate.satchel_ui_event_handler.func_42(Global_1939221->f_10477) /*2*/], bParam0);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939221->f_10490, Global_1939221->f_10484);
	aggregate.satchel_ui_event_handler.func_44(Global_1939221->f_33);
	Global_1939221->f_10476 = bVar0;
}

void func_8()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1939221->f_10484 = 0;
	if (Global_1939221->f_10476 != -1)
	{
		iVar0 = Global_1939221->f_10476;
		func_43(Global_1939221->f_10468[aggregate.satchel_ui_event_handler.func_42(Global_1939221->f_10477) /*2*/], iVar0);
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939221->f_10490, Global_1939221->f_10484);
	}
	iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
	bVar2 = Global_1939221->f_10484 <= false;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "FolderEmpty", bVar2);
}

bool func_9()
{
	if ((aggregate.satchel_ui_event_handler.func_45() || aggregate.dynamic_craft_scenario.func_86(Global_35, aggregate.dynamic_craft_scenario.func_85(7), 1)) || (!(func_48(7) || func_49(7)) && aggregate.doc_book.func_278(0)))
	{
		return (func_50(0, -1591664384) && func_50(1, 724026534));
	}
	return func_50(0, -1591664384);
}

void func_12(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;

	aggregate.dynamic_craft_scenario.func_488();
	if (func_13())
	{
		aggregate.doc_book.func_280(0);
		if (Global_1939221->f_6)
		{
			iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939221->f_10490, Global_1939221->f_10485);
		}
		else
		{
			iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939221->f_10489, Global_1939221->f_10485);
		}
		bVar0 = func_63(iVar1);
	}
	else
	{
		bVar0 = func_63(*uParam1);
	}
	if (func_63(*uParam1) == bVar0)
	{
		func_64(bVar0, uParam1);
	}
	aggregate.doc_book.func_125(0, bVar0);
	aggregate.dynamic_craft_scenario.func_488();
	aggregate.satchel_ui_event_handler.func_44(iParam0);
}

bool func_13()
{
	return Global_1939221->f_10;
}

void func_15(int iParam0, int iParam1)
{
	if (iParam0 != Global_1939221->f_10475)
	{
		func_66(iParam0, iParam1);
	}
}

void func_16(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<19> Var3;

	Global_1939221->f_33 = uParam0;
	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam1, "label");
	func_67(bVar0, uParam1);
	bVar1 = bVar0;
	func_7(bVar1);
	if (aggregate.bandana.func_30(Global_1939221->f_10478, 0))
	{
		if (Global_1939221->f_10477 == 1783698482 || aggregate.bandana.func_11(Global_1939221->f_10478, 474910316))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, "");
			func_70(Global_1939221->f_10478, 56759509);
			func_70(Global_1939221->f_10478, 1632674359);
			func_70(Global_1939221->f_10478, 2145533727);
			func_70(Global_1939221->f_10478, -623226361);
			func_70(Global_1939221->f_10478, 332438661);
			func_70(Global_1939221->f_10478, -1658668866);
			func_70(Global_1939221->f_10478, 1997097980);
			func_70(Global_1939221->f_10478, 90781239);
			func_70(Global_1939221->f_10478, -1874365462);
			func_70(Global_1939221->f_10478, 920487791);
			func_70(Global_1939221->f_10478, -668555046);
			func_70(Global_1939221->f_10478, -839148413);
			func_70(Global_1939221->f_10478, 10424351);
			func_70(Global_1939221->f_10478, -1452445456);
		}
	}
	else if (Global_1939221->f_10477 == 1783698482 || Global_1939221->f_10477 == -693134279)
	{
		bVar2 = bVar0;
		if (bVar2 != 0)
		{
			if (Global_1939221->f_10477 != -693134279)
			{
				func_71();
			}
			Var3.f_2 = 5;
			Var3.f_18 = 8;
			func_72(bVar2, &Var3);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10495, Var3.f_1);
			if (!aggregate.doc_book.func_278(0) && bVar2 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(1332470872, 0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10504, false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10505, false);
			}
		}
	}
}

void func_17(int iParam0)
{
	if (iParam0 != -1715238242)
	{
		Global_1939221->f_10476 = -1;
	}
}

void func_18()
{
	int iVar0;

	iVar0 = Global_1939221->f_10453;
	func_73(iVar0);
}

bool func_21(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		Global_1939221->f_10479 = bParam0;
		aggregate.dynamic_craft_scenario.func_59(bParam0, 1, -142743235, 0, 0);
		return false;
	}
	if (!aggregate.dynamic_craft_scenario.func_60(bParam0, bParam4))
	{
		return false;
	}
	if (aggregate.dynamic_craft_scenario.func_61(bParam0))
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
	if (bParam0 == -418848773)
	{
		UIAPPS::_LAUNCH_APP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (aggregate.bandana.func_11(bParam0, -2081717885))
	{
		aggregate.dynamic_craft_scenario.func_63(bParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (aggregate.bandana.func_11(bParam0, -1909684001))
	{
		aggregate.dynamic_craft_scenario.func_64(bParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (aggregate.bandana.func_11(bParam0, 587975446))
	{
		aggregate.dynamic_craft_scenario.func_65(bParam0, Var10);
	}
	else if (aggregate.bandana.func_11(bParam0, 566155764))
	{
		if (!aggregate.dynamic_craft_scenario.func_66(bParam0))
		{
			return false;
		}
	}
	if (aggregate.dynamic_craft_scenario.func_67(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1912966 = bParam0;
		Global_1913155 = MISC::GET_GAME_TIMER();
		return true;
	}
	if (aggregate.bandana.func_11(bParam0, -1227898937))
	{
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		aggregate.dynamic_craft_scenario.func_68(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((aggregate.bandana.func_11(bParam0, -1472964441) || aggregate.bandana.func_11(bParam0, -228153877)) || aggregate.bandana.func_11(bParam0, 566155764))
	{
	}
	else if (aggregate.bandana.func_11(bParam0, 1919582297))
	{
		if (((aggregate.dynamic_craft_scenario.func_69() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return false;
		}
		switch (bParam0)
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
		Var0.f_1 = bParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		aggregate.dynamic_craft_scenario.func_68(Var10, 0);
		bVar28 = false;
	}
	else if (aggregate.dynamic_craft_scenario.func_70(bParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = aggregate.dynamic_craft_scenario.func_156(Global_1070355->f_26843.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		aggregate.dynamic_craft_scenario.func_68(Var10, 0);
		iVar29 = 1;
	}
	else if (aggregate.bandana.func_58(bParam0) == joaat("clothing"))
	{
		if (!aggregate.dynamic_craft_scenario.func_72(bParam0))
		{
			aggregate.net_main_offline.func_312("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = aggregate.bandana.func_10(bParam0);
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
				aggregate.net_main_offline.func_312("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				aggregate.net_main_offline.func_312("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1951131->f_1657 != bParam0)
			{
				aggregate.bandana.func_28(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					aggregate.dynamic_craft_scenario.func_78(bParam0, 0);
					return iVar29;
				case -2061583405:
					aggregate.interactive_campfire.func_167(bParam0);
					aggregate.bandana.func_28(35, 0, 0, 0, 0);
					return true;
				case -1719060085:
					if (bParam0 == &Global_1951131->f_1657.f_1[23 /*3*/])
					{
						aggregate.dynamic_craft_scenario.func_80(Global_35, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipGlovesFidget", true, 15);
						aggregate.dynamic_craft_scenario.func_81(bParam0, 0);
						return true;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipGlovesFidget", true, 15);
						aggregate.dynamic_craft_scenario.func_81(bParam0, 1);
					}
					break;
				default:
					if (!aggregate.bandana.func_11(bParam0, -1348134986))
					{
					}
					else
					{
						aggregate.dynamic_craft_scenario.func_78(bParam0, 0);
					}
					break;
			}
			aggregate.dynamic_craft_scenario.func_80(Global_35, bParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (bParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				aggregate.doc_book.func_51(1);
				break;
			case -727924611: /* GXTEntry: "Wardrobe" */
				if (aggregate.aberdeenpigfarm.func_45() != -1)
				{
				}
				else if (!aggregate.dynamic_craft_scenario.func_72(bParam0))
				{
					aggregate.net_main_offline.func_312("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = aggregate.dynamic_craft_scenario.func_83(7, bParam0);
					bVar31 = aggregate.dynamic_craft_scenario.func_83(1, bParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17095))
						{
							MAP::REMOVE_BLIP(&Global_17095);
						}
						Global_17095 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_17095, 673950256);
						aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_17095), 10000, 0, 0, 0, 1);
					}
					else if (!aggregate.dynamic_craft_scenario.func_84(7))
					{
						aggregate.net_main_offline.func_312("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (aggregate.dynamic_craft_scenario.func_86(Global_35, aggregate.dynamic_craft_scenario.func_85(7), 0))
						{
							aggregate.net_main_offline.func_312("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17095))
							{
								MAP::REMOVE_BLIP(&Global_17095);
							}
							Global_17095 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_17095, 673950256);
							aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(0, -482898802, Global_17095), 10000, 0, 0, 0, 1);
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
							Var0.f_1 = bParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							aggregate.dynamic_craft_scenario.func_68(Var10, 0);
						}
						Jump @2060; //curOff = 1557
						aggregate.dynamic_craft_scenario.func_87();
						Jump @2060; //curOff = 1564
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
									aggregate.net_main_offline.func_312("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else if (aggregate.dynamic_craft_scenario.func_91())
								{
									aggregate.net_main_offline.func_312("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										aggregate.dynamic_craft_scenario.func_92();
									}
									else
									{
										aggregate.net_main_offline.func_312("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									aggregate.dynamic_craft_scenario.func_93(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								aggregate.net_main_offline.func_312("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								aggregate.dynamic_craft_scenario.func_93(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else if (aggregate.dynamic_craft_scenario.func_91())
							{
								aggregate.net_main_offline.func_312("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								aggregate.net_main_offline.func_312("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1956162->f_1 |= 2;
							iVar29 = 1;
						}
						Jump @2060; //curOff = 1839
						if (!WEAPON::_0xC853230E76A152DF(aggregate.binoculars.func_8(Global_35, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bParam0, true, 0, false, false);
						}
						return true;
						Jump @2060; //curOff = 1877
						if (aggregate.binoculars.func_8(Global_35, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return true;
						Jump @2060; //curOff = 1918
						Jump @2060; //curOff = 1921
						aggregate.binoculars.func_18(533, 1);
						Jump @2060; //curOff = 1932
						aggregate.dynamic_craft_scenario.func_30(1);
						Jump @2060; //curOff = 1940
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar28 = false;
						return true;
						Jump @2060; //curOff = 1975
						UIAPPS::_LAUNCH_APP_BY_HASH(-76766502);
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							aggregate.dynamic_craft_scenario.func_68(Var10, 0);
						}
						return true;
						Jump @2060; //curOff = 2051
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

void func_24()
{
	bool bVar0;
	struct<5> Var1;
	struct<4> Var6;
	bool bVar10;
	bool bVar11;

	if (aggregate.bandana.func_58(Global_1939221->f_10478) == 2085633299)
	{
		Global_1939057->f_41 = Global_1939221->f_10478;
	}
	else
	{
		Global_1939057->f_42 = Global_1939221->f_10478;
	}
	bVar0 = true;
	if (aggregate.bandana.func_10(Global_1939221->f_10478) == -854348463)
	{
		Var1 = { aggregate.bandana.func_41(Global_1939221->f_10478, 0, 0) };
		Var6 = { aggregate.bandana.func_59(Global_1939221->f_10478, Var1, Var1.f_4, 0) };
		aggregate.dynamic_craft_scenario.func_292(Var6, 1);
		bVar10 = aggregate.doc_book.func_93(0);
		if (aggregate.aberdeenpigfarm.func_45() == 0)
		{
			bVar10 = true;
		}
		if (Global_1939221->f_10477 == -156634416)
		{
			aggregate.dynamic_craft_scenario.func_349(bVar10, 0, -883547903);
		}
		else
		{
			aggregate.dynamic_craft_scenario.func_349(bVar10, 1, 0);
		}
		bVar0 = true;
	}
	else if (Global_1939221->f_10478 == -898386032)
	{
		func_116();
		bVar0 = false;
	}
	else if ((aggregate.bandana.func_10(Global_1939221->f_10478) == 81053684 || aggregate.bandana.func_10(Global_1939221->f_10478) == -525676072) || aggregate.bandana.func_11(Global_1939221->f_10478, -1348134986))
	{
		aggregate.dynamic_craft_scenario.func_78(Global_1939221->f_10478, 0);
		bVar0 = false;
	}
	else if (aggregate.bandana.func_11(Global_1939221->f_10478, 316290104))
	{
		if (aggregate.interactive_campfire.func_895(Global_1939221->f_10478, 0, 0) >= 0)
		{
			bVar0 = true;
		}
	}
	else if (func_118(Global_1939221->f_10478, 1, 0))
	{
		if (aggregate.aberdeenpigfarm.func_45() == -1)
		{
			bVar11 = func_119(Global_1939221->f_10478);
			if (aggregate.bandana.func_30(bVar11, 0))
			{
				if (func_120(bVar11))
				{
					bVar0 = false;
				}
			}
		}
	}
	else if (aggregate.bandana.func_11(Global_1939221->f_10478, -1242251796))
	{
		func_123(Global_1939221->f_10478, aggregate.annesburg.func_253(aggregate.dynamic_craft_scenario.func_486(0)));
	}
	else if (((aggregate.bandana.func_11(Global_1939221->f_10478, -1472964441) && aggregate.doc_book.func_6(Global_1939221->f_10478)) && func_125()) && !func_126(Global_1939221->f_10478))
	{
		func_127();
		aggregate.interactive_campfire.func_76(Global_17173.f_2954.f_17, 1, 0, -142743235);
		if (func_21(Global_1939221->f_10478, 0, 0, 0, 1, 0, 0))
		{
			bVar0 = false;
		}
	}
	else if (func_21(Global_1939221->f_10478, 0, 0, 0, 1, 0, 0))
	{
		bVar0 = false;
	}
	if (aggregate.dynamic_craft_scenario.func_58())
	{
		bVar0 = false;
	}
	Global_1939221->f_10479 = Global_1939221->f_10478;
	aggregate.doc_book.func_51(bVar0);
	aggregate.doc_book.func_280(0);
}

void func_25(bool bParam0, bool bParam1)
{
	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return;
	}
	if (((aggregate.bandana.func_11(bParam0, -1472964441) && aggregate.doc_book.func_6(bParam0)) && func_125()) && func_126(bParam0))
	{
		func_127();
	}
	if (!func_129(bParam0, bParam1, 0, -327174699))
	{
		if (!func_130(bParam0, bParam1, 0, 1, -327174699))
		{
		}
	}
	aggregate.dynamic_craft_scenario.func_349(1, 1, func_6(bParam0, 1224357681));
}

void func_26(bool bParam0)
{
	func_25(bParam0, aggregate.nb_wildman.func_638(aggregate.dynamic_craft_scenario.func_486(0), bParam0, 0, 1, 1));
}

void func_28()
{
	aggregate.net_main_offline.func_6697(-893403924, &(Global_1939221->f_10515), 600, -1, 0, 0);
	func_133();
}

int func_29(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	bVar0 = aggregate.doc_book.func_278(0);
	bVar1 = aggregate.satchel_ui_event_handler.func_32();
	bVar2 = false;
	if (((!bVar0 && !bVar1) && Global_1939221->f_10477 != -156634416) && Global_1939221->f_10477 != 1061777683)
	{
		bVar2 = true;
	}
	Global_1939221->f_10486 = 1;
	Global_1939221->f_10489 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_menu_items");
	Global_1939221->f_10490 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_list_items");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Satchel");
	Global_1939221->f_10503 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSelectLabel", -31549930);
	Global_1939221->f_10504 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectEnabled", true);
	Global_1939221->f_10505 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectVisible", true);
	Global_1939221->f_10506 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptHoldSelectLabel", -1896040097);
	Global_1939221->f_10507 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1939221->f_10508 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectVisible", false);
	Global_1939221->f_10511 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "PromptDiscardAllLabel", HUD::_GET_LABEL_TEXT_BY_HASH(140984675));
	Global_1939221->f_10509 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllEnabled", bVar2);
	Global_1939221->f_10510 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllVisible", bVar2);
	Global_1939221->f_10514 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDropVisibile", bVar2);
	Global_1939221->f_10512 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSendLabel", -31549930);
	if ((aggregate.aberdeenpigfarm.func_45() == -1 && aggregate.doc_book.func_278(0)) && Global_1915170->f_19742 == 2)
	{
		Global_1939221->f_10513 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", true);
	}
	else
	{
		Global_1939221->f_10513 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", false);
	}
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Selected");
	Global_1939221->f_10494 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Name", false);
	Global_1939221->f_10495 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Description", false);
	if (aggregate.doc_book.func_278(0) || aggregate.satchel_ui_event_handler.func_19())
	{
		Global_1939221->f_10496 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "Price", "");
	}
	else
	{
		Global_1939221->f_10496 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, "Price", false);
	}
	if ((aggregate.aberdeenpigfarm.func_45() == -1 && aggregate.doc_book.func_278(0)) && Global_1915170->f_19742 == 2)
	{
		Global_1939221->f_10497 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "SHOP_SEND");
	}
	else if (Global_1915170->f_19742 == 29)
	{
		Global_1939221->f_10497 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "MATERIAL_VALUE");
	}
	else
	{
		Global_1939221->f_10497 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "SHOP_VALUE");
	}
	Global_1939221->f_10498 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Category", false);
	Global_1939221->f_10492 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "DefaultCategoryIndex", false);
	Global_1939221->f_10493 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "CategoryIndex", aggregate.satchel_ui_event_handler.func_134());
	Global_1939221->f_10491 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "CategoryCount", false);
	Global_1939221->f_10499 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "IndexDescription", "");
	Global_1939221->f_10500 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "Tip", "");
	Global_1939221->f_10501 = INVENTORY::_0x9D21B185ABC2DBC4(iVar3, "effects", 0, 0);
	Global_1939221->f_10502 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Folder", false);
	Global_1939221->f_10488 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_category_items");
	func_135(Global_1939221->f_10488);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1939221->f_10488, Global_1939221->f_10452);
	iVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "Collections");
	bVar5 = 485071447;
	if (aggregate.dynamic_craft_scenario.func_162(-593948563 /* GXTEntry: "Legend of the East Satchel" */))
	{
		bVar5 = -1401261769;
	}
	iVar6 = func_137(iVar4, "player", bVar5, "ALL SATCHEL", -1591664384);
	if (iVar6 < 0)
	{
		return 0;
	}
	if ((aggregate.satchel_ui_event_handler.func_45() || aggregate.dynamic_craft_scenario.func_86(Global_35, aggregate.dynamic_craft_scenario.func_85(7), 1)) || (!(func_48(7) || func_49(7)) && aggregate.doc_book.func_278(0)))
	{
		func_137(iVar4, "saddle", -1186165261, "ALL", 724026534);
	}
	func_66(iVar6, &iVar3);
	if (Global_1939221->f_8)
	{
		aggregate.satchel_ui_event_handler.func_138(Global_1939221->f_10477);
		aggregate.satchel_ui_event_handler.func_139(Global_1939221->f_10477, &iVar3, 0);
		aggregate.dynamic_craft_scenario.func_349(1, 0, 0);
	}
	else
	{
		aggregate.dynamic_craft_scenario.func_349(func_140(), 0, 0);
	}
	Global_1939221->f_8 = 0;
	return 1;
}

int func_31(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1315938069;
		case -1559802791:
			return -1694952718;
		case -1268291907:
			return 1510785758;
		case -96974025:
			return 392871877;
		case -1666604090:
			return 92275361;
		case 1561961676:
			return 983460938;
		case -156634416:
			return -1579183876;
		case 1061777683:
			return -419081072;
		case 1783698482:
			return 2061483699;
		case -283002878:
			return -1202687131;
		case -889932290:
			return -1875341370;
		case -2074770370:
			return 89311517;
		case -693134279:
			return 1001811369;
		case -182626652:
			if (Global_1915170->f_19742 == 29)
			{
				return 89311517;
			}
			else
			{
				return 288697952;
			}
			break;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case -2074770370:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(818738914));
			break;
		case -693134279:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(-402412948));
			break;
		case -182626652:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, HUD::_GET_LABEL_TEXT_BY_HASH(-456150746));
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, "");
			break;
	}
	return 0;
}

void func_38(var uParam0)
{
	int iVar0;

	MAP::DISPLAY_RADAR(true);
	Global_1939221->f_1 = 0;
	aggregate.mp_intro.func_1107();
	func_143(uParam0);
	ATTRIBUTE::_0xD962F8579D702DB5();
	HUD::_0x50C803A4CD5932C5(0);
	HUD::_0xD4EE21B7CC7FD350(0);
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
	}
	else
	{
		while (!aggregate.aberdeenpigfarm.func_49(0, 0) && iVar0 < 15)
		{
			iVar0++;
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			BUILTIN::WAIT(0);
		}
	}
}

void func_41()
{
	int iVar0;

	iVar0 = aggregate.bandana.func_72(0);
	func_146(iVar0, 1, 0, 0);
	func_147(iVar0);
}

void func_43(var uParam0, bool bParam1)
{
	struct<14> Var0;
	bool bVar14;

	Var0.f_9 = -1591664384;
	bVar14 = false;
	bVar14 = (*uParam0 - 1);
	while (bVar14 >= 0)
	{
		if (!aggregate.binoculars.func_71(&Var0, bVar14, aggregate.satchel_ui_event_handler.func_42(Global_1939221->f_10477), *uParam0))
		{
		}
		else if (aggregate.doc_book.func_274(Var0.f_9))
		{
		}
		else if (!aggregate.doc_book.func_325(Var0.f_4, bParam1))
		{
		}
		else if (!aggregate.doc_book.func_277(Var0.f_4))
		{
		}
		else if (aggregate.doc_book.func_278(0))
		{
			if (!aggregate.bandana.func_30(Var0.f_4, 0) || Var0.f_11 <= 0)
			{
			}
			else
			{
				if (Global_1939221->f_10478 == 0)
				{
					aggregate.doc_book.func_280(Var0.f_4);
				}
				aggregate.satchel_ui_event_handler.func_152(Var0);
			}
			bVar14 = (bVar14 + -1);
		}
	}
}

int func_48(int iParam0)
{
	int iVar0;

	iParam0 = aggregate.dynamic_craft_scenario.func_175(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!aggregate.fm_deathmatch_controller.func_1997(iParam0))
	{
		return 0;
	}
	iVar0 = aggregate.dynamic_craft_scenario.func_85(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iParam0 = aggregate.dynamic_craft_scenario.func_175(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!aggregate.fm_deathmatch_controller.func_1997(iParam0))
	{
		return 0;
	}
	iVar0 = aggregate.dynamic_craft_scenario.func_85(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (aggregate.blackwater.func_175(vVar1, vVar4) > aggregate.fm_deathmatch_controller.func_3047(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_50(int iParam0, int iParam1)
{
	if (!aggregate.net_main_offline.func_1258((Global_1939221->f_10468[iParam0 /*2*/])->f_1))
	{
		return false;
	}
	return aggregate.binoculars.func_70("ALL", &((Global_1939221->f_10468[iParam0 /*2*/])->f_1), Global_1939221->f_10468[iParam0 /*2*/], iParam1, 0);
}

bool func_63(int iParam0)
{
	bool bVar0;

	bVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, "label");
	return bVar0;
}

void func_64(bool bParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	float fVar12;
	float fVar13;
	bool bVar14;
	float fVar15;
	struct<19> Var16;
	int iVar51;

	bVar0 = true;
	if (aggregate.bandana.func_30(bParam0, 0))
	{
		if (aggregate.bandana.func_11(bParam0, 1147021565))
		{
			if (Global_1939221->f_10477 == -283002878)
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (!aggregate.doc_book.func_278(0))
			{
				iVar2 = aggregate.coffee_drinking.func_52(bParam0);
				if (aggregate.bandana.func_11(bParam0, 1573112293) && !aggregate.dynamic_craft_scenario.func_329(iVar2))
				{
					bVar0 = false;
					ATTRIBUTE::_0xD962F8579D702DB5();
				}
				else
				{
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(bParam0, iVar1);
				}
			}
		}
		func_184(bParam0, uParam1);
		bVar3 = false;
		bVar4 = func_185(bParam0);
		bVar5 = false;
		bVar6 = false;
		bVar7 = false;
		iVar8 = 0;
		if ((aggregate.bandana.func_11(bParam0, -1472964441) && aggregate.doc_book.func_6(bParam0)) && !aggregate.doc_book.func_278(0))
		{
			bVar5 = true;
			if (func_125())
			{
				if (func_126(bParam0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10505, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10504, false);
					if (!func_186())
					{
						bVar4 = true;
						bVar6 = true;
					}
				}
				else
				{
					iVar8 = aggregate.generic_document_inspection.func_145(bParam0, 1);
					if (iVar8 == 0 || iVar8 == 2)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10505, false);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10506, -31549930);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10507, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10508, true);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10504, false);
					}
					bVar7 = true;
				}
			}
			else
			{
				iVar8 = aggregate.generic_document_inspection.func_145(bParam0, 1);
				if (iVar8 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10504, false);
				}
			}
		}
		if (func_6(bParam0, 1224357681) == -1529210462 || func_6(bParam0, 1224357681) == -1414243429)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10503, 1155235276);
		}
		if (aggregate.satchel_ui_event_handler.func_45() || aggregate.satchel_ui_event_handler.func_59())
		{
			bVar9 = aggregate.nb_wildman.func_638(aggregate.dynamic_craft_scenario.func_486(0), bParam0, 0, 1, 1);
		}
		else
		{
			bVar9 = aggregate.fm_mission_controller.func_1632(bParam0, 0, 0, 0);
		}
		if (bParam0 == Global_1939221->f_10481)
		{
			bVar9++;
		}
		iVar10 = aggregate.fishing_core.func_521(bParam0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10494, aggregate.fm_mission_controller.func_1773(bParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10495, func_191(bParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10514, bVar4);
		if (bVar4 && bVar9 > 1)
		{
			bVar3 = true;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10510, bVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10509, bVar3);
		bVar11 = true;
		if (aggregate.doc_book.func_278(0) || aggregate.satchel_ui_event_handler.func_32())
		{
			fVar12 = (BUILTIN::TO_FLOAT(aggregate.mp_intro.func_2437(bParam0)) / 100f);
			fVar13 = (BUILTIN::TO_FLOAT(func_194(func_193(bParam0), 770694722)) / 100f);
			if (aggregate.bandana.func_11(bParam0, 1064293907) || INVENTORY::_0x245D07651B1D183B(bParam0, 1073741824 /* Float: 2f */))
			{
				if (aggregate.net_camp_manager.func_265())
				{
					fVar13 = (fVar13 * 1.25f);
				}
			}
			else if ((INVENTORY::_0x245D07651B1D183B(bParam0, 268435456) || INVENTORY::_0x245D07651B1D183B(bParam0, 134217728)) || aggregate.bandana.func_11(bParam0, 1888974372))
			{
				fVar13 = (fVar13 * 0.4f);
			}
			else
			{
				fVar13 = (fVar13 * 0.6f);
			}
			if (Global_1915170->f_19742 == 2)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10496, MISC::_CREATE_VAR_STRING(10, "SEND_ITEM_VALUE", aggregate.aberdeenpigfarm.func_103(MISC::_0x2B6846401D68E563(fVar12, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else if (Global_1915170->f_19742 == 29)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10496, aggregate.aberdeenpigfarm.func_103(MISC::_0x2B6846401D68E563(fVar13, 2), joaat("COLOR_PURE_WHITE")));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10496, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", aggregate.aberdeenpigfarm.func_103(MISC::_0x2B6846401D68E563(fVar12, 2), joaat("COLOR_PURE_WHITE"))));
			}
			if (!aggregate.doc_book.func_312(bParam0, Global_1915170->f_19742.f_1) && !aggregate.satchel_ui_event_handler.func_32())
			{
				bVar11 = false;
			}
			if (aggregate.fme_animal_tagging.func_654() == 29 && aggregate.generic_document_inspection.func_414(bParam0))
			{
				bVar11 = false;
			}
		}
		if (bVar5)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			if (bVar6)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP_DISCARD"));
			}
			else if (bVar7)
			{
				if (iVar8 == 0 || iVar8 == 2)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, aggregate.generic_document_inspection.func_146(iVar8)));
				}
			}
			else if (iVar8 != 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, aggregate.generic_document_inspection.func_146(iVar8)));
			}
		}
		else if (-492264119 == bParam0 && !func_200())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CANT_READ_LETTER"));
		}
		else if (bVar11)
		{
			if (iVar10 > 1)
			{
				if ((aggregate.fme_animal_tagging.func_654() == 38 && aggregate.bandana.func_30(bParam0, 0)) && aggregate.bandana.func_11(bParam0, 474910316))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, "");
					func_70(bParam0, 56759509);
					func_70(bParam0, 1632674359);
					func_70(bParam0, 2145533727);
					func_70(bParam0, -623226361);
					func_70(bParam0, 332438661);
					func_70(bParam0, -1658668866);
					func_70(bParam0, 1997097980);
					func_70(bParam0, 90781239);
					func_70(bParam0, -1874365462);
					func_70(bParam0, 920487791);
					func_70(bParam0, -668555046);
					func_70(bParam0, -839148413);
					func_70(bParam0, 10424351);
					func_70(bParam0, -1452445456);
				}
				else if (bVar9 >= iVar10)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY_FULL", bVar9, iVar10));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_CAPACITY", bVar9, iVar10));
				}
			}
			else if (iVar10 == 1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_INFINITE", bVar9));
			}
		}
		else if (aggregate.fme_animal_tagging.func_654() == 2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, "");
		}
		else if (aggregate.fme_animal_tagging.func_654() == 29)
		{
			if (aggregate.generic_document_inspection.func_414(bParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_SKINNED_ITEM"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_CRIPPS"));
			}
		}
		else if ((aggregate.aberdeenpigfarm.func_171(aggregate.fme_animal_tagging.func_654()) && ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_69[aggregate.fme_animal_tagging.func_654() /*76*/])->f_20)) && !PED::IS_PED_MALE((Global_1051387->f_69[aggregate.fme_animal_tagging.func_654() /*76*/])->f_20))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM_F"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
		}
	}
	else
	{
		bVar14 = bParam0;
		if (aggregate.aberdeenpigfarm.func_165(bVar14))
		{
			fVar15 = (BUILTIN::TO_FLOAT(func_203(bVar14)) / 100f);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10494, bVar14);
			Var16.f_2 = 5;
			Var16.f_18 = 8;
			if (ITEMDATABASE::_0xF8D09EF8CE61D7BF(bVar14, &Var16))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10495, Var16.f_1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10495, false);
			}
			if (aggregate.doc_book.func_278(0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10496, MISC::_CREATE_VAR_STRING(10, "SHOP_ITEM_VALUE", aggregate.aberdeenpigfarm.func_103(MISC::_0x2B6846401D68E563(fVar15, 2), joaat("COLOR_PURE_WHITE"))));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10496, "");
			}
			if (bVar14 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(1332470872, 0))
			{
				func_71();
			}
			else
			{
				iVar51 = COLLECTION::_0x9ADEE485726025D4(bVar14);
				if (iVar51 != 0)
				{
					func_204(bVar14);
				}
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10494, aggregate.satchel_ui_event_handler.func_30(Global_1939221->f_10477));
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10495, func_31(Global_1939221->f_10477));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, "");
		}
	}
	if (!bVar0)
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1939221->f_10501, false, 0);
	}
	else
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1939221->f_10501, bParam0, 0);
	}
	aggregate.doc_book.func_280(bParam0);
}

void func_66(int iParam0, int iParam1)
{
	Global_1939221->f_10475 = iParam0;
	if (aggregate.dynamic_craft_scenario.func_58())
	{
		if (PED::_0xA911EE21EDF69DAF(Global_35) == 0)
		{
			aggregate.satchel_ui_event_handler.func_138(-1559802791);
		}
	}
	if (aggregate.satchel_ui_event_handler.func_19())
	{
		aggregate.satchel_ui_event_handler.func_138(-2074770370);
	}
	aggregate.satchel_ui_event_handler.func_139(Global_1939221->f_10477, iParam1, 0);
}

void func_67(bool bParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10494, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10495, func_205(bParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1939221->f_10502, bParam0);
	aggregate.doc_book.func_280(0);
	INVENTORY::_0x75CFAC49301E134F(Global_1939221->f_10501, false, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10514, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10510, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10509, false);
	func_206(uParam1);
}

int func_70(bool bParam0, int iParam1)
{
	bool bVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	bool bVar36;

	bVar0 = COLLECTION::_0xCC644BC1DD655269(iParam1, 0);
	if (bVar0 == 0)
	{
		return 0;
	}
	if (!aggregate.fme_animal_tagging.func_1628(bVar0, -489628648, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (&Var1[iVar33 /*2*/] == 0)
		{
		}
		else
		{
			if (&Var1[iVar33 /*2*/] == bParam0)
			{
				bVar36 = true;
			}
			iVar33++;
		}
	}
	if (!bVar36)
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (aggregate.binoculars.func_32(&(Var1[iVar33 /*2*/]), 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

int func_71()
{
	bool bVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	bVar0 = STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(1332470872, 0);
	if (bVar0 == 0)
	{
		return 0;
	}
	if (!aggregate.fme_animal_tagging.func_1628(bVar0, -489628648, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (aggregate.binoculars.func_32(&(Var1[iVar33 /*2*/]), 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

bool func_72(bool bParam0, var uParam1)
{
	return ITEMDATABASE::_0xF8D09EF8CE61D7BF(bParam0, uParam1);
}

void func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	Global_1939221->f_10453 = DATABINDING::_DATABINDING_READ_DATA_INT(Global_1939221->f_10493);
	iVar0 = &Global_1939221->f_10454[Global_1939221->f_10453];
	if (iVar0 != Global_1939221->f_10477)
	{
		Global_1939221->f_38.f_203 = 0;
		Global_1939221->f_10475 = aggregate.satchel_ui_event_handler.func_42(iVar0);
		iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939221->f_10488, iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar1, "CurrentCategory", false);
		iVar2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939221->f_10488, Global_1939221->f_10453);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar2, "CurrentCategory", true);
		aggregate.satchel_ui_event_handler.func_139(iVar0, &iVar2, 0);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (&Global_1939221->f_10454[iVar3] == Global_1939221->f_10477)
			{
				iVar4 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939221->f_10488, Global_1939221->f_10453);
				if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar4, "CurrentCategory"))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar4, "CurrentCategory", true);
				}
			}
			else
			{
				iVar5 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1939221->f_10488, Global_1939221->f_10453);
				if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar5, "CurrentCategory"))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar5, "CurrentCategory", false);
				}
			}
			iVar3++;
		}
	}
}

void func_116()
{
	bool bVar0;

	if (!aggregate.dynamic_craft_scenario.func_123(1, 124032))
	{
		return;
	}
	bVar0 = WEAPON::_0xDA37A053C1522F5D(Global_35, false, 0, 0);
	if (aggregate.doc_book.func_158(bVar0))
	{
		func_303(1, bVar0, aggregate.bandana.func_73());
	}
	else
	{
		aggregate.net_main_offline.func_312("HELP_CANNOT_USE_GUN_OIL", 10000, 0, 0, 0, 1);
	}
}

bool func_118(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == 1453752912 || bParam0 == -1429211481)
	{
		return false;
	}
	if (aggregate.bandana.func_11(bParam0, -887064662) || aggregate.bandana.func_11(bParam0, -839724752))
	{
		if (bParam2)
		{
			return aggregate.bandana.func_11(bParam0, -1238310989);
		}
		else if (bParam1)
		{
			return !aggregate.bandana.func_11(bParam0, -1238310989);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_119(bool bParam0)
{
	int iVar0;
	bool bVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;

	iVar0 = func_6(bParam0, 1697966752);
	bVar1 = false;
	if (iVar0 == 0)
	{
		return false;
	}
	Var2 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar0, 0) };
	if (aggregate.fm_mission_controller.func_6850(Var2, &iVar12, &iVar13, 0))
	{
		iVar14 = 0;
		while (iVar14 < iVar13)
		{
			bVar15 = aggregate.fm_mission_controller.func_6851(iVar14, iVar12);
			if (aggregate.bandana.func_30(bVar15, 0))
			{
				bVar1 = bVar15;
			}
			else
			{
				iVar14++;
			}
		}
		aggregate.fm_mission_controller.func_6855(iVar12);
	}
	return bVar1;
}

bool func_120(bool bParam0)
{
	Global_1913156->f_1577 = bParam0;
	Global_1956162->f_2 = 1;
	aggregate.interactive_campfire.func_46(268435456);
	if (aggregate.interactive_campfire.func_54(8388608))
	{
		aggregate.interactive_campfire.func_46(16777216);
		return true;
	}
	else if ((aggregate.binoculars.func_32(2019377485 /* GXTEntry: "Camp" */, 1) && func_21(2019377485 /* GXTEntry: "Camp" */, 0, 0, 0, 1, 0, 0)) || (aggregate.binoculars.func_32(-1838434463 /* GXTEntry: "Camp" */, 1) && func_21(-1838434463 /* GXTEntry: "Camp" */, 0, 0, 0, 1, 0, 0)))
	{
		Global_1956162->f_4 = MISC::GET_GAME_TIMER();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, 0);
		return true;
	}
	else
	{
		Global_1956162->f_2 = 0;
		aggregate.interactive_campfire.func_53(268435456);
	}
	return false;
}

int func_123(bool bParam0, int iParam1)
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		if (func_319(bParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	if (aggregate.aberdeenpigfarm.func_45() == 0)
	{
		if (func_319(bParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

bool func_125()
{
	return Global_17173.f_2954.f_21;
}

bool func_126(bool bParam0)
{
	if (Global_17173.f_2954.f_17 == bParam0)
	{
		return true;
	}
	return false;
}

void func_127()
{
	aggregate.coffee_drinking.func_5(&(Global_17173.f_2954), 3);
}

bool func_129(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	iParam1 = aggregate.interactive_campfire.func_480(bParam0, iParam1, 1, 1, -142743235, 0, 1);
	if (iParam1 <= 0)
	{
		return true;
	}
	return aggregate.net_camp.func_2423(bParam0, iParam1, bParam2, iParam3);
}

bool func_130(bool bParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (bParam1 < 1)
	{
		return false;
	}
	if (bParam3)
	{
		if (!aggregate.dynamic_craft_scenario.func_542())
		{
			return false;
		}
	}
	if (!aggregate.net_fetch.func_4553(bParam0, bParam1, iParam4, iParam2, 1))
	{
		return false;
	}
	aggregate.net_fetch.func_4554();
	return true;
}

void func_133()
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		if (!aggregate.doc_book.func_337(18, &(Global_1939221->f_10515)))
		{
			return;
		}
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939221->f_10515, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939221->f_10515, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939221->f_10515, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939221->f_10515, 3, "satchel_elements/name(id=%x):description0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1939221->f_10515, 4, "satchel_elements/name(id=%x):category0");
}

void func_135(var uParam0)
{
	Global_1939221->f_10452 = 0;
	if (!Global_1939221->f_8)
	{
		aggregate.satchel_ui_event_handler.func_138(0);
		func_334();
	}
	else if (((((Global_1939221->f_10477 != -2074770370 && Global_1939221->f_10477 != -283002878) && Global_1939221->f_10477 != -889932290) && Global_1939221->f_10477 != 822208792) && Global_1939221->f_10477 != -182626652) && Global_1939221->f_10477 != -693134279)
	{
		aggregate.doc_book.func_280(Global_1939221->f_10477);
	}
	else
	{
		aggregate.satchel_ui_event_handler.func_138(0);
		func_334();
	}
	func_335(uParam0, 0, "All", 443945499);
	func_335(uParam0, -1666604090, "Provisions", 2049523496);
	func_335(uParam0, -96974025, "Remedies", -607937119);
	func_335(uParam0, -1268291907, "Ingredients", 1063323264);
	func_335(uParam0, -1559802791, "Materials", -2096783589);
	func_335(uParam0, -156634416, "Kit", -461468653);
	func_335(uParam0, 1561961676, "Valuables", -2043887681);
	func_335(uParam0, 1061777683, "Documents", 1761254900);
	if (aggregate.binoculars.func_32(-1733092640 /* GXTEntry: "Collector\'s Bag" */, 1))
	{
		func_335(uParam0, 1783698482, "Collections", -1401643540);
	}
	func_336(uParam0);
	func_337(uParam0);
	func_338(uParam0);
	if (aggregate.doc_book.func_278(0))
	{
		if (aggregate.fme_animal_tagging.func_654() == 2)
		{
			aggregate.satchel_ui_event_handler.func_138(-693134279);
		}
		else
		{
			aggregate.satchel_ui_event_handler.func_138(-182626652);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_10491, Global_1939221->f_10452);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_10493, aggregate.satchel_ui_event_handler.func_134());
}

int func_137(int iParam0, char* sParam1, bool bParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1939221->f_10467;
	if (iVar0 >= 3)
	{
		return -1;
	}
	if (!aggregate.binoculars.func_70(sParam3, &((Global_1939221->f_10468[iVar0 /*2*/])->f_1), Global_1939221->f_10468[iVar0 /*2*/], iParam4, 0))
	{
		return -1;
	}
	Global_1939221->f_10467++;
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam0, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar1, "label", bParam2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(iParam0, -1, -1287062382, iVar1);
	return iVar0;
}

bool func_140()
{
	int iVar0;
	int iVar1;

	if (Global_1939221->f_37 == 0)
	{
		Global_1939221->f_10453 = 0;
	}
	else
	{
		iVar0 = Global_1939221->f_10453;
		iVar1 = (Global_1939221->f_10452 - 1);
		switch (Global_1939221->f_37)
		{
			case -2074770370:
			case -693134279:
			case -182626652:
				Global_1939221->f_10453 = iVar1;
				break;
		}
		if (Global_1939221->f_37 == -283002878)
		{
			if (aggregate.doc_book.func_278(0))
			{
				Global_1939221->f_10453 = (iVar1 - 1);
			}
			else
			{
				Global_1939221->f_10453 = iVar1;
			}
		}
		func_73(iVar0);
		return true;
	}
	return false;
}

void func_143(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	while (Global_1939221->f_10467 > 0)
	{
		Global_1939221->f_10467 = (Global_1939221->f_10467 - 1);
		aggregate.net_main_offline.func_1258((Global_1939221->f_10468[Global_1939221->f_10467 /*2*/])->f_1);
	}
}

void func_146(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<14> Var3;
	struct<14> Var17;

	if (aggregate.player_horse.func_451(Global_35))
	{
		bParam2 = true;
	}
	iVar0 = -1;
	bVar2 = false;
	Var3.f_9 = -1591664384;
	Var17 = { aggregate.binoculars.func_85(0, 1084182731, -1591664384, -1591664384, 0, 0, 0) };
	if (aggregate.binoculars.func_88(&Var17, &iVar0, &iVar1, bParam3))
	{
		bVar2 = false;
		while (bVar2 < iVar1)
		{
			if (aggregate.binoculars.func_71(&Var3, bVar2, iVar0, iVar1))
			{
				if (!aggregate.doc_book.func_275(Var3))
				{
				}
				else if (bParam1)
				{
					aggregate.doc_book.func_313(iParam0, Var3.f_4, 1);
				}
				else if (bParam2)
				{
					aggregate.doc_book.func_313(iParam0, Var3.f_4, 0);
				}
				else if (Var3.f_4 != 1259508039)
				{
					aggregate.doc_book.func_313(iParam0, Var3.f_4, aggregate.satchel_ui_event_handler.func_346(Var3.f_4));
				}
			}
			bVar2++;
		}
		aggregate.net_main_offline.func_1258(iVar0);
	}
}

void func_147(int iParam0)
{
	aggregate.doc_book.func_313(iParam0, joaat("weapon_kit_binoculars"), aggregate.bandana.func_21(32));
	aggregate.doc_book.func_313(iParam0, 1652431022 /* GXTEntry: "Refined Binoculars" */, aggregate.bandana.func_21(32));
	aggregate.doc_book.func_313(iParam0, joaat("weapon_kit_camera"), aggregate.bandana.func_21(64));
	aggregate.doc_book.func_313(iParam0, -1516555556 /* GXTEntry: "Horse Brush" */, aggregate.bandana.func_21(1024));
	aggregate.doc_book.func_313(iParam0, -862059856 /* GXTEntry: "Metal Detector" */, aggregate.bandana.func_21(32768));
	func_348(iParam0, aggregate.bandana.func_21(8192));
	func_349(iParam0, aggregate.bandana.func_21(128));
	func_350(iParam0, aggregate.bandana.func_21(4));
	func_351(iParam0, aggregate.bandana.func_21(8));
	func_352(iParam0, aggregate.bandana.func_21(1));
}

void func_165(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_6(bParam0, 1224357681);
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

int func_171(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	struct<14> Var5;

	if (Global_1901929->f_637.f_32)
	{
		return 0;
	}
	if (aggregate.aberdeenpigfarm.func_45() == 0)
	{
		iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::GET_PLAYER_INDEX());
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
		if (aggregate.binoculars.func_70("ALL SATCHEL", &iVar2, &bVar3, -2015960939, 1))
		{
			if (bVar3 < 1)
			{
			}
			else
			{
				Var5.f_9 = -1591664384;
				bVar4 = false;
				while (bVar4 < bVar3)
				{
					if (!aggregate.binoculars.func_71(&Var5, bVar4, iVar2, bVar3))
					{
					}
					else if (!aggregate.bandana.func_30(Var5.f_4, 0))
					{
					}
					else if (Var5.f_4 == 1259508039)
					{
					}
					else
					{
						iVar1++;
						if (bParam0)
						{
							if (!aggregate.doc_book.func_277(Var5.f_4))
							{
							}
							else
							{
								aggregate.satchel_ui_event_handler.func_176(Var5, 1);
							}
						}
					}
					bVar4++;
				}
			}
			aggregate.net_main_offline.func_1258(iVar2);
		}
		return iVar1;
	}
	return 0;
}

void func_184(bool bParam0, var uParam1)
{
	if (aggregate.satchel_ui_event_handler.func_32())
	{
		func_390(1);
		if (aggregate.satchel_ui_event_handler.func_19())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), 75706034);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), -31549930);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10508, true);
	}
	else if (aggregate.doc_book.func_278(0) || aggregate.satchel_ui_event_handler.func_32())
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_10505))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10504, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"));
		}
	}
	else
	{
		func_392(bParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), func_393(bParam0));
		func_394(bParam0, uParam1);
	}
}

int func_185(bool bParam0)
{
	if (func_186())
	{
		return 0;
	}
	if (Global_1939221->f_10480 == bParam0)
	{
		return 0;
	}
	if (!aggregate.doc_book.func_278(0) && !aggregate.satchel_ui_event_handler.func_32())
	{
		if ((((aggregate.fishing_core.func_521(bParam0, 0) == 1 || aggregate.bandana.func_11(bParam0, 173360570)) || aggregate.bandana.func_11(bParam0, 1291597743)) || aggregate.bandana.func_11(bParam0, -928967997)) || aggregate.bandana.func_11(bParam0, 747873593))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_186()
{
	return Global_1939221->f_11;
}

int func_191(bool bParam0)
{
	int iVar0;

	iVar0 = aggregate.coffee_drinking.func_52(bParam0);
	if ((iVar0 != 0 && !aggregate.herb.func_3(aggregate.coffee_drinking.func_52(bParam0))) && !aggregate.herb.func_29(aggregate.coffee_drinking.func_52(bParam0)))
	{
		if (!aggregate.dynamic_craft_scenario.func_329(iVar0))
		{
			return -1994084079 /* GXTEntry: "The properties of this herb are not known yet." */;
		}
	}
	return aggregate.hub_offers.func_202(bParam0);
}

int func_193(bool bParam0)
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
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return 117556329;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return 469453151;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 469453151;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return 469453151;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return 621465116;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return 621465116;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 621465116;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return -523607607;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -523607607;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return -523607607;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return 1662628197;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return 1662628197;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return 1662628197;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return 2084847747;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return 2084847747;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return 2084847747;
		case -100913452: /* GXTEntry: "Perfect Songbird Carcass" */
			return 1656226638;
		case 72307351: /* GXTEntry: "Poor Songbird Carcass" */
			return 1656226638;
		case -318217782: /* GXTEntry: "Good Songbird Carcass" */
			return 1656226638;
		case 313332607: /* GXTEntry: "Perfect Sparrow Carcass" */
			return -1608525320;
		case -1867587109: /* GXTEntry: "Good Sparrow Carcass" */
			return -1608525320;
		case 182158309: /* GXTEntry: "Poor Sparrow Carcass" */
			return -1608525320;
		case 444160793: /* GXTEntry: "Perfect Squirrel Carcass" */
			return 1717540687;
		case 1205453831: /* GXTEntry: "Poor Squirrel Carcass" */
			return 1717540687;
		case 1815539745: /* GXTEntry: "Good Squirrel Carcass" */
			return 1717540687;
		case -124539232: /* GXTEntry: "Perfect Toad Carcass" */
			return 1622797153;
		case -2123600216: /* GXTEntry: "Poor Toad Carcass" */
			return 1622797153;
		case -146690338: /* GXTEntry: "Good Toad Carcass" */
			return 1622797153;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return -252750557;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return -252750557;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -252750557;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 513869240;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
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

int func_194(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	if (!ITEMDATABASE::_0xEF254F1A4C08B7E6(bParam0))
	{
		return 0;
	}
	if (!aggregate.bandana.func_30(bParam1, 0))
	{
		return 0;
	}
	iVar4 = ITEMDATABASE::_0x3FAA928A79591761(bParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!ITEMDATABASE::_0x121D2005DD64496B(bParam0, iVar0, &Var1))
		{
		}
		else if (Var1 == bParam1)
		{
			return Var1.f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_200()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
	{
		if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (!aggregate.mp_freemode_tutorial.func_124(PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	return true;
}

int func_203(bool bParam0)
{
	return func_194(bParam0, 2084597891 /* GXTEntry: "Money" */);
}

int func_204(bool bParam0)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;

	if (!aggregate.fme_animal_tagging.func_1628(bParam0, -489628648, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (aggregate.binoculars.func_32(&(Var0[iVar32 /*2*/]), 1))
		{
			iVar33++;
		}
		iVar34++;
		iVar32++;
	}
	if (iVar33 >= iVar34)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar33, iVar34));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_10500, MISC::_CREATE_VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar33, iVar34));
	}
	return 1;
}

int func_205(bool bParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::_0x7907969497EA92F5(Global_1939221->f_10515))
	{
		return 0;
	}
	Var0 = Global_1939221->f_10515;
	Var0.f_2 = 3;
	Var0.f_3 = bParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_206(var uParam0)
{
	func_390(0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_391(), 327167317);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_414(), DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam0, "focusable"));
}

void func_303(int iParam0, bool bParam1, struct<4> Param2)
{
	bool bVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	if (PED::IS_PED_ON_MOUNT(Global_35) && !aggregate.dynamic_craft_scenario.func_241(Global_35))
	{
		return;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return;
	}
	else if (PED::IS_PED_RELOADING(Global_35))
	{
		return;
	}
	if (iParam0 == 1)
	{
		bVar0 = bParam1;
		if (!Global_1939057->f_9 && !PED::_0x4912DFE492DB98CD(Global_35, "inInspectionMode"))
		{
			TASK::_TASK_ITEM_INTERACTION_3(PLAYER::PLAYER_PED_ID(), bVar0, &Param2, 0, 0, 0, -1082130432 /* Float: -1f */);
			Global_1939057->f_8 = 1;
			Global_1939057->f_66 = { Param2 };
		}
	}
}

bool func_319(bool bParam0, int iParam1)
{
	int iVar0;

	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return false;
	}
	if (aggregate.net_main_offline.func_5769(bParam0))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (aggregate.net_main_offline.func_5769(bParam0) && TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (func_521(iVar0, bParam0))
		{
			return true;
		}
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return false;
	}
	if (aggregate.net_main_offline.func_2898() == 1)
	{
		aggregate.net_main_offline.func_4603(iVar0);
		aggregate.net_main_offline.func_4603(bParam0);
		aggregate.net_main_offline.func_4603(1);
	}
	else
	{
		return false;
	}
	return true;
}

void func_334()
{
	int iVar0;

	iVar0 = func_549();
	if (func_549() == 822208792)
	{
		iVar0 = 0;
	}
	if (aggregate.doc_book.func_278(0))
	{
		if (aggregate.fme_animal_tagging.func_654() == 2)
		{
			iVar0 = -693134279;
		}
		else
		{
			iVar0 = -182626652;
		}
	}
	if (aggregate.satchel_ui_event_handler.func_32())
	{
		iVar0 = -2074770370;
	}
	aggregate.doc_book.func_280(iVar0);
}

void func_335(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(uParam0, Global_1939221->f_10452);
	bVar1 = aggregate.net_hunting_wagon.func_105(iParam1);
	iVar2 = iParam1;
	iVar3 = iVar0;
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_10492, Global_1939221->f_10452);
		Global_1939221->f_10453 = Global_1939221->f_10452;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(8, iVar3, sParam2, sParam3, iVar2, bVar1);
	Global_1939221->f_10454[Global_1939221->f_10452] = iParam1;
	Global_1939221->f_10452++;
}

void func_336(var uParam0)
{
	if (aggregate.satchel_ui_event_handler.func_45())
	{
		func_335(uParam0, -283002878, "Horse", 771764772);
	}
}

void func_337(var uParam0)
{
	if (aggregate.satchel_ui_event_handler.func_59())
	{
		func_335(uParam0, -889932290, "Wagon", 771764772);
	}
}

void func_338(var uParam0)
{
	if (aggregate.doc_book.func_278(0))
	{
		if (aggregate.fme_animal_tagging.func_654() == 2)
		{
			func_335(uParam0, -693134279, "Send", -1346803962);
		}
		else
		{
			func_335(uParam0, -182626652, "Sell", -1523466777);
		}
	}
	else if (aggregate.satchel_ui_event_handler.func_32())
	{
		func_335(uParam0, -2074770370, "Donations", -1966717115);
	}
}

void func_348(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -854348463;
	func_553(iParam0, Var0, bParam1, 0);
}

void func_349(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -1823706425;
	func_553(iParam0, Var0, bParam1, 0);
}

void func_350(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_1 = 1835126290;
	Var0.f_4 = 81053684;
	func_553(iParam0, Var0, bParam1, 0);
}

void func_351(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -525676072;
	func_553(iParam0, Var0, bParam1, 0);
}

void func_352(int iParam0, bool bParam1)
{
	struct<14> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_4 = -1719060085;
	func_553(iParam0, Var0, bParam1, 0);
}

int func_374(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	if (!aggregate.aberdeenpigfarm.func_165(bParam0))
	{
		return 0;
	}
	iVar0 = 1;
	if (aggregate.fme_animal_tagging.func_1628(bParam0, -489628648, &Var2, &iVar1, 0, 1))
	{
		iVar0 = 99;
		iVar33 = 0;
		while (iVar33 < iVar1)
		{
			if (&Var2[iVar33 /*2*/] == 0)
			{
			}
			else
			{
				iVar34 = aggregate.fm_mission_controller.func_1632(&(Var2[iVar33 /*2*/]), 0, 0, 0);
				if (iVar34 < iVar0)
				{
					iVar0 = iVar34;
				}
				iVar33++;
			}
		}
	}
	if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_390(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10508, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10507, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10504, !bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10505, !bParam0);
}

var func_391()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_10508))
	{
		return Global_1939221->f_10506;
	}
	return Global_1939221->f_10503;
}

void func_392(bool bParam0)
{
	if (aggregate.bandana.func_10(bParam0) == -854348463)
	{
		func_390(0);
	}
	else if (((((((((((((((aggregate.bandana.func_11(bParam0, 1101678925) || aggregate.bandana.func_11(bParam0, 1686880204)) || aggregate.bandana.func_11(bParam0, 173360570)) || aggregate.bandana.func_11(bParam0, -121341956)) || aggregate.bandana.func_11(bParam0, 2000026003)) || aggregate.bandana.func_11(bParam0, -1540973036)) || aggregate.bandana.func_11(bParam0, 1192444843)) || func_6(bParam0, 1224357681) == 1728734446) || (aggregate.doc_book.func_330(bParam0) && !aggregate.bandana.func_11(bParam0, 316290104))) || ((aggregate.aberdeenpigfarm.func_45() == 0 && func_118(bParam0, 1, 0)) && !aggregate.bandana.func_11(bParam0, 316290104))) || bParam0 == -601932535) || bParam0 == -898386032) || bParam0 == 1305393429) || bParam0 == 85134332) || bParam0 == -1077794372) || bParam0 == 894654881)
	{
		func_577();
	}
	else if ((aggregate.bandana.func_10(bParam0) == 1802292908 && func_6(bParam0, -949239683) == 0) && !bParam0 == -569063887)
	{
		func_577();
	}
	else if (aggregate.doc_book.func_330(bParam0))
	{
		if (aggregate.bandana.func_11(bParam0, 316290104))
		{
			func_390(1);
		}
		else
		{
			func_390(1);
		}
	}
	else if (aggregate.bandana.func_11(bParam0, 316290104) || func_118(bParam0, 1, 0))
	{
		func_390(1);
	}
	else
	{
		func_390(0);
	}
}

int func_393(bool bParam0)
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_10508))
	{
		if (aggregate.bandana.func_11(bParam0, 316290104))
		{
			return -1896040097;
		}
		else if (func_118(bParam0, 1, 0))
		{
			return -2086473757;
		}
	}
	else if (aggregate.bandana.func_11(bParam0, 1147021565))
	{
		if (aggregate.bandana.func_11(bParam0, -1242251796))
		{
			return -31549930;
		}
		switch (func_6(bParam0, -949239683))
		{
			case -273840653:
			case 238865292:
			case 999632878:
			case 1130235258:
			case 1177617310:
				return -1925143884;
			case -1915958659:
			case -809056541:
			case 89124942:
			case 1451036371:
			case 1859991422:
			case 1891031775:
				return 356040554;
			case -1919515848:
			case -262371497:
			case 845883585:
			case 1443104131:
				return -31549930;
		}
	}
	else if (func_6(bParam0, 1224357681) == -883547903)
	{
		return -1948542959;
	}
	return -31549930;
}

void func_394(bool bParam0, var uParam1)
{
	bool bVar0;
	struct<10> Var1;
	struct<4> Var15;

	bVar0 = true;
	switch (aggregate.bandana.func_10(bParam0))
	{
		case -1793506273:
		case 235313564:
		case 320213863:
			if (((!aggregate.bandana.func_11(bParam0, 949916894) && !aggregate.bandana.func_11(bParam0, 747873593)) && !func_6(bParam0, -949239683) == -1337515701) && !aggregate.bandana.func_11(bParam0, 1147021565))
			{
				bVar0 = false;
			}
			break;
	}
	if (aggregate.bandana.func_58(bParam0) == joaat("money"))
	{
		bVar0 = false;
	}
	if (85134332 == bParam0)
	{
		bVar0 = false;
	}
	if (-492264119 == bParam0 && !func_200())
	{
		bVar0 = false;
	}
	if (func_6(bParam0, -949239683) == -1337515701)
	{
		Var1.f_9 = -1591664384;
		Var15 = { aggregate.bandana.func_41(bParam0, 0, 0) };
		if (aggregate.bandana.func_66(Var15, -1162387149, &Var1, 0, -1))
		{
			if (Var1.f_4 == bParam0)
			{
				bVar0 = false;
			}
		}
	}
	if (aggregate.bandana.func_11(bParam0, 316290104))
	{
		bVar0 = true;
	}
	else if (func_118(bParam0, 1, 0))
	{
		if (aggregate.aberdeenpigfarm.func_45() == 0 || !func_579())
		{
			bVar0 = false;
		}
		else
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
		}
	}
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "focusable"))
	{
		bVar0 = false;
	}
	if (MISC::IS_BIT_SET(&Global_1051078, 0) && aggregate.bandana.func_11(bParam0, 1573112293))
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_414(), bVar0);
}

var func_414()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939221->f_10508))
	{
		return Global_1939221->f_10507;
	}
	return Global_1939221->f_10504;
}

bool func_521(int iParam0, bool bParam1)
{
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		return false;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 176, true);
	TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	TASK::TASK_REVIVE_TARGET(Global_35, iParam0, bParam1);
	aggregate.interactive_campfire.func_76(bParam1, 1, 0, 562618531);
	return true;
}

int func_549()
{
	return Global_1939221->f_37;
}

void func_553(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (aggregate.binoculars.func_88(&uParam1, &iVar0, &bVar1, bParam16))
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 < bVar1)
		{
			if (aggregate.binoculars.func_71(&Var3, bVar2, iVar0, bVar1))
			{
				aggregate.doc_book.func_313(iParam0, Var3.f_4, bParam15);
			}
			bVar2++;
		}
	}
	aggregate.net_main_offline.func_1258(iVar0);
}

void func_562(bool bParam0)
{
	bool bVar0;
	struct<2> Var1;
	int iVar4;
	int iVar5;
	bool bVar6;

	bVar0 = bParam0;
	Var1.f_1 = aggregate.satchel_ui_event_handler.func_704(bVar0);
	Var1 = aggregate.satchel_ui_event_handler.func_705(bVar0);
	iVar4 = 1;
	iVar5 = aggregate.satchel_ui_event_handler.func_706(bVar0);
	bVar6 = COLLECTION::_0xCC644BC1DD655269(iVar5, 0);
	if (aggregate.aberdeenpigfarm.func_165(bVar6))
	{
		iVar4 = func_374(bVar6);
	}
	aggregate.satchel_ui_event_handler.func_376(-1715238242, bParam0, &Var1, aggregate.satchel_ui_event_handler.func_707(bParam0), iVar4, 0, 0, joaat("COLOR_PURE_WHITE"));
	Global_1939221->f_38.f_203++;
	Global_1939221->f_38.f_1++;
}

void func_576(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	if (aggregate.binoculars.func_88(uParam0, &iVar0, &bVar1, bParam1))
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 < bVar1)
		{
			if (aggregate.binoculars.func_71(&Var3, bVar2, iVar0, bVar1))
			{
				if (!aggregate.doc_book.func_214(&Var3, 0))
				{
				}
				else if (bParam2)
				{
					aggregate.satchel_ui_event_handler.func_181(Var3.f_4, bParam3, 0);
				}
				else
				{
					func_165(Var3.f_4);
				}
			}
			bVar2++;
		}
	}
	aggregate.net_main_offline.func_1258(iVar0);
}

void func_577()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10508, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10507, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10504, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1939221->f_10505, false);
}

bool func_579()
{
	int iVar0;
	int iVar1;

	if (Global_1956162->f_2)
	{
		return false;
	}
	if (aggregate.hanging_carcass.func_9())
	{
		return false;
	}
	if (aggregate.dynamic_craft_scenario.func_69())
	{
		return false;
	}
	if (Global_1939057->f_10)
	{
		return false;
	}
	if (Global_1939057->f_11)
	{
		return false;
	}
	if (Global_1939057->f_12)
	{
		return false;
	}
	if (aggregate.camera_item.func_66())
	{
		return false;
	}
	if (aggregate.fm_mission_controller.func_5178())
	{
		return false;
	}
	if (aggregate.interactive_campfire.func_54(8388608))
	{
		iVar0 = TASK::_0x2D0571BB55879DA2(Global_35);
		iVar1 = iVar0;
		if (((iVar1 == 1020517461 || iVar1 == 1259174088) || iVar1 == -1075420544) || iVar1 == -1767895052)
		{
			return true;
		}
		return false;
	}
	if (!aggregate.dynamic_craft_scenario.func_22(0, 1))
	{
		return false;
	}
	return true;
}

