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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 2;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
#endregion

// __EntryFunction__ == hub.__EntryFunction__

bool func_1(var uParam0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		return false;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	aggregate.camera_item.func_77(&uLocal_21, 0);
	func_5(uParam0);
	return true;
}

void func_2(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	while (!bVar0)
	{
		if (func_6(uParam0))
		{
			bVar0 = true;
		}
		func_7(uParam0);
		func_8(uParam0);
		func_9(uParam0);
		BUILTIN::WAIT(0);
	}
}

void func_3(var uParam0)
{
	func_10(uParam0);
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_11(iVar2, 1);
		if (!func_12(uParam0, iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

bool func_6(var uParam0)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return true;
	}
	return false;
}

void func_7(var uParam0)
{
	var uVar0;

	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(1692899894))
	{
		if (!UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(1692899894, &uVar0))
		{
		}
		else
		{
			func_13(uParam0, &uVar0);
			UIEVENTS::_EVENT_MANAGER_POP_EVENT(1692899894);
		}
	}
}

void func_8(var uParam0)
{
	bool bVar0;

	if (aggregate.fishing_core.func_34(uParam0, 1))
	{
		func_15(uParam0, 1, 0);
	}
	if (!UIAPPS::_IS_APP_ACTIVE(1890312850))
	{
		return;
	}
	bVar0 = UIAPPS::_IS_APP_RUNNING(1890312850);
	if (*uParam0 != bVar0)
	{
		*uParam0 = bVar0;
		if (bVar0)
		{
			func_15(uParam0, 1, 1);
		}
	}
}

void func_9(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UIAPPS::_0x96FD694FE5BE55DC(1890312850);
	iVar1 = aggregate.hub.func_16(uParam0);
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			aggregate.hub.func_17(uParam0, iVar1);
		}
		aggregate.camera_item.func_77(uParam0, iVar0);
		aggregate.hub.func_17(uParam0, iVar0);
	}
	aggregate.hub.func_17(uParam0, iVar0);
}

int func_10(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_11(iVar2, 1);
		aggregate.hub.func_17(uParam0, iVar1);
		iVar2++;
	}
	return 1;
}

int func_11(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1890312850;
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

bool func_12(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1890312850:
			return func_21(uParam0);
	}
	return false;
}

void func_13(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case -1203660660:
			func_22(uParam0, uParam1);
			break;
	}
}

void func_15(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		aggregate.fme_round_up.func_1144(&(uParam0->f_1), iParam1);
	}
	else
	{
		aggregate.fme_round_up.func_1140(&(uParam0->f_1), iParam1);
	}
}

