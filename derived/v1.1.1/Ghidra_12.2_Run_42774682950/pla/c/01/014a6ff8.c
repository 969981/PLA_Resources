/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a6ff8; name: FUN_014a6ff8
 */


void FUN_014a6ff8(long param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  byte bVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  plVar11 = *(long **)(param_1 + 0x2c8);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar12 = (long *)plVar11[0x37];
  if (**(int **)(param_1 + 0x1648) == 0) {
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_014a748c;
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar8;
      }
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148c68(&local_50);
    uVar6 = FUN_011171a4(local_50);
    FUN_02c395d0(plVar12,0,uVar6,7,0,1);
    if (local_50 != (long *)0x0) {
      lVar13 = local_50[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    local_50 = (long *)0xa41a9067b14f84fb;
    pcStack_48 = "pane_L_money_00_T_param_money_00";
    local_40 = 0x20;
    local_38 = (long *)0x0;
    FUN_014a6d24(param_1,0xea8fd90c6922f1b0,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    plVar12 = (long *)plVar11[0x29];
    lVar13 = plVar11[0x2a];
    if ((lVar13 != 0) && (*plVar12 != 0x41da1f07f2816cbb)) {
      plVar10 = plVar12 + lVar13 * 6;
      lVar13 = lVar13 * 0x30;
      do {
        lVar13 = lVar13 + -0x30;
        if (lVar13 == 0) {
          plVar12 = plVar10;
          break;
        }
        plVar3 = plVar12 + 6;
        plVar1 = plVar12 + 6;
        plVar12 = plVar3;
      } while (*plVar1 != 0x41da1f07f2816cbb);
    }
    lVar13 = plVar12[4];
    bVar9 = *(byte *)(lVar13 + 0x58) & 0xfe;
  }
  else {
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_014a748c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
        *(undefined8 *)(lVar13 + 0x10) = uVar8;
      }
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01149164(&local_50);
    uVar6 = FUN_010d90c0(local_50);
    FUN_02c395d0(plVar12,0,uVar6,7,0,1);
    if (local_50 != (long *)0x0) {
      lVar13 = local_50[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
    }
    local_50 = (long *)0xa41a9067b14f84fb;
    pcStack_48 = "pane_L_money_00_T_param_money_00";
    local_40 = 0x20;
    local_38 = (long *)0x0;
    FUN_014a6d24(param_1,0xea8fdf0c6922fbe2,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    plVar12 = (long *)plVar11[0x29];
    lVar13 = plVar11[0x2a];
    if ((lVar13 != 0) && (*plVar12 != 0x41da1f07f2816cbb)) {
      plVar10 = plVar12 + lVar13 * 6;
      lVar13 = lVar13 * 0x30;
      do {
        lVar13 = lVar13 + -0x30;
        if (lVar13 == 0) {
          plVar12 = plVar10;
          break;
        }
        plVar3 = plVar12 + 6;
        plVar1 = plVar12 + 6;
        plVar12 = plVar3;
      } while (*plVar1 != 0x41da1f07f2816cbb);
    }
    lVar13 = plVar12[4];
    bVar9 = *(byte *)(lVar13 + 0x58) | 1;
  }
  *(byte *)(lVar13 + 0x58) = bVar9;
  plVar12 = plVar11 + 10;
  do {
    iVar7 = (int)*plVar12 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *(int *)plVar12 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  return;
}


