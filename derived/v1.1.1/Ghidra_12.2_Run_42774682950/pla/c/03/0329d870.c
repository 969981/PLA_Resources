/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329d870; name: FUN_0329d870
 */


void FUN_0329d870(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_04388fd0 + 0x10);
  puVar2 = PTR_PTR_0434a080;
  if ((int)param_1[0xc] != 0) {
    lVar3 = param_1[0xb];
    lVar4 = (long)(int)param_1[0xc] << 4;
    do {
      lVar1 = lVar3 + lVar4;
      *(undefined4 *)(lVar1 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar1 + -4)) && (*(long *)(lVar1 + -0x10) != 0)) {
        FUN_032cf244(puVar2,*(long *)(lVar1 + -0x10),2,*(uint *)(lVar1 + -4) & 0x3fffffff);
      }
      lVar4 = lVar4 + -0x10;
      *(undefined8 *)(lVar1 + -0x10) = 0;
      *(undefined4 *)(lVar1 + -4) = 0x80000000;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_032cf244(puVar2,param_1[0xb],0x10,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  param_1[0xb] = 0;
  if ((int)param_1[10] != 0) {
    lVar3 = param_1[9];
    lVar4 = (long)(int)param_1[10] << 3;
    do {
      FUN_032c7b9c(lVar3 + -8 + lVar4);
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_032cf244(puVar2,param_1[9],8,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_032cf244(puVar2,param_1[7],2,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_032cf244(puVar2,param_1[5],0x40,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_032cf244(puVar2,param_1[3],0x40,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  puVar2 = PTR_DAT_043723c0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}


