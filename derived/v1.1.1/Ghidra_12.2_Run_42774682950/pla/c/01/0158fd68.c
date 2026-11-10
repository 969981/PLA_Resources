/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158fd68; name: FUN_0158fd68
 */


long * FUN_0158fd68(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x10) = param_3;
  *(long *)(param_1 + 0x20) = param_2;
  plVar1 = (long *)(**(code **)(*param_3 + 0x10))(param_3,param_2,0x10);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
  }
  else {
    FUN_0094a1f8(plVar1,plVar1 + 0x16,param_2 + -0xb0);
    *(long **)(param_1 + 8) = plVar1;
    (**(code **)(*plVar1 + 0xb0))(plVar1,"MemoryID::DEMO_SYSTEM");
  }
  return plVar1;
}


