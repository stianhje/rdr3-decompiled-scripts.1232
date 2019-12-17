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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<181> Var0;
	float fVar182;
	bool bVar183;
	int iVar184;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	Var0.f_2.f_2 = 1086324736;
	Var0.f_2.f_11.f_1 = 20;
	Var0.f_2.f_33 = 20;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (!ScriptParam_0.f_3 && !Var0.f_180)
		{
			aggregate.coffee_drinking.func_1(0);
		}
		func_2();
	}
	func_3(&ScriptParam_0, &(Var0.f_2));
	Var0.f_180 = 1;
	fVar182 = func_4(&Var0, &(ScriptParam_0.f_1));
	if (Var0.f_180)
	{
		Var0.f_2.f_2 = 1f;
	}
	else
	{
		Var0.f_2.f_2 = 4f;
	}
	if (!ScriptParam_0.f_3 && !Var0.f_180)
	{
		aggregate.coffee_drinking.func_1(1);
		func_5();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			if (!Var0.f_180)
			{
				iVar184 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
				func_6(&Var0);
				if (iVar184 == 1587785400 || iVar184 == 1183277175)
				{
					func_7(&Var0);
				}
				else if (iVar184 == 1342098323 || iVar184 == 79398913)
				{
					func_8(&Var0);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(Global_35, true))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			aggregate.generic_alcohol_item.func_9(&(Var0.f_2));
		}
		switch (Var0)
		{
			case 0:
				if (aggregate.bandana.func_30(Var0.f_2, 0))
				{
					aggregate.coffee_drinking.func_4(&(Var0.f_2));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_2.f_2 = 1f;
					aggregate.coffee_drinking.func_5(&Var0, 3);
				}
				else
				{
					aggregate.coffee_drinking.func_5(&Var0, 1);
				}
				break;
			case 1:
				if (!Var0.f_180)
				{
					func_13(iVar184);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_2.f_1 = (1 + Var0.f_2.f_1);
					func_14(fVar182);
					aggregate.coffee_drinking.func_11(&(Var0.f_2), IntToFloat(Var0.f_2.f_1) >= Var0.f_2.f_2);
				}
				if (IntToFloat(Var0.f_2.f_1) >= Var0.f_2.f_2)
				{
					func_16(Var0.f_2, 0);
					aggregate.coffee_drinking.func_5(&Var0, 2);
				}
				if (!Var0.f_180)
				{
					if ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
					{
						aggregate.coffee_drinking.func_5(&Var0, 2);
					}
				}
				break;
			case 2:
				if (!Var0.f_180)
				{
					if (iVar184 == -1493684811 || iVar184 == -752898125)
					{
						TASK::_0xB35370D5353995CB(Global_35, func_17(Var0.f_2, iVar184), 1048576000 /* Float: 0.25f */);
						aggregate.coffee_drinking.func_5(&Var0, 4);
					}
					else if (iVar184 != 1587785400)
					{
						if (iVar184 == 1342098323)
						{
							PED::_0xD65FDC686A031C83(Global_35, -1268666326, 1.5f);
							PED::_0x6D07B371E9439019(Global_35);
							aggregate.coffee_drinking.func_5(&Var0, 4);
						}
					}
					else
					{
						if (TASK::_0x2D0571BB55879DA2(Global_35) != -1177373461)
						{
							PED::_0xD65FDC686A031C83(Global_35, -872596011, 3f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						else
						{
							PED::_0xD65FDC686A031C83(Global_35, 1114994170, 1.5f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						aggregate.coffee_drinking.func_5(&Var0, 4);
					}
				}
				else
				{
					aggregate.coffee_drinking.func_5(&Var0, 4);
				}
				break;
			case 3:
				aggregate.coffee_drinking.func_11(&(Var0.f_2), 1);
				func_16(Var0.f_2, 0);
				aggregate.coffee_drinking.func_5(&Var0, 4);
				break;
			case 4:
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				else if (!bVar183)
				{
					if ((aggregate.aberdeenpigfarm.func_45() == -1 && aggregate.angryisolationist.func_40(0)) && aggregate.bandana.func_11(Var0.f_2, 1490540191))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
						{
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
							{
								if (aggregate.fme_condor_egg.func_1100(Global_35, "Player_Sick_Drinking_Cough", joaat("speech_params_force"), 0, 1, 0, 0, 1))
								{
									bVar183 = true;
								}
							}
						}
					}
					else
					{
						bVar183 = true;
					}
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if ((Var0 <= 1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID())) && Var0.f_180)
	{
		if (!PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID()))
		{
			aggregate.coffee_drinking.func_11(&(Var0.f_2), 1);
			func_16(Var0.f_2, 0);
		}
	}
	if (!ScriptParam_0.f_3 && !Var0.f_180)
	{
		aggregate.coffee_drinking.func_1(0);
	}
}

void func_2()
{
	if (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_2;
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_35;
}

float func_4(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;

	switch (uParam0->f_2)
	{
		case 731751336: /* GXTEntry: "Opened Guarma Rum" */
			fVar0 = 0.1f;
			break;
		case -1999230166: /* GXTEntry: "Opened Fine Brandy" */
			fVar0 = 0.1f;
			break;
		case -1724285052: /* GXTEntry: "Opened Gin" */
			fVar0 = 0.1f;
			break;
		case 1483206625: /* GXTEntry: "Guarma Rum" */
			fVar0 = 0.17f;
			break;
		case -24362764: /* GXTEntry: "Beer" */
			fVar0 = 0.025f;
			uParam0->f_180 = 0;
			break;
		case -368374107:
			fVar0 = 0.025f;
			uParam0->f_180 = 0;
			break;
		case 785091089: /* GXTEntry: "Fine Brandy" */
			fVar0 = 0.17f;
			break;
		case -221280702: /* GXTEntry: "Gin" */
			fVar0 = 0.17f;
			break;
		case -1907044919: /* GXTEntry: "Opened Kentucky Bourbon" */
			fVar0 = 0.13f;
			break;
		case 688258043: /* GXTEntry: "Kentucky Bourbon" */
			fVar0 = 0.25f;
			break;
		case -1679900928:
			fVar0 = 0.025f;
			uParam0->f_180 = 0;
			break;
		case -520953319:
			fVar0 = 0.13f;
			uParam0->f_180 = 0;
			break;
		case 299161628: /* GXTEntry: "Moonshine" */
			fVar0 = 0.3f;
			break;
		case -21093309: /* GXTEntry: "Aged Pirate Rum" */
			fVar0 = 0.5f;
			break;
		case 1565126061: /* GXTEntry: "Gran Corazon Madeira" */
			fVar0 = 0.15f;
			break;
		case -897008046: /* GXTEntry: "Caribbean Rum" */
			fVar0 = 0.17f;
			break;
		case -130873515: /* GXTEntry: "London Dry Gin" */
		case 1603716279: /* GXTEntry: "Old Tom Gin" */
			fVar0 = 0.17f;
			break;
		case -392829098: /* GXTEntry: "Cognac" */
			fVar0 = 0.25f;
			break;
		case 941442568: /* GXTEntry: "Tennessee Whiskey" */
		case 1135560775: /* GXTEntry: "Irish Whiskey" */
		case 1209263432: /* GXTEntry: "Scotch Whisky" */
			fVar0 = 0.3f;
			break;
		case 1465762285: /* GXTEntry: "Absinthe" */
			fVar0 = 0.45f;
			break;
		default:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				iVar1 = ENTITY::GET_ENTITY_MODEL(*uParam1);
				if (iVar1 == -686064834)
				{
					uParam0->f_2 = -24362764; /* GXTEntry: "Beer" */
					fVar0 = 0.025f;
					uParam0->f_180 = 0;
				}
				else if (iVar1 == joaat("p_bottlejd01x"))
				{
					uParam0->f_2 = -368374107;
					fVar0 = 0.025f;
					uParam0->f_180 = 0;
				}
			}
			break;
	}
	return fVar0;
}

void func_5()
{
	if (PED::IS_PED_MALE(Global_35))
	{
		if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == -664271430)
		{
			STREAMING::_0xAC37644A538F7524(-1154614502);
		}
		else
		{
			STREAMING::_0xAC37644A538F7524(-1734420286);
		}
	}
	else if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == -664271430)
	{
		STREAMING::_0xAC37644A538F7524(-56368229);
	}
	else
	{
		STREAMING::_0xAC37644A538F7524(-756564139);
	}
}

void func_6(var uParam0)
{
	if ((IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) > 0.5f)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_AWAY_PROMPT", true, 1);
	}
	switch (uParam0->f_1)
	{
		case 0:
			if (IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= (1f / 3f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
				{
					uParam0->f_1 = 1;
				}
			}
			break;
		case 1:
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_ALLOW_CHUG_B", true, 1);
			if (IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= (2f / 3f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
				{
					uParam0->f_1 = 2;
				}
			}
			break;
		case 2:
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_ALLOW_CHUG_C", true, 1);
			if ((IntToFloat(uParam0->f_2.f_1) / uParam0->f_2.f_2) >= 1f)
			{
				if (!ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2089200315))
				{
					uParam0->f_1 = 3;
				}
			}
			break;
		case 3:
			PED::_0xCB9401F918CB0F75(Global_35, "GENERIC_ALCOHOL_BLOCK_CHUG_A", true, 1);
			break;
	}
}

void func_7(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 574156416))
	{
		PED::_0x6D07B371E9439019(Global_35);
		PED::_0xD65FDC686A031C83(Global_35, 1114994170, 1.5f);
	}
}

