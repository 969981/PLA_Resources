/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e08448; name: FUN_01e08448
 */


void FUN_01e08448(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  plVar10 = (long *)*param_2;
  plVar5 = (long *)param_2[3];
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0xb];
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  plVar5 = *(long **)(param_1 + 0x38);
  uVar6 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar6 & 1) == 0) {
LAB_01e084f4:
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2,0x20,8);
  }
  else {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_01e084f4;
    FUN_02bcc824(plVar5,param_2,0x20,8);
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  plVar5 = (long *)*plVar10;
  plVar7 = (long *)plVar10[3];
  if (plVar7 != (long *)0x0) {
    lVar8 = plVar7[0xb];
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
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  plVar7 = *(long **)(param_1 + 0x38);
  uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar6 & 1) != 0) {
    lVar8 = tpidr_el0;
    if (*(char *)(lVar8 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar8 + 0x38d488) = 1;
      *(undefined8 *)(lVar8 + 0x38d478) = 0;
      *(undefined8 *)(lVar8 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar8 + 0x38d480)) {
      FUN_02bcc824(plVar7,plVar10,0x20,8);
      goto joined_r0x01e08604;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,plVar10,0x20,8);
joined_r0x01e08604:
  if (plVar5 != (long *)0x0) {
    lVar8 = tpidr_el0;
    do {
      while( true ) {
        plVar7 = (long *)*plVar5;
        plVar10 = (long *)plVar5[3];
        if (plVar10 != (long *)0x0) {
          lVar9 = plVar10[0xb];
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
            (**(code **)(*plVar10 + 0x20))();
          }
        }
        plVar10 = *(long **)(param_1 + 0x38);
        uVar6 = (**(code **)(*plVar10 + 0xc0))(plVar10);
        if ((uVar6 & 1) != 0) break;
LAB_01e086a8:
        (**(code **)(*plVar10 + 0x18))(plVar10,plVar5,0x20,8);
        plVar5 = plVar7;
        if (plVar7 == (long *)0x0) {
          return;
        }
      }
      if (*(char *)(lVar8 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar8 + 0x38d488) = 1;
        *(undefined8 *)(lVar8 + 0x38d478) = 0;
        *(undefined8 *)(lVar8 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_01e086a8;
      FUN_02bcc824(plVar10,plVar5,0x20,8);
      plVar5 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return;
}


