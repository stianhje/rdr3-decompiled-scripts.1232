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
	var uLocal_22 = 0;
	var uLocal_23 = 11;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 5;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
#endregion

// __EntryFunction__ == aggregate_func_8161

bool func_1(int iParam0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		return false;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	aggregate_func_4242(iParam0, 0);
	if (!func_5(&(iParam0->f_18)))
	{
		return false;
	}
	aggregate_func_8787(&(iParam0->f_42));
	if (!aggregate_func_8788(&(iParam0->f_46)))
	{
		return false;
	}
	func_8(iParam0);
	return true;
}

void func_2(int* iParam0)
{
	bool bVar0;

	bVar0 = false;
	while (!bVar0)
	{
		if (func_9(iParam0))
		{
			bVar0 = true;
		}
		func_10(iParam0);
		func_11(iParam0);
		aggregate_func_8789(&(iParam0->f_18), &(iParam0->f_42));
		aggregate_func_3955(&(iParam0->f_42));
		aggregate_func_2652(&(iParam0->f_46));
		BUILTIN::WAIT(0);
	}
}

void func_3(int iParam0)
{
	aggregate_func_8790(&(iParam0->f_79));
	aggregate_func_8782(iParam0);
	aggregate_func_2653(&(iParam0->f_46));
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_5(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		aggregate_func_7019(uParam0->f_2[iVar0 /*3*/]);
		iVar0++;
	}
	aggregate_func_7019(&(uParam0->f_18));
	return true;
}

int func_8(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_20(iVar2, 1);
		if (!func_21(iParam0, iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

bool func_9(int* iParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return true;
	}
	return false;
}

void func_10(int* iParam0)
{
	var uVar0;
	struct<4> Var4;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(-21855895))
	{
		if (!UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(-21855895, &uVar0))
		{
		}
		else
		{
			func_22(iParam0, &uVar0, 0);
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(-21855895);
		}
	}
	if (aggregate_func_4368(iParam0, 1))
	{
		Var4 = { aggregate_func_8163(iParam0) };
		if (func_25(iParam0, &Var4))
		{
			func_22(iParam0, &Var4, 1);
		}
		aggregate_func_7392(iParam0, 1, 0);
	}
}

void func_11(int* iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UIAPPS::_0x96FD694FE5BE55DC(1821104826);
	iVar1 = aggregate_func_4304(iParam0);
	iVar0 = joaat("main");
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			aggregate_func_8164(iParam0, iVar1);
		}
		aggregate_func_4242(iParam0, iVar0);
		aggregate_func_8164(iParam0, iVar0);
	}
	aggregate_func_8164(iParam0, iVar0);
}

int func_20(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return joaat("main");
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_21(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("main"):
			return aggregate_func_8783(iParam0);
	}
	return false;
}

void func_22(int* iParam0, int iParam1, int iParam2)
{
	switch (*iParam1)
	{
		case -1740156697:
			func_44(iParam0, iParam1, iParam2);
			func_45(iParam0, iParam1);
			break;
		case -1203660660:
			func_46(iParam0, iParam1, iParam2);
			break;
	}
}

bool func_25(int* iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 1;
	if (func_47(iParam0) > 0)
	{
		if (uParam1->f_1 >= func_47(iParam0))
		{
			uParam1->f_1 = (func_47(iParam0) - 1);
		}
		if (!func_48(iParam0, uParam1->f_1, &(uParam1->f_3)))
		{
		}
		if (*uParam1 != -1740156697)
		{
			*uParam1 = -1740156697;
		}
		if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam1->f_3))
		{
			uParam1->f_2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam1->f_3, aggregate_func_4915(57));
		}
		else
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_44(int* iParam0, int iParam1, int iParam2)
{
	if (iParam0->f_14.f_1 != iParam1->f_1)
	{
		func_58(&(iParam0->f_82));
	}
	switch (iParam1->f_2)
	{
		case -571766943:
		case 705463926:
			if (!func_59(iParam0, &(iParam1->f_3)))
			{
				func_60(iParam0);
			}
			break;
		case -1948187754:
		case -1585562139:
		case -797654126:
			if (!func_61(iParam0, &(iParam1->f_3)))
			{
				func_60(iParam0);
			}
			break;
		default:
			func_60(iParam0);
			break;
	}
}

void func_45(int* iParam0, int iParam1)
{
	if (*iParam1 != -1740156697)
	{
		return;
	}
	MISC::_COPY_MEMORY(&(iParam0->f_14), iParam1, 4);
}

void func_46(int* iParam0, int iParam1, int iParam2)
{
	switch (iParam1->f_2)
	{
		case -797654126:
		case -571766943:
			aggregate_func_1872();
			aggregate_func_4580();
			func_64();
			func_65();
			func_66();
			break;
		case -1948187754:
			if (!func_67(iParam0, &(iParam1->f_3)))
			{
			}
			break;
	}
}

int func_47(int* iParam0)
{
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(&(iParam0->f_2[1]));
}

bool func_48(int* iParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(&(iParam0->f_2[1]));
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(&(iParam0->f_2[1]), iParam1);
	return true;
}

