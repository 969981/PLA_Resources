/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb232c; name: FUN_02bb232c
 */


void FUN_02bb232c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  uVar11 = param_1[1];
  if (uVar11 < (ulong)param_1[2]) {
    FUN_02bb26cc(param_1[3],uVar11,param_2,param_3,param_4);
    param_1[1] = param_1[1] + 0x18;
  }
  else {
    uVar16 = param_1[4];
    lVar15 = (long)(uVar11 - *param_1) >> 3;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    uVar11 = lVar15 * -0x5555555555555555 + 1;
    if (uVar16 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = param_1[2] - *param_1 >> 3;
    uVar13 = lVar12 * 0x5555555555555556;
    if (uVar11 <= uVar13) {
      uVar11 = uVar13;
    }
    if ((ulong)(lVar12 * -0x5555555555555555) < uVar16 >> 1) {
      uVar16 = uVar11;
    }
    if (uVar16 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],uVar16 * 0x18,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)param_1[3] + 0xb8))();
      }
    }
    lVar18 = lVar12 + lVar15 * 8;
    FUN_02bb26cc(param_1[3],lVar18,param_2,param_3,param_4);
    puVar7 = PTR_DAT_04379528;
    puVar6 = PTR_DAT_04379520;
    lVar15 = *param_1;
    lVar14 = param_1[1];
    if (lVar14 == lVar15) {
      lVar19 = lVar18;
      lVar14 = lVar15;
    }
    else {
      lVar17 = lVar18;
      do {
        lVar19 = param_1[3];
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          FUN_008a62a4(puVar7);
          FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = lVar19;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        *(undefined8 *)(lVar17 + -0x18) = *(undefined8 *)(lVar14 + -0x18);
        lVar19 = *(long *)(lVar14 + -0x10);
        *(long *)(lVar17 + -0x10) = lVar19;
        if (lVar19 != 0) {
          piVar2 = (int *)(lVar19 + 0x50);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        puVar1 = (undefined1 *)(lVar14 + -8);
        lVar19 = lVar17 + -0x18;
        lVar14 = lVar14 + -0x18;
        *(undefined1 *)(lVar17 + -8) = *puVar1;
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar17 = lVar19;
      } while (lVar14 != lVar15);
      lVar15 = *param_1;
      lVar14 = param_1[1];
    }
    lVar17 = param_1[2];
    *param_1 = lVar19;
    param_1[1] = lVar18 + 0x18;
    param_1[2] = lVar12 + uVar16 * 0x18;
LAB_02bb254c:
    if (lVar14 != lVar15) {
      while( true ) {
        plVar10 = *(long **)(lVar14 + -0x10);
        lVar14 = lVar14 + -0x18;
        if (plVar10 == (long *)0x0) break;
        plVar3 = plVar10 + 10;
        do {
          iVar8 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != 0) break;
        (**(code **)(*plVar10 + 0x10))();
        if (lVar14 == lVar15) goto LAB_02bb258c;
      }
      goto LAB_02bb254c;
    }
LAB_02bb258c:
    if (lVar15 != 0) {
      plVar10 = (long *)param_1[3];
      uVar11 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar11 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar15,lVar17 - lVar15,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02bb2620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar15,lVar17 - lVar15,8);
      return;
    }
  }
  return;
}


