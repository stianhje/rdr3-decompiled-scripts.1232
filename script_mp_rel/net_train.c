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
	var uLocal_15 = 255;
	var uLocal_16 = 4;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 4;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 15;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	func_1(&uScriptParam_0);
	func_2(&uLocal_61, &uScriptParam_0);
	while (!func_3(&uLocal_61))
	{
		func_4(&uLocal_13, &uLocal_28, &uLocal_61);
		BUILTIN::WAIT(0);
	}
	func_5(&uLocal_13, &uLocal_61);
}

void func_1(var uParam0)
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	aggregate.flow_controller.func_7(32, *uParam0);
	aggregate.flow_controller.func_8();
	if (aggregate.flow_controller.func_9())
	{
		aggregate.aberdeenpigfarm.func_46();
	}
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_13, 15, 7);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&uLocal_13), 15, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_28, 33, 8);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(uLocal_28[0]), 33, "m_clientData");
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
}

void func_2(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
}

bool func_3(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_49(0, 0))
	{
		return true;
	}
	else if (uParam0->f_2 == 5)
	{
		return true;
	}
	return false;
}

void func_4(var uParam0, var uParam1, var uParam2)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14(uParam0, uParam1, uParam2);
	}
	func_15(uParam0, uParam1, uParam2);
}

void func_5(var uParam0, var uParam1)
{
	int iVar0;

	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_16(uParam0, uParam1);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (VOLUME::_0xA4A4359320345B34(&(uParam0->f_3[iVar0])))
			{
				uParam0->f_3[iVar0] = 0;
			}
			if (VOLUME::_0xF6A8A652A6B186CD(&(uParam0->f_8[iVar0])))
			{
				VOLUME::_0xFDFECC6EE4491E11(&(uParam0->f_8[iVar0]));
			}
			iVar0++;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam1->f_3))
	{
		MAP::REMOVE_BLIP(&(uParam1->f_3));
	}
	func_17(uParam1->f_1);
	aggregate.aberdeenpigfarm.func_46();
}

void func_14(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			aggregate.fm_mission_controller.func_6110(uParam0, uParam2);
			break;
		case 1:
			func_21(uParam0, uParam2);
			break;
		case 2:
			func_22(uParam0, uParam2);
			break;
		case 3:
			func_23(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_24(uParam0, uParam2);
			break;
	}
}

void func_15(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 >= 4 && uParam2->f_2 < 4)
	{
		aggregate.fme_animal_tagging.func_928(uParam2, 4);
	}
	switch (uParam2->f_2)
	{
		case 0:
			func_26(uParam0, uParam2);
			break;
		case 1:
			func_27(uParam0, uParam2);
			break;
		case 2:
			func_28(uParam0, uParam2);
			break;
		case 3:
			func_29(uParam0, uParam1, uParam2);
			break;
		case 4:
			func_30(uParam0, uParam2);
			break;
	}
}

void func_16(var uParam0, var uParam1)
{
	int iVar0;

	func_31(uParam1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_1))
		{
			iVar0 = NETWORK::NET_TO_VEH(uParam0->f_1);
			VEHICLE::DELETE_MISSION_TRAIN(&iVar0);
			aggregate.fme_king_of_the_rails.func_175(*uParam1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(&(uParam1->f_4[0])) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(uParam1->f_4[0])))
	{
		VEHICLE::DELETE_MISSION_TRAIN(uParam1->f_4[0]);
		aggregate.fme_king_of_the_rails.func_175(*uParam1);
	}
}

void func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = VEHICLE::_0x635423D55CA84FC8(iParam0);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= (iVar1 - 1))
	{
		iVar0 = VEHICLE::_0x8DF5F6A19F99F0D5(iParam0, iVar2);
		if (iVar0 != 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		iVar2++;
	}
}

void func_21(var uParam0, var uParam1)
{
	if (func_34(uParam1->f_1))
	{
		func_33(uParam0, uParam1, 2);
	}
}

