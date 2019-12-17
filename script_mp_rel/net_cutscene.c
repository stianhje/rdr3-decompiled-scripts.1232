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
	var uLocal_18 = 4;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<318> Var0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_31 = 675980447;
	bLocal_32 = true;
	Var0.f_8 = 2;
	Var0.f_8.f_1.f_11 = 2;
	Var0.f_8.f_1.f_18 = 2;
	Var0.f_8.f_1.f_39 = -1;
	Var0.f_8.f_1.f_40.f_11 = 2;
	Var0.f_8.f_1.f_40.f_18 = 2;
	Var0.f_8.f_1.f_40.f_39 = -1;
	Var0.f_89 = 4;
	Var0.f_89.f_1.f_8 = -1;
	Var0.f_89.f_1.f_11 = -1;
	Var0.f_89.f_1.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_11 = -1;
	Var0.f_89.f_1.f_15.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_15.f_11 = -1;
	Var0.f_89.f_1.f_15.f_15.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_15.f_15.f_11 = -1;
	Var0.f_150 = 6;
	Var0.f_150.f_1.f_9 = -1;
	Var0.f_150.f_1.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_229 = 2;
	Var0.f_229.f_1.f_1 = 4;
	Var0.f_229.f_1.f_1.f_1.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1 = 4;
	Var0.f_229.f_1.f_27.f_1.f_1.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_6.f_2 = -1;
	Var0.f_229.f_1.f_27.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_287 = -1;
	Var0.f_287.f_1 = -1;
	Var0.f_307 = -1;
	Var0.f_317 = -1;
	Var0.f_304 = ScriptParam_0;
	Var0 = ScriptParam_0.f_1;
	func_1();
	aggregate.aberdeenpigfarm.func_154(&Var0);
	while (bLocal_32)
	{
		bLocal_32 = !func_3(&Var0);
		if (func_4(&Var0))
		{
			bLocal_32 = false;
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Var0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_3(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_49(1, 1))
	{
		return true;
	}
	if (aggregate.fme_animal_tagging.func_16(aggregate.flow_controller.func_181(), 256, 0))
	{
		return true;
	}
	if (!aggregate.angryisolationist.func_40(*uParam0))
	{
		if (aggregate.aberdeenpigfarm.func_158(aggregate.aberdeenpigfarm.func_159()))
		{
			return true;
		}
		if (aggregate.aberdeenpigfarm.func_156())
		{
			return true;
		}
	}
	if (func_13(uParam0))
	{
		func_14(0);
		return true;
	}
	if (func_15() >= 13)
	{
		return true;
	}
	if (aggregate.camera_item.func_12(uParam0) != 3 && aggregate.camera_item.func_12(uParam0) != 4)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (aggregate.fme_animal_tagging.func_654() == 9)
	{
		return true;
	}
	if (aggregate.aberdeenpigfarm.func_158(aggregate.aberdeenpigfarm.func_56(0)))
	{
		return true;
	}
	return false;
}

bool func_4(var uParam0)
{
	func_19(uParam0);
	switch (aggregate.camera_item.func_12(uParam0))
	{
		case 0:
			aggregate.fm_deathmatch_controller.func_445(uParam0);
			break;
		case 1:
			if (!aggregate.net_cutscene.func_21(&(uParam0->f_1)))
			{
				func_22(uParam0);
			}
			func_23(uParam0);
			if (!aggregate.net_cutscene.func_21(&(uParam0->f_1)))
			{
				aggregate.moonshine_coffee_drinking.func_14(uParam0);
			}
			break;
		case 2:
			if (!aggregate.net_cutscene.func_21(&(uParam0->f_1)))
			{
				aggregate.moonshine_coffee_drinking.func_14(uParam0);
			}
			func_27(uParam0);
			if (!aggregate.net_cutscene.func_21(&(uParam0->f_1)))
			{
				aggregate.moonshine_coffee_drinking.func_14(uParam0);
			}
			break;
		case 3:
			if (!aggregate.net_cutscene.func_21(&(uParam0->f_1)))
			{
				func_29(uParam0);
			}
			func_30(uParam0);
			if (!aggregate.net_cutscene.func_21(&(uParam0->f_1)))
			{
				func_31(uParam0);
			}
			break;
		case 4:
			if (!aggregate.net_cutscene.func_21(&(uParam0->f_1)))
			{
				func_32(uParam0);
			}
			func_33(uParam0);
			if (!aggregate.net_cutscene.func_21(&(uParam0->f_1)))
			{
				func_34(uParam0);
			}
			break;
		case 5:
			if (!aggregate.net_cutscene.func_21(&(uParam0->f_1)))
			{
				func_35(uParam0);
			}
			func_36(uParam0);
			if (!aggregate.net_cutscene.func_21(&(uParam0->f_1)))
			{
				aggregate.moonshine_coffee_drinking.func_14(uParam0);
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_5(var uParam0)
{
	int iVar0;

	if (aggregate.camera_item.func_12(uParam0) != 6)
	{
		func_38(uParam0);
	}
	if (Global_13)
	{
		Global_13 = 0;
	}
	if ((((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_14)
	{
		(((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_14 = 0;
	}
	if ((((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15)
	{
		(((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15 = 0;
	}
	if (uParam0->f_308)
	{
		func_39(uParam0, 0);
	}
	if (aggregate.net_cutscene.func_40(uParam0))
	{
		func_41(uParam0);
	}
	if (6 == *uParam0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_8)
		{
			if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 6))
			{
				aggregate.dynamic_craft_scenario.func_12();
			}
			iVar0++;
		}
	}
}

bool func_13(var uParam0)
{
	switch (func_48())
	{
		case 1:
			if (MISC::IS_BIT_SET(uParam0->f_305, 5))
			{
				return true;
			}
			break;
		case 2:
			if (MISC::IS_BIT_SET(uParam0->f_305, 4))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_14(int iParam0)
{
	Global_1270468->f_8 = iParam0;
}

int func_15()
{
	return Global_1572887->f_248;
}

void func_19(var uParam0)
{
	if (uParam0->f_306 >= 3)
	{
		uParam0->f_306 = 0;
		return;
	}
	uParam0->f_306++;
}

void func_22(var uParam0)
{
	aggregate.net_cutscene.func_50(&(uParam0->f_1));
	func_51(uParam0, *uParam0);
	func_52(*uParam0);
	if (*uParam0 != 5)
	{
		func_53(uParam0);
	}
	func_54(uParam0);
}

void func_23(var uParam0)
{
	if (*uParam0 == 5)
	{
		func_53(uParam0);
	}
	if (!func_55(uParam0))
	{
		return;
	}
	func_49(uParam0);
}

void func_27(var uParam0)
{
	func_57(uParam0);
	func_58(uParam0);
	if (!func_59(uParam0))
	{
		return;
	}
	aggregate.fm_mission_controller.func_3266(0);
	if (!func_61(uParam0))
	{
		return;
	}
	if (!func_62(uParam0))
	{
		return;
	}
	if (!func_63(uParam0))
	{
		return;
	}
	CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	if (CAM::_0xA2B1C7EF759A63CE() < 1f)
	{
		return;
	}
	func_49(uParam0);
}

void func_29(var uParam0)
{
	aggregate.net_cutscene.func_50(&(uParam0->f_1));
	func_64(*uParam0);
	aggregate.bigvalleyomj.func_36(uParam0, 0);
	if (MISC::IS_BIT_SET(uParam0->f_305, 6))
	{
		func_66(uParam0);
	}
}

void func_30(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_305, 2))
	{
		func_67(uParam0);
		if (MISC::IS_BIT_SET(uParam0->f_305, 2))
		{
			if (!uParam0->f_308)
			{
				func_39(uParam0, 1);
				func_68(uParam0);
			}
		}
		return;
	}
	func_69(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_305, 7))
	{
		func_70(uParam0);
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 3))
	{
		func_71(uParam0);
	}
	func_72(uParam0);
	if (aggregate.net_cutscene.func_40(uParam0))
	{
		func_41(uParam0);
	}
	aggregate.fm_mission_controller.func_4570(0, 0, 1);
	if (!func_74(uParam0) && !func_75(uParam0))
	{
		return;
	}
	func_49(uParam0);
}

void func_31(var uParam0)
{
	aggregate.net_cutscene.func_50(&(uParam0->f_1));
	func_39(uParam0, 0);
	aggregate.fme_animal_tagging.func_290(&(uParam0->f_311));
	aggregate.bigvalleyomj.func_36(uParam0, 1);
	if (aggregate.annesburg.func_217(uParam0->f_310))
	{
		aggregate.annesburg.func_218(&(uParam0->f_310), 1, 1);
	}
	if (aggregate.annesburg.func_217(uParam0->f_315))
	{
		aggregate.annesburg.func_218(&(uParam0->f_315), 1, 1);
	}
	if (aggregate.annesburg.func_217(uParam0->f_316))
	{
		aggregate.annesburg.func_218(&(uParam0->f_316), 1, 1);
	}
	func_79(uParam0, 1);
}

void func_32(var uParam0)
{
	aggregate.net_cutscene.func_50(&(uParam0->f_1));
	func_80(uParam0);
}

void func_33(var uParam0)
{
	aggregate.fm_mission_controller.func_4570(0, 0, 1);
	if (!func_81(uParam0))
	{
		return;
	}
	func_49(uParam0);
}

void func_34(var uParam0)
{
	aggregate.net_cutscene.func_50(&(uParam0->f_1));
	aggregate.net_cutscene.func_82(uParam0);
}

void func_35(var uParam0)
{
	aggregate.net_cutscene.func_50(&(uParam0->f_1));
	func_52(*uParam0);
	if (!MISC::IS_BIT_SET(uParam0->f_305, 11))
	{
		func_79(uParam0, 0);
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_305, 10))
	{
		func_79(uParam0, 0);
	}
	else
	{
		aggregate.flow_controller.func_163(1);
		Global_1270468->f_9 = 1;
	}
	if (MISC::IS_BIT_SET(uParam0->f_305, 18))
	{
		PED::_0xCB9401F918CB0F75(Global_35, "FreeRoamSpawn", true, 20);
	}
}

void func_36(var uParam0)
{
	bool bVar0;

	aggregate.fm_mission_controller.func_4570(0, 0, 1);
	bVar0 = true;
	if (!func_38(uParam0))
	{
		bVar0 = false;
	}
	if (!func_84(*uParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_85(*uParam0, 0);
		func_86(*uParam0, 1);
		func_87(uParam0);
		func_88(uParam0);
		func_49(uParam0);
	}
}

bool func_38(var uParam0)
{
	if (!func_89(uParam0))
	{
		return false;
	}
	if (!func_90(uParam0))
	{
		return false;
	}
	func_91(uParam0);
	func_92(uParam0);
	return true;
}

void func_39(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate.fm_mission_controller.func_4281(1);
		WEAPON::_0xFCCC886EDE3C63EC(Global_1273882->f_8, 2, 1);
		PAD::_0xF239400E16C23E08(0, 0);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1273882->f_8, 0, 1);
		_NAMESPACE71::_0xDD1232B332CBB9E7(7, 1, 0);
		if (aggregate.dynamic_craft_scenario.func_28())
		{
			aggregate.dynamic_craft_scenario.func_12();
		}
		aggregate.net_char_creator.func_73();
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		if (aggregate.fm_mission_controller.func_2361() || PED::_0x50F124E6EF188B22(Global_1273882->f_8))
		{
			aggregate.fm_deathmatch_controller.func_512(1);
			func_98();
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		func_99();
		Global_13 = 1;
		aggregate.fm_mission_controller.func_4603(Global_1273882->f_8);
		if (aggregate.camera_item.func_74(Global_1273882->f_8))
		{
			uParam0->f_314 = aggregate.fme_escaped_convicts.func_1485(Global_1273882->f_8);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1273882->f_8, 1, 1);
		}
		func_103(0);
		uParam0->f_308 = 1;
		HUD::_0x4CC5F2FC1332577F(-1319249689);
		NETWORK::_0x4B05B97BA46F419D(0);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
		aggregate.fme_supply_train.func_914(0, 28);
	}
	else
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_1273882->f_8, true);
		PAD::_0xA0CEFCEA390AAB9B(0);
		aggregate.fm_mission_controller.func_4281(0);
		aggregate.mp_intro.func_184();
		Global_13 = 0;
		func_103(1);
		uParam0->f_308 = 0;
		HUD::_0x8BC7C1F929D07BF3(-1319249689);
		NETWORK::_0x4B05B97BA46F419D(1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		aggregate.fme_supply_train.func_914(1, 2);
	}
}

void func_41(var uParam0)
{
	if (uParam0->f_284 == 0)
	{
		return;
	}
	_NAMESPACE76::_0x00A15B94CBA4F76F(uParam0->f_284);
	uParam0->f_284 = 0;
}

int func_48()
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1273882->f_16);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (aggregate.flow_controller.func_154(Global_1273882->f_16))
	{
		return 1;
	}
	return 2;
}

void func_49(var uParam0)
{
	int iVar0;

	uParam0->f_1.f_1 = uParam0->f_1;
	MISC::SET_BIT(&(uParam0->f_1.f_5), uParam0->f_1.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_1.f_4), uParam0->f_1.f_1);
	iVar0 = uParam0->f_1;
	iVar0++;
	uParam0->f_1 = iVar0;
	if (uParam0->f_1 == 7)
	{
		uParam0->f_1 = 6;
	}
	((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/] = uParam0->f_1;
}

int func_51(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
		default:
			return 0;
			uParam0->f_298 = { -870.1846f, -1276.62f, 42.2367f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(-871.3538f, -1273.499f, 42.87627f, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@mpgvo_int1", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "1-Male", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "2-Female", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { -874.35f, -1335.12f, 42.38f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			return 1;
		case 2:
			uParam0->f_298 = { -870.1846f, -1276.62f, 42.2367f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(-871.3538f, -1273.499f, 42.87627f, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@mpgvo_int2a", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "1-Male", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "2-Female", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { -874.35f, -1335.12f, 42.38f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 3);
			StringCopy(&((uParam0->f_8[1 /*40*/])->f_3), "cutscene@mpgvo_int2b", 64);
			StringCopy((uParam0->f_8[1 /*40*/])->f_11[0 /*3*/], "1-Male", 24);
			StringCopy((uParam0->f_8[1 /*40*/])->f_11[1 /*3*/], "2-Female", 24);
			(uParam0->f_8[1 /*40*/])->f_33 = { -874.35f, -1335.12f, 42.38f };
			(uParam0->f_8[1 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[1 /*40*/])->f_2 = 256;
			MISC::SET_BIT(&((uParam0->f_8[1 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[1 /*40*/])->f_1), 4);
			return 1;
		case 3:
			uParam0->f_298 = { 1352.95f, -1306.359f, 75.9113f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_298, 0f, 0f, 0f, 5f, 5f, 5f);
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@BHINT_INT", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { 1359.71f, -1305.96f, 76.768f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "BHINT_INT_P3_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/])->f_4), "payLater", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "BHINT_INT_P3_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/])->f_4), "payNow", 24);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			uParam0->f_319 = 15000;
			return 1;
		case 4:
			uParam0->f_298 = { 0f, 0f, 0f };
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@TRINT_INT", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/])->f_4), "payLater", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/])->f_4), "payNow", 24);
			uParam0->f_89[0 /*15*/] = 500320009;
			(uParam0->f_89[0 /*15*/])->f_8 = func_108();
			(uParam0->f_89[0 /*15*/])->f_2 = { -319.241f, 797.036f, 116.886f };
			(uParam0->f_89[0 /*15*/])->f_11 = 0;
			StringCopy(&((uParam0->f_89[0 /*15*/])->f_11.f_1), "JB_Cripps", 24);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 9);
			MISC::SET_BIT(&(uParam0->f_305), 11);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			uParam0->f_319 = 15000;
			return 1;
		case 5:
			uParam0->f_298 = { 0f, 0f, 0f };
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@COINT_INT", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "COINT_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/])->f_4), "payLater", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "COINT_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/])->f_4), "payNow", 24);
			switch (aggregate.long_update.func_600())
			{
				case 135:
					(uParam0->f_8[0 /*40*/])->f_39 = 0;
					break;
				case 136:
					(uParam0->f_8[0 /*40*/])->f_39 = 1;
					break;
				case 137:
					(uParam0->f_8[0 /*40*/])->f_39 = 2;
					break;
				case 138:
					(uParam0->f_8[0 /*40*/])->f_39 = 3;
					break;
				case 139:
					(uParam0->f_8[0 /*40*/])->f_39 = 4;
					break;
				case 140:
					(uParam0->f_8[0 /*40*/])->f_39 = 5;
					break;
				case 141:
					(uParam0->f_8[0 /*40*/])->f_39 = 6;
					break;
				case 142:
					(uParam0->f_8[0 /*40*/])->f_39 = 7;
					break;
				case 143:
					(uParam0->f_8[0 /*40*/])->f_39 = 8;
					break;
				case 144:
					(uParam0->f_8[0 /*40*/])->f_39 = 9;
					break;
				case 145:
					(uParam0->f_8[0 /*40*/])->f_39 = 10;
					break;
				case 146:
					(uParam0->f_8[0 /*40*/])->f_39 = 11;
					break;
			}
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 9);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			(uParam0->f_150[0 /*13*/])->f_1 = 1287159687;
			StringCopy(&((uParam0->f_150[0 /*13*/])->f_9.f_1), "Pigeoncage", 24);
			(uParam0->f_150[0 /*13*/])->f_2 = { -2.8f, 0.86f, 1.7f };
			(uParam0->f_150[1 /*13*/])->f_1 = joaat("p_chair20x");
			StringCopy(&((uParam0->f_150[1 /*13*/])->f_9.f_1), "Nazar_Chair", 24);
			(uParam0->f_150[1 /*13*/])->f_2 = { -0.66f, -4.02f, -0.07f };
			(uParam0->f_150[2 /*13*/])->f_1 = 1935688926;
			StringCopy(&((uParam0->f_150[2 /*13*/])->f_9.f_1), "CollectorBox", 24);
			(uParam0->f_150[2 /*13*/])->f_2 = { 0.26f, -1.98f, 1.04f };
			(uParam0->f_150[3 /*13*/])->f_1 = -9088003;
			StringCopy(&((uParam0->f_150[3 /*13*/])->f_9.f_1), "Collector_Drawer_2", 24);
			(uParam0->f_150[3 /*13*/])->f_2 = { -0.5f, -0.25f, 1.71f };
			uParam0->f_319 = 20000;
			return 1;
		case 6:
			uParam0->f_298 = { 1446.741f, 374.882f, 88.88737f };
			uParam0->f_297 = VOLUME::_CREATE_VOLUME_BOX(uParam0->f_298, 0f, 0f, 0f, 13.868f, 15.947f, 8.828f);
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@moon_int", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[0 /*3*/], "", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_11[1 /*3*/], "", 24);
			(uParam0->f_8[0 /*40*/])->f_33 = { 1447.91f, 371.75f, 88.933f };
			(uParam0->f_8[0 /*40*/])->f_36 = { 0f, 0f, 0f };
			(uParam0->f_8[0 /*40*/])->f_2 = 256;
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "MOON_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/])->f_4), "refuse", 24);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "MOON_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/])->f_4), "ACCEPT", 24);
			uParam0->f_89[0 /*15*/] = 500320009;
			(uParam0->f_89[0 /*15*/])->f_11 = 0;
			StringCopy(&((uParam0->f_89[0 /*15*/])->f_11.f_1), "JB_Cripps", 24);
			(uParam0->f_89[0 /*15*/])->f_8 = func_108();
			(uParam0->f_89[0 /*15*/])->f_9 = joaat("weapon_revolver_cattleman");
			uParam0->f_89[1 /*15*/] = -254133531;
			(uParam0->f_89[1 /*15*/])->f_11 = 0;
			StringCopy(&((uParam0->f_89[1 /*15*/])->f_11.f_1), "MAGGIE", 24);
			(uParam0->f_89[1 /*15*/])->f_8 = 41788943;
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 2);
			MISC::SET_BIT(&((uParam0->f_8[0 /*40*/])->f_1), 5);
			MISC::SET_BIT(&(uParam0->f_305), 7);
			MISC::SET_BIT(&(uParam0->f_305), 12);
			MISC::SET_BIT(&(uParam0->f_305), 14);
			MISC::SET_BIT(&(uParam0->f_305), 17);
			uParam0->f_319 = 15000;
			return 1;
	}
}

