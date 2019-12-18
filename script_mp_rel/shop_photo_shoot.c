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
	struct<27> Local_21 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_48 = 4;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	int iLocal_58 = 0;
	struct<342> Local_59 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -39308912, 1, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1816535547, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	struct<75> Local_401 = { 0, 0, 0, -1, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7 } ;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	struct<10> Local_483[7];
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_58 = 675980447;
	if (Global_1051387->f_4537)
	{
		func_1(iScriptParam_0);
	}
	func_2();
	while (!aggregate_func_523(0, 0) && func_4())
	{
		BUILTIN::WAIT(0);
	}
	func_5();
	aggregate_func_2819();
}

void func_1(int iParam0)
{
	aggregate_func_1994(7, iParam0);
	aggregate_func_306();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_401, 82, 47);
	aggregate_func_4288(NETWORK::_0xBA24095EA96DFE17(&Local_401), 82, "m_PHST_HostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_483, 71, 48);
	aggregate_func_4288(NETWORK::_0x690806BC83BC8CA2(Local_483[0 /*10*/]), 71, "m_PHST_PlayerData");
	aggregate_func_453(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

int func_2()
{
	func_12();
	func_13();
	func_14();
	func_15();
	func_16();
	func_17();
	func_18();
	return 1;
}

bool func_4()
{
	switch (Local_59.f_58)
	{
		case 0:
			if (func_19())
			{
				Local_59.f_58 = 1;
			}
			break;
		case 1:
			if (!func_20())
			{
				return false;
			}
			if (Global_1051387->f_4537)
			{
				func_21();
			}
			break;
	}
	return true;
}

void func_5()
{
	if (Global_1051387->f_4537.f_3)
	{
		Global_1051387->f_4537.f_3 = 0;
		if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !aggregate_func_4337(0))
		{
			CAM::DO_SCREEN_FADE_IN(1000);
		}
	}
	func_23();
}

int func_12()
{
	if (!func_26(18))
	{
		return 0;
	}
	if (!func_27(18) || func_28(18))
	{
		return 0;
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[18]), 1084942842, "SHOP_TYPE/BACKGROUNDS/BACKGROUND(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[18]), 350029031, "SHOP_TYPE/POSES/POSE(id=%x)");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[18]), 843957109, "PROPS");
	DATAFILE::_DATAFILE_REGISTER_QUERY(&(Global_1915170->f_19847[18]), 290941431, "PROPS/PROP(%i)");
	aggregate_func_4241(Global_1915170->f_19887[18], 16);
	return 1;
}

void func_13()
{
	Global_1051387->f_4537.f_7 = 0;
	Local_59.f_30 = 0;
	Local_59.f_56 = 0;
	Local_59.f_31 = 0;
	Local_59.f_111 = 0;
	Local_59.f_113 = 0;
	Local_59.f_117 = 0;
	Local_59.f_74 = "CameraViewfinderStudio";
	Local_59.f_75 = "CameraViewfinderForceOutro";
	Local_59.f_76 = "CameraTakePictureStudio";
	Local_59.f_79 = 0;
	Local_59.f_77 = "FACE_HUMAN@GEN_MALE@PORTRAIT";
	Local_59.f_78 = "facials@gen_male@portrait";
	Local_59.f_66 = 0f;
	Local_21.f_23 = 0;
	switch ((Global_1051387->f_69[18 /*76*/])->f_18)
	{
		case 12:
			Local_59.f_14 = { -811.0848f, -1374.732f, 43.0233f };
			Local_59.f_17 = 86.2824f;
			Local_59.f_22 = { -813.9198f, -1375.396f, 43.216f };
			Local_59.f_25 = 304.6703f;
			Local_59.f_18 = { -811.0161f, -1373.142f, 43.0233f };
			Local_59.f_21 = 82.6367f;
			if (Global_1051387->f_4537)
			{
				Local_21.f_26 = 12;
				Local_59 = { -808.9622f, -1374.784f, 34.2373f };
				Local_59.f_3 = { 2.5419f, 0f, 89.4133f };
				Local_59.f_9 = 29.8f;
				Local_59.f_26 = { -816.0643f, -1374.725f, 34.93691f };
				Local_59.f_118 = { -816.0643f, -1374.725f, 34.93691f };
				Local_59.f_121 = { 0f, 0f, 0f };
				Local_59.f_88 = -1633870518;
				Local_59.f_112 = VOLUME::_CREATE_VOLUME_BOX(-813.74f, -1374.56f, 35.02f, 0f, 0f, 0f, 5f, 5f, 3f);
				Local_59.f_10 = { -814.8005f, -1374.676f, 33.2272f };
				Local_59.f_13 = 274.5823f;
			}
			else
			{
				Local_21.f_26 = 2;
				Local_59 = { -812.2573f, -1374.602f, 44.3923f };
				Local_59.f_3 = { 2.464f, 0f, 92.7079f };
				Local_59.f_9 = 34.7f;
				Local_59.f_26 = { -817.1328f, -1375.047f, 44.5194f };
				Local_59.f_88 = 1076045342;
				Local_59.f_10 = { -814.8005f, -1374.676f, 43.2272f };
				Local_59.f_13 = 274.5823f;
			}
			break;
		case 60:
			Local_59.f_14 = { 2732.675f, -1117.746f, 48.1073f };
			Local_59.f_17 = 227.78f;
			Local_59.f_22 = { 2734.343f, -1119.988f, 48.1337f };
			Local_59.f_25 = 47.9115f;
			Local_59.f_18 = { 2734.672f, -1117.845f, 48.1059f };
			Local_59.f_21 = 300f;
			if (Global_1051387->f_4537)
			{
				Local_21.f_26 = 11;
				Local_59 = { 2731.593f, -1115.825f, 39.3665f };
				Local_59.f_3 = { 1.0968f, 0f, -153.3803f };
				Local_59.f_9 = 31.1492f;
				Local_59.f_26 = { 2734.613f, -1121.733f, 39.8153f };
				Local_59.f_88 = -1983826837;
				Local_59.f_118 = { 2734.613f, -1121.733f, 39.8153f };
				Local_59.f_121 = { 0f, 0f, 117f };
				Local_59.f_112 = VOLUME::_CREATE_VOLUME_BOX(2734.43f, -1119.7f, 40.13f, 0f, 0f, 0f, 5f, 5f, 3f);
				Local_59.f_10 = { 2734.1f, -1120.6f, 38.134f };
				Local_59.f_13 = 23.8f;
			}
			else
			{
				Local_21.f_26 = 1;
				Local_59 = { 2733.209f, -1118.628f, 49.521f };
				Local_59.f_3 = { -1.9048f, 0f, -155.1498f };
				Local_59.f_9 = 34.7f;
				Local_59.f_26 = { 2734.884f, -1122.124f, 49.597f };
				Local_59.f_88 = 1751872362;
				Local_59.f_10 = { 2734.1f, -1120.6f, 48.134f };
				Local_59.f_13 = 23.8f;
			}
			break;
	}
	func_30();
	if (Global_1051387->f_4537)
	{
		Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 0;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 = 0;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_1 = 0;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3 = -1;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4 = 0;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 0;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_2 = 0;
	}
	GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionWipe_L");
	GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionWipe_R");
}

void func_14()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<10> Var3;
	struct<14> Var17;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	Var17 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, -424477160, 0, 0) };
	if (aggregate_func_2836(&Var17, &iVar0, &bVar1, 0))
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 < bVar1)
		{
			if (aggregate_func_2840(&Var3, bVar2, iVar0, bVar1))
			{
				if (Local_59.f_193 >= 20)
				{
					aggregate_func_2837(iVar0);
					return;
				}
				Local_59.f_130[Local_59.f_193] = Var3.f_4;
				Local_59.f_193++;
			}
			bVar2++;
		}
	}
	aggregate_func_2837(iVar0);
}

void func_15()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<10> Var3;
	struct<14> Var17;

	iVar0 = -1;
	Var3.f_9 = -1591664384;
	Var17 = { aggregate_func_4303(0, -1591664384, -1591664384, -1591664384, 1160200607, 0, 0) };
	if (aggregate_func_2836(&Var17, &iVar0, &bVar1, 0))
	{
		bVar2 = false;
		bVar2 = false;
		while (bVar2 < bVar1)
		{
			if (aggregate_func_2840(&Var3, bVar2, iVar0, bVar1))
			{
				if (Local_59.f_204 >= 6)
				{
					aggregate_func_2837(iVar0);
					return;
				}
				Local_59.f_197[Local_59.f_204] = Var3.f_4;
				Local_59.f_204++;
			}
			bVar2++;
		}
	}
	aggregate_func_2837(iVar0);
}

int func_16()
{
	struct<4> Var0;
	struct<4> Var5;
	int iVar10;
	var uVar11;

	Var0 = &Global_1915170->f_19847[18];
	Var5 = &Global_1915170->f_19847[18];
	iVar10 = 0;
	while (iVar10 < Local_59.f_193)
	{
		Var0.f_2 = 1084942842;
		Var0.f_3 = &Local_59.f_130[iVar10];
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var5.f_1), &Var0))
		{
			Var5.f_2 = -1407851228;
			if (Global_1051387->f_4537)
			{
				Var5.f_3 = 715395819;
			}
			else
			{
				Var5.f_3 = -302053561;
			}
			DATAFILE::_DATAFILE_GET_HASH(&uVar11, &Var5);
			Local_59.f_151[iVar10] = uVar11;
			Var5.f_3 = -120316632;
			DATAFILE::_DATAFILE_GET_HASH(&uVar11, &Var5);
			Local_59.f_172[iVar10] = uVar11;
		}
		else
		{
			Local_59.f_151[iVar10] = 0;
		}
		iVar10++;
	}
	return 1;
}

void func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!Global_1051387->f_4537)
	{
		return;
	}
	iVar0 = 0;
	iVar2 = 2147483647;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (iVar1 == NETWORK::PARTICIPANT_ID() || (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && Local_483[iVar0 /*10*/]) // PointerArith)
		{
			if (iVar1 != NETWORK::PARTICIPANT_ID())
			{
				if ((Local_483[iVar0 /*10*/])->f_1 < iVar2)
				{
					iVar2 = (Local_483[iVar0 /*10*/])->f_1;
					iVar3 = iVar1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 < 2147483647)
	{
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5 = (Local_483[iVar3 /*10*/])->f_5;
		(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 = (Local_483[iVar3 /*10*/])->f_8;
		iVar4 = 0;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < Local_59.f_193)
		{
			if (&Local_59.f_151[iVar5] == (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5)
			{
				Local_59.f_127 = iVar5;
				iVar4 = 0;
				while (iVar4 < 4)
				{
					if (aggregate_func_2852(&(Local_59.f_130[iVar5]), func_35(Local_59.f_128)))
					{
						Jump @293; //curOff = 255
					}
					else
					{
						Local_59.f_128++;
						if (Local_59.f_128 >= 4)
						{
							Local_59.f_128 = 0;
						}
					}
					iVar4++;
				}
			}
			else
			{
				iVar5++;
			}
		}
		iVar5 = 0;
		while (iVar5 < Local_59.f_204)
		{
			if (&Local_59.f_197[iVar5] == (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8)
			{
				Local_59.f_208 = iVar5;
			}
			else
			{
				iVar5++;
			}
		}
	}
	GRAPHICS::SET_TIMECYCLE_MODIFIER("MP_photo_posse");
}

void func_18()
{
	if ((Global_1051387->f_69[18 /*76*/])->f_18 == 12)
	{
		ENTITY::REMOVE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, -899803912, 0);
		ENTITY::REMOVE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, 1866258194, 0);
		ENTITY::REMOVE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, joaat("p_chair12bx"), 0);
	}
	else if ((Global_1051387->f_69[18 /*76*/])->f_18 == 60)
	{
		ENTITY::REMOVE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, joaat("p_chairdining02x"), 0);
		ENTITY::REMOVE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, -1392495588, 0);
		ENTITY::REMOVE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, 1333110032, 0);
	}
}

bool func_19()
{
	if ((!AUDIO::_0xD9130842D7226045("RDRO_Photo_Shop_Sounds", 0) || GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionWipe_L")) || GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionWipe_R"))
	{
		return false;
	}
	return true;
}