void func_50(int iParam0)
{
	func_58(&(iParam0->f_82));
	func_68(-712383481);
}

int func_51(int* iParam0)
{
	func_69(iParam0);
	aggregate_func_7392(iParam0, 0, 1);
	func_60(iParam0);
	aggregate_func_4242(&(iParam0->f_84), 4000);
	func_71(-712383481);
	return 1;
}

void func_52(int* iParam0)
{
	if (aggregate_func_8784(&(iParam0->f_84)))
	{
		if (aggregate_func_4287(&(iParam0->f_18)))
		{
		}
		else
		{
			aggregate_func_7392(iParam0, 0, 1);
		}
	}
	func_74(iParam0);
	if (aggregate_func_8794(&(iParam0->f_82)))
	{
		aggregate_func_7392(iParam0, 0, 1);
	}
	if (aggregate_func_4368(iParam0, 0))
	{
		func_76(iParam0);
		aggregate_func_7392(iParam0, 0, 0);
	}
}

bool func_57(int iParam0)
{
	iParam0->f_2[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", -1505966001);
	iParam0->f_2[1] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(&(iParam0->f_2[0]), -849224310);
	iParam0->f_2[2] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(&(iParam0->f_2[0]), 616081382, "");
	iParam0->f_2[3] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(iParam0->f_2[0]), -781821188, false);
	iParam0->f_2[4] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(&(iParam0->f_2[0]), -3675574, false);
	iParam0->f_2[5] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(&(iParam0->f_2[0]), -536627617, false);
	iParam0->f_2[6] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(&(iParam0->f_2[0]), joaat("enabled"), true);
	iParam0->f_2[7] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(&(iParam0->f_2[0]), -242834141, "");
	iParam0->f_2[8] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(&(iParam0->f_2[0]), 1959966745, false);
	iParam0->f_2[9] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(&(iParam0->f_2[0]), -1952794871, false);
	iParam0->f_2[10] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(&(iParam0->f_2[0]), -129582355, false);
	return true;
}

int func_58(var uParam0)
{
	if (!aggregate_func_2823(*uParam0, 0))
	{
		return 0;
	}
	if (!aggregate_func_3101(*uParam0))
	{
		return 1;
	}
	aggregate_func_3129(*uParam0);
	*uParam0 = 0;
	uParam0->f_1 = 1;
	return 1;
}