int func_21(var uParam0)
{
	if (!func_30(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_22(var uParam0, var uParam1)
{
	switch (uParam1->f_2)
	{
		case 1907521504:
			func_31(1667056592);
			aggregate.hub.func_32(-1159030220);
			aggregate.camera_item.func_77(uParam0, Global_1273882->f_21);
			break;
	}
}

void func_26(var uParam0)
{
	func_31(1667056592);
}

int func_27(var uParam0)
{
	func_34(uParam0);
	func_15(uParam0, 0, 1);
	aggregate.camera_item.func_77(&(uParam0->f_6), 2000);
	func_36(1667056592);
	return 1;
}

void func_28(var uParam0)
{
	if (MISC::ABSI((Global_1273882->f_21 - aggregate.camera_item.func_12(uParam0))) > 3)
	{
		if (Global_1958299->f_2 == -1)
		{
			func_36(1667056592);
		}
	}
	if (func_38(&(uParam0->f_6)))
	{
		func_15(uParam0, 0, 1);
	}
	if (aggregate.fishing_core.func_34(uParam0, 1))
	{
		func_15(uParam0, 0, 1);
	}
	if (aggregate.fishing_core.func_34(uParam0, 0))
	{
		func_39(uParam0);
		func_15(uParam0, 0, 0);
	}
}

bool func_30(var uParam0)
{
	uParam0->f_3[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", -2057449687);
	uParam0->f_3[1] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(&(uParam0->f_3[0]), -1963454052);
	return true;
}

void func_31(int iParam0)
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
	aggregate.coffee_drinking.func_129(Global_1958299);
}

int func_34(var uParam0)
{
	if (!func_41(uParam0->f_3[1]))
	{
		return 0;
	}
	return 1;
}

void func_36(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1958299->f_2 != -1 && Global_1958299->f_2 != iParam0)
	{
		func_31(Global_1958299->f_2);
	}
	Global_1958299->f_1 = Global_1273882->f_21;
	Global_1958299->f_2 = iParam0;
}

bool func_38(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
		if (aggregate.barcustomer_interaction.func_42(uParam0))
		{
			aggregate.barcustomer_interaction.func_50(uParam0);
		}
		return false;
	}
	if (!aggregate.barcustomer_interaction.func_42(uParam0))
	{
		aggregate.barcustomer_interaction.func_25(uParam0, 1);
		return true;
	}
	if (!aggregate.camera_item.func_51(uParam0) >= uParam0->f_3)
	{
		return false;
	}
	aggregate.barcustomer_interaction.func_43(uParam0);
	return true;
}

void func_39(var uParam0)
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
		if (!INVENTORY::_0x82FA24C3D3FCD9B7(iVar1, iVar16, &Var2))
		{
		}
		iVar18 = Var2.f_11;
		if (!aggregate.doc_book.func_308(&Var2))
		{
		}
		else if (!func_48(Var2.f_9))
		{
		}
		else
		{
			iVar19 = 0;
			while (iVar19 < iVar18)
			{
				if (!func_49(uParam0, &Var2, iVar17))
				{
				}
				else
				{
					iVar17++;
					if (iVar17 >= 6)
					{
					}
					else
					{
						iVar19++;
					}
					if (iVar17 >= 6)
					{
					}
					else
					{
						iVar16++;
					}
					INVENTORY::_0x42A2F33A1942E865(iVar1);
					if (iVar17 == 0)
					{
						if (func_50(uParam0, -1))
						{
							iVar17++;
						}
					}
					func_51(uParam0, iVar17);
				}
			}
		}
	}
}

bool func_41(var uParam0)
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

bool func_48(int iParam0)
{
	if (iParam0 == 1045621973)
	{
		return false;
	}
	return true;
}

bool func_49(var uParam0, var uParam1, int iParam2)
{
	struct<10> Var0;
	var uVar14;

	Var0.f_9 = -1591664384;
	aggregate.bandana.func_66(*uParam1, &Var0, 1, 0, -1);
	if (!aggregate.bandana.func_30(Var0.f_4, 0))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_1719(Var0.f_4))
	{
		if (!func_59(uParam1, &uVar14))
		{
			return false;
		}
	}
	else if (aggregate.fme_animal_tagging.func_1718(Var0.f_4))
	{
		if (!func_61(uParam1, &uVar14))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (!func_62(uParam0, &uVar14, iParam2))
	{
		return false;
	}
	return true;
}

bool func_50(var uParam0, int iParam1)
{
	struct<34> Var0;
	struct<2> Var36;

	func_63(&Var0);
	Var36 = Var0.f_32;
	Var36.f_1 = Var0.f_33;
	if (!func_62(uParam0, &Var36, iParam1))
	{
		return false;
	}
	return true;
}

int func_51(var uParam0, int iParam1)
{
	if (!func_64(uParam0->f_3[1], iParam1))
	{
		return 0;
	}
	return 1;
}

bool func_59(var uParam0, var uParam1)
{
	var uVar0;

	if (!func_70(uParam0, &uVar0))
	{
		return false;
	}
	if (!func_71(uParam0, uParam1))
	{
		return false;
	}
	return true;
}

bool func_61(var uParam0, var uParam1)
{
	bool bVar0;
	struct<34> Var1;

	if (!func_70(uParam0, &bVar0))
	{
		return false;
	}
	if (!func_71(uParam0, uParam1))
	{
		return false;
	}
	if (func_72(bVar0))
	{
		func_73(&Var1);
		uParam1->f_1 = Var1.f_33;
		*uParam1 = Var1.f_32;
		uParam1->f_2 = 1;
	}
	return true;
}

