/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a3eb0; name: FUN_016a3eb0
 */


void FUN_016a3eb0(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_042246b0;
  param_1[9] = &PTR_LAB_042246e8;
  FUN_016adb44(param_1 + 0x39);
  plVar8 = (long *)param_1[0x37];
  if (plVar8 == (long *)0x0) {
LAB_016a3f04:
    plVar8 = (long *)param_1[0x36];
    if (plVar8 == (long *)0x0) goto LAB_016a3f24;
LAB_016a3f0c:
    plVar1 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_016a3f24;
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)param_1[0x35];
    if (plVar8 != (long *)0x0) goto LAB_016a3f2c;
LAB_016a3f44:
    plVar8 = (long *)param_1[0x34];
  }
  else {
    plVar1 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_016a3f04;
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)param_1[0x36];
    if (plVar8 != (long *)0x0) goto LAB_016a3f0c;
LAB_016a3f24:
    plVar8 = (long *)param_1[0x35];
    if (plVar8 == (long *)0x0) goto LAB_016a3f44;
LAB_016a3f2c:
    plVar1 = plVar8 + 10;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 != 0) goto LAB_016a3f44;
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)param_1[0x34];
  }
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  FUN_010f77b4(param_1 + 0x27);
  lVar10 = param_1[0x20];
  if (lVar10 != 0) {
    lVar3 = param_1[0x22];
    plVar8 = (long *)param_1[0x23];
    param_1[0x21] = lVar10;
    uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar9 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar8,lVar10,lVar3 - lVar10,8);
        goto LAB_016a3ff8;
      }
    }
    (**(code **)(*plVar8 + 0x18))(plVar8,lVar10,lVar3 - lVar10,8);
  }
LAB_016a3ff8:
  FUN_016adc6c(param_1 + 0x13);
  FUN_016adf00(param_1 + 0xb);
  return;
}


