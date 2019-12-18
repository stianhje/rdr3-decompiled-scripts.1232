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
	var uLocal_13[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	bool bLocal_35 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

void func_6(int iParam0)
{
	STREAMING::REQUEST_MODEL(joaat("a_m_m_unicorpse_01"), false);
	PED::_0xED9582B3DA8F02B4(6);
	iLocal_20 = ANIMSCENE::_CREATE_ANIM_SCENE(func_53(), 8, func_54(), false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_20);
}

bool func_40(int iParam0)
{
	iParam0 = iParam0;
	switch (iLocal_21)
	{
		case 0:
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_unicorpse_01")) && PED::_0x5E420FF293EE5472()) && ANIMSCENE::_0x25557E324489393C(iLocal_20)) && ANIMSCENE::_0x477122B8D05E7968(iLocal_20, 1, 0)) && !aggregate_func_4506())
			{
				iLocal_21 = 1;
			}
			break;
		case 1:
			if (func_63() && func_64())
			{
				iLocal_21 = 2;
			}
			break;
		case 2:
			func_65();
			func_66();
			iLocal_21 = 3;
			break;
		case 3:
			if (func_64() && func_67())
			{
				func_68(5);
				iLocal_21 = 4;
			}
			break;
		case 4:
			func_69();
			ANIMSCENE::_0xDF7B5144E25CD3FE(iLocal_20, func_54());
			iLocal_21 = 5;
			break;
		case 5:
			if ((ANIMSCENE::_0x25557E324489393C(iLocal_20) && ANIMSCENE::_0x477122B8D05E7968(iLocal_20, 1, 0)) && ANIMSCENE::_0x23E33CB9F4A3F547(iLocal_20, func_54()))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_20, func_54(), true);
				ANIMSCENE::START_ANIM_SCENE(iLocal_20);
				iLocal_21 = 6;
			}
			break;
		case 6:
			if (ANIMSCENE::_0xD8254CB2C586412B(iLocal_20, 0))
			{
				func_70();
				func_71();
				iLocal_21 = 7;
			}
			break;
		case 7:
			break;
	}
	return false;
}

char* func_53()
{
	return "script@beat@wilderness@discoverables@dead_settler@dead_settler";
}

char* func_54()
{
	return "pl_dead_settler";
}

int func_63()
{
	var uVar0;

	if (((((func_102(uLocal_13[0], joaat("a_m_m_unicorpse_01"), &uVar0, func_100(0), func_101(0)) && func_102(uLocal_13[1], joaat("a_m_m_unicorpse_01"), &uVar0, func_100(1), func_101(1))) && func_102(uLocal_13[2], joaat("a_m_m_unicorpse_01"), &uVar0, func_100(2), func_101(2))) && func_102(uLocal_13[3], joaat("a_m_m_unicorpse_01"), &uVar0, func_100(3), func_101(3))) && func_102(uLocal_13[4], joaat("a_m_m_unicorpse_01"), &uVar0, func_100(4), func_101(4))) && func_102(uLocal_13[5], joaat("a_m_m_unicorpse_01"), &uVar0, func_100(5), func_101(5)))
	{
		return 1;
	}
	return 0;
}

int func_64()
{
	if (((((func_103(uLocal_13[0]) && func_103(uLocal_13[1])) && func_103(uLocal_13[2])) && func_103(uLocal_13[3])) && func_103(uLocal_13[4])) && func_103(uLocal_13[5]))
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	func_104(uLocal_13[0]);
	func_104(uLocal_13[1]);
	func_104(uLocal_13[2]);
	func_104(uLocal_13[3]);
	func_104(uLocal_13[4]);
	func_104(uLocal_13[5]);
}

void func_66()
{
	aggregate_func_288(&(uLocal_13[0]), -2089787434);
	aggregate_func_288(&(uLocal_13[1]), 1908325491);
	aggregate_func_288(&(uLocal_13[2]), 254342877);
	aggregate_func_288(&(uLocal_13[3]), -52800960);
	aggregate_func_288(&(uLocal_13[4]), -1197356488);
	aggregate_func_288(&(uLocal_13[5]), -1427362099);
}

int func_67()
{
	if (((((func_106(uLocal_13[0]) && func_106(uLocal_13[1])) && func_106(uLocal_13[2])) && func_106(uLocal_13[3])) && func_106(uLocal_13[4])) && func_106(uLocal_13[5]))
	{
		return 1;
	}
	return 0;
}

void func_68(int iParam0)
{
	func_107(uLocal_13[0], iParam0);
	func_107(uLocal_13[1], iParam0);
	func_107(uLocal_13[2], iParam0);
	func_107(uLocal_13[3], iParam0);
	func_107(uLocal_13[4], iParam0);
	func_107(uLocal_13[5], iParam0);
}

