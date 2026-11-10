/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002669c8; name: FUN_002669c8
 */


long FUN_002669c8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  if ((int)param_1[1] != *(int *)(lVar1 + 0x2c)) {
    lVar1 = 0;
  }
  return lVar1;
}


