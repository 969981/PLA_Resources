/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d0b57c; name: FUN_00d0b57c
 */


void FUN_00d0b57c(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *local_50 [2];
  long *local_40;
  long local_38;
  
  FUN_00d0b804(local_50);
  plVar4 = local_50[0];
  if (local_50[0] == (long *)0x0) {
    local_40 = (long *)0x0;
  }
  else {
    FUN_00b23f9c(&local_40,local_50[0]);
    plVar6 = plVar4 + 1;
    do {
      iVar5 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      plVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_38 = *plVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  if (local_40 == (long *)0x0) {
    FUN_00d0c0b4(local_50,*(undefined8 *)(param_1 + 0x68));
    plVar4 = local_40;
    local_40 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      lVar8 = plVar4[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar4 + 0x20))();
      }
    }
    local_40 = local_50[0];
    lVar8 = FUN_00d0dbb4(local_50,*(undefined8 *)(param_1 + 0x70),param_2);
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar8 + 0x58);
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar7;
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
    plVar4 = local_40;
    plVar6 = (long *)local_40[0xd];
    local_40[0xd] = 0;
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[0xb];
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
        (**(code **)(*plVar6 + 0x20))();
      }
    }
    plVar4[0xd] = lVar8;
    *(int *)(local_40 + 0xe) = (int)local_40[0xe] + 1;
    if ((*(int *)(param_1 + 0x78) == -1) || (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0x78))) {
      FUN_00d09400(local_40[0xd]);
      *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
    }
    FUN_00d0d40c(param_1 + 0x80,param_2 + 8,&local_40);
    if (local_40 == (long *)0x0) {
      return;
    }
  }
  else {
    *(int *)(local_40 + 0xe) = (int)local_40[0xe] + 1;
  }
  lVar8 = local_40[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
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
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


