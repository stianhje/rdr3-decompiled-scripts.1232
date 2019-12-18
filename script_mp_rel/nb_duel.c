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
	struct<8> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0 } ;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 3;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 2;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	struct<4> Local_34[32];
	struct<173> Local_163 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1061997773, 0, 0, 0, 0, 0 } ;
	var uLocal_336 = 0;
	var uLocal_337 = 1;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 1065353216;
	var uLocal_341 = 0;
	var uLocal_342 = 1065353216;
	var uLocal_343 = 1077936128;
	var uLocal_344 = 1108082688;
	var uLocal_345 = 1113325568;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 1;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	float fLocal_363 = 0f;
	float fLocal_364 = 0f;
	var uLocal_365 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

// __EntryFunction__ == aggregate_func_3089

void func_1(int iParam0)
{
	aggregate_func_1994(32, iParam0);
	aggregate_func_306();
	aggregate_func_4238();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 21, 41);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_13), 21, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_34, 129, 42);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_34[0 /*4*/]), 129, "m_clientData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
}

void func_34()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(3);
	aggregate_func_6497(&(Local_163.f_18.f_119));
	aggregate_func_7753(&(Local_163.f_18.f_119), 1);
	aggregate_func_6687(&(Local_163.f_18.f_119), 1);
}

void func_62()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = aggregate_func_2109();
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		aggregate_func_2442(iVar1);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_5[iVar1]))) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_13.f_7.f_5[iVar1])))
		{
			iVar2 = NETWORK::NET_TO_ENT(&(Local_13.f_7.f_5[iVar1]));
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
}

bool func_105()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = true;
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_5[iVar2])))
		{
			if (func_176(iVar2, &bVar1) || bVar1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((Local_163.f_18.f_102[iVar2 /*4*/])->f_1) && PED::IS_PED_HUMAN((Local_163.f_18.f_102[iVar2 /*4*/])->f_1))
				{
					PED::SET_PED_CONFIG_FLAG((Local_163.f_18.f_102[iVar2 /*4*/])->f_1, 467, true);
					WEAPON::SET_CURRENT_PED_WEAPON((Local_163.f_18.f_102[iVar2 /*4*/])->f_1, joaat("weapon_revolver_cattleman"), true, 0, true, false);
					PED::SET_PED_CONFIG_FLAG((Local_163.f_18.f_102[iVar2 /*4*/])->f_1, 249, true);
					func_177((Local_163.f_18.f_102[iVar2 /*4*/])->f_1);
				}
				bVar0 = false;
			}
			else
			{
				iVar2++;
			}
			if (bVar1)
			{
				aggregate_func_4983();
			}
			if (bVar0)
			{
				iVar3 = 0;
				while (iVar3 <= 1)
				{
					func_179(Local_13.f_7.f_9[iVar3], iVar3);
					iVar3++;
				}
			}
			return bVar0;
		}
	}
}

bool func_111()
{
	if (func_182())
	{
		return true;
	}
	if (aggregate_func_4644(65536))
	{
		func_184();
		if (aggregate_func_4644(256))
		{
			aggregate_func_4238();
		}
	}
	switch (Local_13.f_7)
	{
		case 0:
			func_186();
			break;
		case 1:
			aggregate_func_7939();
			break;
		case 2:
			func_188();
			break;
		case 3:
			func_189();
			break;
		case 4:
			func_190();
			break;
		case 5:
			func_191();
			break;
	}
	return false;
}

bool func_113()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = func_192(iVar0);
		if ((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || aggregate_func_2905(iVar1, 518218985))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_119()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	if (HUD::_0x2C729F2B94CEA911(func_199()))
	{
		HUD::_0xF66090013DE648D5(func_199());
		if (!HUD::_0xD0976CC34002DB57(func_199()))
		{
			iVar0 = 0;
		}
	}
	if (HUD::_0x2C729F2B94CEA911(func_200()))
	{
		HUD::_0xF66090013DE648D5(func_200());
		if (!HUD::_0xD0976CC34002DB57(func_200()))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (!aggregate_func_2053(func_201(iVar1)))
		{
			iVar0 = 0;
		}
		else if (!func_203(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_128()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_5[iVar0])))
		{
			(Local_163.f_18.f_102[iVar0 /*4*/])->f_1 = func_192(iVar0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[iVar0 /*4*/])->f_1))
			{
				if (PED::IS_PED_HUMAN((Local_163.f_18.f_102[iVar0 /*4*/])->f_1))
				{
					if (PED::ADD_RELATIONSHIP_GROUP(func_205(iVar0), &((Local_163.f_18.f_102[iVar0 /*4*/])->f_3)))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH((Local_163.f_18.f_102[iVar0 /*4*/])->f_1, (Local_163.f_18.f_102[iVar0 /*4*/])->f_3);
					}
					WEAPON::REMOVE_ALL_PED_WEAPONS((Local_163.f_18.f_102[iVar0 /*4*/])->f_1, true, false);
					aggregate_func_56((Local_163.f_18.f_102[iVar0 /*4*/])->f_1, joaat("weapon_revolver_cattleman"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 1, 0, 0, 0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((Local_163.f_18.f_102[iVar0 /*4*/])->f_1, true);
			}
		}
		iVar0++;
	}
	if ((Local_163.f_18.f_102[0 /*4*/])->f_3 != 0 && (Local_163.f_18.f_102[1 /*4*/])->f_3 != 0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, (Local_163.f_18.f_102[0 /*4*/])->f_3, (Local_163.f_18.f_102[1 /*4*/])->f_3);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, (Local_163.f_18.f_102[1 /*4*/])->f_3, (Local_163.f_18.f_102[0 /*4*/])->f_3);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_13.f_7.f_9[iVar1])))
		{
			Local_163.f_18.f_115[iVar1] = func_207(iVar1);
			if (!ANIMSCENE::_0x25557E324489393C(&(Local_163.f_18.f_115[iVar1])))
			{
			}
		}
		iVar1++;
	}
	if (ENTITY::DOES_ENTITY_EXIST((Local_163.f_18.f_102[0 /*4*/])->f_1))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(&(Local_163.f_18.f_115[0])))
		{
			func_208(Local_163.f_18.f_115[0], (Local_163.f_18.f_102[0 /*4*/])->f_1, "pedDuelA");
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST((Local_163.f_18.f_102[1 /*4*/])->f_1))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(&(Local_163.f_18.f_115[1])))
		{
			func_208(Local_163.f_18.f_115[1], (Local_163.f_18.f_102[1 /*4*/])->f_1, "pedDuelB");
		}
	}
	func_209();
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(&(Local_163.f_18.f_115[iVar1])))
		{
			func_210(Local_163.f_18.f_115[iVar1], iVar1);
			func_211(Local_163.f_18.f_115[iVar1]);
		}
		iVar1++;
	}
	aggregate_func_8909(2f, 1065353216 /* Float: 1f */);
	aggregate_func_8908(30f, 40f, 1, 1077936128 /* Float: 3f */, 0);
}

void func_134()
{
	Local_163.f_18.f_151++;
	func_221();
	aggregate_func_2548();
	if (aggregate_func_4644(65536) || aggregate_func_4644(512))
	{
		func_223();
		func_224();
		if (aggregate_func_4644(256))
		{
			func_225();
		}
	}
	func_226();
	aggregate_func_4310(Local_13.f_7);
	switch (Local_163.f_18)
	{
		case 0:
			func_228();
			break;
		case 1:
			func_229();
			break;
		case 2:
			func_230();
			break;
		case 3:
			func_231();
			break;
		case 4:
			func_232();
			break;
		case 5:
			func_233();
			break;
	}
}

bool func_137()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = func_192(iVar0);
		if (aggregate_func_1727(iVar1, 518218985, 1, 0) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar1, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 3, 17039360, -1082130432 /* Float: -1f */, -1, 0);
		}
		if (!aggregate_func_3434(8388608, -1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1) && aggregate_func_1198(&(Local_163.f_18.f_119), iVar1))
			{
				func_237();
			}
		}
		iVar0++;
	}
	return true;
}

