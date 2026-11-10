/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028213ac; name: FUN_028213ac
 */


void FUN_028213ac(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  
  plVar9 = (long *)param_1[4];
  lVar7 = param_2;
  if (plVar9 != param_4 && plVar9 != (long *)0x0) {
    FUN_02820d44(param_1,param_2,plVar9);
    lVar7 = param_2 + 8;
    if (plVar9 + 1 != param_4) {
      FUN_02820d44(param_1,lVar7);
      lVar7 = param_2 + 0x10;
      for (plVar5 = plVar9 + 2; plVar5 != param_4; plVar5 = plVar5 + 1) {
        FUN_02820d44(param_1,lVar7,plVar5);
        lVar7 = lVar7 + 8;
      }
    }
  }
  FUN_02820d44(param_1,lVar7,param_5);
  lVar8 = lVar7 + 8;
  if (plVar9 != (long *)0x0) {
    lVar11 = param_1[5];
    plVar5 = plVar9 + lVar11;
    if (plVar5 != param_4) {
      FUN_02820d44(param_1,lVar8,param_4);
      lVar8 = lVar7 + 0x10;
      if (param_4 + 1 != plVar5) {
        FUN_02820d44(param_1,lVar8);
        lVar8 = lVar7 + 0x18;
        for (param_4 = param_4 + 2; param_4 != plVar5; param_4 = param_4 + 1) {
          FUN_02820d44(param_1,lVar8,param_4);
          lVar8 = lVar8 + 8;
        }
      }
      lVar11 = param_1[5];
    }
    while (lVar11 != 0) {
      plVar5 = (long *)*plVar9;
      lVar11 = lVar11 + -1;
      if (plVar5 != (long *)0x0) {
        lVar7 = plVar5[0xb];
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
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      plVar9 = plVar9 + 1;
    }
    lVar7 = param_1[6];
    plVar9 = (long *)*param_1;
    uVar10 = param_1[4];
    uVar6 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar6 & 1) != 0) {
      lVar11 = tpidr_el0;
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar11 + 0x38d480)) {
        FUN_02bcc824(plVar9,uVar10,lVar7 << 3,8);
        goto LAB_028215a4;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,uVar10,lVar7 << 3,8);
  }
LAB_028215a4:
  param_1[6] = param_3;
  param_1[4] = param_2;
  param_1[5] = lVar8 - param_2 >> 3;
  return;
}


