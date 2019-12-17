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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	float fLocal_18 = 0f;
	float fLocal_19 = 0f;
	var uLocal_20 = 0;
	struct<93> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	fLocal_18 = 1f;
	fLocal_19 = 1f;
	func_1(ScriptParam_0);
	while (!aggregate.aberdeenpigfarm.func_49(0, 0) && !func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Local_21.f_1 = vParam0.z;
	aggregate.net_assassination.func_520(64);
}

bool func_3()
{
	int iVar0;

	if (Local_21 == 34)
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(Global_1275117->f_201, 0))
	{
		return true;
	}
	iVar0 = aggregate.medium_update.func_397(Global_1275117->f_200, 1);
	if (((Local_21.f_1 != iVar0 && iVar0 != -1) && Local_21 < 25) && !func_8())
	{
		return true;
	}
	if ((!aggregate.annesburg.func_121(*(Local_21.f_12[3 /*3*/])) && Local_21 == 25) && BUILTIN::VDIST(*(Local_21.f_12[3 /*3*/]), Global_36) > Global_1901929->f_742.f_10)
	{
		return true;
	}
	return false;
}

void func_4()
{
	int iVar0;

	func_10();
	func_11();
	if (aggregate.net_fetch.func_5397(64))
	{
		if (Local_21 < 33)
		{
			aggregate.fme_animal_tagging.func_176(33);
		}
	}
	else if (aggregate.net_fetch.func_5397(128))
	{
		if (Local_21 > 3)
		{
			if (Global_1275117->f_1 == 4)
			{
				if (Local_21 < 21)
				{
					aggregate.fme_animal_tagging.func_176(21);
				}
				else if (aggregate.net_main_offline.func_1373(Local_21.f_1) < 80f)
				{
					aggregate.net_assassination.func_520(128);
				}
			}
			else if (Local_21 < 25)
			{
				aggregate.fme_animal_tagging.func_176(25);
			}
			else if (aggregate.net_main_offline.func_1373(Local_21.f_1) < 80f)
			{
				aggregate.net_assassination.func_520(128);
			}
		}
	}
	func_15(&(Local_21.f_85));
	switch (Local_21)
	{
		case 0:
			func_16();
			aggregate.fme_animal_tagging.func_176(1);
			break;
		case 1:
			if (func_17())
			{
				aggregate.fme_animal_tagging.func_176(2);
			}
			break;
		case 2:
			if (func_18())
			{
				aggregate.fme_animal_tagging.func_176(3);
			}
			break;
		case 3:
			if (aggregate.net_fetch.func_5397(128))
			{
				if (Global_1275117->f_1 == 4)
				{
					aggregate.fme_animal_tagging.func_176(21);
				}
				else
				{
					aggregate.fme_animal_tagging.func_176(25);
				}
				return;
			}
			if (Global_1275117->f_1 == 4)
			{
				aggregate.fme_animal_tagging.func_176(21);
				return;
			}
			if (!aggregate.flow_controller.func_451(PLAYER::PLAYER_ID(), 16) && (Global_1275117->f_1 == 3 || Global_1275117->f_1 == 2))
			{
				if (func_20())
				{
					if (aggregate.fme_archery.func_1286(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						func_22(8192, 0);
					}
					return;
				}
				aggregate.fme_animal_tagging.func_176(10);
			}
			else
			{
				aggregate.fme_animal_tagging.func_176(8);
			}
			break;
		case 8:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_21.f_84) || !_NAMESPACE26::_0x81FB74C83C2ED69F(Local_21.f_84))
			{
				aggregate.fme_animal_tagging.func_176(33);
			}
			func_23(0);
			if (Global_1275117->f_1 == 2 && !func_20())
			{
				aggregate.fme_animal_tagging.func_176(10);
				return;
			}
			if (func_24(0))
			{
				if (aggregate.fme_archery.func_1286(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_22(8192, 0);
				}
				func_25(0);
				return;
			}
			else
			{
				func_25(1);
			}
			func_26();
			func_27();
			if (func_28())
			{
				func_29();
				func_25(0);
				func_30(Local_21.f_1);
				aggregate.net_assassination.func_520(16384);
				aggregate.fme_animal_tagging.func_176(5);
			}
			break;
		case 5:
			func_29();
			if (!aggregate.flow_controller.func_451(PLAYER::PLAYER_ID(), 128))
			{
			}
			else
			{
				if (func_32())
				{
					aggregate.fme_animal_tagging.func_176(4);
				}
				Jump @2059; //curOff = 753
				func_29();
				if (func_33())
				{
					func_34();
					NETWORK::_0x4B05B97BA46F419D(0);
					aggregate.net_fetch.func_5132(1, 1);
					aggregate.fme_animal_tagging.func_176(6);
				}
				Jump @2059; //curOff = 788
				func_29();
				if (func_36())
				{
					aggregate.fme_animal_tagging.func_176(7);
				}
				Jump @2059; //curOff = 807
				func_29();
				func_37();
				func_38();
				aggregate.fme_animal_tagging.func_176(9);
				Jump @2059; //curOff = 828
				func_29();
				func_39();
				if (func_40())
				{
					func_41();
					aggregate.fme_animal_tagging.func_176(30);
					return;
				}
				if ((ANIMSCENE::_0x25557E324489393C(Local_21.f_6) && ANIMSCENE::_0xD8254CB2C586412B(Local_21.f_6, 0)) && Local_21.f_4 == 5)
				{
					func_42(0);
					func_41();
					func_25(1);
					func_43();
					NETWORK::_0x4B05B97BA46F419D(1);
					aggregate.net_fetch.func_5132(1, 0);
					aggregate.fme_animal_tagging.func_622();
					aggregate.fme_animal_tagging.func_176(25);
				}
				Jump @2059; //curOff = 935
				if (func_45())
				{
					func_25(0);
					aggregate.net_assassination.func_520(16384);
					if (Global_1275117->f_1 == 2)
					{
						aggregate.fme_animal_tagging.func_176(11);
					}
					else
					{
						aggregate.fme_animal_tagging.func_176(12);
					}
				}
				Jump @2059; //curOff = 982
				if (func_46())
				{
					func_47();
					aggregate.fme_animal_tagging.func_176(13);
				}
				Jump @2059; //curOff = 1002
				func_48();
				aggregate.fme_animal_tagging.func_176(13);
				Jump @2059; //curOff = 1015
				func_29();
				if (func_49())
				{
					if (func_50())
					{
						func_34();
						func_30(Local_21.f_1);
						aggregate.fme_animal_tagging.func_176(15);
					}
					else
					{
						func_30(Local_21.f_1);
						aggregate.net_fetch.func_5132(1, 0);
						aggregate.fme_animal_tagging.func_176(19);
					}
				}
				Jump @2059; //curOff = 1078
				func_29();
				if (!aggregate.flow_controller.func_451(PLAYER::PLAYER_ID(), 128))
				{
				}
				else
				{
					if (func_32())
					{
						aggregate.fme_animal_tagging.func_176(14);
					}
					Jump @2059; //curOff = 1115
					func_29();
					if (func_33())
					{
						NETWORK::_0x4B05B97BA46F419D(0);
						aggregate.net_fetch.func_5132(1, 1);
						aggregate.fme_animal_tagging.func_176(16);
					}
					Jump @2059; //curOff = 1147
					func_29();
					if (func_36())
					{
						aggregate.fme_animal_tagging.func_176(17);
					}
					Jump @2059; //curOff = 1167
					func_29();
					func_37();
					func_38();
					aggregate.fme_animal_tagging.func_176(18);
					Jump @2059; //curOff = 1188
					func_29();
					func_39();
					if (func_40())
					{
						func_41();
						aggregate.fme_animal_tagging.func_176(30);
						return;
					}
					if ((ANIMSCENE::_0x25557E324489393C(Local_21.f_6) && ANIMSCENE::_0xD8254CB2C586412B(Local_21.f_6, 0)) && Local_21.f_4 == 5)
					{
						func_41();
						func_25(1);
						func_43();
						NETWORK::_0x4B05B97BA46F419D(1);
						aggregate.net_fetch.func_5132(1, 0);
						aggregate.fme_animal_tagging.func_622();
						func_51();
						aggregate.fme_animal_tagging.func_176(25);
					}
					Jump @2059; //curOff = 1294
					if (func_52(0))
					{
						func_25(1);
						func_53(0, 1, 0);
						aggregate.fme_animal_tagging.func_622();
						aggregate.fme_animal_tagging.func_176(20);
					}
					Jump @2059; //curOff = 1327
					if (func_40())
					{
						aggregate.fme_animal_tagging.func_176(30);
						return;
					}
					if (func_54())
					{
						func_51();
						aggregate.fme_animal_tagging.func_176(25);
					}
					Jump @2059; //curOff = 1363
					if (func_45())
					{
						aggregate.net_assassination.func_520(16384);
						Local_21.f_2 = 2;
						aggregate.fme_animal_tagging.func_176(23);
					}
					Jump @2059; //curOff = 1391
					if (func_52(1))
					{
						func_30(Local_21.f_1);
						aggregate.fme_animal_tagging.func_622();
						aggregate.fme_animal_tagging.func_176(22);
					}
					Jump @2059; //curOff = 1420
					if (func_55())
					{
						aggregate.fme_animal_tagging.func_176(24);
					}
					Jump @2059; //curOff = 1436
					if (aggregate.flow_controller.func_451(PLAYER::PLAYER_ID(), 64) && func_56())
					{
						aggregate.fme_animal_tagging.func_174(32768);
						aggregate.fme_animal_tagging.func_176(25);
					}
					Jump @2059; //curOff = 1475
					func_23(0);
					if (func_40())
					{
						aggregate.fme_animal_tagging.func_176(30);
						return;
					}
					if (func_24(1))
					{
						func_25(0);
						return;
					}
					else
					{
						func_25(1);
					}
					if (func_28())
					{
						func_25(0);
						aggregate.fme_animal_tagging.func_176(26);
					}
					Jump @2059; //curOff = 1541
					if (func_32())
					{
						aggregate.fme_animal_tagging.func_176(27);
					}
					Jump @2059; //curOff = 1557
					if (func_33())
					{
						aggregate.fme_animal_tagging.func_176(28);
					}
					Jump @2059; //curOff = 1573
					func_37();
					aggregate.net_fetch.func_5398(2);
					NETWORK::_0x4B05B97BA46F419D(0);
					aggregate.net_fetch.func_5132(1, 1);
					aggregate.fme_animal_tagging.func_176(29);
					Jump @2059; //curOff = 1603
					func_59();
					if (ANIMSCENE::_0x25557E324489393C(Local_21.f_6) && ANIMSCENE::_0xD8254CB2C586412B(Local_21.f_6, 0))
					{
						func_41();
						func_43();
						NETWORK::_0x442B4347B6EC36E8(PLAYER::PLAYER_PED_ID(), 1000, true);
						aggregate.net_assassination.func_520(32768);
						aggregate.fme_animal_tagging.func_176(32);
					}
					Jump @2059; //curOff = 1669
					if (func_60())
					{
						aggregate.net_assassination.func_520(32768);
						func_53(1, 1, 0);
						aggregate.fme_animal_tagging.func_176(31);
					}
					Jump @2059; //curOff = 1700
					if (func_61())
					{
						aggregate.fme_animal_tagging.func_176(32);
					}
					Jump @2059; //curOff = 1716
					NETWORK::_0x4B05B97BA46F419D(1);
					aggregate.net_fetch.func_5132(0, 0);
					aggregate.net_fetch.func_5133(0);
					if (Global_1275117->f_1 == 4)
					{
						aggregate.net_main_offline.func_4052(1);
						aggregate.net_main_offline.func_4052(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						aggregate.net_fetch.func_5398(32);
						aggregate.net_fetch.func_5398(64);
					}
					else if (Global_1275117->f_1 == 2)
					{
						if (_NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15) == PLAYER::PLAYER_ID())
						{
							aggregate.net_main_offline.func_4052(1);
						}
						iVar0 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(Global_1273882->f_15);
						if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && !aggregate.flow_controller.func_451(PLAYER::PLAYER_ID(), 16)) && aggregate.flow_controller.func_451(iVar0, 2))
						{
							aggregate.net_fetch.func_5398(16);
							aggregate.net_main_offline.func_4052(1);
						}
					}
					else if (Global_1275117->f_1 == 3)
					{
						aggregate.net_main_offline.func_4052(1);
						aggregate.net_main_offline.func_4052(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						aggregate.fme_animal_tagging.func_174(128);
					}
					aggregate.fme_animal_tagging.func_176(33);
					Jump @2059; //curOff = 1920
					func_66();
					func_67();
					if (aggregate.net_fetch.func_5397(64))
					{
						if (Global_1275117->f_1 == 4)
						{
							aggregate.net_main_offline.func_4052(1);
							aggregate.net_main_offline.func_4052(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
						}
						aggregate.net_assassination.func_520(64);
					}
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_21.f_84) || !_NAMESPACE26::_0x81FB74C83C2ED69F(Local_21.f_84))
					{
						aggregate.fme_animal_tagging.func_176(34);
					}
					else if (aggregate.fme_animal_tagging.func_134(128))
					{
						aggregate.fme_animal_tagging.func_176(34);
					}
					else if (Local_21.f_3 != 0)
					{
						aggregate.fme_animal_tagging.func_176(34);
					}
					else
					{
						aggregate.fme_animal_tagging.func_176(0);
					}
				}
			}
			default:
				break;
	}
}

