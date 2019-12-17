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
	var uLocal_18 = 3;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	int iLocal_70 = 0;
	bool bLocal_71 = false;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	bLocal_71 = true;
	iLocal_45 = iScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (aggregate.angryisolationist.func_40(iLocal_45) && iLocal_46 != 7)
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	int iVar0;

	LAW::_0x29CD4896ECB66C12();
	PLAYER::SET_POLICE_RADAR_BLIPS(false);
	MISC::ENABLE_DISPATCH_SERVICE(8, false);
	VOLUME::_0x43F867EF5C463A53(iLocal_60);
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		if (aggregate.barcustomer_interaction.func_12(&(iLocal_50[iVar0]), 0))
		{
			aggregate.fishing_core.func_117(iLocal_50[iVar0], 1, 0, 1);
		}
		iVar0++;
	}
	if (PED::DOES_GROUP_EXIST(iLocal_49))
	{
		PED::REMOVE_GROUP(iLocal_49);
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iLocal_46 = 1;
	PED::_0xED9582B3DA8F02B4(9);
	switch (iLocal_45)
	{
		case 81:
			vLocal_64 = { -297.8979f, 783.4763f, 117.3506f };
			iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-266.4598f, 686.257f, 121.6327f, 0f, 0f, 29.92756f, 64.32985f, 90.86015f, 10f, "Main Town");
			iVar1 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-301.8687f, 775.7222f, 117.88f, 0f, 0f, 111.0193f, 113.049f, 150.2262f, 41.61763f, "Stockyard");
			iLocal_60 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volTownMob Valentine Agg");
			VOLUME::_0x6E0D3C3F828DA773(iLocal_60, iVar0);
			VOLUME::_0x6E0D3C3F828DA773(iLocal_60, iVar1);
			break;
		case 26:
			vLocal_64 = { -1791.522f, -395.2781f, 159.2376f };
			iLocal_60 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1789.582f, -395.4769f, 153.0447f, 0f, 0f, -30.95195f, 70.53338f, 56.72839f, 31.99624f, "m_volTownMob Strawberry");
			break;
		case 111:
			vLocal_64 = { 1323.98f, -1305.5f, 75.625f };
			iLocal_60 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1334.686f, -1305.615f, 86f, 0f, 0f, 65.0729f, 82.5293f, 147.408f, 20f, "m_volTownMob Rhodes Agg");
			break;
		default:
			iLocal_60 = aggregate.fme_animal_tagging.func_1642(iLocal_45);
			vLocal_64 = { aggregate.net_main_offline.func_4241(iLocal_45, 1) };
			break;
	}
	iVar2 = 0;
	func_9(&iVar2, 0);
	func_9(&iVar2, 29);
	COMPANION::_0x3CAAD93FA5B9579A(iLocal_60, 2, iVar2);
}

void func_4()
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	switch (iLocal_46)
	{
		case 1:
			if (aggregate.fishing_core.func_39(Global_35, vLocal_64, 1) < 100f)
			{
				iLocal_48 = func_11(0, 2, -156825994, 1, 0, 0f, 0f, 0f);
				switch (iLocal_45)
				{
					case 81:
						iLocal_47 = joaat("a_m_m_valdeputyresident_01");
						break;
					case 26:
						iLocal_47 = joaat("a_m_m_strdeputyresident_01");
						break;
					case 111:
						iLocal_47 = joaat("a_m_m_rhddeputyresident_01");
						break;
					default:
						iLocal_47 = joaat("a_m_m_valdeputyresident_01");
						break;
				}
				iLocal_46 = 2;
			}
			else
			{
				iLocal_46 = 6;
			}
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_48, false);
			STREAMING::REQUEST_MODEL(iLocal_47, false);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_48) && STREAMING::HAS_MODEL_LOADED(iLocal_47)) && PED::_0x5E420FF293EE5472())
			{
				iLocal_46 = 4;
			}
			break;
		case 4:
			if (func_12())
			{
				func_13();
				aggregate.barcustomer_interaction.func_43(&uLocal_61);
				iLocal_46 = 5;
			}
			else
			{
				iLocal_46 = 6;
			}
			break;
		case 5:
			if (bLocal_71)
			{
				LAW::_0x7EF2A2FE38D74456(aggregate.region_law_rho_law_swarm.func_5(1), 1);
			}
			fVar0 = 150f;
			iVar3 = 0;
			while (iVar3 < iLocal_50)
			{
				if (aggregate.barcustomer_interaction.func_12(&(iLocal_50[iVar3]), 0))
				{
					iVar2++;
					fVar1 = aggregate.fishing_core.func_39(&(iLocal_50[iVar3]), Global_36, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
				iVar3++;
			}
			if (iVar2 <= 2)
			{
				bLocal_71 = false;
				LAW::_0x7EF2A2FE38D74456(aggregate.region_law_rho_law_swarm.func_5(1), 0);
			}
			if (iVar2 <= 0 || fVar0 >= 150f)
			{
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < iLocal_50)
				{
					if (aggregate.barcustomer_interaction.func_12(&(iLocal_50[iVar3]), 0))
					{
						func_16(&(iLocal_50[iVar3]));
					}
					iVar3++;
				}
				iLocal_46 = 6;
			}
			break;
		case 6:
			iVar4 = 0;
			while (iVar4 < iLocal_50)
			{
				if (aggregate.barcustomer_interaction.func_12(&(iLocal_50[iVar4]), 0))
				{
					aggregate.fishing_core.func_117(iLocal_50[iVar4], 1, 1, 1);
				}
				iVar4++;
			}
			LAW::_0x7EF2A2FE38D74456(aggregate.region_law_rho_law_swarm.func_5(1), 0);
			iLocal_46 = 7;
			break;
	}
}

