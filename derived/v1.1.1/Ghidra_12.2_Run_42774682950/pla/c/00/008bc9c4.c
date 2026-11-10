/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bc9c4; name: FUN_008bc9c4
 */


void FUN_008bc9c4(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *local_40;
  long *local_38;
  
  local_38 = *(long **)(param_1 + 0x90);
  if (local_38 != (long *)0x0) {
    lVar13 = local_38[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_008bcd44;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar14 = *(long *)(param_1 + 0x98);
    lVar13 = *(long *)(lVar14 + 8);
    lVar6 = *(long *)(lVar14 + 0x10) - lVar13;
    uVar9 = 0;
    if (lVar6 != 0) {
      uVar9 = lVar6 * 0x40 - 1;
    }
    uVar10 = *(long *)(lVar14 + 0x48) + *(long *)(lVar14 + 0x40);
    if (uVar9 == uVar10) {
      FUN_008bd818(lVar14);
      uVar10 = *(long *)(lVar14 + 0x40) + *(long *)(lVar14 + 0x48);
      lVar13 = *(long *)(lVar14 + 8);
      if (*(long *)(lVar14 + 0x10) != lVar13) goto LAB_008bca58;
LAB_008bccb4:
      lVar13 = 0;
    }
    else {
      if (*(long *)(lVar14 + 0x10) == lVar13) goto LAB_008bccb4;
LAB_008bca58:
      lVar13 = *(long *)(lVar13 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8;
    }
    FUN_008be660(lVar14 + 0x50,lVar13,&local_38);
    *(long *)(lVar14 + 0x48) = *(long *)(lVar14 + 0x48) + 1;
    if (local_38 != (long *)0x0) {
      lVar13 = local_38[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  local_40 = (long *)*param_2;
  if (local_40 != (long *)0x0) {
    lVar13 = local_40[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_008bcd44;
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar14 = *(long *)(param_1 + 0x98);
    lVar13 = *(long *)(lVar14 + 8);
    lVar6 = *(long *)(lVar14 + 0x10) - lVar13;
    uVar9 = 0;
    if (lVar6 != 0) {
      uVar9 = lVar6 * 0x40 - 1;
    }
    uVar10 = *(long *)(lVar14 + 0x48) + *(long *)(lVar14 + 0x40);
    if (uVar9 == uVar10) {
      FUN_008bd818(lVar14);
      uVar10 = *(long *)(lVar14 + 0x40) + *(long *)(lVar14 + 0x48);
      lVar13 = *(long *)(lVar14 + 8);
      if (*(long *)(lVar14 + 0x10) != lVar13) goto LAB_008bcb20;
LAB_008bccd8:
      lVar13 = 0;
    }
    else {
      if (*(long *)(lVar14 + 0x10) == lVar13) goto LAB_008bccd8;
LAB_008bcb20:
      lVar13 = *(long *)(lVar13 + (uVar10 >> 6 & 0x3fffffffffffff8)) + (uVar10 & 0x1ff) * 8;
    }
    FUN_008be660(lVar14 + 0x50,lVar13,&local_40);
    *(long *)(lVar14 + 0x48) = *(long *)(lVar14 + 0x48) + 1;
    if (local_40 != (long *)0x0) {
      lVar13 = local_40[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
  }
  lVar13 = *(long *)(param_1 + 0x98);
  if (*(long *)(lVar13 + 0x48) == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    uVar9 = (*(long *)(lVar13 + 0x48) + *(long *)(lVar13 + 0x40)) - 1;
    plVar12 = *(long **)(*(long *)(*(long *)(lVar13 + 8) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                        (uVar9 & 0x1ff) * 8);
    plVar11 = plVar12;
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_008bcd44:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_008be788(*(undefined8 *)(param_1 + 0x98));
      lVar13 = plVar12[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_008bcd44;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      bVar4 = false;
      goto LAB_008bcb84;
    }
    FUN_008be788();
  }
  plVar12 = (long *)0x0;
  bVar4 = true;
LAB_008bcb84:
  plVar8 = *(long **)(param_1 + 0x90);
  *(long **)(param_1 + 0x90) = plVar12;
  if (plVar8 != (long *)0x0) {
    lVar13 = plVar8[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  if (!bVar4) {
    lVar13 = plVar11[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x008bcd18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x20))(plVar11);
      return;
    }
  }
  return;
}


