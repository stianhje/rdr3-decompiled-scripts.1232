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
	int iLocal_18 = 0;
	struct<4> Local_19 = { 0, 0, 0, 0 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = false;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	vector3 vLocal_35 = { 0f, 0f, 0f };
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41[5] = { 0, 0, 0, 0, 0 };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<4> Local_49[8];
	struct<4> Local_82[8];
	int iLocal_115[5] = { 0, 0, 0, 0, 0 };
	int iLocal_121[5] = { 0, 0, 0, 0, 0 };
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_18 = 1;
	iLocal_28 = 1455795772;
	iLocal_33 = joaat("policewagon01x");
	iLocal_34 = 227187597;
	uScriptParam_0 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while ((((!aggregate_func_246(PLAYER::PLAYER_ID(), 0, 0, 1) && aggregate_func_4112()) && iLocal_18 < 7) && !aggregate_func_4946()) && !aggregate_func_7123())
	{
		func_6();
		BUILTIN::WAIT(0);
	}
	func_1();
	if (aggregate_func_8652() == 5)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(25000, 35000);
	}
	else if (aggregate_func_8652() >= 3)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(35000, 55000);
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(45000, 55000);
	}
	Global_1938075->f_2 = iVar0;
	Global_1938075->f_1 = MISC::GET_GAME_TIMER();
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;

	ITEMSET::DESTROY_ITEMSET(iLocal_130);
	if (MISC::IS_INCIDENT_VALID(iLocal_131))
	{
		MISC::DELETE_INCIDENT(iLocal_131);
	}
	aggregate_func_2899(&uLocal_39, 1);
	aggregate_func_2899(&uLocal_40, 1);
	iVar1 = 0;
	while (iVar1 < iLocal_41)
	{
		if (aggregate_func_402(&(iLocal_41[iVar1]), 0))
		{
			if (iVar1 == 0)
			{
				iVar2 = -1;
			}
			else
			{
				iVar2 = -2;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_47, 0, 0))
			{
				TASK::TASK_ENTER_VEHICLE(0, iLocal_47, 20000, iVar2, 2f, 1, 0);
			}
			if (iVar1 == 0)
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(0, -1082130432 /* Float: -1f */, 0, 0);
			}
			else
			{
				TASK::TASK_STAND_STILL(0, 5000);
			}
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(&(iLocal_41[iVar1]), iVar0);
			aggregate_func_501(iLocal_41[iVar1], 1, 1, 1);
		}
		iVar1++;
	}
	aggregate_func_1432(vLocal_35, 10f, 5);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_47);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_48);
}

