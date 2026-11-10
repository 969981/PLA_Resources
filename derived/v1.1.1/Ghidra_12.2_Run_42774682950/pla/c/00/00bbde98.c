/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bbde98; name: FUN_00bbde98
 */


void FUN_00bbde98(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  
  uVar8 = *(ulong *)(param_1 + 0x70);
  puVar1 = (undefined8 *)(param_1 + 0x80);
  if (uVar8 < *(ulong *)(param_1 + 0x78)) {
    FUN_00bbeb20(puVar1,uVar8,param_2);
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 8;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x88);
    lVar13 = (long)(uVar8 - *(long *)(param_1 + 0x68)) >> 3;
    uVar8 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = *(ulong *)(param_1 + 0x78) - *(long *)(param_1 + 0x68);
    if ((ulong)(lVar9 >> 3) < uVar12 >> 1) {
      uVar10 = lVar9 >> 2;
      uVar12 = uVar8;
      if (uVar8 <= uVar10) {
        uVar12 = uVar10;
      }
    }
    if (uVar12 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 << 3,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    plVar7 = (long *)(lVar9 + lVar13 * 8);
    FUN_00bbeb20(puVar1,plVar7,param_2);
    puVar5 = PTR_DAT_04379528;
    plVar14 = *(long **)(param_1 + 0x68);
    plVar17 = *(long **)(param_1 + 0x70);
    plVar16 = plVar7;
    if (plVar17 == plVar14) {
      plVar17 = plVar14;
    }
    else {
      do {
        uVar15 = *puVar1;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
          FUN_008a62a4(puVar5);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (lVar13 != 0) {
          if (0xf < *(ulong *)(lVar13 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = uVar15;
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
        }
        plVar17 = plVar17 + -1;
        lVar11 = *plVar17;
        plVar16 = plVar16 + -1;
        *plVar16 = lVar11;
        if (lVar11 != 0) {
          piVar2 = (int *)(lVar11 + 0x50);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (lVar13 != 0) {
          *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
        }
      } while (plVar17 != plVar14);
      plVar14 = *(long **)(param_1 + 0x68);
      plVar17 = *(long **)(param_1 + 0x70);
    }
    lVar13 = *(long *)(param_1 + 0x78);
    *(long **)(param_1 + 0x68) = plVar16;
    *(long **)(param_1 + 0x70) = plVar7 + 1;
    *(ulong *)(param_1 + 0x78) = lVar9 + uVar12 * 8;
LAB_00bbdf70:
    if (plVar17 != plVar14) {
      while( true ) {
        plVar17 = plVar17 + -1;
        plVar7 = (long *)*plVar17;
        if (plVar7 == (long *)0x0) break;
        plVar16 = plVar7 + 10;
        do {
          iVar6 = (int)*plVar16 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *(int *)plVar16 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 != 0) break;
        (**(code **)(*plVar7 + 0x10))();
        if (plVar17 == plVar14) goto LAB_00bbdfac;
      }
      goto LAB_00bbdf70;
    }
LAB_00bbdfac:
    if (plVar14 != (long *)0x0) {
      plVar7 = (long *)*puVar1;
      lVar13 = lVar13 - (long)plVar14;
      uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
      if ((uVar8 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar7,plVar14,lVar13,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00bbe0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x18))(plVar7,plVar14,lVar13,8);
      return;
    }
  }
  return;
}


