/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0291aaa0; name: FUN_0291aaa0
 */


void FUN_0291aaa0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  lVar12 = *param_2;
  lVar6 = tpidr_el0;
  if (lVar12 != 0) {
    lVar11 = param_2[1];
    if (lVar11 == lVar12) {
      lVar11 = lVar12;
    }
    else {
      do {
        plVar7 = *(long **)(lVar11 + -8);
        lVar11 = lVar11 + -0x50;
        if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
          plVar1 = plVar7 + 2;
          do {
            lVar9 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar9 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar9 + -1 == 0) {
            (**(code **)(*plVar7 + 0x18))();
          }
        }
      } while (lVar11 != lVar12);
      lVar11 = *param_2;
    }
    lVar9 = param_2[2];
    plVar7 = (long *)param_2[3];
    param_2[1] = lVar12;
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar11,lVar9 - lVar11,0x10);
        goto LAB_0291abb0;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,lVar9 - lVar11,0x10);
  }
LAB_0291abb0:
  plVar7 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar10 = param_1[2];
  uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar7,param_2,uVar2,uVar10);
      goto LAB_0291ac28;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,param_2,uVar2,uVar10);
LAB_0291ac28:
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


