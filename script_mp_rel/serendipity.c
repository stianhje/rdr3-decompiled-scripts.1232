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
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 1;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = -1;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 1;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = -1;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 1;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_40(int iParam0)
{
	iParam0 = iParam0;
	if ((aggregate.annesburg.func_111(255) && aggregate.annesburg.func_109()) && !aggregate.fme_animal_tagging.func_884())
	{
		aggregate.fm_deathmatch_controller.func_371(5, 0);
	}
	return false;
}

void func_80(int iParam0)
{
	iParam0 = iParam0;
	func_121(&uLocal_18, 0);
	func_121(&uLocal_28, 0);
	func_121(&uLocal_38, 0);
}

void func_121(var uParam0, bool bParam1)
{
	if (func_158(uParam0->f_1))
	{
		func_159(uParam0->f_1);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_9) && bParam1)
	{
		MAP::REMOVE_BLIP(&(uParam0->f_9));
	}
	if (aggregate.annesburg.func_217(uParam0->f_8))
	{
		aggregate.annesburg.func_218(&(uParam0->f_8), 1, 1);
	}
}

bool func_158(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return VOLUME::_0x92A78D0BEDB332A3(iParam0);
}

void func_159(struct<6> Param0, var uParam6)
{
	if (VOLUME::_0x92A78D0BEDB332A3(Param0))
	{
		VOLUME::_0x43F867EF5C463A53(Param0);
	}
	Param0.f_1 = 0;
	Param0.f_2 = -1;
	Param0.f_3 = -1;
	Param0.f_4 = 0;
	if (MAP::DOES_BLIP_EXIST(Param0.f_5))
	{
		MAP::REMOVE_BLIP(&(Param0.f_5));
	}
}

