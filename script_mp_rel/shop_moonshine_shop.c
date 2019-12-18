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
	struct<400> Local_23 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0 } ;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == aggregate_func_14

void func_18(var uParam0)
{
	if (aggregate_func_7561(1) != 3)
	{
		aggregate_func_6225(uParam0, 9);
	}
}

bool func_37(var uParam0)
{
	HUD::_TEXT_DATABASE_REQUEST("SHOP");
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("SHOP"))
	{
		return false;
	}
	return true;
}

void func_41(var uParam0)
{
	aggregate_func_6708(uParam0, 0, 61365, 61834, 61997, 62103);
	aggregate_func_4358(uParam0, 62233);
	aggregate_func_4358(uParam0, 62918);
	aggregate_func_4358(uParam0, 62985);
	aggregate_func_4358(uParam0, 63064);
	aggregate_func_7000(uParam0, 0, 63587);
}

void func_90(var uParam0, bool bParam1)
{
	if (aggregate_func_2875(&(uParam0->f_21[0 /*8*/])))
	{
		if (aggregate_func_1702(&(uParam0->f_21[0 /*8*/]), 1) > 0.1f)
		{
			Global_1274951->f_40 = 1;
		}
		else
		{
			Global_1274951->f_40 = 0;
		}
	}
	if (aggregate_func_724(PLAYER::GET_PLAYER_INDEX(), &(Global_1051387->f_3222[uParam0->f_4 /*2*/])))
	{
		if (!aggregate_func_7689(64) && aggregate_func_9692())
		{
			aggregate_func_4322(905, 1);
			func_381(64);
		}
	}
	else if (aggregate_func_7689(64))
	{
		func_382(64);
	}
}

void func_122(var uParam0)
{
	func_465(&(Local_23.f_34));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("swatches_camp_mp");
	Local_23.f_28 = 0;
	Local_23.f_29 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2075))
	{
		ENTITY::DELETE_ENTITY(&(uParam0->f_2075));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_8))
	{
		OBJECT::DELETE_OBJECT(&(Local_23.f_8));
	}
	Local_23 = 0;
	Local_23.f_27 = 0;
	uParam0->f_2073 = 0;
	ENTITY::_0x0939E773925C4719();
	if (Local_23.f_19)
	{
		if (Local_23.f_397 != ((*Global_1275475)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_5.f_11)
		{
			aggregate_func_1962(aggregate_func_4257(1137323725, -660280833), 1);
		}
		else if (Local_23.f_398 != Local_23.f_399)
		{
			aggregate_func_1962(aggregate_func_4257(1137323725, -660280833), 1);
		}
		func_466(Local_23.f_397);
		Local_23.f_19 = 0;
	}
	aggregate_func_7977(aggregate_func_995(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())), 2);
	func_469(Local_23.f_33, 0);
	if (!Local_23.f_21 && ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		ENTITY::SET_ENTITY_HEADING(Global_35, Local_23.f_32);
		aggregate_func_2444(0f, -4f);
		Local_23.f_21 = 1;
	}
	func_471();
	AUDIO::_0x9428447DED71FC7E("shop_scenes");
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
	}
	aggregate_func_588(1, 0);
	if (aggregate_func_7100(512))
	{
		aggregate_func_6502(512);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
	}
	Local_23.f_34.f_6.f_11 = 0;
	Local_23.f_21 = 0;
}

bool func_317(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	bool bVar0;

	if (aggregate_func_4268(vParam3))
	{
		return false;
	}
	if (aggregate_func_4268(vParam6))
	{
		return false;
	}
	if (!TASK::_0x841475AC96E794D1(iParam11))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam9))
	{
		return false;
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1748) && (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1748, 0) || ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1748, 1, 0)))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1748, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(uParam0->f_1749) && (ANIMSCENE::_0x95531A4A20CCE7BC(uParam0->f_1749, 0) || ANIMSCENE::_0x477122B8D05E7968(uParam0->f_1749, 1, 0)))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_1749, 0);
	}
	bVar0 = (MISC::IS_ORBIS_VERSION() && aggregate_func_6463(iParam2));
	if (iParam1 == 6 || iParam1 == 48)
	{
		bVar0 = false;
	}
	if (bVar0 && aggregate_func_3214(aggregate_func_6464(iParam2)))
	{
		if (!func_750(&(uParam0->f_4), iParam1, iParam2, aggregate_func_6464(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_751(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate_func_4242(&(uParam0->f_4), 139697);
	aggregate_func_4242(&(uParam0->f_4), 139734);
	aggregate_func_4932(&(uParam0->f_4), 139762);
	aggregate_func_4932(&(uParam0->f_4), 140297);
	uParam0->f_1746 = iParam1;
	uParam0->f_1747 = iParam2;
	uParam0->f_1776 = iParam10;
	uParam0->f_1777 = iParam11;
	uParam0->f_1751 = { vParam3 };
	uParam0->f_1754 = { vParam6 };
	uParam0->f_1768 = iParam9;
	aggregate_func_4750(uParam0, 1);
	return true;
}

bool func_333(var uParam0)
{
	bool bVar0;

	aggregate_func_1925();
	if (ENTITY::DOES_ENTITY_EXIST(aggregate_func_4270(Local_23.f_34.f_6.f_21)) && !ENTITY::IS_ENTITY_VISIBLE(aggregate_func_4270(Local_23.f_34.f_6.f_21)))
	{
	}
	if (!aggregate_func_7100(4))
	{
		aggregate_func_588(1, 1);
		return false;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, 0);
	if (!func_771(&(Local_23.f_34)))
	{
		return false;
	}
	if (!func_772(&(Local_23.f_34)))
	{
		return false;
	}
	if (!aggregate_func_7100(512))
	{
		aggregate_func_6502(512);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_34.f_6.f_21) && !ENTITY::IS_ENTITY_VISIBLE(Local_23.f_34.f_6.f_21))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_23.f_34.f_6.f_21, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35) && ENTITY::IS_ENTITY_VISIBLE(Global_35))
	{
		TASK::CLEAR_PED_TASKS(Global_35, 1, 0);
		ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
	}
	Local_23.f_32 = aggregate_func_3570(Local_23.f_34.f_152, Global_36);
	TXD::REQUEST_STREAMED_TEXTURE_DICT("swatches_camp_mp", false);
	func_381(1);
	if (!PLAYER::_0x354F689C4FFAAB37(PLAYER::_0x8E84119A23C16623(-254133531, 0, 0)))
	{
		PLAYER::_0x7C32191D9FB2BDEA(PLAYER::_0x8E84119A23C16623(-254133531, 0, 0));
	}
	bVar0 = aggregate_func_1136(1701457723, 1, 0, 0);
	if (bVar0 > 0)
	{
		func_381(128);
	}
	bVar0 = aggregate_func_1136(963726415, 1, 0, 0);
	if (bVar0 > 0)
	{
		func_381(256);
	}
	AUDIO::_0x6339C1EA3979B5F7("shop_maggie", "shop_scenes");
	Local_23.f_398 = func_775();
	Local_23.f_399 = Local_23.f_398;
	Local_23.f_397 = ((*Global_1275475)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*86*/])->f_5.f_11;
	Local_23.f_33 = aggregate_func_3450(aggregate_func_5163(), 1);
	Local_23.f_20 = aggregate_func_5163() == PLAYER::PLAYER_ID();
	PED::_0xED9582B3DA8F02B4(1);
	if (Local_23.f_20)
	{
		return func_778(uParam0, -1023568458, joaat("use"), 0);
	}
	return func_778(uParam0, -1516258184, joaat("use"), 0);
}

int func_334(var uParam0)
{
	bool bVar0;
	bool bVar1;

	aggregate_func_1925();
	aggregate_func_1926(1);
	bVar0 = true;
	if (!aggregate_func_7689(4))
	{
		bVar1 = true;
		if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("swatches_camp_mp"))
		{
			bVar1 = false;
		}
		if (!aggregate_func_951(uParam0))
		{
			bVar1 = false;
		}
		if (!bVar1)
		{
			uParam0->f_6++;
			if (uParam0->f_6 > 500)
			{
				bVar0 = false;
				return 1;
			}
		}
		else
		{
			func_381(4);
		}
	}
	if (!aggregate_func_7689(8) && bVar0)
	{
		func_381(8);
	}
	if ((!aggregate_func_7689(4) || !aggregate_func_7689(8)) || PED::_0x5C16855277819BBF() < 1)
	{
		return 0;
	}
	return 1;
}

