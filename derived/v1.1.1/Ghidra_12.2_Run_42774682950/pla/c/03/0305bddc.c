/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0305bddc; name: FUN_0305bddc
 */


void FUN_0305bddc(long *param_1,long param_2)

{
  long lVar1;
  
  param_1[1] = param_2 + 0x530;
  param_1[4] = *(long *)(param_2 + 0x4b0);
  lVar1 = *(long *)(param_2 + 0x4e0);
  param_1[7] = *(long *)(param_2 + 0x4e8);
  param_1[6] = lVar1;
  lVar1 = *(long *)(param_2 + 0x4f0);
  param_1[9] = *(long *)(param_2 + 0x4f8);
  param_1[8] = lVar1;
  lVar1 = 0;
  if (*(char *)(*(long *)(param_2 + 0x500) + 0xaa0) != '\0') {
    lVar1 = *(long *)(param_2 + 0x500) + 0xab0;
  }
  *param_1 = lVar1;
  param_1[2] = *(long *)(param_2 + 0x38);
  param_1[3] = *(long *)(param_2 + 0x150);
  return;
}


