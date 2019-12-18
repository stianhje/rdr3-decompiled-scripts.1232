#region Local Var
	struct<14> Local_0 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_14 = 0;
	var uLocal_15 = 7;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = -1;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	struct<5> ScriptParam_0 = { 0, -1, -1, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_30 = 1f;
	fLocal_31 = 1f;
	func_1(ScriptParam_0.f_4);
	func_2(&ScriptParam_0);
	while (!func_3() && func_4())
	{
		BUILTIN::WAIT(0);
	}
	aggregate_func_4238();
	aggregate_func_2819();
}

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_14, 1, 39);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&uLocal_14), 1, "m_hostData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_2(var uParam0)
{
	int iVar0;

	Local_0.f_2 = { uParam0->f_1 };
	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		aggregate_func_4712(2);
		return;
	}
	Local_0.f_1 = *uParam0;
	Local_0.f_4 = uParam0->f_4;
	Local_0.f_11 = uParam0->f_6;
	Local_0.f_13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_3);
	Local_0.f_12 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	aggregate_func_4293(&(Local_0.f_5), 0);
	aggregate_func_4293(&(Local_0.f_8), 0);
}

bool func_3()
{
	if (aggregate_func_523(0, 0))
	{
		return true;
	}
	if (aggregate_func_2889(Local_0.f_2, 1, 0))
	{
		return true;
	}
	if ((Local_0.f_4 == -1 || Local_0.f_11 == -1) || &Global_1212887->f_356[Local_0.f_4 /*2*/] != Local_0.f_11)
	{
		return true;
	}
	if (Local_0.f_12 != 0 && _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()) != Local_0.f_12)
	{
		return true;
	}
	return false;
}

bool func_4()
{
	switch (Local_0)
	{
		case 0:
			func_15();
			break;
		case 1:
			func_16();
			break;
		case 2:
			return false;
	}
	return true;
}

void func_15()
{
	if (func_26())
	{
		aggregate_func_4712(1);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_0.f_13))
	{
		aggregate_func_4712(2);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_0.f_13) && !PED::GET_PED_CONFIG_FLAG(Local_0.f_13, 11, false))
	{
		if (PED::_0x3AA24CCC0D451379(Local_0.f_13) && PED::_0x3D9F958834AB9C30(Local_0.f_13) == Global_35)
		{
			aggregate_func_4712(1);
			return;
		}
		else
		{
			aggregate_func_4712(2);
			return;
		}
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_27();
	}
}

void func_16()
{
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (Local_0.f_1)
		{
			aggregate_func_1617(1951290581, 1, 1);
		}
		else
		{
			aggregate_func_1617(385589027, 1, 1);
		}
	}
	aggregate_func_4712(2);
}

bool func_26()
{
	int iVar0;
	struct<25> Var1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				if (!SCRIPTS::GET_EVENT_DATA(1, iVar0, &Var1, 31))
				{
					return false;
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Var1) || !ENTITY::DOES_ENTITY_EXIST(Var1.f_1))
				{
					return false;
				}
				if (!ENTITY::IS_ENTITY_A_PED(Var1.f_1))
				{
					return false;
				}
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1) != Local_0.f_13)
				{
					return false;
				}
				if (!Var1.f_3 && !ENTITY::IS_ENTITY_DEAD(Var1))
				{
					return false;
				}
				if (Var1.f_24)
				{
					return false;
				}
				if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1)))
				{
					return false;
				}
				return _NAMESPACE26::_0x901E0DC25080C8B9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1))) == _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		}
		iVar0++;
	}
	return false;
}

void func_27()
{
	if ((!aggregate_func_4240(uLocal_14, 1) && aggregate_func_4628(&(Local_0.f_5), 6000)) && func_35())
	{
		aggregate_func_4975(Local_0.f_13, "HIDEOUT_LEADER_FLEE", joaat("speech_params_standard"), 0, 1, 0, 0, 1);
		aggregate_func_4247(&uLocal_14, 1);
	}
	if ((!aggregate_func_4240(uLocal_14, 2) && aggregate_func_4628(&(Local_0.f_8), 1000)) && PED::_0x5203038FF8BAE577(Local_0.f_13, 26, 750))
	{
		aggregate_func_4975(Local_0.f_13, "HIDEOUT_LEADER_TURN", joaat("speech_params_standard"), 0, 1, 0, 0, 1);
		aggregate_func_4247(&uLocal_14, 2);
	}
}

bool func_35()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && _NAMESPACE26::_0x901E0DC25080C8B9(iVar1) == Local_0.f_12)
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::GET_ENTITY_SPEED(iVar2) > 0f) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), ENTITY::GET_ENTITY_COORDS(Local_0.f_13, true, false)) < 8f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