bool func_59(int* iParam0, var uParam1)
{
	struct<4> Var0;
	struct<10> Var4;
	char* sVar18;
	bool bVar19;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	func_82(iParam0, uParam1);
	if (!func_83(uParam1, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	if (!aggregate_func_4272(Var0, &Var4, 0, 0, -1))
	{
	}
	func_85(Var4.f_4);
	func_86(&(iParam0->f_82), Var4.f_4);
	bVar19 = false;
	if (aggregate_func_4276(&Var0))
	{
		sVar18 = func_88(1);
	}
	else if (aggregate_func_5471(Var0))
	{
		sVar18 = func_90(Var0);
		bVar19 = true;
	}
	else
	{
		sVar18 = func_90(Var0);
	}
	func_91(iParam0, bVar19);
	func_92(iParam0, sVar18);
	return true;
}

void func_60(int* iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(iParam0->f_2[2]), "");
	func_91(iParam0, 0);
}

bool func_61(int* iParam0, var uParam1)
{
	struct<4> Var0;
	struct<10> Var4;
	char* sVar18;
	bool bVar19;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	func_82(iParam0, uParam1);
	if (!func_83(uParam1, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	if (!aggregate_func_4272(Var0, &Var4, 0, 0, -1))
	{
		return false;
	}
	func_85(Var4.f_4);
	func_86(&(iParam0->f_82), Var4.f_4);
	bVar19 = false;
	if (func_93(Var4.f_4))
	{
		sVar18 = func_88(8);
	}
	else if (aggregate_func_4276(&Var0))
	{
		sVar18 = func_88(0);
	}
	else if (aggregate_func_5471(Var0))
	{
		sVar18 = func_90(Var0);
		bVar19 = true;
	}
	else
	{
		sVar18 = func_90(Var0);
	}
	func_91(iParam0, bVar19);
	func_92(iParam0, sVar18);
	return true;
}

void func_64()
{
	if (!UIAPPS::_IS_APP_ACTIVE(1821104826) && !UIAPPS::_IS_APP_RUNNING(1821104826))
	{
		return;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(1821104826);
}

void func_65()
{
	Global_1051387->f_3577 = 1;
	aggregate_func_4313(&(Global_1051387->f_3579));
}

void func_66()
{
	if (!UIAPPS::_IS_APP_ACTIVE(1890312850) && !UIAPPS::_IS_APP_RUNNING(1890312850))
	{
		return;
	}
	UIAPPS::_CLOSE_APP_BY_HASH(1890312850);
}

bool func_67(int* iParam0, var uParam1)
{
	struct<4> Var0;
	struct<10> Var4;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	if (!func_83(uParam1, &Var0))
	{
		return false;
	}
	Var4.f_9 = -1591664384;
	if (!aggregate_func_4272(Var0, &Var4, 1, 0, -1))
	{
		return false;
	}
	if (!aggregate_func_2823(Var4.f_4, 0))
	{
		return false;
	}
	if (!aggregate_func_4673(Var4.f_4))
	{
		return false;
	}
	if (!func_97(Var4.f_4))
	{
		return false;
	}
	if (!func_98(iParam0, Var4.f_4))
	{
		return false;
	}
	return true;
}

void func_68(int iParam0)
{
	int iVar0;

	if (Global_1958299->f_2 == -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1958299->f_2 == -1)
	{
		return;
	}
	if (Global_1958299->f_2 != iParam0)
	{
	}
	iVar0 = MISC::ABSI((Global_1273882->f_21 - Global_1958299->f_1));
	TELEMETRY::_0x25CC50EC1A6F3A96(&Global_1958299, Global_1958299->f_2, iVar0);
	aggregate_func_4370(Global_1958299);
}

int func_69(int* iParam0)
{
	if (!func_100(iParam0->f_2[1]))
	{
		return 0;
	}
	return 1;
}

void func_71(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1958299->f_2 != -1 && Global_1958299->f_2 != iParam0)
	{
		func_68(Global_1958299->f_2);
	}
	Global_1958299->f_1 = Global_1273882->f_21;
	Global_1958299->f_2 = iParam0;
}

void func_74(int* iParam0)
{
	vector3 vVar0;
	var uVar3;

	if (!aggregate_func_8795(&(iParam0->f_18), &(iParam0->f_42)))
	{
		return;
	}
	if (aggregate_func_4267(&(iParam0->f_18)) == -1948187754)
	{
		func_107(iParam0, &vVar0);
		if (!aggregate_func_3149(vVar0.x, &uVar3))
		{
		}
		TELEMETRY::_0x621D719C4836292B(&uVar3, 0, vVar0.z, vVar0.y, vVar0.z, 1821104826);
		if (!func_109(iParam0, 0))
		{
		}
	}
	aggregate_func_7392(iParam0, 0, 1);
	aggregate_func_7392(iParam0, 1, 1);
}

void func_76(int* iParam0)
{
	int iVar0;
	int iVar1;
	struct<12> Var2;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	iVar1 = INVENTORY::_0x97A3646645727F42(&iVar0);
	Var2.f_9 = -1591664384;
	iVar17 = 0;
	iVar18 = 0;
	iVar19 = 0;
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		if (func_110(iVar17, 200))
		{
		}
		else
		{
			if (!INVENTORY::_0x82FA24C3D3FCD9B7(iVar1, iVar16, &Var2))
			{
			}
			else
			{
				iVar18 = Var2.f_11;
				if (!aggregate_func_4349(&Var2))
				{
				}
				else if (!aggregate_func_8785(Var2.f_9))
				{
				}
				else
				{
					iVar19 = 0;
					while (iVar19 < iVar18)
					{
						if (func_110(iVar17, 200))
						{
						}
						else
						{
							if (!func_113(iParam0, &Var2, iVar17))
							{
							}
							else
							{
								iVar17++;
							}
							iVar19++;
						}
					}
				}
			}
			iVar16++;
		}
	}
	INVENTORY::_0x42A2F33A1942E865(iVar1);
	if (iVar17 == 0)
	{
		func_114(iParam0);
	}
	func_115(iParam0, iVar17);
}

int func_82(int* iParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return 0;
	}
	func_118(iParam0, DATABINDING::_0x6329C34BEE5BFF4B(*uParam1, -242834141));
	func_119(iParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 1959966745));
	func_120(iParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -1952794871));
	func_121(iParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -129582355));
	func_122(iParam0, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(*uParam1, joaat("enabled")));
	func_123(iParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 440050042), DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 1058850005));
	return 1;
}

bool func_83(var uParam0, var uParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	*uParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -376630643);
	uParam1->f_1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -539230421);
	uParam1->f_2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1019689499);
	uParam1->f_3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1283381642);
	return true;
}

int func_85(bool bParam0)
{
	if (!aggregate_func_2823(bParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_0x37AA282163B0D2C4(bParam0);
	return 1;
}

int func_86(var uParam0, bool bParam1)
{
	if (!aggregate_func_2823(bParam1, 0))
	{
		return 0;
	}
	if (!aggregate_func_3101(bParam1))
	{
		return 1;
	}
	*uParam0 = bParam1;
	return 1;
}

char* func_88(int iParam0)
{
	char* sVar0;

	sVar0 = func_126(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return "";
	}
	return MISC::_CREATE_VAR_STRING(2, sVar0);
}

char* func_90(struct<4> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!aggregate_func_4349(&Param0))
	{
		return "";
	}
	if (aggregate_func_3127(Param0) <= 0)
	{
		return "";
	}
	vVar0 = { aggregate_func_2169(aggregate_func_3127(Param0), 1) };
	vVar3 = { aggregate_func_2170(aggregate_func_3127(Param0), 1) };
	vVar6 = { aggregate_func_3177(aggregate_func_3127(Param0)) };
	return MISC::_CREATE_VAR_STRING(170, func_126(2), &vVar0, &vVar3, &vVar6);
}

void func_91(int* iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(iParam0->f_2[3]), bParam1);
}

