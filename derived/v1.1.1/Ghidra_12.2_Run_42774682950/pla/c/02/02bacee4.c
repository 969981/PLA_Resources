/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bacee4; name: FUN_02bacee4
 */


void FUN_02bacee4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if ((char)param_1[0x1c] != '\0') {
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  if ((char)param_1[0x1b] != '\0') {
    *(undefined1 *)(param_1 + 0x1b) = 0;
  }
  lVar8 = param_1[0x11];
  if (lVar8 == 0) {
LAB_02bacf9c:
    lVar8 = param_1[10];
    if (lVar8 == 0) goto LAB_02bad024;
LAB_02bacfa4:
    lVar9 = param_1[0xc];
    plVar7 = (long *)param_1[0xd];
    param_1[0xb] = lVar8;
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) == 0) {
LAB_02bad008:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar9 - lVar8,4);
      goto LAB_02bad024;
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02bad008;
    FUN_02bcc824(plVar7,lVar8,lVar9 - lVar8,4);
    plVar7 = (long *)param_1[7];
  }
  else {
    lVar9 = param_1[0x13];
    plVar7 = (long *)param_1[0x14];
    param_1[0x12] = lVar8;
    uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar6 & 1) == 0) {
LAB_02bacf80:
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar8,lVar9 - lVar8,4);
      goto LAB_02bacf9c;
    }
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02bacf80;
    FUN_02bcc824(plVar7,lVar8,lVar9 - lVar8,4);
    lVar8 = param_1[10];
    if (lVar8 != 0) goto LAB_02bacfa4;
LAB_02bad024:
    plVar7 = (long *)param_1[7];
  }
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
      lVar8 = *param_1;
      goto joined_r0x02bad140;
    }
  }
  lVar8 = *param_1;
joined_r0x02bad140:
  if (lVar8 == 0) {
    return;
  }
  lVar9 = param_1[1];
  if (lVar9 == lVar8) {
    lVar9 = lVar8;
  }
  else {
    do {
      plVar7 = *(long **)(lVar9 + -0x20);
      lVar9 = lVar9 + -0x28;
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
    } while (lVar9 != lVar8);
    lVar9 = *param_1;
  }
  param_1[1] = lVar8;
  lVar8 = param_1[2];
  plVar7 = (long *)param_1[3];
  uVar6 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar6 & 1) != 0) {
    lVar5 = tpidr_el0;
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar7,lVar9,lVar8 - lVar9,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02bad12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,lVar8 - lVar9,8);
  return;
}


