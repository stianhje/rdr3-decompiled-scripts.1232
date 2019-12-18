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
#endregion

void __EntryFunction__()
{
	fLocal_16 = 1f;
	fLocal_17 = 1f;
	aggregate_func_1839();
	while (!aggregate_func_523(0, 0))
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4();
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		func_5();
		BUILTIN::WAIT(0);
	}
	aggregate_func_2819();
}

void func_3()
{
	bool bVar0;

	bVar0 = func_12();
	if (aggregate_func_1899())
	{
		func_14();
	}
	func_15(bVar0);
}

void func_4()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (MAP::DOES_BLIP_EXIST(aggregate_func_8184((Global_1124870->f_1[iVar0 /*59*/])->f_2)))
		{
			aggregate_func_1801(&((Global_1124870->f_1[iVar0 /*59*/])->f_2), 0);
		}
		iVar0++;
	}
	aggregate_func_1030();
	Global_1124870->f_1890 = 0;
	Global_1124870->f_1913 = 0;
	Global_1124870 = 0;
}

void func_5()
{
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1124870->f_1924) && !SCRIPTS::_DOES_THREAD_EXIST(Global_1124870->f_1926))
	{
		return;
	}
	if (!Global_1124870->f_1928)
	{
		if (SCRIPTS::_DOES_THREAD_EXIST(Global_1124870->f_1924))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1124870->f_1924);
		}
		if (SCRIPTS::_DOES_THREAD_EXIST(Global_1124870->f_1926))
		{
			SCRIPTS::_0x7DE4643157AD646C(Global_1124870->f_1926);
		}
		Global_1124870->f_1928 = 1;
	}
}

void func_10()
{
	aggregate_func_9016(Global_1123778);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1123778, 1092, 43);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1123778), 1092, "g_mpHostNetCamp");
	aggregate_func_6729(Global_1126840);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1126840, 2657, 44);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1126840)[0 /*83*/]), 2657, "g_mpPlayerNetCamp");
	aggregate_func_9017(Global_1124870);
	aggregate_func_4239(Global_1126800);
}

bool func_12()
{
	if (aggregate_func_6688())
	{
		aggregate_func_3608(16);
		return false;
	}
	if (aggregate_func_4258())
	{
		aggregate_func_3608(16);
		return false;
	}
	if (aggregate_func_4361(16))
	{
		aggregate_func_3608(16);
		return false;
	}
	aggregate_func_3090(16);
	return true;
}

void func_14()
{
	switch (Global_1123778->f_1090)
	{
		case 0:
			aggregate_func_6498();
			break;
		case 1:
			func_33();
			break;
		case 2:
			func_34();
			break;
	}
}

void func_15(bool bParam0)
{
	switch (&Global_1124870)
	{
		case 0:
			func_35();
			break;
		case 1:
			func_36();
			break;
		case 2:
			func_37(bParam0);
			break;
	}
	Global_1124870->f_1912 = 0;
}

void func_33()
{
	if (aggregate_func_2991(1))
	{
		func_46(2);
	}
}

void func_34()
{
	int iVar0;
	var uVar1;

	while (iVar0 < 10)
	{
		iVar0++;
		Global_1124870->f_1916++;
		if (Global_1124870->f_1916 >= 32)
		{
			Global_1124870->f_1916 = 0;
		}
		if (&Global_1273882->f_22[Global_1124870->f_1916])
		{
			func_47(Global_1124870->f_1916, &uVar1);
		}
		func_48(Global_1124870->f_1916);
	}
}

void func_35()
{
	if (Global_1123778->f_1090 > 0)
	{
		if (aggregate_func_4683())
		{
			func_50();
			func_51(1);
		}
	}
}

void func_36()
{
	if (!aggregate_func_2991(1))
	{
		if (func_52())
		{
			func_53();
			aggregate_func_3090(1);
		}
	}
	else if (Global_1123778->f_1090 > 1)
	{
		if (func_54() == 0)
		{
			aggregate_func_9020(1);
		}
		func_51(2);
	}
}

void func_37(bool bParam0)
{
	int iVar0;

	if (!aggregate_func_2991(64) && aggregate_func_2820())
	{
		aggregate_func_3090(64);
	}
	while (iVar0 < 10)
	{
		iVar0++;
		Global_1124870->f_1915++;
		if (Global_1124870->f_1915 >= 32)
		{
			Global_1124870->f_1915 = 0;
		}
		func_57(Global_1124870->f_1915);
	}
	func_58();
	if (bParam0)
	{
		func_59();
		func_60();
		func_61();
		func_62();
	}
	else if (Global_1124870->f_1891 != 1)
	{
		aggregate_func_7263(1);
	}
}

void func_46(int iParam0)
{
	if (Global_1123778->f_1090 != iParam0)
	{
		Global_1123778->f_1090 = iParam0;
	}
}

void func_47(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	vector3 vVar9;
	bool bVar12;
	struct<24> Var13;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return;
	}
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if ((Global_1123778->f_865[iVar1 /*7*/])->f_4 != ((*Global_1126840)[iParam0 /*83*/])->f_33.f_3 && ((*Global_1126840)[iParam0 /*83*/])->f_33.f_3 != -1)
	{
		func_70(iVar1, ((*Global_1126840)[iParam0 /*83*/])->f_33.f_3);
		func_71(iVar1, ((*Global_1126840)[iParam0 /*83*/])->f_33);
		func_72(iVar1, 0);
	}
	iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar0);
	iVar3 = _NAMESPACE26::_0x149A2751AB66AC02(iVar2);
	vVar9 = { (Global_1123778->f_865[iVar1 /*7*/])->f_1 };
	bVar12 = aggregate_func_4240((Global_1123778->f_865[iVar1 /*7*/])->f_5, 2);
	switch (&Global_1123778->f_865[iVar1 /*7*/])
	{
		case 0:
			(Global_1123778->f_865[iVar1 /*7*/])->f_5 = ((*Global_1126840)[iParam0 /*83*/])->f_33.f_4;
			bVar12 = aggregate_func_4240((Global_1123778->f_865[iVar1 /*7*/])->f_5, 2);
			if (vVar9.z == 0)
			{
				iVar7 = func_73(iVar0);
				if (aggregate_func_4598(iVar7))
				{
					if (_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
					{
						func_75(iVar7, 3);
					}
				}
				if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1123778->f_1091), iVar0))
				{
					SCRIPTS::_0xD426E2E3288469D6(&(Global_1123778->f_1091), iVar0);
				}
				func_72(iVar1, 6);
			}
			else if (vVar9.z < 0)
			{
				if (aggregate_func_3623(iParam0))
				{
					func_72(iVar1, 3);
				}
				else
				{
					func_72(iVar1, 4);
				}
			}
			else
			{
				if (*uParam1)
				{
					return;
				}
				*uParam1 = 1;
				aggregate_func_2606(vVar9, &vVar4);
				if (!func_78(vVar9, iParam0, vVar4, iVar3, 1, 0, bVar12))
				{
					func_72(iVar1, 4);
					return;
				}
				func_72(iVar1, 1);
			}
			break;
		case 1:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			if (aggregate_func_4240(((*Global_1126840)[iParam0 /*83*/])->f_33.f_4, 8))
			{
				func_72(iVar1, 2);
			}
			break;
		case 2:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			aggregate_func_2606(vVar9, &vVar4);
			iVar7 = func_73(iVar0);
			if (aggregate_func_4598(iVar7))
			{
				func_75(iVar7, 3);
			}
			Var13.f_9 = 255;
			Var13.f_10 = 7;
			Var13.f_10.f_1 = 255;
			Var13.f_10.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
			Var13.f_9 = iVar0;
			Var13.f_1 = vVar9.x;
			Var13.f_1.f_1 = vVar9.y;
			Var13.f_1.f_2 = vVar9.z;
			Var13.f_20 = { vVar4 };
			Var13.f_23.f_1 = ((*Global_1126840)[iParam0 /*83*/])->f_38.f_23.f_1;
			Var13.f_23 = ((*Global_1126840)[iParam0 /*83*/])->f_38.f_23;
			Var13 = 1;
			iVar7 = func_79(&Var13);
			if (!aggregate_func_4598(iVar7))
			{
				return;
			}
			if (!aggregate_func_4240((Global_1123778->f_865[iVar1 /*7*/])->f_5, 4))
			{
				aggregate_func_9023(iVar7, 16);
			}
			if (aggregate_func_4240((Global_1123778->f_865[iVar1 /*7*/])->f_5, 1))
			{
				aggregate_func_9023(iVar7, 512);
			}
			func_72(iVar1, 6);
			break;
		case 3:
			iVar7 = 0;
			iVar7 = 0;
			while (iVar7 < 32)
			{
				if (((*Global_1123778)[iVar7 /*27*/])->f_9 == iVar0)
				{
					((*Global_1123778)[iVar7 /*27*/])->f_1 = ((*Global_1126840)[iParam0 /*83*/])->f_33;
				}
				else
				{
					iVar7++;
				}
			}
			func_72(iVar1, 6);
			break;
		case 4:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			vVar9.f_2 = -2;
			if (func_81(iVar2, &vVar9, bVar12, &iVar8, &((Global_1123778->f_865[iVar1 /*7*/])->f_6)))
			{
				(Global_1123778->f_865[iVar1 /*7*/])->f_6 = 0;
				func_71(iVar1, vVar9);
				func_72(iVar1, 1);
			}
			else if ((Global_1123778->f_865[iVar1 /*7*/])->f_6 >= 10 || iVar8 == 1)
			{
				aggregate_func_4247(&((Global_1123778->f_865[iVar1 /*7*/])->f_5), 16);
				func_72(iVar1, 5);
			}
			break;
		case 5:
			if (*uParam1)
			{
				return;
			}
			*uParam1 = 1;
			vVar9.f_2 = -1;
			if (func_81(iVar2, &vVar9, bVar12, &iVar8, &((Global_1123778->f_865[iVar1 /*7*/])->f_6)))
			{
				(Global_1123778->f_865[iVar1 /*7*/])->f_6 = 0;
				func_71(iVar1, vVar9);
				func_72(iVar1, 1);
			}
			else if ((Global_1123778->f_865[iVar1 /*7*/])->f_6 >= 15 || iVar8 == 1)
			{
				func_72(iVar1, 6);
				aggregate_func_4247(&((Global_1123778->f_865[iVar1 /*7*/])->f_5), 32);
			}
			break;
		case 6:
			break;
	}
}

void func_48(int iParam0)
{
	func_82(iParam0);
	if (Global_1123778[iParam0 /*27*/] == 0)
	{
		return;
	}
	if (Global_1123778[iParam0 /*27*/] != 3)
	{
		func_83(iParam0);
		func_84(iParam0);
		func_85(iParam0);
	}
	switch (Global_1123778[iParam0 /*27*/])
	{
		case 1:
			func_86(iParam0);
			break;
		case 2:
			func_87(iParam0);
			break;
		case 3:
			func_88(iParam0);
			break;
	}
}

