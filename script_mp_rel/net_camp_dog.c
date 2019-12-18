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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
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
	struct<2> Local_42[32];
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_21 = "props_misc@campfires@5_logs";
	sLocal_22 = "Script_PropCampfire";
	func_1(vScriptParam_0);
	while (!aggregate_func_523(0, 0) && func_3(&uLocal_23, &Local_42, &iLocal_107, vScriptParam_0))
	{
		BUILTIN::WAIT(0);
	}
	aggregate_func_2819();
}

void func_1(int iParam0, var uParam1, var uParam2)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	func_7(&uLocal_23);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_23, 19, 46);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&uLocal_23), 19, "m_sNetCampDogHostData");
	aggregate_func_7758(&Local_42);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_42, 65, 47);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_42[0 /*2*/]), 65, "m_sNetCampDogPlayerData");
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

bool func_3(var uParam0, var uParam1, int* iParam2, vector3 vParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	bVar2 = false;
	bVar3 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
		bVar2 = ENTITY::DOES_ENTITY_EXIST(iVar1);
	}
	if (bVar2)
	{
		bVar3 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1);
	}
	if (bVar0)
	{
		if (!func_12(uParam0, uParam1, iParam2, vParam3))
		{
			return false;
		}
	}
	if (bVar3)
	{
		func_13(uParam0, uParam1, iParam2);
		func_14(uParam0, uParam1, iParam2);
	}
	if (!func_15(uParam0, uParam1, iParam2, vParam3))
	{
		return false;
	}
	return true;
}

void func_7(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 255;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	func_18(&(uParam0->f_6));
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	func_19(&(uParam0->f_12));
	func_20(&(uParam0->f_18));
}

bool func_12(var uParam0, var uParam1, int* iParam2, vector3 vParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = aggregate_func_4249(uParam0);
	iVar1 = 0;
	iVar1 = iVar1;
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar2 = NETWORK::NET_TO_PED(uParam0->f_1);
		bVar3 = ENTITY::DOES_ENTITY_EXIST(iVar2);
	}
	if (bVar3)
	{
		bVar4 = ENTITY::IS_ENTITY_DEAD(iVar2);
		bVar4 = bVar4;
	}
	if (bVar3)
	{
		bVar5 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2);
	}
	switch (iVar0)
	{
		case 0:
			func_7(uParam0);
			func_23(uParam0, vParam3);
			aggregate_func_6543(uParam0, 1);
			break;
		case 1:
			if (func_25(uParam0, uParam1, iParam2, vParam3))
			{
				aggregate_func_6543(uParam0, 2);
			}
			break;
		case 2:
			func_26(uParam0, iVar2);
			iVar1 = func_27(uParam0, uParam1, iParam2);
			if (func_28(uParam0, uParam1, iParam2))
			{
				aggregate_func_6543(uParam0, 3);
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar5)
				{
					func_29(uParam0, uParam1, iParam2);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
				}
			}
			else
			{
				aggregate_func_6543(uParam0, 4);
			}
			break;
		case 4:
			return false;
	}
	return true;
}

void func_13(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = ENTITY::IS_ENTITY_DEAD(iVar0);
	if (bVar1)
	{
		if (!aggregate_func_7981(iParam2, 0))
		{
			func_31(uParam0->f_2);
			aggregate_func_7631(iParam2, 0);
		}
	}
}

int func_14(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = aggregate_func_4249(uParam0);
	iVar2 = 0;
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
			iVar2 = func_34(uParam0, uParam1, iParam2);
			break;
		case 2:
			iVar2 = func_35(uParam0, uParam1, iParam2);
			break;
		case 3:
			break;
		case 4:
			PED::_0xAAB050DA48B57978(iVar0, "Interaction_Happy", 0, 20000, 4);
			break;
		case 5:
			break;
		case 6:
			iVar2 = func_36(uParam0, uParam1, iParam2);
			break;
		case 7:
			iVar2 = func_37(uParam0, uParam1, iParam2);
			break;
		case 8:
			iVar2 = func_38(uParam0, uParam1, iParam2);
			break;
	}
	return iVar2;
}

bool func_15(var uParam0, var uParam1, int* iParam2, int iParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			bVar0 = true;
		}
	}
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = iVar2;
	iVar4 = aggregate_func_4641((*uParam1)[iVar3 /*2*/]);
	switch (iVar4)
	{
		case 0:
			func_40(iParam2);
			aggregate_func_7248((*uParam1)[iVar3 /*2*/]);
			func_41(iParam2, iParam3);
			func_42((*uParam1)[iVar3 /*2*/]);
			aggregate_func_7455((*uParam1)[iVar3 /*2*/], 1);
			break;
		case 1:
			func_44(uParam0, uParam1, iParam2);
			func_45(uParam0, iParam2);
			if (aggregate_func_4249(uParam0) != 11)
			{
				return true;
			}
			if (bVar0)
			{
				func_47(uParam0, iVar1);
				func_48(iParam2);
				func_49(uParam0, iParam2);
				func_50(iVar3, iVar1);
				func_51(uParam1, iParam2, uParam0->f_2, iVar1);
				func_52(iParam2, uParam0->f_2, 2);
				func_53(uParam1, iParam2, uParam0->f_2, iVar1);
				func_52(iParam2, uParam0->f_2, 4);
				func_54(uParam0, (*uParam1)[iVar3 /*2*/], iVar1, iVar2);
				func_55(uParam0, (*uParam1)[iVar3 /*2*/]);
				func_56(uParam0, (*uParam1)[iVar3 /*2*/], iVar1);
				func_57(uParam0, uParam1, iVar1);
				return true;
			}
			if (!bVar0)
			{
				aggregate_func_7455((*uParam1)[iVar3 /*2*/], 2);
			}
		case 2:
			if (!func_58(uParam0, uParam1, iParam2))
			{
				return true;
			}
			aggregate_func_7455((*uParam1)[iVar3 /*2*/], 3);
			break;
		case 3:
			break;
	}
	return true;
}