bool func_335(var uParam0)
{
	aggregate_func_1925();
	if (!uParam0->f_2094.f_47)
	{
		return false;
	}
	if (!Local_23.f_22)
	{
		func_781(13, 1);
		Local_23.f_22 = 1;
	}
	else if (func_782())
	{
	}
	if (aggregate_func_7689(16))
	{
		if (func_784(&(Local_23.f_9), aggregate_func_5076(), Local_23.f_33))
		{
			func_382(16);
		}
	}
	func_785(&(Local_23.f_34));
	return aggregate_func_105(uParam0);
}

void func_336(var uParam0)
{
	if (aggregate_func_4260(&(Local_23.f_11)))
	{
		aggregate_func_4957(&(Local_23.f_11));
	}
	PED::_0x7D4E70A67A651C71(1);
	func_471();
	aggregate_func_1201(uParam0);
}

int func_338(var uParam0, var uParam1)
{
	if (!Local_23.f_34.f_6.f_10)
	{
		Local_23.f_34.f_6.f_10 = 1;
	}
	if (!aggregate_func_2823(uParam1->f_9, 0))
	{
		return 0;
	}
	if (!aggregate_func_6297(uParam1->f_9, aggregate_func_5845(uParam1->f_9), 1))
	{
		if (aggregate_func_5119(uParam1->f_9, 1) && aggregate_func_2000(aggregate_func_6301(uParam1->f_9, 1), -2141192156))
		{
		}
		else if (!aggregate_func_681(uParam0, uParam1->f_9, -384358143))
		{
			func_781(9, 0);
		}
	}
	if (uParam1->f_9 != func_793(aggregate_func_5076()))
	{
		func_794(&(Local_23.f_9));
		switch (uParam1->f_9)
		{
			case -1334222892:
				aggregate_func_4714(-339710534);
				func_381(16);
				break;
			case -1609310766:
				aggregate_func_4714(129377429);
				func_381(16);
				break;
			case -660379727:
				aggregate_func_4714(1404043335);
				func_381(16);
				break;
			case 729277565:
				aggregate_func_4714(1751195064);
				func_381(16);
				break;
			case -1262899184:
				aggregate_func_4714(-1699850536);
				func_381(16);
				break;
			case -1647055373:
				aggregate_func_4714(0);
				break;
			case 1612330162:
				aggregate_func_4714(-1464680957);
				func_381(16);
				break;
			case -1832936964:
				aggregate_func_4714(-1233266567);
				func_381(16);
				break;
			case -998343303:
				aggregate_func_4714(581482573);
				func_381(16);
				break;
			case -126163595:
				aggregate_func_4714(-1186962242);
				func_381(16);
				break;
			case -1557841209:
				aggregate_func_4714(-1211054765);
				func_381(16);
				break;
			case -589877714:
				aggregate_func_4714(-1003692821);
				func_381(16);
				break;
			case -946797662:
				aggregate_func_4714(746047447);
				func_381(16);
				break;
			case -147791143:
				aggregate_func_4714(1653322454);
				func_381(16);
				break;
			case -380221660:
				aggregate_func_4714(1929525079);
				func_381(16);
				break;
			case -361084332:
				aggregate_func_4714(-132020357);
				func_381(16);
				break;
			case -1779654346:
				aggregate_func_4714(-690078411);
				func_381(16);
				break;
			case -535382643:
				aggregate_func_4714(-1470832373);
				func_381(16);
				break;
			case -110172099:
				aggregate_func_4714(-359242103);
				func_381(16);
				break;
			case 275125803:
				aggregate_func_4714(1364342107);
				func_381(16);
				break;
			case 713312871:
				aggregate_func_4714(1948311852);
				func_381(16);
				break;
		}
	}
	return 1;
}

int func_340(var uParam0, var uParam1)
{
	if (!Local_23.f_34.f_6.f_10)
	{
		Local_23.f_34.f_6.f_10 = 1;
	}
	func_796(uParam1->f_7, uParam1->f_9);
	return 1;
}

void func_342(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)
{
	if ((iParam15 == 2113164098 || iParam15 == 541670136) || iParam15 == joaat("batch"))
	{
		func_797(&uParam1);
	}
}

void func_344(var uParam0, var uParam1, int iParam2)
{
	Local_23.f_1 = func_798(iParam2);
	switch (Local_23.f_1)
	{
		case -307775316:
			Local_23.f_34.f_6.f_9 = 0;
			if (Local_23.f_34.f_6.f_44 != 9)
			{
				aggregate_func_4935(&(Local_23.f_34.f_6.f_44), 9);
				aggregate_func_4935(&(Local_23.f_34.f_6.f_41), 4);
			}
			break;
		case 1147856052:
			Local_23.f_34.f_6.f_9 = 0;
			if (Local_23.f_34.f_6.f_44 != 10)
			{
				aggregate_func_4935(&(Local_23.f_34.f_6.f_44), 10);
				aggregate_func_4935(&(Local_23.f_34.f_6.f_41), 4);
			}
			break;
		case -1980010691:
			Local_23.f_34.f_6.f_9 = 0;
			if (Local_23.f_34.f_6.f_44 != 11)
			{
				aggregate_func_4935(&(Local_23.f_34.f_6.f_44), 11);
				aggregate_func_4935(&(Local_23.f_34.f_6.f_41), 4);
			}
			break;
		case -1157186155:
			if (func_781(12, !Local_23.f_24))
			{
				Local_23.f_24 = 1;
			}
			if (!aggregate_func_7689(32))
			{
				func_469(Local_23.f_33, 1);
				func_381(32);
			}
			Local_23.f_34.f_6.f_9 = 0;
			if (Local_23.f_34.f_6.f_44 != 2 && Local_23.f_34.f_6.f_44 != 6)
			{
				aggregate_func_4935(&(Local_23.f_34.f_6.f_44), 2);
				aggregate_func_4935(&(Local_23.f_34.f_6.f_41), 4);
			}
			break;
		case -1010038024:
		case 379616381:
			if (!aggregate_func_7689(32))
			{
				func_469(Local_23.f_33, 1);
				func_381(32);
			}
			Local_23.f_34.f_6.f_9 = 0;
			if (Local_23.f_34.f_6.f_44 != 2 && Local_23.f_34.f_6.f_44 != 6)
			{
				aggregate_func_4935(&(Local_23.f_34.f_6.f_44), 2);
				aggregate_func_4935(&(Local_23.f_34.f_6.f_41), 4);
			}
			break;
	}
	aggregate_func_4714(0);
	func_794(&(Local_23.f_9));
	switch (Local_23.f_1)
	{
		case -1157186155:
			break;
		case -307775316:
			aggregate_func_4714(-339710534);
			func_381(16);
			break;
		case -1010038024:
		case 379616381:
		case 1147856052:
			break;
	}
}

int func_346(var uParam0)
{
	if (aggregate_func_3710(aggregate_func_5163(), 0, 1) <= 0)
	{
		return 0;
	}
	if (Global_1274951->f_41)
	{
		return 0;
	}
	return 1;
}

void func_381(int iParam0)
{
	if (!aggregate_func_4240(Local_23, iParam0))
	{
		aggregate_func_4247(&Local_23, iParam0);
	}
}

void func_382(int iParam0)
{
	if (aggregate_func_4240(Local_23, iParam0))
	{
		aggregate_func_4247(&Local_23, iParam0);
	}
}

bool func_401(var uParam0)
{
	bool bVar0;

	if (!aggregate_func_6125(uParam0->f_3))
	{
		return true;
	}
	if (aggregate_func_4429(uParam0->f_3, 128))
	{
		return true;
	}
	if (aggregate_func_5362(uParam0->f_4, 1) || aggregate_func_5362(uParam0->f_4, 1048576))
	{
		return true;
	}
	if (!aggregate_func_418(uParam0->f_3))
	{
		return true;
	}
	if (aggregate_func_4255(aggregate_func_4320()))
	{
		return true;
	}
	bVar0 = false;
	bVar0 = aggregate_func_4458(uParam0->f_3, 268435456);
	if (!bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_1997, true, 0) == 0)
	{
		return true;
	}
	if (uParam0->f_8)
	{
		if (aggregate_func_6467(&(uParam0->f_167.f_4)))
		{
			return true;
		}
	}
	return false;
}

void func_421(var uParam0)
{
	HUD::_0xC9CAEAEEC1256E54(1163138879);
}

