/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea5884; name: FUN_01ea5884
 */


void FUN_01ea5884(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_58;
  undefined8 uStack_50;
  long *local_48;
  undefined8 *local_40;
  undefined8 uStack_38;
  undefined8 *local_30 [2];
  undefined8 local_18;
  
  local_40 = (undefined8 *)0x0;
  uStack_38 = 0;
  FUN_00956dac(&local_48,param_2 + 0x1a8);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x10))(local_30);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_0087f944(&local_58,local_30);
    puVar4 = local_30[0];
    if (local_30[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_30[0] + 1);
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
        local_30[0][2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar5 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_18 = *puVar4;
        FUN_02a44274(lVar6 + 0xd8,&local_18);
      }
    }
    FUN_0087fcf0(&local_40,&local_58);
    puVar4 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58 + 1);
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
        local_58[2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar5 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar6 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar6;
        local_30[0] = (undefined8 *)*puVar4;
        FUN_02a44274(lVar6 + 0xd8,local_30);
      }
    }
    if (local_48 != (long *)0x0) {
      lVar6 = local_48[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  FUN_008c4b3c(param_1,&local_40);
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
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_30[0] = (undefined8 *)*puVar4;
      FUN_02a44274(lVar6 + 0xd8,local_30);
    }
  }
  return;
}


