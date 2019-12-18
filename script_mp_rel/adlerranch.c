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
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	bool bLocal_18 = false;
	bool bLocal_19 = false;
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

bool func_40(int iParam0)
{
	iParam0 = iParam0;
	func_60();
	if (aggregate_func_6721(&bLocal_19))
	{
		if (bLocal_19)
		{
			aggregate_func_1155(2051127971, 1, -1f, 0, 0, 0, 0, 0);
			aggregate_func_2156(2051127971, 1, 1);
		}
	}
	return true;
}

void func_60()
{
	bool bVar0;

	bVar0 = false;
	if (aggregate_func_1518(356365161) || aggregate_func_1518(-1187950766))
	{
		bVar0 = true;
	}
	if (bVar0 != bLocal_18)
	{
		if (bVar0)
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(-739334986))
			{
				aggregate_func_2081(-739334986);
			}
		}
		else if (STREAMING::_IS_IMAP_ACTIVE(-739334986))
		{
			aggregate_func_2077(-739334986);
		}
		bLocal_18 = bVar0;
	}
}

