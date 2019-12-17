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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	struct<16> Local_25 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_41 = 0;
	bool bLocal_42 = false;
	bool bLocal_43 = false;
	bool bLocal_44 = false;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aberdeenpigfarm.__EntryFunction__

bool func_13()
{
	iLocal_21 = ((*Global_1887327)[60 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 14);
	POPULATION::_0xB56D41A694E42E86(iLocal_21, 12519, 18432, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_21, 12775, 18432, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(12775, 18432, 0, -1, -1, iLocal_21);
	aggregate.nb_duel.func_276(iLocal_21, 0);
	return true;
}

void func_16(int iParam0)
{
	if (aggregate.aberdeenpigfarm.func_45() == -1)
	{
		if (bLocal_43)
		{
			aggregate.aberdeenpigfarm.func_21(iParam0, 16);
		}
		else
		{
			aggregate.aberdeenpigfarm.func_74(iParam0, 16);
		}
	}
	if (!aggregate.aberdeenpigfarm.func_123())
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 1);
	}
}

void func_80(int iParam0)
{
	aggregate.aguasdulces.func_58(0.775f, 0.2f, 0.025f, 0f);
	if (bLocal_42)
	{
		Local_25.f_12 = 46;
		Local_25.f_13 = 14;
		Local_25 = Global_35;
		Local_25.f_15 = 1812404612;
		MISC::_0x88BC5F4AEF77FC4E(&Local_25, 17);
	}
	func_114(iLocal_21, &bLocal_44);
	if (!aggregate.aberdeenpigfarm.func_123())
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 4, 0, 0);
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 7, 0, 0);
	}
	aggregate.annesburg.func_166(iLocal_22);
	aggregate.annesburg.func_166(iLocal_23);
	aggregate.annesburg.func_166(iLocal_24);
	ITEMSET::DESTROY_ITEMSET(iLocal_49);
	if (bLocal_44)
	{
		aggregate.caligahall.func_112(1);
	}
	iParam0 = iParam0;
}

void func_114(int iParam0, bool bParam1)
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

