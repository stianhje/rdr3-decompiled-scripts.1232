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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(joaat("closing"));
	}
	if (Global_1572887->f_13 == 0)
	{
	}
	else
	{
		return;
	}
	bVar0 = false;
	while (!aggregate_func_523(1, 1))
	{
		bVar0 = false;
		if (SCRIPTS::_0x9E4EF615E307FBBE())
		{
			bVar0 = true;
		}
		if (!Global_1915170->f_21989)
		{
			bVar0 = true;
		}
		if (aggregate_func_5548())
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
			func_1(joaat("closing"));
		}
		else
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 407174929))
			{
				Global_1051387->f_3576 = 1;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1543672280))
			{
				func_1(-1543672280);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1441911379))
			{
				func_1(-1441911379);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 562684602))
			{
				func_1(562684602);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1275814714))
			{
				func_1(-1275814714);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -917343754))
			{
				func_1(-917343754);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1308691423))
			{
				func_1(-1308691423);
			}
			BUILTIN::WAIT(0);
		}
	}
	func_1(joaat("closing"));
}

void func_1(int iParam0)
{
	Global_1915170->f_21989.f_4 = iParam0;
}

