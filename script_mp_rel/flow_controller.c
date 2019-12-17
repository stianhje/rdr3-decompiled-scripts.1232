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
	int iLocal_21 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
		{
		}
		aggregate.aberdeenpigfarm.func_46();
		return;
	}
	func_2();
	Global_1878407->f_1804 = 0;
	Global_1878407 = 0;
	Global_1878407->f_1804 = 0;
	bVar0 = false;
	while (!bVar0)
	{
		if (aggregate.aberdeenpigfarm.func_49(0, 0))
		{
			bVar0 = true;
		}
		else
		{
			if (!Global_1878407->f_7161)
			{
				BUILTIN::WAIT(0);
			}
			else if (aggregate.binoculars.func_66(68))
			{
				BUILTIN::WAIT(0);
			}
			else
			{
				func_5();
				func_6();
				BUILTIN::WAIT(0);
			}
		}
	}
	aggregate.aberdeenpigfarm.func_46();
}

void func_2()
{
	aggregate.flow_controller.func_7(32, -1);
	aggregate.flow_controller.func_8();
	if (aggregate.flow_controller.func_9())
	{
		aggregate.aberdeenpigfarm.func_46();
	}
	func_11(Global_1197832);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1197832, 80, 44);
	aggregate.flow_controller.func_12(NETWORK::_0xBA24095EA96DFE17(Global_1197832), 80, "g_mpFlowData");
	aggregate.flow_controller.func_13(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	aggregate.aberdeenpigfarm.func_106(Global_1197508, 1);
}

void func_5()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = &Global_1197832 + 1;
	if (iVar0 > 25)
	{
		iVar0 = 0;
	}
	Global_1197832 = iVar0;
	func_15();
}

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = -1;
	iVar1 = 0;
	iVar2 = 3;
	func_16(&iVar2);
	Global_1900718->f_68 = aggregate.aberdeenpigfarm.func_125(0, 1, 0);
	while (iVar1 < iVar2 && !bVar3)
	{
		if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iLocal_21 /*4*/]), 2))
		{
			if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iLocal_21 /*4*/]), 1))
			{
				iVar0 = iLocal_21;
				func_18(iVar0, 0);
				if (&Global_1878407->f_9[iVar0])
				{
					func_18(iVar0, 1);
					if (&Global_1878407->f_9[iVar0])
					{
						Global_1878407->f_9[iVar0] = 0;
					}
				}
			}
			iVar1++;
		}
		iLocal_21++;
		if (iLocal_21 >= Global_1878407->f_7160)
		{
			if (!Global_1878407->f_1804)
			{
				Global_1878407 = 0;
			}
			Global_1878407->f_1804 = 0;
			iLocal_21 = 0;
		}
		if (MISC::_0xC43CD2668B204419() - MISC::_0x72904D3D62AF5839()) <= BUILTIN::FLOOR((BUILTIN::TO_FLOAT(MISC::_0xC43CD2668B204419()) * 0.2f))
		{
			bVar3 = true;
		}
	}
}

void func_11(var uParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	*uParam0 = 0;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 26)
	{
		*(uParam0->f_1[iVar3 /*3*/]) = { vVar0 };
		iVar3++;
	}
}

void func_15()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (&Global_1197832 < 13 || &Global_1197832 > 25)
	{
		return;
	}
	if (func_21(&Global_1197832))
	{
		func_22(&Global_1197832);
	}
	else
	{
		func_23(&Global_1197832);
	}
}

void func_16(int iParam0)
{
	int iVar0;

	if (_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1273882->f_15) || _NAMESPACE26::_0x0F99F6436528A089(Global_1273882->f_15))
	{
		if (((Global_1273882->f_16 != &Global_1273882 && Global_1273882->f_16 >= 0) && Global_1273882->f_16 < 32) && NETWORK::_0x255A5EF65EDA9167(&(Global_1273882->f_154[Global_1273882->f_16])))
		{
			func_24();
			Global_1878407->f_5++;
			*iParam0 = 0;
		}
		else if (Global_1878407->f_5 > 0)
		{
			if (func_25() > 0)
			{
				iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_25()));
				if (iVar0 < 120)
				{
					Global_1878407->f_5++;
					*iParam0 = 0;
					return;
				}
				aggregate.flow_controller.func_26(0);
			}
			func_27();
			Global_1878407->f_5 = 0;
		}
	}
	else if (Global_1878407->f_5 > 0)
	{
		Global_1878407->f_5 = 0;
	}
}