void func_50()
{
	aggregate_func_9022(&(((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_38));
	func_89();
	func_90();
}

void func_51(int iParam0)
{
	if (&Global_1124870 != iParam0)
	{
		Global_1124870 = iParam0;
	}
}

bool func_52()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (!DATAFILE::_0x7907969497EA92F5(&(Global_1129497->f_361[iVar0])) || !DATAFILE::_0x603AC35FD4602C76(&(Global_1129497->f_361[iVar0])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_53()
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Var1 = { aggregate_func_2828(-1838434463 /* GXTEntry: "Camp" */, aggregate_func_1967(0), 1084182731, 1) };
	func_93(Var1);
	func_94();
	iVar5 = aggregate_func_4299(Var1, -421952220, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -1867469444; /* GXTEntry: "Red" */
	}
	aggregate_func_4868(iVar5, iVar0);
	iVar5 = aggregate_func_4299(Var1, 1231618917, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -144166169; /* GXTEntry: "Standard 1" */
	}
	aggregate_func_4868(iVar5, iVar0);
	iVar5 = aggregate_func_4299(Var1, 1043717005, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -811830793; /* GXTEntry: "Bedroll" */
	}
	aggregate_func_2906(iVar5, iVar0);
	iVar5 = aggregate_func_4299(Var1, 142663787, 1, -1);
	if (iVar5 == 0)
	{
		iVar5 = -698168422; /* GXTEntry: "Standard" */
	}
	aggregate_func_2906(iVar5, iVar0);
	aggregate_func_2906(0, iVar0);
}

int func_54()
{
	return Global_1124870->f_1890;
}

void func_57(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = aggregate_func_8310(iParam0);
	iVar1 = &Global_1124870->f_1[iParam0 /*59*/];
	if (!bVar0)
	{
		if (iVar1 == 0)
		{
			return;
		}
		else if (iVar1 == 2 || iVar1 == 1)
		{
			func_102(iParam0);
			func_103(iParam0, 3);
		}
	}
	if (iVar1 == 0 && Global_1123778[iParam0 /*27*/] != 0)
	{
		func_104(iParam0, ((*Global_1123778)[iParam0 /*27*/])->f_1, ((*Global_1123778)[iParam0 /*27*/])->f_9);
		func_103(iParam0, 1);
	}
	func_105(iParam0, bVar0);
	func_106(iParam0, bVar0);
	switch (&Global_1124870->f_1[iParam0 /*59*/])
	{
		case 1:
			func_107(iParam0);
			break;
		case 2:
			func_108(iParam0);
			break;
		case 3:
			func_109(iParam0);
			break;
	}
}

void func_58()
{
	int iVar0;
	int iVar1;

	if (aggregate_func_2991(256))
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (aggregate_func_3736(iVar0, 1))
			{
				iVar1 = 1;
			}
			else
			{
				iVar0++;
			}
		}
		if (iVar1 == 0)
		{
			aggregate_func_3608(256);
		}
	}
}

void func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	iVar0 = PLAYER::PLAYER_ID();
	func_111(iVar0);
	iVar1 = ((*Global_1126840)[iVar0 /*83*/])->f_38.f_3;
	bVar3 = aggregate_func_4598(iVar1);
	bVar4 = _NAMESPACE26::_0x424B17A7DC5C90BC(iVar0);
	switch (Global_1124870->f_1891)
	{
		case 0:
			if (bVar4)
			{
				if (bVar3)
				{
					aggregate_func_7263(20);
				}
				else
				{
					vVar8 = { aggregate_func_7635() };
					func_113(vVar8);
					if (vVar8.z != 0)
					{
						Global_1124870->f_1908 = { vVar8 };
						Global_1124870->f_1908.f_3 = 0;
						aggregate_func_7263(5);
					}
					else
					{
						aggregate_func_7263(4);
					}
				}
			}
			else
			{
				aggregate_func_7263(22);
			}
			break;
		case 1:
			aggregate_func_7263(0);
			break;
		case 2:
			if (!bVar3)
			{
				if (aggregate_func_7983())
				{
					aggregate_func_7775(0);
				}
				aggregate_func_1030();
				Global_1124870->f_1918 = 0;
				func_113(vVar8);
				func_116();
				func_117();
				func_118();
				aggregate_func_7263(3);
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar4)
				{
					func_116();
					aggregate_func_7263(20);
				}
				else
				{
					aggregate_func_7263(21);
				}
			}
			else
			{
				aggregate_func_7263(4);
			}
			break;
		case 4:
			if (bVar4)
			{
				if (bVar3)
				{
					func_116();
					aggregate_func_7263(20);
				}
				else if (((aggregate_func_6960(32) && !aggregate_func_2056()) && !aggregate_func_4497(255)) && !ENTITY::IS_ENTITY_DEAD(Global_35))
				{
					func_118();
					aggregate_func_6978(32);
				}
			}
			else if (bVar3)
			{
				aggregate_func_7263(21);
			}
			break;
		case 5:
			if (func_123(Global_1124870->f_1908, Global_1124870->f_1908.f_3))
			{
				if (aggregate_func_3623(iVar0))
				{
					aggregate_func_7263(12);
				}
				else
				{
					aggregate_func_7263(6);
				}
			}
			else
			{
				func_113(vVar8);
				aggregate_func_7263(4);
			}
			break;
		case 6:
			if (aggregate_func_3623(iVar0))
			{
				aggregate_func_7263(12);
				return;
			}
			iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
			if (aggregate_func_4240((Global_1123778->f_865[iVar2 /*7*/])->f_5, 32) && (Global_1123778->f_865[iVar2 /*7*/])->f_4 == ((*Global_1126840)[PLAYER::PLAYER_ID() /*83*/])->f_33.f_3)
			{
				aggregate_func_7263(13);
				return;
			}
			if (aggregate_func_4240((Global_1123778->f_865[iVar2 /*7*/])->f_5, 16) && Global_1124870->f_1899.f_5 != 0)
			{
				aggregate_func_7775(0);
			}
			if (&Global_1123778->f_865[iVar2 /*7*/] != 1 || (Global_1123778->f_865[iVar2 /*7*/])->f_1.f_2 == 0)
			{
				return;
			}
			if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1126840)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23.f_1))
			{
				return;
			}
			if (!func_125())
			{
				aggregate_func_1030();
				aggregate_func_1054();
				return;
			}
			vVar8 = { (Global_1123778->f_865[iVar2 /*7*/])->f_1 };
			aggregate_func_2606(vVar8, &vVar5);
			func_127(vVar8, vVar5);
			aggregate_func_7263(7);
			break;
		case 7:
			if (!VOLUME::_0xA4A4359320345B34(Global_1124870->f_1921.f_1))
			{
				Global_1124870->f_1918++;
				aggregate_func_7263(6);
				return;
			}
			iVar11 = VOLUME::_0xB33A604345F58202(Global_1124870->f_1921.f_1);
			switch (iVar11)
			{
				case 4:
					aggregate_func_7263(8);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_128(VOLUME::_0x351D71B8B72B858B(Global_1124870->f_1921.f_1));
					aggregate_func_7263(9);
					break;
			}
			break;
		case 8:
			if (!func_125())
			{
				aggregate_func_1030();
				aggregate_func_1054();
				aggregate_func_7775(0);
				return;
			}
			if (Global_1124870->f_1919 == 0)
			{
				Global_1124870->f_1919 = MISC::GET_GAME_TIMER();
				Global_1124870->f_1918++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1124870->f_1919) > 2000)
			{
				Global_1124870->f_1919 = 0;
				func_117();
				aggregate_func_1030();
				((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_2 = -2;
				Global_1124870->f_1908 = { ((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33 };
				aggregate_func_7263(5);
			}
			break;
		case 9:
			iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
			if ((Global_1123778->f_865[iVar2 /*7*/])->f_1.f_2 == 0)
			{
				return;
			}
			if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1126840)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23))
			{
				return;
			}
			if (!func_125())
			{
				aggregate_func_1030();
				aggregate_func_1054();
				return;
			}
			vVar8 = { (Global_1123778->f_865[iVar2 /*7*/])->f_1 };
			aggregate_func_2606(vVar8, &vVar5);
			func_129(vVar8, vVar5);
			aggregate_func_7263(10);
			break;
		case 10:
			if (!VOLUME::_0xA4A4359320345B34(Global_1124870->f_1921))
			{
				Global_1124870->f_1918++;
				aggregate_func_7263(9);
				return;
			}
			iVar12 = VOLUME::_0xB33A604345F58202(Global_1124870->f_1921);
			switch (iVar12)
			{
				case 4:
					aggregate_func_7263(11);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_130(VOLUME::_0x351D71B8B72B858B(Global_1124870->f_1921));
					aggregate_func_3502(8);
					aggregate_func_7263(12);
					break;
			}
			break;
		case 11:
			if (!func_125())
			{
				aggregate_func_1030();
				aggregate_func_1054();
				aggregate_func_7775(0);
				return;
			}
			if (Global_1124870->f_1919 == 0)
			{
				Global_1124870->f_1919 = MISC::GET_GAME_TIMER();
				Global_1124870->f_1918++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1124870->f_1919) > 2000)
			{
				Global_1124870->f_1919 = 0;
				func_117();
				aggregate_func_1030();
				((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_2 = -2;
				Global_1124870->f_1908 = { ((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33 };
				aggregate_func_7263(5);
			}
			break;
		case 12:
			if (!bVar4)
			{
				aggregate_func_7263(21);
				Global_1124870->f_1918 = 0;
			}
			else if (func_132(&bVar13))
			{
				Global_1124870->f_1918 = 0;
				func_133();
				func_116();
				aggregate_func_7263(20);
			}
			else if (bVar13)
			{
				Global_1124870->f_1918 = 0;
				aggregate_func_1030();
				func_118();
				func_117();
				aggregate_func_7263(4);
			}
			break;
		case 13:
			if ((!aggregate_func_2056() && CAM::IS_SCREEN_FADED_IN()) && !aggregate_func_4497(255))
			{
				aggregate_func_2916("NET_CAMP_HELP_PLACEMENT_FAIL", 10000, 0, 0, 0, 1);
				aggregate_func_7775(0);
				if (bVar3)
				{
					aggregate_func_7263(14);
				}
				else
				{
					aggregate_func_7263(4);
				}
			}
			break;
		case 14:
			if (bVar3)
			{
				vVar8 = { ((*Global_1123778)[((*Global_1126840)[iVar0 /*83*/])->f_38.f_3 /*27*/])->f_1 };
				aggregate_func_2606(vVar8, &vVar5);
				func_127(vVar8, vVar5);
				aggregate_func_7263(15);
			}
			else
			{
				aggregate_func_1054();
			}
			break;
		case 15:
			if (!func_125())
			{
				aggregate_func_1054();
				return;
			}
			if (!VOLUME::_0xA4A4359320345B34(Global_1124870->f_1921.f_1))
			{
				Global_1124870->f_1918++;
				aggregate_func_7263(14);
				return;
			}
			iVar14 = VOLUME::_0xB33A604345F58202(Global_1124870->f_1921.f_1);
			switch (iVar14)
			{
				case 4:
					aggregate_func_7263(16);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_128(VOLUME::_0x351D71B8B72B858B(Global_1124870->f_1921.f_1));
					aggregate_func_7263(17);
					break;
			}
			break;
		case 16:
			if (!func_125())
			{
				aggregate_func_1054();
				return;
			}
			if (Global_1124870->f_1919 == 0)
			{
				Global_1124870->f_1919 = MISC::GET_GAME_TIMER();
				Global_1124870->f_1918++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1124870->f_1919) > 2000)
			{
				Global_1124870->f_1919 = 0;
				aggregate_func_1030();
				aggregate_func_7263(14);
			}
			break;
		case 17:
			if (bVar3)
			{
				vVar8 = { ((*Global_1123778)[((*Global_1126840)[iVar0 /*83*/])->f_38.f_3 /*27*/])->f_1 };
				aggregate_func_2606(vVar8, &vVar5);
				func_129(vVar8, vVar5);
				aggregate_func_7263(18);
			}
			else
			{
				aggregate_func_1054();
			}
			break;
		case 18:
			if (!func_125())
			{
				aggregate_func_1054();
				return;
			}
			if (!VOLUME::_0xA4A4359320345B34(Global_1124870->f_1921))
			{
				Global_1124870->f_1918++;
				aggregate_func_7263(17);
				return;
			}
			iVar15 = VOLUME::_0xB33A604345F58202(Global_1124870->f_1921);
			switch (iVar15)
			{
				case 4:
					aggregate_func_7263(19);
					break;
				case 1:
				case 2:
					break;
				case 3:
					func_130(VOLUME::_0x351D71B8B72B858B(Global_1124870->f_1921));
					aggregate_func_3502(128);
					func_116();
					aggregate_func_7263(20);
					break;
			}
			break;
		case 19:
			if (!func_125())
			{
				aggregate_func_1054();
				return;
			}
			if (Global_1124870->f_1919 == 0)
			{
				Global_1124870->f_1919 = MISC::GET_GAME_TIMER();
				Global_1124870->f_1918++;
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1124870->f_1919) > 2000)
			{
				Global_1124870->f_1919 = 0;
				aggregate_func_1030();
				aggregate_func_7263(14);
			}
			break;
		case 20:
			if (!bVar3)
			{
				if (bVar4)
				{
					Global_1124870->f_1908 = { aggregate_func_7635() };
					Global_1124870->f_1908.f_3 = 0;
					aggregate_func_7263(5);
				}
				else
				{
					aggregate_func_7263(21);
				}
			}
			else if (bVar4)
			{
				if (func_135(((*Global_1126840)[iVar0 /*83*/])->f_38))
				{
					aggregate_func_2916("GC_CAMP_LOCK", 10000, 0, 0, 0, 1);
					func_117();
					Global_1124870->f_1908 = { aggregate_func_7635() };
					Global_1124870->f_1908.f_3 = 0;
					aggregate_func_7263(5);
				}
				else
				{
					func_136(iVar1);
				}
			}
			else
			{
				aggregate_func_7263(21);
			}
			break;
		case 21:
			if (func_137(iVar1))
			{
				func_116();
				aggregate_func_7263(22);
			}
			break;
		case 22:
			if (bVar4)
			{
				Global_1124870->f_1908 = { aggregate_func_7635() };
				Global_1124870->f_1908.f_3 = 0;
				aggregate_func_7263(5);
			}
			else
			{
				func_138();
			}
			break;
	}
}

void func_60()
{
	bool bVar0;
	struct<2> Var1;

	Var1 = { aggregate_func_4320() };
	bVar0 = aggregate_func_4255(Var1);
	if (bVar0)
	{
		aggregate_func_3090(1024);
	}
	else
	{
		aggregate_func_3608(1024);
	}
}

void func_61()
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<14> Var9;
	var uVar25;

	func_140();
	func_141();
	func_142();
	func_143();
	iVar8 = func_144(&(Global_1273882->f_154[&Global_1273882]));
	if (((iVar8 != 9 && iVar8 > 0) && _NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15)) && !_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
	{
		func_145(0);
		func_146(9);
	}
	switch (iVar8)
	{
		case 0:
			func_147();
			if (aggregate_func_3732(&(Global_1273882->f_154[&Global_1273882])))
			{
				if (func_149())
				{
					func_146(7);
				}
				else
				{
					func_146(2);
				}
			}
			else
			{
				func_146(1);
			}
			break;
		case 1:
			if (aggregate_func_3732(&(Global_1273882->f_154[&Global_1273882])))
			{
				aggregate_func_4293(&(Global_1126800->f_15), 0);
				func_146(2);
			}
			break;
		case 2:
			if (func_151())
			{
				if (!aggregate_func_7591(&Global_1273882, 64))
				{
					func_145(1);
				}
			}
			else if (aggregate_func_7591(&Global_1273882, 64))
			{
				func_145(0);
			}
			if (aggregate_func_3501(PLAYER::PLAYER_ID()) == 0 && !aggregate_func_7591(&Global_1273882, 128))
			{
				func_154("TRADER_HALT_REASON_RESUPPLY", 1638328972);
				func_145(0);
				aggregate_func_6715(8);
				func_146(4);
			}
			iVar6 = (Global_1901929->f_542.f_11 * 60000);
			if (aggregate_func_4260(&(Global_1126800->f_15)) && aggregate_func_4732(&(Global_1126800->f_15)) > iVar6)
			{
				if (func_158())
				{
					func_146(3);
				}
			}
			break;
		case 3:
			if (aggregate_func_5002(Global_1126800) == 3)
			{
				func_146(2);
			}
			break;
		case 4:
			if (aggregate_func_7591(&Global_1273882, 256))
			{
				if (aggregate_func_7591(&Global_1273882, 16384))
				{
					if (aggregate_func_5020(Global_1126800))
					{
						return;
					}
					if (!func_149())
					{
						if (!aggregate_func_7923(Global_1126800, 1027365634 /* GXTEntry: "Quick Resupply" */, 1, 1, 0, -1))
						{
							return;
						}
					}
					func_146(5);
				}
				else if (aggregate_func_7591(&Global_1273882, 256))
				{
					func_163(aggregate_func_1500(914410532, aggregate_func_1967(1), 1784584921, 1, 0, 0));
					aggregate_func_8155(256);
					aggregate_func_8155(8);
					func_146(2);
				}
			}
			break;
		case 5:
			if (func_149())
			{
				aggregate_func_4293(&(Global_1126800->f_18), 0);
				func_146(6);
			}
			break;
		case 6:
			iVar7 = (Global_1901929->f_542.f_13 * 60000);
			if (aggregate_func_4260(&(Global_1126800->f_18)) && aggregate_func_4732(&(Global_1126800->f_18)) > iVar7)
			{
				func_146(7);
			}
			break;
		case 7:
			if (aggregate_func_7591(&Global_1273882, 16384))
			{
				if (aggregate_func_5020(Global_1126800))
				{
					return;
				}
			}
			if (aggregate_func_4260(&(Global_1126800->f_18)))
			{
				aggregate_func_4957(&(Global_1126800->f_18));
			}
			iVar5 = aggregate_func_7189(-1364613333, 0, 1, -1, 1);
			if (!aggregate_func_7725(Global_1126800, -1364613333, Var0, 1, 1, 1, 0, iVar5, -1, 0))
			{
				func_146(2);
				return;
			}
			Var9.f_8 = func_168(-1364613333, 770694722);
			Var9.f_6 = func_168(-1364613333, 914410532);
			Var9.f_13 = 1;
			aggregate_func_8155(16384);
			aggregate_func_8155(256);
			aggregate_func_8155(8);
			func_146(8);
			break;
		case 8:
			if (aggregate_func_5020(Global_1126800))
			{
				return;
			}
			TELEMETRY::_0xF184B3ECE36219CF(Global_1126800->f_1, &uVar25);
			TELEMETRY::_0x476038B5A0734C10(&Var9, &uVar25);
			func_163(aggregate_func_1500(914410532, aggregate_func_1967(1), 1784584921, 1, 0, 0));
			func_146(2);
			break;
		case 9:
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) && _NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
			{
				if (aggregate_func_3732(&(Global_1273882->f_154[&Global_1273882])))
				{
					func_146(2);
				}
				else
				{
					func_146(1);
				}
			}
			break;
	}
}

void func_62()
{
	int iVar0;

	if ((MISC::GET_FRAME_COUNT() % 45) == 0)
	{
		iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
		if (!NETWORK::_0x255A5EF65EDA9167(iVar0))
		{
			return;
		}
		if (Global_1129497->f_339.f_16 != 0 && (Global_1129497->f_339.f_16 != aggregate_func_8168(iVar0) || Global_1129497->f_339.f_16 == aggregate_func_4927(iVar0)))
		{
			UILOG::_UILOG_REMOVE_ENTRY(8, Global_1129497->f_339.f_16);
			Global_1129497->f_339.f_16 = 0;
		}
		else if (aggregate_func_4240(Global_1129497->f_339.f_18, 2))
		{
			aggregate_func_4243(&(Global_1129497->f_339.f_18), 2);
			func_173();
		}
	}
}

void func_70(int iParam0, int iParam1)
{
	if ((Global_1123778->f_865[iParam0 /*7*/])->f_4 != iParam1)
	{
		(Global_1123778->f_865[iParam0 /*7*/])->f_4 = iParam1;
	}
}

void func_71(int iParam0, vector3 vParam1)
{
	(Global_1123778->f_865[iParam0 /*7*/])->f_1 = { vParam1 };
}

void func_72(int iParam0, int iParam1)
{
	if (&Global_1123778->f_865[iParam0 /*7*/] != iParam1)
	{
		Global_1123778->f_865[iParam0 /*7*/] = iParam1;
	}
}

int func_73(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -1;
	}
	if (!aggregate_func_4683())
	{
		return -1;
	}
	if (iParam0 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (((*Global_1123778)[iVar0 /*27*/])->f_9 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_75(int iParam0, int iParam1)
{
	if (!aggregate_func_4598(iParam0))
	{
		return;
	}
	if (Global_1123778[iParam0 /*27*/] != iParam1)
	{
		(*Global_1123778)[iParam0 /*27*/] = iParam1;
	}
}

bool func_78(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (aggregate_func_2991(32))
	{
		if (aggregate_func_7984(vParam0.z))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (aggregate_func_2991(64))
	{
		iVar0 = func_176(vParam0);
		if (iVar0 == 0)
		{
			return false;
		}
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
		{
			return false;
		}
	}
	if (func_177(vParam0, bParam7))
	{
		return false;
	}
	if (!bParam9 && VOLUME::_0x397769175A7DBB30(vParam4, Global_1901929->f_542.f_5, 0, 0, 0))
	{
		return false;
	}
	if (!bParam9 && VOLUME::_0x397769175A7DBB30(vParam4, Global_1901929->f_542.f_4, 0, func_178(), 0))
	{
		return false;
	}
	if (bParam10 == 0 && func_179(vParam4))
	{
		return false;
	}
	if (bParam10 == 0 && func_180(vParam4, bParam3))
	{
		return false;
	}
	return true;
}

int func_79(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (((*Global_1123778)[iVar0 /*27*/])->f_1.f_2 == 0)
		{
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 >= 32)
	{
		return -1;
	}
	*((*Global_1123778)[iVar0 /*27*/]) = { *iParam0 };
	SCRIPTS::_0x31010318BA9897AC(&(Global_1123778->f_1091), ((*Global_1123778)[iVar0 /*27*/])->f_9);
	return iVar0;
}

bool func_81(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4)
{
	vector3 vVar0;

	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return false;
	}
	vVar0 = { *uParam1 };
	if (func_182(&vVar0, iParam0, bParam2, iParam3, uParam4))
	{
		*uParam1 = { vVar0 };
		return true;
	}
	return false;
}

void func_82(int iParam0)
{
	int iVar0;

	if (Global_1123778[iParam0 /*27*/] == 0)
	{
		return;
	}
	iVar0 = aggregate_func_8300(iParam0, 0);
	if (!aggregate_func_8310(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_75(iParam0, 3);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		func_75(iParam0, 3);
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
	{
		func_75(iParam0, 3);
	}
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = NETWORK::GET_NETWORK_TIME();
	if (((*Global_1123778)[iParam0 /*27*/])->f_26 == 0)
	{
		((*Global_1123778)[iParam0 /*27*/])->f_26 = iVar0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(((*Global_1123778)[iParam0 /*27*/])->f_26, iVar0) > 12000)
	{
		((*Global_1123778)[iParam0 /*27*/])->f_26 = iVar0;
	}
	else
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1123778)[iParam0 /*27*/])->f_9))
	{
		return;
	}
	if (aggregate_func_4240(((*Global_1126840)[((*Global_1123778)[iParam0 /*27*/])->f_9 /*83*/])->f_33.f_4, 128))
	{
		iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(((*Global_1123778)[iParam0 /*27*/])->f_9);
		if (!aggregate_func_4240((Global_1123778->f_865[iVar1 /*7*/])->f_5, 128))
		{
			((*Global_1123778)[iParam0 /*27*/])->f_23.f_1 = ((*Global_1126840)[((*Global_1123778)[iParam0 /*27*/])->f_9 /*83*/])->f_38.f_23.f_1;
			((*Global_1123778)[iParam0 /*27*/])->f_23 = ((*Global_1126840)[((*Global_1123778)[iParam0 /*27*/])->f_9 /*83*/])->f_38.f_23;
			((*Global_1123778)[iParam0 /*27*/])->f_25 = 0;
			aggregate_func_4247(&((Global_1123778->f_865[iVar1 /*7*/])->f_5), 128);
		}
	}
	iVar2 = _NAMESPACE26::_0x901E0DC25080C8B9(((*Global_1123778)[iParam0 /*27*/])->f_9);
	iVar4 = 0;
	while (iVar4 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar4)))
		{
			if (_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::INT_TO_PLAYERINDEX(iVar4)) != iVar2)
			{
				SCRIPTS::_0x31010318BA9897AC(&iVar3, iVar4);
			}
		}
		iVar4++;
	}
	if (iVar3 != ((*Global_1123778)[iParam0 /*27*/])->f_25)
	{
		((*Global_1123778)[iParam0 /*27*/])->f_25 = iVar3;
		VOLUME::_0xEBA87B9273835CF3(((*Global_1123778)[iParam0 /*27*/])->f_23.f_1, &iVar3);
		VOLUME::_0xEBA87B9273835CF3(((*Global_1123778)[iParam0 /*27*/])->f_23, &iVar3);
	}
}

