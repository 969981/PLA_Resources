/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00390088; name: FUN_00390088
 */


/* WARNING: Removing unreachable block (ram,0x003901f8) */

void FUN_00390088(long *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (0 < *(int *)(param_2 + 0x74)) {
    lVar10 = 0;
    lVar11 = 0;
    do {
      FUN_00390088(param_1,*(long *)(param_2 + 0x38) + lVar10);
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x90;
    } while (lVar11 < *(int *)(param_2 + 0x74));
  }
  *(long *)param_1[1] = param_2;
  lVar15 = param_1[5];
  lVar13 = *(long *)param_1[3];
  lVar11 = ((long *)param_1[3])[1];
  lVar12 = *(long *)param_1[4];
  lVar10 = lVar13 << 0x20;
  uVar3 = *(undefined4 *)(lVar15 + (lVar10 + 0x100000000 >> 0x1e));
  puVar1 = (undefined4 *)(lVar15 + (lVar10 >> 0x1e));
  uVar2 = *puVar1;
  uVar4 = *(undefined4 *)(lVar15 + (lVar10 + 0x200000000 >> 0x1e));
  uVar5 = *(undefined4 *)(lVar15 + (lVar10 + 0x300000000 >> 0x1e));
  uVar6 = *(undefined4 *)(lVar15 + (lVar10 + 0x400000000 >> 0x1e));
  lVar10 = FUN_00341fc0();
  plVar8 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x50);
  if (plVar8 != (long *)0x0) {
    lVar14 = *param_1;
    *plVar8 = param_2;
    plVar8[1] = lVar12;
    plVar8[2] = (long)(puVar1 + 5);
    plVar8[3] = lVar15 + (lVar13 >> 0x20) * 4;
    *(undefined4 *)(plVar8 + 4) = uVar2;
    *(undefined4 *)((long)plVar8 + 0x24) = uVar3;
    *(undefined4 *)(plVar8 + 5) = uVar4;
    *(undefined4 *)((long)plVar8 + 0x2c) = uVar5;
    *(int *)(plVar8 + 6) = (int)lVar11;
    *(undefined4 *)((long)plVar8 + 0x34) = uVar6;
    lVar11 = param_2;
    if (lVar10 == 0) {
      lVar10 = FUN_00341fc0();
      lVar11 = *plVar8;
    }
    plVar8[7] = lVar10;
    plVar8[8] = lVar14;
    *(int *)(plVar8 + 9) = *(int *)(lVar11 + 0x68) + -1;
  }
  lVar11 = param_1[1];
  *(long **)(lVar11 + 8) = plVar8;
  iVar7 = *(int *)(param_2 + 0x78);
  if (iVar7 < 1) goto LAB_00390270;
  plVar8 = (long *)param_1[2];
  uVar9 = (long)iVar7 & 1;
  if (iVar7 == 1) {
    lVar10 = 0;
LAB_00390250:
    *plVar8 = *(long *)(param_2 + 0x40) + lVar10 * 0x50;
    param_1[2] = param_1[2] + 8;
  }
  else {
    lVar10 = 0;
    lVar11 = 0x50;
    do {
      *plVar8 = *(long *)(param_2 + 0x40) + lVar11 + -0x50;
      lVar13 = param_1[2];
      param_1[2] = lVar13 + 8;
      lVar12 = *(long *)(param_2 + 0x40) + lVar11;
      lVar11 = lVar11 + 0xa0;
      *(long *)(lVar13 + 8) = lVar12;
      lVar10 = lVar10 + 2;
      plVar8 = (long *)(param_1[2] + 8);
      param_1[2] = (long)plVar8;
    } while ((long)iVar7 - uVar9 != lVar10);
    if (uVar9 != 0) goto LAB_00390250;
  }
  lVar11 = param_1[1];
LAB_00390270:
  param_1[3] = param_1[3] + 0xc;
  param_1[1] = lVar11 + 0x10;
  param_1[4] = param_1[4] + 8;
  return;
}