int func_176(int iParam0, bool bParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(3))
	{
		*bParam1 = 1;
		return 0;
	}
	if (!aggregate_func_404(Local_13.f_7.f_5[iParam0], func_201(iParam0), func_249(iParam0), func_250(iParam0), 1, 0, func_251(iParam0) == 0, 0, 1))
	{
		*bParam1 = 1;
		return 0;
	}
	if (!PED::IS_PED_HUMAN(func_192(iParam0)))
	{
		aggregate_func_919(func_192(iParam0), 1);
	}
	else if (func_251(iParam0) != 0)
	{
		if (!PED::_APPLY_PED_METAPED_OUTFIT((Local_163.f_18.f_102[iParam0 /*4*/])->f_2, func_192(iParam0), true, false))
		{
			*bParam1 = 1;
			return 0;
		}
	}
	if (!func_254(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(func_192(iParam0), 6, true);
	}
	return 1;
}

int func_177(var uParam0)
{
	if (func_255(uParam0, &(Local_163.f_172.f_13)))
	{
		Local_163.f_172++;
		return 1;
	}
	return 0;
}

void func_179(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_256(iParam1), 0, func_257(iParam1), true, true);
	*uParam0 = NETWORK::_0xE0D73CDDEA79DDCD(iVar0);
}

bool func_182()
{
	int iVar0;
	int iVar1;

	if (Local_13.f_7 == 6)
	{
		return true;
	}
	iVar0 = func_192(0);
	iVar1 = func_192(1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) && (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)))
	{
		return true;
	}
	return false;
}

void func_184()
{
	if (!aggregate_func_7154())
	{
		if (aggregate_func_4644(512))
		{
			aggregate_func_7155(0);
		}
	}
	else if (Local_13.f_7 < 5)
	{
		aggregate_func_4310(5);
	}
}

void func_186()
{
	if (aggregate_func_4644(131072) && func_262())
	{
		aggregate_func_4310(1);
	}
}

void func_188()
{
	if (aggregate_func_4644(1))
	{
		aggregate_func_4310(3);
	}
}

void func_189()
{
	if (aggregate_func_4644(4))
	{
		aggregate_func_4310(4);
	}
}

void func_190()
{
	if (aggregate_func_4644(8))
	{
		aggregate_func_4310(6);
	}
}

void func_191()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = true;
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		iVar0 = func_192(iVar2);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !aggregate_func_2905(iVar0, 518218985))
		{
			bVar1 = false;
		}
		iVar2++;
	}
	if (bVar1)
	{
		aggregate_func_4310(6);
	}
}

int func_192(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_7382(iParam0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return NETWORK::NET_TO_PED(iVar0);
	}
	return 0;
}

char* func_199()
{
	return "OREDUL";
}

char* func_200()
{
	return "DULAUD";
}

int func_201(int iParam0)
{
	if (iParam0 == 2)
	{
		return func_267(997958153 /* GXTEntry: "Riding" */, 1);
	}
	switch (aggregate_func_4995())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return 233635031;
				case 1:
					return 233635031;
				default:
					break;
			}
			break;
		case 2:
		case 4:
			switch (iParam0)
			{
				case 0:
					return 888152471;
				case 1:
					return 888152471;
				default:
					break;
			}
			break;
		case 3:
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1651459012;
				case 1:
					return -1651459012;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_203(int iParam0)
{
	int iVar0;

	iVar0 = func_251(iParam0);
	if (iVar0 != 0)
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID((Local_163.f_18.f_102[iParam0 /*4*/])->f_2))
		{
			(Local_163.f_18.f_102[iParam0 /*4*/])->f_2 = PED::_REQUEST_METAPED_OUTFIT(func_201(iParam0), func_251(iParam0));
		}
		else
		{
			return PED::_0x610438375E5D1801((Local_163.f_18.f_102[iParam0 /*4*/])->f_2);
		}
	}
	else
	{
		return true;
	}
	return false;
}

char* func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BountyHunter";
		case 1:
			return "BountyTarget";
		default:
			break;
	}
	return "";
}

int func_207(int iParam0)
{
	int iVar0;

	iVar0 = aggregate_func_7382(iParam0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return NETWORK::_0xD7F6781A0ABAF6FB(iVar0);
	}
	return 0;
}

void func_208(var uParam0, int iParam1, char* sParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, sParam2, iParam1, 0);
}

void func_209()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;

	vVar0 = { ENTITY::GET_ENTITY_COORDS((Local_163.f_18.f_102[0 /*4*/])->f_1, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS((Local_163.f_18.f_102[1 /*4*/])->f_1, true, false) };
	vVar6 = { vVar0 + vVar3 / Vector(2f, 2f, 2f) };
	fVar9 = aggregate_func_3570(vVar0, vVar3);
	fVar10 = (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, true) + 5f);
	Local_163.f_18.f_118 = VOLUME::_CREATE_VOLUME_BOX(vVar6, 0f, 0f, fVar9, 5f, fVar10, 10f);
	aggregate_func_3685(Local_163.f_18.f_118, 0);
	POPULATION::_0x18262CAFEBB5FBE1(Local_163.f_18.f_118, 10208, 0, 0, -1, -1, 0);
	POPULATION::_0xB56D41A694E42E86(Local_163.f_18.f_118, 2762751, 0, 0, -1, -1, 2);
	EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-1130398329, vVar6, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, -1);
	vVar0.f_2 = (vVar0.z - 12f);
	vVar3.f_2 = (vVar3.z + 12f);
	PATHFIND::_0x4358BCF14C91761C(vVar0, vVar3, 7.5f, 1, 6, 0);
}

void func_210(var uParam0, int iParam1)
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, func_277(iParam1), func_278(iParam1), 2);
}

void func_211(var uParam0)
{
	ANIMSCENE::LOAD_ANIM_SCENE(*uParam0);
}

void func_221()
{
	int iVar0;

	if (!func_285())
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	Local_163.f_18.f_152 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(func_192(iVar0), true, false), Global_36);
}

void func_223()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (aggregate_func_3434(512, -1))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = func_192(0);
	iVar2 = func_192(1);
	iVar3 = func_192(2);
	if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, iVar0, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar2, iVar0, 1, 1)) || aggregate_func_558(iVar0, iVar3, 0))
	{
		aggregate_func_2922(512);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			aggregate_func_7155(0);
		}
		return;
	}
	else if (func_288() && (func_289(iVar2) || func_290(iVar2)))
	{
		aggregate_func_2922(512);
		Local_163.f_18.f_150 = 1024;
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			aggregate_func_7155(0);
		}
	}
	else if (aggregate_func_443(iVar1, 0, &(Local_163.f_18.f_119), &(Local_163.f_18.f_150), 0, 0) || aggregate_func_443(iVar2, 0, &(Local_163.f_18.f_119), &(Local_163.f_18.f_150), 0, 0))
	{
		if (Local_163.f_18.f_150 == 65536)
		{
			aggregate_func_2922(524288);
			func_292(&(Local_163.f_18.f_119), &(Local_163.f_18.f_150));
		}
		else
		{
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				aggregate_func_7155(0);
			}
			aggregate_func_2922(512);
		}
	}
}

