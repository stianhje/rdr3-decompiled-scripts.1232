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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	sLocal_21 = "props_misc@campfires@5_logs";
	sLocal_22 = "Script_PropCampfire";
	aggregate_func_1839();
	while (!aggregate_func_523(0, 0))
	{
		func_3(Global_1129899, Global_1129907, Global_1129901, Global_1130292);
		BUILTIN::WAIT(0);
	}
	aggregate_func_4288(Global_1129899, Global_1129907, Global_1129901);
	aggregate_func_2819();
}

int func_3(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_11(uParam0, uParam1, uParam2);
	}
	func_12(uParam0, uParam1, uParam2, uParam3);
	func_13(uParam0, uParam1, uParam2, uParam3);
	func_14(uParam0, uParam1, uParam2, uParam3);
	return 1;
}

void func_9()
{
	aggregate_func_7248(Global_1129899);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(Global_1129899, 2, 46);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(Global_1129899), 2, "g_mpNetCampDogManagerHost");
	aggregate_func_7758(Global_1129907);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(Global_1129907, 385, 47);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2((*Global_1129907)[0 /*12*/]), 385, "g_mpNetCampDogManagerPlayer");
	func_21(Global_1129901);
}

void func_11(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = aggregate_func_9015(*uParam0);
	switch (iVar0)
	{
		case 0:
			aggregate_func_4252(uParam0, 1);
			break;
		case 1:
			break;
		case 2:
			aggregate_func_4252(uParam0, 3);
			break;
		case 3:
			break;
	}
}

int func_12(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	iVar2 = func_24(*((*uParam1)[iVar1 /*12*/]));
	switch (iVar2)
	{
		case 0:
			func_25((*uParam1)[iVar1 /*12*/]);
			func_26((*uParam1)[iVar1 /*12*/]);
			aggregate_func_4252((*uParam1)[iVar1 /*12*/], 1);
		case 1:
			iVar3 = func_28(uParam0, uParam1, uParam2, uParam3);
			if (iVar3 != iVar2)
			{
				aggregate_func_4252((*uParam1)[iVar1 /*12*/], iVar3);
			}
			break;
	}
	return 0;
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = 1;
	iVar1 = func_29(*uParam2);
	switch (iVar1)
	{
		case 0:
			if (func_30(uParam0, uParam1, uParam2))
			{
				aggregate_func_4252(uParam2, 1);
			}
			break;
		case 1:
			bVar2 = true;
			if (bVar2)
			{
				if (!aggregate_func_4244())
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				if (!func_33(uParam2))
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				if (!func_34(uParam0, uParam1, uParam2))
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				aggregate_func_4252(uParam2, 2);
			}
			break;
		case 2:
			if (func_35(uParam0, uParam1, uParam2))
			{
				aggregate_func_4252(uParam2, 3);
			}
			break;
		case 3:
			if (func_36(uParam0, uParam1, uParam2))
			{
				aggregate_func_4252(uParam2, 4);
			}
			break;
		case 4:
			if (func_37(uParam0, uParam1, uParam2))
			{
				aggregate_func_4252(uParam2, 5);
			}
			break;
		case 5:
			iVar3 = func_38(uParam0, uParam1, uParam2);
			if (iVar3 == 1)
			{
				aggregate_func_4252(uParam2, 0);
			}
			else if (iVar3 == 2)
			{
				aggregate_func_4252(uParam2, 6);
			}
			break;
		case 6:
			if (aggregate_func_6717(uParam0, uParam1, uParam2))
			{
				aggregate_func_4252(uParam2, 1);
			}
			break;
		case 7:
			break;
	}
	return iVar0;
}

void func_14(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_40(uParam0, uParam1, uParam2, uParam3, iVar0);
				break;
		}
		iVar0++;
	}
}

