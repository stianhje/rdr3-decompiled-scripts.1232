#region Local Var
	struct<12> Local_0 = { 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
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
	int iLocal_22 = 0;
	struct<10> Local_23 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

// __EntryFunction__ == shop_bait.__EntryFunction__

void func_41(var uParam0)
{
	int iVar0;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
		if (ENTITY::IS_ENTITY_A_PED(iVar0) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			return;
		}
	}
	func_332(uParam0, 1);
	func_332(uParam0, 2);
	aggregate.shop_bait.func_334(uParam0, 1, 61213);
}

void func_44(var uParam0)
{
	uParam0->f_2421.f_21 = 1;
	uParam0->f_2421.f_22 = 62015;
	uParam0->f_2421.f_35 = 1;
	uParam0->f_2421.f_36 = 62177;
	uParam0->f_2421.f_27 = 1;
	uParam0->f_2421.f_28 = 62274;
	uParam0->f_2421.f_23 = 1;
	uParam0->f_2421.f_24 = 62615;
	uParam0->f_2421.f_33 = 1;
	uParam0->f_2421.f_34 = 62749;
}

void func_65(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_23);
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(&(Global_1051387->f_3222[uParam0->f_4 /*2*/]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !aggregate.fme_round_up.func_1021(iVar1, 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(iVar1, 234, true);
	PED::SET_PED_CONFIG_FLAG(iVar1, 252, false);
}

void func_122(var uParam0)
{
	int iVar0;

	if (!PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_2421.f_4))
	{
		TASK::_TASK_START_SCENARIO_IN_PLACE(uParam0->f_2421.f_4, TASK::_0xA92450B5AE687AAF(aggregate.shop_bait.func_47(uParam0->f_3)), 0, 0, 0, 0.2f, 0);
	}
	aggregate.shop_bait.func_138(uParam0);
	func_450(&Local_23);
	if (aggregate.mp_intro.func_3303(uParam0->f_3, &iVar0))
	{
		TASK::_0x541E5B41DCA45828(iVar0, 1, 0);
	}
}

bool func_316(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	bool bVar0;

	if (aggregate.annesburg.func_121(vParam3))
	{
		return false;
	}
	if (aggregate.annesburg.func_121(vParam6))
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
	bVar0 = (MISC::IS_ORBIS_VERSION() && aggregate.shop_bait.func_724(iParam2));
	if (iParam1 == 6 || iParam1 == 48)
	{
		bVar0 = false;
	}
	if (bVar0 && aggregate.mp_intro.func_1946(aggregate.shop_bait.func_725(iParam2)))
	{
		if (!func_726(&(uParam0->f_4), iParam1, iParam2, aggregate.shop_bait.func_725(iParam2), uParam0->f_1767, 0))
		{
		}
	}
	else if (!func_727(&(uParam0->f_4), iParam1, iParam2, uParam0->f_1767, 0))
	{
	}
	aggregate.camera_item.func_77(&(uParam0->f_4), 137194);
	aggregate.camera_item.func_77(&(uParam0->f_4), 137231);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 137259);
	aggregate.shop_bait.func_733(&(uParam0->f_4), 137794);
	uParam0->f_1746 = iParam1;
	uParam0->f_1747 = iParam2;
	uParam0->f_1776 = iParam10;
	uParam0->f_1777 = iParam11;
	uParam0->f_1751 = { vParam3 };
	uParam0->f_1754 = { vParam6 };
	uParam0->f_1768 = iParam9;
	aggregate.interactive_campfire.func_44(uParam0, 1);
	return true;
}

int func_332(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 2 || iParam1 == 12)
	{
		return aggregate.shop_bait.func_749(uParam0, iParam1, 138599, 138630, 138717, 140315);
	}
	else
	{
		iVar0 = 0;
		if (!aggregate.mp_intro.func_2206(iParam1, &iVar0))
		{
			return 0;
		}
		return aggregate.shop_bait.func_749(uParam0, iParam1, 140613, 140665, 128371, 30857);
	}
	return 0;
}

bool func_333(var uParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		if (aggregate.aberdeenpigfarm.func_85((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_21) && aggregate.annesburg.func_130((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_21, 0))
		{
			if (!func_630(aggregate.barcustomer_interaction.func_24((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_21), uParam0->f_3))
			{
				return false;
			}
		}
	}
	else
	{
		return ENTITY::IS_ENTITY_IN_VOLUME((Global_1051387->f_69[uParam0->f_3 /*76*/])->f_21, (Global_1051387->f_69[uParam0->f_3 /*76*/])->f_25, true, 0);
	}
	return true;
}

int func_340(var uParam0)
{
	int iVar0;

	switch (iLocal_22)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_21))
			{
				iLocal_22 = 1;
			}
			else
			{
				iLocal_22 = 3;
			}
			break;
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_21))
			{
				if (!PED::_0xA911EE21EDF69DAF(Global_35))
				{
					if (aggregate.aberdeenpigfarm.func_45() == -1)
					{
						iVar0 = (Global_1915170->f_3[*uParam0 /*447*/])->f_25;
					}
					else
					{
						iVar0 = (Global_1051387->f_69[*uParam0 /*76*/])->f_25;
					}
					if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_21, iVar0, false, 0))
					{
						iLocal_22 = 2;
					}
				}
			}
			else
			{
				iLocal_22 = 3;
			}
			break;
		case 2:
			if (func_764(uParam0))
			{
				iLocal_22 = 3;
			}
			return 1;
	}
	return 0;
}

