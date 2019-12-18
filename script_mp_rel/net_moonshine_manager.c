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
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	aggregate_func_2604();
	if (!aggregate_func_7974())
	{
		func_3();
	}
	while (!aggregate_func_7974())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	while (!func_5())
	{
		BUILTIN::WAIT(0);
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	aggregate_func_5016(Global_1274950);
	aggregate_func_7758(Global_1275475);
	aggregate_func_9317(Global_1275117);
	aggregate_func_2819();
}

void func_3()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		aggregate_func_1451(iVar0, 1);
		iVar0++;
	}
}

void func_4()
{
	if (!NETWORK::NETWORK_IS_SESSION_ACTIVE() || !aggregate_func_6548())
	{
		return;
	}
	switch (&Global_1275117)
	{
		case 0:
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
			{
				aggregate_func_6994(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
			}
			else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
			{
				aggregate_func_6994(PLAYER::PLAYER_ID());
			}
			else
			{
				return;
			}
			func_19();
			aggregate_func_6994(1);
			Global_1275117 = 1;
			break;
		case 1:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(aggregate_func_5163()))
			{
				aggregate_func_6994(PLAYER::PLAYER_ID());
			}
			func_22();
			func_23();
			func_24();
			aggregate_func_6686();
			func_26();
			func_27();
			func_28();
			func_29();
			func_30();
			func_31();
			func_32();
			break;
	}
}

bool func_5()
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_33(iVar0, Global_1275117->f_201.f_1[iVar0 /*4*/]))
		{
			bVar1 = true;
		}
		else
		{
			aggregate_func_9318(iVar0, Global_1275117->f_201.f_1[iVar0 /*4*/], 0);
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_13()
{
	bool bVar0;

	bVar0 = false;
	aggregate_func_5016(Global_1274950);
	aggregate_func_7758(Global_1275475);
	aggregate_func_9317(Global_1275117);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1274950, 1, 36);
	if (!aggregate_func_6717(NETWORK::_0xBA24095EA96DFE17(Global_1274950), 1, "g_mpMoonshineHostData"))
	{
		bVar0 = true;
	}
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1275475, 2753, 37);
	if (!aggregate_func_6717(NETWORK::_0x690806BC83BC8CA2((*Global_1275475)[0 /*86*/]), 2753, "g_mpMoonshinePlayerData"))
	{
		bVar0 = true;
	}
	aggregate_func_7669();
	return !bVar0;
}

void func_19()
{
	int iVar0;

	iVar0 = aggregate_func_9319();
	aggregate_func_4105(iVar0);
	if (aggregate_func_1774(6))
	{
		Global_1275329->f_44.f_1 = 1;
	}
	else
	{
		Global_1275329->f_44.f_1 = 0;
	}
	func_47(func_46());
}

void func_22()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!aggregate_func_5015(PLAYER::PLAYER_ID(), 1))
	{
		((*Global_1275475)[iVar0 /*86*/])->f_1 = -1;
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1275117->f_200))
	{
		((*Global_1275475)[iVar0 /*86*/])->f_1 = -1;
		return;
	}
	iVar1 = ((*Global_1275475)[Global_1275117->f_200 /*86*/])->f_5.f_12;
	if (((*Global_1275475)[iVar0 /*86*/])->f_1 == iVar1)
	{
		return;
	}
	((*Global_1275475)[iVar0 /*86*/])->f_1 = iVar1;
}

void func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if ((!aggregate_func_6548() || !NETWORK::NETWORK_IS_SESSION_ACTIVE()) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
	{
		iVar2 = iVar1;
		if (iVar2 != Global_1275475[&Global_1273882 /*86*/])
		{
			(*Global_1275475)[&Global_1273882 /*86*/] = iVar2;
		}
	}
	else if (_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		iVar3 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
			iVar4 = aggregate_func_3587(iVar3, 1);
			if (Global_1275475[&Global_1273882 /*86*/] != iVar4)
			{
				(*Global_1275475)[&Global_1273882 /*86*/] = iVar4;
			}
		}
	}
	else if (_NAMESPACE26::_0x0F99F6436528A089(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0)))
	{
		iVar5 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(iVar0));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
		{
			iVar6 = aggregate_func_3587(iVar5, 1);
			if (Global_1275475[&Global_1273882 /*86*/] != iVar6)
			{
				(*Global_1275475)[&Global_1273882 /*86*/] = iVar6;
			}
		}
	}
	func_50();
}

void func_24()
{
	if (!aggregate_func_7100(4096))
	{
		if (aggregate_func_3710(PLAYER::PLAYER_ID(), 0, 1) == 0)
		{
			if (func_53())
			{
				func_47(6);
				aggregate_func_6502(4096);
			}
		}
	}
}

void func_26()
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (Global_1275117->f_1 == 4)
	{
		func_60();
	}
	else if (Global_1275117->f_1 == 3)
	{
		func_61();
	}
	else
	{
		iVar1 = aggregate_func_3450(Global_1275117->f_200, 1);
		if (iVar1 == -1)
		{
			fVar0 = 1E+08f;
		}
		else
		{
			fVar0 = aggregate_func_8034(iVar1);
		}
		if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_64(fVar0);
		}
		else
		{
			iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
			func_65(iVar2, fVar0);
		}
	}
}

void func_27()
{
	if (aggregate_func_5015(PLAYER::PLAYER_ID(), 1))
	{
		if ((aggregate_func_7561(1) == 0 && !aggregate_func_6688()) && !aggregate_func_4258())
		{
			if (aggregate_func_7100(262144))
			{
				aggregate_func_6502(262144);
			}
			aggregate_func_6502(8192);
			func_69(1);
		}
	}
	else
	{
		switch (aggregate_func_7561(1))
		{
			case 3:
				if (!aggregate_func_7100(8192))
				{
					aggregate_func_6502(8192);
					aggregate_func_6502(262144);
				}
				break;
			case 0:
				if (aggregate_func_7100(262144))
				{
					if (!func_70())
					{
						func_47(6);
						aggregate_func_6502(262144);
					}
				}
				break;
		}
	}
}

void func_28()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_72(iVar0, Global_1275117->f_201.f_1[iVar0 /*4*/], aggregate_func_3900(iVar0));
		iVar0++;
	}
}

void func_29()
{
	if (func_73() || aggregate_func_5015(PLAYER::PLAYER_ID(), 1))
	{
		aggregate_func_3347(1);
		func_75();
	}
}

void func_30()
{
	if (aggregate_func_5015(&(Global_1273882->f_154[&Global_1273882]), 1))
	{
		NETWORK::_0x236905C700FDB54D();
	}
}

