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
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	struct<21> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<30> Var0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	Var0.f_2 = 255;
	Var0.f_4 = 6;
	Var0.f_29 = -1;
	if (!func_1(&Var0, &ScriptParam_0))
	{
		func_2(&Var0, "failed to launch the script.");
	}
	if (ScriptParam_0.f_20)
	{
		aggregate.fm_mission_controller.func_4244();
	}
	if (aggregate.barcustomer_interaction.func_42(&(Global_1268935->f_513.f_72)))
	{
		aggregate.barcustomer_interaction.func_50(&(Global_1268935->f_513.f_72));
	}
	while (true)
	{
		func_6(&Var0, &ScriptParam_0);
		if (func_7(&Var0, &ScriptParam_0))
		{
			func_2(&Var0, "script should terminate.");
		}
		if (!aggregate.aberdeenpigfarm.func_175(Var0, 2048))
		{
			if (func_9(&Var0, &ScriptParam_0))
			{
				func_10(&Var0, "script should terminate due to async update.");
			}
			if (!func_11(&Var0))
			{
			}
			else
			{
				if (!aggregate.aberdeenpigfarm.func_175(Var0, 8))
				{
					if (aggregate.net_bounty_wagon.func_12(&Var0))
					{
						aggregate.aberdeenpigfarm.func_106(&Var0, 8);
					}
				}
				if (aggregate.aberdeenpigfarm.func_175(Var0, 8))
				{
					if (aggregate.barcustomer_interaction.func_42(&Var0))
					{
						if (Var0.f_29 != -1)
						{
							if (!aggregate.blackwater.func_77(Var0.f_29))
							{
								if (aggregate.long_update.func_583())
								{
									aggregate.binoculars.func_18(Var0.f_29, 1);
								}
							}
						}
					}
				}
				if (func_18(&Var0))
				{
					func_10(&Var0, "update requested thread termination.");
				}
			}
		}
		else if (NETWORK::GET_TIME_DIFFERENCE(Var0.f_28, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 1000)
		{
			if (aggregate.barcustomer_interaction.func_42(&Var0))
			{
				Var0.f_28 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (aggregate.aberdeenpigfarm.func_175(Var0, 2))
				{
					aggregate.fm_mission_controller.func_4244();
				}
				else
				{
					aggregate.fm_mission_controller.func_4244();
				}
			}
		}
		if (func_21(&Var0, &ScriptParam_0))
		{
			func_2(&Var0, "event requested thread termination.");
		}
		BUILTIN::WAIT(0);
	}
	func_2(&Var0, "end of thread.");
}

bool func_1(var uParam0, int* iParam1)
{
	int iVar0;

	iVar0 = BRAIN::_0x6818D1A194E29983();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return false;
	}
	uParam0->f_3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return false;
	}
	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	MISC::_COPY_MEMORY(&(uParam0->f_11), iParam1, 7);
	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_2))
	{
		return false;
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		aggregate.aberdeenpigfarm.func_106(uParam0, 1);
	}
	if (!func_22(uParam0, iParam1))
	{
		return false;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0x4AA5EA1EDFB25786(0);
	BRAIN::_0xA6AC35DB4A7957A8(99999);
	return true;
}