int func_341(var uParam0, bool bParam1, bool bParam2)
{
	if (aggregate.bandana.func_11(bParam1, 210646929))
	{
		if (bParam2)
		{
			uParam0->f_44 = func_765(3);
		}
		else
		{
			uParam0->f_44 = func_765(2);
		}
		return 1;
	}
	if (aggregate.bandana.func_11(bParam1, 678620317))
	{
		if (bParam2)
		{
			uParam0->f_44 = func_765(0);
		}
		else
		{
			uParam0->f_44 = func_765(1);
		}
		return 1;
	}
	return 0;
}

int func_342(var uParam0)
{
	if (aggregate.saloon_dining.func_455(uParam0))
	{
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 20))
		{
			case 1:
				uParam0->f_44 = func_765(6);
				return 1;
			case 2:
				uParam0->f_44 = func_765(7);
				return 1;
			case 3:
				uParam0->f_44 = func_765(8);
				return 1;
			case 4:
				uParam0->f_44 = func_765(11);
				return 1;
			case 5:
				uParam0->f_44 = func_765(12);
				return 1;
			case 6:
				uParam0->f_44 = func_765(13);
				return 1;
			case 7:
				uParam0->f_44 = func_765(14);
				return 1;
			case 8:
				if (PED::IS_PED_MALE(Global_35))
				{
					uParam0->f_44 = func_765(15);
					return 1;
				}
				break;
			case 9:
				uParam0->f_44 = func_765(17);
				return 1;
			case 10:
				uParam0->f_44 = func_765(18);
				return 1;
			case 11:
				uParam0->f_44 = func_765(19);
				return 1;
			case 12:
				uParam0->f_44 = func_765(20);
				return 1;
			case 13:
				uParam0->f_44 = func_765(21);
				return 1;
		}
	}
	return 0;
}

int func_343(var uParam0)
{
	int iVar0;
	var uVar1;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
		if (ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			if (!PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
			{
				iLocal_21 = iVar0;
				iLocal_22 = 0;
				uParam0->f_44 = func_765(22);
				return 1;
			}
		}
	}
	else if ((aggregate.bandana.func_23(&uVar1) && (uParam0->f_43 == 0 || uParam0->f_43 >= 3)) && MISC::GET_RANDOM_INT_IN_RANGE(0, 4) != 0)
	{
		uParam0->f_44 = func_765(25);
		return 1;
	}
	return 0;
}

int func_344(var uParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iLocal_21))
	{
		if (aggregate.aberdeenpigfarm.func_45() == -1)
		{
			iVar0 = (Global_1915170->f_3[*uParam0 /*447*/])->f_25;
		}
		else
		{
			iVar0 = (Global_1051387->f_69[*uParam0 /*76*/])->f_25;
		}
		if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_21, iVar0, false, 0))
		{
			uParam0->f_44 = func_765(24);
			return 1;
		}
	}
	return 0;
}

int func_403(var uParam0)
{
	func_797(uParam0, &Local_23);
	func_798(&Local_23);
	aggregate.fm_deathmatch_controller.func_2189(Global_35, Local_23.f_6, Local_23.f_9, 2, 1073741824 /* Float: 2f */);
	return 1;
}

void func_405(var uParam0)
{
	int iVar0;

	if (aggregate.mp_intro.func_3303(uParam0->f_3, &iVar0))
	{
		if (!TASK::_0x916B8E075ABC8B4E(iVar0, 1))
		{
			TASK::_0xE7FA07624574B79A(iVar0, Global_35, 2, 1, -1f, 1, 0, 0, 0);
		}
	}
}

void func_432(var uParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_23);
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[uParam0->f_3 /*76*/])->f_21);
	}
	PED::SET_PED_CONFIG_FLAG(iVar1, 234, false);
	PED::SET_PED_CONFIG_FLAG(iVar1, 252, true);
}

void func_450(var uParam0)
{
	CAM::SET_CAM_ACTIVE(uParam0->f_10, false);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_10))
	{
		CAM::DESTROY_CAM(uParam0->f_10, false);
	}
}

char* func_563(bool bParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = aggregate.shop_bait.func_950(bParam0, bParam1);
	if (!aggregate.fme_animal_tagging.func_1698(bVar0))
	{
		return 0;
	}
	return aggregate.mp_intro.func_2422(bVar0, -2141192156, 0, 1);
}

