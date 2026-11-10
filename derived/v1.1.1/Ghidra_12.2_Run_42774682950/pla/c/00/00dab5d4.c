/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dab5d4; name: FUN_00dab5d4
 */


undefined8 FUN_00dab5d4(undefined8 param_1,undefined1 *param_2)

{
  long *plVar1;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  long *plVar17;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379678), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar12 = *(long **)(lVar14 + 0xd0);
  if (plVar12 != (long *)0x0) {
    plVar17 = plVar12 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar17 = (long *)plVar12[0xb];
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar1 = plVar12 + 10;
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
    (**(code **)(*plVar12 + 0x10))();
  }
  lVar14 = (**(code **)(*plVar17 + 0x50))(plVar17,0);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar15 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar15;
  plVar12 = *(long **)(lVar15 + 0x298);
  if (plVar12 != (long *)0x0) {
    lVar15 = plVar12[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar15 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar9 = FUN_02c6849c(*(undefined8 *)(lVar14 + 0x98));
  puVar6 = PTR_DAT_0437b630;
  if ((*PTR_DAT_0437b630 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_0437b630);
    if (iVar10 != 0) {
      FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
    }
  }
  puVar7 = PTR_DAT_0437b638;
  DAT_043ad1d0 = *(long *)PTR_DAT_0437b638;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"shuzoku_battle_mons_no",uVar9);
  }
  uVar8 = FUN_02c6f924(*(undefined8 *)(lVar14 + 0x98));
  if ((*puVar6 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_0437b630);
    if (iVar10 != 0) {
      FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b630);
    }
  }
  DAT_043ad1d0 = *(long *)puVar7;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"shuzoku_battle_form_no",uVar8);
  }
  uVar9 = FUN_02c5fb2c(lVar14);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *(long *)puVar7;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"shuzoku_battle_poke_lv",uVar9);
  }
  uVar3 = *param_2;
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *(long *)puVar7;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"shuzoku_battle_judge",uVar3);
  }
  iVar10 = 0;
  puVar16 = (uint *)((long)plVar12 + 0x18c);
  for (lVar14 = 0x388; iVar10 = (puVar16[-0x16] >> 6 & 1) + iVar10, lVar14 != 0;
      lVar14 = lVar14 + -2) {
    iVar10 = (*puVar16 >> 6 & 1) + iVar10;
    puVar16 = puVar16 + 0x2c;
  }
  if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_0437b630), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_0437b640,PTR_DAT_0437b638,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b630);
  }
  DAT_043ad1d0 = *(long *)puVar7;
  if (DAT_043ad1d0 != 0) {
    FUN_00db0b58(DAT_043ad1d0,"shuzoku_battle_clear_count",iVar10);
  }
  lVar14 = plVar12[0xb];
  piVar2 = (int *)(lVar14 + 0xc);
  do {
    iVar10 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar10 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  plVar12 = plVar17 + 10;
  do {
    iVar10 = (int)*plVar12 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *(int *)plVar12 = iVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  return param_1;
}