void func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1;
	iVar1 = iVar0;
	iVar2 = &Global_1878407->f_7116[iParam0 /*2*/];
	iVar3 = (Global_1878407->f_7116[iParam0 /*2*/])->f_1;
	if (iVar0 < iVar2)
	{
		return;
	}
	if (iVar0 > iVar3)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iParam0 /*4*/]), 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iParam0 /*4*/]), 2))
	{
		return;
	}
	func_32(iParam0, iVar0);
	iVar0 = (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1;
	if (&Global_1878407->f_1805[iVar0 /*3*/] == 531432813)
	{
		func_32(iParam0, iVar0);
	}
	if (bParam1)
	{
		while (iVar1 != (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1)
		{
			iVar1 = (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1;
			func_32(iParam0, (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1);
		}
	}
}

bool func_21(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!aggregate.flow_controller.func_33(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((!NETWORK::_0x255A5EF65EDA9167(iVar1) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1)) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (MISC::_0x8F4F050054005C27(&(((*Global_1055965)[iVar0 /*436*/])->f_15.f_18), iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_22(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	var uVar4;
	int iVar13;
	int iVar14;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_34(iParam0))
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_35(iParam0))
	{
		return 1;
	}
	vVar0 = { func_36(iParam0) };
	fVar3 = func_37(iParam0);
	switch (func_38(iParam0))
	{
		case 0:
			if (VOLUME::_0x397769175A7DBB30(vVar0, fVar3, 0, 0, 0))
			{
				if (func_39(&uVar4, iParam0))
				{
					iVar13 = VOLUME::_0x77A6E4AD0C496F81(&uVar4);
					if (VOLUME::_0xF6A8A652A6B186CD(iVar13))
					{
						return 1;
					}
				}
			}
			else if (!func_40())
			{
			}
			else
			{
				func_41(iParam0, 1);
				Jump @377; //curOff = 168
				if (!func_39(&uVar4, iParam0))
				{
					func_41(iParam0, 0);
				}
				else
				{
					func_42(iParam0, VOLUME::_0x183C0B6CFEFFCAE4(&uVar4));
					func_41(iParam0, 2);
					Jump @377; //curOff = 212
					if (!VOLUME::_0xA4A4359320345B34(func_43(iParam0)))
					{
						func_41(iParam0, 0);
					}
					else
					{
						iVar14 = VOLUME::_0xB33A604345F58202(func_43(iParam0));
						switch (iVar14)
						{
							case 4:
								func_41(iParam0, 0);
								break;
							case 1:
							case 2:
								break;
							case 3:
								func_44(iParam0, VOLUME::_0x351D71B8B72B858B(func_43(iParam0)));
								if (!VOLUME::_0xF6A8A652A6B186CD(aggregate.flow_controller.func_45(iParam0)))
								{
									func_41(iParam0, 0);
									return 0;
								}
								func_41(iParam0, 3);
								break;
						}
						Jump @377; //curOff = 347
						if (VOLUME::_0xF6A8A652A6B186CD(aggregate.flow_controller.func_45(iParam0)))
						{
							return 1;
						}
						func_41(iParam0, 0);
					}
				}
			}
			return 0;
			default:
				break;
	}
}

int func_23(int iParam0)
{
	var uVar0;
	int iVar9;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!aggregate.flow_controller.func_34(iParam0))
	{
		return 0;
	}
	switch (func_38(iParam0))
	{
		case 0:
			if (func_39(&uVar0, iParam0))
			{
				iVar9 = VOLUME::_0x77A6E4AD0C496F81(&uVar0);
				if (VOLUME::_0xF6A8A652A6B186CD(iVar9))
				{
					func_44(iParam0, iVar9);
					func_41(iParam0, 3);
				}
			}
			break;
		case 1:
		case 2:
			func_41(iParam0, 0);
			break;
		case 3:
			if (VOLUME::_0xF6A8A652A6B186CD(aggregate.flow_controller.func_45(iParam0)))
			{
				VOLUME::_0xFDFECC6EE4491E11(aggregate.flow_controller.func_45(iParam0));
			}
			func_41(iParam0, 0);
			break;
	}
	return 1;
}

void func_24()
{
	int iVar0;
	int iVar1;

	if (Global_1878407->f_5 == 0)
	{
		iVar0 = 13;
		while (iVar0 <= 25)
		{
			aggregate.flow_controller.func_46(iVar0, 1);
			aggregate.flow_controller.func_47(iVar0, -1, 0, 1, 1, 0, 0);
			aggregate.flow_controller.func_48(iVar0);
			aggregate.flow_controller.func_49(iVar0);
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!aggregate.flow_controller.func_50(iVar1))
			{
			}
			else if (aggregate.flow_controller.func_51(iVar1))
			{
				aggregate.flow_controller.func_52(iVar1, 1, 1, 1);
			}
			else if (aggregate.flow_controller.func_53(iVar1) && Global_1273882->f_16 != &Global_1273882)
			{
				aggregate.flow_controller.func_52(iVar1, 1, 1, 1);
			}
			iVar1++;
		}
	}
}

int func_25()
{
	return Global_1878407->f_6;
}

void func_27()
{
	int iVar0;
	int iVar1;

	iVar0 = 6;
	while (iVar0 <= 10)
	{
		MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
		MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
		(Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1 = &Global_1878407->f_7116[iVar0 /*2*/];
		iVar0++;
	}
	iVar1 = 1;
	while (iVar1 <= 6)
	{
		if (!&Global_1878407->f_7161.f_62[iVar1])
		{
		}
		else
		{
			Global_1878407->f_7161.f_62[iVar1] = 0;
		}
		iVar1++;
	}
	func_54();
	MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[5 /*4*/], 2);
	MISC::SET_BIT(Global_1878407->f_7161.f_1[5 /*4*/], 1);
	MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[6 /*4*/], 2);
	MISC::SET_BIT(Global_1878407->f_7161.f_1[6 /*4*/], 1);
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = &Global_1878407->f_1805[iParam1 /*3*/];
	iVar2 = (Global_1878407->f_1805[iParam1 /*3*/])->f_2;
	switch (iVar1)
	{
		case 485486536:
			iVar0 = -2;
			break;
		case 1677774865:
			iVar0 = func_57(iVar2);
			break;
		case -1750917831:
			iVar0 = -2;
			break;
		case 2058194871:
			iVar0 = func_58(iVar2);
			break;
		case 1909997983:
			MISC::SET_BIT(Global_1878407->f_7161.f_1[iParam0 /*4*/], 2);
			iVar0 = -1;
			break;
		case -1878191811:
			iVar0 = func_59(iVar2);
			break;
		case -217347738:
			iVar0 = func_60(iVar2);
			break;
		case 531432813:
			iVar0 = -2;
			break;
		case 1144707570:
			iVar0 = func_61(iVar2);
			break;
		case 1984622930:
			iVar0 = func_62(iVar2);
			break;
		case -661286798:
			iVar0 = func_63(iVar2);
			break;
		case -1532130030:
			iVar0 = func_64(iVar2);
			break;
		case 1174602905:
			iVar0 = func_65(iVar2);
			break;
		case 1111033820:
			iVar0 = func_66(iVar2);
			break;
		case 1986927063:
			iVar0 = func_67(iVar2);
			break;
		case -1982716178:
			iVar0 = func_68(iVar2);
			break;
		case -964850613:
			iVar0 = func_69(iVar2);
			break;
		case -1913176419:
			iVar0 = func_70(iVar2);
			break;
		case 1210875743:
			iVar0 = func_71(iParam0, iVar2);
			break;
		case 427205337:
			iVar0 = func_72(iParam0, iVar2);
			break;
		case 712880499:
			iVar0 = func_73(iParam0, iVar2);
			break;
		case -1664179412:
			iVar0 = func_74(iParam0, iVar2);
			break;
		case 770100737:
			iVar0 = func_75(iVar2);
			break;
		case -2093459088:
			iVar0 = func_76(iParam0, iVar2);
			break;
		case -868169264:
			iVar0 = func_77(iParam0, iVar2);
			break;
		case 1281917784:
			iVar0 = func_78(iParam0, iVar2);
			break;
		case 1098008903:
			iVar0 = func_79(iVar2);
			break;
		case 2088295092:
			iVar0 = func_80(iVar2);
			break;
		case -644074888:
			iVar0 = func_81();
			break;
		case 442701271:
			iVar0 = func_82();
			break;
		case -612537234:
			iVar0 = func_83(iVar2);
			break;
		case 1873982265:
			iVar0 = func_84(iVar2);
			break;
		case -157982035:
			iVar0 = func_85(iVar2);
			break;
		case -2024549018:
			iVar0 = func_86(iVar2);
			break;
		case 535702079:
			iVar0 = func_54();
			break;
		case -1228560642:
			iVar0 = func_87(iVar2);
			break;
		case -2037170240:
			iVar0 = func_88(iVar2);
			break;
		case -1592972575:
			iVar0 = func_89(iVar2);
			break;
		case -157595539:
			iVar0 = func_90();
			break;
		case -1391705448:
			iVar0 = func_91(iVar2);
			break;
		case -2132850383:
			iVar0 = func_92(iVar2);
			break;
		case 1232552289:
			iVar0 = func_93();
			break;
		case -673493118:
			iVar0 = func_94();
			break;
		default:
			iVar0 = -2;
			break;
	}
	if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iParam0 /*4*/]), 2))
	{
		if (iVar0 != -1)
		{
			Global_1878407 = 1;
			Global_1878407->f_1804 = 1;
		}
		func_95(iParam0, iVar0);
	}
	return iVar0;
}

Vector3 func_36(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return ((*Global_1835011)[iParam0 /*72*/])->f_19;
		default:
			break;
	}
	return aggregate.flow_controller.func_96();
}

float func_37(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 18f;
		case 14:
			return 40f;
		case 15:
			return 35f;
		case 16:
			return 55f;
		case 17:
			return 50f;
		case 21:
			return 55f;
		case 22:
			return 30f;
		case 18:
			return 50f;
		case 19:
			return 45f;
		case 23:
			return 55f;
		case 24:
			return 55f;
		case 20:
			return 60f;
		case 25:
			return 65f;
		default:
			break;
	}
	return 0f;
}

int func_38(int iParam0)
{
	if (!aggregate.flow_controller.func_34(iParam0))
	{
		return 4;
	}
	return (Global_1197832->f_1[iParam0 /*3*/])->f_2;
}

bool func_39(var uParam0, int iParam1)
{
	var uVar0;

	if (!aggregate.flow_controller.func_34(iParam1))
	{
		return false;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar0, 9);
	*uParam0 = { func_36(iParam1) };
	uParam0->f_4 = func_37(iParam1);
	uParam0->f_5 = func_97(iParam1);
	uParam0->f_6 = func_98();
	uParam0->f_7 = ((*Global_1835011)[iParam1 /*72*/])->f_51;
	return true;
}

bool func_40()
{
	if (aggregate.aberdeenpigfarm.func_156())
	{
		return false;
	}
	if (aggregate.flow_controller.func_99() != -1)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (aggregate.aberdeenpigfarm.func_158(aggregate.aberdeenpigfarm.func_159()))
	{
		return false;
	}
	return true;
}

void func_41(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!aggregate.flow_controller.func_34(iParam0))
	{
		return;
	}
	if ((Global_1197832->f_1[iParam0 /*3*/])->f_2 == iParam1)
	{
		return;
	}
	(Global_1197832->f_1[iParam0 /*3*/])->f_2 = iParam1;
}