void func_18(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
}

void func_19(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = -15;
	uParam0->f_5 = -15;
}

void func_20(var uParam0)
{
	*uParam0 = -15;
}

void func_23(var uParam0, vector3 vParam1)
{
	*uParam0 = vParam1.x;
	uParam0->f_2 = vParam1.y;
	uParam0->f_3 = vParam1.z;
}

bool func_25(var uParam0, var uParam1, int* iParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;

	iVar0 = aggregate_func_4249(uParam0);
	switch (iVar0)
	{
		case 0:
			func_59(uParam0, uParam1, iParam2);
			aggregate_func_6543(uParam0, 1);
		case 1:
			if (func_61(uParam0, uParam1, iParam2))
			{
				aggregate_func_6543(uParam0, 2);
			}
			break;
		case 2:
			if (func_62(uParam0, uParam1, iParam2))
			{
				aggregate_func_6543(uParam0, 3);
			}
			break;
		case 3:
			if (func_63(uParam0, uParam1, iParam2))
			{
				aggregate_func_6543(uParam0, 4);
			}
			break;
		case 4:
			iVar1 = uParam0->f_2;
			bVar2 = false;
			if (func_64(iVar1) && !func_65(iVar1))
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				aggregate_func_6543(uParam0, 6);
			}
			else
			{
				aggregate_func_6543(uParam0, 5);
			}
			break;
		case 6:
			if (func_66(uParam1, uParam0->f_2))
			{
				func_67(uParam0->f_2, 451736625);
				aggregate_func_6543(uParam0, 7);
			}
			break;
		case 7:
			if (aggregate_func_7770(uParam0, 2))
			{
				aggregate_func_6543(uParam0, 8);
			}
			if (aggregate_func_7770(uParam0, 3))
			{
				aggregate_func_6543(uParam0, 5);
			}
			break;
		case 5:
			if (func_69(uParam0))
			{
				aggregate_func_6543(uParam0, 10);
			}
			break;
		case 8:
			if (func_66(uParam1, uParam0->f_2))
			{
				func_70(uParam0->f_2);
				aggregate_func_6543(uParam0, 9);
			}
			break;
		case 9:
			if (aggregate_func_7770(uParam0, 1))
			{
				vVar3 = { aggregate_func_7632(&(iParam2->f_10)) };
				func_72(uParam0, vVar3, 0f);
				aggregate_func_8309(uParam0, 1);
				aggregate_func_6543(uParam0, 10);
			}
			break;
		case 10:
			if (func_74(uParam0, uParam1, iParam2))
			{
				aggregate_func_6543(uParam0, 11);
			}
			break;
		case 11:
			return true;
	}
	return false;
}

void func_26(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	bVar0 = aggregate_func_7770(uParam0, 0);
	bVar1 = ENTITY::IS_ENTITY_VISIBLE(iParam1);
	if (bVar0 && bVar1)
	{
		aggregate_func_8309(uParam0, 0);
	}
}

int func_27(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = uParam0->f_2;
	if (func_75(uParam0))
	{
		aggregate_func_6543(uParam0, 8);
	}
	if (func_77(uParam0, uParam1))
	{
		aggregate_func_6543(uParam0, 4);
	}
	iVar2 = aggregate_func_4249(uParam0);
	switch (iVar2)
	{
		case 0:
			if (func_64(iVar1))
			{
				iVar3 = 6;
				aggregate_func_6543(uParam0, iVar3);
			}
			else
			{
				iVar3 = 1;
				aggregate_func_6543(uParam0, iVar3);
			}
			break;
		case 1:
			iVar3 = func_78(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				aggregate_func_6543(uParam0, iVar3);
			}
			break;
		case 2:
			iVar3 = func_79(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				aggregate_func_6543(uParam0, iVar3);
			}
			break;
		case 3:
			break;
		case 4:
			func_80(uParam0->f_2);
			aggregate_func_6543(uParam0, 5);
			break;
		case 5:
			if (!func_81(uParam1))
			{
				aggregate_func_6543(uParam0, 1);
			}
			break;
		case 6:
			iVar3 = func_82(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				aggregate_func_6543(uParam0, iVar3);
			}
			break;
		case 7:
			iVar3 = func_83(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				aggregate_func_6543(uParam0, iVar3);
			}
			break;
		case 8:
			iVar3 = func_84(uParam0, uParam1, iParam2);
			if (iVar3 != iVar2)
			{
				aggregate_func_6543(uParam0, iVar3);
			}
			break;
	}
	return 1;
}

bool func_28(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	var uVar8;
	var uVar9;
	var uVar12;
	bool bVar13;
	vector3 vVar14;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return true;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = uParam0->f_2;
	iVar2 = iVar1;
	iVar3 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
	}
	bVar4 = aggregate_func_5809(iVar2);
	if (!aggregate_func_2823(bVar4, 0))
	{
		return true;
	}
	if (!func_87(iVar2))
	{
		return true;
	}
	if (func_88(iVar2))
	{
		return true;
	}
	if (bVar4 != uParam0->f_3)
	{
		return true;
	}
	bVar5 = func_64(iVar2);
	bVar6 = func_89(iVar2);
	bVar7 = true;
	if (bVar5 || bVar6)
	{
		bVar7 = false;
	}
	if (func_81(uParam1))
	{
		bVar7 = false;
	}
	if (bVar7)
	{
		bVar13 = func_90(iVar1, &uVar8, &uVar9, &uVar12);
		if (!bVar13)
		{
			return true;
		}
	}
	vVar14 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	if (!func_91(vVar14, 150f))
	{
		return true;
	}
	return false;
}

int func_29(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return 1;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	bVar1 = ENTITY::IS_ENTITY_DEAD(iVar0);
	if (bVar1)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	else
	{
		PED::_0x7043D0681285BA2D(&iVar0);
	}
	return 1;
}

