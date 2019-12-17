#region Local Var
	int iLocal_0 = 0;
	bool bLocal_1 = false;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!func_2())
	{
		if (func_3())
		{
			vVar0 = { aggregate.ambient_fishing_scenario.func_26(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 5f, 0f) - ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) };
			vVar3 = { func_5() };
			vVar3.f_2 = Global_36.f_2;
			vVar6 = { aggregate.ambient_fishing_scenario.func_26(vVar3 - Global_36) };
			fVar9 = MISC::ACOS(aggregate.electric_lantern.func_6(vVar0, vVar6));
			fVar10 = (180f - fVar9);
			fVar11 = (fVar10 / 180f);
			aggregate.coffee_drinking.func_45(fVar11, 0f, 1f);
			iVar12 = 255;
			iVar13 = 195;
			iVar14 = 77;
			iVar15 = 255;
			iVar16 = 30;
			iVar17 = 0;
			GRAPHICS::_0x6EC2A67962296F49(iLocal_0, BUILTIN::FLOOR(aggregate.electric_lantern.func_8(BUILTIN::TO_FLOAT(iVar12), BUILTIN::TO_FLOAT(iVar15), fVar11)), BUILTIN::FLOOR(aggregate.electric_lantern.func_8(BUILTIN::TO_FLOAT(iVar13), BUILTIN::TO_FLOAT(iVar16), fVar11)), BUILTIN::FLOOR(aggregate.electric_lantern.func_8(BUILTIN::TO_FLOAT(iVar14), BUILTIN::TO_FLOAT(iVar17), fVar11)));
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_0);
}

bool func_2()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	if (bLocal_1 && !ENTITY::DOES_ENTITY_EXIST(iLocal_0))
	{
		return true;
	}
	if (Global_1939168->f_38 != joaat("weapon_melee_lantern_electric"))
	{
		return true;
	}
	return false;
}

bool func_3()
{
	int iVar0;

	if (bLocal_1)
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
		{
			if (iVar0 == joaat("weapon_melee_lantern_electric"))
			{
				iLocal_0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0));
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
	{
		bLocal_1 = true;
		return true;
	}
	return false;
}

Vector3 func_5()
{
	return -1502.098f, 2458.125f, 418.487f;
}

