#region Local Var
	int iLocal_0[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_33[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	vector3 vLocal_66[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	vector3 vLocal_166[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_263[5] = { 0, 0, 0, 0, 0 };
	int iLocal_269[5] = { 0, 0, 0, 0, 0 };
	int iLocal_275[5] = { 0, 0, 0, 0, 0 };
	int iLocal_281 = 0;
	int iLocal_282[5] = { 0, 0, 0, 0, 0 };
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	var uLocal_290[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_323 = 0;
	int iLocal_324 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2())
	{
		switch (iLocal_324)
		{
			case 0:
				func_3();
				iLocal_324 = 1;
				break;
			case 1:
				func_4();
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;

	func_5();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_6(iVar0, 1);
		iVar0++;
	}
	if (aggregate_func_7689(1))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			AUDIO::RELEASE_SOUND_ID(&(iLocal_275[iVar0]));
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			AUDIO::RELEASE_SOUND_ID(&(iLocal_282[iVar0]));
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			AUDIO::RELEASE_SOUND_ID(&(iLocal_263[iVar0]));
			iVar0++;
		}
		AUDIO::_0x531A78D6BF27014B(func_8());
	}
	if (aggregate_func_7689(2))
	{
		STREAMING::REMOVE_ANIM_DICT(func_9());
	}
	if (aggregate_func_7689(4))
	{
		STREAMING::REMOVE_PTFX_ASSET();
	}
	func_10();
}

bool func_2()
{
	if (aggregate_func_523(1, 1))
	{
		return true;
	}
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return true;
	}
	if (aggregate_func_7689(32))
	{
		return true;
	}
	return false;
}

void func_3()
{
	int iVar0;

	iLocal_289 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		*(vLocal_166[iVar0 /*3*/]) = { 0f, 0f, 0f };
		func_12(4, iVar0);
		iVar0++;
	}
}

void func_4()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	int iVar18;
	int iVar19;

	if (aggregate_func_7689(16))
	{
		aggregate_func_7859(16);
	}
	bVar8 = false;
	iVar3 = 0;
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (!&Global_1273882->f_22[iVar4])
		{
			func_6(iVar4, 0);
		}
		else
		{
			iVar18 = &Global_1273882->f_154[iVar4];
			iVar19 = PLAYER::GET_PLAYER_PED(iVar18);
			if (iVar19 == Global_35)
			{
				bVar5 = true;
				vVar12 = { Global_36 };
			}
			else
			{
				bVar5 = false;
				vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar19, true, false) };
				fVar2 = BUILTIN::VDIST2(Global_36, vVar12);
				if (fVar2 > 2500f)
				{
					func_6(iVar4, 0);
				}
				else
				{
					vVar9 = { func_14(iVar19, iVar4, bVar5) };
					vVar15 = { vVar12 };
					vVar15.f_2 = (vVar15.z - 1f);
					fVar0 = BUILTIN::VDIST(vVar15, vVar9);
					fVar1 = ((80f - fVar0) / 80f);
					fVar1 = aggregate_func_4333(fVar1, 0f, 1f);
					bVar7 = false;
					bVar6 = false;
					if (!bVar5)
					{
						if (aggregate_func_4268(vVar9))
						{
							func_6(iVar4, 0);
						}
						else
						{
							iVar3++;
							func_17(iVar19, iVar4, bVar5, &bVar7);
							if (!bVar7)
							{
								func_6(iVar4, bVar5);
								if (bVar5)
								{
									func_5();
								}
							}
							else if (ENTITY::DOES_ENTITY_EXIST(&(iLocal_0[iVar4])))
							{
								if (!aggregate_func_7846(256, iVar4))
								{
									func_12(256, iVar4);
								}
								if (bVar5)
								{
									if (!aggregate_func_7689(512))
									{
										aggregate_func_4322(815, 0);
										aggregate_func_7859(512);
									}
									iVar3++;
									if (aggregate_func_4268(vVar9) || fVar0 > 80f)
									{
										func_21();
										func_5();
										func_22(iVar4);
									}
									else
									{
										func_23(fVar0, fVar1);
										func_24();
										if (!aggregate_func_7689(256))
										{
											bVar8 = true;
										}
										else
										{
											if (!bVar5)
											{
												if (fVar2 < 225f)
												{
													if (!aggregate_func_7846(128, iVar4))
													{
														func_12(128, iVar4);
													}
												}
												else if (aggregate_func_7846(128, iVar4))
												{
													func_25(128, iVar4);
												}
											}
											if (aggregate_func_7846(4, iVar4))
											{
												func_25(4, iVar4);
											}
											func_26(iVar4, bVar5, fVar0, fVar1, &bVar6);
											func_27(iVar4, fVar1);
											if (bVar6)
											{
												func_28(bVar5, iVar4);
											}
											else
											{
												func_29(iVar4);
											}
										}
									}
									iVar4++;
									if (bVar8)
									{
										if ((func_30() && func_31()) && func_32())
										{
											aggregate_func_7859(256);
										}
									}
									iLocal_289++;
									if (iLocal_289 >= 32)
									{
										iLocal_289 = 0;
										if (!aggregate_func_7689(128))
										{
											aggregate_func_7859(128);
										}
									}
									if (iVar3 == 0 && aggregate_func_7689(128))
									{
										aggregate_func_7859(32);
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

void func_5()
{
	if (aggregate_func_7689(8))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "DigSiteX");
		DECORATOR::DECOR_REMOVE(Global_35, "DigSiteY");
		DECORATOR::DECOR_REMOVE(Global_35, "DigSiteZ");
		aggregate_func_7859(8);
	}
}

void func_6(int iParam0, bool bParam1)
{
	if (!aggregate_func_7846(256, iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_10();
	}
	func_22(iParam0);
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iLocal_0[iParam0]);
	iLocal_0[iParam0] = 0;
	func_25(256, iParam0);
}

char* func_8()
{
	return "RDRO_Metal_Detector_Sounds";
}

char* func_9()
{
	return "mech_weapons_dual@metaldetector@operate";
}

void func_10()
{
	if (aggregate_func_7689(64))
	{
		PAD::_0xA0CEFCEA390AAB9B(0);
		aggregate_func_7859(64);
	}
}

void func_12(int iParam0, int iParam1)
{
	aggregate_func_4241(uLocal_290[iParam1], iParam0);
}

Vector3 func_14(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return *Global_1199509;
	}
	return func_36(iParam0, iParam1);
}

void func_17(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (bParam2)
	{
		if (Global_1939168->f_38 == -862059856)
		{
			*bParam3 = 1;
			if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_0[iParam1])))
			{
				iLocal_0[iParam1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, 0));
			}
		}
	}
	else if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false))
	{
		if (iVar0 == -862059856)
		{
			*bParam3 = 1;
			if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_0[iParam1])))
			{
				iLocal_0[iParam1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, 0));
			}
		}
	}
	if (!*bParam3)
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 1, false))
		{
			if (iVar0 == -862059856)
			{
				*bParam3 = 1;
				if (!ENTITY::DOES_ENTITY_EXIST(&(iLocal_0[iParam1])))
				{
					iLocal_0[iParam1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0, 1));
				}
			}
		}
	}
}

