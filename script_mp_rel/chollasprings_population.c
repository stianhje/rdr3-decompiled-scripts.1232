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
	int iLocal_23[3] = { 0, 0, 0 };
	char* sLocal_27 = NULL;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	aggregate.bayounwa_population.func_1();
	func_2();
	func_3();
	bVar0 = true;
	while (bVar0)
	{
		if (aggregate.aberdeenpigfarm.func_45() == -1)
		{
			func_5();
		}
		else
		{
			Global_1896610->f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896610->f_42);
			if (aggregate.aberdeenpigfarm.func_49(1, 1))
			{
				bVar0 = false;
			}
		}
		aggregate.aberdeenpigfarm.func_23();
		BUILTIN::WAIT(0);
	}
	func_8();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3685.423f, -2597.155f, -10f, 0f, 0f, -24.7897f, 116.6365f, 76.68949f, 15f, "m_volArmadillo_Restriction");
	func_9(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-4800.448f, -2704.913f, 28.17212f, 0f, 0f, -47.25f, 134.75f, 95.75f, 50f, "m_VolRidgewoodFarm_Restriction");
	aggregate.annesburg.func_54(iLocal_18);
	iLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-3959.882f, -2132.151f, -5.324f, 0f, 0f, 0f, 35f, 35f, 20f, "m_volTwinRocks_Restriction");
	aggregate.annesburg.func_54(iLocal_19);
}

void func_3()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!aggregate.chollasprings_population.func_11() && !aggregate.chollasprings_population.func_12())
		{
			iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardThreat");
			VOLUME::_0x39816F6F94F385AD(iLocal_22, -3960.03f, -2122.22f, -4.99f, 0f, 0f, 51f, 4.85f, 7.96f, 13.94f);
			VOLUME::_0x39816F6F94F385AD(iLocal_22, -3955.38f, -2127.12f, -4.19f, 0f, 0f, 51f, 7.61f, 7.5f, 12.32f);
			iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRestricted");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_21, iLocal_22);
			VOLUME::_0xBCE668AAF83608BE(iLocal_21, -3962.87f, -2135.84f, -5.32f, 0f, 0f, 0f, 27f, 27f, 20f);
			VOLUME::_0xBCE668AAF83608BE(iLocal_21, -3934.91f, -2138.85f, -5.32f, 0f, 0f, 0f, 10f, 10f, 20f);
			iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volGuardRegistration");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_20, iLocal_21);
			VOLUME::_0xBCE668AAF83608BE(iLocal_20, -3959.88f, -2132.15f, -5.32f, 0f, 0f, 0f, 50f, 50f, 20f);
			sLocal_27 = "TWIN_ROCKS";
			LAW::_CREATE_GUARD_ZONE(sLocal_27);
			LAW::_0x8C598A930F471938(sLocal_27, iLocal_20);
			LAW::_0x35815F372D43E1E5(sLocal_27, iLocal_21);
			LAW::_0xAD3E07C37A7C1ADC(sLocal_27, iLocal_21);
			LAW::_0xA1B0E6301E2E02A6(sLocal_27, iLocal_22);
		}
	}
}

