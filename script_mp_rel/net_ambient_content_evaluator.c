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
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iVar0 = MISC::GET_GAME_TIMER();
	func_1();
	iVar1 = (MISC::GET_GAME_TIMER() - iVar0);
	while (!aggregate.aberdeenpigfarm.func_49(0, 0) && func_3())
	{
		Global_1196787->f_1.f_718 = (1 + Global_1196787->f_1.f_718);
		if (Global_1196787->f_1.f_718 >= 3)
		{
			Global_1196787->f_1.f_718 = 0;
		}
		switch (Global_1196787->f_1.f_718)
		{
			case 0:
				func_4();
				break;
			case 1:
				func_5();
				break;
			case 2:
				func_6();
				break;
		}
		BUILTIN::WAIT(0);
	}
	iVar2 = PLAYER::PLAYER_ID();
	iVar3 = 0;
	while (iVar3 < 71)
	{
		if (aggregate.la_alligator.func_144(iVar3, iVar2, 0) && aggregate.la_alligator.func_144(iVar3, iVar2, 1))
		{
			aggregate.net_ambient_content_evaluator.func_8(iVar3);
		}
		iVar3++;
	}
	while (!SCRIPTS::_0x380FFA15B72408FB(1440))
	{
		BUILTIN::WAIT(0);
	}
	aggregate.aberdeenpigfarm.func_46();
}

void func_1()
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	aggregate.flow_controller.func_8();
	if (aggregate.flow_controller.func_9())
	{
		aggregate.aberdeenpigfarm.func_46();
	}
	func_12();
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::_0xB711EB4BC8D06013();
}

bool func_3()
{
	return !aggregate.fme_animal_tagging.func_16(aggregate.gfh_campworks.func_16(), 0, 0);
}

void func_4()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1196787->f_1.f_715++;
		if (Global_1196787->f_1.f_715 < 0 || Global_1196787->f_1.f_715 >= Global_1184672->f_2505.f_499)
		{
			Global_1196787->f_1.f_715 = 0;
		}
		if (Global_1196787->f_1.f_715 >= Global_1184672->f_2505.f_499)
		{
			return;
		}
		if (!aggregate.la_alligator.func_19(&(Global_1184672->f_2505.f_427[Global_1196787->f_1.f_715])))
		{
			return;
		}
		if (MISC::IS_BIT_SET(iVar1, Global_1196787->f_1.f_715))
		{
			return;
		}
		MISC::SET_BIT(&iVar1, Global_1196787->f_1.f_715);
		aggregate.net_ambient_content_evaluator.func_17(&(Global_1184672->f_2505.f_427[Global_1196787->f_1.f_715]), -1);
		iVar0++;
	}
}

void func_5()
{
	if (aggregate.net_ambient_content_evaluator.func_18())
	{
		func_19();
	}
	if (&Global_1184672 < 1)
	{
		return;
	}
	func_20();
}

void func_6()
{
	if (&Global_1184672 < 1)
	{
		return;
	}
	aggregate.net_ambient_content_evaluator.func_21((*Global_1187677)[&Global_1273882 /*204*/], &(Global_1196787->f_1.f_719));
	func_22();
	if (!aggregate.net_ambient_content_evaluator.func_18())
	{
		return;
	}
	func_23(&(Global_1184672->f_28), Global_1196787->f_1.f_717, 5, Global_1196787->f_1.f_716);
}

void func_12()
{
	aggregate.fm_mission_controller.func_5642(Global_1184672);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1184672, 3005, 27);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(Global_1184672), 3005, "g_mpACEHostData");
	func_33(&(Global_1196787->f_1));
	if (aggregate.dynamic_craft_scenario.func_452())
	{
		aggregate.net_ambient_content_evaluator.func_35(Global_1187677);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1187677, 6529, 28);
		aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2((*Global_1187677)[0 /*204*/]), 6529, "g_mpACEPlayerData");
		aggregate.net_ambient_content_evaluator.func_35(Global_1194410);
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1194410, 2305, 29);
		aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2((*Global_1194410)[0 /*72*/]), 2305, "g_mpACELauncherPlayerData");
	}
	else
	{
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1187677, 6529, 28);
		aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2((*Global_1187677)[0 /*204*/]), 6529, "g_mpACEPlayerData");
		NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1194410, 2305, 29);
		aggregate.flow_controller.func_12(NETWORK::_0x690806BC83BC8CA2((*Global_1194410)[0 /*72*/]), 2305, "g_mpACELauncherPlayerData");
	}
}

void func_19()
{
	switch (&Global_1184672)
	{
		case -1:
			Global_1184672 = 0;
			return;
		case 0:
			Global_1184672->f_3[0] = 3;
			Global_1184672->f_3[1] = 10;
			Global_1184672->f_3[2] = 10;
			Global_1184672->f_3[3] = 16;
			Global_1184672->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			Global_1184672 = 1;
			return;
		case 1:
			func_23(&(Global_1184672->f_28), Global_1196787->f_1.f_714, Global_1196787->f_1.f_711, -1);
			func_47(Global_1196787->f_1.f_713);
			func_48();
			break;
	}
}

void func_20()
{
	int iVar0;

	iVar0 = Global_1196787->f_1.f_711;
	iVar0++;
	if (iVar0 >= 8)
	{
		iVar0 = 0;
	}
	Global_1196787->f_1.f_711 = iVar0;
	Global_1196787->f_1.f_713++;
	if (!aggregate.la_alligator.func_19(Global_1196787->f_1.f_713))
	{
		Global_1196787->f_1.f_713 = 0;
	}
	if (!aggregate.net_ambient_content_evaluator.func_18() && aggregate.barcustomer_interaction.func_42(&((Global_1196787->f_1[Global_1196787->f_1.f_713 /*10*/])->f_7)))
	{
		aggregate.fme_animal_tagging.func_290(&((Global_1196787->f_1[Global_1196787->f_1.f_713 /*10*/])->f_7));
	}
	Global_1196787->f_1.f_714++;
	if (Global_1196787->f_1.f_714 < 0 || Global_1196787->f_1.f_714 >= 5)
	{
		Global_1196787->f_1.f_714 = 0;
	}
}

