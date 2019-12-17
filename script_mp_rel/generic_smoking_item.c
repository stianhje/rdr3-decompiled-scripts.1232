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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<181> Var0;
	vector3 vVar181;
	vector3 vVar184;
	vector3 vVar187;
	int iVar190;
	bool bVar191;
	bool bVar192;
	bool bVar193;

	Var0.f_2.f_2 = 1086324736;
	Var0.f_2.f_11.f_1 = 20;
	Var0.f_2.f_33 = 20;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Var0.f_2 = ScriptParam_0.f_2;
	vVar181 = { 0f, 0f, 0f };
	vVar184 = { 0f, 0f, 0f };
	vVar187 = { 0f, 0f, 0f };
	switch (aggregate.coffee_drinking.func_101(Var0.f_2, -949239683))
	{
		case -1919515848:
			vVar181 = { 25f, 0f, 90f };
			vVar184 = { 0f, 0f, 0f };
			vVar187 = { -0.0664749f, -0.00670436f, 0.0292784f };
			break;
		case 1443104131:
			iVar190 = TASK::_0x6AA3DCA2C6F5EB6D(Global_35);
			switch (iVar190)
			{
				case 1648161053:
					vVar187 = { -0.0150581f, -0.00181651f, 0.012338f };
					break;
				case 1516413548:
					vVar187 = { -0.0147231f, -0.00414051f, 0.000197684f };
					break;
				case -1170654725:
					vVar187 = { -0.0040397f, -0.00102244f, 0.00599561f };
					break;
			}
			break;
	}
	Var0.f_2.f_2 = 1f;
	bVar193 = true;
	while (!SCRIPTS::_0x9E4EF615E307FBBE())
	{
		if (!ScriptParam_0.f_3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_180))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1019710152))
				{
					ENTITY::DETACH_ENTITY(Var0.f_180, false, true);
					func_2(&Var0, 7966, 0f, 0f, 0f, vVar184);
					bVar192 = false;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1188360335))
				{
					ENTITY::DETACH_ENTITY(Var0.f_180, false, true);
					func_2(&Var0, 37709, 0f, 0f, 0f, vVar184);
					bVar192 = false;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1377726152))
				{
					func_2(&Var0, 9650, vVar187, vVar181);
					bVar192 = true;
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("detach")))
				{
					ENTITY::DETACH_ENTITY(Var0.f_180, true, true);
					bVar192 = false;
				}
				if (bVar192)
				{
					if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
					{
						if (bVar193)
						{
							ENTITY::SET_ENTITY_VISIBLE(Var0.f_180, false);
							bVar193 = false;
						}
					}
					else if (!bVar193)
					{
						ENTITY::SET_ENTITY_VISIBLE(Var0.f_180, true);
						bVar193 = true;
					}
				}
				else if (!bVar193)
				{
					ENTITY::SET_ENTITY_VISIBLE(Var0.f_180, true);
					bVar193 = true;
				}
			}
			else
			{
				Var0.f_180 = TASK::_0x05A0100EA714DB68(Global_35, 2120637577);
			}
		}
		if (!ScriptParam_0.f_3)
		{
			aggregate.generic_alcohol_item.func_9(&(Var0.f_2));
		}
		switch (Var0.f_1)
		{
			case 0:
				if (aggregate.bandana.func_30(Var0.f_2, 0))
				{
					aggregate.coffee_drinking.func_4(&(Var0.f_2));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_2.f_2 = 1f;
					aggregate.camera_item.func_77(&Var0, 2);
				}
				else
				{
					aggregate.camera_item.func_77(&Var0, 1);
				}
				break;
			case 1:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 442509369))
				{
					Var0.f_2.f_1 = (1 + Var0.f_2.f_1);
					aggregate.coffee_drinking.func_11(&(Var0.f_2), IntToFloat(Var0.f_2.f_1) >= Var0.f_2.f_2);
				}
				if (IntToFloat(Var0.f_2.f_1) >= Var0.f_2.f_2)
				{
					aggregate.camera_item.func_77(&Var0, 3);
				}
				break;
			case 2:
				aggregate.coffee_drinking.func_11(&(Var0.f_2), 1);
				aggregate.camera_item.func_77(&Var0, 3);
				break;
			case 3:
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				else if (!bVar191)
				{
					if (aggregate.aberdeenpigfarm.func_45() == -1 && aggregate.angryisolationist.func_40(0))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
						{
							if (!AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
							{
								if (aggregate.fme_condor_egg.func_1100(Global_35, "Player_Sick_Smoking_Cough", joaat("speech_params_force"), 0, 1, 0, 0, 1))
								{
									bVar191 = true;
								}
							}
						}
					}
					else
					{
						bVar191 = true;
					}
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (Var0.f_1 <= 1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		aggregate.coffee_drinking.func_11(&(Var0.f_2), 1);
	}
}

void func_2(var uParam0, int iParam1, vector3 vParam2, vector3 vParam5)
{
	ENTITY::DETACH_ENTITY(uParam0->f_180, false, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_180, Global_35, PED::GET_PED_BONE_INDEX(Global_35, iParam1), vParam2, vParam5, 1, 1, 0, 0, 2, 1, 0, 0);
}

