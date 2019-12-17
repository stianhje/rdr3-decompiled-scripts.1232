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
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	bool bLocal_18 = false;
	struct<8> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	bLocal_13 = true;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
	aggregate.aberdeenpigfarm.func_23();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate.ambient_fishing_scenario.func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && aggregate.ambient_fishing_scenario.func_3())
	{
		aggregate.aberdeenpigfarm.func_23();
		aggregate.ambient_fishing_scenario.func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	aggregate.ambient_fishing_scenario.func_2();
}

void func_6()
{
	if (!TASK::_0x841475AC96E794D1(uLocal_16))
	{
		bLocal_13 = false;
	}
	if (bLocal_18)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_19.f_3))
		{
			bLocal_13 = false;
		}
		else if (PED::IS_PED_DEAD_OR_DYING(Local_19.f_3, true))
		{
			bLocal_13 = false;
		}
		else if (!PED::_0x9C54041BB66BCF9E(Local_19.f_3, uLocal_16))
		{
			bLocal_13 = false;
		}
	}
	if (!bLocal_13)
	{
		return;
	}
	switch (Local_19.f_7)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_19.f_3))
			{
				Local_19.f_3 = TASK::_0x5BA659955369B0E2(uLocal_16);
				bLocal_18 = true;
			}
			else
			{
				Local_19.f_7 = 1;
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_19.f_3, -1134697563))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_19.f_2))
				{
					Local_19.f_2 = PED::_0x4D0D2E3D8BC000EB(Local_19.f_3, "s_meatbit_Chunck_small01x_PH_L_HAND", 0);
				}
				Local_19.f_7 = 2;
			}
			break;
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_2))
			{
				Local_19.f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Local_19.f_2);
				OBJECT::_0x2797C633DCDBBAC5(Local_19.f_1, 0f, 1);
				Local_19.f_7 = 3;
			}
			else
			{
				bLocal_13 = false;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_19.f_3, -1334721097))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_2))
				{
					if (!aggregate.barcustomer_interaction.func_42(&(Local_19.f_4)))
					{
						aggregate.barcustomer_interaction.func_43(&(Local_19.f_4));
					}
					Local_19.f_7 = 4;
				}
				else
				{
					bLocal_13 = false;
				}
			}
			break;
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_2))
			{
				Local_19 = aggregate.broom_scenario.func_29(&(Local_19.f_4));
				if (Local_19 > 0f && Local_19 <= 10f)
				{
					OBJECT::_0x2797C633DCDBBAC5(Local_19.f_1, (Local_19 / 10f), 1);
				}
				else
				{
					bLocal_13 = false;
				}
			}
			break;
	}
}

