/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b580c; name: FUN_014b580c
 */


uint FUN_014b580c(long param_1)

{
  uint uVar1;
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_02a4754c(auStack_40,&DAT_04214a48);
  if (*(long *)(param_1 + 0x2c8) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_0283b5c4(*(long *)(param_1 + 0x2c8),auStack_40);
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar1 & 1;
}


