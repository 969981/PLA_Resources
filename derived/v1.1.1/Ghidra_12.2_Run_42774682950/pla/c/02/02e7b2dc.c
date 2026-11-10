/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7b2dc; name: FUN_02e7b2dc
 */


void FUN_02e7b2dc(long param_1)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 0x18); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    (**(code **)(*(long *)plVar1[2] + 0x18))();
  }
  FUN_02e7b338((long *)(param_1 + 0x18));
  FUN_02e7b3b4(param_1 + 0x40);
  FUN_02e7b440(param_1 + 0x68);
  return;
}


