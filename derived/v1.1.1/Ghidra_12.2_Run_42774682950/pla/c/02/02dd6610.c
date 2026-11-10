/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dd6610; name: FUN_02dd6610
 */


void FUN_02dd6610(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  uVar9 = param_1[1];
  plVar16 = param_1 + 3;
  if (uVar9 < (ulong)param_1[2]) {
    FUN_02dd9388(plVar16,uVar9,param_2);
    param_1[1] = param_1[1] + 0x30;
  }
  else {
    uVar15 = param_1[4];
    lVar14 = (long)(uVar9 - *param_1) >> 4;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    uVar9 = lVar14 * -0x5555555555555555 + 1;
    if (uVar15 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = param_1[2] - *param_1 >> 4;
    uVar12 = lVar11 * 0x5555555555555556;
    if (uVar9 <= uVar12) {
      uVar9 = uVar12;
    }
    if ((ulong)(lVar11 * -0x5555555555555555) < uVar15 >> 1) {
      uVar15 = uVar9;
    }
    if (uVar15 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar15 * 0x30,0x10);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*plVar16 + 0xb8))();
      }
    }
    lVar18 = lVar11 + lVar14 * 0x10;
    FUN_02dd9388(plVar16,lVar18,param_2);
    puVar6 = PTR_DAT_04379528;
    puVar5 = PTR_DAT_04379520;
    lVar14 = *param_1;
    lVar13 = param_1[1];
    if (lVar13 == lVar14) {
      lVar19 = lVar18;
      lVar13 = lVar14;
    }
    else {
      lVar17 = lVar18;
      do {
        lVar19 = *plVar16;
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          FUN_008a62a4(puVar6);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (lVar8 != 0) {
          if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar19;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        }
        *(undefined8 *)(lVar17 + -0x30) = *(undefined8 *)(lVar13 + -0x30);
        lVar19 = *(long *)(lVar13 + -0x28);
        *(long *)(lVar17 + -0x28) = lVar19;
        if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
          plVar10 = (long *)(lVar19 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = *plVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        lVar19 = *(long *)(lVar13 + -0x20);
        *(long *)(lVar17 + -0x20) = lVar19;
        if ((lVar19 != 0) && (*(long *)(lVar19 + 8) != 0)) {
          plVar10 = (long *)(lVar19 + 0x10);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar4) {
              *plVar10 = *plVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        *(undefined8 *)(lVar17 + -8) = *(undefined8 *)(lVar13 + -8);
        puVar1 = (undefined8 *)(lVar13 + -0x10);
        lVar19 = lVar17 + -0x30;
        lVar13 = lVar13 + -0x30;
        *(undefined8 *)(lVar17 + -0x10) = *puVar1;
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        lVar17 = lVar19;
      } while (lVar13 != lVar14);
      lVar14 = *param_1;
      lVar13 = param_1[1];
    }
    lVar17 = param_1[2];
    param_1[2] = lVar11 + uVar15 * 0x30;
    *param_1 = lVar19;
    param_1[1] = lVar18 + 0x30;
    while (lVar13 != lVar14) {
      plVar10 = *(long **)(lVar13 + -0x20);
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar2 = plVar10 + 2;
        do {
          lVar11 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
      plVar10 = *(long **)(lVar13 + -0x28);
      lVar13 = lVar13 + -0x30;
      if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
        plVar2 = plVar10 + 2;
        do {
          lVar11 = *plVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *plVar2 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plVar10 + 0x18))();
        }
      }
    }
    if (lVar14 != 0) {
      plVar16 = (long *)*plVar16;
      uVar9 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar9 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar16,lVar14,lVar17 - lVar14,0x10);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02dd6900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar17 - lVar14,0x10);
      return;
    }
  }
  return;
}


