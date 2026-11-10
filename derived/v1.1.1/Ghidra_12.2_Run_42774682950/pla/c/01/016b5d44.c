/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b5d44; name: FUN_016b5d44
 */


long * FUN_016b5d44(long param_1,long *param_2)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0x128;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x128,8);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
  }
  else {
    FUN_0094b17c(plVar1,FUN_004e2000,param_2,param_2);
    *(long **)(param_1 + 8) = plVar1;
    (**(code **)(*plVar1 + 0xb0))(plVar1,"MemoryID::EVENT_SCRIPT");
  }
  return plVar1;
}


