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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	struct<165> Local_25 = { 0, 0, 10, 0, 0, 0, 0, 0, -1, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_190 = { 0f, 1f, 0f };
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	bool bLocal_195 = false;
	bool bLocal_196 = false;
	bool bLocal_197 = false;
	bool bLocal_198 = false;
	var uLocal_199[2] = { 0, 0 };
	var uLocal_202[2] = { 0, 0 };
	char* sLocal_205 = NULL;
	int iLocal_206 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	fLocal_20 = 1f;
	fLocal_21 = 1f;
	iLocal_24 = -1;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
	aggregate.aberdeenpigfarm.func_23();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate.ambient_fishing_scenario.func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && aggregate.ambient_fishing_scenario.func_3())
	{
		aggregate.aberdeenpigfarm.func_23();
		aggregate.ambient_fishing_scenario.func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	aggregate.ambient_fishing_scenario.func_2();
}

void func_6()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		iLocal_13 = 0;
		return;
	}
	if (!bLocal_198 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
	{
		bLocal_198 = true;
	}
	sLocal_205 = "scenario@MECH@PLAYER_OPEN_MISCCHEST@EXIT";
	if (!ENTITY::DOES_ENTITY_EXIST(Local_25.f_5))
	{
		bLocal_195 = true;
		Local_25.f_6 = uLocal_16;
		Local_25.f_5 = func_12();
	}
	switch (iLocal_206)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_25.f_5))
			{
				func_13(&Local_25);
				func_14(Local_25.f_5);
				Local_25.f_3 = !func_15(Local_25.f_5);
				Local_25.f_1 = ENTITY::GET_ENTITY_MODEL(Local_25.f_5);
				vLocal_190.f_2 = 0.122f;
				vLocal_190.f_1 = 0.736f;
				func_16(&Local_25);
				Local_25.f_12[0] = func_17();
				if (&Local_25.f_12[0] == 0)
				{
					iLocal_206 = 3;
				}
				else
				{
					Local_25.f_12[1] = func_18();
					func_19();
					iLocal_206 = 1;
				}
			}
			break;
		case 1:
			if (&Local_25.f_12[1] == 0)
			{
				if (iLocal_24 < 0)
				{
					iLocal_24 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_205, 0, 0, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_24);
				}
			}
			if (bLocal_195)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_21(uLocal_199[iVar0], &Local_25, iVar0, uLocal_202[iVar0], func_20(iVar0), 0, 1, 1, 0);
					iVar0++;
				}
			}
			if (&uLocal_199[0] >= 2 && &uLocal_199[1] >= 2)
			{
				iLocal_206 = 2;
			}
			break;
		case 2:
			if (bLocal_195)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_21(uLocal_199[iVar0], &Local_25, iVar0, uLocal_202[iVar0], func_20(iVar0), 0, 1, 0, 0);
					iVar0++;
				}
			}
			if (&uLocal_199[0] == 4 && &uLocal_199[1] == 4)
			{
				iLocal_206 = 3;
			}
			break;
		case 3:
			break;
	}
	if (!bLocal_196 && ANIMSCENE::_0x25557E324489393C(vLocal_190.x))
	{
		func_22(&vLocal_190, &bLocal_197, &bLocal_196);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1755159785))
	{
		if (!bLocal_197)
		{
			vLocal_190.x = TASK::_0x2C497BDEF897C6DF(Global_35);
			bLocal_197 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 2072536589))
	{
		if (iLocal_23 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_202[0])))
			{
				AUDIO::_0xC886CD666ADD42E1(Global_35, &(Local_25.f_26[0]));
			}
		}
		else if (iLocal_23 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_202[1])))
			{
				AUDIO::_0xC886CD666ADD42E1(Global_35, &(Local_25.f_26[1]));
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1898385492))
	{
		iLocal_23++;
		if (iLocal_23 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_202[0])))
			{
				func_23(&(uLocal_202[0]), 0, 1);
				OBJECT::DELETE_OBJECT(uLocal_202[0]);
				func_24(&(Local_25.f_23), 2, 0, 752097756);
			}
		}
		else if (iLocal_23 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_202[1])))
			{
				func_23(&(uLocal_202[1]), 0, 1);
				OBJECT::DELETE_OBJECT(uLocal_202[1]);
				func_24(&(Local_25.f_26), 10, 0, 752097756);
			}
			bLocal_196 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 266921527))
	{
		if (&Local_25.f_12[1] == 0)
		{
			TASK::_0xD999E379265A4501(Global_35, sLocal_205, 0);
			TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
			bLocal_196 = true;
		}
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		iLocal_13 = 0;
		bLocal_196 = true;
	}
}