void func_2(var uParam0, char* sParam1)
{
	bool bVar0;

	if (MISC::_0x375F5870A7B8BEC1(sParam1))
	{
	}
	VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
	aggregate.aberdeenpigfarm.func_154(uParam0);
	func_24(uParam0);
	if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_18)))
	{
		aggregate.barcustomer_interaction.func_50(&(uParam0->f_18));
	}
	if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_25)))
	{
		aggregate.barcustomer_interaction.func_50(&(uParam0->f_25));
	}
	if (aggregate.barcustomer_interaction.func_42(&(Global_1268935->f_513.f_72)))
	{
		aggregate.barcustomer_interaction.func_50(&(Global_1268935->f_513.f_72));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!VEHICLE::_0x5136B284B67B35C7(uParam0->f_3))
		{
			bVar0 = aggregate.aberdeenpigfarm.func_175(*uParam0, 2);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
			{
				if (!aggregate.net_bounty_wagon.func_25(uParam0->f_3, 2, !bVar0))
				{
				}
			}
			else
			{
				AITRANSPORT::_0xBA8818212633500A(uParam0->f_3, 17, 1);
				if (bVar0)
				{
					func_26(uParam0->f_3, 0);
				}
				else
				{
					func_26(uParam0->f_3, 1);
					TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(uParam0->f_3, 0);
				}
			}
			if (!bVar0)
			{
				if (aggregate.aberdeenpigfarm.func_175(*uParam0, 4096))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true) == uParam0->f_3)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
				}
				else
				{
					if (aggregate.aberdeenpigfarm.func_175(*uParam0, 4096))
					{
						TASK::_0x55CD5FDDD4335C1E(uParam0->f_3, 0f, 0f, 0f, 8f, 1148979587);
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
				}
				else
				{
					VEHICLE::_0x35DC1877312FBA0F(&(uParam0->f_3));
				}
			}
		}
	}
	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		PLAYER::_0xD0E02AA618020D17(PLAYER::PLAYER_ID(), 0);
	}
	else if (func_27())
	{
		aggregate.net_bounty_wagon.func_28(11, uParam0->f_2, &(Global_1273882->f_154[&Global_1273882]));
		func_29(1649473200, 31, "NSTM_STABLE_DESTROYED_VEHICLE");
		aggregate.net_bounty_wagon.func_30();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(iParam1);
	if (!aggregate.barcustomer_interaction.func_42(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB9050A97594C8832(iVar1) != iVar0)
	{
		PLAYER::_0xD0E02AA618020D17(iVar1, iVar0);
	}
	iVar2 = VEHICLE::_0xB729679356A889AE(iVar0);
	if (ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	}
	iVar4 = PLAYER::PLAYER_PED_ID();
	if (iVar3 != iVar4)
	{
		VEHICLE::_0x838C216C2B05A009(iVar4, iVar0);
	}
}

bool func_7(var uParam0, int iParam1)
{
	if (aggregate.aberdeenpigfarm.func_49(1, 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return true;
	}
	if (!aggregate.barcustomer_interaction.func_42(uParam0))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_11)) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_11)))
		{
			aggregate.aberdeenpigfarm.func_106(uParam0, 2);
			return true;
		}
	}
	if (aggregate.fme_animal_tagging.func_894(uParam0, iParam1))
	{
		return true;
	}
	return false;
}

bool func_9(var uParam0, int iParam1)
{
	func_36(uParam0);
	func_37(uParam0);
	if (aggregate.fme_animal_tagging.func_894(uParam0, iParam1))
	{
		return true;
	}
	if (func_39(uParam0, iParam1))
	{
		return true;
	}
	return false;
}

void func_10(var uParam0, char* sParam1)
{
	if (MISC::_0x375F5870A7B8BEC1(sParam1))
	{
	}
	if (!aggregate.barcustomer_interaction.func_42(uParam0))
	{
		return;
	}
	aggregate.aberdeenpigfarm.func_106(uParam0, 2048);
	uParam0->f_28 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (aggregate.aberdeenpigfarm.func_175(*uParam0, 2))
	{
		aggregate.fm_mission_controller.func_4244();
	}
	else
	{
		aggregate.fm_mission_controller.func_4244();
	}
}

bool func_11(var uParam0)
{
	if (!aggregate.aberdeenpigfarm.func_175(*uParam0, 16))
	{
		if (aggregate.barcustomer_interaction.func_42(uParam0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			}
			else
			{
				PLAYER::_0xD0E02AA618020D17(PLAYER::PLAYER_ID(), uParam0->f_3);
				VEHICLE::_0x838C216C2B05A009(PLAYER::PLAYER_PED_ID(), uParam0->f_3);
				aggregate.aberdeenpigfarm.func_106(uParam0, 16);
			}
		}
		else
		{
			aggregate.aberdeenpigfarm.func_106(uParam0, 16);
		}
	}
	if (!aggregate.aberdeenpigfarm.func_175(*uParam0, 32))
	{
		if (aggregate.benedictpoint.func_17(uParam0))
		{
			aggregate.aberdeenpigfarm.func_106(uParam0, 32);
		}
	}
	if (aggregate.aberdeenpigfarm.func_175(*uParam0, 16))
	{
		if (aggregate.aberdeenpigfarm.func_175(*uParam0, 32))
		{
			return true;
		}
	}
	return false;
}

