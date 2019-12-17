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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	struct<234> Var0;
	bool bVar236;
	float fVar237;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_21 = "props_misc@campfires@5_logs";
	sLocal_22 = "Script_PropCampfire";
	Var0 = 4;
	Var0.f_5 = 4;
	Var0.f_18.f_29 = 1;
	Var0.f_49 = 8;
	Var0.f_49.f_22 = -1;
	Var0.f_49.f_23 = 1;
	Var0.f_49.f_24 = 1;
	Var0.f_49.f_32 = 1;
	Var0.f_49.f_33 = -1;
	Var0.f_49.f_37 = 4;
	Var0.f_49.f_42 = 4;
	Var0.f_49.f_53 = 1;
	Var0.f_139 = 15933;
	Var0.f_143 = -1;
	Var0.f_145 = -1;
	Var0.f_149 = 9;
	Var0.f_165 = -1;
	Var0.f_175 = -1;
	Var0.f_176 = 1;
	Var0.f_187 = 1;
	Var0.f_191 = 1085378666;
	Var0.f_193.f_9 = 1084227584;
	Var0.f_193.f_10 = 1073741824;
	Var0.f_193.f_30 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (aggregate.aberdeenpigfarm.func_49(0, 0) || !TASK::_0x841475AC96E794D1(vScriptParam_0.y))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_230 = { TASK::_0xA8452DD321607029(vScriptParam_0.y, 1) };
	Var0.f_233 = TASK::_0xB93EA7184BAA85C3(vScriptParam_0.y, 1);
	if (func_3(&Var0))
	{
		SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
		func_1(&Var0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar236 = false;
	while (!aggregate.aberdeenpigfarm.func_49(0, 0) && !bVar236)
	{
		switch (Var0.f_192)
		{
			case 0:
				fVar237 = aggregate.fm_mission_controller.func_3321(Global_35, Var0.f_230, 1);
				if (!aggregate.fm_mission_controller.func_5178() || fVar237 < 6400f)
				{
					Var0.f_187 = 0;
					func_6(&Var0, vScriptParam_0.z);
					STREAMING::REQUEST_MODEL(Var0.f_191, false);
					aggregate.coffee_drinking.func_5(&(Var0.f_192), 1);
				}
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(Var0.f_191))
				{
					aggregate.coffee_drinking.func_5(&(Var0.f_192), 2);
				}
				break;
			case 2:
				Var0.f_141 = OBJECT::CREATE_OBJECT(Var0.f_191, Var0.f_230, false, false, false, false, true);
				ENTITY::SET_ENTITY_HEADING(Var0.f_141, Var0.f_233);
				if (Global_1939035->f_21)
				{
					Var0.f_229 = VOLUME::_0x0EB78C2B156635B1(665633627, Var0.f_230, 0f, 0f, 0f, 0.3f, 0.3f, 2f);
				}
				aggregate.coffee_drinking.func_5(&(Var0.f_192), 3);
				break;
			case 3:
				if (func_3(&Var0))
				{
					bVar236 = true;
				}
				else
				{
					fVar237 = aggregate.fm_mission_controller.func_3321(Global_35, Var0.f_230, 1);
					if (fVar237 < func_8() || !Var0.f_193.f_34)
					{
						func_9(&(Var0.f_193), &(Var0.f_141));
					}
					if (!aggregate.aberdeenpigfarm.func_175(&Global_1939168, 4194304))
					{
						if (fVar237 < func_11() || Var0.f_142 == 7)
						{
							func_12(&Var0, 0);
						}
					}
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Var0);
	SCRIPTS::_0xE7282390542F570D(vScriptParam_0.x);
}

void func_1(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_141));
	}
	if (VOLUME::_0x92A78D0BEDB332A3(uParam0->f_229))
	{
		VOLUME::_0x43F867EF5C463A53(uParam0->f_229);
	}
	func_13(uParam0, 1);
}

bool func_3(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	if ((iVar0 - uParam0->f_234) > 1000)
	{
		iVar1 = func_14(uParam0->f_230);
		if (aggregate.aberdeenpigfarm.func_175(iVar1, 8))
		{
			return true;
		}
		if (aggregate.aberdeenpigfarm.func_175(iVar1, 1) || uParam0->f_235)
		{
			if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 8192))
			{
				aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 64);
			}
		}
		else if (aggregate.aberdeenpigfarm.func_175(iVar1, 2) && !uParam0->f_235)
		{
			if (!aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 8192))
			{
				aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 128);
			}
		}
		else if (aggregate.aberdeenpigfarm.func_125(0, 0, 1) && !aggregate.dynamic_craft_scenario.func_17())
		{
			if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 8192))
			{
				aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 64);
			}
		}
		else if (!uParam0->f_235)
		{
			if (!aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 8192))
			{
				aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 128);
			}
		}
		if (aggregate.aberdeenpigfarm.func_175(iVar1, 32))
		{
			func_19(uParam0, 1, 0, 0, 0, 0, 0);
		}
		else if (aggregate.aberdeenpigfarm.func_175(iVar1, 4))
		{
			func_19(uParam0, 0, 1, 0, 0, 0, 0);
		}
		else if (aggregate.aberdeenpigfarm.func_175(iVar1, 16))
		{
			func_19(uParam0, 0, 0, 1, 0, 0, 0);
		}
		else if (aggregate.aberdeenpigfarm.func_175(iVar1, 64))
		{
			func_19(uParam0, 0, 0, 0, 1, 0, 0);
		}
		else if (aggregate.aberdeenpigfarm.func_175(iVar1, 128))
		{
			func_19(uParam0, 0, 0, 0, 0, 1, 0);
		}
		else if (aggregate.aberdeenpigfarm.func_175(iVar1, 256))
		{
			func_19(uParam0, 0, 0, 0, 0, 0, 1);
		}
		uParam0->f_234 = iVar0;
	}
	return false;
}

void func_6(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -1189729144:
			aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 6144);
			if (aggregate.binoculars.func_32(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 1);
			}
			break;
		case 1403995973:
			aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 9);
			if (aggregate.binoculars.func_32(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 1);
			}
			break;
		case -2140664311:
			aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 7177);
			if (aggregate.binoculars.func_32(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 1);
			}
			break;
		case -1973379805:
			aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 7177);
			if (aggregate.binoculars.func_32(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 1);
			}
			break;
		case -1307214023:
			aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 6144);
			if (aggregate.binoculars.func_32(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 1);
			}
			break;
		case -886679600:
			aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 6144);
			if (aggregate.binoculars.func_32(1510719693 /* GXTEntry: "Coffee Percolator" */, 1))
			{
				aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 1);
			}
			break;
		case 1228786282:
			aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 7817);
			aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 64);
			uParam0->f_235 = 1;
			break;
		case -1241326640:
			aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 7817);
			aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 64);
			uParam0->f_235 = 1;
			break;
		case 1588618021:
			aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 7817);
			aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 64);
			uParam0->f_193.f_4 = 1;
			uParam0->f_235 = 1;
			break;
		case 1127868139:
			aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 7817);
			aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 64);
			uParam0->f_193.f_4 = 1;
			uParam0->f_235 = 1;
			break;
		default:
			break;
	}
}

float func_8()
{
	if (aggregate.aberdeenpigfarm.func_175(&Global_1939168, 4194304))
	{
		return 1600f;
	}
	if (aggregate.fm_mission_controller.func_5178())
	{
		if (aggregate.annesburg.func_122() == 5)
		{
			return 3600f;
		}
		else
		{
			return 6400f;
		}
	}
	return 10000f;
}

void func_9(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 0.019f;
	func_24(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		fVar1 = MISC::GET_RAIN_LEVEL();
		if ((fVar1 > 0f && uParam0->f_9 >= 1f) && !uParam0->f_3)
		{
			func_25(uParam0, 4);
		}
		else if (uParam0->f_5)
		{
			func_25(uParam0, 0);
		}
		else if (uParam0->f_2)
		{
			func_25(uParam0, 2);
		}
		else if (uParam0->f_3)
		{
			func_25(uParam0, 5);
		}
		else if (uParam0->f_6)
		{
			func_25(uParam0, 6);
		}
		else if (uParam0->f_7)
		{
			func_25(uParam0, 7);
		}
		else if (uParam0->f_8)
		{
			func_25(uParam0, 8);
		}
		else if (aggregate.broom_scenario.func_18(&(uParam0->f_31), func_26()))
		{
			func_28(uParam0);
		}
	}
	switch (uParam0->f_30)
	{
		case 0:
			if (uParam0->f_1)
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			}
			if (uParam0->f_1 && uParam0->f_9 <= 2f)
			{
				uParam0->f_20 = 0.25f;
				uParam0->f_21 = 0.015f;
				uParam0->f_22 = 0.25f;
				uParam0->f_23 = 0.015f;
				uParam0->f_24 = 0.5f;
				uParam0->f_25 = 0.01f;
				uParam0->f_26 = 0.5f;
				uParam0->f_27 = 0.01f;
				uParam0->f_28 = 0.1f;
			}
			else
			{
				uParam0->f_24 = 1f;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0) == 0)
			{
				*uParam0 = *uParam1;
			}
			else
			{
				uParam0->f_30 = 2;
			}
			break;
		case 2:
			if (uParam0->f_1)
			{
				func_25(uParam0, 0);
				STREAMING::REQUEST_ANIM_DICT(sLocal_21);
				STREAMING::_0x2B6529C54D29037A(sLocal_22);
			}
			else
			{
				if (uParam0->f_5)
				{
					func_25(uParam0, 0);
				}
				else if (uParam0->f_2)
				{
					func_25(uParam0, 2);
				}
				else if (uParam0->f_3)
				{
					func_25(uParam0, 5);
				}
				else if (uParam0->f_6)
				{
					func_25(uParam0, 6);
				}
				else if (uParam0->f_7)
				{
					func_25(uParam0, 7);
				}
				else if (uParam0->f_8)
				{
					func_25(uParam0, 8);
				}
				else
				{
					func_25(uParam0, 0);
				}
				uParam0->f_35 = 1;
			}
			GRAPHICS::_0xAB72C67163DC4DB4(*uParam0, 20);
			GRAPHICS::_0x6EC2A67962296F49(*uParam0, 255, 50, 9);
			uParam0->f_29 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("ent_amb_campfire_dynamic", *uParam0, 0f, 0f, 0f, 0f, 0f, 0f, 1f, false, false, false);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29))
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_27, true);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_25, true);
			}
			uParam0->f_30 = 3;
			break;
		case 3:
			if (!uParam0->f_1)
			{
				uParam0->f_30 = 4;
			}
			else if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_21) && STREAMING::_0x2C04D89A0FB4E244(sLocal_22))
			{
				TASK::TASK_MOVE_NETWORK_BY_NAME(*uParam0, sLocal_22, 0f, false, sLocal_21, 128);
				uParam0->f_30 = 5;
			}
			aggregate.barcustomer_interaction.func_43(&(uParam0->f_31));
			break;
		case 4:
			uParam0->f_34 = 1;
			break;
		case 5:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
				uParam0->f_30 = 6;
			}
			break;
		case 6:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogCount", uParam0->f_9);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogSet", uParam0->f_10);
			if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
			{
				uParam0->f_34 = 1;
				if (uParam0->f_1 && MISC::GET_RAIN_LEVEL() <= 0f)
				{
					if (uParam0->f_9 <= 2f)
					{
						uParam0->f_30 = 0;
					}
					else if (TASK::_0x844CEEE428EA35B0(*uParam0, "BurnPhase") <= 0f || TASK::_0x844CEEE428EA35B0(*uParam0, "BurnPhase") >= 1f)
					{
						uParam0->f_30 = 8;
					}
					else
					{
						TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", fVar0);
					}
				}
				else
				{
					uParam0->f_30 = 0;
				}
			}
			break;
		case 7:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "AddLogFinished"))
				{
					uParam0->f_30 = 8;
				}
			}
			break;
		case 8:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0))
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam0, "CollapseLog");
					uParam0->f_24 = (uParam0->f_24 + (1f / 5f));
					uParam0->f_30 = 9;
				}
			}
			break;
		case 9:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", fVar0);
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, "CollapseLogFinished"))
				{
					uParam0->f_21 = (uParam0->f_21 - (1f / 5f));
					uParam0->f_22 = (uParam0->f_22 - (0.5f / 5f));
					uParam0->f_25 = (uParam0->f_25 - (1f / 5f));
					uParam0->f_26 = (uParam0->f_26 - (1f / 5f));
					uParam0->f_27 = (uParam0->f_27 - (1.55f / 5f));
					uParam0->f_9 = (uParam0->f_9 - 1f);
					if (uParam0->f_9 == 4f)
					{
						uParam0->f_20 = 0.8f;
						uParam0->f_23 = 0.4f;
					}
					else if (uParam0->f_9 == 3f)
					{
						uParam0->f_20 = 0.7f;
						uParam0->f_23 = 0.3f;
					}
					else if (uParam0->f_9 == 2f)
					{
						uParam0->f_20 = 0.6f;
						uParam0->f_23 = 0.2f;
					}
					else if (uParam0->f_9 == 1f)
					{
						uParam0->f_20 = 0.5f;
						uParam0->f_23 = 0.1f;
					}
					uParam0->f_30 = 6;
				}
			}
			break;
		case 10:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam0, "LogBurnRate", 0f);
			break;
	}
}

float func_11()
{
	if (aggregate.fm_mission_controller.func_5178())
	{
		if (aggregate.annesburg.func_122() == 5)
		{
			return 400f;
		}
		else
		{
			return 1600f;
		}
	}
	return 6400f;
}

int func_12(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_30(&(uParam0->f_49));
	if (!aggregate.barcustomer_interaction.func_12(Global_35, 0))
	{
		return 0;
	}
	func_32(uParam0);
	if (uParam0->f_142 > 4 && uParam0->f_142 < 9)
	{
		aggregate.camera_item.func_75(0);
	}
	if (uParam0->f_142 > 3)
	{
		if (uParam0->f_142 != 9 && uParam0->f_142 != 4)
		{
			CAM::_0x18C3DFAC458783BB();
			func_34(uParam0);
		}
	}
	else if (uParam0->f_142 == 3)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			iVar0 = func_35(uParam0);
			if (iVar0 >= 0 && iVar0 <= 3)
			{
				func_34(uParam0);
			}
		}
		else if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
		}
	}
	if (uParam0->f_190)
	{
		if (aggregate.binoculars.func_8(Global_35, 1, 0, 0) != joaat("weapon_unarmed"))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 320193935))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				uParam0->f_190 = 0;
			}
		}
	}
	switch (uParam0->f_142)
	{
		case 0:
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
			}
			func_39(uParam0);
			uParam0->f_49.f_28 = 1;
			aggregate.fme_animal_tagging.func_159(uParam0, 1);
			break;
		case 1:
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
			}
			if (aggregate.benedictpoint.func_17(uParam0))
			{
				aggregate.fme_animal_tagging.func_159(uParam0, 2);
			}
			break;
		case 2:
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
			}
			if (func_42(uParam0))
			{
				aggregate.fme_animal_tagging.func_159(uParam0, 3);
			}
			break;
		case 3:
			if (aggregate.binoculars.func_15(uParam0))
			{
				AUDIO::_0x9428447DED71FC7E("Player_Campfire_Scenes");
				func_43(&(uParam0->f_49), 1, TASK::_0x2D0571BB55879DA2(Global_35) != 1049986774);
				aggregate.interactive_campfire.func_44(&(uParam0->f_49), 2);
				uParam0->f_189 = 0;
				aggregate.binoculars.func_16(uParam0);
			}
			func_45(uParam0);
			if (bParam1)
			{
				return 1;
			}
			aggregate.interactive_campfire.func_46(8388608);
			if (!aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 8192))
			{
				func_47(2048);
			}
			else
			{
				func_48(2048);
			}
			if (!uParam0->f_187)
			{
				func_47(1024);
			}
			else
			{
				func_48(1024);
			}
			if ((MISC::GET_GAME_TIMER() - uParam0->f_162) >= 500)
			{
				uParam0->f_163 = func_49(uParam0);
				uParam0->f_162 = MISC::GET_GAME_TIMER();
			}
			if (aggregate.broom_scenario.func_14(Global_35, uParam0->f_141, 1) > 36f)
			{
				func_51(uParam0);
				func_52(uParam0);
				aggregate.interactive_campfire.func_53(8388608);
				if (!uParam0->f_187)
				{
					func_48(1024);
				}
				aggregate.fme_animal_tagging.func_159(uParam0, 4);
				if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
				{
					CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
				}
				return 0;
			}
			if (aggregate.interactive_campfire.func_54(2097152) || aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 64))
			{
				if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 8192))
				{
					func_55(uParam0, 0);
					aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 8192);
				}
				aggregate.interactive_campfire.func_53(2097152);
				aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 64);
			}
			else if (aggregate.interactive_campfire.func_54(4194304) || aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 128))
			{
				if (!aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 8192))
				{
					func_55(uParam0, 1);
					aggregate.aberdeenpigfarm.func_106(&(uParam0->f_139), 8192);
				}
				aggregate.interactive_campfire.func_53(4194304);
				aggregate.aberdeenpigfarm.func_163(&(uParam0->f_139), 128);
			}
			uParam0->f_143 = func_35(uParam0);
			if (uParam0->f_143 != -1)
			{
				func_56();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
				iVar1 = ITEMSET::CREATE_ITEMSET(true);
				if (func_57(&iVar1, *(uParam0->f_5[uParam0->f_143 /*3*/]), 0.75f) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
				{
					TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
				}
				ITEMSET::DESTROY_ITEMSET(iVar1);
			}
			if ((func_58(0) && uParam0->f_143 != -1) || (((uParam0->f_187 && aggregate.interactive_campfire.func_54(268435456)) && aggregate.interactive_campfire.func_54(16777216)) && Global_1956162->f_2))
			{
				uParam0->f_144 = func_59();
				aggregate.fme_animal_tagging.func_159(uParam0, 5);
				if ((aggregate.interactive_campfire.func_54(16777216) || uParam0->f_189) || Global_1956162->f_2)
				{
					if (aggregate.interactive_campfire.func_54(268435456))
					{
						Global_1956162->f_2 = 0;
						aggregate.interactive_campfire.func_53(16777216);
						aggregate.interactive_campfire.func_44(&(uParam0->f_49), 2);
						aggregate.camera_item.func_77(uParam0, 0);
						aggregate.fme_animal_tagging.func_159(uParam0, 7);
					}
				}
				func_52(uParam0);
			}
			else
			{
				func_61(uParam0);
				func_62(uParam0);
				if ((!aggregate.interactive_campfire.func_63(4) && !aggregate.interactive_campfire.func_54(536870912)) && aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 8192))
				{
					if (uParam0->f_163 && aggregate.broom_scenario.func_14(Global_35, uParam0->f_141, 1) <= 9f)
					{
						uParam0->f_161 = func_64(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_141, aggregate.fme_dead_drop.func_1207(aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 16384), 1.75f, 3f), 1, 1, 1754796591, uParam0->f_161, 2);
					}
				}
				if ((aggregate.interactive_campfire.func_54(16777216) && uParam0->f_187) || uParam0->f_189)
				{
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
					{
						if (uParam0->f_165 != -1 && (MISC::GET_GAME_TIMER() - uParam0->f_165) > 1000)
						{
							aggregate.interactive_campfire.func_53(16777216);
							uParam0->f_189 = 0;
							uParam0->f_165 = -1;
							TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
							uParam0->f_146 = 0;
						}
						else
						{
							uParam0->f_146 = 2;
							func_66(uParam0);
							uParam0->f_165 = MISC::GET_GAME_TIMER();
							if (aggregate.interactive_campfire.func_54(268435456))
							{
								aggregate.interactive_campfire.func_53(16777216);
								uParam0->f_189 = 0;
								aggregate.interactive_campfire.func_44(&(uParam0->f_49), 2);
								aggregate.camera_item.func_77(uParam0, 0);
								aggregate.fme_animal_tagging.func_159(uParam0, 7);
							}
						}
					}
					else if (uParam0->f_146 == 2)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_165) > 10000)
						{
							TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
							aggregate.interactive_campfire.func_53(16777216);
							uParam0->f_189 = 0;
							uParam0->f_165 = -1;
							uParam0->f_146 = 0;
						}
					}
				}
			}
			break;
		case 4:
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
			}
			if (aggregate.broom_scenario.func_14(Global_35, uParam0->f_141, 1) <= 36f)
			{
				aggregate.fme_animal_tagging.func_159(uParam0, 3);
			}
			break;
		case 5:
			if (aggregate.binoculars.func_15(uParam0))
			{
				AUDIO::_0x6339C1EA3979B5F7("idle", "Player_Campfire_Scenes");
				aggregate.binoculars.func_16(uParam0);
			}
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
			func_67();
			if (!func_58(1))
			{
				aggregate.camera_item.func_75(0);
				uParam0->f_145 = -1;
				func_68(uParam0, 0);
				TASK::_0xFDECCA06E8B81346(Global_35);
				aggregate.fme_animal_tagging.func_159(uParam0, 3);
			}
			else
			{
				if (uParam0->f_143 != -1)
				{
					func_56();
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -996707397))
				{
					func_68(uParam0, 0);
				}
				else
				{
					func_68(uParam0, 1);
				}
				func_69(uParam0);
				if (func_70(uParam0, 0, 0, -1))
				{
					func_68(uParam0, 0);
					if (uParam0->f_146 == 2)
					{
						aggregate.interactive_campfire.func_44(&(uParam0->f_49), 2);
						aggregate.camera_item.func_77(uParam0, 0);
						aggregate.fme_animal_tagging.func_159(uParam0, 7);
					}
					else if (uParam0->f_146 == 0)
					{
						aggregate.fme_animal_tagging.func_159(uParam0, 9);
					}
					else if (uParam0->f_146 == 11 || uParam0->f_146 == 10)
					{
						aggregate.fme_animal_tagging.func_159(uParam0, 8);
					}
					else
					{
						aggregate.fme_animal_tagging.func_159(uParam0, 6);
					}
				}
			}
			break;
		case 6:
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
			}
			if (uParam0->f_143 != -1)
			{
				func_56();
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			if (((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 2000) && !aggregate.aberdeenpigfarm.func_175(uParam0->f_140, 4)) && uParam0->f_146 != 1)
			{
				if (func_70(uParam0, 1, uParam0->f_146, uParam0->f_145))
				{
					if (uParam0->f_146 == 0)
					{
						aggregate.fme_animal_tagging.func_159(uParam0, 9);
						func_51(uParam0);
						return 0;
					}
					else
					{
						func_68(uParam0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (func_71(uParam0) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
			{
				if ((uParam0->f_143 == uParam0->f_145 || uParam0->f_145 == -1) || uParam0->f_146 == 1)
				{
					if (uParam0->f_146 != 0)
					{
						uParam0->f_144 = uParam0->f_146;
					}
					if (uParam0->f_145 != -1)
					{
						uParam0->f_143 = uParam0->f_145;
					}
					else
					{
						uParam0->f_143 = func_35(uParam0);
					}
					uParam0->f_145 = -1;
					aggregate.fme_animal_tagging.func_159(uParam0, 5);
				}
			}
			break;
		case 8:
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
			}
			iVar2 = PED::_0xC22AA08A8ADB87D4(Global_35);
			if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (((iVar2 == 1135271674 || iVar2 == 1844142525) || iVar2 == -571916863) || iVar2 == 825619760)
				{
					if (uParam0->f_146 == 11)
					{
						if (INVENTORY::_0x3D10D7179D7034AF(aggregate.bandana.func_72(0), -569063887, 0))
						{
							INVENTORY::_0x6A564540FAC12211(aggregate.bandana.func_72(0), -569063887);
						}
						func_74(-569063887 /* GXTEntry: "Journal" */, 0, 0, 0, 1, 0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						uParam0->f_146 = 0;
					}
					else if (uParam0->f_146 == 10)
					{
						func_74(1259508039 /* GXTEntry: "Satchel" */, 0, 0, 0, 1, 0, 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						uParam0->f_146 = 0;
					}
					else
					{
						uParam0->f_146 = 0;
						ATTRIBUTE::_0xD962F8579D702DB5();
						aggregate.barcustomer_interaction.func_43(&(uParam0->f_172));
						aggregate.fme_animal_tagging.func_159(uParam0, 5);
					}
				}
				else if (iVar2 == -597629206 || iVar2 == 1316803372)
				{
					func_75(36116464, 0.5f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == -518407211 || iVar2 == 1662215698)
				{
					func_75(653141085, 2f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
				else if (iVar2 == -1433449364 || iVar2 == 2058555960)
				{
					func_75(1335077954, 2f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_146 = 0;
				aggregate.fme_animal_tagging.func_159(uParam0, 5);
			}
			break;
		case 7:
			HUD::_0xC9CAEAEEC1256E54(2011163970);
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.interactive_campfire.func_76(-1199896558 /* GXTEntry: "Coffee" */, 1, 1, -142743235);
				aggregate.binoculars.func_16(uParam0);
			}
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			func_56();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
			if ((((func_77(uParam0, uParam0->f_144) || !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35)) || TASK::_0x916B8E075ABC8B4E(Global_35, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_35)) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
			{
				AUDIO::_0x0F2A2175734926D8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				aggregate.interactive_campfire.func_76(-1199896558 /* GXTEntry: "Coffee" */, 1, 1, -142743235);
				func_43(&(uParam0->f_49), 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				if (((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) || TASK::_0x916B8E075ABC8B4E(Global_35, 1)) || FIRE::IS_ENTITY_ON_FIRE(Global_35)) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_147));
					}
					if (((aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117()) && !uParam0->f_182) && uParam0->f_49.f_73 != -1199896558)
					{
						if (((((((uParam0->f_138 == 3 || uParam0->f_138 == 4) || uParam0->f_138 == 11) || uParam0->f_138 == 16) || uParam0->f_138 == 7) || uParam0->f_138 == 6) || uParam0->f_138 == 14) || uParam0->f_138 == 15)
						{
							aggregate.interactive_campfire.func_80(uParam0->f_49.f_73, 1, 1, 1, 0);
							uParam0->f_182 = 1;
						}
					}
					if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
					{
						TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
					}
				}
				uParam0->f_144 = 6;
				uParam0->f_146 = 6;
				aggregate.barcustomer_interaction.func_43(&(uParam0->f_172));
				aggregate.fme_animal_tagging.func_159(uParam0, 5);
			}
			break;
		case 9:
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
			}
			if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_43(&(uParam0->f_49), 1, 1);
				aggregate.fme_animal_tagging.func_159(uParam0, 3);
			}
			else if (!TASK::_0x0C3CB2E600C8977D(Global_35, 1))
			{
				func_81(uParam0);
			}
			break;
		case 10:
			return 1;
	}
	return 0;
}

void func_13(var uParam0, bool bParam1)
{
	func_51(uParam0);
	func_82(uParam0);
	aggregate.aberdeenpigfarm.func_154(uParam0);
	func_52(uParam0);
	if (CAM::_0x927B810E43E99932(&(uParam0->f_18)))
	{
		CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_18));
	}
	if (bParam1)
	{
		func_84(uParam0);
	}
	uParam0->f_165 = -1;
	uParam0->f_189 = 0;
	func_43(&(uParam0->f_49), 0, 1);
}

int func_14(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (aggregate.annesburg.func_141(Global_1939035[iVar0 /*2*/], vParam0))
		{
			return ((*Global_1939035)[iVar0 /*2*/])->f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_19(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	uParam0->f_193.f_5 = iParam1;
	uParam0->f_193.f_2 = iParam2;
	uParam0->f_193.f_3 = iParam3;
	uParam0->f_193.f_2 = iParam4;
	uParam0->f_193.f_2 = iParam5;
	uParam0->f_193.f_2 = iParam6;
}

void func_24(var uParam0)
{
	bool bVar0;

	bVar0 = GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_29);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::_0x646564A3B7DF68F8(*uParam0, (0.65f + (uParam0->f_11 * 0.35f)), (0.65f + (uParam0->f_11 * 0.35f)));
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
		}
		if (uParam0->f_1)
		{
			OBJECT::_0xC8E21C1677DC5E6F(*uParam0, (uParam0->f_12 * 0.5f));
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if (uParam0->f_12 != uParam0->f_21 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_12 = uParam0->f_21;
		}
		else
		{
			uParam0->f_12 = (((uParam0->f_12 * 15f) + uParam0->f_21) / 16f);
		}
		if (MISC::ABSF((uParam0->f_12 - uParam0->f_21)) < 0.0025f)
		{
			uParam0->f_12 = uParam0->f_21;
			OBJECT::_0xC8E21C1677DC5E6F(*uParam0, (uParam0->f_12 * 0.5f));
		}
	}
	if (uParam0->f_13 != uParam0->f_22 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_13 = uParam0->f_22;
		}
		else
		{
			uParam0->f_13 = (((uParam0->f_13 * 12f) + uParam0->f_22) / 13f);
		}
		if (MISC::ABSF((uParam0->f_13 - uParam0->f_22)) < 0.0025f)
		{
			uParam0->f_13 = uParam0->f_22;
			OBJECT::_0x7D7285EFEAB5AF15(*uParam0, uParam0->f_13);
		}
	}
	if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else
		{
			uParam0->f_14 = (((uParam0->f_14 * 14f) + uParam0->f_23) / 15f);
		}
		if (MISC::ABSF((uParam0->f_14 - uParam0->f_23)) < 0.005f && !uParam0->f_35)
		{
			uParam0->f_14 = uParam0->f_23;
		}
		else if (uParam0->f_14 != uParam0->f_23 || uParam0->f_35)
		{
			OBJECT::_0xF49574E2332A8F06(*uParam0, (uParam0->f_14 * 0.33f));
		}
	}
	if (uParam0->f_15 != uParam0->f_24 || uParam0->f_35)
	{
		if (uParam0->f_35)
		{
			uParam0->f_15 = uParam0->f_24;
		}
		else
		{
			uParam0->f_15 = (((uParam0->f_15 * 19f) + uParam0->f_24) / 20f);
		}
		if (MISC::ABSF((uParam0->f_15 - uParam0->f_24)) < 0.0025f)
		{
			uParam0->f_15 = uParam0->f_24;
			OBJECT::_0x2797C633DCDBBAC5(*uParam0, ((uParam0->f_15 * 0.9f) + 0.1f), 1);
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_16, true);
		}
	}
	else if ((uParam0->f_16 != uParam0->f_25 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_16 = uParam0->f_25;
		}
		else
		{
			uParam0->f_16 = (((uParam0->f_16 * 15f) + uParam0->f_25) / 16f);
		}
		if (MISC::ABSF((uParam0->f_16 - uParam0->f_25)) < 0.0025f)
		{
			uParam0->f_16 = uParam0->f_25;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Embers", uParam0->f_16, false);
			}
		}
	}
	if (uParam0->f_4)
	{
		if (bVar0)
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Under", uParam0->f_17, true);
		}
	}
	else if ((uParam0->f_17 != uParam0->f_26 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_17 = uParam0->f_26;
		}
		else
		{
			uParam0->f_17 = (((uParam0->f_17 * 15f) + uParam0->f_26) / 16f);
		}
		if (MISC::ABSF((uParam0->f_17 - uParam0->f_26)) < 0.0025f)
		{
			uParam0->f_17 = uParam0->f_26;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smoke", uParam0->f_17, true);
			}
		}
	}
	if ((uParam0->f_18 != uParam0->f_27 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_18 = uParam0->f_27;
		}
		else
		{
			uParam0->f_18 = (((uParam0->f_18 * 19f) + uParam0->f_27) / 20f);
		}
		if (MISC::ABSF((uParam0->f_18 - uParam0->f_27)) < 0.0025f)
		{
			uParam0->f_18 = uParam0->f_27;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Flames", uParam0->f_18, true);
			}
		}
	}
	if ((uParam0->f_19 != uParam0->f_28 || uParam0->f_35) && bVar0)
	{
		if (uParam0->f_35)
		{
			uParam0->f_19 = uParam0->f_28;
		}
		else
		{
			uParam0->f_19 = (((uParam0->f_19 * 19f) + uParam0->f_28) / 20f);
		}
		if (MISC::ABSF((uParam0->f_19 - uParam0->f_28)) < 0.0025f)
		{
			uParam0->f_19 = uParam0->f_28;
			if (bVar0)
			{
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_29, "Smolder", uParam0->f_19, true);
			}
		}
	}
	if (uParam0->f_18 < 0f)
	{
		uParam0->f_18 = 0f;
	}
	if (uParam0->f_18 > 1f)
	{
		uParam0->f_18 = 1f;
	}
	if (uParam0->f_12 < 0f)
	{
		uParam0->f_12 = 0f;
	}
	if (uParam0->f_12 > 1f)
	{
		uParam0->f_12 = 1f;
	}
	if (uParam0->f_11 < 0.5f)
	{
		uParam0->f_11 = 0.5f;
	}
	if (uParam0->f_11 > 1f)
	{
		uParam0->f_11 = 1f;
	}
	if (bVar0)
	{
		uParam0->f_35 = 0;
	}
}