void func_7()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_25.f_5))
	{
		if (bLocal_198)
		{
			if (!func_25(Local_25.f_5))
			{
				func_26(Local_25.f_5);
			}
		}
		else
		{
			func_27(&Local_25);
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_28(uLocal_202[iVar0], bLocal_198);
		iVar0++;
	}
}

int func_12()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = TASK::_0xDF7993356F52359A(Global_35, 0);
		if (TASK::_0x841475AC96E794D1(iVar1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = TASK::_0x7467165EE97D3C68(iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = TASK::_0x295514F198EFD0CA(iVar1, "PROP");
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = PED::_0x4D0D2E3D8BC000EB(Global_35, "PROP", 1);
			}
		}
	}
	return iVar0;
}

void func_13(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_103[iVar0 /*5*/] = -1;
		(uParam0->f_103[iVar0 /*5*/])->f_3 = 0;
		(uParam0->f_103[iVar0 /*5*/])->f_1 = 0;
		(uParam0->f_103[iVar0 /*5*/])->f_2 = 0f;
		(uParam0->f_103[iVar0 /*5*/])->f_4 = 0;
		uParam0->f_154[iVar0] = -1;
		iVar0++;
	}
}

void func_14(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	iVar0 = OBJECT::_0x250EBB11E81A10BE(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (aggregate.aberdeenpigfarm.func_175(OBJECT::_0x2BF1953C0C21AC88(iVar0), 1))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "loot_empty", true);
		return;
	}
	OBJECT::_0x7D4411D6736CD295(iVar0, &Var1);
	if (Var1 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_money", Var1);
	}
	if (Var1.f_2 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_type", Var1.f_1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_amt", Var1.f_2);
	}
	if (Var1.f_4 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_type", Var1.f_3);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_amt", Var1.f_4);
	}
	if (Var1.f_6 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_type", Var1.f_5);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_amt", Var1.f_6);
	}
	if (Var1.f_8 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", Var1.f_7);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", Var1.f_8);
	}
	if (Var1.f_9 != 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_weapon", Var1.f_9);
	}
}

