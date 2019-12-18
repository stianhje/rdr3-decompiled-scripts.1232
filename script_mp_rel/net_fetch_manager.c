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
	aggregate_func_1839();
	while (!aggregate_func_7974())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	aggregate_func_4264();
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	aggregate_func_2819();
}

void func_3()
{
	bool bVar0;

	bVar0 = aggregate_func_6977();
	if (aggregate_func_1445())
	{
		func_14(bVar0);
	}
	func_15(bVar0);
}

void func_9()
{
	func_19(Global_1212887);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1212887, 575, 48);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1212887), 575, "g_mpFetchManagerHostData");
	if (aggregate_func_4345())
	{
		*Global_1223159 = { *((*Global_1213462)[aggregate_func_4294() /*303*/]) };
	}
	aggregate_func_7758(Global_1213462);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1213462, 9697, 49);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1213462)[0 /*303*/]), 9697, "g_mpFetchManagerPlayerData");
	if (!aggregate_func_4345())
	{
		func_25(Global_1223462);
	}
}

void func_14(bool bParam0)
{
	switch (Global_1212887->f_571)
	{
		case 0:
			aggregate_func_6498();
			break;
		case 1:
			func_28();
			break;
		case 2:
			func_29(bParam0);
			break;
	}
}

void func_15(bool bParam0)
{
	switch (Global_1223462->f_8938)
	{
		case 0:
			func_30();
			break;
		case 1:
			func_31();
			break;
		case 2:
			func_32(bParam0);
			break;
	}
}

void func_16()
{
	int iVar0;

	Global_1223462->f_8938 = 0;
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (((*Global_1223462)[iVar0 /*686*/])->f_561 != -1)
		{
			func_33(iVar0, 1);
			func_34(iVar0);
		}
		iVar0++;
	}
}

void func_19(var uParam0)
{
	struct<22> Var0;
	int iVar27;
	var uVar28;
	int iVar29;
	var uVar30;
	int iVar32;
	struct<4> Var33;
	var uVar237;
	var uVar238;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_15 = 255;
	Var0.f_16 = 255;
	Var0.f_17 = 255;
	Var0.f_21.f_1 = -1;
	iVar27 = 0;
	while (iVar27 <= 12)
	{
		MISC::_COPY_MEMORY((*uParam0)[iVar27 /*27*/], &Var0, 27);
		iVar27++;
	}
	iVar29 = 0;
	while (iVar29 <= (3 - 1))
	{
		MISC::_COPY_MEMORY(uParam0->f_352[iVar29], &uVar28, 1);
		iVar29++;
	}
	uVar30 = -1;
	iVar32 = 0;
	while (iVar32 <= 4)
	{
		MISC::_COPY_MEMORY(uParam0->f_356[iVar32 /*2*/], &uVar30, 2);
		iVar32++;
	}
	Var33.f_2 = 5;
	Var33.f_3 = 5;
	Var33.f_3.f_1 = -1;
	Var33.f_3.f_1.f_1 = -1;
	Var33.f_3.f_1.f_2 = -1;
	Var33.f_3.f_1.f_3 = 255;
	Var33.f_3.f_1.f_4 = -1;
	Var33.f_3.f_1.f_5 = -1;
	Var33.f_3.f_1.f_6 = -1;
	Var33.f_3.f_1.f_8 = 2;
	Var33.f_3.f_1.f_8.f_1 = -1;
	Var33.f_3.f_1.f_8.f_5 = -1;
	Var33.f_3.f_1.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_23.f_4 = -15;
	Var33.f_3.f_1.f_23.f_5 = 255;
	Var33.f_3.f_1.f_23.f_8 = 1;
	Var33.f_3.f_1.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40 = -1;
	Var33.f_3.f_1.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40.f_40 = -1;
	Var33.f_3.f_1.f_40.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = 2147483647;
	Var33.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	MISC::_COPY_MEMORY(&(uParam0->f_367), &Var33, 204);
	uParam0->f_571 = uVar237;
	uParam0->f_572 = uVar238;
	uParam0->f_574 = 0;
}

void func_25(var uParam0)
{
	struct<686> Var0;
	struct<4> Var686;
	var uVar690;
	struct<123> Var691;
	struct<8> Var814;
	int iVar822;
	int iVar823;

	Var0 = 6;
	Var0.f_19 = 6;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_6 = 16;
	Var0.f_19.f_1.f_79 = -1;
	Var0.f_19.f_1.f_84 = -1;
	Var0.f_19.f_1.f_88 = -1;
	Var0.f_19.f_1.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_84 = -1;
	Var0.f_548 = 4;
	Var0.f_561 = -1;
	Var0.f_566 = 23;
	Var0.f_590 = -1;
	Var0.f_590.f_1 = -1;
	Var0.f_593 = -1082130432;
	Var0.f_596 = -1;
	Var0.f_602 = 255;
	Var0.f_609 = 9;
	Var0.f_640 = 3;
	Var0.f_646 = 6;
	Var0.f_646.f_1.f_1 = -1;
	Var0.f_646.f_1.f_2 = -1;
	Var0.f_646.f_1.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_38 = -1;
	Var686 = -1;
	Var686.f_1 = -1;
	Var691.f_2 = -1;
	Var691.f_9 = 1;
	Var691.f_16 = 10;
	Var691.f_104 = 11;
	Var814.f_3 = 2;
	uParam0->f_9066 = { Var814 };
	iVar822 = 0;
	while (iVar822 <= (3 - 1))
	{
		uParam0->f_8939[iVar822] = 0;
		iVar822++;
	}
	uParam0->f_8943 = { Var691 };
	iVar823 = 0;
	while (iVar823 <= 12)
	{
		*((*uParam0)[iVar823 /*686*/]) = { Var0 };
		iVar823++;
	}
	iVar822 = 0;
	while (iVar822 <= 3)
	{
		*(uParam0->f_8919[iVar822 /*4*/]) = { Var686 };
		iVar822++;
	}
	uParam0->f_8936 = uVar690;
	uParam0->f_8938 = 0;
	uParam0->f_9328 = -1;
}

void func_28()
{
	if (DATAFILE::_0x603AC35FD4602C76(Global_1232796->f_8113))
	{
		func_37(2);
	}
}

void func_29(bool bParam0)
{
	func_38(bParam0);
	aggregate_func_8239(&(Global_1212887->f_367), &(Global_1223462->f_8936));
}

void func_30()
{
	int iVar0;

	if (Global_1212887->f_571 > 0)
	{
		if (aggregate_func_4345())
		{
			iVar0 = 0;
			while (iVar0 <= 12)
			{
				if (aggregate_func_7982(iVar0, 4))
				{
					*((*(*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iVar0 /*23*/]) = { *((*Global_1223159)[iVar0 /*23*/]) };
				}
				iVar0++;
			}
		}
		func_41(1);
	}
}

void func_31()
{
	if ((DATAFILE::_0x603AC35FD4602C76(Global_1232796->f_8113) && Global_1212887->f_571 > 1) && Global_1232796->f_8111 > 1)
	{
		aggregate_func_1047("FETCH", 30, -1, 0, 0);
		func_41(2);
	}
}

void func_32(bool bParam0)
{
	func_43(bParam0);
	func_44(bParam0);
	func_45();
	if (bParam0)
	{
		func_46();
		aggregate_func_4342();
		func_48();
	}
}

bool func_33(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = ((*Global_1223462)[iParam0 /*686*/])->f_596;
	if (func_49(iVar0))
	{
		if (bParam1)
		{
			SCRIPTS::_0x7DE4643157AD646C((Global_1223462->f_8919[iVar0 /*4*/])->f_3);
		}
		return false;
	}
	return true;
}

void func_34(int iParam0)
{
	struct<686> Var0;
	int iVar686;
	int iVar687;
	struct<23> Var688;

	func_50(iParam0);
	func_51(iParam0);
	if (((*Global_1223462)[iParam0 /*686*/])->f_596 != -1)
	{
		func_52(((*Global_1223462)[iParam0 /*686*/])->f_596, iParam0, 0, 0);
	}
	func_53(iParam0);
	Var0 = 6;
	Var0.f_19 = 6;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_6 = 16;
	Var0.f_19.f_1.f_79 = -1;
	Var0.f_19.f_1.f_84 = -1;
	Var0.f_19.f_1.f_88 = -1;
	Var0.f_19.f_1.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_84 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_6 = 16;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_79 = -1;
	Var0.f_19.f_1.f_88.f_88.f_88.f_88.f_88.f_84 = -1;
	Var0.f_548 = 4;
	Var0.f_561 = -1;
	Var0.f_566 = 23;
	Var0.f_590 = -1;
	Var0.f_590.f_1 = -1;
	Var0.f_593 = -1082130432;
	Var0.f_596 = -1;
	Var0.f_602 = 255;
	Var0.f_609 = 9;
	Var0.f_640 = 3;
	Var0.f_646 = 6;
	Var0.f_646.f_1.f_1 = -1;
	Var0.f_646.f_1.f_2 = -1;
	Var0.f_646.f_1.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_646.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_646.f_38 = -1;
	*((*Global_1223462)[iParam0 /*686*/]) = { Var0 };
	func_54(iParam0);
	iVar686 = PLAYER::PLAYER_ID();
	if (((iVar686 >= 0 && iVar686 < 32) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar687 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar687 >= 0 && iVar687 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			Var688 = 6;
			Var688.f_21 = -1;
			Var688.f_22 = -1;
			*((*(*Global_1213462)[iVar687 /*303*/])[iParam0 /*23*/]) = { Var688 };
		}
	}
}

void func_35(var uParam0)
{
	struct<303> Var0;

	Var0 = 13;
	Var0.f_1 = 6;
	Var0.f_1.f_21 = -1;
	Var0.f_1.f_22 = -1;
	Var0.f_1.f_23 = 6;
	Var0.f_1.f_23.f_21 = -1;
	Var0.f_1.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_300.f_1 = 255;
	*uParam0 = { Var0 };
}

void func_37(int iParam0)
{
	if (Global_1212887->f_571 != iParam0)
	{
		Global_1212887->f_571 = iParam0;
	}
}

void func_38(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1212887->f_574 <= 0)
	{
		return;
	}
	iVar1 = &Global_1223462->f_8939[0];
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (iVar0 == iVar1 || (((*Global_1212887)[iVar0 /*27*/])->f_2 > -1 && ((*Global_1212887)[iVar0 /*27*/])->f_2 < 2))
		{
			func_57(&(Global_1223462->f_8939[0]), bParam0);
		}
		iVar0++;
	}
	func_58(&(Global_1223462->f_8939[1]));
}

void func_41(int iParam0)
{
	if (Global_1223462->f_8938 != iParam0)
	{
		Global_1223462->f_8938 = iParam0;
	}
}

void func_43(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_63(2))
	{
		return;
	}
	if (bParam0 && Global_1212887->f_574 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			if (aggregate_func_3516(iVar1, 8192, 255))
			{
				bVar0 = true;
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (bVar0)
	{
		if (!aggregate_func_3860(1, 255))
		{
			LAW::_0x4B52BF96E225D230(1);
			func_66(1, 1);
		}
	}
	else if (aggregate_func_3860(1, 255))
	{
		LAW::_0x4B52BF96E225D230(0);
		func_67(1, 1);
	}
}

void func_44(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1212887->f_574 <= 0)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = &Global_1223462->f_8939[0];
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (iVar0 == iVar2 || (((*Global_1212887)[iVar0 /*27*/])->f_2 > -1 && !aggregate_func_3516(iVar0, 1048576, 255)))
		{
			func_68(iVar0, bParam0);
		}
		func_69(iVar0);
		func_70(iVar0);
		func_71(iVar0);
		func_72(iVar0, ((*Global_1223462)[iVar0 /*686*/])->f_565);
		if (((*Global_1212887)[iVar0 /*27*/])->f_2 < 3)
		{
			func_73(iVar0);
		}
		if ((((*Global_1212887)[iVar0 /*27*/])->f_2 > 0 && aggregate_func_8341(((*Global_1223462)[iVar0 /*686*/])->f_565)) && func_75(iVar0))
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_1223462->f_8939[0] = &Global_1223462->f_8939[0] + 1;
	Global_1223462->f_8939[1] = &Global_1223462->f_8939[1] + 1;
	if (&Global_1223462->f_8939[0] >= 13)
	{
		Global_1223462->f_8939[0] = 0;
	}
	if (&Global_1223462->f_8939[1] >= 5)
	{
		Global_1223462->f_8939[1] = 0;
	}
	if (iVar1 != -1)
	{
		func_76(iVar1);
	}
	else
	{
		func_77();
	}
}

void func_45()
{
	int iVar0;

	if (!func_78(1))
	{
		func_79();
	}
	if (Global_1223462->f_8943.f_97 <= 0)
	{
		return;
	}
	iVar0 = Global_1223462->f_8943.f_98;
	if (func_80(iVar0))
	{
		func_81(iVar0);
		iVar0 = (iVar0 + 1 % 10);
		Global_1223462->f_8943.f_98 = iVar0;
		Global_1223462->f_8943.f_97 = (Global_1223462->f_8943.f_97 - 1);
	}
}

void func_46()
{
	int iVar0;

	if (aggregate_func_1445())
	{
		func_82(Global_1223462->f_8943.f_122);
		Global_1223462->f_8943.f_122 = (Global_1223462->f_8943.f_122 + 1 % 32);
	}
	iVar0 = PLAYER::PLAYER_ID();
	func_83();
	Global_1223462->f_8943.f_6 = func_84(iVar0);
	if (Global_1223462->f_8943.f_6 == -1154721830)
	{
		Global_1223462->f_8943.f_6 = func_85();
		if (!aggregate_func_1838(2, 255) && Global_1223462->f_8943.f_6 == -1154721830)
		{
			aggregate_func_2554(2);
		}
		else if (aggregate_func_1838(2, 255) && Global_1223462->f_8943.f_6 != -1154721830)
		{
			func_88(2);
		}
		func_89(Global_1223462->f_8943.f_121, iVar0);
	}
	else if (aggregate_func_1838(2, 255))
	{
		func_88(2);
	}
	func_90(Global_1223462->f_8943.f_121, iVar0);
	if (func_91() && (!aggregate_func_1838(5, ((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300.f_1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300.f_1)))
	{
		func_92();
	}
	Global_1223462->f_8943.f_121 = (Global_1223462->f_8943.f_121 + 1 % 32);
}

void func_48()
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;

	Var0 = { aggregate_func_4347(538649369) };
	bVar2 = func_96(Var0);
	if (!bVar2)
	{
		return;
	}
	if (!func_97(Var0))
	{
		return;
	}
	func_98(Var0);
	func_99();
	if (Global_1223462->f_9066.f_6 == 0)
	{
		return;
	}
	iVar3 = func_100();
	if (!func_101(iVar3))
	{
		return;
	}
	func_102(iVar3);
}

bool func_49(int iParam0)
{
	return ((func_103(iParam0) && SCRIPTS::_DOES_THREAD_EXIST((Global_1223462->f_8919[iParam0 /*4*/])->f_3)) && SCRIPTS::IS_THREAD_ACTIVE((Global_1223462->f_8919[iParam0 /*4*/])->f_3, false));
}

void func_50(int iParam0)
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	if (!aggregate_func_5461(iParam0))
	{
		return;
	}
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 == 1717788883)
	{
		return;
	}
	if (aggregate_func_7982(iParam0, 128))
	{
		aggregate_func_7959(0);
		func_105(iParam0, 128);
	}
	if (aggregate_func_3516(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { ((*Global_1223462)[iParam0 /*686*/])->f_590 };
	bVar2 = aggregate_func_7982(iParam0, 33554432);
	func_105(iParam0, 33554432);
	func_51(iParam0);
	func_106(iParam0);
	if (!aggregate_func_4521(Var0) && !aggregate_func_4718(Var0))
	{
		return;
	}
	iVar3 = func_109(((*Global_1223462)[iParam0 /*686*/])->f_565);
	if (iVar3 != 0 && iVar3 != 6)
	{
		aggregate_func_4643(0);
	}
	aggregate_func_3987(iParam0, 32);
	aggregate_func_3987(iParam0, 16);
	if ((!bVar2 && !SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), &Global_1273882)) && !aggregate_func_7982(iParam0, 65536))
	{
		iVar4 = 1;
	}
	aggregate_func_2037(Var0, 0, 2, iVar4);
	Var5.f_1 = -1;
	Var5.f_1.f_1 = -1;
	aggregate_func_5124(((*Global_1223462)[iParam0 /*686*/])->f_590, &Var5);
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 == -468635158)
	{
		aggregate_func_3022(0);
	}
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 == 1427578635)
	{
		if ((*Global_1212887)[iParam0 /*27*/])->f_16 == PLAYER::PLAYER_ID()
		{
			func_88(4);
		}
		aggregate_func_8333(1, 0, 0);
	}
	if (func_116(((*Global_1223462)[iParam0 /*686*/])->f_565))
	{
		aggregate_func_3859(1, 0, 0);
	}
}

void func_51(int iParam0)
{
	int iVar0;

	if (!aggregate_func_7982(iParam0, 134217728))
	{
		return;
	}
	iVar0 = ((*Global_1212887)[iParam0 /*27*/])->f_5;
	if (!aggregate_func_4598(iVar0))
	{
		return;
	}
	aggregate_func_3034(iVar0);
	func_105(iParam0, 134217728);
}

void func_52(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_103(iParam0))
	{
		return;
	}
	if (!func_120(iParam0, iParam1))
	{
		((*Global_1223462)[iParam1 /*686*/])->f_596 = -1;
		return;
	}
	if (&Global_1223462->f_8919[iParam0 /*4*/] != -1)
	{
		((*Global_1223462)[&Global_1223462->f_8919[iParam0 /*4*/] /*686*/])->f_596 = -1;
		if (bParam3 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
			aggregate_func_3987(&(Global_1223462->f_8919[iParam0 /*4*/]), 2);
		}
	}
	if (bParam2)
	{
		(Global_1223462->f_8919[iParam0 /*4*/])->f_1 = -1;
	}
	Global_1223462->f_8919[iParam0 /*4*/] = -1;
	(Global_1223462->f_8919[iParam0 /*4*/])->f_2 = 0;
}

void func_53(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 22)
	{
		if (&((*Global_1223462)[iParam0 /*686*/])->f_566[iVar0] == 0)
		{
		}
		else
		{
			PED::REMOVE_RELATIONSHIP_GROUP(&(((*Global_1223462)[iParam0 /*686*/])->f_566[iVar0]));
		}
		iVar0++;
	}
}

void func_54(int iParam0)
{
	if (iParam0 != -1 && iParam0 == Global_1223462->f_9330)
	{
		Global_1223462->f_9330 = -1;
		Global_1223462->f_9331 = -1;
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (((*Global_1212887)[iParam0 /*27*/])->f_2 == -1)
	{
		return;
	}
	if (((*Global_1212887)[iParam0 /*27*/])->f_2 != 3)
	{
		if (!bParam1)
		{
			func_121(iParam0, 3);
		}
		else if (((*Global_1223462)[iParam0 /*686*/])->f_565 != 0 && !aggregate_func_7425(((*Global_1223462)[iParam0 /*686*/])->f_565))
		{
			func_121(iParam0, 3);
		}
	}
	aggregate_func_340(iParam0);
	aggregate_func_9096(iParam0);
	switch (((*Global_1212887)[iParam0 /*27*/])->f_2)
	{
		case 0:
			func_125(iParam0);
			break;
		case 1:
			func_126(iParam0);
			break;
		case 2:
			func_127(iParam0);
			break;
		case 3:
			aggregate_func_8728(iParam0);
			break;
	}
}

void func_58(int iParam0)
{
	if (((Global_1212887->f_356[iParam0 /*2*/])->f_1 && &Global_1212887->f_356[iParam0 /*2*/] != -1) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_129(), iParam0, false, 0))
	{
		func_130(iParam0);
	}
}

bool func_63(int iParam0)
{
	if (&Global_1223462->f_8939[iParam0] < func_136(iParam0))
	{
		Global_1223462->f_8939[iParam0] = &Global_1223462->f_8939[iParam0] + 1;
		return false;
	}
	Global_1223462->f_8939[iParam0] = 0;
	return true;
}

