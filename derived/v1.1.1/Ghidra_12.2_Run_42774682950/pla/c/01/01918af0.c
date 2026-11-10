/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01918af0; name: FUN_01918af0
 */


void FUN_01918af0(long param_1,long *param_2)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  
  if (*param_2 == 0) {
    return;
  }
  if (*(int *)(*param_2 + 0xc) == 0) {
    return;
  }
  if ((ulong)(long)*(int *)(param_1 + 0x78) <= *(ulong *)(param_1 + 0x50)) {
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_0191af40(&local_48,
                 *(long *)(*(long *)(param_1 + 0x10) +
                          (*(ulong *)(param_1 + 0x48) >> 5 & 0x7fffffffffffff8)) +
                 (*(ulong *)(param_1 + 0x48) & 0xff) * 0x10);
    if ((local_48 != (undefined8 *)0x0) &&
       (FUN_0191b1b8(&local_38), plVar7 = local_38, local_38 != (long *)0x0)) {
      FUN_0191b340(local_38,1);
      lVar9 = plVar7[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
    }
    FUN_0191ad3c(param_1 + 8);
    puVar6 = local_48;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar8 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 + -1 == 0) {
        local_48[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_38 = (long *)*puVar6;
        FUN_02a44274(lVar9 + 0xd8,&local_38);
      }
    }
  }
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_0191af40(&local_48,param_2);
  lVar9 = *(long *)(param_1 + 0x10);
  lVar5 = *(long *)(param_1 + 0x18) - lVar9;
  uVar2 = 0;
  if (lVar5 != 0) {
    uVar2 = lVar5 * 0x20 - 1;
  }
  uVar10 = *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x48);
  if (uVar2 == uVar10) {
    FUN_0191b3c4(param_1 + 8);
    uVar10 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x50);
    lVar9 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_1 + 0x18) == lVar9) goto LAB_01918b74;
  }
  else if (*(long *)(param_1 + 0x18) == lVar9) {
LAB_01918b74:
    lVar9 = 0;
    goto LAB_01918b78;
  }
  lVar9 = *(long *)(lVar9 + (uVar10 >> 5 & 0x7fffffffffffff8)) + (uVar10 & 0xff) * 0x10;
LAB_01918b78:
  FUN_0191c20c(param_1 + 0x58,lVar9,&local_48);
  puVar6 = local_48;
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  if (local_48 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = (long *)*puVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  return;
}