bool func_433(var uParam0)
{
	int iVar0;

	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, 0);
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_23.f_34.f_6.f_3) && ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
	}
	iVar0 = 0;
	if (aggregate_func_4497(255))
	{
		if (!Local_23.f_34.f_6.f_11)
		{
			if (func_847(&(Local_23.f_34)) || CAM::IS_SCREEN_FADED_OUT())
			{
				Local_23.f_34.f_6.f_11 = 1;
				aggregate_func_4935(&(Local_23.f_34.f_6.f_44), 0);
				aggregate_func_4935(&(Local_23.f_34.f_6.f_41), 0);
				aggregate_func_4935(&(Local_23.f_34.f_6.f_24), 0);
				iVar0 = 1;
			}
		}
	}
	else
	{
		aggregate_func_1926(0);
		if (!Local_23.f_34.f_6.f_11)
		{
			if (func_847(&(Local_23.f_34)))
			{
				aggregate_func_4935(&(Local_23.f_34.f_6.f_44), 0);
				aggregate_func_4935(&(Local_23.f_34.f_6.f_41), 0);
				aggregate_func_4935(&(Local_23.f_34.f_6.f_24), 0);
				Local_23.f_34.f_6.f_11 = 1;
				iVar0 = 1;
			}
		}
	}
	if (iVar0 || Local_23.f_34.f_6.f_11)
	{
		if (func_465(&(Local_23.f_34)))
		{
			return true;
		}
	}
	return false;
}

bool func_465(var uParam0)
{
	if (!func_862(uParam0->f_6.f_3, &(uParam0->f_6.f_27)))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6.f_27.f_1))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_6.f_27.f_1));
	}
	if (!aggregate_func_2732(&(uParam0->f_6.f_3)))
	{
		return false;
	}
	if (!func_864(uParam0->f_6.f_21))
	{
		return false;
	}
	aggregate_func_4935(&(uParam0->f_6.f_44), 0);
	aggregate_func_4935(&(uParam0->f_6.f_41), 0);
	aggregate_func_4935(&(uParam0->f_6.f_24), 0);
	return true;
}

void func_466(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	iVar1 = func_865();
	iVar2 = func_866();
	iVar3 = func_867() + 1;
	iVar4 = func_775();
	if (!func_868())
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

void func_469(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	iVar2 = ENTITY::_0x59B57C4B06531E1E(func_875(iParam0), 0.75f, iVar0, 3);
	if (iVar2 > 0)
	{
		iVar6 = 0;
		while (iVar6 <= (iVar2 - 1))
		{
			iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar6, iVar0);
			iVar3 = MISC::_0x18013392501CE5DC(iVar1);
			iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
			switch (iVar4)
			{
				case -1800818515:
				case joaat("p_cs_ledger01x"):
				case joaat("p_pen01x"):
				case -780288604:
				case -701419751:
				case joaat("p_whiskeyglass01x"):
				case joaat("p_inkwell01x"):
					bVar5 = true;
					break;
				default:
					bVar5 = false;
					break;
			}
			if (bVar5)
			{
				if (bParam1)
				{
					if (ENTITY::IS_ENTITY_VISIBLE(iVar3))
					{
						ENTITY::SET_ENTITY_VISIBLE(iVar3, false);
					}
				}
				else if (!ENTITY::IS_ENTITY_VISIBLE(iVar3))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar3, true);
				}
			}
			iVar6++;
		}
		ITEMSET::_0x20A4BF0E09BEE146(iVar0);
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_471()
{
	Local_23 = 0;
	aggregate_func_4957(&(Local_23.f_2));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
	Local_23.f_22 = 0;
	Local_23.f_24 = 0;
	aggregate_func_4957(&(Local_23.f_11));
	aggregate_func_4957(&(Local_23.f_14));
}

void func_720(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate_func_4577() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_778(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate_func_4358(uParam0, 200523);
			aggregate_func_4358(uParam0, 201418);
			aggregate_func_4358(uParam0, 201993);
			aggregate_func_4358(uParam0, 202287);
			aggregate_func_4358(uParam0, 202465);
			aggregate_func_4242(uParam0, uParam0->f_2371.f_10);
			aggregate_func_1223(uParam0, aggregate_func_3316(&(uParam0->f_167.f_1778)));
			MISC::SET_BIT(&(uParam0->f_2371.f_9), 1);
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 2))
		{
			if (aggregate_func_951(uParam0))
			{
				MISC::SET_BIT(&(uParam0->f_2371.f_9), 2);
			}
		}
	}
}

bool func_750(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<173> Var0;
	int iVar189;

	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam4))
	{
		return false;
	}
	Var0 = 14;
	Var0.f_4.f_8 = 2;
	Var0.f_4.f_11 = 16;
	Var0.f_4.f_28 = 16;
	Var0.f_4.f_45 = 16;
	Var0.f_4.f_62 = 16;
	Var0.f_4.f_79 = 16;
	Var0.f_4.f_96 = 4;
	Var0.f_4.f_96.f_1.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_1 = 6;
	Var0.f_4.f_96.f_1.f_8.f_8.f_8.f_1 = 6;
	Var0.f_136 = 4;
	Var0.f_136.f_1.f_2 = -1;
	Var0.f_136.f_1.f_3 = -1;
	Var0.f_136.f_1.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_3 = -1;
	Var0.f_136.f_1.f_4.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_4.f_3 = -1;
	Var0.f_136.f_1.f_4.f_4.f_4.f_2 = -1;
	Var0.f_136.f_1.f_4.f_4.f_4.f_3 = -1;
	Var0.f_153 = -1;
	Var0.f_154 = -1;
	Var0.f_155 = 16;
	Var0.f_172 = 16;
	iVar189 = 0;
	iVar189 = 0;
	while (iVar189 < 4)
	{
		MISC::_COPY_MEMORY(uParam0->f_436[iVar189 /*189*/], &Var0, 189);
		iVar189++;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1286 = iParam4;
	if (!aggregate_func_2177(bParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1287 = 1;
	uParam0->f_1288 = bParam3;
	uParam0->f_1279 = 224968;
	uParam0->f_1280 = 224977;
	uParam0->f_1281 = 224986;
	uParam0->f_1282 = 224986;
	uParam0->f_222 = iParam5;
	aggregate_func_4252(uParam0, 0);
	return true;
}

bool func_751(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == -1)
	{
		return false;
	}
	if (iParam1 == -1)
	{
		return false;
	}
	if (!STREAMING::IS_MODEL_VALID(iParam3))
	{
		return false;
	}
	uParam0->f_221 = iParam2;
	uParam0->f_220 = iParam1;
	uParam0->f_1286 = iParam3;
	if (!aggregate_func_770(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1279 = 224968;
	uParam0->f_1280 = 224977;
	uParam0->f_1281 = 224986;
	uParam0->f_1282 = 224986;
	uParam0->f_222 = iParam4;
	aggregate_func_4252(uParam0, 0);
	return true;
}

bool func_771(var uParam0)
{
	if (uParam0->f_6.f_24 != 2)
	{
		aggregate_func_4935(&(Local_23.f_34.f_6.f_24), 2);
		Local_23.f_396 = uParam0->f_6.f_24;
		return false;
	}
	if (uParam0->f_6.f_44 != 6)
	{
		aggregate_func_4935(&(uParam0->f_6.f_44), 6);
		return false;
	}
	if (!aggregate_func_737(&(uParam0->f_6.f_3), aggregate_func_9327(uParam0->f_6.f_24), func_1244(uParam0->f_6.f_44)))
	{
		return false;
	}
	if (!func_1246())
	{
		return false;
	}
	func_1247(uParam0);
	return true;
}

bool func_772(var uParam0)
{
	switch (uParam0->f_6.f_41)
	{
		case 0:
			aggregate_func_4935(&(uParam0->f_6.f_41), 1);
			break;
		case 1:
			if (uParam0->f_6.f_44 != 6)
			{
				aggregate_func_4935(&(uParam0->f_6.f_44), 6);
			}
			if (uParam0->f_6.f_44 == 6)
			{
				aggregate_func_4935(&(uParam0->f_6.f_41), 2);
			}
			return false;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6.f_27.f_1))
			{
				STREAMING::REQUEST_MODEL(-1320825813, false);
				if (!STREAMING::HAS_MODEL_LOADED(-1320825813))
				{
					return false;
				}
				uParam0->f_6.f_27.f_1 = OBJECT::CREATE_OBJECT(-1320825813, uParam0->f_152, true, true, false, false, true);
				return false;
			}
			if (!func_1248(uParam0))
			{
				return false;
			}
			aggregate_func_648(&(Local_23.f_34.f_261), uParam0->f_6.f_21, "MAGGIE", 1);
			aggregate_func_648(&(Local_23.f_34.f_261), Global_35, "ARTHUR", 1);
			func_1250(uParam0->f_6.f_3, &(uParam0->f_6.f_27));
			if (!aggregate_func_1472(uParam0->f_6.f_3, uParam0->f_152, uParam0->f_155, func_1251(), aggregate_func_4270(uParam0->f_6.f_21)))
			{
				return false;
			}
			else
			{
				NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam0->f_6.f_27.f_1, 1, 0, ((*Global_1275475)[&Global_1273882 /*86*/])->f_3);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6.f_27.f_1) && !ENTITY::IS_ENTITY_VISIBLE(uParam0->f_6.f_27.f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6.f_27.f_1, true);
				}
				return true;
			}
			break;
	}
	return false;
}

