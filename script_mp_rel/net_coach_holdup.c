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
	struct<338> Local_17 = { 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 4, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 7, 255, 255, 255, 255, 255, 255, 255, 4 } ;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	struct<52> Local_361[32];
	struct<640> Local_2026 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, -1, 1, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 255;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	func_1(&uScriptParam_0);
	while (!func_2(Local_2026.f_2))
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4(uScriptParam_0);
	aggregate.aberdeenpigfarm.func_46();
}

void func_1(var uParam0)
{
	aggregate.flow_controller.func_7(32, *uParam0);
	aggregate.flow_controller.func_8();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_17, 344, 43);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_17), 344, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_361, 1665, 44);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_361[0 /*52*/]), 1665, "m_clientData");
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	func_11(uParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_12(uParam0);
	}
}

bool func_2(struct<2> Param0)
{
	if (aggregate.aberdeenpigfarm.func_49(0, 0))
	{
		return true;
	}
	else if (aggregate.fme_animal_tagging.func_16(Param0, 1, 0))
	{
		return true;
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return true;
	}
	else if (&Local_361[NETWORK::PARTICIPANT_ID_TO_INT() /*52*/] == 4)
	{
		return true;
	}
	return false;
}

void func_3()
{
	Local_2026.f_634 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_15(&Local_17, &Local_361, &Local_2026);
	func_16(&Local_17, &Local_361, &Local_2026);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_17(&Local_17, &Local_361, &Local_2026);
	}
}

void func_4(var uParam0)
{
	func_18();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_19();
	}
	func_20();
}

void func_11(var uParam0)
{
	int iVar0;

	Local_2026 = *uParam0;
	Local_2026.f_1 = uParam0->f_5;
	Local_2026.f_2 = { uParam0->f_7 };
	Local_2026.f_4.f_1 = aggregate.dynamic_craft_scenario.func_156(Local_2026.f_2);
	Local_2026.f_10 = func_26(func_25(aggregate.flow_controller.func_319(-409129282), Local_2026.f_4.f_1));
	Local_2026.f_10.f_1 = aggregate.flow_controller.func_319(Local_2026.f_10);
	Local_2026.f_550.f_1 = TASK::_0xE1C105E6BBA48270();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Local_2026.f_202.f_30[iVar0] = 255;
		iVar0++;
	}
}

void func_12(var uParam0)
{
	Local_17.f_316 = _NAMESPACE26::_0x901E0DC25080C8B9(uParam0->f_9);
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_316))
	{
		aggregate.fm_deathmatch_controller.func_726(&Local_17, 7);
		return;
	}
	Local_17.f_315 = _NAMESPACE26::_0x149A2751AB66AC02(Local_17.f_316);
}

void func_15(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = aggregate.fme_animal_tagging.func_134(1);
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -885048077:
				func_34(iVar0, uParam0, uParam1, uParam2);
				break;
			case -1315570756:
				func_35(iVar0, uParam0, uParam1, uParam2, bVar2);
				break;
			case -507840394:
				func_36(iVar0, uParam0, uParam1, uParam2);
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case 402722103:
				func_37(iVar0, uParam0, uParam1, uParam2);
				break;
		}
		iVar0++;
	}
}

void func_16(var uParam0, var uParam1, float fParam2)
{
	if (func_38(uParam0, uParam1, fParam2))
	{
		aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 16);
	}
	if (aggregate.bandana.func_20((*uParam1)[Local_2026.f_634 /*52*/]) != 4 && aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 16))
	{
		aggregate.fm_deathmatch_controller.func_726((*uParam1)[Local_2026.f_634 /*52*/], 4);
		if (aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 32) || aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 64))
		{
			func_43(fParam2, uParam1);
		}
	}
	switch (aggregate.bandana.func_20((*uParam1)[Local_2026.f_634 /*52*/]))
	{
		case 0:
			func_44(uParam0, uParam1, fParam2);
			if (aggregate.camera_item.func_12(fParam2) != 8)
			{
				return;
			}
			aggregate.fm_deathmatch_controller.func_726((*uParam1)[Local_2026.f_634 /*52*/], 1);
			break;
		case 1:
			func_46(uParam0, uParam1, fParam2);
			if (!aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 1) || aggregate.bandana.func_20(uParam0) < 3)
			{
				return;
			}
			aggregate.fm_deathmatch_controller.func_726((*uParam1)[Local_2026.f_634 /*52*/], 2);
			break;
		case 2:
			func_48(uParam0, uParam1, fParam2);
			if (aggregate.bandana.func_20(uParam0) != 5)
			{
				return;
			}
			aggregate.fm_deathmatch_controller.func_726((*uParam1)[Local_2026.f_634 /*52*/], 3);
			break;
		case 3:
			func_49(uParam0, uParam1, fParam2);
			break;
		case 4:
			aggregate.fishing_core.func_185(uParam0, uParam1, fParam2);
			break;
	}
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	switch (aggregate.bandana.func_20(uParam0))
	{
		case 0:
			func_51(uParam0, iParam1, bParam2);
			aggregate.fm_deathmatch_controller.func_726(uParam0, 1);
			break;
		case 1:
			if (!func_52())
			{
				return;
			}
			aggregate.fm_deathmatch_controller.func_726(uParam0, 2);
			break;
		case 2:
			func_53(uParam0, iParam1, bParam2);
			if (!func_54(iParam1, 1))
			{
				return;
			}
			if (!aggregate.fishing_core.func_34(uParam0, 1))
			{
				return;
			}
			aggregate.fm_deathmatch_controller.func_726(uParam0, 3);
			break;
		case 3:
			if (!aggregate.fishing_core.func_34(uParam0, 8))
			{
				func_56(uParam0);
			}
			aggregate.fm_deathmatch_controller.func_726(uParam0, 4);
			break;
		case 4:
			func_57(uParam0, iParam1, bParam2);
			if (!aggregate.fishing_core.func_34(uParam0, 2))
			{
				return;
			}
			if (!aggregate.fishing_core.func_34(uParam0, 4))
			{
				return;
			}
			uParam0->f_321 = bParam2->f_10.f_13;
			aggregate.fm_deathmatch_controller.func_726(uParam0, 5);
			break;
		case 5:
			func_58(uParam0, iParam1, bParam2);
			if (!aggregate.fishing_core.func_34(uParam0, 32768))
			{
				if (func_59(&Local_361, 67108864, 0))
				{
					func_60(uParam0);
				}
			}
			if (!func_61(uParam0, iParam1, bParam2))
			{
				if (!aggregate.fishing_core.func_34(&Local_17, 536870912) && func_62())
				{
					aggregate.fme_animal_tagging.func_1147(&Local_17, 536870912);
				}
				return;
			}
			func_64(uParam0, iParam1, bParam2);
			if (Local_17.f_299 != 0 && Local_17.f_299.f_1 < 3)
			{
				return;
			}
			func_65(uParam0);
			if (!func_66(uParam0, bParam2))
			{
				return;
			}
			aggregate.fm_deathmatch_controller.func_726(uParam0, 6);
			break;
		case 6:
			aggregate.fishing_core.func_185(uParam0, iParam1, bParam2);
			break;
		case 7:
			aggregate.fishing_core.func_185(uParam0, iParam1, bParam2);
			break;
	}
}

void func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (aggregate.fme_animal_tagging.func_134(67108864))
	{
		func_69(0);
	}
	func_70();
	func_71();
	func_72(0);
	func_73();
	func_74();
	func_75();
	func_76(0);
	func_77(0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		aggregate.fme_wreckage.func_910(Local_2026.f_189[iVar0], 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_79(iVar1);
		if (aggregate.fme_escaped_convicts.func_738(iVar1, 16) && func_81(iVar1, &iVar2))
		{
			NETWORK::_0xEE5AE9956743BA20(iVar2, false);
		}
		iVar1++;
	}
	func_82(0);
	func_83();
	func_84(0);
	func_85(0);
	func_86(1);
	func_87(0);
	func_88(0, 0);
	if (CAM::DOES_CAM_EXIST(Local_2026.f_559))
	{
		CAM::DESTROY_CAM(Local_2026.f_559, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_2026.f_560))
	{
		CAM::DESTROY_CAM(Local_2026.f_560, false);
	}
	func_89();
	func_90();
	aggregate.annesburg.func_166(Local_2026.f_619);
	aggregate.annesburg.func_166(Local_2026.f_620);
	aggregate.annesburg.func_166(Local_2026.f_625);
	aggregate.annesburg.func_166(Local_2026.f_626);
	aggregate.annesburg.func_166(Local_2026.f_627);
	aggregate.annesburg.func_166(Local_2026.f_627.f_2);
	aggregate.annesburg.func_166(Local_2026.f_627.f_1);
	aggregate.annesburg.func_166(Local_2026.f_627.f_3);
	iVar3 = 0;
	while (iVar3 < 3)
	{
		aggregate.annesburg.func_166(&(Local_2026.f_621[iVar3]));
		if (aggregate.fme_escaped_convicts.func_738(iVar3, 32))
		{
			EVENT::REMOVE_SHOCKING_EVENT((Local_2026.f_29[iVar3 /*5*/])->f_4);
		}
		iVar3++;
	}
	func_93(&(Local_2026.f_548));
	aggregate.net_coach_holdup.func_94(&(Local_2026.f_550), 1, 0);
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_95();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iVar0 /*12*/])->f_5))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(NETWORK::_0xD7F6781A0ABAF6FB((Local_17.f_16[iVar0 /*12*/])->f_5));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_278[iVar1 /*2*/])))
		{
		}
		else if (aggregate.fme_challenges.func_1307(iVar1, 1))
		{
			iVar3 = NETWORK::_0xD08066E00D26C448(&(Local_17.f_278[iVar1 /*2*/]));
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iVar3);
		}
		else
		{
			iVar2 = NETWORK::NET_TO_OBJ(&(Local_17.f_278[iVar1 /*2*/]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
	func_97(&Local_17);
	func_98(&Local_17, &Local_2026);
	func_99(&Local_17, &Local_2026);
	func_100(&Local_2026);
}

void func_20()
{
	if (DATAFILE::_0x7907969497EA92F5(Local_2026.f_4) && DATAFILE::_0x603AC35FD4602C76(Local_2026.f_4))
	{
		DATAFILE::_DATAFILE_UNLOAD(Local_2026.f_4);
	}
	if (HUD::_0xD0976CC34002DB57(func_101()) || HUD::_0x3CF96E16265B7DC8(func_101()))
	{
		HUD::_0xAA03F130A637D923(func_101());
	}
	func_102(&Local_2026);
	func_103();
	if (aggregate.fishing_core.func_34(&Local_17, 524288))
	{
		func_104(&Local_17);
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	func_105(Local_17.f_299);
}

int func_25(int iParam0, var uParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<5> Var7;
	var uVar12;

	if (!aggregate.gfh_campworks.func_368(iParam0, &Var0))
	{
		return 0;
	}
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var7 = { Var0 };
		Var7.f_2 = 1089670230;
		Var7.f_3 = iVar6;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
		{
		}
		else
		{
			Var7.f_2 = 1649401908;
			DATAFILE::_DATAFILE_GET_HASH(&uVar12, &Var7);
			Var7.f_2 = 1196324698;
			Var7.f_3 = uParam1;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var7.f_1), &Var7))
			{
			}
			else
			{
				return uVar12;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 354462382:
			return -19759302;
		case -916626861:
			return -409129282;
		default:
			break;
	}
	return iParam0;
}

void func_34(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<2> Var0;
	var uVar3;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		return;
	}
	if (!func_114(Var0.f_1, uParam1, &uVar3))
	{
		return;
	}
	if (Var0 == PLAYER::PLAYER_PED_ID())
	{
		func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
	}
}

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<25> Var0;
	var uVar31;
	int iVar32;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!func_116(Var0.f_3, bParam4))
	{
		return;
	}
	if (!func_117(Var0.f_1))
	{
		return;
	}
	if (!aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 2) && func_114(Var0, uParam1, &uVar31))
	{
		func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
		return;
	}
	if (func_118(Var0, uParam1, &iVar32))
	{
		if ((Var0.f_3 && !Var0.f_24) && (uParam1->f_16[iVar32 /*12*/])->f_2 == 1095997463)
		{
			func_119(iVar32);
		}
		if ((uParam1->f_16[iVar32 /*12*/])->f_2 != 1566032419 && !aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 2))
		{
			func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
		}
		if ((uParam1->f_16[iVar32 /*12*/])->f_2 == 1095997463)
		{
			if (!aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 262144) && Local_17.f_321 > 1)
			{
				aggregate.fme_animal_tagging.func_1147((*uParam2)[Local_2026.f_634 /*52*/], 262144);
			}
		}
		else if ((uParam1->f_16[iVar32 /*12*/])->f_2 != 1566032419)
		{
			aggregate.fme_animal_tagging.func_1147((*uParam2)[Local_2026.f_634 /*52*/], 524288);
		}
	}
}

void func_36(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 52:
			func_120(iParam0, uParam1, uParam2, uParam3);
			break;
	}
}

void func_37(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<2> Var0;
	var uVar9;

	if (aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 2))
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!func_117(Var0.f_1))
	{
		return;
	}
	if (func_121(Var0, uParam1, &uVar9))
	{
		func_115((*uParam2)[Local_2026.f_634 /*52*/], uParam3);
		return;
	}
}

bool func_38(var uParam0, var uParam1, var uParam2)
{
	if (aggregate.bandana.func_20(uParam0) == 6 || aggregate.bandana.func_20(uParam0) == 7)
	{
		return true;
	}
	return false;
}

void func_43(float fParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!aggregate.fishing_core.func_34((*uParam1)[iVar1 /*52*/], 32) && !aggregate.fishing_core.func_34((*uParam1)[iVar1 /*52*/], 64))
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar1, 0, 1))
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		iVar1++;
	}
	SCRIPTS::_0xFFDDF802279BE128(&(fParam0->f_561), &uVar0, &uVar2);
	aggregate.net_assassination.func_237(uVar0);
}

void func_44(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;

	switch (aggregate.camera_item.func_12(uParam2))
	{
		case 0:
			if ((Local_17.f_315 == -1 && aggregate.bandana.func_20(&Local_17) != 6) && aggregate.bandana.func_20(&Local_17) != 7)
			{
				return;
			}
			if (func_125(Local_17.f_316))
			{
				aggregate.fme_animal_tagging.func_174(2097152);
				if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_17.f_316)
				{
					func_127();
				}
			}
			switch (Local_2026.f_10)
			{
				case -19759302:
					iVar0 = 20;
					break;
				case -409129282:
					iVar0 = 4;
					break;
				default:
					iVar0 = 0;
					break;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (func_128(iVar1))
				{
					func_129(iVar1, 0);
				}
				iVar1++;
			}
			((*uParam1)[Local_2026.f_634 /*52*/])->f_1 = 0;
			func_130(uParam2);
			if (func_131())
			{
				aggregate.fme_animal_tagging.func_174(1);
			}
			aggregate.fm_deathmatch_controller.func_1745(uParam2, 1);
			break;
		case 1:
			if (!aggregate.fme_animal_tagging.func_50(func_134(), &(uParam2->f_4), 600, Local_2026, 0, 0))
			{
				aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 16);
				return;
			}
			if (!aggregate.net_assassination.func_215(func_101(), 30, Local_2026, 0, 0))
			{
				aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 16);
				return;
			}
			func_137(uParam2);
			aggregate.fm_deathmatch_controller.func_1745(uParam2, 2);
			break;
		case 2:
			func_138(uParam2);
			aggregate.fm_deathmatch_controller.func_1745(uParam2, 3);
			break;
		case 3:
			iVar2 = 0;
			while (iVar2 < uParam2->f_10.f_7)
			{
				func_139(iVar2, uParam2);
				iVar2++;
			}
			aggregate.fm_deathmatch_controller.func_1745(uParam2, 4);
			break;
		case 4:
			iVar3 = 0;
			while (iVar3 < uParam2->f_10.f_8)
			{
				aggregate.medium_update.func_483(&Var4);
				if (!func_141(&Local_2026, &Var4, iVar3) || !func_142(Var4))
				{
				}
				else
				{
					func_143(iVar3, uParam2);
					if (&uParam2->f_45[iVar3 /*6*/] == 1095997463)
					{
						uParam2->f_10.f_13++;
					}
					if (aggregate.aberdeenpigfarm.func_175((uParam2->f_45[iVar3 /*6*/])->f_1, 4))
					{
						uParam2->f_10.f_14++;
					}
				}
				iVar3++;
			}
			aggregate.fm_deathmatch_controller.func_1745(uParam2, 5);
			break;
		case 5:
			func_144(uParam2);
			func_145();
			func_146();
			aggregate.fm_deathmatch_controller.func_1745(uParam2, 7);
			break;
		case 6:
			if (DATAFILE::_0x603AC35FD4602C76(uParam2->f_4))
			{
				DATAFILE::_DATAFILE_UNLOAD(uParam2->f_4);
				return;
			}
			aggregate.fm_deathmatch_controller.func_1745(uParam2, 7);
			break;
		case 7:
			func_147(uParam2, uParam0);
			func_148();
			aggregate.fm_deathmatch_controller.func_1745(uParam2, 8);
			break;
		case 8:
			break;
	}
}

void func_46(var uParam0, var uParam1, var uParam2)
{
	if (aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 1))
	{
		return;
	}
	if (!func_149())
	{
		return;
	}
	if (!func_150())
	{
		return;
	}
	aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 1);
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 4);
}

void func_49(var uParam0, var uParam1, float fParam2)
{
	func_151();
	func_152(uParam0, uParam1, fParam2);
	func_153();
	func_154(uParam0, uParam1, fParam2);
	func_155(uParam0, uParam1, fParam2);
	func_156();
	func_157(fParam2, uParam1);
	func_158(fParam2, uParam1, uParam0);
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
	aggregate.ambient_fishing_scenario.func_7();
	func_165(uParam0, uParam1, fParam2);
}

void func_51(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_1 = 0;
}

bool func_52()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;

	iVar0 = func_166();
	iVar1 = aggregate.flow_controller.func_389(iVar0, Local_2026.f_4.f_1);
	if (Local_17.f_337.f_6 >= iVar1 || Local_17.f_337.f_6 >= 4)
	{
		return true;
	}
	iVar6 = Local_17.f_337.f_6;
	vVar2 = { aggregate.flow_controller.func_390(iVar0, Local_2026.f_4.f_1, iVar6) };
	if (!func_169(iVar6, vVar2, 20f, -1743346773, &bVar5))
	{
		if (bVar5)
		{
			aggregate.fme_animal_tagging.func_1147(&Local_17, 2097152);
			aggregate.fme_animal_tagging.func_1147(&Local_17, 524288);
			aggregate.fm_deathmatch_controller.func_726(&Local_17, 7);
			if (!aggregate.fme_animal_tagging.func_134(2097152))
			{
				aggregate.net_assassination.func_245(Local_17.f_316, Local_2026.f_2, 0);
			}
			return false;
		}
	}
	else
	{
		Local_17.f_337.f_6++;
		Local_17.f_337.f_5 = 0;
	}
	return false;
}

void func_53(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<5> Var12;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (aggregate.camera_item.func_12(uParam2) != 8)
	{
		return;
	}
	if (aggregate.fishing_core.func_34(uParam0, 1))
	{
		return;
	}
	if (STREAMING::IS_MODEL_VALID(func_171()) && !aggregate.fme_archery.func_1103(func_171()))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		aggregate.medium_update.func_483(&Var1);
		if (!func_173(&Local_2026, &Var1, iVar0) || !func_142(Var1))
		{
		}
		else
		{
			iVar6 = func_174(uParam2, iVar0);
			if (!STREAMING::IS_MODEL_VALID(iVar6))
			{
			}
			else if (aggregate.fme_archery.func_1103(iVar6))
			{
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar9 = func_175();
	iVar7 = 0;
	while (iVar7 < iVar9)
	{
		aggregate.medium_update.func_483(&Var12);
		if (!func_176(&Var12, iVar7) || !func_142(Var12))
		{
		}
		else if (!aggregate.fme_animal_tagging.func_40(Var12, 1339124518, &iVar8, 0))
		{
		}
		else
		{
			if (!aggregate.fme_condor_egg.func_42(Var12, 873236619, &bVar11, 0) || !bVar11)
			{
				iVar6 = iVar8;
				if (!STREAMING::IS_MODEL_VALID(iVar6))
				{
				}
				else if (aggregate.fme_archery.func_1103(iVar6))
				{
				}
				else
				{
					Jump @314; //curOff = 288
					iVar10 = iVar8;
					PROPSET::_REQUEST_PROPSET_2(iVar10);
					if (PROPSET::_HAS_PROPSET_LOADED_2(iVar10))
					{
					}
					else
					{
						return;
					}
				}
				iVar7++;
				iVar17 = 0;
				while (iVar17 < uParam2->f_10.f_8)
				{
					aggregate.medium_update.func_483(&Var1);
					if (!func_141(&Local_2026, &Var1, iVar7) || !func_142(Var1))
					{
					}
					else
					{
						iVar6 = func_179(uParam2, iVar17);
						if (!STREAMING::IS_MODEL_VALID(iVar6))
						{
							iVar6 = func_180(&(uParam2->f_45[iVar17 /*6*/]));
						}
						if ((aggregate.fme_archery.func_1103(iVar6) && aggregate.fme_archery.func_1103(func_181(&(uParam2->f_45[iVar17 /*6*/])))) && func_183(func_182(&Local_2026, iVar17)))
						{
						}
						else
						{
							return;
						}
					}
					iVar17++;
				}
				if (uParam2->f_10.f_14 > 0)
				{
					if (!aggregate.fme_archery.func_1103(func_184()))
					{
						return;
					}
				}
				iVar18 = func_185();
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar18);
				if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(0) < iVar18)
				{
					aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 16);
					aggregate.fme_animal_tagging.func_1147(&Local_17, 2097152);
					aggregate.fme_animal_tagging.func_1147(&Local_17, 524288);
					aggregate.fm_deathmatch_controller.func_726(&Local_17, 7);
					if (!aggregate.fme_animal_tagging.func_134(2097152))
					{
						aggregate.net_assassination.func_245(Local_17.f_316, Local_2026.f_2, 0);
					}
					return;
				}
				iVar19 = func_186();
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar19);
				if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < iVar19)
				{
					aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 16);
					aggregate.fme_animal_tagging.func_1147(&Local_17, 2097152);
					aggregate.fme_animal_tagging.func_1147(&Local_17, 524288);
					aggregate.fm_deathmatch_controller.func_726(&Local_17, 7);
					if (!aggregate.fme_animal_tagging.func_134(2097152))
					{
						aggregate.net_assassination.func_245(Local_17.f_316, Local_2026.f_2, 0);
					}
					return;
				}
				iVar20 = func_187();
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar20);
				if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) < iVar20)
				{
					aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 16);
					aggregate.fme_animal_tagging.func_1147(&Local_17, 2097152);
					aggregate.fme_animal_tagging.func_1147(&Local_17, 524288);
					aggregate.fm_deathmatch_controller.func_726(&Local_17, 7);
					if (!aggregate.fme_animal_tagging.func_134(2097152))
					{
						aggregate.net_assassination.func_245(Local_17.f_316, Local_2026.f_2, 0);
					}
					return;
				}
				func_188();
				aggregate.fme_animal_tagging.func_1147(uParam0, 1);
			}
		}
	}
}

bool func_54(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175(((*uParam0)[iVar0 /*52*/])->f_1, iParam1))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_56(var uParam0)
{
	uParam0->f_317 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	aggregate.fme_animal_tagging.func_1147(uParam0, 8);
}

void func_57(var uParam0, var uParam1, var uParam2)
{
	if (!func_189())
	{
		return;
	}
	if (!aggregate.fishing_core.func_34(uParam0, 2))
	{
		if (!func_190(uParam0, uParam2))
		{
			return;
		}
		aggregate.fme_animal_tagging.func_1147(uParam0, 2);
	}
	if (aggregate.fishing_core.func_34(uParam0, 4))
	{
		return;
	}
	if (!func_191(uParam0, uParam2))
	{
		return;
	}
	if (!func_192(uParam0))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_1147(uParam0, 4);
}

void func_58(var uParam0, int iParam1, bool bParam2)
{
	func_193(uParam0, iParam1, bParam2);
	func_194(uParam0, iParam1, bParam2);
	func_195(uParam0, iParam1, bParam2);
	func_196(uParam0, iParam1, bParam2);
	func_197();
	func_198(uParam0, iParam1, bParam2);
	aggregate.ambient_fishing_scenario.func_7();
}

bool func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!aggregate.aberdeenpigfarm.func_175(((*iParam0)[iVar0 /*52*/])->f_1, iParam1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (bParam2 && !_NAMESPACE26::_0x81FB74C83C2ED69F(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_60(var uParam0)
{
	if (aggregate.fishing_core.func_34(uParam0, 32768))
	{
		return;
	}
	uParam0->f_319 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	aggregate.fme_animal_tagging.func_1147(uParam0, 32768);
}

bool func_61(var uParam0, int iParam1, bool bParam2)
{
	if (aggregate.fishing_core.func_34(&Local_17, 67108864))
	{
		return true;
	}
	if (aggregate.fishing_core.func_34(&Local_17, 524288))
	{
		return true;
	}
	switch (aggregate.camera_item.func_12(bParam2))
	{
		case -19759302:
			if (aggregate.fishing_core.func_34(uParam0, 4096))
			{
				return true;
			}
			if (aggregate.fishing_core.func_34(uParam0, 1024))
			{
				return true;
			}
			break;
		case -409129282:
			if (aggregate.fishing_core.func_34(uParam0, 16384))
			{
				return true;
			}
			break;
	}
	return func_201(uParam0, bParam2);
}

bool func_62()
{
	int iVar0;
	int iVar1;

	if (aggregate.fishing_core.func_34(&Local_17, 67108864))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(&Local_17, 524288))
	{
		return false;
	}
	if (Local_2026.f_10 == -19759302)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (aggregate.net_camp.func_517(iVar0, &Local_17, 32) || aggregate.net_camp.func_517(iVar0, &Local_17, 67108864))
			{
			}
			else
			{
				return false;
			}
			iVar0++;
		}
	}
	else if (Local_2026.f_10 == -409129282)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!aggregate.net_camp.func_517(iVar1, &Local_17, 128))
			{
			}
			else if ((aggregate.net_camp.func_517(iVar1, &Local_17, 2) || aggregate.net_camp.func_517(iVar1, &Local_17, 16)) || aggregate.net_camp.func_517(iVar1, &Local_17, 4096))
			{
			}
			else
			{
				return false;
			}
			iVar1++;
		}
	}
	return true;
}

void func_64(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (aggregate.fishing_core.func_34(uParam0, 524288))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_1147(uParam0, 524288);
	if (func_201(uParam0, bParam2))
	{
		aggregate.fme_animal_tagging.func_1147(&Local_17, 64);
	}
	iVar0 = func_204(uParam0, bParam2);
	switch (iVar0)
	{
		case 1:
			aggregate.fme_animal_tagging.func_1147(uParam0, 1048576);
			break;
		case 2:
			aggregate.fme_animal_tagging.func_1147(uParam0, 2097152);
			break;
	}
	iVar0 = func_205(uParam0, bParam2);
	switch (iVar0)
	{
		case 1:
			aggregate.fme_animal_tagging.func_1147(uParam0, 4194304);
			break;
		case 2:
			aggregate.fme_animal_tagging.func_1147(uParam0, 8388608);
			break;
	}
}

void func_65(var uParam0)
{
	if (aggregate.fishing_core.func_34(uParam0, 32))
	{
		return;
	}
	uParam0->f_318 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	aggregate.fme_animal_tagging.func_1147(uParam0, 32);
}

bool func_66(var uParam0, bool bParam1)
{
	if (!aggregate.fishing_core.func_34(uParam0, 32))
	{
		return false;
	}
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_318, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 8000;
}

void func_69(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar15;
	struct<2> Var19;
	struct<2> Var32;

	iVar0 = func_206();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_207(iVar1, bParam0);
		iVar1++;
	}
	if (bParam0)
	{
		aggregate.fme_animal_tagging.func_174(67108864);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < Local_2026.f_635)
		{
			func_208();
			iVar2++;
		}
		Local_2026.f_635 = 0;
		bVar3 = (aggregate.fme_animal_tagging.func_134(1) && !aggregate.fme_animal_tagging.func_134(8192));
		func_209(&iVar4, &iVar5);
		if (aggregate.fme_animal_tagging.func_134(8192) && aggregate.fme_animal_tagging.func_134(1))
		{
			iVar7 = PLAYER::PLAYER_ID();
			iVar8 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar7);
			iVar9 = (Local_361[Local_2026.f_634 /*52*/])->f_48;
			if (((_NAMESPACE26::_0xD6F6ACF4392187FB(iVar8) && _NAMESPACE26::_0x0F99F6436528A089(iVar8)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar8))) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar8)))
			{
				iVar10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(_NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar8));
				if ((Local_361[iVar10 /*52*/])->f_48 != -1)
				{
					iVar9 = (Local_361[iVar10 /*52*/])->f_48;
				}
			}
			if (iVar9 != -1)
			{
				iVar6 = aggregate.fme_animal_tagging.func_384(iVar9);
			}
		}
		else
		{
			iVar6 = func_211(&Local_17);
		}
		Var19.f_1 = 11;
		Var32.f_1 = 11;
		func_213(&uVar11, &uVar15, &Var19, &Var32, -1516819610, joaat("pvp"), func_212(255), bVar3, 1, iVar4, iVar5, iVar6, Local_2026.f_2);
		aggregate.fme_animal_tagging.func_174(67108864);
	}
}

void func_70()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			func_215(iVar0);
		}
		iVar0++;
	}
}

void func_71()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar0 /*12*/]));
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1) == 0)
			{
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1));
			}
		}
		iVar0++;
	}
	func_216(Local_2026.f_10.f_16);
	func_216(Local_2026.f_10.f_17);
	func_216(Local_2026.f_10.f_18);
	func_216(Local_2026.f_10.f_15);
}

void func_72(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(16777216) && !bParam0)
	{
		func_217(1);
		aggregate.fme_animal_tagging.func_174(16777216);
	}
	else if (!aggregate.fme_animal_tagging.func_134(16777216) && bParam0)
	{
		func_217(0);
		aggregate.fme_animal_tagging.func_174(16777216);
	}
}

void func_73()
{
	if (!aggregate.fme_animal_tagging.func_134(262144))
	{
		return;
	}
	func_218(Local_2026.f_2, 0);
	if (!func_219(PLAYER::PLAYER_ID()))
	{
		aggregate.fme_animal_tagging.func_174(262144);
	}
}

void func_74()
{
	if (!aggregate.fme_animal_tagging.func_134(524288))
	{
		return;
	}
	func_220(Local_2026.f_2, 0);
	if (!func_221(PLAYER::PLAYER_ID()))
	{
		aggregate.fme_animal_tagging.func_174(524288);
	}
}

void func_75()
{
	if (!aggregate.fme_animal_tagging.func_134(268435456))
	{
		return;
	}
	aggregate.net_assassination.func_553(4);
	aggregate.fme_animal_tagging.func_174(268435456);
}

void func_76(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(32768) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		aggregate.fme_animal_tagging.func_336(1);
		aggregate.fme_animal_tagging.func_174(32768);
	}
	else
	{
		aggregate.fme_animal_tagging.func_336(0);
		aggregate.fme_animal_tagging.func_174(32768);
	}
}

void func_77(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(131072) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		LAW::_0x009CF9A29972C298(454742288);
		aggregate.fme_animal_tagging.func_174(131072);
	}
	else
	{
		LAW::_0x009CF9A29972C298(0);
		aggregate.fme_animal_tagging.func_174(131072);
	}
}

void func_79(int iParam0)
{
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(&(Local_2026.f_202.f_319[iParam0])))
	{
		return;
	}
	HUD::REMOVE_MP_GAMER_TAG(Local_2026.f_202.f_319[iParam0]);
}

bool func_81(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iParam0 /*5*/])))
	{
		return false;
	}
	*uParam1 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iParam0 /*5*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		if (!aggregate.fme_animal_tagging.func_134(4194304))
		{
			aggregate.net_arrowheads.func_79(1, 1);
			aggregate.fme_animal_tagging.func_174(4194304);
		}
	}
	else if (aggregate.fme_animal_tagging.func_134(4194304))
	{
		aggregate.net_arrowheads.func_80(1, 1, 0);
		aggregate.fme_animal_tagging.func_174(4194304);
	}
}

void func_83()
{
	char* sVar0;

	if (!aggregate.fme_animal_tagging.func_134(8388608))
	{
		return;
	}
	sVar0 = func_227();
	CAM::_0x2412216FCC7B4E3E(sVar0);
	aggregate.fme_animal_tagging.func_174(8388608);
}

void func_84(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(1048576) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		aggregate.fme_animal_tagging.func_174(1048576);
		HUD::_0x4CC5F2FC1332577F(-1679307491);
	}
	else
	{
		aggregate.fme_animal_tagging.func_174(1048576);
		HUD::_0x8BC7C1F929D07BF3(-1679307491);
	}
}

void func_85(bool bParam0)
{
	if (!bParam0)
	{
		if (CAM::DOES_CAM_EXIST(Local_2026.f_559))
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_559, false);
		}
		if (CAM::DOES_CAM_EXIST(Local_2026.f_560))
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_560, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		aggregate.fme_animal_tagging.func_174(8);
		return;
	}
	if (CAM::DOES_CAM_EXIST(Local_2026.f_559))
	{
		CAM::SET_CAM_ACTIVE(Local_2026.f_559, true);
	}
	if (CAM::DOES_CAM_EXIST(Local_2026.f_560))
	{
		CAM::SET_CAM_ACTIVE(Local_2026.f_560, true);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	aggregate.fme_animal_tagging.func_174(8);
}

void func_86(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(32) == !bParam0)
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0, 0);
	aggregate.fm_deathmatch_controller.func_240(bParam0);
	if (bParam0)
	{
		aggregate.fme_animal_tagging.func_174(32);
	}
	else
	{
		aggregate.fme_animal_tagging.func_174(32);
	}
}

void func_87(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(64) == bParam0)
	{
		return;
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), bParam0);
	if (bParam0)
	{
		aggregate.fme_animal_tagging.func_174(64);
	}
	else
	{
		aggregate.fme_animal_tagging.func_174(64);
	}
}

void func_88(bool bParam0, int iParam1)
{
	if (aggregate.fme_animal_tagging.func_134(16) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		aggregate.fme_animal_tagging.func_174(16);
		if (CAM::IS_SCREEN_FADING_OUT())
		{
			return;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
	else
	{
		aggregate.fme_animal_tagging.func_174(16);
		if (CAM::IS_SCREEN_FADING_IN())
		{
			return;
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			return;
		}
		CAM::DO_SCREEN_FADE_IN(iParam1);
	}
}

void func_89()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_231(iVar0, 1);
		STREAMING::REMOVE_ANIM_DICT(func_232(iVar1));
		iVar0++;
	}
}

void func_90()
{
	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_334(0);
	aggregate.fme_animal_tagging.func_174(4);
}

void func_93(var uParam0)
{
	if (!func_234(*uParam0))
	{
		return;
	}
	GRAPHICS::DESTROY_TRACKED_POINT(*uParam0);
	*uParam0 = -1;
}

void func_95()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_17.f_337.f_6)
	{
		if (VOLUME::_0xF6A8A652A6B186CD(&(Local_17.f_337[iVar0])))
		{
			VOLUME::_0xFDFECC6EE4491E11(&(Local_17.f_337[iVar0]));
		}
		iVar0++;
	}
}

void func_97(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
			iVar1 = NETWORK::NET_TO_OBJ(&(uParam0->f_257[iVar0 /*5*/]));
			GRAPHICS::_0x7DFB49BCDB73089A(iVar1, false);
			ENTITY::_0x18FF3110CF47115D(iVar1, 2, false);
			ENTITY::_0x18FF3110CF47115D(iVar1, 3, false);
			ENTITY::_0x18FF3110CF47115D(iVar1, 11, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar1);
		}
		iVar0++;
	}
}

void func_98(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam1->f_10.f_7)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar0 /*4*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar0 /*4*/]));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				AITRANSPORT::_0xBA8818212633500A(iVar1, 2, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
}

void func_99(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 == 0)
		{
		}
		else
		{
			func_235(iVar0);
		}
		iVar0++;
	}
}

void func_100(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<5> Var3;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;

	if (!DATAFILE::_0x7907969497EA92F5(Local_2026.f_4) || !DATAFILE::_0x603AC35FD4602C76(Local_2026.f_4))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_10.f_7)
	{
		func_236(func_174(uParam0, iVar0));
		iVar0++;
	}
	func_236(func_171());
	iVar1 = 0;
	while (iVar1 < uParam0->f_10.f_8)
	{
		aggregate.medium_update.func_483(&Var3);
		if (!func_141(&Local_2026, &Var3, iVar1))
		{
		}
		else if (!aggregate.fme_animal_tagging.func_40(Var3, 1339124518, &bVar2, 0))
		{
		}
		else
		{
			bVar9 = bVar2;
			if (!STREAMING::IS_MODEL_VALID(bVar9))
			{
				bVar9 = func_180(&(uParam0->f_45[iVar1 /*6*/]));
			}
			func_236(bVar9);
			func_236(func_181(&(uParam0->f_45[iVar1 /*6*/])));
			if (!aggregate.fme_animal_tagging.func_40(Var3, 1325183772, &bVar2, 0))
			{
			}
			else if (!aggregate.binoculars.func_72(bVar8))
			{
			}
			else
			{
				bVar8 = bVar2;
				func_236(WEAPON::_GET_WEAPONTYPE_MODEL(bVar8));
			}
		}
		iVar1++;
	}
	iVar11 = func_175();
	iVar10 = 0;
	while (iVar10 < iVar11)
	{
		aggregate.medium_update.func_483(&Var12);
		if (!func_176(&Var12, iVar10))
		{
		}
		else if (!aggregate.fme_animal_tagging.func_40(Var12, 1339124518, &bVar2, 0))
		{
		}
		else
		{
			bVar9 = bVar2;
			if (!STREAMING::IS_MODEL_VALID(bVar9))
			{
			}
			else
			{
				func_236(bVar9);
			}
		}
		iVar10++;
	}
	func_236(func_238());
	func_236(func_239());
	if (uParam0->f_10.f_14 > 0)
	{
		func_236(func_184());
	}
}

char* func_101()
{
	return "NCHU";
}

void func_102(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_240(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_241(iVar1);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		func_242(iVar2);
		iVar2++;
	}
	func_243();
	aggregate.fme_escaped_convicts.func_736(&(fParam0->f_202.f_51));
	func_245();
	func_246(fParam0);
	if (aggregate.aberdeenpigfarm.func_165(Local_2026.f_202.f_55))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_2026.f_202.f_55, 0);
		Local_2026.f_202.f_55 = 0;
	}
	aggregate.fme_animal_tagging.func_527(&(fParam0->f_202.f_77), 0, 0);
	aggregate.fme_animal_tagging.func_244(&(Local_2026.f_202.f_62), 1);
}

void func_103()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (aggregate.fme_animal_tagging.func_134(1))
	{
		aggregate.net_assassination.func_146(0);
		aggregate.fishing_core.func_104(0);
		if (!aggregate.fme_animal_tagging.func_134(2))
		{
			func_253(func_252(), 1);
		}
		func_209(&bVar0, &bVar1);
		bVar2 = aggregate.fme_animal_tagging.func_134(8192);
		if (!aggregate.fme_animal_tagging.func_134(134217728) && !aggregate.fishing_core.func_34(&Local_17, 524288))
		{
			func_254(bVar2);
		}
		else if (bVar0 > 0)
		{
			func_255(bVar2, bVar0 != bVar1);
		}
		else
		{
			func_256(bVar2);
		}
		if (aggregate.fme_animal_tagging.func_134(2))
		{
			func_257(Local_2026.f_2, aggregate.fme_animal_tagging.func_134(8192), bVar0, bVar1);
		}
		return;
	}
	(Local_361[Local_2026.f_634 /*52*/])->f_48 = -1;
	func_254(0);
}

void func_104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_OBJ(&(uParam0->f_257[iVar0 /*5*/]));
			TASK::_0xA21AA2F0C2180125(iVar1, 0);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(uParam0->f_257[iVar0 /*5*/])))
			{
			}
			else
			{
				ENTITY::_0x18FF3110CF47115D(iVar1, 2, false);
				ENTITY::_0x18FF3110CF47115D(iVar1, 3, false);
				ENTITY::_0x18FF3110CF47115D(iVar1, 11, false);
			}
		}
		iVar0++;
	}
}

void func_105(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!func_258(2, 255) || func_258(512, 255))
	{
		return;
	}
	func_83();
	func_259();
	if (func_258(1, 255))
	{
		func_85(0);
		func_86(1);
		func_87(0);
		func_84(0);
		func_88(0, 1000);
		func_260(iParam0);
		AUDIO::_0x9428447DED71FC7E("RDRO_Scripted_Cutscene_Scenes");
		func_261();
		NETWORK::_0x4B05B97BA46F419D(1);
	}
	func_262(512);
}

bool func_114(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return false;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return false;
	}
	*uParam2 = 0;
	while (*uParam2 < 3)
	{
		if (&uParam1->f_3[*uParam2 /*4*/] != iVar0)
		{
		}
		else
		{
			return true;
		}
		*uParam2++;
	}
	return false;
}

void func_115(var uParam0, var uParam1)
{
	if (aggregate.fishing_core.func_34(uParam0, 2))
	{
		return;
	}
	func_267(6, uParam1->f_10.f_15, aggregate.fm_deathmatch_controller.func_1424(), 1);
	aggregate.fme_animal_tagging.func_1147(uParam0, 2);
}

bool func_116(bool bParam0, bool bParam1)
{
	if ((!bParam1 && !aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 262144)) && !aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 524288))
	{
		return true;
	}
	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 2) && !bParam0)
	{
		return false;
	}
	return true;
}

bool func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (iParam0 == aggregate.annesburg.func_253(iVar0))
	{
		return true;
	}
	iVar1 = PED::GET_MOUNT(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iParam0 == aggregate.annesburg.func_253(iVar1))
	{
		return true;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		return false;
	}
	iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iParam0 == aggregate.annesburg.func_253(iVar2))
	{
		return true;
	}
	return false;
}

bool func_118(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		return false;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return false;
	}
	iVar1 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		return false;
	}
	*iParam2 = 0;
	while (*iParam2 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[*iParam2 /*12*/])))
		{
		}
		else if (&uParam1->f_16[*iParam2 /*12*/] != iVar1)
		{
			iVar2 = NETWORK::NET_TO_PED(&(uParam1->f_16[*iParam2 /*12*/]));
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && PED::IS_PED_ON_MOUNT(iVar2)) && PED::GET_MOUNT(iVar2) == iVar0)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
		*iParam2++;
	}
	return false;
}

void func_119(int iParam0)
{
	var uVar0;

	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return;
	}
	BOUNTY::_0x188B748861B5BA17(&uVar0, -493957506 /* GXTEntry: "Murder" */, false);
	aggregate.fme_challenges.func_1108(477974086, 1, 0);
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	bool bVar8;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (Local_2026 != Var0.f_5)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 2:
		case 3:
			if (aggregate.camera_item.func_12(uParam3) == -409129282)
			{
				return;
			}
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (aggregate.net_camp.func_517(Var0.f_7, uParam1, 32))
			{
				return;
			}
			if (aggregate.net_camp.func_517(Var0.f_7, uParam1, 2))
			{
				return;
			}
			if (!aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 32) && !aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 64))
			{
				return;
			}
			if (Var0.f_4 == 3)
			{
				aggregate.fme_animal_tagging.func_174(1024);
			}
			else
			{
				aggregate.fme_animal_tagging.func_174(512);
			}
			break;
		case 4:
		case 5:
			if (Var0.f_7 < 0)
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID())
			{
				aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 4194304);
				AUDIO::PLAY_SOUND(aggregate.net_assassination.func_317(), aggregate.fme_animal_tagging.func_683(), false, 0, true, 0);
			}
			if (uParam3->f_10 == -19759302)
			{
				if (Var0.f_7 > 20)
				{
					return;
				}
			}
			else if (uParam3->f_10 == -409129282)
			{
				if (Var0.f_7 > 4)
				{
					return;
				}
			}
			if (Var0.f_6 == 255)
			{
				return;
			}
			if (Local_2026.f_10 == -19759302)
			{
				if (aggregate.fme_challenges.func_1307(Var0.f_7, 8388608) && !aggregate.fme_challenges.func_1307(Var0.f_7, 16777216))
				{
					return;
				}
			}
			else if (Local_2026.f_10 == -409129282)
			{
				if (aggregate.fme_escaped_convicts.func_738(Var0.f_7, 16) && !aggregate.fme_escaped_convicts.func_738(Var0.f_7, 32))
				{
					return;
				}
			}
			if ((aggregate.fme_animal_tagging.func_134(16384) || aggregate.fme_animal_tagging.func_134(4096)) || aggregate.fme_animal_tagging.func_134(8192))
			{
				return;
			}
			if (!aggregate.fme_animal_tagging.func_134(1))
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID() || _NAMESPACE26::_0x3F59FE6F37869576(Var0.f_6, PLAYER::PLAYER_ID()))
			{
				aggregate.fme_animal_tagging.func_174(8192);
			}
			else
			{
				aggregate.fme_animal_tagging.func_174(4096);
			}
			Local_2026.f_202.f_52 = Var0.f_6;
			break;
		case 8:
			if (Var0.f_7 < 0)
			{
				return;
			}
			if (uParam3->f_10 == -19759302)
			{
				if (Var0.f_7 > 20)
				{
					return;
				}
			}
			else if (uParam3->f_10 == -409129282)
			{
				if (Var0.f_7 > 4)
				{
					return;
				}
			}
			if ((Var0.f_6 == 255 || !NETWORK::_0x255A5EF65EDA9167(Var0.f_6)) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_6))
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID() || _NAMESPACE26::_0x3F59FE6F37869576(Var0.f_6, PLAYER::PLAYER_ID()))
			{
				bVar8 = true;
				if (Local_2026.f_10 == -19759302)
				{
					aggregate.net_assassination.func_458(Var0.f_7, 16777216);
				}
				else if (Local_2026.f_10 == -409129282)
				{
					aggregate.fme_hot_property.func_964(Var0.f_7, 32);
				}
			}
			if (Local_2026.f_10 == -19759302)
			{
				aggregate.net_assassination.func_458(Var0.f_7, 8388608);
			}
			else if (Local_2026.f_10 == -409129282)
			{
				aggregate.fme_hot_property.func_964(Var0.f_7, 16);
			}
			if (bVar8)
			{
				return;
			}
			func_129(Var0.f_7, 0);
			if ((aggregate.fme_animal_tagging.func_134(16384) || aggregate.fme_animal_tagging.func_134(4096)) || aggregate.fme_animal_tagging.func_134(8192))
			{
				return;
			}
			aggregate.fme_animal_tagging.func_174(4096);
			Local_2026.f_202.f_52 = Var0.f_6;
			break;
		case 1:
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (aggregate.net_camp.func_517(Var0.f_7, uParam1, 32))
			{
				return;
			}
			if (aggregate.net_camp.func_517(Var0.f_7, uParam1, 2))
			{
				return;
			}
			if (!aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 32) && !aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 64))
			{
				return;
			}
			aggregate.fme_animal_tagging.func_174(2048);
			break;
		case 6:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				return;
			}
			if (aggregate.camera_item.func_12(uParam3) != -409129282)
			{
				return;
			}
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (!aggregate.net_camp.func_517(Var0.f_7, uParam1, 1))
			{
				return;
			}
			if (aggregate.net_camp.func_517(Var0.f_7, uParam1, 2))
			{
				return;
			}
			aggregate.net_coach_holdup.func_275(Var0.f_7, uParam1, 2);
			break;
		case 7:
			if (Var0.f_6 == 255 || Var0.f_6 == PLAYER::PLAYER_ID())
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_6))
			{
				return;
			}
			if ((aggregate.fme_animal_tagging.func_134(16384) || aggregate.fme_animal_tagging.func_134(4096)) || aggregate.fme_animal_tagging.func_134(8192))
			{
				return;
			}
			Local_2026.f_202.f_52 = Var0.f_6;
			aggregate.fme_animal_tagging.func_174(16384);
			break;
	}
}

bool func_121(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	*uParam2 = 0;
	while (*uParam2 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[*uParam2 /*4*/])))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_VEH(&(uParam1->f_3[*uParam2 /*4*/]));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar1) != iVar0)
					{
					}
					else
					{
						return true;
					}
					iVar1++;
				}
			}
		}
		*uParam2++;
	}
	return false;
}

bool func_125(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.flow_controller.func_381(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return aggregate.long_update.func_788(iVar0, 2);
}

void func_127()
{
	aggregate.net_assassination.func_337(512);
}

bool func_128(int iParam0)
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return aggregate.net_camp.func_517(iParam0, &Local_17, 32);
		case -409129282:
			return aggregate.net_camp.func_517(iParam0, &Local_17, 2);
		default:
			break;
	}
	return false;
}

void func_129(int iParam0, bool bParam1)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			func_279(iParam0, bParam1);
			break;
		case -19759302:
			func_280(iParam0, bParam1);
			break;
		default:
			return;
	}
}

void func_130(var uParam0)
{
	func_281("REL_CHU_ALLY_", &(uParam0->f_10.f_17));
	func_281("REL_CHU_ENEMY_", &(uParam0->f_10.f_16));
	func_281("REL_CHU_PRIMARY_", &(uParam0->f_10.f_15));
	func_281("REL_CHU_KIDNAP_", &(uParam0->f_10.f_18));
	func_267(4, uParam0->f_10.f_15, aggregate.fm_deathmatch_controller.func_1424(), 1);
	func_267(2, uParam0->f_10.f_18, aggregate.fm_deathmatch_controller.func_1424(), 1);
	func_267(2, uParam0->f_10.f_15, -767591988, 1);
	func_267(2, uParam0->f_10.f_15, 1986610512, 1);
	func_267(2, uParam0->f_10.f_15, -989642646, 1);
	func_267(2, uParam0->f_10.f_15, 889541022, 1);
	func_267(2, uParam0->f_10.f_15, -319516747, 1);
	func_267(1, uParam0->f_10.f_15, -1976316465, 1);
	func_267(1, uParam0->f_10.f_15, 841021282, 1);
	func_267(2, uParam0->f_10.f_15, 707888648, 1);
	func_267(2, uParam0->f_10.f_17, 707888648, 1);
	func_267(2, uParam0->f_10.f_16, 707888648, 1);
	func_267(2, uParam0->f_10.f_17, aggregate.fm_deathmatch_controller.func_1424(), 1);
	func_267(2, uParam0->f_10.f_16, aggregate.fm_deathmatch_controller.func_1424(), 1);
}

bool func_131()
{
	int iVar0;

	iVar0 = func_282(Local_2026.f_10.f_1, 0);
	if (iVar0 <= 3)
	{
		return true;
	}
	return false;
}

int func_134()
{
	return 1008537084;
}

void func_137(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_283(iVar0, 1);
		func_285(&(uParam0->f_4), iVar1, func_284(iVar1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar2 = func_286(iVar0, 1);
		func_285(&(uParam0->f_4), iVar2, func_287(iVar2));
		iVar0++;
	}
}

void func_138(var uParam0)
{
	struct<5> Var0;
	bool bVar5;

	uParam0->f_10.f_6 = func_288(uParam0);
	uParam0->f_10.f_2 = { func_289(uParam0) };
	uParam0->f_10.f_7 = func_290(uParam0);
	uParam0->f_10.f_8 = func_291(uParam0);
	uParam0->f_10.f_9 = 0;
	uParam0->f_10.f_5 = func_292(1503734359);
	if ((func_293(uParam0, &Var0) && aggregate.fme_condor_egg.func_42(Var0, 1594022734, &bVar5, 0)) && bVar5)
	{
		aggregate.fme_animal_tagging.func_174(256);
	}
	if (func_294())
	{
		aggregate.fme_animal_tagging.func_174(16384);
	}
	if (func_295())
	{
		aggregate.fme_animal_tagging.func_174(65536);
	}
	if (func_296())
	{
		aggregate.fme_animal_tagging.func_174(1048576);
	}
}

void func_139(int iParam0, var uParam1)
{
	(uParam1->f_29[iParam0 /*5*/])->f_1 = { func_297(uParam1, iParam0) };
	if (func_298(uParam1, iParam0))
	{
		aggregate.aberdeenpigfarm.func_106(uParam1->f_29[iParam0 /*5*/], 2);
	}
	if (func_299(uParam1, iParam0))
	{
		aggregate.aberdeenpigfarm.func_106(uParam1->f_29[iParam0 /*5*/], 4);
	}
}

bool func_141(var uParam0, var uParam1, int iParam2)
{
	if (func_293(uParam0, uParam1))
	{
		uParam1->f_2 = -788131562;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_142(struct<5> Param0)
{
	int iVar0;
	int iVar1;

	if (aggregate.fme_supply_train.func_39(Param0, -507939340, &iVar0, 0) && Local_17.f_315 < iVar0)
	{
		return false;
	}
	if (aggregate.fme_supply_train.func_39(Param0, 1146320435, &iVar1, 0) && Local_17.f_315 > iVar1)
	{
		return false;
	}
	return true;
}

void func_143(int iParam0, var uParam1)
{
	struct<5> Var0;

	(uParam1->f_45[iParam0 /*6*/])->f_1 = 0;
	uParam1->f_45[iParam0 /*6*/] = func_301(uParam1, iParam0);
	(uParam1->f_45[iParam0 /*6*/])->f_2 = { func_302(uParam1, iParam0) };
	(uParam1->f_45[iParam0 /*6*/])->f_5 = func_303(uParam1, iParam0);
	if (func_304(uParam1, iParam0))
	{
		aggregate.net_assassination.func_458(iParam0, 1);
	}
	if (&uParam1->f_45[iParam0 /*6*/] == 280775267)
	{
		aggregate.net_assassination.func_458(iParam0, 8);
		uParam1->f_45[iParam0 /*6*/] = 1566032419;
	}
	if (&uParam1->f_45[iParam0 /*6*/] != 1566032419 && aggregate.fme_animal_tagging.func_134(256))
	{
		aggregate.net_assassination.func_458(iParam0, 8192);
	}
	else if (&uParam1->f_45[iParam0 /*6*/] == 824585797 || &uParam1->f_45[iParam0 /*6*/] == joaat("driver"))
	{
		aggregate.net_assassination.func_458(iParam0, 8192);
	}
	if (func_305(iParam0, 1323038251, 0))
	{
		aggregate.net_assassination.func_458(iParam0, 2);
		uParam1->f_10.f_9++;
	}
	if (((func_306(uParam1, iParam0) && uParam1->f_10.f_14 < 4) && func_141(&Local_2026, &Var0, iParam0)) && func_142(Var0))
	{
		aggregate.net_assassination.func_458(iParam0, 4);
	}
	func_307(iParam0, -760151658, 16, 0);
	func_307(iParam0, 587406518, 65536, 0);
	func_307(iParam0, 45657025, 32768, 0);
	func_307(iParam0, -697657725, 33554432, 0);
}

void func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_308(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = func_309(uParam0, iVar1, &bVar2);
		if (!VOLUME::_0x92A78D0BEDB332A3(iVar3))
		{
		}
		else if (bVar2)
		{
			if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_620))
			{
				uParam0->f_620 = VOLUME::_CREATE_VOLUME_AGGREGATE();
				if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_620))
				{
				}
				else
				{
					VOLUME::_0x6E0D3C3F828DA773(uParam0->f_620, iVar3);
					Jump @166; //curOff = 114
					if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_619))
					{
						uParam0->f_619 = VOLUME::_CREATE_VOLUME_AGGREGATE();
						if (!VOLUME::_0x92A78D0BEDB332A3(uParam0->f_619))
						{
						}
						else
						{
							VOLUME::_0x6E0D3C3F828DA773(uParam0->f_619, iVar3);
						}
						iVar1++;
					}
				}
			}
		}
	}
}

void func_145()
{
	vector3 vVar0;

	if (VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
		Local_2026.f_625 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 25f, 25f, 20f, "GHOST_VOL_PRIMARY");
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_620))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_620) };
		Local_2026.f_626 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 25f, 25f, 20f, "GHOST_VOL_SECONDARY");
	}
}

void func_146()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<5> Var6;
	bool bVar11;
	vector3 vVar12;

	fVar0 = 50f;
	fVar1 = 50f;
	fVar2 = 100f;
	fVar3 = 100f;
	iVar4 = func_308(&Local_2026);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		if (!func_310(&Local_2026, &Var6, iVar5))
		{
		}
		else
		{
			bVar11 = false;
			if (aggregate.fme_condor_egg.func_42(Var6, 1419063592, &bVar11, 0) && bVar11)
			{
				aggregate.fme_animal_tagging.func_142(Var6, -880340422, &fVar1, 0);
				aggregate.fme_animal_tagging.func_142(Var6, 902857663, &fVar3, 0);
			}
			else
			{
				aggregate.fme_animal_tagging.func_142(Var6, -880340422, &fVar0, 0);
				aggregate.fme_animal_tagging.func_142(Var6, 902857663, &fVar2, 0);
			}
		}
		iVar5++;
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619))
	{
		vVar12 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
		Local_2026.f_627 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar0, fVar0, fVar0, "AVOID_VOL_PRIMARY");
		Local_2026.f_627.f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar2, fVar2, fVar2, "AVOID_LAW_VOL_PRIMARY");
		POPULATION::_0xB56D41A694E42E86(Local_2026.f_627, 12288, 0, 0, -1, -1, 16);
		POPULATION::_0xB56D41A694E42E86(Local_2026.f_627.f_2, 16384, 0, 0, -1, -1, 16);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_620))
	{
		vVar12 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_620) };
		Local_2026.f_627.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar1, fVar1, fVar1, "AVOID_VOL_SECONDARY");
		Local_2026.f_627.f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar3, fVar3, fVar3, "AVOID_LAW_VOL_SECONDARY");
		POPULATION::_0xB56D41A694E42E86(Local_2026.f_627.f_1, 12288, 0, 0, -1, -1, 16);
		POPULATION::_0xB56D41A694E42E86(Local_2026.f_627.f_3, 16384, 0, 0, -1, -1, 16);
	}
}

void func_147(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar2) != uParam1->f_316)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		iVar1++;
	}
	uParam0->f_561 = uVar0;
	uParam0->f_561.f_52 = { Local_2026.f_2 };
	uParam0->f_561.f_54 = func_312(uParam0);
}

void func_148()
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	float fVar11;
	struct<5> Var12;

	if (!func_293(&Local_2026, &Var1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Var12 = { Var1 };
		if (!func_313(&Var12, 565295571, iVar0, 0))
		{
		}
		else if (!aggregate.fme_animal_tagging.func_40(Var12, -537439784, &iVar7, 0))
		{
		}
		else
		{
			switch (iVar7)
			{
				case joaat("cull"):
					iVar6 = 1;
					break;
				case joaat("flatten"):
					iVar6 = 2;
					break;
				case 331632914:
					iVar6 = 4;
					break;
				case 1152024837:
					iVar6 = 8;
					break;
				case joaat("push"):
					iVar6 = 16;
					break;
				case joaat("decal"):
					iVar6 = 32;
					break;
				default:
					Jump @241; //curOff = 166
					if (!aggregate.fme_animal_tagging.func_143(Var12, 644136394, &vVar8, 0))
					{
					}
					else if (!aggregate.fme_animal_tagging.func_142(Var12, 1357107565, &fVar11, 0))
					{
					}
					else
					{
						Local_2026.f_189[iVar0] = GRAPHICS::_0xFA50F79257745E74(vVar8, fVar11, iVar6, -1, 0);
					}
				}
				iVar0++;
			}
		}

bool func_149()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_231(iVar0, 1);
		STREAMING::REQUEST_ANIM_DICT(func_232(iVar1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_232(iVar1)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_150()
{
	SCRIPTS::REQUEST_SCRIPT("net_entity_brain");
	return SCRIPTS::HAS_SCRIPT_LOADED("net_entity_brain");
}

void func_151()
{
	int iVar0;
	int iVar1;

	func_315(&(Local_2026.f_174.f_6), 100);
	if ((aggregate.fme_animal_tagging.func_134(1) && !aggregate.fme_animal_tagging.func_134(8192)) && aggregate.fme_animal_tagging.func_134(2))
	{
		aggregate.net_coach_holdup.func_316(Local_2026.f_2);
	}
	if (Local_2026.f_174.f_6 != 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iVar1 == iVar0)
		{
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2026.f_618), iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
		{
			NETWORK::_0x5A91BCEF74944E93(PLAYER::INT_TO_PLAYERINDEX(iVar1), 30f);
		}
		iVar1++;
	}
}

void func_152(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar0 = Local_2026.f_174.f_1;
	func_315(&(Local_2026.f_174.f_1), 32);
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (func_317(iVar1))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Local_2026.f_618), iVar0);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Local_2026.f_618), iVar0);
	}
	if (func_318(16384))
	{
		if (Local_2026.f_638 == 0)
		{
			Local_2026.f_638 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else
		{
			(Local_361[Local_2026.f_634 /*52*/])->f_47 = aggregate.fme_animal_tagging.func_384(Local_2026.f_638);
			if ((Local_361[Local_2026.f_634 /*52*/])->f_47 > 45000 && !aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 2))
			{
				aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 2);
			}
		}
	}
	else
	{
		(Local_361[Local_2026.f_634 /*52*/])->f_47 = 0;
		Local_2026.f_638 = 0;
	}
	if (func_319(uParam0, uParam2))
	{
		aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 8);
	}
	else
	{
		aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 8);
	}
	bVar2 = aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 32);
	func_321(Local_2026.f_174.f_3);
	func_322();
	func_323();
	func_324();
	func_325();
	if (aggregate.fme_animal_tagging.func_134(1) && !aggregate.fme_animal_tagging.func_134(2))
	{
		if (func_326())
		{
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 16777216);
		}
		if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 16777216) && func_327())
		{
			func_253(func_252(), 0);
		}
	}
	if (!aggregate.fishing_core.func_34(&Local_17, 16))
	{
		if (func_328(uParam0, uParam2, &iVar3))
		{
			(Local_361[Local_2026.f_634 /*52*/])->f_45 = iVar3;
			if (func_329((Local_17.f_16[iVar3 /*12*/])->f_2))
			{
				if (Local_2026.f_171 != 0)
				{
					Local_2026.f_171.f_1 = (Local_2026.f_171.f_1 + NETWORK::GET_TIME_DIFFERENCE(Local_2026.f_171, NETWORK::GET_NETWORK_TIME_ACCURATE()));
				}
				Local_2026.f_171 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			else
			{
				Local_2026.f_171 = 0;
			}
		}
		else
		{
			((*uParam1)[Local_2026.f_634 /*52*/])->f_45 = -1;
			Local_2026.f_171 = 0;
		}
	}
	else
	{
		((*uParam1)[Local_2026.f_634 /*52*/])->f_45 = -1;
		Local_2026.f_171 = 0;
	}
	if (bVar2)
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_316) || !_NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
		{
			if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 16777216))
			{
				func_103();
				aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 32);
				aggregate.fme_animal_tagging.func_174(1);
				func_43(uParam2, uParam1);
				aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 8388608);
				if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_316) || !_NAMESPACE26::_0x0F99F6436528A089(uParam0->f_316)) || (_NAMESPACE26::_0x149A2751AB66AC02(uParam0->f_316) <= 1 && !_NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID())))
				{
					aggregate.fme_animal_tagging.func_174(2048);
				}
				else if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
				{
					aggregate.fme_animal_tagging.func_174(4096);
				}
				else
				{
					aggregate.fme_animal_tagging.func_174(512);
				}
			}
		}
	}
	else if (((!aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 8388608) && !aggregate.fishing_core.func_34(&Local_17, 536870912)) && !aggregate.fme_animal_tagging.func_134(1)) && !aggregate.fishing_core.func_34(&Local_17, 524288))
	{
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(uParam0->f_316) && _NAMESPACE26::_0x9BE7DCB22D32CCBE(uParam0->f_316, PLAYER::PLAYER_ID()))
		{
			func_330(1);
		}
	}
	func_331();
	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32) && aggregate.annesburg.func_141(Local_2026.f_619, Global_36))
	{
		aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 65536);
		bVar4 = true;
	}
	else
	{
		aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 65536);
	}
	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64) && aggregate.annesburg.func_141(Local_2026.f_620, Global_36))
	{
		aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 131072);
		bVar4 = true;
	}
	else
	{
		aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 131072);
	}
	if ((bVar4 && aggregate.fme_animal_tagging.func_134(1)) && func_333(255))
	{
		func_72(1);
	}
	else
	{
		func_72(0);
	}
	if (aggregate.fme_animal_tagging.func_134(1) && func_333(255))
	{
		aggregate.net_coach_holdup.func_334();
	}
	if (func_335(&iVar5))
	{
		func_336(iVar5);
	}
}

void func_153()
{
	if (Local_2026.f_174.f_7 == 0)
	{
		if (func_337())
		{
			func_82(1);
		}
		else
		{
			func_82(0);
		}
	}
	func_315(&(Local_2026.f_174.f_7), 5);
}

void func_154(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	char cVar7[64];
	vector3 vVar15;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;

	bVar0 = !aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 2);
	iVar1 = uParam2->f_174.f_2;
	func_315(&(uParam2->f_174.f_2), 3);
	iVar3 = PLAYER::PLAYER_PED_ID();
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar1 /*4*/])))
	{
		return;
	}
	iVar2 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar1 /*4*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (!aggregate.fme_escaped_convicts.func_738(iVar1, 8))
	{
		VEHICLE::_0xCBF88256E44D5D39(iVar2, 1);
		aggregate.fme_hot_property.func_964(iVar1, 8);
	}
	if (!aggregate.fme_escaped_convicts.func_738(iVar1, 32) && aggregate.net_camp.func_517(iVar1, &Local_17, 1))
	{
		(Local_2026.f_29[iVar1 /*5*/])->f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1215290486, iVar2, -1082130432 /* Float: -1f */, 90f, 40f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 1, -1, -1);
		aggregate.fme_hot_property.func_964(iVar1, 32);
	}
	if ((!aggregate.fme_escaped_convicts.func_738(iVar1, 64) && aggregate.net_camp.func_517(iVar1, &Local_17, 1)) && aggregate.fme_animal_tagging.func_384((Local_17.f_3[iVar1 /*4*/])->f_2) > 60000)
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
		if (!aggregate.fme_animal_tagging.func_134(1))
		{
		}
		else if (BUILTIN::VDIST(vVar4, Global_36) > 100f)
		{
		}
		aggregate.fme_hot_property.func_964(iVar1, 64);
	}
	if (!aggregate.fme_escaped_convicts.func_738(iVar1, 16))
	{
		StringCopy(&cVar7, "VEH_DEFENSIVE_VOL_", 64);
		StringIntConCat(&cVar7, iVar1, 64);
		vVar15 = { Vector(1f, 1f, 1f) * Vector(20f, 20f, 20f) };
		Local_2026.f_621[iVar1] = VOLUME::_0x10157BC3247FF3BA(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 0f, 0f, 0f, vVar15, aggregate.blackwater.func_268(cVar7));
		PED::_0x7C00CFC48A782DC0(&(Local_2026.f_621[iVar1]), iVar2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_2026.f_621[iVar1])))
		{
			aggregate.fme_hot_property.func_964(iVar1, 16);
		}
	}
	if (bVar0 && PED::IS_PED_IN_VEHICLE(iVar3, iVar2, true))
	{
		func_115((*uParam1)[Local_2026.f_634 /*52*/], uParam2);
	}
	if (!VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
	{
		return;
	}
	if (!VEHICLE::_0xA19447D83294E29F(iVar2, &uVar19, &iVar18))
	{
		return;
	}
	iVar20 = 0;
	while (iVar20 < iVar18)
	{
		iVar21 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar20);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
		{
		}
		else if (PED::IS_PED_DEAD_OR_DYING(iVar21, true))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar21))
		{
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar21, 294, true);
		}
		iVar20++;
	}
}

void func_155(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	func_341(fParam2->f_174, uParam0, uParam1, fParam2);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_342(iVar0);
		func_343(iVar0);
		func_344(iVar0);
		iVar0++;
	}
	func_315(&(fParam2->f_174), fParam2->f_10.f_8);
}

void func_156()
{
	func_345(Local_2026.f_174.f_4);
	func_315(&(Local_2026.f_174.f_4), 4);
}

void func_157(float fParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = fParam0->f_174.f_3;
	if (!aggregate.fme_condor_egg.func_1607(iVar0, 1, 1))
	{
		func_315(&(fParam0->f_174.f_3), 32);
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		func_315(&(fParam0->f_174.f_3), 32);
		return;
	}
	func_267(2, fParam0->f_10.f_18, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	if (aggregate.fishing_core.func_34((*uParam1)[iVar0 /*52*/], 2))
	{
		func_267(6, fParam0->f_10.f_15, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	}
	else
	{
		func_267(4, fParam0->f_10.f_15, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	}
	func_315(&(fParam0->f_174.f_3), 32);
}

void func_158(float fParam0, var uParam1, var uParam2)
{
	bool bVar0;
	var uVar1;

	if (fParam0->f_561.f_54 == joaat("none"))
	{
		return;
	}
	if (!func_346())
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_134(128))
	{
		aggregate.fme_animal_tagging.func_174(128);
	}
	if (aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 32))
	{
		return;
	}
	if (aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 8388608))
	{
		return;
	}
	Local_2026.f_561.f_1 = Local_2026.f_618;
	func_347(fParam0, uParam1, uParam2, fParam0->f_561.f_55);
	if (aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 64))
	{
		if (Local_2026.f_631 == 255)
		{
			return;
		}
		if (!func_348(&(fParam0->f_561), Local_2026.f_632))
		{
			return;
		}
		func_103();
		aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 64);
		aggregate.fme_animal_tagging.func_174(1);
		aggregate.fme_animal_tagging.func_174(8192);
		aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 8388608);
		func_43(fParam0, uParam1);
		if (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) && _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1)
		{
			aggregate.fme_animal_tagging.func_174(1024);
		}
		else
		{
			aggregate.fme_animal_tagging.func_174(512);
		}
		return;
	}
	if (aggregate.fme_animal_tagging.func_563(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (func_350(&(fParam0->f_561), &bVar0, &uVar1, 0))
	{
		func_330(2);
		if (!bVar0)
		{
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 32768);
		}
	}
	else if (func_351(fParam0, uParam1, uParam2))
	{
		func_330(2);
		aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 32768);
	}
}

void func_159()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;

	if (Local_17.f_305 != 5)
	{
		func_93(&(Local_2026.f_548));
	}
	if (Local_17.f_305 != 4)
	{
		Local_2026.f_549 = 0;
	}
	switch (Local_17.f_305)
	{
		case 0:
		case 1:
			return;
		case 3:
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 1024);
			break;
		case 4:
			if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 2048))
			{
				return;
			}
			if (func_352(Local_17.f_305.f_1, &iVar0))
			{
				iVar1 = PED::_0x79443D56C8DF45EE(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					Local_2026.f_550.f_6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar1) };
				}
			}
			if (!aggregate.net_camp_dog.func_156(Local_17.f_305.f_2, &(Local_2026.f_550), &bVar2, 42, 1, 90f, 1101004800 /* Float: 20f */, 80f, 120f, 3f))
			{
				if (!bVar2)
				{
					return;
				}
			}
			else
			{
				Local_2026.f_550.f_3.f_2 = (Local_2026.f_550.f_3.f_2 + 10f);
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_2026.f_550.f_3, &fVar3, 0) && fVar3 != 0f)
				{
					if (!VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619))
					{
						Local_2026.f_550.f_3.f_2 = fVar3;
						(Local_361[Local_2026.f_634 /*52*/])->f_49 = { Local_2026.f_550.f_3 };
						aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 4096);
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_0xF70F00013A62F866(Local_2026.f_619), Local_2026.f_550.f_3, true) > 130f || MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::_0xF70F00013A62F866(Local_2026.f_620), Local_2026.f_550.f_3, true) > 130f)
					{
						Local_2026.f_550.f_3.f_2 = fVar3;
						(Local_361[Local_2026.f_634 /*52*/])->f_49 = { Local_2026.f_550.f_3 };
						aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 4096);
					}
				}
			}
			if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 4096) && Local_2026.f_549 < 2)
			{
				aggregate.net_coach_holdup.func_94(&(Local_2026.f_550), 1, 0);
				Local_2026.f_549++;
				return;
			}
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 2048);
			break;
		case 5:
			if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 8192))
			{
				return;
			}
			if (!func_354(Local_17.f_305.f_2, &bVar4))
			{
				return;
			}
			if (bVar4)
			{
				aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 16384);
			}
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 8192);
			break;
		case 6:
			break;
		case 2:
			if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 1024))
			{
				return;
			}
			aggregate.net_coach_holdup.func_94(&(Local_2026.f_550), 1, 0);
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 1024);
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 2048);
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 4096);
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 8192);
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 16384);
			break;
	}
}

void func_160()
{
	int iVar0;
	bool bVar1;
	struct<30> Var2;
	struct<9> Var32;

	if (func_355(&iVar0, &bVar1))
	{
		func_356(1);
	}
	else
	{
		func_356(0);
	}
	if ((aggregate.fme_animal_tagging.func_134(4) && aggregate.fme_animal_tagging.func_661(255)) && aggregate.fme_animal_tagging.func_662(255))
	{
		func_359(&Var2, &Var32, iVar0, bVar1);
		aggregate.fme_animal_tagging.func_924(Var2, Var32, 1, 1, 1);
	}
}

void func_161()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;

	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 2097152))
	{
		if (aggregate.fme_animal_tagging.func_134(67108864) && func_258(512, 255))
		{
			func_69(0);
		}
		return;
	}
	iVar0 = func_361();
	func_207(iVar0, aggregate.fishing_core.func_34(&Local_17, 524288));
	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return;
	}
	if (!aggregate.fishing_core.func_34(&Local_17, 524288) && !aggregate.fme_animal_tagging.func_134(134217728))
	{
		return;
	}
	if (func_362())
	{
		return;
	}
	iVar1 = func_363(255);
	if (Local_17.f_299 != 0 && iVar1 != 3)
	{
		if (iVar1 == 0)
		{
			return;
		}
		if (func_258(1, 255) && iVar1 == 1)
		{
			return;
		}
	}
	bVar2 = func_258(1, 255);
	func_69(bVar2);
	func_209(&iVar3, &uVar4);
	if (iVar3 > 0)
	{
		func_364(func_258(1, 255));
	}
	aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 2097152);
}

void func_162()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = aggregate.fme_animal_tagging.func_134(1);
	if ((((bVar0 && !aggregate.fme_animal_tagging.func_134(8192)) && aggregate.fme_animal_tagging.func_134(16384)) && !aggregate.fishing_core.func_34(&Local_17, 512)) && !aggregate.fme_animal_tagging.func_134(33554432))
	{
		if (aggregate.net_assassination.func_441(0, 0, 0))
		{
			if (Local_2026.f_639 == 0)
			{
				Local_2026.f_639 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (aggregate.fme_animal_tagging.func_134(32768))
				{
					aggregate.fme_animal_tagging.func_336(1);
				}
			}
			bVar1 = aggregate.fme_animal_tagging.func_134(8192);
			if (((Local_2026.f_639 != 0 && aggregate.fme_animal_tagging.func_384(Local_2026.f_639) < 45000) && !(!bVar1 && aggregate.annesburg.func_141(Local_2026.f_627.f_2, Global_36))) && !(bVar1 && aggregate.annesburg.func_141(Local_2026.f_627.f_3, Global_36)))
			{
				LAW::_0xBD944A3D36E992DE();
				PLAYER::_0xCBCCF73FFA69CC6B(PLAYER::GET_PLAYER_INDEX());
			}
		}
		else
		{
			Local_2026.f_639 = 0;
		}
	}
	if (bVar0 && !aggregate.fme_animal_tagging.func_134(33554432))
	{
		func_76(1);
	}
	else
	{
		func_76(0);
	}
	if (bVar0 && !aggregate.fme_animal_tagging.func_134(33554432))
	{
		func_77(1);
	}
	else
	{
		func_77(0);
	}
	if ((bVar0 && !aggregate.fme_animal_tagging.func_134(8192)) && Local_2026.f_10.f_5 != 0)
	{
		iVar2 = PLAYER::PLAYER_ID();
		switch (Local_2026.f_10.f_5)
		{
			case 1503734359:
				LAW::_0x785177E4D57D7389(iVar2, -683250308 /* GXTEntry: "Assault" */, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, 481893872 /* GXTEntry: "Disturbing the Peace" */, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, 2006449383 /* GXTEntry: "Murder" */, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, 2140177766, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar2, 2140177766, 0, 0, -1);
				break;
		}
	}
}

void func_163()
{
	int iVar0;

	if (aggregate.fme_animal_tagging.func_134(1))
	{
		iVar0 = func_252();
		func_366(1, 0);
		switch (Local_17.f_2)
		{
			case 1:
				if (iVar0 == 1 && aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 8))
				{
					func_366(2, 0);
				}
				break;
			case 2:
				if (iVar0 == 1)
				{
					if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 2) || aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 8))
					{
						func_366(2, 0);
					}
				}
				break;
			case 3:
			case 4:
			case 5:
				func_366(4, 0);
				break;
		}
		if (aggregate.fishing_core.func_34(&Local_17, 524288) && aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 2097152))
		{
			if (func_367(1) > 0)
			{
				func_366(8, 1);
			}
			else
			{
				func_366(16, 1);
			}
		}
	}
	else
	{
		if ((!aggregate.fme_animal_tagging.func_134(1) || aggregate.fme_animal_tagging.func_134(16)) || aggregate.fme_animal_tagging.func_134(8))
		{
			return;
		}
		func_366(16, 1);
	}
}

void func_165(var uParam0, var uParam1, float fParam2)
{
	if (func_370())
	{
		func_102(fParam2);
		return;
	}
	func_371(uParam0, uParam1, fParam2);
	func_372(uParam0, uParam1, fParam2);
	func_373(uParam0, uParam1, fParam2);
	func_374(uParam0, uParam1, fParam2);
	func_375();
	func_376();
	func_377(uParam0, uParam1, fParam2);
	func_378();
	func_379(fParam2);
	func_380(uParam0, uParam1, fParam2);
}

var func_166()
{
	return Local_2026.f_10.f_1;
}

bool func_169(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6)
{
	int iVar0;
	struct<8> Var1;

	if (VOLUME::_0xF6A8A652A6B186CD(&(Local_17.f_337[iParam0])))
	{
		return true;
	}
	if (aggregate.annesburg.func_121(vParam1))
	{
		return true;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_17.f_337.f_5))
	{
		if (VOLUME::_0x397769175A7DBB30(vParam1, fParam4, 0, 0, 575122756))
		{
			*uParam6 = 1;
			return false;
		}
		Var1 = { vParam1 };
		Var1.f_4 = fParam4;
		Var1.f_6 = iParam5;
		Var1.f_7 = Local_2026.f_4.f_1;
		Local_17.f_337.f_5 = VOLUME::_0x183C0B6CFEFFCAE4(&Var1);
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_17.f_337.f_5);
	switch (iVar0)
	{
		case 3:
			Local_17.f_337[iParam0] = VOLUME::_0x351D71B8B72B858B(Local_17.f_337.f_5);
			return true;
		case 4:
			Local_17.f_337.f_5 = 0;
			return true;
		default:
			break;
	}
	return false;
}

int func_171()
{
	return -770982987;
}

bool func_173(var uParam0, var uParam1, int iParam2)
{
	if (func_293(uParam0, uParam1))
	{
		uParam1->f_2 = -911220092;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

int func_174(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_173(uParam0, &Var0, iParam1))
	{
		aggregate.fme_animal_tagging.func_40(Var0, 1339124518, &iVar5, 0);
	}
	return iVar5;
}

int func_175()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_293(&Local_2026, &Var0) && func_313(&Var0, 2067657977, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 10)
	{
		return 10;
	}
	return iVar5;
}

bool func_176(var uParam0, int iParam1)
{
	if (func_293(&Local_2026, uParam0))
	{
		uParam0->f_2 = 2101858238;
		uParam0->f_3 = iParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

int func_179(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1))
	{
		aggregate.fme_animal_tagging.func_40(Var0, 1339124518, &uVar5, 0);
	}
	return uVar5;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case -2133983324:
		case -522830230:
		case -306837416:
		case -193064196:
		case 824585797:
		case joaat("driver"):
			return joaat("a_m_m_unicoachguards_01");
		default:
			break;
	}
	return joaat("a_m_m_unicoachguards_01");
}

int func_181(int iParam0)
{
	switch (iParam0)
	{
		case -2133983324:
		case -522830230:
		case -306837416:
		case -193064196:
		case 824585797:
		case joaat("driver"):
			return -1038436471;
		default:
			break;
	}
	return -1038436471;
}

bool func_182(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		aggregate.fme_animal_tagging.func_40(Var0, 1325183772, &iVar5, 0);
	}
	return iVar5;
}

bool func_183(bool bParam0)
{
	if (bParam0 == 0 || bParam0 == joaat("weapon_unarmed"))
	{
		return true;
	}
	if (!aggregate.binoculars.func_72(bParam0))
	{
		return true;
	}
	WEAPON::_0x72D4CB5DB927009C(bParam0, -1, 0);
	if (!WEAPON::_0xFF07CF465F48B830(bParam0))
	{
		return false;
	}
	return true;
}

bool func_184()
{
	return -2040421904;
}

int func_185()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;

	iVar2 = func_290(&Local_2026);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		aggregate.medium_update.func_483(&Var3);
		if (!func_173(&Local_2026, &Var3, iVar0) || !func_142(Var3))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;

	iVar2 = func_291(&Local_2026);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		aggregate.medium_update.func_483(&Var3);
		if (!func_141(&Local_2026, &Var3, iVar0) || !func_142(Var3))
		{
		}
		else
		{
			iVar1++;
			if (!func_387(&Local_2026, iVar0))
			{
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_187()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	bool bVar8;
	int iVar9;
	int iVar10;

	iVar2 = func_175();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		aggregate.medium_update.func_483(&Var3);
		if (!func_176(&Var3, iVar0) || !func_142(Var3))
		{
		}
		else if (aggregate.fme_condor_egg.func_42(Var3, 873236619, &bVar8, 0) && bVar8)
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar10 = func_291(&Local_2026);
	iVar9 = 0;
	while (iVar9 < iVar10)
	{
		aggregate.medium_update.func_483(&Var3);
		if (!func_141(&Local_2026, &Var3, iVar9) || !func_142(Var3))
		{
		}
		else if (!func_306(&Local_2026, iVar9))
		{
		}
		else
		{
			iVar1++;
		}
		iVar9++;
	}
	return iVar1;
}

void func_188()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<5> Var5;
	bool bVar10;

	if (Local_2026.f_10.f_8 <= 0)
	{
		return;
	}
	if (!func_388(2, Local_2026.f_4.f_1))
	{
		return;
	}
	fVar0 = 0f;
	iVar1 = -1;
	iVar4 = func_291(&Local_2026);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (&Local_2026.f_45[iVar2 /*6*/] == 0)
		{
		}
		else
		{
			aggregate.medium_update.func_483(&Var5);
			if (!func_141(&Local_2026, &Var5, iVar2))
			{
			}
			else if (!aggregate.fme_condor_egg.func_42(Var5, -359968085, &bVar10, 0) || !bVar10)
			{
			}
			else
			{
				fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (fVar3 > fVar0)
				{
					iVar1 = iVar2;
					fVar0 = fVar3;
				}
			}
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	aggregate.net_coach_holdup.func_275(iVar1, &Local_17, 33554432);
}

bool func_189()
{
	int iVar0;
	struct<5> Var1;

	if (Local_2026.f_10.f_12 >= func_175())
	{
		return true;
	}
	iVar0 = Local_2026.f_10.f_12;
	if (func_176(&Var1, iVar0) && !func_142(Var1))
	{
		Local_2026.f_10.f_12++;
		return false;
	}
	if (!func_389(iVar0))
	{
		return false;
	}
	Local_2026.f_10.f_12++;
	return false;
}

bool func_190(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	int iVar11;
	int iVar12;

	if (uParam1->f_10.f_10 >= uParam1->f_10.f_7)
	{
		return true;
	}
	iVar0 = uParam1->f_10.f_10;
	if (func_173(&Local_2026, &Var1, iVar0) && !func_142(Var1))
	{
		uParam1->f_10.f_10++;
		return false;
	}
	iVar6 = func_174(&Local_2026, iVar0);
	vVar7 = { (uParam1->f_29[iVar0 /*5*/])->f_1 };
	fVar10 = func_390(&Local_2026, iVar0);
	if (iVar6 == 0 || !STREAMING::IS_MODEL_VALID(iVar6))
	{
		uParam1->f_10.f_10++;
		return false;
	}
	if (aggregate.annesburg.func_121(vVar7))
	{
		uParam1->f_10.f_10++;
		return false;
	}
	if (!aggregate.aberdeenpigfarm.func_175(&(uParam1->f_29[iVar0 /*5*/]), 4))
	{
		aggregate.fm_mission_controller.func_7506(&vVar7, 1088421888 /* Float: 7f */);
	}
	if (!aggregate.fme_condor_egg.func_999(uParam0->f_3[iVar0 /*4*/], iVar6, vVar7, fVar10, 1, 0, 0, 0))
	{
		return false;
	}
	iVar11 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar0 /*4*/]));
	VEHICLE::SET_VEHICLE_CAN_BREAK(iVar11, true);
	VEHICLE::_0x850CE59DEC2028F3(iVar11, 1);
	VEHICLE::_SET_VEHICLE_LIGHTS_CAN_BE_VISIBLY_DAMAGED(iVar11, true);
	AITRANSPORT::_0xBA8818212633500A(iVar11, 3, 1);
	AITRANSPORT::_0xBA8818212633500A(iVar11, 9, 1);
	if (aggregate.fme_supply_train.func_39(Var1, -1668085295, &iVar12, 0))
	{
		VEHICLE::_0xD4F5EFB55769D272(iVar11, iVar12);
	}
	if (aggregate.fme_animal_tagging.func_134(256))
	{
		VEHICLE::_0x87B974E54C71BA7B(iVar11, 1);
		VEHICLE::_0xC4A2C11FC0D41916(iVar11, 1);
		ENTITY::_0x9587913B9E772D29(iVar11, 1);
	}
	if (aggregate.aberdeenpigfarm.func_175(&(uParam1->f_29[iVar0 /*5*/]), 2))
	{
		aggregate.net_coach_holdup.func_275(iVar0, uParam0, 2);
	}
	uParam1->f_10.f_10++;
	return false;
}

bool func_191(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	if (uParam1->f_10.f_11 >= uParam1->f_10.f_8)
	{
		return true;
	}
	iVar0 = uParam1->f_10.f_11;
	if (func_141(&Local_2026, &Var1, iVar0) && !func_142(Var1))
	{
		uParam1->f_10.f_11++;
		return false;
	}
	if (!func_394(iVar0, uParam0, uParam1))
	{
		return false;
	}
	aggregate.fme_golden_hat.func_194();
	(uParam0->f_16[iVar0 /*12*/])->f_2 = &uParam1->f_45[iVar0 /*6*/];
	(uParam0->f_16[iVar0 /*12*/])->f_8 = { (uParam1->f_45[iVar0 /*6*/])->f_2 };
	(uParam0->f_16[iVar0 /*12*/])->f_11 = (uParam1->f_45[iVar0 /*6*/])->f_5;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(&(uParam0->f_16[iVar0 /*12*/]))))
	{
		if (!func_396(iVar0, uParam0, uParam1, 1))
		{
			return false;
		}
	}
	uParam1->f_10.f_11++;
	return false;
}

bool func_192(var uParam0)
{
	if (uParam0->f_327 >= 20)
	{
		return true;
	}
	func_397(uParam0->f_327, uParam0);
	uParam0->f_327++;
	return false;
}

void func_193(var uParam0, int iParam1, bool bParam2)
{
	switch (aggregate.camera_item.func_12(bParam2))
	{
		case -19759302:
			if ((uParam0->f_16[bParam2->f_174 /*12*/])->f_2 == 1095997463 && !func_398(bParam2->f_174, 1))
			{
				func_399(bParam2->f_174, NETWORK::NET_TO_PED(&(uParam0->f_16[bParam2->f_174 /*12*/])), uParam0);
			}
			break;
	}
	func_400(bParam2->f_174, uParam0, iParam1, bParam2);
}

void func_194(var uParam0, int iParam1, bool bParam2)
{
	func_401(bParam2->f_174.f_2, uParam0, iParam1, bParam2);
}

void func_195(var uParam0, int iParam1, bool bParam2)
{
	if (!aggregate.fishing_core.func_34(&Local_17, 1073741824 /* Float: 2f */) && func_59(iParam1, 32, 0))
	{
		aggregate.fme_animal_tagging.func_1147(&Local_17, 1073741824 /* Float: 2f */);
	}
	if (!aggregate.fishing_core.func_34(&Local_17, 67108864) && func_402(!aggregate.fishing_core.func_34(&Local_17, 1073741824 /* Float: 2f */)))
	{
		aggregate.fme_animal_tagging.func_1147(uParam0, 67108864);
	}
	if (!aggregate.fishing_core.func_34(uParam0, 16) && func_59(iParam1, 2, 0))
	{
		aggregate.fme_animal_tagging.func_1147(uParam0, 16);
	}
	if ((!aggregate.fishing_core.func_34(&Local_17, 512) && aggregate.camera_item.func_12(&Local_17) > 2) && func_59(&Local_361, 64, 0))
	{
		aggregate.fme_animal_tagging.func_1147(&Local_17, 512);
	}
	if ((aggregate.fishing_core.func_34(uParam0, 1024) || aggregate.fishing_core.func_34(uParam0, 4096)) || aggregate.fishing_core.func_34(uParam0, 16384))
	{
		return;
	}
	if (aggregate.fishing_core.func_34(&Local_17, 134217728) && !aggregate.fishing_core.func_34(&Local_17, 268435456))
	{
		if (Local_17.f_320 == 0)
		{
			Local_17.f_320 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else if (aggregate.fme_animal_tagging.func_384(Local_17.f_320) > 60000)
		{
			aggregate.fme_animal_tagging.func_1147(&Local_17, 268435456);
		}
	}
	if (aggregate.camera_item.func_12(bParam2) == -409129282 && uParam0->f_322 <= 0)
	{
		aggregate.fme_animal_tagging.func_1147(uParam0, 16384);
	}
	if ((aggregate.camera_item.func_12(bParam2) == -19759302 && !func_404(uParam0, 1095997463)) && !aggregate.fishing_core.func_34(uParam0, 2048))
	{
		aggregate.fme_animal_tagging.func_1147(uParam0, 1024);
	}
	if ((aggregate.camera_item.func_12(bParam2) == -19759302 && !func_405(uParam0)) && aggregate.fishing_core.func_34(uParam0, 2048))
	{
		aggregate.fme_animal_tagging.func_1147(uParam0, 4096);
	}
}

void func_196(var uParam0, int iParam1, bool bParam2)
{
	func_406(Local_2026.f_174.f_4, uParam0, bParam2);
}

void func_197()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	switch (Local_17.f_305)
	{
		case 0:
			if (!func_407())
			{
				return;
			}
			func_408();
			aggregate.fme_animal_tagging.func_212(1);
			break;
		case 1:
			if (!func_407())
			{
				aggregate.fme_animal_tagging.func_212(0);
				return;
			}
			if (!func_410())
			{
				return;
			}
			aggregate.fme_animal_tagging.func_1147(&Local_17, 128);
			aggregate.fme_animal_tagging.func_212(3);
			break;
		case 3:
			if (!func_54(&Local_361, 1024))
			{
				return;
			}
			if (!func_411(&uVar1, &vVar2))
			{
				switch (Local_2026.f_10)
				{
					case -19759302:
						if (func_412(&Local_17, 1095997463, 262144) && func_413(&Local_17, 1095997463, 262144))
						{
							iVar5 = 0;
							while (iVar5 < 20)
							{
								aggregate.net_coach_holdup.func_275(iVar5, &Local_17, 262144);
								iVar5++;
							}
							return;
						}
						break;
					case -409129282:
						if (func_415(&Local_17, 1024, 0) && func_416(&Local_17, 1024, 0))
						{
							iVar6 = 0;
							while (iVar6 < 4)
							{
								aggregate.net_coach_holdup.func_275(iVar6, &Local_17, 1024);
								iVar6++;
							}
							return;
						}
						break;
				}
				aggregate.fme_animal_tagging.func_212(2);
				return;
			}
			Local_17.f_305.f_1 = uVar1;
			Local_17.f_305.f_2 = { vVar2 };
			aggregate.fme_animal_tagging.func_212(4);
			break;
		case 4:
			if (!func_54(&Local_361, 2048))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (!aggregate.fishing_core.func_34(Local_361[iVar0 /*52*/], 4096))
				{
				}
				else if (!aggregate.fme_condor_egg.func_1607(iVar0, 0, 1))
				{
				}
				else
				{
					Local_17.f_305.f_2 = { (Local_361[iVar0 /*52*/])->f_49 };
					aggregate.fme_animal_tagging.func_212(5);
					return;
				}
				iVar0++;
			}
			aggregate.fme_animal_tagging.func_1147(&Local_17, 256);
			aggregate.fme_animal_tagging.func_212(2);
			break;
		case 5:
			if (!func_54(&Local_361, 8192))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (!aggregate.fishing_core.func_34(Local_361[iVar0 /*52*/], 16384))
				{
				}
				else if (!aggregate.fme_condor_egg.func_1607(iVar0, 0, 1))
				{
				}
				else
				{
					aggregate.fme_animal_tagging.func_1147(&Local_17, 256);
					aggregate.fme_animal_tagging.func_212(2);
					return;
				}
				iVar0++;
			}
			aggregate.fme_animal_tagging.func_212(6);
			break;
		case 6:
			if (Local_17.f_305.f_5 >= Local_17.f_305.f_6)
			{
				if (Local_17.f_305.f_1 == -1)
				{
				}
				else
				{
					switch (Local_2026.f_10)
					{
						case -19759302:
							aggregate.net_coach_holdup.func_275(Local_17.f_305.f_1, &Local_17, 262144);
							if (func_413(&Local_17, 1095997463, 262144))
							{
								iVar7 = 0;
								while (iVar7 < 20)
								{
									aggregate.net_coach_holdup.func_275(iVar7, &Local_17, 262144);
									iVar7++;
								}
							}
							break;
						case -409129282:
							aggregate.net_coach_holdup.func_275(Local_17.f_305.f_1, &Local_17, 1024);
							if (func_416(&Local_17, 1024, 0))
							{
								iVar8 = 0;
								while (iVar8 < 4)
								{
									aggregate.net_coach_holdup.func_275(iVar8, &Local_17, 1024);
									iVar8++;
								}
							}
							break;
					}
				}
				aggregate.fme_animal_tagging.func_1147(&Local_17, 256);
				aggregate.fme_animal_tagging.func_212(2);
				return;
			}
			if (!func_420(Local_17.f_305.f_5, Local_17.f_305.f_6, Local_17.f_305.f_2))
			{
				return;
			}
			Local_17.f_305.f_8 = -1;
			Local_17.f_305.f_5++;
			break;
		case 2:
			if (func_59(&Local_361, 1024, 0))
			{
				return;
			}
			Local_17.f_305.f_1 = -1;
			Local_17.f_305.f_2 = { 0f, 0f, 0f };
			Local_17.f_305.f_5 = 0;
			Local_17.f_305.f_6 = 0;
			Local_17.f_305.f_7 = 0;
			Local_17.f_305.f_9 = 0;
			Local_17.f_305.f_8 = -1;
			aggregate.fme_animal_tagging.func_212(0);
			break;
	}
}

void func_198(var uParam0, int iParam1, bool bParam2)
{
	switch (aggregate.camera_item.func_12(bParam2))
	{
		case -409129282:
			func_421(uParam0, iParam1, bParam2);
			return;
		case -19759302:
			func_422(uParam0, iParam1, bParam2);
			return;
		default:
			break;
	}
}

bool func_201(var uParam0, bool bParam1)
{
	if (!aggregate.fishing_core.func_34(uParam0, 32768))
	{
		return false;
	}
	return func_211(uParam0) > bParam1->f_10.f_6;
}

int func_204(var uParam0, bool bParam1)
{
	switch (aggregate.camera_item.func_12(bParam1))
	{
		case -19759302:
			if (!aggregate.fishing_core.func_34(uParam0, 2048))
			{
				return 2;
			}
			if (uParam0->f_325 < bParam1->f_10.f_13)
			{
				return 0;
			}
			break;
		case -409129282:
			if (!aggregate.fishing_core.func_34(uParam0, 8192))
			{
				return 2;
			}
			if (uParam0->f_323 < bParam1->f_10.f_14)
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	return 1;
}

int func_205(var uParam0, bool bParam1)
{
	switch (aggregate.camera_item.func_12(bParam1))
	{
		case -19759302:
			if (!aggregate.fishing_core.func_34(uParam0, 131072))
			{
				return 2;
			}
			if (uParam0->f_326 < bParam1->f_10.f_13)
			{
				return 0;
			}
			break;
		case -409129282:
			if (!aggregate.fishing_core.func_34(uParam0, 262144))
			{
				return 2;
			}
			if (uParam0->f_324 < bParam1->f_10.f_14)
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	return 1;
}

int func_206()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return 20;
		case -409129282:
			return 4;
		default:
			break;
	}
	return 0;
}

void func_207(int iParam0, bool bParam1)
{
	if (!func_424(iParam0, 0) && func_128(iParam0))
	{
		if (func_425(iParam0))
		{
			func_129(iParam0, 1);
			if (bParam1)
			{
				Local_2026.f_635++;
			}
			else
			{
				func_208();
			}
		}
		else
		{
			func_129(iParam0, 0);
		}
	}
}

void func_208()
{
	struct<2> Var0;

	Var0.f_1 = 11;
	func_426(&Var0, 404851220, func_212(255), aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32));
}

void func_209(bool bParam0, int iParam1)
{
	*bParam0 = 0;
	switch (Local_2026.f_10)
	{
		case -19759302:
			*iParam1 = Local_2026.f_10.f_13;
			break;
		case -409129282:
			*iParam1 = Local_2026.f_10.f_14;
			break;
	}
	*bParam0 = func_367(1);
}

int func_211(var uParam0)
{
	if (!aggregate.fishing_core.func_34(&Local_17, 32768))
	{
		return 0;
	}
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_319, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_212(int iParam0)
{
	int iVar0;

	iVar0 = func_427(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return aggregate.flow_controller.func_327(iVar0);
}

void func_213(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, struct<2> Param12)
{
	float fVar0;
	int iVar1;
	bool bVar2;

	if (iParam9 == 0)
	{
		return;
	}
	fVar0 = aggregate.coffee_drinking.func_45(((BUILTIN::TO_FLOAT(iParam11) / 1000f) / 60f), 0.5f, 30f);
	func_430(iParam2, &iVar1, &bVar2, 0, fVar0);
	aggregate.nb_hobo_dog.func_478(iParam2, &bVar2, 0, iParam4, iParam9, iParam10, bParam7);
	aggregate.nb_hobo_dog.func_479(iParam2, 0, iParam5);
	aggregate.nb_hobo_dog.func_480(iParam2, &bVar2, 0, bParam8);
	aggregate.nb_hobo_dog.func_481(iParam2, 0, Param12);
	func_435(iParam2, 0, iParam6);
	aggregate.fme_animal_tagging.func_752(1149539403, uParam0, iParam2, 0, 255, 0, 1);
	func_430(iParam3, &iVar1, &bVar2, 1, fVar0);
	aggregate.nb_hobo_dog.func_480(iParam3, &bVar2, 1, bParam8);
	aggregate.nb_hobo_dog.func_478(iParam3, &bVar2, 1, iParam4, iParam9, iParam10, bParam7);
	func_435(iParam3, 1, iParam6);
	if (!bVar2 && iVar1 != 0)
	{
		aggregate.fme_animal_tagging.func_752(iVar1, uParam1, iParam3, 0, 255, 0, 0);
	}
}

void func_215(int iParam0)
{
	int iVar0;

	if (!aggregate.fme_challenges.func_1307(iParam0, 64))
	{
		return;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 8388608) && func_438(iParam0, &iVar0, 0, 1))
	{
		NETWORK::_0xEE5AE9956743BA20(iVar0, false);
	}
	aggregate.net_assassination.func_458(iParam0, 8192);
	aggregate.net_assassination.func_458(iParam0, 16384);
	func_440(iParam0);
	aggregate.net_assassination.func_458(iParam0, 64);
	aggregate.net_assassination.func_458(iParam0, 67108864);
}

void func_216(int iParam0)
{
	if (iParam0 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iParam0);
	}
}

void func_217(bool bParam0)
{
	Global_1903928->f_485[59] = !bParam0;
}

void func_218(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!aggregate.net_assassination.func_532(iVar0, 1))
	{
		return;
	}
	if (!bParam2 && !func_442(iVar0))
	{
		return;
	}
	aggregate.net_assassination.func_553(1);
}

bool func_219(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return ((*Global_1121338)[iParam0 /*54*/])->f_47 & 1 != 0;
}

void func_220(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!aggregate.net_assassination.func_532(iVar0, 2))
	{
		return;
	}
	if (!bParam2 && !func_442(iVar0))
	{
		return;
	}
	aggregate.net_assassination.func_553(2);
}

bool func_221(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return ((*Global_1121338)[iParam0 /*54*/])->f_47 & 2 != 0;
}

char* func_227()
{
	return "mp@freemode_cams@gfh_outro_cams";
}

int func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1711865203;
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

char* func_232(int iParam0)
{
	switch (iParam0)
	{
		case 1711865203:
			return "script_common@wave@male@unapproved";
		default:
			break;
	}
	return "";
}

bool func_234(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 0)
	{
		return true;
	}
	return false;
}

void func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_5))
	{
		iVar2 = NETWORK::_0xD7F6781A0ABAF6FB((Local_17.f_16[iParam0 /*12*/])->f_5);
		ANIMSCENE::_DELETE_ANIM_SCENE(iVar2);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				PED::SET_PED_CAN_RAGDOLL(iVar0, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_RESET_FLAG(iVar0, 36, false);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED((Local_17.f_16[iParam0 /*12*/])->f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
}

void func_236(bool bParam0)
{
	if (!STREAMING::IS_MODEL_VALID(bParam0))
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(bParam0);
}

bool func_238()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = joaat("s_m_m_ambientlawrural_01");
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!aggregate.net_assassination.func_1057(Var1, 1339124518, &uVar6))
	{
		return iVar0;
	}
	return uVar6;
}

bool func_239()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 2030804811;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!aggregate.net_assassination.func_1057(Var1, -118004582, &uVar6))
	{
		return iVar0;
	}
	return uVar6;
}

void func_240(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iParam0])))
	{
		return;
	}
	aggregate.fme_escaped_convicts.func_736(Local_2026.f_202[iParam0]);
	aggregate.net_assassination.func_458(iParam0, 256);
	aggregate.net_assassination.func_458(iParam0, 512);
	aggregate.net_assassination.func_458(iParam0, 128);
	aggregate.net_assassination.func_458(iParam0, 1024);
	aggregate.net_assassination.func_458(iParam0, 2048);
	aggregate.net_assassination.func_458(iParam0, 4096);
	if (Local_2026.f_10 == -19759302)
	{
		Local_2026.f_202.f_30[iParam0] = 255;
	}
}

void func_241(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_21[iParam0])))
	{
		return;
	}
	aggregate.fme_escaped_convicts.func_736(Local_2026.f_202.f_21[iParam0]);
}

void func_242(int iParam0)
{
	aggregate.fme_escaped_convicts.func_736(Local_2026.f_202.f_25[iParam0]);
	aggregate.fme_hot_property.func_964(iParam0, 2);
	aggregate.fme_hot_property.func_964(iParam0, 4);
	aggregate.fme_hot_property.func_964(iParam0, 1);
	aggregate.fme_hot_property.func_964(iParam0, 8);
	if (Local_2026.f_10 == -409129282)
	{
		Local_2026.f_202.f_30[iParam0] = 255;
	}
}

void func_243()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_451(iVar0, 0);
		func_452(iVar0, 0);
		iVar0++;
	}
}

void func_245()
{
	aggregate.fme_escaped_convicts.func_736(&(Local_2026.f_202.f_58));
	if (!aggregate.fishing_core.func_107(Local_2026.f_202.f_59))
	{
		return;
	}
	_NAMESPACE71::_0x2F901291EF177B02(Local_2026.f_202.f_59, 0);
}

void func_246(float fParam0)
{
	aggregate.fme_animal_tagging.func_174(2097152);
	aggregate.fme_animal_tagging.func_174(4194304);
	Local_2026.f_202.f_53 = 255;
	Local_2026.f_202.f_54 = 0;
	if (!func_454(fParam0))
	{
		return;
	}
	_NAMESPACE71::_0x2F901291EF177B02(fParam0->f_202.f_56, 0);
	fParam0->f_202.f_56 = 0;
	fParam0->f_202.f_60 = 0;
}

int func_252()
{
	if (aggregate.fme_animal_tagging.func_134(1))
	{
		if (aggregate.fme_animal_tagging.func_134(8192))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_253(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam1)
	{
		func_466(Local_2026.f_2, iParam0 != 1);
	}
	if (iParam0 == 1 && (aggregate.net_assassination.func_303(iVar0, 1) || aggregate.net_assassination.func_303(iVar0, 32)))
	{
		aggregate.fm_deathmatch_controller.func_445(4);
		aggregate.fm_deathmatch_controller.func_445(8);
	}
	if (!bParam1)
	{
		aggregate.fme_animal_tagging.func_174(2);
	}
	if (Local_2026.f_634 >= 32 || Local_2026.f_634 < 0)
	{
		return;
	}
	aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 67108864);
}

void func_254(bool bParam0)
{
	aggregate.net_ambient_content_evaluator.func_26(Local_2026.f_1, bParam0);
}

void func_255(bool bParam0, bool bParam1)
{
	aggregate.net_ambient_content_evaluator.func_81(Local_2026.f_1, bParam1, bParam0);
}

void func_256(bool bParam0)
{
	aggregate.net_ambient_content_evaluator.func_82(Local_2026.f_1, bParam0);
}

void func_257(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!aggregate.aberdeenpigfarm.func_158(Param0))
	{
		return;
	}
	iVar1 = aggregate.nb_hobo_dog.func_515(Param0);
	if (!aggregate.nb_hobo_dog.func_516(iVar1))
	{
		return;
	}
	iVar0 = aggregate.nb_hobo_dog.func_517(iVar1);
	if (!aggregate.flow_controller.func_373(iVar0))
	{
		return;
	}
	iVar2 = aggregate.net_assassination.func_508(iVar1);
	if (!aggregate.flow_controller.func_386(iVar2))
	{
		return;
	}
	if (bParam4 <= 0)
	{
	}
	else if (bParam3 >= bParam4)
	{
		bVar6 = true;
		bVar4 = true;
		bVar5 = true;
	}
	else
	{
		bVar6 = false;
		bVar4 = bParam3 >= true;
		fVar3 = (BUILTIN::TO_FLOAT(bParam3) / BUILTIN::TO_FLOAT(bParam4));
		bVar5 = fVar3 >= 0.5f;
	}
	if (bVar5)
	{
		iVar7 = 0;
	}
	else if (bVar4)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 2;
	}
	iVar10 = aggregate.flow_controller.func_374(iVar0);
	iVar11 = aggregate.flow_controller.func_242(Param0);
	iVar8 = aggregate.net_assassination.func_510(iVar1);
	iVar9 = aggregate.map_app_event_handler.func_102(iVar0);
	if (aggregate.annesburg.func_109())
	{
		func_482(iVar10, iVar11);
		func_483(iVar10, iVar8);
		func_484(iVar10, iVar7);
		func_485(iVar10, bParam2, bVar4);
		func_486(iVar10, bParam2, bVar6);
		func_487(iVar8, bParam2, bVar4, Param0, iVar1);
		if (!bParam2)
		{
			if (bVar4)
			{
				aggregate.net_assassination.func_546(iVar2, iVar0, 1545958071, Param0);
			}
			else
			{
				aggregate.net_assassination.func_546(iVar2, iVar0, -448995989, Param0);
			}
		}
		aggregate.fme_animal_tagging.func_585(bVar4);
	}
	func_490(iVar9, bParam2, bVar4);
	func_491(Param0, bVar4);
	aggregate.net_assassination.func_550(1);
	aggregate.net_assassination.func_550(0);
	func_493(0);
	aggregate.net_assassination.func_552(0);
	aggregate.net_assassination.func_553(4);
}

bool func_258(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2026.f_634;
	}
	return aggregate.aberdeenpigfarm.func_175((Local_361[iParam1 /*52*/])->f_41.f_1, iParam0);
}

void func_259()
{
	int iVar0;

	if (!func_258(4096, 255))
	{
		return;
	}
	iVar0 = -1429099402;
	PED::_0xDE7B2B4144906CDF(iVar0, Global_35);
	func_495(4096);
}

void func_260(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (!func_293(&Local_2026, &Var10) || !func_313(&Var10, 556233122, iParam0, 0))
	{
		return;
	}
	iVar15 = func_496(iParam0);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_313(&Var0, -110495140, iVar17, 0))
		{
			return;
		}
		iVar20 = func_497(iParam0, iVar17);
		iVar16 = 0;
		while (iVar16 < iVar20)
		{
			Var5 = { Var0 };
			if ((!func_313(&Var5, 938546485, iVar16, 0) || !aggregate.fme_supply_train.func_39(Var5, 957840570, &iVar18, 0)) || !aggregate.fme_animal_tagging.func_40(Var5, -537439784, &uVar19, 0))
			{
			}
			else
			{
				iVar21 = uVar19;
				if (!func_498(iVar21, iVar18, &iVar22))
				{
				}
				else
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar22, 0f);
				}
			}
			iVar16++;
		}
		iVar17++;
	}
}

void func_261()
{
	if (!func_258(8, 255))
	{
		return;
	}
	NETWORK::_0x4B05B97BA46F419D(0);
	NETWORK::_0x89D803CD48622150(0);
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, func_499(), true);
	}
	func_495(8);
}

void func_262(int iParam0)
{
	aggregate.aberdeenpigfarm.func_106(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_1), iParam0);
}

void func_267(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	if (bParam3)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
	}
}

void func_279(int iParam0, bool bParam1)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540), iParam0);
	if (bParam1)
	{
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540.f_4), iParam0);
	}
}

void func_280(int iParam0, bool bParam1)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540.f_2), iParam0);
	if (bParam1)
	{
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_540.f_6), iParam0);
	}
}

void func_281(char* sParam0, int* iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, aggregate.error_listener.func_18(Local_2026), 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, iParam1);
}

var func_282(int iParam0, bool bParam1)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;

	iVar3 = aggregate.flow_controller.func_327(iParam0);
	if (bParam1)
	{
		iVar2 = 1822827642;
	}
	else
	{
		iVar2 = joaat("attempts");
	}
	if (!func_508(iVar3, iVar2, &Var0))
	{
		return -1;
	}
	return aggregate.nb_hobo_dog.func_533(Var0, -1);
}

int func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -537439784;
		case 1:
			return 1679284980;
		case 2:
			return 1339124518;
		case 3:
			return 1329039358;
		case 4:
			return 1922377121;
		case 5:
			return -1762951883;
		case 6:
			return 1891838186;
		case 7:
			return -1662733059;
		case 8:
			return 1532715368;
		case 9:
			return 1325183772;
		case 10:
			return 1323038251;
		case 11:
			return -1561379682;
		case 12:
			return 1860996644;
		case 13:
			return 2039042927;
		case 14:
			return -1843028879;
		case 15:
			return -2122207177;
		case 16:
			return 644136394;
		case 17:
			return 1794832507;
		case 18:
			return -2119193689;
		case 19:
			return 1419063592;
		case 20:
			return 1111932099;
		case 21:
			return -864073234;
		case 22:
			return -760151658;
		case 23:
			return -1530266946;
		case 24:
			return 1471513692;
		case 25:
			return 873236619;
		case 26:
			return -1852046395;
		case 27:
			return -600916972;
		case 28:
			return -1318702711;
		case 29:
			return -1476590111;
		case 30:
			return -1355034;
		case 31:
			return 1013307464;
		case 32:
			return 957840570;
		case 33:
			return 725091599;
		case 34:
			return -542873544;
		case 35:
			return 1234220482;
		case 36:
			return -19593823;
		case 37:
			return 751620374;
		case 38:
			return -507939340;
		case 39:
			return 1146320435;
		case 40:
			return -333727878;
		case 41:
			return 408107890;
		case 42:
			return 1357107565;
		case 43:
			return -321268365;
		case 44:
			return 1252114078;
		case 45:
			return 592666605;
		case 46:
			return -1321720745;
		case 47:
			return 2064763470;
		case 48:
			return -118004582;
		case 49:
			return 705932105;
		case 50:
			return -1865369028;
		case 51:
			return -900489166;
		case 52:
			return -359968085;
		case 53:
			return 188462142;
		case 54:
			return 733551533;
		case 55:
			return -2107902278;
		case 56:
			return 1645569887;
		case 57:
			return -2117302676;
		case 58:
			return 1594022734;
		case 59:
			return 45657025;
		case 60:
			return 587406518;
		case 61:
			return -1339596857;
		case 62:
			return -779153855;
		case 63:
			return 100469918;
		case 64:
			return -1668085295;
		case 65:
			return 1245766010;
		case 66:
			return -727548384;
		case 67:
			return -36224614;
		case 68:
			return -252450326;
		case 69:
			return -1456038853;
		case 70:
			return 82347414;
		case 71:
			return -1580911258;
		case 72:
			return 999526519;
		case 73:
			return -880340422;
		case 74:
			return 902857663;
		case 75:
			return -697657725;
		case 76:
			return -1404661375;
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

char* func_284(int iParam0)
{
	switch (iParam0)
	{
		case -537439784:
			return ":type";
		case 1679284980:
			return ":drive_to_coords";
		case 1339124518:
			return ":model";
		case 1323038251:
			return ":mounted";
		case 1329039358:
			return ":spawn_pos";
		case 1922377121:
			return ":spawn_heading";
		case 1891838186:
			return ":spawn_offset";
		case -1662733059:
			return ":spawn_seat";
		case 1325183772:
			return ":weapon";
		case 1532715368:
			return ":vehicle_id";
		case -1762951883:
			return ":role";
		case -1561379682:
			return ":mission_time";
		case 1860996644:
			return ":health";
		case 2039042927:
			return ":flee_chance";
		case -1843028879:
			return ":allow_use_no_wagon_nodes";
		case -2122207177:
			return ":has_money_bag";
		case 644136394:
			return ":position";
		case 1794832507:
			return ":scale";
		case -2119193689:
			return ":rotation";
		case 1419063592:
			return ":secondary_dropoff";
		case 1111932099:
			return ":no_z_probe";
		case -864073234:
			return ":box_volume";
		case -760151658:
			return ":dont_acknowledge_players";
		case -1530266946:
			return ":scenario";
		case 1471513692:
			return ":heading";
		case 873236619:
			return ":is_propset";
		case -1852046395:
			return ":end_position";
		case -600916972:
			return ":end_rotation";
		case -1318702711:
			return ":shot_duration_ms";
		case -1476590111:
			return ":fade_time_ms";
		case -1355034:
			return ":effect";
		case 1013307464:
			return ":relative_to_player";
		case 957840570:
			return ":target_index";
		case 725091599:
			return ":delete_after_shot";
		case -542873544:
			return ":fov";
		case 1234220482:
			return ":transition_to_gameplay_cam";
		case -19593823:
			return ":transition_from_gameplay_cam";
		case 751620374:
			return ":id";
		case -507939340:
			return ":min_required_players";
		case 1146320435:
			return ":max_required_players";
		case -333727878:
			return ":delete_turned_in_objectives_after_shot";
		case 408107890:
			return ":exit_instance_at_start_of_shot";
		case 1357107565:
			return ":radius";
		case -321268365:
			return ":enabled";
		case 1252114078:
			return ":min_wave_time";
		case 592666605:
			return ":max_wave_time";
		case -1321720745:
			return ":initial_delay";
		case 2064763470:
			return ":is_law";
		case -118004582:
			return ":mount_model";
		case 705932105:
			return ":weight";
		case -1865369028:
			return ":enable_law";
		case -900489166:
			return ":remove_default_weapons";
		case -359968085:
			return ":can_have_treasure_map_loot";
		case 188462142:
			return ":accuracy";
		case 733551533:
			return ":primary_dropoff_name";
		case -2107902278:
			return ":secondary_dropoff_name";
		case 1645569887:
			return ":placement_type";
		case -2117302676:
			return ":hitch_pos";
		case 1594022734:
			return ":mission_is_stationary";
		case 45657025:
			return ":weapon_out";
		case 587406518:
			return ":dont_spawn_relative";
		case -1339596857:
			return ":outfit";
		case 100469918:
			return ":outfit_index";
		case -779153855:
			return ":loco_motion_type";
		case -1668085295:
			return ":break_wheel_index";
		case 1245766010:
			return ":primary_dropoff_is_near_mission_giver";
		case -727548384:
			return ":cinematic_location_position_offset";
		case -36224614:
			return ":cinematic_location_rotation_offset";
		case -252450326:
			return ":cinematic_location_focus_override";
		case -1456038853:
			return ":cinematic_location_camera_name";
		case 82347414:
			return ":scenario_pos";
		case -1580911258:
			return ":scenario_heading";
		case 999526519:
			return ":override_transition_cam";
		case -880340422:
			return ":avoidance_radius";
		case 902857663:
			return ":law_avoidance_radius";
		case -697657725:
			return ":has_discoverable_name";
		case -1404661375:
			return ":crime_config";
		default:
			break;
	}
	return "";
}

int func_285(var uParam0, int iParam1, char* sParam2)
{
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iParam1, sParam2))
	{
		return 0;
	}
	return 1;
}

int func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1094140359;
		case 1:
			return 1929036093;
		case 2:
			return 167061367;
		case 3:
			return 615415475;
		case 4:
			return -1813459955;
		case 5:
			return -788131562;
		case 6:
			return 1849119077;
		case 7:
			return -911220092;
		case 8:
			return -1874578615;
		case 9:
			return -244186873;
		case 10:
			return -1283139781;
		case 11:
			return 2067657977;
		case 12:
			return 2101858238;
		case 13:
			return 1300919788;
		case 14:
			return 556233122;
		case 15:
			return -1925794261;
		case 16:
			return -110495140;
		case 17:
			return -556151360;
		case 18:
			return -1441758265;
		case 19:
			return 938546485;
		case 20:
			return 565295571;
		case 21:
			return 1281647104;
		case 22:
			return 419371455;
		case 23:
			return -2072295915;
		case 24:
			return -640241378;
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

char* func_287(int iParam0)
{
	switch (iParam0)
	{
		case 1094140359:
			return "data";
		case 1929036093:
			return "activity/locations/location(id=%x)";
		case 167061367:
			return "activity/locations/location(%i)";
		case 615415475:
			return "activity/locations";
		case -1813459955:
			return "variations/variation(id=%x)";
		case -788131562:
			return "peds/ped(%i)";
		case 1849119077:
			return "peds";
		case -911220092:
			return "vehicles/vehicle(%i)";
		case -1874578615:
			return "vehicles";
		case -244186873:
			return "dropoff_volumes";
		case -1283139781:
			return "dropoff_volumes/volume(%i)";
		case 2067657977:
			return "props";
		case 2101858238:
			return "props/prop(%i)";
		case 1300919788:
			return "cutscenes";
		case 556233122:
			return "cutscenes/cutscene(id=%x)";
		case -110495140:
			return "shot(%i)";
		case -556151360:
			return "camera";
		case -1441758265:
			return "actors";
		case 938546485:
			return "actors/actor(%i)";
		case 565295571:
			return "veg_modifiers/veg_modifier(%i)";
		case 1281647104:
			return "veg_modifiers";
		case -1925794261:
			return "cutscenes/cutscene(%i)";
		case 419371455:
			return "chaser_waves";
		case -2072295915:
			return "weapons";
		case -640241378:
			return "weapons/weapon(%i)";
		default:
			break;
	}
	return "";
}

int func_288(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 600000;
	if (func_293(uParam0, &Var0))
	{
		aggregate.fme_supply_train.func_39(Var0, -1561379682, &iVar5, 0);
	}
	return iVar5;
}

Vector3 func_289(var uParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_293(uParam0, &Var0))
	{
		aggregate.fme_animal_tagging.func_143(Var0, 1679284980, &vVar5, 0);
	}
	return vVar5;
}

int func_290(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_510(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

int func_291(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_511(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 20)
	{
		return 20;
	}
	return iVar5;
}

int func_292(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (aggregate.fme_animal_tagging.func_40(Var0, -1404661375, &uVar5, 0))
	{
		return uVar5;
	}
	return iParam0;
}

bool func_293(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_4;
	uParam1->f_2 = 1929036093;
	uParam1->f_3 = uParam0->f_4.f_1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
}

bool func_294()
{
	struct<5> Var0;
	var uVar5;

	if (func_293(&Local_2026, &Var0) && aggregate.fme_condor_egg.func_42(Var0, -1865369028, &uVar5, 0))
	{
		return uVar5;
	}
	return true;
}

bool func_295()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 1;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!aggregate.fme_condor_egg.func_42(Var1, -321268365, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

bool func_296()
{
	struct<5> Var0;
	var uVar5;

	if (!func_293(&Local_2026, &Var0))
	{
		return false;
	}
	if (!aggregate.fme_condor_egg.func_42(Var0, 1245766010, &uVar5, 0))
	{
		return false;
	}
	return uVar5;
}

Vector3 func_297(var uParam0, var uParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_173(uParam0, &Var0, uParam1))
	{
		aggregate.fme_animal_tagging.func_143(Var0, 1329039358, &vVar5, 0);
	}
	return vVar5;
}

bool func_298(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_173(uParam0, &Var0, iParam1))
	{
		aggregate.fme_condor_egg.func_42(Var0, -1843028879, &uVar5, 0);
	}
	return uVar5;
}

bool func_299(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_173(uParam0, &Var0, iParam1))
	{
		aggregate.fme_condor_egg.func_42(Var0, 1111932099, &uVar5, 0);
	}
	return uVar5;
}

int func_301(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		aggregate.fme_animal_tagging.func_40(Var0, -1762951883, &iVar5, 0);
	}
	return iVar5;
}

Vector3 func_302(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_141(uParam0, &Var0, iParam1))
	{
		aggregate.fme_animal_tagging.func_143(Var0, 1891838186, &vVar5, 0);
	}
	return vVar5;
}

int func_303(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		aggregate.fme_supply_train.func_39(Var0, 1532715368, &iVar5, 0);
	}
	if (iVar5 >= 3)
	{
		iVar5 = 2;
	}
	else if (iVar5 < 0)
	{
		iVar5 = 0;
	}
	return iVar5;
}

bool func_304(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1) && aggregate.fme_animal_tagging.func_40(Var0, -1662733059, &uVar5, 0))
	{
		return true;
	}
	return false;
}

bool func_305(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = iParam2;
	if (!func_141(&Local_2026, &Var0, iParam0) || !aggregate.fme_condor_egg.func_42(Var0, iParam1, &iVar5, 0))
	{
		return iParam2;
	}
	return iVar5;
}

bool func_306(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		aggregate.fme_condor_egg.func_42(Var0, -2122207177, &iVar5, 0);
	}
	return iVar5;
}

void func_307(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	bool bVar5;

	bVar5 = iParam3;
	if (func_141(&Local_2026, &Var0, iParam0))
	{
		aggregate.fme_condor_egg.func_42(Var0, iParam1, &bVar5, 0);
	}
	if (bVar5)
	{
		aggregate.aberdeenpigfarm.func_106(&((Local_2026.f_45[iParam0 /*6*/])->f_1), iParam2);
	}
}

int func_308(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_512(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 4)
	{
		return 4;
	}
	return iVar5;
}

int func_309(var uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;
	int iVar15;

	if (func_310(uParam0, &Var0, iParam1) && aggregate.fme_animal_tagging.func_143(Var0, 644136394, &vVar5, 1))
	{
		if (!aggregate.fme_animal_tagging.func_143(Var0, 1794832507, &vVar8, 0))
		{
			vVar8.x = 9f;
			vVar8.f_1 = 9f;
			vVar8.f_2 = 10f;
		}
		aggregate.fme_animal_tagging.func_143(Var0, -2119193689, &vVar11, 0);
		aggregate.fme_condor_egg.func_42(Var0, 1419063592, iParam2, 0);
		aggregate.fme_condor_egg.func_42(Var0, -864073234, &bVar14, 0);
		if (bVar14)
		{
			iVar15 = VOLUME::_CREATE_VOLUME_BOX(vVar5, vVar11, vVar8);
		}
		else
		{
			iVar15 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar5, vVar11, vVar8);
		}
	}
	return iVar15;
}

bool func_310(var uParam0, var uParam1, int iParam2)
{
	if (func_293(uParam0, uParam1))
	{
		uParam1->f_2 = -1283139781;
		uParam1->f_3 = iParam2;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

int func_312(var uParam0)
{
	switch (uParam0->f_10)
	{
		case -409129282:
		case -19759302:
			return 404851220;
		default:
			break;
	}
	return joaat("none");
}

bool func_313(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

void func_315(var uParam0, int iParam1)
{
	*uParam0++;
	if (*uParam0 >= iParam1)
	{
		*uParam0 = 0;
	}
}

bool func_317(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!aggregate.fme_condor_egg.func_1607(iVar0, 0, 1))
	{
		return false;
	}
	if (!aggregate.fishing_core.func_34(Local_361[iVar0 /*52*/], 32) && !aggregate.fishing_core.func_34(Local_361[iVar0 /*52*/], 64))
	{
		return false;
	}
	return true;
}

bool func_318(int iParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 20)
	{
		uVar0 = (uVar0 || (Local_2026.f_45[iVar1 /*6*/])->f_1);
		iVar1++;
	}
	return aggregate.aberdeenpigfarm.func_175(uVar0, iParam0);
}

bool func_319(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar1 /*4*/])))
		{
		}
		else
		{
			iVar0 = NETWORK::NET_TO_VEH(&(uParam0->f_3[iVar1 /*4*/]));
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
			}
			else if (aggregate.dynamic_craft_scenario.func_370(iVar0, PLAYER::PLAYER_PED_ID(), 1, 1) > 80f)
			{
			}
			else
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

void func_321(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (iVar0 == Local_2026.f_631)
	{
		if (!func_521(iVar0, &fVar1, 1))
		{
			Local_2026.f_631 = 255;
		}
		Local_2026.f_632 = fVar1;
		return;
	}
	if (!func_521(iVar0, &fVar1, 1))
	{
		return;
	}
	if (Local_2026.f_631 != 255 && Local_2026.f_632 < fVar1)
	{
		return;
	}
	Local_2026.f_631 = iVar0;
	Local_2026.f_632 = fVar1;
}

void func_322()
{
	if (aggregate.fme_animal_tagging.func_134(1) && func_523(func_522(&Local_17, &Local_2026), Local_2026.f_10.f_6))
	{
		func_524(Local_2026.f_2);
	}
	if (!aggregate.fme_animal_tagging.func_134(1048576))
	{
		return;
	}
	if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		func_73();
		func_74();
		func_75();
		return;
	}
	func_525();
	if (func_526(255))
	{
		func_527();
	}
	else
	{
		func_73();
	}
	if (VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619) && func_528(VOLUME::_0xF70F00013A62F866(Local_2026.f_619), 30f, 1))
	{
		func_529();
	}
	else
	{
		func_74();
	}
}

void func_323()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (!aggregate.fishing_core.func_34(&Local_17, 536870912) || aggregate.fishing_core.func_34(&Local_17, 524288))
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_134(134217728))
	{
		if (((aggregate.fme_animal_tagging.func_134(1) && aggregate.fme_animal_tagging.func_134(2)) && aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 2097152)) && aggregate.fme_animal_tagging.func_384(Local_2026.f_633) > 8000)
		{
			func_103();
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 64);
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 32);
			aggregate.fme_animal_tagging.func_174(1);
			aggregate.fme_animal_tagging.func_174(8192);
			func_43(&Local_2026, &Local_361);
		}
		return;
	}
	bVar0 = aggregate.fme_animal_tagging.func_134(1);
	bVar1 = true;
	iVar4 = PLAYER::PLAYER_ID();
	if (Local_2026.f_10 == -409129282)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (((!aggregate.net_camp.func_517(iVar2, &Local_17, 4096) || !aggregate.net_camp.func_517(iVar2, &Local_17, 128)) || aggregate.net_camp.func_517(iVar2, &Local_17, 16)) || aggregate.net_camp.func_517(iVar2, &Local_17, 2))
			{
			}
			else if (aggregate.fme_escaped_convicts.func_738(iVar2, 16))
			{
				if (aggregate.fme_escaped_convicts.func_738(iVar2, 32))
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar5 = false;
				iVar3 = (Local_17.f_257[iVar2 /*5*/])->f_3;
				if (bVar0)
				{
					if (NETWORK::_0x255A5EF65EDA9167(iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
					{
						if (iVar3 == iVar4 || _NAMESPACE26::_0x3F59FE6F37869576(iVar4, iVar3))
						{
							bVar5 = true;
							bVar1 = false;
						}
					}
				}
				if (bVar5)
				{
					aggregate.fme_hot_property.func_964(iVar2, 32);
				}
				else
				{
					func_129(iVar2, 0);
				}
				aggregate.fme_hot_property.func_964(iVar2, 16);
			}
			iVar2++;
		}
	}
	else if (Local_2026.f_10 == -19759302)
	{
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if ((Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (!aggregate.net_camp.func_517(iVar2, &Local_17, 67108864) || aggregate.net_camp.func_517(iVar2, &Local_17, 32))
			{
			}
			else if (aggregate.fme_challenges.func_1307(iVar2, 8388608))
			{
				if (aggregate.fme_challenges.func_1307(iVar2, 16777216))
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar5 = false;
				iVar3 = (Local_17.f_16[iVar2 /*12*/])->f_7;
				if (bVar0)
				{
					if (NETWORK::_0x255A5EF65EDA9167(iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
					{
						if (iVar3 == iVar4 || _NAMESPACE26::_0x3F59FE6F37869576(iVar4, iVar3))
						{
							bVar5 = true;
							bVar1 = false;
						}
					}
				}
				if (bVar5)
				{
					aggregate.net_assassination.func_458(iVar2, 16777216);
				}
				else
				{
					func_129(iVar2, 0);
				}
				aggregate.net_assassination.func_458(iVar2, 8388608);
			}
			iVar2++;
		}
	}
	if (bVar1)
	{
		aggregate.fme_animal_tagging.func_174(134217728);
		Local_2026.f_633 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

void func_324()
{
	float fVar0;

	if (func_530(&fVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), fVar0);
	}
}

void func_325()
{
	int iVar0;
	int iVar1;

	if ((aggregate.fme_animal_tagging.func_134(1) && func_531()) && aggregate.fishing_core.func_34(&Local_17, 268435456))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar1))
			{
			}
			else
			{
				aggregate.fme_animal_tagging.func_917(iVar1);
			}
			iVar0++;
		}
	}
	else if ((!aggregate.fme_animal_tagging.func_134(1) && aggregate.fishing_core.func_34(&Local_17, 268435456)) && func_533(1))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_2026.f_618), iVar0))
			{
			}
			else
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
				}
				else if (_NAMESPACE26::_0x81FB74C83C2ED69F(iVar1))
				{
				}
				else
				{
					aggregate.fme_animal_tagging.func_917(iVar1);
				}
			}
			iVar0++;
		}
	}
}

bool func_326()
{
	if (func_534(255) && !func_535(255))
	{
		return false;
	}
	return true;
}

bool func_327()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) || !_NAMESPACE26::_0x3F59FE6F37869576(iVar0, iVar3))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
			{
				return false;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (!aggregate.fishing_core.func_34(Local_361[iVar2 /*52*/], 16777216))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

bool func_328(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (!aggregate.long_update.func_228())
	{
		return false;
	}
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1) && !PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1))
	{
		return false;
	}
	if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, false, 0, false) || !aggregate.binoculars.func_72(iVar2))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (aggregate.dynamic_craft_scenario.func_370(iVar1, PLAYER::PLAYER_PED_ID(), 1, 0) > 30f)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
	{
		iVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
		iVar5 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar1));
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1);
			if (ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
		else
		{
			}
			else
			{
				iVar6++;
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return false;
	}
	else
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
		return false;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iVar3))
	{
		return false;
	}
	iVar7 = NETWORK::PED_TO_NET(iVar3);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&uParam0->f_16[iVar0 /*12*/] != iVar7)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			*uParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_329(int iParam0)
{
	switch (iParam0)
	{
		case 401658241:
		case 1566032419:
			return false;
		default:
			break;
	}
	return true;
}

void func_330(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 32);
			break;
		case 2:
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 64);
			aggregate.fme_animal_tagging.func_174(8192);
			func_115(Local_361[Local_2026.f_634 /*52*/], &Local_2026);
			if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				func_538(7, PLAYER::PLAYER_ID(), 0, aggregate.dynamic_craft_scenario.func_194(0, 8));
			}
			break;
	}
	(Local_361[Local_2026.f_634 /*52*/])->f_48 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	aggregate.net_ambient_content_evaluator.func_86(Local_2026.f_1);
	aggregate.net_ambient_content_evaluator.func_87(Local_2026.f_1, 1, func_294(), 0);
	aggregate.fishing_core.func_89(6);
	aggregate.fme_animal_tagging.func_174(1);
	func_43(&Local_2026, &Local_361);
	aggregate.fme_animal_tagging.func_153(-1256206172, 0);
}

void func_331()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	vector3 vVar8;

	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 1048576))
	{
		func_542();
	}
	if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 128))
	{
		return;
	}
	if ((Local_361[Local_2026.f_634 /*52*/])->f_46 == -1)
	{
		func_543(0);
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) || PED::IS_PED_RAGDOLL(iVar0)) || TASK::IS_PED_GETTING_UP(iVar0)) || PED::_0x3BDFCF25B58B0415(iVar0)) || PED::_0x0E99E3BF11BB6367(iVar0)) || PED::IS_PED_ON_MOUNT(iVar0)) || PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		func_543(0);
		return;
	}
	if ((Local_17.f_16[(Local_361[Local_2026.f_634 /*52*/])->f_46 /*12*/])->f_3 != 22)
	{
		func_543(0);
		return;
	}
	if (((((!func_438((Local_361[Local_2026.f_634 /*52*/])->f_46, &iVar1, 1, 0) || PED::IS_PED_BEING_STUNNED(iVar1, 0)) || PED::_0x3BDFCF25B58B0415(iVar1)) || TASK::IS_PED_GETTING_UP(iVar1)) || PED::_0x0E99E3BF11BB6367(iVar1)) || PED::IS_PED_RAGDOLL(iVar1))
	{
		func_543(0);
		return;
	}
	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 256))
	{
		return;
	}
	if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 256) && !aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 512))
	{
		aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 256);
		return;
	}
	if (aggregate.net_camp.func_517((Local_361[Local_2026.f_634 /*52*/])->f_46, &Local_17, 2))
	{
		func_543(0);
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[(Local_361[Local_2026.f_634 /*52*/])->f_46 /*12*/])->f_5))
	{
		return;
	}
	iVar2 = NETWORK::_0xD7F6781A0ABAF6FB((Local_17.f_16[(Local_361[Local_2026.f_634 /*52*/])->f_46 /*12*/])->f_5);
	if (!ANIMSCENE::_0x25557E324489393C(iVar2))
	{
		return;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(iVar2, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_544(), false)))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_545(), false)) && ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_545(), false) != iVar0)
	{
		func_543(0);
		return;
	}
	if ((ANIMSCENE::_0xB89FCFF19DAFFF28(iVar2, func_545()) || ANIMSCENE::_0xD8254CB2C586412B(iVar2, 0)) || ANIMSCENE::_0xF94692EB9DC15D74(iVar2, 0))
	{
		func_543(1);
		return;
	}
	if (Local_2026.f_636 == -1)
	{
		Local_2026.f_636 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	Var3 = { func_547(iVar2, func_545(), func_546(0)) };
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) && !aggregate.doc_book.func_239(iVar0, -828834893))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
		func_543(0);
		return;
	}
	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 1048576))
	{
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar7, false, 0, false) && aggregate.binoculars.func_72(iVar7))
	{
		WEAPON::_0x94A3C1B804D291EC(iVar0, 0, 0, 0, 0);
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar7, false, 1, false) && aggregate.binoculars.func_72(iVar7))
	{
		WEAPON::_0x94A3C1B804D291EC(iVar0, 1, 1, 1, 0);
		return;
	}
	if (Local_2026.f_636 != -1 && NETWORK::GET_TIME_DIFFERENCE(Local_2026.f_636, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 6000)
	{
		aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 1048576);
		return;
	}
	vVar8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_544(), false), 0f, 0.8f, 0f) };
	if (!aggregate.doc_book.func_239(iVar0, 713668775))
	{
		if (aggregate.fishing_core.func_39(iVar0, vVar8, 0) > 0.2f)
		{
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar8, 1f, 20000, 0.25f, 512, Var3.f_3);
		}
		else
		{
			aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 1048576);
		}
	}
	else if (aggregate.fishing_core.func_39(iVar0, vVar8, 0) < 0.2f)
	{
		aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 1048576);
	}
}

bool func_333(int iParam0)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			return func_550(iParam0);
		case -19759302:
			return func_551(iParam0);
		default:
			break;
	}
	return false;
}

bool func_335(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32);
	bVar3 = aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64);
	if (!bVar2 && !bVar3)
	{
		return false;
	}
	switch (Local_2026.f_10)
	{
		case -409129282:
			if (!func_552())
			{
				return false;
			}
			*uParam0 = PED::_0xD806CD2A4F2C2996(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				return false;
			}
			if (aggregate.fishing_core.func_34(&Local_17, 524288))
			{
				return true;
			}
			if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 8388608))
			{
				return true;
			}
			if (!NETWORK::_0xB07D3185E11657A5(*uParam0))
			{
				return false;
			}
			iVar1 = NETWORK::_0xF260AF6F43953316(*uParam0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (&Local_17.f_257[iVar0 /*5*/] != iVar1)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar0 /*5*/])))
				{
				}
				else
				{
					if (!aggregate.net_camp.func_517(iVar0, &Local_17, 256) && !aggregate.net_camp.func_517(iVar0, &Local_17, 512))
					{
						return false;
					}
					return true;
				}
				iVar0++;
			}
			break;
		case -19759302:
			if (!func_553(1))
			{
				return false;
			}
			*uParam0 = PED::_0xD806CD2A4F2C2996(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				return false;
			}
			if (aggregate.fishing_core.func_34(&Local_17, 524288))
			{
				return true;
			}
			if (!NETWORK::_0xB07D3185E11657A5(*uParam0))
			{
				return false;
			}
			iVar1 = NETWORK::_0xF260AF6F43953316(*uParam0);
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (&Local_17.f_16[iVar0 /*12*/] != iVar1)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
				{
				}
				else
				{
					if (!aggregate.net_camp.func_517(iVar0, &Local_17, 65536) && !aggregate.net_camp.func_517(iVar0, &Local_17, 131072))
					{
						return false;
					}
					return true;
				}
				iVar0++;
			}
			break;
		default:
			return false;
	}
	return false;
}

void func_336(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (func_554(iVar0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		PED::_0xED00D72F81CF7278(iParam0, 0, 0);
		return;
	}
	if (aggregate.barcustomer_interaction.func_46(iVar0, -208384378))
	{
		return;
	}
	TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar0, iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1073741824 /* Float: 2f */, 1);
}

bool func_337()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(&Local_17, 524288))
	{
		return false;
	}
	if ((func_258(1, 255) && func_258(2, 255)) && !func_258(512, 255))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(8192))
	{
		iVar0 = Local_2026.f_626;
	}
	else
	{
		iVar0 = Local_2026.f_625;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || !aggregate.annesburg.func_142(Global_35, iVar0, 1, 0))
	{
		return false;
	}
	if (Local_2026.f_10 == -19759302)
	{
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if ((Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar2 /*12*/])))
			{
			}
			else if (aggregate.annesburg.func_142(NETWORK::NET_TO_PED(&(Local_17.f_16[iVar2 /*12*/])), iVar0, 1, 0))
			{
				iVar1 = 1;
			}
			else
			{
				iVar2++;
			}
		}
	}
	else if (Local_2026.f_10 == -409129282)
	{
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (!aggregate.net_camp.func_517(iVar3, &Local_17, 128))
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar3 /*5*/])))
			{
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar3 /*5*/])), iVar0, false, 0))
			{
				iVar1 = 1;
			}
			else
			{
				iVar3++;
			}
		}
	}
	return iVar1;
}

void func_341(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.net_coach_holdup.func_557(iParam0, uParam1);
	func_558(iParam0);
	if ((iVar0 == -1088690539 || iVar0 == 0) || func_398(iParam0, 0))
	{
		func_215(iParam0);
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	func_559(iParam0, iVar1);
	aggregate.bigvalleyomj.func_36(iParam0, iVar1);
	func_561(iParam0, iVar1);
	func_562(iParam0, iVar1);
	func_563(iParam0, iVar1, uParam1, uParam2, fParam3);
	func_564(iParam0, iVar1);
	func_565(iParam0, iVar1);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(aggregate.net_coach_holdup.func_566(iParam0, uParam1)))
	{
		return;
	}
	func_567(iParam0, uParam1, uParam2, fParam3);
	func_568(iParam0, iVar1);
	switch (iVar0)
	{
		case joaat("driver"):
			func_569(iParam0, uParam1, uParam2, fParam3);
			break;
		case -193064196:
			func_570(iParam0, uParam1, uParam2, fParam3);
			break;
		case -522830230:
			func_571(iParam0, uParam1, uParam2, fParam3);
			break;
		case 1095997463:
			func_572(iParam0, uParam1, uParam2, fParam3);
			break;
		case -306837416:
			func_573(iParam0, uParam1, uParam2, fParam3);
			break;
		case 824585797:
			func_574(iParam0, uParam1, uParam2, fParam3);
			break;
		case 1566032419:
			func_575(iParam0, uParam1, uParam2, fParam3);
			break;
		case 401658241:
			func_576(iParam0, uParam1, uParam2, fParam3);
			break;
		case -2133983324:
			func_577(iParam0, uParam1, uParam2, fParam3);
			break;
	}
}

void func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	switch ((Local_17.f_16[iParam0 /*12*/])->f_2)
	{
		case -306837416:
		case -193064196:
			break;
		default:
			return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		iVar0 = PED::GET_MOUNT(iVar0);
	}
	if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar0))
	{
		return;
	}
	if (!func_578(iParam0, &iVar1))
	{
		return;
	}
	if (aggregate.fme_supply_train.func_1207(iVar1))
	{
		return;
	}
	vVar2 = { func_580(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_HEADING(iVar1), (Local_17.f_16[iParam0 /*12*/])->f_8) };
	if (aggregate.fishing_core.func_39(iVar0, vVar2, 1) < 15f)
	{
		ENTITY::_0x0918E3565C20F03C(iVar0, vVar2, ENTITY::GET_ENTITY_HEADING(iVar1), false, 1);
	}
}

void func_343(int iParam0)
{
	int iVar0;

	switch ((Local_17.f_16[iParam0 /*12*/])->f_2)
	{
		case 1095997463:
			if (((Local_17.f_16[iParam0 /*12*/])->f_3 == 17 || (Local_17.f_16[iParam0 /*12*/])->f_3 == 25) || (Local_17.f_16[iParam0 /*12*/])->f_3 == 26)
			{
				return;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iParam0 /*12*/])))
			{
				if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 19)
				{
					aggregate.net_assassination.func_458(iParam0, 524288);
				}
				return;
			}
			if (!func_438(iParam0, &iVar0, 1, 0))
			{
				return;
			}
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 19)
			{
				if (!aggregate.fme_challenges.func_1307(iParam0, 262144) || aggregate.fme_challenges.func_1307(iParam0, 524288))
				{
					PED::_0x89F5E7ADECCCB49C(iVar0, func_581());
					aggregate.net_assassination.func_458(iParam0, 262144);
				}
			}
			else if (aggregate.fme_challenges.func_1307(iParam0, 262144) || aggregate.fme_challenges.func_1307(iParam0, 524288))
			{
				PED::_0x58F7DB5BD8FA2288(iVar0);
				aggregate.net_assassination.func_458(iParam0, 262144);
			}
			aggregate.net_assassination.func_458(iParam0, 524288);
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 21 && aggregate.net_camp.func_517(iParam0, &Local_17, 4194304))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.5f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 2f);
			}
			break;
	}
}

void func_344(int iParam0)
{
	int iVar0;

	if ((Local_17.f_16[iParam0 /*12*/])->f_2 != 1095997463)
	{
		return;
	}
	if ((aggregate.net_camp.func_517(iParam0, &Local_17, 32) || aggregate.net_camp.func_517(iParam0, &Local_17, 65536)) || aggregate.net_camp.func_517(iParam0, &Local_17, 131072))
	{
		if (!func_438(iParam0, &iVar0, 1, 0))
		{
			return;
		}
		func_582(iVar0);
		return;
	}
	if (!aggregate.fme_challenges.func_1307(iParam0, 8388608))
	{
		return;
	}
	if (!func_438(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 16777216))
	{
		NETWORK::_0xEE5AE9956743BA20(iVar0, false);
		return;
	}
	NETWORK::_0xEE5AE9956743BA20(iVar0, true);
	func_582(iVar0);
}

void func_345(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (!aggregate.net_camp.func_517(iParam0, &Local_17, 128))
	{
		return;
	}
	func_583(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iParam0 /*5*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iParam0 /*5*/]));
	if (aggregate.fme_escaped_convicts.func_738(iParam0, 16))
	{
		bVar1 = !aggregate.fme_escaped_convicts.func_738(iParam0, 32);
		NETWORK::_0xEE5AE9956743BA20(iVar0, bVar1);
	}
	if ((aggregate.net_camp.func_517(iParam0, &Local_17, 256) || aggregate.net_camp.func_517(iParam0, &Local_17, 512)) || aggregate.net_camp.func_517(iParam0, &Local_17, 2))
	{
		bVar2 = true;
	}
	if (func_584(iParam0, bVar2))
	{
		TASK::_0xA21AA2F0C2180125(iVar0, 1);
	}
	else
	{
		TASK::_0xA21AA2F0C2180125(iVar0, 0);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 64))
	{
		GRAPHICS::_0x7DFB49BCDB73089A(iVar0, false);
	}
	else
	{
		GRAPHICS::_0x7DFB49BCDB73089A(iVar0, true);
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 16))
	{
		OBJECT::DELETE_OBJECT(&iVar0);
		return;
	}
	iVar3 = ENTITY::_0x61914209C36EFDDB(iVar0);
	switch (iVar3)
	{
		case 3:
			break;
		default:
			return;
	}
	if (bVar2)
	{
		if ((aggregate.fishing_core.func_34(&Local_17, 524288) && iParam0 == Local_17.f_328) && (aggregate.fishing_core.func_34(&Local_17, 16777216) || aggregate.fishing_core.func_34(&Local_17, 33554432)))
		{
			ENTITY::_0x18FF3110CF47115D(iVar0, 2, true);
			ENTITY::_0x18FF3110CF47115D(iVar0, 22, false);
			ENTITY::_0x18FF3110CF47115D(iVar0, 21, false);
		}
		else
		{
			ENTITY::_0x18FF3110CF47115D(iVar0, 2, false);
		}
		ENTITY::_0x18FF3110CF47115D(iVar0, 3, false);
		ENTITY::_0x18FF3110CF47115D(iVar0, 11, false);
	}
}

bool func_346()
{
	if (aggregate.fishing_core.func_34(&Local_17, 524288) || aggregate.fishing_core.func_34(&Local_17, 536870912))
	{
		return false;
	}
	if (aggregate.camera_item.func_12(&Local_17) <= 2)
	{
		return false;
	}
	if (!aggregate.fishing_core.func_34(&Local_17, 268435456))
	{
		return false;
	}
	return true;
}

void func_347(float fParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	switch (fParam0->f_10)
	{
		case -409129282:
			if (((iParam3 >= 4 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_257[iParam3 /*5*/]))) || aggregate.net_camp.func_517(iParam3, uParam2, 2)) || aggregate.net_camp.func_517(iParam3, uParam2, 16))
			{
				return;
			}
			fParam0->f_561.f_2[iParam3] = NETWORK::NET_TO_ENT(&(uParam2->f_257[iParam3 /*5*/]));
			break;
		case -19759302:
			if (iParam3 >= fParam0->f_10.f_8)
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (!aggregate.net_camp.func_517(iVar0, uParam2, 1024))
				{
				}
				else
				{
					if (iVar1 == iParam3)
					{
					}
					else
					{
						iVar1++;
						iVar0++;
					}
					if (((iVar0 >= 20 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_16[iVar0 /*12*/]))) || aggregate.net_camp.func_517(iVar0, uParam2, 32)) || (uParam2->f_16[iVar0 /*12*/])->f_2 == -1088690539)
					{
						fParam0->f_561.f_2[iParam3] = 0;
						return;
					}
					fParam0->f_561.f_2[iParam3] = NETWORK::NET_TO_ENT(&(uParam2->f_16[iVar0 /*12*/]));
				}
			}
			default:
				break;
	}
}

bool func_348(var uParam0, float fParam1)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), &Global_1273882))
	{
		return false;
	}
	if (fParam1 > 800f)
	{
		return true;
	}
	return false;
}

bool func_350(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	struct<2> Var1;
	float fVar3;
	int iVar4;
	bool bVar5;

	if (uParam0->f_54 == joaat("none"))
	{
		return false;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), &Global_1273882))
	{
		return false;
	}
	bVar0 = false;
	Var1 = -1;
	Var1.f_1 = -1;
	fVar3 = 100f;
	if ((aggregate.aberdeenpigfarm.func_158(Var1) && !aggregate.flow_controller.func_165(Var1, uParam0->f_52)) && aggregate.flow_controller.func_169(Var1))
	{
		return false;
	}
	switch (uParam0->f_54)
	{
		case joaat("attack"):
		case 404851220:
			if (!bParam3)
			{
				bVar0 = true;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_2[uParam0->f_55])) && ENTITY::IS_ENTITY_A_PED(&(uParam0->f_2[uParam0->f_55]))) && PED::_0x3D9F958834AB9C30(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_2[uParam0->f_55]))) == Global_35)
			{
				return true;
			}
			if (func_586(uParam0, bVar0, 1, 0, fVar3, uParam2) && func_587(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
			{
				return true;
			}
			break;
		case joaat("defend"):
			bVar0 = true;
			if (func_586(uParam0, bVar0, 0, 1, fVar3, uParam2) && func_587(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
			{
				return true;
			}
			break;
	}
	if (uParam0->f_55 == 11)
	{
		uParam0->f_55 = 0;
	}
	else
	{
		uParam0->f_55++;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(uParam0->f_1), uParam0->f_56))
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_56);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
			if (_NAMESPACE26::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iVar4))
			{
				*bParam1 = 1;
				return true;
			}
			else if (bVar0)
			{
				if (PED::GET_JACK_TARGET(Global_35) == PLAYER::GET_PLAYER_PED(iVar4))
				{
					bVar5 = true;
				}
				else if (PED::_0xD0B7AEB56229D317(Global_35) == PLAYER::GET_PLAYER_PED(iVar4))
				{
					bVar5 = true;
				}
				if (bVar5 && func_587(uParam0, PLAYER::PLAYER_PED_ID(), 800f))
				{
					return true;
				}
			}
		}
	}
	if (uParam0->f_56 == 31)
	{
		uParam0->f_56 = 0;
	}
	else
	{
		uParam0->f_56++;
	}
	return false;
}

bool func_351(float fParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	switch (fParam0->f_10)
	{
		case -409129282:
			if (!PED::_0xA911EE21EDF69DAF(iVar0))
			{
				return false;
			}
			iVar2 = 0;
			while (iVar2 < fParam0->f_10.f_14)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_257[iVar2 /*5*/])))
				{
				}
				else if (aggregate.net_camp.func_517(iVar2, uParam2, 1))
				{
				}
				else if (aggregate.net_camp.func_517(iVar2, uParam2, 2))
				{
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(&(uParam2->f_257[iVar2 /*5*/])), iVar0))
				{
				}
				else
				{
					return true;
				}
				iVar2++;
			}
			break;
		case -19759302:
			if (aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 262144) && Local_17.f_321 > 1)
			{
				return true;
			}
			else if (aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 524288))
			{
				return true;
			}
			if (!PED::_0xA911EE21EDF69DAF(iVar0))
			{
				return false;
			}
			iVar1 = 0;
			while (iVar1 < fParam0->f_10.f_8)
			{
				if ((uParam2->f_16[iVar1 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (aggregate.net_camp.func_517(iVar1, uParam2, 32))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_16[iVar1 /*12*/])))
				{
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(&(uParam2->f_16[iVar1 /*12*/])), iVar0))
				{
				}
				else
				{
					return true;
				}
				iVar1++;
			}
			break;
	}
	return false;
}

bool func_352(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (Local_2026.f_10)
	{
		case -19759302:
			if (!func_438(iParam0, &iVar0, 0, 1))
			{
				return false;
			}
			*uParam1 = aggregate.annesburg.func_253(iVar0);
			return true;
		case -409129282:
			if (!func_81(iParam0, &iVar1))
			{
				return false;
			}
			*uParam1 = aggregate.annesburg.func_253(iVar1);
			return true;
		default:
			break;
	}
	return false;
}

bool func_354(vector3 vParam0, var uParam3)
{
	float fVar0;
	int iVar1;

	fVar0 = BUILTIN::VDIST(Global_36, vParam0);
	if (fVar0 > 200f)
	{
		return true;
	}
	if (fVar0 < 40f)
	{
		*uParam3 = 1;
		return true;
	}
	if (!CAM::IS_SPHERE_VISIBLE(vParam0, 4f))
	{
		return true;
	}
	if (!func_234(Local_2026.f_548))
	{
		Local_2026.f_548 = GRAPHICS::CREATE_TRACKED_POINT();
		GRAPHICS::SET_TRACKED_POINT_INFO(Local_2026.f_548, vParam0 + Vector(0.5f, 0f, 0f), 3f);
		return false;
	}
	iVar1 = GRAPHICS::_0xDFE332A5DA6FE7C9(Local_2026.f_548);
	if (iVar1 == -1)
	{
		return false;
	}
	*uParam3 = GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_2026.f_548);
	return true;
}

bool func_355(var uParam0, var uParam1)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;

	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return false;
	}
	bVar0 = aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64);
	fVar2 = 250f;
	fVar4 = 250f;
	fVar6 = 250f;
	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar8 = 0;
			while (iVar8 < 20)
			{
				if ((Local_17.f_16[iVar8 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar8 /*12*/])))
				{
				}
				else
				{
					iVar13 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar8 /*12*/]));
					fVar1 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar13, false, false));
					iVar10 = aggregate.annesburg.func_253(iVar13);
					bVar11 = aggregate.net_camp.func_517(iVar8, &Local_17, 8);
					bVar12 = aggregate.net_camp.func_517(iVar8, &Local_17, 16);
					if ((bVar11 && !bVar0) || (bVar12 && bVar0))
					{
						if (fVar1 < fVar6)
						{
							fVar6 = fVar1;
							iVar7 = iVar10;
						}
					}
					else if ((bVar12 && !bVar0) || (bVar11 && bVar0))
					{
						if (fVar1 < fVar4)
						{
							fVar4 = fVar1;
							iVar5 = iVar10;
						}
					}
					else if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar10;
					}
				}
				iVar8++;
			}
			break;
		case -409129282:
			iVar9 = 0;
			while (iVar9 < 4)
			{
				if (aggregate.net_camp.func_517(iVar9, &Local_17, 2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar9 /*5*/])))
				{
				}
				else
				{
					iVar14 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar9 /*5*/]));
					fVar1 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar14, false, false));
					iVar10 = aggregate.annesburg.func_253(iVar14);
					bVar11 = aggregate.net_camp.func_517(iVar9, &Local_17, 1);
					bVar12 = aggregate.net_camp.func_517(iVar9, &Local_17, 32);
					if ((bVar11 && !bVar0) || (bVar12 && bVar0))
					{
						if (fVar1 < fVar6)
						{
							fVar6 = fVar1;
							iVar7 = iVar10;
						}
					}
					else if ((bVar12 && !bVar0) || (bVar11 && bVar0))
					{
						if (fVar1 < fVar4)
						{
							fVar4 = fVar1;
							iVar5 = iVar10;
						}
					}
					else if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar10;
					}
				}
				iVar9++;
			}
			break;
		default:
			return false;
	}
	if (fVar2 < 250f)
	{
		*uParam0 = iVar3;
		return true;
	}
	if (fVar4 < 250f)
	{
		*uParam0 = iVar5;
		*uParam1 = 1;
		return true;
	}
	if (fVar6 < 250f)
	{
		*uParam0 = iVar7;
		return true;
	}
	return false;
}

void func_356(bool bParam0)
{
	if (bParam0)
	{
		if (aggregate.fme_animal_tagging.func_134(4))
		{
			return;
		}
		if (aggregate.fme_animal_tagging.func_661(255))
		{
			return;
		}
		aggregate.fme_animal_tagging.func_334(1);
		aggregate.fme_animal_tagging.func_174(4);
	}
	else
	{
		if (!aggregate.fme_animal_tagging.func_134(4))
		{
			return;
		}
		aggregate.fme_animal_tagging.func_334(0);
		aggregate.fme_animal_tagging.func_174(4);
	}
}

void func_359(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;

	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam3)
	{
		fVar0 = 150f;
		fVar1 = 200f;
		fVar2 = 30f;
	}
	else if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		fVar0 = 70f;
		fVar1 = 130f;
		fVar2 = 25f;
	}
	else
	{
		fVar0 = 115f;
		fVar1 = 180f;
		fVar2 = 25f;
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam2, false, false) };
	if (INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vVar3))
	{
		aggregate.fm_mission_controller.func_7506(&vVar3, 200f);
	}
	else
	{
		aggregate.fm_mission_controller.func_7506(&vVar3, 1088421888 /* Float: 7f */);
	}
	uParam0->f_17.f_6 = { vVar3 };
	uParam0->f_17 = { fVar1, fVar1, fVar2 };
	uParam0->f_17.f_9 = -432403087;
	uParam0->f_6.f_6 = { vVar3 };
	uParam0->f_6 = { fVar0, fVar0, fVar2 };
	uParam0->f_6.f_9 = -432403087;
	uParam0->f_4 = iParam2;
	uParam0->f_5 = 3;
	uParam1->f_5 = 1;
	*uParam1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
	uParam1->f_6 = { vVar3 + aggregate.fme_king_of_the_castle.func_1063(*uParam1) * Vector(10f, 10f, 10f) };
	aggregate.fme_animal_tagging.func_924(*uParam0, *uParam1, 1, 1, 1);
}

int func_361()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return Local_2026.f_174;
		case -409129282:
			return Local_2026.f_174.f_4;
		default:
			break;
	}
	return 0;
}

bool func_362()
{
	if (func_258(1, 255))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(&Local_17, 64))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(134217728))
	{
		if (aggregate.fme_animal_tagging.func_384(Local_2026.f_633) > 2000)
		{
			return false;
		}
		return true;
	}
	if (func_66(&Local_17, &Local_2026))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_384(Local_17.f_318) > 2000)
	{
		return false;
	}
	return true;
}

int func_363(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	return (Local_361[iParam0 /*52*/])->f_41;
}

void func_364(bool bParam0)
{
	LAW::_0x55F37F5F3F2475E1();
	if (bParam0)
	{
		LAW::_0xC76F252371150D9A(PLAYER::PLAYER_ID());
	}
	aggregate.fme_animal_tagging.func_174(33554432);
}

void func_366(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_134(iParam0))
	{
		return;
	}
	if (func_598(func_597(iParam0), 1, bParam1))
	{
		aggregate.fme_animal_tagging.func_174(iParam0);
	}
}

int func_367(bool bParam0)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			return func_600(bParam0);
		case -19759302:
			return func_601(bParam0);
		default:
			break;
	}
	return 0;
}

void func_369()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_363(255) == 3)
	{
		return;
	}
	if (Local_17.f_299 == 0)
	{
		if (aggregate.fm_deathmatch_controller.func_962() == 3)
		{
			func_603(3);
		}
		return;
	}
	iVar0 = Local_17.f_299;
	iVar1 = func_363(255);
	if (func_258(256, 255) && func_258(1, 255))
	{
		aggregate.fm_mission_controller.func_4570(1, 0, 1);
		func_86(0);
		func_87(1);
		func_84(1);
	}
	if ((func_258(1, 255) && !func_258(512, 255)) && iVar1 != 3)
	{
		CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
	}
	if (aggregate.nb_animal_attack.func_161(8))
	{
		func_105(iVar0);
		func_603(3);
		return;
	}
	switch (iVar1)
	{
		case 0:
			func_606(iVar0);
			func_607(iVar0);
			if (aggregate.fm_deathmatch_controller.func_962() == iVar1)
			{
				return;
			}
			if (Local_2026.f_537 == 0)
			{
				func_603(3);
				return;
			}
			func_603(1);
			break;
		case 1:
			if (func_258(256, 255) && func_258(1, 255))
			{
				func_608();
			}
			if (!func_258(32, 255))
			{
				if (func_609(iVar0, Local_17.f_299.f_2))
				{
					func_261();
				}
				func_262(32);
			}
			func_610(iVar0, Local_17.f_299.f_2);
			if (aggregate.fm_deathmatch_controller.func_962() == iVar1)
			{
				return;
			}
			if (func_258(1, 255))
			{
				func_611();
				func_612(iVar0, Local_17.f_299.f_2);
				func_613(iVar0, Local_17.f_299.f_2);
				if (!func_258(256, 255))
				{
					AUDIO::_0x6339C1EA3979B5F7("default", "RDRO_Scripted_Cutscene_Scenes");
					func_614();
				}
			}
			func_262(256);
			func_615();
			func_603(2);
			break;
		case 2:
			if (!func_258(64, 255))
			{
				iVar2 = aggregate.fme_animal_tagging.func_384(Local_17.f_299.f_3);
				iVar3 = func_616(iVar0, Local_17.f_299.f_2);
				if (func_258(1, 255))
				{
					func_617(iVar0, Local_17.f_299.f_2, iVar3, iVar2);
				}
				if (iVar2 < iVar3)
				{
					return;
				}
			}
			else if (func_258(1, 255))
			{
				func_608();
			}
			func_262(64);
			func_618(iVar0, Local_17.f_299.f_2);
			if (aggregate.fm_deathmatch_controller.func_962() == iVar1 && !aggregate.nb_animal_attack.func_161(4))
			{
				return;
			}
			if (Local_17.f_299.f_2 < Local_2026.f_537 && aggregate.fm_deathmatch_controller.func_962() != 3)
			{
				func_495(32);
				func_495(64);
				func_615();
				func_603(1);
				return;
			}
			func_105(iVar0);
			func_603(3);
			break;
	}
}

bool func_370()
{
	struct<2> Var0;

	if (aggregate.aberdeenpigfarm.func_156())
	{
		return true;
	}
	Var0 = { aggregate.aberdeenpigfarm.func_159() };
	if (!aggregate.aberdeenpigfarm.func_158(Var0))
	{
		return false;
	}
	if (!aggregate.flow_controller.func_165(Local_2026.f_2, Var0))
	{
		return true;
	}
	return false;
}

void func_371(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_620(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_372(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_621(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_373(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_622(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_374(var uParam0, var uParam1, float fParam2)
{
	if (func_623(uParam0, uParam1, fParam2))
	{
		func_624(uParam1, fParam2);
		aggregate.fme_animal_tagging.func_174(131072);
	}
	else
	{
		aggregate.fme_escaped_convicts.func_736(&(fParam2->f_202.f_51));
		aggregate.fme_animal_tagging.func_174(131072);
	}
	if (aggregate.fme_animal_tagging.func_134(131072))
	{
		if (aggregate.fme_animal_tagging.func_134(262144))
		{
			func_625(0);
			aggregate.fme_animal_tagging.func_174(262144);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(262144))
	{
		func_625(1);
		aggregate.fme_animal_tagging.func_174(262144);
	}
}

void func_375()
{
	int iVar0;

	iVar0 = Local_2026.f_174.f_1;
	if (func_626(iVar0))
	{
		func_451(iVar0, 1);
	}
	else
	{
		func_451(iVar0, 0);
	}
	if (func_627(iVar0))
	{
		func_452(iVar0, 1);
	}
	else
	{
		func_452(iVar0, 0);
	}
}

void func_376()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_628(&iVar0, &iVar1);
	func_629(iVar2, iVar0, iVar1);
}

void func_377(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_531())
	{
		func_246(fParam2);
		return;
	}
	iVar0 = func_630(uParam0, uParam1, fParam2);
	switch (iVar0)
	{
		case 0:
			func_246(fParam2);
			return;
		case 8:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 9;
			}
			break;
		case 1:
			if (func_632())
			{
				iVar0 = 2;
			}
			break;
		case 3:
			if (func_632())
			{
				iVar0 = 4;
			}
			break;
		case 10:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 11;
			}
			break;
		case 12:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 13;
			}
			break;
		case 18:
			if (!func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 19;
			}
			break;
		case 17:
			if (!func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 16;
			}
			break;
		case 21:
			if (!func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 20;
			}
			break;
		case 24:
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 25;
			}
			break;
		case 27:
			switch (aggregate.camera_item.func_12(&Local_2026))
			{
				case -19759302:
					func_633(&bVar1, &bVar2, &iVar4, &iVar5);
					break;
				case -409129282:
					func_634(&bVar1, &bVar2, &iVar4, &iVar5);
					break;
			}
			if (func_631(uParam0, fParam2, 1, 0))
			{
				iVar0 = 26;
			}
			else if (bVar2)
			{
				iVar0 = 28;
			}
			if (iVar0 != 28)
			{
				bVar3 = func_635(iVar0, bVar1, iVar4, iVar5);
			}
			break;
		case 22:
			if (func_631(uParam0, fParam2, 1, 1))
			{
				iVar0 = 23;
			}
			break;
		case 14:
			if (func_631(uParam0, fParam2, 1, 1))
			{
				iVar0 = 15;
			}
			break;
		case 31:
			if (func_631(uParam0, fParam2, 1, 1))
			{
				iVar0 = 30;
			}
			break;
	}
	func_636(iVar0, fParam2, bVar3);
}

void func_378()
{
	if (func_637())
	{
		func_638();
		aggregate.fme_animal_tagging.func_174(4);
		return;
	}
	if (func_639())
	{
		func_640();
		aggregate.fme_animal_tagging.func_174(2);
	}
}

void func_379(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!aggregate.fme_animal_tagging.func_134(65536))
	{
		iVar1 = func_641(fParam0);
		iVar2 = aggregate.dynamic_craft_scenario.func_156(iVar1);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			aggregate.fme_round_up.func_689(&(Local_2026.f_202.f_77), iVar2, iVar0);
			aggregate.fme_round_up.func_689(&(Local_2026.f_202.f_77), iVar1, iVar0);
			iVar0++;
		}
		aggregate.fme_animal_tagging.func_174(65536);
	}
}

void func_380(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if ((aggregate.annesburg.func_217(fParam2->f_202.f_61) && aggregate.camera_item.func_4(fParam2->f_202.f_61, 1)) && aggregate.camera_item.func_31(fParam2->f_202.f_61, 1))
	{
		iVar0 = func_648(uParam0, fParam2);
		if (iVar0 != -1)
		{
			((*uParam1)[Local_2026.f_634 /*52*/])->f_46 = iVar0;
			aggregate.fme_animal_tagging.func_1147((*uParam1)[Local_2026.f_634 /*52*/], 128);
		}
	}
	iVar1 = func_522(uParam0, fParam2);
	if (iVar1 < 0)
	{
		iVar1 = 0;
	}
	if (func_649(&bVar2))
	{
		if (bVar2)
		{
			func_650(uParam0, uParam1, fParam2);
		}
		aggregate.fme_animal_tagging.func_513(&(Local_2026.f_202.f_62), &(fParam2->f_202.f_77), iVar1, 0, 30000, 0, 404851220, 0, 0, 0, 0);
	}
	else
	{
		aggregate.fme_animal_tagging.func_527(&(fParam2->f_202.f_77), 0, 0);
		aggregate.fme_animal_tagging.func_244(&(Local_2026.f_202.f_62), 1);
	}
	if (func_652(&iVar3))
	{
		if (aggregate.annesburg.func_217(fParam2->f_202.f_61))
		{
			aggregate.binoculars.func_37(fParam2->f_202.f_61, 1, 1, 1);
			aggregate.fme_animal_tagging.func_454(fParam2->f_202.f_61, 1, 1);
			func_655(fParam2->f_202.f_61, iVar3, 0, 0, 0);
		}
		else
		{
			fParam2->f_202.f_61 = aggregate.binoculars.func_20(func_656(), joaat("INPUT_INTERACT_LOCKON_ROB"), 3, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			func_655(fParam2->f_202.f_61, iVar3, 0, 0, 0);
		}
	}
	else if (aggregate.annesburg.func_217(fParam2->f_202.f_61))
	{
		aggregate.binoculars.func_37(fParam2->f_202.f_61, 0, 1, 1);
		aggregate.fme_animal_tagging.func_454(fParam2->f_202.f_61, 0, 1);
	}
	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return;
	}
	if (func_658())
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_134(512))
	{
		func_660(func_659(), 0, 0);
		aggregate.fme_animal_tagging.func_174(512);
	}
	if (aggregate.fme_animal_tagging.func_134(1024))
	{
		func_660(func_661(), 0, 0);
		aggregate.fme_animal_tagging.func_174(1024);
	}
	if (aggregate.fme_animal_tagging.func_134(2048))
	{
		func_660(func_662(), 0, 0);
		aggregate.fme_animal_tagging.func_174(2048);
	}
	if (aggregate.fme_animal_tagging.func_134(8192))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2026.f_202.f_52))
		{
			func_660(func_663(), 0, 0);
		}
		Local_2026.f_202.f_52 = 255;
		aggregate.fme_animal_tagging.func_174(8192);
	}
	if (aggregate.fme_animal_tagging.func_134(4096))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2026.f_202.f_52) && Local_2026.f_202.f_52 != PLAYER::PLAYER_ID())
		{
			func_660(func_664(), 0, 0);
		}
		Local_2026.f_202.f_52 = 255;
		aggregate.fme_animal_tagging.func_174(4096);
	}
	if (!aggregate.fme_animal_tagging.func_134(32768) && func_346())
	{
		func_660(func_665(), aggregate.net_assassination.func_1149(), aggregate.fme_animal_tagging.func_764());
		aggregate.fme_animal_tagging.func_174(32768);
	}
	if (aggregate.fme_animal_tagging.func_134(16384))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2026.f_202.f_52))
		{
			func_660(func_668(), 0, 0);
		}
		Local_2026.f_202.f_52 = 255;
		aggregate.fme_animal_tagging.func_174(16384);
	}
}

void func_385(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 26, &uParam1);
}

void func_386(var uParam0)
{
	if (&Global_1051202->f_16[0] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0])))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 31, 26, &(Global_1051202->f_16[0]));
}

bool func_387(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		aggregate.fme_condor_egg.func_42(Var0, 1323038251, &iVar5, 0);
	}
	return iVar5;
}

bool func_388(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	switch (iParam0)
	{
		case 0:
			fVar0 = 0.1f;
			break;
		case 1:
			fVar0 = 0.05f;
			break;
		case 2:
			fVar0 = 0.05f;
			break;
	}
	bVar2 = fVar1 < fVar0;
	return bVar2;
}

bool func_389(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	bool bVar15;
	int iVar16;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_278[iParam0 /*2*/])))
	{
		return true;
	}
	if (!func_176(&Var0, iParam0))
	{
		return true;
	}
	aggregate.fme_condor_egg.func_42(Var0, 873236619, &bVar15, 0);
	aggregate.fme_animal_tagging.func_143(Var0, 644136394, &vVar8, 0);
	aggregate.fme_animal_tagging.func_143(Var0, -2119193689, &vVar11, 0);
	aggregate.fme_animal_tagging.func_142(Var0, 1471513692, &fVar14, 0);
	aggregate.fme_animal_tagging.func_40(Var0, 1339124518, &uVar5, 0);
	if (bVar15)
	{
		iVar7 = uVar5;
	}
	else
	{
		iVar6 = uVar5;
	}
	if (!bVar15)
	{
		if (!STREAMING::IS_MODEL_VALID(iVar6) || iVar6 == 0)
		{
			return true;
		}
	}
	if (bVar15)
	{
		iVar16 = PROPSET::_CREATE_PROPSET_2(iVar7, vVar8, func_669(iParam0), fVar14, 1200f, true, true);
		if (!PROPSET::_DOES_PROPSET_EXIST(iVar16))
		{
			return true;
		}
		Local_17.f_278[iParam0 /*2*/] = NETWORK::_0x74F99EF7EF503398(iVar16);
		aggregate.net_assassination.func_458(iParam0, 1);
	}
	else
	{
		if (!aggregate.fme_archery.func_922(Local_17.f_278[iParam0 /*2*/], iVar6, vVar8, 1, 0))
		{
			return false;
		}
		if (fVar14 == 0f && !aggregate.annesburg.func_121(vVar11))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(&(Local_17.f_278[iParam0 /*2*/])), vVar11, 2, false);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(&(Local_17.f_278[iParam0 /*2*/])), fVar14);
		}
	}
	return true;
}

float func_390(var uParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_173(uParam0, &Var0, iParam1))
	{
		aggregate.fme_animal_tagging.func_142(Var0, 1922377121, &fVar5, 0);
	}
	return fVar5;
}

bool func_394(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = &uParam2->f_45[iParam0 /*6*/];
	iVar1 = func_179(uParam2, iParam0);
	vVar2 = { (uParam2->f_45[iParam0 /*6*/])->f_2 };
	fVar5 = func_674(&Local_2026, iParam0);
	iVar6 = func_675(&Local_2026, iParam0);
	iVar7 = (uParam2->f_45[iParam0 /*6*/])->f_5;
	if (func_676())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
		{
			iVar8 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
			PED::DELETE_PED(&iVar8);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_1))
		{
			iVar8 = NETWORK::NET_TO_PED((Local_17.f_16[iParam0 /*12*/])->f_1);
			PED::DELETE_PED(&iVar8);
		}
		return true;
	}
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		iVar1 = func_180(iVar0);
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 16777216))
	{
		return true;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iVar7 /*4*/])))
	{
		return true;
	}
	iVar9 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iVar7 /*4*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar9))
	{
		return true;
	}
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		return true;
	}
	if ((!aggregate.fme_challenges.func_1307(iParam0, 1) && !aggregate.fme_challenges.func_1307(iParam0, 65536)) && func_677(&(uParam2->f_45[iParam0 /*6*/])))
	{
		if (aggregate.annesburg.func_121(vVar2))
		{
			return true;
		}
		fVar5 = (fVar5 + ENTITY::GET_ENTITY_HEADING(iVar9));
		vVar2 = { func_580(ENTITY::GET_ENTITY_COORDS(iVar9, false, false), fVar5, vVar2) };
		aggregate.fm_mission_controller.func_7506(&vVar2, 1088421888 /* Float: 7f */);
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 2) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		if (!func_678(iParam0, &iVar10))
		{
			iVar10 = func_181(iVar0);
		}
		if (iVar10 == 0)
		{
			return true;
		}
		aggregate.fme_challenges.func_1263(&((uParam1->f_16[iParam0 /*12*/])->f_1), iVar10, vVar2, fVar5, 1, 0, 1, 1, 1);
		return false;
	}
	func_680(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		if (aggregate.fme_challenges.func_1307(iParam0, 2))
		{
			if (!aggregate.fme_escaped_convicts.func_1084(uParam1->f_16[iParam0 /*12*/], (uParam1->f_16[iParam0 /*12*/])->f_1, iVar1, -1, 1, 1, 1, 0))
			{
				return false;
			}
		}
		else if (aggregate.fme_challenges.func_1307(iParam0, 1))
		{
			if (!aggregate.fme_supply_train.func_1118(uParam1->f_16[iParam0 /*12*/], &(uParam1->f_3[iVar7 /*4*/]), iVar1, iVar6, 1, 1, 1))
			{
				return false;
			}
		}
		else if (!aggregate.fme_challenges.func_1263(uParam1->f_16[iParam0 /*12*/], iVar1, vVar2, fVar5, 1, 0, 1, 1, 1))
		{
			return false;
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		NETWORK::_0x7182EDDA1EE7DB5A((uParam1->f_16[iParam0 /*12*/])->f_1);
	}
	NETWORK::_0x7182EDDA1EE7DB5A(&(uParam1->f_16[iParam0 /*12*/]));
	if (!func_683(iParam0))
	{
		return false;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 2) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED((uParam1->f_16[iParam0 /*12*/])->f_1), 1);
	}
	else if (!aggregate.fme_challenges.func_1307(iParam0, 1) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), 1);
	}
	if ((aggregate.fme_challenges.func_1307(iParam0, 4) && uParam1->f_322 < 4) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_257[uParam1->f_322 /*5*/])))
	{
		iVar11 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar11) && !NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar11))
		{
			return false;
		}
		if (!aggregate.fme_archery.func_922(uParam1->f_257[uParam1->f_322 /*5*/], func_184(), ENTITY::GET_ENTITY_COORDS(iVar11, true, false), 1, 0))
		{
			return false;
		}
		iVar12 = NETWORK::NET_TO_OBJ(&(uParam1->f_257[uParam1->f_322 /*5*/]));
		TASK::_0xF0B4F759F35CC7F5(iVar12, -2141086268, iVar11, 0, 0);
		MISC::_0x7FA58CED69405F9A(iVar12, 3);
		ENTITY::_0x18FF3110CF47115D(iVar12, 12, true);
		ENTITY::_0x18FF3110CF47115D(iVar12, 22, true);
		ENTITY::_0x18FF3110CF47115D(iVar12, 21, true);
		aggregate.net_coach_holdup.func_275(uParam1->f_322, uParam1, 8);
		(Local_17.f_257[uParam1->f_322 /*5*/])->f_2 = iVar7;
		aggregate.net_coach_holdup.func_275(uParam1->f_322, uParam1, 128);
		aggregate.net_coach_holdup.func_275(uParam1->f_322, uParam1, 64);
		uParam1->f_322++;
	}
	if (iVar0 == 1095997463)
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 1024);
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 8))
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 2048);
	}
	aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 16777216);
	return true;
}

bool func_396(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	bool bVar14;

	if (bParam3 && !func_684(iParam0, uParam1))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	bVar1 = (Local_17.f_16[iParam0 /*12*/])->f_2 != 401658241;
	if (bVar1)
	{
		if (func_685(iParam0, &uVar2))
		{
			PED::_0x89F5E7ADECCCB49C(iVar0, aggregate.fme_animal_tagging.func_1715(&uVar2));
		}
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 == 1095997463)
	{
		fVar10 = func_687(&Local_2026, iParam0);
		fVar11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar10 != 0f && fVar11 <= aggregate.coffee_drinking.func_45(fVar10, 0f, 1f))
		{
			aggregate.net_coach_holdup.func_275(iParam0, uParam1, 256);
		}
	}
	fVar12 = func_688(&Local_2026, iParam0);
	if (fVar12 > 0f)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, BUILTIN::ROUND(fVar12));
		aggregate.la_alligator.func_245(iVar0, 1f, 0);
	}
	if ((Local_17.f_16[iParam0 /*12*/])->f_2 == 401658241 && func_690(&iVar13))
	{
		PED::SET_PED_ACCURACY(iVar0, iVar13);
	}
	else if (bVar1 && func_691(&Local_2026, iParam0, &iVar13))
	{
		PED::SET_PED_ACCURACY(iVar0, iVar13);
	}
	else
	{
		PED::SET_PED_ACCURACY(iVar0, 20);
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 != 1095997463)
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
	}
	PED::SET_PED_COMBAT_RANGE(iVar0, 3);
	PED::SET_PED_ID_RANGE(iVar0, 160f);
	PED::SET_PED_SEEING_RANGE(iVar0, 200f);
	PED::_0xD77AE48611B7B10A(iVar0, 0.48f);
	PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 32768))
	{
		LAW::_0x819ADD5EF1742F47(iVar0, 7);
		PED::SET_PED_AS_COP(iVar0, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 39, true);
		POPULATION::_0xF74E134F40192884(iVar0, 1);
		if (Global_1901929->f_160.f_31)
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 127, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
		}
	}
	if (aggregate.fme_animal_tagging.func_134(256))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 3, false);
	}
	switch ((uParam1->f_16[iParam0 /*12*/])->f_2)
	{
		case 824585797:
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 65, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			break;
		case joaat("driver"):
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			break;
		case -522830230:
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 50, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 89, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			bVar14 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
			if (!aggregate.binoculars.func_72(bVar14) || WEAPON::_0x959383DCD42040DA(bVar14))
			{
				PED::_0x815C0074A1BC0D93(iVar0, 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 93, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 96, true);
			}
			break;
		case -306837416:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			break;
		case 401658241:
			func_692(iVar0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iVar0, false, 1f);
			PED::_0x712B2C2B2471B493(iVar0, 554382346);
			TASK::_0x3AD8EFF9703BE657(iVar0, 0f);
			break;
		case -193064196:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			break;
		case -2133983324:
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			break;
		case 1095997463:
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 337, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 3, false);
			if (Local_2026.f_10 == -409129282)
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 317, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
			}
			else if (Local_2026.f_10 == -19759302)
			{
				LAW::_0xFFEBE5AA96BC2E4E(iVar0, -1728509733 /* GXTEntry: "Kidnapping" */, 1);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2048, true);
			DECORATOR::DECOR_SET_BOOL(iVar0, aggregate.net_coach_holdup.func_693(), true);
			if (aggregate.camera_item.func_12(&Local_2026) == -19759302)
			{
				MISC::_0x7FA58CED69405F9A(iVar0, 3);
				PED::SET_PED_CONFIG_FLAG(iVar0, 277, true);
			}
			break;
		case 1566032419:
			PED::SET_PED_CONFIG_FLAG(iVar0, 137, true);
			PED::SET_PED_RESET_FLAG(iVar0, 36, true);
			PED::SET_PED_CAN_RAGDOLL(iVar0, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
			PED::SET_PED_COMBAT_MOVEMENT(iVar0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
	}
	return true;
}

void func_397(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if ((uParam1->f_16[iParam0 /*12*/])->f_11 < 0)
	{
		return;
	}
	if (func_675(&Local_2026, iParam0) != -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		return;
	}
	iVar0 = (uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3;
	iVar1 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		return;
	}
	if (PED::DOES_GROUP_EXIST(iVar0))
	{
		return;
	}
	(uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3 = PED::CREATE_GROUP(0);
	iVar0 = (uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3;
	PED::SET_GROUP_FORMATION(iVar0, 5);
	PED::_0x478F6B9920446CE2(iVar0, 0);
	PED::SET_PED_AS_GROUP_LEADER(iVar1, iVar0, 0);
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if ((uParam1->f_16[iVar3 /*12*/])->f_2 != -306837416)
		{
		}
		else if ((uParam1->f_16[iParam0 /*12*/])->f_11 != (uParam1->f_16[iVar3 /*12*/])->f_11)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iVar3 /*12*/])))
		{
		}
		else
		{
			iVar4 = NETWORK::NET_TO_PED(&(uParam1->f_16[iVar3 /*12*/]));
			PED::ADD_CUSTOM_FORMATION_LOCATION(iVar0, (uParam1->f_16[iVar3 /*12*/])->f_8, iVar2);
			PED::SET_PED_AS_GROUP_MEMBER(iVar4, iVar0);
			PED::_0x0E9E95FDEDCC9D35(iVar4, iVar2, 0);
			iVar2++;
		}
		iVar3++;
	}
}

bool func_398(int iParam0, bool bParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return true;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!bParam1 || !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
		{
			return true;
		}
	}
	return false;
}

void func_399(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	int iVar6;

	if (aggregate.net_camp.func_517(iParam0, uParam2, 32))
	{
		return;
	}
	if (!aggregate.net_camp.func_517(iParam0, uParam2, 4) && !aggregate.net_camp.func_517(iParam0, uParam2, 524288))
	{
		if (aggregate.net_camp.func_517(iParam0, uParam2, 65536) || aggregate.net_camp.func_517(iParam0, uParam2, 131072))
		{
			if ((((Local_17.f_16[iParam0 /*12*/])->f_3 != 28 && (Local_17.f_16[iParam0 /*12*/])->f_3 != 24) && !PED::_0x3AA24CCC0D451379(iParam1)) && ENTITY::_0x61914209C36EFDDB(iParam1) == 0)
			{
				aggregate.net_coach_holdup.func_275(iParam0, uParam2, 65536);
				aggregate.net_coach_holdup.func_275(iParam0, uParam2, 131072);
			}
		}
		return;
	}
	iVar0 = 255;
	if ((NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iParam0 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((Local_17.f_16[iParam0 /*12*/])->f_7))
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX((Local_17.f_16[iParam0 /*12*/])->f_7);
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	bVar4 = aggregate.net_camp.func_517(iParam0, uParam2, 65536);
	bVar5 = aggregate.net_camp.func_517(iParam0, uParam2, 131072);
	if (((!bVar4 && !bVar5) && !aggregate.net_camp.func_517(iParam0, &Local_17, 67108864)) && iVar0 != 255)
	{
		if ((aggregate.fishing_core.func_34(Local_361[iVar0 /*52*/], 32) && aggregate.annesburg.func_141(Local_2026.f_625, vVar1)) || (aggregate.fishing_core.func_34(Local_361[iVar0 /*52*/], 64) && aggregate.annesburg.func_141(Local_2026.f_626, vVar1)))
		{
			func_694(iParam0, (Local_17.f_16[iParam0 /*12*/])->f_7);
		}
	}
	iVar6 = ENTITY::_0x61914209C36EFDDB(iParam1);
	if (((Local_17.f_16[iParam0 /*12*/])->f_7 == 255 || iVar0 == 255) || !aggregate.net_coach_holdup.func_695(iParam0, iVar0))
	{
		if (iVar6 != 3 && 1)
		{
			return;
		}
	}
	if (aggregate.net_camp.func_517(iParam0, uParam2, 65536))
	{
		if (iVar6 != 3)
		{
			return;
		}
		func_696(iParam0, uParam2, 0);
		return;
	}
	else if (aggregate.net_camp.func_517(iParam0, uParam2, 131072))
	{
		if (iVar6 != 3)
		{
			return;
		}
		func_696(iParam0, uParam2, 1);
		return;
	}
	if ((Local_17.f_16[iParam0 /*12*/])->f_7 == 255 || iVar0 == 255)
	{
		return;
	}
	if (!bVar4 && !bVar5)
	{
		if (aggregate.fishing_core.func_34(Local_361[iVar0 /*52*/], 64) && aggregate.net_coach_holdup.func_695(iParam0, iVar0))
		{
			aggregate.net_coach_holdup.func_275(iParam0, uParam2, 131072);
		}
		else if (aggregate.fishing_core.func_34(Local_361[iVar0 /*52*/], 32) && aggregate.net_coach_holdup.func_695(iParam0, iVar0))
		{
			aggregate.net_coach_holdup.func_275(iParam0, uParam2, 65536);
		}
	}
}

void func_400(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.net_coach_holdup.func_557(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 != -1088690539 && func_398(iParam0, func_697(iVar0)))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
		{
			iVar1 = func_698(iParam0, uParam1);
		}
		if (iVar0 == 1095997463)
		{
			func_699(iParam0, uParam1, bParam3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && DECORATOR::DECOR_EXIST_ON(iVar1, aggregate.net_coach_holdup.func_693()))
			{
				DECORATOR::DECOR_REMOVE(iVar1, aggregate.net_coach_holdup.func_693());
			}
		}
		func_700(iParam0, uParam1, 0, 1, 0);
		return;
	}
	if (iVar0 == -1088690539)
	{
		if (func_701(iParam0))
		{
			func_235(iParam0);
			func_702(iParam0);
		}
		return;
	}
	iVar1 = func_698(iParam0, uParam1);
	func_703(iParam0, uParam1, iParam2, bParam3);
	func_704(iParam0, uParam1, iParam2, bParam3);
	func_705(iParam0, iVar1);
	switch (aggregate.net_coach_holdup.func_557(iParam0, uParam1))
	{
		case joaat("driver"):
			func_706(iParam0, uParam1, iParam2, bParam3);
			break;
		case -193064196:
			func_707(iParam0, uParam1, iParam2, bParam3);
			break;
		case -522830230:
			func_708(iParam0, uParam1, iParam2, bParam3);
			break;
		case 1095997463:
			func_709(iParam0, uParam1, iParam2, bParam3);
			break;
		case -306837416:
			func_710(iParam0, uParam1, iParam2, bParam3);
			break;
		case 824585797:
			func_711(iParam0, uParam1, iParam2, bParam3);
			break;
		case 1566032419:
			func_712(iParam0, uParam1, iParam2, bParam3);
			break;
		case 401658241:
			func_713(iParam0, uParam1, iParam2, bParam3);
			break;
		case -2133983324:
			func_714(iParam0, uParam1, iParam2, bParam3);
			break;
	}
}

void func_401(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (aggregate.net_camp.func_517(iParam0, uParam1, 1))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iParam0 /*4*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iParam0 /*4*/]));
	if ((aggregate.fme_animal_tagging.func_134(256) && !aggregate.fishing_core.func_34(uParam1, 16)) && aggregate.fishing_core.func_39(iVar0, (Local_2026.f_29[iParam0 /*5*/])->f_1, 0) > 3f)
	{
		aggregate.fme_animal_tagging.func_1147(uParam1, 16);
	}
	if (func_715(iVar0) && aggregate.fishing_core.func_34(uParam1, 16))
	{
		if (!aggregate.fme_animal_tagging.func_134(256))
		{
			if (aggregate.net_coach_holdup.func_1083(uParam1, joaat("driver"), iParam0))
			{
				return;
			}
			if (aggregate.net_coach_holdup.func_1083(uParam1, 824585797, iParam0))
			{
				return;
			}
		}
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 1);
		(Local_17.f_3[iParam0 /*4*/])->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_402(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (!aggregate.fishing_core.func_34(Local_361[iVar2 /*52*/], 32) && !aggregate.fishing_core.func_34(Local_361[iVar2 /*52*/], 64))
			{
				if (!bParam0 || _NAMESPACE26::_0x901E0DC25080C8B9(iVar1) != Local_17.f_316)
				{
				}
				else if (aggregate.fishing_core.func_34(Local_361[iVar2 /*52*/], 8388608))
				{
				}
				else
				{
					return false;
					Jump @170; //curOff = 141
					if (bParam0)
					{
						if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar1) != Local_17.f_316)
						{
						}
						else
						{
							return false;
						}
					}
				}
				iVar0++;
				return true;
			}
		}
	}
}

bool func_404(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_405(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if (aggregate.net_camp.func_517(iVar0, uParam0, 32))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_406(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	bool bVar8;
	bool bVar9;

	if (!aggregate.net_camp.func_517(iParam0, uParam1, 128))
	{
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, uParam1, 16))
	{
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, uParam1, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_257[iParam0 /*5*/])))
	{
		func_717(iParam0, uParam1);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(uParam1->f_257[iParam0 /*5*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_717(iParam0, uParam1);
		return;
	}
	vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	func_718(iParam0, iVar0, vVar5, &iVar1, &iVar2, &iVar3, &bVar4);
	if (iVar1 != 0)
	{
		vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	}
	bVar8 = aggregate.net_camp.func_517(iParam0, &Local_17, 256);
	bVar9 = aggregate.net_camp.func_517(iParam0, &Local_17, 512);
	if (iVar1 == 0 || !bVar4)
	{
		if (bVar8)
		{
			func_719(iParam0, uParam1, 0);
			return;
		}
		else if (bVar9)
		{
			func_719(iParam0, uParam1, 1);
			return;
		}
	}
	if (((Local_17.f_257[iParam0 /*5*/])->f_3 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_257[iParam0 /*5*/])->f_3)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((Local_17.f_257[iParam0 /*5*/])->f_3))
	{
		return;
	}
	if ((!bVar8 && !bVar9) && !aggregate.net_camp.func_517(iParam0, &Local_17, 4096))
	{
		if ((iVar1 == 2 && aggregate.annesburg.func_141(Local_2026.f_625, vVar5)) || (iVar1 == 3 && aggregate.annesburg.func_141(Local_2026.f_626, vVar5)))
		{
			func_720(iParam0, (Local_17.f_257[iParam0 /*5*/])->f_3);
		}
	}
	if (!bVar8 && !bVar9)
	{
		if (func_721(vVar5, iVar1, iVar2, bVar4, iVar3, 0))
		{
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 256);
		}
		else if (func_721(vVar5, iVar1, iVar2, bVar4, iVar3, 1))
		{
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 512);
		}
	}
}

bool func_407()
{
	if (!aggregate.fme_animal_tagging.func_134(65536))
	{
		return false;
	}
	if (aggregate.camera_item.func_12(&Local_17) <= 2)
	{
		return false;
	}
	if (!aggregate.fishing_core.func_34(&Local_17, 134217728))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(&Local_17, 524288))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(&Local_17, 512))
	{
		return false;
	}
	if (func_404(&Local_17, 401658241))
	{
		return false;
	}
	return true;
}

void func_408()
{
	Local_17.f_305.f_5 = 0;
	Local_17.f_305.f_6 = func_722();
	Local_17.f_305.f_7 = func_723();
	Local_17.f_305.f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_17.f_305.f_2 = { 0f, 0f, 0f };
}

bool func_410()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate.fishing_core.func_34(&Local_17, 256))
	{
		if (aggregate.fme_animal_tagging.func_384(Local_17.f_305.f_9) < 8000)
		{
			return false;
		}
	}
	else if (aggregate.fme_animal_tagging.func_384(Local_17.f_305.f_9) < Local_17.f_305.f_7)
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if ((Local_17.f_16[iVar1 /*12*/])->f_2 != 0)
		{
			if ((Local_17.f_16[iVar1 /*12*/])->f_2 == 401658241)
			{
				iVar2++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 < Local_17.f_305.f_6)
	{
		return false;
	}
	if (iVar2 + Local_17.f_305.f_6) > func_724()
	{
		return false;
	}
	return true;
}

bool func_411(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619))
	{
		return false;
	}
	vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
	fVar7 = -1f;
	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar8 = 0;
			while (iVar8 < 20)
			{
				if ((Local_17.f_16[iVar8 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (aggregate.net_camp.func_517(iVar8, &Local_17, 32) || aggregate.net_camp.func_517(iVar8, &Local_17, 262144))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar8 /*12*/])))
				{
				}
				else
				{
					iVar9 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar8 /*12*/]));
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
					fVar6 = BUILTIN::VDIST(vVar3, vVar0);
					if (fVar6 < 130f || (fVar7 > 0f && fVar6 > fVar7))
					{
					}
					else
					{
						fVar7 = fVar6;
						*uParam1 = { vVar3 };
						*uParam0 = iVar8;
					}
				}
				iVar8++;
			}
			break;
		case -409129282:
			iVar8 = 0;
			while (iVar8 < 4)
			{
				if (((!aggregate.net_camp.func_517(iVar8, &Local_17, 128) || aggregate.net_camp.func_517(iVar8, &Local_17, 2)) || aggregate.net_camp.func_517(iVar8, &Local_17, 16)) || aggregate.net_camp.func_517(iVar8, &Local_17, 1024))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar8 /*5*/])))
				{
				}
				else
				{
					iVar10 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar8 /*5*/]));
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar10, false, false) };
					fVar6 = BUILTIN::VDIST(vVar3, vVar0);
					if (fVar6 < 130f || (fVar7 > 0f && fVar6 > fVar7))
					{
					}
					else
					{
						fVar7 = fVar6;
						*uParam1 = { vVar3 };
						*uParam0 = iVar8;
					}
				}
				iVar8++;
			}
			break;
		default:
			return false;
	}
	if (fVar7 < 0f)
	{
		return false;
	}
	return true;
}

int func_412(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175((uParam0->f_16[iVar0 /*12*/])->f_4, iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_413(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175((uParam0->f_16[iVar0 /*12*/])->f_4, iParam2))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_415(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, 128))
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else if (!bParam2 && aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, 2))
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_416(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, 128))
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else if (!bParam2 && aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, 2))
		{
		}
		else if (!aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_420(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	vector3 vVar9;
	bool bVar12;
	float fVar13;

	iVar0 = 401658241;
	iVar1 = func_238();
	iVar2 = func_239();
	bVar3 = func_725();
	vParam2 = { vParam2 + func_726(iParam0, iParam1) };
	if (!aggregate.fme_archery.func_1103(iVar1))
	{
		return false;
	}
	if (!aggregate.fme_archery.func_1103(iVar2))
	{
		return false;
	}
	STREAMING::REQUEST_COLLISION_AT_COORD(vParam2);
	if (!ENTITY::_0x6BFBDC46139C45AB(vParam2))
	{
		return false;
	}
	if (Local_17.f_305.f_8 == -1)
	{
		if (!func_727(&iVar4))
		{
			return true;
		}
		Local_17.f_305.f_8 = iVar4;
	}
	else
	{
		iVar4 = Local_17.f_305.f_8;
	}
	iVar5 = 2;
	iVar6 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0);
	iVar7 = (iVar6 - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false));
	if (iVar7 < iVar5)
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS((iVar6 + (iVar5 - iVar7)));
		if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < (iVar6 + (iVar5 - iVar7)))
		{
			return true;
		}
	}
	if (Local_17.f_305.f_1 != -1)
	{
		switch (Local_2026.f_10)
		{
			case -409129282:
				if (((aggregate.net_camp.func_517(Local_17.f_305.f_1, &Local_17, 128) && !aggregate.net_camp.func_517(Local_17.f_305.f_1, &Local_17, 16)) && !aggregate.net_camp.func_517(Local_17.f_305.f_1, &Local_17, 2)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[Local_17.f_305.f_1 /*5*/])))
				{
					bVar12 = true;
					uVar8 = Local_17.f_305.f_1;
					vVar9 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_17.f_257[Local_17.f_305.f_1 /*5*/])), false, false) };
				}
				break;
			case -19759302:
				if ((aggregate.net_camp.func_517(Local_17.f_305.f_1, &Local_17, 1024) && !aggregate.net_camp.func_517(Local_17.f_305.f_1, &Local_17, 32)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[Local_17.f_305.f_1 /*12*/])))
				{
					bVar12 = true;
					uVar8 = Local_17.f_305.f_1;
					vVar9 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_17.f_16[Local_17.f_305.f_1 /*12*/])), false, false) };
				}
				break;
		}
	}
	if (!bVar12 && !func_728(vParam2, &uVar8, &vVar9, 1128792064 /* Float: 200f */))
	{
		return true;
	}
	fVar13 = aggregate.fme_supply_train.func_1214(vParam2, vVar9);
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		return true;
	}
	if (iVar2 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		iVar2 = func_181(iVar0);
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iVar4 /*12*/])->f_1))
	{
		if (iVar2 == 0)
		{
			return true;
		}
		if (!aggregate.fme_challenges.func_1263(&((Local_17.f_16[iVar4 /*12*/])->f_1), iVar2, vParam2, fVar13, 1, 0, 1, 1, 1))
		{
			return false;
		}
		NETWORK::_0x7182EDDA1EE7DB5A((Local_17.f_16[iVar4 /*12*/])->f_1);
		return false;
	}
	NETWORK::_0x7182EDDA1EE7DB5A((Local_17.f_16[iVar4 /*12*/])->f_1);
	func_680(iVar4);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar4 /*12*/])) && !aggregate.fme_escaped_convicts.func_1084(Local_17.f_16[iVar4 /*12*/], (Local_17.f_16[iVar4 /*12*/])->f_1, iVar1, -1, 1, 1, 1, 0))
	{
		return false;
	}
	NETWORK::_0x7182EDDA1EE7DB5A(&(Local_17.f_16[iVar4 /*12*/]));
	(Local_17.f_16[iVar4 /*12*/])->f_2 = iVar0;
	(Local_17.f_16[iVar4 /*12*/])->f_8 = { func_730(iParam0, iParam1) };
	(Local_17.f_16[iVar4 /*12*/])->f_11 = uVar8;
	if (bVar3)
	{
		aggregate.net_coach_holdup.func_275(iVar4, &Local_17, 32768);
	}
	if (!func_396(iVar4, &Local_17, &Local_2026, 1))
	{
		return false;
	}
	return true;
}

void func_421(var uParam0, int iParam1, bool bParam2)
{
	switch (aggregate.camera_item.func_12(uParam0))
	{
		case 0:
			aggregate.camera_item.func_77(1, uParam0);
			break;
		case 1:
			if (func_732(uParam0, 8, 1))
			{
				if (func_732(uParam0, 64, 1) || func_415(uParam0, 32, 1))
				{
					aggregate.camera_item.func_77(5, uParam0);
					return;
				}
				if (!func_733(-1, 1))
				{
					return;
				}
				aggregate.camera_item.func_77(3, uParam0);
				return;
			}
			if (!func_734(uParam0, 1))
			{
				return;
			}
			if (func_735(uParam0, -1))
			{
				aggregate.camera_item.func_77(2, uParam0);
				return;
			}
			aggregate.camera_item.func_77(3, uParam0);
			break;
		case 2:
			if (func_732(uParam0, 8, 1))
			{
				aggregate.camera_item.func_77(5, uParam0);
				return;
			}
			if (func_735(uParam0, -1))
			{
				return;
			}
			aggregate.camera_item.func_77(3, uParam0);
			break;
		case 3:
			if ((func_415(uParam0, 1, 1) || func_415(uParam0, 32, 1)) || func_732(uParam0, 64, 1))
			{
				aggregate.camera_item.func_77(5, uParam0);
				return;
			}
			break;
		case 5:
			if (func_732(uParam0, 8, 1))
			{
				if (func_732(uParam0, 2, 1))
				{
					return;
				}
				aggregate.camera_item.func_77(6, uParam0);
				return;
			}
			if (func_416(uParam0, 2, 1))
			{
				return;
			}
			if (!func_736(uParam0, 1, -1))
			{
				aggregate.camera_item.func_77(1, uParam0);
				return;
			}
			break;
	}
}

void func_422(var uParam0, int iParam1, bool bParam2)
{
	switch (aggregate.camera_item.func_12(uParam0))
	{
		case 0:
			aggregate.camera_item.func_77(1, uParam0);
			break;
		case 1:
			if (func_733(-1, 1))
			{
				aggregate.camera_item.func_77(4, uParam0);
				return;
			}
			if (!func_734(uParam0, 1))
			{
				return;
			}
			if (func_735(uParam0, -1))
			{
				aggregate.camera_item.func_77(2, uParam0);
				return;
			}
			aggregate.camera_item.func_77(4, uParam0);
			break;
		case 2:
			if (func_733(-1, 0))
			{
				aggregate.camera_item.func_77(4, uParam0);
				return;
			}
			if (func_735(uParam0, -1))
			{
				return;
			}
			aggregate.camera_item.func_77(4, uParam0);
			break;
		case 4:
			if (func_733(-1, 1))
			{
				return;
			}
			if (!func_736(uParam0, 1, -1))
			{
				aggregate.camera_item.func_77(1, uParam0);
				return;
			}
			if (func_405(uParam0))
			{
				return;
			}
			aggregate.camera_item.func_77(6, uParam0);
			break;
	}
}

void func_423()
{
	int iVar0;

	if (aggregate.fm_deathmatch_controller.func_962() == 3)
	{
		return;
	}
	if (!aggregate.nb_animal_attack.func_161(1) && !func_737())
	{
		return;
	}
	if (Local_17.f_299 == 0)
	{
		iVar0 = func_738();
		if (iVar0 == 0)
		{
			aggregate.fm_mission_controller.func_1093(3);
			return;
		}
		else if (func_496(iVar0) == 0)
		{
			aggregate.fm_mission_controller.func_1093(3);
			return;
		}
	}
	else
	{
		iVar0 = Local_17.f_299;
	}
	switch (aggregate.fm_deathmatch_controller.func_962())
	{
		case 0:
			if (!aggregate.nb_animal_attack.func_161(1))
			{
				Local_17.f_299 = iVar0;
				Local_17.f_299.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				aggregate.nb_animal_attack.func_101(1);
			}
			if (aggregate.fme_animal_tagging.func_384(Local_17.f_299.f_4) > 20000)
			{
				aggregate.nb_animal_attack.func_101(8);
				aggregate.fm_mission_controller.func_1093(3);
			}
			if (!func_741(2, 0))
			{
				return;
			}
			func_742(iVar0);
			if (!func_741(4, 0))
			{
				return;
			}
			aggregate.fm_mission_controller.func_1093(1);
			break;
		case 1:
			if (!func_743(1, 0))
			{
				return;
			}
			if (!func_741(32, 0))
			{
				return;
			}
			if (!func_744(func_497(iVar0, Local_17.f_299.f_2)))
			{
				return;
			}
			Local_17.f_299.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			aggregate.nb_animal_attack.func_101(4);
			aggregate.fm_mission_controller.func_1093(2);
			break;
		case 2:
			if (!func_741(64, 0))
			{
				return;
			}
			if (!aggregate.nb_animal_attack.func_161(4) && !func_744(func_497(iVar0, Local_17.f_299.f_2)))
			{
				return;
			}
			aggregate.nb_animal_attack.func_101(4);
			if (Local_17.f_299.f_2 < (Local_2026.f_537 - 1))
			{
				func_746();
				aggregate.fm_mission_controller.func_1093(1);
				return;
			}
			Local_17.f_299.f_5 = 0;
			Local_17.f_299.f_2 = 0;
			aggregate.fm_mission_controller.func_1093(3);
			break;
	}
}

bool func_424(int iParam0, bool bParam1)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			if (bParam1)
			{
				return MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_4), iParam0);
			}
			return MISC::_0x8F4F050054005C27(&(Local_2026.f_540), iParam0);
		case -19759302:
			if (bParam1)
			{
				return MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_6), iParam0);
			}
			return MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_2), iParam0);
		default:
			break;
	}
	return false;
}

bool func_425(int iParam0)
{
	int iVar0;

	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar0 = (Local_17.f_16[iParam0 /*12*/])->f_7;
			break;
		case -409129282:
			iVar0 = (Local_17.f_257[iParam0 /*5*/])->f_3;
			break;
		default:
			return false;
	}
	if (iVar0 == 255)
	{
		return false;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!_NAMESPACE26::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iVar0))
	{
		return false;
	}
	return true;
}

void func_426(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	func_747(iParam0, 0, iParam1);
	aggregate.nb_hobo_dog.func_480(iParam0, &uVar0, 0, bParam3);
	func_435(iParam0, 0, iParam2);
	aggregate.fme_supply_train.func_1229(532584148, iParam0, 0, 255, 0, 1);
}

var func_427(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = aggregate.flow_controller.func_314(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return aggregate.net_assassination.func_510(iVar0);
}

void func_430(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam4);
	aggregate.fishing_core.func_224(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				aggregate.doc_book.func_292(iParam0, 1628925866);
				break;
			case 1:
				*uParam2 = 1;
				break;
		}
		return;
	}
	switch (iVar0)
	{
		case 1:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1295140836);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1526522745);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1901367336);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -2012562028);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1811294830);
					break;
				case 1:
					*uParam1 = 1706540001;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1580699377);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -529994165);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1356198962);
					break;
				case 1:
					*uParam1 = -398376814;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 592638986);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -71665830);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -369634347);
					break;
				case 1:
					*uParam1 = -1203216227;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 523648593);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 224041626);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1119225168);
					break;
				case 1:
					*uParam1 = 329552932;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 820076967);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1790072136);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1490530707);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1908007825);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 2085779592);
					break;
				case 1:
					*uParam1 = 1754742276;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -169152669);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -544685409);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -649710054);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1023735420);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1126990539);
					break;
				case 1:
					*uParam1 = 1995855690;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1501736823);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1614824464);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1845287019);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1073415046);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1906960099);
					break;
				case 1:
					*uParam1 = 1122037536;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -2023453588);
					break;
				case 1:
					*uParam1 = -1520125470;
					break;
			}
			break;
	}
}

void func_435(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			aggregate.doc_book.func_292(iParam0, func_753(iParam2));
			break;
	}
}

bool func_438(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam0 /*12*/])))
	{
		return false;
	}
	*iParam1 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		if (bParam3 && PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_440(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_755(iParam0, &iVar1, &iVar0);
	iVar2 = 0;
	while (iVar2 < 12)
	{
		MISC::CLEAR_BIT((*(Local_361[Local_2026.f_634 /*52*/])->f_16[iVar2 /*2*/])[iVar1], iVar0);
		iVar2++;
	}
}

bool func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.flow_controller.func_273(iParam0);
	if (!aggregate.flow_controller.func_316(iVar0))
	{
		return false;
	}
	iVar1 = aggregate.net_assassination.func_508(iVar0);
	if (!aggregate.flow_controller.func_386(iVar1))
	{
		return false;
	}
	if (!aggregate.net_coach_holdup.func_756(iVar1, &iVar2))
	{
		return true;
	}
	if (aggregate.mp_intro.func_406(iVar2, 2))
	{
		return false;
	}
	return true;
}

bool func_448(var uParam0)
{
	if (!func_293(&Local_2026, uParam0))
	{
		return false;
	}
	if (!func_313(uParam0, 419371455, 0, 0))
	{
		return false;
	}
	return true;
}

void func_451(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_332), iParam0))
		{
			return;
		}
		aggregate.fm_deathmatch_controller.func_142(iParam0, 1);
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_202.f_332), iParam0);
	}
	else
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_332), iParam0))
		{
			return;
		}
		aggregate.fm_deathmatch_controller.func_142(iParam0, 0);
		MISC::_0xB909149F2BB5F6DA(&(Local_2026.f_202.f_332), iParam0);
	}
}

void func_452(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (bParam1)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_329), iParam0))
		{
			return;
		}
		aggregate.fme_animal_tagging.func_1095(iVar0);
		aggregate.fme_animal_tagging.func_779(iParam0, 1);
		MISC::_0xE84AAC1B22A73E99(&(Local_2026.f_202.f_329), iParam0);
	}
	else
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_2026.f_202.f_329), iParam0))
		{
			return;
		}
		aggregate.fme_animal_tagging.func_782(iVar0);
		aggregate.fme_animal_tagging.func_779(iParam0, 0);
		MISC::_0xB909149F2BB5F6DA(&(Local_2026.f_202.f_329), iParam0);
	}
}

bool func_454(float fParam0)
{
	if (aggregate.aberdeenpigfarm.func_165(fParam0->f_202.f_56))
	{
		return true;
	}
	return false;
}

void func_466(struct<2> Param0, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar9;
	int iVar10;

	Var5.f_1 = -1;
	if (!aggregate.aberdeenpigfarm.func_158(Param0))
	{
		return;
	}
	iVar1 = aggregate.nb_hobo_dog.func_515(Param0);
	if (!aggregate.nb_hobo_dog.func_516(iVar1))
	{
		return;
	}
	iVar0 = aggregate.nb_hobo_dog.func_517(iVar1);
	if (!aggregate.flow_controller.func_373(iVar0))
	{
		return;
	}
	iVar2 = aggregate.net_assassination.func_508(iVar1);
	if (!aggregate.flow_controller.func_386(iVar2))
	{
		return;
	}
	iVar10 = aggregate.net_assassination.func_510(iVar1);
	if (iVar10 == -1)
	{
		return;
	}
	iVar3 = aggregate.map_app_event_handler.func_102(iVar0);
	iVar4 = aggregate.flow_controller.func_374(iVar0);
	iVar9 = aggregate.flow_controller.func_327(iVar10);
	if (aggregate.annesburg.func_109())
	{
		if (bParam2 && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_775(iVar0, iVar2, Param0, iVar10);
		}
		if (aggregate.mp_intro.func_2144(iVar9) != joaat("setup"))
		{
			switch (iVar4)
			{
				case 2132950130:
					break;
				case -408236271:
					aggregate.net_assassination.func_516(iVar4, aggregate.aberdeenpigfarm.func_99());
					aggregate.net_assassination.func_517(iVar4, 1);
					aggregate.net_assassination.func_518(iVar0);
					aggregate.net_assassination.func_519(iVar0);
					aggregate.net_assassination.func_520(8388608);
					break;
				case 1766283257:
					aggregate.net_assassination.func_516(iVar4, aggregate.aberdeenpigfarm.func_99());
					aggregate.net_assassination.func_517(iVar4, 1);
					aggregate.net_assassination.func_518(iVar0);
					aggregate.net_assassination.func_519(iVar0);
					aggregate.net_assassination.func_520(4194304);
					break;
				default:
					aggregate.net_assassination.func_516(iVar4, aggregate.aberdeenpigfarm.func_99());
					aggregate.net_assassination.func_517(iVar4, 1);
					aggregate.net_assassination.func_518(iVar0);
					aggregate.net_assassination.func_519(iVar0);
					break;
			}
		}
		aggregate.net_assassination.func_521(iVar4, aggregate.aberdeenpigfarm.func_99());
		func_784(iVar4, bParam2);
		switch (aggregate.dynamic_craft_scenario.func_156(iVar9))
		{
			case 7:
				aggregate.net_assassination.func_524(iVar1, &Var5);
				func_787(&Var5);
				break;
		}
		func_788(iVar10, Param0, bParam2);
		aggregate.net_assassination.func_528(aggregate.net_assassination.func_527(iVar0), 1);
		aggregate.fme_animal_tagging.func_902(1);
	}
	func_792(iVar3, bParam2);
	func_793();
}

void func_482(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { aggregate.aberdeenpigfarm.func_107(-1808811965, aggregate.map_app_event_handler.func_148(iParam0)) };
	aggregate.bandana.func_26(Var0, iParam1);
}

void func_483(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { aggregate.aberdeenpigfarm.func_107(-746839750, aggregate.map_app_event_handler.func_148(iParam0)) };
	func_806(Var0, iParam1);
}

void func_484(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { aggregate.aberdeenpigfarm.func_107(829565093, aggregate.map_app_event_handler.func_148(iParam0)) };
	aggregate.bandana.func_26(Var0, iParam1);
}

void func_485(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	struct<2> Var1;

	if (bParam1)
	{
		if (bParam2)
		{
			iVar0 = 622623048;
		}
		else
		{
			iVar0 = 123615871;
		}
	}
	else if (bParam2)
	{
		iVar0 = -1892463704;
	}
	else
	{
		iVar0 = 1374282888;
	}
	Var1 = { aggregate.aberdeenpigfarm.func_107(iVar0, aggregate.map_app_event_handler.func_148(iParam0)) };
	func_808(Var1);
}

void func_486(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;

	if (bParam1)
	{
		return;
	}
	Var0 = { aggregate.aberdeenpigfarm.func_107(741274143, aggregate.map_app_event_handler.func_148(iParam0)) };
	if (bParam2)
	{
		func_808(Var0);
	}
	else
	{
		aggregate.net_assassination.func_837(Var0, 0);
	}
}

void func_487(int iParam0, bool bParam1, bool bParam2, struct<2> Param3, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar9;

	iVar0 = aggregate.flow_controller.func_327(iParam0);
	iVar3 = aggregate.mp_intro.func_2144(iVar0);
	iVar4 = aggregate.dynamic_craft_scenario.func_156(iVar0);
	vVar5.f_1 = -1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = 1;
	}
	switch (iVar4)
	{
		case 0:
			if (bParam2)
			{
				iVar2 = -1365731393;
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		case 11:
			if (bParam2)
			{
				switch (iVar3)
				{
					case -1562099170:
						aggregate.gfh_campworks.func_74(256);
						break;
					case -1318406457:
						if (aggregate.flow_controller.func_281(iParam0, 2))
						{
							iVar2 = -406386912;
						}
						else
						{
							iVar2 = -356110550;
						}
						break;
					default:
						iVar2 = -1365731393;
						break;
				}
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		case 7:
			if (bParam2)
			{
				aggregate.net_assassination.func_524(iParam5, &vVar5);
				iVar9 = vVar5.z;
				switch (iVar9)
				{
					case 0:
						iVar2 = -508253498;
						break;
					case 1:
						iVar2 = 566295171;
						break;
					case 2:
						iVar2 = -1881397389;
						break;
					default:
						iVar2 = -1365731393;
						break;
				}
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		case 15:
			if (bParam2)
			{
				if (aggregate.flow_controller.func_281(iParam0, 4))
				{
					iVar2 = -1553095031;
				}
				else
				{
					iVar2 = -1365731393;
				}
			}
			else if (aggregate.flow_controller.func_281(iParam0, 4))
			{
				iVar2 = 475709606;
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
		default:
			if (bParam2)
			{
				iVar2 = -1365731393;
			}
			else
			{
				iVar2 = 1923632299;
			}
			break;
	}
	func_812(iVar0, iVar1, iVar2, aggregate.flow_controller.func_242(Param3));
}

void func_490(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam2)
	{
		iVar0 = -1892463704;
	}
	else
	{
		iVar0 = 1374282888;
	}
	if (bParam1)
	{
		iVar1 = func_813(iParam0);
	}
	else
	{
		iVar1 = func_814(iParam0);
	}
	Var2 = { aggregate.aberdeenpigfarm.func_107(iVar0, iVar1) };
	func_808(Var2);
}

void func_491(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if (_NAMESPACE26::_0x0F99F6436528A089(iVar0) && _NAMESPACE26::_0x149A2751AB66AC02(iVar0) >= 2)
		{
			aggregate.flow_controller.func_208(17, 1);
		}
	}
	aggregate.fm_deathmatch_controller.func_445(4);
	aggregate.fm_deathmatch_controller.func_445(1);
	func_818(60);
	if (_NAMESPACE59::_0x3CF46F55C6585590())
	{
	}
	else if (_NAMESPACE59::_0x1840F3B30ED0105F(-1706799532))
	{
	}
	aggregate.net_assassination.func_553(1);
	aggregate.net_assassination.func_553(2);
}

void func_493(int iParam0)
{
	Global_1103536->f_21.f_37.f_1 = iParam0;
}

void func_495(int iParam0)
{
	aggregate.aberdeenpigfarm.func_163(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_1), iParam0);
}

int func_496(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_293(&Local_2026, &Var0) && func_313(&Var0, 556233122, iParam0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_497(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (((func_293(&Local_2026, &Var0) && func_313(&Var0, 556233122, iParam0, 0)) && func_313(&Var0, -110495140, iParam1, 0)) && func_313(&Var0, -1441758265, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_498(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("ped"):
			if (iParam1 >= 20)
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iParam1 /*12*/])))
			{
				return false;
			}
			*iParam2 = NETWORK::NET_TO_ENT(&(Local_17.f_16[iParam1 /*12*/]));
			break;
		case joaat("prop"):
			if (iParam1 >= 10)
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_278[iParam1 /*2*/])))
			{
				return false;
			}
			if (aggregate.fme_challenges.func_1307(iParam1, 1))
			{
				return false;
			}
			*iParam2 = NETWORK::NET_TO_ENT(&(Local_17.f_278[iParam1 /*2*/]));
			break;
		case joaat("vehicle"):
			if (iParam1 >= 3)
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_3[iParam1 /*4*/])))
			{
				return false;
			}
			*iParam2 = NETWORK::NET_TO_ENT(&(Local_17.f_3[iParam1 /*4*/]));
			break;
		case joaat("player"):
			if (iParam1 >= 7)
			{
				return false;
			}
			if (!NETWORK::_0x255A5EF65EDA9167(&(Local_17.f_329[iParam1])) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_329[iParam1])))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(&(Local_17.f_329[iParam1]))))
			{
				return false;
			}
			*iParam2 = aggregate.annesburg.func_253(PLAYER::GET_PLAYER_PED(&(Local_17.f_329[iParam1])));
			break;
		case 130495496:
			if (iParam1 >= 7)
			{
				return false;
			}
			if (!NETWORK::_0x255A5EF65EDA9167(&(Local_17.f_329[iParam1])) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_329[iParam1])))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::_0xF49F14462F0AE27C(&(Local_17.f_329[iParam1]))))
			{
				return false;
			}
			*iParam2 = aggregate.annesburg.func_253(PLAYER::_0xF49F14462F0AE27C(&(Local_17.f_329[iParam1])));
			break;
		default:
			return false;
	}
	return true;
}

int func_499()
{
	return aggregate.net_camp.func_2390((13 + Local_2026), 31);
}

void func_505(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 181;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 3, &uParam1);
}

bool func_508(int iParam0, int iParam1, int iParam2)
{
	return func_823(iParam0, iParam1, iParam2);
}

bool func_510(var uParam0, var uParam1)
{
	if (func_293(uParam0, uParam1))
	{
		uParam1->f_2 = -1874578615;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_511(var uParam0, var uParam1)
{
	if (func_293(uParam0, uParam1))
	{
		uParam1->f_2 = 1849119077;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_512(var uParam0, var uParam1)
{
	if (func_293(uParam0, uParam1))
	{
		uParam1->f_2 = -244186873;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_521(int iParam0, float fParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	if (bParam2 && !_NAMESPACE26::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false) };
	*fParam1 = -1f;
	switch (Local_2026.f_10)
	{
		case -409129282:
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar3 /*5*/])))
				{
				}
				else
				{
					fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_17.f_257[iVar3 /*5*/])), false, false), vVar0);
					if (*fParam1 != -1f && fVar4 > *fParam1)
					{
					}
					else
					{
						*fParam1 = fVar4;
					}
				}
				iVar3++;
			}
			break;
		case -19759302:
			iVar3 = 0;
			while (iVar3 < 20)
			{
				if ((Local_17.f_16[iVar3 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar3 /*12*/])))
				{
				}
				else
				{
					fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(&(Local_17.f_16[iVar3 /*12*/])), false, false), vVar0);
					if (*fParam1 != -1f && fVar4 > *fParam1)
					{
					}
					else
					{
						*fParam1 = fVar4;
					}
				}
				iVar3++;
			}
			break;
	}
	if (*fParam1 == -1f)
	{
		return false;
	}
	return true;
}

int func_522(var uParam0, float fParam1)
{
	return (fParam1->f_10.f_6 - func_211(uParam0));
}

bool func_523(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 2);
	iVar1 = (iParam1 / 8);
	return (iParam0 <= iVar0 && iParam0 >= iVar1);
}

void func_524(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (func_832())
	{
		if ((MISC::GET_GAME_TIMER() - func_833()) < 75000)
		{
			return;
		}
	}
	if (!aggregate.aberdeenpigfarm.func_158(Param0))
	{
		return;
	}
	iVar1 = aggregate.nb_hobo_dog.func_515(Param0);
	if (!aggregate.nb_hobo_dog.func_516(iVar1))
	{
		return;
	}
	iVar0 = aggregate.nb_hobo_dog.func_517(iVar1);
	if (!aggregate.flow_controller.func_373(iVar0))
	{
		return;
	}
	uVar2 = aggregate.net_assassination.func_508(iVar1);
	func_834(uVar2, iVar0, Param0);
	func_493(MISC::GET_GAME_TIMER());
	aggregate.net_assassination.func_552(1);
}

void func_525()
{
	if (aggregate.fme_animal_tagging.func_134(268435456))
	{
		return;
	}
	aggregate.net_coach_holdup.func_835(4);
	aggregate.fme_animal_tagging.func_174(268435456);
}

bool func_526(int iParam0)
{
	switch (Local_2026.f_10)
	{
		case -409129282:
			return func_836(iParam0);
		case -19759302:
			return func_837(iParam0);
		default:
			break;
	}
	return false;
}

void func_527()
{
	func_838(Local_2026.f_2);
	aggregate.fme_animal_tagging.func_174(262144);
}

bool func_528(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Local_2026.f_10 == -19759302)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
			{
			}
			else if (bParam4)
			{
				if ((aggregate.net_camp.func_517(iVar0, &Local_17, 32) || aggregate.net_camp.func_517(iVar0, &Local_17, 65536)) || aggregate.net_camp.func_517(iVar0, &Local_17, 131072))
				{
				}
				else if (!func_438(iVar0, &iVar1, 1, 0))
				{
				}
				else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), vParam0) > fParam3)
				{
				}
				else
				{
					return true;
				}
				iVar0++;
				Jump @330; //curOff = 161
				if (Local_2026.f_10 == -409129282)
				{
					iVar2 = 0;
					while (iVar2 < 4)
					{
						if (!aggregate.net_camp.func_517(iVar2, &Local_17, 128))
						{
						}
						else if (bParam4)
						{
							if ((aggregate.net_camp.func_517(iVar2, &Local_17, 2) || aggregate.net_camp.func_517(iVar2, &Local_17, 256)) || aggregate.net_camp.func_517(iVar2, &Local_17, 512))
							{
							}
							else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar2 /*5*/])))
							{
							}
							else
							{
								iVar3 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar2 /*5*/]));
								if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam0) > fParam3)
								{
								}
								else
								{
									return true;
								}
							}
							iVar2++;
							return false;
						}
					}
				}
			}
		}
	}
}

void func_529()
{
	func_839(Local_2026.f_2);
	aggregate.fme_animal_tagging.func_174(524288);
}

bool func_530(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	var uVar7;

	if (!aggregate.fme_animal_tagging.func_134(1) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(8192))
	{
		iVar0 = Local_2026.f_620;
		iVar1 = Local_2026.f_626;
	}
	else
	{
		iVar0 = Local_2026.f_619;
		iVar1 = Local_2026.f_625;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iVar0))
	{
		return false;
	}
	if (aggregate.annesburg.func_141(iVar1, Global_36))
	{
		if (func_258(1, 255) && func_363(255) == 0)
		{
			*uParam0 = 0f;
			return true;
		}
		vVar2 = { VOLUME::_0xF70F00013A62F866(iVar0) };
		fVar5 = BUILTIN::VDIST(vVar2, Global_36);
		if (func_836(255) || func_837(255))
		{
			if ((aggregate.interactive_campfire.func_227(Global_35, 6) && func_841(Global_35, &uVar6, &uVar7)) && aggregate.annesburg.func_141(iVar0, Global_36))
			{
				*uParam0 = 0f;
				return true;
			}
			else if (fVar5 < 6f || aggregate.annesburg.func_141(iVar0, Global_36))
			{
				*uParam0 = 0.55f;
				return true;
			}
			else if (fVar5 < 20f)
			{
				*uParam0 = 1.25f;
				return true;
			}
		}
	}
	return false;
}

bool func_531()
{
	struct<2> Var0;

	if (aggregate.aberdeenpigfarm.func_156())
	{
		return false;
	}
	Var0 = { aggregate.aberdeenpigfarm.func_159() };
	if (!aggregate.aberdeenpigfarm.func_158(Var0))
	{
		return false;
	}
	if (!aggregate.flow_controller.func_165(Local_2026.f_2, Var0))
	{
		return false;
	}
	return true;
}

bool func_533(bool bParam0)
{
	if (func_370())
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 8388608))
	{
		return false;
	}
	if (!func_346())
	{
		return false;
	}
	if (Local_2026.f_632 < 0f)
	{
		return false;
	}
	if (!aggregate.net_assassination.func_1054(Local_2026.f_632, 0, 0, 0))
	{
		return false;
	}
	if (bParam0 && aggregate.fme_animal_tagging.func_563(PLAYER::PLAYER_ID(), 1, 1))
	{
		return false;
	}
	return true;
}

bool func_534(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return (aggregate.net_assassination.func_303(iParam0, 1) && !aggregate.net_assassination.func_303(iParam0, 2));
}

bool func_535(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return aggregate.net_assassination.func_303(iParam0, 2);
}

void func_538(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<8> Var0;

	Var0.f_6 = iParam1;
	Var0.f_7 = iParam2;
	Var0.f_4 = iParam0;
	Var0.f_5 = Local_2026;
	func_846(&Var0, uParam3);
}

void func_542()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_LR"), true);
	PAD::ENABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_UD"), true);
}

void func_543(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 1048576))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, 0);
	}
	aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 128);
	aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 1048576);
	aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 256);
	aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 512);
	iVar0 = (Local_361[Local_2026.f_634 /*52*/])->f_46;
	(Local_361[Local_2026.f_634 /*52*/])->f_46 = -1;
	Local_2026.f_636 = -1;
	if (!bParam0)
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && iVar0 != -1) && func_849(iVar0, &iVar2)) && ENTITY::GET_ENTITY_MODEL(iVar2) == func_184())
	{
		PED::_0xED00D72F81CF7278(iVar2, 0, 0);
		ENTITY::DETACH_ENTITY(iVar2, true, true);
		TASK::_0x9EBD34958AB6F824(iVar2);
		TASK::_0xF0B4F759F35CC7F5(iVar2, -2141086268, iVar1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iVar2, true);
		MISC::_0x7FA58CED69405F9A(iVar2, 3);
	}
}

char* func_544()
{
	return "giver";
}

char* func_545()
{
	return "RECIEVER";
}

char* func_546(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		default:
			break;
	}
	return "";
}

struct<4> func_547(int iParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	struct<4> Var4;

	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0, sParam1, &Var4, !MISC::IS_STRING_NULL_OR_EMPTY(sParam2), sParam2, 2))
	{
		Var0 = { Var4 };
		Var0.f_3 = Var4.f_3.f_2;
	}
	return Var0;
}

int func_550(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&(Local_361[iParam0 /*52*/])->f_2.f_4[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_551(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&(Local_361[iParam0 /*52*/])->f_2.f_6[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_552()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (PED::_0xA911EE21EDF69DAF(iVar1))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::_0xB07D3185E11657A5(iVar0)) && ENTITY::GET_ENTITY_MODEL(iVar0) == func_184())
		{
			return true;
		}
	}
	return false;
}

bool func_553(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_7 != iVar1)
		{
		}
		else if (aggregate.net_camp.func_517(iVar0, &Local_17, 32))
		{
		}
		else if (!bParam0)
		{
			if (aggregate.net_camp.func_517(iVar0, &Local_17, 65536) || aggregate.net_camp.func_517(iVar0, &Local_17, 131072))
			{
			}
			else if (!aggregate.net_coach_holdup.func_695(iVar0, 255))
			{
			}
			else
			{
				return true;
			}
			iVar0++;
			return false;
		}
	}
}

bool func_554(int iParam0)
{
	return aggregate.interactive_campfire.func_227(iParam0, 6);
}

void func_558(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (Local_2026.f_10 != -19759302)
	{
		return;
	}
	if (!aggregate.net_camp.func_517(iParam0, &Local_17, 1024))
	{
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 32))
	{
		aggregate.net_coach_holdup.func_851(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		return;
	}
	if ((((Local_17.f_16[iParam0 /*12*/])->f_2 == -1088690539 || (Local_17.f_16[iParam0 /*12*/])->f_2 == 0) || !func_438(iParam0, &iVar0, 1, 1)) || (!PED::_0x3AA24CCC0D451379(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false)))
	{
		aggregate.net_coach_holdup.func_851(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		return;
	}
	iVar3 = func_854(iVar0, &uVar1, &iVar2);
	iVar5 = ENTITY::_0x61914209C36EFDDB(iVar0);
	if ((aggregate.fme_animal_tagging.func_134(1) && func_855(&Local_2026, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64))) && ((Local_17.f_16[iParam0 /*12*/])->f_7 == PLAYER::PLAYER_ID() || (Local_17.f_16[iParam0 /*12*/])->f_7 == 255))
	{
		if (iVar5 == 3 && PED::_0x3AA24CCC0D451379(iVar0))
		{
			bVar4 = PED::_0x3D9F958834AB9C30(iVar0) == Global_35;
		}
		else if (((iVar5 == 1 && !ENTITY::IS_ENTITY_DEAD(Global_35)) && PED::_0x42429C674B61238B(Global_35)) && aggregate.fme_escaped_convicts.func_892(Global_35) == iVar0)
		{
			bVar4 = true;
		}
	}
	if (Local_17.f_16[iParam0 /*12*/])->f_7 == PLAYER::PLAYER_ID()
	{
		if (((aggregate.net_camp.func_517(iParam0, &Local_17, 65536) && aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32)) || (aggregate.net_camp.func_517(iParam0, &Local_17, 131072) && aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64))) || ((iVar3 == 0 && aggregate.fme_animal_tagging.func_134(1)) && func_855(&Local_2026, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64))))
		{
			iVar2 = PLAYER::PLAYER_ID();
		}
	}
	if (bVar4)
	{
	}
	else if (iVar2 != PLAYER::PLAYER_ID())
	{
		if (iVar2 == 255)
		{
			iVar6 = ENTITY::_0x61914209C36EFDDB(iVar0);
			if (iVar6 == 8 || iVar6 == 9)
			{
				return;
			}
		}
		aggregate.net_coach_holdup.func_851(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		return;
	}
	aggregate.net_coach_holdup.func_857(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, Global_35))
	{
		aggregate.net_coach_holdup.func_857(iParam0);
	}
	else
	{
		aggregate.net_coach_holdup.func_851(iParam0);
	}
	if (((((aggregate.fme_animal_tagging.func_134(1) && !aggregate.net_coach_holdup.func_695(iParam0, 255)) && func_855(&Local_2026, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), aggregate.fme_animal_tagging.func_134(8192))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar0)) && iVar5 != 9) && iVar5 != 8)
	{
		aggregate.net_coach_holdup.func_857(iParam0);
	}
	else
	{
		aggregate.net_coach_holdup.func_851(iParam0);
	}
}

void func_559(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (!aggregate.fme_challenges.func_1307(iParam0, 64))
	{
		if ((Local_17.f_16[iParam0 /*12*/])->f_2 != 401658241 && aggregate.fme_challenges.func_1307(iParam0, 33554432))
		{
			bVar0 = true;
		}
		if ((!bVar0 && PED::IS_PED_HUMAN(iParam1)) && !aggregate.net_camp.func_517(iParam0, &Local_17, 32768))
		{
			MISC::_0xF63FA29D4A9ACA86(iParam1, func_860(iParam1));
			PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_860(iParam1)));
		}
		aggregate.net_assassination.func_458(iParam0, 64);
	}
	if (!aggregate.fme_challenges.func_1307(iParam0, 67108864) && aggregate.fme_animal_tagging.func_134(1))
	{
		if ((Local_17.f_16[iParam0 /*12*/])->f_2 != 401658241 && aggregate.fme_challenges.func_1307(iParam0, 33554432))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			iVar1 = func_861(iParam0, iParam1, 1);
			if (iVar1 != 0)
			{
				PLAYER::_0x7C32191D9FB2BDEA(iVar1);
			}
		}
		if (!bVar0)
		{
			switch (aggregate.net_coach_holdup.func_557(iParam0, &Local_17))
			{
				case 1095997463:
					switch (Local_2026.f_10)
					{
						case -409129282:
							MISC::_0xF63FA29D4A9ACA86(iParam1, func_862());
							PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_862()));
							aggregate.net_assassination.func_458(iParam0, 2097152);
							break;
						case -19759302:
							MISC::_0xF63FA29D4A9ACA86(iParam1, func_863());
							PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_863()));
							aggregate.net_assassination.func_458(iParam0, 2097152);
							break;
					}
					break;
				default:
					if ((PED::IS_PED_HUMAN(iParam1) && (Local_17.f_16[iParam0 /*12*/])->f_2 != 1566032419) && !aggregate.net_camp.func_517(iParam0, &Local_17, 32768))
					{
						MISC::_0xF63FA29D4A9ACA86(iParam1, func_864());
						PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_864()));
						aggregate.net_assassination.func_458(iParam0, 2097152);
					}
					break;
			}
		}
		aggregate.net_assassination.func_458(iParam0, 67108864);
	}
}

void func_561(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	int iVar14;

	if (aggregate.net_camp.func_517(iParam0, &Local_17, 2))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_5) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID((Local_17.f_16[iParam0 /*12*/])->f_5))
		{
			iVar0 = NETWORK::_0xD7F6781A0ABAF6FB((Local_17.f_16[iParam0 /*12*/])->f_5);
			if (ANIMSCENE::_0x25557E324489393C(iVar0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
			}
		}
		return;
	}
	if (aggregate.net_coach_holdup.func_557(iParam0, &Local_17) != 1095997463)
	{
		return;
	}
	if (aggregate.net_coach_holdup.func_865(iParam0, &Local_17) != 22)
	{
		return;
	}
	if (!aggregate.net_camp.func_517(iParam0, &Local_17, 1))
	{
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_5))
	{
		return;
	}
	iVar0 = NETWORK::_0xD7F6781A0ABAF6FB((Local_17.f_16[iParam0 /*12*/])->f_5);
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
	{
		return;
	}
	if (!ANIMSCENE::_0x95531A4A20CCE7BC(iVar0, 0) || !ANIMSCENE::_0x477122B8D05E7968(iVar0, 1, 0))
	{
		return;
	}
	if (func_398(iParam0, 0))
	{
		return;
	}
	sVar2 = func_544();
	if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar0, sVar2, false)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, sVar2, iParam1, 0);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar0, func_546(0), true);
		func_866(iParam0, iVar0, iParam1);
	}
	ANIMSCENE::_0xADF1D53F3B1FE0A7(iVar0, &vVar3, &vVar6, 2);
	if (BUILTIN::VDIST(vVar3, ENTITY::GET_ENTITY_COORDS(iParam1, false, false)) > 1f)
	{
		func_866(iParam0, iVar0, iParam1);
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iVar0, 0) && !ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0))
	{
		iVar9 = ANIMSCENE::_GET_ANIM_SCENE_PED(iVar0, func_545(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			if (!PED::IS_PED_A_PLAYER(iVar9))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar0, func_545(), iVar9);
			}
			else if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9) != (Local_17.f_16[iParam0 /*12*/])->f_7)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar0, func_545(), iVar9);
			}
			return;
		}
		if (!NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iParam0 /*12*/])->f_7))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((Local_17.f_16[iParam0 /*12*/])->f_7))
		{
			return;
		}
		iVar10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX((Local_17.f_16[iParam0 /*12*/])->f_7);
		if (aggregate.fishing_core.func_34(Local_361[iVar10 /*52*/], 256))
		{
			return;
		}
		if (!aggregate.fishing_core.func_34(Local_361[iVar10 /*52*/], 1048576))
		{
			return;
		}
		iVar1 = PLAYER::GET_PLAYER_PED((Local_17.f_16[iParam0 /*12*/])->f_7);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_545(), iVar1, 0);
		vVar11 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
		aggregate.fm_mission_controller.func_7506(&vVar11, 0f);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		vVar6 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam1) };
		vVar3 = { vVar3.x, vVar3.y, vVar11.z };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar0, vVar3, vVar6, 2);
		if (func_867(iParam1, &iVar14))
		{
			PED::_0xED00D72F81CF7278(iVar14, 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(iVar14, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_868(), iVar14, 0);
		}
		ANIMSCENE::START_ANIM_SCENE(iVar0);
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0) || ANIMSCENE::_0xD8254CB2C586412B(iVar0, 0))
	{
		func_538(6, PLAYER::PLAYER_ID(), iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
}

void func_562(int iParam0, int iParam1)
{
	if ((Local_17.f_16[iParam0 /*12*/])->f_2 == -1088690539 || (Local_17.f_16[iParam0 /*12*/])->f_2 == 401658241)
	{
		return;
	}
	if (!aggregate.net_camp.func_517(iParam0, &Local_17, 33554432))
	{
		return;
	}
	if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		return;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 32))
	{
		return;
	}
	aggregate.nb_treasure_hunter.func_482(iParam1, 0);
	aggregate.net_assassination.func_458(iParam0, 32);
}

void func_563(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (aggregate.fishing_core.func_34((*uParam3)[iVar0 /*52*/], 2))
	{
		return;
	}
	if (func_870(iParam1))
	{
		func_115((*uParam3)[iVar0 /*52*/], uParam4);
		return;
	}
	if (func_871(iParam1))
	{
		func_115((*uParam3)[iVar0 /*52*/], uParam4);
		return;
	}
	if (func_872(iParam1))
	{
		func_115((*uParam3)[iVar0 /*52*/], uParam4);
		return;
	}
	if (func_873(iParam1, &(uParam4->f_171)))
	{
		func_115((*uParam3)[iVar0 /*52*/], uParam4);
		return;
	}
	if (func_874(uParam2, uParam3))
	{
		func_115((*uParam3)[iVar0 /*52*/], uParam4);
		return;
	}
}

void func_564(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;

	if (!aggregate.fme_challenges.func_1307(iParam0, 8192) || aggregate.fme_challenges.func_1307(iParam0, 16))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		aggregate.net_assassination.func_458(iParam0, 16384);
		return;
	}
	fVar0 = aggregate.fishing_core.func_39(iParam1, Global_36, 1);
	if (fVar0 > 25f)
	{
		aggregate.net_assassination.func_458(iParam0, 16384);
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		aggregate.net_assassination.func_458(iParam0, 16384);
		return;
	}
	if (!PED::IS_PED_HEADTRACKING_PED(iParam1, Global_35) || fVar0 > 12f)
	{
		fVar1 = 180f;
		if ((Local_17.f_16[iParam0 /*12*/])->f_2 == 824585797 && !aggregate.fme_animal_tagging.func_134(256))
		{
			fVar1 = 300f;
		}
		if (!func_875(iParam1, Global_35, fVar1))
		{
			aggregate.net_assassination.func_458(iParam0, 16384);
			return;
		}
		iVar2 = aggregate.annesburg.func_253(Global_35);
		if (AITRANSPORT::_0xDC44F405A6B98D03(Global_35, 0))
		{
			iVar2 = PED::_0x849BD6C6314793D0(Global_35);
		}
		if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iVar2, 17))
		{
			aggregate.net_assassination.func_458(iParam0, 16384);
			return;
		}
	}
	aggregate.net_assassination.func_458(iParam0, 16384);
}

void func_565(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;

	if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	switch ((Local_17.f_16[iParam0 /*12*/])->f_2)
	{
		case 1566032419:
			if (!bVar0 && !bVar1)
			{
				return;
			}
			if (aggregate.net_camp.func_517(iParam0, &Local_17, 2048) != bVar1)
			{
				return;
			}
			if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 4194304) && !func_876(iParam0, 8, &Local_361, 1))
			{
				func_877(iParam0, iParam1, 8, &Local_361, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
				func_878(iParam0, 8, Local_361[Local_2026.f_634 /*52*/]);
				aggregate.fme_animal_tagging.func_1147(Local_361[Local_2026.f_634 /*52*/], 4194304);
				return;
			}
			fVar2 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
			if (func_876(iParam0, 6, &Local_361, 1))
			{
				if (fVar2 > 60f)
				{
					func_878(iParam0, 6, Local_361[Local_2026.f_634 /*52*/]);
					func_878(iParam0, 9, Local_361[Local_2026.f_634 /*52*/]);
				}
				else if (fVar2 < 18f)
				{
					switch (Local_2026.f_10)
					{
						case -409129282:
							bVar3 = func_552();
							break;
						case -19759302:
							bVar3 = func_879(1);
							break;
					}
					if (bVar3)
					{
						func_877(iParam0, iParam1, 9, &Local_361, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
					}
					return;
				}
			}
			if (fVar2 > 20f)
			{
				return;
			}
			func_877(iParam0, iParam1, 6, &Local_361, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
			break;
		case -2133983324:
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 38 || (Local_17.f_16[iParam0 /*12*/])->f_3 == 39)
			{
				func_878(iParam0, 6, Local_361[Local_2026.f_634 /*52*/]);
				func_878(iParam0, 11, Local_361[Local_2026.f_634 /*52*/]);
				func_878(iParam0, 1, Local_361[Local_2026.f_634 /*52*/]);
			}
			break;
		case 824585797:
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 7)
			{
				func_878(iParam0, 6, Local_361[Local_2026.f_634 /*52*/]);
				func_878(iParam0, 11, Local_361[Local_2026.f_634 /*52*/]);
				func_878(iParam0, 1, Local_361[Local_2026.f_634 /*52*/]);
			}
			break;
	}
}

void func_567(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (aggregate.net_camp.func_517(iParam0, uParam1, 32))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), uParam3->f_10.f_18);
		return;
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 != 1566032419)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), uParam3->f_10.f_15);
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, uParam1, 2048))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), uParam3->f_10.f_16);
		return;
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/])), uParam3->f_10.f_17);
		return;
	}
}

void func_568(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((((Local_17.f_16[iParam0 /*12*/])->f_2 == joaat("driver") || (Local_17.f_16[iParam0 /*12*/])->f_2 == 824585797) || (Local_17.f_16[iParam0 /*12*/])->f_2 == -193064196) || (Local_17.f_16[iParam0 /*12*/])->f_2 == -522830230)
	{
		iVar0 = (Local_17.f_16[iParam0 /*12*/])->f_11;
		if (iVar0 < 0 || iVar0 >= 3)
		{
			return;
		}
		iVar1 = PED::_0xEF2E6F870783369B(iParam1, 0);
		if (iVar1 == &Local_2026.f_621[iVar0])
		{
			return;
		}
		PED::_0xFC3DB99C8144CD81(iParam1, &(Local_2026.f_621[iVar0]), 0, 0, 0);
	}
}

void func_569(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = aggregate.net_coach_holdup.func_566(iParam0, uParam1);
	iVar2 = func_698(iParam0, uParam1);
	vVar4 = { fParam3->f_10.f_2 };
	fVar7 = 10f;
	if (aggregate.fme_supply_train.func_1207(iVar0))
	{
		return;
	}
	iVar10 = func_882((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1);
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 2:
			func_883(iVar2);
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar2)
			{
				return;
			}
			if (aggregate.fme_animal_tagging.func_134(256))
			{
				return;
			}
			fVar8 = 4.5f;
			if (func_884((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, fParam3))
			{
				iVar3 = NETWORK::NET_TO_VEH(&(uParam1->f_3[((uParam1->f_16[iParam0 /*12*/])->f_11 - 1) /*4*/]));
				fVar9 = func_885(((uParam1->f_16[iParam0 /*12*/])->f_11 - 1), (uParam1->f_16[iParam0 /*12*/])->f_11, fParam3);
				func_886((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar0, iVar3, fVar8, iVar10, fVar9);
				return;
			}
			if (aggregate.fishing_core.func_34(uParam1, 65536))
			{
				func_887((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar0, fVar8, iVar10, fParam3);
				return;
			}
			func_888((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar0, vVar4, fVar8, iVar10, fParam3, fVar7);
			break;
		case 3:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar2)
			{
				return;
			}
			func_877(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
			if (aggregate.fme_animal_tagging.func_134(256))
			{
				func_889(iVar1);
				return;
			}
			fVar8 = 10f;
			if (func_890(iVar0))
			{
				fVar8 = 0f;
			}
			iVar11 = func_891(iVar2, uParam2, 1120403456 /* Float: 100f */);
			if (func_884((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, fParam3))
			{
				iVar3 = NETWORK::NET_TO_VEH(&(uParam1->f_3[((uParam1->f_16[iParam0 /*12*/])->f_11 - 1) /*4*/]));
				fVar9 = func_885(((uParam1->f_16[iParam0 /*12*/])->f_11 - 1), (uParam1->f_16[iParam0 /*12*/])->f_11, fParam3);
				func_892(((uParam1->f_16[iParam0 /*12*/])->f_11 - 1), iVar1, iVar11, iVar0, iVar3, fVar8, iVar10, fVar9);
				return;
			}
			if (aggregate.fishing_core.func_34(uParam1, 65536))
			{
				func_893((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar11, iVar0, fVar8, iVar10, fParam3);
				return;
			}
			func_894((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar11, iVar0, vVar4, fVar8, iVar10, fParam3, fVar7);
			break;
		case 4:
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			if (aggregate.fishing_core.func_34(uParam1, 65536))
			{
				func_893((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar11, iVar0, 10f, iVar10, fParam3);
				return;
			}
			func_894((uParam1->f_16[iParam0 /*12*/])->f_11, iVar1, iVar11, iVar0, vVar4, 0f, iVar10, fParam3, fVar7);
			break;
		case 1:
			if (!func_895(iVar0, -1, 1))
			{
				return;
			}
			if (PED::IS_PED_ON_VEHICLE(iVar2, false))
			{
				func_896(iVar1, ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 20f, 16777216, 4);
			}
			func_897(iVar1, iVar0, -1, 1073741824 /* Float: 2f */, -1, 1);
			break;
	}
}

void func_570(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = aggregate.net_coach_holdup.func_566(iParam0, uParam1);
	iVar2 = func_698(iParam0, uParam1);
	iVar4 = 16777217;
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 0:
			break;
		case 35:
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 6, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 3, true);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return;
			}
			if (VEHICLE::_0x0E3BF7ED4169EC43(PED::GET_VEHICLE_PED_IS_IN(iVar2, true)))
			{
				iVar4 = 4161;
			}
			iVar3 = func_891(iVar2, &Local_361, 1120403456 /* Float: 100f */);
			if (iVar3 == aggregate.fm_deathmatch_controller.func_134())
			{
				iVar3 = 0;
			}
			if (func_899(iVar1, iVar4, iVar3))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			}
			break;
		case 34:
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			func_900(iVar1, 0, 1);
			break;
		case 36:
			func_896(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 100f, 0, 4);
			break;
	}
}

void func_571(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_698(iParam0, uParam1);
	iVar2 = aggregate.net_coach_holdup.func_566(iParam0, uParam1);
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 14:
			if (PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				return;
			}
			func_897(iVar2, iVar0, -2, 1073741824 /* Float: 2f */, -1, 0);
			break;
		case 15:
			func_883(iVar1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			break;
		case 16:
			func_900(iVar2, 0, 0);
			break;
	}
}

void func_572(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;

	iVar1 = aggregate.net_coach_holdup.func_566(iParam0, uParam1);
	func_578(iParam0, &iVar0);
	iVar2 = func_698(iParam0, uParam1);
	if (aggregate.net_camp.func_517(iParam0, uParam1, 32))
	{
		if ((aggregate.fishing_core.func_34(&Local_17, 524288) && iParam0 == Local_17.f_328) && (aggregate.fishing_core.func_34(&Local_17, 16777216) || aggregate.fishing_core.func_34(&Local_17, 33554432)))
		{
			ENTITY::_0x18FF3110CF47115D(iVar2, 2, true);
		}
		else
		{
			ENTITY::_0x18FF3110CF47115D(iVar2, 2, false);
		}
		ENTITY::_0x18FF3110CF47115D(iVar2, 1, false);
		ENTITY::_0x18FF3110CF47115D(iVar2, 3, false);
		ENTITY::_0x18FF3110CF47115D(iVar2, 7, false);
		ENTITY::_0x18FF3110CF47115D(iVar2, 11, false);
		ENTITY::_0x18FF3110CF47115D(iVar2, 10, false);
		if (PED::_0xE4C11F104620DDCE(iVar2, 0))
		{
			PED::_0x6569F31A01B4C097(iVar2, 0, false);
		}
		if (PED::_0xE4C11F104620DDCE(iVar2, 1))
		{
			PED::_0x6569F31A01B4C097(iVar2, 1, false);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar2, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar2, false);
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 67108864))
	{
		if (PED::_0xE4C11F104620DDCE(iVar2, 0))
		{
			PED::_0x6569F31A01B4C097(iVar2, 0, false);
		}
		if (PED::_0xE4C11F104620DDCE(iVar2, 1))
		{
			PED::_0x6569F31A01B4C097(iVar2, 1, false);
		}
	}
	if (((Local_17.f_16[iParam0 /*12*/])->f_3 != 0 && (Local_17.f_16[iParam0 /*12*/])->f_3 != 17) && (Local_17.f_16[iParam0 /*12*/])->f_3 != 18)
	{
		if (PED::GET_PED_CONFIG_FLAG(iVar2, 277, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar2, 277, false);
		}
	}
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 25:
			if (!aggregate.barcustomer_interaction.func_46(iVar2, -1098463898))
			{
				iVar5 = func_901(iParam0);
				if (iVar5 != 0)
				{
					func_902(iVar1, iVar5, (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
				}
				else
				{
					func_903(iVar1, (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
				}
			}
			func_904(iParam0, uParam1, 26);
			break;
		case 26:
			func_905(iVar1);
			func_904(iParam0, uParam1, 25);
			break;
		case 17:
			func_883(iVar2);
			if (aggregate.fishing_core.func_34(uParam1, 16))
			{
				func_877(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
				if (!aggregate.fme_challenges.func_1307(iParam0, 1048576) && func_906(iVar2))
				{
					aggregate.net_assassination.func_458(iParam0, 1048576);
				}
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
			break;
		case 18:
			func_877(iParam0, iVar2, 1, uParam2, 0, 0, 1, 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
			{
				return;
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			func_899(iVar1, 16777216, 0);
			break;
		case 20:
			func_877(iParam0, iVar2, 4, uParam2, 0, 0, 1, 0);
			if (aggregate.net_camp.func_517(iParam0, &Local_17, 16384))
			{
				func_877(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
			}
			if (PED::_0xB7DBB2986B87E230(iVar2, 0.5f))
			{
				func_877(iParam0, iVar2, 5, uParam2, 0, 0, 1, 0);
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			if (!func_907(uParam2, iParam0, &iVar3))
			{
				iVar3 = func_891(iVar2, uParam2, 25f);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				func_908(iVar1, iVar3);
			}
			func_908(iVar1, 0);
			break;
		case 19:
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return;
			}
			if (!aggregate.barcustomer_interaction.func_46(iVar2, 518218985))
			{
				iVar3 = func_891(iVar2, uParam2, 25f);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_909(&iVar2, 10000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			if (func_896(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2.2f, 256, 6) && func_910(iVar2, 2.2f, &iVar4))
			{
				TASK::_0x3923EC958249657D(iVar2, iVar4, -1082130432 /* Float: -1f */);
			}
			break;
		case 21:
			if (aggregate.net_camp.func_517(iParam0, &Local_17, 16384) && !func_876(iParam0, 10, &Local_361, 0))
			{
				if (func_911(iVar2, 1095997463))
				{
					func_912(iParam0, 10, Local_361[Local_2026.f_634 /*52*/]);
				}
				else
				{
					func_877(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
				}
			}
			else
			{
				func_877(iParam0, iVar2, 2, uParam2, 0, 0, 1, 1);
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			if (aggregate.net_camp.func_517(iParam0, uParam1, 4))
			{
				return;
			}
			iVar4 = func_891(iVar2, &Local_361, 1120403456 /* Float: 100f */);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
			}
			else
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
			}
			if (func_896(iVar1, vVar6, 200f, 1, 3))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					TASK::_0x3923EC958249657D(iVar2, iVar4, -1082130432 /* Float: -1f */);
				}
			}
			break;
		case 27:
			func_913(iVar1);
			break;
		case 22:
			PED::SET_PED_CONFIG_FLAG(iVar2, 297, true);
			PED::SET_PED_COMBAT_MOVEMENT(iVar2, 0);
			PED::SET_PED_CONFIG_FLAG(iVar2, 121, true);
			PED::_0xEAE3B5B019C8D23F(iVar2, 29);
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			func_877(iParam0, iVar2, 4, uParam2, 0, 0, 1, 0);
			if (aggregate.net_camp.func_517(iParam0, &Local_17, 16384))
			{
				func_877(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
			}
			if (PED::_0xB7DBB2986B87E230(iVar2, 0.5f))
			{
				func_877(iParam0, iVar2, 5, uParam2, 0, 0, 1, 1);
			}
			if ((uParam1->f_16[iParam0 /*12*/])->f_7 != 255)
			{
				func_877(iParam0, iVar2, 3, uParam2, PLAYER::GET_PLAYER_PED((uParam1->f_16[iParam0 /*12*/])->f_7), 0, 1, 0);
			}
			else if (!aggregate.barcustomer_interaction.func_46(iVar2, -1519143300))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_5) && ANIMSCENE::_0xCBFC7725DE6CE2E0(NETWORK::_0xD7F6781A0ABAF6FB((uParam1->f_16[iParam0 /*12*/])->f_5), 0))
				{
					return;
				}
				iVar3 = func_891(iVar2, uParam2, 25f);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					func_908(iVar1, iVar3);
				}
				func_908(iVar1, 0);
				return;
			}
			break;
		case 23:
			if (!func_914(iVar2))
			{
				return;
			}
			func_877(iParam0, iVar2, 3, uParam2, 0, 0, 1, 0);
			func_915(iVar1);
			break;
		case 28:
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
			break;
	}
}

void func_573(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = aggregate.net_coach_holdup.func_566(iParam0, uParam1);
	iVar2 = func_698(iParam0, uParam1);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_1))
	{
		return;
	}
	iVar3 = NETWORK::NET_TO_PED((uParam1->f_16[iParam0 /*12*/])->f_1);
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
		return;
	}
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 29:
			if (aggregate.fishing_core.func_34(uParam1, 16))
			{
				iVar4 = func_891(iVar2, uParam2, 1120403456 /* Float: 100f */);
				func_916(iVar1, iVar4);
			}
			else
			{
				iVar4 = func_917(iVar2, 1120403456 /* Float: 100f */);
				func_918(iVar1, iVar4, 5000, 0, 31, 0);
			}
			if (func_919(iParam0, iVar2, uParam1))
			{
				if (aggregate.barcustomer_interaction.func_46(iVar2, 1435919172))
				{
					TASK::CLEAR_PED_TASKS(iVar2, 1, 0);
				}
			}
			else
			{
				func_920(iVar1, iVar0, (uParam1->f_16[iParam0 /*12*/])->f_8, 1.75f);
			}
			break;
		case 30:
			func_900(iVar1, 0, 1);
			break;
	}
}

void func_574(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = aggregate.net_coach_holdup.func_566(iParam0, uParam1);
	iVar2 = func_698(iParam0, uParam1);
	iVar4 = (Local_17.f_16[iParam0 /*12*/])->f_7;
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 6:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) == iVar2)
			{
				return;
			}
			func_897(iVar1, iVar0, 0, 1073741824 /* Float: 2f */, -1, 1);
			break;
		case 7:
			if (!func_921(iVar2))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(iVar2, joaat("weapon_shotgun_doublebarrel"), 0, 0))
				{
					func_922(iParam0, joaat("weapon_shotgun_doublebarrel"), 1);
				}
				else
				{
					func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			break;
		case 8:
			if (!func_921(iVar2))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(iVar2, joaat("weapon_shotgun_doublebarrel"), 0, 0))
				{
					func_922(iParam0, joaat("weapon_shotgun_doublebarrel"), 1);
				}
				else
				{
					func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			if (!NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			if (!func_876(iParam0, 9, &Local_361, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_911(iVar2, 0))
				{
					func_877(iParam0, iVar2, 9, &Local_361, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_912(iParam0, 9, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_923(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 9:
			if (!NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			func_905(iVar1);
			if (!func_876(iParam0, 6, &Local_361, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_911(iVar2, 0))
				{
					func_877(iParam0, iVar2, 6, &Local_361, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_912(iParam0, 6, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_909(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 10:
			if (!NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			if (!aggregate.barcustomer_interaction.func_46(iVar2, 1630799643))
			{
				iVar5 = PLAYER::GET_PLAYER_PED((Local_17.f_16[iParam0 /*12*/])->f_7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar5) || func_924(iVar2, &iVar5, &uVar6, 1103626240 /* Float: 25f */))
				{
					if (func_921(iVar2))
					{
						func_925(iVar1, iVar5);
					}
					else
					{
						func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
					}
				}
				else
				{
					func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			if (!func_876(iParam0, 11, &Local_361, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_911(iVar2, 0))
				{
					func_877(iParam0, iVar2, 11, &Local_361, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_912(iParam0, 11, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_909(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
			{
				return;
			}
			iVar7 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if (aggregate.fme_condor_egg.func_1607(iVar7, 1, 1))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if ((Local_361[iVar7 /*52*/])->f_47 > 44000 && !func_876(iParam0, 0, &Local_361, 0))
				{
					if (!func_911(iVar2, 0))
					{
						func_877(iParam0, iVar2, 0, &Local_361, iVar3, 0, 0, 0);
					}
				}
				else if ((Local_361[iVar7 /*52*/])->f_47 > 35000 && !func_876(iParam0, 1, &Local_361, 0))
				{
					if (func_911(iVar2, 0))
					{
						func_912(iParam0, 1, Local_361[Local_2026.f_634 /*52*/]);
					}
					else
					{
						func_877(iParam0, iVar2, 1, &Local_361, iVar3, 0, 0, 0);
					}
				}
			}
			break;
		case 11:
			func_877(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
			func_900(iVar1, 1, 0);
			break;
		case 12:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iVar2)
			{
				return;
			}
			func_926(iVar1, iVar0);
			break;
	}
}

void func_575(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;

	iVar0 = func_698(iParam0, uParam1);
	iVar1 = aggregate.net_coach_holdup.func_566(iParam0, uParam1);
	if (aggregate.net_camp.func_517(iParam0, uParam1, 2048))
	{
		iVar6 = 1;
		iVar2 = fParam3->f_620;
		if (VOLUME::_0x92A78D0BEDB332A3(iVar2))
		{
			vVar3 = { VOLUME::_0xF70F00013A62F866(iVar2) };
		}
		else
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		}
	}
	else
	{
		iVar2 = fParam3->f_619;
		if (VOLUME::_0x92A78D0BEDB332A3(iVar2))
		{
			vVar3 = { VOLUME::_0xF70F00013A62F866(iVar2) };
		}
		else
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		}
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iVar2))
	{
		PED::_0xFC3DB99C8144CD81(iVar0, iVar2, 0, 0, 0);
	}
	iVar8 = 1711865203;
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 31:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			if (func_921(iVar0) && !aggregate.fme_challenges.func_1307(iParam0, 32768))
			{
				func_883(iVar0);
				return;
			}
			if (!aggregate.fme_challenges.func_1307(iParam0, 16))
			{
				if (!func_876(iParam0, 7, &Local_361, 0) && func_927(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 80f, &iVar7, 20f, iVar6, 1))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 0))
					{
						PED::_0xEC6935EBE0847B90(iVar0, aggregate.camera_item.func_108(iVar7));
						TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
					}
					if (func_929(iVar1, iVar8, PLAYER::GET_PLAYER_PED(iVar7), 1))
					{
						func_912(iParam0, 7, Local_361[Local_2026.f_634 /*52*/]);
					}
					return;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_232(iVar8), func_930(iVar8), 1))
				{
					return;
				}
				if (func_931(iVar0, 20f, &iVar7))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 0))
					{
						PED::_0xEC6935EBE0847B90(iVar0, aggregate.camera_item.func_108(iVar7));
						TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
					}
					func_905(iVar1);
					return;
				}
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				return;
			}
			iVar9 = func_901(iParam0);
			if (iVar9 == 0)
			{
				func_903(iVar1, (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
			}
			else
			{
				func_902(iVar1, iVar9, (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
			}
			break;
		case 33:
			if (Local_17.f_328 == -1)
			{
				return;
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 1))
			{
				PED::_0xA3A9299C4F2ADB98(iVar0);
				TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
				return;
			}
			if (Local_2026.f_10 == -19759302)
			{
				if (func_438(Local_17.f_328, &iVar13, 0, 0))
				{
					vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar13, false, false) };
				}
			}
			else if (Local_2026.f_10 == -409129282)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[Local_17.f_328 /*5*/])))
				{
					iVar14 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[Local_17.f_328 /*5*/]));
					vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar14, false, false) };
				}
			}
			if (aggregate.annesburg.func_121(vVar10))
			{
				return;
			}
			if (aggregate.barcustomer_interaction.func_46(iVar0, 242628503))
			{
				return;
			}
			if (PED::_0xA911EE21EDF69DAF(iVar0))
			{
				return;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar15);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar10, 1f, 20000, 2f, 1048576, 40000f);
			if (ENTITY::DOES_ENTITY_EXIST(iVar13))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iVar13);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar14))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iVar14);
			}
			aggregate.fme_condor_egg.func_1296(iVar0, &iVar15, 0, 0, 1, 1);
			break;
		case 32:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 12, true);
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::_0x0C3CB2E600C8977D(iVar0, 0))
			{
				PED::SET_PED_PANIC_EXIT_SCENARIO(iVar0, vVar3);
			}
			break;
	}
}

void func_576(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	bool bVar7;

	iVar0 = func_698(iParam0, uParam1);
	iVar1 = aggregate.net_coach_holdup.func_566(iParam0, uParam1);
	if (!func_876(iParam0, 0, &Local_361, 0) && PED::IS_PED_IN_COMBAT(iVar0, 0))
	{
		func_877(iParam0, iVar0, 0, &Local_361, 0, 0, 1, 1);
	}
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 44:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
			if (func_933(iParam0, &iVar2))
			{
				func_934(iVar1, ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 200f, 0, 0);
			}
			else
			{
				func_934(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 200f, 0, 0);
			}
			break;
		case 45:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			if (aggregate.barcustomer_interaction.func_46(iVar0, 518218985))
			{
				return;
			}
			iVar3 = func_891(iVar0, &Local_361, 200f);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				bVar7 = func_935(iVar1, iVar3, 4, 200f, 18874368);
			}
			else
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
				bVar7 = func_896(iVar1, vVar4, 200f, 18874368, 4);
			}
			if (bVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					TASK::_0x3923EC958249657D(iVar0, iVar3, -1082130432 /* Float: -1f */);
				}
				if (VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619))
				{
					TASK::_0xE8F1A5B4CED3725A(iVar0, VOLUME::_0xF70F00013A62F866(Local_2026.f_619), -1082130432 /* Float: -1f */);
				}
			}
			break;
	}
}

void func_577(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	vector3 vVar9;

	iVar0 = func_698(iParam0, uParam1);
	iVar1 = aggregate.net_coach_holdup.func_566(iParam0, uParam1);
	bVar3 = func_578(iParam0, &iVar2);
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 38:
			if (aggregate.barcustomer_interaction.func_46(iVar0, -1098463898) || PED::IS_PED_ON_MOUNT(iVar0))
			{
				return;
			}
			if (func_901(iParam0) != 0)
			{
				return;
			}
			if (aggregate.fme_challenges.func_1307(iParam0, 1))
			{
				if ((!bVar3 || PED::IS_PED_IN_VEHICLE(iVar0, iVar2, false)) || PED::_0x1D46B417F926D34D(iVar0))
				{
					return;
				}
				func_897(iVar1, iVar2, func_675(&Local_2026, iParam0), 1073741824 /* Float: 2f */, -1, 1);
				return;
			}
			func_903(iVar1, (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
			break;
		case 39:
			if (aggregate.barcustomer_interaction.func_46(iVar0, -1098463898))
			{
				return;
			}
			if (func_921(iVar0) && !aggregate.fme_challenges.func_1307(iParam0, 32768))
			{
				func_883(iVar0);
				return;
			}
			func_902(iVar1, func_901(iParam0), (Local_2026.f_45[iParam0 /*6*/])->f_2, func_674(&Local_2026, iParam0));
			break;
		case 40:
			if (!NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			if (!func_876(iParam0, 9, &Local_361, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_911(iVar0, -2133983324))
				{
					func_877(iParam0, iVar0, 9, &Local_361, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
					func_905(iVar1);
				}
				else
				{
					func_912(iParam0, 9, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_923(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 41:
			if (!NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			func_905(iVar1);
			if (!func_876(iParam0, 6, &Local_361, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_911(iVar0, -2133983324))
				{
					func_877(iParam0, iVar0, 6, &Local_361, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
				}
				else
				{
					func_912(iParam0, 6, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_909(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 42:
			if (!NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iParam0 /*12*/])->f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
			{
				return;
			}
			if (!aggregate.barcustomer_interaction.func_46(iVar0, 1630799643))
			{
				iVar6 = PLAYER::GET_PLAYER_PED((Local_17.f_16[iParam0 /*12*/])->f_7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar6) || func_924(iVar0, &iVar6, &uVar7, 1103626240 /* Float: 25f */))
				{
					if (func_921(iVar0))
					{
						func_925(iVar1, iVar6);
					}
					else
					{
						func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false), 1);
					}
				}
				else
				{
					func_922(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false), 1);
				}
			}
			if (!func_876(iParam0, 11, &Local_361, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_911(iVar0, -2133983324))
				{
					func_877(iParam0, iVar0, 11, &Local_361, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
				}
				else
				{
					func_912(iParam0, 11, Local_361[Local_2026.f_634 /*52*/]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_909(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar5))
			{
				return;
			}
			iVar8 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar5);
			if (aggregate.fme_condor_egg.func_1607(iVar8, 1, 1))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if ((Local_361[iVar8 /*52*/])->f_47 > 44000 && !func_876(iParam0, 0, &Local_361, 0))
				{
					if (!func_911(iVar0, -2133983324))
					{
						func_877(iParam0, iVar0, 0, &Local_361, iVar4, 0, 0, 0);
					}
				}
				else if ((Local_361[iVar8 /*52*/])->f_47 > 35000 && !func_876(iParam0, 1, &Local_361, 0))
				{
					if (func_911(iVar0, -2133983324))
					{
						func_912(iParam0, 1, Local_361[Local_2026.f_634 /*52*/]);
					}
					else
					{
						func_877(iParam0, iVar0, 1, &Local_361, iVar4, 0, 0, 0);
					}
				}
			}
			break;
		case 37:
			func_877(iParam0, iVar0, 0, &Local_361, 0, 0, 1, 1);
			func_900(iVar1, 0, 0);
			break;
		case 43:
			if (bVar3)
			{
				vVar9 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			}
			else
			{
				vVar9 = { (Local_2026.f_45[iParam0 /*6*/])->f_2 };
			}
			func_896(iVar1, vVar9, 100f, 16777216, 3);
			break;
	}
}

bool func_578(int iParam0, int iParam1)
{
	if ((Local_17.f_16[iParam0 /*12*/])->f_11 < 0 || (Local_17.f_16[iParam0 /*12*/])->f_11 >= 3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_3[(Local_17.f_16[iParam0 /*12*/])->f_11 /*4*/])))
	{
		return false;
	}
	*iParam1 = NETWORK::NET_TO_VEH(&(Local_17.f_3[(Local_17.f_16[iParam0 /*12*/])->f_11 /*4*/]));
	return true;
}

Vector3 func_580(vector3 vParam0, float fParam3, vector3 vParam4)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;

	fVar5 = fParam3;
	while (fVar5 > 360f)
	{
		fVar5 = (fVar5 - 360f);
	}
	while (fVar5 < 360f)
	{
		fVar5 = (fVar5 + 360f);
	}
	fVar0 = vParam4.x;
	fVar1 = vParam4.y;
	func_936(&fVar0, &fVar1, fVar5);
	vVar2 = { (fVar0 + vParam0.x), (fVar1 + vParam0.y), (vParam0.z + vParam4.z) };
	return vVar2;
}

char* func_581()
{
	return "intimidated_on_feet_tough_guy";
}

void func_582(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::_0xCDB682BB47C02F0A(iParam0, 257258026);
	}
}

void func_583(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (Local_2026.f_10 != -409129282)
	{
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 2) || aggregate.net_camp.func_517(iParam0, &Local_17, 16))
	{
		func_937(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iParam0 /*5*/])))
	{
		func_937(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iParam0 /*5*/]));
	iVar3 = func_854(iVar0, &iVar1, &iVar2);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && !aggregate.net_coach_holdup.func_695(iParam0, 255))
	{
		if ((((iVar3 != 1 || ENTITY::IS_ENTITY_DEAD(iVar1)) || !NETWORK::_0xB07D3185E11657A5(iVar1)) || !PED::IS_PED_IN_ANY_VEHICLE(iVar1, true)) || !func_114(PED::GET_VEHICLE_PED_IS_IN(iVar1, true), &Local_17, &uVar4))
		{
			aggregate.net_coach_holdup.func_857(iParam0);
		}
	}
	if (Local_17.f_257[iParam0 /*5*/])->f_3 == PLAYER::PLAYER_ID()
	{
		if ((aggregate.net_camp.func_517(iParam0, &Local_17, 256) && aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32)) || (aggregate.net_camp.func_517(iParam0, &Local_17, 512) && aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64)))
		{
			iVar2 = PLAYER::PLAYER_ID();
		}
	}
	if (iVar2 != PLAYER::PLAYER_ID())
	{
		func_937(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		aggregate.net_coach_holdup.func_851(iParam0);
		return;
	}
	func_942(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, Global_35))
	{
		aggregate.net_coach_holdup.func_857(iParam0);
	}
	else
	{
		aggregate.net_coach_holdup.func_851(iParam0);
	}
	if ((aggregate.fme_animal_tagging.func_134(1) && !aggregate.net_coach_holdup.func_695(iParam0, 255)) && func_855(&Local_2026, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64)))
	{
		aggregate.net_coach_holdup.func_857(iParam0);
	}
	else
	{
		aggregate.net_coach_holdup.func_851(iParam0);
	}
}

bool func_584(int iParam0, bool bParam1)
{
	if (aggregate.fme_escaped_convicts.func_738(iParam0, 16))
	{
		if (bParam1)
		{
			return false;
		}
		return aggregate.fme_escaped_convicts.func_738(iParam0, 32);
	}
	if (bParam1)
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		if (!aggregate.fishing_core.func_34(&Local_17, 268435456) || aggregate.fme_animal_tagging.func_563(PLAYER::PLAYER_ID(), 1, 1))
		{
			return false;
		}
	}
	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 8388608) && !aggregate.net_coach_holdup.func_695(iParam0, 255))
	{
		return false;
	}
	return true;
}

bool func_586(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, var uParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				if (func_947(uParam0, bParam1, bParam2, bParam3, fParam4, uParam5, iVar0))
				{
					return true;
				}
				break;
		}
		iVar0++;
	}
	return false;
}

bool func_587(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_2[iVar0])) && BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(&(uParam0->f_2[iVar0]), false, false)) < fParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1231609204;
		case 2:
			return -2071073626;
		case 4:
			return -137751918;
		case 8:
			return -1416703903;
		case 16:
			return 758533472;
		default:
			break;
	}
	return 0;
}

bool func_598(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1070355->f_21185.f_1 || Global_1070355->f_21185.f_1 == 0) || iParam1 > Global_1070355->f_21185) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::_COPY_MEMORY(&(Global_1070355->f_21185), &uVar1, 2);
		}
		else
		{
			Global_1070355->f_21185.f_1 = iVar0;
			Global_1070355->f_21185 = iParam1;
		}
		if (AUDIO::_0x05D6195FB4D428F4(iParam0))
		{
		}
		return true;
	}
	return false;
}

int func_600(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2026.f_540), iVar1))
		{
			if (!bParam0 || MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_4), iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_601(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_2), iVar1))
		{
			if (!bParam0 || MISC::_0x8F4F050054005C27(&(Local_2026.f_540.f_6), iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_603(int iParam0)
{
	(Local_361[Local_2026.f_634 /*52*/])->f_41 = iParam0;
}

void func_606(int iParam0)
{
	if (func_258(2, 255))
	{
		return;
	}
	Local_2026.f_537 = func_496(iParam0);
	if (func_955(iParam0))
	{
		func_262(1);
		NETWORK::_0x007FF852DCF49DA4(func_499());
	}
	func_262(2);
}

void func_607(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_258(4, 255))
	{
		return;
	}
	if (func_258(1, 255))
	{
		if (!func_956())
		{
			return;
		}
	}
	if (!aggregate.nb_animal_attack.func_161(2))
	{
		return;
	}
	if (func_258(1, 255))
	{
		bVar0 = func_957();
		bVar1 = func_958(iParam0);
		func_262(16);
		if (!func_741(16, 1))
		{
			return;
		}
		else if (!bVar1)
		{
			return;
		}
		else if (!bVar0)
		{
			return;
		}
		else if (CAM::_0xA2B1C7EF759A63CE() < 1f)
		{
			return;
		}
		func_959(iParam0);
		func_960();
	}
	func_262(4);
}

void func_608()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	if (!func_258(1024, 255))
	{
		return;
	}
	func_262(2048);
	sVar0 = func_227();
	sVar1 = func_961();
	sVar2 = func_962(Local_2026.f_537.f_2);
	CAM::_0x02389579A53C3276(sVar0, sVar1, sVar2, -1);
}

bool func_609(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (((func_293(&Local_2026, &Var0) && func_313(&Var0, 556233122, iParam0, 0)) && func_313(&Var0, -110495140, iParam1, 0)) && aggregate.fme_condor_egg.func_42(Var0, 408107890, &uVar5, 0))
	{
		return uVar5;
	}
	return false;
}

void func_610(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if ((!func_293(&Local_2026, &Var0) || !func_313(&Var0, 556233122, iParam0, 0)) || !func_313(&Var0, -110495140, iParam1, 0))
	{
		return;
	}
	iVar5 = func_497(iParam0, iParam1);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		if (MISC::_0x8F4F050054005C27(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_2), iVar6))
		{
		}
		else if (!func_963(Var0, iVar6))
		{
		}
		else
		{
			MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_2), iVar6);
		}
		iVar6++;
	}
}

void func_611()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	if (!func_258(2048, 255))
	{
		return;
	}
	func_495(2048);
	sVar0 = func_227();
	sVar1 = func_961();
	sVar2 = func_962(Local_2026.f_537.f_2);
	CAM::_0x6D4D25C2137FF511(sVar0, sVar1, sVar2);
}

void func_612(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	float fVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;

	func_964(iParam0, iParam1);
	if (func_258(1024, 255))
	{
		return;
	}
	if (((!func_293(&Local_2026, &Var0) || !func_313(&Var0, 556233122, iParam0, 0)) || !func_313(&Var0, -110495140, iParam1, 0)) || !func_313(&Var0, -556151360, 0, 0))
	{
		return;
	}
	fVar17 = CAM::GET_GAMEPLAY_CAM_FOV();
	aggregate.fme_animal_tagging.func_143(Var0, 644136394, &vVar5, 0);
	aggregate.fme_condor_egg.func_42(Var0, 1013307464, &bVar18, 0);
	bVar19 = aggregate.fme_animal_tagging.func_143(Var0, -2119193689, &vVar8, 0);
	bVar20 = aggregate.fme_animal_tagging.func_142(Var0, -542873544, &fVar17, 0);
	iVar21 = PLAYER::PLAYER_PED_ID();
	if (bVar18 && ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		vVar5 = { aggregate.fm_deathmatch_controller.func_3090(vVar5, CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING()) };
		vVar5 = { vVar5 + CAM::GET_GAMEPLAY_CAM_COORD() };
		vVar8 = { vVar8 + CAM::GET_GAMEPLAY_CAM_ROT(2) };
		bVar19 = true;
	}
	if (!CAM::DOES_CAM_EXIST(Local_2026.f_559))
	{
		if (aggregate.annesburg.func_121(vVar5))
		{
			return;
		}
		Local_2026.f_559 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar5, vVar8, fVar17, false, 2);
	}
	else
	{
		if (!aggregate.annesburg.func_121(vVar5))
		{
			CAM::SET_CAM_COORD(Local_2026.f_559, vVar5);
		}
		if (bVar19)
		{
			CAM::SET_CAM_ROT(Local_2026.f_559, vVar8, 2);
		}
		if (bVar20)
		{
			CAM::SET_CAM_FOV(Local_2026.f_559, fVar17);
		}
	}
	if (aggregate.fme_condor_egg.func_42(Var0, 1234220482, &bVar22, 0) && bVar22)
	{
		return;
	}
	bVar23 = aggregate.fme_animal_tagging.func_143(Var0, -1852046395, &vVar11, 0);
	bVar24 = aggregate.fme_animal_tagging.func_143(Var0, -600916972, &vVar14, 0);
	if (bVar18 && ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		vVar11 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), (ENTITY::GET_ENTITY_HEADING(iVar21) + CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING()), vVar11) };
		vVar14 = { vVar14 + CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (!bVar23 || aggregate.annesburg.func_121(vVar11))
	{
		vVar11 = { vVar5 };
	}
	if (!bVar24)
	{
		vVar14 = { vVar8 };
	}
	if (!CAM::DOES_CAM_EXIST(Local_2026.f_560))
	{
		Local_2026.f_560 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar11, vVar14, fVar17, false, 2);
		return;
	}
	else
	{
		CAM::SET_CAM_COORD(Local_2026.f_560, vVar11);
		CAM::SET_CAM_ROT(Local_2026.f_560, vVar14, 2);
		if (bVar20)
		{
			CAM::SET_CAM_FOV(Local_2026.f_560, fVar17);
		}
	}
}

void func_613(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<5> Var3;
	var uVar8;
	var uVar11;

	if (func_258(1024, 255))
	{
		func_608();
		return;
	}
	iVar2 = 2000;
	if (((func_293(&Local_2026, &Var3) && func_313(&Var3, 556233122, iParam0, 0)) && func_313(&Var3, -110495140, iParam1, 0)) && func_313(&Var3, -556151360, 0, 0))
	{
		aggregate.fme_supply_train.func_39(Var3, -1318702711, &iVar2, 0);
		if (aggregate.fme_condor_egg.func_42(Var3, 1234220482, &bVar0, 0) && bVar0)
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, false, 0);
		}
		else if (aggregate.fme_condor_egg.func_42(Var3, -19593823, &bVar1, 0) && bVar1)
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, true, iVar2, true, false, 0);
		}
		else if (aggregate.fme_animal_tagging.func_143(Var3, -1852046395, &uVar8, 0) || aggregate.fme_animal_tagging.func_143(Var3, -1852046395, &uVar11, 0))
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_2026.f_560, Local_2026.f_559, iVar2, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else
		{
			CAM::SET_CAM_ACTIVE(Local_2026.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		aggregate.fme_animal_tagging.func_174(8);
	}
}

void func_614()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if ((((ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_RAGDOLL(Global_35)) || PED::IS_PED_INJURED(Global_35)) || PED::_0x3BDFCF25B58B0415(Global_35)) || PED::_0x3AA24CCC0D451379(Global_35))
	{
		return;
	}
	if (Local_17.f_328 != -1)
	{
		if (Local_2026.f_10 == -19759302)
		{
			if (func_438(Local_17.f_328, &iVar3, 0, 0))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
			}
		}
		else if (Local_2026.f_10 == -409129282)
		{
			if (func_81(Local_17.f_328, &iVar4))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
		}
	}
	iVar5 = 0;
	while (iVar5 < 20)
	{
		if ((Local_17.f_16[iVar5 /*12*/])->f_2 != 1566032419 || (Local_17.f_16[iVar5 /*12*/])->f_3 != 33)
		{
		}
		else if (func_438(iVar5, &iVar6, 1, 0))
		{
		}
		else
		{
			iVar5++;
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar7);
	if (!aggregate.annesburg.func_121(vVar0))
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		}
		if (BUILTIN::VDIST(Global_36, vVar0) < 2.5f)
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(0, vVar0, 6, 1, 2.5f, -1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar6, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	}
	else if (!aggregate.annesburg.func_121(vVar0))
	{
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, 0);
	}
	aggregate.fme_condor_egg.func_1296(Global_35, &iVar7, 0, 0, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		func_909(&Global_35, 6000, iVar6, 1, 0, 0, 0, 1);
	}
}

void func_615()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		(Local_361[Local_2026.f_634 /*52*/])->f_41.f_2[iVar0] = 0;
		iVar0++;
	}
}

int func_616(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if ((((func_293(&Local_2026, &Var1) && func_313(&Var1, 556233122, iParam0, 0)) && func_313(&Var1, -110495140, iParam1, 0)) && func_313(&Var1, -556151360, 0, 0)) && aggregate.fme_supply_train.func_39(Var1, -1318702711, &uVar0, 0))
	{
		return uVar0;
	}
	return 2000;
}

void func_617(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (func_258(1024, 255))
	{
		func_608();
	}
	if (((!func_293(&Local_2026, &Var0) || !func_313(&Var0, 556233122, iParam0, 0)) || !func_313(&Var0, -110495140, iParam1, 0)) || !func_313(&Var0, -556151360, 0, 0))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_40(Var0, -1355034, &uVar5, 0);
	iVar6 = uVar5;
	if (!aggregate.fme_supply_train.func_39(Var0, -1476590111, &iVar7, 0))
	{
		iVar7 = 1000;
	}
	if (!func_258(1024, 255))
	{
		if ((aggregate.fme_animal_tagging.func_134(8) && aggregate.fme_condor_egg.func_42(Var0, 1234220482, &bVar8, 0)) && bVar8)
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, iParam2, true, false, 0);
			aggregate.fme_animal_tagging.func_174(8);
		}
	}
	switch (iVar6)
	{
		case -1232371728:
			func_88(0, iVar7);
			break;
		case -1303284479:
			if (iParam3 < aggregate.doc_book.func_255((iParam2 - iVar7 + 150), 0))
			{
				return;
			}
			func_88(1, iVar7);
			break;
	}
}

void func_618(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;

	if ((!func_293(&Local_2026, &Var0) || !func_313(&Var0, 556233122, iParam0, 0)) || !func_313(&Var0, -110495140, iParam1, 0))
	{
		return;
	}
	if (aggregate.fme_condor_egg.func_42(Var0, -333727878, &uVar5, 0))
	{
		func_967(iParam0);
	}
	iVar6 = func_497(iParam0, iParam1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		if (MISC::_0x8F4F050054005C27(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_2), iVar7))
		{
		}
		else if (!func_968(Var0, iVar7))
		{
		}
		else
		{
			MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_41.f_2), iVar7);
		}
		iVar7++;
	}
}

void func_620(int iParam0, var uParam1, var uParam2, float fParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	if (!func_970(iParam0, uParam1, uParam2, fParam3, &bVar0, &bVar1, &bVar2))
	{
		func_240(iParam0);
		return;
	}
	iVar3 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	bVar4 = MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iParam0]));
	if (bVar0 && !bVar4)
	{
		return;
	}
	func_971(iParam0, uParam1, uParam2, fParam3);
	if (!bVar4)
	{
		return;
	}
	iVar6 = PLAYER::PLAYER_ID();
	switch ((Local_17.f_16[iParam0 /*12*/])->f_2)
	{
		case 401658241:
		case 1566032419:
			func_972(iParam0, bVar0);
			break;
		case 1095997463:
			func_973(iParam0, bVar2);
			func_974(iParam0, !aggregate.fme_animal_tagging.func_134(1));
			iVar5 = 255;
			if (aggregate.fme_challenges.func_1307(iParam0, 1024))
			{
				func_975(iParam0);
			}
			else if (aggregate.net_coach_holdup.func_695(iParam0, 255))
			{
				func_977(iParam0);
				iVar5 = iVar6;
				bVar7 = false;
			}
			else if (func_978((Local_17.f_16[iParam0 /*12*/])->f_7, iVar3, &bVar7, &iVar5) && iVar5 != iVar6)
			{
				func_977(iParam0);
			}
			else if (bVar7)
			{
				func_975(iParam0);
			}
			else
			{
				func_979(iParam0);
			}
			if (iVar5 == iVar6)
			{
				iVar5 = 255;
			}
			func_980(iParam0, iVar5);
			break;
		default:
			func_981(iParam0, bVar1, aggregate.fme_animal_tagging.func_134(1));
			func_982(iParam0, aggregate.fme_animal_tagging.func_134(1));
			break;
	}
}

void func_621(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (!func_983(iParam0, uParam1, uParam2, fParam3))
	{
		func_241(iParam0);
		return;
	}
	func_984(iParam0, uParam1, uParam2, fParam3);
	if (!MAP::DOES_BLIP_EXIST(&(fParam3->f_202.f_21[iParam0])))
	{
		return;
	}
	MAP::_0x662D364ABF16DE2F(&(fParam3->f_202.f_21[iParam0]), -521680853);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(fParam3->f_202.f_21[iParam0]), func_985());
}

void func_622(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (!func_986(iParam0, uParam1, uParam2, fParam3))
	{
		func_242(iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(uParam1->f_257[iParam0 /*5*/]));
	func_987(iParam0, iVar0);
	if (!MAP::DOES_BLIP_EXIST(&(fParam3->f_202.f_25[iParam0])))
	{
		return;
	}
	bVar1 = aggregate.fme_animal_tagging.func_134(1);
	if (bVar1 && aggregate.fme_escaped_convicts.func_738(iParam0, 8))
	{
		aggregate.fme_hot_property.func_964(iParam0, 8);
		MAP::SET_BLIP_SPRITE(&(Local_2026.f_202.f_25[iParam0]), 688589278 /* GXTEntry: "Cash Bag" */, false);
	}
	else if (!bVar1 && !aggregate.fme_escaped_convicts.func_738(iParam0, 8))
	{
		aggregate.fme_hot_property.func_964(iParam0, 8);
		MAP::SET_BLIP_SPRITE(&(Local_2026.f_202.f_25[iParam0]), func_988(2), false);
	}
	iVar4 = PLAYER::PLAYER_ID();
	if (aggregate.fme_escaped_convicts.func_738(iParam0, 8))
	{
		func_989(iParam0);
	}
	else if (func_990(iParam0, 255))
	{
		func_991(iParam0);
		iVar3 = iVar4;
		bVar2 = false;
	}
	else if (func_978((Local_17.f_257[iParam0 /*5*/])->f_3, iVar0, &bVar2, &iVar3) && iVar3 != iVar4)
	{
		func_991(iParam0);
	}
	else if (bVar2)
	{
		func_989(iParam0);
	}
	else
	{
		func_992(iParam0);
	}
	if (iVar3 == iVar4)
	{
		iVar3 = 255;
	}
	func_993(iParam0, iVar3);
}

bool func_623(var uParam0, var uParam1, float fParam2)
{
	if (!func_531())
	{
		return false;
	}
	if (!aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 32) && !aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 64))
	{
		return false;
	}
	switch (fParam2->f_202.f_60)
	{
		case 14:
		case 15:
		case 22:
		case 23:
		case 24:
		case 25:
		case 29:
		case 30:
		case 31:
			break;
		default:
			return false;
	}
	return true;
}

void func_624(var uParam0, float fParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = aggregate.fishing_core.func_34((*uParam0)[NETWORK::PARTICIPANT_ID_TO_INT() /*52*/], 64);
	if (bVar0)
	{
		iVar1 = fParam1->f_620;
	}
	else
	{
		iVar1 = fParam1->f_619;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iVar1))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(fParam1->f_202.f_51))
	{
		return;
	}
	fParam1->f_202.f_51 = MAP::_0xA6EF0C54A3443E70(408396114, iVar1);
	MAP::_0x662D364ABF16DE2F(fParam1->f_202.f_51, -1878373110);
	MAP::_0x662D364ABF16DE2F(fParam1->f_202.f_51, 231194138);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(fParam1->f_202.f_51, func_994());
}

void func_625(bool bParam0)
{
	int iVar0;
	int iVar1;

	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar1 = 20;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iVar0])))
				{
				}
				else if (bParam0)
				{
					MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iVar0]), 231194138);
				}
				else
				{
					MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iVar0]), 231194138);
				}
				iVar0++;
			}
			break;
		case -409129282:
			iVar1 = 4;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_25[iVar0])))
				{
				}
				else if (bParam0)
				{
					MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202.f_25[iVar0]), 231194138);
				}
				else
				{
					MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202.f_25[iVar0]), 231194138);
				}
				iVar0++;
			}
			break;
	}
}

bool func_626(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!aggregate.fme_animal_tagging.func_134(1) && !func_533(1))
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = iVar1;
	if (func_526(iVar2))
	{
		if (func_333(iVar2))
		{
			return true;
		}
		iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar3) && AITRANSPORT::_0xDC44F405A6B98D03(iVar3, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_627(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = iVar1;
	if (aggregate.fme_animal_tagging.func_134(1) && !_NAMESPACE26::_0x3F59FE6F37869576(iVar0, PLAYER::PLAYER_ID()))
	{
		if (aggregate.fishing_core.func_34(Local_361[iVar2 /*52*/], 64) || aggregate.fishing_core.func_34(Local_361[iVar2 /*52*/], 32))
		{
			return true;
		}
	}
	return false;
}

int func_628(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = aggregate.fishing_core.func_107(Local_2026.f_202.f_59);
	bVar1 = aggregate.fme_animal_tagging.func_199();
	iVar2 = func_252();
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (iVar4 == 0)
		{
		}
		else if (func_996(iVar4, iVar2, bVar1, bVar0, iParam0, iParam1))
		{
			return iVar4;
		}
		iVar3++;
	}
	return 0;
}

void func_629(int iParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;

	if (iParam0 == 0)
	{
		return;
	}
	aggregate.fme_escaped_convicts.func_736(&(Local_2026.f_202.f_58));
	bVar0 = func_997(iParam0);
	bVar1 = func_998(iParam0);
	iVar2 = func_999(iParam0);
	sVar3 = func_1000(iParam0, iParam1, sParam2);
	Local_2026.f_202.f_58 = sParam2;
	if (bVar1)
	{
		func_1001(Local_2026.f_561.f_54, sParam2);
	}
	else
	{
		func_1002(sVar3, iVar2, bVar0);
	}
	if (func_1003(iParam0, &iVar4))
	{
		aggregate.fme_animal_tagging.func_174(iVar4);
	}
}

int func_630(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	bVar0 = aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 64);
	if (!aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 32) && !bVar0)
	{
		return 0;
	}
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		return 0;
	}
	if (func_363(255) > 0)
	{
		return 0;
	}
	if (aggregate.fme_animal_tagging.func_134(2))
	{
		return 0;
	}
	if ((aggregate.fishing_core.func_34(uParam0, 1024) || aggregate.fishing_core.func_34(uParam0, 16384)) || func_201(uParam0, bParam2))
	{
		return 0;
	}
	switch (aggregate.camera_item.func_12(uParam0))
	{
		case 1:
			if (!aggregate.fishing_core.func_34((*uParam1)[Local_2026.f_634 /*52*/], 8))
			{
				return 1;
			}
			if (aggregate.fme_animal_tagging.func_134(256))
			{
				return 6;
			}
			return 3;
		case 2:
			if (aggregate.fme_animal_tagging.func_134(256))
			{
				return 6;
			}
			return 5;
		case 3:
			if (!func_1004(uParam0, bParam2, 1095997463))
			{
				return 8;
			}
			return 18;
		case 4:
			if (func_879(0))
			{
				if (func_855(&Local_2026, Global_36, bVar0))
				{
					return 29;
				}
				return 14;
			}
			if (!func_1005(uParam0, 1095997463, 65536, 131072))
			{
				return 0;
			}
			if (func_1006(&bVar1))
			{
				return 27;
			}
			else if (bVar1)
			{
				return 24;
			}
			if (func_1005(uParam0, 1095997463, 4, 524288))
			{
				if (!func_1004(uParam0, bParam2, 1095997463))
				{
					return 8;
				}
				return 10;
			}
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if ((Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463)
				{
				}
				else if ((aggregate.net_camp.func_517(iVar2, &Local_17, 32) || aggregate.net_camp.func_517(iVar2, &Local_17, 65536)) || aggregate.net_camp.func_517(iVar2, &Local_17, 131072))
				{
				}
				else
				{
					bVar5 = true;
					if (func_438(iVar2, &iVar3, 1, 1) && ENTITY::_0x61914209C36EFDDB(iVar3) == 7)
					{
						iVar4 = PED::_0xA033D7E4BBF9844D(iVar3);
						if (ENTITY::DOES_ENTITY_EXIST(iVar4) && iVar4 == PLAYER::_0xF49F14462F0AE27C(PLAYER::PLAYER_ID()))
						{
							return 9;
						}
					}
				}
				iVar2++;
			}
			if (bVar5)
			{
				return 12;
			}
			break;
		case 5:
			if (func_552())
			{
				if (func_855(&Local_2026, Global_36, bVar0))
				{
					if (func_554(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					return 31;
				}
				return 22;
			}
			if (func_1007())
			{
				return 0;
			}
			if (func_1008(&bVar1))
			{
				return 27;
			}
			else if (bVar1)
			{
				return 24;
			}
			if (bVar0)
			{
				if (func_416(uParam0, 32, 0))
				{
					return 24;
				}
			}
			else if (func_416(uParam0, 1, 0))
			{
				return 24;
			}
			if (func_415(uParam0, 64, 0))
			{
				return 18;
			}
			return 17;
	}
	return 0;
}

bool func_631(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (aggregate.camera_item.func_12(bParam1))
		{
			case -19759302:
				return true;
			case -409129282:
				return true;
			default:
				break;
		}
	}
	else if (bParam2)
	{
		switch (aggregate.camera_item.func_12(bParam1))
		{
			case -19759302:
				return uParam0->f_321 < 2;
			case -409129282:
				return uParam0->f_322 < 2;
			default:
				break;
		}
	}
	else
	{
		switch (aggregate.camera_item.func_12(bParam1))
		{
			case -19759302:
				return Local_2026.f_10.f_13 < 2;
			case -409129282:
				return Local_2026.f_10.f_14 < 2;
			default:
				break;
		}
	}
	return true;
}

bool func_632()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if ((Local_17.f_16[iVar2 /*12*/])->f_11 == -1)
				{
				}
				else if (bVar1 && iVar0 == (Local_17.f_16[iVar2 /*12*/])->f_11)
				{
				}
				else if (!aggregate.net_camp.func_517(iVar2, &Local_17, 1024))
				{
				}
				else if (!bVar1)
				{
					bVar1 = true;
					iVar0 = (Local_17.f_16[iVar2 /*12*/])->f_11;
				}
				else
				{
					return true;
				}
				iVar2++;
			}
			break;
		case -409129282:
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if ((Local_17.f_257[iVar3 /*5*/])->f_2 == -1)
				{
				}
				else if (bVar1 && iVar0 == (Local_17.f_257[iVar3 /*5*/])->f_2)
				{
				}
				else if (!aggregate.net_camp.func_517(iVar3, &Local_17, 8))
				{
				}
				else if (!bVar1)
				{
					bVar1 = true;
					iVar0 = (Local_17.f_257[iVar3 /*5*/])->f_2;
				}
				else
				{
					return true;
				}
				iVar3++;
			}
			break;
	}
	return false;
}

void func_633(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar3 = PLAYER::PLAYER_ID();
	*iParam2 = 255;
	*iParam3 = 0;
	*bParam0 = 0;
	*bParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if ((Local_17.f_16[iVar0 /*12*/])->f_7 == 255)
		{
		}
		else if ((aggregate.net_camp.func_517(iVar0, &Local_17, 32) || aggregate.net_camp.func_517(iVar0, &Local_17, 65536)) || aggregate.net_camp.func_517(iVar0, &Local_17, 131072))
		{
		}
		else if (!func_1009((Local_17.f_16[iVar0 /*12*/])->f_7, &uVar1))
		{
		}
		else if (_NAMESPACE26::_0x3F59FE6F37869576((Local_17.f_16[iVar0 /*12*/])->f_7, iVar3))
		{
		}
		else
		{
			if (iVar2 == 0)
			{
				*iParam2 = (Local_17.f_16[iVar0 /*12*/])->f_7;
				*iParam3 = _NAMESPACE26::_0x901E0DC25080C8B9(*iParam2);
			}
			else if (_NAMESPACE26::_0x901E0DC25080C8B9((Local_17.f_16[iVar0 /*12*/])->f_7) != *iParam3)
			{
				*bParam1 = 1;
				return;
			}
			iVar2++;
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(*iParam3) || !_NAMESPACE26::_0x0F99F6436528A089(*iParam3)) || _NAMESPACE26::_0x149A2751AB66AC02(*iParam3) == 1)
		{
			*bParam0 = 1;
		}
	}
}

void func_634(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar3 = PLAYER::PLAYER_ID();
	*iParam2 = 255;
	*iParam3 = 0;
	*bParam0 = 0;
	*bParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((((!aggregate.net_camp.func_517(iVar0, &Local_17, 128) || aggregate.net_camp.func_517(iVar0, &Local_17, 2)) || aggregate.net_camp.func_517(iVar0, &Local_17, 16)) || aggregate.net_camp.func_517(iVar0, &Local_17, 256)) || aggregate.net_camp.func_517(iVar0, &Local_17, 512))
		{
		}
		else if ((Local_17.f_257[iVar0 /*5*/])->f_3 == 255)
		{
		}
		else if (!func_1009((Local_17.f_257[iVar0 /*5*/])->f_3, &uVar1))
		{
		}
		else if (_NAMESPACE26::_0x3F59FE6F37869576((Local_17.f_257[iVar0 /*5*/])->f_3, iVar3))
		{
		}
		else
		{
			if (iVar2 == 0)
			{
				*iParam2 = (Local_17.f_257[iVar0 /*5*/])->f_3;
				*iParam3 = _NAMESPACE26::_0x901E0DC25080C8B9(*iParam2);
			}
			else if (_NAMESPACE26::_0x901E0DC25080C8B9((Local_17.f_257[iVar0 /*5*/])->f_3) != *iParam3)
			{
				*bParam1 = 1;
				return;
			}
			iVar2++;
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(*iParam3) || !_NAMESPACE26::_0x0F99F6436528A089(*iParam3)) || _NAMESPACE26::_0x149A2751AB66AC02(*iParam3) == 1)
		{
			*bParam0 = 1;
		}
	}
}

int func_635(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam0 != Local_2026.f_202.f_60)
	{
		return 0;
	}
	if ((bParam1 && aggregate.fme_animal_tagging.func_134(2097152)) && Local_2026.f_202.f_53 == iParam2)
	{
		return 0;
	}
	if ((!bParam1 && aggregate.fme_animal_tagging.func_134(4194304)) && Local_2026.f_202.f_54 == iParam3)
	{
		return 0;
	}
	if (((!aggregate.fme_animal_tagging.func_134(2097152) && !aggregate.fme_animal_tagging.func_134(4194304)) && iParam2 == 255) && iParam3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_636(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;

	if (iParam0 == 0)
	{
		func_246(fParam1);
		return;
	}
	if (((aggregate.aberdeenpigfarm.func_165(fParam1->f_202.f_56) && aggregate.fishing_core.func_107(fParam1->f_202.f_56)) && fParam1->f_202.f_60 == iParam0) && !bParam2)
	{
		return;
	}
	iVar0 = 255;
	iVar1 = 0;
	switch (iParam0)
	{
		case 8:
			sVar3 = func_1010(0);
			break;
		case 9:
			sVar3 = func_1010(1);
			break;
		case 1:
			sVar3 = func_1011(1);
			break;
		case 2:
			sVar3 = func_1011(0);
			break;
		case 3:
			sVar3 = func_1012(1);
			break;
		case 4:
			sVar3 = func_1012(0);
			break;
		case 5:
			sVar3 = func_1013(1);
			break;
		case 7:
			sVar3 = func_1014();
			break;
		case 10:
			sVar3 = func_1015(0);
			break;
		case 11:
			sVar3 = func_1015(1);
			break;
		case 12:
			sVar3 = func_1016(0, 0);
			break;
		case 13:
			sVar3 = func_1016(1, 0);
			break;
		case 16:
			sVar3 = func_1017(0);
			break;
		case 17:
			sVar3 = func_1017(1);
			break;
		case 20:
			sVar3 = func_1018(0, 0);
			break;
		case 21:
			sVar3 = func_1018(1, 0);
			break;
		case 26:
			sVar3 = func_1019(fParam1, 1, &iVar0, &iVar1, &bVar2);
			break;
		case 27:
			sVar3 = func_1019(fParam1, 0, &iVar0, &iVar1, &bVar2);
			break;
		case 28:
			sVar3 = func_1020();
			break;
		case 25:
			sVar3 = func_1021(fParam1, 1);
			break;
		case 24:
			sVar3 = func_1021(fParam1, 0);
			break;
		case 22:
			sVar3 = func_1018(0, 1);
			break;
		case 23:
			sVar3 = func_1018(1, 1);
			break;
		case 15:
			sVar3 = func_1016(1, 1);
			break;
		case 14:
			sVar3 = func_1016(1, 1);
			break;
		case 18:
			sVar3 = func_1022(1);
			break;
		case 19:
			sVar3 = func_1022(0);
			break;
		case 29:
			sVar3 = func_1023();
			break;
		case 30:
			sVar3 = func_1024(1);
			break;
		case 31:
			sVar3 = func_1024(0);
			break;
		case 6:
			sVar3 = func_1013(1);
			break;
		default:
			return;
	}
	if (iVar0 != 255 && bVar2)
	{
		aggregate.fme_animal_tagging.func_174(2097152);
		aggregate.fme_animal_tagging.func_174(4194304);
		Local_2026.f_202.f_53 = iVar0;
		Local_2026.f_202.f_54 = 0;
	}
	else if (iVar1 != 0 && !bVar2)
	{
		aggregate.fme_animal_tagging.func_174(4194304);
		aggregate.fme_animal_tagging.func_174(2097152);
		Local_2026.f_202.f_53 = 255;
		Local_2026.f_202.f_54 = iVar1;
	}
	else
	{
		aggregate.fme_animal_tagging.func_174(2097152);
		aggregate.fme_animal_tagging.func_174(4194304);
	}
	fParam1->f_202.f_56 = aggregate.fme_animal_tagging.func_684(sVar3, -1, 0, 0, 1);
	fParam1->f_202.f_60 = iParam0;
}

bool func_637()
{
	if (!func_531())
	{
		return false;
	}
	if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(4))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		return false;
	}
	if (CAM::_0xA2B1C7EF759A63CE() > 0f && !CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	return true;
}

void func_638()
{
	bool bVar0;

	bVar0 = func_631(&Local_17, &Local_2026, 0, 0);
	Local_2026.f_202.f_57 = func_1028(func_1026(), func_1027(bVar0));
}

bool func_639()
{
	if (aggregate.fme_animal_tagging.func_134(2))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 8388608))
	{
		return true;
	}
	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		return false;
	}
	if (!aggregate.fishing_core.func_34(&Local_17, 524288) && !aggregate.fme_animal_tagging.func_134(134217728))
	{
		return false;
	}
	if (func_362())
	{
		return false;
	}
	if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 2097152))
	{
		return false;
	}
	return true;
}

void func_640()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	func_209(&iVar0, &iVar1);
	bVar2 = func_631(&Local_17, &Local_2026, 0, 0);
	bVar3 = !aggregate.fme_animal_tagging.func_134(8192);
	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 8388608))
	{
		aggregate.net_coach_holdup.func_1032(aggregate.fme_king_of_the_rails.func_709(func_1029(0)), aggregate.fme_king_of_the_rails.func_709(func_1026()), aggregate.fme_king_of_the_rails.func_709(func_1031(bVar2)), 0);
	}
	else
	{
		Local_2026.f_202.f_57 = func_1033(func_1026(), func_1031(bVar2), iVar0, iVar1, bVar3);
	}
}

int func_641(float fParam0)
{
	switch (fParam0->f_10)
	{
		case -409129282:
			return 688589278 /* GXTEntry: "Cash Bag" */;
		case -19759302:
		default:
			break;
	}
	return -1103135225;
}

int func_648(var uParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = (3.5f * 2f);
	iVar4 = -1;
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if ((uParam0->f_16[iVar3 /*12*/])->f_2 != 1095997463)
		{
		}
		else if ((uParam0->f_16[iVar3 /*12*/])->f_3 != 22)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar3 /*12*/])))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_PED(&(uParam0->f_16[iVar3 /*12*/]));
			fVar0 = aggregate.dynamic_craft_scenario.func_370(iVar2, PLAYER::PLAYER_PED_ID(), 1, 1);
			if (fVar0 > fVar1)
			{
			}
			else
			{
				fVar1 = fVar0;
				iVar4 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar4;
}

bool func_649(bool bParam0)
{
	if (!func_531())
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(2))
	{
		return false;
	}
	if (func_363(255) > 0)
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(4) || aggregate.fishing_core.func_107(Local_2026.f_202.f_57))
	{
		return false;
	}
	*bParam0 = 0;
	if (Local_17.f_2 > 2)
	{
		*bParam0 = 1;
	}
	return true;
}

void func_650(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	iVar4 = PLAYER::PLAYER_ID();
	switch (fParam2->f_10)
	{
		case -409129282:
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (!aggregate.net_camp.func_517(iVar2, &Local_17, 128))
				{
				}
				else
				{
					if (func_424(iVar2, 0))
					{
						if (func_424(iVar2, 1))
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (aggregate.net_camp.func_517(iVar2, &Local_17, 2))
					{
						if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar4) == (Local_17.f_257[iVar2 /*5*/])->f_4)
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (aggregate.net_camp.func_517(iVar2, uParam0, 16) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar2 /*5*/])))
					{
						iVar3 = 2;
					}
					else if (func_990(iVar2, 255))
					{
						iVar3 = 5;
					}
					else if ((NETWORK::_0x255A5EF65EDA9167((Local_17.f_257[iVar2 /*5*/])->f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_257[iVar2 /*5*/])->f_3)) && (Local_17.f_257[iVar2 /*5*/])->f_3 != iVar4)
					{
						if (_NAMESPACE26::_0x3F59FE6F37869576((Local_17.f_257[iVar2 /*5*/])->f_3, iVar4))
						{
							iVar3 = 5;
						}
						else
						{
							iVar3 = 6;
						}
					}
					else
					{
						iVar3 = 1;
					}
					aggregate.fme_round_up.func_689(&(fParam2->f_202.f_77), iVar3, iVar0);
					iVar0++;
				}
				iVar2++;
			}
			break;
		case -19759302:
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!aggregate.net_camp.func_517(iVar1, uParam0, 1024))
				{
				}
				else
				{
					if (func_424(iVar1, 0))
					{
						if (func_424(iVar1, 1))
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (aggregate.net_camp.func_517(iVar1, uParam0, 32))
					{
						if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar4) == (Local_17.f_16[iVar1 /*12*/])->f_6)
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (aggregate.net_coach_holdup.func_695(iVar1, 255))
					{
						iVar3 = 5;
					}
					else if ((NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iVar1 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iVar1 /*12*/])->f_7)) && (Local_17.f_16[iVar1 /*12*/])->f_7 != iVar4)
					{
						if (_NAMESPACE26::_0x3F59FE6F37869576((Local_17.f_16[iVar1 /*12*/])->f_7, iVar4))
						{
							iVar3 = 5;
						}
						else
						{
							iVar3 = 6;
						}
					}
					else if ((uParam0->f_16[iVar1 /*12*/])->f_2 == -1088690539)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					aggregate.fme_round_up.func_689(&(fParam2->f_202.f_77), iVar3, iVar0);
					iVar0++;
				}
				iVar1++;
			}
			break;
	}
}

bool func_652(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_531())
	{
		return false;
	}
	if (func_363(255) > 0)
	{
		return false;
	}
	if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 128))
	{
		return false;
	}
	if (Local_2026.f_10 != -409129282)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(iVar0))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(iVar0) || PED::_0x0E99E3BF11BB6367(iVar0))
	{
		return false;
	}
	iVar2 = PLAYER::PLAYER_ID();
	if ((!PLAYER::_0x3EE1F7A8C32F24E1(iVar2, &iVar1, false, false) && !PLAYER::GET_PLAYER_TARGET_ENTITY(iVar2, &iVar1)) && !PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(iVar2, &iVar1))
	{
		return false;
	}
	if (aggregate.dynamic_craft_scenario.func_370(iVar1, iVar0, 1, 1) > 3.5f)
	{
		return false;
	}
	if (!func_118(iVar1, &Local_17, &iVar3))
	{
		return false;
	}
	if (iVar3 == -1)
	{
		return false;
	}
	if ((Local_17.f_16[iVar3 /*12*/])->f_2 != 1095997463)
	{
		return false;
	}
	if ((Local_17.f_16[iVar3 /*12*/])->f_3 != 22)
	{
		return false;
	}
	if (aggregate.net_camp.func_517(iVar3, &Local_17, 2))
	{
		return false;
	}
	if ((Local_17.f_16[iVar3 /*12*/])->f_7 != 255 && (Local_17.f_16[iVar3 /*12*/])->f_7 != iVar2)
	{
		return false;
	}
	*iParam0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (PED::IS_PED_RAGDOLL(*iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(*iParam0))
	{
		return false;
	}
	if (PED::_0x3AA24CCC0D451379(*iParam0))
	{
		return false;
	}
	if (PED::_0x3BDFCF25B58B0415(*iParam0))
	{
		return false;
	}
	if (!func_914(*iParam0))
	{
		return false;
	}
	return true;
}

void func_655(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && (!aggregate.annesburg.func_217(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1)))
	{
		return;
	}
	iVar0 = aggregate.annesburg.func_253(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	if (iParam3 == 1)
	{
		aggregate.binoculars.func_25(iParam0, 18, 0, 1);
		aggregate.binoculars.func_25(iParam0, 17, 0, 1);
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1949749)[iVar0 /*23*/])->f_3, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), iParam2);
}

char* func_656()
{
	return "NET_CHU_UC_TAKE_MONEY";
}

bool func_658()
{
	if (!aggregate.aberdeenpigfarm.func_165(Local_2026.f_202.f_55))
	{
		return false;
	}
	if (!aggregate.fishing_core.func_107(Local_2026.f_202.f_55))
	{
		return false;
	}
	return true;
}

char* func_659()
{
	switch (aggregate.camera_item.func_12(&Local_2026))
	{
		case -19759302:
			return "NET_CHU_UPDATE_VIP_KILLED";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_KILLED";
}

void func_660(char* sParam0, int iParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	Local_2026.f_202.f_55 = aggregate.fme_animal_tagging.func_734(sParam0, joaat("COLOR_WHITE"), -2, iParam1, iParam2, 0, 1);
}

char* func_661()
{
	switch (aggregate.camera_item.func_12(&Local_2026))
	{
		case -19759302:
			return "NET_CHU_UPDATE_VIP_KNOCKEDOUT";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_KNOCKEDOUT";
}

char* func_662()
{
	switch (aggregate.camera_item.func_12(&Local_2026))
	{
		case -19759302:
			return "NET_CHU_UPDATE_VIP_ESCAPED";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_ESCAPED";
}

char* func_663()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			if (Local_2026.f_202.f_52 == PLAYER::PLAYER_ID())
			{
				return "NET_CHU_UPDATE_VIP_RETURNED_YOU";
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_VIP_RETURNED", Local_2026.f_202.f_52);
		case -409129282:
			if (Local_2026.f_202.f_52 == PLAYER::PLAYER_ID())
			{
				return "NET_CHU_UPDATE_BAG_RETURNED_YOU";
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_BAG_RETURNED", Local_2026.f_202.f_52);
		default:
			break;
	}
	return "";
}

char* func_664()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_VIP_PVP_STOLEN", Local_2026.f_202.f_52);
		case -409129282:
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_UPDATE_BAG_PVP_STOLEN", Local_2026.f_202.f_52);
		default:
			break;
	}
	return "";
}

char* func_665()
{
	bool bVar0;

	bVar0 = !func_631(&Local_17, &Local_2026, 1, 0);
	switch (aggregate.camera_item.func_12(&Local_2026))
	{
		case -19759302:
			if (bVar0)
			{
				return "NET_CHU_UPDATE_KIDNAP_PVP_ACTIVE_PLURAL";
			}
			else
			{
				return "NET_CHU_UPDATE_KIDNAP_PVP_ACTIVE";
			}
			break;
		case -409129282:
			if (bVar0)
			{
				return "NET_CHU_UPDATE_ROBBERY_PVP_ACTIVE_PLURAL";
			}
			else
			{
				return "NET_CHU_UPDATE_ROBBERY_PVP_ACTIVE";
			}
			break;
	}
	return "";
}

char* func_668()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(Local_2026.f_202.f_52)))
	{
		bVar0 = true;
	}
	iVar1 = Local_2026.f_202.f_52;
	bVar2 = !func_631(&Local_17, &Local_2026, 1, 0);
	switch (Local_2026.f_10)
	{
		case -19759302:
			if (bVar0)
			{
				if (bVar2)
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_POSSE_JOIN_PLURAL", func_1051(iVar1, -5208416));
				}
				else
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_POSSE_JOIN", func_1051(iVar1, -5208416));
				}
			}
			else if (bVar2)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_PLAYER_JOIN_PLURAL", func_1051(iVar1, -5208416));
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_PLAYER_JOIN", func_1051(iVar1, -5208416));
			}
			break;
		case -409129282:
			if (bVar0)
			{
				if (bVar2)
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_POSSE_JOIN_PLURAL", func_1051(iVar1, -5208416));
				}
				else
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_POSSE_JOIN", func_1051(iVar1, -5208416));
				}
			}
			else if (bVar2)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_PLAYER_JOIN_PLURAL", func_1051(iVar1, -5208416));
			}
			else
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_PLAYER_JOIN", func_1051(iVar1, -5208416));
			}
			break;
	}
	return "";
}

int func_669(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (func_176(&Var0, iParam0) && aggregate.fme_animal_tagging.func_40(Var0, 1645569887, &iVar5, 0))
	{
		switch (iVar5)
		{
			case -198566504:
				return 0;
			case 1746896664:
				return 1;
			case 1390021295:
				return 4;
			case -656190934:
				return 5;
			case 520141149:
				return 7;
			default:
				break;
		}
	}
	return 1;
}

float func_674(var uParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_141(uParam0, &Var0, iParam1))
	{
		aggregate.fme_animal_tagging.func_142(Var0, 1922377121, &fVar5, 0);
	}
	return fVar5;
}

int func_675(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		aggregate.fme_animal_tagging.func_40(Var0, -1662733059, &iVar5, 0);
		switch (iVar5)
		{
			case 500518742:
				return -2;
			case -672771472:
				return -1;
			case -625377317:
				return 0;
			case -507863514:
				return 1;
			case -2129500879:
				return 2;
			case 1015571236:
				return 3;
			case 822436636:
				return 4;
			case 786089929:
				return 5;
			case 1129121707:
				return 6;
			case -534828465:
				return 7;
			case 510246373:
				return 8;
			default:
				break;
		}
	}
	return iVar5;
}

bool func_676()
{
	if (Local_2026.f_637 != 0)
	{
		if (aggregate.fme_animal_tagging.func_384(Local_2026.f_637) > 15000)
		{
			return true;
		}
		return false;
	}
	Local_2026.f_637 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return false;
}

bool func_677(int iParam0)
{
	switch (iParam0)
	{
		case -2133983324:
		case 280775267:
		case 1566032419:
			return false;
		default:
			break;
	}
	return true;
}

bool func_678(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2026, &Var0, iParam0) && aggregate.net_assassination.func_1057(Var0, -118004582, uParam1))
	{
		return true;
	}
	return false;
}

void func_680(int iParam0)
{
	int iVar0;

	if (!aggregate.net_camp.func_517(iParam0, &Local_17, 512) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_1))
	{
		iVar0 = NETWORK::NET_TO_PED((Local_17.f_16[iParam0 /*12*/])->f_1);
		func_1053(iVar0);
		aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 512);
	}
}

bool func_683(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 8388608))
	{
		return true;
	}
	iVar2 = -1;
	if (func_1056(iParam0, &iVar1) || func_1057(iParam0, &iVar2))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iVar0))
		{
			return false;
		}
		else
		{
			if (iVar1 != 0)
			{
				PED::_0x1902C4CFCC5BE57C(iVar0, iVar1);
			}
			else
			{
				PED::_SET_PED_OUTFIT_PRESET(iVar0, iVar2, 0);
			}
			PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 1, 1, false);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 8388608);
		}
	}
	return true;
}

bool func_684(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	bool bVar7;
	bool bVar8;

	iVar1 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 == 401658241)
	{
		bVar0 = func_1058();
		bVar0 = func_1059(iVar1, bVar0, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		return true;
	}
	if (!func_141(&Local_2026, &Var2, iParam0))
	{
		return true;
	}
	bVar7 = false;
	aggregate.fme_condor_egg.func_42(Var2, -900489166, &bVar7, 0);
	if (bVar7)
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
	}
	if (!aggregate.net_assassination.func_1057(Var2, 1325183772, &bVar0))
	{
		return true;
	}
	if (bVar0 == joaat("weapon_unarmed"))
	{
		return true;
	}
	if (bVar0 == 0)
	{
		return true;
	}
	if (!aggregate.binoculars.func_72(bVar0))
	{
		return true;
	}
	bVar8 = false;
	if ((uParam1->f_16[iParam0 /*12*/])->f_2 == 824585797 || aggregate.fme_challenges.func_1307(iParam0, 32768))
	{
		bVar8 = true;
	}
	func_1059(iVar1, bVar0, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	WEAPON::_0x4F806A6CFED89468(iVar1, 1);
	if (!bVar8)
	{
		WEAPON::_0x94A3C1B804D291EC(iVar1, 0, 0, 1, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iVar1, bVar0, false, 0, false, false);
	}
	return true;
}

bool func_685(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2026, &Var0, iParam0) && aggregate.net_assassination.func_109(Var0, -779153855, uParam1, 0))
	{
		return true;
	}
	return false;
}

float func_687(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (!func_141(uParam0, &Var0, iParam1) || !aggregate.fme_animal_tagging.func_142(Var0, 2039042927, &uVar5, 0))
	{
		return 0.25f;
	}
	return uVar5;
}

var func_688(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1))
	{
		aggregate.fme_animal_tagging.func_142(Var0, 1860996644, &uVar5, 0);
	}
	return uVar5;
}

bool func_690(var uParam0)
{
	struct<5> Var0;

	if (!func_448(&Var0))
	{
		return false;
	}
	if (!aggregate.fme_supply_train.func_39(Var0, 188462142, uParam0, 0))
	{
		return false;
	}
	*uParam0 = aggregate.fishing_core.func_224(*uParam0, 0, 100);
	return true;
}

bool func_691(var uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (func_141(uParam0, &Var0, iParam1) && aggregate.fme_supply_train.func_39(Var0, 188462142, iParam2, 0))
	{
		return true;
	}
	return false;
}

void func_692(int iParam0)
{
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	if ((WEAPON::_0x95CA12E2C68043E5(iParam0, 0) || WEAPON::_0x80BB243789008A82(iParam0, 0)) || WEAPON::_0x495A04CAEC263AF8(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, -289314967, -1f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
	else if (WEAPON::_0xABC18A28BAD4B46F(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, 1164657302, -1f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
	else if (WEAPON::_0x5B235F24472F2C3B(iParam0, 0) || WEAPON::_0xBFCA7AFABF9D7967(iParam0, 0))
	{
		PED::_0x8B1E8E35A6E814EA(iParam0, -68970303, -1f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
}

void func_694(int iParam0, int iParam1)
{
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 67108864))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_538(8, iParam1, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 67108864);
}

void func_696(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	uParam1->f_321 = (uParam1->f_321 - 1);
	if (bParam2)
	{
		uParam1->f_326++;
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 64);
		aggregate.fme_animal_tagging.func_1147(uParam1, 131072);
		iVar0 = 5;
		if (uParam1->f_321 == 0)
		{
			aggregate.fme_animal_tagging.func_1147(&Local_17, 33554432);
			Local_17.f_328 = iParam0;
		}
	}
	else
	{
		uParam1->f_325++;
		aggregate.fme_animal_tagging.func_1147(uParam1, 2048);
		iVar0 = 4;
		if (uParam1->f_321 == 0)
		{
			aggregate.fme_animal_tagging.func_1147(&Local_17, 16777216);
			Local_17.f_328 = iParam0;
		}
	}
	if (NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iParam0 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iParam0 /*12*/])->f_7))
	{
		(Local_17.f_16[iParam0 /*12*/])->f_6 = _NAMESPACE26::_0x901E0DC25080C8B9((Local_17.f_16[iParam0 /*12*/])->f_7);
	}
	func_538(iVar0, (Local_17.f_16[iParam0 /*12*/])->f_7, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	aggregate.net_coach_holdup.func_275(iParam0, uParam1, 32);
	aggregate.net_coach_holdup.func_275(iParam0, uParam1, 8);
	aggregate.net_coach_holdup.func_275(iParam0, uParam1, 16);
}

bool func_697(int iParam0)
{
	switch (iParam0)
	{
		case 1095997463:
			return true;
		default:
			break;
	}
	return false;
}

int func_698(int iParam0, var uParam1)
{
	return NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
}

void func_699(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar1 = func_1062(iParam0, uParam1);
	if (bVar1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 2;
	}
	if (func_438(iParam0, &iVar2, 0, 0))
	{
		iVar4 = 0;
		while (iVar4 < 20)
		{
			if (iVar4 == iParam0)
			{
			}
			else if ((Local_17.f_16[iVar4 /*12*/])->f_2 != 1095997463)
			{
			}
			else if ((Local_17.f_16[iVar4 /*12*/])->f_3 != 20 && (Local_17.f_16[iVar4 /*12*/])->f_3 != 22)
			{
			}
			else if (!func_438(iVar4, &iVar3, 1, 0))
			{
			}
			else if (aggregate.dynamic_craft_scenario.func_370(iVar2, iVar3, 1, 1) > 50f)
			{
			}
			else
			{
				if (!bVar1)
				{
					aggregate.net_coach_holdup.func_275(iVar4, &Local_17, 256);
				}
				aggregate.net_coach_holdup.func_275(iVar4, &Local_17, 16384);
			}
			iVar4++;
		}
	}
	func_538(iVar0, PLAYER::PLAYER_ID(), iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8));
}

void func_700(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (!aggregate.net_camp.func_517(iParam0, &Local_17, 1024))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
		{
			iVar0 = func_698(iParam0, uParam1);
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_KEEP_TASK(iVar0, bParam2);
				PED::SET_PED_CONFIG_FLAG(iVar0, 168, bParam3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam4);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	if ((((uParam1->f_16[iParam0 /*12*/])->f_2 == 1095997463 && !aggregate.net_camp.func_517(iParam0, uParam1, 2)) && !aggregate.net_camp.func_517(iParam0, uParam1, 32)) && uParam1->f_321 > 0)
	{
		uParam1->f_321 = (uParam1->f_321 - 1);
		(uParam1->f_16[iParam0 /*12*/])->f_7 = 255;
	}
	else if ((uParam1->f_16[iParam0 /*12*/])->f_2 != 1095997463)
	{
		(uParam1->f_16[iParam0 /*12*/])->f_7 = 255;
	}
	aggregate.net_coach_holdup.func_275(iParam0, uParam1, 8);
	aggregate.net_coach_holdup.func_275(iParam0, uParam1, 16);
	func_1063(iParam0, uParam1, -1088690539);
}

bool func_701(int iParam0)
{
	if ((Local_17.f_16[iParam0 /*12*/])->f_2 != -1088690539)
	{
		return false;
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 1024))
	{
		return false;
	}
	return true;
}

void func_702(int iParam0)
{
	(Local_17.f_16[iParam0 /*12*/])->f_11 = -1;
	(Local_17.f_16[iParam0 /*12*/])->f_3 = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_2 = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_4 = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_1 = 0;
	Local_17.f_16[iParam0 /*12*/] = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_5 = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_6 = 0;
	(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
	(Local_17.f_16[iParam0 /*12*/])->f_8 = { 0f, 0f, 0f };
}

void func_703(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (aggregate.net_coach_holdup.func_557(iParam0, uParam1) != 1095997463)
	{
		return;
	}
	if (aggregate.net_coach_holdup.func_865(iParam0, uParam1) != 22)
	{
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, uParam1, 2))
	{
		return;
	}
	if (!aggregate.net_camp.func_517(iParam0, uParam1, 1))
	{
		iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1064(), func_1065(), func_546(0), true, true);
		if (!ANIMSCENE::_0x25557E324489393C(iVar0))
		{
			return;
		}
		ANIMSCENE::LOAD_ANIM_SCENE(iVar0);
		(uParam1->f_16[iParam0 /*12*/])->f_5 = NETWORK::_0xE0D73CDDEA79DDCD(iVar0);
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 1);
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((uParam1->f_16[iParam0 /*12*/])->f_5))
	{
		return;
	}
	iVar0 = NETWORK::_0xD7F6781A0ABAF6FB((uParam1->f_16[iParam0 /*12*/])->f_5);
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 2);
		return;
	}
	if (ANIMSCENE::_0xF94692EB9DC15D74(iVar0, 0))
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 2);
		return;
	}
	if (ANIMSCENE::_0xD8254CB2C586412B(iVar0, 0))
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 2);
		return;
	}
}

void func_704(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = aggregate.net_coach_holdup.func_557(iParam0, uParam1);
	if (iVar0 == -1088690539)
	{
		return;
	}
	switch (iVar0)
	{
		case joaat("driver"):
			func_1066(iParam0, uParam1, uParam2, uParam3);
			break;
		case -193064196:
			func_1067(iParam0, uParam1, uParam2, uParam3);
			break;
		case -522830230:
			func_1068(iParam0, uParam1, uParam2, uParam3);
			break;
		case -306837416:
			func_1069(iParam0, uParam1, uParam2, uParam3);
			break;
		case 824585797:
			func_1070(iParam0, uParam1, uParam2, uParam3);
			break;
	}
}

void func_705(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (aggregate.camera_item.func_12(&Local_2026) != -19759302)
	{
		return;
	}
	if (!aggregate.net_camp.func_517(iParam0, &Local_17, 1024))
	{
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 32))
	{
		return;
	}
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 65536) || aggregate.net_camp.func_517(iParam0, &Local_17, 131072))
	{
		return;
	}
	if (func_1071(iParam0, &iVar3))
	{
		if (aggregate.fishing_core.func_34(Local_361[iVar3 /*52*/], 32))
		{
			iVar2 = 2;
		}
		else if (aggregate.fishing_core.func_34(Local_361[iVar3 /*52*/], 64))
		{
			iVar2 = 3;
		}
		else
		{
			iVar2 = 4;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
	}
	else
	{
		iVar2 = func_854(iParam1, &uVar0, &iVar1);
		if (iVar2 == 2 || iVar2 == 3)
		{
			iVar2 = 0;
		}
	}
	switch (iVar2)
	{
		case 0:
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
			if (aggregate.net_camp.func_517(iParam0, &Local_17, 4))
			{
				if (func_855(&Local_2026, vVar4, 1) || func_855(&Local_2026, vVar4, 0))
				{
					return;
				}
			}
		case 1:
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 8);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 16);
			(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
			break;
		case 2:
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 8);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 16);
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			aggregate.fme_animal_tagging.func_1147(&Local_17, 134217728);
			break;
		case 3:
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 16);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 8);
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			aggregate.fme_animal_tagging.func_1147(&Local_17, 134217728);
			break;
		case 4:
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 8);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 16);
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			aggregate.fme_animal_tagging.func_1147(&Local_17, 134217728);
			break;
	}
}

void func_706(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_698(iParam0, uParam1);
	iVar2 = 255;
	if (func_1072(iParam0, uParam1, uParam3))
	{
		aggregate.fme_animal_tagging.func_1147(uParam1, 65536);
	}
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 0:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_904(iParam0, uParam1, 1);
				return;
			}
			func_904(iParam0, uParam1, 2);
			break;
		case 2:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_904(iParam0, uParam1, 1);
				return;
			}
			if (!func_1073(iVar1, &iVar2, &uVar3, 1103626240 /* Float: 25f */))
			{
				Local_2026.f_171.f_2 = -1;
			}
			else
			{
				(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar2;
				if (func_1074(iVar1, iVar2, &(Local_2026.f_171.f_2), 1103626240 /* Float: 25f */, 2000))
				{
					func_904(iParam0, uParam1, 3);
					aggregate.fme_animal_tagging.func_1147(&Local_17, 16);
					return;
				}
			}
			if (!aggregate.fishing_core.func_34(uParam1, 16))
			{
				return;
			}
			func_904(iParam0, uParam1, 3);
			break;
		case 3:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_904(iParam0, uParam1, 1);
				return;
			}
			if (!func_1075(iParam0, uParam1, 1, 0))
			{
				return;
			}
			func_904(iParam0, uParam1, 4);
			break;
		case 4:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_904(iParam0, uParam1, 1);
				return;
			}
			if (func_1075(iParam0, uParam1, 1, 0))
			{
				return;
			}
			func_904(iParam0, uParam1, 3);
			break;
		case 1:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				return;
			}
			func_904(iParam0, uParam1, 2);
			break;
	}
}

void func_707(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_698(iParam0, uParam1);
	if (!func_880(iParam0, uParam1))
	{
		func_700(iParam0, uParam1, 0, 1, 0);
		return;
	}
	iVar1 = func_881(iParam0, uParam1);
	if (!aggregate.net_camp.func_517((Local_17.f_16[iParam0 /*12*/])->f_11, &Local_17, 1) && aggregate.dynamic_craft_scenario.func_370(iVar1, iVar0, 1, 1) > 100f)
	{
		func_700(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
			{
				func_904(iParam0, uParam1, 35);
				return;
			}
			func_904(iParam0, uParam1, 34);
			break;
		case 36:
			break;
		case 34:
			if (aggregate.fishing_core.func_34(&Local_17, 32))
			{
				func_904(iParam0, uParam1, 36);
				return;
			}
			break;
		case 35:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
			{
				return;
			}
			func_904(iParam0, uParam1, 34);
			break;
	}
}

void func_708(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_698(iParam0, uParam1);
	if (aggregate.fme_supply_train.func_1207(iVar0))
	{
		return;
	}
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 14);
			break;
		case 14:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				return;
			}
			func_904(iParam0, uParam1, 15);
			break;
		case 15:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				func_904(iParam0, uParam1, 14);
				return;
			}
			if (!aggregate.fishing_core.func_34(uParam1, 16))
			{
				return;
			}
			func_904(iParam0, uParam1, 16);
			break;
		case 16:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				func_904(iParam0, uParam1, 14);
				return;
			}
			break;
	}
}

void func_709(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_880(iParam0, uParam1))
	{
		iVar0 = func_881(iParam0, uParam1);
	}
	iVar1 = func_698(iParam0, uParam1);
	if (PED::GET_PED_CONFIG_FLAG(iVar1, 11, false))
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 524288);
		func_904(iParam0, uParam1, 24);
		return;
	}
	else
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 524288);
	}
	if (aggregate.camera_item.func_12(&Local_2026) != -19759302 && aggregate.net_camp.func_517(iParam0, &Local_17, 256))
	{
		if (ENTITY::GET_ENTITY_HEALTH(iVar1) < 25)
		{
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 256);
		}
		else if ((PED::_0x3AA24CCC0D451379(iVar1) || PED::_0x9682F850056C9ADE(iVar1)) || PED::_0x3BDFCF25B58B0415(iVar1))
		{
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 256);
		}
	}
	if (PED::_0x3AA24CCC0D451379(iVar1) || (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1) && aggregate.net_camp.func_517(iParam0, uParam1, 4)))
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 4);
		if ((Local_17.f_16[iParam0 /*12*/])->f_3 != 28)
		{
			func_904(iParam0, uParam1, 28);
		}
	}
	else
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 4);
	}
	if (aggregate.net_camp.func_517(iParam0, uParam1, 32))
	{
		return;
	}
	if ((Local_17.f_16[iParam0 /*12*/])->f_3 != 21)
	{
		aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 4194304);
	}
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 0:
			if (aggregate.fme_animal_tagging.func_134(256) && !aggregate.fme_challenges.func_1307(iParam0, 1))
			{
				func_904(iParam0, uParam1, 25);
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 256);
			}
			func_904(iParam0, uParam1, 17);
			break;
		case 25:
			if (aggregate.fishing_core.func_34(&Local_17, 16))
			{
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (!func_924(iVar1, &uVar2, &fVar3, 100f))
			{
				return;
			}
			func_904(iParam0, uParam1, 26);
			break;
		case 26:
			if (aggregate.fishing_core.func_34(&Local_17, 16))
			{
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (func_924(iVar1, &uVar2, &fVar3, 100f))
			{
				return;
			}
			func_904(iParam0, uParam1, 25);
			break;
		case 17:
			if (!func_880(iParam0, uParam1))
			{
				func_904(iParam0, uParam1, 18);
				return;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 256);
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return;
			}
			if (func_890(iVar0) && !func_1076((uParam1->f_16[iParam0 /*12*/])->f_11))
			{
				func_904(iParam0, uParam1, 18);
				return;
			}
			if (!func_715(iVar0))
			{
				return;
			}
			if (!aggregate.net_camp.func_517((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 1))
			{
				return;
			}
			if (aggregate.camera_item.func_12(&Local_17) <= 2 && func_735(uParam1, (uParam1->f_16[iParam0 /*12*/])->f_11))
			{
				return;
			}
			func_904(iParam0, uParam1, 18);
			break;
		case 18:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
			{
				return;
			}
			if (aggregate.net_camp.func_517(iParam0, uParam1, 256))
			{
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (aggregate.camera_item.func_12(bParam3) != -19759302)
			{
				func_904(iParam0, uParam1, 19);
				return;
			}
			func_904(iParam0, uParam1, 21);
			break;
		case 19:
			if (func_1077(iParam0, 2.2f))
			{
				return;
			}
			if (aggregate.fishing_core.func_34(&Local_17, 16) && func_1078(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 25f))
			{
				func_904(iParam0, uParam1, 20);
				return;
			}
			func_904(iParam0, uParam1, 21);
			break;
		case 20:
			if (func_1077(iParam0, 2.2f))
			{
				func_904(iParam0, uParam1, 19);
				return;
			}
			if ((!func_1078(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 25f) || aggregate.net_camp.func_517(iParam0, uParam1, 256)) || func_522(&Local_17, &Local_2026) < 6000)
			{
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (func_1079(iVar1, 40f, 1))
			{
				func_904(iParam0, uParam1, 21);
				return;
			}
			if (!func_914(iVar1))
			{
				return;
			}
			if (!aggregate.net_camp.func_517((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 1))
			{
				return;
			}
			if (aggregate.net_coach_holdup.func_1083(uParam1, -193064196, (uParam1->f_16[iParam0 /*12*/])->f_11))
			{
				return;
			}
			if (aggregate.net_coach_holdup.func_1083(uParam1, -522830230, (uParam1->f_16[iParam0 /*12*/])->f_11))
			{
				return;
			}
			if ((PED::IS_PED_RAGDOLL(iVar1) || PED::_0x3BDFCF25B58B0415(iVar1)) || PED::_0x3AA24CCC0D451379(iVar1))
			{
				return;
			}
			func_904(iParam0, uParam1, 22);
			break;
		case 21:
			iVar4 = func_891(iVar1, &Local_361, 150f);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4) && aggregate.dynamic_craft_scenario.func_370(iVar1, iVar4, 0, 0) < 80f)
			{
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 4194304);
			}
			else
			{
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 4194304);
			}
			if (func_522(&Local_17, &Local_2026) < 6000)
			{
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				fVar3 = aggregate.dynamic_craft_scenario.func_370(iVar1, iVar4, 1, 0);
				if ((((fVar3 < 20f && aggregate.fishing_core.func_34(&Local_17, 16)) && !aggregate.net_camp.func_517(iParam0, uParam1, 4096)) && !aggregate.net_camp.func_517(iParam0, uParam1, 256)) && !func_1079(iVar1, (40f + 10f), 1))
				{
					aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 16384);
					func_904(iParam0, uParam1, 20);
					return;
				}
				if (fVar3 < 150f)
				{
					return;
				}
			}
			func_904(iParam0, uParam1, 27);
			break;
		case 27:
			iVar4 = func_891(iVar1, &Local_361, 150f);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				fVar3 = aggregate.dynamic_craft_scenario.func_370(iVar1, iVar4, 1, 0);
				if ((fVar3 + 10f) > 150f)
				{
					return;
				}
			}
			else
			{
				return;
			}
			func_904(iParam0, uParam1, 21);
			break;
		case 22:
			if ((uParam1->f_16[iParam0 /*12*/])->f_7 == 255)
			{
				if ((PED::IS_PED_RAGDOLL(iVar1) || PED::_0x3BDFCF25B58B0415(iVar1)) || PED::_0x3AA24CCC0D451379(iVar1))
				{
					func_904(iParam0, &Local_17, 20);
					return;
				}
				if ((!func_1078(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 25f) || func_522(&Local_17, &Local_2026) < 6000) || aggregate.net_camp.func_517(iParam0, &Local_17, 256))
				{
					func_904(iParam0, uParam1, 21);
					return;
				}
				if (func_1079(iVar1, 40f, 1))
				{
					func_904(iParam0, uParam1, 21);
					return;
				}
				if (func_1077(iParam0, 2.2f))
				{
					func_904(iParam0, uParam1, 19);
					return;
				}
			}
			else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE((uParam1->f_16[iParam0 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((uParam1->f_16[iParam0 /*12*/])->f_7))
			{
				iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX((uParam1->f_16[iParam0 /*12*/])->f_7);
				if (aggregate.fishing_core.func_34((*iParam2)[iVar5 /*52*/], 256))
				{
					(uParam1->f_16[iParam0 /*12*/])->f_7 = 255;
					func_904(iParam0, uParam1, 23);
					return;
				}
				if (aggregate.fishing_core.func_34((*iParam2)[iVar5 /*52*/], 512))
				{
					return;
				}
			}
			if (!aggregate.net_camp.func_517(iParam0, uParam1, 2))
			{
				iVar6 = 0;
				while (iVar6 < 32)
				{
					if (!aggregate.fishing_core.func_34((*iParam2)[iVar6 /*52*/], 128))
					{
					}
					else if (((*iParam2)[iVar6 /*52*/])->f_46 != iParam0)
					{
					}
					else if (!aggregate.fme_condor_egg.func_1607(iVar6, 1, 1))
					{
					}
					else
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar6));
						if (func_1080(iParam0, uParam1, iVar7))
						{
						}
						else
						{
							(uParam1->f_16[iParam0 /*12*/])->f_7 = iVar7;
							return;
						}
					}
					iVar6++;
				}
				(uParam1->f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(uParam1->f_16[iParam0 /*12*/])->f_7 = 255;
			aggregate.net_coach_holdup.func_275(iParam0, uParam1, 4096);
			func_904(iParam0, uParam1, 21);
			break;
		case 23:
			if (func_914(iVar1))
			{
				return;
			}
			aggregate.net_coach_holdup.func_275(iParam0, uParam1, 4096);
			func_904(iParam0, uParam1, 21);
			break;
		case 24:
			if (aggregate.net_camp.func_517(iParam0, &Local_17, 524288))
			{
				return;
			}
			func_904(iParam0, &Local_17, 21);
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
			{
				func_904(iParam0, &Local_17, 18);
			}
			break;
		case 28:
			if (aggregate.net_camp.func_517(iParam0, &Local_17, 4))
			{
				return;
			}
			func_904(iParam0, &Local_17, 21);
			break;
	}
}

void func_710(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_698(iParam0, uParam1);
	if (!aggregate.net_camp.func_517(iParam0, uParam1, 128) && PED::IS_PED_IN_GROUP(iVar1))
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 128);
	}
	if (aggregate.fishing_core.func_34(uParam1, 16) && aggregate.dynamic_craft_scenario.func_370(iVar0, iVar1, 1, 1) > 100f)
	{
		func_700(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 29);
			break;
		case 29:
			if (!aggregate.fishing_core.func_34(uParam1, 16))
			{
				return;
			}
			if ((func_1081(iVar0, iParam2, 50f) && aggregate.dynamic_craft_scenario.func_370(iVar0, iVar1, 1, 1) < 40f) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0, 0))
			{
				func_904(iParam0, uParam1, 30);
				return;
			}
			break;
		case 30:
			if (aggregate.dynamic_craft_scenario.func_370(iVar0, iVar1, 1, 1) > 40f)
			{
				func_904(iParam0, uParam1, 29);
				return;
			}
			break;
	}
}

void func_711(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	iVar1 = func_698(iParam0, uParam1);
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 6);
			break;
		case 6:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				return;
			}
			func_904(iParam0, uParam1, 7);
			break;
		case 7:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			if (aggregate.fishing_core.func_34(uParam1, 16))
			{
				func_904(iParam0, uParam1, 11);
				return;
			}
			if (aggregate.fme_challenges.func_1307(iParam0, 16))
			{
				return;
			}
			if (func_1073(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				(Local_17.f_16[iParam0 /*12*/])->f_7 = uVar3;
				if (aggregate.net_camp.func_517(iParam0, &Local_17, 2097152))
				{
					func_904(iParam0, uParam1, 10);
				}
				else
				{
					func_904(iParam0, uParam1, 8);
				}
				return;
			}
			break;
		case 8:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			if (aggregate.fishing_core.func_34(uParam1, 16))
			{
				func_904(iParam0, uParam1, 11);
				return;
			}
			if (!func_1073(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				if (!aggregate.net_camp.func_517(iParam0, &Local_17, 1048576))
				{
					aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 7);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = uVar3;
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
			if (iVar2 > 15000)
			{
				func_904(iParam0, uParam1, 9);
				return;
			}
			break;
		case 9:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			if (aggregate.fishing_core.func_34(uParam1, 16))
			{
				func_904(iParam0, uParam1, 11);
				return;
			}
			if (!func_1073(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				if (!aggregate.net_camp.func_517(iParam0, &Local_17, 1048576))
				{
					aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 7);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = uVar3;
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
			if (!aggregate.net_camp.func_517(iParam0, &Local_17, 2097152) && func_876(iParam0, 6, &Local_361, 0))
			{
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 2097152);
			}
			if (iVar2 > 28000)
			{
				func_904(iParam0, uParam1, 10);
				return;
			}
			break;
		case 10:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			if (aggregate.fishing_core.func_34(uParam1, 16))
			{
				func_904(iParam0, uParam1, 11);
				return;
			}
			if (!func_1073(iVar1, &uVar3, &iVar2, 1103626240 /* Float: 25f */))
			{
				if (!aggregate.net_camp.func_517(iParam0, &Local_17, 1048576))
				{
					aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 7);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = uVar3;
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
			if (iVar2 > 45000)
			{
				func_904(iParam0, uParam1, 11);
				aggregate.fme_animal_tagging.func_1147(&Local_17, 16);
				return;
			}
			break;
		case 11:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			if (((!aggregate.fme_animal_tagging.func_134(256) && func_895(iVar0, -1, 0)) && !func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, joaat("driver"), -1)) && func_715(iVar0))
			{
				func_904(iParam0, uParam1, 12);
				return;
			}
			break;
		case 12:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
			{
				func_904(iParam0, uParam1, 6);
				return;
			}
			break;
	}
}

void func_712(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_698(iParam0, uParam1);
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 31);
			break;
		case 31:
			if (!aggregate.fishing_core.func_34(&Local_17, 524288))
			{
				return;
			}
			if (Local_17.f_328 == -1)
			{
				return;
			}
			if (func_1083(&Local_17, 1566032419, 33))
			{
				return;
			}
			if (aggregate.fishing_core.func_34(&Local_17, 16777216) && !aggregate.net_camp.func_517(iParam0, &Local_17, 2048))
			{
				func_904(iParam0, uParam1, 33);
			}
			else if (aggregate.fishing_core.func_34(&Local_17, 33554432) && aggregate.net_camp.func_517(iParam0, &Local_17, 2048))
			{
				func_904(iParam0, uParam1, 33);
			}
			break;
		case 32:
			if ((!PED::IS_PED_IN_COMBAT(iVar0, 0) && !PED::_0x77525BBF433F2CD6(iVar0)) && !PED::IS_PED_FLEEING(iVar0))
			{
				func_904(iParam0, uParam1, 31);
				return;
			}
			break;
	}
}

void func_713(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	var uVar9;

	iVar0 = func_698(iParam0, uParam1);
	if (!VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619))
	{
	}
	else
	{
		vVar2 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
	}
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 44);
			break;
		case 44:
			if (aggregate.fishing_core.func_34(&Local_17, 512))
			{
				func_904(iParam0, uParam1, 45);
				return;
			}
			if (aggregate.fishing_core.func_39(iVar0, vVar2, 0) < 110f)
			{
				func_904(iParam0, uParam1, 45);
				return;
			}
			if (func_933(iParam0, &iVar1))
			{
				fVar5 = aggregate.dynamic_craft_scenario.func_370(iVar1, iVar0, 0, 1);
				if (fVar5 > 300f && !func_1084(iVar0, &Local_361, 200f))
				{
					func_700(iParam0, &Local_17, 0, 1, 0);
					return;
				}
			}
			else
			{
				if (!func_411(&uVar9, &uVar6))
				{
					func_904(iParam0, uParam1, 45);
					return;
				}
				(Local_17.f_16[iParam0 /*12*/])->f_11 = uVar9;
				return;
			}
			break;
		case 45:
			if (!func_1084(iVar0, &Local_361, 200f))
			{
				func_700(iParam0, &Local_17, 0, 1, 0);
				return;
			}
			break;
	}
}

void func_714(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 255;
	iVar2 = func_698(iParam0, uParam1);
	if ((Local_17.f_16[iParam0 /*12*/])->f_3 != 43 && aggregate.fishing_core.func_34(uParam1, 524288))
	{
		func_904(iParam0, uParam1, 43);
		return;
	}
	if ((Local_17.f_16[iParam0 /*12*/])->f_3 != 37 && aggregate.fishing_core.func_34(uParam1, 16))
	{
		func_904(iParam0, uParam1, 37);
		return;
	}
	if ((aggregate.fishing_core.func_34(uParam1, 16) && func_880(iParam0, &Local_17)) && aggregate.dynamic_craft_scenario.func_370(func_881(iParam0, uParam1), iVar2, 1, 1) > 100f)
	{
		func_700(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (aggregate.net_coach_holdup.func_865(iParam0, uParam1))
	{
		case 0:
			func_904(iParam0, uParam1, 38);
			break;
		case 38:
			if (aggregate.fme_challenges.func_1307(iParam0, 16) || PED::IS_PED_ON_MOUNT(iVar2))
			{
				return;
			}
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
			if (func_1073(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (aggregate.net_camp.func_517(iParam0, &Local_17, 2097152))
				{
					func_904(iParam0, uParam1, 41);
				}
				else
				{
					func_904(iParam0, uParam1, 40);
				}
				return;
			}
			if (func_901(iParam0) == 0 || aggregate.fme_challenges.func_1307(iParam0, 1))
			{
				return;
			}
			func_904(iParam0, uParam1, 39);
			break;
		case 39:
			if (aggregate.fme_challenges.func_1307(iParam0, 16))
			{
				return;
			}
			if (PED::IS_PED_ON_MOUNT(iVar2))
			{
				func_904(iParam0, uParam1, 38);
				return;
			}
			if (func_1073(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (aggregate.net_camp.func_517(iParam0, &Local_17, 2097152))
				{
					func_904(iParam0, uParam1, 41);
				}
				else
				{
					func_904(iParam0, uParam1, 40);
				}
				(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
				return;
			}
			break;
		case 40:
			if (!func_1073(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (!aggregate.net_camp.func_517(iParam0, &Local_17, 1048576))
				{
					aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 38);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
			if (iVar0 > 15000)
			{
				func_904(iParam0, uParam1, 41);
				return;
			}
			break;
		case 41:
			if (!func_1073(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (!aggregate.net_camp.func_517(iParam0, &Local_17, 1048576))
				{
					aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 38);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
			if (!aggregate.net_camp.func_517(iParam0, &Local_17, 2097152) && func_876(iParam0, 6, &Local_361, 0))
			{
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 2097152);
			}
			if (iVar0 > 28000)
			{
				func_904(iParam0, uParam1, 42);
				return;
			}
			break;
		case 42:
			if (!func_1073(iVar2, &iVar1, &iVar0, 1103626240 /* Float: 25f */))
			{
				if (!aggregate.net_camp.func_517(iParam0, &Local_17, 1048576))
				{
					aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
					return;
				}
				func_904(iParam0, uParam1, 38);
				(Local_17.f_16[iParam0 /*12*/])->f_7 = 255;
				return;
			}
			(Local_17.f_16[iParam0 /*12*/])->f_7 = iVar1;
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1048576);
			if (iVar0 > 45000)
			{
				func_904(iParam0, uParam1, 37);
				aggregate.fme_animal_tagging.func_1147(&Local_17, 16);
				return;
			}
			break;
		case 43:
			break;
		case 37:
			break;
	}
}

bool func_715(int iParam0)
{
	return ENTITY::GET_ENTITY_SPEED(iParam0) < 0.5f;
}

void func_717(int iParam0, var uParam1)
{
	aggregate.net_coach_holdup.func_275(iParam0, uParam1, 16);
	aggregate.net_coach_holdup.func_275(iParam0, uParam1, 64);
	aggregate.net_coach_holdup.func_275(iParam0, uParam1, 32);
	aggregate.net_coach_holdup.func_275(iParam0, uParam1, 1);
	(Local_17.f_257[iParam0 /*5*/])->f_3 = 255;
	uParam1->f_322 = (uParam1->f_322 - 1);
}

void func_718(int iParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!aggregate.net_camp.func_517(iParam0, &Local_17, 2048) && func_1085(iParam0, &uVar2))
	{
		aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 2048);
	}
	if (func_1086(iParam0, iParam7))
	{
		if (aggregate.fishing_core.func_34(Local_361[*iParam7 /*52*/], 32))
		{
			*iParam5 = 2;
		}
		else if (aggregate.fishing_core.func_34(Local_361[*iParam7 /*52*/], 64))
		{
			*iParam5 = 3;
		}
		else
		{
			*iParam5 = 4;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*iParam7));
		*iParam6 = PLAYER::GET_PLAYER_PED(iVar0);
		*bParam8 = aggregate.net_coach_holdup.func_695(iParam0, *iParam7);
	}
	else
	{
		*iParam5 = func_854(iParam1, iParam6, &iVar0);
		*bParam8 = 0;
		*iParam7 = 255;
		if (*iParam5 == 2 || *iParam5 == 3)
		{
			*iParam5 = 0;
		}
	}
	if (*iParam5 == 0 && !aggregate.net_camp.func_517(iParam0, &Local_17, 2048))
	{
		return;
	}
	switch (*iParam5)
	{
		case 0:
			if (((aggregate.net_camp.func_517(iParam0, &Local_17, 256) || aggregate.net_camp.func_517(iParam0, &Local_17, 512)) || func_855(&Local_2026, vParam2, 1)) || func_855(&Local_2026, vParam2, 0))
			{
			}
			else
			{
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 64);
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 8);
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1);
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 32);
				(Local_17.f_257[iParam0 /*5*/])->f_3 = 255;
				(Local_17.f_257[iParam0 /*5*/])->f_2 = -1;
			}
			break;
		case 1:
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 64);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 32);
			(Local_17.f_257[iParam0 /*5*/])->f_3 = 255;
			if ((NETWORK::_0xB07D3185E11657A5(*iParam6) && PED::IS_PED_IN_ANY_VEHICLE(*iParam6, true)) && func_114(PED::GET_VEHICLE_PED_IS_IN(*iParam6, true), &Local_17, &uVar1))
			{
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 8);
				(Local_17.f_257[iParam0 /*5*/])->f_2 = uVar1;
			}
			else
			{
				aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 8);
				(Local_17.f_257[iParam0 /*5*/])->f_2 = -1;
			}
			break;
		case 2:
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 64);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 8);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 32);
			(Local_17.f_257[iParam0 /*5*/])->f_3 = iVar0;
			(Local_17.f_257[iParam0 /*5*/])->f_2 = -1;
			aggregate.fme_animal_tagging.func_1147(&Local_17, 134217728);
			break;
		case 3:
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 64);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 32);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 8);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1);
			(Local_17.f_257[iParam0 /*5*/])->f_3 = iVar0;
			(Local_17.f_257[iParam0 /*5*/])->f_2 = -1;
			aggregate.fme_animal_tagging.func_1147(&Local_17, 134217728);
			break;
		case 4:
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 64);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 1);
			aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 32);
			(Local_17.f_257[iParam0 /*5*/])->f_3 = iVar0;
			(Local_17.f_257[iParam0 /*5*/])->f_2 = -1;
			aggregate.fme_animal_tagging.func_1147(&Local_17, 134217728);
			break;
	}
}

void func_719(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	uParam1->f_322 = (uParam1->f_322 - 1);
	if (bParam2)
	{
		aggregate.net_coach_holdup.func_275(iParam0, uParam1, 4);
		aggregate.fme_animal_tagging.func_1147(uParam1, 262144);
		uParam1->f_324++;
		iVar0 = 5;
		if (uParam1->f_322 == 0)
		{
			aggregate.fme_animal_tagging.func_1147(&Local_17, 33554432);
			Local_17.f_328 = iParam0;
		}
	}
	else
	{
		aggregate.fme_animal_tagging.func_1147(uParam1, 8192);
		uParam1->f_323++;
		iVar0 = 4;
		if (uParam1->f_322 == 0)
		{
			aggregate.fme_animal_tagging.func_1147(&Local_17, 16777216);
			Local_17.f_328 = iParam0;
		}
	}
	if (NETWORK::_0x255A5EF65EDA9167((Local_17.f_257[iParam0 /*5*/])->f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_257[iParam0 /*5*/])->f_3))
	{
		(Local_17.f_257[iParam0 /*5*/])->f_4 = _NAMESPACE26::_0x901E0DC25080C8B9((Local_17.f_257[iParam0 /*5*/])->f_3);
	}
	func_538(iVar0, (Local_17.f_257[iParam0 /*5*/])->f_3, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	aggregate.net_coach_holdup.func_275(iParam0, uParam1, 2);
}

void func_720(int iParam0, int iParam1)
{
	if (aggregate.net_camp.func_517(iParam0, &Local_17, 4096))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_538(8, iParam1, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	aggregate.net_coach_holdup.func_275(iParam0, &Local_17, 4096);
}

bool func_721(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	if (bParam7)
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 2;
	}
	if (bParam3 != iVar0)
	{
		return false;
	}
	if (iParam6 != 255)
	{
		if (bParam7)
		{
			bVar1 = (bParam5 && aggregate.fishing_core.func_34(Local_361[iParam6 /*52*/], 131072));
		}
		else
		{
			bVar1 = (bParam5 && aggregate.fishing_core.func_34(Local_361[iParam6 /*52*/], 65536));
		}
	}
	if (!bVar1 && !func_855(&Local_2026, vParam0, bParam7))
	{
		return false;
	}
	return true;
}

int func_722()
{
	int iVar0;

	if (Local_17.f_315 < 2)
	{
		iVar0 = 2;
	}
	else if (Local_17.f_315 < 3)
	{
		iVar0 = 3;
	}
	else if (Local_17.f_315 < 6)
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 4;
	}
	return aggregate.net_camp.func_2390((iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2)), func_724());
}

int func_723()
{
	if (!aggregate.fishing_core.func_34(&Local_17, 128))
	{
		return aggregate.doc_book.func_255(0, func_1087());
	}
	return aggregate.doc_book.func_255(MISC::GET_RANDOM_INT_IN_RANGE(func_1088(), func_1089() + 1), 0);
}

int func_724()
{
	int iVar0;

	if (Local_17.f_315 < 2)
	{
		iVar0 = 2;
	}
	else if (Local_17.f_315 < 3)
	{
		iVar0 = 3;
	}
	else if (Local_17.f_315 < 6)
	{
		iVar0 = 6;
	}
	else
	{
		iVar0 = 8;
	}
	return iVar0;
}

bool func_725()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 1;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!aggregate.fme_condor_egg.func_42(Var1, 2064763470, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

Vector3 func_726(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam0 <= 0 || iParam1 <= 1)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 1f, 0f };
	func_936(&vVar0, &(vVar0.f_1), ((360f * IntToFloat((iParam0 - 1))) / IntToFloat((iParam1 - 1))));
	return vVar0;
}

bool func_727(var uParam0)
{
	*uParam0 = 0;
	while (*uParam0 < 20)
	{
		if ((Local_17.f_16[*uParam0 /*12*/])->f_2 != 0)
		{
		}
		else
		{
			return true;
		}
		*uParam0++;
	}
	return false;
}

bool func_728(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619))
	{
		return false;
	}
	fVar4 = iParam5;
	switch (Local_2026.f_10)
	{
		case -19759302:
			iVar5 = 0;
			while (iVar5 < 20)
			{
				if ((Local_17.f_16[iVar5 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (aggregate.net_camp.func_517(iVar5, &Local_17, 32))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar5 /*12*/])))
				{
				}
				else
				{
					iVar6 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar5 /*12*/]));
					vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar6, false, false) };
					fVar3 = BUILTIN::VDIST(vVar0, vParam0);
					if (fVar3 > fVar4)
					{
					}
					else
					{
						fVar4 = fVar3;
						*uParam4 = { vVar0 };
						*iParam3 = iVar5;
					}
				}
				iVar5++;
			}
			break;
		case -409129282:
			iVar5 = 0;
			while (iVar5 < 4)
			{
				if ((!aggregate.net_camp.func_517(iVar5, &Local_17, 128) || aggregate.net_camp.func_517(iVar5, &Local_17, 2)) || aggregate.net_camp.func_517(iVar5, &Local_17, 16))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar5 /*5*/])))
				{
				}
				else
				{
					iVar7 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar5 /*5*/]));
					vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar7, false, false) };
					fVar3 = BUILTIN::VDIST(vVar0, vParam0);
					if (fVar3 > fVar4)
					{
					}
					else
					{
						fVar4 = fVar3;
						*uParam4 = { vVar0 };
						*iParam3 = iVar5;
					}
				}
				iVar5++;
			}
			break;
		default:
			return false;
	}
	if (fVar4 == 0f)
	{
		return false;
	}
	return true;
}

Vector3 func_730(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { 0f, 4f, 0f };
	func_936(&vVar0, &(vVar0.f_1), ((360f * IntToFloat(iParam0)) / IntToFloat(iParam1)));
	return vVar0;
}

bool func_732(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, 128))
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_257[iVar0 /*5*/])))
		{
		}
		else if (!bParam2 && aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, 2))
		{
		}
		else if (!aggregate.aberdeenpigfarm.func_175((uParam0->f_257[iVar0 /*5*/])->f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_733(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if (iParam0 != -1 && (Local_17.f_16[iVar0 /*12*/])->f_11 != iParam0)
		{
		}
		else if (bParam1)
		{
			if ((Local_17.f_16[iVar0 /*12*/])->f_3 == 25 || (Local_17.f_16[iVar0 /*12*/])->f_3 == 26)
			{
			}
			else if ((Local_17.f_16[iVar0 /*12*/])->f_3 == 17)
			{
			}
			else if ((Local_17.f_16[iVar0 /*12*/])->f_3 == 0)
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
			{
			}
			else
			{
				return true;
			}
			iVar0++;
			return false;
		}
	}
}

bool func_734(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_3[iVar0 /*4*/])))
		{
		}
		else if (!aggregate.aberdeenpigfarm.func_175((uParam0->f_3[iVar0 /*4*/])->f_1, iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_735(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 != -1 && (uParam0->f_16[iVar0 /*12*/])->f_11 != iParam1)
		{
		}
		else if (!func_1090((uParam0->f_16[iVar0 /*12*/])->f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_736(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam2 != -1 && iParam2 == iVar0)
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175((uParam0->f_3[iVar0 /*4*/])->f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_737()
{
	if (aggregate.fishing_core.func_34(&Local_17, 16777216))
	{
		return true;
	}
	else if (aggregate.fishing_core.func_34(&Local_17, 33554432))
	{
		return true;
	}
	return false;
}

int func_738()
{
	if (aggregate.fishing_core.func_34(&Local_17, 16777216))
	{
		return -94224997;
	}
	else if (aggregate.fishing_core.func_34(&Local_17, 33554432))
	{
		return 575287677;
	}
	return 0;
}

bool func_741(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (bParam1 && !aggregate.aberdeenpigfarm.func_175((Local_361[iVar0 /*52*/])->f_41.f_1, 1))
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175((Local_361[iVar0 /*52*/])->f_41.f_1, iParam0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_742(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (aggregate.nb_animal_attack.func_161(2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Local_17.f_329[iVar0] = 255;
		iVar0++;
	}
	bVar1 = !func_1091(iParam0);
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if (!func_258(1, iVar3))
			{
			}
			else
			{
				if (!bVar1)
				{
					if (!aggregate.fishing_core.func_34(Local_361[iVar3 /*52*/], 32))
					{
					}
					else
					{
						Jump @172; //curOff = 149
						if (!aggregate.fishing_core.func_34(Local_361[iVar3 /*52*/], 64))
						{
						}
						else
						{
							Local_17.f_329[iVar0] = iVar4;
							iVar0++;
							if (iVar0 >= 7)
							{
							}
							else
							{
								iVar2++;
							}
							aggregate.nb_animal_attack.func_101(2);
						}
					}
				}
			}
		}
	}
}

bool func_743(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (bParam1 && !aggregate.aberdeenpigfarm.func_175((Local_361[iVar0 /*52*/])->f_41.f_1, 1))
		{
		}
		else if ((Local_361[iVar0 /*52*/])->f_41 == iParam0)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_744(int iParam0)
{
	var uVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = uVar0;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar4)))
		{
		}
		else
		{
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				uVar0[iVar3] = (uVar0[iVar3] || (Local_361[iVar4 /*52*/])->f_41.f_2[iVar3]) // PointerArith;
				iVar3++;
			}
		}
		iVar4++;
	}
	iVar5 = 0;
	while (iVar5 < iParam0)
	{
		if (!MISC::_0x8F4F050054005C27(&uVar0, iVar5))
		{
			return false;
		}
		iVar5++;
	}
	return true;
}

void func_746()
{
	Local_17.f_299.f_2++;
}

void func_747(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("attack"):
			switch (iParam1)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, -1102018457);
					break;
			}
			break;
		case joaat("defend"):
			switch (iParam1)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1428825552);
					break;
			}
			break;
		case 404851220:
			switch (iParam1)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 1968287849);
					break;
			}
			break;
		case joaat("COLLECT"):
			switch (iParam1)
			{
				case 0:
					aggregate.doc_book.func_292(iParam0, 2039472637);
					break;
			}
			break;
	}
}

int func_753(int iParam0)
{
	return aggregate.flow_controller.func_412(iParam0, 887702464, 1);
}

void func_755(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = iParam0;
	while (*iParam2 >= 32)
	{
		*iParam2 = (*iParam2 - 32);
		*iParam1++;
	}
}

void func_775(int iParam0, int iParam1, struct<2> Param2, int iParam4)
{
	struct<28> Var0;

	if (!Global_1103536->f_18)
	{
		return;
	}
	if (!aggregate.aberdeenpigfarm.func_158(Param2))
	{
		return;
	}
	if (!aggregate.flow_controller.func_373(iParam0))
	{
		return;
	}
	if (!aggregate.flow_controller.func_386(iParam1))
	{
		return;
	}
	if (!aggregate.flow_controller.func_230(iParam4))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_5 = iParam0;
	Var0.f_6 = iParam1;
	Var0.f_7 = { Param2 };
	Var0.f_9 = iParam4;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_4 = 1;
	func_386(&Var0);
}

void func_784(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	if (bParam1)
	{
		iVar0 = 1822827642;
	}
	else
	{
		iVar0 = joaat("attempts");
	}
	Var1 = { aggregate.aberdeenpigfarm.func_107(iVar0, aggregate.map_app_event_handler.func_148(iParam0)) };
	func_808(Var1);
}

void func_787(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar35;

	if (!aggregate.aberdeenpigfarm.func_165(*uParam0))
	{
		return;
	}
	vVar3 = 10;
	vVar3.f_1.f_1 = -1;
	vVar3.f_1.f_2 = -1;
	vVar3.f_1.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar35.f_1 = -1;
	aggregate.net_assassination.func_808(&vVar3);
	iVar0 = vVar3.f_31;
	while (iVar0 >= 0)
	{
		if (iVar0 == 0)
		{
		}
		else
		{
			if (iVar0 == 10)
			{
			}
			else
			{
				iVar1 = 0;
				if (!aggregate.aberdeenpigfarm.func_165(&(vVar3[(iVar0 - 1) /*3*/])))
				{
				}
				else
				{
					vVar35.x = &vVar3[(iVar0 - 1) /*3*/];
					vVar35.f_1 = (vVar3[(iVar0 - 1) /*3*/])->f_2;
					vVar35.f_2 = aggregate.net_assassination.func_809((vVar3[(iVar0 - 1) /*3*/])->f_1);
					if (func_1110(uParam0, &vVar35))
					{
						iVar2 = aggregate.net_assassination.func_811((iVar0 - 1));
					}
					else
					{
						iVar1 = aggregate.net_assassination.func_811((iVar0 - 1));
						func_1112(iVar1, iVar0);
					}
				}
			}
			iVar0 = (iVar0 + -1);
		}
	}
	if (iVar2 == 0)
	{
		iVar2 = func_1113(uParam0);
		if (iVar2 == 0)
		{
			return;
		}
	}
	func_1112(iVar2, 0);
}

void func_788(int iParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = aggregate.flow_controller.func_327(iParam0);
	iVar2 = func_1114();
	iVar3 = aggregate.flow_controller.func_242(Param1);
	iVar5 = aggregate.dynamic_craft_scenario.func_156(iVar0);
	if (bParam3)
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = 1;
	}
	switch (iVar5)
	{
		case 15:
			if (aggregate.flow_controller.func_281(iParam0, 4))
			{
				iVar4 = 1;
			}
			else
			{
				iVar4 = 0;
			}
			break;
		default:
			iVar4 = 0;
			break;
	}
	if (!aggregate.flow_controller.func_281(iParam0, 8))
	{
		iVar2 = 0;
	}
	func_1115(iVar0, iVar1, iVar3, iVar2, iVar4);
	if (aggregate.flow_controller.func_281(iParam0, 8))
	{
		if (iVar2 != 0)
		{
			aggregate.net_assassination.func_817(iParam0);
			aggregate.net_assassination.func_818(iParam0);
		}
	}
}

void func_792(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam1)
	{
		iVar0 = 1822827642;
		iVar1 = func_813(iParam0);
	}
	else
	{
		iVar0 = joaat("attempts");
		iVar1 = func_814(iParam0);
	}
	Var2 = { aggregate.aberdeenpigfarm.func_107(iVar0, iVar1) };
	func_808(Var2);
}

void func_793()
{
	aggregate.fm_deathmatch_controller.func_445(4);
	aggregate.fm_deathmatch_controller.func_445(1);
}

void func_806(struct<2> Param0, int iParam2)
{
	aggregate.net_assassination.func_837(Param0, aggregate.flow_controller.func_325(iParam2));
}

void func_808(var uParam0, var uParam1)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, true);
}

void func_812(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar7;
	var uVar8;

	if (!aggregate.flow_controller.func_230(iParam0))
	{
		return;
	}
	iVar7 |= 8;
	switch (iParam1)
	{
		case 2:
			iVar7 |= 2;
			break;
		case 1:
			iVar7 |= 1;
			break;
		default:
			break;
	}
	switch (iParam2)
	{
		case -1365731393:
		case joaat("none"):
			iVar7 |= 16;
			break;
		case -508253498:
			iVar7 |= 80;
			break;
		case 566295171:
			iVar7 |= 144;
			break;
		case -1881397389:
			iVar7 |= 272;
			break;
		case -356110550:
			iVar7 |= 528;
			break;
		case -406386912:
			iVar7 |= 1040;
			break;
		case -1553095031:
			iVar7 |= 2064;
			break;
		case 1923632299:
			iVar7 |= 32;
			break;
		case 475709606:
			iVar7 |= 2080;
			break;
		default:
			break;
	}
	iVar1 = func_1134(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1135(iParam0, iVar0, &uVar3);
		func_1136(&uVar3, iVar7);
		iVar0++;
	}
	switch (iParam1)
	{
		case 0:
			iVar2 = 0;
			break;
		case 1:
			iVar2 = 1575427269;
			break;
		case 2:
			iVar2 = 824391763;
			break;
		default:
			iVar2 = 0;
			break;
	}
	if (iVar2 != 0)
	{
		func_1137(iParam0, iVar2, iParam3);
	}
	iVar1 = func_1138(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1139(iParam0, iVar0, &uVar8);
		func_1140(&uVar8, iVar7);
		iVar0++;
	}
}

int func_813(int iParam0)
{
	switch (iParam0)
	{
		case joaat("standard"):
			return 1963482335;
		case joaat("sheriff"):
			return 1963482335;
		case joaat("post"):
			return 1963482335;
		case joaat("train"):
			return 1963482335;
		case 64621749:
			return 416516838;
		default:
			break;
	}
	return 0;
}

int func_814(int iParam0)
{
	switch (iParam0)
	{
		case joaat("standard"):
			return -1165569262;
		case joaat("sheriff"):
			return -1165569262;
		case joaat("post"):
			return -1165569262;
		case joaat("train"):
			return -1165569262;
		case -323664079:
			return 1397040943;
		case 64621749:
			return 133648705;
		case 1766283257:
			return -741823262;
		default:
			break;
	}
	return 0;
}

void func_818(int iParam0)
{
	if (aggregate.net_assassination.func_1054(0, 0, 0, 0) || iParam0 > (Global_1273882->f_21 - Global_1103536->f_5561))
	{
		Global_1103536->f_5561 = Global_1273882->f_21;
		Global_1103536->f_5561.f_1 = iParam0;
	}
}

int func_823(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var2;
	int iVar7;
	int iVar8;

	MISC::_COPY_MEMORY(iParam2, &uVar0, 2);
	if (!aggregate.flow_controller.func_230(iParam0))
	{
		return 0;
	}
	if (!aggregate.gfh_campworks.func_360(&Var2))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var2, &(Var2.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var2, &(Var2.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var2, &(Var2.f_1), 10, 0, 0, 0))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var2, &(Var2.f_1), 12, iParam1, 0, 0))
	{
		return 0;
	}
	iVar7 = aggregate.net_assassination.func_1070(Var2);
	if (iVar7 == 0)
	{
		return 0;
	}
	iVar8 = aggregate.net_assassination.func_1071(Var2);
	if (iVar8 == 0)
	{
		return 0;
	}
	*iParam2 = { aggregate.aberdeenpigfarm.func_107(iVar8, iVar7) };
	if (!STATS::_STAT_ID_IS_VALID(iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_832()
{
	return Global_1103536->f_21.f_37;
}

int func_833()
{
	return Global_1103536->f_21.f_37.f_1;
}

void func_834(var uParam0, int iParam1, struct<2> Param2)
{
	struct<28> Var0;
	var uVar31;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	SCRIPTS::_0x31010318BA9897AC(&uVar31, PLAYER::PLAYER_ID());
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_6 = uParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_4 = 7;
	Var0.f_16 = 304038664;
	Var0.f_7 = { Param2 };
	func_385(&Var0, uVar31);
}

int func_836(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&(Local_361[iParam0 /*52*/])->f_2[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_837(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2026.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (&(Local_361[iParam0 /*52*/])->f_2.f_2[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_838(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (aggregate.net_assassination.func_532(iVar0, 1))
	{
		return;
	}
	if (!func_442(iVar0))
	{
		return;
	}
	aggregate.net_coach_holdup.func_835(1);
}

void func_839(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (aggregate.net_assassination.func_532(iVar0, 2))
	{
		return;
	}
	if (!func_442(iVar0))
	{
		return;
	}
	aggregate.net_coach_holdup.func_835(2);
}

int func_841(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (PED::_0xA911EE21EDF69DAF(iParam0))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(iParam0);
	}
	else if (func_554(iParam0))
	{
		iVar0 = aggregate.fme_condor_egg.func_555(iParam0, 6);
	}
	else
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || !NETWORK::_0xB07D3185E11657A5(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::_0xF260AF6F43953316(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		return 0;
	}
	if (Local_2026.f_10 == -19759302)
	{
		if (!ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			return 0;
		}
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if ((&Local_17.f_16[iVar2 /*12*/] != iVar1 || (Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar2 /*12*/])))
			{
			}
			else
			{
				*uParam1 = iVar2;
				*uParam2 = iVar0;
				return 1;
			}
			iVar2++;
		}
	}
	else if (Local_2026.f_10 == -409129282)
	{
		if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
		{
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if ((((&Local_17.f_257[iVar3 /*5*/] != iVar1 || !aggregate.net_camp.func_517(iVar3, &Local_17, 128)) || aggregate.net_camp.func_517(iVar3, &Local_17, 2)) || aggregate.net_camp.func_517(iVar3, &Local_17, 16)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar3 /*5*/])))
			{
			}
			else
			{
				*uParam1 = iVar3;
				*uParam2 = iVar0;
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

void func_846(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 52;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 42, &uParam1);
}

bool func_849(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_16[iParam0 /*12*/])->f_5))
	{
		return false;
	}
	iVar0 = NETWORK::_0xD7F6781A0ABAF6FB((Local_17.f_16[iParam0 /*12*/])->f_5);
	if (!ANIMSCENE::_0x25557E324489393C(iVar0))
	{
		return false;
	}
	*iParam1 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iVar0, func_868(), false);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	return true;
}

int func_854(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	*iParam1 = aggregate.fm_deathmatch_controller.func_134();
	*iParam2 = 255;
	if (!func_1167(iParam0, iParam1, 1))
	{
		return 0;
	}
	if (!PED::IS_PED_A_PLAYER(*iParam1))
	{
		return 1;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(*iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(*iParam2) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(*iParam2))
	{
		return 4;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(*iParam2);
	if (aggregate.fishing_core.func_34(Local_361[iVar0 /*52*/], 32))
	{
		return 2;
	}
	if (aggregate.fishing_core.func_34(Local_361[iVar0 /*52*/], 64))
	{
		return 3;
	}
	return 4;
}

bool func_855(bool bParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
		iVar0 = bParam0->f_620;
	}
	else
	{
		iVar0 = bParam0->f_619;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iVar0))
	{
		return false;
	}
	if (!VOLUME::_0xF256A75210C5C0EB(iVar0, vParam1))
	{
		return false;
	}
	return true;
}

char* func_860(int iParam0)
{
	if (PED::IS_PED_MALE(iParam0))
	{
		return "STRANGER_MALE";
	}
	return "STRANGER_FEMALE";
}

int func_861(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if ((Local_17.f_16[iParam0 /*12*/])->f_2 == 401658241)
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Local_2026.f_4))
	{
		return 0;
	}
	if (func_1056(iParam0, &iVar1))
	{
		iVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), iVar1, 0);
	}
	else if (func_1057(iParam0, &uVar2))
	{
		iVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), PED::_0x62FDF4E678E40CC6(iParam1, uVar2), 0);
	}
	else if (!bParam2)
	{
		iVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), 0, 0);
	}
	return iVar0;
}

char* func_862()
{
	return "NET_CHU_ILO_TITLE_PASSENGER";
}

char* func_863()
{
	return "NET_CHU_ILO_TITLE_VIP";
}

char* func_864()
{
	return "NET_CHU_ILO_TITLE_ENEMY";
}

void func_866(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) };
	vVar3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam2) };
	if (ENTITY::_0x6BFBDC46139C45AB(vVar0) && aggregate.nb_slumped_hunter.func_389(&vVar0, 50, 10, 0, 0))
	{
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1, vVar0, vVar3, 2);
}

bool func_867(int iParam0, var uParam1)
{
	int iVar0;

	if (!PED::_0xA911EE21EDF69DAF(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar0 /*5*/])))
		{
		}
		else
		{
			*uParam1 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar0 /*5*/]));
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam1, iParam0))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

char* func_868()
{
	return "BAG";
}

bool func_870(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (PED::_0x3AA24CCC0D451379(iParam0) && PED::_0x3D9F958834AB9C30(iParam0) == iVar0)
	{
		return true;
	}
	if (PED::_0x9682F850056C9ADE(iParam0) && PED::_0x0C31C51168E80365(iParam0) == iVar0)
	{
		return true;
	}
	if (((PED::_0x3BDFCF25B58B0415(iParam0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && PED::_0x0E99E3BF11BB6367(iVar0)) && PED::_0xD0B7AEB56229D317(iVar0) == iParam0)
	{
		return true;
	}
	return false;
}

bool func_871(int iParam0)
{
	if (!PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	if (PED::GET_PEDS_JACKER(iParam0) != PLAYER::PLAYER_PED_ID())
	{
		return false;
	}
	return true;
}

bool func_872(int iParam0)
{
	if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam0, 1000))
	{
		return true;
	}
	return false;
}

bool func_873(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;

	if (!aggregate.fme_condor_egg.func_1665(iParam0, 1, 1, 1, 0, 0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	fVar1 = aggregate.fme_condor_egg.func_1660(iVar0, iParam0);
	if (((fVar1 < 30f && PED::_0x06087579E7AA85A9(iParam0, iVar0, 180f, 30f, 180f, 30f)) && *uParam1 != 0) && uParam1->f_1 > 1000)
	{
		return true;
	}
	return false;
}

bool func_874(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!aggregate.fishing_core.func_34(uParam0, 16))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!aggregate.fme_condor_egg.func_1607(iVar0, 0, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!_NAMESPACE26::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), iVar1))
			{
			}
			else if (!aggregate.fishing_core.func_34((*uParam1)[iVar0 /*52*/], 2))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_875(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	if (fParam2 == 180f)
	{
		return aggregate.electric_lantern.func_6(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar3 - vVar0) > 0f;
	}
	fVar6 = (fParam2 * 0.5f);
	fVar7 = aggregate.electric_lantern.func_6(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), aggregate.ambient_fishing_scenario.func_26(vVar3 - vVar0));
	return MISC::ACOS(fVar7) < fVar6;
}

bool func_876(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_755(iParam0, &iVar1, &iVar0);
	if (bParam3)
	{
		return MISC::IS_BIT_SET(((*uParam2)[Local_2026.f_634 /*52*/])->f_16[iParam1 /*2*/][iVar1], iVar0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!MISC::IS_BIT_SET(((*uParam2)[iVar2 /*52*/])->f_16[iParam1 /*2*/][iVar1], iVar0))
		{
		}
		else
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

void func_877(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iParam1))
	{
		return;
	}
	if (iParam2 == 2 && PED::_0x3AA24CCC0D451379(iParam1))
	{
		return;
	}
	if (func_876(iParam0, iParam2, uParam3, bParam5))
	{
		return;
	}
	if (bParam7)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam1))
		{
			return;
		}
		if (func_911(iParam1, 0))
		{
			return;
		}
	}
	if (iParam4 == 0)
	{
		if (bParam6)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam1, 0, 1));
			iParam4 = PLAYER::GET_PLAYER_PED(iVar0);
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam4))
	{
		iParam4 = 0;
	}
	iVar1 = func_1174(iParam2);
	sVar2 = func_1175(iParam2, (Local_17.f_16[iParam0 /*12*/])->f_2);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
	}
	else if (!aggregate.fme_condor_egg.func_1100(iParam1, sVar2, iVar1, iParam4, !bParam5, 0, 0, 1))
	{
		sVar2 = func_1177(iParam2, (Local_17.f_16[iParam0 /*12*/])->f_2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !aggregate.fme_condor_egg.func_1100(iParam1, sVar2, iVar1, iParam4, !bParam5, 0, 0, 1))
		{
			sVar2 = func_1178(iParam2, (Local_17.f_16[iParam0 /*12*/])->f_2);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !aggregate.fme_condor_egg.func_1100(iParam1, sVar2, iVar1, iParam4, !bParam5, 0, 0, 1))
			{
			}
		}
	}
	func_912(iParam0, iParam2, (*uParam3)[Local_2026.f_634 /*52*/]);
}

void func_878(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_755(iParam0, &iVar1, &iVar0);
	MISC::CLEAR_BIT((*uParam2->f_16[iParam1 /*2*/])[iVar1], iVar0);
}

bool func_879(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_7 != iVar1)
		{
		}
		else if (aggregate.net_camp.func_517(iVar0, &Local_17, 32))
		{
		}
		else if (!bParam0)
		{
			if (aggregate.net_camp.func_517(iVar0, &Local_17, 65536) || aggregate.net_camp.func_517(iVar0, &Local_17, 131072))
			{
			}
			else if (!aggregate.net_coach_holdup.func_695(iVar0, 255))
			{
			}
			else
			{
				return true;
			}
			iVar0++;
			return false;
		}
	}
}

bool func_880(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (uParam1->f_16[iParam0 /*12*/])->f_11;
	if (iVar0 > 3 || iVar0 < 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iVar0 /*4*/])))
	{
		return false;
	}
	iVar1 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iVar0 /*4*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	return true;
}

int func_881(int iParam0, var uParam1)
{
	return NETWORK::NET_TO_VEH(&(uParam1->f_3[(uParam1->f_16[iParam0 /*12*/])->f_11 /*4*/]));
}

int func_882(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (aggregate.fishing_core.func_34(&Local_17, 16))
	{
		iVar1 = 524308;
	}
	else
	{
		iVar1 = 524419;
	}
	if (aggregate.net_camp.func_517(iParam0, uParam1, 2))
	{
		iVar0 = iVar1 | 524288 | 4 | 16 | 32 | 2097152 | 67108864;
	}
	else
	{
		iVar0 = iVar1 | 524288 | 4 | 16 | 32;
	}
	return iVar0;
}

void func_883(int iParam0)
{
	if (!func_921(iParam0))
	{
		return;
	}
	if (aggregate.barcustomer_interaction.func_46(iParam0, 716706914))
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iParam0, 1, 1, 0, 0);
}

bool func_884(int iParam0, var uParam1, float fParam2)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return false;
	}
	iVar0 = (iParam0 - 1);
	if (iVar0 >= fParam2->f_10.f_7)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iVar0 /*4*/])))
	{
		return false;
	}
	if (aggregate.net_camp.func_517(iVar0, uParam1, 1))
	{
		return false;
	}
	return true;
}

float func_885(int iParam0, int iParam1, float fParam2)
{
	if (iParam0 < 0 || iParam0 >= fParam2->f_10.f_7)
	{
		return 7f;
	}
	if (iParam1 < 0 || iParam1 >= fParam2->f_10.f_7)
	{
		return 7f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS((fParam2->f_29[iParam1 /*5*/])->f_1, (fParam2->f_29[iParam0 /*5*/])->f_1, true);
}

int func_886(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6)
{
	int iVar0;

	if (func_1179(&iParam1, -1273030092, 1) == 2 || ((Local_2026.f_182[iParam0 /*2*/])->f_1 != iParam5 || &Local_2026.f_182[iParam0 /*2*/] != fParam4))
	{
		if (aggregate.fme_supply_train.func_1207(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			return 0;
		}
		Local_2026.f_182[iParam0 /*2*/] = fParam4;
		(Local_2026.f_182[iParam0 /*2*/])->f_1 = iParam5;
		TASK::TASK_VEHICLE_ESCORT(iVar0, iParam2, iParam3, 3, fParam4, iParam5, fParam6, 20, 20f);
		return 1;
	}
	else if (!aggregate.fme_supply_train.func_1207(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam4);
	}
	return 0;
}

int func_887(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5)
{
	int iVar0;

	if (func_1179(&iParam1, -258271821, 1) == 2 || ((fParam5->f_182[iParam0 /*2*/])->f_1 != iParam4 || &fParam5->f_182[iParam0 /*2*/] != fParam3))
	{
		if (aggregate.fme_supply_train.func_1207(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			return 0;
		}
		fParam5->f_182[iParam0 /*2*/] = fParam3;
		(fParam5->f_182[iParam0 /*2*/])->f_1 = iParam4;
		TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, iParam2, fParam3, iParam4);
		return 1;
	}
	else if (!aggregate.fme_supply_train.func_1207(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam3);
	}
	return 0;
}

int func_888(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, int iParam7, float fParam8, float fParam9)
{
	int iVar0;

	if (func_1179(&iParam1, 1199744105, 1) == 2 || ((fParam8->f_182[iParam0 /*2*/])->f_1 != iParam7 || &fParam8->f_182[iParam0 /*2*/] != fParam6))
	{
		if (aggregate.fme_supply_train.func_1207(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		fParam8->f_182[iParam0 /*2*/] = fParam6;
		(fParam8->f_182[iParam0 /*2*/])->f_1 = iParam7;
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iVar0, iParam2, vParam3, fParam6, iParam7, 6, fParam9, fParam9, false);
		return 1;
	}
	else if (!aggregate.fme_supply_train.func_1207(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam6);
	}
	return 0;
}

int func_889(int iParam0)
{
	int iVar0;

	if (func_1179(&iParam0, -2117564886, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_COMBAT_HATED_TARGETS(iVar0, 3f);
		return 1;
	}
	return 0;
}

bool func_890(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam0));
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = (iVar0 - 1);
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar2))
		{
		}
		else
		{
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
			}
			else if (PED::IS_PED_DEAD_OR_DYING(iVar3, true))
			{
			}
			else if (!PED::IS_PED_A_PLAYER(iVar3))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_891(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = iParam2;
	iVar4 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!aggregate.fishing_core.func_34((*uParam1)[iVar2 /*52*/], 2))
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(iVar3), true))
			{
			}
			else
			{
				fVar0 = aggregate.fishing_core.func_39(iParam0, aggregate.camera_item.func_108(iVar3), 1);
				if (fVar0 < fVar1)
				{
					iVar4 = iVar3;
					fVar1 = fVar0;
				}
			}
		}
		iVar2++;
	}
	if (iVar4 == 255)
	{
		return aggregate.fm_deathmatch_controller.func_134();
	}
	return PLAYER::GET_PLAYER_PED(iVar4);
}

int func_892(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	bool bVar1;

	func_886(iParam0, iParam1, iParam3, iParam4, fParam5, iParam6, fParam7);
	iVar0 = NETWORK::NET_TO_PED(iParam1);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!aggregate.binoculars.func_72(bVar1))
	{
		return 0;
	}
	else if (WEAPON::_0x959383DCD42040DA(bVar1))
	{
		return 0;
	}
	if (aggregate.binoculars.func_8(iVar0, 0, 0, 0) != bVar1)
	{
		func_1059(iVar0, bVar1, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	func_1181(iVar0, iParam2, 100f, 40, 1, -753768974);
	return 1;
}

int func_893(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	bool bVar1;

	func_887(iParam0, iParam1, iParam3, fParam4, iParam5, fParam6);
	iVar0 = NETWORK::NET_TO_PED(iParam1);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!aggregate.binoculars.func_72(bVar1))
	{
		return 0;
	}
	else if (WEAPON::_0x959383DCD42040DA(bVar1))
	{
		return 0;
	}
	if (aggregate.binoculars.func_8(iVar0, 0, 0, 0) != bVar1)
	{
		func_1059(iVar0, bVar1, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	func_1181(iVar0, iParam2, 100f, 40, 1, -753768974);
	return 1;
}

int func_894(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7, int iParam8, float fParam9, int iParam10)
{
	int iVar0;
	bool bVar1;

	func_888(iParam0, iParam1, iParam3, vParam4, fParam7, iParam8, fParam9, iParam10);
	iVar0 = NETWORK::NET_TO_PED(iParam1);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!aggregate.binoculars.func_72(bVar1))
	{
		return 0;
	}
	else if (WEAPON::_0x959383DCD42040DA(bVar1))
	{
		return 0;
	}
	if (aggregate.binoculars.func_8(iVar0, 0, 0, 0) != bVar1)
	{
		func_1059(iVar0, bVar1, 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	func_1181(iVar0, iParam2, 100f, 40, 1, -753768974);
	return 1;
}

bool func_895(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	if (PED::IS_PED_A_PLAYER(iVar0) && !bParam2)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	return false;
}

bool func_896(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, 518218985, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return false;
		}
		iVar1 = 0;
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			iVar1 = PED::GET_MOUNT(iVar0);
		}
		TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, vParam1, iParam6, iParam5, iParam4, -1, iVar1);
		return true;
	}
	return false;
}

int func_897(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (func_1179(&iParam0, -1794415470, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam5)
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iParam1, iParam4, iParam2, fParam3, 9, 0);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iParam1, iParam4, iParam2, fParam3, 1, 0);
		}
		return 1;
	}
	return 0;
}

bool func_899(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, -828834893, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return false;
		}
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
		if (func_1182(PED::_0x4E76CB57222A00E5(iVar0), iVar1))
		{
			return false;
		}
		TASK::TASK_LEAVE_VEHICLE(iVar0, iVar1, iParam1, iParam2);
		return true;
	}
	return false;
}

int func_900(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_1179(&iParam0, 1345172471, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam2)
		{
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam1);
		TASK::TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(iVar0, 200f);
		return 1;
	}
	return 0;
}

int func_901(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(&Local_2026, &Var0, iParam0))
	{
		aggregate.fme_animal_tagging.func_40(Var0, -1530266946, &uVar5, 0);
	}
	return uVar5;
}

int func_902(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;

	if (func_1179(&iParam0, -1098463898, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			return 0;
		}
		aggregate.fm_mission_controller.func_7506(&vParam2, 1f);
		func_1183(iVar0, iParam1, vParam2, fParam5, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

int func_903(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, -1098463898, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			return 0;
		}
		iVar1 = func_1184();
		aggregate.fm_mission_controller.func_7506(&vParam1, 1f);
		func_1183(iVar0, iVar1, vParam1, fParam4, -1, 1, 0, 0, -1082130432 /* Float: -1f */);
		return 1;
	}
	return 0;
}

void func_904(int iParam0, var uParam1, int iParam2)
{
	if (aggregate.net_coach_holdup.func_865(iParam0, uParam1) == iParam2)
	{
		return;
	}
	(uParam1->f_16[iParam0 /*12*/])->f_3 = iParam2;
}

int func_905(int iParam0)
{
	int iVar0;

	if (func_1179(&iParam0, joaat("SCRIPT_TASK_TURN_TO_FACE_CLOSEST_PED"), 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		TASK::TASK_TURN_TO_FACE_CLOSEST_PED(iVar0, 1109393408 /* Float: 40f */, 1112014848 /* Float: 50f */, 2);
		return 1;
	}
	return 0;
}

bool func_906(int iParam0)
{
	char* sVar0;

	sVar0 = "Default_Panic";
	PED::_0x5C3C55EAAD19915F(iParam0, sVar0);
	if (!PED::_0xDE3904B22695D9F9(iParam0, sVar0))
	{
		return false;
	}
	PED::_0xAAB050DA48B57978(iParam0, sVar0, func_891(iParam0, &Local_361, 1120403456 /* Float: 100f */), -1, 4);
	return true;
}

bool func_907(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (((*uParam0)[iVar0 /*52*/])->f_45 != iParam1)
		{
		}
		else if (!aggregate.fishing_core.func_34((*uParam0)[iVar0 /*52*/], 32))
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			*iParam2 = PLAYER::GET_PLAYER_PED(iVar1);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_908(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1179(&iParam0, -1519143300, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		TASK::TASK_HANDS_UP(iVar0, -1, iParam1, -1, false);
		return 1;
	}
	return 0;
}

void func_909(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		aggregate.bandana.func_26(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	aggregate.bandana.func_26(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &Var0);
	}
}

bool func_910(int iParam0, float fParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	fVar1 = fParam1;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar2 = 0;
	while (iVar2 < 20)
	{
		if ((Local_17.f_16[iVar2 /*12*/])->f_2 != 1095997463)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar2 /*12*/])))
		{
		}
		else
		{
			iVar6 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar2 /*12*/]));
			if (iVar6 == iParam0)
			{
			}
			else
			{
				fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, false, false), vVar3);
				if (fVar0 < fVar1)
				{
					*iParam2 = iVar6;
					fVar1 = fVar0;
				}
			}
		}
		iVar2++;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam2);
}

bool func_911(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 == -1088690539 || (Local_17.f_16[iVar0 /*12*/])->f_2 == 0)
		{
		}
		else if (iParam1 != 0 && (Local_17.f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (!func_438(iVar0, &iVar4, 1, 0))
		{
		}
		else if (BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar4, false, false)) > 35f)
		{
		}
		else if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar4))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_912(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_755(iParam0, &iVar1, &iVar0);
	MISC::SET_BIT((*uParam2->f_16[iParam1 /*2*/])[iVar1], iVar0);
}

int func_913(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, 474215631, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		PED::_0x935CF6E42BAF7F4D(iVar0);
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iVar0, 0, 3));
		if (NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
			TASK::TASK_COWER(iVar0, -1, PLAYER::GET_PLAYER_PED(iVar1), 0);
		}
		else
		{
			TASK::TASK_COWER(iVar0, -1, 0, 0);
		}
		return 1;
	}
	return 0;
}

bool func_914(int iParam0)
{
	int iVar0;

	if (PED::_0xA911EE21EDF69DAF(iParam0))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::_0xB07D3185E11657A5(iVar0)) && ENTITY::GET_ENTITY_MODEL(iVar0) == func_184())
		{
			return true;
		}
	}
	return false;
}

int func_915(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, -208384378, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (!PED::_0xA911EE21EDF69DAF(iVar0))
		{
			return 0;
		}
		iVar1 = PED::_0xD806CD2A4F2C2996(iVar0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return 0;
		}
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar0, iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1073741824 /* Float: 2f */, 1);
		return 1;
	}
	return 0;
}

int func_916(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = NETWORK::NET_TO_PED(iParam0);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!aggregate.binoculars.func_72(bVar1))
	{
		return 0;
	}
	else if (WEAPON::_0x959383DCD42040DA(bVar1))
	{
		return 0;
	}
	func_1181(iVar0, iParam1, 100f, 40, 1, -753768974);
	return 1;
}

int func_917(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = iParam1;
	iVar4 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!aggregate.fme_condor_egg.func_1607(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			fVar0 = aggregate.fishing_core.func_39(iParam0, aggregate.camera_item.func_108(iVar3), 1);
			if (fVar0 < fVar1)
			{
				iVar4 = iVar3;
				fVar1 = fVar0;
			}
		}
		iVar2++;
	}
	if (iVar4 == 255)
	{
		return aggregate.fm_deathmatch_controller.func_134();
	}
	return PLAYER::GET_PLAYER_PED(iVar4);
}

int func_918(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_1179(&iParam0, 150319005, 1) == 2 && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(iParam0), iParam1, iParam2, iParam3, iParam4, iParam5);
		return 1;
	}
	return 0;
}

bool func_919(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	if ((uParam2->f_16[iParam0 /*12*/])->f_11 < 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam2->f_3[(uParam2->f_16[iParam0 /*12*/])->f_11 /*4*/])))
	{
		return false;
	}
	iVar0 = func_881(iParam0, uParam2);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0, 0))
	{
		return false;
	}
	if (!PED::DOES_GROUP_EXIST((uParam2->f_3[(uParam2->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3))
	{
		return false;
	}
	if (!PED::_0x0455546F23FF08E4((uParam2->f_3[(uParam2->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3))
	{
		return false;
	}
	if (!PED::IS_PED_GROUP_MEMBER(iParam1, (uParam2->f_3[(uParam2->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3, 0))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam1))
	{
		return false;
	}
	if (!PED::IS_PED_IN_VEHICLE(PED::GET_PED_AS_GROUP_LEADER((uParam2->f_3[(uParam2->f_16[iParam0 /*12*/])->f_11 /*4*/])->f_3), iVar0, true))
	{
		return false;
	}
	return true;
}

int func_920(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;

	if (func_1179(&iParam0, 1056466932, 1) == 2 && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iVar0, iParam1, vParam2, fParam5, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
		return 1;
	}
	return 0;
}

bool func_921(int iParam0)
{
	bool bVar0;

	bVar0 = aggregate.binoculars.func_8(iParam0, 1, 0, 0);
	if (bVar0 == 0 || bVar0 == joaat("weapon_unarmed"))
	{
		return false;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
	{
		return true;
	}
	if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
	{
		return true;
	}
	return false;
}

int func_922(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, bParam1, 0, 0))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false);
	if (iVar1 == bParam1)
	{
		return 1;
	}
	iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, 716706914, 0);
	if (iVar2 == 1 || iVar2 == 0)
	{
		return 0;
	}
	if (func_1179(Local_17.f_16[iParam0 /*12*/], 716706914, 0) != 2)
	{
		return 0;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, bParam1, false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iVar0, iParam2, 0, 0, 0);
	return 1;
}

void func_923(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_35;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		aggregate.bandana.func_26(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	aggregate.bandana.func_26(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(*iParam0, &Var0);
	}
}

bool func_924(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	*uParam2 = iParam3;
	*iParam1 = aggregate.fm_deathmatch_controller.func_134();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((Local_361[iVar0 /*52*/])->f_47 == 0)
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar0, 1, 1))
		{
		}
		else
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, ENTITY::GET_ENTITY_COORDS(iVar6, false, false), true);
			if (fVar4 > *uParam2)
			{
			}
			else if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar6, 17))
			{
			}
			else
			{
				*uParam2 = fVar4;
				*iParam1 = iVar6;
			}
		}
		iVar0++;
	}
	if (*iParam1 == aggregate.fm_deathmatch_controller.func_134())
	{
		return false;
	}
	return true;
}

int func_925(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1179(&iParam0, 1630799643, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			return 0;
		}
		TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, iParam1, -1, 0, 1);
		return 1;
	}
	return 0;
}

int func_926(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1179(&iParam0, 355471868, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iParam1);
		return 1;
	}
	return 0;
}

bool func_927(vector3 vParam0, float fParam3, int iParam4, float fParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 255;
	switch (Local_2026.f_10)
	{
		case -409129282:
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar4 /*5*/])))
				{
				}
				else
				{
					iVar0 = NETWORK::NET_TO_ENT(&(Local_17.f_257[iVar4 /*5*/]));
					fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0);
					if (fVar1 > fParam3)
					{
					}
					else if (fVar1 < fParam5)
					{
					}
					else if (!func_1185(iVar0, iParam4))
					{
					}
					else if (bParam7)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(*iParam4))
						{
						}
						else
						{
							iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(*iParam4);
							if (!(bParam6 && aggregate.fishing_core.func_34(Local_361[iVar3 /*52*/], 64)) && !(!bParam6 && aggregate.fishing_core.func_34(Local_361[iVar3 /*52*/], 32)))
							{
							}
							else
							{
								fParam3 = fVar1;
								iVar2 = *iParam4;
							}
						}
						iVar4++;
						Jump @456; //curOff = 231
						iVar5 = 0;
						while (iVar5 < 20)
						{
							if ((Local_17.f_16[iVar5 /*12*/])->f_2 != 1095997463)
							{
							}
							else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar5 /*12*/])))
							{
							}
							else
							{
								iVar0 = NETWORK::NET_TO_ENT(&(Local_17.f_16[iVar5 /*12*/]));
								fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0);
								if (fVar1 > fParam3)
								{
								}
								else if (fVar1 < fParam5)
								{
								}
								else if (!func_1185(iVar0, iParam4))
								{
								}
								else if (bParam7)
								{
									if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(*iParam4))
									{
									}
									else
									{
										iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(*iParam4);
										if (!(bParam6 && aggregate.fishing_core.func_34(Local_361[iVar3 /*52*/], 64)) && !(!bParam6 && aggregate.fishing_core.func_34(Local_361[iVar3 /*52*/], 32)))
										{
										}
										else
										{
											fParam3 = fVar1;
											iVar2 = *iParam4;
										}
									}
									iVar5++;
									if (iVar2 != 255)
									{
										*iParam4 = iVar2;
										return true;
									}
									return false;
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

bool func_929(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (func_1179(&iParam0, -1162159953, 1) != 2)
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			return false;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_232(iParam1), func_930(iParam1), iParam2, -1, 1090519040 /* Float: 8f */, -8f, 0, 0, 0, 0, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */);
	}
	else
	{
		if (func_1179(&iParam0, -2017877118, 1) != 2)
		{
			return false;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_PLAY_ANIM(iVar0, func_232(iParam1), func_930(iParam1), 1090519040 /* Float: 8f */, -8f, -1, 0, 0, 0, 0, 0, 0, 0);
	}
	return true;
}

char* func_930(int iParam0)
{
	switch (iParam0)
	{
		case 1711865203:
			return "wave_idle_a";
		default:
			break;
	}
	return "";
}

bool func_931(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	iVar0 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam0, 0, 3);
	if (iVar0 == 255)
	{
		return false;
	}
	*iParam2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam2))
	{
		return false;
	}
	if (BUILTIN::VDIST(aggregate.camera_item.func_108(*iParam2), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) > fParam1)
	{
		return false;
	}
	return true;
}

bool func_933(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = (Local_17.f_16[iParam0 /*12*/])->f_11;
	if (!func_1186(iParam0))
	{
		return false;
	}
	switch (Local_2026.f_10)
	{
		case -19759302:
			*iParam1 = NETWORK::NET_TO_ENT(&(Local_17.f_16[iVar0 /*12*/]));
			break;
		case -409129282:
			*iParam1 = NETWORK::NET_TO_ENT(&(Local_17.f_257[iVar0 /*5*/]));
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	return true;
}

int func_934(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (func_1179(&iParam0, 1120685857, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam6)
		{
			TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam5);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, vParam1, fParam4, 0, 0);
		return 1;
	}
	return 0;
}

int func_935(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (func_1179(&iParam0, 518218985, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		iVar1 = 0;
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			iVar1 = PED::GET_MOUNT(iVar0);
		}
		TASK::_TASK_SMART_FLEE_STYLE_PED(iVar0, iParam1, iParam2, iParam4, iParam3, -1, iVar1);
		return 1;
	}
	return 0;
}

void func_936(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *fParam0;
	fVar1 = *fParam1;
	*fParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*fParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

void func_937(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&((Local_361[Local_2026.f_634 /*52*/])->f_2), iParam0);
}

void func_942(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&((Local_361[Local_2026.f_634 /*52*/])->f_2), iParam0);
}

bool func_947(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, var uParam5, int iParam6)
{
	struct<2> Var0;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	var uVar35;
	var uVar36;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam6, &Var0, 31))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0) || !ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return false;
	}
	iVar31 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar31))
	{
		return false;
	}
	iVar32 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar31);
	if (iVar32 != PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_PED(Var0))
		{
			iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
			if (PED::IS_PED_A_PLAYER(iVar33))
			{
				iVar34 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar33);
				if (SCRIPTS::_0x72B2E00C9BAC6789(uParam0, iVar34) && (!bParam3 || func_587(uParam0, Var0, fParam4)))
				{
					return true;
				}
			}
		}
	}
	if (bParam2)
	{
		if (func_1188(uParam0, &uVar36, Var0, &uVar35))
		{
			if (func_1189(&Var0))
			{
				*uParam5 = uVar36;
			}
			return true;
		}
	}
	return false;
}

bool func_955(int iParam0)
{
	vector3 vVar0;

	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return false;
	}
	if (func_1091(iParam0))
	{
		if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32))
		{
			return false;
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619))
		{
			return false;
		}
		vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
	}
	else
	{
		if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64))
		{
			return false;
		}
		if (Local_17.f_328 == -1)
		{
			return false;
		}
		if (Local_2026.f_10 == -409129282)
		{
			if (PLAYER::PLAYER_ID() != (Local_17.f_257[Local_17.f_328 /*5*/])->f_3 && _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != (Local_17.f_257[Local_17.f_328 /*5*/])->f_4)
			{
				return false;
			}
		}
		else if (Local_2026.f_10 == -19759302)
		{
			if (PLAYER::PLAYER_ID() != (Local_17.f_16[Local_17.f_328 /*12*/])->f_7 && _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != (Local_17.f_16[Local_17.f_328 /*12*/])->f_6)
			{
				return false;
			}
		}
		if (!VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_620))
		{
			return false;
		}
		vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_620) };
	}
	if (BUILTIN::VDIST(Global_36, vVar0) > 100f)
	{
		return false;
	}
	return true;
}

bool func_956()
{
	char* sVar0;

	sVar0 = func_227();
	if (!CAM::_0x595550376B7EA230(sVar0))
	{
		CAM::_0x1B3C2D961F5FC0E1(sVar0);
	}
	if (CAM::_0xAA235E2F2C09E952(sVar0))
	{
		aggregate.fme_animal_tagging.func_174(8388608);
		return true;
	}
	return false;
}

int func_957()
{
	int iVar0;

	if (func_258(4096, 255))
	{
		return 1;
	}
	iVar0 = -1429099402;
	PED::_0xF7EA250B9A919E03(iVar0, Global_35);
	if (!PED::_0x854BC9B1A1CCD034(iVar0, Global_35))
	{
		return 0;
	}
	func_262(4096);
	return 1;
}

bool func_958(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	int iVar30;

	if (!func_293(&Local_2026, &Var10) || !func_313(&Var10, 556233122, iParam0, 0))
	{
		return true;
	}
	iVar15 = func_496(iParam0);
	iVar23 = PLAYER::PLAYER_ID();
	if (!func_1194(&iVar24))
	{
		return true;
	}
	bVar25 = func_1195(iVar23);
	bVar26 = (bVar25 && iVar24 == iVar23);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_313(&Var0, -110495140, iVar17, 0))
		{
		}
		else
		{
			iVar20 = func_497(iParam0, iVar17);
			iVar16 = 0;
			while (iVar16 < iVar20)
			{
				Var5 = { Var0 };
				if ((!func_313(&Var5, 938546485, iVar16, 0) || !aggregate.fme_supply_train.func_39(Var5, 957840570, &iVar18, 0)) || !aggregate.fme_animal_tagging.func_40(Var5, -537439784, &uVar19, 0))
				{
				}
				else
				{
					iVar21 = uVar19;
					if (!func_498(iVar21, iVar18, &iVar22))
					{
					}
					else
					{
						func_1196(iVar22, iVar21, iVar23, bVar25, bVar26, &bVar27, iVar17, iVar16);
					}
				}
				iVar16++;
			}
		}
		iVar17++;
	}
	bVar28 = !func_1091(iParam0);
	switch (aggregate.camera_item.func_12(&Local_2026))
	{
		case -19759302:
			iVar29 = 0;
			while (iVar29 < 20)
			{
				if ((!aggregate.net_camp.func_517(iVar29, &Local_17, 1024) || !aggregate.net_camp.func_517(iVar29, &Local_17, 32)) || aggregate.net_camp.func_517(iVar29, &Local_17, 64) != bVar28)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar29 /*12*/])))
				{
				}
				else
				{
					func_1196(NETWORK::NET_TO_ENT(&(Local_17.f_16[iVar29 /*12*/])), 0, iVar23, bVar25, bVar26, &bVar27, -1, -1);
				}
				iVar29++;
			}
			break;
		case -409129282:
		default:
			iVar30 = 0;
			while (iVar30 < 4)
			{
				if ((!aggregate.net_camp.func_517(iVar30, &Local_17, 128) || !aggregate.net_camp.func_517(iVar30, &Local_17, 2)) || aggregate.net_camp.func_517(iVar30, &Local_17, 4) != bVar28)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar30 /*5*/])))
				{
				}
				else
				{
					func_1196(NETWORK::NET_TO_ENT(&(Local_17.f_257[iVar30 /*5*/])), 0, iVar23, bVar25, bVar26, &bVar27, -1, -1);
				}
				iVar30++;
			}
			break;
	}
	return !bVar27;
}

void func_959(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (!func_293(&Local_2026, &Var10) || !func_313(&Var10, 556233122, iParam0, 0))
	{
		return;
	}
	iVar15 = func_496(iParam0);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_313(&Var0, -110495140, iVar17, 0))
		{
			return;
		}
		iVar20 = func_497(iParam0, iVar17);
		iVar16 = 0;
		while (iVar16 < iVar20)
		{
			Var5 = { Var0 };
			if ((!func_313(&Var5, 938546485, iVar16, 0) || !aggregate.fme_supply_train.func_39(Var5, 957840570, &iVar18, 0)) || !aggregate.fme_animal_tagging.func_40(Var5, -537439784, &uVar19, 0))
			{
			}
			else
			{
				iVar21 = uVar19;
				if (!func_498(iVar21, iVar18, &iVar22))
				{
				}
				else
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar22, "RDRO_Scripted_Cutscene_Focus_Entity_Group", 0f);
				}
			}
			iVar16++;
		}
		iVar17++;
	}
}

void func_960()
{
	if (func_258(8, 255))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		NETWORK::_0x4B05B97BA46F419D(0);
		NETWORK::_0x89D803CD48622150(1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, func_499(), true);
		func_262(8);
	}
	NETWORK::_0xDC6AD5C046F33AB4(1, 0);
}

char* func_961()
{
	return "ShotSphere";
}

char* func_962(int iParam0)
{
	switch (iParam0)
	{
		case -1446305837:
			return "Cam_Near35mm";
		case 733100135:
			return "Cam_Near50mm";
		case -1603076223:
			return "Cam_Med35mm";
		case -919897303:
			return "Cam_Med50mm";
		case -1315315274:
			return "Cam_Far35m";
		case -1278043032:
			return "Cam_Far50mm";
		case 0:
			return "None";
		default:
			break;
	}
	return "";
}

bool func_963(struct<5> Param0, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	vector3 vVar26;
	float fVar29;

	if (!func_313(&Param0, 938546485, iParam5, 0))
	{
		return true;
	}
	bVar10 = aggregate.fme_animal_tagging.func_143(Param0, 644136394, &vVar0, 0);
	bVar11 = aggregate.fme_animal_tagging.func_142(Param0, 1471513692, &fVar9, 0);
	bVar12 = aggregate.fme_animal_tagging.func_143(Param0, -2119193689, &vVar3, 0);
	bVar13 = aggregate.fme_animal_tagging.func_143(Param0, -2117302676, &vVar6, 0);
	aggregate.fme_animal_tagging.func_40(Param0, -537439784, &iVar14, 0);
	iVar15 = iVar14;
	iVar16 = -1;
	aggregate.fme_supply_train.func_39(Param0, 957840570, &iVar16, 0);
	bVar17 = aggregate.fme_animal_tagging.func_40(Param0, -1530266946, &iVar14, 0);
	iVar18 = iVar14;
	if (aggregate.fme_animal_tagging.func_40(Param0, 999526519, &iVar14, 0))
	{
		iVar19 = iVar14;
	}
	bVar20 = iVar15 == joaat("player");
	if (bVar20)
	{
		bVar17 = false;
	}
	if ((((!bVar10 && !bVar12) && !bVar11) && !bVar17) && !bVar20)
	{
		return true;
	}
	if (!func_498(iVar15, iVar16, &iVar21))
	{
		if (func_1197(iVar15))
		{
			if (!bVar10)
			{
				return true;
			}
			if (!func_1198(iParam5, iVar16, iVar15, &iVar21, vVar0, fVar9))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar21))
	{
		return false;
	}
	if (bVar10)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar21))
		{
			iVar22 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar21);
			if (iVar22 == PLAYER::PLAYER_PED_ID())
			{
				aggregate.fme_escaped_convicts.func_913(func_1199(iVar19), 0);
			}
			if (AITRANSPORT::_0xDC44F405A6B98D03(iVar22, 0))
			{
				AITRANSPORT::_0x8886D83A430537FD(iVar22, 0);
			}
		}
		ENTITY::SET_ENTITY_COORDS(iVar21, vVar0, false, false, true, true);
	}
	if (bVar11)
	{
		ENTITY::SET_ENTITY_HEADING(iVar21, fVar9);
	}
	else if (bVar12)
	{
		ENTITY::SET_ENTITY_ROTATION(iVar21, vVar3, 2, false);
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar21))
	{
		bVar24 = true;
		iVar23 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar21);
	}
	if (bVar17 && bVar24)
	{
		if (((!PED::IS_PED_DEAD_OR_DYING(iVar23, true) && !PED::IS_PED_INJURED(iVar23)) && !PED::IS_PED_RAGDOLL(iVar23)) && !PED::_0xB655DB7582AEC805(iVar23))
		{
			if (PED::IS_PED_A_PLAYER(iVar23))
			{
				iVar25 = func_616(Local_17.f_299, Local_17.f_299.f_2);
			}
			else
			{
				iVar25 = 0;
			}
			WEAPON::_0xFCCC886EDE3C63EC(iVar23, 2, 1);
			if (aggregate.fme_animal_tagging.func_143(Param0, 82347414, &vVar26, 0))
			{
				aggregate.fme_animal_tagging.func_142(Param0, -1580911258, &fVar29, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(iVar23, iVar18, vVar26, fVar29, iVar25, 1, 0, 0, -1082130432 /* Float: -1f */, 0);
			}
			else
			{
				TASK::_TASK_START_SCENARIO_IN_PLACE(iVar23, iVar18, iVar25, 0, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
	}
	else if ((bVar20 && bVar24) && iVar23 == Global_35)
	{
		if (((!PED::IS_PED_DEAD_OR_DYING(iVar23, true) && !PED::IS_PED_INJURED(iVar23)) && !PED::IS_PED_RAGDOLL(iVar23)) && !PED::_0xB655DB7582AEC805(iVar23))
		{
			PED::_0xCB9401F918CB0F75(iVar23, "FreeRoamSpawn", true, 20);
		}
	}
	if ((bVar24 && bVar13) && aggregate.fme_challenges.func_1089(iVar23))
	{
		PHYSICS::_0x06AADE17334F7A40(iVar23, vVar6);
		TASK::_TASK_START_SCENARIO_IN_PLACE(iVar23, -493351432, -1, 0, 0, -1082130432 /* Float: -1f */, 0);
	}
	return true;
}

void func_964(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	struct<5> Var8;
	bool bVar13;
	var uVar14;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;

	bVar6 = true;
	if (func_1091(iParam0))
	{
		if (VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619))
		{
			vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
		}
	}
	else if (VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_620))
	{
		vVar0 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_620) };
	}
	if (((func_293(&Local_2026, &Var8) && func_313(&Var8, 556233122, iParam0, 0)) && func_313(&Var8, -110495140, iParam1, 0)) && func_313(&Var8, -556151360, 0, 0))
	{
		if (aggregate.fme_condor_egg.func_42(Var8, 1234220482, &bVar13, 0) && bVar13)
		{
			bVar6 = false;
		}
		else if (aggregate.fme_condor_egg.func_42(Var8, -19593823, &bVar13, 0) && bVar13)
		{
			bVar6 = false;
		}
		if (bVar6 && aggregate.fme_animal_tagging.func_143(Var8, 644136394, &uVar14, 0))
		{
			bVar6 = false;
		}
		if (bVar6)
		{
			if (aggregate.fme_animal_tagging.func_143(Var8, -252450326, &vVar17, 0))
			{
				vVar0 = { vVar17 };
			}
			if (aggregate.fme_animal_tagging.func_143(Var8, -727548384, &vVar20, 0))
			{
				vVar0 = { vVar0 + vVar20 };
			}
			if (aggregate.fme_animal_tagging.func_143(Var8, -36224614, &vVar20, 0))
			{
				vVar3 = { vVar3 + vVar20 };
			}
			if (aggregate.fme_animal_tagging.func_40(Var8, -1456038853, &uVar23, 0))
			{
				iVar7 = uVar23;
			}
		}
	}
	if (bVar6 && iVar7 == 0)
	{
		bVar6 = false;
	}
	if (bVar6)
	{
		func_262(1024);
		Local_2026.f_537.f_2 = iVar7;
		func_1202(vVar0, vVar3);
	}
	else
	{
		func_495(1024);
	}
}

void func_967(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = !func_1091(iParam0);
	switch (aggregate.camera_item.func_12(&Local_2026))
	{
		case -19759302:
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!aggregate.net_camp.func_517(iVar1, &Local_17, 1024))
				{
				}
				else if (!aggregate.net_camp.func_517(iVar1, &Local_17, 32))
				{
				}
				else if (aggregate.net_camp.func_517(iVar1, &Local_17, 64) != bVar0)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar1 /*12*/])))
				{
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_16[iVar1 /*12*/])))
				{
				}
				else
				{
					iVar2 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar1 /*12*/]));
					PED::DELETE_PED(&iVar2);
				}
				iVar1++;
			}
			break;
		case -409129282:
		default:
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (!aggregate.net_camp.func_517(iVar3, &Local_17, 128))
				{
				}
				else if (!aggregate.net_camp.func_517(iVar3, &Local_17, 2))
				{
				}
				else if (aggregate.net_camp.func_517(iVar3, &Local_17, 4) != bVar0)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar3 /*5*/])))
				{
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_257[iVar3 /*5*/])))
				{
				}
				else
				{
					iVar4 = NETWORK::NET_TO_OBJ(&(Local_17.f_257[iVar3 /*5*/]));
					OBJECT::DELETE_OBJECT(&iVar4);
				}
				iVar3++;
			}
			break;
	}
}

bool func_968(struct<5> Param0, int iParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!func_313(&Param0, 938546485, iParam5, 0))
	{
		return true;
	}
	aggregate.fme_condor_egg.func_42(Param0, 725091599, &bVar0, 0);
	if (!bVar0)
	{
		return true;
	}
	aggregate.fme_animal_tagging.func_40(Param0, -537439784, &iVar1, 0);
	iVar2 = iVar1;
	iVar3 = -1;
	aggregate.fme_supply_train.func_39(Param0, 957840570, &iVar3, 0);
	if (iVar3 < 0)
	{
		return true;
	}
	switch (iVar2)
	{
		case joaat("prop"):
		case joaat("vehicle"):
		case joaat("ped"):
			if (!func_498(iVar2, iVar3, &iVar4))
			{
				return true;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
			{
				return false;
			}
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				iVar5 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar3 /*12*/]));
				PED::DELETE_PED(&iVar5);
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar4))
			{
				iVar6 = NETWORK::NET_TO_VEH(&(Local_17.f_3[iVar3 /*4*/]));
				VEHICLE::DELETE_VEHICLE(&iVar6);
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar4))
			{
				iVar7 = NETWORK::NET_TO_OBJ(&(Local_17.f_278[iVar3 /*2*/]));
				OBJECT::DELETE_OBJECT(&iVar7);
			}
			break;
		case joaat("player"):
			return true;
		case 130495496:
			return true;
		default:
			return true;
	}
	return true;
}

bool func_970(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	*bParam6 = 0;
	*bParam4 = 0;
	bVar0 = aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 32);
	bVar1 = aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 64);
	if (!bVar0 && !bVar1)
	{
		if (!func_533(1))
		{
			return false;
		}
	}
	else if (!func_531())
	{
		return false;
	}
	if (bVar0 && !aggregate.fme_animal_tagging.func_134(4))
	{
		return false;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 8388608) && !aggregate.fme_challenges.func_1307(iParam0, 16777216))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(uParam1, 32))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		return false;
	}
	iVar2 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		if (!func_697((uParam1->f_16[iParam0 /*12*/])->f_2) || !PED::GET_PED_CONFIG_FLAG(iVar2, 11, false))
		{
			return false;
		}
		bVar4 = true;
	}
	*bParam5 = 0;
	switch ((uParam1->f_16[iParam0 /*12*/])->f_2)
	{
		case 401658241:
			if (!bVar0 && !aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 2))
			{
				return false;
			}
			if ((Local_17.f_16[iParam0 /*12*/])->f_3 == 45)
			{
				*bParam4 = 1;
			}
			if (!*bParam4 && BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) > 140f)
			{
				*bParam4 = 1;
			}
			break;
		case -2133983324:
		case -522830230:
		case -306837416:
		case -193064196:
		case 824585797:
		case joaat("driver"):
			*bParam5 = (aggregate.fme_animal_tagging.func_134(256) && !aggregate.fishing_core.func_34(&Local_17, 16));
			if ((!aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 2) && fParam3->f_202.f_60 != 5) && fParam3->f_202.f_60 != 6)
			{
				return false;
			}
			break;
		case 1566032419:
			if (!bVar0 && !bVar1)
			{
				return false;
			}
			else if (bVar0 && aggregate.net_camp.func_517(iParam0, &Local_17, 2048))
			{
				return false;
			}
			else if (bVar1 && !aggregate.net_camp.func_517(iParam0, &Local_17, 2048))
			{
				return false;
			}
			if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) > 50f)
			{
				*bParam4 = 1;
			}
			return true;
		case 1095997463:
			if (fParam3->f_10 != -19759302)
			{
				return false;
			}
			if ((aggregate.net_camp.func_517(iParam0, &Local_17, 32) || aggregate.net_camp.func_517(iParam0, &Local_17, 65536)) || aggregate.net_camp.func_517(iParam0, &Local_17, 131072))
			{
				*bParam6 = 1;
				return true;
			}
			if (func_1167(iVar2, &iVar3, 0) && iVar3 == PLAYER::PLAYER_PED_ID())
			{
				return false;
			}
			if (aggregate.net_coach_holdup.func_695(iParam0, 255))
			{
				return false;
			}
			switch (fParam3->f_202.f_60)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return false;
				default:
					break;
			}
			if ((((!bVar0 && !bVar1) && !aggregate.fme_animal_tagging.func_134(128)) && !bVar4) && PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return false;
			}
			return true;
		default:
			return false;
	}
	switch (fParam3->f_202.f_60)
	{
		case 1:
		case 3:
			if (!bVar4 && PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_971(int iParam0, var uParam1, var uParam2, float fParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = MAP::DOES_BLIP_EXIST(&(fParam3->f_202[iParam0]));
	if (bVar0)
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	bVar2 = aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 64);
	bVar3 = (aggregate.fme_animal_tagging.func_134(256) && !aggregate.fishing_core.func_34(&Local_17, 16));
	switch ((uParam1->f_16[iParam0 /*12*/])->f_2)
	{
		case 1566032419:
			if (bVar2 != aggregate.net_camp.func_517(iParam0, uParam1, 2048))
			{
				func_1203(iParam0, fParam3->f_202[iParam0], iVar1, 0, 0);
			}
			else
			{
				func_1204(fParam3->f_202[iParam0], iVar1);
			}
			break;
		case 1095997463:
			if (aggregate.camera_item.func_12(&Local_2026) == -19759302)
			{
				func_1205(iParam0, fParam3->f_202[iParam0], iVar1);
			}
			break;
		default:
			if (aggregate.net_camp.func_517(iParam0, &Local_17, 32768))
			{
				func_1203(iParam0, fParam3->f_202[iParam0], iVar1, 1, 0);
			}
			else
			{
				func_1203(iParam0, fParam3->f_202[iParam0], iVar1, 0, bVar3);
			}
			break;
	}
}

void func_972(int iParam0, bool bParam1)
{
	if (bParam1 && !aggregate.fme_challenges.func_1307(iParam0, 2048))
	{
		aggregate.net_assassination.func_458(iParam0, 2048);
		MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), 197772266);
	}
	else if (!bParam1 && aggregate.fme_challenges.func_1307(iParam0, 2048))
	{
		aggregate.net_assassination.func_458(iParam0, 2048);
		MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), 197772266);
	}
}

void func_973(int iParam0, bool bParam1)
{
	if (bParam1 && !aggregate.fme_challenges.func_1307(iParam0, 4194304))
	{
		aggregate.net_assassination.func_458(iParam0, 4194304);
		MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), -1186550032);
	}
	else if (!bParam1 && aggregate.fme_challenges.func_1307(iParam0, 4194304))
	{
		aggregate.net_assassination.func_458(iParam0, 4194304);
		MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), -1186550032);
	}
}

void func_974(int iParam0, bool bParam1)
{
	if (!bParam1 && aggregate.fme_challenges.func_1307(iParam0, 1024))
	{
		aggregate.net_assassination.func_458(iParam0, 1024);
		MAP::SET_BLIP_SPRITE(&(Local_2026.f_202[iParam0]), -1103135225, false);
	}
	else if (bParam1 && !aggregate.fme_challenges.func_1307(iParam0, 1024))
	{
		aggregate.net_assassination.func_458(iParam0, 1024);
		MAP::SET_BLIP_SPRITE(&(Local_2026.f_202[iParam0]), func_988(3), false);
	}
}

void func_975(int iParam0)
{
	if (aggregate.fme_challenges.func_1307(iParam0, 512))
	{
		return;
	}
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), 453356795);
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), -1636811933);
	MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), 1938496773);
	aggregate.net_assassination.func_458(iParam0, 256);
	aggregate.net_assassination.func_458(iParam0, 128);
	aggregate.net_assassination.func_458(iParam0, 512);
}

void func_977(int iParam0)
{
	if (aggregate.fme_challenges.func_1307(iParam0, 256))
	{
		return;
	}
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), -1636811933);
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), 1938496773);
	MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), 453356795);
	aggregate.net_assassination.func_458(iParam0, 128);
	aggregate.net_assassination.func_458(iParam0, 512);
	aggregate.net_assassination.func_458(iParam0, 256);
}

bool func_978(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (NETWORK::_0x255A5EF65EDA9167(iParam0) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		*iParam3 = iParam0;
		if (_NAMESPACE26::_0x3F59FE6F37869576(iParam0, PLAYER::PLAYER_ID()))
		{
			*bParam2 = 0;
			return true;
		}
		else
		{
			*bParam2 = 1;
			return false;
		}
	}
	if (func_1167(iParam1, &iVar0, 1))
	{
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			*bParam2 = 0;
		}
		*iParam3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam3))
		{
			*bParam2 = 0;
			return false;
		}
		if (!_NAMESPACE26::_0x3F59FE6F37869576(*iParam3, PLAYER::PLAYER_ID()))
		{
			*bParam2 = 1;
			return false;
		}
		*bParam2 = 0;
		return true;
	}
	*bParam2 = 0;
	return false;
}

void func_979(int iParam0)
{
	if (aggregate.fme_challenges.func_1307(iParam0, 128))
	{
		return;
	}
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), 453356795);
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), 1938496773);
	MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), -1636811933);
	aggregate.net_assassination.func_458(iParam0, 256);
	aggregate.net_assassination.func_458(iParam0, 512);
	aggregate.net_assassination.func_458(iParam0, 128);
}

void func_980(int iParam0, int iParam1)
{
	if (Local_2026.f_10 != -19759302)
	{
		return;
	}
	if (&Local_2026.f_202.f_30[iParam0] == iParam1)
	{
		return;
	}
	if (iParam1 == 255)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_2026.f_202[iParam0]), func_1206());
		MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), 723793771);
	}
	else
	{
		MAP::_0x9CB1A1623062F402(&(Local_2026.f_202[iParam0]), func_1207(func_1206(), iParam1));
		MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), 723793771);
	}
	Local_2026.f_202.f_30[iParam0] = iParam1;
}

void func_981(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !aggregate.fme_challenges.func_1307(iParam0, 131072))
	{
		aggregate.net_assassination.func_458(iParam0, 131072);
		if (bParam2)
		{
			MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), 1550066118);
		}
		else
		{
			MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), -662251075);
		}
	}
	else if (!bParam1 && aggregate.fme_challenges.func_1307(iParam0, 131072))
	{
		aggregate.net_assassination.func_458(iParam0, 131072);
		MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), 1550066118);
		MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), -662251075);
	}
}

void func_982(int iParam0, bool bParam1)
{
	if (bParam1 && aggregate.fme_challenges.func_1307(iParam0, 4096))
	{
		aggregate.net_assassination.func_458(iParam0, 4096);
		if (aggregate.fme_challenges.func_1307(iParam0, 131072))
		{
			MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), 1550066118);
			MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), -662251075);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202[iParam0]), 2096805056);
		}
	}
	else if (!bParam1 && !aggregate.fme_challenges.func_1307(iParam0, 4096))
	{
		aggregate.net_assassination.func_458(iParam0, 4096);
		if (aggregate.fme_challenges.func_1307(iParam0, 131072))
		{
			MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), 1550066118);
		}
		else
		{
			MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202[iParam0]), 2096805056);
		}
	}
}

bool func_983(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_531())
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iParam0 /*4*/])))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iParam0 /*4*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(uParam1, 524288))
	{
		return false;
	}
	if ((fParam3->f_202.f_60 == 5 && aggregate.net_camp.func_517(iParam0, &Local_17, 1)) || fParam3->f_202.f_60 == 6)
	{
		return false;
	}
	if (aggregate.camera_item.func_12(&Local_17) > 2)
	{
		return false;
	}
	if (Local_2026.f_10 != -19759302)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if ((Local_17.f_257[iVar1 /*5*/])->f_2 != iParam0)
			{
			}
			else if (aggregate.net_camp.func_517(iVar1, uParam1, 16))
			{
			}
			else if (!aggregate.net_camp.func_517(iVar1, uParam1, 8))
			{
			}
			else
			{
				return true;
			}
			iVar1++;
		}
		return false;
	}
	switch (fParam3->f_202.f_60)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			return false;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if ((Local_17.f_16[iVar1 /*12*/])->f_11 != iParam0)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar1 /*12*/])))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar1 /*12*/]));
			if (PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
			}
			else if (!PED::IS_PED_IN_VEHICLE(iVar2, iVar0, true))
			{
			}
			else
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

void func_984(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(&(fParam3->f_202.f_21[iParam0])))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iParam0 /*4*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iParam0 /*4*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = 1;
	fParam3->f_202.f_21[iParam0] = MAP::_0x23F74C2FDA6E7C61(func_1208(iVar1), iVar0);
	MAP::SET_BLIP_SPRITE(&(fParam3->f_202.f_21[iParam0]), func_988(iVar1), false);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(fParam3->f_202.f_21[iParam0]), func_985());
	MAP::_0x662D364ABF16DE2F(&(fParam3->f_202.f_21[iParam0]), 580546400);
	MAP::_0x662D364ABF16DE2F(&(fParam3->f_202.f_21[iParam0]), 231194138);
}

char* func_985()
{
	return "NET_CHU_BLIP_VEHICLE";
}

bool func_986(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	if (aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 32))
	{
		if (!func_531())
		{
			return false;
		}
		if (!aggregate.fme_animal_tagging.func_134(4))
		{
			return false;
		}
	}
	else if (aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 64))
	{
		if (!func_531())
		{
			return false;
		}
	}
	else if (!func_533(1))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(uParam1, 32))
	{
		return false;
	}
	if (aggregate.fme_escaped_convicts.func_738(iParam0, 16) && !aggregate.fme_escaped_convicts.func_738(iParam0, 32))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_257[iParam0 /*5*/])))
	{
		return false;
	}
	if ((aggregate.net_camp.func_517(iParam0, uParam1, 8) && !aggregate.fishing_core.func_34((*uParam2)[Local_2026.f_634 /*52*/], 64)) && aggregate.camera_item.func_12(&Local_17) <= 2)
	{
		return false;
	}
	if ((aggregate.net_camp.func_517(iParam0, uParam1, 2) || aggregate.net_camp.func_517(iParam0, uParam1, 256)) || aggregate.net_camp.func_517(iParam0, uParam1, 512))
	{
		return false;
	}
	if (aggregate.net_camp.func_517(iParam0, uParam1, 16))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_OBJ(&(uParam1->f_257[iParam0 /*5*/]));
	if (ENTITY::_0x61914209C36EFDDB(iVar0) == 5 && PED::_0x79443D56C8DF45EE(iVar0) == PLAYER::PLAYER_PED_ID())
	{
		return false;
	}
	if (aggregate.net_coach_holdup.func_695(iParam0, 255))
	{
		return false;
	}
	return true;
}

void func_987(int iParam0, int iParam1)
{
	if (MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_25[iParam0])))
	{
		return;
	}
	Local_2026.f_202.f_25[iParam0] = MAP::_0x23F74C2FDA6E7C61(-2086635932, iParam1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_2026.f_202.f_25[iParam0]), func_1209());
	MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202.f_25[iParam0]), -1636811933);
	MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202.f_25[iParam0]), 580546400);
	MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202.f_25[iParam0]), 231194138);
	if (aggregate.fme_animal_tagging.func_134(262144))
	{
		MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202.f_25[iParam0]), 231194138);
	}
}

int func_988(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1012165077 /* GXTEntry: "Wagon" */;
		case 2:
		case 3:
			return 1865251988;
		case 4:
			return 1595806706;
		case 5:
			return -1103135225;
		default:
			break;
	}
	return 0;
}

void func_989(int iParam0)
{
	if (aggregate.fme_escaped_convicts.func_738(iParam0, 4))
	{
		return;
	}
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202.f_25[iParam0]), -1636811933);
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202.f_25[iParam0]), 453356795);
	MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202.f_25[iParam0]), 1938496773);
	aggregate.fme_hot_property.func_964(iParam0, 1);
	aggregate.fme_hot_property.func_964(iParam0, 2);
	aggregate.fme_hot_property.func_964(iParam0, 4);
}

bool func_990(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2026.f_634;
	}
	return MISC::_0x8F4F050054005C27(&((Local_361[iParam1 /*52*/])->f_2), iParam0);
}

void func_991(int iParam0)
{
	if (aggregate.fme_escaped_convicts.func_738(iParam0, 2))
	{
		return;
	}
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202.f_25[iParam0]), -1636811933);
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202.f_25[iParam0]), 1938496773);
	MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202.f_25[iParam0]), 453356795);
	aggregate.fme_hot_property.func_964(iParam0, 1);
	aggregate.fme_hot_property.func_964(iParam0, 4);
	aggregate.fme_hot_property.func_964(iParam0, 2);
}

void func_992(int iParam0)
{
	if (aggregate.fme_escaped_convicts.func_738(iParam0, 1))
	{
		return;
	}
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202.f_25[iParam0]), 453356795);
	MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202.f_25[iParam0]), 1938496773);
	MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202.f_25[iParam0]), -1636811933);
	aggregate.fme_hot_property.func_964(iParam0, 2);
	aggregate.fme_hot_property.func_964(iParam0, 4);
	aggregate.fme_hot_property.func_964(iParam0, 1);
}

void func_993(int iParam0, int iParam1)
{
	if (Local_2026.f_10 != -409129282)
	{
		return;
	}
	if (&Local_2026.f_202.f_30[iParam0] == iParam1)
	{
		return;
	}
	if (iParam1 == 255)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_2026.f_202.f_25[iParam0]), func_1209());
		MAP::_0xB059D7BD3D78C16F(&(Local_2026.f_202.f_25[iParam0]), 723793771);
	}
	else
	{
		MAP::_0x9CB1A1623062F402(&(Local_2026.f_202.f_25[iParam0]), func_1207(func_1209(), iParam1));
		MAP::_0x662D364ABF16DE2F(&(Local_2026.f_202.f_25[iParam0]), 723793771);
	}
	Local_2026.f_202.f_30[iParam0] = iParam1;
}

char* func_994()
{
	return "NET_CHU_BLIP_DROPOFF";
}

bool func_996(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int* iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	var uVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	bool bVar14;
	int iVar15;
	int iVar16;

	if (func_1210(iParam0) && !aggregate.fme_animal_tagging.func_134(1))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(1) && !aggregate.fme_animal_tagging.func_134(2))
	{
		return false;
	}
	if (bParam2)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			if (iParam1 != 1)
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(64))
			{
				return false;
			}
			if (!aggregate.fme_animal_tagging.func_134(4))
			{
				return false;
			}
			if (aggregate.fishing_core.func_107(Local_2026.f_202.f_57))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_21[iVar0])))
				{
				}
				else
				{
					func_1211(1, iParam5);
					return true;
				}
				iVar0++;
			}
			return false;
		case 2:
			if (iParam1 != 1)
			{
				return false;
			}
			if (!aggregate.fme_animal_tagging.func_134(64))
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(8))
			{
				return false;
			}
			if (aggregate.camera_item.func_12(&Local_17) > 1)
			{
				return false;
			}
			if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 8))
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(256))
			{
				if (!func_1212(&Local_17, &Local_2026))
				{
					return false;
				}
			}
			else if (!func_1004(&Local_17, &Local_2026, joaat("driver")))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_21[iVar0])))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_3[iVar0 /*4*/])))
				{
				}
				else
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(&(Local_17.f_3[iVar0 /*4*/])), false, false) };
					if (!func_1213(vVar5, 2f, 80f))
					{
					}
					else
					{
						func_1211(1, iParam5);
						return true;
					}
				}
				iVar0++;
			}
			return false;
		case 3:
			if (iParam1 != 1)
			{
				return false;
			}
			if (aggregate.camera_item.func_12(&Local_2026) != -409129282)
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(16))
			{
				return false;
			}
			if (!func_733(-1, 1))
			{
				return false;
			}
			return true;
		case 4:
			if (iParam1 != 1)
			{
				return false;
			}
			if (aggregate.camera_item.func_12(&Local_2026) != -19759302)
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(32))
			{
				return false;
			}
			if (!func_733(-1, 1))
			{
				return false;
			}
			return true;
		case 5:
			if (iParam1 != 0)
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(128) || (aggregate.fme_animal_tagging.func_134(8388608) && aggregate.fme_animal_tagging.func_563(PLAYER::PLAYER_ID(), 1, 1)))
			{
				return false;
			}
			if (!func_533(0))
			{
				return false;
			}
			if (!func_1214(&uVar4))
			{
				return false;
			}
			if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_316) || !_NAMESPACE26::_0x0F99F6436528A089(Local_17.f_316))
			{
				if (!func_59(&Local_361, 32, 0))
				{
					return false;
				}
			}
			switch (Local_2026.f_10)
			{
				case -409129282:
					if (!func_732(&Local_17, 8, 1))
					{
						return false;
					}
					func_1211(2, iParam5);
					break;
				case -19759302:
					if (!func_733(-1, 1))
					{
						return false;
					}
					func_1211(3, iParam5);
					break;
				default:
					return false;
			}
			return true;
		case 6:
			if (iParam1 != 0)
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(256))
			{
				return false;
			}
			if (!aggregate.fme_animal_tagging.func_134(128))
			{
				return false;
			}
			if (Local_2026.f_632 > 50f)
			{
				return false;
			}
			if (!func_533(1))
			{
				return false;
			}
			if ((!aggregate.fme_animal_tagging.func_563(PLAYER::PLAYER_ID(), 1, 0) || !func_521(PLAYER::PLAYER_ID(), &fVar3, 0)) || fVar3 > 50f)
			{
				return false;
			}
			if (!func_1214(&uVar4))
			{
				return false;
			}
			if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_316) || !_NAMESPACE26::_0x0F99F6436528A089(Local_17.f_316))
			{
				if (!func_59(&Local_361, 32, 0))
				{
					return false;
				}
			}
			switch (Local_2026.f_10)
			{
				case -409129282:
					if (!func_732(&Local_17, 8, 1))
					{
						return false;
					}
					func_1211(2, iParam5);
					break;
				case -19759302:
					if (!func_733(-1, 1))
					{
						return false;
					}
					func_1211(3, iParam5);
					break;
				default:
					return false;
			}
			return true;
		case 7:
			if (aggregate.fme_animal_tagging.func_134(4))
			{
				return false;
			}
			if (!aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 64))
			{
				return false;
			}
			iVar8 = PLAYER::PLAYER_ID();
			if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 32768))
			{
				*iParam4 = iVar8;
			}
			else
			{
				*iParam4 = 255;
				iVar9 = _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iVar8));
				iVar1 = 0;
				while (iVar1 < 32)
				{
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
					}
					else if (!aggregate.fishing_core.func_34(Local_361[iVar1 /*52*/], 64))
					{
					}
					else
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
						if (iVar2 == iVar8)
						{
							iVar10++;
						}
						else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
						{
						}
						else if (!_NAMESPACE26::_0x3F59FE6F37869576(iVar8, iVar2))
						{
						}
						else
						{
							iVar10++;
							if (!aggregate.fishing_core.func_34(Local_361[iVar1 /*52*/], 32768))
							{
							}
							else
							{
								*iParam4 = iVar2;
							}
							else
							{
								iVar1++;
							}
							if (iVar10 < iVar9)
							{
								return false;
							}
							else if (iVar10 == iVar9 && *iParam4 == 255)
							{
								*iParam4 = iVar8;
							}
							switch (Local_2026.f_10)
							{
								case -409129282:
									func_1211(4, iParam5);
									break;
								case -19759302:
									func_1211(5, iParam5);
									break;
								default:
									return false;
							}
							return true;
							if (aggregate.camera_item.func_12(&Local_2026) != -19759302)
							{
								return false;
							}
							if (aggregate.fme_animal_tagging.func_134(524288))
							{
								return false;
							}
							if (!func_837(255))
							{
								return false;
							}
							if (iParam1 == 1)
							{
								if (!VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_619))
								{
									return false;
								}
								vVar11 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_619) };
							}
							else if (iParam1 == 2)
							{
								if (!VOLUME::_0x92A78D0BEDB332A3(Local_2026.f_620))
								{
									return false;
								}
								vVar11 = { VOLUME::_0xF70F00013A62F866(Local_2026.f_620) };
							}
							else
							{
								return false;
							}
							if (aggregate.blackwater.func_175(Global_36, vVar11) > 30f)
							{
								return false;
							}
							if (ENTITY::IS_ENTITY_DEAD(Global_35))
							{
								return false;
							}
							if (!PED::IS_PED_ON_MOUNT(Global_35))
							{
								iVar15 = 0;
								while (iVar15 < 20)
								{
									if ((Local_17.f_16[iVar15 /*12*/])->f_2 != 1095997463)
									{
									}
									else if (!aggregate.net_coach_holdup.func_695(iVar15, 255))
									{
									}
									else if (!func_438(iVar15, &iVar16, 1, 0))
									{
									}
									else if (ENTITY::_0x61914209C36EFDDB(iVar16) != 7)
									{
									}
									else
									{
										bVar14 = true;
									}
									else
									{
										iVar15++;
									}
								}
								if (!bVar14)
								{
									return false;
								}
							}
							return true;
							return false;
						}
					}
				}
			}
			default:
				break;
	}
}

int func_997(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_998(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_999(int iParam0)
{
	return 10000;
}

char* func_1000(int iParam0, int iParam1, char* sParam2)
{
	bool bVar0;

	bVar0 = aggregate.fme_animal_tagging.func_134(256);
	switch (iParam0)
	{
		case 1:
			switch (Local_2026.f_10)
			{
				case -19759302:
					if (Local_17.f_321 < 2)
					{
						if (bVar0)
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_STATIONARY", sParam2);
						}
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP", sParam2);
					}
					if (bVar0)
					{
						if (func_632())
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_STATIONARY", sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_STATIONARY_S", sParam2);
						}
					}
					if (func_632())
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL", sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_S", sParam2);
					}
					break;
				case -409129282:
					if (Local_17.f_321 < 2)
					{
						if (bVar0)
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_STATIONARY", sParam2);
						}
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY", sParam2);
					}
					if (bVar0)
					{
						if (func_632())
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_STATIONARY", sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_STATIONARY_S", sParam2);
						}
					}
					if (func_632())
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL", sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_S", sParam2);
					}
					break;
			}
			return "";
		case 2:
			if (!func_632())
			{
				if (bVar0)
				{
					return "NET_CHU_HELP_STOP_COACH_STATIONARY";
				}
				return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_STOP_COACH", sParam2);
			}
			if (bVar0)
			{
				return "NET_CHU_HELP_STOP_COACH_PLURAL_STATIONARY";
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_CHU_HELP_STOP_COACH_PLURAL", sParam2);
		case 3:
			return "NET_CHU_HELP_ROB";
		case 4:
			if (Local_17.f_321 < 2)
			{
				return "NET_CHU_HELP_LASSO_VIP";
			}
			return "NET_CHU_HELP_LASSO_VIP_PLURAL";
		case 5:
		case 6:
			switch (Local_2026.f_10)
			{
				case -19759302:
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_PVP_KIDNAP", func_1216(joaat("COLOR_RED")), sParam2);
				case -409129282:
					return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_PVP_ROBBERY", func_1216(joaat("COLOR_RED")), sParam2);
				default:
					break;
			}
			return "";
		case 7:
			switch (Local_2026.f_10)
			{
				case -19759302:
					if (iParam1 == PLAYER::PLAYER_ID())
					{
						if (Local_17.f_321 < 2)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_SELF", func_1216(joaat("COLOR_RED")), sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_PLURAL_SELF", func_1216(joaat("COLOR_RED")), sParam2);
						}
					}
					else if (Local_17.f_321 < 2)
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP", func_1217(iParam1, -963477619), func_1216(joaat("COLOR_RED")), sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_PLURAL", func_1217(iParam1, -963477619), func_1216(joaat("COLOR_RED")), sParam2);
					}
					break;
				case -409129282:
					if (iParam1 == PLAYER::PLAYER_ID())
					{
						if (Local_17.f_322 < 2)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_SELF", func_1216(joaat("COLOR_RED")), sParam2);
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_PLURAL_SELF", func_1216(joaat("COLOR_RED")), sParam2);
						}
					}
					else if (Local_17.f_322 < 2)
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY", func_1217(iParam1, -963477619), func_1216(joaat("COLOR_RED")), sParam2);
					}
					else
					{
						return MISC::_CREATE_VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_PLURAL", func_1217(iParam1, -963477619), func_1216(joaat("COLOR_RED")), sParam2);
					}
					break;
			}
			return "";
		case 8:
			return "NET_CHU_HELP_DELIVER_PED_ON_MOUNT";
		default:
			break;
	}
	return "";
}

var func_1001(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	char* sVar3;

	iVar0 = func_1218(iParam0, 1);
	bVar2 = aggregate.fme_animal_tagging.func_563(PLAYER::PLAYER_ID(), 1, 1);
	if (bVar2 || &Global_1103536->f_5561.f_2[iVar0] < 5)
	{
		if (bVar2)
		{
			sVar3 = "GFH_HELP_PVP_NEARBY_DEFENSIVE";
		}
		else
		{
			switch (iParam0)
			{
				case joaat("attack"):
					sVar3 = "GFH_HELP_PVP_NEARBY_ATTACK";
					break;
				case joaat("defend"):
					sVar3 = "GFH_HELP_PVP_NEARBY_DEFEND";
					break;
				case 404851220:
					sVar3 = "GFH_HELP_PVP_NEARBY_DELIVER";
					break;
			}
		}
		if (!MAP::DOES_BLIP_EXIST(iParam1))
		{
			uVar1 = aggregate.camera_item.func_73(MISC::_CREATE_VAR_STRING(2, sVar3), 10000, 0, 0, 0, 1);
		}
		else
		{
			uVar1 = aggregate.camera_item.func_73(MISC::_CREATE_VAR_STRING(2, sVar3, iParam1), 10000, 0, 0, 0, 1);
		}
		if (bVar2)
		{
		}
		else
		{
			Global_1103536->f_5561.f_2[iVar0] = &Global_1103536->f_5561.f_2[iVar0] + 1;
		}
	}
	return uVar1;
}

void func_1002(char* sParam0, int iParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (bParam2)
	{
		aggregate.binoculars.func_17(1);
	}
	Local_2026.f_202.f_59 = aggregate.camera_item.func_73(sParam0, iParam1, 0, 0, 0, 1);
}

bool func_1003(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 64;
			return true;
		case 2:
			*iParam1 = 8;
			return true;
		case 4:
			*iParam1 = 32;
			return true;
		case 3:
			*iParam1 = 16;
			return true;
		case 5:
			if (aggregate.fme_animal_tagging.func_563(PLAYER::PLAYER_ID(), 1, 1))
			{
				*iParam1 = 8388608;
			}
			else
			{
				*iParam1 = 128;
			}
			return true;
		case 6:
			*iParam1 = 256;
			return true;
		case 8:
			*iParam1 = 524288;
			return true;
		case 7:
			*iParam1 = 4;
			return true;
		default:
			break;
	}
	return false;
}

bool func_1004(var uParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { aggregate.camera_item.func_108(PLAYER::PLAYER_ID()) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if ((uParam0->f_16[iVar4 /*12*/])->f_2 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar4 /*12*/])))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(&(uParam0->f_16[iVar4 /*12*/]));
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > 80f)
			{
			}
			else
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

bool func_1005(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175((uParam0->f_16[iVar0 /*12*/])->f_4, iParam2))
		{
		}
		else if (aggregate.aberdeenpigfarm.func_175((uParam0->f_16[iVar0 /*12*/])->f_4, iParam3))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1006(bool bParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;

	*bParam0 = 1;
	iVar2 = PLAYER::PLAYER_ID();
	bVar3 = true;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if ((aggregate.net_camp.func_517(iVar0, &Local_17, 32) || aggregate.net_camp.func_517(iVar0, &Local_17, 65536)) || aggregate.net_camp.func_517(iVar0, &Local_17, 131072))
		{
		}
		else
		{
			bVar3 = false;
			if ((Local_17.f_16[iVar0 /*12*/])->f_7 == 255)
			{
				*bParam0 = 0;
			}
			else if ((Local_17.f_16[iVar0 /*12*/])->f_7 == iVar2 && !aggregate.net_coach_holdup.func_695(iVar0, 255))
			{
				*bParam0 = 0;
			}
			else if (!func_1009((Local_17.f_16[iVar0 /*12*/])->f_7, &uVar1))
			{
				*bParam0 = 0;
			}
			else if (!_NAMESPACE26::_0x3F59FE6F37869576((Local_17.f_16[iVar0 /*12*/])->f_7, iVar2))
			{
				*bParam0 = 0;
				return true;
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		*bParam0 = 0;
	}
	return false;
}

bool func_1007()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!aggregate.net_camp.func_517(iVar0, &Local_17, 128))
		{
		}
		else if (aggregate.net_camp.func_517(iVar0, &Local_17, 2))
		{
		}
		else if (aggregate.net_camp.func_517(iVar0, &Local_17, 4))
		{
		}
		else if (aggregate.net_camp.func_517(iVar0, &Local_17, 256) || aggregate.net_camp.func_517(iVar0, &Local_17, 512))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1008(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;

	*bParam0 = 1;
	iVar1 = PLAYER::PLAYER_ID();
	bVar3 = true;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((((!aggregate.net_camp.func_517(iVar0, &Local_17, 128) || aggregate.net_camp.func_517(iVar0, &Local_17, 2)) || aggregate.net_camp.func_517(iVar0, &Local_17, 16)) || aggregate.net_camp.func_517(iVar0, &Local_17, 256)) || aggregate.net_camp.func_517(iVar0, &Local_17, 512))
		{
		}
		else
		{
			bVar3 = false;
			if ((Local_17.f_257[iVar0 /*5*/])->f_3 == 255)
			{
				*bParam0 = 0;
			}
			else if (!func_1009((Local_17.f_257[iVar0 /*5*/])->f_3, &uVar2))
			{
				*bParam0 = 0;
			}
			else if (!_NAMESPACE26::_0x3F59FE6F37869576((Local_17.f_257[iVar0 /*5*/])->f_3, iVar1))
			{
				*bParam0 = 0;
				return true;
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		*bParam0 = 0;
	}
	return false;
}

bool func_1009(int iParam0, var uParam1)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	*uParam1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	return true;
}

char* func_1010(bool bParam0)
{
	switch (aggregate.camera_item.func_12(&Local_2026))
	{
		case -19759302:
			if (bParam0)
			{
				return "NET_CHU_OBJ_GO_TO_VIP_S";
			}
			return "NET_CHU_OBJ_GO_TO_VIP";
		default:
			break;
	}
	if (bParam0)
	{
		return "NET_CHU_OBJ_GO_TO_PASSENGER_S";
	}
	return "NET_CHU_OBJ_GO_TO_PASSENGER";
}

char* func_1011(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_GO_TO_COACH";
	}
	return "NET_CHU_OBJ_GO_TO_COACH_PLURAL";
}

char* func_1012(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_STOP_COACH";
	}
	return "NET_CHU_OBJ_STOP_COACH_PLURAL";
}

char* func_1013(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_KILL_GUARDS_STATIONARY";
	}
	return "NET_CHU_OBJ_KILL_GUARDS";
}

char* func_1014()
{
	return "NET_CHU_OBJ_GET_CASH";
}

char* func_1015(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_HOGTIE_S";
	}
	return "NET_CHU_OBJ_HOGTIE";
}

char* func_1016(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROPOFF_KIDNAP_S_CARRY", func_1221());
	}
	if (bParam0)
	{
		return "NET_CHU_OBJ_DROPOFF_KIDNAP_S";
	}
	return "NET_CHU_OBJ_DROPOFF_KIDNAP";
}

char* func_1017(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_SECURE_BAG";
	}
	return "NET_CHU_OBJ_SECURE_BAGS";
}

char* func_1018(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (bParam1)
		{
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TURN_IN_BAG_CARRY", func_1221());
		}
		return "NET_CHU_OBJ_TURN_IN_BAG_S";
	}
	if (bParam1)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TURN_IN_BAGS_CARRY", func_1221());
	}
	return "NET_CHU_OBJ_TURN_IN_BAG";
}

char* func_1019(float fParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	char* sVar1;

	switch (fParam0->f_10)
	{
		case -19759302:
			func_633(bParam4, &uVar0, iParam2, iParam3);
			if (*bParam4)
			{
				sVar1 = func_1217(*iParam2, joaat("COLOR_PURE_WHITE"));
			}
			else
			{
				sVar1 = func_1222(*iParam3, joaat("COLOR_PURE_WHITE"));
			}
			if (iParam1 || *bParam4)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_KIDNAP_S", sVar1);
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_KIDNAP", sVar1);
		case -409129282:
			func_634(bParam4, &uVar0, iParam2, iParam3);
			if (*bParam4)
			{
				sVar1 = func_1217(*iParam2, joaat("COLOR_PURE_WHITE"));
			}
			else
			{
				sVar1 = func_1222(*iParam3, joaat("COLOR_PURE_WHITE"));
			}
			if (iParam1 || *bParam4)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_BAGS_S", sVar1);
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_BAGS", sVar1);
		default:
			break;
	}
	return "";
}

char* func_1020()
{
	switch (Local_2026.f_10)
	{
		case -19759302:
			return "NET_CHU_OBJ_PVP_STEAL_KIDNAP_MULTI";
		case -409129282:
			return "NET_CHU_OBJ_PVP_STEAL_BAGS_MULTI";
		default:
			break;
	}
	return "";
}

char* func_1021(float fParam0, bool bParam1)
{
	switch (fParam0->f_10)
	{
		case -19759302:
			if (bParam1)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_DROPOFF_KIDNAP_S", func_1221());
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_DROPOFF_KIDNAP", func_1221());
		case -409129282:
			if (bParam1)
			{
				return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_TURN_IN_BAG", func_1221());
			}
			return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_TEAM_TURN_IN_BAGS", func_1221());
		default:
			break;
	}
	return "";
}

char* func_1022(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_TAKE_BAG";
	}
	return "NET_CHU_OBJ_TAKE_BAGS";
}

char* func_1023()
{
	return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROP_KIDNAP", func_1221());
}

char* func_1024(bool bParam0)
{
	if (bParam0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROP_BAG", func_1221());
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_CHU_OBJ_DROP_BAGS", func_1221());
}

char* func_1026()
{
	return "NET_CHU_NAME";
}

char* func_1027(bool bParam0)
{
	switch (aggregate.camera_item.func_12(&Local_2026))
	{
		case -19759302:
			if (bParam0)
			{
				return "NET_CHU_TOAST_START_BODY_KIDNAP";
			}
			if (func_632())
			{
				return "NET_CHU_TOAST_START_BODY_KIDNAP_PLURAL";
			}
			return "NET_CHU_TOAST_START_BODY_KIDNAP_PLURAL_S";
		case -409129282:
		default:
			break;
	}
	if (func_632())
	{
		return "NET_CHU_TOAST_START_BODY_ROBBERY_PLURAL";
	}
	return "NET_CHU_TOAST_START_BODY_ROBBERY";
}

int func_1028(char* sParam0, char* sParam1)
{
	var uVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	uVar0 = aggregate.fme_animal_tagging.func_723(sParam0, sParam1, 7500, aggregate.net_assassination.func_1149(), aggregate.fme_animal_tagging.func_720(), 0, 1, 1);
	return uVar0;
}

char* func_1029(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GEM_GFH_OUTRO_TITLE_OVER";
		case 1:
			return "GEM_GFH_OUTRO_TITLE_PASSED";
		case 2:
			return "GEM_GFH_OUTRO_TITLE_FAILED";
		default:
			break;
	}
	return "";
}

char* func_1031(bool bParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (aggregate.fishing_core.func_34(Local_361[Local_2026.f_634 /*52*/], 8388608))
	{
		if (aggregate.fme_animal_tagging.func_134(2048))
		{
			return "NET_CHU_TOAST_END_BODY_ABANDON_DISBAND_POSSE";
		}
		else if (aggregate.fme_animal_tagging.func_134(4096))
		{
			return "NET_CHU_TOAST_END_BODY_ABANDON_LEFT_POSSE";
		}
		else if (aggregate.fme_animal_tagging.func_134(1024))
		{
			return "NET_CHU_TOAST_END_BODY_ABANDON_POSSE";
		}
		return "NET_CHU_TOAST_END_BODY_ABANDON";
	}
	iVar0 = func_1227();
	switch (iVar0)
	{
		case 1:
			func_209(&sVar2, &iVar3);
			switch (aggregate.camera_item.func_12(&Local_2026))
			{
				case -19759302:
					if (iVar3 == 1)
					{
						return "NET_CHU_TOAST_END_BODY_WON_KIDNAP";
					}
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_WON_KIDNAP_PLURAL", sVar2, iVar3);
				case -409129282:
					if (iVar3 == 1)
					{
						return "NET_CHU_TOAST_END_BODY_WON_ROBBERY";
					}
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_WON_ROBBERY_PLURAL", sVar2, iVar3);
				default:
					break;
			}
			return "";
		case 0:
			func_209(&sVar2, &iVar3);
			switch (aggregate.camera_item.func_12(&Local_2026))
			{
				case -19759302:
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_OVER_KIDNAP", sVar2, iVar3);
				case -409129282:
					return MISC::_CREATE_VAR_STRING(2, "NET_CHU_TOAST_END_BODY_OVER_ROBBERY", sVar2, iVar3);
				default:
					break;
			}
			return "";
		case 2:
			if (aggregate.fishing_core.func_34(&Local_17, 64))
			{
				return "NET_CHU_TOAST_END_BODY_EXPIRED";
			}
			switch (aggregate.camera_item.func_12(&Local_2026))
			{
				case -19759302:
					if (func_367(0) == 0)
					{
						if (bParam0)
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP";
						}
						else
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PLURAL";
						}
					}
					else if (func_1228(&iVar4, &iVar5, &uVar1))
					{
						if (bParam0)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP", func_1229(iVar4, iVar5, -5208416));
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP_PLURAL", func_1229(iVar4, iVar5, -5208416));
						}
					}
					else if (bParam0)
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP_R";
					}
					else
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP_R_PLUR";
					}
					break;
				case -409129282:
					if (func_367(0) == 0)
					{
						if (bParam0)
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY";
						}
						else
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PLURAL";
						}
					}
					else if (func_1228(&iVar4, &iVar5, &uVar1))
					{
						if (bParam0)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP", func_1229(iVar4, iVar5, -5208416));
						}
						else
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP_PLURAL", func_1229(iVar4, iVar5, -5208416));
						}
					}
					else if (bParam0)
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP_R";
					}
					else
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP_R_PLUR";
					}
					break;
				default:
					return "";
			}
			break;
	}
	return "";
}

int func_1033(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	char* sVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	_NAMESPACE71::_0xDD1232B332CBB9E7(11, 1, 0);
	if (iParam2 <= 0)
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_FAILED";
	}
	else if (iParam2 == iParam3)
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_PASSED";
	}
	else
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_OVER";
	}
	if (bParam4)
	{
		uVar0 = aggregate.fme_animal_tagging.func_722(sVar1, sParam0, sParam1, 7500, aggregate.net_assassination.func_1149(), aggregate.fme_animal_tagging.func_764(), 0, 1, 1, 1);
	}
	else
	{
		uVar0 = aggregate.fme_animal_tagging.func_723(sVar1, sParam1, 7500, aggregate.net_assassination.func_1149(), aggregate.fme_animal_tagging.func_764(), 0, 1, 1);
	}
	return uVar0;
}

char* func_1051(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) && _NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		return func_1222(iVar0, iParam1);
	}
	return func_1217(iParam0, iParam1);
}

void func_1053(int iParam0)
{
	aggregate.fm_deathmatch_controller.func_2461(iParam0);
	PED::_0xC9151483CC06A414(iParam0);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, -2014043657 /* GXTEntry: "Weathered Chestnut & Charcoal" */);
			break;
		case 1:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, -829673694 /* GXTEntry: "Weathered Charcoal & Ash" */);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			PED::_0xDF631E4BCE1B1FC4(iParam0, -273475295, 0, 0);
			break;
		case 1:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, 414935856 /* GXTEntry: "Weathered Charcoal" */);
			break;
		case 2:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, 317775775 /* GXTEntry: "Weathered Coffee" */);
			break;
		case 3:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, 457437253 /* GXTEntry: "Weathered Russet" */);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			aggregate.butchercreek.func_191(iParam0, 1);
			break;
		case 1:
			aggregate.butchercreek.func_191(iParam0, 2);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, 1351319737 /* GXTEntry: "Color Combination One" */);
			break;
		case 1:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, 1741336375 /* GXTEntry: "Color Combination Two" */);
			break;
		case 2:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, -340478195 /* GXTEntry: "Color Combination Three" */);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			PED::_0xDF631E4BCE1B1FC4(iParam0, -2142954459, 0, 0);
			break;
		case 1:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, -288915854 /* GXTEntry: "Weathered Dark Oak" */);
			break;
		case 2:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, 720369354 /* GXTEntry: "Weathered Tan" */);
			break;
		case 3:
			aggregate.fm_deathmatch_controller.func_2843(iParam0, 491707272 /* GXTEntry: "Weathered Walnut" */);
			break;
	}
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, true);
}

bool func_1056(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(&Local_2026, &Var0, iParam0) && aggregate.fme_animal_tagging.func_40(Var0, -1339596857, &uVar5, 0))
	{
		*iParam1 = uVar5;
		return true;
	}
	return false;
}

bool func_1057(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2026, &Var0, iParam0) && aggregate.fme_supply_train.func_39(Var0, 100469918, iParam1, 0))
	{
		return true;
	}
	return false;
}

int func_1058()
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<5> Var10;
	int iVar15;

	if (((func_293(&Local_2026, &Var0) && func_313(&Var0, 419371455, 0, 0)) && func_313(&Var0, -2072295915, 0, 0)) && func_1248(Var0) > 0)
	{
		iVar8 = func_1248(Var0);
		aggregate.medium_update.func_483(&Var0);
		func_293(&Local_2026, &Var0);
		func_313(&Var0, 419371455, 0, 0);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			Var10 = { Var0 };
			if (!func_313(&Var10, -640241378, iVar7, 0))
			{
			}
			else
			{
				if (!aggregate.fme_animal_tagging.func_142(Var10, 705932105, &fVar6, 0))
				{
					fVar6 = 1f;
				}
				fVar6 = aggregate.coffee_drinking.func_45(fVar6, 0f, 1f);
				fVar6 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar6);
				if (fVar6 < fVar5)
				{
				}
				else if (!aggregate.fme_animal_tagging.func_40(Var10, 751620374, &iVar9, 0))
				{
				}
				else
				{
					fVar5 = fVar6;
				}
			}
			iVar7++;
		}
		iVar15 = iVar9;
		if (WEAPON::IS_WEAPON_VALID(iVar15))
		{
			return iVar15;
		}
	}
	return func_1249();
}

bool func_1059(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (bParam1)
	{
		case joaat("group_sniper"):
		case -1101297303:
		case -594562071:
		case joaat("group_pistol"):
		case joaat("group_shotgun"):
		case joaat("group_rifle"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(bParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(bParam1))
			{
				return bParam1;
			}
			bVar0 = bParam1;
			if ((WEAPON::_0x705BE297EEBDB95D(bVar0) || WEAPON::_0x959383DCD42040DA(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, WEAPON::_0x89CF5FF3D363311E(bVar0), 128);
				iVar2 = WEAPON::_0xD42514C182121C23(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26387 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (aggregate.binoculars.func_72(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_26387)
						{
							if (aggregate.binoculars.func_72(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (aggregate.aberdeenpigfarm.func_45() == -1 && !aggregate.doc_book.func_173(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, 0) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_26387) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(bParam1, iParam7, iParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = joaat("weapon_unarmed");
			}
		}
	}
	if (bVar0 == joaat("weapon_unarmed") && bParam1 == joaat("weapon_unarmed"))
	{
		return bVar0;
	}
	else if (bVar0 == joaat("weapon_unarmed"))
	{
		switch (bParam1)
		{
			case -1101297303:
			case joaat("group_pistol"):
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
			case joaat("group_sniper"):
			case -594562071:
			case joaat("group_shotgun"):
			case joaat("group_rifle"):
				if (aggregate.doc_book.func_173(joaat("weapon_repeater_carbine")))
				{
					bVar0 = joaat("weapon_repeater_carbine");
				}
				else
				{
					bVar0 = joaat("weapon_revolver_cattleman");
				}
				break;
			default:
				bVar0 = joaat("weapon_revolver_cattleman");
				break;
		}
	}
	else if (bVar0 == joaat("weapon_melee_lantern") && iParam0 == Global_35)
	{
		bVar0 = joaat("weapon_melee_davy_lantern");
	}
	if (bParam9 < 0)
	{
		if (iParam0 != Global_35 && aggregate.binoculars.func_72(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &bParam9, bVar0);
			if (bParam9 < 0)
			{
				bParam9 = false;
			}
		}
		else if ((!WEAPON::_0x959383DCD42040DA(bVar0) && bVar0 != joaat("weapon_unarmed")) && !WEAPON::_0x79407D33328286C6(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::_0xD3750CCC00635FC2(bVar0) * 3;
			bParam9 = (iVar24 - iVar23);
			if (bParam9 < 0)
			{
				bParam9 = false;
			}
		}
		else
		{
			bParam9 = false;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		aggregate.net_coach_holdup.func_1251(bVar0, bParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		aggregate.fm_mission_controller.func_7263(iParam0, &bVar0, &fVar25);
		bVar0 = WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, bVar0, bParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (aggregate.doc_book.func_184(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, iParam4);
	}
	return bVar0;
}

int func_1062(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_16[iParam0 /*12*/])))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(&(uParam1->f_16[iParam0 /*12*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!PED::GET_PED_CONFIG_FLAG(iVar0, 11, true))
	{
		return 0;
	}
	return 1;
}

void func_1063(int iParam0, var uParam1, int iParam2)
{
	if (aggregate.net_coach_holdup.func_557(iParam0, uParam1) == iParam2)
	{
		return;
	}
	(uParam1->f_16[iParam0 /*12*/])->f_2 = iParam2;
	(uParam1->f_16[iParam0 /*12*/])->f_3 = 0;
}

char* func_1064()
{
	return "script@mp@common@handovers@recieve_bag_holdup";
}

int func_1065()
{
	return 64;
}

void func_1066(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	if (!func_880(iParam0, uParam1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	if (aggregate.fme_supply_train.func_1207(iVar0) && func_715(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (VEHICLE::_0x0E3BF7ED4169EC43(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_438(iParam0, &iVar1, 1, 0) && !PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_715(iVar0) && func_890(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_3 != 1)
	{
		return;
	}
	if (func_733((Local_17.f_16[iParam0 /*12*/])->f_11, 1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if ((func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, joaat("driver"), 3) || func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, joaat("driver"), 2)) || func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 824585797, 12))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
}

void func_1067(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_698(iParam0, uParam1);
	iVar1 = aggregate.net_coach_holdup.func_865(iParam0, uParam1);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_1063(iParam0, uParam1, -306837416);
		return;
	}
	if (!func_880(iParam0, uParam1))
	{
		return;
	}
	iVar2 = func_881(iParam0, uParam1);
	if ((PED::IS_PED_IN_VEHICLE(iVar0, iVar2, false) && iVar1 != 35) && iVar1 != 0)
	{
		func_1063(iParam0, uParam1, -522830230);
		return;
	}
}

void func_1068(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_880(iParam0, uParam1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	if ((!func_715(iVar0) && aggregate.net_coach_holdup.func_865(iParam0, uParam1) == 14) && aggregate.dynamic_craft_scenario.func_370(iVar0, func_698(iParam0, uParam1), 1, 1) > 20f)
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_890(iVar0) && !func_1076((uParam1->f_16[iParam0 /*12*/])->f_11))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (!func_715(iVar0))
	{
		return;
	}
	if (aggregate.fme_supply_train.func_1207(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if ((!aggregate.fme_supply_train.func_1207(iVar0) && !func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, joaat("driver"), -1)) && !func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 824585797, -1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
}

void func_1069(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_698(iParam0, uParam1);
	if (!PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
}

void func_1070(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = func_698(iParam0, uParam1);
	if (!func_880(iParam0, uParam1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	iVar0 = func_881(iParam0, uParam1);
	if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (VEHICLE::_0x0E3BF7ED4169EC43(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (aggregate.net_coach_holdup.func_865(iParam0, uParam1) == 12 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iVar1)
	{
		func_1063(iParam0, uParam1, joaat("driver"));
		return;
	}
	if (aggregate.fme_supply_train.func_1207(iVar0) && func_715(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_715(iVar0) && func_890(iVar0))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if (func_733((Local_17.f_16[iParam0 /*12*/])->f_11, 1))
	{
		func_1063(iParam0, uParam1, -193064196);
		return;
	}
	if ((uParam1->f_16[iParam0 /*12*/])->f_3 != 6)
	{
		return;
	}
	if (func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 824585797, 11) || func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 824585797, 7))
	{
		func_1063(iParam0, uParam1, -193064196);
	}
}

bool func_1071(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = 0;
	while (*uParam1 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&((Local_361[*uParam1 /*52*/])->f_2.f_2), iParam0))
		{
		}
		else
		{
			iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(*uParam1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0)))
			{
			}
			else
			{
				return true;
			}
		}
		*uParam1++;
	}
	return false;
}

bool func_1072(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = (uParam1->f_16[iParam0 /*12*/])->f_11;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam1->f_3[iVar0 /*4*/])))
	{
		return false;
	}
	iVar1 = NETWORK::NET_TO_VEH(&(uParam1->f_3[iVar0 /*4*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (aggregate.fishing_core.func_39(iVar1, uParam2->f_10.f_2, 1) > 20f)
	{
		return false;
	}
	return true;
}

bool func_1073(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;

	vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	*iParam1 = 255;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if ((Local_361[iVar1 /*52*/])->f_47 == 0)
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar1, 1, 1))
		{
		}
		else
		{
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, aggregate.camera_item.func_108(iVar6), true);
			if (fVar5 > fParam3)
			{
			}
			else if ((Local_361[iVar1 /*52*/])->f_47 < iVar0)
			{
			}
			else
			{
				iVar0 = (Local_361[iVar1 /*52*/])->f_47;
				*iParam1 = iVar6;
				*iParam2 = iVar0;
			}
		}
		iVar1++;
	}
	if (*iParam1 == 255)
	{
		return false;
	}
	return true;
}

bool func_1074(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;

	if (!func_1254(iParam0, PLAYER::GET_PLAYER_PED(iParam1), fParam3))
	{
		*uParam2 = -1;
		return false;
	}
	if (*uParam2 == -1)
	{
		*uParam2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return false;
	}
	iVar0 = NETWORK::GET_TIME_DIFFERENCE(*uParam2, NETWORK::GET_NETWORK_TIME_ACCURATE());
	if (iVar0 > iParam4)
	{
		return true;
	}
	return false;
}

bool func_1075(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, 824585797, 6))
	{
		return true;
	}
	if (bParam3 && func_1082((uParam1->f_16[iParam0 /*12*/])->f_11, uParam1, -522830230, 14))
	{
		return true;
	}
	return false;
}

bool func_1076(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam0 != -1 && (Local_17.f_16[iVar0 /*12*/])->f_11 != iParam0)
		{
		}
		else if (!func_1255((Local_17.f_16[iVar0 /*12*/])->f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1077(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (func_398(iParam0, 1))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_16[iParam0 /*12*/]));
	if (!func_880(iParam0, &Local_17))
	{
		return false;
	}
	iVar1 = func_881(iParam0, &Local_17);
	if (aggregate.dynamic_craft_scenario.func_370(iVar0, iVar1, 1, 1) > fParam1)
	{
		return false;
	}
	return true;
}

bool func_1078(int iParam0, bool bParam1, vector3 vParam2, float fParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!aggregate.fishing_core.func_34((*iParam0)[iVar0 /*52*/], 32))
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(aggregate.camera_item.func_108(iVar1), vParam2, true) > fParam5)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1079(int iParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if ((Local_17.f_16[iVar4 /*12*/])->f_2 == 0 || (Local_17.f_16[iVar4 /*12*/])->f_2 == -1088690539)
		{
		}
		else if ((Local_17.f_16[iVar4 /*12*/])->f_2 != 401658241 && !func_1090((Local_17.f_16[iVar4 /*12*/])->f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar4 /*12*/])))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(&(Local_17.f_16[iVar4 /*12*/]));
			if (iVar3 == iParam0)
			{
			}
			else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > fParam1)
			{
			}
			else
			{
				return true;
			}
		}
		iVar4++;
	}
	if (iParam2 && func_1256(vVar0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_1080(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 == iParam0)
		{
		}
		else if ((uParam1->f_16[iVar0 /*12*/])->f_2 != 1095997463)
		{
		}
		else if ((uParam1->f_16[iVar0 /*12*/])->f_7 != iParam2)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1081(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!aggregate.fme_condor_egg.func_1607(iVar0, 0, 1) || !aggregate.fishing_core.func_34((*iParam1)[iVar0 /*52*/], 2))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (aggregate.fishing_core.func_39(iParam0, aggregate.camera_item.func_108(iVar1), 1) > fParam2)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1082(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam1->f_16[iVar0 /*12*/])->f_11 != iParam0)
		{
		}
		else if ((uParam1->f_16[iVar0 /*12*/])->f_2 != iParam2)
		{
		}
		else if (iParam3 != -1 && (uParam1->f_16[iVar0 /*12*/])->f_3 != iParam3)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1083(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((uParam0->f_16[iVar0 /*12*/])->f_2 != iParam1)
		{
		}
		else if ((uParam0->f_16[iVar0 /*12*/])->f_3 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar0 /*12*/])))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1084(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!aggregate.fishing_core.func_34((*uParam1)[iVar0 /*52*/], 32) && !aggregate.fishing_core.func_34((*uParam1)[iVar0 /*52*/], 64))
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar0, 0, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (aggregate.fishing_core.func_39(iParam0, aggregate.camera_item.func_108(iVar1), 1) > fParam2)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1085(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = 0;
	while (*uParam1 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&((Local_361[*uParam1 /*52*/])->f_2.f_8), iParam0))
		{
		}
		else
		{
			iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(*uParam1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0)))
			{
			}
			else
			{
				return true;
			}
		}
		*uParam1++;
	}
	return false;
}

bool func_1086(int iParam0, int iParam1)
{
	int iVar0;

	*iParam1 = 0;
	while (*iParam1 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&((Local_361[*iParam1 /*52*/])->f_2), iParam0))
		{
		}
		else
		{
			iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(*iParam1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0)))
			{
			}
			else
			{
				return true;
			}
		}
		*iParam1++;
	}
	return false;
}

int func_1087()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 20000;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!aggregate.fme_supply_train.func_39(Var1, -1321720745, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

int func_1088()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 45000;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!aggregate.fme_supply_train.func_39(Var1, 1252114078, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

int func_1089()
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 65000;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!aggregate.fme_supply_train.func_39(Var1, 592666605, &uVar6, 0))
	{
		return iVar0;
	}
	return uVar6;
}

bool func_1090(int iParam0)
{
	switch (iParam0)
	{
		case -2133983324:
		case -522830230:
		case -306837416:
		case -193064196:
		case 824585797:
		case joaat("driver"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_1091(int iParam0)
{
	switch (iParam0)
	{
		case -94224997:
			return true;
		case 575287677:
			return false;
		default:
			break;
	}
	return true;
}

bool func_1110(var uParam0, var uParam1)
{
	return (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1);
}

void func_1112(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { aggregate.aberdeenpigfarm.func_107(joaat("target"), aggregate.net_assassination.func_1020(iParam1)) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	if (!STATS::STAT_ID_SET_INT(&Var0, iParam0, true))
	{
		return;
	}
}

int func_1113(var uParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = aggregate.mp_intro.func_2919(*uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(1, 31));
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(iVar1, 20));
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(uParam0->f_1, 10));
	return uVar0;
}

int func_1114()
{
	return 362424745;
}

void func_1115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	int iVar8;

	if (!aggregate.flow_controller.func_230(iParam0))
	{
		return;
	}
	iVar8 |= 4;
	switch (iParam1)
	{
		case 1:
			iVar8 |= 1;
			break;
		case 2:
			iVar8 |= 2;
			break;
		default:
			break;
	}
	switch (iParam4)
	{
		case 0:
			iVar8 |= 4;
			break;
		case 1:
			iVar8 |= 2052;
			break;
		default:
			break;
	}
	iVar1 = func_1134(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1135(iParam0, iVar0, &uVar4);
		func_1136(&uVar4, iVar8);
		iVar0++;
	}
	switch (iParam1)
	{
		case 0:
			bVar2 = false;
			break;
		case 1:
			bVar2 = true;
			break;
		case 2:
			bVar2 = false;
			break;
		default:
			bVar2 = false;
			break;
	}
	if (bVar2)
	{
		if (iParam3 != 0)
		{
			func_1265(iParam0, iParam3);
		}
	}
	switch (iParam1)
	{
		case 0:
			iVar3 = 0;
			break;
		case 1:
			iVar3 = -1105088361;
			break;
		case 2:
			iVar3 = -1904461405;
			break;
		default:
			iVar3 = 0;
			break;
	}
	if (iVar3 != 0)
	{
		func_1137(iParam0, iVar3, iParam2);
	}
}

int func_1134(int iParam0)
{
	struct<5> Var0;

	if (!aggregate.flow_controller.func_230(iParam0))
	{
		return 0;
	}
	if (!aggregate.gfh_campworks.func_360(&Var0))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 10, 0, 0, 0))
	{
		return 0;
	}
	return aggregate.flow_controller.func_278(Var0, 1);
}

int func_1135(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var4;
	int iVar9;
	int iVar10;

	MISC::_COPY_MEMORY(iParam2, &uVar0, 4);
	if (!aggregate.flow_controller.func_230(iParam0))
	{
		return 0;
	}
	if (!aggregate.gfh_campworks.func_360(&Var4))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var4, &(Var4.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var4, &(Var4.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var4, &(Var4.f_1), 10, 0, 0, 0))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var4, &(Var4.f_1), 11, iParam1, 0, 0))
	{
		return 0;
	}
	iVar9 = aggregate.net_assassination.func_1070(Var4);
	if (iVar9 == 0)
	{
		return 0;
	}
	iVar10 = aggregate.net_assassination.func_1071(Var4);
	if (iVar10 == 0)
	{
		return 0;
	}
	*iParam2 = { aggregate.aberdeenpigfarm.func_107(iVar10, iVar9) };
	if (!STATS::_STAT_ID_IS_VALID(iParam2))
	{
		return 0;
	}
	iParam2->f_2 = aggregate.net_assassination.func_1184(Var4);
	iParam2->f_3 = func_1284(Var4, joaat("trigger"));
	return 1;
}

void func_1136(var uParam0, int iParam1)
{
	if (uParam0->f_2 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if ((uParam0->f_3 && iParam1) != uParam0->f_3)
	{
		return;
	}
	switch (uParam0->f_2)
	{
		case -771980954:
		case 1513129800:
			break;
		case -2071026539:
		case -2001503642:
		case -1984963943:
		case -1892463704:
		case -1239636564:
		case -1130018939:
		case -358032694:
		case -22202911:
		case 123615871:
		case 446189390:
		case 622623048:
		case 1215693782:
		case 1374282888:
		case 1386878225:
		case joaat("attempts"):
		case 1529339137:
		case 1822827642:
			STATS::_0x6A0184E904CDF25E(uParam0, true);
			break;
		default:
			break;
	}
}

void func_1137(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (!func_1285(iParam0, iParam2, iParam1, &iVar0, &uVar1))
	{
		return;
	}
	aggregate.fme_challenges.func_1108(iVar0, 0, 0);
}

int func_1138(int iParam0)
{
	struct<5> Var0;

	if (!aggregate.flow_controller.func_230(iParam0))
	{
		return 0;
	}
	if (!aggregate.gfh_campworks.func_360(&Var0))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		return 0;
	}
	return aggregate.flow_controller.func_278(Var0, 6);
}

int func_1139(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;

	MISC::_COPY_MEMORY(iParam2, &uVar5, 5);
	if (!aggregate.flow_controller.func_230(iParam0))
	{
		return 0;
	}
	if (!aggregate.gfh_campworks.func_360(&Var0))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 29, iParam1, 0, 1))
	{
		return 0;
	}
	iParam2->f_1 = func_1286(Var0);
	*iParam2 = func_1287(Var0);
	iParam2->f_2 = func_1288(Var0);
	iParam2->f_4 = func_1284(Var0, joaat("trigger"));
	switch (iParam2->f_2)
	{
		case joaat("int"):
			iParam2->f_3 = func_1289(Var0);
			break;
		default:
			return 0;
	}
	return 1;
}

void func_1140(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if ((uParam0->f_4 && iParam1) != uParam0->f_4)
	{
		return;
	}
	if (!STATS::CHAL_IS_GOAL_ACTIVE(*uParam0, uParam0->f_1))
	{
		return;
	}
	switch (uParam0->f_2)
	{
		case joaat("int"):
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(*uParam0, uParam0->f_1, uParam0->f_3);
			break;
		default:
			break;
	}
}

bool func_1167(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = false;
	switch (ENTITY::_0x61914209C36EFDDB(iParam0))
	{
		case 4:
		case 5:
		case 6:
			*iParam1 = PED::_0x79443D56C8DF45EE(iParam0);
			break;
		case 8:
		case 9:
			*iParam1 = PED::_0x79443D56C8DF45EE(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				*iParam1 = PED::_0xA033D7E4BBF9844D(iParam0);
			}
			if ((ENTITY::DOES_ENTITY_EXIST(*iParam1) && !PED::IS_PED_HUMAN(*iParam1)) && PED::_0x2D64376CF437363E(*iParam1))
			{
				bVar2 = true;
			}
			break;
		case 7:
			*iParam1 = PED::_0xA033D7E4BBF9844D(iParam0);
			bVar2 = true;
			break;
		case 3:
			return false;
	}
	if ((bVar2 && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && !PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		iVar0 = PED::_0xB676EFDA03DADA52(*iParam1, 1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && bParam2)
		{
			iVar1 = PLAYER::_0xAD03B03737CE6810(*iParam1);
			if (NETWORK::_0x255A5EF65EDA9167(iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
				if (aggregate.dynamic_craft_scenario.func_370(*iParam1, iVar0, 1, 1) < 30f && !AITRANSPORT::_0xDC44F405A6B98D03(iVar0, 0))
				{
					*iParam1 = iVar0;
				}
			}
		}
		else
		{
			*iParam1 = iVar0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	return true;
}

int func_1174(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return joaat("speech_params_shouted_critical");
		case 7:
			return joaat("speech_params_shouted_clear");
		case 8:
			return joaat("speech_params_allow_repeat");
		case 9:
			return joaat("speech_params_shouted_critical");
		case 0:
			return joaat("speech_params_shouted_critical");
		default:
			break;
	}
	return joaat("speech_params_shouted_clear");
}

char* func_1175(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 401658241)
			{
				if (Local_17.f_315 > 1)
				{
					iVar0 = 0;
					while (iVar0 < 20)
					{
						if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 401658241)
						{
						}
						else
						{
							iVar1++;
						}
						iVar0++;
					}
					if (iVar1 > 1)
					{
						return "ARRIVAL_COMBAT_NEUTRAL";
					}
				}
				if (func_725())
				{
					return "LAW_TAUNT_GEN_NEUTRAL";
				}
				return "OPENS_FIRE";
			}
			else if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "RT_LET_EM_HAVE_IT";
			}
			return "GENERIC_SHOCKED_HIGH";
		case 1:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "FINAL_WARNING";
			}
			return "GENERIC_FRIGHTENED_HIGH";
		case 2:
			return "SCARED_HELP";
		case 3:
			return "HAND_OVER_MONEY";
		case 4:
			return "GUN_BEG";
		case 5:
			return "PLEAD";
		case 6:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "TIME_TO_GO";
			}
			return "GREET_SHOUTED";
		case 7:
			if (Local_2026.f_10 == -19759302)
			{
				return "GREET_PLAYER_CAPTURED_BOUNTY";
			}
			return "GANG_INTERACT_APPROACH_GOODS";
		case 9:
			if (iParam1 == -2133983324)
			{
				return "DISCOVERED_FAR";
			}
			else if (iParam1 == 824585797)
			{
				if (func_1304())
				{
					return "RT_HEADS_UP_NIGHT_ROAD";
				}
				else
				{
					return "RT_HEADS_UP_WARY_ROAD";
				}
			}
			return "GREET_SHOUTED";
		case 8:
			if (Local_2026.f_10 == -19759302)
			{
				return "GENERIC_THANKS_SHOUTED";
			}
			return "GANG_INTERACT_GOODS_TO_BOSS";
		case 10:
			return "GUN_AVOID";
		case 11:
			return "LEAVE_NOW";
		default:
			break;
	}
	return "";
}

char* func_1177(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 401658241)
			{
				return "TAUNT_GEN_NEUTRAL";
			}
			else if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "OPENS_FIRE";
			}
			return "GENERIC_ANGRY_SHOUT";
		case 1:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "CHALLENGE_THREATEN_ARMED";
			}
			return "INTIMIDATED_GEN";
		case 6:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "GET_LOST";
			}
			return "GREET_GENERAL_STRANGER";
		case 8:
			return "GENERIC_CHEER";
		case 4:
			return "PLEAD";
		case 3:
			return "HAND_OVER_ITEM";
		case 5:
			return "GENERIC_CURSE_HIGH";
		case 2:
		case 10:
			return "PANIC_HELP";
		case 7:
		case 9:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "RT_HEADS_UP_WARY_ROAD";
			}
			return "GREET_GENERAL_FAMILIAR";
		case 11:
			return "DONT_BE_STUPID";
		default:
			break;
	}
	return "";
}

char* func_1178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "GET_OUT";
			}
			break;
		case 1:
			return "DONT_WANT_TROUBLE";
		case 8:
			return "GENERIC_THANKS";
		case 3:
			return "SICK_BASTARD";
		case 4:
			return "SICK_BASTARD";
		case 7:
		case 9:
			if (iParam1 == -2133983324 || iParam1 == 824585797)
			{
				return "GREET_GENERAL_STRANGER";
			}
			return "GREET_RT_FRIENDLY";
		case 11:
			return "CHALLENGE_THREATEN_ARMED";
		case 10:
			return "GENERIC_FRIGHTENED_HIGH";
	}
	return "";
}

int func_1179(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(*iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), 0, 0))
		{
			return 0;
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		if (PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			return 0;
		}
		if (PED::IS_PED_RAGDOLL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	bVar1 = (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*iParam0) || bParam2);
	if ((iParam1 == -2128726980 || ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && bVar1)
	{
		return 2;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	iVar3 = TASK::GET_SCRIPT_TASK_STATUS(iVar2, iParam1, 1);
	if (iVar3 == 1 || iVar3 == 0)
	{
		return 3;
	}
	if (!bVar1)
	{
		return 1;
	}
	return 2;
}

void func_1181(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			TASK::TASK_DRIVE_BY(iParam0, iParam1, 0, 0f, 0f, 0f, fParam2, iParam3, bParam4, iParam5);
		}
		else
		{
			TASK::TASK_COMBAT_PED(iParam0, iParam1, 0, 0);
		}
	}
}

bool func_1182(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		default:
			return false;
	}
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (iVar1 < 5)
	{
		return false;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iVar0))
	{
		return false;
	}
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iVar0);
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return false;
	}
	if (!AITRANSPORT::_0x660639BC60157048(iVar2, iParam1) && !aggregate.barcustomer_interaction.func_46(iVar2, 1920417248))
	{
		return false;
	}
	return true;
}

void func_1183(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 0);
}

int func_1184()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	switch (iVar0)
	{
		case 0:
			return -1124614608;
		case 1:
			return 1904532698;
		case 2:
			return joaat("world_human_drinking");
		case 3:
			return -22664287;
		case 4:
			return -1032721003;
		case 5:
			return -258459266;
		case 6:
			return 1978275899;
		case 7:
			return 1285815972;
		default:
			break;
	}
	return -258459266;
}

bool func_1185(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (ENTITY::_0x61914209C36EFDDB(iParam0))
	{
		case 5:
			iVar0 = PED::_0x79443D56C8DF45EE(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return false;
			}
			if (!PED::IS_PED_A_PLAYER(iVar0))
			{
				return false;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				return false;
			}
			*iParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			return true;
		case 7:
			iVar1 = PED::_0xA033D7E4BBF9844D(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return false;
			}
			iVar0 = PED::_0xB676EFDA03DADA52(iVar1, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return false;
			}
			if (!PED::IS_PED_A_PLAYER(iVar0))
			{
				return false;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				return false;
			}
			*iParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1186(int iParam0)
{
	int iVar0;

	if ((Local_17.f_16[iParam0 /*12*/])->f_2 != 401658241)
	{
		return false;
	}
	iVar0 = (Local_17.f_16[iParam0 /*12*/])->f_11;
	if (iVar0 < 0)
	{
		return false;
	}
	switch (Local_2026.f_10)
	{
		case -19759302:
			if (iVar0 >= 20)
			{
				return false;
			}
			if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
			{
				return false;
			}
			if (aggregate.net_camp.func_517(iVar0, &Local_17, 32))
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_16[iVar0 /*12*/])))
			{
				return false;
			}
			break;
		case -409129282:
			if (iVar0 >= 4)
			{
				return false;
			}
			if ((!aggregate.net_camp.func_517(iVar0, &Local_17, 128) || aggregate.net_camp.func_517(iVar0, &Local_17, 2)) || aggregate.net_camp.func_517(iVar0, &Local_17, 16))
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_257[iVar0 /*5*/])))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_1188(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = ENTITY::IS_ENTITY_A_PED(iParam2);
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_2[iVar0])))
		{
			if (&uParam0->f_2[iVar0] == iParam2)
			{
				*uParam3 = iVar0;
				*uParam1 = &uParam0->f_2[iVar0];
				return true;
			}
			else if (bVar1 && ENTITY::IS_ENTITY_A_VEHICLE(&(uParam0->f_2[iVar0])))
			{
				iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam2);
				if (PED::GET_PED_CONFIG_FLAG(iVar2, 140, false) && PED::_0xE4770DA1B8FF4FD1(iVar2) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(&(uParam0->f_2[iVar0])))
				{
					*uParam3 = iVar0;
					*uParam1 = &uParam0->f_2[iVar0];
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1189(int iParam0)
{
	if (ENTITY::IS_ENTITY_A_PED(*iParam0))
	{
		if (iParam0->f_3 || iParam0->f_24)
		{
			return true;
		}
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(*iParam0))
	{
		if (iParam0->f_3)
		{
			return true;
		}
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(*iParam0))
	{
		if (iParam0->f_3)
		{
			return true;
		}
	}
	return false;
}

bool func_1194(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Local_17.f_329[iVar0] == 255)
		{
		}
		else if (!NETWORK::_0x255A5EF65EDA9167(&(Local_17.f_329[iVar0])) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_329[iVar0])))
		{
		}
		else
		{
			*uParam0 = &Local_17.f_329[iVar0];
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1195(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Local_17.f_329[iVar0] == 255)
		{
		}
		else if (&Local_17.f_329[iVar0] != iParam0)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1196(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam0, 1, 0, 256);
	if (iParam1 == joaat("player"))
	{
		iVar0 = PED::_0x4C8B59171957BCF7(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		iVar1 = PLAYER::_0xF49F14462F0AE27C(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar0, 1, 0, 256);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, 1, 0, 256);
		}
		return;
	}
	else if (iParam1 == 130495496)
	{
		return;
	}
	if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0) || !NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return;
	}
	iVar2 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::_0xA6C0787443C9583E(iVar2);
	if (iVar3 == iParam2 && bParam3)
	{
		NETWORK::_0x7182EDDA1EE7DB5A(iVar2);
		return;
	}
	else if (!NETWORK::_0x255A5EF65EDA9167(iVar3))
	{
		*uParam5 = 1;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		*uParam5 = 1;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
	{
		*uParam5 = 1;
	}
	else if (!func_1195(iVar3))
	{
		*uParam5 = 1;
	}
	if (bParam4)
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
}

bool func_1197(int iParam0)
{
	switch (iParam0)
	{
		case 130495496:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1198(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7)
{
	int iVar0;

	switch (iParam2)
	{
		case 130495496:
			if (iParam1 >= 7 || iParam1 < 0)
			{
				return true;
			}
			if (!NETWORK::_0x255A5EF65EDA9167(&(Local_17.f_329[iParam1])) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_329[iParam1])))
			{
				return true;
			}
			if (&Local_17.f_329[iParam1] != PLAYER::PLAYER_ID())
			{
				return false;
			}
			if (Local_2026.f_537.f_1 > 40)
			{
				return true;
			}
			iVar0 = aggregate.fm_mission_controller.func_2138(vParam4, fParam7, 0, 0, 0, 0, 0, 0, 1, 100, 0, 1);
			if (iVar0 == 0)
			{
				Local_2026.f_537.f_1++;
				return false;
			}
			*iParam3 = aggregate.annesburg.func_253(iVar0);
			break;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam3);
}

float func_1199(int iParam0)
{
	switch (iParam0)
	{
		case 1018236383:
			return 0f;
		case 666862086:
			return 270f;
		case 1213581433:
			return 90f;
		case -1518250965:
			return 180f;
		default:
			break;
	}
	return 180f;
}

void func_1202(vector3 vParam0, vector3 vParam3)
{
	char* sVar0;

	sVar0 = func_227();
	CAM::_0x0E94C95EC3185FA9(sVar0, vParam0, vParam3);
}

void func_1203(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		*uParam1 = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), iParam2);
		MAP::_0x662D364ABF16DE2F(*uParam1, 942020339);
		MAP::SET_BLIP_SPRITE(*uParam1, -1596758107 /* GXTEntry: "Lawman" */, true);
		return;
	}
	*uParam1 = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), iParam2);
	MAP::_0x662D364ABF16DE2F(*uParam1, 2096805056);
	aggregate.net_assassination.func_458(iParam0, 4096);
	if (bParam4)
	{
		MAP::_0x662D364ABF16DE2F(*uParam1, -662251075);
		aggregate.net_assassination.func_458(iParam0, 131072);
	}
}

void func_1204(var uParam0, int iParam1)
{
	*uParam0 = MAP::_0x23F74C2FDA6E7C61(-89429847, iParam1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, func_1308());
}

void func_1205(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	*uParam1 = MAP::_0x23F74C2FDA6E7C61(408396114, iParam2);
	MAP::SET_BLIP_SPRITE(*uParam1, -1103135225, true);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, func_1206());
	MAP::_0x662D364ABF16DE2F(*uParam1, -1636811933);
	MAP::_0x662D364ABF16DE2F(*uParam1, 580546400);
	MAP::_0x662D364ABF16DE2F(*uParam1, 231194138);
	if (aggregate.fme_animal_tagging.func_134(262144))
	{
		MAP::_0x662D364ABF16DE2F(*uParam1, 231194138);
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 33554432))
	{
		iVar0 = func_861(iParam0, iParam2, 1);
	}
	if (iVar0 != 0)
	{
		MAP::_0x9CB1A1623062F402(*uParam1, HUD::_GET_LABEL_TEXT_BY_HASH(iVar0));
	}
}

char* func_1206()
{
	switch (aggregate.camera_item.func_12(&Local_2026))
	{
		case -19759302:
			return "NET_CHU_BLIP_VIP";
		default:
			break;
	}
	return "NET_CHU_BLIP_PASSENGER";
}

char* func_1207(char* sParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return sParam0;
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_CHU_VAR_PLAYER_ESCORT", sParam0, iParam1);
}

int func_1208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 408396114;
		case 2:
			return -2086635932;
		case 3:
			return 408396114;
		case 4:
			return -2086635932;
		case 5:
			return 408396114;
		default:
			break;
	}
	return 0;
}

char* func_1209()
{
	return "NET_CHU_BLIP_MONEY_BAG";
}

bool func_1210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

void func_1211(int iParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		aggregate.fme_escaped_convicts.func_736(iParam1);
	}
	*iParam1 = MAP::_0x3E593DF9C2962EC6(func_1208(iParam0));
	iVar0 = func_988(iParam0);
	iVar1 = func_1309(iParam0);
	if (iVar0 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam1, iVar0, false);
	}
	if (iVar1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(*iParam1, iVar1);
	}
}

bool func_1212(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { aggregate.camera_item.func_108(PLAYER::PLAYER_ID()) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if ((uParam0->f_16[iVar4 /*12*/])->f_2 == 0 || (uParam0->f_16[iVar4 /*12*/])->f_2 == -1088690539)
		{
		}
		else if (!func_1090((uParam0->f_16[iVar4 /*12*/])->f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(uParam0->f_16[iVar4 /*12*/])))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(&(uParam0->f_16[iVar4 /*12*/]));
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > 80f)
			{
			}
			else
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

bool func_1213(vector3 vParam0, float fParam3, float fParam4)
{
	if (fParam4 + fParam3) < MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, aggregate.camera_item.func_108(PLAYER::GET_PLAYER_INDEX()), true)
	{
		return false;
	}
	return CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
}

bool func_1214(var uParam0)
{
	int iVar0;

	switch (Local_2026.f_10)
	{
		case -409129282:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_25[iVar0])))
				{
				}
				else
				{
					*uParam0 = &Local_2026.f_202.f_25[iVar0];
					return true;
				}
				iVar0++;
			}
			break;
		case -19759302:
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iVar0])))
				{
				}
				else
				{
					*uParam0 = &Local_2026.f_202[iVar0];
					return true;
				}
				iVar0++;
			}
			break;
	}
	return false;
}

char* func_1216(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Local_17.f_316;
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) && _NAMESPACE26::_0x0F99F6436528A089(iVar0))
	{
		return func_1222(iVar0, iParam0);
	}
	iVar2 = 255;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!aggregate.fishing_core.func_34(Local_361[iVar1 /*52*/], 32))
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar1, 0, 1))
		{
		}
		else
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == 255)
	{
		return "";
	}
	return func_1217(iVar2, iParam0);
}

char* func_1217(int iParam0, int iParam1)
{
	return aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iParam0), iParam1);
}

int func_1218(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("attack"):
			return 1;
		case joaat("COLLECT"):
			return 4;
		case 404851220:
			return 3;
		case joaat("none"):
			return 0;
		case joaat("defend"):
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

char* func_1221()
{
	var uVar0;

	switch (func_252())
	{
		case 1:
			if (func_1311(&uVar0))
			{
				return aggregate.fme_animal_tagging.func_1715(&uVar0);
			}
			break;
		case 2:
			if (func_1312(&uVar0))
			{
				return aggregate.fme_animal_tagging.func_1715(&uVar0);
			}
			break;
	}
	return "NET_CHU_LOC_DEFAULT_DROPOFF";
}

char* func_1222(int iParam0, int iParam1)
{
	return aggregate.aberdeenpigfarm.func_103(aggregate.fm_deathmatch_controller.func_2417(iParam0, 1, 0), iParam1);
}

int func_1227()
{
	int iVar0;
	int iVar1;

	func_209(&iVar0, &iVar1);
	if (iVar0 == 0)
	{
		return 2;
	}
	if (iVar0 == iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_1228(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	*uParam2 = 0;
	*iParam0 = 255;
	*iParam1 = 0;
	switch (Local_2026.f_10)
	{
		case -409129282:
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (!func_424(iVar1, 0) || func_424(iVar1, 1))
				{
				}
				else if (_NAMESPACE26::_0x0F99F6436528A089((Local_17.f_257[iVar1 /*5*/])->f_4))
				{
					if (bVar0)
					{
						if ((*uParam2 && *iParam1 != (Local_17.f_257[iVar1 /*5*/])->f_4) || (!*uParam2 && _NAMESPACE26::_0x901E0DC25080C8B9(*iParam0) != (Local_17.f_257[iVar1 /*5*/])->f_4))
						{
							return false;
						}
					}
					else
					{
						*iParam1 = (Local_17.f_257[iVar1 /*5*/])->f_4;
						*uParam2 = 1;
						bVar0 = true;
					}
				}
				else if (NETWORK::_0x255A5EF65EDA9167((Local_17.f_257[iVar1 /*5*/])->f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_257[iVar1 /*5*/])->f_3))
				{
					if (bVar0)
					{
						if ((*uParam2 && _NAMESPACE26::_0x901E0DC25080C8B9((Local_17.f_257[iVar1 /*5*/])->f_3) != *iParam1) || (!*uParam2 && _NAMESPACE26::_0x3F59FE6F37869576(*iParam0, (Local_17.f_257[iVar1 /*5*/])->f_3)))
						{
							return false;
						}
					}
					else
					{
						*iParam0 = (Local_17.f_257[iVar1 /*5*/])->f_3;
						*uParam2 = 0;
						bVar0 = true;
					}
				}
				else
				{
					return false;
				}
				iVar1++;
			}
			break;
		case -19759302:
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!func_424(iVar1, 0) || func_424(iVar1, 1))
				{
				}
				else if (_NAMESPACE26::_0x0F99F6436528A089((Local_17.f_16[iVar1 /*12*/])->f_6))
				{
					if (bVar0)
					{
						if ((*uParam2 && *iParam1 != (Local_17.f_16[iVar1 /*12*/])->f_6) || (!*uParam2 && _NAMESPACE26::_0x901E0DC25080C8B9(*iParam0) != (Local_17.f_16[iVar1 /*12*/])->f_6))
						{
							return false;
						}
					}
					else
					{
						*iParam1 = (Local_17.f_16[iVar1 /*12*/])->f_6;
						*uParam2 = 1;
						bVar0 = true;
					}
				}
				else if (NETWORK::_0x255A5EF65EDA9167((Local_17.f_16[iVar1 /*12*/])->f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_16[iVar1 /*12*/])->f_7))
				{
					if (bVar0)
					{
						if ((*uParam2 && _NAMESPACE26::_0x901E0DC25080C8B9((Local_17.f_16[iVar1 /*12*/])->f_7) != *iParam1) || (!*uParam2 && _NAMESPACE26::_0x3F59FE6F37869576(*iParam0, (Local_17.f_16[iVar1 /*12*/])->f_7)))
						{
							return false;
						}
					}
					else
					{
						*iParam0 = (Local_17.f_16[iVar1 /*12*/])->f_7;
						*uParam2 = 0;
						bVar0 = true;
					}
				}
				else
				{
					return false;
				}
				iVar1++;
			}
			break;
	}
	if (*uParam2)
	{
		return *iParam1 != 0;
	}
	return *iParam0 != 255;
}

char* func_1229(int iParam0, int iParam1, int iParam2)
{
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iParam1) && _NAMESPACE26::_0x0F99F6436528A089(iParam1))
	{
		return func_1222(iParam1, iParam2);
	}
	return func_1217(iParam0, iParam2);
}

int func_1248(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Param0, Param0.f_1);
	return iVar0;
}

int func_1249()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			return joaat("weapon_revolver_cattleman");
		case 1:
			return joaat("weapon_repeater_carbine");
		default:
			break;
	}
	return joaat("weapon_revolver_cattleman");
}

bool func_1254(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	float fVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return false;
	}
	if (!ENTITY::GET_ENTITY_SPEED(iParam0) < 0.5f)
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), true);
	if (fVar3 > fParam2)
	{
		return false;
	}
	return true;
}

bool func_1255(int iParam0)
{
	switch (iParam0)
	{
		case 824585797:
		case joaat("driver"):
			return true;
		default:
			break;
	}
	return false;
}

int func_1256(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		LAW::_0x0C392DB374655176(vParam0, fParam3, iVar0);
		if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return 1;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return 0;
}

void func_1265(int iParam0, int iParam1)
{
	var uVar0;
	int iVar2;
	int iVar3;
	var uVar4[5];

	if (!aggregate.net_assassination.func_1186(iParam0, iParam1, &uVar4))
	{
		return;
	}
	iVar3 = &uVar4[0];
	switch (iVar3)
	{
		case 1332108599:
			iVar2 = -771980954;
			break;
		case 153099630:
			iVar2 = 1513129800;
			break;
		case 437018696:
			iVar2 = -771980954;
			break;
		case 10417338:
			iVar2 = 1513129800;
			break;
		default:
			return;
	}
	if (!func_508(iParam0, iVar2, &uVar0))
	{
		return;
	}
	if (STATS::STAT_ID_SET_INT(&uVar0, aggregate.net_assassination.func_1187(&uVar4, -15, 0, 0), true))
	{
	}
}

int func_1284(struct<5> Param0, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;

	if (!aggregate.flow_controller.func_276(Param0, &(Param0.f_1), 31, iParam5, 0, 1))
	{
		return 0;
	}
	uVar5 = Param0.f_1;
	iVar1 = aggregate.flow_controller.func_278(Param0, 5);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		iVar4 = 0;
		if (!aggregate.flow_controller.func_276(Param0, &(Param0.f_1), 32, iVar0, 0, 1))
		{
		}
		else
		{
			iVar2 = aggregate.net_assassination.func_1184(Param0);
			switch (iParam5)
			{
				case joaat("trigger"):
					iVar4 = func_1357(iVar2);
					break;
			}
			uVar3 = (uVar3 || iVar4);
		}
		iVar0++;
	}
	return uVar3;
}

bool func_1285(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<5> Var0;

	if (!aggregate.flow_controller.func_230(iParam0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return false;
	}
	if (!aggregate.gfh_campworks.func_360(&Var0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return false;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 7, 0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return false;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 8, iParam0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return false;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 21, 0, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return false;
	}
	if (!aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 22, iParam2, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return false;
	}
	*iParam3 = aggregate.flow_controller.func_449(Var0);
	*uParam4 = aggregate.flow_controller.func_448(Var0);
	if (iParam1 != 0)
	{
		if (aggregate.flow_controller.func_276(Var0, &(Var0.f_1), 23, iParam1, 0, 0))
		{
			*iParam3 = aggregate.flow_controller.func_449(Var0);
			*uParam4 = aggregate.flow_controller.func_448(Var0);
		}
	}
	if (*iParam3 == 0)
	{
		*iParam3 = -1;
		*uParam4 = joaat("none");
		return false;
	}
	return true;
}

var func_1286(struct<5> Param0)
{
	return aggregate.flow_controller.func_446(Param0, 42, 1);
}

var func_1287(struct<5> Param0)
{
	return aggregate.flow_controller.func_446(Param0, 41, 1);
}

var func_1288(struct<5> Param0)
{
	return aggregate.flow_controller.func_446(Param0, 43, 1);
}

var func_1289(struct<5> Param0)
{
	return aggregate.net_assassination.func_1265(Param0, 44, 1);
}

bool func_1304()
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 7 && iVar0 <= 19)
	{
		return false;
	}
	return true;
}

char* func_1308()
{
	return "NET_CHU_BLIP_DROPOFF_GUARD";
}

int func_1309(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			return -401963276;
		case 2:
		case 4:
			if (func_1381(&iVar0))
			{
				if (aggregate.fme_escaped_convicts.func_738(iVar0, 4))
				{
					return -2145527776;
				}
				else if (aggregate.fme_escaped_convicts.func_738(iVar0, 2))
				{
					return -1445216292;
				}
			}
			return -1636811933;
		case 3:
		case 5:
			if (func_1381(&iVar0))
			{
				if (aggregate.fme_challenges.func_1307(iVar0, 512))
				{
					return -2145527776;
				}
				else if (aggregate.fme_challenges.func_1307(iVar0, 256))
				{
					return -1445216292;
				}
			}
			return -1636811933;
		default:
			break;
	}
	return 0;
}

bool func_1311(var uParam0)
{
	struct<5> Var0;

	if (func_293(&Local_2026, &Var0) && aggregate.net_assassination.func_109(Var0, 733551533, uParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_1312(var uParam0)
{
	struct<5> Var0;

	if (func_293(&Local_2026, &Var0) && aggregate.net_assassination.func_109(Var0, -2107902278, uParam0, 0))
	{
		return true;
	}
	return false;
}

int func_1357(int iParam0)
{
	switch (iParam0)
	{
		case joaat("start"):
			return 4;
		case 1130877567:
			return 8;
		case joaat("primary"):
			return 1;
		case -862695229:
			return 2;
		case -562306862:
			return 16;
		case joaat("loss"):
			return 32;
		case joaat("easy"):
			return 64;
		case joaat("medium"):
			return 128;
		case joaat("hard"):
			return 256;
		case joaat("near"):
			return 512;
		case joaat("far"):
			return 1024;
		case joaat("special"):
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1381(int iParam0)
{
	int iVar0;

	switch (Local_2026.f_10)
	{
		case -409129282:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202.f_25[iVar0])))
				{
				}
				else
				{
					*iParam0 = iVar0;
					return true;
				}
				iVar0++;
			}
			break;
		case -19759302:
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if ((Local_17.f_16[iVar0 /*12*/])->f_2 != 1095997463)
				{
				}
				else if (!MAP::DOES_BLIP_EXIST(&(Local_2026.f_202[iVar0])))
				{
				}
				else
				{
					*iParam0 = iVar0;
					return true;
				}
				iVar0++;
			}
			break;
	}
	return false;
}

