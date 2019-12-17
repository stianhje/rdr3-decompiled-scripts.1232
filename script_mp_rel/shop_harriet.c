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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == shop_bait.__EntryFunction__

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
		if (!func_717(&(uParam0->f_4), iParam1, iParam2, aggregate.shop_bait.func_725(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_718(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate.camera_item.func_77(&(uParam0->f_4), 135139);
	aggregate.camera_item.func_77(&(uParam0->f_4), 135176);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 135204);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 135739);
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

void func_687(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate.doc_book.func_307() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1011(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate.mp_intro.func_1329(uParam0, 189483);
			aggregate.mp_intro.func_1329(uParam0, 190403);
			aggregate.mp_intro.func_1329(uParam0, 191003);
			aggregate.mp_intro.func_1329(uParam0, 191297);
			aggregate.mp_intro.func_1329(uParam0, 191500);
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

bool func_717(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
	uParam0->f_1279 = 214116;
	uParam0->f_1280 = 214125;
	uParam0->f_1281 = 214134;
	uParam0->f_1282 = 214134;
	uParam0->f_222 = iParam5;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

bool func_718(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	uParam0->f_1279 = 214116;
	uParam0->f_1280 = 214125;
	uParam0->f_1281 = 214134;
	uParam0->f_1282 = 214134;
	uParam0->f_222 = iParam4;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

bool func_1011(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
	uParam0->f_2094.f_149 = 247426;
	uParam0->f_2094.f_150 = 248310;
	uParam0->f_2094.f_151 = 249106;
	uParam0->f_2094.f_152 = 249225;
	uParam0->f_2094.f_46 = 1;
	return true;
}

void func_1552(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	bVar3 = bParam1;
	iVar4 = aggregate.bandana.func_10(bVar3);
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
			if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
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
				Jump @3217; //curOff = 253
				if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
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
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						bVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == aggregate.bandana.func_10(bVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
						}
					}
					Jump @3217; //curOff = 543
					if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -1473580422))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate.bandana.func_11(bVar1, 1469783911))
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
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, 1583165364))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate.bandana.func_10(bVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -1650340550))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate.bandana.func_10(bVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
						}
						Jump @3217; //curOff = 918
						if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, 1718965018))
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
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar1, 1090938458)) && aggregate.bandana.func_11(bVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
							}
							Jump @3217; //curOff = 1171
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
							Jump @3217; //curOff = 1454
							aggregate.dynamic_craft_scenario.func_286(16, iVar5);
							if (aggregate.dynamic_craft_scenario.func_170(bVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -985549034))
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
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
								}
								Jump @3217; //curOff = 1748
								if (aggregate.dynamic_craft_scenario.func_170(bVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && aggregate.bandana.func_11(bVar3, -985549034))
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
									Jump @3217; //curOff = 1989
									if (aggregate.dynamic_craft_scenario.func_170(bVar3, 0))
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
											bVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (aggregate.bandana.func_11(bVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												aggregate.dynamic_craft_scenario.func_286(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												bVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate.bandana.func_10(bVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													aggregate.dynamic_craft_scenario.func_286(iParam2, iVar5);
												}
											}
										}
										Jump @3217; //curOff = 2215
										if (aggregate.dynamic_craft_scenario.func_170(bVar3, 0))
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
											if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate.bandana.func_11(bVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3217; //curOff = 2439
											if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
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
												bVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((aggregate.bandana.func_11(bVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate.bandana.func_10(bVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
												if ((aggregate.bandana.func_11(bVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate.bandana.func_10(bVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
												iVar0 = 37;
												if (aggregate.bandana.func_11(bVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
												}
											}
											Jump @3217; //curOff = 2922
											iVar0 = 37;
											if (aggregate.bandana.func_11(bVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3004
											iVar0 = 10;
											if (-525676072 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3068
											iVar0 = 12;
											if (81053684 == aggregate.bandana.func_10(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
											}
											Jump @3217; //curOff = 3132
											if (!aggregate.bandana.func_11(bVar3, -1348134986))
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
					if (aggregate.dynamic_craft_scenario.func_363(99217379) && aggregate.bandana.func_11(bVar3, -1230785684))
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
						if ((bParam1 == &Global_1951131->f_81[iParam2 /*12*/] || aggregate.bandana.func_11(bVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!aggregate.dynamic_craft_scenario.func_170(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate.bandana.func_11(bVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!aggregate.dynamic_craft_scenario.func_170(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate.bandana.func_11(bVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate.dynamic_craft_scenario.func_286(iVar0, iVar5);
					}
					break;
				case -1130352927:
					if (bParam1 == -230310728 || bParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
				case 1367443060:
					if (bParam1 == 1733464892)
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

