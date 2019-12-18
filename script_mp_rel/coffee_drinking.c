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
	struct<180> Var0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (!ScriptParam_0.f_3)
		{
			aggregate_func_598(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	NETWORK::_0xE7DDA8BD3BCF751C(1);
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_1 = -1199896558; /* GXTEntry: "Coffee" */
	Var0.f_1.f_2 = 4f;
	Var0.f_179 = ScriptParam_0.f_1;
	if (!ScriptParam_0.f_3)
	{
		aggregate_func_598(1);
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			func_2(&Var0);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
		switch (Var0)
		{
			case 0:
				if (aggregate_func_2823(Var0.f_1, 0))
				{
					aggregate_func_2449(&(Var0.f_1));
				}
				aggregate_func_4252(&Var0, 1);
				break;
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && ((PED::_0x569F1E1237508DEB(Global_35) == 254049387 || PED::_0x569F1E1237508DEB(Global_35) == -1451987280) || PED::_0x569F1E1237508DEB(Global_35) == 1135271674))
				{
					PED::_0xCB9401F918CB0F75(Global_35, "BLOCK_COFFEE_DISCARD_PROMPT", true, 1);
					PED::_0xCB9401F918CB0F75(Global_35, "SHOW_COFFEE_KNEEL_DISCARD_PROMPT", true, 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_1.f_1++;
					if (aggregate_func_7073(1))
					{
						aggregate_func_7706((-0.1f / Var0.f_1.f_2), 0);
					}
					else if (aggregate_func_5077())
					{
						aggregate_func_7707(1);
					}
					else if (aggregate_func_5101())
					{
						aggregate_func_7707(0);
					}
					aggregate_func_580(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2 || ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f))
				{
					aggregate_func_4252(&Var0, 2);
				}
				break;
			case 2:
				PED::_0xCB9401F918CB0F75(Global_35, "BLOCK_COFFEE_DRINK_PROMPT", true, 1);
				PED::_0xCB9401F918CB0F75(Global_35, "BLOCK_COFFEE_DISCARD_PROMPT", true, 1);
				if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != -2123939384)
				{
				}
				else
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && ((PED::_0x569F1E1237508DEB(Global_35) == 254049387 || PED::_0x569F1E1237508DEB(Global_35) == -1451987280) || PED::_0x569F1E1237508DEB(Global_35) == 1135271674))
					{
						TASK::_0xB35370D5353995CB(Global_35, 2140481581, 1048576000 /* Float: 0.25f */);
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_35, -541529715, 1048576000 /* Float: 0.25f */);
					}
					aggregate_func_4252(&Var0, 3);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Var0.f_179));
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_179) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1859925215))
				{
					OBJECT::DELETE_OBJECT(&(Var0.f_179));
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (!ScriptParam_0.f_3)
	{
		aggregate_func_598(0);
	}
}

void func_2(var uParam0)
{
	func_12(uParam0->f_1, &(uParam0->f_179), joaat("p_mugcoffee01x_ph_r_hand"), joaat("p_mugcoffee01x"));
}

void func_12(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = TASK::_0x05A0100EA714DB68(Global_35, iParam2);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			STREAMING::REQUEST_MODEL(iParam3, false);
			if (STREAMING::HAS_MODEL_LOADED(iParam3) && NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				*uParam1 = OBJECT::CREATE_OBJECT(iParam3, Global_36, true, false, false, false, true);
				OBJECT::_0xCAAF2BCCFEF37F77(*uParam1, 80);
				TASK::_TASK_ITEM_INTERACTION_2(Global_35, uParam0, *uParam1, iParam2, TASK::_0x6AA3DCA2C6F5EB6D(Global_35), 1, 0, -1082130432 /* Float: -1f */);
			}
		}
	}
}