void func_52(int iParam0)
{
	if (!aggregate.flow_controller.func_50(iParam0))
	{
		return;
	}
	if ((((*Global_1055965)[&Global_1273882 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2 != -1)
	{
		(((*Global_1055965)[&Global_1273882 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2 = -1;
	}
}

int func_53(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (MISC::IS_BIT_SET(uParam0->f_305, 9) && aggregate.annesburg.func_121(uParam0->f_298))
	{
		if (!func_112(*uParam0, &vVar0, &vVar3, 1))
		{
		}
		else
		{
			if (aggregate.flow_controller.func_195(uParam0->f_298, vVar0))
			{
				return 0;
			}
			uParam0->f_298 = { vVar0 };
			uParam0->f_301 = { vVar3 };
			iVar6 = 0;
			while (iVar6 < 2)
			{
				(uParam0->f_8[iVar6 /*40*/])->f_33 = { vVar0 };
				(uParam0->f_8[iVar6 /*40*/])->f_36 = { vVar3 };
				iVar6++;
			}
			return 1;
		}
	}
	else if (aggregate.annesburg.func_121(uParam0->f_298))
	{
	}
	return 0;
}

void func_54(var uParam0)
{
	vector3 vVar0;

	switch (*uParam0)
	{
		case 4:
		default:
			break;
	}
	return;
	vVar0 = { aggregate.flow_controller.func_161(&Global_1273882) };
	switch (vVar0.y)
	{
		case -987049424:
		case -682748:
		case 1538293636:
		case 1581179681:
		default:
			return;
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@TRINT_INT", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "TRINT_INT_P4_T01_Shot_1", 32);
			(uParam0->f_89[0 /*15*/])->f_2 = { -319.241f, 797.036f, 116.886f };
		case -1992167326:
		case -1884014371:
		case -1554232707:
		case -724534761:
		case -215258135:
		case 892234183:
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@TRINT_INTB", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "TRINT_INT_P4B1_T01_Shot_1", 32);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "TRINT_INT_P4B1_T01_Shot_1", 32);
			(uParam0->f_89[0 /*15*/])->f_2 = { -3682.435f, -2622.561f, -14.402f };
			break;
		case -1871413878:
		case 1357161730:
		case 1483778247:
			StringCopy(&((uParam0->f_8[0 /*40*/])->f_3), "cutscene@TRINT_INTC", 64);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[0 /*7*/], "TRINT_INT_P4C1_T01_Shot_1", 32);
			StringCopy((uParam0->f_8[0 /*40*/])->f_18[1 /*7*/], "TRINT_INT_P4C1_T01_Shot_1", 32);
			(uParam0->f_89[0 /*15*/])->f_2 = { 2823.36f, -1314.97f, 45.76f };
			break;
	}
}

bool func_55(var uParam0)
{
	switch (aggregate.hub_offers.func_106(uParam0))
	{
		case 0:
			aggregate.gfh_campworks.func_61(uParam0, 1);
			break;
		case 1:
			if (func_117(uParam0))
			{
				aggregate.gfh_campworks.func_61(uParam0, 2);
			}
			break;
		case 2:
			if (func_118(uParam0))
			{
				aggregate.gfh_campworks.func_61(uParam0, 3);
			}
			break;
		case 3:
			func_119(uParam0);
			aggregate.gfh_campworks.func_61(uParam0, 4);
			break;
		case 4:
			aggregate.gfh_campworks.func_61(uParam0, 5);
			break;
		case 5:
			return true;
	}
	return false;
}

void func_57(var uParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (MISC::IS_BIT_SET((uParam0->f_8[iVar1 /*40*/])->f_1, 3) || MISC::IS_BIT_SET((uParam0->f_8[iVar1 /*40*/])->f_1, 4))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_305, 4) && !MISC::IS_BIT_SET(uParam0->f_305, 5))
		{
			switch (func_48())
			{
				case 2:
					MISC::SET_BIT(&(uParam0->f_305), 5);
					break;
				case 1:
					MISC::SET_BIT(&(uParam0->f_305), 4);
					break;
			}
		}
	}
}

void func_58(var uParam0)
{
	struct<19> Var0;
	char* sVar19;
	char* sVar20;
	int iVar21;
	int iVar22;

	switch (aggregate.hub_offers.func_106(uParam0))
	{
		case 0:
			break;
		case 1:
			if (aggregate.hub_offers.func_106(uParam0) == 0)
			{
				aggregate.net_cutscene.func_122(uParam0, 0);
				return;
			}
			switch (aggregate.hub_offers.func_106(uParam0))
			{
				case 1:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_LEADER";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_LEADER";
					break;
				case 3:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_WANTED";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_WANTED";
					break;
				case 2:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_IN_PROGRESS";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_IN_PROGRESS";
					break;
			}
			Var0.f_7.f_3 = 1;
			Var0.f_7 = joaat("IB_EXIT");
			func_123(uParam0, Var0, sVar19, sVar20);
			aggregate.net_cutscene.func_122(uParam0, 2);
			break;
		case 2:
			if (!aggregate.net_cutscene.func_40(uParam0))
			{
				return;
			}
			iVar21 = func_124();
			if (iVar21 != -1577439368)
			{
				iVar22 = PED::GET_MOUNT(Global_1273882->f_8);
				if (ENTITY::DOES_ENTITY_EXIST(iVar22))
				{
					func_125(iVar22, 1, 1);
				}
				aggregate.fm_mission_controller.func_192(Global_1273882->f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
				func_41(uParam0);
				aggregate.net_cutscene.func_122(uParam0, 3);
			}
			break;
		case 3:
			if (aggregate.fm_deathmatch_controller.func_2043(255) == 1)
			{
				aggregate.net_cutscene.func_122(uParam0, 0);
				aggregate.net_cutscene.func_122(uParam0, 0);
			}
			break;
	}
}

bool func_59(var uParam0)
{
	int iVar0;

	if (!aggregate.flow_controller.func_51(*uParam0))
	{
		iVar0 = 1;
		if (aggregate.flow_controller.func_53(*uParam0))
		{
			if (Global_1273882->f_16 != &Global_1273882)
			{
				iVar0 = 0;
			}
		}
		if (func_131(uParam0) && iVar0)
		{
			if (func_132())
			{
				return true;
			}
		}
		return false;
	}
	if (Global_1273882->f_16 == &Global_1273882 || !_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		if (func_133(*uParam0) || func_131(uParam0))
		{
			if (func_132())
			{
				return true;
			}
		}
	}
	else if (_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		if (Global_1273882->f_16 >= 32 || Global_1273882->f_16 < 0)
		{
			return false;
		}
		if (func_134(*uParam0, PLAYER::INT_TO_PLAYERINDEX(Global_1273882->f_16)) == 3)
		{
			if (!func_135(*uParam0))
			{
				return true;
			}
			else if (func_131(uParam0))
			{
				func_136(uParam0, 2);
			}
		}
		else if (func_131(uParam0))
		{
			if (!func_137())
			{
				if (!PED::_0x3AA24CCC0D451379(Global_1273882->f_8))
				{
					func_136(uParam0, 1);
				}
			}
		}
	}
	return false;
}

bool func_61(var uParam0)
{
	if (!&Global_1273882->f_22[&Global_1273882])
	{
		return false;
	}
	if (!aggregate.medium_update.func_116(255))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(Global_1273882->f_8))
	{
		return false;
	}
	if (PED::_0x3AA24CCC0D451379(Global_1273882->f_8))
	{
		TASK::_0x79559BAD83CCD038(Global_1273882->f_8, 3, 0, 0, 0, 1090519040 /* Float: 8f */);
		return false;
	}
	if (aggregate.fme_archery.func_1286(Global_1273882->f_10, 1, 0, 1))
	{
		if (Global_1273882->f_16 == &Global_1273882)
		{
			func_136(uParam0, 3);
		}
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1273882->f_8, true))
	{
		return false;
	}
	if (Global_1102098->f_935.f_27 == 6)
	{
		return false;
	}
	if (aggregate.doc_book.func_278(0))
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2043(255) != 1)
	{
		return false;
	}
	return true;
}

