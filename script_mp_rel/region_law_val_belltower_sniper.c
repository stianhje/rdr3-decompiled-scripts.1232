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
	vector3 vLocal_49 = { 0f, 0f, 0f };
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_15 = 1f;
	fLocal_16 = 1f;
	iLocal_48 = joaat("s_m_m_ambientlawrural_01");
	vLocal_49 = { -230.9494f, 797.3469f, 134.418f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_2();
	while (aggregate.fme_animal_tagging.func_1249(uScriptParam_0) && func_4())
	{
		func_5();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	if (aggregate.barcustomer_interaction.func_12(iLocal_46, 0))
	{
		aggregate.fishing_core.func_116(&iLocal_46);
	}
	if (VOLUME::_0x92A78D0BEDB332A3(iLocal_47))
	{
		VOLUME::_0x43F867EF5C463A53(iLocal_47);
	}
	LAW::_0x7EF2A2FE38D74456(aggregate.region_law_rho_law_swarm.func_5(7), 0);
}

void func_2()
{
	iLocal_47 = VOLUME::_CREATE_VOLUME_BOX(-230.0599f, 797.554f, 134.0912f, 0f, 0f, 29.97786f, 3.336159f, 3.371833f, 4.034389f);
	iLocal_45 = 1;
	PED::_0xED9582B3DA8F02B4(1);
}

int func_4()
{
	float fVar0;

	if (iLocal_45 >= 7)
	{
		return 0;
	}
	fVar0 = aggregate.fishing_core.func_39(Global_35, vLocal_49, 1);
	if (fVar0 > 100f)
	{
		return 0;
	}
	if (aggregate.fishing_core.func_161(&uLocal_52) > 120f)
	{
		return 0;
	}
	return 1;
}

void func_5()
{
	switch (iLocal_45)
	{
		case 1:
			iLocal_45 = 2;
			break;
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_48, false);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_48) && PED::_0x5E420FF293EE5472())
			{
				iLocal_45 = 4;
			}
			break;
		case 4:
			func_11();
			aggregate.barcustomer_interaction.func_43(&uLocal_52);
			iLocal_45 = 5;
			break;
		case 5:
			func_13(iLocal_46, joaat("INPUT_FOCUS_CAM"));
			if (!aggregate.barcustomer_interaction.func_12(iLocal_46, 0))
			{
				iLocal_45 = 6;
			}
			break;
		case 6:
			iLocal_45 = 7;
			break;
	}
}

void func_11()
{
	int iVar0;

	iLocal_46 = aggregate.butchercreek.func_91(iLocal_48, vLocal_49, 101.6932f, 1, 1, 0, 1, 1, 1, 0, 0);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iLocal_46, joaat("weapon_sniperrifle_carcano"), 999, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	PED::_0xFC3DB99C8144CD81(iLocal_46, iLocal_47, 0, 0, 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_46, 263, true);
	PED::SET_PED_CAN_RAGDOLL(iLocal_46, false);
	iVar0 = 160;
	ENTITY::SET_ENTITY_MAX_HEALTH(iLocal_46, iVar0);
	ENTITY::_SET_ENTITY_HEALTH(iLocal_46, iVar0, 0);
	func_19(iLocal_46);
}

void func_13(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		CAM::STOP_GAMEPLAY_HINT(false);
		return;
	}
	else
	{
		if (PAD::IS_CONTROL_PRESSED(2, iParam1))
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(iParam0, 0f, 0f, 0f, true, -1, 2000, 2000, 0);
		}
		if (PAD::IS_CONTROL_JUST_RELEASED(2, iParam1))
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
}

void func_19(int iParam0)
{
	if (!aggregate.barcustomer_interaction.func_12(iParam0, 0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
	}
	func_23(iParam0);
}

void func_23(int iParam0)
{
	LAW::_0x819ADD5EF1742F47(iParam0, 2);
	LAW::_0x819ADD5EF1742F47(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 188, true);
	PED::_0xBD75500141E4725C(iParam0, joaat("law"));
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 39, true);
	TASK::_0x9DE63896B176EA94(iParam0, false);
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iParam0, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, -1101297303, 100, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
	WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, joaat("group_sniper"), 100, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
}

