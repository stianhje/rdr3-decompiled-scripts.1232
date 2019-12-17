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
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	bool bLocal_20 = false;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	bool bLocal_29 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_18 = ((*Global_1887327)[37 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_18, 8);
	iLocal_19 = POPULATION::_CREATE_POPZONE_FROM_VOLUME(iLocal_18);
	POPULATION::SET_POPZONE_POPULATION_SET(iLocal_19, -1173148476);
	POPULATION::_0x7E6BC0B94F5928F0(iLocal_19, 19, 19);
	POPULATION::_0x08892122769770D5(iLocal_19, true);
	POPULATION::_0x0F1861101C9A9944(iLocal_19, true);
	return true;
}

bool func_40(int iParam0)
{
	iParam0 = iParam0;
	if (aggregate.adlerranch.func_61(&bLocal_20))
	{
		if (bLocal_20)
		{
			func_63(1223148325, 1);
		}
	}
	return false;
}

void func_63(int iParam0, int iParam1)
{
	aggregate.adlerranch.func_62(iParam0, 1, 0, 0, 1, 0, 0, 0);
}

void func_80(int iParam0)
{
	aggregate.aguasdulces.func_58(0.775f, 0.2f, 0.025f, 0f);
	if (POPULATION::_0xA5BD585005EFCAD4(iLocal_19))
	{
		POPULATION::_0xA6E6A66FC4CA4224(iLocal_19);
	}
}