int func_775()
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

bool func_778(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 == -1)
	{
		iVar0 = uParam0->f_3;
		if (iVar0 == 28)
		{
			iVar0 = 2;
		}
		if (!aggregate_func_770(uParam0->f_4, iVar0, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate_func_5663(uParam0, uParam0->f_20))
		{
			if (!aggregate_func_2177(bParam1, &(uParam0->f_2094)))
			{
				return false;
			}
			if (aggregate_func_5663(uParam0, uParam0->f_20))
			{
			}
			else
			{
				return false;
			}
		}
	}
	else
	{
		if (!aggregate_func_2177(bParam1, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate_func_6052(uParam0, bParam2, 1, -1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	uParam0->f_2094.f_70 = aggregate_func_4287(&(uParam0->f_2094));
	uParam0->f_2094.f_73 = 0;
	uParam0->f_2094.f_75 = 0;
	uParam0->f_2094.f_76 = 0;
	uParam0->f_2094.f_68 = 0;
	uParam0->f_2094.f_48 = 0;
	uParam0->f_2094.f_121 = 0;
	uParam0->f_2094.f_122 = -1;
	uParam0->f_2094.f_123 = -1;
	uParam0->f_2094.f_81 = 0;
	uParam0->f_2094.f_83 = 0;
	uParam0->f_2094.f_118 = 0;
	aggregate_func_5664(uParam0);
	aggregate_func_5640();
	aggregate_func_4285(uParam0);
	aggregate_func_5534();
	aggregate_func_5665(uParam0);
	uParam0->f_2094.f_50 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "GenericShop");
	uParam0->f_2094.f_51 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_50, "Title", MISC::GET_HASH_KEY(aggregate_func_5666(uParam0->f_3)));
	uParam0->f_2094.f_53 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Prompts");
	uParam0->f_2094.f_52 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Scene");
	aggregate_func_3188(uParam0, 6, joaat("IB_EXIT"));
	aggregate_func_2968(uParam0, 6, 1);
	aggregate_func_2968(uParam0, 6, 1);
	aggregate_func_3189(uParam0, 6, 0);
	aggregate_func_3188(uParam0, 1, joaat("ib_select"));
	aggregate_func_2968(uParam0, 1, 1);
	aggregate_func_2968(uParam0, 1, 1);
	aggregate_func_3189(uParam0, 1, 0);
	aggregate_func_3188(uParam0, 2, 1891107858);
	aggregate_func_2968(uParam0, 2, 0);
	aggregate_func_2968(uParam0, 2, 0);
	aggregate_func_3189(uParam0, 2, 0);
	aggregate_func_3188(uParam0, 3, -405106071);
	aggregate_func_2968(uParam0, 3, 0);
	aggregate_func_2968(uParam0, 3, 0);
	aggregate_func_3189(uParam0, 2, 0);
	if (bParam3)
	{
		uParam0->f_2094.f_133 = 0;
		uParam0->f_2094.f_135 = 0;
		uParam0->f_2094.f_131 = 0;
		uParam0->f_2094.f_137 = 0;
		uParam0->f_2094.f_143 = 0;
		uParam0->f_2094.f_139 = 0;
		uParam0->f_2094.f_145 = 0;
		uParam0->f_2094.f_147 = 0;
	}
	uParam0->f_2094.f_149 = 227686;
	uParam0->f_2094.f_150 = 228570;
	uParam0->f_2094.f_151 = 229366;
	uParam0->f_2094.f_152 = 229488;
	uParam0->f_2094.f_46 = 1;
	return true;
}

bool func_781(int iParam0, bool bParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_34.f_6.f_21))
	{
		return false;
	}
	if (aggregate_func_3027(1))
	{
		return false;
	}
	if (!aggregate_func_4260(&(Local_23.f_14)) && !bParam1)
	{
		Local_23.f_18 = MISC::GET_RANDOM_INT_IN_RANGE(45000, 75000);
		aggregate_func_4293(&(Local_23.f_14), 0);
	}
	else if ((bParam1 || !Local_23.f_23) || aggregate_func_4732(&(Local_23.f_14)) > Local_23.f_18)
	{
		if (!bParam1)
		{
			Local_23.f_23 = 1;
		}
		if (aggregate_func_4260(&(Local_23.f_14)))
		{
			aggregate_func_4957(&(Local_23.f_14));
		}
		if (aggregate_func_938(&(Local_23.f_34.f_261), aggregate_func_6661(func_1275(iParam0)), 0, -1, 0, 0))
		{
			return true;
		}
	}
	else
	{
		return false;
	}
	return false;
}

bool func_782()
{
	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_34.f_6.f_21))
	{
		return false;
	}
	if (aggregate_func_3027(1))
	{
		return false;
	}
	if (!aggregate_func_4260(&(Local_23.f_11)))
	{
		aggregate_func_4293(&(Local_23.f_11), 0);
		Local_23.f_17 = MISC::GET_RANDOM_INT_IN_RANGE(30000, 60000);
	}
	else if (aggregate_func_4260(&(Local_23.f_11)) && aggregate_func_4732(&(Local_23.f_11)) > Local_23.f_17)
	{
		aggregate_func_4957(&(Local_23.f_11));
		if (aggregate_func_938(&(Local_23.f_34.f_261), aggregate_func_6661(func_1275(11)), 0, -1, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_784(var uParam0, int iParam1, int iParam2)
{
	STREAMING::REQUEST_MODEL(iParam1, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam1))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, func_1278(iParam2, iParam1), false, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(*uParam0, func_1279(iParam2, iParam1), 2, true);
		ENTITY::SET_ENTITY_COORDS(*uParam0, func_1278(iParam2, iParam1), true, false, true, true);
	}
	return true;
}

void func_785(var uParam0)
{
	switch (uParam0->f_6.f_41)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			uParam0->f_6.f_9 = 0;
			if (uParam0->f_6.f_44 == 6 && aggregate_func_3949(uParam0->f_6.f_3, 0.99f))
			{
				aggregate_func_4935(&(uParam0->f_6.f_44), 2);
				aggregate_func_4935(&(uParam0->f_6.f_41), 4);
			}
			if (uParam0->f_6.f_44 == 2 && aggregate_func_3949(uParam0->f_6.f_3, 0.99f))
			{
				if (func_1281(Local_23.f_396, &(uParam0->f_6.f_44), &(uParam0->f_6.f_26), &(uParam0->f_6.f_10), &(uParam0->f_6.f_12)))
				{
					aggregate_func_4935(&(uParam0->f_6.f_41), 4);
				}
			}
			else if (((uParam0->f_6.f_44 == 8 || uParam0->f_6.f_44 == 9) || uParam0->f_6.f_44 == 10) || uParam0->f_6.f_44 == 11)
			{
			}
			else if (aggregate_func_3949(uParam0->f_6.f_3, 0.99f))
			{
				aggregate_func_4935(&(uParam0->f_6.f_44), 2);
				aggregate_func_4935(&(uParam0->f_6.f_41), 4);
			}
			if (uParam0->f_2)
			{
				if (func_1282(&(uParam0->f_6.f_44)))
				{
					uParam0->f_2 = 0;
					aggregate_func_4935(&(uParam0->f_6.f_41), 4);
				}
			}
			break;
		case 4:
			func_1283(uParam0->f_6.f_3, func_1244(uParam0->f_6.f_44), &(uParam0->f_6.f_9));
			if (uParam0->f_6.f_9)
			{
				aggregate_func_4935(&(uParam0->f_6.f_41), 3);
			}
			break;
	}
}

int func_793(int iParam0)
{
	switch (iParam0)
	{
		case -339710534:
			return -1334222892;
		case 129377429:
			return -1609310766;
		case 1404043335:
			return -660379727;
		case 1751195064:
			return 729277565;
		case -1699850536:
			return -1262899184;
		case -1464680957:
			return 1612330162;
		case -1233266567:
			return -1832936964;
		case 581482573:
			return -998343303;
		case -1186962242:
			return -126163595;
		case -1211054765:
			return -1557841209;
		case -1003692821:
			return -589877714;
		case 746047447:
			return -946797662;
		case 1653322454:
			return -147791143;
		case 1929525079:
			return -380221660;
		case -132020357:
			return -361084332;
		case -690078411:
			return -1779654346;
		case -1470832373:
			return -535382643;
		case -359242103:
			return -110172099;
		case 1364342107:
			return 275125803;
		case 1948311852:
			return 713312871;
		default:
			break;
	}
	return -1334222892;
}

void func_794(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
}

