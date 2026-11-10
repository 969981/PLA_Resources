/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02896c44; name: FUN_02896c44
 */


void FUN_02896c44(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  plVar12 = (long *)*param_2;
  lVar6 = tpidr_el0;
  if (plVar12 != (long *)0x0) {
    plVar11 = (long *)param_2[1];
    if (plVar11 == plVar12) {
      plVar11 = plVar12;
    }
    else {
      do {
        plVar11 = plVar11 + -1;
        plVar7 = (long *)*plVar11;
        if (plVar7 != (long *)0x0) {
          lVar9 = plVar7[0xb];
          piVar1 = (int *)(lVar9 + 0xc);
          do {
            iVar5 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar5 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar5 + -1 == 0) {
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*plVar7 + 0x20))();
          }
        }
      } while (plVar11 != plVar12);
      plVar11 = (long *)*param_2;
    }
    lVar9 = param_2[2];
    plVar7 = (long *)param_2[3];
    param_2[1] = plVar12;
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar7,plVar11,lVar9 - (long)plVar11,8);
        goto LAB_02896d50;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar11,lVar9 - (long)plVar11,8);
  }
LAB_02896d50:
  plVar12 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar10 = param_1[2];
  uVar8 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar12,param_2,uVar2,uVar10);
      goto LAB_02896dc8;
    }
  }
  (**(code **)(*plVar12 + 0x18))(plVar12,param_2,uVar2,uVar10);
LAB_02896dc8:
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
  return;
}


