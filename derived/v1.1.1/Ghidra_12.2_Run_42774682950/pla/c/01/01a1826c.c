/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a1826c; name: FUN_01a1826c
 */


undefined1  [16] FUN_01a1826c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  long *local_38;
  long local_30;
  long lStack_28;
  
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379578), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar6 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar6;
  lVar6 = *(long *)(lVar6 + 200);
  if (lVar6 == 0) {
    return ZEXT816(0);
  }
  if (*(int *)(param_1 + 0xed40) == 2) {
    local_30 = CONCAT71(local_30._1_7_,(char)*(undefined4 *)(param_1 + 0xed44));
    FUN_00995ec4(&local_38,0,lVar6,&local_30);
    if (local_38 == (long *)0x0) {
      return ZEXT816(0);
    }
    lStack_28 = local_38[0x19];
    local_30 = local_38[0x18];
    auVar12 = FUN_0098fad4(&local_30);
    if (local_38 == (long *)0x0) {
      return auVar12;
    }
    lVar6 = local_38[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) {
      return auVar12;
    }
    *(undefined8 *)(lVar6 + 0x18) = 0;
    pcVar8 = *(code **)(*local_38 + 0x20);
  }
  else {
    if (*(int *)(param_1 + 0xed40) != 1) {
      return ZEXT816(0);
    }
    uVar9 = *(ulong *)(lVar6 + 0xd8);
    iVar4 = *(int *)(param_1 + 0xed44);
    uVar7 = (ulong)iVar4;
    if ((uVar9 & uVar9 - 1) == 0) {
      plVar10 = *(long **)(*(long *)(lVar6 + 0xd0) + (uVar9 - 1 & uVar7) * 8);
      do {
        do {
          plVar10 = (long *)*plVar10;
        } while (plVar10[1] != uVar7);
      } while (*(int *)(plVar10 + 2) != iVar4);
    }
    else {
      uVar11 = uVar7;
      if (uVar9 <= uVar7) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar7 / uVar9;
        }
        uVar11 = uVar7 - uVar11 * uVar9;
      }
      plVar10 = *(long **)(*(long *)(lVar6 + 0xd0) + uVar11 * 8);
      do {
        do {
          plVar10 = (long *)*plVar10;
        } while (plVar10[1] != uVar7);
      } while (*(int *)(plVar10 + 2) != iVar4);
    }
    plVar10 = *(long **)((long)plVar10 + 0x18);
    if (plVar10 == (long *)0x0) {
      return ZEXT816(0);
    }
    lVar6 = plVar10[0xb];
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lStack_28 = plVar10[0x19];
    local_30 = plVar10[0x18];
    auVar12 = FUN_0098fad4(&local_30);
    lVar6 = plVar10[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 != 0) {
      return auVar12;
    }
    *(undefined8 *)(lVar6 + 0x18) = 0;
    pcVar8 = *(code **)(*plVar10 + 0x20);
    local_38 = plVar10;
  }
  (*pcVar8)(local_38);
  return auVar12;
}