void func_796(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!bParam1)
	{
		return;
	}
	bVar0 = false;
	switch (iParam0)
	{
		case -660379727:
			Local_23.f_397 = 2;
			break;
		case 729277565:
			Local_23.f_397 = 1;
			break;
		case -1262899184:
			Local_23.f_397 = 3;
			break;
		case -1647055373:
			Local_23.f_397 = 0;
			break;
		case 1612330162:
			Local_23.f_399 = 1;
			break;
		case -1832936964:
			Local_23.f_399 = 2;
			break;
		case -998343303:
			Local_23.f_399 = 3;
			break;
		case -126163595:
			Local_23.f_399 = 4;
			break;
		case -1557841209:
			Local_23.f_399 = 5;
			break;
		case -589877714:
			Local_23.f_399 = 6;
			break;
		case -946797662:
			Local_23.f_399 = 7;
			break;
		case -147791143:
			Local_23.f_399 = 8;
			break;
		case -380221660:
			Local_23.f_399 = 9;
			break;
		case -361084332:
			Local_23.f_399 = 10;
			break;
		case -1779654346:
			Local_23.f_399 = 11;
			break;
		case -535382643:
			Local_23.f_399 = 12;
			break;
		case -110172099:
			Local_23.f_399 = 13;
			break;
		case 275125803:
			Local_23.f_399 = 14;
			break;
		case 713312871:
			Local_23.f_399 = 15;
			break;
		case 20024186:
		case 963726415:
		case 1701457723:
			bVar0 = true;
			break;
	}
	if (!bVar0)
	{
		Local_23.f_19 = 1;
	}
}

int func_797(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(Local_23.f_34.f_6.f_21))
	{
		return 0;
	}
	if (aggregate_func_3027(1))
	{
		return 0;
	}
	iVar0 = 5000;
	iVar1 = 0;
	switch (uParam0->f_9)
	{
		case 104187473:
		case 1189497682:
			switch (uParam0->f_8)
			{
				case -950723794:
				case -663241357:
					iVar1 = 7;
					break;
				case -2020197296:
				case -1334222892:
				case 1236975766:
					iVar1 = 4;
					break;
				case -1609310766:
					iVar1 = 5;
					func_1310();
					break;
				default:
					iVar1 = 8;
					break;
			}
			break;
		case 897456793:
			switch (uParam0->f_8)
			{
				case -660379727:
					iVar1 = 6;
					break;
				case 729277565:
					iVar1 = 6;
					break;
				case 1247736526:
					iVar1 = 6;
					break;
				case -1262899184:
					iVar1 = 6;
					break;
				case -1647055373:
					iVar1 = 6;
					break;
				default:
					iVar1 = 1;
					if (func_1311(uParam0->f_8) > iVar0)
					{
						iVar1 = 2;
					}
					break;
			}
			break;
		case -1565675519:
			iVar1 = 1;
			switch (uParam0->f_8)
			{
				case -1557841209:
				case -946797662:
				case -380221660:
				case -110172099:
					iVar1 = 2;
					break;
				default:
					iVar1 = 1;
					break;
			}
			break;
		case 1084182731:
			iVar1 = 1;
			if (func_1311(uParam0->f_8) > iVar0)
			{
				iVar1 = 2;
			}
			switch (uParam0->f_8)
			{
				case 1701457723:
					if (!aggregate_func_7689(128))
					{
						func_381(128);
					}
					else
					{
						iVar1 = 10;
					}
					break;
				case 963726415:
					if (!aggregate_func_7689(256))
					{
						func_381(256);
					}
					else
					{
						iVar1 = 10;
					}
					break;
			}
			break;
		default:
			return 0;
	}
	if (aggregate_func_938(&(Local_23.f_34.f_261), aggregate_func_6661(func_1275(iVar1)), 0, -1, 0, 0))
	{
		aggregate_func_4957(&(Local_23.f_11));
		return 1;
	}
	return 0;
}

int func_798(int iParam0)
{
	if (iParam0 == -1010038024)
	{
		return -1010038024;
	}
	else if (iParam0 == 379616381)
	{
		return 379616381;
	}
	else if (iParam0 == -307775316)
	{
		return -307775316;
	}
	else if (iParam0 == 1147856052)
	{
		return 1147856052;
	}
	else if (iParam0 == -1157186155)
	{
		return -1157186155;
	}
	else if (iParam0 == -1980010691)
	{
		return -1980010691;
	}
	return 0;
}

bool func_847(var uParam0)
{
	switch (uParam0->f_6.f_41)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			aggregate_func_4935(&(uParam0->f_6.f_41), 7);
			break;
		case 7:
			uParam0->f_6.f_9 = 0;
			if (uParam0->f_6.f_44 != 7)
			{
				aggregate_func_4935(&(uParam0->f_6.f_44), 7);
				aggregate_func_4935(&(uParam0->f_6.f_41), 4);
			}
			else if (aggregate_func_3949(uParam0->f_6.f_3, 0.99f))
			{
				return true;
			}
			break;
		case 4:
			func_1283(uParam0->f_6.f_3, func_1244(uParam0->f_6.f_44), &(uParam0->f_6.f_9));
			if (uParam0->f_6.f_9)
			{
				aggregate_func_4935(&(uParam0->f_6.f_41), 7);
			}
			break;
	}
	return false;
}

bool func_862(int iParam0, var uParam1)
{
	bool bVar0;

	bVar0 = true;
	bVar0 = (func_1354(iParam0, *uParam1, uParam1->f_1, "Cane_Gun", 0) && bVar0);
	bVar0 = (func_1354(iParam0, uParam1->f_4, uParam1->f_5, "p_clipboard02x", 1) && bVar0);
	bVar0 = (func_1354(iParam0, uParam1->f_10, uParam1->f_11, "mp005_p_mp_stirStick01x", 1) && bVar0);
	bVar0 = (func_1354(iParam0, uParam1->f_2, uParam1->f_3, "p_broom01x", 0) && bVar0);
	bVar0 = (func_1354(iParam0, uParam1->f_6, uParam1->f_7, "p_jug01bx", 1) && bVar0);
	bVar0 = (func_1354(iParam0, uParam1->f_8, uParam1->f_9, "p_crate03x", 0) && bVar0);
	bVar0 = (func_1354(iParam0, *uParam1, uParam1->f_13, "p_pen_01x", 0) && bVar0);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_864(int iParam0)
{
	aggregate_func_581(&iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return true;
	}
	return false;
}

int func_865()
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

int func_866()
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

int func_867()
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

bool func_868()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(1212196772) || !UNLOCK::_UNLOCK_IS_UNLOCKED(-400403560))
	{
		return false;
	}
	return true;
}

Vector3 func_875(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1789.626f, -813.0208f, 192.3978f;
		case 1:
			return -1092.586f, 707.8616f, 84.03263f;
		case 2:
			return -2778.867f, -3047.243f, -8.90188f;
		case 3:
			return 1628.437f, 832.2777f, 124.7405f;
		case 4:
			return -1863.72f, -1731.767f, 89.05375f;
		default:
			break;
	}
	return 1789.626f, -813.0208f, 192.3978f;
}

char* func_1244(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "pl_base";
		case 2:
			return "pl_idle";
		case 3:
			return "pl_idle_a";
		case 4:
			return "pl_idle_b";
		case 5:
			return "pl_idle_c";
		case 6:
			return "pl_enter";
		case 7:
			return "pl_exit";
		case 8:
			return "pl_Upgrade_Base";
		case 9:
			return "pl_Upgrade_Enter";
		case 10:
			return "pl_Upgrade_Enter2";
		case 11:
			return "pl_Upgrade_Enter3";
		case 0:
			return "FAIL";
		default:
			break;
	}
	return "FAIL";
}

bool func_1246()
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1273882->f_15;
	iVar1 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	return true;
}

void func_1247(var uParam0)
{
	uParam0->f_93 = aggregate_func_3450(aggregate_func_5163(), 1);
	switch (uParam0->f_93)
	{
		case 0:
			uParam0->f_152 = { 1789.589f, -812.6585f, 191.5976f };
			uParam0->f_155 = { 0f, 0f, -176.6f };
			break;
		case 1:
			uParam0->f_152 = { -1092.755f, 707.5154f, 83.2324f };
			uParam0->f_155 = { 0f, 0f, -16.5f };
			break;
		case 2:
			uParam0->f_152 = { -2779.18f, -3047.384f, -9.7021f };
			uParam0->f_155 = { 0f, 0f, -67.7f };
			break;
		case 3:
			uParam0->f_152 = { 1628.273f, 832.5851f, 123.9403f };
			uParam0->f_155 = { 0f, 0f, -153.2f };
			break;
		case 4:
			uParam0->f_152 = { -1863.615f, -1732.071f, 88.2535f };
			uParam0->f_155 = { 0f, 0f, 20f };
			break;
	}
}