void func_22(var uParam0, var uParam1)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
		{
			return;
		}
		vVar0 = { func_35(*uParam1) };
		uVar3 = func_36(*uParam1);
		iVar4 = aggregate.net_train.func_37(uParam1->f_1);
		if (!aggregate.fm_deathmatch_controller.func_1752(&(uParam0->f_1), uParam1->f_1, vVar0, uVar3, iVar4, 0, 1, 1))
		{
			func_33(uParam0, uParam1, 4);
			return;
		}
		iVar5 = NETWORK::NET_TO_VEH(uParam0->f_1);
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, true, false);
		}
		fVar6 = func_39(uParam1->f_1);
		VEHICLE::SET_TRAIN_SPEED(iVar5, fVar6);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iVar5, fVar6);
		VEHICLE::_0x160C1B5AB48AB87C(iVar5, func_40(uParam1->f_1));
		VEHICLE::_0x4182C037AA1F0091(iVar5, func_41(uParam1->f_1));
		VEHICLE::_0xE6BD7DD3FD474415(iVar5, aggregate.net_train.func_37(uParam1->f_1));
		VEHICLE::_0x06A09A6E0C6D2A84(iVar5, 0);
		if (!func_43(uParam1->f_1))
		{
			VEHICLE::_0xA72B1BF3857B94D7(iVar5, 1);
		}
		if (func_44(uParam1->f_1))
		{
			VEHICLE::_0x1BFBAFCC6760FF02(iVar5, false);
		}
	}
	else
	{
		iVar7 = NETWORK::NET_TO_VEH(uParam0->f_1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			func_33(uParam0, uParam1, 4);
		}
		else if (VEHICLE::_0xBD3C4A2ED509205E(iVar7))
		{
			func_33(uParam0, uParam1, 3);
		}
	}
}

void func_23(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (func_45(uParam0, uParam2))
	{
		func_33(uParam0, uParam2, 4);
		return;
	}
	if (uParam0->f_14 == 0 && func_46(uParam1))
	{
		uParam0->f_14 = 1;
	}
	func_47(uParam0, uParam2);
	if (uParam0->f_2 == 255)
	{
		iVar0 = 255;
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (func_48(uParam1, 1, iVar1))
			{
				iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
				{
					uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
					return;
				}
			}
			iVar1++;
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam0->f_2))
	{
		uParam0->f_2 = 255;
	}
}

void func_24(var uParam0, var uParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		func_33(uParam0, uParam1, 5);
	}
}

void func_26(var uParam0, var uParam1)
{
	if (*uParam0 > 0)
	{
		aggregate.fme_animal_tagging.func_928(uParam1, 1);
	}
}

void func_27(var uParam0, var uParam1)
{
	if (func_34(uParam1->f_1) && *uParam0 > 1)
	{
		aggregate.fme_animal_tagging.func_928(uParam1, 2);
	}
}

void func_28(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;

	if (*uParam0 > 2 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar0 = NETWORK::NET_TO_VEH(uParam0->f_1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			aggregate.fme_animal_tagging.func_928(uParam1, 4);
		}
		else if (VEHICLE::_0xBD3C4A2ED509205E(iVar0))
		{
			func_49(*uParam1, iVar0);
			if (func_50(uParam1->f_1))
			{
				uParam1->f_3 = MAP::_0x23F74C2FDA6E7C61(-399496385, iVar0);
				MAP::SET_BLIP_SPRITE(uParam1->f_3, -250506368 /* GXTEntry: "Train" */, true);
				func_51(*uParam1, uParam1->f_3);
			}
			if (!func_52(uParam1->f_1))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(iVar0, PLAYER::PLAYER_ID(), true);
				VEHICLE::_0x63DC1F22C903B709(iVar0, true);
			}
			iVar1 = VEHICLE::_0x60B7D1DCC312697D(iVar0);
			func_53(*uParam1, iVar1);
			iVar12 = 0;
			iVar12 = 0;
			while (iVar12 <= (iVar1 - 1))
			{
				uParam1->f_4[iVar12] = VEHICLE::GET_TRAIN_CARRIAGE(iVar0, iVar12);
				if (ENTITY::DOES_ENTITY_EXIST(&(uParam1->f_4[iVar12])) && !ENTITY::IS_ENTITY_DEAD(&(uParam1->f_4[iVar12])))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(uParam1->f_4[iVar12])))
					{
						if (aggregate.benedictpoint.func_17(uParam1->f_1))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(&(uParam1->f_4[iVar12]), true);
						}
						else
						{
							ENTITY::SET_ENTITY_INVINCIBLE(&(uParam1->f_4[iVar12]), false);
						}
						ENTITY::_0xA91E6CF94404E8C9(&(uParam1->f_4[iVar12]));
					}
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(&(uParam1->f_4[iVar12])), &vVar3, &vVar6);
					vVar9 = { vVar6 - vVar3 };
					vVar9.x = (vVar9.x * 0.9f);
					vVar9.f_2 = (vVar9.z * 1.25f);
					iVar2 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(&(uParam1->f_4[iVar12]), false, false), 0f, 0f, ENTITY::GET_ENTITY_HEADING(&(uParam1->f_4[iVar12])), vVar9);
					PED::_0x7C00CFC48A782DC0(iVar2, &(uParam1->f_4[iVar12]), 0f, 0f, (vVar9.z * 0.6f), 0f, 0f, 0f, 2, 1);
					func_55(*uParam1, iVar12, &(uParam1->f_4[iVar12]));
					func_56(*uParam1, iVar12, iVar2);
				}
				iVar12++;
			}
			func_57(*uParam1, 4);
			func_17(uParam1->f_1);
			aggregate.fme_animal_tagging.func_928(uParam1, 3);
		}
	}
}