void func_224()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar1 = 255;
	iVar5 = 0;
	while (iVar5 <= 2)
	{
		iVar6 = func_192(iVar5);
		if (ENTITY::IS_ENTITY_DEAD(iVar6))
		{
			if (((!aggregate_func_3434(8388608, -1) && aggregate_func_3434(512, -1)) && aggregate_func_1198(&(Local_163.f_18.f_119), iVar6)) && PED::IS_PED_HUMAN(iVar6))
			{
				func_237();
			}
		}
		else if (func_293(iVar5))
		{
			func_294(iVar5);
		}
		else
		{
			iVar7 = 0;
			while (iVar7 < 32)
			{
				bVar4 = false;
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar7);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
				}
				else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
				{
				}
				else
				{
					iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
					{
					}
					else
					{
						iVar3 = iVar0;
						if (aggregate_func_4240((Local_34[iVar3 /*4*/])->f_1, 512) && PLAYER::IS_PLAYER_DEAD(iVar1))
						{
							if (NETWORK::PARTICIPANT_ID_TO_INT() == iVar3)
							{
								aggregate_func_4243(&((Local_34[iVar3 /*4*/])->f_1), 512);
								SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_13), iVar7);
							}
							if (MAP::DOES_BLIP_EXIST(&(Local_163.f_18.f_102[iVar5 /*4*/])))
							{
								aggregate_func_2442(iVar5);
							}
						}
						else if (aggregate_func_4240((Local_34[iVar3 /*4*/])->f_1, 512))
						{
							if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
							{
								if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_12), iVar7))
								{
									SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_12), iVar7);
								}
							}
							if (!NETWORK::_0x255A5EF65EDA9167(iVar1))
							{
							}
							else
							{
								iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
								{
								}
								else
								{
									if (aggregate_func_918(iVar2, iVar6, 1, 1) < 200f)
									{
										bVar4 = true;
									}
									if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
									{
										if (bVar4)
										{
											if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_13), iVar7))
											{
												SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_13), iVar7);
											}
										}
										else if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_13), iVar7))
										{
											SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_13), iVar7);
										}
									}
									if (PLAYER::GET_PLAYER_INDEX() == iVar1)
									{
										if (func_296(&iVar6, iVar7, bVar4))
										{
											if (!MAP::DOES_BLIP_EXIST(&(Local_163.f_18.f_102[iVar5 /*4*/])))
											{
												func_297(iVar5, 942020339);
											}
										}
										else if (MAP::DOES_BLIP_EXIST(&(Local_163.f_18.f_102[iVar5 /*4*/])))
										{
											aggregate_func_2442(iVar5);
										}
									}
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar6))
									{
										if (PED::IS_PED_HUMAN(iVar6))
										{
											if (!PED::_0x6E5CBCB3941D7D08(iVar6, iVar2))
											{
												PED::REGISTER_TARGET(iVar6, iVar2, 1);
											}
											if (PED::_0x9682F850056C9ADE(iVar6) || PED::_0x3AA24CCC0D451379(iVar6))
											{
												if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
												{
													if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_12), iVar7))
													{
														SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_12), iVar7);
													}
												}
											}
											else if (aggregate_func_1727(iVar6, -2117564886, 1, 0))
											{
												if (bVar4)
												{
													TASK::TASK_COMBAT_HATED_TARGETS(iVar6, -1082130432 /* Float: -1f */);
													PED::_0x2208438012482A1A(iVar6, false, false);
												}
												else
												{
													func_298(iVar5);
													TASK::_TASK_SMART_FLEE_STYLE_PED(iVar6, iVar2, 3, 17039360, -1082130432 /* Float: -1f */, -1, 0);
												}
											}
											else if (!bVar4)
											{
												PED::_0x4707E9C23D8CA3FE(iVar6, iVar2);
												if (ENTITY::IS_ENTITY_DEAD(func_192(func_299(iVar5))) && !SCRIPTS::_0x179A6F0EE2E79026(&(Local_13.f_7.f_13)))
												{
													func_298(iVar5);
													TASK::CLEAR_PED_TASKS(iVar6, 1, 0);
													TASK::_TASK_SMART_FLEE_STYLE_PED(iVar6, iVar2, 3, 17039360, -1082130432 /* Float: -1f */, -1, 0);
												}
											}
										}
										else if (aggregate_func_1727(iVar6, 518218985, 1, 0))
										{
											func_298(iVar5);
											TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar6, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 3, 17039360, -1082130432 /* Float: -1f */, -1, 0);
										}
									}
									Jump @976; //curOff = 843
									if (func_300(iVar5))
									{
										if (aggregate_func_1727(iVar6, 518218985, 1, 0))
										{
											func_298(iVar5);
											TASK::_TASK_SMART_FLEE_STYLE_COORD(iVar6, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), 3, 17039360, -1082130432 /* Float: -1f */, -1, 0);
											if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
											{
												if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_12), iVar7))
												{
													SCRIPTS::_0x31010318BA9897AC(&(Local_13.f_7.f_12), iVar7);
												}
											}
										}
									}
									else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
									{
										if (SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_12), iVar7))
										{
											SCRIPTS::_0xD426E2E3288469D6(&(Local_13.f_7.f_12), iVar7);
										}
									}
								}
							}
							iVar7++;
							iVar5++;
						}
					}
				}
			}
		}
	}
}

void func_225()
{
	if (!func_301())
	{
		if ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 < 13)
		{
			(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 = 13;
		}
		return;
	}
	if (func_302())
	{
		if ((func_303() > 70f && aggregate_func_4260(&(Local_13.f_7.f_2))) && aggregate_func_4298(&(Local_13.f_7.f_2)) < 16.5f)
		{
			return;
		}
		if ((!aggregate_func_4260(&(Local_13.f_7.f_2)) || aggregate_func_4298(&(Local_13.f_7.f_2)) > 5f) && !AUDIO::_0xA2CAC9DEF0195E6F(1))
		{
			if ((func_303() < 100f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[0 /*4*/])->f_1)) && ENTITY::HAS_ANIM_EVENT_FIRED((Local_163.f_18.f_102[func_306((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1) /*4*/])->f_1, -446424746))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_307((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1)))
				{
					func_308((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1);
				}
				(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1++;
			}
		}
	}
	else
	{
		if (((func_303() > 70f && func_306((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1) == 0) && aggregate_func_4260(&(Local_13.f_7.f_2))) && aggregate_func_4298(&(Local_13.f_7.f_2)) < 16.5f)
		{
			return;
		}
		if (!AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[0 /*4*/])->f_1) && !AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[1 /*4*/])->f_1))
		{
			if ((func_303() < 100f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[func_306((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1) /*4*/])->f_1)) && (func_306((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1) != 0 || ENTITY::HAS_ANIM_EVENT_FIRED((Local_163.f_18.f_102[func_306((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1) /*4*/])->f_1, -446424746)))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME((Local_163.f_18.f_102[0 /*4*/])->f_1, func_309(0));
				AUDIO::SET_AMBIENT_VOICE_NAME((Local_163.f_18.f_102[1 /*4*/])->f_1, func_309(1));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(func_307((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1)))
				{
					func_308((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1);
				}
				(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1++;
			}
		}
	}
}

void func_226()
{
	if (!aggregate_func_3056(32, 255))
	{
		if (func_310(0))
		{
			aggregate_func_6723();
		}
	}
	else if (!aggregate_func_4281(8))
	{
		if (func_312())
		{
			aggregate_func_6724();
		}
	}
	else if (!aggregate_func_4281(16))
	{
		if (func_314())
		{
			aggregate_func_6692();
		}
	}
}

void func_228()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	if (!aggregate_func_4644(65536))
	{
		if (func_303() < 200f)
		{
			aggregate_func_2922(65536);
		}
	}
	else
	{
		iVar0 = func_192(0);
		iVar1 = func_192(1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!aggregate_func_4644(256))
			{
				if (func_316(80f))
				{
					aggregate_func_2922(256);
				}
			}
			else if (ANIMSCENE::_0xCBFC7725DE6CE2E0(func_207(0), 0) && ANIMSCENE::_0xCBFC7725DE6CE2E0(func_207(1), 0))
			{
				if (!aggregate_func_3434(128, -1))
				{
					iVar3 = 0;
					while (iVar3 <= 1)
					{
						iVar2 = func_207(iVar3);
						iVar4 = 0;
						while (iVar4 <= (2 - 1))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(iVar2, func_317(iVar4));
							iVar4++;
						}
						aggregate_func_2922(128);
						iVar3++;
					}
				}
				else if (!aggregate_func_3434(131072, -1))
				{
					bVar5 = true;
					iVar3 = 0;
					while (iVar3 <= 1)
					{
						iVar2 = func_207(iVar3);
						iVar6 = 0;
						while (iVar6 <= (2 - 1))
						{
							if (!ANIMSCENE::_0x23E33CB9F4A3F547(iVar2, func_317(iVar6)))
							{
								bVar5 = false;
								if (!ANIMSCENE::_0x0DF57F86FE71DBE5(iVar2, func_317(iVar6)))
								{
									ANIMSCENE::_0xDF7B5144E25CD3FE(iVar2, func_317(iVar6));
								}
							}
							else
							{
								iVar6++;
							}
						}
						iVar3++;
					}
					if (bVar5)
					{
						aggregate_func_2922(131072);
					}
				}
			}
			iVar3 = 0;
			while (iVar3 <= 1)
			{
				iVar2 = func_207(iVar3);
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar2))
				{
					if ((!ANIMSCENE::_0xCBFC7725DE6CE2E0(iVar2, 0) && ANIMSCENE::_0x477122B8D05E7968(iVar2, 1, 0)) && ANIMSCENE::_0x95531A4A20CCE7BC(iVar2, 0))
					{
						ANIMSCENE::START_ANIM_SCENE(iVar2);
					}
				}
				iVar3++;
			}
		}
	}
}

void func_229()
{
	if (func_318() && func_310(1))
	{
		aggregate_func_6723();
	}
}

