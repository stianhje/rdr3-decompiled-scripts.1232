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
	int iLocal_21 = 0;
	int iLocal_22 = 0;
#endregion

// __EntryFunction__ == gaptoothridge_population.__EntryFunction__

void func_2()
{
	iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBlackwaterRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_17, -887.5f, -1330f, 50f, 0f, 0f, 0f, 325f, 350f, 200f);
	VOLUME::_0x39816F6F94F385AD(iLocal_17, -912.5f, -1130f, 50f, 0f, 0f, 0f, 275f, 50f, 200f);
	aggregate.bayounwa_population.func_7(iLocal_17);
	iLocal_18 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-869f, -1640.5f, 75f, 0f, 0f, -31f, 30f, 40f, 25f, "m_volWealthyHomeRestriction");
	aggregate.bayounwa_population.func_7(iLocal_18);
	iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volWindmillHouseRestriction");
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -1061.7f, -1641.6f, 77.5f, 0f, 0f, -9f, 15f, 15f, 12.5f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -1031.1f, -1623.7f, 80f, 0f, 0f, -13f, 50f, 35f, 20f);
	VOLUME::_0x39816F6F94F385AD(iLocal_19, -1038.8f, -1664f, 91f, 0f, 0f, 0f, 20f, 20f, 35f);
	aggregate.bayounwa_population.func_7(iLocal_19);
	iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIslandRestriction");
	VOLUME::_0xBCE668AAF83608BE(iLocal_20, 237.213f, -769.7713f, 42.9804f, 0f, 0f, 0f, 156.4307f, 81.38799f, 25.72252f);
	VOLUME::_0xBCE668AAF83608BE(iLocal_20, -401.9616f, -1012.638f, 42.9804f, 0f, 0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	VOLUME::_0x39816F6F94F385AD(iLocal_20, 440.3216f, -1462.027f, 55.90892f, 0f, 0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	aggregate.bigvalley_population.func_12(iLocal_20, 0, 0);
	iLocal_21 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1405.399f, -2279.227f, 70f, 0f, 0f, 7f, 65f, 107.5f, 40f, "m_volThievesLandingRestriction");
	aggregate.bayounwa_population.func_10(iLocal_21, 0, 0);
	iLocal_22 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-715.9856f, -1387.087f, 40.43677f, 0f, 0f, 40f, 25f, 55f, 15f, "m_volBlackwaterLakeSturgeonRestriction");
	POPULATION::_0xB56D41A694E42E86(iLocal_22, 2228255, 0, 0, -598613581, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_22, 2228255, 0, 0, -598613581, -1, 0);
	POPULATION::_0x2161278C6322F740(2228255, 0, 0, -598613581, -1, iLocal_22);
}

