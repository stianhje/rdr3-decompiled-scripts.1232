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
	struct<18> Local_21 = { 0, 0, 0, 0, 0, 1073741824, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<21> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_1439

bool func_22(var uParam0, int* iParam1)
{
	uParam0->f_29 = 850;
	return true;
}

bool func_42(var uParam0)
{
	if (aggregate_func_4260(uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			return false;
		}
	}
	if (!func_82())
	{
		return false;
	}
	return true;
}

bool func_48(var uParam0)
{
	if (aggregate_func_4260(uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			if (ENTITY::GET_ENTITY_MODEL(uParam0->f_3) != -1772561076)
			{
				return false;
			}
		}
		if (func_95(&(uParam0->f_3)))
		{
			func_96(&(uParam0->f_3));
			func_97(&(uParam0->f_3));
		}
	}
	else if (func_98(uParam0))
	{
		func_97(&(uParam0->f_3));
	}
	func_99(uParam0);
	return false;
}

void func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_104(uParam0, 1);
	if (!aggregate_func_4260(uParam0))
	{
		iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		if ((iVar0 == 0 || !_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1)) || _NAMESPACE26::_0x901E0DC25080C8B9(uParam0->f_2) != iVar1)
		{
			aggregate_func_2695(uParam0);
			return;
		}
	}
	iVar2 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (iVar2 == PLAYER::PLAYER_PED_ID())
		{
			aggregate_func_2695(uParam0);
			return;
		}
	}
	iVar3 = -1636811933;
	iVar4 = -2145527776;
	iVar5 = -1445216292;
	if (iVar0 == 0)
	{
		iVar3 = 1603565092;
		iVar4 = 0;
		iVar5 = -1313992318;
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (iVar0 != Local_21.f_17)
		{
			Local_21.f_17 = iVar0;
			if (iVar0 == 0)
			{
				func_106(uParam0, 768962966);
			}
			else
			{
				func_106(uParam0, -1403891967);
			}
		}
		if (aggregate_func_8993(uParam0->f_2))
		{
			func_107(uParam0, -272772079);
		}
		else
		{
			func_108(uParam0, -272772079);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar0 > 0)
			{
				func_107(uParam0, iVar3);
			}
			func_108(uParam0, iVar4);
			func_108(uParam0, iVar5);
		}
		else if (!PED::IS_PED_A_PLAYER(iVar2))
		{
			func_108(uParam0, iVar4);
			func_108(uParam0, iVar5);
			func_108(uParam0, iVar3);
		}
		else
		{
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar6))
			{
				func_108(uParam0, iVar4);
				func_108(uParam0, iVar5);
				func_108(uParam0, iVar3);
			}
			else if (aggregate_func_401(iVar6, 0))
			{
				func_108(uParam0, iVar4);
				func_108(uParam0, iVar3);
				func_107(uParam0, iVar5);
			}
			else if (iVar0 > 0)
			{
				func_108(uParam0, iVar5);
				func_108(uParam0, iVar3);
				func_107(uParam0, iVar4);
			}
		}
		if (iVar0 > 0)
		{
			switch (iVar0)
			{
				case 1:
					func_107(uParam0, -404791027);
					func_108(uParam0, -41513897);
					func_108(uParam0, 198191338);
					func_108(uParam0, -1559275666);
					func_108(uParam0, -1320029197);
					func_108(uParam0, -967238143);
					break;
				case 2:
					func_107(uParam0, -41513897);
					func_108(uParam0, -404791027);
					func_108(uParam0, 198191338);
					func_108(uParam0, -1559275666);
					func_108(uParam0, -1320029197);
					func_108(uParam0, -967238143);
					break;
				case 3:
					func_107(uParam0, 198191338);
					func_108(uParam0, -404791027);
					func_108(uParam0, -41513897);
					func_108(uParam0, -1559275666);
					func_108(uParam0, -1320029197);
					func_108(uParam0, -967238143);
					break;
				case 4:
					func_107(uParam0, -1559275666);
					func_108(uParam0, -404791027);
					func_108(uParam0, -41513897);
					func_108(uParam0, 198191338);
					func_108(uParam0, -1320029197);
					func_108(uParam0, -967238143);
					break;
				case 5:
					func_107(uParam0, -1320029197);
					func_108(uParam0, -404791027);
					func_108(uParam0, -41513897);
					func_108(uParam0, 198191338);
					func_108(uParam0, -1559275666);
					func_108(uParam0, -967238143);
					break;
				case 6:
					func_107(uParam0, -967238143);
					func_108(uParam0, -404791027);
					func_108(uParam0, -41513897);
					func_108(uParam0, 198191338);
					func_108(uParam0, -1559275666);
					func_108(uParam0, -1320029197);
					break;
			}
		}
		else
		{
			func_108(uParam0, -404791027);
			func_108(uParam0, -41513897);
			func_108(uParam0, 198191338);
			func_108(uParam0, -1559275666);
			func_108(uParam0, -1320029197);
			func_108(uParam0, -967238143);
		}
	}
	if (MAP::_0x9FA00E2FC134A9D0(uParam0->f_3))
	{
		return;
	}
	if (iVar0 == 0)
	{
		func_106(uParam0, 768962966);
	}
	else
	{
		func_106(uParam0, -1403891967);
	}
}