void func_5()
{
	int iVar0;

	func_66();
	func_23(1);
	func_53(1, 1, 0);
	if (Global_1275117->f_1 == 4)
	{
		if (aggregate.fme_animal_tagging.func_134(32768))
		{
			aggregate.net_main_offline.func_4052(1);
			aggregate.net_main_offline.func_4052(_NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID())));
		}
	}
	aggregate.net_fetch.func_5133(0);
	aggregate.net_fetch.func_5398(2);
	aggregate.net_fetch.func_5398(32);
	aggregate.net_fetch.func_5398(8);
	aggregate.net_fetch.func_5398(64);
	aggregate.net_assassination.func_520(32768);
	func_42(0);
	if (aggregate.net_fetch.func_5397(128))
	{
		aggregate.net_assassination.func_520(128);
	}
	if (aggregate.fme_animal_tagging.func_134(1024))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		aggregate.fme_animal_tagging.func_174(1024);
	}
	if ((Local_21.f_4 == 1 || Local_21.f_4 == 2) || Local_21.f_4 == 4)
	{
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	func_70(&(Local_21.f_85));
	HUD::_0xAA03F130A637D923("MSMP");
	aggregate.net_fetch.func_5132(0, 0);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (VOLUME::_0x92A78D0BEDB332A3(&(Local_21.f_89[iVar0])))
		{
			VOLUME::_0x43F867EF5C463A53(&(Local_21.f_89[iVar0]));
		}
		iVar0++;
	}
	if (aggregate.net_arrowheads.func_118(1, 8))
	{
		aggregate.net_arrowheads.func_80(1, 8, 0);
	}
}

bool func_8()
{
	if ((Local_21 == 9 || Local_21 == 18) || Local_21 == 20)
	{
		return true;
	}
	return false;
}

