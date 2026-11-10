/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329532c; name: FUN_0329532c
 */


void FUN_0329532c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)&PTR_LAB_04341e50;
  puVar1 = PTR_PTR_0434a080;
  if ((int)param_1[0x11] != 0) {
    lVar2 = param_1[0x10];
    lVar3 = (long)(int)param_1[0x11] << 4;
    do {
      FUN_032c7b9c(lVar2 + -0x10 + lVar3);
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    FUN_032cf244(puVar1,param_1[0x10],0x10,*(uint *)((long)param_1 + 0x8c) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  param_1[0x10] = 0;
  if ((int)param_1[0xf] != 0) {
    lVar2 = param_1[0xe];
    lVar3 = (long)(int)param_1[0xf] << 4;
    do {
      while (*(long *)(lVar2 + -0x10 + lVar3) != 0) {
        FUN_032d647c();
        lVar3 = lVar3 + -0x10;
        if (lVar3 == 0) goto LAB_032953cc;
      }
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
LAB_032953cc:
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    FUN_032cf244(puVar1,param_1[0xe],0x10,*(uint *)((long)param_1 + 0x7c) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  param_1[0xe] = 0;
  if ((int)param_1[0xd] != 0) {
    lVar2 = param_1[0xc];
    lVar3 = (long)(int)param_1[0xd] << 3;
    do {
      FUN_032c7b9c(lVar2 + -8 + lVar3);
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    FUN_032cf244(puVar1,param_1[0xc],8,*(uint *)((long)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    FUN_032cf244(puVar1,param_1[10],4,*(uint *)((long)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    FUN_032cf244(puVar1,param_1[8],0x30,*(uint *)((long)param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  param_1[8] = 0;
  if ((int)param_1[7] != 0) {
    lVar2 = param_1[6];
    lVar3 = (long)(int)param_1[7] << 4;
    do {
      FUN_032c7b9c(lVar2 + -0x10 + lVar3);
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_032cf244(puVar1,param_1[6],0x10,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_032cf244(puVar1,param_1[4],2,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  FUN_032c7b9c(param_1 + 3);
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


