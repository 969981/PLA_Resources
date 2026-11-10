/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d72680; name: FUN_00d72680
 */


void FUN_00d72680(long param_1,int param_2)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar12 = *(long **)(param_1 + 0x2c8);
  if (plVar12 != (long *)0x0) {
    plVar13 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    do {
      iVar7 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379690), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar10 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar10;
  lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0x50) + 0x2d10) + 8);
  if (lVar10 == 0) {
    plVar13 = (long *)0x0;
  }
  else {
    plVar14 = *(long **)(lVar10 + 0x60);
    if (plVar14 != (long *)0x0) {
      lVar10 = plVar14[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_00d72cfc;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar13 = (long *)plVar14[0xd];
    if (plVar13 != (long *)0x0) {
      plVar3 = plVar13 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)*plVar3 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar10 = plVar14[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  *(int *)(param_1 + 0x5bc) = param_2 / 0x1e;
  if (param_2 != 0) {
    plVar14 = (long *)plVar12[0x37];
    if (plVar14 == (long *)0x0) {
      iVar7 = -param_2;
      if (-1 < param_2) {
        iVar7 = param_2;
      }
      FUN_02c395d0(0,0,iVar7,7,0,1);
    }
    else {
      lVar10 = plVar14[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_00d72cfc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      iVar7 = -param_2;
      if (-1 < param_2) {
        iVar7 = param_2;
      }
      FUN_02c395d0(plVar14,0,iVar7,7,0,1);
      lVar10 = plVar14[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
    *(undefined4 *)(param_1 + 0x5c0) = 0x5a;
    plVar14 = (long *)plVar12[0x38];
    if (param_2 < 1) {
      if (plVar14 == (long *)0x0) {
        lVar10 = plVar13[0x16];
        if (lVar10 != 0) {
          plVar14 = *(long **)(lVar10 + 0x270);
          if (plVar14 != *(long **)(lVar10 + 0x278)) {
            iVar7 = 0;
            do {
              plVar3 = (long *)PTR_DAT_04379c88;
              if (*plVar14 != 0) {
                plVar3 = (long *)(*plVar14 + 0x58);
              }
              if (*plVar3 == 0x5840d9743c05986b) goto LAB_00d72c78;
              plVar14 = plVar14 + 1;
              iVar7 = iVar7 + 1;
            } while (*(long **)(lVar10 + 0x278) != plVar14);
          }
        }
        iVar7 = 0;
LAB_00d72c78:
        FUN_02c2e33c(plVar13,iVar7,0);
      }
      else {
        plVar3 = plVar14 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = (int)*plVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar10 = plVar13[0x16];
        if (lVar10 != 0) {
          plVar11 = *(long **)(lVar10 + 0x270);
          if (plVar11 != *(long **)(lVar10 + 0x278)) {
            iVar7 = 0;
            do {
              plVar2 = (long *)PTR_DAT_04379c88;
              if (*plVar11 != 0) {
                plVar2 = (long *)(*plVar11 + 0x58);
              }
              if (*plVar2 == 0x5840d9743c05986b) goto LAB_00d728e8;
              plVar11 = plVar11 + 1;
              iVar7 = iVar7 + 1;
            } while (*(long **)(lVar10 + 0x278) != plVar11);
          }
        }
        iVar7 = 0;
LAB_00d728e8:
        FUN_02c2e33c(plVar13,iVar7,plVar14);
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
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      local_50 = 0x13;
      local_48 = (long *)0x0;
      local_60 = 0xb923ed10bcd08fec;
      pcStack_58 = "pane_T_param_sub_00";
      lVar15 = plVar12[0x37];
      lVar10 = plVar12[0x38];
      lVar4 = plVar12[0x39];
      *(undefined4 *)(lVar15 + 0x124) = 0;
      *(undefined2 *)(lVar15 + 0x128) = 0;
      *(undefined4 *)(lVar15 + 300) = 0;
      *(undefined4 *)(lVar15 + 0x134) = 0;
      FUN_02c33414(lVar15,lVar10);
      if (*(char *)(lVar4 + 0x7c) != '\0') {
        **(undefined2 **)(lVar4 + 0x58) = 0;
        *(undefined2 *)(lVar4 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar15,lVar4,lVar10,0,0);
      FUN_0283ce7c(plVar12,&local_60,plVar12[0x39],10);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      pcVar9 = "anime_money_sub";
    }
    else {
      if (plVar14 == (long *)0x0) {
        lVar10 = plVar13[0x16];
        if (lVar10 != 0) {
          plVar14 = *(long **)(lVar10 + 0x270);
          if (plVar14 != *(long **)(lVar10 + 0x278)) {
            iVar7 = 0;
            do {
              plVar3 = (long *)PTR_DAT_04379c88;
              if (*plVar14 != 0) {
                plVar3 = (long *)(*plVar14 + 0x58);
              }
              if (*plVar3 == 0x5840de743c05a0ea) goto LAB_00d72cec;
              plVar14 = plVar14 + 1;
              iVar7 = iVar7 + 1;
            } while (*(long **)(lVar10 + 0x278) != plVar14);
          }
        }
        iVar7 = 0;
LAB_00d72cec:
        FUN_02c2e33c(plVar13,iVar7,0);
      }
      else {
        plVar3 = plVar14 + 10;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = (int)*plVar3 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        lVar10 = plVar13[0x16];
        if (lVar10 != 0) {
          plVar11 = *(long **)(lVar10 + 0x270);
          if (plVar11 != *(long **)(lVar10 + 0x278)) {
            iVar7 = 0;
            do {
              plVar2 = (long *)PTR_DAT_04379c88;
              if (*plVar11 != 0) {
                plVar2 = (long *)(*plVar11 + 0x58);
              }
              if (*plVar2 == 0x5840de743c05a0ea) goto LAB_00d72a78;
              plVar11 = plVar11 + 1;
              iVar7 = iVar7 + 1;
            } while (*(long **)(lVar10 + 0x278) != plVar11);
          }
        }
        iVar7 = 0;
LAB_00d72a78:
        FUN_02c2e33c(plVar13,iVar7,plVar14);
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
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      local_50 = 0x13;
      local_48 = (long *)0x0;
      local_60 = 0xe5681d044e4d43f;
      pcStack_58 = "pane_T_param_add_00";
      lVar15 = plVar12[0x37];
      lVar10 = plVar12[0x38];
      lVar4 = plVar12[0x39];
      *(undefined4 *)(lVar15 + 0x124) = 0;
      *(undefined2 *)(lVar15 + 0x128) = 0;
      *(undefined4 *)(lVar15 + 300) = 0;
      *(undefined4 *)(lVar15 + 0x134) = 0;
      FUN_02c33414(lVar15,lVar10);
      if (*(char *)(lVar4 + 0x7c) != '\0') {
        **(undefined2 **)(lVar4 + 0x58) = 0;
        *(undefined2 *)(lVar4 + 0x7a) = 0;
      }
      FUN_02c338a4(lVar15,lVar4,lVar10,0,0);
      FUN_0283ce7c(plVar12,&local_60,plVar12[0x39],10);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      pcVar9 = "anime_money_add";
    }
    FUN_00d2ded4(param_1 + 0x180,pcVar9);
    FUN_02a4754c(&local_60,&DAT_041ec170);
    FUN_028354b0(&local_60);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if (plVar13 != (long *)0x0) {
    plVar12 = plVar13 + 10;
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
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
  return;
}


