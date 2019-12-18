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
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	float fLocal_21 = 0f;
	float fLocal_22 = 0f;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	fLocal_17 = 7f;
	fLocal_18 = 0f;
	fLocal_19 = 0f;
	fLocal_20 = 100f;
	fLocal_21 = 100f;
	fLocal_22 = 0f;
	aggregate_func_685();
	func_2();
	func_3();
	bVar0 = true;
	while (bVar0)
	{
		if (aggregate_func_4251() == -1)
		{
			func_5();
		}
		else
		{
			Global_1896610->f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896610->f_42);
			if (aggregate_func_523(1, 1))
			{
				bVar0 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_7();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { fLocal_17, fLocal_18, fLocal_19 };
	vVar3 = { fLocal_20, fLocal_21, fLocal_22 };
	FLOCK::_0xF2CCA7B68CFAB2B9(904876610, 2638.8f, 1972.1f, 185.1f, vVar0, vVar3, 9.5f, 50f, 1f, 6f);
}

void func_3()
{
	iLocal_23 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1800f, -65f, 58.316f, 0f, 0f, 0f, 50f, 50f, 10f, "m_volAberdeenPigFarm_Restriction");
	aggregate_func_1307(iLocal_23);
	iLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2930f, 1360f, 75f, 0f, 0f, 0f, 170f, 170f, 75f, "m_volAnnesburg_Restriction");
	aggregate_func_1306(iLocal_24);
	iLocal_25 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2350f, 1370f, 105f, 0f, 0f, 0f, 35f, 35f, 15f, "m_volBeaverHollow_Restriction");
	aggregate_func_1306(iLocal_25);
	iLocal_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2590f, 827.5f, 85f, 0f, 0f, 0f, 80f, 80f, 20f, "m_volButchersCreek_Restriction");
	aggregate_func_1306(iLocal_26);
	iLocal_27 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2270f, -95f, 45f, 0f, 0f, 0f, 65f, 65f, 15f, "m_volMacleansHouse_Restriction");
	aggregate_func_1307(iLocal_27);
	iLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(3085f, 2232.5f, 210f, 0f, 0f, 7f, 130f, 150f, 75f, "m_volRockySeven_Restriction");
	aggregate_func_1308(iLocal_28, 0, 0);
	iLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2965f, 475f, 45f, 0f, 0f, 0f, 75f, 75f, 15f, "m_volTallulahJetty_Restriction");
	aggregate_func_1308(iLocal_29, 0, 0);
	iLocal_30 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2518.25f, 2293f, 185.25f, 0f, 0f, 0f, 40f, 40f, 25f, "m_volTeslaLab_Restriction");
	aggregate_func_1308(iLocal_30, 0, 0);
	iLocal_31 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2964f, 780f, 52f, 0f, 0f, 0f, 45f, 35f, 25f, "m_volVanHornHorseShop_Restriction");
	aggregate_func_1308(iLocal_31, 0, 0);
}

void func_5()
{
	int iVar0;
	int iVar1;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(774780778);
	iVar1 = _NAMESPACE48::_0x112DDF56300BC6E5(1302603725);
	if (!_NAMESPACE48::_0x800DF3FC913355F3(iVar0) || !_NAMESPACE48::_0x800DF3FC913355F3(iVar1))
	{
		return;
	}
	if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar0) && _NAMESPACE48::_0xEB98B38CA60742D7(iVar1))
	{
		if (!aggregate_func_1518(2024769126))
		{
			if (!STREAMING::_0x73B40D97D7BAAD77(516817794, Global_36))
			{
				aggregate_func_3414(2024769126);
			}
		}
	}
	else if (aggregate_func_1518(2024769126))
	{
		if (!STREAMING::_0x73B40D97D7BAAD77(516817794, Global_36))
		{
			aggregate_func_3010(2024769126);
		}
	}
}

void func_7()
{
	func_14();
	FLOCK::_0xFB16F08F47B83B4C(904876610);
}

void func_14()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_33))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_33);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_32))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_32);
		VOLUME::_0x43F867EF5C463A53(iLocal_32);
	}
}