bool func_20()
{
	func_37();
	func_38();
	if (Global_1051387->f_4537.f_7 != 14 && Global_1051387->f_4537.f_7 != 15)
	{
		if (Global_1051387->f_4537.f_3)
		{
			func_39(14);
		}
		else
		{
			func_40();
		}
	}
	if (Global_1051387->f_4537)
	{
		aggregate_func_1925();
	}
	switch (Global_1051387->f_4537.f_7)
	{
		case 0:
			CAM::DO_SCREEN_FADE_OUT(500);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, 0);
			func_42();
			STREAMING::REQUEST_MODEL(Local_59.f_94, false);
			if (!STREAMING::HAS_MODEL_LOADED(Local_59.f_94))
			{
				return true;
			}
			func_39(1);
			break;
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			else
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				if (!func_43())
				{
					return true;
				}
				if (!func_44())
				{
					return true;
				}
				if (!func_45())
				{
					return true;
				}
				if (!func_46())
				{
					return true;
				}
				func_47();
				if (Global_1051387->f_4537 && !Local_59.f_196)
				{
				}
				else if (!func_48(1))
				{
				}
				else
				{
					FIRE::_0x754937C28271BC65(Local_59.f_65);
					FIRE::STOP_FIRE_IN_RANGE(Local_59.f_26, 5f);
					func_49();
					func_50();
					func_51();
					func_52(1);
					func_53(Local_59.f_29);
					func_54();
					func_39(4);
					Jump @879; //curOff = 405
					if (Local_59.f_61 == 1)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_R");
					}
					else
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_L");
					}
					aggregate_func_4293(&(Local_59.f_338), 0);
					func_39(3);
					Jump @879; //curOff = 450
					if (aggregate_func_1526(&(Local_59.f_338)) < 250)
					{
					}
					else
					{
						CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
						if (!func_48(0))
						{
						}
						else
						{
							if (Local_59.f_61 == 1)
							{
								GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_R");
							}
							else
							{
								GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_L");
							}
							aggregate_func_4313(&(Local_59.f_338));
							func_39(4);
							Jump @879; //curOff = 527
							func_58();
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (PED::GET_PED_CONFIG_FLAG(func_59(), 408, true))
								{
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_59(), 0, 1);
								}
								CAM::DO_SCREEN_FADE_IN(500);
							}
							if (!CAM::IS_SCREEN_FADED_IN())
							{
							}
							else if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_L") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_R"))
							{
							}
							else
							{
								func_60();
								func_39(5);
								Jump @879; //curOff = 621
								func_58();
								func_61();
								Jump @879; //curOff = 632
								func_58();
								func_61();
								if (!PED::GET_PED_CONFIG_FLAG(func_59(), 408, true))
								{
									func_60();
									func_39(5);
								}
								Jump @879; //curOff = 668
								func_58();
								func_61();
								if (!PED::GET_PED_CONFIG_FLAG(func_59(), 408, true))
								{
									func_60();
									func_39(5);
								}
								Jump @879; //curOff = 704
								func_58();
								if (!func_62(700))
								{
								}
								else
								{
									func_39(2);
									Jump @879; //curOff = 730
									func_58();
									func_63();
									func_39(10);
									Jump @879; //curOff = 747
									func_58();
									if (!func_62(1000))
									{
									}
									else
									{
										func_39(4);
										Jump @879; //curOff = 773
										func_58();
										if (func_64())
										{
											func_39(4);
										}
										Jump @879; //curOff = 792
										func_58();
										if (func_65())
										{
											func_39(4);
										}
										Jump @879; //curOff = 811
										func_58();
										func_66(1);
										func_67();
										func_39(10);
										Jump @879; //curOff = 833
										func_58();
										if (!CAM::IS_SCREEN_FADING_OUT())
										{
											CAM::DO_SCREEN_FADE_OUT(1000);
										}
										if (CAM::IS_SCREEN_FADED_OUT())
										{
											func_39(15);
										}
										Jump @879; //curOff = 868
										func_23();
										return false;
									}
								}
							}
						}
					}
				}
			}
			return true;
			default:
				break;
	}
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	struct<4> Var17;
	int iVar21;
	bool bVar22;
	int iVar23;
	bool bVar24;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_401)
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(7);
			Local_401 = true;
		}
		iVar3 = -1;
		iVar8 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_1 > 0) && !&Local_483[iVar0 /*10*/])
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2);
				iVar8 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar7);
				iVar9 = (Local_483[iVar0 /*10*/])->f_1;
			}
			else
			{
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
			if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_483[iVar0 /*10*/]) // PointerArith)
			{
				if (iVar8 != 0 && (Local_483[iVar0 /*10*/])->f_1 >= iVar9)
				{
					iVar8 = 0;
				}
			}
			iVar0++;
		}
		Local_401.f_1 = iVar8;
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_36[iVar1])))
			{
				func_68(iVar1);
				if (iVar3 < 0)
				{
					iVar3 = iVar1;
				}
			}
			else
			{
				bVar5 = false;
				iVar0 = 0;
				while (iVar0 < 7)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
					if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_483[iVar0 /*10*/]) // PointerArith)
					{
						iVar10 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
						if (&Local_401.f_20[iVar1] == iVar10)
						{
							bVar6 = false;
							if (&Local_401.f_28[iVar1] != iVar10)
							{
								if ((Local_483[iVar0 /*10*/])->f_3 == iVar1)
								{
									Local_401.f_28[iVar1] = iVar10;
								}
								else
								{
									bVar6 = true;
								}
							}
							if (!bVar6)
							{
								if (&Local_401.f_66[iVar1] != (Local_483[iVar0 /*10*/])->f_2 && (Local_483[iVar0 /*10*/])->f_2 != 0)
								{
									Local_401.f_66[iVar1] = (Local_483[iVar0 /*10*/])->f_2;
								}
								bVar5 = true;
							}
							else
							{
								Jump @492; //curOff = 437
								if (&Local_401.f_28[iVar1] == iVar10)
								{
									bVar5 = true;
								}
								else if (MISC::IS_BIT_SET((Local_483[iVar0 /*10*/])->f_4, iVar1))
								{
									Local_401.f_28[iVar1] = iVar10;
									bVar5 = true;
								}
								iVar0++;
							}
							if (!bVar5)
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar1])))
								{
									if (!aggregate_func_4260(Local_401.f_44[iVar1 /*3*/]))
									{
										aggregate_func_4293(Local_401.f_44[iVar1 /*3*/], 0);
									}
									if (aggregate_func_1526(Local_401.f_44[iVar1 /*3*/]) > 5000)
									{
										iVar4 = NETWORK::NET_TO_PED(&(Local_401.f_36[iVar1]));
										PED::DELETE_PED(&iVar4);
										func_68(iVar1);
										if (iVar3 < 0)
										{
											iVar3 = iVar1;
										}
									}
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar1]));
								}
							}
							else if (aggregate_func_4260(Local_401.f_44[iVar1 /*3*/]))
							{
								aggregate_func_4313(Local_401.f_44[iVar1 /*3*/]);
							}
							iVar1++;
							iVar0 = 0;
							while (iVar0 < 7)
							{
								iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
								bVar13 = false;
								if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_483[iVar0 /*10*/]) // PointerArith && (Local_483[iVar0 /*10*/])->f_3 < 0)
								{
									iVar10 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
									iVar1 = 0;
									while (iVar1 < 7)
									{
										if (&Local_401.f_20[iVar1] == iVar10)
										{
											bVar13 = true;
											if (!&Local_401.f_74[iVar1])
											{
												if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar1])))
												{
													if (PED::_0xA0BC8FAED8CFEB3C(NETWORK::NET_TO_PED(&(Local_401.f_36[iVar1]))))
													{
														PED::_0x59BD177A1A48600A(NETWORK::NET_TO_PED(&(Local_401.f_36[iVar1])), 1);
														Local_401.f_74[iVar1] = 1;
													}
												}
												else
												{
													NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar1]));
												}
											}
										}
										else
										{
											iVar1++;
										}
									}
									if (!bVar13)
									{
										if (iVar3 > -1)
										{
											if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
											{
												iVar14 = PED::CLONE_PED(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), 1.401298E-45f, true, true);
												PED::_0xD710A5007C2AC539(iVar14, -1229581779, 1);
												PED::_0xCC8CA3E88256E58F(iVar14, 0, 1, 1, 1, false);
												NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar14, true);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar14, true);
												ENTITY::_0x0918E3565C20F03C(iVar14, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), true, false), ENTITY::GET_ENTITY_HEADING(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2))), false, 1);
												ENTITY::FREEZE_ENTITY_POSITION(iVar14, true);
												ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar14, false, false);
												ENTITY::SET_ENTITY_VISIBLE(iVar14, false);
												func_70(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), iVar14);
												Local_401.f_20[iVar3] = iVar10;
												Local_401.f_28[iVar3] = iVar10;
												Local_401.f_36[iVar3] = NETWORK::PED_TO_NET(iVar14);
											}
										}
										else
										{
											iVar15 = 0;
											iVar1 = 0;
											while (iVar1 < 7)
											{
												if (&Local_401.f_20[iVar1] != &Local_401.f_28[iVar1])
												{
													iVar15 = iVar1;
												}
												else
												{
													iVar1++;
												}
											}
											if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar15])))
											{
												iVar4 = NETWORK::NET_TO_PED(&(Local_401.f_36[iVar15]));
												PED::DELETE_PED(&iVar4);
												func_68(iVar15);
											}
											else
											{
												NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar15]));
											}
										}
									}
									else
									{
										iVar0++;
									}
									iVar11 = -1;
									bVar16 = false;
									bVar24 = true;
									iVar0 = 0;
									while (iVar0 < 7)
									{
										iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
										if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_3 > -1) && (Local_483[iVar0 /*10*/])->f_9 == 1)
										{
											iVar23 = (Local_483[iVar0 /*10*/])->f_3;
											iVar11 = -1;
											if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[iVar23])))
											{
												iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[iVar23]));
											}
											if (ANIMSCENE::_0x25557E324489393C(iVar11) && !ANIMSCENE::GET_ANIM_SCENE_BOOL(iVar11, "BREAKLOOP"))
											{
												if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar11))
												{
													NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar11);
												}
												else
												{
													ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar11, "BREAKLOOP", true, false);
													iVar1 = 0;
													while (iVar1 < 7)
													{
														if (MISC::IS_BIT_SET((Local_483[iVar0 /*10*/])->f_4, iVar1))
														{
															iVar11 = -1;
															if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[iVar1])))
															{
																iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[iVar1]));
															}
															if (ANIMSCENE::_0x25557E324489393C(iVar11) && !ANIMSCENE::GET_ANIM_SCENE_BOOL(iVar11, "BREAKLOOP"))
															{
																if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar11))
																{
																	NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar11);
																}
																else
																{
																	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar11, "BREAKLOOP", true, false);
																}
															}
														}
														iVar1++;
													}
													if (bVar24)
													{
														if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_9 != 4) && (Local_483[iVar0 /*10*/])->f_9 != 0)
														{
															bVar24 = false;
														}
													}
												}
												iVar0++;
												if (bVar24)
												{
													iVar0 = 0;
													while (iVar0 < 7)
													{
														if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[iVar0])))
														{
															iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[iVar0]));
															if (ANIMSCENE::_0x25557E324489393C(iVar11) && !ANIMSCENE::_0xCBFC7725DE6CE2E0(iVar11, 0))
															{
																if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar11))
																{
																	NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar11);
																}
																else
																{
																	ANIMSCENE::START_ANIM_SCENE(iVar11);
																}
															}
														}
														iVar0++;
													}
												}
												switch (Local_401.f_2)
												{
													case 0:
														iVar0 = 0;
														while (iVar0 < 7)
														{
															iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
															if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_9 == 3)
															{
																iVar23 = (Local_483[iVar0 /*10*/])->f_3;
																iVar11 = -1;
																if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[iVar23])))
																{
																	iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[iVar23]));
																}
																if (ANIMSCENE::_0x25557E324489393C(iVar11))
																{
																	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar11))
																	{
																		NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar11);
																	}
																	else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar23])))
																	{
																		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar23]));
																	}
																	else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_12[iVar23])) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_12[iVar23])))
																	{
																		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_12[iVar23]));
																	}
																	else
																	{
																		ANIMSCENE::_DELETE_ANIM_SCENE(iVar11);
																		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_12[iVar23])))
																		{
																			iVar12 = NETWORK::NET_TO_OBJ(&(Local_401.f_12[iVar23]));
																			OBJECT::DELETE_OBJECT(&iVar12);
																			Local_401.f_12[iVar23] = 0;
																		}
																		TASK::CLEAR_PED_TASKS_IMMEDIATELY(NETWORK::NET_TO_PED(&(Local_401.f_36[iVar23])), 0, 1);
																		aggregate_func_30(NETWORK::NET_TO_PED(&(Local_401.f_36[iVar23])), Local_59.f_10, Local_59.f_13, 2, 1073741824 /* Float: 2f */);
																		PED::_0x2208438012482A1A(NETWORK::NET_TO_PED(&(Local_401.f_36[iVar23])), false, false);
																		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_59.f_209 != (Local_483[iVar0 /*10*/])->f_8)
																		{
																			Local_59.f_209 = (Local_483[iVar0 /*10*/])->f_8;
																			if (Local_59.f_209 != 0 && !func_72())
																			{
																			}
																			else
																			{
																				Local_401.f_3 = iVar23;
																				if (Local_59.f_209 == 0 || MISC::IS_STRING_NULL_OR_EMPTY(&(Local_59.f_210)))
																				{
																					aggregate_func_4714(3);
																				}
																				else
																				{
																					iVar11 = ANIMSCENE::_CREATE_ANIM_SCENE(&(Local_59.f_210), 32768, 0, true, true);
																					Local_401.f_4[iVar23] = NETWORK::_0xE0D73CDDEA79DDCD(iVar11);
																					aggregate_func_4714(1);
																				}
																			}
																			else
																			{
																				iVar0++;
																			}
																			Jump @2958; //curOff = 2149
																			iVar11 = -1;
																			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[Local_401.f_3])))
																			{
																				iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[Local_401.f_3]));
																			}
																			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[Local_401.f_3])))
																			{
																				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[Local_401.f_3]));
																			}
																			else if (!ANIMSCENE::_0x477122B8D05E7968(iVar11, 1, 0))
																			{
																				ANIMSCENE::LOAD_ANIM_SCENE(iVar11);
																			}
																			else if (!ANIMSCENE::_0x95531A4A20CCE7BC(iVar11, 0))
																			{
																			}
																			else
																			{
																				iVar0 = 0;
																				while (iVar0 < 7)
																				{
																					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
																					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_3 == Local_401.f_3)
																					{
																						bVar16 = true;
																						Var17 = { func_74(iVar0) };
																						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar11, &Var17, NETWORK::NET_TO_PED(&(Local_401.f_36[Local_401.f_3])), 0);
																						WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(&(Local_401.f_36[Local_401.f_3])), true, true);
																						func_70(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), NETWORK::NET_TO_PED(&(Local_401.f_36[Local_401.f_3])));
																						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(&(Local_401.f_36[Local_401.f_3])), true);
																					}
																					else
																					{
																						iVar0++;
																					}
																				}
																				if (bVar16)
																				{
																					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar11, Local_59.f_118, Local_59.f_121, 2);
																					aggregate_func_4714(2);
																				}
																				else
																				{
																					Local_401.f_3 = -1;
																					aggregate_func_4714(0);
																				}
																			}
																			Jump @2958; //curOff = 2479
																			iVar0 = 0;
																			while (iVar0 < 7)
																			{
																				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
																				if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_3 == Local_401.f_3) && (Local_483[iVar0 /*10*/])->f_2 > 0)
																				{
																					bVar16 = true;
																					iVar21 = ((Local_483[iVar0 /*10*/])->f_2 - 1);
																					bVar22 = PED::IS_PED_MALE(NETWORK::NET_TO_PED(&(Local_401.f_36[(Local_483[iVar0 /*10*/])->f_3])));
																					if ((Local_59.f_218[iVar21 /*17*/])->f_16 == 0)
																					{
																						aggregate_func_4714(3);
																					}
																					else
																					{
																						STREAMING::REQUEST_MODEL((Local_59.f_218[iVar21 /*17*/])->f_16, false);
																						if (STREAMING::HAS_MODEL_LOADED((Local_59.f_218[iVar21 /*17*/])->f_16))
																						{
																							iVar11 = -1;
																							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[Local_401.f_3])))
																							{
																								iVar11 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[Local_401.f_3]));
																							}
																							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[Local_401.f_3])))
																							{
																								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[Local_401.f_3]));
																							}
																							else
																							{
																								iVar12 = OBJECT::CREATE_OBJECT((Local_59.f_218[iVar21 /*17*/])->f_16, Local_59.f_118, true, true, false, false, true);
																								NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar12, true);
																								if (bVar22)
																								{
																									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar11, Local_59.f_218[iVar21 /*17*/], iVar12, 0);
																								}
																								else
																								{
																									ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar11, &((Local_59.f_218[iVar21 /*17*/])->f_8), iVar12, 0);
																								}
																								Local_401.f_12[Local_401.f_3] = NETWORK::OBJ_TO_NET(iVar12);
																								aggregate_func_4714(3);
																							}
																						}
																					}
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			if (!bVar16)
																			{
																				Local_401.f_3 = -1;
																				aggregate_func_4714(0);
																			}
																			Jump @2958; //curOff = 2850
																			iVar0 = 0;
																			while (iVar0 < 7)
																			{
																				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
																				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_483[iVar0 /*10*/])->f_3 == Local_401.f_3)
																				{
																					bVar16 = true;
																					if ((Local_483[iVar0 /*10*/])->f_9 != 3)
																					{
																						Local_401.f_3 = -1;
																						aggregate_func_4714(0);
																					}
																				}
																				else
																				{
																					iVar0++;
																				}
																			}
																			if (!bVar16)
																			{
																				Local_401.f_3 = -1;
																				aggregate_func_4714(0);
																			}
																			iVar0 = 0;
																			while (iVar0 < 7)
																			{
																				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[iVar0])))
																				{
																					if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_4[iVar0])))
																					{
																						NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_4[iVar0]));
																					}
																					else
																					{
																						NETWORK::_0x7182EDDA1EE7DB5A(&(Local_401.f_4[iVar0]));
																					}
																				}
																				iVar0++;
																			}
																		}
																	}
																}
															}
														}
														default:
															break;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_23()
{
	int iVar0;

	if (Local_59.f_79)
	{
		return;
	}
	if (CAM::DOES_CAM_EXIST(Local_59.f_52))
	{
		CAM::DESTROY_CAM(Local_59.f_52, false);
	}
	if (aggregate_func_402(Local_59.f_50, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_59.f_50, false);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_59.f_50, 0, 1);
		PED::_0x2208438012482A1A(Global_35, false, false);
	}
	if (aggregate_func_402(Global_35, 0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_35, true, false);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, Local_59.f_22, Local_59.f_25, true, false, true);
		ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
		TASK::TASK_CLEAR_LOOK_AT(Global_35);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, 0, 1);
		PED::_0x2208438012482A1A(Global_35, false, false);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_59.f_94);
	ENTITY::SET_ENTITY_VISIBLE(Local_59.f_65, true);
	ENTITY::_0xD2B9C78537ED5759(Local_59.f_64);
	Local_59.f_64 = 0;
	Local_59.f_65 = 0;
	func_76();
	func_18();
	func_52(0);
	func_77();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		(Local_59.f_95[iVar0 /*2*/])->f_1 = 0;
		Local_59.f_95[iVar0 /*2*/] = 0;
		iVar0++;
	}
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
	STREAMING::REMOVE_CLIP_SET(Local_59.f_78);
	STREAMING::REMOVE_ANIM_DICT(Local_59.f_77);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_R"))
	{
		GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_R");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_L"))
	{
		GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_L");
	}
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinderStudio");
	GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinderForceOutro");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTakePictureStudio");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionWipe_L");
	GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionWipe_R");
	AUDIO::_0x531A78D6BF27014B("RDRO_Photo_Shop_Sounds");
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, 0);
	aggregate_func_668(0, 1, 1, 0);
	if (VOLUME::_DOES_VOLUME_EXIST(Local_59.f_112))
	{
		VOLUME::_DELETE_VOLUME(Local_59.f_112);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_115))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(Local_59.f_115));
		OBJECT::DELETE_OBJECT(&(Local_59.f_115));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_116))
	{
		OBJECT::DELETE_OBJECT(&(Local_59.f_116));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_129))
	{
		OBJECT::DELETE_OBJECT(&(Local_59.f_129));
	}
	if (ANIMSCENE::_0x25557E324489393C(Local_59.f_194))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_59.f_194);
	}
	if (Global_1051387->f_4537)
	{
		if (aggregate_func_3575(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 0;
			(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 = 0;
			(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_1 = 0;
		}
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	Local_59.f_79 = 1;
}

bool func_26(int iParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(&(Global_1915170->f_19847[iParam0])))
	{
		if (DATAFILE::_0x603AC35FD4602C76(&(Global_1915170->f_19847[iParam0])))
		{
			if (!aggregate_func_4240(&(Global_1915170->f_19887[iParam0]), 2))
			{
				aggregate_func_4241(Global_1915170->f_19887[iParam0], 2);
			}
			return true;
		}
	}
	return false;
}

bool func_27(int iParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(&(Global_1915170->f_19847[iParam0])))
	{
		return aggregate_func_4240(&(Global_1915170->f_19887[iParam0]), 4);
	}
	return false;
}

bool func_28(int iParam0)
{
	if (DATAFILE::_0x7907969497EA92F5(&(Global_1915170->f_19847[iParam0])))
	{
		return aggregate_func_4240(&(Global_1915170->f_19887[iParam0]), 16);
	}
	return false;
}

void func_30()
{
	Local_59.f_67[0] = "portrait_normal";
	Local_59.f_67[1] = "portrait_happy";
	Local_59.f_67[2] = "portrait_pensive";
	Local_59.f_67[3] = "portrait_relaxed";
	Local_59.f_67[4] = "portrait_angry";
	Local_59.f_67[5] = "portrait_annoyed";
	Local_59.f_29 = 0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1822204474;
		case 1:
			return -2119261942;
		case 2:
			return -970760213;
		case 3:
			return 919627684;
		default:
			break;
	}
	return 0;
}