bool func_18(var uParam0)
{
	if (aggregate.angryisolationist.func_40(uParam0))
	{
		return true;
	}
	func_49(uParam0);
	aggregate.fm_deathmatch_controller.func_445(uParam0);
	func_51(uParam0);
	func_52(uParam0);
	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		func_53(uParam0);
	}
	return false;
}

bool func_21(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	int iVar8;
	int iVar9;

	iVar0 = SCRIPTS::GET_NUMBER_OF_EVENTS(1);
	bVar1 = false;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 < iVar0)
	{
		iVar8 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar9);
		switch (iVar8)
		{
			case -507840394:
				if (!SCRIPTS::GET_EVENT_DATA(1, iVar9, &Var2, 6))
				{
				}
				else if (Var2 != 47)
				{
				}
				else
				{
					bVar1 = aggregate.fm_mission_controller.func_2572(uParam0, iParam1, &Var2);
					if (bVar1)
					{
						return true;
					}
					bVar1 = func_57(uParam0, iParam1, &Var2);
					if (bVar1)
					{
						return true;
					}
				}
		}
		iVar9++;
	}
	return false;
}

bool func_22(var uParam0, int* iParam1)
{
	return true;
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_4[iVar0])))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(uParam0->f_4[iVar0])))
			{
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 467, false);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 277, false);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 209, false);
				PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar0]), 208, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0->f_4[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_58(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 9)
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (!bParam1 || ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::_0xE0B61ED8BB37712F(iVar0);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_27()
{
	return Global_1131373->f_6289.f_132;
}

void func_29(bool bParam0, int iParam1, char* sParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate.net_bounty_wagon.func_66(bParam0, 1, 59806960);
	if (iVar0 <= 0)
	{
		return;
	}
	if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, 0))
	{
		return;
	}
	if (!aggregate.net_bounty_wagon.func_67(bParam0, 1, 59806960))
	{
		return;
	}
	iVar1 = aggregate.net_bounty_wagon.func_68(bParam0, sParam2, 1, 1, 0, 59806960);
	if (iVar1 == -1)
	{
		return;
	}
	aggregate.net_bounty_wagon.func_69(iParam1, iVar0, 0);
}

void func_36(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (aggregate.fm_deathmatch_controller.func_2043(255) == 1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (aggregate.net_bounty_wagon.func_72(uParam0->f_2))
		{
			if (!aggregate.aberdeenpigfarm.func_175(*uParam0, 256))
			{
				NETWORK::_0xE1BC73D6815BA361(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 1, 256);
				aggregate.aberdeenpigfarm.func_106(uParam0, 256);
			}
			NETWORK::_0x7182EDDA1EE7DB5A(NETWORK::_0xF260AF6F43953316(uParam0->f_3));
		}
		else if (aggregate.aberdeenpigfarm.func_175(*uParam0, 256))
		{
			NETWORK::_0xE1BC73D6815BA361(NETWORK::_0xF260AF6F43953316(uParam0->f_3), 0, 256);
			aggregate.aberdeenpigfarm.func_163(uParam0, 256);
		}
	}
	else if (aggregate.aberdeenpigfarm.func_175(*uParam0, 256))
	{
		aggregate.aberdeenpigfarm.func_163(uParam0, 256);
	}
}

