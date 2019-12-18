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
	struct<110> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0 } ;
	var uLocal_123 = 9;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 9;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	struct<44> Local_143[32];
	struct<384> Local_1552 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 1092616192, -1723181095, 1127153664, 1117782016, 1123024896, 1125515264, 1036831949, 1073741824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1936 = 0;
	var uLocal_1937 = 1;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 1065353216;
	var uLocal_1941 = 0;
	var uLocal_1942 = 1065353216;
	var uLocal_1943 = 1077936128;
	var uLocal_1944 = 1108082688;
	var uLocal_1945 = 1113325568;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 3;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	float fLocal_1978 = 0f;
	float fLocal_1979 = 0f;
	var uLocal_1980 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4264();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 130, 40);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_13), 130, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_143, 1409, 41);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_143[0 /*44*/]), 1409, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_30()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Local_13.f_109.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

void func_37()
{
	int iVar0;

	iVar0 = 9;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_61()
{
	int iVar0;
	int iVar1;

	if (aggregate_func_2109())
	{
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_96[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_13.f_96[iVar1]));
				aggregate_func_2372(iVar1);
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

void func_93()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			(Local_143[iVar1 /*44*/])->f_2.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_94()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	aggregate_func_7124(&(Local_1552.f_239), &(Local_1552.f_239.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_109.f_11[iVar0] = 0;
			Local_13.f_109.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_143[iVar1 /*44*/])->f_14.f_19[iVar0] = 0;
		}
		iVar0++;
	}
}

