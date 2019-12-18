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
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	aggregate_func_685();
	func_2();
	bVar0 = true;
	while (bVar0)
	{
		if (aggregate_func_4251() == -1)
		{
			func_4();
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
	aggregate_func_4238();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2395f, -2410f, 35f, 0f, 0f, 0f, 150f, 120f, 50f, "m_volMacFarlanesRanch_Restriction");
	aggregate_func_1306(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1405.399f, -2279.227f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLanding_Restriction");
	aggregate_func_1314(iLocal_18, 0, 0);
	iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStillwaterCreek_Aquatic_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -1747.279f, -2431.148f, 38f, 0f, 0f, -18f, 20f, 50f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -1800.653f, -2314.105f, 38f, 0f, 0f, 15f, 60f, 25f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -1787.128f, -2348.89f, 38f, 0f, 0f, -36f, 20f, 20f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -1668.215f, -2341.46f, 38f, 0f, 0f, 25f, 25f, 15f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -1671.046f, -2320.505f, 38f, 0f, 0f, 6f, 20f, 20f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -1666.093f, -2360.316f, 38f, 0f, 0f, 25f, 20f, 15f, 20f);
	aggregate_func_1369(iLocal_19);
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = _NAMESPACE48::_0x112DDF56300BC6E5(363792844);
	iVar1 = _NAMESPACE48::_0x112DDF56300BC6E5(886569692);
	iVar2 = _NAMESPACE48::_0x112DDF56300BC6E5(1292930074);
	iVar3 = _NAMESPACE48::_0x112DDF56300BC6E5(-677310285);
	iVar4 = _NAMESPACE48::_0x112DDF56300BC6E5(-310363023);
	iVar5 = _NAMESPACE48::_0x112DDF56300BC6E5(-66463356);
	if (((((!_NAMESPACE48::_0x800DF3FC913355F3(iVar0) || !_NAMESPACE48::_0x800DF3FC913355F3(iVar1)) || !_NAMESPACE48::_0x800DF3FC913355F3(iVar2)) || !_NAMESPACE48::_0x800DF3FC913355F3(iVar3)) || !_NAMESPACE48::_0x800DF3FC913355F3(iVar4)) || !_NAMESPACE48::_0x800DF3FC913355F3(iVar5))
	{
		return;
	}
	if (((((_NAMESPACE48::_0xEB98B38CA60742D7(iVar0) && _NAMESPACE48::_0xEB98B38CA60742D7(iVar1)) && _NAMESPACE48::_0xEB98B38CA60742D7(iVar2)) && _NAMESPACE48::_0xEB98B38CA60742D7(iVar3)) && _NAMESPACE48::_0xEB98B38CA60742D7(iVar4)) && _NAMESPACE48::_0xEB98B38CA60742D7(iVar5))
	{
		if (!aggregate_func_1518(1167397384))
		{
			if (!STREAMING::_0x73B40D97D7BAAD77(1736386364, Global_36))
			{
				aggregate_func_3414(1167397384);
			}
		}
	}
	else if (aggregate_func_1518(1167397384))
	{
		if (!STREAMING::_0x73B40D97D7BAAD77(1736386364, Global_36))
		{
			aggregate_func_3010(1167397384);
		}
	}
}