void func_10()
{
	if (aggregate.blackwater.func_77(886))
	{
		return;
	}
	if (aggregate.flow_controller.func_451(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (Local_21 != 8)
	{
		return;
	}
	if ((Local_21.f_84 != PLAYER::PLAYER_ID() || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1275329->f_116))
	{
		return;
	}
	if (aggregate.net_main_offline.func_1373(Local_21.f_1) < (80f * 0.5f))
	{
		aggregate.binoculars.func_18(886, 0);
	}
}

void func_11()
{
	switch (Local_21.f_92)
	{
		case 0:
			if (aggregate.net_arrowheads.func_118(1, 8))
			{
				aggregate.fme_animal_tagging.func_212(1);
			}
			else if (func_77())
			{
			}
			else if (&Global_1048584)
			{
			}
			else if (aggregate.aberdeenpigfarm.func_158(aggregate.aberdeenpigfarm.func_159()))
			{
			}
			else if (!func_80(532942402))
			{
			}
			else
			{
				aggregate.net_arrowheads.func_79(1, 8);
				aggregate.fme_animal_tagging.func_212(1);
				Jump @246; //curOff = 113
				if (!aggregate.net_arrowheads.func_118(1, 8))
				{
					aggregate.fme_animal_tagging.func_212(0);
				}
				else if (!func_80(1661805647))
				{
					aggregate.net_arrowheads.func_80(1, 8, 0);
					aggregate.fme_animal_tagging.func_212(0);
				}
				else if (aggregate.aberdeenpigfarm.func_158(aggregate.aberdeenpigfarm.func_159()))
				{
					aggregate.net_arrowheads.func_80(1, 8, 0);
					aggregate.fme_animal_tagging.func_212(0);
				}
				else if (&Global_1048584)
				{
					aggregate.net_arrowheads.func_80(1, 8, 0);
					aggregate.fme_animal_tagging.func_212(0);
				}
				else if (func_77())
				{
					aggregate.net_arrowheads.func_80(1, 8, 0);
					aggregate.fme_animal_tagging.func_212(0);
				}
				else
				{
					Jump @246; //curOff = 237
				}
			}
			default:
				break;
	}
}

void func_15(int* iParam0)
{
	switch (iParam0->f_3)
	{
		case 0:
			if (Local_21 <= 9)
			{
				if (aggregate.net_fast_travel_barker.func_74(aggregate.moonshine_drink_item.func_1(), 1))
				{
					if (aggregate.net_moonshine_entrance.func_85())
					{
						iParam0->f_2 = -630605689;
					}
				}
				if (iParam0->f_2 != 0)
				{
					STREAMING::REQUEST_MODEL(iParam0->f_2, false);
					iParam0->f_3 = 1;
				}
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
				{
					*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_2, ENTITY::GET_ENTITY_COORDS(iParam0->f_1, true, false) + Vector(10f, 0f, 0f), false, true, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
						ENTITY::SET_ENTITY_COLLISION(*iParam0, false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*iParam0, iParam0->f_1, 0, 0.55f, 0f, 2f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1, 0, 0);
						iParam0->f_3 = 2;
					}
				}
				else if (aggregate.net_main_offline.func_3104(Local_21.f_1))
				{
					iParam0->f_1 = func_88(func_87(Local_21.f_1, 0, 1), 0, 0);
				}
			}
			break;
		case 2:
			if ((Local_21 > 9 || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_1)) || !ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				func_70(iParam0);
				iParam0->f_3 = 0;
			}
			break;
	}
}

void func_16()
{
	func_89();
	Local_21.f_84 = aggregate.moonshine_drink_item.func_1();
	func_90();
}

bool func_17()
{
	int iVar0;
	char* sVar1;

	iVar0 = 1;
	sVar1 = "MSMP";
	HUD::_0xF66090013DE648D5(sVar1);
	if (!HUD::_0xD0976CC34002DB57(sVar1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_18()
{
	vector3 vVar0[4];
	vector3 vVar13[4];
	bool bVar26;
	int iVar27;

	if (!func_91(Local_21.f_1, &vVar0, &vVar13))
	{
		return false;
	}
	bVar26 = (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()) && _NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15) > 1);
	iVar27 = 0;
	while (iVar27 < 4)
	{
		if (!VOLUME::_0x92A78D0BEDB332A3((Local_21.f_34[iVar27 /*4*/])->f_2))
		{
			(Local_21.f_34[iVar27 /*4*/])->f_2 = VOLUME::_CREATE_VOLUME_CYLINDER(*(vVar0[iVar27 /*3*/]), 0f, 0f, 0f, *(vVar13[iVar27 /*3*/]));
		}
		if (!aggregate.annesburg.func_217(&(Local_21.f_34[iVar27 /*4*/])))
		{
			Local_21.f_34[iVar27 /*4*/] = aggregate.net_hunting_wagon.func_102(func_93(iVar27, 0), joaat("INPUT_CONTEXT_Y"), (Local_21.f_34[iVar27 /*4*/])->f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if ((iVar27 == 0 || iVar27 == 1) && !aggregate.annesburg.func_217((Local_21.f_34[iVar27 /*4*/])->f_1))
		{
			(Local_21.f_34[iVar27 /*4*/])->f_1 = aggregate.net_hunting_wagon.func_102(func_93(iVar27, 1), joaat("INPUT_CONTEXT_B"), (Local_21.f_34[iVar27 /*4*/])->f_2, 3, 0, 0, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			if (!bVar26)
			{
				aggregate.net_bounty_wagon.func_200((Local_21.f_34[iVar27 /*4*/])->f_1, 0, 0);
				aggregate.binoculars.func_37((Local_21.f_34[iVar27 /*4*/])->f_1, 0, 0, 1);
			}
		}
		if (iVar27 == 0)
		{
			(Local_21.f_34[iVar27 /*4*/])->f_3 = -2097019783;
		}
		else if (iVar27 == 1)
		{
			(Local_21.f_34[iVar27 /*4*/])->f_3 = 302114997;
		}
		iVar27++;
	}
	aggregate.fme_animal_tagging.func_174(256);
	return true;
}

bool func_20()
{
	int iVar0;

	if (aggregate.fme_animal_tagging.func_643())
	{
		return true;
	}
	if (aggregate.fme_archery.func_1286(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	if (!aggregate.annesburg.func_109())
	{
		return true;
	}
	if (aggregate.aberdeenpigfarm.func_158(aggregate.aberdeenpigfarm.func_56(0)))
	{
		return true;
	}
	if (aggregate.doc_book.func_278(0))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return true;
	}
	iVar0 = aggregate.medium_update.func_201(1427578635, PLAYER::PLAYER_ID(), 0, 1);
	if (aggregate.fm_deathmatch_controller.func_1443(iVar0))
	{
		return true;
	}
	return false;
}

void func_22(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return;
	}
	if (aggregate.fme_animal_tagging.func_134(iParam0))
	{
		return;
	}
	if (aggregate.fme_dead_drop.func_811() || aggregate.fme_animal_tagging.func_199())
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!VOLUME::_0x92A78D0BEDB332A3((Local_21.f_34[iVar0 /*4*/])->f_2))
				{
				}
				else if (!aggregate.annesburg.func_217(&(Local_21.f_34[iVar0 /*4*/])))
				{
				}
				else if (!aggregate.annesburg.func_142(Global_35, (Local_21.f_34[iVar0 /*4*/])->f_2, 1, 0))
				{
				}
				else if (aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(2, "MS_WARN_WANTED_NO_ENTRY"), 10000, 0, 0, 0, 1) != 0)
				{
					aggregate.fme_animal_tagging.func_174(iParam0);
				}
				iVar0++;
			}
			break;
	}
}

void func_23(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0)
	{
		if (aggregate.fme_animal_tagging.func_134(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			aggregate.fme_animal_tagging.func_174(64);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (aggregate.annesburg.func_217(&(Local_21.f_34[iVar1 /*4*/])) && aggregate.camera_item.func_4(&(Local_21.f_34[iVar1 /*4*/]), 1))
			{
				bVar0 = true;
			}
			else
			{
				iVar1++;
			}
		}
		if (bVar0)
		{
			if (!aggregate.fme_animal_tagging.func_134(64))
			{
				SCRIPTS::_0x76CBCD9EADC00955();
				aggregate.fme_animal_tagging.func_174(64);
			}
		}
		else if (aggregate.fme_animal_tagging.func_134(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			aggregate.fme_animal_tagging.func_174(64);
		}
	}
}

bool func_24(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (Global_1274951->f_42)
		{
			return true;
		}
		return false;
	}
	if (Global_1275329->f_119.f_4)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	if (PED::_0xB655DB7582AEC805(Global_35))
	{
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return true;
	}
	if (PED::IS_PED_ON_VEHICLE(Global_35, false) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return true;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return true;
	}
	if (PED::_0x9682F850056C9ADE(Global_35))
	{
		return true;
	}
	if (PED::_0x3AA24CCC0D451379(Global_35) || PED::_0xD453BB601D4A606E(Global_35))
	{
		return true;
	}
	if (PED::_0x42429C674B61238B(Global_35))
	{
		return true;
	}
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
	{
		return true;
	}
	if (WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, -577893115, 500))
	{
		return true;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		return true;
	}
	if (TASK::_0x038B1F1674F0E242(Global_35))
	{
		return true;
	}
	if (aggregate.fme_animal_tagging.func_1097())
	{
		return true;
	}
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		return true;
	}
	iVar0 = PED::_0x693126B5D0457D0D(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	if (func_20())
	{
		return true;
	}
	return false;
}