void func_602(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	var uVar5;
	struct<8> Var6;
	struct<8> Var14;

	vVar0 = -1;
	vVar0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			SCRIPTS::_0x31010318BA9897AC(&(vVar0.f_2), PLAYER::NETWORK_PLAYER_ID_TO_INT());
			aggregate.fme_animal_tagging.func_1552(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			SCRIPTS::_0x20F4CB76689ACDBC(&(vVar0.f_2));
			aggregate.fme_animal_tagging.func_1552(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar3])))
					{
					}
					else if (&Global_1273882->f_154[iVar3] == Global_1273882->f_10)
					{
					}
					else
					{
						SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1273882->f_154[iVar3]));
					}
					iVar3++;
				}
				aggregate.fme_animal_tagging.func_1553(&Var6, uVar5);
				Jump @400; //curOff = 229
				if (!SCRIPTS::_0x179A6F0EE2E79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				aggregate.fme_animal_tagging.func_1552(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(&(Global_1273882->f_154[iVar3])))
						{
						}
						else if (&Global_1273882->f_154[iVar3] == Global_1273882->f_10)
						{
						}
						else
						{
							SCRIPTS::_0x31010318BA9897AC(&uVar5, &(Global_1273882->f_154[iVar3]));
						}
						iVar3++;
					}
					aggregate.fme_animal_tagging.func_1553(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

bool func_630(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (VOLUME::_0x92A78D0BEDB332A3((Global_1051387->f_69[iParam1 /*76*/])->f_25))
	{
		if (aggregate.annesburg.func_142(iParam0, (Global_1051387->f_69[iParam1 /*76*/])->f_25, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_696(var uParam0)
{
	int iVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		iVar0 = 614617847;
		if (aggregate.doc_book.func_307() == 2026485318)
		{
			iVar0 = 654746159;
		}
		if (func_1034(uParam0, iVar0, joaat("root"), 1))
		{
			aggregate.mp_intro.func_1329(uParam0, 194785);
			aggregate.mp_intro.func_1329(uParam0, 195705);
			aggregate.mp_intro.func_1329(uParam0, 196305);
			aggregate.mp_intro.func_1329(uParam0, 196599);
			aggregate.mp_intro.func_1329(uParam0, 196802);
			aggregate.camera_item.func_77(uParam0, uParam0->f_2371.f_10);
			aggregate.mp_intro.func_1340(uParam0, aggregate.mp_intro.func_1339(&(uParam0->f_167.f_1778)));
			MISC::SET_BIT(&(uParam0->f_2371.f_9), 1);
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_2371.f_9, 1))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_2371.f_9, 2))
		{
			if (aggregate.mp_intro.func_1341(uParam0))
			{
				MISC::SET_BIT(&(uParam0->f_2371.f_9), 2);
			}
		}
	}
}

bool func_726(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
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
	if (!aggregate.mp_intro.func_1707(bParam3, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1287 = 1;
	uParam0->f_1288 = bParam3;
	uParam0->f_1279 = 219365;
	uParam0->f_1280 = 219374;
	uParam0->f_1281 = 219383;
	uParam0->f_1282 = 219383;
	uParam0->f_222 = iParam5;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

bool func_727(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (!aggregate.mp_intro.func_1705(uParam0->f_220, uParam0->f_221, &(uParam0->f_223)))
	{
		return false;
	}
	uParam0->f_1279 = 219365;
	uParam0->f_1280 = 219374;
	uParam0->f_1281 = 219383;
	uParam0->f_1282 = 219383;
	uParam0->f_222 = iParam4;
	aggregate.coffee_drinking.func_5(uParam0, 0);
	return true;
}

bool func_764(var uParam0)
{
	switch (uParam0->f_51)
	{
		case 0:
			if (!aggregate.saloon_dining.func_297(uParam0->f_4))
			{
				aggregate.fme_animal_tagging.func_928(uParam0, 1);
			}
			break;
		case 1:
			uParam0->f_44 = func_765(23);
			aggregate.fme_animal_tagging.func_928(uParam0, 4);
			break;
		case 4:
			aggregate.saloon_dining.func_463(uParam0, uParam0->f_44);
			aggregate.fme_animal_tagging.func_928(uParam0, 6);
			break;
		case 6:
			aggregate.fme_animal_tagging.func_928(uParam0, 0);
			return true;
	}
	return false;
}

char* func_765(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SALES_PITCH_BAIT";
		case 1:
			return "SALES_PITCH_BROWSING_BAIT";
		case 2:
			return "SALES_PITCH_BROWSING_FISHING_EQUIPMENT";
		case 3:
			return "SALES_PITCH_FISHING_EQUIPMENT";
		case 4:
			return "SELL_ITEM_ALLIGATOR_CALL";
		case 5:
			return "CHAT_SHOPKEEPER_LOCATION";
		case 6:
			return "CHAT_SHOPKEEPER_FISHING_LOCATION";
		case 7:
			return "CHAT_SHOPKEEPER_FISHING_LEGENDARY";
		case 8:
			return "CHAT_SHOPKEEPER_BAIT";
		case 9:
			return "CHAT_SHOPKEEPER_ALLIGATOR_CALL";
		case 10:
			return "CHAT_SHOPKEEPER_DUCK_CALL";
		case 11:
			return "CHAT_SHOPKEEPER_FISHING_EQUIPMENT";
		case 12:
			return "CHAT_SHOPKEEPER_LEGENDARY_LAKE_STURGEON";
		case 13:
			return "CHAT_SHOPKEEPER_LEGENDARY_MUSKIE";
		case 14:
			return "CHAT_SHOPKEEPER_LEGENDARY_SOCKEYE_SALMON";
		case 15:
			return "CHAT_SHOPKEEPER_LEGENDARY_STEELHEAD_TROUT";
		case 16:
			return "CHAT_SHOPKEEPER_LEGENDARY_BLUEGILL";
		case 17:
			return "CHAT_SHOPKEEPER_LEGENDARY_CHAIN_PICKEREL";
		case 18:
			return "CHAT_SHOPKEEPER_LEGENDARY_LONGNOSE_GAR";
		case 19:
			return "CHAT_SHOPKEEPER_LEGENDARY_LARGEMOUTH_BASS";
		case 20:
			return "CHAT_SHOPKEEPER_LEGENDARY_REDFIN_PICKEREL";
		case 21:
			return "CHAT_SHOPKEEPER_LEGENDARY_SMALLMOUTH_BASS";
		case 22:
			return "BRING_KILL_INTO_BUSINESS";
		case 23:
			return "DROP_KILL_INTO_BUSINESS";
		case 24:
			return "DROP_KILL_INTO_BUSINESS_WALK_OUT";
		case 25:
			return "GREET_PLAYER_MASK";
		default:
			break;
	}
	return "";
}

void func_797(var uParam0, var uParam1)
{
	int iVar0;

	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915170->f_3[uParam0->f_3 /*447*/])->f_23);
	}
	else
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[uParam0->f_3 /*76*/])->f_21);
	}
	func_1254(uParam1, iVar0, 2161.39f, -619.87f, 41.88f, 21.46f, 2162.375f, -617.725f, 41.8805f, 219.647f);
}