void func_66(int iParam0, bool bParam1)
{
	if (!aggregate_func_3860(iParam0, 255))
	{
		if (bParam1)
		{
		}
		aggregate_func_4241(&(((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_302), iParam0);
	}
}

void func_67(int iParam0, bool bParam1)
{
	if (aggregate_func_3860(iParam0, 255))
	{
		if (bParam1)
		{
		}
		aggregate_func_4243(&(((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_302), iParam0);
	}
}

void func_68(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = ((*Global_1223462)[iParam0 /*686*/])->f_561 == -1;
	bVar1 = ((*Global_1212887)[iParam0 /*27*/])->f_2 == -1;
	if (bVar0 && bVar1)
	{
		return;
	}
	if (((*Global_1212887)[iParam0 /*27*/])->f_4 != -1)
	{
		aggregate_func_8238(((*Global_1212887)[iParam0 /*27*/])->f_4, -1);
	}
	func_140(iParam0);
	func_141(iParam0);
	func_142(iParam0);
	func_143(iParam0);
	if (func_144(iParam0, bParam1))
	{
		if (((*Global_1223462)[iParam0 /*686*/])->f_561 != 3 && ((*Global_1223462)[iParam0 /*686*/])->f_561 != -1)
		{
			func_145(iParam0, 3);
		}
	}
	else if (func_146(iParam0, bVar0, bVar1))
	{
		func_145(iParam0, 0);
	}
	switch (((*Global_1223462)[iParam0 /*686*/])->f_561)
	{
		case 0:
			func_147(iParam0);
			break;
		case 1:
			func_148(iParam0);
			break;
		case 2:
			func_149(iParam0);
			break;
		case 3:
			aggregate_func_8728(iParam0);
			break;
	}
}

void func_69(int iParam0)
{
	switch (((*Global_1223462)[iParam0 /*686*/])->f_565)
	{
		case -260420884:
		case 850213441:
		case 1427578635:
		case 1918154385:
			if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()))
			{
				aggregate_func_6498();
			}
			break;
	}
}

void func_70(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((((*Global_1223462)[iParam0 /*686*/])->f_548[iVar0 /*3*/])->f_2 == 0)
		{
		}
		else
		{
			func_152(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_71(int iParam0)
{
	if (aggregate_func_3516(iParam0, 32, 255) && !aggregate_func_7982(iParam0, 4194304))
	{
		aggregate_func_3443();
	}
}

void func_72(int iParam0, int iParam1)
{
	if (aggregate_func_3516(iParam0, 32, 255))
	{
		switch (iParam1)
		{
			case -1165569262:
				if (aggregate_func_7982(iParam0, 4194304))
				{
					aggregate_func_1276(aggregate_func_6644(), ((*Global_1223462)[iParam0 /*686*/])->f_590, 1, 1);
				}
				break;
			case 1427578635:
				if (aggregate_func_7982(iParam0, 4194304) && aggregate_func_3516(iParam0, 32, aggregate_func_6644()))
				{
					aggregate_func_1276(aggregate_func_6644(), ((*Global_1223462)[iParam0 /*686*/])->f_590, 1, 0);
				}
				break;
			case 1918154385:
				if (aggregate_func_7982(iParam0, 4194304))
				{
					aggregate_func_1276(aggregate_func_6644(), ((*Global_1223462)[iParam0 /*686*/])->f_590, 1, 1);
				}
				break;
		}
	}
}

void func_73(int iParam0)
{
	if ((((*Global_1223462)[iParam0 /*686*/])->f_565 == 1427578635 && ((*Global_1212887)[iParam0 /*27*/])->f_16 == PLAYER::PLAYER_ID()) && aggregate_func_9073(aggregate_func_4961(Global_1212887[iParam0 /*27*/]), ((*Global_1223462)[iParam0 /*686*/])->f_595) == 948632731)
	{
		aggregate_func_7995(4);
	}
}

bool func_75(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = ((*Global_1223462)[iParam0 /*686*/])->f_644;
	fVar1 = aggregate_func_2912(Global_36, aggregate_func_8985(iParam0));
	iVar2 = 4000;
	((*Global_1223462)[iParam0 /*686*/])->f_644 = fVar1;
	if (fVar1 < 100f)
	{
		return true;
	}
	else if (fVar1 < 250f)
	{
		if (fVar1 < fVar0)
		{
			if (!aggregate_func_7982(iParam0, 1024))
			{
				if (!aggregate_func_7982(iParam0, 2048))
				{
					aggregate_func_4950(&(((*Global_1223462)[iParam0 /*686*/])->f_645));
					func_162(iParam0, 2048);
				}
				if (aggregate_func_5011(((*Global_1223462)[iParam0 /*686*/])->f_645) < iVar2)
				{
					return false;
				}
			}
			func_162(iParam0, 1024);
			return true;
		}
		else
		{
			if (aggregate_func_7982(iParam0, 1024))
			{
				if (aggregate_func_7982(iParam0, 2048))
				{
					aggregate_func_4950(&(((*Global_1223462)[iParam0 /*686*/])->f_645));
					func_105(iParam0, 2048);
				}
				if (aggregate_func_5011(((*Global_1223462)[iParam0 /*686*/])->f_645) < iVar2)
				{
					return true;
				}
			}
			func_105(iParam0, 1024);
			return false;
		}
	}
	return false;
}

void func_76(int iParam0)
{
	if (Global_1223462->f_9329 != iParam0)
	{
		Global_1223462->f_9329 = iParam0;
	}
}

void func_77()
{
	if (Global_1223462->f_9329 != -1)
	{
		Global_1223462->f_9329 = -1;
	}
}

bool func_78(int iParam0)
{
	return (Global_1223462->f_8943 && iParam0) != 0;
}

void func_79()
{
	int iVar0;
	struct<7> Var2;

	if (!aggregate_func_7029(255))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		Var2 = { aggregate_func_2843(PLAYER::PLAYER_ID()) };
		BOUNTY::_0x4EF23E04A0C8FF51(&Var2, &iVar0);
		if (aggregate_func_4574(iVar0))
		{
			aggregate_func_2916(MISC::_CREATE_VAR_STRING(2, "JAIL_BOUNTY_REMOVE", iVar0), 10000, 0, 0, 0, 1);
		}
		else if (aggregate_func_4574(1))
		{
			aggregate_func_2916(MISC::_CREATE_VAR_STRING(2, "JAIL_BOUNTY_REMOVE", aggregate_func_2020()), 10000, 0, 0, 0, 1);
		}
		aggregate_func_4646(-896348601, 0, 0);
	}
	aggregate_func_7995(1);
}

bool func_80(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (!aggregate_func_9084(iParam0, 64))
	{
		aggregate_func_8354(iParam0, 64);
	}
	if (aggregate_func_9084(iParam0, 32))
	{
		bVar1 = false;
		switch (&Global_1223462->f_8943.f_16[iParam0 /*8*/])
		{
			case 509970874:
				bVar1 = func_172(8, 16);
				break;
			case -1141463485:
				bVar1 = func_173(16, 8);
				break;
			case -649633548:
				bVar1 = func_172(32, 64);
				break;
			case 504244707:
				bVar1 = func_173(64, 32);
				break;
		}
		if (bVar1)
		{
			func_174(iParam0, 32);
		}
	}
	if (!func_175(iParam0))
	{
		switch (&Global_1223462->f_8943.f_16[iParam0 /*8*/])
		{
			case 355060119:
				bVar0 = func_176(iParam0);
				break;
			case 1393257577:
				bVar0 = func_177(iParam0);
				break;
			case -896348601:
				bVar0 = func_178(iParam0);
				break;
			case -179235043:
				bVar0 = func_179(iParam0);
				break;
			case 509970874:
				bVar0 = func_180(iParam0);
				break;
			case -1141463485:
				bVar0 = func_181(iParam0);
				break;
			case -1454491980:
				bVar0 = func_182(iParam0);
				break;
			case -649633548:
				bVar0 = func_183(iParam0, (Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_6);
				break;
			case 504244707:
				bVar0 = func_184(iParam0);
				break;
			case -1473321380:
				bVar0 = func_185(iParam0, (Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_6);
				break;
			case 1265908607:
				bVar0 = func_186(iParam0);
				break;
			case -1729966722:
				bVar0 = func_187(iParam0);
				break;
			case -1228177771:
				bVar0 = func_188(iParam0, (Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_6);
				break;
			case -506555739:
				bVar0 = func_189(iParam0);
				break;
			case 1244342493:
				bVar0 = func_190(iParam0);
				break;
			case -1303136:
				bVar0 = func_191(iParam0);
				break;
			case -1555147881:
				bVar0 = func_192(iParam0);
				break;
			case 607258092:
				bVar0 = func_193(iParam0);
				break;
		}
		if (bVar0)
		{
			aggregate_func_8354(iParam0, 1);
		}
		else
		{
			aggregate_func_8354(iParam0, 1);
			aggregate_func_8354(iParam0, 4);
		}
	}
	return aggregate_func_9084(iParam0, 24);
}

void func_81(int iParam0)
{
	struct<8> Var0;

	switch (&Global_1223462->f_8943.f_16[iParam0 /*8*/])
	{
		case 509970874:
			func_88(8);
			break;
		case -1141463485:
			func_88(16);
			break;
		case -649633548:
			func_88(32);
			break;
		case 504244707:
			func_88(64);
			break;
	}
	*(Global_1223462->f_8943.f_16[iParam0 /*8*/]) = { Var0 };
}

void func_82(int iParam0)
{
	if (aggregate_func_1838(1, iParam0))
	{
		if (aggregate_func_1838(4, iParam0))
		{
			if (!aggregate_func_3865(iParam0))
			{
				func_195(iParam0);
				return;
			}
		}
		else
		{
			if (!func_196(iParam0))
			{
				func_197(iParam0);
				return;
			}
			func_195(iParam0);
		}
	}
	else
	{
		func_197(iParam0);
	}
}

void func_83()
{
	int iVar0;

	if (func_78(2) && (MISC::GET_GAME_TIMER() - Global_1223462->f_8943.f_15) > 600000)
	{
		func_198(2);
	}
	if (Global_1223462->f_8943.f_14 <= 0)
	{
		return;
	}
	iVar0 = (Global_1223462->f_8943.f_14 - 1);
	while (iVar0 >= 0)
	{
		if (!func_199(Global_1223462->f_8943.f_9[iVar0 /*4*/]))
		{
			if ((Global_1223462->f_8943.f_9[iVar0 /*4*/])->f_3)
			{
				aggregate_func_7995(2);
				Global_1223462->f_8943.f_15 = MISC::GET_GAME_TIMER();
			}
			if (Global_1223462->f_8943.f_14 > 1)
			{
				SCRIPTS::_0xD426E2E3288469D6(&(Global_1223462->f_8943.f_8), &(Global_1223462->f_8943.f_9[iVar0 /*4*/]));
				*(Global_1223462->f_8943.f_9[iVar0 /*4*/]) = { *(Global_1223462->f_8943.f_9[(Global_1223462->f_8943.f_14 - 1) /*4*/]) };
			}
			else
			{
				SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1223462->f_8943.f_8));
				(Global_1223462->f_8943.f_9[iVar0 /*4*/])->f_1 = 0;
				Global_1223462->f_8943.f_9[iVar0 /*4*/] = 255;
				(Global_1223462->f_8943.f_9[iVar0 /*4*/])->f_2 = 0;
				(Global_1223462->f_8943.f_9[iVar0 /*4*/])->f_3 = 0;
				Global_1223462->f_8943.f_14 = 0;
				return;
			}
			if (Global_1223462->f_8943.f_14 > 0)
			{
				Global_1223462->f_8943.f_14 = (Global_1223462->f_8943.f_14 - 1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

int func_84(int iParam0)
{
	vector3 vVar0;

	if (!aggregate_func_7029(255))
	{
		return 1742861621;
	}
	if (aggregate_func_4497(255))
	{
		return 1742861621;
	}
	if (BOUNTY::_0x8FAF4D262FABA99C(&vVar0))
	{
		Global_1232796->f_8102.f_4 = vVar0.z;
	}
	if (Global_1273882->f_21 < Global_1232796->f_8102.f_4)
	{
		return -232718588;
	}
	if (Global_1232796->f_8102.f_5 == -1)
	{
		Global_1232796->f_8102.f_5 = Global_1273882->f_21 + 30;
	}
	if (Global_1273882->f_21 < Global_1232796->f_8102.f_5)
	{
		return -855374237;
	}
	if (aggregate_func_245(iParam0, 1, 0, 1))
	{
		return -1826994236;
	}
	if (aggregate_func_4325(1114112, iParam0))
	{
		return 458635662;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return -86457213;
	}
	if (aggregate_func_7420(aggregate_func_4464(), aggregate_func_4464(), 0, 0))
	{
		return -189894459;
	}
	return -1154721830;
}

int func_85()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-133260350))
	{
		return 2138128745;
	}
	if (func_78(2))
	{
		return 1348664310;
	}
	return -1154721830;
}

void func_88(int iParam0)
{
	((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300 = (((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300 - (((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300 && iParam0));
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!aggregate_func_3865(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	Global_1223462->f_8943.f_7 = func_205(iVar0, iParam1);
	iVar1 = 0;
	switch (aggregate_func_347(&uVar2, iVar0, 1))
	{
		case 4:
			iVar1 = MISC::GET_HASH_KEY(&uVar2);
			break;
		case 1:
			iVar1 = 0;
			break;
		case 2:
			iVar1 = 0;
			break;
		case 0:
		case 3:
			Global_1223462->f_8943.f_7 = 726443182;
			return;
	}
	if (Global_1223462->f_8943.f_7 != -605318450)
	{
		return;
	}
	func_207(iVar0, iVar1);
}

void func_90(int iParam0, int iParam1)
{
	int iVar0;

	if (!aggregate_func_1838(2, iParam0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1223462->f_8943.f_120), iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (iParam1 == iVar0)
	{
		return;
	}
	if (_NAMESPACE26::_0x9BE7DCB22D32CCBE(_NAMESPACE26::_0x901E0DC25080C8B9(iParam1), iVar0))
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1223462->f_8943.f_120), iParam0);
		return;
	}
	if (BUILTIN::VDIST(aggregate_func_1977(iVar0), aggregate_func_1977(iParam1)) <= (Global_1901929->f_160.f_23 * ((*Global_1137800)[iParam0 /*34*/])->f_33))
	{
		SCRIPTS::_0x31010318BA9897AC(&(Global_1223462->f_8943.f_120), iParam0);
	}
	else
	{
		SCRIPTS::_0xD426E2E3288469D6(&(Global_1223462->f_8943.f_120), iParam0);
	}
}

bool func_91()
{
	return ((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300.f_1 != 255;
}

void func_92()
{
	((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300.f_1 = 255;
	Global_1232796->f_8102.f_5 = -1;
}

void func_93()
{
	int iVar0;

	switch (Global_1223462->f_8943.f_1)
	{
		case 0:
			if (func_209())
			{
				func_210(1);
			}
			break;
		case 1:
			if (aggregate_func_9084(Global_1223462->f_8943.f_100, 32))
			{
				if (aggregate_func_9084(Global_1223462->f_8943.f_100, 2))
				{
					func_210(2);
				}
				else if (aggregate_func_9084(Global_1223462->f_8943.f_100, 4))
				{
					if (func_211(Global_1223462->f_8943.f_100))
					{
						func_212(1);
						func_210(0);
						func_213();
					}
				}
				func_174(Global_1223462->f_8943.f_100, 32);
			}
			break;
		case 2:
			iVar0 = aggregate_func_376(Global_1223462->f_8943.f_2, func_214(aggregate_func_4961(Global_1223462->f_8943.f_2), Global_1223462->f_8943.f_3), 1427578635, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, 0, 0, -1082130432 /* Float: -1f */);
			if (iVar0 != 0 || aggregate_func_5015(PLAYER::PLAYER_ID(), 1))
			{
				func_212(1);
				func_210(0);
				func_213();
				return;
			}
			aggregate_func_2554(4);
			func_217(Global_1223462->f_8943.f_2, Global_1223462->f_8943.f_3, 0);
			func_212(0);
			func_210(0);
			break;
	}
}

void func_94()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	int iVar5;

	iVar0 = Global_1232796->f_8102.f_6;
	iVar1 = func_218();
	iVar2 = aggregate_func_1903(0);
	Global_1232796->f_8102.f_6 = iVar1;
	Global_1223462->f_8943.f_5 = func_220(iVar2, iVar0, iVar1, &bVar3);
	if (Global_1223462->f_8943.f_5 != 1519094052)
	{
		if (bVar3)
		{
			func_221();
		}
		return;
	}
	if (!func_222(iVar2))
	{
		func_221();
		return;
	}
	iVar5 = -1;
	if (!func_223(1427578635, iVar2, &uVar4, &iVar5, 1, Global_1901929->f_160.f_24))
	{
		func_221();
		return;
	}
	func_217(uVar4, iVar5, 0);
	func_221();
}

int func_96(var uParam0, var uParam1)
{
	int iVar0;

	if ((Global_1273882->f_21 - Global_1232796->f_8109) > 60)
	{
		STATS::STAT_ID_GET_INT(&uParam0, &iVar0);
		STATS::STAT_ID_SET_INT(&uParam0, iVar0 + 1, true);
		Global_1232796->f_8109 = Global_1273882->f_21;
		return 1;
	}
	return 0;
}

bool func_97(var uParam0, var uParam1)
{
	int iVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &iVar0);
	return iVar0 >= 600;
}

void func_98(var uParam0, var uParam1)
{
	STATS::STAT_ID_SET_INT(&uParam0, 0, true);
}

void func_99()
{
	int iVar0;

	func_224();
	Global_1223462->f_9066.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_225(iVar0))
		{
			Global_1223462->f_9066.f_3[iVar0] = 0;
		}
		else
		{
			aggregate_func_2882(&(Global_1223462->f_9066.f_6), iVar0);
			switch (iVar0)
			{
				case 0:
					Global_1223462->f_9066.f_3[iVar0] = func_227();
					break;
				case 1:
					Global_1223462->f_9066.f_3[iVar0] = func_228();
					break;
			}
		}
		iVar0++;
	}
}

int func_100()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = (iVar0 + func_229(iVar1));
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar0 + 1);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_229(iVar1) == 0)
		{
		}
		else
		{
			iVar2 = (iVar2 - func_229(iVar1));
			if (iVar2 <= 0)
			{
				return iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_230();
		case 1:
			return func_231();
	}
	return false;
}

void func_102(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	switch (iParam0)
	{
		case 0:
			func_223(1884341302, 0, &uVar0, &iVar1, 0, -1082130432 /* Float: -1f */);
			func_217(uVar0, iVar1, 0);
			break;
		case 1:
			func_233(-1784925006, 0, &uVar0, &iVar1, aggregate_func_7998(((*Global_1275475)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_5.f_12), 0, 3000f);
			func_217(uVar0, iVar1, 0);
			break;
	}
	Var2 = { aggregate_func_4347(-617150375) };
	STATS::STAT_ID_SET_INT(&Var2, iParam0, true);
}

bool func_103(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 4);
}

void func_105(int iParam0, int iParam1)
{
	if (!aggregate_func_5461(iParam0))
	{
		return;
	}
	if (aggregate_func_7982(iParam0, iParam1))
	{
		aggregate_func_4243(&(((*Global_1223462)[iParam0 /*686*/])->f_562), iParam1);
	}
}

void func_106(int iParam0)
{
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 != -1777724963)
	{
		return;
	}
	if (!aggregate_func_7982(iParam0, 268435456))
	{
		return;
	}
	if (aggregate_func_7982(iParam0, 536870912))
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	aggregate_func_4646(607258092, 0, 0);
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case -1165569262:
		case -260420884:
		case 850213441:
		case joaat("dynamic"):
			return 6;
		case -468635158:
			return 5;
	}
	return 0;
}

bool func_116(int iParam0)
{
	switch (iParam0)
	{
		case -1784925006:
		case 1884341302:
			return true;
		default:
			break;
	}
	return false;
}

bool func_120(int iParam0, int iParam1)
{
	return (func_103(iParam0) && (&Global_1223462->f_8919[iParam0 /*4*/] == -1 || &Global_1223462->f_8919[iParam0 /*4*/] == iParam1));
}

void func_121(int iParam0, int iParam1)
{
	if (((*Global_1212887)[iParam0 /*27*/])->f_2 != iParam1)
	{
		((*Global_1212887)[iParam0 /*27*/])->f_2 = iParam1;
	}
}

void func_125(int iParam0)
{
	if (aggregate_func_7982(iParam0, 1))
	{
		func_121(iParam0, 2);
	}
}

void func_126(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_267(iParam0, &bVar1))
	{
		bVar0 = true;
	}
	if (!aggregate_func_4246(((*Global_1212887)[iParam0 /*27*/])->f_10))
	{
		aggregate_func_4950(&(((*Global_1212887)[iParam0 /*27*/])->f_10));
	}
	else if (aggregate_func_5011(((*Global_1212887)[iParam0 /*27*/])->f_10) > 45000 && !bVar0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (aggregate_func_4525(((*Global_1223462)[iParam0 /*686*/])->f_565, 0) && !aggregate_func_8334(iParam0, 524288))
		{
			aggregate_func_1800(((*Global_1212887)[iParam0 /*27*/])->f_13, ((*Global_1223462)[iParam0 /*686*/])->f_590, aggregate_func_7982(iParam0, 67108864));
		}
		aggregate_func_4591(&(((*Global_1212887)[iParam0 /*27*/])->f_10));
		func_121(iParam0, 3);
	}
	else if (bVar0)
	{
		aggregate_func_4591(&(((*Global_1212887)[iParam0 /*27*/])->f_10));
		func_121(iParam0, 2);
	}
}

void func_127(int iParam0)
{
	if (!aggregate_func_8334(iParam0, 32) && func_272(iParam0, 32, 0))
	{
		aggregate_func_7799(iParam0);
		aggregate_func_9098(iParam0, 32);
	}
	else if (!aggregate_func_8334(iParam0, 16) && func_272(iParam0, 16, 0))
	{
		aggregate_func_7799(iParam0);
		aggregate_func_9098(iParam0, 16);
	}
	if (!aggregate_func_8334(iParam0, 4096) && func_272(iParam0, 4096, 0))
	{
		aggregate_func_9098(iParam0, 4096);
	}
	if (func_275(iParam0))
	{
		func_121(iParam0, 3);
	}
}

char* func_129()
{
	return "net_fetch_hideout_leader";
}

void func_130(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	*(Global_1212887->f_356[iParam0 /*2*/]) = { Var0 };
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 10;
		default:
			break;
	}
	return 1;
}

void func_140(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) && ((*(*Global_1213462)[iVar2 /*303*/])[iParam0 /*23*/])->f_22 == ((*Global_1212887)[iParam0 /*27*/])->f_9)
		{
			uVar0 = (uVar0 || ((*(*Global_1213462)[iVar2 /*303*/])[iParam0 /*23*/])->f_19);
			if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar3) == _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))
			{
				uVar1 = (uVar1 || ((*(*Global_1213462)[iVar2 /*303*/])[iParam0 /*23*/])->f_19);
			}
		}
		iVar2++;
	}
	((*Global_1223462)[iParam0 /*686*/])->f_563 = uVar0;
	((*Global_1223462)[iParam0 /*686*/])->f_564 = uVar1;
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (((*Global_1223462)[iParam0 /*686*/])->f_561 < 0 || ((*Global_1223462)[iParam0 /*686*/])->f_561 >= 3)
	{
		return;
	}
	if (aggregate_func_3516(iParam0, 8388608, 255))
	{
		return;
	}
	if (aggregate_func_4484(aggregate_func_4504(Global_1212887[iParam0 /*27*/])) && ((*Global_1223462)[iParam0 /*686*/])->f_561 < 2)
	{
		return;
	}
	iVar0 = func_287(iParam0);
	func_288(iParam0, iVar0);
	switch (iVar0)
	{
		case 2:
			iVar1 = ((*(*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_21;
			if (iVar1 != -1)
			{
				iVar2 = ((*Global_1223462)[iParam0 /*686*/])->f_603;
			}
			func_289(iParam0, iVar2);
			break;
		case 1:
			func_290(iParam0);
			break;
		case 17:
			break;
		case 3:
			if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
			{
				if (aggregate_func_4718(((*Global_1223462)[iParam0 /*686*/])->f_590) || aggregate_func_4521(((*Global_1223462)[iParam0 /*686*/])->f_590))
				{
					func_50(iParam0);
				}
			}
			else
			{
				func_289(iParam0, iVar2);
			}
			break;
		default:
			if (aggregate_func_4718(((*Global_1223462)[iParam0 /*686*/])->f_590) || aggregate_func_4521(((*Global_1223462)[iParam0 /*686*/])->f_590))
			{
				func_50(iParam0);
			}
			break;
	}
}

void func_142(int iParam0)
{
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_272(iParam0, 8388608, 0))
	{
		return;
	}
	if (aggregate_func_8334(iParam0, 131072))
	{
		aggregate_func_3738(iParam0, 134217728);
		return;
	}
	if ((func_272(iParam0, 67108864, 1) && !func_272(iParam0, 2, 1)) && !func_272(iParam0, 134217728, 1))
	{
		aggregate_func_1617(81846499, 0, 1);
		aggregate_func_3738(iParam0, 134217728);
	}
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;

	if (((*Global_1212887)[iParam0 /*27*/])->f_2 == 3 || ((*Global_1223462)[iParam0 /*686*/])->f_561 == 3)
	{
		return;
	}
	if (((*Global_1212887)[iParam0 /*27*/])->f_12 != 0 && ((*Global_1212887)[iParam0 /*27*/])->f_12 != ((*Global_1223462)[iParam0 /*686*/])->f_597)
	{
		((*Global_1223462)[iParam0 /*686*/])->f_597 = ((*Global_1212887)[iParam0 /*27*/])->f_12;
	}
	if (((*Global_1223462)[iParam0 /*686*/])->f_597 == ((*Global_1223462)[iParam0 /*686*/])->f_598)
	{
		return;
	}
	((*Global_1223462)[iParam0 /*686*/])->f_598 = ((*Global_1223462)[iParam0 /*686*/])->f_597;
	iVar0 = 0;
	while (iVar0 <= 22)
	{
		if (!MISC::IS_BIT_SET(((*Global_1223462)[iParam0 /*686*/])->f_597, iVar0))
		{
		}
		else
		{
			iVar1 = iVar2;
			Var3 = { func_293(iParam0, iVar0) };
			if (PED::ADD_RELATIONSHIP_GROUP(&Var3, &iVar1))
			{
				func_294(iParam0, iVar0, iVar1);
				func_295(iParam0, iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

bool func_144(int iParam0, bool bParam1)
{
	int iVar0;

	if (!bParam1)
	{
		return true;
	}
	iVar0 = ((*Global_1212887)[iParam0 /*27*/])->f_2;
	if (iVar0 == 3 || iVar0 == -1)
	{
		return true;
	}
	if (((*(*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_22 != -1 && ((*(*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_22 != ((*Global_1212887)[iParam0 /*27*/])->f_9)
	{
		return true;
	}
	return false;
}

void func_145(int iParam0, int iParam1)
{
	if (((*Global_1223462)[iParam0 /*686*/])->f_561 != iParam1)
	{
		((*Global_1223462)[iParam0 /*686*/])->f_561 = iParam1;
	}
}

bool func_146(int iParam0, bool bParam1, bool bParam2)
{
	if (aggregate_func_8334(iParam0, 64))
	{
		return false;
	}
	return (bParam1 && !bParam2);
}

void func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!aggregate_func_7982(iParam0, 1))
	{
		iVar0 = Global_1212887[iParam0 /*27*/];
		iVar1 = aggregate_func_4961(iVar0);
		iVar2 = ((*Global_1212887)[iParam0 /*27*/])->f_6;
		((*(*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_22 = ((*Global_1212887)[iParam0 /*27*/])->f_9;
		((*Global_1223462)[iParam0 /*686*/])->f_594 = func_296(iVar1, iVar2);
		((*Global_1223462)[iParam0 /*686*/])->f_595 = func_214(iVar1, iVar2);
		((*Global_1223462)[iParam0 /*686*/])->f_565 = aggregate_func_4504(iVar0);
		((*Global_1223462)[iParam0 /*686*/])->f_590 = { func_297(iParam0) };
		((*Global_1223462)[iParam0 /*686*/])->f_604 = aggregate_func_4973(iVar0, iVar2);
		((*Global_1223462)[iParam0 /*686*/])->f_605 = aggregate_func_7421(iVar0, iVar2);
		((*Global_1223462)[iParam0 /*686*/])->f_601 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
		iVar4 = func_300(iVar1, iVar2);
		iVar3 = 0;
		while (iVar3 <= (iVar4 - 1))
		{
			((*Global_1223462)[iParam0 /*686*/])->f_548[iVar3 /*3*/] = func_301(iVar1, iVar2, iVar3);
			(((*Global_1223462)[iParam0 /*686*/])->f_548[iVar3 /*3*/])->f_1 = func_302(iVar1, iVar2, iVar3);
			(((*Global_1223462)[iParam0 /*686*/])->f_548[iVar3 /*3*/])->f_2 = func_303(iVar1, iVar2, iVar3);
			iVar3++;
		}
		if (((*Global_1223462)[iParam0 /*686*/])->f_565 == 1884341302)
		{
			((*Global_1223462)[iParam0 /*686*/])->f_606 = { ((*Global_1212887)[iParam0 /*27*/])->f_18 };
		}
		else
		{
			((*Global_1223462)[iParam0 /*686*/])->f_606 = { aggregate_func_4970(iVar0, iVar2) };
		}
		if (((*Global_1212887)[iParam0 /*27*/])->f_21 != 0)
		{
			func_305(&(((*Global_1212887)[iParam0 /*27*/])->f_21), &(((*Global_1223462)[iParam0 /*686*/])->f_646), 0);
		}
		iVar5 = aggregate_func_7295(iVar0, iVar2);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				*(((*Global_1223462)[iParam0 /*686*/])->f_609[iVar6 /*3*/]) = { aggregate_func_7296(iVar1, iVar2, iVar6) };
				iVar6++;
			}
		}
		if (func_308(iVar1, iVar2))
		{
			func_162(iParam0, 4096);
		}
		if (func_309(iVar1, iVar2))
		{
			func_162(iParam0, 8192);
		}
		if (func_310(iVar1, iVar2))
		{
			func_162(iParam0, 16384);
		}
		if (func_311(iVar1, iVar2) && PLAYER::PLAYER_ID() != ((*Global_1212887)[iParam0 /*27*/])->f_16)
		{
			func_162(iParam0, 32768);
		}
		if (func_312(iVar1, iVar2))
		{
			func_162(iParam0, 131072);
		}
		if (func_313(iVar1, iVar2))
		{
			func_162(iParam0, 262144);
		}
		if (func_314(iVar1, iVar2))
		{
			func_162(iParam0, 67108864);
		}
		func_162(iParam0, 1);
	}
	if (((*Global_1212887)[iParam0 /*27*/])->f_2 == 3)
	{
		func_145(iParam0, 3);
	}
	else if (((*Global_1212887)[iParam0 /*27*/])->f_2 > 0 && ((*Global_1212887)[iParam0 /*27*/])->f_2 <= 1)
	{
		func_145(iParam0, 1);
	}
	else if (((*Global_1212887)[iParam0 /*27*/])->f_2 >= 2)
	{
		func_145(iParam0, 2);
	}
}

void func_148(int iParam0)
{
	if (!aggregate_func_4484(((*Global_1223462)[iParam0 /*686*/])->f_565))
	{
		func_315(iParam0);
		func_316(iParam0);
	}
	if (((*Global_1212887)[iParam0 /*27*/])->f_2 != 1)
	{
		func_145(iParam0, ((*Global_1212887)[iParam0 /*27*/])->f_2);
	}
}

void func_149(int iParam0)
{
	if (!aggregate_func_7982(iParam0, 131072) && (aggregate_func_8334(iParam0, 4096) || aggregate_func_8334(iParam0, 16)))
	{
		aggregate_func_1392(((*Global_1223462)[iParam0 /*686*/])->f_590);
	}
	func_315(iParam0);
	func_316(iParam0);
	func_318(iParam0);
}

void func_152(int iParam0, int iParam1)
{
	switch ((((*Global_1223462)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_1)
	{
		case joaat("disable"):
			switch (&((*Global_1223462)[iParam0 /*686*/])->f_548[iParam1 /*3*/])
			{
				case joaat("shop"):
					func_322(aggregate_func_5509((((*Global_1223462)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_2), 1, 50f);
					break;
				case 452572720:
					func_324(func_323((((*Global_1223462)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_2), 1, 50f);
					break;
				case 1495295997:
					func_326(func_325((((*Global_1223462)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_2));
					break;
			}
			break;
		case 141980177:
			if (aggregate_func_8334(iParam0, 1))
			{
				switch (&((*Global_1223462)[iParam0 /*686*/])->f_548[iParam1 /*3*/])
				{
					case joaat("shop"):
						func_322(aggregate_func_5509((((*Global_1223462)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_2), 2, 50f);
						break;
					case 452572720:
						func_324(func_323((((*Global_1223462)[iParam0 /*686*/])->f_548[iParam1 /*3*/])->f_2), 2, 50f);
						break;
					case 1495295997:
						break;
				}
			}
			break;
	}
}

void func_162(int iParam0, int iParam1)
{
	if (!aggregate_func_5461(iParam0))
	{
		return;
	}
	if (!aggregate_func_7982(iParam0, iParam1))
	{
		aggregate_func_4241(&(((*Global_1223462)[iParam0 /*686*/])->f_562), iParam1);
	}
}

int func_172(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (aggregate_func_1838(iParam0, 255))
	{
		if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		iVar1 = 1;
		iVar3 = aggregate_func_6971();
		iVar0 = 0;
		while (iVar0 < iVar3)
		{
			iVar2 = aggregate_func_7008(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
			}
			else if (!aggregate_func_1838(iParam1, iVar2))
			{
				iVar1 = 0;
			}
			iVar0++;
		}
		return iVar1;
	}
	return 0;
}

bool func_173(int iParam0, int iParam1)
{
	int iVar0;

	if (aggregate_func_1838(iParam0, 255))
	{
		iVar0 = func_338();
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return true;
		}
		return !aggregate_func_1838(iParam1, iVar0);
	}
	return false;
}

void func_174(int iParam0, int iParam1)
{
	(Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_5 = ((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_5 - ((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_5 && iParam1));
}

bool func_175(int iParam0)
{
	if (aggregate_func_9084(iParam0, 1))
	{
		if (aggregate_func_9084(iParam0, 32))
		{
			return true;
		}
		if (aggregate_func_9084(iParam0, 2))
		{
			if (aggregate_func_9084(iParam0, 128))
			{
				func_174(iParam0, 128);
			}
			else
			{
				aggregate_func_8354(iParam0, 8);
			}
		}
		else if (aggregate_func_9084(iParam0, 4))
		{
			if (!func_211(iParam0))
			{
				func_174(iParam0, 4);
				func_174(iParam0, 1);
				(Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_7 = 0;
				return false;
			}
			else if (aggregate_func_9084(iParam0, 128))
			{
				func_174(iParam0, 128);
			}
			else
			{
				aggregate_func_8354(iParam0, 8);
			}
		}
		return true;
	}
	return false;
}

int func_176(int iParam0)
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		aggregate_func_4638(741331401, 0, 255, 0, 0);
	}
	return BOUNTY::_0xB096547D61868254(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_177(int iParam0)
{
	var uVar0;
	var uVar1;

	SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Global_1223462->f_8943.f_118), &(Global_1223462->f_8943.f_119), &uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Global_1223462->f_8943.f_118), &uVar1);
	if (SCRIPTS::_0x179A6F0EE2E79026(&uVar1))
	{
		if (BOUNTY::_0x27D3A0E1FE090A43(&uVar1))
		{
			SCRIPTS::_0xFFDDF802279BE128(&uVar1, &uVar0, &(Global_1223462->f_8943.f_119));
			aggregate_func_8354(iParam0, 8);
			return 1;
		}
	}
	else
	{
		aggregate_func_8354(iParam0, 8);
		return 1;
	}
	return 0;
}

int func_178(int iParam0)
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		aggregate_func_4638(1265622586, 0, 255, 0, 0);
	}
	return BOUNTY::_0xB462D69D406A2602(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_179(int iParam0)
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1444561974))
	{
		aggregate_func_4638(1265622586, 0, 255, 0, 0);
	}
	SCRIPTS::_0xDE544B7EC0C187CC(&(Global_1223462->f_8943.f_119));
	aggregate_func_8354(iParam0, 8);
	return 1;
}

int func_180(int iParam0)
{
	return BOUNTY::_0x2D874BA20E8E1F20(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_181(int iParam0)
{
	int iVar0;

	iVar0 = func_338();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		aggregate_func_8354(iParam0, 8);
		return 0;
	}
	if (!aggregate_func_1838(8, iVar0))
	{
		return 0;
	}
	return BOUNTY::_0x8521C2E235558278(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_182(int iParam0)
{
	return BOUNTY::_0x12E981D53B07BF48(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_183(int iParam0, var uParam1)
{
	return BOUNTY::_0x5B53CA0E2AC3FF45(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1), uParam1, &(Global_1223462->f_8943.f_104));
}

int func_184(int iParam0)
{
	int iVar0;

	iVar0 = func_338();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		aggregate_func_8354(iParam0, 8);
		return 0;
	}
	if (!aggregate_func_1838(32, iVar0))
	{
		return 0;
	}
	return BOUNTY::_0x22D3A61CE053270C(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1), &(Global_1223462->f_8943.f_104));
}

int func_185(int iParam0, var uParam1)
{
	return BOUNTY::_0xA9C3B0F746375162(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1), uParam1, &(Global_1223462->f_8943.f_104));
}

int func_186(int iParam0)
{
	BOUNTY::_0xA59D1997ECD99F0A();
	aggregate_func_8354(iParam0, 8);
	return 1;
}

int func_187(int iParam0)
{
	BOUNTY::_0x932DB3C05A7465D1();
	aggregate_func_8354(iParam0, 8);
	return 1;
}

int func_188(int iParam0, var uParam1)
{
	return BOUNTY::_0x28717806D3BDD0D0(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1), uParam1);
}

int func_189(int iParam0)
{
	return BOUNTY::_0x3F73AED12A5EF0FF(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1));
}

int func_190(int iParam0)
{
	aggregate_func_8354(iParam0, 8);
	return BOUNTY::_0xFFA13742E43507E3(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1), &(Global_1223462->f_8943.f_101));
}

int func_191(int iParam0)
{
	int iVar0;

	iVar0 = (Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_6;
	aggregate_func_8354(iParam0, 8);
	if (aggregate_func_5461(iVar0))
	{
		return BOUNTY::_0x81847C2134039BDC(&(((*Global_1212887)[iVar0 /*27*/])->f_14));
	}
	return 0;
}

bool func_192(int iParam0)
{
	bool bVar0;

	if (_NAMESPACE26::_0x149A2751AB66AC02(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())) > 1)
	{
		bVar0 = BOUNTY::_0xFBD137BF0EC50FC9(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1), &(Global_1223462->f_8943.f_104));
	}
	else
	{
		bVar0 = BOUNTY::_0x727AB6F008BB9F29(&((Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_1), &(Global_1223462->f_8943.f_104));
	}
	if (!bVar0)
	{
		aggregate_func_4646(607258092, 0, 0);
	}
	return bVar0;
}

int func_193(int iParam0)
{
	aggregate_func_8354(iParam0, 8);
	BOUNTY::_0x6A9DF0FCD0C87FF9();
	return 1;
}

void func_195(int iParam0)
{
	SCRIPTS::_0x31010318BA9897AC(&(Global_1212887->f_573), iParam0);
}

bool func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar2 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	vVar3 = { aggregate_func_1977(iVar2) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == iParam0)
		{
		}
		else if (!aggregate_func_3865(iVar0) || aggregate_func_1838(4, iParam0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (_NAMESPACE26::_0x3F59FE6F37869576(iVar2, iVar1))
			{
				return false;
			}
			if (BUILTIN::VDIST(vVar3, aggregate_func_1977(iVar1)) <= Global_1901929->f_160.f_25)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_197(int iParam0)
{
	if (!aggregate_func_3865(iParam0))
	{
		return;
	}
	SCRIPTS::_0xD426E2E3288469D6(&(Global_1212887->f_573), iParam0);
}

void func_198(int iParam0)
{
	Global_1223462->f_8943 = (Global_1223462->f_8943 - (Global_1223462->f_8943 && iParam0));
}

bool func_199(var uParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
	{
		return false;
	}
	if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > 300000)
	{
		return false;
	}
	if (uParam0->f_2)
	{
		return false;
	}
	return true;
}

int func_205(int iParam0, int iParam1)
{
	if (func_78(2))
	{
		return 332948762;
	}
	if (func_91())
	{
		return -1033490187;
	}
	if (!aggregate_func_1838(2, 255))
	{
		return 1842743312;
	}
	if (func_345(iParam0))
	{
		return -1109051462;
	}
	if (Global_1223462->f_8943.f_14 >= 1)
	{
		return 769298471;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -267458266;
	}
	if (iParam0 == iParam1)
	{
		return -1688739386;
	}
	if (_NAMESPACE26::_0x3F59FE6F37869576(iParam1, iParam0))
	{
		return -1435119901;
	}
	if (BUILTIN::VDIST(aggregate_func_1977(iParam0), aggregate_func_1977(iParam1)) > (Global_1901929->f_160.f_23 * Global_1131373->f_5508))
	{
		return -619167961;
	}
	return -605318450;
}

void func_207(int iParam0, int iParam1)
{
	struct<53> Var0;
	struct<7> Var53;
	char* sVar60;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = joaat("COLOR_WHITE");
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = joaat("COLOR_WHITE");
	Var0.f_19 = joaat("COLOR_WHITE");
	Var0.f_23 = 300;
	Var0.f_31.f_8 = joaat("COLOR_WHITE");
	Var0.f_31.f_11 = joaat("COLOR_WHITE");
	Var0.f_31.f_12 = 8000;
	Var0.f_31.f_13 = 1511356879;
	Var0.f_31.f_15 = 1433015236;
	Var0.f_31.f_21 = 1;
	Var0.f_22 = 1;
	Var0.f_24 = 21;
	Var0.f_25 = iParam0;
	Var0.f_16 = MISC::_CREATE_VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	Var53 = { aggregate_func_2843(iParam0) };
	BOUNTY::_0x4EF23E04A0C8FF51(&Var53, &sVar60);
	Var0.f_17 = MISC::_CREATE_VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_BODY", sVar60);
	Var0.f_31.f_2 = MISC::_CREATE_VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	Var0.f_31.f_3 = MISC::_CREATE_VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_BODY", sVar60);
	if (iParam1 != 0)
	{
		Var0.f_31.f_6 = iParam1;
		Var0.f_31.f_7 = iParam1;
		Var0.f_31.f_21 = 0;
		Var0.f_20 = iParam1;
		Var0.f_21 = iParam1;
	}
	else
	{
		Var0.f_31.f_6 = 1700592256;
		Var0.f_31.f_7 = 1434360011;
		Var0.f_20 = 1700592256;
		Var0.f_21 = 1434360011;
	}
	Var0.f_31.f_17 = "HUD_Toast_Soundset";
	Var0.f_31.f_18 = "Toast_On";
	aggregate_func_201(Var0);
	SCRIPTS::_0x31010318BA9897AC(&(Global_1223462->f_8943.f_8), iParam0);
	Global_1223462->f_8943.f_9[Global_1223462->f_8943.f_14 /*4*/] = iParam0;
	(Global_1223462->f_8943.f_9[Global_1223462->f_8943.f_14 /*4*/])->f_1 = MISC::GET_GAME_TIMER();
	Global_1223462->f_8943.f_14++;
}

bool func_209()
{
	bool bVar0;
	int iVar1;

	iVar1 = aggregate_func_1903(1);
	Global_1223462->f_8943.f_4 = func_352(iVar1, &bVar0);
	if (Global_1223462->f_8943.f_4 != 1519094052)
	{
		if (bVar0)
		{
			func_212(!aggregate_func_1838(4, 255));
		}
		return false;
	}
	if (!aggregate_func_1838(1, 255))
	{
		aggregate_func_2554(1);
	}
	if (!func_353())
	{
		Global_1223462->f_8943.f_4 = -84140073;
		return false;
	}
	if (!func_223(1427578635, iVar1, &(Global_1223462->f_8943.f_2), &(Global_1223462->f_8943.f_3), 1, Global_1901929->f_160.f_24))
	{
		func_212(1);
		return false;
	}
	Global_1223462->f_8943.f_4 = -888342148;
	Global_1223462->f_8943.f_100 = aggregate_func_4646(355060119, 0, 0);
	return true;
}

void func_210(int iParam0)
{
	Global_1223462->f_8943.f_1 = iParam0;
}

bool func_211(int iParam0)
{
	return (Global_1223462->f_8943.f_16[iParam0 /*8*/])->f_7 != -1307093097;
}

void func_212(bool bParam0)
{
	if (Global_1232796->f_8102.f_2 != 0)
	{
		Global_1232796->f_8102.f_2 = 0;
	}
	if (bParam0)
	{
		if (aggregate_func_1838(1, 255))
		{
			func_88(1);
		}
	}
}

void func_213()
{
	struct<19> Var0;
	var uVar19;
	int iVar20;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_4 = 108;
	iVar20 = 0;
	while (iVar20 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar20)))
		{
		}
		else if (func_354(iVar20) == PLAYER::PLAYER_ID())
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar19, iVar20);
		}
		iVar20++;
	}
	if (SCRIPTS::_0x179A6F0EE2E79026(&uVar19))
	{
		func_355(Var0, uVar19, 0, 0);
	}
}

int func_214(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1))
	{
		aggregate_func_2993(Var1, -1775150615, &uVar0, 0);
	}
	return uVar0;
}

void func_217(var uParam0, int iParam1, int iParam2)
{
	struct<22> Var0;

	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	aggregate_func_2487(&Var0, uParam0, iParam1, iParam2, -1);
	aggregate_func_1082(&Var0);
}

int func_218()
{
	return Global_1938075->f_4;
}

int func_220(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_372(iParam0, bParam3);
	if (iVar0 != 1519094052)
	{
		return iVar0;
	}
	if (Global_1232796->f_8102 == 0)
	{
		aggregate_func_8333(0, 0, 0);
	}
	if (Global_1232796->f_8102.f_1 != 0 && Global_1273882->f_21 > Global_1232796->f_8102.f_1)
	{
		aggregate_func_8340(2, 1);
		Global_1232796->f_8102.f_1 = 0;
	}
	if ((((func_373(iParam0) && !aggregate_func_8344(2)) && iParam1 != iParam2) && iParam1 != -1) && iParam2 != -1)
	{
		return 1519094052;
	}
	if (Global_1273882->f_21 > Global_1232796->f_8102)
	{
		return 1519094052;
	}
	else
	{
		return 1918714710;
	}
	return -919889546;
}

void func_221()
{
	if (aggregate_func_8344(2))
	{
		return;
	}
	if (Global_1232796->f_8102 != 0 || Global_1232796->f_8102.f_6 != -1)
	{
		Global_1232796->f_8102 = 0;
		Global_1232796->f_8102.f_6 = -1;
	}
}

bool func_222(int iParam0)
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= func_375(iParam0);
}

bool func_223(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, float fParam5)
{
	int iVar0[55];
	int iVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	vector3 vVar60;
	vector3 vVar63;
	bool bVar66;
	bool bVar67;
	float fVar68;

	*uParam2 = func_376(iParam0);
	if (*uParam2 == -1)
	{
		return false;
	}
	iVar56 = aggregate_func_2460(aggregate_func_4961(*uParam2));
	vVar63 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
	fVar68 = 32000f;
	iVar58 = 0;
	while (iVar58 <= (iVar56 - 1))
	{
		if ((aggregate_func_9073(aggregate_func_4961(*uParam2), iVar58) == iParam1 && aggregate_func_9100(*uParam2, iVar58, -1) == -1) && aggregate_func_376(*uParam2, aggregate_func_4973(*uParam2, iVar58), iParam0, vVar63, 1, 0, 0, -1082130432 /* Float: -1f */) == 0)
		{
			if (bParam4)
			{
				vVar60 = { aggregate_func_9101(aggregate_func_4961(*uParam2), iVar58, &bVar66) };
				if (bVar66)
				{
					if (aggregate_func_4268(vVar60))
					{
						if (iVar57 == 0)
						{
							iVar57++;
						}
						iVar0[iVar57] = iVar58;
						iVar57++;
					}
					else
					{
						fVar59 = BUILTIN::VDIST(vVar60, vVar63);
						if (fParam5 != -1f && fVar59 > fParam5)
						{
						}
						else
						{
							if (fVar59 < fVar68)
							{
								if (iVar57 == 0)
								{
									iVar57++;
								}
								fVar68 = fVar59;
								iVar0[0] = iVar58;
								bVar67 = true;
							}
							Jump @308; //curOff = 291
							iVar0[iVar57] = iVar58;
							iVar57++;
						}
						iVar58++;
						if (iVar57 > 0)
						{
							if (bParam4)
							{
								if (bVar67)
								{
									*iParam3 = &iVar0[0];
								}
								else if (iVar57 > 1)
								{
									*iParam3 = &iVar0[MISC::GET_RANDOM_INT_IN_RANGE(1, iVar57)];
								}
								else
								{
									return false;
								}
							}
							else
							{
								*iParam3 = &iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar57)];
							}
						}
						else
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
}

void func_224()
{
	var uVar0;
	struct<2> Var1;

	Var1 = { aggregate_func_4347(-617150375) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	Global_1223462->f_9066.f_2 = uVar0;
}

bool func_225(int iParam0)
{
	int iVar0;

	if (!aggregate_func_7029(255))
	{
		return false;
	}
	if (aggregate_func_4497(255))
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	if (aggregate_func_4325(65536, PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (aggregate_func_3866(Global_36))
	{
		return false;
	}
	if (aggregate_func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(&(Global_1273882->f_154[&Global_1273882])))
	{
		return false;
	}
	if (func_382())
	{
		return false;
	}
	if (aggregate_func_7420(aggregate_func_4464(), aggregate_func_4464(), 0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (((*Global_1212887)[iVar0 /*27*/])->f_13 == Global_1273882->f_15)
		{
			return false;
		}
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_383())
			{
				return false;
			}
			break;
		case 1:
			if (!func_384())
			{
				return false;
			}
			break;
	}
	return true;
}

int func_227()
{
	int iVar0;

	iVar0 = Global_1901929->f_160.f_38;
	if (aggregate_func_1500(-735397297, aggregate_func_1967(1), 1784584921, 1, 0, 0) >= Global_1901929->f_160.f_49)
	{
		iVar0 = (iVar0 + Global_1901929->f_160.f_45);
	}
	if (Global_1223462->f_9066.f_2 == 0)
	{
		iVar0 = (iVar0 - Global_1901929->f_160.f_37);
	}
	return iVar0;
}

int func_228()
{
	int iVar0;

	iVar0 = Global_1901929->f_160.f_39;
	if ((aggregate_func_1500(-545779394, aggregate_func_1967(1), 1784584921, 1, 0, 0) > Global_1901929->f_160.f_41 || aggregate_func_1500(1532695640, aggregate_func_1967(1), 1784584921, 1, 0, 0) > Global_1901929->f_160.f_41) || aggregate_func_1500(1847740267, aggregate_func_1967(1), 1784584921, 1, 0, 0) > Global_1901929->f_160.f_41)
	{
		iVar0 = (iVar0 + Global_1901929->f_160.f_45);
	}
	if (Global_1223462->f_9066.f_2 == 1)
	{
		iVar0 = (iVar0 - Global_1901929->f_160.f_37);
	}
	return iVar0;
}

int func_229(int iParam0)
{
	return &(Global_1223462->f_9066.f_3[iParam0]);
}

bool func_230()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 1f) <= func_387();
}

bool func_231()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 1f) <= func_388();
}

int func_233(int iParam0, int iParam1, var uParam2, int iParam3, vector3 vParam4, bool bParam7, bool bParam8)
{
	int iVar0[55];
	int iVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	vector3 vVar60;
	bool bVar63;
	bool bVar64;
	bool bVar65;

	*uParam2 = func_376(iParam0);
	if (*uParam2 == -1)
	{
		return 0;
	}
	iVar56 = aggregate_func_2460(aggregate_func_4961(*uParam2));
	bVar65 = 32000f;
	iVar58 = 0;
	while (iVar58 <= (iVar56 - 1))
	{
		if ((aggregate_func_9073(aggregate_func_4961(*uParam2), iVar58) == iParam1 && aggregate_func_9100(*uParam2, iVar58, -1) == -1) && aggregate_func_376(*uParam2, aggregate_func_4973(*uParam2, iVar58), iParam0, vParam4, 1, 0, 0, bParam8) == 0)
		{
			if (bParam7)
			{
				vVar60 = { aggregate_func_9101(aggregate_func_4961(*uParam2), iVar58, &bVar63) };
				if (bVar63)
				{
					if (aggregate_func_4268(vVar60))
					{
						if (iVar57 == 0)
						{
							iVar57++;
						}
						iVar0[iVar57] = iVar58;
						iVar57++;
					}
					else
					{
						bVar59 = BUILTIN::VDIST(vVar60, vParam4);
						if (bParam8 != -1f && bVar59 > bParam8)
						{
						}
						else
						{
							if (bVar59 < bVar65)
							{
								if (iVar57 == 0)
								{
									iVar57++;
								}
								bVar65 = bVar59;
								iVar0[0] = iVar58;
								bVar64 = true;
							}
							Jump @287; //curOff = 270
							iVar0[iVar57] = iVar58;
							iVar57++;
						}
						iVar58++;
						if (iVar57 > 0)
						{
							if (bParam7)
							{
								if (bVar64)
								{
									*iParam3 = &iVar0[0];
								}
								else if (iVar57 > 1)
								{
									*iParam3 = &iVar0[MISC::GET_RANDOM_INT_IN_RANGE(1, iVar57)];
								}
								else
								{
									return 0;
								}
							}
							else
							{
								*iParam3 = &iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar57)];
							}
						}
						else
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
}

bool func_267(int iParam0, bool bParam1)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	int iVar26;

	if (!aggregate_func_4484(((*Global_1223462)[iParam0 /*686*/])->f_565))
	{
		return true;
	}
	if (!func_413(iParam0, bParam1))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	iVar25 = aggregate_func_8371(aggregate_func_4504(Global_1212887[iParam0 /*27*/]));
	func_415(iParam0, &Var0);
	iVar26 = aggregate_func_4989(&Var0);
	if (aggregate_func_4987(iVar26))
	{
		Var10 = { aggregate_func_5066(iVar26) };
		if (Var10 == iVar25)
		{
			((*Global_1212887)[iParam0 /*27*/])->f_4 = iVar26;
			return true;
		}
		else
		{
			*bParam1 = 1;
			return true;
		}
	}
	return false;
}

bool func_272(int iParam0, int iParam1, bool bParam2)
{
	if (!aggregate_func_5461(iParam0))
	{
		return false;
	}
	if (bParam2)
	{
		return aggregate_func_4240(((*Global_1223462)[iParam0 /*686*/])->f_564, iParam1);
	}
	return aggregate_func_4240(((*Global_1223462)[iParam0 /*686*/])->f_563, iParam1);
}

bool func_275(int iParam0)
{
	if ((!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_fetch", iParam0, false, 0) && func_424(iParam0, 1048576)) && func_424(iParam0, 512))
	{
		if (!aggregate_func_4246(((*Global_1223462)[iParam0 /*686*/])->f_599))
		{
			aggregate_func_4950(&(((*Global_1223462)[iParam0 /*686*/])->f_599));
		}
		else if (aggregate_func_5011(((*Global_1223462)[iParam0 /*686*/])->f_599) > 4000)
		{
			return true;
		}
	}
	if (func_272(iParam0, 8388608, 0))
	{
		return true;
	}
	else if ((((*Global_1223462)[iParam0 /*686*/])->f_565 != 1717788883 && (!aggregate_func_8341(((*Global_1223462)[iParam0 /*686*/])->f_565) || aggregate_func_8334(iParam0, 131072))) && !func_425(iParam0))
	{
		return true;
	}
	else if (aggregate_func_8341(((*Global_1223462)[iParam0 /*686*/])->f_565) && aggregate_func_8844(iParam0))
	{
		return true;
	}
	else if (aggregate_func_8334(iParam0, 32) && !func_272(iParam0, 32, 0))
	{
		aggregate_func_9098(iParam0, 33554432);
		return true;
	}
	return false;
}

bool func_276(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && ((*(*Global_1213462)[iVar0 /*303*/])[iParam0 /*23*/])->f_22 != -1)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_287(int iParam0)
{
	int iVar0;

	iVar0 = func_464(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (aggregate_func_8341(((*Global_1223462)[iParam0 /*686*/])->f_565) && !aggregate_func_8334(iParam0, 131072))
	{
		iVar0 = func_465(iParam0);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	else if (!SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		iVar0 = func_466(iParam0);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	return 1;
}

void func_288(int iParam0, int iParam1)
{
	if (func_467(iParam0, 255) != iParam1)
	{
		((*(*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])[iParam0 /*23*/])->f_20 = iParam1;
	}
}

void func_289(int iParam0, int iParam1)
{
	var uVar0;
	bool bVar1;
	struct<2> Var2;
	int iVar4;
	bool bVar5;

	if (!aggregate_func_5461(iParam0))
	{
		return;
	}
	if (iParam1 != 0 && !aggregate_func_7982(iParam0, 128))
	{
		aggregate_func_1576(iParam1, 0);
		func_162(iParam0, 128);
	}
	if (aggregate_func_3516(iParam0, 32, 255))
	{
		return;
	}
	if (aggregate_func_3516(iParam0, 64, 255))
	{
		return;
	}
	func_468(iParam0, &uVar0);
	aggregate_func_7799(iParam0);
	aggregate_func_8346(((*Global_1223462)[iParam0 /*686*/])->f_565);
	bVar1 = ((*Global_1223462)[iParam0 /*686*/])->f_565 != 1717788883;
	Var2 = { ((*Global_1223462)[iParam0 /*686*/])->f_590 };
	if (bVar1)
	{
		if (!aggregate_func_4718(Var2) && !aggregate_func_4521(Var2))
		{
			func_290(iParam0);
		}
	}
	aggregate_func_3738(iParam0, 32);
	func_162(iParam0, 16);
	iVar4 = func_109(((*Global_1223462)[iParam0 /*686*/])->f_565);
	if (iVar4 != 0)
	{
		aggregate_func_4969(iVar4);
	}
	if (aggregate_func_7290(((*Global_1223462)[iParam0 /*686*/])->f_565) && SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()))
	{
		func_472(iParam0);
	}
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 == 1918154385 && !SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()))
	{
		func_473();
	}
	if (((((*Global_1223462)[iParam0 /*686*/])->f_565 == 78055447 || ((*Global_1223462)[iParam0 /*686*/])->f_565 == 974227447) || ((*Global_1223462)[iParam0 /*686*/])->f_565 == -232478158) || ((*Global_1223462)[iParam0 /*686*/])->f_565 == 1532822440)
	{
		func_66(2, 1);
	}
	if (bVar1)
	{
		if (aggregate_func_4521(Var2))
		{
			return;
		}
		bVar5 = !func_474(aggregate_func_4961(Global_1212887[iParam0 /*27*/]), ((*Global_1212887)[iParam0 /*27*/])->f_6);
		aggregate_func_2976(Var2, 1, bVar5, 0);
		aggregate_func_4898(((*Global_1223462)[iParam0 /*686*/])->f_590, 1, 0, -1);
		if (((*Global_1223462)[iParam0 /*686*/])->f_565 == -468635158)
		{
			aggregate_func_3004(4);
		}
	}
}

void func_290(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!aggregate_func_5461(iParam0))
	{
		return;
	}
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 == 1717788883)
	{
		return;
	}
	if (aggregate_func_3516(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { ((*Global_1223462)[iParam0 /*686*/])->f_590 };
	if (aggregate_func_4521(Var0))
	{
		return;
	}
	if (aggregate_func_4718(Var0))
	{
		return;
	}
	aggregate_func_4926(Var0);
	if (!aggregate_func_4525(((*Global_1223462)[iParam0 /*686*/])->f_565, 0))
	{
		iVar2 = aggregate_func_7943(Var0);
		if (iVar2 != -1)
		{
			aggregate_func_8351(iVar2);
		}
	}
}

struct<8> func_293(int iParam0, int iParam1)
{
	char cVar0[64];

	switch (iParam1)
	{
		case 1:
			StringCopy(&cVar0, "fetch_friend", 64);
			break;
		case 2:
			StringCopy(&cVar0, "fetch_fake_friend", 64);
			break;
		case 3:
			StringCopy(&cVar0, "fetch_vip", 64);
			break;
		case 4:
			StringCopy(&cVar0, "fetch_friend_primary", 64);
			break;
		case 5:
			StringCopy(&cVar0, "fetch_friend_secondary", 64);
			break;
		case 6:
			StringCopy(&cVar0, "fetch_friend_secondary_and_inactive", 64);
			break;
		case 20:
			StringCopy(&cVar0, "fetch_friend_to_all", 64);
			break;
		case 13:
			StringCopy(&cVar0, "fetch_prisoner_vip_friendly", 64);
			break;
		case 14:
			StringCopy(&cVar0, "fetch_prisoner_vip_enemy", 64);
			break;
		case 7:
			StringCopy(&cVar0, "fetch_law_friendly_to_primary", 64);
			break;
		case 8:
			StringCopy(&cVar0, "fetch_law_friendly_to_secondary", 64);
			break;
		case 9:
			StringCopy(&cVar0, "fetch_law_friendly_to_secondary_none_to_inactive", 64);
			break;
		case 10:
			StringCopy(&cVar0, "fetch_law_hate_secondary_pvp_active", 64);
			break;
		case 11:
			StringCopy(&cVar0, "fetch_enemy_team_1", 64);
			break;
		case 12:
			StringCopy(&cVar0, "fetch_enemy_team_2", 64);
			break;
		case 15:
			StringCopy(&cVar0, "fetch_enemy_vip_killer", 64);
			break;
		case 16:
			StringCopy(&cVar0, "fetch_enemy_to_active_players", 64);
			break;
		case 17:
			StringCopy(&cVar0, "fetch_enemy_to_active_players_likes_inactive_aggro", 64);
			break;
		case 18:
			StringCopy(&cVar0, "fetch_hate_secondary_pvp_active", 64);
			break;
		case 19:
			StringCopy(&cVar0, "fetch_hate_secondary_pvp_active_dislike_inactive", 64);
			break;
		case 21:
			StringCopy(&cVar0, "fetch_objective_draft_horse", 64);
			break;
		case 22:
			StringCopy(&cVar0, "fetch_hostile_animal", 64);
			break;
	}
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam0, 64);
	return cVar0;
}

void func_294(int iParam0, int iParam1, int iParam2)
{
	if (!aggregate_func_4770(iParam1))
	{
		return;
	}
	((*Global_1223462)[iParam0 /*686*/])->f_566[iParam1] = iParam2;
}

void func_295(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			break;
		case 2:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			break;
		case 3:
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			break;
		case 4:
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			break;
		case 5:
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 6, iParam2, 3);
			break;
		case 6:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 3);
			break;
		case 7:
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			break;
		case 8:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			break;
		case 9:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 2, iParam2, 8);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			break;
		case 10:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			break;
		case 11:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 6, iParam2, 8);
			func_489(iParam0, 6, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			break;
		case 12:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 6, iParam2, 8);
			func_489(iParam0, 6, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			func_489(iParam0, 6, iParam2, 11);
			break;
		case 13:
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 0, iParam2, 8);
			func_489(iParam0, 0, iParam2, 9);
			func_489(iParam0, 0, iParam2, 10);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			break;
		case 14:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_490(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 0, iParam2, 8);
			func_489(iParam0, 0, iParam2, 9);
			func_489(iParam0, 0, iParam2, 10);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			break;
		case 15:
			func_484(0, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			func_489(iParam0, 6, iParam2, 3);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 14);
			func_489(iParam0, 0, iParam2, 7);
			func_489(iParam0, 0, iParam2, 8);
			func_489(iParam0, 0, iParam2, 9);
			func_489(iParam0, 0, iParam2, 10);
			break;
		case 16:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			func_489(iParam0, 6, iParam2, 8);
			func_489(iParam0, 6, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 6);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 14);
			break;
		case 17:
			func_484(6, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			func_489(iParam0, 6, iParam2, 8);
			func_489(iParam0, 2, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 6, iParam2, 1);
			func_489(iParam0, 6, iParam2, 2);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 6);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 14);
			func_489(iParam0, 2, iParam2, 16);
			break;
		case 18:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 6);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 2, iParam2, 8);
			func_489(iParam0, 2, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 11);
			func_489(iParam0, 6, iParam2, 12);
			break;
		case 19:
			func_484(0, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 6);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 2, iParam2, 8);
			func_489(iParam0, 2, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 11);
			func_489(iParam0, 6, iParam2, 12);
			func_489(iParam0, 6, iParam2, 15);
			break;
		case 20:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(2, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 2, iParam2, 13);
			func_489(iParam0, 2, iParam2, 14);
			func_489(iParam0, 2, iParam2, 16);
			func_489(iParam0, 2, iParam2, 17);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 2, iParam2, 8);
			func_489(iParam0, 2, iParam2, 9);
			func_489(iParam0, 2, iParam2, 10);
			break;
		case 21:
			func_484(2, iParam2);
			func_485(2, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(2, iParam2);
			func_489(iParam0, 2, iParam2, 11);
			func_489(iParam0, 2, iParam2, 12);
			func_489(iParam0, 2, iParam2, 1);
			func_489(iParam0, 2, iParam2, 2);
			func_489(iParam0, 2, iParam2, 3);
			func_489(iParam0, 2, iParam2, 4);
			func_489(iParam0, 2, iParam2, 5);
			func_489(iParam0, 2, iParam2, 6);
			func_489(iParam0, 2, iParam2, 13);
			func_489(iParam0, 2, iParam2, 14);
			func_489(iParam0, 2, iParam2, 16);
			func_489(iParam0, 2, iParam2, 17);
			func_489(iParam0, 2, iParam2, 7);
			func_489(iParam0, 2, iParam2, 8);
			func_489(iParam0, 2, iParam2, 9);
			func_489(iParam0, 2, iParam2, 10);
			break;
		case 22:
			func_484(6, iParam2);
			func_485(0, iParam2);
			func_486(0, iParam2);
			func_487(0, iParam2);
			func_488(0, iParam2);
			func_489(iParam0, 6, iParam2, 11);
			func_489(iParam0, 6, iParam2, 12);
			func_489(iParam0, 0, iParam2, 1);
			func_489(iParam0, 0, iParam2, 2);
			func_489(iParam0, 6, iParam2, 3);
			func_489(iParam0, 6, iParam2, 4);
			func_489(iParam0, 6, iParam2, 5);
			func_489(iParam0, 6, iParam2, 6);
			func_489(iParam0, 6, iParam2, 13);
			func_489(iParam0, 6, iParam2, 14);
			func_489(iParam0, 6, iParam2, 16);
			func_489(iParam0, 6, iParam2, 17);
			func_489(iParam0, 6, iParam2, 7);
			func_489(iParam0, 6, iParam2, 8);
			func_489(iParam0, 6, iParam2, 9);
			func_489(iParam0, 6, iParam2, 10);
			break;
	}
}

var func_296(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1))
	{
		aggregate_func_2993(Var1, -1303506050, &uVar0, 1);
	}
	return uVar0;
}

struct<2> func_297(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1212887[iParam0 /*27*/];
	uVar1 = ((*Global_1212887)[iParam0 /*27*/])->f_6;
	return aggregate_func_9104(iVar0, uVar1);
}

int func_300(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (aggregate_func_1995(&vVar1, iParam0) && aggregate_func_2992(&vVar1, iParam1))
	{
		vVar1.f_2 = -1052194144;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

var func_301(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1)) && func_493(&Var1, iParam2))
	{
		aggregate_func_2993(Var1, 1609846533, &uVar0, 0);
	}
	return uVar0;
}

var func_302(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1)) && func_493(&Var1, iParam2))
	{
		aggregate_func_2993(Var1, -1702365423, &uVar0, 0);
	}
	return uVar0;
}