bool func_15(int iParam0)
{
	if ((((((((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty") || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo1_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo2_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo3_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		return false;
	}
	return true;
}

void func_16(var uParam0)
{
	struct<13> Var0;
	int iVar23;
	int iVar24;
	int iVar25;

	if (uParam0->f_3 && func_33(uParam0->f_5))
	{
		return;
	}
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	if (!func_34(uParam0->f_5))
	{
		MISC::_0x48E4D50F87A96AA5(*uParam0, 1, 1, uParam0->f_1, &Var0, 0);
	}
	if (Var0 <= 0 && !uParam0->f_3)
	{
		return;
	}
	if (uParam0->f_3)
	{
		func_35(uParam0, &Var0, 10);
	}
	if (uParam0->f_2 > 10)
	{
		uParam0->f_2 = 10;
	}
	iVar23 = 0;
	while (iVar23 < uParam0->f_2)
	{
		uParam0->f_26[iVar23] = &Var0.f_1[iVar23];
		if ((uParam0->f_103[iVar23 /*5*/])->f_4 != 0)
		{
			uParam0->f_12[iVar23] = (uParam0->f_103[iVar23 /*5*/])->f_4;
			iVar25++;
		}
		else
		{
			iVar24 = TASK::_0xE47DD64B9F02677D(&(Var0.f_1[iVar23]));
			if (iVar24 == 0 && &uParam0->f_26[iVar23] != 0)
			{
				uParam0->f_12[iVar23] = 1077976463;
			}
			else
			{
				uParam0->f_12[iVar23] = iVar24;
				iVar25++;
			}
		}
		iVar23++;
	}
	if (iVar25 > 0)
	{
		NETWORK::_0xE7DDA8BD3BCF751C(iVar25);
	}
}

int func_17()
{
	int iVar0;

	if (func_36(&(Local_25.f_6)))
	{
		iVar0 = func_37(Local_25, Local_25.f_26[0]);
	}
	else
	{
		iVar0 = func_38(&Local_25, Local_25.f_26[0], 0);
	}
	return iVar0;
}

int func_18()
{
	int iVar0;

	iVar0 = func_38(&Local_25, Local_25.f_26[1], 1);
	return iVar0;
}

void func_19()
{
	*(Local_25.f_37[0 /*3*/]) = { -0.0131f, 0.052f, 0.0977f };
	*(Local_25.f_68[0 /*3*/]) = { 0f, 0f, -12.264f };
	*(Local_25.f_37[1 /*3*/]) = { 0.1751f, -0.0163f, 0.1059f };
	*(Local_25.f_68[1 /*3*/]) = { 0f, 0f, -52.5738f };
}

char* func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OBJECT1";
		case 1:
			return "OBJECT2";
		default:
			break;
	}
	return "";
}

void func_21(var uParam0, var uParam1, int iParam2, var uParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	switch (*uParam0)
	{
		case 0:
			if (&uParam1->f_12[iParam2] != 0)
			{
				STREAMING::REQUEST_MODEL(&(uParam1->f_12[iParam2]), false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(&(uParam1->f_12[iParam2])))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
				{
					if (&uParam1->f_154[iParam2] != -1)
					{
						vVar3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam1->f_5, &(uParam1->f_154[iParam2])) };
						vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, ENTITY::GET_ENTITY_HEADING(uParam1->f_5), *(uParam1->f_37[iParam2 /*3*/])) };
					}
					else
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_5, *(uParam1->f_37[iParam2 /*3*/])) };
					}
				}
				else if (TASK::_0x841475AC96E794D1(uParam1->f_6))
				{
					vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(TASK::_0xA8452DD321607029(uParam1->f_6, 1), TASK::_0xB93EA7184BAA85C3(uParam1->f_6, 1), *(uParam1->f_37[iParam2 /*3*/])) };
				}
			else
			{
				}
				else
				{
					*uParam3 = OBJECT::CREATE_OBJECT(&(uParam1->f_12[iParam2]), vVar0, func_39(&(uParam1->f_5)), true, false, false, bParam5);
					func_40(uParam1, uParam3, &(uParam1->f_12[iParam2]), &(uParam1->f_26[iParam2]));
					ENTITY::SET_ENTITY_INVINCIBLE(*uParam3, true);
					OBJECT::_0x1461DF6DB886BE3F(*uParam3);
					if (bParam6)
					{
						iVar6 = aggregate.blackwater.func_292(uParam1->f_4, &(uParam1->f_154[iParam2]), 0);
						vVar0 = { aggregate.fme_escaped_convicts.func_1089(uParam1->f_4, *(uParam1->f_37[iParam2 /*3*/]), ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam1->f_5, vVar0)) };
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam3, uParam1->f_5, iVar6, vVar0, *(uParam1->f_68[iParam2 /*3*/]), 0, 0, 0, 0, 2, 1, 0, 0);
					}
					else
					{
						ENTITY::SET_ENTITY_ROTATION(*uParam3, *(uParam1->f_68[iParam2 /*3*/]), 2, true);
					}
					*uParam0 = 2;
					Jump @453; //curOff = 442
					if (bParam8)
					{
					}
					Jump @614; //curOff = 453
					if (!bParam7)
					{
						if (&uParam1->f_26[iParam2] != 0)
						{
							iVar7 = 3;
						}
						else
						{
							iVar7 = 4;
						}
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
						{
							*uParam0 = iVar7;
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
						{
							*uParam0 = iVar7;
						}
						else if (!TASK::_0x841475AC96E794D1(uParam1->f_6))
						{
							*uParam0 = iVar7;
						}
						else if (TASK::_0x8360C47380B6F351(uParam1->f_6, *uParam3, sParam4, 1))
						{
							*uParam0 = iVar7;
						}
						else if (bParam8)
						{
							*uParam0 = iVar7;
						}
					}
					Jump @614; //curOff = 574
					if (&uParam1->f_26[iParam2] != 0)
					{
						TASK::_0xA6A76D666A281F2D(*uParam3, &(uParam1->f_26[iParam2]));
						*uParam0 = 4;
					}
				}
			}
			default:
				break;
	}
}