void func_42(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!aggregate.flow_controller.func_34(iParam0))
	{
		return;
	}
	if ((Global_1197832->f_1[iParam0 /*3*/])->f_1 == iParam1)
	{
		return;
	}
	(Global_1197832->f_1[iParam0 /*3*/])->f_1 = iParam1;
}

int func_43(int iParam0)
{
	if (!aggregate.flow_controller.func_34(iParam0))
	{
		return -1;
	}
	return (Global_1197832->f_1[iParam0 /*3*/])->f_1;
}

void func_44(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!aggregate.flow_controller.func_34(iParam0))
	{
		return;
	}
	if (&Global_1197832->f_1[iParam0 /*3*/] == iParam1)
	{
		return;
	}
	Global_1197832->f_1[iParam0 /*3*/] = iParam1;
}

int func_54()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 13;
	while (iVar0 <= 25)
	{
		iVar2 = aggregate.flow_controller.func_104(4, iVar0);
		if (iVar2 == 0)
		{
		}
		else
		{
			aggregate.flow_controller.func_107(iVar0);
			if ((Global_1131373->f_5641[iVar0 /*3*/])->f_2)
			{
				aggregate.doc_book.func_133(iVar2, 0);
			}
		}
		iVar0++;
	}
	iVar1 = 1;
	while (iVar1 <= 6)
	{
		switch (func_113(iVar1, PLAYER::PLAYER_ID()))
		{
			case 3:
			case 4:
			case 5:
				Jump @199; //curOff = 116
				if (!aggregate.flow_controller.func_51(iVar1) && !aggregate.flow_controller.func_53(iVar1))
				{
				}
				else
				{
					iVar2 = aggregate.emeraldranch.func_132(3, iVar1);
					if (iVar2 == 0)
					{
					}
					else
					{
						iVar3 = aggregate.emeraldranch.func_131(iVar1);
						if (iVar3 == 0)
						{
						}
						else if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar3))
						{
							aggregate.doc_book.func_133(iVar2, 0);
						}
					}
				}
				iVar1++;
			}
			return -2;
		}

int func_57(int iParam0)
{
	int iVar0;

	if (iParam0 < -1 || iParam0 > Global_1878407->f_7160)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
	{
		return -2;
	}
	MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 2))
	{
		MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
	}
	return -2;
}

int func_58(int iParam0)
{
	int iVar0;

	if (iParam0 < -1 || iParam0 > Global_1878407->f_7160)
	{
		return -2;
	}
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 2))
	{
		return -2;
	}
	MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
	if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
	{
		MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
	}
	return -2;
}

int func_59(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 < -2 || iVar0 > 15)
	{
		return -2;
	}
	return iVar0;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	if (iVar0 <= -1 || iVar0 >= Global_1878407->f_7160)
	{
		return -2;
	}
	if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
	{
		return -2;
	}
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 2))
	{
		return -2;
	}
	iVar1 = (Global_1878407->f_1066[iParam0 /*2*/])->f_1;
	iVar2 = (Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1;
	iVar3 = &Global_1878407->f_7116[iVar0 /*2*/];
	iVar4 = (Global_1878407->f_7116[iVar0 /*2*/])->f_1;
	if (iVar2 < iVar3)
	{
		return -2;
	}
	if (iVar2 > iVar4)
	{
		return -2;
	}
	iVar5 = iVar3;
	iVar6 = -1;
	while (iVar5 <= iVar4)
	{
		if (&Global_1878407->f_1805[iVar5 /*3*/] == 531432813)
		{
			iVar6 = (Global_1878407->f_1805[iVar5 /*3*/])->f_2;
			iVar7 = &Global_1878407->f_105[iVar6 /*4*/];
			if (iVar7 == iVar1)
			{
				(Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1 = iVar5;
				return -2;
			}
		}
		iVar5++;
	}
	return -2;
}

int func_61(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = 0;
	if ((Global_1878407->f_105[iParam0 /*4*/])->f_1 == 1)
	{
		iVar1 = 1;
	}
	func_116(iVar0, iVar1);
	return -2;
}

int func_62(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	func_117(iVar0, iVar1);
	return -2;
}

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	bVar2 = false;
	if ((Global_1878407->f_105[iParam0 /*4*/])->f_2 == 1)
	{
		bVar2 = true;
	}
	func_118(iVar0, iVar1, bVar2);
	return -2;
}

int func_64(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (&Global_1878407->f_105[iParam0 /*4*/] % 1000000);
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	uVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	if (func_119(iVar0))
	{
		return uVar1;
	}
	return uVar2;
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	uVar3 = (Global_1878407->f_105[iParam0 /*4*/])->f_3;
	if (func_120(iVar0) == iVar1)
	{
		return uVar2;
	}
	return uVar3;
}

int func_66(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == 1)
	{
		return -2;
	}
	iVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return -2;
	}
	uVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	uVar3 = (Global_1878407->f_105[iParam0 /*4*/])->f_3;
	if (func_121(iVar0, iVar1))
	{
		return uVar2;
	}
	return uVar3;
}

int func_67(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 == -1 || iVar0 == Global_1878407->f_7160)
	{
		return -2;
	}
	uVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 2))
	{
		return uVar1;
	}
	return uVar2;
}

int func_68(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 7)
	{
		return -2;
	}
	if (!&Global_1878407->f_7161.f_62[iVar0])
	{
		return -1;
	}
	return -2;
}

int func_69(int iParam0)
{
	int iVar0;

	iVar0 = (iParam0 % 1000000);
	if (iVar0 == -1 || iVar0 == 7)
	{
		return -2;
	}
	Global_1878407->f_7161.f_62[iVar0] = 1;
	return -2;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return -2;
	}
	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	iVar1 = &Global_1878407->f_105[iParam0 /*4*/];
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		CLOCK::SET_CLOCK_TIME(aggregate.aberdeenpigfarm.func_100(iVar1), CLOCK::GET_CLOCK_MINUTES(), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), aggregate.aberdeenpigfarm.func_101(iVar1), CLOCK::GET_CLOCK_SECONDS());
	}
	if (MISC::IS_BIT_SET(iVar0, 2))
	{
		CLOCK::SET_CLOCK_TIME(CLOCK::GET_CLOCK_HOURS(), CLOCK::GET_CLOCK_MINUTES(), aggregate.coffee_drinking.func_76(iVar1));
	}
	if (MISC::IS_BIT_SET(iVar0, 3))
	{
		CLOCK::SET_CLOCK_DATE(aggregate.blackwater.func_225(iVar1), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 4))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), aggregate.blackwater.func_227(iVar1), CLOCK::GET_CLOCK_YEAR());
	}
	if (MISC::IS_BIT_SET(iVar0, 5))
	{
		CLOCK::SET_CLOCK_DATE(CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), aggregate.blackwater.func_229(iVar1));
	}
	return -2;
}