void func_29(var uParam0, var uParam1, var uParam2)
{
	if (func_45(uParam0, uParam2))
	{
		aggregate.fme_animal_tagging.func_928(uParam2, 4);
		return;
	}
	func_31(uParam2);
	if (func_58(uParam0, uParam2))
	{
		if (!func_48(uParam1, 2, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_59(uParam1, 2, NETWORK::PARTICIPANT_ID_TO_INT());
			func_60();
		}
	}
	if (func_61(uParam2))
	{
		if (!func_48(uParam1, 1, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			func_59(uParam1, 1, NETWORK::PARTICIPANT_ID_TO_INT());
		}
		if (uParam0->f_2 == PLAYER::PLAYER_ID())
		{
			aggregate.fme_animal_tagging.func_928(uParam2, 5);
		}
	}
}

void func_30(var uParam0, var uParam1)
{
	func_16(uParam0, uParam1);
	if (*uParam0 > 4)
	{
		aggregate.fme_animal_tagging.func_928(uParam1, 5);
	}
}

void func_31(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = &uParam0->f_4[0];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		if (!aggregate.annesburg.func_121(vVar1))
		{
			vVar4 = { ((*(*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/])[*uParam0 /*4*/])->f_1 };
			if (BUILTIN::VDIST(vVar4, vVar1) > 10f)
			{
				((*(*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/])[*uParam0 /*4*/])->f_1 = { vVar1 };
			}
		}
	}
	else if (!aggregate.annesburg.func_121(((*(*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/])[*uParam0 /*4*/])->f_1))
	{
		((*(*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/])[*uParam0 /*4*/])->f_1 = { 0f, 0f, 0f };
	}
}

void func_33(var uParam0, var uParam1, int iParam2)
{
	if (*uParam0 != iParam2)
	{
		*uParam0 = iParam2;
	}
}

bool func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	iVar2 = VEHICLE::_0x635423D55CA84FC8(iParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 <= (iVar2 - 1))
	{
		iVar1 = VEHICLE::_0x8DF5F6A19F99F0D5(iParam0, iVar3);
		if (iVar1 != 0)
		{
			STREAMING::REQUEST_MODEL(iVar1, false);
			if (!STREAMING::HAS_MODEL_LOADED(iVar1))
			{
				iVar0 = 0;
			}
		}
		iVar3++;
	}
	return iVar0;
}

Vector3 func_35(int iParam0)
{
	return (Global_1130300->f_2[iParam0 /*17*/])->f_2;
}

var func_36(int iParam0)
{
	return (Global_1130300->f_2[iParam0 /*17*/])->f_5;
}

