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
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	struct<26> Var0;

	Var0.f_5 = 1;
	Var0.f_9 = 1;
	Var0.f_22 = 37709;
	Var0.f_1 = ScriptParam_0.f_1;
	Var0.f_2 = ScriptParam_0.f_3;
	Var0.f_3 = ScriptParam_0.f_4;
	Global_1939221->f_7 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate.item_bait_herbivore.func_1(&Var0, 5);
	}
	if (!aggregate.binoculars.func_32(Var0.f_1, 1))
	{
		func_3(&Var0);
	}
	PLAYER::_0x76F7E1BCD623A429(PLAYER::GET_PLAYER_INDEX());
	func_4(&Var0);
	while (true)
	{
		if (func_5(&Var0))
		{
			aggregate.item_bait_herbivore.func_1(&Var0, 5);
		}
		if (!Var0.f_5)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			if (PED::IS_PED_ON_MOUNT(Global_35) || PED::_0x1D46B417F926D34D(Global_35))
			{
				aggregate.item_bait_herbivore.func_1(&Var0, 5);
			}
		}
		switch (aggregate.bandana.func_20(&Var0))
		{
			case 0:
				if (aggregate.binoculars.func_15(&Var0))
				{
					aggregate.binoculars.func_16(&Var0);
				}
				Var0.f_24 = aggregate.binoculars.func_28(Global_35, 0);
				Var0.f_25 = aggregate.fm_race_controller.func_1997(Var0.f_24);
				if (Global_1939057->f_41 == Var0.f_1 || Global_1939057->f_42 == Var0.f_1)
				{
					if (!Global_1939168->f_6)
					{
						if ((Var0.f_24 != joaat("weapon_unarmed") && Var0.f_25 != joaat("group_pistol")) && Var0.f_25 != -1101297303)
						{
							WEAPON::_0xFCCC886EDE3C63EC(Global_35, 2, 0);
						}
						else
						{
							aggregate.item_bait_herbivore.func_1(&Var0, 1);
						}
					}
				}
				break;
			case 1:
				if (aggregate.binoculars.func_15(&Var0))
				{
					aggregate.binoculars.func_16(&Var0);
				}
				func_11(&Var0);
				aggregate.item_bait_herbivore.func_1(&Var0, 2);
				break;
			case 2:
				if (aggregate.binoculars.func_15(&Var0))
				{
					aggregate.binoculars.func_16(&Var0);
				}
				if (func_12(&Var0))
				{
					aggregate.fm_deathmatch_controller.func_240(0);
					aggregate.item_bait_herbivore.func_1(&Var0, 3);
				}
				break;
			case 3:
				if (aggregate.binoculars.func_15(&Var0))
				{
					if (!Var0.f_3)
					{
						func_14(&Var0);
						func_15(&Var0);
						aggregate.binoculars.func_16(&Var0);
					}
					else
					{
						aggregate.binoculars.func_16(&Var0);
						aggregate.item_bait_herbivore.func_1(&Var0, 4);
					}
				}
				if ((Var0.f_13 && TASK::PED_HAS_USE_SCENARIO_TASK(Global_35)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Var0.f_16, Var0.f_18, 1))
				{
					aggregate.fm_mission_controller.func_736(Var0.f_1, 1, 0, 562618531);
					func_17(&Var0);
					aggregate.item_bait_herbivore.func_1(&Var0, 4);
				}
				break;
			case 4:
				if (aggregate.binoculars.func_15(&Var0))
				{
					aggregate.binoculars.func_16(&Var0);
				}
				if (!func_18(&Var0))
				{
					aggregate.item_bait_herbivore.func_1(&Var0, 5);
					HUD::_0xBFFF81E12A745A5F();
				}
				break;
			case 5:
				if (aggregate.binoculars.func_15(&Var0))
				{
					aggregate.binoculars.func_16(&Var0);
				}
				func_3(&Var0);
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_3(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (uParam0->f_9)
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_4));
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		}
	}
	aggregate.fm_deathmatch_controller.func_240(1);
	if (uParam0->f_13)
	{
		TASK::CLEAR_PED_TASKS(Global_35, 0, 0);
	}
	Global_1939057->f_41 = 0;
	Global_1939057->f_42 = 0;
	Global_1939221->f_7 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(var uParam0)
{
	uParam0->f_12 = 1;
	uParam0->f_13 = 1;
	if (uParam0->f_1 == -1635450397)
	{
		uParam0->f_14 = 1242478275;
	}
	else
	{
		uParam0->f_14 = -744863883;
	}
	uParam0->f_5 = 0;
}

