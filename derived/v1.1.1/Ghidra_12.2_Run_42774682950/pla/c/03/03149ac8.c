/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03149ac8; name: FUN_03149ac8
 */


void FUN_03149ac8(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_043888c8 + 0x10);
  FUN_032c7b9c(param_1 + 0xb);
  puVar1 = PTR_PTR_0434a080;
  if ((int)param_1[10] != 0) {
    lVar2 = param_1[9];
    lVar3 = (long)(int)param_1[10] * 0x30;
    do {
      FUN_032c7b9c(lVar2 + lVar3 + -0x10);
      if (*(long *)(lVar2 + lVar3 + -0x30) != 0) {
        FUN_032d647c();
      }
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_032cf244(puVar1,param_1[9],0x30,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  param_1[9] = 0;
  if ((int)param_1[8] != 0) {
    lVar2 = param_1[7];
    lVar3 = (long)(int)param_1[8] * 0xb0;
    do {
      FUN_02fff010(lVar2 + -0xb0 + lVar3);
      lVar3 = lVar3 + -0xb0;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar1,param_1[7],0xb0,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_032cf244(puVar1,param_1[5],0x70,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  if ((int)param_1[4] != 0) {
    lVar2 = param_1[3];
    lVar3 = (long)(int)param_1[4] * 0x50;
    do {
      if (*(long *)(lVar2 + lVar3 + -0x48) != 0) {
        FUN_032d647c();
      }
      FUN_032c7b9c(lVar2 + lVar3 + -0x50);
      lVar3 = lVar3 + -0x50;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(puVar1,param_1[3],0x50,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  puVar1 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


