/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b372c0; name: FUN_02b372c0
 */


void FUN_02b372c0(long *param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  
  plVar14 = *(long **)(param_2 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar14;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar9 = (**(code **)(*plVar14 + 0x10))(plVar14,0x130,8);
  if (lVar9 == 0) {
    (**(code **)(*plVar14 + 0xb8))(plVar14);
  }
  FUN_02b72cbc(lVar9,param_2 + 0x58);
  *(long **)(lVar9 + 8) = plVar14;
  *(long *)(lVar9 + 0x10) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 0x130;
  *(undefined8 *)(lVar9 + 0x20) = 8;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  *param_1 = lVar9;
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar8 = *(long *)(param_2 + 0x80);
  puVar2 = (undefined8 *)(param_2 + 0x90);
  if (lVar8 == *(long *)(param_2 + 0x88)) {
    uVar13 = *(ulong *)(param_2 + 0x98);
    lVar8 = lVar8 - *(long *)(param_2 + 0x78) >> 3;
    uVar10 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = *(long *)(param_2 + 0x88) - *(long *)(param_2 + 0x78);
    uVar12 = lVar9 >> 2;
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if ((ulong)(lVar9 >> 3) < uVar13 >> 1) {
      uVar13 = uVar10;
    }
    if (uVar13 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar13 << 3,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar16 = lVar9 + lVar8 * 8;
    FUN_02b2e120(puVar2,lVar16,param_1);
    plVar14 = *(long **)(param_2 + 0x78);
    plVar15 = *(long **)(param_2 + 0x80);
    lVar8 = lVar16 + 8;
    if (plVar15 == plVar14) {
      plVar15 = plVar14;
    }
    else {
      do {
        lVar16 = lVar16 + -8;
        plVar15 = plVar15 + -1;
        FUN_02b2e120(puVar2,lVar16,plVar15);
      } while (plVar14 != plVar15);
      plVar14 = *(long **)(param_2 + 0x78);
      plVar15 = *(long **)(param_2 + 0x80);
    }
    *(long *)(param_2 + 0x78) = lVar16;
    *(long *)(param_2 + 0x80) = lVar8;
    lVar8 = *(long *)(param_2 + 0x88);
    *(ulong *)(param_2 + 0x88) = lVar9 + uVar13 * 8;
    while (plVar15 != plVar14) {
      plVar15 = plVar15 + -1;
      plVar11 = (long *)*plVar15;
      if (plVar11 != (long *)0x0) {
        plVar3 = plVar11 + 10;
        do {
          iVar7 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar7;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar15 = (long *)*puVar2;
      lVar8 = lVar8 - (long)plVar14;
      uVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar10 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar15,plVar14,lVar8,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02b37554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar14,lVar8,8);
      return;
    }
  }
  else {
    FUN_02b2e120(puVar2,lVar8,param_1);
    *(long *)(param_2 + 0x80) = *(long *)(param_2 + 0x80) + 8;
  }
  return;
}