void func_25(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			uParam0->f_20 = 0.9f;
			uParam0->f_21 = 1f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0.9f;
			uParam0->f_24 = 0.99f;
			uParam0->f_25 = 1f;
			uParam0->f_26 = 0.75f;
			uParam0->f_27 = 1f;
			uParam0->f_28 = 0f;
			break;
		case 1:
			uParam0->f_20 = 0.66f;
			uParam0->f_21 = 0.66f;
			uParam0->f_22 = 0.6f;
			uParam0->f_23 = 0.5f;
			uParam0->f_24 = 0.88f;
			uParam0->f_25 = 0.66f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0.66f;
			uParam0->f_28 = 0f;
			break;
		case 2:
			uParam0->f_20 = 0.25f;
			uParam0->f_21 = 0.25f;
			uParam0->f_22 = 0.25f;
			uParam0->f_23 = 0.25f;
			uParam0->f_24 = 0.77f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.2f;
			uParam0->f_28 = 0f;
			break;
		case 3:
			uParam0->f_20 = 0.2f;
			uParam0->f_21 = 0.1f;
			uParam0->f_22 = 0.22f;
			uParam0->f_23 = 0.1f;
			uParam0->f_24 = 0.66f;
			uParam0->f_25 = 0.1f;
			uParam0->f_26 = 0.5f;
			uParam0->f_27 = 0.1f;
			uParam0->f_28 = 0f;
			break;
		case 4:
			uParam0->f_20 = 0.15f;
			uParam0->f_21 = 0.01f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.018f;
			uParam0->f_24 = 0.55f;
			uParam0->f_25 = 0.005f;
			uParam0->f_26 = 0.25f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0.6f;
			break;
		case 5:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 1f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 1f;
			uParam0->f_25 = 0.2f;
			uParam0->f_26 = 0.66f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 1f;
			break;
		case 6:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0f;
			uParam0->f_22 = 0f;
			uParam0->f_23 = 0f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
		case 7:
			uParam0->f_20 = 0.4f;
			uParam0->f_21 = 0.2f;
			uParam0->f_22 = 0.2f;
			uParam0->f_23 = 0.02f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0.01f;
			uParam0->f_28 = 0f;
			break;
		case 8:
			uParam0->f_20 = 0f;
			uParam0->f_21 = 0.06f;
			uParam0->f_22 = 0.1f;
			uParam0->f_23 = 0.01f;
			uParam0->f_24 = 0f;
			uParam0->f_25 = 0f;
			uParam0->f_26 = 0f;
			uParam0->f_27 = 0f;
			uParam0->f_28 = 0f;
			break;
	}
}

float func_26()
{
	if (aggregate.aberdeenpigfarm.func_175(&Global_1939168, 4194304) || aggregate.annesburg.func_122() == 5)
	{
		return 1f;
	}
	return 0.5f;
}

void func_28(var uParam0)
{
	int iVar0;

	if (!uParam0->f_1)
	{
		iVar0 = CLOCK::GET_CLOCK_HOURS();
		if (iVar0 >= 2 && iVar0 < 4)
		{
			func_25(uParam0, 1);
		}
		else if (iVar0 >= 4 && iVar0 < 6)
		{
			func_25(uParam0, 2);
		}
		else if (iVar0 >= 6 && iVar0 < 12)
		{
			func_25(uParam0, 3);
		}
		else if (iVar0 >= 12 && iVar0 < 17)
		{
			func_25(uParam0, 2);
		}
		else if (iVar0 >= 17 && iVar0 < 19)
		{
			func_25(uParam0, 1);
		}
		else
		{
			func_25(uParam0, 0);
		}
		aggregate.barcustomer_interaction.func_43(&(uParam0->f_31));
	}
}

void func_30(var uParam0)
{
	if (uParam0->f_80)
	{
		if (func_98(&(uParam0->f_79), &(uParam0->f_80)))
		{
			uParam0->f_80 = 0;
		}
	}
	if (uParam0->f_82)
	{
		if (func_98(&(uParam0->f_81), &(uParam0->f_82)))
		{
			uParam0->f_82 = 0;
		}
	}
	if (uParam0->f_84)
	{
		if (func_98(&(uParam0->f_83), &(uParam0->f_84)))
		{
			uParam0->f_84 = 0;
		}
	}
}

void func_32(var uParam0)
{
	int iVar0;

	if (aggregate.interactive_campfire.func_54(16777216) || uParam0->f_142 == 7)
	{
		iVar0 = func_35(uParam0);
		if (iVar0 != -1)
		{
			if (!aggregate.annesburg.func_217(&(uParam0->f_149[6])))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		}
	}
}

void func_34(var uParam0)
{
	vector3 vVar0;
	bool bVar25;
	bool bVar26;

	vVar0.f_4 = -1;
	vVar0.f_8 = 2;
	vVar0.f_9 = 1;
	vVar0.f_10 = 1;
	vVar0.f_11 = 1;
	vVar0.f_13 = 1;
	vVar0.f_14 = 2;
	vVar0.f_15 = 2;
	vVar0.f_16 = 3;
	vVar0.f_19 = 3;
	vVar0.f_20 = 1;
	vVar0.f_21 = 3;
	vVar0.f_22 = 3;
	vVar0.f_8 = 0;
	vVar0.f_14 = 0;
	vVar0.f_3 = uParam0->f_141;
	vVar0 = { 0f, 0f, 0.5f };
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &vVar0);
	bVar25 = false;
	bVar26 = false;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
	{
		bVar26 = true;
	}
	if (!bVar26)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			bVar25 = true;
		}
	}
	if (bVar26 || (bVar25 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1206250122)))
	{
		if (CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_18)))
		{
			if (!CAM::_0x927B810E43E99932(&(uParam0->f_18)))
			{
				CAM::_0xB8B207C34285E978(&(uParam0->f_18));
			}
		}
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = TASK::_0xDF7993356F52359A(Global_35, 0);
	if (TASK::_0x841475AC96E794D1(iVar0) && !TASK::_0x0C3CB2E600C8977D(Global_35, 1))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (TASK::_0x841475AC96E794D1(uParam0[iVar1]))
			{
				if (iVar0 == uParam0[iVar1])
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_39(var uParam0)
{
	StringCopy(&(uParam0->f_18), "restbyfire_orbit_cam", 64);
	StringCopy(&(uParam0->f_18.f_8), "RESTBYFIRE_ORBIT_REQUEST", 64);
}

bool func_42(var uParam0)
{
	vector3 vVar0;
	float fVar3;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
	{
		if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 512))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, -0.966f, 0.203f, 0.5f) };
			*(uParam0->f_5[0 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + -99.171f);
			aggregate.fme_dead_drop.func_1153(&vVar0, 1, 10, 0, 0);
			(*uParam0)[0] = TASK::CREATE_SCENARIO_POINT(1020517461, vVar0, fVar3, 0, 0, 0);
		}
		if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 1024))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, -0.212f, -1.045f, 0.5f) };
			*(uParam0->f_5[1 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + -11.405f);
			aggregate.fme_dead_drop.func_1153(&vVar0, 1, 10, 0, 0);
			(*uParam0)[1] = TASK::CREATE_SCENARIO_POINT(1259174088, vVar0, fVar3, 0, 0, 0);
		}
		if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 2048))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, 1.025f, 0.043f, 0.5f) };
			*(uParam0->f_5[2 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + 91.78f);
			aggregate.fme_dead_drop.func_1153(&vVar0, 1, 10, 0, 0);
			(*uParam0)[2] = TASK::CREATE_SCENARIO_POINT(-1075420544, vVar0, fVar3, 0, 0, 0);
		}
		if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 4096))
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_141, 0.249f, 1.05f, 0.5f) };
			*(uParam0->f_5[3 /*3*/]) = { vVar0 + Vector(1f, 0f, 0f) };
			fVar3 = (ENTITY::GET_ENTITY_HEADING(uParam0->f_141) + 164.29f);
			aggregate.fme_dead_drop.func_1153(&vVar0, 1, 10, 0, 0);
			(*uParam0)[3] = TASK::CREATE_SCENARIO_POINT(-1767895052, vVar0, fVar3, 0, 0, 0);
		}
		return true;
	}
	return false;
}

void func_43(var uParam0, bool bParam1, bool bParam2)
{
	aggregate.interactive_campfire.func_103(uParam0);
	if (bParam2)
	{
		func_104(uParam0, 0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_35);
	}
	if (aggregate.interactive_campfire.func_105())
	{
		func_106(0);
	}
	if (bParam1)
	{
		func_107(uParam0);
		return;
	}
	if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_18)))
	{
		HUD::_0xAA03F130A637D923(&(uParam0->f_18));
	}
	if (uParam0->f_23)
	{
		if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
		CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_59))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_59);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_61))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_61);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_62))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_62);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_63);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_64))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_64);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_65);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_66);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_67);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_68);
	}
	func_98(&(uParam0->f_79), &(uParam0->f_80));
	func_98(&(uParam0->f_81), &(uParam0->f_82));
	func_98(&(uParam0->f_83), &(uParam0->f_84));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913156->f_1576 = 0;
	if (uParam0->f_25)
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
	}
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		aggregate.interactive_campfire.func_44(uParam0, 18);
	}
	else
	{
		if (uParam0->f_9 == 11)
		{
			if (uParam0->f_22 == -1)
			{
				aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, 1);
				func_110(uParam0->f_73, uParam0->f_21);
			}
		}
		if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
		{
			if (uParam0->f_34 > 0 && aggregate.bandana.func_30(uParam0->f_73, 0))
			{
				uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
				uParam0->f_34 = 0;
			}
		}
		uParam0->f_22 = -1;
		aggregate.interactive_campfire.func_44(uParam0, 0);
	}
}

void func_45(var uParam0)
{
	if (!CAM::_0xDD0B7C5AE58F721D(&(uParam0->f_18)))
	{
		if (!CAM::_0xC285FD21294A1C49(&(uParam0->f_18)))
		{
			CAM::_0x6A4D224FC7643941(&(uParam0->f_18));
		}
	}
}

void func_47(int iParam0)
{
	if (!aggregate.interactive_campfire.func_63(iParam0))
	{
		Global_1956162->f_1 = (Global_1956162->f_1 || iParam0);
	}
}

void func_48(int iParam0)
{
	if (aggregate.interactive_campfire.func_63(iParam0))
	{
		Global_1956162->f_1 = (Global_1956162->f_1 - (Global_1956162->f_1 && iParam0));
	}
}

int func_49(var uParam0)
{
	int iVar0;
	int iVar1;

	uParam0->f_184 = 0;
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::_0x9A100F1CF4546629(iVar1))
			{
				uParam0->f_184 = 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (aggregate.interactive_campfire.func_54(134217728) || !aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 8192))
	{
		return 0;
	}
	if (aggregate.camera_item.func_34(Global_35, 0))
	{
		return 0;
	}
	if (PED::_0x4912DFE492DB98CD(Global_35, "inInspectionMode"))
	{
		return 0;
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 227, true))
	{
		return 0;
	}
	if (aggregate.camera_item.func_74(Global_35))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 0;
	}
	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		return 0;
	}
	if ((func_114(Global_35) || func_115(Global_35)) || func_116(Global_35))
	{
		return 0;
	}
	if (!aggregate.fme_round_up.func_1538(Global_35, uParam0->f_141, -0.5f))
	{
		return 0;
	}
	if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(uParam0->f_141, true, false), 1.5f) > 2)
	{
		return 0;
	}
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		if (aggregate.camera_item.func_66())
		{
			return 0;
		}
	}
	else if (aggregate.camera_item.func_66() && !((Global_1915170->f_19742 == 28 || Global_1915170->f_19742 == 27) || Global_1915170->f_19742 == 29))
	{
		return 0;
	}
	if (func_119(uParam0) == -1)
	{
		return 0;
	}
	return 1;
}

void func_51(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_149[iVar0])))
		{
			aggregate.annesburg.func_218(uParam0->f_149[iVar0], 1, 1);
		}
		iVar0++;
	}
}

void func_52(var uParam0)
{
	aggregate.annesburg.func_218(&(uParam0->f_160), 1, 1);
	aggregate.annesburg.func_218(&(uParam0->f_159), 1, 1);
}

void func_55(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::_0x841475AC96E794D1(uParam0[iVar0]))
		{
			TASK::_0x5AF19B6CC2115D34(uParam0[iVar0], 8, !bParam1);
		}
		iVar0++;
	}
}

void func_56()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
}

bool func_57(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam1, 0f, 0f, 0f, fParam4, fParam4, 1f);
	if (func_121(&iVar0))
	{
		aggregate.annesburg.func_166(iVar0);
		return true;
	}
	iVar1 = ENTITY::_0x84CCF9A12942C83D(iVar0, *iParam0, 1, 1, 0, 0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, *iParam0);
		iVar4 = MISC::_0xEE04C0AFD4EFAF0E(iVar3);
		if (ENTITY::IS_ENTITY_A_PED(iVar4))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4);
			if (iVar5 != Global_35)
			{
				if (PED::_0x09B83E68DE004CD4(iVar5) != Global_35)
				{
					aggregate.annesburg.func_166(iVar0);
					return true;
				}
			}
		}
		iVar2++;
	}
	aggregate.annesburg.func_166(iVar0);
	return false;
}

bool func_58(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && !TASK::_0x0C3CB2E600C8977D(Global_35, 1))
		{
			if (((TASK::_0x02EBBB3989B7E695(Global_35) || (bParam0 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))) || (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35) && TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_35, "SCENARIO_POINT_TRANS_COMPLETE"))) || (aggregate.interactive_campfire.func_54(16777216) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_59()
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	switch (iVar0)
	{
		case 512684539:
		case 970934364:
			return 3;
		case 1135271674:
		case 1844142525:
			return 6;
		case -571916863:
		case 825619760:
			return 8;
		case -597629206:
		case 1316803372:
			return 7;
		case -1879538536:
			return 1;
		case -777009509:
		case -734326242:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_61(var uParam0)
{
	if ((((!TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && uParam0->f_163) && !PED::_0xA911EE21EDF69DAF(Global_35)) && !aggregate.interactive_campfire.func_54(4)) && !WEAPON::_0x0DE0944ECCB3DF5D(Global_35))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_141))
		{
			if (!aggregate.annesburg.func_217(uParam0->f_159))
			{
				uParam0->f_159 = aggregate.camera_item.func_46("REST_BY_FIRE", joaat("INPUT_CONTEXT_Y"), uParam0->f_141, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
			}
			else if (aggregate.doc_book.func_50(uParam0->f_159, 1))
			{
				func_66(uParam0);
				func_52(uParam0);
				uParam0->f_163 = 0;
			}
		}
	}
	else
	{
		aggregate.interactive_campfire.func_125(uParam0);
	}
	if (aggregate.annesburg.func_217(uParam0->f_159))
	{
		aggregate.camera_item.func_130(uParam0->f_159, 1754796591, 0, 1);
	}
}

void func_62(var uParam0)
{
	if (uParam0->f_163)
	{
		if (!aggregate.annesburg.func_217(uParam0->f_160))
		{
			if (func_127(uParam0))
			{
				uParam0->f_160 = aggregate.camera_item.func_46("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 1, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				MISC::SET_BIT(&(Global_1956121->f_1), 2);
				MISC::SET_BIT(&(Global_1956121->f_1), 3);
				if (uParam0->f_184)
				{
					if (func_128(uParam0))
					{
						aggregate.fme_animal_tagging.func_318(uParam0->f_160, "CAMP_REC_COOK", 1);
					}
					else
					{
						MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
						aggregate.binoculars.func_37(uParam0->f_160, 0, 1, 1);
					}
				}
			}
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) || WEAPON::_0x0DE0944ECCB3DF5D(Global_35))
		{
			func_52(uParam0);
			uParam0->f_163 = 0;
		}
		else if (aggregate.interactive_campfire.func_54(16777216) || uParam0->f_189)
		{
			aggregate.interactive_campfire.func_53(16777216);
			uParam0->f_189 = 1;
			func_52(uParam0);
			uParam0->f_163 = 0;
		}
		else
		{
			if (uParam0->f_184 != uParam0->f_185)
			{
				if (uParam0->f_184)
				{
					if (func_128(uParam0) && !aggregate.annesburg.func_217(Global_1939057->f_82))
					{
						aggregate.fme_animal_tagging.func_318(uParam0->f_160, "CAMP_REC_COOK", 1);
						aggregate.binoculars.func_37(uParam0->f_160, 1, 1, 1);
						uParam0->f_186 = 1;
					}
					else
					{
						aggregate.annesburg.func_218(&(uParam0->f_160), 1, 1);
						uParam0->f_160 = aggregate.camera_item.func_46("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
						aggregate.binoculars.func_37(uParam0->f_160, 0, 1, 1);
						uParam0->f_186 = 0;
					}
				}
				else
				{
					MISC::SET_BIT(&(Global_1956121->f_1), 2);
					MISC::SET_BIT(&(Global_1956121->f_1), 3);
					aggregate.annesburg.func_218(&(uParam0->f_160), 1, 1);
					uParam0->f_160 = aggregate.camera_item.func_46("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), uParam0->f_141, 0, 1, 1, 0, 5, 7f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("MEDIUM_TIMED_EVENT"), 0, 0);
				}
				uParam0->f_185 = uParam0->f_184;
			}
			if (aggregate.doc_book.func_50(uParam0->f_160, 1))
			{
				uParam0->f_189 = 1;
				MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
				func_52(uParam0);
				uParam0->f_163 = 0;
				if (uParam0->f_184)
				{
					if (func_128(uParam0))
					{
						uParam0->f_186 = 1;
					}
					else
					{
						uParam0->f_186 = 0;
					}
				}
				if (uParam0->f_184 && uParam0->f_186)
				{
					aggregate.interactive_campfire.func_46(268435456);
				}
			}
		}
	}
	else
	{
		aggregate.annesburg.func_218(&(uParam0->f_160), 1, 1);
	}
	if (aggregate.annesburg.func_217(uParam0->f_160))
	{
		aggregate.camera_item.func_130(uParam0->f_160, 1754796591, 0, 1);
	}
}

char* func_64(int iParam0)
{
	return "CAMPFIRE";
}

void func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_119(uParam0);
	if (iVar0 == -1)
	{
		aggregate.interactive_campfire.func_53(268435456);
		aggregate.interactive_campfire.func_53(16777216);
		uParam0->f_189 = 0;
		uParam0->f_146 = 0;
		return;
	}
	if (aggregate.interactive_campfire.func_54(268435456))
	{
		func_131(Global_35, 1, 1);
		switch (iVar0)
		{
			case 0:
			case 3:
				uParam0->f_146 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[0], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1082130432 /* Float: -1f */, 0);
				uParam0->f_144 = 6;
				uParam0->f_143 = 0;
				break;
			case 1:
			case 2:
				uParam0->f_146 = 2;
				TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[1], "WORLD_PLAYER_DYNAMIC_KNEEL_KNIFE", 0, false, true, 0, false, -1082130432 /* Float: -1f */, 0);
				uParam0->f_144 = 6;
				uParam0->f_143 = 1;
				break;
		}
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	else
	{
		switch (iVar0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				iVar1 = 0;
				if (((aggregate.interactive_campfire.func_54(16777216) || uParam0->f_189) || aggregate.fm_mission_controller.func_6955(684307653, &iVar1)) || aggregate.fm_mission_controller.func_6955(562107429, &iVar1))
				{
					bVar2 = true;
					if (func_133(0) || func_133(1))
					{
						bVar2 = false;
					}
					if (bVar2)
					{
						PED::_0xD65FDC686A031C83(Global_35, -1955932021, 3f);
					}
					if (PED::IS_PED_MALE(Global_35))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
				}
				else if (uParam0->f_146 == 1)
				{
					if (PED::IS_PED_MALE(Global_35))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_MP_FEMALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
				}
				else if (func_134())
				{
					if (PED::IS_PED_MALE(Global_35))
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
					else
					{
						TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SQUAT_FEMALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
					}
				}
				else if (PED::IS_PED_MALE(Global_35))
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
				}
				else
				{
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0[iVar0], "WORLD_PLAYER_CAMP_FIRE_SIT_FEMALE_A", 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
				}
				break;
		}
		uParam0->f_143 = iVar0;
	}
}

void func_67()
{
	if (aggregate.bandana.func_30(joaat("weapon_kit_binoculars"), 0))
	{
		aggregate.camera_item.func_6(32);
	}
	if (aggregate.bandana.func_30(1652431022 /* GXTEntry: "Refined Binoculars" */, 0))
	{
		aggregate.camera_item.func_6(32);
	}
	if (aggregate.bandana.func_30(joaat("weapon_kit_camera"), 0))
	{
		aggregate.camera_item.func_6(64);
	}
}

void func_68(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_149[iVar0])))
		{
			if (aggregate.doc_book.func_70(&(uParam0->f_149[iVar0]), 0) == bParam1)
			{
			}
			else
			{
				aggregate.binoculars.func_37(&(uParam0->f_149[iVar0]), bParam1, 1, 1);
			}
		}
		iVar0++;
	}
}

void func_69(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	iVar1 = 0;
	if (iVar0 == 1135271674 || iVar0 == 1844142525)
	{
		if ((((((func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500) && !uParam0->f_189) && !aggregate.interactive_campfire.func_54(16777216)) && uParam0->f_146 != 1) && !aggregate.fm_mission_controller.func_6955(684307653, &iVar1)) && !aggregate.fm_mission_controller.func_6955(562107429, &iVar1))
		{
			aggregate.barcustomer_interaction.func_43(&(uParam0->f_172));
			func_75(-63615330, 0.5f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -571916863 || iVar0 == 825619760)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_172)))
			{
				aggregate.barcustomer_interaction.func_43(&(uParam0->f_172));
			}
			if (aggregate.broom_scenario.func_18(&(uParam0->f_172), 180f))
			{
				aggregate.barcustomer_interaction.func_43(&(uParam0->f_172));
				if (!func_134())
				{
					func_75(1698735158, 0.5f);
					uParam0->f_164 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	else if (iVar0 == -597629206 || iVar0 == 1316803372)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_172)))
			{
				aggregate.barcustomer_interaction.func_43(&(uParam0->f_172));
			}
			if (aggregate.broom_scenario.func_18(&(uParam0->f_172), 10f))
			{
				if (func_134())
				{
					aggregate.barcustomer_interaction.func_43(&(uParam0->f_172));
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					func_75(-841180202, 0.5f);
				}
			}
		}
	}
	else if (iVar0 == -518407211 || iVar0 == 1662215698)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(653141085, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -1433449364 || iVar0 == 2058555960)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(1335077954, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_70(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam1)
	{
		iVar2 = iParam2;
		if (iParam3 != -1)
		{
			iVar1 = iParam3;
		}
		else
		{
			iVar1 = uParam0->f_143;
		}
	}
	else
	{
		iVar1 = uParam0->f_143;
		iVar2 = uParam0->f_144;
	}
	switch (iVar1)
	{
		case 0:
		case 1:
			switch (iVar2)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
				case 4:
					iVar0 = 0;
					break;
				default:
					if (aggregate.aberdeenpigfarm.func_45() != 0)
					{
						iVar0 = 544786;
					}
					else
					{
						iVar0 = 20498;
					}
					break;
			}
			break;
		case 2:
		case 3:
			if ((iVar2 == 3 || iVar2 == 4) || iVar2 == 1)
			{
				iVar0 = 0;
			}
			else if (aggregate.aberdeenpigfarm.func_45() != 0)
			{
				iVar0 = 544786;
			}
			else
			{
				iVar0 = 20498;
			}
			break;
	}
	if (TASK::_0x038B1F1674F0E242(Global_35) || uParam0->f_188)
	{
		iVar0 = 0;
	}
	else if (aggregate.camera_item.func_34(Global_35, 0) || WEAPON::_0x0DE0944ECCB3DF5D(Global_35))
	{
		if (!aggregate.aberdeenpigfarm.func_175(uParam0->f_140, 32))
		{
			aggregate.binoculars.func_18(207, 1);
			aggregate.aberdeenpigfarm.func_106(&(uParam0->f_140), 32);
		}
		iVar0 = 16;
	}
	func_138(uParam0, iVar0);
	if (uParam0->f_146 == 2)
	{
		func_68(uParam0, 0);
	}
	iVar3 = func_139(uParam0);
	if (iVar3 != -1)
	{
		if (uParam0->f_145 != -1)
		{
			uParam0->f_143 = uParam0->f_145;
		}
	}
	switch (iVar3)
	{
		case 0:
			aggregate.interactive_campfire.func_103(&(uParam0->f_49));
			aggregate.interactive_campfire.func_44(&(uParam0->f_49), 1);
			uParam0->f_146 = 6;
			break;
		case 8:
			func_51(uParam0);
			uParam0->f_188 = 1;
			break;
		case 2:
			aggregate.interactive_campfire.func_44(&(uParam0->f_49), 2);
			aggregate.camera_item.func_77(uParam0, 0);
			uParam0->f_49.f_31 = 1;
			uParam0->f_146 = 2;
			func_51(uParam0);
			aggregate.fme_animal_tagging.func_159(uParam0, 7);
			break;
		case 6:
			func_51(uParam0);
			uParam0->f_146 = 10;
			return true;
		case 1:
			func_140(uParam0, aggregate.aberdeenpigfarm.func_175(uParam0->f_140, 16));
			uParam0->f_146 = 0;
			func_51(uParam0);
			break;
		default:
			return false;
	}
	return true;
}