var func_303(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1)) && func_493(&Var1, iParam2))
	{
		aggregate_func_2993(Var1, -1303506050, &uVar0, 0);
	}
	return uVar0;
}

int func_305(var uParam0, var uParam1, int iParam2)
{
	return func_494(uParam1, *uParam0, uParam0->f_1, iParam2, 1);
}

bool func_308(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1))
	{
		aggregate_func_3344(Var1, 1172354913, &uVar0, 0);
	}
	return uVar0;
}

bool func_309(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1))
	{
		aggregate_func_3344(Var1, -542588664, &uVar0, 0);
	}
	return uVar0;
}

bool func_310(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1))
	{
		aggregate_func_3344(Var1, -666510715, &uVar0, 0);
	}
	return uVar0;
}

bool func_311(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1))
	{
		aggregate_func_3344(Var1, -1530051112, &uVar0, 0);
	}
	return uVar0;
}

bool func_312(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1))
	{
		aggregate_func_3344(Var1, -1755519071, &uVar0, 0);
	}
	return uVar0;
}

bool func_313(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1))
	{
		aggregate_func_3344(Var1, 311522483, &uVar0, 0);
	}
	return uVar0;
}

bool func_314(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (aggregate_func_1995(&Var1, iParam0) && aggregate_func_3565(&Var1, iParam1))
	{
		aggregate_func_3344(Var1, 521215940, &iVar0, 0);
	}
	return iVar0;
}