int func_71(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam1 == -1)
	{
		return -2;
	}
	if (!aggregate.dynamic_craft_scenario.func_389())
	{
		return -2;
	}
	iVar0 = (Global_1878407->f_105[iParam1 /*4*/])->f_2;
	iVar1 = (Global_1878407->f_105[iParam1 /*4*/])->f_1;
	iVar2 = &Global_1878407->f_105[iParam1 /*4*/];
	if (!&Global_1878407->f_25[iParam0])
	{
		if (aggregate.coffee_drinking.func_105((Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_3))
		{
			Global_1878407->f_57[iParam0] = (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_3;
		}
		else
		{
			Global_1878407->f_57[iParam0] = aggregate.aberdeenpigfarm.func_99();
			aggregate.coffee_drinking.func_44(Global_1878407->f_57[iParam0], iVar0, iVar1, iVar2, 0, 0, 0, 0);
			(Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_3 = &Global_1878407->f_57[iParam0];
		}
		Global_1878407->f_25[iParam0] = 1;
	}
	else
	{
		iVar3 = -1;
		if (aggregate.coffee_drinking.func_63(aggregate.aberdeenpigfarm.func_99(), &(Global_1878407->f_57[iParam0]), 1) || iVar3 == 0)
		{
			Global_1878407->f_25[iParam0] = 0;
			(Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_3 = -15;
			if (iVar3 == 0)
			{
				Global_1900853 = MISC::GET_GAME_TIMER();
			}
			return -2;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)
{
	if (!aggregate.dynamic_craft_scenario.func_389())
	{
		return -2;
	}
	if (!&Global_1878407->f_25[iParam0])
	{
		if (iParam1 < 0)
		{
			return -2;
		}
		Global_1878407->f_41[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
		Global_1878407->f_25[iParam0] = 1;
	}
	else if (MISC::GET_GAME_TIMER() > &Global_1878407->f_41[iParam0])
	{
		Global_1878407->f_25[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_73(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!aggregate.dynamic_craft_scenario.func_389())
	{
		return -2;
	}
	if (!&Global_1878407->f_25[iParam0])
	{
		if (iParam1 < 0 || iParam1 > 23)
		{
			return -2;
		}
		iVar0 = iParam1;
		iVar1 = aggregate.aberdeenpigfarm.func_99();
		if (aggregate.aberdeenpigfarm.func_100(iVar1) > iVar0)
		{
			aggregate.coffee_drinking.func_44(&iVar1, 0, 0, 0, 1, 0, 0, 0);
		}
		if (aggregate.aberdeenpigfarm.func_100(iVar1) != iVar0)
		{
			aggregate.blackwater.func_122(&iVar1, 0);
			aggregate.blackwater.func_121(&iVar1, 0);
			aggregate.blackwater.func_120(&iVar1, iVar0);
		}
		Global_1878407->f_57[iParam0] = iVar1;
		Global_1878407->f_25[iParam0] = 1;
	}
	else if (aggregate.coffee_drinking.func_70(&(Global_1878407->f_57[iParam0]), 1))
	{
		Global_1878407->f_25[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_74(int iParam0, int iParam1)
{
	int iVar0;

	if (!&Global_1878407->f_25[iParam0])
	{
		iVar0 = iParam1;
		Global_1878407->f_57[iParam0] = iVar0;
		Global_1878407->f_25[iParam0] = 1;
	}
	else if (aggregate.coffee_drinking.func_70(&(Global_1878407->f_57[iParam0]), 1))
	{
		Global_1878407->f_25[iParam0] = 0;
		return -2;
	}
	return -1;
}

int func_75(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (iParam0 == -1)
	{
		return -2;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	if (iVar0 < 0 || iVar0 >= 24)
	{
		return -2;
	}
	uVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	uVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	if (CLOCK::GET_CLOCK_HOURS() >= iVar0)
	{
		return uVar1;
	}
	return uVar2;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam1;
	iVar1 = func_137(iVar0);
	if (!aggregate.flow_controller.func_138(iVar0))
	{
		func_139(iVar1, ((*Global_1835011)[iVar0 /*72*/])->f_19);
		if (!Global_1939168 & 4096 != 0 && !aggregate.aberdeenpigfarm.func_125(0, 1, 1))
		{
			if (!func_140())
			{
				return -1;
			}
			if (func_141(iVar0, 0))
			{
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (aggregate.binoculars.func_66(32768))
	{
		return -1;
	}
	if (!aggregate.flow_controller.func_138(iVar0))
	{
		if (aggregate.aberdeenpigfarm.func_175(&Global_1939168, 2097152))
		{
			return -1;
		}
		if (!aggregate.aberdeenpigfarm.func_175(&Global_1939168, 4096) && !aggregate.aberdeenpigfarm.func_125(0, 1, 1))
		{
			if ((aggregate.aberdeenpigfarm.func_45() == -1 && aggregate.dynamic_craft_scenario.func_389()) && aggregate.aberdeenpigfarm.func_61(&Global_0, 3))
			{
				return -1;
			}
			if (func_141(iVar0, 0))
			{
			}
		}
	}
	else
	{
		return -2;
	}
	return -1;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	if (iParam1 == -1)
	{
		return -2;
	}
	iVar0 = (Global_1878407->f_105[iParam1 /*4*/])->f_3;
	if (aggregate.flow_controller.func_34(iVar0))
	{
		if (aggregate.flow_controller.func_138(iVar0))
		{
			return -2;
		}
	}
	Var1 = &Global_1878407->f_105[iParam1 /*4*/];
	Var1.f_1 = (Global_1878407->f_105[iParam1 /*4*/])->f_1;
	iVar3 = (Global_1878407->f_105[iParam1 /*4*/])->f_2;
	if (!&Global_1878407->f_73[iParam0])
	{
		Global_1878407->f_89[iParam0] = (aggregate.flow_controller.func_144(Var1) + iVar3);
		Global_1878407->f_73[iParam0] = 1;
	}
	else if (aggregate.flow_controller.func_144(Var1) >= &Global_1878407->f_89[iParam0])
	{
		return -2;
	}
	return -1;
}

int func_79(int iParam0)
{
	func_145(iParam0);
	return -2;
}

int func_80(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!aggregate.aberdeenpigfarm.func_165(iVar0))
	{
		return -1;
	}
	if (func_147(iVar0))
	{
		return -2;
	}
	if (aggregate.doc_book.func_171(iVar0, 0, PLAYER::PLAYER_ID(), 0, 0))
	{
		return -2;
	}
	return -1;
}

int func_81()
{
	if (func_149(255))
	{
		return -1;
	}
	return -2;
}

int func_82()
{
	NETWORK::_0x2C5BD9A43987AA27(1);
	return -2;
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;

	if (!func_140())
	{
		return -1;
	}
	iVar0 = &Global_1878407->f_105[iParam0 /*4*/];
	iVar1 = (Global_1878407->f_105[iParam0 /*4*/])->f_1;
	iVar2 = (Global_1878407->f_105[iParam0 /*4*/])->f_2;
	if (!aggregate.aberdeenpigfarm.func_125(0, 1, 1))
	{
		func_141(iVar0, 0);
		func_141(iVar1, 0);
		func_141(iVar2, 0);
	}
	bVar3 = aggregate.flow_controller.func_138(iVar0);
	bVar4 = aggregate.flow_controller.func_138(iVar1);
	bVar5 = aggregate.flow_controller.func_138(iVar2);
	if (!bVar3)
	{
		func_139(1, ((*Global_1835011)[iVar0 /*72*/])->f_19);
	}
	else if (!bVar4)
	{
		func_139(1, ((*Global_1835011)[iVar1 /*72*/])->f_19);
	}
	else if (!bVar5)
	{
		func_139(1, ((*Global_1835011)[iVar2 /*72*/])->f_19);
	}
	if ((bVar3 && bVar4) && bVar5)
	{
		return -2;
	}
	return -1;
}

int func_84(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	iVar1 = (Global_1878407->f_1066[iParam0 /*2*/])->f_1;
	if (!aggregate.aberdeenpigfarm.func_165(iVar0))
	{
		return -1;
	}
	if (!NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		UNLOCK::_UNLOCK_SET_NEW(iVar1, true);
	}
	return -2;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	if (iVar0 == 0)
	{
		return -2;
	}
	if (aggregate.emeraldranch.func_73(iVar0))
	{
		return -2;
	}
	iVar1 = func_151(iVar0);
	func_139(iVar1, func_152(iVar0));
	func_153(iVar0, 1);
	return -1;
}

int func_86(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (aggregate.flow_controller.func_154(PLAYER::PLAYER_ID()))
	{
		iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	}
	else
	{
		iVar0 = (Global_1878407->f_1066[iParam0 /*2*/])->f_1;
	}
	if (iVar0 == 0 || !aggregate.aberdeenpigfarm.func_165(iVar0))
	{
		return -2;
	}
	if (aggregate.doc_book.func_171(iVar0, 0, PLAYER::PLAYER_ID(), 0, 0))
	{
		return -2;
	}
	return -2;
}

int func_87(int iParam0)
{
	int iVar0;

	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	if (iVar0 == -1)
	{
		return -2;
	}
	if (func_155(iVar0))
	{
		return -1;
	}
	return -2;
}

int func_88(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	bVar1 = (Global_1878407->f_1066[iParam0 /*2*/])->f_1 == true;
	if (iVar0 <= -1 || iVar0 >= Global_1878407->f_7160)
	{
		return -2;
	}
	if (aggregate.flow_controller.func_154(Global_1273882->f_10))
	{
		if (bVar1)
		{
			if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
			{
				MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
				MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
			}
		}
		else if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
		{
			iVar2 = 13;
			while (iVar2 <= 25)
			{
				if (aggregate.flow_controller.func_156(iVar2) != iVar0)
				{
				}
				else if (!aggregate.flow_controller.func_157(iVar2))
				{
				}
				else
				{
					aggregate.flow_controller.func_46(iVar2, 1);
					aggregate.flow_controller.func_47(iVar2, -1, 0, 1, 1, 0, 0);
					aggregate.flow_controller.func_48(iVar2);
					aggregate.flow_controller.func_49(iVar2);
				}
				iVar2++;
			}
			(Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1 = &Global_1878407->f_7116[iVar0 /*2*/];
			MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
			MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
		}
	}
	else if (bVar1)
	{
		if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
		{
			iVar3 = 13;
			while (iVar3 <= 25)
			{
				if (aggregate.flow_controller.func_156(iVar3) != iVar0)
				{
				}
				else if (!aggregate.flow_controller.func_157(iVar3))
				{
				}
				else
				{
					aggregate.flow_controller.func_46(iVar3, 1);
					aggregate.flow_controller.func_47(iVar3, -1, 0, 1, 1, 0, 0);
					aggregate.flow_controller.func_48(iVar3);
					aggregate.flow_controller.func_49(iVar3);
				}
				iVar3++;
			}
			(Global_1878407->f_7161.f_1[iVar0 /*4*/])->f_1 = &Global_1878407->f_7116[iVar0 /*2*/];
			MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
			MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
		}
	}
	else if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iVar0 /*4*/]), 1))
	{
		MISC::SET_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 1);
		MISC::CLEAR_BIT(Global_1878407->f_7161.f_1[iVar0 /*4*/], 2);
	}
	return -2;
}

int func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = &Global_1878407->f_1066[iParam0 /*2*/];
	iVar1 = (Global_1878407->f_1066[iParam0 /*2*/])->f_1;
	bVar2 = aggregate.aberdeenpigfarm.func_165(iVar1);
	if (!aggregate.aberdeenpigfarm.func_165(iVar0))
	{
		if (!bVar2)
		{
			return -1;
		}
		else
		{
			iVar0 = iVar1;
			bVar2 = false;
		}
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iVar0))
	{
		return -2;
	}
	if (bVar2)
	{
		if (NETWORK::_0xFBE782B3165AC8EC(iVar1))
		{
			return -2;
		}
	}
	return -1;
}

int func_90()
{
	int iVar0;
	vector3 vVar1;

	if (aggregate.bandana.func_80(-428390721 /* GXTEntry: "Butcher Table" */, 1, 1, 0) == 0)
	{
		return -2;
	}
	if (!func_159(4))
	{
		return -2;
	}
	if (!func_160())
	{
		if (Global_1270468->f_9)
		{
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			Global_1270468->f_9 = 0;
		}
		return -2;
	}
	iVar0 = 0;
	vVar1 = { aggregate.flow_controller.func_161(&Global_1273882) };
	switch (vVar1.y)
	{
		case -987049424:
		case -682748:
		case 1538293636:
		case 1581179681:
		default:
			return -2;
			iVar0 = 1268434063;
		case -1992167326:
		case -1884014371:
		case -1554232707:
		case -724534761:
		case -215258135:
		case 892234183:
			iVar0 = 2082733473;
			break;
		case -1871413878:
		case 1357161730:
		case 1483778247:
			iVar0 = -1496978561;
			break;
	}
	if (!func_162(iVar0))
	{
		return -1;
	}
	aggregate.flow_controller.func_163(0);
	return -2;
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	switch (iVar1)
	{
		case 3:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		case 5:
			iVar0 = 3;
			break;
	}
	if (!NETWORK::_0x86FD10251A7118A4(1, iVar0))
	{
		return -1;
	}
	return -2;
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	switch (iVar1)
	{
		case 3:
			iVar0 = 0;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		case 5:
			iVar0 = 3;
			break;
	}
	if (!NETWORK::_0x86FD10251A7118A4(0, iVar0))
	{
		return -1;
	}
	return -2;
}

int func_93()
{
	int iVar0;

	iVar0 = aggregate.flow_controller.func_164(-1892463704, -666033972);
	iVar0 = (iVar0 + aggregate.flow_controller.func_164(-1892463704, -443907314));
	if (iVar0 > 0)
	{
		return -2;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1348352077))
	{
		return -1;
	}
	return -2;
}

int func_94()
{
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(1212196772) && UNLOCK::_UNLOCK_IS_UNLOCKED(-400403560))
	{
		return -2;
	}
	return -1;
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	switch (iParam0)
	{
		case -1:
		case 15:
			return;
		default:
			break;
	}
	if (!MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iParam0 /*4*/]), 1))
	{
		return;
	}
	if (MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_1[iParam0 /*4*/]), 2))
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 == -2)
	{
		Global_1878407->f_57[iParam0] = -15;
		Global_1878407->f_25[iParam0] = 0;
		(Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_3 = -15;
		(Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1++;
		return;
	}
	iVar0 = (Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1;
	iVar1 = &Global_1878407->f_7116[iParam0 /*2*/];
	iVar2 = (Global_1878407->f_7116[iParam0 /*2*/])->f_1;
	if (iVar0 < iVar1)
	{
		return;
	}
	if (iVar0 > iVar2)
	{
		return;
	}
	iVar3 = iVar1;
	iVar4 = -1;
	while (iVar3 <= iVar2)
	{
		if (&Global_1878407->f_1805[iVar3 /*3*/] == 531432813)
		{
			iVar4 = (Global_1878407->f_1805[iVar3 /*3*/])->f_2;
			iVar5 = &Global_1878407->f_105[iVar4 /*4*/];
			if (iVar5 == iParam1)
			{
				(Global_1878407->f_7161.f_1[iParam0 /*4*/])->f_1 = iVar3;
				return;
			}
		}
		iVar3++;
	}
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 160;
		default:
			break;
	}
	return 0;
}

int func_98()
{
	return -1360426452;
}

int func_113(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return -1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return -1;
	}
	return &(((*Global_1055965)[iParam1 /*436*/])->f_39.f_1[iParam0 /*16*/]);
}

void func_116(int iParam0, int iParam1)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (&Global_1878407->f_7161.f_62.f_8[iParam0] == iParam1)
	{
		return;
	}
	Global_1878407->f_7161.f_62.f_8[iParam0] = iParam1;
}