void func_31(var uParam0)
{
	struct<20> Var0;

	Var0.f_4 = 0;
	Var0.f_7 = uParam0;
	func_94(Var0, aggregate_func_4507(0, 8));
}

int func_34(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!aggregate_func_927(iVar0, -76381094))
	{
		bVar1 = aggregate_func_7770(uParam0, 0);
		iVar2 = func_97(uParam0->f_2, iVar0, bVar1);
		return iVar2;
	}
	return 1;
}

int func_35(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!aggregate_func_927(iVar0, joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_12);
		iVar2 = func_98(iVar0, iVar1);
		return iVar2;
	}
	PED::SET_PED_RESET_FLAG(iVar0, 229, true);
	return 1;
}

int func_36(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	bVar2 = aggregate_func_918(iVar0, iVar1, 1, 1) > 8f;
	if (bVar2)
	{
		if (!aggregate_func_927(iVar0, 1227113341))
		{
			iVar3 = func_100(iVar0, uParam0->f_2);
			return iVar3;
		}
		return 1;
	}
	if (!aggregate_func_927(iVar0, -1927882907))
	{
		iVar4 = func_101(iVar0, iVar1);
		return iVar4;
	}
	return 1;
}

int func_37(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	if (!aggregate_func_927(iVar0, 713668775))
	{
		iVar2 = func_102(iVar0, uParam0->f_2);
		return iVar2;
	}
	return 1;
}

int func_38(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar5 = { func_103(uParam0->f_2) };
	if (aggregate_func_4268(vVar5))
	{
		return 0;
	}
	fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vVar5, true);
	if (fVar8 > 12f)
	{
		if (!aggregate_func_927(iVar0, 713668775))
		{
			iVar9 = func_105(iVar0, vVar5, 6f);
			return iVar9;
		}
		return 1;
	}
	bVar12 = func_106(iVar1, vVar2, 60f, &iVar10, &uVar11);
	iVar13 = PLAYER::PLAYER_ID();
	iVar14 = iVar13;
	if (bVar12)
	{
		aggregate_func_7773((*uParam1)[iVar14 /*2*/], 3);
	}
	else
	{
		aggregate_func_8309((*uParam1)[iVar14 /*2*/], 3);
	}
	if (bVar12)
	{
		if (!aggregate_func_927(iVar0, -1927882907))
		{
			iVar15 = func_101(iVar0, iVar10);
			return iVar15;
		}
	}
	else
	{
		if (!func_109(vVar2, &iVar16, &fVar8))
		{
			return 0;
		}
		iVar17 = PLAYER::GET_PLAYER_PED(iVar16);
		if (!aggregate_func_927(iVar0, -1927882907))
		{
			iVar18 = func_101(iVar0, iVar17);
			return iVar18;
		}
	}
	return 1;
}

void func_40(int* iParam0)
{
	*iParam0 = 0;
	StringCopy(&(iParam0->f_1), "", 64);
	iParam0->f_9 = -1;
	aggregate_func_7774(&(iParam0->f_10));
}

void func_41(int* iParam0, int iParam1)
{
	if (!func_111(iParam0, iParam1))
	{
		return;
	}
	aggregate_func_2565(2, Global_1129901->f_5, 707888648);
	aggregate_func_2565(6, Global_1129901->f_5, 106566339);
	aggregate_func_2565(6, Global_1129901->f_5, -50399569);
	aggregate_func_2565(6, Global_1129901->f_5, 1222652248);
	aggregate_func_2565(6, Global_1129901->f_5, -350226955);
	aggregate_func_2565(6, Global_1129901->f_5, -1535431934);
	aggregate_func_2565(6, Global_1129901->f_5, -1448293989);
	aggregate_func_2565(6, Global_1129901->f_5, 266218800);
	aggregate_func_2565(6, Global_1129901->f_5, 555364152);
	aggregate_func_2565(6, Global_1129901->f_5, -1663301869);
	aggregate_func_2565(6, Global_1129901->f_5, -1996978098);
	aggregate_func_2565(6, Global_1129901->f_5, 1078461828);
	aggregate_func_2565(6, Global_1129901->f_5, 747813878);
	aggregate_func_2565(6, Global_1129901->f_5, -40378879);
	if (Global_1124870->f_1929 != 0)
	{
		aggregate_func_2565(2, Global_1129901->f_5, Global_1124870->f_1929);
	}
}

void func_42(var uParam0)
{
	bool bVar0;

	if (aggregate_func_7770(uParam0, 4))
	{
		return;
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		bVar0 = false;
		if (!NETWORK::_0x595F028698072DD9(-1))
		{
			bVar0 = true;
		}
		if (!NETWORK::_0x6506BFA755FB209C())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			aggregate_func_7773(uParam0, 5);
		}
	}
	aggregate_func_7773(uParam0, 4);
}

void func_44(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_114(iVar0, uParam0, iParam2);
				break;
		}
		iVar0++;
	}
}

void func_45(var uParam0, int* iParam1)
{
	vector3 vVar0;

	if (!aggregate_func_7981(iParam1, 5))
	{
		return;
	}
	if (func_115(&(iParam1->f_10)))
	{
		vVar0 = { aggregate_func_7632(&(iParam1->f_10)) };
		func_116(uParam0->f_2, vVar0);
		aggregate_func_7633(iParam1, 5);
	}
}

void func_47(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	bVar0 = aggregate_func_7770(uParam0, 0);
	if (!bVar0)
	{
		return;
	}
	iVar1 = aggregate_func_4249(uParam0);
	bVar2 = false;
	switch (iVar1)
	{
		case 1:
			bVar2 = true;
			break;
	}
	if (bVar2)
	{
		if (!aggregate_func_1424(iParam1, -76381094))
		{
			return;
		}
		if (!TASK::_0x02EBBB3989B7E695(iParam1))
		{
			return;
		}
	}
	if (ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		return;
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam1, true);
	ENTITY::_0xA91E6CF94404E8C9(iParam1);
}

void func_48(int* iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	aggregate_func_2565(2, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0), Global_1129901->f_5);
}