void func_31()
{
	int iVar0;

	func_76();
	func_77();
	func_78();
	func_79();
	func_80();
	func_81();
	func_82();
	iVar0 = func_83(&(Global_1273882->f_154[&Global_1273882]));
	switch (iVar0)
	{
		case 0:
			func_84();
			func_85();
			func_86();
			func_87();
			if (!func_88())
			{
				func_89(1);
			}
			else if (func_90(1065353216 /* Float: 1f */))
			{
				func_89(7);
			}
			else if (func_91())
			{
				func_92();
				func_89(4);
			}
			else
			{
				func_89(2);
			}
			break;
		case 1:
			if (func_88())
			{
				func_89(2);
			}
			break;
		case 2:
			if (!aggregate_func_5131(&Global_1273882, 256))
			{
				aggregate_func_8360(256);
			}
			if (!func_95())
			{
				func_92();
				func_89(4);
				return;
			}
			if (func_96())
			{
				func_89(3);
			}
			break;
		case 3:
			if (aggregate_func_5002(&(Global_1274951->f_9)) != 3)
			{
				return;
			}
			if (aggregate_func_4106(Global_1273882->f_10) == 0)
			{
				func_89(2);
				return;
			}
			func_99();
			func_100(Global_1274951->f_9.f_1, 1);
			func_92();
			func_89(4);
			break;
		case 4:
			if (aggregate_func_3724(&(Global_1274951->f_1)) > Global_1274951->f_4)
			{
				if (func_90(1065353216 /* Float: 1f */) || func_102())
				{
					func_89(6);
				}
				else if (aggregate_func_4106(Global_1273882->f_10) == 0)
				{
				}
			}
			break;
		case 6:
			if (aggregate_func_5020(&(Global_1274951->f_9)))
			{
				return;
			}
			if (func_90(1065353216 /* Float: 1f */))
			{
				if (func_104())
				{
					func_89(5);
				}
				else
				{
					aggregate_func_4957(&(Global_1274951->f_1));
					func_89(7);
				}
			}
			else
			{
				aggregate_func_4480(&(Global_1274951->f_1));
				func_89(4);
			}
			break;
		case 5:
			if (aggregate_func_5131(&Global_1273882, 64))
			{
				aggregate_func_4957(&(Global_1274951->f_1));
				func_89(7);
			}
			break;
		case 7:
			if (!aggregate_func_5131(&Global_1273882, 524288))
			{
				aggregate_func_8360(524288);
			}
			if (aggregate_func_5131(&Global_1273882, 4))
			{
				aggregate_func_9320(4);
			}
			if (!aggregate_func_5131(&Global_1273882, 128))
			{
				func_108();
				aggregate_func_8360(128);
			}
			if ((!aggregate_func_5131(&Global_1273882, 1024) && !aggregate_func_5131(&Global_1273882, 2048)) && !aggregate_func_5131(&Global_1273882, 4096))
			{
				func_86();
			}
			if (aggregate_func_5131(&Global_1273882, 8))
			{
				aggregate_func_9320(131072);
				aggregate_func_9320(128);
				aggregate_func_8360(2);
				func_89(8);
			}
			break;
		case 8:
			if (aggregate_func_5131(&Global_1273882, 8))
			{
				aggregate_func_9320(8);
			}
			if (aggregate_func_5131(&Global_1273882, 512))
			{
				func_109();
				func_89(9);
			}
			break;
		case 9:
			if (func_95())
			{
				func_89(2);
			}
			break;
		case 10:
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) && _NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
			{
				if (!func_88())
				{
					func_89(1);
				}
				else if (func_90(1065353216 /* Float: 1f */))
				{
					func_89(7);
				}
				else if (func_91())
				{
					func_92();
					func_89(4);
				}
				else
				{
					func_89(2);
				}
			}
			break;
	}
}

void func_32()
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (((*Global_1275475)[iVar0 /*86*/])->f_1 == -1)
	{
		return;
	}
	POPULATION::_0xF45E46DEECF7DF6E(10208, 0, 0, -1, -1);
}

bool func_33(int iParam0, var uParam1)
{
	if (SCRIPTS::_DOES_THREAD_EXIST(*uParam1))
	{
		if (!SCRIPTS::_0x30BED53646C86D11(*uParam1))
		{
			SCRIPTS::_0x7DE4643157AD646C(*uParam1);
		}
		return false;
	}
	else
	{
		*uParam1 = 0;
		uParam1->f_1 = -1;
	}
	aggregate_func_1451(iParam0, 1);
	return true;
}

void func_35(var uParam0)
{
	struct<86> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_5 = 10;
	Var0.f_5.f_12 = -1;
	Var0.f_5.f_13 = -1;
	Var0.f_19.f_1 = 11;
	Var0.f_41 = 8;
	Var0.f_52 = 8;
	Var0.f_52.f_1.f_1 = -1;
	Var0.f_52.f_1.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	Var0.f_52.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = -1;
	*uParam0 = { Var0 };
}

int func_46()
{
	if (aggregate_func_4349(&(Global_1275329->f_50)))
	{
		switch (aggregate_func_4299(Global_1275329->f_50, 897456793, 1, -1))
		{
			case -1647055373:
				return 0;
			case -660379727:
				return 2;
			case 729277565:
				return 1;
			case -1262899184:
				return 3;
			case -553448238:
				return 4;
			default:
				break;
		}
	}
	return 0;
}

void func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar1 = func_116();
	iVar2 = func_117();
	iVar3 = func_118() + 1;
	iVar4 = func_119();
	if (!func_53())
	{
		iVar3 = 0;
	}
	aggregate_func_1575(3, iVar1, 1);
	aggregate_func_1575(1, iVar2, 1);
	aggregate_func_1575(0, iVar3, 1);
	if (iVar3 > 0)
	{
		aggregate_func_1575(5, 1, 1);
	}
	else
	{
		aggregate_func_1575(5, 0, 1);
	}
	if (iVar2 > 0)
	{
		aggregate_func_1575(4, 0, 1);
	}
	else if (iVar3 > 1)
	{
		aggregate_func_1575(4, 2, 1);
	}
	else
	{
		aggregate_func_1575(4, 1, 1);
	}
	if (iVar3 > 1)
	{
		aggregate_func_1575(2, 1, 1);
	}
	else
	{
		aggregate_func_1575(2, 0, 1);
	}
	if (iParam0 != 6)
	{
		((*Global_1275475)[iVar0 /*86*/])->f_5.f_11 = iParam0;
	}
	if (aggregate_func_8597())
	{
		aggregate_func_1575(6, 1, 1);
	}
	else
	{
		aggregate_func_1575(6, 0, 1);
	}
	aggregate_func_1575(9, iVar4, 1);
	aggregate_func_9321();
}

void func_50()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1275117->f_211 == 0)
	{
		Global_1275117->f_211 = MISC::_GET_SYSTEM_TIME();
		return;
	}
	else if ((MISC::_GET_SYSTEM_TIME() - Global_1275117->f_211) > 500)
	{
		Global_1275117->f_211 = 0;
	}
	else
	{
		return;
	}
	iVar0 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_3;
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && iVar1 != &Global_1273882)
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3) || ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
			else if (((*Global_1275475)[iVar1 /*86*/])->f_3 == iVar0 && !aggregate_func_5015(iVar2, 256))
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar3, 1, 0, iVar0);
			}
			else
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar3, 0, 0, 256);
			}
		}
		iVar1++;
	}
}

