/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d72228; name: FUN_00d72228
 */


void FUN_00d72228(long param_1,undefined4 param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar11 = *(long **)(param_1 + 0x2c8);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar7 = (int)*plVar12 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379690), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar9 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar9;
  lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0x50) + 0x2d10) + 8);
  if (lVar9 == 0) {
    plVar12 = (long *)0x0;
    plVar13 = (long *)plVar11[0x38];
joined_r0x00d72624:
    if (plVar13 != (long *)0x0) goto LAB_00d7232c;
LAB_00d725a0:
    lVar9 = plVar12[0x16];
    if (lVar9 != 0) {
      plVar13 = *(long **)(lVar9 + 0x270);
      if (plVar13 != *(long **)(lVar9 + 0x278)) {
        iVar7 = 0;
        do {
          plVar3 = (long *)PTR_DAT_04379c88;
          if (*plVar13 != 0) {
            plVar3 = (long *)(*plVar13 + 0x58);
          }
          if (*plVar3 == 0x5840df743c05a29d) goto LAB_00d72604;
          plVar13 = plVar13 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar13);
      }
    }
    iVar7 = 0;
LAB_00d72604:
    FUN_02c2e33c(plVar12,iVar7,0);
    plVar13 = (long *)plVar11[0x37];
  }
  else {
    plVar13 = *(long **)(lVar9 + 0x60);
    if (plVar13 != (long *)0x0) {
      lVar9 = plVar13[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_00d72668;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar12 = (long *)plVar13[0xd];
    if (plVar12 != (long *)0x0) {
      plVar3 = plVar12 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar9 = plVar13[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
      plVar13 = (long *)plVar11[0x38];
      goto joined_r0x00d72624;
    }
    plVar13 = (long *)plVar11[0x38];
    if (plVar13 == (long *)0x0) goto LAB_00d725a0;
LAB_00d7232c:
    plVar3 = plVar13 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = (int)*plVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar9 = plVar12[0x16];
    if (lVar9 != 0) {
      plVar10 = *(long **)(lVar9 + 0x270);
      if (plVar10 != *(long **)(lVar9 + 0x278)) {
        iVar7 = 0;
        do {
          plVar2 = (long *)PTR_DAT_04379c88;
          if (*plVar10 != 0) {
            plVar2 = (long *)(*plVar10 + 0x58);
          }
          if (*plVar2 == 0x5840df743c05a29d) goto LAB_00d723a4;
          plVar10 = plVar10 + 1;
          iVar7 = iVar7 + 1;
        } while (*(long **)(lVar9 + 0x278) != plVar10);
      }
    }
    iVar7 = 0;
LAB_00d723a4:
    FUN_02c2e33c(plVar12,iVar7,plVar13);
    do {
      iVar7 = (int)*plVar3 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar6) {
        *(int *)plVar3 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      plVar13 = (long *)plVar11[0x37];
    }
    else {
      plVar13 = (long *)plVar11[0x37];
    }
  }
  if (plVar13 == (long *)0x0) {
    FUN_02c395d0(0,0,param_2,7,1,1);
  }
  else {
    lVar9 = plVar13[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_00d72668:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    FUN_02c395d0(plVar13,0,param_2,7,1,1);
    lVar9 = plVar13[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  local_50 = 0x15;
  local_48 = (long *)0x0;
  local_60 = 0xad13b0bf583b2726;
  pcStack_58 = "pane_T_param_money_00";
  lVar14 = plVar11[0x37];
  lVar9 = plVar11[0x38];
  lVar4 = plVar11[0x39];
  *(undefined4 *)(lVar14 + 0x124) = 0;
  *(undefined2 *)(lVar14 + 0x128) = 0;
  *(undefined4 *)(lVar14 + 300) = 0;
  *(undefined4 *)(lVar14 + 0x134) = 0;
  FUN_02c33414(lVar14,lVar9);
  if (*(char *)(lVar4 + 0x7c) != '\0') {
    **(undefined2 **)(lVar4 + 0x58) = 0;
    *(undefined2 *)(lVar4 + 0x7a) = 0;
  }
  FUN_02c338a4(lVar14,lVar4,lVar9,0,0);
  FUN_0283ce7c(plVar11,&local_60,plVar11[0x39],10);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (plVar12 != (long *)0x0) {
    plVar11 = plVar12 + 10;
    do {
      iVar7 = (int)*plVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  return;
}