void func_21()
{
	if (!aggregate_func_7689(64))
	{
		PAD::_0xF239400E16C23E08(0, 0);
		aggregate_func_7859(64);
	}
}

void func_22(int iParam0)
{
	if (aggregate_func_7846(4, iParam0))
	{
		return;
	}
	if (aggregate_func_7846(2, iParam0))
	{
		OBJECT::_0xF49574E2332A8F06(&(iLocal_0[iParam0]), 0f);
		func_25(2, iParam0);
	}
	if (aggregate_func_7846(32, iParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(&(iLocal_33[iParam0]), true);
		func_25(32, iParam0);
	}
	if (aggregate_func_7846(16, iParam0))
	{
		ENTITY::STOP_ENTITY_ANIM(&(iLocal_0[iParam0]), func_40(), func_9(), -1000f);
		func_25(16, iParam0);
	}
	func_29(iParam0);
	func_12(4, iParam0);
}

void func_23(float fParam0, float fParam1)
{
	PED::_0x437C08DB4FEBE2BD(Global_35, "MetalDetectorDistanceToDigSite", fParam0, 10);
	PED::_0x437C08DB4FEBE2BD(Global_35, "MetalDetectorDetectionValue", fParam1, 10);
}

void func_24()
{
	if (!aggregate_func_7689(8))
	{
		DECORATOR::DECOR_SET_FLOAT(Global_35, "DigSiteX", &Global_1199509);
		DECORATOR::DECOR_SET_FLOAT(Global_35, "DigSiteY", Global_1199509->f_1);
		DECORATOR::DECOR_SET_FLOAT(Global_35, "DigSiteZ", Global_1199509->f_2);
		aggregate_func_7859(8);
	}
}

void func_25(int iParam0, int iParam1)
{
	aggregate_func_4243(uLocal_290[iParam1], iParam0);
}

void func_26(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4)
{
	int iVar0;
	float fVar1;
	int iVar2;
	bool bVar3;

	iVar0 = BUILTIN::FLOOR(aggregate_func_4928(BUILTIN::TO_FLOAT(3000), BUILTIN::TO_FLOAT(30), fParam3));
	fVar1 = aggregate_func_4928(1400f, 2000f, fParam3);
	iVar2 = (iVar0 / 6);
	bVar3 = false;
	if (fParam2 < 1.6f)
	{
		*bParam4 = 1;
		bVar3 = true;
	}
	else if (!aggregate_func_7846(1, iParam0))
	{
		if (!aggregate_func_4260(vLocal_66[iParam0 /*3*/]) || aggregate_func_1526(vLocal_66[iParam0 /*3*/]) > iVar0)
		{
			aggregate_func_4283(vLocal_66[iParam0 /*3*/]);
			func_12(1, iParam0);
			bVar3 = true;
		}
	}
	else if (aggregate_func_1526(vLocal_66[iParam0 /*3*/]) < iVar2)
	{
		bVar3 = true;
	}
	else
	{
		func_25(1, iParam0);
	}
	if (bVar3)
	{
		func_45(bParam1, iParam0);
		if (bParam1)
		{
			func_10();
			if (!aggregate_func_4260(&uLocal_163))
			{
				aggregate_func_4283(&uLocal_163);
			}
			if (aggregate_func_1526(&uLocal_163) < 5000)
			{
				PAD::SET_PAD_SHAKE(0, 68, 110);
			}
			else if (aggregate_func_1526(&uLocal_163) >= 7000)
			{
				aggregate_func_4283(&uLocal_163);
			}
		}
		if (!aggregate_func_7846(32, iParam0))
		{
			iLocal_33[iParam0] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(func_46(), &(iLocal_0[iParam0]), func_47(), aggregate_func_4952(), ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(&(iLocal_0[iParam0]), func_49()), 1f, false, false, false);
			func_12(32, iParam0);
		}
		if (!aggregate_func_7846(2, iParam0))
		{
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(&(iLocal_33[iParam0]), func_50(), fParam3, true);
			func_12(2, iParam0);
		}
		OBJECT::_0xF49574E2332A8F06(&(iLocal_0[iParam0]), (fVar1 * func_51()));
	}
	else
	{
		if (bParam1)
		{
			if (aggregate_func_4260(&uLocal_163))
			{
				aggregate_func_4313(&uLocal_163);
			}
			func_21();
		}
		if (aggregate_func_7846(2, iParam0))
		{
			OBJECT::_0xF49574E2332A8F06(&(iLocal_0[iParam0]), 0f);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(&(iLocal_33[iParam0]), func_50(), 0f, true);
			func_25(2, iParam0);
		}
	}
}

void func_27(int iParam0, float fParam1)
{
	if (!aggregate_func_7846(16, iParam0))
	{
		if (ENTITY::PLAY_ENTITY_ANIM(&(iLocal_0[iParam0]), func_40(), func_9(), 1000f, true, false, false, 0f, 0))
		{
			func_12(16, iParam0);
			if (!aggregate_func_7846(64, iParam0))
			{
				func_12(64, iParam0);
			}
		}
	}
	else if (iLocal_289 == iParam0 || aggregate_func_7846(64, iParam0))
	{
		ENTITY::_0xEAA885BA3CEA4E4A(&(iLocal_0[iParam0]), func_9(), func_40(), (fParam1 * 2f));
		if (aggregate_func_7846(64, iParam0))
		{
			func_25(64, iParam0);
		}
	}
}

void func_28(bool bParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	if (aggregate_func_7846(8, iParam1))
	{
		return;
	}
	if (!bParam0 && !aggregate_func_7846(128, iParam1))
	{
		return;
	}
	iVar0 = func_53(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	sVar1 = func_8();
	sVar2 = func_54();
	if (bParam0)
	{
		iVar3 = Global_35;
	}
	else
	{
		iVar3 = &iLocal_0[iParam1];
	}
	AUDIO::_0xF1C5310FEAA36B48(iVar0, sVar2, iVar3, sVar1, false, 0);
	func_12(8, iParam1);
}

void func_29(int iParam0)
{
	int iVar0;

	if (!aggregate_func_7846(8, iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0, 1);
	if (iVar0 != -1)
	{
		AUDIO::_0x3210BCB36AF7621B(iVar0);
	}
	func_25(8, iParam0);
}

int func_30()
{
	int iVar0;

	if (aggregate_func_7689(1))
	{
		return 1;
	}
	if (AUDIO::_0xD9130842D7226045(func_8(), 0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iLocal_275[iVar0] = AUDIO::GET_SOUND_ID();
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iLocal_282[iVar0] = AUDIO::GET_SOUND_ID();
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iLocal_263[iVar0] = AUDIO::GET_SOUND_ID();
			iLocal_269[iVar0] = -1;
			iVar0++;
		}
		aggregate_func_7859(1);
		return 1;
	}
	return 0;
}

int func_31()
{
	if (aggregate_func_7689(2))
	{
		return 1;
	}
	STREAMING::REQUEST_ANIM_DICT(func_9());
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_9()))
	{
		aggregate_func_7859(2);
		return 1;
	}
	return 0;
}

int func_32()
{
	if (aggregate_func_7689(4))
	{
		return 1;
	}
	STREAMING::REQUEST_PTFX_ASSET();
	if (STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		aggregate_func_7859(4);
		return 1;
	}
	return 0;
}

Vector3 func_36(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (func_56(iParam1))
	{
		vVar0 = { 0f, 0f, 0f };
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "DigSiteX"))
		{
			vVar0.x = DECORATOR::DECOR_GET_FLOAT(iParam0, "DigSiteX");
			vVar0.f_1 = DECORATOR::DECOR_GET_FLOAT(iParam0, "DigSiteY");
			vVar0.f_2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "DigSiteZ");
		}
		*(vLocal_166[iParam1 /*3*/]) = { vVar0 };
	}
	return *(vLocal_166[iParam1 /*3*/]);
}

