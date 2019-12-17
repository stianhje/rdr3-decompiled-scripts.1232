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
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	aggregate.net_beat_manager.func_1();
	while (!aggregate.net_beat_manager.func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	aggregate.aberdeenpigfarm.func_23();
	aggregate.aberdeenpigfarm.func_46();
}

void func_3()
{
	if (!aggregate.annesburg.func_109())
	{
		return;
	}
	if ((aggregate.aberdeenpigfarm.func_156() || Global_1048585) // PointerArith)
	{
		return;
	}
	if (func_14())
	{
		func_15();
	}
	else
	{
		Global_1244208->f_2004 = 1;
		Global_1244208->f_2005 = 0;
	}
	func_16();
}

void func_9()
{
	aggregate.fme_animal_tagging.func_622();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1240910, 1505, 45);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(Global_1240910), 1505, "g_mpBeatManagerHostData");
	aggregate.fme_escaped_convicts.func_423();
	func_22();
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1242415, 1793, 46);
	aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2((*Global_1242415)[0 /*56*/]), 1793, "g_mpBeatManagerPlayerData");
	if (!aggregate.dynamic_craft_scenario.func_452())
	{
		func_25();
	}
}

bool func_14()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(&(Global_1051202->f_16[15]), false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_beat_manager", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::_0xB4A25351D79B444C(&(Global_1051202->f_16[15]));
}

void func_15()
{
	switch (Global_1244208->f_2004)
	{
		case 0:
			func_27();
			break;
		case 1:
			func_28();
			break;
		case 2:
			func_29();
			break;
		case 3:
			func_30();
			break;
	}
}

void func_16()
{
	switch (Global_1244208->f_2001)
	{
		case 0:
			func_31();
			break;
		case 1:
			func_32();
			break;
		case 2:
			func_33();
			break;
		case 3:
			func_34();
			break;
	}
}

void func_22()
{
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 15)
	{
		((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_36[iVar0] = func_38(iVar0);
		iVar0++;
	}
}

void func_25()
{
	struct<2102> Var0;

	Var0 = 500;
	Var0.f_2006 = 32;
	Var0.f_2039 = 32;
	Var0.f_2073 = 24;
	Var0.f_2101 = -1;
	MISC::_COPY_MEMORY(Global_1244208, &Var0, 2103);
	Global_1244208->f_2001 = 0;
	func_39();
}

void func_27()
{
	if (Global_1244208->f_2001 > 0)
	{
		func_42(1);
	}
}

void func_28()
{
	if (aggregate.fm_race_controller.func_1990())
	{
		func_44();
		func_45();
		Global_1244208->f_2005 = 0;
		func_46();
		func_47(2, 0);
		func_42(2);
	}
}

void func_29()
{
	struct<12> Var0;
	int iVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	Var0.f_10 = 1106247680;
	if (!func_48(2))
	{
		func_49(0, Global_1244208->f_2005);
		func_50(2, 0);
	}
	if (!func_51())
	{
		return;
	}
	if (!func_52(&iVar17, &uVar18, &iVar19, &iVar20))
	{
		func_42(1);
		return;
	}
	aggregate.la_alligator.func_31(&Var0, iVar17, iVar19, -1, 255);
	if (func_54(Var0.f_11, 1084227584 /* Float: 5f */, 70f))
	{
		func_42(1);
		return;
	}
	if (Var0.f_6 == 2)
	{
		uVar21 = aggregate.nb_duel.func_77(iVar17);
		func_56(uVar21, iVar19, 32);
	}
	else if (Var0.f_6 == 1)
	{
		iVar22 = PLAYER::INT_TO_PLAYERINDEX(iVar20);
		iVar23 = func_57(iVar17, iVar19, &Var0, iVar22);
		iVar24 = func_58(iVar17, iVar19, iVar23);
		func_59(iVar17, iVar19, iVar23, iVar24, iVar22);
	}
	func_42(3);
}

void func_30()
{
	if (!aggregate.aberdeenpigfarm.func_165(Global_1240910->f_1501.f_3))
	{
		aggregate.la_alligator.func_102(&(Global_1240910->f_1501.f_3));
		return;
	}
	if (aggregate.la_alligator.func_103(Global_1240910->f_1501.f_3) >= Global_1901929->f_230.f_61)
	{
		aggregate.camera_item.func_21(&(Global_1240910->f_1501.f_3));
		func_42(1);
	}
}

void func_31()
{
	if (Global_1232796->f_8111 != 2)
	{
		return;
	}
	func_64();
	func_65(1);
}

void func_32()
{
	if (Global_1232796->f_8111 != 2)
	{
		return;
	}
	if (Global_1244208->f_2002 == 0)
	{
		Global_1244208->f_2002 = func_66();
	}
	func_67(1);
	func_65(2);
}

void func_33()
{
	bool bVar0;

	if (aggregate.aberdeenpigfarm.func_165(Global_1240910->f_1501.f_3))
	{
		func_68(1, 0);
		func_65(3);
		return;
	}
	if (aggregate.aberdeenpigfarm.func_165(Global_1244208->f_2003))
	{
		if (aggregate.la_alligator.func_103(Global_1244208->f_2003) < Global_1901929->f_230.f_53)
		{
			func_67(1);
			func_68(1, 1);
			return;
		}
		else
		{
			aggregate.camera_item.func_21(&(Global_1244208->f_2003));
		}
	}
	if (func_69(&bVar0))
	{
		if (!bVar0)
		{
			func_70(1, 0);
		}
		else
		{
			func_68(1, 0);
		}
	}
}

void func_34()
{
	if (!aggregate.aberdeenpigfarm.func_165(Global_1240910->f_1501.f_3))
	{
		func_65(1);
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_42(1);
		}
	}
	else
	{
		func_42(3);
	}
}

