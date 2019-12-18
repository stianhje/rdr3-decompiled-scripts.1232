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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	struct<21> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_1439

bool func_22(var uParam0, int* iParam1)
{
	return true;
}

void func_79(var uParam0)
{
	if (aggregate_func_4260(uParam0))
	{
		aggregate_func_4322(70, 1);
	}
}

void func_98(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!aggregate_func_4260(uParam0))
	{
		aggregate_func_2695(uParam0);
		return;
	}
	iVar0 = AITRANSPORT::_0xFFEC4B0A1A3ED515(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			aggregate_func_2695(uParam0);
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (aggregate_func_8993(uParam0->f_2))
		{
			MAP::_0x662D364ABF16DE2F(uParam0->f_1, -272772079);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -272772079);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -1380599892);
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, 453356795);
			return;
		}
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -1380599892);
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, 453356795);
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, 453356795);
			return;
		}
		if (aggregate_func_401(iVar1, 0))
		{
			MAP::_0xB059D7BD3D78C16F(uParam0->f_1, -1380599892);
			MAP::_0x662D364ABF16DE2F(uParam0->f_1, 453356795);
		}
		return;
	}
	if (MAP::_0x9FA00E2FC134A9D0(uParam0->f_3))
	{
		return;
	}
	uParam0->f_1 = MAP::_0x23F74C2FDA6E7C61(768962966, uParam0->f_3);
	iVar2 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
	if (STREAMING::IS_MODEL_VALID(iVar2))
	{
		bVar3 = aggregate_func_3842(iVar2);
		if (aggregate_func_2823(bVar3, 0))
		{
			MAP::_0x9CB1A1623062F402(uParam0->f_1, MISC::_CREATE_VAR_STRING(0, aggregate_func_4462(bVar3)));
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

