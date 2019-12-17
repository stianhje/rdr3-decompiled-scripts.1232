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
	struct<48> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 255, 255, 0, 0, 0, 1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<38> Local_63[32];
	struct<615> Local_1280 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 255, -1, -1, 6, 1101004800, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 1101004800, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 1101004800, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 1101004800, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 1101004800, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 1101004800, 0, 0, 0, 3, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0 } ;
	var uLocal_1895 = 6;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 6;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 3;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	float fLocal_1915 = 0f;
	float fLocal_1916 = 0f;
	var uLocal_1917 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == la_alligator.__EntryFunction__

void func_1(int iParam0)
{
	aggregate.flow_controller.func_7(32, iParam0);
	aggregate.flow_controller.func_8();
	aggregate.ambient_fishing_scenario.func_7();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 50, 41);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_13), 50, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_63, 1217, 42);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_63[0 /*38*/]), 1217, "m_clientData");
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_30()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			Local_13.f_32.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

void func_37()
{
	int iVar0;

	iVar0 = 6;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_38()
{
	int iVar0;

	iVar0 = 4;
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
}

void func_61()
{
	int iVar0;
	int iVar1;

	if (aggregate.la_alligator.func_58())
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_19[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_19[iVar1]));
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

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate.la_alligator.func_58())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_26[iVar1 /*5*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_26[iVar1 /*5*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (aggregate.la_alligator.func_142(iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_64()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = aggregate.nb_beggar.func_150(aggregate.annesburg.func_253(iVar0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			MISC::_0xE98D55C5983F2509(iVar1);
		}
		aggregate.nb_beggar.func_151(aggregate.annesburg.func_253(iVar0));
		iVar0++;
	}
}

void func_94()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			(Local_63[iVar1 /*38*/])->f_2.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_95()
{
	aggregate.nb_beggar.func_174(20650);
}

void func_96()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	aggregate.la_bear.func_167(&(Local_1280.f_265), &(Local_1280.f_265.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_32.f_8[iVar0] = 0;
			Local_13.f_32.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_63[iVar1 /*38*/])->f_11.f_16[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_125()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_1280.f_614 >= 6)
		{
			Local_1280.f_614 = 0;
		}
		func_196(aggregate.annesburg.func_253(Local_1280.f_614));
		Local_1280.f_614++;
		iVar0++;
	}
}

bool func_183(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(6))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
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

bool func_185(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	iVar0 = 4;
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(iVar0))
	{
		*bParam0 = 1;
		return false;
	}
	bVar4 = false;
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { Local_1280.f_15 };
	iVar11 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			iVar3 = aggregate.la_alligator.func_205(iVar1, iVar2);
			if (iVar3 != 0 || aggregate.la_alligator.func_206(iVar2))
			{
				if (MISC::IS_BIT_SET((Local_1280.f_222.f_1[iVar1 /*41*/])->f_2, iVar2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_26[iVar1 /*5*/][iVar2]))
				{
					vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar8, 0f, aggregate.la_alligator.func_207(iVar1, iVar2)) };
					if (aggregate.la_alligator.func_206(iVar2))
					{
						iVar11 = PED::_0x9641A9A20310F6B8(((Local_1280.f_222.f_1[iVar1 /*41*/])->f_4[iVar2 /*9*/])->f_2, vVar5, 0f, 0f, 0f, 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							*bParam0 = 1;
						}
						else
						{
							(*Local_13.f_26[iVar1 /*5*/])[iVar2] = NETWORK::OBJ_TO_NET(iVar11);
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_26[iVar1 /*5*/][iVar2]))
							{
								*bParam0 = 1;
								return false;
							}
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							ENTITY::_0x9587913B9E772D29(iVar11, 0);
						}
					}
					else if (!aggregate.fme_archery.func_922((*Local_13.f_26[iVar1 /*5*/])[iVar2], iVar3, vVar5, 1, 0))
					{
						*bParam0 = 1;
					}
					else
					{
						iVar11 = NETWORK::NET_TO_OBJ(Local_13.f_26[iVar1 /*5*/][iVar2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							if (aggregate.la_alligator.func_209(iVar1, iVar2))
							{
								ENTITY::_0x9587913B9E772D29(iVar11, 0);
							}
						}
					}
					return false;
				}
				else
				{
					iVar11 = NETWORK::NET_TO_OBJ(Local_13.f_26[iVar1 /*5*/][iVar2]);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						*bParam0 = 1;
						return false;
					}
					ENTITY::SET_ENTITY_HEADING(iVar11, aggregate.la_alligator.func_210(iVar1, iVar2));
					MISC::SET_BIT(&((Local_1280.f_222.f_1[iVar1 /*41*/])->f_2), iVar2);
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	if (bVar4)
	{
		return false;
	}
	return true;
}