void func_230()
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];
	int iVar5;

	func_319();
	iVar0 = func_192(0);
	iVar1 = func_192(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!aggregate_func_4644(1))
		{
			if (!aggregate_func_4644(16))
			{
				if (func_320())
				{
					aggregate_func_2922(16);
				}
			}
			else
			{
				StringCopy(&cVar2, "", 24);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1329557607))
				{
					StringCopy(&cVar2, func_317(1), 24);
					iVar5 = 1;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -2037335242))
				{
					StringCopy(&cVar2, func_317(0), 24);
					iVar5 = 0;
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
				{
					if (func_321())
					{
						func_322(iVar5);
					}
				}
			}
		}
	}
}

void func_231()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_285())
	{
		iVar0 = func_192(0);
		iVar1 = func_192(1);
		iVar3 = func_207(0);
		iVar4 = func_207(1);
		iVar2 = 1;
	}
	else
	{
		iVar0 = func_192(1);
		iVar1 = func_192(0);
		iVar3 = func_207(1);
		iVar4 = func_207(0);
		iVar2 = 0;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::SET_PED_RESET_FLAG(iVar0, 5, true);
	}
	if (!aggregate_func_4644(2))
	{
		if (ANIMSCENE::_0x25557E324489393C(iVar4))
		{
			if (ANIMSCENE::_0xD8254CB2C586412B(iVar4, 1) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar1, 1397652762))
			{
				func_294(iVar2);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iVar4);
					aggregate_func_2922(2);
				}
			}
		}
	}
	if (ANIMSCENE::_0x25557E324489393C(iVar3))
	{
		if (!aggregate_func_3434(262144, -1) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 199968317))
		{
			func_323(iVar2);
			EVENT::ADD_SHOCKING_EVENT_AT_POSITION(-998484125, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 3, 3);
			aggregate_func_5005(14, aggregate_func_5076());
			aggregate_func_2922(262144);
		}
		if ((aggregate_func_4995() != 0 && NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar3)) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 2116222025))
		{
			func_308(15);
		}
		if ((NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar3) && ANIMSCENE::_0xD8254CB2C586412B(iVar3, 0)) && ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if ((func_285() && func_327()) && aggregate_func_2083())
			{
				aggregate_func_2922(2097152);
			}
			aggregate_func_2922(4);
		}
	}
}

void func_232()
{
	int iVar0;
	int iVar1;
	float fVar2;

	func_319();
	if (!func_285())
	{
		iVar0 = func_192(0);
		iVar1 = func_192(1);
	}
	else
	{
		iVar0 = func_192(1);
		iVar1 = func_192(0);
	}
	fVar2 = func_303();
	if (!aggregate_func_4644(1048576) && aggregate_func_4644(524288))
	{
		TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
		aggregate_func_2922(1048576);
	}
	if (!aggregate_func_927(iVar0, 242628503))
	{
		if (!aggregate_func_4644(32768))
		{
			func_308(21);
			aggregate_func_2922(32768);
		}
		func_330(&(Local_163.f_18.f_119), 1);
		aggregate_func_4242(&(Local_163.f_18.f_119), 4f);
		aggregate_func_4242(&(Local_163.f_18.f_119), 3000);
		func_333();
	}
	else if (func_288())
	{
		if ((aggregate_func_827(iVar0) != iVar1 && TASK::GET_SEQUENCE_PROGRESS(iVar0) == 1) && !aggregate_func_8919(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				TASK::CLEAR_PED_TASKS(iVar0, 1, 0);
			}
		}
	}
	if (!aggregate_func_3434(4194304, -1))
	{
		if (aggregate_func_2088(iVar0))
		{
			aggregate_func_4242(&(Local_163.f_18.f_119), 5000);
			func_337(&(Local_163.f_18.f_119), &(Local_163.f_18.f_150));
			aggregate_func_2922(4194304);
		}
	}
	else if ((Local_163.f_18.f_151 % 5) == 0)
	{
		aggregate_func_4242(&(Local_163.f_18.f_119), func_338(&iVar0));
	}
	func_339(&iVar0, &iVar1);
	if (fVar2 > 150f)
	{
		aggregate_func_2922(8);
	}
}

void func_233()
{
	int iVar0;

	func_319();
	func_340();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (ANIMSCENE::_0x25557E324489393C(func_207(iVar0)) && NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_207(iVar0)))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(func_207(iVar0));
		}
		iVar0++;
	}
}

void func_237()
{
	if (!aggregate_func_3434(8388608, -1))
	{
		aggregate_func_1617(151445061, 0, 0);
		aggregate_func_2922(8388608);
	}
}

Vector3 func_249(int iParam0)
{
	switch (aggregate_func_5076())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -346.477f, 735.528f, 116.405f;
				case 1:
					return -349.103f, 745.695f, 116.018f;
				case 2:
					return -351.5215f, 722.8586f, 116.1461f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -366.0992f, 820.8414f, 116.0534f;
				case 1:
					return -355.0117f, 826.3661f, 116.719f;
				case 2:
					return -362.6787f, 834.6184f, 115.8442f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2956.972f, 518.731f, 43.804f;
				case 1:
					return 2957.322f, 529.225f, 43.54f;
				case 2:
					return 2961.729f, 486.6328f, 45.73552f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2970.62f, 537.576f, 42.438f;
				case 1:
					return 2981.581f, 536.7006f, 43.4864f;
				case 2:
					return 2957.393f, 544.2678f, 43.55483f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1440.892f, -1415.935f, 78.352f;
				case 1:
					return 1447.741f, -1420.383f, 78.14435f;
				case 2:
					return 1432.995f, -1425.228f, 78.83875f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 1402.151f, -1426.658f, 80.1878f;
				case 1:
					return 1385.535f, -1418.823f, 79.4824f;
				case 2:
					return 1398.346f, -1433.381f, 78.73728f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 2991.254f, 1352.789f, 43.07695f;
				case 1:
					return 3000.669f, 1350.114f, 42.63547f;
				case 2:
					return 2982.754f, 1336.593f, 43.04593f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 2910.962f, 1228.108f, 44.6594f;
				case 1:
					return 2920.044f, 1235.725f, 44.4294f;
				case 2:
					return 2901.357f, 1220.52f, 43.50235f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -829.6442f, -1548.552f, 60.5441f;
				case 1:
					return -838.1262f, -1539.315f, 60.4531f;
				case 2:
					return -830.1406f, -1521.422f, 61.99331f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -1013.736f, -1139.281f, 57.0719f;
				case 1:
					return -1025.452f, -1139.188f, 57.6643f;
				case 2:
					return -968.7588f, -1128.097f, 55.78428f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_250(int iParam0)
{
	switch (aggregate_func_5076())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 14.4829f;
				case 1:
					return 194.4829f;
				case 2:
					return -20.45f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 288.602f;
				case 1:
					return 115.7427f;
				case 2:
					return 159.67f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1.91f;
				case 1:
					return 178.09f;
				case 2:
					return 114.26f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 271.0107f;
				case 1:
					return 89.6575f;
				case 2:
					return 151.88f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -125.82f;
				case 1:
					return 45.69f;
				case 2:
					return 161.81f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 71.7603f;
				case 1:
					return 238.2457f;
				case 2:
					return 63.42f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -107.55f;
				case 1:
					return 73.7f;
				case 2:
					return 164.59f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 290.9834f;
				case 1:
					return 131.5673f;
				case 2:
					return -81.82f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 46.9745f;
				case 1:
					return 219.4785f;
				case 2:
					return -7.29f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 89.1882f;
				case 1:
					return 256.1215f;
				case 2:
					return -25.71f;
				default:
					break;
			}
			break;
	}
	return 0f;
}

int func_251(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -728053340;
				case 1:
					return -2129848553;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 885345434;
				case 1:
					return -34547514;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -163161156;
				case 1:
					return -661073532;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1757841025;
				case 1:
					return 2079539955;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1577148566;
				case 1:
					return -673281247;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1178432771;
				case 1:
					return -1878169871;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_254(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			switch (aggregate_func_4995())
			{
				case 3:
				case 4:
					return false;
				default:
					break;
			}
			break;
	}
	return true;
}

bool func_255(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(((*uParam1)[iVar0 /*9*/])->f_6))
		{
			((*uParam1)[iVar0 /*9*/])->f_6 = uParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_256(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_285())
			{
				return "script@beat@town@duelWinner@duelPreDuelerA_Lose";
			}
			else
			{
				return "script@beat@town@duelWinner@duelPreDuelerA";
			}
			break;
		case 1:
			if (func_285())
			{
				return "script@beat@town@duelWinner@duelPreDuelerB_Win";
			}
			else
			{
				return "script@beat@town@duelWinner@duelPreDuelerB";
			}
			break;
		default:
			return "";
	}
	return "";
}

