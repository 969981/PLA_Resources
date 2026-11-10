/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8ac20; name: FUN_01a8ac20
 */


void FUN_01a8ac20(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  undefined1 in_q3 [16];
  long *local_38;
  undefined8 uStack_30;
  long *local_28;
  long local_18;
  
  uVar8 = in_q3._4_4_;
  local_38 = (long *)0x0;
  uStack_30 = 0;
  FUN_01a0703c(&local_38,param_1 + 0xad0);
  FUN_01839c8c(&local_28,&local_38);
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
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_18 = *plVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_18);
    }
  }
  if (local_28 != (long *)0x0) {
    if ((char)local_28[0x10] != '\0') {
      *(undefined4 *)(param_1 + 0x9c0) = *(undefined4 *)((long)local_28 + 0x94);
      lVar7 = local_28[0xb];
      piVar2 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto joined_r0x01a8ad68;
    }
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
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_009c69bc(&local_38,param_1);
  (**(code **)(*local_38 + 0x40))();
  *(undefined4 *)(param_1 + 0x9c0) = uVar8;
  if (local_38 == (long *)0x0) {
    return;
  }
  lVar7 = local_38[0xb];
  piVar2 = (int *)(lVar7 + 0xc);
  do {
    iVar6 = *piVar2 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    local_28 = local_38;
  } while (cVar3 != '\0');
joined_r0x01a8ad68:
  if (iVar6 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


