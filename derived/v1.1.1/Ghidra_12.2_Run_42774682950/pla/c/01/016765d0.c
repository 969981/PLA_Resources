/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016765d0; name: FUN_016765d0
 */


void FUN_016765d0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  plVar9 = param_1 + 3;
  lVar5 = FUN_01676820(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar13 = *param_1;
  lVar12 = param_1[1];
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,lVar5 << 3,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*plVar9 + 0xb8))();
    }
  }
  lVar12 = lVar6 + (lVar12 - lVar13 >> 3) * 8;
  FUN_0166af20(plVar9,lVar12,param_2);
  plVar11 = (long *)*param_1;
  plVar10 = (long *)param_1[1];
  lVar13 = lVar12 + 8;
  if (plVar10 == plVar11) {
    plVar10 = plVar11;
  }
  else {
    do {
      lVar12 = lVar12 + -8;
      plVar10 = plVar10 + -1;
      FUN_0166af20(plVar9,lVar12,plVar10);
    } while (plVar11 != plVar10);
    plVar11 = (long *)*param_1;
    plVar10 = (long *)param_1[1];
  }
  *param_1 = lVar12;
  param_1[1] = lVar13;
  lVar13 = param_1[2];
  param_1[2] = lVar6 + lVar5 * 8;
  while (plVar10 != plVar11) {
    plVar10 = plVar10 + -1;
    plVar7 = (long *)*plVar10;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
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
        (**(code **)(*plVar7 + 0x10))();
      }
    }
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)*plVar9;
  uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar8 & 1) != 0) {
    lVar12 = tpidr_el0;
    if (*(char *)(lVar12 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar12 + 0x38d488) = 1;
      *(undefined8 *)(lVar12 + 0x38d478) = 0;
      *(undefined8 *)(lVar12 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar12 + 0x38d480)) {
      FUN_02bcc824(plVar9,plVar11,lVar13 - (long)plVar11,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0167677c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,plVar11,lVar13 - (long)plVar11,8);
  return;
}


