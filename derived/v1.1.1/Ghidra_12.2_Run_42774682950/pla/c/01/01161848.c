/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01161848; name: FUN_01161848
 */


void FUN_01161848(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  
  plVar9 = param_1 + 3;
  lVar5 = FUN_01161bcc(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar12 = *param_1;
  lVar11 = param_1[1];
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*plVar9 + 0x10))((long *)*plVar9,lVar5 << 3,8);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*plVar9 + 0xb8))();
    }
  }
  lVar11 = lVar6 + (lVar11 - lVar12 >> 3) * 8;
  FUN_01161aec(plVar9,lVar11,param_2);
  plVar10 = (long *)*param_1;
  plVar13 = (long *)param_1[1];
  lVar12 = lVar11 + 8;
  if (plVar13 == plVar10) {
    plVar13 = plVar10;
  }
  else {
    lVar11 = lVar11 + -8;
    FUN_01161c1c(plVar9,lVar11,plVar13 + -1);
    if (plVar13 + -1 != plVar10) {
      do {
        lVar11 = lVar11 + -8;
        FUN_01161c1c(plVar9,lVar11,plVar13 + -2);
        plVar13 = plVar13 + -1;
      } while (plVar10 + 1 != plVar13);
    }
    plVar10 = (long *)*param_1;
    plVar13 = (long *)param_1[1];
  }
  *param_1 = lVar11;
  param_1[1] = lVar12;
  lVar12 = param_1[2];
  param_1[2] = lVar6 + lVar5 * 8;
  if (plVar13 != plVar10) {
    plVar13 = plVar13 + -1;
    plVar7 = (long *)*plVar13;
    if (plVar7 != (long *)0x0) {
      lVar11 = plVar7[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) goto LAB_01161988;
    }
LAB_0116195c:
    if (plVar13 != plVar10) {
      while( true ) {
        plVar13 = plVar13 + -1;
        plVar7 = (long *)*plVar13;
        if (plVar7 == (long *)0x0) break;
        lVar11 = plVar7[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
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
LAB_01161988:
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
        if (plVar13 == plVar10) goto LAB_011619a0;
      }
      goto LAB_0116195c;
    }
  }
LAB_011619a0:
  if (plVar10 == (long *)0x0) {
    return;
  }
  plVar9 = (long *)*plVar9;
  uVar8 = (**(code **)(*plVar9 + 0xc0))(plVar9);
  if ((uVar8 & 1) != 0) {
    lVar11 = tpidr_el0;
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar11 + 0x38d480)) {
      FUN_02bcc824(plVar9,plVar10,lVar12 - (long)plVar10,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01161a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x18))(plVar9,plVar10,lVar12 - (long)plVar10,8);
  return;
}


