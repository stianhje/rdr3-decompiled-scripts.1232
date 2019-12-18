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
	int iLocal_14 = 0;
	struct<66> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 1073741824, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 570, 1065353216, -1082130432, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	bool bLocal_95 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_13))
	{
		iLocal_13 = VOLUME::_CREATE_VOLUME_BOX(737.3499f, -1127.433f, 46.63308f, 0f, 0f, 26.05479f, 73.07784f, 115.7075f, 16.72532f);
		aggregate_func_1307(iLocal_13);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(Local_15.f_64))
	{
		Local_15.f_64 = VOLUME::_CREATE_VOLUME_CYLINDER(718.817f, -827.245f, 50.334f, 0f, 0f, 0f, 12f, 12f, 3f);
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iLocal_14) && aggregate_func_4484(0))
	{
		iLocal_14 = VOLUME::_CREATE_VOLUME_BOX(711.732f, -828.585f, 50.703f, 0f, 0f, 0f, 4.161f, 2.683f, 3.852f);
		if (VOLUME::_0x92A78D0BEDB332A3(iLocal_14))
		{
			PATHFIND::_0x19C7567D2F2287D6(iLocal_14, 7);
		}
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(Local_15.f_65))
	{
		Local_15.f_65 = VOLUME::_CREATE_VOLUME_CYLINDER(721.465f, -827.139f, 50.334f, 0f, 0f, 0f, 3f, 3f, 3f);
	}
	return true;
}

bool func_20(int iParam0)
{
	if (aggregate_func_4484(0))
	{
		return aggregate_func_4559(iParam0, -1, -1, 0);
	}
	return false;
}

