#region Local Var
	struct<34> Local_0 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0 } ;
	var uLocal_34 = 3;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 3;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	struct<27> Local_42[32];
	struct<213> Local_907 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0 } ;
	var uLocal_1120 = 0;
	var uLocal_1121 = 1;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 1065353216;
	var uLocal_1125 = 0;
	var uLocal_1126 = 1065353216;
	var uLocal_1127 = 1077936128;
	var uLocal_1128 = 1108082688;
	var uLocal_1129 = 1113325568;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 1;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 7;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = -1;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	float fLocal_1157 = 0f;
	float fLocal_1158 = 0f;
	var uLocal_1159 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == la_alligator.__EntryFunction__

void func_1(int iParam0)
{
	aggregate.flow_controller.func_7(32, iParam0);
	aggregate.flow_controller.func_8();
	aggregate.ambient_fishing_scenario.func_7();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_0, 42, 41);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(&Local_0), 42, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_42, 865, 42);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2(Local_42[0 /*27*/]), 865, "m_clientData");
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
		while (iVar0 < 3)
		{
			Local_0.f_33.f_1[iVar0] = 255;
			iVar0++;
		}
	}
}

void func_37()
{
	int iVar0;

	iVar0 = 3;
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(iVar0);
}

void func_60()
{
	int iVar0;
	int iVar1;

	if (aggregate.la_alligator.func_58())
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_0.f_29[iVar1])))
			{
				iVar0 = NETWORK::NET_TO_PED(&(Local_0.f_29[iVar1]));
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

void func_91()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			(Local_42[iVar1 /*27*/])->f_3.f_2[iVar0] = 9000f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_92()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	aggregate.la_bear.func_167(&(Local_907.f_110), &(Local_907.f_110.f_31));
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar2 = true;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_0.f_33.f_5[iVar0] = 0;
			Local_0.f_33.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			(Local_42[iVar1 /*27*/])->f_9.f_13[iVar0] = 0;
		}
		iVar0++;
	}
}

bool func_172(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(3))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
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
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(Local_907.f_56.f_3, iVar0))
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
				if (!MISC::IS_BIT_SET(Local_907.f_56.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_907.f_56.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_907.f_56.f_3), iVar0);
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