void func_69()
{
	int iVar0;
	char* sVar1;

	if (!ANIMSCENE::_0x25557E324489393C(iLocal_20))
	{
		return;
	}
	if (!ANIMSCENE::_0x477122B8D05E7968(iLocal_20, 1, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(&(uLocal_13[iVar0])) && !ENTITY::IS_ENTITY_DEAD(&(uLocal_13[iVar0])))
		{
			sVar1 = func_108(iVar0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1) && ANIMSCENE::_0x6F1F0B17109309DA(iLocal_20, sVar1))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_20, sVar1, &(uLocal_13[iVar0]), 0);
			}
		}
		iVar0++;
	}
}

void func_70()
{
	func_109(uLocal_13[0]);
	func_109(uLocal_13[1]);
	func_109(uLocal_13[2]);
	func_109(uLocal_13[3]);
	func_109(uLocal_13[4]);
	func_109(uLocal_13[5]);
}

void func_71()
{
	ENTITY::SET_ENTITY_VISIBLE(&(uLocal_13[0]), true);
	ENTITY::SET_ENTITY_VISIBLE(&(uLocal_13[1]), true);
	ENTITY::SET_ENTITY_VISIBLE(&(uLocal_13[2]), true);
	ENTITY::SET_ENTITY_VISIBLE(&(uLocal_13[3]), true);
	ENTITY::SET_ENTITY_VISIBLE(&(uLocal_13[4]), true);
	ENTITY::SET_ENTITY_VISIBLE(&(uLocal_13[5]), true);
}

void func_87(int iParam0)
{
	iParam0 = iParam0;
	PED::DELETE_PED(uLocal_13[0]);
	PED::DELETE_PED(uLocal_13[1]);
	PED::DELETE_PED(uLocal_13[2]);
	PED::DELETE_PED(uLocal_13[3]);
	PED::DELETE_PED(uLocal_13[4]);
	PED::DELETE_PED(uLocal_13[5]);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_unicorpse_01"));
	PED::_0x7D4E70A67A651C71(6);
	ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_20);
}

Vector3 func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2037.121f, -1901.752f, 109.4507f;
		case 1:
			return -2031.363f, -1932.45f, 108.5494f;
		case 2:
			return -2038.634f, -1898.968f, 109.3499f;
		case 3:
			return -2079.085f, -1890.234f, 112.6797f;
		case 4:
			return -2031.766f, -1930.215f, 108.6972f;
		case 5:
			return -2062.604f, -1926.374f, 112.3715f;
	}
	return 0f, 0f, 0f;
}

float func_101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 176.81f;
		case 1:
			return 91.91f;
		case 2:
			return -96.42f;
		case 3:
			return -123.76f;
		case 4:
			return -179.66f;
		case 5:
			return -99.82f;
	}
	return 0f;
}

int func_102(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6)
{
	if (*uParam2)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 1;
	}
	*uParam0 = aggregate_func_2073(iParam1, vParam3, fParam6, 0, 0, 0, 1, 1, 0, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam2 = 1;
		ENTITY::_0x9587913B9E772D29(*uParam0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
		TASK::TASK_STAND_STILL(*uParam0, -1);
		ENTITY::SET_ENTITY_VISIBLE(*uParam0, false);
		return 1;
	}
	return 0;
}

int func_103(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::_0xA0BC8FAED8CFEB3C(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_104(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		func_145(uParam0, 0);
		func_146(uParam0, 0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 26, true);
		PED::_0xAE6004120C18DF97(*uParam0, 1, false);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, true, true);
	}
}

int func_106(var uParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0)) && !ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(*uParam0))
	{
		return 0;
	}
	return 1;
}

void func_107(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		_NAMESPACE29::_0x0EABF182FBB63D72(*uParam0, iParam1, 1);
	}
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Settler";
		case 1:
			return "Settler^1";
		case 2:
			return "Settler^2";
		case 3:
			return "Settler^3";
		case 4:
			return "Settler^4";
		case 5:
			return "Settler^5";
	}
	return "";
}

void func_109(var uParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			iVar0 = 1048575;
			PED::SET_RAGDOLL_BLOCKING_FLAGS(*uParam0, iVar0);
		}
	}
}

void func_145(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		PED::_0x6569F31A01B4C097(*uParam0, 0, iParam1);
		PED::_0x6569F31A01B4C097(*uParam0, 1, iParam1);
		PED::_0x6569F31A01B4C097(*uParam0, 6, iParam1);
		PED::_0x6569F31A01B4C097(*uParam0, 4, iParam1);
	}
}

void func_146(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
		}
		ENTITY::_0x18FF3110CF47115D(*uParam0, 2, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 3, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 7, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 9, iParam1);
		ENTITY::_0x18FF3110CF47115D(*uParam0, 10, iParam1);
	}
}