int func_71(var uParam0)
{
	switch (uParam0->f_143)
	{
		case 0:
			return func_141(uParam0);
		case 1:
			return func_142(uParam0);
		case 2:
			return func_143(uParam0);
		case 3:
			return func_144(uParam0);
	}
	func_51(uParam0);
	return 0;
}

bool func_72(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = PED::_0xC488B8C0E52560D8(Global_35);
	bVar1 = PED::_0x2DC0E8DCBD3546E9(Global_35);
	if ((bVar0 || bVar1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1944546609))
	{
		return false;
	}
	if (bVar1 && uParam0->f_145 != -1)
	{
		iVar2 = func_35(uParam0);
		if (iVar2 != uParam0->f_145)
		{
			return false;
		}
		if (uParam0->f_143 != iVar2)
		{
			uParam0->f_143 = iVar2;
			return false;
		}
	}
	if (aggregate.doc_book.func_11())
	{
		return false;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return false;
	}
	return true;
}

int func_74(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
		return 0;
	}
	if (!aggregate.dynamic_craft_scenario.func_60(bParam0, bParam4))
	{
		return 0;
	}
	if (aggregate.dynamic_craft_scenario.func_61(bParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
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
			return 0;
		}
	}
	if (aggregate.dynamic_craft_scenario.func_67(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1912966 = bParam0;
		Global_1913155 = MISC::GET_GAME_TIMER();
		return 1;
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
			return 0;
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
			aggregate.camera_item.func_73("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
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
					return 1;
				case -1719060085:
					if (bParam0 == &Global_1951131->f_1657.f_1[23 /*3*/])
					{
						aggregate.dynamic_craft_scenario.func_80(Global_35, 260271636 /* GXTEntry: "No Gloves" */, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipGlovesFidget", true, 15);
						aggregate.dynamic_craft_scenario.func_81(bParam0, 0);
						return 1;
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
					aggregate.camera_item.func_73("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
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
							Var0.f_1 = bParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							aggregate.dynamic_craft_scenario.func_68(Var10, 0);
						}
						Jump @2072; //curOff = 1569
						aggregate.dynamic_craft_scenario.func_87();
						Jump @2072; //curOff = 1576
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
						Jump @2072; //curOff = 1851
						if (!WEAPON::_0xC853230E76A152DF(aggregate.binoculars.func_8(Global_35, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, bParam0, true, 0, false, false);
						}
						return 1;
						Jump @2072; //curOff = 1889
						if (aggregate.binoculars.func_8(Global_35, 1, 0, 0) != joaat("weapon_kit_camera"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_kit_camera"), true, 0, false, false);
						}
						return 1;
						Jump @2072; //curOff = 1930
						Jump @2072; //curOff = 1933
						aggregate.binoculars.func_18(533, 1);
						Jump @2072; //curOff = 1944
						aggregate.dynamic_craft_scenario.func_30(1);
						Jump @2072; //curOff = 1952
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432 /* Float: -1f */);
						bVar28 = false;
						return 1;
						Jump @2072; //curOff = 1987
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
						return 1;
						Jump @2072; //curOff = 2063
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

bool func_75(int iParam0, float fParam1)
{
	if (!PED::_0x68821369A2CEADD5(Global_35, iParam0))
	{
		PED::_0xD65FDC686A031C83(Global_35, iParam0, fParam1);
		PED::_0x6D07B371E9439019(Global_35);
		return false;
	}
	return true;
}

bool func_77(var uParam0, var uParam1)
{
	aggregate.interactive_campfire.func_46(131072);
	if (func_190(uParam0))
	{
		return true;
	}
	return false;
}

void func_81(var uParam0)
{
	int iVar0;

	if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 250)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
		if (iVar0 == -518407211 || iVar0 == 1662215698)
		{
			func_75(653141085, 1086324736 /* Float: 6f */);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
		else if (iVar0 == -1433449364 || iVar0 == 2058555960)
		{
			func_75(1335077954, 1086324736 /* Float: 6f */);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
		else if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35) && (MISC::GET_FRAME_COUNT() % 2) == 0)
		{
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		}
	}
}

void func_82(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (TASK::_0x841475AC96E794D1(uParam0[iVar0]))
		{
			TASK::_0x81948DFE4F5A0283(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_84(var uParam0)
{
	uParam0->f_142 = 0;
	uParam0->f_143 = -1;
	uParam0->f_144 = 0;
	uParam0->f_145 = -1;
	uParam0->f_146 = 0;
	uParam0->f_141 = 0;
}

bool func_98(int* iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return true;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		return true;
	}
	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
	return false;
}

void func_104(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(-1624772174, 1383188602))
		{
		}
		else
		{
			UIAPPS::_CLOSE_APP_BY_HASH(-1624772174);
		}
	}
	else
	{
		UIAPPS::_CLOSE_APP_BY_HASH(-1624772174);
	}
	uParam0->f_54 = 0;
	aggregate.interactive_campfire.func_53(8);
	ATTRIBUTE::_0xD962F8579D702DB5();
}

void func_106(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913156->f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_35, "player_crafting_active", bParam0);
}

void func_107(var uParam0)
{
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_59))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_59, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_61))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_61, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_62))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_62, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_63, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_64))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_64, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_65, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_66, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_67, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_68, 0);
	}
	func_98(&(uParam0->f_79), &(uParam0->f_80));
	func_98(&(uParam0->f_81), &(uParam0->f_82));
	func_98(&(uParam0->f_83), &(uParam0->f_84));
}

void func_110(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		aggregate.fme_challenges.func_1097(11, 1, 0);
		iVar0++;
	}
	if (aggregate.interactive_campfire.func_225(bParam0, 0))
	{
		aggregate.fishing_core.func_524(40);
	}
	else
	{
		aggregate.fishing_core.func_524(39);
	}
}

var func_114(int iParam0)
{
	return (aggregate.interactive_campfire.func_227(iParam0, 4) || aggregate.interactive_campfire.func_227(iParam0, 5));
}

int func_115(int iParam0)
{
	return aggregate.interactive_campfire.func_227(iParam0, 7);
}

int func_116(int iParam0)
{
	return aggregate.interactive_campfire.func_227(iParam0, 6);
}

int func_119(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	fVar0 = 10000f;
	iVar1 = -1;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (TASK::_0x841475AC96E794D1(uParam0[iVar3]))
		{
			if (TASK::_0x5BA659955369B0E2(uParam0[iVar3]) != 0)
			{
			}
			else if (!PED::_0xAB643407D0B26F07(Global_35, uParam0[iVar3], 0, 0, 1) && !aggregate.interactive_campfire.func_54(268435456))
			{
			}
			else
			{
				ITEMSET::_0x20A4BF0E09BEE146(iVar2);
				if (func_57(&iVar2, TASK::_0xA8452DD321607029(uParam0[iVar3], 1), 1065353216 /* Float: 1f */))
				{
				}
				else
				{
					fVar4 = aggregate.barcustomer_interaction.func_14(Global_36, *(uParam0->f_5[iVar3 /*3*/]));
					if (fVar4 < fVar0)
					{
						iVar1 = iVar3;
						fVar0 = fVar4;
					}
				}
			}
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar2);
	return iVar1;
}

bool func_121(int iParam0)
{
	if (PED::_0xA1FBAC56D38563E2(*iParam0))
	{
		return true;
	}
	return false;
}

bool func_127(var uParam0)
{
	if (WEAPON::_0x0DE0944ECCB3DF5D(Global_35))
	{
		return false;
	}
	if (uParam0->f_189)
	{
		return false;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		return false;
	}
	if (aggregate.interactive_campfire.func_54(16777216))
	{
		return false;
	}
	if (aggregate.interactive_campfire.func_54(1))
	{
		return false;
	}
	return true;
}

bool func_128(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		bVar2 = func_233(iVar1);
		if (((aggregate.interactive_campfire.func_234(bVar2) && !ENTITY::_0x8DE41E9902E85756(iVar0)) && FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)) != 2) && !FIRE::_0xCDC25355C0D65963(iVar0))
		{
			uParam0->f_49.f_73 = bVar2;
			uParam0->f_49.f_74 = -214678071;
			if (aggregate.annesburg.func_217(uParam0->f_160))
			{
				aggregate.camera_item.func_130(uParam0->f_160, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_131(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar25;
	bool bVar26;
	int iVar27[10];
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	bool bVar43;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = func_239(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		aggregate.doc_book.func_118(iVar1, 0);
	}
	else if (PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		Var2.f_1 = 10;
		Var2.f_12 = 10;
		MISC::_0x48E4D50F87A96AA5(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), 1, 1, ENTITY::GET_ENTITY_MODEL(iVar0), &Var2, 0);
		iVar25 = 0;
		while (iVar25 < 10)
		{
			bVar26 = &Var2.f_1[iVar25];
			if (aggregate.bandana.func_30(bVar26, 0))
			{
				if (!bParam1 || aggregate.fm_mission_controller.func_6324(bVar26))
				{
					aggregate.fm_mission_controller.func_5498(bVar26, &(Var2.f_12[iVar25]), bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar25++;
		}
	}
	else
	{
		iVar39 = PED::_0x88EFFED5FE8B0B4A(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		if (aggregate.binoculars.func_32(-269048282 /* GXTEntry: "Buck Antler Trinket" */, 1))
		{
			if (iVar39 < 2 && MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
			{
				iVar40 = iVar39;
				iVar40++;
				iVar39 = iVar40;
			}
		}
		iVar41 = FLOCK::_0xF8B48A361DC388AE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0));
		iVar42 = func_242(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar41);
		PED::_0x6B89FAA36FC909A3(&iVar27, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0), iVar39, iVar42);
		iVar38 = 0;
		while (iVar38 < iVar27)
		{
			if (&iVar27[iVar38] != 0)
			{
				if (func_243(iVar0) && !aggregate.doc_book.func_330(&(iVar27[iVar38])))
				{
					iVar27[iVar38] = 0;
				}
				else if (!bParam1 || aggregate.fm_mission_controller.func_6324(&(iVar27[iVar38])))
				{
					aggregate.fm_mission_controller.func_5498(&(iVar27[iVar38]), 1, bParam2, 0, 0, 752097756, 0, 0, 0, 0);
				}
			}
			iVar38++;
		}
	}
	bVar43 = aggregate.doc_book.func_333(&iVar0);
	if (!aggregate.bandana.func_30(bVar43, 0))
	{
		bVar43 = aggregate.doc_book.func_340(iVar0);
	}
	if (aggregate.bandana.func_30(bVar43, 0))
	{
		aggregate.interactive_campfire.func_247(bVar43, 1, 1, -142743235);
	}
	ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
}

int func_133(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &bVar0, true, iParam0, false))
	{
		if (aggregate.bandana.func_30(bVar0, 0))
		{
			if (WEAPON::_0x0556E9D2ECF39D01(bVar0) || aggregate.bandana.func_71(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_134()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = MISC::_0x4BEB42AEBCA732E9();
	if (((((iVar0 == joaat("rain") || iVar0 == joaat("shower")) || iVar0 == joaat("sleet")) || iVar0 == joaat("hurricane")) || iVar0 == joaat("thunderstorm")) || iVar0 == joaat("thunder"))
	{
		return true;
	}
	iVar1 = MISC::_0x51021D36F62AAA83();
	if (((((iVar1 == joaat("rain") || iVar1 == joaat("shower")) || iVar1 == joaat("sleet")) || iVar1 == joaat("hurricane")) || iVar1 == joaat("thunderstorm")) || iVar1 == joaat("thunder"))
	{
		return true;
	}
	iVar2 = aggregate.aberdeenpigfarm.func_66();
	if (((iVar2 == 0 || iVar2 == 7) || iVar2 == 2) || iVar2 == 10)
	{
		return true;
	}
	return false;
}

void func_138(var uParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -996707397))
	{
		aggregate.aberdeenpigfarm.func_106(&(uParam0->f_140), 2);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_163(&(uParam0->f_140), 2);
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam1, 1))
	{
		if (!aggregate.annesburg.func_217(&(uParam0->f_149[0])))
		{
			uParam0->f_149[0] = aggregate.binoculars.func_20("KNEEL_FIRE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate.camera_item.func_130(&(uParam0->f_149[0]), 1754796591, 0, 1);
		}
	}
	else if (aggregate.annesburg.func_217(&(uParam0->f_149[0])))
	{
		aggregate.annesburg.func_218(uParam0->f_149[0], 1, 1);
	}
	if (((aggregate.aberdeenpigfarm.func_175(iParam1, 4096) && aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 16)) && !aggregate.interactive_campfire.func_54(536870912)) && uParam0->f_146 != 2)
	{
		MISC::SET_BIT(&(Global_1956121->f_1), 2);
		MISC::SET_BIT(&(Global_1956121->f_1), 3);
		if (!aggregate.annesburg.func_217(&(uParam0->f_149[2])))
		{
			uParam0->f_149[2] = aggregate.binoculars.func_20("CRAFT_COOK", joaat("INPUT_CONTEXT_X"), 2, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate.camera_item.func_130(&(uParam0->f_149[2]), 1754796591, 0, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1956121->f_1), 2);
		if (aggregate.annesburg.func_217(&(uParam0->f_149[2])))
		{
			aggregate.annesburg.func_218(uParam0->f_149[2], 1, 1);
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	if (aggregate.annesburg.func_217(&(uParam0->f_149[6])))
	{
		aggregate.annesburg.func_218(uParam0->f_149[6], 1, 1);
	}
	if (aggregate.interactive_campfire.func_54(134217728))
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_149[6])))
		{
			aggregate.binoculars.func_37(&(uParam0->f_149[6]), 0, 1, 1);
		}
	}
	else if (aggregate.annesburg.func_217(&(uParam0->f_149[6])) && !aggregate.doc_book.func_70(&(uParam0->f_149[6]), 0))
	{
		aggregate.binoculars.func_37(&(uParam0->f_149[6]), 1, 1, 1);
	}
	if ((((aggregate.interactive_campfire.func_54(1) || aggregate.interactive_campfire.func_54(134217728)) || aggregate.aberdeenpigfarm.func_175(uParam0->f_140, 2)) && !aggregate.interactive_campfire.func_54(4096)) && uParam0->f_146 != 2)
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_149[2])))
		{
			aggregate.binoculars.func_37(&(uParam0->f_149[2]), 0, 1, 1);
		}
	}
	else if (aggregate.annesburg.func_217(&(uParam0->f_149[2])))
	{
		aggregate.binoculars.func_37(&(uParam0->f_149[2]), 1, 1, 1);
	}
	if ((aggregate.aberdeenpigfarm.func_175(iParam1, 16) && !aggregate.interactive_campfire.func_54(536870912)) && uParam0->f_146 != 2)
	{
		if (!aggregate.annesburg.func_217(&(uParam0->f_149[1])))
		{
			uParam0->f_149[1] = aggregate.binoculars.func_20("LEAVE", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			if (aggregate.aberdeenpigfarm.func_175(iParam1, 524288) && uParam0->f_187)
			{
				aggregate.fme_animal_tagging.func_454(&(uParam0->f_149[1]), 0, 1);
				aggregate.binoculars.func_25(&(uParam0->f_149[1]), 20, 1, 1);
				aggregate.binoculars.func_25(&(uParam0->f_149[1]), 13, 1, 1);
			}
			aggregate.camera_item.func_130(&(uParam0->f_149[1]), 1754796591, 0, 1);
		}
		if (aggregate.aberdeenpigfarm.func_175(iParam1, 524288) && uParam0->f_187)
		{
			if (!aggregate.annesburg.func_217(&(uParam0->f_149[8])))
			{
				uParam0->f_149[8] = aggregate.binoculars.func_20("LEAVE", joaat("INPUT_CONTEXT_B"), 2, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
				aggregate.binoculars.func_25(&(uParam0->f_149[8]), 19, 1, 1);
				aggregate.binoculars.func_25(&(uParam0->f_149[8]), 20, 1, 1);
				aggregate.binoculars.func_25(&(uParam0->f_149[8]), 13, 1, 1);
				func_258(uParam0->f_149[8], "INPUT_PCAMP_TEARDWN");
				aggregate.camera_item.func_130(&(uParam0->f_149[8]), 1754796591, 0, 1);
			}
		}
		else if (aggregate.annesburg.func_217(&(uParam0->f_149[8])))
		{
			aggregate.annesburg.func_218(uParam0->f_149[8], 1, 1);
		}
	}
	else
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_149[1])))
		{
			aggregate.annesburg.func_218(uParam0->f_149[1], 1, 1);
		}
		if (aggregate.annesburg.func_217(&(uParam0->f_149[8])))
		{
			aggregate.annesburg.func_218(uParam0->f_149[8], 1, 1);
		}
	}
	if (aggregate.interactive_campfire.func_54(1048576) || aggregate.aberdeenpigfarm.func_175(uParam0->f_140, 2))
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_149[1])) && aggregate.doc_book.func_70(&(uParam0->f_149[1]), 0))
		{
			aggregate.binoculars.func_37(&(uParam0->f_149[1]), 0, 1, 1);
			if (aggregate.aberdeenpigfarm.func_175(iParam1, 524288) && uParam0->f_187)
			{
				aggregate.fme_animal_tagging.func_454(&(uParam0->f_149[1]), 0, 1);
			}
		}
	}
	else if (aggregate.annesburg.func_217(&(uParam0->f_149[1])) && !aggregate.doc_book.func_70(&(uParam0->f_149[1]), 0))
	{
		aggregate.binoculars.func_37(&(uParam0->f_149[1]), 1, 1, 1);
		if (aggregate.aberdeenpigfarm.func_175(iParam1, 524288) && uParam0->f_187)
		{
			aggregate.fme_animal_tagging.func_454(&(uParam0->f_149[1]), 0, 1);
		}
	}
	if (aggregate.interactive_campfire.func_54(256))
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_149[8])))
		{
			aggregate.binoculars.func_37(&(uParam0->f_149[8]), 0, 1, 1);
		}
	}
	else if (aggregate.annesburg.func_217(&(uParam0->f_149[8])))
	{
		aggregate.binoculars.func_37(&(uParam0->f_149[8]), 1, 1, 1);
	}
	uParam0->f_161 = func_64(HUD::_UIPROMPT_GET_GROUP_ACTIVE_PAGE(1754796591));
	iVar0 = 1;
	if (!aggregate.interactive_campfire.func_54(536870912))
	{
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(uParam0->f_141, 3f, 1, iVar0, 1754796591, uParam0->f_161, 0);
	}
}

int func_139(var uParam0)
{
	int iVar0;

	if (aggregate.interactive_campfire.func_54(16777216) || uParam0->f_189)
	{
		uParam0->f_189 = 0;
		aggregate.interactive_campfire.func_53(16777216);
		uParam0->f_165 = -1;
		return 2;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_149[iVar0])))
		{
			if (iVar0 == 1)
			{
				if (aggregate.doc_book.func_70(&(uParam0->f_149[iVar0]), 0))
				{
					if (aggregate.binoculars.func_13(&(uParam0->f_149[iVar0]), 1))
					{
						return iVar0;
					}
					else if (func_260())
					{
						if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_166)))
						{
							aggregate.barcustomer_interaction.func_43(&(uParam0->f_166));
						}
						if (aggregate.dynamic_craft_scenario.func_37(&(uParam0->f_166), 0.5f))
						{
							return iVar0;
						}
					}
					else if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_166)))
					{
						aggregate.barcustomer_interaction.func_50(&(uParam0->f_166));
					}
				}
			}
			else if (iVar0 == 8 || iVar0 == 6)
			{
				if (aggregate.doc_book.func_50(&(uParam0->f_149[iVar0]), 1))
				{
					return iVar0;
				}
				else if (iVar0 == 8)
				{
					if (aggregate.fm_mission_controller.func_6067(&(uParam0->f_149[8]), 1))
					{
						if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_49.f_86)))
						{
							aggregate.barcustomer_interaction.func_43(&(uParam0->f_49.f_86));
						}
						else if (aggregate.broom_scenario.func_18(&(uParam0->f_49.f_86), 0.1f))
						{
							aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[8]), "CAMP_TEARDOWN", 1);
						}
					}
					else
					{
						if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_49.f_86)))
						{
							aggregate.barcustomer_interaction.func_50(&(uParam0->f_49.f_86));
						}
						aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[8]), "LEAVE", 1);
					}
				}
			}
			else if (aggregate.binoculars.func_13(&(uParam0->f_149[iVar0]), 1))
			{
				if (iVar0 == 2)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
				}
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_140(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate.aberdeenpigfarm.func_163(&(uParam0->f_140), 16);
	}
}

