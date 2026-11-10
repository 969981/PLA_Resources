/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009af390; name: FUN_009af390
 */


void FUN_009af390(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  plVar10 = param_1 + 3;
  lVar5 = FUN_009af7a0(param_1,(param_1[1] - *param_1 >> 4) * -0x71c71c71c71c71c7 + 1);
  lVar14 = *param_1;
  lVar12 = param_1[1];
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,lVar5 * 0x90,0x10);
    if (lVar6 == 0) {
      (**(code **)(*(long *)*plVar10 + 0xb8))();
    }
  }
  lVar13 = lVar6 + (lVar12 - lVar14 >> 4) * 0x10;
  FUN_009af634(plVar10,lVar13,param_2);
  lVar12 = *param_1;
  lVar11 = param_1[1];
  lVar14 = lVar13 + 0x90;
  if (lVar11 == lVar12) {
    lVar11 = lVar12;
  }
  else {
    do {
      lVar13 = lVar13 + -0x90;
      lVar11 = lVar11 + -0x90;
      FUN_009af634(plVar10,lVar13,lVar11);
    } while (lVar12 != lVar11);
    lVar12 = *param_1;
    lVar11 = param_1[1];
  }
  *param_1 = lVar13;
  param_1[1] = lVar14;
  lVar14 = param_1[2];
  param_1[2] = lVar6 + lVar5 * 0x90;
  while (lVar11 != lVar12) {
    pcVar9 = *(code **)(lVar11 + -0x78);
    if (pcVar9 != (code *)0x0) {
      *(undefined8 *)(lVar11 + -0x70) = 0;
      *(undefined8 *)(lVar11 + -0x68) = 0;
      *(undefined8 *)(lVar11 + -0x80) = 0;
      *(undefined8 *)(lVar11 + -0x78) = 0;
      (*pcVar9)(lVar11 + -0x60);
    }
    plVar7 = *(long **)(lVar11 + -0x88);
    lVar11 = lVar11 + -0x90;
    if (plVar7 != (long *)0x0) {
      lVar5 = plVar7[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
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
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
  }
  if (lVar12 == 0) {
    return;
  }
  plVar10 = (long *)*plVar10;
  uVar8 = (**(code **)(*plVar10 + 0xc0))(plVar10);
  if ((uVar8 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar10,lVar12,lVar14 - lVar12,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x009af588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar14 - lVar12,0x10);
  return;
}