void func_78(var uParam0, int iParam1)
{
	aggregate_func_1083(uParam0->f_3, 1);
	func_96(&(uParam0->f_3));
	func_97(&(uParam0->f_3));
}

void func_79(var uParam0)
{
	if (!aggregate_func_4260(uParam0))
	{
		return;
	}
	if (Local_21.f_17 == 0)
	{
		aggregate_func_4322(70, 1);
	}
	else
	{
		func_142("FETCH_HELP_BOUNTY_SET_UP_WAGON_DESTROYED", 0, 10000, 0, 0, 0, 1);
	}
}

bool func_82()
{
	int iVar0;

	if (!NETWORK::_0x255A5EF65EDA9167(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar0 = PLAYER::_0xB9050A97594C8832(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!func_144(iVar0))
	{
		return false;
	}
	if (Local_21.f_16 != PLAYER::PLAYER_ID())
	{
		Local_21.f_16 = PLAYER::PLAYER_ID();
		return false;
	}
	return true;
}

bool func_95(var uParam0)
{
	int iVar0;

	if (PED::IS_PED_SITTING_IN_VEHICLE(Global_35, *uParam0))
	{
		iVar0 = PED::_0x4E76CB57222A00E5(Global_35);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_96(var uParam0)
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*uParam0);
	}
	else if (!func_146(Global_35, -1519783610))
	{
		AITRANSPORT::_0xBA8818212633500A(*uParam0, 17, 1);
		TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(*uParam0, 0);
	}
}

void func_97(var uParam0)
{
	Local_21.f_10 = 0;
	Local_21.f_11 = 0;
	Local_21.f_12 = 0;
	AITRANSPORT::_0xBA8818212633500A(*uParam0, 17, 0);
}

bool func_98(var uParam0)
{
	switch (Local_21.f_10)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				if (func_95(&(uParam0->f_3)))
				{
					aggregate_func_4935(&(Local_21.f_10), 1);
				}
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				if (func_95(&(uParam0->f_3)))
				{
					if (func_148(uParam0))
					{
						aggregate_func_4935(&(Local_21.f_10), 2);
					}
					if (func_149(uParam0, 0))
					{
						if (aggregate_func_1838(4, 255))
						{
							if (!aggregate_func_1838(128, 255))
							{
								aggregate_func_2554(128);
							}
						}
						else
						{
							aggregate_func_748(1, 1);
						}
						aggregate_func_4935(&(Local_21.f_10), 3);
					}
				}
				else
				{
					aggregate_func_4935(&(Local_21.f_10), 3);
				}
			}
			else
			{
				aggregate_func_4935(&(Local_21.f_10), 3);
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				func_96(&(uParam0->f_3));
				if (func_153(&(uParam0->f_3)))
				{
					aggregate_func_4935(&(Local_21.f_10), 3);
				}
			}
			break;
		case 3:
			func_154();
			return true;
	}
	return false;
}

void func_99(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 853;
	if (aggregate_func_407(0, &(Local_21.f_13), &(Local_21.f_14)))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_13))
		{
			if (Local_21.f_13 != Local_21.f_15 && PED::GET_PED_CONFIG_FLAG(Local_21.f_13, 565, true))
			{
				iVar1 = aggregate_func_4865(Local_21.f_13);
				if (aggregate_func_918(iVar1, uParam0->f_3, 1, 1) < 20f && _NAMESPACE26::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), uParam0->f_2))
				{
					aggregate_func_4322(iVar0, 0);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_14))
		{
			if (Local_21.f_14 != Local_21.f_15 && PED::GET_PED_CONFIG_FLAG(Local_21.f_14, 565, true))
			{
				iVar2 = aggregate_func_4865(Local_21.f_13);
				if (aggregate_func_918(iVar2, uParam0->f_3, 1, 1) < 20f && _NAMESPACE26::_0x3F59FE6F37869576(PLAYER::PLAYER_ID(), uParam0->f_2))
				{
					aggregate_func_4322(iVar0, 0);
				}
			}
		}
	}
}