void func_49(var uParam0, int* iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_2)
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	iVar3 = uParam0->f_2;
	bVar4 = false;
	if (func_64(iVar3) || func_89(iVar3))
	{
		bVar4 = true;
	}
	bVar5 = false;
	if (bVar4)
	{
		bVar5 = true;
	}
	if (bVar2)
	{
		bVar5 = false;
	}
	if (bVar5)
	{
		if (!MAP::DOES_BLIP_EXIST(iParam1->f_9))
		{
			iParam1->f_9 = MAP::_0x23F74C2FDA6E7C61(-89429847, iVar1);
		}
	}
	else if (MAP::DOES_BLIP_EXIST(iParam1->f_9))
	{
		MAP::REMOVE_BLIP(&(iParam1->f_9));
	}
}

void func_50(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = NETWORK::NETWORK_IS_IN_MP_CUTSCENE();
	if (!bVar0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
	}
	iVar1 = NETWORK::_0xD9267375834C5EAB(iParam0);
	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, 0, 1, iVar1);
}

void func_51(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	char cVar5[64];
	bool bVar13;
	bool bVar14;
	bool bVar15;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		aggregate_func_7633(iParam1, 1);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		aggregate_func_7633(iParam1, 1);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam2))
	{
		aggregate_func_7633(iParam1, 1);
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = ENTITY::IS_ENTITY_DEAD(iParam3);
	fVar4 = aggregate_func_645(iVar1, iParam3, 1);
	StringCopy(&cVar5, "", 64);
	bVar15 = false;
	if (!aggregate_func_7981(iParam1, 1))
	{
		if (fVar4 <= BUILTIN::POW(5f, 2f))
		{
			bVar13 = func_120(uParam0, iParam1, iParam2, &cVar5, &bVar15);
			bVar14 = MISC::_0x870708A6E147A9AD(iParam3, &cVar5, 2.5f, 0, 0, 0, 0, 0, bVar13, -1);
			if (bVar14 || bVar15)
			{
				aggregate_func_7631(iParam1, 1);
			}
		}
	}
	else if ((bVar2 || bVar3) || fVar4 > BUILTIN::POW(7.5f, 2f))
	{
		bVar14 = MISC::_0xE98D55C5983F2509(iParam3);
		if (bVar14)
		{
			aggregate_func_7633(iParam1, 1);
		}
	}
}

void func_52(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var9;

	if (!aggregate_func_7981(iParam0, iParam2))
	{
		return;
	}
	iVar0 = iParam1;
	Var9 = { aggregate_func_8131(iParam0) };
	if (!aggregate_func_8830(iVar0, &uVar1))
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&uVar1, &Var9))
	{
		return;
	}
	aggregate_func_7633(iParam0, iParam2);
}

void func_53(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	if (!aggregate_func_7981(iParam1, 4) && aggregate_func_7981(iParam1, 3))
	{
		return;
	}
	bVar0 = func_123(uParam0, iParam1, iParam2, iParam3);
	if (!bVar0)
	{
		return;
	}
}

void func_54(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam3);
	iVar1 = func_124(iVar0);
	iVar2 = func_124(iParam2);
	bVar3 = false;
	if (iVar1 && iVar2)
	{
		bVar3 = PED::_0x8BE24D74D74C6E9B(iVar0) == iParam2;
	}
	if (bVar3)
	{
		aggregate_func_7773(uParam1, 1);
	}
	else
	{
		aggregate_func_8309(uParam1, 1);
	}
	bVar4 = false;
	if (aggregate_func_4249(uParam0) == 3)
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		func_125(iVar0);
		func_125(iParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			ENTITY::IS_ENTITY_DEAD(iParam2);
			PED::SET_PED_CONFIG_FLAG(iParam2, 301, true);
		}
	}
}

void func_55(var uParam0, var uParam1)
{
	int iVar0;

	if (aggregate_func_4249(uParam0) == 7)
	{
		iVar0 = uParam0->f_2;
		func_126(iVar0);
		aggregate_func_8309(uParam1, 2);
	}
}

void func_56(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (aggregate_func_7770(uParam1, 2))
	{
		return;
	}
	if (aggregate_func_4249(uParam0) != 6)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_2)
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (aggregate_func_918(iParam2, iVar1, 1, 1) > 8f)
	{
		return;
	}
	if (!aggregate_func_7081())
	{
		return;
	}
	iVar2 = MAP::_0x3E593DF9C2962EC6(776060936);
	Global_1904612->f_8193 = PLAYER::PLAYER_ID();
	aggregate_func_8107(618, iVar2, 1);
	aggregate_func_7773(uParam1, 2);
}

void func_57(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (aggregate_func_7770((*uParam1)[iVar1 /*2*/], 3))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	bVar2 = false;
	iVar3 = aggregate_func_4249(uParam0);
	switch (iVar3)
	{
		case 6:
		case 7:
			bVar2 = true;
			break;
		case 8:
			if (bVar0)
			{
				bVar2 = true;
			}
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return;
	}
	bVar4 = PED::IS_PED_USING_ACTION_MODE(iParam2);
	if (bVar2 != bVar4)
	{
		PED::SET_PED_USING_ACTION_MODE(iParam2, bVar2, -1, 0);
	}
}

bool func_58(var uParam0, var uParam1, int* iParam2)
{
	PED::REMOVE_RELATIONSHIP_GROUP(Global_1129901->f_5);
	return true;
}

void func_59(var uParam0, var uParam1, int* iParam2)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return;
	}
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
}

bool func_61(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;

	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0);
	if (iVar0 < 1)
	{
		return false;
	}
	return true;
}

bool func_62(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;

	iVar0 = aggregate_func_3032(uParam0->f_3);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return false;
	}
	STREAMING::REQUEST_MODEL(iVar0, false);
	return true;
}

bool func_63(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;

	iVar0 = aggregate_func_3032(uParam0->f_3);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return false;
	}
	return true;
}