void func_37(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_2))
	{
		aggregate.aberdeenpigfarm.func_163(uParam0, 512);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		aggregate.aberdeenpigfarm.func_163(uParam0, 512);
		return;
	}
	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		aggregate.aberdeenpigfarm.func_163(uParam0, 512);
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		aggregate.aberdeenpigfarm.func_163(uParam0, 512);
		return;
	}
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(uParam0->f_2);
	iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	if (iVar1 == iVar2)
	{
		if (!aggregate.aberdeenpigfarm.func_175(*uParam0, 512))
		{
			aggregate.aberdeenpigfarm.func_106(uParam0, 512);
			aggregate.aberdeenpigfarm.func_163(uParam0, 1024);
		}
	}
	else
	{
		if (aggregate.aberdeenpigfarm.func_175(*uParam0, 512))
		{
			aggregate.aberdeenpigfarm.func_163(uParam0, 512);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
			{
				aggregate.aberdeenpigfarm.func_106(uParam0, 1024);
			}
		}
		if (aggregate.aberdeenpigfarm.func_175(*uParam0, 1024))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, false))
			{
				if (!aggregate.barcustomer_interaction.func_46(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 64, 0);
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
			{
			}
			else
			{
				aggregate.aberdeenpigfarm.func_163(uParam0, 1024);
			}
		}
	}
}

bool func_39(var uParam0, int iParam1)
{
	if (!aggregate.aberdeenpigfarm.func_175(*uParam0, 128))
	{
		if (!func_75(uParam0))
		{
			return false;
		}
		if (aggregate.fme_supply_train.func_1200(uParam0->f_3))
		{
			return false;
		}
		aggregate.barcustomer_interaction.func_25(&(uParam0->f_25), 0);
		aggregate.aberdeenpigfarm.func_106(uParam0, 128);
		aggregate.bigvalleyomj.func_36(uParam0, iParam1);
		aggregate.fm_deathmatch_controller.func_445(uParam0);
		func_79(uParam0);
	}
	if (!aggregate.barcustomer_interaction.func_42(uParam0))
	{
		return false;
	}
	if (!aggregate.broom_scenario.func_18(&(uParam0->f_25), 5f))
	{
		return false;
	}
	return true;
}

bool func_41(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (!func_75(uParam0))
	{
		if (VEHICLE::_0xA19447D83294E29F(uParam0->f_3, &iVar0, &uVar1))
		{
			iVar3 = 0;
			iVar2 = 0;
			while (iVar2 < 6)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_4[iVar2])))
				{
					uParam0->f_4[iVar2] = aggregate.nb_runaway_wagon.func_341(uParam0->f_3, iVar2);
					if (ENTITY::DOES_ENTITY_EXIST(&(uParam0->f_4[iVar2])))
					{
						iVar3++;
						PED::_0x931B241409216C1F(PLAYER::GET_PLAYER_PED(uParam0->f_2), &(uParam0->f_4[iVar2]), 0);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(&(uParam0->f_4[iVar2])))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(uParam0->f_4[iVar2]), true, false);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 467, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 277, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 209, true);
							PED::SET_PED_CONFIG_FLAG(&(uParam0->f_4[iVar2]), 208, true);
						}
					}
				}
				iVar2++;
			}
			if (iVar3 < iVar0)
			{
			}
			else if (iVar3 == iVar0)
			{
				aggregate.aberdeenpigfarm.func_106(uParam0, 64);
				return true;
			}
			else if (iVar3 > iVar0)
			{
				aggregate.aberdeenpigfarm.func_106(uParam0, 64);
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_49(var uParam0)
{
	if (!func_94(uParam0->f_2))
	{
		return;
	}
	switch (func_95(uParam0))
	{
		case 0:
			break;
		case 1:
			if (aggregate.barcustomer_interaction.func_42(uParam0))
			{
				func_96(uParam0);
				aggregate.fm_deathmatch_controller.func_156(4);
			}
			break;
		case 2:
			if (aggregate.barcustomer_interaction.func_42(uParam0))
			{
				func_96(uParam0);
				aggregate.binoculars.func_18(79, 1);
				aggregate.fm_deathmatch_controller.func_156(4);
			}
			break;
	}
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = uParam0->f_3;
	iVar1 = uParam0->f_2;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0, 0))
	{
		return;
	}
	iVar3 = 0;
	AITRANSPORT::_0xE195C5A82156321D(iVar0, &iVar2);
	if (Global_1268274[iVar1 /*20*/] & 1 != 0)
	{
		if (!aggregate.aberdeenpigfarm.func_175(iVar2, 1))
		{
			iVar3 = 1;
		}
		if (Global_1268274[iVar1 /*20*/] & 32 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar2, 32))
			{
				iVar3 |= 32;
			}
		}
	}
	else
	{
		if (Global_1268274[iVar1 /*20*/] & 2 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar2, 2))
			{
				iVar3 |= 2;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 4 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar2, 4))
			{
				iVar3 |= 4;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 8 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar2, 8))
			{
				iVar3 |= 8;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 64 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar2, 64))
			{
				iVar3 |= 64;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 128 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar2, 128))
			{
				iVar3 |= 128;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 256 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar2, 256))
			{
				iVar3 |= 256;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 16 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar2, 16))
			{
				iVar3 = 16;
			}
		}
		if (Global_1268274[iVar1 /*20*/] & 512 != 0)
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar2, 512))
			{
				iVar3 |= 512;
			}
		}
		if (aggregate.aberdeenpigfarm.func_175(iVar2, 1024))
		{
			if (!aggregate.aberdeenpigfarm.func_175(iVar2, 1024))
			{
				iVar3 |= 1024;
			}
		}
	}
	if (iVar3 != 0)
	{
		AITRANSPORT::_0xE2487779957FE897(iVar0, iVar3);
	}
}

