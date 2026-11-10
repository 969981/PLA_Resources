/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008337c0; name: FUN_008337c0
 */


void FUN_008337c0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  *param_1 = (long)(PTR_DAT_04377e28 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_0081a840(lVar1);
  FUN_0081a800(lVar1);
  return;
}


