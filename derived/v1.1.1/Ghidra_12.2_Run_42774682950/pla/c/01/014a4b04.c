/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a4b04; name: FUN_014a4b04
 */


undefined8 FUN_014a4b04(long param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  long *local_50 [3];
  long *local_38;
  long *local_28;
  
  lVar8 = FUN_014a4824();
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  iVar4 = FUN_00d67370(*(undefined8 *)(param_1 + 0x1b0));
  piVar9 = (int *)FUN_014a32f0(lVar8);
  if (*piVar9 == 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148c68(local_50);
    FUN_011171f4(local_50[0],iVar4);
    if (local_50[0] != (long *)0x0) {
      lVar8 = local_50[0][0xb];
      piVar9 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_50[0] + 0x20))();
      }
    }
    FUN_02a4754c(local_50,&DAT_04213908);
    FUN_028354b0(local_50);
    if (local_38 == (long *)0x0) goto LAB_014a4bd0;
  }
  else {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379558), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01149164(&local_28);
    iVar7 = FUN_010d90c0(local_28);
    FUN_010d90c8(local_28,iVar7 - iVar4);
    FUN_02a4754c(local_50,&DAT_04213920);
    FUN_028354b0(local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (local_28 == (long *)0x0) goto LAB_014a4bd0;
    lVar8 = local_28[0xb];
    piVar9 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar9;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 != 0) goto LAB_014a4bd0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    local_38 = local_28;
  }
  (**(code **)(*local_38 + 0x20))();
LAB_014a4bd0:
  FUN_014a6ff8(*(undefined8 *)(param_1 + 0x1a8));
  FUN_014a74ec(*(undefined8 *)(param_1 + 0x1a8),iVar4);
  uVar5 = FUN_00d67240(*(undefined8 *)(param_1 + 0x1b0));
  FUN_014a74e4(*(undefined8 *)(param_1 + 0x1a8));
  uVar1 = (uint)*(ushort *)(param_1 + 0x1c2);
  if (uVar5 <= *(ushort *)(param_1 + 0x1c2)) {
    uVar1 = uVar5;
  }
  if (uVar1 != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148e38(local_50);
    FUN_010db1d8(local_50[0],*(undefined2 *)(param_1 + 0x1c6),uVar1,0xffffffff);
    uVar5 = uVar5 - uVar1;
    FUN_014a74a4(*(undefined8 *)(param_1 + 0x1a8),0,uVar1);
    if (local_50[0] != (long *)0x0) {
      lVar8 = local_50[0][0xb];
      piVar9 = (int *)(lVar8 + 0xc);
      do {
        iVar4 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_50[0] + 0x20))();
      }
    }
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x1c4);
  if (uVar5 <= *(ushort *)(param_1 + 0x1c4)) {
    uVar1 = uVar5;
  }
  if (uVar1 != 0) {
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
    FUN_01148b0c(local_50);
    FUN_0111daac(local_50[0],*(undefined2 *)(param_1 + 0x1c6),uVar1);
    FUN_014a74a4(*(undefined8 *)(param_1 + 0x1a8),1,uVar1);
    if (local_50[0] != (long *)0x0) {
      lVar8 = local_50[0][0xb];
      piVar9 = (int *)(lVar8 + 0xc);
      do {
        iVar4 = *piVar9;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = iVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_50[0] + 0x20))();
      }
    }
  }
  uVar10 = *(undefined8 *)(param_1 + 0x1a8);
  uVar6 = FUN_00d4bf2c(uVar10,0);
  FUN_014a7b1c(uVar10,uVar6);
  FUN_014a4ab4(param_1);
  return 0;
}


