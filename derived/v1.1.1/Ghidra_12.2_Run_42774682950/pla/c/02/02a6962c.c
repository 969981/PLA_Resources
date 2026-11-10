/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6962c; name: FUN_02a6962c
 */


void FUN_02a6962c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  FUN_02a69b58();
  lVar8 = (ulong)*(byte *)(param_1 + 0x20d) + 3;
  do {
    FUN_02a49534(*(undefined8 *)(param_1 + lVar8 * 8));
    lVar8 = lVar8 + 1;
  } while (lVar8 != 6);
  plVar6 = *(long **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  plVar6 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  FUN_02a69b58(param_1);
  pcVar9 = *(code **)(param_1 + 0x188);
  if (pcVar9 != (code *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    (*pcVar9)(param_1 + 0x1a0);
  }
  lVar8 = *(long *)(param_1 + 0x140);
  if (lVar8 == 0) {
LAB_02a6975c:
    lVar8 = *(long *)(param_1 + 0x108);
    if (lVar8 == 0) goto LAB_02a697e4;
LAB_02a69764:
    plVar6 = *(long **)(param_1 + 0x120);
    *(long *)(param_1 + 0x110) = lVar8;
    lVar10 = *(long *)(param_1 + 0x118) - lVar8;
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_02a697c8:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar10,8);
      goto LAB_02a697e4;
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02a697c8;
    FUN_02bcc824(plVar6,lVar8,lVar10,8);
    lVar8 = *(long *)(param_1 + 0xd0);
  }
  else {
    plVar6 = *(long **)(param_1 + 0x158);
    *(long *)(param_1 + 0x148) = lVar8;
    lVar10 = *(long *)(param_1 + 0x150) - lVar8;
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) == 0) {
LAB_02a69740:
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar10,8);
      goto LAB_02a6975c;
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02a69740;
    FUN_02bcc824(plVar6,lVar8,lVar10,8);
    lVar8 = *(long *)(param_1 + 0x108);
    if (lVar8 != 0) goto LAB_02a69764;
LAB_02a697e4:
    lVar8 = *(long *)(param_1 + 0xd0);
  }
  if (lVar8 != 0) {
    plVar6 = *(long **)(param_1 + 0xe8);
    *(long *)(param_1 + 0xd8) = lVar8;
    lVar10 = *(long *)(param_1 + 0xe0) - lVar8;
    uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar7 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar8,lVar10,8);
        goto LAB_02a6986c;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar10,8);
  }
LAB_02a6986c:
  FUN_02a6bf6c(param_1 + 0x68);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x54));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x30));
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 == (long *)0x0) {
LAB_02a698a8:
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 == (long *)0x0) goto LAB_02a698cc;
LAB_02a698b0:
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_02a698cc;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 != (long *)0x0) goto LAB_02a698d4;
LAB_02a698f0:
    plVar6 = *(long **)(param_1 + 0x10);
  }
  else {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_02a698a8;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = *(long **)(param_1 + 0x20);
    if (plVar6 != (long *)0x0) goto LAB_02a698b0;
LAB_02a698cc:
    plVar6 = *(long **)(param_1 + 0x18);
    if (plVar6 == (long *)0x0) goto LAB_02a698f0;
LAB_02a698d4:
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 != 0) goto LAB_02a698f0;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = *(long **)(param_1 + 0x10);
  }
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
      plVar6 = *(long **)(param_1 + 8);
      goto joined_r0x02a69a34;
    }
  }
  plVar6 = *(long **)(param_1 + 8);
joined_r0x02a69a34:
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x02a69a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))();
      return;
    }
  }
  return;
}


