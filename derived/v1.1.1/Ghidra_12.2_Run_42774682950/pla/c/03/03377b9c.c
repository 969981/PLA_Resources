/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03377b9c; name: FUN_03377b9c
 */


void FUN_03377b9c(long *param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  char *pcVar15;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68;
  
  *param_1 = 0;
  param_1[1] = -0x8000000000000000;
  param_1[2] = (long)&DAT_03aad864;
  *(undefined4 *)(param_1 + 3) = 0;
  puVar3 = (uint *)((long)param_1 + 0x4c);
  param_1[4] = 0;
  param_1[5] = -0x8000000000000000;
  param_1[6] = (long)&DAT_03aad864;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = -0x8000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_032e80d0(param_1 + 0xd,0xffffffffffffffff);
  uVar7 = FUN_0337a0e8(param_1);
  iVar10 = (int)uVar7;
  if ((int)param_1[1] == iVar10) {
    lVar9 = *param_1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar10) {
      lVar9 = FUN_0337a1b4(PTR_PTR_0434a080,iVar10 + 1,lVar9,uVar7,(long)param_1 + 0xc);
      uVar7 = (ulong)*(uint *)(param_1 + 1);
      *param_1 = lVar9;
    }
    puVar2 = (undefined8 *)(lVar9 + (long)(int)uVar7 * 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(int *)(param_1 + 1) = iVar10 + 1;
  }
  puVar6 = PTR_PTR_0434a080;
  uVar7 = (param_3 - param_2 >> 3) * -0x5555555555555555;
  uVar11 = *puVar3;
  uVar13 = (uint)uVar7;
  uVar5 = uVar13;
  if ((int)uVar13 < 2) {
    uVar5 = 1;
  }
  if ((int)(uVar11 & 0x3fffffff) < (int)uVar5) {
    lVar14 = param_1[8];
    lVar9 = param_1[9];
    if (0x3fffffff < (int)uVar5) {
      FUN_032bd0a8(uVar5);
      uVar11 = *puVar3;
    }
    uVar11 = (uVar11 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar11) {
      uVar11 = 0x3fffffff;
    }
    uVar4 = uVar5;
    if ((int)uVar5 <= (int)uVar11) {
      uVar4 = uVar11;
    }
    lVar9 = FUN_032bd1d4(puVar6,uVar4,8,lVar14,(int)lVar9,puVar3);
    param_1[8] = lVar9;
  }
  uVar11 = *(uint *)(param_1 + 9);
  if ((int)uVar11 < (int)uVar5) {
    *(uint *)(param_1 + 9) = uVar5;
    memset((void *)(param_1[8] + (long)(int)uVar11 * 8),0,(ulong)(uVar5 + ~uVar11) * 8 + 8);
  }
  else if ((int)uVar5 < (int)uVar11) {
    *(uint *)(param_1 + 9) = uVar5;
  }
  if ((int)(*(uint *)((long)param_1 + 0x2c) & 0x3fffffff) < (int)uVar13) {
    lVar9 = FUN_0337a23c(puVar6,uVar7 & 0xffffffff,param_1[4],(int)param_1[5],
                         (uint *)((long)param_1 + 0x2c));
    param_1[4] = lVar9;
  }
  if ((int)param_1[7] * 2 < (int)((uVar13 + 1) * 3)) {
    FUN_032c2334(param_1 + 6);
  }
  if (1 < uVar7) {
    uVar12 = 2;
    do {
      local_70 = (int)uVar12 + -1;
      plVar8 = (long *)(param_2 + (long)local_70 * 0x18);
      if (*plVar8 != 0) {
        lVar9 = (long)local_70;
        pcVar15 = (char *)(param_2 + lVar9 * 0x18 + 0x14);
        local_68 = *pcVar15 != '\0';
        if ((bool)local_68) {
          local_6c = *(undefined4 *)(param_2 + lVar9 * 0x18 + 0x10);
        }
        FUN_03379fd0(param_1 + 4,plVar8,&local_70);
        if (*pcVar15 == '\0') {
          *(undefined **)(param_1[8] + lVar9 * 8) = &DAT_0435a690;
        }
      }
      bVar1 = uVar12 < uVar7;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (bVar1);
  }
  return;
}