void func_8(var uParam0)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 574156416))
	{
		PED::_0x6D07B371E9439019(Global_35);
		PED::_0xD65FDC686A031C83(Global_35, -1268666326, 1.5f);
	}
}

void func_13(int iParam0)
{
	if (iParam0 == -1493684811)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && (TASK::_0x2D0571BB55879DA2(Global_35) == -545460140 || TASK::_0x2D0571BB55879DA2(Global_35) == -1177373461))
		{
			TASK::_0xB35370D5353995CB(Global_35, 1587785400, 1f);
		}
	}
	else if (iParam0 == 1587785400)
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
		{
			TASK::_0xB35370D5353995CB(Global_35, -1493684811, 1f);
		}
	}
	else if (iParam0 == -752898125)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && TASK::_0x2D0571BB55879DA2(Global_35) == -1177373461)
		{
			TASK::_0xB35370D5353995CB(Global_35, 1342098323, 1f);
		}
	}
	else if (iParam0 == 1342098323)
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
		{
			TASK::_0xB35370D5353995CB(Global_35, -752898125, 1f);
		}
	}
}

void func_14(float fParam0)
{
	if (fParam0 > 0f)
	{
		if (aggregate.fishing_core.func_281())
		{
			aggregate.coffee_drinking.func_7(fParam0, 0);
		}
		Global_1938998->f_3 = MISC::GET_GAME_TIMER();
	}
}