bool func_53()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1212196772) || !UNLOCK::_UNLOCK_IS_UNLOCKED(-400403560))
	{
		return false;
	}
	return true;
}

void func_55()
{
	bool bVar0;

	bVar0 = aggregate_func_5015(PLAYER::PLAYER_ID(), 512);
	if (Global_1275329->f_119.f_5)
	{
		if (bVar0)
		{
			aggregate_func_3483(512);
		}
		return;
	}
	if (func_126() || func_127())
	{
		if (bVar0)
		{
			aggregate_func_3483(512);
		}
	}
	else if (!bVar0)
	{
		aggregate_func_3483(512);
	}
}

void func_56()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	char cVar4[128];
	bool bVar20;
	char* sVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	struct<53> Var25;

	if (Global_1275117->f_1 == 3)
	{
		return;
	}
	if (Global_1275117->f_3.f_1 >= 32)
	{
		return;
	}
	if (Global_1275329->f_119.f_5)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1275117->f_3.f_1 - 1))
	{
		if (!aggregate_func_4240((Global_1275117->f_3.f_2[iVar0 /*4*/])->f_3, 8))
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	if (iVar1 < 0 || iVar1 >= 32)
	{
		Global_1275117->f_3.f_1 = 0;
		return;
	}
	iVar3 = &Global_1275117->f_3.f_2[iVar1 /*4*/];
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	if (aggregate_func_4497(255))
	{
		return;
	}
	StringCopy(&cVar4, "", 128);
	switch (aggregate_func_347(&cVar4, iVar3, 1))
	{
		case 1:
			(Global_1275117->f_3.f_2[iVar1 /*4*/])->f_2 = 0;
			bVar20 = true;
			break;
		case 2:
			if (!aggregate_func_4240((Global_1275117->f_3.f_2[iVar1 /*4*/])->f_3, 1))
			{
				aggregate_func_3715(iVar3);
				(Global_1275117->f_3.f_2[iVar1 /*4*/])->f_2 = MISC::GET_GAME_TIMER();
				aggregate_func_4241(&((Global_1275117->f_3.f_2[iVar1 /*4*/])->f_3), 1);
			}
			return;
		case 3:
			if ((Global_1275117->f_3.f_2[iVar1 /*4*/])->f_2 == 0)
			{
				(Global_1275117->f_3.f_2[iVar1 /*4*/])->f_2 = MISC::GET_GAME_TIMER();
				return;
			}
			else if ((MISC::GET_GAME_TIMER() - (Global_1275117->f_3.f_2[iVar1 /*4*/])->f_2) > 3000)
			{
				aggregate_func_4247(&((Global_1275117->f_3.f_2[iVar1 /*4*/])->f_3), 2);
				bVar20 = true;
			}
			else
			{
				return;
			}
			break;
		case 4:
			bVar20 = true;
			(Global_1275117->f_3.f_2[iVar1 /*4*/])->f_2 = 0;
			break;
	}
	sVar21 = aggregate_func_1976(cVar4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar21))
	{
		iVar22 = MISC::GET_HASH_KEY(sVar21);
		iVar23 = iVar22;
		iVar24 = 0;
	}
	else
	{
		iVar22 = 1700592256;
		iVar23 = 1434360011;
		iVar24 = 1;
	}
	if (bVar20)
	{
		Var25 = 1;
		Var25.f_1 = 1;
		Var25.f_2 = joaat("COLOR_WHITE");
		Var25.f_4 = -1;
		Var25.f_5 = -1;
		Var25.f_6 = -1;
		Var25.f_10 = -1;
		Var25.f_11 = -1;
		Var25.f_12 = -1;
		Var25.f_18 = joaat("COLOR_WHITE");
		Var25.f_19 = joaat("COLOR_WHITE");
		Var25.f_23 = 300;
		Var25.f_31.f_8 = joaat("COLOR_WHITE");
		Var25.f_31.f_11 = joaat("COLOR_WHITE");
		Var25.f_31.f_12 = 8000;
		Var25.f_31.f_13 = 1511356879;
		Var25.f_31.f_15 = 1433015236;
		Var25.f_31.f_21 = 1;
		Var25.f_24 = 9;
		Var25.f_25 = iVar3;
		Var25.f_16 = aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iVar3), aggregate_func_752(iVar3, 1, -1, 0));
		Var25.f_17 = MISC::_CREATE_VAR_STRING(2, "MS_INVITE_MAIN");
		Var25.f_20 = iVar22;
		Var25.f_21 = iVar23;
		Var25.f_23 = 120;
		Var25.f_30 = NETWORK::_0x9C725D149622BFDE(0);
		Var25.f_29 = "IB_GAMERCARD";
		Var25.f_28 = 22;
		Var25.f_31.f_2 = aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iVar3), aggregate_func_752(iVar3, 1, -1, 0));
		Var25.f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "MS_INVITE_MAIN");
		Var25.f_31.f_4 = MISC::_CREATE_VAR_STRING(2, "NM_TI_VIEW_NOTIFICATION");
		Var25.f_31.f_6 = iVar22;
		Var25.f_31.f_7 = iVar23;
		Var25.f_31.f_17 = "HUD_Toast_Soundset";
		Var25.f_31.f_18 = "Toast_On";
		Var25.f_22 = 0;
		Var25.f_31.f_21 = iVar24;
		aggregate_func_4247(&((Global_1275117->f_3.f_2[iVar1 /*4*/])->f_3), 8);
		if (!func_137(aggregate_func_202(Var25), &(Global_1275117->f_3.f_2[iVar1 /*4*/])))
		{
			return;
		}
	}
}

void func_57()
{
	if (Global_1275117->f_3.f_1 > 0)
	{
		if (aggregate_func_6688() || aggregate_func_4258())
		{
			aggregate_func_8595();
		}
	}
}

void func_58()
{
	struct<4> Var0;
	int iVar4;

	if (Global_1275117->f_3 == 0)
	{
		Global_1275117->f_3 = MISC::GET_GAME_TIMER();
		return;
	}
	else if ((MISC::GET_GAME_TIMER() - Global_1275117->f_3) < 3000)
	{
		return;
	}
	Global_1275117->f_3 = 0;
	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID((Global_1275117->f_3.f_2[iVar4 /*4*/])->f_1) && aggregate_func_4240((Global_1275117->f_3.f_2[iVar4 /*4*/])->f_3, 4))
		{
			*(Global_1275117->f_3.f_2[iVar4 /*4*/]) = { Var0 };
			Global_1275117->f_3.f_1 = (Global_1275117->f_3.f_1 - 1);
		}
		iVar4++;
	}
}

