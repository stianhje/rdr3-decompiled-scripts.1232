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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = -1;
	var uLocal_24 = -1;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = -1;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	func_1();
	func_2(&uLocal_21, &uScriptParam_0);
	while (!aggregate.aberdeenpigfarm.func_49(1, 1) && func_4(&uLocal_21))
	{
		BUILTIN::WAIT(0);
	}
	func_5(&uLocal_21);
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0x4AA5EA1EDFB25786(0);
	BRAIN::_0xA6AC35DB4A7957A8(99999);
}

void func_2(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = { uParam1->f_2 };
	uParam0->f_6 = BRAIN::_0x6818D1A194E29983();
}

bool func_4(var uParam0)
{
	if (func_6(uParam0))
	{
		return false;
	}
	if (func_7(uParam0))
	{
		func_8(uParam0->f_6);
		return true;
	}
	if (func_9(uParam0))
	{
		func_10(uParam0->f_6);
		return true;
	}
	func_11(uParam0);
	func_12(uParam0);
	if (func_13(*uParam0))
	{
		aggregate.fm_deathmatch_controller.func_755(uParam0);
	}
	else if (func_15(*uParam0))
	{
		aggregate.fm_deathmatch_controller.func_755(uParam0);
	}
	return true;
}

void func_5(var uParam0)
{
	aggregate.annesburg.func_218(&(uParam0->f_11), 1, 1);
	if (MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		return true;
	}
	return false;
}

bool func_7(var uParam0)
{
	if (aggregate.fishing_core.func_34(uParam0, 1))
	{
		return true;
	}
	else if (aggregate.aberdeenpigfarm.func_45() != 0)
	{
		return true;
	}
	else if ((Global_1048576 || Global_2883584) // PointerArith)
	{
		return true;
	}
	else if (&Global_1048577)
	{
		return true;
	}
	else if (aggregate.aberdeenpigfarm.func_57(aggregate.aberdeenpigfarm.func_56(0)) == 7)
	{
		return true;
	}
	return false;
}

int func_8(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		ENTITY::DELETE_ENTITY(&iParam0);
		return 1;
	}
	return 0;
}

bool func_9(var uParam0)
{
	if (func_13(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), 0, 0))
		{
			return true;
		}
	}
	else if (func_15(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
		{
			return true;
		}
	}
	return false;
}

int func_10(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iParam0);
		return 1;
	}
	return 0;
}

void func_11(var uParam0)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == -507840394)
		{
			Var1 = { Var5 };
			SCRIPTS::GET_EVENT_DATA(1, iVar0, &Var1, 4);
			if (Var1 == 18)
			{
				func_22(uParam0, iVar0);
			}
		}
		iVar0++;
	}
}

