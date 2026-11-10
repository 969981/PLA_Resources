/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d15ad0; name: FUN_02d15ad0
 */


void FUN_02d15ad0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  long *aplStack_c0 [12];
  long local_60;
  long lStack_58;
  long local_50;
  long *local_48;
  long *local_40;
  long *local_38;
  
  lVar8 = *(long *)(param_1 + 8);
  if (*(char *)(lVar8 + 0x68) == '\0') {
    *(undefined8 *)(lVar8 + 0x70) = 0;
    *(undefined1 *)(lVar8 + 0x68) = 1;
  }
  else {
    *(undefined8 *)(lVar8 + 0x70) = 0;
  }
  FUN_013ba5d8(&local_38,param_1 + 0x20,"+inner");
  plVar9 = local_38;
  if (local_38 == (long *)0x0) {
    local_60 = *(long *)PTR_DAT_04379c88;
LAB_02d15f50:
    lStack_58 = *(long *)PTR_PTR_04379d00;
    if (local_38 != (long *)0x0) goto LAB_02d15b3c;
LAB_02d15f60:
    local_50 = 0;
  }
  else {
    local_60 = local_38[0xb];
    if (local_38 == (long *)0x0) goto LAB_02d15f50;
    lStack_58 = local_38[0xc];
    if (local_38 == (long *)0x0) goto LAB_02d15f60;
LAB_02d15b3c:
    local_50 = local_38[0xd];
  }
  local_48 = (long *)0x0;
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x18))(local_38);
  }
  local_48 = plVar9;
  plVar9 = *(long **)(param_1 + 8);
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      local_c8 = (undefined *)0x0;
      local_e0 = (undefined8 *)0x0;
      local_d8 = (code *)0x0;
      local_d0 = (undefined *)0x0;
      lVar8 = plVar9[0xb];
      aplStack_c0[0] = plVar9;
      if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
        if (*(long *)(lVar8 + 0x10) == 0) {
          uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
          *(undefined8 *)(lVar8 + 0x10) = uVar7;
        }
        piVar1 = (int *)(lVar8 + 0xc);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_02d15bf4;
      }
    }
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  aplStack_c0[0] = (long *)0x0;
LAB_02d15bf4:
  local_e0 = (undefined8 *)PTR_LAB_043884e0;
  local_d8 = (code *)PTR_FUN_043884e8;
  local_d0 = PTR_LAB_043884f0;
  local_c8 = PTR_LAB_043884f8;
  FUN_013b1d1c(&local_40,&local_60,param_1 + 0x40,&local_e0);
  pcVar5 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (undefined *)0x0;
    local_c8 = (undefined *)0x0;
    local_e0 = (undefined8 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar5)(aplStack_c0);
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))(plVar9);
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_013b63a4(&local_e0,*(undefined8 *)(param_1 + 0x18));
  if (local_e0 != (undefined8 *)0x0) {
    plVar9 = (long *)FUN_013b36b8();
    puVar4 = local_e0;
    if (local_e0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_e0 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_e0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_38 = (long *)*puVar4;
        FUN_02a44274(lVar8 + 0xd8,&local_38);
      }
    }
    if (plVar9 != (long *)0x0) {
      FUN_013b1c3c(&local_e0,local_40);
      local_f0 = (undefined8 *)0x0;
      uStack_e8 = 0;
      FUN_013b8954(&local_f0,&local_e0);
      (**(code **)(*plVar9 + 0x68))(plVar9,&local_f0);
      puVar4 = local_f0;
      if (local_f0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_f0 + 1);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          local_f0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = (long *)*puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
      puVar4 = local_e0;
      if (local_e0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_e0 + 1);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          local_e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_38 = (long *)*puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_38);
        }
      }
    }
  }
  FUN_013b651c(local_40,param_1 + 0x10);
  if (local_40 != (long *)0x0) {
    lVar8 = local_40[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  return;
}