void func_59()
{
	struct<2> Var0;
	int iVar2;

	if (Global_1275117->f_3.f_131 == 0)
	{
		Global_1275117->f_3.f_131 = MISC::GET_GAME_TIMER();
		return;
	}
	else if ((MISC::GET_GAME_TIMER() - Global_1275117->f_3.f_131) < 1000)
	{
		return;
	}
	Global_1275117->f_3.f_131 = 0;
	Var0 = 255;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if (((&Global_1275117->f_3.f_132[iVar2 /*2*/] != 255 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275117->f_3.f_132[iVar2 /*2*/]))) || ((Global_1275117->f_3.f_132[iVar2 /*2*/])->f_1 != 0 && (MISC::_GET_SYSTEM_TIME() - (Global_1275117->f_3.f_132[iVar2 /*2*/])->f_1) >= 120000)) || func_139(iVar2))
		{
			*(Global_1275117->f_3.f_132[iVar2 /*2*/]) = { Var0 };
		}
		iVar2++;
	}
}

void func_60()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = aggregate_func_5163();
	iVar2 = aggregate_func_3450(iVar1, 1);
	if (aggregate_func_7561(iVar0) != 3)
	{
		aggregate_func_9155(iVar2);
		func_69(iVar0);
		aggregate_func_3483(32);
	}
	else if (!aggregate_func_5015(PLAYER::PLAYER_ID(), 32))
	{
		aggregate_func_1451(0, 0);
	}
}

void func_61()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = aggregate_func_5163();
	iVar2 = aggregate_func_3450(iVar1, 1);
	if (aggregate_func_7561(iVar0) != 3)
	{
		aggregate_func_9155(iVar2);
		func_69(iVar0);
	}
	else if (aggregate_func_7100(8))
	{
		aggregate_func_1451(0, 0);
		aggregate_func_6502(8);
	}
}

void func_64(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	if ((Global_1275329->f_54 != -1 && aggregate_func_3450(PLAYER::PLAYER_ID(), 1) == Global_1275329->f_54) || aggregate_func_7100(128))
	{
		if (aggregate_func_7561(iVar0) != 3)
		{
			if (((fParam0 <= 80f && !aggregate_func_6688()) && !aggregate_func_4258()) || aggregate_func_7100(128))
			{
				func_69(0);
				aggregate_func_6994(1);
			}
		}
		else if (aggregate_func_8034(Global_1275329->f_54) > 100f && !aggregate_func_7100(128))
		{
			aggregate_func_1451(0, 0);
		}
	}
	else if (aggregate_func_7561(iVar0) == 3 && !aggregate_func_5015(PLAYER::PLAYER_ID(), 1))
	{
		aggregate_func_1451(0, 0);
	}
}

void func_65(int iParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	if (!aggregate_func_5015(PLAYER::PLAYER_ID(), 8))
	{
		if (aggregate_func_7561(iVar0) != 3)
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
			{
				if (aggregate_func_5015(PLAYER::PLAYER_ID(), 4) && aggregate_func_5015(iParam0, 2))
				{
					if (aggregate_func_3450(aggregate_func_5163(), 1) == -1)
					{
						return;
					}
					aggregate_func_6994(iParam0);
					func_69(0);
					aggregate_func_6994(2);
					aggregate_func_9155(((*Global_1275475)[iParam0 /*86*/])->f_5.f_12);
					aggregate_func_3483(8);
					aggregate_func_3483(4);
					return;
				}
				else if ((((aggregate_func_3450(iParam0, 1) == Global_1275329->f_54 && fParam1 <= 80f) && !aggregate_func_6688()) && !aggregate_func_4258()) || aggregate_func_7100(128))
				{
					func_69(0);
					aggregate_func_6994(1);
				}
			}
		}
		else
		{
			if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && aggregate_func_5015(iParam0, 2)) && aggregate_func_5015(PLAYER::PLAYER_ID(), 4))
			{
				if (Global_1275117->f_1 == 3)
				{
					return;
				}
				else if (Global_1275117->f_1 != 2)
				{
					aggregate_func_6994(2);
					aggregate_func_3483(8);
					aggregate_func_3483(4);
					return;
				}
			}
			if ((fParam1 > 100f && (Global_1275117->f_1 == 1 || Global_1275117->f_1 == 0)) && !aggregate_func_5015(PLAYER::PLAYER_ID(), 1))
			{
				aggregate_func_1451(0, 0);
			}
		}
	}
	else
	{
		if ((aggregate_func_7561(iVar0) == 3 && fParam1 > 100f) && (Global_1275117->f_1 == 1 || Global_1275117->f_1 == 0))
		{
			aggregate_func_1451(0, 0);
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && !aggregate_func_5015(iParam0, 2))
		{
			aggregate_func_3483(8);
			aggregate_func_3483(16);
			aggregate_func_6994(1);
		}
	}
}

bool func_69(int iParam0)
{
	if (aggregate_func_7073(iParam0))
	{
		if (!MISC::IS_BIT_SET(Global_1275117->f_201, iParam0))
		{
			MISC::SET_BIT(&(Global_1275117->f_201), iParam0);
		}
		else
		{
			return aggregate_func_7561(iParam0) == 3;
		}
	}
	return false;
}

bool func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar1 = aggregate_func_3587(PLAYER::PLAYER_ID(), 1);
	iVar2 = aggregate_func_3450(PLAYER::PLAYER_ID(), 1);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (aggregate_func_3653(PLAYER::INT_TO_PLAYERINDEX(iVar0), &iVar4, &iVar3, 1))
		{
			if (iVar4 == iVar2 && iVar3 == iVar1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_72(int iParam0, var uParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (!func_144(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = true;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(aggregate_func_5163()))
	{
		bVar0 = true;
	}
	switch (uParam1->f_3)
	{
		case 0:
			if (bParam2 && !bVar0)
			{
				aggregate_func_9318(iParam0, uParam1, 1);
			}
			break;
		case 1:
			if (bParam2 && !bVar0)
			{
				if (func_145(iParam0))
				{
					aggregate_func_9318(iParam0, uParam1, 2);
				}
			}
			else
			{
				func_146(iParam0);
				aggregate_func_9318(iParam0, uParam1, 0);
			}
			break;
		case 2:
			if (bParam2 && !bVar0)
			{
				if (func_147(iParam0, uParam1))
				{
					func_146(iParam0);
					aggregate_func_9318(iParam0, uParam1, 3);
				}
			}
			else
			{
				func_146(iParam0);
				aggregate_func_9318(iParam0, uParam1, 0);
			}
			break;
		case 3:
			if ((bVar0 || !bParam2) || !SCRIPTS::_DOES_THREAD_EXIST(*uParam1))
			{
				if (func_33(iParam0, uParam1))
				{
					aggregate_func_9318(iParam0, uParam1, 0);
				}
				else
				{
					aggregate_func_9318(iParam0, uParam1, 4);
				}
			}
			break;
		case 4:
			if (func_33(iParam0, uParam1))
			{
				aggregate_func_9318(iParam0, uParam1, 0);
			}
			break;
	}
}

bool func_73()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(Global_1275329->f_29.f_10))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), Global_1275329->f_29.f_10, false, 0);
}

void func_75()
{
	Global_1896726->f_371.f_5 = 1;
}

