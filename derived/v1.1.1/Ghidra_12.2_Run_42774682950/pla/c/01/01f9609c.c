/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f9609c; name: FUN_01f9609c
 */


void FUN_01f9609c(long *param_1,undefined8 param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  
  uVar8 = param_1[1];
  plVar15 = param_1 + 3;
  if (uVar8 < (ulong)param_1[2]) {
    FUN_01f975bc(plVar15,uVar8,param_2);
    param_1[1] = param_1[1] + 0x50;
  }
  else {
    uVar14 = param_1[4];
    lVar13 = (long)(uVar8 - *param_1) >> 4;
    if (0x7ffffffffffffffe < uVar14) {
      uVar14 = 0x7fffffffffffffff;
    }
    uVar8 = lVar13 * -0x3333333333333333 + 1;
    if (uVar14 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_1[2] - *param_1 >> 4;
    uVar11 = lVar9 * -0x6666666666666666;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if ((ulong)(lVar9 * -0x3333333333333333) < uVar14 >> 1) {
      uVar14 = uVar8;
    }
    if (uVar14 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*plVar15 + 0x10))((long *)*plVar15,uVar14 * 0x50,0x10);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*plVar15 + 0xb8))();
      }
    }
    plVar18 = (long *)(lVar9 + lVar13 * 0x10);
    FUN_01f975bc(plVar15,plVar18,param_2);
    plVar16 = (long *)*param_1;
    if ((long *)param_1[1] == plVar16) {
      plVar10 = plVar18;
      plVar17 = plVar16;
    }
    else {
      plVar17 = plVar18;
      plVar19 = (long *)param_1[1];
      do {
        lVar13 = *plVar15;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = lVar13;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        plVar12 = plVar19 + -10;
        lVar13 = *plVar12;
        plVar10 = plVar17 + -10;
        *plVar10 = lVar13;
        if (lVar13 != 0) {
          piVar1 = (int *)(lVar13 + 0x50);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar13 = plVar19[-9];
        lVar2 = plVar19[-8];
        lVar3 = plVar19[-6];
        plVar17[-7] = plVar19[-7];
        plVar17[-6] = lVar3;
        plVar17[-9] = lVar13;
        plVar17[-8] = lVar2;
        lVar13 = plVar19[-5];
        lVar2 = plVar19[-4];
        lVar3 = plVar19[-2];
        plVar17[-3] = plVar19[-3];
        plVar17[-2] = lVar3;
        plVar17[-5] = lVar13;
        plVar17[-4] = lVar2;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        plVar17 = plVar10;
        plVar19 = plVar12;
      } while (plVar12 != plVar16);
      plVar16 = (long *)*param_1;
      plVar17 = (long *)param_1[1];
    }
    lVar13 = param_1[2];
    *param_1 = (long)plVar10;
    param_1[1] = (long)(plVar18 + 10);
    param_1[2] = lVar9 + uVar14 * 0x50;
    if (plVar17 != plVar16) {
      plVar17 = plVar17 + -10;
      plVar18 = (long *)*plVar17;
      if (plVar18 != (long *)0x0) {
        plVar10 = plVar18 + 10;
        do {
          iVar6 = (int)*plVar10 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar5) {
            *(int *)plVar10 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) goto LAB_01f96288;
      }
LAB_01f96260:
      if (plVar17 != plVar16) {
        while( true ) {
          plVar17 = plVar17 + -10;
          plVar18 = (long *)*plVar17;
          if (plVar18 == (long *)0x0) break;
          plVar10 = plVar18 + 10;
          do {
            iVar6 = (int)*plVar10 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar5) {
              *(int *)plVar10 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 != 0) break;
LAB_01f96288:
          (**(code **)(*plVar18 + 0x10))();
          if (plVar17 == plVar16) goto LAB_01f9629c;
        }
        goto LAB_01f96260;
      }
    }
LAB_01f9629c:
    if (plVar16 != (long *)0x0) {
      plVar15 = (long *)*plVar15;
      uVar8 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar8 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar15,plVar16,lVar13 - (long)plVar16,0x10);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01f96330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar16,lVar13 - (long)plVar16,0x10);
      return;
    }
  }
  return;
}


