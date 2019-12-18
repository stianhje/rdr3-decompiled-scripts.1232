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
	int iLocal_17 = 0;
	int iLocal_18 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_15 = 1f;
	fLocal_16 = 1f;
	aggregate_func_685();
	func_2();
	ENTITY::CREATE_MODEL_HIDE(3366.87f, -680.8071f, 41.6795f, 1f, 1281919024, true);
	bVar0 = true;
	while (bVar0)
	{
		if (aggregate_func_4251() == -1)
		{
		}
		else
		{
			Global_1896610->f_51 = NETWORK::_0xFB9ECED5B68F3B78(Global_1896610->f_42);
			if (aggregate_func_523(1, 1))
			{
				bVar0 = false;
			}
		}
		BUILTIN::WAIT(0);
	}
	func_5();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCanebreakManor_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_17, 2482.625f, -400.4976f, 45f, 0f, 0f, 34f, 25f, 35f, 30f);
	VOLUME::_0x39816F6F94F385AD(iLocal_17, 2493.368f, -424.8734f, 45f, 0f, 0f, 34f, 25f, 22.5f, 30f);
	aggregate_func_1308(iLocal_17, 0, 0);
	iLocal_18 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquatic_Restriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 2212.785f, -513.7505f, 42.64256f, 0f, 0f, 7.584539f, 120.1986f, 73.42303f, 13.12508f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 2123.317f, -450.1633f, 42.35445f, 0f, 0f, 19.19169f, 52.02959f, 103.7867f, 11.12478f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 2079.136f, -508.0375f, 40.54353f, 0f, 0f, 32.83384f, 30.26976f, 12.10188f, 4.106483f);
	VOLUME::_0x39816F6F94F385AD(iLocal_18, 2072.09f, -541.5287f, 41.15696f, 0f, 0f, -50.04893f, 49.11419f, 29.08003f, 4.101138f);
	aggregate_func_1369(iLocal_18);
}

void func_5()
{
	ENTITY::REMOVE_MODEL_HIDE(3366.87f, -680.8071f, 41.6795f, 1f, 1281919024, 0);
}

