#region Local Var
	bool bLocal_0 = false;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		aggregate_func_4238();
	}
	aggregate_func_4238();
	while (!aggregate_func_2039(1) && !bLocal_0)
	{
		aggregate_func_4238();
		BUILTIN::WAIT(0);
	}
	aggregate_func_4238();
}