void func_76()
{
	struct<12> Var0;
	int iVar14;

	if (!aggregate_func_4349(&(Global_1275329->f_50)))
	{
		func_148(0);
		func_149(0);
		return;
	}
	Var0.f_9 = -1591664384;
	if (aggregate_func_2032(Global_1275329->f_50, 1039159916, &Var0, 0, 1))
	{
		func_148(Var0.f_11);
	}
	else
	{
		func_148(0);
	}
	if (aggregate_func_2032(Global_1275329->f_50, 1111816631, &Var0, 0, 1))
	{
		func_149(Var0.f_11);
	}
	else
	{
		func_149(0);
	}
	iVar14 = aggregate_func_7391();
	func_152(iVar14);
}

void func_77()
{
	int iVar0;

	iVar0 = func_83(&(Global_1273882->f_154[&Global_1273882]));
	if (((iVar0 != 10 && iVar0 > 0) && _NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15)) && !_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
	{
		if (aggregate_func_3450(&(Global_1273882->f_154[&Global_1273882]), 1) != -1)
		{
			aggregate_func_4322(896, 1);
		}
		func_89(10);
	}
}

void func_78()
{
	if (aggregate_func_5131(&Global_1273882, 16))
	{
		if (aggregate_func_5131(&Global_1273882, 32))
		{
			Global_1274951->f_8 = 600f;
			Global_1274951->f_33++;
			aggregate_func_4293(&(Global_1274951->f_5), 1);
			aggregate_func_9320(32);
			aggregate_func_9320(64);
		}
	}
	if (!aggregate_func_5131(&Global_1273882, 64))
	{
		if (aggregate_func_3724(&(Global_1274951->f_5)) > Global_1274951->f_8)
		{
			aggregate_func_4957(&(Global_1274951->f_5));
			aggregate_func_8360(64);
		}
	}
	if (!aggregate_func_5131(&Global_1273882, 16))
	{
		if (func_83(&(Global_1273882->f_154[&Global_1273882])) == 4 || func_83(&(Global_1273882->f_154[&Global_1273882])) == 6)
		{
			aggregate_func_8360(16);
		}
	}
	else if (func_83(&(Global_1273882->f_154[&Global_1273882])) != 4 && func_83(&(Global_1273882->f_154[&Global_1273882])) != 6)
	{
		aggregate_func_9320(16);
	}
}

void func_79()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_20))
	{
		return;
	}
	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	iVar3 = ((*Global_1275475)[iVar1 /*86*/])->f_19.f_15;
	iVar4 = ((*Global_1275475)[iVar1 /*86*/])->f_19.f_16;
	iVar5 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_17;
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_21))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1274951->f_21, iVar3);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_24))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1274951->f_24, iVar4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_23))
	{
		iVar2 = func_155(iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1274951->f_23, iVar2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_26))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1274951->f_26, 100);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_27))
	{
		iVar6 = func_156(iVar5);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1274951->f_27, iVar6);
	}
	if (func_104())
	{
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_29))
		{
			iVar7 = BUILTIN::FLOOR(aggregate_func_3724(&(Global_1274951->f_5)));
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1274951->f_29, iVar7);
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_28))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1274951->f_28, false);
		}
	}
	else if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_28))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1274951->f_28, true);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_31))
	{
		if (aggregate_func_5131(iVar0, 262144))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1274951->f_31, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1274951->f_31, false);
		}
	}
}

void func_80()
{
	if (func_157() && aggregate_func_1520(Global_35, (Global_1051387->f_69[33 /*76*/])->f_26, 1, 0))
	{
		if (!aggregate_func_5131(&Global_1273882, 8192))
		{
			HUD::_0x4CC5F2FC1332577F(557238883);
			aggregate_func_8360(8192);
		}
	}
	else if (aggregate_func_5131(&Global_1273882, 8192))
	{
		HUD::_0x8BC7C1F929D07BF3(557238883);
		aggregate_func_9320(8192);
	}
}

void func_81()
{
	char* sVar0;

	if (&((*Global_1275475)[&Global_1273882 /*86*/])->f_5[3] > 0)
	{
		if (aggregate_func_5131(&Global_1273882, 524288) && aggregate_func_1520(Global_35, ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_21, 1, 0))
		{
			if (!aggregate_func_3014(895))
			{
				sVar0 = func_160(((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_20);
				aggregate_func_2517(895, sVar0, 0);
			}
		}
	}
}

void func_82()
{
	if (func_88())
	{
		if (aggregate_func_1520(Global_35, ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_21, 1, 0))
		{
			if (!aggregate_func_3014(897))
			{
				aggregate_func_4322(897, 0);
			}
		}
	}
}

int func_83(int iParam0)
{
	int iVar0;

	iVar0 = -1;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return iVar0;
	}
	return &Global_1274951;
}

void func_84()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	bVar1 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_15;
	bVar2 = INVENTORY::_0xE80E50BEE276A54A(827714260, 1039159916);
	bVar3 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_16;
	bVar4 = INVENTORY::_0xE80E50BEE276A54A(-545779394, 1111816631);
	iVar5 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_17;
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_20))
	{
		Global_1274951->f_20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Moonshine_ProgressBars");
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_21))
	{
		Global_1274951->f_21 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1274951->f_20, "MoonshineMashValue", bVar1);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_22))
	{
		Global_1274951->f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1274951->f_20, "MoonshineMashMaximum", bVar2);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_23))
	{
		bVar7 = func_155(iVar0);
		Global_1274951->f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1274951->f_20, "MoonshineMashColorID", bVar7);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_24))
	{
		Global_1274951->f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1274951->f_20, "MoonshineBottlesValue", bVar3);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_25))
	{
		Global_1274951->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1274951->f_20, "MoonshineBottlesMaximum", bVar4);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_26))
	{
		Global_1274951->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1274951->f_20, "MoonshineBottlesThresholdValue", 100);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_27))
	{
		bVar6 = func_156(iVar5);
		Global_1274951->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1274951->f_20, "MoonshineFlavor", bVar6);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_28))
	{
		Global_1274951->f_28 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1274951->f_20, "MoonshineFlavorTimeMeterShowLabel", false);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_29))
	{
		Global_1274951->f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1274951->f_20, "FlavoringTimeMeterValue", false);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_30))
	{
		Global_1274951->f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1274951->f_20, "FlavoringTimeMeterMaximum", 600);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1274951->f_31))
	{
		Global_1274951->f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1274951->f_20, "MoonshineShowCash", false);
	}
}

void func_85()
{
	int iVar0;

	iVar0 = aggregate_func_7391();
	if (iVar0 != 0)
	{
		aggregate_func_8360(64);
	}
	Global_1274951->f_33 = 0;
}

void func_86()
{
	int iVar0;
	int iVar1;

	iVar0 = func_162();
	iVar1 = func_163();
	if (iVar0 == 827714260 || iVar1 == -545779394)
	{
		func_164(827714260);
		aggregate_func_8360(1024);
	}
	else if (iVar0 == -822124724 || iVar1 == 1532695640)
	{
		func_164(-822124724);
		aggregate_func_8360(2048);
	}
	else if (iVar0 == 1269193435 || iVar1 == 1847740267)
	{
		func_164(1847740267);
		aggregate_func_8360(4096);
	}
}

