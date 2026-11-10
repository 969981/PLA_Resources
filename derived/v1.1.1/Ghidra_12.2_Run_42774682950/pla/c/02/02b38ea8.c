/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b38ea8; name: FUN_02b38ea8
 */


void FUN_02b38ea8(long *param_1,ulong param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  
  plVar13 = param_1 + 3;
  if ((ulong)(param_1[2] - param_1[1] >> 3) < param_2) {
    uVar12 = param_1[4];
    lVar14 = param_1[1] - *param_1 >> 3;
    uVar9 = lVar14 + param_2;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = param_1[2] - *param_1;
    uVar11 = lVar10 >> 2;
    if (uVar9 <= uVar11) {
      uVar9 = uVar11;
    }
    if ((ulong)(lVar10 >> 3) < uVar12 >> 1) {
      uVar12 = uVar9;
    }
    if (uVar12 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*plVar13 + 0x10))((long *)*plVar13,uVar12 << 3,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*plVar13 + 0xb8))();
      }
    }
    plVar16 = (long *)(lVar10 + lVar14 * 8);
    plVar8 = plVar16;
    do {
      FUN_02b3921c(plVar13,plVar8);
      puVar5 = PTR_DAT_04379528;
      puVar4 = PTR_DAT_04379520;
      plVar8 = plVar8 + 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    plVar15 = (long *)*param_1;
    plVar17 = (long *)param_1[1];
    if (plVar17 == plVar15) {
      plVar17 = plVar15;
    }
    else {
      do {
        lVar14 = *plVar13;
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          FUN_008a62a4(puVar5);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar14;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        plVar17 = plVar17 + -1;
        lVar14 = *plVar17;
        plVar16 = plVar16 + -1;
        *plVar16 = lVar14;
        if (lVar14 != 0) {
          piVar1 = (int *)(lVar14 + 0x50);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
      } while (plVar17 != plVar15);
      plVar15 = (long *)*param_1;
      plVar17 = (long *)param_1[1];
    }
    lVar14 = param_1[2];
    param_1[2] = lVar10 + uVar12 * 8;
    *param_1 = (long)plVar16;
    param_1[1] = (long)plVar8;
LAB_02b39094:
    if (plVar17 != plVar15) {
      while( true ) {
        plVar17 = plVar17 + -1;
        plVar8 = (long *)*plVar17;
        if (plVar8 == (long *)0x0) break;
        plVar16 = plVar8 + 10;
        do {
          iVar6 = (int)*plVar16 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *(int *)plVar16 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 != 0) break;
        (**(code **)(*plVar8 + 0x10))();
        if (plVar17 == plVar15) goto LAB_02b390d0;
      }
      goto LAB_02b39094;
    }
LAB_02b390d0:
    if (plVar15 != (long *)0x0) {
      plVar13 = (long *)*plVar13;
      uVar9 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar9 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar13,plVar15,lVar14 - (long)plVar15,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02b39168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar15,lVar14 - (long)plVar15,8);
      return;
    }
  }
  else {
    do {
      FUN_02b3921c(plVar13);
      param_2 = param_2 - 1;
      param_1[1] = param_1[1] + 8;
    } while (param_2 != 0);
  }
  return;
}