void func_35()
{
	vector3 vVar0;
	int iVar3;

	vVar0.f_2 = -15;
	iVar3 = 0;
	while (iVar3 <= 499)
	{
		*((*Global_1240910)[iVar3 /*3*/]) = { vVar0 };
		iVar3++;
	}
}

void func_36()
{
	struct<4> Var0;

	Global_1240910->f_1501 = { Var0 };
}

void func_37(int iParam0)
{
	struct<56> Var0;

	Var0 = 17;
	Var0.f_18 = 17;
	Var0.f_36 = 16;
	Var0.f_53 = -1;
	*((*Global_1242415)[iParam0 /*56*/]) = { Var0 };
}

int func_38(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { aggregate.la_alligator.func_214(iParam0, 1346578557) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_39()
{
	struct<4> Var0;
	int iVar4;

	iVar4 = 0;
	while (iVar4 <= 499)
	{
		*((*Global_1244208)[iVar4 /*4*/]) = { Var0 };
		iVar4++;
	}
}

void func_42(int iParam0)
{
	if (Global_1244208->f_2004 != iParam0)
	{
		Global_1244208->f_2004 = iParam0;
	}
}

void func_44()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1244208->f_2006[iVar0] != -1)
		{
			Global_1244208->f_2006[iVar0] = -1;
			Global_1244208->f_2039[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_45()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (Global_1244208->f_2002 - 1))
	{
		if (((*Global_1240910)[iVar0 /*3*/])->f_1 != 0)
		{
			((*Global_1240910)[iVar0 /*3*/])->f_1 = 0;
		}
		iVar0++;
	}
}

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar1 = ((*Global_1242415)[iVar0 /*56*/])->f_53;
			if (!func_73(iVar1))
			{
				Global_1244208->f_2006[iVar2] = iVar1;
				Global_1244208->f_2039[iVar2] = ((*Global_1242415)[iVar0 /*56*/])->f_54;
				iVar2++;
			}
		}
		iVar0++;
	}
}

void func_47(int iParam0, bool bParam1)
{
	if (func_48(iParam0))
	{
		if (bParam1)
		{
		}
		aggregate.aberdeenpigfarm.func_163(&(Global_1240910->f_1501.f_1), iParam0);
	}
}

bool func_48(int iParam0)
{
	return aggregate.aberdeenpigfarm.func_175(Global_1240910->f_1501.f_1, iParam0);
}

void func_49(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1244208->f_2006[iVar1] == -1)
		{
		}
		else
		{
			iVar2 = &Global_1244208->f_2006[iVar1];
			if (iVar2 >= 0)
			{
				if (bParam0)
				{
					func_76(&iVar0, iVar2, iParam1);
				}
				else
				{
					aggregate.bandana.func_26(&iVar0, iVar2);
				}
				if (iVar0 != 0)
				{
					Global_1244208->f_2006[iVar1] = -2;
				}
			}
			iVar1++;
		}
	}
}

void func_50(int iParam0, bool bParam1)
{
	if (!func_48(iParam0))
	{
		if (bParam1)
		{
		}
		aggregate.aberdeenpigfarm.func_106(&(Global_1240910->f_1501.f_1), iParam0);
	}
}

bool func_51()
{
	int iVar0;

	while (iVar0 < 1)
	{
		func_49(1, Global_1244208->f_2005);
		iVar0++;
		Global_1244208->f_2005++;
		if (Global_1244208->f_2005 >= 32)
		{
		}
	else
	{
		}
	}
	if (Global_1244208->f_2005 < 32)
	{
		return false;
	}
	else
	{
		Global_1244208->f_2005 = 0;
	}
	return true;
}

bool func_52(var uParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	int iVar1;

	*uParam2 = -1;
	*uParam1 = -1;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (&Global_1244208->f_2006[iVar1] >= 0)
		{
			if (&Global_1244208->f_2039[iVar1] > fVar0)
			{
				*uParam1 = &Global_1244208->f_2006[iVar1];
				fVar0 = &Global_1244208->f_2039[iVar1];
				*uParam3 = iVar1;
			}
		}
		else if (&Global_1244208->f_2006[iVar1] == -1)
		{
		}
		else
		{
			iVar1++;
		}
	}
	if (*uParam1 >= 0 && *uParam1 < (Global_1244208->f_2002 - 1))
	{
		func_79(*uParam1, uParam0, uParam2);
		if (*uParam0 != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_54(vector3 vParam0, float fParam3, float fParam4)
{
	bool bVar0;

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(aggregate.camera_item.func_108(PLAYER::PLAYER_ID()), vParam0, true) <= (fParam4 + fParam3))
	{
		bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
	}
	if (!bVar0)
	{
		bVar0 = NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam0, fParam3, (fParam4 + fParam3));
	}
	return bVar0;
}

void func_56(var uParam0, int iParam1, int iParam2)
{
	struct<22> Var0;

	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	aggregate.gfh_campworks.func_395(&Var0, uParam0, iParam1, iParam2, -1);
	func_99(&Var0);
}

int func_57(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (aggregate.fishing_core.func_34(uParam2, 16))
	{
		return func_101(iParam0, uParam2, iParam3);
	}
	return func_102(iParam0, iParam1, uParam2);
}