void func_25(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (aggregate.fme_animal_tagging.func_134(256))
		{
			return;
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (aggregate.annesburg.func_217(&(Local_21.f_34[iVar0 /*4*/])))
		{
			aggregate.net_bounty_wagon.func_200(&(Local_21.f_34[iVar0 /*4*/]), bParam0, 0);
			aggregate.binoculars.func_37(&(Local_21.f_34[iVar0 /*4*/]), bParam0, 0, 1);
		}
		if (aggregate.annesburg.func_217((Local_21.f_34[iVar0 /*4*/])->f_1))
		{
			aggregate.net_bounty_wagon.func_200((Local_21.f_34[iVar0 /*4*/])->f_1, bParam0, 0);
			aggregate.binoculars.func_37((Local_21.f_34[iVar0 /*4*/])->f_1, bParam0, 0, 1);
		}
		iVar0++;
	}
	if (bParam0)
	{
		aggregate.fme_animal_tagging.func_174(256);
	}
	else
	{
		aggregate.fme_animal_tagging.func_174(256);
	}
}

void func_26()
{
	bool bVar0;
	int iVar1;
	struct<7> Var2[7];
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;

	if (!aggregate.fme_animal_tagging.func_134(256))
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		iVar1 = _NAMESPACE26::_0xD1BF325C8252A982(Global_1273882->f_15, &Var2);
		if (iVar1 > 1)
		{
			iVar53 = iVar1;
			iVar52 = 0;
			while (iVar52 <= (iVar1 - 1))
			{
				if (aggregate.fme_animal_tagging.func_784(*(Var2[iVar52 /*7*/])))
				{
					iVar54 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var2[iVar52 /*7*/]);
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar54))
					{
						if (aggregate.flow_controller.func_451(iVar54, 1))
						{
							iVar53 = (iVar53 - 1);
						}
						else if (aggregate.coffee_drinking.func_194(1048576, iVar54))
						{
							iVar53 = (iVar53 - 1);
						}
						else
						{
							iVar52++;
						}
						if (iVar53 > 1)
						{
							bVar0 = true;
						}
						iVar55 = 0;
						while (iVar55 <= 1)
						{
							if (aggregate.annesburg.func_217((Local_21.f_34[iVar55 /*4*/])->f_1))
							{
								if (bVar0)
								{
									if (!aggregate.doc_book.func_70((Local_21.f_34[iVar55 /*4*/])->f_1, 0))
									{
										aggregate.binoculars.func_37((Local_21.f_34[iVar55 /*4*/])->f_1, 1, 0, 1);
										aggregate.net_bounty_wagon.func_200((Local_21.f_34[iVar55 /*4*/])->f_1, 1, 1);
									}
								}
								else if (aggregate.doc_book.func_70((Local_21.f_34[iVar55 /*4*/])->f_1, 0))
								{
									aggregate.binoculars.func_37((Local_21.f_34[iVar55 /*4*/])->f_1, 0, 0, 1);
									aggregate.net_bounty_wagon.func_200((Local_21.f_34[iVar55 /*4*/])->f_1, 0, 1);
								}
							}
							iVar55++;
						}
					}
				}
			}
		}
	}
}

void func_27()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == 0 || iVar0 == 1)
		{
			if (aggregate.doc_book.func_70(&(Local_21.f_34[iVar0 /*4*/]), 0))
			{
				iVar1 = aggregate.moonshine_drink_item.func_1();
				if (NETWORK::_0x255A5EF65EDA9167(iVar1))
				{
					HUD::_0x8B55B324A9123F6B((Local_21.f_34[iVar0 /*4*/])->f_3, (Local_21.f_34[iVar0 /*4*/])->f_2, MISC::_CREATE_VAR_STRING(10, "MS_ENTER_PROMPT_GROUP", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iVar1), aggregate.fme_animal_tagging.func_487(iVar1, 1, -1, 0))), 3, 1, 0);
					HUD::_UIPROMPT_SET_GROUP(aggregate.mp_intro.func_1945(&(Local_21.f_34[iVar0 /*4*/])), (Local_21.f_34[iVar0 /*4*/])->f_3, 0);
					if (aggregate.doc_book.func_70((Local_21.f_34[iVar0 /*4*/])->f_1, 0))
					{
						HUD::_UIPROMPT_SET_GROUP(aggregate.mp_intro.func_1945((Local_21.f_34[iVar0 /*4*/])->f_1), (Local_21.f_34[iVar0 /*4*/])->f_3, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_28()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (aggregate.annesburg.func_217(&(Local_21.f_34[iVar0 /*4*/])) && aggregate.doc_book.func_50(&(Local_21.f_34[iVar0 /*4*/]), 1))
		{
			Local_21.f_2 = func_117(iVar0);
			func_118(Local_21.f_2);
			if (iVar0 == 0 || iVar0 == 1)
			{
				aggregate.fme_animal_tagging.func_174(8);
			}
			else
			{
				aggregate.fme_animal_tagging.func_174(32);
			}
			return true;
		}
		if (aggregate.annesburg.func_217((Local_21.f_34[iVar0 /*4*/])->f_1) && aggregate.doc_book.func_50((Local_21.f_34[iVar0 /*4*/])->f_1, 1))
		{
			Local_21.f_2 = func_117(iVar0);
			func_118(Local_21.f_2);
			aggregate.fme_animal_tagging.func_174(16);
			aggregate.net_fetch.func_5398(2);
			func_119();
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_29()
{
	aggregate.fm_mission_controller.func_7321();
	aggregate.fme_animal_tagging.func_955(0);
	if (aggregate.dynamic_craft_scenario.func_28())
	{
		aggregate.dynamic_craft_scenario.func_12();
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PED::SET_PED_RESET_FLAG(Global_35, 168, true);
	PED::SET_PED_RESET_FLAG(Global_35, 108, true);
	func_42(1);
}

void func_30(var uParam0)
{
	Global_1275329->f_119 = uParam0;
	aggregate.net_assassination.func_520(16);
	aggregate.net_fetch.func_5398(1);
}

bool func_32()
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;

	if ((!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35)) || aggregate.annesburg.func_180(255))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(1024) && STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
		return false;
	}
	if (Local_21.f_2 == -1)
	{
		return true;
	}
	if (Local_21.f_2 == 2 || Local_21.f_2 == 3)
	{
		fVar0 = 40f;
	}
	else
	{
		fVar0 = 200f;
	}
	vVar1 = { aggregate.fme_king_of_the_castle.func_1063(&(Local_21.f_28[Local_21.f_2])) };
	if (!aggregate.fme_animal_tagging.func_134(1024))
	{
		if (!STREAMING::_0xCF45DF50C7775F2A())
		{
			Local_21.f_11 = MISC::_GET_SYSTEM_TIME();
			STREAMING::_0x387AD749E3B69B70(*(Local_21.f_12[Local_21.f_2 /*3*/]), vVar1, fVar0, 0);
			aggregate.fme_animal_tagging.func_174(1024);
		}
		else
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
	}
	else if (!STREAMING::_0xCF45DF50C7775F2A())
	{
		iVar4 = 1;
	}
	else if (STREAMING::_0x0909F71B5C070797())
	{
		iVar4 = 1;
	}
	else
	{
		iVar5 = Global_1901929->f_742.f_11;
		if (Local_21.f_11 == 0)
		{
			Local_21.f_11 = MISC::_GET_SYSTEM_TIME();
		}
		else if ((MISC::_GET_SYSTEM_TIME() - Local_21.f_11) > iVar5)
		{
			iVar4 = 1;
		}
	}
	return iVar4;
}

bool func_33()
{
	char* sVar0;
	char* sVar1;
	bool bVar2;

	sVar0 = func_127();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return true;
	}
	sVar1 = func_129(func_128());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return true;
	}
	if (!ANIMSCENE::_0x25557E324489393C(Local_21.f_6))
	{
		Local_21.f_6 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sVar1, false, true);
	}
	bVar2 = true;
	if (!ANIMSCENE::_0x477122B8D05E7968(Local_21.f_6, 1, 0))
	{
		bVar2 = false;
	}
	if (!bVar2 && !ANIMSCENE::_0x59606519FF9D3EC2(Local_21.f_6, 1))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_21.f_6);
		return false;
	}
	if (bVar2)
	{
		return true;
	}
	return false;
}