void func_315(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;

	fVar6 = 425f;
	bVar7 = aggregate_func_8334(iParam0, 16);
	if (!bVar7)
	{
		fVar6 = Global_1901929->f_230.f_57;
	}
	if (aggregate_func_3516(iParam0, 2, 255))
	{
		fVar6 = (fVar6 + 50f);
	}
	switch (((*Global_1223462)[iParam0 /*686*/])->f_565)
	{
		case -1777724963:
		case -1165569262:
		case -260420884:
		case -232478158:
		case 78055447:
		case 850213441:
		case 974227447:
		case 1532822440:
		case 1918154385:
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()) && !aggregate_func_3516(iParam0, 32, 255))
			{
				if (!bVar7 || aggregate_func_7982(iParam0, 4096))
				{
					iVar1 = 1;
				}
				bVar0 = true;
				iVar2 = 1;
			}
			break;
		case 1884341302:
			if (!SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()) && !aggregate_func_3516(iParam0, 32, 255))
			{
				bVar0 = true;
				iVar5 = 1;
			}
			break;
		case joaat("dynamic"):
			bVar0 = true;
			iVar2 = 1;
			if (!aggregate_func_8334(iParam0, 131072))
			{
				iVar1 = 1;
				bVar4 = true;
			}
			break;
		case -1261475678:
		case -669677371:
		case -468635158:
			bVar0 = true;
			iVar1 = 1;
			bVar4 = true;
			fVar6 = (Global_1901929->f_230.f_57 + 50f);
			break;
		case 1427578635:
			if ((!SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()) && !aggregate_func_3516(iParam0, 32, 255)) && !aggregate_func_1838(4, 255))
			{
				bVar0 = true;
				iVar3 = 1;
			}
			break;
	}
	if (bVar0)
	{
		((*Global_1223462)[iParam0 /*686*/])->f_592 = fVar6;
		func_162(iParam0, 524288);
		if (func_498(iParam0, 255, 0, 0) && aggregate_func_7982(iParam0, 512))
		{
			bVar8 = true;
		}
		if (!bVar8 && !func_499(iParam0, fVar6, iVar1, iVar2, iVar3, bVar4, iVar5))
		{
			aggregate_func_3738(iParam0, 1024);
		}
		else
		{
			aggregate_func_3987(iParam0, 1024);
		}
		aggregate_func_3738(iParam0, 512);
	}
	else
	{
		func_105(iParam0, 524288);
		aggregate_func_3987(iParam0, 1024);
		aggregate_func_3738(iParam0, 512);
	}
}

