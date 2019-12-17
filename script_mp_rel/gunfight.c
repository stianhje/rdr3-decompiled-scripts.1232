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
	bool bLocal_14 = false;
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

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

void func_16(int iParam0)
{
	if (!func_53(1))
	{
		bLocal_14 = true;
	}
}

bool func_17(int iParam0)
{
	if (bLocal_14)
	{
		return true;
	}
	func_53(0);
	if (iLocal_13 >= 4)
	{
		return true;
	}
	return false;
}

bool func_53(bool bParam0)
{
	int iVar0;
	var uVar1[4];
	int iVar6[4];
	int iVar11;

	iVar6[0] = joaat("s_lootablemoneybox");
	iVar6[1] = joaat("p_goldnugget01x");
	iVar6[2] = 1528448748;
	iVar6[3] = -1271488117;
	if (aggregate.gunfight.func_83(&uVar1, &iVar6, 4, 1583.83f, 2193.08f, 324.18f, 5f) > 0)
	{
		iVar11 = 0;
		while (iVar11 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(&(uVar1[iVar11])))
			{
				if (bParam0)
				{
					iVar0++;
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(&(uVar1[iVar11]), true, false);
					OBJECT::DELETE_OBJECT(uVar1[iVar11]);
					iLocal_13++;
				}
			}
			iVar11++;
		}
	}
	if (bParam0)
	{
		if (iVar0 > 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