bool func_62(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[2];
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	switch (aggregate.hub_offers.func_106(uParam0))
	{
		case 0:
			func_143(uParam0);
			aggregate.gfh_campworks.func_61(uParam0, 1);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!func_145(uParam0, iVar0))
				{
				}
				else
				{
					if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
					{
						switch (func_48())
						{
							case 2:
								Jump @353; //curOff = 144
								Jump @154; //curOff = 147
								return false;
							}
							else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
							{
								switch (func_48())
								{
									case 1:
										Jump @353; //curOff = 197
										Jump @207; //curOff = 200
										return false;
									}
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_89[iVar2 /*15*/])->f_1))
										{
										}
										else if ((uParam0->f_89[iVar2 /*15*/])->f_11 == -1)
										{
										}
										else if ((uParam0->f_89[iVar2 /*15*/])->f_11 != iVar0)
										{
										}
										else if (MISC::_0x375F5870A7B8BEC1(&((uParam0->f_89[iVar2 /*15*/])->f_11.f_1)))
										{
										}
										else
										{
											ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_89[iVar2 /*15*/])->f_1, false);
											ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam0->f_8[iVar0 /*40*/]), &((uParam0->f_89[iVar2 /*15*/])->f_11.f_1), (uParam0->f_89[iVar2 /*15*/])->f_1, 0);
										}
										iVar2++;
									}
								}
								iVar0++;
							}
							aggregate.gfh_campworks.func_61(uParam0, 2);
							break;
						case 2:
							iVar0 = 0;
							while (iVar0 < 2)
							{
								if (!func_145(uParam0, iVar0))
								{
								}
								else
								{
									if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
									{
										switch (func_48())
										{
											case 2:
												Jump @579; //curOff = 436
												Jump @446; //curOff = 439
												return false;
											}
											else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
											{
												switch (func_48())
												{
													case 1:
														Jump @579; //curOff = 489
														Jump @499; //curOff = 492
														return false;
													}
													if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 1))
													{
													}
													else if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 2))
													{
													}
													else
													{
														uParam0->f_229[iVar0 /*27*/] = func_146(*uParam0, iVar0);
														if (!SCRIPTS::_0x179A6F0EE2E79026(uParam0->f_229[iVar0 /*27*/]))
														{
														}
														else
														{
															iVar0++;
															iVar0 = 0;
															while (iVar0 < 2)
															{
																if (!func_145(uParam0, iVar0))
																{
																}
																else
																{
																	iVar1 = 0;
																	while (iVar1 < 32)
																	{
																		if (!SCRIPTS::_0x72B2E00C9BAC6789(uParam0->f_229[iVar0 /*27*/], iVar1))
																		{
																		}
																		else
																		{
																			iVar3++;
																		}
																		iVar1++;
																	}
																	(uParam0->f_229[iVar0 /*27*/])->f_26 = iVar3;
																	iVar3 = 0;
																}
																iVar0++;
															}
															aggregate.gfh_campworks.func_61(uParam0, 3);
															Jump @1784; //curOff = 689
															iVar0 = 0;
															while (iVar0 < 2)
															{
																if (!func_145(uParam0, iVar0))
																{
																	iVar5[iVar0] = 1;
																}
																else if (!aggregate.flow_controller.func_51(*uParam0))
																{
																	iVar8 = PLAYER::INT_TO_PLAYERINDEX(&Global_1273882);
																	if (SCRIPTS::_0x72B2E00C9BAC6789(uParam0->f_229[iVar0 /*27*/], iVar1))
																	{
																		if (func_147(uParam0, iVar8, iVar0, 0))
																		{
																			SCRIPTS::_0xD426E2E3288469D6(uParam0->f_229[iVar0 /*27*/], iVar1);
																		}
																		else
																		{
																			Jump @802; //curOff = 792
																			iVar5[iVar0] = 1;
																			Jump @1301; //curOff = 802
																			if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
																			{
																				switch (func_48())
																				{
																					case 2:
																						iVar5[iVar0] = 1;
																						Jump @1301; //curOff = 852
																						Jump @862; //curOff = 855
																						return false;
																					}
																					else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
																					{
																						switch (func_48())
																						{
																							case 1:
																								iVar5[iVar0] = 1;
																								Jump @1301; //curOff = 912
																								Jump @922; //curOff = 915
																								return false;
																							}
																							iVar2 = 0;
																							iVar1 = 0;
																							while (iVar1 < 4)
																							{
																								if (func_148(uParam0, iVar0, iVar1, 0))
																								{
																									if (func_149(uParam0, iVar0, iVar1))
																									{
																										if (!((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_1)
																										{
																											PED::_0xD710A5007C2AC539(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]), -1229581779, 1);
																											PED::_0xCC8CA3E88256E58F(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]), 0, 1, 1, 1, false);
																											((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_1 = 1;
																										}
																										else
																										{
																											iVar2++;
																											Jump @1060; //curOff = 1054
																											Jump @1067; //curOff = 1057
																											iVar5[iVar0] = 1;
																										}
																										iVar1++;
																										if (iVar2 != (uParam0->f_229[iVar0 /*27*/])->f_26)
																										{
																											iVar5[iVar0] = 0;
																										}
																										else
																										{
																											iVar5[iVar0] = 1;
																										}
																										else
																										{
																											iVar1 = 0;
																											while (iVar1 < 32)
																											{
																												if (!SCRIPTS::_0x72B2E00C9BAC6789(uParam0->f_229[iVar0 /*27*/], iVar1))
																												{
																												}
																												else
																												{
																													iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
																													if (!NETWORK::_0x255A5EF65EDA9167(iVar8))
																													{
																													}
																													else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8))
																													{
																													}
																													else
																													{
																														iVar10 = -1;
																														if (!aggregate.flow_controller.func_51(*uParam0))
																														{
																															iVar10 = 0;
																														}
																														else
																														{
																															iVar9 = 0;
																															while (iVar9 < 7)
																															{
																																if (&(((*Global_1055965)[Global_1273882->f_16 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_3[iVar9] == iVar8)
																																{
																																	iVar10 = iVar9;
																																}
																																iVar9++;
																															}
																														}
																														if (iVar10 != -1)
																														{
																															if (func_147(uParam0, iVar8, iVar0, iVar10))
																															{
																																SCRIPTS::_0xD426E2E3288469D6(uParam0->f_229[iVar0 /*27*/], iVar1);
																															}
																															else
																															{
																																iVar1++;
																																iVar0++;
																																iVar0 = 0;
																																while (iVar0 < 2)
																																{
																																	if (!&iVar5[iVar0])
																																	{
																																		bVar11 = true;
																																	}
																																	iVar0++;
																																}
																																if (!bVar11)
																																{
																																	aggregate.gfh_campworks.func_61(uParam0, 4);
																																}
																																Jump @1784; //curOff = 1354
																																iVar0 = 0;
																																while (iVar0 < 2)
																																{
																																	if (!func_145(uParam0, iVar0))
																																	{
																																	}
																																	else
																																	{
																																		if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
																																		{
																																			switch (func_48())
																																			{
																																				case 2:
																																					Jump @1650; //curOff = 1421
																																					Jump @1431; //curOff = 1424
																																					return false;
																																				}
																																				else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
																																				{
																																					switch (func_48())
																																					{
																																						case 1:
																																							Jump @1650; //curOff = 1474
																																							Jump @1484; //curOff = 1477
																																							return false;
																																						}
																																						iVar1 = 0;
																																						while (iVar1 < 4)
																																						{
																																							if (!func_148(uParam0, iVar0, iVar1, 1))
																																							{
																																							}
																																							else if (((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_2 != &uParam0->f_8[iVar0 /*40*/])
																																							{
																																							}
																																							else if (MISC::_0x375F5870A7B8BEC1(&(((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_2.f_1)))
																																							{
																																							}
																																							else
																																							{
																																								ENTITY::FREEZE_ENTITY_POSITION(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]), false);
																																								ANIMSCENE::SET_ANIM_SCENE_ENTITY(((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_2, &(((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])->f_2.f_1), &((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]), 0);
																																							}
																																							iVar1++;
																																						}
																																					}
																																					iVar0++;
																																				}
																																				if (*uParam0 == 5)
																																				{
																																					aggregate.gfh_campworks.func_61(uParam0, 5);
																																				}
																																				else
																																				{
																																					aggregate.gfh_campworks.func_61(uParam0, 6);
																																				}
																																				Jump @1784; //curOff = 1683
																																				iVar4 = 0;
																																				while (iVar4 <= 5)
																																				{
																																					if (!func_150(uParam0, iVar4))
																																					{
																																					}
																																					else if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_150[iVar4 /*13*/])))
																																					{
																																					}
																																					else
																																					{
																																						ANIMSCENE::SET_ANIM_SCENE_ENTITY(&(uParam0->f_8[0 /*40*/]), &((uParam0->f_150[iVar4 /*13*/])->f_9.f_1), &(uParam0->f_150[iVar4 /*13*/]), 0);
																																					}
																																					iVar4++;
																																				}
																																				aggregate.gfh_campworks.func_61(uParam0, 6);
																																				Jump @1784; //curOff = 1777
																																				return true;
																																			}
																																			return false;
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
																							}
																						}
																					}
																				}
																			}
																			default:
																				break;
																	}
																}

bool func_63(var uParam0)
{
	var uVar0;

	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
		case 6:
			if (PED::IS_PED_ON_MOUNT(Global_1273882->f_8))
			{
				aggregate.bandana.func_26(&uVar0, 2);
				aggregate.bandana.func_26(&uVar0, 256);
				if (func_152(Global_1273882->f_8, &uVar0, 32, 0, 0, 3f, 100, 0, 0))
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
	return true;
}

void func_64(int iParam0)
{
	if (!aggregate.flow_controller.func_50(iParam0))
	{
		return;
	}
	if (Global_1273882->f_16 == &Global_1273882 && (((*Global_1055965)[&Global_1273882 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2 == -1)
	{
		(((*Global_1055965)[&Global_1273882 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_66(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;

	iVar1 = 0;
	if (!func_153(*uParam0, &bVar0, &iVar1))
	{
		return;
	}
	iVar2 = aggregate.mp_intro.func_2031(bVar0, 0, 1, -1, 1);
	if (!func_155(bVar0, iVar2, 1))
	{
		return;
	}
	if (aggregate.mp_intro.func_3061(&(uParam0->f_287), bVar0, iVar1, 1, iVar2, -1))
	{
		Var3.f_7 = -142743235;
		Var3.f_6 = 1;
		aggregate.doc_book.func_254(uParam0->f_287.f_1, Var3);
		MISC::SET_BIT(&(uParam0->f_305), 10);
	}
}

void func_67(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_145(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
			{
				if (func_48() != 1)
				{
				}
				else
				{
					Jump @90; //curOff = 58
					if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
					{
						if (func_48() != 2)
						{
						}
						else if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 1))
						{
						}
						else if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(&(uParam0->f_8[iVar0 /*40*/]), 0))
						{
							func_158(uParam0, iVar0);
							ANIMSCENE::START_ANIM_SCENE(&(uParam0->f_8[iVar0 /*40*/]));
							return;
						}
						else
						{
							bVar1 = true;
							if (MISC::IS_BIT_SET(uParam0->f_305, 15))
							{
								func_79(uParam0, 0);
							}
						}
						iVar0++;
						if (bVar1)
						{
							MISC::SET_BIT(&(uParam0->f_305), 2);
						}
					}
				}
			}
		}
	}
}

void func_68(var uParam0)
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	func_159();
	vVar0 = { func_160(*uParam0) };
	if (func_161(vVar0))
	{
		func_162(vVar0, 0);
	}
}

void func_69(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_145(uParam0, iVar0))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_305, 7))
		{
			if (6 == *uParam0)
			{
				func_163(uParam0, iVar0);
			}
			else
			{
				func_164(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_70(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (!func_153(*uParam0, &uVar0, &iVar1))
	{
		return;
	}
	if (uParam0->f_287.f_1 == -1)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 10))
	{
		return;
	}
	iVar2 = aggregate.fm_mission_controller.func_7554(&(uParam0->f_287));
	switch (iVar2)
	{
		case 1:
		case 5:
			break;
		case 2:
		case 4:
			uParam0->f_287.f_1 = -1;
			break;
		case 3:
			uParam0->f_287.f_1 = -1;
			aggregate.fm_deathmatch_controller.func_445(1);
			break;
	}
}

void func_71(var uParam0)
{
	func_167(uParam0);
	func_168(uParam0);
	func_72(uParam0);
	MISC::SET_BIT(&(uParam0->f_305), 3);
}

void func_72(var uParam0)
{
	int iVar0;

	if (*uParam0 != 5)
	{
		return;
	}
	if (MISC::IS_BIT_SET(uParam0->f_305, 13))
	{
		return;
	}
	if (!aggregate.mp_intro.func_3303(38, &iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_170(aggregate.long_update.func_600(), 1);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
	MISC::SET_BIT(&(uParam0->f_305), 13);
}

bool func_74(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_145(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
			{
				switch (func_48())
				{
					case 2:
						Jump @306; //curOff = 69
						Jump @79; //curOff = 72
						return false;
					}
					else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
					{
						switch (func_48())
						{
							case 1:
								Jump @306; //curOff = 122
								Jump @132; //curOff = 125
								return false;
							}
							if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 1))
							{
							}
							else if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(uParam0->f_8[iVar0 /*40*/]), 0))
							{
								if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
								{
									if (MISC::IS_BIT_SET(uParam0->f_305, 14))
									{
										if (!ENTITY::HAS_ANIM_EVENT_FIRED(&((uParam0->f_229[iVar0 /*27*/])->f_1[0 /*6*/]), MISC::GET_HASH_KEY("NotFinalPlaylist")) && func_174(uParam0, iVar0))
										{
											fVar1 = ANIMSCENE::_0x49F1D143ADE32656(&(uParam0->f_8[iVar0 /*40*/]));
											fVar2 = ANIMSCENE::_GET_ANIM_SCENE_TIME(&(uParam0->f_8[iVar0 /*40*/]));
											fVar3 = (fVar1 - fVar2);
											if (fVar3 < 1f)
											{
												CAM::DO_SCREEN_FADE_OUT(500);
											}
										}
									}
								}
							}
							else
							{
								func_175(uParam0);
								return true;
							}
						}
						iVar0++;
					}
					return false;
				}

bool func_75(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;

	if (MISC::IS_BIT_SET(uParam0->f_305, 12))
	{
		return false;
	}
	if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_311)))
	{
		aggregate.barcustomer_interaction.func_25(&(uParam0->f_311), 0);
		return false;
	}
	else if (aggregate.fme_animal_tagging.func_181(&(uParam0->f_311)) < 5000)
	{
		return false;
	}
	if (aggregate.flow_controller.func_51(*uParam0))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar1])))
			{
			}
			else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1273882->f_15, &(Global_1273882->f_154[iVar1])))
			{
			}
			else
			{
				iVar3 = &Global_1273882->f_154[iVar1];
				if (iVar3 == Global_1273882->f_16 && (((*Global_1055965)[iVar3 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15)
				{
					bVar0 = true;
				}
				if (&((*Global_1055965)[iVar3 /*436*/])->f_39.f_1[*uParam0 /*16*/] == 3 || (((*Global_1055965)[iVar3 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15)
				{
					if ((((*Global_1055965)[iVar3 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_14)
					{
						iVar4++;
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else
	{
		iVar2 = 1;
		bVar0 = (((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15;
	}
	sVar5 = "VOTE_SKIP_CONTEXT";
	if (iVar2 == 1)
	{
		sVar5 = "VOTE_SKIP_CONTEXT_SOLO";
	}
	if (!aggregate.annesburg.func_217(uParam0->f_310))
	{
		uParam0->f_310 = aggregate.binoculars.func_24(sVar5, joaat("INPUT_SKIP_CUTSCENE"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, -2018976333, 0);
		aggregate.fm_mission_controller.func_2066(uParam0->f_310, 6, 1);
		aggregate.binoculars.func_25(uParam0->f_310, 19, 1, 1);
		if (iVar2 > 1)
		{
			aggregate.fm_mission_controller.func_2068(uParam0->f_310, sVar5, iVar4, iVar2, 1);
		}
		if (iVar4 == 0)
		{
			aggregate.binoculars.func_25(uParam0->f_310, 21, 1, 1);
		}
		aggregate.binoculars.func_37(uParam0->f_310, 1, 1, 1);
	}
	else
	{
		if (iVar2 > 1)
		{
			if (bVar0)
			{
				aggregate.fm_mission_controller.func_2068(uParam0->f_310, sVar5, iVar2, iVar2, 1);
			}
			else
			{
				aggregate.fm_mission_controller.func_2068(uParam0->f_310, sVar5, iVar4, iVar2, 1);
			}
		}
		if ((!uParam0->f_309 && iVar4 > 0) && !(((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_14)
		{
			aggregate.annesburg.func_218(&(uParam0->f_310), 1, 1);
			uParam0->f_309 = 1;
		}
		if (aggregate.doc_book.func_50(uParam0->f_310, 1))
		{
			(((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_14 = 1;
			aggregate.binoculars.func_25(uParam0->f_310, 21, 0, 1);
			aggregate.binoculars.func_37(uParam0->f_310, 0, 1, 1);
			if (!aggregate.flow_controller.func_51(*uParam0))
			{
				iVar4 = iVar2;
				bVar0 = true;
			}
		}
	}
	if (iVar4 == iVar2 && !(((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15)
	{
		(((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_15 = 1;
	}
	if (bVar0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			iVar7 = 0;
			while (iVar7 < 2)
			{
				if (ANIMSCENE::_0xCBFC7725DE6CE2E0(&(uParam0->f_8[iVar7 /*40*/]), 0))
				{
					ANIMSCENE::ABORT_ANIM_SCENE(&(uParam0->f_8[iVar7 /*40*/]), true);
					bVar6 = true;
				}
				iVar7++;
			}
		}
	}
	return (bVar0 && bVar6);
}

void func_79(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	else
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
	}
}

void func_80(var uParam0)
{
	(((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1 = -1;
	uParam0->f_307 = -1;
}

bool func_81(var uParam0)
{
	struct<8> Var0;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	bool bVar14;
	int iVar15;
	int iVar16;

	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	if (uParam0->f_307 != -1)
	{
		if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_307)) >= 2)
		{
			return true;
		}
		return false;
	}
	iVar12 = Global_1273882->f_10;
	bVar13 = Global_1273882->f_16 == iVar12;
	if (PED::IS_PED_ON_MOUNT(Global_1273882->f_8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1273882->f_8, 1, 1);
	}
	if (!func_187(*uParam0, &Var0, iVar9, iVar11))
	{
		return true;
	}
	if (!aggregate.flow_controller.func_51(*uParam0))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		iVar11 = 1;
	}
	else
	{
		iVar9 = -1;
	}
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar8])))
		{
		}
		else
		{
			iVar10 = &Global_1273882->f_154[iVar8];
			if (bVar13)
			{
				if (iVar12 != iVar10)
				{
					if ((((*Global_1055965)[iVar12 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1 == -1)
					{
						if (_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[iVar8])))
						{
							if ((((*Global_1055965)[iVar10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1 == iVar9)
							{
								iVar9++;
							}
						}
					}
					if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1273882->f_15, &(Global_1273882->f_154[iVar8])))
					{
					}
					else
					{
						(((*Global_1055965)[iVar12 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_3[iVar11] = &Global_1273882->f_154[iVar8];
						iVar11++;
						Jump @488; //curOff = 339
						if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1273882->f_15, &(Global_1273882->f_154[iVar8])))
						{
						}
						else if (Global_1273882->f_16 == iVar10 && (((*Global_1055965)[iVar10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1 != -1)
						{
							iVar15 = 0;
							while (iVar15 < 7)
							{
								if (&(((*Global_1055965)[iVar10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_3[iVar15] == Global_1273882->f_10)
								{
									iVar9 = (((*Global_1055965)[iVar10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1;
									iVar11 = iVar15;
								}
								else
								{
									iVar15++;
								}
							}
						}
					}
					iVar8++;
					if (bVar13)
					{
						iVar11 = 0;
					}
					if (iVar9 >= 0 && iVar9 <= 2)
					{
						iVar16 = ITEMSET::CREATE_ITEMSET(true);
						while (!bVar14)
						{
							if (!func_187(*uParam0, &Var0, iVar9, iVar11))
							{
								aggregate.fm_mission_controller.func_3434(1, 0);
								aggregate.fm_mission_controller.func_192(Global_1273882->f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
								bVar14 = true;
							}
							else
							{
								if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_314) && PED::_IS_MOUNT_SEAT_FREE(uParam0->f_314, -1)) && PED::_IS_MOUNT_SEAT_FREE(uParam0->f_314, 0))
								{
									if (ENTITY::_0x59B57C4B06531E1E(Var0, 2f, iVar16, 2) == 0)
									{
										ENTITY::SET_ENTITY_COORDS(uParam0->f_314, Var0, true, false, true, true);
										ENTITY::SET_ENTITY_HEADING(uParam0->f_314, Var0.f_6);
									}
								}
								if (ENTITY::_0x59B57C4B06531E1E(Var0.f_3, 2f, iVar16, 2) == 0)
								{
									bVar14 = true;
									ENTITY::SET_ENTITY_COORDS(Global_1273882->f_8, Var0.f_3, true, false, true, true);
									ENTITY::SET_ENTITY_HEADING(Global_1273882->f_8, Var0.f_7);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216 /* Float: 1f */);
									if (iVar9 == 0)
									{
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(Global_1273882->f_10, 1f, 2000, 0f, true, false);
									}
									if (bVar13)
									{
										(((*Global_1055965)[iVar12 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_1 = iVar9;
									}
								}
								else
								{
									aggregate.fm_mission_controller.func_3434(1, 0);
									aggregate.fm_mission_controller.func_192(Global_1273882->f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
									bVar14 = true;
								}
							}
						}
					}
					else if (iVar9 > 2)
					{
						aggregate.fm_mission_controller.func_3434(1, 0);
						aggregate.fm_mission_controller.func_192(Global_1273882->f_17, 0f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 1, 1);
						bVar14 = true;
					}
					if (uParam0->f_307 == -1)
					{
						if (bVar14)
						{
							uParam0->f_307 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
					}
					return false;
				}
			}
		}
	}
}

bool func_84(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = aggregate.emeraldranch.func_131(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_190(iParam0))
	{
		iVar1 = aggregate.emeraldranch.func_132(3, iParam0);
		bVar2 = false;
	}
	else
	{
		iVar1 = aggregate.emeraldranch.func_132(1, iParam0);
		bVar2 = true;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	if (aggregate.flow_controller.func_202(func_192(iParam0)))
	{
		switch (aggregate.flow_controller.func_206(func_192(iParam0), 0))
		{
			case 1:
			default:
				return false;
				return false;
			case 2:
			}
			if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0) && UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
			{
				if (NETWORK::_0xFBE782B3165AC8EC(iVar1))
				{
					return false;
				}
				if (!aggregate.flow_controller.func_202(func_192(iParam0)))
				{
					func_196(iParam0, aggregate.doc_book.func_133(iVar1, 0));
				}
				return false;
			}
			if (!UNLOCK::_UNLOCK_IS_VISIBLE(iVar0) && UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
			{
				if (bVar2)
				{
					if (!NETWORK::_0xFBE782B3165AC8EC(iVar1))
					{
						return true;
					}
				}
				func_197(iParam0);
				func_196(iParam0, -1);
				func_198();
				return true;
			}
			return false;
		}

void func_85(int iParam0, int iParam1)
{
	if (!aggregate.flow_controller.func_50(iParam0))
	{
		return;
	}
	if (!aggregate.emeraldranch.func_72(iParam0))
	{
		(Global_1270337->f_16[iParam0 /*11*/])->f_7 = 0;
		return;
	}
	(Global_1270337->f_16[iParam0 /*11*/])->f_7 = iParam1;
}

void func_86(int iParam0, int iParam1)
{
	if (!aggregate.flow_controller.func_50(iParam0))
	{
		return;
	}
	(Global_1270337->f_94[iParam0 /*5*/])->f_4 = iParam1;
}

void func_87(var uParam0)
{
	int iVar0;

	switch (*uParam0)
	{
		case 3:
			if (uParam0->f_318)
			{
				iVar0 = 847375033; /* GXTEntry: "Approach a Bounty Board ~1b~ to choose a poster and hunt down a bounty target." */
			}
			else
			{
				iVar0 = 936352856; /* GXTEntry: "Approach a Bounty Board ~1b~ to purchase a Bounty Hunter Licence." */
			}
			aggregate.camera_item.func_73(MISC::_CREATE_VAR_STRING(0, iVar0, func_200(2)), 20000, 0, 0, 0, 1);
			break;
	}
}

void func_88(var uParam0)
{
	aggregate.fm_deathmatch_controller.func_445(64);
	switch (*uParam0)
	{
		case 5:
			aggregate.long_update.func_604(1);
			break;
		case 6:
			Global_1275329->f_44.f_1 = 1;
			if (aggregate.medium_update.func_397(PLAYER::PLAYER_ID(), 1) == -1)
			{
				aggregate.binoculars.func_18(877, 0);
			}
			break;
	}
}

bool func_89(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_89[iVar0 /*15*/])->f_1))
		{
		}
		else
		{
			PED::DELETE_PED(&((uParam0->f_89[iVar0 /*15*/])->f_1));
			iVar1++;
		}
		iVar0++;
	}
	PED::_0x7D4E70A67A651C71(iVar1);
	return true;
}

bool func_90(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_145(uParam0, iVar0))
		{
		}
		else if (!ANIMSCENE::_0x25557E324489393C(&(uParam0->f_8[iVar0 /*40*/])))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(&(uParam0->f_8[iVar0 /*40*/]));
		}
		iVar0++;
	}
	return true;
}

void func_91(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])))
			{
			}
			else
			{
				PED::DELETE_PED((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_92(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((uParam0->f_150[iVar0 /*13*/])->f_8)
		{
			if (!aggregate.annesburg.func_121((uParam0->f_150[iVar0 /*13*/])->f_5))
			{
				vVar1 = { (uParam0->f_150[iVar0 /*13*/])->f_5 };
			}
			else
			{
				vVar1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((uParam0->f_8[0 /*40*/])->f_33, (uParam0->f_8[0 /*40*/])->f_36.f_2, (uParam0->f_150[iVar0 /*13*/])->f_2) };
			}
			ENTITY::REMOVE_MODEL_HIDE(vVar1, 1f, (uParam0->f_150[iVar0 /*13*/])->f_1, 0);
		}
		iVar0++;
	}
}

void func_98()
{
	Global_1938998->f_28 = 0;
	Global_1938998->f_28.f_1 = 0;
	Global_1938998->f_28.f_2 = 0;
	Global_1938998->f_28.f_3 = 0;
	Global_1938998->f_28.f_4 = 0;
	Global_1938998->f_28.f_8 = 0;
}

void func_99()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1138889->f_41657.f_1.f_42)
	{
		if (!func_209(&(Global_1138889->f_41657.f_1[iVar0 /*2*/])))
		{
		}
		iVar0++;
	}
	Global_1138889->f_41657.f_1.f_42 = 0;
}

void func_103(int iParam0)
{
	struct<15> Var0;

	if (NETWORK::_0xAADED99A6B268A27() != iParam0)
	{
		Var0 = 1;
		Var0.f_1.f_4 = 10;
		Var0[0 /*15*/] = 15;
		NETWORK::_0x63246A24F5747510(iParam0, &Var0);
	}
}

int func_108()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
	iVar1 = aggregate.gfh_campworks.func_155(iVar0);
	if (iVar1 == 0)
	{
		return 41788943;
	}
	iVar2 = aggregate.gfh_campworks.func_157(0, iVar1, 0, -1);
	if (iVar2 == 0)
	{
		return 41788943;
	}
	iVar3 = aggregate.gfh_campworks.func_158(iVar2);
	if (iVar3 == 0)
	{
		return 41788943;
	}
	return iVar3;
}

bool func_112(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	*uParam2 = { aggregate.flow_controller.func_96() };
	switch (iParam0)
	{
		case 4:
		default:
			return false;
			*uParam1 = { 0f, 0f, 0f };
			vVar0 = { aggregate.flow_controller.func_161(&Global_1273882) };
			switch (vVar0.y)
			{
				case -987049424:
				case -682748:
				case 1538293636:
				case 1581179681:
				default:
					return false;
					*uParam1 = { -319.3981f, 792.6552f, 116.3929f };
					*uParam2 = { 0f, 0f, -60f };
				case -1992167326:
				case -1884014371:
				case -1554232707:
				case -724534761:
				case -215258135:
				case 892234183:
					*uParam1 = { -3677.246f, -2618.845f, -14.8654f };
					*uParam2 = { 0f, 0f, -119.15f };
					break;
				case -1871413878:
				case 1357161730:
				case 1483778247:
					*uParam1 = { 2820.121f, -1310.931f, 45.7346f };
					*uParam2 = { 0f, 0f, -72.1f };
					break;
			}
			return true;
		case 5:
			iVar3 = aggregate.long_update.func_600();
			if (iVar3 == -1)
			{
				return false;
			}
			if (!aggregate.medium_update.func_550(iVar3, uParam1, uParam2))
			{
				return false;
			}
			if (!bParam3)
			{
				return true;
			}
			iVar4 = func_220(1463940690, *uParam1, 5f);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				*uParam1 = { 0f, 0f, 0f };
				*uParam2 = { 0f, 0f, 0f };
				return false;
			}
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iVar4, true, false) };
			*uParam2 = { ENTITY::GET_ENTITY_ROTATION(iVar4, 2) };
			return true;
	}
}

bool func_117(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 0;
	bVar1 = true;
	if (!MISC::IS_BIT_SET(uParam0->f_305, 0))
	{
		iVar2 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (&uParam0->f_89[iVar0 /*15*/] != 0 && STREAMING::IS_MODEL_VALID(&(uParam0->f_89[iVar0 /*15*/])))
			{
				iVar2++;
			}
			iVar0++;
		}
		PED::_0xED9582B3DA8F02B4(iVar2);
		MISC::SET_BIT(&(uParam0->f_305), 0);
		return false;
	}
	else if (!PED::_0x5E420FF293EE5472())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST((uParam0->f_89[iVar0 /*15*/])->f_1))
		{
		}
		else
		{
			if (&uParam0->f_89[iVar0 /*15*/] != 0 && STREAMING::IS_MODEL_VALID(&(uParam0->f_89[iVar0 /*15*/])))
			{
				STREAMING::REQUEST_MODEL(&(uParam0->f_89[iVar0 /*15*/]), false);
				if (!STREAMING::HAS_MODEL_LOADED(&(uParam0->f_89[iVar0 /*15*/])))
				{
					bVar1 = false;
				}
				else
				{
					Jump @217; //curOff = 211
					Jump @1053; //curOff = 214
					(uParam0->f_89[iVar0 /*15*/])->f_1 = PED::CREATE_PED(&(uParam0->f_89[iVar0 /*15*/]), (uParam0->f_89[iVar0 /*15*/])->f_2, (uParam0->f_89[iVar0 /*15*/])->f_5.f_2, false, false, false, false);
					if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_89[iVar0 /*15*/])->f_1) || ENTITY::IS_ENTITY_DEAD((uParam0->f_89[iVar0 /*15*/])->f_1))
					{
						bVar1 = false;
					}
					else
					{
						if ((uParam0->f_89[iVar0 /*15*/])->f_8 > -1 && (uParam0->f_89[iVar0 /*15*/])->f_8 < PED::_0x10C70A515BC03707((uParam0->f_89[iVar0 /*15*/])->f_1))
						{
							PED::_SET_PED_OUTFIT_PRESET((uParam0->f_89[iVar0 /*15*/])->f_1, (uParam0->f_89[iVar0 /*15*/])->f_8, 0);
						}
						else if ((uParam0->f_89[iVar0 /*15*/])->f_8 != -1 && PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL((uParam0->f_89[iVar0 /*15*/])->f_8, &(uParam0->f_89[iVar0 /*15*/])))
						{
							PED::_0x0BFA1BD465CDFEFD((uParam0->f_89[iVar0 /*15*/])->f_1);
							PED::_0x1902C4CFCC5BE57C((uParam0->f_89[iVar0 /*15*/])->f_1, (uParam0->f_89[iVar0 /*15*/])->f_8);
							PED::_0xCC8CA3E88256E58F((uParam0->f_89[iVar0 /*15*/])->f_1, 0, 1, 1, 1, false);
						}
						else if ((uParam0->f_89[iVar0 /*15*/])->f_8 == -1)
						{
							PED::_0x283978A15512B2FE((uParam0->f_89[iVar0 /*15*/])->f_1, 1);
						}
						if ((uParam0->f_89[iVar0 /*15*/])->f_9 != 0)
						{
							WEAPON::_GIVE_WEAPON_TO_PED_2((uParam0->f_89[iVar0 /*15*/])->f_1, (uParam0->f_89[iVar0 /*15*/])->f_9, 1, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
						}
						aggregate.fm_deathmatch_controller.func_1460((uParam0->f_89[iVar0 /*15*/])->f_1, (uParam0->f_89[iVar0 /*15*/])->f_2);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED((uParam0->f_89[iVar0 /*15*/])->f_1, false);
						ENTITY::SET_ENTITY_VISIBLE((uParam0->f_89[iVar0 /*15*/])->f_1, false);
						ENTITY::SET_ENTITY_COLLISION((uParam0->f_89[iVar0 /*15*/])->f_1, false, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((uParam0->f_89[iVar0 /*15*/])->f_1, true);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT((uParam0->f_89[iVar0 /*15*/])->f_1, false);
						PED::SET_PED_CAN_RAGDOLL((uParam0->f_89[iVar0 /*15*/])->f_1, false);
						ENTITY::FREEZE_ENTITY_POSITION((uParam0->f_89[iVar0 /*15*/])->f_1, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 277, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 340, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 137, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 17, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 77, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 77, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 24, false);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 72, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 107, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 150, false);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 47, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 127, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 130, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 315, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 297, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 422, true);
						PED::SET_PED_CONFIG_FLAG((uParam0->f_89[iVar0 /*15*/])->f_1, 148, true);
						PED::_0xAE6004120C18DF97((uParam0->f_89[iVar0 /*15*/])->f_1, 0, false);
						ENTITY::SET_ENTITY_PROOFS((uParam0->f_89[iVar0 /*15*/])->f_1, 127, false);
						func_223(uParam0->f_89[iVar0 /*15*/], 2);
					}
				}
				iVar0++;
				if (bVar1)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_305, 1))
					{
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (&uParam0->f_89[iVar0 /*15*/] != 0 && STREAMING::IS_MODEL_VALID(&(uParam0->f_89[iVar0 /*15*/])))
							{
								if (STREAMING::HAS_MODEL_LOADED(&(uParam0->f_89[iVar0 /*15*/])))
								{
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(&(uParam0->f_89[iVar0 /*15*/]));
								}
							}
							iVar0++;
						}
						MISC::SET_BIT(&(uParam0->f_305), 1);
					}
					return true;
				}
				return false;
			}
		}
	}
}

bool func_118(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_145(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 3))
			{
				switch (func_48())
				{
					case 2:
						Jump @616; //curOff = 75
						Jump @85; //curOff = 78
						return false;
					}
					else if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 4))
					{
						switch (func_48())
						{
							case 1:
								Jump @616; //curOff = 128
								Jump @138; //curOff = 131
								return false;
							}
							if (MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 1))
							{
								Jump @616; //curOff = 156
							}
							else
							{
								iVar1 = 0;
							}
							if (!MISC::_0x375F5870A7B8BEC1((uParam0->f_8[iVar0 /*40*/])->f_11[1 /*3*/]))
							{
								iVar2 = func_224();
							}
							if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 0))
							{
								if (ANIMSCENE::_0x25557E324489393C(&(uParam0->f_8[iVar0 /*40*/])))
								{
								}
								else if (MISC::_0x375F5870A7B8BEC1(&((uParam0->f_8[iVar0 /*40*/])->f_3)))
								{
									MISC::SET_BIT(&((uParam0->f_8[iVar0 /*40*/])->f_1), 1);
								}
								else
								{
									uParam0->f_8[iVar0 /*40*/] = ANIMSCENE::_CREATE_ANIM_SCENE(&((uParam0->f_8[iVar0 /*40*/])->f_3), (uParam0->f_8[iVar0 /*40*/])->f_2, (uParam0->f_8[iVar0 /*40*/])->f_11[iVar2 /*3*/], false, false);
									if (!ANIMSCENE::_0x25557E324489393C(&(uParam0->f_8[iVar0 /*40*/])))
									{
									}
									else
									{
										ANIMSCENE::LOAD_ANIM_SCENE(&(uParam0->f_8[iVar0 /*40*/]));
										MISC::SET_BIT(&((uParam0->f_8[iVar0 /*40*/])->f_1), 0);
										Jump @616; //curOff = 358
										if (!MISC::IS_BIT_SET((uParam0->f_8[iVar0 /*40*/])->f_1, 1))
										{
											if (!ANIMSCENE::_0x25557E324489393C(&(uParam0->f_8[iVar0 /*40*/])))
											{
											}
											else if (!ANIMSCENE::_0x95531A4A20CCE7BC(&(uParam0->f_8[iVar0 /*40*/]), 0))
											{
											}
											else if (!ANIMSCENE::_0x477122B8D05E7968(&(uParam0->f_8[iVar0 /*40*/]), 0, 0))
											{
											}
											else
											{
												if (*uParam0 != 4)
												{
													if (*uParam0 == 5)
													{
														if (aggregate.annesburg.func_121((uParam0->f_8[iVar0 /*40*/])->f_33))
														{
														}
														else
														{
															ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(uParam0->f_8[iVar0 /*40*/]), (uParam0->f_8[iVar0 /*40*/])->f_33, (uParam0->f_8[iVar0 /*40*/])->f_36, 2);
															if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0->f_8[iVar0 /*40*/])->f_11[iVar2 /*3*/]))
															{
																if (!ANIMSCENE::_0x23E33CB9F4A3F547(&(uParam0->f_8[iVar0 /*40*/]), (uParam0->f_8[iVar0 /*40*/])->f_11[iVar2 /*3*/]))
																{
																}
																else
																{
																	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(&(uParam0->f_8[iVar0 /*40*/]), (uParam0->f_8[iVar0 /*40*/])->f_11[iVar2 /*3*/], true);
																	MISC::SET_BIT(&((uParam0->f_8[iVar0 /*40*/])->f_1), 1);
																}
																iVar0++;
																return iVar1;
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
				}

void func_119(var uParam0)
{
	int iVar0;
	char[] cVar1[8];

	if (func_225(*uParam0, &iVar0, &cVar1))
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(&(uParam0->f_8[0 /*40*/]), &cVar1, iVar0, true);
	}
}

void func_123(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, char[4] cParam20, char* sParam21)
{
	func_41(uParam0);
	uParam0->f_284 = aggregate.fme_animal_tagging_offline.func_69(&uParam1, cParam20, sParam21, 0, 1);
}

int func_124()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = -1933804684;
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iVar0))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
					return vVar1.z;
				default:
					break;
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(iVar0);
	}
	return -1577439368;
}

void func_125(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		aggregate.annesburg.func_182(67);
		Global_1099293->f_471 = iParam0;
		Global_1099293->f_472 = iParam1;
	}
	else
	{
		aggregate.annesburg.func_182(67);
	}
}

bool func_131(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;

	if (!func_231(uParam0))
	{
		return uParam0->f_1.f_6;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_297))
	{
		vVar0 = { func_232(uParam0) };
		uParam0->f_297 = VOLUME::_0xB3FB80A32BAE3065(uParam0->f_298, 0f, 0f, 0f, vVar0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_305, 16))
	{
		vVar4 = { VOLUME::_0x3E2A25B2416DD67E(uParam0->f_297) };
		if (aggregate.blackwater.func_175(uParam0->f_298, Global_36) < vVar4.x)
		{
			bVar3 = true;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_1273882->f_8, uParam0->f_297, true, 0))
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (!func_234(uParam0))
		{
			uParam0->f_1.f_6 = 1;
		}
		else
		{
			uParam0->f_1.f_6 = 0;
		}
	}
	else
	{
		uParam0->f_1.f_6 = 0;
	}
	return uParam0->f_1.f_6;
}

bool func_132()
{
	bool bVar0;
	int iVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_1273882->f_8))
	{
		iVar1 = PED::_0xD806CD2A4F2C2996(Global_1273882->f_8);
		bVar0 = true;
	}
	else if (func_235(&iVar1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
		{
			func_236(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)));
		}
		return false;
	}
	return true;
}

int func_133(int iParam0)
{
	if (!aggregate.flow_controller.func_50(iParam0))
	{
		return 0;
	}
	return (Global_1270337->f_16[iParam0 /*11*/])->f_7;
}

int func_134(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return -1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return -1;
	}
	return &(((*Global_1055965)[iParam1 /*436*/])->f_39.f_1[iParam0 /*16*/]);
}

bool func_135(int iParam0)
{
	int iVar0;

	if (!aggregate.flow_controller.func_50(iParam0))
	{
		return false;
	}
	if ((Global_1273882->f_16 < 32 && Global_1273882->f_16 > 0) && (((*Global_1055965)[Global_1273882->f_16 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2 != -1)
	{
		iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - (((*Global_1055965)[Global_1273882->f_16 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_2));
		if (iVar0 >= 30)
		{
			return true;
		}
	}
	return false;
}

void func_136(var uParam0, int iParam1)
{
	if (aggregate.fm_deathmatch_controller.func_2043(255) == 1)
	{
		if (aggregate.hub_offers.func_106(uParam0) == 0 && aggregate.hub_offers.func_106(uParam0) == 0)
		{
			aggregate.net_cutscene.func_122(uParam0, iParam1);
			aggregate.net_cutscene.func_122(uParam0, 1);
		}
	}
}

bool func_137()
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_MOUNT(Global_1273882->f_8);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = AITRANSPORT::_0xFFEC4B0A1A3ED515(iVar0, -1);
		if (iVar1 == Global_1273882->f_8)
		{
			iVar1 = AITRANSPORT::_0xFFEC4B0A1A3ED515(iVar0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::IS_PED_A_PLAYER(iVar1))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) == Global_1273882->f_16)
			{
				return true;
			}
		}
	}
	return false;
}

void func_143(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;

	if (!aggregate.flow_controller.func_51(*uParam0))
	{
		SCRIPTS::_0x31010318BA9897AC(&uVar0, &Global_1273882);
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!func_145(uParam0, iVar1))
			{
			}
			else
			{
				(((*Global_1055965)[&Global_1273882 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_11[iVar1] = uVar0;
			}
			iVar1++;
		}
		return;
	}
	if (Global_1273882->f_16 != &Global_1273882)
	{
		return;
	}
	iVar5 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(Global_1273882->f_16));
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!func_145(uParam0, iVar1))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET((uParam0->f_8[iVar1 /*40*/])->f_1, 3))
			{
				if (func_48() != 1)
				{
				}
				else
				{
					Jump @207; //curOff = 175
					if (MISC::IS_BIT_SET((uParam0->f_8[iVar1 /*40*/])->f_1, 4))
					{
						if (func_48() != 2)
						{
						}
						else
						{
							iVar3 = 0;
							while (iVar3 < 32)
							{
								if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar3])))
								{
								}
								else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(Global_1273882->f_15, &(Global_1273882->f_154[iVar3])))
								{
								}
								else
								{
									if (iVar2 >= 4)
									{
									}
									else
									{
										if (&Global_1273882->f_154[iVar3] != Global_1273882->f_10)
										{
											iVar6 = PLAYER::GET_PLAYER_PED(&(Global_1273882->f_154[iVar3]));
											if (ENTITY::IS_ENTITY_DEAD(iVar6))
											{
											}
											else
											{
												fVar7 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true, false), ENTITY::GET_ENTITY_COORDS(iVar5, true, false));
												fVar8 = func_243(*uParam0, 0);
												if (fVar7 > (fVar8 * fVar8))
												{
												}
												else
												{
													iVar2++;
													SCRIPTS::_0x31010318BA9897AC(&uVar0, &(Global_1273882->f_154[iVar3]));
													(((*Global_1055965)[Global_1273882->f_10 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_3[iVar4] = &Global_1273882->f_154[iVar3];
													iVar4++;
												}
											}
											iVar3++;
											iVar2 = 0;
											(((*Global_1055965)[Global_1273882->f_16 /*436*/])->f_39.f_1[*uParam0 /*16*/])->f_11[iVar1] = uVar0;
											iVar1++;
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

bool func_145(var uParam0, int iParam1)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	return !MISC::_0x375F5870A7B8BEC1(&((uParam0->f_8[iParam1 /*40*/])->f_3));
}

var func_146(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 >= 7 || iParam0 <= 0)
	{
		return uVar0;
	}
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return uVar0;
	}
	if (Global_1273882->f_16 >= 32 || Global_1273882->f_16 < 0)
	{
		return uVar0;
	}
	if (!aggregate.flow_controller.func_51(iParam0))
	{
		uVar0 = &(((*Global_1055965)[&Global_1273882 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_11[iParam1];
	}
	else
	{
		uVar0 = &(((*Global_1055965)[Global_1273882->f_16 /*436*/])->f_39.f_1[iParam0 /*16*/])->f_11[iParam1];
	}
	return uVar0;
}

bool func_147(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam2 >= 2 || iParam2 < 0)
	{
		return false;
	}
	if (iParam3 >= 4 || iParam3 < 0)
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
	iVar1 = PED::CLONE_PED(iVar0, 0f, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, false);
	aggregate.fm_mission_controller.func_6481(iVar0, iVar1);
	ENTITY::SET_ENTITY_COORDS(iVar1, uParam0->f_298, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
	PED::_0x7E8F9949B7AABBF0(iVar1, 1, 1);
	WEAPON::_0xFCCC886EDE3C63EC(iVar1, 2, 1);
	if (MISC::IS_BIT_SET(uParam0->f_305, 17))
	{
		WEAPON::_0x67E21ACC5C0C970C(iVar1, 16, false);
		WEAPON::_0x67E21ACC5C0C970C(iVar1, 9, false);
		WEAPON::_0x67E21ACC5C0C970C(iVar1, 18, false);
		WEAPON::_0x67E21ACC5C0C970C(iVar1, 10, false);
		WEAPON::_0x67E21ACC5C0C970C(iVar1, 7, false);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
	vVar2 = { func_245(*uParam0, iParam3, PED::IS_PED_MALE(iVar1)) };
	(uParam0->f_229[iParam2 /*27*/])->f_1[iParam3 /*6*/] = iVar1;
	((uParam0->f_229[iParam2 /*27*/])->f_1[iParam3 /*6*/])->f_2.f_1 = { vVar2 };
	((uParam0->f_229[iParam2 /*27*/])->f_1[iParam3 /*6*/])->f_2 = &uParam0->f_8[iParam2 /*40*/];
	return true;
}

bool func_148(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	if (iParam2 >= 4 || iParam2 < 0)
	{
		return false;
	}
	if (!bParam3)
	{
		return ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_229[iParam1 /*27*/])->f_1[iParam2 /*6*/]));
	}
	else if (ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_229[iParam1 /*27*/])->f_1[iParam2 /*6*/])))
	{
		return !ENTITY::IS_ENTITY_DEAD(&((uParam0->f_229[iParam1 /*27*/])->f_1[iParam2 /*6*/]));
	}
	return false;
}

bool func_149(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	if (iParam2 >= 4 || iParam2 < 0)
	{
		return false;
	}
	return PED::_0xA0BC8FAED8CFEB3C(&((uParam0->f_229[iParam1 /*27*/])->f_1[iParam2 /*6*/]));
}

bool func_150(var uParam0, int iParam1)
{
	vector3 vVar0;

	if ((uParam0->f_150[iParam1 /*13*/])->f_1 == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_150[iParam1 /*13*/])))
	{
		return true;
	}
	if (!aggregate.annesburg.func_121((uParam0->f_150[iParam1 /*13*/])->f_5))
	{
		vVar0 = { (uParam0->f_150[iParam1 /*13*/])->f_5 };
	}
	else
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS((uParam0->f_8[0 /*40*/])->f_33, (uParam0->f_8[0 /*40*/])->f_36.f_2, (uParam0->f_150[iParam1 /*13*/])->f_2) };
	}
	uParam0->f_150[iParam1 /*13*/] = func_220((uParam0->f_150[iParam1 /*13*/])->f_1, vVar0, 1f);
	if ((uParam0->f_150[iParam1 /*13*/])->f_8)
	{
		ENTITY::CREATE_MODEL_HIDE(vVar0, 1f, (uParam0->f_150[iParam1 /*13*/])->f_1, false);
	}
	return ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_150[iParam1 /*13*/]));
}