void func_84(int iParam0)
{
	int iVar0;
	struct<7> Var1[7];
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	bool bVar56;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1123778)[iParam0 /*27*/])->f_9))
	{
		return;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(((*Global_1123778)[iParam0 /*27*/])->f_9);
	iVar51 = _NAMESPACE26::_0xD1BF325C8252A982(iVar0, &Var1);
	if (iVar51 > ((*Global_1123778)[iParam0 /*27*/])->f_1)
	{
		return;
	}
	iVar53 = 0;
	while (iVar53 <= (((*Global_1123778)[iParam0 /*27*/])->f_1 - 1))
	{
		if (&((*Global_1123778)[iParam0 /*27*/])->f_10[iVar53] != 255)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(((*Global_1123778)[iParam0 /*27*/])->f_10[iVar53])))
			{
				((*Global_1123778)[iParam0 /*27*/])->f_10[iVar53] = 255;
			}
			else if (_NAMESPACE26::_0x901E0DC25080C8B9(&(((*Global_1123778)[iParam0 /*27*/])->f_10[iVar53])) != iVar0)
			{
				((*Global_1123778)[iParam0 /*27*/])->f_10[iVar53] = 255;
			}
		}
		else if (iVar53 >= iVar51)
		{
		}
		else
		{
			iVar55 = 0;
			while (iVar55 <= iVar53)
			{
				if (aggregate_func_3096(*(Var1[iVar55 /*7*/])))
				{
					iVar52 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var1[iVar55 /*7*/]);
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar52))
					{
						bVar56 = true;
						iVar54 = 0;
						while (iVar54 <= (((*Global_1123778)[iParam0 /*27*/])->f_1 - 1))
						{
							if (&((*Global_1123778)[iParam0 /*27*/])->f_10[iVar54] == iVar52)
							{
								bVar56 = false;
							}
							else
							{
								iVar54++;
							}
						}
					}
				}
				if (bVar56 == 1)
				{
				}
				else
				{
					iVar55++;
				}
			}
			if (bVar56)
			{
				((*Global_1123778)[iParam0 /*27*/])->f_10[iVar53] = iVar52;
			}
		}
		iVar53++;
	}
}

void func_85(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar2)) && ((*Global_1126840)[iVar2 /*83*/])->f_70.f_2 != 0) && ((*Global_1126840)[iVar2 /*83*/])->f_70 == iParam0)
		{
			bVar0 = true;
			iVar1 = ((*Global_1126840)[iVar2 /*83*/])->f_70.f_2;
			((*Global_1123778)[iParam0 /*27*/])->f_18 = (((*Global_1123778)[iParam0 /*27*/])->f_18 || ((*Global_1126840)[iVar2 /*83*/])->f_70.f_1);
		}
		iVar2++;
	}
	if (bVar0)
	{
		if (((*Global_1123778)[iParam0 /*27*/])->f_18.f_1 != iVar1)
		{
			((*Global_1123778)[iParam0 /*27*/])->f_18.f_1 = iVar1;
		}
	}
	else if (((*Global_1123778)[iParam0 /*27*/])->f_18.f_1 != 0)
	{
		((*Global_1123778)[iParam0 /*27*/])->f_18.f_1 = 0;
		((*Global_1123778)[iParam0 /*27*/])->f_18 = 0;
	}
}

void func_86(int iParam0)
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_185(), iParam0, false, 0) && NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_186(), iParam0, false, 0))
	{
		func_75(iParam0, 2);
	}
}

void func_87(int iParam0)
{
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_185(), iParam0, false, 0))
	{
		func_75(iParam0, 1);
	}
}

void func_88(int iParam0)
{
	func_187(iParam0);
	func_188((*Global_1123778)[iParam0 /*27*/]);
	func_75(iParam0, 0);
}

void func_89()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1126800->f_39 = 0;
	((*Global_1126840)[iVar0 /*83*/])->f_74 = Global_1126800->f_32;
	((*Global_1126840)[iVar0 /*83*/])->f_74.f_1 = Global_1126800->f_33;
}

void func_90()
{
	if (aggregate_func_6960(512))
	{
		aggregate_func_3090(65536);
	}
	else if (aggregate_func_6960(256))
	{
		aggregate_func_3090(32768);
	}
}

void func_93(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bool bVar0;
	int iVar1;

	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	bVar0 = -1411330704; /* GXTEntry: "Fast Travel Post" */
	if (aggregate_func_2850(bVar0, 1))
	{
		((*Global_1126840)[iVar1 /*83*/])->f_38.f_12.f_3 = bVar0;
	}
	bVar0 = 1642014154; /* GXTEntry: "Stew Pot" */
	if (aggregate_func_2850(bVar0, 1))
	{
		((*Global_1126840)[iVar1 /*83*/])->f_38.f_12.f_1 = bVar0;
	}
	bVar0 = -428390721; /* GXTEntry: "Butcher Table" */
	if (aggregate_func_2850(bVar0, 1))
	{
		((*Global_1126840)[iVar1 /*83*/])->f_38.f_12 = bVar0;
	}
	bVar0 = -1396511102; /* GXTEntry: "Deluxe Campfire" */
	if (aggregate_func_2850(bVar0, 1))
	{
		((*Global_1126840)[iVar1 /*83*/])->f_38.f_12.f_6 = bVar0;
	}
	bVar0 = 913131737; /* GXTEntry: "Small Delivery Wagon" */
	if (aggregate_func_2850(bVar0, 1))
	{
		((*Global_1126840)[iVar1 /*83*/])->f_38.f_12.f_2 = bVar0;
	}
	bVar0 = 1476279059; /* GXTEntry: "Medium Delivery Wagon" */
	if (aggregate_func_2850(bVar0, 1))
	{
		((*Global_1126840)[iVar1 /*83*/])->f_38.f_12.f_2 = bVar0;
	}
	bVar0 = -1490861779; /* GXTEntry: "Large Delivery Wagon" */
	if (aggregate_func_2850(bVar0, 1))
	{
		((*Global_1126840)[iVar1 /*83*/])->f_38.f_12.f_2 = bVar0;
	}
}

void func_94()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (aggregate_func_2850(-1577890561, 1))
	{
		if (aggregate_func_2850(1778670882 /* GXTEntry: "Harmonica Piece" */, 1))
		{
			((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 11;
		}
		else if (aggregate_func_2850(1826251470 /* GXTEntry: "Harmonica Piece" */, 1))
		{
			((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 10;
		}
		else
		{
			((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 9;
		}
	}
	else if (aggregate_func_2850(-342106029, 1))
	{
		if (aggregate_func_2850(1778670882 /* GXTEntry: "Harmonica Piece" */, 1))
		{
			((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 8;
		}
		else if (aggregate_func_2850(1826251470 /* GXTEntry: "Harmonica Piece" */, 1))
		{
			((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 7;
		}
		else
		{
			((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 6;
		}
	}
	else if (aggregate_func_2850(2113111296, 1))
	{
		if (aggregate_func_2850(1778670882 /* GXTEntry: "Harmonica Piece" */, 1))
		{
			((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 5;
		}
		else if (aggregate_func_2850(1826251470 /* GXTEntry: "Harmonica Piece" */, 1))
		{
			((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 4;
		}
		else
		{
			((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 3;
		}
	}
	else if (aggregate_func_2850(1778670882 /* GXTEntry: "Harmonica Piece" */, 1))
	{
		((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 2;
	}
	else if (aggregate_func_2850(1826251470 /* GXTEntry: "Harmonica Piece" */, 1))
	{
		((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 1;
	}
	else
	{
		((*Global_1126840)[iVar0 /*83*/])->f_38.f_26 = 0;
	}
}

void func_102(int iParam0)
{
	struct<14> Var0;

	Var0.f_8 = iParam0;
	SCRIPTS::_0x31010318BA9897AC(&(Var0.f_11), PLAYER::PLAYER_ID());
	aggregate_func_1437(11, Var0, Var0.f_11);
}

void func_103(int iParam0, int iParam1)
{
	if (!aggregate_func_4598(iParam0))
	{
		return;
	}
	if (&Global_1124870->f_1[iParam0 /*59*/] != iParam1)
	{
		Global_1124870->f_1[iParam0 /*59*/] = iParam1;
	}
}

void func_104(int iParam0, vector3 vParam1, var uParam4)
{
	struct<14> Var0;

	Var0.f_8 = iParam0;
	SCRIPTS::_0x31010318BA9897AC(&(Var0.f_11), PLAYER::PLAYER_ID());
	func_195(10, Var0, vParam1, Var0.f_11, uParam4);
}

void func_105(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;

	if (!bParam1)
	{
		aggregate_func_1801(&((Global_1124870->f_1[iParam0 /*59*/])->f_2), 0);
		return;
	}
	if (!func_196(iParam0))
	{
		aggregate_func_1801(&((Global_1124870->f_1[iParam0 /*59*/])->f_2), 0);
		return;
	}
	if (!aggregate_func_2991(16))
	{
		aggregate_func_1801(&((Global_1124870->f_1[iParam0 /*59*/])->f_2), 0);
		return;
	}
	iVar0 = aggregate_func_2696(iParam0, 0);
	iVar1 = Global_1273882->f_15;
	bVar2 = (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && ((*Global_1123778)[iParam0 /*27*/])->f_9 == PLAYER::PLAYER_ID());
	bVar3 = ((!bVar2 && iVar0 == iVar1) && _NAMESPACE26::_0x424B17A7DC5C90BC(((*Global_1123778)[iParam0 /*27*/])->f_9));
	bVar4 = aggregate_func_3733((Global_1124870->f_1[iParam0 /*59*/])->f_2);
	if ((!bVar2 && !bVar3) && BUILTIN::VDIST(Global_36, aggregate_func_4966(iParam0)) > 75f)
	{
		if (bVar4)
		{
			aggregate_func_1801(&((Global_1124870->f_1[iParam0 /*59*/])->f_2), 0);
		}
		return;
	}
	bVar5 = aggregate_func_2991(1024);
	bVar6 = func_200(1);
	if (!bVar4)
	{
		if (((bVar2 || bVar3) && Global_1124870->f_1917 != iParam0) && Global_1124870->f_1917 != -1)
		{
			aggregate_func_1801(&((Global_1124870->f_1[Global_1124870->f_1917 /*59*/])->f_2), 0);
		}
		if (bVar2 || bVar3)
		{
			aggregate_func_7263(iParam0);
		}
		if (bVar5)
		{
			if (bVar2 || bVar3)
			{
				if (!bVar6)
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
		iVar7 = ((*Global_1123778)[iParam0 /*27*/])->f_1.f_1;
		(Global_1124870->f_1[iParam0 /*59*/])->f_2 = aggregate_func_3637(aggregate_func_3339(aggregate_func_4966(iParam0), 1), func_203((bVar2 || bVar3)), aggregate_func_4966(iParam0), -1);
		if ((Global_1124870->f_1[iParam0 /*59*/])->f_2 == -1)
		{
			return;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), "NET_CAMP_BLIP_POSSE");
		MAP::SET_BLIP_FLASH_TIMER(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), func_203((bVar2 || bVar3)), func_205(iVar7, (bVar2 || bVar3), bVar2));
		if (aggregate_func_2991(512))
		{
			if (bVar5 == 0)
			{
				MAP::_0x662D364ABF16DE2F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), 580546400);
				MAP::_0x662D364ABF16DE2F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), 1784012766);
				(Global_1124870->f_1[iParam0 /*59*/])->f_58 = MISC::GET_GAME_TIMER();
			}
			aggregate_func_3608(512);
		}
	}
	else
	{
		if (Global_1124870->f_1917 == iParam0)
		{
			if ((Global_1124870->f_1917 != -1 && !bVar2) && !bVar3)
			{
				aggregate_func_1801(&((Global_1124870->f_1[iParam0 /*59*/])->f_2), 0);
				return;
			}
		}
		else if (Global_1124870->f_1917 != -1 && (bVar2 || bVar3))
		{
			aggregate_func_1801(&((Global_1124870->f_1[iParam0 /*59*/])->f_2), 0);
			return;
		}
		if (!bVar2 && !bVar3)
		{
			if (aggregate_func_3736(iParam0, 2))
			{
				MAP::_0x662D364ABF16DE2F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), 1586775858);
			}
			else
			{
				MAP::_0x662D364ABF16DE2F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), 1635604685);
			}
		}
		if (aggregate_func_7979(iParam0) && (!(bVar3 || bVar2) || !bVar5))
		{
			MAP::_0x662D364ABF16DE2F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), 892550176);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), 892550176);
		}
		if (bVar5 && (!(bVar3 || bVar2) || !bVar6))
		{
			MAP::_0xB059D7BD3D78C16F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), 580546400);
			MAP::_0xB059D7BD3D78C16F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), 1784012766);
			(Global_1124870->f_1[iParam0 /*59*/])->f_58 = 0;
			MAP::_0x662D364ABF16DE2F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), -211388321);
		}
		else
		{
			MAP::_0xB059D7BD3D78C16F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), -211388321);
		}
		if ((Global_1124870->f_1[iParam0 /*59*/])->f_58 != 0 && (MISC::GET_GAME_TIMER() - (Global_1124870->f_1[iParam0 /*59*/])->f_58) > 20000)
		{
			MAP::_0xB059D7BD3D78C16F(aggregate_func_8184((Global_1124870->f_1[iParam0 /*59*/])->f_2), 1784012766);
			(Global_1124870->f_1[iParam0 /*59*/])->f_58 = 0;
		}
	}
}

void func_106(int iParam0, bool bParam1)
{
	struct<2> Var0;

	if (!bParam1)
	{
		return;
	}
	if (!aggregate_func_4598(iParam0))
	{
		return;
	}
	if (!_NAMESPACE26::_0x9BE7DCB22D32CCBE(aggregate_func_2696(iParam0, 0), PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (aggregate_func_4710(PLAYER::PLAYER_ID()) == iParam0 && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		Var0 = { aggregate_func_4259(0) };
		if (aggregate_func_4255(Var0) && aggregate_func_4521(Var0))
		{
			if ((((((Var0 == 2 || Var0 == 3) || Var0 == 4) || Var0 == 5) || Var0 == 8) || Var0 == 7) || Var0 == 6)
			{
				if (!aggregate_func_7398(iParam0, 32) && !aggregate_func_3736(iParam0, 4096))
				{
					if (aggregate_func_3736(iParam0, 16))
					{
						aggregate_func_3737(iParam0, 2048);
					}
					else
					{
						aggregate_func_3802(iParam0, 2048);
					}
					func_212(iParam0);
					aggregate_func_3737(iParam0, 4096);
				}
			}
		}
		else if (aggregate_func_7398(iParam0, 32))
		{
			aggregate_func_5463(iParam0);
			aggregate_func_3802(iParam0, 4096);
			if (aggregate_func_3736(iParam0, 2048))
			{
				aggregate_func_7980(iParam0);
				aggregate_func_3802(iParam0, 2048);
			}
		}
	}
	if (aggregate_func_7979(iParam0))
	{
		if (aggregate_func_6960(16))
		{
			aggregate_func_6978(16);
		}
	}
	else if (!aggregate_func_6960(16))
	{
		aggregate_func_6978(16);
	}
}

void func_107(int iParam0)
{
	if (!func_12())
	{
		return;
	}
	if (aggregate_func_2991(4))
	{
		return;
	}
	if (!aggregate_func_7490(iParam0, 8))
	{
		func_217(iParam0);
		func_218(iParam0);
		func_219(iParam0);
		func_220(iParam0);
		func_221(iParam0);
		func_222(iParam0);
		aggregate_func_7978(iParam0, 8);
	}
	if (BUILTIN::VDIST(Global_36, aggregate_func_4966(iParam0)) >= Global_1901929->f_542)
	{
		return;
	}
	if ((Global_1124870->f_1[iParam0 /*59*/])->f_1 == 0)
	{
		func_224(iParam0, 1);
	}
	switch ((Global_1124870->f_1[iParam0 /*59*/])->f_1)
	{
		case 0:
			func_224(iParam0, 1);
			break;
		case 1:
			if (func_225(iParam0))
			{
				aggregate_func_3737(iParam0, 1);
				aggregate_func_3090(256);
				func_224(iParam0, 2);
			}
			break;
		case 2:
			if (func_226(iParam0))
			{
				func_224(iParam0, 3);
			}
			break;
		case 3:
			aggregate_func_3737(iParam0, 1);
			aggregate_func_3090(256);
			func_103(iParam0, 2);
			break;
	}
}

void func_108(int iParam0)
{
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1124870->f_1924) || Global_1124870->f_1925 != iParam0)
	{
		aggregate_func_3802(iParam0, 1);
		aggregate_func_3802(iParam0, 2);
		func_224(iParam0, 0);
		func_103(iParam0, 1);
	}
	if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1124870->f_1926) || Global_1124870->f_1927 != iParam0)
	{
		aggregate_func_3802(iParam0, 1024);
	}
}

