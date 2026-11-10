/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181aef4; name: FUN_0181aef4
 */


void FUN_0181aef4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  undefined8 local_28;
  
  FUN_0108969c(&local_40,param_1 + 0x430);
  if (local_40 == (undefined8 *)0x0) {
    local_30 = (long *)0x0;
  }
  else {
    FUN_00ba735c(&local_30);
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
        local_28 = *puVar4;
        FUN_02a44274(lVar6 + 0xd8,&local_28);
      }
    }
  }
  if ((local_30 != (long *)0x0) && (FUN_025ae1a8(), local_30 != (long *)0x0)) {
    lVar6 = local_30[0xb];
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
      (**(code **)(*local_30 + 0x20))();
      cVar2 = *(char *)(param_1 + 0x471);
      goto joined_r0x0181b004;
    }
  }
  cVar2 = *(char *)(param_1 + 0x471);
joined_r0x0181b004:
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x479) != '\0')) {
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_00ac3fa4(&local_40,param_1 + 0x1f0);
    FUN_0099c748(&local_30,&local_40);
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
        local_28 = *puVar4;
        FUN_02a44274(lVar6 + 0xd8,&local_28);
      }
    }
    if ((local_30 != (long *)0x0) && ((**(code **)(*local_30 + 0x130))(), local_30 != (long *)0x0))
    {
      lVar6 = local_30[0xb];
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
        (**(code **)(*local_30 + 0x20))();
      }
    }
  }
  *(undefined1 *)(param_1 + 0x470) = 0;
  FUN_010892bc(param_1 + 0x430);
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  return;
}


