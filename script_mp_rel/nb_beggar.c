#region Local Var
	struct<36> Local_0 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 0, 0, 255, 255, 0, 255, 0, -1, 0, 0, 0, 0, 0, 1, 0, 1, 2, 0, 0, 0, 1, 0, 1, 0, 0 } ;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	struct<27> Local_38[32];
	struct<196> Local_903 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = -1;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 255;
	var uLocal_1106 = -1;
	var uLocal_1107 = -1;
	var uLocal_1108 = 1;
	var uLocal_1109 = 1101004800;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 3;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 1;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = -1;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 1;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = -1;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 1;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = -1;
	var uLocal_1138 = 7;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = -1;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	float fLocal_1153 = 0f;
	float fLocal_1154 = 0f;
	var uLocal_1155 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4264();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 38, 41);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_0), 38, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_38, 865, 42);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_38[0 /*27*/]), 865, "m_clientData");
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
		while (iVar0 < 1)
		{
			Local_0.f_30.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

void func_38()
{
	int iVar0;

	iVar0 = 2;
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_2109())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_26[iVar1 /*3*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_0.f_26[iVar1 /*3*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (aggregate_func_3541(iVar2))
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
	while (iVar0 < 1)
	{
		iVar1 = aggregate_func_7927(aggregate_func_4270(iVar0));
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			MISC::_0xE98D55C5983F2509(iVar1);
		}
		aggregate_func_7928(aggregate_func_4270(iVar0));
		iVar0++;
	}
}

void func_95()
{
	aggregate_func_7929(20567);
}

void func_96()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	aggregate_func_7124(&(Local_903.f_84), &(Local_903.f_84.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_0.f_30.f_3[iVar0] = 0;
			Local_0.f_30.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_38[iVar1 /*27*/])->f_10.f_11[iVar0] = 0;
		}
		iVar0++;
	}
}

bool func_184(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	iVar0 = 2;
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(iVar0))
	{
		*bParam0 = 1;
		return false;
	}
	bVar4 = false;
	vVar5 = { 0f, 0f, 0f };
	vVar8 = { Local_903.f_15 };
	iVar11 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar3 = aggregate_func_7195(iVar1, iVar2);
			if (iVar3 != 0 || aggregate_func_3563(iVar2))
			{
				if (MISC::IS_BIT_SET((Local_903.f_59.f_1[iVar1 /*23*/])->f_2, iVar2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_26[iVar1 /*3*/][iVar2]))
				{
					vVar5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar8, 0f, aggregate_func_7196(iVar1, iVar2)) };
					if (aggregate_func_3563(iVar2))
					{
						iVar11 = PED::_0x9641A9A20310F6B8(((Local_903.f_59.f_1[iVar1 /*23*/])->f_4[iVar2 /*9*/])->f_2, vVar5, 0f, 0f, 0f, 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							*bParam0 = 1;
						}
						else
						{
							(*Local_0.f_26[iVar1 /*3*/])[iVar2] = NETWORK::OBJ_TO_NET(iVar11);
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_26[iVar1 /*3*/][iVar2]))
							{
								*bParam0 = 1;
								return false;
							}
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							ENTITY::_0x9587913B9E772D29(iVar11, 0);
						}
					}
					else if (!aggregate_func_930((*Local_0.f_26[iVar1 /*3*/])[iVar2], iVar3, vVar5, 1, 0))
					{
						*bParam0 = 1;
					}
					else
					{
						iVar11 = NETWORK::NET_TO_OBJ(Local_0.f_26[iVar1 /*3*/][iVar2]);
						if (ENTITY::DOES_ENTITY_EXIST(iVar11))
						{
							ENTITY::_0xA91E6CF94404E8C9(iVar11);
							if (aggregate_func_7197(iVar1, iVar2))
							{
								ENTITY::_0x9587913B9E772D29(iVar11, 0);
							}
						}
					}
					return false;
				}
				else
				{
					iVar11 = NETWORK::NET_TO_OBJ(Local_0.f_26[iVar1 /*3*/][iVar2]);
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						*bParam0 = 1;
						return false;
					}
					ENTITY::SET_ENTITY_HEADING(iVar11, aggregate_func_7198(iVar1, iVar2));
					MISC::SET_BIT(&((Local_903.f_59.f_1[iVar1 /*23*/])->f_2), iVar2);
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