void func_109(int iParam0)
{
	if ((aggregate_func_3736(iParam0, 1) && SCRIPTS::_DOES_THREAD_EXIST(Global_1124870->f_1924)) && Global_1124870->f_1925 == iParam0)
	{
		return;
	}
	aggregate_func_5016((*(*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])[iParam0]);
	func_228(Global_1124870->f_1[iParam0 /*59*/]);
	func_103(iParam0, 0);
	func_224(iParam0, 0);
}

void func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((MISC::GET_FRAME_COUNT() % 3) != 0)
	{
		return;
	}
	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(iParam0);
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
	iVar2 = aggregate_func_2378(iVar1);
	if (iVar2 != aggregate_func_4710(PLAYER::PLAYER_ID()))
	{
		func_230(iVar2);
	}
}

void func_113(vector3 vParam0)
{
	((*Global_1126840)[aggregate_func_4294() /*83*/])->f_38 = { vParam0 };
	func_233(vParam0);
}

void func_116()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1126840)[iVar0 /*83*/])->f_38.f_7 = -1;
	((*Global_1126840)[iVar0 /*83*/])->f_38.f_8 = { 0f, 0f, 0f };
}

void func_117()
{
	if (aggregate_func_4240(Global_1129497->f_8, 2))
	{
		aggregate_func_4247(&(Global_1129497->f_8), 2);
	}
}

void func_118()
{
	if ((Global_1129497->f_382 < 3 && aggregate_func_2991(64)) && !aggregate_func_2056())
	{
		aggregate_func_2916("NET_CAMP_HELP_NO_CAMP", 10000, 0, 0, 0, 1);
		Global_1129497->f_382++;
	}
}

bool func_123(vector3 vParam0, bool bParam3)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { vParam0 };
	if ((aggregate_func_4683() && aggregate_func_2991(64)) && aggregate_func_572(0, 1))
	{
		if (vVar1.z != 0)
		{
			if (func_236())
			{
				if (aggregate_func_1320(vVar1, 1))
				{
					iVar0 = 1;
				}
			}
			else
			{
				if (!aggregate_func_682(Global_1273882->f_15))
				{
				}
				if (bParam3)
				{
					if (!aggregate_func_7985(vVar1, 1))
					{
						iVar0 = 0;
					}
					else if (aggregate_func_1320(vVar1, 0))
					{
						iVar0 = 1;
						aggregate_func_7775(1);
					}
				}
				else if (aggregate_func_1320(vVar1, 0))
				{
					iVar0 = 1;
				}
			}
		}
	}
	return iVar0;
}

bool func_125()
{
	return Global_1124870->f_1918 < 10;
}

void func_127(vector3 vParam0, vector3 vParam3)
{
	struct<8> Var0;

	Var0 = { vParam3 };
	Var0.f_4 = Global_1901929->f_542.f_5;
	Var0.f_5 = 32;
	Var0.f_6 = func_242();
	Var0.f_7 = func_176(vParam0);
	Global_1124870->f_1921.f_1 = VOLUME::_0x183C0B6CFEFFCAE4(&Var0);
}

void func_128(int iParam0)
{
	if (((*Global_1126840)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23.f_1 != iParam0)
	{
		((*Global_1126840)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23.f_1 = iParam0;
	}
}

void func_129(vector3 vParam0, vector3 vParam3)
{
	struct<8> Var0;

	Var0 = { vParam3 + Vector(1f, 0f, 0f) };
	Var0.f_4 = Global_1901929->f_542.f_4;
	Var0.f_5 = 40;
	Var0.f_6 = func_178();
	Var0.f_7 = func_176(vParam0);
	Global_1124870->f_1921 = VOLUME::_0x183C0B6CFEFFCAE4(&Var0);
}

void func_130(int iParam0)
{
	if (((*Global_1126840)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23 != iParam0)
	{
		((*Global_1126840)[PLAYER::PLAYER_ID() /*83*/])->f_38.f_23 = iParam0;
	}
}

bool func_132(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if ((Global_1123778->f_865[iVar1 /*7*/])->f_4 != ((*Global_1126840)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/])->f_33.f_3)
	{
		return false;
	}
	if (aggregate_func_4240((Global_1123778->f_865[iVar1 /*7*/])->f_5, 32))
	{
		*bParam0 = 1;
		return false;
	}
	if (&Global_1123778->f_865[iVar1 /*7*/] != 6)
	{
		return false;
	}
	iVar2 = aggregate_func_2378(iVar0);
	if (aggregate_func_4598(iVar2))
	{
		vVar3 = { ((*Global_1123778)[iVar2 /*27*/])->f_1 };
		vVar6 = { aggregate_func_4966(iVar2) };
		func_113(vVar3);
		func_243(vVar6);
		iVar9 = aggregate_func_3339(vVar6, 1);
		func_244(iVar9);
		aggregate_func_8196(vVar3);
		TELEMETRY::_0xA72773C3134F9A57(vVar3.x, vVar3.z, vVar3.y, aggregate_func_4927(PLAYER::NETWORK_PLAYER_ID_TO_INT()), vVar6);
		if (_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15) && _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_246(Global_1273882->f_15, vVar3.x);
			POSSE::_0xC08AFF658B2E51DA(&iVar10);
			if (iVar10 != 0)
			{
				Global_1180694->f_14.f_7 = iVar10;
				Global_1180694->f_14.f_9 = Global_1273882->f_15;
				Global_1180694->f_14.f_12 = vVar3.x;
				Global_1180694->f_14.f_13 = vVar3.y;
				Global_1180694->f_1 = 10;
			}
		}
		if (aggregate_func_2991(64))
		{
			if (Global_1124870->f_1899.f_4 == -15)
			{
				Global_1124870->f_1899.f_4 = aggregate_func_8727();
			}
		}
		func_230(iVar2);
		return true;
	}
	return false;
}

void func_133()
{
	if (!aggregate_func_4240(Global_1129497->f_8, 2))
	{
		aggregate_func_4247(&(Global_1129497->f_8), 2);
	}
}

bool func_135(vector3 vParam0)
{
	int iVar0;

	if (!aggregate_func_2991(64))
	{
		return false;
	}
	iVar0 = func_176(vParam0);
	if (iVar0 != 0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

void func_136(int iParam0)
{
	if ((iParam0 < 0 || iParam0 >= 32) || ((*Global_1123778)[iParam0 /*27*/])->f_9 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (((*Global_1126840)[aggregate_func_4294() /*83*/])->f_38.f_2 != ((*Global_1123778)[iParam0 /*27*/])->f_1.f_2)
	{
		func_113(((*Global_1123778)[iParam0 /*27*/])->f_1);
	}
	func_248();
	func_249(iParam0);
	func_250(iParam0, ((*Global_1123778)[iParam0 /*27*/])->f_1);
	func_251(iParam0);
	func_252(iParam0);
}

bool func_137(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	aggregate_func_1030();
	if (((*Global_1123778)[iParam0 /*27*/])->f_9 == 255)
	{
		return false;
	}
	if ((*Global_1123778)[iParam0 /*27*/])->f_9 != _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	vVar0 = { ((*Global_1123778)[iParam0 /*27*/])->f_1 };
	func_113(vVar0);
	aggregate_func_3090(4096);
	if (aggregate_func_7983())
	{
		aggregate_func_7775(0);
	}
	func_117();
	return true;
}

void func_138()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar1 = iVar0;
		iVar2 = PLAYER::PLAYER_ID();
		if ((((iVar1 < 32 && iVar1 >= 0) && iVar2 < 32) && iVar2 >= 0) && (((*Global_1126840)[iVar2 /*83*/])->f_38.f_2 != ((*Global_1126840)[iVar1 /*83*/])->f_38.f_2 || ((*Global_1126840)[iVar2 /*83*/])->f_38 != ((*Global_1126840)[iVar1 /*83*/])->f_38))
		{
			func_113(((*Global_1126840)[iVar1 /*83*/])->f_38);
		}
	}
	if (((aggregate_func_2991(4096) && !aggregate_func_4625()) && CAM::IS_SCREEN_FADED_IN()) && !aggregate_func_4497(255))
	{
		iVar3 = aggregate_func_4710(PLAYER::PLAYER_ID());
		if (aggregate_func_4598(iVar3))
		{
			if (aggregate_func_3733((Global_1124870->f_1[iVar3 /*59*/])->f_2) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1123778)[iVar3 /*27*/])->f_9))
			{
				sVar4 = MISC::_CREATE_VAR_STRING(10, "GC_CAMP_MERGE", aggregate_func_1524(aggregate_func_2320(((*Global_1123778)[iVar3 /*27*/])->f_9), -963477619), aggregate_func_8184((Global_1124870->f_1[iVar3 /*59*/])->f_2));
				_NAMESPACE71::_0xDD1232B332CBB9E7(1, 1, 1);
				Global_1129497->f_375 = aggregate_func_2916(sVar4, 10000, 0, 0, 0, 1);
				Global_1129497->f_376 = Global_1273882->f_15;
				aggregate_func_3608(4096);
			}
		}
	}
	func_248();
}

void func_140()
{
	int iVar0;

	if (Global_1126800->f_39 == 0)
	{
		Global_1126800->f_39++;
	}
	else if (Global_1126800->f_39 >= 60)
	{
		Global_1126800->f_39 = 0;
		return;
	}
	else
	{
		Global_1126800->f_39++;
		return;
	}
	if (func_256())
	{
		if (!aggregate_func_7591(&Global_1273882, 1))
		{
			aggregate_func_6715(1);
		}
	}
	else if (aggregate_func_7591(&Global_1273882, 1))
	{
		aggregate_func_8155(1);
	}
	func_257(aggregate_func_1500(770694722, aggregate_func_1967(1), 1784584921, 1, 0, 0));
	func_258(aggregate_func_1500(-735397297, aggregate_func_1967(1), 1784584921, 1, 0, 0));
	func_163(aggregate_func_1500(914410532, aggregate_func_1967(1), 1784584921, 1, 0, 0));
	if (aggregate_func_880() == -1490861779)
	{
		iVar0 = 100;
	}
	else if (aggregate_func_880() == 1476279059)
	{
		iVar0 = 50;
	}
	else
	{
		iVar0 = 25;
	}
	func_260(iVar0);
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_21))
	{
		return;
	}
	iVar3 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	iVar4 = aggregate_func_3501(iVar3);
	iVar5 = aggregate_func_3501(iVar3);
	iVar6 = 0;
	if (Global_1939221->f_10478 != 0)
	{
		iVar7 = func_263(Global_1939221->f_10478);
		iVar6 = func_168(iVar7, 770694722);
		if (aggregate_func_2852(Global_1939221->f_10478, 1064293907))
		{
			if (aggregate_func_7162())
			{
				iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 1.25f));
			}
		}
		else if ((INVENTORY::_0x245D07651B1D183B(Global_1939221->f_10478, 268435456) || INVENTORY::_0x245D07651B1D183B(Global_1939221->f_10478, 134217728)) || aggregate_func_2852(Global_1939221->f_10478, 1888974372))
		{
			iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 0.4f));
		}
		else
		{
			iVar6 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar6) * 0.6f));
		}
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_23))
	{
		if ((aggregate_func_4685(29) && UIAPPS::_IS_APP_ACTIVE(-4058091)) && Global_1939221->f_38.f_203 > 0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1126800->f_23, (iVar6 + iVar4));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1126800->f_23, false);
		}
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_22))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1126800->f_22, iVar4);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_24))
	{
		iVar0 = func_267(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1126800->f_24, iVar0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_26))
	{
		if (aggregate_func_4240(Global_1129497->f_339.f_18, 1))
		{
			iVar1 = func_268(iVar3);
			aggregate_func_4243(&(Global_1129497->f_339.f_18), 1);
		}
		else
		{
			iVar1 = func_269(iVar3);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1126800->f_26, iVar1);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_27))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1126800->f_27, iVar5);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_28))
	{
		iVar0 = func_270(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1126800->f_28, iVar0);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_29))
	{
		iVar2 = aggregate_func_3501(iVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1126800->f_29, iVar2);
	}
	if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_31))
	{
		if (aggregate_func_7591(iVar3, 32) || UIAPPS::_IS_APP_ACTIVE(-4058091))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1126800->f_31, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1126800->f_31, false);
		}
	}
}

void func_142()
{
	if (func_272())
	{
		if (!aggregate_func_7591(&Global_1273882, 4096))
		{
			HUD::_0x8BC7C1F929D07BF3(2077578434);
			HUD::_0x4CC5F2FC1332577F(-782493871);
			aggregate_func_6715(4096);
		}
	}
	else if (aggregate_func_7591(&Global_1273882, 4096))
	{
		HUD::_0x8BC7C1F929D07BF3(-782493871);
		aggregate_func_8155(4096);
	}
}

void func_143()
{
	var uVar0;
	struct<14> Var4;
	var uVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) || !_NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		return;
	}
	if (Global_1126800->f_34 != 255)
	{
		iVar19 = Global_1126800->f_34;
		if ((((iVar19 >= 0 && iVar19 < 32) && ((*Global_1126840)[iVar19 /*83*/])->f_74.f_6 > 0) && ((*Global_1126840)[iVar19 /*83*/])->f_74.f_7 == Global_1126800->f_37) && Global_1126800->f_37 != -1)
		{
			return;
		}
		else
		{
			Global_1126800->f_34 = 255;
		}
	}
	iVar21 = 0;
	while (iVar21 <= 31)
	{
		iVar20 = PLAYER::INT_TO_PLAYERINDEX(iVar21);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar20) && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar20))
		{
			if (((*Global_1126840)[iVar21 /*83*/])->f_74.f_8 != 0 && ((*Global_1126840)[iVar21 /*83*/])->f_74.f_6 > 0)
			{
				if (func_273(&uVar0, ((*Global_1126840)[iVar21 /*83*/])->f_74.f_8, ((*Global_1126840)[iVar21 /*83*/])->f_74.f_6, 0))
				{
					SCRIPTS::_0x31010318BA9897AC(&uVar18, iVar21);
					Global_1126800->f_34 = iVar20;
					Global_1126800->f_37 = ((*Global_1126840)[iVar21 /*83*/])->f_74.f_7;
					aggregate_func_1437(22, Var4, uVar18);
				}
			}
			else
			{
				iVar21++;
			}
		}
	}
}

int func_144(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return iVar0;
	}
	iVar1 = iParam0;
	return ((*Global_1126840)[iVar1 /*83*/])->f_74.f_1;
}

void func_145(bool bParam0)
{
	if (bParam0)
	{
		aggregate_func_4480(&(Global_1126800->f_15));
		aggregate_func_6715(64);
	}
	else
	{
		aggregate_func_4957(&(Global_1126800->f_15));
		aggregate_func_8155(64);
	}
}

void func_146(int iParam0)
{
	((*Global_1126840)[&Global_1273882 /*83*/])->f_74.f_1 = iParam0;
	Global_1126800->f_33 = ((*Global_1126840)[&Global_1273882 /*83*/])->f_74.f_1;
}

void func_147()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	iVar3 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		return;
	}
	bVar4 = aggregate_func_3501(iVar3);
	bVar5 = aggregate_func_3501(iVar3);
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_21))
	{
		Global_1126800->f_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Trader_ProgressBars");
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_22))
	{
		Global_1126800->f_22 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1126800->f_21, "TraderMaterialsValue", bVar4);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_23))
	{
		Global_1126800->f_23 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1126800->f_21, "TraderMaterialsDeltaValue", false);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_25))
	{
		Global_1126800->f_25 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1126800->f_21, "TraderMaterialsMaximum", Global_1901929->f_542.f_9);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_24))
	{
		bVar0 = func_267(iVar3);
		Global_1126800->f_24 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1126800->f_21, "TraderMaterialsColorID", bVar0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_26))
	{
		bVar1 = func_269(iVar3);
		Global_1126800->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1126800->f_21, "ProductionOperational", bVar1);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_27))
	{
		Global_1126800->f_27 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1126800->f_21, "TraderGoodsValue", bVar5);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_30))
	{
		Global_1126800->f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1126800->f_21, "TraderGoodsMaximum", Global_1901929->f_542.f_10);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_28))
	{
		bVar0 = func_270(iVar3);
		Global_1126800->f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1126800->f_21, "TraderGoodsColorID", bVar0);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_29))
	{
		bVar2 = aggregate_func_3501(iVar3);
		Global_1126800->f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1126800->f_21, "TraderGoodsThresholdValue", bVar2);
	}
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1126800->f_31))
	{
		Global_1126800->f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1126800->f_21, "TraderGoodsShowCash", false);
	}
}

