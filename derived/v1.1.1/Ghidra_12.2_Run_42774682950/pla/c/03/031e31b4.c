/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e31b4; name: FUN_031e31b4
 */


long FUN_031e31b4(long param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  uint *puVar14;
  long *plVar15;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  iVar3 = *param_2;
  plVar12 = (long *)(param_1 + 8);
  iVar6 = *param_3;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  iVar7 = iVar6;
  if (iVar6 <= iVar3) {
    iVar7 = iVar3;
    iVar3 = iVar6;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0x8000000000000000;
  FUN_032c2320(&local_b0);
  local_a0 = 0;
  uStack_98 = 0x8000000000000000;
  FUN_032c2320(&local_90);
  local_80 = 0;
  uStack_78 = 0x8000000000000000;
  FUN_032c2320(&local_70);
  iVar6 = FUN_031e3110(plVar12,param_2,&local_c0);
  FUN_031cd728(&local_c0);
  lVar13 = *(long *)(param_1 + 8) + (long)iVar6 * 0x68;
  local_c0 = 0;
  lVar9 = FUN_031e3670(lVar13 + 0x48,param_3,&local_c0);
  plVar15 = (long *)(*(long *)(lVar13 + 0x48) + ((lVar9 << 0x20) >> 0x1c) + 8);
  if (*plVar15 == 0) {
    plVar10 = (long *)FUN_032cf5b0(0x60);
    plVar10[2] = 1;
    *plVar10 = (long)&PTR_LAB_0430a6d8;
    plVar10[1] = 0xffffffff;
    plVar10[4] = 0;
    plVar10[5] = -0x8000000000000000;
    FUN_032c2320(plVar10 + 6);
    plVar10[8] = 0;
    plVar10[9] = -0x8000000000000000;
    FUN_032c2320(plVar10 + 10);
    plVar11 = (long *)*plVar15;
    if ((plVar11 != plVar10) && (*plVar15 = (long)plVar10, plVar11 != (long *)0x0)) {
      if (plVar11[1] != 0) {
        plVar10 = plVar11 + 2;
        do {
          lVar9 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar11 + 0x18))();
        }
      }
      plVar10 = (long *)*plVar15;
    }
    *(int *)(plVar10 + 3) = iVar3;
    *(int *)((long)plVar10 + 0x1c) = iVar7;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0x8000000000000000;
    FUN_032c2320(&local_b0);
    local_a0 = 0;
    uStack_98 = 0x8000000000000000;
    FUN_032c2320(&local_90);
    local_80 = 0;
    uStack_78 = 0x8000000000000000;
    FUN_032c2320(&local_70);
    iVar7 = FUN_031e3110(plVar12,param_3,&local_c0);
    FUN_031cd728(&local_c0);
    lVar13 = *plVar12;
    lVar9 = lVar13 + (long)iVar7 * 0x68;
    plVar12 = (long *)(lVar9 + 0x48);
    uVar8 = FUN_031e4f3c(plVar12,param_2);
    puVar14 = (uint *)(lVar9 + 0x50);
    if (*puVar14 == uVar8) {
      lVar9 = *plVar12;
      uVar2 = uVar8 + 1;
      if ((int)(*(uint *)(lVar13 + (long)iVar7 * 0x68 + 0x54) & 0x3fffffff) <= (int)uVar8) {
        lVar9 = FUN_031e5024(PTR_PTR_0434a080,uVar2);
        *plVar12 = lVar9;
        uVar8 = *puVar14;
      }
      piVar1 = (int *)(lVar9 + (long)(int)uVar8 * 0x10);
      *piVar1 = *param_2;
      lVar9 = *plVar15;
      *(long *)(piVar1 + 2) = lVar9;
      if ((lVar9 != 0) && (*(long *)(lVar9 + 8) != 0)) {
        plVar12 = (long *)(lVar9 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = *plVar12 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      *puVar14 = uVar2;
    }
    else {
      plVar11 = (long *)(*plVar12 + ((long)((ulong)uVar8 << 0x20) >> 0x1c) + 8);
      plVar10 = (long *)*plVar11;
      plVar12 = (long *)*plVar15;
      if (plVar10 != plVar12) {
        if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
          plVar12 = plVar12 + 2;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = *plVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          plVar10 = (long *)*plVar11;
          plVar12 = (long *)*plVar15;
        }
        *plVar11 = (long)plVar12;
        if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
          plVar12 = plVar10 + 2;
          do {
            lVar9 = *plVar12;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar5) {
              *plVar12 = lVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar10 + 0x18))();
          }
        }
      }
    }
  }
  return *plVar15;
}