float func_39(int iParam0)
{
	if (func_66(iParam0))
	{
		return 4.5f;
	}
	switch (iParam0)
	{
		case 155299255:
			return 0f;
		case 1981604013:
			return 0f;
		case -768364147:
			return 0f;
		case -735194130:
			return 0f;
		case -1547760661:
			return 0f;
		default:
			break;
	}
	return 8f;
}

float func_40(int iParam0)
{
	if (func_66(iParam0))
	{
		return 5f;
	}
	return 30f;
}

int func_41(int iParam0)
{
	if (func_66(iParam0))
	{
		return 1;
	}
	return 1;
}

bool func_43(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

bool func_44(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return true;
		default:
			break;
	}
	return false;
}

bool func_45(var uParam0, var uParam1)
{
	if (func_68(1))
	{
		return true;
	}
	else if ((Global_1130823->f_2[*uParam1 /*41*/])->f_3 == 0f)
	{
		return true;
	}
	else if (aggregate.fme_king_of_the_rails.func_173(*uParam1) != uParam1->f_1)
	{
		return true;
	}
	else if (&Global_1130823->f_2[*uParam1 /*41*/] != 3)
	{
		return true;
	}
	else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return true;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(&(uParam1->f_4[0])))
	{
		return true;
	}
	return false;
}

bool func_46(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 2;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && aggregate.aberdeenpigfarm.func_175(uParam0[iVar0], iVar1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_47(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	uParam1->f_21++;
	if (uParam1->f_21 < 15)
	{
		return;
	}
	uParam1->f_21 = 0;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = VEHICLE::_0x60B7D1DCC312697D(iVar0);
	iVar2 = uParam0->f_13;
	iVar3 = uParam0->f_13 * 4;
	if (iVar3 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam1->f_4[iVar3])))
		{
			func_71(uParam0, uParam1, iVar2, &(uParam1->f_4[iVar3]));
		}
		iVar2++;
	}
	else
	{
		iVar2 = 0;
	}
	if (iVar2 >= 4)
	{
		iVar2 = 0;
	}
	uParam0->f_13 = iVar2;
}

bool func_48(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return false;
	}
	return aggregate.aberdeenpigfarm.func_175(uParam0[iParam2], iParam1);
}

void func_49(int iParam0, int iParam1)
{
	(Global_1130823->f_2[iParam0 /*41*/])->f_2 = iParam1;
}

bool func_50(int iParam0)
{
	if (func_66(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

void func_51(int iParam0, var uParam1)
{
	(Global_1130823->f_2[iParam0 /*41*/])->f_6 = uParam1;
}

bool func_52(int iParam0)
{
	switch (iParam0)
	{
		case -343202759:
			return false;
		case -735194130:
			return false;
		default:
			break;
	}
	return true;
}

void func_53(int iParam0, int iParam1)
{
	(Global_1130823->f_2[iParam0 /*41*/])->f_5 = iParam1;
}

void func_55(int iParam0, int iParam1, var uParam2)
{
	(Global_1130823->f_2[iParam0 /*41*/])->f_10[iParam1 /*2*/] = uParam2;
}

void func_56(int iParam0, int iParam1, int iParam2)
{
	((Global_1130823->f_2[iParam0 /*41*/])->f_10[iParam1 /*2*/])->f_1 = iParam2;
}

void func_57(int iParam0, int iParam1)
{
	if (!aggregate.aberdeenpigfarm.func_175((*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/][iParam0 /*4*/], iParam1))
	{
		aggregate.bandana.func_26((*(*Global_1130406)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*13*/])[iParam0 /*4*/], iParam1);
	}
}

bool func_58(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = &uParam1->f_4[0];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (uParam0->f_14 == 1)
	{
		return false;
	}
	iVar1 = VEHICLE::_0x2963B5C1637E8A27(iVar0);
	if (iVar1 == Global_35)
	{
		return true;
	}
	return false;
}

void func_59(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 32)
	{
		return;
	}
	if (!aggregate.aberdeenpigfarm.func_175(uParam0[iParam2], iParam1))
	{
		aggregate.bandana.func_26((*uParam0)[iParam2], iParam1);
	}
}

void func_60()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3[3];
	var uVar7;
	struct<10> Var9;

	fVar2 = 25f;
	uVar7 = 1;
	iVar0 = aggregate.net_fetch.func_1893(&uVar3, &uVar7, 3, Global_36, fVar2, 0, 0, 0, -1, 1, 1, -1082130432 /* Float: -1f */, 0, 1);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(&(uVar3[iVar1])) && !ENTITY::IS_ENTITY_DEAD(&(uVar3[iVar1]))) && !LAW::_0x40851BCC33ACD9AB(&(uVar3[iVar1])))
		{
			Var9 = Global_35;
			Var9.f_3 = { Global_36 };
			Var9.f_6 = func_74();
			Var9.f_9 = 1;
			Var9.f_2 = 1685924442; /* GXTEntry: "Train Robbery" */
			Var9.f_8 = 1;
			LAW::_0x018F30D762E62DF8(&(uVar3[iVar1]), &Var9);
			aggregate.nb_graverobber.func_303(&(uVar3[iVar1]), Global_36, 2, 1, 1);
			TASK::_TASK_SMART_FLEE_STYLE_PED(&(uVar3[iVar1]), Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
		iVar1++;
	}
}

