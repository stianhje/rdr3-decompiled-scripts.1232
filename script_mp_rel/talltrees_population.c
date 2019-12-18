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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
#endregion

// __EntryFunction__ == aggregate_func_1808

void func_2()
{
	iLocal_17 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1975f, -1615f, 125f, 0f, 0f, 0f, 100f, 100f, 50f, "m_volManzanitaPost_Restriction");
	aggregate_func_1306(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1699.8f, -2103.5f, 92f, 0f, 0f, 0f, 75f, 75f, 50f, "m_volPacUnionRR_Restriction");
	aggregate_func_1306(iLocal_18);
	iLocal_19 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-2578.4f, -1380.4f, 161f, 0f, 0f, 0f, 15f, 15f, 20f, "m_volAuroraBasinShack_Restriction");
	aggregate_func_1306(iLocal_19);
	iLocal_20 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1405.399f, -2279.227f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLanding_Restriction");
	aggregate_func_1314(iLocal_20, 0, 0);
}