void func_34()
{
	struct<7> Var0[7];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	bool bVar54;

	if (Local_21.f_9 <= 0)
	{
		if (aggregate.fme_animal_tagging.func_134(16) || Global_1275117->f_1 == 2)
		{
			Local_21.f_9 = _NAMESPACE26::_0x149A2751AB66AC02(Global_1273882->f_15);
			_NAMESPACE26::_0xD1BF325C8252A982(Global_1273882->f_15, &Var0);
			iVar53 = -1;
			iVar52 = 0;
			while (iVar52 <= (Local_21.f_9 - 1))
			{
				iVar50 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Var0[iVar52 /*7*/]);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar50))
				{
					bVar54 = _NAMESPACE26::_0x424B17A7DC5C90BC(iVar50);
					if (bVar54 || aggregate.flow_controller.func_451(iVar50, 1) == 0)
					{
						if (aggregate.coffee_drinking.func_194(1048576, iVar50) == 0)
						{
							Local_21.f_51[iVar52 /*4*/] = iVar50;
							if (bVar54)
							{
								iVar53 = iVar52;
								iVar51 = iVar50;
							}
							(Local_21.f_51[iVar52 /*4*/])->f_3 = 1;
						}
						else
						{
							(Local_21.f_51[iVar52 /*4*/])->f_3 = 0;
						}
					}
					else
					{
						(Local_21.f_51[iVar52 /*4*/])->f_3 = 0;
					}
				}
				iVar52++;
			}
			if (iVar53 != -1)
			{
				Local_21.f_51[iVar53 /*4*/] = &Local_21.f_51[0 /*4*/];
				(Local_21.f_51[iVar53 /*4*/])->f_3 = (Local_21.f_51[0 /*4*/])->f_3;
				Local_21.f_51[0 /*4*/] = iVar51;
				(Local_21.f_51[0 /*4*/])->f_3 = 1;
			}
		}
		else if (aggregate.fme_animal_tagging.func_134(8))
		{
			Local_21.f_9 = 1;
			Local_21.f_51[0 /*4*/] = PLAYER::PLAYER_ID();
		}
	}
}

bool func_36()
{
	int iVar0;

	if (Local_21.f_8 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Local_21.f_51[Local_21.f_8 /*4*/])->f_1))
		{
			Local_21.f_8++;
		}
		else if ((Local_21.f_51[Local_21.f_8 /*4*/])->f_3 == 0)
		{
			Local_21.f_8++;
		}
		else if (PLAYER::PLAYER_ID() == &Local_21.f_51[Local_21.f_8 /*4*/])
		{
			(Local_21.f_51[Local_21.f_8 /*4*/])->f_1 = Global_35;
			(Local_21.f_51[Local_21.f_8 /*4*/])->f_2 = PED::IS_PED_MALE(Global_35);
			Local_21.f_8++;
			return false;
		}
		else
		{
			iVar0 = PLAYER::GET_PLAYER_PED(&(Local_21.f_51[Local_21.f_8 /*4*/]));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_21.f_8++;
				return false;
			}
			(Local_21.f_51[Local_21.f_8 /*4*/])->f_1 = PED::CLONE_PED(iVar0, 0f, true, true);
			if (ENTITY::DOES_ENTITY_EXIST((Local_21.f_51[Local_21.f_8 /*4*/])->f_1))
			{
				ENTITY::SET_ENTITY_VISIBLE((Local_21.f_51[Local_21.f_8 /*4*/])->f_1, false);
				ENTITY::SET_ENTITY_COLLISION((Local_21.f_51[Local_21.f_8 /*4*/])->f_1, false, false);
				(Local_21.f_51[Local_21.f_8 /*4*/])->f_2 = PED::IS_PED_MALE(iVar0);
				Local_21.f_8++;
				return false;
			}
		}
	}
	return Local_21.f_8 >= Local_21.f_9;
}

void func_37()
{
	switch (Local_21.f_2)
	{
		case 0:
		case 1:
			Local_21.f_82 = func_88(func_87(Local_21.f_1, 2, 0), 0, 0);
			Local_21.f_83 = func_88(func_87(Local_21.f_1, 3, 0), 0, 0);
			break;
		default:
			Local_21.f_82 = func_88(func_87(Local_21.f_1, 0, 1), 0, 0);
			Local_21.f_83 = func_88(func_87(Local_21.f_1, 1, 1), 0, 0);
			break;
	}
}

void func_38()
{
	int iVar0;

	if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
	{
		FIRE::STOP_ENTITY_FIRE(Global_35, 0);
	}
	iVar0 = PED::_0x693126B5D0457D0D(Global_35);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 1, 1);
	}
	if (PED::_0x3AA24CCC0D451379(Global_35) || PED::_0xD453BB601D4A606E(Global_35))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
	}
}

void func_39()
{
	int iVar0;
	float fVar1;

	if (!ANIMSCENE::_0x25557E324489393C(Local_21.f_6))
	{
		aggregate.fme_animal_tagging.func_176(34);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || aggregate.annesburg.func_180(255))
	{
		return;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_6, 0) && !aggregate.fme_animal_tagging.func_134(1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_21.f_6, func_131(), func_132(), 2);
		ANIMSCENE::SET_ANIM_SCENE_INT(Local_21.f_6, "CameraIndex", func_133(), false);
		if (aggregate.fme_animal_tagging.func_134(8) && ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			if (PED::IS_PED_MALE(Global_35))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "MP_MALE_01", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "MP_FEMALE_01", Global_35, 0);
			}
		}
		if (Local_21.f_2 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_82))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "p_doorsgl01x_FRONT", Local_21.f_82, 0);
			}
		}
		else if (Local_21.f_2 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_83))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "p_doorsgl01x_SIDE", Local_21.f_83, 0);
			}
		}
		if (!aggregate.fme_animal_tagging.func_134(8))
		{
			iVar0 = 0;
			while (iVar0 <= (Local_21.f_9 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST((Local_21.f_51[iVar0 /*4*/])->f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE((Local_21.f_51[iVar0 /*4*/])->f_1, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, func_134(iVar0, (Local_21.f_51[iVar0 /*4*/])->f_2), (Local_21.f_51[iVar0 /*4*/])->f_1, 0);
				}
				iVar0++;
			}
		}
		ANIMSCENE::START_ANIM_SCENE(Local_21.f_6);
		aggregate.fme_animal_tagging.func_174(1);
		aggregate.fme_animal_tagging.func_174(16);
		aggregate.fme_animal_tagging.func_174(8);
		aggregate.fme_animal_tagging.func_212(1);
		return;
	}
	fVar1 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_21.f_6);
	if (fVar1 > 0.9f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			func_136(1);
		}
	}
	else if (fVar1 > 0.85f)
	{
		if (!aggregate.fme_animal_tagging.func_134(4096))
		{
			aggregate.fme_animal_tagging.func_174(4096);
			func_53(0, 1, 0);
		}
	}
	switch (Local_21.f_4)
	{
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			aggregate.fme_animal_tagging.func_212(2);
			break;
		case 2:
			if (!ANIMSCENE::_0x25557E324489393C(Local_21.f_6) || !ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_6, 0))
			{
			}
			else
			{
				CAM::DO_SCREEN_FADE_IN(250);
				aggregate.fme_animal_tagging.func_212(3);
				Jump @636; //curOff = 556
				if (CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					Local_21.f_11 = MISC::_GET_SYSTEM_TIME();
					aggregate.fme_animal_tagging.func_212(4);
				}
				Jump @636; //curOff = 584
				if (STREAMING::_0x0909F71B5C070797() || (MISC::_GET_SYSTEM_TIME() - Local_21.f_11) > Global_1901929->f_742.f_11)
				{
					CAM::DO_SCREEN_FADE_IN(250);
					aggregate.fme_animal_tagging.func_212(5);
				}
			}
			default:
				break;
	}
}