int func_104(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar3 = (-1 + iVar0);
		if (iVar3 == -1 || iVar3 == 0)
		{
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_3, iVar3))
		{
			iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_3, iVar3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (bParam1 || !ENTITY::IS_ENTITY_DEAD(iVar2))
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_106(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	aggregate_func_2695(uParam0);
	uParam0->f_1 = MAP::_0x23F74C2FDA6E7C61(iParam1, uParam0->f_3);
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
	if (STREAMING::IS_MODEL_VALID(iVar0))
	{
		bVar1 = aggregate_func_3842(iVar0);
		if (aggregate_func_2823(bVar1, 0))
		{
			MAP::_0x9CB1A1623062F402(uParam0->f_1, MISC::_CREATE_VAR_STRING(0, aggregate_func_4462(bVar1)));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, aggregate_func_3843(2));
		}
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, aggregate_func_3843(2));
	}
	MAP::_0x662D364ABF16DE2F(uParam0->f_1, 580546400);
}

void func_107(var uParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(uParam0->f_1, iParam1);
	}
}

void func_108(var uParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		MAP::_0xB059D7BD3D78C16F(uParam0->f_1, iParam1);
	}
}

void func_142(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (iParam1 != 0)
	{
		iVar1 = MAP::_0x3E593DF9C2962EC6(iParam1);
		iVar0 = MISC::_CREATE_VAR_STRING(2, sParam0, iVar1);
	}
	else
	{
		iVar0 = MISC::_CREATE_VAR_STRING(2, sParam0);
	}
	if (MISC::_0x375F5870A7B8BEC1(iVar0))
	{
		MAP::REMOVE_BLIP(&iVar1);
		return;
	}
	if (Global_1268935->f_513.f_326 != 0)
	{
		_NAMESPACE71::_0x2F901291EF177B02(Global_1268935->f_513.f_326, 0);
		Global_1268935->f_513.f_326 = 0;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1268935->f_513.f_325))
	{
		MAP::REMOVE_BLIP(&(Global_1268935->f_513.f_325));
	}
	Global_1268935->f_513.f_325 = iVar1;
	Global_1268935->f_513.f_326 = aggregate_func_2916(iVar0, iParam2, iParam3, iParam4, iParam5, bParam6);
}

bool func_144(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -1772561076:
			return true;
		default:
			break;
	}
	return false;
}

bool func_146(int iParam0, int iParam1)
{
	return (TASK::_0xA710DC5D25F8B942(iParam0, iParam1) != -1f || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0);
}

