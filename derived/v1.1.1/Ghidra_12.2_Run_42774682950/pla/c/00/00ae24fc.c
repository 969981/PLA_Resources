/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ae24fc; name: FUN_00ae24fc
 */


void FUN_00ae24fc(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  
  uVar9 = param_1[4];
  lVar12 = param_1[1] - *param_1 >> 3;
  uVar6 = lVar12 + 1;
  if (0x7ffffffffffffffe < uVar9) {
    uVar9 = 0x7fffffffffffffff;
  }
  if (uVar9 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = param_1[2] - *param_1;
  uVar8 = lVar7 >> 2;
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  plVar10 = param_1 + 3;
  if ((ulong)(lVar7 >> 3) < uVar9 >> 1) {
    uVar9 = uVar6;
  }
  if (uVar9 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar9 << 3,8);
    if (lVar7 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xb8))();
    }
  }
  lVar14 = lVar7 + lVar12 * 8;
  FUN_00ae28c4(plVar10,lVar14,param_2);
  plVar11 = (long *)*param_1;
  plVar15 = (long *)param_1[1];
  lVar12 = lVar14 + 8;
  if (plVar15 == plVar11) {
    plVar15 = plVar11;
  }
  else {
    lVar13 = lVar14 + -8;
    FUN_00ae28c4(plVar10,lVar13,plVar15 + -1);
    if (plVar15 + -1 != plVar11) {
      lVar13 = lVar14 + -0x10;
      FUN_00ae28c4(plVar10,lVar13,plVar15 + -2);
      if (plVar15 + -2 != plVar11) {
        lVar13 = lVar14 + -0x18;
        FUN_00ae28c4(plVar10,lVar13,plVar15 + -3);
        if (plVar15 + -3 != plVar11) {
          lVar14 = lVar14 + -0x20;
          do {
            lVar13 = lVar14;
            FUN_00ae28c4(plVar10,lVar13,plVar15 + -4);
            plVar15 = plVar15 + -1;
            lVar14 = lVar13 + -8;
          } while (plVar11 + 3 != plVar15);
        }
      }
    }
    plVar11 = (long *)*param_1;
    lVar14 = lVar13;
    plVar15 = (long *)param_1[1];
  }
  lVar13 = param_1[2];
  param_1[2] = lVar7 + uVar9 * 8;
  *param_1 = lVar14;
  param_1[1] = lVar12;
  if (plVar15 != plVar11) {
    plVar5 = (long *)plVar15[-1];
    if (plVar5 != (long *)0x0) {
      lVar12 = plVar5[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    if (plVar15 + -1 != plVar11) {
      plVar5 = (long *)plVar15[-2];
      if (plVar5 != (long *)0x0) {
        lVar12 = plVar5[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      if (plVar15 + -2 != plVar11) {
        plVar15 = plVar15 + -3;
        plVar5 = (long *)*plVar15;
        if (plVar5 != (long *)0x0) {
          lVar12 = plVar5[0xb];
          piVar1 = (int *)(lVar12 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) goto LAB_00ae26e0;
        }
LAB_00ae26b4:
        if (plVar15 != plVar11) {
          while( true ) {
            plVar15 = plVar15 + -1;
            plVar5 = (long *)*plVar15;
            if (plVar5 == (long *)0x0) break;
            lVar12 = plVar5[0xb];
            piVar1 = (int *)(lVar12 + 0xc);
            do {
              iVar2 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar2 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar2 + -1 != 0) break;
LAB_00ae26e0:
            *(undefined8 *)(lVar12 + 0x18) = 0;
            (**(code **)(*plVar5 + 0x20))();
            if (plVar15 == plVar11) goto LAB_00ae26f8;
          }
          goto LAB_00ae26b4;
        }
      }
    }
  }
LAB_00ae26f8:
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)*plVar10;
  uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar6 & 1) != 0) {
    lVar12 = tpidr_el0;
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar12 + 0x38d480)) {
      FUN_02bcc824(plVar10,plVar11,lVar13 - (long)plVar11,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00ae278c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar11,lVar13 - (long)plVar11,8);
  return;
}