void func_316(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_500(iParam0);
	if (iVar0 == 0)
	{
		func_501(iParam0);
	}
	else
	{
		iVar1 = ((*Global_1223462)[iParam0 /*686*/])->f_596;
		if (iVar1 == -1)
		{
			iVar1 = func_502(iVar0);
		}
		if (iVar1 != -1)
		{
			if (((*Global_1223462)[iParam0 /*686*/])->f_596 != iVar1)
			{
				if (((*Global_1223462)[iParam0 /*686*/])->f_596 == -1)
				{
					aggregate_func_3987(iParam0, 2);
				}
				((*Global_1223462)[iParam0 /*686*/])->f_596 = iVar1;
			}
			if (&Global_1223462->f_8919[iVar1 /*4*/] != -1 && &Global_1223462->f_8919[iVar1 /*4*/] != iParam0)
			{
				func_503(iVar1, iParam0);
				return;
			}
			if ((Global_1223462->f_8919[iVar1 /*4*/])->f_1 != -1 && (Global_1223462->f_8919[iVar1 /*4*/])->f_1 != iParam0)
			{
				func_501(iParam0);
				return;
			}
			func_504(iVar1, iParam0, iParam0);
			func_505(iVar1, iParam0, iVar0);
			if (func_506(iParam0, iVar1, &bVar2))
			{
				if (bVar2)
				{
					aggregate_func_3738(iParam0, 1048576);
				}
				aggregate_func_3738(iParam0, 2);
			}
		}
		else
		{
			func_501(iParam0);
		}
	}
}

void func_318(int iParam0)
{
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 != -1777724963)
	{
		return;
	}
	if (!aggregate_func_3516(iParam0, 4096, 255) && !aggregate_func_8334(iParam0, 4096))
	{
		return;
	}
	if (!aggregate_func_3516(iParam0, 32, 255))
	{
		return;
	}
	if (aggregate_func_3516(iParam0, 64, 255))
	{
		return;
	}
	func_514(iParam0);
}

bool func_319(int iParam0)
{
	if (!func_33(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_320(int iParam0)
{
	aggregate_func_4247(&(Global_1124870->f_1912), iParam0);
}

void func_322(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (&Global_1051387->f_4562[iVar0 /*5*/] == iParam0 || (Global_1051387->f_4562[iVar0 /*5*/])->f_3 < (MISC::GET_FRAME_COUNT() - 1))
		{
			Global_1051387->f_4562[iVar0 /*5*/] = iParam0;
			(Global_1051387->f_4562[iVar0 /*5*/])->f_1 = -1;
			(Global_1051387->f_4562[iVar0 /*5*/])->f_2 = iParam1;
			(Global_1051387->f_4562[iVar0 /*5*/])->f_4 = (fParam2 * fParam2);
			(Global_1051387->f_4562[iVar0 /*5*/])->f_3 = MISC::GET_FRAME_COUNT();
			return;
		}
		iVar0++;
	}
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case -1391860027:
			return 0;
		case -2049683567:
			return 3;
		case -1639750081:
			return 4;
		case -395929392:
			return 33;
		case -543306319:
			return 6;
		case 93160283:
			return 7;
		case -1838611891:
			return 8;
		case 1619762084:
			return 1;
		case -2104053099:
			return 2;
		case -1431073983:
			return 9;
		case 887432345:
			return 10;
		case -238320361:
			return 11;
		case -1433937760:
			return 22;
		case -681691620:
			return 23;
		case -706234936:
			return 24;
		case -282099500:
			return 25;
		case 1450105278:
			return 26;
		case 2128397741:
			return 12;
		case -924263120:
			return 14;
		case 1915478031:
			return 30;
		case -1816941102:
			return 31;
		case 1350021532:
			return 32;
		case 379756162:
			return 5;
		case 1442571063:
			return 15;
		case -997221403:
			return 16;
		case 1489861748:
			return 17;
		case -2132712788:
			return 27;
		case -995716959:
			return 28;
		case 1414815075:
			return 29;
		case 1427539511:
			return 34;
		case -967055532:
			return 19;
		case 662159626:
			return 20;
		case 1743191502:
			return 21;
		case -830712656:
			return 18;
		case 1570650502:
			return 35;
		case -1980461700:
			return 36;
		case -486915945:
			return 38;
		case -1023568458:
			return 37;
		default:
			break;
	}
	return -1;
}

void func_324(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((Global_1051387->f_4562[iVar0 /*5*/])->f_1 == iParam0 || (Global_1051387->f_4562[iVar0 /*5*/])->f_3 < (MISC::GET_FRAME_COUNT() - 1))
		{
			(Global_1051387->f_4562[iVar0 /*5*/])->f_1 = iParam0;
			Global_1051387->f_4562[iVar0 /*5*/] = -1;
			(Global_1051387->f_4562[iVar0 /*5*/])->f_2 = iParam1;
			(Global_1051387->f_4562[iVar0 /*5*/])->f_4 = (fParam2 * fParam2);
			(Global_1051387->f_4562[iVar0 /*5*/])->f_3 = MISC::GET_FRAME_COUNT();
			return;
		}
		iVar0++;
	}
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case -433978575:
			return 0;
		case 810683509:
			return 1;
		case -1293620534:
			return 2;
		case -2117035556:
			return 3;
		case -1966120787:
			return 4;
		default:
			break;
	}
	return 4;
}

void func_326(int iParam0)
{
	(Global_1130954->f_1[iParam0 /*27*/])->f_26 = MISC::GET_FRAME_COUNT();
}

int func_338()
{
	return Global_1099293->f_341;
}

bool func_345(int iParam0)
{
	return SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1223462->f_8943.f_8), iParam0);
}

int func_352(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	iVar0 = func_372(iParam0, bParam1);
	if (iVar0 != 1519094052)
	{
		return iVar0;
	}
	if (BOUNTY::_0x8FAF4D262FABA99C(&Var1))
	{
		Global_1232796->f_8102.f_3 = Var1.f_1;
	}
	if (Global_1273882->f_21 < Global_1232796->f_8102.f_3)
	{
		return 590089107;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1124430142))
	{
		return -580253866;
	}
	if (aggregate_func_576(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 1421345077;
	}
	if (Global_1232796->f_8102.f_2 == 0)
	{
		iVar4 = ((aggregate_func_8338(iParam0) / 1000) + aggregate_func_2431(60));
		Global_1232796->f_8102.f_2 = (Global_1273882->f_21 + iVar4);
	}
	if (!SCRIPTS::_0x179A6F0EE2E79026(&(Global_1223462->f_8943.f_120)))
	{
		return -828578368;
	}
	if (Global_1273882->f_21 > Global_1232796->f_8102.f_2)
	{
		return 1519094052;
	}
	return 1918714710;
}

bool func_353()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (((*Global_1213462)[iVar0 /*303*/])->f_300.f_1 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_354(int iParam0)
{
	return ((*Global_1213462)[iParam0 /*303*/])->f_300.f_1;
}

void func_355(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				aggregate_func_5335(&(Global_1070355->f_21258), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 10, &uParam19);
}

int func_372(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		*bParam1 = 1;
		return -863629719;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (aggregate_func_5015(iVar0, 1))
	{
		*bParam1 = 1;
		return -1365133205;
	}
	if (aggregate_func_4981())
	{
		return -744198205;
	}
	if (!aggregate_func_7029(255))
	{
		return 1419392741;
	}
	if (aggregate_func_4497(255))
	{
		return 56985339;
	}
	if (aggregate_func_245(iVar0, 1, 0, 1))
	{
		return -1208627562;
	}
	if (aggregate_func_4325(65536, iVar0))
	{
		return 1340027376;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return -429228396;
	}
	if (aggregate_func_3866(Global_36))
	{
		return 736245819;
	}
	if (aggregate_func_7420(aggregate_func_4464(), aggregate_func_4464(), 0, 0))
	{
		*bParam1 = 1;
		return -590391633;
	}
	return 1519094052;
}

bool func_373(int iParam0)
{
	switch (iParam0)
	{
		case joaat("low"):
			return Global_1901929->f_160.f_27;
		case joaat("medium"):
			return Global_1901929->f_160.f_28;
		case joaat("high"):
			return Global_1901929->f_160.f_29;
		case 948632731:
			return Global_1901929->f_160.f_30;
		default:
			break;
	}
	return false;
}

float func_375(int iParam0)
{
	switch (iParam0)
	{
		case joaat("low"):
			return Global_1901929->f_160.f_19;
		case joaat("medium"):
			return Global_1901929->f_160.f_20;
		case joaat("high"):
			return Global_1901929->f_160.f_21;
		case 948632731:
			return Global_1901929->f_160.f_22;
		default:
			break;
	}
	return 0f;
}

int func_376(int iParam0)
{
	int iVar0[80];
	int iVar81;
	int iVar82;

	iVar82 = 0;
	while (iVar82 <= 79)
	{
		if (aggregate_func_4504(iVar82) == iParam0)
		{
			iVar0[iVar81] = iVar82;
			iVar81++;
		}
		iVar82++;
	}
	if (iVar81 > 0)
	{
		return &(iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar81)]);
	}
	return -1;
}