void func_22()
{
	Global_1196787->f_1.f_716++;
	if (Global_1196787->f_1.f_716 < 0 || Global_1196787->f_1.f_716 >= 32)
	{
		Global_1196787->f_1.f_716 = 0;
	}
	Global_1196787->f_1.f_717++;
	if (Global_1196787->f_1.f_717 < 0 || Global_1196787->f_1.f_717 >= 5)
	{
		Global_1196787->f_1.f_717 = 0;
	}
}

void func_23(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<40> Var0;

	if (!func_53(uParam0))
	{
		if (iParam2 == 5 && iParam3 == -1)
		{
			return;
		}
		func_54(uParam0, iParam2, iParam3);
	}
	if (func_55(uParam0))
	{
		return;
	}
	if ((uParam0->f_2[iParam1 /*40*/])->f_2 != -1)
	{
		Var0 = { func_56(uParam0->f_2[iParam1 /*40*/]) };
		if (Var0.f_2 == -1)
		{
			aggregate.net_ambient_content_evaluator.func_114(uParam0, iParam1);
		}
		else
		{
			func_58(uParam0, uParam0->f_2[iParam1 /*40*/], Var0);
		}
	}
}

void func_33(var uParam0)
{
	struct<10> Var0;
	int iVar10;
	var uVar11;

	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_4 = -1;
	Var0.f_4.f_1 = -1;
	iVar10 = 0;
	while (iVar10 < 71)
	{
		*((*uParam0)[iVar10 /*10*/]) = { Var0 };
		iVar10++;
	}
	uParam0->f_711 = 0;
	uParam0->f_712 = 0;
	uParam0->f_713 = 0;
	uParam0->f_714 = 0;
	uParam0->f_715 = 0;
	uParam0->f_716 = 0;
	uParam0->f_717 = 0;
	uParam0->f_718 = 0;
	uParam0->f_719 = uVar11;
}

