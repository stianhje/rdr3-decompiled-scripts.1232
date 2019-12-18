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
	var uLocal_15 = 0;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<183> Var0;
	bool bVar183;
	int iVar184;
	int iVar185;
	int iVar186;

	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_182 = joaat("p_bowl04x_stew");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Var0.f_179))
		{
			OBJECT::DELETE_OBJECT(&(Var0.f_179));
		}
		if (!ScriptParam_0.f_3)
		{
			aggregate_func_598(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar183 = ScriptParam_0.f_2;
	if (!aggregate_func_2823(bVar183, 0))
	{
		bVar183 = 599184882; /* GXTEntry: "Beef Stew" */
	}
	STREAMING::_0xAC37644A538F7524(-703333072);
	STREAMING::REQUEST_MODEL(-1737141731, false);
	NETWORK::_0xE7DDA8BD3BCF751C(2);
	Var0.f_1 = bVar183;
	if (!ScriptParam_0.f_3)
	{
		aggregate_func_598(1);
	}
	iVar184 = aggregate_func_3032(Var0.f_1);
	if (iVar184 != 0)
	{
		Var0.f_182 = iVar184;
	}
	Var0.f_1.f_2 = 5f;
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (!ScriptParam_0.f_3)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
			func_4(&Var0);
			if (aggregate_func_4260(&uLocal_13) && aggregate_func_7251(&uLocal_13, 0.25f))
			{
				func_7(Var0.f_182);
			}
		}
		if (IntToFloat(Var0.f_1.f_1) < Var0.f_1.f_2)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
			{
				Var0.f_1.f_1++;
				aggregate_func_580(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
			}
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
				iVar185 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
				if (iVar185 != -583731576)
				{
					if (iVar185 == 171451159 || iVar185 == 1881103362)
					{
						if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1) || TASK::_0x0C3CB2E600C8977D(Global_35, 0))
						{
							TASK::_0xB35370D5353995CB(Global_35, -583731576, 1f);
						}
					}
				}
				else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
				{
					iVar186 = TASK::_0x2D0571BB55879DA2(Global_35);
					if (iVar186 != -1177373461)
					{
						if (iVar186 != -447259824)
						{
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_35, 1881103362, 1f);
						}
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_35, 171451159, 1f);
					}
				}
				if (IntToFloat(Var0.f_1.f_1) >= (Var0.f_1.f_2 - 1f) || ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f))
				{
					aggregate_func_4252(&Var0, 2);
				}
				break;
			case 2:
				iVar185 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
				PED::_0xCB9401F918CB0F75(Global_35, "HIDE_STEW_DROP_PROMPT", true, 1);
				if (iVar185 == -583731576 || iVar185 == 1881103362)
				{
					PED::_0xCB9401F918CB0F75(Global_35, "HIDE_STEW_EAT_PROMPT", true, 1);
					if (iVar185 != 1881103362)
					{
						TASK::_0xB35370D5353995CB(Global_35, -616782017, 1048576000 /* Float: 0.25f */);
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_35, -805756414, 1048576000 /* Float: 0.25f */);
					}
					aggregate_func_4252(&Var0, 3);
				}
				else if (iVar185 == 171451159 || (iVar185 == 1372498217 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1160706425)))
				{
					PED::_0xCB9401F918CB0F75(Global_35, "HIDE_STEW_EAT_PROMPT", true, 1);
					PED::_0x6D07B371E9439019(Global_35);
					PED::_0xD65FDC686A031C83(Global_35, -1134349867, 1.5f);
				}
				break;
			case 3:
				PED::_0xCB9401F918CB0F75(Global_35, "HIDE_STEW_EAT_PROMPT", true, 1);
				PED::_0xCB9401F918CB0F75(Global_35, "HIDE_STEW_DROP_PROMPT", true, 1);
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Var0.f_179))
	{
		OBJECT::DELETE_OBJECT(&(Var0.f_179));
	}
	if (!ScriptParam_0.f_3)
	{
		aggregate_func_598(0);
	}
}

void func_4(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_179))
	{
		if (STREAMING::HAS_MODEL_LOADED(-1737141731))
		{
			uParam0->f_179 = OBJECT::CREATE_OBJECT(-1737141731, Global_36, false, true, false, false, true);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_179, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_179, false);
		}
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -701457528))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_179, true);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1402617856))
	{
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_179, false);
	}
	func_11(uParam0->f_1, &(uParam0->f_180), joaat("p_bowl04x_stew_ph_l_hand"), uParam0->f_182, 1);
	func_11(uParam0->f_1, &(uParam0->f_181), joaat("p_spoon01x_ph_r_hand"), joaat("p_spoon01x"), 0);
}

void func_7(var uParam0)
{
	struct<14> Var0;
	int iVar14;

	iVar14 = 19;
	Var0.f_12 = uParam0;
	aggregate_func_1437(iVar14, Var0, aggregate_func_4507(0, 8));
}

void func_11(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
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
				if (bParam4)
				{
					ENTITY::_0x669655FFB29EF1A9(*uParam1, 0, "Stew_Fill", 1f);
					aggregate_func_4283(&uLocal_13);
					OBJECT::_0xCAAF2BCCFEF37F77(*uParam1, 20);
				}
				else
				{
					OBJECT::_0xCAAF2BCCFEF37F77(*uParam1, 82);
				}
				TASK::_TASK_ITEM_INTERACTION_2(Global_35, iParam0, *uParam1, iParam2, TASK::_0x6AA3DCA2C6F5EB6D(Global_35), 1, 0, -1082130432 /* Float: -1f */);
			}
		}
	}
}