void func_52(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if (!func_100(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!aggregate.net_bounty_wagon.func_112(iVar0, iVar1, &uVar2))
	{
		return;
	}
	func_102(iVar0);
	iVar3 = uParam0->f_2;
	if (Global_1268274[iVar3 /*20*/] & 16 != 0 || Global_1268273 & 32 != 0)
	{
		if (aggregate.long_update.func_583())
		{
			aggregate.binoculars.func_18(80, 1);
		}
	}
	else if (aggregate.long_update.func_583())
	{
		aggregate.binoculars.func_18(81, 1);
	}
}

void func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	iVar2 = PLAYER::_0x7C803BDC8343228D(iVar0);
	if (!NETWORK::_0x255A5EF65EDA9167(iVar2))
	{
		return;
	}
	iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		iVar5 = &uParam0->f_4[iVar4];
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			func_103(iVar3, iVar5);
		}
		iVar4++;
	}
	iVar6 = VEHICLE::_0xB729679356A889AE(iVar0);
	if (ENTITY::IS_ENTITY_A_PED(iVar6))
	{
		iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar6);
		if (iVar7 == iVar3)
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
		return;
	}
	VEHICLE::_0x838C216C2B05A009(iVar3, iVar0);
}

int func_57(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam2->f_4;
	switch (iVar0)
	{
		case 0:
		case 3:
			if (func_104(uParam0, iParam2))
			{
				func_105(uParam0);
				return 1;
			}
			break;
		case 16:
			if (func_104(uParam0, iParam2))
			{
				aggregate.aberdeenpigfarm.func_106(uParam0, 4096);
				func_105(uParam0);
				return 1;
			}
			break;
		case 1:
		case 2:
			if (func_104(uParam0, iParam2))
			{
				func_106(uParam0);
				return 1;
			}
			break;
		case 6:
			if (func_104(uParam0, iParam2))
			{
				func_107(uParam0, iParam1);
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 12:
			func_108(uParam0, iParam2, 0);
			break;
		case 13:
			func_108(uParam0, iParam2, 1);
			break;
		case 14:
			func_109(uParam0, iParam2);
			break;
		case 15:
			if (func_104(uParam0, iParam2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
					TASK::_0x141BC64C8D7C5529(uParam0->f_3);
				}
			}
			break;
	}
	return 0;
}

bool func_58(int iParam0)
{
	int iVar0;

	iVar0 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

bool func_75(var uParam0)
{
	return aggregate.aberdeenpigfarm.func_175(*uParam0, 64);
}

void func_79(var uParam0)
{
	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		aggregate.binoculars.func_18(70, 1);
	}
}

bool func_94(int iParam0)
{
	if (aggregate.fm_mission_controller.func_3456(4, iParam0))
	{
		return true;
	}
	return false;
}

int func_95(var uParam0)
{
	return func_133(uParam0, 1086324736 /* Float: 6f */, 1094713344 /* Float: 12f */, 1077936128 /* Float: 3f */, 1090519040 /* Float: 8f */);
}

void func_96(var uParam0)
{
	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		aggregate.fm_mission_controller.func_5348(15, 3);
	}
}