bool func_64(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (aggregate_func_7770((*Global_1129907)[iParam0 /*12*/], 2))
	{
		return true;
	}
	return false;
}

bool func_65(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (aggregate_func_7770((*Global_1129907)[iParam0 /*12*/], 3))
	{
		return true;
	}
	return false;
}

bool func_66(var uParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return false;
	}
	iVar0 = iParam1;
	if (aggregate_func_4641((*uParam0)[iVar0 /*2*/]) != 1)
	{
		return false;
	}
	return true;
}

void func_67(int iParam0, int iParam1)
{
	struct<20> Var0;

	Var0.f_4 = 5;
	Var0.f_7 = iParam0;
	Var0.f_6 = iParam1;
	func_94(Var0, aggregate_func_3606(iParam0));
}

bool func_69(var uParam0)
{
	var uVar0;
	vector3 vVar1;
	var uVar4;

	if (!func_90(uParam0->f_2, &uVar0, &vVar1, &uVar4))
	{
		return false;
	}
	uParam0->f_6 = { vVar1 };
	uParam0->f_6.f_3 = uVar4;
	return true;
}

void func_70(int iParam0)
{
	struct<20> Var0;

	Var0.f_4 = 3;
	Var0.f_7 = iParam0;
	func_94(Var0, aggregate_func_3606(iParam0));
}

int func_72(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_6 = { vParam1 };
	uParam0->f_6.f_3 = fParam4;
	return 1;
}

bool func_74(var uParam0, var uParam1, int* iParam2)
{
	bool bVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	bVar0 = uParam0->f_3;
	iVar1 = aggregate_func_3032(bVar0);
	vVar2 = { uParam0->f_6 };
	uVar5 = uParam0->f_6.f_3;
	if (!aggregate_func_404(&(uParam0->f_1), iVar1, vVar2, uVar5, 1, 0, 0, 1, 1))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_1))
	{
		return false;
	}
	iVar6 = NETWORK::NET_TO_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar6))
	{
	}
	iVar7 = func_134(bVar0);
	PED::_SET_PED_OUTFIT_PRESET(iVar6, iVar7, 0);
	if (!NETWORK::_0xB07D3185E11657A5(iVar6))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar6, true, false);
	}
	iVar8 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar8))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iVar6, true);
	}
	NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(uParam0->f_1, 1, 1, 256);
	NETWORK::_0xF3354D6CA46F419D(iVar6, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar6, Global_1129901->f_5);
	ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
	aggregate_func_7773(uParam0, 0);
	func_136(iVar6);
	func_123(uParam1, iParam2, uParam0->f_2, iVar6);
	return true;
}

bool func_75(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;

	iVar0 = aggregate_func_4249(uParam0);
	if (iVar0 == 8)
	{
		return false;
	}
	iVar1 = uParam0->f_2;
	iVar2 = NETWORK::NET_TO_PED(uParam0->f_1);
	bVar3 = func_64(iVar1);
	bVar4 = func_89(iVar1);
	if (!bVar3 && !bVar4)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return false;
	}
	vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
	vVar8 = { func_103(iVar1) };
	fVar11 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar5, vVar8, true);
	if (fVar11 > 30f)
	{
		return false;
	}
	return true;
}

bool func_77(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = aggregate_func_4249(uParam0);
	if (iVar0 == 4 || iVar0 == 5)
	{
		return false;
	}
	if (!func_81(uParam1))
	{
		return false;
	}
	return true;
}

int func_78(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	bVar1 = aggregate_func_7770(uParam0, 0);
	if (bVar1)
	{
		return 1;
	}
	if (func_137(uParam0->f_2, iVar0, &iVar2))
	{
		iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		iVar4 = iVar3;
		if (aggregate_func_7770((*uParam1)[iVar4 /*2*/], 0))
		{
			return 1;
		}
		iVar5 = aggregate_func_4265();
		bVar6 = aggregate_func_4351(uParam0->f_12.f_5);
		if (bVar6)
		{
			aggregate_func_2025(iVar5, uParam0->f_12.f_5, &uVar7, &uVar8, &iVar9, &uVar10, &uVar11, &uVar12);
			if (iVar9 < 2)
			{
				return 1;
			}
		}
		if (func_141(iVar2))
		{
			return 1;
		}
		uParam0->f_12 = iVar2;
		return 2;
	}
	return 1;
}

int func_79(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	vector3 vVar12;
	int iVar15;
	float fVar16;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = aggregate_func_4265();
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	bVar5 = true;
	if (uParam0->f_12.f_4 == -15)
	{
		func_19(&(uParam0->f_12));
		uParam0->f_12.f_1 = { vVar2 };
		uParam0->f_12.f_4 = iVar1;
	}
	aggregate_func_2025(iVar1, uParam0->f_12.f_4, &uVar6, &iVar7, &uVar8, &uVar9, &uVar10, &uVar11);
	if (iVar7 >= 20)
	{
		bVar5 = false;
	}
	vVar12 = { vVar2 };
	iVar15 = PED::_0x243E1B4607040057(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar15))
	{
		vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar15, true, false) };
	}
	fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar12, uParam0->f_12.f_1, true);
	if (fVar16 >= 15f)
	{
		bVar5 = false;
	}
	if (func_141(uParam0->f_12))
	{
		bVar5 = false;
	}
	if (!bVar5)
	{
		func_19(&(uParam0->f_12));
		uParam0->f_12.f_5 = iVar1;
		return 1;
	}
	return 2;
}

void func_80(var uParam0)
{
	struct<20> Var0;

	Var0.f_4 = 2;
	Var0.f_7 = uParam0;
	func_94(Var0, aggregate_func_4507(0, 8));
}

