/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013b00e0; name: FUN_013b00e0
 */


void FUN_013b00e0(undefined8 *param_1,undefined8 param_2,ulong *param_3,undefined2 param_4)

{
  ulong *puVar1;
  int *piVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong *local_110;
  undefined8 uStack_108;
  long *local_100;
  undefined2 local_f8;
  ulong *local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [96];
  ulong local_70;
  undefined8 local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  long *local_48;
  long *local_38;
  
  FUN_013b1c3c(&local_f0);
  if (local_f0 == (ulong *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_013b20c8(&local_38);
    if (local_f0 != (ulong *)0x0) {
      puVar1 = local_f0 + 1;
      do {
        iVar7 = (int)*puVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *(int *)puVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 == 0) {
        local_f0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_70 = *local_f0;
        FUN_02a44274(lVar9 + 0xd8,&local_70);
      }
    }
  }
  local_60 = *param_3;
  local_58 = param_3[1];
  local_50 = param_3[2];
  local_48 = (long *)param_3[3];
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x18))();
  }
  local_68 = 0x2000;
  local_70 = local_70 & 0xffffffff00000000;
  local_100 = local_38;
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_f0 = (ulong *)0x0;
  local_e8 = (code *)0x0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f8 = param_4;
  FUN_013b5cec(&local_f0,&local_100);
  FUN_013b1d1c(param_1,&local_60,&local_70,&local_f0);
  pcVar6 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = (ulong *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar6)(auStack_d0);
  }
  if (local_100 != (long *)0x0) {
    lVar9 = local_100[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar8 = *param_1;
  FUN_013b1c3c(&local_f0,param_2);
  local_110 = (ulong *)0x0;
  uStack_108 = 0;
  FUN_013b8954(&local_110,&local_f0);
  FUN_013b1d7c(uVar8,&local_110);
  puVar1 = local_110;
  if (local_110 != (ulong *)0x0) {
    puVar3 = local_110 + 1;
    do {
      iVar7 = (int)*puVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar5) {
        *(int *)puVar3 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_70 = *puVar1;
      FUN_02a44274(lVar9 + 0xd8,&local_70);
    }
  }
  puVar1 = local_f0;
  if (local_f0 != (ulong *)0x0) {
    puVar3 = local_f0 + 1;
    do {
      iVar7 = (int)*puVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar5) {
        *(int *)puVar3 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_70 = *puVar1;
      FUN_02a44274(lVar9 + 0xd8,&local_70);
    }
  }
  if (local_38 != (long *)0x0) {
    lVar9 = local_38[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