bool func_5(var uParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return true;
	}
	if (Global_1939168->f_6)
	{
		return true;
	}
	bVar0 = false;
	if (aggregate.bandana.func_58(uParam0->f_1) == 2085633299)
	{
		if ((Global_1939057->f_40 != uParam0->f_1 && Global_1939057->f_41 != uParam0->f_1) && Global_1939057->f_42 != uParam0->f_1)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (uParam0->f_23 == 0)
		{
			uParam0->f_23 = MISC::GET_GAME_TIMER();
		}
		if (uParam0->f_23 + 150 < MISC::GET_GAME_TIMER())
		{
			return true;
		}
	}
	else
	{
		uParam0->f_23 = 0;
	}
	return false;
}

void func_11(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_165(uParam0->f_15))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_15, false);
	}
	if (aggregate.interactive_campfire.func_581(uParam0->f_16))
	{
		STREAMING::REQUEST_ANIM_DICT(uParam0->f_16);
	}
}

bool func_12(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_165(uParam0->f_15))
	{
		if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_15))
		{
			return false;
		}
	}
	if (aggregate.interactive_campfire.func_581(uParam0->f_16))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam0->f_16))
		{
			return false;
		}
	}
	if (Global_1939057->f_41 != uParam0->f_1 && aggregate.bandana.func_58(uParam0->f_1) == 2085633299)
	{
		return false;
	}
	return true;
}

void func_14(var uParam0)
{
	vector3 vVar0;

	if (!Global_1939168->f_6 && aggregate.aberdeenpigfarm.func_165(uParam0->f_15))
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 0f, -10f) };
		uParam0->f_4 = OBJECT::CREATE_OBJECT(uParam0->f_15, vVar0, false, true, false, false, true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, false);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_4, Global_35, PED::GET_PED_BONE_INDEX(Global_35, uParam0->f_22), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
	}
}

void func_15(var uParam0)
{
	if (uParam0->f_13)
	{
		if (uParam0->f_14 != 0)
		{
			TASK::_TASK_START_SCENARIO_IN_PLACE(Global_35, uParam0->f_14, 0, 1, 0, -1082130432 /* Float: -1f */, 0);
		}
		return;
	}
	if (!aggregate.interactive_campfire.func_581(uParam0->f_16))
	{
		return;
	}
	if (!Global_1939168->f_6 && (uParam0->f_12 || ENTITY::DOES_ENTITY_EXIST(uParam0->f_4)))
	{
		if (!uParam0->f_12 && aggregate.interactive_campfire.func_581(uParam0->f_17))
		{
			ENTITY::PLAY_ENTITY_ANIM(uParam0->f_4, uParam0->f_17, uParam0->f_16, 16f, false, true, false, 0f, 0);
		}
		if (aggregate.interactive_campfire.func_581(uParam0->f_18))
		{
			TASK::TASK_PLAY_ANIM(Global_35, uParam0->f_16, uParam0->f_18, 16f, -4f, -1, 67108880, 0f, 0, 4096, 0, uParam0->f_20, 0);
		}
	}
}