void func_22(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;

	if (!ANIMSCENE::_0x25557E324489393C(*iParam0))
	{
		return;
	}
	if (*bParam1)
	{
		fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(*iParam0);
		fVar1 = ((fVar0 - iParam0->f_2) / (iParam0->f_1 - iParam0->f_2));
		if (fVar1 >= 0f)
		{
			iParam0->f_3 = fVar1;
		}
		if (iParam0->f_3 >= 1f && !*bParam2)
		{
			*bParam2 = 1;
		}
		if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_CONTEXT_Y")))
		{
			iParam0->f_4 = iParam0->f_3;
		}
	}
}

void func_23(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_24(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (aggregate.bandana.func_30(uParam0[iVar0], 0))
		{
			aggregate.fm_mission_controller.func_5498(uParam0[iVar0], 1, bParam2, 0, 0, iParam3, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

bool func_25(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return DECORATOR::DECOR_EXIST_ON(iParam0, "chest_open");
	}
	return false;
}

void func_26(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "chest_open", true);
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		aggregate.aberdeenpigfarm.func_108(aggregate.coffee_drinking.func_100(-1482693337), 1);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_108(aggregate.coffee_drinking.func_100(822398076), 1);
	}
}

void func_27(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_5);
		switch (&uParam0->f_103[iVar0 /*5*/])
		{
			case 0:
				func_47(0, 0f, 0f, 0f, &iVar1, (uParam0->f_103[iVar0 /*5*/])->f_2, 0, 0);
				break;
			case 2:
				func_49(0, 0f, 0f, 0f, &iVar1, WEAPON::_0x7AA043F6C41D151E(aggregate.fm_mission_controller.func_1644((uParam0->f_103[iVar0 /*5*/])->f_3, 1)), 0, 0, 0);
				break;
			case 3:
				func_51(0, 0f, 0f, 0f, &iVar1, aggregate.fm_mission_controller.func_6349((uParam0->f_103[iVar0 /*5*/])->f_3, 1), 0, 0);
				break;
			case 1:
				aggregate.fm_mission_controller.func_6275(0, 0f, 0f, 0f, *(uParam0->f_37[iVar0 /*3*/]), *(uParam0->f_68[iVar0 /*3*/]), &iVar1, (uParam0->f_103[iVar0 /*5*/])->f_3, 1, 0, 0, (uParam0->f_103[iVar0 /*5*/])->f_4, &(uParam0->f_154[iVar0]));
				break;
			case -1:
				Jump @239; //curOff = 224
				iVar0++;
			}
		}

void func_28(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!bParam1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
	}
}

int func_33(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		return 1;
	}
	return 0;
}

bool func_34(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, "scripted_loot_only")) && DECORATOR::DECOR_GET_BOOL(iParam0, "scripted_loot_only"))
	{
		return true;
	}
	return false;
}

