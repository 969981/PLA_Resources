/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ed88c; name: FUN_031ed88c
 */


void FUN_031ed88c(long param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  
  lVar11 = (long)DAT_0444b53c;
  lVar12 = tpidr_el0;
  lVar9 = *(long *)(lVar12 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar11 * 8 + 0x18) != 0) {
    FUN_0332a954();
  }
  puVar5 = PTR_PTR_0434a080;
  iVar2 = *(int *)(param_1 + 0xb0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0xc0);
  }
  else {
    iVar13 = 0;
    uVar14 = 0x295c9ad;
    do {
      while( true ) {
        iVar4 = iVar2 - iVar13;
        iVar10 = iVar4;
        if (0xae < iVar4) {
          iVar10 = 0xaf;
        }
        if (0 < iVar4) {
          iVar8 = *(int *)(param_1 + 0xb0);
          iVar4 = iVar10 + iVar13;
          do {
            lVar9 = *(long *)(param_1 + 0xa8) + (long)iVar8 * 0x10;
            *(undefined4 *)(lVar9 + -8) = 0;
            if ((-1 < *(int *)(lVar9 + -4)) && (*(long *)(lVar9 + -0x10) != 0)) {
              (**(code **)(*(long *)puVar5 + 0x18))
                        (puVar5,*(long *)(lVar9 + -0x10),*(int *)(lVar9 + -4) << 2);
            }
            *(undefined8 *)(lVar9 + -0x10) = 0;
            iVar13 = iVar13 + 1;
            *(undefined4 *)(lVar9 + -4) = 0x80000000;
            iVar8 = *(int *)(param_1 + 0xb0) + -1;
            *(int *)(param_1 + 0xb0) = iVar8;
          } while (iVar13 < iVar4);
        }
        bVar6 = CARRY4(iVar10 * 0x5d2b63,uVar14);
        uVar14 = iVar10 * 0x5d2b63 + uVar14;
        if (bVar6) break;
LAB_031ed990:
        if (iVar13 == iVar2) goto LAB_031ed998;
      }
      lVar11 = (long)DAT_0444b53c;
      lVar9 = *(long *)(lVar12 + 0x38d490);
      if (lVar9 == 0) {
        lVar9 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar9;
      }
      if (*(long *)(lVar9 + lVar11 * 8 + 0x18) == 0) goto LAB_031ed990;
      FUN_0332a954();
    } while (iVar13 != iVar2);
LAB_031ed998:
    iVar2 = *(int *)(param_1 + 0xc0);
  }
  if (iVar2 != 0) {
    lVar9 = *(long *)(param_1 + 0xb8);
    lVar12 = (long)iVar2 << 6;
    do {
      lVar11 = lVar9 + lVar12;
      *(undefined4 *)(lVar11 + -8) = 0;
      if ((-1 < *(int *)(lVar11 + -4)) && (*(long *)(lVar11 + -0x10) != 0)) {
        (**(code **)(*(long *)puVar5 + 0x18))
                  (puVar5,*(long *)(lVar11 + -0x10),*(int *)(lVar11 + -4) << 2);
      }
      lVar12 = lVar12 + -0x40;
      *(undefined8 *)(lVar11 + -0x10) = 0;
      *(undefined4 *)(lVar11 + -4) = 0x80000000;
    } while (lVar12 != 0);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xc4)) && (*(long *)(param_1 + 0xb8) != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,*(long *)(param_1 + 0xb8),((ulong)*(uint *)(param_1 + 0xc4) & 0x3fffffff) << 6
              );
  }
  lVar12 = (long)*(int *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x80000000;
  if (*(int *)(param_1 + 0xb0) != 0) {
    plVar7 = *(long **)(param_1 + 0xa8);
    iVar2 = *(int *)((long)plVar7 + lVar12 * 0x10 + -4);
    *(undefined4 *)(plVar7 + lVar12 * 2 + -1) = 0;
    if ((-1 < iVar2) && (lVar9 = plVar7[lVar12 * 2 + -2], lVar9 != 0)) {
      (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar9,iVar2 << 2);
    }
    plVar7[lVar12 * 2 + -2] = 0;
    *(undefined4 *)((long)plVar7 + lVar12 * 0x10 + -4) = 0x80000000;
    if (plVar7 + lVar12 * 2 + -2 != plVar7) {
      lVar12 = lVar12 << 4;
      do {
        iVar2 = *(int *)((long)plVar7 + lVar12 + -0x14);
        *(undefined4 *)((long)plVar7 + lVar12 + -0x18) = 0;
        if ((-1 < iVar2) && (lVar9 = *(long *)((long)plVar7 + lVar12 + -0x20), lVar9 != 0)) {
          (**(code **)(*(long *)puVar5 + 0x18))(puVar5,lVar9,iVar2 << 2);
        }
        lVar9 = lVar12 + -0x10;
        *(undefined8 *)((long)plVar7 + lVar12 + -0x20) = 0;
        *(undefined4 *)((long)plVar7 + lVar12 + -0x14) = 0x80000000;
        lVar12 = lVar9;
      } while (lVar9 != 0x10);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(long *)(param_1 + 0xa8) != 0)) {
    (**(code **)(*(long *)puVar5 + 0x18))
              (puVar5,*(long *)(param_1 + 0xa8),((ulong)*(uint *)(param_1 + 0xb4) & 0x3fffffff) << 4
              );
  }
  plVar7 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
      plVar7 = *(long **)(param_1 + 8);
      goto joined_r0x031eda24;
    }
  }
  plVar7 = *(long **)(param_1 + 8);
joined_r0x031eda24:
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar12 = *plVar1;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x031edb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))();
      return;
    }
  }
  return;
}


