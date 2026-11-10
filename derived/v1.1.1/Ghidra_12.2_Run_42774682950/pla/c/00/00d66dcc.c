/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d66dcc; name: FUN_00d66dcc
 */


void FUN_00d66dcc(long param_1)

{
  int *piVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar12 = *(long *)(param_1 + 0x5e0);
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  if (lVar12 != *(long *)PTR_DAT_0437a0d8) {
    plVar13 = *(long **)(param_1 + 0x2c8);
    uVar2 = *(uint *)(param_1 + 0x5bc);
    if (*(uint *)(param_1 + 0x630) <= *(uint *)(param_1 + 0x5bc)) {
      uVar2 = *(uint *)(param_1 + 0x630);
    }
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar14 = (long *)plVar13[0x37];
    if (plVar14 == (long *)0x0) {
      FUN_02c395d0(0,*(undefined2 *)(param_1 + 0x5f2),uVar2,*(undefined4 *)(param_1 + 0x5c0),0,1);
    }
    else {
      lVar12 = plVar14[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      FUN_02c395d0(plVar14,*(undefined2 *)(param_1 + 0x5f2),uVar2,*(undefined4 *)(param_1 + 0x5c0),0
                   ,1);
      lVar12 = plVar14[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
    plVar14 = plVar13 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    lVar12 = *(long *)(param_1 + 0x5e0);
    local_60 = 0xe3bf5556fb33a90;
    pcStack_58 = "pane_T_money_00";
    local_50 = 0xf;
    local_48 = (long *)0x0;
    plVar13 = *(long **)(param_1 + 0x2c8);
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar6) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar9 = *(long *)(param_1 + 0x5c8);
    plVar14 = (long *)plVar13[0x38];
    if (plVar14 == (long *)0x0) {
      lVar11 = *(long *)(lVar9 + 0xb0);
      if (lVar11 != 0) {
        plVar14 = *(long **)(lVar11 + 0x270);
        if (plVar14 != *(long **)(lVar11 + 0x278)) {
          iVar7 = 0;
          do {
            plVar4 = (long *)PTR_DAT_04379c88;
            if (*plVar14 != 0) {
              plVar4 = (long *)(*plVar14 + 0x58);
            }
            if (*plVar4 == lVar12) goto LAB_00d67154;
            plVar14 = plVar14 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar11 + 0x278) != plVar14);
        }
      }
      iVar7 = 0;
LAB_00d67154:
      FUN_02c2e33c(lVar9,iVar7,0);
    }
    else {
      plVar4 = plVar14 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *(int *)plVar4 = (int)*plVar4 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar11 = *(long *)(lVar9 + 0xb0);
      if (lVar11 != 0) {
        plVar10 = *(long **)(lVar11 + 0x270);
        if (plVar10 != *(long **)(lVar11 + 0x278)) {
          iVar7 = 0;
          do {
            plVar3 = (long *)PTR_DAT_04379c88;
            if (*plVar10 != 0) {
              plVar3 = (long *)(*plVar10 + 0x58);
            }
            if (*plVar3 == lVar12) goto LAB_00d66f84;
            plVar10 = plVar10 + 1;
            iVar7 = iVar7 + 1;
          } while (*(long **)(lVar11 + 0x278) != plVar10);
        }
      }
      iVar7 = 0;
LAB_00d66f84:
      FUN_02c2e33c(lVar9,iVar7,plVar14);
      do {
        iVar7 = (int)*plVar4 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar6) {
          *(int *)plVar4 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    lVar12 = plVar13[0x38];
    lVar9 = plVar13[0x39];
    lVar11 = plVar13[0x37];
    *(undefined4 *)(lVar11 + 0x124) = 0;
    *(undefined2 *)(lVar11 + 0x128) = 0;
    *(undefined4 *)(lVar11 + 300) = 0;
    *(undefined4 *)(lVar11 + 0x134) = 0;
    FUN_02c33414(lVar11,lVar12);
    if (*(char *)(lVar9 + 0x7c) != '\0') {
      **(undefined2 **)(lVar9 + 0x58) = 0;
      *(undefined2 *)(lVar9 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar11,lVar9,lVar12,0,0);
    FUN_0283ce7c(plVar13,&local_60,plVar13[0x39],10);
    plVar14 = plVar13 + 10;
    do {
      iVar7 = (int)*plVar14 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar6) {
        *(int *)plVar14 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return;
}