void func_92(int* iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(iParam0->f_2[2]), sParam1);
}

bool func_93(bool bParam0)
{
	int iVar0;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return false;
	}
	if (!aggregate_func_4673(bParam0))
	{
		return false;
	}
	if (!aggregate_func_2852(bParam0, MISC::GET_HASH_KEY("CI_TAG_OFFER_MYSTERY")))
	{
		return false;
	}
	iVar0 = aggregate_func_2035(bParam0, 1);
	if (iVar0 != 0)
	{
		return false;
	}
	return true;
}

bool func_97(bool bParam0)
{
	int iVar0;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return false;
	}
	if (!aggregate_func_4673(bParam0))
	{
		return false;
	}
	if (func_93(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, 920823793, -153848696))
	{
		iVar0 = aggregate_func_2035(bParam0, 1);
		if (!aggregate_func_2891(iVar0))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_98(int* iParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	struct<2> Var4;
	struct<5> Var14;

	if (!aggregate_func_2823(bParam1, 0))
	{
		return false;
	}
	if (!aggregate_func_4673(bParam1))
	{
		return false;
	}
	iVar0 = aggregate_func_2035(bParam1, 1);
	if (!ITEMDATABASE::_ITEM_DATABASE_IS_BUY_AWARD_KEY_VALID(iVar0))
	{
		return false;
	}
	if (!aggregate_func_2891(iVar0))
	{
		return false;
	}
	if (aggregate_func_3790(iVar0))
	{
		return false;
	}
	Var4 = -1;
	Var4.f_1 = -1;
	if (!aggregate_func_7725(&Var4, iVar0, Var14, 1, 1, 0, 0, aggregate_func_7189(iVar0, 0, 1, -1, 1), -1, 0))
	{
		return false;
	}
	if (!func_139(&(iParam0->f_18), Var4, -1948187754, bParam1))
	{
		return false;
	}
	vVar1.x = Var4;
	vVar1.f_2 = bParam1;
	vVar1.f_1 = aggregate_func_5538(bParam1);
	TELEMETRY::_0xCA9E42F437625A85(Var4, 1821104826, 1821104826);
	if (!aggregate_func_929(&Var4))
	{
		return false;
	}
	func_142(iParam0, &vVar1);
	return true;
}

bool func_100(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar2);
		if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(iVar0))
		{
		}
		else
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iVar0);
		}
		iVar2++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(*uParam0);
	return true;
}

void func_107(int* iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(iParam1, &(iParam0->f_39), 3);
}

bool func_109(int* iParam0, int iParam1)
{
	char[] cVar0[8];
	char[] cVar16[8];

	if (!func_147(iParam1, &cVar0, &cVar16))
	{
		return false;
	}
	if (!aggregate_func_1873(&(iParam0->f_46), &cVar16, &cVar0))
	{
		return false;
	}
	return true;
}

bool func_110(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam0 <= iParam1)
	{
		return false;
	}
	return true;
}

bool func_113(int* iParam0, var uParam1, int iParam2)
{
	struct<10> Var0;
	struct<13> Var14;

	if (!aggregate_func_4349(uParam1))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	aggregate_func_4272(*uParam1, &Var0, 1, 0, -1);
	if (!aggregate_func_2823(Var0.f_4, 0))
	{
		return false;
	}
	Var14 = 1;
	Var14.f_1 = 1;
	Var14.f_2 = joaat("COLOR_WHITE");
	Var14.f_4 = -1;
	Var14.f_5 = -1;
	Var14.f_6 = -1;
	Var14.f_10 = -1;
	Var14.f_11 = -1;
	Var14.f_12 = -1;
	if (aggregate_func_4689(Var0.f_4))
	{
		if (!func_150(uParam1, &Var14))
		{
			return false;
		}
	}
	else if (aggregate_func_4673(Var0.f_4))
	{
		if (!func_151(uParam1, &Var14))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (!func_152(iParam0, &Var14, iParam2))
	{
		return false;
	}
	return true;
}

void func_114(int* iParam0)
{
	struct<36> Var0;

	func_153(&Var0);
	func_118(iParam0, MISC::_CREATE_VAR_STRING(2, &Var0));
	func_119(iParam0, MISC::GET_HASH_KEY(&(Var0.f_16)));
	func_120(iParam0, 0);
	func_121(iParam0, 0);
	func_122(iParam0, 0);
	func_123(iParam0, Var0.f_34, Var0.f_35);
}

int func_115(int* iParam0, int iParam1)
{
	if (!func_154(iParam0->f_2[1], iParam1))
	{
		return 0;
	}
	return 1;
}

void func_118(int* iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&(iParam0->f_2[7]), sParam1);
}

void func_119(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(&(iParam0->f_2[8]), iParam1);
}