bool func_152(int iParam0, var uParam1, bool bParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(*uParam1, 128))
	{
		if (!aggregate.barcustomer_interaction.func_46(iParam0, 1245594896))
		{
			TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_249(iVar2))
			{
				return false;
			}
			if (!aggregate.barcustomer_interaction.func_46(iParam0, 501393341))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (aggregate.fm_race_controller.func_1538(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!aggregate.aberdeenpigfarm.func_175(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((aggregate.aberdeenpigfarm.func_175(bParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_0x4C8B59171957BCF7(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_0xD806CD2A4F2C2996(PED::_0x4C8B59171957BCF7(iParam0)));
			aggregate.bandana.func_26(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, 0, 1);
			*uParam1 = 0;
			return true;
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_249(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!aggregate.aberdeenpigfarm.func_175(bParam2, 2) && PLAYER::_0xB16223CB7DA965F0(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_0xAE637BB8EF017875(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (!aggregate.aberdeenpigfarm.func_175(bParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, 0);
				if (aggregate.aberdeenpigfarm.func_175(bParam2, 16384))
				{
					HUD::_0x8BC7C1F929D07BF3(724769646);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return false;
		}
		if (aggregate.aberdeenpigfarm.func_175(*uParam1, 2336))
		{
			if (!func_249(iVar2))
			{
			}
			if (func_252(iVar2, *uParam1))
			{
				aggregate.bandana.func_26(uParam1, 32);
				aggregate.bandana.func_26(uParam1, 256);
				aggregate.bandana.func_26(uParam1, 2048);
				aggregate.bandana.func_26(uParam1, 512);
				aggregate.bandana.func_26(uParam1, 1024);
				aggregate.bandana.func_26(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (aggregate.aberdeenpigfarm.func_175(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			if (!func_249(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				aggregate.bandana.func_26(uParam1, 64);
			}
		}
		if (aggregate.aberdeenpigfarm.func_175(bParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
		if ((((TASK::IS_PED_SPRINTING(iVar2) && !aggregate.aberdeenpigfarm.func_175(bParam2, 8192)) || (TASK::IS_PED_RUNNING(iVar2) && aggregate.aberdeenpigfarm.func_175(bParam2, 1024))) || aggregate.aberdeenpigfarm.func_175(bParam2, 8)) && !aggregate.aberdeenpigfarm.func_175(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			aggregate.bandana.func_26(uParam1, 32);
		}
		else if (((TASK::IS_PED_RUNNING(iVar2) || (TASK::IS_PED_SPRINTING(iVar2) && aggregate.aberdeenpigfarm.func_175(bParam2, 8192))) && aggregate.aberdeenpigfarm.func_175(bParam2, 4096)) && !aggregate.aberdeenpigfarm.func_175(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			aggregate.bandana.func_26(uParam1, 2048);
			aggregate.bandana.func_26(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1.5f && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1.001f) && aggregate.aberdeenpigfarm.func_175(bParam2, 32)) && !aggregate.aberdeenpigfarm.func_175(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			aggregate.bandana.func_26(uParam1, 256);
			aggregate.bandana.func_26(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			aggregate.bandana.func_26(uParam1, 64);
		}
		else if (!aggregate.aberdeenpigfarm.func_175(bParam2, 1))
		{
			if (!aggregate.aberdeenpigfarm.func_175(bParam2, 256))
			{
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_36.f_2;
				if (aggregate.fm_race_controller.func_1538(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!aggregate.aberdeenpigfarm.func_175(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			aggregate.bandana.func_26(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			aggregate.bandana.func_26(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!aggregate.aberdeenpigfarm.func_175(bParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			aggregate.bandana.func_26(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!aggregate.aberdeenpigfarm.func_175(bParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		aggregate.bandana.func_26(uParam1, 8);
	}
	return false;
}

bool func_153(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 3:
		default:
			*iParam2 = 0;
			return false;
			*uParam1 = 2103384153; /* GXTEntry: "Bounty Hunter License" */
			*iParam2 = 1;
			return true;
		case 4:
			*uParam1 = -428390721; /* GXTEntry: "Butcher Table" */
			*iParam2 = 1;
			return true;
		case 5:
			*uParam1 = -1733092640; /* GXTEntry: "Collector\'s Bag" */
			*iParam2 = 1;
			return true;
		case 6:
			*uParam1 = 1384535894;
			*iParam2 = 1;
			return true;
	}
}

bool func_155(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	bool bVar3;
	var uVar4;
	var uVar5;
	int iVar7;

	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return false;
	}
	if (aggregate.mp_freemode_tutorial.func_861(bParam0, 1) && !aggregate.mp_freemode_tutorial.func_862(bParam0, 1))
	{
		return false;
	}
	if (bParam2 && aggregate.mp_intro.func_2018(bParam0, &iVar0))
	{
		if (aggregate.fme_animal_tagging.func_1626(iVar0, 997808187, 0) && !aggregate.fme_animal_tagging.func_1699(iVar0, 997808187))
		{
			return true;
		}
		else if (aggregate.fme_animal_tagging.func_1626(iVar0, -570078785, 0))
		{
			return aggregate.generic_document_inspection.func_391(iVar0, -570078785, &uVar1);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			bVar3 = aggregate.mp_intro.func_2031(bParam0, bVar3, 1, -1, 1);
		}
		else
		{
			bVar3 = iParam1;
		}
		if (bVar3 == 0)
		{
			return false;
		}
		iVar7 = aggregate.net_cutscene.func_271(bParam0, bVar3, 0, 1, 1);
		if (bVar3 == -570078785)
		{
			return aggregate.fme_animal_tagging.func_1676(iVar7);
		}
		else if (bVar3 == -915411861)
		{
			return aggregate.fme_animal_tagging.func_1400(iVar7);
		}
		else if (bVar3 == 997808187)
		{
			return true;
		}
		else
		{
			return aggregate.mp_freemode_tutorial.func_869(bParam0, 1, bVar3, &uVar5, &uVar4, 0, 0);
		}
	}
	return false;
}

void func_158(var uParam0, int iParam1)
{
	switch (*uParam0)
	{
		case 5:
			if ((uParam0->f_8[iParam1 /*40*/])->f_39 == -1)
			{
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_INT(&(uParam0->f_8[iParam1 /*40*/]), "location_variation", (uParam0->f_8[iParam1 /*40*/])->f_39, false);
			}
			break;
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), "ifTrader", aggregate.generic_document_inspection.func_420(11) > 0, false);
			break;
	}
}

void func_159()
{
	if (!func_283())
	{
		return;
	}
	Global_1197912->f_26 = 0;
}

Vector3 func_160(var uParam0)
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.x = 1;
	vVar0.f_2 = uParam0;
	return vVar0;
}

bool func_161(vector3 vParam0)
{
	int iVar0;

	if (!func_284(vParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_285((Global_1197912->f_2[iVar0 /*5*/])->f_2, vParam0))
		{
		}
		else
		{
			return (Global_1197912->f_2[iVar0 /*5*/])->f_1;
		}
		iVar0++;
	}
	return false;
}

void func_162(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (!func_284(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_285((Global_1197912->f_2[iVar0 /*5*/])->f_2, vParam0))
		{
		}
		else
		{
			if ((Global_1197912->f_2[iVar0 /*5*/])->f_1 != iParam3)
			{
				Global_1197912->f_24 = 1;
			}
			(Global_1197912->f_2[iVar0 /*5*/])->f_1 = iParam3;
		}
		else
		{
			iVar0++;
		}
	}
}

void func_163(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_TIME(&(uParam0->f_8[iParam1 /*40*/]));
	if ((ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), "MOON_INT_P2A1_T01_Shot_1", 0) || ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), "MOON_INT_P2A1_T01_Shot_2", 0)) || (ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), "MOON_INT_P2_T10_Shot_2", 0) && fVar0 > 27.6f))
	{
		if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 7))
		{
			if (!func_286(uParam0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/])->f_4), true, false);
				return;
			}
			MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 7);
		}
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/])->f_4)) || ANIMSCENE::GET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[1 /*7*/])->f_4)))
		{
			return;
		}
		if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 6))
		{
			func_153(*uParam0, &bVar1, &uVar2);
			iVar3 = aggregate.mp_intro.func_2031(bVar1, 0, 1, -1, 1);
			UIAPPS::_CLOSE_ALL_APPS_IMMEDIATE();
			aggregate.mp_intro.func_184();
			aggregate.dynamic_craft_scenario.func_89(3, 1);
			MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 6);
			return;
		}
		if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 8))
		{
			if (func_288(53))
			{
				MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 8);
			}
			return;
		}
		iVar4 = aggregate.medium_update.func_397(PLAYER::GET_PLAYER_INDEX(), 1);
		if (iVar4 != -1)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[1 /*7*/])->f_4), true, false);
			uParam0->f_318 = 1;
		}
		else if (!func_288(53))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/])->f_4), true, false);
			uParam0->f_318 = 0;
		}
	}
	else if (MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 6))
	{
		aggregate.dynamic_craft_scenario.func_12();
		MISC::CLEAR_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 6);
	}
}

