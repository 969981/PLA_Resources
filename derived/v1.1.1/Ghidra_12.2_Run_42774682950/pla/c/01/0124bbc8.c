/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124bbc8; name: FUN_0124bbc8
 */


void FUN_0124bbc8(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined4 uVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long *local_68;
  long *local_58;
  
  lVar15 = *(long *)(param_1 + 0x90);
  uVar2 = *(undefined4 *)(lVar15 + 0x1498);
  plVar12 = *(long **)(lVar15 + 0x14a0);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  uVar3 = *(undefined1 *)(lVar15 + 0x14a8);
  plVar13 = *(long **)(lVar15 + 0x14b0);
  if (plVar13 == (long *)0x0) {
    plVar14 = *(long **)(lVar15 + 0x14b8);
  }
  else {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar14 = *(long **)(lVar15 + 0x14b8);
  }
  if (plVar14 == (long *)0x0) {
    plVar16 = *(long **)(lVar15 + 0x14c8);
  }
  else {
    (**(code **)(*plVar14 + 0x18))(plVar14);
    plVar16 = *(long **)(lVar15 + 0x14c8);
  }
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  puVar6 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar8 = PTR_DAT_04379568;
  puVar7 = PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01149008(&local_58);
  if (local_58 != (long *)0x0) {
    if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379558), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    *(undefined8 *)puVar8 = *(undefined8 *)puVar7;
    FUN_01148cdc(&local_68);
    plVar9 = local_58;
    if (local_68 != (long *)0x0) {
      uVar10 = FUN_01123ce8();
      FUN_010ecfdc(plVar9,uVar3,uVar10,uVar2);
      if (local_68 != (long *)0x0) {
        lVar15 = local_68[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
      if (local_58 != (long *)0x0) {
        lVar15 = local_58[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar11 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


