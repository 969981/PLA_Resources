/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03177de8; name: FUN_03177de8
 */


void FUN_03177de8(long param_1,int *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
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
    piVar10 = (int *)(*(long *)(param_1 + 0x38) + 0x1c);
    do {
      if ((*piVar10 == *(int *)(param_3 + 0x18)) && (*(long *)(piVar10 + -5) != 0))
      goto LAB_03177e5c;
      lVar12 = lVar12 + 1;
      piVar10 = piVar10 + 0x3c;
    } while (iVar13 != lVar12);
    lVar12 = 0xffffffff;
  }
LAB_03177e5c:
  iVar11 = (int)lVar12;
  if (iVar13 < 1) {
    lVar12 = 0xffffffff;
  }
  else {
    lVar12 = 0;
    piVar10 = (int *)(*(long *)(param_1 + 0x38) + 0x1c);
    do {
      if ((*piVar10 == *(int *)(param_3 + 0x1c)) && (*(long *)(piVar10 + -5) != 0))
      goto LAB_03177eac;
      lVar12 = lVar12 + 1;
      piVar10 = piVar10 + 0x3c;
    } while (iVar13 != lVar12);
    lVar12 = 0xffffffff;
  }
LAB_03177eac:
  iVar13 = (int)lVar12;
  if (((iVar11 != -1) && (iVar13 != -1)) && ((iVar11 == *param_2 || (iVar13 == *param_2)))) {
    iVar2 = *(int *)(param_1 + 0x50);
    lVar12 = tpidr_el0;
    lVar9 = *(long *)(lVar12 + 0x38d490);
    local_58[0] = iVar13;
    local_48[0] = iVar11;
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar9;
    }
    plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    local_60 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x38,0);
    local_60[2] = 1;
    *local_60 = (long)&PTR_LAB_0430a690;
    local_60[1] = 0xffffffff;
    plVar6 = local_60 + 4;
    *plVar6 = 0;
    local_60[5] = 0;
    local_60[6] = -0x8000000000000000;
    *(int *)(local_60 + 3) = iVar11;
    *(int *)((long)local_60 + 0x1c) = iVar13;
    if ((param_3 == 0) || (*(long *)(param_3 + 8) == 0)) {
      *plVar6 = param_3;
    }
    else {
      plVar7 = (long *)(param_3 + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar7 = (long *)*plVar6;
      *plVar6 = param_3;
      if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
        plVar6 = plVar7 + 2;
        do {
          lVar12 = *plVar6;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar4) {
            *plVar6 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
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
    plVar6 = (long *)(lVar12 + 0xa0);
    uVar5 = FUN_0317c494(plVar6,local_58);
    puVar14 = (uint *)(lVar12 + 0xa8);
    if (*puVar14 == uVar5) {
      lVar12 = *plVar6;
      uVar1 = uVar5 + 1;
      if ((int)(*(uint *)(lVar9 + (long)iVar13 * 0xf0 + 0xac) & 0x3fffffff) <= (int)uVar5) {
        lVar12 = FUN_0317c57c(PTR_PTR_0434a080,uVar1);
        *plVar6 = lVar12;
        uVar5 = *puVar14;
      }
      piVar10 = (int *)(lVar12 + (long)(int)uVar5 * 8);
      *piVar10 = local_58[0];
      piVar10[1] = iVar2;
      *puVar14 = uVar1;
    }
    else {
      *(int *)(*plVar6 + ((long)((ulong)uVar5 << 0x20) >> 0x1d) + 4) = iVar2;
    }
    iVar11 = local_58[0];
    lVar9 = *(long *)(param_1 + 0x38);
    lVar12 = lVar9 + (long)local_58[0] * 0xf0;
    plVar6 = (long *)(lVar12 + 0xa0);
    uVar5 = FUN_0317c494(plVar6,local_48);
    puVar14 = (uint *)(lVar12 + 0xa8);
    if (*puVar14 == uVar5) {
      lVar12 = *plVar6;
      uVar1 = uVar5 + 1;
      if ((int)(*(uint *)(lVar9 + (long)iVar11 * 0xf0 + 0xac) & 0x3fffffff) <= (int)uVar5) {
        lVar12 = FUN_0317c57c(PTR_PTR_0434a080,uVar1);
        *plVar6 = lVar12;
        uVar5 = *puVar14;
      }
      piVar10 = (int *)(lVar12 + (long)(int)uVar5 * 8);
      *piVar10 = iVar13;
      piVar10[1] = iVar2;
      *puVar14 = uVar1;
    }
    else {
      *(int *)(*plVar6 + ((long)((ulong)uVar5 << 0x20) >> 0x1d) + 4) = iVar2;
    }
    if ((local_60 != (long *)0x0) && (local_60[1] != 0)) {
      plVar6 = local_60 + 2;
      do {
        lVar12 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 + -1 == 0) {
        (**(code **)(*local_60 + 0x18))();
      }
    }
  }
  return;
}


