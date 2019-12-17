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
	int iLocal_18 = 0;
	struct<4> Local_19 = { 0, 0, 0, 0 } ;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	vector3 vLocal_28 = { 0f, 0f, 0f };
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	bool bLocal_36 = false;
	bool bLocal_37 = false;
	int iLocal_38 = 0;
	int iLocal_39[3] = { 0, 0, 0 };
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_55[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_18 = 1;
	iLocal_35 = 10;
	iLocal_38 = joaat("s_m_m_pinlaw_01");
	uScriptParam_0 = uScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (((!aggregate.camera_item.func_106(PLAYER::PLAYER_ID(), 0, 0, 1) && func_3()) && !aggregate.fme_dead_drop.func_811()) && func_5())
	{
		func_6();
		BUILTIN::WAIT(0);
	}
	func_1(1);
}

void func_1(bool bParam0)
{
	int iVar0;

	bLocal_36 = false;
	bLocal_37 = false;
	iLocal_34 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_47)
	{
		if (aggregate.barcustomer_interaction.func_12(&(iLocal_47[iVar0]), 0))
		{
			if (bParam0)
			{
				aggregate.fishing_core.func_117(iLocal_47[iVar0], 1, 1, 1);
				aggregate.fishing_core.func_117(iLocal_55[iVar0], 1, 1, 1);
			}
			else
			{
				if ((aggregate.dynamic_craft_scenario.func_370(Global_35, &(iLocal_47[iVar0]), 1, 1) > 20f && (!ENTITY::IS_ENTITY_ON_SCREEN(&(iLocal_47[iVar0])) || ENTITY::IS_ENTITY_OCCLUDED(&(iLocal_47[iVar0])))) || CAM::IS_SCREEN_FADED_OUT())
				{
					aggregate.fishing_core.func_116(iLocal_47[iVar0]);
				}
				else
				{
					aggregate.fishing_core.func_117(iLocal_47[iVar0], 1, 1, 1);
				}
				if ((aggregate.dynamic_craft_scenario.func_370(Global_35, &(iLocal_55[iVar0]), 1, 1) > 20f && (!ENTITY::IS_ENTITY_ON_SCREEN(&(iLocal_55[iVar0])) || ENTITY::IS_ENTITY_OCCLUDED(&(iLocal_55[iVar0])))) || CAM::IS_SCREEN_FADED_OUT())
				{
					aggregate.fishing_core.func_116(iLocal_55[iVar0]);
				}
				else
				{
					aggregate.fishing_core.func_117(iLocal_55[iVar0], 1, 1, 1);
				}
			}
		}
		iVar0++;
	}
}

bool func_3()
{
	if (aggregate.region_law_patrol_creator.func_16(aggregate.fm_mission_controller.func_7211(), 1))
	{
		return true;
	}
	if (aggregate.region_law_patrol_creator.func_17(aggregate.aberdeenpigfarm.func_66(), 1))
	{
		return true;
	}
	if (aggregate.aberdeenpigfarm.func_82(aggregate.annesburg.func_122()))
	{
		return true;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1938075->f_148))
	{
		if (aggregate.region_law_patrol_creator.func_19())
		{
			return true;
		}
	}
	return false;
}

bool func_5()
{
	if (Global_1938075->f_56)
	{
		return false;
	}
	return true;
}