int func_58(int iParam0, int iParam1, int iParam2)
{
	struct<11> Var0;

	Var0.f_10 = 1106247680;
	aggregate.la_alligator.func_31(&Var0, iParam0, iParam1, iParam2, 255);
	return aggregate.fme_king_of_the_rails.func_707(Var0.f_4, Var0.f_2, 1, 0);
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<24> Var0;
	struct<17> Var40;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = 2147483647;
	Var0.f_23.f_13 = -1;
	Var40.f_10 = 1106247680;
	aggregate.la_alligator.func_31(&Var40, iParam0, iParam1, -1, 255);
	aggregate.la_alligator.func_68(&(Var0.f_8.f_5), Var40);
	Var0.f_2 = 7;
	Var0.f_5 = 0;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = 2;
	Var0.f_8.f_2 = { Var40.f_11 };
	Var0.f_23 = func_105(iParam0);
	Var0.f_23.f_1 = func_106(iParam0);
	Var0.f_23.f_5 = iParam4;
	Var0.f_23.f_14 = iParam1;
	Var0.f_23.f_15 = iParam2;
	Var0.f_23.f_16 = iParam3;
	Var0.f_23.f_7 = 1;
	(Var0.f_23.f_8[0 /*4*/])->f_3 = BUILTIN::FLOOR(Global_1901929->f_230.f_57);
	Var0.f_23.f_2 = BUILTIN::FLOOR(Global_1901929->f_230.f_58);
	Var0.f_23.f_8[0 /*4*/] = aggregate.fme_escaped_convicts.func_1232(Var40.f_11);
	Var0.f_23.f_6 = 3505;
	aggregate.net_beat_manager.func_108((*Global_1187677)[&Global_1273882 /*204*/], &Var0, 0, 0, 0, 0, 0);
	aggregate.net_beat_manager.func_109(&Var0);
}

void func_64()
{
	int iVar0;
	struct<11> Var1;
	int iVar18;

	Var1.f_10 = 1106247680;
	iVar18 = 0;
	while (iVar18 <= 23)
	{
		aggregate.la_alligator.func_31(&Var1, iVar18, -1, -1, 255);
		if (Var1.f_6 == 2)
		{
			aggregate.flow_controller.func_298(Var1.f_8);
			iVar0 = aggregate.flow_controller.func_298(Var1.f_8);
			Global_1244208->f_2073[iVar18] = iVar0;
		}
		iVar18++;
	}
}

void func_65(int iParam0)
{
	if (Global_1244208->f_2001 != iParam0)
	{
		Global_1244208->f_2001 = iParam0;
	}
}

int func_66()
{
	struct<11> Var0;
	int iVar17;
	int iVar18;
	int iVar19;

	Var0.f_10 = 1106247680;
	iVar19 = 1;
	while (iVar19 <= 23)
	{
		iVar17 = iVar19;
		aggregate.la_alligator.func_31(&Var0, iVar17, -1, -1, 255);
		iVar18 = (iVar18 + Var0);
		iVar19++;
	}
	return iVar18;
}