bool func_1248(var uParam0)
{
	vector3 vVar0;

	func_1247(uParam0);
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_152, uParam0->f_155.f_2, 0.5f, -1f, 0f) };
	if (!ENTITY::DOES_ENTITY_EXIST(aggregate_func_4270(uParam0->f_6.f_21)))
	{
		uParam0->f_6.f_21 = aggregate_func_2073(-254133531, vVar0, 0f, 1, 1, 0, 1, 1, 1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_6.f_21, false);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(uParam0->f_6.f_21, 1, 0, ((*Global_1275475)[&Global_1273882 /*86*/])->f_3);
		NETWORK::_0xF3354D6CA46F419D(uParam0->f_6.f_21, 0);
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(uParam0->f_6.f_21, true);
		return false;
	}
	if (!func_1834(uParam0->f_6.f_21, 41788943))
	{
		return false;
	}
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uParam0->f_6.f_21, "rdro_shop_maggie_mixgroup", 0f);
	return true;
}

void func_1250(int iParam0, var uParam1)
{
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		func_1836(iParam0, uParam1->f_6, uParam1->f_7, "p_jug01bx", 1);
		func_1836(iParam0, uParam1->f_4, uParam1->f_5, "p_clipboard02x", 0);
		func_1836(iParam0, uParam1->f_12, uParam1->f_13, "p_pen_01x", 0);
		func_1836(iParam0, uParam1->f_2, uParam1->f_3, "p_broom01x", 0);
		func_1836(iParam0, uParam1->f_8, uParam1->f_9, "p_crate03x", 0);
		func_1836(iParam0, *uParam1, uParam1->f_1, "Cane_Gun", 1);
		func_1836(iParam0, uParam1->f_10, uParam1->f_11, "mp005_p_mp_stirStick01x", 1);
	}
}

char* func_1251()
{
	return "MAGGIE";
}

char[] func_1275(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MAGG_IP_GEN";
		case 2:
			return "MAGG_IP_PREMIUM";
		case 3:
			return "MAGG_IP_RELO";
		case 4:
			return "MAGG_IP_BARUP";
		case 5:
			return "MAGG_IP_BANDUP";
		case 6:
			return "MAGG_IP_THEME";
		case 7:
			return "MAGG_IP_STILLUP";
		case 8:
			return "MAGG_IP_EXPAN";
		case 9:
			return "MAGG_IP_NOMONEY";
		case 10:
			return "MAGG_IP_REPEAT";
		case 11:
			return "MAGG_PA_MIDLE";
		case 12:
			return "MAGG_PA_MUPGR";
		case 13:
			return "MAGG_PA_MGEN";
		default:
			break;
	}
	return "";
}

Vector3 func_1278(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case -339710534:
					return 1789.31f, -813.177f, 192.489f;
				case 129377429:
					return 1789.31f, -813.177f, 192.489f;
				case 1404043335:
					return 1789.27f, -813.197f, 192.489f;
				case 1751195064:
					return 1789.27f, -813.197f, 192.489f;
				case -1699850536:
					return 1789.27f, -813.197f, 192.489f;
				case -1470832373:
				case -1464680957:
				case -1233266567:
				case -1211054765:
				case -1186962242:
				case -1003692821:
				case -690078411:
				case -359242103:
				case -132020357:
				case 581482573:
				case 746047447:
				case 1364342107:
				case 1653322454:
				case 1929525079:
				case 1948311852:
					return 1789.29f, -812.617f, 192.489f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case -339710534:
					return -1092.37f, 707.882f, 84.0326f;
				case 129377429:
					return -1092.37f, 707.882f, 84.0326f;
				case 1404043335:
					return -1092.37f, 707.882f, 84.0326f;
				case 1751195064:
					return -1092.37f, 707.882f, 84.0326f;
				case -1699850536:
					return -1092.37f, 707.882f, 84.0326f;
				case -1470832373:
				case -1464680957:
				case -1233266567:
				case -1211054765:
				case -1186962242:
				case -1003692821:
				case -690078411:
				case -359242103:
				case -132020357:
				case 581482573:
				case 746047447:
				case 1364342107:
				case 1653322454:
				case 1929525079:
				case 1948311852:
					return -1092.49f, 707.341f, 84.0326f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case -339710534:
					return -2778.65f, -3047.44f, -8.90188f;
				case 129377429:
					return -2778.65f, -3047.44f, -8.90188f;
				case 1404043335:
					return -2778.65f, -3047.44f, -8.90188f;
				case 1751195064:
					return -2778.65f, -3047.44f, -8.90188f;
				case -1699850536:
					return -2778.65f, -3047.44f, -8.90188f;
				case -1470832373:
				case -1464680957:
				case -1233266567:
				case -1211054765:
				case -1186962242:
				case -1003692821:
				case -690078411:
				case -359242103:
				case -132020357:
				case 581482573:
				case 746047447:
				case 1364342107:
				case 1653322454:
				case 1929525079:
				case 1948311852:
					return -2779.13f, -3047.74f, -8.90188f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case -339710534:
					return 1628.22f, 832.057f, 124.741f;
				case 129377429:
					return 1628.22f, 832.057f, 124.741f;
				case 1404043335:
					return 1628.22f, 832.057f, 124.741f;
				case 1751195064:
					return 1628.22f, 832.057f, 124.741f;
				case -1699850536:
					return 1628.22f, 832.057f, 124.741f;
				case -1470832373:
				case -1464680957:
				case -1233266567:
				case -1211054765:
				case -1186962242:
				case -1003692821:
				case -690078411:
				case -359242103:
				case -132020357:
				case 581482573:
				case 746047447:
				case 1364342107:
				case 1653322454:
				case 1929525079:
				case 1948311852:
					return 1627.92f, 832.497f, 124.741f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case -339710534:
					return -1863.5f, -1731.53f, 89.0537f;
				case 129377429:
					return -1863.5f, -1731.53f, 89.0537f;
				case 1404043335:
					return -1863.5f, -1731.53f, 89.0537f;
				case 1751195064:
					return -1863.5f, -1731.53f, 89.0537f;
				case -1699850536:
					return -1863.5f, -1731.53f, 89.0537f;
				case -1470832373:
				case -1464680957:
				case -1233266567:
				case -1211054765:
				case -1186962242:
				case -1003692821:
				case -690078411:
				case -359242103:
				case -132020357:
				case 581482573:
				case 746047447:
				case 1364342107:
				case 1653322454:
				case 1929525079:
				case 1948311852:
					return -1863.28f, -1732.05f, 89.0537f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_1279(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case -339710534:
					return 0f, 0f, 15f;
				case 129377429:
					return 0f, 0f, 15f;
				case 1404043335:
					return 0f, 0f, 15f;
				case 1751195064:
					return 0f, 0f, 15f;
				case -1699850536:
					return 0f, 0f, 15f;
				case -1464680957:
					return -90f, 0f, 10f;
				case -1233266567:
					return -90f, 0f, 10f;
				case 581482573:
					return -90f, 0f, 10f;
				case -1186962242:
					return -90f, 0f, 10f;
				case -1211054765:
					return -90f, 0f, 10f;
				case -1003692821:
					return -90f, 0f, 10f;
				case 746047447:
					return -90f, 0f, 10f;
				case 1653322454:
					return -90f, 0f, 10f;
				case 1929525079:
					return -90f, 0f, 10f;
				case -132020357:
					return -90f, 0f, 10f;
				case -690078411:
					return -90f, 0f, 10f;
				case -1470832373:
					return -90f, 0f, 10f;
				case -359242103:
					return -90f, 0f, 10f;
				case 1364342107:
					return -90f, 0f, 10f;
				case 1948311852:
					return -90f, 0f, 10f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case -339710534:
					return 0f, 0f, 168.999f;
				case 129377429:
					return 0f, 0f, 168.999f;
				case 1404043335:
					return 0f, 0f, 168.999f;
				case 1751195064:
					return 0f, 0f, 168.999f;
				case -1699850536:
					return 0f, 0f, 168.999f;
				case -1464680957:
					return -90f, 0f, 168.999f;
				case -1233266567:
					return -90f, 0f, 168.999f;
				case 581482573:
					return -90f, 0f, 168.999f;
				case -1186962242:
					return -90f, 0f, 168.999f;
				case -1211054765:
					return -90f, 0f, 168.999f;
				case -1003692821:
					return -90f, 0f, 168.999f;
				case 746047447:
					return -90f, 0f, 168.999f;
				case 1653322454:
					return -90f, 0f, 168.999f;
				case 1929525079:
					return -90f, 0f, 168.999f;
				case -132020357:
					return -90f, 0f, 168.999f;
				case -690078411:
					return -90f, 0f, 168.999f;
				case -1470832373:
					return -90f, 0f, 168.999f;
				case -359242103:
					return -90f, 0f, 168.999f;
				case 1364342107:
					return -90f, 0f, 168.999f;
				case 1948311852:
					return -90f, 0f, 168.999f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case -339710534:
					return 0f, 0f, 120f;
				case 129377429:
					return 0f, 0f, 120f;
				case 1404043335:
					return 0f, 0f, 120f;
				case 1751195064:
					return 0f, 0f, 120f;
				case -1699850536:
					return 0f, 0f, 120f;
				case -1464680957:
					return -90f, 0f, 120f;
				case -1233266567:
					return -90f, 0f, 120f;
				case 581482573:
					return -90f, 0f, 120f;
				case -1186962242:
					return -90f, 0f, 120f;
				case -1211054765:
					return -90f, 0f, 120f;
				case -1003692821:
					return -90f, 0f, 120f;
				case 746047447:
					return -90f, 0f, 120f;
				case 1653322454:
					return -90f, 0f, 120f;
				case 1929525079:
					return -90f, 0f, 120f;
				case -132020357:
					return -90f, 0f, 120f;
				case -690078411:
					return -90f, 0f, 120f;
				case -1470832373:
					return -90f, 0f, 120f;
				case -359242103:
					return -90f, 0f, 120f;
				case 1364342107:
					return -90f, 0f, 120f;
				case 1948311852:
					return -90f, 0f, 120f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case -339710534:
					return 0f, 0f, 35.9999f;
				case 129377429:
					return 0f, 0f, 35.9999f;
				case 1404043335:
					return 0f, 0f, 35.9999f;
				case 1751195064:
					return 0f, 0f, 35.9999f;
				case -1699850536:
					return 0f, 0f, 35.9999f;
				case -1464680957:
					return -90f, 0f, 35.9999f;
				case -1233266567:
					return -90f, 0f, 35.9999f;
				case 581482573:
					return -90f, 0f, 35.9999f;
				case -1186962242:
					return -90f, 0f, 35.9999f;
				case -1211054765:
					return -90f, 0f, 35.9999f;
				case -1003692821:
					return -90f, 0f, 35.9999f;
				case 746047447:
					return -90f, 0f, 35.9999f;
				case 1653322454:
					return -90f, 0f, 35.9999f;
				case 1929525079:
					return -90f, 0f, 35.9999f;
				case -132020357:
					return -90f, 0f, 35.9999f;
				case -690078411:
					return -90f, 0f, 35.9999f;
				case -1470832373:
					return -90f, 0f, 35.9999f;
				case -359242103:
					return -90f, 0f, 35.9999f;
				case 1364342107:
					return -90f, 0f, 35.9999f;
				case 1948311852:
					return -90f, 0f, 35.9999f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case -339710534:
					return 0f, 0f, -155.999f;
				case 129377429:
					return 0f, 0f, -155.999f;
				case 1404043335:
					return 0f, 0f, -155.999f;
				case 1751195064:
					return 0f, 0f, -155.999f;
				case -1699850536:
					return 0f, 0f, -155.999f;
				case -1464680957:
					return -90f, 0f, -153.999f;
				case -1233266567:
					return -90f, 0f, -153.999f;
				case 581482573:
					return -90f, 0f, -153.999f;
				case -1186962242:
					return -90f, 0f, -153.999f;
				case -1211054765:
					return -90f, 0f, -153.999f;
				case -1003692821:
					return -90f, 0f, -153.999f;
				case 746047447:
					return -90f, 0f, -153.999f;
				case 1653322454:
					return -90f, 0f, -153.999f;
				case 1929525079:
					return -90f, 0f, -153.999f;
				case -132020357:
					return -90f, 0f, -153.999f;
				case -690078411:
					return -90f, 0f, -153.999f;
				case -1470832373:
					return -90f, 0f, -153.999f;
				case -359242103:
					return -90f, 0f, -153.999f;
				case 1364342107:
					return -90f, 0f, -153.999f;
				case 1948311852:
					return -90f, 0f, -153.999f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_1281(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			if (*uParam3)
			{
				iVar0 = func_1927(iParam0);
				iVar2 = iVar0;
				if (func_1928(iVar2) && iVar2 != *uParam2)
				{
					aggregate_func_4935(uParam2, iVar2);
					return true;
				}
			}
			if (*uParam4)
			{
			}
			break;
		case 2:
			if (*uParam3)
			{
				iVar0 = func_1927(iParam0);
				iVar1 = iVar0;
				if (func_1930(iVar1) && iVar1 != *uParam1)
				{
					aggregate_func_4935(uParam1, iVar1);
					*uParam3 = 0;
					return true;
				}
			}
			if (*uParam4)
			{
			}
			break;
	}
	return false;
}

bool func_1282(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar2 = *uParam0;
	iVar0 = *uParam0;
	iVar0++;
	if (iVar0 >= 13)
	{
		iVar0 = 1;
	}
	*uParam0 = iVar0;
	if ((*uParam0 != 12 && *uParam0 != 0) && *uParam0 != iVar2)
	{
		iVar1 = 1;
	}
	else
	{
		*uParam0 = 1;
		iVar1 = 1;
	}
	return iVar1;
}

void func_1283(int iParam0, char* sParam1, var uParam2)
{
	*uParam2 = 0;
	if (ANIMSCENE::_0x25557E324489393C(iParam0))
	{
		if ((!ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1) && !ANIMSCENE::_0x0DF57F86FE71DBE5(iParam0, sParam1)) && !ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
		}
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1) && !ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, true);
		}
		if (ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
		{
			*uParam2 = 1;
		}
	}
}