int func_141(var uParam0)
{
	if (func_264(uParam0) && !aggregate.aberdeenpigfarm.func_175(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					if (func_75(420089068, 1f))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
		case 6:
			func_266(uParam0);
			break;
	}
	return 0;
}

int func_142(var uParam0)
{
	if (func_264(uParam0) && !aggregate.aberdeenpigfarm.func_175(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					func_75(1352801403, 1f);
					return 1;
				default:
					func_265(uParam0);
					break;
			}
			break;
		case 6:
			func_267(uParam0);
			break;
	}
	return 0;
}

int func_143(var uParam0)
{
	if (func_264(uParam0) && !aggregate.aberdeenpigfarm.func_175(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_145 = 1;
					if (func_268(Global_35, uParam0[1], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL3@MALE_A@KNEEL3_TRANS_COFFEE2", "KNEEL3_TRANS_COFFEE2", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
	}
	return 0;
}

int func_144(var uParam0)
{
	if (func_264(uParam0) && !aggregate.aberdeenpigfarm.func_175(uParam0->f_140, 4))
	{
		return 1;
	}
	if (!func_72(uParam0))
	{
		return 0;
	}
	switch (uParam0->f_146)
	{
		case 1:
			switch (uParam0->f_144)
			{
				case 8:
					func_75(-1890302844, 0.5f);
					break;
				case 7:
					func_75(36116464, 0.5f);
					break;
				case 6:
					uParam0->f_145 = 0;
					if (func_268(Global_35, uParam0[0], "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@TRANS@KNEEL4@MALE_A@KNEEL4_TRANS_COFFEE1", "KNEEL4_TRANS_COFFEE1", "WORLD_PLAYER_DYNAMIC_KNEEL_POST_FIRE_CRAFT"))
					{
						return 1;
					}
					break;
				default:
					func_265(uParam0);
					break;
			}
			break;
	}
	return 0;
}

bool func_190(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	aggregate.interactive_campfire.func_53(1024);
	uParam0->f_49.f_31 = 1;
	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	if (aggregate.interactive_campfire.func_54(268435456) && uParam0->f_138 < 9)
	{
		func_378(&(uParam0->f_49));
		func_379(&(uParam0->f_49));
		if ((MISC::GET_GAME_TIMER() - uParam0->f_165) > 1000 && func_380(&(uParam0->f_49)))
		{
			func_381();
			if (func_72(uParam0))
			{
				if (iVar0 == -571916863 || iVar0 == 825619760)
				{
					func_75(-1890302844, 0.5f);
					return false;
				}
				else if (iVar0 == -597629206 || iVar0 == 1316803372)
				{
					func_75(36116464, 0.5f);
					return false;
				}
			}
			else
			{
				return false;
			}
			if (Global_1913156->f_1577 != 0)
			{
				uParam0->f_49.f_73 = Global_1913156->f_1577;
			}
			uParam0->f_49.f_74 = -214678071;
			uParam0->f_165 = -1;
			CAM::DO_SCREEN_FADE_IN(500);
			if (iVar0 == -518407211 || iVar0 == 1662215698)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife"), true, 0, false, false);
				uParam0->f_190 = 1;
			}
			aggregate.interactive_campfire.func_46(16384);
			aggregate.interactive_campfire.func_53(65536);
			Global_1956162->f_2 = 0;
			if (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117())
			{
				aggregate.interactive_campfire.func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, 0, 0);
			}
			STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_73);
			uParam0->f_176 = 3;
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_147));
			}
			uParam0->f_147 = OBJECT::CREATE_OBJECT(func_383(uParam0->f_49.f_73), Global_36, false, false, false, false, true);
			if (PED::_0x3BBDD6143FF16F98(Global_35, uParam0->f_147, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
			{
			}
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, false);
			OBJECT::_0x2797C633DCDBBAC5(uParam0->f_147, 0f, 1);
			aggregate.interactive_campfire.func_103(&(uParam0->f_49));
			aggregate.interactive_campfire.func_44(&(uParam0->f_49), 2);
			uParam0->f_149[3] = aggregate.binoculars.func_20("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_384(uParam0, 3, 0, 0);
			aggregate.binoculars.func_37(&(uParam0->f_149[3]), 0, 1, 1);
			aggregate.camera_item.func_130(&(uParam0->f_149[3]), -1067771379, 0, 1);
			uParam0->f_49.f_58 = 0;
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_49.f_35);
			aggregate.aberdeenpigfarm.func_106(&(uParam0->f_140), 16);
			aggregate.camera_item.func_77(uParam0, 9);
		}
		return false;
	}
	if (uParam0->f_138 != 0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	if (uParam0->f_138 > 0)
	{
		HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_49.f_73), 1, 0, 0, 0);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
	{
		uParam0->f_179++;
		if (uParam0->f_49.f_73 == -1199896558)
		{
			if (aggregate.coffee_drinking.func_8())
			{
				aggregate.coffee_drinking.func_9(1);
			}
			else if (aggregate.coffee_drinking.func_10())
			{
				aggregate.coffee_drinking.func_9(0);
			}
		}
		func_388(uParam0->f_49.f_73, BUILTIN::TO_FLOAT(uParam0->f_176), uParam0->f_179 >= uParam0->f_176);
	}
	if (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117())
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -936525963))
		{
			uParam0->f_182 = 1;
			aggregate.interactive_campfire.func_80(uParam0->f_49.f_73, 1, 1, 1, 0);
		}
	}
	if (uParam0->f_138 >= 10)
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_149[5])) && aggregate.binoculars.func_13(&(uParam0->f_149[5]), 1))
		{
			uParam0->f_178 = 3;
		}
	}
	if (uParam0->f_49.f_22 != -1 && aggregate.camera_item.func_12(&(uParam0->f_49)) != 12)
	{
		if (aggregate.interactive_campfire.func_390(uParam0->f_49.f_22))
		{
		}
		else
		{
			uParam0->f_49.f_22 = -1;
		}
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	switch (uParam0->f_138)
	{
		case 0:
			if (func_72(uParam0))
			{
				if (iVar0 == -571916863 || iVar0 == 825619760)
				{
					func_75(-1890302844, 0.5f);
					return false;
				}
				else if (iVar0 == -597629206 || iVar0 == 1316803372)
				{
					func_75(36116464, 0.5f);
					return false;
				}
			}
			if (((func_72(uParam0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336)) && func_391(iVar0)) || aggregate.camera_item.func_12(&(uParam0->f_49)) == 12)
			{
				func_392(&(uParam0->f_49), 1);
				if (aggregate.camera_item.func_12(&(uParam0->f_49)) == 11)
				{
					if (aggregate.interactive_campfire.func_234(uParam0->f_49.f_73))
					{
						func_393(uParam0);
					}
					else if (uParam0->f_49.f_76)
					{
						uParam0->f_176 = 1;
						aggregate.interactive_campfire.func_46(131072);
						if (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117())
						{
							aggregate.interactive_campfire.func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, func_394(), 0);
						}
						aggregate.interactive_campfire.func_44(&(uParam0->f_49), 0);
						aggregate.interactive_campfire.func_103(&(uParam0->f_49));
						aggregate.annesburg.func_218(uParam0->f_149[3], 1, 1);
						iVar1 = 6000;
						iVar2 = 10000;
						if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 16384))
						{
							iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
							iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
						}
						uParam0->f_149[3] = aggregate.binoculars.func_20("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
						func_384(uParam0, 3, 0, 0);
						aggregate.binoculars.func_37(&(uParam0->f_149[3]), 0, 1, 1);
						aggregate.camera_item.func_130(&(uParam0->f_149[3]), -1067771379, 0, 1);
						func_395();
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						aggregate.camera_item.func_77(uParam0, 1);
					}
					else
					{
						aggregate.aberdeenpigfarm.func_163(&(uParam0->f_140), 4);
						aggregate.interactive_campfire.func_46(131072);
					}
				}
				else if (aggregate.camera_item.func_12(&(uParam0->f_49)) == 0)
				{
					func_68(uParam0, 1);
					aggregate.interactive_campfire.func_53(131072);
					aggregate.interactive_campfire.func_53(16384);
					aggregate.interactive_campfire.func_46(262144);
					aggregate.interactive_campfire.func_46(65536);
					if (aggregate.interactive_campfire.func_54(8192))
					{
						aggregate.interactive_campfire.func_44(&(uParam0->f_49), 0);
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						aggregate.interactive_campfire.func_103(&(uParam0->f_49));
						uParam0->f_181 = 0;
						return true;
					}
				}
				else if (aggregate.camera_item.func_12(&(uParam0->f_49)) == 1 || aggregate.camera_item.func_34(Global_35, 0))
				{
					aggregate.aberdeenpigfarm.func_163(&(uParam0->f_140), 4);
					uParam0->f_49.f_31 = 0;
					func_140(uParam0, uParam0->f_49.f_23);
					func_68(uParam0, 1);
					aggregate.interactive_campfire.func_103(&(uParam0->f_49));
					aggregate.interactive_campfire.func_53(131072);
					aggregate.interactive_campfire.func_53(16384);
					aggregate.interactive_campfire.func_46(262144);
					aggregate.interactive_campfire.func_46(65536);
					uParam0->f_146 = 6;
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					uParam0->f_181 = 0;
					return true;
				}
			}
			break;
		case 1:
			if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 250)
			{
				if (iVar0 == -518407211 || iVar0 == 1662215698)
				{
					if (func_75(653141085, 1086324736 /* Float: 6f */))
					{
					}
				}
				else if (iVar0 == -1433449364 || iVar0 == 2058555960)
				{
					func_75(1520707380, 1086324736 /* Float: 6f */);
					aggregate.camera_item.func_77(uParam0, 2);
				}
				else
				{
					func_75(-1161086932, 1086324736 /* Float: 6f */);
					aggregate.camera_item.func_77(uParam0, 2);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
			}
			break;
		case 2:
			if (!aggregate.doc_book.func_70(&(uParam0->f_149[3]), 0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458) || func_72(uParam0))
				{
					aggregate.binoculars.func_37(&(uParam0->f_149[3]), 1, 1, 1);
				}
			}
			if (aggregate.doc_book.func_50(&(uParam0->f_149[3]), 1))
			{
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				func_384(uParam0, 3, 1, 0);
				aggregate.annesburg.func_218(uParam0->f_149[3], 1, 1);
				if (((aggregate.bandana.func_58(uParam0->f_49.f_73) == 2085633299 && !aggregate.bandana.func_11(uParam0->f_49.f_73, -1242251796)) && !aggregate.bandana.func_11(uParam0->f_49.f_73, 1919582297)) && !aggregate.bandana.func_11(uParam0->f_49.f_73, -651046900))
				{
					uParam0->f_149[5] = aggregate.binoculars.func_20("USE_ITEM", joaat("INPUT_GAME_MENU_TAB_RIGHT_SECONDARY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					aggregate.camera_item.func_130(&(uParam0->f_149[5]), -1067771379, 0, 1);
					aggregate.binoculars.func_25(&(uParam0->f_149[5]), 10, 1, 1);
					uParam0->f_149[4] = aggregate.binoculars.func_20("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					aggregate.binoculars.func_25(&(uParam0->f_149[4]), 10, 1, 1);
					aggregate.camera_item.func_130(&(uParam0->f_149[4]), -1067771379, 0, 1);
					if (aggregate.coffee_drinking.func_101(uParam0->f_49.f_73, -1636519629) == -701492487)
					{
						aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[5]), "DRINK", 1);
						aggregate.binoculars.func_37(&(uParam0->f_149[4]), 0, 1, 1);
					}
					if (!aggregate.doc_book.func_134(2))
					{
						aggregate.binoculars.func_37(&(uParam0->f_149[5]), 0, 1, 1);
					}
					ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_49.f_73, 1);
				}
				if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
				{
					uParam0->f_49.f_22 = aggregate.interactive_campfire.func_109(uParam0->f_49.f_73, uParam0->f_49.f_74, 1);
					if (aggregate.annesburg.func_217(&(uParam0->f_149[5])))
					{
						aggregate.binoculars.func_37(&(uParam0->f_149[5]), 0, 1, 1);
					}
				}
				uParam0->f_179 = 0;
				aggregate.barcustomer_interaction.func_43(&(uParam0->f_169));
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				uParam0->f_182 = 0;
				aggregate.camera_item.func_77(uParam0, 3);
			}
			else if (aggregate.doc_book.func_70(&(uParam0->f_149[3]), 0))
			{
				func_397(uParam0, iVar0);
			}
			break;
		case 3:
			if (func_72(uParam0))
			{
				if (aggregate.dynamic_craft_scenario.func_37(&(uParam0->f_169), 0.1f))
				{
					if (iVar0 == -87088667 || iVar0 == -8536912)
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_75(-266297705, 1f);
						aggregate.barcustomer_interaction.func_43(&(uParam0->f_169));
					}
					else
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
						func_75(1581850152, 1086324736 /* Float: 6f */);
					}
				}
			}
			func_398(uParam0);
			if (aggregate.annesburg.func_217(&(uParam0->f_149[5])))
			{
				if (aggregate.doc_book.func_70(&(uParam0->f_149[5]), 0) && (aggregate.binoculars.func_13(&(uParam0->f_149[5]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
					{
						aggregate.interactive_campfire.func_76(uParam0->f_49.f_73, 1, 1, -142743235);
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					aggregate.interactive_campfire.func_80(uParam0->f_49.f_73, 1, 1, 0, 0);
					aggregate.annesburg.func_218(uParam0->f_149[5], 1, 1);
					aggregate.annesburg.func_218(uParam0->f_149[4], 1, 1);
					func_399(uParam0, 1);
					aggregate.interactive_campfire.func_53(131072);
					aggregate.interactive_campfire.func_44(&(uParam0->f_49), 15);
					aggregate.camera_item.func_77(uParam0, 5);
					return false;
				}
			}
			if ((!aggregate.annesburg.func_217(&(uParam0->f_149[5])) || (aggregate.doc_book.func_70(&(uParam0->f_149[4]), 0) && (aggregate.camera_item.func_31(&(uParam0->f_149[4]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION"))))) || aggregate.camera_item.func_34(Global_35, 0))
			{
				aggregate.annesburg.func_218(uParam0->f_149[5], 1, 1);
				aggregate.annesburg.func_218(uParam0->f_149[4], 1, 1);
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				if (uParam0->f_181)
				{
					uParam0->f_181 = 0;
					func_104(&(uParam0->f_49), 0);
					AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
					aggregate.interactive_campfire.func_44(&(uParam0->f_49), 1);
				}
				else
				{
					aggregate.interactive_campfire.func_44(&(uParam0->f_49), 15);
				}
				func_399(uParam0, 1);
				aggregate.camera_item.func_77(uParam0, 4);
				return false;
			}
			break;
		case 4:
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 100 || aggregate.barcustomer_interaction.func_42(&(uParam0->f_169))))
			{
				if (iVar0 == -87088667 || iVar0 == -8536912)
				{
					func_75(-1530401853, 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == 512684539 || iVar0 == 970934364)
				{
					func_75(-1463467224, 1086324736 /* Float: 6f */);
					func_75(1111052667, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_75(1111052667, 1086324736 /* Float: 6f */);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				aggregate.camera_item.func_77(uParam0, 7);
			}
			break;
		case 5:
			func_401();
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 100 || aggregate.barcustomer_interaction.func_42(&(uParam0->f_169))))
			{
				if (iVar0 == -87088667 || iVar0 == -8536912)
				{
					func_75(-1878840211, 1086324736 /* Float: 6f */);
				}
				else if (iVar0 == 512684539 || iVar0 == 970934364)
				{
					func_75(-1510453203, 1086324736 /* Float: 6f */);
					func_75(-1783213919, 1086324736 /* Float: 6f */);
				}
				else
				{
					func_75(-1783213919, 1086324736 /* Float: 6f */);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				aggregate.camera_item.func_77(uParam0, 6);
			}
			break;
		case 9:
			if (func_72(uParam0))
			{
				if (iVar0 == -1433449364 || iVar0 == 2058555960)
				{
					func_75(1335077954, 1086324736 /* Float: 6f */);
					return false;
				}
				uParam0->f_178 = 0;
				aggregate.interactive_campfire.func_53(268435456);
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				if (iVar0 == -518407211 || iVar0 == 1662215698)
				{
					func_75(-9448781, 1086324736 /* Float: 6f */);
					aggregate.interactive_campfire.func_46(16384);
					aggregate.camera_item.func_77(uParam0, 10);
				}
				else
				{
					func_75(2101630952, 1086324736 /* Float: 6f */);
					aggregate.interactive_campfire.func_46(16384);
					aggregate.camera_item.func_77(uParam0, 10);
				}
			}
			break;
		case 10:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -560091334))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, true);
			}
			if (!aggregate.doc_book.func_70(&(uParam0->f_149[3]), 0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("cook_meat_sizzle_loop", uParam0->f_147, "Player_Campfire_Sounds", 0, 0, 0);
					AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
					aggregate.binoculars.func_37(&(uParam0->f_149[3]), 1, 1, 1);
					aggregate.interactive_campfire.func_402(&(uParam0->f_149[3]), 1);
				}
			}
			if (aggregate.doc_book.func_50(&(uParam0->f_149[3]), 1))
			{
				uParam0->f_175 = -1;
				OBJECT::_0x2797C633DCDBBAC5(uParam0->f_147, 1f, 1);
				if (PAD::_0x1252C029FC8EBB4D())
				{
					PAD::_0x709BA8C08C5C008D();
				}
				uParam0->f_149[4] = aggregate.binoculars.func_20("STOW_ITEM", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				uParam0->f_149[5] = aggregate.binoculars.func_20("EAT_MEAT", joaat("INPUT_CRAFTING_EAT"), 1, 0, 0, 0, 570, 4000, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
				aggregate.binoculars.func_25(&(uParam0->f_149[5]), 10, 1, 1);
				aggregate.binoculars.func_25(&(uParam0->f_149[4]), 10, 1, 1);
				aggregate.camera_item.func_130(&(uParam0->f_149[4]), -1067771379, 0, 1);
				aggregate.camera_item.func_130(&(uParam0->f_149[5]), -1067771379, 0, 1);
				if (aggregate.interactive_campfire.func_403(uParam0->f_49.f_73, 1, 0) || aggregate.interactive_campfire.func_63(64))
				{
					aggregate.binoculars.func_37(&(uParam0->f_149[4]), 0, 1, 1);
					func_48(64);
				}
				else if (!aggregate.doc_book.func_134(2))
				{
					aggregate.binoculars.func_37(&(uParam0->f_149[5]), 0, 1, 1);
				}
				aggregate.annesburg.func_218(uParam0->f_149[3], 1, 1);
				aggregate.barcustomer_interaction.func_43(&(uParam0->f_169));
				aggregate.interactive_campfire.func_53(16384);
				uParam0->f_179 = 0;
				if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
				{
					uParam0->f_49.f_22 = aggregate.interactive_campfire.func_109(uParam0->f_49.f_73, uParam0->f_49.f_74, 1);
					aggregate.binoculars.func_37(&(uParam0->f_149[5]), 0, 1, 1);
				}
				ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_49.f_73, 1);
				AUDIO::_0x0F2A2175734926D8("cook_meat_sizzle_loop", "Player_Campfire_Sounds");
				uParam0->f_182 = 0;
				aggregate.camera_item.func_77(uParam0, 11);
			}
			else
			{
				func_397(uParam0, iVar0);
				if (uParam0->f_175 == -1)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1070143458))
					{
						uParam0->f_175 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					fVar3 = aggregate.fm_mission_controller.func_5040(&(uParam0->f_149[3]), 1);
					fVar3 = aggregate.coffee_drinking.func_45(fVar3, 0f, 1f);
					OBJECT::_0x2797C633DCDBBAC5(uParam0->f_147, (1f * fVar3), 1);
				}
			}
			break;
		case 11:
			if (func_72(uParam0))
			{
				if (aggregate.dynamic_craft_scenario.func_37(&(uParam0->f_169), 0.1f))
				{
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					if (iVar0 == -283636008 || iVar0 == -341412437)
					{
						func_75(-1065570550, 2f);
					}
					else
					{
						func_75(-1295988014, 2f);
					}
				}
			}
			func_398(uParam0);
			if (aggregate.annesburg.func_217(&(uParam0->f_149[5])))
			{
				if (aggregate.doc_book.func_70(&(uParam0->f_149[5]), 0) && (aggregate.binoculars.func_13(&(uParam0->f_149[5]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CRAFTING_EAT"))))
				{
					uParam0->f_178 = (uParam0->f_178 - 1);
					if (uParam0->f_177)
					{
						uParam0->f_177 = 0;
					}
					ATTRIBUTE::_0xD962F8579D702DB5();
					aggregate.interactive_campfire.func_80(uParam0->f_49.f_73, 1, 1, 0, 0);
					aggregate.annesburg.func_218(uParam0->f_149[5], 1, 1);
					aggregate.annesburg.func_218(uParam0->f_149[4], 1, 1);
					func_399(uParam0, 1);
					aggregate.interactive_campfire.func_46(32768);
					if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
					{
						aggregate.interactive_campfire.func_76(uParam0->f_49.f_73, 1, 1, -142743235);
					}
					uParam0->f_164 = MISC::GET_GAME_TIMER();
					aggregate.camera_item.func_77(uParam0, 13);
					return false;
				}
			}
			if (aggregate.annesburg.func_217(&(uParam0->f_149[4])))
			{
				if ((((aggregate.doc_book.func_70(&(uParam0->f_149[4]), 0) && (aggregate.binoculars.func_13(&(uParam0->f_149[4]), 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_OPTION")))) || uParam0->f_180) || aggregate.camera_item.func_34(Global_35, 0)) || TASK::_0x916B8E075ABC8B4E(Global_35, 1))
				{
					func_47(16);
					uParam0->f_180 = 0;
					ATTRIBUTE::_0xD962F8579D702DB5();
					aggregate.annesburg.func_218(uParam0->f_149[4], 1, 1);
					aggregate.annesburg.func_218(uParam0->f_149[5], 1, 1);
					func_399(uParam0, 1);
					aggregate.camera_item.func_77(uParam0, 16);
					return false;
				}
			}
			break;
		case 16:
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 250 || aggregate.barcustomer_interaction.func_42(&(uParam0->f_169))))
			{
				if (iVar0 == -283636008 || iVar0 == -341412437)
				{
					func_75(528569882, 1f);
				}
				else if (iVar0 == 1412614124 || iVar0 == 2134236454)
				{
					func_75(288708544, 1f);
				}
				else
				{
					func_75(-915834315, 1f);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				aggregate.camera_item.func_77(uParam0, 15);
			}
			break;
		case 13:
			func_401();
			if (func_72(uParam0) && ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 250 || aggregate.barcustomer_interaction.func_42(&(uParam0->f_169))))
			{
				if (iVar0 == -283636008 || iVar0 == -341412437)
				{
					func_75(709478876, 1f);
				}
				else if (iVar0 == 1412614124 || iVar0 == 2134236454)
				{
					func_75(606164441, 1f);
				}
				else
				{
					func_75(-414126081, 2f);
				}
				uParam0->f_164 = MISC::GET_GAME_TIMER();
				aggregate.camera_item.func_77(uParam0, 14);
			}
			break;
		case 6:
		case 7:
		case 14:
		case 15:
			if (uParam0->f_138 == 14 || uParam0->f_138 == 6)
			{
				func_401();
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -243011316) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
			{
				func_406(uParam0, 1);
				aggregate.interactive_campfire.func_53(32768);
				func_48(16);
				if (uParam0->f_138 == 14 || uParam0->f_138 == 15)
				{
					aggregate.interactive_campfire.func_46(65536);
					aggregate.camera_item.func_77(uParam0, 12);
				}
				else
				{
					aggregate.camera_item.func_77(uParam0, 8);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - uParam0->f_164) > 750)
			{
				if (!PED::_0xC488B8C0E52560D8(Global_35))
				{
					if (iVar0 == -518407211 || iVar0 == 1662215698)
					{
						aggregate.interactive_campfire.func_46(65536);
						aggregate.camera_item.func_77(uParam0, 12);
					}
					else if (iVar0 == -1433449364 || iVar0 == 2058555960)
					{
						aggregate.camera_item.func_77(uParam0, 8);
					}
					else if (uParam0->f_138 == 14)
					{
						aggregate.camera_item.func_77(uParam0, 13);
					}
					else if (uParam0->f_138 == 15)
					{
						aggregate.camera_item.func_77(uParam0, 16);
					}
					else if (uParam0->f_138 == 7)
					{
						aggregate.camera_item.func_77(uParam0, 4);
					}
					else if (uParam0->f_138 == 6)
					{
						aggregate.camera_item.func_77(uParam0, 5);
					}
				}
			}
			break;
		case 8:
		case 12:
			aggregate.interactive_campfire.func_46(1024);
			if (aggregate.interactive_campfire.func_63(128))
			{
				if (aggregate.doc_book.func_70(&(uParam0->f_149[7]), 0))
				{
					aggregate.binoculars.func_37(&(uParam0->f_149[7]), 0, 1, 1);
				}
				if (aggregate.doc_book.func_70(&(uParam0->f_149[1]), 0))
				{
					aggregate.binoculars.func_37(&(uParam0->f_149[1]), 0, 1, 1);
				}
			}
			else
			{
				func_406(uParam0, 1);
			}
			if (aggregate.doc_book.func_70(&(uParam0->f_149[3]), 0))
			{
				if (aggregate.camera_item.func_34(Global_35, 0))
				{
					aggregate.binoculars.func_37(&(uParam0->f_149[3]), 0, 1, 1);
				}
			}
			if (aggregate.binoculars.func_13(&(uParam0->f_149[3]), 1))
			{
				aggregate.interactive_campfire.func_53(65536);
				aggregate.interactive_campfire.func_103(&(uParam0->f_149));
				if (uParam0->f_138 == 12)
				{
					func_393(uParam0);
				}
				else
				{
					func_408(uParam0);
				}
			}
			else if (aggregate.binoculars.func_13(&(uParam0->f_149[7]), 1))
			{
				aggregate.interactive_campfire.func_53(65536);
				aggregate.interactive_campfire.func_103(&(uParam0->f_149));
				aggregate.camera_item.func_77(uParam0, 0);
				aggregate.interactive_campfire.func_44(&(uParam0->f_49), 15);
				uParam0->f_181 = 0;
			}
			else if (aggregate.doc_book.func_50(&(uParam0->f_149[1]), 1))
			{
				aggregate.interactive_campfire.func_53(65536);
				aggregate.interactive_campfire.func_103(&(uParam0->f_149));
				aggregate.camera_item.func_77(uParam0, 0);
				uParam0->f_181 = 0;
				func_104(&(uParam0->f_49), 0);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "SSCRFT_Sounds", true, 0);
				aggregate.interactive_campfire.func_44(&(uParam0->f_49), 1);
				aggregate.camera_item.func_77(uParam0, 0);
				return false;
			}
			else if (aggregate.fm_mission_controller.func_6067(&(uParam0->f_149[1]), 1))
			{
				if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_49.f_86)))
				{
					aggregate.barcustomer_interaction.func_43(&(uParam0->f_49.f_86));
				}
				else if (aggregate.broom_scenario.func_18(&(uParam0->f_49.f_86), 0.1f))
				{
					aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[1]), "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_49.f_86)))
				{
					aggregate.barcustomer_interaction.func_50(&(uParam0->f_49.f_86));
				}
				if (aggregate.annesburg.func_217(&(uParam0->f_149[1])))
				{
					aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[1]), "CAMP_REC_BACK", 1);
				}
			}
			break;
	}
	return false;
}

int func_218(bool bParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;

	if (!aggregate.fme_animal_tagging.func_1529(bParam0, bParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117());
	iVar34 = -1;
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32 /*2*/] == 0)
		{
			Jump @268; //curOff = 73
		}
		else
		{
			iVar35 = aggregate.fm_mission_controller.func_1632(&(Var0[iVar32 /*2*/]), 0, !bVar33, 0);
			if (bVar33)
			{
				if (aggregate.fm_mission_controller.func_6324(&(Var0[iVar32 /*2*/])) || aggregate.fm_mission_controller.func_6325(&(Var0[iVar32 /*2*/])))
				{
					iVar35 = (iVar35 + aggregate.fm_mission_controller.func_6327(&(Var0[iVar32 /*2*/]), 0));
					if (bParam2)
					{
						iVar36 = 0;
						iVar35 = (iVar35 + aggregate.fm_mission_controller.func_6326(7, &(Var0[iVar32 /*2*/]), &iVar36));
					}
				}
				else if (bParam2)
				{
					iVar35 = (iVar35 + (aggregate.fm_mission_controller.func_6328(7, &(Var0[iVar32 /*2*/])) + aggregate.fm_mission_controller.func_6329(&(Var0[iVar32 /*2*/]))));
				}
			}
			if (iVar35 < (Var0[iVar32 /*2*/])->f_1)
			{
				return 0;
			}
			iVar35 = (iVar35 / (Var0[iVar32 /*2*/])->f_1);
			if (iVar34 == -1 || iVar35 < iVar34)
			{
				iVar34 = iVar35;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_220(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar52;
	struct<16> Var53;

	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return -1;
	}
	if (aggregate.bandana.func_58(bParam0) != 26423971)
	{
		return -1;
	}
	if (aggregate.doc_book.func_117())
	{
		bParam3 = true;
	}
	if (bParam5 == -570078785 || bParam5 == -915411861)
	{
		iVar0 = (aggregate.fme_animal_tagging.func_1403(bParam0, bParam5, 1, 0, 1, 2084597891 /* GXTEntry: "Money" */) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (aggregate.fme_animal_tagging.func_1403(bParam0, bParam5, 1, 0, 1, 773203532 /* GXTEntry: "Gold Bar" */) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (aggregate.fme_animal_tagging.func_1529(bParam0, bParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
			if (!aggregate.fm_mission_controller.func_1632(&(Var2[iVar35 /*2*/]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && aggregate.doc_book.func_93(0))
	{
		if (iVar0 > 0)
		{
			aggregate.dynamic_craft_scenario.func_59(2084597891 /* GXTEntry: "Money" */, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			aggregate.dynamic_craft_scenario.func_59(773203532 /* GXTEntry: "Gold Bar" */, iVar1, -142743235, 0, 0);
		}
		else if (aggregate.fm_mission_controller.func_6230(bParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = ((Var2[iVar35 /*2*/])->f_1 * iParam2);
				aggregate.dynamic_craft_scenario.func_59(&(Var2[iVar35 /*2*/]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = bParam5;
	Var36.f_12 = -142743235;
	iVar52 = aggregate.doc_book.func_253(joaat("spend"), &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		StringCopy(&(Var53.f_12), sParam1, 32);
		aggregate.doc_book.func_254(iVar52, Var53);
	}
	return iVar52;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_hawk_01"):
		case joaat("a_c_cormorant_01"):
		case joaat("a_c_songbird_01"):
		case joaat("a_c_oriole_01"):
		case joaat("a_c_robin_01"):
		case joaat("a_c_roseatespoonbill_01"):
		case joaat("a_c_sparrow_01"):
		case joaat("a_c_owl_01"):
		case joaat("a_c_raven_01"):
		case joaat("a_c_cranewhooping_01"):
		case joaat("a_c_redfootedbooby_01"):
		case joaat("a_c_cedarwaxwing_01"):
		case joaat("a_c_seagull_01"):
		case joaat("a_c_crow_01"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_loon_01"):
		case joaat("a_c_woodpecker_01"):
		case 729471181:
		case joaat("a_c_egret_01"):
		case joaat("a_c_heron_01"):
		case joaat("a_c_vulture_01"):
		case joaat("a_c_californiacondor_01"):
		case joaat("a_c_eagle_01"):
		case joaat("a_c_bluejay_01"):
		case joaat("a_c_cardinal_01"):
			return 166398389 /* GXTEntry: "Plain Game Bird" */;
		case joaat("a_c_armadillo_01"):
		case joaat("a_c_snakeredboa_01"):
		case joaat("a_c_chipmunk_01"):
		case joaat("a_c_possum_01"):
		case joaat("a_c_skunk_01"):
		case joaat("a_c_badger_01"):
		case joaat("a_c_muskrat_01"):
		case joaat("a_c_snakewater_01"):
		case joaat("a_c_fox_01"):
		case joaat("a_c_coyote_01"):
		case joaat("a_c_snake_01"):
		case joaat("a_c_beaver_01"):
		case joaat("a_c_snakeblacktailrattle_01"):
		case joaat("a_c_rat_01"):
		case joaat("a_c_raccoon_01"):
		case joaat("a_c_snakeferdelance_01"):
		case joaat("a_c_squirrel_01"):
			return -467118139 /* GXTEntry: "Plain Stringy Meat" */;
		case joaat("a_c_iguana_01"):
		case joaat("a_c_turtlesea_01"):
		case joaat("a_c_frogbull_01"):
		case joaat("a_c_iguanadesert_01"):
		case joaat("a_c_turtlesnapping_01"):
		case joaat("a_c_toad_01"):
			return 524620511 /* GXTEntry: "Plain Herptile" */;
		case joaat("a_c_fishbluegil_01_sm"):
		case joaat("a_c_fishchannelcatfish_01_xl"):
		case joaat("a_c_fishlongnosegar_01_lg"):
		case joaat("a_c_fishbullheadcat_01_ms"):
		case joaat("a_c_fishbullheadcat_01_sm"):
		case joaat("a_c_fishchannelcatfish_01_lg"):
		case joaat("a_c_fishbluegil_01_ms"):
			return -1768405210 /* GXTEntry: "Gritty Fish" */;
		case joaat("a_c_bighornram_01"):
		case joaat("a_c_goat_01"):
		case joaat("a_c_sheep_01"):
			return -546209848 /* GXTEntry: "Plain Mutton" */;
		case joaat("a_c_fishrockbass_01_ms"):
		case joaat("a_c_fishsmallmouthbass_01_lg"):
		case joaat("a_c_fishmuskie_01_lg"):
		case joaat("a_c_fishchainpickerel_01_ms"):
		case joaat("a_c_fishperch_01_ms"):
		case joaat("a_c_fishlakesturgeon_01_lg"):
		case joaat("a_c_fishredfinpickerel_01_ms"):
		case joaat("a_c_fishrockbass_01_sm"):
		case joaat("a_c_fishlargemouthbass_01_ms"):
		case joaat("a_c_fishchainpickerel_01_sm"):
		case joaat("a_c_fishlargemouthbass_01_lg"):
		case joaat("a_c_fishredfinpickerel_01_sm"):
		case joaat("a_c_fishnorthernpike_01_lg"):
		case joaat("a_c_fishperch_01_sm"):
		case joaat("a_c_fishsmallmouthbass_01_ms"):
			return 880496229 /* GXTEntry: "Plain Flaky Fish" */;
		case joaat("a_c_chicken_01"):
		case joaat("a_c_turkeywild_01"):
		case joaat("a_c_turkey_01"):
		case joaat("a_c_turkey_02"):
		case joaat("a_c_goosecanada_01"):
		case joaat("a_c_rooster_01"):
		case joaat("a_c_prairiechicken_01"):
			return 2058993648 /* GXTEntry: "Plain Plump Bird" */;
		case joaat("a_c_cow"):
		case joaat("a_c_bull_01"):
		case joaat("a_c_ox_01"):
		case joaat("a_c_buffalo_01"):
			return -1535978095 /* GXTEntry: "Plain Prime Beef" */;
		case joaat("a_c_elk_01"):
		case joaat("a_c_buck_01"):
		case joaat("a_c_moose_01"):
		case joaat("a_c_deer_01"):
		case joaat("a_c_pronghorn_01"):
			return -151108755 /* GXTEntry: "Plain Venison" */;
		case joaat("a_c_pig_01"):
		case joaat("a_c_javelina_01"):
		case joaat("a_c_boar_01"):
			return 1663095412 /* GXTEntry: "Plain Pork" */;
		case joaat("a_c_duck_01"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_pheasant_01"):
		case joaat("a_c_quail_01"):
			return -348823399 /* GXTEntry: "Plain Game" */;
		case joaat("a_c_fishsalmonsockeye_01_ms"):
		case joaat("a_c_fishrainbowtrout_01_lg"):
		case joaat("a_c_fishrainbowtrout_01_ms"):
		case joaat("a_c_fishsalmonsockeye_01_lg"):
			return -1240620284 /* GXTEntry: "Plain Succulent Fish" */;
		case joaat("a_c_parrot_01"):
		case joaat("a_c_pelican_01"):
		case joaat("a_c_carolinaparakeet_01"):
			return 532201260 /* GXTEntry: "Plain Exotic Bird" */;
		case joaat("a_c_alligator_01"):
		case joaat("a_c_alligator_02"):
		case joaat("a_c_alligator_03"):
		case joaat("a_c_wolf"):
		case joaat("a_c_bear_01"):
		case joaat("a_c_wolf_medium"):
		case joaat("a_c_wolf_small"):
		case joaat("a_c_cougar_01"):
		case joaat("a_c_bearblack_01"):
		case joaat("a_c_panther_01"):
			return 1610737930 /* GXTEntry: "Plain Big Game" */;
		case joaat("a_c_crab_01"):
			return -1277667710 /* GXTEntry: "Plain Crustacean" */;
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.fm_mission_controller.func_5973(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_INJURED(iVar0))
	{
		return iVar0;
	}
	return 0;
}

int func_242(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar1 = PED::_0x7BCC6087D130312A(iParam0);
		switch (iVar1)
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
			case -1:
			case 2:
				iVar0 = 2;
				break;
		}
	}
	return iVar0;
}

bool func_243(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("a_c_fishbluegil_01_sm"):
		case joaat("a_c_crab_01"):
		case joaat("a_c_fishrockbass_01_ms"):
		case joaat("a_c_songbird_01"):
		case joaat("a_c_chipmunk_01"):
		case joaat("a_c_oriole_01"):
		case joaat("a_c_robin_01"):
		case joaat("a_c_fishchainpickerel_01_ms"):
		case joaat("a_c_sparrow_01"):
		case joaat("a_c_frogbull_01"):
		case joaat("a_c_fishperch_01_ms"):
		case joaat("a_c_cedarwaxwing_01"):
		case joaat("a_c_fishredfinpickerel_01_ms"):
		case joaat("a_c_fishrockbass_01_sm"):
		case joaat("a_c_fishsalmonsockeye_01_ms"):
		case joaat("a_c_crow_01"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_fishlargemouthbass_01_ms"):
		case joaat("a_c_fishchainpickerel_01_sm"):
		case joaat("a_c_fishrainbowtrout_01_ms"):
		case joaat("a_c_woodpecker_01"):
		case joaat("a_c_fishredfinpickerel_01_sm"):
		case joaat("a_c_bat_01"):
		case joaat("a_c_fishbullheadcat_01_ms"):
		case joaat("a_c_fishperch_01_sm"):
		case 729471181:
		case joaat("a_c_rat_01"):
		case joaat("a_c_squirrel_01"):
		case joaat("a_c_fishbullheadcat_01_sm"):
		case joaat("a_c_toad_01"):
		case joaat("a_c_bluejay_01"):
		case joaat("a_c_carolinaparakeet_01"):
		case joaat("a_c_cardinal_01"):
		case joaat("a_c_fishsmallmouthbass_01_ms"):
		case joaat("a_c_fishbluegil_01_ms"):
		case joaat("a_c_quail_01"):
			return true;
		default:
			break;
	}
	return false;
}

void func_258(var uParam0, char* sParam1)
{
	int iVar0;

	if (aggregate.annesburg.func_217(*uParam0))
	{
		iVar0 = aggregate.annesburg.func_253(*uParam0);
		if (HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
		{
			HUD::_UIPROMPT_SET_TAG(((*Global_1949749)[iVar0 /*23*/])->f_3, sParam1);
		}
	}
}

bool func_260()
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.9f * 0.9f))
	{
		return true;
	}
	return false;
}

bool func_264(var uParam0)
{
	int iVar0;

	uParam0->f_144 = func_59();
	iVar0 = func_35(uParam0);
	if ((((uParam0->f_145 == -1 || iVar0 == uParam0->f_145) && (uParam0->f_146 == 0 || func_488(uParam0->f_144, uParam0->f_146))) || (uParam0->f_145 == -1 && func_488(uParam0->f_144, uParam0->f_146))) && !(PED::_0xC488B8C0E52560D8(Global_35) || PED::_0x2DC0E8DCBD3546E9(Global_35)))
	{
		uParam0->f_143 = iVar0;
		return true;
	}
	return false;
}

void func_265(var uParam0)
{
	int iVar0;

	iVar0 = PED::_0xC22AA08A8ADB87D4(Global_35);
	if (iVar0 == -518407211 || iVar0 == 1662215698)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(653141085, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 == -1433449364 || iVar0 == 2058555960)
	{
		if (func_72(uParam0) && (MISC::GET_GAME_TIMER() - uParam0->f_164) > 500)
		{
			func_75(1335077954, 2f);
			uParam0->f_164 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_266(var uParam0)
{
	if (uParam0->f_144 == 6 && func_58(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_144)
		{
			case 1:
				func_75(-73132177, 1086324736 /* Float: 6f */);
				break;
		}
	}
	return 0;
}

int func_267(var uParam0)
{
	if (uParam0->f_144 == 6 && func_58(1))
	{
		return 1;
	}
	else
	{
		switch (uParam0->f_144)
		{
			case 1:
				func_75(-73132177, 1086324736 /* Float: 6f */);
				break;
			case 8:
				func_75(-1890302844, 0.5f);
				break;
			case 7:
				func_75(36116464, 0.5f);
				break;
		}
	}
	return 0;
}

bool func_268(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)
{
	PED::_0x6D07B371E9439019(Global_35);
	return TASK::_0x79197F7D2BB5E73A(iParam0, uParam1, sParam2, sParam3, iParam4, 0);
}

var func_275(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915170->f_20136;
	}
	return (Global_1915170->f_20136 || Global_1915170->f_21989.f_1);
}

void func_378(var uParam0)
{
	StringCopy(&(uParam0->f_18), "CAMP", 8);
}

void func_379(var uParam0)
{
	if (HUD::_0x2C729F2B94CEA911(&(uParam0->f_18)))
	{
		HUD::_0xF66090013DE648D5(&(uParam0->f_18));
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (uParam0->f_25)
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	STREAMING::REQUEST_MODEL(809653548, false);
	STREAMING::REQUEST_MODEL(975914773, false);
	STREAMING::REQUEST_MODEL(1537403900, false);
	STREAMING::REQUEST_MODEL(-236347221, false);
	STREAMING::REQUEST_MODEL(-91245513, false);
	STREAMING::REQUEST_MODEL(-655768729, false);
	STREAMING::REQUEST_MODEL(joaat("w_melee_tomahawk01"), false);
	STREAMING::REQUEST_MODEL(joaat("w_melee_knife05"), false);
	STREAMING::REQUEST_MODEL(joaat("p_cs_rag01x"), false);
	STREAMING::REQUEST_MODEL(-467664954, false);
	STREAMING::REQUEST_MODEL(-856043142, false);
	STREAMING::REQUEST_MODEL(-370340297, false);
	STREAMING::REQUEST_MODEL(1974613782, false);
	STREAMING::REQUEST_MODEL(400517539, false);
	STREAMING::REQUEST_MODEL(-1906499827, false);
	func_580(uParam0);
	if (uParam0->f_28)
	{
		STREAMING::REQUEST_MODEL(-194504515, false);
		STREAMING::REQUEST_MODEL(-2049449981, false);
		STREAMING::REQUEST_MODEL(-1172163183, false);
		STREAMING::REQUEST_MODEL(222541312, false);
		STREAMING::REQUEST_MODEL(1289914954, false);
	}
}

bool func_380(var uParam0)
{
	if (aggregate.interactive_campfire.func_581(&(uParam0->f_18)))
	{
		if (!HUD::_0xD0976CC34002DB57(&(uParam0->f_18)))
		{
			return false;
		}
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
	{
		return false;
	}
	if (uParam0->f_25)
	{
		return true;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
	{
		return false;
	}
	if (!func_582(uParam0, &(uParam0->f_59)))
	{
		return false;
	}
	if (!func_582(uParam0, &(uParam0->f_61)))
	{
		return false;
	}
	if (!func_582(uParam0, &(uParam0->f_62)))
	{
		return false;
	}
	if (!func_582(uParam0, &(uParam0->f_63)))
	{
		return false;
	}
	if (!func_582(uParam0, &(uParam0->f_64)))
	{
		return false;
	}
	if (!func_582(uParam0, &(uParam0->f_65)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(809653548))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(975914773))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1537403900))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-236347221))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-655768729))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_melee_tomahawk01")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(joaat("w_melee_knife05")))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-91245513))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-370340297))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-467664954))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-856043142))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1974613782))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(400517539))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-1906499827))
	{
		return false;
	}
	if (uParam0->f_28)
	{
		if (!STREAMING::HAS_MODEL_LOADED(-194504515))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(-2049449981))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(-1172163183))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(222541312))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(1289914954))
		{
			return false;
		}
	}
	return true;
}

int func_381()
{
	bool bVar0;
	bool bVar1;

	if (!aggregate.bandana.func_22(&bVar0))
	{
		return 0;
	}
	PED::_0x2208438012482A1A(Global_35, false, false);
	PED::_0xC494C76A34266E82(Global_35, 13);
	bVar1 = func_583(bVar0);
	if (bVar1 == -358215195)
	{
		return 0;
	}
	func_584(&(Global_1951131->f_81[aggregate.bandana.func_44(bVar1, 1) /*12*/]), 8);
	aggregate.bandana.func_28(22, 0, 0, 0, 0);
	return 1;
}

int func_383(bool bParam0)
{
	int iVar0;

	iVar0 = aggregate.interactive_campfire.func_586(bParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return 1289914954;
}

void func_384(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		uParam0->f_49.f_21++;
	}
	if (uParam0->f_49.f_33 == -1)
	{
		iVar0 = aggregate.fm_mission_controller.func_1632(uParam0->f_49.f_73, 0, 0, 0);
		iVar1 = aggregate.fishing_core.func_521(uParam0->f_49.f_73, 0);
		iVar2 = func_218(uParam0->f_49.f_73, uParam0->f_49.f_74, func_394());
		if (iVar1 == -1)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = (iVar1 - iVar0);
		}
		uParam0->f_49.f_33 = aggregate.doc_book.func_255(iVar1, iVar2);
	}
	if (aggregate.interactive_campfire.func_234(uParam0->f_49.f_73))
	{
		if (bParam3)
		{
			aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[iParam1]), "CAMP_REC_COOK_AGN", 1);
		}
		else
		{
			aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[iParam1]), "CAMP_REC_COOK", 1);
		}
	}
	else if (bParam3)
	{
		if (aggregate.coffee_drinking.func_101(uParam0->f_49.f_73, -1636519629) == -701492487)
		{
			aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[iParam1]), "CAMP_REC_BREW_AGN", 1);
		}
		else
		{
			aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[iParam1]), "CAMP_REC_MAKE_AGN", 1);
		}
	}
	else if (aggregate.coffee_drinking.func_101(uParam0->f_49.f_73, -1636519629) == -701492487)
	{
		aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[iParam1]), "CAMP_REC_BREW", 1);
	}
	else
	{
		aggregate.fme_animal_tagging.func_318(&(uParam0->f_149[iParam1]), "CAMP_REC_MAKE", 1);
	}
}

void func_388(bool bParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	struct<2> Var11;
	struct<7> Var33[20];

	if ((aggregate.bandana.func_11(bParam0, 1573112293) || aggregate.bandana.func_11(bParam0, 672467738)) || aggregate.bandana.func_11(bParam0, -550842268))
	{
		bVar10 = true;
	}
	Var11.f_1 = 20;
	ATTRIBUTE::_0xD962F8579D702DB5();
	Global_1939057->f_26 = 0;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bParam0, &Var11))
	{
		iVar0 = 0;
		while (iVar0 < Var11)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var11.f_1[iVar0]), Var33[iVar0 /*7*/]))
			{
				switch ((Var33[iVar0 /*7*/])->f_1)
				{
					case -943921969:
						fVar1 = aggregate.coffee_drinking.func_16(0, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						aggregate.coffee_drinking.func_17((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						bVar9 = true;
						break;
					case -1104847406:
						fVar3 = aggregate.coffee_drinking.func_16(2, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						aggregate.coffee_drinking.func_18((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), 0);
						bVar8 = true;
						break;
					case 381158954:
						fVar2 = aggregate.coffee_drinking.func_16(1, (IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						aggregate.coffee_drinking.func_19((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1));
						break;
					case -416929031:
						fVar4 = aggregate.coffee_drinking.func_20((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						aggregate.coffee_drinking.func_21(0, fVar4, 1, 1, bVar10);
						bVar9 = true;
						break;
					case 1857353317:
						fVar5 = aggregate.coffee_drinking.func_20((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						aggregate.coffee_drinking.func_21(2, fVar5, 1, 1, bVar10);
						bVar8 = true;
						break;
					case 1681823811:
						fVar6 = aggregate.coffee_drinking.func_20((IntToFloat((Var33[iVar0 /*7*/])->f_2) / fParam1), ((Var33[iVar0 /*7*/])->f_5 / fParam1));
						aggregate.coffee_drinking.func_21(1, fVar6, 1, 1, bVar10);
						break;
					case -816334026:
						aggregate.coffee_drinking.func_22((BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_2) / fParam1), 1);
						break;
					default:
						if (bParam2)
						{
							switch ((Var33[iVar0 /*7*/])->f_1)
							{
								case 2062242710:
									fVar7 = aggregate.coffee_drinking.func_23(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate.coffee_drinking.func_24(19, fVar7, 1, 1);
									bVar9 = true;
									break;
								case -826379728:
									fVar7 = aggregate.coffee_drinking.func_23(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate.coffee_drinking.func_24(20, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1191740624:
									fVar7 = aggregate.coffee_drinking.func_23(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate.coffee_drinking.func_24(18, fVar7, 1, 1);
									break;
								case 1869697234:
									fVar7 = aggregate.coffee_drinking.func_23(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate.coffee_drinking.func_24(0, fVar7, 1, 1);
									bVar9 = true;
									break;
								case 1342237631:
									fVar7 = aggregate.coffee_drinking.func_23(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate.coffee_drinking.func_24(2, fVar7, 1, 1);
									bVar8 = true;
									break;
								case -1240225157:
									fVar7 = aggregate.coffee_drinking.func_23(BUILTIN::TO_FLOAT((Var33[iVar0 /*7*/])->f_3), (Var33[iVar0 /*7*/])->f_4);
									aggregate.coffee_drinking.func_24(1, fVar7, 1, 1);
									break;
							}
						}
						break;
				}
			}
			iVar0++;
		}
		if (bParam2)
		{
			aggregate.coffee_drinking.func_26(bParam0, bVar8, bVar9, 562618531);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar1, fVar2, fVar3, BUILTIN::ROUND(fVar4), BUILTIN::ROUND(fVar6), BUILTIN::ROUND(fVar5));
	}
}

bool func_391(int iParam0)
{
	switch (iParam0)
	{
		case -1433449364:
		case -597629206:
		case -571916863:
		case -518407211:
		case 825619760:
		case 1135271674:
		case 1316803372:
		case 1662215698:
		case 1844142525:
		case 2058555960:
			return true;
		default:
			break;
	}
	return false;
}

void func_392(var uParam0, int iParam1)
{
	var uVar0[1];
	int iVar2;
	vector3 vVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	uVar0[0] = uParam0[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1939168->f_6)
	{
		func_43(uParam0, 0, 1);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_35, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	if (aggregate.aberdeenpigfarm.func_45() != -1 && aggregate.dynamic_craft_scenario.func_28())
	{
		if (aggregate.doc_book.func_70(uParam0[0], 0))
		{
			aggregate.interactive_campfire.func_103(uParam0);
			aggregate.binoculars.func_41(uParam0);
		}
		return;
	}
	if (uParam0->f_54)
	{
		HUD::_0xC9CAEAEEC1256E54(-469828803);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_Y"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (aggregate.camera_item.func_12(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (aggregate.binoculars.func_15(uParam0))
			{
				func_378(uParam0);
				func_379(uParam0);
				aggregate.binoculars.func_16(uParam0);
			}
			if (func_380(uParam0))
			{
				aggregate.interactive_campfire.func_44(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (aggregate.aberdeenpigfarm.func_45() == 0 && CAM::_0x251241CAEC707106())
			{
				aggregate.interactive_campfire.func_103(uParam0);
				return;
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				aggregate.binoculars.func_16(uParam0);
				if (aggregate.interactive_campfire.func_105())
				{
					func_106(0);
				}
			}
			if (((uParam0->f_30 || aggregate.binoculars.func_13(uParam0[0], 1)) || aggregate.interactive_campfire.func_54(8192)) || uParam0->f_31)
			{
				func_603(uParam0);
			}
			break;
		case 4:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_604(uParam0))
			{
				uParam0->f_58 = 1;
				aggregate.interactive_campfire.func_44(uParam0, 5);
			}
			break;
		case 5:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_605(uParam0))
			{
				aggregate.interactive_campfire.func_44(uParam0, 6);
			}
			break;
		case 6:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_606(uParam0))
			{
				aggregate.interactive_campfire.func_44(uParam0, 7);
			}
			break;
		case 7:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				func_607(uParam0);
				aggregate.binoculars.func_16(uParam0);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				return;
			}
			if (func_608(uParam0, 0))
			{
				if (func_609(uParam0, 0) || (uParam0->f_25 && UIAPPS::_IS_APP_ACTIVE(-1624772174)))
				{
					aggregate.interactive_campfire.func_44(uParam0, 8);
				}
				else if (uParam0->f_28)
				{
					aggregate.interactive_campfire.func_44(uParam0, 1);
				}
				else
				{
					aggregate.interactive_campfire.func_44(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!uParam0->f_58)
			{
				aggregate.interactive_campfire.func_44(uParam0, 4);
				return;
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				return;
			}
			if (func_610(uParam0))
			{
				func_609(uParam0, 1);
				aggregate.interactive_campfire.func_44(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::_IS_APP_ACTIVE(-1624772174))
			{
				if (UISTATEMACHINE::_0xF7C180F57F85D0B8(-1624772174))
				{
					Global_1913156->f_1580 = 0;
					aggregate.interactive_campfire.func_44(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!uParam0->f_54)
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (UIAPPS::_IS_APP_ACTIVE(29649618) || UIAPPS::_IS_APP_RUNNING(29649618))
			{
				return;
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				func_607(uParam0);
				aggregate.binoculars.func_16(uParam0);
				return;
			}
			if (func_608(uParam0, 1))
			{
				aggregate.interactive_campfire.func_44(uParam0, 10);
			}
			break;
		case 10:
			func_611(0);
			if (aggregate.binoculars.func_15(uParam0))
			{
				func_612(uParam0);
				aggregate.binoculars.func_16(uParam0);
			}
			if (func_613(uParam0))
			{
				return;
			}
			if (Global_1913156->f_1580)
			{
				Global_1913156->f_1580 = 0;
				ATTRIBUTE::_0xD962F8579D702DB5();
				func_614(uParam0);
				uParam0->f_73 = 0;
				uParam0->f_74 = 0;
				func_615(uParam0, 0, 0);
				aggregate.binoculars.func_37(uParam0[5], 0, 1, 1);
				aggregate.interactive_campfire.func_44(uParam0, 9);
			}
			else if (func_616(uParam0[2], 1) || !UIAPPS::_IS_APP_RUNNING(-1624772174))
			{
				if (uParam0->f_30)
				{
					aggregate.interactive_campfire.func_44(uParam0, 18);
				}
				else
				{
					func_104(uParam0, 0);
					aggregate.binoculars.func_22("Exit", "SSCRFT_Sounds", 1);
					if (uParam0->f_31)
					{
						uParam0->f_31 = 0;
						aggregate.interactive_campfire.func_44(uParam0, 1);
					}
					else
					{
						aggregate.interactive_campfire.func_44(uParam0, 3);
					}
				}
			}
			else if (aggregate.binoculars.func_13(uParam0[7], 1))
			{
				func_618(uParam0);
			}
			else if (aggregate.binoculars.func_13(uParam0[1], 1))
			{
				func_619(uParam0);
			}
			else if (aggregate.binoculars.func_13(uParam0[3], 1))
			{
				ATTRIBUTE::_0xD962F8579D702DB5();
				uParam0->f_53 = !uParam0->f_53;
				func_614(uParam0);
				aggregate.binoculars.func_22("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_73 = 0;
				uParam0->f_74 = 0;
				func_615(uParam0, 0, 0);
				aggregate.binoculars.func_37(uParam0[5], 0, 1, 1);
				aggregate.interactive_campfire.func_44(uParam0, 9);
			}
			else if (aggregate.camera_item.func_107(uParam0[5], 0, 1))
			{
				if (uParam0->f_75)
				{
					aggregate.binoculars.func_22("Nav_Left", "SSCRFT_Sounds", 1);
					func_621(uParam0, 0);
				}
			}
			else if (aggregate.camera_item.func_107(uParam0[5], 1, 1))
			{
				if (uParam0->f_75)
				{
					aggregate.binoculars.func_22("Nav_Right", "SSCRFT_Sounds", 1);
					func_621(uParam0, 1);
				}
			}
			else if (func_616(uParam0[6], 1))
			{
				aggregate.binoculars.func_22("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_622(uParam0, 1);
			}
			else
			{
				iVar2 = -813979060;
				while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar2))
				{
					if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar2, &vVar3))
					{
						if (vVar3.x == 703281244 || vVar3.x == -722926211)
						{
							func_623(uParam0);
						}
						else if (vVar3.x == -1740156697)
						{
							func_624(uParam0, &vVar3);
						}
						else if (vVar3.x == -1203660660)
						{
							if (vVar3.z == -2127505795)
							{
								func_619(uParam0);
							}
						}
						UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar2);
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
			break;
		case 12:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_611(0);
			iVar7 = PED::_0xC22AA08A8ADB87D4(Global_35);
			iVar8 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
			if (iVar7 == -1433449364 || iVar7 == 2058555960)
			{
				if (!PED::_0x68821369A2CEADD5(Global_35, 1335077954))
				{
					PED::_0xD65FDC686A031C83(Global_35, 1335077954, 6f);
					PED::_0x6D07B371E9439019(Global_35);
				}
				return;
			}
			if (iVar8 != -715814988)
			{
				if ((PED::_0xC488B8C0E52560D8(Global_35) || PED::_0x2DC0E8DCBD3546E9(Global_35)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1944546609))
				{
					return;
				}
				if (iVar7 == -518407211 || iVar7 == 1662215698)
				{
					if (!PED::_0x68821369A2CEADD5(Global_35, 653141085))
					{
						PED::_0xD65FDC686A031C83(Global_35, 653141085, 6f);
						PED::_0x6D07B371E9439019(Global_35);
					}
					return;
				}
				else
				{
					WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
				}
				if (((((((((iVar8 == 414472632 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_59, 1, 0)) || (iVar8 == -1136843638 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_62, 1, 0))) || (uParam0->f_85 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_85))) || (iVar8 == -732326901 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_64, 1, 0))) || (iVar8 == 786205940 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_63, 1, 0))) || (iVar8 == -1141771998 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_65, 1, 0))) || (iVar8 == 364689687 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_66, 1, 0))) || (iVar8 == -842117252 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_67, 1, 0))) || (iVar8 == -1610298873 && !ANIMSCENE::_0x477122B8D05E7968(uParam0->f_68, 1, 0)))
				{
					return;
				}
				else if (uParam0->f_60)
				{
					func_625(uParam0);
					uParam0->f_60 = 0;
				}
			}
			else
			{
				if (!ANIMSCENE::_0x477122B8D05E7968(uParam0->f_61, 1, 0) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0)))
				{
					return;
				}
				else if (uParam0->f_60)
				{
					func_625(uParam0);
					uParam0->f_60 = 0;
				}
				if (iVar7 != -518407211 && iVar7 != 1662215698)
				{
					if (uParam0->f_28)
					{
						if ((PED::_0xC488B8C0E52560D8(Global_35) || PED::_0x2DC0E8DCBD3546E9(Global_35)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1944546609))
						{
							return;
						}
						if (!PED::_0x68821369A2CEADD5(Global_35, 796456488))
						{
							PED::_0xD65FDC686A031C83(Global_35, 796456488, 2f);
							PED::_0x6D07B371E9439019(Global_35);
						}
						return;
					}
				}
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
				func_626(uParam0, 0, &uVar0);
				func_625(uParam0);
				if (aggregate.annesburg.func_217(uParam0[1]))
				{
					aggregate.annesburg.func_218((*uParam0)[1], 1, 1);
				}
				if (func_627(iVar8))
				{
					uParam0->f_49 = 250;
					(*uParam0)[1] = aggregate.binoculars.func_20("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_49, uParam0->f_49 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_615(uParam0, uParam0->f_73, uParam0->f_74);
					aggregate.camera_item.func_130(uParam0[1], -1067771379, 0, 1);
					aggregate.binoculars.func_25(uParam0[1], 10, 1, 1);
					aggregate.binoculars.func_25(uParam0[1], 11, 1, 1);
					aggregate.binoculars.func_37(uParam0[1], 0, 1, 1);
				}
				else
				{
					(*uParam0)[1] = aggregate.binoculars.func_20("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 250, 251, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					aggregate.camera_item.func_130(uParam0[1], -1067771379, 0, 1);
					aggregate.fme_animal_tagging.func_454(uParam0[1], 1, 1);
					aggregate.binoculars.func_25(uParam0[1], 10, 1, 1);
					aggregate.binoculars.func_25(uParam0[1], 11, 1, 1);
					aggregate.binoculars.func_37(uParam0[1], 0, 1, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -563455375))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_627(iVar8))
			{
				if (!uParam0->f_32)
				{
					if (aggregate.doc_book.func_70(uParam0[1], 0))
					{
						if (aggregate.camera_item.func_31(uParam0[1], 1) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT")))
						{
							uParam0->f_32 = 1;
							aggregate.binoculars.func_37(uParam0[1], 0, 1, 1);
							aggregate.binoculars.func_37(uParam0[4], 0, 1, 1);
						}
					}
				}
				if ((((((iVar8 == -1136843638 || iVar8 == -732326901) || iVar8 == 786205940) || iVar8 == -1141771998) || iVar8 == 364689687) || iVar8 == -842117252) || iVar8 == -1610298873)
				{
					if (uParam0->f_85 != 0)
					{
						if ((uParam0->f_85 == 1186037675 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1011038463)) || (uParam0->f_85 != 1186037675 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2024314131)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_81))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_81));
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_81);
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
							{
								if (aggregate.bandana.func_11(uParam0->f_73, -1588156645) && iVar8 != -842117252)
								{
									uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(aggregate.fm_mission_controller.func_6348(uParam0->f_73, 0), 1, Global_36, 1, 1065353216 /* Float: 1f */);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
									if (iVar8 == -1610298873)
									{
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_628(uParam0, iVar8), "DYNAMITE", uParam0->f_81, 0);
									}
								}
								else
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(uParam0->f_85, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
								}
								if (iVar8 == 786205940)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else if (iVar8 == -1141771998 || iVar8 == -1610298873)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else if (iVar8 == -842117252)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_35))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
								}
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_81))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_81));
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_81);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							if (iVar8 == -732326901 || iVar8 == 364689687)
							{
								uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_thrown_throwing_knives"), 1, Global_36, 1, 1065353216 /* Float: 1f */);
							}
							else if (iVar8 == -1141771998)
							{
								uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_thrown_tomahawk"), 1, Global_36, 1, 1065353216 /* Float: 1f */);
							}
							else if (iVar8 == -842117252)
							{
								if (uParam0->f_73 == 963726415)
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(400517539, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								}
								else
								{
									uParam0->f_81 = OBJECT::CREATE_OBJECT(-370340297, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								}
							}
							else if (iVar8 == -1610298873)
							{
								uParam0->f_81 = OBJECT::CREATE_OBJECT(1974613782, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, true);
								if (iVar8 == -1610298873)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_628(uParam0, iVar8), "DYNAMITE", uParam0->f_81, 0);
								}
							}
							else
							{
								uParam0->f_81 = OBJECT::CREATE_OBJECT(-655768729, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
							}
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
						if (iVar8 == 786205940)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else if ((iVar8 == -1141771998 || iVar8 == -1610298873) || iVar8 == -842117252)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else if (iVar8 == -1136843638 && !PED::IS_PED_MALE(Global_35))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_81, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1394836706))
					{
						func_98(&(uParam0->f_81), &(uParam0->f_82));
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1471149551))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_83))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_83, true);
						}
					}
				}
				else if (iVar8 == 414472632 || iVar8 == -715814988)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 966057053))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_79, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -61921192))
				{
					if (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117())
					{
						aggregate.interactive_campfire.func_382(uParam0->f_73, uParam0->f_74, 1, func_394(), 0);
						aggregate.interactive_campfire.func_80(uParam0->f_73, 1, 0, 1, 0);
					}
					if (iVar8 == -842117252)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
						{
							func_98(&(uParam0->f_81), &(uParam0->f_82));
						}
					}
					uParam0->f_21++;
					uParam0->f_34++;
					if ((!aggregate.interactive_campfire.func_629(uParam0->f_73, uParam0->f_74, 0, func_394(), 0) || aggregate.interactive_campfire.func_403(uParam0->f_73, 1, 0)) || uParam0->f_21 >= uParam0->f_33)
					{
						if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
						{
							uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
							uParam0->f_34 = 0;
						}
						func_630(uParam0, iVar8, 0);
						return;
					}
				}
				if (!uParam0->f_32)
				{
					if (!(aggregate.doc_book.func_70(uParam0[1], 0) && PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_GAME_MENU_ACCEPT"))))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 596390595))
						{
							if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
							{
								uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
								uParam0->f_34 = 0;
							}
							func_630(uParam0, iVar8, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1290366555) && uParam0->f_21 < (uParam0->f_33 - 1))
				{
					aggregate.binoculars.func_37(uParam0[1], 1, 1, 1);
					aggregate.binoculars.func_37(uParam0[4], 1, 1, 1);
					uParam0->f_32 = 0;
				}
				if (ANIMSCENE::_0xB89FCFF19DAFFF28(func_628(uParam0, iVar8), "player"))
				{
					if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
					{
						uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, uParam0->f_34);
						uParam0->f_34 = 0;
					}
					func_630(uParam0, iVar8, 0);
				}
			}
			else if (aggregate.broom_scenario.func_18(&(uParam0->f_86), (IntToFloat(uParam0->f_49) / 1000f)))
			{
				if (!aggregate.doc_book.func_93(0) || aggregate.doc_book.func_117())
				{
					if (uParam0->f_22 == -1)
					{
						uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, 1);
						if (uParam0->f_22 == -1)
						{
							func_630(uParam0, iVar8, 0);
						}
					}
					else if (aggregate.interactive_campfire.func_390(uParam0->f_22))
					{
					}
					uParam0->f_22 = -1;
				}
				else
				{
					aggregate.interactive_campfire.func_382(uParam0->f_73, uParam0->f_74, 1, func_394(), 0);
					aggregate.interactive_campfire.func_80(uParam0->f_73, 1, 1, 1, 0);
				}
				uParam0->f_33 = -1;
				uParam0->f_34 = 0;
				aggregate.interactive_campfire.func_53(131072);
				func_98(&(uParam0->f_81), &(uParam0->f_82));
				uParam0->f_51 = 0;
				bVar9 = true;
				if (!aggregate.interactive_campfire.func_629(uParam0->f_73, uParam0->f_74, 0, func_394(), 0) || aggregate.interactive_campfire.func_403(uParam0->f_73, 1, 0))
				{
					bVar9 = false;
				}
				func_630(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (aggregate.interactive_campfire.func_105())
			{
				func_106(0);
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				aggregate.binoculars.func_16(uParam0);
			}
			break;
		case 13:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_611(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					func_98(&(uParam0->f_83), &(uParam0->f_84));
				}
			}
			if (!aggregate.interactive_campfire.func_63(128))
			{
				if (!aggregate.doc_book.func_70(uParam0[2], 0))
				{
					aggregate.binoculars.func_37(uParam0[2], 1, 1, 1);
					aggregate.fme_animal_tagging.func_454(uParam0[2], 0, 1);
				}
				if (!aggregate.doc_book.func_70(uParam0[4], 0))
				{
					aggregate.binoculars.func_37(uParam0[4], 1, 1, 1);
					aggregate.fme_animal_tagging.func_454(uParam0[4], 1, 1);
				}
			}
			if (func_616(uParam0[2], 1))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				aggregate.barcustomer_interaction.func_50(&(uParam0->f_86));
				aggregate.interactive_campfire.func_44(uParam0, 14);
				return;
			}
			else if (aggregate.doc_book.func_50(uParam0[4], 1))
			{
				aggregate.interactive_campfire.func_103(uParam0);
				func_98(&(uParam0->f_81), &(uParam0->f_82));
				func_98(&(uParam0->f_79), &(uParam0->f_80));
				func_98(&(uParam0->f_83), &(uParam0->f_84));
				iVar10 = PED::_0x569F1E1237508DEB(Global_35);
				if (iVar10 != -518407211 && iVar10 != 1662215698)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				}
				iVar8 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
				iVar11 = func_628(uParam0, iVar8);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar11, "player", Global_35);
				func_104(uParam0, 0);
				aggregate.binoculars.func_22("Exit", "SSCRFT_Sounds", 1);
				if (uParam0->f_28)
				{
					aggregate.interactive_campfire.func_44(uParam0, 1);
				}
				else
				{
					aggregate.interactive_campfire.func_44(uParam0, 0);
				}
				return;
			}
			else if (aggregate.binoculars.func_13(uParam0[1], 1))
			{
				aggregate.binoculars.func_37(uParam0[4], 0, 1, 1);
				aggregate.binoculars.func_37(uParam0[2], 0, 1, 1);
				aggregate.binoculars.func_37(uParam0[1], 0, 1, 1);
				iVar8 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
				iVar12 = func_628(uParam0, iVar8);
				if (iVar12 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar12, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar12);
				}
				aggregate.barcustomer_interaction.func_50(&(uParam0->f_86));
				uParam0->f_32 = 0;
				aggregate.interactive_campfire.func_44(uParam0, 12);
				return;
			}
			if (aggregate.fm_mission_controller.func_6067(uParam0[4], 1))
			{
				if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_86)))
				{
					aggregate.barcustomer_interaction.func_43(&(uParam0->f_86));
				}
				else if (aggregate.broom_scenario.func_18(&(uParam0->f_86), 0.1f))
				{
					aggregate.fme_animal_tagging.func_318(uParam0[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_86)))
				{
					aggregate.barcustomer_interaction.func_50(&(uParam0->f_86));
				}
				aggregate.fme_animal_tagging.func_318(uParam0[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-1067771379, MISC::_CREATE_VAR_STRING(0, uParam0->f_73), 1, 0, 0, 0);
			func_611(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -2015667492))
				{
					func_98(&(uParam0->f_83), &(uParam0->f_84));
				}
			}
			iVar8 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
			iVar13 = func_628(uParam0, iVar8);
			if ((iVar13 == 0 || (!ANIMSCENE::_0x25557E324489393C(iVar13) || ANIMSCENE::_0xF94692EB9DC15D74(iVar13, 0))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
			{
				func_98(&(uParam0->f_81), &(uParam0->f_82));
				func_98(&(uParam0->f_79), &(uParam0->f_80));
				func_98(&(uParam0->f_83), &(uParam0->f_84));
				iVar14 = PED::_0x569F1E1237508DEB(Global_35);
				if (iVar14 != -518407211 && iVar14 != 1662215698)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar13, "player", Global_35);
				aggregate.interactive_campfire.func_44(uParam0, 15);
			}
			break;
		case 16:
			iVar15 = aggregate.interactive_campfire.func_631();
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				uParam0->f_22 = aggregate.interactive_campfire.func_109(uParam0->f_73, uParam0->f_74, 1);
				aggregate.interactive_campfire.func_44(uParam0, 17);
			}
			else if (NETWORK::_0x255A5EF65EDA9167(iVar15) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar15))
			{
				aggregate.interactive_campfire.func_44(uParam0, 10);
			}
			else if (aggregate.broom_scenario.func_18(&(uParam0->f_86), 5f))
			{
				aggregate.barcustomer_interaction.func_50(&(uParam0->f_86));
				aggregate.interactive_campfire.func_44(uParam0, 10);
			}
			break;
		case 17:
			if (!aggregate.interactive_campfire.func_390(uParam0->f_22))
			{
				if (aggregate.generic_document_inspection.func_454(uParam0->f_22) != 3)
				{
					aggregate.interactive_campfire.func_632(0);
				}
				else
				{
					aggregate.interactive_campfire.func_633(uParam0->f_73);
					PED::_0xD65FDC686A031C83(Global_35, -752808711, 1f);
					func_634(uParam0);
					if (aggregate.bandana.func_11(uParam0->f_73, -2011345500))
					{
						aggregate.doc_book.func_171(-1266356243, 0, 255, 0, 0);
					}
					uParam0->f_27 = uParam0->f_73;
				}
				aggregate.interactive_campfire.func_44(uParam0, 15);
			}
			else
			{
				aggregate.fm_mission_controller.func_4556(1);
				HUD::_0xF1622CE88A1946FB();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			}
			break;
		case 1:
			if (aggregate.interactive_campfire.func_105())
			{
				func_106(0);
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				if (aggregate.annesburg.func_217(uParam0[0]))
				{
					aggregate.binoculars.func_37(uParam0[0], 0, 1, 1);
				}
				aggregate.binoculars.func_16(uParam0);
			}
			break;
		case 18:
			if (aggregate.interactive_campfire.func_105())
			{
				func_106(0);
			}
			if (aggregate.binoculars.func_15(uParam0))
			{
				aggregate.binoculars.func_16(uParam0);
			}
			if (uParam0->f_25)
			{
				TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			}
			func_104(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_35);
			Global_1913156->f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

