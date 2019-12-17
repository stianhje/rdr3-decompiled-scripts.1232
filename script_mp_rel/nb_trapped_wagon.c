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
	struct<51> Local_17 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 255, 1, 0, 1 } ;
	var uLocal_68 = 1;
	var uLocal_69 = 0;
	struct<11> Local_70[32];
	struct<214> Local_423 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 5, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1 } ;
	var uLocal_637 = 1;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == la_alligator.__EntryFunction__

void func_1(int iParam0)
{
	aggregate.flow_controller.func_7(32, iParam0);
	aggregate.flow_controller.func_8();
	aggregate.aberdeenpigfarm.func_23();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_17, 53, 41);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_17), 53, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_70, 353, 42);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_70[0 /*11*/]), 353, "m_clientData");
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_36()
{
	int iVar0;

	iVar0 = 1;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_60()
{
	int iVar0;
	int iVar1;

	if (aggregate.la_alligator.func_58())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_17.f_48[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_17.f_48[iVar1]));
				aggregate.la_alligator.func_141(iVar1);
				EVENT::_0xAD8F2424C6E1E3A8(iVar0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					PED::_0x39A2FC5AF55A52B1(iVar0, -1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_92()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			(Local_70[iVar1 /*11*/])->f_7.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

bool func_171(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		if (aggregate.la_alligator.func_203(iVar2, 4))
		{
		}
		else if (!aggregate.la_alligator.func_204(iVar2, uParam0, &bVar1))
		{
			if (*uParam0)
			{
				return false;
			}
			if (bVar1)
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
			if (bVar0)
			{
				return false;
			}
			return true;
		}
	}
}

bool func_182()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (MISC::IS_BIT_SET(Local_423.f_171.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = aggregate.la_alligator.func_212(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_423.f_171.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_423.f_171.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_423.f_171.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

void func_185()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		aggregate.la_alligator.func_213(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_193()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	iVar0 = 0;
	while (iVar0 < 0)
	{
		if (Local_423.f_171.f_19 >= 1)
		{
			Local_423.f_171.f_19 = 0;
		}
		iVar0 = Local_423.f_171.f_19;
		Local_423.f_171.f_19++;
		iVar7 = aggregate.annesburg.func_253(iVar0);
		iVar1 = &Local_423.f_171.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (aggregate.la_alligator.func_203(iVar7, 4))
		{
			aggregate.la_alligator.func_213(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_70[iVar3 /*11*/])->f_7.f_2[iVar0] > -1f)
			{
				(Local_70[iVar3 /*11*/])->f_7.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_423.f_171.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_423.f_171.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_423.f_171.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_423.f_171.f_20), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_423.f_171.f_20, iVar0))
		{
			if (bVar4 || !aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_423.f_171.f_20), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_423.f_171.f_20), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_70[iVar3 /*11*/])->f_7.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_70[iVar3 /*11*/])->f_7.f_1), iVar0);
				}
				aggregate.barcustomer_interaction.func_43(Local_423.f_171.f_21[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_70[iVar3 /*11*/])->f_7.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!aggregate.barcustomer_interaction.func_42(Local_423.f_171.f_21[iVar0 /*3*/]) || aggregate.broom_scenario.func_18(Local_423.f_171.f_21[iVar0 /*3*/], 0.5f))))
			{
				aggregate.barcustomer_interaction.func_50(Local_423.f_171.f_21[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_70[iVar3 /*11*/])->f_7.f_1), iVar0);
			}
		}
		if (aggregate.la_alligator.func_203(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (aggregate.benedictpoint.func_17(iVar7))
						{
							if (!aggregate.la_alligator.func_204(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									aggregate.la_alligator.func_225(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !aggregate.la_alligator.func_203(iVar7, 8))
			{
				if (!aggregate.benedictpoint.func_17(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_423.f_171.f_20 != 0)
	{
		if (!aggregate.la_alligator.func_226(1, -1))
		{
			aggregate.la_alligator.func_227(1);
		}
	}
	else if (aggregate.la_alligator.func_226(1, -1))
	{
		aggregate.la_alligator.func_227(1);
	}
}

void func_216(int iParam0)
{
	switch (iParam0->f_9)
	{
		case 377515857:
			func_245(iParam0);
			break;
		case 398686063:
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(513747494, PLAYER::GET_PLAYER_PED(iParam0->f_1), 20f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1127481344 /* Float: 180f */, 0, 0, -1, -1);
			break;
		case 107137171:
			break;
		case 1773639449:
			if (aggregate.fishing_core.func_39(PLAYER::PLAYER_PED_ID(), Local_423.f_15, 1) < 25f)
			{
				aggregate.nb_animal_attack.func_598();
			}
			break;
	}
}

void func_238(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[15] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[15])))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 24, &(Global_1051202->f_16[15]));
	aggregate.bigvalleyomj.func_36(uParam0, uParam0->f_1);
}

void func_245(int iParam0)
{
	if (!aggregate.la_bear.func_250(iParam0->f_13) || func_262(iParam0->f_13))
	{
		if (func_263(iParam0->f_11, iParam0->f_12, iParam0->f_13))
		{
			if (!func_262(iParam0->f_13))
			{
				aggregate.nb_sick_horse.func_252(iParam0->f_13);
			}
		}
	}
}

bool func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return true;
	}
	return false;
}

bool func_263(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	if (!func_271(iParam2, &vVar0))
	{
		return false;
	}
	if (!aggregate.fme_escaped_convicts.func_1690(&(Local_423.f_18.f_45), vVar0, 0, -1, 0, 0))
	{
		return false;
	}
	if (iParam2 == 0 || iParam2 == 1)
	{
		if (aggregate.nb_animal_attack.func_356(iParam0, 200f, -1, 0))
		{
			aggregate.nb_animal_attack.func_589(1891783641, aggregate.fm_deathmatch_controller.func_2604(iParam0), 1);
		}
	}
	return true;
}

bool func_271(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "ORESH_1_IDLE", 24);
			break;
		case 1:
			StringCopy(sParam1, "ORESH_1_CALLOUT", 24);
			break;
		case 2:
			StringCopy(sParam1, "ORESH_1_APPRCH", 24);
			break;
		case 3:
			StringCopy(sParam1, "ORESH_1_HELP", 24);
			break;
		case 4:
			StringCopy(sParam1, "ORESH_1_WAITING", 24);
			break;
		case 5:
			StringCopy(sParam1, "ORESH_1_THANKS", 24);
			break;
		case 6:
			StringCopy(sParam1, "ORESH_1_LEAVES", 24);
			break;
		case 7:
			StringCopy(sParam1, "ORESH_1_AGGRO", 24);
			break;
		default:
			return false;
	}
	return true;
}

