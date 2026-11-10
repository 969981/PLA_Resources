/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ef7c4c; name: FUN_01ef7c4c
 */


long * FUN_01ef7c4c(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  
  *(long **)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x20) = 0x70;
  plVar1 = (long *)(**(code **)(*param_3 + 0x10))(param_3,0x70,8);
  *(long **)(param_1 + 0x18) = plVar1;
  if (plVar1 == (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))();
  }
  else {
    FUN_0094b1c0(plVar1,param_2,param_3,1);
    *(long **)(param_1 + 8) = plVar1;
    (**(code **)(*plVar1 + 0xb0))(plVar1,"field::FieldAppHeap::ROOT");
  }
  return plVar1;
}