bool func_1305(int iParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	bool bVar30;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_1 = iParam0;
	if (aggregate_func_3138(INVENTORY::_0x13D234A2A3F66E63(Global_35), &Var0, &iVar14, &iVar15))
	{
		Var16.f_9 = -1591664384;
		bVar30 = false;
		bVar30 = false;
		while (bVar30 < iVar15)
		{
			if (aggregate_func_2840(&Var16, bVar30, iVar14, iVar15))
			{
				if (aggregate_func_2823(Var16.f_4, 0))
				{
					if (Var16.f_4 == bParam1)
					{
						aggregate_func_2837(iVar14);
						return true;
					}
				}
			}
			bVar30++;
		}
		aggregate_func_2837(iVar14);
	}
	return false;
}

void func_1310()
{
	struct<9> Var0;

	Var0 = { func_1947(-174148999) };
	aggregate_func_7153(&Var0);
}

bool func_1311(bool bParam0)
{
	bool bVar0;
	bool bVar1;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = aggregate_func_5209(bParam0, 0, 1, -1, 1);
	bVar1 = aggregate_func_6499(bParam0, bVar0, 1, 0, 1, 0);
	return bVar1;
}

bool func_1354(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (ANIMSCENE::_0x6F1F0B17109309DA(iParam0, sParam3))
		{
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam2, iParam0))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0, sParam3, iParam2);
			}
		}
		ENTITY::SET_ENTITY_VISIBLE(iParam2, false);
		ENTITY::SET_ENTITY_COLLISION(iParam2, false, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, true);
		if (bParam4)
		{
			ENTITY::SET_ENTITY_COLLISION(iParam1, true, false);
		}
	}
	return true;
}