bool func_149()
{
	bool bVar0;

	bVar0 = aggregate_func_7189(-1364613333, 0, 1, -1, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	return aggregate_func_7986(-1364613333, bVar0);
}

bool func_151()
{
	int iVar0;

	if (!func_276())
	{
		aggregate_func_6715(4);
	}
	else
	{
		aggregate_func_8155(4);
	}
	if (aggregate_func_3501(PLAYER::PLAYER_ID()) < 200)
	{
		if (!aggregate_func_7591(&Global_1273882, 2))
		{
			func_154("TRADER_HALT_REASON_MATERIALS_EMPTY", 147180770);
			aggregate_func_6715(2);
		}
	}
	else
	{
		aggregate_func_8155(2);
	}
	if (aggregate_func_3501(PLAYER::PLAYER_ID()) >= Global_1901929->f_542.f_10)
	{
		if (!aggregate_func_7591(&Global_1273882, 128))
		{
			func_154("TRADER_HALT_REASON_SELL_GOODS", 109578199);
			aggregate_func_6715(128);
		}
	}
	else
	{
		aggregate_func_8155(128);
	}
	iVar0 = aggregate_func_4710(PLAYER::PLAYER_ID());
	if (aggregate_func_7398(iVar0, 512))
	{
		if (!aggregate_func_7591(&Global_1273882, 16))
		{
			func_154("TRADER_HALT_REASON_CRIPPS_INJURED", 1638328972);
			aggregate_func_6715(16);
		}
	}
	else
	{
		aggregate_func_8155(16);
	}
	if (((aggregate_func_7591(&Global_1273882, 4) || aggregate_func_7591(&Global_1273882, 2)) || aggregate_func_7591(&Global_1273882, 128)) || aggregate_func_7591(&Global_1273882, 16))
	{
		return false;
	}
	return true;
}

void func_154(char* sParam0, int iParam1)
{
	struct<22> Var0;

	if (!func_277())
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
	Var0.f_2 = MISC::_CREATE_VAR_STRING(2, "TRADER_CRIPPS_TITLE");
	Var0.f_3 = MISC::_CREATE_VAR_STRING(2, sParam0);
	Var0.f_7 = iParam1;
	Var0.f_6 = -1734218699;
	Var0.f_8 = joaat("COLOR_WHITE");
	Var0.f_4 = "TRADER_HOLD_INPUT_FOR_CAMP";
	Var0.f_18 = 0;
	Var0.f_17 = 0;
	Var0.f_13 = 863036578;
	Var0.f_16 = 0;
	Var0.f_14 = 0;
	aggregate_func_1158(&Var0);
}

bool func_158()
{
	struct<12> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (aggregate_func_6141(Global_1126800, -735397297, 1784584921, 1, &Var0, 1, -489628648, -1))
	{
		if (aggregate_func_5020(Global_1126800))
		{
			TELEMETRY::_0xCA9E42F437625A85(Global_1126800->f_1, 1414815075, 151142181);
			aggregate_func_4293(&(Global_1126800->f_15), 1);
			return true;
		}
	}
	return false;
}

void func_163(int iParam0)
{
	if (((*Global_1126840)[&Global_1273882 /*83*/])->f_74.f_5 != iParam0)
	{
		((*Global_1126840)[&Global_1273882 /*83*/])->f_74.f_5 = iParam0;
	}
}

int func_168(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	if (!ITEMDATABASE::_0xEF254F1A4C08B7E6(iParam0))
	{
		return 0;
	}
	if (!aggregate_func_2823(bParam1, 0))
	{
		return 0;
	}
	iVar4 = ITEMDATABASE::_0x3FAA928A79591761(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!ITEMDATABASE::_0x121D2005DD64496B(iParam0, iVar0, &Var1))
		{
		}
		else if (Var1 == bParam1)
		{
			return Var1.f_1;
		}
		iVar0++;
	}
	return 0;
}

void func_173()
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	bool bVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	char* sVar38;

	if (Global_1129497->f_339.f_16 == 0 || !UILOG::_UILOG_IS_ENTRY_REGISTERED(8, Global_1129497->f_339.f_16))
	{
		Global_1129497->f_339.f_16 = 0;
		return;
	}
	aggregate_func_2010(Global_1129497->f_339.f_16, Global_1129497->f_339.f_17, &Var2, &iVar0, 1, 0);
	iVar33 = 0;
	while (iVar33 < iVar0)
	{
		if (iVar33 >= 15)
		{
		}
		else
		{
			bVar34 = &Var2[iVar33 /*2*/];
			if (aggregate_func_2823(bVar34, 0))
			{
				iVar36 = aggregate_func_1136(bVar34, 0, 0, 0);
				sVar35 = MISC::_CREATE_VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, (Var2[iVar33 /*2*/])->f_1, MISC::_CREATE_VAR_STRING(0, bVar34));
				bVar37 = aggregate_func_2850(bVar34, (Var2[iVar33 /*2*/])->f_1);
				if (bVar37)
				{
					iVar1++;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, Global_1129497->f_339.f_16, bVar34, sVar35, bVar37, 1, 1);
			}
			iVar33++;
		}
	}
	sVar38 = MISC::_CREATE_VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar1, iVar0);
	UILOG::_0x763637F9B838B0A7(8, Global_1129497->f_339.f_16, sVar38);
}

int func_176(vector3 vParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!aggregate_func_1759(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 1462115960;
	Var0.f_3 = vParam0.z;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 759645552;
		DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	}
	return uVar5;
}

bool func_177(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = iParam0;
	return iParam3 > iVar0;
	return false;
}

int func_178()
{
	return -1635525483;
}

bool func_179(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (aggregate_func_7777(iVar1) == 4)
			{
			}
			else if (BUILTIN::VDIST(vParam0, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) < Global_1901929->f_542)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_180(vector3 vParam0, bool bParam3)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;

	if (aggregate_func_4268(vParam0))
	{
		return true;
	}
	if (bParam3 >= 0 && bParam3 < 32)
	{
		iVar5 = ((*Global_1126840)[bParam3 /*83*/])->f_33.f_3;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!aggregate_func_4268(((*Global_1123778)[iVar0 /*27*/])->f_20))
		{
			fVar1 = BUILTIN::VDIST(((*Global_1123778)[iVar0 /*27*/])->f_20, vParam0);
			if (fVar1 <= Global_1901929->f_542.f_3)
			{
				return true;
			}
		}
		if ((((Global_1123778->f_865[iVar0 /*7*/])->f_4 != iVar5 && ((Global_1123778->f_865[iVar0 /*7*/])->f_1.f_2 > 0 || (Global_1123778->f_865[iVar0 /*7*/])->f_1.f_2 < -2)) && &Global_1123778->f_865[iVar0 /*7*/] != -1) && &Global_1123778->f_865[iVar0 /*7*/] != 6)
		{
			if (aggregate_func_2606((Global_1123778->f_865[iVar0 /*7*/])->f_1, &vVar2) && !aggregate_func_4268(vVar2))
			{
				fVar1 = BUILTIN::VDIST(vVar2, vParam0);
				if (fVar1 <= Global_1901929->f_542.f_3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_182(var uParam0, int iParam1, bool bParam2, int iParam3, var uParam4)
{
	int iVar0;
	var uVar1;
	int iVar202;
	int iVar203;
	int iVar204;

	iVar0 = _NAMESPACE26::_0x149A2751AB66AC02(iParam1);
	uVar1 = 50;
	if (*uParam0 < 4)
	{
		*uParam0 = 4;
	}
	else if (*uParam0 > 7)
	{
		*uParam0 = 7;
	}
	if (uParam0->f_2 == -2)
	{
		func_307(iParam1, *uParam0, uParam0->f_1, &uVar1, bParam2);
		uParam0->f_2 = func_308(&uVar1);
	}
	else
	{
		iVar202 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		uParam0->f_1 = aggregate_func_7917(iVar202, 1);
		func_307(iParam1, *uParam0, uParam0->f_1, &uVar1, bParam2);
		uParam0->f_2 = func_308(&uVar1);
	}
	*iParam3 = 0;
	iVar203 = 0;
	iVar204 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam1);
	if (func_310(*uParam0, iVar204, iVar0, bParam2))
	{
		iVar203 = 1;
	}
	else
	{
		*uParam4++;
	}
	return iVar203;
}

char* func_185()
{
	return "net_camp";
}

char* func_186()
{
	return "gfh_campworks";
}

void func_187(int iParam0)
{
	var uVar0;

	if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1123778)[iParam0 /*27*/])->f_9) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(((*Global_1123778)[iParam0 /*27*/])->f_9)) && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(((*Global_1123778)[iParam0 /*27*/])->f_9)))
	{
		((*Global_1123778)[iParam0 /*27*/])->f_23.f_1 = uVar0;
		((*Global_1123778)[iParam0 /*27*/])->f_23 = uVar0;
		return;
	}
	if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1123778)[iParam0 /*27*/])->f_23.f_1))
	{
		VOLUME::_0xFDFECC6EE4491E11(((*Global_1123778)[iParam0 /*27*/])->f_23.f_1);
	}
	if (VOLUME::_0xF6A8A652A6B186CD(((*Global_1123778)[iParam0 /*27*/])->f_23))
	{
		VOLUME::_0xFDFECC6EE4491E11(((*Global_1123778)[iParam0 /*27*/])->f_23);
	}
	((*Global_1123778)[iParam0 /*27*/])->f_23.f_1 = uVar0;
	((*Global_1123778)[iParam0 /*27*/])->f_23 = uVar0;
}

void func_188(var uParam0)
{
	struct<27> Var0;

	Var0.f_9 = 255;
	Var0.f_10 = 7;
	Var0.f_10.f_1 = 255;
	Var0.f_10.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_10.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	*uParam0 = { Var0 };
}

void func_195(int iParam0, struct<14> Param1, vector3 vParam15, var uParam18, var uParam19)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam18))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	Param1.f_5 = { vParam15 };
	Param1.f_13 = uParam19;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 6, &uParam18);
}

bool func_196(int iParam0)
{
	return !aggregate_func_3736(iParam0, 8);
}

bool func_200(int iParam0)
{
	return aggregate_func_4240(Global_1124870->f_1912, iParam0);
}

int func_203(bool bParam0)
{
	if (bParam0)
	{
		return 96;
	}
	return 95;
}

int func_205(int iParam0, bool bParam1, bool bParam2)
{
	switch (iParam0)
	{
		case -682748:
			if (bParam1)
			{
				if (bParam2)
				{
					return 807049026;
				}
				return 1877266410;
			}
			return -1609475916;
		case 1357161730:
			if (bParam1)
			{
				if (bParam2)
				{
					return 1322315207;
				}
				return -690230539;
			}
			return -1621660129;
		case 1581179681:
			if (bParam1)
			{
				if (bParam2)
				{
					return 890534941;
				}
				return 353565276;
			}
			return -713543329;
		case -215258135:
			if (bParam1)
			{
				if (bParam2)
				{
					return -327090397;
				}
				return -1640183015;
			}
			return 321465645;
		case -987049424:
			if (bParam1)
			{
				if (bParam2)
				{
					return -901488938;
				}
				return 1203157087;
			}
			return 1280275183;
		case 892234183:
			if (bParam1)
			{
				if (bParam2)
				{
					return 157782508;
				}
				return -1431438421;
			}
			return 839992260;
		case -1554232707:
			if (bParam1)
			{
				if (bParam2)
				{
					return -1339543530;
				}
				return -2100701457;
			}
			return 1585227357;
		case 1538293636:
			if (bParam1)
			{
				if (bParam2)
				{
					return -897447261;
				}
				return -306961178;
			}
			return -706039225;
		case -1992167326:
			if (bParam1)
			{
				if (bParam2)
				{
					return -354997135;
				}
				return -2097555655;
			}
			return -1123163224;
		case -1884014371:
			if (bParam1)
			{
				if (bParam2)
				{
					return 1543402390;
				}
				return 753475365;
			}
			return -864497764;
		case -1871413878:
			if (bParam1)
			{
				if (bParam2)
				{
					return 646196791;
				}
				return 1650238062;
			}
			return -743114058;
		case 1483778247:
			if (bParam1)
			{
				if (bParam2)
				{
					return 706692807;
				}
				return -61157504;
			}
			return 381776905;
		case -724534761:
			if (bParam1)
			{
				if (bParam2)
				{
					return 84763048;
				}
				return -61157504;
			}
			return 381776905;
		default:
			break;
	}
	return 0;
}

void func_212(int iParam0)
{
	if (!aggregate_func_4598(iParam0))
	{
		return;
	}
	func_326(iParam0, 1);
}

void func_217(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1123778)[iParam0 /*27*/])->f_1 };
	if (!aggregate_func_1900(vVar0, &((Global_1124870->f_1[iParam0 /*59*/])->f_3), &((Global_1124870->f_1[iParam0 /*59*/])->f_43)))
	{
	}
	if (!func_329(vVar0, &((Global_1124870->f_1[iParam0 /*59*/])->f_6), &((Global_1124870->f_1[iParam0 /*59*/])->f_44)))
	{
	}
}

void func_218(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1123778)[iParam0 /*27*/])->f_1 };
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		if (!func_330(vVar0, iVar3, (Global_1124870->f_1[iParam0 /*59*/])->f_9[iVar3 /*3*/], (Global_1124870->f_1[iParam0 /*59*/])->f_45[iVar3]))
		{
		}
		iVar3++;
	}
}

void func_219(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1123778)[iParam0 /*27*/])->f_1 };
	if (!func_331(vVar0, &((Global_1124870->f_1[iParam0 /*59*/])->f_31), &((Global_1124870->f_1[iParam0 /*59*/])->f_53)))
	{
	}
}

void func_220(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1123778)[iParam0 /*27*/])->f_1 };
	if (!func_332(vVar0, &((Global_1124870->f_1[iParam0 /*59*/])->f_34), &((Global_1124870->f_1[iParam0 /*59*/])->f_54)))
	{
	}
}

void func_221(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1123778)[iParam0 /*27*/])->f_1 };
	if (!func_333(vVar0, &((Global_1124870->f_1[iParam0 /*59*/])->f_37), &((Global_1124870->f_1[iParam0 /*59*/])->f_55)))
	{
	}
}

void func_222(int iParam0)
{
	vector3 vVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	vVar0 = { ((*Global_1123778)[iParam0 /*27*/])->f_1 };
	if (!func_334(vVar0, &((Global_1124870->f_1[iParam0 /*59*/])->f_40), &((Global_1124870->f_1[iParam0 /*59*/])->f_56)))
	{
	}
}

void func_224(int iParam0, int iParam1)
{
	if (aggregate_func_4598(iParam0))
	{
		(Global_1124870->f_1[iParam0 /*59*/])->f_1 = iParam1;
	}
}

bool func_225(int iParam0)
{
	vector3 vVar0;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_185(), iParam0, true, 0))
	{
		return true;
	}
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1124870->f_1924) || SCRIPTS::IS_THREAD_ACTIVE(Global_1124870->f_1924, false))
	{
		return false;
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(6400) <= 0)
	{
		return false;
	}
	vVar0.f_3 = iParam0;
	vVar0 = { aggregate_func_7987(iParam0) };
	SCRIPTS::REQUEST_SCRIPT(func_185());
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_185()))
	{
		return false;
	}
	Global_1124870->f_1924 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_185(), &vVar0, 4, 6400);
	Global_1124870->f_1925 = iParam0;
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_185());
	return true;
}

bool func_226(int iParam0)
{
	vector3 vVar0;

	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_186(), iParam0, true, 0))
	{
		return true;
	}
	if (SCRIPTS::_DOES_THREAD_EXIST(Global_1124870->f_1926) || SCRIPTS::IS_THREAD_ACTIVE(Global_1124870->f_1926, false))
	{
		return false;
	}
	vVar0.f_3 = iParam0;
	vVar0 = { aggregate_func_7987(iParam0) };
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(3081) <= 0)
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(func_186());
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_186()))
	{
		return false;
	}
	Global_1124870->f_1926 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_186(), &vVar0, 4, 3081);
	Global_1124870->f_1927 = iParam0;
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_186());
	return true;
}

void func_228(var uParam0)
{
	struct<59> Var0;

	Var0.f_2 = -1;
	Var0.f_9 = 7;
	Var0.f_45 = 7;
	*uParam0 = { Var0 };
}

void func_230(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1126840)[iVar0 /*83*/])->f_38.f_3 = iParam0;
}

void func_233(struct<2> Param0, var uParam2)
{
	int iVar0;
	int iVar1;

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_54.f_65, aggregate_func_7748(Param0.f_1, 0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1939221->f_1433.f_54.f_66, MISC::_CREATE_VAR_STRING(2, "NM_CAMP_SIZE_VALUE", Param0));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1939221->f_1433.f_54.f_67, func_338(Param0));
	iVar0 = 0;
	while (iVar0 < 13)
	{
		iVar1 = DATABINDING::_0x81D7183E7A8ECA72(&(Global_1939221->f_1433.f_2628.f_49[iVar0 /*23*/]));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1939221->f_1433.f_2628.f_49[iVar0 /*23*/])->f_1.f_21, iVar1 == Param0.f_1);
		iVar0++;
	}
}

