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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	bool bVar8;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
	}
	bVar7 = aggregate.aberdeenpigfarm.func_45() == -1;
	while (bVar7 || !aggregate.aberdeenpigfarm.func_49(0, 0))
	{
		bVar8 = (!aggregate.generic_shop_ui_events.func_4(1024) && (!aggregate.generic_shop_ui_events.func_4(32) || !aggregate.generic_shop_ui_events.func_4(64)));
		while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0) && bVar8)
		{
			if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &Var3))
			{
				if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var3.f_3))
				{
				}
				switch (Var3)
				{
					case -722926211:
					case 703281244:
						aggregate.generic_shop_ui_events.func_5(64);
						aggregate.generic_shop_ui_events.func_5(1024);
						break;
					case -1151569080:
						if (Var3.f_2 == -2105535423)
						{
							aggregate.generic_shop_ui_events.func_10(Var3.f_1);
							aggregate.generic_shop_ui_events.func_5(4);
							aggregate.generic_shop_ui_events.func_5(32768);
							aggregate.generic_shop_ui_events.func_5(2);
							aggregate.generic_shop_ui_events.func_5(1024);
						}
						else
						{
							aggregate.generic_shop_ui_events.func_10(Var3.f_1);
							aggregate.generic_shop_ui_events.func_10(Var3.f_2);
							if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var3.f_3))
							{
								aggregate.generic_shop_ui_events.func_15(&(Var3.f_3));
							}
							aggregate.generic_shop_ui_events.func_5(16384);
							aggregate.generic_shop_ui_events.func_5(1024);
						}
						break;
					case -1740156697:
						aggregate.generic_shop_ui_events.func_15(&(Var3.f_3));
						aggregate.generic_shop_ui_events.func_10(Var3.f_1);
						iVar2 = aggregate.generic_shop_ui_events.func_11();
						if ((iVar2 == -627085098 || iVar2 == 1751567119) || iVar2 == -841939068)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, aggregate.generic_shop_ui_events.func_12());
							iVar1 = iVar0;
							aggregate.generic_shop_ui_events.func_10(iVar1);
						}
						else if (iVar2 != 336033112 || iVar2 != 0)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, aggregate.generic_shop_ui_events.func_14());
							iVar1 = iVar0;
							aggregate.generic_shop_ui_events.func_10(iVar1);
						}
						if (Var3.f_2 == -401761271)
						{
							aggregate.generic_shop_ui_events.func_5(32);
						}
						else
						{
							aggregate.generic_shop_ui_events.func_5(2);
						}
						aggregate.generic_shop_ui_events.func_5(1024);
						break;
					case -632467210:
						aggregate.generic_shop_ui_events.func_15(&(Var3.f_3));
						aggregate.generic_shop_ui_events.func_10(Var3.f_1);
						iVar2 = aggregate.generic_shop_ui_events.func_11();
						if (iVar2 != 336033112 || iVar2 != 0)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, aggregate.generic_shop_ui_events.func_14());
							iVar1 = iVar0;
							aggregate.generic_shop_ui_events.func_10(iVar1);
						}
						aggregate.generic_shop_ui_events.func_5(32768);
						aggregate.generic_shop_ui_events.func_5(1024);
						break;
					case -1203660660:
						if (Var3.f_2 == -729996127)
						{
						}
						else
						{
							aggregate.generic_shop_ui_events.func_10(Var3.f_1);
							iVar2 = aggregate.generic_shop_ui_events.func_11();
							aggregate.generic_shop_ui_events.func_15(&(Var3.f_3));
							if (iVar2 != 336033112 || iVar2 != 0)
							{
								iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, aggregate.generic_shop_ui_events.func_14());
								iVar1 = iVar0;
								aggregate.generic_shop_ui_events.func_10(iVar1);
							}
						}
						aggregate.generic_shop_ui_events.func_10(Var3.f_2);
						if (Var3.f_2 == 1285135021)
						{
							aggregate.generic_shop_ui_events.func_5(512);
						}
						aggregate.generic_shop_ui_events.func_5(8);
						aggregate.generic_shop_ui_events.func_5(1024);
						break;
					case -2075827635:
						if (Var3.f_2 != 1130992209)
						{
							if (Var3.f_2 != -1980648788)
							{
								if (Var3.f_2 != -401761271)
								{
									if (Var3.f_2 == 516329682)
									{
										aggregate.generic_shop_ui_events.func_5(256);
									}
								}
								else
								{
									aggregate.generic_shop_ui_events.func_5(128);
								}
							}
							else
							{
								aggregate.generic_shop_ui_events.func_5(256);
							}
						}
						else
						{
							aggregate.generic_shop_ui_events.func_5(128);
						}
						aggregate.generic_shop_ui_events.func_4(16);
						aggregate.generic_shop_ui_events.func_5(1024);
						break;
					case 922460030:
						if (Var3.f_2 != 416030390)
						{
							if (Var3.f_2 != -1424072773)
							{
							}
							else if (Global_1915170->f_19742.f_3.f_3)
							{
								Global_1915170->f_19742.f_3.f_3 = 0;
								Global_1915170->f_19742.f_3.f_2 = 0;
							}
							else
							{
								Global_1915170->f_19742.f_3.f_2 = 1;
							}
						}
						else
						{
							Global_1915170->f_19742.f_3.f_3 = 1;
						}
						break;
					case -114265581:
						aggregate.generic_shop_ui_events.func_10(Var3.f_2);
						aggregate.generic_shop_ui_events.func_5(4096);
						aggregate.generic_shop_ui_events.func_5(1024);
						break;
					case -120002582:
						aggregate.generic_shop_ui_events.func_10(Var3.f_2);
						aggregate.generic_shop_ui_events.func_5(4096);
						aggregate.generic_shop_ui_events.func_5(1024);
						break;
					case 368072021:
						func_25(Var3.f_2);
						func_26(Var3.f_1);
						aggregate.generic_shop_ui_events.func_5(8192);
						aggregate.generic_shop_ui_events.func_5(1024);
						break;
					default:
						break;
				}
				UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
			}
		}
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	aggregate.generic_shop_ui_events.func_27();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_25(int iParam0)
{
	bool bVar0;

	bVar0 = Global_1915170->f_19742.f_3.f_39 != iParam0;
	Global_1915170->f_19742.f_3.f_39 = iParam0;
	return bVar0;
}

bool func_26(int iParam0)
{
	bool bVar0;

	bVar0 = Global_1915170->f_19742.f_3.f_38 != iParam0;
	Global_1915170->f_19742.f_3.f_38 = iParam0;
	return bVar0;
}

var func_32()
{
	return Global_1915170->f_19742.f_3.f_16;
}

