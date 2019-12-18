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
#endregion

void __EntryFunction__()
{
	aggregate_func_1839();
	while (!aggregate_func_523(0, 0))
	{
		aggregate_func_2960();
		BUILTIN::WAIT(0);
	}
	func_4();
	aggregate_func_2819();
}

void func_4()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((Global_1182734->f_1[iVar0 /*3*/])->f_2 != 0)
		{
			CREW::NETWORK_CLAN_RELEASE_EMBLEM(&(Global_1182734->f_1[iVar0 /*3*/]));
		}
		iVar0++;
	}
}

void func_9()
{
	aggregate_func_7085(Global_1182187);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1182187, 2, 5);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1182187), 2, "g_mpNetCrewHostData");
	aggregate_func_7546(Global_1182189);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1182189, 545, 6);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1182189)[0 /*17*/]), 545, "g_mpNetCrewPlayerData");
	aggregate_func_9057(Global_1182734);
}

void func_12()
{
	switch (&Global_1182734)
	{
		case 0:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			{
				return;
			}
			if (aggregate_func_8322(2))
			{
				((*Global_1182189)[PLAYER::PLAYER_ID() /*17*/])->f_15 = 1;
			}
			func_22();
			aggregate_func_7852();
			Global_1182734 = 1;
			break;
		case 1:
			func_24();
			break;
	}
}

void func_20()
{
	int iVar0;

	if (Global_1182734->f_108 == 0)
	{
		Global_1182187 = 0;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && Global_1182189[iVar0 /*17*/] != 0)
			{
				Global_1182187 = &Global_1182187 + 1;
			}
			iVar0++;
		}
	}
	else if (Global_1182734->f_108 < 100)
	{
		Global_1182734->f_108++;
	}
	else
	{
		Global_1182734->f_108 = 0;
	}
}

void func_22()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (&((*Global_1182189)[iVar0 /*17*/])->f_9[iVar1] != &Global_1181794->f_35[iVar1 /*22*/])
		{
			((*Global_1182189)[iVar0 /*17*/])->f_9[iVar1] = &Global_1181794->f_35[iVar1 /*22*/];
		}
		iVar1++;
	}
}

void func_24()
{
	if (!aggregate_func_2700())
	{
		return;
	}
	func_29();
	func_30();
	if (func_31())
	{
		func_22();
		func_32();
	}
}

void func_27(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam0)))
	{
		Global_1181794->f_168[iParam0 /*7*/] = 0;
		return;
	}
	Global_1181794->f_168[iParam0 /*7*/] = Global_1182189[iParam0 /*17*/];
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		(Global_1181794->f_168[iParam0 /*7*/])->f_1[iVar0] = &((*Global_1182189)[iParam0 /*17*/])->f_9[iVar0];
		iVar0++;
	}
}

void func_29()
{
	struct<2> Var0;
	int iVar22;

	if (Global_1181794->f_146 != Global_1182189[PLAYER::PLAYER_ID() /*17*/])
	{
		if (Global_1181794->f_146 == 0)
		{
			(*Global_1182189)[PLAYER::PLAYER_ID() /*17*/] = 0;
			return;
		}
		iVar22 = 0;
		while (iVar22 <= (CREW::NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() - 1))
		{
			if (CREW::NETWORK_CLAN_GET_MEMBERSHIP_DESC(&Var0, iVar22) && Var0 == Global_1181794->f_146)
			{
				((*Global_1182189)[PLAYER::PLAYER_ID() /*17*/])->f_1 = { Var0.f_1 };
				(*Global_1182189)[PLAYER::PLAYER_ID() /*17*/] = Global_1181794->f_146;
			}
			else
			{
				iVar22++;
			}
		}
	}
}

void func_30()
{
	bool bVar0;

	bVar0 = (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Global_1182734->f_109)) && Global_1182189[Global_1182734->f_109 /*17*/] != 0);
	func_33(Global_1182734->f_109, bVar0);
	func_27(Global_1182734->f_109);
	Global_1182734->f_109++;
	if (Global_1182734->f_109 >= 32)
	{
		Global_1182734->f_109 = 0;
	}
}

bool func_31()
{
	if (Global_1182734->f_107 == 0)
	{
		Global_1182734->f_107 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return true;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(Global_1182734->f_107, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 2000)
	{
		Global_1182734->f_107 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return true;
	}
	return false;
}

void func_32()
{
	int iVar0;

	if (Global_1182189[PLAYER::PLAYER_ID() /*17*/] == 0)
	{
		((*Global_1182189)[PLAYER::PLAYER_ID() /*17*/])->f_16 = 0;
	}
	else
	{
		((*Global_1182189)[PLAYER::PLAYER_ID() /*17*/])->f_16 = 0;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1182189[iVar0 /*17*/] == Global_1182189[PLAYER::PLAYER_ID() /*17*/])
			{
				((*Global_1182189)[PLAYER::PLAYER_ID() /*17*/])->f_16++;
			}
			iVar0++;
		}
	}
}

void func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((Global_1182734->f_1[iParam0 /*3*/])->f_1 == 0)
		{
			if ((Global_1182734->f_1[iParam0 /*3*/])->f_2 == 0)
			{
				func_34(iParam0, 1);
			}
			else if (&Global_1182734->f_1[iParam0 /*3*/] != Global_1182189[iParam0 /*17*/])
			{
				func_34(iParam0, 3);
			}
		}
	}
	else if ((Global_1182734->f_1[iParam0 /*3*/])->f_1 == 0 && ((Global_1182734->f_1[iParam0 /*3*/])->f_2 != 0 || &Global_1182734->f_1[iParam0 /*3*/] != 0))
	{
		func_34(iParam0, 3);
	}
	switch ((Global_1182734->f_1[iParam0 /*3*/])->f_1)
	{
		case 0:
			break;
		case 1:
			Global_1182734->f_1[iParam0 /*3*/] = Global_1182189[iParam0 /*17*/];
			if (CREW::NETWORK_CLAN_REQUEST_EMBLEM(&(Global_1182734->f_1[iParam0 /*3*/])))
			{
				func_34(iParam0, 2);
			}
			else
			{
				func_34(iParam0, 0);
			}
			break;
		case 2:
			if (func_35(iParam0))
			{
				func_34(iParam0, 0);
			}
			break;
		case 3:
			CREW::NETWORK_CLAN_RELEASE_EMBLEM(&(Global_1182734->f_1[iParam0 /*3*/]));
			(Global_1182734->f_1[iParam0 /*3*/])->f_2 = 0;
			Global_1182734->f_1[iParam0 /*3*/] = 0;
			func_34(iParam0, 0);
			break;
	}
}

void func_34(int iParam0, int iParam1)
{
	(Global_1182734->f_1[iParam0 /*3*/])->f_1 = iParam1;
}

bool func_35(int iParam0)
{
	struct<8> Var0;
	char* sVar8;

	if (CREW::NETWORK_CLAN_IS_EMBLEM_READY(&(Global_1182734->f_1[iParam0 /*3*/]), &Var0))
	{
		sVar8 = aggregate_func_1966(Var0);
		(Global_1182734->f_1[iParam0 /*3*/])->f_2 = MISC::GET_HASH_KEY(sVar8);
		return true;
	}
	return false;
}