void func_12(var uParam0)
{
	int iVar0;

	if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_8)))
	{
		aggregate.fme_animal_tagging.func_1407(&(uParam0->f_8));
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_6))
	{
		if (aggregate.fme_animal_tagging.func_181(&(uParam0->f_8)) > 7000)
		{
			if (!func_26(uParam0))
			{
				func_27(uParam0->f_6, NETWORK::GET_NETWORK_TIME_ACCURATE());
			}
			else
			{
				iVar0 = aggregate.net_entity_brain.func_28(uParam0->f_6);
				if (uParam0->f_5 != iVar0)
				{
					uParam0->f_5 = iVar0;
				}
				else
				{
					aggregate.fme_animal_tagging.func_1147(uParam0, 1);
				}
			}
			aggregate.fme_animal_tagging.func_290(&(uParam0->f_8));
		}
	}
	else if (aggregate.fme_animal_tagging.func_181(&(uParam0->f_8)) > 3000)
	{
		if (!func_26(uParam0))
		{
			func_31(uParam0->f_6, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
		aggregate.fme_animal_tagging.func_290(&(uParam0->f_8));
	}
}

bool func_13(int iParam0)
{
	return (iParam0 >= 1 && iParam0 <= 1);
}

bool func_15(int iParam0)
{
	return (iParam0 >= 2 && iParam0 <= 2);
}

void func_22(var uParam0, int iParam1)
{
	struct<11> Var0;

	if (SCRIPTS::GET_EVENT_DATA(1, iParam1, &Var0, 12))
	{
		if (Var0.f_5 == *uParam0 && Var0.f_6 == uParam0->f_1)
		{
			switch (Var0.f_4)
			{
				case 0:
					func_40(uParam0->f_6, Var0.f_9);
					break;
				case 1:
					func_41(uParam0->f_6, Var0.f_9);
					break;
				case 2:
					func_27(uParam0->f_6, Var0.f_10);
					break;
				case 3:
					func_42(uParam0->f_6, Var0.f_10);
					break;
				case 4:
					func_43(uParam0->f_6, Var0.f_8);
					break;
				case 5:
					func_8(uParam0->f_6);
					break;
				case 6:
					func_10(uParam0->f_6);
					break;
			}
		}
	}
}

bool func_26(var uParam0)
{
	if (aggregate.fishing_core.func_34(uParam0, 2) || aggregate.fishing_core.func_34(uParam0, 4))
	{
		return false;
	}
	if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_48(*uParam0))
	{
		return false;
	}
	if (aggregate.aberdeenpigfarm.func_158(uParam0->f_2) && (aggregate.flow_controller.func_170(uParam0->f_2) || aggregate.flow_controller.func_169(uParam0->f_2)))
	{
		return false;
	}
	return true;
}

bool func_27(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (aggregate.net_entity_brain.func_28(iParam0) != iParam1)
		{
			DECORATOR::DECOR_SET_INT(iParam0, aggregate.net_entity_brain.func_52(), iParam1);
		}
		return true;
	}
	return false;
}

void func_31(int iParam0, int iParam1)
{
	struct<11> Var0;

	if (!func_27(iParam0, iParam1))
	{
		Var0.f_4 = 2;
		Var0.f_5 = aggregate.net_entity_brain.func_28(iParam0);
		Var0.f_6 = aggregate.net_entity_brain.func_28(iParam0);
		Var0.f_10 = iParam1;
		func_57(&Var0, aggregate.dynamic_craft_scenario.func_194(0, 8));
	}
}

void func_32(var uParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_6);
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(Global_35, false) == iVar0)
		{
			if (!aggregate.fishing_core.func_34(uParam0, 4))
			{
				aggregate.fme_animal_tagging.func_1147(uParam0, 4);
			}
			if (VEHICLE::_0x2963B5C1637E8A27(iVar0) == Global_35)
			{
				if (!aggregate.fishing_core.func_34(uParam0, 8))
				{
					aggregate.fme_animal_tagging.func_1147(uParam0, 8);
				}
			}
			else if (aggregate.fishing_core.func_34(uParam0, 8))
			{
				aggregate.fme_animal_tagging.func_1147(uParam0, 8);
			}
		}
		else
		{
			if (aggregate.fishing_core.func_34(uParam0, 4))
			{
				aggregate.fme_animal_tagging.func_1147(uParam0, 4);
			}
			if (aggregate.fishing_core.func_34(uParam0, 8))
			{
				aggregate.fme_animal_tagging.func_1147(uParam0, 8);
			}
		}
	}
	else
	{
		if (aggregate.fishing_core.func_34(uParam0, 4))
		{
			aggregate.fme_animal_tagging.func_1147(uParam0, 4);
		}
		if (aggregate.fishing_core.func_34(uParam0, 8))
		{
			aggregate.fme_animal_tagging.func_1147(uParam0, 8);
		}
	}
}

void func_33(var uParam0)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		if (func_59(uParam0))
		{
			uParam0->f_7 = MAP::_0x23F74C2FDA6E7C61(203020899, uParam0->f_6);
			MAP::SET_BLIP_SPRITE(uParam0->f_7, 874255393 /* GXTEntry: "Wagon" */, true);
		}
	}
	else if (!func_59(uParam0))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}
}