void func_87()
{
	if (((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_16 == 20)
	{
		aggregate_func_8360(524288);
	}
}

bool func_88()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(-319651633) && aggregate_func_4349(&(Global_1275329->f_50)))
	{
		return true;
	}
	return false;
}

void func_89(int iParam0)
{
	Global_1274951 = iParam0;
}

bool func_90(float fParam0)
{
	struct<12> Var0;

	Var0.f_9 = -1591664384;
	if (aggregate_func_2032(Global_1275329->f_50, 1111816631, &Var0, 0, 1))
	{
		if (IntToFloat(Var0.f_11) >= (fParam0 * BUILTIN::TO_FLOAT(INVENTORY::_0xE80E50BEE276A54A(Var0.f_4, 1111816631))))
		{
			return true;
		}
	}
	return false;
}

bool func_91()
{
	int iVar0;

	if (!aggregate_func_4349(&(Global_1275329->f_50)))
	{
		return false;
	}
	iVar0 = aggregate_func_4274(Global_1275329->f_50, 1039159916, 0, 1);
	if ((iVar0 == 827714260 || iVar0 == -822124724) || iVar0 == 1269193435)
	{
		return true;
	}
	return false;
}

void func_92()
{
	aggregate_func_9320(256);
	aggregate_func_8360(4);
	func_165();
	Global_1274951->f_33 = 0;
}

bool func_95()
{
	if (aggregate_func_4106(Global_1273882->f_10) == 0 && aggregate_func_4106(Global_1273882->f_10) == 0)
	{
		return true;
	}
	return false;
}

bool func_96()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<12> Var5;
	struct<12> Var22;

	if (aggregate_func_5020(&(Global_1274951->f_9)))
	{
		return false;
	}
	bVar0 = aggregate_func_5326();
	if (!aggregate_func_2823(bVar0, 0))
	{
		return false;
	}
	if (!aggregate_func_4349(&(Global_1275329->f_50)))
	{
		return false;
	}
	if (aggregate_func_2937(&(Global_1275329->f_50), 1039159916, 1) > 0)
	{
		return false;
	}
	else if (aggregate_func_2937(&(Global_1275329->f_50), 1111816631, 1) > 0)
	{
		return false;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = aggregate_func_5209(bVar0, 0, 1, -1, 1);
	iVar4 = aggregate_func_4655(bVar0, bVar3, 1, 0, 1, 0);
	if (aggregate_func_3099(bVar0, &iVar1, &bVar2, 0) && aggregate_func_4660(iVar1, bVar2, 0, 1) < iVar4)
	{
		Var5.f_9 = 1;
		Var5.f_11 = -1591664384;
		if (!aggregate_func_3028(&(Global_1274951->f_9), iVar1, &Var5, 1, bVar2, -1, 0))
		{
			return false;
		}
		Global_1274951->f_19 = aggregate_func_4660(iVar1, bVar2, 0, 1);
		return true;
	}
	Var22.f_9 = 1;
	Var22.f_11 = -1591664384;
	if (!aggregate_func_5164(&(Global_1274951->f_9), bVar0, Global_1275329->f_50, 1039159916, 1, &Var22, 1, bVar3, -1, 1))
	{
		return false;
	}
	Global_1274951->f_19 = iVar4;
	return true;
}