void func_6()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (aggregate_func_4850(&uLocal_127) > 35f && iLocal_18 <= 4)
	{
		iLocal_18 = 6;
	}
	switch (iLocal_18)
	{
		case 1:
			aggregate_func_4283(&uLocal_127);
			PED::_0xED9582B3DA8F02B4(5);
			iLocal_130 = ITEMSET::CREATE_ITEMSET(true);
			if (aggregate_func_8652() == 5)
			{
				iLocal_29 = 5;
			}
			else
			{
				iLocal_29 = MISC::GET_RANDOM_INT_IN_RANGE(2, 4);
			}
			func_23();
			iVar0 = aggregate_func_6596();
			switch (iVar0)
			{
				case 0:
					iLocal_32 = joaat("s_m_m_ambientlawrural_01");
					break;
				case 1:
					iLocal_32 = joaat("s_m_m_ambientlawrural_01");
					break;
				case 2:
					iLocal_32 = joaat("s_m_m_ambientlawrural_01");
					break;
				case 3:
					iLocal_32 = joaat("s_m_m_ambientlawrural_01");
					break;
				case 5:
					iLocal_32 = joaat("s_m_m_fussarhenchman_01");
					break;
				default:
					iLocal_32 = joaat("s_m_m_ambientlawrural_01");
					break;
			}
			iLocal_18 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_32, false);
			STREAMING::REQUEST_MODEL(iLocal_33, false);
			STREAMING::REQUEST_MODEL(iLocal_34, false);
			if (((STREAMING::HAS_MODEL_LOADED(iLocal_32) && STREAMING::HAS_MODEL_LOADED(iLocal_33)) && STREAMING::HAS_MODEL_LOADED(iLocal_34)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_18 = 3;
			}
			break;
		case 3:
			if (aggregate_func_695(Global_36, &Local_19, &bVar1, 16, 1, 45f, 25f, 100f, 180f, 0))
			{
				vLocal_35 = { Local_19.f_3 };
				aggregate_func_2904(&uLocal_40, vLocal_35, 5f, 2, 2, 0);
				aggregate_func_2904(&uLocal_39, vLocal_35, 7f, 1, 61, 0);
				iLocal_18 = 4;
			}
			else if (bVar1)
			{
				aggregate_func_2530(&Local_19, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_31)
			{
				func_27();
			}
			else
			{
				func_28();
				aggregate_func_1067(vLocal_35, 10f, 0, 0, 5);
				MISC::_0xAB3D3F45436DB1D8(8, vLocal_35, iLocal_130, -1f, &iLocal_131);
				iVar2 = 0;
				while (iVar2 < iLocal_41)
				{
					if (aggregate_func_402(&(iLocal_41[iVar2]), 0))
					{
						if (iVar2 <= 1)
						{
							iVar3 = &iLocal_121[iVar2];
						}
						else if (aggregate_func_2083())
						{
							iVar3 = &iLocal_115[iVar2];
						}
						else
						{
							iVar3 = &iLocal_121[iVar2];
						}
						TASK::_TASK_USE_SCENARIO_POINT(&(iLocal_41[iVar2]), iVar3, 0, 0, false, true, 0, false, -1082130432 /* Float: -1f */, 0);
					}
					iVar2++;
				}
				iLocal_18 = 5;
			}
			break;
		case 5:
			iVar4 = 0;
			while (iVar4 < iLocal_41)
			{
				if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_41[iVar4])))
				{
					PED::SET_PED_RESET_FLAG(&(iLocal_41[iVar4]), 116, true);
					if (aggregate_func_918(Global_35, &(iLocal_41[iVar4]), 1, 1) > 200f)
					{
						iLocal_18 = 6;
						return;
					}
				}
				iVar4++;
			}
			break;
		case 6:
			func_1();
			iLocal_18 = 7;
			break;
	}
}

void func_23()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_82[iVar0 /*4*/] = iLocal_28;
		Local_49[iVar0 /*4*/] = iLocal_28;
		iVar0++;
	}
	Local_82[0 /*4*/] = -22664287;
	(Local_82[0 /*4*/])->f_1 = { 1.5f, 0f, 0f };
	Local_82[1 /*4*/] = 421625586;
	(Local_82[1 /*4*/])->f_1 = { -1.35f, 0f, 0f };
	Local_82[2 /*4*/] = 2087366558;
	(Local_82[2 /*4*/])->f_1 = { 1f, -2.5f, 0f };
	Local_82[3 /*4*/] = 2087366558;
	(Local_82[3 /*4*/])->f_1 = { 1f, 6f, 0f };
	Local_82[4 /*4*/] = -1273821262;
	(Local_82[4 /*4*/])->f_1 = { 2f, -2.5f, 0f };
	Local_82[5 /*4*/] = 871322766;
	(Local_82[5 /*4*/])->f_1 = { 2f, 2.5f, 0f };
	Local_82[6 /*4*/] = -258459266;
	(Local_82[6 /*4*/])->f_1 = { -2f, 2.5f, 0f };
	Local_82[7 /*4*/] = -22664287;
	(Local_82[7 /*4*/])->f_1 = { -2f, -2.5f, 0f };
	Local_49[0 /*4*/] = -22664287;
	Local_49[1 /*4*/] = 597682689;
	Local_49[2 /*4*/] = 1299323850;
	Local_49[3 /*4*/] = 2087366558;
	Local_49[4 /*4*/] = -1032721003;
	Local_49[5 /*4*/] = 1446817251;
	Local_49[6 /*4*/] = -258459266;
	Local_49[7 /*4*/] = 871322766;
}