void func_37()
{
	int iVar0;
	struct<8> Var1;
	int iVar20;
	int iVar21;
	int iVar22;
	char cVar23[32];
	int iVar27;
	int iVar28;
	char cVar29[16];
	char cVar31[16];
	int iVar33;

	if (Local_21.f_1 == 1)
	{
		func_85();
	}
	if (Local_21.f_23 == 0 && Local_21.f_1 == 0)
	{
		if (Local_21.f_2)
		{
			if ((MISC::GET_GAME_TIMER() - Local_21.f_21) > 2500)
			{
				iVar0 = GRAPHICS::_0x78C56B8A7B1D000C();
				if (Local_21.f_6 && Local_21.f_7 != iVar0)
				{
					Local_21.f_6 = 0;
				}
				Local_21.f_7 = iVar0;
				func_86();
				Local_21.f_21 = MISC::GET_GAME_TIMER();
			}
		}
	}
	switch (Local_21.f_23)
	{
		case 1:
			if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_STICKY_FEED_CANCEL")))
			{
				_NAMESPACE76::_0x00A15B94CBA4F76F(Local_21.f_19);
				Local_21.f_19 = 0;
				Local_21.f_6 = 1;
				aggregate_func_4714(2);
			}
			break;
		case 0:
			if (func_88(1))
			{
				Local_21.f_25 = 0;
				if (Local_21 || Local_21.f_6)
				{
					aggregate_func_4714(2);
				}
				else if (Local_21.f_7 == Local_21.f_8)
				{
					if (Local_21.f_19 == 0)
					{
						Var1.f_2 = 0;
						Var1.f_7 = MISC::GET_HASH_KEY("IB_BACK");
						Var1.f_7.f_3 = 0;
						Local_21.f_19 = aggregate_func_3122(&Var1, "ERROR_GAL_FULH", "ERROR_GAL_FULT", 0, 0, 1);
						aggregate_func_4714(1);
					}
					else
					{
						Local_21.f_6 = 1;
						aggregate_func_4714(2);
					}
				}
				else
				{
					aggregate_func_4714(2);
				}
			}
			if (func_88(4))
			{
				GRAPHICS::_0x614682E715ADBAAC();
				GRAPHICS::_0x494A9874F17A7D50(1);
				aggregate_func_4714(7);
			}
			break;
		case 2:
			Local_21.f_5 = 0;
			aggregate_func_4714(3);
			Local_21.f_20 = MISC::GET_GAME_TIMER();
			break;
		case 3:
			if ((MISC::GET_GAME_TIMER() - Local_21.f_20) > 0)
			{
				Local_21.f_20 = MISC::GET_GAME_TIMER();
				if (Local_21 || Local_21.f_6)
				{
					aggregate_func_4714(4);
				}
				else
				{
					GRAPHICS::_0xD45547D8396F002A();
					GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO();
					Local_21.f_7++;
					aggregate_func_4714(5);
				}
			}
			break;
		case 5:
			Local_21.f_24 = GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
			if (Local_21.f_24 == 1)
			{
			}
			if (Local_21.f_24 == 0)
			{
				Local_21.f_25 = 1;
				GRAPHICS::_0x2705D18C11B61046(0);
				GRAPHICS::_0x8E6AFF353C09652E(Local_21.f_26);
				if ((Local_21.f_26 == 12 || Local_21.f_26 == 11) || Local_21.f_26 == 13)
				{
					POSSE::_0xC08AFF658B2E51DA(&iVar20);
					if (iVar20 != 0)
					{
						GRAPHICS::_0x564837D4A9EDE296(iVar20);
					}
					if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar21);
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								GRAPHICS::_0x75D568607909333E(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22));
							}
							iVar21++;
						}
					}
				}
				StringCopy(&cVar23, "", 32);
				iVar27 = aggregate_func_4314();
				if (aggregate_func_4301(iVar27))
				{
					MemCopy(&cVar23, {aggregate_func_9674(iVar27)}, 4);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar23))
				{
					iVar28 = aggregate_func_3771();
					StringCopy(&cVar23, func_94(iVar28), 32);
				}
				GRAPHICS::_0xD1031B83AC093BC7(&cVar23);
				StringCopy(&cVar29, "", 16);
				StringCopy(&cVar31, "", 16);
				iVar33 = aggregate_func_4371();
				if (aggregate_func_4326(iVar33))
				{
					StringCopy(&cVar29, aggregate_func_9675(iVar33), 16);
					StringCopy(&cVar31, aggregate_func_9676(iVar33), 16);
				}
				GRAPHICS::_0x9937FACBBF267244(&cVar29);
				GRAPHICS::_0x8952E857696B8A79(&cVar31);
				GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(0);
				Local_21.f_3 = 0;
				aggregate_func_4714(6);
			}
			else if (Local_21.f_24 == 2)
			{
				aggregate_func_4714(4);
			}
			break;
		case 6:
			if (Local_21.f_3 == 0)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				Local_21.f_3 = 1;
			}
			Local_21.f_24 = GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
			if (Local_21.f_24 == 0)
			{
				Local_21.f_5 = 1;
				func_99(1);
				aggregate_func_4714(0);
				if (AUDIO::_0x4AD019591E94C064("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", -2))
				{
					AUDIO::_0x6FB1DA3CA9DA7D90("Wind_On_Film", Global_35, "CAMERA_SOUNDSET", 0, 0, 0);
				}
			}
			else if (Local_21.f_24 == 2)
			{
				Local_21.f_5 = 1;
				func_99(1);
				aggregate_func_4714(0);
			}
			break;
		case 4:
			if ((MISC::GET_GAME_TIMER() - Local_21.f_20) > 300)
			{
				SCRIPTS::SET_NO_LOADING_SCREEN(false);
				func_99(1);
				aggregate_func_4714(0);
			}
			break;
		case 7:
			Local_21.f_24 = GRAPHICS::_0x13430D3D5A45F14B(1);
			if (Local_21.f_24 == 0)
			{
				GRAPHICS::_0xF1142E5D64B47802(true, false);
				func_66(8);
				func_99(4);
				aggregate_func_4714(0);
			}
			else if (Local_21.f_24 == 2)
			{
				func_99(4);
				aggregate_func_4714(0);
			}
			break;
	}
}

