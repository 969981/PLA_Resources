/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081e8a8; name: FUN_0081e8a8
 */


void FUN_0081e8a8(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04377bb8 + 0x10);
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      return;
    }
    FUN_0081d9e8(lVar1,param_1);
  }
  param_1[1] = 1;
  return;
}