void func_120(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(&(iParam0->f_2[9]), iParam1);
}

void func_121(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(&(iParam0->f_2[10]), iParam1);
}

void func_122(int* iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&(iParam0->f_2[6]), bParam1);
}

void func_123(int* iParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(&(iParam0->f_2[4]), iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(&(iParam0->f_2[5]), iParam2);
}

char* func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HO_TOOLTIP_REWARD_EXPIRED";
		case 1:
			return "HO_TOOLTIP_OFFER_EXPIRED";
		case 2:
			return "HO_TOOLTIP_OFFER_AVAILABLE_DATE";
		case 3:
			return "HO_PROMPT_BROWSE_CATALOGUE";
		case 4:
			return "HO_PROMPT_REDEEM";
		case 5:
			return "HO_TOOLTIP_OFFER_FOR_HORSES";
		case 6:
			return "HO_ITEM_MYSTERY_REWARD_NAME";
		case 7:
			return "HO_ITEM_MYSTERY_REWARD_DESCRIPTION";
		case 8:
			return "HO_TOOLTIP_ITEM_MYSTERY_REWARD_NOT_REVEALED";
		default:
			break;
	}
	return "";
}

bool func_139(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = 4;
	while (iVar0 >= 1)
	{
		MISC::_COPY_MEMORY(uParam0->f_2[iVar0 /*3*/], uParam0->f_2[(iVar0 - 1) /*3*/], 3);
		iVar0 = (iVar0 + -1);
	}
	uParam0->f_2[0 /*3*/] = iParam1;
	(uParam0->f_2[0 /*3*/])->f_1 = iParam2;
	(uParam0->f_2[0 /*3*/])->f_2 = bParam3;
	return true;
}

void func_142(int* iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(iParam0->f_39), iParam1, 3);
}

bool func_147(int iParam0, char* sParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "RDRO_Offer_Menu_Sounds", 128);
			StringCopy(sParam2, "offer_redeem", 128);
			return true;
		default:
			break;
	}
	return false;
}

bool func_150(var uParam0, var uParam1)
{
	var uVar0;

	if (!func_174(uParam0, &uVar0))
	{
		return false;
	}
	if (!func_175(uParam0, uParam1))
	{
		return false;
	}
	uParam1->f_37 = MISC::GET_HASH_KEY(func_176(&uVar0));
	if (func_177(&uVar0))
	{
		uParam1->f_5 = -571766943;
	}
	else
	{
		uParam1->f_5 = 705463926;
	}
	if (func_177(&uVar0))
	{
		uParam1->f_9 = 1;
		uParam1->f_8 = uParam1->f_39;
		StringCopy(&(uParam1->f_42), func_88(3), 128);
	}
	return true;
}

bool func_151(var uParam0, var uParam1)
{
	bool bVar0;
	struct<36> Var1;

	if (!func_174(uParam0, &bVar0))
	{
		return false;
	}
	if (!func_175(uParam0, uParam1))
	{
		return false;
	}
	if (func_178(bVar0))
	{
		if (!func_179(bVar0, &(uParam1->f_38)))
		{
		}
	}
	if (func_93(bVar0))
	{
		uParam1->f_5 = -1585562139;
	}
	else if (!func_97(bVar0))
	{
		uParam1->f_5 = -797654126;
	}
	else
	{
		uParam1->f_5 = -1948187754;
	}
	uParam1->f_37 = MISC::GET_HASH_KEY(func_180(&bVar0));
	if (func_93(bVar0))
	{
		func_181(&Var1);
		StringCopy(&(uParam1->f_20), MISC::_CREATE_VAR_STRING(2, &Var1), 128);
		uParam1->f_36 = MISC::GET_HASH_KEY(&(Var1.f_16));
		uParam1->f_16 = Var1.f_32;
		uParam1->f_17 = Var1.f_33;
		uParam1->f_18 = Var1.f_34;
		uParam1->f_19 = Var1.f_35;
		uParam1->f_37 = 0;
	}
	if (!uParam1->f_39)
	{
	}
	else if (func_178(bVar0))
	{
	}
	else if (!func_97(bVar0))
	{
	}
	else
	{
		uParam1->f_8 = 1;
	}
	if (func_97(bVar0))
	{
		uParam1->f_9 = 1;
		StringCopy(&(uParam1->f_42), func_88(4), 128);
	}
	else if (func_177(&bVar0))
	{
		uParam1->f_9 = 1;
		uParam1->f_8 = 1;
		StringCopy(&(uParam1->f_42), func_88(3), 128);
	}
	return true;
}