void func_38()
{
	var uVar0;

	if (Local_59.f_341 != -1 && !aggregate_func_5107(Local_59.f_341))
	{
		TELEMETRY::_0xF184B3ECE36219CF(Local_59.f_341, &uVar0);
		if (Global_1051387->f_4537)
		{
			TELEMETRY::_0xED22BE4C5A399E63(&uVar0, aggregate_func_5341(), (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8, Global_1051387->f_4537.f_4);
		}
		else
		{
			TELEMETRY::_0xED22BE4C5A399E63(&uVar0, aggregate_func_5341(), 0, 1);
		}
		Local_59.f_341 = -1;
	}
}

void func_39(int iParam0)
{
	Global_1051387->f_4537.f_7 = iParam0;
}

void func_40()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (!Global_1051387->f_4537)
	{
		return;
	}
	iVar3 = 0;
	if (!&Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])
	{
		if (Local_401.f_1 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
		{
			Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/] = 1;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (&Local_401.f_20[iVar0] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) && &Local_401.f_66[iVar0] != 0)
				{
					bVar5 = true;
					Jump @243; //curOff = 110
				}
				else if (&Local_401.f_20[iVar0] != 0)
				{
					bVar6 = false;
					iVar1 = 0;
					while (iVar1 < 7)
					{
						iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar1);
						if (((iVar2 != NETWORK::PARTICIPANT_ID() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)) && Local_483[iVar1 /*10*/]) // PointerArith && &Local_401.f_20[iVar0] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)))
						{
							bVar6 = true;
						}
						else
						{
							iVar1++;
						}
					}
					if (!bVar6)
					{
						iVar4++;
					}
				}
				iVar0++;
			}
			if (!bVar5)
			{
				iVar0 = 0;
				while (iVar0 < 7)
				{
					iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
					if (((iVar2 != NETWORK::PARTICIPANT_ID() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)) && Local_483[iVar0 /*10*/]) // PointerArith)
					{
						iVar7++;
					}
					iVar0++;
				}
				if ((iVar4 + iVar7) >= 7)
				{
					func_39(14);
					return;
				}
				Local_59.f_114 = (iVar4 + iVar7) + 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
				if (((iVar2 != NETWORK::PARTICIPANT_ID() && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2)) && Local_483[iVar0 /*10*/]) // PointerArith)
				{
					if ((Local_483[iVar0 /*10*/])->f_1 > iVar3)
					{
						iVar3 = (Local_483[iVar0 /*10*/])->f_1;
					}
				}
				iVar0++;
			}
			(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_1 = iVar3 + 1;
			return;
		}
	}
	Global_1051387->f_4537.f_4 = 0;
	Global_1051387->f_4537.f_1 = 0;
	Global_1051387->f_4537.f_2 = 0;
	iVar8 = -1;
	iVar13 = 2147483647;
	if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3 < 0)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if ((&Local_401.f_20[iVar1] == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) && Local_401.f_74[iVar1]) // PointerArith)
			{
				(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3 = iVar1;
			}
			else
			{
				iVar1++;
			}
		}
	}
	Local_59.f_113 = 0;
	if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3 > -1 && (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 != 3)
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3])))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3]));
		}
		else
		{
			Local_59.f_113 = 1;
			NETWORK::_0x7182EDDA1EE7DB5A(&(Local_401.f_36[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3]));
		}
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		bVar9 = false;
		if (iVar2 == NETWORK::PARTICIPANT_ID() || (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && Local_483[iVar0 /*10*/]) // PointerArith)
		{
			MISC::SET_BIT(&iVar11, iVar0);
			Global_1051387->f_4537.f_4++;
			func_102(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
			if ((Local_483[iVar0 /*10*/])->f_1 < iVar13)
			{
				iVar13 = (Local_483[iVar0 /*10*/])->f_1;
				iVar10 = iVar0;
			}
		}
		iVar0++;
	}
	Local_59.f_111 = iVar10 == NETWORK::PARTICIPANT_ID_TO_INT();
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if ((Local_59.f_95[iVar1 /*2*/])->f_1 != 0)
		{
			bVar9 = false;
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2) && (Local_59.f_95[iVar1 /*2*/])->f_1 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)))
				{
					if (MISC::IS_BIT_SET(iVar11, iVar0))
					{
						bVar9 = true;
						MISC::SET_BIT(&iVar12, iVar0);
					}
					iVar8 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
			if (!bVar9)
			{
				if (Local_59.f_111)
				{
					iVar0 = 0;
					while (iVar0 < 7)
					{
						if ((Local_59.f_95[iVar1 /*2*/])->f_1 == &Local_401.f_20[iVar0] || (Local_59.f_95[iVar1 /*2*/])->f_1 == &Local_401.f_28[iVar0])
						{
							MISC::SET_BIT(&((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4), iVar0);
						}
						iVar0++;
					}
				}
				(Local_59.f_95[iVar1 /*2*/])->f_1 = 0;
				Local_59.f_95[iVar1 /*2*/] = 0;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (MISC::IS_BIT_SET(iVar11, iVar0) && !MISC::IS_BIT_SET(iVar12, iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 7)
			{
				if ((Local_59.f_95[iVar1 /*2*/])->f_1 == 0)
				{
					iVar8 = iVar1;
				}
				else
				{
					iVar1++;
				}
			}
			(Local_59.f_95[iVar8 /*2*/])->f_1 = NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
			Local_59.f_95[iVar8 /*2*/] = (Local_483[iVar0 /*10*/])->f_1;
			Global_1051387->f_4537.f_4++;
			func_102(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
			if (iVar2 != NETWORK::PARTICIPANT_ID())
			{
				iVar1 = 0;
				while (iVar1 < 7)
				{
					if (MISC::IS_BIT_SET((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4, iVar1))
					{
						if (&Local_401.f_20[iVar1] == (Local_59.f_95[iVar8 /*2*/])->f_1)
						{
							MISC::CLEAR_BIT(&((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4), iVar1);
						}
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	func_103(iVar10);
}

void func_42()
{
	STREAMING::REQUEST_ANIM_DICT(Local_59.f_77);
	STREAMING::REQUEST_CLIP_SET(Local_59.f_78);
}

bool func_43()
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_59.f_77))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(Local_59.f_78))
	{
		return false;
	}
	return true;
}

bool func_44()
{
	func_104(18, &(Local_59.f_50));
	if (!aggregate_func_402(Local_59.f_50, 0))
	{
		return false;
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_59.f_50, Local_59.f_14, Local_59.f_17, true, false, true);
	TASK::TASK_STAND_STILL(Local_59.f_50, -1);
	return true;
}

bool func_45()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_115))
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_65))
	{
		iVar0 = func_105();
		STREAMING::REQUEST_MODEL(iVar0, false);
		if (Global_1051387->f_4537)
		{
			STREAMING::REQUEST_MODEL(1546100104, false);
		}
		if (STREAMING::HAS_MODEL_LOADED(iVar0) && (!Global_1051387->f_4537 || STREAMING::HAS_MODEL_LOADED(1546100104)))
		{
			if (Global_1051387->f_4537)
			{
				Local_59.f_26 = { ENTITY::GET_ENTITY_COORDS(Local_59.f_65, true, false) + func_106(0.1f, 0f, -1.5f, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2)) };
			}
			else
			{
				Local_59.f_26 = { ENTITY::GET_ENTITY_COORDS(Local_59.f_65, true, false) + func_106(0.1f, 0f, -1.25f, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2)) };
			}
			Local_59.f_115 = OBJECT::CREATE_OBJECT(iVar0, Local_59.f_26, false, true, false, false, true);
			ENTITY::FREEZE_ENTITY_POSITION(Local_59.f_115, true);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_59.f_115, false, false);
			ENTITY::SET_ENTITY_ROTATION(Local_59.f_115, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2), 2, true);
			if (Global_1051387->f_4537)
			{
				Local_59.f_129 = OBJECT::CREATE_OBJECT(1546100104, ENTITY::GET_ENTITY_COORDS(Local_59.f_65, true, false) + func_106(0.1f, 0f, -1.72f, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2)), false, true, false, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_59.f_129, true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_59.f_129, false, false);
				ENTITY::SET_ENTITY_ROTATION(Local_59.f_129, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2), 2, true);
			}
			ENTITY::SET_ENTITY_VISIBLE(Local_59.f_65, false);
			return true;
		}
		return false;
	}
	if (Local_59.f_64 == 0)
	{
		Local_59.f_64 = ENTITY::_0x6F3068258A499E52(Local_59.f_88, Local_59.f_26, 7);
	}
	else if (ENTITY::_0x1FF441D7954F8709(Local_59.f_64))
	{
		Local_59.f_65 = ENTITY::_0x4735E2A4BB83D9DA(Local_59.f_64);
	}
	return false;
}

bool func_46()
{
	if (!Global_1051387->f_4537)
	{
		return true;
	}
	if (!ANIMSCENE::_0x25557E324489393C(Local_59.f_194))
	{
		Local_59.f_194 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig_mp@photo@photo_studio", 2, 0, false, true);
	}
	else if (!ANIMSCENE::_0x477122B8D05E7968(Local_59.f_194, 1, 0))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_59.f_194);
	}
	else if (!ANIMSCENE::_0x95531A4A20CCE7BC(Local_59.f_194, 0))
	{
	}
	else
	{
		if (!ANIMSCENE::_0xCBFC7725DE6CE2E0(Local_59.f_194, 0))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_59.f_194, Local_59.f_26, ENTITY::GET_ENTITY_ROTATION(Local_59.f_65, 2), 2);
			ANIMSCENE::START_ANIM_SCENE(Local_59.f_194);
		}
		return true;
	}
	return false;
}

void func_47()
{
	if (!Global_1051387->f_4537 || Local_59.f_196)
	{
		return;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_59.f_194, func_107((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7));
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_59.f_194, func_107((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7)))
	{
		if (Local_59.f_195 != 0)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_59.f_194, func_108(Local_59.f_195), false, false);
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_59.f_194, func_107((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7), true);
		Local_59.f_196 = 1;
	}
}

bool func_48(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1051387->f_4537)
	{
		iVar6 = -1;
		if ((Local_59.f_117 == 5 || Local_59.f_117 == 3) || Local_59.f_117 == 4)
		{
			iVar7 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar7))
			{
				iVar8 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar7);
				if (Local_483[iVar8 /*10*/] && (Local_483[iVar8 /*10*/])->f_8 != (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8)
				{
					aggregate_func_4714(0);
				}
			}
		}
		switch (Local_59.f_117)
		{
			case 0:
				(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 2;
				if (!Local_59.f_113)
				{
					return false;
				}
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4 > 0)
				{
					iVar2 = 0;
					while (iVar2 < 7)
					{
						if (MISC::IS_BIT_SET((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4, iVar2))
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar2])))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_36[iVar2]));
							}
							else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_12[iVar2])) && !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(&(Local_401.f_12[iVar2])))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(&(Local_401.f_12[iVar2]));
							}
							else
							{
								iVar0 = NETWORK::NET_TO_PED(&(Local_401.f_36[iVar2]));
								PED::DELETE_PED(&iVar0);
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_12[iVar2])))
								{
									iVar1 = NETWORK::NET_TO_OBJ(&(Local_401.f_12[iVar2]));
									OBJECT::DELETE_OBJECT(&iVar1);
								}
								MISC::CLEAR_BIT(&((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4), iVar2);
							}
						}
						iVar2++;
					}
					if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_4 > 0)
					{
						return false;
					}
				}
				iVar3 = 0;
				while (iVar3 < 7)
				{
					iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
					if (iVar4 == NETWORK::PARTICIPANT_ID())
					{
					}
					else if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4) && Local_483[iVar3 /*10*/]) // PointerArith && ((Local_483[iVar3 /*10*/])->f_8 != (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 || (Local_483[iVar3 /*10*/])->f_9 == 1))
					{
						return false;
					}
					iVar3++;
				}
				Local_59.f_126 = 0;
				aggregate_func_4714(2);
				return false;
			case 2:
				iVar0 = func_59();
				if (bParam0)
				{
					if (&Local_401.f_66[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3] != 0)
					{
						Local_59.f_126 = 1;
						(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_2 = &Local_401.f_66[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3];
						(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 4;
						aggregate_func_4714(3);
						return false;
					}
					else if (Local_59.f_114 > 0)
					{
						(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_2 = Local_59.f_114;
					}
				}
				else
				{
					NETWORK::_0x7E300B5B86AB1D1A(&(Local_59.f_95), 9.809089E-45f, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					iVar5 = 0;
					iVar3 = 0;
					while (iVar3 < 7)
					{
						if (Local_59.f_95[iVar3 /*2*/])->f_1 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())
						{
							(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_2 = (iVar3 - iVar5) + 1;
							Jump @785; //curOff = 750
						}
						else if ((Local_59.f_95[iVar3 /*2*/])->f_1 == 0)
						{
							iVar5++;
						}
						iVar3++;
					}
				}
				(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 3;
				aggregate_func_4714(1);
				return false;
			case 1:
				if (Local_401.f_3 == (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3 && Local_401.f_2 == 3)
				{
					(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 4;
					aggregate_func_4714(3);
				}
				return false;
			case 3:
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 != 0)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(&(Local_401.f_4[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3])))
					{
						iVar6 = NETWORK::_0xD7F6781A0ABAF6FB(&(Local_401.f_4[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3]));
					}
					else
					{
						(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 3;
						aggregate_func_4714(1);
					}
					if (ANIMSCENE::_0xCBFC7725DE6CE2E0(iVar6, 0))
					{
						(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 0;
						aggregate_func_4714(5);
					}
				}
				else if (!Local_59.f_126)
				{
					if (!Local_59.f_113)
					{
						return false;
					}
					iVar0 = func_59();
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, 0, 1);
					aggregate_func_4714(4);
				}
				else
				{
					(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 0;
					aggregate_func_4714(5);
				}
				return false;
			case 4:
				if (!Local_59.f_113)
				{
					return false;
				}
				iVar0 = func_59();
				aggregate_func_30(iVar0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_59.f_10, Local_59.f_13, func_110(((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_2 - 1))), Local_59.f_13, 0, 1073741824 /* Float: 2f */);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar0, false, false);
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
				func_70(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0);
				(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 0;
				aggregate_func_4714(5);
				return false;
			case 5:
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 == 0)
				{
					iVar3 = 0;
					while (iVar3 < 7)
					{
						iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar3);
						if (iVar4 == NETWORK::PARTICIPANT_ID())
						{
						}
						else if ((NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4) && Local_483[iVar3 /*10*/]) // PointerArith && (Local_483[iVar3 /*10*/])->f_9 != 0)
						{
							return false;
						}
						iVar3++;
					}
				}
				aggregate_func_30(Global_35, Local_59.f_10, Local_59.f_13, 0, 1073741824 /* Float: 2f */);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_35, false, false);
				ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
				aggregate_func_4714(0);
				break;
		}
	}
	else
	{
		aggregate_func_668(1, 1, 0, 0);
		aggregate_func_30(Global_35, Local_59.f_10, Local_59.f_13, 0, 1073741824 /* Float: 2f */);
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Global_35, false, false);
	}
	return true;
}