char* func_40()
{
	return "spin_dial";
}

void func_45(bool bParam0, int iParam1)
{
	char* sVar0;
	char* sVar1;

	if (aggregate_func_7846(2, iParam1))
	{
		return;
	}
	if (!bParam0)
	{
		if (!aggregate_func_7846(128, iParam1) || aggregate_func_7689(16))
		{
			return;
		}
	}
	sVar0 = func_8();
	sVar1 = func_67();
	if (bParam0)
	{
		AUDIO::_0xF1C5310FEAA36B48(&(iLocal_275[iLocal_281]), sVar1, Global_35, sVar0, false, 0);
		iLocal_281++;
		if (iLocal_281 >= 5)
		{
			iLocal_281 = 0;
		}
	}
	else
	{
		AUDIO::_0xF1C5310FEAA36B48(&(iLocal_282[iLocal_288]), sVar1, &(iLocal_0[iParam1]), sVar0, false, 0);
		iLocal_288++;
		if (iLocal_288 >= 5)
		{
			iLocal_288 = 0;
		}
		aggregate_func_7859(16);
	}
}

char* func_46()
{
	return "scr_mp_metal_detector_sparks";
}

Vector3 func_47()
{
	return 0f, -0.09f, 0f;
}

char* func_49()
{
	return "Detector_Spin_Bone";
}