void func_184()
{
	int iVar0;
	int iVar1;

	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		aggregate.la_alligator.func_213(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_191()
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
		if (Local_907.f_56.f_41 >= 3)
		{
			Local_907.f_56.f_41 = 0;
		}
		iVar0 = Local_907.f_56.f_41;
		Local_907.f_56.f_41++;
		iVar7 = aggregate.annesburg.func_253(iVar0);
		iVar1 = &Local_907.f_56.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (aggregate.la_alligator.func_203(iVar7, 4))
		{
			aggregate.la_alligator.func_213(iVar7, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (&(Local_42[iVar3 /*27*/])->f_3.f_2[iVar0] > -1f)
			{
				(Local_42[iVar3 /*27*/])->f_3.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_907.f_56.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_907.f_56.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_907.f_56.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_907.f_56.f_42), iVar0);
			}
		}
		if (MISC::IS_BIT_SET(Local_907.f_56.f_42, iVar0))
		{
			if (bVar4 || !aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_907.f_56.f_42), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (aggregate.la_alligator.func_219(iVar2, iVar1, iVar0))
			{
				MISC::SET_BIT(&(Local_907.f_56.f_42), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET((Local_42[iVar3 /*27*/])->f_3.f_1, iVar0))
				{
					MISC::SET_BIT(&((Local_42[iVar3 /*27*/])->f_3.f_1), iVar0);
				}
				aggregate.barcustomer_interaction.func_43(Local_907.f_56.f_43[iVar0 /*3*/]);
			}
		}
		if (MISC::IS_BIT_SET((Local_42[iVar3 /*27*/])->f_3.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!aggregate.barcustomer_interaction.func_42(Local_907.f_56.f_43[iVar0 /*3*/]) || aggregate.broom_scenario.func_18(Local_907.f_56.f_43[iVar0 /*3*/], 0.5f))))
			{
				aggregate.barcustomer_interaction.func_50(Local_907.f_56.f_43[iVar0 /*3*/]);
				MISC::CLEAR_BIT(&((Local_42[iVar3 /*27*/])->f_3.f_1), iVar0);
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
	if (Local_907.f_56.f_42 != 0)
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

void func_192()
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
	func_239();
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		(Local_42[iVar15 /*27*/])->f_9.f_8 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	while (iVar12 < 1)
	{
		if (Local_907.f_110.f_96 >= 3)
		{
			Local_907.f_110.f_96 = 0;
		}
		iVar1 = Local_907.f_110.f_96;
		Local_907.f_110.f_96++;
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
						else if (aggregate.fme_condor_egg.func_1292(vVar5.x, vVar5.y, &(Local_907.f_110), &iVar4, 0, vVar5.z))
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
												if (!Local_907.f_110.f_1 & 256 != 0)
												{
													if (vVar5.z <= IntToFloat(aggregate.camera_item.func_12(&(Local_907.f_110))))
													{
														iVar4 = 256;
														bVar2 = true;
													}
												}
												break;
											case joaat("event_shot_fired_bullet_impact"):
											case joaat("event_shot_fired_whizzed_by"):
												if (!Local_907.f_110.f_1 & 4 != 0)
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
							if (!Local_907.f_110.f_1 & 256 != 0)
							{
								if ((Local_42[iVar15 /*27*/])->f_9.f_8 != 0 && NETWORK::GET_TIME_DIFFERENCE((Local_42[iVar15 /*27*/])->f_9.f_8, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
								{
									if (vVar5.z >= 0f && vVar5.z <= IntToFloat(aggregate.camera_item.func_12(&(Local_907.f_110))))
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
								if (MISC::IS_BIT_SET((Local_42[iVar15 /*27*/])->f_9.f_7, iVar8))
								{
									MISC::CLEAR_BIT(&((Local_42[iVar15 /*27*/])->f_9.f_7), iVar8);
								}
								aggregate.la_bear.func_263(iVar8, 1);
								Jump @756; //curOff = 668
								if (aggregate.la_bear.func_264(&vVar5, iVar8))
								{
									if (MISC::IS_BIT_SET((Local_42[iVar15 /*27*/])->f_9.f_7, iVar8))
									{
										MISC::CLEAR_BIT(&((Local_42[iVar15 /*27*/])->f_9.f_7), iVar8);
									}
								}
								else if (!MISC::IS_BIT_SET((Local_42[iVar15 /*27*/])->f_9.f_7, iVar8))
								{
									MISC::SET_BIT(&((Local_42[iVar15 /*27*/])->f_9.f_7), iVar8);
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
												Jump @1000; //curOff = 810
												if (aggregate.la_bear.func_270(iVar8))
												{
												}
												else if (iVar13 < 4)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(vVar5.x))
													{
														iVar14 = 0;
														while (iVar14 < 4)
														{
															if (&Local_907.f_110.f_98[iVar8] >= 32)
															{
																iVar0 = 0;
																Local_907.f_110.f_98[iVar8] = 0;
															}
															else
															{
																iVar0 = &Local_907.f_110.f_98[iVar8];
																Local_907.f_110.f_98[iVar8] = &Local_907.f_110.f_98[iVar8] + 1;
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

void func_224()
{
	int iVar0;

	Local_907.f_110.f_64 = 0;
	Local_907.f_110.f_63 = 0;
	Local_907.f_110.f_66 = 0;
	Local_907.f_110.f_67 = 0;
	Local_907.f_110.f_70 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		SCRIPTS::_0xDE544B7EC0C187CC(Local_907.f_110.f_71[iVar0]);
		SCRIPTS::_0x20F4CB76689ACDBC(Local_907.f_110.f_79[iVar0]);
		SCRIPTS::_0xDE544B7EC0C187CC(Local_907.f_110.f_75[iVar0]);
		aggregate.la_bear.func_309(iVar0);
		iVar0++;
	}
}

void func_226(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		Local_907.f_110.f_64 = (Local_907.f_110.f_64 || (Local_42[iParam0 /*27*/])->f_9.f_1);
		Local_907.f_110.f_63 = (Local_907.f_110.f_63 || (Local_42[iParam0 /*27*/])->f_9);
		Local_907.f_110.f_66 = (Local_907.f_110.f_66 || (Local_42[iParam0 /*27*/])->f_9.f_3);
		Local_907.f_110.f_67 = (Local_907.f_110.f_67 || (Local_42[iParam0 /*27*/])->f_9.f_4);
		Local_907.f_110.f_68 = (Local_907.f_110.f_68 || (Local_42[iParam0 /*27*/])->f_9.f_5);
		Local_907.f_110.f_69 = (Local_907.f_110.f_69 || (Local_42[iParam0 /*27*/])->f_9.f_6);
		Local_907.f_110.f_94 = (Local_907.f_110.f_94 || (Local_42[iParam0 /*27*/])->f_9.f_2);
		Local_907.f_110.f_70 = (Local_907.f_110.f_70 && (Local_42[iParam0 /*27*/])->f_9.f_7);
		iVar0 = 0;
		while (iVar0 < 3)
		{
			SCRIPTS::_0xFFDDF802279BE128((Local_42[iParam0 /*27*/])->f_9.f_9[iVar0], Local_907.f_110.f_71[iVar0], Local_907.f_110.f_71[iVar0]);
			SCRIPTS::_0xFFDDF802279BE128((Local_42[iParam0 /*27*/])->f_9.f_9[iVar0], Local_907.f_110.f_71[iVar0], Local_907.f_110.f_75[iVar0]);
			SCRIPTS::_0xE4ABE20DCE7C7CFE((Local_42[iParam0 /*27*/])->f_9.f_9[iVar0], Local_907.f_110.f_71[iVar0], Local_907.f_110.f_79[iVar0]);
			aggregate.la_bear.func_310(aggregate.annesburg.func_253(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_239()
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar5 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar6 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 3)
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

