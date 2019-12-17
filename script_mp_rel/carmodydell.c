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
	bool bLocal_13 = false;
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

bool func_40(int iParam0)
{
	func_60();
	return false;
}

void func_60()
{
	int iVar0;

	if (bLocal_13)
	{
		return;
	}
	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(777.0469f, 848.3318f, 117.9097f);
	if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		return;
	}
	func_90(&iVar0, "_car_house_int_after_ransack");
	func_91(&iVar0, "_car_house_int_before_ransack");
	func_90(&iVar0, "_car_house_int_lowvauleitems");
	func_90(&iVar0, "_car_house_int_night");
	func_90(&iVar0, "_car_house_int_night_pickup_whiskey");
	func_90(&iVar0, "_car_house_int_day");
	func_90(&iVar0, "_car_house_int_day_pickup_cheese");
	func_90(&iVar0, "_car_house_int_day_pickup_bread");
	func_90(&iVar0, "_car_house_int_day_pickup_whiskey");
	func_90(&iVar0, "_car_house_int_pickup_medicine");
	aggregate.carmodydell.func_92("hmrb_crd_interior_ransacked");
	aggregate.carmodydell.func_92("hmrb_crd_interior_night");
	aggregate.carmodydell.func_92("hmrb_crd_interior_day");
	bLocal_13 = true;
}

void func_90(int iParam0, char* sParam1)
{
	if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*iParam0, sParam1))
	{
		return;
	}
	INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(*iParam0, sParam1, 1);
}

void func_91(int iParam0, char* sParam1)
{
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(*iParam0, sParam1))
	{
		return;
	}
	INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(*iParam0, sParam1, 0);
}