void func_117(int iParam0, int iParam1)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (&Global_1878407->f_7161.f_62.f_10[iParam0] == iParam1)
	{
		return;
	}
	Global_1878407->f_7161.f_62.f_10[iParam0] = iParam1;
}

void func_118(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	if (iParam0 == 1 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_62.f_12[iParam0]), iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(Global_1878407->f_7161.f_62.f_12[iParam0], iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(Global_1878407->f_7161.f_62.f_12[iParam0], iParam1);
	}
}

bool func_119(int iParam0)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return false;
	}
	return &(Global_1878407->f_7161.f_62.f_8[iParam0]);
}

int func_120(int iParam0)
{
	if (iParam0 == 1 || iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1878407->f_7161.f_62.f_10[iParam0]);
}

bool func_121(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam0 == 1 || iParam0 == -1)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	bVar0 = MISC::IS_BIT_SET(&(Global_1878407->f_7161.f_62.f_12[iParam0]), iParam1);
	return bVar0;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_139(int iParam0, vector3 vParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 6)
	{
		return;
	}
	if (aggregate.flow_controller.func_195(*(Global_17173.f_2935[iParam0 /*3*/]), vParam1))
	{
		return;
	}
	*(Global_17173.f_2935[iParam0 /*3*/]) = { vParam1 };
}

