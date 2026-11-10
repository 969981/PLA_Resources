/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb199c; name: FUN_02bb199c
 */


void FUN_02bb199c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar5 = param_1[1];
  if (uVar5 < (ulong)param_1[2]) {
    FUN_02bb1c70(param_1[3],uVar5,param_2,param_3,param_4,param_5);
    param_1[1] = param_1[1] + 0x20;
  }
  else {
    uVar9 = param_1[4];
    lVar13 = (long)(uVar5 - *param_1) >> 5;
    uVar5 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1;
    uVar8 = lVar7 >> 4;
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    plVar10 = param_1 + 3;
    if ((ulong)(lVar7 >> 5) < uVar9 >> 1) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar9 << 5,8);
      if (lVar7 == 0) {
        (**(code **)(*(long *)*plVar10 + 0xb8))();
      }
    }
    lVar14 = lVar7 + lVar13 * 0x20;
    FUN_02bb1c70(param_1[3],lVar14,param_2,param_3,param_4,param_5);
    lVar12 = *param_1;
    lVar11 = param_1[1];
    lVar13 = lVar14 + 0x20;
    if (lVar11 == lVar12) {
      lVar11 = lVar12;
    }
    else {
      do {
        lVar14 = lVar14 + -0x20;
        lVar11 = lVar11 + -0x20;
        FUN_02bb1d88(plVar10,lVar14,lVar11);
      } while (lVar12 != lVar11);
      lVar12 = *param_1;
      lVar11 = param_1[1];
    }
    *param_1 = lVar14;
    param_1[1] = lVar13;
    lVar13 = param_1[2];
    param_1[2] = lVar7 + uVar9 * 0x20;
    while (lVar11 != lVar12) {
      plVar6 = *(long **)(lVar11 + -0x18);
      lVar11 = lVar11 + -0x20;
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 10;
        do {
          iVar4 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
      }
    }
    if (lVar12 != 0) {
      plVar10 = (long *)*plVar10;
      uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar5 & 1) != 0) {
        lVar7 = tpidr_el0;
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar7 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar12,lVar13 - lVar12,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x02bb1b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar13 - lVar12,8);
      return;
    }
  }
  return;
}


