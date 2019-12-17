#region Local Var
	bool bLocal_0 = false;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate.aberdeenpigfarm.func_23();
	}
	aggregate.aberdeenpigfarm.func_23();
	while (!aggregate.herb.func_62(1) && !bLocal_0)
	{
		aggregate.aberdeenpigfarm.func_23();
		BUILTIN::WAIT(0);
	}
	aggregate.aberdeenpigfarm.func_23();
}