void func_67(bool bParam0)
{
	Global_1244208->f_2100 = 0;
	Global_1244208->f_2099 = 0;
	Global_1244208->f_2098 = 1;
	Global_1244208->f_2101 = -1;
	Global_1244208->f_2102 = 0f;
	if (bParam0)
	{
		((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_53 = -1;
		((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_54 = 0f;
	}
}

void func_68(int iParam0, bool bParam1)
{
	if (func_111(iParam0, 255))
	{
		if (bParam1)
		{
		}
		aggregate.aberdeenpigfarm.func_163(&(((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_55), iParam0);
	}
}

bool func_69(var uParam0)
{
	int iVar0;
	struct<11> Var1;
	bool bVar18;

	Var1.f_10 = 1106247680;
	while (iVar0 < 3)
	{
		aggregate.la_alligator.func_31(&Var1, Global_1244208->f_2098, Global_1244208->f_2099, -1, 255);
		if (Var1 <= 0)
		{
			func_112(&bVar18);
		}
		else
		{
			func_113(Global_1244208->f_2098, Global_1244208->f_2099, Global_1244208->f_2100, &Var1);
			iVar0++;
			Global_1244208->f_2099++;
			Global_1244208->f_2100++;
			if (Global_1244208->f_2100 == 499)
			{
				bVar18 = true;
			}
			else
			{
				if (Var1 == Global_1244208->f_2099)
				{
					func_112(&bVar18);
				}
			}
		}
	}
	if (!bVar18)
	{
		return false;
	}
	if (Global_1244208->f_2101 != -1)
	{
		((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_53 = Global_1244208->f_2101;
		((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_54 = Global_1244208->f_2102;
	}
	else
	{
		((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_53 = -1;
		((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_54 = 0f;
		*uParam0 = 1;
	}
	func_67(0);
	return true;
}

void func_70(int iParam0, bool bParam1)
{
	if (!func_111(iParam0, 255))
	{
		if (bParam1)
		{
		}
		aggregate.aberdeenpigfarm.func_106(&(((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_55), iParam0);
	}
}

int func_72(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_111(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_73(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1244208->f_2006[iVar0] == iParam0)
		{
			return true;
		}
		else if (&Global_1244208->f_2006[iVar0] == -1)
		{
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_76(var uParam0, int iParam1, int iParam2)
{
	func_116(uParam0, iParam1, iParam2);
	func_117(uParam0, iParam1, iParam2);
}

int func_79(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	Var2.f_10 = 1106247680;
	iVar1 = 1;
	while (iVar1 <= 23)
	{
		*uParam1 = iVar1;
		aggregate.la_alligator.func_31(&Var2, *uParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*uParam2 = 0;
			while (*uParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0 = (iVar0 + 1);
				*uParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_99(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[12] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[12])))
	{
		return;
	}
	*uParam0 = 172;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 40, 5, &(Global_1051202->f_16[12]));
	aggregate.gfh_campworks.func_417(uParam0, uParam0->f_1);
}

int func_101(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0;
	iVar1 = func_136(uParam1->f_3, &(((*Global_1242415)[iParam2 /*56*/])->f_36[iVar0]));
	if (iVar1 == 0)
	{
		iVar2 = (uParam1->f_1 - 1);
		while (iVar2 >= 0)
		{
			if (MISC::IS_BIT_SET(uParam1->f_3, iVar2))
			{
				return iVar2;
			}
			iVar2 = (iVar2 + -1);
		}
		return 0;
	}
	return func_137(iVar1);
}

int func_102(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;

	iVar0 = iParam0;
	iVar19 = -1;
	iVar20 = 0;
	while (iVar20 <= 31)
	{
		iVar22 = PLAYER::INT_TO_PLAYERINDEX(iVar20);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22))
		{
		}
		else if (aggregate.blackwater.func_175(aggregate.camera_item.func_108(iVar22), uParam2->f_11) > Global_1901929->f_230.f_57)
		{
		}
		else
		{
			iVar21 = func_136(uParam2->f_3, &(((*Global_1242415)[iVar20 /*56*/])->f_36[iVar0]));
			iVar19 = (iVar19 && iVar21);
			iVar18 = func_139(iVar21, 0);
			if (iVar18 != -1)
			{
				uVar1[iVar18] = &uVar1[iVar18] + 1;
			}
		}
		iVar20++;
	}
	if (aggregate.fme_king_of_the_rails.func_706(iVar19) > 0)
	{
		iVar23 = aggregate.fme_king_of_the_rails.func_707(iVar19, uParam2->f_1, 1, 0);
		return iVar23;
	}
	else
	{
		iVar24 = -1;
		iVar25 = -1;
		iVar18 = 0;
		while (iVar18 <= 15)
		{
			if (&uVar1[iVar18] == 0)
			{
			}
			else if (&uVar1[iVar18] > iVar25)
			{
				iVar24 = iVar18;
				iVar25 = &uVar1[iVar18];
			}
			iVar18++;
		}
		if (iVar24 != -1)
		{
			return iVar24;
		}
	}
	return func_141(iParam0, iParam1);
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1881122909;
		case 2:
			return 1746254613;
		case 3:
			return -210940392;
		case 4:
			return -337883659;
		case 6:
			return -2127851115;
		case 7:
			return -1515832348;
		case 5:
			return -392050235;
		case 11:
			return -16753530;
		case 8:
			return -1210919694;
		case 9:
			return -1628357986;
		case 10:
			return -1054322328;
		case 12:
			return -1488065830;
		case 13:
			return 1903114091;
		case 14:
			return 1623440542;
		case 15:
			return -726533106;
		default:
			break;
	}
	return 0;
}

int func_106(int iParam0)
{
	return 2452;
}

bool func_111(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return aggregate.aberdeenpigfarm.func_175(((*Global_1242415)[iParam1 /*56*/])->f_55, iParam0);
}

void func_112(int iParam0)
{
	int iVar0;

	Global_1244208->f_2099 = 0;
	iVar0 = Global_1244208->f_2098;
	iVar0++;
	if (iVar0 == 24)
	{
		*iParam0 = 1;
	}
	else
	{
		Global_1244208->f_2098 = iVar0;
	}
}

void func_113(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	iVar1 = iVar2;
	fVar0 = (fVar0 + func_152(&iVar1, iParam0, iParam1, iParam2, iParam3));
	if (iVar1 != 0)
	{
		fVar0 = -1f;
	}
	else if (fVar0 > Global_1244208->f_2102)
	{
		Global_1244208->f_2102 = fVar0;
		Global_1244208->f_2101 = iParam2;
	}
	((*Global_1244208)[iParam2 /*4*/])->f_3 = iVar1;
	if (((*Global_1244208)[iParam2 /*4*/])->f_1 < Global_1273882->f_21)
	{
		func_153(iParam2);
		((*Global_1244208)[iParam2 /*4*/])->f_1 = 0;
		((*Global_1244208)[iParam2 /*4*/])->f_2 = 0;
	}
}

void func_116(var uParam0, int iParam1, int iParam2)
{
	if (func_154(iParam1, iParam2))
	{
		func_155(uParam0, iParam1, 8192, "host");
	}
}

void func_117(var uParam0, int iParam1, int iParam2)
{
	if (func_156(iParam1, iParam2))
	{
		((*Global_1240910)[iParam1 /*3*/])->f_1++;
	}
	if (((*Global_1240910)[iParam1 /*3*/])->f_1 > 7)
	{
		func_155(uParam0, iParam1, 4096, "host");
	}
}

void func_118(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = Global_1901929->f_230.f_55;
	if (fVar0 < 1f)
	{
		if (aggregate.aberdeenpigfarm.func_165(Global_1240910[iParam1 /*3*/]) && aggregate.la_alligator.func_103(Global_1240910[iParam1 /*3*/]) < Global_1901929->f_230.f_54)
		{
			func_155(uParam0, iParam1, 32, "host");
			aggregate.la_alligator.func_102((*Global_1240910)[iParam1 /*3*/]);
			return;
		}
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar1 > fVar0)
		{
			Global_1240910->f_1501.f_2++;
			if (Global_1240910->f_1501.f_2 < 10)
			{
				func_155(uParam0, iParam1, 32, "host");
				aggregate.la_alligator.func_102((*Global_1240910)[iParam1 /*3*/]);
			}
			else
			{
				aggregate.camera_item.func_21((*Global_1240910)[iParam1 /*3*/]);
				Global_1240910->f_1501.f_2 = 0;
			}
		}
		else
		{
			aggregate.camera_item.func_21((*Global_1240910)[iParam1 /*3*/]);
			Global_1240910->f_1501.f_2 = 0;
		}
	}
}

int func_136(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = (uParam1 && iParam0);
	return iVar0 ^ iParam0;
}

int func_137(int iParam0)
{
	iParam0 = (iParam0 && -iParam0);
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return 0;
		case 2:
			return 1;
		case 4:
			return 2;
		case 8:
			return 3;
		case 16:
			return 4;
		case 32:
			return 5;
		case 64:
			return 6;
		case 128:
			return 7;
		case 256:
			return 8;
		case 512:
			return 9;
		case 1024:
			return 10;
		case 2048:
			return 11;
		case 4096:
			return 12;
		case 8192:
			return 13;
		case 16384:
			return 14;
		case 32768:
			return 15;
		case 65536:
			return 16;
		case 131072:
			return 17;
		case 262144:
			return 18;
		case 524288:
			return 19;
		case 1048576:
			return 20;
		case 2097152:
			return 21;
		case 4194304:
			return 22;
		case 8388608:
			return 23;
		case 16777216:
			return 24;
		case 33554432:
			return 25;
		case 67108864:
			return 26;
		case 134217728:
			return 27;
		case 268435456:
			return 28;
		case 536870912:
			return 29;
		case 1073741824:
			return 30;
	}
	return -1;
}

int func_139(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	while (iVar0 <= 31)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_141(int iParam0, int iParam1)
{
	struct<11> Var0;

	Var0.f_10 = 1106247680;
	aggregate.la_alligator.func_31(&Var0, iParam0, iParam1, -1, 255);
	return aggregate.fme_king_of_the_rails.func_707(Var0.f_3, Var0.f_1, 1, 0);
}

int func_142(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

void func_150(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 45, 36, &uParam1);
}

float func_152(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;

	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar1 = (fVar1 + func_168(iParam0, iParam1, iParam2, iParam3, iParam4, iVar0));
		if (!func_169(iParam0))
		{
		}
		else
		{
			iVar0++;
		}
	}
	func_170(iParam0, iParam3, iParam1, iParam4);
	return fVar1;
}

void func_153(int iParam0)
{
	aggregate.annesburg.func_233(&(((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_18), iParam0, 17);
}

bool func_154(int iParam0, int iParam1)
{
	return aggregate.annesburg.func_264(&(((*Global_1242415)[iParam1 /*56*/])->f_18), iParam0, 17);
}

void func_155(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!aggregate.aberdeenpigfarm.func_175(*iParam0, iParam2))
	{
		func_173(iParam1, iParam2);
		aggregate.aberdeenpigfarm.func_106(iParam0, iParam2);
	}
}

bool func_156(int iParam0, int iParam1)
{
	return aggregate.annesburg.func_264(&(((*Global_1242415)[iParam1 /*56*/])->f_18), iParam0, 17);
}

float func_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam5)
	{
		case 0:
			return func_184(iParam0, iParam1, iParam2, iParam3, iParam4);
		case 1:
			return func_185(iParam0, iParam3);
		case 2:
			return func_186(iParam0, iParam3, iParam4);
		case 3:
			return func_187(iParam0, iParam1, iParam2, iParam3, iParam4);
		case 4:
			return func_188(iParam0, iParam3, iParam4);
		case 5:
			return func_189(iParam0, iParam3, iParam4);
		case 6:
			return func_190(iParam0, iParam1, iParam3, iParam4);
		case 8:
			return func_191(iParam0, iParam3);
		case 14:
			return func_192(iParam0, iParam1, iParam3, iParam4);
		case 9:
			return func_193(iParam0, iParam3, iParam4);
		case 10:
			return func_194(iParam0, iParam3, iParam4);
		case 11:
			return func_195(iParam0, iParam1, iParam3, iParam4);
		case 12:
			return func_196(iParam0, iParam3);
		case 13:
			return func_197(iParam0, iParam1, iParam3, iParam4);
		default:
			break;
	}
	return 0f;
}

bool func_169(int iParam0)
{
	return *iParam0 == 0;
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (*iParam0 == 0)
	{
		return;
	}
	iVar0 = 417341510;
	if (aggregate.aberdeenpigfarm.func_175(*iParam0, iVar0))
	{
		return;
	}
	if (*iParam0 == ((*Global_1244208)[iParam1 /*4*/])->f_3)
	{
		return;
	}
	TELEMETRY::_0x6571E4327390EC0B(iParam3->f_5, iParam2, Global_36, *iParam0);
}

void func_173(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam1)
	{
		case 2:
			if (((*Global_1244208)[iParam0 /*4*/])->f_2 == 1)
			{
				func_153(iParam0);
				((*Global_1244208)[iParam0 /*4*/])->f_1 = 0;
				((*Global_1244208)[iParam0 /*4*/])->f_2 = 0;
			}
			break;
	}
	iVar0 = func_198(iParam1);
	if (iVar0 != 0)
	{
		iVar1 = (Global_1273882->f_21 + (iVar0 / 1000));
		if (((*Global_1244208)[iParam0 /*4*/])->f_1 == 0 || ((*Global_1244208)[iParam0 /*4*/])->f_1 < iVar1)
		{
			func_199(iParam0);
			((*Global_1244208)[iParam0 /*4*/])->f_1 = iVar1;
			((*Global_1244208)[iParam0 /*4*/])->f_2 = iParam1;
		}
	}
}

int func_177(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!aggregate.aberdeenpigfarm.func_176(iParam0))
	{
		return 0;
	}
	if (aggregate.annesburg.func_267(iParam0, iParam1, &uVar0))
	{
		aggregate.fme_animal_tagging.func_1399(iParam0, &uVar0, uParam2);
	}
	else
	{
		return 0;
	}
	return 1;
}

float func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	vVar0 = { iParam4->f_11 };
	if (aggregate.fishing_core.func_34(iParam4, 1) && aggregate.annesburg.func_121(vVar0))
	{
		func_155(iParam0, iParam3, 256, 0);
		return -1f;
	}
	if (func_207(vVar0, &bVar3))
	{
		func_208(iParam3);
		if (bVar3)
		{
			func_155(iParam0, iParam3, 1, 0);
			return -1f;
		}
		bVar4 = true;
	}
	if (iParam4->f_6 == 2)
	{
		iVar5 = aggregate.nb_duel.func_77(iParam1);
		iVar6 = aggregate.flow_controller.func_476(iVar5, iParam2);
		if (iVar6 > 0)
		{
			iVar7 = 0;
			while (iVar7 <= (iVar6 - 1))
			{
				vVar0 = { aggregate.flow_controller.func_477(aggregate.flow_controller.func_361(iVar5), iParam2, iVar7) };
				if (func_207(vVar0, &bVar3))
				{
					func_208(iParam3);
					if (bVar3)
					{
						func_155(iParam0, iParam3, 1, 0);
						return -1f;
					}
					bVar4 = true;
				}
				iVar7++;
			}
		}
	}
	if (bVar4)
	{
		return (0.25f + func_211());
	}
	func_212(iParam3);
	func_155(iParam0, iParam3, 2, 0);
	return -1f;
}

float func_185(int iParam0, int iParam1)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_155(iParam0, iParam1, 131072, 0);
		return 0f;
	}
	return 0f;
}

float func_186(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!aggregate.fishing_core.func_34(iParam2, 1))
	{
		return 0f;
	}
	iVar0 = aggregate.dynamic_craft_scenario.func_191(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	if (!aggregate.flow_controller.func_433(iVar0))
	{
		func_155(iParam0, iParam1, 256, 0);
		return 0f;
	}
	if (aggregate.flow_controller.func_434(iVar0))
	{
		func_155(iParam0, iParam1, 524288, 0);
		return 0f;
	}
	return 0f;
}

float func_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	vVar1 = { iParam4->f_11 };
	iVar5 = 0;
	while (iVar5 <= 12)
	{
		if (((*Global_1212887)[iVar5 /*27*/])->f_2 != -1)
		{
			fVar0 = aggregate.blackwater.func_175(vVar1, func_214(iVar5));
			if (fVar0 < Global_1901929->f_230.f_59)
			{
				func_155(iParam0, iParam3, 64, 0);
				return 0f;
			}
			if (iParam4->f_6 == 2)
			{
				iVar4 = aggregate.nb_duel.func_77(iParam1);
				iVar6 = aggregate.flow_controller.func_476(iVar4, iParam2);
				if (iVar6 > 0)
				{
					iVar7 = 0;
					while (iVar7 <= (iVar6 - 1))
					{
						vVar1 = { aggregate.flow_controller.func_477(aggregate.flow_controller.func_361(iVar4), iParam2, iVar7) };
						fVar0 = aggregate.blackwater.func_175(vVar1, *(((*Global_1223462)[iVar5 /*686*/])->f_609[iVar7 /*3*/]));
						if (fVar0 < Global_1901929->f_230.f_59)
						{
							func_155(iParam0, iParam3, 64, 0);
							return 0f;
						}
						iVar7++;
					}
				}
			}
		}
		iVar5++;
	}
	if (func_215(vVar1, 2, Global_1901929->f_230.f_59))
	{
		func_155(iParam0, iParam3, 64, 0);
		return 0f;
	}
	return 0f;
}

float func_188(int iParam0, int iParam1, int iParam2)
{
	if (func_216(iParam2->f_7))
	{
		func_155(iParam0, iParam1, 2097152, 0);
		return 0f;
	}
	return 0f;
}

float func_189(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_217(iParam2);
	if (iVar0 == -1)
	{
		return 0f;
	}
	if (aggregate.aberdeenpigfarm.func_165(Global_1244208[iParam1 /*4*/]) && aggregate.la_alligator.func_103(Global_1244208[iParam1 /*4*/]) < iVar0)
	{
		func_155(iParam0, iParam1, 8, 0);
		return 0f;
	}
	iVar1 = aggregate.flow_controller.func_144(aggregate.coffee_drinking.func_100(153786159));
	if (iVar1 == iParam2->f_5)
	{
		iVar2 = aggregate.flow_controller.func_144(aggregate.coffee_drinking.func_100(217123284));
		if (iVar2 != 0 && (Global_1273882->f_21 - iVar2) < (iVar0 / 1000))
		{
			func_155(iParam0, iParam1, 8, 0);
			return 0f;
		}
	}
	iVar3 = aggregate.flow_controller.func_144(aggregate.coffee_drinking.func_100(945205875));
	if (iParam2->f_9 == iVar3)
	{
		iVar4 = aggregate.flow_controller.func_144(aggregate.coffee_drinking.func_100(890183498));
		if (iVar4 != 0 && (Global_1273882->f_21 - iVar4) < (iVar0 / 1000))
		{
			func_155(iParam0, iParam1, 262144, 0);
			return 0f;
		}
	}
	return 0f;
}

float func_190(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (aggregate.fishing_core.func_34(iParam3, 32))
	{
		return 0f;
	}
	iVar0 = func_220(iParam1);
	if (aggregate.la_alligator.func_185(iParam1, iVar0))
	{
		func_155(iParam0, iParam2, 16, 0);
		return 0f;
	}
	return 0f;
}

float func_191(int iParam0, int iParam1)
{
	if (aggregate.aberdeenpigfarm.func_165(Global_1240910[iParam1 /*3*/]) && aggregate.la_alligator.func_103(Global_1240910[iParam1 /*3*/]) < Global_1901929->f_230.f_54)
	{
		func_155(iParam0, iParam1, 32, 0);
		return 0f;
	}
	return 0f;
}

float func_192(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam3->f_6 == 2)
	{
		iVar0 = aggregate.nb_duel.func_77(iParam1);
		iVar1 = aggregate.flow_controller.func_299(iVar0);
		if (iVar1 == -1261475678 && PLAYER::_0xFB6EB8785F808551(PLAYER::PLAYER_ID(), Global_1901929->f_230.f_29, false))
		{
			func_155(iParam0, iParam2, 65536, 0);
			return 0f;
		}
	}
	return 0f;
}

float func_193(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	func_223(iParam2->f_15, &iVar0, &iVar1);
	if (iVar0 == -1 || iVar1 == -1)
	{
		return 0f;
	}
	if (func_224(iVar0, iVar1))
	{
		return 0.25f;
	}
	func_155(iParam0, iParam1, 128, 0);
	return 0f;
}

float func_194(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_14 == 0)
	{
		return 0f;
	}
	if (aggregate.fme_king_of_the_rails.func_173(0) == iParam2->f_14)
	{
		return 0.25f;
	}
	func_155(iParam0, iParam1, 512, 0);
	return 0f;
}

float func_195(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3->f_6 == 2)
	{
		iVar0 = aggregate.nb_duel.func_77(iParam1);
		if (aggregate.angryisolationist.func_40(iVar0))
		{
			func_155(iParam0, iParam2, 16384, 0);
		}
	}
	return 0f;
}

float func_196(int iParam0, int iParam1)
{
	if (aggregate.camera_item.func_106(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_155(iParam0, iParam1, 32768, 0);
	}
	return 0f;
}

float func_197(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (((*Global_1240910)[iParam2 /*3*/])->f_2 != -15 && !aggregate.coffee_drinking.func_63(aggregate.aberdeenpigfarm.func_99(), ((*Global_1240910)[iParam2 /*3*/])->f_2, 1))
	{
		func_155(iParam0, iParam2, 1024, 0);
		return 0f;
	}
	if (!func_230(iParam3->f_7))
	{
		func_155(iParam0, iParam2, 268435456, 0);
		return 0f;
	}
	if (iParam3->f_6 == 2)
	{
		iVar2 = aggregate.nb_duel.func_77(iParam1);
		iVar3 = aggregate.flow_controller.func_299(iVar2);
		iVar0 = aggregate.flow_controller.func_394(iVar2, iParam3->f_5, iVar3, Global_36, 1, 0, 0, -1082130432 /* Float: -1f */);
		iVar1 = func_232(iVar0);
		if (iVar1 != 0)
		{
			func_155(iParam0, iParam2, iVar1, 0);
			return 0f;
		}
	}
	else if (iParam3->f_6 == 1)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iParam3->f_5))
		{
			func_155(iParam0, iParam2, 268435456, 0);
			return 0f;
		}
		if (aggregate.fishing_core.func_34(iParam3, 8) && !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			func_155(iParam0, iParam2, 1048576, 0);
			return 0f;
		}
	}
	return 0f;
}

int func_198(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1901929->f_230;
		case 2:
			return Global_1901929->f_230.f_1;
		case 4:
			return Global_1901929->f_230.f_2;
		case 8:
			return Global_1901929->f_230.f_3;
		case 16:
			return Global_1901929->f_230.f_4;
		case 32:
			return Global_1901929->f_230.f_5;
		case 64:
			return Global_1901929->f_230.f_13;
		case 128:
			return Global_1901929->f_230.f_14;
		case 256:
			return Global_1901929->f_230.f_15;
		case 512:
			return Global_1901929->f_230.f_16;
		case 1024:
			return Global_1901929->f_230.f_17;
		case 2048:
			return Global_1901929->f_230.f_18;
		case 4096:
			return Global_1901929->f_230.f_19;
		case 8192:
			return Global_1901929->f_230.f_20;
		case 16384:
			return Global_1901929->f_230.f_22;
		case 32768:
			return Global_1901929->f_230.f_23;
		case 65536:
			return Global_1901929->f_230.f_24;
		case 131072:
			return Global_1901929->f_230.f_25;
		case 524288:
			return Global_1901929->f_230.f_26;
		case 1048576:
			return Global_1901929->f_230.f_27;
		case 268435456:
			return Global_1901929->f_230.f_12;
		case 2097152:
			return Global_1901929->f_230.f_28;
		case 4194304:
			return Global_1901929->f_230.f_6;
		case 8388608:
			return Global_1901929->f_230.f_7;
		case 16777216:
			return Global_1901929->f_230.f_8;
		case 33554432:
			return Global_1901929->f_230.f_9;
		case 67108864:
			return Global_1901929->f_230.f_10;
		case 134217728:
			return Global_1901929->f_230.f_11;
		case 536870912:
			return Global_1901929->f_230.f_21;
		default:
			break;
	}
	return 0;
}

void func_199(int iParam0)
{
	aggregate.annesburg.func_240(&(((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/])->f_18), iParam0, 17);
}

bool func_207(vector3 vParam0, bool bParam3)
{
	float fVar0;

	fVar0 = aggregate.blackwater.func_175(Global_36, vParam0);
	if (fVar0 < Global_1901929->f_230.f_56)
	{
		*bParam3 = 1;
		return true;
	}
	if (fVar0 < Global_1901929->f_230.f_57)
	{
		return true;
	}
	return false;
}

void func_208(int iParam0)
{
	aggregate.annesburg.func_240((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/], iParam0, 17);
}

float func_211()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.1f);
}

