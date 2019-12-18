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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<26> Local_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == aggregate_func_1747

void func_6()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Local_18))
	{
		iLocal_13 = 0;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_18.f_18)) && !SCRIPTS::HAS_SCRIPT_LOADED(&(Local_18.f_18)))
		{
			if (aggregate_func_1569())
			{
				aggregate_func_564(0);
			}
		}
		return;
	}
	switch (aggregate_func_5076())
	{
		case 0:
			if (aggregate_func_9351())
			{
				Local_18.f_7 = TASK::_0x2D0571BB55879DA2(Local_18);
				if (Local_18.f_7 == -630818830)
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER_CHAIN_GANG", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster_chain_gang", 32);
					Local_18.f_8.f_2 = 0;
				}
				else if (Local_18.f_7 == -1325774943)
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster_player", 32);
					Local_18.f_8.f_2 = 0;
				}
				else
				{
					StringCopy(&(Local_18.f_1), "WANTED_BOUNTY_POSTER", 32);
					StringCopy(&(Local_18.f_18), "doc_bounty_poster", 32);
					Local_18.f_8.f_2 = 0;
				}
				Local_18.f_6 = TASK::_0xDF7993356F52359A(Local_18, 0);
				Local_18.f_5 = TASK::_0x295514F198EFD0CA(Local_18.f_6, &(Local_18.f_1));
				Local_18.f_8.f_1 = Local_18.f_6;
				Local_18.f_8 = Local_18.f_5;
				Local_18.f_8.f_3 = 1;
				Local_18.f_22 = 1024;
				aggregate_func_7241();
			}
			aggregate_func_9352(1);
			break;
		case 1:
			if (aggregate_func_9351())
			{
				SCRIPTS::REQUEST_SCRIPT(&(Local_18.f_18));
				aggregate_func_564(1);
				aggregate_func_7241();
			}
			aggregate_func_9352(2);
			break;
		case 2:
			if (aggregate_func_9351())
			{
				aggregate_func_7241();
			}
			if (SCRIPTS::HAS_SCRIPT_LOADED(&(Local_18.f_18)) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Local_18, 0))
			{
				Local_18.f_23 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Local_18.f_18), &(Local_18.f_8), 10, Local_18.f_22);
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Local_18.f_18));
				aggregate_func_9352(3);
			}
			break;
		case 3:
			if (aggregate_func_9351())
			{
				aggregate_func_7241();
			}
			if ((!PED::IS_PED_USING_ANY_SCENARIO(Local_18) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(493105444) == 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2124539575) == 0)
			{
				iLocal_13 = 0;
			}
			break;
	}
}

void func_19(int iParam0)
{
	if ((Local_18.f_25 >= 3 && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(493105444) == 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(2124539575) == 0)
	{
		iLocal_13 = 0;
	}
}

void func_21()
{
	Local_18.f_24 = 1;
}