void func_164(var uParam0, int iParam1)
{
	var uVar0;
	bool bVar8;
	bool bVar9;
	var uVar10;
	bool bVar11;

	if (iParam1 < 0)
	{
		return;
	}
	if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 7))
	{
		if (!func_286(uParam0))
		{
			if (func_289(*uParam0, &uVar0, &bVar8))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &uVar0, bVar8, false);
				MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 7);
				return;
			}
		}
		else if (func_289(*uParam0, &uVar0, &bVar8))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &uVar0, true, false);
			MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 7);
		}
	}
	if (ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), (uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/], 0) || ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), (uParam0->f_8[iParam1 /*40*/])->f_18[1 /*7*/], 0))
	{
		if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 6))
		{
			func_153(*uParam0, &bVar9, &uVar10);
			bVar11 = aggregate.mp_intro.func_2031(bVar9, 0, 1, -1, 1);
			if (aggregate.fme_animal_tagging.func_1525(bVar9, bVar11))
			{
				uParam0->f_317 = aggregate.fme_animal_tagging.func_1403(bVar9, bVar11, 1, 0, 1, 0);
				if (aggregate.mp_intro.func_2429(bVar9, 773203532 /* GXTEntry: "Gold Bar" */, bVar11, 1, 1) > 0)
				{
					uParam0->f_317 = aggregate.fme_animal_tagging.func_1592(uParam0->f_317);
				}
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/])->f_4), true, false);
				return;
			}
			uParam0->f_315 = aggregate.binoculars.func_24("CUTSCENE_ACTION_PURCHASE", joaat("INPUT_INTERACT_LOCKON_POS"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate.fm_mission_controller.func_2066(uParam0->f_315, 6, 1);
			aggregate.binoculars.func_25(uParam0->f_315, 19, 0, 1);
			if (aggregate.fm_mission_controller.func_6230(bVar11) || aggregate.mp_intro.func_2033(bVar11))
			{
				func_296(uParam0->f_315, "CUTSCENE_ACTION_PURCHASE_OFFER", aggregate.fm_mission_controller.func_1773(bVar9), uParam0->f_317, 1);
			}
			else
			{
				func_296(uParam0->f_315, "CUTSCENE_ACTION_PURCHASE", aggregate.fm_mission_controller.func_1773(bVar9), uParam0->f_317, 1);
			}
			uParam0->f_316 = aggregate.binoculars.func_24("CUTSCENE_ACTION_DONT_PURCHASE", joaat("INPUT_INTERACT_LOCKON_NEG"), 6, 570, uParam0->f_319, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, -2018976333, 0);
			aggregate.fm_mission_controller.func_2066(uParam0->f_316, 6, 1);
			aggregate.binoculars.func_25(uParam0->f_316, 19, 0, 1);
			MISC::SET_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 6);
		}
		if (!MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 6))
		{
			return;
		}
		if (aggregate.doc_book.func_50(uParam0->f_315, 1))
		{
			aggregate.binoculars.func_37(uParam0->f_316, 0, 1, 1);
			aggregate.net_bounty_wagon.func_200(uParam0->f_316, 0, 1);
			aggregate.binoculars.func_37(uParam0->f_315, 0, 1, 1);
			aggregate.net_bounty_wagon.func_200(uParam0->f_315, 0, 1);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[1 /*7*/])->f_4), true, false);
			uParam0->f_318 = 1;
			func_66(uParam0);
			return;
		}
		if (aggregate.doc_book.func_50(uParam0->f_316, 1))
		{
			aggregate.binoculars.func_37(uParam0->f_316, 0, 1, 1);
			aggregate.net_bounty_wagon.func_200(uParam0->f_316, 0, 1);
			aggregate.binoculars.func_37(uParam0->f_315, 0, 1, 1);
			aggregate.net_bounty_wagon.func_200(uParam0->f_315, 0, 1);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(&(uParam0->f_8[iParam1 /*40*/]), &(((uParam0->f_8[iParam1 /*40*/])->f_18[0 /*7*/])->f_4), true, false);
			uParam0->f_318 = 0;
			return;
		}
	}
	else if (MISC::IS_BIT_SET((uParam0->f_8[iParam1 /*40*/])->f_1, 6))
	{
		aggregate.binoculars.func_37(uParam0->f_316, 0, 1, 1);
		aggregate.net_bounty_wagon.func_200(uParam0->f_316, 0, 1);
		aggregate.binoculars.func_37(uParam0->f_315, 0, 1, 1);
		aggregate.net_bounty_wagon.func_200(uParam0->f_315, 0, 1);
		MISC::CLEAR_BIT(&((uParam0->f_8[iParam1 /*40*/])->f_1), 6);
	}
}

