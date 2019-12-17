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
	var uLocal_17 = 0;
	struct<34> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	struct<8> Local_52 = { 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_60 = 2;
	var uLocal_61 = 1;
	var uLocal_62 = 1;
	var uLocal_63 = 1;
	var uLocal_64 = 0;
	var uLocal_65 = 1;
	var uLocal_66 = 2;
	var uLocal_67 = 2;
	var uLocal_68 = 3;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 3;
	var uLocal_72 = 1;
	var uLocal_73 = 3;
	var uLocal_74 = 3;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == ambient_fishing_scenario.__EntryFunction__

void func_6()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_18))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Local_18))
	{
		iLocal_13 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_18.f_25)) && !SCRIPTS::HAS_SCRIPT_LOADED(&(Local_18.f_25)))
		{
			if (aggregate.mp_intro.func_430())
			{
				aggregate.dynamic_craft_scenario.func_257(0);
			}
		}
		return;
	}
	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			if (func_15())
			{
				Local_18.f_30 = TASK::_0x2D0571BB55879DA2(Local_18);
				StringCopy(&(Local_18.f_25), "doc_treasure_map", 32);
				StringCopy(&(Local_18.f_1), "MAP", 32);
				Local_18.f_6 = TASK::_0xDF7993356F52359A(Local_18, 0);
				Local_18.f_5 = TASK::_0x295514F198EFD0CA(Local_18.f_6, &(Local_18.f_1));
				if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_5))
				{
				}
				iVar0 = ENTITY::GET_ENTITY_MODEL(Local_18.f_5);
				switch (iVar0)
				{
					case -764811328:
						break;
					case -1177733273:
						break;
					case 17186352:
						break;
					default:
						break;
				}
				Local_18.f_15.f_1 = Local_18.f_6;
				Local_18.f_15 = Local_18.f_5;
				Local_18.f_15.f_3 = 1;
				Local_18.f_29 = 1024;
				aggregate.fme_golden_hat.func_194();
			}
			func_17(1);
			break;
		case 1:
			if (func_15())
			{
				SCRIPTS::REQUEST_SCRIPT(&(Local_18.f_25));
				func_18();
				aggregate.dynamic_craft_scenario.func_257(1);
				aggregate.fme_golden_hat.func_194();
			}
			func_17(2);
			break;
		case 2:
			if (func_15())
			{
				aggregate.fme_golden_hat.func_194();
			}
			if ((SCRIPTS::HAS_SCRIPT_LOADED(&(Local_18.f_25)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_18, 0)) && func_19())
			{
				Local_18.f_31 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Local_18.f_25), &(Local_18.f_15), 10, Local_18.f_29);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Local_18.f_25));
				func_17(3);
				fVar1 = 0f;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_18, "script_re@murder_campfire@knife_note", "enter", 1))
				{
					fVar1 = ENTITY::_0x627520389E288A73(Local_18, "script_re@murder_campfire@knife_note", "enter");
				}
				iLocal_77 = TASK::_0x295514F198EFD0CA(Local_18.f_6, "Knife");
				iLocal_78 = TASK::_0x295514F198EFD0CA(Local_18.f_6, "Head");
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_77))
				{
					if (TASK::_0x6EF4E31B4D5D2DA0(Local_18.f_6, "Knife"))
					{
						if (ENTITY::PLAY_ENTITY_ANIM(iLocal_77, "enter_knife", "script_re@murder_campfire@knife_note", 1000f, false, false, false, fVar1, 32768))
						{
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
					{
						if (TASK::_0x6EF4E31B4D5D2DA0(Local_18.f_6, "Head"))
						{
							if (ENTITY::PLAY_ENTITY_ANIM(iLocal_78, "enter_head", "script_re@murder_campfire@knife_note", 1000f, false, false, false, fVar1, 32768))
							{
							}
						}
					}
				}
				else if (aggregate.aberdeenpigfarm.func_66() == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
					{
						if (TASK::_0x6EF4E31B4D5D2DA0(Local_18.f_6, "Head"))
						{
							if (ENTITY::PLAY_ENTITY_ANIM(iLocal_78, "enter_head", "script_re@murder_campfire@head_note", 1000f, false, false, false, fVar1, 32768))
							{
							}
						}
					}
				}
			}
			break;
		case 3:
			if (!PED::_0x4912DFE492DB98CD(Global_35, "inInspectionMode"))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UP_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_DOWN_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LEFT_ONLY"), true);
				PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_RIGHT_ONLY"), true);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
				{
					vVar2 = { ENTITY::GET_ENTITY_COORDS(iLocal_78, true, false) };
					Local_52 = { vVar2 };
					Local_52.f_7 = 0;
					_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Local_52);
				}
			}
			if (func_15())
			{
				aggregate.fme_golden_hat.func_194();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
			{
				if (aggregate.aberdeenpigfarm.func_66() == 1 || aggregate.aberdeenpigfarm.func_66() == 9)
				{
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, "script_re@murder_campfire@head_note", "enter_head", 1) && ENTITY::_0x627520389E288A73(iLocal_78, "script_re@murder_campfire@head_note", "enter_head") > 0.49f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, "script_re@murder_campfire@knife_note", "enter_head", 1) && ENTITY::_0x627520389E288A73(iLocal_78, "script_re@murder_campfire@head_note", "enter_head") > 0.9f))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, "script_re@murder_campfire@head_note", "enter_head", 1))
						{
							ENTITY::STOP_ENTITY_ANIM(iLocal_78, "enter_head", "script_re@murder_campfire@head_note", -1000f);
						}
						else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_78, "script_re@murder_campfire@knife_note", "enter_head", 1))
						{
							ENTITY::STOP_ENTITY_ANIM(iLocal_78, "enter_head", "script_re@murder_campfire@knife_note", -1000f);
						}
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_78, false);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_78);
						ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_78);
					}
				}
			}
			if (!PED::IS_PED_USING_ANY_SCENARIO(Local_18) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1826025856) == 0)
			{
				iLocal_13 = 0;
			}
			break;
	}
}

bool func_15()
{
	return Local_18.f_32;
}

void func_17(int iParam0)
{
	Local_18.f_33 = iParam0;
	func_24();
}

void func_18()
{
	if (Local_18.f_30 == 1220378078)
	{
		StringCopy(&(Local_18.f_7), "script_re@murder_campfire@knife_note", 64);
	}
	else if (Local_18.f_30 == 579020276)
	{
		StringCopy(&(Local_18.f_7), "script_re@murder_campfire@head_note", 64);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_18.f_7)))
	{
		STREAMING::REQUEST_ANIM_DICT(&(Local_18.f_7));
	}
}

bool func_19()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_18.f_7)))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(&(Local_18.f_7)))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_21(int iParam0)
{
	Local_18 = iParam0->f_1;
}

void func_22(int iParam0)
{
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1826025856) == 0)
	{
		iLocal_13 = 0;
	}
}

void func_24()
{
	Local_18.f_32 = 1;
}