void func_393(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_49.f_74 == 278772510)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		aggregate.aberdeenpigfarm.func_108(aggregate.coffee_drinking.func_100(1281481195), 1);
	}
	STATS::_0x378D3B1B11D9385B(uParam0->f_49.f_73);
	aggregate.interactive_campfire.func_46(16384);
	aggregate.interactive_campfire.func_53(65536);
	func_48(16);
	if (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117())
	{
		aggregate.interactive_campfire.func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, func_394(), 0);
	}
	aggregate.annesburg.func_218(uParam0->f_149[3], 1, 1);
	if (bVar0)
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_149[3] = aggregate.binoculars.func_20("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 35, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		iVar1 = 7000;
		iVar2 = 10000;
		if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 16384))
		{
			iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
			iVar2 = BUILTIN::ROUND((IntToFloat(iVar2) * 0.8f));
		}
		uParam0->f_149[3] = aggregate.binoculars.func_20("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar1, iVar2, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	func_384(uParam0, 3, 0, 0);
	aggregate.binoculars.func_37(&(uParam0->f_149[3]), 0, 1, 1);
	aggregate.camera_item.func_130(&(uParam0->f_149[3]), -1067771379, 0, 1);
	uParam0->f_164 = MISC::GET_GAME_TIMER();
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_147))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_147));
	}
	uParam0->f_147 = OBJECT::CREATE_OBJECT(func_383(uParam0->f_49.f_73), Global_36, false, false, false, false, true);
	if (PED::_0x3BBDD6143FF16F98(Global_35, uParam0->f_147, "p_meatChunks01x_PH_L_HAND", 0, 0, 1))
	{
	}
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_147, false);
	OBJECT::_0x2797C633DCDBBAC5(uParam0->f_147, 0f, 1);
	uParam0->f_176 = 3;
	aggregate.interactive_campfire.func_103(&(uParam0->f_49));
	aggregate.interactive_campfire.func_44(&(uParam0->f_49), 0);
	func_395();
	AUDIO::_0xAC84686C06184B0D("cooking", "Player_Campfire_Scenes");
	aggregate.camera_item.func_77(uParam0, 9);
}

