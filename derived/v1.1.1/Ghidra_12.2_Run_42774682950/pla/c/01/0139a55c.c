/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0139a55c; name: FUN_0139a55c
 */


undefined8 FUN_0139a55c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_a0;
  undefined1 local_94 [4];
  undefined8 local_90;
  undefined8 *local_88 [10];
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  (**(code **)(**(long **)(param_1 + 0x368) + 0x10))(local_88);
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_01160f90(&local_38,local_88);
  puVar4 = local_88[0];
  if (local_88[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88[0] + 1);
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
      local_88[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *puVar4;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  lVar7 = FUN_0139f570(&local_38);
  puVar4 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38 + 1);
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
      local_38[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_88[0] = (undefined8 *)*puVar4;
      FUN_02a44274(lVar8 + 0xd8,local_88);
    }
  }
  if (lVar7 == 0) {
LAB_0139a8a8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(int *)(param_1 + 0x72c) == 2) {
    if ((*(long *)(param_1 + 0x730) != 0) && (uVar6 = FUN_02a43a8c(), (uVar6 & 1) == 0)) {
      return 0;
    }
    if (*(char *)(param_1 + 0x740) != '\0') {
      *(undefined1 *)(param_1 + 0x740) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x72c) == 1) {
    if ((*(long *)(param_1 + 0x730) != 0) && (uVar6 = FUN_02a43a8c(), (uVar6 & 1) == 0))
    goto LAB_0139a8a8;
    FUN_013a398c(local_88,lVar7);
    if ((char)local_88[0] != '\0') {
      if (*(char *)(param_1 + 0x740) == '\0') {
        *(ulong *)(param_1 + 0x744) = ((ulong)local_88[0] >> 0x20) << 0x20 | 1;
        *(undefined1 *)(param_1 + 0x740) = 1;
      }
      else {
        *(ulong *)(param_1 + 0x744) = ((ulong)local_88[0] >> 0x20) << 0x20 | 1;
      }
      local_90 = *(undefined8 *)(*(long *)PTR_DAT_04379ff8 + 0x88);
      local_a0 = param_1 + 0x744;
      local_94[0] = 0;
      FUN_0139d3f8(&local_38,param_1,local_90,&local_90,local_94,&local_a0);
      FUN_011df0e8(param_1 + 0x730,&local_38);
      puVar4 = local_38;
      if (local_38 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_38 + 1);
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
          local_38[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar7 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar7;
          local_28 = *puVar4;
          FUN_02a44274(lVar7 + 0xd8,&local_28);
        }
      }
      *(undefined4 *)(param_1 + 0x72c) = 2;
      return 0;
    }
    FUN_013a38d8(lVar7);
  }
  return 1;
}