bool func_140()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (NETWORK::_0xBAFFDE5F953720D9())
	{
		return false;
	}
	if (!aggregate.dynamic_craft_scenario.func_452())
	{
		return false;
	}
	if (!aggregate.adlerranch.func_96())
	{
		return false;
	}
	if (!aggregate.flow_controller.func_198())
	{
		return false;
	}
	if (aggregate.aberdeenpigfarm.func_47())
	{
		return false;
	}
	return true;
}

bool func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 13 && iParam0 <= 25)
	{
		if (((*Global_1835011)[iParam0 /*72*/])->f_51 == 0)
		{
			return false;
		}
	}
	if (!bParam1)
	{
		if (aggregate.flow_controller.func_138(iParam0))
		{
			return true;
		}
	}
	if (aggregate.flow_controller.func_200(iParam0) > 0)
	{
		iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - aggregate.flow_controller.func_200(iParam0)));
		if (iVar0 < 60)
		{
			return false;
		}
		else
		{
			aggregate.flow_controller.func_201(iParam0, 0);
		}
	}
	if ((Global_1131373->f_5641[iParam0 /*3*/])->f_1 && (Global_1131373->f_5641[iParam0 /*3*/])->f_2)
	{
		if (aggregate.flow_controller.func_202(((*Global_1835011)[iParam0 /*72*/])->f_32))
		{
			((*Global_1835011)[iParam0 /*72*/])->f_32 = -1;
		}
		if (aggregate.flow_controller.func_35(iParam0))
		{
			if (!aggregate.flow_controller.func_203(iParam0))
			{
				if (aggregate.flow_controller.func_200(iParam0) == 0)
				{
					aggregate.flow_controller.func_201(iParam0, NETWORK::GET_CLOUD_TIME_AS_INT());
					return false;
				}
				if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - aggregate.flow_controller.func_200(iParam0))) > 30)
				{
					aggregate.flow_controller.func_46(iParam0, 1);
					aggregate.flow_controller.func_47(iParam0, -1, 0, 1, 1, 0, 0);
					aggregate.flow_controller.func_201(iParam0, 0);
					aggregate.flow_controller.func_201(iParam0, NETWORK::GET_CLOUD_TIME_AS_INT());
				}
				return false;
			}
		}
		aggregate.flow_controller.func_201(iParam0, 0);
		aggregate.flow_controller.func_201(iParam0, 0);
		return true;
	}
	aggregate.flow_controller.func_107(iParam0);
	iVar1 = aggregate.flow_controller.func_104(0, iParam0);
	if (iVar1 == 0)
	{
		return false;
	}
	if (!(Global_1131373->f_5641[iParam0 /*3*/])->f_1 || !(Global_1131373->f_5641[iParam0 /*3*/])->f_2)
	{
		if (((*Global_1835011)[iParam0 /*72*/])->f_32 == -1)
		{
			((*Global_1835011)[iParam0 /*72*/])->f_32 = aggregate.doc_book.func_133(iVar1, 0);
		}
		switch (aggregate.flow_controller.func_206(((*Global_1835011)[iParam0 /*72*/])->f_32, 0))
		{
			case 1:
				return false;
			case 2:
				if (!(Global_1131373->f_5641[iParam0 /*3*/])->f_2)
				{
					((*Global_1835011)[iParam0 /*72*/])->f_32 = -1;
				}
				break;
			case 3:
				((*Global_1835011)[iParam0 /*72*/])->f_32 = -1;
				break;
		}
	}
	return false;
}

void func_145(int iParam0)
{
	int iVar0;

	iVar0 = func_207(iParam0);
	if (!aggregate.aberdeenpigfarm.func_165(iVar0))
	{
		return;
	}
	else if (func_147(iVar0))
	{
		return;
	}
	if (-2042919232 == iVar0)
	{
		return;
	}
	if (!aggregate.doc_book.func_171(iVar0, 0, 255, 0, 0))
	{
		return;
	}
	if (iVar0 == 173210050)
	{
		aggregate.flow_controller.func_208(27, 1);
	}
}

bool func_147(int iParam0)
{
	int iVar0;

	if (!aggregate.aberdeenpigfarm.func_165(iParam0))
	{
		return false;
	}
	if (NETWORK::_0xFBE782B3165AC8EC(iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Global_1270479->f_1991)
	{
		if ((Global_1270479->f_1991.f_1[iVar0 /*24*/])->f_4 == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_149(int iParam0)
{
	if (Global_1273516->f_1 >= 3)
	{
		return true;
	}
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (iParam0 == 255)
	{
		return true;
	}
	if (aggregate.flow_controller.func_210(29, iParam0))
	{
		return true;
	}
	if (func_211(iParam0))
	{
		return true;
	}
	return false;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			return 1;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		default:
			break;
	}
	return 0;
}

Vector3 func_152(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return aggregate.flow_controller.func_96();
			return -870.1846f, -1276.62f, 42.2367f;
		case 2:
			return -870.1846f, -1276.62f, 42.2367f;
		case 3:
			return 1352.95f, -1306.359f, 75.9113f;
		case 4:
			return 0f, 0f, 0f;
		case 5:
			return 0f, 0f, 0f;
		case 6:
			return 1440.138f, 369.3305f, 88.016f;
	}
}

void func_153(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (aggregate.emeraldranch.func_72(iParam0))
	{
		return;
	}
	if (func_213(iParam0))
	{
		return;
	}
	iVar0 = aggregate.emeraldranch.func_131(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	iVar1 = aggregate.emeraldranch.func_132(3, iParam0);
	if (iVar1 != 0)
	{
		if (func_214(iVar1) || func_215(iVar1))
		{
			return;
		}
	}
	bVar2 = UNLOCK::_UNLOCK_IS_VISIBLE(iVar0);
	bVar3 = UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0);
	if (aggregate.flow_controller.func_202(func_216(iParam0)))
	{
		switch (aggregate.flow_controller.func_206(func_216(iParam0), 0))
		{
			case 1:
			default:
				return;
				return;
			case 2:
				if (!bVar2)
				{
					func_217(iParam0, -1);
					return;
				}
			}
			if (!bVar3 || !bVar2)
			{
				iVar4 = aggregate.emeraldranch.func_132(0, iParam0);
				if (iVar4 == 0)
				{
					return;
				}
				if (NETWORK::_0xFBE782B3165AC8EC(iVar4))
				{
					return;
				}
				if (!aggregate.flow_controller.func_202(func_216(iParam0)))
				{
					func_217(iParam0, aggregate.doc_book.func_133(iVar4, 0));
				}
				return;
			}
			func_217(iParam0, -1);
			func_218(iParam0, 1);
		}

bool func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 13 && iParam0 <= 15)
	{
		return false;
	}
	if (aggregate.flow_controller.func_138(iParam0))
	{
		if (!func_221(iParam0, &iVar0))
		{
			return false;
		}
	}
	else if (!aggregate.flow_controller.func_222(iParam0, &iVar0))
	{
		return false;
	}
	iVar1 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::GET_PLAYER_INDEX());
	if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar1))
	{
		if (_NAMESPACE26::_0x149A2751AB66AC02(iVar1) > 1)
		{
			iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar1);
			if (!NETWORK::_0x255A5EF65EDA9167(iVar2))
			{
				return true;
			}
			iVar0 = ((*Global_1055965)[iVar2 /*436*/])->f_15.f_21;
		}
	}
	if (iVar0 <= 0)
	{
		return false;
	}
	iVar3 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - iVar0));
	iVar4 = func_223(iParam0);
	if (aggregate.flow_controller.func_138(iParam0))
	{
		iVar4 = func_224(iParam0);
	}
	return iVar3 < iVar4;
}