bool func_195()
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
		while (iVar1 < 2)
		{
			if (MISC::IS_BIT_SET((Local_903.f_59.f_1[iVar0 /*23*/])->f_1, iVar1))
			{
			}
			else
			{
				iVar3 = aggregate_func_7195(iVar0, iVar1);
				if (aggregate_func_3563(iVar1))
				{
					if (((Local_903.f_59.f_1[iVar0 /*23*/])->f_4[iVar1 /*9*/])->f_3 == 0 || !PED::_0x93FFD92F05EC32FD(((Local_903.f_59.f_1[iVar0 /*23*/])->f_4[iVar1 /*9*/])->f_3))
					{
						((Local_903.f_59.f_1[iVar0 /*23*/])->f_4[iVar1 /*9*/])->f_3 = PED::_0x91FE941F9FCFB702(((Local_903.f_59.f_1[iVar0 /*23*/])->f_4[iVar1 /*9*/])->f_2, 0);
						bVar2 = true;
					}
					else if (!PED::_0xB0B2C6D170B0E8E5(((Local_903.f_59.f_1[iVar0 /*23*/])->f_4[iVar1 /*9*/])->f_3))
					{
						bVar2 = true;
					}
					else
					{
						MISC::SET_BIT(&((Local_903.f_59.f_1[iVar0 /*23*/])->f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @326; //curOff = 237
				}
				else
				{
					if (!MISC::IS_BIT_SET(&(Local_903.f_59.f_1[iVar0 /*23*/]), iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(Local_903.f_59.f_1[iVar0 /*23*/], iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @326; //curOff = 301
					}
					else
					{
						MISC::SET_BIT(&((Local_903.f_59.f_1[iVar0 /*23*/])->f_1), iVar1);
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

void func_198()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_0.f_26[iVar1 /*3*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_0.f_26[iVar1 /*3*/][iVar2]);
				(Local_903.f_59.f_1[iVar1 /*23*/])->f_4[iVar2 /*9*/] = iVar0;
			}
			else if (0 != aggregate_func_7195(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_205()
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
		if (Local_903.f_33.f_19 >= 1)
		{
			Local_903.f_33.f_19 = 0;
		}
		iVar0 = Local_903.f_33.f_19;
		Local_903.f_33.f_19++;
		iVar7 = aggregate_func_4270(iVar0);
		iVar1 = &Local_903.f_33.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (aggregate_func_5277(iVar7, 4))
		{
			aggregate_func_325(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_38[iVar3 /*27*/])->f_6.f_2[iVar0] > -1f)
			{
				(Local_38[iVar3 /*27*/])->f_6.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_903.f_33.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_903.f_33.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_903.f_33.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_903.f_33.f_20), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_903.f_33.f_20, iVar0))
		{
			if (bVar4 || !aggregate_func_1267(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_903.f_33.f_20), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (aggregate_func_1267(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_903.f_33.f_20), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_38[iVar3 /*27*/])->f_6.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_38[iVar3 /*27*/])->f_6.f_1), iVar0);
				}
				aggregate_func_4283(Local_903.f_33.f_21[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_38[iVar3 /*27*/])->f_6.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!aggregate_func_4260(Local_903.f_33.f_21[iVar0 /*3*/]) || aggregate_func_4628(Local_903.f_33.f_21[iVar0 /*3*/], 0.5f))))
			{
				aggregate_func_4313(Local_903.f_33.f_21[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_38[iVar3 /*27*/])->f_6.f_1), iVar0);
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
	if (Local_903.f_33.f_20 != 0)
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

void func_206()
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
	func_272();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_38[iVar15 /*27*/])->f_10.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 1)
	{
		if (Local_903.f_84.f_84 >= 1)
		{
			Local_903.f_84.f_84 = 0;
		}
		iVar1 = Local_903.f_84.f_84;
		Local_903.f_84.f_84++;
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
						else if (aggregate_func_415(vVar5.x, vVar5.y, &(Local_903.f_84), &iVar4, 0, vVar5.z))
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
												if (!Local_903.f_84.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(aggregate_func_4249(&(Local_903.f_84))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_903.f_84.f_1 & 4 != 0)
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
							if (!Local_903.f_84.f_1 & 256 != 0)
							{
								if ((Local_38[iVar15 /*27*/])->f_10.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_38[iVar15 /*27*/])->f_10.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(aggregate_func_4249(&(Local_903.f_84))))
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
								if (MISC::IS_BIT_SET((Local_38[iVar15 /*27*/])->f_10.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_38[iVar15 /*27*/])->f_10.f_7), iVar8);
								}
								aggregate_func_1729(iVar8, 1);
								Jump @756; //curOff = 668
								if (aggregate_func_689(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_38[iVar15 /*27*/])->f_10.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_38[iVar15 /*27*/])->f_10.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_38[iVar15 /*27*/])->f_10.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_38[iVar15 /*27*/])->f_10.f_7), iVar8);
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
												Jump @1001; //curOff = 810
												if (aggregate_func_1730(iVar8))
												{
												}
												else if (iVar13 < 1)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 8)
														{
															if (&Local_903.f_84.f_86[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_903.f_84.f_86[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_903.f_84.f_86[iVar8];
																Local_903.f_84.f_86[iVar8] = &Local_903.f_84.f_86[iVar8] + 1;
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

void func_208()
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
	if (!aggregate_func_3575(iVar1))
	{
		return;
	}
	func_307();
	if (aggregate_func_7931())
	{
		if (aggregate_func_3683(2, -1) || aggregate_func_3683(1, -1))
		{
			aggregate_func_2922(1);
			aggregate_func_2922(2);
			aggregate_func_4896(2);
			aggregate_func_4896(1);
		}
	}
	else
	{
		bVar2 = false;
		if (aggregate_func_7932() || aggregate_func_7933())
		{
			bVar2 = true;
			if (aggregate_func_7933() || (!aggregate_func_4644(8) && !aggregate_func_3683(4, iVar1)))
			{
				aggregate_func_4335(Local_903.f_195, Local_0.f_35);
				Local_903.f_195 = Local_0.f_35;
				iVar3 = 0;
				while (iVar3 < 1)
				{
					aggregate_func_4335(aggregate_func_4270(iVar3), Local_0.f_35);
					iVar3++;
				}
				if (aggregate_func_7934())
				{
					aggregate_func_7935(Local_903.f_195.f_3.f_1);
				}
				bVar0 = true;
				if (aggregate_func_7932())
				{
					aggregate_func_2922(4);
				}
				else
				{
					aggregate_func_2922(4);
				}
			}
			else if (!aggregate_func_4644(8))
			{
				if (!aggregate_func_4644(4))
				{
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					aggregate_func_4896(8);
				}
			}
			else if (aggregate_func_4644(4))
			{
				if (aggregate_func_3683(4, iVar1))
				{
					aggregate_func_2922(4);
				}
			}
			else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_4896(4);
				aggregate_func_4896(8);
			}
		}
		else if (aggregate_func_3683(4, iVar1))
		{
			aggregate_func_2922(4);
		}
		if (!aggregate_func_4644(1))
		{
			if (aggregate_func_4644(1))
			{
				aggregate_func_4896(1);
			}
			if (aggregate_func_7934())
			{
				iVar4 = Local_903.f_195.f_3.f_1;
				if (aggregate_func_7936(iVar4))
				{
					if (bVar0)
					{
						aggregate_func_7935(iVar4);
					}
					if (aggregate_func_4240((Local_903.f_195.f_10[iVar4 /*29*/])->f_3, 16))
					{
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
					}
					iVar6 = NETWORK::PARTICIPANT_ID_TO_INT();
					iVar5 = 0;
					while (iVar5 < 3)
					{
						if (!aggregate_func_2875(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])))
						{
						}
						else
						{
							if (bVar2 || aggregate_func_4240(((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 8))
							{
								if (aggregate_func_4637(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									aggregate_func_4583(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
								}
								aggregate_func_4243(&(((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1), 8);
							}
							else if (!aggregate_func_4240(((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 1))
							{
								if (aggregate_func_4240(((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_1, 4))
								{
									if (aggregate_func_2020() < ((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/])->f_7)
									{
										if (aggregate_func_4637(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
										{
											aggregate_func_4583(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0, 1, 1);
										}
									}
									else if (!aggregate_func_4637(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
									{
										aggregate_func_4583(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
									}
								}
								else if (!aggregate_func_4637(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 0))
								{
									aggregate_func_4583(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1, 1, 1);
								}
							}
							if (aggregate_func_2973(&((Local_903.f_195.f_10[iVar4 /*29*/])->f_4[iVar5 /*8*/]), 1))
							{
								if (!aggregate_func_6841(iVar4, iVar5, Local_903.f_195))
								{
								}
								else
								{
									Local_903.f_195.f_7 = PLAYER::PLAYER_ID();
									Local_903.f_195.f_8 = iVar4;
									Local_903.f_195.f_9 = iVar5;
									(Local_38[iVar6 /*27*/])->f_24.f_1 = iVar4;
									(Local_38[iVar6 /*27*/])->f_24.f_2 = iVar5;
									aggregate_func_4335(iVar4, iVar5);
									aggregate_func_2922(1);
									aggregate_func_2922(2);
									aggregate_func_4896(2);
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
			if (!aggregate_func_4644(2))
			{
				if (!aggregate_func_4644(1))
				{
					aggregate_func_4896(1);
					aggregate_func_4896(2);
				}
			}
			if (!aggregate_func_3683(2, -1))
			{
				if (aggregate_func_4644(2))
				{
					aggregate_func_4335(Local_903.f_195.f_8, Local_903.f_195.f_9);
					aggregate_func_2922(2);
				}
			}
		}
	}
}

void func_255()
{
	int iVar0;

	Local_903.f_84.f_64 = 0;
	Local_903.f_84.f_63 = 0;
	Local_903.f_84.f_66 = 0;
	Local_903.f_84.f_67 = 0;
	Local_903.f_84.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_903.f_84.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_903.f_84.f_75[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_903.f_84.f_73[iVar0]);
		aggregate_func_2424(iVar0);
		iVar0++;
	}
}

void func_256()
{
	int iVar0;

	Local_903.f_195.f_5 = 0;
	Local_903.f_195.f_6 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		aggregate_func_68(aggregate_func_4270(iVar0));
		iVar0++;
	}
}

void func_258(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_903.f_84.f_64 = (Local_903.f_84.f_64 || (Local_38[iParam0 /*27*/])->f_10.f_1);
		Local_903.f_84.f_63 = (Local_903.f_84.f_63 || (Local_38[iParam0 /*27*/])->f_10);
		Local_903.f_84.f_66 = (Local_903.f_84.f_66 || (Local_38[iParam0 /*27*/])->f_10.f_3);
		Local_903.f_84.f_67 = (Local_903.f_84.f_67 || (Local_38[iParam0 /*27*/])->f_10.f_4);
		Local_903.f_84.f_68 = (Local_903.f_84.f_68 || (Local_38[iParam0 /*27*/])->f_10.f_5);
		Local_903.f_84.f_69 = (Local_903.f_84.f_69 || (Local_38[iParam0 /*27*/])->f_10.f_6);
		Local_903.f_84.f_82 = (Local_903.f_84.f_82 || (Local_38[iParam0 /*27*/])->f_10.f_2);
		Local_903.f_84.f_70 = (Local_903.f_84.f_70 && (Local_38[iParam0 /*27*/])->f_10.f_7);
		iVar0 = 0;
		while (iVar0 < 1)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_38[iParam0 /*27*/])->f_10.f_9[iVar0], Local_903.f_84.f_71[iVar0], Local_903.f_84.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_38[iParam0 /*27*/])->f_10.f_9[iVar0], Local_903.f_84.f_71[iVar0], Local_903.f_84.f_73[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_38[iParam0 /*27*/])->f_10.f_9[iVar0], Local_903.f_84.f_71[iVar0], Local_903.f_84.f_75[iVar0]);
			aggregate_func_691(aggregate_func_4270(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_272()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 1)
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

void func_307()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate_func_710(0, 0);
	if (iVar0 != Local_903.f_195.f_3)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (aggregate_func_7934())
			{
				aggregate_func_4239(Local_903.f_195.f_3.f_1);
				aggregate_func_7928(Local_903.f_195.f_3.f_1);
			}
			Local_903.f_195.f_3 = iVar0;
			Local_903.f_195.f_3.f_1 = -1;
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = 0;
				while (iVar2 < aggregate_func_4270(1))
				{
					if (iVar1 == aggregate_func_7927(iVar2))
					{
						Local_903.f_195.f_3.f_1 = iVar2;
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (aggregate_func_7934())
			{
				aggregate_func_4239(Local_903.f_195.f_3.f_1);
				aggregate_func_7935(Local_903.f_195.f_3.f_1);
			}
		}
		else
		{
			if (aggregate_func_7934())
			{
				aggregate_func_4239(Local_903.f_195.f_3.f_1);
				aggregate_func_7928(Local_903.f_195.f_3.f_1);
			}
			Local_903.f_195.f_3 = iVar0;
			Local_903.f_195.f_3.f_1 = -1;
		}
	}
}

int func_473(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (aggregate_func_4465(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == ((*Global_1949749)[iVar0 /*23*/])->f_11 && iParam1 == ((*Global_1949749)[iVar0 /*23*/])->f_4)
				{
					if (iParam3 <= Global_1949749[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @141; //curOff = 128
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				aggregate_func_34(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