void func_9(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

int func_11(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, vector3 vParam5)
{
	if (!aggregate.aberdeenpigfarm.func_88(iParam0))
	{
		return 0;
	}
	if (func_20(iParam0) == -1)
	{
		return 0;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(func_20(iParam0), iParam1, iParam2, iParam3, iParam4, vParam5);
}

bool func_12()
{
	float fVar0;

	if (!func_21(iLocal_45, &vLocal_67, iLocal_47))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, vLocal_67);
	if (fVar0 > 10000f)
	{
		return false;
	}
	if (fVar0 < 1225f)
	{
		return false;
	}
	if (CAM::IS_SPHERE_VISIBLE(vLocal_67, 2f) || !ENTITY::WOULD_ENTITY_BE_OCCLUDED(iLocal_47, vLocal_67, true))
	{
		return false;
	}
	iLocal_70 = VOLUME::_CREATE_VOLUME_CYLINDER(vLocal_67, 0f, 0f, 0f, 3f, 3f, 3f);
	func_22(iLocal_70, 0, 0, 0, 0, 0);
	func_23(iLocal_70, 0);
	return true;
}

void func_13()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;

	if (!PED::DOES_GROUP_EXIST(iLocal_49))
	{
		iLocal_49 = PED::CREATE_GROUP(1);
		PED::SET_GROUP_FORMATION_SPACING(iLocal_49, 5f, 1f, 2f);
		PED::SET_GROUP_FORMATION(iLocal_49, 8);
		PED::_0x89E59DBD15E21177(iLocal_49, 0);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_50)
	{
		vVar1 = { aggregate.fme_animal_tagging.func_292(vLocal_67, 3f, 1f) };
		if (iVar0 == 0)
		{
			iLocal_50[iVar0] = aggregate.butchercreek.func_91(iLocal_47, vVar1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_50[iVar0]), 1, false);
			PED::SET_COMBAT_FLOAT(&(iLocal_50[iVar0]), 48, 8f);
			if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("weapon_shotgun_doublebarrel")))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_50[iVar0]), joaat("weapon_shotgun_doublebarrel"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
			else
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_50[iVar0]), joaat("weapon_repeater_carbine"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
		else
		{
			iLocal_50[iVar0] = aggregate.butchercreek.func_91(iLocal_48, vVar1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 180f), 1, 1, 0, 1, 1, 1, 0, 0);
			if (aggregate.barcustomer_interaction.func_12(&(iLocal_50[iVar0]), 0))
			{
				if ((iVar0 % 4) == 0 && (aggregate.aberdeenpigfarm.func_100(aggregate.aberdeenpigfarm.func_99()) >= 22 || aggregate.aberdeenpigfarm.func_100(aggregate.aberdeenpigfarm.func_99()) <= 4))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_50[iVar0]), joaat("weapon_revolver_cattleman"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_50[iVar0]), joaat("weapon_melee_torch"), 999, true, false, 1, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				else
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_50[iVar0]), joaat("weapon_repeater_carbine"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
		}
		if (aggregate.barcustomer_interaction.func_12(&(iLocal_50[iVar0]), 0))
		{
			PED::_0xFC3DB99C8144CD81(&(iLocal_50[iVar0]), iLocal_60, 0, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_50[iVar0]), 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_50[iVar0]), 58, true);
			PED::_0x815C0074A1BC0D93(&(iLocal_50[iVar0]), 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(&(iLocal_50[iVar0]), 1622308690);
			PED::REGISTER_TARGET(&(iLocal_50[iVar0]), Global_35, 1);
			PED::SET_PED_ACCURACY(&(iLocal_50[iVar0]), 60);
			PED::SET_PED_CONFIG_FLAG(&(iLocal_50[iVar0]), 279, true);
			if (iVar0 == 0)
			{
				PED::SET_PED_AS_GROUP_LEADER(&(iLocal_50[iVar0]), iLocal_49, 0);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_50[iVar0]), 155, true);
				COMPANION::_0xCBD9EC60495C728C(iLocal_49);
				COMPANION::_0x0F1CD8CA9E65D5F6(iLocal_49, -1327202964);
			}
			else
			{
				PED::SET_PED_AS_GROUP_MEMBER(&(iLocal_50[iVar0]), iLocal_49);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_50[iVar0]), 156, true);
				PED::SET_PED_CONFIG_FLAG(&(iLocal_50[iVar0]), 152, true);
			}
			iVar4 = MAP::_0x23F74C2FDA6E7C61(joaat("BLIP_STYLE_ENEMY"), &(iLocal_50[iVar0]));
			MAP::_0x662D364ABF16DE2F(iVar4, 2096805056);
			MAP::_0x662D364ABF16DE2F(iVar4, 1086257954);
			PED::_0x1E017404784AA6A3(&(iLocal_50[iVar0]), 1005019729);
			PED::SET_PED_COMBAT_MOVEMENT(&(iLocal_50[iVar0]), 2);
			PED::SET_PED_COMBAT_RANGE(&(iLocal_50[iVar0]), 1);
			PED::_0x9238A3D970BBB0A9(&(iLocal_50[iVar0]), 2018638702);
			iVar5 = 0;
			func_28(&iVar5, 15);
			func_28(&iVar5, 16);
			COMPANION::_0xDEB369F6AD168C58(&(iLocal_50[iVar0]), iVar5);
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	if (!aggregate.barcustomer_interaction.func_12(Global_35, 0))
	{
		return;
	}
	if (!aggregate.barcustomer_interaction.func_12(iParam0, 0))
	{
		return;
	}
	TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 500f, -1, 0, 3f, 0);
	aggregate.fme_escaped_convicts.func_735(iParam0);
	aggregate.fishing_core.func_117(&iParam0, 1, 1, 1);
}

