/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa2af8; name: FUN_02fa2af8
 */


/* WARNING: Removing unreachable block (ram,0x02fa2b90) */

void FUN_02fa2af8(undefined8 *param_1,int param_2,int param_3,long *param_4,undefined8 *param_5)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  void *__dest;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  void *__src;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  FUN_02fa40ac();
  *param_1 = &PTR_LAB_042b81c8;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  puVar10 = param_1 + 5;
  *puVar10 = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(int *)((long)param_1 + 0x3c) = param_2;
  uVar3 = param_3 * param_2;
  param_1[6] = 0x8000000000000000;
  *(int *)(param_1 + 8) = param_3;
  if ((int)uVar3 < 1) {
    fVar14 = 3.40282e+38;
    fVar12 = -3.40282e+38;
  }
  else {
    if (uVar3 == 1) {
      fVar12 = -3.40282e+38;
      lVar9 = 0;
      fVar11 = 3.40282e+38;
    }
    else {
      fVar12 = -3.40282e+38;
      fVar14 = 3.40282e+38;
      lVar9 = 0;
      do {
        pfVar1 = (float *)(*param_4 + lVar9 * 4);
        lVar9 = lVar9 + 2;
        fVar13 = *pfVar1;
        fVar15 = pfVar1[1];
        fVar11 = fVar13;
        if (fVar14 <= fVar13) {
          fVar11 = fVar14;
        }
        if (fVar13 <= fVar12) {
          fVar13 = fVar12;
        }
        fVar14 = fVar15;
        if (fVar11 <= fVar15) {
          fVar14 = fVar11;
        }
        fVar12 = fVar15;
        if (fVar15 <= fVar13) {
          fVar12 = fVar13;
        }
      } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar9);
      fVar11 = fVar14;
      if ((uVar3 & 1) == 0) goto LAB_02fa2c00;
    }
    fVar14 = *(float *)(*param_4 + lVar9 * 4);
    fVar13 = fVar14;
    if (fVar14 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar12 = fVar13;
    if (fVar11 <= fVar14) {
      fVar14 = fVar11;
    }
  }
LAB_02fa2c00:
  *(float *)((long)param_1 + 0x44) = (fVar12 - fVar14) / 65535.0;
  *(float *)(param_1 + 9) = fVar14;
  puVar5 = PTR_PTR_0434a080;
  if ((int)uVar3 < 1) {
    puVar6 = (undefined2 *)0x0;
    if (uVar3 == 0) goto LAB_02fa2c74;
  }
  else {
    if ((int)uVar3 < 0x40000000) {
      uVar7 = 0;
    }
    else {
      FUN_032bd0a8(uVar3);
      uVar7 = (*(uint *)((long)param_1 + 0x24) & 0x3fffffff) * 2;
      if (0x3ffffffe < uVar7) {
        uVar7 = 0x3fffffff;
      }
    }
    uVar4 = uVar3;
    if ((int)uVar3 <= (int)uVar7) {
      uVar4 = uVar7;
    }
    puVar6 = (undefined2 *)FUN_032bd1d4(puVar5,uVar4,2,0,0,(uint *)((long)param_1 + 0x24));
    param_1[3] = puVar6;
    if (*(uint *)(param_1 + 4) == uVar3) goto LAB_02fa2c74;
  }
  *(uint *)(param_1 + 4) = uVar3;
LAB_02fa2c74:
  uVar3 = *(int *)((long)param_1 + 0x3c) * *(int *)(param_1 + 8);
  if ((0 < (int)uVar3) &&
     (*puVar6 = (short)(int)((*(float *)*param_4 - *(float *)(param_1 + 9)) /
                            *(float *)((long)param_1 + 0x44)), uVar3 != 1)) {
    uVar8 = 1;
    do {
      *(short *)(param_1[3] + uVar8 * 2) =
           (short)(int)((*(float *)(*param_4 + uVar8 * 4) - *(float *)(param_1 + 9)) /
                       *(float *)((long)param_1 + 0x44));
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  if ((param_5 != (undefined8 *)0x0) && (puVar10 != param_5)) {
    __src = (void *)*param_5;
    iVar2 = *(int *)(param_5 + 1);
    __dest = (void *)*puVar10;
    if ((int)(*(uint *)((long)param_1 + 0x34) & 0x3fffffff) < iVar2) {
      __dest = (void *)FUN_032bd1d4(puVar5,iVar2,2,__dest,*(undefined4 *)(param_1 + 6));
      param_1[5] = __dest;
    }
    memcpy(__dest,__src,(long)iVar2 << 1);
    *(int *)(param_1 + 6) = iVar2;
  }
  return;
}