void func_196(int iParam0)
{
	int iVar0;

	if (aggregate.nb_animal_attack.func_372(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (aggregate.nb_animal_attack.func_373(iParam0, aggregate.annesburg.func_253(iVar0)))
			{
				if (!aggregate.nb_animal_attack.func_373(iParam0, aggregate.annesburg.func_253(iVar0)))
				{
					if (aggregate.fme_animal_tagging.func_894(iParam0, iVar0))
					{
						aggregate.fme_challenges.func_1108(&(Local_1280.f_614.f_15[iVar0]), 0, 0);
						aggregate.nb_animal_attack.func_269(iParam0, aggregate.annesburg.func_253(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_197()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(Local_1280.f_126.f_3, iVar0))
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
				if (!MISC::IS_BIT_SET(Local_1280.f_126.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_1280.f_126.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_1280.f_126.f_3), iVar0);
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

bool func_198()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (MISC::IS_BIT_SET((Local_1280.f_222.f_1[iVar0 /*41*/])->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = aggregate.la_alligator.func_205(iVar0, iVar1);
				if (aggregate.la_alligator.func_206(iVar1))
				{
					if (((Local_1280.f_222.f_1[iVar0 /*41*/])->f_4[iVar1 /*9*/])->f_3 == 0 || !PED::_0x93FFD92F05EC32FD(((Local_1280.f_222.f_1[iVar0 /*41*/])->f_4[iVar1 /*9*/])->f_3))
					{
						((Local_1280.f_222.f_1[iVar0 /*41*/])->f_4[iVar1 /*9*/])->f_3 = PED::_0x91FE941F9FCFB702(((Local_1280.f_222.f_1[iVar0 /*41*/])->f_4[iVar1 /*9*/])->f_2, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(((Local_1280.f_222.f_1[iVar0 /*41*/])->f_4[iVar1 /*9*/])->f_3))
					{
						bVar2 = true;
					}
					else
					{
						MISC::SET_BIT(&((Local_1280.f_222.f_1[iVar0 /*41*/])->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @326; //curOff = 237
				}
				else
				{
					if (!MISC::IS_BIT_SET(&(Local_1280.f_222.f_1[iVar0 /*41*/]), iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(Local_1280.f_222.f_1[iVar0 /*41*/], iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @326; //curOff = 301
					}
					else
					{
						MISC::SET_BIT(&((Local_1280.f_222.f_1[iVar0 /*41*/])->f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return false;
	}
	return true;
}

void func_200()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		aggregate.la_alligator.func_213(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_201()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_26[iVar1 /*5*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_26[iVar1 /*5*/][iVar2]);
				(Local_1280.f_222.f_1[iVar1 /*41*/])->f_4[iVar2 /*9*/] = iVar0;
			}
			else if (0 != aggregate.la_alligator.func_205(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_207()
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
		func_267(iVar0, bVar1, iVar2);
		aggregate.la_alligator.func_217(iVar0, bVar1, iVar2);
		aggregate.nb_beggar.func_260(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_208()
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
		if (Local_1280.f_126.f_74 >= 6)
		{
			Local_1280.f_126.f_74 = 0;
		}
		iVar0 = Local_1280.f_126.f_74;
		Local_1280.f_126.f_74++;
		iVar7 = aggregate.annesburg.func_253(iVar0);
		iVar1 = &Local_1280.f_126.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (aggregate.la_alligator.func_203(iVar7, 4))
		{
			aggregate.la_alligator.func_213(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_63[iVar3 /*38*/])->f_2.f_2[iVar0] > -1f)
			{
				(Local_63[iVar3 /*38*/])->f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_1280.f_126.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1280.f_126.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_1280.f_126.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_1280.f_126.f_75), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_1280.f_126.f_75, iVar0))
		{
			if (bVar4 || !aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1280.f_126.f_75), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_1280.f_126.f_75), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_63[iVar3 /*38*/])->f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_63[iVar3 /*38*/])->f_2.f_1), iVar0);
				}
				aggregate.barcustomer_interaction.func_43(Local_1280.f_126.f_76[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_63[iVar3 /*38*/])->f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!aggregate.barcustomer_interaction.func_42(Local_1280.f_126.f_76[iVar0 /*3*/]) || aggregate.broom_scenario.func_18(Local_1280.f_126.f_76[iVar0 /*3*/], 0.5f))))
			{
				aggregate.barcustomer_interaction.func_50(Local_1280.f_126.f_76[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_63[iVar3 /*38*/])->f_2.f_1), iVar0);
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
	if (Local_1280.f_126.f_75 != 0)
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

void func_209()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar10 = 255;
	iVar15 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_281();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_63[iVar15 /*38*/])->f_11.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 1)
	{
		if (Local_1280.f_265.f_114 >= 6)
		{
			Local_1280.f_265.f_114 = 0;
		}
		iVar1 = Local_1280.f_265.f_114;
		Local_1280.f_265.f_114++;
		iVar12++;
		iVar8 = aggregate.annesburg.func_253(iVar1);
		if (!aggregate.la_bear.func_247(iVar8))
		{
		}
		else if (aggregate.la_bear.func_248(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				aggregate.aberdeenpigfarm.func_154(iVar8);
				if (aggregate.la_bear.func_250(iVar8))
				{
					if (aggregate.la_bear.func_251(iVar8))
					{
						if (!aggregate.la_bear.func_252(iVar8))
						{
							aggregate.la_bear.func_253(iVar8);
						}
					}
					if (aggregate.la_bear.func_254(iVar8))
					{
						aggregate.la_bear.func_255(iVar8);
					}
				}
				else
				{
					if (aggregate.la_bear.func_247(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!aggregate.la_bear.func_257(iVar8, -1))
					{
						bVar2 = false;
						iVar3 = 0;
						if (aggregate.angryisolationist.func_40(iVar8))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (aggregate.la_bear.func_259(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (aggregate.fme_condor_egg.func_1292(vVar5.x, vVar5.y, &(Local_1280.f_265), &iVar4, 0, vVar5.z))
						{
							bVar2 = true;
						}
						else
						{
							iVar16 = EVENT::_0x796EECFF0C6D39BE(vVar5.x, 1, 1);
							if (iVar16 != 0)
							{
								iVar17 = EVENT::_0x822A001BCEA5BD81(vVar5.x, iVar16, 1, 1);
								if (ENTITY::DOES_ENTITY_EXIST(iVar17) && ENTITY::IS_ENTITY_A_PED(iVar17))
								{
									iVar18 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar17);
									if (PED::IS_PED_A_PLAYER(iVar18))
									{
										switch (iVar16)
										{
											case joaat("event_shot_fired"):
												if (!Local_1280.f_265.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(aggregate.camera_item.func_12(&(Local_1280.f_265))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_1280.f_265.f_1 & 4 != 0)
												{
													iVar4 = 4;
													bVar2 = true;
												}
												break;
										}
									}
								}
								EVENT::_0x1A5C5D350068A673(vVar5.x, 1);
							}
							if (!Local_1280.f_265.f_1 & 256 != 0)
							{
								if ((Local_63[iVar15 /*38*/])->f_11.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_63[iVar15 /*38*/])->f_11.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(aggregate.camera_item.func_12(&(Local_1280.f_265))))
									{
										iVar4 = 256;
										bVar2 = true;
									}
								}
							}
						}
						if (bVar2)
						{
							if (!aggregate.la_bear.func_262(iVar8, iVar4, iVar3))
							{
							}
							else
							{
								if (MISC::IS_BIT_SET((Local_63[iVar15 /*38*/])->f_11.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_63[iVar15 /*38*/])->f_11.f_7), iVar8);
								}
								aggregate.la_bear.func_263(iVar8, 1);
								Jump @767; //curOff = 679
								if (aggregate.la_bear.func_264(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_63[iVar15 /*38*/])->f_11.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_63[iVar15 /*38*/])->f_11.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_63[iVar15 /*38*/])->f_11.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_63[iVar15 /*38*/])->f_11.f_7), iVar8);
								}
								if (aggregate.la_bear.func_250(iVar8))
								{
									if (!aggregate.la_bear.func_259(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!aggregate.benedictpoint.func_17(iVar8))
											{
											}
											else
											{
												aggregate.aberdeenpigfarm.func_154(iVar8);
												aggregate.la_bear.func_269(iVar8);
												Jump @1017; //curOff = 821
												if (aggregate.la_bear.func_270(iVar8))
												{
												}
												else if (iVar13 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 8)
														{
															if (&Local_1280.f_265.f_116[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_1280.f_265.f_116[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_1280.f_265.f_116[iVar8];
																Local_1280.f_265.f_116[iVar8] = &Local_1280.f_265.f_116[iVar8] + 1;
															}
															iVar14++;
															if (aggregate.la_bear.func_271(iVar0, &uVar11, &iVar10, &uVar9))
															{
																if (!aggregate.la_bear.func_272(iVar8, iVar10))
																{
																	if (aggregate.la_bear.func_257(iVar8, iVar0))
																	{
																		if (!aggregate.la_bear.func_273(iVar8, uVar11, iVar10, uVar9))
																		{
																		}
																		else
																		{
																			aggregate.la_bear.func_274(iVar8, iVar10);
																		}
																	}
																}
															}
														}
														iVar13++;
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

void func_211()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	bVar0 = false;
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!aggregate.fm_mission_controller.func_4946(iVar1))
	{
		return;
	}
	func_316();
	if (aggregate.nb_beggar.func_241())
	{
		if (aggregate.nb_beggar.func_308(2, -1) || aggregate.nb_beggar.func_308(1, -1))
		{
			aggregate.la_alligator.func_227(1);
			aggregate.la_alligator.func_227(2);
			aggregate.nb_animal_attack.func_101(2);
			aggregate.nb_animal_attack.func_101(1);
		}
	}
	else
	{
		bVar2 = false;
		if (aggregate.nb_beggar.func_311() || aggregate.nb_beggar.func_312())
		{
			bVar2 = true;
			if (aggregate.nb_beggar.func_312() || (!aggregate.nb_animal_attack.func_161(8) && !aggregate.nb_beggar.func_308(4, iVar1)))
			{
				aggregate.bigvalleyomj.func_36(Local_1280.f_429, Local_13.f_47);
				Local_1280.f_429 = Local_13.f_47;
				iVar3 = 0;
				while (iVar3 < 6)
				{
					aggregate.bigvalleyomj.func_36(aggregate.annesburg.func_253(iVar3), Local_13.f_47);
					iVar3++;
				}
				if (aggregate.nb_beggar.func_316())
				{
					aggregate.nb_beggar.func_317(Local_1280.f_429.f_3.f_1);
				}
				bVar0 = true;
				if (aggregate.nb_beggar.func_311())
				{
					aggregate.la_alligator.func_227(4);
				}
				else
				{
					aggregate.la_alligator.func_227(4);
				}
			}
			else if (!aggregate.nb_animal_attack.func_161(8))
			{
				if (!aggregate.nb_animal_attack.func_161(4))
				{
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					aggregate.nb_animal_attack.func_101(8);
				}
			}
			else if (aggregate.nb_animal_attack.func_161(4))
			{
				if (aggregate.nb_beggar.func_308(4, iVar1))
				{
					aggregate.la_alligator.func_227(4);
				}
			}
			else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate.nb_animal_attack.func_101(4);
				aggregate.nb_animal_attack.func_101(8);
			}
		}
		else if (aggregate.nb_beggar.func_308(4, iVar1))
		{
			aggregate.la_alligator.func_227(4);
		}
		if (!aggregate.nb_animal_attack.func_161(1))
		{
			if (aggregate.nb_animal_attack.func_161(1))
			{
				aggregate.nb_animal_attack.func_101(1);
			}
			if (aggregate.nb_beggar.func_316())
			{
				iVar4 = Local_1280.f_429.f_3.f_1;
				if (aggregate.nb_beggar.func_319(iVar4))
				{
					if (bVar0)
					{
						aggregate.nb_beggar.func_317(iVar4);
					}
					if (aggregate.aberdeenpigfarm.func_175((Local_1280.f_429.f_10[iVar4 /*29*/])->f_3, 16))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					}
					iVar6 = NETWORK::PARTICIPANT_ID_TO_INT();
					iVar5 = 0;
					while (iVar5 < 3)
					{
						if (!aggregate.annesburg.func_217(&((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])))
						{
						}
						else
						{
							if (bVar2 || aggregate.aberdeenpigfarm.func_175(((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 8))
							{
								if (aggregate.doc_book.func_70(&((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									aggregate.binoculars.func_37(&((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
								}
								aggregate.aberdeenpigfarm.func_163(&(((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1), 8);
							}
							else if (!aggregate.aberdeenpigfarm.func_175(((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 1))
							{
								if (aggregate.aberdeenpigfarm.func_175(((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 4))
								{
									if (aggregate.fme_animal_tagging.func_1524() < ((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_7)
									{
										if (aggregate.doc_book.func_70(&((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
										{
											aggregate.binoculars.func_37(&((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
										}
									}
									else if (!aggregate.doc_book.func_70(&((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
									{
										aggregate.binoculars.func_37(&((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
									}
								}
								else if (!aggregate.doc_book.func_70(&((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									aggregate.binoculars.func_37(&((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
								}
							}
							if (aggregate.camera_item.func_31(&((Local_1280.f_429.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1))
							{
								if (!aggregate.fme_animal_tagging.func_516(iVar4, iVar5, Local_1280.f_429))
								{
								}
								else
								{
									Local_1280.f_429.f_7 = PLAYER::PLAYER_ID();
									Local_1280.f_429.f_8 = iVar4;
									Local_1280.f_429.f_9 = iVar5;
									(Local_63[iVar6 /*38*/])->f_35.f_1 = iVar4;
									(Local_63[iVar6 /*38*/])->f_35.f_2 = iVar5;
									aggregate.bigvalleyomj.func_36(iVar4, iVar5);
									aggregate.la_alligator.func_227(1);
									aggregate.la_alligator.func_227(2);
									aggregate.nb_animal_attack.func_101(2);
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		else
		{
			if (!aggregate.nb_animal_attack.func_161(2))
			{
				if (!aggregate.nb_animal_attack.func_161(1))
				{
					aggregate.nb_animal_attack.func_101(1);
					aggregate.nb_animal_attack.func_101(2);
				}
			}
			if (!aggregate.nb_beggar.func_308(2, -1))
			{
				if (aggregate.nb_animal_attack.func_161(2))
				{
					aggregate.bigvalleyomj.func_36(Local_1280.f_429.f_8, Local_1280.f_429.f_9);
					aggregate.la_alligator.func_227(2);
				}
			}
		}
	}
}

var func_250(var uParam0, var uParam1, var uParam2)
{
	return uParam2;
}

void func_264()
{
	int iVar0;

	Local_1280.f_265.f_64 = 0;
	Local_1280.f_265.f_63 = 0;
	Local_1280.f_265.f_66 = 0;
	Local_1280.f_265.f_67 = 0;
	Local_1280.f_265.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1280.f_265.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_1280.f_265.f_85[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1280.f_265.f_78[iVar0]);
		aggregate.la_bear.func_309(iVar0);
		iVar0++;
	}
}

void func_265()
{
	int iVar0;

	Local_1280.f_429.f_5 = 0;
	Local_1280.f_429.f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		aggregate.nb_beggar.func_360(aggregate.annesburg.func_253(iVar0));
		iVar0++;
	}
}

void func_267(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_1280.f_265.f_64 = (Local_1280.f_265.f_64 || (Local_63[iParam0 /*38*/])->f_11.f_1);
		Local_1280.f_265.f_63 = (Local_1280.f_265.f_63 || (Local_63[iParam0 /*38*/])->f_11);
		Local_1280.f_265.f_66 = (Local_1280.f_265.f_66 || (Local_63[iParam0 /*38*/])->f_11.f_3);
		Local_1280.f_265.f_67 = (Local_1280.f_265.f_67 || (Local_63[iParam0 /*38*/])->f_11.f_4);
		Local_1280.f_265.f_68 = (Local_1280.f_265.f_68 || (Local_63[iParam0 /*38*/])->f_11.f_5);
		Local_1280.f_265.f_69 = (Local_1280.f_265.f_69 || (Local_63[iParam0 /*38*/])->f_11.f_6);
		Local_1280.f_265.f_112 = (Local_1280.f_265.f_112 || (Local_63[iParam0 /*38*/])->f_11.f_2);
		Local_1280.f_265.f_70 = (Local_1280.f_265.f_70 && (Local_63[iParam0 /*38*/])->f_11.f_7);
		iVar0 = 0;
		while (iVar0 < 6)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_63[iParam0 /*38*/])->f_11.f_9[iVar0], Local_1280.f_265.f_71[iVar0], Local_1280.f_265.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_63[iParam0 /*38*/])->f_11.f_9[iVar0], Local_1280.f_265.f_71[iVar0], Local_1280.f_265.f_78[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_63[iParam0 /*38*/])->f_11.f_9[iVar0], Local_1280.f_265.f_71[iVar0], Local_1280.f_265.f_85[iVar0]);
			aggregate.la_bear.func_310(aggregate.annesburg.func_253(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_281()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar4 = aggregate.annesburg.func_253(iVar0);
		if (!aggregate.la_bear.func_247(iVar4))
		{
		}
		else if (!aggregate.la_bear.func_259(iVar4, iVar5))
		{
			if (aggregate.la_bear.func_248(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					aggregate.la_bear.func_269(iVar4);
					aggregate.aberdeenpigfarm.func_154(iVar4);
				}
			}
		}
		iVar0++;
	}
}

void func_316()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.nb_beggar.func_406(0, 0);
	if (iVar0 != Local_1280.f_429.f_3)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (aggregate.nb_beggar.func_316())
			{
				aggregate.aberdeenpigfarm.func_154(Local_1280.f_429.f_3.f_1);
				aggregate.nb_beggar.func_151(Local_1280.f_429.f_3.f_1);
			}
			Local_1280.f_429.f_3 = iVar0;
			Local_1280.f_429.f_3.f_1 = -1;
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = 0;
				while (iVar2 < aggregate.annesburg.func_253(6))
				{
					if (iVar1 == aggregate.nb_beggar.func_150(iVar2))
					{
						Local_1280.f_429.f_3.f_1 = iVar2;
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (aggregate.nb_beggar.func_316())
			{
				aggregate.aberdeenpigfarm.func_154(Local_1280.f_429.f_3.f_1);
				aggregate.nb_beggar.func_317(Local_1280.f_429.f_3.f_1);
			}
		}
		else
		{
			if (aggregate.nb_beggar.func_316())
			{
				aggregate.aberdeenpigfarm.func_154(Local_1280.f_429.f_3.f_1);
				aggregate.nb_beggar.func_151(Local_1280.f_429.f_3.f_1);
			}
			Local_1280.f_429.f_3 = iVar0;
			Local_1280.f_429.f_3.f_1 = -1;
		}
	}
}

void func_364(var uParam0, var uParam1)
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

