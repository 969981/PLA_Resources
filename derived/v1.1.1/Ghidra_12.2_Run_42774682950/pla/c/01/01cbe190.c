/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cbe190; name: FUN_01cbe190
 */


void FUN_01cbe190(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  plVar10 = param_1 + 3;
  lVar5 = FUN_01cbe4d4(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar13 = *param_1;
  lVar9 = param_1[1];
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,lVar5 << 3,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xb8))();
    }
  }
  lVar9 = lVar6 + (lVar9 - lVar13 >> 3) * 8;
  FUN_01cbe3f4(plVar10,lVar9,param_2);
  plVar11 = (long *)*param_1;
  plVar12 = (long *)param_1[1];
  lVar13 = lVar9 + 8;
  if (plVar12 == plVar11) {
    plVar12 = plVar11;
  }
  else {
    do {
      lVar9 = lVar9 + -8;
      plVar12 = plVar12 + -1;
      FUN_01cbde00(plVar10,lVar9,plVar12);
    } while (plVar11 != plVar12);
    plVar11 = (long *)*param_1;
    plVar12 = (long *)param_1[1];
  }
  *param_1 = lVar9;
  param_1[1] = lVar13;
  lVar13 = param_1[2];
  param_1[2] = lVar6 + lVar5 * 8;
  while (plVar12 != plVar11) {
    plVar12 = plVar12 + -1;
    plVar8 = (long *)*plVar12;
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)*plVar10;
  uVar7 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar7 & 1) != 0) {
    lVar9 = tpidr_el0;
    if (*(char *)(lVar9 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar9 + 0x38d488) = 1;
      *(undefined8 *)(lVar9 + 0x38d478) = 0;
      *(undefined8 *)(lVar9 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar9 + 0x38d480)) {
      FUN_02bcc824(plVar10,plVar11,lVar13 - (long)plVar11,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01cbe314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,plVar11,lVar13 - (long)plVar11,8);
  return;
}


