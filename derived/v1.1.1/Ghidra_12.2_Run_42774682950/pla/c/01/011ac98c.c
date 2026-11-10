/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011ac98c; name: FUN_011ac98c
 */


void FUN_011ac98c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0xd0) != 0) goto LAB_011acdfc;
  *(long *)(param_1 + 0xd0) = param_1 + 0x4d8;
  *(long *)(param_1 + 0x4e0) = *(long *)(param_1 + 200);
  if (*(long *)(param_1 + 200) == 0) {
    *(undefined8 *)(param_1 + 0x4e0) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x348);
  }
  (**(code **)(*(long *)(param_1 + 0x4d8) + 0x10))(param_1 + 0x4d8,0x400000);
  if (*(long **)(param_1 + 0xd0) == (long *)0x0) goto LAB_011acdfc;
  uVar6 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))();
  lVar7 = FUN_0116001c(&local_60,uVar6);
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x50);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar8 = *(long **)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x4c8) = lVar7;
  *(undefined8 *)(lVar7 + 200) = *(undefined8 *)(param_1 + 0x340);
  *(undefined8 *)(lVar7 + 0xd0) = *(undefined8 *)(param_1 + 0x348);
  *(undefined8 *)(lVar7 + 0xd8) = *(undefined8 *)(param_1 + 0x350);
  plVar8 = *(long **)(param_1 + 0x358);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  plVar9 = *(long **)(lVar7 + 0xe0);
  *(long **)(lVar7 + 0xe0) = plVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  plVar8 = *(long **)(param_1 + 0x4c8);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar5 = (int)*plVar9 + -1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if (*(long *)(param_1 + 0xf8) == 0) {
    if (*(long **)(param_1 + 0xd0) == (long *)0x0) goto LAB_011acdfc;
    uVar6 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))();
    if (*(long **)(param_1 + 0xd0) == (long *)0x0) goto LAB_011acdfc;
    local_38 = (**(code **)(**(long **)(param_1 + 0xd0) + 0x18))();
    FUN_01160160(&local_60,uVar6,&local_38);
    plVar8 = local_60;
    local_60 = (long *)0x0;
    FUN_011afecc((long *)(param_1 + 0xf8),plVar8);
    *(undefined8 *)(param_1 + 0x100) = local_58;
    *(undefined8 *)(param_1 + 0x108) = uStack_50;
    *(undefined8 *)(param_1 + 0x110) = local_48;
    FUN_011afecc(&local_60,0);
    if (*(long *)(param_1 + 0x4c8) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x4c8) + 0xb0) = *(undefined8 *)(param_1 + 0xf8);
    }
  }
  FUN_011ace0c(param_1);
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar7 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar7;
  plVar8 = *(long **)(*(long *)(lVar7 + 0x50) + 0x48);
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_011acdfc;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar9 = (long *)plVar8[0x15];
  if (plVar9 == (long *)0x0) {
LAB_011acc3c:
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = (long *)plVar9[0xb];
    if ((undefined8 *)plVar10[3] == (undefined8 *)0x0) goto LAB_011acdfc;
    if (plVar10[2] == 0) {
      lVar7 = (*(code *)**(undefined8 **)plVar10[3])();
      plVar10[2] = lVar7;
    }
    piVar1 = (int *)((long)plVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((((char)plVar9[0x1c] == '\0') || ((*(byte *)((long)plVar9 + 0xe1) & 1) == 0)) ||
       (plVar9[0xe] == 0)) {
      bVar4 = true;
    }
    else {
      bVar4 = *(char *)(plVar9[0xe] + 0x1e1) == '\0';
      plVar10 = plVar9 + 0x13;
    }
    lVar7 = plVar9[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
    if (bVar4) goto LAB_011acc3c;
  }
  FUN_011ad010(&local_60,param_1,plVar10);
  *(long **)(param_1 + 0x688) = local_60;
  if (local_60 != (long *)0x0) {
    lVar7 = local_60[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
      lVar7 = *(long *)(param_1 + 0x688);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x688);
    }
    if (lVar7 != 0) {
      FUN_011ad040(&local_60,param_1,"BattleMessageView",plVar10);
      *(long **)(param_1 + 0x838) = local_60;
      if (local_60 != (long *)0x0) {
        lVar7 = local_60[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_60 + 0x20))();
          lVar7 = *(long *)(param_1 + 0x838);
        }
        else {
          lVar7 = *(long *)(param_1 + 0x838);
        }
        if (lVar7 != 0) {
          lVar7 = plVar8[0xb];
          piVar1 = (int *)(lVar7 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*plVar8 + 0x20))(plVar8);
          }
          return;
        }
      }
    }
  }
LAB_011acdfc:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