void func_167(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/])))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(&((uParam0->f_229[iVar0 /*27*/])->f_1[iVar1 /*6*/]), true);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_168(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam0->f_89[iVar0 /*15*/])->f_1))
		{
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE((uParam0->f_89[iVar0 /*15*/])->f_1, true);
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

void func_170(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate.aberdeenpigfarm.func_168(iParam0, 33554432);
	}
	else
	{
		aggregate.aberdeenpigfarm.func_169(iParam0, 33554432);
	}
}

bool func_174(var uParam0, int iParam1)
{
	if (6 == *uParam0)
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(&(uParam0->f_8[iParam1 /*40*/]), "MOON_INT_P2A1_T01_Shot_2", 0))
		{
			return false;
		}
	}
	return true;
}

void func_175(var uParam0)
{
	int iVar0;

	if (*uParam0 != 5)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_305, 13))
	{
		return;
	}
	if (!aggregate.mp_intro.func_3303(38, &iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_170(aggregate.long_update.func_600(), 0);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
	MISC::CLEAR_BIT(&(uParam0->f_305), 13);
}

bool func_187(int iParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	struct<25> Var4;

	switch (iParam0)
	{
		case 1:
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -873.1006f, -1261.776f, 42.6244f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.2726f, -1253.967f, 42.6373f };
							uParam1->f_6 = 83.2f;
							break;
						case 1:
							uParam1->f_3 = { -875.3077f, -1258.834f, 42.5703f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.0361f, -1251.312f, 42.6475f };
							uParam1->f_6 = 83.2f;
							break;
						case 2:
							uParam1->f_3 = { -870.6182f, -1259.352f, 42.572f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.5291f, -1246.509f, 42.677f };
							uParam1->f_6 = 83.2f;
							break;
						case 3:
							uParam1->f_3 = { -878.0989f, -1256.599f, 42.6036f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.4508f, -1243.889f, 42.6845f };
							uParam1->f_6 = 83.2f;
							break;
						case 4:
							uParam1->f_3 = { -872.9756f, -1257.088f, 42.5735f };
							uParam1->f_7 = 0f;
							*uParam1 = { -890.7613f, -1256.609f, 42.6236f };
							uParam1->f_6 = 83.2f;
							break;
						case 5:
							uParam1->f_3 = { -867.9123f, -1257.62f, 42.5442f };
							uParam1->f_7 = 0f;
							*uParam1 = { -889.1403f, -1240.715f, 42.7038f };
							uParam1->f_6 = 83.2f;
							break;
						case 6:
							uParam1->f_3 = { -872.8755f, -1254.01f, 42.5223f };
							uParam1->f_7 = 0f;
							*uParam1 = { -892.9855f, -1259.29f, 42.5953f };
							uParam1->f_6 = 52.8f;
							break;
					}
					break;
				case 1:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -852.5473f, -1247.14f, 42.3693f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -843.9141f, -1242.206f, 42.6034f };
							uParam1->f_6 = 176.8f;
							break;
						case 1:
							uParam1->f_3 = { -855.9294f, -1243.9f, 42.3176f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -841.25f, -1242.694f, 42.5649f };
							uParam1->f_6 = 176.8f;
							break;
						case 2:
							uParam1->f_3 = { -852.6059f, -1243.872f, 42.439f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -838.6961f, -1242.762f, 42.5183f };
							uParam1->f_6 = 176.8f;
							break;
						case 3:
							uParam1->f_3 = { -848.9722f, -1243.993f, 42.5525f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -835.7775f, -1243.111f, 42.5323f };
							uParam1->f_6 = 176.8f;
							break;
						case 4:
							uParam1->f_3 = { -854.2532f, -1241.536f, 42.393f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -832.4411f, -1242.565f, 42.5731f };
							uParam1->f_6 = 176.8f;
							break;
						case 5:
							uParam1->f_3 = { -850.7334f, -1241.698f, 42.5441f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -826.2964f, -1242.557f, 42.5382f };
							uParam1->f_6 = 176.8f;
							break;
						case 6:
							uParam1->f_3 = { -852.285f, -1239.152f, 42.5256f };
							uParam1->f_7 = -179.6f;
							*uParam1 = { -820.7101f, -1242.816f, 42.5536f };
							uParam1->f_6 = 176.8f;
							break;
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -843.3099f, -1268.237f, 42.6019f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -837.5016f, -1278.386f, 42.553f };
							uParam1->f_6 = 179.6f;
							break;
						case 1:
							uParam1->f_3 = { -843.525f, -1264.899f, 42.6091f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -835.0971f, -1278.267f, 42.5779f };
							uParam1->f_6 = 179.6f;
							break;
						case 2:
							uParam1->f_3 = { -843.2772f, -1272.027f, 42.5937f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.6918f, -1278.378f, 42.5896f };
							uParam1->f_6 = 179.6f;
							break;
						case 3:
							uParam1->f_3 = { -840.6252f, -1266.123f, 42.5251f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -830.1432f, -1278.289f, 42.602f };
							uParam1->f_6 = 179.6f;
							break;
						case 4:
							uParam1->f_3 = { -840.4869f, -1269.868f, 42.4709f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -827.615f, -1278.281f, 42.612f };
							uParam1->f_6 = 179.6f;
							break;
						case 5:
							uParam1->f_3 = { -838.3458f, -1268.142f, 42.5456f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.3187f, -1270.027f, 42.5925f };
							uParam1->f_6 = 266.8f;
							break;
						case 6:
							uParam1->f_3 = { -838.4648f, -1264.728f, 42.5524f };
							uParam1->f_7 = 91.2f;
							*uParam1 = { -832.2508f, -1267.462f, 42.6008f };
							uParam1->f_6 = 266.8f;
							break;
					}
					break;
			}
			return true;
		case 3:
			switch (iParam2)
			{
				case 0:
					uParam1->f_3 = { 1342.391f, -1307.51f, 75.5794f };
					uParam1->f_7 = 67.1828f;
					*uParam1 = { 1339.217f, -1305.165f, 75.5944f };
					uParam1->f_6 = 336.17f;
					break;
				case 1:
					uParam1->f_3 = { 1337.586f, -1307.428f, 75.5462f };
					uParam1->f_7 = 66.7219f;
					*uParam1 = { 1313.53f, -1306.432f, 75.3049f };
					uParam1->f_6 = 133.7325f;
					break;
				case 2:
					uParam1->f_3 = { 1323.949f, -1299.458f, 75.2824f };
					uParam1->f_7 = 45.8223f;
					*uParam1 = { 1320.751f, -1286.52f, 75.348f };
					uParam1->f_6 = 265.4273f;
					break;
			}
			return true;
		case 4:
			vVar0 = { aggregate.flow_controller.func_161(&Global_1273882) };
			switch (vVar0.y)
			{
				case -987049424:
				case -682748:
				case 1538293636:
				case 1581179681:
				default:
					return false;
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { -326.39f, 789.19f, 115.667f };
							uParam1->f_7 = 284.1014f;
							*uParam1 = { -321.1662f, 790.267f, 116.0272f };
							uParam1->f_6 = 11.602f;
							break;
						case 1:
							uParam1->f_3 = { -323.692f, 782.932f, 115.776f };
							uParam1->f_7 = 281.4508f;
							*uParam1 = { -312.8937f, 784.9355f, 116.5868f };
							uParam1->f_6 = -168.4326f;
							break;
						case 2:
							uParam1->f_3 = { -314.569f, 792.093f, 116.573f };
							uParam1->f_7 = 282.0273f;
							*uParam1 = { -303.8615f, 793.8496f, 117.1205f };
							uParam1->f_6 = 11.602f;
							break;
					}
				case -1992167326:
				case -1884014371:
				case -1554232707:
				case -724534761:
				case -215258135:
				case 892234183:
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { -3678.909f, -2616.646f, -15.0037f };
							uParam1->f_7 = 91.0549f;
							*uParam1 = { -3682.761f, -2615.857f, -15.0603f };
							uParam1->f_6 = 173.9262f;
							break;
						case 1:
							uParam1->f_3 = { -3691.773f, -2608.01f, -14.7773f };
							uParam1->f_7 = 86.4678f;
							*uParam1 = { -3695.737f, -2608.751f, -14.7323f };
							uParam1->f_6 = 27.6929f;
							break;
						case 2:
							uParam1->f_3 = { -3689.26f, -2608.184f, -14.9935f };
							uParam1->f_7 = 90.7284f;
							*uParam1 = { -3698.199f, -2608.378f, -14.7322f };
							uParam1->f_6 = 2.1578f;
							break;
					}
					break;
				case -1871413878:
				case 1357161730:
				case 1483778247:
					switch (iParam2)
					{
						case 0:
							uParam1->f_3 = { 2815.196f, -1310.15f, 45.624f };
							uParam1->f_7 = 141.0373f;
							*uParam1 = { 2809.395f, -1316.526f, 45.504f };
							uParam1->f_6 = 310.8568f;
							break;
						case 1:
							uParam1->f_3 = { 2817.729f, -1308.707f, 45.558f };
							uParam1->f_7 = 80.7875f;
							*uParam1 = { 2807.212f, -1303.46f, 45.607f };
							uParam1->f_6 = 126.4258f;
							break;
						case 2:
							uParam1->f_3 = { 2806.232f, -1322.305f, 45.446f };
							uParam1->f_7 = 107.4473f;
							*uParam1 = { 2798.7f, -1312.359f, 45.412f };
							uParam1->f_6 = 127.8044f;
							break;
					}
					break;
			}
			return true;
		case 5:
			if (iParam2 < 0 || iParam2 > 2)
			{
				return false;
			}
			iVar3 = aggregate.long_update.func_600();
			if (iVar3 == -1)
			{
				return false;
			}
			Var4 = 3;
			Var4.f_10 = 3;
			Var4.f_14 = 3;
			Var4.f_24 = 3;
			if (!func_314(iVar3, &Var4))
			{
				return false;
			}
			uParam1->f_3 = { *(Var4[iParam2 /*3*/]) };
			uParam1->f_7 = &Var4.f_10[iParam2];
			*uParam1 = { *(Var4.f_14[iParam2 /*3*/]) };
			uParam1->f_6 = &Var4.f_24[iParam2];
			return true;
		case 6:
			uParam1->f_3 = { 1442.626f, 369.0727f, 88.8836f };
			uParam1->f_7 = 69.9518f;
			return true;
		default:
			break;
	}
	return false;
}

