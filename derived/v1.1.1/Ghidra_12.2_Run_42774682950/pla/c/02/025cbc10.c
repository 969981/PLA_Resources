/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025cbc10; name: FUN_025cbc10
 */


void FUN_025cbc10(long param_1,undefined8 param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  long *local_40;
  long local_38;
  
  FUN_0099c748(&local_60,param_1 + 0x220);
  plVar5 = local_60;
  if (local_60 == (long *)0x0) goto LAB_025cbcc8;
  local_40 = local_60;
  lVar8 = local_60[0xb];
  if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_025cbf40;
  if (*(long *)(lVar8 + 0x10) == 0) {
    uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
    *(undefined8 *)(lVar8 + 0x10) = uVar7;
  }
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_025cc00c(&local_40,param_2);
  lVar8 = plVar5[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    iVar6 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar6 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))(plVar5);
    if (local_60 != (long *)0x0) goto LAB_025cbcac;
LAB_025cbcc8:
    lVar8 = *(long *)(param_1 + 0x240);
  }
  else {
    if (local_60 == (long *)0x0) goto LAB_025cbcc8;
LAB_025cbcac:
    lVar8 = local_60[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 != 0) goto LAB_025cbcc8;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*local_60 + 0x20))();
    lVar8 = *(long *)(param_1 + 0x240);
  }
  if ((lVar8 != 0) && (FUN_00cfac20(&local_48), local_48 != (long *)0x0)) {
    local_60 = (long *)0x0;
    uStack_58 = 0;
    FUN_00cf9db0(&local_60,local_48 + 0xf1);
    if (local_60 == (long *)0x0) {
      local_50 = (long *)0x0;
    }
    else {
      FUN_00959eac(&local_50);
      plVar5 = local_60;
      if (local_60 != (long *)0x0) {
        plVar2 = local_60 + 1;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_60[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = *plVar5;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
    }
    if (local_50 != (long *)0x0) {
      FUN_01a73640(&local_60);
      FUN_0099c748(&local_68,&local_60);
      plVar5 = local_60;
      if (local_60 != (long *)0x0) {
        plVar2 = local_60 + 1;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_60[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = *plVar5;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
      plVar5 = local_68;
      if (local_68 != (long *)0x0) {
        local_70 = local_68;
        lVar8 = local_68[0xb];
        if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_025cbf40:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_025cc00c(&local_70,param_2);
        lVar8 = plVar5[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
        if (local_68 != (long *)0x0) {
          lVar8 = local_68[0xb];
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
      }
      if (local_50 != (long *)0x0) {
        lVar8 = local_50[0xb];
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_50 + 0x20))();
        }
      }
    }
    if (local_48 != (long *)0x0) {
      lVar8 = local_48[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  return;
}


