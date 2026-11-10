/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031539c4; name: FUN_031539c4
 */


void FUN_031539c4(long *param_1)

{
  *param_1 = (long)&PTR_LAB_042ef7d0;
  FUN_03153a5c(param_1 + 0x150);
  FUN_03340f78(param_1 + 0x150);
  if (param_1[0x147] != 0) {
    FUN_032d647c();
  }
  *(undefined4 *)(param_1 + 0x137) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9bc)) && (param_1[0x136] != 0)) {
    FUN_032cf244(PTR_PTR_0434a080,param_1[0x136],0x10,*(uint *)((long)param_1 + 0x9bc) & 0x3fffffff)
    ;
  }
  param_1[0x136] = 0;
  *(undefined4 *)((long)param_1 + 0x9bc) = 0x80000000;
  FUN_02fd9ab8(param_1 + 0x114);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


