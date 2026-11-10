/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016610e0; name: FUN_016610e0
 */


void FUN_016610e0(long param_1,uint param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long local_28;
  
  if (param_2 < 10) {
    FUN_00befc74(&local_28,param_3);
    plVar2 = (long *)(param_1 + (ulong)param_2 * 8 + 0xb8);
    plVar1 = (long *)*plVar2;
    *plVar2 = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))();
    }
    *plVar2 = local_28;
  }
  return;
}