int func_20(int iParam0)
{
	int iVar0;

	if (!aggregate.aberdeenpigfarm.func_88(iParam0))
	{
		return -1;
	}
	iVar0 = aggregate.fme_animal_tagging.func_1642(aggregate.annesburg.func_122());
	if (iVar0 != 1 && iVar0 != 2)
	{
		return Global_1900701[iParam0];
	}
	return Global_1900684[iParam0];
}

bool func_21(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0[4];
	bool bVar13;
	float fVar14;
	int iVar15;
	float fVar16;

	bVar13 = false;
	switch (iParam0)
	{
		case 81:
			*(vVar0[0 /*3*/]) = { -344.5539f, 730.0873f, 116.3921f };
			*(vVar0[1 /*3*/]) = { -281.1094f, 847.3516f, 118.6537f };
			*(vVar0[2 /*3*/]) = { -361.3619f, 809.3384f, 114.9999f };
			*(vVar0[3 /*3*/]) = { -236.5398f, 702.7105f, 112.5291f };
			break;
		case 26:
			*(vVar0[0 /*3*/]) = { -1761.082f, -398.9954f, 154.8396f };
			*(vVar0[1 /*3*/]) = { -1795.016f, -366.7957f, 160.3465f };
			*(vVar0[2 /*3*/]) = { -1834.661f, -433.5942f, 158.4428f };
			*(vVar0[3 /*3*/]) = { -1796.619f, -448.2619f, 156.146f };
			break;
		case 111:
			*(vVar0[0 /*3*/]) = { 1308.71f, -1258.847f, 76.3559f };
			*(vVar0[1 /*3*/]) = { 1317.515f, -1303.441f, 75.2424f };
			*(vVar0[2 /*3*/]) = { 1346.54f, -1354.946f, 77.4856f };
			*(vVar0[3 /*3*/]) = { 1398.272f, -1314.57f, 76.6552f };
			break;
		default:
			*uParam1 = { aggregate.net_main_offline.func_4241(iParam0, 1) };
			return false;
	}
	*uParam1 = { *(vVar0[0 /*3*/]) };
	fVar14 = 999999f;
	iVar15 = 0;
	while (iVar15 < 4)
	{
		if (!CAM::IS_SPHERE_VISIBLE(*(vVar0[iVar15 /*3*/]), 2f) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(iParam2, *(vVar0[iVar15 /*3*/]), true))
		{
			fVar16 = BUILTIN::VDIST2(Global_36, *(vVar0[iVar15 /*3*/]));
			if (bVar13)
			{
				bVar13 = false;
				*uParam1 = { *(vVar0[iVar15 /*3*/]) };
				fVar16 = fVar14;
			}
			else if (fVar16 < fVar14 && !fVar16 < 1225f)
			{
				*uParam1 = { *(vVar0[iVar15 /*3*/]) };
				fVar16 = fVar14;
			}
		}
		else if (iVar15 == 0)
		{
			bVar13 = true;
		}
		iVar15++;
	}
	return true;
}

void func_22(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 512;
	if (iParam1 & 1 != 0)
	{
		iVar0 |= 524288;
	}
	if (iParam1 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam1 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam1 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam1 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::_0x2FCD528A397E5C88(iParam0, iVar0);
}

void func_28(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(1, iVar0));
}

