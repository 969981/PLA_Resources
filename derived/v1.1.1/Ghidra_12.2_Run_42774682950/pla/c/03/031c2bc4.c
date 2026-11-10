/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c2bc4; name: FUN_031c2bc4
 */


void FUN_031c2bc4(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  long lVar17;
  undefined8 *puVar18;
  
  puVar7 = PTR_PTR_0434a080;
  iVar14 = *(int *)(param_1 + 0x28);
  iVar15 = *(int *)(param_2 + 0x28);
  if ((param_2 != param_1) && (iVar14 < iVar15)) {
    if (*(int *)(param_1 + 0x2c) < 0) {
      FUN_031c5a60(PTR_PTR_0434a080,(long *)(param_1 + 0x20));
    }
    if (*(int *)(param_2 + 0x2c) < 0) {
      FUN_031c5a60(puVar7,(long *)(param_2 + 0x20));
    }
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = uVar12;
    uVar4 = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0x28) = uVar4;
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0x2c) = uVar4;
    iVar15 = *(int *)(param_2 + 0x28);
    iVar14 = *(int *)(param_1 + 0x28);
  }
  lVar17 = *(long *)(param_2 + 0x20);
  iVar2 = iVar15 + iVar14;
  lVar9 = *(long *)(param_1 + 0x20);
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar2) {
    lVar9 = FUN_031c5204(PTR_PTR_0434a080,iVar2,lVar9,iVar14);
    *(long *)(param_1 + 0x20) = lVar9;
  }
  if (0 < iVar15) {
    iVar11 = 0;
    puVar18 = (undefined8 *)(lVar9 + (long)iVar14 * 0x38);
    do {
      *puVar18 = &PTR_LAB_0430a7b0;
      puVar18[1] = 0xffffffff;
      puVar18[2] = 1;
      lVar9 = *(long *)(lVar17 + 0x18);
      puVar18[3] = lVar9;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
        plVar1 = (long *)(lVar9 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar9 = *(long *)(lVar17 + 0x20);
      puVar18[4] = lVar9;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
        plVar1 = (long *)(lVar9 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar12 = *(undefined8 *)(lVar17 + 0x28);
      iVar11 = iVar11 + 1;
      *(undefined8 *)((long)puVar18 + 0x2e) = *(undefined8 *)(lVar17 + 0x2e);
      puVar18[5] = uVar12;
      puVar18 = puVar18 + 7;
      lVar17 = lVar17 + 0x38;
    } while (iVar11 != iVar15);
  }
  *(int *)(param_1 + 0x28) = iVar2;
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar17 = *(long *)(param_2 + 0x20);
    lVar9 = (long)*(int *)(param_2 + 0x28) * 0x38;
    do {
      (**(code **)(*(long *)(lVar17 + -0x38 + lVar9) + 8))();
      lVar9 = lVar9 + -0x38;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  puVar7 = PTR_PTR_0434a080;
  iVar14 = *(int *)(param_1 + 0x38);
  iVar15 = *(int *)(param_2 + 0x38);
  if ((param_2 != param_1) && (iVar14 < iVar15)) {
    if (*(int *)(param_1 + 0x3c) < 0) {
      FUN_031c5bb0(PTR_PTR_0434a080,(long *)(param_1 + 0x30));
    }
    if (*(int *)(param_2 + 0x3c) < 0) {
      FUN_031c5bb0(puVar7,(long *)(param_2 + 0x30));
    }
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = uVar12;
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)(param_2 + 0x38) = uVar4;
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_2 + 0x3c) = uVar4;
    iVar15 = *(int *)(param_2 + 0x38);
    iVar14 = *(int *)(param_1 + 0x38);
  }
  lVar17 = *(long *)(param_2 + 0x30);
  iVar2 = iVar15 + iVar14;
  lVar9 = *(long *)(param_1 + 0x30);
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < iVar2) {
    lVar9 = FUN_031c53f4(PTR_PTR_0434a080,iVar2,lVar9,iVar14);
    *(long *)(param_1 + 0x30) = lVar9;
  }
  if (0 < iVar15) {
    iVar11 = 0;
    puVar18 = (undefined8 *)(lVar9 + (long)iVar14 * 0x38);
    do {
      *puVar18 = &PTR_LAB_0430a810;
      puVar18[1] = 0xffffffff;
      puVar18[2] = 1;
      lVar9 = *(long *)(lVar17 + 0x18);
      puVar18[3] = lVar9;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
        plVar1 = (long *)(lVar9 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      lVar9 = *(long *)(lVar17 + 0x20);
      puVar18[4] = lVar9;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
        plVar1 = (long *)(lVar9 + 0x10);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = *plVar1 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      uVar12 = *(undefined8 *)(lVar17 + 0x28);
      iVar11 = iVar11 + 1;
      *(undefined8 *)((long)puVar18 + 0x2e) = *(undefined8 *)(lVar17 + 0x2e);
      puVar18[5] = uVar12;
      puVar18 = puVar18 + 7;
      lVar17 = lVar17 + 0x38;
    } while (iVar11 != iVar15);
  }
  *(int *)(param_1 + 0x38) = iVar2;
  if (*(int *)(param_2 + 0x38) != 0) {
    lVar17 = *(long *)(param_2 + 0x30);
    lVar9 = (long)*(int *)(param_2 + 0x38) * 0x38;
    do {
      (**(code **)(*(long *)(lVar17 + -0x38 + lVar9) + 8))();
      lVar9 = lVar9 + -0x38;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_2 + 0x38) = 0;
  puVar7 = PTR_PTR_0434a080;
  iVar14 = *(int *)(param_1 + 0x48);
  iVar15 = *(int *)(param_2 + 0x48);
  plVar1 = (long *)(param_1 + 0x40);
  if ((param_2 != param_1) && (iVar14 < iVar15)) {
    if (*(int *)(param_1 + 0x4c) < 0) {
      FUN_032bcf84(PTR_PTR_0434a080,plVar1,8);
      iVar14 = *(int *)(param_2 + 0x4c);
    }
    else {
      iVar14 = *(int *)(param_2 + 0x4c);
    }
    if (iVar14 < 0) {
      FUN_032bcf84(puVar7,(undefined8 *)(param_2 + 0x40),8);
    }
    uVar12 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = uVar12;
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = uVar4;
    uVar4 = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_2 + 0x4c) = uVar4;
    iVar15 = *(int *)(param_2 + 0x48);
    iVar14 = *(int *)(param_1 + 0x48);
  }
  puVar18 = *(undefined8 **)(param_2 + 0x40);
  uVar3 = iVar15 + iVar14;
  puVar16 = (uint *)(param_1 + 0x4c);
  uVar10 = *puVar16;
  if ((int)(uVar10 & 0x3fffffff) < (int)uVar3) {
    lVar9 = *plVar1;
    if (0x3fffffff < (int)uVar3) {
      FUN_032bd0a8(uVar3);
      uVar10 = *puVar16;
    }
    uVar10 = (uVar10 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar10) {
      uVar10 = 0x3fffffff;
    }
    uVar8 = uVar3;
    if ((int)uVar3 <= (int)uVar10) {
      uVar8 = uVar10;
    }
    lVar9 = FUN_032bd1d4(puVar7,uVar8,8,lVar9,iVar14,puVar16);
    *plVar1 = lVar9;
  }
  else {
    lVar9 = *plVar1;
  }
  if (0 < iVar15) {
    puVar13 = (undefined8 *)(lVar9 + (long)iVar14 * 8);
    *puVar13 = *puVar18;
    if (iVar15 != 1) {
      puVar13[1] = puVar18[1];
      iVar15 = iVar15 + -2;
      if (iVar15 != 0) {
        puVar18 = puVar18 + 2;
        puVar13 = (undefined8 *)(lVar9 + (long)iVar14 * 8 + 0x10);
        do {
          iVar15 = iVar15 + -1;
          *puVar13 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar13 = puVar13 + 1;
        } while (iVar15 != 0);
      }
    }
  }
  *(uint *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_2 + 0x48) = 0;
  return;
}


