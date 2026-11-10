/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01adda34; name: FUN_01adda34
 */


void FUN_01adda34(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  long *local_48;
  long *local_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_01ab4818(&local_38,param_2 + 0x718);
  if (local_38 == (undefined8 *)0x0) {
    local_40 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_40);
    puVar5 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38 + 1);
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
        local_38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  if (local_40 == (long *)0x0) goto LAB_01addb64;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_01a2bf84(&local_38,local_40 + 0xb9);
  if (local_38 == (undefined8 *)0x0) {
    local_48 = (long *)0x0;
LAB_01adda88:
    if (local_48 == (long *)0x0) goto LAB_01addc14;
LAB_01adda90:
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    FUN_008802f0(&local_38,local_48 + 0xb);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_01ade864(param_1,&local_38);
    puVar5 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38 + 1);
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
        local_38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    if (local_48 != (long *)0x0) {
      lVar7 = local_48[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 == 1) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
    bVar3 = true;
  }
  else {
    FUN_00ba1e00(&local_48);
    puVar5 = local_38;
    if (local_38 == (undefined8 *)0x0) goto LAB_01adda88;
    piVar1 = (int *)(local_38 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 != 0) goto LAB_01adda88;
    local_38[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar7 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar7;
    local_28 = *puVar5;
    FUN_02a44274(lVar7 + 0xd8,&local_28);
    if (local_48 != (long *)0x0) goto LAB_01adda90;
LAB_01addc14:
    bVar3 = false;
  }
  if (local_40 != (long *)0x0) {
    lVar7 = local_40[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (bVar3) {
    return;
  }
LAB_01addb64:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