void func_49()
{
	if ((Global_1051387->f_69[18 /*76*/])->f_18 == 12)
	{
		ENTITY::CREATE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, -899803912, false);
		ENTITY::CREATE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, 1866258194, false);
		ENTITY::CREATE_MODEL_HIDE(-814.042f, -1374.27f, 44.941f, 2f, joaat("p_chair12bx"), false);
	}
	else if ((Global_1051387->f_69[18 /*76*/])->f_18 == 60)
	{
		ENTITY::CREATE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, joaat("p_chairdining02x"), false);
		ENTITY::CREATE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, -1392495588, false);
		ENTITY::CREATE_MODEL_HIDE(2734.165f, -1119.711f, 50.122f, 2f, 1333110032, false);
	}
}

void func_50()
{
	Local_59.f_51 = PED::_0xD806CD2A4F2C2996(Global_35);
	if (Local_59.f_51 != 0)
	{
		PED::_0xED00D72F81CF7278(Local_59.f_51, 0, 0);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_59.f_51, Local_59.f_18, Local_59.f_21, true, false, true);
	}
}

void func_51()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(Local_59.f_74))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(Local_59.f_74);
	}
}

void func_52(bool bParam0)
{
	int iVar0;
	char* sVar1;

	if ((Global_1051387->f_69[18 /*76*/])->f_18 == 12)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(-814.042f, -1374.27f, 44.941f);
		sVar1 = "bla_photo_LightBoxPortrait";
	}
	else if ((Global_1051387->f_69[18 /*76*/])->f_18 == 60)
	{
		return;
	}
	if (INTERIOR::IS_VALID_INTERIOR(iVar0) && INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		if (bParam0)
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sVar1))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sVar1, 0);
			}
		}
		else if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar0, sVar1))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sVar1, 1);
		}
	}
}

void func_53(int iParam0)
{
	PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(func_59());
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(func_59(), &(Local_59.f_67[iParam0]), Local_59.f_77);
}

void func_54()
{
	GRAPHICS::_0xA42EDF1E88734A7E();
	Local_21.f_1 = 1;
}

void func_58()
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	if (!CAM::DOES_CAM_EXIST(Local_59.f_52))
	{
		Local_59.f_52 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_59, Local_59.f_3, 65f, false, 2);
		CAM::SET_CAM_FOV(Local_59.f_52, Local_59.f_9);
	}
	else
	{
		CAM::SET_CAM_ACTIVE(Local_59.f_52, true);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		CAM::SET_CAM_FOV(Local_59.f_52, Local_59.f_9);
	}
	func_114();
	if (!aggregate_func_927(Global_35, 150319005))
	{
		TASK::TASK_LOOK_AT_ENTITY(Global_35, Local_59.f_50, -1, 0, 51, 0);
	}
	HUD::_0xC9CAEAEEC1256E54(-492723688);
}

int func_59()
{
	int iVar0;

	iVar0 = Global_35;
	if (Local_59.f_113)
	{
		iVar0 = NETWORK::NET_TO_PED(&(Local_401.f_36[(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_3]));
	}
	return iVar0;
}

void func_60()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID());
	if (!Local_59.f_31)
	{
		aggregate_func_2878(&(Local_59.f_39), 1, 1);
		aggregate_func_2878(&(Local_59.f_40), 1, 1);
		aggregate_func_2878(&(Local_59.f_41), 1, 1);
		aggregate_func_2878(&(Local_59.f_42), 1, 1);
		aggregate_func_2878(&(Local_59.f_43), 1, 1);
		aggregate_func_2878(&(Local_59.f_44), 1, 1);
		aggregate_func_2878(&(Local_59.f_45), 1, 1);
		aggregate_func_2878(&(Local_59.f_46), 1, 1);
		aggregate_func_2878(&(Local_59.f_48), 1, 1);
		if (Global_1051387->f_4537)
		{
			if (!aggregate_func_2875(Local_59.f_32))
			{
				Local_59.f_32 = aggregate_func_2493("PHOTO_STUDIO_CHANGE_POSE", joaat("INPUT_GAME_MENU_LEFT"), joaat("INPUT_GAME_MENU_RIGHT"), 0);
				aggregate_func_2057(Local_59.f_32, 4, 1, 0);
				aggregate_func_2057(Local_59.f_32, 2, 1, 0);
			}
			aggregate_func_4583(Local_59.f_32, (Global_1051387->f_4537.f_4 > 1 && bVar0), 1, 1);
		}
		if (!aggregate_func_2875(Local_59.f_35))
		{
			Local_59.f_35 = aggregate_func_2493("PHOTO_STUDIO_CHANGE_EXPRESSION", joaat("INPUT_GAME_MENU_UP"), joaat("INPUT_GAME_MENU_DOWN"), 0);
			aggregate_func_2057(Local_59.f_35, 4, 1, 0);
			aggregate_func_2057(Local_59.f_35, 2, 1, 0);
		}
		else
		{
			aggregate_func_4583(Local_59.f_35, 1, 1, 1);
		}
		if (!aggregate_func_2875(Local_59.f_33))
		{
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < Local_59.f_193)
			{
				if (iVar3 == Local_59.f_127)
				{
					if (bVar1)
					{
						Local_59.f_59 = joaat("INPUT_MOVE_DOWN_ONLY");
					}
					else
					{
						Local_59.f_59 = joaat("INPUT_MOVE_UD");
					}
					iVar2 = iVar3;
				}
				else if (aggregate_func_2852(&(Local_59.f_130[iVar3]), func_35(Local_59.f_128)))
				{
					bVar1 = false;
					iVar2 = iVar3;
				}
				iVar3++;
			}
			Local_59.f_60 = 1;
			if (Local_59.f_127 == iVar2)
			{
				if (Local_59.f_59 == joaat("INPUT_MOVE_DOWN_ONLY"))
				{
					Local_59.f_60 = 0;
				}
				else
				{
					Local_59.f_59 = joaat("INPUT_MOVE_UP_ONLY");
				}
			}
			Local_59.f_33 = aggregate_func_2045("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_59.f_59, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(Local_59.f_33, 4, 1, 0);
		}
		aggregate_func_4583(Local_59.f_33, ((!Global_1051387->f_4537 || bVar0) && Local_59.f_60), 1, 1);
		if (!aggregate_func_2875(Local_59.f_34))
		{
			Local_59.f_34 = aggregate_func_2045("PHOTO_STUDIO_CHANGE_BACKGROUND_SET", joaat("INPUT_MOVE_LR"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(Local_59.f_34, 4, 1, 0);
		}
		aggregate_func_4583(Local_59.f_34, (!Global_1051387->f_4537 || bVar0), 1, 1);
		if (!aggregate_func_2875(Local_59.f_36))
		{
			Local_59.f_36 = aggregate_func_2045("PHOTO_STUDIO_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(Local_59.f_36, 4, 1, 0);
			aggregate_func_2057(Local_59.f_36, 2, 1, 0);
		}
		else
		{
			aggregate_func_4583(Local_59.f_36, 1, 1, 1);
		}
		if (!aggregate_func_2875(Local_59.f_38))
		{
			Local_59.f_38 = aggregate_func_2045("PHOTO_STUDIO_GALLERY", joaat("INPUT_GAME_MENU_EXTRA_OPTION"), 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(Local_59.f_38, 4, 1, 0);
			aggregate_func_2057(Local_59.f_38, 2, 1, 0);
		}
		else
		{
			aggregate_func_4583(Local_59.f_38, 1, 1, 1);
		}
	}
	else
	{
		aggregate_func_2878(&(Local_59.f_32), 1, 1);
		aggregate_func_2878(&(Local_59.f_35), 1, 1);
		aggregate_func_2878(&(Local_59.f_33), 1, 1);
		aggregate_func_2878(&(Local_59.f_34), 1, 1);
		aggregate_func_2878(&(Local_59.f_36), 1, 1);
		aggregate_func_2878(&(Local_59.f_38), 1, 1);
		func_122(&(Local_59.f_39), &(Local_59.f_40), 0);
		func_122(&(Local_59.f_41), &(Local_59.f_42), 3);
		func_122(&(Local_59.f_43), &(Local_59.f_44), 2);
		func_122(&(Local_59.f_45), &(Local_59.f_46), 1);
		if (!aggregate_func_2875(Local_59.f_48))
		{
			Local_59.f_48 = aggregate_func_2045("EMOTE_PERFORM_ACTION", joaat("INPUT_INSPECT_ZOOM"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(Local_59.f_48, 13, 1, 1);
			aggregate_func_2057(Local_59.f_48, 10, 1, 1);
			aggregate_func_2057(Local_59.f_48, 14, 1, 1);
			aggregate_func_2057(Local_59.f_48, 4, 1, 0);
			aggregate_func_2057(Local_59.f_48, 2, 1, 0);
			aggregate_func_4583(Local_59.f_48, 0, 1, 1);
			aggregate_func_4823(Local_59.f_48, 0, 1);
		}
	}
	if (!aggregate_func_2875(Local_59.f_49))
	{
		Local_59.f_49 = aggregate_func_2045("NET_INTERACT_OPTION_EMOTE", joaat("INPUT_OPEN_EMOTE_WHEEL"), 2, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		aggregate_func_2057(Local_59.f_49, 4, 1, 0);
		aggregate_func_2057(Local_59.f_49, 2, 1, 0);
	}
	aggregate_func_4583(Local_59.f_49, (!Global_1051387->f_4537 || (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 == 0), 1, 1);
	if (!aggregate_func_2875(Local_59.f_37))
	{
		Local_59.f_37 = aggregate_func_2045("PHOTO_STUDIO_TAKE_PHOTO", joaat("INPUT_CONTEXT_LT"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		func_124(Local_59.f_37, "PHOTO_STUDIO_TAKE_PHOTO", (BUILTIN::TO_FLOAT(500) / 100f), 2, 1);
		aggregate_func_2057(Local_59.f_37, 2, 1, 0);
	}
	if (func_125())
	{
		aggregate_func_4583(Local_59.f_37, 1, 1, 1);
	}
	else
	{
		aggregate_func_4583(Local_59.f_37, 0, 1, 1);
	}
}

void func_61()
{
	bool bVar0;
	bool bVar1;

	bVar1 = _NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID());
	PAD::_0x2804658EB7D8A50B(4, -74730614);
	if (aggregate_func_2875(Local_59.f_32))
	{
		bVar0 = (Global_1051387->f_4537.f_4 > 1 && bVar1);
		bVar0 = (bVar0 && Global_1051387->f_4537.f_7 == 5);
		if (aggregate_func_4637(Local_59.f_32, 0) != bVar0)
		{
			aggregate_func_4583(Local_59.f_32, bVar0, 1, 1);
		}
		if (aggregate_func_3633(Local_59.f_32, 0, 1))
		{
			Local_59.f_208 = (Local_59.f_208 - 1);
			Local_59.f_61 = 1;
			func_39(8);
			func_128();
			func_129();
			return;
		}
		else if (aggregate_func_3633(Local_59.f_32, 1, 1))
		{
			Local_59.f_208++;
			Local_59.f_61 = 0;
			func_39(8);
			func_128();
			func_129();
			return;
		}
	}
	if (aggregate_func_2875(Local_59.f_35))
	{
		if (aggregate_func_3633(Local_59.f_35, 0, 1))
		{
			aggregate_func_2112("dpad_up", "RDRO_Photo_Shop_Sounds", 1);
			Local_59.f_62 = 1;
			func_39(9);
			func_129();
			return;
		}
		else if (aggregate_func_3633(Local_59.f_35, 1, 1))
		{
			aggregate_func_2112("dpad_down", "RDRO_Photo_Shop_Sounds", 1);
			Local_59.f_62 = 0;
			func_39(9);
			func_129();
			return;
		}
	}
	if (aggregate_func_2875(Local_59.f_37))
	{
		if (func_125())
		{
			if (!aggregate_func_4637(Local_59.f_37, 0))
			{
				aggregate_func_4583(Local_59.f_37, 1, 1, 1);
			}
		}
		if (aggregate_func_2973(Local_59.f_37, 1))
		{
			if (Global_1051387->f_4537.f_7 == 6)
			{
				TASK::_0xBDFEEB7600BCD938(func_59());
				Local_59.f_47 = 0;
			}
			func_39(13);
			func_129();
			if (Local_21.f_7 < Local_21.f_8)
			{
				Local_59.f_341 = aggregate_func_3030(1938417563, 0, 1, 1, 0, 59806960);
			}
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, aggregate_func_5095(Local_59.f_37)))
		{
			if (!aggregate_func_4574(500))
			{
				aggregate_func_2975("SHOP_H_TOO_POOR_PH", 10000, 0, 0, 0, 1);
				aggregate_func_2112("UNAFFORDABLE", "HUD_SHOP_SOUNDSET", 1);
			}
			else if (Global_1051387->f_4537 && Global_1051387->f_4537.f_4 <= 1)
			{
				aggregate_func_2975("PHOTO_REQUIRE_MORE_POSSE", 10000, 0, 0, 0, 1);
			}
		}
	}
	if (aggregate_func_2875(Local_59.f_36))
	{
		if (aggregate_func_1702(Local_59.f_36, 1) == 1f)
		{
			func_39(14);
			func_129();
		}
	}
	if (aggregate_func_2875(Local_59.f_33))
	{
		bVar0 = (!Global_1051387->f_4537 || bVar1);
		bVar0 = (bVar0 && Global_1051387->f_4537.f_7 == 5);
		bVar0 = (bVar0 && Local_59.f_60);
		if (aggregate_func_4637(Local_59.f_33, 0) != bVar0)
		{
			aggregate_func_4583(Local_59.f_33, bVar0, 1, 1);
		}
		if (func_137())
		{
			func_129();
			func_138();
			aggregate_func_2112("Backdrop_Move", "RDRO_Photo_Shop_Sounds", 1);
			func_39(11);
		}
	}
	if (aggregate_func_2875(Local_59.f_34))
	{
		bVar0 = (!Global_1051387->f_4537 || bVar1);
		bVar0 = (bVar0 && Global_1051387->f_4537.f_7 == 5);
		if (aggregate_func_4637(Local_59.f_34, 0) != bVar0)
		{
			aggregate_func_4583(Local_59.f_34, bVar0, 1, 1);
		}
		if (func_139())
		{
			func_129();
			func_138();
			if (Global_1051387->f_4537)
			{
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 == 2)
				{
					aggregate_func_2112("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
				}
				else
				{
					aggregate_func_2112("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
				}
			}
			else if (Local_59.f_206 == 2)
			{
				aggregate_func_2112("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
			}
			else
			{
				aggregate_func_2112("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
			}
			func_39(12);
		}
	}
	if (aggregate_func_2875(Local_59.f_49))
	{
		if (aggregate_func_2973(Local_59.f_49, 1))
		{
			aggregate_func_2112("bumper_right", "RDRO_Photo_Shop_Sounds", 1);
			Local_59.f_31 = !Local_59.f_31;
			func_60();
			if (Local_59.f_31)
			{
				aggregate_func_2052(Local_59.f_49, "NET_INTERACT_OPTION_EMOTE_PARENT", 1);
			}
			else
			{
				aggregate_func_2052(Local_59.f_49, "NET_INTERACT_OPTION_EMOTE", 1);
			}
		}
	}
	func_141(Local_59.f_39, Local_59.f_40, 0);
	func_141(Local_59.f_41, Local_59.f_42, 3);
	func_141(Local_59.f_43, Local_59.f_44, 2);
	func_141(Local_59.f_45, Local_59.f_46, 1);
	if (aggregate_func_2875(Local_59.f_48))
	{
		if (aggregate_func_2927(Local_59.f_48, 1))
		{
			TASK::_0x6A1AF481407BF6E9(func_59());
		}
	}
	if (aggregate_func_2875(Local_59.f_38))
	{
		if (!func_88(1))
		{
			if (aggregate_func_1702(Local_59.f_38, 1) == 1f)
			{
				func_143();
				func_129();
				func_39(10);
			}
		}
	}
}

bool func_62(int iParam0)
{
	if (!aggregate_func_4260(&(Local_59.f_53)))
	{
		aggregate_func_4293(&(Local_59.f_53), 0);
	}
	else if (aggregate_func_1526(&(Local_59.f_53)) > iParam0)
	{
		aggregate_func_4313(&(Local_59.f_53));
		return true;
	}
	return false;
}

void func_63()
{
	if (Local_59.f_62 == 1)
	{
		Local_59.f_29++;
		if (Local_59.f_29 > 5)
		{
			Local_59.f_29 = 0;
		}
		func_53(Local_59.f_29);
	}
	else if (Local_59.f_62 == 0)
	{
		Local_59.f_29 = (Local_59.f_29 - 1);
		if (Local_59.f_29 < 0)
		{
			Local_59.f_29 = 5;
		}
		func_53(Local_59.f_29);
	}
}

bool func_64()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_59.f_116))
	{
		if (Global_1051387->f_4537)
		{
			iVar0 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5;
		}
		else
		{
			iVar0 = Local_59.f_205;
		}
		STREAMING::REQUEST_MODEL(iVar0, false);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return false;
		}
		Local_59.f_116 = OBJECT::CREATE_OBJECT(iVar0, Local_59.f_26, false, true, false, false, true);
		ENTITY::FREEZE_ENTITY_POSITION(Local_59.f_116, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_59.f_116, false, false);
		ENTITY::SET_ENTITY_ROTATION(Local_59.f_116, ENTITY::GET_ENTITY_ROTATION(Local_59.f_115, 2), 2, true);
	}
	if (Global_1051387->f_4537)
	{
		iVar1 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6;
	}
	else
	{
		iVar1 = Local_59.f_206;
	}
	if (iVar1 == 0)
	{
		fVar2 = (1f - Local_59.f_66);
	}
	else
	{
		fVar2 = (Local_59.f_66 + 1f);
	}
	if (fVar2 <= 0.15f)
	{
		fVar3 = (fVar2 / 0.125f);
	}
	else if (fVar2 >= 0.85f)
	{
		fVar3 = ((1f - fVar2) / 0.125f);
	}
	else
	{
		fVar3 = 1f;
	}
	if (fVar3 < 0.05f)
	{
		fVar3 = 0.05f;
	}
	if (iVar1 == 0)
	{
		Local_59.f_66 = (Local_59.f_66 + ((fVar3 * 0.6f) * BUILTIN::TIMESTEP()));
	}
	else
	{
		Local_59.f_66 = (Local_59.f_66 + (((fVar3 * 0.6f) * -1f) * BUILTIN::TIMESTEP()));
	}
	if ((iVar1 == 0 && Local_59.f_66 >= 1f) || (iVar1 == 1 && Local_59.f_66 <= -1f))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_59.f_115))
		{
			ENTITY::SET_ENTITY_COORDS(Local_59.f_116, Local_59.f_26, true, false, true, true);
			OBJECT::DELETE_OBJECT(&(Local_59.f_115));
		}
		if (!Global_1051387->f_4537 || Local_59.f_196)
		{
			Local_59.f_66 = 0f;
			Local_59.f_115 = Local_59.f_116;
			Local_59.f_116 = 0;
			if (Global_1051387->f_4537)
			{
				Global_1051387->f_4537.f_6 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5;
			}
			else
			{
				Global_1051387->f_4537.f_6 = Local_59.f_205;
			}
			return true;
		}
	}
	else
	{
		MISC::GET_MODEL_DIMENSIONS(Local_59.f_88, &vVar4, &vVar7);
		vVar10 = { 0f, 0f, Local_59.f_66 };
		if (iVar1 == 0)
		{
			vVar13 = { vVar10 - Vector(1f, 0f, 0f) };
		}
		else
		{
			vVar13 = { vVar10 + Vector(1f, 0f, 0f) };
		}
		if (fVar2 < 0.5f)
		{
			func_47();
		}
		vVar10 = { vVar10 * FtoV(MISC::ABSF((vVar7.z - vVar4.z))) };
		vVar13 = { vVar13 * FtoV(MISC::ABSF((vVar7.z - vVar4.z))) };
		ENTITY::SET_ENTITY_COORDS(Local_59.f_115, Local_59.f_26 + vVar10, true, false, false, true);
		ENTITY::SET_ENTITY_COORDS(Local_59.f_116, Local_59.f_26 + vVar13, true, false, false, true);
		INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_59.f_115, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35));
		INTERIOR::FORCE_ROOM_FOR_ENTITY(Local_59.f_116, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35));
	}
	return false;
}

