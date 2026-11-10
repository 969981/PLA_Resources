/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f1d30; name: FUN_031f1d30
 */


void FUN_031f1d30(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38;
  
  lVar3 = param_1[0x21];
  *param_1 = (long)&PTR_LAB_04302060;
  if (lVar3 != 0) {
    local_38 = *(undefined4 *)((long)param_1 + 0x194);
    local_40 = 0x8000010;
    local_3c = 0x4e;
    FUN_031aa380(lVar3 + 0x28,lVar3,&local_40);
  }
  if (param_1[0x2a] != 0) {
    FUN_031c215c(param_1[0x2a],1);
  }
  if (param_1[0x2d] != 0) {
    FUN_031f3d28();
  }
  if (param_1[0x21] != 0) {
    FUN_03219590(param_1[0x21],param_1);
  }
  FUN_03340f78(param_1 + 0x3c);
  FUN_03340f78(param_1 + 0x3b);
  FUN_03340f78(param_1 + 0x3a);
  FUN_03340f78(param_1 + 0x39);
  FUN_03340f78(param_1 + 0x38);
  FUN_03340f78(param_1 + 0x37);
  FUN_03340f78(param_1 + 0x36);
  puVar1 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0x35) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1ac)) && (param_1[0x34] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[0x34],((ulong)*(uint *)((long)param_1 + 0x1ac) & 0x3fffffff) * 0x50);
  }
  param_1[0x34] = 0;
  *(undefined4 *)((long)param_1 + 0x1ac) = 0x80000000;
  if (param_1[0x2d] != 0) {
    FUN_032d647c();
  }
  if (param_1[0x2c] != 0) {
    FUN_032d647c();
  }
  if (param_1[0x2a] != 0) {
    FUN_032d647c();
  }
  if (param_1[0x21] != 0) {
    FUN_032d647c();
  }
  param_1[0xc] = (long)&PTR_LAB_0430b4a0;
  if (param_1[0x1f] == 0) {
    lVar3 = param_1[0x1e];
  }
  else {
    FUN_032d647c();
    lVar3 = param_1[0x1e];
  }
  if (lVar3 != 0) {
    FUN_032d647c();
  }
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0xc] = (long)(puVar2 + 0x10);
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(*(long *)puVar1 + 0x18))
              (puVar1,param_1[4],((ulong)*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) << 4);
  }
  param_1[4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  return;
}