bool func_81(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!aggregate_func_1009(iVar0, 1, 1))
		{
		}
		else if (aggregate_func_7770((*uParam0)[iVar0 /*2*/], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_82(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	bool bVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	bVar2 = false;
	fVar3 = aggregate_func_918(iVar0, iVar1, 1, 1);
	if (fVar3 <= 8f)
	{
		bVar2 = true;
	}
	iVar4 = aggregate_func_4265();
	if (bVar2)
	{
		if (uParam0->f_18 == -15)
		{
			func_20(&(uParam0->f_18));
			uParam0->f_18 = iVar4;
		}
	}
	bVar5 = true;
	if (uParam0->f_18 != -15)
	{
		aggregate_func_2025(iVar4, uParam0->f_18, &uVar6, &iVar7, &uVar8, &uVar9, &uVar10, &uVar11);
		if (iVar7 >= 5)
		{
			bVar5 = false;
		}
	}
	if (!bVar5)
	{
		return 7;
	}
	return 6;
}

int func_83(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;

	iVar0 = NETWORK::NET_TO_PED(uParam0->f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { func_103(uParam0->f_2) };
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, vVar4, true);
	if (fVar7 <= 15f)
	{
		return 1;
	}
	return 7;
}

int func_84(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;

	iVar0 = uParam0->f_2;
	iVar1 = NETWORK::NET_TO_PED(uParam0->f_1);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
	vVar5 = { func_103(iVar0) };
	fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vVar5, true);
	if (fVar8 > 30f)
	{
		return 7;
	}
	if (!func_89(iVar0))
	{
		return 1;
	}
	return 8;
}

bool func_87(int iParam0)
{
	bool bVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	bVar0 = aggregate_func_7770((*Global_1129907)[iParam0 /*12*/], 0);
	return bVar0;
}

bool func_88(int iParam0)
{
	bool bVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	bVar0 = aggregate_func_7770((*Global_1129907)[iParam0 /*12*/], 1);
	return bVar0;
}

bool func_89(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (aggregate_func_7770((*Global_1129907)[iParam0 /*12*/], 4))
	{
		return true;
	}
	return false;
}

bool func_90(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_143(iParam0, &iVar0))
	{
		return false;
	}
	if (!TASK::_0x841475AC96E794D1(iVar0))
	{
	}
	*iParam1 = iVar0;
	*uParam2 = { TASK::_0xA8452DD321607029(*iParam1, 1) };
	*uParam3 = TASK::_0xB93EA7184BAA85C3(*iParam1, 1);
	return true;
}

bool func_91(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (!aggregate_func_1009(iVar3, 1, 1))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(aggregate_func_1977(iVar0), vParam0, true);
			if (fVar2 <= fParam3)
			{
				return true;
			}
		}
		iVar3++;
	}
	return false;
}

void func_94(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam20))
	{
		return;
	}
	vParam0.x = 11;
	vParam0.f_1 = iVar0;
	vParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &vParam0, 20, 5, &uParam20);
}

int func_97(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	var uVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	float fVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	bVar5 = func_90(iParam0, &iVar0, &uVar1, &uVar4);
	if (!bVar5)
	{
		return 0;
	}
	if (!TASK::_0x841475AC96E794D1(iVar0))
	{
		return 0;
	}
	bVar6 = true;
	iVar7 = 0;
	fVar8 = -1f;
	if (bParam2)
	{
		bVar6 = false;
		iVar7 = 1951165908;
		fVar8 = 0f;
	}
	TASK::_TASK_USE_SCENARIO_POINT(iParam1, iVar0, 0, 0, bVar6, bParam2, iVar7, false, fVar8, 0);
	return 1;
}

int func_98(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam1, 0, 0, 2f, 2f, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
	PED::_0xAAC0EE3B4999ABB5(iParam0, iParam1);
	PED::_0xF634E2892220EF34(iParam0, 0);
	PED::SET_PED_RESET_FLAG(iParam0, 229, true);
	PED::_0xAAB050DA48B57978(iParam0, "Interaction_Happy", iParam1, 20000, 4);
	return 1;
}

int func_100(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	TASK::TASK_GO_TO_ENTITY(iParam0, iVar0, -1, 8f, 2f, 12f, 0);
	return 1;
}

int func_101(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	iVar0 = joaat("moodstressed");
	TASK::TASK_BARK(iParam0, iParam1, iVar0);
	return 1;
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	vVar1 = { func_103(iParam1) };
	if (aggregate_func_4268(vVar1))
	{
		return 0;
	}
	bVar4 = 5242884;
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vVar1, 2f, -1, 10f, bVar4, 40000f);
	return 1;
}

Vector3 func_103(int iParam0)
{
	if (iParam0 == 255)
	{
		return ((*Global_1126840)[aggregate_func_4294() /*83*/])->f_38.f_4;
	}
	return ((*Global_1126840)[iParam0 /*83*/])->f_38.f_4;
}

int func_105(int iParam0, vector3 vParam1, float fParam4)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	bVar0 = 5242884;
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vParam1, 2f, -1, fParam4, bVar0, 40000f);
	return 1;
}

int func_106(int iParam0, vector3 vParam1, float fParam4, int iParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		return 0;
	}
	iVar1 = ENTITY::_0x59B57C4B06531E1E(vParam1, fParam4, iVar0, 1);
	fVar3 = 1000000f;
	bVar4 = false;
	iVar5 = 0;
	while (iVar5 < iVar1)
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		if (!MISC::_0xBDC6E364C9C78178(iVar6))
		{
		}
		else
		{
			iVar7 = MISC::_0xEE04C0AFD4EFAF0E(iVar6);
			if (ENTITY::IS_ENTITY_DEAD(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_A_PED(iVar7))
			{
			}
			else
			{
				iVar8 = MISC::_0x3FFB15534067DCD4(iVar7);
				iVar9 = PED::GET_RELATIONSHIP_BETWEEN_PEDS(iParam0, iVar8);
				if (iVar9 != 6)
				{
				}
				else
				{
					fVar10 = aggregate_func_918(iParam0, iVar8, 1, 1);
					if (fVar10 < fVar3)
					{
						bVar4 = true;
						iVar2 = iVar8;
						fVar3 = fVar10;
					}
				}
			}
		}
		iVar5++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (bVar4)
	{
		*iParam5 = iVar2;
		*uParam6 = fVar3;
		return 1;
	}
	return 0;
}

