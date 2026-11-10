/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014a4fd8; name: FUN_014a4fd8
 */


undefined1 FUN_014a4fd8(long param_1)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined2 uVar10;
  short sVar11;
  short sVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  long *local_50 [2];
  long *local_38;
  
  *(undefined2 *)(param_1 + 0x1c0) = 999;
  lVar16 = FUN_014a4824();
  if (lVar16 == 0) {
    return 2;
  }
  FUN_014a3518(local_50);
  plVar1 = local_50[0];
  uVar13 = FUN_00d4bf2c(*(undefined8 *)(param_1 + 0x1a8),0);
  uVar10 = FUN_0149e1ac(plVar1,uVar13);
  *(undefined2 *)(param_1 + 0x1c6) = uVar10;
  if (local_50[0] != (long *)0x0) {
    plVar1 = local_50[0] + 10;
    do {
      iVar15 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
  }
  FUN_02c4fb44(local_50,*(undefined2 *)(param_1 + 0x1c6));
  piVar17 = (int *)FUN_014a32f0(lVar16);
  puVar9 = PTR_DAT_04379568;
  puVar8 = PTR_DAT_04379560;
  puVar7 = PTR_DAT_04379558;
  if (*piVar17 == 0) {
    uVar13 = FUN_02c4fc60(local_50,1);
    *(undefined4 *)(param_1 + 0x1c8) = uVar13;
    if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
    FUN_01148c68(&local_38);
    uVar14 = FUN_011171a4(local_38);
    if (local_38 == (long *)0x0) goto LAB_014a50dc;
    lVar16 = local_38[0xb];
    piVar17 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar17 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar5) {
        *piVar17 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    uVar13 = FUN_02c4fc60(local_50,3);
    *(undefined4 *)(param_1 + 0x1c8) = uVar13;
    if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
    FUN_01149164(&local_38);
    uVar14 = FUN_010d90c0(local_38);
    if (local_38 == (long *)0x0) goto LAB_014a50dc;
    lVar16 = local_38[0xb];
    piVar17 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar17 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar5) {
        *piVar17 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar15 == 0) {
    *(undefined8 *)(lVar16 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
  }
LAB_014a50dc:
  uVar2 = *(uint *)(param_1 + 0x1c8);
  if (uVar14 < uVar2) {
    FUN_02c4fc5c(local_50);
    return 2;
  }
  uVar6 = 0;
  if (uVar2 != 0) {
    uVar6 = uVar14 / uVar2;
  }
  if (uVar6 < *(ushort *)(param_1 + 0x1c0)) {
    *(short *)(param_1 + 0x1c0) = (short)uVar6;
  }
  FUN_02c4fc5c(local_50);
  if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
  FUN_01148e38(local_50);
  sVar11 = FUN_010db1ac(local_50[0],*(undefined2 *)(param_1 + 0x1c6));
  sVar12 = FUN_010da868(local_50[0],*(undefined2 *)(param_1 + 0x1c6));
  uVar3 = *(ushort *)(param_1 + 0x1c0);
  if ((ushort)(sVar11 - sVar12) <= *(ushort *)(param_1 + 0x1c0)) {
    uVar3 = sVar11 - sVar12;
  }
  *(ushort *)(param_1 + 0x1c2) = uVar3;
  if ((uVar3 != 0) &&
     (uVar18 = FUN_010db41c(local_50[0],*(undefined2 *)(param_1 + 0x1c6),uVar3,0xffffffff),
     (uVar18 & 1) == 0)) {
    *(undefined2 *)(param_1 + 0x1c2) = 0;
  }
  if (local_50[0] != (long *)0x0) {
    lVar16 = local_50[0][0xb];
    piVar17 = (int *)(lVar16 + 0xc);
    do {
      iVar15 = *piVar17;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
      if (bVar5) {
        *piVar17 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_50[0] + 0x20))();
    }
  }
  uVar3 = *(ushort *)(param_1 + 0x1c2);
  iVar15 = (uint)*(ushort *)(param_1 + 0x1c0) - (uint)uVar3;
  if (iVar15 == 0) {
    *(undefined2 *)(param_1 + 0x1c4) = 0;
    sVar11 = 0;
  }
  else {
    *(short *)(param_1 + 0x1c4) = (short)iVar15;
    if (((*puVar7 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379558), iVar15 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
    FUN_01148b0c(local_50);
    sVar11 = *(short *)(param_1 + 0x1c4);
    while ((sVar11 != 0 &&
           (uVar18 = FUN_0111d5d4(local_50[0],*(undefined2 *)(param_1 + 0x1c6),sVar11),
           (uVar18 & 1) == 0))) {
      sVar11 = *(short *)(param_1 + 0x1c4) + -1;
      *(short *)(param_1 + 0x1c4) = sVar11;
    }
    if (local_50[0] != (long *)0x0) {
      lVar16 = local_50[0][0xb];
      piVar17 = (int *)(lVar16 + 0xc);
      do {
        iVar15 = *piVar17;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar5) {
          *piVar17 = iVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_50[0] + 0x20))();
      }
    }
    uVar3 = *(ushort *)(param_1 + 0x1c2);
    sVar11 = *(short *)(param_1 + 0x1c4);
  }
  *(ushort *)(param_1 + 0x1c0) = uVar3 + sVar11;
  return (ushort)(uVar3 + sVar11) == 0;
}