void func_21(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

int func_24(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	return uParam0;
}

void func_25(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_10 = 0;
}

void func_26(var uParam0)
{
	bool bVar0;
	int iVar1;
	struct<8> Var2;
	bool bVar10;

	bVar0 = func_41();
	iVar1 = func_42();
	aggregate_func_4242(uParam0, bVar0);
	if (func_44(&Var2))
	{
		aggregate_func_7588(uParam0, Var2);
		func_46(PLAYER::PLAYER_ID(), Var2);
	}
	bVar10 = false;
	if (aggregate_func_2823(bVar0, 0))
	{
		if (bVar0 == iVar1)
		{
			bVar10 = true;
		}
	}
	if (bVar10)
	{
		aggregate_func_7773(uParam0, 0);
	}
	else
	{
		aggregate_func_8309(uParam0, 0);
	}
}

int func_28(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	func_50((*uParam1)[iVar1 /*12*/], uParam3);
	func_51((*uParam1)[iVar1 /*12*/], uParam2);
	func_52((*uParam1)[iVar1 /*12*/], uParam2);
	return 1;
}

int func_29(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	return uParam0;
}

bool func_30(var uParam0, var uParam1, var uParam2)
{
	Global_1129901->f_5 = 0;
	return true;
}

bool func_33(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	switch (uParam0->f_4)
	{
		case 1:
			iVar0 = 1;
			break;
	}
	iVar1 = uParam0->f_4;
	iVar1++;
	if (iVar1 >= 10)
	{
		uParam0->f_4 = 0;
	}
	else
	{
		uParam0->f_4 = iVar1;
	}
	return iVar0;
}

bool func_34(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_53(uParam0, uParam1, uParam2, &uVar0))
	{
		return false;
	}
	uParam2->f_1 = uVar0;
	return true;
}

bool func_35(var uParam0, var uParam1, var uParam2)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(func_54()))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(func_54());
	return true;
}

bool func_36(var uParam0, var uParam1, var uParam2)
{
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_54()))
	{
		SCRIPTS::REQUEST_SCRIPT(func_54());
		return false;
	}
	return true;
}

bool func_37(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = uParam2->f_1;
	iVar1 = iVar0;
	func_55(&vVar2);
	vVar2.x = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	vVar2.f_1 = iVar0;
	vVar2.f_2 = ((*uParam1)[iVar1 /*12*/])->f_1;
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(600) <= 0)
	{
		return false;
	}
	Global_1129901->f_2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_54(), &vVar2, 3, 600);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_54());
	return true;
}

int func_38(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_54(), iVar1, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_40(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam4, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 11:
			func_56(iParam4);
			break;
	}
}

int func_41()
{
	struct<4> Var0;
	int iVar4;

	Var0 = { aggregate_func_2828(-1838434463 /* GXTEntry: "Camp" */, aggregate_func_1967(0), 1084182731, 1) };
	iVar4 = aggregate_func_4274(Var0, -1911121386, 0, 1);
	return iVar4;
}

int func_42()
{
	struct<4> Var0;
	int iVar4;

	Var0 = { aggregate_func_2828(-1838434463 /* GXTEntry: "Camp" */, aggregate_func_1967(0), 1084182731, 1) };
	iVar4 = aggregate_func_4299(Var0, -1911121386, 1, -1);
	return iVar4;
}

bool func_44(var uParam0)
{
	struct<15> Var0;

	Var0.f_9 = -1591664384;
	if (!func_61(&Var0))
	{
		return false;
	}
	*uParam0 = { Var0.f_14 };
	return true;
}

void func_46(int iParam0, struct<8> Param1)
{
	struct<20> Var0;

	Var0.f_4 = 1;
	Var0.f_8 = { Param1 };
	Var0.f_7 = iParam0;
	func_63(Var0, aggregate_func_4507(0, 8));
}

void func_50(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = aggregate_func_7770(uParam0, 1);
	bVar1 = func_68(uParam1, 0);
	if (bVar0 != bVar1)
	{
		if (bVar1)
		{
			aggregate_func_7773(uParam0, 1);
		}
		else
		{
			aggregate_func_8309(uParam0, 1);
		}
	}
}

void func_51(var uParam0, var uParam1)
{
	if (!aggregate_func_7770(uParam1, 0))
	{
		return;
	}
	func_26(uParam0);
	aggregate_func_8309(uParam1, 0);
}

void func_52(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = aggregate_func_3639(1884341302, PLAYER::PLAYER_ID(), 0, 1);
	if (!aggregate_func_5461(iVar0))
	{
		aggregate_func_8309(uParam0, 2);
		aggregate_func_8309(uParam0, 3);
		aggregate_func_8309(uParam0, 4);
		return;
	}
	bVar1 = aggregate_func_7982(iVar0, 1);
	bVar2 = aggregate_func_3516(iVar0, 16, 255);
	bVar3 = aggregate_func_3516(iVar0, 32, 255);
	if (bVar1 && !bVar2)
	{
		aggregate_func_7773(uParam0, 2);
	}
	else
	{
		aggregate_func_8309(uParam0, 2);
	}
	if (bVar1 && (bVar2 || bVar3))
	{
		aggregate_func_7773(uParam0, 4);
	}
	else
	{
		aggregate_func_8309(uParam0, 4);
	}
	if (!bVar1)
	{
		aggregate_func_8309(uParam0, 3);
	}
}

