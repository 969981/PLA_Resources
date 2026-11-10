/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02834ec8; name: FUN_02834ec8
 */


void FUN_02834ec8(long *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  uVar8 = param_1[1];
  plVar12 = param_1 + 3;
  if (uVar8 < (ulong)param_1[2]) {
    FUN_028353d0(plVar12,uVar8,param_2);
    param_1[1] = param_1[1] + 8;
  }
  else {
    uVar11 = param_1[4];
    lVar14 = (long)(uVar8 - *param_1) >> 3;
    uVar8 = lVar14 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = param_1[2] - *param_1;
    if ((ulong)(lVar9 >> 3) < uVar11 >> 1) {
      uVar10 = lVar9 >> 2;
      uVar11 = uVar8;
      if (uVar8 <= uVar10) {
        uVar11 = uVar10;
      }
    }
    if (uVar11 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*plVar12 + 0x10))((long *)*plVar12,uVar11 << 3,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*plVar12 + 0xb8))();
      }
    }
    plVar7 = (long *)(lVar9 + lVar14 * 8);
    FUN_028353d0(plVar12,plVar7,param_2);
    puVar4 = PTR_DAT_04379528;
    plVar13 = (long *)*param_1;
    plVar16 = (long *)param_1[1];
    plVar15 = plVar7;
    if (plVar16 == plVar13) {
      plVar16 = plVar13;
    }
    else {
      do {
        lVar14 = *plVar12;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), iVar5 != 0)) {
          FUN_008a62a4(puVar4);
          FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (lVar6 != 0) {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = lVar14;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        }
        plVar16 = plVar16 + -1;
        lVar14 = *plVar16;
        plVar15 = plVar15 + -1;
        *plVar15 = lVar14;
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
        if (lVar6 != 0) {
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
      } while (plVar16 != plVar13);
      plVar13 = (long *)*param_1;
      plVar16 = (long *)param_1[1];
    }
    lVar14 = param_1[2];
    *param_1 = (long)plVar15;
    param_1[1] = (long)(plVar7 + 1);
    param_1[2] = lVar9 + uVar11 * 8;
    if (plVar16 != plVar13) {
      plVar7 = (long *)plVar16[-1];
      if (plVar7 != (long *)0x0) {
        plVar15 = plVar7 + 10;
        do {
          iVar5 = (int)*plVar15 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *(int *)plVar15 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
      if (plVar16 + -1 != plVar13) {
        plVar7 = (long *)plVar16[-2];
        if (plVar7 != (long *)0x0) {
          plVar15 = plVar7 + 10;
          do {
            iVar5 = (int)*plVar15 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar3) {
              *(int *)plVar15 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))();
          }
        }
        if (plVar16 + -2 != plVar13) {
          plVar16 = plVar16 + -3;
          plVar7 = (long *)*plVar16;
          if (plVar7 != (long *)0x0) {
            plVar15 = plVar7 + 10;
            do {
              iVar5 = (int)*plVar15 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar3) {
                *(int *)plVar15 = iVar5;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar5 == 0) goto LAB_02835100;
          }
LAB_028350d8:
          if (plVar16 != plVar13) {
            while( true ) {
              plVar16 = plVar16 + -1;
              plVar7 = (long *)*plVar16;
              if (plVar7 == (long *)0x0) break;
              plVar15 = plVar7 + 10;
              do {
                iVar5 = (int)*plVar15 + -1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar3) {
                  *(int *)plVar15 = iVar5;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar5 != 0) break;
LAB_02835100:
              (**(code **)(*plVar7 + 0x10))();
              if (plVar16 == plVar13) goto LAB_02835114;
            }
            goto LAB_028350d8;
          }
        }
      }
    }
LAB_02835114:
    if (plVar13 != (long *)0x0) {
      plVar12 = (long *)*plVar12;
      uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar8 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar12,plVar13,lVar14 - (long)plVar13,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x028351a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar13,lVar14 - (long)plVar13,8);
      return;
    }
  }
  return;
}


