/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb0dac; name: FUN_02bb0dac
 */


void FUN_02bb0dac(long param_1,int param_2,int param_3,long *param_4)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  int local_6c;
  int aiStack_68 [2];
  
  piVar2 = *(int **)(param_1 + 0x158);
  piVar3 = *(int **)(param_1 + 0x160);
  local_6c = param_3;
  aiStack_68[0] = param_2;
  if (piVar2 != piVar3) {
    piVar16 = piVar2;
    do {
      if ((*piVar16 == param_2) && (piVar16[1] == param_3)) {
        lVar12 = *param_4;
        if (lVar12 != 0) {
          piVar2 = (int *)(lVar12 + 0x50);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        plVar9 = *(long **)(piVar16 + 2);
        *(long *)(piVar16 + 2) = lVar12;
        if (plVar9 == (long *)0x0) {
          return;
        }
        plVar1 = plVar9 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02bb0e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar9 + 0x10))();
          return;
        }
        return;
      }
      piVar16 = piVar16 + 4;
    } while (piVar3 != piVar16);
  }
  if (piVar3 < *(int **)(param_1 + 0x168)) {
    FUN_02bb2228(*(undefined8 *)(param_1 + 0x170),piVar3,aiStack_68,&local_6c,param_4);
    *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x160) + 0x10;
  }
  else {
    uVar17 = *(ulong *)(param_1 + 0x178);
    lVar12 = (long)piVar3 - (long)piVar2 >> 4;
    uVar11 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar17) {
      uVar17 = 0x7fffffffffffffff;
    }
    if (uVar17 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (long)*(int **)(param_1 + 0x168) - (long)piVar2;
    if ((ulong)(lVar14 >> 4) < uVar17 >> 1) {
      uVar15 = lVar14 >> 3;
      uVar17 = uVar11;
      if (uVar11 <= uVar15) {
        uVar17 = uVar15;
      }
    }
    if (uVar17 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(**(long **)(param_1 + 0x170) + 0x10))
                         (*(long **)(param_1 + 0x170),uVar17 << 4,8);
      if (lVar14 == 0) {
        (**(code **)(**(long **)(param_1 + 0x170) + 0xb8))();
      }
    }
    lVar12 = lVar14 + lVar12 * 0x10;
    FUN_02bb2228(*(undefined8 *)(param_1 + 0x170),lVar12,aiStack_68,&local_6c,param_4);
    puVar7 = PTR_DAT_04379528;
    puVar6 = PTR_DAT_04379520;
    lVar18 = *(long *)(param_1 + 0x158);
    lVar19 = *(long *)(param_1 + 0x160);
    lVar21 = lVar12;
    if (lVar19 == lVar18) {
      lVar19 = lVar18;
    }
    else {
      do {
        uVar20 = *(undefined8 *)(param_1 + 0x170);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          FUN_008a62a4(puVar7);
          FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
        if (lVar10 != 0) {
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = uVar20;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
        }
        *(undefined8 *)(lVar21 + -0x10) = *(undefined8 *)(lVar19 + -0x10);
        lVar13 = *(long *)(lVar19 + -8);
        *(long *)(lVar21 + -8) = lVar13;
        if (lVar13 != 0) {
          piVar2 = (int *)(lVar13 + 0x50);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = *piVar2 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar21 = lVar21 + -0x10;
        lVar19 = lVar19 + -0x10;
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
      } while (lVar19 != lVar18);
      lVar18 = *(long *)(param_1 + 0x158);
      lVar19 = *(long *)(param_1 + 0x160);
    }
    lVar10 = *(long *)(param_1 + 0x168);
    *(long *)(param_1 + 0x158) = lVar21;
    *(long *)(param_1 + 0x160) = lVar12 + 0x10;
    *(ulong *)(param_1 + 0x168) = lVar14 + uVar17 * 0x10;
LAB_02bb1040:
    if (lVar19 != lVar18) {
      while( true ) {
        plVar9 = *(long **)(lVar19 + -8);
        lVar19 = lVar19 + -0x10;
        if (plVar9 == (long *)0x0) break;
        plVar1 = plVar9 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 != 0) break;
        (**(code **)(*plVar9 + 0x10))();
        if (lVar19 == lVar18) goto LAB_02bb1080;
      }
      goto LAB_02bb1040;
    }
LAB_02bb1080:
    if (lVar18 != 0) {
      plVar9 = *(long **)(param_1 + 0x170);
      lVar10 = lVar10 - lVar18;
      uVar11 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar11 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar9,lVar18,lVar10,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02bb1118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x18))(plVar9,lVar18,lVar10,8);
      return;
    }
  }
  return;
}


