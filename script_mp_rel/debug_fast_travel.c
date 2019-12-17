#region Local Var
	bool bLocal_0 = false;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
	}
	aggregate.aberdeenpigfarm.func_23();
	while (!bLocal_0)
	{
		aggregate.aberdeenpigfarm.func_23();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	bLocal_0 = false;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