bool func_382()
{
	int iVar0;

	iVar0 = aggregate_func_4710(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	if (aggregate_func_4962(iVar0))
	{
		return true;
	}
	return false;
}

bool func_383()
{
	int iVar0;
	vector3 vVar1;

	if (!aggregate_func_2850(-428390721 /* GXTEntry: "Butcher Table" */, 1))
	{
		return false;
	}
	iVar0 = aggregate_func_4710(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
	if (!aggregate_func_4598(iVar0))
	{
		return false;
	}
	vVar1 = { aggregate_func_4966(iVar0) };
	if (aggregate_func_4268(vVar1))
	{
		return false;
	}
	if (aggregate_func_2912(Global_36, vVar1) > Global_1901929->f_160.f_58)
	{
		return false;
	}
	if (aggregate_func_4710(PLAYER::GET_PLAYER_INDEX()) == -1)
	{
		return false;
	}
	if (aggregate_func_1500(-735397297, aggregate_func_1967(1), 1784584921, 1, 0, 0) < Global_1901929->f_160.f_48)
	{
		return false;
	}
	return true;
}

bool func_384()
{
	vector3 vVar0;

	if (((*Global_1275475)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_5.f_12 == -1)
	{
		return false;
	}
	vVar0 = { aggregate_func_7998(((*Global_1275475)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_5.f_12) };
	if (aggregate_func_2912(Global_36, vVar0) > Global_1901929->f_160.f_58)
	{
		return false;
	}
	return true;
}

float func_387()
{
	float fVar0;

	fVar0 = 0f;
	if (aggregate_func_1500(-735397297, aggregate_func_1967(1), 1784584921, 1, 0, 0) >= Global_1901929->f_160.f_48)
	{
		fVar0 = (Global_1901929->f_160.f_50 * (1f - func_551()));
	}
	if (aggregate_func_1500(-735397297, aggregate_func_1967(1), 1784584921, 1, 0, 0) >= Global_1901929->f_160.f_48)
	{
		fVar0 = (Global_1901929->f_160.f_51 * (1f - func_551()));
	}
	return fVar0;
}

float func_388()
{
	float fVar0;
	int iVar1;

	fVar0 = 0f;
	iVar1 = 0;
	if (aggregate_func_1500(-545779394, aggregate_func_1967(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = aggregate_func_1500(-545779394, aggregate_func_1967(1), 1784584921, 1, 0, 0);
	}
	else if (aggregate_func_1500(1532695640, aggregate_func_1967(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = aggregate_func_1500(1532695640, aggregate_func_1967(1), 1784584921, 1, 0, 0);
	}
	else if (aggregate_func_1500(1847740267, aggregate_func_1967(1), 1784584921, 1, 0, 0) > 0)
	{
		iVar1 = aggregate_func_1500(1847740267, aggregate_func_1967(1), 1784584921, 1, 0, 0);
	}
	if (iVar1 >= Global_1901929->f_160.f_40)
	{
		fVar0 = (Global_1901929->f_160.f_43 * (1f - func_552()));
	}
	if (iVar1 >= Global_1901929->f_160.f_41)
	{
		fVar0 = (Global_1901929->f_160.f_44 * (1f - func_552()));
	}
	return fVar0;
}

bool func_413(int iParam0, bool bParam1)
{
	struct<24> Var0;
	int iVar40;
	int iVar41;
	int iVar42;

	if (aggregate_func_8334(iParam0, 536870912))
	{
		return true;
	}
	if (aggregate_func_7539(&(Global_1212887->f_367)))
	{
		return false;
	}
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
	iVar40 = aggregate_func_4504(Global_1212887[iParam0 /*27*/]);
	iVar41 = aggregate_func_8371(iVar40);
	iVar42 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (&Global_1184672->f_13[iVar41] >= &Global_1184672->f_3[iVar41])
	{
		*bParam1 = 1;
		return false;
	}
	Var0.f_2 = 2;
	Var0.f_5 = 0;
	Var0.f_7 = iVar42;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = aggregate_func_8371(iVar40);
	Var0.f_8.f_5.f_9 = iVar41;
	Var0.f_8.f_5 = { func_297(iParam0) };
	Var0.f_8.f_2 = { aggregate_func_4970(Global_1212887[iParam0 /*27*/], ((*Global_1212887)[iParam0 /*27*/])->f_6) };
	aggregate_func_7768(&Var0);
	aggregate_func_2503(&(Global_1212887->f_367), &Var0, 1, 15, 6, 24, 0);
	aggregate_func_9098(iParam0, 536870912);
	return true;
}

void func_415(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = aggregate_func_4504(Global_1212887[iParam0 /*27*/]);
	*uParam1 = { func_297(iParam0) };
	uParam1->f_9 = aggregate_func_8371(iVar0);
}

void func_420(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 24, &uParam1);
}

void func_421(var uParam0)
{
	if (&Global_1051202->f_16[0] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[0])))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 31, 24, &(Global_1051202->f_16[0]));
}

bool func_424(int iParam0, int iParam1)
{
	int iVar0;

	if (!aggregate_func_5461(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && (((*(*Global_1213462)[iVar0 /*303*/])[iParam0 /*23*/])->f_22 != ((*Global_1212887)[iParam0 /*27*/])->f_9 || !aggregate_func_3516(iParam0, iParam1, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_425(int iParam0)
{
	int iVar0;

	if (!aggregate_func_5461(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && (((*(*Global_1213462)[iVar0 /*303*/])[iParam0 /*23*/])->f_22 != ((*Global_1212887)[iParam0 /*27*/])->f_9 || func_498(iParam0, iVar0, 1, 0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_464(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1223462)[iParam0 /*686*/])->f_604))
	{
		return 4;
	}
	if (aggregate_func_3516(iParam0, 8, 255))
	{
		return 5;
	}
	if (aggregate_func_3516(iParam0, 64, 255) && (func_467(iParam0, 255) == 16 || !aggregate_func_7982(iParam0, 32)))
	{
		return 16;
	}
	if (aggregate_func_7420(((*Global_1223462)[iParam0 /*686*/])->f_590, aggregate_func_4464(), 0, 0) && ((*Global_1223462)[iParam0 /*686*/])->f_565 != 1717788883)
	{
		return 7;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && func_616(((*Global_1223462)[iParam0 /*686*/])->f_590))
	{
		if (aggregate_func_3516(iParam0, 32, 255) && !aggregate_func_7982(iParam0, 256))
		{
			func_617();
			func_162(iParam0, 256);
		}
		return 8;
	}
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 != 1427578635 || ((*Global_1212887)[iParam0 /*27*/])->f_16 != PLAYER::PLAYER_ID())
	{
		if (aggregate_func_7982(iParam0, 8388608) || (aggregate_func_3516(iParam0, 32, 255) && func_468(iParam0, &bVar1)))
		{
			func_162(iParam0, 8388608);
			if (bVar1)
			{
				func_162(iParam0, 16777216);
			}
			return 17;
		}
	}
	bVar2 = func_618(iParam0, 255);
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (func_116(((*Global_1223462)[iParam0 /*686*/])->f_565))
		{
			if (!aggregate_func_3516(iParam0, 16, 255) && !aggregate_func_8334(iParam0, 16))
			{
				return 21;
			}
		}
		if (bVar2 && aggregate_func_7982(iParam0, 262144))
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	iVar3 = func_619(iParam0);
	if (iVar3 != 255)
	{
		if (iVar3 != PLAYER::PLAYER_ID())
		{
			aggregate_func_3738(iParam0, 16777216);
		}
		return 2;
	}
	if (aggregate_func_576(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()))))
	{
		return 23;
	}
	if (((*Global_1223462)[iParam0 /*686*/])->f_605 != 0 && !UNLOCK::_UNLOCK_IS_UNLOCKED(((*Global_1223462)[iParam0 /*686*/])->f_605))
	{
		return 24;
	}
	if (bVar2)
	{
		return 15;
	}
	return 0;
}

int func_465(int iParam0)
{
	if (aggregate_func_4484(Global_1212887[iParam0 /*27*/]))
	{
		return 12;
	}
	if (aggregate_func_245(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 13;
	}
	return 0;
}

int func_466(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;

	bVar0 = true;
	if (bVar0 && !UNLOCK::_UNLOCK_IS_VISIBLE(((*Global_1223462)[iParam0 /*686*/])->f_604))
	{
		return 4;
	}
	bVar1 = func_498(iParam0, 255, 0, 0);
	bVar2 = aggregate_func_7982(iParam0, 512);
	fVar3 = Global_1901929->f_295.f_162;
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 == 1918154385)
	{
		fVar3 = (fVar3 + (fVar3 * func_621()));
	}
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 != 1427578635 && !aggregate_func_8294(((*Global_1223462)[iParam0 /*686*/])->f_593, bVar1, bVar2, fVar3))
	{
		return 9;
	}
	if (!aggregate_func_8334(iParam0, 2097152) && !aggregate_func_3516(iParam0, 32, 255))
	{
		return 10;
	}
	if (((*Global_1223462)[iParam0 /*686*/])->f_565 == 1918154385)
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1607036473))
		{
			return 18;
		}
		iVar4 = func_623();
		if (aggregate_func_4246(iVar4) && aggregate_func_5011(iVar4) < Global_1901929->f_160.f_59)
		{
			return 19;
		}
		if (func_624(iParam0, 1))
		{
			return 20;
		}
	}
	else if (((*Global_1223462)[iParam0 /*686*/])->f_565 == 1427578635)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(((*Global_1212887)[iParam0 /*27*/])->f_16) && ((*Global_1212887)[iParam0 /*27*/])->f_16 == ((*Global_1213462)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/])->f_300.f_1)
		{
			return 2;
		}
		else
		{
			return 22;
		}
	}
	if (aggregate_func_8334(iParam0, 1073741824 /* Float: 2f */))
	{
		return 25;
	}
	if (aggregate_func_3064(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 11;
	}
	return 0;
}

int func_467(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return ((*(*Global_1213462)[iParam1 /*303*/])[iParam0 /*23*/])->f_20;
}

bool func_468(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
	if (iVar0 != ((*Global_1223462)[iParam0 /*686*/])->f_601)
	{
		bVar1 = _NAMESPACE26::_0xD6F6ACF4392187FB(((*Global_1223462)[iParam0 /*686*/])->f_601);
		if (((((*Global_1223462)[iParam0 /*686*/])->f_600 > 1 && _NAMESPACE26::_0x149A2751AB66AC02(((*Global_1223462)[iParam0 /*686*/])->f_601) > 0) && _NAMESPACE26::_0x4BE6C13A45CCA8EC(((*Global_1223462)[iParam0 /*686*/])->f_601) != 255) && _NAMESPACE26::_0x4BE6C13A45CCA8EC(((*Global_1223462)[iParam0 /*686*/])->f_601) == ((*Global_1223462)[iParam0 /*686*/])->f_602)
		{
			*bParam1 = 1;
		}
		((*Global_1223462)[iParam0 /*686*/])->f_601 = iVar0;
		return bVar1;
	}
	((*Global_1223462)[iParam0 /*686*/])->f_600 = _NAMESPACE26::_0x149A2751AB66AC02(((*Global_1223462)[iParam0 /*686*/])->f_601);
	((*Global_1223462)[iParam0 /*686*/])->f_602 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(((*Global_1223462)[iParam0 /*686*/])->f_601);
	return false;
}

void func_472(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (aggregate_func_7982(iParam0, 134217728))
	{
		return;
	}
	iVar0 = ((*Global_1212887)[iParam0 /*27*/])->f_5;
	if (!aggregate_func_4598(iVar0))
	{
		return;
	}
	switch (((*Global_1223462)[iParam0 /*686*/])->f_565)
	{
		case 1884341302:
			bVar1 = true;
			iVar2 = 3;
			break;
		case -260420884:
		case 850213441:
		case 1918154385:
			bVar1 = true;
			iVar2 = 3;
			break;
	}
	aggregate_func_3035(iVar0, iVar2, bVar1);
	func_162(iParam0, 134217728);
}

void func_473()
{
	struct<2> Var0;

	Var0 = { aggregate_func_4347(-1136577243) };
	STATS::STAT_ID_SET_INT(&Var0, Global_1273882->f_21, true);
}

bool func_474(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (aggregate_func_1995(&Var1, iParam0) && aggregate_func_2992(&Var1, iParam1))
	{
		aggregate_func_3344(Var1, 572283279, &iVar0, 0);
	}
	return iVar0;
}

void func_484(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1, 2097877918, 0);
	func_642(iParam0, iParam1, -1158905413, 0);
	func_642(iParam0, iParam1, 358397622, 0);
	func_642(iParam0, iParam1, 65999835, 0);
	func_642(iParam0, iParam1, 814443795, 0);
	func_642(iParam0, iParam1, 519621102, 0);
	func_642(iParam0, iParam1, -1628223003, 0);
	func_642(iParam0, iParam1, 1278256225, 0);
	func_642(iParam0, iParam1, 2038628101, 0);
	func_642(iParam0, iParam1, 1742494648, 0);
	func_642(iParam0, iParam1, -1010166918, 0);
	func_642(iParam0, iParam1, 660170868, 0);
	func_642(iParam0, iParam1, -1278312096, 0);
	func_642(iParam0, iParam1, -509158128, 0);
	func_642(iParam0, iParam1, -226656579, 0);
	func_642(iParam0, iParam1, 2115868159, 0);
	func_642(iParam0, iParam1, 1495813101, 0);
	func_642(iParam0, iParam1, 1197385818, 0);
	func_642(iParam0, iParam1, 1015780020, 0);
	func_642(iParam0, iParam1, -1286733825, 0);
	func_642(iParam0, iParam1, -1670393277, 0);
	func_642(iParam0, iParam1, -415733461, 0);
	func_642(iParam0, iParam1, -1207924036, 0);
	func_642(iParam0, iParam1, 497702414, 0);
	func_642(iParam0, iParam1, 719188085, 0);
	func_642(iParam0, iParam1, 43753457, 0);
	func_642(iParam0, iParam1, 771290791, 0);
	func_642(iParam0, iParam1, 20356387, 0);
	func_642(iParam0, iParam1, 309149584, 0);
	func_642(iParam0, iParam1, 1613781781, 0);
	func_642(iParam0, iParam1, 1693607065, 0);
	func_642(iParam0, iParam1, 1132176120, 0);
	func_642(iParam0, iParam1, 869270437, 0);
}

void func_485(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1, 106566339, 0);
	func_642(iParam0, iParam1, -50399569, 0);
	func_642(iParam0, iParam1, 1222652248, 0);
	func_642(iParam0, iParam1, -350226955, 0);
	func_642(iParam0, iParam1, 1030835986, 0);
	func_642(iParam0, iParam1, -1535431934, 0);
	func_642(iParam0, iParam1, -1448293989, 0);
	func_642(iParam0, iParam1, 266218800, 0);
	func_642(iParam0, iParam1, 555364152, 0);
	func_642(iParam0, iParam1, -1996978098, 0);
	func_642(iParam0, iParam1, 1078461828, 0);
}

void func_486(int iParam0, int iParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, -1976316465);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, 841021282);
}

void func_487(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1, 889541022, 0);
	func_642(iParam0, iParam1, -989642646, 0);
}

void func_488(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1, -767591988, 0);
	func_642(iParam0, iParam1, -1683752762, 0);
	func_642(iParam0, iParam1, 1986610512, 0);
	func_642(iParam0, iParam1, -319516747, 0);
	func_642(iParam0, iParam1, -1329647920, 0);
}

void func_489(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_642(iParam1, iParam2, func_643(iParam0, iParam3), 0);
}

void func_490(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1, 707888648, 0);
}

bool func_493(int iParam0, int iParam1)
{
	iParam0->f_2 = 1168896522;
	iParam0->f_3 = iParam1;
	return DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(iParam0->f_1), iParam0);
}

int func_494(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<2> Var0;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;

	iVar8 = aggregate_func_5168(iParam1);
	if (iVar8 == -1)
	{
		return 0;
	}
	if (!aggregate_func_1565(&Var0))
	{
		return 0;
	}
	if (!aggregate_func_3061(&Var0, 3, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3061(&Var0, 4, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3061(&Var0, 6, aggregate_func_5169(iVar8), 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3061(&Var0, 7, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3061(&Var0, 8, iParam1, 0, 1))
	{
		return 0;
	}
	uVar7 = Var0.f_1;
	if (!aggregate_func_3061(&Var0, 17, 0, 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3061(&Var0, 18, aggregate_func_5293(iParam4), 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3061(&Var0, 19, aggregate_func_5294(4), 0, 1))
	{
		return 0;
	}
	if (!aggregate_func_3061(&Var0, 20, iParam2, 0, 1))
	{
		return 0;
	}
	uParam0->f_39 = aggregate_func_5391(&Var0);
	Var0.f_1 = uVar7;
	if (aggregate_func_3061(&Var0, 14, 0, 0, 1))
	{
		uParam0->f_37 = aggregate_func_3062(&Var0, 0);
		uVar6 = Var0.f_1;
	}
	uParam0->f_37++;
	iVar9 = 0;
	while (iVar9 <= (uParam0->f_37 - 1))
	{
		Var0.f_1 = uVar6;
		if (iVar9 == 0)
		{
			iVar5 = iParam1;
		}
		else
		{
			if (!aggregate_func_3061(&Var0, 9, (iVar9 - 1), 0, 1))
			{
				return 0;
			}
			iVar5 = aggregate_func_4772(&Var0);
		}
		if (!func_655((*uParam0)[iVar9 /*6*/], iVar5, iParam2, iParam3, iParam4))
		{
			return 0;
		}
		iVar9++;
	}
	return 1;
}

bool func_498(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = func_467(iParam0, iParam1);
	if (bParam2 && iVar0 == 0)
	{
		return true;
	}
	if (bParam3 && iVar0 == 21)
	{
		return true;
	}
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
		case 21:
			return true;
		default:
			break;
	}
	return false;
}

bool func_499(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (iParam2 && func_656(iParam0, fParam1, bParam5))
	{
		return true;
	}
	if (iParam3 && func_657(iParam0, fParam1))
	{
		return true;
	}
	if (iParam4 && func_658(iParam0, fParam1))
	{
		return true;
	}
	if (iParam6 && func_659(iParam0, fParam1))
	{
		return true;
	}
	return false;
}

int func_500(int iParam0)
{
	if (aggregate_func_4255(((*Global_1223462)[iParam0 /*686*/])->f_590) && aggregate_func_2889(((*Global_1223462)[iParam0 /*686*/])->f_590, aggregate_func_7428(((*Global_1223462)[iParam0 /*686*/])->f_565), 0))
	{
		return 0;
	}
	if (func_660())
	{
		return 2;
	}
	if ((func_618(iParam0, 255) && !SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID())) || !aggregate_func_3516(iParam0, 512, 255))
	{
		return 0;
	}
	if (aggregate_func_3516(iParam0, 8388608, 255))
	{
		return 0;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(((*Global_1212887)[iParam0 /*27*/])->f_14), PLAYER::PLAYER_ID()) || aggregate_func_3516(iParam0, 32, 255))
	{
		return 3;
	}
	if (aggregate_func_8341(((*Global_1223462)[iParam0 /*686*/])->f_565) && !aggregate_func_8334(iParam0, 131072))
	{
		return 2;
	}
	return 1;
}

void func_501(int iParam0)
{
	int iVar0;

	iVar0 = ((*Global_1223462)[iParam0 /*686*/])->f_596;
	if (!func_49(iVar0))
	{
		aggregate_func_3987(iParam0, 2);
		if (func_103(iVar0))
		{
			func_52(iVar0, iParam0, 0, 0);
		}
	}
	else
	{
		func_505(iVar0, iParam0, 0);
	}
	aggregate_func_3738(iParam0, 1048576);
}

int func_502(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_661(iVar0))
		{
			return iVar0;
		}
		else if ((iVar1 == -1 && !func_662(iVar0)) && (Global_1223462->f_8919[iVar0 /*4*/])->f_2 < iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_503(int iParam0, int iParam1)
{
	if ((Global_1223462->f_8919[iParam0 /*4*/])->f_1 != iParam1)
	{
		(Global_1223462->f_8919[iParam0 /*4*/])->f_1 = iParam1;
	}
}

void func_504(int iParam0, int iParam1, int iParam2)
{
	if (&Global_1223462->f_8919[iParam0 /*4*/] != iParam2)
	{
		if (!func_120(iParam0, iParam1))
		{
			return;
		}
		Global_1223462->f_8919[iParam0 /*4*/] = iParam2;
		(Global_1223462->f_8919[iParam0 /*4*/])->f_1 = -1;
	}
}

void func_505(int iParam0, int iParam1, int iParam2)
{
	if ((Global_1223462->f_8919[iParam0 /*4*/])->f_2 != iParam2)
	{
		if (!func_120(iParam0, iParam1))
		{
			return;
		}
		(Global_1223462->f_8919[iParam0 /*4*/])->f_2 = iParam2;
	}
}

bool func_506(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[64];
	int iVar8;
	struct<10> Var9;

	StringCopy(&cVar0, "net_fetch", 64);
	iVar8 = iParam0;
	if (iVar8 != -1)
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(8700) <= 0)
		{
			return false;
		}
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, iVar8, true, 0))
		{
			*bParam2 = 1;
			return true;
		}
		if (aggregate_func_3516(iParam0, 2, 255))
		{
			return true;
		}
		SCRIPTS::REQUEST_SCRIPT(&cVar0);
		if (SCRIPTS::HAS_SCRIPT_LOADED(&cVar0))
		{
			Var9.f_7 = -1;
			Var9.f_7.f_1 = -1;
			Var9.f_9 = 255;
			Var9.f_7 = { ((*Global_1223462)[iParam0 /*686*/])->f_590 };
			Var9.f_6 = iParam0;
			Var9 = iVar8;
			(Global_1223462->f_8919[iParam1 /*4*/])->f_3 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var9, 10, 8700);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
			aggregate_func_3970(&cVar0, iVar8);
			return true;
		}
	}
	return false;
}

void func_514(int iParam0)
{
	vector3 vVar0;

	if (((*Global_1223462)[iParam0 /*686*/])->f_565 != -1777724963)
	{
		return;
	}
	if (aggregate_func_7982(iParam0, 268435456))
	{
		return;
	}
	if (((*Global_1212887)[iParam0 /*27*/])->f_7 == -1)
	{
		return;
	}
	if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		func_162(iParam0, 268435456);
		return;
	}
	vVar0.x = aggregate_func_4271(aggregate_func_7801(((*Global_1212887)[iParam0 /*27*/])->f_7));
	vVar0.f_1 = ((*Global_1212887)[iParam0 /*27*/])->f_21.f_3;
	vVar0.f_2 = ((*Global_1212887)[iParam0 /*27*/])->f_21.f_2;
	func_676(1244342493, &vVar0, 0, 0);
	func_162(iParam0, 268435456);
}

float func_551()
{
	return (Global_1138889->f_2001[78 /*192*/])->f_188;
}

float func_552()
{
	return (Global_1138889->f_2001[79 /*192*/])->f_188;
}

void func_573(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (&Global_1051202->f_16[15] == 0 || !SCRIPTS::_DOES_THREAD_EXIST(&(Global_1051202->f_16[15])))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 38, &(Global_1051202->f_16[15]));
	aggregate_func_4335(uParam0, uParam0->f_1);
}

bool func_616(struct<2> Param0)
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == 255)
	{
		return false;
	}
	if (!aggregate_func_4255(((*Global_1055965)[iVar0 /*436*/])->f_2))
	{
		return false;
	}
	if (!aggregate_func_4359(Global_1223462->f_9332, ((*Global_1055965)[iVar0 /*436*/])->f_2))
	{
		if (!aggregate_func_4253(((*Global_1055965)[iVar0 /*436*/])->f_2))
		{
			return false;
		}
		Global_1223462->f_9332 = { ((*Global_1055965)[iVar0 /*436*/])->f_2 };
	}
	return aggregate_func_7420(Param0, Global_1223462->f_9332, 1, 0);
}

void func_617()
{
	int iVar0;

	iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (iVar0 == 255)
	{
		return;
	}
	aggregate_func_2916(MISC::_CREATE_VAR_STRING(10, "GFH_HELP_POSSE_LEADER_CANCELLED", aggregate_func_1524(PLAYER::GET_PLAYER_NAME(iVar0), -963477619)), 10000, 0, 0, 0, 1);
}

bool func_618(int iParam0, int iParam1)
{
	return aggregate_func_3516(iParam0, 1024, iParam1);
}

int func_619(int iParam0)
{
	int iVar0;
	int iVar1;

	if (aggregate_func_3516(iParam0, 32, 255))
	{
		return PLAYER::PLAYER_ID();
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && _NAMESPACE26::_0x81FB74C83C2ED69F(iVar1)) && aggregate_func_3516(iParam0, 32, iVar0))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 255;
}

float func_621()
{
	return (Global_1138889->f_2001[77 /*192*/])->f_188;
}

int func_623()
{
	return func_751(aggregate_func_4347(-1136577243));
}

bool func_624(int iParam0, int iParam1)
{
	return aggregate_func_4240(((*Global_1212887)[iParam0 /*27*/])->f_25, iParam1);
}