void func_35(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	bool bVar10;
	var uVar11;
	var uVar12;

	while (!func_15(uParam0->f_5) && iVar8 < iParam2)
	{
		bVar0 = func_53(uParam0->f_5, &uVar9, &uVar1, &uVar11, &uVar12, &vVar2, &vVar5, &bVar10);
		if (aggregate.bandana.func_30(bVar0, 0))
		{
			func_54(uParam0, uVar1, vVar2, vVar5, bVar0, uVar9, uVar11, uVar12, bVar10);
			iParam1->f_1[iVar8] = bVar0;
			iVar8++;
		}
	}
}

bool func_36(var uParam0)
{
	return TASK::_0x6718F40313A2B5A6(*uParam0) >= 0.99f;
}

int func_37(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	int iVar0;

	switch (aggregate.aberdeenpigfarm.func_66())
	{
		case 10:
			if (aggregate.fishing_core.func_39(Param0.f_5, func_56(1), 1) < 15f)
			{
				iVar0 = 1077976463;
				*uParam165 = 230530039; /* GXTEntry: "Health Cure" */
			}
			break;
		case -1:
			if (aggregate.fishing_core.func_39(Param0.f_5, func_56(2), 1) < 15f)
			{
				iVar0 = 1077976463;
				*uParam165 = 230530039; /* GXTEntry: "Health Cure" */
			}
			break;
	}
	return iVar0;
}

int func_38(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= uParam0->f_26)
	{
		*uParam1 = 0;
		return 1077976463;
	}
	*uParam1 = &uParam0->f_26[iParam2];
	return &(uParam0->f_12[iParam2]);
}

bool func_39(var uParam0)
{
	return !(DECORATOR::DECOR_EXIST_ON(*uParam0, "chest_local_only") && DECORATOR::DECOR_GET_BOOL(*uParam0, "chest_local_only"));
}

void func_40(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0)
	{
		iParam2 = ENTITY::GET_ENTITY_MODEL(*uParam1);
	}
	if (iParam2 == -1205527547 || iParam3 == -1077794372)
	{
		DECORATOR::DECOR_SET_BOOL(*uParam1, "loot_mp_mission_only", true);
	}
}

bool func_47(int iParam0, vector3 vParam1, int iParam4, float fParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = aggregate.fm_mission_controller.func_6821(iParam0, vParam1, iParam6, iParam7);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		aggregate.fm_mission_controller.func_6823(iParam4);
		return func_101(*iParam4, fParam5);
	}
	return false;
}

void func_49(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = aggregate.fm_mission_controller.func_6821(iParam0, vParam1, iParam7, iParam8);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		aggregate.fm_mission_controller.func_6823(iParam4);
		func_103(*iParam4, iParam5, iParam6, 1);
	}
}

void func_51(int iParam0, vector3 vParam1, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = aggregate.fm_mission_controller.func_6821(iParam0, vParam1, iParam6, iParam7);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		aggregate.fm_mission_controller.func_6823(iParam4);
		func_104(*iParam4, bParam5);
	}
}

int func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	char cVar6[16];
	struct<2> Var8;
	struct<2> Var10;
	int iVar12;
	int iVar13;

	iVar0 = 0;
	bVar1 = false;
	*uParam1 = 0;
	*bParam7 = -1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		return 0;
	}
	*uParam1 = 1;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_money");
		*uParam2 = 0;
		return 2084597891 /* GXTEntry: "Money" */;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money"))
	{
		*uParam3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "fLoot_money");
		DECORATOR::DECOR_REMOVE(iParam0, "fLoot_money");
		*uParam2 = 0;
		return aggregate.fme_animal_tagging.func_1249(*uParam3);
	}
	StringCopy(&cVar6, "loot_ammo", 16);
	iVar5 = 1;
	while (iVar5 <= 3)
	{
		Var8 = { cVar6 };
		Var10 = { cVar6 };
		StringIntConCat(&Var8, iVar5, 16);
		StringIntConCat(&Var10, iVar5, 16);
		StringConCat(&Var8, "_type", 16);
		StringConCat(&Var10, "_amt", 16);
		if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var8))
		{
			bVar1 = DECORATOR::DECOR_GET_INT(iParam0, &Var8);
			if (bVar1 != 0)
			{
				iVar0 = WEAPON::_0x5C2EA6C44F515F34(bVar1);
				DECORATOR::DECOR_REMOVE(iParam0, &Var8);
				if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var10))
				{
					*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, &Var10);
					DECORATOR::DECOR_REMOVE(iParam0, &Var10);
					*uParam2 = 2;
				}
				return iVar0;
			}
		}
		iVar5++;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		bVar1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_weapon");
		if (bVar1 != 0)
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_weapon");
			*uParam2 = 3;
			return func_110(bVar1);
		}
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt1"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_amt1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_bone1"))
		{
			*bParam7 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_bone1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_bone1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model1"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_model1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model1");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1z");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1z");
		}
		iVar12 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_type1");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
		*uParam2 = 1;
		return iVar12;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt2"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_amt2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_bone2"))
		{
			*bParam7 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_bone2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_bone2");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model2"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_model2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model2");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2z");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2z");
		}
		iVar13 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_type2");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
		*uParam2 = 1;
		return iVar13;
	}
	return 0;
}

