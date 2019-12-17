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
	struct<185> Var0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (!ScriptParam_0.f_3)
		{
			aggregate.coffee_drinking.func_1(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	NETWORK::_0xE7DDA8BD3BCF751C(1);
	Var0.f_1.f_2 = 1086324736;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_180 = 2;
	Var0.f_1 = -1199896558; /* GXTEntry: "Coffee" */
	Var0.f_1.f_2 = 4f;
	Var0.f_179 = ScriptParam_0.f_1;
	if (!ScriptParam_0.f_3)
	{
		aggregate.coffee_drinking.func_1(1);
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
			if (Var0 < 2)
			{
				aggregate.aberdeenpigfarm.func_154(&Var0);
			}
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		}
		func_3();
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 2, 1, 0, "COFFEE", 0);
		PLAYER::_0xCD7CA3013FD12749(PLAYER::GET_PLAYER_INDEX(), HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Global_35));
		switch (Var0)
		{
			case 0:
				func_4(&Var0);
				if (aggregate.bandana.func_30(Var0.f_1, 0))
				{
					aggregate.coffee_drinking.func_4(&(Var0.f_1));
				}
				aggregate.coffee_drinking.func_5(&Var0, 1);
				break;
			case 1:
				func_8(&Var0);
				if (!aggregate.aberdeenpigfarm.func_175(Var0.f_184, 4) && TASK::_0x6AA3DCA2C6F5EB6D(Global_35) != -1200848232)
				{
					aggregate.bandana.func_26(&(Var0.f_184), 4);
					func_11(&Var0, 0);
				}
				else if (aggregate.aberdeenpigfarm.func_175(Var0.f_184, 4) && TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == -1200848232)
				{
					aggregate.bandana.func_26(&(Var0.f_184), 4);
					func_11(&Var0, 1);
				}
				if (aggregate.camera_item.func_31(&(Var0.f_180[0]), 1))
				{
					if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == -1445974093)
					{
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_35, -1445974093, 1048576000 /* Float: 0.25f */);
					}
				}
				if (aggregate.camera_item.func_31(&(Var0.f_180[1]), 1))
				{
					aggregate.moonshine_coffee_drinking.func_14(&Var0);
					aggregate.coffee_drinking.func_5(&Var0, 2);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
					if (aggregate.coffee_drinking.func_6(1))
					{
						aggregate.coffee_drinking.func_7((-0.1f / Var0.f_1.f_2), 1);
					}
					else if (aggregate.coffee_drinking.func_8())
					{
						aggregate.coffee_drinking.func_9(1);
					}
					else if (aggregate.coffee_drinking.func_10())
					{
						aggregate.coffee_drinking.func_9(0);
					}
					aggregate.coffee_drinking.func_11(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2 || ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f))
				{
					aggregate.moonshine_coffee_drinking.func_14(&Var0);
					aggregate.coffee_drinking.func_5(&Var0, 2);
				}
				break;
			case 2:
				if (TASK::_0x6AA3DCA2C6F5EB6D(Global_35) == -1200848232)
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && ((PED::_0x569F1E1237508DEB(Global_35) == 254049387 || PED::_0x569F1E1237508DEB(Global_35) == -1451987280) || PED::_0x569F1E1237508DEB(Global_35) == 1135271674))
					{
						TASK::_0xB35370D5353995CB(Global_35, -314440731, 1048576000 /* Float: 0.25f */);
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_35, -993390176, 1048576000 /* Float: 0.25f */);
					}
					aggregate.coffee_drinking.func_5(&Var0, 3);
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_179) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1859925215))
				{
					OBJECT::DELETE_OBJECT(&(Var0.f_179));
				}
				aggregate.moonshine_coffee_drinking.func_14(&Var0);
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (!ScriptParam_0.f_3)
	{
		aggregate.coffee_drinking.func_1(0);
	}
}

void func_3()
{
	aggregate.aberdeenpigfarm.func_106(&(Global_1070355->f_26843.f_1), 1073741824 /* Float: 2f */);
}

int func_4(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (aggregate.annesburg.func_217(&(iParam0->f_180[iVar0])))
		{
			aggregate.fme_animal_tagging.func_318(&(iParam0->f_180[iVar0]), func_23(iVar1), 0);
		}
		else
		{
			iParam0->f_180[iVar0] = aggregate.binoculars.func_20(func_23(iVar1), func_25(iVar1), 2, 0, 0, func_26(iVar1), 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate.camera_item.func_130(&(iParam0->f_180[iVar0]), HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Global_35), 0, 1);
		}
		iVar0++;
	}
	return 1;
}

void func_8(int iParam0)
{
	if (!aggregate.fm_mission_controller.func_2361() && iParam0->f_183 != 0)
	{
		iParam0->f_183 = 0;
		aggregate.bandana.func_26(&(iParam0->f_184), 1);
	}
	if (aggregate.coffee_drinking.func_10() && iParam0->f_183 != 1)
	{
		iParam0->f_183 = 1;
		aggregate.bandana.func_26(&(iParam0->f_184), 1);
	}
	if (aggregate.coffee_drinking.func_8() && iParam0->f_183 != 2)
	{
		iParam0->f_183 = 2;
		aggregate.bandana.func_26(&(iParam0->f_184), 1);
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam0->f_184, 1))
	{
		aggregate.bandana.func_26(&(iParam0->f_184), 1);
		func_4(iParam0);
	}
}

void func_11(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (aggregate.annesburg.func_217(&(uParam0->f_180[iVar0])))
		{
			aggregate.binoculars.func_37(&(uParam0->f_180[iVar0]), bParam1, 0, 1);
		}
		iVar0++;
	}
}

char* func_23(int iParam0)
{
	int iVar0;
	char cVar1[32];

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (&Global_1938998)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "MOONSHINE_DRINK";
				case 1:
					return "MOONSHINE_DISCARD";
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar1, "MOONSHINE_DRINK_DRUNK_", 32);
					StringConCat(&cVar1, aggregate.error_listener.func_18(iVar0), 32);
					return aggregate.fme_animal_tagging.func_1677(cVar1);
				case 1:
					StringCopy(&cVar1, "MOONSHINE_DISCARD_DRUNK_", 32);
					StringConCat(&cVar1, aggregate.error_listener.func_18(iVar0), 32);
					return aggregate.fme_animal_tagging.func_1677(cVar1);
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar1, "MOONSHINE_DRINK_WASTED_", 32);
					StringConCat(&cVar1, aggregate.error_listener.func_18(iVar0), 32);
					return aggregate.fme_animal_tagging.func_1677(cVar1);
				case 1:
					StringCopy(&cVar1, "MOONSHINE_DISCARD_WASTED_", 32);
					StringConCat(&cVar1, aggregate.error_listener.func_18(iVar0), 32);
					return aggregate.fme_animal_tagging.func_1677(cVar1);
			}
			break;
	}
	return "";
}

int func_25(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("INPUT_CONTEXT_RT");
		case 1:
			return joaat("INPUT_CONTEXT_B");
		default:
			break;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 0;
		default:
			break;
	}
	return 0;
}