bool func_40()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1275329->f_119.f_3)
	{
		return true;
	}
	iVar0 = Local_21.f_84;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		Local_21.f_3 = 1;
		return true;
	}
	if (iVar0 == PLAYER::PLAYER_ID() && _NAMESPACE26::_0x901E0DC25080C8B9(iVar0) != Global_1273882->f_15)
	{
		return true;
	}
	if ((iVar0 != PLAYER::PLAYER_ID() && _NAMESPACE26::_0x901E0DC25080C8B9(iVar0) != Global_1273882->f_15) && (Global_1275117->f_1 == 2 || Global_1275117->f_1 == 1))
	{
		Local_21.f_3 = 3;
		return true;
	}
	iVar1 = aggregate.medium_update.func_397(Global_1275117->f_200, 1);
	if (Local_21.f_1 != iVar1)
	{
		Local_21.f_3 = 2;
		return true;
	}
	iVar2 = 0;
	while (iVar2 <= 12)
	{
		if ((((*Global_1212887)[iVar2 /*27*/])->f_13 == Global_1273882->f_15 && ((*Global_1223462)[iVar2 /*686*/])->f_565 == -1784925006) && aggregate.medium_update.func_306(iVar2, 32, 255))
		{
			Local_21.f_3 = 5;
			return true;
		}
		iVar2++;
	}
	if (aggregate.net_camp.func_1773())
	{
		Local_21.f_3 = 4;
		return true;
	}
	return false;
}

void func_41()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Local_21.f_51[iVar0 /*4*/])->f_1) && (Local_21.f_51[iVar0 /*4*/])->f_1 != Global_35)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_21.f_6, func_134(iVar0, 1), (Local_21.f_51[iVar0 /*4*/])->f_1);
			PED::DELETE_PED(&((Local_21.f_51[iVar0 /*4*/])->f_1));
		}
		iVar0++;
	}
	Local_21.f_82 = 0;
	Local_21.f_83 = 0;
	if (ANIMSCENE::_0x25557E324489393C(Local_21.f_6))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_21.f_6);
	}
	if (aggregate.fme_animal_tagging.func_134(1024))
	{
		if (STREAMING::_0xCF45DF50C7775F2A())
		{
			STREAMING::_0x5A8B01199C3E79C3();
		}
		aggregate.fme_animal_tagging.func_174(1024);
	}
	Local_21.f_11 = 0;
	aggregate.fme_animal_tagging.func_174(1);
	Local_21.f_6 = 0;
}

void func_42(bool bParam0)
{
	if (!bParam0 && aggregate.fme_animal_tagging.func_134(16384))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), bParam0);
		aggregate.fme_animal_tagging.func_174(16384);
	}
	else
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), bParam0);
		aggregate.fme_animal_tagging.func_174(16384);
	}
}

void func_43()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		aggregate.fm_deathmatch_controller.func_536(func_87(Local_21.f_1, iVar0, 0), 0f, 1);
		iVar0++;
	}
}

bool func_45()
{
	if (Global_1275329->f_29.f_2 != Local_21.f_1)
	{
		return false;
	}
	if (Global_1275329->f_29.f_3 != 2)
	{
		return false;
	}
	return true;
}

bool func_46()
{
	int iVar0;
	var uVar1;
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (Local_21.f_80 == 0)
	{
		if (aggregate.fishing_core.func_277())
		{
			aggregate.binoculars.func_17(1);
			return false;
		}
		else
		{
			iVar0 = _NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID());
			if (_NAMESPACE26::_0xD6F6ACF4392187FB(iVar0))
			{
				if (_NAMESPACE26::_0xCE88A261DCBBA0D9(iVar0, &uVar1))
				{
					iVar8 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uVar1);
					if (PED::_0xA911EE21EDF69DAF(Global_35))
					{
						Local_21.f_80 = aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(10, "MS_WARN_MEMBER_JOIN_CARRY", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iVar8), aggregate.fme_animal_tagging.func_487(iVar8, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
					else
					{
						Local_21.f_80 = aggregate.net_main_offline.func_312(MISC::_CREATE_VAR_STRING(10, "MS_WARN_MEMBER_JOIN", aggregate.fme_animal_tagging.func_488(PLAYER::GET_PLAYER_NAME(iVar8), aggregate.fme_animal_tagging.func_487(iVar8, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
				}
			}
		}
	}
	if (Local_21.f_10 == 0)
	{
		Local_21.f_10 = MISC::GET_GAME_TIMER();
	}
	else if ((MISC::GET_GAME_TIMER() - Local_21.f_10) >= 11000)
	{
		return true;
	}
	return false;
}

void func_47()
{
	int iVar0;

	iVar0 = Global_1275117->f_200;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		Local_21.f_2 = 2;
		return;
	}
	Local_21.f_2 = ((*Global_1275475)[iVar0 /*86*/])->f_5.f_13;
}

void func_48()
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
	{
		Local_21.f_2 = 2;
	}
	else
	{
		Local_21.f_2 = 3;
	}
}

bool func_49()
{
	int iVar0;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
		if (!func_144(Global_35))
		{
			if (func_145(iVar0))
			{
				ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
			}
			else
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, 0f, 0f, 0f, 1073741824 /* Float: 2f */, 9);
			}
		}
		return false;
	}
	return true;
}

bool func_50()
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		fVar0 = BUILTIN::VDIST(Global_36, aggregate.net_fetch.func_1607(Local_21.f_1));
		if (fVar0 < 200f)
		{
			return true;
		}
	}
	return false;
}

void func_51()
{
	int iVar0;

	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		iVar0 = PED::_0xD806CD2A4F2C2996(Global_35);
		if (func_145(iVar0))
		{
			ENTITY::_0x0D0DB2B6AF19A987(&iVar0);
		}
	}
}

bool func_52(bool bParam0)
{
	if ((aggregate.annesburg.func_180(255) || !ENTITY::DOES_ENTITY_EXIST(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (Local_21.f_2 == -1)
	{
		func_147(*(Local_21.f_12[2 /*3*/]), &(Local_21.f_28[2]));
	}
	else
	{
		func_147(*(Local_21.f_12[Local_21.f_2 /*3*/]), &(Local_21.f_28[Local_21.f_2]));
	}
	if (bParam0)
	{
		aggregate.fme_animal_tagging.func_63(1);
		aggregate.fm_deathmatch_controller.func_47(1);
	}
	aggregate.fm_deathmatch_controller.func_1050(1);
	aggregate.annesburg.func_182(137);
	aggregate.annesburg.func_112(1, 1);
	return true;
}

void func_53(bool bParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!bParam0)
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
		}
		if (!bParam2)
		{
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 7, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 8, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 9, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 10, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 16, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 17, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 18, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 19, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 20, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 21, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 22, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 23, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 25, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 27, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 1, bParam0);
		}
		if (!bParam1)
		{
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 2, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 3, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 4, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 5, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 6, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 11, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 12, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 13, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 24, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 14, bParam0);
			WEAPON::_0x67E21ACC5C0C970C(Global_35, 15, bParam0);
		}
	}
}

bool func_54()
{
	if ((aggregate.annesburg.func_180(255) || !ENTITY::DOES_ENTITY_EXIST(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	return true;
}

bool func_55()
{
	if (aggregate.annesburg.func_180(255))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!aggregate.fme_animal_tagging.func_134(512))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Global_35))
		{
			ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
		}
		func_53(0, 0, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, 0);
		aggregate.net_fetch.func_5132(1, 1);
		aggregate.fme_animal_tagging.func_174(512);
		return true;
	}
	return false;
}

bool func_56()
{
	if (aggregate.annesburg.func_180(255))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (aggregate.fme_animal_tagging.func_134(512))
	{
		func_53(0, 0, 1);
		aggregate.fme_supply_train.func_914(1, 2);
		aggregate.net_fetch.func_5132(1, 0);
		aggregate.fme_animal_tagging.func_174(512);
	}
	return true;
}