bool func_61(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;

	if (aggregate.fishing_core.func_34(uParam0, 1))
	{
		return true;
	}
	iVar0 = &uParam0->f_4[0];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	if (aggregate.annesburg.func_121(vVar1))
	{
		aggregate.net_arrowheads.func_10(uParam0, 1);
		return true;
	}
	fVar4 = (Global_1130823->f_2[*uParam0 /*41*/])->f_3;
	if (fVar4 > 0f)
	{
		fVar5 = (fVar4 + 50f);
		fVar6 = BUILTIN::VDIST(Global_36, vVar1);
		if (fVar6 > fVar5 && !aggregate.flow_controller.func_465(*uParam0))
		{
			aggregate.net_arrowheads.func_10(uParam0, 1);
			return true;
		}
	}
	return false;
}

int func_65(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return 0;
	}
	*uParam0 = 20;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 23, 0, &uParam1);
	return 1;
}

bool func_66(int iParam0)
{
	switch (iParam0)
	{
		case -1865722934:
		case -1643549114:
		case -1083616881:
		case -272646696:
		case 1936859429:
			return true;
		default:
			break;
	}
	return false;
}

bool func_68(int iParam0)
{
	return aggregate.aberdeenpigfarm.func_175(Global_1130823->f_1, iParam0);
}

void func_71(var uParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	struct<8> Var5;
	vector3 vVar14;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam3, true, false) };
	if (aggregate.annesburg.func_121(vVar0))
	{
		return;
	}
	fVar3 = 40f;
	if (!VOLUME::_0xA4A4359320345B34(&(uParam0->f_3[iParam2])))
	{
		iVar4 = MISC::GET_HASH_KEY("NET_TRAIN");
		if (VOLUME::_0x397769175A7DBB30(vVar0, fVar3, 1, 0, iVar4))
		{
			return;
		}
		Var5 = { vVar0 };
		Var5.f_4 = 40f;
		Var5.f_6 = MISC::GET_HASH_KEY("NET_TRAIN");
		Var5.f_7 = *uParam1;
		Var5.f_5 = 48;
		uParam0->f_3[iParam2] = VOLUME::_0x183C0B6CFEFFCAE4(&Var5);
	}
	else if (!VOLUME::_0xF6A8A652A6B186CD(&(uParam0->f_8[iParam2])))
	{
		switch (VOLUME::_0xB33A604345F58202(&(uParam0->f_3[iParam2])))
		{
			case 3:
				uParam0->f_8[iParam2] = VOLUME::_0x351D71B8B72B858B(&(uParam0->f_3[iParam2]));
				break;
			case 4:
				uParam0->f_3[iParam2] = 0;
				break;
			default:
				break;
		}
	}
	else
	{
		vVar14 = { VOLUME::_0xC4019CF9AE8E931A(&(uParam0->f_8[iParam2])) };
		if (BUILTIN::VDIST(vVar14, vVar0) > fVar3)
		{
			VOLUME::_0xEC43C2FFB70E3F30(&(uParam0->f_8[iParam2]), vVar0);
		}
	}
}

var func_74()
{
	return Global_1938075->f_26;
}