bool func_627(int iParam0)
{
	switch (iParam0)
	{
		case -1784925006:
		case -669677371:
		case -232478158:
		case 78055447:
		case 974227447:
		case 1532822440:
			return true;
		default:
			break;
	}
	return false;
}

void func_628(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return;
	}
	Var0 = { aggregate_func_8986(iParam0) };
	if (!STATS::_STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1273882->f_21;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

void func_642(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == 0 || iParam2 == 0)
	{
		return;
	}
	if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, iParam2) != iParam0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	}
	if (!bParam3 && PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iParam2, iParam1) != iParam0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
	}
}

int func_643(int iParam0, int iParam1)
{
	if (!aggregate_func_4770(iParam1))
	{
		return 623901053;
	}
	return &(((*Global_1223462)[iParam0 /*686*/])->f_566[iParam1]);
}

bool func_655(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<2> Var0;
	var uVar5;
	int iVar6;

	iVar6 = aggregate_func_5168(iParam1);
	if (iVar6 == -1)
	{
		return false;
	}
	if (!aggregate_func_1565(&Var0))
	{
		return false;
	}
	if (!aggregate_func_3061(&Var0, 3, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&Var0, 4, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&Var0, 6, aggregate_func_5169(iVar6), 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&Var0, 7, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&Var0, 8, iParam1, 0, 1))
	{
		return false;
	}
	uVar5 = Var0.f_1;
	if (!aggregate_func_3061(&Var0, 13, 0, 0, 1))
	{
		return false;
	}
	*uParam0 = iParam1;
	uParam0->f_3 = func_774(&Var0);
	uParam0->f_2 = func_775(&Var0);
	uParam0->f_1 = func_776(&Var0);
	Var0.f_1 = uVar5;
	if (!aggregate_func_3061(&Var0, 17, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&Var0, 18, aggregate_func_5293(iParam4), 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&Var0, 19, aggregate_func_5294(1), 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&Var0, 20, iParam2, 0, 1))
	{
		return false;
	}
	uParam0->f_5 = aggregate_func_5391(&Var0);
	uVar5 = Var0.f_1;
	if (!func_777(uParam0, iParam3))
	{
		return false;
	}
	return func_778(iVar6, uParam0);
}

int func_656(int iParam0, float fParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	vVar0 = { aggregate_func_8985(iParam0) };
	iVar3 = Global_1212887[iParam0 /*27*/];
	iVar4 = ((*Global_1212887)[iParam0 /*27*/])->f_6;
	iVar5 = aggregate_func_7295(iVar3, iVar4);
	if (!aggregate_func_4268(vVar0) && aggregate_func_2912(Global_36, vVar0) < fParam1)
	{
		return 1;
	}
	else if (bParam2 && iVar5 > 0)
	{
		iVar6 = 0;
		while (iVar6 <= (iVar5 - 1))
		{
			if (!aggregate_func_4268(*(((*Global_1223462)[iParam0 /*686*/])->f_609[iVar6 /*3*/])) && aggregate_func_2912(Global_36, *(((*Global_1223462)[iParam0 /*686*/])->f_609[iVar6 /*3*/])) < fParam1)
			{
				return 1;
			}
			iVar6++;
		}
	}
	return 0;
}

