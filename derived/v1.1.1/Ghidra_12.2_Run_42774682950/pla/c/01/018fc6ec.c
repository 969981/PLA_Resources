/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018fc6ec; name: FUN_018fc6ec
 */


void FUN_018fc6ec(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *local_40;
  long *local_38;
  undefined8 uStack_30;
  long *local_28;
  long local_18;
  
  FUN_018f8f5c(&local_38);
  FUN_018fb610(&local_28,&local_38);
  plVar5 = local_38;
  if (local_38 != (long *)0x0) {
    plVar1 = local_38 + 1;
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
      local_38[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *plVar5;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  if (local_28 != (long *)0x0) {
    local_38 = (long *)0x0;
    uStack_30 = 0;
    FUN_01901970(&local_38,local_28 + 0x5e);
    FUN_018fc9a0(&local_40,&local_38);
    plVar5 = local_38;
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
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
        local_38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_18 = *plVar5;
        FUN_02a44274(lVar8 + 0xd8,&local_18);
      }
    }
    if (local_40 != (long *)0x0) {
      uVar7 = local_40[0x43];
      if (((uint)(uVar7 >> 0x20) <
           (uint)((ulong)(*(long *)(DAT_043ef5a8 + 0x108) - *(long *)(DAT_043ef5a8 + 0x100)) >> 2))
         && (iVar6 = *(int *)(*(long *)(DAT_043ef5a8 + 0x100) + (uVar7 >> 0x20) * 4), -1 < iVar6)) {
        *(ulong *)(*(long *)(*(long *)(DAT_043ef5a8 + 0x60) + (long)iVar6 * 0x20) + 0xd0) = uVar7;
      }
      lVar8 = local_40[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
    }
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
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
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
        lVar8 = *(long *)(param_1 + 0xb0);
        goto joined_r0x018fc8c8;
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0xb0);
joined_r0x018fc8c8:
  if ((lVar8 != 0) && (FUN_015202a4(&local_38), local_38 != (long *)0x0)) {
    lVar8 = local_38[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    *(undefined1 *)((long)local_38 + 0x1ef) = 0;
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


