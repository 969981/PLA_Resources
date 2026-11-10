/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ed430; name: FUN_031ed430
 */


void FUN_031ed430(long param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  int iVar7;
  int *piVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  undefined *local_108;
  undefined1 local_100;
  long local_f8;
  long lStack_f0;
  int local_e8;
  long local_e0;
  undefined4 *puStack_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70 [2];
  
  lVar13 = *(long *)(param_1 + 0xb0);
  piVar8 = (int *)(lVar13 + (long)param_2 * 0x60);
  iVar2 = *piVar8;
  lVar3 = (long)piVar8[1];
  lVar15 = *(long *)(param_1 + 0xa0);
  lVar11 = *(long *)(param_1 + 0x90);
  local_78 = 0xffffffff;
  local_70[0] = (undefined *)0x1;
  local_80 = &DAT_042f10e0;
  ppuVar12 = *(undefined ***)(param_1 + 400);
  if (ppuVar12 == (undefined **)0x0) {
    ppuVar9 = local_70;
    ppuVar12 = &local_80;
  }
  else {
    if (ppuVar12[1] == (undefined *)0x0) goto LAB_031ed4ac;
    ppuVar9 = ppuVar12 + 2;
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
    if (bVar5) {
      *ppuVar9 = *ppuVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_031ed4ac:
  if (ppuVar12[1] != (undefined *)0x0) {
    ppuVar9 = ppuVar12 + 2;
    do {
      puVar10 = *ppuVar9;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppuVar9,0x10);
      if (bVar5) {
        *ppuVar9 = puVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (puVar10 + -1 == (undefined *)0x0) {
      (**(code **)(*ppuVar12 + 0x18))(ppuVar12);
    }
  }
  if (*(char *)(lVar13 + (long)param_2 * 0x60 + 8) != '\0') {
    local_c8 = 0xffffffff;
    local_c0 = 0;
    local_b8 = 0;
    local_d0 = PTR_DAT_04388cf0 + 0x10;
    puVar16 = (undefined8 *)(lVar15 + (long)iVar2 * 0x60);
    local_b0 = *puVar16;
    lVar13 = lVar13 + (long)param_2 * 0x60;
    lVar17 = lVar11 + lVar3 * 0xd0;
    puVar14 = (undefined8 *)(lVar13 + 0x10);
    uStack_98 = *(undefined8 *)(lVar13 + 0x18);
    local_a0 = *puVar14;
    uStack_88 = *(undefined8 *)(lVar13 + 0x28);
    local_90 = *(undefined8 *)(lVar13 + 0x20);
    piVar8 = (int *)(lVar17 + 0xc0);
    iVar7 = *piVar8;
    iVar2 = iVar7 + 1;
    lVar15 = *(long *)(lVar17 + 0xb8);
    if ((int)(*(uint *)(lVar17 + 0xc4) & 0x3fffffff) <= iVar7) {
      lVar15 = FUN_031ee514(PTR_PTR_0434a080,iVar2);
      *(long *)(lVar17 + 0xb8) = lVar15;
      iVar7 = *piVar8;
    }
    puVar1 = (undefined4 *)(lVar15 + (long)iVar7 * 0x40);
    *piVar8 = iVar2;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0x8000000000000000;
    if (*(int *)(param_1 + 0x188) < 1) {
      uVar18 = 0x3f800000;
    }
    else {
      uVar18 = (**(code **)(*ppuVar12 + 0x28))(ppuVar12,*puVar16,puVar14,param_1 + 0x150);
    }
    *puVar1 = uVar18;
    uVar19 = *puVar14;
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(lVar13 + 0x18);
    *(undefined8 *)(puVar1 + 4) = uVar19;
    uVar19 = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(lVar13 + 0x28);
    *(undefined8 *)(puVar1 + 8) = uVar19;
    local_100 = 0;
    local_108 = &DAT_042f1080;
    local_f8 = *(long *)(param_1 + 0xb0);
    lStack_f0 = local_f8 + (long)*(int *)(param_1 + 0xb8) * 0x60;
    plVar6 = *(long **)(lVar11 + lVar3 * 0xd0 + 0x10);
    local_e8 = param_2;
    local_e0 = lVar11 + lVar3 * 0xd0;
    puStack_d8 = puVar1;
    (**(code **)(*plVar6 + 0x48))(plVar6,&local_d0,&local_108);
  }
  return;
}


