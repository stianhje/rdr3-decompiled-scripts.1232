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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	int iVar0;
	int iVar1;

	iLocal_18 = ((*Global_1887327)[33 /*36*/])->f_5;
	iLocal_19 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(3350.781f, -675.869f, 63.768f, 0f, 0f, 0f, 116.5f, 87.5f, 50f, "Sisika - m_volGTower");
	iVar0 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_19);
	POPULATION::SET_POPZONE_POPULATION_SET(iVar0, 414726236);
	POPULATION::_0x7E6BC0B94F5928F0(iVar0, 16, 16);
	POPULATION::_0x0F1861101C9A9944(iVar0, true);
	POPULATION::_0x08892122769770D5(iVar0, true);
	POPULATION::_0x578E2FA64E847C60(iVar0, 0);
	iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Sisika - m_volGBridge");
	VOLUME::_0x39816F6F94F385AD(iLocal_20, 3321.868f, -610.395f, 48.57418f, 0f, 0f, 40f, 15f, 75f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_20, 3319.213f, -584.038f, 47.83653f, 0f, 0f, 40f, 15f, 29f, 20f);
	iVar1 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_20);
	POPULATION::SET_POPZONE_POPULATION_SET(iVar1, 414726236);
	POPULATION::_0x7E6BC0B94F5928F0(iVar1, 3, 3);
	POPULATION::_0x0F1861101C9A9944(iVar1, true);
	POPULATION::_0x08892122769770D5(iVar1, true);
	POPULATION::_0x578E2FA64E847C60(iVar1, 0);
	return true;
}

bool func_40(int iParam0)
{
	bool bVar0;
	bool bVar1;

	iParam0 = iParam0;
	bVar0 = true;
	bVar1 = false;
	if (!aggregate_func_2820())
	{
		bVar0 = false;
	}
	if (aggregate_func_4478())
	{
		bVar0 = false;
	}
	if (aggregate_func_7305() && aggregate_func_4790(68))
	{
		bVar0 = false;
	}
	if (aggregate_func_7305() && aggregate_func_4790(82))
	{
		bVar1 = true;
	}
	else
	{
		bVar1 = false;
	}
	if (bVar0 && aggregate_func_4367(255))
	{
		if (bVar1)
		{
			aggregate_func_375(PLAYER::PLAYER_PED_ID(), joaat("weapon_drowning"), 0, 0);
		}
		else
		{
			aggregate_func_2435(5, 0);
		}
	}
	return true;
}