bool func_65()
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_59.f_116))
	{
		if (!aggregate_func_4260(&(Local_59.f_338)))
		{
			if (Global_1051387->f_4537)
			{
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 == 2)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_L");
				}
				else
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_R");
				}
			}
			else if (Local_59.f_206 == 2)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_L");
			}
			else
			{
				GRAPHICS::ANIMPOSTFX_PLAY("CameraTransitionWipe_R");
			}
			aggregate_func_4293(&(Local_59.f_338), 0);
		}
		if (Global_1051387->f_4537)
		{
			iVar0 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5;
		}
		else
		{
			iVar0 = Local_59.f_205;
		}
		STREAMING::REQUEST_MODEL(iVar0, false);
		if (STREAMING::HAS_MODEL_LOADED(iVar0) && aggregate_func_1526(&(Local_59.f_338)) > 250)
		{
			Local_59.f_116 = OBJECT::CREATE_OBJECT(iVar0, Local_59.f_26, false, true, false, false, true);
		}
		else
		{
			return false;
		}
		ENTITY::FREEZE_ENTITY_POSITION(Local_59.f_116, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Local_59.f_116, false, false);
		ENTITY::SET_ENTITY_ROTATION(Local_59.f_116, ENTITY::GET_ENTITY_ROTATION(Local_59.f_115, 2), 2, true);
		OBJECT::DELETE_OBJECT(&(Local_59.f_115));
	}
	func_47();
	if (!Global_1051387->f_4537 || Local_59.f_196)
	{
		if (aggregate_func_4260(&(Local_59.f_338)))
		{
			if (Global_1051387->f_4537)
			{
				if ((Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 == 2)
				{
					GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_L");
				}
				else
				{
					GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_R");
				}
			}
			else if (Local_59.f_206 == 2)
			{
				GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_L");
			}
			else
			{
				GRAPHICS::_0xC5CB91D65852ED7E("CameraTransitionWipe_R");
			}
			aggregate_func_4313(&(Local_59.f_338));
		}
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_R") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("CameraTransitionWipe_L"))
		{
			return false;
		}
		Local_59.f_115 = Local_59.f_116;
		Local_59.f_116 = 0;
		if (Global_1051387->f_4537)
		{
			Global_1051387->f_4537.f_6 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5;
		}
		else
		{
			Global_1051387->f_4537.f_6 = Local_59.f_205;
		}
		return true;
	}
	return false;
}

void func_66(int iParam0)
{
	Local_21.f_22 = (Local_21.f_22 || iParam0);
}

void func_67()
{
	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(Local_59.f_76))
	{
		GRAPHICS::ANIMPOSTFX_PLAY(Local_59.f_76);
	}
	aggregate_func_2112("Camera_Flash", "RDRO_Photo_Shop_Sounds", 1);
	Local_59.f_56 = 1;
}

void func_68(int iParam0)
{
	Local_401.f_36[iParam0] = 0;
	Local_401.f_20[iParam0] = 0;
	Local_401.f_28[iParam0] = 0;
	Local_401.f_66[iParam0] = 0;
	Local_401.f_74[iParam0] = 0;
	aggregate_func_4313(Local_401.f_44[iParam0 /*3*/]);
}

void func_70(int iParam0, int iParam1)
{
	int iVar0;

	aggregate_func_1334(iParam0, iParam1);
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, 2, false))
	{
		if (iVar0 != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, 2, false, false);
		}
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, 4, false))
	{
		if (iVar0 != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, 4, false, false);
		}
	}
}

bool func_72()
{
	struct<4> Var0;
	var uVar5;
	struct<4> Var6;
	int iVar11;
	int iVar12;
	int iVar13;

	Var0 = &Global_1915170->f_19847[18];
	Var0.f_2 = 350029031;
	Var0.f_3 = Local_59.f_209;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -1793904784;
		Var0.f_3 = -1495475299;
		DATAFILE::_DATAFILE_GET_STRING(&(Local_59.f_210), &Var0);
		Var6 = &Global_1915170->f_19847[18];
		iVar11 = 0;
		Var0.f_2 = 843957109;
		if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var6.f_1), &Var0))
		{
			iVar11 = DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var6, Var6.f_1);
		}
		iVar12 = 0;
		while (iVar12 < 7)
		{
			(Local_59.f_218[iVar12 /*17*/])->f_16 = 0;
			iVar12++;
		}
		if (iVar11 > 0)
		{
			Var0.f_2 = 290941431;
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				Var0.f_3 = iVar12;
				if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var6.f_1), &Var0))
				{
					iVar13 = 0;
					Var6.f_2 = 110382701;
					Var6.f_3 = -1858290781;
					if (DATAFILE::_DATAFILE_GET_INT(&iVar13, &Var6) && iVar13 > 0)
					{
						Var6.f_2 = -1793904784;
						Var6.f_3 = -859932058;
						DATAFILE::_DATAFILE_GET_STRING(Local_59.f_218[(iVar13 - 1) /*17*/], &Var6);
						Var6.f_3 = 325797227;
						DATAFILE::_DATAFILE_GET_STRING(&((Local_59.f_218[(iVar13 - 1) /*17*/])->f_8), &Var6);
						Var6.f_2 = -1407851228;
						Var6.f_3 = -302053561;
						DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var6);
						(Local_59.f_218[(iVar13 - 1) /*17*/])->f_16 = uVar5;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

struct<4> func_74(int iParam0)
{
	char cVar0[32];
	int iVar4;

	iVar4 = NETWORK::NET_TO_PED(&(Local_401.f_36[(Local_483[iParam0 /*10*/])->f_3]));
	if (PED::IS_PED_MALE(iVar4))
	{
		StringCopy(&cVar0, "MP_MALE_0", 32);
	}
	else
	{
		StringCopy(&cVar0, "MP_FEMALE_0", 32);
	}
	StringIntConCat(&cVar0, (Local_483[iParam0 /*10*/])->f_2, 32);
	return cVar0;
}

void func_76()
{
	aggregate_func_2878(&(Local_59.f_33), 1, 1);
	aggregate_func_2878(&(Local_59.f_34), 1, 1);
	aggregate_func_2878(&(Local_59.f_32), 1, 1);
	aggregate_func_2878(&(Local_59.f_35), 1, 1);
	aggregate_func_2878(&(Local_59.f_49), 1, 1);
	aggregate_func_2878(&(Local_59.f_37), 1, 1);
	aggregate_func_2878(&(Local_59.f_36), 1, 1);
	aggregate_func_2878(&(Local_59.f_38), 1, 1);
	aggregate_func_2878(&(Local_59.f_39), 1, 1);
	aggregate_func_2878(&(Local_59.f_40), 1, 1);
	aggregate_func_2878(&(Local_59.f_41), 1, 1);
	aggregate_func_2878(&(Local_59.f_42), 1, 1);
	aggregate_func_2878(&(Local_59.f_43), 1, 1);
	aggregate_func_2878(&(Local_59.f_44), 1, 1);
	aggregate_func_2878(&(Local_59.f_45), 1, 1);
	aggregate_func_2878(&(Local_59.f_46), 1, 1);
	aggregate_func_2878(&(Local_59.f_48), 1, 1);
}

void func_77()
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(Local_59.f_74))
	{
		GRAPHICS::ANIMPOSTFX_STOP(Local_59.f_74);
	}
}