bool func_152(int* iParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	struct<19> Var9;
	var uVar44;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(iParam0->f_2[1])))
	{
		return false;
	}
	if (iParam2 < -1)
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(&(iParam0->f_2[1]));
	if (iParam2 == -1 || iParam2 >= iVar0)
	{
		StringCopy(&cVar1, "coupon_item_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		Var9.f_18 = 16;
		if (!func_182(&Var9, iParam0->f_2[1], cVar1, cParam1))
		{
			return false;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(&(iParam0->f_2[1]), -1, "coupon_entry", Var9);
	}
	else
	{
		if (!func_48(iParam0, iParam2, &uVar44))
		{
			return false;
		}
		if (!func_183(&uVar44, cParam1))
		{
			return false;
		}
	}
	return true;
}

void func_153(char* sParam0)
{
	StringCopy(sParam0, "COUPON_OFFER_NO_VALUE", 128);
	StringCopy(&(sParam0->f_16), "COUPON_OFFER_NO_VALUE_DESC", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

bool func_154(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	iVar1 = iVar0;
	while (iVar1 >= iParam1)
	{
		DATABINDING::_0x6318FB3BE37E11B3(*uParam0, iParam1);
		iVar1 = (iVar1 + -1);
	}
	return true;
}

bool func_174(var uParam0, bool bParam1)
{
	struct<10> Var0;

	*bParam1 = 0;
	if (!aggregate_func_4349(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!aggregate_func_4272(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!aggregate_func_2823(Var0.f_4, 0))
	{
		return false;
	}
	if (!aggregate_func_4379(Var0.f_4))
	{
		return false;
	}
	*bParam1 = Var0.f_4;
	return true;
}

bool func_175(var uParam0, var uParam1)
{
	bool bVar0;
	struct<733> Var1;
	int iVar768;

	if (!func_174(uParam0, &bVar0))
	{
		return false;
	}
	uParam1->f_4 = -21855895;
	uParam1->f_58 = { *uParam0 };
	if (aggregate_func_4276(uParam0))
	{
		uParam1->f_39 = 0;
	}
	else
	{
		uParam1->f_39 = 1;
		if (aggregate_func_8786(uParam0))
		{
			uParam1->f_40 = 1;
		}
		else if (aggregate_func_5471(*uParam0))
		{
			uParam1->f_41 = 1;
		}
	}
	if (!func_201(&bVar0, &(uParam1->f_20)))
	{
	}
	uParam1->f_36 = aggregate_func_3620(bVar0);
	Var1.f_8 = 10;
	Var1.f_8.f_1.f_4 = 15;
	Var1.f_8.f_1.f_36 = 10;
	Var1.f_8.f_1.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_480 = 10;
	Var1.f_480.f_1.f_4 = 10;
	Var1.f_480.f_1.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_732.f_2 = 5;
	Var1.f_732.f_18 = 8;
	if (ITEMDATABASE::_0x2A610BEE7D341CC4(bVar0, &Var1))
	{
		iVar768 = 0;
		while (iVar768 < 5)
		{
			switch ((Var1.f_732.f_2[iVar768 /*3*/])->f_2)
			{
				case -774197843:
					func_203(Var1.f_732.f_2[iVar768 /*3*/], &(uParam1->f_17), &(uParam1->f_16), 1);
					func_203(Var1.f_732.f_2[iVar768 /*3*/], &(uParam1->f_19), &(uParam1->f_18), 1);
					break;
			}
			iVar768++;
		}
	}
	return true;
}

char* func_176(var uParam0)
{
	char* sVar0;

	if (!aggregate_func_2823(*uParam0, 0))
	{
		return "";
	}
	if (!aggregate_func_4689(*uParam0))
	{
		return "";
	}
	if (aggregate_func_2852(*uParam0, -462364930))
	{
		sVar0 = "COUPON_OFFER_LOCATION_BOUNTY_BOARD";
	}
	else if (aggregate_func_2852(*uParam0, 791503389))
	{
		sVar0 = "COUPON_OFFER_LOCATION_COOK";
	}
	else if (aggregate_func_2852(*uParam0, 1631625825) || aggregate_func_2852(*uParam0, 769052425))
	{
		sVar0 = "COUPON_OFFER_LOCATION_OUTFITTERS";
	}
	else if (aggregate_func_2852(*uParam0, 805642000))
	{
		sVar0 = "COUPON_OFFER_LOCATION_MADAM_NAZAR";
	}
	else if (aggregate_func_2852(*uParam0, -290607961))
	{
		sVar0 = "COUPON_OFFER_LOCATION_OFFER";
	}
	else if (aggregate_func_2852(*uParam0, -657940588))
	{
		sVar0 = "COUPON_OFFER_LOCATION_CATALOGUE";
	}
	else if (aggregate_func_2852(*uParam0, -2141994197))
	{
		sVar0 = "COUPON_OFFER_LOCATION_STABLE";
	}
	else if (aggregate_func_2852(*uParam0, -1336773246))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GUNSMITH_STORE_CATALOGUE";
	}
	else if (aggregate_func_2852(*uParam0, 565025927))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GUNSMITH";
	}
	else if (aggregate_func_2852(*uParam0, -698888345))
	{
		sVar0 = "COUPON_OFFER_LOCATION_GUNSMITH_CATALOGUE";
	}
	else if (aggregate_func_2852(*uParam0, -700325949))
	{
		sVar0 = "COUPON_OFFER_LOCATION_ABILITIES_MENU";
	}
	else if (aggregate_func_2852(*uParam0, 563589121))
	{
		sVar0 = "COUPON_OFFER_LOCATION_FAST_TRAVEL";
	}
	else if (aggregate_func_2852(*uParam0, -1572489300))
	{
		sVar0 = "COUPON_OFFER_LOCATION_MAGGIES";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return "";
	}
	return sVar0;
}

bool func_177(bool bParam0)
{
	if (!aggregate_func_2823(*bParam0, 0))
	{
		return false;
	}
	if (aggregate_func_2852(*bParam0, -2141147161))
	{
		return true;
	}
	if (aggregate_func_2852(*bParam0, -657940588))
	{
		return true;
	}
	else if (aggregate_func_2852(*bParam0, -1197174069))
	{
		return true;
	}
	else if (aggregate_func_2852(*bParam0, -1336773246))
	{
		return true;
	}
	else if (aggregate_func_2852(*bParam0, -698888345))
	{
		return true;
	}
	return false;
}

bool func_178(bool bParam0)
{
	int iVar0;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return false;
	}
	if (!aggregate_func_4673(bParam0))
	{
		return false;
	}
	if (func_93(bParam0))
	{
		return false;
	}
	iVar0 = aggregate_func_2035(bParam0, 1);
	if (!aggregate_func_2891(iVar0))
	{
		return false;
	}
	if (!aggregate_func_2000(iVar0, 205718222))
	{
		return false;
	}
	return true;
}

bool func_179(bool bParam0, var uParam1)
{
	int iVar0;

	if (!func_178(bParam0))
	{
		return false;
	}
	iVar0 = func_204(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	*uParam1 = iVar0;
	return true;
}

char* func_180(bool bParam0)
{
	char* sVar0;

	if (!aggregate_func_2823(*bParam0, 0))
	{
		return "";
	}
	if (!aggregate_func_4673(*bParam0))
	{
		return "";
	}
	if (aggregate_func_2852(*bParam0, 791503389))
	{
		sVar0 = "COUPON_REWARD_LOCATION_COOK";
	}
	else if (aggregate_func_2852(*bParam0, 1678998893))
	{
		sVar0 = "COUPON_REWARD_LOCATION_BUTCHERS_TABLE";
	}
	else if (aggregate_func_2852(*bParam0, 1060967958))
	{
		sVar0 = "COUPON_REWARD_LOCATION_POSSE";
	}
	else if (aggregate_func_2852(*bParam0, -354977419))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OPTIONS";
	}
	else if (aggregate_func_2852(*bParam0, -700325949))
	{
		sVar0 = "COUPON_REWARD_LOCATION_ABILITIES";
	}
	else if (aggregate_func_2852(*bParam0, -462364930))
	{
		sVar0 = "COUPON_REWARD_LOCATION_BOUNTY_BOARD";
	}
	else if (aggregate_func_2852(*bParam0, 769052425))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OUTFITTERS_OR_CRIPPS";
	}
	else if (aggregate_func_2852(*bParam0, 1631625825))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OUTFITTERS";
	}
	else if (aggregate_func_2852(*bParam0, 805642000))
	{
		sVar0 = "COUPON_REWARD_LOCATION_MADAM_NAZAR";
	}
	else if (aggregate_func_2852(*bParam0, -290607961))
	{
		sVar0 = "COUPON_REWARD_LOCATION_REWARD";
	}
	else if (aggregate_func_2852(*bParam0, -13230814))
	{
		sVar0 = "COUPON_REWARD_LOCATION_POST_OFFICE";
	}
	else if (aggregate_func_2852(*bParam0, 1501879121))
	{
		sVar0 = "COUPON_REWARD_LOCATION_OLD_MAN_JONES";
	}
	else if (aggregate_func_2852(*bParam0, -657940588))
	{
		sVar0 = "COUPON_REWARD_LOCATION_CATALOGUE";
	}
	else if (aggregate_func_2852(*bParam0, -1197174069))
	{
		sVar0 = "COUPON_REWARD_LOCATION_TAILOR_STORE_CATALOGUE";
	}
	else if (aggregate_func_2852(*bParam0, 565025927))
	{
		sVar0 = "COUPON_REWARD_LOCATION_GUNSMITH";
	}
	else if (aggregate_func_2852(*bParam0, -1336773246))
	{
		sVar0 = "COUPON_REWARD_LOCATION_GUNSMITH_STORE_CATALOGUE";
	}
	else if (aggregate_func_2852(*bParam0, -698888345))
	{
		sVar0 = "COUPON_REWARD_LOCATION_GUNSMITH_CATALOGUE";
	}
	else if (aggregate_func_2852(*bParam0, 720980519))
	{
		sVar0 = "COUPON_REWARD_LOCATION_CAMP_AND_PROPERTIES";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return "";
	}
	return sVar0;
}