void func_16(int iParam0, bool bParam1)
{
	struct<10> Var0;
	struct<16> Var10;

	switch (iParam0)
	{
		case 204375141: /* GXTEntry: "Ginseng Elixir" */
			break;
		case -417963070: /* GXTEntry: "Valerian Root" */
			break;
		case -21093309: /* GXTEntry: "Aged Pirate Rum" */
			break;
		case -1620920647: /* GXTEntry: "English Mace" */
		case -529638012: /* GXTEntry: "Yarrow" */
		case 128702355: /* GXTEntry: "Milkweed" */
		case 1433048902: /* GXTEntry: "Ginseng" */
		case 2006811763: /* GXTEntry: "Vanilla Flower" */
			aggregate.coffee_drinking.func_87(350943398);
			break;
		case -2085219828: /* GXTEntry: "Common Bulrush" */
		case -2051332199: /* GXTEntry: "Oleander Sage" */
		case 228922461: /* GXTEntry: "Prairie Poppy" */
			if ((bParam1 || !aggregate.fm_race_controller.func_1990()) || !PED::IS_PED_ON_FOOT(Global_35))
			{
				return;
			}
			if (iParam0 != 228922461 || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				Var10 = { Var0 };
				StringCopy(&(Var10.f_10), "generic_puking_item", 32);
				Var10.f_14 = 512;
				aggregate.dynamic_craft_scenario.func_68(Var10, 0);
			}
			break;
		case 1365804873: /* GXTEntry: "Potent Antidote" */
		case 1889838061: /* GXTEntry: "Antidote" */
			if (iParam0 == 1889838061)
			{
			}
			else if (iParam0 == 1365804873)
			{
			}
			func_40();
			break;
	}
}

int func_17(bool bParam0, int iParam1)
{
	switch (aggregate.coffee_drinking.func_101(bParam0, -949239683))
	{
		case -476940445:
			if (iParam1 == 1587785400)
			{
				return 1534923913;
			}
			else
			{
				return -2061488501;
			}
			break;
		case -2001232688:
			return -458747598;
	}
	return -2061488501;
}

void func_40()
{
	aggregate.coffee_drinking.func_87(350943398);
	aggregate.coffee_drinking.func_87(1775828486);
}