bool func_394()
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.dynamic_craft_scenario.func_85(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (aggregate.broom_scenario.func_14(Global_35, iVar0, 1) < 400f)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_395()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!aggregate.dynamic_craft_scenario.func_154())
	{
		return 0;
	}
	if (!aggregate.bandana.func_22(&bVar0))
	{
		return 0;
	}
	if (!aggregate.dynamic_craft_scenario.func_155(bVar0))
	{
		return 0;
	}
	iVar1 = func_583(bVar0);
	if (iVar1 == -358215195)
	{
		return 0;
	}
	aggregate.bandana.func_26(&iVar2, 1);
	return aggregate.interactive_campfire.func_310(bVar0, iVar2);
}

void func_397(var uParam0, int iParam1)
{
	bool bVar0;

	if (aggregate.fm_mission_controller.func_6067(&(uParam0->f_149[3]), 1))
	{
		bVar0 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1812847403))
	{
		if (PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 1f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x709BA8C08C5C008D();
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1738621174))
	{
		if (!PAD::_0x1252C029FC8EBB4D())
		{
			AUDIO::_0x9821B68CD3E05F2B("distanceToFlame", 0f, "cook_meat_sizzle_loop", "Player_Campfire_Sounds");
			PAD::_0x5F217BC1190503D8("CRFT_SEAR_MEAT", 7f);
		}
	}
	switch (iParam1)
	{
		case 1412614124:
		case 2134236454:
			if (bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(1868334347, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -341412437:
		case -283636008:
			if (!bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(-1169480623, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case 512684539:
		case 970934364:
			if (bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(-348575163, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
		case -87088667:
		case -8536912:
			if (!bVar0)
			{
				if (func_72(uParam0))
				{
					if (func_75(-266297705, 0.5f))
					{
						uParam0->f_164 = MISC::GET_GAME_TIMER();
					}
				}
			}
			break;
	}
}

void func_398(var uParam0)
{
	if (!aggregate.annesburg.func_217(&(uParam0->f_149[5])))
	{
		return;
	}
	if (!aggregate.doc_book.func_134(2))
	{
		aggregate.binoculars.func_37(&(uParam0->f_149[5]), 0, 1, 1);
		return;
	}
	if (aggregate.interactive_campfire.func_390(uParam0->f_49.f_22))
	{
		aggregate.binoculars.func_37(&(uParam0->f_149[5]), 0, 1, 1);
		return;
	}
	func_401();
	aggregate.binoculars.func_37(&(uParam0->f_149[5]), 1, 1, 1);
}

void func_399(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_149[3] = aggregate.binoculars.func_20("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 0, 7000, 10000, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_384(uParam0, 3, 0, 1);
		aggregate.binoculars.func_37(&(uParam0->f_149[3]), 0, 1, 1);
		aggregate.camera_item.func_130(&(uParam0->f_149[3]), -1067771379, 0, 1);
	}
	uParam0->f_149[7] = aggregate.binoculars.func_20("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	uParam0->f_149[1] = aggregate.binoculars.func_20("CAMP_REC_BACK", joaat("INPUT_CONTEXT_B"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
	func_258(uParam0->f_149[1], "INPUT_PCRAFT_EXIT");
	aggregate.fme_animal_tagging.func_454(&(uParam0->f_149[7]), 0, 1);
	aggregate.camera_item.func_130(&(uParam0->f_149[7]), -1067771379, 0, 1);
	aggregate.camera_item.func_130(&(uParam0->f_149[1]), -1067771379, 0, 1);
	aggregate.binoculars.func_25(&(uParam0->f_149[1]), 19, 1, 1);
	aggregate.binoculars.func_25(&(uParam0->f_149[1]), 20, 1, 1);
	aggregate.binoculars.func_25(&(uParam0->f_149[1]), 13, 1, 1);
	aggregate.binoculars.func_25(&(uParam0->f_149[7]), 13, 1, 1);
	aggregate.binoculars.func_37(&(uParam0->f_149[7]), 0, 1, 1);
	aggregate.binoculars.func_37(&(uParam0->f_149[1]), 0, 1, 1);
}

void func_401()
{
	HUD::_0xC9CAEAEEC1256E54(aggregate.interactive_campfire.func_636(2));
	HUD::_0xC9CAEAEEC1256E54(aggregate.interactive_campfire.func_636(0));
	HUD::_0xC9CAEAEEC1256E54(aggregate.interactive_campfire.func_636(1));
	HUD::_0xC9CAEAEEC1256E54(aggregate.interactive_campfire.func_637(2));
	HUD::_0xC9CAEAEEC1256E54(aggregate.interactive_campfire.func_637(0));
	HUD::_0xC9CAEAEEC1256E54(aggregate.interactive_campfire.func_637(1));
}

void func_406(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!aggregate.doc_book.func_70(&(uParam0->f_149[3]), 0))
		{
			if (((aggregate.annesburg.func_217(&(uParam0->f_149[3])) && (uParam0->f_49.f_73 == -1199896558 || !aggregate.interactive_campfire.func_403(uParam0->f_49.f_73, 1, 0))) && !aggregate.interactive_campfire.func_390(uParam0->f_49.f_22)) && aggregate.interactive_campfire.func_629(uParam0->f_49.f_73, uParam0->f_49.f_74, 0, func_394(), 0))
			{
				aggregate.binoculars.func_37(&(uParam0->f_149[3]), 1, 1, 1);
			}
		}
	}
	if (!aggregate.doc_book.func_70(&(uParam0->f_149[7]), 0))
	{
		aggregate.binoculars.func_37(&(uParam0->f_149[7]), 1, 1, 1);
		aggregate.fme_animal_tagging.func_454(&(uParam0->f_149[7]), 0, 1);
	}
	if (!aggregate.doc_book.func_70(&(uParam0->f_149[1]), 0))
	{
		aggregate.binoculars.func_37(&(uParam0->f_149[1]), 1, 1, 1);
	}
}

void func_408(var uParam0)
{
	int iVar0;
	int iVar1;

	aggregate.annesburg.func_218(uParam0->f_149[3], 1, 1);
	iVar0 = 6000;
	iVar1 = 10000;
	if (aggregate.aberdeenpigfarm.func_175(uParam0->f_139, 16384))
	{
		iVar0 = BUILTIN::ROUND((IntToFloat(iVar0) * 0.8f));
		iVar1 = BUILTIN::ROUND((IntToFloat(iVar1) * 0.8f));
	}
	uParam0->f_149[3] = aggregate.binoculars.func_20("CRAFT_FASTER", joaat("INPUT_GAME_MENU_ACCEPT"), 2, 0, 0, 6, iVar0, iVar1, 25, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	func_384(uParam0, 3, 0, 0);
	aggregate.camera_item.func_130(&(uParam0->f_149[3]), -1067771379, 0, 1);
	if (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117())
	{
		aggregate.interactive_campfire.func_382(uParam0->f_49.f_73, uParam0->f_49.f_74, 1, func_394(), 0);
	}
	aggregate.binoculars.func_37(&(uParam0->f_149[3]), 0, 1, 1);
	func_395();
	uParam0->f_164 = MISC::GET_GAME_TIMER();
	AUDIO::_0xAC84686C06184B0D("crafting", "Player_Campfire_Scenes");
	aggregate.camera_item.func_77(uParam0, 1);
}

bool func_411(bool bParam0, bool bParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (bParam0 != 0 && bParam1 != 0)
	{
		iVar1 = aggregate.bandana.func_10(bParam1);
		iVar5 = aggregate.fm_deathmatch_controller.func_3052(bParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (aggregate.bandana.func_77(bParam0, iVar1, iVar2))
				{
					*uParam4 = { aggregate.bandana.func_41(bParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { aggregate.bandana.func_59(bParam1, *uParam4, uParam4->f_4, 0) };
					*iParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -1591664384;
			Var20.f_9 = -1591664384;
			iVar34 = aggregate.bandana.func_72(0);
			Var37 = { aggregate.bandana.func_41(bParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { aggregate.bandana.func_59(bParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_0xE843D21A8E2498AA(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_0xCD9A485F2B383B44(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = aggregate.bandana.func_10(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (aggregate.bandana.func_77(bParam0, iVar1, iVar2))
							{
								if (aggregate.bandana.func_66(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*iParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_414(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;

	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return false;
	}
	if (!func_411(bParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { aggregate.fm_deathmatch_controller.func_2842() };
	Var14 = { aggregate.bandana.func_59(bParam0, Var10, iVar9, 0) };
	if (aggregate.dynamic_craft_scenario.func_292(Var14, iParam1))
	{
		if (aggregate.interactive_campfire.func_640(bParam0))
		{
			if (aggregate.fm_deathmatch_controller.func_2458(325139909, &bVar18))
			{
				if (func_414(bVar18, 0))
				{
				}
			}
		}
		else if (aggregate.interactive_campfire.func_642(bParam0))
		{
			if (aggregate.fm_deathmatch_controller.func_2458(325139909, &bVar19))
			{
				if (func_414(bVar19, 0))
				{
				}
			}
			if (aggregate.fm_deathmatch_controller.func_2458(-1189569496, &bVar20))
			{
				if (func_414(bVar20, 0))
				{
				}
			}
		}
		else if (aggregate.interactive_campfire.func_643(bParam0))
		{
			if (aggregate.fm_deathmatch_controller.func_2458(325139909, &bVar21))
			{
				if (func_414(bVar21, 0))
				{
				}
			}
			if (aggregate.fm_deathmatch_controller.func_2458(-1189569496, &bVar22))
			{
				if (func_414(bVar22, 0))
				{
				}
			}
			if (aggregate.fm_deathmatch_controller.func_2458(-997150586, &bVar23))
			{
				if (func_414(bVar23, 0))
				{
				}
			}
		}
		else if (aggregate.interactive_campfire.func_415(bParam0))
		{
			if (aggregate.fm_deathmatch_controller.func_2458(325139909, &bVar24))
			{
				if (func_414(bVar24, 0))
				{
				}
			}
			if (aggregate.fm_deathmatch_controller.func_2458(986998820, &bVar25))
			{
				if (func_414(bVar25, 0))
				{
				}
			}
			bVar26 = aggregate.interactive_campfire.func_416(bParam0);
			if (aggregate.bandana.func_30(bVar26, 0))
			{
				if (func_414(bVar26, 1))
				{
				}
			}
		}
		func_417();
		return true;
	}
	return false;
}

int func_417()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	bool bVar21;

	Var0 = { aggregate.bandana.func_41(856287005, 0, 0) };
	Var5 = { aggregate.bandana.func_59(856287005, Var0, Var0.f_4, 0) };
	iVar10 = aggregate.bandana.func_10(856287005);
	if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, false, &iVar11))
	{
		bVar14 = aggregate.bandana.func_81(Var5, -415648720, 0, -1);
	}
	if (!aggregate.bandana.func_30(bVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = aggregate.fm_deathmatch_controller.func_3052(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			bVar21 = aggregate.bandana.func_81(Var5, iVar11, 0, -1);
			if (!aggregate.bandana.func_30(bVar21, 0))
			{
				if (iVar11 == 325139909)
				{
					if (((aggregate.interactive_campfire.func_415(bVar14) || aggregate.interactive_campfire.func_640(bVar14)) || aggregate.interactive_campfire.func_642(bVar14)) || aggregate.interactive_campfire.func_643(bVar14))
					{
					}
					else
					{
						Jump @307; //curOff = 220
						if (iVar11 == -1189569496)
						{
							if (aggregate.interactive_campfire.func_642(bVar14) || aggregate.interactive_campfire.func_643(bVar14))
							{
							}
							else
							{
								Jump @307; //curOff = 257
								if (iVar11 == -997150586)
								{
									if (aggregate.interactive_campfire.func_643(bVar14))
									{
									}
									else
									{
										Jump @307; //curOff = 282
										if (iVar11 == 986998820)
										{
											if (aggregate.interactive_campfire.func_415(bVar14))
											{
											}
											else
											{
												bVar15 = true;
												Jump @347; //curOff = 310
												if (iVar11 == -1189569496)
												{
													if (!aggregate.interactive_campfire.func_415(bVar14) && aggregate.interactive_campfire.func_644(bVar21))
													{
														bVar15 = true;
													}
												}
												if (bVar15)
												{
													if (func_645(iVar11, &Var16, 1))
													{
														if (!aggregate.dynamic_craft_scenario.func_292(Var16, 1))
														{
														}
													}
												}
											}
											iVar9++;
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

bool func_429(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!aggregate.bandana.func_83(bParam0))
	{
		return false;
	}
	bVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (aggregate.binoculars.func_72(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (bVar4 == joaat("weapon_bow"))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		aggregate.doc_book.func_113(aggregate.fm_mission_controller.func_6882(bParam0), aggregate.fm_mission_controller.func_1773(bParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (aggregate.doc_book.func_93(0))
	{
		if (aggregate.doc_book.func_95(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return aggregate.fme_animal_tagging.func_375(bParam0, *iParam1, iParam2);
	}
	return false;
}

int func_481(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.fm_mission_controller.func_1632(bParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!aggregate.interactive_campfire.func_76(bParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			aggregate.interactive_campfire.func_697(bParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!aggregate.interactive_campfire.func_698(bParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			aggregate.interactive_campfire.func_697(bParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			aggregate.camera_item.func_73("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_488(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (iParam0 == 6 && iParam1 == 4)
	{
		return true;
	}
	return false;
}

bool func_550(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return 735520874;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_580(var uParam0)
{
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_59))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_59 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_59 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_59);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_61))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_61 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_61 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_61);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_62))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_62 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_62 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_62);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_63))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_63 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_63);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_64))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_64 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_64 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_64);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_65))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_65 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_65);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_66))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_66 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_66);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_67))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_67 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_67);
	}
	if (!ANIMSCENE::_0x25557E324489393C(uParam0->f_68))
	{
		if (PED::IS_PED_MALE(Global_35))
		{
			uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_68 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_68);
	}
}

bool func_582(var uParam0, var uParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(*uParam1))
	{
		if (!ANIMSCENE::_0x477122B8D05E7968(*uParam1, 1, 0))
		{
			if (ANIMSCENE::_0x59606519FF9D3EC2(*uParam1, 1))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_580(uParam0);
		return false;
	}
	return true;
}

bool func_583(bool bParam0)
{
	struct<5> Var0;

	Var0 = { aggregate.bandana.func_41(bParam0, 1, 0) };
	return aggregate.interactive_campfire.func_318(Var0.f_4);
}

void func_584(bool bParam0, int iParam1)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	bVar1 = func_583(bParam0);
	iVar2 = aggregate.bandana.func_44(bVar1, 1);
	if (iVar2 == 39)
	{
		return;
	}
	if (aggregate.interactive_campfire.func_751(bParam0) && aggregate.dynamic_craft_scenario.func_162(bParam0))
	{
		iParam1 |= 64;
	}
	if (((bVar1 == 1108822547 && aggregate.bandana.func_47(32768)) || &Global_1951131->f_1657.f_1[iVar2 /*3*/] != &Global_1951131->f_81[iVar2 /*12*/]) && bParam0 != &Global_1951131->f_1657.f_1[iVar2 /*3*/])
	{
		if (aggregate.interactive_campfire.func_751(&(Global_1951131->f_1657.f_1[iVar2 /*3*/])) && aggregate.dynamic_craft_scenario.func_162(&(Global_1951131->f_1657.f_1[iVar2 /*3*/])))
		{
			iParam1 |= 32;
		}
		if ((Global_1951131->f_81[iVar2 /*12*/])->f_1 > 1)
		{
			iParam1 |= 16;
		}
		iVar3 = 0;
		switch (aggregate.bandana.func_10(bParam0))
		{
			case 81053684:
				if (aggregate.fm_mission_controller.func_6955(-525676072, &uVar0))
				{
					iVar3 = aggregate.bandana.func_44(aggregate.interactive_campfire.func_248(-525676072), 1);
					if (iVar3 == 39)
					{
					}
					else
					{
						Global_1951131->f_2548[iVar3 /*2*/] = &Global_1951131->f_81[iVar3 /*12*/];
						Jump @465; //curOff = 294
						if (aggregate.bandana.func_47(32768))
						{
							aggregate.bandana.func_50(func_550(iVar2, 1));
						}
						if (aggregate.fm_mission_controller.func_6955(81053684, &uVar4))
						{
							iVar3 = aggregate.bandana.func_44(aggregate.interactive_campfire.func_248(81053684), 1);
							if (iVar3 == 39)
							{
							}
							else
							{
								Global_1951131->f_2548[iVar3 /*2*/] = &Global_1951131->f_81[iVar3 /*12*/];
								Jump @465; //curOff = 380
								if (!aggregate.bandana.func_11(bParam0, -1348134986))
								{
								}
								else
								{
									if (aggregate.fm_mission_controller.func_6955(-525676072, &uVar0))
									{
										iVar3 = aggregate.bandana.func_44(aggregate.interactive_campfire.func_248(-525676072), 1);
										if (iVar3 == 39)
										{
										}
										else
										{
											Global_1951131->f_2548[iVar3 /*2*/] = &Global_1951131->f_81[iVar3 /*12*/];
										}
										Global_1951131->f_2548[iVar2 /*2*/] = bParam0;
										aggregate.bandana.func_51(bVar1, iParam1, 6);
									}
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

int func_585(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	struct<2> Var0[15];
	bool bVar31;
	bool bVar33;
	int iVar34;
	var uVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	bool bVar39;

	if (!aggregate.doc_book.func_93(0))
	{
		return 0;
	}
	else if (aggregate.doc_book.func_117())
	{
		return 0;
	}
	if (iParam4 != 0)
	{
		bParam3 = false;
	}
	if (!func_753(bParam0, 1, bParam1, &bVar31, &uVar35, bParam3, iParam4))
	{
		bVar33 = bVar31;
		return 0;
	}
	if (aggregate.fme_animal_tagging.func_1529(bParam0, bParam1, &Var0, &iVar34, 1, 0))
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			bVar33 = &Var0[iVar36 /*2*/];
			if (aggregate.bandana.func_30(bVar33, 0))
			{
				if (bVar33 == 2084597891)
				{
					aggregate.interactive_campfire.func_754((Var0[iVar36 /*2*/])->f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (aggregate.fm_mission_controller.func_6324(bVar33) || aggregate.fm_mission_controller.func_6325(bVar33))
					{
						if (!aggregate.binoculars.func_32(bVar33, (Var0[iVar36 /*2*/])->f_1))
						{
							iVar37 = aggregate.interactive_campfire.func_755(7, bVar33, (Var0[iVar36 /*2*/])->f_1);
						}
						aggregate.dynamic_craft_scenario.func_59(bVar33, iVar37, 562618531, 0, 0);
						(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - iVar37);
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (!aggregate.binoculars.func_32(bVar33, (Var0[iVar36 /*2*/])->f_1))
							{
								func_756(bVar33, (Var0[iVar36 /*2*/])->f_1);
							}
							if (aggregate.binoculars.func_32(bVar33, (Var0[iVar36 /*2*/])->f_1))
							{
								aggregate.interactive_campfire.func_76(bVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, -142743235);
							}
						}
					}
					else
					{
						if (aggregate.fm_mission_controller.func_6329(bVar33) > 0)
						{
							aggregate.interactive_campfire.func_757(bVar33);
							(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - 1);
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							if (aggregate.fm_mission_controller.func_6328(7, bVar33) > 0)
							{
								aggregate.interactive_campfire.func_758(7, bVar33, (Var0[iVar36 /*2*/])->f_1);
								(Var0[iVar36 /*2*/])->f_1 = ((Var0[iVar36 /*2*/])->f_1 - aggregate.interactive_campfire.func_758(7, bVar33, (Var0[iVar36 /*2*/])->f_1));
							}
						}
						if ((Var0[iVar36 /*2*/])->f_1 > 0)
						{
							aggregate.interactive_campfire.func_76(bVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531);
						}
					}
				}
				else if (iParam4 == 0)
				{
					if (aggregate.fm_mission_controller.func_6324(bVar33) || aggregate.fm_mission_controller.func_6325(bVar33))
					{
						if (!aggregate.binoculars.func_32(bVar33, (Var0[iVar36 /*2*/])->f_1))
						{
							func_756(bVar33, (Var0[iVar36 /*2*/])->f_1);
						}
					}
					aggregate.interactive_campfire.func_76(bVar33, (Var0[iVar36 /*2*/])->f_1, bParam2, 562618531);
				}
				else
				{
					aggregate.interactive_campfire.func_759(bVar33, iParam4, (Var0[iVar36 /*2*/])->f_1, 562618531);
				}
				iVar38 = aggregate.coffee_drinking.func_52(bVar33);
				if (aggregate.dynamic_craft_scenario.func_328(iVar38))
				{
					bVar39 = aggregate.coffee_drinking.func_99(iVar38);
					aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(-333926856, bVar39), (Var0[iVar36 /*2*/])->f_1);
				}
			}
			iVar36++;
		}
		return 1;
	}
	return 0;
}

void func_603(var uParam0)
{
	func_106(1);
	aggregate.interactive_campfire.func_44(uParam0, 4);
}

bool func_604(var uParam0)
{
	int iVar0;

	if (uParam0->f_25)
	{
		Global_1913156->f_1576 = 0;
		uParam0->f_51 = 0;
		iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913156)[0 /*9*/])->f_1))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913156)[0 /*9*/])->f_1);
		}
		uParam0->f_26 = aggregate.interactive_campfire.func_779(iVar0);
		uParam0->f_27 = aggregate.gfh_campworks.func_155(iVar0);
		func_781(uParam0, uParam0->f_26, 1472825031);
		func_781(uParam0, -1171462349, 1472825031);
		func_781(uParam0, 1689071181, 1472825031);
		func_781(uParam0, -1612693182, 1472825031);
		func_781(uParam0, 1856073229, 1472825031);
		return true;
	}
	if (uParam0->f_50 == 0)
	{
		Global_1913156->f_1576 = 0;
		uParam0->f_51 = 0;
		func_782(uParam0, 600942249);
		uParam0->f_50++;
		return false;
	}
	else if (uParam0->f_50 == 1)
	{
		func_782(uParam0, -257768755);
		uParam0->f_50++;
		return false;
	}
	else
	{
		func_782(uParam0, -214678071);
		uParam0->f_50 = 0;
	}
	uParam0->f_51 = 0;
	return true;
}

bool func_605(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	if (uParam0->f_25 && DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_35))
	{
		return true;
	}
	uParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "filter", aggregate.blackwater.func_292(uParam0->f_25, -583079595, func_783(uParam0->f_48)));
	if (uParam0->f_25)
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterCount", true);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterIndex", false);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "headerText", -1710561039);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterCount", 5 + 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "filterIndex", uParam0->f_48);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_35, "tipText", "");
	uParam0->f_47 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_35, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_35, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "variantCount", false);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_35, "variantIndex", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_35, "RPGDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_35, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_785(uParam0->f_37[iVar0], &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_42[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_35, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(&(uParam0->f_42[iVar0]), &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(&(uParam0->f_42[iVar0]), &cVar1, false);
		iVar0++;
	}
	return true;
}

bool func_606(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_394();
	bVar0 = uParam0->f_51;
	while (bVar0 <= (Global_1913156->f_1576 - 1))
	{
		if (aggregate.bandana.func_30(((*Global_1913156)[bVar0 /*9*/])->f_6, 0))
		{
			func_786(uParam0, 0, bVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_51 = bVar0 + 1;
				return false;
			}
			iVar1++;
		}
		bVar0++;
	}
	uParam0->f_51 = 0;
	if (uParam0->f_56 == 0)
	{
		uParam0->f_53 = 0;
	}
	uParam0->f_52 = 0;
	return true;
}

void func_607(var uParam0)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_36))
	{
		uParam0->f_36 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_35, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_36);
	}
	uParam0->f_72 = 600942249;
	uParam0->f_71 = 0;
	uParam0->f_70 = 0;
}

bool func_608(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_394();
	bVar0 = uParam0->f_51;
	while (bVar0 <= (Global_1913156->f_1576 - 1))
	{
		if ((uParam0->f_53 && ((*Global_1913156)[bVar0 /*9*/])->f_2) || !uParam0->f_53)
		{
			if (Global_1913156->f_1585 != 0)
			{
				bVar3 = aggregate.bandana.func_11(((*Global_1913156)[bVar0 /*9*/])->f_6, Global_1913156->f_1585);
				if (uParam0->f_77 == bVar3)
				{
				}
				else
				{
					func_786(uParam0, 1, bVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_51 = bVar0 + 1;
						return false;
					}
					iVar1++;
				}
				bVar0++;
				uParam0->f_51 = 0;
				if (!uParam0->f_77 && Global_1913156->f_1585 != 0)
				{
					uParam0->f_77 = 1;
					return false;
				}
				uParam0->f_52 = 0;
				uParam0->f_77 = 0;
				return true;
			}
		}
	}
}

bool func_609(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_54 = 1;
	if (bParam1 && UIAPPS::_IS_APP_ACTIVE(-1624772174))
	{
		if (UISTATEMACHINE::_UISTATEMACHINE_REQUEST_TRANSITION(-1624772174, 1014850361))
		{
			aggregate.interactive_campfire.func_46(8);
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = UIAPPS::_LAUNCH_APP_BY_HASH(-1624772174);
		if (iVar0 == 0)
		{
			aggregate.interactive_campfire.func_46(8);
			return true;
		}
	}
	return false;
}

bool func_610(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_394();
	iVar0 = uParam0->f_51;
	while (iVar0 <= (Global_1913156->f_1576 - 1))
	{
		func_787(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_51 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	uParam0->f_57 = 0;
	uParam0->f_51 = 0;
	return true;
}

void func_611(bool bParam0)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	iVar0 = aggregate.fme_escaped_convicts.func_1485(Global_35);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_UP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_LS"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_DOWN"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_STICK_UP"), false);
	}
}

void func_612(var uParam0)
{
	int iVar0;

	aggregate.interactive_campfire.func_103(uParam0);
	func_789(uParam0, 1);
	(*uParam0)[2] = aggregate.binoculars.func_20("CAMP_REC_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (aggregate.interactive_campfire.func_63(32))
	{
		aggregate.binoculars.func_37(uParam0[2], 0, 1, 1);
	}
	else
	{
		aggregate.binoculars.func_37(uParam0[2], 1, 1, 1);
	}
	(*uParam0)[1] = aggregate.binoculars.func_20("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!uParam0->f_25)
	{
		if (aggregate.bandana.func_30(uParam0->f_71, 0))
		{
			uParam0->f_73 = uParam0->f_71;
			uParam0->f_74 = uParam0->f_72;
			func_790(uParam0, &(uParam0->f_70));
		}
		else
		{
			uParam0->f_73 = 0;
		}
		if (aggregate.bandana.func_30(uParam0->f_71, 0))
		{
			if (aggregate.interactive_campfire.func_234(uParam0->f_71))
			{
				aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_COOK", 1);
			}
			else if (aggregate.coffee_drinking.func_101(uParam0->f_71, -1636519629) == -701492487)
			{
				aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_BREW", 1);
			}
			else
			{
				aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_MAKE", 1);
			}
		}
		(*uParam0)[3] = aggregate.binoculars.func_20(func_791(uParam0), joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	else
	{
		(*uParam0)[7] = aggregate.binoculars.func_20("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	}
	(*uParam0)[5] = aggregate.camera_item.func_126("RECIPE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
	aggregate.binoculars.func_26(uParam0[5], joaat("INPUT_GAME_MENU_LEFT"));
	aggregate.binoculars.func_26(uParam0[5], joaat("INPUT_GAME_MENU_RIGHT"));
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_69))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants");
	}
	if (iVar0 > 1 && aggregate.bandana.func_30(uParam0->f_73, 0))
	{
		aggregate.binoculars.func_37(uParam0[5], 1, 1, 1);
	}
	else
	{
		aggregate.binoculars.func_37(uParam0[5], 0, 1, 1);
	}
	(*uParam0)[6] = aggregate.binoculars.func_20("INFO", joaat("INPUT_GAME_MENU_OPTION"), 1, 0, 0, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	if (!uParam0->f_78)
	{
		aggregate.fme_animal_tagging.func_318(uParam0[6], "INFO", 1);
	}
	else
	{
		aggregate.fme_animal_tagging.func_318(uParam0[6], "INGREDIENTS", 1);
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_36) == 0)
	{
		func_614(uParam0);
		aggregate.binoculars.func_37(uParam0[6], 0, 1, 1);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}
	func_615(uParam0, uParam0->f_73, uParam0->f_74);
}

bool func_613(var uParam0)
{
	int iVar0;

	if (!uParam0->f_25)
	{
		return false;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (uParam0->f_27 != aggregate.gfh_campworks.func_155(iVar0))
	{
		uParam0->f_27 = aggregate.gfh_campworks.func_155(iVar0);
		aggregate.interactive_campfire.func_44(uParam0, 15);
		return true;
	}
	if (uParam0->f_26 != aggregate.interactive_campfire.func_779(iVar0))
	{
		aggregate.interactive_campfire.func_44(uParam0, 4);
		return true;
	}
	return false;
}

void func_614(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_47);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_37[iVar0]), "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam0->f_37[iVar0]), "inUse", false);
		iVar0++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", false);
}

void func_615(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!aggregate.bandana.func_30(bParam1, 0))
	{
		if (aggregate.annesburg.func_217(uParam0[1]))
		{
			aggregate.binoculars.func_37(uParam0[1], 0, 1, 1);
		}
		return;
	}
	bVar2 = func_394();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bParam1, bParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_795(bParam1, bParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || aggregate.interactive_campfire.func_390(uParam0->f_22))
	{
		bVar3 = false;
	}
	else if (uParam0->f_25 && !func_796(bParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((bParam1 != -1199896558 && aggregate.interactive_campfire.func_403(bParam1, 1, 0)) || (!uParam0->f_28 && ((uParam0->f_76 || bParam2 == -214678071) || bParam2 == 278772510)))
		{
			bVar3 = false;
		}
		else if (!aggregate.doc_book.func_134(2) && aggregate.coffee_drinking.func_101(bParam1, -1636519629) == -701492487)
		{
			bVar3 = false;
		}
		else if (uParam0->f_33 == -1)
		{
			iVar6 = aggregate.fm_mission_controller.func_1632(bParam1, 0, 0, 0);
			iVar7 = aggregate.fishing_core.func_521(bParam1, 0);
			iVar8 = func_218(bParam1, bParam2, bVar2);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_33 = aggregate.doc_book.func_255(iVar7, iVar8);
		}
	}
	if (aggregate.annesburg.func_217(uParam0[1]))
	{
		if (uParam0->f_25)
		{
			aggregate.fme_animal_tagging.func_318(uParam0[1], "DONATE_ING", 1);
		}
		else if (aggregate.interactive_campfire.func_234(bParam1))
		{
			aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_COOK", 1);
		}
		else if (aggregate.coffee_drinking.func_101(bParam1, -1636519629) == -701492487)
		{
			aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			aggregate.fme_animal_tagging.func_318(uParam0[1], "CAMP_REC_MAKE", 1);
		}
		aggregate.binoculars.func_37(uParam0[1], bVar3, 1, 1);
	}
	func_797(bParam1, bParam2, uParam0, iVar5, bVar4);
	if (aggregate.annesburg.func_217(uParam0[6]))
	{
		aggregate.binoculars.func_37(uParam0[6], !bVar4, 1, 1);
	}
	func_798(uParam0);
}

bool func_616(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !aggregate.annesburg.func_217(iParam0))
	{
		return false;
	}
	iVar0 = aggregate.annesburg.func_253(iParam0);
	return HUD::_UIPROMPT_IS_JUST_RELEASED(((*Global_1949749)[iVar0 /*23*/])->f_3);
}

void func_618(var uParam0)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	bool bVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	struct<2> Var38;
	char* sVar41;

	if (aggregate.bandana.func_30(uParam0->f_73, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, uParam0->f_73))
		{
			return;
		}
		UILOG::_UILOG_ADD_ENTRY_HASH(8, uParam0->f_73, Global_36, uParam0->f_73, -2136842124 /* GXTEntry: "Cripps makes a special stew every 3 days. Collect the required ingredients and dr" +
    "op them off at your Camp." */, 0);
		aggregate.fme_animal_tagging.func_1529(uParam0->f_73, uParam0->f_74, &Var1, &iVar0, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, false, "CAMP_RECIPE_LOG_ALL_OBJ", false, 1, 0);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar34 = &Var1[iVar33 /*2*/];
				if (aggregate.bandana.func_30(bVar34, 0))
				{
					iVar36 = aggregate.fm_mission_controller.func_1632(bVar34, 0, 0, 0);
					sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, (Var1[iVar33 /*2*/])->f_1, MISC::_CREATE_VAR_STRING(0, bVar34));
					bVar37 = aggregate.binoculars.func_32(bVar34, (Var1[iVar33 /*2*/])->f_1);
					if (bVar37)
					{
						iVar32++;
					}
					UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, uParam0->f_73, bVar34, sVar35, bVar37, 1, 1);
				}
				iVar33++;
			}
		}
		if (aggregate.doc_book.func_130(uParam0->f_73, &Var38, joaat("inventory"), 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, uParam0->f_73, Var38, Var38.f_1);
		}
		Global_1129497->f_339.f_16 = uParam0->f_73;
		Global_1129497->f_339.f_17 = uParam0->f_74;
		sVar41 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		UILOG::_0x763637F9B838B0A7(8, uParam0->f_73, sVar41);
	}
	func_798(uParam0);
}

void func_619(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!aggregate.doc_book.func_70(uParam0[1], 0))
	{
		return;
	}
	if (uParam0->f_25)
	{
		if (aggregate.bandana.func_30(uParam0->f_73, 0))
		{
			aggregate.interactive_campfire.func_632(1);
			aggregate.barcustomer_interaction.func_43(&(uParam0->f_86));
			aggregate.interactive_campfire.func_44(uParam0, 16);
		}
		return;
	}
	func_104(uParam0, 1);
	aggregate.annesburg.func_218((*uParam0)[1], 1, 1);
	aggregate.annesburg.func_218((*uParam0)[5], 1, 1);
	aggregate.annesburg.func_218((*uParam0)[6], 1, 1);
	aggregate.annesburg.func_218((*uParam0)[3], 1, 1);
	aggregate.annesburg.func_218((*uParam0)[7], 1, 1);
	uParam0->f_32 = 1;
	if (!uParam0->f_76 && !aggregate.interactive_campfire.func_234(uParam0->f_73))
	{
		aggregate.interactive_campfire.func_46(131072);
		iVar0 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
		iVar1 = func_628(uParam0, iVar0);
		if (iVar1 != 0)
		{
			uParam0->f_32 = 0;
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_85 = 0;
			if (iVar0 != -1610298873)
			{
				if (iVar0 == -842117252)
				{
					if (uParam0->f_73 == 963726415)
					{
						uParam0->f_85 = -1906499827;
					}
					else
					{
						uParam0->f_85 = -467664954;
					}
				}
				else if (aggregate.bandana.func_11(uParam0->f_73, -1588156645))
				{
					uParam0->f_85 = aggregate.interactive_campfire.func_586(aggregate.fm_mission_controller.func_6348(uParam0->f_73, 0));
				}
				else if (aggregate.bandana.func_11(uParam0->f_73, 457423347))
				{
					uParam0->f_85 = -193645029;
				}
				else if (aggregate.bandana.func_11(uParam0->f_73, -1846429632))
				{
					uParam0->f_85 = 2132464141;
				}
				else if (aggregate.bandana.func_11(uParam0->f_73, -1067199465))
				{
					uParam0->f_85 = 1186037675;
				}
				else
				{
					uParam0->f_85 = aggregate.interactive_campfire.func_586(uParam0->f_73);
				}
			}
			if (uParam0->f_85 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_85, false);
			}
		}
		aggregate.fme_animal_tagging.func_318(uParam0[2], "CAMP_REC_BACK", 1);
		aggregate.camera_item.func_130(uParam0[2], -1067771379, 0, 1);
		aggregate.binoculars.func_37(uParam0[2], 0, 1, 1);
		aggregate.fme_animal_tagging.func_454(uParam0[2], 0, 1);
		(*uParam0)[4] = aggregate.binoculars.func_20("CAMP_REC_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 1, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("MEDIUM_TIMED_EVENT"), 0);
		func_258((*uParam0)[4], "INPUT_PCRAFT_EXIT");
		aggregate.camera_item.func_130(uParam0[4], -1067771379, 0, 1);
		aggregate.binoculars.func_37(uParam0[4], 0, 1, 1);
		aggregate.binoculars.func_25(uParam0[4], 19, 1, 1);
		aggregate.binoculars.func_25(uParam0[4], 20, 1, 1);
		aggregate.binoculars.func_25(uParam0[4], 13, 1, 1);
		aggregate.binoculars.func_25(uParam0[2], 13, 1, 1);
		if (aggregate.annesburg.func_217(uParam0[2]))
		{
			aggregate.camera_item.func_130(uParam0[2], -1067771379, 0, 1);
		}
		uParam0->f_34 = 0;
		aggregate.interactive_campfire.func_44(uParam0, 12);
	}
	else
	{
		aggregate.interactive_campfire.func_44(uParam0, 11);
	}
}

