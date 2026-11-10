/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba0084; name: FUN_02ba0084
 */


void FUN_02ba0084(undefined8 param_1,long param_2)

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
  long lVar13;
  undefined1 auStack_68 [24];
  
  lVar9 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  if (lVar9 == 0) {
    return;
  }
  FUN_02bcbe58(auStack_68,0);
  if (*(char *)(lVar9 + 0x150) != '\0') {
    (*DAT_043f0b38)(lVar9);
  }
  FUN_02b8b0e8(lVar9 + 0xe0);
  lVar13 = *(long *)(lVar9 + 0xa8);
  lVar6 = tpidr_el0;
  if (lVar13 != 0) {
    lVar11 = *(long *)(lVar9 + 0xb0);
    if (lVar11 == lVar13) {
      lVar11 = lVar13;
    }
    else {
      do {
        lVar12 = lVar11 + -0x20;
        plVar7 = *(long **)(lVar11 + -0x18);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x30))(plVar7,lVar12);
          plVar7 = *(long **)(lVar11 + -0x18);
          *(undefined8 *)(lVar11 + -0x20) = 0;
          *(undefined8 *)(lVar11 + -0x18) = 0;
          if (plVar7 != (long *)0x0) {
            plVar1 = plVar7 + 10;
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
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          plVar7 = *(long **)(lVar11 + -0x18);
          *(undefined8 *)(lVar11 + -0x10) = 0xffffffffffffffff;
          *(undefined8 *)(lVar11 + -8) = 0;
          if (plVar7 != (long *)0x0) {
            plVar1 = plVar7 + 10;
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
              (**(code **)(*plVar7 + 0x10))();
            }
          }
        }
        lVar11 = lVar12;
      } while (lVar12 != lVar13);
      lVar11 = *(long *)(lVar9 + 0xa8);
    }
    plVar7 = *(long **)(lVar9 + 0xc0);
    *(long *)(lVar9 + 0xb0) = lVar13;
    lVar13 = *(long *)(lVar9 + 0xb8) - lVar11;
    uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar11,lVar13,8);
        goto LAB_02ba0214;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar11,lVar13,8);
  }
LAB_02ba0214:
  plVar7 = *(long **)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar8 & 1) != 0) {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar7,lVar9,uVar2,uVar10);
      goto LAB_02ba028c;
    }
  }
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,uVar2,uVar10);
LAB_02ba028c:
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


