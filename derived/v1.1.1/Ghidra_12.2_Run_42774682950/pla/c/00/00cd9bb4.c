/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd9bb4; name: FUN_00cd9bb4
 */


void FUN_00cd9bb4(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *local_48;
  undefined8 uStack_40;
  long *local_38;
  long *local_30;
  long local_28;
  
  if ((*param_2 != 0) && (FUN_00ac64cc(&local_48), local_48 != (long *)0x0)) {
    FUN_0181d458(local_48,param_4);
    lVar7 = local_48[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))(local_48);
    }
  }
  FUN_00be5694(&local_30,param_3);
  if (local_30 != (long *)0x0) {
    local_48 = (long *)0x0;
    uStack_40 = 0;
    FUN_01a2bf84(&local_48,local_30 + 0xb9);
    FUN_009c685c(&local_38,&local_48);
    plVar5 = local_48;
    if (local_48 != (long *)0x0) {
      plVar1 = local_48 + 1;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *plVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    if ((local_38 != (long *)0x0) && (FUN_01a587b4(param_1), local_38 != (long *)0x0)) {
      lVar7 = local_38[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if (local_30 != (long *)0x0) {
      lVar7 = local_30[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_30 + 0x20))();
      }
    }
  }
  return;
}