bool func_236()
{
	return aggregate_func_4240(Global_1129497->f_8, 2);
}

int func_242()
{
	return -1727708451;
}

void func_243(vector3 vParam0)
{
	((*Global_1126840)[aggregate_func_4294() /*83*/])->f_38.f_4 = { vParam0 };
}

void func_244(int iParam0)
{
	((*Global_1126840)[aggregate_func_4294() /*83*/])->f_38.f_11 = iParam0;
}

void func_246(int iParam0, int iParam1)
{
	if (iParam1 > 7)
	{
		return;
	}
	if ((_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0) && _NAMESPACE26::_0x0F99F6436528A089(iParam0)) && _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0) == PLAYER::PLAYER_ID())
	{
		if (_NAMESPACE26::_0x853B0FA4D8732C57(iParam0) == iParam1)
		{
			return;
		}
		_NAMESPACE26::_0x833D8268D51B4522(iParam1);
	}
}

void func_248()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (Global_1124870->f_1920 < 10)
	{
		Global_1124870->f_1920++;
	}
	else
	{
		Global_1124870->f_1920 = 0;
		iVar0 = PLAYER::PLAYER_ID();
		iVar1 = aggregate_func_4710(iVar0);
		if (iVar1 >= 0 && iVar1 <= 31)
		{
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ((*Global_1126840)[iVar0 /*83*/])->f_38)
			{
				if (&((*Global_1123778)[iVar1 /*27*/])->f_10[iVar2] == iVar0)
				{
					bVar3 = true;
				}
				else
				{
					iVar2++;
				}
			}
			if (bVar3)
			{
				if (iVar2 != ((*Global_1126840)[iVar0 /*83*/])->f_38.f_7)
				{
					func_350(iVar2, *((Global_1124870->f_1[iVar1 /*59*/])->f_9[iVar2 /*3*/]));
					aggregate_func_3090(16384);
				}
				else if (aggregate_func_2991(8192))
				{
					func_350(iVar2, *((Global_1124870->f_1[iVar1 /*59*/])->f_9[iVar2 /*3*/]));
					aggregate_func_3090(16384);
					aggregate_func_3608(8192);
				}
			}
		}
	}
}

void func_249(int iParam0)
{
	vector3 vVar0;
	bool bVar3;

	if (Global_1124870->f_1899.f_5 == 0)
	{
		return;
	}
	if (!aggregate_func_2991(64))
	{
		if (Global_1124870->f_1899.f_5 != 0)
		{
			aggregate_func_7775(0);
		}
	}
	else if (aggregate_func_4598(iParam0))
	{
		vVar0 = { ((*Global_1123778)[iParam0 /*27*/])->f_1 };
	}
	else if (Global_1124870->f_1899.f_5 != 0)
	{
		aggregate_func_7775(0);
	}
	switch (Global_1124870->f_1899.f_5)
	{
		case 1:
			bVar3 = aggregate_func_7988(vVar0.x);
			if (!aggregate_func_6350(bVar3, 1, 59806960))
			{
				aggregate_func_1054();
				aggregate_func_7775(0);
			}
			else
			{
				aggregate_func_7775(2);
			}
			break;
		case 2:
			bVar3 = aggregate_func_7988(vVar0.x);
			if (!aggregate_func_5107(Global_1124870->f_1899.f_6))
			{
				Global_1124870->f_1899.f_6 = aggregate_func_3030(bVar3, "NET_CAMP_PC", 1, 1, 0, 59806960);
				aggregate_func_7775(3);
			}
			break;
		case 3:
			if (!aggregate_func_5107(Global_1124870->f_1899.f_6))
			{
				func_353(iParam0);
				aggregate_func_7775(0);
			}
			break;
	}
}

void func_250(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	int iVar1;

	iVar1 = aggregate_func_8727();
	switch (Global_1124870->f_1899.f_7)
	{
		case 0:
			if (!aggregate_func_2991(64))
			{
				aggregate_func_7775(4);
				return;
			}
			if (((*Global_1123778)[iParam0 /*27*/])->f_9 == PLAYER::PLAYER_ID() && Global_1124870->f_1899.f_4 != -15)
			{
				if (aggregate_func_2847(iVar1) != aggregate_func_2847(Global_1124870->f_1899.f_4))
				{
					if (aggregate_func_2818(iVar1) >= aggregate_func_2818(Global_1124870->f_1899.f_4))
					{
						aggregate_func_7775(1);
					}
				}
			}
			break;
		case 1:
			bVar0 = func_356(iParam1);
			if (aggregate_func_6350(bVar0, 1, 59806960))
			{
				if (!aggregate_func_5107(Global_1124870->f_1899.f_8))
				{
					aggregate_func_2855(&(Global_1124870->f_1899.f_4), aggregate_func_2847(iVar1));
					Global_1124870->f_1899.f_8 = aggregate_func_3030(bVar0, "NET_CAMP_DC", 1, 1, 0, 59806960);
					aggregate_func_7775(2);
				}
			}
			else
			{
				aggregate_func_2916("NET_CAMP_DF", 10000, 0, 0, 0, 1);
				aggregate_func_7775(3);
			}
			break;
		case 2:
			if (!aggregate_func_5107(Global_1124870->f_1899.f_8))
			{
				aggregate_func_7775(0);
			}
			break;
		case 3:
			bVar0 = func_356(iParam1);
			if (aggregate_func_6350(bVar0, 1, 59806960) && !aggregate_func_5107(Global_1124870->f_1899.f_8))
			{
				aggregate_func_7775(1);
			}
			break;
		case 4:
			if (aggregate_func_2991(64))
			{
				Global_1124870->f_1899.f_4 = iVar1;
				aggregate_func_7775(0);
			}
			break;
	}
}

void func_251(int iParam0)
{
	int iVar0;
	struct<7> Var1;
	int iVar8;
	int iVar9;
	struct<5> Var10;
	struct<10> Var17;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	if ((*Global_1123778)[iParam0 /*27*/])->f_9 != PLAYER::PLAYER_ID()
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (((*Global_1126840)[iVar0 /*83*/])->f_38.f_28 != Global_1129497->f_339)
	{
		((*Global_1126840)[iVar0 /*83*/])->f_38.f_28 = Global_1129497->f_339;
	}
	CLOCK::_0x86A68E84E5884951(&Var1);
	if ((MISC::GET_FRAME_COUNT() % 60) == 0)
	{
		iVar8 = aggregate_func_1387();
		iVar9 = func_359();
		if (iVar8 != 255)
		{
			if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8) || _NAMESPACE26::_0x901E0DC25080C8B9(iVar8) != _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) || (iVar9 != -1 && (MISC::GET_GAME_TIMER() - iVar9) > 5000))
			{
				aggregate_func_1040(PLAYER::PLAYER_ID(), 1);
			}
		}
	}
	if (Global_1129497->f_339.f_2 != -1 && !aggregate_func_8311(Var1, Global_1129497->f_339.f_2))
	{
		return;
	}
	Var10.f_3 = 2;
	Var10.f_4 = 24;
	CLOCK::_0x28EEACE9B43D9597(&Var1, &Var10, &Var1);
	Global_1129497->f_339.f_2 = { Var1 };
	Var17 = { aggregate_func_4965(-1591664384, -1591664384, 0, 0, 0, 0, -1, -2011345500, 0) };
	if (aggregate_func_2989(Var17, &iVar27, &iVar28, 0))
	{
		iVar29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar28);
		iVar30 = aggregate_func_2076(iVar29, iVar27);
		if (iVar30 == aggregate_func_8168(iVar0))
		{
			iVar29 = aggregate_func_4223(0, iVar28, iVar29);
			iVar30 = aggregate_func_2076(iVar29, iVar27);
		}
		aggregate_func_9026(iVar0, iVar30);
		aggregate_func_2990(iVar27);
	}
}

void func_252(int iParam0)
{
	int iVar0;
	struct<7> Var1;

	if ((*Global_1123778)[iParam0 /*27*/])->f_9 != PLAYER::PLAYER_ID()
	{
		return;
	}
	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (((*Global_1126840)[iVar0 /*83*/])->f_38.f_28.f_1 != Global_1129497->f_339.f_1)
	{
		((*Global_1126840)[iVar0 /*83*/])->f_38.f_28.f_1 = Global_1129497->f_339.f_1;
	}
	CLOCK::_0x86A68E84E5884951(&Var1);
	if (Global_1129497->f_339.f_9 == -1 || !aggregate_func_8311(Var1, Global_1129497->f_339.f_9))
	{
		return;
	}
	Global_1129497->f_339.f_9 = -1;
	((*Global_1126840)[iVar0 /*83*/])->f_38.f_28.f_1 = 1046181202;
	Global_1129497->f_339.f_1 = 1046181202;
}

bool func_256()
{
	return aggregate_func_2850(-428390721 /* GXTEntry: "Butcher Table" */, 1);
}

void func_257(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901929->f_542.f_9)
	{
		iParam0 = Global_1901929->f_542.f_9;
	}
	if (((*Global_1126840)[&Global_1273882 /*83*/])->f_74.f_2 != iParam0)
	{
		((*Global_1126840)[&Global_1273882 /*83*/])->f_74.f_2 = iParam0;
	}
}

void func_258(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	if (iParam0 > Global_1901929->f_542.f_10)
	{
		iParam0 = Global_1901929->f_542.f_10;
	}
	if (((*Global_1126840)[&Global_1273882 /*83*/])->f_74.f_3 != iParam0)
	{
		((*Global_1126840)[&Global_1273882 /*83*/])->f_74.f_3 = iParam0;
	}
}

void func_260(int iParam0)
{
	if (iParam0 < 0 || iParam0 > Global_1901929->f_542.f_10)
	{
		iParam0 = 0;
	}
	if (((*Global_1126840)[&Global_1273882 /*83*/])->f_74.f_4 != iParam0)
	{
		((*Global_1126840)[&Global_1273882 /*83*/])->f_74.f_4 = iParam0;
	}
}

