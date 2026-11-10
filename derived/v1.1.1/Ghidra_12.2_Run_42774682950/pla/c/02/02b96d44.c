/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b96d44; name: FUN_02b96d44
 */


void FUN_02b96d44(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [24];
  
  lVar6 = tpidr_el0;
  if (*(char *)((long)param_1 + 0x8a) == '\0') {
    param_1[4] = 0;
    param_1[9] = 0;
  }
  else {
    if (param_1[9] != 0) {
      (*DAT_043f0688)();
    }
    if (param_1[4] != 0) {
      (*DAT_043f0468)();
    }
    lVar9 = param_1[9];
    param_1[9] = 0;
    if (lVar9 != 0) {
      FUN_02bcbe58(auStack_58,0);
      plVar8 = (long *)param_1[10];
      uVar2 = param_1[0xb];
      uVar10 = param_1[0xc];
      uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar7 & 1) == 0) {
LAB_02b96e08:
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,uVar2,uVar10);
      }
      else {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02b96e08;
        FUN_02bcc824(plVar8,lVar9,uVar2,uVar10);
      }
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar5 = *(int *)(lVar6 + 0x38d480) + -1;
      *(int *)(lVar6 + 0x38d480) = iVar5;
      if (iVar5 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar6 + 0x38d484) = 0;
      }
    }
  }
  lVar9 = param_1[4];
  param_1[4] = 0;
  if (lVar9 != 0) {
    FUN_02bcbe58(auStack_58,0);
    plVar8 = (long *)param_1[5];
    uVar2 = param_1[6];
    uVar10 = param_1[7];
    uVar7 = (**(code **)(*plVar8 + 0xc0))(plVar8);
    if ((uVar7 & 1) == 0) {
LAB_02b96f24:
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar9,uVar2,uVar10);
    }
    else {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02b96f24;
      FUN_02bcc824(plVar8,lVar9,uVar2,uVar10);
    }
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar5 = *(int *)(lVar6 + 0x38d480) + -1;
    *(int *)(lVar6 + 0x38d480) = iVar5;
    if (iVar5 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar6 + 0x38d484) = 0;
      plVar8 = (long *)param_1[1];
      goto joined_r0x02b96f88;
    }
  }
  plVar8 = (long *)param_1[1];
joined_r0x02b96f88:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x30))(plVar8,param_1);
    plVar8 = (long *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    plVar8 = (long *)param_1[1];
    param_1[2] = 0xffffffffffffffff;
    param_1[3] = 0;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02b97074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))();
        return;
      }
    }
  }
  return;
}