void func_181(char* sParam0)
{
	StringCopy(sParam0, "HO_ITEM_MYSTERY_REWARD_NAME", 128);
	StringCopy(&(sParam0->f_16), "HO_ITEM_MYSTERY_REWARD_DESCRIPTION", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

bool func_182(var uParam0, var uParam1, char[32] cParam2, char[4] cParam10)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	aggregate_func_186(uParam0, *uParam1, cParam2, *cParam10);
	uParam0->f_18[0] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 440050042, cParam10->f_16);
	uParam0->f_18[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 1058850005, cParam10->f_17);
	uParam0->f_18[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -3675574, cParam10->f_18);
	uParam0->f_18[3] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -536627617, cParam10->f_19);
	uParam0->f_18[4] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*uParam0, -242834141, &(cParam10->f_20));
	uParam0->f_18[5] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 1959966745, cParam10->f_36);
	uParam0->f_18[6] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -1952794871, cParam10->f_37);
	uParam0->f_18[7] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -129582355, cParam10->f_38);
	uParam0->f_18[8] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, joaat("enabled"), cParam10->f_39);
	uParam0->f_18[9] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, 1024435631, cParam10->f_40);
	uParam0->f_18[10] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, 596676017, cParam10->f_41);
	uParam0->f_18[11] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -376630643, cParam10->f_58);
	uParam0->f_18[12] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -539230421, cParam10->f_58.f_1);
	uParam0->f_18[13] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -1019689499, cParam10->f_58.f_2);
	uParam0->f_18[14] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -1283381642, cParam10->f_58.f_3);
	uParam0->f_18[15] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*uParam0, -2035241910, &(cParam10->f_42));
	return true;
}