void func_98(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!aggregate.barcustomer_interaction.func_42(uParam0))
	{
		func_134(uParam0);
		return;
	}
	iVar0 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			func_134(uParam0);
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (func_94(uParam0->f_2))
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_1, -272772079);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -272772079);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -1380599892);
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, 453356795);
			return;
		}
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -1380599892);
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, 453356795);
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, 453356795);
			return;
		}
		if (aggregate.fme_animal_tagging.func_727(iVar1, 0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -1380599892);
			MAP::_0x662D364ABF16DE2F(uParam0->f_1, 453356795);
		}
		return;
	}
	if (MAP::_0x9FA00E2FC134A9D0(uParam0->f_3))
	{
		return;
	}
	uParam0->f_1 = MAP::_0x23F74C2FDA6E7C61(768962966, uParam0->f_3);
	iVar2 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
	if (STREAMING::IS_MODEL_VALID(iVar2))
	{
		bVar3 = aggregate.net_bounty_wagon.func_159(iVar2);
		if (aggregate.bandana.func_30(bVar3, 0))
		{
			MAP::_0x9CB1A1623062F402(uParam0->f_1, MISC::_CREATE_VAR_STRING(0, aggregate.fm_mission_controller.func_1773(bVar3)));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, aggregate.net_bounty_wagon.func_161(2));
		}
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, aggregate.net_bounty_wagon.func_161(2));
	}
	MAP::_0x662D364ABF16DE2F(uParam0->f_1, 580546400);
}

bool func_100(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<7> Var3;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<7> Var15;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (!aggregate.net_bounty_wagon.func_112(iVar0, iVar1, &uVar2))
	{
		return false;
	}
	Var3 = { uParam0->f_11 };
	iVar10 = uParam0->f_2;
	iVar11 = PLAYER::PLAYER_ID();
	if (iVar10 == iVar11)
	{
		return false;
	}
	iVar12 = iVar10;
	iVar13 = aggregate.net_bounty_wagon.func_162(iVar12);
	iVar14 = aggregate.annesburg.func_114(iVar13, 10);
	if (iVar14 != -1)
	{
		if (aggregate.net_bounty_wagon.func_164(iVar12, iVar14, 2) && func_142(iVar14, iVar0))
		{
			return true;
		}
	}
	if (Global_1268274[iVar12 /*20*/] & 16 != 0 || Global_1268273 & 32 != 0)
	{
		return false;
	}
	if (Global_1268274[iVar12 /*20*/] & 2 != 0 || Global_1268273 & 4 != 0)
	{
		if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar11) == _NAMESPACE26::_0x901E0DC25080C8B9(iVar10))
		{
			return false;
		}
	}
	Var15 = { aggregate.aberdeenpigfarm.func_131(iVar10) };
	if (Global_1268274[iVar12 /*20*/] & 4 != 0 || Global_1268273 & 8 != 0)
	{
		if (aggregate.net_bounty_wagon.func_167(Var15, Var3))
		{
			return false;
		}
	}
	if (Global_1268274[iVar12 /*20*/] & 8 != 0 || Global_1268273 & 16 != 0)
	{
		if (NETWORK::NETWORK_IS_FRIEND(&Var3))
		{
			return false;
		}
	}
	return true;
}

void func_102(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!aggregate.net_bounty_wagon.func_112(iParam0, iVar0, &uVar1))
	{
		return;
	}
	if (AITRANSPORT::_0x660639BC60157048(iVar0, iParam0))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_0xF103823FFE72BB49(iParam1);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (iVar1 == iParam0)
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
		return;
	}
	PED::_0x931B241409216C1F(iParam0, iParam1, 0);
}

bool func_104(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1->f_1)
	{
		return false;
	}
	return true;
}

void func_105(var uParam0)
{
	if (!aggregate.aberdeenpigfarm.func_175(*uParam0, 4))
	{
		aggregate.aberdeenpigfarm.func_106(uParam0, 4);
	}
}

