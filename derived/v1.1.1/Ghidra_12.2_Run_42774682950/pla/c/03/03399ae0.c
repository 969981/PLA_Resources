/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03399ae0; name: FUN_03399ae0
 */


undefined1  [16] FUN_03399ae0(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (*(int *)(param_1 + 0xc0) < 1) {
    return ZEXT816(0);
  }
  lVar1 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80);
  auVar2._8_8_ = lVar1 + (*(int **)(param_1 + 0xb8))[1];
  auVar2._0_8_ = lVar1 + **(int **)(param_1 + 0xb8);
  return auVar2;
}