void func_54(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, var uParam9, var uParam10, var uParam11, bool bParam12)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&uParam0->f_103[iVar0 /*5*/] == -1)
		{
			uParam0->f_103[iVar0 /*5*/] = uParam1;
			uParam0->f_154[iVar0] = bParam12;
			(uParam0->f_103[iVar0 /*5*/])->f_3 = bParam8;
			(uParam0->f_103[iVar0 /*5*/])->f_1 = uParam9;
			(uParam0->f_103[iVar0 /*5*/])->f_2 = uParam10;
			(uParam0->f_103[iVar0 /*5*/])->f_4 = uParam11;
			if (aggregate.doc_book.func_158((uParam0->f_103[iVar0 /*5*/])->f_3) && aggregate.bandana.func_71((uParam0->f_103[iVar0 /*5*/])->f_3))
			{
				func_113(uParam0->f_37[iVar0 /*3*/], uParam0->f_68[iVar0 /*3*/]);
			}
			else
			{
				if (!aggregate.annesburg.func_121(vParam2))
				{
					*(uParam0->f_37[iVar0 /*3*/]) = { vParam2 };
				}
				if (!aggregate.annesburg.func_121(vParam5))
				{
					*(uParam0->f_68[iVar0 /*3*/]) = { vParam5 };
				}
			}
		}
		else
		{
			iVar0++;
		}
	}
}

Vector3 func_56(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0 = { 2313.51f, 1031.721f, 78.5643f };
			break;
		case 2:
			vVar0 = { 159.2609f, -1436.622f, 42f };
			break;
	}
	return vVar0;
}

int func_76(bool bParam0, int iParam1, int iParam2)
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
		return 0;
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
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (aggregate.doc_book.func_93(0))
	{
		if (aggregate.doc_book.func_95(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return aggregate.doc_book.func_96(bParam0, *iParam1, iParam2);
	}
	return 0;
}

bool func_101(int iParam0, float fParam1)
{
	return DECORATOR::DECOR_SET_FLOAT(iParam0, "fLoot_money", fParam1);
}

void func_103(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = aggregate.fm_deathmatch_controller.func_2466(iParam0);
		aggregate.fm_mission_controller.func_7221(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo1_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo1_type") == iParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_type", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_amt", iParam2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo2_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo2_type") == iParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_type", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_amt", iParam2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo3_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo3_type") == iParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_type", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_amt", iParam2);
	}
}

void func_104(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = aggregate.fm_deathmatch_controller.func_2466(iParam0);
		aggregate.fm_mission_controller.func_7221(iParam0, bParam1, 1, iVar0);
	}
	else
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_weapon", bParam1);
	}
}

bool func_110(bool bParam0)
{
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	return false;
}

void func_113(var uParam0, var uParam1)
{
	*uParam0 = { -0.12f, 0.12f, 0.12f };
	*uParam1 = { 90f, 0f, 115f };
}

