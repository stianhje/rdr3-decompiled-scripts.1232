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
	struct<8> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
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
	func_23(uParam0);
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
	if (func_38(uParam0, iParam1))
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
	if (func_48(uParam0))
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
	uParam0->f_29 = 849;
	return true;
}

void func_23(var uParam0)
{
	if (aggregate.barcustomer_interaction.func_42(&(Local_21.f_3)))
	{
		aggregate.barcustomer_interaction.func_50(&(Local_21.f_3));
	}
	aggregate.annesburg.func_166(Local_21.f_2);
	aggregate.annesburg.func_218(&(Local_21.f_7), 1, 1);
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

	if (func_60(iParam0))
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

bool func_38(var uParam0, int iParam1)
{
	func_77(uParam0);
	return false;
}

bool func_39(var uParam0, int iParam1)
{
	if (!aggregate.aberdeenpigfarm.func_175(*uParam0, 128))
	{
		if (!func_78(uParam0))
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
		func_82(uParam0);
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

	if (!func_78(uParam0))
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

bool func_42(var uParam0)
{
	bool bVar0;

	bVar0 = true;
	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		if (!VOLUME::_0x92A78D0BEDB332A3(Local_21.f_2))
		{
			Local_21.f_2 = VOLUME::_CREATE_VOLUME_BOX(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), 0f, 0f, -7.0567f, 4.75f, 3.25f, 1.85f);
			if (VOLUME::_0x92A78D0BEDB332A3(Local_21.f_2))
			{
				PED::_0x7C00CFC48A782DC0(Local_21.f_2, uParam0->f_3, 0f, 0f, 0f, 0f, 0f, 90f, 2, 1);
			}
		}
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			return false;
		}
	}
	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		if (!aggregate.aberdeenpigfarm.func_175(Local_21.f_1, 1))
		{
			PROPSET::_0x75F90E4051CC084C(uParam0->f_3, 295596934);
			aggregate.aberdeenpigfarm.func_106(&(Local_21.f_1), 1);
			bVar0 = false;
		}
		else if (!PROPSET::_0x7264F9CA87A9830B(uParam0->f_3) || !VEHICLE::_0xD798DF5DB67B1659(uParam0->f_3))
		{
			bVar0 = false;
		}
		if (!aggregate.aberdeenpigfarm.func_175(Local_21.f_1, 2))
		{
			PROPSET::_0xC0F0417A90402742(uParam0->f_3, 696075367);
			aggregate.aberdeenpigfarm.func_106(&(Local_21.f_1), 2);
			bVar0 = false;
		}
		if (bVar0)
		{
			if (!aggregate.dynamic_craft_scenario.func_542())
			{
				return false;
			}
			aggregate.net_hunting_wagon.func_86(uParam0->f_3, 1, 1);
		}
	}
	if (bVar0)
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(uParam0->f_3, false);
	}
	return bVar0;
}

bool func_48(var uParam0)
{
	int iVar0;
	bool bVar1;

	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		switch (Local_21.f_6)
		{
			case 0:
				if (aggregate.annesburg.func_217(Local_21.f_7))
				{
					aggregate.annesburg.func_218(&(Local_21.f_7), 1, 1);
				}
				if (aggregate.barcustomer_interaction.func_42(&(Local_21.f_3)))
				{
					aggregate.barcustomer_interaction.func_50(&(Local_21.f_3));
				}
				if (func_100(uParam0))
				{
					if (func_101())
					{
						Local_21.f_7 = aggregate.net_hunting_wagon.func_102("HWAGON_TITLE", joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), Local_21.f_2, 2, 1, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
						Local_21.f_6 = 1;
					}
				}
				else if (aggregate.doc_book.func_11() && !aggregate.doc_book.func_278(0))
				{
					if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Local_21.f_2, true, 0))
					{
						if (aggregate.net_hunting_wagon.func_105(-889932290))
						{
							if (func_106(-889932290))
							{
								aggregate.fme_animal_tagging.func_642();
								aggregate.doc_book.func_280(0);
							}
						}
					}
				}
				break;
			case 1:
				if (!func_100(uParam0))
				{
					Local_21.f_6 = 0;
				}
				else
				{
					PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_HORSE_MENU"), true);
					if (aggregate.doc_book.func_50(Local_21.f_7, 1))
					{
						aggregate.doc_book.func_51(1);
						aggregate.doc_book.func_280(-889932290);
						aggregate.barcustomer_interaction.func_43(&(Local_21.f_3));
						aggregate.annesburg.func_218(&(Local_21.f_7), 1, 1);
						Local_21.f_6 = 2;
					}
				}
				break;
			case 2:
				if (aggregate.binoculars.func_33())
				{
					Local_21.f_6 = 0;
				}
				else if (aggregate.broom_scenario.func_18(&(Local_21.f_3), 3f))
				{
					Local_21.f_6 = 0;
				}
				break;
		}
		if (!aggregate.blackwater.func_77(854))
		{
			if (PED::_0xA911EE21EDF69DAF(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = PED::_0xD806CD2A4F2C2996(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					bVar1 = aggregate.generic_document_inspection.func_448(iVar0);
					if (Global_1901929->f_637.f_32)
					{
					}
					else if (aggregate.fm_mission_controller.func_2361())
					{
					}
					else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
					}
					else if (!func_115(ENTITY::GET_ENTITY_MODEL(iVar0)))
					{
					}
					else if (!func_116(bVar1))
					{
					}
					else if (aggregate.long_update.func_583())
					{
						aggregate.binoculars.func_18(854, 0);
					}
				}
			}
		}
	}
	return false;
}

