/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d66a38; name: FUN_00d66a38
 */


void FUN_00d66a38(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  lVar11 = *(long *)(param_1 + 0x5d8);
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar6 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  if (lVar11 != *(long *)PTR_DAT_0437a0d8) {
    plVar12 = *(long **)(param_1 + 0x2c8);
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar13 = (long *)plVar12[0x37];
    if (plVar13 == (long *)0x0) {
      FUN_02c395d0(0,*(undefined2 *)(param_1 + 0x5f0),*(undefined4 *)(param_1 + 0x62c),3,2,1);
    }
    else {
      lVar11 = plVar13[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02c395d0(plVar13,*(undefined2 *)(param_1 + 0x5f0),*(undefined4 *)(param_1 + 0x62c),3,2,1);
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    plVar13 = plVar12 + 10;
    do {
      iVar6 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    lVar11 = *(long *)(param_1 + 0x5d8);
    local_50 = 0xe9405c4bca7157c6;
    pcStack_48 = "pane_T_select_00";
    local_40 = 0x10;
    local_38 = (long *)0x0;
    plVar12 = *(long **)(param_1 + 0x2c8);
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *(int *)plVar13 = (int)*plVar13 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar8 = *(long *)(param_1 + 0x5c8);
    plVar13 = (long *)plVar12[0x38];
    if (plVar13 == (long *)0x0) {
      lVar10 = *(long *)(lVar8 + 0xb0);
      if (lVar10 != 0) {
        plVar13 = *(long **)(lVar10 + 0x270);
        if (plVar13 != *(long **)(lVar10 + 0x278)) {
          iVar6 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar13 != 0) {
              plVar3 = (long *)(*plVar13 + 0x58);
            }
            if (*plVar3 == lVar11) goto LAB_00d66da8;
            plVar13 = plVar13 + 1;
            iVar6 = iVar6 + 1;
          } while (*(long **)(lVar10 + 0x278) != plVar13);
        }
      }
      iVar6 = 0;
LAB_00d66da8:
      FUN_02c2e33c(lVar8,iVar6,0);
    }
    else {
      plVar3 = plVar13 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar10 = *(long *)(lVar8 + 0xb0);
      if (lVar10 != 0) {
        plVar9 = *(long **)(lVar10 + 0x270);
        if (plVar9 != *(long **)(lVar10 + 0x278)) {
          iVar6 = 0;
          do {
            plVar2 = (long *)PTR_DAT_04379c88;
            if (*plVar9 != 0) {
              plVar2 = (long *)(*plVar9 + 0x58);
            }
            if (*plVar2 == lVar11) goto LAB_00d66bdc;
            plVar9 = plVar9 + 1;
            iVar6 = iVar6 + 1;
          } while (*(long **)(lVar10 + 0x278) != plVar9);
        }
      }
      iVar6 = 0;
LAB_00d66bdc:
      FUN_02c2e33c(lVar8,iVar6,plVar13);
      do {
        iVar6 = (int)*plVar3 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *(int *)plVar3 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    lVar11 = plVar12[0x38];
    lVar8 = plVar12[0x39];
    lVar10 = plVar12[0x37];
    *(undefined4 *)(lVar10 + 0x124) = 0;
    *(undefined2 *)(lVar10 + 0x128) = 0;
    *(undefined4 *)(lVar10 + 300) = 0;
    *(undefined4 *)(lVar10 + 0x134) = 0;
    FUN_02c33414(lVar10,lVar11);
    if (*(char *)(lVar8 + 0x7c) != '\0') {
      **(undefined2 **)(lVar8 + 0x58) = 0;
      *(undefined2 *)(lVar8 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar10,lVar8,lVar11,0,0);
    FUN_0283ce7c(plVar12,&local_50,plVar12[0x39],10);
    plVar13 = plVar12 + 10;
    do {
      iVar6 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


