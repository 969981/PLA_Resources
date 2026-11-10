/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a248c; name: FUN_011a248c
 */


void FUN_011a248c(long param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  
  if (*(int *)(param_1 + 0x6d8) != 0) {
    return;
  }
  puVar13 = (undefined8 *)FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8);
  puVar8 = PTR_DAT_04379558;
  lVar15 = puVar13[0x116];
  iVar12 = *(int *)(lVar15 + 0x10);
  iVar2 = *(int *)(lVar15 + 0x14);
  piVar1 = (int *)(lVar15 + 0x20);
  if (*(int *)(lVar15 + 0x28) != 0) {
    piVar1 = (int *)(lVar15 + 0x24);
  }
  iVar3 = *piVar1;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (puVar13 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    puVar13 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
  }
  puVar10 = PTR_DAT_04379568;
  puVar9 = PTR_DAT_04379560;
  lVar15 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar15;
  plVar16 = *(long **)(lVar15 + 0x280);
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    puVar13 = *(undefined8 **)(lVar15 + 0x18);
    if (puVar13 == (undefined8 *)0x0) goto LAB_011a2734;
    if (*(long *)(lVar15 + 0x10) == 0) {
      puVar13 = (undefined8 *)(**(code **)*puVar13)();
      *(undefined8 **)(lVar15 + 0x10) = puVar13;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  iVar4 = *(int *)(param_1 + 0x16c4);
  uVar11 = FUN_010dac08(puVar13,iVar4);
  if (iVar4 == 0) {
    plVar17 = plVar16 + 0xd;
  }
  else if (iVar4 == 1) {
    plVar17 = (long *)((long)plVar16 + 0xaf4);
  }
  else {
    if (iVar4 != 2) goto joined_r0x011a2634;
    plVar17 = (long *)((long)plVar16 + 0xc84);
  }
  uVar5 = iVar2 + iVar3 * iVar12;
  if (uVar5 < uVar11) {
    uVar11 = *(uint *)((long)plVar17 + (ulong)uVar5 * 4);
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar15 = *(long *)puVar9;
    *(long *)puVar10 = lVar15;
    plVar17 = *(long **)(lVar15 + 0x260);
    if (plVar17 != (long *)0x0) {
      lVar15 = plVar17[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_011a2734:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    FUN_01117218(plVar17,uVar11,
                 (*(uint *)((long)plVar17 + ((ulong)(uVar11 >> 5) & 0x7ff) * 4 + 0x1a8) &
                 1 << (ulong)(uVar11 & 0x1f)) == 0);
    FUN_00d5d5c8(param_1,0,uVar5);
    if (plVar17 != (long *)0x0) {
      lVar15 = plVar17[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar12 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar17 + 0x20))(plVar17);
      }
    }
  }
joined_r0x011a2634:
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar12 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x011a267c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x20))(plVar16);
      return;
    }
  }
  return;
}