bool func_159(int iParam0)
{
	if (!aggregate.flow_controller.func_50(iParam0))
	{
		return false;
	}
	return (Global_1270337->f_94[iParam0 /*5*/])->f_4;
}

bool func_160()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1324907014))
	{
		return true;
	}
	if (!UNLOCK::_UNLOCK_IS_VISIBLE(1324907014))
	{
		return true;
	}
	return false;
}

bool func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<4> Var33;
	var uVar37;

	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_4 = 8;
	Var2.f_13 = 4;
	Var2.f_13.f_5 = 4;
	Var2.f_23 = 1;
	Var2.f_26 = 2;
	Var2.f_26.f_1 = -1;
	Var2.f_26.f_1.f_1 = -1;
	Var2.f_29 = joaat("none");
	Var2.f_29.f_1 = joaat("none");
	Var33.f_1 = -1;
	if (!func_228())
	{
		return false;
	}
	if (!func_229(&Var2, iParam0))
	{
		return false;
	}
	if (!aggregate.flow_controller.func_230(Var2.f_2))
	{
		return false;
	}
	if (Var2.f_2.f_1 == 0)
	{
		return false;
	}
	iVar0 = aggregate.flow_controller.func_231(2132950130);
	iVar1 = aggregate.flow_controller.func_232(iParam0);
	if (aggregate.flow_controller.func_233(&(Var2.f_23), 1859868723))
	{
		aggregate.aberdeenpigfarm.func_106(&uVar37, 2);
	}
	if (aggregate.flow_controller.func_233(&(Var2.f_23), 522505504))
	{
		aggregate.aberdeenpigfarm.func_106(&uVar37, 4);
	}
	func_235();
	aggregate.flow_controller.func_236(iVar1, iVar0, uVar37, Var2.f_2, Var2, Var33, 0);
	return true;
}

int func_207(int iParam0)
{
	int iVar0;

	iVar0 = func_262(iParam0);
	switch (iVar0)
	{
		case 177326598:
		default:
			return 0;
			return -496459706;
		case -765810527:
			return -1052738286;
		case -736232052:
			return -2042919232;
		case 34802860:
			return 173210050;
	}
}