char* func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pblPacingIdles";
		case 1:
			return "pblPacingIdles";
		default:
			break;
	}
	return "";
}

bool func_262()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 1)
	{
		iVar0 = func_207(iVar1);
		if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(iVar0, 0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	iVar0 = iParam0->f_9;
	switch (iVar0)
	{
		case -626681985:
			if ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 < iParam0->f_11)
			{
				(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 = iParam0->f_11;
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					aggregate_func_4283(&(Local_13.f_7.f_2));
				}
			}
			func_355(iParam0->f_11);
			break;
		case 1626333639:
			func_356(iParam0->f_11);
			break;
		case -588518817:
			iVar1 = iParam0->f_11;
			iVar3 = (Local_163.f_18.f_102[iVar1 /*4*/])->f_1;
			iVar2 = (Local_163.f_18.f_102[func_299(iVar1) /*4*/])->f_1;
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar3, true, false) };
			vVar4.f_2 = (vVar4.z + 2f);
			func_357(iVar2, vVar4, iVar3, 0, 0, 0, 0, 0f, 0);
			break;
		case -413831947:
			iVar1 = iParam0->f_11;
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[iVar1 /*4*/])->f_1))
			{
				PED::SET_PED_CONFIG_FLAG((Local_163.f_18.f_102[iVar1 /*4*/])->f_1, 6, true);
				aggregate_func_1172((Local_163.f_18.f_102[iVar1 /*4*/])->f_1, 1, 0);
			}
			break;
	}
}

int func_267(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153: /* GXTEntry: "Riding" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 918497150: /* GXTEntry: "Draft" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-62570976, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case 356361174: /* GXTEntry: "Race" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-165971473, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -1771663379: /* GXTEntry: "War" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-2049218219, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		case -311956671: /* GXTEntry: "Work" */
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(989061023, 0, -1190799868, iParam1, 0, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(1468170991, 0, -1190799868, 1, 0, 0f, 0f, 0f);
}

Vector3 func_277(int iParam0)
{
	switch (aggregate_func_5076())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -346.477f, 735.528f, 116.405f;
				case 1:
					return -349.103f, 745.695f, 115.948f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -366.0992f, 820.8414f, 115.033f;
				case 1:
					return -355.0117f, 826.3661f, 115.649f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 2956.972f, 518.731f, 43.884f;
				case 1:
					return 2957.322f, 529.225f, 43.47f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2970.62f, 537.576f, 42.508f;
				case 1:
					return 2981.581f, 536.7006f, 42.426f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1440.892f, -1415.935f, 78.322f;
				case 1:
					return 1447.741f, -1420.383f, 78.034f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 1402.151f, -1426.658f, 79.148f;
				case 1:
					return 1385.535f, -1418.823f, 78.412f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 2991.254f, 1352.789f, 43.037f;
				case 1:
					return 3000.669f, 1350.114f, 42.535f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 2910.962f, 1228.108f, 43.6594f;
				case 1:
					return 2920.044f, 1235.725f, 43.359f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -829.6442f, -1548.552f, 59.524f;
				case 1:
					return -838.415f, -1539.657f, 59.372f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -1013.736f, -1139.281f, 56.062f;
				case 1:
					return -1025.452f, -1139.188f, 56.594f;
				default:
					break;
			}
			break;
	}
	return aggregate_func_4952();
}

Vector3 func_278(int iParam0)
{
	switch (aggregate_func_5076())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 2.8f, 0f, 14.4829f;
				case 1:
					return 5.7f, 0f, 172.152f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 4.5f, 0f, 288.602f;
				case 1:
					return 0f, 0f, 93.4118f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1.1f, 0f, -1.91f;
				case 1:
					return 1.5f, 0f, 155.7591f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 2.3f, 0f, -88.989f;
				case 1:
					return 0f, 0f, 67.3266f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 0f, 0f, -125.82f;
				case 1:
					return 0f, 0f, 23.3591f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 1.6f, 0f, 71.7603f;
				case 1:
					return 3.1f, 0f, 215.9148f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1.5f, 0f, -107.55f;
				case 1:
					return 5.374f, 0f, 42.525f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 2.5f, 0f, 290.9834f;
				case 1:
					return 2.1f, 0f, 109.2364f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1.8f, 0f, 46.9745f;
				case 1:
					return -7.1f, 3.9f, -162.852f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 5.5f, 0f, 89.1882f;
				case 1:
					return -3.6f, 0f, 233.7906f;
				default:
					break;
			}
			break;
	}
	return aggregate_func_4952();
}

bool func_285()
{
	switch (aggregate_func_4995())
	{
		case 0:
			return false;
		case 1:
			return false;
		case 3:
			return false;
		default:
			break;
	}
	return true;
}