void func_17(var uParam0)
{
	if (!aggregate.interactive_campfire.func_581(uParam0->f_16))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_21) && ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_4, uParam0->f_16, uParam0->f_17, 1))
		{
			TASK::_0x87B66D77D545DB66(uParam0->f_4, uParam0->f_21, 0, 1);
		}
	}
}

bool func_18(var uParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1939168->f_6)
	{
		return false;
	}
	iVar0 = 1;
	if (uParam0->f_3)
	{
		iVar0 = 2;
	}
	if ((!uParam0->f_13 && func_38(Global_35, uParam0->f_16, uParam0->f_18, 0, iVar0)) || (uParam0->f_13 && !TASK::PED_HAS_USE_SCENARIO_TASK(Global_35)))
	{
		if (!uParam0->f_10)
		{
			if (aggregate.interactive_campfire.func_581(uParam0->f_19))
			{
				TASK::TASK_PLAY_ANIM(Global_35, uParam0->f_16, uParam0->f_19, 1000f, -4f, -1, 67108880, 0f, 0, 4096, 0, uParam0->f_20, 0);
				uParam0->f_10 = 1;
			}
			else
			{
				return false;
			}
		}
		else if (func_38(Global_35, uParam0->f_16, uParam0->f_19, 0, iVar0))
		{
			return false;
		}
	}
	func_39(uParam0);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1898385492) && !uParam0->f_6)
	{
		uParam0->f_6 = 1;
		aggregate.dynamic_craft_scenario.func_255(uParam0->f_1);
		func_41(uParam0);
		aggregate.coffee_drinking.func_56(uParam0->f_1, 562618531);
		HUD::_0x2F7BB105144ACF30();
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("attach")) && !uParam0->f_7)
	{
		uParam0->f_7 = 1;
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_4, true);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("detach")) && uParam0->f_7)
	{
		uParam0->f_7 = 0;
		ENTITY::DETACH_ENTITY(uParam0->f_4, true, true);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 303244851))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife"), true, 0, false, false);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1971578095))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_unarmed"), true, 0, false, false);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2007785590))
	{
		ENTITY::DETACH_ENTITY(uParam0->f_4, true, true);
		if (uParam0->f_22 == 37709)
		{
			iVar1 = 7966;
		}
		else
		{
			iVar1 = 37709;
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_4, Global_35, PED::GET_PED_BONE_INDEX(Global_35, iVar1), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1, 0, 0);
	}
	return true;
}

bool func_38(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4)
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, iParam4))
	{
		return true;
	}
	if (iParam4 == 2)
	{
		fVar0 = ENTITY::_0x8E46E18AA828334F(iParam0, sParam1, sParam2);
	}
	else
	{
		fVar0 = ENTITY::_0x627520389E288A73(iParam0, sParam1, sParam2);
	}
	return MISC::ABSF(((1f - fVar0) - fParam3)) < 0.01f;
}

void func_39(var uParam0)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	if (!uParam0->f_13)
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 513836296))
	{
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")))
		{
			bVar0 = true;
		}
		else
		{
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR"));
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UD"));
			fVar3 = ((fVar1 * fVar1) + (fVar2 * fVar2));
			if (fVar3 >= (0.1f * 0.1f))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		TASK::_0x2D657B10F211C572(Global_35, 0.5f);
		TASK::CLEAR_PED_TASKS(Global_35, 0, 0);
	}
}

void func_41(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_0x4D0D2E3D8BC000EB(Global_35, "bait01", 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (uParam0->f_1 == -1635450397)
		{
			if (Global_1956162->f_10)
			{
				iVar1 = 5;
			}
			else
			{
				iVar1 = 2;
			}
		}
		else if (Global_1956162->f_10)
		{
			iVar1 = 6;
		}
		else
		{
			iVar1 = 3;
		}
		EVENT::_0x36D0F2BA2C0D9BDE(iVar0, iVar1);
		OBJECT::_0xCAAF2BCCFEF37F77(iVar0, 4);
	}
	aggregate.binoculars.func_18(366, 0);
}

