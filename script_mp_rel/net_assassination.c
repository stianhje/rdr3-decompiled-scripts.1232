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
	struct<282> Local_17 = { 0, 0, 21, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 0, 0, 0, 0, 0, 255, 255, 0, -1, 5, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, -1, -1, -1, 6, 0, 0, 0, 0, 0, 0, 1, 0, 7, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 255, 0 } ;
	struct<8> Local_299[32];
	struct<1017> Local_556 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 18, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
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
	while (!func_2(Local_556.f_2))
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_17, 282, 40);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_17), 282, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_299, 257, 41);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_299[0 /*8*/]), 257, "m_clientData");
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
	else if (&Local_299[NETWORK::PARTICIPANT_ID_TO_INT() /*8*/] == 3)
	{
		return true;
	}
	return false;
}

void func_3()
{
	Local_556.f_1008 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_15();
	func_16();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_17();
	}
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	func_18(0);
	if (DATAFILE::_0x603AC35FD4602C76(Local_556.f_577))
	{
		func_19();
		func_20();
		iVar0 = 0;
		while (iVar0 < Local_556.f_20.f_548)
		{
			func_22(func_21(iVar0));
			func_24(func_23(iVar0));
			func_22(func_25(iVar0));
			iVar0++;
		}
		iVar3 = 0;
		while (iVar3 < Local_556.f_20.f_555)
		{
			iVar1 = func_26(iVar3);
			iVar2 = 0;
			while (iVar2 < iVar1)
			{
				func_22(func_27(iVar3, iVar2));
				func_24(func_28(iVar3, iVar2));
				func_22(func_29(iVar3, iVar2));
				iVar2++;
			}
			iVar3++;
		}
		DATAFILE::_DATAFILE_UNLOAD(Local_556.f_577);
	}
	if (func_30(Local_556.f_957))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Local_556.f_957);
	}
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_960), iVar4))
		{
			aggregate.fme_animal_tagging.func_778(iVar5);
		}
		iVar4++;
	}
	func_32(0);
	func_33(0);
	func_34();
	func_35();
	func_36();
	func_37();
	func_38();
	func_39();
	aggregate.nb_beggar.func_139();
	func_41();
	func_42();
	if (aggregate.fme_animal_tagging.func_134(1048576))
	{
		PLAYER::_0xDFC85C5199045026(PLAYER::PLAYER_ID(), 1f);
		aggregate.fme_animal_tagging.func_174(1048576);
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (aggregate.fme_animal_tagging.func_134(4) && func_45())
		{
			aggregate.fm_deathmatch_controller.func_231(131072);
		}
		return;
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192) && !aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 16384))
	{
		aggregate.fm_deathmatch_controller.func_1034();
		aggregate.fme_animal_tagging.func_335(1);
	}
	iVar6 = 0;
	while (iVar6 < 18)
	{
		if (aggregate.la_alligator.func_203(iVar6, 256))
		{
		}
		else if (aggregate.la_alligator.func_203(iVar6, 2))
		{
		}
		else
		{
			func_22(&(Local_556.f_20.f_422[iVar6 /*4*/]));
		}
		iVar6++;
	}
	iVar8 = PLAYER::PLAYER_PED_ID();
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (aggregate.la_alligator.func_203(iVar0, 131072) && func_52(iVar0, &iVar7, 0, 1))
		{
			PED::_0x3088634CF8C819CF(iVar7);
		}
		if (func_53(iVar0))
		{
			if (func_52(iVar0, &iVar7, 0, 1))
			{
				ENTITY::_0x5826EFD6D73C4DE5(iVar7);
			}
			if (aggregate.la_alligator.func_203(iVar0, 65536) && func_54(iVar0, &iVar7, 0))
			{
				ENTITY::_0x5826EFD6D73C4DE5(iVar7);
			}
		}
		if (((func_55((Local_17.f_2[iVar0 /*9*/])->f_2) && aggregate.la_alligator.func_203(iVar0, 32768)) && func_52(iVar0, &iVar7, 1, 0)) && PED::GET_RELATIONSHIP_BETWEEN_PEDS(iVar7, iVar8) == 6)
		{
			func_56(iVar0, iVar7);
		}
		iVar0++;
	}
	if (!aggregate.fme_animal_tagging.func_134(func_57(758533472)) && !aggregate.fme_animal_tagging.func_134(func_57(-1416703903)))
	{
		func_58(758533472, 1);
	}
	if (aggregate.fme_animal_tagging.func_134(8192) && aggregate.fme_animal_tagging.func_134(4))
	{
		if (PLAYER::_0xA62BBAAE67A05BB0(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 0);
		}
		PLAYER::_0xE5D3EB37ABC1EB03(PLAYER::PLAYER_ID());
	}
	func_60();
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return;
	}
	func_61();
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_62(iVar0, 1);
		iVar0++;
	}
	iVar9 = 0;
	while (iVar9 < 2)
	{
		func_63(iVar9);
		iVar9++;
	}
	iVar10 = 0;
	while (iVar10 < 5)
	{
		if (!PED::DOES_GROUP_EXIST(&(Local_17.f_192[iVar10])))
		{
		}
		else
		{
			PED::REMOVE_GROUP(&(Local_17.f_192[iVar10]));
		}
		iVar10++;
	}
	iVar6 = 0;
	while (iVar6 < 18)
	{
		func_64(iVar6);
		iVar6++;
	}
}

void func_11(var uParam0)
{
	Local_556 = *uParam0;
	Local_556.f_1 = uParam0->f_5;
	Local_556.f_2 = { uParam0->f_7 };
	Local_556.f_20.f_556 = aggregate.dynamic_craft_scenario.func_156(Local_556.f_2);
	Local_556.f_20 = func_70(func_69(aggregate.flow_controller.func_319(349772825), Local_556.f_20.f_556));
	Local_556.f_20.f_1 = aggregate.flow_controller.func_319(Local_556.f_20);
	Local_556.f_20.f_16 = func_71(Local_556.f_20);
}

void func_12(var uParam0)
{
	Local_17.f_280 = uParam0->f_9;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_17.f_280))
	{
		aggregate.fme_animal_tagging.func_176(6);
		return;
	}
	Local_17.f_279 = _NAMESPACE26::_0x901E0DC25080C8B9(Local_17.f_280);
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279))
	{
		aggregate.fme_animal_tagging.func_176(6);
		return;
	}
	Local_17.f_278 = _NAMESPACE26::_0x149A2751AB66AC02(Local_17.f_279);
}

void func_15()
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	Local_556.f_1008 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				func_78(iVar0);
				break;
			case -1065733433:
				func_79(iVar0);
				break;
			case -454144443:
				func_80(iVar0);
				break;
			case -507840394:
				func_81(iVar0);
				break;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar1))
		{
			case -140551285:
				func_82(iVar1);
				break;
		}
		iVar1++;
	}
}

void func_16()
{
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 2))
	{
		aggregate.coffee_drinking.func_5(Local_299[Local_556.f_1008 /*8*/], 3);
	}
	switch (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]))
	{
		case 0:
			func_85();
			if (aggregate.fme_supply_train.func_900() != 4)
			{
				return;
			}
			aggregate.coffee_drinking.func_5(Local_299[Local_556.f_1008 /*8*/], 1);
			func_87();
			break;
		case 1:
			func_88();
			if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 1))
			{
				return;
			}
			aggregate.coffee_drinking.func_5(Local_299[Local_556.f_1008 /*8*/], 2);
			break;
		case 2:
			func_89();
			if (aggregate.fm_deathmatch_controller.func_2544() != 6)
			{
				return;
			}
			if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 16) && aggregate.fme_animal_tagging.func_134(4))
			{
				func_91();
			}
			func_92();
			if (!func_93())
			{
				return;
			}
			aggregate.coffee_drinking.func_5(Local_299[Local_556.f_1008 /*8*/], 3);
			break;
	}
}

void func_17()
{
	if (aggregate.fme_supply_train.func_900() != 4)
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_134(4))
	{
		aggregate.fme_animal_tagging.func_176(6);
		return;
	}
	switch (aggregate.fm_deathmatch_controller.func_2544())
	{
		case 0:
			func_94();
			aggregate.fme_animal_tagging.func_176(1);
			break;
		case 1:
			if (!func_95())
			{
				return;
			}
			aggregate.fme_animal_tagging.func_176(2);
			break;
		case 2:
			func_96();
			if (!aggregate.fme_animal_tagging.func_134(1))
			{
				return;
			}
			aggregate.fme_animal_tagging.func_176(3);
			break;
		case 3:
			func_97();
			if (!aggregate.fme_animal_tagging.func_134(2))
			{
				return;
			}
			if (func_45())
			{
				aggregate.fme_animal_tagging.func_176(4);
				return;
			}
			aggregate.fme_animal_tagging.func_176(5);
			break;
		case 4:
			func_98();
			if (!aggregate.fme_animal_tagging.func_134(262144))
			{
				return;
			}
			aggregate.fme_animal_tagging.func_176(5);
			break;
		case 5:
			func_99();
			if (Local_17.f_275 <= 0)
			{
				if (func_45() && !aggregate.fme_animal_tagging.func_134(4194304))
				{
					aggregate.fme_animal_tagging.func_174(32);
				}
				else
				{
					aggregate.fme_animal_tagging.func_174(64);
				}
			}
			else if (aggregate.fme_animal_tagging.func_134(16))
			{
				if ((Local_556.f_20.f_16 == 1320143426 && Local_556.f_20.f_549 > 0) && Local_17.f_275 < Local_556.f_20.f_549)
				{
					aggregate.fme_animal_tagging.func_174(64);
				}
				else
				{
					aggregate.fme_animal_tagging.func_174(32);
				}
				aggregate.fme_animal_tagging.func_174(131072);
			}
			else if (aggregate.fme_animal_tagging.func_134(1048576))
			{
				aggregate.fme_animal_tagging.func_174(32);
			}
			else if (aggregate.fme_animal_tagging.func_134(8388608))
			{
				aggregate.fme_animal_tagging.func_174(32);
			}
			if (!aggregate.fme_animal_tagging.func_134(32) && !aggregate.fme_animal_tagging.func_134(64))
			{
				return;
			}
			aggregate.fme_animal_tagging.func_176(6);
			break;
		case 6:
			func_101();
			break;
	}
}

void func_18(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_978[iVar0])))
		{
		}
		else if (bParam0)
		{
			aggregate.fm_mission_controller.func_3499(&(Local_556.f_978[iVar0]), 1);
		}
		else
		{
			aggregate.net_assassination.func_103(&(Local_556.f_978[iVar0]));
		}
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<5> Var12;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_553)
	{
		sVar1 = aggregate.blackwater.func_268(func_104(iVar0));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
		}
		else
		{
			if (!(Local_556.f_20.f_495[iVar0 /*2*/])->f_1)
			{
				return;
			}
			TASK::REMOVE_WAYPOINT_RECORDING(sVar1);
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 21)
	{
		func_106(iVar2);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if ((func_107(iVar3, 4) && func_108(iVar3, &Var12)) && aggregate.net_assassination.func_109(Var12, -1111171646, &uVar4, 0))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(aggregate.fm_mission_controller.func_3989(&uVar4));
			func_111(iVar3, 4);
			func_111(iVar3, 8);
		}
		iVar3++;
	}
}

void func_20()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!aggregate.fme_animal_tagging.func_134(4194304))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_113(iVar1, &iVar2))
		{
		}
		else
		{
			aggregate.net_assassination.func_114(iVar2);
			aggregate.blackwater.func_55(iVar2, 0, 0);
		}
		iVar1++;
	}
	aggregate.fme_animal_tagging.func_174(4194304);
}

int func_21(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	aggregate.fme_animal_tagging.func_40(Var0, -486752250, &uVar5, 1);
	return uVar5;
}

void func_22(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0) || iParam0 == 0)
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0);
}

bool func_23(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (!func_116(iParam0, &Var0))
	{
		return false;
	}
	aggregate.fme_animal_tagging.func_40(Var0, 256341061, &uVar5, 0);
	return uVar5;
}

void func_24(bool bParam0)
{
	if (!aggregate.binoculars.func_72(bParam0))
	{
		return;
	}
	WEAPON::_0xC3896D03E2852236(bParam0);
}

int func_25(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0) && aggregate.fme_animal_tagging.func_40(Var0, 1464077990, &uVar5, 0))
	{
		return uVar5;
	}
	return -1038436471;
}

int func_26(int iParam0)
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, 1823038874, iParam0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

int func_27(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	func_121(&Var0, iParam0, iParam1);
	aggregate.fme_animal_tagging.func_40(Var0, -486752250, &uVar5, 1);
	return uVar5;
}

bool func_28(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	func_121(&Var0, iParam0, iParam1);
	aggregate.fme_animal_tagging.func_40(Var0, 256341061, &uVar5, 1);
	return uVar5;
}

int func_29(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_121(&Var0, iParam0, iParam1) && aggregate.fme_animal_tagging.func_40(Var0, 1464077990, &uVar5, 0))
	{
		return uVar5;
	}
	return -1038436471;
}

bool func_30(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 0)
	{
		return true;
	}
	return false;
}

void func_32(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(262144) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		aggregate.fme_animal_tagging.func_336(1);
		aggregate.fme_animal_tagging.func_174(262144);
	}
	else
	{
		aggregate.fme_animal_tagging.func_336(0);
		aggregate.fme_animal_tagging.func_174(262144);
	}
}

void func_33(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(524288) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		LAW::_0x009CF9A29972C298(454742288);
		aggregate.fme_animal_tagging.func_174(524288);
	}
	else
	{
		LAW::_0x009CF9A29972C298(0);
		aggregate.fme_animal_tagging.func_174(524288);
	}
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((Local_556.f_20.f_422[iVar0 /*4*/])->f_3))
		{
		}
		else
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED((Local_556.f_20.f_422[iVar0 /*4*/])->f_3, true);
			STREAMING::REMOVE_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_126()));
		}
		iVar0++;
	}
}

void func_35()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_547)
	{
		TASK::DELETE_PATROL_ROUTE(func_127(iVar0));
		iVar0++;
	}
}

void func_36()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ANIMSCENE::_0x25557E324489393C(&(Local_556.f_950[iVar0])))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(&(Local_556.f_950[iVar0]));
		}
		iVar0++;
	}
}

void func_37()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if ((Local_556.f_20.f_422[iVar0 /*4*/])->f_2 == -1)
		{
		}
		else
		{
			GRAPHICS::_0x9CF1836C03FB67A2(&((Local_556.f_20.f_422[iVar0 /*4*/])->f_2), 1);
			(Local_556.f_20.f_422[iVar0 /*4*/])->f_2 = -1;
		}
		iVar0++;
	}
}

void func_38()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_550)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_962[iVar0])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Local_556.f_962[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_552)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_971[iVar0])))
		{
			POPULATION::_0x74C2B3DC0B294102(&(Local_556.f_971[iVar0]));
			POPULATION::_0xA1CFB35069D23C23(&(Local_556.f_971[iVar0]));
			VOLUME::_0x43F867EF5C463A53(&(Local_556.f_971[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_975[iVar0])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Local_556.f_975[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_978[iVar0])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Local_556.f_978[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_551)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_921[iVar0 /*4*/])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Local_556.f_921[iVar0 /*4*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		aggregate.annesburg.func_166(&(Local_556.f_987[iVar0]));
		iVar0++;
	}
}

void func_39()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar0 /*9*/])) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_2[iVar0 /*9*/])))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_2[iVar0 /*9*/]));
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
	func_129(Local_556.f_578.f_1);
	func_129(Local_556.f_578);
	func_129(Local_556.f_578.f_4);
	func_129(Local_556.f_578.f_5);
	func_129(Local_556.f_578.f_3);
	func_129(Local_556.f_578.f_2);
}

void func_41()
{
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_334(0);
	aggregate.fme_animal_tagging.func_174(2);
}

void func_42()
{
	if (HUD::_0xD0976CC34002DB57(func_137()))
	{
		HUD::_0xAA03F130A637D923(func_137());
	}
}

bool func_45()
{
	switch (Local_556.f_20.f_16)
	{
		case 1047079933:
		case joaat("player"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_52(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])))
	{
		return false;
	}
	*iParam1 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
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
		if (!bParam3 || !PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
		{
			return false;
		}
	}
	return true;
}

bool func_53(int iParam0)
{
	int iVar0;

	if (!aggregate.fme_animal_tagging.func_134(8192))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_553)
	{
		if (&Local_556.f_20.f_495[iVar0 /*2*/] != iParam0)
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

bool func_54(int iParam0, int iParam1, bool bParam2)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
	{
		return false;
	}
	*iParam1 = NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1);
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
		return false;
	}
	return true;
}

bool func_55(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 516423162:
		case 1583594396:
			return false;
		default:
			break;
	}
	return true;
}

void func_56(int iParam0, int iParam1)
{
	if (!MAP::DOES_BLIP_EXIST(&(Local_556.f_584[iParam0])))
	{
		return;
	}
	if (!MAP::_0xE9F676788F8D5E1E(&(Local_556.f_584[iParam0])))
	{
		return;
	}
	func_144(iParam0);
	MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 2096805056);
	MAP::_0xDEEDE7C41742E011(&(Local_556.f_584[iParam0]));
	Local_556.f_584[iParam0] = 0;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 1231609204:
			return 8;
		case 1138140145:
			return 16;
		case -1416703903:
			return 32;
		case 758533472:
			return 64;
		case -2111154143:
			return 128;
		default:
			break;
	}
	return 0;
}

void func_58(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_57(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_134(iVar0))
	{
		return;
	}
	if (func_145(iParam0, 1, bParam1))
	{
		aggregate.fme_animal_tagging.func_174(iVar0);
	}
}

void func_60()
{
	if (aggregate.fme_animal_tagging.func_134(4))
	{
		aggregate.net_assassination.func_146(0);
		aggregate.fishing_core.func_104(0);
		if (!aggregate.fme_animal_tagging.func_134(1))
		{
			func_149(func_148(), 1);
		}
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		if (func_45())
		{
			aggregate.fm_deathmatch_controller.func_231(131072);
		}
		if (aggregate.fme_animal_tagging.func_134(64))
		{
			func_150();
			return;
		}
		else if (aggregate.fme_animal_tagging.func_134(32))
		{
			func_151();
			return;
		}
	}
	else if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 64))
	{
		if (aggregate.fme_animal_tagging.func_134(32))
		{
			func_150();
			return;
		}
		else if (aggregate.fme_animal_tagging.func_134(64))
		{
			func_151();
			return;
		}
	}
	else if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192))
	{
		aggregate.fm_deathmatch_controller.func_231(131072);
		if (aggregate.fme_animal_tagging.func_134(32))
		{
			func_150();
			return;
		}
		else if (aggregate.fme_animal_tagging.func_134(64))
		{
			func_151();
			return;
		}
	}
	else if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 131072))
	{
		if (aggregate.fme_animal_tagging.func_134(32))
		{
			func_150();
			return;
		}
		else if (aggregate.fme_animal_tagging.func_134(64))
		{
			func_151();
			return;
		}
	}
	func_152();
}

void func_61()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_17.f_263.f_6)
	{
		if (VOLUME::_0xF6A8A652A6B186CD(&(Local_17.f_263[iVar0])))
		{
			VOLUME::_0xFDFECC6EE4491E11(&(Local_17.f_263[iVar0]));
		}
		iVar0++;
	}
}

void func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])))
	{
		iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
		if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_KEEP_TASK(iVar0, bParam1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	}
}

void func_63(int iParam0)
{
	if (func_153(iParam0, 1))
	{
		OBJECT::REMOVE_PICKUP(&(Local_17.f_217[iParam0 /*2*/]));
	}
}

void func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_198[iParam0])))
	{
		if (aggregate.la_alligator.func_203(iParam0, 2))
		{
			iVar0 = NETWORK::_0xD08066E00D26C448(&(Local_17.f_198[iParam0]));
			PROPSET::_SET_PROPSET_AS_NO_LONGER_NEEDED(iVar0);
		}
		else if (aggregate.la_alligator.func_203(iParam0, 4))
		{
			iVar1 = NETWORK::NET_TO_VEH(&(Local_17.f_198[iParam0]));
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0, 0))
			{
				VEHICLE::_0x8E5DA070BAD3279E(iVar1, 500f, 1, 0);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
		}
		else if (aggregate.la_alligator.func_203(iParam0, 128))
		{
			iVar2 = NETWORK::NET_TO_PED(&(Local_17.f_198[iParam0]));
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar2);
		}
		else
		{
			iVar3 = NETWORK::NET_TO_OBJ(&(Local_17.f_198[iParam0]));
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar3);
		}
	}
}

int func_69(int iParam0, var uParam1)
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

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 1779800513:
			return -590482787;
		case 1994622214:
			return -1711308722;
		case 1806659562:
			return 349772825;
		case -174676621:
			return 1657045547;
		default:
			break;
	}
	return iParam0;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case -590482787:
			return joaat("player");
		case -1711308722:
			return 1047079933;
		default:
			break;
	}
	return 1320143426;
}

void func_78(int iParam0)
{
	struct<31> Var0;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	bool bVar36;
	int iVar37;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 31))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (func_45())
	{
		if (!func_161(iVar32, &iVar34))
		{
			return;
		}
		if (!func_162(iVar34))
		{
			return;
		}
		if (func_163(iVar34))
		{
			return;
		}
		iVar33 = PLAYER::GET_PLAYER_PED(&(Local_17.f_234[iVar34 /*2*/]));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar33))
		{
			return;
		}
		if (iVar33 != iVar32)
		{
			return;
		}
		if (!Var0.f_3)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar32))
			{
				return;
			}
			if (Var0 == Var0.f_1)
			{
				return;
			}
			if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
			{
				return;
			}
			iVar35 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
			if (!PED::IS_PED_A_PLAYER(iVar35))
			{
				return;
			}
			func_164(iVar34, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar35));
			return;
		}
		if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
		{
			return;
		}
		if (func_165(iVar34, Var0, iVar32))
		{
			func_166(iVar34);
		}
		return;
	}
	if (!func_167(iVar32, &iVar31, &bVar36))
	{
		return;
	}
	if (!bVar36)
	{
		if (Var0.f_3)
		{
			func_168(iVar31);
		}
		return;
	}
	if (ENTITY::GET_ENTITY_HEALTH(Var0) == 0)
	{
		if (!Var0.f_3 && !Var0.f_24)
		{
			Var0.f_3 = 1;
		}
	}
	if (!Var0.f_3 || Var0.f_24)
	{
		if (!bVar36 || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar32))
		{
			return;
		}
		if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
		{
			return;
		}
		iVar37 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
		if (!PED::IS_PED_A_PLAYER(iVar37))
		{
			return;
		}
		func_169(iVar31, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar37));
		return;
	}
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return;
	}
	if (func_170(Var0, iVar32, iVar31))
	{
		func_171(iVar31);
	}
}

void func_79(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Var0) || !ENTITY::IS_ENTITY_A_PED(Var0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1) || !ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar3))
	{
		return;
	}
	if (func_45())
	{
		if (!PED::IS_PED_A_PLAYER(iVar2))
		{
			return;
		}
		if (!func_161(iVar2, &iVar4))
		{
			return;
		}
		if (!func_162(iVar4))
		{
			return;
		}
		if (func_163(iVar4))
		{
			return;
		}
		func_164(iVar4, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3));
	}
	else
	{
		if (!func_167(iVar2, &iVar5, &bVar6) || !bVar6)
		{
			return;
		}
		func_169(iVar5, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar3));
	}
}

void func_80(int iParam0)
{
	int iVar0;
	int iVar8;
	bool bVar9;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 8))
	{
		return;
	}
	if (!OBJECT::DOES_PICKUP_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP(iVar0))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 2)
	{
		if (!aggregate.fme_challenges.func_1307(iVar8, 1))
		{
		}
		else if (&Local_17.f_217[iVar8 /*2*/] != iVar0)
		{
		}
		else
		{
			bVar9 = true;
		}
		else
		{
			iVar8++;
		}
	}
	if (!bVar9)
	{
		return;
	}
	OBJECT::REMOVE_PICKUP(&(Local_17.f_217[iVar8 /*2*/]));
	func_174(11, iVar8, aggregate.dynamic_craft_scenario.func_194(0, 8), -1);
}

void func_81(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 53:
			func_175(iParam0);
			break;
	}
}

void func_82(int iParam0)
{
	struct<4> Var0;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	vector3 vVar10;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 6))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 21)
	{
		if (((Local_17.f_2[iVar8 /*9*/])->f_2 == 0 || (Local_17.f_2[iVar8 /*9*/])->f_2 == 1824637041) || (Local_17.f_2[iVar8 /*9*/])->f_2 == 516423162)
		{
		}
		else if (aggregate.fme_challenges.func_1307(iVar8, 1))
		{
		}
		else if (aggregate.la_alligator.func_203(iVar8, 67108864))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar8 /*9*/])))
		{
		}
		else
		{
			iVar9 = NETWORK::NET_TO_PED(&(Local_17.f_2[iVar8 /*9*/]));
			if (PED::IS_PED_DEAD_OR_DYING(iVar9, true))
			{
			}
			else
			{
				vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
				if (BUILTIN::VDIST(vVar10, Var0.f_3) > PED::_0x2BA9D7BF629F920C(iVar9))
				{
				}
				else
				{
					aggregate.la_alligator.func_225(iVar8, 67108864);
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_2[iVar8 /*9*/])))
					{
					}
					else
					{
						if (PED::IS_PED_USING_ANY_SCENARIO(iVar9))
						{
							PED::_0x62FDAD5E01D2DD47(iVar9, Var0.f_3, 3, 0);
						}
						if (func_178(iVar9))
						{
							if (ENTITY::_0x0C9DBF48C6BA6E4C(iVar9, Var0.f_3, 17))
							{
								TASK::TASK_AIM_AT_COORD(iVar9, Var0.f_3, 2000, 0, 0);
							}
							else
							{
								bVar6 = WEAPON::GET_BEST_PED_WEAPON(iVar9, false, false);
								if (aggregate.binoculars.func_72(bVar6))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(iVar9, bVar6, false, 0, false, false);
								}
								TASK::OPEN_SEQUENCE_TASK(&iVar7);
								TASK::TASK_REACT(iVar9, 0, Var0.f_3, "Default_Panic", 0.5f, 0f, 4);
								TASK::TASK_SWAP_WEAPON(iVar9, 1, 1, 0, 0);
								TASK::TASK_INVESTIGATE(iVar9, Var0.f_3, 4000, 0);
								aggregate.fme_condor_egg.func_1296(iVar9, &iVar7, 0, 0, 1, 1);
							}
						}
						else
						{
							bVar6 = WEAPON::GET_BEST_PED_WEAPON(iVar9, false, false);
							if (aggregate.binoculars.func_72(bVar6))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar9, bVar6, false, 0, false, false);
								TASK::OPEN_SEQUENCE_TASK(&iVar7);
								TASK::TASK_REACT(iVar9, 0, Var0.f_3, "Default_Panic", 0.5f, 0f, 4);
								TASK::TASK_SWAP_WEAPON(iVar9, 1, 1, 0, 0);
								aggregate.fme_condor_egg.func_1296(iVar9, &iVar7, 0, 0, 1, 1);
							}
							else
							{
								TASK::TASK_REACT(iVar9, 0, Var0.f_3, "Default_Panic", 2f, 0f, 4);
							}
						}
						aggregate.la_alligator.func_225(iVar8, 67108864);
					}
				}
			}
		}
		iVar8++;
	}
}

void func_85()
{
	bool bVar0;
	int iVar1;

	switch (aggregate.fme_supply_train.func_900())
	{
		case 0:
			if (Local_17.f_278 == -1 && aggregate.fm_deathmatch_controller.func_2544() != 6)
			{
				return;
			}
			if (func_180(Local_17.f_279))
			{
				aggregate.fme_animal_tagging.func_174(2097152);
				if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_17.f_279)
				{
					func_181();
				}
			}
			func_182();
			iVar1 = 0;
			while (iVar1 < 7)
			{
				Local_556.f_584.f_31[iVar1] = 255;
				iVar1++;
			}
			func_183();
			if (func_184())
			{
				aggregate.fme_animal_tagging.func_174(1);
			}
			aggregate.fme_animal_tagging.func_212(1);
			break;
		case 1:
			if (!aggregate.fme_animal_tagging.func_50(func_187(), &(Local_556.f_577), 600, Local_556, 0, 0))
			{
				aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 2);
				return;
			}
			func_190();
			aggregate.fme_animal_tagging.func_212(2);
			break;
		case 2:
			func_191();
			func_192();
			func_193();
			aggregate.net_assassination.func_194();
			aggregate.net_assassination.func_195();
			aggregate.net_assassination.func_195();
			aggregate.net_assassination.func_194();
			aggregate.net_assassination.func_194();
			aggregate.net_assassination.func_195();
			aggregate.net_assassination.func_194();
			aggregate.net_assassination.func_194();
			aggregate.net_assassination.func_195();
			aggregate.net_assassination.func_195();
			func_204();
			Local_556.f_20.f_555 = func_205();
			if (aggregate.aberdeenpigfarm.func_175(Local_556.f_20.f_15, 16384))
			{
				Local_556.f_20.f_549 = (Local_556.f_20.f_549 + Local_556.f_20.f_554);
			}
			if (!func_206())
			{
				aggregate.fme_animal_tagging.func_174(4096);
			}
			aggregate.fme_animal_tagging.func_212(3);
			break;
		case 3:
			bVar0 = true;
			if (!func_207())
			{
				bVar0 = false;
			}
			if (!func_208())
			{
				bVar0 = false;
			}
			if (!func_209())
			{
				bVar0 = false;
			}
			if (!bVar0)
			{
				return;
			}
			func_18(1);
			func_210();
			aggregate.fme_animal_tagging.func_212(4);
			break;
	}
}

void func_87()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 32))
	{
		Local_556.f_1005 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 32);
	}
}

void func_88()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (aggregate.la_alligator.func_203(iVar0, 256))
		{
		}
		else if (aggregate.la_alligator.func_203(iVar0, 2))
		{
			if (!func_211(&(Local_556.f_20.f_422[iVar0 /*4*/])))
			{
				return;
			}
		}
		else if (!func_212(&(Local_556.f_20.f_422[iVar0 /*4*/])))
		{
			return;
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_556.f_20.f_548)
	{
		if (!func_212(func_21(iVar1)))
		{
			return;
		}
		if (!func_213(func_23(iVar1)))
		{
			return;
		}
		if ((func_214(iVar1) || aggregate.la_alligator.func_203(iVar1, 65536)) && !func_212(func_25(iVar1)))
		{
			return;
		}
		iVar1++;
	}
	iVar4 = 0;
	while (iVar4 < Local_556.f_20.f_555)
	{
		iVar2 = func_26(iVar4);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_212(func_27(iVar4, iVar3)))
			{
				return;
			}
			if (!func_212(func_29(iVar4, iVar3)))
			{
				return;
			}
			if (!func_213(func_28(iVar4, iVar3)))
			{
				return;
			}
			iVar3++;
		}
		iVar4++;
	}
	if (!aggregate.net_assassination.func_215(func_137(), 30, Local_556, 0, 0))
	{
		aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 2);
		return;
	}
	func_216();
	func_217();
	aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 1);
}

void func_89()
{
	func_218();
	func_219();
	func_220();
	func_221();
	func_222();
	func_223();
	func_224();
	func_225();
	func_226();
	func_227();
	func_228(Local_299[Local_556.f_1008 /*8*/]);
	func_229();
	func_230();
	func_231();
	func_232();
	func_233();
	func_234();
	func_235();
}

void func_91()
{
	var uVar0;

	uVar0 = func_236(func_45());
	aggregate.net_assassination.func_237(uVar0);
}

void func_92()
{
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 16))
	{
		return;
	}
	Local_556.f_1004 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 16);
}

bool func_93()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 16))
	{
		return false;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Local_556.f_1004, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 8000)
	{
		return false;
	}
	return true;
}

void func_94()
{
	vector3 vVar0;

	Local_17.f_1 = Local_556.f_20.f_15;
	vVar0 = { aggregate.fme_animal_tagging.func_920(vVar0, Local_556.f_20.f_20, 0f) };
	Local_17.f_270 = vVar0.x;
	Local_17.f_270 = vVar0.y;
}

bool func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar6;
	int iVar7;

	iVar0 = aggregate.fm_deathmatch_controller.func_962();
	iVar1 = aggregate.flow_controller.func_327(iVar0);
	iVar2 = aggregate.flow_controller.func_389(iVar0, Local_556.f_20.f_556);
	if (aggregate.dynamic_craft_scenario.func_156(iVar1) == -860962681)
	{
		return true;
	}
	if (Local_17.f_263.f_6 >= iVar2 || Local_17.f_263.f_6 >= 4)
	{
		return true;
	}
	iVar7 = Local_17.f_263.f_6;
	vVar3 = { aggregate.flow_controller.func_390(iVar0, Local_556.f_20.f_556, iVar7) };
	if (!func_244(iVar7, vVar3, 20f, -541064893, &bVar6))
	{
		if (bVar6)
		{
			aggregate.fme_animal_tagging.func_174(4);
			if (!aggregate.fme_animal_tagging.func_134(2097152))
			{
				aggregate.net_assassination.func_245(Local_17.f_279, Local_556.f_2, 0);
			}
			return true;
		}
	}
	else
	{
		Local_17.f_263.f_6++;
		Local_17.f_263.f_5 = 0;
	}
	return false;
}

void func_96()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (aggregate.fme_animal_tagging.func_134(1))
	{
		return;
	}
	func_246();
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 18)
	{
		if (&Local_556.f_20.f_422[iVar3 /*4*/] == 0)
		{
		}
		else if (((((func_247(iVar3, &iVar4) && iVar4 >= 0) && iVar4 < 21) && &Local_556.f_20.f_22[iVar4 /*19*/] == 391477998) && !func_248(iVar4)) && aggregate.la_alligator.func_203(iVar4, 8))
		{
		}
		else
		{
			if (aggregate.la_alligator.func_203(iVar3, 4))
			{
				iVar1++;
				Jump @202; //curOff = 154
			}
			else if (aggregate.la_alligator.func_203(iVar3, 2))
			{
				Jump @202; //curOff = 170
			}
			else if (aggregate.la_alligator.func_203(iVar3, 128))
			{
				iVar2++;
			}
			else
			{
				iVar0++;
			}
		}
		iVar3++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) < iVar0)
	{
		aggregate.fme_animal_tagging.func_174(4);
		if (!aggregate.fme_animal_tagging.func_134(2097152))
		{
			aggregate.net_assassination.func_245(Local_17.f_279, Local_556.f_2, 0);
		}
		return;
	}
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iVar1);
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(0) < iVar1)
	{
		aggregate.fme_animal_tagging.func_174(4);
		if (!aggregate.fme_animal_tagging.func_134(2097152))
		{
			aggregate.net_assassination.func_245(Local_17.f_279, Local_556.f_2, 0);
		}
		return;
	}
	iVar5 = (func_249() + iVar2);
	iVar6 = 0;
	while (iVar6 < 21)
	{
		if (&Local_556.f_20.f_22[iVar6 /*19*/] == 0)
		{
		}
		else if (aggregate.la_alligator.func_203(iVar6, 8) && !func_248(iVar6))
		{
		}
		else if (((((((aggregate.la_alligator.func_203(iVar6, 64) && func_250(iVar6, &iVar4)) && &Local_556.f_20.f_22[iVar6 /*19*/] != joaat("target")) && iVar4 >= 0) && iVar4 < 21) && &Local_556.f_20.f_22[iVar4 /*19*/] == 391477998) && !func_248(iVar4)) && aggregate.la_alligator.func_203(iVar4, 8))
		{
		}
		else
		{
			iVar5++;
		}
		iVar6++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar5);
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < iVar5)
	{
		aggregate.fme_animal_tagging.func_174(4);
		if (!aggregate.fme_animal_tagging.func_134(2097152))
		{
			aggregate.net_assassination.func_245(Local_17.f_279, Local_556.f_2, 0);
		}
		return;
	}
	func_251();
	aggregate.fme_animal_tagging.func_174(1);
}

void func_97()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 1))
	{
		return;
	}
	if (!func_252())
	{
		return;
	}
	if (!func_253())
	{
		return;
	}
	if (!func_254())
	{
		return;
	}
	if (!func_255())
	{
		return;
	}
	aggregate.fme_animal_tagging.func_174(2);
}

void func_98()
{
	int iVar0;

	if (aggregate.fme_animal_tagging.func_134(262144))
	{
		return;
	}
	if (func_256())
	{
		aggregate.fme_animal_tagging.func_174(4);
		return;
	}
	if (!aggregate.fme_animal_tagging.func_134(524288))
	{
		func_257();
	}
	iVar0 = aggregate.fm_deathmatch_controller.func_962();
	if (iVar0 == joaat("player"))
	{
		if (Local_556.f_946 < 32)
		{
			func_259();
			return;
		}
		if (!func_260())
		{
			Local_556.f_946 = 0;
			Local_556.f_946.f_1 = -1;
			Local_556.f_946.f_3 = 0;
			Local_556.f_946.f_2 = 0;
			return;
		}
		aggregate.fme_animal_tagging.func_174(262144);
	}
	else if (iVar0 == 1047079933)
	{
		if (Local_556.f_946 < 32)
		{
			func_261();
			return;
		}
		if (!func_262())
		{
			Local_556.f_946 = 0;
			Local_556.f_946.f_1 = -1;
			Local_556.f_946.f_3 = 0;
			Local_556.f_946.f_2 = 0;
			return;
		}
		aggregate.fme_animal_tagging.func_174(262144);
	}
}

void func_99()
{
	func_263();
	func_264();
	if (func_45())
	{
		func_265();
	}
	else
	{
		func_101();
	}
}

void func_101()
{
	int iVar0;

	iVar0 = Local_17.f_259;
	func_267(iVar0);
	func_268(&(Local_17.f_259), 21);
}

struct<8> func_104(int iParam0)
{
	struct<5> Var0;
	struct<8> Var5;

	if (func_271(iParam0, &Var0))
	{
		aggregate.net_assassination.func_109(Var0, -1111171646, &Var5, 1);
	}
	return Var5;
}

void func_106(int iParam0)
{
	struct<8> Var0;
	char* sVar8;

	if (!func_272(iParam0, &Var0))
	{
		return;
	}
	sVar8 = aggregate.blackwater.func_268(Var0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar8))
	{
		return;
	}
	TASK::REMOVE_WAYPOINT_RECORDING(sVar8);
}

bool func_107(int iParam0, int iParam1)
{
	return aggregate.aberdeenpigfarm.func_175(&(Local_556.f_20.f_533[iParam0 /*4*/]), iParam1);
}

bool func_108(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 644584216;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

void func_111(int iParam0, int iParam1)
{
	aggregate.aberdeenpigfarm.func_163(Local_556.f_20.f_533[iParam0 /*4*/], iParam1);
}

int func_112()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1527836996, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_113(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if ((!func_119(&Var0) || !func_120(&Var0, -49926176, iParam0, 0)) || !aggregate.fme_animal_tagging.func_40(Var0, -1296487272, &uVar5, 1))
	{
		return false;
	}
	*iParam1 = uVar5;
	if (*iParam1 == -1)
	{
		return false;
	}
	return true;
}

bool func_116(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 331094197;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_119(var uParam0)
{
	*uParam0 = Local_556.f_577;
	uParam0->f_2 = -872351721;
	uParam0->f_3 = Local_556.f_20.f_556;
	return (DATAFILE::_0x603AC35FD4602C76(Local_556.f_577) && DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0));
}

bool func_120(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = iParam3;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
}

bool func_121(var uParam0, int iParam1, int iParam2)
{
	if ((func_119(uParam0) && func_120(uParam0, 1823038874, iParam1, 0)) && func_120(uParam0, -176401167, iParam2, 0))
	{
		return true;
	}
	return false;
}

char* func_126()
{
	return "scr_distance_smoke";
}

char[] func_127(int iParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, "miss_FMAS_ROUTE", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringConCat(&cVar0, aggregate.error_listener.func_18(Local_556), 32);
	return aggregate.fm_mission_controller.func_3989(&cVar0);
}

void func_129(int iParam0)
{
	if (iParam0 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iParam0);
	}
}

void func_130()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_284(iVar0);
		iVar0++;
	}
}

void func_131()
{
	int iVar0;

	aggregate.fme_escaped_convicts.func_736(&(Local_556.f_584.f_22));
	aggregate.fme_escaped_convicts.func_736(&(Local_556.f_584.f_23));
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_551)
	{
		aggregate.fme_escaped_convicts.func_736(Local_556.f_584.f_24[iVar0]);
		iVar0++;
	}
}

void func_132()
{
	if (aggregate.aberdeenpigfarm.func_165(Local_556.f_584.f_331))
	{
		_NAMESPACE71::_0x2F901291EF177B02(Local_556.f_584.f_331, 0);
		Local_556.f_584.f_331 = 0;
	}
	aggregate.fme_animal_tagging.func_527(&(Local_556.f_584.f_91), 0, 0);
	aggregate.fme_animal_tagging.func_244(&(Local_556.f_584.f_76), 1);
}

void func_133()
{
	aggregate.fme_escaped_convicts.func_736(&(Local_556.f_584.f_332));
	if (!aggregate.fishing_core.func_107(Local_556.f_584.f_333))
	{
		return;
	}
	_NAMESPACE71::_0x2F901291EF177B02(Local_556.f_584.f_333, 0);
}

void func_134()
{
	if (!aggregate.aberdeenpigfarm.func_165(Local_556.f_584.f_334))
	{
		return;
	}
	Local_556.f_584.f_336 = 0;
	_NAMESPACE71::_0x2F901291EF177B02(Local_556.f_584.f_334, 0);
	Local_556.f_584.f_334 = 0;
}

void func_135()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_290(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_291(iVar0);
		iVar0++;
	}
}

char* func_137()
{
	return "NAS";
}

int func_142(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	if (MISC::_0x8F4F050054005C27(&(Global_1138889->f_1998), iParam0))
	{
		return 1;
	}
	if (Global_1138889->f_1997 >= 21)
	{
		return 0;
	}
	Global_1138889->f_1975[Global_1138889->f_1997] = iParam0;
	Global_1138889->f_1997++;
	return 1;
}

void func_144(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = func_294(iParam0);
	bVar1 = aggregate.fme_challenges.func_1307(iParam0, 128);
	bVar2 = (!aggregate.fme_challenges.func_1307(iParam0, 8) && !aggregate.fme_challenges.func_1307(iParam0, 1024));
	if (MAP::DOES_BLIP_EXIST(&(Local_556.f_584[iParam0])))
	{
		if (bVar0)
		{
			if (!aggregate.la_alligator.func_203(iParam0, 256))
			{
				aggregate.la_alligator.func_225(iParam0, 256);
				if (bVar1)
				{
					MAP::_0xB059D7BD3D78C16F(&(Local_556.f_584[iParam0]), 942020339);
				}
				else
				{
					MAP::_0xB059D7BD3D78C16F(&(Local_556.f_584[iParam0]), 2096805056);
				}
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), -662251075);
			}
		}
		else if (aggregate.la_alligator.func_203(iParam0, 256))
		{
			aggregate.la_alligator.func_225(iParam0, 256);
			MAP::_0xB059D7BD3D78C16F(&(Local_556.f_584[iParam0]), -662251075);
			if (bVar1)
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 942020339);
			}
			else
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 2096805056);
			}
		}
		return;
	}
	if (bVar1)
	{
		Local_556.f_584[iParam0] = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_COP"), NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/])));
		MAP::SET_BLIP_SPRITE(&(Local_556.f_584[iParam0]), -1596758107 /* GXTEntry: "Lawman" */, false);
		if (bVar0)
		{
			if (bVar2)
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 1765354131);
			}
			else
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), -662251075);
			}
			aggregate.la_alligator.func_225(iParam0, 256);
		}
		else
		{
			aggregate.la_alligator.func_225(iParam0, 256);
			MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 942020339);
		}
	}
	else
	{
		Local_556.f_584[iParam0] = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/])));
		if (bVar0)
		{
			if (bVar2)
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 1765354131);
			}
			else
			{
				MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), -662251075);
			}
			aggregate.la_alligator.func_225(iParam0, 256);
		}
		else
		{
			MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 942020339);
			aggregate.la_alligator.func_225(iParam0, 256);
		}
	}
}

bool func_145(int iParam0, int iParam1, bool bParam2)
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

int func_148()
{
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return 2;
	}
	else if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 64))
	{
		return 3;
	}
	else if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192))
	{
		return 1;
	}
	else if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 131072))
	{
		return 4;
	}
	return 0;
}

void func_149(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam1)
	{
		func_302(Local_556.f_2, iParam0 != 2);
	}
	if (iParam0 == 2 && (aggregate.net_assassination.func_303(iVar0, 1) || aggregate.net_assassination.func_303(iVar0, 32)))
	{
		aggregate.fm_deathmatch_controller.func_445(4);
		aggregate.fm_deathmatch_controller.func_445(8);
	}
	if (!bParam1)
	{
		aggregate.fme_animal_tagging.func_174(1);
	}
	if (Local_556.f_1008 >= 32 || Local_556.f_1008 < 0)
	{
		return;
	}
	aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 2097152);
}

void func_150()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		aggregate.net_ambient_content_evaluator.func_81(Local_556.f_1, 0, 0);
		return;
	}
	bVar0 = false;
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		bVar0 = true;
	}
	func_306(bVar0, &bVar1, &bVar2);
	aggregate.net_ambient_content_evaluator.func_81(Local_556.f_1, bVar1 != bVar2, bVar0);
	if (aggregate.fme_animal_tagging.func_134(1))
	{
		func_307(Local_556.f_2, bVar0, bVar1, bVar2);
	}
}

void func_151()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		aggregate.net_ambient_content_evaluator.func_82(Local_556.f_1, 0);
		return;
	}
	bVar0 = false;
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		bVar0 = true;
	}
	func_306(bVar0, &bVar1, &bVar2);
	aggregate.net_ambient_content_evaluator.func_82(Local_556.f_1, bVar0);
	if (aggregate.fme_animal_tagging.func_134(1))
	{
		func_307(Local_556.f_2, bVar0, bVar1, bVar2);
	}
}

void func_152()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		aggregate.net_ambient_content_evaluator.func_26(Local_556.f_1, 0);
		return;
	}
	bVar0 = false;
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		bVar0 = true;
	}
	aggregate.net_ambient_content_evaluator.func_26(Local_556.f_1, bVar0);
	func_306(bVar0, &bVar1, &bVar2);
	if (aggregate.fme_animal_tagging.func_134(1))
	{
		func_307(Local_556.f_2, bVar0, bVar1, bVar2);
	}
}

bool func_153(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 2)
	{
		return false;
	}
	if (!aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		return false;
	}
	if (bParam1 && !OBJECT::DOES_PICKUP_EXIST(&(Local_17.f_217[iParam0 /*2*/])))
	{
		return false;
	}
	return true;
}

bool func_161(int iParam0, int iParam1)
{
	int iVar0;

	if (!PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam0);
	if (iVar0 == 255)
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	*iParam1 = 0;
	while (*iParam1 < 7)
	{
		if (&Local_17.f_234[*iParam1 /*2*/] != iVar0)
		{
		}
		else
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_162(int iParam0)
{
	if (!NETWORK::_0x255A5EF65EDA9167(&(Local_17.f_234[iParam0 /*2*/])))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_234[iParam0 /*2*/])))
	{
		return false;
	}
	return true;
}

bool func_163(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Local_17.f_249[iVar0]), iVar1);
}

void func_164(int iParam0, int iParam1)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_174(9, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8), iParam1);
}

bool func_165(int iParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, int iParam32)
{
	if (func_314(Param1.f_1))
	{
		return true;
	}
	if (func_315(Param1.f_1))
	{
		return true;
	}
	if (Param1.f_5 == joaat("weapon_fall") && (PED::_0x9682F850056C9ADE(iParam32) && PED::_0x0C31C51168E80365(iParam32) == PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Param1.f_1) && ENTITY::IS_ENTITY_A_PED(Param1.f_1))
	{
		return false;
	}
	if (aggregate.fm_mission_controller.func_267(iParam0) == PLAYER::PLAYER_ID())
	{
		return true;
	}
	return false;
}

void func_166(int iParam0)
{
	AUDIO::PLAY_SOUND(aggregate.net_assassination.func_317(), aggregate.fme_animal_tagging.func_683(), false, 0, true, 0);
	func_174(1, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8), PLAYER::PLAYER_ID());
}

bool func_167(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	if (!NETWORK::_0xB07D3185E11657A5(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::PED_TO_NET(iParam0);
	iVar1 = 0;
	while (iVar1 < 21)
	{
		if ((Local_17.f_2[iVar1 /*9*/])->f_2 == 0)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar1 /*9*/])))
		{
		}
		else if (&Local_17.f_2[iVar1 /*9*/] != iVar0)
		{
		}
		else
		{
			*iParam1 = iVar1;
			if ((Local_17.f_2[iVar1 /*9*/])->f_2 == joaat("target") || aggregate.fme_challenges.func_1307(iVar1, 67108864))
			{
				*bParam2 = 1;
			}
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_168(int iParam0)
{
	if (aggregate.fme_challenges.func_1307(iParam0, 4096) && aggregate.fm_mission_controller.func_267(iParam0) != 1824637041)
	{
		aggregate.fme_challenges.func_1108(-514316475, 0, 0);
	}
}

void func_169(int iParam0, int iParam1)
{
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_174(8, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8), iParam1);
}

bool func_170(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, int iParam31, int iParam32)
{
	if (func_314(Param0.f_1))
	{
		return true;
	}
	if (func_315(Param0.f_1))
	{
		return true;
	}
	if (Param0.f_5 == joaat("weapon_fall") && (PED::_0x9682F850056C9ADE(iParam31) && PED::_0x0C31C51168E80365(iParam31) == PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Param0.f_1) && ENTITY::IS_ENTITY_A_PED(Param0.f_1))
	{
		return false;
	}
	if (Local_17.f_2[iParam32 /*9*/])->f_5 == PLAYER::PLAYER_ID()
	{
		return true;
	}
	return false;
}

void func_171(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 21)
	{
		return;
	}
	if (&Local_556.f_20.f_22[iParam0 /*19*/] != joaat("target") && &Local_556.f_20.f_22[iParam0 /*19*/] != 391477998)
	{
		return;
	}
	func_313(iParam0, &iVar0, &iVar1);
	if (MISC::IS_BIT_SET(&(Local_556.f_994[iVar0]), iVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND(aggregate.net_assassination.func_317(), aggregate.fme_animal_tagging.func_683(), false, 0, true, 0);
	func_174(7, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8), -1);
	if ((!MISC::IS_BIT_SET(&(Local_556.f_996[iVar0]), iVar1) && Local_556.f_20 == 1657045547) && func_321(iParam0))
	{
		aggregate.fme_animal_tagging.func_174(1024);
	}
	MISC::SET_BIT(Local_556.f_994[iVar0], iVar1);
	MISC::SET_BIT(Local_556.f_996[iVar0], iVar1);
}

void func_174(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<8> Var0;

	Var0.f_4 = iParam0;
	Var0.f_6 = iParam1;
	Var0.f_7 = iParam3;
	func_323(&Var0, uParam2);
}

void func_175(int iParam0)
{
	struct<8> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (Var0.f_5 != Local_556)
	{
		return;
	}
	func_324(&Var0);
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if ((((Var0.f_4 == 4 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 5) || Var0.f_4 == 7)
	{
		if (Var0.f_6 < 0)
		{
			return;
		}
		if (Var0.f_6 >= 21)
		{
			return;
		}
	}
	switch (Var0.f_4)
	{
		case 7:
			if (aggregate.fme_challenges.func_1307(Var0.f_6, 134217728))
			{
				return;
			}
			if (!NETWORK::_0x255A5EF65EDA9167(Var0.f_1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_1))
			{
				return;
			}
			func_325(Var0.f_6, Var0.f_1);
			break;
		case 1:
			if (func_163(Var0.f_6))
			{
				return;
			}
			(Local_17.f_234[Var0.f_6 /*2*/])->f_1 = PLAYER::INT_TO_PLAYERINDEX(Var0.f_7);
			func_326(Var0.f_6);
			break;
		case 4:
			aggregate.net_assassination.func_327(Var0.f_6, Var0.f_1);
			break;
		case 9:
			func_328(Var0.f_6, PLAYER::INT_TO_PLAYERINDEX(Var0.f_7));
			break;
		case 8:
			func_329(Var0.f_6, PLAYER::INT_TO_PLAYERINDEX(Var0.f_7));
			break;
		case 5:
			aggregate.net_assassination.func_327(Var0.f_6, Var0.f_1);
			break;
		case 3:
			aggregate.net_assassination.func_327(Var0.f_6, Var0.f_1);
			break;
		case 6:
			aggregate.net_assassination.func_327(Var0.f_6, Var0.f_1);
			break;
		case 10:
			func_333(Var0.f_6, Var0.f_1);
			break;
		case 11:
			func_334(Var0.f_6);
			break;
	}
}

bool func_178(int iParam0)
{
	bool bVar0;

	bVar0 = joaat("weapon_unarmed");
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, false, 0, false);
	if (aggregate.binoculars.func_72(bVar0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			return true;
		}
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			return true;
		}
		if (WEAPON::_0x959383DCD42040DA(bVar0))
		{
			return true;
		}
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &bVar0, false, 1, false);
	if (aggregate.binoculars.func_72(bVar0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
		{
			return true;
		}
		if (WEAPON::_0x0556E9D2ECF39D01(bVar0))
		{
			return true;
		}
		if (WEAPON::_0x959383DCD42040DA(bVar0))
		{
			return true;
		}
	}
	return false;
}

bool func_180(int iParam0)
{
	int iVar0;

	iVar0 = aggregate.flow_controller.func_381(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return aggregate.long_update.func_788(iVar0, 2);
}

void func_181()
{
	aggregate.net_assassination.func_337(512);
}

void func_182()
{
	func_338("NAS_NEUTRAL_", &(Local_556.f_578));
	func_338("NAS_HOSTILE_", &(Local_556.f_578.f_1));
	func_338("NAS_LAW_NEUTRAL_", &(Local_556.f_578.f_2));
	func_338("NAS_LAW_HOSTILE_", &(Local_556.f_578.f_3));
	func_338("NAS_BRAWLER_A_", &(Local_556.f_578.f_4));
	func_338("NAS_BRAWLER_B_", &(Local_556.f_578.f_5));
	func_339(Local_556.f_578);
	func_339(Local_556.f_578.f_1);
	func_339(Local_556.f_578.f_2);
	func_339(Local_556.f_578.f_4);
	func_339(Local_556.f_578.f_5);
	func_339(Local_556.f_578.f_3);
	func_340(1, Local_556.f_578, Local_556.f_578.f_1, 1);
	func_340(1, Local_556.f_578.f_4, Local_556.f_578.f_1, 1);
	func_340(1, Local_556.f_578.f_5, Local_556.f_578.f_1, 1);
	func_340(1, Local_556.f_578.f_2, Local_556.f_578.f_3, 1);
	func_340(1, Local_556.f_578.f_2, Local_556.f_578, 1);
	func_340(1, Local_556.f_578.f_2, Local_556.f_578.f_1, 1);
	func_340(1, Local_556.f_578.f_3, Local_556.f_578, 1);
	func_340(1, Local_556.f_578.f_3, Local_556.f_578.f_1, 1);
	func_340(1, Local_556.f_578.f_2, 707888648, 1);
	func_340(1, Local_556.f_578.f_3, 707888648, 1);
	func_340(6, Local_556.f_578.f_4, Local_556.f_578.f_5, 1);
}

void func_183()
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
		else if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar2) != Local_17.f_279)
		{
		}
		else
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		iVar1++;
	}
	Local_556.f_958 = uVar0;
}

bool func_184()
{
	int iVar0;

	iVar0 = func_341(aggregate.fm_deathmatch_controller.func_962(), 0);
	if (iVar0 <= 3)
	{
		return true;
	}
	return false;
}

int func_187()
{
	return 1926687966;
}

void func_190()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 206)
	{
		iVar1 = func_342(iVar0, 1);
		func_344(&(Local_556.f_577), iVar1, func_343(iVar1));
		iVar0++;
	}
}

void func_191()
{
	struct<5> Var0;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	vector3 vVar16;
	var uVar19;
	var uVar20;

	iVar5 = 600000;
	Local_556.f_20.f_17 = 105f;
	Local_556.f_20.f_18 = 85f;
	Local_556.f_20.f_19 = 160f;
	Local_556.f_20.f_20 = 120f;
	Local_556.f_20.f_21 = 100f;
	Local_556.f_20.f_14 = 100f;
	Local_556.f_20.f_13 = 18f;
	Local_556.f_20.f_4 = 300000;
	Local_556.f_20.f_6 = 6;
	if (func_119(&Var0))
	{
		aggregate.fme_supply_train.func_39(Var0, 92190263, &iVar5, 1);
		aggregate.fme_supply_train.func_39(Var0, -2129803861, &(Local_556.f_20.f_4), 0);
		aggregate.fme_supply_train.func_39(Var0, 1628979087, &(Local_556.f_20.f_6), 0);
		aggregate.fme_condor_egg.func_42(Var0, -185755803, &bVar6, 0);
		aggregate.fme_condor_egg.func_42(Var0, 458129012, &bVar9, 0);
		aggregate.fme_condor_egg.func_42(Var0, 1787479687, &bVar7, 0);
		aggregate.fme_condor_egg.func_42(Var0, 1137547076, &bVar11, 0);
		aggregate.fme_condor_egg.func_42(Var0, 2066595802, &bVar8, 0);
		aggregate.fme_condor_egg.func_42(Var0, -1770081554, &bVar10, 0);
		aggregate.fme_condor_egg.func_42(Var0, 2053368303, &bVar13, 0);
		aggregate.fme_animal_tagging.func_143(Var0, 582819194, &vVar16, 0);
		aggregate.fme_animal_tagging.func_143(Var0, -1882633578, &(Local_556.f_20.f_10), 0);
		aggregate.fme_animal_tagging.func_142(Var0, -1103749002, &uVar19, 0);
		aggregate.fme_animal_tagging.func_142(Var0, 79787630, &(Local_556.f_20.f_17), 0);
		aggregate.fme_animal_tagging.func_142(Var0, 465120035, &(Local_556.f_20.f_18), 0);
		aggregate.fme_animal_tagging.func_142(Var0, 219784559, &(Local_556.f_20.f_19), 0);
		aggregate.fme_animal_tagging.func_142(Var0, -485657984, &(Local_556.f_20.f_20), 0);
		aggregate.fme_animal_tagging.func_142(Var0, -1925214904, &(Local_556.f_20.f_21), 0);
		aggregate.fme_animal_tagging.func_142(Var0, 265695803, &(Local_556.f_20.f_13), 0);
		aggregate.fme_condor_egg.func_42(Var0, 1852727176, &bVar12, 0);
		aggregate.fme_condor_egg.func_42(Var0, 2092186359, &bVar14, 0);
		if (!aggregate.fme_condor_egg.func_42(Var0, 413379496, &bVar15, 0))
		{
			bVar15 = true;
		}
	}
	Local_556.f_20.f_554 = func_349(Local_17.f_278);
	Local_556.f_20.f_2 = iVar5;
	Local_556.f_20.f_7 = { vVar16 };
	Local_556.f_20.f_14 = uVar19;
	if (aggregate.fme_animal_tagging.func_40(Var0, 1855722710, &uVar20, 0))
	{
		Local_556.f_20.f_3 = uVar20;
	}
	if (bVar6)
	{
		aggregate.aberdeenpigfarm.func_106(&(Local_556.f_20.f_15), 256);
	}
	if (bVar15)
	{
		aggregate.aberdeenpigfarm.func_106(&(Local_556.f_20.f_15), 65536);
	}
	if (bVar12)
	{
		aggregate.aberdeenpigfarm.func_106(&(Local_556.f_20.f_15), 33554432);
	}
	if (bVar7)
	{
		aggregate.fme_animal_tagging.func_174(32768);
	}
	else if (bVar14)
	{
		aggregate.fme_animal_tagging.func_174(65536);
	}
	if (bVar9)
	{
		aggregate.aberdeenpigfarm.func_106(&(Local_556.f_20.f_15), 4096);
	}
	if (bVar8)
	{
		aggregate.aberdeenpigfarm.func_106(&(Local_556.f_20.f_15), 8192);
	}
	if (bVar11)
	{
		aggregate.aberdeenpigfarm.func_106(&(Local_556.f_20.f_15), 16384);
	}
	if (bVar10)
	{
		aggregate.aberdeenpigfarm.func_106(&(Local_556.f_20.f_15), 32768);
	}
	if (bVar13)
	{
		aggregate.aberdeenpigfarm.func_106(&(Local_556.f_20.f_15), 67108864);
	}
}

void func_192()
{
	Local_556.f_20.f_547 = func_350();
}

void func_193()
{
	int iVar0;

	Local_556.f_20.f_548 = func_351();
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_548)
	{
		func_352(iVar0);
		if (&Local_556.f_20.f_22[iVar0 /*19*/] != joaat("target"))
		{
		}
		else
		{
			Local_556.f_20.f_549++;
		}
		iVar0++;
	}
}

void func_204()
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	int iVar7;
	int iVar8;

	iVar0 = aggregate.doc_book.func_255(1, func_373());
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		aggregate.medium_update.func_483(&Var2);
		if ((!func_119(&Var2) || !func_120(&Var2, 1525953930, iVar1, 0)) || !aggregate.fme_animal_tagging.func_40(Var2, -1296487272, &iVar8, 1))
		{
		}
		else
		{
			iVar7 = aggregate.fme_animal_tagging.func_1740(iVar8);
			if (!aggregate.aberdeenpigfarm.func_58(iVar7))
			{
			}
			else
			{
				Local_556.f_952[iVar1] = iVar7;
				aggregate.fme_animal_tagging.func_174(8192);
			}
		}
		iVar1++;
	}
}

int func_205()
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, -930766145, 0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

bool func_206()
{
	struct<5> Var0;
	bool bVar5;

	if (func_119(&Var0) && aggregate.fme_condor_egg.func_42(Var0, 706368435, &bVar5, 0))
	{
		return !bVar5;
	}
	return false;
}

bool func_207()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = func_355();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_378(iVar1, &vVar2))
		{
		}
		else if (!func_379(iVar1, vVar2))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_208()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	var uVar8;
	struct<8> Var9;

	iVar0 = func_380();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_381(iVar1, &vVar2, &vVar5, &Var9, &uVar8))
		{
		}
		else if (!func_382(iVar1, vVar2, vVar5, Var9, uVar8))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_209()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate.fme_animal_tagging.func_134(4194304))
	{
		return true;
	}
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_113(iVar1, &iVar2))
		{
		}
		else
		{
			aggregate.blackwater.func_55(iVar2, 1, 0);
		}
		iVar1++;
	}
	aggregate.fme_animal_tagging.func_174(4194304);
	return true;
}

void func_210()
{
	int iVar0;

	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if ((&Local_17.f_234[iVar0 /*2*/] != 255 && func_163(iVar0)) && !MISC::_0x8F4F050054005C27(&(Local_556.f_1000), iVar0))
			{
				MISC::_0xE84AAC1B22A73E99(&(Local_556.f_1000), iVar0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if ((((Local_17.f_2[iVar0 /*9*/])->f_2 == 1583594396 && aggregate.fme_challenges.func_1307(iVar0, 67108864)) && aggregate.fme_challenges.func_1307(iVar0, 134217728)) && !MISC::_0x8F4F050054005C27(&(Local_556.f_998), iVar0))
			{
				MISC::_0xE84AAC1B22A73E99(&(Local_556.f_998), iVar0);
			}
			iVar0++;
		}
	}
}

bool func_211(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	PROPSET::_REQUEST_PROPSET_2(iParam0);
	PROPSET::_REQUEST_PROPSET(iParam0);
	return (PROPSET::_HAS_PROPSET_LOADED_2(iParam0) && PROPSET::_HAS_PROPSET_LOADED(iParam0));
}

bool func_212(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0) || iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_213(bool bParam0)
{
	if (!aggregate.binoculars.func_72(bParam0))
	{
		return true;
	}
	WEAPON::_0x72D4CB5DB927009C(bParam0, -1, 0);
	return WEAPON::_0xFF07CF465F48B830(bParam0);
}

bool func_214(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	aggregate.fme_condor_egg.func_42(Var0, 917283806, &uVar5, 0);
	return uVar5;
}

void func_216()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_547)
	{
		func_383(iVar0);
		iVar0++;
	}
}

void func_217()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_552)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_971[iVar0])))
		{
			POPULATION::_0xB56D41A694E42E86(&(Local_556.f_971[iVar0]), 12289, 0, 0, -1, -1, 0);
			POPULATION::_0x18262CAFEBB5FBE1(&(Local_556.f_971[iVar0]), 12289, 0, 0, -1, -1, 0);
		}
		iVar0++;
	}
}

void func_218()
{
	int iVar0;
	int iVar1;

	func_268(&(Local_556.f_7.f_11), 100);
	if (Local_556.f_7.f_11 != 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_134(4))
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
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_961), iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
		{
			NETWORK::_0x5A91BCEF74944E93(PLAYER::INT_TO_PLAYERINDEX(iVar1), 30f);
		}
		iVar1++;
	}
}

void func_219()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar11;
	struct<2> Var15;
	struct<2> Var28;
	struct<2> Var41;

	func_384();
	if (aggregate.fm_deathmatch_controller.func_2544() != 6)
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		return;
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8))
	{
		return;
	}
	if (func_385())
	{
		return;
	}
	iVar0 = func_148();
	switch (iVar0)
	{
		case 2:
			bVar1 = false;
			break;
		case 1:
		case 3:
		case 4:
			bVar1 = true;
			break;
	}
	func_306(bVar1, &iVar2, &iVar3);
	bVar4 = false;
	if (aggregate.fme_king_of_the_rails.func_205())
	{
		iVar5 = 1891766540;
		if (func_387() == 1)
		{
			bVar4 = true;
		}
		else
		{
			bVar4 = false;
		}
	}
	else
	{
		iVar5 = -1516819610;
	}
	if (func_45())
	{
		iVar6 = joaat("pvp");
	}
	else
	{
		iVar6 = 1038512660;
	}
	Var15.f_1 = 11;
	Var28.f_1 = 11;
	Var41.f_1 = 11;
	if ((bVar4 && iVar0 == 1) || iVar0 == 4)
	{
		func_389(&Var15, joaat("defend"), func_388(255), 0);
	}
	func_391(&uVar7, &uVar11, &Var28, &Var41, iVar5, iVar6, func_388(255), bVar4, !bVar1, iVar2, iVar3, func_390(), Local_556.f_2);
	aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 8);
}

void func_220()
{
	int iVar0;

	iVar0 = Local_556.f_7;
	func_392(iVar0);
	func_268(&(Local_556.f_7), 21);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_393(iVar0);
		iVar0++;
	}
}

void func_221()
{
	func_394(Local_556.f_7.f_1);
	func_268(&(Local_556.f_7.f_1), 18);
}

void func_222()
{
	func_395(Local_556.f_7.f_2);
	func_268(&(Local_556.f_7.f_2), 3);
}

void func_223()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Local_556.f_7.f_4;
	if (aggregate.fme_condor_egg.func_1607(iVar0, 0, 1))
	{
		if (aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 4))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = aggregate.fm_deathmatch_controller.func_1423(iVar1);
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578.f_1, iVar2) != 6)
			{
				func_340(6, iVar2, Local_556.f_578.f_1, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578.f_3, iVar2) != 6)
			{
				func_340(6, iVar2, Local_556.f_578.f_3, 1);
			}
		}
		else if (aggregate.fme_animal_tagging.func_134(256) && aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 64))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = aggregate.fm_deathmatch_controller.func_1423(iVar1);
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578, iVar2) != 2)
			{
				func_340(2, iVar2, Local_556.f_578, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578.f_1, iVar2) != 2)
			{
				func_340(2, iVar2, Local_556.f_578.f_1, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578.f_3, iVar2) != 2)
			{
				func_340(2, iVar2, Local_556.f_578.f_3, 1);
			}
			if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(Local_556.f_578.f_2, iVar2) != 2)
			{
				func_340(2, iVar2, Local_556.f_578.f_2, 1);
			}
		}
	}
	func_268(&(Local_556.f_7.f_4), 32);
}

void func_224()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	int iVar8;

	iVar0 = func_148();
	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	if ((!PED::IS_PED_DEAD_OR_DYING(iVar2, true) && WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &bVar3, true, 0, false)) && aggregate.binoculars.func_72(bVar3))
	{
		aggregate.fme_animal_tagging.func_174(2048);
	}
	else
	{
		aggregate.fme_animal_tagging.func_174(2048);
	}
	iVar4 = Local_556.f_7.f_9;
	func_268(&(Local_556.f_7.f_9), 32);
	iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
	if (func_398(iVar5))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Local_556.f_961), iVar4);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Local_556.f_961), iVar4);
	}
	func_399();
	if (iVar0 != 0 && !aggregate.fme_animal_tagging.func_134(1))
	{
		if (func_400())
		{
			aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 1048576);
		}
		if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 1048576) && func_401())
		{
			func_149(iVar0, 0);
		}
	}
	if (iVar0 != 0 && func_403(func_402(), Local_556.f_20.f_2))
	{
		func_404(Local_556.f_2);
	}
	if (iVar0 != 0 && !func_45())
	{
		aggregate.fme_animal_tagging.func_203();
	}
	if (iVar0 != 0 && func_45())
	{
		if (func_406(iVar5))
		{
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_960), iVar4))
			{
				aggregate.fme_animal_tagging.func_1091(iVar5);
				SCRIPTS::_0x31010318BA9897AC(&(Local_556.f_960), iVar4);
			}
		}
		else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_960), iVar4))
		{
			aggregate.fme_animal_tagging.func_778(iVar5);
			SCRIPTS::_0xD426E2E3288469D6(&(Local_556.f_960), iVar4);
		}
	}
	if (aggregate.fme_animal_tagging.func_134(65536) || aggregate.fme_animal_tagging.func_134(32768))
	{
		if (iVar0 != 0)
		{
			fVar6 = aggregate.blackwater.func_175(Global_36, Local_556.f_20.f_7);
			if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 256))
			{
				fVar7 = 65f;
			}
			else
			{
				fVar7 = 50f;
			}
			if (fVar6 < Local_556.f_20.f_19 || func_409(fVar7))
			{
				aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 256);
				aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 1024);
				aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 512);
			}
			else if (fVar6 > (Local_556.f_20.f_19 + 15f))
			{
				aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 256);
			}
		}
	}
	if (!aggregate.fme_animal_tagging.func_134(1048576))
	{
		PLAYER::_0xDFC85C5199045026(PLAYER::PLAYER_ID(), 0.2f);
		aggregate.fme_animal_tagging.func_174(1048576);
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 128) && NETWORK::GET_TIME_DIFFERENCE(Local_556.f_1003, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 22000)
	{
		aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 128);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && aggregate.fm_mission_controller.func_4144(Global_35))
	{
		Local_556.f_1016 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (iVar0 == 1)
	{
		if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 16384) && func_163(Local_556.f_1006))
		{
			aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 16384);
			aggregate.fme_animal_tagging.func_335(1);
			aggregate.fm_deathmatch_controller.func_1034();
		}
		if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 16384))
		{
			aggregate.fm_deathmatch_controller.func_1034();
			aggregate.fme_animal_tagging.func_489();
			if (aggregate.annesburg.func_232(105, 255))
			{
				aggregate.fme_animal_tagging.func_335(0);
			}
		}
		if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) == Local_17.f_279)
		{
			aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 32768);
		}
		else
		{
			aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 32768);
		}
	}
	else if (iVar0 == 2)
	{
		if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279) || !_NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_17.f_279, PLAYER::PLAYER_ID()))
		{
			if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 1048576))
			{
				aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 4);
				aggregate.fme_animal_tagging.func_174(4);
				aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 65536);
				aggregate.fme_animal_tagging.func_174(16777216);
				if ((!_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279) || !_NAMESPACE26::_0x0F99F6436528A089(Local_17.f_279)) || (_NAMESPACE26::_0x149A2751AB66AC02(Local_17.f_279) <= 1 && !_NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_17.f_279, PLAYER::PLAYER_ID())))
				{
					aggregate.fme_animal_tagging.func_174(8388608);
				}
			}
		}
	}
	if (func_415(0))
	{
		aggregate.fme_animal_tagging.func_174(16384);
	}
	else
	{
		aggregate.fme_animal_tagging.func_174(16384);
	}
	if (iVar0 == 0)
	{
		if (func_45())
		{
			iVar8 = 0;
			while (iVar8 < 7)
			{
				if (&Local_17.f_234[iVar8 /*2*/] == 255)
				{
				}
				else if (&Local_17.f_234[iVar8 /*2*/] != iVar1)
				{
				}
				else
				{
					func_416(1, iVar8);
					return;
				}
				iVar8++;
			}
			iVar8 = 0;
			while (iVar8 < 7)
			{
				if (&Local_17.f_234[iVar8 /*2*/] == 255)
				{
				}
				else if (func_163(iVar8))
				{
				}
				else if (!_NAMESPACE26::_0x3F59FE6F37869576(iVar1, &(Local_17.f_234[iVar8 /*2*/])))
				{
				}
				else
				{
					func_416(4, -1);
					return;
				}
				iVar8++;
			}
		}
		if (_NAMESPACE26::_0x9BE7DCB22D32CCBE(Local_17.f_279, PLAYER::PLAYER_ID()))
		{
			func_416(2, -1);
			return;
		}
		if (aggregate.fme_animal_tagging.func_134(256) && func_417(Local_556.f_7, 30f))
		{
			func_416(3, -1);
		}
	}
}

void func_225()
{
	if (func_45() && !aggregate.fme_animal_tagging.func_134(16777216))
	{
		return;
	}
	func_418();
	func_419();
	func_420();
	func_421();
	func_422();
	func_423();
	func_424();
}

void func_226()
{
	if (Local_556.f_20.f_551 == 0)
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		return;
	}
	func_425(Local_556.f_7.f_8);
	func_268(&(Local_556.f_7.f_8), Local_556.f_20.f_551);
}

void func_227()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_134(33554432))
	{
		if (!aggregate.fme_animal_tagging.func_134(131072))
		{
			iVar0 = 0;
			while (iVar0 < 21)
			{
				if (!func_426(iVar0))
				{
				}
				else
				{
					func_427(iVar0, Local_299[Local_556.f_1008 /*8*/]);
				}
				iVar0++;
			}
			aggregate.fme_animal_tagging.func_174(131072);
		}
		return;
	}
	iVar1 = Local_556.f_7.f_5;
	if (aggregate.fishing_core.func_34(Local_299[iVar1 /*8*/], 4) && aggregate.fme_condor_egg.func_1607(iVar1, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (!func_426(iVar0))
			{
			}
			else if (func_428(iVar0, Local_299[Local_556.f_1008 /*8*/]))
			{
			}
			else if (!func_428(iVar0, Local_299[iVar1 /*8*/]))
			{
			}
			else
			{
				func_427(iVar0, Local_299[Local_556.f_1008 /*8*/]);
			}
			iVar0++;
		}
	}
	iVar2 = PLAYER::PLAYER_PED_ID();
	iVar0 = Local_556.f_7.f_6;
	if (((!ENTITY::IS_ENTITY_DEAD(iVar2) && !func_428(iVar0, Local_299[Local_556.f_1008 /*8*/])) && func_426(iVar0)) && func_52(iVar0, &iVar3, 1, 1))
	{
		if (!aggregate.la_alligator.func_203(iVar0, 131072))
		{
			aggregate.la_alligator.func_225(iVar0, 131072);
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar3);
		}
		if (PED::IS_PED_IN_COMBAT(iVar3, iVar2) || func_429(iVar3, 45f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
		{
			func_427(iVar0, Local_299[Local_556.f_1008 /*8*/]);
		}
	}
	if ((aggregate.la_alligator.func_203(iVar0, 131072) && func_428(iVar0, Local_299[Local_556.f_1008 /*8*/])) && func_52(iVar0, &iVar3, 0, 1))
	{
		PED::_0x3088634CF8C819CF(iVar3);
		aggregate.la_alligator.func_225(iVar0, 131072);
	}
	func_268(&(Local_556.f_7.f_5), 32);
	func_268(&(Local_556.f_7.f_6), 21);
}

void func_228(var uParam0)
{
	int iVar0;
	var uVar1;
	struct<30> Var2;
	struct<9> Var32;

	iVar0 = PLAYER::PLAYER_ID();
	if (func_430(uParam0))
	{
		if (PLAYER::IS_PLAYER_DEAD(iVar0) && !aggregate.aberdeenpigfarm.func_62())
		{
			if (Local_556.f_1009 == 0)
			{
				Local_556.f_1009 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(Local_556.f_1009, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 15000)
			{
				aggregate.annesburg.func_112(1, 1);
				Local_556.f_1009 = 0;
			}
		}
		else
		{
			Local_556.f_1009 = 0;
		}
	}
	if (func_433(uParam0, &uVar1))
	{
		func_434(1);
	}
	else
	{
		func_434(0);
	}
	if ((aggregate.fme_animal_tagging.func_134(2) && aggregate.fme_animal_tagging.func_661(255)) && aggregate.fme_animal_tagging.func_662(255))
	{
		func_437(&Var2, &Var32);
		aggregate.fme_animal_tagging.func_924(Var2, Var32, 1, 1, 1);
	}
}

void func_229()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	if (!aggregate.fme_animal_tagging.func_134(8192))
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_134(4))
	{
		if (!aggregate.fme_animal_tagging.func_134(67108864))
		{
			PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 1);
			aggregate.fme_animal_tagging.func_174(67108864);
		}
	}
	else if (aggregate.fme_animal_tagging.func_134(67108864))
	{
		PLAYER::_0x330CA55A3647FA1C(PLAYER::PLAYER_ID(), 0);
		aggregate.fme_animal_tagging.func_174(67108864);
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 2048))
	{
		return;
	}
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4096))
	{
		iVar0 = 0;
		while (iVar0 < Local_556.f_20.f_548)
		{
			if (func_53(iVar0))
			{
				if (func_52(iVar0, &iVar1, 0, 0))
				{
					ENTITY::_0x1AD922AB5038DEF3(iVar1);
					PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iVar1, 0);
				}
				if (aggregate.la_alligator.func_203(iVar0, 65536) && func_54(iVar0, &iVar1, 1))
				{
					ENTITY::_0x1AD922AB5038DEF3(iVar1);
					PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iVar1, 0);
				}
			}
			iVar0++;
		}
		aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 4096);
	}
	if (Local_556.f_7.f_7 >= Local_556.f_20.f_553)
	{
		aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 2048);
		return;
	}
	iVar2 = Local_556.f_7.f_7;
	iVar0 = &Local_556.f_20.f_495[iVar2 /*2*/];
	if (iVar0 > Local_556.f_20.f_548)
	{
		Local_556.f_7.f_7++;
		return;
	}
	if (iVar0 < 0)
	{
		Local_556.f_7.f_7++;
		return;
	}
	if (aggregate.la_alligator.func_203(iVar0, 65536))
	{
		if (!func_54(iVar0, &iVar1, 1))
		{
			Local_556.f_7.f_7++;
			return;
		}
	}
	else if (!func_52(iVar0, &iVar1, 1, 0))
	{
		Local_556.f_7.f_7++;
		return;
	}
	if (Local_556.f_20.f_5 >= Local_556.f_20.f_6)
	{
		return;
	}
	sVar3 = aggregate.blackwater.func_268(func_104(iVar2));
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
	{
		Local_556.f_7.f_7++;
		return;
	}
	if (!(Local_556.f_20.f_495[iVar2 /*2*/])->f_1)
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sVar3);
		(Local_556.f_20.f_495[iVar2 /*2*/])->f_1 = 1;
		return;
	}
	else if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sVar3))
	{
		return;
	}
	if (func_439(iVar1, sVar3, 1, 1058642330 /* Float: 0.6f */, 1053609165 /* Float: 0.4f */, 0))
	{
	}
	aggregate.la_alligator.func_225(iVar0, 524288);
	Local_556.f_20.f_5++;
	Local_556.f_7.f_7++;
}

void func_230()
{
	bool bVar0;

	if (Local_556.f_20.f_555 == 0)
	{
		return;
	}
	if ((Local_17.f_222 == -1 || Local_17.f_222.f_1 == -1) || !aggregate.fme_animal_tagging.func_134(268435456))
	{
		aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 262144);
		aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 524288);
		if (func_30(Local_556.f_957))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Local_556.f_957);
			Local_556.f_957 = 0;
		}
		return;
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 262144))
	{
		return;
	}
	if (!func_440(Local_17.f_222, Local_17.f_222.f_1, &bVar0))
	{
		return;
	}
	if (bVar0)
	{
		aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 524288);
	}
	aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 262144);
	if (func_30(Local_556.f_957))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Local_556.f_957);
		Local_556.f_957 = 0;
	}
}

void func_231()
{
	bool bVar0;
	int iVar1;

	bVar0 = aggregate.fme_animal_tagging.func_134(4);
	if ((bVar0 && aggregate.fme_animal_tagging.func_134(4096)) && Local_556.f_20.f_16 == 1320143426)
	{
		if (aggregate.net_assassination.func_441(0, 0, 0))
		{
			if (Local_556.f_1015 == 0)
			{
				Local_556.f_1015 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			if (Local_556.f_1015 != 0 && aggregate.fme_animal_tagging.func_384(Local_556.f_1015) < 45000)
			{
				LAW::_0xBD944A3D36E992DE();
				PLAYER::_0xCBCCF73FFA69CC6B(PLAYER::GET_PLAYER_INDEX());
			}
		}
		else
		{
			Local_556.f_1015 = 0;
		}
	}
	if (bVar0 && Local_556.f_20.f_16 == 1320143426)
	{
		func_32(1);
		func_33(1);
	}
	else
	{
		func_32(0);
		func_33(0);
	}
	if ((bVar0 && Local_556.f_20.f_3 != 0) && !func_45())
	{
		iVar1 = PLAYER::PLAYER_ID();
		switch (Local_556.f_20.f_3)
		{
			case 1503734359:
				LAW::_0x785177E4D57D7389(iVar1, -683250308 /* GXTEntry: "Assault" */, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar1, 481893872 /* GXTEntry: "Disturbing the Peace" */, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar1, 2006449383 /* GXTEntry: "Murder" */, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar1, 2140177766, 0, 0, -1);
				LAW::_0x785177E4D57D7389(iVar1, 2140177766, 0, 0, -1);
				break;
		}
	}
}

void func_232()
{
	bool bVar0;
	int iVar1;

	if (!aggregate.fme_animal_tagging.func_134(8192))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_443(iVar1);
		if (&Local_556.f_952[iVar1] == Global_1893575->f_2 && aggregate.aberdeenpigfarm.func_58(Global_1893575->f_2))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		Local_556.f_952.f_4 = 0;
	}
}

void func_233()
{
	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		return;
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		if (aggregate.fme_dead_drop.func_811())
		{
			if (aggregate.fme_animal_tagging.func_134(33554432))
			{
				return;
			}
			aggregate.fme_animal_tagging.func_174(33554432);
			if (aggregate.fme_animal_tagging.func_134(func_57(1138140145)))
			{
				aggregate.fme_animal_tagging.func_174(func_57(1138140145));
			}
			else if (aggregate.fme_animal_tagging.func_134(func_57(1231609204)))
			{
				aggregate.fme_animal_tagging.func_174(func_57(1231609204));
			}
			return;
		}
		else
		{
			aggregate.fme_animal_tagging.func_174(33554432);
		}
		func_58(1231609204, 0);
		if (aggregate.fme_animal_tagging.func_134(64))
		{
			func_58(-1416703903, 1);
			return;
		}
		else if (aggregate.fme_animal_tagging.func_134(32))
		{
			func_58(758533472, 1);
			return;
		}
		if (aggregate.fme_animal_tagging.func_134(func_57(1138140145)))
		{
			return;
		}
		if (aggregate.fme_animal_tagging.func_134(65536) || aggregate.fme_animal_tagging.func_134(32768))
		{
			if (aggregate.blackwater.func_175(Global_36, Local_556.f_20.f_7) < Local_556.f_20.f_19)
			{
				func_58(1138140145, 0);
			}
		}
	}
	else
	{
		func_58(-2111154143, 0);
		if (aggregate.fme_animal_tagging.func_134(64))
		{
			func_58(758533472, 1);
			return;
		}
	}
}

void func_234()
{
	func_445(Local_556.f_7.f_10);
	func_268(&(Local_556.f_7.f_10), 6);
}

void func_235()
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return;
	}
	func_446(&uVar0, &bVar1, &bVar2, &bVar3);
	if (Local_556.f_1010 != -1)
	{
		iVar4 = NETWORK::GET_TIME_DIFFERENCE(Local_556.f_1010, NETWORK::GET_NETWORK_TIME_ACCURATE());
		if (bVar1)
		{
			Local_556.f_1011 = (Local_556.f_1011 + iVar4);
		}
		else
		{
			Local_556.f_1011 = 0;
		}
		if (bVar2)
		{
			Local_556.f_1012 = (Local_556.f_1012 + iVar4);
		}
		else
		{
			Local_556.f_1012 = 0;
		}
		if (bVar3)
		{
			Local_556.f_1013 = (Local_556.f_1013 + iVar4);
		}
		else
		{
			Local_556.f_1013 = 0;
		}
	}
	if ((!bVar1 && !bVar2) && !bVar3)
	{
		Local_556.f_1010 = -1;
		Local_556.f_1013 = 0;
		Local_556.f_1012 = 0;
		Local_556.f_1011 = 0;
	}
	else
	{
		Local_556.f_1010 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

var func_236(bool bParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;

	if (func_45())
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!aggregate.fme_condor_egg.func_1607(iVar1, 0, 1))
			{
			}
			else if ((!aggregate.fishing_core.func_34(Local_299[iVar1 /*8*/], 4) && !aggregate.fishing_core.func_34(Local_299[iVar1 /*8*/], 8192)) && !aggregate.fishing_core.func_34(Local_299[iVar1 /*8*/], 131072))
			{
			}
			else
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!aggregate.fme_condor_egg.func_1607(iVar1, 0, 1))
			{
			}
			else if (!aggregate.fishing_core.func_34(Local_299[iVar1 /*8*/], 4) && !aggregate.fishing_core.func_34(Local_299[iVar1 /*8*/], 64))
			{
			}
			else
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	if (bParam0)
	{
		SCRIPTS::_0xFFDDF802279BE128(&(Local_556.f_958), &uVar0, &uVar2);
		uVar0 = uVar2;
	}
	return uVar0;
}

bool func_244(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	int iVar0;
	struct<8> Var1;

	if (VOLUME::_0xF6A8A652A6B186CD(&(Local_17.f_263[iParam0])))
	{
		return true;
	}
	if (aggregate.annesburg.func_121(vParam1))
	{
		return true;
	}
	if (!VOLUME::_0xA4A4359320345B34(Local_17.f_263.f_5))
	{
		if (VOLUME::_0x397769175A7DBB30(vParam1, fParam4, 0, 0, 575122756))
		{
			*bParam6 = 1;
			return false;
		}
		Var1 = { vParam1 };
		Var1.f_4 = fParam4;
		Var1.f_6 = iParam5;
		Var1.f_7 = Local_556.f_20.f_556;
		Local_17.f_263.f_5 = VOLUME::_0x183C0B6CFEFFCAE4(&Var1);
	}
	iVar0 = VOLUME::_0xB33A604345F58202(Local_17.f_263.f_5);
	switch (iVar0)
	{
		case 3:
			Local_17.f_263[iParam0] = VOLUME::_0x351D71B8B72B858B(Local_17.f_263.f_5);
			return true;
		case 4:
			Local_17.f_263.f_5 = 0;
			return true;
		default:
			break;
	}
	return false;
}

void func_246()
{
	int iVar0;
	float fVar1[21];
	float fVar23;
	int iVar24;
	int iVar25;

	if (Local_556.f_20.f_548 <= 0)
	{
		return;
	}
	if (Local_556.f_20.f_554 <= 0)
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_134(16384))
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_134(2097152))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_548)
	{
		fVar1[iVar0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		iVar0++;
	}
	iVar25 = 0;
	while (iVar25 < Local_556.f_20.f_554)
	{
		fVar23 = 0f;
		iVar24 = -1;
		iVar0 = 0;
		while (iVar0 < Local_556.f_20.f_548)
		{
			if (&Local_556.f_20.f_22[iVar0 /*19*/] != 391477998)
			{
			}
			else if (func_248(iVar0))
			{
			}
			else if (&fVar1[iVar0] > fVar23)
			{
				fVar23 = &fVar1[iVar0];
				iVar24 = iVar0;
			}
			iVar0++;
		}
		if (iVar24 == -1)
		{
		}
		else
		{
			func_455(iVar24);
			iVar25++;
		}
	}
	aggregate.fme_animal_tagging.func_174(2097152);
}

bool func_247(int iParam0, int iParam1)
{
	struct<5> Var0;
	bool bVar5;

	if (((func_456(iParam0, &Var0) && aggregate.fme_condor_egg.func_42(Var0, -223083781, &bVar5, 0)) && bVar5) && aggregate.fme_supply_train.func_39(Var0, 1033186381, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_248(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(Local_17.f_251[iVar0]), iVar1);
}

int func_249()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_548)
	{
		if (!func_214(iVar0))
		{
		}
		else if (aggregate.la_alligator.func_203(iVar0, 8) && !func_248(iVar0))
		{
		}
		else if (((((((aggregate.la_alligator.func_203(iVar0, 64) && func_250(iVar0, &iVar1)) && &Local_556.f_20.f_22[iVar0 /*19*/] != joaat("target")) && iVar1 >= 0) && iVar1 < 21) && &Local_556.f_20.f_22[iVar1 /*19*/] == 391477998) && !func_248(iVar1)) && aggregate.la_alligator.func_203(iVar1, 8))
		{
		}
		else
		{
			iVar2++;
		}
		iVar0++;
	}
	return iVar2;
}

bool func_250(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && aggregate.fme_supply_train.func_39(Var0, 1033186381, iParam1, 0))
	{
		return true;
	}
	return false;
}

void func_251()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<5> Var5;
	bool bVar10;

	if (Local_556.f_20.f_548 <= 0)
	{
		return;
	}
	if (!func_457(2, Local_556.f_20.f_556))
	{
		return;
	}
	fVar0 = 0f;
	iVar1 = -1;
	iVar4 = func_351();
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (&Local_556.f_20.f_22[iVar2 /*19*/] == 0)
		{
		}
		else
		{
			aggregate.medium_update.func_483(&Var5);
			if (!func_116(iVar2, &Var5))
			{
			}
			else if (!aggregate.fme_condor_egg.func_42(Var5, -155963228, &bVar10, 0) || !bVar10)
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
	aggregate.net_assassination.func_458(iVar1, 33554432);
}

bool func_252()
{
	int iVar0;
	int iVar1;

	if (Local_17.f_255.f_2 >= 2)
	{
		return true;
	}
	iVar0 = func_459();
	if (Local_17.f_255.f_2 >= iVar0)
	{
		return true;
	}
	iVar1 = Local_17.f_255.f_2;
	if (!func_460(iVar1))
	{
		return false;
	}
	Local_17.f_255.f_2++;
	return false;
}

bool func_253()
{
	int iVar0;

	if (Local_17.f_255.f_1 >= 18)
	{
		return true;
	}
	iVar0 = Local_17.f_255.f_1;
	if (!func_461(iVar0))
	{
		return false;
	}
	Local_17.f_255.f_1++;
	return false;
}

bool func_254()
{
	int iVar0;

	if (Local_17.f_255 >= Local_556.f_20.f_548)
	{
		return true;
	}
	iVar0 = Local_17.f_255;
	if (!func_462(iVar0))
	{
		return false;
	}
	aggregate.fme_golden_hat.func_194();
	Local_17.f_255++;
	return false;
}

bool func_255()
{
	int iVar0;
	int iVar1;

	iVar0 = Local_17.f_255.f_3;
	iVar1 = func_464();
	if (iVar0 >= iVar1)
	{
		return true;
	}
	if (!func_465(iVar0))
	{
		return false;
	}
	func_268(&(Local_17.f_255.f_3), 5);
	return false;
}

bool func_256()
{
	if (!aggregate.fme_animal_tagging.func_134(524288))
	{
		return false;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Local_17.f_277, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 10000)
	{
		return false;
	}
	return true;
}

void func_257()
{
	if (aggregate.fme_animal_tagging.func_134(524288))
	{
		return;
	}
	Local_17.f_277 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	aggregate.fme_animal_tagging.func_174(524288);
}

void func_259()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Local_556.f_946;
	func_466(iVar0, &iVar1, &iVar2);
	Local_556.f_946++;
	if (iVar2 < 0)
	{
		return;
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	if (Local_556.f_946.f_1 > -1)
	{
		if (Local_556.f_946.f_3 > iVar2)
		{
			return;
		}
		if (iVar3 < Local_556.f_946.f_2 && Local_556.f_946.f_3 == iVar2)
		{
			return;
		}
	}
	Local_556.f_946.f_1 = iVar0;
	Local_556.f_946.f_3 = iVar2;
	Local_556.f_946.f_2 = iVar3;
}

bool func_260()
{
	int iVar0;

	if (Local_556.f_946.f_1 == -1)
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_556.f_946.f_1);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(Local_17.f_280))
	{
		return false;
	}
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279) && _NAMESPACE26::_0x901E0DC25080C8B9(iVar0) == Local_17.f_279)
	{
		return false;
	}
	if (iVar0 == Local_17.f_280)
	{
		return false;
	}
	Local_17.f_234[0 /*2*/] = iVar0;
	Local_17.f_275++;
	Local_17.f_276 = Local_17.f_275;
	return true;
}

void func_261()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = Local_556.f_946;
	func_467(iVar0, &iVar1, &iVar2);
	Local_556.f_946++;
	if (iVar2 < 0)
	{
		return;
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	if (Local_556.f_946.f_1 > -1)
	{
		if (Local_556.f_946.f_3 > iVar2)
		{
			return;
		}
		if (iVar3 < Local_556.f_946.f_2 && Local_556.f_946.f_3 == iVar2)
		{
			return;
		}
	}
	Local_556.f_946.f_1 = iVar0;
	Local_556.f_946.f_3 = iVar2;
	Local_556.f_946.f_2 = iVar3;
}

bool func_262()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Local_556.f_946.f_1 == -1)
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_556.f_946.f_1);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(Local_17.f_280))
	{
		return false;
	}
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		return false;
	}
	if (iVar1 == Local_17.f_279)
	{
		return false;
	}
	if (iVar0 == Local_17.f_280)
	{
		return false;
	}
	Local_17.f_281 = iVar1;
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
		}
		else if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar4) != iVar1)
		{
		}
		else
		{
			Local_17.f_234[iVar2 /*2*/] = iVar4;
			iVar2++;
			Local_17.f_275++;
		}
		iVar3++;
	}
	Local_17.f_276 = Local_17.f_275;
	return true;
}

void func_263()
{
	func_468();
	if (!aggregate.fme_animal_tagging.func_134(16777216))
	{
		if (func_469(4))
		{
			if (aggregate.fme_animal_tagging.func_134(8))
			{
				func_470(1);
			}
			aggregate.fme_animal_tagging.func_174(16777216);
		}
	}
	else if (((!aggregate.fme_animal_tagging.func_134(64) && !aggregate.fme_animal_tagging.func_134(32)) && !aggregate.fme_animal_tagging.func_134(8388608)) && !func_469(4))
	{
		aggregate.fme_animal_tagging.func_174(8388608);
	}
	if (!aggregate.fme_animal_tagging.func_134(2048) && (aggregate.fme_animal_tagging.func_134(32768) || aggregate.fme_animal_tagging.func_134(65536)))
	{
		if (func_469(1024))
		{
			aggregate.fme_animal_tagging.func_174(2048);
		}
	}
}

void func_264()
{
	bool bVar0;

	if (Local_556.f_20.f_555 == 0)
	{
		return;
	}
	func_471(Local_17.f_259.f_2, &bVar0);
	if (bVar0)
	{
		return;
	}
	func_268(&(Local_17.f_259.f_2), Local_556.f_20.f_555);
}

void func_265()
{
	int iVar0;

	iVar0 = Local_17.f_259;
	func_472(iVar0);
	func_268(&(Local_17.f_259), 7);
}

void func_267(int iParam0)
{
	int iVar0;

	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 0)
	{
		return;
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 1583594396)
	{
		func_473(iParam0);
	}
	func_474(iParam0);
	if (!func_476(iParam0, 1, func_475((Local_17.f_2[iParam0 /*9*/])->f_2)) && (Local_17.f_2[iParam0 /*9*/])->f_2 != 1583594396)
	{
		func_477(iParam0);
		return;
	}
	func_478(iParam0);
	if (aggregate.fme_animal_tagging.func_134(65536) || aggregate.fme_animal_tagging.func_134(32768))
	{
		if (((!aggregate.fme_animal_tagging.func_134(536870912) && (Local_17.f_2[iParam0 /*9*/])->f_2 == joaat("target")) && func_52(iParam0, &iVar0, 1, 1)) && aggregate.blackwater.func_175(ENTITY::GET_ENTITY_COORDS(iVar0, false, true), Local_556.f_20.f_7) > Local_556.f_20.f_19)
		{
			aggregate.fme_animal_tagging.func_174(536870912);
		}
	}
	switch ((Local_17.f_2[iParam0 /*9*/])->f_2)
	{
		case joaat("target"):
			func_479(iParam0);
			break;
		case joaat("extra"):
			func_480(iParam0);
			break;
		case 1824637041:
			func_481(iParam0);
			break;
		case 516423162:
			func_482(iParam0);
			break;
		case 1583594396:
			if (func_483(iParam0))
			{
				func_62(iParam0, 0);
				func_484(iParam0);
			}
			break;
	}
}

void func_268(var uParam0, int iParam1)
{
	*uParam0++;
	if (*uParam0 >= iParam1)
	{
		*uParam0 = 0;
	}
}

bool func_271(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 878483537;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_272(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && aggregate.net_assassination.func_109(Var0, -1111171646, uParam1, 0))
	{
		return true;
	}
	return false;
}

void func_284(int iParam0)
{
	aggregate.fme_escaped_convicts.func_736(Local_556.f_584[iParam0]);
}

void func_290(int iParam0)
{
	int iVar0;

	if (&Local_556.f_584.f_31[iParam0] == 255)
	{
		return;
	}
	iVar0 = &Local_556.f_584.f_31[iParam0];
	aggregate.fme_hot_property.func_604(iVar0);
	aggregate.fme_animal_tagging.func_883(iVar0);
	aggregate.fme_king_of_the_castle.func_864(iVar0);
	aggregate.fme_animal_tagging.func_782(&(Local_17.f_234[iParam0 /*2*/]));
	func_500(iVar0);
	Local_556.f_584.f_31[iParam0] = 255;
}

void func_291(int iParam0)
{
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_959), iParam0))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_883(iParam0);
	func_500(iParam0);
	SCRIPTS::_0xD426E2E3288469D6(&(Local_556.f_959), iParam0);
}

bool func_294(int iParam0)
{
	if (aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		return false;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 4096))
	{
		return false;
	}
	switch ((Local_17.f_2[iParam0 /*9*/])->f_2)
	{
		case joaat("target"):
		case 516423162:
		case 1824637041:
			return false;
		default:
			break;
	}
	return true;
}

void func_302(struct<2> Param0, bool bParam2)
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
			func_514(iVar0, iVar2, Param0, iVar10);
		}
		if (aggregate.dynamic_craft_scenario.func_156(iVar9) != joaat("setup"))
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
		func_522(iVar4, bParam2);
		switch (aggregate.dynamic_craft_scenario.func_156(iVar9))
		{
			case 7:
				aggregate.net_assassination.func_524(iVar1, &Var5);
				func_525(&Var5);
				break;
		}
		func_526(iVar10, Param0, bParam2);
		aggregate.net_assassination.func_528(aggregate.net_assassination.func_527(iVar0), 1);
		aggregate.fme_animal_tagging.func_902(1);
	}
	func_530(iVar3, bParam2);
	func_531();
}

void func_306(bool bParam0, bool bParam1, int iParam2)
{
	if (func_45())
	{
		*iParam2 = Local_17.f_276;
		if (bParam0)
		{
			*bParam1 = Local_17.f_275;
		}
		else
		{
			*bParam1 = (*iParam2 - Local_17.f_275);
		}
	}
	else
	{
		*iParam2 = Local_556.f_20.f_549;
		if (bParam0)
		{
			*bParam1 = Local_17.f_275;
		}
		else
		{
			*bParam1 = (*iParam2 - Local_17.f_275);
		}
	}
}

void func_307(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
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
		func_540(iVar10, iVar11);
		func_541(iVar10, iVar8);
		func_542(iVar10, iVar7);
		func_543(iVar10, bParam2, bVar4);
		func_544(iVar10, bParam2, bVar6);
		func_545(iVar8, bParam2, bVar4, Param0, iVar1);
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
	func_548(iVar9, bParam2, bVar4);
	func_549(Param0, bVar4);
	aggregate.net_assassination.func_550(1);
	aggregate.net_assassination.func_550(0);
	func_551(0);
	aggregate.net_assassination.func_552(0);
	aggregate.net_assassination.func_553(4);
}

void func_313(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = (iParam0 / 32);
	*iParam2 = (iParam0 % 32);
}

bool func_314(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (PLAYER::PLAYER_PED_ID() != iVar0)
	{
		return false;
	}
	return true;
}

bool func_315(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (PED::_0x4C8B59171957BCF7(PLAYER::PLAYER_PED_ID()) != iVar0)
	{
		return false;
	}
	return true;
}

bool func_321(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_17.f_2[iVar0 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (iVar0 == iParam0)
		{
		}
		else
		{
			if (aggregate.fme_challenges.func_1307(iVar0, 1) || func_428(iVar0, Local_299[Local_556.f_1008 /*8*/]))
			{
				bVar2 = true;
			}
			else
			{
				bVar1 = true;
				iVar0++;
			}
			if (bVar1 && !bVar2)
			{
				return true;
			}
			return false;
		}
	}
}

void func_323(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 53;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uParam0->f_5 = Local_556;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 37, &uParam1);
}

void func_324(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (uParam0->f_4)
	{
		case 1:
			iVar0 = &Local_17.f_234[uParam0->f_6 /*2*/];
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				return;
			}
			if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				return;
			}
			if (!aggregate.fme_animal_tagging.func_134(4))
			{
				return;
			}
			func_567(func_566(iVar0));
			break;
		case 2:
			if ((!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4) && !aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192)) && !aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 131072))
			{
				return;
			}
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_7);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
			{
				return;
			}
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				return;
			}
			if (((aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4) && !aggregate.fme_animal_tagging.func_134(64)) && !aggregate.fme_animal_tagging.func_134(32)) && !func_163(uParam0->f_6))
			{
				func_567(func_568(uParam0->f_6));
			}
			aggregate.fme_hot_property.func_604(uParam0->f_6);
			aggregate.fme_king_of_the_castle.func_864(uParam0->f_6);
			break;
		case 7:
			if (!aggregate.fme_animal_tagging.func_134(4))
			{
				return;
			}
			if (uParam0->f_6 < 0 || uParam0->f_6 >= 21)
			{
				return;
			}
			func_313(iVar1, &iVar3, &iVar4);
			if (MISC::IS_BIT_SET(&(Local_556.f_996[iVar3]), iVar4))
			{
				return;
			}
			if (Local_556.f_20 == 1657045547)
			{
				if (uParam0->f_1 == PLAYER::PLAYER_ID() || (func_52(uParam0->f_6, &iVar2, 0, 1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), Global_36) < 30f))
				{
					if (func_321(uParam0->f_6))
					{
						aggregate.fme_animal_tagging.func_174(1024);
					}
				}
			}
			MISC::SET_BIT(Local_556.f_996[iVar3], iVar4);
			break;
		case 11:
			func_569(uParam0->f_6);
			break;
	}
}

void func_325(int iParam0, int iParam1)
{
	if (aggregate.fme_challenges.func_1307(iParam0, 134217728))
	{
		return;
	}
	if (&Local_556.f_20.f_22[iParam0 /*19*/] != joaat("target") && &Local_556.f_20.f_22[iParam0 /*19*/] != 391477998)
	{
		return;
	}
	if ((NETWORK::_0x255A5EF65EDA9167(iParam1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam1))
	{
		(Local_17.f_2[iParam0 /*9*/])->f_5 = iParam1;
	}
	if (!aggregate.fme_animal_tagging.func_134(16))
	{
		Local_17.f_275 = (Local_17.f_275 - 1);
	}
	aggregate.net_assassination.func_458(iParam0, 134217728);
}

void func_326(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	MISC::SET_BIT(Local_17.f_249[iVar0], iVar1);
	Local_17.f_275 = (Local_17.f_275 - 1);
	aggregate.fme_animal_tagging.func_174(4194304);
}

void func_328(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	aggregate.fme_supply_train.func_768(iParam0, iParam1);
}

void func_329(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 21)
	{
		return;
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 != joaat("target") || aggregate.fme_challenges.func_1307(iParam0, 134217728))
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(iParam1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	(Local_17.f_2[iParam0 /*9*/])->f_5 = iParam1;
}

void func_333(int iParam0, var uParam1)
{
	if (iParam0 >= 6 || iParam0 < 0)
	{
		return;
	}
	if (func_572(iParam0))
	{
		return;
	}
	func_573(iParam0);
}

void func_334(int iParam0)
{
	if (!func_153(iParam0, 0))
	{
		return;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 2))
	{
		return;
	}
	aggregate.net_assassination.func_458(iParam0, 2);
}

void func_338(char* sParam0, int* iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringIntConCat(&cVar0, Local_556, 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, iParam1);
}

void func_339(int iParam0)
{
	func_340(1, iParam0, -767591988, 1);
	func_340(1, iParam0, -989642646, 1);
	func_340(1, iParam0, -1683752762, 1);
	func_340(1, iParam0, 889541022, 1);
	func_340(1, iParam0, -319516747, 1);
	func_340(1, iParam0, 1986610512, 1);
	func_340(1, iParam0, -1329647920, 1);
}

void func_340(int iParam0, int iParam1, int iParam2, bool bParam3)
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

var func_341(int iParam0, bool bParam1)
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
	if (!func_576(iVar3, iVar2, &Var0))
	{
		return -1;
	}
	return aggregate.nb_hobo_dog.func_533(Var0, -1);
}

int func_342(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -872351721;
		case 1:
			return -1192837347;
		case 2:
			return 1457454771;
		case 3:
			return -486752250;
		case 4:
			return -81907729;
		case 5:
			return 724299998;
		case 6:
			return 256341061;
		case 7:
			return 95942702;
		case 8:
			return 331094197;
		case 9:
			return -1251795501;
		case 10:
			return -67473273;
		case 11:
			return -422348800;
		case 12:
			return -235687863;
		case 13:
			return 917283806;
		case 14:
			return -1284309372;
		case 15:
			return 110383052;
		case 16:
			return 229174115;
		case 17:
			return 251189665;
		case 18:
			return 1468810894;
		case 19:
			return -1906113237;
		case 20:
			return 92190263;
		case 21:
			return 1352900226;
		case 22:
			return -1834576753;
		case 23:
			return -185755803;
		case 24:
			return 1852727176;
		case 25:
			return -1968510322;
		case 26:
			return 1970643719;
		case 27:
			return -30329033;
		case 28:
			return 644584216;
		case 29:
			return 1077944842;
		case 30:
			return -435940167;
		case 31:
			return 1200880489;
		case 32:
			return 1385823714;
		case 33:
			return -180479720;
		case 34:
			return 582819194;
		case 35:
			return -234450476;
		case 36:
			return -1261869617;
		case 37:
			return -1103749002;
		case 38:
			return -1807236653;
		case 39:
			return 1837403330;
		case 40:
			return -764544644;
		case 41:
			return 79787630;
		case 42:
			return 465120035;
		case 43:
			return 1787479687;
		case 44:
			return 2092186359;
		case 45:
			return 219784559;
		case 46:
			return -1893679960;
		case 47:
			return -485657984;
		case 48:
			return -827172890;
		case 49:
			return 458129012;
		case 50:
			return 1533007347;
		case 51:
			return 485523583;
		case 52:
			return -537276532;
		case 53:
			return 861602793;
		case 54:
			return 275738575;
		case 55:
			return 1520538369;
		case 56:
			return -480788145;
		case 57:
			return -1045199329;
		case 58:
			return -1746234201;
		case 59:
			return 878483537;
		case 60:
			return -1111171646;
		case 61:
			return 227384668;
		case 62:
			return 2066595802;
		case 63:
			return 1137547076;
		case 64:
			return -1786937793;
		case 65:
			return -492382713;
		case 66:
			return -223083781;
		case 67:
			return -1770081554;
		case 68:
			return -1925214904;
		case 69:
			return -1318044545;
		case 70:
			return 509508008;
		case 71:
			return -1584591647;
		case 72:
			return -865441380;
		case 73:
			return 566779387;
		case 74:
			return -209788964;
		case 75:
			return -807337682;
		case 76:
			return -874477517;
		case 77:
			return 2090933413;
		case 78:
			return -852511194;
		case 79:
			return 1159597515;
		case 80:
			return 460674190;
		case 81:
			return 2053368303;
		case 82:
			return -1882633578;
		case 83:
			return 265695803;
		case 84:
			return -2129803861;
		case 85:
			return 1628979087;
		case 86:
			return 413379496;
		case 87:
			return 1967834759;
		case 88:
			return -1878208438;
		case 89:
			return -385659440;
		case 90:
			return 2017657609;
		case 91:
			return 1719410419;
		case 92:
			return -1839625215;
		case 93:
			return 1160908162;
		case 94:
			return 1247393678;
		case 95:
			return 1446570234;
		case 96:
			return -261480992;
		case 97:
			return 1031590257;
		case 98:
			return 1322693839;
		case 99:
			return -1919876099;
		case 100:
			return 2069982589;
		case 101:
			return 625548052;
		case 102:
			return -2036553865;
		case 103:
			return -1249970703;
		case 104:
			return -454599147;
		case 105:
			return 1955180846;
		case 106:
			return -401087351;
		case 107:
			return 732905427;
		case 108:
			return -962528168;
		case 109:
			return -930766145;
		case 110:
			return 1823038874;
		case 111:
			return -176401167;
		case 112:
			return 635104585;
		case 113:
			return -1031804957;
		case 114:
			return -1272790307;
		case 115:
			return 735506410;
		case 116:
			return -1732010034;
		case 117:
			return -1711751769;
		case 118:
			return 2092691923;
		case 119:
			return 484707754;
		case 120:
			return -787028349;
		case 121:
			return -937849669;
		case 122:
			return -424701201;
		case 123:
			return -407841845;
		case 124:
			return 2071017826;
		case 125:
			return 1606032220;
		case 126:
			return 456924499;
		case 127:
			return 307635954;
		case 128:
			return -311657344;
		case 129:
			return -401112943;
		case 130:
			return 1059929194;
		case 131:
			return 871643656;
		case 132:
			return -412523681;
		case 133:
			return -155963228;
		case 134:
			return 597233769;
		case 135:
			return 706368435;
		case 136:
			return -1334467051;
		case 137:
			return -867387895;
		case 138:
			return -1652447499;
		case 139:
			return 1082010721;
		case 140:
			return -655039491;
		case 141:
			return -1296487272;
		case 142:
			return -429389572;
		case 143:
			return -1026827677;
		case 144:
			return 686916651;
		case 145:
			return -1765395338;
		case 146:
			return 1237093265;
		case 147:
			return 209905749;
		case 148:
			return 1078011673;
		case 149:
			return 561062234;
		case 150:
			return 1033186381;
		case 151:
			return 386308088;
		case 152:
			return -375509478;
		case 153:
			return -436871069;
		case 154:
			return 1464077990;
		case 155:
			return 723480330;
		case 156:
			return -1859092546;
		case 157:
			return -2109843125;
		case 158:
			return 749370907;
		case 159:
			return 1525953930;
		case 160:
			return -1839855939;
		case 161:
			return 1158526802;
		case 162:
			return 350192982;
		case 163:
			return 1475346163;
		case 164:
			return 1590382703;
		case 165:
			return 1741894372;
		case 166:
			return 1309785647;
		case 167:
			return -894890997;
		case 168:
			return -2067326263;
		case 169:
			return -1133284398;
		case 170:
			return 101317385;
		case 171:
			return -1463370342;
		case 172:
			return -513112783;
		case 173:
			return 2102445471;
		case 174:
			return 892963390;
		case 175:
			return 89352665;
		case 176:
			return -2076494195;
		case 177:
			return -1976409839;
		case 178:
			return 217995581;
		case 179:
			return -1269124321;
		case 180:
			return -1438322653;
		case 181:
			return 673047879;
		case 182:
			return -1918016700;
		case 183:
			return 258114362;
		case 184:
			return -619208322;
		case 185:
			return 796390761;
		case 186:
			return 912480409;
		case 187:
			return -728132736;
		case 188:
			return 1890996209;
		case 189:
			return -407275447;
		case 190:
			return -1443980387;
		case 191:
			return 2132698637;
		case 192:
			return -597454543;
		case 193:
			return -608357025;
		case 194:
			return 1793981541;
		case 195:
			return -966540255;
		case 196:
			return -1143761632;
		case 197:
			return 1326664274;
		case 198:
			return 691956863;
		case 199:
			return -566322512;
		case 200:
			return 1903857900;
		case 201:
			return 1518210740;
		case 202:
			return -1527836996;
		case 203:
			return -49926176;
		case 204:
			return 1855722710;
		case 205:
			return 764754194;
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

char* func_343(int iParam0)
{
	switch (iParam0)
	{
		case -872351721:
			return "activity/locations/location(id=%x)";
		case -1192837347:
			return "activity/locations/location(%i)";
		case 1457454771:
			return "activity/locations";
		case 331094197:
			return "peds/ped(%i)";
		case -1251795501:
			return "peds";
		case -67473273:
			return "props";
		case -422348800:
			return "props/prop(%i)";
		case -1746234201:
			return "tracking_paths";
		case 878483537:
			return "tracking_paths/path(%i)";
		case -1968510322:
			return "patrol_routes/patrol_route(%i)";
		case 1970643719:
			return "patrol_routes";
		case -30329033:
			return "patrol_node(%i)";
		case 485523583:
			return "defensive_areas";
		case -537276532:
			return "defensive_areas/defensive_volume(%i)";
		case 1520538369:
			return "ambient_restriction_areas";
		case -480788145:
			return "ambient_restriction_areas/ambient_restriction_volume(%i)";
		case -937849669:
			return "respawn_exclusion_areas";
		case -424701201:
			return "respawn_exclusion_areas/respawn_exclusion_volume(%i)";
		case -1318044545:
			return "los_blockers";
		case 509508008:
			return "los_blockers/blocker(%i)";
		case 625548052:
			return "ambient_chests";
		case -2036553865:
			return "ambient_chests/chest(%i)";
		case 732905427:
			return "aggregate_volumes";
		case -962528168:
			return "aggregate_volumes/aggregate_volume(%i)";
		case 1823038874:
			return "waves/wave(%i)";
		case -930766145:
			return "waves";
		case -176401167:
			return "wave_ped(%i)";
		case 484707754:
			return "respawn_points";
		case -787028349:
			return "respawn_points/respawn_point(%i)";
		case 2071017826:
			return "triggers";
		case 1606032220:
			return "triggers/trigger(%i)";
		case 386308088:
			return "herb_restriction_volumes";
		case -375509478:
			return "herb_restriction_volumes/herb_restriction_volume(%i)";
		case -1334467051:
			return "ped_groups";
		case -867387895:
			return "ped_groups/ped_group(%i)";
		case -429389572:
			return "ped_groups/ped_group(%i)/ped(%i)";
		case 723480330:
			return "lighting_rigs";
		case -1859092546:
			return "lighting_rigs/lighting_rig(%i)";
		case 749370907:
			return "region_trespass_volume_handlers";
		case 1525953930:
			return "region_trespass_volume_handlers/region(%i)";
		case -1839855939:
			return "trespass_volume_search(%i)";
		case -1976409839:
			return "pickups";
		case 217995581:
			return "pickups/pickup(%i)";
		case -407275447:
			return "target_zones";
		case -1443980387:
			return "target_zones/target_zone(%i)";
		case 644584216:
			return "decals/decal(%i)";
		case -1527836996:
			return "world_states";
		case -49926176:
			return "world_states/world_state(%i)";
		case 1077944842:
			return "decals";
		case 2132698637:
			return "ped(%i)";
		case -486752250:
			return ":model";
		case -81907729:
			return ":position";
		case 724299998:
			return ":heading";
		case 256341061:
			return ":weapon";
		case 95942702:
			return ":role";
		case 917283806:
			return ":mounted";
		case -1284309372:
			return ":weapon_out";
		case 110383052:
			return ":aggro_group_id";
		case 229174115:
			return ":scenario";
		case 251189665:
			return ":behavior";
		case 1468810894:
			return ":follow_offset";
		case -1906113237:
			return ":follow_target";
		case 92190263:
			return ":mission_time";
		case 1352900226:
			return ":is_sentry";
		case -1834576753:
			return ":use_proximity_alert";
		case -185755803:
			return ":pvp_mission";
		case 1852727176:
			return ":targets_start_visible";
		case -435940167:
			return ":look_at_position";
		case 1200880489:
			return ":duration";
		case 1385823714:
			return ":next_node";
		case -180479720:
			return ":patrol_route_id";
		case 582819194:
			return ":central_location";
		case -1103749002:
			return ":escape_dist";
		case -234450476:
			return ":is_potential_target";
		case -1261869617:
			return ":adds_extra_bounty";
		case -1807236653:
			return ":sentry_aim_dist";
		case 1837403330:
			return ":sentry_alert_dist";
		case -764544644:
			return ":proximity_alert_dist";
		case 79787630:
			return ":blip_search_radius";
		case 465120035:
			return ":blip_offset_radius";
		case -827172890:
			return ":is_law";
		case 219784559:
			return ":central_location_radius";
		case -1893679960:
			return ":central_location_name";
		case -485657984:
			return ":max_search_radius_offset";
		case 1787479687:
			return ":use_search_area";
		case 2092186359:
			return ":use_go_to_area";
		case 458129012:
			return ":locate_all_targets_together";
		case 1533007347:
			return ":defensive_area_id";
		case 861602793:
			return ":rotation";
		case 275738575:
			return ":scale";
		case -1045199329:
			return ":loop_back";
		case -1111171646:
			return ":waypoint_recording";
		case 227384668:
			return ":source_ped_id";
		case 2066595802:
			return ":enable_tracking_paths";
		case 1137547076:
			return ":randomly_select_targets";
		case -1786937793:
			return ":num_targets_to_pick";
		case -492382713:
			return ":dont_spawn_unless_target";
		case -223083781:
			return ":is_dependent";
		case -1770081554:
			return ":clear_hideouts_in_area";
		case -1925214904:
			return ":target_escape_dist";
		case -1584591647:
			return ":start";
		case -865441380:
			return ":end";
		case 566779387:
			return ":is_guard";
		case -235687863:
			return ":place_on_ground";
		case -209788964:
			return ":is_propset";
		case -807337682:
			return ":is_vehicle";
		case -874477517:
			return ":aggro_on_trespass";
		case 2090933413:
			return ":dont_aim_gun_on_disrupt";
		case -852511194:
			return ":has_saddle";
		case 1159597515:
			return ":use_veg_mod";
		case 460674190:
			return ":use_lantern_behavior";
		case 2053368303:
			return ":use_last_known_location";
		case -1882633578:
			return ":last_known_location";
		case 265695803:
			return ":lkl_radius";
		case -2129803861:
			return ":visible_mission_time";
		case 1628979087:
			return ":max_active_tracking_paths";
		case 413379496:
			return ":use_delayed_targeting";
		case 1967834759:
			return ":always_neutral";
		case -1878208438:
			return ":use_long_distance_smoke";
		case -385659440:
			return ":smoke_offset";
		case 2017657609:
			return ":veg_mod_type";
		case 1719410419:
			return ":veg_mod_offset";
		case -1839625215:
			return ":veg_mod_size";
		case -261480992:
			return ":scenario_pos";
		case 1031590257:
			return ":start_off_horse";
		case 1322693839:
			return ":horse_position";
		case -1919876099:
			return ":horse_heading";
		case 2069982589:
			return ":scenario_propset";
		case -1249970703:
			return ":chest_type";
		case -454599147:
			return ":weight";
		case 1955180846:
			return ":num_chests_to_create";
		case -401087351:
			return ":type";
		case 635104585:
			return ":on_peds_remaining";
		case -1031804957:
			return ":delay";
		case -1272790307:
			return ":min_required_players";
		case 735506410:
			return ":max_required_players";
		case -1732010034:
			return ":alerted_behavior";
		case -1711751769:
			return ":move_to_pos";
		case 2092691923:
			return ":alt_move_to_pos";
		case -407841845:
			return ":weapon_to_add_on_move_to_reached";
		case 456924499:
			return ":activator";
		case 307635954:
			return ":ambush_wait_pos";
		case -311657344:
			return ":ambush_wait_heading";
		case -401112943:
			return ":crouch_before_ambush";
		case 1059929194:
			return ":ambush_trigger";
		case 871643656:
			return ":cancel_ambush_trigger";
		case -412523681:
			return ":accuracy";
		case -155963228:
			return ":can_have_treasure_map_loot";
		case 597233769:
			return ":placement_type";
		case 706368435:
			return ":enable_law";
		case -1652447499:
			return ":default_task_allocator";
		case -1296487272:
			return ":id";
		case 1082010721:
			return ":formation";
		case -655039491:
			return ":formation_offset";
		case -1026827677:
			return ":targets_to_add_on_2_starting_players";
		case 686916651:
			return ":targets_to_add_on_3_starting_players";
		case -1765395338:
			return ":targets_to_add_on_4_starting_players";
		case 1237093265:
			return ":targets_to_add_on_5_starting_players";
		case 209905749:
			return ":targets_to_add_on_6_starting_players";
		case 1078011673:
			return ":targets_to_add_on_7_starting_players";
		case 561062234:
			return ":force_flee_on_remaining_targets";
		case 1033186381:
			return ":dependent_target_ped";
		case -436871069:
			return ":health";
		case 1464077990:
			return ":mount_model";
		case -2109843125:
			return ":scene_name";
		case 1158526802:
			return ":radius";
		case 350192982:
			return ":outfit";
		case 1475346163:
			return ":outfit_index";
		case 1590382703:
			return ":loco_motion_type";
		case 1741894372:
			return ":seeing_range";
		case 1309785647:
			return ":hearing_range";
		case -894890997:
			return ":no_draft_horses";
		case -2067326263:
			return ":not_usable_by_player";
		case -1133284398:
			return ":spawn_in_vehicle";
		case 101317385:
			return ":vehicle_to_use";
		case -1463370342:
			return ":vehicle_seat";
		case -513112783:
			return ":starts_anchored";
		case 2102445471:
			return ":use_mount_as_tracking_source_standin";
		case 892963390:
			return ":dont_flee_on_mission_end";
		case 89352665:
			return ":is_dead_ped";
		case -2076494195:
			return ":remove_default_weapons";
		case -1269124321:
			return ":can_be_picked_up_by_player";
		case -1438322653:
			return ":orient_to_ground";
		case 673047879:
			return ":on_object";
		case -1918016700:
			return ":fixed";
		case 258114362:
			return ":pickup_weapon_after_move_to";
		case -619208322:
			return ":pickup_index";
		case 796390761:
			return ":alt_pickup_index";
		case 912480409:
			return ":move_to_heading";
		case -728132736:
			return ":alt_move_to_heading";
		case 1890996209:
			return ":weapon_to_give_ped";
		case -597454543:
			return ":attach_ped";
		case -608357025:
			return ":path_foliage_cost";
		case 1793981541:
			return ":path_deep_snow_cost";
		case -966540255:
			return ":path_climb_cost";
		case -1143761632:
			return ":dismount_on_arrival";
		case 1326664274:
			return ":dismount_delay";
		case 691956863:
			return ":melee_target";
		case -566322512:
			return ":brawler_group";
		case 1903857900:
			return ":width";
		case 1518210740:
			return ":has_discoverable_name";
		case 1160908162:
			return ":use_veg_mod_volume";
		case 1247393678:
			return ":veg_mod_scale";
		case 1446570234:
			return ":veg_mod_rotation";
		case 1855722710:
			return ":crime_config";
		case 764754194:
			return ":set_mission_road_context";
		default:
			break;
	}
	return "";
}

int func_344(var uParam0, int iParam1, char* sParam2)
{
	if (!DATAFILE::_DATAFILE_REGISTER_QUERY(*uParam0, iParam1, sParam2))
	{
		return 0;
	}
	return 1;
}

int func_349(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (func_119(&Var2))
	{
		aggregate.fme_supply_train.func_39(Var2, -1786937793, &iVar0, 0);
		if (iParam0 >= 2 && aggregate.fme_supply_train.func_39(Var2, -1026827677, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 3 && aggregate.fme_supply_train.func_39(Var2, 686916651, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 4 && aggregate.fme_supply_train.func_39(Var2, -1765395338, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 5 && aggregate.fme_supply_train.func_39(Var2, 1237093265, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 6 && aggregate.fme_supply_train.func_39(Var2, 209905749, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
		if (iParam0 >= 7 && aggregate.fme_supply_train.func_39(Var2, 1078011673, &iVar1, 0))
		{
			iVar0 = (iVar0 + iVar1);
			iVar1 = 0;
		}
	}
	return aggregate.fishing_core.func_224(iVar0, 0, 21);
}

int func_350()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_579(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 5)
	{
		return 5;
	}
	return iVar5;
}

int func_351()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_580(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 21)
	{
		return 21;
	}
	return iVar5;
}

void func_352(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	var uVar6;
	int iVar7;
	vector3 vVar8;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	vector3 vVar16;
	int iVar19;
	bool bVar20;
	bool bVar21;

	iVar19 = -1;
	if (!func_116(iParam0, &Var0))
	{
		return;
	}
	if (!func_581(Var0))
	{
		return;
	}
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_16 = 30f;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_17 = 12f;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_18 = 30f;
	if (aggregate.fme_animal_tagging.func_142(Var0, -1807236653, &((Local_556.f_20.f_22[iParam0 /*19*/])->f_16), 0))
	{
		aggregate.la_alligator.func_225(iParam0, 1024);
	}
	if (aggregate.fme_animal_tagging.func_142(Var0, 1837403330, &((Local_556.f_20.f_22[iParam0 /*19*/])->f_17), 0))
	{
		aggregate.la_alligator.func_225(iParam0, 2048);
	}
	aggregate.fme_animal_tagging.func_142(Var0, -764544644, &((Local_556.f_20.f_22[iParam0 /*19*/])->f_18), 0);
	aggregate.fme_supply_train.func_39(Var0, -180479720, &((Local_556.f_20.f_22[iParam0 /*19*/])->f_13), 0);
	aggregate.fme_supply_train.func_39(Var0, 1533007347, &((Local_556.f_20.f_22[iParam0 /*19*/])->f_14), 0);
	aggregate.fme_animal_tagging.func_40(Var0, 95942702, &uVar5, 1);
	aggregate.fme_animal_tagging.func_40(Var0, -486752250, &uVar6, 1);
	aggregate.fme_animal_tagging.func_143(Var0, -81907729, &vVar8, 1);
	aggregate.fme_animal_tagging.func_142(Var0, 724299998, &uVar11, 0);
	aggregate.fme_animal_tagging.func_40(Var0, 256341061, &uVar12, 0);
	aggregate.fme_animal_tagging.func_40(Var0, 251189665, &uVar13, 0);
	aggregate.fme_animal_tagging.func_40(Var0, -1732010034, &uVar14, 0);
	aggregate.fme_animal_tagging.func_40(Var0, 229174115, &uVar15, 0);
	aggregate.fme_animal_tagging.func_143(Var0, 1468810894, &vVar16, 0);
	aggregate.fme_supply_train.func_39(Var0, -1906113237, &iVar19, 0);
	if (!aggregate.fme_supply_train.func_39(Var0, 110383052, &iVar7, 0))
	{
		iVar7 = -1;
	}
	if (iVar19 < -1 || iVar19 >= Local_556.f_20.f_548)
	{
		iVar19 = -1;
	}
	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_13 < 0 || (Local_556.f_20.f_22[iParam0 /*19*/])->f_13 >= 5)
	{
		(Local_556.f_20.f_22[iParam0 /*19*/])->f_13 = 0;
	}
	Local_556.f_20.f_22[iParam0 /*19*/] = uVar5;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_3 = { vVar8 };
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_9 = uVar11;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_12 = iVar7;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_10 = uVar13;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_11 = uVar14;
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_6 = { vVar16 };
	(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 = iVar19;
	if (((Local_556.f_20.f_22[iParam0 /*19*/])->f_10 == 918683891 && (Local_556.f_20.f_22[iParam0 /*19*/])->f_11 != 2116329739) && aggregate.fme_supply_train.func_39(Var0, 691956863, &iVar19, 0))
	{
		(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 = iVar19;
	}
	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_10 == 918683891)
	{
		if (!aggregate.fme_condor_egg.func_42(Var0, -566322512, &bVar20, 0) || bVar20)
		{
			aggregate.la_alligator.func_225(iParam0, 2097152);
		}
		else
		{
			aggregate.la_alligator.func_225(iParam0, 4194304);
		}
	}
	bVar21 = func_23(iParam0);
	func_582(iParam0, Var0, bVar21, uVar6, uVar5);
}

int func_353()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -407275447, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_354(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	float fVar8;
	struct<5> Var9;
	int iVar14;
	int iVar15;
	int iVar16;

	if (func_583(iParam0, &Var0))
	{
		aggregate.fme_animal_tagging.func_143(Var0, -81907729, &vVar5, 1);
		aggregate.fme_animal_tagging.func_142(Var0, 1158526802, &fVar8, 1);
		if (!func_584(Local_556.f_921[iParam0 /*4*/], vVar5, 0f, 0f, 0f, fVar8, fVar8, 50f, joaat("cylinder")))
		{
			return;
		}
	}
	else
	{
		return;
	}
	iVar14 = func_585(iParam0);
	iVar15 = 0;
	while (iVar15 < iVar14)
	{
		Var9 = { Var0 };
		if (!func_120(&Var9, 2132698637, iVar15, 0))
		{
		}
		else if (!aggregate.fme_supply_train.func_39(Var9, -1296487272, &iVar16, 1))
		{
		}
		else if (iVar16 < 0 || iVar16 >= 21)
		{
		}
		else if (aggregate.la_alligator.func_203(iVar16, 262144))
		{
		}
		else if (&Local_556.f_20.f_22[iVar16 /*19*/] != joaat("target") && &Local_556.f_20.f_22[iVar16 /*19*/] != 391477998)
		{
		}
		else
		{
			aggregate.la_alligator.func_225(iVar16, 262144);
			MISC::_0xE84AAC1B22A73E99(&((Local_556.f_921[iParam0 /*4*/])->f_1), iVar16);
		}
		iVar15++;
	}
}

int func_355()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_586(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 18)
	{
		return 18;
	}
	return iVar5;
}

void func_356(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	bool bVar8;
	int iVar9;
	float fVar10;
	vector3 vVar11;
	int iVar14;
	vector3 vVar15;
	vector3 vVar18;
	int iVar21;
	bool bVar22;
	char cVar23[64];

	if (!func_456(iParam0, &Var0))
	{
		return;
	}
	if (!func_581(Var0))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_40(Var0, -486752250, Local_556.f_20.f_422[iParam0 /*4*/], 0);
	aggregate.fme_animal_tagging.func_143(Var0, -81907729, &vVar5, 1);
	bVar8 = false;
	if (aggregate.fme_condor_egg.func_42(Var0, -235687863, &bVar8, 0) && bVar8)
	{
		aggregate.la_alligator.func_225(iParam0, 1);
	}
	if (aggregate.fme_condor_egg.func_42(Var0, -209788964, &bVar8, 0) && bVar8)
	{
		aggregate.la_alligator.func_225(iParam0, 2);
	}
	if (aggregate.fme_condor_egg.func_42(Var0, -807337682, &bVar8, 0) && bVar8)
	{
		aggregate.la_alligator.func_225(iParam0, 4);
	}
	if (aggregate.fme_condor_egg.func_42(Var0, -894890997, &bVar8, 0) && bVar8)
	{
		aggregate.la_alligator.func_225(iParam0, 8);
	}
	if (aggregate.fme_condor_egg.func_42(Var0, -2067326263, &bVar8, 0) && bVar8)
	{
		aggregate.la_alligator.func_225(iParam0, 16);
	}
	if (aggregate.fme_condor_egg.func_42(Var0, -513112783, &bVar8, 0) && bVar8)
	{
		aggregate.la_alligator.func_225(iParam0, 64);
	}
	if (aggregate.fme_condor_egg.func_42(Var0, 89352665, &bVar8, 0) && bVar8)
	{
		aggregate.la_alligator.func_225(iParam0, 128);
	}
	if (aggregate.fme_condor_egg.func_42(Var0, 1159597515, &bVar8, 0) && bVar8)
	{
		aggregate.fme_animal_tagging.func_40(Var0, 2017657609, &iVar14, 0);
		aggregate.fme_animal_tagging.func_143(Var0, 1719410419, &vVar11, 0);
		if (&Local_556.f_20.f_422[iParam0 /*4*/] == 0)
		{
			aggregate.la_alligator.func_225(iParam0, 256);
		}
		if (!aggregate.fme_animal_tagging.func_142(Var0, -1839625215, &fVar10, 0))
		{
			fVar10 = 10f;
		}
		if (iVar14 == 0)
		{
			iVar9 = 2;
		}
		else
		{
			iVar9 = func_588(iVar14);
		}
		if (aggregate.fme_condor_egg.func_42(Var0, 1160908162, &bVar8, 0) && bVar8)
		{
			aggregate.fme_animal_tagging.func_143(Var0, 1446570234, &vVar15, 0);
			aggregate.fme_animal_tagging.func_143(Var0, 1247393678, &vVar18, 0);
			iVar21 = 0;
			while (iVar21 < 4)
			{
				if (VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_987[iVar21])))
				{
				}
				else
				{
					bVar22 = true;
				}
				else
				{
					iVar21++;
				}
			}
			if (!bVar22)
			{
				return;
			}
			StringCopy(&cVar23, "VOL_VEG_MOD_PROP_", 64);
			StringIntConCat(&cVar23, iParam0, 64);
			Local_556.f_987[iVar21] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar5 + vVar11, vVar15, vVar18, aggregate.fm_mission_controller.func_3989(&cVar23));
			(Local_556.f_20.f_422[iParam0 /*4*/])->f_2 = GRAPHICS::_0xBD3324281E8B9933(&(Local_556.f_987[iVar21]), iVar9, -1, 0);
		}
		else
		{
			(Local_556.f_20.f_422[iParam0 /*4*/])->f_2 = GRAPHICS::_0xFA50F79257745E74(vVar5 + vVar11, fVar10, iVar9, -1, 0);
		}
	}
}

int func_357()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_589(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

void func_358(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	var uVar7;

	if (!func_108(iParam0, &Var0))
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_40(Var0, -401087351, &iVar5, 1))
	{
		return;
	}
	iVar6 = iVar5;
	if (iVar6 == 0)
	{
		return;
	}
	if (iVar6 == 1974833915 && aggregate.net_assassination.func_109(Var0, -1111171646, &uVar7, 0))
	{
		func_590(iParam0, 4);
		TASK::REQUEST_WAYPOINT_RECORDING(aggregate.fm_mission_controller.func_3989(&uVar7));
	}
	aggregate.fme_animal_tagging.func_143(Var0, -81907729, &((Local_556.f_20.f_533[iParam0 /*4*/])->f_1), 0);
	func_590(iParam0, 1);
}

int func_359()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_591(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 8)
	{
		return 8;
	}
	return iVar5;
}

void func_360(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar20 = func_592(iParam0);
	if (func_593(iParam0, &Var0))
	{
		aggregate.fme_animal_tagging.func_143(Var0, -81907729, &vVar10, 1);
		aggregate.fme_animal_tagging.func_143(Var0, 275738575, &vVar16, 1);
		aggregate.fme_animal_tagging.func_143(Var0, 861602793, &vVar13, 0);
		aggregate.fme_animal_tagging.func_40(Var0, -401087351, &iVar19, 0);
		if (iVar20 > 0)
		{
			Local_556.f_962[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
			func_594(Local_556.f_962[iParam0], vVar10, vVar13, vVar16, iVar19);
			iVar21 = 0;
			while (iVar21 < iVar20)
			{
				Var5 = { Var0 };
				if (!func_120(&Var5, -962528168, iVar21, 0))
				{
				}
				else
				{
					iVar19 = 0;
					vVar13 = { 0f, 0f, 0f };
					vVar10 = { 0f, 0f, 0f };
					vVar16 = { 0f, 0f, 0f };
					aggregate.fme_animal_tagging.func_143(Var5, -81907729, &vVar10, 1);
					aggregate.fme_animal_tagging.func_143(Var5, 275738575, &vVar16, 1);
					aggregate.fme_animal_tagging.func_143(Var5, 861602793, &vVar13, 0);
					aggregate.fme_animal_tagging.func_40(Var5, -401087351, &iVar19, 0);
					func_594(Local_556.f_962[iParam0], vVar10, vVar13, vVar16, iVar19);
				}
				iVar21++;
			}
		}
		else if (!func_584(Local_556.f_962[iParam0], vVar10, vVar13, vVar16, iVar19))
		{
			return;
		}
	}
}

int func_361()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_595(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

void func_362(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;

	if (func_596(iParam0, &Var0))
	{
		aggregate.fme_animal_tagging.func_143(Var0, -81907729, &vVar5, 1);
		aggregate.fme_animal_tagging.func_143(Var0, 275738575, &vVar11, 1);
		aggregate.fme_animal_tagging.func_143(Var0, 861602793, &vVar8, 0);
		aggregate.fme_condor_egg.func_42(Var0, 764754194, &bVar14, 0);
	}
	Local_556.f_971[iParam0] = VOLUME::_CREATE_VOLUME_BOX(vVar5, vVar8, vVar11);
	if (bVar14)
	{
		PATHFIND::_0xB03944057FD735BA(&(Local_556.f_971[iParam0]), 4, 0);
	}
}

int func_363()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -937849669, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 2)
	{
		return 2;
	}
	return iVar5;
}

void func_364(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	iVar20 = func_597(iParam0);
	if (func_119(&Var0) && func_120(&Var0, -424701201, iParam0, 0))
	{
		aggregate.fme_animal_tagging.func_143(Var0, -81907729, &vVar10, 1);
		aggregate.fme_animal_tagging.func_143(Var0, 275738575, &vVar16, 1);
		aggregate.fme_animal_tagging.func_143(Var0, 861602793, &vVar13, 0);
		aggregate.fme_animal_tagging.func_40(Var0, -401087351, &iVar19, 0);
		if (iVar20 > 0)
		{
			Local_556.f_975[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
			func_594(Local_556.f_975[iParam0], vVar10, vVar13, vVar16, iVar19);
			iVar21 = 0;
			while (iVar21 < iVar20)
			{
				Var5 = { Var0 };
				if (!func_120(&Var5, -962528168, iVar21, 0))
				{
				}
				else
				{
					iVar19 = 0;
					vVar13 = { 0f, 0f, 0f };
					vVar10 = { 0f, 0f, 0f };
					vVar16 = { 0f, 0f, 0f };
					aggregate.fme_animal_tagging.func_143(Var5, -81907729, &vVar10, 1);
					aggregate.fme_animal_tagging.func_143(Var5, 275738575, &vVar16, 1);
					aggregate.fme_animal_tagging.func_143(Var5, 861602793, &vVar13, 0);
					aggregate.fme_animal_tagging.func_40(Var5, -401087351, &iVar19, 0);
					func_594(Local_556.f_975[iParam0], vVar10, vVar13, vVar16, iVar19);
				}
				iVar21++;
			}
		}
		else if (!func_584(Local_556.f_975[iParam0], vVar10, vVar13, vVar16, iVar19))
		{
			return;
		}
	}
}

int func_365()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_598(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_366(int iParam0)
{
	struct<5> Var0;

	if (func_271(iParam0, &Var0))
	{
		aggregate.fme_supply_train.func_39(Var0, 227384668, Local_556.f_20.f_495[iParam0 /*2*/], 1);
	}
}

int func_367()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_599(&Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 4)
	{
		return 4;
	}
	return iVar5;
}

void func_368(int iParam0)
{
	*(Local_556.f_20.f_508[iParam0 /*6*/]) = { func_600(iParam0) };
	(Local_556.f_20.f_508[iParam0 /*6*/])->f_3 = { func_601(iParam0) };
}

int func_369()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 2071017826, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

void func_370(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_119(&Var0) || !func_120(&Var0, 1606032220, iParam0, 0))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_143(Var0, -81907729, &vVar10, 1);
	aggregate.fme_animal_tagging.func_143(Var0, 275738575, &vVar16, 1);
	aggregate.fme_animal_tagging.func_143(Var0, 861602793, &vVar13, 0);
	aggregate.fme_animal_tagging.func_40(Var0, -401087351, &iVar19, 0);
	iVar20 = func_602(iParam0);
	if (iVar20 > 0)
	{
		Local_556.f_980[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
		func_594(Local_556.f_980[iParam0], vVar10, vVar13, vVar16, iVar19);
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			Var5 = { Var0 };
			if (!func_120(&Var5, -962528168, iVar21, 0))
			{
			}
			else
			{
				iVar19 = 0;
				vVar13 = { 0f, 0f, 0f };
				vVar10 = { 0f, 0f, 0f };
				vVar16 = { 0f, 0f, 0f };
				aggregate.fme_animal_tagging.func_143(Var5, -81907729, &vVar10, 1);
				aggregate.fme_animal_tagging.func_143(Var5, 275738575, &vVar16, 1);
				aggregate.fme_animal_tagging.func_143(Var5, 861602793, &vVar13, 0);
				aggregate.fme_animal_tagging.func_40(Var5, -401087351, &iVar19, 0);
				func_594(Local_556.f_980[iParam0], vVar10, vVar13, vVar16, iVar19);
			}
			iVar21++;
		}
	}
	else if (!func_584(Local_556.f_980[iParam0], vVar10, vVar13, vVar16, iVar19))
	{
		return;
	}
}

int func_371()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 386308088, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

void func_372(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_119(&Var0) || !func_120(&Var0, -375509478, iParam0, 0))
	{
		return;
	}
	aggregate.fme_animal_tagging.func_143(Var0, -81907729, &vVar10, 1);
	aggregate.fme_animal_tagging.func_143(Var0, 275738575, &vVar16, 1);
	aggregate.fme_animal_tagging.func_143(Var0, 861602793, &vVar13, 0);
	aggregate.fme_animal_tagging.func_40(Var0, -401087351, &iVar19, 0);
	iVar20 = func_603(iParam0);
	if (iVar20 > 0)
	{
		Local_556.f_978[iParam0] = VOLUME::_CREATE_VOLUME_AGGREGATE();
		func_594(Local_556.f_978[iParam0], vVar10, vVar13, vVar16, iVar19);
		iVar21 = 0;
		while (iVar21 < iVar20)
		{
			Var5 = { Var0 };
			if (!func_120(&Var5, -962528168, iVar21, 0))
			{
			}
			else
			{
				iVar19 = 0;
				vVar13 = { 0f, 0f, 0f };
				vVar10 = { 0f, 0f, 0f };
				vVar16 = { 0f, 0f, 0f };
				aggregate.fme_animal_tagging.func_143(Var5, -81907729, &vVar10, 1);
				aggregate.fme_animal_tagging.func_143(Var5, 275738575, &vVar16, 1);
				aggregate.fme_animal_tagging.func_143(Var5, 861602793, &vVar13, 0);
				aggregate.fme_animal_tagging.func_40(Var5, -401087351, &iVar19, 0);
				func_594(Local_556.f_978[iParam0], vVar10, vVar13, vVar16, iVar19);
			}
			iVar21++;
		}
	}
	else if (!func_584(Local_556.f_978[iParam0], vVar10, vVar13, vVar16, iVar19))
	{
		return;
	}
}

int func_373()
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, 749370907, 0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

bool func_378(int iParam0, var uParam1)
{
	struct<5> Var0;
	bool bVar5;
	vector3 vVar6;

	if (!func_456(iParam0, &Var0))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_143(Var0, -81907729, uParam1, 1))
	{
		return false;
	}
	aggregate.fme_condor_egg.func_42(Var0, -1878208438, &bVar5, 0);
	if (!bVar5)
	{
		return false;
	}
	aggregate.fme_animal_tagging.func_143(Var0, -385659440, &vVar6, 0);
	*uParam1 = { *uParam1 + vVar6 };
	return true;
}

bool func_379(int iParam0, vector3 vParam1)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST((Local_556.f_20.f_422[iParam0 /*4*/])->f_3))
	{
		return true;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(MISC::GET_HASH_KEY(func_126()));
	if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(MISC::GET_HASH_KEY(func_126())))
	{
		return false;
	}
	GRAPHICS::USE_PARTICLE_FX_ASSET(func_126());
	(Local_556.f_20.f_422[iParam0 /*4*/])->f_3 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(func_604(), vParam1, 0f, 0f, 0f, 1f, false, true, false, false);
	return true;
}

int func_380()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, 723480330, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 1)
	{
		return 1;
	}
	return iVar5;
}

bool func_381(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_119(&Var0) || !func_120(&Var0, -1859092546, iParam0, 0))
	{
		return false;
	}
	if (!aggregate.net_assassination.func_109(Var0, -2109843125, uParam3, 1))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_143(Var0, -81907729, uParam1, 0))
	{
		*uParam4 = 1;
		aggregate.fme_animal_tagging.func_143(Var0, 861602793, uParam2, 0);
	}
	return true;
}

bool func_382(int iParam0, vector3 vParam1, vector3 vParam4, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, bool bParam15)
{
	char* sVar0;

	sVar0 = aggregate.fm_mission_controller.func_3989(&uParam7);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return true;
	}
	if ((ANIMSCENE::_0x25557E324489393C(&(Local_556.f_950[iParam0])) && ANIMSCENE::_0x477122B8D05E7968(&(Local_556.f_950[iParam0]), 0, 0)) && ANIMSCENE::_0xCBFC7725DE6CE2E0(&(Local_556.f_950[iParam0]), 0))
	{
		return true;
	}
	if (!ANIMSCENE::_0x25557E324489393C(&(Local_556.f_950[iParam0])))
	{
		Local_556.f_950[iParam0] = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 1, 0, false, false);
		if (bParam15)
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(&(Local_556.f_950[iParam0]), vParam1, vParam4, 2);
		}
		return false;
	}
	if (ANIMSCENE::_0x477122B8D05E7968(&(Local_556.f_950[iParam0]), 0, 0))
	{
		ANIMSCENE::START_ANIM_SCENE(&(Local_556.f_950[iParam0]));
	}
	else if (ANIMSCENE::_0x59606519FF9D3EC2(&(Local_556.f_950[iParam0]), 1))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(&(Local_556.f_950[iParam0]));
	}
	return false;
}

void func_383(int iParam0)
{
	int iVar0;
	char cVar1[32];
	int iVar5;
	bool bVar6;
	struct<9> Var7;

	StringCopy(&cVar1, func_127(iParam0), 32);
	iVar5 = func_605(iParam0);
	bVar6 = func_606(iParam0);
	TASK::OPEN_PATROL_ROUTE(&cVar1);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		func_607(iParam0, iVar0, &Var7);
		TASK::ADD_PATROL_ROUTE_NODE(iVar0, func_608(Var7.f_3), Var7, Var7.f_4, Var7.f_7, 0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		if (bVar6 && iVar0 >= (iVar5 - 1))
		{
		}
		else
		{
			func_607(iParam0, iVar0, &Var7);
			TASK::ADD_PATROL_ROUTE_LINK(iVar0, Var7.f_8);
		}
		iVar0++;
	}
	TASK::CLOSE_PATROL_ROUTE();
	TASK::CREATE_PATROL_ROUTE();
}

void func_384()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2.f_1 = 11;
	if (func_45())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = Local_556.f_7.f_12;
			if ((&Local_17.f_234[iVar1 /*2*/] != 255 && func_163(iVar1)) && !MISC::_0x8F4F050054005C27(&(Local_556.f_1000), iVar1))
			{
				if (((aggregate.fme_animal_tagging.func_134(4) && NETWORK::_0x255A5EF65EDA9167((Local_17.f_234[iVar1 /*2*/])->f_1)) && NETWORK::NETWORK_IS_PLAYER_CONNECTED((Local_17.f_234[iVar1 /*2*/])->f_1)) && _NAMESPACE26::_0x3F59FE6F37869576((Local_17.f_234[iVar1 /*2*/])->f_1, PLAYER::PLAYER_ID()))
				{
					func_389(&Var2, joaat("attack"), func_388(255), 1);
				}
				MISC::_0xE84AAC1B22A73E99(&(Local_556.f_1000), iVar1);
			}
			func_268(&(Local_556.f_7.f_12), 7);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = Local_556.f_7.f_12;
			if ((((Local_17.f_2[iVar1 /*9*/])->f_2 == 1583594396 && aggregate.fme_challenges.func_1307(iVar1, 67108864)) && aggregate.fme_challenges.func_1307(iVar1, 134217728)) && !MISC::_0x8F4F050054005C27(&(Local_556.f_998), iVar1))
			{
				if (((aggregate.fme_animal_tagging.func_134(4) && NETWORK::_0x255A5EF65EDA9167((Local_17.f_2[iVar1 /*9*/])->f_5)) && NETWORK::NETWORK_IS_PLAYER_CONNECTED((Local_17.f_2[iVar1 /*9*/])->f_5)) && _NAMESPACE26::_0x3F59FE6F37869576((Local_17.f_2[iVar1 /*9*/])->f_5, PLAYER::PLAYER_ID()))
				{
					func_389(&Var2, joaat("attack"), func_388(255), 1);
				}
				MISC::_0xE84AAC1B22A73E99(&(Local_556.f_998), iVar1);
			}
			func_268(&(Local_556.f_7.f_12), 21);
			iVar0++;
		}
	}
}

bool func_385()
{
	if (aggregate.fme_animal_tagging.func_134(131072))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(8388608))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 16))
	{
		if (func_93())
		{
			return false;
		}
		if (aggregate.fme_animal_tagging.func_384(Local_556.f_1004) > 2000)
		{
			return false;
		}
	}
	return true;
}

int func_387()
{
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 65536))
	{
		return 2;
	}
	switch (func_148())
	{
		case 2:
			if (!func_45())
			{
				if (Local_17.f_275 == 0)
				{
					return 1;
				}
				if (Local_17.f_275 == Local_556.f_20.f_549)
				{
					return 2;
				}
			}
			else
			{
				if (!aggregate.fme_animal_tagging.func_134(4194304))
				{
					return 2;
				}
				if (Local_17.f_275 == Local_17.f_276)
				{
					return 2;
				}
				if (Local_17.f_275 == 0)
				{
					return 1;
				}
			}
			break;
		case 3:
			if (Local_17.f_275 == 0)
			{
				return 2;
			}
			if (Local_17.f_275 == Local_556.f_20.f_549)
			{
				return 1;
			}
			break;
		case 1:
		case 4:
			if (Local_17.f_275 > 0)
			{
				return 1;
			}
			return 2;
	}
	return 0;
}

int func_388(int iParam0)
{
	int iVar0;

	iVar0 = func_609(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return aggregate.flow_controller.func_327(iVar0);
}

void func_389(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;

	func_610(iParam0, 0, iParam1);
	aggregate.nb_hobo_dog.func_480(iParam0, &uVar0, 0, bParam3);
	func_612(iParam0, 0, iParam2);
	aggregate.fme_supply_train.func_1229(532584148, iParam0, 0, 255, 0, 1);
}

int func_390()
{
	if (!aggregate.fme_animal_tagging.func_134(8))
	{
		return 0;
	}
	return NETWORK::GET_TIME_DIFFERENCE(Local_17.f_272, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_391(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, struct<2> Param12)
{
	float fVar0;
	int iVar1;
	bool bVar2;

	if (iParam9 == 0)
	{
		return;
	}
	fVar0 = aggregate.coffee_drinking.func_45(((BUILTIN::TO_FLOAT(iParam11) / 1000f) / 60f), 0.5f, 30f);
	func_615(iParam2, &iVar1, &bVar2, 0, fVar0);
	aggregate.nb_hobo_dog.func_478(iParam2, &bVar2, 0, iParam4, iParam9, iParam10, bParam7);
	aggregate.nb_hobo_dog.func_479(iParam2, 0, iParam5);
	aggregate.nb_hobo_dog.func_480(iParam2, &bVar2, 0, bParam8);
	aggregate.nb_hobo_dog.func_481(iParam2, 0, Param12);
	func_612(iParam2, 0, iParam6);
	aggregate.fme_animal_tagging.func_752(1149539403, uParam0, iParam2, 0, 255, 0, 1);
	func_615(iParam3, &iVar1, &bVar2, 1, fVar0);
	aggregate.nb_hobo_dog.func_480(iParam3, &bVar2, 1, bParam8);
	aggregate.nb_hobo_dog.func_478(iParam3, &bVar2, 1, iParam4, iParam9, iParam10, bParam7);
	func_612(iParam3, 1, iParam6);
	if (!bVar2 && iVar1 != 0)
	{
		aggregate.fme_animal_tagging.func_752(iVar1, uParam1, iParam3, 0, 255, 0, 0);
	}
}

void func_392(int iParam0)
{
	int iVar0;

	func_620(iParam0);
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 0)
	{
		return;
	}
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		func_621(iParam0, 0);
		return;
	}
	func_622(iParam0, iVar0);
	func_623(iParam0, iVar0);
	aggregate.bigvalleyomj.func_36(iParam0, iVar0);
	func_625(iParam0);
	func_626(iParam0, iVar0);
	func_627(iParam0, iVar0);
	func_628(iParam0, iVar0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	func_629(iParam0, iVar0);
	switch ((Local_17.f_2[iParam0 /*9*/])->f_2)
	{
		case joaat("target"):
			func_630(iParam0);
			break;
		case joaat("extra"):
			func_631(iParam0);
			break;
		case 1824637041:
			func_632(iParam0);
			break;
		case 516423162:
			func_633(iParam0);
			break;
		default:
			return;
	}
	func_634(iParam0, iVar0);
}

void func_393(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 0 || (Local_17.f_2[iParam0 /*9*/])->f_2 == 1583594396)
	{
		return;
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_4 != 16 && (Local_17.f_2[iParam0 /*9*/])->f_4 != 17)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_2[iParam0 /*9*/])))
	{
		return;
	}
	if (!func_52(iParam0, &iVar2, 1, 0))
	{
		return;
	}
	bVar4 = func_635(iParam0, 60000);
	if (aggregate.fme_challenges.func_1307(iParam0, 1048576))
	{
		fVar0 = 1.5f;
		if (bVar4)
		{
			fVar1 = 1.25f;
		}
		else
		{
			fVar1 = 1.5f;
		}
	}
	else if (aggregate.fme_challenges.func_1307(iParam0, 2097152))
	{
		fVar0 = 2f;
		if (bVar4)
		{
			fVar1 = 1.501f;
		}
		else
		{
			fVar1 = 1.75f;
		}
	}
	else if (aggregate.fme_challenges.func_1307(iParam0, 4194304))
	{
		fVar0 = 2f;
		if (bVar4)
		{
			fVar1 = 1.75f;
		}
		else
		{
			fVar1 = 2f;
		}
	}
	else
	{
		fVar0 = 3f;
		if (bVar4)
		{
			fVar1 = 2.5f;
		}
		else
		{
			fVar1 = 3f;
		}
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 8388608))
	{
		fVar1 = 1f;
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar2, fVar0);
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		iVar3 = PED::GET_MOUNT(iVar2);
		if (!ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, fVar1);
		}
	}
}

void func_394(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_198[iParam0])))
	{
		return;
	}
	if (aggregate.la_alligator.func_203(iParam0, 4))
	{
		iVar0 = NETWORK::NET_TO_VEH(&(Local_17.f_198[iParam0]));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return;
		}
		if (aggregate.la_alligator.func_203(iParam0, 16) && !aggregate.la_alligator.func_203(iParam0, 32))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, false);
			aggregate.la_alligator.func_225(iParam0, 32);
		}
	}
}

void func_395(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	var uVar11;

	if (!func_107(iParam0, 1) || func_107(iParam0, 2))
	{
		return;
	}
	if (!aggregate.annesburg.func_121((Local_556.f_20.f_533[iParam0 /*4*/])->f_1) && BUILTIN::VDIST(Global_36, (Local_556.f_20.f_533[iParam0 /*4*/])->f_1) > 150f)
	{
		return;
	}
	if (!func_108(iParam0, &Var0))
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_40(Var0, -401087351, &iVar5, 0))
	{
		return;
	}
	iVar6 = iVar5;
	if (iVar6 == -1993313767)
	{
		if (!aggregate.fme_animal_tagging.func_142(Var0, 1903857900, &fVar7, 0))
		{
			fVar7 = 0.3f;
		}
		vVar8 = { (Local_556.f_20.f_533[iParam0 /*4*/])->f_1 };
		vVar8.f_2 = (vVar8.z + 1f);
		MISC::GET_GROUND_Z_FOR_3D_COORD(vVar8, &(vVar8.f_2), 0);
		GRAPHICS::_0xF708298675ABDC6A(vVar8, 0.5f, fVar7, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 0.6f), 1, -1, 0);
	}
	else if (iVar6 == 1974833915)
	{
		if (!func_107(iParam0, 4))
		{
			return;
		}
		if (!aggregate.net_assassination.func_109(Var0, -1111171646, &uVar11, 0))
		{
			return;
		}
		if (!func_107(iParam0, 8))
		{
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(aggregate.fm_mission_controller.func_3989(&uVar11)))
			{
				return;
			}
			func_590(iParam0, 8);
		}
		if (!aggregate.fme_animal_tagging.func_142(Var0, 1903857900, &fVar7, 0))
		{
			fVar7 = 0.3f;
		}
		GRAPHICS::_0xB9C92616929CC25D(aggregate.fm_mission_controller.func_3989(&uVar11), fVar7);
	}
	func_590(iParam0, 2);
}

bool func_398(int iParam0)
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
	if (func_45())
	{
		if ((!aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 4) && !aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 8192)) && !aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 131072))
		{
			return false;
		}
	}
	else if (!aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 4) && !aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 64))
	{
		return false;
	}
	return true;
}

void func_399()
{
	int iVar0;
	int iVar1;

	if (!aggregate.fme_animal_tagging.func_134(4) || !func_415(1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_961), iVar0))
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

bool func_400()
{
	if (func_638(255) && !func_639(255))
	{
		return false;
	}
	return true;
}

bool func_401()
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
			if (!aggregate.fishing_core.func_34(Local_299[iVar2 /*8*/], 1048576))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

int func_402()
{
	int iVar0;
	int iVar1;

	if (!aggregate.fme_animal_tagging.func_134(8))
	{
		return Local_556.f_20.f_2;
	}
	if (aggregate.fme_animal_tagging.func_134(134217728))
	{
		iVar0 = Local_17.f_273;
	}
	else
	{
		iVar0 = Local_17.f_272;
	}
	if (aggregate.fme_animal_tagging.func_134(134217728))
	{
		iVar1 = Local_556.f_20.f_4;
	}
	else
	{
		iVar1 = Local_556.f_20.f_2;
	}
	iVar1 = (iVar1 - NETWORK::GET_TIME_DIFFERENCE(iVar0, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	iVar1 = aggregate.fishing_core.func_224(iVar1, 0, Local_556.f_20.f_2);
	return iVar1;
}

bool func_403(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 2);
	iVar1 = (iParam1 / 8);
	return (iParam0 <= iVar0 && iParam0 >= iVar1);
}

void func_404(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_640())
	{
		if ((MISC::GET_GAME_TIMER() - func_641()) < 75000)
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
	iVar2 = aggregate.net_assassination.func_508(iVar1);
	func_642(iVar2, iVar0, Param0);
	func_551(MISC::GET_GAME_TIMER());
	aggregate.net_assassination.func_552(1);
}

bool func_406(int iParam0)
{
	int iVar0;

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
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	switch (func_148())
	{
		case 1:
		case 4:
			if (!aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 4))
			{
				return false;
			}
			return true;
		case 2:
			if (!aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 8192) && !aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 131072))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

bool func_409(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_17.f_2[iVar0 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (!func_428(iVar0, Local_299[Local_556.f_1008 /*8*/]) && !aggregate.fme_challenges.func_1307(iVar0, 1))
		{
		}
		else if (!func_52(iVar0, &iVar1, 1, 0))
		{
		}
		else if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) > fParam0)
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

bool func_415(bool bParam0)
{
	struct<2> Var0;

	if (bParam0)
	{
		return aggregate.fme_animal_tagging.func_134(16384);
	}
	if (aggregate.aberdeenpigfarm.func_156())
	{
		return false;
	}
	Var0 = { aggregate.aberdeenpigfarm.func_159() };
	if (!aggregate.aberdeenpigfarm.func_158(Var0))
	{
		return false;
	}
	if (!aggregate.flow_controller.func_165(Local_556.f_2, Var0))
	{
		return false;
	}
	return true;
}

void func_416(int iParam0, int iParam1)
{
	bool bVar0;

	switch (iParam0)
	{
		case 1:
			aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 8192);
			aggregate.fm_deathmatch_controller.func_300(131072);
			Local_556.f_1006 = iParam1;
			break;
		case 2:
			aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 4);
			if (func_45())
			{
				aggregate.fm_deathmatch_controller.func_300(131072);
			}
			else
			{
				aggregate.fme_animal_tagging.func_203();
			}
			aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 65536);
			aggregate.fme_animal_tagging.func_174(16);
			break;
		case 3:
			aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 64);
			break;
		case 4:
			aggregate.fme_animal_tagging.func_1147(Local_299[Local_556.f_1008 /*8*/], 131072);
			break;
	}
	bVar0 = func_206();
	aggregate.net_ambient_content_evaluator.func_86(Local_556.f_1);
	aggregate.net_ambient_content_evaluator.func_87(Local_556.f_1, 1, !bVar0, 0);
	aggregate.fishing_core.func_89(6);
	aggregate.fme_animal_tagging.func_174(4);
	aggregate.fme_animal_tagging.func_153(-1256206172, 0);
	func_91();
}

bool func_417(int iParam0, float fParam1)
{
	int iVar0;

	if (Local_17.f_2[iParam0 /*9*/])->f_2 != joaat("target")
	{
		return false;
	}
	if (!func_52(iParam0, &iVar0, 1, 1))
	{
		return false;
	}
	if (aggregate.fme_dead_drop.func_811())
	{
		return false;
	}
	if (aggregate.fishing_core.func_39(iVar0, aggregate.camera_item.func_108(PLAYER::PLAYER_ID()), 1) > fParam1)
	{
		return false;
	}
	return true;
}

void func_418()
{
	int iVar0;
	int iVar1;

	if (!func_45())
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_134(256))
	{
		return;
	}
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_281) && _NAMESPACE26::_0x0F99F6436528A089(Local_17.f_281))
	{
		Local_556.f_584.f_68 = { aggregate.fme_king_of_the_rails.func_709(aggregate.fm_deathmatch_controller.func_2417(Local_17.f_281, 0, 0)) };
	}
	iVar0 = Local_17.f_276;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (NETWORK::_0x255A5EF65EDA9167(&(Local_17.f_234[iVar1 /*2*/])) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_234[iVar1 /*2*/])))
		{
			*(Local_556.f_584.f_39[iVar1 /*4*/]) = { func_655(PLAYER::GET_PLAYER_NAME(&(Local_17.f_234[iVar1 /*2*/]))) };
		}
		iVar1++;
	}
	aggregate.fme_animal_tagging.func_174(256);
}

void func_419()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!aggregate.fme_animal_tagging.func_134(4) || !func_415(1))
	{
		return;
	}
	iVar2 = func_656(&iVar0, &iVar1);
	func_657(iVar2, iVar0, iVar1);
}

void func_420()
{
	bool bVar0;

	if (func_658(&bVar0))
	{
		if (bVar0)
		{
			func_659();
			func_660();
		}
		aggregate.fme_animal_tagging.func_513(&(Local_556.f_584.f_76), &(Local_556.f_584.f_91), func_661(), 0, 30000, 0, func_662(), 0, 0, 0, 0);
	}
	else
	{
		func_132();
	}
}

void func_421()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		func_664(iVar0);
		iVar0++;
	}
	if (func_45())
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			func_665(iVar1);
			iVar1++;
		}
		if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192))
		{
			func_666();
		}
	}
}

void func_422()
{
	int iVar0;

	if (func_667())
	{
		func_668();
	}
	else
	{
		aggregate.fme_escaped_convicts.func_736(&(Local_556.f_584.f_23));
	}
	if (func_669())
	{
		func_670();
	}
	else if (func_671())
	{
		func_672();
	}
	else
	{
		aggregate.fme_escaped_convicts.func_736(&(Local_556.f_584.f_22));
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_551)
	{
		if (func_673(iVar0))
		{
			func_674(iVar0);
		}
		else
		{
			aggregate.fme_escaped_convicts.func_736(Local_556.f_584.f_24[iVar0]);
		}
		iVar0++;
	}
	func_675();
}

void func_423()
{
	bool bVar0;

	if (!func_415(1) && !aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 65536))
	{
		return;
	}
	bVar0 = Local_556.f_20.f_549 <= true;
	if (func_45())
	{
		bVar0 = Local_17.f_276 <= true;
	}
	if (func_676())
	{
		func_678(func_677(bVar0));
		aggregate.fme_animal_tagging.func_174(32);
	}
	else if (func_679())
	{
		func_680(func_387());
		aggregate.fme_animal_tagging.func_174(16);
	}
}

void func_424()
{
	if (((!func_415(1) || !aggregate.fme_animal_tagging.func_134(32)) || aggregate.fme_animal_tagging.func_134(16)) || !aggregate.fme_animal_tagging.func_134(1))
	{
		func_134();
		return;
	}
	if (func_682())
	{
		func_683(14, -1);
	}
	else if (func_684())
	{
		if (func_45())
		{
			func_683(7, -1);
		}
		else if (Local_556.f_20 == 1657045547)
		{
			if (func_685())
			{
				func_683(7, -1);
			}
			else
			{
				func_683(8, -1);
			}
		}
		else if (Local_17.f_275 > 1)
		{
			func_683(7, -1);
		}
		else
		{
			func_683(8, -1);
		}
	}
	else if (func_686())
	{
		if (Local_17.f_275 > 1)
		{
			func_683(1, -1);
		}
		else
		{
			func_683(2, -1);
		}
	}
	else if (func_687())
	{
		func_683(5, -1);
	}
	else if (func_688())
	{
		func_683(11, -1);
	}
	else if (func_689())
	{
		if (aggregate.fm_deathmatch_controller.func_962() == joaat("player") || Local_17.f_275 == 1)
		{
			func_683(13, -1);
		}
		else
		{
			func_683(12, -1);
		}
	}
	else
	{
		func_134();
	}
}

void func_425(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	int iVar17;
	int iVar18;

	if (!MISC::_0x80E9C316EF84DD81(&((Local_556.f_921[iParam0 /*4*/])->f_1)))
	{
		return;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_921[iParam0 /*4*/])))
	{
		func_690(iParam0);
		return;
	}
	if ((((((aggregate.fme_animal_tagging.func_397((Local_556.f_921[iParam0 /*4*/])->f_3, 1) && !aggregate.fme_animal_tagging.func_397((Local_556.f_921[iParam0 /*4*/])->f_3, 2)) && func_583(iParam0, &Var2)) && aggregate.fme_supply_train.func_39(Var2, -597454543, &iVar1, 0)) && iVar1 >= 0) && iVar1 < 21) && func_52(iVar1, &iVar0, 1, 0))
	{
		PED::_0x7C00CFC48A782DC0(&(Local_556.f_921[iParam0 /*4*/]), iVar0, 0f, 0f, 0f, 0f, 0f, 0f, 2, 0);
		aggregate.fme_round_up.func_1144(&((Local_556.f_921[iParam0 /*4*/])->f_3), 2);
		aggregate.medium_update.func_483(&Var2);
	}
	vVar7 = { VOLUME::_0xF70F00013A62F866(&(Local_556.f_921[iParam0 /*4*/])) };
	vVar13 = { VOLUME::_0x3E2A25B2416DD67E(&(Local_556.f_921[iParam0 /*4*/])) };
	fVar16 = vVar13.x;
	if (aggregate.blackwater.func_175(Global_36, vVar7) < fVar16)
	{
		func_690(iParam0);
		return;
	}
	iVar18 = 0;
	while (iVar18 < 21)
	{
		if (!MISC::_0x8F4F050054005C27(&((Local_556.f_921[iParam0 /*4*/])->f_1), iVar18))
		{
		}
		else if (func_52(iVar18, &iVar17, 1, 0))
		{
			vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar17, false, false) };
			if ((((aggregate.blackwater.func_175(vVar10, vVar7) < fVar16 && !aggregate.fme_challenges.func_1307(iVar18, 1)) && (Local_17.f_2[iVar18 /*9*/])->f_2 != 1583594396) && (Local_17.f_2[iVar18 /*9*/])->f_2 != 0) && !func_428(iVar18, Local_299[Local_556.f_1008 /*8*/]))
			{
			}
			else
			{
				if ((((aggregate.fme_animal_tagging.func_397((Local_556.f_921[iParam0 /*4*/])->f_3, 2) && func_583(iParam0, &Var2)) && aggregate.fme_supply_train.func_39(Var2, -597454543, &iVar1, 0)) && iVar1 == iVar18) && func_52(iVar1, &iVar0, 0, 1))
				{
					PED::_0x19C975B81BE53C28(&(Local_556.f_921[iParam0 /*4*/]), iVar0);
					aggregate.fme_round_up.func_1140(&((Local_556.f_921[iParam0 /*4*/])->f_3), 2);
				}
				aggregate.la_alligator.func_225(iVar18, 262144);
				MISC::_0xB909149F2BB5F6DA(&((Local_556.f_921[iParam0 /*4*/])->f_1), iVar18);
			}
			iVar18++;
			if (!MISC::_0x80E9C316EF84DD81(&((Local_556.f_921[iParam0 /*4*/])->f_1)))
			{
				func_690(iParam0);
			}
		}
	}
}

bool func_426(int iParam0)
{
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 != joaat("target") && aggregate.fme_challenges.func_1307(iParam0, 4096))
	{
		return false;
	}
	return true;
}

void func_427(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	if (MISC::IS_BIT_SET(&(uParam1->f_2[iVar0]), iVar1))
	{
		return;
	}
	MISC::SET_BIT(uParam1->f_2[iVar0], iVar1);
	aggregate.fme_escaped_convicts.func_736(Local_556.f_584[iParam0]);
}

bool func_428(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&(uParam1->f_2[iVar0]), iVar1);
}

bool func_429(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;

	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = aggregate.fishing_core.func_39(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return true;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return true;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return true;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_430(var uParam0)
{
	if (!aggregate.fishing_core.func_34(uParam0, 8192))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(uParam0, 16384))
	{
		return false;
	}
	return true;
}

bool func_433(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (!aggregate.fishing_core.func_34(uParam0, 4))
	{
		return false;
	}
	if (func_45())
	{
		return false;
	}
	fVar1 = 150f;
	iVar2 = 0;
	while (iVar2 < 21)
	{
		if (Local_17.f_2[iVar2 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (Local_556.f_20 == 1657045547 && !func_428(iVar2, Local_299[Local_556.f_1008 /*8*/]))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar2 /*9*/])))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(&(Local_17.f_2[iVar2 /*9*/]));
			fVar0 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar3, false, false));
			if (fVar0 < fVar1)
			{
				fVar1 = fVar0;
				*uParam1 = iVar3;
			}
		}
		iVar2++;
	}
	if (fVar1 == 150f)
	{
		return false;
	}
	return true;
}

void func_434(bool bParam0)
{
	if (bParam0)
	{
		if (aggregate.fme_animal_tagging.func_134(2))
		{
			return;
		}
		if (aggregate.fme_animal_tagging.func_661(255))
		{
			return;
		}
		aggregate.fme_animal_tagging.func_334(1);
		aggregate.fme_animal_tagging.func_174(2);
	}
	else
	{
		if (!aggregate.fme_animal_tagging.func_134(2))
		{
			return;
		}
		aggregate.fme_animal_tagging.func_334(0);
		aggregate.fme_animal_tagging.func_174(2);
	}
}

void func_437(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	int iVar15;
	int iVar16;

	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	fVar2 = 150f;
	iVar3 = 0;
	while (iVar3 < 21)
	{
		if (Local_17.f_2[iVar3 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (Local_556.f_20 == 1657045547 && !func_428(iVar3, Local_299[Local_556.f_1008 /*8*/]))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar3 /*9*/])))
		{
		}
		else
		{
			iVar4 = NETWORK::NET_TO_PED(&(Local_17.f_2[iVar3 /*9*/]));
			fVar1 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar4, false, false));
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar0 = iVar4;
			}
		}
		iVar3++;
	}
	if (fVar2 == 150f)
	{
		return;
	}
	fVar5 = 95f;
	fVar6 = 150f;
	vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	if (INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vVar7))
	{
		aggregate.fm_mission_controller.func_7506(&vVar7, 200f);
	}
	else
	{
		aggregate.fm_mission_controller.func_7506(&vVar7, 1088421888 /* Float: 7f */);
	}
	uParam0->f_17.f_6 = { vVar7 };
	uParam0->f_17 = { fVar6, fVar6, 25f };
	uParam0->f_17.f_9 = -432403087;
	uParam0->f_6.f_6 = { vVar7 };
	uParam0->f_6 = { fVar5, fVar5, 25f };
	uParam0->f_6.f_9 = -432403087;
	uParam0->f_4 = aggregate.annesburg.func_253(iVar0);
	uParam0->f_5 = 3;
	uParam1->f_6 = { vVar7 };
	uParam1->f_5 = 1;
	*uParam1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
	iVar10 = func_702();
	if (iVar10 > 0)
	{
		iVar11 = 0;
		while (iVar11 < iVar10)
		{
			if (!func_703(iVar11, &vVar12))
			{
			}
			else if (aggregate.annesburg.func_121(vVar12))
			{
			}
			else
			{
				NETWORK::_0xFD1AC0B3858F224C(vVar12, func_704(vVar12, vVar7));
			}
			iVar11++;
		}
	}
	iVar15 = func_363();
	if (iVar15 > 0)
	{
		iVar16 = 0;
		while (iVar16 < iVar15)
		{
			if (!VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_975[iVar16])))
			{
			}
			else
			{
				NETWORK::_0x405DDEFB1F531B18(&(Local_556.f_975[iVar16]), false, 0, 0);
			}
			iVar16++;
		}
	}
}

bool func_439(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return true;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return true;
	}
	if (iVar0 > 256)
	{
		return true;
	}
	if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, 0, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_440(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	vector3 vVar5;
	int iVar8;

	if (!func_121(&Var0, iParam0, iParam1))
	{
		return true;
	}
	if (!aggregate.fme_animal_tagging.func_143(Var0, -81907729, &vVar5, 1))
	{
		return true;
	}
	if (BUILTIN::VDIST(Global_36, vVar5) > 200f)
	{
		return true;
	}
	if (!NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vVar5, 1f, 100f))
	{
		return true;
	}
	if (!func_30(Local_556.f_957))
	{
		Local_556.f_957 = GRAPHICS::CREATE_TRACKED_POINT();
		if (func_30(Local_556.f_957))
		{
			GRAPHICS::SET_TRACKED_POINT_INFO(Local_556.f_957, vVar5 + Vector(0.5f, 0f, 0f), 0.5f);
		}
		return false;
	}
	iVar8 = GRAPHICS::_0xDFE332A5DA6FE7C9(Local_556.f_957);
	if (iVar8 == -1)
	{
		return false;
	}
	*bParam2 = GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_556.f_957);
	return true;
}

void func_443(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1893575->f_2;
	iVar1 = &Local_556.f_952[iParam0];
	if (!aggregate.aberdeenpigfarm.func_58(iVar1))
	{
		return;
	}
	if (aggregate.aberdeenpigfarm.func_58(iVar0) && iVar1 == iVar0)
	{
		if (!MISC::_0x8F4F050054005C27(&(Local_556.f_952.f_2), iParam0))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(((*Global_1887327)[iVar1 /*36*/])->f_10, false))
			{
				return;
			}
			if (!func_705(iParam0, iVar1))
			{
				return;
			}
			MISC::_0xE84AAC1B22A73E99(&(Local_556.f_952.f_2), iParam0);
			Local_556.f_952.f_4 = 0;
		}
	}
	else if (MISC::_0x8F4F050054005C27(&(Local_556.f_952.f_2), iParam0))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(((*Global_1887327)[iVar1 /*36*/])->f_10, false))
		{
			return;
		}
		MISC::_0xB909149F2BB5F6DA(&(Local_556.f_952.f_2), iParam0);
	}
}

void func_445(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_980[iParam0])))
	{
		return;
	}
	if (func_706(iParam0))
	{
		return;
	}
	if (func_572(iParam0))
	{
		return;
	}
	if (!func_707(iParam0))
	{
		return;
	}
	func_708(iParam0);
	func_174(10, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8), -1);
}

void func_446(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	*bParam1 = 0;
	*bParam2 = 0;
	*bParam3 = 0;
	*uParam0 = 0;
	while (*uParam0 < 21)
	{
		if ((Local_17.f_2[*uParam0 /*9*/])->f_2 == 1583594396)
		{
		}
		else if (!func_709(*uParam0, 255))
		{
		}
		else if (aggregate.fme_challenges.func_1307(*uParam0, 8))
		{
			*bParam2 = 1;
		}
		else if (aggregate.fme_challenges.func_1307(*uParam0, 1024))
		{
			*bParam3 = 1;
		}
		else
		{
			*bParam1 = 1;
		}
		*uParam0++;
	}
}

void func_453(var uParam0, var uParam1)
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

void func_454(var uParam0)
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

void func_455(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	MISC::SET_BIT(Local_17.f_251[iVar0], iVar1);
}

bool func_456(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -422348800;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_457(int iParam0, var uParam1)
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

int func_459()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1976409839, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 2)
	{
		return 2;
	}
	return iVar5;
}

bool func_460(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	bool bVar7;
	int iVar8;

	if (OBJECT::DOES_PICKUP_EXIST(&(Local_17.f_217[iParam0 /*2*/])))
	{
		return true;
	}
	if (!func_711(iParam0, &iVar0, &vVar1, &bVar7, &vVar4))
	{
		return false;
	}
	func_712(iParam0, &iVar8);
	if (bVar7)
	{
		Local_17.f_217[iParam0 /*2*/] = OBJECT::CREATE_PICKUP_ROTATE(iVar0, vVar1, vVar4, iVar8, -1, 2, true, 0, 0, 0f, 0);
	}
	else
	{
		Local_17.f_217[iParam0 /*2*/] = OBJECT::CREATE_PICKUP(iVar0, vVar1, iVar8, -1, true, 0, 0, 0f, 0);
	}
	if (!OBJECT::DOES_PICKUP_EXIST(&(Local_17.f_217[iParam0 /*2*/])))
	{
		return false;
	}
	aggregate.net_assassination.func_458(iParam0, 1);
	return true;
}

bool func_461(int iParam0)
{
	struct<5> Var0;
	int iVar5;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (&Local_556.f_20.f_422[iParam0 /*4*/] == 0)
	{
		return true;
	}
	if (!func_456(iParam0, &Var0))
	{
		return true;
	}
	if (!func_581(Var0))
	{
		return true;
	}
	if (((func_247(iParam0, &iVar5) && iVar5 >= 0) && iVar5 < 21) && !func_248(iVar5))
	{
		return true;
	}
	vVar6 = { func_713(iParam0) };
	fVar9 = func_714(iParam0);
	vVar10 = { func_715(iParam0) };
	if (aggregate.annesburg.func_121(vVar6))
	{
		return true;
	}
	if (aggregate.la_alligator.func_203(iParam0, 2))
	{
		iVar13 = &Local_556.f_20.f_422[iParam0 /*4*/];
		if (PROPSET::_0x72068021F498E6E3(&(Local_556.f_20.f_422[iParam0 /*4*/]), vVar6))
		{
			MISC::CLEAR_AREA(vVar6, 0.25f, 2097152);
			return false;
		}
		iVar14 = func_716(iParam0);
		iVar15 = PROPSET::_CREATE_PROPSET_2(iVar13, vVar6, iVar14, fVar9, 1200f, true, true);
		Local_17.f_198[iParam0] = NETWORK::_0x74F99EF7EF503398(iVar15);
	}
	else if (aggregate.la_alligator.func_203(iParam0, 4))
	{
		iVar16 = &Local_556.f_20.f_422[iParam0 /*4*/];
		if (!STREAMING::IS_MODEL_VALID(iVar16))
		{
			return true;
		}
		if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(0) <= NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false))
		{
			return true;
		}
		if (!aggregate.fme_condor_egg.func_999(Local_17.f_198[iParam0], iVar16, vVar6, fVar9, 1, aggregate.la_alligator.func_203(iParam0, 8), 0, 0))
		{
			return false;
		}
		iVar17 = NETWORK::NET_TO_VEH(&(Local_17.f_198[iParam0]));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar17))
		{
			return false;
		}
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar16))
		{
			if (aggregate.la_alligator.func_203(iParam0, 64))
			{
				VEHICLE::SET_BOAT_ANCHOR(iVar17, true);
			}
			else
			{
				VEHICLE::_0x6B53F4B811E583D2(iVar17, 0);
				VEHICLE::SET_BOAT_ANCHOR(iVar17, false);
			}
			VEHICLE::_SET_BOAT_ANCHOR_BUOYANCY_COEFFICIENT(iVar17, 200f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar17, 0f);
			VEHICLE::_0x1098CDA477890165(iVar17, 1);
			VEHICLE::_SET_BOAT_FROZEN_WHEN_ANCHORED(iVar17, false, 1);
		}
	}
	else if (aggregate.la_alligator.func_203(iParam0, 128))
	{
		iVar18 = &Local_556.f_20.f_422[iParam0 /*4*/];
		if (!STREAMING::IS_MODEL_VALID(iVar18))
		{
			return true;
		}
		if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) <= NETWORK::GET_NUM_CREATED_MISSION_PEDS(false))
		{
			return true;
		}
		if (!aggregate.fme_challenges.func_1263(Local_17.f_198[iParam0], iVar18, vVar6, fVar9, 1, 0, 1, 1, 1))
		{
			return false;
		}
		iVar19 = NETWORK::NET_TO_PED(&(Local_17.f_198[iParam0]));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar19))
		{
			return false;
		}
		aggregate.butchercreek.func_92(iVar19, 1, 1);
	}
	else
	{
		iVar20 = &Local_556.f_20.f_422[iParam0 /*4*/];
		if (!STREAMING::IS_MODEL_VALID(iVar20))
		{
			return true;
		}
		if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0) <= NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(false))
		{
			return true;
		}
		if (!aggregate.fme_archery.func_922(Local_17.f_198[iParam0], iVar20, vVar6, 1, 0))
		{
			return false;
		}
		iVar21 = NETWORK::NET_TO_OBJ(&(Local_17.f_198[iParam0]));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
		{
			return false;
		}
		if (!aggregate.annesburg.func_121(vVar10))
		{
			ENTITY::SET_ENTITY_ROTATION(iVar21, vVar10, 2, true);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(iVar21, fVar9);
		}
		if (aggregate.la_alligator.func_203(iParam0, 1))
		{
			OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iVar21, 0);
		}
	}
	return true;
}

bool func_462(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	struct<5> Var12;
	int iVar17;

	if (&Local_556.f_20.f_22[iParam0 /*19*/] == 0)
	{
		return true;
	}
	if (func_721())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])))
		{
			iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
			PED::DELETE_PED(&iVar0);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
		{
			iVar0 = NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1);
			PED::DELETE_PED(&iVar0);
		}
		return true;
	}
	if ((&Local_556.f_20.f_22[iParam0 /*19*/] == 391477998 && !func_248(iParam0)) && aggregate.la_alligator.func_203(iParam0, 8))
	{
		return true;
	}
	if (((((((aggregate.la_alligator.func_203(iParam0, 64) && func_250(iParam0, &iVar1)) && &Local_556.f_20.f_22[iParam0 /*19*/] != joaat("target")) && iVar1 >= 0) && iVar1 < 21) && &Local_556.f_20.f_22[iVar1 /*19*/] == 391477998) && !func_248(iVar1)) && aggregate.la_alligator.func_203(iVar1, 8))
	{
		return true;
	}
	iVar2 = func_21(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar2))
	{
		return true;
	}
	if (aggregate.annesburg.func_121((Local_556.f_20.f_22[iParam0 /*19*/])->f_3))
	{
		return true;
	}
	bVar5 = func_722(iParam0, &iVar3, &iVar4);
	if (bVar5)
	{
		if (!aggregate.la_alligator.func_203(iVar3, 4) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_198[iVar3])))
		{
			bVar5 = false;
		}
	}
	bVar6 = func_214(iParam0);
	bVar9 = (!func_723(iParam0, &uVar7) && !func_724(iParam0, &uVar8));
	bVar10 = !func_725(iParam0);
	if (aggregate.la_alligator.func_203(iParam0, 65536))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
		{
			if (!func_116(iParam0, &Var12) || !aggregate.net_assassination.func_1057(Var12, 1464077990, &iVar11))
			{
				iVar11 = iVar2;
			}
			if (aggregate.fme_challenges.func_1263(&((Local_17.f_2[iParam0 /*9*/])->f_1), iVar11, func_727(iParam0), func_728(iParam0), 1, 0, 1, 1, 1))
			{
				iVar17 = NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1);
				ENTITY::FREEZE_ENTITY_POSITION(iVar17, true);
				ENTITY::SET_ENTITY_VISIBLE(iVar17, false);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar17, true);
				ENTITY::SET_ENTITY_COLLISION(iVar17, false, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar17, true);
				PED::SET_PED_CONFIG_FLAG(iVar17, 168, false);
			}
			return false;
		}
		bVar6 = false;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
	{
		NETWORK::_0x7182EDDA1EE7DB5A((Local_17.f_2[iParam0 /*9*/])->f_1);
	}
	if (bVar5)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])) && !aggregate.fme_supply_train.func_1118(Local_17.f_2[iParam0 /*9*/], &(Local_17.f_198[iVar3]), iVar2, iVar4, 1, bVar10, 1))
		{
			return false;
		}
	}
	else if (bVar6 && !aggregate.la_alligator.func_203(iParam0, 16))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
		{
			if (!aggregate.fme_challenges.func_1263(&((Local_17.f_2[iParam0 /*9*/])->f_1), func_25(iParam0), (Local_556.f_20.f_22[iParam0 /*19*/])->f_3, (Local_556.f_20.f_22[iParam0 /*19*/])->f_9, 1, 0, 1, 1, 1))
			{
				return false;
			}
			ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1), 0);
			NETWORK::_0x7182EDDA1EE7DB5A((Local_17.f_2[iParam0 /*9*/])->f_1);
			return false;
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])) && !aggregate.fme_escaped_convicts.func_1084(Local_17.f_2[iParam0 /*9*/], (Local_17.f_2[iParam0 /*9*/])->f_1, iVar2, -1, 1, bVar10, 1, 0))
		{
			return false;
		}
	}
	else
	{
		if ((aggregate.la_alligator.func_203(iParam0, 16) && bVar6) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
		{
			if (!aggregate.fme_challenges.func_1263(&((Local_17.f_2[iParam0 /*9*/])->f_1), func_25(iParam0), func_727(iParam0), func_728(iParam0), 1, 0, 1, 1, 1))
			{
				return false;
			}
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
			{
				NETWORK::_0x7182EDDA1EE7DB5A((Local_17.f_2[iParam0 /*9*/])->f_1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1), true);
				PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1), 288, false);
				ENTITY::_0x9587913B9E772D29(NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1), 0);
			}
			return false;
		}
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])) && !aggregate.fme_challenges.func_1263(Local_17.f_2[iParam0 /*9*/], iVar2, (Local_556.f_20.f_22[iParam0 /*19*/])->f_3, (Local_556.f_20.f_22[iParam0 /*19*/])->f_9, 1, 0, bVar9, bVar10, 1))
		{
			return false;
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])))
	{
		NETWORK::_0x7182EDDA1EE7DB5A(&(Local_17.f_2[iParam0 /*9*/]));
		if ((bVar6 && !bVar9) && !PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]))))
		{
			return false;
		}
		if ((bVar6 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1)) && !PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1)))
		{
			return false;
		}
	}
	func_731(iParam0);
	return true;
}

int func_464()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1334467051, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 5)
	{
		return 5;
	}
	return iVar5;
}

bool func_465(int iParam0)
{
	var uVar0;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	struct<5> Var9;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;

	if (!func_119(&uVar0) || !func_120(&uVar0, -867387895, 0, 0))
	{
		return true;
	}
	iVar5 = func_732(iParam0);
	if (iVar5 == 0)
	{
		return true;
	}
	if (PED::DOES_GROUP_EXIST(&(Local_17.f_192[iParam0])))
	{
		return true;
	}
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		aggregate.medium_update.func_483(&Var9);
		if (!func_119(&Var9) || !func_120(&Var9, -429389572, iParam0, iVar6))
		{
		}
		else if (!aggregate.fme_supply_train.func_39(Var9, -1296487272, &iVar7, 0))
		{
		}
		else if (iVar7 < 0 || iVar7 >= 21)
		{
		}
		else if (&Local_556.f_20.f_22[iVar7 /*19*/] == 0)
		{
		}
		else
		{
			bVar8 = true;
		}
		iVar6++;
	}
	if (!bVar8)
	{
		return true;
	}
	iVar14 = func_733(iParam0);
	iVar15 = func_734(iParam0);
	Local_17.f_192[iParam0] = PED::CREATE_GROUP(iVar14);
	PED::SET_GROUP_FORMATION(&(Local_17.f_192[iParam0]), iVar15);
	if (iVar15 == 5)
	{
		PED::_0x478F6B9920446CE2(&(Local_17.f_192[iParam0]), 0);
	}
	else
	{
		PED::_0x478F6B9920446CE2(&(Local_17.f_192[iParam0]), 1);
	}
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		aggregate.medium_update.func_483(&Var9);
		if (!func_119(&Var9) || !func_120(&Var9, -429389572, iParam0, iVar6))
		{
		}
		else if (!aggregate.fme_supply_train.func_39(Var9, -1296487272, &iVar7, 0))
		{
		}
		else if (iVar7 < 0 || iVar7 >= 21)
		{
		}
		else if (!func_52(iVar7, &iVar17, 1, 0))
		{
		}
		else
		{
			if (!bVar16)
			{
				PED::SET_PED_AS_GROUP_LEADER(iVar17, &(Local_17.f_192[iParam0]), 0);
				bVar16 = true;
			}
			else
			{
				if (iVar15 == 5 && aggregate.fme_animal_tagging.func_143(Var9, -655039491, &vVar19, 1))
				{
					PED::ADD_CUSTOM_FORMATION_LOCATION(&(Local_17.f_192[iParam0]), vVar19, (iVar18 - 1));
				}
				PED::SET_PED_AS_GROUP_MEMBER(iVar17, &(Local_17.f_192[iParam0]));
				PED::_0x0E9E95FDEDCC9D35(iVar17, (iVar18 - 1), 0);
			}
			iVar18++;
		}
		iVar6++;
	}
	return true;
}

void func_466(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;

	*iParam1 = 0;
	*iParam2 = -1;
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(Local_17.f_280))
	{
		return;
	}
	if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar0) == Local_17.f_279)
	{
		return;
	}
	if (iVar0 == Local_17.f_280)
	{
		return;
	}
	if (aggregate.flow_controller.func_420(iVar0))
	{
		return;
	}
	*iParam2 = 0;
	fVar1 = 1800f;
	iVar2 = 0;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_17.f_280))
	{
	}
	else
	{
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(aggregate.camera_item.func_108(iVar0), aggregate.camera_item.func_108(Local_17.f_280), false);
		if (fVar1 < 1800f && fVar1 > 50f)
		{
			iVar2 = BUILTIN::ROUND(((500f / 1800f) * (1800f - fVar1)));
			if (iVar2 < 0)
			{
				iVar2 = 0;
			}
		}
	}
	*iParam1 = (*iParam1 + iVar2);
	if (fVar1 < 1800f && fVar1 > 50f)
	{
		*iParam2 += 4;
	}
	if (!aggregate.coffee_drinking.func_194(65536, iParam0))
	{
		*iParam2 += 2;
	}
	if (aggregate.fme_animal_tagging.func_726(iVar0, 0) >= 3)
	{
		*iParam2++;
	}
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)) && _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)) > 1)
	{
		*iParam1 += 150;
	}
	*iParam1 = (*iParam1 + (110 * func_738(iVar0)));
}

void func_467(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	*iParam1 = 0;
	*iParam2 = -1;
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!NETWORK::_0x255A5EF65EDA9167(Local_17.f_280))
	{
		return;
	}
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279) && _NAMESPACE26::_0x901E0DC25080C8B9(iVar0) == Local_17.f_279)
	{
		return;
	}
	if (iVar0 == Local_17.f_280)
	{
		return;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)))
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
	{
		return;
	}
	if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)) < 2)
	{
		return;
	}
	if (func_739(iVar0, aggregate.dynamic_craft_scenario.func_194(0, 8)))
	{
		return;
	}
	*iParam2 = 0;
	fVar1 = 1800f;
	iVar2 = 0;
	fVar6 = 50f;
	fVar7 = 1800f;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_17.f_280))
	{
	}
	else
	{
		iVar4 = 0;
		while (iVar4 < 32)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
			}
			else if (iVar0 != iVar3 && !_NAMESPACE26::_0x3F59FE6F37869576(iVar0, iVar3))
			{
			}
			else
			{
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(aggregate.camera_item.func_108(iVar0), aggregate.camera_item.func_108(Local_17.f_280), false);
				if (fVar5 > fVar6)
				{
					fVar6 = fVar5;
				}
				if (fVar5 < fVar7)
				{
					fVar7 = fVar5;
				}
			}
			iVar4++;
		}
		fVar1 = ((fVar7 + fVar6) / 2f);
		if (fVar6 < 1800f && fVar7 > 50f)
		{
			iVar2 = BUILTIN::ROUND(((500f / 1800f) * (1800f - fVar1)));
			if (iVar2 < 0)
			{
				iVar2 = 0;
			}
		}
	}
	*iParam1 = (*iParam1 + iVar2);
	if (fVar6 < 1800f && fVar7 > 50f)
	{
		*iParam2 += 4;
	}
	if (!aggregate.coffee_drinking.func_194(65536, iParam0))
	{
		*iParam2 += 2;
	}
	if (func_740(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)) >= 3)
	{
		*iParam2++;
	}
	*iParam1 = (*iParam1 + (100 * _NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0))));
	*iParam1 = (*iParam1 + (110 * aggregate.coffee_drinking.func_58(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0))));
}

void func_468()
{
	if (!aggregate.fme_animal_tagging.func_134(8) && !func_469(2097152))
	{
		return;
	}
	func_470(0);
	if (func_742())
	{
		func_743();
	}
	if (!aggregate.fme_animal_tagging.func_134(16) && func_744())
	{
		aggregate.fme_animal_tagging.func_174(16);
	}
}

bool func_469(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], iParam0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1)))
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

void func_470(bool bParam0)
{
	if (aggregate.fme_animal_tagging.func_134(8) && !bParam0)
	{
		return;
	}
	Local_17.f_272 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	aggregate.fme_animal_tagging.func_174(8);
}

void func_471(int iParam0, bool bParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;

	if (MISC::_0x8F4F050054005C27(&(Local_17.f_222.f_10), iParam0))
	{
		return;
	}
	iVar0 = aggregate.fishing_core.func_224(func_26(iParam0), 0, 10);
	if (iVar0 == 0)
	{
		return;
	}
	if (!func_745(&Var1, iParam0))
	{
		return;
	}
	if (!aggregate.fme_supply_train.func_39(Var1, 110383052, &iVar6, 0))
	{
		iVar6 = -1;
	}
	if (!aggregate.fme_supply_train.func_39(Var1, -1031804957, &iVar7, 0))
	{
		iVar7 = 0;
	}
	if (&Local_17.f_222.f_3[iParam0] == 0)
	{
		if (!func_746(iVar6))
		{
			return;
		}
		Local_17.f_222.f_3[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return;
	}
	else if (Local_17.f_222 == -1 && Local_17.f_222.f_1 == -1)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(&(Local_17.f_222.f_3[iParam0]), NETWORK::GET_NETWORK_TIME_ACCURATE()) < iVar7)
		{
			return;
		}
		iVar8 = func_747();
		if (!aggregate.fme_supply_train.func_39(Var1, 635104585, &iVar9, 0))
		{
			iVar9 = 20;
		}
		if (iVar8 > iVar9)
		{
			return;
		}
		Local_17.f_222 = iParam0;
		Local_17.f_222.f_1 = 0;
		*bParam1 = 1;
		return;
	}
	*bParam1 = 1;
	iVar8 = func_747();
	if (Local_17.f_222.f_1 >= iVar0)
	{
		aggregate.fme_animal_tagging.func_174(268435456);
		Local_17.f_222 = -1;
		Local_17.f_222.f_1 = -1;
		MISC::_0xE84AAC1B22A73E99(&(Local_17.f_222.f_10), iParam0);
		*bParam1 = 0;
	}
	else if (!aggregate.fme_animal_tagging.func_134(268435456))
	{
		if (func_469(262144))
		{
			return;
		}
		aggregate.fme_animal_tagging.func_174(268435456);
		return;
	}
	if (!func_749(262144))
	{
		return;
	}
	bVar10 = func_469(524288);
	if (!bVar10)
	{
		if (!func_750(Local_17.f_222, Local_17.f_222.f_1))
		{
			return;
		}
	}
	aggregate.fme_animal_tagging.func_174(268435456);
	Local_17.f_222.f_1++;
	Local_17.f_222.f_2 = -1;
}

void func_472(int iParam0)
{
	if (&Local_17.f_234[iParam0 /*2*/] == 255)
	{
		return;
	}
	if (!func_163(iParam0) && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_234[iParam0 /*2*/])))
	{
		func_751(iParam0);
	}
}

void func_473(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((Local_17.f_2[iParam0 /*9*/])->f_2 != 1583594396)
	{
		return;
	}
	if (!aggregate.fme_challenges.func_1307(iParam0, 67108864) || aggregate.fme_challenges.func_1307(iParam0, 134217728))
	{
		return;
	}
	if (!func_52(iParam0, &iVar0, 0, 1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_384(PED::GET_PED_TIME_OF_DEATH(iVar0)) < 1200)
	{
		return;
	}
	iVar3 = 255;
	if (func_52(iParam0, &iVar0, 0, 1))
	{
		iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
		if (PED::IS_PED_A_PLAYER(iVar2))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
		}
	}
	func_325(iParam0, iVar3);
}

void func_474(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;

	if (aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		if ((((Local_17.f_2[iParam0 /*9*/])->f_2 != 1583594396 && !aggregate.fme_challenges.func_1307(iParam0, 524288)) && func_476(iParam0, 1, 0)) && func_635(iParam0, 1200))
		{
			aggregate.net_assassination.func_458(iParam0, 524288);
		}
		return;
	}
	if (!func_52(iParam0, &iVar0, 0, 0))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if ((PED::GET_PED_CONFIG_FLAG(iVar0, 9, false) || PED::GET_PED_CONFIG_FLAG(iVar0, 11, false)) || PED::GET_PED_CONFIG_FLAG(iVar0, 10, false))
		{
			return;
		}
		bVar1 = PED::GET_PED_CAUSE_OF_DEATH(iVar0);
		if (WEAPON::IS_WEAPON_VALID(bVar1))
		{
			if (WEAPON::_0x5809DBCA0A37C82B(bVar1) && WEAPON::_0xEA522F991E120D45(bVar1))
			{
				return;
			}
			if (aggregate.bandana.func_71(bVar1))
			{
				return;
			}
		}
		func_570(iParam0, 8);
		return;
	}
	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_10 == 2116329739 || (Local_556.f_20.f_22[iParam0 /*19*/])->f_10 == 918683891)
	{
		if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_10 == 918683891)
		{
			if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_11 != 2116329739)
			{
				iVar3 = (Local_556.f_20.f_22[iParam0 /*19*/])->f_15;
			}
			else
			{
				func_753(iParam0, &iVar3);
			}
		}
		else
		{
			iVar3 = (Local_556.f_20.f_22[iParam0 /*19*/])->f_15;
		}
		if (iVar3 >= 0 && iVar3 < 21)
		{
			if (!func_52((Local_556.f_20.f_22[iParam0 /*19*/])->f_15, &iVar2, 0, 0))
			{
				func_570(iParam0, 9);
			}
			else if (PED::IS_PED_BEING_STEALTH_KILLED(iVar2) || PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
				func_570(iParam0, 10);
			}
		}
	}
	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_12 != -1)
	{
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if ((Local_556.f_20.f_22[iVar4 /*19*/])->f_12 != (Local_556.f_20.f_22[iParam0 /*19*/])->f_12)
			{
			}
			else if (&Local_556.f_20.f_22[iVar4 /*19*/] == 1824637041 && &Local_556.f_20.f_22[iParam0 /*19*/] != 1824637041)
			{
			}
			else if (!aggregate.fme_challenges.func_1307(iVar4, 524288))
			{
			}
			else
			{
				func_570(iParam0, 5);
				return;
			}
			iVar4++;
		}
	}
	if (!aggregate.la_alligator.func_203(iParam0, 65536) && func_54(iParam0, &iVar5, 0))
	{
		if (func_754(iVar5) || (!PED::IS_PED_ON_MOUNT(iVar0) && !aggregate.la_alligator.func_203(iParam0, 16)))
		{
			func_570(iParam0, 11);
			return;
		}
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 8) && func_755(iParam0, iVar0, (Local_556.f_20.f_22[iParam0 /*19*/])->f_17, &uVar6))
	{
		func_570(iParam0, 2);
		return;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 16))
	{
		if (func_756(iVar0, (Local_556.f_20.f_22[iParam0 /*19*/])->f_18))
		{
			func_570(iParam0, 7);
			return;
		}
	}
	if ((((func_55((Local_17.f_2[iParam0 /*9*/])->f_2) && func_757(iParam0, &iVar7, &uVar8)) && func_758(iVar7)) && func_572(iVar7)) && !aggregate.fme_challenges.func_1307(iParam0, 4))
	{
		func_570(iParam0, 6);
		return;
	}
	if ((((!PED::IS_PED_BEING_STUNNED(iVar0, 0) && !PED::IS_PED_BEING_STEALTH_KILLED(iVar0)) && !PED::_0x3BDFCF25B58B0415(iVar0)) && !PED::IS_PED_RAGDOLL(iVar0)) && func_759(iParam0))
	{
		aggregate.net_assassination.func_458(iParam0, 64);
		func_570(iParam0, 4);
		return;
	}
	bVar10 = (Local_556.f_20.f_22[iParam0 /*19*/])->f_10 == 918683891;
	if (func_760(iParam0, iVar0, PED::IS_PED_HUMAN(iVar0), bVar10, &bVar9))
	{
		if (bVar9)
		{
			func_570(iParam0, 4);
		}
		else
		{
			func_570(iParam0, 12);
		}
		return;
	}
}

bool func_475(int iParam0)
{
	return iParam0 == joaat("target");
}

bool func_476(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iParam0 /*9*/])))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!bParam1)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!bParam2 || !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
		{
			return false;
		}
	}
	return true;
}

void func_477(int iParam0)
{
	switch ((Local_17.f_2[iParam0 /*9*/])->f_2)
	{
		case joaat("target"):
			aggregate.net_assassination.func_458(iParam0, 67108864);
			break;
		case 0:
			return;
	}
	if (!aggregate.fme_challenges.func_1307(iParam0, 67108864))
	{
		func_62(iParam0, 1);
	}
	aggregate.fme_supply_train.func_768(iParam0, 1583594396);
}

void func_478(int iParam0)
{
	var uVar0;
	var uVar1;

	if (!aggregate.fme_challenges.func_1307(iParam0, 8) && !aggregate.fme_challenges.func_1307(iParam0, 1024))
	{
		return;
	}
	if (!func_52(iParam0, &uVar0, 0, 0))
	{
		return;
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_6 != 255)
	{
		if (func_762(iParam0, uVar0))
		{
			if (aggregate.fme_challenges.func_1307(iParam0, 65536))
			{
				func_763(iParam0);
			}
			else if (aggregate.fme_challenges.func_1307(iParam0, 32768))
			{
				aggregate.net_assassination.func_458(iParam0, 65536);
			}
			else
			{
				aggregate.net_assassination.func_458(iParam0, 32768);
				return;
			}
		}
		else
		{
			aggregate.net_assassination.func_458(iParam0, 32768);
			aggregate.net_assassination.func_458(iParam0, 65536);
			return;
		}
	}
	if (!func_765(iParam0, &uVar1))
	{
		return;
	}
	func_766(iParam0, uVar1);
}

void func_479(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if ((aggregate.fme_animal_tagging.func_134(65536) && !aggregate.fme_challenges.func_1307(iParam0, 262144)) && func_767(iParam0, iVar0))
	{
		aggregate.net_assassination.func_458(iParam0, 262144);
	}
	if (aggregate.fm_mission_controller.func_267(iParam0) != 16)
	{
		if (!aggregate.la_alligator.func_203(iParam0, 32768) && func_769())
		{
			aggregate.fme_supply_train.func_768(iParam0, 16);
		}
		if (((aggregate.la_alligator.func_203(iParam0, 4096) && aggregate.fme_challenges.func_1307(iParam0, 1)) && func_771(iParam0, &iVar1)) && Local_17.f_275 <= iVar1)
		{
			aggregate.fme_supply_train.func_768(iParam0, 16);
		}
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1) && !func_772((Local_17.f_2[iParam0 /*9*/])->f_4))
	{
		switch ((Local_556.f_20.f_22[iParam0 /*19*/])->f_11)
		{
			case joaat("cower"):
				iVar2 = 15;
				break;
			case joaat("flee"):
				iVar2 = 16;
				break;
			case -1978665515:
				iVar2 = 17;
				break;
			case 2116329739:
				iVar2 = 18;
				break;
			case -503562496:
				iVar2 = 19;
				break;
			case 1300923248:
				iVar2 = 20;
				break;
			case joaat("combat"):
				iVar2 = 14;
				break;
			case joaat("pick_up_weapon"):
				iVar2 = 21;
				break;
			default:
				iVar2 = 14;
				break;
		}
		if (aggregate.fme_challenges.func_1307(iParam0, 4096))
		{
			if (iVar2 == 14 || iVar2 == 17)
			{
				iVar2 = 16;
			}
		}
		aggregate.fme_supply_train.func_768(iParam0, iVar2);
	}
	switch (aggregate.fm_mission_controller.func_267(iParam0))
	{
		case 0:
			if (aggregate.la_alligator.func_203(iParam0, 1) && !func_773(iVar0, func_23(iParam0)))
			{
				return;
			}
			switch ((Local_556.f_20.f_22[iParam0 /*19*/])->f_10)
			{
				case -1959537321:
					iVar3 = 2;
					break;
				case joaat("wander"):
					iVar3 = 3;
					break;
				case 2116329739:
					iVar3 = 4;
					break;
				case -519360492:
					iVar3 = 12;
					break;
				case 917311522:
					iVar3 = 13;
					break;
				case -1837223991:
					iVar3 = 6;
					break;
				case joaat("patrol"):
					iVar3 = 8;
					break;
				case 1631123848:
					iVar3 = 9;
					break;
				case -74090560:
					iVar3 = 10;
					break;
				case 1300923248:
					iVar3 = 10;
					break;
				case 918683891:
					iVar3 = 5;
					break;
				default:
					iVar3 = 1;
					break;
			}
			aggregate.fme_supply_train.func_768(iParam0, iVar3);
			break;
		case 7:
			func_774(iParam0, iVar0);
			break;
		case 5:
			if (!func_775(iParam0, iVar0))
			{
				return;
			}
			if (func_776(iParam0) != 0)
			{
				aggregate.fme_supply_train.func_768(iParam0, 2);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 1);
			}
			break;
		case 11:
			if (!func_777(iParam0, iVar0))
			{
				return;
			}
			if (aggregate.fme_challenges.func_1307(iParam0, 4) && func_776(iParam0) != 0)
			{
				aggregate.fme_supply_train.func_768(iParam0, 2);
			}
			else if (!aggregate.annesburg.func_121(func_778(iParam0)))
			{
				aggregate.fme_supply_train.func_768(iParam0, 7);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 1);
			}
			break;
		case 20:
			if (!func_777(iParam0, iVar0))
			{
				return;
			}
			if (!aggregate.fme_challenges.func_1307(iParam0, 4) && !aggregate.annesburg.func_121(func_778(iParam0)))
			{
				aggregate.fme_supply_train.func_768(iParam0, 19);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 14);
			}
			break;
		case 16:
		case 17:
			func_779(iParam0, iVar0);
			break;
		case 18:
			if (!func_780(iParam0, iVar0))
			{
				return;
			}
			aggregate.fme_supply_train.func_768(iParam0, 14);
			break;
		case 19:
			if (!func_774(iParam0, iVar0))
			{
				return;
			}
			if (aggregate.fme_challenges.func_1307(iParam0, 268435456))
			{
				aggregate.fme_supply_train.func_768(iParam0, 21);
			}
			else if (aggregate.fme_challenges.func_1307(iParam0, 4096))
			{
				aggregate.fme_supply_train.func_768(iParam0, 16);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 14);
			}
			break;
		case 21:
			if (!func_781(iParam0, iVar0))
			{
				return;
			}
			if (aggregate.fme_challenges.func_1307(iParam0, 4096) || WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false) == joaat("weapon_unarmed"))
			{
				aggregate.fme_supply_train.func_768(iParam0, 16);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 14);
			}
			break;
	}
}

void func_480(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (aggregate.fm_mission_controller.func_267(iParam0) != 16)
	{
		if (!aggregate.la_alligator.func_203(iParam0, 32768) && func_769())
		{
			aggregate.fme_supply_train.func_768(iParam0, 16);
		}
		if (((aggregate.la_alligator.func_203(iParam0, 4096) && aggregate.fme_challenges.func_1307(iParam0, 1)) && func_771(iParam0, &iVar1)) && Local_17.f_275 <= iVar1)
		{
			aggregate.fme_supply_train.func_768(iParam0, 16);
		}
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1) && !func_772((Local_17.f_2[iParam0 /*9*/])->f_4))
	{
		switch ((Local_556.f_20.f_22[iParam0 /*19*/])->f_11)
		{
			case joaat("cower"):
				iVar2 = 15;
				break;
			case joaat("flee"):
				iVar2 = 16;
				break;
			case -1978665515:
				iVar2 = 17;
				break;
			case 2116329739:
				iVar2 = 18;
				break;
			case -503562496:
				iVar2 = 19;
				break;
			case 1300923248:
				iVar2 = 20;
				break;
			case joaat("combat"):
				iVar2 = 14;
				break;
			case joaat("pick_up_weapon"):
				iVar2 = 21;
				break;
			default:
				iVar2 = 14;
				break;
		}
		if (aggregate.fme_challenges.func_1307(iParam0, 4096))
		{
			if (iVar2 == 14 || iVar2 == 17)
			{
				iVar2 = 16;
			}
		}
		aggregate.fme_supply_train.func_768(iParam0, iVar2);
	}
	switch (aggregate.fm_mission_controller.func_267(iParam0))
	{
		case 0:
			if (aggregate.la_alligator.func_203(iParam0, 1) && !func_773(iVar0, func_23(iParam0)))
			{
				return;
			}
			switch ((Local_556.f_20.f_22[iParam0 /*19*/])->f_10)
			{
				case -1959537321:
					iVar3 = 2;
					break;
				case joaat("wander"):
					iVar3 = 3;
					break;
				case 2116329739:
					iVar3 = 4;
					break;
				case -519360492:
					iVar3 = 12;
					break;
				case 917311522:
					iVar3 = 13;
					break;
				case -1837223991:
					iVar3 = 6;
					break;
				case joaat("patrol"):
					iVar3 = 8;
					break;
				case 1631123848:
					iVar3 = 9;
					break;
				case -74090560:
					iVar3 = 10;
					break;
				case 1300923248:
					iVar3 = 10;
					break;
				case 918683891:
					iVar3 = 5;
					break;
				default:
					iVar3 = 1;
					break;
			}
			aggregate.fme_supply_train.func_768(iParam0, iVar3);
			break;
		case 7:
			func_774(iParam0, iVar0);
			break;
		case 5:
			if (!func_775(iParam0, iVar0))
			{
				return;
			}
			if (func_776(iParam0) != 0)
			{
				aggregate.fme_supply_train.func_768(iParam0, 2);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 1);
			}
			break;
		case 11:
			if (!func_777(iParam0, iVar0))
			{
				return;
			}
			if (aggregate.fme_challenges.func_1307(iParam0, 4) && func_776(iParam0) != 0)
			{
				aggregate.fme_supply_train.func_768(iParam0, 2);
			}
			else if (!aggregate.annesburg.func_121(func_778(iParam0)))
			{
				aggregate.fme_supply_train.func_768(iParam0, 7);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 1);
			}
			break;
		case 20:
			if (!func_777(iParam0, iVar0))
			{
				return;
			}
			if (!aggregate.fme_challenges.func_1307(iParam0, 4) && !aggregate.annesburg.func_121(func_778(iParam0)))
			{
				aggregate.fme_supply_train.func_768(iParam0, 19);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 14);
			}
			break;
		case 16:
		case 17:
			func_779(iParam0, iVar0);
			break;
		case 18:
			if (!func_780(iParam0, iVar0))
			{
				return;
			}
			aggregate.fme_supply_train.func_768(iParam0, 14);
			break;
		case 19:
			if (!func_774(iParam0, iVar0))
			{
				return;
			}
			if (aggregate.fme_challenges.func_1307(iParam0, 268435456))
			{
				aggregate.fme_supply_train.func_768(iParam0, 21);
			}
			else if (aggregate.fme_challenges.func_1307(iParam0, 4096))
			{
				aggregate.fme_supply_train.func_768(iParam0, 16);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 14);
			}
			break;
		case 21:
			if (!func_781(iParam0, iVar0))
			{
				return;
			}
			if (aggregate.fme_challenges.func_1307(iParam0, 4096) || WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false) == joaat("weapon_unarmed"))
			{
				aggregate.fme_supply_train.func_768(iParam0, 16);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 14);
			}
			break;
	}
}

void func_481(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (aggregate.fm_mission_controller.func_267(iParam0) != 16)
	{
		if (!aggregate.la_alligator.func_203(iParam0, 32768) && func_769())
		{
			aggregate.fme_supply_train.func_768(iParam0, 16);
		}
		if (((aggregate.la_alligator.func_203(iParam0, 4096) && aggregate.fme_challenges.func_1307(iParam0, 1)) && func_771(iParam0, &iVar1)) && Local_17.f_275 <= iVar1)
		{
			aggregate.fme_supply_train.func_768(iParam0, 16);
		}
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1) && !func_772((Local_17.f_2[iParam0 /*9*/])->f_4))
	{
		switch ((Local_556.f_20.f_22[iParam0 /*19*/])->f_11)
		{
			case joaat("flee"):
				iVar2 = 16;
				break;
			case 2116329739:
				iVar2 = 18;
				break;
			case -503562496:
				iVar2 = 19;
				break;
			case 1300923248:
				iVar2 = 20;
				break;
			case joaat("combat"):
				iVar2 = 14;
				break;
			default:
				iVar2 = 16;
				break;
		}
		if (aggregate.fme_challenges.func_1307(iParam0, 4096))
		{
			if (iVar2 == 14)
			{
				iVar2 = 16;
			}
		}
		aggregate.fme_supply_train.func_768(iParam0, iVar2);
	}
	switch (aggregate.fm_mission_controller.func_267(iParam0))
	{
		case 0:
			switch ((Local_556.f_20.f_22[iParam0 /*19*/])->f_10)
			{
				case -1959537321:
					iVar3 = 2;
					break;
				case joaat("wander"):
					iVar3 = 3;
					break;
				case 2116329739:
					iVar3 = 4;
					break;
				case -519360492:
					iVar3 = 12;
					break;
				case joaat("patrol"):
					iVar3 = 8;
					break;
				case 1631123848:
					iVar3 = 9;
					break;
				case -74090560:
					iVar3 = 10;
					break;
				case 1300923248:
					iVar3 = 10;
					break;
				case 918683891:
					iVar3 = 5;
					break;
				default:
					iVar3 = 1;
					break;
			}
			aggregate.fme_supply_train.func_768(iParam0, iVar3);
			break;
		case 7:
			func_774(iParam0, iVar0);
			break;
		case 5:
			if (!func_775(iParam0, iVar0))
			{
				return;
			}
			if (func_776(iParam0) != 0)
			{
				aggregate.fme_supply_train.func_768(iParam0, 2);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 1);
			}
			break;
		case 11:
			if (!func_777(iParam0, iVar0))
			{
				return;
			}
			if (aggregate.fme_challenges.func_1307(iParam0, 4) && func_776(iParam0) != 0)
			{
				aggregate.fme_supply_train.func_768(iParam0, 2);
			}
			else if (!aggregate.annesburg.func_121(func_778(iParam0)))
			{
				aggregate.fme_supply_train.func_768(iParam0, 7);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 1);
			}
			break;
		case 20:
			if (!func_777(iParam0, iVar0))
			{
				return;
			}
			if (!aggregate.fme_challenges.func_1307(iParam0, 4) && !aggregate.annesburg.func_121(func_778(iParam0)))
			{
				aggregate.fme_supply_train.func_768(iParam0, 19);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 14);
			}
			break;
		case 16:
		case 17:
			func_779(iParam0, iVar0);
			break;
		case 18:
			if (!func_780(iParam0, iVar0))
			{
				return;
			}
			aggregate.fme_supply_train.func_768(iParam0, 14);
			break;
		case 19:
			if (!func_774(iParam0, iVar0))
			{
				return;
			}
			if (aggregate.fme_challenges.func_1307(iParam0, 4096))
			{
				aggregate.fme_supply_train.func_768(iParam0, 16);
			}
			else
			{
				aggregate.fme_supply_train.func_768(iParam0, 14);
			}
			break;
	}
}

void func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (aggregate.fm_mission_controller.func_267(iParam0) != 24 && func_769())
	{
		aggregate.fme_supply_train.func_768(iParam0, 24);
	}
	if (!func_782(iParam0, &iVar1, &iVar2))
	{
		return;
	}
	switch (aggregate.fm_mission_controller.func_267(iParam0))
	{
		case 0:
			if (func_783(iVar1, iVar2, &vVar3))
			{
				aggregate.fme_supply_train.func_768(iParam0, 23);
				return;
			}
			aggregate.fme_supply_train.func_768(iParam0, 22);
			break;
		case 23:
			if (!func_783(iVar1, iVar2, &vVar3) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vVar3) < 4f)
			{
				aggregate.net_assassination.func_458(iParam0, 2048);
			}
			if (!aggregate.fme_challenges.func_1307(iParam0, 2048))
			{
				return;
			}
			aggregate.fme_supply_train.func_768(iParam0, 22);
			break;
		case 22:
			if ((Local_17.f_2[iParam0 /*9*/])->f_7 == 0)
			{
				(Local_17.f_2[iParam0 /*9*/])->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
	}
}

bool func_483(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	int iVar8;

	if ((Local_17.f_2[iParam0 /*9*/])->f_2 != 1583594396)
	{
		return false;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 67108864))
	{
		return false;
	}
	if ((aggregate.fme_challenges.func_1307(iParam0, 1) && aggregate.fme_challenges.func_1307(iParam0, 524288)) && func_55((Local_17.f_2[iParam0 /*9*/])->f_2))
	{
		if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_12 != -1)
		{
			iVar0 = 0;
			while (iVar0 < 21)
			{
				if (!func_55((Local_17.f_2[iVar0 /*9*/])->f_2))
				{
				}
				else if ((Local_556.f_20.f_22[iVar0 /*19*/])->f_12 != (Local_556.f_20.f_22[iParam0 /*19*/])->f_12)
				{
				}
				else if (aggregate.fme_challenges.func_1307(iVar0, 1))
				{
				}
				else
				{
					return false;
				}
				iVar0++;
			}
		}
		iVar7 = func_205();
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			if (MISC::_0x8F4F050054005C27(&(Local_17.f_222.f_10), iVar6))
			{
			}
			else
			{
				aggregate.medium_update.func_483(&Var1);
				if (!func_745(&Var1, iVar6))
				{
				}
				else if (aggregate.fme_supply_train.func_39(Var1, 110383052, &iVar8, 0) && (Local_556.f_20.f_22[iParam0 /*19*/])->f_12 != iVar8)
				{
				}
				else if (&Local_17.f_222.f_3[iVar6] != 0)
				{
				}
				else
				{
					return false;
				}
			}
			iVar6++;
		}
	}
	return true;
}

void func_484(int iParam0)
{
	func_62(iParam0, 1);
	(Local_17.f_2[iParam0 /*9*/])->f_5 = 255;
	(Local_17.f_2[iParam0 /*9*/])->f_6 = 255;
	(Local_17.f_2[iParam0 /*9*/])->f_7 = 0;
	(Local_17.f_2[iParam0 /*9*/])->f_8 = -1;
	(Local_17.f_2[iParam0 /*9*/])->f_4 = 0;
	(Local_17.f_2[iParam0 /*9*/])->f_2 = 0;
	(Local_17.f_2[iParam0 /*9*/])->f_3 = 0;
	(Local_17.f_2[iParam0 /*9*/])->f_1 = 0;
	Local_17.f_2[iParam0 /*9*/] = 0;
}

void func_500(int iParam0)
{
	if ((Global_1070355->f_20209[iParam0 /*18*/])->f_4 != 0)
	{
		(Global_1070355->f_20209[iParam0 /*18*/])->f_4 = 0;
		aggregate.fme_animal_tagging.func_733(iParam0);
	}
}

void func_514(int iParam0, int iParam1, struct<2> Param2, int iParam4)
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
	func_454(&Var0);
}

void func_522(int iParam0, bool bParam1)
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
	func_805(Var1);
}

void func_525(var uParam0)
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
					if (func_810(uParam0, &vVar35))
					{
						iVar2 = aggregate.net_assassination.func_811((iVar0 - 1));
					}
					else
					{
						iVar1 = aggregate.net_assassination.func_811((iVar0 - 1));
						func_812(iVar1, iVar0);
					}
				}
			}
			iVar0 = (iVar0 + -1);
		}
	}
	if (iVar2 == 0)
	{
		iVar2 = func_813(uParam0);
		if (iVar2 == 0)
		{
			return;
		}
	}
	func_812(iVar2, 0);
}

void func_526(int iParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = aggregate.flow_controller.func_327(iParam0);
	iVar2 = func_814();
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
	func_816(iVar0, iVar1, iVar3, iVar2, iVar4);
	if (aggregate.flow_controller.func_281(iParam0, 8))
	{
		if (iVar2 != 0)
		{
			aggregate.net_assassination.func_817(iParam0);
			aggregate.net_assassination.func_818(iParam0);
		}
	}
}

void func_530(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (bParam1)
	{
		iVar0 = 1822827642;
		iVar1 = func_819(iParam0);
	}
	else
	{
		iVar0 = joaat("attempts");
		iVar1 = func_820(iParam0);
	}
	Var2 = { aggregate.aberdeenpigfarm.func_107(iVar0, iVar1) };
	func_805(Var2);
}

void func_531()
{
	aggregate.fm_deathmatch_controller.func_445(4);
	aggregate.fm_deathmatch_controller.func_445(1);
}

void func_540(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { aggregate.aberdeenpigfarm.func_107(-1808811965, aggregate.map_app_event_handler.func_148(iParam0)) };
	aggregate.bandana.func_26(Var0, iParam1);
}

void func_541(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { aggregate.aberdeenpigfarm.func_107(-746839750, aggregate.map_app_event_handler.func_148(iParam0)) };
	func_835(Var0, iParam1);
}

void func_542(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { aggregate.aberdeenpigfarm.func_107(829565093, aggregate.map_app_event_handler.func_148(iParam0)) };
	aggregate.bandana.func_26(Var0, iParam1);
}

void func_543(int iParam0, bool bParam1, bool bParam2)
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
	func_805(Var1);
}

void func_544(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;

	if (bParam1)
	{
		return;
	}
	Var0 = { aggregate.aberdeenpigfarm.func_107(741274143, aggregate.map_app_event_handler.func_148(iParam0)) };
	if (bParam2)
	{
		func_805(Var0);
	}
	else
	{
		aggregate.net_assassination.func_837(Var0, 0);
	}
}

void func_545(int iParam0, bool bParam1, bool bParam2, struct<2> Param3, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar9;

	iVar0 = aggregate.flow_controller.func_327(iParam0);
	iVar3 = aggregate.dynamic_craft_scenario.func_156(iVar0);
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
	func_839(iVar0, iVar1, iVar2, aggregate.flow_controller.func_242(Param3));
}

void func_548(int iParam0, bool bParam1, bool bParam2)
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
		iVar1 = func_819(iParam0);
	}
	else
	{
		iVar1 = func_820(iParam0);
	}
	Var2 = { aggregate.aberdeenpigfarm.func_107(iVar0, iVar1) };
	func_805(Var2);
}

void func_549(var uParam0, bool bParam1, bool bParam2)
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
	func_842(60);
	if (_NAMESPACE59::_0x3CF46F55C6585590())
	{
	}
	else if (_NAMESPACE59::_0x1840F3B30ED0105F(-1706799532))
	{
	}
	aggregate.net_assassination.func_553(1);
	aggregate.net_assassination.func_553(2);
}

void func_551(int iParam0)
{
	Global_1103536->f_21.f_37.f_1 = iParam0;
}

void func_559(var uParam0, var uParam1)
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

char* func_566(int iParam0)
{
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		if (Local_556.f_20.f_16 == joaat("player"))
		{
			return "";
		}
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_UPDATE_PLAYER_KILLED", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iParam0), -5208416));
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_AS_UPDATE_PLAYER_KILLED", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iParam0), -963477619));
}

void func_567(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	Local_556.f_584.f_331 = aggregate.fme_animal_tagging.func_734(sParam0, joaat("COLOR_WHITE"), -2, 0, 0, 0, 1);
}

char* func_568(int iParam0)
{
	if (!func_850(iParam0))
	{
		return "NET_AS_UPDATE_TARGET_PLAYER_DISCONNECTED_GEN";
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_UPDATE_TARGET_PLAYER_DISCONNECTED", aggregate.fme_animal_tagging.func_488(func_851(iParam0), -5208416));
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_AS_UPDATE_TARGET_PLAYER_DISCONNECTED", aggregate.fme_animal_tagging.func_488(func_851(iParam0), -963477619));
}

void func_569(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (OBJECT::DOES_PICKUP_EXIST(&(Local_17.f_217[iParam0 /*2*/])) && NETWORK::NETWORK_HAS_CONTROL_OF_PICKUP(&(Local_17.f_217[iParam0 /*2*/])))
	{
		OBJECT::REMOVE_PICKUP(&(Local_17.f_217[iParam0 /*2*/]));
	}
	if (!DATAFILE::_0x7907969497EA92F5(Local_556.f_577) || !DATAFILE::_0x603AC35FD4602C76(Local_556.f_577))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if ((Local_17.f_2[iVar0 /*9*/])->f_4 != 21)
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_17.f_2[iVar0 /*9*/])))
		{
		}
		else if (!func_52(iVar0, &iVar3, 1, 0))
		{
		}
		else if (!func_852(iVar0, &iVar1, &iVar2) || !func_153(iVar1, 0))
		{
		}
		else
		{
			if ((aggregate.fme_challenges.func_1307(iVar0, 268435456) && aggregate.fme_challenges.func_1307(iVar0, 2)) && func_153(iVar2, 0))
			{
				iVar1 = iVar2;
			}
			if (iVar1 != iParam0)
			{
			}
			else if (!func_853(iParam0, &bVar4))
			{
			}
			else
			{
				aggregate.fm_mission_controller.func_6958(iVar3, bVar4, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				if (!aggregate.fme_challenges.func_1307(iVar0, 4096))
				{
					func_855(iVar0, 0);
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_570(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	float fVar7;
	float fVar8;
	var uVar9;
	int iVar12;

	if (aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		return;
	}
	aggregate.net_assassination.func_458(iParam0, 1);
	switch (iParam1)
	{
		case 2:
		case 3:
		case 6:
			aggregate.net_assassination.func_458(iParam0, 16777216);
			break;
	}
	if (func_55((Local_17.f_2[iParam0 /*9*/])->f_2) && (((Local_556.f_20.f_22[iParam0 /*19*/])->f_11 == -503562496 || (Local_556.f_20.f_22[iParam0 /*19*/])->f_11 == joaat("flee")) || (Local_556.f_20.f_22[iParam0 /*19*/])->f_11 == -1978665515))
	{
		vVar0 = { func_778(iParam0) };
		vVar3 = { func_856(iParam0) };
		if (aggregate.annesburg.func_121(vVar0))
		{
			aggregate.net_assassination.func_458(iParam0, 2048);
		}
		else if (((!aggregate.annesburg.func_121(vVar3) && !aggregate.annesburg.func_121(vVar0)) && func_857(vVar0, 120f, &uVar6, &uVar9, &fVar7)) && (!func_857(vVar3, 120f, &uVar6, &uVar9, &fVar8) || fVar8 > fVar7))
		{
			aggregate.net_assassination.func_458(iParam0, 2);
		}
	}
	(Local_17.f_2[iParam0 /*9*/])->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!aggregate.fme_animal_tagging.func_134(1024) && &Local_556.f_20.f_22[iParam0 /*19*/] != 1824637041)
	{
		aggregate.fme_animal_tagging.func_174(1024);
		func_858(iParam1);
	}
	if (func_52(iParam0, &iVar12, 1, 0) && PED::IS_PED_HUMAN(iVar12))
	{
		func_859(iParam0, iVar12, 4, 8, 1, 0, 0, iParam1);
	}
}

bool func_572(int iParam0)
{
	return MISC::_0x8F4F050054005C27(&(Local_17.f_253), iParam0);
}

void func_573(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_17.f_253), iParam0);
}

bool func_576(int iParam0, int iParam1, int iParam2)
{
	return func_860(iParam0, iParam1, iParam2);
}

bool func_579(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 1970643719;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_580(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -1251795501;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_581(struct<5> Param0)
{
	int iVar0;
	int iVar1;

	if (aggregate.fme_supply_train.func_39(Param0, -1272790307, &iVar0, 0) && Local_17.f_278 < iVar0)
	{
		return false;
	}
	if (aggregate.fme_supply_train.func_39(Param0, 735506410, &iVar1, 0) && Local_17.f_278 > iVar1)
	{
		return false;
	}
	return true;
}

void func_582(int iParam0, struct<5> Param1, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;

	if (aggregate.binoculars.func_72(bParam6))
	{
		aggregate.net_assassination.func_1166(&Param1, iParam0, -1284309372, 1, 1);
	}
	if (iParam8 == 1824637041 && PED::_0x772A1969F649E902(iParam7))
	{
		aggregate.net_assassination.func_1166(&Param1, iParam0, -852511194, 32, 1);
	}
	if (aggregate.fme_supply_train.func_39(Param1, 561062234, &uVar0, 0))
	{
		aggregate.la_alligator.func_225(iParam0, 4096);
	}
	aggregate.net_assassination.func_1166(&Param1, iParam0, -492382713, 8, 0);
	aggregate.net_assassination.func_1166(&Param1, iParam0, -223083781, 64, 0);
	aggregate.net_assassination.func_1166(&Param1, iParam0, 1031590257, 16, 0);
	aggregate.net_assassination.func_1166(&Param1, iParam0, 2102445471, 65536, 0);
	aggregate.net_assassination.func_1166(&Param1, iParam0, 892963390, 32768, 0);
	aggregate.net_assassination.func_1166(&Param1, iParam0, 1518210740, 16777216, 0);
}

bool func_583(int iParam0, var uParam1)
{
	if (func_119(uParam1) && func_120(uParam1, -1443980387, iParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_584(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10)
{
	switch (iParam10)
	{
		case joaat("sphere"):
			*uParam0 = VOLUME::_0xB3FB80A32BAE3065(vParam1, vParam4, vParam7);
			break;
		case joaat("cylinder"):
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam1, vParam4, vParam7);
			break;
		default:
			*uParam0 = VOLUME::_CREATE_VOLUME_BOX(vParam1, vParam4, vParam7);
			break;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(*uParam0))
	{
		return false;
	}
	return true;
}

int func_585(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -1443980387, iParam0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_586(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -67473273;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

int func_588(int iParam0)
{
	switch (iParam0)
	{
		case joaat("cull"):
			return 1;
		case joaat("flatten"):
			return 2;
		case 331632914:
			return 4;
		case 1152024837:
			return 8;
		case joaat("push"):
			return 16;
		case joaat("decal"):
			return 32;
		default:
			break;
	}
	return 2;
}

bool func_589(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 1077944842;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

void func_590(int iParam0, int iParam1)
{
	aggregate.aberdeenpigfarm.func_106(Local_556.f_20.f_533[iParam0 /*4*/], iParam1);
}

bool func_591(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 485523583;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

int func_592(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_593(iParam0, &Var0) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_593(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -537276532;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

void func_594(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10)
{
	switch (iParam10)
	{
		case joaat("sphere"):
			VOLUME::_0x5B7D7BF36D2DE18B(*uParam0, vParam1, vParam4, vParam7);
			break;
		case joaat("cylinder"):
			VOLUME::_0xBCE668AAF83608BE(*uParam0, vParam1, vParam4, vParam7);
			break;
		default:
			VOLUME::_0x39816F6F94F385AD(*uParam0, vParam1, vParam4, vParam7);
			break;
	}
}

bool func_595(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = 1520538369;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_596(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -480788145;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

int func_597(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if ((func_119(&Var0) && func_120(&Var0, -424701201, iParam0, 0)) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_598(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -1746234201;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

bool func_599(var uParam0)
{
	if (func_119(uParam0))
	{
		uParam0->f_2 = -1318044545;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	}
	return false;
}

Vector3 func_600(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	if (func_862(iParam0, &Var0))
	{
		aggregate.fme_animal_tagging.func_143(Var0, -1584591647, &vVar5, 0);
	}
	return vVar5;
}

Vector3 func_601(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	if (func_862(iParam0, &Var0))
	{
		aggregate.fme_animal_tagging.func_143(Var0, -865441380, &vVar5, 0);
	}
	return vVar5;
}

int func_602(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if ((func_119(&Var0) && func_120(&Var0, 1606032220, iParam0, 0)) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_603(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if ((func_119(&Var0) && func_120(&Var0, -375509478, iParam0, 0)) && func_120(&Var0, 732905427, 0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

char* func_604()
{
	return "scr_campfire_distance_smoke_script";
}

int func_605(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	if (func_863(iParam0, &Var0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 6)
	{
		return 6;
	}
	return iVar5;
}

bool func_606(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_863(iParam0, &Var0))
	{
		aggregate.fme_condor_egg.func_42(Var0, -1045199329, &uVar5, 0);
	}
	return uVar5;
}

void func_607(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	var uVar5;

	*uParam2 = { 0f, 0f, 0f };
	uParam2->f_4 = { 0f, 0f, 0f };
	uParam2->f_3 = 0;
	uParam2->f_7 = 0;
	uParam2->f_8 = 0;
	if (func_864(iParam0, iParam1, &Var0))
	{
		aggregate.fme_animal_tagging.func_143(Var0, -81907729, uParam2, 1);
		aggregate.fme_animal_tagging.func_143(Var0, -435940167, &(uParam2->f_4), 0);
		aggregate.fme_animal_tagging.func_40(Var0, 229174115, &uVar5, 0);
		aggregate.fme_supply_train.func_39(Var0, 1200880489, &(uParam2->f_7), 0);
		aggregate.fme_supply_train.func_39(Var0, 1385823714, &(uParam2->f_8), 0);
	}
	uParam2->f_3 = uVar5;
}

char* func_608(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1452745259:
			return "WORLD_HUMAN_GUARD_LEAN_WALL";
		case -258459266:
			return "WORLD_HUMAN_GUARD_SCOUT";
		case 1978275899:
			return "WORLD_HUMAN_GUARD_MILITARY";
		case -22664287:
			return "WORLD_HUMAN_SMOKE";
		case -1543059912:
			return "WORLD_HUMAN_SMOKE_CIGAR";
		case 1065660521:
			return "WORLD_HUMAN_SMOKE_INTERACTION";
		case -1032721003:
			return "WORLD_HUMAN_SMOKE_NERVOUS_STRESSED";
		case -1855605920:
			return "WORLD_HUMAN_LEAN_BACK_RAILING";
		case 65512451:
			return "WORLD_HUMAN_DRUNK_BRACE_WALL";
		case 421625586:
			return "WORLD_HUMAN_LEAN_BACK_WALL";
		case -359184052:
			return "WORLD_HUMAN_LEAN_BACK_WALL_DRINKING";
		case -251168298:
			return "WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS";
		case -1571924583:
			return "WORLD_HUMAN_LEAN_BACK_WALL_SMOKING";
		case -781832595:
			return "WORLD_HUMAN_LEAN_RAILING";
		case -1978373710:
			return "WORLD_HUMAN_LEAN_RAILING_NO_PROPS";
		case -861851926:
			return "WORLD_HUMAN_LEAN_RAILING_SMOKING";
		case -178592996:
			return "WORLD_HUMAN_LEAN_FENCE_FWD_CHECK_OUT_LIVESTOCK";
		case 2087366558:
			return "WORLD_HUMAN_STAND_WAITING";
		case -1124614608:
			return "WORLD_HUMAN_WAITING_IMPATIENT";
		case 830847823:
			return "WORLD_HUMAN_STARE_STOIC";
		case 837932401:
			return "WORLD_HUMAN_BROOM_WORKING";
		case -1982207864:
			return "WORLD_HUMAN_SHOP_BROWSE";
		case -186608947:
			return "WORLD_HUMAN_BUCKET_POUR_LOW";
		case 1299323850:
			return "WORLD_HUMAN_FIRE_TEND_KNEEL";
		case 1455795772:
			return "WORLD_HUMAN_PEE";
		case 1546182539:
			return "WORLD_HUMAN_CROUCH_INSPECT";
		case 1904561997:
			return "WORLD_HUMAN_FEED_CHICKEN";
		case -439112356:
			return "WORLD_HUMAN_INSPECT";
		case -1043454001:
			return "WORLD_HUMAN_SIT_FALL_ASLEEP";
		case -1569277059:
			return "WORLD_HUMAN_DRINKING_DRUNK";
		case -1722639382:
			return "WORLD_HUMAN_PITCH_HAY_SCOOP";
		case joaat("prop_human_seat_chair"):
			return "PROP_HUMAN_SEAT_CHAIR";
		case 1191281243:
			return "WORLD_HUMAN_HAMMER_TABLE";
		case -472287783:
			return "PROP_HUMAN_REPAIR_WAGON_WHEEL_ON_LARGE";
		case 1802462470:
			return "WORLD_HUMAN_FARMER_RAKE";
		case 1984495656:
			return "WORLD_HUMAN_FARMER_WEEDING";
		case 1838920301:
			return "WORLD_HUMAN_KNOCK_DOOR";
		case 587350641:
			return "WORLD_HUMAN_BUTCHER_RABBIT";
		case joaat("world_human_stand_fishing"):
			return "WORLD_HUMAN_STAND_FISHING";
		case joaat("world_human_drinking"):
			return "WORLD_HUMAN_DRINKING";
		case 1661247565:
			return "WORLD_HUMAN_PICKAXE_WALL";
		case joaat("world_human_clipboard"):
			return "WORLD_HUMAN_CLIPBOARD";
		case -98992470:
			return "WORLD_HUMAN_POCKET_MIRROR";
		case -1273821262:
			return "WORLD_HUMAN_WRITE_NOTEBOOK";
		case 1904532698:
			return "WORLD_HUMAN_STERNGUY_IDLES";
		default:
			break;
	}
	return "";
}

int func_609(int iParam0)
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

void func_610(int iParam0, int iParam1, int iParam2)
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

void func_612(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			aggregate.doc_book.func_292(iParam0, func_867(iParam2));
			break;
	}
}

void func_615(int iParam0, int iParam1, bool bParam2, int iParam3, float fParam4)
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
				*bParam2 = 1;
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
					*bParam2 = 1;
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
					*bParam2 = 1;
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
					*iParam1 = 1706540001;
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
					*iParam1 = 1706540001;
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
					*iParam1 = 1706540001;
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
					*iParam1 = -398376814;
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
					*iParam1 = -398376814;
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
					*iParam1 = -398376814;
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
					*iParam1 = -1203216227;
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
					*iParam1 = -1203216227;
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
					*iParam1 = -1203216227;
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
					*iParam1 = 329552932;
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
					*iParam1 = 329552932;
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
					*iParam1 = 329552932;
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
					*iParam1 = 1754742276;
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
					*iParam1 = 1754742276;
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
					*iParam1 = 1754742276;
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
					*iParam1 = 1754742276;
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
					*iParam1 = 1754742276;
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
					*iParam1 = 1995855690;
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
					*iParam1 = 1995855690;
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
					*iParam1 = 1995855690;
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
					*iParam1 = 1995855690;
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
					*iParam1 = 1995855690;
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
					*iParam1 = 1122037536;
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
					*iParam1 = 1122037536;
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
					*iParam1 = 1122037536;
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
					*iParam1 = 1122037536;
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
					*iParam1 = 1122037536;
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
					*iParam1 = -1520125470;
					break;
			}
			break;
	}
}

void func_620(int iParam0)
{
	if (((Local_17.f_2[iParam0 /*9*/])->f_2 == 1583594396 || (Local_17.f_2[iParam0 /*9*/])->f_2 == 0) || !func_476(iParam0, 1, func_475((Local_17.f_2[iParam0 /*9*/])->f_2)))
	{
		func_621(iParam0, 0);
		if (!aggregate.fme_challenges.func_1307(iParam0, 67108864))
		{
			func_870(iParam0);
		}
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 1583594396)
	{
		func_871(iParam0);
		if ((((Local_17.f_2[iParam0 /*9*/])->f_2 == 1583594396 && (Local_17.f_2[iParam0 /*9*/])->f_5 == PLAYER::PLAYER_ID()) && aggregate.fme_challenges.func_1307(iParam0, 67108864)) && aggregate.fme_challenges.func_1307(iParam0, 134217728))
		{
			func_171(iParam0);
		}
	}
}

void func_621(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_709(iParam0, 255))
		{
			return;
		}
		func_872(iParam0);
	}
	else
	{
		if (!func_709(iParam0, 255))
		{
			return;
		}
		func_873(iParam0);
		aggregate.la_alligator.func_225(iParam0, 2);
		if (aggregate.fme_challenges.func_1307(iParam0, 1024))
		{
			aggregate.la_alligator.func_225(iParam0, 1);
		}
	}
}

void func_622(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (!aggregate.la_alligator.func_203(iParam0, 33554432))
	{
		if (func_55((Local_17.f_2[iParam0 /*9*/])->f_2) && aggregate.la_alligator.func_203(iParam0, 16777216))
		{
			bVar0 = true;
		}
		if ((!bVar0 && PED::IS_PED_HUMAN(iParam1)) && !aggregate.fme_challenges.func_1307(iParam0, 128))
		{
			MISC::_0xF63FA29D4A9ACA86(iParam1, func_875(iParam1));
			PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_875(iParam1)));
		}
		aggregate.la_alligator.func_225(iParam0, 33554432);
	}
	if (!aggregate.la_alligator.func_203(iParam0, 8388608) && aggregate.fme_animal_tagging.func_134(4))
	{
		if (func_55((Local_17.f_2[iParam0 /*9*/])->f_2) && aggregate.la_alligator.func_203(iParam0, 16777216))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			iVar1 = func_876(iParam0, iParam1, 1);
			if (iVar1 != 0)
			{
				PLAYER::_0x7C32191D9FB2BDEA(iVar1);
			}
		}
		if ((Local_17.f_2[iParam0 /*9*/])->f_2 == joaat("target") && !bVar0)
		{
			MISC::_0xF63FA29D4A9ACA86(iParam1, func_877());
			PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_877()));
		}
		else if (((!bVar0 && PED::IS_PED_HUMAN(iParam1)) && !aggregate.fme_challenges.func_1307(iParam0, 4096)) && !aggregate.fme_challenges.func_1307(iParam0, 128))
		{
			MISC::_0xF63FA29D4A9ACA86(iParam1, func_878());
			PED::_0xFCA8FB9E15FA80D3(iParam1, MISC::GET_HASH_KEY(func_878()));
		}
		aggregate.la_alligator.func_225(iParam0, 8388608);
	}
}

void func_623(int iParam0, int iParam1)
{
	if (!func_55((Local_17.f_2[iParam0 /*9*/])->f_2))
	{
		return;
	}
	if (!aggregate.fme_challenges.func_1307(iParam0, 33554432) && (Local_17.f_2[iParam0 /*9*/])->f_2 != joaat("target"))
	{
		return;
	}
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return;
	}
	if (aggregate.la_alligator.func_203(iParam0, 512) || aggregate.la_alligator.func_203(iParam0, 1048576))
	{
		return;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 33554432))
	{
		aggregate.nb_treasure_hunter.func_482(iParam1, 0);
		aggregate.la_alligator.func_225(iParam0, 512);
	}
	else if (Local_17.f_2[iParam0 /*9*/])->f_2 == joaat("target")
	{
		func_880(iParam1);
		aggregate.la_alligator.func_225(iParam0, 1048576);
	}
}

void func_625(int iParam0)
{
	var uVar0;

	if (aggregate.la_alligator.func_203(iParam0, 16384))
	{
		return;
	}
	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_10 != -519360492 && (Local_556.f_20.f_22[iParam0 /*19*/])->f_10 != 917311522)
	{
		return;
	}
	if (!func_272(iParam0, &uVar0))
	{
		return;
	}
	TASK::REQUEST_WAYPOINT_RECORDING(aggregate.fm_mission_controller.func_3989(&uVar0));
	if (!aggregate.la_alligator.func_203(iParam0, 8192))
	{
		aggregate.la_alligator.func_225(iParam0, 8192);
	}
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(aggregate.fm_mission_controller.func_3989(&uVar0)))
	{
		return;
	}
	aggregate.la_alligator.func_225(iParam0, 16384);
}

void func_626(int iParam0, int iParam1)
{
	if (aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		func_621(iParam0, 0);
		if (PED::_0x2BA9D7BF629F920C(iParam1) != 80f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
		{
			PED::SET_PED_SEEING_RANGE(iParam1, 80f);
			PED::SET_PED_HEARING_RANGE(iParam1, 80f);
		}
		return;
	}
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return;
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 1824637041)
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_134(2048))
	{
		if ((!aggregate.fme_challenges.func_1307(iParam0, 8) && !aggregate.fme_challenges.func_1307(iParam0, 1024)) && !aggregate.fme_challenges.func_1307(iParam0, 8192))
		{
			func_621(iParam0, 0);
			return;
		}
	}
	if (!func_881(iParam0, iParam1, PLAYER::PLAYER_PED_ID()))
	{
		func_621(iParam0, 0);
		return;
	}
	func_621(iParam0, 1);
}

void func_627(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		if (!aggregate.la_alligator.func_203(iParam0, 16) && PED::IS_PED_FLEEING(iParam1))
		{
			func_859(iParam0, iParam1, 5, 16, 1, 0, 0, 0);
		}
		if ((Local_17.f_2[iParam0 /*9*/])->f_4 == 22)
		{
			func_859(iParam0, iParam1, 6, 32, 1, 0, 0, 0);
		}
		return;
	}
	if (!func_883(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (aggregate.fme_challenges.func_1307(iParam0, 8))
	{
		if (Local_556.f_1012 > 25000)
		{
			func_859(iParam0, iParam1, 3, 8, 1, 0, 0, 0);
		}
		else if (Local_556.f_1012 > 15000)
		{
			func_859(iParam0, iParam1, 2, 4, 1, 0, 0, 0);
		}
		else if (Local_556.f_1012 > 9000)
		{
			func_859(iParam0, iParam1, 1, 2, 1, 0, 0, 0);
		}
		else if (Local_556.f_1012 > 0)
		{
			func_859(iParam0, iParam1, 0, 1, 1, bVar1, 0, 0);
		}
	}
	else if (aggregate.fme_challenges.func_1307(iParam0, 1024))
	{
		iVar2 = 8000;
		if (aggregate.fme_animal_tagging.func_134(2048))
		{
			iVar2 = 4000;
			bVar1 = true;
		}
		if (Local_556.f_1013 > iVar2)
		{
			func_859(iParam0, iParam1, 3, 8, 1, 0, 0, 0);
		}
		else if (Local_556.f_1013 > 0)
		{
			func_859(iParam0, iParam1, 0, 1, 1, bVar1, 0, 0);
		}
	}
	else
	{
		iVar2 = 30000;
		if (aggregate.fme_animal_tagging.func_134(2048))
		{
			iVar2 = 20000;
			bVar1 = true;
		}
		if (Local_556.f_1011 > 15000)
		{
			func_859(iParam0, iParam1, 2, 4, 1, 0, 0, 0);
		}
		else if (Local_556.f_1011 > 9000)
		{
			func_859(iParam0, iParam1, 1, 2, 1, 0, 0, 0);
		}
		else if (Local_556.f_1011 > 0)
		{
			func_859(iParam0, iParam1, 0, 1, 1, bVar1, 0, 0);
		}
	}
}

void func_628(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return;
	}
	if (!func_883(iParam0))
	{
		return;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 8192))
	{
		iVar1 = PED::_0xEF2E6F870783369B(iParam1, 0);
		if (VOLUME::_0x92A78D0BEDB332A3(iVar1) && aggregate.annesburg.func_141(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false)))
		{
			func_174(5, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8), -1);
			return;
		}
	}
	bVar4 = aggregate.fme_animal_tagging.func_134(2048);
	if (aggregate.fme_challenges.func_1307(iParam0, 8))
	{
		if (bVar4)
		{
			iVar2 = 15000;
		}
		else
		{
			iVar2 = 25000;
		}
		iVar3 = 4;
		if (Local_556.f_1012 < iVar2)
		{
			return;
		}
	}
	else if (aggregate.fme_challenges.func_1307(iParam0, 1024))
	{
		if (bVar4)
		{
			iVar2 = 4000;
		}
		else
		{
			iVar2 = 8000;
		}
		iVar3 = 3;
		if (Local_556.f_1013 < iVar2)
		{
			return;
		}
	}
	else
	{
		return;
	}
	func_174(iVar3, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8), -1);
}

void func_629(int iParam0, int iParam1)
{
	if (aggregate.fme_animal_tagging.func_134(65536) && (Local_17.f_2[iParam0 /*9*/])->f_2 == joaat("target"))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 277, !func_885(iParam0));
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1) && !aggregate.fme_challenges.func_1307(iParam0, 4096))
	{
		if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 1824637041)
		{
			return;
		}
		if (aggregate.fme_challenges.func_1307(iParam0, 128))
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_556.f_578.f_3)
			{
				if (aggregate.la_alligator.func_203(iParam0, 2097152) || aggregate.la_alligator.func_203(iParam0, 4194304))
				{
					TASK::CLEAR_PED_TASKS(iParam1, 1, 0);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_556.f_578.f_3);
			}
		}
		else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_556.f_578.f_1)
		{
			if (aggregate.la_alligator.func_203(iParam0, 2097152) || aggregate.la_alligator.func_203(iParam0, 4194304))
			{
				TASK::CLEAR_PED_TASKS(iParam1, 1, 0);
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_556.f_578.f_1);
		}
	}
	else if (func_55((Local_17.f_2[iParam0 /*9*/])->f_2) && aggregate.la_alligator.func_203(iParam0, 2097152))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_556.f_578.f_4)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_556.f_578.f_4);
		}
	}
	else if (func_55((Local_17.f_2[iParam0 /*9*/])->f_2) && aggregate.la_alligator.func_203(iParam0, 4194304))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_556.f_578.f_5)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_556.f_578.f_5);
		}
	}
	else if (aggregate.fme_challenges.func_1307(iParam0, 128))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_556.f_578.f_2)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_556.f_578.f_2);
		}
	}
	else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1) != Local_556.f_578)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, Local_556.f_578);
	}
}

void func_630(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			PED::_0xEEED8FAFEC331A70(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1);
		}
	}
	switch (aggregate.fm_mission_controller.func_267(iParam0))
	{
		case 0:
			if ((aggregate.la_alligator.func_203(iParam0, 1) && !func_773(iVar0, func_23(iParam0))) && !aggregate.barcustomer_interaction.func_46(iVar0, 716706914))
			{
				func_887(iParam0, func_23(iParam0), 1, 1, 0);
			}
			break;
		case 1:
			func_888(iParam0, iVar0);
			break;
		case 2:
			func_889(iParam0, iVar0);
			break;
		case 5:
			func_890(iParam0, iVar0);
			break;
		case 3:
			func_891(iParam0, iVar0);
			break;
		case 4:
			func_892(iParam0, iVar0);
			break;
		case 12:
			func_893(iParam0, iVar0, 0);
			break;
		case 13:
			func_893(iParam0, iVar0, 1);
			break;
		case 6:
			func_894(iParam0, iVar0);
			break;
		case 7:
			func_895(iParam0, iVar0);
			break;
		case 8:
			func_896(iParam0, iVar0);
			break;
		case 9:
			func_897(iParam0, iVar0);
			break;
		case 10:
			func_898(iParam0, iVar0);
			break;
		case 11:
			func_899(iParam0, iVar0);
			break;
		case 14:
			func_900(iParam0, iVar0);
			break;
		case 15:
			func_901(iParam0, iVar0);
			break;
		case 16:
			func_902(iParam0, iVar0, 0);
			break;
		case 17:
			func_902(iParam0, iVar0, 1);
			break;
		case 18:
			func_903(iParam0, iVar0);
			break;
		case 19:
			func_895(iParam0, iVar0);
			break;
		case 20:
			func_899(iParam0, iVar0);
			break;
		case 21:
			func_904(iParam0, iVar0);
			break;
	}
}

void func_631(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	switch (aggregate.fm_mission_controller.func_267(iParam0))
	{
		case 0:
			if ((aggregate.la_alligator.func_203(iParam0, 1) && !func_773(iVar0, func_23(iParam0))) && !aggregate.barcustomer_interaction.func_46(iVar0, 716706914))
			{
				func_887(iParam0, func_23(iParam0), 1, 1, 0);
			}
			break;
		case 1:
			func_888(iParam0, iVar0);
			break;
		case 2:
			func_889(iParam0, iVar0);
			break;
		case 5:
			func_890(iParam0, iVar0);
			break;
		case 3:
			func_891(iParam0, iVar0);
			break;
		case 4:
			func_892(iParam0, iVar0);
			break;
		case 12:
			func_893(iParam0, iVar0, 0);
			break;
		case 13:
			func_893(iParam0, iVar0, 1);
			break;
		case 6:
			func_894(iParam0, iVar0);
			break;
		case 7:
			func_895(iParam0, iVar0);
			break;
		case 8:
			func_896(iParam0, iVar0);
			break;
		case 9:
			func_897(iParam0, iVar0);
			break;
		case 10:
			func_898(iParam0, iVar0);
			break;
		case 11:
			func_899(iParam0, iVar0);
			break;
		case 14:
			func_900(iParam0, iVar0);
			break;
		case 15:
			func_901(iParam0, iVar0);
			break;
		case 16:
			func_902(iParam0, iVar0, 0);
			break;
		case 17:
			func_902(iParam0, iVar0, 1);
			break;
		case 18:
			func_903(iParam0, iVar0);
			break;
		case 19:
			func_895(iParam0, iVar0);
			break;
		case 20:
			func_899(iParam0, iVar0);
			break;
		case 21:
			func_904(iParam0, iVar0);
			break;
	}
}

void func_632(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	switch (aggregate.fm_mission_controller.func_267(iParam0))
	{
		case 2:
			func_889(iParam0, iVar0);
			break;
		case 3:
			func_891(iParam0, iVar0);
			break;
		case 5:
			func_890(iParam0, iVar0);
			break;
		case 4:
			func_892(iParam0, iVar0);
			break;
		case 12:
			func_893(iParam0, iVar0, 0);
			break;
		case 13:
			func_893(iParam0, iVar0, 1);
			break;
		case 7:
			func_895(iParam0, iVar0);
			break;
		case 8:
			func_896(iParam0, iVar0);
			break;
		case 9:
			func_897(iParam0, iVar0);
			break;
		case 10:
			func_898(iParam0, iVar0);
			break;
		case 11:
			func_899(iParam0, iVar0);
			break;
		case 14:
			func_900(iParam0, iVar0);
			break;
		case 16:
			func_902(iParam0, iVar0, 0);
			break;
		case 18:
			func_903(iParam0, iVar0);
			break;
		case 19:
			func_895(iParam0, iVar0);
			break;
		case 20:
			func_899(iParam0, iVar0);
			break;
	}
}

void func_633(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (!func_782(iParam0, &iVar7, &iVar8))
	{
		return;
	}
	switch (aggregate.fm_mission_controller.func_267(iParam0))
	{
		case 22:
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			if ((((Local_17.f_2[iParam0 /*9*/])->f_7 != 0 && PED::IS_PED_ON_MOUNT(iVar0)) && func_905(iVar7, iVar8, &iVar9)) && aggregate.fme_animal_tagging.func_384((Local_17.f_2[iParam0 /*9*/])->f_7) > iVar9)
			{
				func_906(iParam0);
				return;
			}
			func_907(iParam0);
			break;
		case 23:
			if (!func_783(iVar7, iVar8, &vVar4))
			{
				return;
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				fVar10 = 2.5f;
			}
			else
			{
				fVar10 = 3f;
			}
			if (!func_908(iVar7, iVar8, &fVar11))
			{
				fVar11 = 40000f;
			}
			func_909(iParam0, vVar4, fVar10, fVar11, 1048576000 /* Float: 0.25f */, 0);
			break;
		case 24:
			vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
			func_910(iParam0, vVar1, 150f, 0);
			break;
	}
}

void func_634(int iParam0, int iParam1)
{
	if (!aggregate.la_alligator.func_203(iParam0, 2))
	{
		EVENT::_0xBB1E41DD3D3C6250(iParam1, func_911(0), 0);
		EVENT::_0xBB1E41DD3D3C6250(iParam1, func_911(9), 1);
		aggregate.la_alligator.func_225(iParam0, 2);
	}
	else
	{
		if (aggregate.fme_challenges.func_1307(iParam0, 1))
		{
			return;
		}
		if (func_912(iParam0))
		{
			return;
		}
		if (!func_913(iParam0, iParam1, 0) && !func_913(iParam0, iParam1, 1))
		{
			return;
		}
		func_914(iParam0, Local_299[Local_556.f_1008 /*8*/]);
	}
}

bool func_635(int iParam0, int iParam1)
{
	return NETWORK::GET_TIME_DIFFERENCE((Local_17.f_2[iParam0 /*9*/])->f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) > iParam1;
}

bool func_638(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return (aggregate.net_assassination.func_303(iParam0, 1) && !aggregate.net_assassination.func_303(iParam0, 2));
}

bool func_639(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return aggregate.net_assassination.func_303(iParam0, 2);
}

bool func_640()
{
	return Global_1103536->f_21.f_37;
}

int func_641()
{
	return Global_1103536->f_21.f_37.f_1;
}

void func_642(int iParam0, int iParam1, struct<2> Param2)
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
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	Var0.f_4 = 7;
	Var0.f_16 = 304038664;
	Var0.f_7 = { Param2 };
	func_453(&Var0, uVar31);
}

struct<4> func_655(char* sParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, sParam0, 32);
	return cVar0;
}

int func_656(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = aggregate.fishing_core.func_107(Local_556.f_584.f_333);
	bVar1 = aggregate.fme_animal_tagging.func_199();
	iVar2 = func_148();
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (iVar4 == 0)
		{
		}
		else if (func_925(iVar4, iVar2, bVar1, bVar0, iParam0, iParam1))
		{
			return iVar4;
		}
		iVar3++;
	}
	return 0;
}

void func_657(int iParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = func_926(iParam0);
	iVar1 = func_927(iParam0);
	sVar2 = func_928(iParam0, iParam1, sParam2);
	func_929(sVar2, iVar1, bVar0);
	if (func_930(iParam0, &iVar3))
	{
		aggregate.fme_animal_tagging.func_174(iVar3);
	}
}

bool func_658(bool bParam0)
{
	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		return false;
	}
	if (!func_415(1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		return false;
	}
	if (func_45() && !aggregate.fme_animal_tagging.func_134(262144))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(8))
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() < 5)
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(16))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(32) || aggregate.fishing_core.func_107(Local_556.f_584.f_335))
	{
		return false;
	}
	switch (Local_556.f_20.f_16)
	{
		case 1320143426:
			if (!aggregate.fme_animal_tagging.func_134(134217728))
			{
				return false;
			}
			if (Local_17.f_275 == Local_556.f_20.f_549 && !func_931())
			{
				*bParam0 = 0;
			}
			else
			{
				*bParam0 = 1;
			}
			if (aggregate.fme_animal_tagging.func_134(65536) && aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 1024))
			{
				*bParam0 = 1;
			}
			break;
		case joaat("player"):
			*bParam0 = 0;
			break;
		case 1047079933:
			*bParam0 = 1;
			break;
	}
	return true;
}

void func_659()
{
	int iVar0;
	int iVar1;

	if (func_45())
	{
		iVar1 = Local_17.f_276;
		if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!func_162(iVar0))
				{
					aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), 2, iVar0);
				}
				else if (func_163(iVar0))
				{
					aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), 7, iVar0);
				}
				else
				{
					aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), 1, iVar0);
				}
				iVar0++;
			}
		}
		else if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192) || aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 131072))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!func_162(iVar0))
				{
					aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), 2, iVar0);
				}
				else if (func_163(iVar0))
				{
					aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), 8, iVar0);
				}
				else
				{
					aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), 5, iVar0);
				}
				iVar0++;
			}
		}
	}
	else
	{
		iVar1 = Local_556.f_20.f_549;
		if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (iVar0 >= Local_17.f_275)
				{
					aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), 7, iVar0);
				}
				else
				{
					aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), 1, iVar0);
				}
				iVar0++;
			}
		}
		else if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 64))
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (iVar0 >= Local_17.f_275)
				{
					aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), 2, iVar0);
				}
				else
				{
					aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), 1, iVar0);
				}
				iVar0++;
			}
		}
	}
}

void func_660()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!aggregate.fme_animal_tagging.func_134(64))
	{
		iVar1 = func_933();
		iVar2 = aggregate.dynamic_craft_scenario.func_156(iVar1);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), iVar2, iVar0);
			aggregate.fme_round_up.func_689(&(Local_556.f_584.f_91), iVar1, iVar0);
			iVar0++;
		}
		aggregate.fme_animal_tagging.func_174(64);
	}
}

int func_661()
{
	int iVar0;

	if (aggregate.fme_animal_tagging.func_134(134217728))
	{
		iVar0 = (Local_556.f_20.f_4 - NETWORK::GET_TIME_DIFFERENCE(Local_17.f_273, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	else
	{
		iVar0 = (Local_556.f_20.f_2 - NETWORK::GET_TIME_DIFFERENCE(Local_17.f_272, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	}
	if (iVar0 < 0)
	{
		return 0;
	}
	return iVar0;
}

int func_662()
{
	if (func_45())
	{
		if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 131072) || aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192))
		{
			return joaat("defend");
		}
		else
		{
			return joaat("attack");
		}
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 64))
	{
		return joaat("defend");
	}
	return joaat("attack");
}

void func_664(int iParam0)
{
	if (((Local_17.f_2[iParam0 /*9*/])->f_2 == 0 || func_769()) || !aggregate.fme_animal_tagging.func_134(32))
	{
		func_284(iParam0);
		return;
	}
	if (func_943(iParam0))
	{
		func_944(iParam0);
	}
	else if (func_945(iParam0))
	{
		func_946(iParam0);
	}
	else if (func_947(iParam0))
	{
		func_144(iParam0);
	}
	else
	{
		func_284(iParam0);
	}
}

void func_665(int iParam0)
{
	int iVar0;

	if (!func_45())
	{
		return;
	}
	if (&Local_17.f_234[iParam0 /*2*/] == PLAYER::PLAYER_ID())
	{
		return;
	}
	if (&Local_17.f_234[iParam0 /*2*/] == 255)
	{
		return;
	}
	if (func_948(iParam0))
	{
		if (&Local_556.f_584.f_31[iParam0] == &Local_17.f_234[iParam0 /*2*/])
		{
			return;
		}
		iVar0 = &Local_17.f_234[iParam0 /*2*/];
		aggregate.fme_hot_property.func_1194(iVar0, -2145527776);
		aggregate.fme_king_of_the_castle.func_1051(iVar0, -1103135225);
		Local_556.f_584.f_31[iParam0] = &Local_17.f_234[iParam0 /*2*/];
		aggregate.fme_animal_tagging.func_1095(&(Local_17.f_234[iParam0 /*2*/]));
		aggregate.fme_dead_drop.func_854(iVar0, -283351763);
	}
	else if (func_953(iParam0))
	{
		if (&Local_556.f_584.f_31[iParam0] == &Local_17.f_234[iParam0 /*2*/])
		{
			return;
		}
		iVar0 = &Local_17.f_234[iParam0 /*2*/];
		aggregate.fme_king_of_the_castle.func_1051(iVar0, 1293773224);
		aggregate.fme_hot_property.func_1194(iVar0, -1384718582);
		Local_556.f_584.f_31[iParam0] = &Local_17.f_234[iParam0 /*2*/];
		aggregate.fme_animal_tagging.func_782(&(Local_17.f_234[iParam0 /*2*/]));
		aggregate.fme_dead_drop.func_854(iVar0, -283351763);
	}
	else
	{
		func_290(iParam0);
	}
}

void func_666()
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_556.f_7.f_9);
	if (func_954(iVar0))
	{
		func_955(Local_556.f_7.f_9);
	}
	else
	{
		func_291(Local_556.f_7.f_9);
	}
}

bool func_667()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return false;
	}
	if (!func_415(1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(67108864))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() != 5)
	{
		return false;
	}
	if (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	if (Local_17.f_275 <= 0)
	{
		return false;
	}
	if (aggregate.blackwater.func_175(Global_36, Local_556.f_20.f_7) > Local_556.f_20.f_19)
	{
		return false;
	}
	return true;
}

void func_668()
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23))
	{
		return;
	}
	iVar0 = 1;
	Local_556.f_584.f_23 = MAP::_0x554D9D53F696D002(func_956(iVar0), Local_556.f_20.f_10);
	if (func_957(iVar0, &iVar1))
	{
		MAP::SET_BLIP_SPRITE(Local_556.f_584.f_23, iVar1, false);
	}
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_556.f_584.f_23, func_958());
	if (aggregate.fme_animal_tagging.func_134(131072))
	{
		MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_23, 231194138);
	}
	if (aggregate.fme_animal_tagging.func_134(32768))
	{
		MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_23, -1878373110);
	}
}

bool func_669()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return false;
	}
	if (!func_415(1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(32768))
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() != 5 || aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		return false;
	}
	if (Local_17.f_275 <= 0)
	{
		return false;
	}
	if (!func_959())
	{
		return false;
	}
	return true;
}

void func_670()
{
	vector3 vVar0;

	if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_22))
	{
		return;
	}
	vVar0 = { Local_556.f_20.f_7 + Vector(0f, Local_17.f_271, Local_17.f_270) };
	Local_556.f_584.f_22 = MAP::_0x45F13B7E0A15C880(-308585968, vVar0, Local_556.f_20.f_19);
	MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_22, -521680853);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_556.f_584.f_22, func_960());
	if (aggregate.fme_animal_tagging.func_134(65536))
	{
		MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_22, 231194138);
	}
	if (aggregate.fme_animal_tagging.func_134(16384))
	{
		MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_22, -1878373110);
	}
}

bool func_671()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return false;
	}
	if (!func_415(1))
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() != 5 || aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	if (Local_17.f_275 <= 0)
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(65536))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 256))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 1024))
	{
		return false;
	}
	return true;
}

void func_672()
{
	if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_22))
	{
		return;
	}
	Local_556.f_584.f_22 = MAP::_0x45F13B7E0A15C880(-308585968, Local_556.f_20.f_7, Local_556.f_20.f_19);
	MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_22, -521680853);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_556.f_584.f_22, func_961());
	MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_22, -1878373110);
}

bool func_673(int iParam0)
{
	if (!MISC::_0x80E9C316EF84DD81(&((Local_556.f_921[iParam0 /*4*/])->f_1)))
	{
		return false;
	}
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return false;
	}
	if (!func_415(1))
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() != 5 || aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		return false;
	}
	if (Local_17.f_275 <= 0)
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_921[iParam0 /*4*/])))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(65536) && !aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 1024))
	{
		return false;
	}
	return true;
}

void func_674(int iParam0)
{
	int iVar0;

	if (MAP::DOES_BLIP_EXIST(&(Local_556.f_584.f_24[iParam0])))
	{
		return;
	}
	iVar0 = MAP::_0xA6EF0C54A3443E70(408396114, &(Local_556.f_921[iParam0 /*4*/]));
	MAP::_0x662D364ABF16DE2F(iVar0, 1995761918);
	MAP::_0x662D364ABF16DE2F(iVar0, 231194138);
	Local_556.f_584.f_24[iParam0] = iVar0;
}

void func_675()
{
	if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23))
	{
		if (aggregate.fme_animal_tagging.func_134(128))
		{
			func_962();
		}
		else
		{
			func_963();
		}
	}
	else
	{
		func_964();
	}
	if (func_965())
	{
		if (aggregate.fme_animal_tagging.func_134(131072) || aggregate.fme_animal_tagging.func_134(65536))
		{
			if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23))
			{
				MAP::_0xB059D7BD3D78C16F(Local_556.f_584.f_23, 231194138);
			}
			if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_22))
			{
				MAP::_0xB059D7BD3D78C16F(Local_556.f_584.f_22, 231194138);
			}
			aggregate.fme_animal_tagging.func_174(131072);
			aggregate.fme_animal_tagging.func_174(65536);
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23) && !aggregate.fme_animal_tagging.func_134(128))
	{
		if (!aggregate.fme_animal_tagging.func_134(131072))
		{
			MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_23, 231194138);
			if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_22))
			{
				MAP::_0xB059D7BD3D78C16F(Local_556.f_584.f_22, 231194138);
			}
			aggregate.fme_animal_tagging.func_174(131072);
			aggregate.fme_animal_tagging.func_174(65536);
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_22))
	{
		if (!aggregate.fme_animal_tagging.func_134(65536))
		{
			if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23))
			{
				MAP::_0xB059D7BD3D78C16F(Local_556.f_584.f_23, 231194138);
			}
			MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_22, 231194138);
			aggregate.fme_animal_tagging.func_174(131072);
			aggregate.fme_animal_tagging.func_174(65536);
		}
	}
}

bool func_676()
{
	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(32))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		return false;
	}
	if (func_45() && !aggregate.fme_animal_tagging.func_134(262144))
	{
		return false;
	}
	if (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	if (CAM::_0xA2B1C7EF759A63CE() > 0f && !CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	return true;
}

char* func_677(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_148();
	bVar1 = func_45();
	switch (iVar0)
	{
		case 2:
			if (bVar1)
			{
				if (Local_556.f_20.f_16 == 1047079933)
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_START_PVP", aggregate.aberdeenpigfarm.func_103(aggregate.fm_deathmatch_controller.func_2417(Local_17.f_281, 1, 0), joaat("COLOR_RED")));
				}
				else
				{
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_START_PVP", aggregate.aberdeenpigfarm.func_103(PLAYER::GET_PLAYER_NAME(&(Local_17.f_234[0 /*2*/])), joaat("COLOR_RED")));
				}
			}
			if (bParam0)
			{
				if (!aggregate.aberdeenpigfarm.func_175(Local_556.f_20.f_15, 33554432))
				{
					return "NET_AS_SHARD_BODY_START_ST_SEARCH";
				}
				return "NET_AS_SHARD_BODY_START_ST";
			}
			if (!aggregate.aberdeenpigfarm.func_175(Local_556.f_20.f_15, 33554432))
			{
				return "NET_AS_SHARD_BODY_START_SEARCH";
			}
			return "NET_AS_SHARD_BODY_START";
		case 3:
			if (bParam0)
			{
				return "NET_AS_SHARD_BODY_START_ST_C";
			}
			return "NET_AS_SHARD_BODY_START_C";
		case 1:
			if (Local_556.f_20.f_16 == 1047079933)
			{
				return "NET_AS_SHARD_BODY_START_POSSE";
			}
			return "NET_AS_SHARD_BODY_START_TARGET";
		case 4:
			return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_START_ALLY", aggregate.aberdeenpigfarm.func_103(PLAYER::GET_PLAYER_NAME(&(Local_17.f_234[0 /*2*/])), -963477619));
		default:
			break;
	}
	return "";
}

void func_678(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	Local_556.f_584.f_335 = func_967(func_966(), sParam0);
}

bool func_679()
{
	if (aggregate.fme_animal_tagging.func_134(16))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 65536))
	{
		return true;
	}
	if (!aggregate.fme_animal_tagging.func_134(4))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(64) && !aggregate.fme_animal_tagging.func_134(32))
	{
		return false;
	}
	if (func_385())
	{
		return false;
	}
	return true;
}

void func_680(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	bVar2 = (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4) && !aggregate.fme_animal_tagging.func_134(16777216));
	func_306(bVar2, &iVar0, &iVar1);
	bVar3 = iVar1 == true;
	bVar4 = !bVar2;
	Local_556.f_584.f_335 = func_969(func_966(), func_968(iParam0, bVar3), iVar0, iVar1, bVar4);
}

bool func_682()
{
	if (!aggregate.fme_animal_tagging.func_134(65536))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 1024))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(536870912) && aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 1024))
	{
		return false;
	}
	return true;
}

void func_683(int iParam0, int iParam1)
{
	if (aggregate.fishing_core.func_107(Local_556.f_584.f_334) && Local_556.f_584.f_336 == iParam0)
	{
		return;
	}
	func_134();
	Local_556.f_584.f_336 = iParam0;
	Local_556.f_584.f_334 = aggregate.fme_animal_tagging.func_937(func_970(iParam0), iParam1, 0, 0, 0, 1);
}

bool func_684()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() != 5)
	{
		return false;
	}
	if (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	if (Local_17.f_275 <= 0)
	{
		return false;
	}
	if (Local_556.f_20 == 1657045547 && !func_931())
	{
		return false;
	}
	return true;
}

bool func_685()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_548)
	{
		if (Local_17.f_2[iVar0 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (!func_428(iVar0, Local_299[Local_556.f_1008 /*8*/]))
		{
		}
		else
		{
			iVar1++;
			if (iVar1 <= 1)
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

bool func_686()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(33554432))
	{
		return false;
	}
	if (func_931())
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() != 5)
	{
		return false;
	}
	if (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	if (Local_17.f_275 <= 0)
	{
		return false;
	}
	return true;
}

bool func_687()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 64))
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() != 5)
	{
		return false;
	}
	if (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	if (Local_17.f_275 <= 0)
	{
		return false;
	}
	return true;
}

bool func_688()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192))
	{
		return false;
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 16384))
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() != 5)
	{
		return false;
	}
	if (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	return true;
}

bool func_689()
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192))
	{
		if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 131072))
		{
			return false;
		}
	}
	else if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 16384))
	{
		return false;
	}
	if (Local_17.f_275 <= 0)
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() != 5)
	{
		return false;
	}
	if (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	return true;
}

void func_690(int iParam0)
{
	int iVar0;

	aggregate.fme_escaped_convicts.func_736(Local_556.f_584.f_24[iParam0]);
	if (VOLUME::_0x92A78D0BEDB332A3(&(Local_556.f_921[iParam0 /*4*/])))
	{
		VOLUME::_0x43F867EF5C463A53(&(Local_556.f_921[iParam0 /*4*/]));
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (!MISC::_0x8F4F050054005C27(&((Local_556.f_921[iParam0 /*4*/])->f_1), iVar0))
		{
		}
		else
		{
			aggregate.la_alligator.func_225(iVar0, 262144);
			MISC::_0xB909149F2BB5F6DA(&((Local_556.f_921[iParam0 /*4*/])->f_1), iVar0);
		}
		iVar0++;
	}
	MISC::_0xD2D74F89DF844A50(&((Local_556.f_921[iParam0 /*4*/])->f_1));
}

int func_702()
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, 484707754, 0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

bool func_703(int iParam0, var uParam1)
{
	struct<5> Var0;

	if ((func_119(&Var0) && func_120(&Var0, -787028349, iParam0, 0)) && aggregate.fme_animal_tagging.func_143(Var0, -81907729, uParam1, 0))
	{
		return true;
	}
	return false;
}

float func_704(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;

	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return MISC::ATAN2(vVar0.x, vVar0.y);
}

bool func_705(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	struct<5> Var6;
	vector3 vVar11;
	var uVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;
	int iVar20;

	if (Local_556.f_952.f_4 > 30)
	{
		return true;
	}
	if (!func_119(&Var0) || !func_120(&Var0, 1525953930, iParam0, 0))
	{
		return true;
	}
	iVar5 = func_978(iParam0);
	iVar15 = ITEMSET::CREATE_ITEMSET(true);
	iVar20 = 0;
	while (iVar20 < iVar5)
	{
		Var6 = { Var0 };
		if ((!func_120(&Var6, -1839855939, iVar20, 0) || !aggregate.fme_animal_tagging.func_143(Var6, -81907729, &vVar11, 1)) || !aggregate.fme_animal_tagging.func_142(Var6, 1158526802, &uVar14, 1))
		{
		}
		else
		{
			iVar15 = ITEMSET::CREATE_ITEMSET(true);
			if (!ITEMSET::IS_ITEMSET_VALID(iVar15))
			{
			}
			else
			{
				iVar17 = VOLUME::_0x2B32B11520626229(vVar11, uVar14, iVar15);
				iVar18 = 0;
				while (iVar18 < iVar17)
				{
					iVar16 = MISC::_0xF18AF483DF70BBDE(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar18, iVar15));
					if (!VOLUME::_0x92A78D0BEDB332A3(iVar16))
					{
					}
					else if (!VOLUME::_0xCA5C90D40665D5CE(iVar16, 2) && !VOLUME::_0xCA5C90D40665D5CE(iVar16, 3))
					{
					}
					else
					{
						VOLUME::_0x3EFABB21E14A6BD1(iVar16, 2, 0);
						VOLUME::_0x3EFABB21E14A6BD1(iVar16, 3, 0);
						bVar19 = true;
					}
					iVar18++;
				}
				ITEMSET::DESTROY_ITEMSET(iVar15);
			}
		}
		iVar20++;
	}
	Local_556.f_952.f_4++;
	if (!bVar19)
	{
		return false;
	}
	return true;
}

bool func_706(int iParam0)
{
	return MISC::_0x8F4F050054005C27(&(Local_556.f_992), iParam0);
}

bool func_707(int iParam0)
{
	if (!VOLUME::_0xF256A75210C5C0EB(&(Local_556.f_980[iParam0]), Global_36))
	{
		return false;
	}
	switch (func_979(iParam0))
	{
		case 1823139082:
			if (!aggregate.fme_animal_tagging.func_134(4))
			{
				return false;
			}
			break;
		case -1913113499:
		default:
			break;
	}
	if (aggregate.fme_dead_drop.func_811())
	{
		return false;
	}
	return true;
}

void func_708(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&(Local_556.f_992), iParam0);
}

bool func_709(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_556.f_1008;
	}
	return MISC::_0x8F4F050054005C27(&((Local_299[iParam1 /*8*/])->f_6), iParam0);
}

bool func_711(int iParam0, int iParam1, var uParam2, bool bParam3, var uParam4)
{
	struct<5> Var0;
	var uVar5;

	if (!func_980(iParam0, &Var0))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_40(Var0, -401087351, &uVar5, 0))
	{
		*iParam1 = uVar5;
	}
	else
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_143(Var0, -81907729, uParam2, 0))
	{
		return false;
	}
	*bParam3 = aggregate.fme_animal_tagging.func_143(Var0, 861602793, uParam4, 0);
	return true;
}

int func_712(int iParam0, int iParam1)
{
	struct<5> Var0;
	bool bVar5;

	if (!func_980(iParam0, &Var0))
	{
		return 0;
	}
	*iParam1 = 0;
	if (aggregate.fme_condor_egg.func_42(Var0, -235687863, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 8;
	}
	if (!aggregate.fme_condor_egg.func_42(Var0, -1269124321, &bVar5, 0) || !bVar5)
	{
		*iParam1 |= 32768;
	}
	if (aggregate.fme_condor_egg.func_42(Var0, -1438322653, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 16;
	}
	if (aggregate.fme_condor_egg.func_42(Var0, 673047879, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 8192;
	}
	if (aggregate.fme_condor_egg.func_42(Var0, -1918016700, &bVar5, 0) && bVar5)
	{
		*iParam1 |= 2;
	}
	return 1;
}

Vector3 func_713(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	if (func_456(iParam0, &Var0))
	{
		aggregate.fme_animal_tagging.func_143(Var0, -81907729, &vVar5, 0);
	}
	return vVar5;
}

float func_714(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_456(iParam0, &Var0))
	{
		aggregate.fme_animal_tagging.func_142(Var0, 724299998, &uVar5, 0);
	}
	return uVar5;
}

Vector3 func_715(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	if (func_456(iParam0, &Var0))
	{
		aggregate.fme_animal_tagging.func_143(Var0, 861602793, &vVar5, 0);
	}
	return vVar5;
}

int func_716(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (!func_456(iParam0, &Var0) || !aggregate.fme_animal_tagging.func_40(Var0, 597233769, &iVar5, 0))
	{
		return 1;
	}
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
	return 1;
}

bool func_721()
{
	if (Local_556.f_1014 != 0)
	{
		if (aggregate.fme_animal_tagging.func_384(Local_556.f_1014) > 15000)
		{
			return true;
		}
		return false;
	}
	Local_556.f_1014 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return false;
}

int func_722(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	bool bVar5;
	int iVar6;

	if (((((func_116(iParam0, &Var0) && aggregate.fme_condor_egg.func_42(Var0, -1133284398, &bVar5, 0)) && bVar5) && aggregate.fme_supply_train.func_39(Var0, 101317385, iParam1, 0)) && *iParam1 >= 0) && *iParam1 < 18)
	{
		aggregate.fme_animal_tagging.func_40(Var0, -1463370342, &iVar6, 0);
		*iParam2 = func_985(iVar6);
		return 1;
	}
	return 0;
}

bool func_723(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0) && aggregate.fme_animal_tagging.func_40(Var0, 350192982, &uVar5, 0))
	{
		*iParam1 = uVar5;
		return true;
	}
	return false;
}

bool func_724(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && aggregate.fme_supply_train.func_39(Var0, 1475346163, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_725(int iParam0)
{
	struct<5> Var0;
	bool bVar5;

	if ((func_116(iParam0, &Var0) && aggregate.fme_condor_egg.func_42(Var0, -2076494195, &bVar5, 0)) && bVar5)
	{
		return true;
	}
	return false;
}

Vector3 func_727(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	func_116(iParam0, &Var0);
	aggregate.fme_animal_tagging.func_143(Var0, 1322693839, &vVar5, 0);
	return vVar5;
}

float func_728(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	aggregate.fme_animal_tagging.func_142(Var0, -1919876099, &uVar5, 0);
	return uVar5;
}

void func_731(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	float fVar22;

	if (&Local_556.f_20.f_22[iParam0 /*19*/] == 0)
	{
		return;
	}
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	if (!func_116(iParam0, &Var1))
	{
		return;
	}
	func_988(iParam0, Var1);
	(Local_17.f_2[iParam0 /*9*/])->f_2 = &Local_556.f_20.f_22[iParam0 /*19*/];
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 391477998)
	{
		if (func_248(iParam0))
		{
			(Local_17.f_2[iParam0 /*9*/])->f_2 = joaat("target");
		}
		else
		{
			(Local_17.f_2[iParam0 /*9*/])->f_2 = joaat("extra");
		}
	}
	if (func_723(iParam0, &iVar6) || func_724(iParam0, &iVar7))
	{
		if (iVar6 != 0)
		{
			PED::_0x1902C4CFCC5BE57C(iVar0, iVar6);
		}
		else
		{
			PED::_SET_PED_OUTFIT_PRESET(iVar0, iVar7, 0);
		}
		PED::_0xCC8CA3E88256E58F(iVar0, 0, 1, 1, 1, false);
	}
	if (func_989(iParam0, &uVar8))
	{
		PED::_0x89F5E7ADECCCB49C(iVar0, aggregate.fm_mission_controller.func_3989(&uVar8));
	}
	if (aggregate.la_alligator.func_203(iParam0, 32))
	{
		func_990(iVar0);
	}
	if (!aggregate.la_alligator.func_203(iParam0, 65536) && func_54(iParam0, &iVar16, 1))
	{
		func_990(iVar16);
	}
	bVar17 = func_23(iParam0);
	if (PED::IS_PED_HUMAN(iVar0))
	{
		if (((WEAPON::_0x959383DCD42040DA(bVar17) || bVar17 == joaat("weapon_unarmed")) && bVar17 != joaat("weapon_melee_lantern")) && !aggregate.fme_challenges.func_1307(iParam0, 268435456))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 93, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 50, true);
			PED::_0x815C0074A1BC0D93(iVar0, 2);
		}
		if (func_725(iParam0))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, false, true);
		}
		if (aggregate.binoculars.func_72(bVar17))
		{
			if (bVar17 == joaat("weapon_melee_lantern") && aggregate.fme_challenges.func_1307(iParam0, 131072))
			{
				aggregate.fm_mission_controller.func_6958(iVar0, joaat("weapon_revolver_cattleman"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			}
			aggregate.fm_mission_controller.func_6958(iVar0, bVar17, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		if ((!aggregate.la_alligator.func_203(iParam0, 1) && !aggregate.fme_challenges.func_1307(iParam0, 131072)) && (Local_556.f_20.f_22[iParam0 /*19*/])->f_10 != 1300923248)
		{
			WEAPON::_0xFCCC886EDE3C63EC(iVar0, 2, 1);
		}
		if (func_991(iParam0, &iVar18))
		{
			PED::SET_PED_ACCURACY(iVar0, iVar18);
		}
		else
		{
			PED::SET_PED_ACCURACY(iVar0, 20);
		}
		PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 108, false);
		PED::_0xD77AE48611B7B10A(iVar0, 0.48f);
		if (!aggregate.fme_challenges.func_1307(iParam0, 4096))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
		}
		if (aggregate.fme_challenges.func_1307(iParam0, 8) || aggregate.fme_challenges.func_1307(iParam0, 1024))
		{
			PED::_0x85F500F4E24CA43E(iVar0, 0f);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
	PED::SET_PED_SEEING_RANGE(iVar0, func_992(iParam0));
	PED::SET_PED_HEARING_RANGE(iVar0, func_993(iParam0));
	if (func_994(iParam0, &iVar19))
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, iVar19);
		ENTITY::_SET_ENTITY_HEALTH(iVar0, iVar19, 0);
	}
	if (func_53(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 170, true);
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 128))
	{
		PED::SET_PED_AS_COP(iVar0, false);
		LAW::_0x819ADD5EF1742F47(iVar0, 7);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 39, true);
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 4096))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 4, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
		PED::_0xB8DE69D9473B7593(iVar0, 0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 146, false);
	}
	else
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 4096) || aggregate.fme_challenges.func_1307(iParam0, 128))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, true);
	}
	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_14 > -1 && (Local_556.f_20.f_22[iParam0 /*19*/])->f_14 < Local_556.f_20.f_550)
	{
		PED::_0xFC3DB99C8144CD81(iVar0, &(Local_556.f_962[(Local_556.f_20.f_22[iParam0 /*19*/])->f_14]), 0, 0, 0);
	}
	if (func_475((Local_17.f_2[iParam0 /*9*/])->f_2))
	{
		PED::_0x2E5B5D1F1453E08E(iVar0, 3);
		PED::_0x5BCF0B79D4F5DBA3(iVar0, 15f);
		PED::_0x29924EB8EE9DB926(iVar0, 20f);
	}
	if (func_995(iParam0, &fVar20, &fVar21, &fVar22))
	{
		TASK::_0x3AD8EFF9703BE657(iVar0, fVar20);
		TASK::_0xE8C296B75EACC357(iVar0, fVar21);
		TASK::_0x88E32DB8C1A4AA4B(iVar0, fVar22);
	}
	if (Global_1901929->f_160.f_31)
	{
		if (aggregate.fme_challenges.func_1307(iParam0, 128))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 127, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
		}
	}
	if (Local_17.f_2[iParam0 /*9*/])->f_2 == joaat("target")
	{
		Local_17.f_275++;
	}
}

int func_732(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_119(&Var0) && func_120(&Var0, -867387895, iParam0, 0))
	{
		iVar5 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_733(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (func_119(&Var0) && func_120(&Var0, -867387895, iParam0, 0))
	{
		aggregate.fme_animal_tagging.func_40(Var0, -1652447499, &iVar5, 0);
	}
	switch (iVar5)
	{
		case 1944715782:
			return 1;
		case -505604945:
			return 2;
		case joaat("chat"):
			return 3;
		case 1711299255:
			return 4;
		case joaat("random"):
			return 5;
		default:
			break;
	}
	return 0;
}

int func_734(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (func_119(&Var0) && func_120(&Var0, -867387895, iParam0, 0))
	{
		aggregate.fme_animal_tagging.func_40(Var0, 1082010721, &iVar5, 0);
	}
	switch (iVar5)
	{
		case joaat("loose"):
			return 0;
		case 1600602149:
			return 1;
		case 1427081770:
			return 2;
		case 1583307481:
			return 3;
		case -1912395912:
			return 4;
		case -148474395:
			return 6;
		case -2085386658:
			return 7;
		case -1989565558:
			return 8;
		case 1588459901:
			return 9;
		case 1097860881:
			return 10;
		default:
			break;
	}
	return 5;
}

int func_738(int iParam0)
{
	return func_999(aggregate.fme_animal_tagging.func_726(iParam0, 0));
}

bool func_739(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (aggregate.flow_controller.func_420(iParam0))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (iVar0 == iParam0)
		{
		}
		else if (!SCRIPTS::_0x72B2E00C9BAC6789(&uParam1, iVar1))
		{
		}
		else if (!_NAMESPACE26::_0x3F59FE6F37869576(iParam0, iVar0))
		{
		}
		else if (!aggregate.flow_controller.func_420(iVar0))
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

int func_740(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
		}
		else if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar3) != iParam0)
		{
		}
		else
		{
			iVar1 = aggregate.fme_animal_tagging.func_726(iVar3, 0);
			if (iVar1 <= iVar0)
			{
			}
			else
			{
				iVar0 = iVar1;
			}
		}
		iVar2++;
	}
	return iVar1;
}

bool func_742()
{
	if (aggregate.fme_animal_tagging.func_134(134217728))
	{
		return false;
	}
	if (Local_556.f_20.f_16 != 1320143426)
	{
		return false;
	}
	if (((Local_556.f_20.f_549 == Local_17.f_275 && func_661() > Local_556.f_20.f_4) && !func_469(512)) && !aggregate.fme_animal_tagging.func_134(1024))
	{
		return false;
	}
	return true;
}

void func_743()
{
	if (aggregate.fme_animal_tagging.func_134(134217728))
	{
		return;
	}
	Local_17.f_273 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	aggregate.fme_animal_tagging.func_174(134217728);
}

bool func_744()
{
	if (!aggregate.fme_animal_tagging.func_134(8))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(16777216))
	{
		if (aggregate.fme_animal_tagging.func_134(134217728))
		{
			return NETWORK::GET_TIME_DIFFERENCE(Local_17.f_273, NETWORK::GET_NETWORK_TIME_ACCURATE()) > Local_556.f_20.f_4;
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(Local_17.f_272, NETWORK::GET_NETWORK_TIME_ACCURATE()) > Local_556.f_20.f_2;
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(Local_17.f_272, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 40000;
}

bool func_745(var uParam0, int iParam1)
{
	if (func_119(uParam0) && func_120(uParam0, 1823038874, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_746(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if ((Local_17.f_2[iVar0 /*9*/])->f_2 == 516423162 || (Local_17.f_2[iVar0 /*9*/])->f_2 == 0)
		{
		}
		else if (iParam0 != -1 && (Local_556.f_20.f_22[iVar0 /*19*/])->f_12 != iParam0)
		{
		}
		else if (!aggregate.fme_challenges.func_1307(iVar0, 1))
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

int func_747()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		switch ((Local_17.f_2[iVar0 /*9*/])->f_2)
		{
			case 0:
				break;
				break;
			default:
				iVar1++;
				break;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_749(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], iParam0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1)))
			{
			}
			else
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_750(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	bool bVar7;
	vector3 vVar8;
	float fVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	if (Local_17.f_222.f_2 == -1)
	{
		if (!func_1000(&iVar0))
		{
			return true;
		}
		Local_17.f_222.f_2 = iVar0;
	}
	iVar0 = Local_17.f_222.f_2;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar0 /*9*/])))
	{
		return true;
	}
	if (!func_121(&Var1, iParam0, iParam1))
	{
		return true;
	}
	if (!func_581(Var1))
	{
		return true;
	}
	aggregate.net_assassination.func_1057(Var1, -486752250, &iVar6);
	aggregate.fme_animal_tagging.func_143(Var1, -81907729, &vVar8, 0);
	aggregate.fme_animal_tagging.func_142(Var1, 724299998, &fVar11, 0);
	aggregate.fme_condor_egg.func_42(Var1, 917283806, &bVar14, 0);
	iVar16 = 1;
	if (bVar14)
	{
		iVar16++;
	}
	iVar17 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0);
	iVar18 = (iVar17 - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false));
	if (iVar18 < iVar16)
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS((iVar17 + (iVar16 - iVar18)));
		if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0) < (iVar17 + (iVar16 - iVar18)))
		{
			return true;
		}
	}
	if (!STREAMING::IS_MODEL_VALID(iVar6))
	{
		return true;
	}
	if (aggregate.annesburg.func_121(vVar8))
	{
		return true;
	}
	if (bVar14)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iVar0 /*9*/])->f_1))
		{
			aggregate.fme_challenges.func_1263(&((Local_17.f_2[iVar0 /*9*/])->f_1), func_29(iParam0, iParam1), vVar8, fVar11, 1, 0, 1, 1, 1);
			return false;
		}
		if (!aggregate.fme_escaped_convicts.func_1084(Local_17.f_2[iVar0 /*9*/], (Local_17.f_2[iVar0 /*9*/])->f_1, iVar6, -1, 1, 1, 1, 0))
		{
			return false;
		}
	}
	else if (!aggregate.fme_challenges.func_1263(Local_17.f_2[iVar0 /*9*/], iVar6, vVar8, fVar11, 1, 0, 1, 1, 1))
	{
		return false;
	}
	aggregate.fme_animal_tagging.func_40(Var1, 256341061, &bVar12, 0);
	bVar7 = bVar12;
	aggregate.fme_supply_train.func_39(Var1, 1533007347, &iVar13, 0);
	aggregate.fme_condor_egg.func_42(Var1, -827172890, &bVar15, 0);
	iVar19 = -1;
	aggregate.fme_supply_train.func_39(Var1, -412523681, &iVar19, 0);
	func_1001(iVar0, bVar7, bVar15, iVar13, iVar19);
	(Local_17.f_2[iVar0 /*9*/])->f_8 = func_1002(iParam0, iParam1);
	return true;
}

void func_751(int iParam0)
{
	if (Local_17.f_275 > 1)
	{
		func_174(2, iParam0, aggregate.dynamic_craft_scenario.func_194(0, 8), &(Local_17.f_234[iParam0 /*2*/]));
	}
	if (Local_17.f_275 > 0)
	{
		Local_17.f_275 = (Local_17.f_275 - 1);
	}
	if (Local_17.f_276 > 0)
	{
		Local_17.f_276 = (Local_17.f_276 - 1);
	}
	Local_17.f_234[iParam0 /*2*/] = 255;
}

bool func_753(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (((func_116(iParam0, &Var0) && aggregate.fme_supply_train.func_39(Var0, 691956863, iParam1, 0)) && *iParam1 >= 0) && *iParam1 < 21)
	{
		return true;
	}
	return false;
}

bool func_754(int iParam0)
{
	int iVar0;

	if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("event_damage")))
	{
		return true;
	}
	if (TASK::_0xF330A5C062B29BED(iParam0))
	{
		return true;
	}
	iVar0 = PED::_0xB676EFDA03DADA52(iParam0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && PED::IS_PED_A_PLAYER(iVar0))
	{
		return true;
	}
	return false;
}

bool func_755(int iParam0, int iParam1, float fParam2, var uParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = fParam2;
	*uParam3 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!aggregate.fishing_core.func_34(Local_299[iVar2 /*8*/], 4))
		{
		}
		else if (!func_709(iParam0, iVar2))
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			fVar1 = aggregate.dynamic_craft_scenario.func_370(iParam1, PLAYER::GET_PLAYER_PED(iVar3), 1, 1);
			if (fVar1 > fVar0)
			{
			}
			else
			{
				fVar0 = fVar1;
				*uParam3 = iVar3;
			}
		}
		iVar2++;
	}
	if (*uParam3 == 255)
	{
		return false;
	}
	return true;
}

bool func_756(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;

	vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, true) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 4))
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			fVar5 = aggregate.fishing_core.func_39(PLAYER::GET_PLAYER_PED(iVar1), vVar2, 1);
			if (fVar5 > fParam1)
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

bool func_757(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	*iParam1 = -1;
	*iParam2 = -1;
	if (!func_116(iParam0, &Var0))
	{
		return false;
	}
	if (!aggregate.fme_supply_train.func_39(Var0, 1059929194, iParam1, 0))
	{
		return false;
	}
	aggregate.fme_supply_train.func_39(Var0, 871643656, iParam2, 0);
	return true;
}

bool func_758(int iParam0)
{
	if (iParam0 >= 6 || iParam0 < 0)
	{
		return false;
	}
	return true;
}

bool func_759(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;

	if (!func_52(iParam0, &iVar1, 1, 0))
	{
		return false;
	}
	if (PED::IS_PED_BEING_STEALTH_KILLED(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_BEING_STUNNED(iVar1, 0))
	{
		return false;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	iVar8 = 0;
	while (iVar8 < Local_556.f_20.f_548)
	{
		if (iVar8 == iParam0)
		{
		}
		else if (aggregate.fm_mission_controller.func_267(iVar8) != 1583594396)
		{
		}
		else if (!func_52(iVar8, &iVar0, 0, 0))
		{
		}
		else
		{
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
			if (BUILTIN::VDIST(vVar5, vVar2) > 25f)
			{
			}
			else if ((vVar5.z - vVar2.z) > 4.5f)
			{
			}
			else if (ENTITY::IS_ENTITY_IN_WATER(iVar0))
			{
			}
			else if (!func_1004(iVar1, iVar0, 100f))
			{
			}
			else if (!ENTITY::_0x0C9DBF48C6BA6E4C(iVar1, vVar5, 339))
			{
			}
			else if (func_1005(vVar2, vVar5))
			{
			}
			else
			{
				return true;
			}
		}
		iVar8++;
	}
	return false;
}

bool func_760(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (((PED::IS_PED_BEING_STEALTH_KILLED(iParam1) || PED::IS_PED_BEING_STUNNED(iParam1, 0)) || PED::IS_PED_FATALLY_INJURED(iParam1)) || PED::GET_PED_CONFIG_FLAG(iParam1, 11, false))
	{
		return false;
	}
	if (!bParam3 && TASK::_0xF330A5C062B29BED(iParam1))
	{
		return true;
	}
	if (PED::_0xB655DB7582AEC805(iParam1))
	{
		return true;
	}
	if (!bParam3 && PED::IS_PED_IN_COMBAT(iParam1, 0))
	{
		return true;
	}
	if (bParam2)
	{
		if (PED::_0x9682F850056C9ADE(iParam1))
		{
			return true;
		}
		if (PED::IS_PED_FLEEING(iParam1))
		{
			return true;
		}
		if (PED::IS_PED_BEING_JACKED(iParam1))
		{
			return true;
		}
		if (PED::_0xC8D523BF5BBD3808(iParam1, joaat("event_shocking_seen_ped_killed")))
		{
			return true;
		}
		if (bParam2 && PED::_0xC8D523BF5BBD3808(iParam1, joaat("event_shocking_dead_body")))
		{
			return true;
		}
		if (func_1006(iParam0))
		{
			return true;
		}
	}
	if (!bParam3 && PED::_0x77525BBF433F2CD6(iParam1))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("event_shot_fired_bullet_impact")))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("event_shot_fired_whizzed_by")))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, -998673475))
	{
		return true;
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("event_shot_fired")))
	{
		return true;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("event_shocking_dead_body")))
		{
			*bParam4 = 1;
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("event_shocking_ped_knocked_into_by_player")))
		{
			return true;
		}
	}
	if (PED::IS_PED_RESPONDING_TO_EVENT(iParam1, joaat("event_shocking_ped_shot")))
	{
		return true;
	}
	return false;
}

bool func_762(int iParam0, var uParam1)
{
	int iVar0;

	if ((Local_17.f_2[iParam0 /*9*/])->f_6 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_2[iParam0 /*9*/])->f_6))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT((Local_17.f_2[iParam0 /*9*/])->f_6))
	{
		return true;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX((Local_17.f_2[iParam0 /*9*/])->f_6);
	if (!func_709(iParam0, iVar0))
	{
		return true;
	}
	return false;
}

void func_763(int iParam0)
{
	(Local_17.f_2[iParam0 /*9*/])->f_6 = 255;
	aggregate.net_assassination.func_458(iParam0, 32768);
	aggregate.net_assassination.func_458(iParam0, 65536);
}

bool func_765(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!MISC::_0x8F4F050054005C27(&((Local_299[iVar0 /*8*/])->f_6), iParam0))
		{
		}
		else
		{
			iVar1 = iVar0;
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
			{
			}
			else
			{
				*uParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam1))
				{
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_766(int iParam0, var uParam1)
{
	(Local_17.f_2[iParam0 /*9*/])->f_6 = uParam1;
	aggregate.net_assassination.func_458(iParam0, 32768);
	aggregate.net_assassination.func_458(iParam0, 65536);
}

bool func_767(int iParam0, int iParam1)
{
	switch (Local_556.f_20)
	{
		case 1657045547:
			return true;
		default:
			break;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1) && func_635(iParam0, 4000))
	{
		return true;
	}
	if (func_756(iParam1, 7f))
	{
		return true;
	}
	return false;
	return true;
}

bool func_769()
{
	if (aggregate.fme_animal_tagging.func_134(64))
	{
		return true;
	}
	if (aggregate.fme_animal_tagging.func_134(32))
	{
		return true;
	}
	return false;
}

bool func_771(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && aggregate.fme_supply_train.func_39(Var0, 561062234, iParam1, 0))
	{
		return true;
	}
	return false;
}

bool func_772(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return false;
		default:
			break;
	}
	return !func_1007(iParam0);
}

bool func_773(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = joaat("weapon_unarmed");
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, 0, false);
	if (iVar0 == bParam1)
	{
		return true;
	}
	return false;
}

bool func_774(int iParam0, int iParam1)
{
	bool bVar0;
	vector3 vVar1;

	if (!aggregate.fme_challenges.func_1307(iParam0, 2048))
	{
		if (aggregate.fme_challenges.func_1307(iParam0, 2))
		{
			vVar1 = { func_856(iParam0) };
		}
		else
		{
			vVar1 = { func_778(iParam0) };
		}
		if (aggregate.annesburg.func_121(vVar1) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), vVar1) < 4f)
		{
			aggregate.net_assassination.func_458(iParam0, 2048);
		}
		else
		{
			return false;
		}
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 256) && !aggregate.fme_challenges.func_1307(iParam0, 512))
	{
		bVar0 = func_1008(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !PED::IS_PED_DEAD_OR_DYING(iParam1, true)) && WEAPON::HAS_PED_GOT_WEAPON(iParam1, bVar0, 0, 1))
		{
			aggregate.net_assassination.func_458(iParam0, 512);
		}
		return false;
	}
	return true;
}

bool func_775(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_11 != 2116329739)
	{
		iVar0 = (Local_556.f_20.f_22[iParam0 /*19*/])->f_15;
	}
	else if (!func_753(iParam0, &iVar0))
	{
		return true;
	}
	if (iVar0 < 0 || iVar0 >= 21)
	{
		return true;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[iVar0 /*9*/])))
	{
		return true;
	}
	iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_2[iVar0 /*9*/]));
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar1, 11, false))
	{
		return true;
	}
	return false;
}

int func_776(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0))
	{
		aggregate.fme_animal_tagging.func_40(Var0, 229174115, &uVar5, 0);
	}
	return uVar5;
}

bool func_777(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (aggregate.fme_challenges.func_1307(iParam0, 4))
	{
		return true;
	}
	if ((func_757(iParam0, &iVar0, &iVar1) && func_758(iVar0)) && !func_572(iVar0))
	{
		if ((!aggregate.fme_challenges.func_1307(iParam0, 4) && func_758(iVar1)) && func_572(iVar1))
		{
			aggregate.net_assassination.func_458(iParam0, 4);
			return true;
		}
		if (func_1009(iParam0, iParam1))
		{
			aggregate.net_assassination.func_458(iParam0, 4);
			return true;
		}
		return false;
	}
	return true;
}

Vector3 func_778(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	func_116(iParam0, &Var0);
	aggregate.fme_animal_tagging.func_143(Var0, -1711751769, &vVar5, 0);
	return vVar5;
}

int func_779(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	var uVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	float fVar11;

	if (!aggregate.fme_challenges.func_1307(iParam0, 2048))
	{
		if (aggregate.fme_challenges.func_1307(iParam0, 2))
		{
			vVar0 = { func_856(iParam0) };
		}
		else
		{
			vVar0 = { func_778(iParam0) };
		}
		if (aggregate.annesburg.func_121(vVar0) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), vVar0) < 4f)
		{
			aggregate.net_assassination.func_458(iParam0, 2048);
		}
	}
	iVar10 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam1, 0, 3);
	if ((iVar10 != -1 && iVar10 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar10)))
	{
		iVar9 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(iVar10));
		if (aggregate.dynamic_craft_scenario.func_370(iParam1, iVar9, 1, 0) < 30f)
		{
			bVar8 = true;
		}
	}
	if (!func_1010(iParam1, 200f, &uVar7, &uVar4, &fVar3))
	{
		aggregate.net_assassination.func_458(iParam0, 1048576);
		aggregate.net_assassination.func_458(iParam0, 2097152);
		if (bVar8)
		{
			aggregate.net_assassination.func_458(iParam0, 8388608);
		}
		else
		{
			aggregate.net_assassination.func_458(iParam0, 8388608);
		}
		return 0;
	}
	if (fVar3 < 20f)
	{
		aggregate.net_assassination.func_458(iParam0, 4194304);
		aggregate.net_assassination.func_458(iParam0, 2097152);
		aggregate.net_assassination.func_458(iParam0, 1048576);
	}
	else if (fVar3 < 60f)
	{
		aggregate.net_assassination.func_458(iParam0, 4194304);
		aggregate.net_assassination.func_458(iParam0, 2097152);
		aggregate.net_assassination.func_458(iParam0, 1048576);
	}
	else if (fVar3 < 150f || bVar8)
	{
		aggregate.net_assassination.func_458(iParam0, 4194304);
		aggregate.net_assassination.func_458(iParam0, 2097152);
		aggregate.net_assassination.func_458(iParam0, 1048576);
	}
	else
	{
		aggregate.net_assassination.func_458(iParam0, 4194304);
		aggregate.net_assassination.func_458(iParam0, 2097152);
		aggregate.net_assassination.func_458(iParam0, 1048576);
	}
	fVar11 = 175f;
	if (aggregate.fme_challenges.func_1307(iParam0, 8388608))
	{
		fVar11 = (175f - 10f);
	}
	if (fVar3 > fVar11 && !bVar8)
	{
		aggregate.net_assassination.func_458(iParam0, 8388608);
	}
	else
	{
		aggregate.net_assassination.func_458(iParam0, 8388608);
	}
	return 0;
}

bool func_780(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_15 < 0 || (Local_556.f_20.f_22[iParam0 /*19*/])->f_15 >= 21)
	{
		return true;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 /*9*/])))
	{
		return true;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 /*9*/]));
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	if (!func_54(iParam0, &iVar1, 1) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		return true;
	}
	if (!func_1011(iParam1, iVar1, 1))
	{
		return true;
	}
	return false;
}

bool func_781(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_852(iParam0, &iVar0, &iVar1))
	{
		return true;
	}
	if (!func_153(iVar0, 0))
	{
		return true;
	}
	if ((aggregate.fme_challenges.func_1307(iParam0, 268435456) && aggregate.fme_challenges.func_1307(iParam0, 2)) && func_153(iVar1, 1))
	{
		if (func_1012(iVar1))
		{
			return true;
		}
	}
	else if (func_1012(iVar0))
	{
		return true;
	}
	return false;
}

int func_782(int iParam0, int iParam1, int iParam2)
{
	return func_1013((Local_17.f_2[iParam0 /*9*/])->f_8, iParam1, iParam2);
}

bool func_783(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;

	if (!func_121(&Var0, iParam0, iParam1) || !aggregate.fme_animal_tagging.func_143(Var0, -1711751769, uParam2, 0))
	{
		return false;
	}
	return true;
}

void func_805(var uParam0, var uParam1)
{
	if (!STATS::_STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_0x6A0184E904CDF25E(&uParam0, true);
}

bool func_810(var uParam0, var uParam1)
{
	return (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1);
}

void func_812(int iParam0, int iParam1)
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

int func_813(var uParam0)
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

int func_814()
{
	return 362424745;
}

void func_816(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	iVar1 = func_1024(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1025(iParam0, iVar0, &uVar4);
		func_1026(&uVar4, iVar8);
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
			func_1027(iParam0, iParam3);
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
		func_1028(iParam0, iVar3, iParam2);
	}
}

int func_819(int iParam0)
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

int func_820(int iParam0)
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

void func_835(struct<2> Param0, int iParam2)
{
	aggregate.net_assassination.func_837(Param0, aggregate.flow_controller.func_325(iParam2));
}

void func_839(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar1 = func_1024(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1025(iParam0, iVar0, &uVar3);
		func_1026(&uVar3, iVar7);
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
		func_1028(iParam0, iVar2, iParam3);
	}
	iVar1 = func_1049(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1050(iParam0, iVar0, &uVar8);
		func_1051(&uVar8, iVar7);
		iVar0++;
	}
}

void func_842(int iParam0)
{
	if (aggregate.net_assassination.func_1054(0, 0, 0, 0) || iParam0 > (Global_1273882->f_21 - Global_1103536->f_5561))
	{
		Global_1103536->f_5561 = Global_1273882->f_21;
		Global_1103536->f_5561.f_1 = iParam0;
	}
}

bool func_850(int iParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(aggregate.fme_animal_tagging.func_1677(*(Local_556.f_584.f_39[iParam0 /*4*/])));
}

char* func_851(int iParam0)
{
	return aggregate.fm_mission_controller.func_3989(Local_556.f_584.f_39[iParam0 /*4*/]);
}

bool func_852(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	*iParam1 = -1;
	*iParam2 = -1;
	if (!func_116(iParam0, &Var0))
	{
		return false;
	}
	if (!aggregate.fme_supply_train.func_39(Var0, -619208322, iParam1, 0))
	{
		return false;
	}
	aggregate.fme_supply_train.func_39(Var0, 796390761, iParam2, 0);
	return true;
}

bool func_853(int iParam0, bool bParam1)
{
	struct<5> Var0;

	if (!func_980(iParam0, &Var0))
	{
		return false;
	}
	if (!aggregate.net_assassination.func_1057(Var0, 1890996209, bParam1))
	{
		return false;
	}
	return true;
}

void func_855(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 1120685857, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 100f, 0, iParam1);
}

Vector3 func_856(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	func_116(iParam0, &Var0);
	aggregate.fme_animal_tagging.func_143(Var0, 2092691923, &vVar5, 0);
	return vVar5;
}

bool func_857(vector3 vParam0, float fParam3, int iParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	*fParam6 = fParam3;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if ((Local_299[iVar1 /*8*/])->f_1 & 4 == 0)
		{
		}
		else
		{
			iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
			}
			else
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
				{
				}
				else
				{
					iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
					fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam0);
					if (fVar2 > *fParam6)
					{
					}
					else
					{
						*fParam6 = fVar2;
						*iParam4 = iVar3;
						*fParam5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
					}
				}
			}
		}
		iVar1++;
	}
	return *fParam6 < fParam3;
}

void func_858(int iParam0)
{
	if (Local_17.f_262 != 0)
	{
		return;
	}
	Local_17.f_262 = iParam0;
}

void func_859(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	char cVar1[64];
	char cVar9[64];
	int iVar17;

	if (aggregate.la_alligator.func_203(iParam0, iParam3))
	{
		return;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam1))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	StringCopy(&cVar1, func_1063(iParam0, iParam2, 0, bParam5, iParam7), 64);
	StringCopy(&cVar9, func_1063(iParam0, iParam2, 1, bParam5, iParam7), 64);
	iVar17 = func_1064(iParam0, iParam2);
	if (MISC::IS_STRING_NULL_OR_EMPTY(aggregate.fm_mission_controller.func_3989(&cVar1)))
	{
		aggregate.la_alligator.func_225(iParam0, iParam3);
		return;
	}
	if (iParam4 && func_1066(iParam1))
	{
		aggregate.la_alligator.func_225(iParam0, iParam3);
		return;
	}
	if (aggregate.fme_condor_egg.func_1100(iParam1, &cVar1, iVar17, iVar0, iParam6, 0, 0, 1))
	{
		aggregate.la_alligator.func_225(iParam0, iParam3);
		return;
	}
	else if (!MISC::ARE_STRINGS_EQUAL(&cVar1, &cVar9) && aggregate.fme_condor_egg.func_1100(iParam1, &cVar9, iVar17, iVar0, iParam6, 0, 0, 1))
	{
		aggregate.la_alligator.func_225(iParam0, iParam3);
		return;
	}
	aggregate.la_alligator.func_225(iParam0, iParam3);
}

int func_860(int iParam0, int iParam1, int iParam2)
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

bool func_862(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 509508008;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_863(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = -1968510322;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

bool func_864(int iParam0, int iParam1, var uParam2)
{
	if (func_863(iParam0, uParam2))
	{
		uParam2->f_2 = -30329033;
		uParam2->f_3 = iParam1;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam2->f_1), uParam2);
	}
	return false;
}

var func_867(int iParam0)
{
	return aggregate.flow_controller.func_412(iParam0, 887702464, 1);
}

int func_869(int iParam0)
{
	struct<2> Var0;

	Var0 = { aggregate.aberdeenpigfarm.func_107(741274143, aggregate.map_app_event_handler.func_148(iParam0)) };
	return aggregate.nb_hobo_dog.func_533(Var0, -1);
}

void func_870(int iParam0)
{
	if (!aggregate.la_alligator.func_203(iParam0, 33554432))
	{
		return;
	}
	aggregate.la_alligator.func_225(iParam0, 33554432);
	aggregate.la_alligator.func_225(iParam0, 8388608);
}

void func_871(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	if (!aggregate.la_alligator.func_203(iParam0, 524288))
	{
		return;
	}
	if (!aggregate.fme_animal_tagging.func_134(2))
	{
		return;
	}
	if (!aggregate.la_alligator.func_203(iParam0, 524288))
	{
		return;
	}
	if (!func_52(iParam0, &iVar1, 0, 0))
	{
		return;
	}
	iVar0 = func_1074(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	ENTITY::_0x5826EFD6D73C4DE5(iVar1);
	PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iVar1);
	if (aggregate.la_alligator.func_203(iParam0, 65536) && func_54(iParam0, &iVar1, 0))
	{
		ENTITY::_0x5826EFD6D73C4DE5(iVar1);
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), iVar1);
	}
	sVar2 = aggregate.blackwater.func_268(func_104(iVar0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && (Local_556.f_20.f_495[iVar0 /*2*/])->f_1)
	{
		TASK::REMOVE_WAYPOINT_RECORDING(sVar2);
	}
	aggregate.la_alligator.func_225(iParam0, 524288);
	Local_556.f_20.f_5 = (Local_556.f_20.f_5 - 1);
}

void func_872(int iParam0)
{
	MISC::_0xE84AAC1B22A73E99(&((Local_299[Local_556.f_1008 /*8*/])->f_6), iParam0);
}

void func_873(int iParam0)
{
	MISC::_0xB909149F2BB5F6DA(&((Local_299[Local_556.f_1008 /*8*/])->f_6), iParam0);
}

char* func_875(int iParam0)
{
	if (PED::IS_PED_MALE(iParam0))
	{
		return "STRANGER_MALE";
	}
	return "STRANGER_FEMALE";
}

int func_876(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_55((Local_17.f_2[iParam0 /*9*/])->f_2))
	{
		return 0;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(Local_556.f_577))
	{
		return 0;
	}
	if (func_723(iParam0, &iVar1))
	{
		iVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), iVar1, 0);
	}
	else if (func_724(iParam0, &uVar2))
	{
		iVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), PED::_0x62FDF4E678E40CC6(iParam1, uVar2), 0);
	}
	else if (!bParam2)
	{
		iVar0 = PLAYER::_0x8E84119A23C16623(ENTITY::GET_ENTITY_MODEL(iParam1), 0, 0);
	}
	return iVar0;
}

char* func_877()
{
	return "NET_AS_ILO_TITLE_TARGET";
}

char* func_878()
{
	return "NET_AS_ILO_TITLE_ENEMY";
}

void func_880(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (aggregate.fme_escaped_convicts.func_724())
	{
		iVar0 = -813230742;
	}
	else
	{
		iVar0 = 2102333076;
	}
	if (!ENTITY::_0x8C03CD6B5E0E85E8(iParam0, iVar0))
	{
	}
}

bool func_881(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam2, false, false) };
	if ((vVar3.z - 6f) > vVar0.z)
	{
		return false;
	}
	fVar6 = func_1077(iParam0);
	fVar7 = BUILTIN::VDIST(vVar0, vVar3);
	if (fVar7 > (fVar6 * 1.4f))
	{
		return false;
	}
	if (fVar7 > (fVar6 * func_1078(iParam2)))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if (PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_BEING_STUNNED(iParam1, 0))
	{
		return false;
	}
	fVar8 = func_1079(iParam0);
	if (!func_1004(iParam1, iParam2, fVar8))
	{
		if (PED::IS_PED_HEADTRACKING_PED(iParam1, iParam2) && func_1004(iParam1, iParam2, 1127481344 /* Float: 180f */))
		{
		}
		else if (func_1080(iParam2, iParam1, fVar7))
		{
		}
		else if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_12 != -1 && func_1081((Local_556.f_20.f_22[iParam0 /*19*/])->f_12, iParam0))
		{
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_ON_MOUNT(iParam2))
	{
		iVar9 = aggregate.annesburg.func_253(PED::GET_MOUNT(iParam2));
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, false))
	{
		iVar9 = aggregate.annesburg.func_253(PED::GET_VEHICLE_PED_IS_IN(iParam2, false));
	}
	else
	{
		iVar9 = aggregate.annesburg.func_253(iParam2);
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iVar9, 339))
	{
		return false;
	}
	if (func_1005(vVar0, vVar3))
	{
		return false;
	}
	return true;
}

bool func_883(int iParam0)
{
	return func_709(iParam0, 255);
}

bool func_885(int iParam0)
{
	switch (Local_556.f_20)
	{
		case 1657045547:
			if (!func_428(iParam0, Local_299[Local_556.f_1008 /*8*/]))
			{
				return false;
			}
			break;
		default:
			if (!aggregate.fme_challenges.func_1307(iParam0, 262144))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_887(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (aggregate.binoculars.func_72(bParam1) && !WEAPON::HAS_PED_GOT_WEAPON(iVar0, bParam1, 0, 0))
	{
		if (bParam2)
		{
			aggregate.fm_mission_controller.func_6958(iVar0, bParam1, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		return;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false);
	if (iVar1 == bParam1)
	{
		return;
	}
	iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, 716706914, 0);
	if (iVar2 == 1 || iVar2 == 0)
	{
		return;
	}
	if (func_1062(Local_17.f_2[iParam0 /*9*/], 716706914, 0) != 2)
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, bParam1, false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iVar0, iParam3, iParam4, 0, 0);
}

bool func_888(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (func_55((Local_17.f_2[iParam0 /*9*/])->f_2) && (Local_556.f_20.f_22[iParam0 /*19*/])->f_10 == 918683891)
	{
		bVar0 = true;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 8) && (Local_17.f_2[iParam0 /*9*/])->f_6 != 255)
	{
		bVar1 = true;
	}
	if (func_1082(iParam1, 0, bVar0, bVar1))
	{
		return false;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &bVar2, false, 0, false);
	bVar3 = WEAPON::GET_BEST_PED_WEAPON(iParam1, false, false);
	if (func_1083(iParam0, iParam1, bVar2, bVar3))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
	if (func_1084(iParam0, iParam1, bVar2))
	{
		return false;
	}
	if (PED::_0x7583A9D35248B83F(iParam1))
	{
		return false;
	}
	return true;
}

void func_889(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (!func_888(iParam0, iParam1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1))
	{
		return;
	}
	iVar0 = func_776(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = !aggregate.la_alligator.func_203(iParam0, 1);
	func_1085(iParam0, iVar0, (Local_556.f_20.f_22[iParam0 /*19*/])->f_3, (Local_556.f_20.f_22[iParam0 /*19*/])->f_9, bVar1);
}

void func_890(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!func_888(iParam0, iParam1))
	{
		return;
	}
	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_11 != 2116329739)
	{
		iVar0 = (Local_556.f_20.f_22[iParam0 /*19*/])->f_15;
	}
	else if (!func_753(iParam0, &iVar0))
	{
		return;
	}
	if (iVar0 < 0 || iVar0 >= 21)
	{
		return;
	}
	if (!func_52(iVar0, &iVar1, 1, 0))
	{
		return;
	}
	if (TASK::_0xF330A5C062B29BED(iParam1) || PED::IS_PED_RAGDOLL(iParam1))
	{
		return;
	}
	bVar2 = WEAPON::_0x08FF1099ED2E6E21(iParam1);
	if (!func_773(iParam1, bVar2))
	{
		func_887(iParam0, bVar2, 0, 1, 0);
		return;
	}
	if (PED::_0x0D3B1568917EBDA0(iParam1, 11))
	{
		PED::_0x7C10221CE718AA72(iParam1, 11);
	}
	if (!PED::_0xB346C85D49CC998E(iParam1, 17))
	{
		PED::_0xB8DE69D9473B7593(iParam1, 17);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 168, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
	}
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iParam1, false, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar1));
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	func_1086(iParam0, iVar1);
}

void func_891(int iParam0, int iParam1)
{
	if (!func_888(iParam0, iParam1))
	{
		return;
	}
	func_1087(iParam0, (Local_556.f_20.f_22[iParam0 /*19*/])->f_3, 50f);
}

void func_892(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_888(iParam0, iParam1))
	{
		return;
	}
	if ((Local_556.f_20.f_22[iParam0 /*19*/])->f_15 == -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 /*9*/])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 /*9*/]));
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	func_1088(iParam0, iVar0, (Local_556.f_20.f_22[iParam0 /*19*/])->f_6, 1065353216 /* Float: 1f */);
}

void func_893(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar11;

	if (!func_888(iParam0, iParam1))
	{
		return;
	}
	if (!aggregate.la_alligator.func_203(iParam0, 16384))
	{
		return;
	}
	if (aggregate.barcustomer_interaction.func_46(iParam1, 658540077))
	{
		return;
	}
	if ((!aggregate.la_alligator.func_203(iParam0, 1) && PED::IS_PED_HUMAN(iParam1)) && func_178(iParam1))
	{
		func_887(iParam0, joaat("weapon_unarmed"), 0, 1, 0);
		return;
	}
	if (bParam2 && !PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
	{
		if (!func_1089(iParam0, &iVar0) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_198[iVar0])))
		{
			return;
		}
		iVar1 = NETWORK::NET_TO_VEH(&(Local_17.f_198[iVar0]));
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0, 0))
		{
			return;
		}
		iVar2 = func_1090(iParam0);
		func_1091(iParam0, iVar1, iVar2, 1f);
		return;
	}
	if (!func_272(iParam0, &uVar3))
	{
		return;
	}
	iVar11 = 262144;
	if (bParam2)
	{
		iVar11 |= 8388608;
	}
	func_1092(iParam0, aggregate.fm_mission_controller.func_3989(&uVar3), iVar11, 1);
}

void func_894(int iParam0, int iParam1)
{
	if (!func_888(iParam0, iParam1))
	{
		return;
	}
	func_1093(iParam0, 1065353216 /* Float: 1f */);
}

void func_895(int iParam0, int iParam1)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;

	fVar3 = 40000f;
	if (PED::_0xD5FE956C70FF370B(iParam1))
	{
		PED::_0x7DE9692C6F64CFE8(iParam1, false, 0, 0);
	}
	if (!aggregate.fme_challenges.func_1307(iParam0, 2048))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
		PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
		if (PED::IS_PED_ON_MOUNT(iParam1))
		{
			func_906(iParam0);
			return;
		}
		if (aggregate.fme_challenges.func_1307(iParam0, 2))
		{
			vVar0 = { func_856(iParam0) };
			func_1094(iParam0, &fVar3);
		}
		else
		{
			vVar0 = { func_778(iParam0) };
			func_1095(iParam0, &fVar3);
		}
		if (aggregate.annesburg.func_121(vVar0))
		{
			return;
		}
		func_1096(iParam0, vVar0, 3f, fVar3, 1048576000 /* Float: 0.25f */, 0);
		return;
	}
	else if (!aggregate.fme_challenges.func_1307(iParam0, 512) && aggregate.fme_challenges.func_1307(iParam0, 256))
	{
		bVar4 = func_1008(iParam0);
		if ((!ENTITY::IS_ENTITY_DEAD(iParam1) && !PED::IS_PED_INJURED(iParam1)) && !WEAPON::HAS_PED_GOT_WEAPON(iParam1, bVar4, 0, 1))
		{
			bVar4 = aggregate.fm_mission_controller.func_6958(iParam1, bVar4, 1, 1, 0, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			func_887(iParam0, bVar4, 0, 0, 0);
			return;
		}
	}
}

void func_896(int iParam0, int iParam1)
{
	if (!func_888(iParam0, iParam1))
	{
		return;
	}
	func_1097(iParam0, 0);
}

void func_897(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_888(iParam0, iParam1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1))
	{
		return;
	}
	iVar0 = func_776(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	func_1099(iParam0, iVar0, func_1098(iParam0));
}

void func_898(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_888(iParam0, iParam1))
	{
		return;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1))
	{
		return;
	}
	iVar0 = func_776(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	func_1101(iParam0, iVar0, func_1098(iParam0), func_1100(iParam0));
}

void func_899(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;

	if (!func_757(iParam0, &iVar0, &uVar1) || !func_758(iVar0))
	{
		return;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 4) || func_572(iVar0))
	{
		if (PED::_0xD5FE956C70FF370B(iParam1))
		{
			PED::_0x7DE9692C6F64CFE8(iParam1, false, 0, 0);
		}
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
	if (!PED::_0xD5FE956C70FF370B(iParam1) && func_1102(iParam0))
	{
		PED::_0x7DE9692C6F64CFE8(iParam1, true, 0, 0);
	}
	if (!func_178(iParam1))
	{
		bVar2 = func_23(iParam0);
		if (aggregate.binoculars.func_72(bVar2))
		{
			func_887(iParam0, bVar2, 1, 1, 1);
		}
	}
	vVar3 = { func_1103(iParam0) };
	if (aggregate.annesburg.func_121(vVar3))
	{
		vVar3 = { (Local_556.f_20.f_22[iParam0 /*19*/])->f_3 };
	}
	if (!func_1104(iParam0, &fVar6))
	{
		fVar6 = (Local_556.f_20.f_22[iParam0 /*19*/])->f_9;
	}
	func_1096(iParam0, vVar3, 1f, fVar6, 1048576000 /* Float: 0.25f */, 0);
}

void func_900(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar5;

	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1))
	{
		if (aggregate.fme_challenges.func_1307(iParam0, 16777216))
		{
			iVar0 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam1, 0, 3);
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) * Vector(3f, 3f, 3f) };
			if (((iVar0 != -1 && iVar0 != 255) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iVar1)))
			{
				vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false) };
			}
			PED::_0x463803429297117C(iParam1, vVar2, 3, 1);
		}
		else
		{
			PED::_0xF1C03A5352243A30(iParam1);
		}
	}
	if (((!PED::IS_PED_IN_COMBAT(iParam1, 0) && !func_635(iParam0, 5000)) && !aggregate.fme_challenges.func_1307(iParam0, 16777216)) && aggregate.la_alligator.func_203(iParam0, 67108864))
	{
		return;
	}
	if (PED::_0xD5FE956C70FF370B(iParam1))
	{
		PED::_0x7DE9692C6F64CFE8(iParam1, false, 0, 0);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
	iVar5 = 65;
	if (((!aggregate.fme_challenges.func_1307(iParam0, 16777216) && func_55((Local_17.f_2[iParam0 /*9*/])->f_2)) && aggregate.fme_challenges.func_1307(iParam0, 1)) && aggregate.fme_animal_tagging.func_384((Local_17.f_2[iParam0 /*9*/])->f_7) < 1300)
	{
		func_1105(iParam0, iVar5);
	}
	else
	{
		func_855(iParam0, iVar5);
	}
}

void func_901(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	iVar0 = 0;
	iVar1 = func_1106(iParam1, 20f);
	if (NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_1107(iParam0, iVar0);
	}
	else
	{
		func_1107(iParam0, 0);
	}
}

void func_902(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar10;

	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
	if (!aggregate.la_alligator.func_203(iParam0, 65536))
	{
		func_54(iParam0, &iVar5, 1);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1) && !TASK::_0x0C3CB2E600C8977D(iParam1, 0))
	{
		if (!func_1010(iParam1, 200f, &iVar3, &vVar0, &fVar4))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		}
		PED::_0xEEED8FAFEC331A70(iParam1, vVar0, 3);
	}
	if ((((!PED::IS_PED_ON_MOUNT(iParam1) && ENTITY::DOES_ENTITY_EXIST(iVar5)) && !PED::IS_PED_DEAD_OR_DYING(iVar5, true)) && PED::_IS_MOUNT_SEAT_FREE(iVar5, -1)) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar5, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false)) < 30f)
	{
		func_1108(iParam0, iVar5, 1077936128 /* Float: 3f */);
		return;
	}
	if (!func_1010(iParam1, 200f, &iVar3, &vVar0, &fVar4))
	{
		vVar0 = { (Local_556.f_20.f_22[iParam0 /*19*/])->f_3 };
		fVar4 = 200f;
	}
	if ((bParam2 && fVar4 < 18f) && !PED::IS_PED_ON_MOUNT(iParam1))
	{
		func_855(iParam0, 0);
		return;
	}
	iVar6 = 10518560;
	if ((((aggregate.fme_challenges.func_1307(iParam0, 8388608) && (Local_17.f_2[iParam0 /*9*/])->f_2 != 1824637041) && PED::IS_PED_HUMAN(iParam1)) && !func_769()) && !PED::IS_PED_ON_MOUNT(iParam1))
	{
		func_1107(iParam0, iVar3);
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, true) && !PED::IS_PED_ON_MOUNT(iParam1))
	{
		func_1109(iParam0, 64);
		return;
	}
	fVar10 = 40000f;
	if (PED::_0xD5FE956C70FF370B(iParam1))
	{
		PED::_0x7DE9692C6F64CFE8(iParam1, false, 0, 0);
	}
	if (!aggregate.fme_challenges.func_1307(iParam0, 2048))
	{
		if (aggregate.fme_challenges.func_1307(iParam0, 2))
		{
			vVar7 = { func_856(iParam0) };
			func_1094(iParam0, &fVar10);
		}
		else
		{
			vVar7 = { func_778(iParam0) };
			func_1095(iParam0, &fVar10);
		}
		if (aggregate.annesburg.func_121(vVar7))
		{
			return;
		}
		if (bParam2)
		{
			func_909(iParam0, vVar7, 3f, fVar10, 1048576000 /* Float: 0.25f */, 0);
		}
		else
		{
			func_1096(iParam0, vVar7, 3f, fVar10, 1048576000 /* Float: 0.25f */, 0);
		}
		return;
	}
	if (bParam2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			func_1110(iParam0, iVar3, -1f, iVar6);
		}
		else
		{
			func_1111(iParam0, vVar0, -1f, iVar6);
		}
		PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 0, true);
		return;
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			func_1112(iParam0, iVar3, -1f, iVar6);
		}
		else
		{
			func_910(iParam0, vVar0, -1f, iVar6);
		}
		PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 256, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam1, 4, true);
		return;
	}
}

void func_903(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (PED::_0xD5FE956C70FF370B(iParam1))
	{
		PED::_0x7DE9692C6F64CFE8(iParam1, false, 0, 0);
	}
	if (!aggregate.la_alligator.func_203(iParam0, 65536) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
	{
		iVar0 = NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, false);
	if (func_1011(iParam1, iVar0, 0))
	{
		func_1108(iParam0, iVar0, 1077936128 /* Float: 3f */);
		return;
	}
	if (((((Local_556.f_20.f_22[iParam0 /*19*/])->f_15 >= 0 && (Local_556.f_20.f_22[iParam0 /*19*/])->f_15 < 21) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_2[(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 /*9*/]))) && !PED::IS_PED_DEAD_OR_DYING(NETWORK::NET_TO_PED(&(Local_17.f_2[(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 /*9*/])), true)) && PED::IS_PED_ON_MOUNT(iParam1))
	{
		iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_2[(Local_556.f_20.f_22[iParam0 /*19*/])->f_15 /*9*/]));
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, 1);
		if (aggregate.barcustomer_interaction.func_46(iParam1, 1056466932))
		{
			func_1113(iParam0);
			return;
		}
		func_1088(iParam0, iVar1, (Local_556.f_20.f_22[iParam0 /*19*/])->f_6, 1065353216 /* Float: 1f */);
		return;
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, 0);
}

void func_904(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate.barcustomer_interaction.func_46(iParam1, -1672646357))
	{
		return;
	}
	if (!func_852(iParam0, &iVar0, &iVar1) || !func_153(iVar0, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
		return;
	}
	iVar2 = &Local_17.f_217[iVar0 /*2*/];
	if ((aggregate.fme_challenges.func_1307(iParam0, 268435456) && aggregate.fme_challenges.func_1307(iParam0, 2)) && func_153(iVar1, 0))
	{
		iVar0 = iVar1;
		iVar2 = &Local_17.f_217[iVar1 /*2*/];
	}
	if (!func_153(iVar0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
		return;
	}
	if ((OBJECT::HAS_PICKUP_BEEN_COLLECTED(iVar2) || !OBJECT::DOES_PICKUP_OBJECT_EXIST(iVar2)) || func_1012(iVar0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
		return;
	}
	func_174(11, iVar0, aggregate.dynamic_craft_scenario.func_194(0, 8), -1);
	return;
}

bool func_905(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	bool bVar5;

	if ((!func_121(&Var0, iParam0, iParam1) || !aggregate.fme_condor_egg.func_42(Var0, -1143761632, &bVar5, 0)) || !bVar5)
	{
		return false;
	}
	if (!aggregate.fme_supply_train.func_39(Var0, 1326664274, iParam2, 0))
	{
		*iParam2 = 0;
	}
	return true;
}

void func_906(int iParam0)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 501393341, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_DISMOUNT_ANIMAL(iVar0, 0, 0, 0, 0, 0);
}

void func_907(int iParam0)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 1345172471, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(iVar0, 200f);
}

bool func_908(int iParam0, int iParam1, float fParam2)
{
	struct<5> Var0;

	if (!func_121(&Var0, iParam0, iParam1) || !aggregate.fme_animal_tagging.func_142(Var0, 912480409, fParam2, 0))
	{
		return false;
	}
	return true;
}

void func_909(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, float fParam7)
{
	int iVar0;
	bool bVar1;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (!aggregate.barcustomer_interaction.func_46(iVar0, 713668775))
	{
		func_1096(iParam0, vParam1, fParam4, fParam5, fParam6, fParam7);
		return;
	}
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!WEAPON::_0x705BE297EEBDB95D(bVar1))
	{
		return;
	}
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_1113(iParam0);
	}
}

void func_910(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 518218985, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	iVar1 = 0;
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		iVar1 = PED::GET_MOUNT(iVar0);
	}
	TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar0, vParam1, 4, iParam5, iParam4, -1, iVar1);
}

char* func_911(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MpDefault";
		case 1:
			return "MpStealthHard";
		case 2:
			return "MpStealthHardDeaf";
		case 3:
			return "MpStealthEasy";
		case 4:
			return "MpAmbient";
		case 5:
			return "MpVehicleConvoy";
		case 6:
			return "MpDefaultNoShotFired";
		case 7:
			return "MpStealthHardNoShotFired";
		case 8:
			return "MpMissionGiver";
		case 9:
			return "MpHearingRangeReaction";
		default:
			break;
	}
	return "InvalidPreset";
}

bool func_912(int iParam0)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(&((Local_299[Local_556.f_1008 /*8*/])->f_4[iVar0]), iVar1);
}

bool func_913(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = EVENT::_0x796EECFF0C6D39BE(iParam1, 0, iParam2);
	switch (iVar0)
	{
		case joaat("event_shot_fired_bullet_impact"):
		case joaat("event_shot_fired_whizzed_by"):
		case joaat("event_responded_to_threat"):
		case -141209784:
			bVar3 = true;
			break;
		case joaat("event_gun_aimed_at"):
		case joaat("event_shocking_ped_shot"):
			bVar3 = true;
			bVar5 = true;
			break;
		case -1604965832:
		case joaat("event_shot_fired"):
			bVar3 = true;
			bVar4 = true;
			break;
	}
	if (!bVar3)
	{
		return false;
	}
	if (iVar0 == -1604965832 && (Local_17.f_2[iParam0 /*9*/])->f_4 == 5)
	{
		return false;
	}
	iVar1 = EVENT::_0x822A001BCEA5BD81(iParam1, iVar0, 0, iParam2);
	if (bVar4 || bVar5)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return false;
		}
		if (bVar4)
		{
			fVar2 = PED::_0x900CA00CE703E1E2(iParam1);
		}
		else if (bVar5)
		{
			fVar2 = PED::_0x2BA9D7BF629F920C(iParam1);
		}
		if (aggregate.dynamic_craft_scenario.func_370(iParam1, iVar1, 1, 0) > fVar2)
		{
			EVENT::_0x1A5C5D350068A673(iParam1, iParam2);
			return false;
		}
	}
	return true;
}

void func_914(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	MISC::SET_BIT(uParam1->f_4[iVar0], iVar1);
}

bool func_925(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int* iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_1122(iParam0) && !aggregate.fme_animal_tagging.func_134(1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(1))
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
			if (iParam1 != 2)
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(4096))
			{
				return false;
			}
			if (!aggregate.fme_animal_tagging.func_134(32))
			{
				return false;
			}
			if (aggregate.fishing_core.func_107(Local_556.f_584.f_335))
			{
				return false;
			}
			if (func_45())
			{
				if (!aggregate.fme_animal_tagging.func_134(262144))
				{
					return false;
				}
				if (Local_556.f_20.f_16 == 1047079933)
				{
					iVar0 = 0;
					while (iVar0 < 32)
					{
						iVar2 = &Local_17.f_234[iVar0 /*2*/];
						if (iVar2 == 255)
						{
						}
						else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
						{
						}
						else
						{
							*iParam4 = &Local_17.f_234[iVar0 /*2*/];
							return true;
						}
						iVar0++;
					}
					return false;
				}
				else
				{
					if (&Local_17.f_234[0 /*2*/] == 255)
					{
						return false;
					}
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_234[0 /*2*/])))
					{
						return false;
					}
					*iParam4 = &Local_17.f_234[0 /*2*/];
					return true;
				}
			}
			func_1123(2, iParam5);
			return true;
		case 4:
			if (bParam2)
			{
				return false;
			}
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_556.f_20 != 1657045547)
			{
				return false;
			}
			if (!aggregate.fme_animal_tagging.func_134(128))
			{
				return false;
			}
			if (BUILTIN::VDIST(Global_36, Local_556.f_20.f_10) > Local_556.f_20.f_13)
			{
				Local_556.f_1002 = 0;
				return false;
			}
			if (Local_556.f_1002 == 0)
			{
				Local_556.f_1002 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				return false;
			}
			else if (aggregate.fme_animal_tagging.func_384(Local_556.f_1002) < 30000)
			{
				return false;
			}
			Local_556.f_1002 = 0;
			return true;
		case 3:
			if (bParam2)
			{
				return false;
			}
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_556.f_20 != 1657045547)
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(128))
			{
				return false;
			}
			if (!MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23))
			{
				return false;
			}
			if (BUILTIN::VDIST(Global_36, Local_556.f_20.f_10) > Local_556.f_20.f_13)
			{
				return false;
			}
			func_1123(1, iParam5);
			return true;
		case 2:
			if (Local_556.f_20.f_16 != joaat("player"))
			{
				return false;
			}
			if (iParam1 != 4)
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(512))
			{
				return false;
			}
			if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 65536))
			{
				return false;
			}
			if (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
			{
				return false;
			}
			iVar1 = PLAYER::PLAYER_ID();
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (&Local_17.f_234[iVar0 /*2*/] == 255)
				{
				}
				else if (&Local_17.f_234[iVar0 /*2*/] == iVar1)
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_234[iVar0 /*2*/])))
				{
				}
				else if (!_NAMESPACE26::_0x3F59FE6F37869576(iVar1, &(Local_17.f_234[iVar0 /*2*/])))
				{
				}
				else
				{
					*iParam4 = &Local_17.f_234[iVar0 /*2*/];
					if (MISC::IS_STRING_NULL_OR_EMPTY(PLAYER::GET_PLAYER_NAME(*iParam4)))
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
		case 5:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_556.f_20 != 1657045547)
			{
				return false;
			}
			if (!aggregate.fme_animal_tagging.func_134(128))
			{
				return false;
			}
			if (!aggregate.fme_animal_tagging.func_134(1024))
			{
				return false;
			}
			if (!MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23))
			{
				return false;
			}
			aggregate.fme_animal_tagging.func_174(1024);
			func_1123(1, iParam5);
			return true;
		case 6:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_556.f_20 != 1657045547)
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(128))
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(2048))
			{
				return false;
			}
			if (!MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23))
			{
				return false;
			}
			func_1123(1, iParam5);
			return true;
		case 7:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_556.f_20 != 1657045547)
			{
				return false;
			}
			if (!aggregate.fme_animal_tagging.func_134(128))
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(8192))
			{
				return false;
			}
			if (!PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
			{
				return false;
			}
			return true;
		case 8:
			if (iParam1 != 2)
			{
				return false;
			}
			if (Local_556.f_20 != 349772825)
			{
				return false;
			}
			if (aggregate.fme_animal_tagging.func_134(262144))
			{
				return false;
			}
			iVar3 = 0;
			while (iVar3 < 21)
			{
				if (Local_17.f_2[iVar3 /*9*/])->f_2 != joaat("extra")
				{
				}
				else if (!aggregate.fme_challenges.func_1307(iVar3, 8) || aggregate.fme_challenges.func_1307(iVar3, 1))
				{
				}
				else if (!MAP::DOES_BLIP_EXIST(&(Local_556.f_584[iVar3])))
				{
				}
				else if (!func_52(iVar3, &iVar4, 1, 0))
				{
				}
				else if (aggregate.blackwater.func_175(ENTITY::GET_ENTITY_COORDS(iVar4, false, false), Global_36) > 50f)
				{
				}
				else
				{
					func_1123(3, iParam5);
					return true;
				}
				iVar3++;
			}
			return false;
		default:
			break;
	}
	return false;
}

int func_926(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_927(int iParam0)
{
	return 10000;
}

char* func_928(int iParam0, int iParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 1:
			switch (Local_556.f_20)
			{
				case 349772825:
					return "NET_AS_HELP_INTRO_STANDARD";
				case 1657045547:
					return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_INTRO_TRACKING", sParam2);
				case -590482787:
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_HELP_INTRO_PVP_PLAYER", func_1124(iParam1, joaat("COLOR_PURE_WHITE")));
				case -1711308722:
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_HELP_INTRO_PVP_POSSE", func_1125(Local_17.f_281, joaat("COLOR_PURE_WHITE")));
				default:
					break;
			}
			return "";
		case 2:
			return MISC::_CREATE_VAR_STRING(42, "NET_AS_HELP_ALLY_SELECTED", func_1124(iParam1, -963477619), func_1126(joaat("COLOR_RED")));
		case 3:
			if (Local_556.f_20.f_549 > 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_LAST_KNOWN_LOCATION_FOUND_PLURAL", sParam2);
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_LAST_KNOWN_LOCATION_FOUND", sParam2);
		case 4:
			return "NET_AS_HELP_TRACKING";
		case 5:
			if (Local_17.f_275 > 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_RETURN_TO_LAST_KNOWN_LOCATION_PLURAL", sParam2);
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_RETURN_TO_LAST_KNOWN_LOCATION", sParam2);
		case 6:
			if (Local_17.f_275 > 1)
			{
				return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_GO_TO_LAST_KNOWN_LOCATION_PLURAL", sParam2);
			}
			return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_GO_TO_LAST_KNOWN_LOCATION", sParam2);
		case 7:
			return "NET_AS_HELP_FOCUS_ON_TRAIL";
		case 8:
			return MISC::_CREATE_VAR_STRING(2, "NET_AS_HELP_STEALTH_AVOID_DETECTION", sParam2);
		default:
			break;
	}
	return "";
}

void func_929(char* sParam0, int iParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (bParam2)
	{
		aggregate.binoculars.func_17(1);
	}
	Local_556.f_584.f_333 = aggregate.camera_item.func_73(sParam0, iParam1, 0, 0, 0, 1);
}

bool func_930(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			*iParam1 = 512;
			return true;
		case 4:
			*iParam1 = 256;
			return true;
		case 3:
			*iParam1 = 128;
			return true;
		case 5:
			*iParam1 = 1024;
			return true;
		case 6:
			*iParam1 = 2048;
			return true;
		case 1:
			*iParam1 = 4096;
			return true;
		case 8:
			*iParam1 = 262144;
			return true;
		case 7:
			*iParam1 = 8192;
			return true;
		default:
			break;
	}
	return false;
}

bool func_931()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_548)
	{
		if (Local_17.f_2[iVar0 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (!func_428(iVar0, Local_299[Local_556.f_1008 /*8*/]))
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

int func_933()
{
	if (func_45())
	{
		if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 131072) || aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192))
		{
			return 1293773224;
		}
	}
	return -1103135225;
}

bool func_943(int iParam0)
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return false;
	}
	else if (!func_415(1))
	{
		return false;
	}
	if (aggregate.la_alligator.func_203(iParam0, 262144))
	{
		return false;
	}
	if (Local_17.f_2[iParam0 /*9*/])->f_2 != joaat("target")
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() > 5)
	{
		return false;
	}
	if (func_45())
	{
		return false;
	}
	if (!func_476(iParam0, 1, 1))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(65536) && !aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 1024))
	{
		return false;
	}
	if ((Local_556.f_20 == 1657045547 && func_426(iParam0)) && !func_428(iParam0, Local_299[Local_556.f_1008 /*8*/]))
	{
		return false;
	}
	return true;
}

void func_944(int iParam0)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(&(Local_556.f_584[iParam0])))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	Local_556.f_584[iParam0] = MAP::_0x23F74C2FDA6E7C61(408396114, iVar0);
	MAP::SET_BLIP_SPRITE(&(Local_556.f_584[iParam0]), -1103135225, true);
	MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 942020339);
	MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 580546400);
	MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 231194138);
	if (aggregate.la_alligator.func_203(iParam0, 16777216))
	{
		iVar1 = func_876(iParam0, iVar0, 1);
	}
	if (iVar1 != 0)
	{
		MAP::_0x9CB1A1623062F402(&(Local_556.f_584[iParam0]), HUD::_GET_LABEL_TEXT_BY_HASH(iVar1));
		MAP::_0x662D364ABF16DE2F(&(Local_556.f_584[iParam0]), 785247196);
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_556.f_584[iParam0]), func_1144());
	}
}

bool func_945(int iParam0)
{
	int iVar0;

	if (!func_415(1) || !aggregate.fme_animal_tagging.func_134(4))
	{
		return false;
	}
	if (Local_556.f_20 != 1657045547)
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(128))
	{
		return false;
	}
	if (func_45())
	{
		return false;
	}
	if (aggregate.fm_deathmatch_controller.func_2544() > 5)
	{
		return false;
	}
	if (Local_17.f_2[iParam0 /*9*/])->f_2 != joaat("target")
	{
		return false;
	}
	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		return false;
	}
	if (aggregate.fishing_core.func_39(iVar0, Global_36, 1) > 55f)
	{
		return false;
	}
	return true;
}

void func_946(int iParam0)
{
	if (aggregate.la_alligator.func_203(iParam0, 128))
	{
		aggregate.nb_animal_attack.func_589(2001176446, NETWORK::NET_TO_ENT(&(Local_17.f_2[iParam0 /*9*/])), 1);
		aggregate.la_alligator.func_225(iParam0, 128);
	}
	else if (func_1146())
	{
		aggregate.la_alligator.func_225(iParam0, 128);
	}
}

bool func_947(int iParam0)
{
	int iVar0;
	float fVar1;

	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return false;
	}
	else if (!func_415(1))
	{
		return false;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 4096))
	{
		return false;
	}
	if (Local_556.f_20 == 1657045547)
	{
		fVar1 = 90f;
	}
	else
	{
		fVar1 = 200f;
	}
	if (((func_55((Local_17.f_2[iParam0 /*9*/])->f_2) && func_294(iParam0)) && func_52(iParam0, &iVar0, 1, 0)) && BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) > fVar1)
	{
		return false;
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 != joaat("extra") && (Local_17.f_2[iParam0 /*9*/])->f_2 != 516423162)
	{
		return false;
	}
	if ((!aggregate.fme_challenges.func_1307(iParam0, 1) && !aggregate.fme_challenges.func_1307(iParam0, 8)) && !aggregate.fme_challenges.func_1307(iParam0, 1024))
	{
		return false;
	}
	if ((func_426(iParam0) && !func_428(iParam0, Local_299[Local_556.f_1008 /*8*/])) && !aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		return false;
	}
	if (!func_476(iParam0, 1, func_475((Local_17.f_2[iParam0 /*9*/])->f_2)))
	{
		return false;
	}
	return true;
}

bool func_948(int iParam0)
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 4))
	{
		return false;
	}
	if (!func_415(1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		return false;
	}
	if (func_1147(iParam0))
	{
		return false;
	}
	if (func_163(iParam0))
	{
		return false;
	}
	if (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	return true;
}

bool func_953(int iParam0)
{
	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192) && !aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 131072))
	{
		return false;
	}
	if (!func_415(1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		return false;
	}
	if (func_1147(iParam0))
	{
		return false;
	}
	if (func_163(iParam0))
	{
		return false;
	}
	if (aggregate.bandana.func_20(Local_299[Local_556.f_1008 /*8*/]) != 2)
	{
		return false;
	}
	return true;
}

bool func_954(int iParam0)
{
	int iVar0;

	if (!aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 8192))
	{
		return false;
	}
	if (!func_415(1))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(32))
	{
		return false;
	}
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
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!aggregate.fishing_core.func_34(Local_299[iVar0 /*8*/], 4))
	{
		return false;
	}
	return true;
}

void func_955(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_556.f_959), iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return;
	}
	aggregate.fme_escaped_convicts.func_174(iParam0, 1454004076);
	aggregate.fme_dead_drop.func_854(iParam0, -333142948);
	SCRIPTS::_0x31010318BA9897AC(&(Local_556.f_959), iParam0);
}

int func_956(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 408396114;
		case 1:
			return 408396114;
		case 3:
			return joaat("BLIP_STYLE_ENEMY");
		case 4:
			return 408396114;
		default:
			break;
	}
	return 0;
}

bool func_957(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 675509286; /* GXTEntry: "Companion" */
			return true;
		case 4:
			*iParam1 = -1103135225;
			return true;
		default:
			break;
	}
	return false;
}

char* func_958()
{
	return "NET_AS_BLIP_LAST_KNOWN_LOCATION";
}

bool func_959()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_548)
	{
		if (Local_17.f_2[iVar0 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (func_428(iVar0, Local_299[Local_556.f_1008 /*8*/]))
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

char* func_960()
{
	return "NET_AS_BLIP_SEARCH";
}

char* func_961()
{
	return "NET_AS_BLIP_GO_TO_AREA";
}

void func_962()
{
	if (!aggregate.fme_animal_tagging.func_134(16384) && !aggregate.fme_animal_tagging.func_134(32768))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_22))
	{
		MAP::_0xB059D7BD3D78C16F(Local_556.f_584.f_22, -1878373110);
	}
	if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23))
	{
		MAP::_0xB059D7BD3D78C16F(Local_556.f_584.f_23, -1878373110);
	}
	aggregate.fme_animal_tagging.func_174(32768);
	aggregate.fme_animal_tagging.func_174(16384);
}

void func_963()
{
	if (aggregate.fme_animal_tagging.func_134(32768))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23))
	{
		return;
	}
	MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_23, -1878373110);
	if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_22))
	{
		MAP::_0xB059D7BD3D78C16F(Local_556.f_584.f_22, -1878373110);
	}
	aggregate.fme_animal_tagging.func_174(16384);
	aggregate.fme_animal_tagging.func_174(32768);
}

void func_964()
{
	if (aggregate.fme_animal_tagging.func_134(16384))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_556.f_584.f_22))
	{
		return;
	}
	MAP::_0x662D364ABF16DE2F(Local_556.f_584.f_22, -1878373110);
	if (MAP::DOES_BLIP_EXIST(Local_556.f_584.f_23))
	{
		MAP::_0xB059D7BD3D78C16F(Local_556.f_584.f_23, -1878373110);
	}
	aggregate.fme_animal_tagging.func_174(32768);
	aggregate.fme_animal_tagging.func_174(16384);
}

bool func_965()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Local_17.f_2[iVar0 /*9*/])->f_2 != joaat("target")
		{
		}
		else if (!MAP::DOES_BLIP_EXIST(&(Local_556.f_584[iVar0])))
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

char* func_966()
{
	switch (Local_556.f_20.f_16)
	{
		case joaat("player"):
			return "NET_AS_SHARD_PLAYER";
		case 1047079933:
			return "NET_AS_SHARD_POSSE";
		default:
			break;
	}
	return "NET_AS_SHARD_STANDARD";
}

int func_967(char* sParam0, char* sParam1)
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

char* func_968(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	char* sVar3;

	iVar0 = func_148();
	bVar1 = func_45();
	func_306(iVar0 != 2, &sVar2, &sVar3);
	if (aggregate.fme_animal_tagging.func_134(8388608))
	{
		return "NET_AS_SHARD_BODY_OVER_ABANDONED";
	}
	if (aggregate.fishing_core.func_34(Local_299[Local_556.f_1008 /*8*/], 65536))
	{
		if (aggregate.fme_animal_tagging.func_134(8388608))
		{
			return "NET_AS_SHARD_BODY_FAIL_ABANDON_DISBAND_POSSE";
		}
		return "NET_AS_SHARD_BODY_FAIL_SWITCH_POSSE";
	}
	switch (iVar0)
	{
		case 2:
			switch (iParam0)
			{
				case 1:
					if (bVar1)
					{
						if (bParam1)
						{
							return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_WIN", aggregate.fme_animal_tagging.func_488(func_851(0), -5208416));
						}
						return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_WIN", aggregate.fme_animal_tagging.func_488(func_1152(), -5208416));
					}
					if (bParam1)
					{
						return "NET_AS_SHARD_BODY_STD_WIN_SINGLE";
					}
					return "NET_AS_SHARD_BODY_STD_WIN";
				case 0:
					if (bVar1)
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_PVP_OVER", sVar2, sVar3);
					}
					return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_STD_OVER", sVar2, sVar3);
				case 2:
					if (aggregate.fme_animal_tagging.func_134(131072))
					{
						return "NET_AS_SHARD_BODY_EXPIRED";
					}
					else if (bVar1 && !aggregate.fme_animal_tagging.func_134(4194304))
					{
						if (Local_556.f_20.f_16 == joaat("player"))
						{
							if (func_850(0))
							{
								return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER", aggregate.fme_animal_tagging.func_488(func_851(0), -5208416));
							}
							else
							{
								return "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER_GEN";
							}
						}
						else if (Local_556.f_20.f_16 == 1047079933)
						{
							if (func_1153())
							{
								return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE", aggregate.fme_animal_tagging.func_488(func_1152(), -5208416));
							}
							else
							{
								return "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE_GEN";
							}
						}
					}
					else
					{
						if (bVar1)
						{
							return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_PVP_OVER", sVar2, sVar3);
						}
						return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_STD_OVER", sVar2, sVar3);
					}
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					if (bParam1)
					{
						return "NET_AS_SHARD_BODY_STD_SECONDARY_WIN_SINGLE";
					}
					return "NET_AS_SHARD_BODY_STD_SECONDARY_WIN";
				case 0:
					return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_STD_SECONDARY_OVER", sVar2, sVar3);
				case 2:
					if (bParam1)
					{
						return "NET_AS_SHARD_BODY_STD_SECONDARY_FAIL_SINGLE";
					}
					return "NET_AS_SHARD_BODY_STD_SECONDARY_FAIL";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 1:
					if (Local_556.f_20.f_16 == 1047079933)
					{
						return "NET_AS_SHARD_BODY_PVP_TARGET_POSSE_WIN";
					}
					return "NET_AS_SHARD_BODY_PVP_TARGET_WIN";
				case 0:
					if (Local_556.f_20.f_16 == 1047079933)
					{
						return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_PVP_POSSE_OVER", sVar2, sVar3);
					}
					return "NET_AS_SHARD_BODY_PVP_TARGET_WIN";
				case 2:
					if (Local_556.f_20.f_16 == 1047079933)
					{
						return "NET_AS_SHARD_BODY_PVP_POSSE_FAIL";
					}
					return "NET_AS_SHARD_BODY_PVP_TARGET_FAIL";
				default:
					break;
			}
			break;
		case 4:
			if ((!aggregate.fme_animal_tagging.func_134(131072) && !aggregate.fme_animal_tagging.func_134(4194304)) && iParam0 != 1)
			{
				if (Local_556.f_20.f_16 == joaat("player"))
				{
					if (func_850(0))
					{
						return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER", aggregate.fme_animal_tagging.func_488(func_851(0), -963477619));
					}
					else
					{
						return "NET_AS_SHARD_BODY_PVP_FAIL_DC_PLAYER_GEN";
					}
				}
				else if (Local_556.f_20.f_16 == 1047079933)
				{
					if (func_1153())
					{
						return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE", aggregate.fme_animal_tagging.func_488(func_1152(), -963477619));
					}
					else
					{
						return "NET_AS_SHARD_BODY_PVP_FAIL_DC_POSSE_GEN";
					}
				}
			}
			switch (iParam0)
			{
				case 1:
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_ALLY_WIN", aggregate.fme_animal_tagging.func_488(func_851(0), -963477619));
				case 0:
					return MISC::_CREATE_VAR_STRING(2, "NET_AS_SHARD_BODY_PVP_POSSE_OVER", sVar2, sVar3);
				case 2:
					if (Local_556.f_20.f_16 == 1047079933)
					{
						return "NET_AS_SHARD_BODY_PVP_POSSE_FAIL";
					}
					return MISC::_CREATE_VAR_STRING(10, "NET_AS_SHARD_BODY_PVP_ALLY_FAIL", aggregate.fme_animal_tagging.func_488(func_851(0), -963477619));
				default:
					break;
			}
			break;
	}
	return "";
}

int func_969(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
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

char* func_970(int iParam0)
{
	bool bVar0;

	if (aggregate.fm_deathmatch_controller.func_962() == joaat("player"))
	{
		bVar0 = true;
	}
	else if (aggregate.fm_deathmatch_controller.func_962() == 1047079933)
	{
		bVar0 = false;
	}
	else
	{
		bVar0 = Local_556.f_20.f_549 <= true;
	}
	switch (iParam0)
	{
		case 14:
			return func_1157();
		case 1:
			return func_1158(0);
		case 2:
			return func_1158(1);
		case 5:
			return func_1159(bVar0);
		case 11:
			return func_1160();
		case 13:
			return func_1161();
		case 12:
			return func_1162();
		case 7:
			if (func_45())
			{
				return func_1163();
			}
			else if (Local_556.f_20 == 1657045547)
			{
				return func_1164(0);
			}
			else
			{
				return func_1164(0);
			}
			break;
		case 8:
			if (func_45())
			{
				return func_1163();
			}
			else if (Local_556.f_20 == 1657045547)
			{
				return func_1164(1);
			}
			else
			{
				return func_1164(1);
			}
			break;
	}
	return "";
}

int func_978(int iParam0)
{
	struct<2> Var0;

	if (func_119(&Var0) && func_120(&Var0, 1525953930, iParam0, 0))
	{
		return DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return 0;
}

int func_979(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	iVar0 = 1823139082;
	if (!func_119(&Var1) || !func_120(&Var1, 1606032220, iParam0, 0))
	{
		return iVar0;
	}
	aggregate.fme_animal_tagging.func_40(Var1, 456924499, &uVar6, 0);
	return iVar0;
}

bool func_980(int iParam0, var uParam1)
{
	if (func_119(uParam1))
	{
		uParam1->f_2 = 217995581;
		uParam1->f_3 = iParam0;
		return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1);
	}
	return false;
}

int func_985(int iParam0)
{
	switch (iParam0)
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
	return -1;
}

void func_988(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_1008(iParam0) != 0)
	{
		aggregate.net_assassination.func_458(iParam0, 256);
	}
	func_1166(&uParam1, iParam0, 460674190, 131072, 0);
	func_1166(&uParam1, iParam0, 1352900226, 8, 0);
	func_1166(&uParam1, iParam0, 566779387, 1024, 0);
	func_1166(&uParam1, iParam0, -234450476, 32, 0);
	func_1166(&uParam1, iParam0, -827172890, 128, 0);
	func_1166(&uParam1, iParam0, 1967834759, 4096, 0);
	func_1166(&uParam1, iParam0, -1834576753, 16, 0);
	func_1166(&uParam1, iParam0, -874477517, 8192, 0);
	func_1166(&uParam1, iParam0, 2090933413, 16384, 0);
	func_1166(&uParam1, iParam0, 258114362, 268435456, 0);
}

bool func_989(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && aggregate.net_assassination.func_109(Var0, 1590382703, uParam1, 0))
	{
		return true;
	}
	return false;
}

void func_990(int iParam0)
{
	func_1167(iParam0);
	PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, false);
}

bool func_991(int iParam0, int iParam1)
{
	struct<5> Var0;

	*iParam1 = -1;
	if (!func_116(iParam0, &Var0) || !aggregate.fme_supply_train.func_39(Var0, -412523681, iParam1, 0))
	{
		return false;
	}
	*iParam1 = aggregate.fishing_core.func_224(*iParam1, 0, 100);
	return true;
}

float func_992(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0) && aggregate.fme_animal_tagging.func_142(Var0, 1741894372, &uVar5, 0))
	{
		return uVar5;
	}
	return 60f;
}

float func_993(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_116(iParam0, &Var0) && aggregate.fme_animal_tagging.func_142(Var0, 1309785647, &uVar5, 0))
	{
		return uVar5;
	}
	return 50f;
}

bool func_994(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (!func_116(iParam0, &Var0) || !aggregate.fme_supply_train.func_39(Var0, -436871069, iParam1, 0))
	{
		return false;
	}
	*iParam1 = aggregate.doc_book.func_255(*iParam1, 0);
	return true;
}

bool func_995(int iParam0, float fParam1, float fParam2, float fParam3)
{
	struct<5> Var0;
	int iVar5;

	if (!func_116(iParam0, &Var0))
	{
		return false;
	}
	*fParam1 = 1f;
	*fParam2 = 1f;
	*fParam3 = 1f;
	if (aggregate.fme_animal_tagging.func_142(Var0, -608357025, fParam1, 0))
	{
		iVar5 = 1;
	}
	if (aggregate.fme_animal_tagging.func_142(Var0, 1793981541, fParam2, 0))
	{
		iVar5 = 1;
	}
	if (aggregate.fme_animal_tagging.func_142(Var0, -966540255, fParam3, 0))
	{
		iVar5 = 1;
	}
	return iVar5;
}

int func_999(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		default:
			break;
	}
	return 0;
}

bool func_1000(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if ((Local_17.f_2[iVar0 /*9*/])->f_2 != 0)
		{
		}
		else
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1001(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_52(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	(Local_17.f_2[iParam0 /*9*/])->f_2 = 516423162;
	(Local_17.f_2[iParam0 /*9*/])->f_4 = 0;
	aggregate.net_assassination.func_458(iParam0, 1);
	if (func_54(iParam0, &iVar1, 1))
	{
		func_990(iVar1);
	}
	if (aggregate.binoculars.func_72(bParam1))
	{
		aggregate.fm_mission_controller.func_6958(iVar0, bParam1, 1, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	else if (bParam1 == joaat("weapon_unarmed"))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, false, true);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
	PED::_0xD77AE48611B7B10A(iVar0, 0.48f);
	if (iParam4 >= 0)
	{
		PED::SET_PED_ACCURACY(iVar0, aggregate.fishing_core.func_224(iParam4, 0, 100));
	}
	else
	{
		PED::SET_PED_ACCURACY(iVar0, 20);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
	if (bParam2)
	{
		aggregate.net_assassination.func_458(iParam0, 128);
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
	if (iParam3 > -1 && iParam3 < Local_556.f_20.f_550)
	{
		PED::_0xFC3DB99C8144CD81(iVar0, &(Local_556.f_962[iParam3]), 0, 0, 0);
	}
	func_1169(iVar0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		PED::_0x712B2C2B2471B493(iVar0, 554382346);
		TASK::_0x3AD8EFF9703BE657(iVar0, 0f);
	}
	PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, true);
}

int func_1002(int iParam0, int iParam1)
{
	return (iParam0 * 10 + iParam1);
}

bool func_1004(int iParam0, int iParam1, float fParam2)
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

bool func_1005(vector3 vParam0, vector3 vParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = Local_556.f_20.f_546;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (!func_1172(*(Local_556.f_20.f_508[iVar0 /*6*/])))
		{
		}
		else if (!func_1173(vParam0, vParam3, *(Local_556.f_20.f_508[iVar0 /*6*/])))
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

bool func_1006(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_313(iParam0, &iVar0, &iVar1);
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!MISC::IS_BIT_SET(&((Local_299[iVar2 /*8*/])->f_4[iVar0]), iVar1))
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar2, 0, 1))
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

bool func_1007(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

int func_1008(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (!func_116(iParam0, &Var0))
	{
		return 0;
	}
	aggregate.fme_animal_tagging.func_40(Var0, -407841845, &uVar5, 0);
	return uVar5;
}

bool func_1009(int iParam0, int iParam1)
{
	if (PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	if (TASK::IS_PED_GETTING_UP(iParam1))
	{
		return true;
	}
	if (PED::IS_PED_BEING_STUNNED(iParam1, 0))
	{
		return true;
	}
	if (PED::_0x3AA24CCC0D451379(iParam1))
	{
		return true;
	}
	if (PED::_0x3BDFCF25B58B0415(iParam1))
	{
		return true;
	}
	if (PED::_0x9682F850056C9ADE(iParam1))
	{
		return true;
	}
	if (PED::IS_PED_INJURED(iParam1))
	{
		return true;
	}
	return false;
}

bool func_1010(int iParam0, float fParam1, int iParam2, float fParam3, float fParam4)
{
	return func_857(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), fParam1, iParam2, fParam3, fParam4);
}

bool func_1011(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return false;
	}
	if (bParam2)
	{
		if (aggregate.dynamic_craft_scenario.func_86(iParam0, iParam1, 0))
		{
			return true;
		}
	}
	if ((!PED::IS_PED_ON_MOUNT(iParam0) && PED::_IS_MOUNT_SEAT_FREE(iParam1, -1)) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), ENTITY::GET_ENTITY_COORDS(iParam0, false, false)) < 30f)
	{
		return true;
	}
	return false;
}

bool func_1012(int iParam0)
{
	if (!func_153(iParam0, 0))
	{
		return false;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 2))
	{
		return true;
	}
	return false;
}

int func_1013(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	if (iParam0 < 0 || iParam0 >= 60)
	{
		return 0;
	}
	*iParam1 = (iParam0 / 10);
	*iParam2 = (iParam0 - *iParam1 * 10);
	return 1;
}

int func_1024(int iParam0)
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

int func_1025(int iParam0, int iParam1, int iParam2)
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
	iParam2->f_3 = func_1185(Var4, joaat("trigger"));
	return 1;
}

void func_1026(var uParam0, int iParam1)
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

void func_1027(int iParam0, int iParam1)
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
	if (!func_576(iParam0, iVar2, &uVar0))
	{
		return;
	}
	if (STATS::STAT_ID_SET_INT(&uVar0, aggregate.net_assassination.func_1187(&uVar4, -15, 0, 0), true))
	{
	}
}

void func_1028(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (!func_1188(iParam0, iParam2, iParam1, &iVar0, &uVar1))
	{
		return;
	}
	aggregate.fme_challenges.func_1108(iVar0, 0, 0);
}

int func_1049(int iParam0)
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

int func_1050(int iParam0, int iParam1, int iParam2)
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
	iParam2->f_1 = func_1198(Var0);
	*iParam2 = func_1199(Var0);
	iParam2->f_2 = func_1200(Var0);
	iParam2->f_4 = func_1185(Var0, joaat("trigger"));
	switch (iParam2->f_2)
	{
		case joaat("int"):
			iParam2->f_3 = func_1201(Var0);
			break;
		default:
			return 0;
	}
	return 1;
}

void func_1051(var uParam0, int iParam1)
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

int func_1062(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(*uParam0);
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
	bVar1 = (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0) || bParam2);
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

char* func_1063(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (iParam1 == 4)
	{
		if ((func_55((Local_17.f_2[iParam0 /*9*/])->f_2) && (Local_556.f_20.f_22[iParam0 /*19*/])->f_12 != -1) && func_1213((Local_556.f_20.f_22[iParam0 /*19*/])->f_12, 0) > 1)
		{
			bVar0 = true;
		}
		return func_1214(iParam0, iParam4, bVar0, bParam2);
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 516423162)
	{
		return func_1215(iParam1);
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 8))
	{
		return func_1216(iParam1, bParam2);
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1024))
	{
		return func_1217(iParam1);
	}
	return func_1218(iParam1, (Local_17.f_2[iParam0 /*9*/])->f_2 == joaat("target"), bParam3, bParam2);
}

int func_1064(int iParam0, int iParam1)
{
	if (iParam1 == 4)
	{
		return joaat("speech_params_force_shouted_clear");
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 516423162)
	{
		return func_1219(iParam1);
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 8))
	{
		return func_1220(iParam1);
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1024))
	{
		return func_1221(iParam1);
	}
	return func_1222(iParam1);
}

int func_1066(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if ((Local_17.f_2[iVar0 /*9*/])->f_2 != joaat("extra") && (Local_17.f_2[iVar0 /*9*/])->f_2 != joaat("extra"))
		{
		}
		else if (!func_52(iVar0, &iVar4, 1, 0))
		{
		}
		else if (BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar4, false, false)) > 20f)
		{
		}
		else if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar4))
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1074(int iParam0)
{
	int iVar0;

	if (!aggregate.fme_animal_tagging.func_134(8192))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_556.f_20.f_553)
	{
		if (&Local_556.f_20.f_495[iVar0 /*2*/] != iParam0)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_1077(int iParam0)
{
	if (aggregate.la_alligator.func_203(iParam0, 1024))
	{
		return (Local_556.f_20.f_22[iParam0 /*19*/])->f_16;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 8))
	{
		return 30f;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1024))
	{
		return 25f;
	}
	return 15f;
}

float func_1078(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_DEAD_OR_DYING(iParam0, false))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			return 1.25f;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 1.4f;
		}
		if (PED::_0xD5FE956C70FF370B(iParam0))
		{
			if (TASK::IS_PED_STILL(iParam0))
			{
				return 0.7f;
			}
			return 0.8f;
		}
	}
	return 1f;
}

float func_1079(int iParam0)
{
	if (aggregate.fme_challenges.func_1307(iParam0, 8))
	{
		return 150f;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1024))
	{
		return 140f;
	}
	return 105f;
}

bool func_1080(int iParam0, int iParam1, float fParam2)
{
	if (fParam2 > PED::_0x900CA00CE703E1E2(iParam1))
	{
		return false;
	}
	if (Local_556.f_1016 != 0 && aggregate.fme_animal_tagging.func_384(Local_556.f_1016) < 1500)
	{
		return true;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		if (fParam2 > 8f)
		{
			return false;
		}
	}
	else if (fParam2 > (8f * 2f))
	{
		return false;
	}
	if ((PED::_0xD5FE956C70FF370B(iParam0) || PED::IS_PED_IN_COVER(iParam0, 0, 0)) || PED::IS_PED_GOING_INTO_COVER(iParam0))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_SPEED(iParam0) <= PED::_0x46BF2A810679D6E6(iParam0, 1f))
	{
		return false;
	}
	return true;
}

bool func_1081(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if ((Local_556.f_20.f_22[iVar0 /*19*/])->f_12 != iParam0)
		{
		}
		else if (!func_55((Local_17.f_2[iVar0 /*9*/])->f_2))
		{
		}
		else if (!func_709(iVar0, 255))
		{
		}
		else if (iParam1 != -1 && iParam1 == iVar0)
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

bool func_1082(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam2 && PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (PED::IS_PED_FLEEING(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_FATALLY_INJURED(iParam0))
	{
		return true;
	}
	if (!bParam2 && TASK::_0xF330A5C062B29BED(iParam0))
	{
		return true;
	}
	if (bParam1 && PED::_0x7583A9D35248B83F(iParam0))
	{
		return true;
	}
	if ((!bParam2 && !bParam3) && PED::_0x77525BBF433F2CD6(iParam0))
	{
		return true;
	}
	if (!bParam3)
	{
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("event_gun_aimed_at")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("event_shot_fired_bullet_impact")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("event_shot_fired_whizzed_by")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, -998673475))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("event_shot_fired")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("event_damage")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("event_shocking_dead_body")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("event_shocking_ped_knocked_into_by_player")))
		{
			return true;
		}
		if (PED::IS_PED_RESPONDING_TO_EVENT(iParam0, joaat("event_shocking_ped_shot")))
		{
			return true;
		}
	}
	return false;
}

bool func_1083(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	float fVar1;

	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 1824637041)
	{
		return false;
	}
	if ((Local_17.f_2[iParam0 /*9*/])->f_6 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE((Local_17.f_2[iParam0 /*9*/])->f_6))
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED((Local_17.f_2[iParam0 /*9*/])->f_6);
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	fVar1 = func_1077(iParam0);
	if (!aggregate.fme_challenges.func_1307(iParam0, 8) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(iParam1, true, false)) > fVar1)
	{
		return false;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iParam1) && !TASK::_0x0C3CB2E600C8977D(iParam1, 0))
	{
		PED::_0x463803429297117C(iParam1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 3, 1);
		func_1228(iParam0, iVar0);
		return true;
	}
	if (((aggregate.fme_challenges.func_1307(iParam0, 8) && !aggregate.fme_challenges.func_1307(iParam0, 16384)) && !(aggregate.fme_challenges.func_1307(iParam0, 131072) && bParam2 == joaat("weapon_melee_lantern"))) && func_1229(bParam3))
	{
		if (!func_1229(bParam2))
		{
			func_1228(iParam0, iVar0);
			func_887(iParam0, bParam3, 0, 1, 1);
			return true;
		}
		func_1230(iParam0, iVar0);
		return true;
	}
	func_1228(iParam0, iVar0);
	return true;
}

bool func_1084(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if ((Local_17.f_2[iParam0 /*9*/])->f_2 == 1824637041)
	{
		return false;
	}
	if (!aggregate.fme_challenges.func_1307(iParam0, 131072))
	{
		return false;
	}
	if (aggregate.fme_challenges.func_1307(iParam0, 1))
	{
		return false;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 7 && iVar0 <= 19)
	{
		if (bParam2 == joaat("weapon_revolver_cattleman"))
		{
			return false;
		}
		func_887(iParam0, joaat("weapon_revolver_cattleman"), 1, 1, 0);
		return true;
	}
	if (bParam2 == joaat("weapon_melee_lantern"))
	{
		return false;
	}
	func_887(iParam0, joaat("weapon_melee_lantern"), 1, 1, 0);
	return true;
}

void func_1085(int iParam0, int iParam1, vector3 vParam2, var uParam5, bool bParam6)
{
	int iVar0;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (!PED::_0x34D6AC1157C8226C(iVar0, iParam1) && aggregate.blackwater.func_175(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam2) > 0.8f)
	{
		if (func_1062(Local_17.f_2[iParam0 /*9*/], 713668775, 0) != 2)
		{
			return;
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vParam2, 1f, -1, 0.25f, false, 40000f);
		return;
	}
	if (func_1062(Local_17.f_2[iParam0 /*9*/], -1098463898, 0) != 2)
	{
		return;
	}
	if (PED::_0x34D6AC1157C8226C(iVar0, iParam1))
	{
		return;
	}
	if (bParam6 && func_178(iVar0))
	{
		if (func_1062(Local_17.f_2[iParam0 /*9*/], 716706914, 0) != 2)
		{
			return;
		}
		WEAPON::SET_CURRENT_PED_WEAPON(iVar0, joaat("weapon_unarmed"), false, 0, false, false);
		TASK::TASK_SWAP_WEAPON(iVar0, 1, 1, 0, 0);
		return;
	}
	TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, iParam1, vParam2, uParam5, 0, 1, 0, 0, -1082130432 /* Float: -1f */, 0);
}

void func_1086(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], joaat("SCRIPT_TASK_MELEE"), 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_MELEE(iVar0, iParam1, 0, 1, 1, 1065353216 /* Float: 1f */, 1, -1082130432 /* Float: -1f */);
}

void func_1087(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 923520851, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_WANDER_IN_AREA(iVar0, vParam1, fParam4, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 0);
}

void func_1088(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 1056466932, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iVar0, iParam1, vParam2, fParam5, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
}

bool func_1089(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (((func_116(iParam0, &Var0) && aggregate.fme_supply_train.func_39(Var0, 101317385, iParam1, 0)) && *iParam1 >= 0) && *iParam1 < 18)
	{
		return true;
	}
	return false;
}

int func_1090(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (func_116(iParam0, &Var0) && aggregate.fme_animal_tagging.func_40(Var0, -1463370342, &iVar5, 0))
	{
		return func_985(iVar5);
	}
	return -1;
}

void func_1091(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], -1794415470, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (AITRANSPORT::_0x619E63980BFC0096(iVar0, iParam1, 0))
	{
		return;
	}
	TASK::TASK_ENTER_VEHICLE(iVar0, iParam1, -1, iParam2, fParam3, 1, 0);
}

void func_1092(int iParam0, char[4] cParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 658540077, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iVar0, cParam1, 0, iParam2, -1, iParam3, 0, -1);
}

void func_1093(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], -1665583462, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::_TASK_MOVE_IN_TRAFFIC(iVar0, iParam1, 0, 0);
}

int func_1094(int iParam0, float fParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && aggregate.fme_animal_tagging.func_142(Var0, -728132736, fParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_1095(int iParam0, float fParam1)
{
	struct<5> Var0;

	if (func_116(iParam0, &Var0) && aggregate.fme_animal_tagging.func_142(Var0, 912480409, fParam1, 0))
	{
		return 1;
	}
	return 0;
}

void func_1096(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	int iVar0;
	vector3 vVar1;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 713668775, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (!bParam7)
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		if (MISC::ABSF((vVar1.z - vParam1.z)) < 2f && aggregate.blackwater.func_175(vVar1, vParam1) < 0.8f)
		{
			if ((fParam5 != 40000f && !func_1231(iVar0, fParam5, 1106247680 /* Float: 30f */)) && !aggregate.barcustomer_interaction.func_46(iVar0, 1920390111))
			{
				TASK::TASK_ACHIEVE_HEADING(iVar0, fParam5, 0);
			}
			return;
		}
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vParam1, fParam4, -1, fParam6, false, fParam5);
}

void func_1097(int iParam0, int iParam1)
{
	int iVar0;
	char cVar1[32];

	if (func_1062(Local_17.f_2[iParam0 /*9*/], -1253019028, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	StringCopy(&cVar1, func_127((Local_556.f_20.f_22[iParam0 /*19*/])->f_13), 32);
	TASK::TASK_PATROL(iVar0, &cVar1, iParam1, true, true);
}

Vector3 func_1098(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	func_116(iParam0, &Var0);
	aggregate.fme_animal_tagging.func_143(Var0, -261480992, &vVar5, 1);
	return vVar5;
}

void func_1099(int iParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[1];
	int iVar5;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	iVar1 = iParam1;
	if (aggregate.net_assassination.func_1232(iVar0, iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar0))
	{
		return;
	}
	if (func_1062(Local_17.f_2[iParam0 /*9*/], -76381094, 0) != 2)
	{
		return;
	}
	if (aggregate.annesburg.func_121(vParam2))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!TASK::_0x6EEAD6AF637DA752(vParam2, iVar1, 1f, 0))
	{
		iVar5 = 1;
		TASK::_0x345EC3B7EBDE1CB5(vParam2, 1f, &uVar3, iVar5);
		if (!TASK::_0x841475AC96E794D1(&(uVar3[0])) || TASK::_0xA92450B5AE687AAF(&(uVar3[0])) != iVar1)
		{
			return;
		}
		iVar2 = &uVar3[0];
	}
	else
	{
		iVar2 = TASK::_0xF533D68FF970D190(vParam2, iVar1, 1f, 0, 0);
		if (!TASK::_0x841475AC96E794D1(iVar2))
		{
			return;
		}
	}
	TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar2, 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
}

int func_1100(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	aggregate.fme_supply_train.func_39(Var0, 2069982589, &uVar5, 1);
	return uVar5;
}

void func_1101(int iParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	iVar1 = iParam1;
	if (aggregate.net_assassination.func_1232(iVar0, iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar0))
	{
		return;
	}
	if (func_1062(Local_17.f_2[iParam0 /*9*/], -76381094, 0) != 2)
	{
		return;
	}
	if (aggregate.annesburg.func_121(vParam2))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam5 < 0 || iParam5 >= 18)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_198[iParam5])) || !aggregate.la_alligator.func_203(iParam5, 2))
	{
		return;
	}
	iVar2 = NETWORK::_0xD08066E00D26C448(&(Local_17.f_198[iParam5]));
	if (!PROPSET::_DOES_PROPSET_EXIST(iVar2))
	{
		return;
	}
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0x0D322AEF8878B8FE(iVar2, iVar3);
	iVar7 = ITEMSET::GET_ITEMSET_SIZE(iVar3);
	fVar9 = 1f;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		iVar4 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar6, iVar3);
		if (iParam1 != TASK::_0xA92450B5AE687AAF(iVar4))
		{
		}
		else
		{
			fVar8 = BUILTIN::VDIST(TASK::_0xA8452DD321607029(iVar4, 1), vParam2);
			if (fVar8 > fVar9)
			{
			}
			else
			{
				fVar9 = fVar8;
				iVar5 = iVar4;
			}
		}
		iVar6++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar3);
	if (!TASK::_0x841475AC96E794D1(iVar5))
	{
		return;
	}
	TASK::_TASK_USE_SCENARIO_POINT(iVar0, iVar5, 0, 0, true, false, 0, false, -1082130432 /* Float: -1f */, 0);
}

bool func_1102(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	func_116(iParam0, &Var0);
	aggregate.fme_condor_egg.func_42(Var0, -401112943, &uVar5, 0);
	return uVar5;
}

Vector3 func_1103(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	func_116(iParam0, &Var0);
	aggregate.fme_animal_tagging.func_143(Var0, 307635954, &vVar5, 0);
	return vVar5;
}

bool func_1104(int iParam0, float fParam1)
{
	struct<5> Var0;

	if (!func_116(iParam0, &Var0) || !aggregate.fme_animal_tagging.func_142(Var0, -311657344, fParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (aggregate.fm_mission_controller.func_3166(iVar0, 0))
	{
		return;
	}
	iVar1 = func_1106(iVar0, 100f);
	if (iVar1 == 255)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iVar0, 0, 3));
	}
	if (NETWORK::_0x255A5EF65EDA9167(iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && aggregate.dynamic_craft_scenario.func_370(iVar0, iVar2, 1, 1) < 200f)
		{
			TASK::TASK_COMBAT_PED(iVar0, iVar2, 16384, 524288);
			return;
		}
	}
	TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 100f, 0, iParam1);
}

int func_1106(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar0 = fParam1;
	iVar4 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!aggregate.fishing_core.func_34(Local_299[iVar2 /*8*/], 4))
		{
		}
		else if (!aggregate.fme_condor_egg.func_1607(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			fVar1 = aggregate.dynamic_craft_scenario.func_370(iParam0, PLAYER::GET_PLAYER_PED(iVar3), 1, 1);
			if (fVar1 > fVar0)
			{
			}
			else
			{
				fVar0 = fVar1;
				iVar4 = iVar3;
			}
		}
		iVar2++;
	}
	return iVar4;
}

void func_1107(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 474215631, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_COWER(iVar0, -1, iParam1, 0);
}

void func_1108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 1868526510, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_MOUNT_ANIMAL(iVar0, iParam1, -1, -1, iParam2, 1, 0, 0);
}

void func_1109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], -828834893, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
	{
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && AITRANSPORT::_0x660639BC60157048(iVar0, iVar1))
	{
		return;
	}
	TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, iParam1);
}

void func_1110(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_1112(iParam0, iParam1, iParam2, iParam3 | 16777216 | 262144);
}

void func_1111(int iParam0, vector3 vParam1, float fParam4, int iParam5)
{
	func_910(iParam0, vParam1, fParam4, iParam5 | 16777216 | 262144);
}

void func_1112(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 518218985, 0) != 2)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = 0;
	if (!aggregate.la_alligator.func_203(iParam0, 65536) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST((Local_17.f_2[iParam0 /*9*/])->f_1))
	{
		iVar0 = NETWORK::NET_TO_PED((Local_17.f_2[iParam0 /*9*/])->f_1);
		if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			iVar0 = 0;
		}
	}
	iVar1 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	iVar2 = 0;
	if (PED::IS_PED_ON_MOUNT(iVar1))
	{
		iVar2 = PED::GET_MOUNT(iVar1);
	}
	TASK::_TASK_SMART_FLEE_STYLE_PED(iVar1, iParam1, 4, iParam3, iParam2, -1, iVar2);
}

void func_1113(int iParam0)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], -2117564886, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_COMBAT_HATED_TARGETS(iVar0, 3f);
}

bool func_1122(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

void func_1123(int iParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		aggregate.fme_escaped_convicts.func_736(iParam1);
	}
	*iParam1 = MAP::_0x3E593DF9C2962EC6(func_956(iParam0));
	if (func_957(iParam0, &iVar0))
	{
		MAP::SET_BLIP_SPRITE(*iParam1, iVar0, false);
	}
	if (func_1238(iParam0, &iVar1))
	{
		MAP::_0x662D364ABF16DE2F(*iParam1, iVar1);
	}
}

char* func_1124(int iParam0, int iParam1)
{
	return aggregate.aberdeenpigfarm.func_103(PLAYER::GET_PLAYER_NAME(iParam0), iParam1);
}

char* func_1125(int iParam0, int iParam1)
{
	return aggregate.aberdeenpigfarm.func_103(aggregate.fm_deathmatch_controller.func_2417(iParam0, 1, 0), iParam1);
}

char* func_1126(int iParam0)
{
	int iVar0;

	iVar0 = Local_17.f_279;
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0) && _NAMESPACE26::_0x149A2751AB66AC02(iVar0) > 1)
	{
		return func_1125(iVar0, iParam0);
	}
	return func_1124(Local_17.f_280, iParam0);
}

char* func_1144()
{
	return "NET_AS_BLIP_TARGET";
}

bool func_1146()
{
	if ((func_1253() % 9) != 0)
	{
		return false;
	}
	return true;
}

bool func_1147(int iParam0)
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(&(Local_17.f_234[iParam0 /*2*/])))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_234[iParam0 /*2*/])))
	{
		return true;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(&(Local_17.f_234[iParam0 /*2*/]));
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	return false;
}

char[] func_1152()
{
	return aggregate.fm_mission_controller.func_3989(&(Local_556.f_584.f_68));
}

bool func_1153()
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(aggregate.blackwater.func_268(Local_556.f_584.f_68));
}

char* func_1157()
{
	var uVar0;

	if (func_1254(&uVar0))
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_GO_TO_AREA_SPECIFIC", aggregate.fm_mission_controller.func_3989(&uVar0));
	}
	return "NET_AS_OBJ_GO_TO_AREA";
}

char* func_1158(bool bParam0)
{
	if (bParam0)
	{
		return "NET_AS_OBJ_FIND_TARGETS_ST";
	}
	return "NET_AS_OBJ_FIND_TARGETS";
}

char* func_1159(bool bParam0)
{
	if (bParam0)
	{
		return "NET_AS_OBJ_PROTECT_TARGETS_ST";
	}
	return "NET_AS_OBJ_PROTECT_TARGETS";
}

char* func_1160()
{
	bool bVar0;

	bVar0 = true;
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279) && _NAMESPACE26::_0x149A2751AB66AC02(Local_17.f_279) > 1)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_PLAYER_TARGET_SURVIVE", aggregate.aberdeenpigfarm.func_103(PLAYER::GET_PLAYER_NAME(Local_17.f_280), joaat("COLOR_RED")));
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_PLAYER_TARGET_SURVIVE", aggregate.aberdeenpigfarm.func_103(aggregate.fm_deathmatch_controller.func_2417(Local_17.f_279, 1, 0), joaat("COLOR_RED")));
}

char* func_1161()
{
	int iVar0;
	int iVar1;

	iVar0 = 255;
	if (Local_556.f_20.f_16 == 1047079933)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (&Local_17.f_234[iVar1 /*2*/] == 255)
			{
			}
			else if (func_163(iVar1))
			{
			}
			else
			{
				iVar0 = &Local_17.f_234[iVar1 /*2*/];
			}
			else
			{
				iVar1++;
			}
		}
	}
	else
	{
		iVar0 = &Local_17.f_234[0 /*2*/];
	}
	if (NETWORK::_0x255A5EF65EDA9167(iVar0) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_PLAYER_TARGET_HELP_SPECIFIC", aggregate.aberdeenpigfarm.func_103(PLAYER::GET_PLAYER_NAME(iVar0), -963477619));
	}
	return "NET_AS_OBJ_PLAYER_TARGET_HELP";
}

char* func_1162()
{
	bool bVar0;

	bVar0 = true;
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Local_17.f_279) && _NAMESPACE26::_0x149A2751AB66AC02(Local_17.f_279) > 1)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_POSSE_TARGET_HELP", aggregate.aberdeenpigfarm.func_103(PLAYER::GET_PLAYER_NAME(Local_17.f_280), joaat("COLOR_RED")));
	}
	return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_POSSE_TARGET_HELP", aggregate.aberdeenpigfarm.func_103(aggregate.fm_deathmatch_controller.func_2417(Local_17.f_279, 1, 0), joaat("COLOR_RED")));
}

char* func_1163()
{
	if (Local_556.f_20.f_16 == joaat("player"))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Local_17.f_234[0 /*2*/])))
		{
			return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_ASSASSINATE_PVP", aggregate.aberdeenpigfarm.func_103(PLAYER::GET_PLAYER_NAME(&(Local_17.f_234[0 /*2*/])), -5208416));
		}
	}
	else if (Local_556.f_20.f_16 == 1047079933)
	{
		if (Local_17.f_281 != 0 && _NAMESPACE26::_0x0F99F6436528A089(Local_17.f_281))
		{
			return MISC::_CREATE_VAR_STRING(10, "NET_AS_OBJ_ASSASSINATE_PVP", aggregate.aberdeenpigfarm.func_103(aggregate.fm_deathmatch_controller.func_2417(Local_17.f_281, 1, 0), -5208416));
		}
	}
	return "";
}

char* func_1164(bool bParam0)
{
	if (bParam0)
	{
		return "NET_AS_OBJ_KILL_NONSTEALTH_TARGET_ST";
	}
	return "NET_AS_OBJ_KILL_NONSTEALTH_TARGET";
}

void func_1166(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;

	bVar0 = iParam4;
	aggregate.fme_condor_egg.func_42(*uParam0, iParam2, &bVar0, 0);
	if (bVar0)
	{
		aggregate.net_assassination.func_458(iParam1, iParam3);
	}
}

void func_1167(int iParam0)
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

void func_1169(int iParam0)
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

bool func_1172(struct<4> Param0, var uParam4, var uParam5)
{
	if ((Param0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return false;
	}
	if ((Param0.f_3 == 0f && Param0.f_3.f_1 == 0f) && Param0.f_3.f_2 == 0f)
	{
		return false;
	}
	return true;
}

int func_1173(vector3 vParam0, vector3 vParam3, struct<4> Param6, var uParam10, var uParam11)
{
	if (vParam0.z > Param6.f_2 && vParam0.z > Param6.f_3.f_2)
	{
		return 0;
	}
	if (vParam0.z < Param6.f_2 && vParam0.z < Param6.f_3.f_2)
	{
		return 0;
	}
	if (vParam3.z > Param6.f_2 && vParam3.z > Param6.f_3.f_2)
	{
		return 0;
	}
	if (vParam3.z < Param6.f_2 && vParam3.z < Param6.f_3.f_2)
	{
		return 0;
	}
	return func_1258(vParam0, vParam3, Param6, Param6.f_3);
}

int func_1185(struct<5> Param0, int iParam5)
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
					iVar4 = func_1262(iVar2);
					break;
			}
			uVar3 = (uVar3 || iVar4);
		}
		iVar0++;
	}
	return uVar3;
}

bool func_1188(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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

var func_1198(struct<5> Param0)
{
	return aggregate.flow_controller.func_446(Param0, 42, 1);
}

var func_1199(struct<5> Param0)
{
	return aggregate.flow_controller.func_446(Param0, 41, 1);
}

var func_1200(struct<5> Param0)
{
	return aggregate.flow_controller.func_446(Param0, 43, 1);
}

var func_1201(struct<5> Param0)
{
	return aggregate.net_assassination.func_1265(Param0, 44, 1);
}

int func_1213(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 21)
	{
		if ((Local_17.f_2[iVar0 /*9*/])->f_2 == 0 || (Local_17.f_2[iVar0 /*9*/])->f_2 == 1583594396)
		{
		}
		else if (!func_55((Local_17.f_2[iVar0 /*9*/])->f_2))
		{
		}
		else if ((Local_556.f_20.f_22[iVar0 /*19*/])->f_12 != iParam0)
		{
		}
		else if (bParam1 && aggregate.fme_challenges.func_1307(iVar0, 1))
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

char* func_1214(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam1)
	{
		case 12:
			if (aggregate.la_alligator.func_203(iParam0, 67108864))
			{
				return "GENERIC_SHOCKED_HIGH";
			}
			if (bParam2)
			{
				if (bParam3)
				{
					return "PANIC_COMMUNICATE";
				}
				return "CALL_FOR_SUPPORT";
			}
		case 3:
		case 9:
		case 10:
		case 11:
			if (aggregate.fme_challenges.func_1307(iParam0, 4096))
			{
				return "PANIC_HELP";
			}
			return "OPENS_FIRE";
		case 2:
			if (bParam3 || aggregate.fme_challenges.func_1307(iParam0, 4096))
			{
				return "GENERIC_SHOCKED_HIGH";
			}
			return "OPENS_FIRE";
		case 4:
			if (bParam3 || aggregate.fme_challenges.func_1307(iParam0, 4096))
			{
				return "GENERIC_SHOCKED_HIGH";
			}
			return "FOUND_BODY";
		case 6:
			return "ARRIVAL_COMBAT_NEUTRAL";
		case 7:
			return "CALLOUT_PROTECT_BOSS";
		case 5:
			if (bParam3 || aggregate.fme_challenges.func_1307(iParam0, 4096))
			{
				return "GENERIC_CURSE_HIGH";
			}
			return "CALL_FOR_SUPPORT_RESPONSE";
		default:
			break;
	}
	return "";
}

char* func_1215(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return "GROUP_UP";
		case 5:
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

char* func_1216(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "TIME_TO_GO";
			}
			return "WHO_GOES_THERE";
		case 1:
			if (bParam1)
			{
				return "GET_LOST";
			}
			return "LEAVE_NOW";
		case 2:
			return "FINAL_WARNING";
		case 3:
			return "OPENS_FIRE";
		case 5:
			if (bParam1)
			{
				return "PANIC_HELP";
			}
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

char* func_1217(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEAVE_NOW";
		case 3:
			return "OPENS_FIRE";
		case 5:
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

char* func_1218(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				if (bParam3)
				{
					return "GUN_AVOID";
				}
				return "PLAYER_WEAPON_EQUIPPED";
			}
			return "GET_OUT";
		case 1:
			if (bParam3)
			{
				return "DONT_BE_STUPID";
			}
			return "TIME_TO_GO";
		case 2:
			if (bParam3)
			{
				return "WHATS_YOUR_PROBLEM";
			}
			return "PLAYER_STARING";
		case 3:
			if (bParam1)
			{
				return "GET_AWAY_FROM_ME";
			}
			return "GENERIC_FRIGHTENED_HIGH";
		case 5:
			if (bParam3)
			{
				return "PANIC_HELP";
			}
			return "COMBAT_FLEE";
		default:
			break;
	}
	return "";
}

int func_1219(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return joaat("speech_params_force_shouted_clear");
		default:
			break;
	}
	return joaat("speech_params_force_normal_clear");
}

int func_1220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return joaat("speech_params_force_shouted_clear");
		default:
			break;
	}
	return joaat("speech_params_force_normal_clear");
}

int func_1221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return joaat("speech_params_force_shouted_clear");
		default:
			break;
	}
	return joaat("speech_params_force_normal_clear");
}

int func_1222(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return joaat("speech_params_force_normal_clear");
		case 3:
			return joaat("speech_params_force_shouted_clear");
		default:
			break;
	}
	return joaat("speech_params_force_normal_clear");
}

void func_1228(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], -875674219, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, iParam1, -1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
}

bool func_1229(bool bParam0)
{
	if (!aggregate.binoculars.func_72(bParam0))
	{
		return false;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0))
	{
		return false;
	}
	if (bParam0 == joaat("weapon_melee_lantern"))
	{
		return false;
	}
	return true;
}

void func_1230(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_1062(Local_17.f_2[iParam0 /*9*/], 1630799643, 0) != 2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_2[iParam0 /*9*/]));
	iVar1 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, 716706914, 0);
	if (iVar1 == 1 || iVar1 == 0)
	{
		return;
	}
	TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, iParam1, 30000, 0, 1);
}

bool func_1231(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
	fVar0 = (fParam1 + (fParam2 / 2f));
	if (fVar0 > 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	fVar1 = (fParam1 - (fParam2 / 2f));
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fVar2 < fVar0 && fVar2 > fVar1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (fVar2 < fVar0 || fVar2 > fVar1)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_1238(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			*iParam1 = -662251075;
			return true;
		case 4:
			*iParam1 = 942020339;
			return true;
		default:
			break;
	}
	return false;
}

int func_1253()
{
	int iVar0;

	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Local_556.f_1005, NETWORK::GET_NETWORK_TIME_ACCURATE()));
	return (iVar0 / 1000);
}

bool func_1254(var uParam0)
{
	struct<5> Var0;

	if (!func_119(&Var0) || !aggregate.net_assassination.func_109(Var0, -1893679960, uParam0, 0))
	{
		return false;
	}
	return true;
}

int func_1258(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1304(vParam0, vParam3, vParam6);
	iVar1 = func_1304(vParam0, vParam3, vParam9);
	iVar2 = func_1304(vParam6, vParam9, vParam0);
	iVar3 = func_1304(vParam6, vParam9, vParam3);
	if (iVar0 != iVar1 && iVar2 != iVar3)
	{
		return 1;
	}
	return 0;
}

int func_1262(int iParam0)
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

int func_1304(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	float fVar0;

	fVar0 = (((Param3.f_1 - Param0.f_1) * (Param6 - Param3)) - ((Param3 - Param0) * (Param6.f_1 - Param3.f_1)));
	if (fVar0 == 0f)
	{
		return 0;
	}
	if (fVar0 > 0f)
	{
		return 1;
	}
	return 2;
}