void func_212(int iParam0)
{
	aggregate.annesburg.func_233((*Global_1242415)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/], iParam0, 17);
}

Vector3 func_214(int iParam0)
{
	return ((*Global_1223462)[iParam0 /*686*/])->f_606;
}

bool func_215(vector3 vParam0, int iParam3, float fParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	iVar1 = aggregate.la_alligator.func_198(iParam3);
	iVar2 = ((&Global_1184672->f_3[iParam3] + iVar1) - 1);
	iVar6 = iVar1;
	while (iVar6 <= iVar2)
	{
		if ((Global_1184672->f_231.f_1066[iVar6 /*17*/])->f_13 != 1 && (Global_1184672->f_231.f_1066[iVar6 /*17*/])->f_13 != 2)
		{
		}
		else
		{
			iVar7 = 0;
			while (iVar7 <= ((Global_1184672->f_231.f_1066[iVar6 /*17*/])->f_7 - 1))
			{
				vVar3 = { aggregate.net_ambient_content_evaluator.func_171(iVar6, iVar7) };
				if (aggregate.annesburg.func_121(vVar3))
				{
				}
				else
				{
					if (fParam4 == -1f)
					{
						fVar0 = BUILTIN::TO_FLOAT(func_249(iVar6, iVar7));
						if (fVar0 == BUILTIN::TO_FLOAT(2147483647))
						{
							return true;
						}
					}
					else
					{
						fVar0 = fParam4;
					}
					if (aggregate.blackwater.func_175(vParam0, vVar3) < fVar0)
					{
						return true;
					}
				}
				iVar7++;
			}
		}
		iVar6++;
	}
	return false;
}

