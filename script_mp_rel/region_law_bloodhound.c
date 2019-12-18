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
	var uLocal_18 = 3;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<10> Local_45[3];
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	struct<4> Local_80 = { 0, 0, 0, 0 } ;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	vector3 vLocal_89 = { 0f, 0f, 0f };
	vector3 vLocal_92 = { 0f, 0f, 0f };
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_78 = joaat("a_c_doghound_01");
	iLocal_76 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(9);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (aggregate_func_4484(iLocal_76))
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1(0);
}

void func_1(int iParam0)
{
	int iVar0;

	MAP::REMOVE_BLIP(&((Local_45[iParam0 /*10*/])->f_8));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (aggregate_func_402(&((Local_45[iParam0 /*10*/])->f_1[iVar0]), 0))
		{
			aggregate_func_2634(&((Local_45[iParam0 /*10*/])->f_1[iVar0]));
			aggregate_func_501((Local_45[iParam0 /*10*/])->f_1[iVar0], 1, 0, 1);
		}
		iVar0++;
	}
	if (PED::DOES_GROUP_EXIST((Local_45[iParam0 /*10*/])->f_7))
	{
		PED::REMOVE_GROUP((Local_45[iParam0 /*10*/])->f_7);
	}
}

void func_2()
{
	iLocal_77 = 1;
	PED::_0xED9582B3DA8F02B4(4);
	switch (iLocal_76)
	{
		case 81:
			vLocal_89 = { -297.8979f, 783.4763f, 117.3506f };
			break;
		default:
			vLocal_89 = { aggregate_func_1777(iLocal_76, 1) };
			break;
	}
}

void func_4()
{
	int iVar0;

	switch (iLocal_77)
	{
		case 1:
			iLocal_79 = func_9(2, 2, -156825994, 1, 0, 0f, 0f, 0f);
			if (!STREAMING::IS_MODEL_VALID(iLocal_79))
			{
				iLocal_79 = joaat("s_m_m_ambientlawrural_01");
			}
			iLocal_77 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_78, false);
			STREAMING::REQUEST_MODEL(iLocal_79, false);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_78) && STREAMING::HAS_MODEL_LOADED(iLocal_79)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_77 = 4;
			}
			break;
		case 4:
			if (func_10())
			{
				func_11(0);
				func_12(0);
				iLocal_77 = 5;
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (&Local_45[iVar0 /*10*/] == 1)
				{
					if (aggregate_func_402((Local_45[iVar0 /*10*/])->f_6, 0))
					{
						if (aggregate_func_1520(Global_35, (Local_45[iVar0 /*10*/])->f_9, 1, 0))
						{
							func_14(iVar0);
						}
					}
					else if (aggregate_func_1520(Global_35, (Local_45[iVar0 /*10*/])->f_9, 1, 0))
					{
						func_14(iVar0);
					}
					else
					{
						Local_45[iVar0 /*10*/] = 3;
					}
				}
				else if (&Local_45[iVar0 /*10*/] == 2)
				{
					if (aggregate_func_402((Local_45[iVar0 /*10*/])->f_6, 0))
					{
						if (!PED::IS_PED_IN_COMBAT((Local_45[iVar0 /*10*/])->f_6, 0) && !aggregate_func_1520(Global_35, (Local_45[iVar0 /*10*/])->f_9, 1, 0))
						{
							func_12(iVar0);
						}
					}
				}
				else if (&Local_45[iVar0 /*10*/] == 3)
				{
					func_1(iVar0);
				}
				iVar0++;
			}
			break;
		case 6:
			break;
	}
}

int func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5)
{
	if (!aggregate_func_4511(iParam0))
	{
		return 0;
	}
	if (func_19(iParam0) == -1)
	{
		return 0;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_19(iParam0), iParam1, iParam2, iParam3, iParam4, vParam5);
}

bool func_10()
{
	float fVar0;
	float fVar1;
	var uVar2;

	fVar0 = 25f;
	fVar1 = 60f;
	if (!aggregate_func_695(vLocal_89, &Local_80, &uVar2, 1, 1, 1127481344 /* Float: 180f */, 50f, fVar0, fVar1, 0))
	{
		return false;
	}
	vLocal_92 = { Local_80.f_3 };
	return true;
}