void func_798(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_10))
	{
		return;
	}
	uParam0->f_10 = CAM::CREATE_CAMERA(26379945, true);
	CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_10, uParam0->f_1, 0.101f, 1.358f, 0.5381f, true);
	CAM::POINT_CAM_AT_ENTITY(uParam0->f_10, uParam0->f_1, 0.2912f, -1.6309f, 0.3644f, true);
	CAM::SET_CAM_FOV(uParam0->f_10, 37f);
	CAM::SET_CAM_ACTIVE(uParam0->f_10, true);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
}

bool func_1034(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 == -1)
	{
		iVar0 = uParam0->f_3;
		if (iVar0 == 28)
		{
			iVar0 = 2;
		}
		if (!aggregate.mp_intro.func_1705(uParam0->f_4, iVar0, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate.mp_intro.func_1706(uParam0, uParam0->f_20))
		{
			if (!aggregate.mp_intro.func_1707(bParam1, &(uParam0->f_2094)))
			{
				return false;
			}
			if (aggregate.mp_intro.func_1706(uParam0, uParam0->f_20))
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
		if (!aggregate.mp_intro.func_1707(bParam1, &(uParam0->f_2094)))
		{
			return false;
		}
		if (!aggregate.net_camp.func_1328(uParam0, bParam2, 1, -1, 0, 1, 0, 0))
		{
			return false;
		}
	}
	uParam0->f_2094.f_70 = aggregate.binoculars.func_15(&(uParam0->f_2094));
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
	aggregate.mp_intro.func_1710(uParam0);
	aggregate.mp_intro.func_1105();
	aggregate.binoculars.func_16(uParam0);
	aggregate.generic_shop_ui_events.func_27();
	aggregate.mp_intro.func_1713(uParam0);
	uParam0->f_2094.f_50 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "GenericShop");
	uParam0->f_2094.f_51 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_50, "Title", MISC::GET_HASH_KEY(aggregate.mp_intro.func_1714(uParam0->f_3)));
	uParam0->f_2094.f_53 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Prompts");
	uParam0->f_2094.f_52 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2094.f_50, "Scene");
	aggregate.mp_intro.func_1715(uParam0, 6, joaat("IB_EXIT"));
	aggregate.mp_intro.func_1427(uParam0, 6, 1);
	aggregate.mp_intro.func_1427(uParam0, 6, 1);
	aggregate.mp_intro.func_1717(uParam0, 6, 0);
	aggregate.mp_intro.func_1715(uParam0, 1, joaat("ib_select"));
	aggregate.mp_intro.func_1427(uParam0, 1, 1);
	aggregate.mp_intro.func_1427(uParam0, 1, 1);
	aggregate.mp_intro.func_1717(uParam0, 1, 0);
	aggregate.mp_intro.func_1715(uParam0, 2, 1891107858);
	aggregate.mp_intro.func_1427(uParam0, 2, 0);
	aggregate.mp_intro.func_1427(uParam0, 2, 0);
	aggregate.mp_intro.func_1717(uParam0, 2, 0);
	aggregate.mp_intro.func_1715(uParam0, 3, -405106071);
	aggregate.mp_intro.func_1427(uParam0, 3, 0);
	aggregate.mp_intro.func_1427(uParam0, 3, 0);
	aggregate.mp_intro.func_1717(uParam0, 2, 0);
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
	uParam0->f_2094.f_149 = 257005;
	uParam0->f_2094.f_150 = 257889;
	uParam0->f_2094.f_151 = 258685;
	uParam0->f_2094.f_152 = 258804;
	uParam0->f_2094.f_46 = 1;
	return true;
}

