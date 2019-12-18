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
	bVar7 = aggregate_func_4251() == -1;
	while (bVar7 || !aggregate_func_523(0, 0))
	{
		bVar8 = (!aggregate_func_5531(1024) && (!aggregate_func_5531(32) || !aggregate_func_5531(64)));
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
						aggregate_func_4848(64);
						aggregate_func_4848(1024);
						break;
					case -1151569080:
						if (Var3.f_2 == -2105535423)
						{
							aggregate_func_4286(Var3.f_1);
							aggregate_func_4848(4);
							aggregate_func_4848(32768);
							aggregate_func_4848(2);
							aggregate_func_4848(1024);
						}
						else
						{
							aggregate_func_4286(Var3.f_1);
							aggregate_func_4286(Var3.f_2);
							if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Var3.f_3))
							{
								aggregate_func_4602(&(Var3.f_3));
							}
							aggregate_func_4848(16384);
							aggregate_func_4848(1024);
						}
						break;
					case -1740156697:
						aggregate_func_4602(&(Var3.f_3));
						aggregate_func_4286(Var3.f_1);
						iVar2 = aggregate_func_2851();
						if ((iVar2 == -627085098 || iVar2 == 1751567119) || iVar2 == -841939068)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, aggregate_func_5532());
							iVar1 = iVar0;
							aggregate_func_4286(iVar1);
						}
						else if (iVar2 != 336033112 || iVar2 != 0)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, aggregate_func_5533());
							iVar1 = iVar0;
							aggregate_func_4286(iVar1);
						}
						if (Var3.f_2 == -401761271)
						{
							aggregate_func_4848(32);
						}
						else
						{
							aggregate_func_4848(2);
						}
						aggregate_func_4848(1024);
						break;
					case -632467210:
						aggregate_func_4602(&(Var3.f_3));
						aggregate_func_4286(Var3.f_1);
						iVar2 = aggregate_func_2851();
						if (iVar2 != 336033112 || iVar2 != 0)
						{
							iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, aggregate_func_5533());
							iVar1 = iVar0;
							aggregate_func_4286(iVar1);
						}
						aggregate_func_4848(32768);
						aggregate_func_4848(1024);
						break;
					case -1203660660:
						if (Var3.f_2 == -729996127)
						{
						}
						else
						{
							aggregate_func_4286(Var3.f_1);
							iVar2 = aggregate_func_2851();
							aggregate_func_4602(&(Var3.f_3));
							if (iVar2 != 336033112 || iVar2 != 0)
							{
								iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, aggregate_func_5533());
								iVar1 = iVar0;
								aggregate_func_4286(iVar1);
							}
						}
						aggregate_func_4286(Var3.f_2);
						if (Var3.f_2 == 1285135021)
						{
							aggregate_func_4848(512);
						}
						aggregate_func_4848(8);
						aggregate_func_4848(1024);
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
										aggregate_func_4848(256);
									}
								}
								else
								{
									aggregate_func_4848(128);
								}
							}
							else
							{
								aggregate_func_4848(256);
							}
						}
						else
						{
							aggregate_func_4848(128);
						}
						aggregate_func_5531(16);
						aggregate_func_4848(1024);
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
						aggregate_func_4286(Var3.f_2);
						aggregate_func_4848(4096);
						aggregate_func_4848(1024);
						break;
					case -120002582:
						aggregate_func_4286(Var3.f_2);
						aggregate_func_4848(4096);
						aggregate_func_4848(1024);
						break;
					case 368072021:
						func_25(Var3.f_2);
						func_26(Var3.f_1);
						aggregate_func_4848(8192);
						aggregate_func_4848(1024);
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
	aggregate_func_5534();
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

