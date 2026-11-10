/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bef584; name: FUN_02bef584
 */


void FUN_02bef584(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  plVar5 = *(long **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) {
LAB_02bef5b0:
    plVar5 = *(long **)(param_1 + 0x1f8);
  }
  else {
    plVar6 = plVar5 + 2;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 != 0) goto LAB_02bef5b0;
    (**(code **)(*plVar5 + 0x18))();
    plVar5 = *(long **)(param_1 + 0x1f8);
  }
  if (plVar5 != (long *)0x0) {
    lVar10 = tpidr_el0;
    do {
      while( true ) {
        plVar11 = (long *)*plVar5;
        plVar6 = (long *)plVar5[3];
        if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
          plVar1 = plVar6 + 2;
          do {
            lVar9 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar6 + 0x18))();
          }
        }
        plVar6 = *(long **)(param_1 + 0x200);
        uVar7 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar7 & 1) != 0) break;
LAB_02bef668:
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x20,8);
        plVar5 = plVar11;
        if (plVar11 == (long *)0x0) goto LAB_02bef724;
      }
      if (*(char *)(lVar10 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar10 + 0x38d488) = 1;
        *(undefined8 *)(lVar10 + 0x38d478) = 0;
        *(undefined8 *)(lVar10 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar10 + 0x38d480) < 1) goto LAB_02bef668;
      FUN_02bcc824(plVar6,plVar5,0x20,8);
      plVar5 = plVar11;
    } while (plVar11 != (long *)0x0);
  }
LAB_02bef724:
  lVar10 = *(long *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (lVar10 == 0) {
LAB_02bef7ac:
    pcVar8 = *(code **)(param_1 + 0x158);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x1e0);
    lVar9 = *(long *)(param_1 + 0x1d8) << 3;
    uVar7 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar7 & 1) == 0) {
LAB_02bef790:
      (**(code **)(*plVar5 + 0x18))(plVar5,lVar10,lVar9,8);
      goto LAB_02bef7ac;
    }
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02bef790;
    FUN_02bcc824(plVar5,lVar10,lVar9,8);
    pcVar8 = *(code **)(param_1 + 0x158);
  }
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar8)(param_1 + 0x170);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x128));
  plVar5 = *(long **)(param_1 + 0x118);
  if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) {
LAB_02bef7f4:
    plVar5 = *(long **)(param_1 + 0x110);
  }
  else {
    plVar6 = plVar5 + 2;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 != 0) goto LAB_02bef7f4;
    (**(code **)(*plVar5 + 0x18))();
    plVar5 = *(long **)(param_1 + 0x110);
  }
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar10 = *(long *)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (lVar10 != 0) {
    FUN_02bfad10(param_1 + 0xf0);
  }
  lVar10 = *(long *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = 0;
  if (lVar10 != 0) {
    FUN_02bfa9cc(param_1 + 0xd0);
  }
  lVar10 = *(long *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  if (lVar10 != 0) {
    FUN_02bfa688(param_1 + 0xb0);
  }
  lVar10 = *(long *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  if (lVar10 != 0) {
    FUN_02bfa344(param_1 + 0x90);
  }
  lVar10 = *(long *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (lVar10 != 0) {
    FUN_02bf9fa8(param_1 + 0x70);
  }
  lVar10 = *(long *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (lVar10 != 0) {
    FUN_02bf9c0c(param_1 + 0x50);
  }
  lVar10 = *(long *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar10 != 0) {
    FUN_02bf9870(param_1 + 0x30);
  }
  plVar5 = *(long **)(param_1 + 0x20);
  if ((plVar5 == (long *)0x0) || (plVar5[1] == 0)) {
LAB_02bef8f4:
    plVar5 = *(long **)(param_1 + 0x10);
  }
  else {
    plVar6 = plVar5 + 2;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 != 0) goto LAB_02bef8f4;
    (**(code **)(*plVar5 + 0x18))();
    plVar5 = *(long **)(param_1 + 0x10);
  }
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
      plVar5 = *(long **)(param_1 + 8);
      goto joined_r0x02bef964;
    }
  }
  plVar5 = *(long **)(param_1 + 8);
joined_r0x02bef964:
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar6 = plVar5 + 2;
    do {
      lVar10 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar10 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02bef9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))();
      return;
    }
  }
  return;
}