bool func_183(var uParam0, char[4] cParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, aggregate_func_4915(0), *cParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, aggregate_func_4915(1), cParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, aggregate_func_4915(2), cParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, aggregate_func_4915(54), cParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, aggregate_func_4915(57), cParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, aggregate_func_4915(56), cParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*uParam0, aggregate_func_4915(55), cParam1->f_4);
	DATABINDING::_0xA3BD6FF95E713EE5(*uParam0, -2035241910, &(cParam1->f_42));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, aggregate_func_4915(59), cParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*uParam0, aggregate_func_4915(60), cParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 440050042, cParam1->f_16);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 1058850005, cParam1->f_17);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -3675574, cParam1->f_18);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -536627617, cParam1->f_19);
	DATABINDING::_0xA3BD6FF95E713EE5(*uParam0, -242834141, &(cParam1->f_20));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 1959966745, cParam1->f_36);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -1952794871, cParam1->f_37);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, -129582355, cParam1->f_38);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, joaat("enabled"), cParam1->f_39);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 1024435631, cParam1->f_40);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 596676017, cParam1->f_41);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -376630643, cParam1->f_58);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -539230421, cParam1->f_58.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1019689499, cParam1->f_58.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -1283381642, cParam1->f_58.f_3);
	return true;
}

bool func_201(bool bParam0, var uParam1)
{
	char cVar0[128];
	struct<19> Var16;
	int iVar51;
	int iVar52;
	char cVar53[128];

	if (!aggregate_func_2823(*bParam0, 0))
	{
		return false;
	}
	if (!aggregate_func_4379(*bParam0))
	{
		return false;
	}
	Var16.f_2 = 5;
	Var16.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(*bParam0, &Var16))
	{
		iVar51 = 0;
		while (iVar51 < 8)
		{
			if ((Var16.f_18[iVar51 /*2*/])->f_1 != 14460646)
			{
			}
			else
			{
				if (&Var16.f_18[iVar51 /*2*/] != 0)
				{
					StringCopy(&cVar0, HUD::_GET_LABEL_TEXT_BY_HASH(&(Var16.f_18[iVar51 /*2*/])), 128);
				}
			}
			else
			{
				iVar51++;
			}
		}
	}
	else
	{
		return false;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringConCat(&cVar0, " - ", 128);
	}
	iVar52 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0);
	StringCopy(&cVar53, HUD::_GET_LABEL_TEXT_BY_HASH(*bParam0), 128);
	iVar52 = (iVar52 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar53));
	if (iVar52 >= 127)
	{
		*uParam1 = { cVar53 };
		return true;
	}
	StringConCat(&cVar0, &cVar53, 128);
	*uParam1 = { cVar0 };
	return true;
}

int func_203(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(uParam0->f_1);
	iVar1 = MISC::GET_HASH_KEY(*uParam0);
	if (!TXD::_0xBA0163B277C2D2D0(iVar0))
	{
		return 0;
	}
	if (!bParam3)
	{
		if (TXD::_0xBE72591D1509FFE4(iVar0))
		{
			if (!GRAPHICS::_0xA2A51869BDED733B(iVar0, iVar1))
			{
				return 0;
			}
		}
	}
	*uParam1 = iVar0;
	*uParam2 = iVar1;
	return 1;
}

int func_204(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!aggregate_func_2823(bParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if ((Var0.f_18[iVar35 /*2*/])->f_1 == 1646708583)
			{
				if (&Var0.f_18[iVar35 /*2*/] != 0)
				{
					return &(Var0.f_18[iVar35 /*2*/]);
				}
			}
			iVar35++;
		}
	}
	return 0;
}

