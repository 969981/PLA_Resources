/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314eee0; name: FUN_0314eee0
 */


void FUN_0314eee0(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_042d5498;
  if (param_1[7] != 0) {
    FUN_032d647c();
  }
  if (param_1[8] != 0) {
    FUN_032d647c();
  }
  if (param_1[9] != 0) {
    FUN_032d647c();
  }
  if (param_1[10] != 0) {
    FUN_032d647c();
  }
  if (param_1[0xb] != 0) {
    FUN_032d647c();
  }
  if (param_1[0xc] != 0) {
    FUN_032d647c();
  }
  if (param_1[0xd] != 0) {
    FUN_032d647c();
  }
  if (param_1[0xe] != 0) {
    FUN_032d647c();
  }
  if (param_1[0xf] != 0) {
    FUN_032d647c();
  }
  if (param_1[0x11] != 0) {
    FUN_032d647c();
  }
  if (param_1[0x1d] != 0) {
    FUN_032d647c();
  }
  if (param_1[0x10] != 0) {
    FUN_032d647c();
  }
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x124)) && (param_1[0x23] != 0)) {
    FUN_032cf244(puVar1,param_1[0x23],4,*(uint *)((long)param_1 + 0x124) & 0x3fffffff);
  }
  param_1[0x23] = 0;
  *(undefined4 *)((long)param_1 + 0x124) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    FUN_032cf244(puVar1,param_1[0x1e],1,*(uint *)((long)param_1 + 0xfc) & 0x3fffffff);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    FUN_032cf244(puVar1,param_1[0x12],0xd0,*(uint *)((long)param_1 + 0x9c) & 0x3fffffff);
  }
  param_1[0x12] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