void func_621(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	struct<37> Var19;
	int iVar66;
	int iVar67;
	int iVar68;

	ATTRIBUTE::_0xD962F8579D702DB5();
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_69))
	{
		bVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_74 == -214678071 || uParam0->f_74 == 278772510)
		{
			if (bParam1)
			{
				bVar0++;
			}
			else
			{
				bVar0 = (bVar0 - 1);
			}
			if (bVar0 < 0)
			{
				bVar0 = (iVar1 - 1);
			}
			else if (bVar0 >= iVar1)
			{
				bVar0 = false;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (bVar0 == 0)
			{
				Var5 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, aggregate.coffee_drinking.func_101(uParam0->f_73, 1697966752), 0) };
				if (aggregate.fm_mission_controller.func_6850(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_74 = -214678071;
						uParam0->f_73 = aggregate.fm_mission_controller.func_6851(0, iVar3);
						bVar2 = true;
					}
					aggregate.fm_mission_controller.func_6855(iVar3);
				}
			}
			else
			{
				Var5 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, aggregate.coffee_drinking.func_101(uParam0->f_73, 1697966752), 0) };
				if (aggregate.fm_mission_controller.func_6850(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (bVar0 == 1)
						{
							iVar15 = 2127114599;
						}
						else if (bVar0 == 2)
						{
							iVar15 = -1864584831;
						}
						else if (bVar0 == 3)
						{
							iVar15 = 1967571132;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							bVar17 = aggregate.fm_mission_controller.func_6851(iVar16, iVar3);
							if (aggregate.bandana.func_11(bVar17, iVar15))
							{
								uParam0->f_74 = 278772510;
								uParam0->f_73 = bVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					aggregate.fm_mission_controller.func_6855(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_73);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != 1644203656 || Var19 == -489628648) || Var19 == -2141192156) || (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(uParam0->f_73, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					bVar0++;
				}
				else
				{
					bVar0 = (bVar0 - 1);
				}
				if (bVar0 < 0)
				{
					bVar0 = (iVar18 - 1);
				}
				else if (bVar0 >= iVar18)
				{
					bVar0 = false;
				}
				if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(uParam0->f_73, bVar0, &Var19))
				{
				}
			}
			uParam0->f_74 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "eCost", uParam0->f_74);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "eOutputItem", uParam0->f_73);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iIndex");
		if (iVar67 >= 0 && iVar67 < &Global_1913156)
		{
			iVar68 = ((*Global_1913156)[iVar67 /*9*/])->f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_69, "iCurCostVariant", bVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantIndex", (bVar0 + 1 - iVar68));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_73));
		uParam0->f_33 = -1;
		uParam0->f_21 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription"))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", func_800(uParam0->f_73));
		func_787(uParam0, -1, func_394(), uParam0->f_69, 0, bVar2, 0);
		func_615(uParam0, uParam0->f_73, uParam0->f_74);
	}
}

void func_622(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		uParam0->f_78 = !uParam0->f_78;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription", uParam0->f_78);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowIngredients", !uParam0->f_78);
	if (!uParam0->f_78)
	{
		if (aggregate.annesburg.func_217(uParam0[6]))
		{
			aggregate.fme_animal_tagging.func_318(uParam0[6], "INFO", 1);
		}
		ATTRIBUTE::_0xD962F8579D702DB5();
		func_801(uParam0);
	}
	else
	{
		if (aggregate.annesburg.func_217(uParam0[6]))
		{
			aggregate.fme_animal_tagging.func_318(uParam0[6], "INGREDIENTS", 1);
		}
		func_802(uParam0);
	}
	if (uParam0->f_74 == -214678071)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_69, "iNumCostVariants") <= 1 && uParam0->f_78)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_218(uParam0->f_73, uParam0->f_74, func_394());
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_623(var uParam0)
{
	if (uParam0->f_25)
	{
		return;
	}
	ATTRIBUTE::_0xD962F8579D702DB5();
	func_803(uParam0);
	func_614(uParam0);
	func_801(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowIngredients", false);
	uParam0->f_73 = 0;
	uParam0->f_74 = 0;
	func_615(uParam0, 0, 0);
	aggregate.interactive_campfire.func_44(uParam0, 9);
}

void func_624(var uParam0, int iParam1)
{
	func_614(uParam0);
	func_801(uParam0);
	func_790(uParam0, &(iParam1->f_3));
}

void func_625(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.coffee_drinking.func_101(uParam0->f_73, -1636519629);
	if (iVar0 == 414472632)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_79))
		{
			iVar1 = func_804(uParam0->f_73);
			if (iVar1 != 0)
			{
				uParam0->f_79 = OBJECT::CREATE_OBJECT(iVar1, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_79, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_79, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1, 0, 0);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_59, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_59);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_59, "pl_craft", true);
	}
	else if (iVar0 == -1136843638)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_62, "arrow", uParam0->f_81, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_62, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_62);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_62, "pl_craft", true);
	}
	else if (iVar0 == 786205940)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_63, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_63);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_63, "pl_craft", true);
	}
	else if (iVar0 == -715814988)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_61, "player", Global_35, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_79))
		{
			iVar2 = func_804(uParam0->f_73);
			if (iVar2 != 0)
			{
				uParam0->f_79 = OBJECT::CREATE_OBJECT(iVar2, Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_79, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_79, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_79, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 37709), func_805(uParam0->f_73), 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_61, "bullet", uParam0->f_79, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_61);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_61, "pl_craft", true);
	}
	else if (iVar0 == -732326901)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_thrown_throwing_knives"), 1, Global_36, 1, 1065353216 /* Float: 1f */);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_64, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_64);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_64, "pl_craft", true);
	}
	else if (iVar0 == -1141771998)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_thrown_tomahawk"), 1, Global_36, 1, 1065353216 /* Float: 1f */);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_65, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_65);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == 364689687)
	{
		uParam0->f_49 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_81))
		{
			uParam0->f_81 = WEAPON::_0x9888652B8BA77F73(joaat("weapon_thrown_throwing_knives"), 1, Global_36, 1, 1065353216 /* Float: 1f */);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_81, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_81, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_83))
		{
			uParam0->f_83 = OBJECT::CREATE_OBJECT(joaat("p_cs_rag01x"), Global_36, true, NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT(), false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_83, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_83, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "RAG", uParam0->f_83, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_66, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_66);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_66, "pl_craft", true);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_65, "pl_craft", true);
	}
	else if (iVar0 == -842117252)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_67, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_67);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_67, "pl_craft", true);
	}
	else if (iVar0 == -1610298873)
	{
		uParam0->f_49 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_68, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_68);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_68, "pl_craft", true);
	}
	else
	{
		uParam0->f_49 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_806(uParam0->f_73), func_807(uParam0->f_73)) * 1000f));
		aggregate.barcustomer_interaction.func_43(&(uParam0->f_86));
		TASK::TASK_PLAY_ANIM(Global_35, func_806(uParam0->f_73), func_807(uParam0->f_73), 1090519040 /* Float: 8f */, -8f, -1, 67108880, 0, 0, 4096, 0, "Satchel_Only_filter", 0);
	}
}

void func_626(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (aggregate.annesburg.func_217(uParam0[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (aggregate.annesburg.func_217(uParam2[iVar1]))
				{
					if (uParam0[iVar0] == uParam2[iVar1])
					{
					}
				}
				iVar1++;
			}
			aggregate.binoculars.func_37(uParam0[iVar0], bParam1, 1, 1);
		}
		iVar0++;
	}
}

bool func_627(int iParam0)
{
	if ((((((((iParam0 == -715814988 || iParam0 == -1136843638) || iParam0 == -732326901) || iParam0 == 786205940) || iParam0 == -1141771998) || iParam0 == 364689687) || iParam0 == 414472632) || iParam0 == -842117252) || iParam0 == -1610298873)
	{
		return true;
	}
	return false;
}

int func_628(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_61;
		case -732326901:
			return uParam0->f_64;
		case -1136843638:
			return uParam0->f_62;
		case 786205940:
			return uParam0->f_63;
		case -1141771998:
			return uParam0->f_65;
		case 364689687:
			return uParam0->f_66;
		case 414472632:
			return uParam0->f_59;
		case -842117252:
			return uParam0->f_67;
		case -1610298873:
			return uParam0->f_68;
		default:
			break;
	}
	return 0;
}

