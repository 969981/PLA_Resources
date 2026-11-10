/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af624c; name: FUN_01af624c
 */


void FUN_01af624c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_00ac3fa4(&local_40,param_1 + 0x248);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_30);
    puVar4 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
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
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *puVar4;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
  }
  if (local_30 != (long *)0x0) {
    uVar7 = local_30[0x188];
    local_30[0x188] = uVar7 & 0xffffffffffffffdf;
    if (((uVar7 & 0x1f) == 0) || (*(char *)((long)local_30 + 0xa1d) == '\0')) {
      local_30[0x189] = local_30[0x189] & 0xfffffffffffffffd;
    }
    else {
      (**(code **)(*local_30 + 0x310))();
      local_30[0x189] = local_30[0x189] & 0xfffffffffffffffd;
      if (local_30 == (long *)0x0) goto LAB_01af62c8;
    }
    lVar8 = local_30[0xb];
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
      (**(code **)(*local_30 + 0x20))();
    }
  }
LAB_01af62c8:
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01affce4(&local_40,param_1 + 0x628);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_016c3724(&local_30);
    puVar4 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
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
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *puVar4;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
  }
  if ((local_30 != (long *)0x0) && (FUN_025d3b0c(), local_30 != (long *)0x0)) {
    lVar8 = local_30[0xb];
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
      (**(code **)(*local_30 + 0x20))();
    }
  }
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01b00924(&local_40,param_1 + 0x688);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_30);
    puVar4 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
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
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *puVar4;
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
  }
  if (local_30 != (long *)0x0) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_01a2bf84(&local_40,local_30 + 0xb9);
    if (local_40 == (undefined8 *)0x0) {
      local_48 = (long *)0x0;
    }
    else {
      FUN_009cf990(&local_48);
      puVar4 = local_40;
      if (local_40 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_40 + 1);
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
          local_40[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_28 = *puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_28);
        }
      }
    }
    if (local_48 != (long *)0x0) {
      if ((*(uint *)(local_48 + 0x215) & 0xfffffffe) == 2) {
        uVar6 = 2;
      }
      else if (*(char *)((long)local_48 + 0x10a3) == '\0') {
        if ((*(char *)((long)local_48 + 0x10a1) == '\0') &&
           (*(char *)((long)local_48 + 0x10a5) == '\0')) {
          uVar6 = 1;
        }
        else {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 4;
      }
      FUN_01a51334(local_48,local_48 + 0x1f6,uVar6);
      if (local_48 != (long *)0x0) {
        lVar8 = local_48[0xb];
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
          (**(code **)(*local_48 + 0x20))();
        }
      }
    }
    if (local_30 != (long *)0x0) {
      lVar8 = local_30[0xb];
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
        (**(code **)(*local_30 + 0x20))();
      }
    }
  }
  return;
}