bool func_53(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!aggregate_func_1009(iVar2, 0, 1))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (!_NAMESPACE26::_0x424B17A7DC5C90BC(iVar0))
			{
			}
			else if (!func_76(uParam0, uParam1, uParam2, iVar0))
			{
			}
			else
			{
				*uParam3 = iVar0;
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

char* func_54()
{
	return "net_camp_dog";
}

void func_55(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 255;
	uParam0->f_2 = 0;
}

void func_56(int iParam0)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 20))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

bool func_61(int iParam0)
{
	bool bVar0;
	struct<4> Var1;
	struct<4> Var5;
	int iVar9;
	struct<4> Var10;
	struct<10> Var14;

	bVar0 = func_42();
	if (!aggregate_func_2823(bVar0, 0))
	{
		return false;
	}
	Var1 = { aggregate_func_1967(1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var1))
	{
		return false;
	}
	Var5 = { aggregate_func_2828(-1838434463 /* GXTEntry: "Camp" */, Var1, 1084182731, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return false;
	}
	iVar9 = aggregate_func_1499(1);
	Var10 = { aggregate_func_2828(bVar0, Var5, -1911121386, 1) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var5))
	{
		return false;
	}
	Var14.f_9 = -1591664384;
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar9, &Var10, &Var14, 22, 1))
	{
		return false;
	}
	MISC::_COPY_MEMORY(iParam0, &Var14, 22);
	return true;
}

void func_63(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam20))
	{
		return;
	}
	vParam0.x = 11;
	vParam0.f_1 = iVar0;
	vParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &vParam0, 20, 6, &uParam20);
}

int func_68(var uParam0, int iParam1)
{
	if (aggregate_func_2923(*uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_76(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar9;
	var uVar10;
	vector3 vVar11;
	var uVar14;
	bool bVar15;

	iVar0 = iParam3;
	bVar1 = aggregate_func_4287((*uParam1)[iVar0 /*12*/]);
	if (!aggregate_func_2823(bVar1, 0))
	{
		return false;
	}
	if (!aggregate_func_7770((*uParam1)[iVar0 /*12*/], 0))
	{
		return false;
	}
	if (aggregate_func_7770((*uParam1)[iVar0 /*12*/], 1))
	{
		return false;
	}
	iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iParam3);
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_54(), iVar2, true, 0))
	{
		return false;
	}
	iVar3 = PLAYER::PLAYER_ID();
	iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
	bVar9 = false;
	if (aggregate_func_7770((*uParam1)[iVar0 /*12*/], 2) && !aggregate_func_7770((*uParam1)[iVar0 /*12*/], 3))
	{
		bVar9 = true;
	}
	if (bVar9)
	{
		if (iVar0 == iVar5)
		{
			bVar9 = true;
		}
		else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iParam3, func_54(), iVar2))
		{
			bVar9 = true;
		}
	}
	else
	{
		bVar15 = func_85(iParam3, &uVar10, &vVar11, &uVar14);
		if (!bVar15)
		{
			return false;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar6, vVar11, true) > 100f)
		{
			return false;
		}
	}
	return true;
}

int func_85(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_93(iParam0, &iVar0))
	{
		return 0;
	}
	if (!TASK::_0x841475AC96E794D1(iVar0))
	{
	}
	*uParam1 = iVar0;
	*uParam2 = { TASK::_0xA8452DD321607029(*uParam1, 1) };
	*uParam3 = TASK::_0xB93EA7184BAA85C3(*uParam1, 1);
	return 1;
}

bool func_93(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!aggregate_func_4038(iParam0, &vVar0))
	{
		return false;
	}
	if (aggregate_func_4268(vVar0))
	{
		return false;
	}
	iVar3 = TASK::_0xF533D68FF970D190(vVar0, 1579036847, 5.5f, 0, 0);
	if (TASK::_0x841475AC96E794D1(iVar3))
	{
		*iParam1 = iVar3;
		return true;
	}
	return false;
}