bool func_174(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(9))
	{
		*bParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 9)
	{
		if (aggregate_func_5277(iVar2, 4))
		{
		}
		else if (!aggregate_func_257(iVar2, bParam0, &bVar1))
		{
			if (*bParam0)
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
	while (iVar0 < 9)
	{
		if (MISC::IS_BIT_SET(Local_1552.f_85.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = aggregate_func_4849(iVar0);
			if (iVar2 == 0)
			{
				Jump @129; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_1552.f_85.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_1552.f_85.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @129; //curOff = 110
				}
				else
				{
					MISC::SET_BIT(&(Local_1552.f_85.f_3), iVar0);
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
	while (iVar0 < 9)
	{
		aggregate_func_325(iVar0, iVar1, 0);
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
	while (iVar0 < 1)
	{
		if (Local_1552.f_85.f_107 >= 9)
		{
			Local_1552.f_85.f_107 = 0;
		}
		iVar0 = Local_1552.f_85.f_107;
		Local_1552.f_85.f_107++;
		iVar7 = aggregate_func_4270(iVar0);
		iVar1 = &Local_1552.f_85.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (aggregate_func_5277(iVar7, 4))
		{
			aggregate_func_325(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_143[iVar3 /*44*/])->f_2.f_2[iVar0] > -1f)
			{
				(Local_143[iVar3 /*44*/])->f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_1552.f_85.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1552.f_85.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_1552.f_85.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_1552.f_85.f_108), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_1552.f_85.f_108, iVar0))
		{
			if (bVar4 || !aggregate_func_1267(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1552.f_85.f_108), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (aggregate_func_1267(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_1552.f_85.f_108), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_143[iVar3 /*44*/])->f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_143[iVar3 /*44*/])->f_2.f_1), iVar0);
				}
				aggregate_func_4283(Local_1552.f_85.f_109[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_143[iVar3 /*44*/])->f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!aggregate_func_4260(Local_1552.f_85.f_109[iVar0 /*3*/]) || aggregate_func_4628(Local_1552.f_85.f_109[iVar0 /*3*/], 0.5f))))
			{
				aggregate_func_4313(Local_1552.f_85.f_109[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_143[iVar3 /*44*/])->f_2.f_1), iVar0);
			}
		}
		if (aggregate_func_5277(iVar7, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (aggregate_func_4311(iVar7))
						{
							if (!aggregate_func_257(iVar7, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									aggregate_func_5014(iVar7, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && !aggregate_func_5277(iVar7, 8))
			{
				if (!aggregate_func_4311(iVar7))
				{
					PED::_0x7043D0681285BA2D(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1552.f_85.f_108 != 0)
	{
		if (!aggregate_func_3434(1, -1))
		{
			aggregate_func_2922(1);
		}
	}
	else if (aggregate_func_3434(1, -1))
	{
		aggregate_func_2922(1);
	}
}

void func_194()
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
	func_245();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_143[iVar15 /*44*/])->f_14.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 1)
	{
		if (Local_1552.f_239.f_132 >= 9)
		{
			Local_1552.f_239.f_132 = 0;
		}
		iVar1 = Local_1552.f_239.f_132;
		Local_1552.f_239.f_132++;
		iVar12++;
		iVar8 = aggregate_func_4270(iVar1);
		if (!aggregate_func_2995(iVar8))
		{
		}
		else if (aggregate_func_2418(iVar8, &vVar5))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(vVar5.x))
			{
			}
			else
			{
				aggregate_func_4239(iVar8);
				if (aggregate_func_2986(iVar8))
				{
					if (aggregate_func_2419(iVar8))
					{
						if (!aggregate_func_3527(iVar8))
						{
							aggregate_func_2411(iVar8);
						}
					}
					if (aggregate_func_2420(iVar8))
					{
						aggregate_func_2421(iVar8);
					}
				}
				else
				{
					if (aggregate_func_2995(iVar8))
					{
						if (ENTITY::DOES_ENTITY_EXIST(vVar5.x) && !ENTITY::IS_ENTITY_DEAD(vVar5.x))
						{
							PED::SET_PED_RESET_FLAG(vVar5.x, 42, true);
						}
					}
					if (!aggregate_func_2422(iVar8, -1))
					{
						bVar2 = false;
						iVar3 = 0;
						if (aggregate_func_4484(iVar8))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (aggregate_func_2148(iVar8, iVar15))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (aggregate_func_415(vVar5.x, vVar5.y, &(Local_1552.f_239), &iVar4, 0, vVar5.z))
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
												if (!Local_1552.f_239.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(aggregate_func_4249(&(Local_1552.f_239))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_1552.f_239.f_1 & 4 != 0)
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
							if (!Local_1552.f_239.f_1 & 256 != 0)
							{
								if ((Local_143[iVar15 /*44*/])->f_14.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_143[iVar15 /*44*/])->f_14.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(aggregate_func_4249(&(Local_1552.f_239))))
									{
										iVar4 = 256;
										bVar2 = true;
									}
								}
							}
						}
						if (bVar2)
						{
							if (!aggregate_func_6717(iVar8, iVar4, iVar3))
							{
							}
							else
							{
								if (MISC::IS_BIT_SET((Local_143[iVar15 /*44*/])->f_14.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_143[iVar15 /*44*/])->f_14.f_7), iVar8);
								}
								aggregate_func_1729(iVar8, 1);
								Jump @757; //curOff = 669
								if (aggregate_func_689(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_143[iVar15 /*44*/])->f_14.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_143[iVar15 /*44*/])->f_14.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_143[iVar15 /*44*/])->f_14.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_143[iVar15 /*44*/])->f_14.f_7), iVar8);
								}
								if (aggregate_func_2986(iVar8))
								{
									if (!aggregate_func_2148(iVar8, -1))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
										{
											if (!aggregate_func_4311(iVar8))
											{
											}
											else
											{
												aggregate_func_4239(iVar8);
												aggregate_func_2136(iVar8);
												Jump @1002; //curOff = 811
												if (aggregate_func_1730(iVar8))
												{
												}
												else if (iVar13 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 8)
														{
															if (&Local_1552.f_239.f_134[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_1552.f_239.f_134[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_1552.f_239.f_134[iVar8];
																Local_1552.f_239.f_134[iVar8] = &Local_1552.f_239.f_134[iVar8] + 1;
															}
															iVar14++;
															if (aggregate_func_690(iVar0, &uVar11, &iVar10, &uVar9))
															{
																if (!aggregate_func_3528(iVar8, iVar10))
																{
																	if (aggregate_func_2422(iVar8, iVar0))
																	{
																		if (!aggregate_func_7254(iVar8, uVar11, iVar10, uVar9))
																		{
																		}
																		else
																		{
																			aggregate_func_2423(iVar8, iVar10);
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

void func_230()
{
	int iVar0;

	Local_1552.f_239.f_64 = 0;
	Local_1552.f_239.f_63 = 0;
	Local_1552.f_239.f_66 = 0;
	Local_1552.f_239.f_67 = 0;
	Local_1552.f_239.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1552.f_239.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_1552.f_239.f_91[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_1552.f_239.f_81[iVar0]);
		aggregate_func_2424(iVar0);
		iVar0++;
	}
}

void func_232(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_1552.f_239.f_64 = (Local_1552.f_239.f_64 || (Local_143[iParam0 /*44*/])->f_14.f_1);
		Local_1552.f_239.f_63 = (Local_1552.f_239.f_63 || (Local_143[iParam0 /*44*/])->f_14);
		Local_1552.f_239.f_66 = (Local_1552.f_239.f_66 || (Local_143[iParam0 /*44*/])->f_14.f_3);
		Local_1552.f_239.f_67 = (Local_1552.f_239.f_67 || (Local_143[iParam0 /*44*/])->f_14.f_4);
		Local_1552.f_239.f_68 = (Local_1552.f_239.f_68 || (Local_143[iParam0 /*44*/])->f_14.f_5);
		Local_1552.f_239.f_69 = (Local_1552.f_239.f_69 || (Local_143[iParam0 /*44*/])->f_14.f_6);
		Local_1552.f_239.f_130 = (Local_1552.f_239.f_130 || (Local_143[iParam0 /*44*/])->f_14.f_2);
		Local_1552.f_239.f_70 = (Local_1552.f_239.f_70 && (Local_143[iParam0 /*44*/])->f_14.f_7);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_143[iParam0 /*44*/])->f_14.f_9[iVar0], Local_1552.f_239.f_71[iVar0], Local_1552.f_239.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_143[iParam0 /*44*/])->f_14.f_9[iVar0], Local_1552.f_239.f_71[iVar0], Local_1552.f_239.f_81[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_143[iParam0 /*44*/])->f_14.f_9[iVar0], Local_1552.f_239.f_71[iVar0], Local_1552.f_239.f_91[iVar0]);
			aggregate_func_691(aggregate_func_4270(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_245()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar4 = aggregate_func_4270(iVar0);
		if (!aggregate_func_2995(iVar4))
		{
		}
		else if (!aggregate_func_2148(iVar4, iVar5))
		{
			if (aggregate_func_2418(iVar4, &iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar6, 0, 0))
				{
					aggregate_func_2136(iVar4);
					aggregate_func_4239(iVar4);
				}
			}
		}
		iVar0++;
	}
}