void func_5()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(1133363809);
	iVar1 = _NAMESPACE48::_0x112DDF56300BC6E5(1238197565);
	iVar2 = _NAMESPACE48::_0x112DDF56300BC6E5(1117362204);
	iVar3 = _NAMESPACE48::_0x112DDF56300BC6E5(1443118833);
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar3))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar3) && aggregate.adlerranch.func_93(-154581735))
		{
			if (!STREAMING::_0x73B40D97D7BAAD77(-262371610, Global_36))
			{
				aggregate.bigvalley_population.func_17(-154581735);
			}
		}
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar2))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar2) && aggregate.adlerranch.func_93(-154581735))
		{
			if (!STREAMING::_0x73B40D97D7BAAD77(-262371610, Global_36))
			{
				aggregate.bigvalley_population.func_17(-154581735);
			}
		}
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar1))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar1) && aggregate.adlerranch.func_93(-154581735))
		{
			if (!STREAMING::_0x73B40D97D7BAAD77(-262371610, Global_36))
			{
				aggregate.bigvalley_population.func_17(-154581735);
			}
		}
	}
	if (_NAMESPACE48::_0x800DF3FC913355F3(iVar0))
	{
		if (!_NAMESPACE48::_0xEB98B38CA60742D7(iVar0) && aggregate.adlerranch.func_93(-154581735))
		{
			if (!STREAMING::_0x73B40D97D7BAAD77(-262371610, Global_36))
			{
				aggregate.bigvalley_population.func_17(-154581735);
			}
		}
		else if (_NAMESPACE48::_0xEB98B38CA60742D7(iVar0) && !aggregate.adlerranch.func_93(-154581735))
		{
			if (!STREAMING::_0x73B40D97D7BAAD77(-262371610, Global_36))
			{
				aggregate.bigvalley_population.func_16(-154581735);
			}
		}
	}
}

void func_8()
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_27);
	func_16();
}

void func_9(int iParam0)
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		return;
	}
	POPULATION::_0xB56D41A694E42E86(iParam0, 2229503, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 2229503, 0, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(2229503, 0, 0, -1, -1, iParam0);
}

void func_16()
{
	aggregate.blackwater.func_88(-1745210725);
	aggregate.blackwater.func_88(-1096712211);
	aggregate.blackwater.func_88(-1941005496);
	aggregate.blackwater.func_88(1898267848);
	aggregate.blackwater.func_88(974280355);
	aggregate.blackwater.func_88(1756181464);
	aggregate.blackwater.func_88(-72482077);
	aggregate.blackwater.func_88(1941336822);
	aggregate.blackwater.func_88(1710282603);
	aggregate.blackwater.func_88(-1122265410);
	aggregate.blackwater.func_88(1309948033);
	aggregate.blackwater.func_88(-935952905);
	aggregate.blackwater.func_88(712371053);
	aggregate.blackwater.func_88(-752772715);
	aggregate.blackwater.func_88(503623514);
	aggregate.blackwater.func_88(-407026996);
	aggregate.blackwater.func_88(574303518);
	aggregate.blackwater.func_88(-1029093195);
	aggregate.blackwater.func_88(-1325390493);
	aggregate.blackwater.func_88(-1622834706);
	aggregate.blackwater.func_88(257582350);
	aggregate.blackwater.func_88(-39730787);
	aggregate.blackwater.func_88(-1438901569);
	aggregate.blackwater.func_88(-772691681);
	aggregate.blackwater.func_88(1011350990);
	aggregate.blackwater.func_88(705321299);
	aggregate.blackwater.func_88(-2110850686);
	aggregate.blackwater.func_88(32078073);
	aggregate.blackwater.func_88(-1142062162);
	aggregate.blackwater.func_88(1007204499);
	aggregate.blackwater.func_88(34346755);
	aggregate.blackwater.func_88(482102371);
	aggregate.blackwater.func_88(-502343927);
	aggregate.blackwater.func_88(112916013);
	aggregate.blackwater.func_88(-1443390498);
	aggregate.blackwater.func_88(689576469);
	aggregate.blackwater.func_88(-1750010031);
	aggregate.blackwater.func_88(-1725439174);
	aggregate.blackwater.func_88(1857654366);
	aggregate.blackwater.func_88(2095655613);
	aggregate.blackwater.func_88(1049317994);
	aggregate.blackwater.func_88(-279038963);
	aggregate.blackwater.func_88(161441935);
	aggregate.blackwater.func_88(-820561187);
	aggregate.blackwater.func_88(-1268841107);
	aggregate.blackwater.func_88(-280121448);
	aggregate.blackwater.func_88(2087785010);
	aggregate.blackwater.func_88(1065585604);
	aggregate.blackwater.func_88(-175048740);
	aggregate.blackwater.func_88(-482127039);
	aggregate.blackwater.func_88(-1603458673);
	iLocal_23[0] = 0;
	iLocal_23[1] = 0;
	iLocal_23[2] = 0;
}