bool func_109(vector3 vParam0, int iParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	float fVar10;

	fVar1 = 1000000f;
	bVar2 = false;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (!aggregate_func_1009(iVar3, 1, 1))
		{
		}
		else
		{
			iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar6, true, false) };
			if (ENTITY::IS_ENTITY_DEAD(iVar6))
			{
			}
			else
			{
				fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar7, vParam0, true);
				if (fVar10 < fVar1)
				{
					iVar0 = iVar5;
					fVar1 = fVar10;
					bVar2 = true;
				}
			}
		}
		iVar3++;
	}
	if (bVar2)
	{
		*iParam3 = iVar0;
		*fParam4 = fVar1;
		return true;
	}
	return false;
}

bool func_111(int* iParam0, int iParam1)
{
	char cVar0[64];
	bool bVar8;

	StringCopy(&cVar0, "relGroupCampDog", 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam1, 64);
	bVar8 = PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(Global_1129901->f_5));
	return bVar8;
}

void func_114(int iParam0, var uParam1, int* iParam2)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 11:
			func_148(iParam0, uParam1, iParam2);
			break;
	}
}

bool func_115(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	vector3 vVar11;
	float fVar14;
	float fVar15;
	int iVar16;
	vector3 vVar17;
	int iVar20;
	int iVar21;
	bool bVar22;
	vector3 vVar23;
	var uVar26;
	vector3 vVar27;
	int iVar30;
	int iVar31;
	var uVar32;

	vVar0 = { func_103(PLAYER::NETWORK_PLAYER_ID_TO_INT()) };
	iVar6 = 1;
	vVar7 = { Global_1273882->f_17 };
	if (aggregate_func_4268(vVar0))
	{
		vVar11 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar10 = vVar11.z;
	}
	else
	{
		fVar10 = aggregate_func_3018(vVar0, vVar7, 1);
	}
	fVar14 = 40f;
	fVar15 = 80f;
	iVar16 = (uParam0->f_2 % 20);
	fVar10 = (fVar10 + ((BUILTIN::TO_FLOAT(iVar16) * 30f) * aggregate_func_4947((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar17 = { vVar7 + Vector(0f, -BUILTIN::COS(fVar10), BUILTIN::SIN(fVar10)) * FtoV(((fVar15 + fVar14) * 0.5f)) };
	iVar20 = aggregate_func_4641(uParam0);
	switch (iVar20)
	{
		case 0:
			aggregate_func_4788(uParam0, aggregate_func_4952());
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			aggregate_func_4252(uParam0, 1);
			break;
		case 1:
			iVar21 = 0;
			while (iVar21 < 10)
			{
				if (!PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vVar17, iVar21, &vVar3, 1, 1077936128 /* Float: 3f */, 0))
				{
					aggregate_func_4252(uParam0, 2);
					return false;
				}
				if (!func_155(vVar3))
				{
				}
				else
				{
					aggregate_func_4788(uParam0, vVar3);
					aggregate_func_4252(uParam0, 3);
					return false;
				}
				iVar21++;
			}
			aggregate_func_4252(uParam0, 2);
			break;
		case 2:
			if (aggregate_func_695(vVar17, &(uParam0->f_3), &bVar22, iVar6, 0, 1127481344 /* Float: 180f */, 1101004800 /* Float: 20f */, -1138501878 /* Float: -0.01f */, -1138501878 /* Float: -0.01f */, 0))
			{
				vVar23 = { aggregate_func_7632(uParam0) };
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar23, &uVar26, 1))
				{
					vVar23 = { vVar23.x, vVar23.y, uVar26 };
				}
				if (!func_155(vVar23))
				{
					aggregate_func_4252(uParam0, 5);
				}
				aggregate_func_4252(uParam0, 3);
				return false;
			}
			if (bVar22)
			{
				aggregate_func_4252(uParam0, 5);
				return false;
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				vVar27 = { aggregate_func_7632(uParam0) };
				iVar30 = 23;
				uParam0->f_13 = PATHFIND::_0x348F211CA2404039(0, vVar27, vVar7, iVar30);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						aggregate_func_4252(uParam0, 5);
					}
				}
			}
			else
			{
				iVar31 = PATHFIND::_0x3A0F82F6EE2291C8(uParam0->f_13);
				switch (iVar31)
				{
					case 2:
						break;
					case 0:
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						aggregate_func_4252(uParam0, 5);
						return false;
					case 1:
						if (!PATHFIND::_0x8800776E410EB669(uParam0->f_13))
						{
							PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
							aggregate_func_4252(uParam0, 5);
							return false;
						}
						uVar32 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (aggregate_func_4240(uVar32, 2))
						{
							PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
							aggregate_func_4252(uParam0, 5);
							return false;
						}
						aggregate_func_4252(uParam0, 4);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			aggregate_func_4252(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 20)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			aggregate_func_4252(uParam0, 0);
			break;
	}
	return false;
}

void func_116(var uParam0, vector3 vParam1)
{
	struct<20> Var0;

	Var0.f_4 = 4;
	Var0.f_7 = uParam0;
	Var0.f_16 = { vParam1 };
	func_94(Var0, aggregate_func_4507(0, 8));
}

bool func_120(var uParam0, int* iParam1, int iParam2, char[4] cParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (!aggregate_func_7770((*uParam0)[iVar1 /*2*/], 4))
	{
		return false;
	}
	iVar2 = iParam2;
	if (!aggregate_func_7770((*uParam0)[iVar2 /*2*/], 4))
	{
		return false;
	}
	bVar3 = true;
	if (iParam2 == iVar0)
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if (aggregate_func_7770((*uParam0)[iVar1 /*2*/], 5) || aggregate_func_7770((*uParam0)[iVar2 /*2*/], 5))
		{
			*bParam4 = 1;
			return false;
		}
	}
	if (aggregate_func_7981(iParam1, 2))
	{
		*cParam3 = { aggregate_func_8131(iParam1) };
		return true;
	}
	else
	{
		return aggregate_func_8830(iVar2, cParam3);
	}
	return false;
}