void func_85()
{
	Local_21.f_24 = GRAPHICS::_0xB28894CD7408BD0C();
	if (Local_21.f_24 == 1)
	{
	}
	if (Local_21.f_24 == 0)
	{
		Local_21 = false;
		Local_21.f_7 = GRAPHICS::_0x78C56B8A7B1D000C();
		Local_21.f_8 = GRAPHICS::_0x8E587FCD30E05592();
		Local_21.f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		Local_21.f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_21.f_9, "cameraRollCapacityLabel", "i_CurrentNumberOfLocalPhotos");
		func_86();
		Local_21.f_1 = 0;
		Local_21.f_2 = 1;
		Local_21.f_21 = MISC::GET_GAME_TIMER();
	}
	else if (Local_21.f_24 == 2)
	{
		Local_21 = true;
		Local_21.f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "playerCamera");
		Local_21.f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Local_21.f_9, "cameraRollCapacityLabel", "failed/failed");
		func_151();
		Local_21.f_1 = 0;
		Local_21.f_2 = 0;
	}
}

void func_86()
{
	StringCopy(&(Local_21.f_11), "", 32);
	MISC::_INT_TO_STRING(Local_21.f_7, "%i", &(Local_21.f_11));
	StringConCat(&(Local_21.f_11), " / ", 32);
	StringCopy(&(Local_21.f_15), "", 32);
	MISC::_INT_TO_STRING(Local_21.f_8, "%i", &(Local_21.f_15));
	StringConCat(&(Local_21.f_11), &(Local_21.f_15), 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_21.f_10, &(Local_21.f_11));
}

bool func_88(int iParam0)
{
	return (Local_21.f_22 && iParam0) != 0;
}

char* func_94(int iParam0)
{
	switch (iParam0)
	{
		case -196675805: /* GXTEntry: "Aurora Basin" */
			return "WATER_AURORA_BASIN";
		case 795414694: /* GXTEntry: "Barrow Lagoon" */
			return "WATER_BARROW_LAGOON";
		case -557290573: /* GXTEntry: "Bayou Nwa" */
			return "WATER_BAYOU_NWA";
		case 650214731: /* GXTEntry: "Beartooth Beck" */
			return "WATER_BEARTOOTH_BECK";
		case -1073312073: /* GXTEntry: "Cairn Lake" */
			return "WATER_CAIRN_LAKE";
		case 231313522:
			return "WATER_CALUMET_RAVINE";
		case -804804953:
			return "WATER_CATTAIL_POND";
		case 370072007: /* GXTEntry: "Dakota River" */
			return "WATER_DAKOTA_RIVER";
		case 1245451421: /* GXTEntry: "Deadboot Creek" */
			return "WATER_DEADBOOT_CREEK";
		case 469159176: /* GXTEntry: "Dewberry Creek" */
			return "WATER_DEWBERRY_CREEK";
		case -105598602: /* GXTEntry: "Elysian Pool" */
			return "WATER_ELYSIAN_POOL";
		case -1356490953:
			return "WATER_FLAT_IRON";
		case -1276586360: /* GXTEntry: "Hawks Eye Creek" */
			return "WATER_HAWKS_EYE_CREEK";
		case 1755369577: /* GXTEntry: "Heartlands Overflow" */
			return "WATER_HEARTLANDS_OVERFLOW";
		case 1175365009: /* GXTEntry: "Hot Springs" */
			return "WATER_HOT_SPRINGS";
		case -1229593481: /* GXTEntry: "Kamassa River" */
			return "WATER_KAMASSA_RIVER";
		case -1369817450: /* GXTEntry: "Lake Don Julio" */
			return "WATER_LAKE_DON_JULIO";
		case 592454541: /* GXTEntry: "Lake Isabella" */
			return "WATER_LAKE_ISABELLA";
		case -2040708515:
			return "WATER_LANNACHECHEE_RIVER";
		case -1410384421: /* GXTEntry: "Little Creek River" */
			return "WATER_LITTLE_CREEK_RIVER";
		case -1308233316: /* GXTEntry: "Lower Montana River" */
			return "WATER_LOWER_MONTANA_RIVER";
		case 301094150: /* GXTEntry: "Mattlock Pond" */
			return "WATER_MATTLOCK_POND";
		case -811730579: /* GXTEntry: "Moonstone Pond" */
			return "WATER_MOONSTONE_POND";
		case -1817904483:
			return "WATER_OCREAGHS_RUN";
		case -1300497193: /* GXTEntry: "Owanjila" */
			return "WATER_OWANJILA";
		case 2005774838: /* GXTEntry: "Ringneck Creek" */
			return "WATER_RINGNECK_CREEK";
		case -1504425495: /* GXTEntry: "San Luis River" */
			return "WATER_SAN_LUIS_RIVER";
		case -247856387: /* GXTEntry: "Sea of Coronado" */
			return "WATER_SEA_OF_CORONADO";
		case -823661292: /* GXTEntry: "Southfield Flats" */
			return "WATER_SOUTHFIELD_FLATS";
		case -218679770: /* GXTEntry: "Spider Gorge" */
			return "WATER_SPIDER_GORGE";
		case -1287619521: /* GXTEntry: "Stillwater Creek" */
			return "WATER_STILLWATER_CREEK";
		case -1781130443: /* GXTEntry: "Upper Montana River" */
			return "WATER_UPPER_MONTANA_RIVER";
		case -261541730: /* GXTEntry: "Whinyard Strait" */
			return "WATER_WHINYARD_STRAIT";
		default:
			break;
	}
	return "";
}

void func_99(int iParam0)
{
	Local_21.f_22 = (Local_21.f_22 - (Local_21.f_22 && iParam0));
}

void func_102(int iParam0)
{
	if ((!Global_1051387->f_4537.f_1 || !Global_1051387->f_4537.f_2) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			Global_1051387->f_4537.f_1 = 1;
		}
		else
		{
			Global_1051387->f_4537.f_2 = 1;
		}
	}
}

void func_103(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar1 = iParam0;
	iVar2 = _NAMESPACE26::_0x4BE6C13A45CCA8EC(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
	{
		iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		if (&Local_483[iVar3 /*10*/])
		{
			iVar1 = iVar3;
		}
	}
	if ((((Global_1051387->f_4537.f_7 == 5 || Global_1051387->f_4537.f_7 == 6) || Global_1051387->f_4537.f_7 == 7) || Global_1051387->f_4537.f_7 == 10) || ((Global_1051387->f_4537.f_7 == 1 || Global_1051387->f_4537.f_7 == 3) && Local_59.f_117 == 0))
	{
		if ((Local_483[iVar1 /*10*/])->f_5 != (Local_483[iVar0 /*10*/])->f_5 && (Local_483[iVar1 /*10*/])->f_5 != 0)
		{
			if (Global_1051387->f_4537.f_7 == 1 || Global_1051387->f_4537.f_7 == 3)
			{
				if (!Local_59.f_207)
				{
					Local_59.f_207 = 1;
				}
			}
			else
			{
				(Local_483[iVar0 /*10*/])->f_5 = (Local_483[iVar1 /*10*/])->f_5;
				(Local_483[iVar0 /*10*/])->f_6 = (Local_483[iVar1 /*10*/])->f_6;
				Local_59.f_195 = (Local_483[iVar0 /*10*/])->f_7;
				(Local_483[iVar0 /*10*/])->f_7 = (Local_483[iVar1 /*10*/])->f_7;
				if (Global_1051387->f_4537.f_7 == 6)
				{
					TASK::_0xBDFEEB7600BCD938(func_59());
					Local_59.f_47 = 0;
				}
				func_129();
				if (((Local_483[iVar0 /*10*/])->f_6 == 2 || (Local_483[iVar0 /*10*/])->f_6 == 3) || Local_59.f_207)
				{
					Local_59.f_207 = 0;
					func_138();
					if ((Local_483[iVar0 /*10*/])->f_6 == 2)
					{
						aggregate_func_2112("background_set_left", "RDRO_Photo_Shop_Sounds", 1);
					}
					else
					{
						aggregate_func_2112("background_set_right", "RDRO_Photo_Shop_Sounds", 1);
					}
					func_39(12);
				}
				else
				{
					func_138();
					aggregate_func_2112("Backdrop_Move", "RDRO_Photo_Shop_Sounds", 1);
					func_39(11);
				}
				return;
			}
		}
		if ((Local_483[iVar1 /*10*/])->f_8 != (Local_483[iVar0 /*10*/])->f_8)
		{
			if (Global_1051387->f_4537.f_7 == 6)
			{
				TASK::_0xBDFEEB7600BCD938(func_59());
				Local_59.f_47 = 0;
			}
			if (Local_59.f_31)
			{
				Local_59.f_31 = 0;
			}
			(Local_483[iVar0 /*10*/])->f_8 = (Local_483[iVar1 /*10*/])->f_8;
			if (!(Global_1051387->f_4537.f_7 == 1 || Global_1051387->f_4537.f_7 == 3))
			{
				func_39(8);
				func_128();
				func_129();
			}
		}
	}
}

int func_104(int iParam0, var uParam1)
{
	if (!aggregate_func_4321(iParam0))
	{
		return 0;
	}
	if ((iParam0 == 28 || iParam0 == 29) || iParam0 == 33)
	{
		*uParam1 = 0;
		return 1;
	}
	if (aggregate_func_4251() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST((Global_1051387->f_69[iParam0 /*76*/])->f_21))
		{
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1051387->f_69[iParam0 /*76*/])->f_21);
		}
		else
		{
			return 0;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST((Global_1915170->f_3[iParam0 /*447*/])->f_23))
	{
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX((Global_1915170->f_3[iParam0 /*447*/])->f_23);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_105()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1051387->f_4537)
	{
		iVar0 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5;
	}
	else
	{
		iVar0 = Local_59.f_205;
	}
	if (iVar0 != 0)
	{
		return iVar0;
	}
	Local_59.f_128 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < Local_59.f_193)
		{
			if (aggregate_func_2852(&(Local_59.f_130[iVar2]), func_35(Local_59.f_128)))
			{
				Local_59.f_127 = iVar2;
				if (Global_1051387->f_4537)
				{
					(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5 = &Local_59.f_151[iVar2];
					(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7 = &Local_59.f_172[iVar2];
				}
				else
				{
					Local_59.f_205 = &Local_59.f_151[iVar2];
				}
				return &(Local_59.f_151[iVar2]);
			}
			iVar2++;
		}
		Local_59.f_128++;
		if (Local_59.f_128 >= 4)
		{
			Local_59.f_128 = 0;
		}
		iVar1++;
	}
	return 497185279;
}

Vector3 func_106(vector3 vParam0, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = BUILTIN::COS(vParam3.x);
	fVar1 = BUILTIN::SIN(vParam3.x);
	vVar2.x = vParam0.x;
	vVar2.f_1 = ((fVar0 * vParam0.y) - (fVar1 * vParam0.z));
	vVar2.f_2 = ((fVar1 * vParam0.y) + (fVar0 * vParam0.z));
	vParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam3.y);
	fVar1 = BUILTIN::SIN(vParam3.y);
	vVar2.x = ((fVar0 * vParam0.x) + (fVar1 * vParam0.z));
	vVar2.f_1 = vParam0.y;
	vVar2.f_2 = ((fVar0 * vParam0.z) - (fVar1 * vParam0.x));
	vParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam3.z);
	fVar1 = BUILTIN::SIN(vParam3.z);
	vVar2.x = ((fVar0 * vParam0.x) - (fVar1 * vParam0.y));
	vVar2.f_1 = ((fVar1 * vParam0.x) + (fVar0 * vParam0.y));
	vVar2.f_2 = vParam0.z;
	vParam0 = { vVar2 };
	return vParam0;
}

char* func_107(int iParam0)
{
	switch (iParam0)
	{
		case 84486308:
			return "standard_PL";
		case 458599716:
			return "sunny_PL";
		case -358564271:
			return "sunset_PL";
		case -450294390:
			return "interior_PL";
		case 2101619512:
			return "night_PL";
		default:
			break;
	}
	return "standard_PL";
}

char* func_108(int iParam0)
{
	switch (iParam0)
	{
		case 84486308:
			return "b_standard";
		case 458599716:
			return "b_sunny";
		case -358564271:
			return "b_sunset";
		case -450294390:
			return "b_interior";
		case 2101619512:
			return "b_night";
		default:
			break;
	}
	return "b_standard";
}

