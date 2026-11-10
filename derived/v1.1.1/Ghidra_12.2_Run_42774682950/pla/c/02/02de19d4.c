/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de19d4; name: FUN_02de19d4
 */


void FUN_02de19d4(long param_1,undefined8 *param_2,int param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  char *pcVar18;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  long *local_88;
  char *pcStack_80;
  long local_78;
  long *local_70;
  long *local_68;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x80) + 0x58);
  lVar16 = *(long *)(param_1 + 0x110);
  lVar8 = lVar11 + 0x1a8;
  if (*(char *)(lVar11 + 0x304) != '\0') {
    lVar8 = lVar11 + 0x1f0;
  }
  FUN_00956dac(&local_88,lVar8);
  if (local_88 == (long *)0x0) {
    return;
  }
  lVar8 = FUN_00a3e9dc(local_88 + 0x1e,auStack_98);
  if (local_88 != (long *)0x0) {
    lVar11 = local_88[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar4 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
  if (lVar8 == 0) {
    return;
  }
  plVar12 = *(long **)(lVar8 + 0x1f0);
  if (plVar12 == (long *)0x0) {
    return;
  }
  lVar8 = (long)param_3;
  plVar2 = plVar12 + 10;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar5 = *(uint *)((long)plVar12 + 0x174);
  if ((1 << (ulong)(uVar5 & 0x1f) &
      (uint)*(byte *)(*(long *)(param_1 + 0x110) + lVar8 * 0x450 + 0x1e4)) == 0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    local_68 = plVar12;
    FUN_02ddd874(param_1,uVar5,&local_68,param_3);
    if (local_68 != (long *)0x0) {
      plVar14 = local_68 + 10;
      do {
        iVar4 = (int)*plVar14 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *(int *)plVar14 = iVar4;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  plVar14 = *(long **)(*(long *)(lVar16 + lVar8 * 0x450 + 0xb0) + (long)(int)uVar5 * 8);
  if (plVar14 == (long *)0x0) goto LAB_02de1d10;
  plVar3 = plVar14 + 10;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *(int *)plVar3 = (int)*plVar3 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_88 = (long *)0x444e7b0e8e77459b;
  pcStack_80 = "UVScaleOffset";
  local_78 = 0xd;
  local_70 = (long *)0x0;
  lVar11 = lVar16 + lVar8 * 0x450;
  if (0 < *(int *)(lVar11 + 0x1e0)) {
    plVar15 = *(long **)(lVar16 + lVar8 * 0x450 + 0x1a0);
    if (plVar15 == (long *)0x0) {
      plVar17 = *(long **)PTR_DAT_04379c88;
LAB_02de1da4:
      pcVar18 = *(char **)PTR_PTR_04379d00;
      if (plVar15 != (long *)0x0) goto LAB_02de1b84;
LAB_02de1db4:
      plVar10 = (long *)0x0;
      lVar13 = 0;
    }
    else {
      plVar17 = (long *)plVar15[0xb];
      if (plVar15 == (long *)0x0) goto LAB_02de1da4;
      pcVar18 = (char *)plVar15[0xc];
      if (plVar15 == (long *)0x0) goto LAB_02de1db4;
LAB_02de1b84:
      lVar13 = plVar15[0xd];
      (**(code **)(*plVar15 + 0x18))(plVar15);
      plVar10 = local_70;
    }
    local_70 = (long *)0x0;
    local_88 = plVar17;
    pcStack_80 = pcVar18;
    local_78 = lVar13;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x20))();
    }
    local_70 = plVar15;
  }
  piVar1 = (int *)(lVar11 + 0x1e0);
  uVar9 = (**(code **)(*(long *)(plVar14[0xc] + 0x58) + 0x58))
                    ((long *)(plVar14[0xc] + 0x58),auStack_98,&local_88);
  if ((uVar9 & 1) != 0) {
    local_90 = *param_2;
    (**(code **)(*(long *)(plVar14[0xc] + 0x58) + 0x30))
              ((long *)(plVar14[0xc] + 0x58),&local_88,auStack_98);
  }
  if (1 < *piVar1) {
    lVar11 = 0x35;
    do {
      plVar17 = *(long **)(lVar16 + lVar8 * 0x450 + lVar11 * 8);
      plVar15 = (long *)PTR_DAT_04379c88;
      if (plVar17 != (long *)0x0) {
        plVar15 = plVar17 + 0xb;
      }
      plVar15 = (long *)*plVar15;
      plVar10 = (long *)PTR_PTR_04379d00;
      if (plVar17 != (long *)0x0) {
        plVar10 = plVar17 + 0xc;
      }
      pcVar18 = (char *)*plVar10;
      if (plVar17 == (long *)0x0) {
        lVar13 = 0;
      }
      else {
        lVar13 = plVar17[0xd];
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
      plVar10 = local_70;
      local_70 = (long *)0x0;
      local_88 = plVar15;
      pcStack_80 = pcVar18;
      local_78 = lVar13;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x20))();
      }
      local_70 = plVar17;
      uVar9 = (**(code **)(*(long *)(plVar14[0xc] + 0x58) + 0x58))
                        ((long *)(plVar14[0xc] + 0x58),auStack_98,&local_88);
      if ((uVar9 & 1) != 0) {
        local_90 = *param_2;
        (**(code **)(*(long *)(plVar14[0xc] + 0x58) + 0x30))
                  ((long *)(plVar14[0xc] + 0x58),&local_88,auStack_98);
      }
      lVar13 = lVar11 + -0x33;
      lVar11 = lVar11 + 1;
    } while (lVar13 < *piVar1);
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  do {
    iVar4 = (int)*plVar3 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *(int *)plVar3 = iVar4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
LAB_02de1d10:
  do {
    iVar4 = (int)*plVar2 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = iVar4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  return;
}