char* func_50()
{
	return "intensity";
}

float func_51()
{
	int iVar0;
	int iVar1;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	if ((iVar0 == 5 && iVar1 >= 30) || (iVar0 == 6 && iVar1 < 30))
	{
		return func_68(0, 5, 30, 3600);
	}
	if ((iVar0 == 19 && iVar1 >= 45) || (iVar0 == 20 && iVar1 < 20))
	{
		return func_68(1, 19, 45, 2100);
	}
	if (((iVar0 > 6 && iVar0 < 19) || (iVar0 == 6 && iVar1 >= 30)) || (iVar0 == 19 && iVar1 < 45))
	{
		return 1000f;
	}
	return 1f;
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (&iLocal_269[iVar1] == -1 || &iLocal_269[iVar1] == iParam0)
		{
			iVar0 = &iLocal_263[iVar1];
			if (&iLocal_269[iVar1] != iParam0)
			{
				iLocal_269[iVar1] = iParam0;
			}
			return iVar0;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_54()
{
	return "Metal_Detector_Spin";
}

int func_55(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (&iLocal_269[iVar1] == iParam0)
		{
			iVar0 = &iLocal_263[iVar1];
			if (bParam1)
			{
				iLocal_269[iVar1] = -1;
			}
			return iVar0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_56(int iParam0)
{
	return (iLocal_289 % 8) == (iParam0 / 4);
}

char* func_67()
{
	return "Metal_Detector";
}

float func_68(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar0 = (CLOCK::GET_CLOCK_HOURS() - iParam1);
	iVar1 = (CLOCK::GET_CLOCK_MINUTES() - iParam2);
	iVar2 = ((CLOCK::GET_CLOCK_SECONDS() + iVar1 * 60) + iVar0 * 3600);
	fVar3 = (BUILTIN::TO_FLOAT(iVar2) / IntToFloat(iParam3));
	fVar3 = aggregate_func_4333(fVar3, 0f, 1f);
	if (bParam0)
	{
		return aggregate_func_4928(1000f, 1f, fVar3);
	}
	return aggregate_func_4928(1f, 1000f, fVar3);
}