bool func_148(var uParam0)
{
	switch (Local_21.f_11)
	{
		case 0:
			if (!aggregate_func_2875(Local_21.f_8))
			{
				Local_21.f_8 = aggregate_func_1523("PLAYER_SURRENDER_BREAK_OUT", joaat("INPUT_CONTEXT_X"), uParam0->f_3, 1, 0, 0, 0, 10, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
			aggregate_func_2504(Local_21.f_8, 0, 1);
			aggregate_func_4583(Local_21.f_8, 0, 1, 1);
			if (aggregate_func_2875(Local_21.f_8))
			{
				aggregate_func_4935(&(Local_21.f_11), 1);
			}
			break;
		case 1:
			if (aggregate_func_4637(Local_21.f_8, 0))
			{
				aggregate_func_2504(Local_21.f_8, 0, 1);
				aggregate_func_4583(Local_21.f_8, 0, 1, 1);
			}
			if ((!func_204(uParam0) && !func_205(uParam0)) && VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_3))
			{
				aggregate_func_4935(&(Local_21.f_11), 2);
			}
			break;
		case 2:
			if (!aggregate_func_4637(Local_21.f_8, 0))
			{
				aggregate_func_2504(Local_21.f_8, 1, 1);
				aggregate_func_4583(Local_21.f_8, 1, 1, 1);
			}
			if (func_204(uParam0))
			{
				aggregate_func_4935(&(Local_21.f_11), 1);
			}
			if (func_205(uParam0))
			{
				aggregate_func_4935(&(Local_21.f_11), 1);
			}
			if (!VEHICLE::IS_VEHICLE_STOPPED(uParam0->f_3))
			{
				aggregate_func_4935(&(Local_21.f_11), 1);
			}
			if (aggregate_func_455(Local_21.f_8, 1))
			{
				aggregate_func_4935(&(Local_21.f_11), 3);
			}
			break;
		case 3:
			if (aggregate_func_2875(Local_21.f_8))
			{
				aggregate_func_2878(&(Local_21.f_8), 1, 1);
			}
			return true;
	}
	return false;
}

bool func_149(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate_func_4935(&(Local_21.f_12), 3);
	}
	switch (Local_21.f_12)
	{
		case 0:
			if (!aggregate_func_2875(Local_21.f_9))
			{
				Local_21.f_9 = aggregate_func_1523("PLAYER_SURRENDER", joaat("INPUT_SURRENDER"), uParam0->f_3, 1, 0, 0, 0, 4, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			}
			aggregate_func_2504(Local_21.f_9, 0, 1);
			aggregate_func_4583(Local_21.f_9, 0, 1, 1);
			if (aggregate_func_2875(Local_21.f_9))
			{
				aggregate_func_4935(&(Local_21.f_12), 2);
			}
			break;
		case 2:
			if (!aggregate_func_4637(Local_21.f_9, 0))
			{
				aggregate_func_2504(Local_21.f_9, 1, 1);
				aggregate_func_4583(Local_21.f_9, 1, 1, 1);
			}
			if (aggregate_func_455(Local_21.f_9, 1))
			{
				aggregate_func_4935(&(Local_21.f_12), 3);
			}
			break;
		case 3:
			if (aggregate_func_2875(Local_21.f_9))
			{
				aggregate_func_2878(&(Local_21.f_9), 1, 1);
			}
			return true;
	}
	return false;
}

bool func_153(var uParam0)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;

	iVar11 = 1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar12 = (-1 + iVar0);
		iVar13 = iVar12;
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, iVar13))
		{
			iVar1[iVar0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, iVar13);
			if (!ENTITY::IS_ENTITY_DEAD(&(iVar1[iVar0])))
			{
				iVar11 = 0;
			}
		}
		iVar0++;
	}
	return iVar11;
}

void func_154()
{
	if (aggregate_func_2875(Local_21.f_9))
	{
		aggregate_func_2878(&(Local_21.f_9), 1, 1);
	}
	if (aggregate_func_2875(Local_21.f_8))
	{
		aggregate_func_2878(&(Local_21.f_8), 1, 1);
	}
}

bool func_204(var uParam0)
{
	float fVar0;
	float fVar1;

	Local_21.f_15 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	fVar0 = aggregate_func_918(uParam0->f_3, Local_21.f_15, 1, 1);
	fVar1 = 20f;
	if (ENTITY::IS_ENTITY_DEAD(Local_21.f_15))
	{
		return false;
	}
	if (fVar0 >= fVar1)
	{
		return false;
	}
	return true;
}

bool func_205(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false) };
	vVar3 = { 20f, 20f, 20f };
	iVar6 = 1;
	iVar7 = VOLUME::_0xB3FB80A32BAE3065(vVar0, 0f, 0f, 0f, vVar3);
	iVar8 = ITEMSET::CREATE_ITEMSET(false);
	iVar10 = ENTITY::_0x84CCF9A12942C83D(iVar7, iVar8, iVar6, 1, 0, 0);
	iVar11 = 0;
	iVar11 = 0;
	while (iVar11 <= (iVar10 - 1))
	{
		iVar9 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar11, iVar8));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar9) && !ENTITY::IS_ENTITY_DEAD(iVar9)) && ENTITY::IS_ENTITY_A_PED(iVar9))
		{
			iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar9);
			if (PED::IS_PED_A_PLAYER(iVar12))
			{
				iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
				if (_NAMESPACE26::_0x3F59FE6F37869576(iVar13, uParam0->f_2))
				{
					VOLUME::_0x43F867EF5C463A53(iVar7);
					ITEMSET::DESTROY_ITEMSET(iVar8);
					return true;
				}
			}
		}
		iVar11++;
	}
	VOLUME::_0x43F867EF5C463A53(iVar7);
	ITEMSET::DESTROY_ITEMSET(iVar8);
	return false;
}