bool func_288()
{
	switch (aggregate_func_4995())
	{
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

int func_289(int iParam0)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (aggregate_func_827(Global_35) == iParam0)
	{
		return 1;
	}
	iVar0 = func_374(Global_35);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (ENTITY::_0xEF2D9ED7CE684F08(iParam0) == Global_35)
	{
		return 1;
	}
	return 0;
}

void func_292(var uParam0, var uParam1)
{
	if (uParam0->f_16 != 0 || *uParam1 != 0)
	{
		Global_1939168->f_24 = 0;
		Global_1939168->f_25 = 0;
		Global_1939168->f_19 = 0;
		Global_1939168->f_33 = 0;
		uParam0->f_8 = aggregate_func_1510();
		PLAYER::_0xEACEBAAE0A33FB3F(PLAYER::PLAYER_ID());
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_5 = 0;
	uParam0->f_10 = 0;
	aggregate_func_5619(uParam0, 0);
	*uParam1 = 0;
	uParam0->f_16 = 0;
}

bool func_293(int iParam0)
{
	if (!aggregate_func_4644(262144))
	{
		return false;
	}
	if (!aggregate_func_4644(512))
	{
		return false;
	}
	if (iParam0 == 2)
	{
		return false;
	}
	if (func_285())
	{
		if (iParam0 == 1)
		{
			return false;
		}
	}
	else if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

void func_294(int iParam0)
{
	struct<15> Var0;

	Var0 = { aggregate_func_1739(-413831947) };
	Var0.f_11 = iParam0;
	aggregate_func_7153(&Var0);
}

bool func_296(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		return false;
	}
	if (!SCRIPTS::_0x72B2E00C9BAC6789(&(Local_13.f_7.f_13), iParam1))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(*iParam0))
	{
		return false;
	}
	return true;
}

void func_297(int iParam0, int iParam1)
{
	if (!aggregate_func_7208(255))
	{
		aggregate_func_2442(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(&(Local_163.f_18.f_102[iParam0 /*4*/])))
	{
		Local_163.f_18.f_102[iParam0 /*4*/] = MAP::_0x23F74C2FDA6E7C61(-89429847, func_192(iParam0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(&(Local_163.f_18.f_102[iParam0 /*4*/]), func_411(iParam0));
		MAP::_0x662D364ABF16DE2F(&(Local_163.f_18.f_102[iParam0 /*4*/]), -1440522869);
	}
	if (iParam1 != 0)
	{
		MAP::_0x662D364ABF16DE2F(&(Local_163.f_18.f_102[iParam0 /*4*/]), 942020339);
	}
}

void func_298(int iParam0)
{
	int iVar0;

	iVar0 = func_192(iParam0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 230, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
	if (func_327())
	{
		if (iParam0 == 0)
		{
			PED::_0xB8B6430EAD2D2437(iVar0, 1984370607);
		}
		else if (PED::IS_PED_MALE(iVar0))
		{
			PED::_0xB8B6430EAD2D2437(iVar0, -1143783207);
		}
		else
		{
			PED::_0xB8B6430EAD2D2437(iVar0, -1739631437);
		}
	}
	else
	{
		PED::_0xB8B6430EAD2D2437(iVar0, 1286684151);
	}
	PED::_0x24C82EF607105FAA(iVar0, joaat("aggressive"));
}

int func_299(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_300(int iParam0)
{
	if (Local_13.f_7 != 5)
	{
		return false;
	}
	if (aggregate_func_4644(512))
	{
		return false;
	}
	if (SCRIPTS::_0x179A6F0EE2E79026(&(Local_13.f_7.f_13)))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(func_192(iParam0)))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_192(func_299(iParam0))))
	{
		return false;
	}
	return true;
}

bool func_301()
{
	int iVar0;

	if (aggregate_func_4644(16))
	{
		return false;
	}
	iVar0 = 26;
	switch (aggregate_func_4995())
	{
		case 0:
			switch (aggregate_func_4995())
			{
				case 0:
					iVar0 = 6;
					break;
				case 1:
					iVar0 = 12;
					break;
			}
			break;
		default:
			iVar0 = 4;
			break;
	}
	if ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 > iVar0)
	{
		return false;
	}
	return true;
}

bool func_302()
{
	switch (aggregate_func_4995())
	{
		case 0:
			return false;
		default:
			break;
	}
	return true;
}

float func_303()
{
	return Local_163.f_18.f_152;
}

int func_306(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							return 0;
						case 2:
							return 1;
						case 3:
							return 0;
						case 4:
							return 1;
						case 5:
							return 0;
						case 6:
							return 1;
						case 13:
							return 0;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1;
						case 1:
							return 0;
						case 3:
							return 0;
						case 4:
							return 1;
						case 5:
							return 0;
						case 6:
							return 1;
						case 7:
							return 0;
						case 8:
							return 1;
						case 9:
							return 0;
						case 10:
							return 1;
						case 11:
							return 0;
						case 12:
							return 1;
						case 13:
							return 0;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
			switch (aggregate_func_4995())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return 0;
						case 1:
							return 0;
						case 2:
							return 0;
						case 13:
							return 0;
						case 15:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
						case 21:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 0;
						case 1:
							return 0;
						case 2:
							return 0;
						case 13:
							return 0;
						case 15:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
						case 21:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
					}
					break;
			}
			break;
		case 3:
		case 4:
			switch (aggregate_func_4995())
			{
				case 4:
					switch (iParam0)
					{
						case 0:
							return 0;
						case 1:
							return 0;
						case 2:
							return 0;
						case 13:
							return 0;
						case 15:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
						case 21:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 0;
						case 1:
							return 0;
						case 2:
							return 0;
						case 13:
							return 0;
						case 15:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
						case 21:
							if (!func_285())
							{
								return 0;
							}
							else
							{
								return 1;
							}
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

char[] func_307(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
			switch (aggregate_func_4995())
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							return "RE_DUELW_VAL_V1_WINNER_CHEATER";
						case 2:
							return "RE_DUELW_VAL_V1_LOSER_WON_GAME";
						case 3:
							return "RE_DUELW_VAL_V1_WINNER_DENY";
						case 4:
							return "RE_DUELW_VAL_V1_LOSER_DEFEND";
						case 5:
							return "RE_DUELW_VAL_V1_WINNER_CHAL";
						case 6:
							return "RE_DUELW_VAL_V1_LOSER_AGREE";
						case 13:
							return "RE_DUELW_VAL_V1_WINNER_MOVE";
						case 16:
							return "RE_DUELW_VAL_V1_AGGRO";
						case 17:
							return "RE_DUELW_VAL_V1_AGGRO";
						case 18:
							return "RE_DUELW_VAL_V1_AG_LASSO";
						case 19:
							return "RE_DUELW_VAL_V1_AG_LASSO";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return "RE_DUELW_VHT_V1_ARGUE_MIND";
						case 1:
							return "RE_DUELW_VHT_V1_ARGUE";
						case 3:
							return "RE_DUELW_VHT_V1_ACCUSE";
						case 4:
							return "RE_DUELW_VHT_V1_DENY";
						case 5:
							return "RE_DUELW_VHT_V1_ASK";
						case 6:
							return "RE_DUELW_VHT_V1_DADDY";
						case 7:
							return "RE_DUELW_VHT_V1_INSULT";
						case 8:
							return "RE_DUELW_VHT_V1_THREAT_MIND";
						case 9:
							return "RE_DUELW_VHT_V1_ANGER";
						case 10:
							return "RE_DUELW_VHT_V1_MOVEMENT";
						case 11:
							return "RE_DUELW_VHT_V1_THREAT";
						case 12:
							return "RE_DUELW_VHT_V1_ACCEPT";
						case 13:
							return "RE_DUELW_VHT_V1_CHALLENGE";
						case 16:
							return "RE_DUELW_VHT_V1_AGGRO";
						case 17:
							return "RE_DUELW_VHT_V1_AGGRO";
						case 18:
							return "RE_DUELW_VHT_V1_AGGRO";
						case 19:
							return "RE_DUELW_VHT_V1_AGGRO";
						default:
							break;
					}
					break;
			}
			break;
		case 1:
		case 2:
			switch (aggregate_func_4995())
			{
				case 2:
					switch (iParam0)
					{
						case 0:
							return "DUL_CONVO_A_1";
						case 1:
							return "DUL_CONVO_A_2";
						case 2:
							return "DUL_CONVO_A_3";
						case 3:
							return "DUL_CONVO_A_4";
						case 4:
							return "DUL_CONVO_A_5";
						case 13:
							return "DUL_DRAW_A";
						case 15:
							if (!func_285())
							{
								return "DUL_END_A_1";
							}
							else
							{
								return "DUL_END_A_2";
							}
							break;
						case 16:
							return "DUL_AGGRO_A_1";
						case 17:
							return "DUL_AGGRO_A_2";
						case 18:
							return "DUL_HOG_A_1";
						case 19:
							return "DUL_HOG_A_2";
						case 21:
							if (!func_285())
							{
								return "DUL_EXIT_A_1";
							}
							else
							{
								return "DUL_EXIT_A_2";
							}
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return "DUL_CONVO_C_1";
						case 1:
							return "DUL_CONVO_C_2";
						case 2:
							return "DUL_CONVO_C_3";
						case 3:
							return "DUL_CONVO_C_4";
						case 4:
							return "DUL_CONVO_C_5";
						case 13:
							return "DUL_DRAW_C";
						case 15:
							if (!func_285())
							{
								return "DUL_END_C_1";
							}
							else
							{
								return "DUL_END_C_2";
							}
							break;
						case 16:
							return "DUL_AGGRO_C_1";
						case 17:
							return "DUL_AGGRO_C_2";
						case 18:
							return "DUL_HOG_C_1";
						case 19:
							return "DUL_HOG_C_2";
						case 21:
							if (!func_285())
							{
								return "DUL_EXIT_C_1";
							}
							else
							{
								return "DUL_EXIT_C_2";
							}
							break;
					}
					break;
			}
			break;
		case 3:
		case 4:
			switch (aggregate_func_4995())
			{
				case 4:
					switch (iParam0)
					{
						case 0:
							return "DUL_CONVO_B_1";
						case 1:
							return "DUL_CONVO_B_2";
						case 2:
							return "DUL_CONVO_B_3";
						case 3:
							return "DUL_CONVO_B_4";
						case 4:
							return "DUL_CONVO_B_5";
						case 13:
							return "DUL_DRAW_B";
						case 15:
							if (!func_285())
							{
								return "DUL_END_B_1";
							}
							else
							{
								return "DUL_END_B_2";
							}
							break;
						case 16:
							return "DUL_AGGRO_B_1";
						case 17:
							return "DUL_AGGRO_B_2";
						case 18:
							return "DUL_HOG_B_1";
						case 19:
							return "DUL_HOG_B_2";
						case 20:
							return "DUL_HOG_B_1";
						case 21:
							if (!func_285())
							{
								return "DUL_EXIT_B_1";
							}
							else if (aggregate_func_4644(2097152))
							{
								return "DUL_END_BA_2";
							}
							else
							{
								return "DUL_EXIT_B_2";
							}
							break;
						case 22:
							return "DUL_RUN_B_2";
						case 23:
							return "DUL_LOAD_B_1";
						case 24:
							return "DUL_TAK1_B_1";
						case 25:
							return "DUL_TAK2_B_1";
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return "DUL_CONVO_D_1";
						case 1:
							return "DUL_CONVO_D_2";
						case 2:
							return "DUL_CONVO_D_3";
						case 3:
							return "DUL_CONVO_D_4";
						case 4:
							return "DUL_CONVO_D_5";
						case 13:
							return "DUL_DRAW_D";
						case 15:
							if (!func_285())
							{
								return "DUL_END_D_1";
							}
							else
							{
								return "DUL_END_D_2";
							}
							break;
						case 16:
							return "DUL_AGGRO_D_1";
						case 17:
							return "DUL_AGGRO_D_2";
						case 18:
							return "DUL_HOG_D_1";
						case 19:
							return "DUL_HOG_D_2";
						case 20:
							return "DUL_HOG_D_1";
						case 21:
							if (!func_285())
							{
								return "DUL_EXIT_D_1";
							}
							else if (aggregate_func_4644(2097152))
							{
								return "DUL_ENDA_D_2";
							}
							else
							{
								return "DUL_EXIT_D_2";
							}
							break;
						case 22:
							return "DUL_RUN_D_2";
						case 23:
							return "DUL_LOAD_D_1";
						case 24:
							return "DUL_TAK1_D_1";
						case 25:
							return "DUL_TAK2_D_1";
					}
					break;
			}
			break;
	}
	return "";
}