bool func_1091(var uParam0)
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
	var uVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	struct<4> Var16;
	var uVar20;
	int iVar24;
	int iVar25;
	bool bVar26;
	int iVar27;
	bool bVar28;
	int iVar29;
	char* sVar30;

	iVar0 = aggregate.generic_shop_ui_events.func_30();
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, aggregate.generic_shop_ui_events.func_31());
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1413());
	iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1910());
	iVar4 = aggregate.net_camp.func_1529();
	iVar2 = (iVar2 + iVar4);
	if (iVar2 >= iVar3)
	{
		iVar2 = 0;
	}
	else if (iVar2 < 0)
	{
		iVar2 = (iVar3 - 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1413(), iVar2);
	if (iVar1 == -395279071)
	{
		iVar5 = aggregate.generic_shop_ui_events.func_11();
		iVar6 = iVar5;
		iVar7 = aggregate.mp_intro.func_1911(iVar6);
		(Global_1951131->f_1461.f_1[iVar6 /*9*/])->f_8 = iVar2;
		if (!aggregate.mp_intro.func_1912(iVar7, &iVar8, &uVar9))
		{
			return false;
		}
		iVar10 = Global_1951131->f_1461.f_1[iVar6 /*9*/][iVar2];
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1913(), iVar10);
		iVar11 = aggregate.bandana.func_44(iVar8, 1);
		aggregate.dynamic_craft_scenario.func_285(iVar11);
		aggregate.dynamic_craft_scenario.func_283();
		aggregate.generic_single_use_item.func_169(&(Global_1951131->f_1538), &(Global_1951131->f_1538.f_1[iVar11 /*3*/]), iVar11, 1);
		(Global_1951131->f_1538.f_1[aggregate.bandana.func_44(iVar8, 1) /*3*/])->f_1 = uVar9;
		if (aggregate.fme_animal_tagging.func_1294(iVar11) == -1)
		{
			aggregate.dynamic_craft_scenario.func_286(iVar11, 0);
		}
		aggregate.dynamic_craft_scenario.func_169(1, 1, 0, 1);
		aggregate.bandana.func_28(19, 0, 2, 0, 0);
		aggregate.mp_intro.func_1415(uParam0);
	}
	else if (iVar1 == -339889117)
	{
		bVar12 = false;
		switch (iVar2)
		{
			case 0:
				bVar12 = 1728382685; /* GXTEntry: "Right" */
				break;
			case 1:
				bVar12 = -649335959; /* GXTEntry: "Left" */
				break;
		}
		if (bVar12 != 0)
		{
			if (aggregate.mp_intro.func_1914(aggregate.mp_intro.func_1381(), bVar12, &iVar13, &iVar14))
			{
				DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(iVar0, aggregate.mp_intro.func_1915(), iVar13);
				DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(iVar0, aggregate.mp_intro.func_1916(), iVar14);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(iVar0, aggregate.mp_intro.func_1913(), bVar12);
			aggregate.mp_intro.func_1917(uParam0, bVar12);
			if ((aggregate.mp_intro.func_1355(uParam0) == -2144266389 || aggregate.mp_intro.func_1355(uParam0) == 2057502022) || aggregate.mp_intro.func_1355(uParam0) == 1275816411)
			{
				aggregate.shop_bait.func_1617(uParam0, aggregate.mp_intro.func_1381(), 0);
			}
			bVar15 = aggregate.mp_intro.func_1381();
			if (WEAPON::_0xD955FEE4B87AFA07(bVar15))
			{
				bVar26 = true;
				iVar27 = 1;
				bVar28 = true;
				iVar24 = -1610187846; /* GXTEntry: "Equip Sidearm" */
				iVar25 = 190417139; /* GXTEntry: "Equip Off-Hand Sidearm" */
				Var16 = { aggregate.bandana.func_59(bVar15, aggregate.bandana.func_60(0), bVar12, 0) };
				if (WEAPON::_0x6929E22158E52265(Global_35, 2, &uVar20))
				{
					if (aggregate.fishing_core.func_583(&Var16, &uVar20))
					{
						bVar26 = false;
						iVar27 = 0;
					}
				}
				if (WEAPON::_0x6929E22158E52265(Global_35, 3, &uVar20))
				{
					if (aggregate.fishing_core.func_583(&Var16, &uVar20))
					{
						bVar26 = false;
						iVar25 = 165536584; /* GXTEntry: "Unequip Off-Hand Sidearm" */
					}
				}
				if (!aggregate.bandana.func_74() || aggregate.net_camp.func_1547() < 2)
				{
					bVar28 = false;
				}
				aggregate.mp_intro.func_1723(uParam0, 3, iVar24, bVar26, 1, 0);
				aggregate.mp_intro.func_1723(uParam0, 2, iVar25, (iVar27 && bVar28), bVar28, 0);
			}
		}
	}
	else if (iVar1 == -239176093)
	{
		iVar29 = aggregate.hub_offers.func_106(uParam0);
		switch (iVar2)
		{
			case 0:
				sVar30 = aggregate.mp_intro.func_1921(1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar29))
				{
					aggregate.butchercreek.func_191(iVar29, 1);
				}
				break;
			case 1:
				sVar30 = aggregate.mp_intro.func_1921(2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar29))
				{
					aggregate.butchercreek.func_191(iVar29, 2);
				}
				break;
		}
		DATABINDING::_0xA3BD6FF95E713EE5(iVar0, aggregate.mp_intro.func_1913(), sVar30);
		if (ENTITY::DOES_ENTITY_EXIST(iVar29))
		{
			PED::_0xCC8CA3E88256E58F(iVar29, 0, 1, 1, 1, false);
		}
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_2094.f_52, "HorseGender", MISC::GET_HASH_KEY(sVar30));
	}
	return true;
}

