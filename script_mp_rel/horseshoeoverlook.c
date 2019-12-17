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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
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
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Horseshoe - m_volTown");
	VOLUME::_0xBCE668AAF83608BE(iLocal_23, -131.6045f, -34.30135f, 102.2093f, 0f, 0f, -24.47213f, 46.71921f, 37.52021f, 13.16044f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_23, -117.99f, -66.781f, 100f, 0f, 0f, 94f, 16.719f, 19.52f, 13.16044f);
	iLocal_21 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-380.148f, -19.541f, 42.09f, 0f, 0f, -110f, 14.456f, 10.148f, 8.8f, "HRT W TravellingSalesman - m_volTravellingSalesman");
	iLocal_22 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-381.779f, -21.29f, 42.09f, 0f, 0f, -110f, 3.7f, 3.7f, 4.2f, "HRT W TravellingSalesman - m_volTravellingSalesmanPrompt");
	return true;
}

