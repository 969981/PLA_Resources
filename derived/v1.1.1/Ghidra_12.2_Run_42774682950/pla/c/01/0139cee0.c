/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0139cee0; name: FUN_0139cee0
 */


void FUN_0139cee0(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  undefined8 local_28;
  
  (**(code **)(**(long **)(param_1 + 0x368) + 0x10))(&local_50);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_01160f90(&local_60,&local_50);
  puVar4 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_50 + 1);
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
      local_50[2] = 0;
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
  lVar8 = FUN_0139f570(&local_60);
  puVar4 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
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
      local_60[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_50 = (undefined8 *)*puVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_50);
    }
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  iVar5 = FUN_013a38d0(lVar8);
  if (iVar5 == 0) {
    uVar6 = FUN_0139a0d0(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
    if (param_2 == 1) {
      uVar7 = 2;
    }
    else if (param_2 == 2) {
      uVar7 = 3;
    }
    else {
      if (param_2 != 0) goto LAB_0139d01c;
      uVar7 = 0;
    }
    FUN_00d7331c(uVar6,uVar7);
  }
LAB_0139d01c:
  local_50 = (undefined8 *)&DAT_e2c06acab97c29c2;
  pcStack_48 = "CommonOptionBar";
  local_40 = 0xf;
  local_38 = (long *)0x0;
  uVar6 = FUN_0118c80c(*(undefined8 *)(param_1 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_00d6a4ec(uVar6);
  return;
}