void func_630(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_51 = 0;
	aggregate.interactive_campfire.func_46(262144);
	func_98(&(uParam0->f_81), &(uParam0->f_82));
	func_98(&(uParam0->f_79), &(uParam0->f_80));
	iVar0 = func_628(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	if (!aggregate.interactive_campfire.func_63(128))
	{
		aggregate.binoculars.func_37(uParam0[2], 1, 1, 1);
		aggregate.binoculars.func_37(uParam0[4], 1, 1, 1);
	}
	aggregate.fme_animal_tagging.func_454(uParam0[2], 0, 1);
	aggregate.fme_animal_tagging.func_454(uParam0[4], 1, 1);
	aggregate.interactive_campfire.func_402(uParam0[1], 1);
	aggregate.annesburg.func_218((*uParam0)[1], 1, 1);
	(*uParam0)[1] = aggregate.binoculars.func_20("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, uParam0->f_49, uParam0->f_49 + 1, 1, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
	aggregate.binoculars.func_25(uParam0[1], 11, 1, 1);
	aggregate.binoculars.func_25(uParam0[1], 19, 1, 1);
	aggregate.camera_item.func_130(uParam0[1], -1067771379, 0, 1);
	aggregate.binoculars.func_37(uParam0[1], bParam2, 1, 1);
	aggregate.interactive_campfire.func_44(uParam0, 13);
}

void func_634(var uParam0)
{
	var uVar0;
	vector3 vVar4;

	if (TELEMETRY::_0xF184B3ECE36219CF(uParam0->f_22, &uVar0))
	{
		vVar4 = { aggregate.flow_controller.func_161(&Global_1273882) };
		TELEMETRY::_0xDF516E598D966D06(&uVar0, 0, vVar4.z, 0, 1, 1084182731, 531932013 /* GXTEntry: "Stew Pot" */, uParam0->f_73, aggregate.bandana.func_11(uParam0->f_73, -2011345500));
	}
}

bool func_645(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	struct<4> Var16;
	int iVar30;

	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { aggregate.binoculars.func_85(0, iParam0, -1591664384, -1591664384, 0, 0, 0) };
	aggregate.binoculars.func_87(&Var2, aggregate.fm_deathmatch_controller.func_2842());
	if (aggregate.binoculars.func_88(&Var2, &iVar0, &iVar1, 0))
	{
		Var16.f_9 = -1591664384;
		iVar30 = 0;
		while (iVar30 < iVar1)
		{
			if (aggregate.binoculars.func_71(&Var16, iVar30, iVar0, iVar1))
			{
				if (aggregate.bandana.func_30(Var16.f_4, 0) && !Var16.f_10)
				{
					if (bParam2 && aggregate.interactive_campfire.func_644(Var16.f_4))
					{
					}
					else
					{
						*uParam1 = { Var16 };
						aggregate.binoculars.func_73(iVar0);
						return true;
					}
				}
			}
			iVar30++;
		}
		aggregate.binoculars.func_73(iVar0);
	}
	return false;
}

int func_753(bool bParam0, int iParam1, bool bParam2, var uParam3, int iParam4, bool bParam5, int iParam6)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (aggregate.fme_animal_tagging.func_1526(bParam0))
	{
		return aggregate.fm_mission_controller.func_6320(aggregate.fme_animal_tagging.func_1527(bParam0, 1), bParam2, uParam3);
	}
	if (!aggregate.fme_animal_tagging.func_1529(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar35 = (aggregate.doc_book.func_93(0) && !aggregate.doc_book.func_117());
	if (iParam6 != 0)
	{
		if (aggregate.aberdeenpigfarm.func_45() == 0)
		{
			return 0;
		}
		bParam5 = false;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34 /*2*/] == 0 || &Var0[iVar34 /*2*/] == 1412640604)
		{
		}
		else
		{
			iVar32 = ((Var0[iVar34 /*2*/])->f_1 * iParam1);
			if (&Var0[iVar34 /*2*/] == 2084597891 && aggregate.fme_animal_tagging.func_1400(iVar32))
			{
				Jump @438; //curOff = 179
			}
			else if (&Var0[iVar34 /*2*/] == 773203532 && aggregate.fme_animal_tagging.func_1676(iVar32))
			{
			}
			else
			{
				if (iParam6 != 0)
				{
					iVar33 = aggregate.fm_mission_controller.func_6323(&(Var0[iVar34 /*2*/]), iParam6);
				}
				else
				{
					iVar33 = aggregate.fm_mission_controller.func_1632(&(Var0[iVar34 /*2*/]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (aggregate.fm_mission_controller.func_6324(&(Var0[iVar34 /*2*/])) || aggregate.fm_mission_controller.func_6325(&(Var0[iVar34 /*2*/])))
					{
						iVar36 = 0;
						if (bParam5)
						{
							iVar37 = aggregate.fm_mission_controller.func_6326(7, &(Var0[iVar34 /*2*/]), &iVar36);
						}
						iVar38 = aggregate.fm_mission_controller.func_6327(&(Var0[iVar34 /*2*/]), iParam6);
						if (((iVar33 + iVar37) + iVar38) >= iVar32)
						{
							if ((iVar33 + iVar38) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar36))
							{
								*iParam4 = iVar36;
							}
						}
						else
						{
							Jump @422; //curOff = 378
							if (bParam5 && ((iVar33 + aggregate.fm_mission_controller.func_6328(7, &(Var0[iVar34 /*2*/]))) + aggregate.fm_mission_controller.func_6329(&(Var0[iVar34 /*2*/]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *(Var0[iVar34 /*2*/]) };
								return 0;
							}
						}
						iVar34++;
						return 1;
					}
				}
			}
		}
	}
}

void func_756(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (iParam1 > 0)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = aggregate.coffee_drinking.func_101(bParam0, 1697966752);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar12, 0) };
		if (aggregate.fm_mission_controller.func_6850(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					bVar13 = aggregate.fm_mission_controller.func_6851(iVar14, iVar0);
					if (aggregate.bandana.func_30(bVar13, 0) && bParam0 != bVar13)
					{
						iVar15 = aggregate.fm_mission_controller.func_1632(bVar13, 0, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - aggregate.interactive_campfire.func_895(bVar13, bParam0, 0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			aggregate.fm_mission_controller.func_6855(iVar0);
		}
	}
}

void func_781(var uParam0, bool bParam1, int iParam2)
{
	((*Global_1913156)[uParam0->f_51 /*9*/])->f_5 = iParam2;
	((*Global_1913156)[uParam0->f_51 /*9*/])->f_6 = bParam1;
	((*Global_1913156)[uParam0->f_51 /*9*/])->f_7 = 1;
	((*Global_1913156)[uParam0->f_51 /*9*/])->f_8 = 0;
	Global_1913156->f_1576++;
	uParam0->f_51++;
	if ((iParam2 == 600942249 || iParam2 == -257768755) || iParam2 == 1472825031)
	{
		func_923(uParam0, bParam1, iParam2);
	}
	else if (iParam2 == -214678071)
	{
		func_924(uParam0, bParam1);
	}
}

int func_782(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;

	Var0 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, iParam1, 0, -1, Global_1913156->f_1584, 0) };
	if (aggregate.fm_mission_controller.func_6850(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = aggregate.fm_mission_controller.func_6851(iVar12, iVar10);
			if (aggregate.bandana.func_30(bVar13, 0))
			{
				if (uParam0->f_51 >= 175)
				{
				}
				else
				{
					if (Global_1913156->f_1584 == 0 && aggregate.bandana.func_11(bVar13, 302810039))
					{
						if (!(Global_1913156->f_1585 != 0 && aggregate.bandana.func_11(bVar13, Global_1913156->f_1585)))
						{
						}
						else if (aggregate.bandana.func_11(bVar13, 266762988))
						{
						}
						else
						{
							func_781(uParam0, bVar13, iParam1);
							func_925(uParam0, bVar13, iParam1);
						}
						iVar12++;
						func_926(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_783(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1795740370;
		case 1:
			return 461149715;
		case 2:
			return 210507310;
		case 3:
			return -1182908601;
		case 4:
			return 1647118377;
		case 5:
			return -867280435;
		default:
			break;
	}
	return 0;
}

void func_785(var uParam0, char* sParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_35, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_786(var uParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;

	bVar0 = ((*Global_1913156)[bParam2 /*9*/])->f_6;
	if ((iParam4 || uParam0->f_25) || aggregate.interactive_campfire.func_225(bVar0, uParam0->f_48))
	{
		if (bParam1)
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913156)[bParam2 /*9*/])->f_1))
			{
				if (bParam5)
				{
					func_787(uParam0, -1, bParam3, ((*Global_1913156)[bParam2 /*9*/])->f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, uParam0->f_52, -2047994727, ((*Global_1913156)[bParam2 /*9*/])->f_1);
			}
			else
			{
				func_927(uParam0, bParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913156)[bParam2 /*9*/])->f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913156)[bParam2 /*9*/])->f_1);
			}
			func_927(uParam0, bParam2, 0, bParam3);
		}
		if (uParam0->f_52 == 0)
		{
			uParam0->f_71 = ((*Global_1913156)[bParam2 /*9*/])->f_6;
			uParam0->f_72 = ((*Global_1913156)[bParam2 /*9*/])->f_5;
			uParam0->f_70 = ((*Global_1913156)[bParam2 /*9*/])->f_1;
		}
		uParam0->f_52++;
	}
}

void func_787(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	struct<2> Var15;
	struct<2> Var18;
	bool bVar40;
	int iVar41;
	struct<7> Var42;
	bool bVar49;

	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = ((*Global_1913156)[iParam1 /*9*/])->f_1;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	bVar3 = iVar1;
	bVar4 = iVar2;
	iVar5 = func_218(bVar3, bVar4, bParam2);
	iVar6 = aggregate.fm_mission_controller.func_1632(bVar3, 0, 0, 0);
	iVar7 = aggregate.fishing_core.func_521(bVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, aggregate.doc_book.func_255(iVar7, iVar5), 8);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", false);
	if (uParam0->f_25)
	{
		bVar9 = aggregate.blackwater.func_292((iVar5 > 0 && func_796(bVar3)), 1, 0);
	}
	else
	{
		bVar9 = aggregate.blackwater.func_292((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (bVar9 == 0 && func_928(bVar3))
	{
		if (func_929(bVar3, bVar4, uParam0, bParam2, &bVar11, &bVar12, &bVar13))
		{
			bVar9 = true;
			bVar10 = true;
			if (bParam6)
			{
				bVar3 = bVar11;
				bVar4 = bVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", bVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", bVar13);
				bParam5 = true;
			}
		}
	}
	if (!uParam0->f_28)
	{
		if ((bVar4 == -214678071 || bVar4 == 278772510) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			bVar9 = false;
		}
	}
	if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bVar3, bVar4, 1))
	{
		bVar9 = false;
		bVar14 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", bVar14);
	if (bVar9 == 1)
	{
		if (!aggregate.doc_book.func_134(2) && aggregate.coffee_drinking.func_101(bVar3, -1636519629) == -701492487)
		{
			((*Global_1913156)[iParam1 /*9*/])->f_2 = 0;
			bVar9 = false;
		}
		else
		{
			((*Global_1913156)[iParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		if (((uParam0->f_53 && bVar9 == 0) && ((*Global_1913156)[iParam1 /*9*/])->f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_36, iVar0);
		}
		((*Global_1913156)[iParam1 /*9*/])->f_2 = 0;
	}
	if (bParam5)
	{
		if (aggregate.doc_book.func_205(bVar3, &Var15, joaat("inventory"), 0, 0, 0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar3);
		Var18.f_1 = 20;
		bVar40 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", false);
		if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var18.f_1[iVar41]), &Var42))
				{
					bVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", bVar49);
							break;
						case 1857353317:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", bVar49);
							break;
						case -826379728:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", bVar49);
							break;
						case -416929031:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", bVar49);
							break;
						case 1869697234:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", bVar49);
							break;
						case 1681823811:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", bVar49);
							break;
						case -1191740624:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", bVar49);
							break;
						case -778289619:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", bVar49);
							break;
						case 1136630075:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", bVar49);
							break;
						case 1365603835:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", bVar40);
	}
	if (!uParam0->f_28)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			bVar9 = false;
		}
	}
	if (bVar10 && !bParam6)
	{
		bVar9 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", bVar9);
}

void func_789(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::_0x841475AC96E794D1(uParam0->f_10))
	{
		iVar0 = TASK::_0x7467165EE97D3C68(uParam0->f_10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

void func_790(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	ATTRIBUTE::_0xD962F8579D702DB5();
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	bVar2 = iVar0;
	ATTRIBUTE::_0xD962F8579D702DB5();
	if (aggregate.bandana.func_30(bVar2, 0) && (uParam0->f_25 || aggregate.interactive_campfire.func_225(bVar2, uParam0->f_48)))
	{
		uParam0->f_33 = -1;
		uParam0->f_21 = 0;
		uParam0->f_73 = bVar2;
		uParam0->f_74 = iVar1;
		aggregate.annesburg.func_218((*uParam0)[1], 1, 1);
		bVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (bVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", true);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_35, "variantText", MISC::_CREATE_VAR_STRING(0, uParam0->f_73));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantCount", bVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < &Global_1913156)
			{
				iVar6 = ((*Global_1913156)[iVar5 /*9*/])->f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_35, "variantIndex", (iVar4 + 1 - iVar6));
			uParam0->f_75 = 1;
			if (aggregate.annesburg.func_217(uParam0[5]))
			{
				aggregate.binoculars.func_37(uParam0[5], 1, 1, 1);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "variantVisible", false);
			uParam0->f_75 = 0;
			if (aggregate.annesburg.func_217(uParam0[5]))
			{
				aggregate.binoculars.func_37(uParam0[5], 0, 1, 1);
			}
		}
		uParam0->f_49 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_806(uParam0->f_73), func_807(uParam0->f_73)) * 1000f));
		uParam0->f_76 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting");
		uParam0->f_69 = *uParam1;
		(*uParam0)[1] = aggregate.binoculars.func_20("CAMP_REC_MAKE", joaat("INPUT_GAME_MENU_ACCEPT"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		func_615(uParam0, uParam0->f_73, uParam0->f_74);
		aggregate.binoculars.func_25(uParam0[1], 11, 1, 1);
		if (Global_1913156->f_1579 || !aggregate.fm_mission_controller.func_5485(uParam0->f_73, uParam0->f_74, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", func_800(bVar2));
			func_622(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "RPGDescription", false);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgDescription"))
		{
			if (Global_1913156->f_1579 || !aggregate.fm_mission_controller.func_5485(uParam0->f_73, uParam0->f_74, 1))
			{
				func_802(uParam0);
			}
		}
	}
}

char* func_791(var uParam0)
{
	if (uParam0->f_53)
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

bool func_795(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return false;
	}
	if ((!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bParam0, bParam1, 1)) && !bParam5)
	{
		return false;
	}
	if (!func_753(bParam0, 1, bParam1, &Var0, iParam4, bParam6, iParam7))
	{
		*uParam2 = Var0;
		*uParam3 = Var0.f_1;
		return false;
	}
	return true;
}

bool func_796(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_934(func_933());
	iVar1 = func_934(bParam0);
	return iVar1 > iVar0;
}

bool func_797(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	bool bVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<2> Var35;
	bool bVar38;
	bool bVar39;
	char* sVar40;
	char cVar41[16];
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	var uVar47;
	int iVar48;
	bool bVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_47);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_47, &(uParam2->f_42[iVar33]));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", false);
		iVar33++;
	}
	if (!bParam4 && aggregate.fme_animal_tagging.func_1529(bParam0, bParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar31 = &Var0[iVar33 /*2*/];
				if (aggregate.bandana.func_30(bVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "visible", true);
					if (aggregate.doc_book.func_205(bVar31, &Var35, joaat("inventory"), 0, 0, 0))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "texture", Var35);
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_37[iVar33]), "textureDictionary", Var35.f_1);
					}
					bVar38 = aggregate.fm_mission_controller.func_1632(bVar31, 0, 0, 0);
					bVar39 = bVar38 >= (Var0[iVar33 /*2*/])->f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "count", bVar38);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_37[iVar33]), "enabled", aggregate.blackwater.func_292(bVar39, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(&(uParam2->f_37[iVar33]), "inUse", true);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = MISC::_CREATE_VAR_STRING(10, "CRFT_ING_LIST", MISC::_CREATE_VAR_STRING(0, &(Var0[iVar33 /*2*/])), (Var0[iVar33 /*2*/])->f_1);
					StringCopy(&cVar41, "Text", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(&(uParam2->f_42[iVar33]), &cVar41, aggregate.blackwater.func_292(bVar39, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_47, -1, 309940639, &(uParam2->f_42[iVar33]));
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!uParam2->f_28 && ((uParam2->f_76 || uParam2->f_74 == -214678071) || uParam2->f_74 == 278772510))
		{
			bVar34 = false;
			if (aggregate.interactive_campfire.func_234(bParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			iVar43 = aggregate.fm_mission_controller.func_1632(bParam0, 0, 0, 0);
			iVar44 = aggregate.fishing_core.func_521(bParam0, 0);
			if (uParam2->f_25 && !func_796(bParam0))
			{
				bVar34 = false;
				bVar45 = func_933();
				if (bParam0 == bVar45)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = aggregate.coffee_drinking.func_101(bParam0, -1636519629);
				if (!aggregate.doc_book.func_134(2) && iVar46 == -701492487)
				{
					bVar34 = false;
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(34, "CRFT_BREAK", 1, MISC::_CREATE_VAR_STRING(0, PLAYER::_0x0139637A3BFF8B6D(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = func_218(bParam0, uParam2->f_74, func_394());
					if (uParam2->f_25)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, func_935(bParam0)));
					}
					else if (uParam2->f_74 == -214678071)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_69, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_35, "ShowRpgDescription"))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_74 == 278772510)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -701492487)
					{
						if (iVar48 == 1)
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(130, "CRFT_ING_MAX", iVar43, iVar44, MISC::_CREATE_VAR_STRING(0, bParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!uParam2->f_28 && ((uParam2->f_76 || uParam2->f_74 == -214678071) || uParam2->f_74 == 278772510))
	{
		bVar34 = false;
		if (aggregate.interactive_campfire.func_234(bParam0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (uParam2->f_25 && !func_796(bParam0))
	{
		bVar49 = func_933();
		if (bParam0 == bVar49)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam2->f_35, "tipText", MISC::_CREATE_VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_798(var uParam0)
{
	if (uParam0->f_25)
	{
		if (!aggregate.bandana.func_11(uParam0->f_73, -2011345500))
		{
			aggregate.annesburg.func_218((*uParam0)[7], 1, 1);
			return;
		}
		if (!aggregate.annesburg.func_217(uParam0[7]))
		{
			(*uParam0)[7] = aggregate.binoculars.func_20("CAMP_ADD_TASK", joaat("INPUT_GAME_MENU_RS"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((uParam0->f_33 > 0 || uParam0->f_73 == Global_1129497->f_339.f_16) || !func_796(uParam0->f_73))
		{
			aggregate.binoculars.func_37(uParam0[7], 0, 1, 1);
		}
		else
		{
			aggregate.binoculars.func_37(uParam0[7], 1, 1, 1);
		}
	}
}

int func_800(bool bParam0)
{
	struct<19> Var0;

	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_801(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", false);
}

void func_802(var uParam0)
{
	if ((aggregate.bandana.func_11(uParam0->f_73, 1147021565) || uParam0->f_25) && !aggregate.bandana.func_11(uParam0->f_73, 1919582297))
	{
		if (aggregate.interactive_campfire.func_225(uParam0->f_73, 5))
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_0x7E2C766ADB2C5F1A(uParam0->f_73, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_35, "ShowRpgPlayer", false);
	}
}

void func_803(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_35, "filterIndex");
	uParam0->f_48 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_35, "filter", func_783(uParam0->f_48));
}

int func_804(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0xDDC64F5E31EEDAB6(bVar0))
	{
		return -236347221;
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bVar0))
	{
		return 1537403900;
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bVar0))
	{
		return 809653548;
	}
	else if (WEAPON::_0xDDB2578E95EF7138(bVar0))
	{
		return 975914773;
	}
	else if (WEAPON::_0xC75386174ECE95D5(bVar0))
	{
		return -91245513;
	}
	return 0;
}

Vector3 func_805(bool bParam0)
{
	bool bVar0;

	bVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0xDDC64F5E31EEDAB6(bVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bVar0))
	{
		return -0.005f, 0f, 0f;
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bVar0))
	{
		return -0.03f, 0f, 0f;
	}
	else if (WEAPON::_0xDDB2578E95EF7138(bVar0))
	{
		return 0.005f, 0f, 0f;
	}
	else if (WEAPON::_0xC75386174ECE95D5(bVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

char* func_806(var uParam0)
{
	if (PED::IS_PED_MALE(Global_35))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_807(var uParam0)
{
	return "craft_trans_stow";
}

int func_848(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (iParam0 != PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			iVar1 = PED::_0x0CEEB6F4780B1F2F(iParam0, iVar0);
			if (iVar1 == bParam1)
			{
				PED::_0x627F7F3A0C4C51FF(iParam0, bParam1);
				iParam2 = (iParam2 - 1);
			}
		}
		else
		{
			iVar1 = &((*Global_1268274)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar0];
			if (iVar1 == bParam1)
			{
				((*Global_1268274)[PLAYER::PLAYER_ID() /*20*/])->f_16[iVar0] = 0;
				iParam2 = (iParam2 - 1);
			}
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

int func_866(bool bParam0)
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

void func_923(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<37> Var1;
	bool bVar48;

	iVar0 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	bVar48 = false;
	while (bVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam1, bVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == 1644203656 && (Var1 != -489628648 && Var1 != -2141192156)) && (Global_1913156->f_1579 || !aggregate.fm_mission_controller.func_5485(bParam1, Var1, 1)))
				{
					((*Global_1913156)[(uParam0->f_51 - 1) /*9*/])->f_7++;
				}
			}
			else
			{
				((*Global_1913156)[(uParam0->f_51 - 1) /*9*/])->f_8 = bVar48;
			}
		}
		bVar48++;
	}
}

void func_924(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;

	iVar2 = aggregate.coffee_drinking.func_101(bParam1, 1697966752);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar2, 0) };
	if (aggregate.fm_mission_controller.func_6850(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			bVar14 = aggregate.fm_mission_controller.func_6851(iVar13, iVar0);
			if (aggregate.bandana.func_30(bVar14, 0))
			{
				if (Global_1913156->f_1579 || !aggregate.fm_mission_controller.func_5485(bVar14, 278772510, 1))
				{
					((*Global_1913156)[(uParam0->f_51 - 1) /*9*/])->f_7++;
				}
			}
			iVar13++;
		}
		aggregate.fm_mission_controller.func_6855(iVar0);
	}
}

void func_925(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;

	iVar2 = aggregate.coffee_drinking.func_101(bParam1, -1859264326);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar2, 0) };
	if (aggregate.fm_mission_controller.func_6850(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_51 >= 175)
			{
			}
			else
			{
				bVar14 = aggregate.fm_mission_controller.func_6851(iVar13, iVar0);
				if (aggregate.bandana.func_30(bVar14, 0) && bVar14 != bParam1)
				{
					func_781(uParam0, bVar14, iParam2);
				}
				iVar13++;
			}
		}
		aggregate.fm_mission_controller.func_6855(iVar0);
	}
}

void func_926(int iParam0)
{
	aggregate.fm_mission_controller.func_6855(*iParam0);
	*iParam0 = -1;
}

void func_927(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	char cVar1[32];
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	char[] cVar11[8];
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	struct<2> Var17;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	bool bVar51;

	bVar0 = ((*Global_1913156)[bParam1 /*9*/])->f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, bVar0, 32);
	StringIntConCat(&cVar1, bParam1, 32);
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(((*Global_1913156)[bParam1 /*9*/])->f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(((*Global_1913156)[bParam1 /*9*/])->f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_36, &cVar1);
	((*Global_1913156)[bParam1 /*9*/])->f_1 = iVar5;
	bVar6 = ((*Global_1913156)[bParam1 /*9*/])->f_5;
	iVar7 = func_218(bVar0, bVar6, bParam3);
	iVar8 = aggregate.fm_mission_controller.func_1632(bVar0, 0, 0, 0);
	iVar9 = aggregate.fishing_core.func_521(bVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", bVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", bParam1);
	if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bVar0, bVar6, 1))
	{
		bVar10 = true;
		((*Global_1913156)[bParam1 /*9*/])->f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", ((*Global_1913156)[bParam1 /*9*/])->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", ((*Global_1913156)[bParam1 /*9*/])->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", bVar6 == -257768755);
	StringIntConCat(&cVar11, aggregate.doc_book.func_255(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar11);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar13 = false;
	if (uParam0->f_25)
	{
		bVar12 = aggregate.blackwater.func_292(((iVar7 > 0 && func_796(bVar0)) && !bVar10), 1, 0);
	}
	else
	{
		bVar12 = aggregate.blackwater.func_292(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (bVar12 == 0 && func_928(bVar0))
	{
		if (func_929(bVar0, bVar6, uParam0, bParam3, &bVar14, &bVar15, &bVar16))
		{
			bVar12 = true;
			bVar13 = true;
			bVar0 = bVar14;
			bVar6 = bVar15;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", bVar15);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", bVar16);
		}
	}
	if (aggregate.doc_book.func_205(bVar0, &Var17, joaat("inventory"), 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!uParam0->f_28)
	{
		if ((bVar6 == -214678071 || bVar6 == 278772510) || bVar6 == -257768755)
		{
			bVar12 = false;
		}
	}
	if (bVar12 == 1)
	{
		if (!aggregate.doc_book.func_134(2) && aggregate.coffee_drinking.func_101(bVar0, -1636519629) == -701492487)
		{
			((*Global_1913156)[bParam1 /*9*/])->f_2 = 0;
			bVar12 = false;
		}
		else
		{
			uParam0->f_55++;
			if (aggregate.interactive_campfire.func_225(bVar0, uParam0->f_48))
			{
				uParam0->f_56++;
			}
			((*Global_1913156)[bParam1 /*9*/])->f_2 = 1;
		}
	}
	else
	{
		((*Global_1913156)[bParam1 /*9*/])->f_2 = 0;
	}
	if (bVar13)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", bVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", false);
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var20.f_1[iVar43]), &Var44))
			{
				bVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", bVar51);
						break;
					case 1857353317:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", bVar51);
						break;
					case -826379728:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", bVar51);
						break;
					case -416929031:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", bVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", bVar51);
						break;
					case 1681823811:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", bVar51);
						break;
					case -1191740624:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", bVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", bVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", bVar51);
						break;
					case 1365603835:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_36, -1, -2047994727, iVar5);
	}
}

bool func_928(bool bParam0)
{
	if (aggregate.interactive_campfire.func_54(4096))
	{
		if (aggregate.coffee_drinking.func_101(bParam0, 1697966752) != 337650881)
		{
			return false;
		}
	}
	else if (aggregate.interactive_campfire.func_54(8192))
	{
		if (bParam0 != 1831763320)
		{
			return false;
		}
	}
	return true;
}

bool func_929(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<37> Var18;
	bool bVar65;

	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return false;
	}
	if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bParam0, bParam1, 1))
	{
		return false;
	}
	if (uParam2->f_25 && !func_796(bParam0))
	{
		return false;
	}
	if (bParam1 == -214678071 || bParam1 == 278772510)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = aggregate.coffee_drinking.func_101(bParam0, 1697966752);
		if (iVar12 == 0)
		{
			return false;
		}
		Var2 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, 278772510, 0, -1, iVar12, 0) };
		if (aggregate.fm_mission_controller.func_6850(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				bVar14 = aggregate.fm_mission_controller.func_6851(iVar13, iVar0);
				if (bParam0 == bVar14)
				{
				}
				else if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bVar14, 278772510, 1))
				{
				}
				else if (aggregate.interactive_campfire.func_629(bVar14, 278772510, 0, bParam3, 0) && !aggregate.interactive_campfire.func_403(bVar14, 1, 0))
				{
					aggregate.fm_mission_controller.func_6855(iVar0);
					*bParam4 = bVar14;
					*bParam5 = 278772510;
					*bParam6 = iVar13;
					return true;
				}
				iVar13++;
			}
			aggregate.fm_mission_controller.func_6855(iVar0);
		}
		if (bParam1 == 278772510)
		{
			Var2 = { aggregate.fm_mission_controller.func_6849(-1591664384, -1591664384, 0, 0, -214678071, 0, -1, iVar12, 0) };
			if (aggregate.fm_mission_controller.func_6850(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					bVar16 = aggregate.fm_mission_controller.func_6851(iVar15, iVar0);
					if (bParam0 == bVar16)
					{
					}
					else if (!Global_1913156->f_1579 && aggregate.fm_mission_controller.func_5485(bVar16, -214678071, 1))
					{
					}
					else if (aggregate.interactive_campfire.func_629(bVar16, -214678071, 0, bParam3, 0) && !aggregate.interactive_campfire.func_403(bVar16, 1, 0))
					{
						aggregate.fm_mission_controller.func_6855(iVar0);
						*bParam4 = bVar16;
						*bParam5 = -214678071;
						*bParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				aggregate.fm_mission_controller.func_6855(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		bVar65 = false;
		while (bVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEM_DATABASE_GET_ACQUIRE_COST(bParam0, bVar65, &Var18))
			{
				if (Var18.f_2 == 1644203656)
				{
					if ((Var18 != -489628648 && Var18 != -2141192156) && (Global_1913156->f_1579 || !aggregate.fm_mission_controller.func_5485(bParam0, Var18, 1)))
					{
						if (aggregate.interactive_campfire.func_629(bParam0, Var18, 0, bParam3, 0) && !aggregate.interactive_campfire.func_403(bParam0, 1, 0))
						{
							*bParam4 = bParam0;
							*bParam5 = Var18;
							*bParam6 = bVar65;
							return true;
						}
					}
				}
			}
			bVar65++;
		}
	}
	return false;
}

int func_933()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	return aggregate.gfh_campworks.func_155(iVar0);
}

int func_934(bool bParam0)
{
	switch (bParam0)
	{
		case -1171462349:
			return 4;
		case 1689071181:
			return 3;
		case -1612693182:
			return 2;
		case 1856073229:
			return 1;
		case 1046181202:
			return 0;
		default:
			break;
	}
	if (aggregate.bandana.func_11(bParam0, -2011345500))
	{
		return 5;
	}
	return 0;
}

char* func_935(bool bParam0)
{
	switch (func_934(bParam0))
	{
		case 5:
			return "STEW_TIP_DAILY";
		case 4:
			return "STEW_TIP_BEST";
		case 3:
			return "STEW_TIP_HIGH";
		case 2:
			return "STEW_TIP_MED";
		case 1:
			return "STEW_TIP_LOW";
		default:
			break;
	}
	return "STEW_TIP_LOW";
}