void func_308(int iParam0)
{
	struct<15> Var0;

	Var0 = { aggregate_func_1739(-626681985) };
	Var0.f_11 = iParam0;
	aggregate_func_7153(&Var0);
}

char* func_309(int iParam0)
{
	switch (aggregate_func_4995())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "0746_G_M_M_BountyHunters_01_WHITE_08";
				case 1:
					return "0192_A_M_M_HtlRoughTravellers_01_WHITE_01";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "0499_S_M_M_VhtDockWorker_01_WHITE_01";
				case 1:
					return "0497_S_M_M_VhtLaborer_01_WHITE_01";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE1";
				case 1:
					return "RE005_MALE2";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE1";
				case 1:
					return "RE005_FEMALE2";
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE3";
				case 1:
					return "RE005_MALE4";
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE3";
				case 1:
					return "RE005_FEMALE4";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_310(bool bParam0)
{
	if (!bParam0)
	{
		if (Local_163.f_18 <= 1)
		{
			return false;
		}
	}
	if (aggregate_func_3434(512, -1))
	{
		return true;
	}
	if (Local_163.f_18.f_152 >= 40f)
	{
		return false;
	}
	return true;
}

bool func_312()
{
	if (Local_163.f_18 < 2)
	{
		return false;
	}
	if (Local_163.f_18.f_152 < 100f)
	{
		return true;
	}
	if (aggregate_func_3434(512, -1))
	{
		return true;
	}
	return false;
}

bool func_314()
{
	if (Local_163.f_18 < 3)
	{
		return false;
	}
	if (Local_163.f_18 == 5)
	{
		return false;
	}
	if (Local_163.f_18.f_152 >= 100f)
	{
		return false;
	}
	return true;
}

bool func_316(float fParam0)
{
	vector3 vVar0;
	int iVar3;

	if (((!ENTITY::DOES_ENTITY_EXIST(func_192(0)) || ENTITY::IS_ENTITY_DEAD(func_192(0))) || !ENTITY::DOES_ENTITY_EXIST(func_192(1))) || ENTITY::IS_ENTITY_DEAD(func_192(1)))
	{
		return false;
	}
	if (func_303() > 200f)
	{
		return false;
	}
	vVar0 = { func_417(Global_35, 3f) };
	if (BUILTIN::VDIST(vVar0, func_277(0)) < fParam0)
	{
		return true;
	}
	iVar3 = aggregate_func_3107(func_192(0), Global_35, 0.25f);
	if (iVar3 == 0)
	{
		if (BUILTIN::VDIST(vVar0, func_277(0)) < (fParam0 * 2f))
		{
			return true;
		}
	}
	return false;
}

char* func_317(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pblEnterNormal";
		case 1:
			return "pblEnterEarly";
		default:
			break;
	}
	return "";
}

bool func_318()
{
	return Local_163.f_172.f_4;
}

void func_319()
{
	if (MAP::DOES_BLIP_EXIST(Local_163.f_18.f_153))
	{
		aggregate_func_2433(&(Local_163.f_18.f_153));
	}
}

bool func_320()
{
	if (func_316(12f))
	{
		return true;
	}
	if ((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 < 13)
	{
		return false;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[0 /*4*/])->f_1))
	{
		return false;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[1 /*4*/])->f_1))
	{
		return false;
	}
	if (AUDIO::_0xA2CAC9DEF0195E6F(1))
	{
		return false;
	}
	return true;
}

bool func_321()
{
	if (aggregate_func_4644(16384))
	{
		return true;
	}
	if (!aggregate_func_4644(8192))
	{
		if (func_302())
		{
			aggregate_func_3614(1, 1, 0);
		}
		aggregate_func_2922(8192);
	}
	else if (!func_420())
	{
		(Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1 = 13;
		func_308((Local_34[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/])->f_1.f_1);
		aggregate_func_2922(16384);
		return true;
	}
	return false;
}

void func_322(int iParam0)
{
	struct<15> Var0;

	Var0 = { aggregate_func_1739(1626333639) };
	Var0.f_11 = iParam0;
	aggregate_func_7153(&Var0);
}

void func_323(int iParam0)
{
	struct<15> Var0;

	Var0 = { aggregate_func_1739(-588518817) };
	Var0.f_11 = iParam0;
	aggregate_func_7153(&Var0);
}

bool func_327()
{
	switch (aggregate_func_4995())
	{
		case 3:
			return true;
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

void func_330(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		aggregate_func_4241(uParam0, 1024);
	}
	else
	{
		aggregate_func_4243(uParam0, 1024);
	}
}

void func_333()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	iVar2 = func_192(2);
	if (!func_285())
	{
		iVar3 = 0;
		iVar0 = func_192(0);
		iVar1 = func_192(1);
	}
	else
	{
		iVar3 = 1;
		iVar0 = func_192(1);
		iVar1 = func_192(0);
	}
	if (aggregate_func_1727(iVar0, 242628503, 1, 0))
	{
		fVar4 = 1f;
		if (aggregate_func_4644(524288) || aggregate_func_4644(2097152))
		{
			fVar4 = 2f;
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar5);
		if (func_288() && aggregate_func_827(iVar2) != iVar1)
		{
			if (aggregate_func_827(iVar0) != iVar1)
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iVar1);
			}
			TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(0, iVar1, iVar2, fVar4);
		}
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			TASK::TASK_MOUNT_ANIMAL(0, iVar2, -1, -1, fVar4, 1, 0, 0);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar5);
		TASK::TASK_PERFORM_SEQUENCE(iVar0, iVar5);
		TASK::CLEAR_SEQUENCE_TASK(&iVar5);
		func_298(iVar3);
		PED::SET_PED_KEEP_TASK(iVar0, true);
	}
}

void func_337(var uParam0, var uParam1)
{
	*uParam1 = 0;
	uParam0->f_10 = 0;
	uParam0->f_4 = 0;
}

float func_338(int iParam0)
{
	float fVar0;

	fVar0 = (7.5f + (ENTITY::GET_ENTITY_SPEED(*iParam0) * 1.25f));
	return aggregate_func_4947(fVar0 < 12.5f, fVar0, 12.5f);
}

void func_339(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_420())
	{
		if (!aggregate_func_4240(Local_163.f_18.f_101, func_426(23)) && func_288())
		{
			iVar0 = func_192(2);
			if (aggregate_func_827(iVar0) == *iParam1)
			{
				func_308(23);
			}
		}
		if (func_327())
		{
			if (func_285())
			{
				if (!aggregate_func_4240(Local_163.f_18.f_101, func_426(22)))
				{
					if (aggregate_func_4644(524288))
					{
						func_308(22);
						func_337(&(Local_163.f_18.f_119), &(Local_163.f_18.f_150));
					}
				}
			}
			else if (!aggregate_func_4240(Local_163.f_18.f_101, func_426(24)))
			{
				if (aggregate_func_4644(524288))
				{
					func_308(24);
					aggregate_func_2922(524288);
					func_337(&(Local_163.f_18.f_119), &(Local_163.f_18.f_150));
					aggregate_func_4242(&(Local_163.f_18.f_119), 5000);
				}
			}
			else if (!aggregate_func_4240(Local_163.f_18.f_101, func_426(25)))
			{
				if (aggregate_func_4644(524288))
				{
					func_308(25);
					aggregate_func_2922(524288);
					func_337(&(Local_163.f_18.f_119), &(Local_163.f_18.f_150));
				}
			}
			else if (aggregate_func_4644(524288))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					aggregate_func_7155(0);
				}
				aggregate_func_2922(512);
			}
		}
	}
}

