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
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	struct<2> Local_18 = { 0, 0 } ;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

// __EntryFunction__ == aggregate_func_1747

void func_6()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Local_18.f_1)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_18))
	{
		return;
	}
	iVar0 = TASK::_0xDF7993356F52359A(Local_18, 0);
	if (!TASK::_0x841475AC96E794D1(iVar0))
	{
		return;
	}
	iVar1 = TASK::_0x295514F198EFD0CA(iVar0, "");
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	iVar2 = TASK::_0x7467165EE97D3C68(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return;
	}
}