void func_59()
{
	float fVar0;

	if (!ANIMSCENE::_0x25557E324489393C(Local_21.f_6))
	{
		aggregate.fme_animal_tagging.func_176(34);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || aggregate.annesburg.func_180(255))
	{
		return;
	}
	if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_21.f_6, 0) && !aggregate.fme_animal_tagging.func_134(1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_21.f_6, func_131(), func_132(), 2);
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			if (PED::IS_PED_MALE(Global_35))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "MP_MALE_01", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "MP_FEMALE_01", Global_35, 0);
			}
		}
		if (Local_21.f_2 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_82))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "p_doorsgl01x_FRONT", Local_21.f_82, 0);
			}
		}
		else if (Local_21.f_2 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_21.f_83))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_21.f_6, "p_doorsgl01x_SIDE", Local_21.f_83, 0);
			}
		}
		if (TASK::_0xEC7E480FF8BD0BED(Global_35))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		}
		TASK::_0xFDECCA06E8B81346(Global_35);
		ANIMSCENE::START_ANIM_SCENE(Local_21.f_6);
		aggregate.fme_animal_tagging.func_174(1);
		aggregate.fme_animal_tagging.func_174(32);
		return;
	}
	fVar0 = ANIMSCENE::_0x3FBC3F51BF12DFBF(Local_21.f_6);
	if (fVar0 > 0.9f)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			func_136(0);
		}
	}
	else if (fVar0 > 0.85f)
	{
		if (!aggregate.fme_animal_tagging.func_134(2048))
		{
			func_53(1, 1, 0);
			aggregate.fme_animal_tagging.func_174(2048);
		}
	}
}

bool func_60()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	var uVar5;

	if ((aggregate.annesburg.func_180(255) || !ENTITY::DOES_ENTITY_EXIST(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	vVar0 = { aggregate.net_fast_travel_barker.func_163(Local_21.f_1, 0) };
	fVar3 = aggregate.net_fast_travel_barker.func_164(Local_21.f_1, 0);
	fVar4 = Global_1901929->f_742.f_8;
	uVar5 = Global_1901929->f_742.f_9;
	aggregate.fm_deathmatch_controller.func_1050(1);
	aggregate.annesburg.func_182(137);
	aggregate.fm_mission_controller.func_192(vVar0, fVar3, uVar5, fVar4, 1, 1, 1);
	return true;
}

bool func_61()
{
	char* sVar0;

	if ((aggregate.annesburg.func_180(255) || !ENTITY::DOES_ENTITY_EXIST(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	switch (Local_21.f_3)
	{
		case 1:
			sVar0 = "MS_WARN_FORCE_OUT_INVALID";
			break;
		case 2:
			sVar0 = "MS_WARN_FORCE_OUT_MOVED";
			break;
		case 3:
			sVar0 = "MS_WARN_FORCE_OUT_DISBANDED";
			break;
	}
	Local_21.f_81 = aggregate.net_main_offline.func_312(sVar0, 10000, 0, 0, 0, 1);
	return true;
}

void func_66()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (VOLUME::_0x92A78D0BEDB332A3((Local_21.f_34[iVar0 /*4*/])->f_2))
		{
			VOLUME::_0x43F867EF5C463A53((Local_21.f_34[iVar0 /*4*/])->f_2);
		}
		if (aggregate.annesburg.func_217(&(Local_21.f_34[iVar0 /*4*/])))
		{
			aggregate.annesburg.func_218(Local_21.f_34[iVar0 /*4*/], 1, 1);
		}
		if (aggregate.annesburg.func_217((Local_21.f_34[iVar0 /*4*/])->f_1))
		{
			aggregate.annesburg.func_218(&((Local_21.f_34[iVar0 /*4*/])->f_1), 1, 1);
		}
		iVar0++;
	}
}

void func_67()
{
	Local_21.f_2 = -1;
	Local_21.f_5 = 0;
	Local_21.f_11 = 0;
	Local_21.f_6 = 0;
	Local_21.f_8 = 0;
	Local_21.f_9 = 0;
	Local_21.f_10 = 0;
	Local_21.f_80 = 0;
	Local_21.f_4 = 0;
}

void func_70(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	if (iParam0->f_2 != 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_2))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_2);
		}
	}
	iParam0->f_1 = 0;
	iParam0->f_3 = 0;
}

bool func_77()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar2 = PED::_0xD806CD2A4F2C2996(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	return PED::IS_PED_A_PLAYER(iVar1);
}

bool func_80(int iParam0)
{
	return aggregate.annesburg.func_142(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), &(Local_21.f_89[func_166(iParam0)]), 1, 0);
}

int func_87(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!bParam2)
	{
		iVar0 = Global_1275329->f_66[iParam0 /*6*/][iParam1];
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						iVar0 = -873861472;
						break;
					case 1:
						iVar0 = 559525171;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						iVar0 = -1636862794;
						break;
					case 1:
						iVar0 = -368946392;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						iVar0 = 1954418654;
						break;
					case 1:
						iVar0 = -1030789470;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						iVar0 = 423023646;
						break;
					case 1:
						iVar0 = 155563751;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
			case 4:
				switch (iParam1)
				{
					case 0:
						iVar0 = -561680145;
						break;
					case 1:
						iVar0 = -7860519;
						break;
					case 2:
						iVar0 = -86501425;
						break;
					case 3:
						iVar0 = 359873526;
						break;
				}
				break;
		}
	}
	return iVar0;
}

int func_88(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = aggregate.net_fetch.func_1217(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

void func_89()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		*(Local_21.f_12[iVar0 /*3*/]) = { aggregate.net_fast_travel_barker.func_163(Local_21.f_1, iVar0) };
		Local_21.f_28[iVar0] = aggregate.net_fast_travel_barker.func_164(Local_21.f_1, iVar0);
		iVar0++;
	}
}

void func_90()
{
	struct<4> Var0;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	int iVar21;
	char cVar22[64];

	if (Global_1274951->f_165)
	{
		aggregate.fme_animal_tagging.func_212(2);
	}
	Var0 = (Global_1070355->f_26934[49 /*4*/])->f_3;
	Var0.f_2 = -2002424295;
	Var0.f_3 = aggregate.medium_update.func_398(Local_21.f_1);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return;
	}
	uVar6 = Var0.f_1;
	iVar8 = 0;
	while (iVar8 <= 1)
	{
		Var0.f_1 = uVar6;
		iVar5 = func_171(iVar8);
		StringCopy(&cVar22, "volume#", 64);
		StringIntConCat(&cVar22, iVar8, 64);
		Var0.f_2 = -1627797674;
		Var0.f_3 = iVar5;
		if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
		{
			return;
		}
		uVar7 = Var0.f_1;
		Var0.f_2 = -85904298;
		iVar10 = DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
		Local_21.f_89[iVar8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(&cVar22);
		iVar9 = 0;
		while (iVar9 <= (iVar10 - 1))
		{
			Var0.f_1 = uVar7;
			Var0.f_2 = -204010186;
			Var0.f_3 = iVar9;
			if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
			{
			}
			else
			{
				Var0.f_2 = 701345319;
				DATAFILE::_DATAFILE_GET_HASH(&uVar11, &Var0);
				iVar21 = uVar11;
				Var0.f_2 = -1084365561;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar12, &Var0);
				Var0.f_2 = 2021743591;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar15, &Var0);
				Var0.f_2 = -600021699;
				DATAFILE::_DATAFILE_GET_VECTOR(&vVar18, &Var0);
				VOLUME::_0x12FCAA23F2320422(&(Local_21.f_89[iVar8]), iVar21, vVar12, vVar15, vVar18);
			}
			iVar9++;
		}
		iVar8++;
	}
}

bool func_91(int iParam0, var uParam1, var uParam2)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;

	Var0 = Global_1275329->f_1;
	Var0.f_2 = -709674112;
	Var0.f_3 = aggregate.medium_update.func_398(iParam0);
	if (!DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		return false;
	}
	iVar15 = 0;
	while (iVar15 < 4)
	{
		Var5 = { Var0 };
		Var5.f_2 = -1480766764;
		Var5.f_3 = iVar15;
		if (!DATAFILE::_DATAFILE_GET_VECTOR((*uParam1)[Var5.f_3 /*3*/], &Var5))
		{
			return false;
		}
		Var10 = { Var0 };
		Var10.f_2 = 983475634;
		Var10.f_3 = iVar15;
		if (!DATAFILE::_DATAFILE_GET_VECTOR((*uParam2)[Var10.f_3 /*3*/], &Var10))
		{
			return false;
		}
		iVar15++;
	}
	return true;
}