Vector3 func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 0f;
		case 1:
			return 0.75f, 0f, 0f;
		case 2:
			return -0.75f, 0f, 0f;
		case 3:
			return (0.9f * 0.5f), -0.75f, 0f;
		case 4:
			return (0.9f * -0.5f), -0.75f, 0f;
		case 5:
			return (0.9f * 1.5f), -0.75f, 0f;
		case 6:
			return (0.9f * -1.5f), -0.75f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_114()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MAP"), false);
}

void func_122(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	if (aggregate_func_5303(iParam2, &bVar0))
	{
		switch (iParam2)
		{
			case 0:
				iVar1 = joaat("INPUT_EMOTE_DANCE");
				break;
			case 3:
				iVar1 = joaat("INPUT_EMOTE_GREET");
				break;
			case 2:
				iVar1 = joaat("INPUT_EMOTE_COMM");
				break;
			case 1:
				iVar1 = joaat("INPUT_EMOTE_TAUNT");
				break;
		}
		if (!aggregate_func_2875(*uParam0))
		{
			*uParam0 = aggregate_func_2045(aggregate_func_1965(aggregate_func_2879(bVar0), joaat("COLOR_PURE_WHITE")), iVar1, 5, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
			aggregate_func_2057(*uParam0, 13, 1, 1);
			aggregate_func_2057(*uParam0, 10, 1, 1);
			aggregate_func_2057(*uParam0, 14, 1, 1);
			aggregate_func_2057(*uParam0, 19, 1, 1);
			aggregate_func_2057(*uParam0, 20, 1, 1);
			aggregate_func_2057(*uParam0, 4, 1, 0);
			aggregate_func_2057(*uParam0, 2, 1, 0);
		}
		else
		{
			aggregate_func_4583(*uParam0, 1, 1, 1);
		}
		if (!aggregate_func_2875(*uParam1))
		{
			*uParam1 = aggregate_func_2045(aggregate_func_1965(aggregate_func_2879(bVar0), joaat("COLOR_PURE_WHITE")), iVar1, 2, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			aggregate_func_2057(*uParam1, 13, 1, 1);
			aggregate_func_2057(*uParam1, 10, 1, 1);
			aggregate_func_2057(*uParam1, 14, 1, 1);
			aggregate_func_2057(*uParam1, 4, 1, 0);
			aggregate_func_2057(*uParam1, 2, 1, 0);
		}
		else
		{
			aggregate_func_4583(*uParam1, 1, 1, 1);
		}
		aggregate_func_4823(*uParam1, 0, 1);
	}
}

void func_124(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !aggregate_func_2875(iParam0))
	{
		return;
	}
	iVar0 = aggregate_func_4270(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1949749)[iVar0 /*23*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(((*Global_1949749)[iVar0 /*23*/])->f_3, MISC::_CREATE_VAR_STRING(6, sParam1, sParam2));
}

bool func_125()
{
	if (Local_21.f_1)
	{
		aggregate_func_4583(Local_59.f_37, 0, 1, 1);
		return false;
	}
	if (Local_21)
	{
		aggregate_func_4583(Local_59.f_37, 0, 1, 1);
		return false;
	}
	if (!aggregate_func_4574(500))
	{
		aggregate_func_4583(Local_59.f_37, 0, 1, 1);
		return false;
	}
	if (Local_21.f_24 == 1)
	{
		aggregate_func_4583(Local_59.f_37, 0, 1, 1);
		return false;
	}
	if (Local_21.f_6)
	{
		aggregate_func_4583(Local_59.f_37, 0, 1, 1);
		return false;
	}
	if (Global_1051387->f_4537 && Global_1051387->f_4537.f_4 <= 1)
	{
		aggregate_func_4583(Local_59.f_37, 0, 1, 1);
		return false;
	}
	return true;
}

void func_128()
{
	if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
	{
		if (Local_59.f_208 > Local_59.f_204)
		{
			Local_59.f_208 = 0;
		}
		if (Local_59.f_208 < 0)
		{
			Local_59.f_208 = Local_59.f_204;
		}
		if (Local_59.f_208 != 0)
		{
			(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 = &Local_59.f_197[(Local_59.f_208 - 1)];
			Local_59.f_31 = 0;
		}
		else
		{
			(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_8 = 0;
		}
	}
	(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_9 = 1;
}

void func_129()
{
	if (aggregate_func_2875(Local_59.f_33))
	{
		aggregate_func_4583(Local_59.f_33, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_34))
	{
		aggregate_func_4583(Local_59.f_34, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_32))
	{
		aggregate_func_4583(Local_59.f_32, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_35))
	{
		aggregate_func_4583(Local_59.f_35, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_49))
	{
		aggregate_func_4583(Local_59.f_49, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_37))
	{
		aggregate_func_4583(Local_59.f_37, 0, 1, 1);
	}
	func_167(Local_59.f_39);
	func_167(Local_59.f_41);
	func_167(Local_59.f_43);
	func_167(Local_59.f_45);
	if (aggregate_func_2875(Local_59.f_40))
	{
		aggregate_func_4583(Local_59.f_40, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_42))
	{
		aggregate_func_4583(Local_59.f_42, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_44))
	{
		aggregate_func_4583(Local_59.f_44, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_46))
	{
		aggregate_func_4583(Local_59.f_46, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_48))
	{
		aggregate_func_4583(Local_59.f_48, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_36))
	{
		aggregate_func_4583(Local_59.f_36, 0, 1, 1);
	}
	if (aggregate_func_2875(Local_59.f_38))
	{
		aggregate_func_4583(Local_59.f_38, 0, 1, 1);
	}
}

bool func_137()
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!Local_59.f_60)
	{
		return false;
	}
	fVar0 = PAD::GET_CONTROL_NORMAL(2, Local_59.f_59);
	if ((fVar0 > 0.75f && Local_59.f_59 != joaat("INPUT_MOVE_UP_ONLY")) && Local_59.f_127 < (Local_59.f_193 - 1))
	{
		bVar1 = true;
	}
	else if ((fVar0 < -0.75f || (Local_59.f_59 == joaat("INPUT_MOVE_UP_ONLY") && fVar0 > 0.75f)) && Local_59.f_127 > 0)
	{
		bVar2 = true;
	}
	if (bVar1 || bVar2)
	{
		iVar4 = Local_59.f_127;
		while (iVar4 < Local_59.f_193 && iVar4 >= 0)
		{
			if (bVar1)
			{
				iVar4++;
			}
			else
			{
				iVar4 = (iVar4 - 1);
			}
			if (iVar4 >= Local_59.f_193 || iVar4 < 0)
			{
			}
			else
			{
				if (aggregate_func_2852(&(Local_59.f_130[iVar4]), func_35(Local_59.f_128)))
				{
					if (!bVar3)
					{
						Local_59.f_127 = iVar4;
						if (Global_1051387->f_4537)
						{
							(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5 = &Local_59.f_151[iVar4];
							Local_59.f_195 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7;
							(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7 = &Local_59.f_172[iVar4];
							if (bVar1)
							{
								(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 = 0;
							}
							else
							{
								(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 = 1;
							}
						}
						else
						{
							Local_59.f_205 = &Local_59.f_151[iVar4];
							if (bVar1)
							{
								Local_59.f_206 = 0;
							}
							else
							{
								Local_59.f_206 = 1;
							}
						}
						if (Local_59.f_59 != joaat("INPUT_MOVE_UD"))
						{
							aggregate_func_2878(&(Local_59.f_33), 1, 1);
							Local_59.f_59 = joaat("INPUT_MOVE_UD");
							Local_59.f_33 = aggregate_func_2045("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_59.f_59, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
							aggregate_func_2057(Local_59.f_33, 4, 1, 0);
						}
						bVar3 = true;
					}
					else
					{
						return true;
					}
				}
			}
		}
		if (bVar3)
		{
			if (bVar1)
			{
				aggregate_func_2878(&(Local_59.f_33), 1, 1);
				Local_59.f_59 = joaat("INPUT_MOVE_UP_ONLY");
				Local_59.f_33 = aggregate_func_2045("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_59.f_59, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				aggregate_func_2057(Local_59.f_33, 4, 1, 0);
			}
			else
			{
				aggregate_func_2878(&(Local_59.f_33), 1, 1);
				Local_59.f_59 = joaat("INPUT_MOVE_DOWN_ONLY");
				Local_59.f_33 = aggregate_func_2045("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_59.f_59, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
				aggregate_func_2057(Local_59.f_33, 4, 1, 0);
			}
			return true;
		}
	}
	return false;
}

void func_138()
{
	if (!Global_1051387->f_4537)
	{
		return;
	}
	if (Local_59.f_195 == (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7)
	{
		return;
	}
	if (Local_59.f_195 != 0)
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_59.f_194, func_108(Local_59.f_195), true, false);
	}
	Local_59.f_196 = 0;
}

bool func_139()
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	fVar0 = PAD::GET_CONTROL_NORMAL(2, aggregate_func_5095(Local_59.f_34));
	if (fVar0 > 0.75f || fVar0 < -0.75f)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (fVar0 > 0.75f)
			{
				Local_59.f_128++;
				if (Local_59.f_128 >= 4)
				{
					Local_59.f_128 = 0;
				}
			}
			else
			{
				Local_59.f_128 = (Local_59.f_128 - 1);
				if (Local_59.f_128 < 0)
				{
					Local_59.f_128 = 3;
				}
			}
			iVar2 = 0;
			bVar3 = false;
			Local_59.f_60 = 0;
			iVar2 = 0;
			while (iVar2 < Local_59.f_193)
			{
				if (aggregate_func_2852(&(Local_59.f_130[iVar2]), func_35(Local_59.f_128)))
				{
					if (!bVar3)
					{
						Local_59.f_127 = iVar2;
						if (fVar0 > 0.75f)
						{
							Local_59.f_63 = 0;
						}
						else
						{
							Local_59.f_63 = 1;
						}
						if (Global_1051387->f_4537)
						{
							(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_5 = &Local_59.f_151[iVar2];
							Local_59.f_195 = (Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7;
							(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_7 = &Local_59.f_172[iVar2];
							if (fVar0 > 0.75f)
							{
								(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 = 2;
							}
							else
							{
								(Local_483[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/])->f_6 = 3;
							}
						}
						else
						{
							Local_59.f_205 = &Local_59.f_151[iVar2];
							if (fVar0 > 0.75f)
							{
								Local_59.f_206 = 2;
							}
							else
							{
								Local_59.f_206 = 3;
							}
						}
						bVar3 = true;
					}
					else
					{
						Local_59.f_60 = 1;
					}
					else
					{
						iVar2++;
					}
					if (bVar3)
					{
						aggregate_func_2878(&(Local_59.f_33), 1, 1);
						Local_59.f_59 = joaat("INPUT_MOVE_DOWN_ONLY");
						Local_59.f_33 = aggregate_func_2045("PHOTO_STUDIO_CHANGE_BACKGROUND", Local_59.f_59, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
						aggregate_func_2057(Local_59.f_33, 4, 1, 0);
						aggregate_func_4583(Local_59.f_33, Local_59.f_60, 1, 1);
						return true;
					}
					iVar1++;
					return false;
				}
			}
		}
	}
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = false;
	if (aggregate_func_2875(iParam0))
	{
		if (Global_1051387->f_4537.f_7 != 6 && Global_1051387->f_4537.f_7 != 13)
		{
			if (aggregate_func_455(iParam0, 1))
			{
				bVar0 = true;
				if (aggregate_func_5303(iParam2, &bVar1))
				{
					TASK::_TASK_EMOTE(func_59(), aggregate_func_5106(iParam2), 1, bVar1, true, false, false, true);
					Local_59.f_47 = iParam0;
					func_39(6);
					func_129();
					aggregate_func_4583(Local_59.f_37, 1, 1, 1);
					aggregate_func_4583(Local_59.f_48, 1, 1, 1);
					aggregate_func_4823(Local_59.f_48, 1, 1);
				}
			}
		}
		else if (!aggregate_func_455(iParam0, 1) && Local_59.f_47 == iParam0)
		{
			aggregate_func_4583(iParam0, 0, 1, 1);
			aggregate_func_4583(Local_59.f_48, 0, 1, 1);
			aggregate_func_4823(Local_59.f_48, 0, 1);
			TASK::_0xBDFEEB7600BCD938(func_59());
			Local_59.f_47 = 0;
		}
	}
	if (aggregate_func_2875(iParam1))
	{
		if (aggregate_func_2927(iParam1, 1))
		{
			bVar0 = true;
			if (aggregate_func_5303(iParam2, &bVar2))
			{
				TASK::_TASK_EMOTE(func_59(), aggregate_func_4271(iParam2), 2, bVar2, false, true, false, true);
				Local_59.f_47 = iParam0;
				func_129();
				aggregate_func_4583(Local_59.f_37, 1, 1, 1);
				func_39(7);
			}
		}
	}
	if (bVar0)
	{
		Global_1051387->f_4537.f_5 = iParam2;
	}
}

void func_143()
{
	UIAPPS::_LAUNCH_APP_WITH_ENTRY("social_club_feed", "launch_to_photos");
}

void func_151()
{
	StringCopy(&(Local_21.f_11), "-", 32);
	StringConCat(&(Local_21.f_11), " / ", 32);
	StringCopy(&(Local_21.f_15), "-", 32);
	StringConCat(&(Local_21.f_11), &(Local_21.f_15), 32);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Local_21.f_10, &(Local_21.f_11));
}

void func_167(int iParam0)
{
	if (aggregate_func_2875(iParam0))
	{
		if (Global_1051387->f_4537.f_7 != 6 || iParam0 != Local_59.f_47)
		{
			aggregate_func_4583(iParam0, 0, 1, 1);
		}
	}
}

