/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ee178; name: FUN_028ee178
 */


long FUN_028ee178(long param_1,long *param_2,long *param_3,long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *local_50 [2];
  char local_3c [12];
  long *local_28;
  
  *(long **)(param_1 + 8) = param_3;
  *(long *)(param_1 + 0x10) = param_4;
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*param_2 + 0x20))(param_2);
    param_3 = *(long **)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar6 = (**(code **)(*param_3 + 0x60))(param_3,param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  (**(code **)(**(long **)(param_1 + 8) + 0x68))(local_50,*(long **)(param_1 + 8),param_2);
  if (local_50[0] == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  else {
    if (((*(int *)((long)local_50[0] + 0xc) == 0) || (local_3c[0] == '\0')) ||
       (FUN_028aee54(&local_28,local_50), local_28 == (long *)0x0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*local_28 + 0x138))(local_28,local_3c);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x18))();
      }
    }
    puVar4 = local_50[0];
    *(undefined8 *)(param_1 + 0x40) = uVar6;
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
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
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = (long *)*puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x70))(local_50,*(long **)(param_1 + 8),param_2);
  if (local_50[0] == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  else {
    if (((*(int *)((long)local_50[0] + 0xc) == 0) || (local_3c[0] == '\0')) ||
       (FUN_028aee54(&local_28,local_50), local_28 == (long *)0x0)) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*local_28 + 0x138))(local_28,local_3c);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x18))();
      }
    }
    puVar4 = local_50[0];
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
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
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = (long *)*puVar4;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x78))(local_50,*(long **)(param_1 + 8),param_2);
  if (local_50[0] == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = 0;
    return param_1;
  }
  if (((*(int *)((long)local_50[0] + 0xc) == 0) || (local_3c[0] == '\0')) ||
     (FUN_028aee54(&local_28,local_50), local_28 == (long *)0x0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*local_28 + 0x138))(local_28,local_3c);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
    }
  }
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  if (local_50[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50[0] + 1);
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
      local_50[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = (long *)*local_50[0];
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  return param_1;
}