void func_1680(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar2 = 0;
	bVar3 = bParam1;
	iVar4 = aggregate_func_2827(bVar3);
	iVar5 = 0;
	if (aggregate_func_4577() == 24043185)
	{
		iVar2 = 1;
	}
	if (bParam3)
	{
		iVar5 = 3;
	}
	switch (iVar4)
	{
		case 1297434125:
			if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
				{
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 0 || (uParam0->f_1[iVar0 /*3*/])->f_1 == joaat("base"))
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
					}
					else
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 1334603721;
					}
					aggregate_func_4743(iVar0, iVar5);
				}
				Jump @3218; //curOff = 253
				if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
				{
				}
				else
				{
					iVar0 = 34;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 36;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 37;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -1278198125))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 18;
					if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
					{
						bVar1 = &uParam0->f_1[iVar0 /*3*/];
						if (912453393 == aggregate_func_2827(bVar1) && (uParam0->f_1[iVar0 /*3*/])->f_1 != -2081918609)
						{
							(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							aggregate_func_4743(iVar0, iVar5);
						}
					}
					Jump @3218; //curOff = 543
					if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
					{
					}
					else
					{
						iVar0 = 36;
						aggregate_func_4743(iVar0, iVar5);
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -1473580422))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate_func_2852(bVar1, 1469783911))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							}
							else if (aggregate_func_2089(&(uParam0->f_1[iVar0 /*3*/]), iVar2, -2081918609) != -1)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
							}
							else
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
						}
						iVar0 = 18;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, 1583165364))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate_func_2827(bVar1) == 912453393)
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = -2081918609;
								aggregate_func_4743(iVar0, iVar5);
							}
						}
						iVar0 = 35;
						if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -1650340550))
						{
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if (aggregate_func_2827(bVar1) == 1769055947)
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
						}
						Jump @3218; //curOff = 920
						if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
						{
						}
						else
						{
							iVar0 = 36;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, 1718965018))
							{
								(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
							}
							aggregate_func_4743(iVar0, iVar5);
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 20;
							bVar1 = &uParam0->f_1[iVar0 /*3*/];
							if ((&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar1, 1090938458)) && aggregate_func_2852(bVar3, 475297062))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							Jump @3218; //curOff = 1173
							aggregate_func_4743(36, iVar5);
							iVar0 = 18;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 17;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 35;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							iVar0 = 29;
							if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
							{
								uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
								(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
								aggregate_func_4743(iVar0, iVar5);
							}
							Jump @3218; //curOff = 1456
							aggregate_func_4743(16, iVar5);
							if (aggregate_func_5024(bVar3, 0))
							{
							}
							else
							{
								iVar0 = 29;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, 1126863852))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate_func_4743(iVar0, iVar5);
								}
								iVar0 = 16;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -985549034))
								{
									if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
									}
									else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
									{
										(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
									}
								}
								iVar0 = 12;
								if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -1527414429))
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									aggregate_func_4743(iVar0, iVar5);
								}
								Jump @3218; //curOff = 1749
								if (aggregate_func_5024(bVar3, 0))
								{
								}
								else
								{
									iVar0 = 12;
									if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, -1527414429))
									{
										uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
										(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
										aggregate_func_4743(iVar0, iVar5);
									}
									iVar0 = 16;
									if (((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721) && aggregate_func_2852(bVar3, -985549034))
									{
										if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
											aggregate_func_4743(iVar0, iVar5);
										}
										else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
										{
											(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
											aggregate_func_4743(iVar0, iVar5);
										}
									}
									Jump @3218; //curOff = 1990
									if (aggregate_func_5024(bVar3, 0))
									{
									}
									else
									{
										iVar0 = 17;
										if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
										{
											uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
											(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
											aggregate_func_4743(iVar0, iVar5);
										}
										if ((uParam0->f_1[iParam2 /*3*/])->f_1 != -2081918609)
										{
											iVar0 = 34;
											bVar1 = &uParam0->f_1[iVar0 /*3*/];
											if (aggregate_func_2852(bVar1, 1583165364))
											{
												(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
												aggregate_func_4743(iParam2, iVar5);
											}
											else
											{
												iVar0 = 35;
												bVar1 = &uParam0->f_1[iVar0 /*3*/];
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && 1769055947 == aggregate_func_2827(bVar1))
												{
													(uParam0->f_1[iParam2 /*3*/])->f_1 = -2081918609;
													aggregate_func_4743(iParam2, iVar5);
												}
											}
										}
										Jump @3218; //curOff = 2216
										if (aggregate_func_5024(bVar3, 0))
										{
										}
										else
										{
											iVar0 = 12;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											iVar0 = 13;
											if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											iVar0 = 25;
											if (&Global_1951131->f_1657.f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/] && aggregate_func_2852(bVar3, 675650051))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3218; //curOff = 2440
											if (bParam1 == &Global_1951131->f_81[iParam2 /*12*/])
											{
												iVar0 = 37;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												iVar0 = 38;
												if (&uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												iVar0 = 35;
												if (-923693316 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
											}
											else
											{
												iVar0 = 35;
												bVar1 = &uParam0->f_1[iVar0 /*3*/];
												if ((aggregate_func_2852(bVar3, 813132419) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate_func_2827(bVar1) == -923693316)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												if ((aggregate_func_2852(bVar3, -1650340550) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/]) && aggregate_func_2827(bVar1) == 1769055947)
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
												iVar0 = 37;
												if (aggregate_func_2852(bVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
											}
											Jump @3218; //curOff = 2923
											iVar0 = 37;
											if (aggregate_func_2852(bVar3, -1278198125) && &uParam0->f_1[iVar0 /*3*/] != &Global_1951131->f_81[iVar0 /*12*/])
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3218; //curOff = 3005
											iVar0 = 10;
											if (-525676072 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3218; //curOff = 3069
											iVar0 = 12;
											if (81053684 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
											{
												uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
												(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
												aggregate_func_4743(iVar0, iVar5);
											}
											Jump @3218; //curOff = 3133
											if (!aggregate_func_2852(bVar3, -1348134986))
											{
											}
											else
											{
												iVar0 = 10;
												if (-525676072 == aggregate_func_2827(&(uParam0->f_1[iVar0 /*3*/])))
												{
													uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
													(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
													aggregate_func_4743(iVar0, iVar5);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			switch (aggregate_func_4735(iParam2, 1))
			{
				case -207860920:
					if (aggregate_func_5041(99217379) && aggregate_func_2852(bVar3, -1230785684))
					{
						iVar0 = 27;
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					break;
				case 1742327865:
					iVar0 = 16;
					if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = joaat("base");
						aggregate_func_4743(iVar0, iVar5);
					}
					else if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1334603721)
					{
						(uParam0->f_1[iVar0 /*3*/])->f_1 = -1539589426;
						aggregate_func_4743(iVar0, iVar5);
					}
					break;
				case 1250092473:
					iVar0 = 12;
					if (2056714954 == PED::_0x5FF9A878C3D115B8(&(uParam0->f_1[iVar0 /*3*/]), iVar2, 1))
					{
						if ((bParam1 == &Global_1951131->f_81[iParam2 /*12*/] || aggregate_func_2852(bVar3, 1872585553)) || iVar4 == 1882579758)
						{
							uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
							(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
							aggregate_func_4743(iVar0, iVar5);
						}
					}
					iVar0 = 17;
					if (!aggregate_func_5024(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate_func_2852(bVar3, 1467402774))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					iVar0 = 29;
					if (!aggregate_func_5024(&(uParam0->f_1[iVar0 /*3*/]), 0) && aggregate_func_2852(bVar3, 1126863852))
					{
						uParam0->f_1[iVar0 /*3*/] = &Global_1951131->f_81[iVar0 /*12*/];
						(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
						aggregate_func_4743(iVar0, iVar5);
					}
					break;
				case -1130352927:
					if (bParam1 == -230310728 || bParam1 == 1326838792)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
				case 1367443060:
					if (bParam1 == 1733464892)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = 289238755;
					}
					else if ((uParam0->f_1[iParam2 /*3*/])->f_1 == 289238755)
					{
						(uParam0->f_1[iParam2 /*3*/])->f_1 = joaat("base");
					}
					break;
			}
			default:
				break;
	}
}

bool func_1834(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = aggregate_func_8361(iParam1, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 == PED::_0x30569F348D126A5A(iParam0))
	{
		return true;
	}
	else if (PED::_0xA0BC8FAED8CFEB3C(iParam0))
	{
		PED::_0x1902C4CFCC5BE57C(iParam0, iParam1);
		PED::_0xCC8CA3E88256E58F(iParam0, 0, 1, 1, 1, false);
		return true;
	}
	return false;
}

void func_1836(int iParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	if (ANIMSCENE::_0x6F1F0B17109309DA(iParam0, sParam3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam1, false);
			if (bParam4)
			{
				ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam2, iParam0))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0, sParam3, iParam2, 0);
			}
			ENTITY::SET_ENTITY_VISIBLE(iParam2, true);
			ENTITY::SET_ENTITY_COLLISION(iParam2, true, false);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam1, true);
			if (bParam4)
			{
				ENTITY::SET_ENTITY_COLLISION(iParam1, true, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam2, false);
			ENTITY::SET_ENTITY_COLLISION(iParam2, false, false);
		}
	}
}

int func_1927(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 1:
			iVar1 = 16;
			break;
		case 2:
			iVar1 = 13;
			break;
		case 3:
			iVar1 = 8;
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	return iVar0;
}

bool func_1928(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return true;
	}
	return false;
}

bool func_1930(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return true;
	}
	return false;
}

struct<9> func_1947(int iParam0)
{
	struct<9> Var0;

	Var0.f_4 = iParam0;
	Var0 = 13;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_2502(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 49, &uParam1);
}

int func_2504(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			Jump @1664; //curOff = 1150
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			Jump @1664; //curOff = 1223
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			Jump @1664; //curOff = 1296
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			Jump @1664; //curOff = 1369
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			Jump @1664; //curOff = 1442
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			Jump @1664; //curOff = 1515
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			Jump @1664; //curOff = 1588
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			return 0;
		}

