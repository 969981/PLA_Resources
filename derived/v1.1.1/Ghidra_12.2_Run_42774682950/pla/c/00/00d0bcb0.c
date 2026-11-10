/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d0bcb0; name: FUN_00d0bcb0
 */


void FUN_00d0bcb0(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *local_90;
  long local_88;
  long local_80;
  long local_78;
  long *local_70;
  undefined4 local_68;
  undefined8 *local_60 [2];
  long *local_50;
  long *local_48;
  undefined8 local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  if (*param_2 == 0) {
    local_48 = (long *)0x0;
    goto LAB_00d0bce8;
  }
  FUN_00b118d0(&local_48);
  plVar4 = local_48;
  if (local_48 == (long *)0x0) goto LAB_00d0bce8;
  plVar7 = (long *)local_48[0x16];
  local_90 = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  local_88 = plVar4[0x17];
  local_80 = plVar4[0x18];
  local_78 = plVar4[0x19];
  plVar8 = (long *)plVar4[0x1a];
  local_70 = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  local_68 = (undefined4)plVar4[0x1b];
  FUN_00d0b804(local_60,param_1,&local_90);
  if (local_60[0] == (undefined8 *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
    FUN_00b23f9c(&local_50,local_60[0]);
    piVar1 = (int *)(local_60[0] + 1);
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
      local_60[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = *local_60[0];
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  if (local_50 == (long *)0x0) {
    FUN_00d0c0b4(&local_90,*(undefined8 *)(param_1 + 0x68));
    plVar4 = local_50;
    local_50 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar9 = plVar4[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    plVar7 = local_48;
    plVar4 = local_90;
    local_50 = local_90;
    if (local_48 != (long *)0x0) {
      lVar9 = local_48[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar8 = (long *)plVar4[0xd];
    plVar4[0xd] = (long)plVar7;
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    plVar4 = local_48;
    *(int *)(local_50 + 0xe) = (int)local_50[0xe] + 1;
    if ((char)local_48[0x1c] != '\0') {
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    }
    plVar7 = (long *)local_48[0x16];
    local_90 = plVar7;
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
    }
    local_88 = plVar4[0x17];
    local_80 = plVar4[0x18];
    local_78 = plVar4[0x19];
    plVar8 = (long *)plVar4[0x1a];
    local_70 = plVar8;
    if (plVar8 == (long *)0x0) {
      local_68 = (undefined4)plVar4[0x1b];
      FUN_00d0d40c(param_1 + 0x80,&local_88,&local_50);
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      local_68 = (undefined4)plVar4[0x1b];
      FUN_00d0d40c(param_1 + 0x80,&local_88,&local_50);
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    if (local_50 != (long *)0x0) goto LAB_00d0be90;
  }
  else {
    *(int *)(local_50 + 0xe) = (int)local_50[0xe] + 1;
LAB_00d0be90:
    lVar9 = local_50[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
LAB_00d0bce8:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  return;
}