void func_106(var uParam0)
{
	if (!aggregate.aberdeenpigfarm.func_175(*uParam0, 4))
	{
		aggregate.aberdeenpigfarm.func_106(uParam0, 2);
	}
}

void func_107(var uParam0, int iParam1)
{
	if (aggregate.fm_mission_controller.func_3456(4, 255))
	{
		return;
	}
	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		TELEMETRY::_0xE67AF24C5A3B6058(joaat("call"), &(iParam1->f_7), 0);
		aggregate.net_bounty_wagon.func_168(4);
	}
	if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_18)))
	{
		aggregate.barcustomer_interaction.func_50(&(uParam0->f_18));
	}
}

void func_108(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	iVar3 = uParam0->f_2;
	if (!NETWORK::_0x255A5EF65EDA9167(iVar3))
	{
		return;
	}
	iVar4 = iParam1->f_1;
	if (!NETWORK::_0x255A5EF65EDA9167(iVar4))
	{
		return;
	}
	if (iVar3 != iVar4)
	{
		return;
	}
	bVar5 = false;
	if (iVar1 == iVar3)
	{
		bVar5 = true;
	}
	if (bVar5 && !bParam2)
	{
		return;
	}
	if (!aggregate.net_bounty_wagon.func_112(iVar0, iVar2, &uVar6))
	{
		return;
	}
	func_146(iVar0);
	if (!bVar5)
	{
		if (aggregate.long_update.func_583())
		{
			aggregate.binoculars.func_18(80, 1);
		}
	}
}

void func_109(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = iParam1->f_1;
	if (!NETWORK::_0x255A5EF65EDA9167(iVar3))
	{
		return;
	}
	if (iVar0 == iVar3)
	{
		return;
	}
	if (iVar2 != PLAYER::_0xB9050A97594C8832(iVar3))
	{
		return;
	}
	if (!aggregate.net_bounty_wagon.func_112(iVar2, iVar1, &uVar4))
	{
		return;
	}
	func_146(iVar2);
}

int func_133(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar6;
	vector3 vVar10;
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26;

	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_2))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		return 2;
	}
	iVar24 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (func_175(uParam0, &uVar1, fParam2))
	{
		return 1;
	}
	vVar17 = { ENTITY::GET_ENTITY_COORDS(iVar24, true, false) };
	vVar20 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false) };
	if (BUILTIN::VDIST(vVar17, vVar20) >= 200f)
	{
		return 2;
	}
	if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar17, vVar20, 1, &vVar2, &(vVar2.f_3), 1, 1077936128 /* Float: 3f */, 0) || !PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar17, vVar20, 0, &vVar2, &(vVar2.f_3), 1, 1077936128 /* Float: 3f */, 0))
	{
		if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(vVar17, &vVar2, &(vVar2.f_3), 1, 3f, 0))
		{
			if (!func_176(vVar17, vVar20, &vVar2))
			{
				return 2;
			}
		}
	}
	if (!func_177(uParam0->f_3, &iVar23))
	{
		vVar14 = { vVar20 + ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_3) };
	}
	else
	{
		vVar14 = { vVar20 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar23) };
	}
	if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar20, vVar14, 1, &vVar6, &(vVar6.f_3), 1, 1077936128 /* Float: 3f */, 0) || !PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar20, vVar14, 0, &vVar6, &(vVar6.f_3), 1, 1077936128 /* Float: 3f */, 0))
	{
		if (!PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(vVar20, &vVar6, &(vVar6.f_3), 1, 3f, 0))
		{
			return 2;
		}
	}
	iVar25 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(vVar6, 0, 1, 3f, 0f);
	if (!PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar25))
	{
		return 2;
	}
	uVar26 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(uVar26))
	{
	}
	else
	{
		TASK::_0x19BC99C678FBA139(uVar26, 74, 0);
		TASK::_0x19BC99C678FBA139(uVar26, 81, 1);
		TASK::_0x5D9B0BAAF04CF65B(uVar26, 47, 2, 0);
		TASK::_0x5D9B0BAAF04CF65B(uVar26, 50, 2, 0);
		if (!TASK::_0xFE5D28B9B7837CC1(uVar26, vVar6))
		{
			TASK::_0xBEEFBB608D2AA68A(uVar26);
			return 2;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar14, vVar17, iVar0, &vVar10, &(vVar10.f_3), 1, 1077936128 /* Float: 3f */, 0) && iVar0 < 1)
			{
				TASK::_0xBEEFBB608D2AA68A(uVar26);
				return 2;
			}
			else if (!TASK::_0xFE5D28B9B7837CC1(uVar26, vVar10))
			{
				TASK::_0xBEEFBB608D2AA68A(uVar26);
				return 2;
			}
			iVar0++;
		}
		TASK::_0xBEEFBB608D2AA68A(uVar26);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		if (TASK::_0x583AE9AF9CEE0958(uParam0->f_3, uParam0->f_21))
		{
			if (BUILTIN::VDIST(uParam0->f_21, vVar2) > 10f)
			{
			}
			else
			{
				return func_178(uParam0, 1092616192 /* Float: 10f */);
			}
		}
		uParam0->f_21 = { vVar2 };
		uParam0->f_24 = vVar2.f_3;
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_3, vVar2, iParam1, 1147928963, 2, iParam4, iParam3);
	}
	return func_178(uParam0, 1092616192 /* Float: 10f */);
}