void func_47(int iParam0)
{
	struct<6> Var0;
	struct<17> Var6;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;

	if ((Global_1184672->f_231[iParam0 /*15*/])->f_1 == -1)
	{
		return;
	}
	if ((Global_1184672->f_231[iParam0 /*15*/])->f_1 == 0)
	{
		if (aggregate.net_ambient_content_evaluator.func_100(iParam0))
		{
			func_104(iParam0);
			Var0 = 1;
			Var0.f_1 = -1;
			Var0.f_1.f_1 = -1;
			Var0.f_5 = 255;
			Var6.f_1 = 1024;
			Var6.f_4 = -15;
			Var6.f_5 = 255;
			Var6.f_8 = 1;
			Var6.f_8.f_1.f_1 = 2147483647;
			Var6.f_13 = -1;
			*(Global_1184672->f_2505[iParam0 /*6*/]) = { Var0 };
			*(Global_1184672->f_231.f_1066[iParam0 /*17*/]) = { Var6 };
			(Global_1184672->f_231[iParam0 /*15*/])->f_1 = -1;
		}
		return;
	}
	if ((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_8 != 0)
	{
		if (aggregate.dynamic_craft_scenario.func_186((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_8))
		{
			aggregate.net_ambient_content_evaluator.func_95(iParam0);
			return;
		}
	}
	if ((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_2 != 0 && (Global_1184672->f_231[iParam0 /*15*/])->f_5.f_3 != -1)
	{
		iVar23 = func_105((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_3);
		iVar24 = func_106((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_3);
		if (iVar23 < 1 || iVar23 >= 4)
		{
			aggregate.net_ambient_content_evaluator.func_95(iParam0);
			return;
		}
		else if (iVar24 != (Global_1184672->f_231[iParam0 /*15*/])->f_5.f_2)
		{
			aggregate.net_ambient_content_evaluator.func_95(iParam0);
			return;
		}
		else if (iVar23 == 1)
		{
			if (!_NAMESPACE26::_0x93A91A351A07360E(iVar24))
			{
				aggregate.net_ambient_content_evaluator.func_95(iParam0);
				return;
			}
			iVar25 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar24);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar25))
			{
				aggregate.net_ambient_content_evaluator.func_95(iParam0);
				return;
			}
		}
	}
	if ((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_2 != 0 && (Global_1184672->f_231[iParam0 /*15*/])->f_5.f_4 != -1)
	{
		iVar26 = (Global_1184672->f_231[iParam0 /*15*/])->f_5.f_4;
		if (!NETWORK::_0x1B89BC43B6E69107(894914127, iVar26, 0, 0))
		{
			aggregate.net_ambient_content_evaluator.func_95(iParam0);
			return;
		}
		if (!_NAMESPACE26::_0x93A91A351A07360E((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_2))
		{
			aggregate.net_ambient_content_evaluator.func_95(iParam0);
			return;
		}
	}
	if ((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_2 != 0 && (Global_1184672->f_231[iParam0 /*15*/])->f_5.f_5 != -1)
	{
	}
	if (aggregate.net_ambient_content_evaluator.func_43(iParam0, 2048))
	{
		iVar28 = (Global_1184672->f_231.f_1066[iParam0 /*17*/])->f_7;
		iVar27 = 0;
		while (iVar27 < iVar28)
		{
			if (NETWORK::_0x1B89BC43B6E69107(aggregate.net_ambient_content_evaluator.func_107(iParam0), aggregate.net_ambient_content_evaluator.func_108(iParam0, iVar27), 0, 0))
			{
				bVar29 = true;
			}
			iVar27++;
		}
		if (!bVar29)
		{
			if (aggregate.net_ambient_content_evaluator.func_83(iParam0) == 6)
			{
				aggregate.net_ambient_content_evaluator.func_95(iParam0);
				return;
			}
			if (aggregate.net_ambient_content_evaluator.func_83(iParam0) == 2)
			{
				bVar30 = true;
			}
		}
		if (bVar30)
		{
			if (!aggregate.barcustomer_interaction.func_42(&((Global_1196787->f_1[iParam0 /*10*/])->f_7)))
			{
				aggregate.barcustomer_interaction.func_25(&((Global_1196787->f_1[iParam0 /*10*/])->f_7), 0);
			}
			iVar31 = Global_1901929->f_230.f_62;
			if (iVar31 > 0 && aggregate.fme_animal_tagging.func_181(&((Global_1196787->f_1[iParam0 /*10*/])->f_7)) > iVar31)
			{
				aggregate.net_ambient_content_evaluator.func_95(iParam0);
				return;
			}
		}
		else if (aggregate.barcustomer_interaction.func_42(&((Global_1196787->f_1[iParam0 /*10*/])->f_7)))
		{
			aggregate.fme_animal_tagging.func_290(&((Global_1196787->f_1[iParam0 /*10*/])->f_7));
		}
	}
}

void func_48()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (NETWORK::GET_TIME_DIFFERENCE(Global_1184672->f_1, iVar0) < 30000)
	{
		return;
	}
	func_111(Global_1184672->f_2);
	Global_1184672->f_1 = iVar0;
	iVar1 = Global_1184672->f_2;
	iVar1++;
	if (iVar1 < 0 || iVar1 >= 4)
	{
		iVar1 = 0;
	}
	Global_1184672->f_2 = iVar1;
}

bool func_53(var uParam0)
{
	return *uParam0 == 5;
}

void func_54(var uParam0, int iParam1, int iParam2)
{
	struct<40> Var0;
	struct<24> Var40;

	Var0 = { func_118(uParam0, &iParam1, iParam2) };
	if (Var0.f_2 == -1)
	{
		return;
	}
	Var40 = -1;
	Var40.f_2 = -1;
	Var40.f_3 = 255;
	Var40.f_4 = -1;
	Var40.f_5 = -1;
	Var40.f_6 = -1;
	Var40.f_8 = 2;
	Var40.f_8.f_1 = -1;
	Var40.f_8.f_5 = -1;
	Var40.f_8.f_5.f_1 = -1;
	Var40.f_8.f_5.f_3 = -1;
	Var40.f_8.f_5.f_4 = -1;
	Var40.f_8.f_5.f_5 = -1;
	Var40.f_8.f_5.f_6 = -1;
	Var40.f_8.f_5.f_6.f_1 = -1;
	Var40.f_8.f_5.f_9 = 2;
	Var40.f_23.f_1 = 1024;
	Var40.f_23.f_4 = -15;
	Var40.f_23.f_5 = 255;
	Var40.f_23.f_8 = 1;
	Var40.f_23.f_8.f_1.f_1 = 2147483647;
	Var40.f_23.f_13 = -1;
	Var40.f_2 = Var0.f_2;
	Var40.f_3 = Var0.f_3;
	Var40.f_5 = Var0.f_5;
	Var40.f_4 = Var0.f_4;
	Var40.f_7 = Var0.f_7;
	Var40.f_8 = { Var0.f_8 };
	Var40.f_23 = { Var0.f_23 };
	func_119(uParam0, &Var40);
}

bool func_55(var uParam0)
{
	return *uParam0 == 0;
}

struct<40> func_56(var uParam0)
{
	struct<40> Var0;

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
	switch (uParam0->f_2)
	{
		case 0:
			return func_120(uParam0, &(Global_1100949->f_33.f_513));
		case 2:
			return func_120(uParam0, &(Global_1212887->f_367));
		case 5:
			if (!NETWORK::_0x255A5EF65EDA9167(uParam0->f_3))
			{
				return Var0;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_3))
			{
				return Var0;
			}
			return func_120(uParam0, (*Global_1187677)[uParam0->f_3 /*204*/]);
		default:
			break;
	}
	return Var0;
}

void func_58(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (aggregate.bandana.func_20(uParam1))
	{
		case -1:
			aggregate.net_ambient_content_evaluator.func_114(uParam0, uParam1->f_1);
			break;
		case 0:
			if (!aggregate.net_ambient_content_evaluator.func_115(uParam1, &uParam2))
			{
				aggregate.coffee_drinking.func_5(uParam1, 2);
				return;
			}
			if (aggregate.bandana.func_20(&uParam2) < 1)
			{
				return;
			}
			uParam1->f_6 = func_124(&uParam2);
			aggregate.coffee_drinking.func_5(uParam1, 1);
			break;
		case 1:
			if (!aggregate.net_ambient_content_evaluator.func_115(uParam1, &uParam2))
			{
				aggregate.coffee_drinking.func_5(uParam1, 2);
				return;
			}
			if (aggregate.bandana.func_20(&uParam2) < 2)
			{
				return;
			}
			aggregate.coffee_drinking.func_5(uParam1, 3);
			break;
		case 2:
			aggregate.coffee_drinking.func_5(uParam1, -1);
			break;
		case 3:
			if (!aggregate.net_ambient_content_evaluator.func_115(uParam1, &uParam2))
			{
				aggregate.coffee_drinking.func_5(uParam1, -1);
				return;
			}
			if (aggregate.bandana.func_20(&uParam2) < 3)
			{
				return;
			}
			aggregate.coffee_drinking.func_5(uParam1, -1);
			break;
	}
}

void func_70(var uParam0)
{
	int iVar0;
	struct<40> Var1;
	int iVar41;

	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_3[iVar0] = 0;
		uParam0->f_8[iVar0] = 0;
		uParam0->f_13[iVar0] = 0;
		uParam0->f_18[iVar0] = 0;
		uParam0->f_23[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_28 = 0;
	uParam0->f_28.f_1 = 0;
	Var1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = 255;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_8 = 2;
	Var1.f_8.f_1 = -1;
	Var1.f_8.f_5 = -1;
	Var1.f_8.f_5.f_1 = -1;
	Var1.f_8.f_5.f_3 = -1;
	Var1.f_8.f_5.f_4 = -1;
	Var1.f_8.f_5.f_5 = -1;
	Var1.f_8.f_5.f_6 = -1;
	Var1.f_8.f_5.f_6.f_1 = -1;
	Var1.f_8.f_5.f_9 = 2;
	Var1.f_23.f_1 = 1024;
	Var1.f_23.f_4 = -15;
	Var1.f_23.f_5 = 255;
	Var1.f_23.f_8 = 1;
	Var1.f_23.f_8.f_1.f_1 = 2147483647;
	Var1.f_23.f_13 = -1;
	iVar41 = 0;
	while (iVar41 < 5)
	{
		*(uParam0->f_28.f_2[iVar41 /*40*/]) = { Var1 };
		iVar41++;
	}
}

void func_71(var uParam0)
{
	struct<15> Var0;
	struct<17> Var15;
	int iVar32;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var15.f_1 = 1024;
	Var15.f_4 = -15;
	Var15.f_5 = 255;
	Var15.f_8 = 1;
	Var15.f_8.f_1.f_1 = 2147483647;
	Var15.f_13 = -1;
	iVar32 = 0;
	while (iVar32 < 71)
	{
		*((*uParam0)[iVar32 /*15*/]) = { Var0 };
		*(uParam0->f_1066[iVar32 /*17*/]) = { Var15 };
		iVar32++;
	}
}

void func_72(var uParam0)
{
	struct<6> Var0;
	int iVar6;

	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_5 = 255;
	iVar6 = 0;
	while (iVar6 < 71)
	{
		*((*uParam0)[iVar6 /*6*/]) = { Var0 };
		uParam0->f_427[iVar6] = 0;
		iVar6++;
	}
	uParam0->f_499 = 0;
}

void func_73(var uParam0)
{
	struct<40> Var0;
	int iVar40;

	*uParam0 = 0;
	uParam0->f_1 = 0;
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
	iVar40 = 0;
	iVar40 = 0;
	while (iVar40 < 5)
	{
		*(uParam0->f_3[iVar40 /*40*/]) = { Var0 };
		iVar40++;
	}
}

void func_74(var uParam0)
{
	struct<72> Var0;

	Var0 = 71;
	*uParam0 = { Var0 };
}

void func_104(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		aggregate.net_ambient_content_evaluator.func_160(iParam0, iVar0);
		iVar0++;
	}
}

var func_105(int iParam0)
{
	return &(Global_1100949->f_752[iParam0 /*6*/]);
}

var func_106(int iParam0)
{
	return (Global_1100949->f_752[iParam0 /*6*/])->f_1;
}

void func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = aggregate.la_alligator.func_198(iParam0);
	iVar1 = ((aggregate.la_alligator.func_198(iParam0) + aggregate.la_alligator.func_199(iParam0)) - 1);
	iVar2 = ((aggregate.la_alligator.func_198(iParam0) + aggregate.la_alligator.func_199(iParam0)) - 1);
	iVar3 = &Global_1184672->f_8[iParam0];
	iVar4 = &Global_1184672->f_18[iParam0];
	iVar5 = &Global_1184672->f_23[iParam0];
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = iVar0;
	while (iVar9 <= iVar2)
	{
		if ((Global_1184672->f_231[iVar9 /*15*/])->f_1 <= 0)
		{
		}
		else
		{
			iVar6++;
			if (iParam0 != (Global_1184672->f_231[iVar9 /*15*/])->f_5.f_9)
			{
				iVar7++;
			}
			if (iVar9 >= iVar1)
			{
				iVar8++;
			}
		}
		iVar9++;
	}
	if (iVar3 != iVar6)
	{
		Global_1184672->f_8[iParam0] = iVar6;
	}
	if (iVar4 != iVar7)
	{
		Global_1184672->f_18[iParam0] = iVar7;
	}
	if (iVar5 != iVar8)
	{
		Global_1184672->f_23[iParam0] = iVar8;
	}
}

struct<40> func_118(var uParam0, int iParam1, int iParam2)
{
	struct<40> Var0;

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
	switch (*iParam1)
	{
		case 0:
			return func_182(&(Global_1100949->f_33.f_513));
		case 2:
			return func_182(&(Global_1212887->f_367));
		case 5:
			if (iParam2 == -1)
			{
				return Var0;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iParam2])))
			{
				return Var0;
			}
			return func_182((*Global_1187677)[iParam2 /*204*/]);
		default:
			break;
	}
	return Var0;
}

