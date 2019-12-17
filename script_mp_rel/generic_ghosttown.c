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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	func_1(iScriptParam_0);
	uLocal_18 = uLocal_18;
	while (aggregate.aberdeenpigfarm.func_4())
	{
		func_3(&uLocal_20, &iLocal_21, 3018.27f, 558.1332f, 44.5092f, 2136683606);
		BUILTIN::WAIT(0);
		uLocal_19 = uLocal_19;
	}
	func_4(iScriptParam_0);
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
	}
	else
	{
		aggregate.aberdeenpigfarm.func_46();
	}
}

void func_1(int iParam0)
{
	iParam0 = iParam0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_4(iParam0);
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
	}
}

void func_3(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!*uParam0)
	{
		if (BUILTIN::VDIST(Global_36, vParam2) > 100f)
		{
			return;
		}
		if (!ITEMSET::IS_ITEMSET_VALID(*iParam1))
		{
			*iParam1 = ITEMSET::CREATE_ITEMSET(true);
		}
		ITEMSET::_0x20A4BF0E09BEE146(*iParam1);
		iVar0 = ENTITY::_0x59B57C4B06531E1E(vParam2, 1f, *iParam1, 3);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			iVar2 = MISC::_0xEE04C0AFD4EFAF0E(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *iParam1));
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar2) == iParam5)
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
					*uParam0 = 1;
				}
			}
			iVar1++;
		}
	}
}

void func_4(int iParam0)
{
	if (STATS::CHAL_IS_GOAL_ACTIVE(-663946200 /* GXTEntry: "Travel" */, 1055032020 /* GXTEntry: "Visited every town" */))
	{
		switch (iParam0)
		{
			case 45:
				STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(aggregate.aberdeenpigfarm.func_73(iParam0, 0), 1);
				break;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_21))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_21);
	}
	aggregate.aberdeenpigfarm.func_74(iParam0, 4);
	aggregate.aberdeenpigfarm.func_74(iParam0, 8);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		aggregate.aberdeenpigfarm.func_46();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