void func_6()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	vector3 vVar11;
	float fVar14;
	vector3 vVar15;
	int iVar18;
	int iVar19;

	bVar0 = aggregate.annesburg.func_142(Global_35, iLocal_43, 1, 0);
	if (bVar0)
	{
		fLocal_31 = 250f;
		fLocal_32 = 150f;
		if (iLocal_18 > 2 && iLocal_18 != 0)
		{
			iLocal_18 = 0;
		}
	}
	else
	{
		fLocal_31 = 120f;
		fLocal_32 = 110f;
		if (iLocal_18 == 0)
		{
			iLocal_18 = 3;
		}
	}
	switch (iLocal_18)
	{
		case 1:
			aggregate.barcustomer_interaction.func_43(&uLocal_44);
			iLocal_39[0] = -1250098797;
			iLocal_39[1] = -1180427609;
			iLocal_39[2] = -1924405794;
			iLocal_33 = MISC::GET_RANDOM_INT_IN_RANGE(4, 7);
			PED::_0xED9582B3DA8F02B4(14);
			if (!aggregate.blackwater.func_77(135))
			{
				aggregate.binoculars.func_18(135, 0);
			}
			iLocal_18 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_38, false);
			STREAMING::REQUEST_MODEL(&(iLocal_39[0]), false);
			STREAMING::REQUEST_MODEL(&(iLocal_39[1]), false);
			STREAMING::REQUEST_MODEL(&(iLocal_39[2]), false);
			if (((((STREAMING::HAS_MODEL_LOADED(iLocal_38) && STREAMING::HAS_MODEL_LOADED(&(iLocal_39[0]))) && STREAMING::HAS_MODEL_LOADED(&(iLocal_39[1]))) && STREAMING::HAS_MODEL_LOADED(&(iLocal_39[2]))) && PED::_0x5E420FF293EE5472()) && aggregate.fishing_core.func_161(&uLocal_44) > IntToFloat(iLocal_35))
			{
				iLocal_18 = 3;
			}
			break;
		case 3:
			if (bVar0)
			{
				if (aggregate.fme_escaped_convicts.func_724())
				{
					vVar2 = { -1048.537f, -1182.096f, 58.1195f };
				}
				else
				{
					vVar2 = { -1049.912f, -962.8728f, 61.4584f };
				}
			}
			else
			{
				vVar2 = { Global_36 };
			}
			fVar7 = aggregate.fishing_core.func_161(&uLocal_44);
			if (fVar7 < 30f)
			{
				fVar6 = 90f;
			}
			else if (fVar7 < 110f)
			{
				fVar6 = 80f;
			}
			else
			{
				fVar6 = 70f;
			}
			fVar5 = 45f;
			if (aggregate.net_camp_dog.func_156(vVar2, &Local_19, &bVar1, 1, 1, fVar5, 1101004800 /* Float: 20f */, fVar6, (fLocal_31 - 10f), 0))
			{
				if (((!func_27(Local_19.f_3, 0, 0, 0) && !aggregate.annesburg.func_141(iLocal_43, Local_19.f_3)) && (aggregate.blackwater.func_312(Local_19.f_3) == 4 || aggregate.blackwater.func_312(Local_19.f_3) == 12)) && WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Local_19.f_3, 0, &(Local_19.f_3.f_2)) != 1)
				{
					vLocal_28 = { Local_19.f_3 };
					iLocal_18 = 4;
				}
				aggregate.net_coach_holdup.func_94(&Local_19, 1, 0);
			}
			else if (bVar1)
			{
				aggregate.net_coach_holdup.func_94(&Local_19, 1, 0);
			}
			break;
		case 4:
			if (!bLocal_36 && !bLocal_37)
			{
				func_31();
			}
			else if (bLocal_36 && !bLocal_37)
			{
				func_32(MISC::GET_RANDOM_INT_IN_RANGE(0, 3));
			}
			else
			{
				iVar9 = 0;
				while (iVar9 < iLocal_47)
				{
					func_33(iVar9);
					aggregate.fme_escaped_convicts.func_1142(&(iLocal_47[iVar9]), &(iLocal_55[iVar9]), 0, -1, 1);
					bVar10 = false;
					if (iVar9 == 0)
					{
						if (!PED::DOES_GROUP_EXIST(iLocal_63))
						{
							iLocal_63 = PED::CREATE_GROUP(0);
							PED::SET_GROUP_FORMATION(iLocal_63, 9);
						}
						bVar10 = true;
					}
					if (aggregate.barcustomer_interaction.func_12(&(iLocal_47[iVar9]), 0))
					{
						if (aggregate.fishing_core.func_161(&uLocal_44) < fLocal_32 || bVar0)
						{
							if (bVar0)
							{
								vVar11 = { aggregate.fme_animal_tagging.func_292(-1124.641f, -1140.979f, 63.6238f, 30f, 10f) };
							}
							else
							{
								fVar14 = 25f;
								vVar15 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, MISC::GET_RANDOM_FLOAT_IN_RANGE(-80f, 80f), 0f, fVar14, 0f) };
								vVar11 = { aggregate.fme_animal_tagging.func_292(vVar15, (fVar14 - 10f), 10f) };
							}
							aggregate.fme_dead_drop.func_1153(&vVar11, 50, 10, 0, 0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar8);
							TASK::OPEN_SEQUENCE_TASK(&iVar8);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar11, 2.5f, -1, 0.25f, false, 40000f);
							TASK::TASK_STAND_STILL(0, 3000);
							TASK::CLOSE_SEQUENCE_TASK(iVar8);
							TASK::TASK_POLICE(&(iLocal_47[iVar9]), 1);
							TASK::TASK_PERFORM_SEQUENCE(&(iLocal_47[iVar9]), iVar8);
						}
						else if (aggregate.barcustomer_interaction.func_12(Global_35, 0))
						{
							TASK::TASK_COMBAT_PED(&(iLocal_47[iVar9]), Global_35, 0, 0);
						}
						func_37(iLocal_47[iVar9], &iLocal_63, bVar10, 1, 1, 1, 0);
					}
					iVar9++;
				}
				iLocal_18 = 5;
			}
			break;
		case 5:
			iVar19 = 0;
			while (iVar19 < iLocal_47)
			{
				if (aggregate.barcustomer_interaction.func_12(&(iLocal_47[iVar19]), 0))
				{
					if (aggregate.dynamic_craft_scenario.func_370(Global_35, &(iLocal_47[iVar19]), 1, 1) > (fLocal_31 + 20f))
					{
						iVar18++;
					}
				}
				iVar19++;
			}
			if (iVar18 >= iLocal_33)
			{
				func_1(0);
				iLocal_18 = 3;
				return;
			}
			break;
	}
}

