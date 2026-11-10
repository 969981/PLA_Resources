/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01196c4c; name: FUN_01196c4c
 */


void FUN_01196c4c(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ushort uVar16;
  long lVar17;
  int *piVar18;
  ulong uVar19;
  undefined4 uVar20;
  long *plVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  
  uVar16 = *(ushort *)(*(long *)(param_1 + 0x1a8) + 0x16b0);
  uVar3 = *(undefined2 *)(*(long *)(param_1 + 0x1a8) + 0x16b2);
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar17 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar17;
  plVar21 = *(long **)(lVar17 + 0xd0);
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar22 = (long *)plVar21[0xb];
  if (plVar22 != (long *)0x0) {
    plVar1 = plVar22 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar14 = (undefined8 *)(**(code **)(*plVar22 + 0x50))(plVar22,uVar3);
  puVar15 = puVar14;
  if (plVar22 != (long *)0x0) {
    plVar1 = plVar22 + 10;
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 == 0) {
      puVar15 = (undefined8 *)(**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
  plVar22 = plVar21 + 10;
  do {
    iVar10 = (int)*plVar22 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar5) {
      *(int *)plVar22 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 == 0) {
    puVar15 = (undefined8 *)(**(code **)(*plVar21 + 0x10))(plVar21);
  }
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (puVar15 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar15 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    puVar15 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
  }
  lVar17 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar17;
  plVar21 = *(long **)(lVar17 + 0x280);
  if (plVar21 != (long *)0x0) {
    lVar17 = plVar21[0xb];
    puVar15 = *(undefined8 **)(lVar17 + 0x18);
    if (puVar15 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      puVar15 = (undefined8 *)(**(code **)*puVar15)();
      *(undefined8 **)(lVar17 + 0x10) = puVar15;
    }
    piVar18 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar5) {
        *piVar18 = *piVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  iVar10 = *(int *)(*(long *)(param_1 + 0x1a8) + 0x16c4);
  uVar9 = FUN_010dac08(puVar15,iVar10);
  if (iVar10 == 0) {
    plVar22 = plVar21 + 0xd;
joined_r0x01197114:
    if (uVar9 <= uVar16) goto LAB_01197118;
LAB_01196dac:
    uVar20 = *(undefined4 *)((long)plVar22 + (ulong)uVar16 * 4);
  }
  else {
    if (iVar10 == 1) {
      plVar22 = (long *)((long)plVar21 + 0xaf4);
      if (uVar16 < uVar9) goto LAB_01196dac;
    }
    else if (iVar10 == 2) {
      plVar22 = (long *)((long)plVar21 + 0xc84);
      goto joined_r0x01197114;
    }
LAB_01197118:
    uVar20 = 0;
  }
  if (plVar21 != (long *)0x0) {
    lVar17 = plVar21[0xb];
    piVar18 = (int *)(lVar17 + 0xc);
    do {
      iVar10 = *piVar18;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar18,0x10);
      if (bVar5) {
        *piVar18 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  iVar10 = FUN_011a43c8(*(undefined8 *)(param_1 + 0x1a8),uVar20);
  if (iVar10 == -1) {
    uVar13 = FUN_02c6849c(puVar14[0x13]);
    uVar11 = FUN_02c6f924(puVar14[0x13]);
    iVar10 = FUN_02c5fb2c(puVar14);
    iVar10 = FUN_02c524b0(uVar13,uVar11,*(int *)(param_1 + 0x278) + iVar10);
    iVar12 = FUN_02c68e44(puVar14[0x13]);
    uVar9 = iVar10 - iVar12;
    goto LAB_01196f54;
  }
  iVar12 = *(int *)(param_1 + 0x278);
  uVar9 = FUN_02c6849c(puVar14[0x13]);
  uVar7 = FUN_02c6f924(puVar14[0x13]);
  bVar5 = (uVar9 | 1) != 0x38b;
  uVar16 = 0;
  if ((int)uVar9 < 0x38a && bVar5) {
    uVar16 = uVar7;
  }
  if (uVar16 < 0x1c) {
    uVar19 = 0;
    if ((int)uVar9 < 0x38a && bVar5) {
      uVar19 = (ulong)uVar9;
    }
    lVar17 = *(&DAT_043f23a0)[uVar19 * 4];
    uVar19 = (&DAT_043f23a0)[uVar19 * 4][1] - lVar17 >> 3;
    if ((uVar19 <= uVar16) || (*(long *)(lVar17 + (ulong)uVar16 * 8) == 0)) goto LAB_01196e68;
  }
  else {
LAB_01196e68:
    uVar16 = 0;
    lVar17 = *DAT_043f23a0;
    uVar19 = DAT_043f23a0[1] - lVar17 >> 3;
  }
  if (uVar19 <= uVar16) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar18 = *(int **)(lVar17 + (ulong)uVar16 * 8);
  uVar23 = iVar12 * iVar10;
  if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 0x23) ||
     (uVar19 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[0x11], uVar19 == 0)) {
    uVar19 = 0;
  }
  else {
    bVar6 = *(byte *)((long)piVar18 + uVar19);
    uVar9 = 0;
    if (bVar6 < 6) {
      uVar9 = (uint)bVar6;
    }
    uVar19 = (ulong)uVar9;
  }
  iVar10 = *(int *)(*(long *)((&DAT_0428ab10)[uVar19 * 6] + 0x250) + 400);
  iVar12 = FUN_02c68e44(puVar14[0x13]);
  uVar9 = iVar10 - iVar12;
  if (uVar23 <= uVar9) {
    uVar9 = uVar23;
  }
LAB_01196f54:
  uVar8 = FUN_02c5fb2c(puVar14);
  *(undefined2 *)(param_1 + 0x27c) = uVar8;
  bVar6 = FUN_011a9a80(*(undefined8 *)(param_1 + 0x1b0),uVar3,0);
  *(byte *)(param_1 + 0x280) = bVar6 & 1;
  *(undefined2 *)(param_1 + 0x27e) = 0;
  iVar10 = FUN_02c6b1c0(puVar14[0x13],0);
  iVar12 = FUN_02c6b1c0(puVar14[0x13],1);
  uVar23 = 2;
  if (iVar10 == 0) {
    uVar23 = 1;
  }
  uVar24 = (uint)(iVar10 != 0);
  if (iVar12 != 0) {
    uVar24 = uVar23;
  }
  iVar10 = FUN_02c6b1c0(puVar14[0x13],2);
  if (iVar10 != 0) {
    uVar24 = uVar24 + 1;
  }
  iVar10 = FUN_02c6b1c0(puVar14[0x13],3);
  if (uVar24 != -(uint)(iVar10 != 0)) {
    uVar23 = 0;
    do {
      uVar13 = FUN_02c6b1c0(puVar14[0x13],uVar23);
      uVar19 = FUN_02c618d4(puVar14,uVar13);
      if ((uVar19 & 1) != 0) {
        *(ushort *)(param_1 + 0x27e) =
             *(ushort *)(param_1 + 0x27e) | (ushort)(1 << (ulong)(uVar23 & 0x1f));
      }
      uVar23 = uVar23 + 1;
      iVar10 = FUN_02c6b1c0(puVar14[0x13],0);
      iVar12 = FUN_02c6b1c0(puVar14[0x13],1);
      uVar24 = 2;
      if (iVar10 == 0) {
        uVar24 = 1;
      }
      uVar2 = (uint)(iVar10 != 0);
      if (iVar12 != 0) {
        uVar2 = uVar24;
      }
      iVar10 = FUN_02c6b1c0(puVar14[0x13],2);
      if (iVar10 != 0) {
        uVar2 = uVar2 + 1;
      }
      iVar10 = FUN_02c6b1c0(puVar14[0x13],3);
      if (iVar10 != 0) {
        uVar2 = uVar2 + 1;
      }
    } while (uVar23 < uVar2);
  }
  FUN_011ab768(*(undefined8 *)(param_1 + 0x1b0),uVar3,uVar9);
  if (*(int *)(param_1 + 0x278) != 0) {
    uVar9 = 0;
    do {
      FUN_0109fca8(puVar14,uVar20);
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x278));
  }
  *(undefined8 *)(param_1 + 0x1d0) = 0xc;
  return;
}