bool func_216(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_250(iParam0) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return false;
	}
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	if (iVar2 == 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			if ((Global_1273882->f_21 - iVar2) < Global_1901929->f_230.f_51)
			{
				return true;
			}
			break;
		case 2:
			if ((Global_1273882->f_21 - iVar2) < Global_1901929->f_230.f_52)
			{
				return true;
			}
			break;
		default:
			break;
	}
	return false;
}

int func_217(int iParam0)
{
	switch (iParam0->f_6)
	{
		case 2:
			return Global_1901929->f_230.f_48;
		case 1:
			return Global_1901929->f_230.f_49;
	}
	return -1;
}

int func_220(int iParam0)
{
	int iVar0;

	iVar0 = (Global_1901929->f_230.f_50 / 1000);
	return BUILTIN::CEIL((IntToFloat(iVar0) * func_251(iParam0)));
}

void func_223(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case -2094060557:
			*iParam1 = 6;
			*iParam2 = 10;
			break;
		case 328288820:
			*iParam1 = 10;
			*iParam2 = 14;
			break;
		case -1575618003:
			*iParam1 = 14;
			*iParam2 = 18;
			break;
		case -1205003059:
			*iParam1 = 18;
			*iParam2 = 22;
			break;
		case -281953142:
			*iParam1 = 0;
			*iParam2 = 6;
			break;
		case 390845486:
			*iParam1 = 6;
			*iParam2 = 12;
			break;
		case 495559496:
			*iParam1 = 12;
			*iParam2 = 18;
			break;
		case 48904803:
			*iParam1 = 18;
			*iParam2 = 0;
			break;
		case -2090512547:
			*iParam1 = 22;
			*iParam2 = 4;
			break;
		case -1142645407:
			*iParam1 = 6;
			*iParam2 = 14;
			break;
		case 2059113913:
			*iParam1 = 14;
			*iParam2 = 22;
			break;
		case 272045896:
			*iParam1 = 0;
			*iParam2 = 12;
			break;
		case -184283233:
			*iParam1 = 6;
			*iParam2 = 18;
			break;
		case -1602081438:
			*iParam1 = 12;
			*iParam2 = 0;
			break;
		case 1781467359:
			*iParam1 = 18;
			*iParam2 = 6;
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
}