void func_27()
{
	vector3 vVar0;

	if (iLocal_30 < (iLocal_29 / 2))
	{
		vVar0.x = ((vLocal_35.x - 4f) + IntToFloat(iLocal_30));
	}
	else
	{
		vVar0.x = ((vLocal_35.x + 4f) - IntToFloat(iLocal_30));
	}
	vVar0.f_1 = (vLocal_35.y + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(-3, 3)));
	aggregate_func_832(&vVar0, 50, 10, 0, 0);
	iLocal_41[iLocal_30] = aggregate_func_2073(iLocal_32, vVar0, (fLocal_38 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-10f, 60f)), 1, 1, 0, 1, 1, 1, 0, 0);
	LAW::_0x819ADD5EF1742F47(&(iLocal_41[iLocal_30]), 2);
	LAW::_0x819ADD5EF1742F47(&(iLocal_41[iLocal_30]), 16384);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_41[iLocal_30]), 39, true);
	PED::SET_PED_CONFIG_FLAG(&(iLocal_41[iLocal_30]), 188, true);
	func_57(&(iLocal_41[iLocal_30]), iLocal_130);
	iLocal_30++;
	if (iLocal_30 >= iLocal_29)
	{
		iLocal_30 = 0;
		bLocal_31 = true;
	}
}

void func_28()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	struct<4> Var7;
	int iVar11;
	vector3 vVar12;
	int iVar15;
	float fVar16;

	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_35, fLocal_38, 2f, 0f, 0f) };
	aggregate_func_832(&vVar0, 50, 10, 0, 0);
	iLocal_47 = VEHICLE::CREATE_VEHICLE(iLocal_33, vVar0, (fLocal_38 + MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 30f)), true, true, false, false);
	iVar11 = 0;
	while (iVar11 < iLocal_29)
	{
		Var7 = { func_58(&Local_82) };
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_47, Var7.f_1) };
		aggregate_func_832(&vVar3, 50, 10, 0, 0);
		fVar6 = aggregate_func_3570(vVar0, vVar3);
		iLocal_121[iVar11] = TASK::CREATE_SCENARIO_POINT(Var7, vVar3, fVar6, 0, 0, 0);
		iVar11++;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_35, fLocal_38, -3f, -3f, 0f) };
	aggregate_func_832(&vVar0, 50, 10, 0, 0);
	iLocal_48 = OBJECT::CREATE_OBJECT(iLocal_34, vVar0, true, true, false, false, true);
	iVar15 = 0;
	while (iVar15 < iLocal_29)
	{
		Var7 = { func_58(&Local_49) };
		fVar16 = 1.5f;
		vVar12 = { aggregate_func_2371(((360f / IntToFloat(iLocal_29)) * IntToFloat(iVar15))) };
		vVar3 = { vVar0 + vVar12 * Vector(fVar16, fVar16, fVar16) };
		fVar6 = aggregate_func_3570(vVar3, vVar0);
		aggregate_func_832(&vVar3, 50, 10, 0, 0);
		iLocal_115[iVar15] = TASK::CREATE_SCENARIO_POINT(Var7, vVar3, fVar6, 0, 0, 0);
		iVar15++;
	}
}

void func_57(int iParam0, int iParam1)
{
	if (!ITEMSET::IS_ITEMSET_VALID(iParam1))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ITEMSET::IS_IN_ITEMSET(iParam0, iParam1))
		{
			ITEMSET::ADD_TO_ITEMSET(iParam0, iParam1);
		}
	}
}

struct<4> func_58(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	iVar5 = 0;
	while (iVar5 < 8)
	{
		if (iParam0[iVar4 /*4*/] != iLocal_28)
		{
			Var0 = { *((*iParam0)[iVar4 /*4*/]) };
			(*iParam0)[iVar4 /*4*/] = iLocal_28;
		}
		else
		{
			iVar4++;
			if (iVar4 >= 8)
			{
				iVar4 = 0;
			}
			iVar5++;
		}
	}
	return Var0;
}