void func_49(var uParam0)
{
	if (!func_117(uParam0->f_2))
	{
		return;
	}
	switch (func_118(uParam0))
	{
		case 0:
			break;
		case 1:
			if (aggregate.barcustomer_interaction.func_42(uParam0))
			{
				func_119(uParam0);
				aggregate.fm_deathmatch_controller.func_156(4);
			}
			break;
		case 2:
			if (aggregate.barcustomer_interaction.func_42(uParam0))
			{
				func_119(uParam0);
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

	if (!func_123(uParam0))
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
	func_125(iVar0);
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
			func_126(iVar3, iVar5);
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
			if (func_127(uParam0, iParam2))
			{
				func_128(uParam0);
				return 1;
			}
			break;
		case 16:
			if (func_127(uParam0, iParam2))
			{
				aggregate.aberdeenpigfarm.func_106(uParam0, 4096);
				func_128(uParam0);
				return 1;
			}
			break;
		case 1:
		case 2:
			if (func_127(uParam0, iParam2))
			{
				func_129(uParam0);
				return 1;
			}
			break;
		case 6:
			if (func_127(uParam0, iParam2))
			{
				func_130(uParam0, iParam1);
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 12:
			func_131(uParam0, iParam2, 0);
			break;
		case 13:
			func_131(uParam0, iParam2, 1);
			break;
		case 14:
			func_132(uParam0, iParam2);
			break;
		case 15:
			if (func_127(uParam0, iParam2))
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

bool func_60(int iParam0)
{
	int iVar0;

	iVar0 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

void func_77(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!aggregate.barcustomer_interaction.func_42(uParam0))
	{
		return;
	}
	if (aggregate.aberdeenpigfarm.func_175(Local_21.f_1, 16))
	{
		return;
	}
	iVar0 = PROPSET::_0xA079300AF757FB1A(uParam0->f_3);
	if (!PROPSET::_DOES_PROPSET_EXIST(iVar0))
	{
	}
	else if (!PROPSET::_0xF42DB680A8B2A4D9(iVar0))
	{
	}
	else
	{
		iVar1 = ITEMSET::CREATE_ITEMSET(false);
		iVar2 = 0;
		iVar3 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iVar0, iVar1, -2101616621, false, false);
		if (iVar3 == 0)
		{
		}
		else
		{
			iVar4 = 0;
			while (iVar4 < iVar3)
			{
				iVar5 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar1));
				if (ENTITY::DOES_ENTITY_EXIST(iVar5))
				{
					if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar5))
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar5);
					}
					else
					{
						ENTITY::SET_ENTITY_INVINCIBLE(iVar5, true);
						iVar2++;
					}
				}
				iVar4++;
			}
			if (iVar2 == iVar3)
			{
				aggregate.aberdeenpigfarm.func_106(&(Local_21.f_1), 16);
			}
			ITEMSET::_0x20A4BF0E09BEE146(iVar1);
		}
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
}

bool func_78(var uParam0)
{
	return aggregate.aberdeenpigfarm.func_175(*uParam0, 64);
}

void func_82(var uParam0)
{
	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		aggregate.binoculars.func_18(70, 1);
	}
}

