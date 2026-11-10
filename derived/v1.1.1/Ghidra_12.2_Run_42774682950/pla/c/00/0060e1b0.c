/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060e1b0; name: FUN_0060e1b0
 */


void FUN_0060e1b0(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  *param_1 = (long)(PTR_DAT_04375360 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_002e2f10(lVar1);
  FUN_002e2ef0(PTR_LAB_04373088,lVar1);
  return;
}


