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
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	var uLocal_24 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0[3];
	int iVar4;
	bool bVar5;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	aggregate_func_685();
	func_2();
	func_3();
	iVar4 = 0;
	iVar0[0] = VOLUME::_CREATE_VOLUME_CYLINDER(224.4328f, 1906.671f, 203.5702f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[1] = VOLUME::_CREATE_VOLUME_CYLINDER(191.766f, 1831.39f, 198.4614f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	iVar0[2] = VOLUME::_CREATE_VOLUME_CYLINDER(129.107f, 1878.372f, 198.1505f, 0f, 0f, 0f, 1.25f, 1.25f, 3f);
	bVar5 = true;
	while (bVar5)
	{
		if (aggregate_func_4251() == -1)
		{
		}
		else
		{
			Global_1896610->f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896610->f_42);
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 <= 2)
			{
				func_5(iVar0[iVar4]);
				iVar4++;
			}
			if (aggregate_func_523(1, 1))
			{
				bVar5 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(&(iVar0[iVar4])))
		{
			VOLUME::_DELETE_VOLUME(&(iVar0[iVar4]));
		}
		iVar4++;
	}
	aggregate_func_4264();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLawSpawn_Blocking Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 876.182f, 1657.932f, 195.6166f, 0f, 0f, 38.34586f, 200f, 18.62544f, 17.04508f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 1125.173f, 1763.45f, 195.6166f, 0f, 0f, 23.33992f, 509.4832f, 82.88351f, 17.04508f);
	uLocal_24 = MISC::_0xA2D5A26208421426(iLocal_23);
}

void func_3()
{
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-382.5f, 1917.5f, 225f, 0f, 0f, 0f, 65f, 65f, 40f, "m_volChezPorter_Restriction");
	aggregate_func_1307(iLocal_17);
	iLocal_18 = func_9(iLocal_18);
	func_10(iLocal_18, 0, 0);
	iLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(465f, 2215f, 250f, 0f, 0f, 0f, 110f, 110f, 50f, "m_volWapiti_Restriction");
	aggregate_func_1307(iLocal_19);
	iLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(749.1984f, 1823.562f, 245.6922f, 0f, 0f, 45f, 12.5f, 10f, 30f, "m_volChelonianHut_Restriction");
	aggregate_func_1368(iLocal_20, 0, 0);
	iLocal_21 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1701.532f, 1509.786f, 147.5539f, 0f, 0f, 8.3768f, 10.10543f, 7.489669f, 5.494266f, "m_volVeteransHomestead_Restriction");
	aggregate_func_1308(iLocal_21, 0, 0);
	iLocal_22 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(800f, 890f, 118f, 0f, 0f, 66f, 80f, 65f, 12f, "m_volCarmodyDell_Restriction");
	aggregate_func_1307(iLocal_22);
}

void func_5(var uParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(PLAYER::PLAYER_PED_ID(), *uParam0, true, 0))
	{
		return;
	}
	aggregate_func_375(PLAYER::PLAYER_PED_ID(), joaat("weapon_drowning"), 0, 0);
}

int func_9(int iParam0)
{
	iParam0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("RIVER_RESTRICTION_GRZ_EAST");
	VOLUME::_0x39816F6F94F385AD(iParam0, 65.5f, 1660f, 115f, 0f, 0f, 6f, 50f, 215f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 162.5f, 1645f, 115f, 0f, 0f, -7f, 200f, 225f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 265f, 1645f, 115f, 0f, 0f, 45f, 200f, 150f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 387.5f, 1750f, 115f, 0f, 0f, 11f, 200f, 75f, 200f);
	VOLUME::_0x39816F6F94F385AD(iParam0, 410f, 1722.5f, 115f, 0f, 0f, 33f, 150f, 75f, 200f);
	return iParam0;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		aggregate_func_4243(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_14()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_23))
	{
		MISC::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(uLocal_24);
	}
}