void func_99()
{
	int iVar0;

	iVar0 = func_162();
	((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_19 = iVar0;
}

void func_100(var uParam0, bool bParam1)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	var uVar14;

	aggregate_func_4107(uParam0, &uVar0);
	iVar4 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_5.f_12;
	iVar5 = func_178(iVar4);
	if (bParam1)
	{
		iVar6 = 1535463323;
	}
	else
	{
		iVar6 = 733252738;
	}
	if (bParam1)
	{
		uVar7 = Global_1274951->f_19;
	}
	uVar8 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_19;
	uVar9 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_17;
	uVar10 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_18;
	uVar11 = Global_1274951->f_33;
	iVar12 = func_179();
	uVar13 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_16;
	uVar14 = &((*Global_1275475)[&Global_1273882 /*86*/])->f_5[0];
	TELEMETRY::_0xB5013EFBB5516867(&uVar0, iVar5, iVar6, uVar7, uVar8, uVar9, uVar10, uVar11, iVar12, uVar13, uVar14);
}

bool func_102()
{
	int iVar0;
	bool bVar1;
	struct<12> Var2;

	if (aggregate_func_5020(&(Global_1274951->f_9)))
	{
		return false;
	}
	if (!aggregate_func_4349(&(Global_1275329->f_50)))
	{
		return false;
	}
	iVar0 = aggregate_func_4274(Global_1275329->f_50, 1039159916, 0, 1);
	bVar1 = false;
	if (iVar0 == 1269193435)
	{
		bVar1 = 1847740267;
	}
	else if (iVar0 == -822124724)
	{
		bVar1 = 1532695640;
	}
	else if (iVar0 == 827714260)
	{
		bVar1 = -545779394;
	}
	else
	{
		bVar1 = -545779394;
	}
	Var2.f_9 = 1;
	Var2.f_11 = -1591664384;
	if (aggregate_func_5164(&(Global_1274951->f_9), bVar1, Global_1275329->f_50, 1111816631, 1, &Var2, 1, -489628648, -1, 1))
	{
		return true;
	}
	return false;
}

bool func_104()
{
	if (aggregate_func_4260(&(Global_1274951->f_5)))
	{
		return true;
	}
	return false;
}

void func_108()
{
	struct<22> Var0;

	if (!func_183())
	{
		return;
	}
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_11 = joaat("COLOR_WHITE");
	Var0.f_12 = 8000;
	Var0.f_13 = 1511356879;
	Var0.f_15 = 1433015236;
	Var0.f_21 = 1;
	Var0 = 5;
	Var0.f_2 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_TITLE");
	Var0.f_3 = MISC::_CREATE_VAR_STRING(2, "MOONSHINE_PRODUCTION_COMPLETE");
	Var0.f_7 = 1349568299;
	Var0.f_6 = -1734218699;
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_4 = "MOONSHINE_HOLD_INPUT_FOR_CAMP";
	Var0.f_18 = 0;
	Var0.f_17 = 0;
	Var0.f_13 = 2099367966;
	Var0.f_16 = 0;
	Var0.f_14 = 0;
	aggregate_func_1158(&Var0);
}

void func_109()
{
	Global_1274951->f_4 = 0f;
	aggregate_func_4957(&(Global_1274951->f_1));
	aggregate_func_4957(&(Global_1274951->f_5));
	aggregate_func_9320(32);
	aggregate_func_9320(2048);
	aggregate_func_9320(1024);
	aggregate_func_9320(4096);
	aggregate_func_9320(64);
	aggregate_func_9320(128);
	aggregate_func_9320(2);
	aggregate_func_9320(512);
	aggregate_func_9320(65536);
}

int func_116()
{
	if (aggregate_func_4349(&(Global_1275329->f_50)))
	{
		if (aggregate_func_4290(-2020197296, &(Global_1275329->f_50), 104187473, 1, 0))
		{
			return 3;
		}
		else if (aggregate_func_4290(1236975766, &(Global_1275329->f_50), 104187473, 1, 0))
		{
			return 3;
		}
		else if (aggregate_func_4290(-1334222892, &(Global_1275329->f_50), 104187473, 1, 0))
		{
			return 3;
		}
	}
	return 0;
}

int func_117()
{
	if (aggregate_func_4349(&(Global_1275329->f_50)))
	{
		if (aggregate_func_4290(-1609310766, &(Global_1275329->f_50), 104187473, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_118()
{
	if (aggregate_func_4349(&(Global_1275329->f_50)))
	{
		if (aggregate_func_4290(-663241357, &(Global_1275329->f_50), 104187473, 1, 0))
		{
			return 2;
		}
		else if (aggregate_func_4290(-950723794, &(Global_1275329->f_50), 104187473, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	if (aggregate_func_4349(&(Global_1275329->f_50)))
	{
		switch (aggregate_func_4299(Global_1275329->f_50, -1565675519, 1, -1))
		{
			case -1832936964:
				return 2;
			case -998343303:
				return 3;
			case -126163595:
				return 4;
			case -589877714:
				return 6;
			case -361084332:
				return 10;
			case -1557841209:
				return 5;
			case -946797662:
				return 7;
			case -380221660:
				return 9;
			case -110172099:
				return 1;
			case -147791143:
				return 8;
			default:
				break;
		}
	}
	return 0;
}

int func_126()
{
	int iVar0;

	if (aggregate_func_4981())
	{
		return 1;
	}
	if (aggregate_func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 1;
	}
	if (!aggregate_func_2820())
	{
		return 1;
	}
	if (aggregate_func_4255(aggregate_func_4259(0)))
	{
		return 1;
	}
	if (aggregate_func_4337(0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 1;
	}
	iVar0 = aggregate_func_3639(1427578635, PLAYER::PLAYER_ID(), 0, 1);
	if (aggregate_func_5461(iVar0))
	{
		return 1;
	}
	return 0;
}

var func_127()
{
	return Global_1070355->f_7;
}

bool func_137(int iParam0, int iParam1)
{
	int iVar0;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1275117->f_3.f_2[iVar0 /*4*/] == iParam1)
		{
			(Global_1275117->f_3.f_2[iVar0 /*4*/])->f_1 = iParam0;
			aggregate_func_4241(&((Global_1275117->f_3.f_2[iVar0 /*4*/])->f_3), 4);
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_139(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1275117->f_3.f_132[iParam0 /*2*/])) && aggregate_func_2628(&(Global_1275117->f_3.f_132[iParam0 /*2*/])))
	{
		return true;
	}
	return false;
}

bool func_144(int iParam0, bool bParam1)
{
	return aggregate_func_3587(iParam0, bParam1) != -1;
}

bool func_145(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	sVar0 = func_226(iParam0);
	if (MISC::_0x375F5870A7B8BEC1(sVar0))
	{
		return false;
	}
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sVar0))
	{
		return false;
	}
	iVar1 = (Global_1275117->f_201.f_1[iParam0 /*4*/])->f_2;
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(sVar0, iVar1, true, 0))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	iVar2 = func_228(func_227(iParam0));
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iVar2) <= 0)
	{
		return false;
	}
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		return false;
	}
	return true;
}

void func_146(int iParam0)
{
	char* sVar0;

	sVar0 = func_226(iParam0);
	if (MISC::_0x375F5870A7B8BEC1(sVar0))
	{
		return;
	}
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
}

bool func_147(int iParam0, var uParam1)
{
	func_229(iParam0, uParam1);
	if (SCRIPTS::_DOES_THREAD_EXIST(*uParam1))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_226(iParam0));
		return true;
	}
	return false;
}

