/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af4720; name: FUN_01af4720
 */


bool FUN_01af4720(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  if ((*(char *)(param_1 + 0x8f4) != '\0') || (0 < *(int *)(param_1 + 0x8f0))) {
    bVar6 = 0;
LAB_01af48f8:
    return (bool)(bVar6 & 1);
  }
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_00cf9db0(&local_40,param_1 + 0x788);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_00959eac(&local_30);
    puVar5 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_28 = *puVar5;
        FUN_02a44274(lVar9 + 0xd8,&local_28);
      }
    }
  }
  if (local_30 != (long *)0x0) {
    bVar6 = (**(code **)(*local_30 + 0x170))();
    if (local_30 != (long *)0x0) {
      lVar9 = local_30[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
        return (bool)(bVar6 & 1);
      }
    }
    goto LAB_01af48f8;
  }
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_01b00924(&local_40,param_1 + 0x688);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_30);
    puVar5 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_28 = *puVar5;
        FUN_02a44274(lVar9 + 0xd8,&local_28);
      }
    }
  }
  if (local_30 != (long *)0x0) {
    if ((((*(int *)((long)local_30 + 0xc5c) == 1) ||
         (uVar8 = (**(code **)(*local_30 + 0x250))(), (uVar8 & 1) != 0)) ||
        (uVar8 = (**(code **)(*local_30 + 0x1a8))(), (uVar8 & 1) != 0)) ||
       (uVar8 = FUN_01aee5b8(param_1), (uVar8 & 1) != 0)) {
LAB_01af4878:
      bVar3 = true;
      goto joined_r0x01af48d8;
    }
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_01affa74(&local_40,param_1 + 0x608);
    FUN_01af45bc(&local_48,&local_40);
    puVar5 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_28 = *puVar5;
        FUN_02a44274(lVar9 + 0xd8,&local_28);
      }
    }
    if (local_48 != (long *)0x0) {
      lVar10 = local_48[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      lVar9 = local_48[0x4a];
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
      if (0 < (int)lVar9) goto LAB_01af4878;
    }
  }
  bVar3 = false;
joined_r0x01af48d8:
  if (local_30 != (long *)0x0) {
    lVar9 = local_30[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return !bVar3;
}