int func_119(var uParam0, var uParam1)
{
	int iVar0;

	if (func_53(uParam0))
	{
		return 0;
	}
	iVar0 = ((uParam0->f_1 + *uParam0) % 5);
	uParam1->f_1 = iVar0;
	*(uParam0->f_2[iVar0 /*40*/]) = { *uParam1 };
	aggregate.coffee_drinking.func_5(uParam0->f_2[iVar0 /*40*/], 0);
	*uParam0++;
	return 1;
}

struct<40> func_120(var uParam0, var uParam1)
{
	struct<40> Var0;

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
	if (uParam0->f_4 == -1)
	{
		return Var0;
	}
	if (aggregate.net_ambient_content_evaluator.func_115(uParam0, uParam1->f_3[uParam0->f_4 /*40*/]))
	{
		return *(uParam1->f_3[uParam0->f_4 /*40*/]);
	}
	return Var0;
}

struct<40> func_121(var uParam0, int iParam1)
{
	struct<40> Var0;
	struct<40> Var40;

	Var0 = -1;
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
	if (!func_183(iParam1))
	{
		return Var0;
	}
	Var40 = { *(uParam0->f_2[iParam1 /*40*/]) };
	*(uParam0->f_2[iParam1 /*40*/]) = { Var0 };
	return Var40;
}

