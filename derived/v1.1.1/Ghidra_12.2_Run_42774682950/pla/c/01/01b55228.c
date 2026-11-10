/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b55228; name: FUN_01b55228
 */


void FUN_01b55228(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  uVar5 = param_1[1];
  plVar10 = param_1 + 3;
  if (uVar5 < (ulong)param_1[2]) {
    FUN_01b62e34(plVar10,uVar5,param_2);
    param_1[1] = param_1[1] + 8;
  }
  else {
    uVar9 = param_1[4];
    lVar13 = (long)(uVar5 - *param_1) >> 3;
    uVar5 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar7 = param_1[2] - *param_1;
    uVar8 = lVar7 >> 2;
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if ((ulong)(lVar7 >> 3) < uVar9 >> 1) {
      uVar9 = uVar5;
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
    lVar14 = lVar7 + lVar13 * 8;
    FUN_01b62e34(plVar10,lVar14,param_2);
    plVar11 = (long *)*param_1;
    plVar12 = (long *)param_1[1];
    lVar13 = lVar14 + 8;
    if (plVar12 == plVar11) {
      plVar12 = plVar11;
    }
    else {
      do {
        lVar14 = lVar14 + -8;
        plVar12 = plVar12 + -1;
        FUN_01b62f14(plVar10,lVar14,plVar12);
      } while (plVar11 != plVar12);
      plVar11 = (long *)*param_1;
      plVar12 = (long *)param_1[1];
    }
    *param_1 = lVar14;
    param_1[1] = lVar13;
    lVar13 = param_1[2];
    param_1[2] = lVar7 + uVar9 * 8;
joined_r0x01b552fc:
    if (plVar12 != plVar11) {
      while( true ) {
        plVar12 = plVar12 + -1;
        plVar6 = (long *)*plVar12;
        if (plVar6 == (long *)0x0) break;
        lVar7 = plVar6[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
        if (plVar12 == plVar11) goto LAB_01b55300;
      }
      goto joined_r0x01b552fc;
    }
LAB_01b55300:
    if (plVar11 != (long *)0x0) {
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
          FUN_02bcc824(plVar10,plVar11,lVar13 - (long)plVar11,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01b553d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar11,lVar13 - (long)plVar11,8);
      return;
    }
  }
  return;
}