int func_657(int iParam0, float fParam1)
{
	int iVar0;

	if (aggregate_func_7982(iParam0, 1048576))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!aggregate_func_4268(*((*(*Global_1223462)[iParam0 /*686*/])[iVar0 /*3*/])) && aggregate_func_2912(Global_36, *((*(*Global_1223462)[iParam0 /*686*/])[iVar0 /*3*/])) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_658(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = ((*Global_1212887)[iParam0 /*27*/])->f_16;
	if (iVar0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && aggregate_func_2912(Global_36, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_659(int iParam0, float fParam1)
{
	if (!aggregate_func_4268(((*Global_1212887)[iParam0 /*27*/])->f_18) && aggregate_func_2912(Global_36, ((*Global_1212887)[iParam0 /*27*/])->f_18) < fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_660()
{
	if (Global_1223462->f_9330 != -1)
	{
		return true;
	}
	return false;
}

bool func_661(int iParam0)
{
	return (&Global_1223462->f_8919[iParam0 /*4*/] == -1 && (Global_1223462->f_8919[iParam0 /*4*/])->f_1 == -1);
}

bool func_662(int iParam0)
{
	return (Global_1223462->f_8919[iParam0 /*4*/])->f_1 != -1;
}

int func_676(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = aggregate_func_4994(iParam0, iParam2, iParam3);
	if (iVar0 != -1)
	{
		MISC::_COPY_MEMORY(&(Global_1223462->f_8943.f_101), iParam1, 3);
	}
	return iVar0;
}

void func_691(var uParam0, var uParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 17, uParam1);
}

void func_729(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<11> Var0;
	int iVar17;

	Var0.f_10 = 1106247680;
	MISC::_COPY_MEMORY(iParam0, &Var0, 17);
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*iParam0 = 0;
			iParam0->f_1 = 0;
			iParam0->f_2 = 0;
			break;
		case 1:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 4;
			iParam0->f_2 = 7;
			aggregate_func_5025(iParam0, iParam2);
			switch (iParam2)
			{
				case 0:
					iParam0->f_5 = -1808627090;
					iParam0->f_11 = { 2150.374f, 1728.215f, 125.2313f };
					break;
				case 1:
					iParam0->f_5 = -1563711584;
					iParam0->f_11 = { 2179.106f, -25.3714f, 51.3658f };
					break;
				case 2:
					iParam0->f_5 = -717510681;
					iParam0->f_11 = { -1055.963f, -794.308f, 59.2567f };
					break;
				case 3:
					iParam0->f_5 = -2044065371;
					iParam0->f_11 = { -1158.078f, -155.114f, 88.889f };
					break;
				case 4:
					iParam0->f_5 = -1209537248;
					iParam0->f_11 = { -1370.712f, -515.7384f, 125.267f };
					break;
				case 5:
					iParam0->f_5 = 1714342319;
					iParam0->f_11 = { -1029.465f, -492.4087f, 101.0615f };
					break;
				case 6:
					iParam0->f_5 = 1269971654;
					iParam0->f_11 = { -319.5499f, 203.8464f, 62.1121f };
					break;
				case 7:
					iParam0->f_5 = 720927063;
					iParam0->f_11 = { -513.8f, 345.2f, 49.8945f };
					break;
				case 8:
					iParam0->f_5 = 1499128142;
					iParam0->f_11 = { -1234.665f, -1371.778f, 80.796f };
					break;
				case 9:
					iParam0->f_5 = -1539691586;
					iParam0->f_11 = { -1525.164f, 1722.86f, 239.152f };
					break;
			}
			break;
		case 2:
			iParam0->f_6 = 1;
			*iParam0 = 20;
			iParam0->f_1 = 2;
			iParam0->f_2 = 1;
			aggregate_func_4631(iParam0);
			switch (iParam2)
			{
				case 0:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 277430601;
					iParam0->f_11 = { -1925.343f, -2119.336f, 52.16934f };
					break;
				case 1:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1659133778;
					iParam0->f_11 = { 136.298f, 35.34337f, 101.2795f };
					break;
				case 2:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1296650927;
					iParam0->f_11 = { -910.7408f, 860.8453f, 134.6651f };
					break;
				case 3:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 2115437634;
					iParam0->f_11 = { 2788.779f, 1077.284f, 57.99089f };
					break;
				case 4:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1098622970;
					iParam0->f_11 = { 1751.914f, -1117.739f, 40.70011f };
					break;
				case 5:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 393263596;
					iParam0->f_11 = { 1290.432f, -836.7289f, 77.47561f };
					break;
				case 6:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 189453630;
					iParam0->f_11 = { 308.1141f, 1187.807f, 180.1746f };
					break;
				case 7:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -98921343;
					iParam0->f_11 = { -1779.538f, -235.3894f, 181.2029f };
					break;
				case 8:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 6025033;
					iParam0->f_11 = { -1290.399f, -1179.199f, 72.33453f };
					break;
				case 9:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1060299979;
					iParam0->f_11 = { -2306.89f, -1546.208f, 152.0187f };
					break;
				case 10:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 682088681;
					iParam0->f_11 = { -2724.458f, -2521.524f, 64.76124f };
					break;
				case 11:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1705841922;
					iParam0->f_11 = { -4461.883f, -3271.474f, 14.54459f };
					break;
				case 12:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -301205165;
					iParam0->f_11 = { -4631.054f, -2738.483f, -12.13559f };
					break;
				case 13:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1906160715;
					iParam0->f_11 = { -5678.259f, -3182.939f, -22.66476f };
					break;
				case 14:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1129906020;
					iParam0->f_11 = { -1688.868f, -2272.091f, 44.12061f };
					break;
				case 15:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1592980994;
					iParam0->f_11 = { -1621.917f, 1628.208f, 235.9645f };
					break;
				case 16:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 686459378;
					iParam0->f_11 = { 420.3633f, 2020.91f, 230.4423f };
					break;
				case 17:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -259262381;
					iParam0->f_11 = { -517.4607f, 510.5349f, 102.2307f };
					break;
				case 18:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1289806844;
					iParam0->f_11 = { 1775.601f, 546.3866f, 106.6334f };
					break;
				case 19:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 347656238;
					iParam0->f_11 = { 1612.415f, -1715.397f, 52.91364f };
					break;
			}
			break;
		case 3:
			iParam0->f_6 = 1;
			*iParam0 = 21;
			iParam0->f_1 = 8;
			iParam0->f_2 = 1;
			aggregate_func_4631(iParam0);
			switch (iParam2)
			{
				case 0:
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 5);
					iParam0->f_5 = 1454566440;
					iParam0->f_11 = { 2252.035f, 1342.706f, 84.5573f };
					break;
				case 1:
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 5);
					iParam0->f_5 = 1141360338;
					iParam0->f_11 = { 2280.7f, 1608.79f, 84.32f };
					break;
				case 2:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 5);
					iParam0->f_5 = 844768119;
					iParam0->f_11 = { 2438.612f, 960.3168f, 73.0963f };
					break;
				case 3:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 4);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 7);
					iParam0->f_5 = -1601993562;
					iParam0->f_11 = { 1130.541f, 575.7938f, 86.66257f };
					break;
				case 4:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 7);
					iParam0->f_5 = -901588956;
					iParam0->f_11 = { -754.3893f, -399.1133f, 40.84306f };
					break;
				case 5:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 7);
					iParam0->f_5 = 2129019244;
					iParam0->f_11 = { -410.6756f, -63.938f, 40.7762f };
					break;
				case 6:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 4);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 6);
					iParam0->f_5 = 1227099802;
					iParam0->f_11 = { -2085.777f, -161.9067f, 208.0633f };
					break;
				case 7:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 4);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 6);
					iParam0->f_5 = -940471213;
					iParam0->f_11 = { -1678.304f, -517.8369f, 140.867f };
					break;
				case 8:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 4);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 6);
					iParam0->f_5 = -700569364;
					iParam0->f_11 = { -2624.881f, -339.7662f, 141.8102f };
					break;
				case 9:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = 412376369;
					iParam0->f_11 = { -926.5729f, -924.4639f, 41.1771f };
					break;
				case 10:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 7);
					iParam0->f_5 = -364052317;
					iParam0->f_11 = { -722.9517f, -1718.81f, 41.41f };
					break;
				case 11:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = -989186530;
					iParam0->f_11 = { -1069.18f, -1919.616f, 42.3447f };
					break;
				case 12:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 4);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 6);
					iParam0->f_5 = 333858683;
					iParam0->f_11 = { 1673.672f, 1440.046f, 146.0849f };
					break;
				case 13:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = -39511303;
					iParam0->f_11 = { 1562.434f, 1445.237f, 145.2842f };
					break;
				case 14:
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 4);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 6);
					iParam0->f_5 = 813662381;
					iParam0->f_11 = { 1244.927f, 1177.251f, 148.8856f };
					break;
				case 15:
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 7);
					iParam0->f_5 = -1114006686;
					iParam0->f_11 = { 1926.703f, -362.3477f, 42.4864f };
					break;
				case 16:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 7);
					iParam0->f_5 = 1049238845;
					iParam0->f_11 = { 2192.489f, -318.3198f, 40.7232f };
					break;
				case 17:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 7);
					iParam0->f_5 = 1363886783;
					iParam0->f_11 = { 2408.447f, -490.4562f, 40.9243f };
					break;
				case 18:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 5);
					iParam0->f_5 = -1215674354;
					iParam0->f_11 = { -3243.502f, -3187.141f, -9.3137f };
					break;
				case 19:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = 1902132155;
					iParam0->f_11 = { -1745.01f, -2929.141f, -12.3355f };
					break;
				case 20:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 5);
					iParam0->f_5 = 1661312774;
					iParam0->f_11 = { -1735.07f, -2378.355f, 41.289f };
					break;
			}
			break;
		case 4:
			iParam0->f_6 = 1;
			*iParam0 = 11;
			iParam0->f_1 = 1;
			iParam0->f_2 = 2;
			aggregate_func_4631(iParam0);
			iParam0->f_15 = -2090512547;
			switch (iParam2)
			{
				case 0:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1382777618;
					iParam0->f_11 = { -228.7198f, 824.1839f, 123.3019f };
					break;
				case 1:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -2000681184;
					iParam0->f_11 = { 1274.578f, -1218.286f, 80.6496f };
					break;
				case 2:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 886884092;
					iParam0->f_11 = { -954.4733f, -1203.246f, 54.5241f };
					break;
				case 3:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1277120723;
					iParam0->f_11 = { -5442.537f, -2904.509f, -0.0668f };
					break;
				case 4:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1577436816;
					iParam0->f_11 = { -4438.908f, -2693.073f, -12.033f };
					break;
				case 5:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -234749781;
					iParam0->f_11 = { -3339.601f, -2869.283f, -6.9507f };
					break;
				case 6:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1607623039;
					iParam0->f_11 = { 1396.14f, -643.1758f, 70.4818f };
					break;
				case 7:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1943295936;
					iParam0->f_11 = { 1735.865f, -422.7769f, 47.1349f };
					break;
				case 8:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -397730168;
					iParam0->f_11 = { 1978.501f, -1902.647f, 41.0487f };
					break;
				case 9:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -392659534;
					iParam0->f_11 = { 2757.999f, -1078.666f, 45.8905f };
					break;
				case 10:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 146267878;
					iParam0->f_11 = { -1762.115f, -237.9833f, 181.9701f };
					break;
			}
			break;
		case 12:
			iParam0->f_6 = 1;
			*iParam0 = 15;
			iParam0->f_1 = 3;
			iParam0->f_2 = 1;
			aggregate_func_4631(iParam0);
			switch (iParam2)
			{
				case 0:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1247886914;
					iParam0->f_11 = { 2777.227f, 463.4025f, 65.2501f };
					break;
				case 1:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1926100410;
					iParam0->f_11 = { 1428.817f, -1812.995f, 57.37384f };
					break;
				case 2:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 603340011;
					iParam0->f_11 = { 2578.893f, -852.3694f, 41.3078f };
					break;
				case 3:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1253915394;
					iParam0->f_11 = { 2798.119f, 1432.187f, 77.71185f };
					break;
				case 4:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1281783573;
					iParam0->f_11 = { 1243.455f, 526.5765f, 87.43867f };
					break;
				case 5:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1384936716;
					iParam0->f_11 = { -28.69774f, 1111.23f, 167.9945f };
					break;
				case 6:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 636669604;
					iParam0->f_11 = { -546.6091f, -298.2057f, 52.56811f };
					break;
				case 7:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1410575087;
					iParam0->f_11 = { -1403.688f, 383.7506f, 102.2472f };
					break;
				case 8:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -736919321;
					iParam0->f_11 = { -1510.116f, -883.8221f, 88.72778f };
					break;
				case 9:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1755496218;
					iParam0->f_11 = { -1459.752f, -1915.602f, 50.93545f };
					break;
				case 10:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1810033095;
					iParam0->f_11 = { -2470.018f, -2426.993f, 59.1458f };
					break;
				case 11:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 99707271;
					iParam0->f_11 = { -3092.935f, -3166.527f, -1.36638f };
					break;
				case 12:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 2145033839;
					iParam0->f_11 = { -3685.624f, -2769.247f, -15.14988f };
					break;
				case 13:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -994111457;
					iParam0->f_11 = { -4668.993f, -3706.819f, 12.54352f };
					break;
				case 14:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 702836385;
					iParam0->f_11 = { -5194.483f, -2883.913f, 2.32447f };
					break;
			}
			break;
		case 6:
			iParam0->f_6 = 1;
			*iParam0 = 16;
			iParam0->f_1 = 2;
			iParam0->f_2 = 8;
			switch (iParam3)
			{
				case 0:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 4);
					aggregate_func_2862(iParam0, 5);
					break;
				case 1:
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 6);
					aggregate_func_2862(iParam0, 7);
					aggregate_func_4266(iParam0, 2);
					break;
			}
			switch (iParam2)
			{
				case 0:
					aggregate_func_2862(iParam0, 0);
					iParam0->f_5 = -88606612;
					iParam0->f_11 = { 498.9236f, 1191.276f, 179.5016f };
					break;
				case 1:
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = -1507537085;
					iParam0->f_11 = { 114.87f, 1097.69f, 177.97f };
					break;
				case 2:
					aggregate_func_2862(iParam0, 0);
					iParam0->f_5 = 150331424;
					iParam0->f_11 = { 2271.753f, -440.5277f, 40.82026f };
					break;
				case 3:
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = -74168995;
					iParam0->f_11 = { 2000.58f, -499.0656f, 41.0245f };
					break;
				case 4:
					aggregate_func_2862(iParam0, 0);
					iParam0->f_5 = -1303456769;
					iParam0->f_11 = { 2299.81f, -898.4015f, 41.04434f };
					break;
				case 5:
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = 2080696176;
					iParam0->f_11 = { 2369.292f, -673.8396f, 41.36789f };
					break;
				case 6:
					aggregate_func_2862(iParam0, 0);
					iParam0->f_5 = -801880493;
					iParam0->f_11 = { 1531.33f, 1578.837f, 147.4066f };
					break;
				case 7:
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = -2098877513;
					iParam0->f_11 = { 945.3031f, 1142.541f, 147.4809f };
					break;
				case 8:
					aggregate_func_2862(iParam0, 0);
					iParam0->f_5 = -985131289;
					iParam0->f_11 = { -1126.469f, 815.3829f, 117.6536f };
					break;
				case 9:
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = 171385032;
					iParam0->f_11 = { -2063.813f, 935.3212f, 147.0808f };
					break;
				case 10:
					aggregate_func_2862(iParam0, 0);
					iParam0->f_5 = -690365399;
					iParam0->f_11 = { -1589.688f, -1425.319f, 80.34965f };
					break;
				case 11:
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = -393773180;
					iParam0->f_11 = { -910.3301f, -1815.748f, 61.71241f };
					break;
				case 12:
					aggregate_func_2862(iParam0, 0);
					iParam0->f_5 = 1783045643;
					iParam0->f_11 = { -2690.104f, -2892.627f, 64.73759f };
					break;
				case 13:
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = -1841828372;
					iParam0->f_11 = { -2914.53f, -2558.967f, 61.66708f };
					break;
				case 14:
					aggregate_func_2862(iParam0, 0);
					iParam0->f_5 = -1926357119;
					iParam0->f_11 = { -4545.762f, -3673.932f, 17.87756f };
					break;
				case 15:
					aggregate_func_2862(iParam0, 1);
					iParam0->f_5 = -1904926193;
					iParam0->f_11 = { -4720.841f, -3357f, 8.61745f };
					break;
			}
			break;
		case 7:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 12;
			iParam0->f_2 = 3;
			switch (iParam2)
			{
				case 0:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 9);
					aggregate_func_2862(iParam0, 10);
					aggregate_func_2862(iParam0, 11);
					aggregate_func_5026(iParam0, iParam3);
					iParam0->f_5 = 666420762;
					iParam0->f_11 = { 468.6932f, 60.0849f, 134.4816f };
					break;
				case 1:
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 8);
					aggregate_func_2862(iParam0, 9);
					aggregate_func_2862(iParam0, 10);
					aggregate_func_2862(iParam0, 11);
					aggregate_func_5026(iParam0, iParam3);
					iParam0->f_5 = 1145423923;
					iParam0->f_11 = { -408.7124f, 154.0742f, 40.84526f };
					break;
				case 2:
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 4);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 6);
					aggregate_func_2862(iParam0, 9);
					aggregate_func_2862(iParam0, 10);
					aggregate_func_2862(iParam0, 11);
					aggregate_func_5026(iParam0, iParam3);
					iParam0->f_5 = -1176575305;
					iParam0->f_11 = { -1929.655f, -1348.338f, 105.84f };
					break;
				case 3:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 9);
					aggregate_func_2862(iParam0, 10);
					aggregate_func_2862(iParam0, 11);
					aggregate_func_5026(iParam0, iParam3);
					iParam0->f_5 = -888961792;
					iParam0->f_11 = { -2003.943f, -2158.135f, 54.2301f };
					break;
				case 4:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 9);
					aggregate_func_2862(iParam0, 10);
					aggregate_func_2862(iParam0, 11);
					aggregate_func_5026(iParam0, iParam3);
					iParam0->f_5 = -1145898130;
					iParam0->f_11 = { -1272.226f, 97.47642f, 70.53004f };
					break;
				case 5:
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 4);
					aggregate_func_2862(iParam0, 7);
					aggregate_func_2862(iParam0, 8);
					aggregate_func_2862(iParam0, 9);
					aggregate_func_2862(iParam0, 10);
					aggregate_func_2862(iParam0, 11);
					aggregate_func_5026(iParam0, iParam3);
					iParam0->f_5 = -264936334;
					iParam0->f_11 = { -2350.861f, -359.485f, 143.7474f };
					break;
				case 6:
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 3);
					aggregate_func_2862(iParam0, 6);
					aggregate_func_2862(iParam0, 7);
					aggregate_func_2862(iParam0, 9);
					aggregate_func_2862(iParam0, 10);
					aggregate_func_2862(iParam0, 11);
					aggregate_func_5026(iParam0, iParam3);
					iParam0->f_5 = -562839313;
					iParam0->f_11 = { -1736.757f, 306.2781f, 108.1355f };
					break;
				case 7:
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 4);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 6);
					aggregate_func_2862(iParam0, 9);
					aggregate_func_2862(iParam0, 10);
					aggregate_func_2862(iParam0, 11);
					aggregate_func_5026(iParam0, iParam3);
					iParam0->f_5 = -819926700;
					iParam0->f_11 = { -4964.499f, -3399.889f, 7.97322f };
					break;
				case 8:
					aggregate_func_2862(iParam0, 0);
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 9);
					aggregate_func_2862(iParam0, 10);
					aggregate_func_2862(iParam0, 11);
					aggregate_func_5026(iParam0, iParam3);
					iParam0->f_5 = -100890882;
					iParam0->f_11 = { -2192.805f, -2778.977f, 69.01174f };
					break;
				case 9:
					aggregate_func_2862(iParam0, 1);
					aggregate_func_2862(iParam0, 2);
					aggregate_func_2862(iParam0, 5);
					aggregate_func_2862(iParam0, 9);
					aggregate_func_2862(iParam0, 10);
					aggregate_func_2862(iParam0, 11);
					aggregate_func_5026(iParam0, iParam3);
					iParam0->f_5 = 373607510;
					iParam0->f_11 = { -4603.166f, -2701.434f, -10.12116f };
					break;
			}
			break;
		case 5:
			iParam0->f_6 = 1;
			*iParam0 = 21;
			iParam0->f_1 = 1;
			iParam0->f_2 = 1;
			aggregate_func_4631(iParam0);
			switch (iParam2)
			{
				case 0:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1562903685;
					iParam0->f_11 = { 1452.25f, -1695.116f, 64.9668f };
					break;
				case 1:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 442262250;
					iParam0->f_11 = { 1163.55f, -324.0086f, 97.10712f };
					break;
				case 2:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 2113001754;
					iParam0->f_11 = { 2682.104f, 858.447f, 85.90118f };
					break;
				case 3:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 222101843;
					iParam0->f_11 = { 1311.333f, 1183.934f, 151.5859f };
					break;
				case 4:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 862535295;
					iParam0->f_11 = { 40.99253f, 1813.064f, 189.5056f };
					break;
				case 5:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 267494763;
					iParam0->f_11 = { 109.9411f, 1282.256f, 176.292f };
					break;
				case 6:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 492498900;
					iParam0->f_11 = { -1450.859f, 1686.266f, 255.2526f };
					break;
				case 7:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -735417347;
					iParam0->f_11 = { 66.91456f, -445.5748f, 72.15018f };
					break;
				case 8:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 2000289900;
					iParam0->f_11 = { -1698.036f, 380.6171f, 106.0826f };
					break;
				case 9:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1820563970;
					iParam0->f_11 = { -2016.359f, -909.5917f, 84.91344f };
					break;
				case 10:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1501808210;
					iParam0->f_11 = { -1362.091f, -1267.624f, 82.41972f };
					break;
				case 11:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1103422576;
					iParam0->f_11 = { -2449.051f, -1457.942f, 148.705f };
					break;
				case 12:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -375108461;
					iParam0->f_11 = { -1559.339f, -1930.728f, 50.99157f };
					break;
				case 13:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1074344160;
					iParam0->f_11 = { -1764.444f, -2717.768f, 62.81413f };
					break;
				case 14:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1375567406;
					iParam0->f_11 = { -2190.544f, -2200.288f, 64.42333f };
					break;
				case 15:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1695022182;
					iParam0->f_11 = { -2803.26f, -3142.291f, 5.88098f };
					break;
				case 16:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1773241795;
					iParam0->f_11 = { -3175.168f, -2402.267f, 22.72451f };
					break;
				case 17:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1650499101;
					iParam0->f_11 = { -4220.611f, -2690.138f, 0.65931f };
					break;
				case 18:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 149116609;
					iParam0->f_11 = { -4372.619f, -3274.055f, 20.26154f };
					break;
				case 19:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1486166046;
					iParam0->f_11 = { -5456.922f, -3562.744f, -21.1142f };
					break;
				case 20:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 58739626;
					iParam0->f_11 = { -5796.222f, -2650.145f, -16.68393f };
					break;
			}
			break;
		case 11:
			iParam0->f_6 = 1;
			*iParam0 = 10;
			iParam0->f_1 = 4;
			iParam0->f_2 = 1;
			aggregate_func_4631(iParam0);
			aggregate_func_4266(iParam0, 2);
			switch (iParam2)
			{
				case 0:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1657923088;
					iParam0->f_11 = { 959.0613f, 383.9384f, 111.0409f };
					break;
				case 1:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1268232386;
					iParam0->f_11 = { 1465.514f, -821.0334f, 50.2372f };
					break;
				case 2:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1926851120;
					iParam0->f_11 = { -1082.332f, -696.7548f, 70.5432f };
					break;
				case 3:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -66052340;
					iParam0->f_11 = { -1462.952f, -1929.859f, 48.4187f };
					break;
				case 4:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1738334804;
					iParam0->f_11 = { -4988.295f, -3902.346f, -0.03286f };
					break;
				case 5:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1009780912;
					iParam0->f_11 = { -2770.473f, -2936.506f, 64.84297f };
					break;
				case 6:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = -1560771476;
					iParam0->f_11 = { -1209.61f, -1812.165f, 61.23543f };
					break;
				case 7:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 453813335;
					iParam0->f_11 = { -1706.993f, -580.9286f, 149.93f };
					break;
				case 8:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 786924542;
					iParam0->f_11 = { 803.0057f, -584.7925f, 79.32288f };
					break;
				case 9:
					aggregate_func_4631(iParam0);
					iParam0->f_5 = 1656593925;
					iParam0->f_11 = { 1778.236f, -1731.359f, 48.27552f };
					break;
			}
			break;
		case 9:
			iParam0->f_6 = 1;
			*iParam0 = 12;
			iParam0->f_1 = 4;
			iParam0->f_2 = 5;
			switch (iParam2)
			{
				case 0:
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = 1323108111;
					iParam0->f_11 = { -1159.115f, 397.0877f, 60.4953f };
					Jump @8253; //curOff = 7799
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = -1505479200;
					iParam0->f_11 = { -1278.359f, 291.4224f, 76.6652f };
					Jump @8253; //curOff = 7840
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = -1283075997;
					iParam0->f_11 = { -1371.28f, 283.4114f, 86.0114f };
					Jump @8253; //curOff = 7881
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = -2100531475;
					iParam0->f_11 = { -1117.687f, 406.6783f, 55.3681f };
					Jump @8253; //curOff = 7922
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = 269617530;
					iParam0->f_11 = { -1288.323f, 148.5012f, 71.7864f };
					Jump @8253; //curOff = 7963
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = 1592829750;
					iParam0->f_11 = { -1648.447f, -114.858f, 170.0504f };
					Jump @8253; //curOff = 8004
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = 1817985549;
					iParam0->f_11 = { -1081.189f, -405.0457f, 97.0153f };
					Jump @8253; //curOff = 8045
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = 1945424739;
					iParam0->f_11 = { 206.8413f, -170.3653f, 130.5284f };
					Jump @8253; //curOff = 8086
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = 1787314318;
					iParam0->f_11 = { -621.2297f, 186.8452f, 41.2741f };
					Jump @8253; //curOff = 8127
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = 542354442;
					iParam0->f_11 = { 44.3784f, 388.2357f, 129.8287f };
					Jump @8253; //curOff = 8168
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = 1510776727;
					iParam0->f_11 = { 752.9834f, -58.1133f, 157.6479f };
					Jump @8253; //curOff = 8209
					aggregate_func_5027(iParam0, iParam3);
					iParam0->f_5 = -2017297662;
					iParam0->f_11 = { 817.7247f, 566.3447f, 114.3761f };
					Jump @11131; //curOff = 8253
					iParam0->f_6 = 1;
					*iParam0 = 20;
					iParam0->f_1 = 1;
					iParam0->f_2 = 1;
					aggregate_func_4631(iParam0);
					switch (iParam2)
					{
						case 0:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -377638420;
							iParam0->f_11 = { -2058.13f, -2493.143f, 63.51377f };
							break;
						case 1:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 1308799438;
							iParam0->f_11 = { -1541.353f, -2334.611f, 43.10187f };
							break;
						case 2:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -1030922940;
							iParam0->f_11 = { -3456.39f, -2262.339f, 0.01624f };
							break;
						case 3:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 1750043358;
							iParam0->f_11 = { -3703.712f, -3594.224f, 45.18983f };
							break;
						case 4:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -1330609910;
							iParam0->f_11 = { -1581.551f, -1656.278f, 78.51012f };
							break;
						case 5:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 223942444;
							iParam0->f_11 = { -1236.292f, -1118.55f, 68.58572f };
							break;
						case 6:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 1067547121;
							iParam0->f_11 = { -1264.125f, -773.2117f, 91.83559f };
							break;
						case 7:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -450732096;
							iParam0->f_11 = { -1414.607f, -234.2123f, 99.22668f };
							break;
						case 8:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -1701940764;
							iParam0->f_11 = { -1721.402f, 553.6f, 112.524f };
							break;
						case 9:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 1584258975;
							iParam0->f_11 = { -484.7991f, -70.36918f, 42.94242f };
							break;
						case 10:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -98183174;
							iParam0->f_11 = { -458.5839f, -346.5686f, 80.66556f };
							break;
						case 11:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -90261849;
							iParam0->f_11 = { 1089.583f, 23.75282f, 88.22131f };
							break;
						case 12:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 754522971;
							iParam0->f_11 = { 1000.131f, 417.5909f, 107.9082f };
							break;
						case 13:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 974542513;
							iParam0->f_11 = { 713.7332f, 23.52884f, 152.0797f };
							break;
						case 14:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -790885273;
							iParam0->f_11 = { 63.77304f, 1023.487f, 201.9749f };
							break;
						case 15:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -1447045452;
							iParam0->f_11 = { 366.667f, 1408.665f, 175.0605f };
							break;
						case 16:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -586115209;
							iParam0->f_11 = { 1785.934f, 1522.009f, 155.1442f };
							break;
						case 17:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 224941020;
							iParam0->f_11 = { 1279.07f, 1164.678f, 149.2508f };
							break;
						case 18:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -1179654578;
							iParam0->f_11 = { 2106.456f, 207.6169f, 72.68985f };
							break;
						case 19:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 1247197458;
							iParam0->f_11 = { 2675.549f, 179.9657f, 54.14579f };
							break;
					}
					Jump @11131; //curOff = 9190
					iParam0->f_6 = 1;
					*iParam0 = 9;
					iParam0->f_1 = 2;
					iParam0->f_2 = 1;
					aggregate_func_4631(iParam0);
					iParam0->f_10 = 60f;
					switch (iParam2)
					{
						case 0:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 974582605;
							iParam0->f_11 = { 1562.246f, -2047.412f, 47.3446f };
							break;
						case 1:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -964359125;
							iParam0->f_11 = { 1379.948f, -1696.249f, 66.86113f };
							break;
						case 2:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -700339292;
							iParam0->f_11 = { 1621.706f, -1650.367f, 56.03105f };
							break;
						case 3:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -470300912;
							iParam0->f_11 = { 1504.868f, -1470.025f, 71.38271f };
							break;
						case 4:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -241343909;
							iParam0->f_11 = { 1082.685f, -1265.978f, 67.5664f };
							break;
						case 5:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 1944053474;
							iParam0->f_11 = { 682.6295f, -992.2614f, 52.4207f };
							break;
						case 6:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -2120646059;
							iParam0->f_11 = { 707.7728f, -885.6594f, 48.26217f };
							break;
						case 7:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -1656440405;
							iParam0->f_11 = { 879.6264f, -537.9133f, 88.03556f };
							break;
						case 8:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -1422404207;
							iParam0->f_11 = { 1012.322f, -394.373f, 90.43443f };
							break;
					}
					Jump @11131; //curOff = 9641
					iParam0->f_6 = 1;
					*iParam0 = 1;
					iParam0->f_1 = 6;
					iParam0->f_2 = 1;
					aggregate_func_4631(iParam0);
					aggregate_func_4266(iParam0, 1);
					aggregate_func_4266(iParam0, 4);
					aggregate_func_4266(iParam0, 8);
					aggregate_func_4266(iParam0, 16);
					switch (iParam2)
					{
						case 0:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -1623035253;
							iParam0->f_11 = { aggregate_func_4966(aggregate_func_4710(iParam4)) };
							break;
					}
					Jump @11131; //curOff = 9747
					iParam0->f_6 = 1;
					*iParam0 = 10;
					iParam0->f_1 = 5;
					iParam0->f_2 = 6;
					switch (iParam2)
					{
						case 0:
							aggregate_func_5028(iParam0, iParam3);
							iParam0->f_5 = -1957221189;
							iParam0->f_11 = { -347.4531f, 740.8643f, 116.4549f };
							break;
						case 1:
							aggregate_func_5028(iParam0, iParam3);
							iParam0->f_5 = 871956008;
							iParam0->f_11 = { -360.6497f, 824.0327f, 115.4768f };
							break;
						case 2:
							aggregate_func_5028(iParam0, iParam3);
							iParam0->f_5 = -718829908;
							iParam0->f_11 = { 2957.225f, 524.4706f, 43.66619f };
							break;
						case 3:
							aggregate_func_5028(iParam0, iParam3);
							iParam0->f_5 = -478076065;
							iParam0->f_11 = { 2975.885f, 537.2245f, 42.42131f };
							break;
						case 4:
							aggregate_func_5028(iParam0, iParam3);
							iParam0->f_5 = 158131441;
							iParam0->f_11 = { 1444.633f, -1417.982f, 78.22246f };
							break;
						case 5:
							aggregate_func_5028(iParam0, iParam3);
							iParam0->f_5 = 575051428;
							iParam0->f_11 = { 1394.169f, -1422.854f, 78.97552f };
							break;
						case 6:
							aggregate_func_5028(iParam0, iParam3);
							iParam0->f_5 = -861587350;
							iParam0->f_11 = { 2996.145f, 1351.808f, 42.95977f };
							break;
						case 7:
							aggregate_func_5028(iParam0, iParam3);
							iParam0->f_5 = -616671844;
							iParam0->f_11 = { 2915.743f, 1231.952f, 43.5792f };
							break;
						case 8:
							aggregate_func_5028(iParam0, iParam3);
							iParam0->f_5 = -828875274;
							iParam0->f_11 = { -833.5609f, -1543.917f, 59.6274f };
							break;
						case 9:
							aggregate_func_5028(iParam0, iParam3);
							iParam0->f_5 = -598017669;
							iParam0->f_11 = { -1019.64f, -1138.944f, 56.39161f };
							break;
					}
					Jump @11131; //curOff = 10248
					iParam0->f_6 = 1;
					iParam0->f_7 = 1;
					*iParam0 = 12;
					iParam0->f_1 = 2;
					iParam0->f_2 = 1;
					aggregate_func_4631(iParam0);
					switch (iParam2)
					{
						case 0:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 2136361638;
							iParam0->f_11 = { 2208.668f, -350.9536f, 41.488f };
							break;
						case 1:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 1948005426;
							iParam0->f_11 = { 1733.923f, -727.6727f, 40.8996f };
							break;
						case 2:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 462368629;
							iParam0->f_11 = { -2028.171f, 421.7315f, 123.1801f };
							break;
						case 3:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -172629291;
							iParam0->f_11 = { 238.8146f, 1242.903f, 185.8171f };
							break;
						case 4:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 1063777848;
							iParam0->f_11 = { 646.006f, 1304.928f, 193.4366f };
							break;
						case 5:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -267241827;
							iParam0->f_11 = { 438.9673f, 831.1111f, 145.7085f };
							break;
						case 6:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -1183266453;
							iParam0->f_11 = { -545.762f, 393.6189f, 87.0076f };
							break;
						case 7:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -877826604;
							iParam0->f_11 = { 1017.37f, 1062.322f, 158.965f };
							break;
						case 8:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 1527533302;
							iParam0->f_11 = { 2226.213f, -248.6621f, 42.5431f };
							break;
						case 9:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = -865586768;
							iParam0->f_11 = { 2566.893f, -71.0977f, 49.3333f };
							break;
						case 10:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 294379466;
							iParam0->f_11 = { 1389.072f, -2196.696f, 48.3307f };
							break;
						case 11:
							aggregate_func_4631(iParam0);
							iParam0->f_5 = 452588198;
							iParam0->f_11 = { 906.9065f, -987.0414f, 56.96f };
							break;
					}
					Jump @11131; //curOff = 10830
					switch (iParam1)
					{
						case 16:
							iParam0->f_8 = -468635158;
							break;
						case 17:
							iParam0->f_8 = 1112069699;
							break;
						case 18:
							iParam0->f_8 = 661147828;
							break;
						case 19:
							iParam0->f_8 = 899082205;
							break;
						case 20:
							iParam0->f_8 = 987333815;
							break;
						case 21:
							iParam0->f_8 = -315961129;
							break;
						case 22:
							iParam0->f_8 = -139081918;
							break;
						case 23:
							iParam0->f_8 = 1604238189;
							break;
					}
					iVar17 = aggregate_func_5540(iParam1);
					if (iVar17 == -1)
					{
						return;
					}
					if ((iParam1 == 22 || iParam1 == 23) || iParam1 == 21)
					{
						iParam0->f_7 = 1;
					}
					*iParam0 = aggregate_func_5010(iVar17);
					iParam0->f_1 = 0;
					iParam0->f_6 = 2;
					aggregate_func_4266(iParam0, 32);
					if (iParam2 != -1)
					{
						iParam0->f_9 = aggregate_func_5029(aggregate_func_4961(iVar17), iParam2);
						iParam0->f_15 = aggregate_func_5030(aggregate_func_4961(iVar17), iParam2);
						iParam0->f_5 = aggregate_func_4973(iVar17, iParam2);
						iParam0->f_11 = { aggregate_func_4970(iVar17, iParam2) };
					}
				}

var func_751(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_774(var uParam0)
{
	return aggregate_func_3047(uParam0, 22, 1);
}

int func_775(var uParam0)
{
	return func_835(aggregate_func_3047(uParam0, 29, 1));
}

int func_776(var uParam0)
{
	return func_836(aggregate_func_3047(uParam0, 28, 1));
}

bool func_777(var uParam0, int iParam1)
{
	var uVar0;
	int iVar5;

	iVar5 = aggregate_func_5168(*uParam0);
	if (iVar5 == -1)
	{
		return false;
	}
	if (!aggregate_func_1565(&uVar0))
	{
		return false;
	}
	if (!aggregate_func_3061(&uVar0, 3, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&uVar0, 4, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&uVar0, 6, aggregate_func_5169(iVar5), 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&uVar0, 7, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&uVar0, 8, *uParam0, 0, 1))
	{
		return false;
	}
	if (!aggregate_func_3061(&uVar0, 15, 0, 0, 0))
	{
		return false;
	}
	if (!aggregate_func_3061(&uVar0, 16, func_837(iParam1), 0, 1))
	{
		return false;
	}
	uParam0->f_4 = func_838(&uVar0);
	return true;
}

int func_778(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_839(uParam1);
		case 1:
			return aggregate_func_4608(uParam1);
		default:
			break;
	}
	return 0;
}

var func_831(int iParam0)
{
	return (Global_1100949->f_33[iParam0 /*16*/])->f_2;
}

int func_835(int iParam0)
{
	switch (iParam0)
	{
		case 146345170:
			return 0;
		case joaat("aggressive"):
			return 1;
		case 1880310113:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_836(int iParam0)
{
	switch (iParam0)
	{
		case joaat("male"):
			return 0;
		case joaat("female"):
			return 1;
		default:
			break;
	}
	return -1;
}

int func_837(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("default");
		case 1:
			return 2009994498;
		default:
			break;
	}
	return 0;
}

int func_838(var uParam0)
{
	return aggregate_func_3047(uParam0, 23, 1);
}

int func_839(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_876(uParam0->f_2) == 0)
	{
		return 0;
	}
	if (uParam0->f_3 == 0)
	{
		return 0;
	}
	if (uParam0->f_5 == 0)
	{
		return 0;
	}
	return 1;
}

int func_876(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 146345170;
		case 1:
			return joaat("aggressive");
		case 2:
			return 1880310113;
		default:
			break;
	}
	return 0;
}

