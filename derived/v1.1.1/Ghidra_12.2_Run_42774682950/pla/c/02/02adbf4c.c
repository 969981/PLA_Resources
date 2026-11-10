/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02adbf4c; name: FUN_02adbf4c
 */


void FUN_02adbf4c(long *param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar9 = param_1[1];
  plVar11 = param_1 + 3;
  if ((ulong)((param_1[2] - lVar9 >> 3) * -0x71c71c71c71c71c7) < param_2) {
    lVar9 = lVar9 - *param_1 >> 3;
    uVar10 = param_1[4];
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    uVar2 = lVar9 * -0x71c71c71c71c71c7 + param_2;
    if (uVar10 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar8 = lVar7 * 0x1c71c71c71c71c72;
    if (uVar2 <= uVar8) {
      uVar2 = uVar8;
    }
    if ((ulong)(lVar7 * -0x71c71c71c71c71c7) < uVar10 >> 1) {
      uVar10 = uVar2;
    }
    if (uVar10 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar10 * 0x48,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*plVar11 + 0xb8))();
      }
    }
    lVar14 = lVar7 + lVar9 * 8;
    lVar9 = lVar14;
    do {
      FUN_02adc23c(plVar11,lVar9,param_3);
      lVar9 = lVar9 + 0x48;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
    lVar13 = *param_1;
    lVar12 = param_1[1];
    if (lVar12 == lVar13) {
      lVar12 = lVar13;
    }
    else {
      do {
        lVar14 = lVar14 + -0x48;
        lVar12 = lVar12 + -0x48;
        FUN_02adc23c(plVar11,lVar14,lVar12);
      } while (lVar13 != lVar12);
      lVar13 = *param_1;
      lVar12 = param_1[1];
    }
    *param_1 = lVar14;
    param_1[1] = lVar9;
    lVar9 = param_1[2];
    param_1[2] = lVar7 + uVar10 * 0x48;
    while (lVar12 != lVar13) {
      plVar6 = *(long **)(lVar12 + -0x10);
      lVar12 = lVar12 + -0x48;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 10;
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
      FUN_014bd284(lVar12);
    }
    if (lVar13 != 0) {
      plVar11 = (long *)*plVar11;
      uVar10 = (**(code **)(*plVar11 + 0xc0))(plVar11);
      if ((uVar10 & 1) != 0) {
        lVar7 = tpidr_el0;
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) {
          FUN_02bcc824(plVar11,lVar13,lVar9 - lVar13,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02adc158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 0x18))(plVar11,lVar13,lVar9 - lVar13,8);
      return;
    }
  }
  else {
    do {
      FUN_02adc23c(plVar11,lVar9,param_3);
      lVar9 = param_1[1] + 0x48;
      param_2 = param_2 - 1;
      param_1[1] = lVar9;
    } while (param_2 != 0);
  }
  return;
}