bool func_62(var uParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	var uVar9[6];
	var uVar16;

	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(&(uParam0->f_3[1])))
	{
		return false;
	}
	if (iParam2 < -1)
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(&(uParam0->f_3[1]));
	if (iParam2 == -1 || iParam2 >= iVar0)
	{
		StringCopy(&cVar1, "offer_item_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		if (!func_74(&uVar9, uParam0->f_3[1], cVar1, cParam1))
		{
			return false;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(&(uParam0->f_3[1]), -1, "coupon_small_entry", &(uVar9[0]));
	}
	else
	{
		if (!func_75(uParam0, iParam2, &uVar16))
		{
			return false;
		}
		if (!func_76(&uVar16, cParam1))
		{
			return false;
		}
	}
	return true;
}

void func_63(char* sParam0)
{
	StringCopy(sParam0, "COUPON_OFFER_NO_VALUE", 128);
	StringCopy(&(sParam0->f_16), "COUPON_OFFER_NO_VALUE_DESC", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

bool func_64(var uParam0, int iParam1)
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

int func_68(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = aggregate.bandana.func_72(bParam2);
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(iParam4, uParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_70(var uParam0, var uParam1)
{
	struct<10> Var0;

	*uParam1 = 0;
	if (!aggregate.doc_book.func_308(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!aggregate.bandana.func_66(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!aggregate.bandana.func_30(Var0.f_4, 0))
	{
		return false;
	}
	if (!aggregate.doc_book.func_272(Var0.f_4))
	{
		return false;
	}
	*uParam1 = Var0.f_4;
	return true;
}

bool func_71(var uParam0, var uParam1)
{
	var uVar0;
	struct<733> Var1;
	int iVar768;

	if (!func_70(uParam0, &uVar0))
	{
		return false;
	}
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
	if (!ITEMDATABASE::_0x2A610BEE7D341CC4(uVar0, &Var1))
	{
		return false;
	}
	iVar768 = 0;
	while (iVar768 < 5)
	{
		switch ((Var1.f_732.f_2[iVar768 /*3*/])->f_2)
		{
			case -774197843:
				func_79(Var1.f_732.f_2[iVar768 /*3*/], &(uParam1->f_1), uParam1, 1);
				break;
		}
		iVar768++;
	}
	if (aggregate.aberdeenpigfarm.func_130(uParam0))
	{
		uParam1->f_2 = 0;
	}
	else
	{
		uParam1->f_2 = 1;
		if (func_81(uParam0))
		{
			uParam1->f_3 = 1;
		}
		else if (aggregate.hub.func_82(*uParam0))
		{
			uParam1->f_4 = 1;
		}
	}
	return true;
}

bool func_72(bool bParam0)
{
	int iVar0;

	if (!aggregate.bandana.func_30(bParam0, 0))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_1718(bParam0))
	{
		return false;
	}
	if (!aggregate.bandana.func_11(bParam0, MISC::GET_HASH_KEY("CI_TAG_OFFER_MYSTERY")))
	{
		return false;
	}
	iVar0 = aggregate.fme_animal_tagging.func_1527(bParam0, 1);
	if (iVar0 != 0)
	{
		return false;
	}
	return true;
}

void func_73(char* sParam0)
{
	StringCopy(sParam0, "HO_ITEM_MYSTERY_REWARD_NAME", 128);
	StringCopy(&(sParam0->f_16), "HO_ITEM_MYSTERY_REWARD_DESCRIPTION", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

bool func_74(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, var uParam10)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam1))
	{
		return false;
	}
	(*uParam0)[0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, &cParam2);
	(*uParam0)[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0[0], 440050042, *uParam10);
	(*uParam0)[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0[0], 1058850005, uParam10->f_1);
	(*uParam0)[3] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0[0], joaat("enabled"), uParam10->f_2);
	(*uParam0)[4] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0[0], 1024435631, uParam10->f_3);
	(*uParam0)[5] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0[0], 596676017, uParam10->f_4);
	return true;
}

bool func_75(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(&(uParam0->f_3[1]));
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(&(uParam0->f_3[1]), iParam1);
	return true;
}

bool func_76(var uParam0, char[4] cParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(*uParam0))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 440050042, *cParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 1058850005, cParam1->f_1);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, joaat("enabled"), cParam1->f_2);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 1024435631, cParam1->f_3);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 596676017, cParam1->f_4);
	return true;
}

int func_79(var uParam0, var uParam1, var uParam2, bool bParam3)
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

bool func_81(var uParam0)
{
	struct<10> Var0;

	if (!aggregate.doc_book.func_308(uParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!aggregate.bandana.func_66(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!aggregate.bandana.func_30(Var0.f_4, 0))
	{
		return false;
	}
	return aggregate.hub.func_87(Var0.f_4);
}