void func_11(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!PED::DOES_GROUP_EXIST((Local_45[iParam0 /*10*/])->f_7))
	{
		(Local_45[iParam0 /*10*/])->f_7 = PED::CREATE_GROUP(1);
	}
	vVar0 = { aggregate_func_1228(vLocal_92, 3f, 1f) };
	(Local_45[iParam0 /*10*/])->f_6 = aggregate_func_2073(iLocal_79, vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0);
	PED::SET_PED_CONFIG_FLAG((Local_45[iParam0 /*10*/])->f_6, 279, true);
	PED::SET_PED_AS_GROUP_LEADER((Local_45[iParam0 /*10*/])->f_6, (Local_45[iParam0 /*10*/])->f_7, 0);
	TASK::TASK_POLICE((Local_45[iParam0 /*10*/])->f_6, 0);
	PED::SET_PED_CONFIG_FLAG((Local_45[iParam0 /*10*/])->f_6, 188, true);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		(Local_45[iParam0 /*10*/])->f_1[iVar3] = aggregate_func_2073(iLocal_78, vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0);
		if (aggregate_func_402(&((Local_45[iParam0 /*10*/])->f_1[iVar3]), 0))
		{
		}
		iVar3++;
	}
}

void func_12(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	if (!aggregate_func_402((Local_45[iParam0 /*10*/])->f_6, 0))
	{
		return;
	}
	Local_45[iParam0 /*10*/] = 1;
	if (!VOLUME::_DOES_VOLUME_EXIST((Local_45[iParam0 /*10*/])->f_9))
	{
		(Local_45[iParam0 /*10*/])->f_9 = VOLUME::_CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS((Local_45[iParam0 /*10*/])->f_6, true, false), 0f, 0f, 0f, 35f, 35f, 10f);
		PED::_0x7C00CFC48A782DC0((Local_45[iParam0 /*10*/])->f_9, (Local_45[iParam0 /*10*/])->f_6, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
	if (!MAP::DOES_BLIP_EXIST((Local_45[iParam0 /*10*/])->f_8))
	{
		(Local_45[iParam0 /*10*/])->f_8 = MAP::_0xA6EF0C54A3443E70(-1282792512, (Local_45[iParam0 /*10*/])->f_9);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (aggregate_func_402(&((Local_45[iParam0 /*10*/])->f_1[iVar0]), 0))
		{
			vVar1 = { IntToFloat(iVar0 + 1), MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f), 0f };
			aggregate_func_2634(&((Local_45[iParam0 /*10*/])->f_1[iVar0]));
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(&((Local_45[iParam0 /*10*/])->f_1[iVar0]), (Local_45[iParam0 /*10*/])->f_6, vVar1, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
		}
		iVar0++;
	}
}

void func_14(int iParam0)
{
	int iVar0;

	if (!aggregate_func_402(Global_35, 0))
	{
		return;
	}
	Local_45[iParam0 /*10*/] = 2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (aggregate_func_402(&((Local_45[iParam0 /*10*/])->f_1[iVar0]), 0))
		{
			PED::REMOVE_PED_FROM_GROUP(&((Local_45[iParam0 /*10*/])->f_1[iVar0]));
			TASK::TASK_COMBAT_PED(&((Local_45[iParam0 /*10*/])->f_1[iVar0]), Global_35, 0, 0);
			MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), &((Local_45[iParam0 /*10*/])->f_1[iVar0]));
			MAP::REMOVE_BLIP(&((Local_45[iParam0 /*10*/])->f_8));
		}
		iVar0++;
	}
}

int func_19(int iParam0)
{
	int iVar0;

	if (!aggregate_func_4511(iParam0))
	{
		return -1;
	}
	iVar0 = aggregate_func_4640(aggregate_func_4314());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1900701[iParam0];
	}
	return Global_1900684[iParam0];
}