void func_34(var uParam0)
{
	if (PED::_0xB676EFDA03DADA52(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), 0) == Global_35)
	{
		if (!aggregate.fishing_core.func_34(uParam0, 4))
		{
			aggregate.fme_challenges.func_1518(uParam0);
		}
	}
	else if (aggregate.fishing_core.func_34(uParam0, 4))
	{
		aggregate.fme_challenges.func_1518(uParam0);
	}
}

void func_35(var uParam0)
{
	if (aggregate.fishing_core.func_34(uParam0, 4) && !aggregate.fishing_core.func_34(uParam0, 32))
	{
		aggregate.fme_animal_tagging.func_1147(uParam0, 32);
	}
	else if (!aggregate.fishing_core.func_34(uParam0, 4))
	{
		aggregate.fme_animal_tagging.func_1147(uParam0, 32);
	}
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_7))
	{
		if (func_62(uParam0))
		{
			uParam0->f_7 = MAP::_0x23F74C2FDA6E7C61(203020899, uParam0->f_6);
			MAP::SET_BLIP_SPRITE(uParam0->f_7, -643888085 /* GXTEntry: "Horse" */, true);
		}
	}
	else if (!func_62(uParam0))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_7));
	}
}

int func_40(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_64(iParam0) != bParam1)
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, aggregate.net_entity_brain.func_65(), bParam1);
		}
		return 1;
	}
	return 0;
}

int func_41(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_66(iParam0) != bParam1)
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, aggregate.net_entity_brain.func_67(), bParam1);
			if (TASK::_0x0CCFE72B43C9CF96(iParam0))
			{
				ENTITY::_0x18FF3110CF47115D(iParam0, 2, !bParam1);
				ENTITY::_0x18FF3110CF47115D(iParam0, 3, !bParam1);
				ENTITY::_0x18FF3110CF47115D(iParam0, 11, !bParam1);
				ENTITY::_0x18FF3110CF47115D(iParam0, 12, !bParam1);
			}
		}
		return 1;
	}
	return 0;
}

int func_42(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (aggregate.net_entity_brain.func_28(iParam0) != iParam1)
		{
			DECORATOR::DECOR_SET_INT(iParam0, aggregate.net_entity_brain.func_69(), iParam1);
		}
		return 1;
	}
	return 0;
}

int func_43(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (func_70(iParam0) != iParam1)
		{
			if (iParam1 == 255)
			{
			}
			DECORATOR::_DECOR_SET_UINT8(iParam0, aggregate.net_entity_brain.func_71(), iParam1);
		}
		return 1;
	}
	return 0;
}

float func_48(int iParam0)
{
	if (func_13(iParam0))
	{
		return func_74();
	}
	else if (func_15(iParam0))
	{
		return func_75();
	}
	return 0f;
}

void func_57(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 18;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 11, &uParam1);
}

bool func_59(var uParam0)
{
	if (*uParam0 == 1)
	{
		return ((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !func_64(uParam0->f_6)) && !aggregate.fishing_core.func_34(uParam0, 4)) && BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_74()) && aggregate.flow_controller.func_169(uParam0->f_2));
	}
	return false;
}

bool func_62(var uParam0)
{
	return ((((ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !func_64(uParam0->f_6)) && !aggregate.fishing_core.func_34(uParam0, 4)) && BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false)) < func_75()) && aggregate.flow_controller.func_169(uParam0->f_2));
}

bool func_64(int iParam0)
{
	return ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, aggregate.net_entity_brain.func_65())) && DECORATOR::DECOR_GET_BOOL(iParam0, aggregate.net_entity_brain.func_65()));
}

bool func_66(int iParam0)
{
	return ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, aggregate.net_entity_brain.func_67())) && DECORATOR::DECOR_GET_BOOL(iParam0, aggregate.net_entity_brain.func_67()));
}

int func_70(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !DECORATOR::DECOR_EXIST_ON(iParam0, aggregate.net_entity_brain.func_71()))
	{
		return 255;
	}
	return DECORATOR::_DECOR_GET_UINT8(iParam0, aggregate.net_entity_brain.func_71());
}

float func_74()
{
	return 100f;
}

float func_75()
{
	return 100f;
}