bool func_100(var uParam0)
{
	int iVar0;

	if (!aggregate.barcustomer_interaction.func_42(uParam0))
	{
		return false;
	}
	if (CAM::_0x81DCFD13CF39920E())
	{
		return false;
	}
	if (aggregate.doc_book.func_11())
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::_0xD806CD2A4F2C2996(iVar0)))
	{
		return false;
	}
	if (!aggregate.fme_condor_egg.func_1826(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
	{
		return false;
	}
	return true;
}

bool func_101()
{
	HUD::_0xF66090013DE648D5("SATCH");
	if (!HUD::_0xD0976CC34002DB57("SATCH"))
	{
		return false;
	}
	return true;
}

bool func_106(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (&Global_1939221->f_10454[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_115(int iParam0)
{
	switch (iParam0)
	{
		case -1379917677:
		case joaat("a_c_alligator_03"):
		case -1262877910:
			return false;
		default:
			break;
	}
	return true;
}

bool func_116(bool bParam0)
{
	if (!aggregate.aberdeenpigfarm.func_165(func_170(bParam0)))
	{
		return false;
	}
	return aggregate.net_hunting_wagon.func_172(bParam0) > 0;
}

bool func_117(int iParam0)
{
	if (aggregate.fm_mission_controller.func_3456(4, iParam0))
	{
		return true;
	}
	return false;
}

int func_118(var uParam0)
{
	return func_173(uParam0, 1086324736 /* Float: 6f */, 1094713344 /* Float: 12f */, 1077936128 /* Float: 3f */, 1090519040 /* Float: 8f */);
}

void func_119(var uParam0)
{
	if (aggregate.barcustomer_interaction.func_42(uParam0))
	{
		aggregate.fm_mission_controller.func_5348(15, 3);
	}
}

void func_121(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!aggregate.barcustomer_interaction.func_42(uParam0))
	{
		func_174(uParam0);
		return;
	}
	iVar0 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			func_174(uParam0);
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (func_117(uParam0->f_2))
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

bool func_123(var uParam0)
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
		if (aggregate.net_bounty_wagon.func_164(iVar12, iVar14, 2) && func_182(iVar14, iVar0))
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

void func_125(int iParam0)
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

void func_126(int iParam0, int iParam1)
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

bool func_127(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1->f_1)
	{
		return false;
	}
	return true;
}

void func_128(var uParam0)
{
	if (!aggregate.aberdeenpigfarm.func_175(*uParam0, 4))
	{
		aggregate.aberdeenpigfarm.func_106(uParam0, 4);
	}
}

void func_129(var uParam0)
{
	if (!aggregate.aberdeenpigfarm.func_175(*uParam0, 4))
	{
		aggregate.aberdeenpigfarm.func_106(uParam0, 2);
	}
}

void func_130(var uParam0, int iParam1)
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

void func_131(var uParam0, int iParam1, bool bParam2)
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
	func_186(iVar0);
	if (!bVar5)
	{
		if (aggregate.long_update.func_583())
		{
			aggregate.binoculars.func_18(80, 1);
		}
	}
}

void func_132(var uParam0, int iParam1)
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
	func_186(iVar2);
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case -802026654: /* GXTEntry: "Good Alligator Skin" */
			return -1670497261;
		case 1806153689: /* GXTEntry: "Poor Alligator Skin" */
			return -280711232;
		case -1625078531: /* GXTEntry: "Perfect Alligator Skin" */
			return 596590814;
		case 143941906: /* GXTEntry: "Good Bear Pelt" */
			return 1824983669;
		case 957520252: /* GXTEntry: "Poor Bear Pelt" */
			return 928262209;
		case 1292673537: /* GXTEntry: "Perfect Bear Pelt" */
			return 541735817;
		case -2059726619: /* GXTEntry: "Good Beaver Pelt" */
			return 478256501;
		case -1569450319: /* GXTEntry: "Poor Beaver Pelt" */
			return -232007656;
		case 854596618: /* GXTEntry: "Perfect Beaver Pelt" */
			return 19595959;
		case 1490032862: /* GXTEntry: "Good Black Bear Pelt" */
			return -101065075;
		case 1083865179: /* GXTEntry: "Poor Black Bear Pelt" */
			return 2105875134;
		case 663376218: /* GXTEntry: "Perfect Black Bear Pelt" */
			return 294194582;
		case 2116849039:
			return 837315235;
		case 1248540072: /* GXTEntry: "Poor Boar Pelt" */
			return -1818319295;
		case -1858513856: /* GXTEntry: "Perfect Boar Pelt" */
			return -1597636811;
		case -868657362: /* GXTEntry: "Good Buck Pelt" */
			return -1985596288;
		case 1603936352: /* GXTEntry: "Poor Buck Pelt" */
			return -440737957;
		case -702790226: /* GXTEntry: "Perfect Buck Pelt" */
			return -1886002303;
		case -591117838: /* GXTEntry: "Good Bison Pelt" */
			return -901855085;
		case -1730060063: /* GXTEntry: "Poor Bison Pelt" */
			return 891487295;
		case -237756948: /* GXTEntry: "Perfect Bison Pelt" */
			return -1647829735;
		case -336086818: /* GXTEntry: "Good Bull Hide" */
			return 1698233050;
		case 9293261: /* GXTEntry: "Poor Bull Hide" */
			return -1939379896;
		case -53270317: /* GXTEntry: "Perfect Bull Hide" */
			return -1903865243;
		case 459744337: /* GXTEntry: "Good Cougar Pelt" */
			return 2116155169;
		case 1914602340: /* GXTEntry: "Poor Cougar Pelt" */
			return -1373796272;
		case -1791452194: /* GXTEntry: "Perfect Cougar Pelt" */
			return 834120727;
		case 1150594075: /* GXTEntry: "Good Cow Hide" */
			return -976686879;
		case 334093551: /* GXTEntry: "Poor Cow Hide" */
			return 622542686;
		case -845037222: /* GXTEntry: "Perfect Cow Hide" */
			return -96726590;
		case 1150939141: /* GXTEntry: "Good Coyote Pelt" */
			return 493864472;
		case -1558096473: /* GXTEntry: "Poor Coyote Pelt" */
			return -1364685383;
		case -794277189: /* GXTEntry: "Perfect Coyote Pelt" */
			return 501072671;
		case -1827027577: /* GXTEntry: "Good Deer Pelt" */
			return -1832121185;
		case -662178186: /* GXTEntry: "Poor Deer Pelt" */
			return 332878276;
		case -1035515486: /* GXTEntry: "Perfect Deer Pelt" */
			return 226674781;
		case 1181652728: /* GXTEntry: "Good Elk Pelt" */
			return 945521246;
		case 2053771712: /* GXTEntry: "Poor Elk Pelt" */
			return 1013673835;
		case -1332163079: /* GXTEntry: "Perfect Elk Pelt" */
			return 1080677561;
		case 238733925: /* GXTEntry: "Good Fox Pelt" */
			return 441281843;
		case 1647012424: /* GXTEntry: "Poor Fox Pelt" */
			return 2100972340;
		case 500722008: /* GXTEntry: "Perfect Fox Pelt" */
			return 731989586;
		case 1710714415: /* GXTEntry: "Good Goat Hide" */
			return -312223536;
		case 699990316: /* GXTEntry: "Poor Goat Hide" */
			return 919524407;
		case -1648383828: /* GXTEntry: "Perfect Goat Hide" */
			return 45874041;
		case -1379330323: /* GXTEntry: "Good Collared Peccary Pig Pelt" */
			return -1135509110;
		case -99092070: /* GXTEntry: "Poor Collared Peccary Pig Pelt" */
			return -1991809269;
		case 1963510418: /* GXTEntry: "Perfect Collared Peccary Pig Pelt" */
			return -882315424;
		case 1636891382: /* GXTEntry: "Good Moose Pelt" */
			return -1198430015;
		case 1868576868: /* GXTEntry: "Poor Moose Pelt" */
			return 610503310;
		case -217731719: /* GXTEntry: "Perfect Moose Pelt" */
			return -2104728156;
		case 1208128650: /* GXTEntry: "Good Ox Hide" */
			return -1848951328;
		case 462348928: /* GXTEntry: "Poor Ox Hide" */
			return -1522563214;
		case 659601266: /* GXTEntry: "Perfect Ox Hide" */
			return 701524769;
		case -395646254: /* GXTEntry: "Good Panther Pelt" */
			return -1125735460;
		case 1584468323: /* GXTEntry: "Poor Panther Pelt" */
			return -912340422;
		case 1969175294: /* GXTEntry: "Perfect Panther Pelt" */
			return -339216640;
		case -57190831: /* GXTEntry: "Good Pig Hide" */
			return -850815155;
		case -308965548: /* GXTEntry: "Poor Pig Hide" */
			return 980503581;
		case -1102272634: /* GXTEntry: "Perfect Pig Hide" */
			return 222730798;
		case 554578289: /* GXTEntry: "Good Pronghorn Hide" */
			return -615127816;
		case -983605026: /* GXTEntry: "Poor Pronghorn Hide" */
			return -588738567;
		case -1544126829: /* GXTEntry: "Perfect Pronghorn Hide" */
			return -1194176543;
		case -476045512: /* GXTEntry: "Good Ram Hide" */
			return -963727698;
		case 1796037447: /* GXTEntry: "Poor Ram Hide" */
			return -553292391;
		case 1795984405: /* GXTEntry: "Perfect Ram Hide" */
			return 1964559810;
		case -1317365569: /* GXTEntry: "Good Sheep Hide" */
			return -30369031;
		case 1729948479: /* GXTEntry: "Poor Sheep Hide" */
			return 1200593517;
		case 1466150167: /* GXTEntry: "Perfect Sheep Hide" */
			return 1386213093;
		case 1145777975: /* GXTEntry: "Good Wolf Pelt" */
			return -1853692477;
		case 85441452: /* GXTEntry: "Poor Wolf Pelt" */
			return -265369183;
		case 653400939: /* GXTEntry: "Perfect Wolf Pelt" */
			return 1490994314;
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return -560512119;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -372283616;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return 643029198;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return -507336551;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return -1633300610;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return 312232747;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -369028960;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return 56997271;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return -562880581;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return 1914482046;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -398123506;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -154193613;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return 253511830;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return 25196805;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return -585570711;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 738250137;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return -255175472;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return 2029824605;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return 637459650;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -1763677083;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return 105057785;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return 2109109029;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return 590763523;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return -1415366968;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return 1525242558;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return -1053027662;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return 170878033;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 1176700965;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return 956769558;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return -92340513;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return -1628899142;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return -1009793706;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 69303734;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return 1934146069;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return 1251861193;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -1201528492;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return -584564578;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return 1257170615;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -443353688;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -726514003;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return -1178975683;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return -1735020859;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1066403056;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return 379141135;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 178588058;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return 250119098;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return 1462096210;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return 125705494;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return 1955497943;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -239746263;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return 483041697;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return 2115836262;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return 127221449;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return 1281075400;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -187017787;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return 2084769890;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -1860395611;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return -925132283;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return 1221255602;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -1971512016;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return 1915869310;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return -291878865;
		case 2144711797:
			return 628765193;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return 73897638;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return -520524691;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -677211393;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return 607200259;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return -422975251;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -162653027;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return -1918690839;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return 885447719;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return 1359956914;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return -509393273;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 1728485205;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 179793498;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return -1846596769;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1833664130;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return joaat("dlc_mp_arena_m_jbib_7_13");
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return 2094969043;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return -1582650542;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return 1799724359;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1598789118;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return 1824349223;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return 696418077;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return 1106697533;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return -1454259523;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return -1896235488;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return 276180683;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -747881514;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return 1262126135;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return 2265787;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return -2129601667;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return 75684692;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 1900817837;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return -1956299475;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return 694522728;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return 765710924;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return 893337488;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return 154935767;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return -568415076;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1274028936;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return -1140231877;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return -27138549;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return 659005977;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -771957300;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return 29804808;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return 1551511426;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return 800713897;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return 1612873893;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return 1434794005;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -1919690611;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 1742727635;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 539212240;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return -1730963015;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return 392259955;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1775800065;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return 1100310307;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return 844987909;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return -278500197;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return 887422410;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return -1794448450;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return 2054761774;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -1608758596;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return 1688649464;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -2008306533;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return 1100437577;
		case 2126795269:
			return 1726381584;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return 1400293322;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return 995534052;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return 1922992885;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 81605402;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return -286651444;
		case -410900360: /* GXTEntry: "Good Black-tailed Rattlesnake Carcass" */
			return -2064547947;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return -176022019;
		case 2060013792: /* GXTEntry: "Poor Black-tailed Rattlesnake Carcass" */
			return 1232227412;
		case 581032175: /* GXTEntry: "Good Red Boa Carcass" */
			return -893789138;
		case -581931638: /* GXTEntry: "Perfect Red Boa Carcass" */
			return 2050798648;
		case -1528265128: /* GXTEntry: "Poor Red Boa Carcass" */
			return -798568163;
		case -142632645: /* GXTEntry: "Good Copperhead Carcass" */
			return 230404077;
		case -2048519180: /* GXTEntry: "Perfect Copperhead Carcass" */
			return -1383606050;
		case 1442025993: /* GXTEntry: "Poor Copperhead Carcass" */
			return 1090514323;
		case 441195430: /* GXTEntry: "Good Fer-de-Lance Carcass" */
			return 1374677981;
		case 748665395: /* GXTEntry: "Perfect Fer-de-Lance Carcass" */
			return -636161424;
		case 351048413: /* GXTEntry: "Poor Fer-de-Lance Carcass" */
			return -1083700033;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 63328590;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return -676594955;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return -654290128;
		case 101495387: /* GXTEntry: "Good Water Snake Carcass" */
			return -66423751;
		case 157917500: /* GXTEntry: "Perfect Water Snake Carcass" */
			return -237024085;
		case -936537044: /* GXTEntry: "Poor Water Snake Carcass" */
			return 431553826;
		case -1610329427: /* GXTEntry: "Good Turkey Carcass" */
			return -979079160;
		case -1836227998: /* GXTEntry: "Perfect Turkey Carcass" */
			return 1045329345;
		case 619479575: /* GXTEntry: "Poor Turkey Carcass" */
			return 908385665;
		case -1444929945: /* GXTEntry: "Good Snapping Turtle Carcass" */
			return 1675254736;
		case -929322235: /* GXTEntry: "Perfect Snapping Turtle Carcass" */
			return 564968345;
		case -548076717: /* GXTEntry: "Poor Snapping Turtle Carcass" */
			return 1401257519;
		case -281211381: /* GXTEntry: "Good Vulture Carcass" */
			return 1935981234;
		case 493457089: /* GXTEntry: "Perfect Vulture Carcass" */
			return 1930921435;
		case -479485786: /* GXTEntry: "Poor Vulture Carcass" */
			return 4633231;
		case 27838955: /* GXTEntry: "Good Wolf Carcass" */
			return -588047787;
		case 1641833719: /* GXTEntry: "Perfect Wolf Carcass" */
			return -1503391831;
		case -314933180: /* GXTEntry: "Poor Wolf Carcass" */
			return -1409703989;
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			return 1754322973;
		case 803930024: /* GXTEntry: "Poor Channel Catfish" */
			return -479401797;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
			return -1108373076;
		case 1111663869: /* GXTEntry: "Poor Lake Sturgeon" */
			return -255978368;
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			return 1771244699;
		case 1297433586: /* GXTEntry: "Poor Longnose Gar" */
			return 1837733705;
		case -1538397860: /* GXTEntry: "Muskie" */
			return -755340618;
		case -293259613: /* GXTEntry: "Poor Muskie" */
			return -274405663;
		case 193037129: /* GXTEntry: "Northern Pike" */
			return 1107308482;
		case 588902637: /* GXTEntry: "Poor Northern Pike" */
			return -2034280224;
		case 1908704263: /* GXTEntry: "Good Skinned Alligator Carcass" */
			return 1147674954;
		case -2112217546: /* GXTEntry: "Perfect Skinned Alligator Carcass" */
			return 285459296;
		case -1745255175: /* GXTEntry: "Poor Skinned Alligator Carcass" */
			return -1085630227;
		case -237368063: /* GXTEntry: "Good Skinned Armadillo Carcass" */
			return -977624126;
		case 1598967299: /* GXTEntry: "Perfect Skinned Armadillo Carcass" */
			return -1327298596;
		case -1809464109: /* GXTEntry: "Poor Skinned Armadillo Carcass" */
			return -1809370620;
		case -165201917: /* GXTEntry: "Good Skinned Badger Carcass" */
			return -925376594;
		case 815147738: /* GXTEntry: "Perfect Skinned Badger Carcass" */
			return 571888586;
		case 1287583539: /* GXTEntry: "Poor Skinned Badger Carcass" */
			return 1427039907;
		case -2126985311: /* GXTEntry: "Good Skinned Beaver Carcass" */
			return 1870052953;
		case -1268352491: /* GXTEntry: "Perfect Skinned Beaver Carcass" */
			return 1293957931;
		case -1940225526: /* GXTEntry: "Poor Skinned Beaver Carcass" */
			return -1604751590;
		case -212307068: /* GXTEntry: "Good Skinned Bighorn Sheep Carcass" */
			return 1619108346;
		case 355421032: /* GXTEntry: "Perfect Skinned Bighorn Sheep Carcass" */
			return 954753324;
		case 1657729714: /* GXTEntry: "Poor Skinned Bighorn Sheep Carcass" */
			return -530719231;
		case 1350692346: /* GXTEntry: "Good Skinned Buck Carcass" */
			return 1790841517;
		case -257850294: /* GXTEntry: "Perfect Skinned Buck Carcass" */
			return 1709510426;
		case -918541014: /* GXTEntry: "Poor Skinned Buck Carcass" */
			return 1406497512;
		case -947573795: /* GXTEntry: "Good Plucked California Condor Carcass" */
			return -397897626;
		case -2068302756: /* GXTEntry: "Perfect Plucked California Condor Carcass" */
			return -2079304485;
		case 1650829985: /* GXTEntry: "Poor Plucked California Condor Carcass" */
			return -1919132092;
		case -1808044035: /* GXTEntry: "Good Skinned Chicken Carcass" */
			return 1146883867;
		case -1952647655: /* GXTEntry: "Perfect Skinned Chicken Carcass" */
			return 213675443;
		case 1293221440: /* GXTEntry: "Poor Skinned Chicken Carcass" */
			return -2050528754;
		case -642946194: /* GXTEntry: "Good Plucked Cormorant Carcass" */
			return 953077128;
		case 819214075: /* GXTEntry: "Perfect Plucked Cormorant Carcass" */
			return -1141453785;
		case -858652427: /* GXTEntry: "Poor Plucked Cormorant Carcass" */
			return 1397626289;
		case 395625948: /* GXTEntry: "Good Skinned Cougar Carcass" */
			return 1133589554;
		case -2063800922: /* GXTEntry: "Perfect Skinned Cougar Carcass" */
			return 1666627023;
		case -2117103642: /* GXTEntry: "Poor Skinned Cougar Carcass" */
			return -1809574093;
		case -1583694057: /* GXTEntry: "Good Skinned Coyote Carcass" */
			return -1782999617;
		case -1550918713: /* GXTEntry: "Perfect Skinned Coyote Carcass" */
			return -508623201;
		case 836539658: /* GXTEntry: "Poor Skinned Coyote Carcass" */
			return -1594035895;
		case 773062352: /* GXTEntry: "Good Plucked Crane Carcass" */
			return 696987226;
		case 1306100270: /* GXTEntry: "Perfect Plucked Crane Carcass" */
			return 1080524287;
		case -1063194668: /* GXTEntry: "Poor Plucked Crane Carcass" */
			return 1671304715;
		case 337839068: /* GXTEntry: "Good Skinned Deer Carcass" */
			return 1998585657;
		case -1426520714: /* GXTEntry: "Perfect Skinned Deer Carcass" */
			return 1020167279;
		case -1456429189: /* GXTEntry: "Poor Skinned Deer Carcass" */
			return 623984063;
		case -2032809253: /* GXTEntry: "Good Skinned Duck Carcass" */
			return 2094082294;
		case 781728005: /* GXTEntry: "Perfect Skinned Duck Carcass" */
			return -1960159253;
		case 1202409779: /* GXTEntry: "Poor Skinned Duck Carcass" */
			return -1365028169;
		case 1520877300: /* GXTEntry: "Good Plucked Eagle Carcass" */
			return -1221735631;
		case -1736624361: /* GXTEntry: "Perfect Plucked Eagle Carcass" */
			return -112981243;
		case 719465997: /* GXTEntry: "Poor Plucked Eagle Carcass" */
			return -2139087610;
		case -361486526: /* GXTEntry: "Good Skinned Egret Carcass" */
			return -1602510454;
		case -765274711: /* GXTEntry: "Perfect Skinned Egret Carcass" */
			return -1297983889;
		case -887205673: /* GXTEntry: "Poor Skinned Egret Carcass" */
			return 2092698587;
		case -784020903: /* GXTEntry: "Good Skinned Fox Carcass" */
			return -996945065;
		case -886117938: /* GXTEntry: "Perfect Skinned Fox Carcass" */
			return 2084956560;
		case -1416771220: /* GXTEntry: "Poor Skinned Fox Carcass" */
			return 702905543;
		case 1648676911: /* GXTEntry: "Good Skinned Gila Monster Carcass" */
			return -1581520016;
		case 2103833563: /* GXTEntry: "Perfect Skinned Gila Monster Carcass" */
			return 1086407100;
		case -831636369: /* GXTEntry: "Poor Skinned Gila Monster Carcass" */
			return 511869570;
		case -852290935: /* GXTEntry: "Good Skinned Goat Carcass" */
			return -880049552;
		case -1870415962: /* GXTEntry: "Perfect Skinned Goat Carcass" */
			return -1117023247;
		case -788684109: /* GXTEntry: "Poor Skinned Goat Carcass" */
			return -734978095;
		case 1416435145: /* GXTEntry: "Good Skinned Goose Carcass" */
			return -1006346516;
		case -1483088274: /* GXTEntry: "Perfect Skinned Goose Carcass" */
			return -1801089352;
		case -791867098: /* GXTEntry: "Poor Skinned Goose Carcass" */
			return -1884753879;
		case -1689552552: /* GXTEntry: "Good Plucked Hawk Carcass" */
			return 1991763855;
		case -1850779170: /* GXTEntry: "Perfect Plucked Hawk Carcass" */
			return -1306257518;
		case -121487803: /* GXTEntry: "Poor Plucked Hawk Carcass" */
			return -1020683612;
		case -1280499288: /* GXTEntry: "Good Skinned Heron Carcass" */
			return 926836797;
		case 820245961: /* GXTEntry: "Perfect Skinned Heron Carcass" */
			return -1232342767;
		case -889526774: /* GXTEntry: "Poor Skinned Heron Carcass" */
			return -309925418;
		case -521025998: /* GXTEntry: "Good Skinned Iguana Carcass" */
			return -123071275;
		case 1583031244: /* GXTEntry: "Perfect Skinned Iguana Carcass" */
			return -1558938686;
		case -2115599211: /* GXTEntry: "Poor Skinned Iguana Carcass" */
			return 1091662795;
		case -767176802: /* GXTEntry: "Good Skinned Loon Carcass" */
			return -788362738;
		case -750945821: /* GXTEntry: "Perfect Skinned Loon Carcass" */
			return 1328165841;
		case -2135749211: /* GXTEntry: "Poor Skinned Loon Carcass" */
			return -800990234;
		case 2063108046: /* GXTEntry: "Good Skinned Muskrat Carcass" */
			return -1483684624;
		case 1299111759: /* GXTEntry: "Perfect Skinned Muskrat Carcass" */
			return 905262788;
		case 1595322723: /* GXTEntry: "Poor Skinned Muskrat Carcass" */
			return 150247607;
		case 784918835: /* GXTEntry: "Good Skinned Opossum Carcass" */
			return -1233359941;
		case -676310905: /* GXTEntry: "Perfect Skinned Opossum Carcass" */
			return -313281876;
		case -1719545959: /* GXTEntry: "Poor Skinned Opossum Carcass" */
			return -4490683;
		case -2142423934: /* GXTEntry: "Good Plucked Owl Carcass" */
			return 772815941;
		case 747751566: /* GXTEntry: "Perfect Plucked Owl Carcass" */
			return 829687693;
		case -1942682403: /* GXTEntry: "Poor Plucked Owl Carcass" */
			return -989662224;
		case 1018433784: /* GXTEntry: "Good Skinned Panther Carcass" */
			return 2085868277;
		case -796185392: /* GXTEntry: "Perfect Skinned Panther Carcass" */
			return 54441032;
		case -49549406: /* GXTEntry: "Poor Skinned Panther Carcass" */
			return 173369425;
		case 857788498: /* GXTEntry: "Good Plucked Parrot Carcass" */
			return 1040980289;
		case 1223148871: /* GXTEntry: "Perfect Plucked Parrot Carcass" */
			return 914451661;
		case 939407236: /* GXTEntry: "Poor Plucked Parrot Carcass" */
			return -1351971822;
		case 1608778431: /* GXTEntry: "Good Plucked Pelican Carcass" */
			return 1314774140;
		case -2033821082: /* GXTEntry: "Perfect Plucked Pelican Carcass" */
			return -1359600522;
		case -993340234: /* GXTEntry: "Poor Plucked Pelican Carcass" */
			return 766332028;
		case -1861062075: /* GXTEntry: "Good Skinned Pheasant Carcass" */
			return 1221975438;
		case 1645001514: /* GXTEntry: "Perfect Skinned Pheasant Carcass" */
			return -1326003094;
		case 782371031: /* GXTEntry: "Poor Skinned Pheasant Carcass" */
			return 1184491654;
		case 1255529169: /* GXTEntry: "Good Skinned Pig Carcass" */
			return 750218917;
		case 70898308: /* GXTEntry: "Perfect Skinned Pig Carcass" */
			return -1353658464;
		case -1050350982: /* GXTEntry: "Poor Skinned Pig Carcass" */
			return 851638420;
		case 581781784: /* GXTEntry: "Good Skinned Prairie Chicken Carcass" */
			return 722571285;
		case -1363330863: /* GXTEntry: "Perfect Skinned Prairie Chicken Carcass" */
			return 934062207;
		case -1780911288: /* GXTEntry: "Poor Skinned Prairie Chicken Carcass" */
			return -1585718810;
		case 1018306802: /* GXTEntry: "Good Skinned Pronghorn Carcass" */
			return -1082360340;
		case 1615521415: /* GXTEntry: "Perfect Skinned Pronghorn Carcass" */
			return 2061367228;
		case -1499066338: /* GXTEntry: "Poor Skinned Pronghorn Carcass" */
			return -1962565360;
		case 1711081908: /* GXTEntry: "Good Skinned Rabbit Carcass" */
			return 262789343;
		case -164705: /* GXTEntry: "Perfect Skinned Rabbit Carcass" */
			return -633571126;
		case -2044044647: /* GXTEntry: "Poor Skinned Rabbit Carcass" */
			return 786387404;
		case -859583379: /* GXTEntry: "Good Skinned Raccoon Carcass" */
			return -379489403;
		case -759504052: /* GXTEntry: "Perfect Skinned Raccoon Carcass" */
			return -764672668;
		case 700225820: /* GXTEntry: "Poor Skinned Raccoon Carcass" */
			return -282159777;
		case 136458586: /* GXTEntry: "Good Skinned Ram Carcass" */
			return 468012182;
		case 799105420: /* GXTEntry: "Perfect Skinned Ram Carcass" */
			return -617672215;
		case -481655757: /* GXTEntry: "Poor Skinned Ram Carcass" */
			return -562468122;
		case 484160931: /* GXTEntry: "Good Plucked Raven Carcass" */
			return 1913327664;
		case 1010699907: /* GXTEntry: "Perfect Plucked Raven Carcass" */
			return -993590812;
		case 1550264248: /* GXTEntry: "Poor Plucked Raven Carcass" */
			return -2137670338;
		case -371992731: /* GXTEntry: "Good Plucked Red-footed Booby Carcass" */
			return 726300604;
		case 1090294483: /* GXTEntry: "Perfect Plucked Red-footed Booby Carcass" */
			return 415226344;
		case -274175035: /* GXTEntry: "Poor Plucked Red-footed Booby Carcass" */
			return -299634134;
		case -1064414912: /* GXTEntry: "Good Skinned Rooster Carcass" */
			return 1087304069;
		case -2091620305: /* GXTEntry: "Perfect Skinned Rooster Carcass" */
			return -9870681;
		case -468684824: /* GXTEntry: "Poor Skinned Rooster Carcass" */
			return 1792621383;
		case 1668870118: /* GXTEntry: "Good Skinned Roseate Spoonbill Carcass" */
			return -199598455;
		case -534004020: /* GXTEntry: "Perfect Skinned Roseate Spoonbill Carcass" */
			return -1941388598;
		case -2126925270: /* GXTEntry: "Poor Skinned Roseate Spoonbill Carcass" */
			return 157600273;
		case 2008380517: /* GXTEntry: "Good Plucked Seagull Carcass" */
			return 167746130;
		case -510697884: /* GXTEntry: "Perfect Plucked Seagull Carcass" */
			return 2004430445;
		case -955209948: /* GXTEntry: "Poor Plucked Seagull Carcass" */
			return 1574944766;
		case 1459836898: /* GXTEntry: "Good Skinned Sheep Carcass" */
			return 1307900476;
		case 303969766: /* GXTEntry: "Perfect Skinned Sheep Carcass" */
			return 1042168876;
		case -1707588662: /* GXTEntry: "Poor Skinned Sheep Carcass" */
			return 425489026;
		case -1224075784: /* GXTEntry: "Good Skinned Skunk Carcass" */
			return 1517438769;
		case -1806671048: /* GXTEntry: "Perfect Skinned Skunk Carcass" */
			return -875336946;
		case 749765420: /* GXTEntry: "Poor Skinned Skunk Carcass" */
			return -586130620;
		case 462936163: /* GXTEntry: "Good Skinned Black-Tailed Rattlesnake Carcass" */
			return -586318490;
		case -8888941: /* GXTEntry: "Perfect Skinned Black-Tailed Rattlesnake Carcass" */
			return 208002432;
		case 1640227110: /* GXTEntry: "Poor Skinned Black-Tailed Rattlesnake Carcass" */
			return -1210524242;
		case -1241188722: /* GXTEntry: "Good Skinned Red Boa Carcass" */
			return 245773581;
		case -1030962659: /* GXTEntry: "Perfect Skinned Red Boa Carcass" */
			return -2046702261;
		case 112552982: /* GXTEntry: "Poor Skinned Red Boa Carcass" */
			return 44564804;
		case -1599578931: /* GXTEntry: "Good Skinned Copperhead Carcass" */
			return 100739460;
		case 1296331626: /* GXTEntry: "Perfect Skinned Copperhead Carcass" */
			return -2092384992;
		case -1256398198: /* GXTEntry: "Poor Skinned Copperhead Carcass" */
			return 494095577;
		case 1297800973: /* GXTEntry: "Good Skinned Fer-de-lance Carcass" */
			return -384312098;
		case 1772582754: /* GXTEntry: "Perfect Skinned Fer-de-lance Carcass" */
			return 1560218503;
		case -1459876379: /* GXTEntry: "Poor Skinned Fer-de-lance Carcass" */
			return -1430069792;
		case 1127406863: /* GXTEntry: "Good Skinned Snake Carcass" */
			return 1131911627;
		case 1779996957: /* GXTEntry: "Perfect Skinned Snake Carcass" */
			return -64072061;
		case 1885306923: /* GXTEntry: "Poor Skinned Snake Carcass" */
			return -202115307;
		case 1244107697: /* GXTEntry: "Good Skinned Water Snake Carcass" */
			return -1102234278;
		case -1201555940: /* GXTEntry: "Perfect Skinned Water Snake Carcass" */
			return 224070180;
		case -668487833: /* GXTEntry: "Poor Skinned Water Snake Carcass" */
			return 545086564;
		case -1178150148: /* GXTEntry: "Good Skinned Turkey Carcass" */
			return -1483573607;
		case 1171158615: /* GXTEntry: "Perfect Skinned Turkey Carcass" */
			return -1100372216;
		case -2123554124: /* GXTEntry: "Poor Skinned Turkey Carcass" */
			return 622704213;
		case 1806705761: /* GXTEntry: "Good Skinned Snapping Turtle Carcass" */
			return 1251284632;
		case 404581836: /* GXTEntry: "Perfect Skinned Snapping Turtle Carcass" */
			return 1760006100;
		case 987197489: /* GXTEntry: "Poor Skinned Snapping Turtle Carcass" */
			return 1196392781;
		case -1259715647: /* GXTEntry: "Good Plucked Vulture Carcass" */
			return 1740443788;
		case -1716717840: /* GXTEntry: "Perfect Plucked Vulture Carcass" */
			return 2126822237;
		case -196277007: /* GXTEntry: "Poor Plucked Vulture Carcass" */
			return -78084331;
		case -2064457926: /* GXTEntry: "Good Skinned Wolf Carcass" */
			return 327705288;
		case 561267454: /* GXTEntry: "Perfect Skinned Wolf Carcass" */
			return 1627515010;
		case 686253083: /* GXTEntry: "Poor Skinned Wolf Carcass" */
			return -1199577085;
		default:
			break;
	}
	return 0;
}