void func_1254(var uParam0, int iParam1, vector3 vParam2, float fParam5, vector3 vParam6, float fParam9)
{
	uParam0->f_1 = iParam1;
	uParam0->f_2 = { vParam2 };
	uParam0->f_5 = fParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = fParam9;
}

int func_1463(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	struct<4> Var5;
	struct<5> Var9;
	bool bVar14;
	bool bVar15;
	struct<4> Var16;
	struct<15> Var20;

	iVar1 = 0;
	if (aggregate.doc_book.func_307() == 24043185)
	{
		iVar1 = 1;
	}
	if (iParam2 != 0)
	{
		if (*uParam0 != iParam2)
		{
			uParam1->f_1 = 9900;
			aggregate.coffee_drinking.func_5(uParam1, 1);
			return 0;
		}
	}
	bVar2 = false;
	iVar3 = 34;
	bVar4 = &uParam0->f_1[iVar3 /*3*/];
	Var5 = { aggregate.bandana.func_59(889965687 /* GXTEntry: "Wardrobe" */, aggregate.bandana.func_57(1), 1034665895, 1) };
	if (!bParam3)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			bVar2 = (&uParam0->f_1[iVar0 /*3*/] == 0 || aggregate.dynamic_craft_scenario.func_170(&(uParam0->f_1[iVar0 /*3*/]), 1));
			if (!bVar2)
			{
				bVar14 = &uParam0->f_1[iVar0 /*3*/];
				Var9 = { aggregate.bandana.func_41(bVar14, 1, 0) };
				aggregate.mp_intro.func_2307(iVar0, &(uParam0->f_1[iVar0 /*3*/]));
				if (aggregate.bandana.func_75(bVar14, Var9, Var9.f_4, 1, 0, 0) == 0)
				{
					aggregate.mp_intro.func_2308(uParam1, 1, iVar0, 0);
				}
				else if ((&uParam0->f_1[iVar0 /*3*/] != 1733464892 && &uParam0->f_1[iVar0 /*3*/] != -230310728) && &uParam0->f_1[iVar0 /*3*/] != 1326838792)
				{
					if (PED::_0x5FF9A878C3D115B8(&(uParam0->f_1[iVar0 /*3*/]), iVar1, 1) == 0)
					{
						aggregate.mp_intro.func_2308(uParam1, 1, iVar0, 0);
					}
					else
					{
						aggregate.mp_intro.func_2309(uParam1, iVar0, bVar14);
						Jump @356; //curOff = 317
						aggregate.mp_intro.func_2307(iVar0, &(Global_1951131->f_81[iVar0 /*12*/]));
						aggregate.dynamic_craft_scenario.func_287(Global_1951131->f_1776.f_1[iVar0 /*3*/], 16, 6);
						if (aggregate.mp_intro.func_1167(iVar0, bVar4))
						{
							if (!aggregate.mp_intro.func_2310(uParam0, iVar0, Var5))
							{
								aggregate.mp_intro.func_2308(uParam1, 1, iVar0, 0);
							}
							else
							{
								Jump @454; //curOff = 396
								Jump @454; //curOff = 399
								if ((bVar2 && aggregate.mp_intro.func_2311(iVar0)) && aggregate.fme_animal_tagging.func_1768(&Var5, (Global_1951131->f_81[iVar0 /*12*/])->f_9, 1) > 0)
								{
									aggregate.mp_intro.func_2308(uParam1, 1, iVar0, 0);
								}
							}
							iVar0++;
							aggregate.mp_intro.func_2313(&(Global_1951131->f_1776), uParam1, Var5);
							if (*uParam1 != 1)
							{
								aggregate.mp_intro.func_2308(uParam1, 0, -1, 0);
								return 1;
							}
							Jump @1103; //curOff = 500
							Var20.f_9 = -1591664384;
							bVar4 = aggregate.bandana.func_81(Var5, (Global_1951131->f_81[iVar3 /*12*/])->f_9, 1, -1);
							iVar0 = 0;
							while (iVar0 < 39)
							{
								bVar15 = aggregate.bandana.func_81(Var5, (Global_1951131->f_81[iVar0 /*12*/])->f_9, 1, -1);
								bVar2 = (&uParam0->f_1[iVar0 /*3*/] == 0 || aggregate.dynamic_craft_scenario.func_170(&(uParam0->f_1[iVar0 /*3*/]), 1));
								if (!aggregate.bandana.func_30(bVar15, 0) || aggregate.dynamic_craft_scenario.func_170(bVar15, 0))
								{
									aggregate.mp_intro.func_2307(iVar0, &(Global_1951131->f_81[iVar0 /*12*/]));
									aggregate.dynamic_craft_scenario.func_287(Global_1951131->f_1776.f_1[iVar0 /*3*/], 16, 6);
									if (aggregate.mp_intro.func_1167(iVar0, bVar4))
									{
										aggregate.mp_intro.func_2308(uParam1, 1, iVar0, 0);
									}
									else if (!bVar2 || (aggregate.mp_intro.func_2311(iVar0) && aggregate.fme_animal_tagging.func_1768(&Var5, (Global_1951131->f_81[iVar0 /*12*/])->f_9, 1) > 0))
									{
										aggregate.mp_intro.func_2308(uParam1, 2, iVar0, 0);
									}
									else
									{
										Jump @1046; //curOff = 748
										aggregate.mp_intro.func_2307(iVar0, bVar15);
										if (((!bVar2 && &uParam0->f_1[iVar0 /*3*/] != 1733464892) && &uParam0->f_1[iVar0 /*3*/] != -230310728) && &uParam0->f_1[iVar0 /*3*/] != 1326838792)
										{
											if (PED::_0x5FF9A878C3D115B8(&(uParam0->f_1[iVar0 /*3*/]), iVar1, 1) == 0)
											{
												aggregate.mp_intro.func_2308(uParam1, 1, iVar0, 0);
											}
											else
											{
												aggregate.mp_intro.func_2309(uParam1, iVar0, bVar15);
												Var16 = { aggregate.bandana.func_59(bVar15, Var5, (Global_1951131->f_81[iVar0 /*12*/])->f_9, 1) };
												if (!INVENTORY::_0x025A1B1FB03FBF61(aggregate.bandana.func_72(1), &Var16, &Var20, 15, 1))
												{
													aggregate.mp_intro.func_2308(uParam1, 1, iVar0, 0);
												}
												else if (aggregate.mp_intro.func_1167(iVar0, bVar4))
												{
													if (bVar2 || (!aggregate.aberdeenpigfarm.func_61(uParam0->f_1[iVar0 /*3*/], 2) && aggregate.aberdeenpigfarm.func_61(Global_1951131->f_1538.f_1[iVar0 /*3*/], 2)))
													{
														aggregate.mp_intro.func_2308(uParam1, 1, iVar0, 0);
													}
													else if (&uParam0->f_1[iVar0 /*3*/] != Var20.f_4 || (uParam0->f_1[iVar0 /*3*/])->f_1 != Var20.f_14)
													{
														aggregate.mp_intro.func_2308(uParam1, 2, iVar0, 0);
													}
													iVar0++;
													aggregate.mp_intro.func_2313(&(Global_1951131->f_1776), uParam1, Var5);
													if (*uParam1 != 1 && *uParam1 != 2)
													{
														aggregate.mp_intro.func_2308(uParam1, 0, -1, 0);
														return 1;
													}
													return 0;
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
		}
	}
}

int func_1639(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2[15];
	var uVar33[8];
	int iVar42;
	int iVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	bool bVar48;
	bool bVar49;
	struct<4> Var50;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<12> Var57;
	struct<14> Var71;

	if (!bParam1 && iParam2 == -1)
	{
		iParam2 = 0;
	}
	iVar0 = 0;
	bVar1 = Global_1051387->f_3214;
	iVar44 = 0;
	while (iVar44 < 8)
	{
		iVar43 = 0;
		if (iVar0 >= 8)
		{
		}
		else
		{
			bVar48 = aggregate.fme_animal_tagging.func_1717(iVar44, 1, 1);
			if (!aggregate.fme_animal_tagging.func_1529(bVar1, bVar48, &Var2, &iVar43, 1, 0))
			{
			}
			else
			{
				bVar46 = false;
				while (bVar46 < iVar43)
				{
					if (aggregate.doc_book.func_272(&(Var2[bVar46 /*2*/])))
					{
						bVar49 = false;
						iVar47 = 0;
						while (iVar47 < iVar42)
						{
							if (&uVar33[iVar47] == &Var2[bVar46 /*2*/])
							{
								bVar49 = true;
							}
							else
							{
								iVar47++;
							}
						}
						if (!bVar49)
						{
							uVar33[iVar42] = &Var2[bVar46 /*2*/];
							iVar42++;
							bVar45 = aggregate.fm_mission_controller.func_1632(&(Var2[bVar46 /*2*/]), 0, 0, 1);
							if (bVar45 > 0)
							{
								if (!bParam1)
								{
									Var50 = { aggregate.binoculars.func_81(&(Var2[bVar46 /*2*/]), 0) };
									aggregate.mp_intro.func_2535(uParam0, &Var50, &(Var2[bVar46 /*2*/]), bVar45, (iParam2 + iVar0));
								}
								iVar0++;
							}
						}
						Jump @292; //curOff = 264
					}
					else if (&Var2[bVar46 /*2*/] == 0)
					{
					}
					else
					{
						bVar46++;
					}
				}
			}
			iVar44++;
		}
	}
	if (iVar42 == 0)
	{
		return 0;
	}
	iVar54 = aggregate.mp_intro.func_2536(&(uVar33[0]));
	if (iVar54 == 0)
	{
		return iVar0;
	}
	Var57.f_9 = -1591664384;
	Var71 = { aggregate.binoculars.func_85(0, -1591664384, -1591664384, -1591664384, 0, iVar54, 0) };
	if (aggregate.binoculars.func_88(&Var71, &iVar55, &iVar56, 1))
	{
		bVar46 = false;
		while (bVar46 < iVar56)
		{
			if (aggregate.binoculars.func_71(&Var57, bVar46, iVar55, iVar56))
			{
				bVar49 = false;
				iVar47 = 0;
				while (iVar47 < iVar42)
				{
					if (&uVar33[iVar47] == Var57.f_4)
					{
						bVar49 = true;
					}
					else
					{
						iVar47++;
					}
				}
				if (!bVar49 && !aggregate.hub.func_86(&Var57))
				{
					if (!bParam1)
					{
						aggregate.mp_intro.func_2535(uParam0, &Var57, Var57.f_4, Var57.f_11, (iParam2 + iVar0));
					}
					iVar0++;
				}
			}
			bVar46++;
		}
		aggregate.binoculars.func_73(iVar55);
	}
	return iVar0;
}

int func_3224(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -932875117 /* GXTEntry: "Alaskan Ginseng" */;
		case 3:
			return 1660962977 /* GXTEntry: "American Ginseng" */;
		case 4:
			return -131409450 /* GXTEntry: "Bay Bolete" */;
		case 5:
			return -1487527516 /* GXTEntry: "Blackberry" */;
		case 6:
			return 561629573 /* GXTEntry: "Blackcurrant" */;
		case 7:
			return 1829679323 /* GXTEntry: "Burdock Root" */;
		case 8:
			return -618617794 /* GXTEntry: "Chanterelles" */;
		case 11:
			return 653458791 /* GXTEntry: "Common Bulrush" */;
		case 12:
			return 437319607 /* GXTEntry: "Creeping Thyme" */;
		case 13:
			return -1519488075 /* GXTEntry: "Desert Sage" */;
			Jump @901; //curOff = 436
			return 1014445254 /* GXTEntry: "English Mace" */;
			Jump @901; //curOff = 447
			return 224814421 /* GXTEntry: "Evergreen Huckleberry" */;
			Jump @901; //curOff = 458
			return 1012187868 /* GXTEntry: "Golden Currant" */;
			Jump @901; //curOff = 469
			return -1040706491 /* GXTEntry: "Hummingbird Sage" */;
			Jump @901; //curOff = 480
			return -1910627346 /* GXTEntry: "Indian Tobacco" */;
			Jump @901; //curOff = 491
			return -1812487593 /* GXTEntry: "Milkweed" */;
			Jump @901; //curOff = 502
			return 1983971282 /* GXTEntry: "Oleander Sage" */;
			Jump @901; //curOff = 513
			return 1561519041 /* GXTEntry: "Oregano" */;
			Jump @901; //curOff = 524
			return -980496853 /* GXTEntry: "Parasol Mushroom" */;
			Jump @901; //curOff = 535
			return -1738887126 /* GXTEntry: "Prairie Poppy" */;
			Jump @901; //curOff = 546
			return 424771379 /* GXTEntry: "Ram\'s Head" */;
			Jump @901; //curOff = 557
			return 787316814 /* GXTEntry: "Red Raspberry" */;
			Jump @901; //curOff = 568
			return 984616481 /* GXTEntry: "Red Sage" */;
			Jump @901; //curOff = 579
			return 1078285403 /* GXTEntry: "Vanilla Flower" */;
			Jump @901; //curOff = 590
			return -262897007 /* GXTEntry: "Violet Snowdrop" */;
			Jump @901; //curOff = 601
			return -1727702531 /* GXTEntry: "Wild Carrot" */;
			Jump @901; //curOff = 612
			return 1783324404 /* GXTEntry: "Wild Feverfew" */;
			Jump @901; //curOff = 623
			return 1288848815 /* GXTEntry: "Wild Mint" */;
			Jump @901; //curOff = 634
			return 918090738 /* GXTEntry: "Wintergreen Berry" */;
			Jump @901; //curOff = 645
			return 170272501 /* GXTEntry: "Yarrow" */;
			Jump @901; //curOff = 656
			return 2056650000 /* GXTEntry: "Acuna\'s Star Orchid" */;
			Jump @901; //curOff = 667
			return -1195354638 /* GXTEntry: "Cigar Orchid" */;
			Jump @901; //curOff = 678
			return 1077596967 /* GXTEntry: "Clamshell Orchid" */;
			Jump @901; //curOff = 689
			return -2145199848 /* GXTEntry: "Dragon\'s Mouth Orchid" */;
			Jump @901; //curOff = 700
			return 752824478 /* GXTEntry: "Ghost Orchid" */;
			Jump @901; //curOff = 711
			return -819513569 /* GXTEntry: "Lady of the Night Orchid" */;
			Jump @901; //curOff = 722
			return 1906968775 /* GXTEntry: "Lady Slipper Orchid" */;
			Jump @901; //curOff = 733
			return -135434663 /* GXTEntry: "Moccasin Flower Orchid" */;
			Jump @901; //curOff = 744
			return 920123680 /* GXTEntry: "Night Scented Orchid" */;
			Jump @901; //curOff = 755
			return 150470908 /* GXTEntry: "Queen\'s Orchid" */;
			Jump @901; //curOff = 766
			return -1665125257 /* GXTEntry: "Rat Tail Orchid" */;
			Jump @901; //curOff = 777
			return 1587928307 /* GXTEntry: "Sparrow\'s Egg Orchid" */;
			Jump @901; //curOff = 788
			return -1738925422 /* GXTEntry: "Spider Orchid" */;
			Jump @901; //curOff = 799
			return 656594395;
			Jump @901; //curOff = 810
			return -1174738785;
			Jump @901; //curOff = 821
			return 1073505629;
			Jump @901; //curOff = 832
			return -658674894;
			Jump @901; //curOff = 843
			return -1504155535;
			Jump @901; //curOff = 854
			return -1917345716;
			Jump @901; //curOff = 865
			return 1823406682;
			Jump @901; //curOff = 876
			return -1003637772;
			Jump @901; //curOff = 887
			return -1571524081;
			return 0;
		}