int func_123(var uParam0, int* iParam1, int iParam2, int iParam3)
{
	char cVar0[64];
	bool bVar8;
	bool bVar9;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam2))
	{
		return 0;
	}
	StringCopy(&cVar0, "", 64);
	bVar8 = false;
	bVar9 = func_120(uParam0, iParam1, iParam2, &cVar0, &bVar8);
	if (bVar8)
	{
		aggregate_func_7631(iParam1, 3);
		return 1;
	}
	if (bVar9)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(aggregate_func_4984(&cVar0)) <= 0)
		{
			return 0;
		}
		PED::_SET_PED_PROMPT_NAME(iParam3, &cVar0);
		aggregate_func_7631(iParam1, 3);
		return 1;
	}
	return 0;
}

int func_124(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_125(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (PED::_0x7FC84E85D98F063D(iParam0))
	{
		TASK::CLEAR_PED_TASKS(iParam0, 1, 0);
	}
}

void func_126(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	aggregate_func_7773((*Global_1129907)[iParam0 /*12*/], 3);
}

int func_134(bool bParam0)
{
	int iVar0;

	if (aggregate_func_2852(bParam0, -1372720971))
	{
		iVar0 = 0;
	}
	else if (aggregate_func_2852(bParam0, 1028787971))
	{
		iVar0 = 1;
	}
	else if (aggregate_func_2852(bParam0, 1271835644))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_136(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	PED::SET_PED_KEEP_TASK(iParam0, true);
	PED::SET_PED_CAN_RAGDOLL(iParam0, false);
	PED::_0x6569F31A01B4C097(iParam0, 1, false);
	PED::_0x6569F31A01B4C097(iParam0, 0, false);
	ENTITY::SET_ENTITY_PROOFS(iParam0, 2, false);
}

bool func_137(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	var uVar7;
	bool bVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	bVar8 = func_90(iParam0, &uVar3, &vVar4, &uVar7);
	if (!bVar8)
	{
		return false;
	}
	fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar4, true);
	if (fVar9 > 10f)
	{
		return false;
	}
	if (!func_109(vVar0, &iVar10, &fVar9))
	{
		return false;
	}
	iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar11))
	{
		return false;
	}
	if (fVar9 <= 10f)
	{
		*iParam2 = iVar10;
		return true;
	}
	return false;
}

bool func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = TASK::_0x2D0571BB55879DA2(iVar0);
	iVar2 = iVar1;
	switch (iVar2)
	{
		case -1767895052:
		case -1075420544:
		case 1020517461:
		case 1259174088:
			return true;
	}
	return false;
}

bool func_143(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!aggregate_func_4038(iParam0, &vVar0))
	{
		return false;
	}
	if (aggregate_func_4268(vVar0))
	{
		return false;
	}
	iVar3 = TASK::_0xF533D68FF970D190(vVar0, 1579036847, 5.5f, 0, 0);
	if (TASK::_0x841475AC96E794D1(iVar3))
	{
		*iParam1 = iVar3;
		return true;
	}
	return false;
}

void func_148(int iParam0, var uParam1, int* iParam2)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 20))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 1:
			func_186(&Var0, uParam1, iParam2);
			break;
		case 3:
			func_187(&Var0, iParam2);
			break;
		case 4:
			func_188(&Var0, uParam1, iParam2);
			break;
		case 5:
			func_189(&Var0, uParam1);
			break;
		case 6:
			func_190(&Var0, uParam1);
			break;
	}
}

bool func_155(vector3 vParam0)
{
	var uVar0;
	bool bVar1;

	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		return false;
	}
	if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
	{
		return false;
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(1f, 0f, 0f), &uVar0, 0))
	{
		return false;
	}
	bVar1 = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);
	if (bVar1)
	{
		return false;
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
	{
		return false;
	}
	if (VOLUME::_0x769BB7626B8CDB06(vParam0, 15f, 0, 0, 0))
	{
		return false;
	}
	return true;
}

void func_186(var uParam0, var uParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;

	if (uParam0->f_7 != uParam1->f_2)
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	aggregate_func_7588(iParam2, uParam0->f_8);
	bVar1 = MISC::_0xE98D55C5983F2509(iVar0);
	aggregate_func_7633(iParam2, 1);
	aggregate_func_7633(iParam2, 3);
	aggregate_func_7631(iParam2, 2);
	aggregate_func_7631(iParam2, 4);
}

void func_187(var uParam0, int* iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_7)
	{
		return;
	}
	aggregate_func_7774(&(iParam1->f_10));
	aggregate_func_7631(iParam1, 5);
}

void func_188(var uParam0, var uParam1, int* iParam2)
{
	if (uParam0->f_7 != uParam1->f_2)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	aggregate_func_7774(&(iParam2->f_10));
	aggregate_func_4788(&(iParam2->f_10), uParam0->f_16);
	aggregate_func_7773(uParam1, 1);
}

void func_189(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != uParam0->f_7)
	{
		return;
	}
	bVar1 = UNLOCK::_UNLOCK_IS_UNLOCKED(uParam0->f_6);
	func_212(uParam1->f_2, 451736625, bVar1);
}

void func_190(var uParam0, var uParam1)
{
	if (uParam0->f_7 != uParam1->f_2)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (uParam0->f_19)
	{
		aggregate_func_7773(uParam1, 2);
	}
	else
	{
		aggregate_func_7773(uParam1, 3);
	}
}

void func_212(var uParam0, int iParam1, bool bParam2)
{
	struct<20> Var0;

	Var0.f_4 = 6;
	Var0.f_7 = uParam0;
	Var0.f_6 = iParam1;
	Var0.f_19 = bParam2;
	func_94(Var0, aggregate_func_4507(0, 8));
}