bool func_190(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1273882->f_16 == Global_1273882->f_10)
	{
		return true;
	}
	switch (iParam0)
	{
		case 2:
			iVar1 = 13;
			while (iVar1 <= 15)
			{
				iVar0 = aggregate.flow_controller.func_104(2, iVar1);
				if (iVar0 == 0)
				{
					return false;
				}
				if (!NETWORK::_0xFBE782B3165AC8EC(iVar0))
				{
					return false;
				}
				iVar1++;
			}
			return true;
		default:
			break;
	}
	return true;
}

int func_192(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return -1;
	}
	return Global_1270468[iParam0];
}

void func_196(int iParam0, int iParam1)
{
	if (!aggregate.flow_controller.func_50(iParam0))
	{
		return;
	}
	(*Global_1270468)[iParam0] = iParam1;
}

void func_197(int iParam0)
{
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])) && !func_190(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 2:
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(-413671895, 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(-413671895, 0, 0));
			}
			break;
		case 6:
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(-254133531, 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(-254133531, 0, 0));
			}
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(-2117927593, 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(-2117927593, 0, 0));
			}
			if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(1351073489, 0, 0)))
			{
				PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(1351073489, 0, 0));
			}
			break;
	}
}

void func_198()
{
	Global_1958222 = 0;
}

var func_200(int iParam0)
{
	return &(Global_1103536->f_255.f_5295[iParam0]);
}