int func_173(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)
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
	if (func_231(uParam0, &uVar1, fParam2))
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
			if (!func_232(vVar17, vVar20, &vVar2))
			{
				return 2;
			}
		}
	}
	if (!func_233(uParam0->f_3, &iVar23))
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
				return func_234(uParam0, 1092616192 /* Float: 10f */);
			}
		}
		uParam0->f_21 = { vVar2 };
		uParam0->f_24 = vVar2.f_3;
		TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_3, vVar2, iParam1, 1147928963, 2, iParam4, iParam3);
	}
	return func_234(uParam0, 1092616192 /* Float: 10f */);
}

void func_174(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
}

bool func_182(int iParam0, int iParam1)
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

void func_186(int iParam0)
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

var func_222(bool bParam0)
{
	return func_270(bParam0, Global_1901929->f_637.f_30, Global_1901929->f_637.f_29);
}

var func_223(int iParam0, bool bParam1)
{
	return func_270(bParam1, ((*Global_1268274)[iParam0 /*20*/])->f_9, ((*Global_1268274)[iParam0 /*20*/])->f_8);
}

bool func_231(var uParam0, var uParam1, float fParam2)
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

bool func_232(vector3 vParam0, vector3 vParam3, var uParam6)
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

bool func_233(int iParam0, var uParam1)
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

int func_234(var uParam0, float fParam1)
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

var func_270(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

