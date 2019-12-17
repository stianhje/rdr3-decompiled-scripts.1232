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
	struct<47> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_60 = 1;
	var uLocal_61 = 0;
	struct<17> Local_62[32];
	struct<265> Local_607 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 1092616192, -1723181095, 1127153664, 1117782016, 1123024896, 1125515264, 1036831949, 1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_872 = 0;
	var uLocal_873 = 1;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 1065353216;
	var uLocal_877 = 0;
	var uLocal_878 = 1065353216;
	var uLocal_879 = 1077936128;
	var uLocal_880 = 1108082688;
	var uLocal_881 = 1113325568;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 3;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	float fLocal_914 = 0f;
	float fLocal_915 = 0f;
	var uLocal_916 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == la_alligator.__EntryFunction__

void func_1(int iParam0)
{
	aggregate.flow_controller.func_7(32, iParam0);
	aggregate.flow_controller.func_8();
	aggregate.aberdeenpigfarm.func_23();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 49, 40);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_13), 49, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_62, 545, 41);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_62[0 /*17*/]), 545, "m_clientData");
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_36()
{
	int iVar0;

	iVar0 = 11;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_60()
{
	int iVar0;
	int iVar1;

	if (aggregate.la_alligator.func_58())
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_34[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_34[iVar1]));
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
		while (iVar0 < 11)
		{
			(Local_62[iVar1 /*17*/])->f_2.f_2[iVar0] = 9000f;
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

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(11))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
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

bool func_179()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (MISC::IS_BIT_SET(Local_607.f_82.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = aggregate.la_alligator.func_212(iVar0);
			if (iVar2 == 0)
			{
				Jump @129; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_607.f_82.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_607.f_82.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @129; //curOff = 110
				}
				else
				{
					MISC::SET_BIT(&(Local_607.f_82.f_3), iVar0);
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

void func_182()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 11)
	{
		aggregate.la_alligator.func_213(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_188()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		aggregate.la_alligator.func_216(iVar0, bVar1, iVar2);
		aggregate.la_alligator.func_217(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_189()
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
	while (iVar0 < 1)
	{
		if (Local_607.f_82.f_129 >= 11)
		{
			Local_607.f_82.f_129 = 0;
		}
		iVar0 = Local_607.f_82.f_129;
		Local_607.f_82.f_129++;
		iVar7 = aggregate.annesburg.func_253(iVar0);
		iVar1 = &Local_607.f_82.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (aggregate.la_alligator.func_203(iVar7, 4))
		{
			aggregate.la_alligator.func_213(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_62[iVar3 /*17*/])->f_2.f_2[iVar0] > -1f)
			{
				(Local_62[iVar3 /*17*/])->f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_607.f_82.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_607.f_82.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_607.f_82.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_607.f_82.f_130), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_607.f_82.f_130, iVar0))
		{
			if (bVar4 || !aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_607.f_82.f_130), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_607.f_82.f_130), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_62[iVar3 /*17*/])->f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_62[iVar3 /*17*/])->f_2.f_1), iVar0);
				}
				aggregate.barcustomer_interaction.func_43(Local_607.f_82.f_131[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_62[iVar3 /*17*/])->f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!aggregate.barcustomer_interaction.func_42(Local_607.f_82.f_131[iVar0 /*3*/]) || aggregate.broom_scenario.func_18(Local_607.f_82.f_131[iVar0 /*3*/], 0.5f))))
			{
				aggregate.barcustomer_interaction.func_50(Local_607.f_82.f_131[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_62[iVar3 /*17*/])->f_2.f_1), iVar0);
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
	if (Local_607.f_82.f_130 != 0)
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