int func_263(bool bParam0)
{
	switch (bParam0)
	{
		case 1237770824: /* GXTEntry: "Animal Fat" */
			return -2059491326;
		case -858567048: /* GXTEntry: "Legendary Buck Antler" */
			return -2054061821;
		case 529305859: /* GXTEntry: "Buck Antlers" */
			return -2054061821;
		case -725003445: /* GXTEntry: "Legendary Elk Antler" */
			return -276530555;
		case -407659715: /* GXTEntry: "Elk Antler" */
			return -276530555;
		case 967601061: /* GXTEntry: "Legendary Moose Antler" */
			return 1786362058;
		case 895033262: /* GXTEntry: "Moose Antler" */
			return 1786362058;
		case -1424697962: /* GXTEntry: "Perfect Alligator Carcass" */
			return -1925097470;
		case -1643384846: /* GXTEntry: "Poor Alligator Carcass" */
			return -1925097470;
		case 915880986: /* GXTEntry: "Good Alligator Carcass" */
			return -1925097470;
		case -738999731: /* GXTEntry: "Poor Carolina Parakeet Carcass" */
			return -179784009;
		case 566023444: /* GXTEntry: "Good Carolina Parakeet Carcass" */
			return -179784009;
		case -1956973834: /* GXTEntry: "Perfect Carolina Parakeet Carcass" */
			return -179784009;
		case -593311590: /* GXTEntry: "Good Bighorn Sheep Carcass" */
			return -549843543;
		case 765085831: /* GXTEntry: "Perfect Bighorn Sheep Carcass" */
			return -549843543;
		case 2094730711: /* GXTEntry: "Poor Bighorn Sheep Carcass" */
			return -549843543;
		case -662726703: /* GXTEntry: "Perfect Armadillo Carcass" */
			return 547453549;
		case 1760886130: /* GXTEntry: "Poor Armadillo Carcass" */
			return 547453549;
		case -847420802: /* GXTEntry: "Good Armadillo Carcass" */
			return 547453549;
		case 1988467099: /* GXTEntry: "Perfect Badger Carcass" */
			return -185670568;
		case -674590015: /* GXTEntry: "Poor Badger Carcass" */
			return -185670568;
		case -1243653490: /* GXTEntry: "Good Badger Carcass" */
			return -185670568;
		case 1432949803: /* GXTEntry: "Perfect Bat Carcass" */
			return -68530554;
		case 563848610: /* GXTEntry: "Poor Bat Carcass" */
			return -68530554;
		case -1457420231: /* GXTEntry: "Good Bat Carcass" */
			return -68530554;
		case 924882045: /* GXTEntry: "Perfect Beaver Carcass" */
			return -1882667332;
		case 1415608202: /* GXTEntry: "Poor Beaver Carcass" */
			return -1882667332;
		case -1480423460: /* GXTEntry: "Good Beaver Carcass" */
			return -1882667332;
		case -1188120304: /* GXTEntry: "Perfect Ram Carcass" */
			return -549843543;
		case 1978734761: /* GXTEntry: "Poor Ram Carcass" */
			return -549843543;
		case -1814593136: /* GXTEntry: "Good Ram Carcass" */
			return -549843543;
		case -983831788: /* GXTEntry: "Perfect Blue Jay Carcass" */
			return 251523924;
		case -2120099592: /* GXTEntry: "Poor Blue Jay Carcass" */
			return 251523924;
		case 1848456619: /* GXTEntry: "Good Blue Jay Carcass" */
			return 251523924;
		case 992366796: /* GXTEntry: "Perfect Buck Carcass" */
			return 128689452;
		case -244657613: /* GXTEntry: "Poor Buck Carcass" */
			return 128689452;
		case -1310590179: /* GXTEntry: "Good Buck Carcass" */
			return 128689452;
		case -1252472243: /* GXTEntry: "Perfect California Condor Carcass" */
			return -795926005;
		case -980016656: /* GXTEntry: "Poor California Condor Carcass" */
			return -795926005;
		case -2026210939: /* GXTEntry: "Good California Condor Carcass" */
			return -795926005;
		case -1969404854: /* GXTEntry: "Perfect Cardinal Carcass" */
			return 1766735806;
		case 1948158930: /* GXTEntry: "Poor Cardinal Carcass" */
			return 1766735806;
		case 183958842: /* GXTEntry: "Good Cardinal Carcass" */
			return 1766735806;
		case 905173572: /* GXTEntry: "Perfect Cedar Waxwing Carcass" */
			return -1260301848;
		case -1323780599: /* GXTEntry: "Poor Cedar Waxwing Carcass" */
			return -1260301848;
		case -532099639: /* GXTEntry: "Good Cedar Waxwing Carcass" */
			return -1260301848;
		case -2139551030: /* GXTEntry: "Perfect Chicken Carcass" */
			return 362062697;
		case 1607144310: /* GXTEntry: "Poor Chicken Carcass" */
			return 362062697;
		case -758005668: /* GXTEntry: "Good Chicken Carcass" */
			return 362062697;
		case -832850511: /* GXTEntry: "Perfect Chipmunk Carcass" */
			return -557557374;
		case -1586332975: /* GXTEntry: "Poor Chipmunk Carcass" */
			return -557557374;
		case 1857501916: /* GXTEntry: "Good Chipmunk Carcass" */
			return -557557374;
		case -867655342: /* GXTEntry: "Perfect Cormorant Carcass" */
			return 2145928766;
		case 991092621: /* GXTEntry: "Poor Cormorant Carcass" */
			return 2145928766;
		case 80093385: /* GXTEntry: "Good Cormorant Carcass" */
			return 2145928766;
		case 1626949878: /* GXTEntry: "Perfect Cougar Carcass" */
			return 2103138183;
		case -1722483116: /* GXTEntry: "Poor Cougar Carcass" */
			return 2103138183;
		case 871746664: /* GXTEntry: "Good Cougar Carcass" */
			return 2103138183;
		case -161524199: /* GXTEntry: "Perfect Coyote Carcass" */
			return 1176634776;
		case 156979555: /* GXTEntry: "Poor Coyote Carcass" */
			return 1176634776;
		case -1739474417: /* GXTEntry: "Good Coyote Carcass" */
			return 1176634776;
		case -1888757291: /* GXTEntry: "Perfect Crab Carcass" */
			return -48308129;
		case 995863399: /* GXTEntry: "Poor Crab Carcass" */
			return -48308129;
		case 894877715: /* GXTEntry: "Good Crab Carcass" */
			return -48308129;
		case 1310120320: /* GXTEntry: "Perfect Crane Carcass" */
			return -234392368;
		case -1228376431: /* GXTEntry: "Poor Crane Carcass" */
			return -234392368;
		case 322141256: /* GXTEntry: "Good Crane Carcass" */
			return -234392368;
		case 59384454: /* GXTEntry: "Perfect Crow Carcass" */
			return 489332694;
		case -110353515: /* GXTEntry: "Poor Crow Carcass" */
			return 489332694;
		case -1905834457: /* GXTEntry: "Good Crow Carcass" */
			return 489332694;
		case -1837840093: /* GXTEntry: "Perfect Deer Carcass" */
			return -972505668;
		case 58634176: /* GXTEntry: "Poor Deer Carcass" */
			return -972505668;
		case 472142656: /* GXTEntry: "Good Deer Carcass" */
			return -972505668;
		case 1001171791: /* GXTEntry: "Perfect Duck Carcass" */
			return -1482721140;
		case 1210345318: /* GXTEntry: "Poor Duck Carcass" */
			return -1482721140;
		case 1023080408: /* GXTEntry: "Good Duck Carcass" */
			return -1482721140;
		case -1422869557: /* GXTEntry: "Perfect Eagle Carcass" */
			return 1943206759;
		case -1378812236: /* GXTEntry: "Poor Eagle Carcass" */
			return 1943206759;
		case 399553313: /* GXTEntry: "Good Eagle Carcass" */
			return 1943206759;
		case 651035143: /* GXTEntry: "Perfect Egret Carcass" */
			return -479944273;
		case 2013022756: /* GXTEntry: "Poor Egret Carcass" */
			return -479944273;
		case 1011003885: /* GXTEntry: "Good Egret Carcass" */
			return -479944273;
		case -1490884871: /* GXTEntry: "Legendary Bluegill" */
			return -1900245017;
		case 306916738: /* GXTEntry: "Bullhead Catfish" */
			return 996737485;
		case 724563284: /* GXTEntry: "Chain Pickerel" */
			return -317318063;
		case 1917027383: /* GXTEntry: "Channel Catfish" */
			return -1179145184;
		case -855052577: /* GXTEntry: "Lake Sturgeon" */
			return 49841414;
		case -5376850: /* GXTEntry: "Largemouth Bass" */
			return 1853004765;
		case 1338219162: /* GXTEntry: "Longnose Gar" */
			return -613244561;
		case -1538397860: /* GXTEntry: "Muskie" */
			return 998459086;
		case 193037129: /* GXTEntry: "Northern Pike" */
			return -1185304294;
		case 1416872916: /* GXTEntry: "Perch" */
			return 1606770041;
		case 1500919793: /* GXTEntry: "Redfin Pickerel" */
			return 592705199;
		case 1042542561: /* GXTEntry: "Rock Bass" */
			return 1001427351;
		case 1570826681: /* GXTEntry: "Sockeye Salmon" */
			return -2134757665;
		case 56657913: /* GXTEntry: "Smallmouth Bass" */
			return 1296165525;
		case 877935135: /* GXTEntry: "Perfect Fox Carcass" */
			return -1389099466;
		case -39646495: /* GXTEntry: "Poor Fox Carcass" */
			return -1389099466;
		case -1186289527: /* GXTEntry: "Good Fox Carcass" */
			return -1389099466;
		case -1882344824: /* GXTEntry: "Perfect Bullfrog Carcass" */
			return 2032362047;
		case -1134447619: /* GXTEntry: "Poor Bullfrog Carcass" */
			return 2032362047;
		case -1640704323: /* GXTEntry: "Good Bullfrog Carcass" */
			return 2032362047;
		case -246542229: /* GXTEntry: "Perfect Gila Monster Carcass" */
			return -600158588;
		case -529454751: /* GXTEntry: "Poor Gila Monster Carcass" */
			return -600158588;
		case 1582593525: /* GXTEntry: "Good Gila Monster Carcass" */
			return -600158588;
		case -1347000030: /* GXTEntry: "Perfect Goat Carcass" */
			return -348997013;
		case -505583391: /* GXTEntry: "Poor Goat Carcass" */
			return -348997013;
		case -46978629: /* GXTEntry: "Good Goat Carcass" */
			return -348997013;
		case -1559227925: /* GXTEntry: "Perfect Goose Carcass" */
			return -855155400;
		case 1562528937: /* GXTEntry: "Poor Goose Carcass" */
			return -855155400;
		case 1645887374: /* GXTEntry: "Good Goose Carcass" */
			return -855155400;
		case -1440794801: /* GXTEntry: "Perfect Hawk Carcass" */
			return 1743453709;
		case 2144711797:
			return 1743453709;
		case -1471526136: /* GXTEntry: "Good Hawk Carcass" */
			return 1743453709;
		case 2105263879: /* GXTEntry: "Perfect Heron Carcass" */
			return -1910050550;
		case -905842006: /* GXTEntry: "Poor Heron Carcass" */
			return -1910050550;
		case 718825539: /* GXTEntry: "Good Heron Carcass" */
			return -1910050550;
		case 1613453781: /* GXTEntry: "Perfect Iguana Carcass" */
			return -1634769991;
		case -1030182399: /* GXTEntry: "Poor Iguana Carcass" */
			return -1634769991;
		case 1191274340: /* GXTEntry: "Good Iguana Carcass" */
			return -1634769991;
		case -1060737769: /* GXTEntry: "Perfect Loon Carcass" */
			return 556997951;
		case 553310445: /* GXTEntry: "Poor Loon Carcass" */
			return 556997951;
		case 987967309: /* GXTEntry: "Good Loon Carcass" */
			return 556997951;
		case 1418092959: /* GXTEntry: "Perfect Muskrat Carcass" */
			return 727714355;
		case -1315697778: /* GXTEntry: "Poor Muskrat Carcass" */
			return 727714355;
		case -1838865945: /* GXTEntry: "Good Muskrat Carcass" */
			return 727714355;
		case -1464585113: /* GXTEntry: "Perfect Oriole Carcass" */
			return -71380070;
		case -610456424: /* GXTEntry: "Poor Oriole Carcass" */
			return -71380070;
		case -284151822: /* GXTEntry: "Good Oriole Carcass" */
			return -71380070;
		case -1670544626: /* GXTEntry: "Perfect Owl Carcass" */
			return -729503995;
		case 1290960696: /* GXTEntry: "Poor Owl Carcass" */
			return -729503995;
		case -266273535: /* GXTEntry: "Good Owl Carcass" */
			return -729503995;
		case 1717601520: /* GXTEntry: "Perfect Panther Carcass" */
			return 1786644138;
		case 430397370: /* GXTEntry: "Poor Panther Carcass" */
			return 1786644138;
		case 1913571052: /* GXTEntry: "Good Panther Carcass" */
			return 1786644138;
		case -1356230367: /* GXTEntry: "Perfect Parrot Carcass" */
			return -1466769106;
		case 1417331079: /* GXTEntry: "Poor Parrot Carcass" */
			return -1466769106;
		case 16287711: /* GXTEntry: "Good Parrot Carcass" */
			return -1466769106;
		case 1884610748: /* GXTEntry: "Perfect Pelican Carcass" */
			return -2079514583;
		case 746558492: /* GXTEntry: "Poor Pelican Carcass" */
			return -2079514583;
		case -884124246: /* GXTEntry: "Good Pelican Carcass" */
			return -2079514583;
		case -2040522845: /* GXTEntry: "Perfect Pheasant Carcass" */
			return -409309194;
		case -1224510844: /* GXTEntry: "Poor Pheasant Carcass" */
			return -409309194;
		case -892811627: /* GXTEntry: "Good Pheasant Carcass" */
			return -409309194;
		case 339620522: /* GXTEntry: "Perfect Pig Carcass" */
			return 2020893799;
		case 1770451033: /* GXTEntry: "Poor Pig Carcass" */
			return 2020893799;
		case 1334837390: /* GXTEntry: "Good Pig Carcass" */
			return 2020893799;
		case -245335326: /* GXTEntry: "Perfect Pigeon Carcass" */
			return 195131818;
		case -1999212658: /* GXTEntry: "Poor Pigeon Carcass" */
			return 195131818;
		case -593435395: /* GXTEntry: "Good Pigeon Carcass" */
			return 195131818;
		case -935543049: /* GXTEntry: "Perfect Opossum Carcass" */
			return 1445465787;
		case 1772544356: /* GXTEntry: "Poor Opossum Carcass" */
			return 1445465787;
		case -1772126340: /* GXTEntry: "Good Opossum Carcass" */
			return 1445465787;
		case 862898895: /* GXTEntry: "Perfect Prairie Chicken Carcass" */
			return -1817406451;
		case 756657535: /* GXTEntry: "Good Prairie Chicken Carcass" */
			return -1817406451;
		case 1997845858: /* GXTEntry: "Poor Prairie Chicken Carcass" */
			return -1817406451;
		case 1846915545: /* GXTEntry: "Perfect Pronghorn Carcass" */
			return 1521192478;
		case -1816929509: /* GXTEntry: "Poor Pronghorn Carcass" */
			return 1521192478;
		case -1930144509: /* GXTEntry: "Good Pronghorn Carcass" */
			return 1521192478;
		case -1017987135: /* GXTEntry: "Perfect Quail Carcass" */
			return -1517999735;
		case 2058475216: /* GXTEntry: "Poor Quail Carcass" */
			return -1517999735;
		case -1726572562: /* GXTEntry: "Good Quail Carcass" */
			return -1517999735;
		case -1866642239: /* GXTEntry: "Perfect Rabbit Carcass" */
			return -2084641708;
		case -1508120809: /* GXTEntry: "Poor Rabbit Carcass" */
			return -2084641708;
		case 1197831625: /* GXTEntry: "Good Rabbit Carcass" */
			return -2084641708;
		case 434924608: /* GXTEntry: "Perfect Raccoon Carcass" */
			return -1125378664;
		case 1666393029: /* GXTEntry: "Poor Raccoon Carcass" */
			return -1125378664;
		case -1007681885: /* GXTEntry: "Good Raccoon Carcass" */
			return -1125378664;
		case 1761263432: /* GXTEntry: "Perfect Rat Carcass" */
			return 708951363;
		case -1788506246: /* GXTEntry: "Poor Rat Carcass" */
			return 708951363;
		case -1909348309: /* GXTEntry: "Good Rat Carcass" */
			return 708951363;
		case -1015531226: /* GXTEntry: "Perfect Raven Carcass" */
			return 714611525;
		case -581619522: /* GXTEntry: "Poor Raven Carcass" */
			return 714611525;
		case -824902132: /* GXTEntry: "Good Raven Carcass" */
			return 714611525;
		case -545447034: /* GXTEntry: "Perfect Red-footed Booby Carcass" */
			return 1699761828;
		case -1824684934: /* GXTEntry: "Poor Red-footed Booby Carcass" */
			return 1699761828;
		case -861854914: /* GXTEntry: "Good Red-footed Booby Carcass" */
			return 1699761828;
		case -1290897778: /* GXTEntry: "Perfect Robin Carcass" */
			return -158140634;
		case -350704687: /* GXTEntry: "Poor Robin Carcass" */
			return -158140634;
		case 765892430: /* GXTEntry: "Good Robin Carcass" */
			return -158140634;
		case -1011598664: /* GXTEntry: "Perfect Rooster Carcass" */
			return 1272884971;
		case -177476569: /* GXTEntry: "Poor Rooster Carcass" */
			return 1272884971;
		case 980653387: /* GXTEntry: "Good Rooster Carcass" */
			return 1272884971;
		case 1925728375: /* GXTEntry: "Perfect Roseate Spoonbill Carcass" */
			return -1552076723;
		case -1080457688: /* GXTEntry: "Poor Roseate Spoonbill Carcass" */
			return -1552076723;
		case 416630124: /* GXTEntry: "Good Roseate Spoonbill Carcass" */
			return -1552076723;
		case -899751553: /* GXTEntry: "Perfect Seagull Carcass" */
			return -334414989;
		case 1742676369: /* GXTEntry: "Good Seagull Carcass" */
			return -334414989;
		case 431501574: /* GXTEntry: "Poor Seagull Carcass" */
			return -334414989;
		case 1489051752: /* GXTEntry: "Perfect Sheep Carcass" */
			return -352732121;
		case -1705499323: /* GXTEntry: "Poor Sheep Carcass" */
			return -352732121;
		case 2126795269:
			return -352732121;
		case 102446365: /* GXTEntry: "Perfect Skunk Carcass" */
			return 117556329;
		case -1927342740: /* GXTEntry: "Poor Skunk Carcass" */
			return 117556329;
		case -2013445740: /* GXTEntry: "Good Skunk Carcass" */
			return 117556329;
		case 1323485831: /* GXTEntry: "Perfect Snake Carcass" */
			return 469453151;
		case -914779013: /* GXTEntry: "Good Snake Carcass" */
			return 469453151;
		case -365111821: /* GXTEntry: "Poor Snake Carcass" */
			return 469453151;
		case -1073614594: /* GXTEntry: "Perfect Black-tailed Rattlesnake Carcass" */
			return 621465116;
			return 621465116;
			return 621465116;
			return -523607607;
			return -523607607;
			return -523607607;
			return 1662628197;
			return 1662628197;
			return 1662628197;
			return 2084847747;
			return 2084847747;
			return 2084847747;
			return 1656226638;
			return 1656226638;
			return 1656226638;
			return -1608525320;
			return -1608525320;
			return -1608525320;
			return 1717540687;
			return 1717540687;
			return 1717540687;
			return 1622797153;
			return 1622797153;
			return 1622797153;
			return -252750557;
			return -252750557;
			return -252750557;
			return 513869240;
			return 513869240;
			return 513869240;
			return -482152318;
			return -482152318;
			return -482152318;
			return -329015022;
			return -329015022;
			return -329015022;
			return 340488205;
			return 340488205;
			return 340488205;
			return 1228602887;
			return -1749311280;
			return -770230168;
			return -1761903019;
			return -202898890;
			return -324172879;
			return 221026557;
			return 2055874470;
			return 1383597214;
			return -695920779;
			return 1864240538;
			return 135251025;
			return -1380974753;
			return 1918940015;
			return 1606360364;
			return 949154977;
			return 1327585677;
			return -424223638;
			return -817814915;
			return 1324361660;
			return -1740875511;
			return -1114206422;
			return 1129016218;
			return 74265533;
			return -1687205102;
			return -2112352640;
			return -1179922595;
			return -1777044066;
			return -427774472;
			return -862133853;
			return -153093028;
			return 1961151934;
			return -1429428300;
			return 641025903;
			return 1014343203;
			return -977684174;
			return 753992067;
			return 975102591;
			return -742266708;
			return 1002050200;
			return 970250315;
			return 913562114;
			return 1415886451;
			return 1244458697;
			return 322165109;
			return -2083991045;
			return 709722347;
			return 709722347;
			return 709722347;
			return 144513283;
			return 144513283;
			return 144513283;
			return -78603574;
			return -78603574;
			return -78603574;
			return 956393401;
			return 956393401;
			return 956393401;
			return -1604538436;
			return -1604538436;
			return -1604538436;
			return -1583116953;
			return -1583116953;
			return -1583116953;
			return 1995645004;
			return 1995645004;
			return 1995645004;
			return 439094686;
			return 439094686;
			return 439094686;
			return 1069834732;
			return 1069834732;
			return 1069834732;
			return -1508151163;
			return -1508151163;
			return -1508151163;
			return 854098596;
			return 854098596;
			return 854098596;
			return 1467162138;
			return 1467162138;
			return 1467162138;
			return 1322026128;
			return 1322026128;
			return 1322026128;
			return 711086189;
			return 711086189;
			return 711086189;
			return -1334624683;
			return -1334624683;
			return -1334624683;
			return 2118150058;
			return 2118150058;
			return 2118150058;
			return 1889550255;
			return 1889550255;
			return 1889550255;
			return 1684561350;
			return 1684561350;
			return 1684561350;
			return 1763709491;
			return 1763709491;
			return 1763709491;
			return 1828340319;
			return 1828340319;
			return 1828340319;
			return 344414895;
			return 344414895;
			return 344414895;
			return -1875079046;
			return -1875079046;
			return -1875079046;
			return -1273558742;
			return -1273558742;
			return -1273558742;
			return -839975185;
			return -839975185;
			return -839975185;
			return -401745683;
			return -401745683;
			return -401745683;
			return -2096730839;
			return -2096730839;
			return -2096730839;
			return 1871609823;
			return 1871609823;
			return 1871609823;
			return -1028335922;
			return -1028335922;
			return -1028335922;
			return 172698521;
			return 172698521;
			return 172698521;
			return 212330241;
			return 212330241;
			return 212330241;
			return -555536739;
			return -555536739;
			return -555536739;
			return -1896091463;
			return -1896091463;
			return -1896091463;
			return 1854095100;
			return 1854095100;
			return 1854095100;
			return 1690246594;
			return 1690246594;
			return 1690246594;
			return -885435577;
			return -885435577;
			return -885435577;
			return -1923252111;
			return -1923252111;
			return -1923252111;
			return -470304000;
			return -1074986502;
			return -1042059910;
			return 1234479911;
			return -591134272;
			return 2092024647;
			return -1902618794;
			return 0;
		}

int func_267(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_3501(iParam0);
	if (iVar0 < 2500)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

int func_268(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 2;
	}
	return func_373(((*Global_1126840)[iVar0 /*83*/])->f_38.f_28.f_1);
}

int func_269(int iParam0)
{
	if (aggregate_func_7591(iParam0, 64))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_270(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_3501(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_272()
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
	if (aggregate_func_7591(&Global_1273882, 8192) == 0)
	{
		return false;
	}
	return true;
}

bool func_273(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1;
	struct<13> Var4;
	int iVar17;
	struct<13> Var18;
	int iVar31;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (bParam3)
		{
			func_375(bParam1, iParam2);
		}
		aggregate_func_3564(bParam1, iParam2);
		return true;
	}
	iVar0 = func_263(bParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!aggregate_func_915(bParam1, &Var1, joaat("inventory"), 0, 0, -401018458))
	{
		Var1 = "TRANSACTION_CAMP_GANG";
		Var1.f_1 = "ITEMTYPE_TEXTURES";
	}
	aggregate_func_2861(MISC::_CREATE_VAR_STRING(2, "TRANSACTION_DONATED"), Var1.f_1, MISC::GET_HASH_KEY(Var1), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	Var4.f_1 = 11;
	if (aggregate_func_2852(bParam1, 1064293907) || INVENTORY::_0x245D07651B1D183B(bParam1, 1073741824 /* Float: 2f */))
	{
		if (aggregate_func_7162())
		{
			aggregate_func_4575(&Var4, 1417019613);
		}
	}
	else if ((INVENTORY::_0x245D07651B1D183B(bParam1, 268435456) || INVENTORY::_0x245D07651B1D183B(bParam1, 134217728)) || aggregate_func_2852(bParam1, 1888974372))
	{
		aggregate_func_4575(&Var4, -688057837);
	}
	else
	{
		aggregate_func_4575(&Var4, 25550726);
	}
	iVar17 = iParam2;
	if (iVar17 > 10)
	{
		Var18 = { Var4 };
		aggregate_func_4575(&Var18, 964458272);
		while (iVar17 > 10)
		{
			if (!aggregate_func_6360(iVar0, uParam0, &Var18, 0, 255, 0, 0))
			{
				return false;
			}
			iVar17 = (iVar17 - 10);
		}
	}
	iVar31 = 0;
	switch (iVar17)
	{
		case 2:
			iVar31 = 1206214767;
			break;
		case 3:
			iVar31 = 1048858029;
			break;
		case 4:
			iVar31 = 2003386234;
			break;
		case 5:
			iVar31 = 1510933702;
			break;
		case 6:
			iVar31 = -712967248;
			break;
		case 7:
			iVar31 = -1206075160;
			break;
		case 8:
			iVar31 = -246762689;
			break;
		case 9:
			iVar31 = -414474431;
			break;
		case 10:
			iVar31 = 964458272;
			break;
	}
	if (iVar31 != 0)
	{
		aggregate_func_4575(&Var4, iVar31);
	}
	if (!aggregate_func_6360(iVar0, uParam0, &Var4, 0, 255, 0, 0))
	{
		return false;
	}
	if (bParam3)
	{
		func_375(bParam1, iParam2);
	}
	return true;
}

bool func_276()
{
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
	{
		return true;
	}
	return false;
}

bool func_277()
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
	if (UIAPPS::_IS_APP_RUNNING(64621749))
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
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1324907014))
	{
		return false;
	}
	if (func_383())
	{
		return false;
	}
	return true;
}

