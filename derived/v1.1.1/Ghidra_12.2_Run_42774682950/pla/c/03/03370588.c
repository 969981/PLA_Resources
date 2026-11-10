/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03370588; name: FUN_03370588
 */


void FUN_03370588(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_04389498 + 0x10);
  lVar1 = param_1[4];
  param_1[4] = 0;
  if (lVar1 != 0) {
    FUN_032d647c();
  }
  lVar1 = param_1[5];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_032d647c();
  }
  lVar1 = param_1[6];
  param_1[6] = 0;
  if (lVar1 != 0) {
    FUN_032d647c();
    if (param_1[6] != 0) {
      FUN_032d647c();
    }
  }
  if (param_1[5] != 0) {
    FUN_032d647c();
  }
  if (param_1[4] != 0) {
    FUN_032d647c();
  }
  *param_1 = (long)&PTR_LAB_04367df0;
  if (param_1[3] != 0) {
    FUN_032d647c();
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


