/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c110e4; name: FUN_01c110e4
 */


long FUN_01c110e4(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  
  uVar10 = param_1[1];
  lVar3 = *param_2;
  uVar8 = param_2[1];
  uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar11 < 2) {
    uVar8 = uVar10 - 1 & uVar8;
  }
  else if (uVar10 <= uVar8) {
    uVar13 = 0;
    if (uVar10 != 0) {
      uVar13 = uVar8 / uVar10;
    }
    uVar8 = uVar8 - uVar13 * uVar10;
  }
  plVar7 = *(long **)(*param_1 + uVar8 * 8);
  do {
    plVar12 = plVar7;
    plVar7 = (long *)*plVar12;
  } while ((long *)*plVar12 != param_2);
  if (plVar12 != param_1 + 6) {
    uVar13 = plVar12[1];
    if (uVar11 < 2) {
      uVar13 = uVar13 & uVar10 - 1;
    }
    else if (uVar10 <= uVar13) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar13 / uVar10;
      }
      uVar13 = uVar13 - uVar6 * uVar10;
    }
    if (uVar13 == uVar8) goto LAB_01c11190;
  }
  if (*param_2 != 0) {
    uVar13 = *(ulong *)(*param_2 + 8);
    if (uVar11 < 2) {
      uVar13 = uVar13 & uVar10 - 1;
    }
    else if (uVar10 <= uVar13) {
      uVar6 = 0;
      if (uVar10 != 0) {
        uVar6 = uVar13 / uVar10;
      }
      uVar13 = uVar13 - uVar6 * uVar10;
    }
    if (uVar13 == uVar8) goto LAB_01c11190;
  }
  *(undefined8 *)(*param_1 + uVar8 * 8) = 0;
LAB_01c11190:
  if (*param_2 != 0) {
    uVar13 = *(ulong *)(*param_2 + 8);
    if (uVar11 < 2) {
      uVar13 = uVar13 & uVar10 - 1;
    }
    else if (uVar10 <= uVar13) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = uVar13 / uVar10;
      }
      uVar13 = uVar13 - uVar11 * uVar10;
    }
    if (uVar13 != uVar8) {
      *(long **)(*param_1 + uVar13 * 8) = plVar12;
    }
  }
  *plVar12 = *param_2;
  *param_2 = 0;
  param_1[0xb] = param_1[0xb] + -1;
  if (param_2 != (long *)0x0) {
    plVar7 = (long *)param_2[3];
    if (plVar7 != (long *)0x0) {
      lVar9 = plVar7[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    plVar7 = (long *)param_1[7];
    uVar11 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar11 & 1) != 0) {
      lVar9 = tpidr_el0;
      if (*(char *)(lVar9 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar9 + 0x38d488) = 1;
        *(undefined8 *)(lVar9 + 0x38d478) = 0;
        *(undefined8 *)(lVar9 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar9 + 0x38d480)) {
        FUN_02bcc824(plVar7,param_2,0x20,8);
        return lVar3;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,param_2,0x20,8);
  }
  return lVar3;
}