void func_148(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901929->f_742.f_5)
	{
		iParam0 = Global_1901929->f_742.f_5;
	}
	if (((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_15 != iParam0)
	{
		((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_15 = iParam0;
	}
}

void func_149(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_16 != iParam0)
	{
		((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_16 = iParam0;
	}
}

void func_152(int iParam0)
{
	if (((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_17 != iParam0)
	{
		((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_17 = iParam0;
		func_231();
		aggregate_func_8360(1048576);
	}
	if (iParam0 != 0 && ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_17 != ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_20)
	{
		((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_18 = ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_20;
	}
	if ((iParam0 != 0 && iParam0 != ((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_20) && !aggregate_func_4260(&(Global_1274951->f_5)))
	{
		((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_20 = iParam0;
	}
}

int func_155(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (aggregate_func_5131(iVar0, 256))
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_156(int iParam0)
{
	int iVar0;

	if (iParam0 == 1958345007)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 348064119)
	{
		iVar0 = 2;
	}
	else if (iParam0 == -818346432)
	{
		iVar0 = 3;
	}
	else if (iParam0 == -610395813)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 2103594888)
	{
		iVar0 = 5;
	}
	else if (iParam0 == -624685730)
	{
		iVar0 = 6;
	}
	else if (iParam0 == 1739830455)
	{
		iVar0 = 7;
	}
	else if (iParam0 == -1498871949)
	{
		iVar0 = 8;
	}
	else if (iParam0 == 447784640)
	{
		iVar0 = 9;
	}
	else if (iParam0 == -1283370018)
	{
		iVar0 = 10;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_157()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (aggregate_func_2059())
	{
		return false;
	}
	return true;
}

char* func_160(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 1958345007:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE";
			break;
		case 348064119:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB";
			break;
		case -818346432:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER";
			break;
		case -610395813:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT";
			break;
		case 2103594888:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN";
			break;
		case -624685730:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS";
			break;
		case 1739830455:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND";
			break;
		case -1498871949:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH";
			break;
		case 447784640:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER";
			break;
		case -1283370018:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK";
			break;
		default:
			sVar0 = "PROVISION_ROLE_MOONSHINER_MOONSHINE_UNFLAVORED";
			break;
	}
	return sVar0;
}

int func_162()
{
	int iVar0;

	if (!aggregate_func_4349(&(Global_1275329->f_50)))
	{
		return 0;
	}
	iVar0 = aggregate_func_4274(Global_1275329->f_50, 1039159916, 0, 1);
	return iVar0;
}

int func_163()
{
	int iVar0;

	if (!aggregate_func_4349(&(Global_1275329->f_50)))
	{
		return 0;
	}
	iVar0 = aggregate_func_4274(Global_1275329->f_50, 1111816631, 0, 1);
	return iVar0;
}

void func_164(int iParam0)
{
	((*Global_1275475)[&Global_1273882 /*86*/])->f_19.f_19 = iParam0;
}

void func_165()
{
	bool bVar0;
	int iVar1;

	if (!aggregate_func_4349(&(Global_1275329->f_50)))
	{
		return;
	}
	bVar0 = aggregate_func_4274(Global_1275329->f_50, 1039159916, 0, 1);
	iVar1 = INVENTORY::_0xE80E50BEE276A54A(bVar0, 1039159916);
	if (bVar0 == 1269193435)
	{
		Global_1274951->f_4 = ((Global_1901929->f_742.f_2 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	else if (bVar0 == -822124724)
	{
		Global_1274951->f_4 = ((Global_1901929->f_742.f_1 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	else if (bVar0 == 827714260)
	{
		Global_1274951->f_4 = ((Global_1901929->f_742 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	else
	{
		Global_1274951->f_4 = ((Global_1901929->f_742 / BUILTIN::TO_FLOAT(iVar1)) * 60f);
	}
	if (aggregate_func_5052(15) >= 15)
	{
		Global_1274951->f_4 = (Global_1274951->f_4 * 0.8f);
	}
	aggregate_func_4293(&(Global_1274951->f_1), 0);
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 2037940248;
		case 0:
			return 1397223979;
		case 1:
			return 677707590;
		case 2:
			return -269277617;
		case 3:
			return -1463831630;
		case 4:
			return 2031672089;
		default:
			break;
	}
	return 2037940248;
}

int func_179()
{
	bool bVar0;
	int iVar1;

	if (!aggregate_func_4349(&(Global_1275329->f_50)))
	{
		return 0;
	}
	bVar0 = aggregate_func_4274(Global_1275329->f_50, -268973591, 0, 1);
	if (aggregate_func_2852(bVar0, 1372968408))
	{
		iVar1 = 1372968408;
	}
	else if (aggregate_func_2852(bVar0, -710171994))
	{
		iVar1 = -710171994;
	}
	else if (aggregate_func_2852(bVar0, 956386416))
	{
		iVar1 = 956386416;
	}
	return iVar1;
}

bool func_183()
{
	if (HUD::IS_HUD_HIDDEN())
	{
		return false;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	if (aggregate_func_2059())
	{
		return false;
	}
	if (UIAPPS::_IS_APP_RUNNING(1289756680))
	{
		return false;
	}
	if (Global_1070355->f_27249)
	{
		return false;
	}
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-319651633))
	{
		return false;
	}
	if (func_268())
	{
		return false;
	}
	return true;
}

char* func_226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "net_moonshine_entrance";
		case 1:
			return "net_moonshine_property";
		default:
			break;
	}
	return "";
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1294698649;
		case 0:
			return joaat("mini");
		default:
			break;
	}
	return joaat("micro");
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case joaat("micro"):
			return 128;
		case -1598299820:
			return 200;
		case 746035441:
			return 400;
		case joaat("mini"):
			return 512;
		case 1567969312:
			return 600;
		case 849942934:
			return 800;
		case joaat("default"):
			return 1024;
		case 662654967:
			return 1026;
		case joaat("update"):
			return 1300;
		case 356437857:
			return 1301;
		case 1444727078:
			return 1400;
		case -1152281542: /* GXTEntry: "Posse Race" */
			return 1600;
		case -2027482694:
			return 1800;
		case joaat("pause_menu_script"):
			return 2000;
		case 1371455820:
			return 2024;
		case 1230979482:
			return 2025;
		case -1298200006:
			return 2026;
		case 28140092:
			return 2027;
		case 1497760498:
			return 2047;
		case -346238945:
			return 2048;
		case 627973797:
			return 2549;
		case 1875090462:
			return 2050;
		case -1571441951:
			return 2051;
		case 141976779:
			return 2452;
		case -390588104:
			return 2053;
		case -1156795024:
			return 3000;
		case 1955050002:
			return 3001;
		case 1415704879:
			return 3002;
		case 1168642835:
			return 3081;
		case -1582256496:
			return 3088;
		case 894914127:
			return 3090;
		case -925217315:
			return 3500;
		case joaat("script_xml"):
			return 4592;
		case -299117668:
			return 4700;
		case 2134863183:
			return 5000;
		case 1442743587:
			return 5001;
		case -354964017:
			return 5400;
		case 487844664:
			return 5500;
		case -1050991852:
			return 5501;
		case -544337485:
			return 5502;
		case joaat("region"):
			return 5503;
		case 46285951:
			return 5504;
		case 838854843: /* GXTEntry: "Fishing" */
			return 5505;
		case 2122926971:
			return 5506;
		case -1475898915:
			return 6000;
		case -1644014996:
			return 6001;
		case -45677744:
			return 6002;
		case joaat("shop"):
			return 6005;
		case -192136878:
			return 6010;
		case 1517073634:
			return 6400;
		case 1495295997:
			return 6500;
		case 364255091:
			return 7000;
		case -1330320955:
			return 7001;
		case -901433337:
			return 7002;
		case 1865091110:
			return 7300;
		case 36156066:
			return 7301;
		case -1226137495:
			return 8700;
		case 1524910643:
			return 10001;
		case -1125321488:
			return 10003;
		case 2013232686:
			return 14335;
		case joaat("transition"):
			return 25500;
		case joaat("mission_creator"):
			return 40500;
		case joaat("mission"):
			return 45000;
		case 56269207:
			return 68000;
		case 992915021:
			return 1631;
		case -1294698649:
			return 3482;
		case joaat("soak_test"):
			return 4088;
		case joaat("network_bot"):
			return 4096;
		case joaat("debug_script"):
			return 4080;
		case joaat("debug_menu"):
			return 50000;
		case 708358771:
			return 65536;
		case -800826243:
			return 32768;
		case 1978046393:
			return 129;
		default:
			break;
	}
	return 0;
}

void func_229(int iParam0, var uParam1)
{
	struct<10> Var0;

	Var0 = { func_297(iParam0) };
	uParam1->f_1 = Var0.f_1;
	uParam1->f_2 = uParam1->f_1;
	*uParam1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_226(iParam0), &Var0, 10, func_228(func_227(iParam0)));
}

void func_231()
{
	bool bVar0;

	bVar0 = aggregate_func_7391();
	if (aggregate_func_2852(bVar0, 1372968408))
	{
		aggregate_func_1962(aggregate_func_4257(-1276738576, -416283678), 1);
	}
	else if (aggregate_func_2852(bVar0, -710171994))
	{
		aggregate_func_1962(aggregate_func_4257(-1276738576, -880881435), 1);
	}
	else if (aggregate_func_2852(bVar0, 956386416))
	{
		aggregate_func_1962(aggregate_func_4257(-1276738576, -98884474), 1);
	}
}

bool func_268()
{
	struct<2> Var0;

	Var0 = { aggregate_func_4259(0) };
	if (aggregate_func_4255(Var0) && aggregate_func_4521(Var0))
	{
		if ((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 7)
		{
			return true;
		}
	}
	return false;
}

struct<10> func_297(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	iVar0 = aggregate_func_5163();
	Var1.f_1 = aggregate_func_3587(iVar0, 1);
	Var1.f_2 = aggregate_func_3450(iVar0, 1);
	Var1 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		Var1.f_3 = { aggregate_func_2843(iVar0) };
	}
	return Var1;
}

