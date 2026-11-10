/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff62ac; name: FUN_02ff62ac
 */


void FUN_02ff62ac(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)&PTR_LAB_042b75b0;
  lVar1 = param_1[4];
  if ((lVar1 != 0) && (lVar1 + (long)(param_1 + 4) != 0)) {
    FUN_032d647c();
  }
  lVar1 = param_1[5];
  if ((lVar1 != 0) && (lVar1 + (long)(param_1 + 5) != 0)) {
    FUN_032d647c();
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


