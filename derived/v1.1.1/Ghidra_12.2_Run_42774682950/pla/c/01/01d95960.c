/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d95960; name: FUN_01d95960
 */


void FUN_01d95960(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0xa8))();
  plVar1 = (long *)(**(code **)(*plVar1 + 0x58))();
  uVar2 = (**(code **)(*plVar1 + 0x60))();
  FUN_01ccf3e8(uVar2,1);
  return;
}