bool func_211(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1273422->f_2), iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (SCRIPTS::_0x72B2E00C9BAC6789(Global_1273422->f_23[iVar0 /*3*/], iParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_213(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return &Global_1270337->f_8[iParam0] == iParam0;
}

int func_214(int iParam0)
{
	int iVar0;

	if (!aggregate.aberdeenpigfarm.func_165(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1270479->f_1991)
	{
		if ((Global_1270479->f_1991.f_1[iVar0 /*24*/])->f_4 == iParam0 && (Global_1270479->f_1991.f_1[iVar0 /*24*/])->f_5 == 0)
		{
			return NETWORK::_0xE10F2D7715ABABEC(Global_1270479->f_1991.f_1[iVar0 /*24*/]);
		}
		iVar0++;
	}
	return 0;
}

int func_215(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (&Global_1270479->f_438.f_44[iVar0 /*30*/] == -1)
		{
		}
		else if ((Global_1270479->f_438.f_44[iVar0 /*30*/])->f_4 != iParam0)
		{
		}
		else
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_216(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 7)
	{
		return -1;
	}
	return Global_1270468[iParam0];
}

void func_217(int iParam0, int iParam1)
{
	if (!aggregate.flow_controller.func_50(iParam0))
	{
		return;
	}
	(*Global_1270468)[iParam0] = iParam1;
}

void func_218(int iParam0, bool bParam1)
{
	if (!aggregate.flow_controller.func_50(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (&Global_1270337->f_8[iParam0] == 0)
		{
			Global_1270337->f_8[iParam0] = iParam0;
		}
	}
	else if (&Global_1270337->f_8[iParam0] != 0)
	{
		Global_1270337->f_8[iParam0] = 0;
	}
}

bool func_221(int iParam0, int* iParam1)
{
	struct<2> Var0;

	*iParam1 = -1;
	switch (iParam0)
	{
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			Var0 = { aggregate.coffee_drinking.func_100(-697712761) };
			STATS::STAT_ID_GET_INT(&Var0, iParam1);
			return true;
		default:
			break;
	}
	return false;
}

int func_223(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 == 25)
	{
		return Global_1901929->f_44.f_26 * 2;
	}
	return Global_1901929->f_44.f_26;
}

int func_224(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1901929->f_44.f_27;
}

bool func_228()
{
	switch (func_267())
	{
		case 0:
			Global_1113330->f_8005.f_1 = DATAFILE::_0xD97D8D905F1562F2(-911959609);
			Global_1113330->f_8005.f_2 = DATAFILE::_0xD97D8D905F1562F2(-245132713);
			func_268(1);
			return false;
		case 1:
			if (!DATAFILE::_0x603AC35FD4602C76(func_269()))
			{
				return false;
			}
			if (!DATAFILE::_0x603AC35FD4602C76(func_270()))
			{
				return false;
			}
			aggregate.flow_controller.func_271(func_269());
			aggregate.flow_controller.func_272(func_270());
			func_268(2);
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_229(var uParam0, int iParam1)
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
	vector3 vVar9;
	bool bVar12;
	bool bVar13;
	var uVar14[205];
	var uVar220;
	var uVar221;
	int iVar222;
	var uVar223;
	int iVar224;
	struct<30> Var225;
	struct<30> Var256;
	struct<31> Var287;
	var uVar381;
	struct<5> Var385;
	struct<2> Var390;
	struct<2> Var395;
	var uVar397;
	struct<2> Var399;

	Var225 = -1;
	Var225.f_1 = -1;
	Var225.f_2 = -1;
	Var225.f_4 = 8;
	Var225.f_13 = 4;
	Var225.f_13.f_5 = 4;
	Var225.f_23 = 1;
	Var225.f_26 = 2;
	Var225.f_26.f_1 = -1;
	Var225.f_26.f_1.f_1 = -1;
	Var225.f_29 = joaat("none");
	Var225.f_29.f_1 = joaat("none");
	Var256 = -1;
	Var256.f_1 = -1;
	Var256.f_2 = -1;
	Var256.f_4 = 8;
	Var256.f_13 = 4;
	Var256.f_13.f_5 = 4;
	Var256.f_23 = 1;
	Var256.f_26 = 2;
	Var256.f_26.f_1 = -1;
	Var256.f_26.f_1.f_1 = -1;
	Var256.f_29 = joaat("none");
	Var256.f_29.f_1 = joaat("none");
	Var287 = 3;
	Var287.f_1 = -1;
	Var287.f_1.f_1 = -1;
	Var287.f_1.f_2 = -1;
	Var287.f_1.f_4 = 8;
	Var287.f_1.f_13 = 4;
	Var287.f_1.f_13.f_5 = 4;
	Var287.f_1.f_23 = 1;
	Var287.f_1.f_26 = 2;
	Var287.f_1.f_26.f_1 = -1;
	Var287.f_1.f_26.f_1.f_1 = -1;
	Var287.f_1.f_29 = joaat("none");
	Var287.f_1.f_29.f_1 = joaat("none");
	Var287.f_1.f_31 = -1;
	Var287.f_1.f_31.f_1 = -1;
	Var287.f_1.f_31.f_2 = -1;
	Var287.f_1.f_31.f_4 = 8;
	Var287.f_1.f_31.f_13 = 4;
	Var287.f_1.f_31.f_13.f_5 = 4;
	Var287.f_1.f_31.f_23 = 1;
	Var287.f_1.f_31.f_26 = 2;
	Var287.f_1.f_31.f_26.f_1 = -1;
	Var287.f_1.f_31.f_26.f_1.f_1 = -1;
	Var287.f_1.f_31.f_29 = joaat("none");
	Var287.f_1.f_31.f_29.f_1 = joaat("none");
	Var287.f_1.f_31.f_31 = -1;
	Var287.f_1.f_31.f_31.f_1 = -1;
	Var287.f_1.f_31.f_31.f_2 = -1;
	Var287.f_1.f_31.f_31.f_4 = 8;
	Var287.f_1.f_31.f_31.f_13 = 4;
	Var287.f_1.f_31.f_31.f_13.f_5 = 4;
	Var287.f_1.f_31.f_31.f_23 = 1;
	Var287.f_1.f_31.f_31.f_26 = 2;
	Var287.f_1.f_31.f_31.f_26.f_1 = -1;
	Var287.f_1.f_31.f_31.f_26.f_1.f_1 = -1;
	Var287.f_1.f_31.f_31.f_29 = joaat("none");
	Var287.f_1.f_31.f_31.f_29.f_1 = joaat("none");
	uVar381 = 3;
	Var395 = -1;
	uVar397 = -1;
	Var399 = -1;
	Var399.f_1 = -1;
	iVar8 = PLAYER::PLAYER_ID();
	iVar7 = _NAMESPACE26::_0x901E0DC25080C8B9(iVar8);
	iVar2 = aggregate.flow_controller.func_273(iVar8);
	iVar4 = aggregate.flow_controller.func_232(-1667613409);
	vVar9 = { Global_36 };
	bVar12 = false;
	iVar224 = 536877168;
	iVar6 = 0;
	aggregate.flow_controller.func_274(&uVar14, 205, 1);
	if (!aggregate.flow_controller.func_275(&Var385, func_269()))
	{
		return false;
	}
	if (!aggregate.flow_controller.func_276(Var385, &(Var385.f_1), -1782208300, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate.flow_controller.func_276(Var385, &(Var385.f_1), 466723622, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate.flow_controller.func_276(Var385, &(Var385.f_1), 1635370648, iParam1, 0, 1))
	{
		return false;
	}
	if (!aggregate.flow_controller.func_276(Var385, &(Var385.f_1), 56746299, 0, 0, 1))
	{
		return false;
	}
	if (!aggregate.flow_controller.func_276(Var385, &(Var385.f_1), 1915534289, iVar6, 0, 1))
	{
		return false;
	}
	uVar220 = Var385.f_1;
	if (!aggregate.flow_controller.func_275(&Var390, func_270()))
	{
		return false;
	}
	uVar221 = Var390.f_1;
	iVar5 = aggregate.flow_controller.func_278(Var385, 1141833051);
	iVar0 = 0;
	while (iVar0 <= 204)
	{
		MISC::_COPY_MEMORY(&Var395, &uVar397, 2);
		MISC::_COPY_MEMORY(&Var225, &Var256, 31);
		Var385.f_1 = uVar220;
		Var390.f_1 = uVar221;
		Var399 = { aggregate.flow_controller.func_181() };
		bVar12 = false;
		bVar13 = false;
		iVar3 = &uVar14[iVar0];
		if (iVar3 >= iVar5)
		{
		}
		else if (!func_279(&Var385, iVar3, &Var395))
		{
		}
		else
		{
			Var399 = { aggregate.flow_controller.func_280(Var395.f_1) };
			if (!aggregate.flow_controller.func_281(Var395, 1))
			{
			}
			else
			{
				iVar1 = 0;
				while (iVar1 <= (3 - 1))
				{
					iVar222 = iVar1;
					if (func_283(Var399, vVar9, func_282(iVar222)))
					{
						bVar12 = true;
					}
					else
					{
						iVar1++;
					}
				}
				if (!bVar12)
				{
				}
				else if ((Var287[iVar222 /*31*/])->f_2.f_1 != 0)
				{
				}
				else
				{
					bVar13 = iVar222 == false;
					if (!aggregate.flow_controller.func_284(&Var390, &Var395, &Var225, 0))
					{
					}
					else if (aggregate.flow_controller.func_285(&Var225, iVar3, &uVar381, iVar7, iVar2, iVar4, &uVar223, iVar224, -1))
					{
					}
					else
					{
						if (bVar13)
						{
							MISC::_COPY_MEMORY(uParam0, &Var225, 31);
							return true;
						}
						MISC::_COPY_MEMORY(Var287[iVar222 /*31*/], &Var225, 31);
					}
				}
			}
		}
		iVar0++;
	}
	MISC::_COPY_MEMORY(&Var225, &Var256, 31);
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if ((Var287[iVar0 /*31*/])->f_2.f_1 == 0)
		{
		}
		else
		{
			MISC::_COPY_MEMORY(&Var225, Var287[iVar0 /*31*/], 31);
		}
		else
		{
			iVar0++;
		}
	}
	if (Var225.f_2.f_1 == 0)
	{
		return false;
	}
	MISC::_COPY_MEMORY(uParam0, &Var225, 31);
	return true;
}

void func_235()
{
	DATAFILE::_DATAFILE_UNLOAD(func_269());
	DATAFILE::_DATAFILE_UNLOAD(func_270());
	func_268(0);
	func_289(0);
	func_290(0);
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return -765810527;
		case 5:
		case 6:
		case 7:
		case 8:
			return 34802860;
		case 9:
		case 10:
		case 11:
		case 12:
			return -736232052;
		case 0:
			return 177326598;
		default:
			break;
	}
	return 0;
}

int func_267()
{
	return Global_1113330->f_8005;
}

void func_268(int iParam0)
{
	Global_1113330->f_8005 = iParam0;
}

var func_269()
{
	return Global_1113330->f_8005.f_1;
}

var func_270()
{
	return Global_1113330->f_8005.f_2;
}

bool func_279(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_318(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_2 = -1248823782;
	if (!DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	*iParam2 = aggregate.flow_controller.func_319(iVar0);
	uParam0->f_2 = 842085562;
	if (!DATAFILE::_DATAFILE_GET_HASH(&iVar0, uParam0))
	{
		return false;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	iParam2->f_1 = iVar0;
	return true;
}

float func_282(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901929->f_295.f_54;
		case 1:
			return Global_1901929->f_295.f_55;
		case 2:
			return Global_1901929->f_295.f_56;
		default:
			break;
	}
	return -1f;
}

bool func_283(struct<2> Param0, vector3 vParam2, float fParam5)
{
	int iVar0;
	int iVar1;

	if (fParam5 < 0f)
	{
		return false;
	}
	aggregate.flow_controller.func_322(Param0, &iVar0, &iVar1);
	return BUILTIN::VDIST(vParam2, aggregate.flow_controller.func_323(iVar0, iVar1)) <= fParam5;
}

void func_289(int iParam0)
{
	Global_1113330->f_8005.f_1 = iParam0;
}

void func_290(int iParam0)
{
	Global_1113330->f_8005.f_2 = iParam0;
}

bool func_318(var uParam0, int iParam1)
{
	uParam0->f_2 = 1089670230;
	uParam0->f_3 = iParam1;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return true;
}

var func_377(int iParam0)
{
	return ((*Global_1112103)[iParam0 /*35*/])->f_1;
}

bool func_444(var uParam0)
{
	var uVar0;
	var uVar1;

	uVar0 = func_472();
	if (!DATAFILE::_0x7907969497EA92F5(uVar0))
	{
		return false;
	}
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	MISC::_COPY_MEMORY(uParam0, &uVar1, 5);
	*uParam0 = uVar0;
	return true;
}

bool func_452(int iParam0, var uParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	if (!aggregate.flow_controller.func_474(iParam0))
	{
		return false;
	}
	uVar0 = aggregate.flow_controller.func_475(iParam0);
	if (!DATAFILE::_0x603AC35FD4602C76(uVar0))
	{
		return false;
	}
	*uParam1 = uVar0;
	uParam1->f_2 = -678729477;
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam1->f_1), uParam1))
	{
		return false;
	}
	return true;
}

var func_472()
{
	return (Global_1070355->f_26934[32 /*4*/])->f_3;
}