bool func_291(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, var uParam7, int iParam8, bool bParam9)
{
	struct<16> Var0;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	var uVar21;
	struct<4> Var26;
	struct<4> Var30;
	struct<4> Var34;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;

	if (!aggregate_func_2823(bParam1, 0))
	{
		return false;
	}
	if (!aggregate_func_524(iParam0, 0))
	{
		return false;
	}
	if (iParam8 == 0)
	{
		iParam8 = aggregate_func_7384(bParam1, iParam8, 1, -1, 1);
	}
	aggregate_func_4243(&bParam9, 32);
	aggregate_func_4243(&bParam9, 64);
	aggregate_func_4243(&bParam9, 4);
	aggregate_func_4243(&bParam9, 128);
	aggregate_func_4243(&bParam9, 2);
	if (iParam6 < 1)
	{
		iParam6 = 1;
	}
	if (!aggregate_func_2154(iParam0, bParam1, Param2, -1591664384, iParam8, iParam6, bParam9, 1))
	{
		return false;
	}
	Var0 = { aggregate_func_4493(bParam1, Param2, 1084182731, iParam6, 0) };
	Var0.f_13 = iParam8;
	Var0.f_12 = 1248274121;
	*uParam7 = { Var0 };
	if (!aggregate_func_3016(iParam0, joaat("use")))
	{
		return false;
	}
	bVar16 = false;
	bVar17 = false;
	bVar18 = Global_1915170->f_19742.f_49;
	iVar19 = Global_1915170->f_19742.f_50;
	iVar41 = 0;
	while (iVar41 < 5)
	{
		if (!aggregate_func_2823(&(Global_1051387->f_46[iVar41]), 0))
		{
		}
		else if (!aggregate_func_1019(&(Global_1051387->f_46[iVar41]), bVar18, &bVar20, &Var30, &uVar21, 1, iVar19))
		{
		}
		else
		{
			iVar38 = aggregate_func_2830(&(Global_1051387->f_46[iVar41]));
			Var26 = { aggregate_func_2828(&(Global_1051387->f_46[iVar41]), Var30, bVar20, 0) };
			switch (iVar38)
			{
				case -1013984273:
				case 658570475:
					if (!aggregate_func_4290(&(Global_1051387->f_46[iVar41]), &Var30, bVar20, 0, 0))
					{
						if (!&Global_1051387->f_46.f_6[iVar41])
						{
						}
						else if (aggregate_func_5290(&(Global_1051387->f_46[iVar41])))
						{
						}
						else
						{
							iVar40 = iParam8;
							if (aggregate_func_2896(&(Global_1051387->f_46[iVar41]), 997808187))
							{
								iVar40 = 997808187;
							}
							if (!aggregate_func_5258(iParam0, &(Global_1051387->f_46[iVar41]), Var30, bVar20, 1, &Var0, 0, iVar40, 0, bParam9, 0))
							{
								bVar16 = false;
								Jump @628; //curOff = 487
							}
							else
							{
								bVar17 = true;
							}
							bVar16 = true;
							Jump @616; //curOff = 499
							if (!&Global_1051387->f_46.f_6[iVar41])
							{
								bVar39 = aggregate_func_4299(Var30, bVar20, 0, -1);
								if (!aggregate_func_2823(bVar39, 0))
								{
								}
								else
								{
									Var34 = { aggregate_func_2828(bVar39, Var34, bVar20, 0) };
									if (!aggregate_func_2072(Var34, 0))
									{
										bVar16 = false;
										Jump @628; //curOff = 579
									}
									else
									{
										bVar16 = true;
									}
									Jump @616; //curOff = 588
									if (!aggregate_func_2072(Var26, 1))
									{
										bVar16 = false;
										Jump @628; //curOff = 607
									}
									else
									{
										bVar16 = true;
									}
								}
								iVar41++;
								if (!bVar16)
								{
									aggregate_func_2120(iParam0);
									return false;
								}
								if (bVar17)
								{
									if (!aggregate_func_929(iParam0))
									{
										return false;
									}
									else
									{
										iVar42 = WEAPON::_0x46F032B8DDF46CDE(bVar18);
										if (!MISC::IS_BIT_SET(&(Global_1051387->f_4349[(aggregate_func_5257(iVar42, 1) / 32)]), (aggregate_func_5257(iVar42, 1) % 32)))
										{
											aggregate_func_1962(aggregate_func_4257(1137323725, 1914305383), 1);
											MISC::SET_BIT(Global_1051387->f_4349[(aggregate_func_5257(iVar42, 1) / 32)], (aggregate_func_5257(iVar42, 1) % 32));
										}
									}
								}
								return true;
							}
						}
					}
					default:
						break;
			}
		}
	}
}

void func_307(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	struct<7> Var18[7];
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;

	vVar0.x = uParam1;
	vVar0.f_1 = uParam2;
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(iParam0))
	{
		return;
	}
	iVar3 = -999;
	iVar4 = 100;
	iVar5 = 200;
	iVar6 = 100;
	iVar7 = 50;
	fVar8 = 800f;
	fVar9 = 1400f;
	fVar10 = 2000f;
	iVar68 = _NAMESPACE26::_0xD1BF325C8252A982(iParam0, &Var18);
	iVar69 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iParam0);
	iVar71 = func_434(vVar0);
	iVar72 = 0;
	while (iVar72 <= (iVar71 - 1))
	{
		((*uParam3)[iVar72 /*4*/])->f_1 = uParam1;
		((*uParam3)[iVar72 /*4*/])->f_1.f_1 = uParam2;
		((*uParam3)[iVar72 /*4*/])->f_1.f_2 = func_435(iVar72, vVar0);
		if (func_310(((*uParam3)[iVar72 /*4*/])->f_1, iVar69, iVar68, bParam4))
		{
			(*uParam3)[iVar72 /*4*/] = (uParam3[iVar72 /*4*/] + iVar4);
			if (!aggregate_func_2606(((*uParam3)[iVar72 /*4*/])->f_1, &vVar15))
			{
			}
			else
			{
				iVar73 = 0;
				while (iVar73 <= (iVar68 - 1))
				{
					iVar70 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var18[iVar73 /*7*/]);
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar70))
					{
						vVar12 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar70), false, false) };
						fVar11 = BUILTIN::VDIST(vVar12, vVar15);
						if (fVar11 < fVar8)
						{
							(*uParam3)[iVar72 /*4*/] = (uParam3[iVar72 /*4*/] + iVar5);
						}
						else if (fVar11 < fVar9)
						{
							(*uParam3)[iVar72 /*4*/] = (uParam3[iVar72 /*4*/] + iVar6);
						}
						else if (fVar11 < fVar10)
						{
							(*uParam3)[iVar72 /*4*/] = (uParam3[iVar72 /*4*/] + iVar7);
						}
					}
					iVar73++;
				}
				Jump @376; //curOff = 365
				(*uParam3)[iVar72 /*4*/] = iVar3;
			}
			iVar72++;
		}
	}
}

int func_308(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	NETWORK::_0x7E300B5B86AB1D1A(uParam0, *uParam0, 4, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	iVar3 = uParam0[0 /*4*/];
	if (iVar3 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 <= (*uParam0 - 1))
	{
		if (uParam0[iVar1 /*4*/] == iVar3)
		{
			iVar2 = iVar1;
		}
	else
	{
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 > 0)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar2);
	}
	else
	{
		iVar1 = 0;
	}
	uVar0 = ((*uParam0)[iVar1 /*4*/])->f_1.f_2;
	return uVar0;
}

bool func_310(vector3 vParam0, bool bParam3, bool bParam4, bool bParam5)
{
	vector3 vVar0;

	if (vParam0.z == 0)
	{
		return false;
	}
	if (!aggregate_func_2606(vParam0, &vVar0))
	{
		return false;
	}
	if (func_78(vParam0, bParam3, vVar0, bParam4, 1, 0, bParam5))
	{
		return true;
	}
	return false;
}

void func_326(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;

	Var0.f_8 = iParam0;
	if (bParam1)
	{
		iVar14 = 5;
	}
	else
	{
		iVar14 = 6;
	}
	aggregate_func_1437(iVar14, Var0, aggregate_func_4507(0, 8));
}

bool func_329(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;
	vector3 vVar10;
	int iVar13;

	if (!aggregate_func_1759(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -402732872;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var0.f_2 = -1420258246;
		if (!DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var0))
		{
			return false;
		}
		iVar13 = 0;
		while (iVar13 <= 50)
		{
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(*uParam3, iVar13, &vVar10, 17, 1077936128 /* Float: 3f */, 0))
			{
				*fParam4 = aggregate_func_3018(*uParam3, vVar10, 1);
				return true;
			}
			iVar13++;
		}
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
	}
	return false;
}

bool func_330(vector3 vParam0, int iParam3, var uParam4, float fParam5)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!aggregate_func_1759(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -1763127828;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = iParam3;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam4, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam5, &Var5);
		return true;
	}
	return false;
}

bool func_331(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!aggregate_func_1759(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 952598509;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
		return true;
	}
	return false;
}

bool func_332(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!aggregate_func_1759(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -466985247;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
		return true;
	}
	return false;
}

bool func_333(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!aggregate_func_1759(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = -1629816098;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
		return true;
	}
	return false;
}

bool func_334(vector3 vParam0, var uParam3, float fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!aggregate_func_1759(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 1078091189;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -1420258246;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1073571568;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam4, &Var5);
		return true;
	}
	return false;
}

int func_338(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_356(iParam0);
	if (!aggregate_func_2823(bVar0, 0))
	{
		return 0;
	}
	iVar1 = aggregate_func_6048(bVar0, 0, 59806960);
	return iVar1;
}

void func_350(int iParam0, vector3 vParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	((*Global_1126840)[iVar0 /*83*/])->f_38.f_7 = iParam0;
	((*Global_1126840)[iVar0 /*83*/])->f_38.f_8 = { vParam1 };
}

void func_353(int iParam0)
{
	struct<14> Var0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	Var0.f_5 = { ((*Global_1123778)[iParam0 /*27*/])->f_1 };
	aggregate_func_1437(14, Var0, aggregate_func_1263(_NAMESPACE26::_0x901E0DC25080C8B9(((*Global_1123778)[iParam0 /*27*/])->f_9)));
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1082007132;
		case 7:
			return -1321348724;
		default:
			break;
	}
	return 0;
}

int func_359()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return ((*Global_1126840)[iVar0 /*83*/])->f_38.f_28.f_3;
	}
	return -1;
}

int func_373(bool bParam0)
{
	if (!aggregate_func_2823(bParam0, 0))
	{
		return 2;
	}
	switch (bParam0)
	{
		case 1046181202:
			return 2;
		case 1856073229:
			return 3;
		case -1612693182:
			return 4;
		case 1689071181:
			return 5;
		case -1171462349:
			return 6;
		default:
			break;
	}
	if (aggregate_func_2852(bParam0, -2011345500))
	{
		return 7;
	}
	return 2;
}

int func_375(bool bParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var14;

	iVar0 = iParam1;
	if (iParam1 == 1)
	{
	}
	Var1.f_1 = 11;
	while (iVar0 > 10)
	{
		aggregate_func_4575(&Var1, 964458272);
		if (!aggregate_func_6951(-1463094839, &Var1, 0, 255, 0, 0))
		{
			return 0;
		}
		iVar0 = (iVar0 - 10);
	}
	Var14.f_1 = 11;
	switch (iVar0)
	{
		case 2:
			aggregate_func_4575(&Var14, 1206214767);
			break;
		case 3:
			aggregate_func_4575(&Var14, 1048858029);
			break;
		case 4:
			aggregate_func_4575(&Var14, 2003386234);
			break;
		case 5:
			aggregate_func_4575(&Var14, 1510933702);
			break;
		case 6:
			aggregate_func_4575(&Var14, -712967248);
			break;
		case 7:
			aggregate_func_4575(&Var14, -1206075160);
			break;
		case 8:
			aggregate_func_4575(&Var14, -246762689);
			break;
		case 9:
			aggregate_func_4575(&Var14, -414474431);
			break;
		case 10:
			aggregate_func_4575(&Var14, 964458272);
			break;
	}
	if (!aggregate_func_6951(-1463094839, &Var14, 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_383()
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

int func_434(vector3 vParam0)
{
	struct<4> Var0;
	int iVar5;

	if (!aggregate_func_1759(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -265879762;
	Var0.f_3 = 0;
	iVar5 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
	return iVar5;
}

int func_435(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	if (!aggregate_func_1759(&Var2, vParam1))
	{
		return 0;
	}
	Var2.f_2 = -265879762;
	Var2.f_3 = iParam0;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = 536676462;
		if (DATAFILE::_DATAFILE_GET_INT(&iVar1, &Var2))
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

int func_464(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * aggregate_func_4295(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

void func_504(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case 1234009870: /* GXTEntry: "Revolver Cartridges - Regular" */
			*uParam1 = 1802325493;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case -1202134084: /* GXTEntry: "Opened Revolver Cartridges" */
			*uParam1 = -864693164;
			*uParam2 = 1681219929; /* GXTEntry: "Revolver Cartridges - Regular" */
			break;
		case 1297050066: /* GXTEntry: "Revolver Cartridges - Express" */
			*uParam1 = -603289736;
			*uParam2 = 1232099469; /* GXTEntry: "Revolver Cartridges - Express" */
			break;
		case -1780177928: /* GXTEntry: "Revolver Cartridges - High Velocity" */
			*uParam1 = -1803237008;
			*uParam2 = -2084181920; /* GXTEntry: "Revolver Cartridges - High Velocity" */
			break;
		case -1467836497: /* GXTEntry: "Pistol Cartridges - Regular" */
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		case 1723805622: /* GXTEntry: "Opened Pistol Cartridges" */
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			Jump @526; //curOff = 257
			*uParam1 = -1650796693;
			*uParam2 = 836939099; /* GXTEntry: "Pistol Cartridges - Express" */
			Jump @526; //curOff = 276
			*uParam1 = -1521597660;
			*uParam2 = -1411815376; /* GXTEntry: "Pistol Cartridges - High Velocity" */
			Jump @526; //curOff = 295
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			Jump @526; //curOff = 314
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			Jump @526; //curOff = 333
			*uParam1 = -851229814;
			*uParam2 = 1654725195; /* GXTEntry: "Rifle Cartridges - Express" */
			Jump @526; //curOff = 352
			*uParam1 = 914704115;
			*uParam2 = 1858824185; /* GXTEntry: "Rifle Cartridges - High Velocity" */
			Jump @526; //curOff = 371
			*uParam1 = -219896679;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			Jump @526; //curOff = 390
			*uParam1 = 516838334;
			*uParam2 = -1330115686; /* GXTEntry: "Repeater Cartridges - Regular" */
			Jump @526; //curOff = 409
			*uParam1 = -385817936;
			*uParam2 = -578347576; /* GXTEntry: "Repeater Cartridges - Express" */
			Jump @526; //curOff = 428
			*uParam1 = 1192843172;
			*uParam2 = 231465488; /* GXTEntry: "Repeater Cartridges - High Velocity" */
			Jump @526; //curOff = 447
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			Jump @526; //curOff = 466
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			Jump @526; //curOff = 485
			*uParam1 = -2087227528;
			*uParam2 = 314966081; /* GXTEntry: "Shotgun - Slug" */
			Jump @526; //curOff = 504
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
		}