void func_122(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % 5);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % 5);
			if (&uParam0->f_2[iVar3 /*40*/] != -1)
			{
			}
			else
			{
				if ((uParam0->f_2[iVar3 /*40*/])->f_1 != -1)
				{
					func_121(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % 5);
			if (&uParam0->f_2[iVar4 /*40*/] != -1)
			{
			}
			else
			{
				func_121(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

int func_124(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!aggregate.net_ambient_content_evaluator.func_184(&(uParam0->f_8)))
	{
		return 2;
	}
	iVar0 = aggregate.la_alligator.func_69(&(uParam0->f_8.f_5));
	switch (uParam0->f_5)
	{
		case 0:
			if (aggregate.la_alligator.func_19(iVar0))
			{
				return 0;
			}
			if (uParam0->f_8.f_5.f_8 != 0)
			{
				if (aggregate.dynamic_craft_scenario.func_186(uParam0->f_8.f_5.f_8))
				{
					return 1;
				}
			}
			if (func_186(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
			{
				return 0;
			}
			if (uParam0->f_8.f_1 > 1)
			{
				if (func_187(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
				{
					return 0;
				}
			}
			if (uParam0->f_8.f_1 > 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (func_188(iVar1))
					{
					}
					else if (iVar1 == uParam0->f_8)
					{
					}
					else if (func_186(&(uParam0->f_8), &(uParam0->f_23), iVar1))
					{
						return 0;
					}
					iVar1++;
				}
				if (func_189(&(uParam0->f_8), &(uParam0->f_23), uParam0->f_8))
				{
					return 0;
				}
			}
			return 1;
		case 1:
			if (!aggregate.la_alligator.func_19(iVar0))
			{
				return 1;
			}
			aggregate.net_ambient_content_evaluator.func_103(iVar0, uParam0->f_8.f_1);
			func_190(iVar0, &(uParam0->f_8.f_5), &(uParam0->f_23));
			return 0;
		case 2:
			if (!aggregate.la_alligator.func_19(iVar0))
			{
				return 1;
			}
			aggregate.net_ambient_content_evaluator.func_103(iVar0, uParam0->f_8.f_1);
			return 0;
		case 4:
			if (!aggregate.la_alligator.func_19(iVar0))
			{
				return 1;
			}
			func_191(iVar0, uParam0->f_8.f_5.f_6);
			func_190(iVar0, &(uParam0->f_8.f_5), &(uParam0->f_23));
			return 0;
		case 5:
			if (!aggregate.la_alligator.func_19(iVar0))
			{
				return 1;
			}
			aggregate.net_ambient_content_evaluator.func_192(iVar0, uParam0->f_23.f_6);
			return 0;
		case 6:
			if (!aggregate.la_alligator.func_19(iVar0))
			{
				return 1;
			}
			if (!aggregate.aberdeenpigfarm.func_158(uParam0->f_8.f_5))
			{
				return 1;
			}
			if (func_193(&(uParam0->f_8.f_5)))
			{
				func_190(iVar0, &(uParam0->f_8.f_5), &(uParam0->f_23));
				return 0;
			}
			return 1;
		case 3:
			if (!aggregate.la_alligator.func_19(iVar0))
			{
				return 1;
			}
			func_194(iVar0, uParam0->f_8);
			return 0;
		case 7:
			if (!aggregate.la_alligator.func_19(iVar0))
			{
				return 0;
			}
			aggregate.net_ambient_content_evaluator.func_95(iVar0);
			return 0;
		default:
			break;
	}
	return 2;
}

struct<40> func_182(var uParam0)
{
	struct<40> Var0;
	int iVar40;
	int iVar41;

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
	iVar40 = 0;
	while (iVar40 < *uParam0)
	{
		iVar41 = ((uParam0->f_1 + iVar40) % uParam0->f_2);
		if (!func_243(*(uParam0->f_3[iVar41 /*40*/])))
		{
			return *(uParam0->f_3[iVar41 /*40*/]);
		}
		iVar40++;
	}
	return Var0;
}

bool func_183(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 5);
}

bool func_186(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((Global_1184672->f_23[iParam2] - Global_1184672->f_8[iParam2]) // PointerArith >= &Global_1184672->f_3[iParam2])
	{
		return false;
	}
	if (&Global_1184672->f_13[iParam2] >= &Global_1184672->f_3[iParam2])
	{
		return false;
	}
	iVar0 = aggregate.la_alligator.func_198(iParam2);
	iVar1 = ((&Global_1184672->f_3[iParam2] + iVar0) - 1);
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if ((Global_1184672->f_231[iVar2 /*15*/])->f_1 == -1)
		{
			func_246(*uParam0, *uParam1, iParam2, iVar2);
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_187(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = aggregate.la_alligator.func_198(iParam2);
	iVar1 = ((&Global_1184672->f_3[iParam2] + iVar0) - 1);
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if ((Global_1184672->f_231[iVar2 /*15*/])->f_1 == -1 || (Global_1184672->f_231[iVar2 /*15*/])->f_1 == 1)
		{
			func_246(*uParam0, *uParam1, iParam2, iVar2);
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_188(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
		case 1:
			return false;
		case 2:
			return false;
		default:
			break;
	}
	return true;
}

bool func_189(var uParam0, var uParam1, int iParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = (&Global_1184672->f_3[iParam2] + aggregate.la_alligator.func_198(iParam2));
	iVar1 = ((aggregate.la_alligator.func_198(iParam2) + aggregate.la_alligator.func_199(iParam2)) - 1);
	iVar2 = uVar0;
	while (iVar2 <= iVar1)
	{
		if ((Global_1184672->f_231[iVar2 /*15*/])->f_1 == -1)
		{
			func_246(*uParam0, *uParam1, iParam2, iVar2);
			return true;
		}
		iVar2++;
	}
	return false;
}

void func_190(int iParam0, var uParam1, var uParam2)
{
	struct<6> Var0;

	if (aggregate.net_ambient_content_evaluator.func_43(iParam0, 1))
	{
		func_247(iParam0);
	}
	if (!aggregate.aberdeenpigfarm.func_158((Global_1184672->f_231[iParam0 /*15*/])->f_5))
	{
		(Global_1184672->f_231[iParam0 /*15*/])->f_5 = { *uParam1 };
	}
	*(Global_1184672->f_231.f_1066[iParam0 /*17*/]) = { *uParam2 };
	Var0 = 1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_5 = 255;
	*(Global_1184672->f_2505[iParam0 /*6*/]) = { Var0 };
	if (aggregate.net_ambient_content_evaluator.func_43(iParam0, 1))
	{
		func_248(iParam0);
	}
}

void func_191(int iParam0, struct<2> Param1)
{
	(Global_1184672->f_231[iParam0 /*15*/])->f_5.f_6 = { Param1 };
}

bool func_193(var uParam0)
{
	struct<10> Var0;
	struct<10> Var10;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = -1;
	Var10.f_1 = -1;
	Var10.f_3 = -1;
	Var10.f_4 = -1;
	Var10.f_5 = -1;
	Var10.f_6 = -1;
	Var10.f_6.f_1 = -1;
	Var10.f_9 = 2;
	Var0 = { Var10 };
	Var0 = { *uParam0 };
	iVar20 = aggregate.la_alligator.func_69(&Var0);
	Var0 = { Var10 };
	Var0.f_2 = uParam0->f_2;
	Var0.f_3 = uParam0->f_3;
	iVar21 = aggregate.la_alligator.func_69(&Var0);
	Var0 = { Var10 };
	Var0.f_2 = uParam0->f_2;
	Var0.f_4 = uParam0->f_4;
	iVar22 = aggregate.la_alligator.func_69(&Var0);
	Var0 = { Var10 };
	Var0.f_2 = uParam0->f_2;
	Var0.f_5 = uParam0->f_5;
	iVar23 = aggregate.la_alligator.func_69(&Var0);
	if ((!aggregate.la_alligator.func_19(iVar21) && !aggregate.la_alligator.func_19(iVar22)) && !aggregate.la_alligator.func_19(iVar23))
	{
		return false;
	}
	iVar24 = -1;
	if (aggregate.la_alligator.func_19(iVar21))
	{
		iVar24 = iVar21;
	}
	else if (aggregate.la_alligator.func_19(iVar23))
	{
		iVar24 = iVar23;
	}
	else
	{
		iVar24 = iVar22;
	}
	if (!aggregate.la_alligator.func_19(iVar20))
	{
		if (!aggregate.la_alligator.func_19(iVar24))
		{
			return false;
		}
	}
	else
	{
		if (aggregate.la_alligator.func_19(iVar24))
		{
			aggregate.net_ambient_content_evaluator.func_95(iVar24);
		}
		iVar24 = iVar20;
	}
	(Global_1184672->f_231[iVar24 /*15*/])->f_5 = { *uParam0 };
	(Global_1184672->f_231[iVar24 /*15*/])->f_5.f_2 = 0;
	(Global_1184672->f_231[iVar24 /*15*/])->f_5.f_3 = -1;
	(Global_1184672->f_231[iVar24 /*15*/])->f_5.f_4 = -1;
	(Global_1184672->f_231[iVar24 /*15*/])->f_5.f_5 = -1;
	return true;
}

void func_194(int iParam0, int iParam1)
{
	if ((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_9 == iParam1)
	{
		return;
	}
	if ((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_9 == &Global_1184672->f_231[iParam0 /*15*/] && &Global_1184672->f_231[iParam0 /*15*/] != iParam1)
	{
		Global_1184672->f_18[&Global_1184672->f_231[iParam0 /*15*/]] = &Global_1184672->f_18[&Global_1184672->f_231[iParam0 /*15*/]] + 1;
	}
	if ((Global_1184672->f_231[iParam0 /*15*/])->f_5.f_9 != &Global_1184672->f_231[iParam0 /*15*/] && &Global_1184672->f_231[iParam0 /*15*/] == iParam1)
	{
		Global_1184672->f_18[&Global_1184672->f_231[iParam0 /*15*/]] = (&Global_1184672->f_18[&Global_1184672->f_231[iParam0 /*15*/]] - 1);
	}
	Global_1184672->f_13[(Global_1184672->f_231[iParam0 /*15*/])->f_5.f_9] = (&Global_1184672->f_13[(Global_1184672->f_231[iParam0 /*15*/])->f_5.f_9] - 1);
	Global_1184672->f_13[iParam1] = &Global_1184672->f_13[iParam1] + 1;
	(Global_1184672->f_231[iParam0 /*15*/])->f_5.f_9 = iParam1;
}

bool func_243(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39)
{
	int iVar0;
	int iVar1;

	if (Param0.f_1 != -1)
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1184672->f_28)
	{
		iVar1 = ((Global_1184672->f_28.f_1 + iVar0) % 5);
		if ((Global_1184672->f_28.f_2[iVar1 /*40*/])->f_2 != Param0.f_2)
		{
		}
		else if ((Global_1184672->f_28.f_2[iVar1 /*40*/])->f_4 != Param0.f_4)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_246(struct<15> Param0, struct<17> Param15, int iParam32, int iParam33)
{
	*(Global_1184672->f_231[iParam33 /*15*/]) = { Param0 };
	Global_1184672->f_231[iParam33 /*15*/] = iParam32;
	*(Global_1184672->f_231.f_1066[iParam33 /*17*/]) = { Param15 };
	if (iParam32 != Param0.f_5.f_9)
	{
		Global_1184672->f_18[iParam32] = &Global_1184672->f_18[iParam32] + 1;
	}
	if (aggregate.net_ambient_content_evaluator.func_169(iParam33))
	{
		Global_1184672->f_23[iParam32] = &Global_1184672->f_23[iParam32] + 1;
	}
	Global_1184672->f_8[iParam32] = &Global_1184672->f_8[iParam32] + 1;
	Global_1184672->f_13[Param0.f_5.f_9] = &Global_1184672->f_13[Param0.f_5.f_9] + 1;
	if (aggregate.net_ambient_content_evaluator.func_43(iParam33, 1))
	{
		func_248(iParam33);
	}
}

void func_247(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!aggregate.la_alligator.func_19(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1184672->f_2505.f_499)
	{
		if (&Global_1184672->f_2505.f_427[iVar0] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return;
	}
	if (Global_1184672->f_2505.f_499 == 1)
	{
		Global_1184672->f_2505.f_499 = 0;
		return;
	}
	iVar0 = iVar1;
	while (iVar0 <= (Global_1184672->f_2505.f_499 - 2))
	{
		Global_1184672->f_2505.f_427[iVar0] = &Global_1184672->f_2505.f_427[iVar0 + 1];
		iVar0++;
	}
	Global_1184672->f_2505.f_499 = (Global_1184672->f_2505.f_499 - 1);
}

int func_248(int iParam0)
{
	int iVar0;

	if (Global_1184672->f_2505.f_499 >= 71)
	{
		return 0;
	}
	if (!aggregate.la_alligator.func_19(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1184672->f_2505.f_499)
	{
		if (&Global_1184672->f_2505.f_427[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	Global_1184672->f_2505.f_427[Global_1184672->f_2505.f_499] = iParam0;
	Global_1184672->f_2505.f_499++;
	return 1;
}

int func_255(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2142074819:
			return 522;
		case -2141419899:
			return 405;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case -2100409704:
			return 471;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case -2066272360:
			return 395;
		case -2058120606:
			return 194;
		case -2056579774:
			return 465;
		case -2043909922:
			return 339;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case -1943367752:
			return 388;
		case -1943021821:
			return 336;
		case -1939389836:
			return 417;
		case -1932919229:
			return 429;
		case -1925798111:
			return 41;
		case -1914141706:
			return 440;
		case -1906892166:
			return 404;
		case -1882707460:
			return 464;
		case -1861414976:
			return 381;
		case -1852605133:
			return 10;
		case -1848799275:
			return 410;
		case -1847672446:
			return 312;
		case -1842033327:
			return 505;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case -1827602683:
			return 447;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 412;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 399;
		case -1749433374:
			return 480;
		case -1749043433:
			return 525;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case -1719055206:
			return 520;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case -1705799799:
			return 422;
		case -1700452710:
			return 317;
		case -1684974589:
			return 467;
		case -1674179981:
			return 53;
		case -1673998598:
			return 528;
		case -1666278201:
			return 33;
		case -1664435783:
			return 487;
		case -1624627591:
			return 439;
		case -1612662716:
			return 198;
		case -1610966108:
			return 355;
		case -1608141409:
			return 539;
		case -1585840296:
			return 337;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case -1578292898:
			return 435;
		case -1573753524:
			return 504;
		case -1558439474:
			return 286;
		case -1556041029:
			return 411;
		case -1547280108:
			return 519;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case -1502194556:
			return 524;
		case -1462313959:
			return 463;
		case -1455998786:
			return 371;
		case -1447311849:
			return 321;
		case -1445041595:
			return 529;
		case -1442844448:
			return 466;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1422877860:
			return 473;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case -1395855864:
			return 479;
		case -1387772214:
			return 408;
		case -1378911044:
			return 476;
		case -1369678628:
			return 488;
		case -1344601768:
			return 348;
		case -1341750998:
			return 477;
		case -1340339190:
			return 363;
		case -1339871203:
			return 533;
		case -1329135070:
			return 138;
		case -1319875891:
			return 438;
		case -1311865656:
			return 37;
		case -1296807958:
			return 353;
		case -1290997627:
			return 462;
		case -1287894233:
			return 427;
		case -1283202000:
			return 354;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case -1262828457:
			return 424;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 366;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 401;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case -1161687045:
			return 392;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case -1145153057:
			return 340;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case -1120447016:
			return 444;
		case -1095341658:
			return 409;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case -1042021329:
			return 383;
		case -1029225159:
			return 104;
		case -1023919011:
			return 432;
		case -1014145132:
			return 273;
		case -1004266677:
			return 461;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 400;
		case -941648233:
			return 512;
		case -939420910:
			return 44;
		case -931337253:
			return 425;
		case -925071604:
			return 542;
		case -919512195:
			return 40;
		case -911126844:
			return 369;
		case -897750037:
			return 367;
		case -895307590:
			return 501;
		case -895073533:
			return 394;
		case -889906510:
			return 390;
		case -888632790:
			return 506;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case -852602679:
			return 433;
		case -851626677:
			return 372;
		case -839820438:
			return 420;
		case -828139293:
			return 246;
		case -812641169:
			return 535;
		case -811637947:
			return 232;
		case -800891377:
			return 494;
		case -797689456:
			return 515;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case -781631220:
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case -734416508:
			return 373;
		case -729679654:
			return 531;
		case -699277634:
			return 4;
		case -693828600:
			return 356;
		case -683458244:
			return 78;
		case -677920206:
			return 459;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case -635323621:
			return 513;
		case -632127260:
			return 343;
		case -630295963:
			return 495;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case -604603161:
			return 472;
		case -591815673:
			return 384;
		case -583127403:
			return 507;
		case -574190021:
			return 493;
		case -554519756:
			return 536;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case -524787708:
			return 380;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case -510945576:
			return 338;
		case -503955743:
			return 235;
		case -502473159:
			return 326;
		case -502324015:
			return 8;
		case -500245243:
			return 516;
		case -492731190:
			return 419;
		case -491981251:
			return 184;
		case -489737721:
			return 402;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 350;
		case -448554447:
			return 532;
		case -441204543:
			return 534;
		case -434590080:
			return 212;
		case -414883443:
			return 460;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 374;
		case -389056691:
			return 257;
		case -381925743:
			return 508;
		case -371827125:
			return 389;
		case -364475655:
			return 430;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case -355531636:
			return 370;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case -329176208:
			return 492;
		case -311373772:
			return 540;
		case -306246697:
			return 311;
			return 319;
			return 434;
			return 346;
			return 253;
			return 30;
			return 231;
			return 130;
			return 418;
			return 119;
			return 258;
			return 523;
			return 201;
			return 137;
			return 517;
			return 345;
			return 483;
			return 147;
			return 175;
			return 294;
			return 95;
			return 11;
			return 431;
			return 351;
			return 28;
			return 403;
			return 499;
			return 165;
			return 491;
			return 423;
			return 143;
			return 152;
			return 309;
			return 509;
			return 244;
			return 441;
			return 453;
			return 87;
			return 358;
			return 468;
			return 24;
			return 275;
			return 127;
			return 0;
			return 1;
			return 151;
			return 282;
			return 406;
			return 323;
			return 224;
			return 72;
			return 230;
			return 74;
			return 541;
			return 391;
			return 331;
			return 454;
			return 396;
			return 276;
			return 99;
			return 112;
			return 530;
			return 84;
			return 181;
			return 268;
			return 16;
			return 14;
			return 228;
			return 60;
			return 490;
			return 140;
			return 180;
			return 327;
			return 271;
			return 518;
			return 162;
			return 52;
			return 79;
			return 93;
			return 117;
			return 260;
			return 136;
			return 322;
			return 195;
			return 131;
			return 510;
			return 64;
			return 272;
			return 47;
			return 266;
			return 186;
			return 88;
			return 485;
			return 34;
			return 171;
			return 278;
			return 17;
			return 288;
			return 42;
			return 545;
			return 15;
			return 196;
			return 106;
			return 31;
			return 287;
			return 214;
			return 316;
			return 342;
			return 218;
			return 2;
			return 219;
			return 146;
			return 290;
			return 378;
			return 233;
			return 264;
			return 393;
			return 157;
			return 113;
			return 238;
			return 456;
			return 448;
			return 359;
			return 177;
			return 341;
			return 75;
			return 376;
			return 126;
			return 470;
			return 482;
			return 279;
			return 297;
			return 281;
			return 500;
			return 132;
			return 204;
			return 176;
			return 484;
			return 250;
			return 475;
			return 382;
			return 48;
			return 107;
			return 362;
			return 18;
			return 455;
			return 469;
			return 503;
			return 227;
			return 474;
			return 407;
			return 451;
			return 537;
			return 270;
			return 385;
			return 315;
			return 379;
			return 375;
			return 511;
			return 368;
			return 211;
			return 283;
			return 416;
			return 234;
			return 344;
			return 19;
			return 295;
			return 443;
			return 7;
			return 120;
			return 446;
			return 502;
			return 269;
			return 108;
			return 142;
			return 538;
			return 486;
			return 27;
			return 242;
			return 452;
			return 514;
			return 361;
			return 133;
			return 156;
			return 330;
			return 292;
			return 38;
			return 217;
			return 182;
			return 543;
			return 259;
			return 83;
			return 167;
			return 158;
			return 310;
			return 481;
			return 347;
			return 415;
			return 245;
			return 449;
			return 442;
			return 387;
			return 349;
			return 199;
			return 357;
			return 421;
			return 526;
			return 20;
			return 73;
			return 256;
			return 249;
			return 80;
			return 497;
			return 210;
			return 207;
			return 209;
			return 414;
			return 164;
			return 208;
			return 123;
			return 118;
			return 303;
			return 450;
			return 50;
			return 100;
			return 280;
			return 318;
			return 426;
			return 5;
			return 70;
			return 35;
			return 166;
			return 203;
			return 436;
			return 458;
			return 265;
			return 325;
			return 161;
			return 386;
			return 332;
			return 289;
			return 301;
			return 521;
			return 9;
			return 105;
			return 116;
			return 125;
			return 179;
			return 148;
			return 91;
			return 527;
			return 66;
			return 352;
			return 365;
			return 43;
			return 329;
			return 135;
			return 213;
			return 377;
			return 92;
			return 544;
			return 299;
			return 445;
			return 398;
			return 197;
			return 97;
			return 193;
			return 413;
			return 68;
			return 364;
			return 51;
			return 437;
			return 335;
			return 94;
			return 360;
			return 159;
			return 216;
			return 200;
			return 307;
			return 89;
			return 178;
			return 489;
			return 6;
			return 187;
			return 190;
			return 305;
			return 293;
			return 61;
			return 498;
			return 284;
			return 428;
			return 478;
			return 291;
			return 457;
			return 267;
			return 39;
			return 397;
			return 189;
			return 324;
			return 496;
			return 241;
			return 85;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}