void func_134(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
}

bool func_142(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	iVar0 = aggregate.aberdeenpigfarm.func_180(iParam0);
	vVar1 = { (Global_1051387->f_69[iVar0 /*76*/])->f_3 };
	if (iParam0 == 150)
	{
		vVar1 = { aggregate.camera_item.func_108(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (aggregate.annesburg.func_121(vVar1))
	{
		return false;
	}
	if (iVar0 == 10)
	{
		fVar4 = 10f;
		fVar5 = aggregate.fishing_core.func_39(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 29)
	{
		fVar6 = 70f;
		fVar7 = aggregate.fishing_core.func_39(iParam1, vVar1, 0);
		if (fVar7 < fVar6)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (aggregate.fishing_core.func_39(iParam1, vVar1, 0) < 75f)
		{
			return true;
		}
	}
	return false;
}

void func_146(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0, 0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!aggregate.net_bounty_wagon.func_112(iParam0, iVar0, &uVar1))
	{
		return;
	}
	Var2.f_5 = 1073741824;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

bool func_175(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	*uParam1 = 0;
	if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(uParam0->f_2))
	{
		return true;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (PED::IS_PED_ON_VEHICLE(iVar0, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(iVar0, true) == uParam0->f_3)
		{
			*uParam1 = 1;
			return true;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) < fParam2)
	{
		return true;
	}
	return false;
}

bool func_176(vector3 vParam0, vector3 vParam3, var uParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	var uVar8;

	if (aggregate.annesburg.func_121(vParam0))
	{
		return false;
	}
	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, 2f, 1, &vVar0, &vVar3, &uVar6, &uVar7, &uVar8, true))
	{
		*uParam6 = { Vector(0.5f, 0.5f, 0.5f) * vVar0 + vVar3 };
		if (BUILTIN::VDIST(vParam3, vVar0) < BUILTIN::VDIST(vParam3, vVar3))
		{
			uParam6->f_3 = aggregate.fishing_core.func_492(vVar3, vVar0, 1);
		}
		else
		{
			uParam6->f_3 = aggregate.fishing_core.func_492(vVar0, vVar3, 1);
		}
		return true;
	}
	return false;
}

bool func_177(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		iVar1 = iVar0;
		iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else
		{
			*uParam1 = iVar2;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_178(var uParam0, float fParam1)
{
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_3) == 0f)
	{
		if (!aggregate.barcustomer_interaction.func_42(&(uParam0->f_18)))
		{
			aggregate.barcustomer_interaction.func_43(&(uParam0->f_18));
		}
		else if (aggregate.dynamic_craft_scenario.func_37(&(uParam0->f_18), fParam1))
		{
			return 2;
		}
	}
	else if (aggregate.barcustomer_interaction.func_42(&(uParam0->f_18)))
	{
		aggregate.barcustomer_interaction.func_50(&(uParam0->f_18));
	}
	return 0;
}

