/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c0018; name: FUN_025c0018
 */


void FUN_025c0018(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_40;
  undefined8 uStack_38;
  long *local_30;
  long *local_28;
  
  plVar1 = (long *)(param_1 + 0x948);
  if (*(long *)(param_1 + 0x948) == 0) {
    local_28 = (long *)0x0;
  }
  else {
    FUN_00959eac(&local_28);
    if (local_28 != (long *)0x0) {
      iVar6 = FUN_0267081c(local_28,param_2);
      FUN_025bd404(param_1,param_1 + (long)iVar6 * 0x128 + 0x380);
      if (local_28 != (long *)0x0) {
        lVar7 = local_28[0xb];
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
          (**(code **)(*local_28 + 0x20))(local_28,param_2);
        }
      }
    }
  }
  FUN_00cf9db0(plVar1,param_2);
  if ((*plVar1 != 0) && (FUN_00959eac(&local_30), local_30 != (long *)0x0)) {
    iVar6 = FUN_0267081c();
    FUN_025bebcc(param_1,param_1 + (long)iVar6 * 0x128 + 0x380);
    local_40 = (undefined8 *)0x0;
    uStack_38 = 0;
    FUN_00cf9db0(&local_40,plVar1);
    FUN_025bf0a0(param_1,&local_40,1);
    puVar5 = local_40;
    if (local_40 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_40 + 1);
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
        local_40[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = (long *)*puVar5;
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
    iVar6 = FUN_0267081c(local_30);
    if (iVar6 == 1) {
      FUN_025bcf34(param_1);
    }
    else {
      FUN_025bda80(param_1);
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


