/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03176d34; name: FUN_03176d34
 */


void FUN_03176d34(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  uint *puVar14;
  long *local_60;
  int local_58 [2];
  int local_48 [2];
  
  iVar13 = *(int *)(param_1 + 0x40);
  if (iVar13 < 1) {
    lVar12 = 0xffffffff;
  }
  else {
    lVar12 = 0;
    plVar10 = *(long **)(param_1 + 0x38);
    do {
      if ((*(int *)((long)plVar10 + 0x1c) == *(int *)(param_3 + 0x18)) && (*plVar10 != 0))
      goto LAB_03176da4;
      lVar12 = lVar12 + 1;
      plVar10 = plVar10 + 0x1e;
    } while (iVar13 != lVar12);
    lVar12 = 0xffffffff;
  }
LAB_03176da4:
  iVar11 = (int)lVar12;
  if (iVar13 < 1) {
    lVar12 = 0xffffffff;
  }
  else {
    lVar12 = 0;
    plVar10 = *(long **)(param_1 + 0x38);
    do {
      if ((*(int *)((long)plVar10 + 0x1c) == *(int *)(param_3 + 0x1c)) && (*plVar10 != 0))
      goto LAB_03176df0;
      lVar12 = lVar12 + 1;
      plVar10 = plVar10 + 0x1e;
    } while (iVar13 != lVar12);
    lVar12 = 0xffffffff;
  }
LAB_03176df0:
  iVar13 = (int)lVar12;
  if (((iVar11 != -1) && (iVar13 != -1)) && ((iVar11 == *param_2 || (iVar13 == *param_2)))) {
    iVar3 = *(int *)(param_1 + 0x50);
    lVar12 = tpidr_el0;
    lVar9 = *(long *)(lVar12 + 0x38d490);
    local_58[0] = iVar13;
    local_48[0] = iVar11;
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar9;
    }
    plVar10 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    local_60 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x38,0);
    local_60[2] = 1;
    *local_60 = (long)&PTR_LAB_0430a690;
    local_60[1] = 0xffffffff;
    plVar10 = local_60 + 4;
    *plVar10 = 0;
    local_60[5] = 0;
    local_60[6] = -0x8000000000000000;
    *(int *)(local_60 + 3) = iVar11;
    *(int *)((long)local_60 + 0x1c) = iVar13;
    if ((param_3 == 0) || (*(long *)(param_3 + 8) == 0)) {
      *plVar10 = param_3;
    }
    else {
      plVar7 = (long *)(param_3 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      plVar7 = (long *)*plVar10;
      *plVar10 = param_3;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar10 = plVar7 + 2;
        do {
          lVar12 = *plVar10;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *plVar10 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 + -1 == 0) {
          (**(code **)(*plVar7 + 0x18))();
        }
      }
    }
    iVar11 = *(int *)(param_1 + 0x50);
    lVar12 = *(long *)(param_1 + 0x48);
    iVar13 = iVar11 + 1;
    if ((int)(*(uint *)(param_1 + 0x54) & 0x3fffffff) <= iVar11) {
      lVar12 = FUN_0317a650(PTR_PTR_0434a080,iVar13);
      iVar11 = *(int *)(param_1 + 0x50);
      *(long *)(param_1 + 0x48) = lVar12;
    }
    puVar8 = (undefined8 *)(lVar12 + (long)iVar11 * 0x18);
    *(int *)(param_1 + 0x50) = iVar13;
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined1 *)(puVar8 + 2) = 1;
    FUN_03178344(puVar8,&local_60);
    iVar13 = local_48[0];
    lVar9 = *(long *)(param_1 + 0x38);
    lVar12 = lVar9 + (long)local_48[0] * 0xf0;
    plVar10 = (long *)(lVar12 + 0xa0);
    uVar6 = FUN_0317c494(plVar10,local_58);
    puVar14 = (uint *)(lVar12 + 0xa8);
    if (*puVar14 == uVar6) {
      lVar12 = *plVar10;
      uVar2 = uVar6 + 1;
      if ((int)(*(uint *)(lVar9 + (long)iVar13 * 0xf0 + 0xac) & 0x3fffffff) <= (int)uVar6) {
        lVar12 = FUN_0317c57c(PTR_PTR_0434a080,uVar2);
        *plVar10 = lVar12;
        uVar6 = *puVar14;
      }
      piVar1 = (int *)(lVar12 + (long)(int)uVar6 * 8);
      *piVar1 = local_58[0];
      piVar1[1] = iVar3;
      *puVar14 = uVar2;
    }
    else {
      *(int *)(*plVar10 + ((long)((ulong)uVar6 << 0x20) >> 0x1d) + 4) = iVar3;
    }
    iVar11 = local_58[0];
    lVar9 = *(long *)(param_1 + 0x38);
    lVar12 = lVar9 + (long)local_58[0] * 0xf0;
    plVar10 = (long *)(lVar12 + 0xa0);
    uVar6 = FUN_0317c494(plVar10,local_48);
    puVar14 = (uint *)(lVar12 + 0xa8);
    if (*puVar14 == uVar6) {
      lVar12 = *plVar10;
      uVar2 = uVar6 + 1;
      if ((int)(*(uint *)(lVar9 + (long)iVar11 * 0xf0 + 0xac) & 0x3fffffff) <= (int)uVar6) {
        lVar12 = FUN_0317c57c(PTR_PTR_0434a080,uVar2);
        *plVar10 = lVar12;
        uVar6 = *puVar14;
      }
      piVar1 = (int *)(lVar12 + (long)(int)uVar6 * 8);
      *piVar1 = iVar13;
      piVar1[1] = iVar3;
      *puVar14 = uVar2;
    }
    else {
      *(int *)(*plVar10 + ((long)((ulong)uVar6 << 0x20) >> 0x1d) + 4) = iVar3;
    }
    if ((local_60 != (long *)0x0) && (local_60[1] != 0)) {
      plVar10 = local_60 + 2;
      do {
        lVar12 = *plVar10;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar5) {
          *plVar10 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))();
      }
    }
  }
  return;
}


