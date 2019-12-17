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
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	bool bLocal_27 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	aggregate.fme_animal_tagging.func_293();
	if (!aggregate.adlerranch.func_93(-538889627))
	{
		return true;
	}
	iLocal_13 = ((*Global_1887327)[22 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_13, 5);
	return true;
}

bool func_17(int iParam0)
{
	iParam0 = iParam0;
	if (!func_55())
	{
		return false;
	}
	return true;
}

void func_33(int iParam0)
{
	iParam0 = iParam0;
	if (!aggregate.adlerranch.func_93(-538889627))
	{
		return;
	}
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	uParam1->f_61 = uParam1->f_61;
	if (!aggregate.adlerranch.func_93(-538889627))
	{
		return;
	}
	aggregate.aguasdulces.func_59(uParam1, iLocal_13, 1);
}

bool func_55()
{
	char* sVar0;
	vector3 vVar1;
	int iVar4;

	sVar0 = func_89();
	vVar1 = { func_90() };
	if (!INTERIOR::IS_VALID_INTERIOR(iVar4))
	{
		iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(vVar1);
	}
	if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && INTERIOR::_0xD56FF170710FC826(iVar4, sVar0)) && !INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar4, sVar0))
	{
		INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar4, sVar0, 0);
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar4, sVar0))
	{
		return true;
	}
	return false;
}

void func_80(int iParam0)
{
	iParam0 = iParam0;
	if (aggregate.aberdeenpigfarm.func_45() == 0)
	{
		func_119();
	}
	if (!aggregate.adlerranch.func_93(-538889627))
	{
		return;
	}
}

char* func_89()
{
	return "shb_int_MP";
}

Vector3 func_90()
{
	return -2370.027f, 472.4625f, 131.2446f;
}

void func_119()
{
	char* sVar0;
	vector3 vVar1;
	int iVar4;

	sVar0 = func_89();
	vVar1 = { func_90() };
	if (!INTERIOR::IS_VALID_INTERIOR(iVar4))
	{
		iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(vVar1);
	}
	if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && INTERIOR::_0xD56FF170710FC826(iVar4, sVar0)) && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar4, sVar0))
	{
		INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar4, sVar0, 1);
	}
}

