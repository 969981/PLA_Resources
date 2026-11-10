/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329e018; name: FUN_0329e018
 */


void FUN_0329e018(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)&PTR_LAB_0433e818;
  if (0 < (int)param_1[0xf]) {
    lVar1 = 0;
    do {
      FUN_032d647c(*(undefined8 *)(param_1[0xe] + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[0xf]);
  }
  FUN_032c7b9c(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[0xe],8,*(uint *)((long)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  if (param_1[0xd] != 0) {
    FUN_032d647c();
  }
  if (param_1[0xc] != 0) {
    FUN_032d647c();
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