char* func_93(int iParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = "Null";
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "MOONSHINE_ENTER_POSSE";
			}
			else
			{
				sVar0 = "MOONSHINE_ENTER_SOLO";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "MOONSHINE_ENTER_POSSE";
			}
			else
			{
				sVar0 = "MOONSHINE_ENTER_SOLO";
			}
			break;
		case 2:
			sVar0 = "MOONSHINE_EXIT_SOLO";
			break;
		case 3:
			sVar0 = "MOONSHINE_EXIT_SOLO";
			break;
	}
	return sVar0;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 0;
		case 3:
			return 1;
		default:
			break;
	}
	return 4;
}

void func_118(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return;
	}
	((*Global_1275475)[&Global_1273882 /*86*/])->f_5.f_13 = iParam0;
}

void func_119()
{
	struct<20> Var0;

	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0.f_4 = 5;
	func_191(&Var0);
}

char* func_127()
{
	char* sVar0;

	switch (Local_21.f_2)
	{
		case 0:
		case 1:
			sVar0 = "script@mp@Moonshiner@Moonshine_Property@exit";
			break;
		case 2:
		case 3:
			sVar0 = "script@mp@moonshiner@moonshine_property@enter";
			break;
		case 4:
			break;
	}
	return sVar0;
}

int func_128()
{
	int iVar0;

	switch (Local_21.f_2)
	{
		case 0:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			break;
	}
	return iVar0;
}

char* func_129(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	sVar0 = "";
	switch (Local_21.f_2)
	{
		case 0:
		case 1:
			bVar1 = aggregate.coffee_drinking.func_8();
			bVar2 = aggregate.coffee_drinking.func_10();
			switch (iParam0)
			{
				case 3:
					if (bVar1)
					{
						sVar0 = "s_FRONT_VERY_DRUNK";
					}
					else if (bVar2)
					{
						sVar0 = "s_FRONT_MODERATELY_DRUNK";
					}
					else
					{
						sVar0 = "s_FRONT";
					}
					break;
				case 4:
					if (bVar1)
					{
						sVar0 = "s_SIDE_VERY_DRUNK";
					}
					else if (bVar2)
					{
						sVar0 = "s_SIDE_MODERATELY_DRUNK";
					}
					else
					{
						sVar0 = "s_SIDE";
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 1:
					sVar0 = "s_FRONT";
					break;
				case 2:
					sVar0 = "s_SIDE";
					break;
			}
			break;
		case 4:
			break;
	}
	return sVar0;
}

Vector3 func_131()
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;

	bVar3 = (Local_21.f_2 == 2 || Local_21.f_2 == 3);
	bVar4 = Local_21.f_2 == 3;
	switch (Local_21.f_1)
	{
		case 0:
			if (bVar3)
			{
				vVar0 = { 1788.727f, -816.8044f, 45.1f };
			}
			else
			{
				vVar0 = { 1789.577f, -812.6493f, 191.5339f };
			}
			break;
		case 1:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -1090.531f, 711.1215f, 106.522f };
				}
				else
				{
					vVar0 = { -1090.531f, 711.1215f, 106.722f };
				}
			}
			else
			{
				vVar0 = { -1092.746f, 707.5026f, 83.1687f };
			}
			break;
		case 2:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -2774.968f, -3046.855f, 13.6003f };
				}
				else
				{
					vVar0 = { -2774.968f, -3046.855f, 13.8003f };
				}
			}
			else
			{
				vVar0 = { -2779.185f, -3047.399f, -9.7658f };
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { 1629.138f, 828.3974f, 147.2225f };
				}
				else
				{
					vVar0 = { 1629.138f, 828.3974f, 147.4225f };
				}
			}
			else
			{
				vVar0 = { 1628.259f, 832.5888f, 123.8766f };
			}
			break;
		case 4:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -1863.969f, -1727.859f, 111.5559f };
				}
				else
				{
					vVar0 = { -1863.969f, -1727.859f, 111.7559f };
				}
			}
			else
			{
				vVar0 = { -1863.601f, -1732.077f, 88.1898f };
			}
			break;
	}
	return vVar0;
}

Vector3 func_132()
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = (Local_21.f_2 == 2 || Local_21.f_2 == 3);
	switch (Local_21.f_1)
	{
		case 0:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -136.62f };
			}
			else
			{
				vVar1 = { 0f, 0f, -176.6f };
			}
			break;
		case 1:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, 23.421f };
			}
			else
			{
				vVar1 = { 0f, 0f, -16.5f };
			}
			break;
		case 2:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -27.83f };
			}
			else
			{
				vVar1 = { 0f, 0f, -67.7f };
			}
			break;
		case 3:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -113.27f };
			}
			else
			{
				vVar1 = { 0f, 0f, -153.2f };
			}
			break;
		case 4:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, 60.01f };
			}
			else
			{
				vVar1 = { 0f, 0f, 20f };
			}
			break;
	}
	return vVar1;
}

int func_133()
{
	int iVar0;

	switch (Local_21.f_1)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 5;
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

char* func_134(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "MP_Male_01";
			}
			else
			{
				sVar0 = "MP_Female_01";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "MP_Male_02";
			}
			else
			{
				sVar0 = "MP_Female_02";
			}
			break;
		case 2:
			if (bParam1)
			{
				sVar0 = "MP_Male_03";
			}
			else
			{
				sVar0 = "MP_Female_03";
			}
			break;
		case 3:
			if (bParam1)
			{
				sVar0 = "MP_Male_04";
			}
			else
			{
				sVar0 = "MP_Female_04";
			}
			break;
		case 4:
			if (bParam1)
			{
				sVar0 = "MP_Male_05";
			}
			else
			{
				sVar0 = "MP_Female_05";
			}
			break;
		case 5:
			if (bParam1)
			{
				sVar0 = "MP_Male_06";
			}
			else
			{
				sVar0 = "MP_Female_06";
			}
			break;
		case 6:
			if (bParam1)
			{
				sVar0 = "MP_Male_07";
			}
			else
			{
				sVar0 = "MP_Female_07";
			}
			break;
	}
	return sVar0;
}

void func_136(bool bParam0)
{
	if (bParam0)
	{
		if (!aggregate.fme_animal_tagging.func_134(2))
		{
			ENTITY::SET_ENTITY_COORDS(Global_35, *(Local_21.f_12[Local_21.f_2 /*3*/]), true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Global_35, &(Local_21.f_28[Local_21.f_2]));
			aggregate.fme_escaped_convicts.func_913(0, 0);
			aggregate.fme_animal_tagging.func_174(2);
		}
	}
	else if (!aggregate.fme_animal_tagging.func_134(4))
	{
		ENTITY::SET_ENTITY_COORDS(Global_35, *(Local_21.f_12[Local_21.f_2 /*3*/]), true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_35, &(Local_21.f_28[Local_21.f_2]));
		aggregate.fme_escaped_convicts.func_913(0, 0);
		aggregate.fme_animal_tagging.func_174(4);
	}
}

bool func_144(int iParam0)
{
	return aggregate.interactive_campfire.func_227(iParam0, -1);
}

bool func_145(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_HUMAN(iVar0))
		{
			return false;
		}
	}
	return true;
}

int func_147(vector3 vParam0, var uParam3)
{
	if (aggregate.annesburg.func_121(vParam0))
	{
		return 0;
	}
	if (aggregate.annesburg.func_181(255) == 4)
	{
		return 0;
	}
	if (aggregate.annesburg.func_232(4, 255))
	{
	}
	aggregate.annesburg.func_182(4);
	aggregate.annesburg.func_186(&(Global_1099293->f_546));
	Global_1099293->f_546.f_6 = { vParam0 };
	Global_1099293->f_546 = uParam3;
	Global_1099293->f_546.f_5 = 1;
	Global_1099293->f_26.f_18 = 0;
	Global_1099293->f_26.f_19 = 0;
	aggregate.annesburg.func_188(Global_1099293->f_546, 36);
	return 1;
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 532942402:
			return 0;
		case 1661805647:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 532942402;
		case 1:
			return 1661805647;
		default:
			break;
	}
	return 0;
}

void func_191(var uParam0)
{
	var uVar0;

	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uVar0 = aggregate.dynamic_craft_scenario.func_194(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 15, &uVar0);
}