bool func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!aggregate.coffee_drinking.func_94(iParam0))
	{
		return false;
	}
	iVar0 = aggregate.coffee_drinking.func_125(iParam0, 1);
	if (!aggregate.coffee_drinking.func_92(&(Global_1138889->f_30603.f_847[iVar0 /*12*/])))
	{
		return true;
	}
	iVar3 = aggregate.coffee_drinking.func_126(&(Global_1138889->f_30603.f_847[iVar0 /*12*/]), 1);
	iVar4 = 0;
	while (iVar4 < (Global_1138889->f_30603[iVar3 /*6*/])->f_5)
	{
		iVar1 = Global_1138889->f_30603[iVar3 /*6*/][iVar4];
		switch (aggregate.coffee_drinking.func_127(iParam0, iVar1))
		{
			case 0:
				aggregate.coffee_drinking.func_128(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1138889->f_30603.f_10924)
				{
					if (&Global_1138889->f_30603.f_8871[iVar5 /*3*/] != iVar1 || (Global_1138889->f_30603.f_8871[iVar5 /*3*/])->f_1 != iParam0)
					{
					}
					else
					{
						aggregate.coffee_drinking.func_128(iVar1, iParam0, iVar4);
						aggregate.coffee_drinking.func_129(Global_1138889->f_30603.f_8871[iVar5 /*3*/]);
						Global_1138889->f_30603.f_10924 = (Global_1138889->f_30603.f_10924 - 1);
						*(Global_1138889->f_30603.f_8871[iVar5 /*3*/]) = { *(Global_1138889->f_30603.f_8871[Global_1138889->f_30603.f_10924 /*3*/]) };
						aggregate.coffee_drinking.func_129(Global_1138889->f_30603.f_8871[Global_1138889->f_30603.f_10924 /*3*/]);
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @554; //curOff = 357
				iVar2 = aggregate.coffee_drinking.func_130(iVar1, 1);
				aggregate.coffee_drinking.func_131(iVar2, -1);
				if ((Global_1138889->f_30603.f_2900[iVar2 /*31*/])->f_29 <= 0)
				{
					aggregate.coffee_drinking.func_132(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1138889->f_30603.f_8870)
					{
						if (&Global_1138889->f_30603.f_8683[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1138889->f_30603.f_8683[iVar6] = -1;
							Global_1138889->f_30603.f_8870 = (Global_1138889->f_30603.f_8870 - 1);
							Global_1138889->f_30603.f_8683[iVar6] = &Global_1138889->f_30603.f_8683[Global_1138889->f_30603.f_8870];
							Global_1138889->f_30603.f_8683[Global_1138889->f_30603.f_8870] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1138889->f_30603.f_847[iVar0 /*12*/] = -1;
			aggregate.coffee_drinking.func_133(Global_1138889->f_30603.f_847[iVar0 /*12*/]);
			return true;
		}

int func_220(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, iVar0, 3);
	iVar4 = 0;
	while (iVar4 <= (iVar5 - 1))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = MISC::_0x18013392501CE5DC(iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (!ENTITY::IS_ENTITY_VISIBLE(iVar2))
		{
		}
		else if (iParam0 != ENTITY::GET_ENTITY_MODEL(iVar2))
		{
		}
		else
		{
			iVar3 = iVar2;
		}
		else
		{
			iVar4++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

void func_223(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	IntToString(&cVar0, uParam0->f_1, 64);
	if (!PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(uParam0->f_10)))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 <= 86)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, uParam0->f_10, aggregate.fm_deathmatch_controller.func_1454(iVar8, 1));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, aggregate.fm_deathmatch_controller.func_1454(iVar8, 1), uParam0->f_10);
		iVar8++;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_1, uParam0->f_10);
}

int func_224()
{
	if ((Global_1273882->f_16 < 0 || Global_1273882->f_16 >= 32) || !NETWORK::_0x255A5EF65EDA9167(&(Global_1273882->f_154[Global_1273882->f_16])))
	{
		return 0;
	}
	if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(&(Global_1273882->f_154[Global_1273882->f_16]))))
	{
		return 0;
	}
	return 1;
}

bool func_225(int iParam0, var uParam1, char* sParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	switch (iParam0)
	{
		case 4:
		default:
			return false;
			StringCopy(sParam2, "local_player_variation", 64);
			vVar0 = { aggregate.flow_controller.func_161(&Global_1273882) };
			switch (vVar0.y)
			{
				case -987049424:
				case -682748:
				case 1538293636:
				case 1581179681:
				default:
					return false;
					*uParam1 = 0;
				case -1992167326:
				case -1884014371:
				case -1554232707:
				case -724534761:
				case -215258135:
				case 892234183:
					*uParam1 = 1;
					break;
				case -1871413878:
				case 1357161730:
				case 1483778247:
					*uParam1 = 2;
					break;
			}
			return true;
		case 5:
			StringCopy(sParam2, "local_player_variation", 64);
			*uParam1 = 0;
			iVar3 = aggregate.long_update.func_600();
			if (iVar3 == -1)
			{
				return true;
			}
			if (!func_338(iVar3, &iVar4))
			{
				return true;
			}
			switch (iVar4)
			{
				case 1253642035:
				default:
					return false;
					*uParam1 = 0;
					return true;
				case -1811487294:
					*uParam1 = 1;
					return true;
				case -1823109923:
					*uParam1 = 2;
					return true;
					return true;
			}
	}
}

bool func_231(var uParam0)
{
	return uParam0->f_306 == 0;
}

Vector3 func_232(var uParam0)
{
	switch (*uParam0)
	{
		case 4:
			return 10f, 10f, 5f;
		case 3:
			return 5f, 5f, 5f;
		default:
			break;
	}
	return 11.8675f, 12.9474f, 8.828214f;
}

bool func_234(var uParam0)
{
	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
			if (func_349())
			{
				return true;
			}
			if (Global_1273874->f_2.f_1 == 1 || aggregate.fme_animal_tagging.func_643())
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_235(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_MOUNT(Global_1273882->f_8);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = PED::_0xD806CD2A4F2C2996(iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
		{
			if (PED::_0x3AA24CCC0D451379(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
			{
				*iParam0 = iVar1;
				return true;
			}
		}
	}
	return false;
}

void func_236(int iParam0)
{
	vector3 vVar0;
	var uVar4;

	vVar0.x = 191;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x31010318BA9897AC(&uVar4, iParam0);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &vVar0, 4, 16, &uVar4);
}

float func_243(int iParam0, bool bParam1)
{
	float fVar0;

	switch (iParam0)
	{
		case 1:
		default:
			fVar0 = 0f;
			break;
			fVar0 = 100f;
			break;
		case 2:
			fVar0 = 100f;
			break;
		case 3:
			fVar0 = 100f;
			break;
		case 4:
			fVar0 = 100f;
			break;
		case 5:
			fVar0 = 100f;
			break;
		case 6:
			fVar0 = 100f;
			break;
	}
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

Vector3 func_245(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "INVALID_HANDLE", 24);
	switch (iParam0)
	{
		case 1:
		default:
			break;
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_m_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_m_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_m_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_f_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_f_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_f_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_f_4", 24);
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_m_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_m_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_m_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_f_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_f_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_f_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_f_4", 24);
						break;
				}
			}
			break;
		case 3:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
		case 4:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
		case 5:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
		case 6:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
	}
	return cVar0;
}

bool func_249(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_0xB676EFDA03DADA52(iParam0, 0) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (aggregate.barcustomer_interaction.func_46(iParam0, 1041577989))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_252(int iParam0, int iParam1)
{
	float fVar0;

	if (!aggregate.barcustomer_interaction.func_46(iParam0, 1041577989))
	{
		return true;
	}
	fVar0 = TASK::_0xA710DC5D25F8B942(iParam0, 1041577989);
	if (aggregate.aberdeenpigfarm.func_175(iParam1, 32))
	{
		if (fVar0 >= 1.85f)
		{
			return true;
		}
		return false;
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (aggregate.aberdeenpigfarm.func_175(iParam1, 2048))
	{
		if (fVar0 >= 1.5f)
		{
			return true;
		}
		return false;
	}
	return true;
}

bool func_279(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, var uParam7, bool bParam8, bool bParam9)
{
	struct<16> Var0;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	var uVar21;
	struct<4> Var26;
	struct<4> Var30;
	struct<4> Var34;
	int iVar38;
	bool bVar39;
	bool bVar40;
	int iVar41;
	int iVar42;

	if (!aggregate.bandana.func_30(bParam1, 0))
	{
		return false;
	}
	if (!aggregate.generic_document_inspection.func_159(iParam0, 0))
	{
		return false;
	}
	if (bParam8 == 0)
	{
		bParam8 = aggregate.mp_intro.func_2031(bParam1, bParam8, 1, -1, 1);
	}
	aggregate.aberdeenpigfarm.func_163(&bParam9, 32);
	aggregate.aberdeenpigfarm.func_163(&bParam9, 64);
	aggregate.aberdeenpigfarm.func_163(&bParam9, 4);
	aggregate.aberdeenpigfarm.func_163(&bParam9, 128);
	aggregate.aberdeenpigfarm.func_163(&bParam9, 2);
	if (iParam6 < 1)
	{
		iParam6 = 1;
	}
	if (!aggregate.net_cutscene.func_403(iParam0, bParam1, Param2, -1591664384, bParam8, iParam6, bParam9, 1))
	{
		return false;
	}
	Var0 = { aggregate.fme_animal_tagging.func_1404(bParam1, Param2, 1084182731, iParam6, 0) };
	Var0.f_13 = bParam8;
	Var0.f_12 = 1248274121;
	*uParam7 = { Var0 };
	if (!aggregate.generic_document_inspection.func_392(iParam0, joaat("use")))
	{
		return false;
	}
	bVar16 = false;
	bVar17 = false;
	bVar18 = Global_1915170->f_19742.f_49;
	iVar19 = Global_1915170->f_19742.f_50;
	iVar41 = 0;
	while (iVar41 < 5)
	{
		if (!aggregate.bandana.func_30(&(Global_1051387->f_46[iVar41]), 0))
		{
		}
		else if (!aggregate.net_camp_manager.func_411(&(Global_1051387->f_46[iVar41]), bVar18, &iVar20, &Var30, &uVar21, 1, iVar19))
		{
		}
		else
		{
			iVar38 = aggregate.bandana.func_58(&(Global_1051387->f_46[iVar41]));
			Var26 = { aggregate.bandana.func_59(&(Global_1051387->f_46[iVar41]), Var30, iVar20, 0) };
			switch (iVar38)
			{
				case -1013984273:
				case 658570475:
					if (!aggregate.bandana.func_62(&(Global_1051387->f_46[iVar41]), &Var30, iVar20, 0, 0))
					{
						if (!&Global_1051387->f_46.f_6[iVar41])
						{
						}
						else if (aggregate.mp_intro.func_3044(&(Global_1051387->f_46[iVar41])))
						{
						}
						else
						{
							bVar40 = bParam8;
							if (aggregate.fme_animal_tagging.func_1525(&(Global_1051387->f_46[iVar41]), 997808187))
							{
								bVar40 = 997808187;
							}
							if (!aggregate.mp_intro.func_3152(iParam0, &(Global_1051387->f_46[iVar41]), Var30, iVar20, 1, &Var0, 0, bVar40, 0, bParam9, 0))
							{
								bVar16 = false;
								Jump @628; //curOff = 487
							}
							else
							{
								bVar17 = true;
							}
							bVar16 = true;
							Jump @616; //curOff = 499
							if (!&Global_1051387->f_46.f_6[iVar41])
							{
								bVar39 = aggregate.bandana.func_81(Var30, iVar20, 0, -1);
								if (!aggregate.bandana.func_30(bVar39, 0))
								{
								}
								else
								{
									Var34 = { aggregate.bandana.func_59(bVar39, Var34, iVar20, 0) };
									if (!aggregate.dynamic_craft_scenario.func_292(Var34, 0))
									{
										bVar16 = false;
										Jump @628; //curOff = 579
									}
									else
									{
										bVar16 = true;
									}
									Jump @616; //curOff = 588
									if (!aggregate.dynamic_craft_scenario.func_292(Var26, 1))
									{
										bVar16 = false;
										Jump @628; //curOff = 607
									}
									else
									{
										bVar16 = true;
									}
								}
								iVar41++;
								if (!bVar16)
								{
									aggregate.mp_intro.func_2848(iParam0);
									return false;
								}
								if (bVar17)
								{
									if (!aggregate.generic_document_inspection.func_393(iParam0))
									{
										return false;
									}
									else
									{
										iVar42 = WEAPON::_0x46F032B8DDF46CDE(bVar18);
										if (!MISC::IS_BIT_SET(&(Global_1051387->f_4349[(aggregate.mp_intro.func_3080(iVar42, 1) / 32)]), (aggregate.mp_intro.func_3080(iVar42, 1) % 32)))
										{
											aggregate.aberdeenpigfarm.func_108(aggregate.aberdeenpigfarm.func_107(1137323725, 1914305383), 1);
											MISC::SET_BIT(Global_1051387->f_4349[(aggregate.mp_intro.func_3080(iVar42, 1) / 32)], (aggregate.mp_intro.func_3080(iVar42, 1) % 32));
										}
									}
								}
								return true;
							}
						}
					}
					default:
						break;
			}
		}
	}
}

bool func_283()
{
	return Global_1197912->f_26;
}

bool func_284(vector3 vParam0)
{
	switch (vParam0.x)
	{
		case 0:
		default:
			return false;
			if (vParam0.y == -1)
			{
				return false;
			}
		case 1:
			if (vParam0.z == 0)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_285(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return false;
	}
	switch (vParam0.x)
	{
		case 0:
			if (vParam0.y != vParam3.y)
			{
				return false;
			}
			break;
		case 1:
			if (vParam0.z != vParam3.z)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_286(var uParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	if (!func_153(*uParam0, &bVar0, &iVar1))
	{
		return false;
	}
	return func_155(bVar0, aggregate.mp_intro.func_2031(bVar0, 0, 1, -1, 1), 1);
}

bool func_288(int iParam0)
{
	return iParam0 == Global_1939221->f_1433;
}

bool func_289(int iParam0, char* sParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 3:
		default:
			return false;
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 4:
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 5:
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
	}
}

void func_296(int iParam0, char* sParam1, bool bParam2, char* sParam3, bool bParam4)
{
	int iVar0;
	char* sVar1;

	if (bParam4 && !aggregate.annesburg.func_217(iParam0))
	{
		return;
	}
	iVar0 = aggregate.annesburg.func_253(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	sVar1 = MISC::_CREATE_VAR_STRING(0, bParam2);
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949749)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(10, sParam1, sVar1, sParam3));
}

bool func_314(int iParam0, var uParam1)
{
	struct<4> Var0;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	vector3 vVar10[24];

	Var0 = (Global_1070355->f_26934[47 /*4*/])->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = aggregate.annesburg.func_243(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 < 3)
	{
		vVar5 = { aggregate.flow_controller.func_96() };
		fVar8 = 0f;
		StringCopy(&cVar10, "vPlayerPos", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = 491979052;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
		StringCopy(&cVar10, "fPlayerHead", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = -1023214806;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_FLOAT(&fVar8, &Var0);
		*((*uParam1)[iVar9 /*3*/]) = { vVar5 };
		uParam1->f_10[iVar9] = fVar8;
		vVar5 = { aggregate.flow_controller.func_96() };
		fVar8 = 0f;
		StringCopy(&cVar10, "vHorsePos", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = 491979052;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_VECTOR(&vVar5, &Var0);
		StringCopy(&cVar10, "fHorseHead", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = -1023214806;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_DATAFILE_GET_FLOAT(&fVar8, &Var0);
		*(uParam1->f_14[iVar9 /*3*/]) = { vVar5 };
		uParam1->f_24[iVar9] = fVar8;
		iVar9++;
	}
	return true;
}

bool func_338(int iParam0, int iParam1)
{
	struct<4> Var0;

	Var0 = (Global_1070355->f_26934[47 /*4*/])->f_3;
	Var0.f_2 = -738708473;
	Var0.f_3 = aggregate.annesburg.func_243(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -1407851228;
	Var0.f_3 = MISC::GET_HASH_KEY("sHash");
	DATAFILE::_DATAFILE_GET_HASH(iParam1, &Var0);
	return true;
}

bool func_349()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_458(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_458(int iParam0)
{
	if (!func_534(iParam0))
	{
		return false;
	}
	return &(Global_1938932->f_5[iParam0 /*11*/]);
}

bool func_534(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