bool func_27(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (aggregate.annesburg.func_121(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 8192;
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

void func_31()
{
	if (!CAM::IS_SPHERE_VISIBLE(vLocal_28, 5f))
	{
		iLocal_47[iLocal_34] = aggregate.butchercreek.func_91(iLocal_38, vLocal_28, 0, 1, 1, 0, 1, 1, 1, 0, 0);
		iLocal_34++;
		if (iLocal_34 >= iLocal_33)
		{
			iLocal_34 = 0;
			bLocal_36 = true;
		}
	}
}

void func_32(int iParam0)
{
	if (!CAM::IS_SPHERE_VISIBLE(vLocal_28, 5f))
	{
		iLocal_55[iLocal_34] = aggregate.butchercreek.func_91(&(iLocal_39[iParam0]), vLocal_28, 0, 1, 1, 0, 1, 1, 1, 0, 0);
		TASK::_0x9DE63896B176EA94(&(iLocal_55[iLocal_34]), false);
		iLocal_34++;
		if (iLocal_34 >= iLocal_33)
		{
			bLocal_37 = true;
		}
	}
}

void func_33(int iParam0)
{
	if (!aggregate.barcustomer_interaction.func_12(&(iLocal_47[iParam0]), 0))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(&(iLocal_47[iParam0]), 188, true);
	TASK::_0x9DE63896B176EA94(&(iLocal_47[iParam0]), false);
	LAW::_0x819ADD5EF1742F47(&(iLocal_47[iParam0]), 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(&(iLocal_47[iParam0]), 27, true);
	PED::_0x712B2C2B2471B493(&(iLocal_47[iParam0]), joaat("disabled"));
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(&(iLocal_47[iParam0]), false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(&(iLocal_47[iParam0]), joaat("group_sniper"), 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

void func_37(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	if (!PED::DOES_GROUP_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam0, true))
	{
		return;
	}
	PED::SET_PED_CONFIG_FLAG(*uParam0, 279, bParam3);
	if (bParam2)
	{
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, *iParam1, 0);
	}
	else
	{
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, *iParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280, bParam4);
		PED::_0xBAD2A311667A50D7(*uParam0, iParam5);
	}
	PED::_0x97C475212B327666(*iParam1, iParam6);
}