void func_340()
{
	int iVar0;
	int iVar1;

	if (!aggregate_func_4644(1024))
	{
		aggregate_func_3614(1, 0, 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[0 /*4*/])->f_1, 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[1 /*4*/])->f_1, 0);
		aggregate_func_2922(1024);
	}
	else
	{
		if (!aggregate_func_4644(2048))
		{
			if (!func_302())
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[0 /*4*/])->f_1, 0);
			}
			if ((!aggregate_func_3027(1) && !AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[0 /*4*/])->f_1)) && !AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[1 /*4*/])->f_1))
			{
				if (ENTITY::IS_ENTITY_DEAD((Local_163.f_18.f_102[0 /*4*/])->f_1))
				{
					aggregate_func_2922(2048);
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[0 /*4*/])->f_1))
				{
					iVar0 = 16;
					if (PED::_0x9682F850056C9ADE((Local_163.f_18.f_102[0 /*4*/])->f_1) || PED::_0x3AA24CCC0D451379((Local_163.f_18.f_102[0 /*4*/])->f_1))
					{
						iVar0 = 18;
					}
					else if (Local_163.f_18.f_150 == 1024)
					{
						iVar0 = 20;
					}
					AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[0 /*4*/])->f_1, 0);
					func_308(iVar0);
					aggregate_func_2922(2048);
				}
			}
		}
		if (!aggregate_func_4644(4096))
		{
			if (!func_302())
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[1 /*4*/])->f_1, 0);
			}
			if ((!aggregate_func_3027(1) && !AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[0 /*4*/])->f_1)) && !AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[1 /*4*/])->f_1))
			{
				if (ENTITY::IS_ENTITY_DEAD((Local_163.f_18.f_102[1 /*4*/])->f_1))
				{
					aggregate_func_2922(4096);
				}
				else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY((Local_163.f_18.f_102[1 /*4*/])->f_1))
				{
					iVar1 = 17;
					if (PED::_0x9682F850056C9ADE((Local_163.f_18.f_102[1 /*4*/])->f_1) || PED::_0x3AA24CCC0D451379((Local_163.f_18.f_102[1 /*4*/])->f_1))
					{
						iVar1 = 19;
					}
					AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[1 /*4*/])->f_1, 0);
					func_308(iVar1);
					aggregate_func_2922(4096);
				}
			}
		}
	}
}

void func_347(var uParam0)
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
	SCRIPTS::_0x8B61C950A148FFA2(uParam0, 6, 25, &(Global_1051202->f_16[15]));
	aggregate_func_4335(uParam0, uParam0->f_1);
}

void func_355(int iParam0)
{
	if (aggregate_func_4240(Local_163.f_18.f_101, func_426(iParam0)))
	{
		return;
	}
	if (Local_163.f_18.f_152 > 100f)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_307(iParam0)))
	{
		return;
	}
	if (iParam0 < 15)
	{
		aggregate_func_1726(2001176446, (Local_163.f_18.f_102[func_306(iParam0) /*4*/])->f_1, 1);
	}
	if (func_302())
	{
		aggregate_func_3614(1, 0, 0);
		if (!ENTITY::IS_ENTITY_DEAD((Local_163.f_18.f_102[0 /*4*/])->f_1))
		{
			aggregate_func_648(&(Local_163.f_18.f_3), (Local_163.f_18.f_102[0 /*4*/])->f_1, func_309(0), 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD((Local_163.f_18.f_102[1 /*4*/])->f_1))
		{
			aggregate_func_648(&(Local_163.f_18.f_3), (Local_163.f_18.f_102[1 /*4*/])->f_1, func_309(1), 0);
		}
		aggregate_func_938(&(Local_163.f_18.f_3), aggregate_func_6661(func_307(iParam0)), 0, -1, 0, 0);
	}
	else
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH((Local_163.f_18.f_102[func_306(iParam0) /*4*/])->f_1, 0);
		if (!AUDIO::_0xF0EE69F500952FA5((Local_163.f_18.f_102[func_306(iParam0) /*4*/])->f_1))
		{
			AUDIO::SET_AMBIENT_VOICE_NAME((Local_163.f_18.f_102[func_306(iParam0) /*4*/])->f_1, func_309(func_306(iParam0)));
		}
		aggregate_func_4975((Local_163.f_18.f_102[func_306(iParam0) /*4*/])->f_1, func_307(iParam0), 2081540604, (Local_163.f_18.f_102[func_445(iParam0) /*4*/])->f_1, 0, 0, 0, 1);
	}
	aggregate_func_4241(&(Local_163.f_18.f_101), func_426(iParam0));
}

void func_356(int iParam0)
{
	int iVar0;
	vector3 vVar1[24];
	int iVar4;

	StringCopy(&cVar1, func_317(iParam0), 24);
	iVar4 = 0;
	while (iVar4 <= 1)
	{
		iVar0 = func_207(iVar4);
		if (ANIMSCENE::_0x25557E324489393C(iVar0))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iVar0, &cVar1))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iVar0, &cVar1, true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bDrawIdle", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bDraw", true, false);
					aggregate_func_2922(1);
				}
			}
		}
		iVar4++;
	}
}

int func_357(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, float fParam9, int iParam10)
{
	struct<15> Var0;
	int iVar20;
	int iVar21;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	Var0.f_8 = -1082130432;
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &(Var0.f_6), false, iParam5, false))
	{
		iVar20 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, iParam5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar20))
		{
			Var0 = { func_447(iVar20) };
			if (aggregate_func_4268(vParam1))
			{
				Var0.f_3 = { func_448(iVar20) };
			}
			else
			{
				Var0.f_3 = { vParam1 };
			}
			Var0.f_7 = fParam9;
			Var0.f_12 = 1;
			if (bParam8)
			{
				if (aggregate_func_402(iParam0, 0))
				{
					Var0.f_9 = iParam0;
				}
				else
				{
					Var0.f_9 = 0;
				}
			}
			Var0.f_13 = iParam10;
			Var0.f_14 = iParam7;
			if (aggregate_func_402(iParam4, 0))
			{
				Var0.f_11 = iParam4;
			}
			MISC::_FIRE_SINGLE_BULLET_IGNORE_ENTITY_NEW(&Var0);
			if (bParam6)
			{
				if (WEAPON::GET_AMMO_IN_CLIP(iParam0, &iVar21, Var0.f_6))
				{
					if (iVar21 > 0)
					{
						WEAPON::SET_AMMO_IN_CLIP(iParam0, Var0.f_6, (iVar21 - 1));
					}
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = aggregate_func_1741(iParam0, 4);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = aggregate_func_1741(iParam0, 5);
		return iVar1;
	}
	return iVar0;
}

char* func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NB_DUEL_BOUNTY_HUNTER_NAME";
		case 1:
			return "NB_DUEL_TARGET_NAME";
		default:
			break;
	}
	return "";
}

Vector3 func_417(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	aggregate_func_2907(vVar6);
	vVar6 = { FtoV((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

bool func_420()
{
	if (func_302())
	{
		if (aggregate_func_3027(1))
		{
			return true;
		}
	}
	else if (AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[0 /*4*/])->f_1) || AUDIO::IS_ANY_SPEECH_PLAYING((Local_163.f_18.f_102[1 /*4*/])->f_1))
	{
		return true;
	}
	return false;
}

int func_426(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
		case 18:
		case 20:
			return 65536;
		case 17:
		case 19:
			return 131072;
		case 21:
			return 262144;
		case 22:
			return 1048576;
		case 23:
			return 2097152;
		case 24:
			return 4194304;
		case 25:
			return 8388608;
		default:
			break;
	}
	return 0;
}

int func_445(int iParam0)
{
	int iVar0;

	iVar0 = func_306(iParam0);
	switch (iVar0)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		default:
			break;
	}
	return 1;
}

Vector3 func_447(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return vVar0;
	}
	iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "Gun_Muzzle");
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	vVar0 = { vVar4 + Vector(0.1f, 0.1f, 0.1f) * vVar7 };
	return vVar0;
}

Vector3 func_448(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { 0f, 0f, 0f };
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return vVar0;
	}
	iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "Gun_Muzzle");
	vVar4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar3) };
	vVar7 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 1f, 0f, 0f) - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	vVar7 = { vVar7 / FtoV(BUILTIN::VMAG(vVar7)) };
	vVar0 = { vVar4 + vVar7 };
	return vVar0;
}

void func_511(var uParam0, var uParam1)
{
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 5, &uParam1);
}

