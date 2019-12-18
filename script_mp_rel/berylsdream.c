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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	bool bLocal_28 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

void func_6(int iParam0)
{
	STREAMING::REQUEST_MODEL(func_53(), false);
}

bool func_40(int iParam0)
{
	iParam0 = iParam0;
	switch (iLocal_14)
	{
		case 0:
			if (STREAMING::HAS_MODEL_LOADED(func_53()) && !aggregate_func_4506())
			{
				iLocal_14 = 1;
			}
			break;
		case 1:
			if (func_62())
			{
				iLocal_14 = 2;
			}
			break;
		case 2:
			break;
	}
	return false;
}

int func_53()
{
	return joaat("p_cs_detonator01x");
}

bool func_62()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_13))
	{
		iLocal_13 = OBJECT::CREATE_OBJECT(func_53(), func_91(), false, false, false, false, true);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_13))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_13, func_91(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_13, func_92(), 2, true);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_78(int iParam0)
{
	iParam0 = iParam0;
	OBJECT::DELETE_OBJECT(&iLocal_13);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_53());
}

Vector3 func_91()
{
	return -2334.66f, 102.11f, 221.988f;
}

Vector3 func_92()
{
	return 0f, 0f, 155f;
}