bool func_224(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iParam0 < iParam1)
	{
		if (iVar0 >= iParam0 && iVar0 < iParam1)
		{
			return true;
		}
	}
	else if (iParam0 > iParam1)
	{
		if (iVar0 >= iParam1 && iVar0 < iParam0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_230(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (!UNLOCK::_UNLOCK_IS_UNLOCKED(160441867))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 2:
			return 4194304;
		case 3:
			return 8388608;
		case 4:
			return 16777216;
		case 5:
			return 33554432;
		case 6:
			return 67108864;
		case 7:
		case 9:
			return 134217728;
		case 8:
		case 10:
			return 268435456;
		case 11:
			return 536870912;
		case 12:
			return 1073741824 /* Float: 2f */;
		case 13:
			return 256;
		case 14:
			return 524288;
		case 15:
			return 32768;
		default:
			break;
	}
	return 0;
}

var func_249(int iParam0, int iParam1)
{
	return ((Global_1184672->f_231.f_1066[iParam0 /*17*/])->f_8[iParam1 /*4*/])->f_3;
}

struct<2> func_250(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return aggregate.coffee_drinking.func_100(-495896359);
	}
	return Var0;
}

float func_251(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return Global_1901929->f_230.f_30;
		default:
			break;
	}
	return 1f;
}

