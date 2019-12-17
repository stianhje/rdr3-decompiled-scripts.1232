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
	bool bLocal_19 = false;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_18 = ((*Global_1887327)[101 /*36*/])->f_5;
	return true;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
	}
}

void func_78(int iParam0)
{
	aggregate.aguasdulces.func_58(0.775f, 0.2f, 0.025f, 0f);
	if (bLocal_19)
	{
		aggregate.caligahall.func_112(1);
	}
	func_113(iLocal_18, &bLocal_19);
	iParam0 = iParam0;
}

void func_113(int iParam0, bool bParam1)
{
	if (VOLUME::_0x666C2F53ABEFC952(iParam0) != 623901053)
	{
		VOLUME::_0xFD010A2154B40676(iParam0, 623901053);
	}
	if (bParam1->f_4)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 20, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 19, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 10, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 0);
		bParam1->f_4 = 0;
	}
}

