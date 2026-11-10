/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8aa6c; name: FUN_02b8aa6c
 */


void FUN_02b8aa6c(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  FUN_02bcbe58(auStack_90,0);
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_2 + 0x44));
  plVar12 = (long *)*param_2;
  lVar5 = tpidr_el0;
  if (plVar12 != (long *)0x0) {
    if ((long *)param_2[1] == plVar12) {
      plVar8 = plVar12;
    }
    else {
      plVar8 = (long *)param_2[1];
      do {
        plVar9 = plVar8 + -4;
        lVar10 = *plVar9;
        *plVar9 = 0;
        if (lVar10 != 0) {
          FUN_02bcbe58(auStack_78,0);
          plVar1 = (long *)plVar8[-3];
          lVar2 = plVar8[-2];
          lVar11 = plVar8[-1];
          uVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1);
          if ((uVar6 & 1) == 0) {
LAB_02b8ab68:
            (**(code **)(*plVar1 + 0x18))(plVar1,lVar10,lVar2,lVar11);
          }
          else {
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02b8ab68;
            FUN_02bcc824(plVar1,lVar10,lVar2,lVar11);
          }
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
          *(int *)(lVar5 + 0x38d480) = iVar4;
          if (iVar4 == 0) {
            FUN_02bcc320();
            if (*(char *)(lVar5 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar5 + 0x38d488) = 1;
              *(undefined8 *)(lVar5 + 0x38d478) = 0;
              *(undefined8 *)(lVar5 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
            }
            *(undefined4 *)(lVar5 + 0x38d484) = 0;
          }
        }
        plVar8 = plVar9;
      } while (plVar12 != plVar9);
      plVar8 = (long *)*param_2;
    }
    lVar10 = param_2[2];
    plVar9 = (long *)param_2[3];
    param_2[1] = plVar12;
    uVar6 = (**(code **)(*plVar9 + 0xc0))(plVar9);
    if ((uVar6 & 1) != 0) {
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar9,plVar8,lVar10 - (long)plVar8,8);
        goto LAB_02b8ad78;
      }
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,plVar8,lVar10 - (long)plVar8,8);
  }
LAB_02b8ad78:
  plVar12 = (long *)*param_1;
  uVar3 = param_1[1];
  uVar7 = param_1[2];
  uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
  if ((uVar6 & 1) != 0) {
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar5 + 0x38d480)) {
      FUN_02bcc824(plVar12,param_2,uVar3,uVar7);
      goto LAB_02b8adf0;
    }
  }
  (**(code **)(*plVar12 + 0x18))(plVar12,param_2,uVar3,uVar7);
LAB_02b8adf0:
  if (*(char *)(lVar5 + 0x38d488) == '\0') {
    *(undefined1 *)(lVar5 + 0x38d488) = 1;
    *(undefined8 *)(lVar5 + 0x38d478) = 0;
    *(undefined8 *)(lVar5 + 0x38d480) = 0;
    __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
  }
  iVar4 = *(int *)(lVar5 + 0x38d480) + -1;
  *(int *)(lVar5 + 0x38d480) = iVar4;
  if (iVar4 == 0) {
    FUN_02bcc320();
    if (*(char *)(lVar5 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar5 + 0x38d488) = 1;
      *(undefined8 *)(lVar5 + 0x38d478) = 0;
      *(undefined8 *)(lVar5 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
    }
    *(undefined4 *)(lVar5 + 0x38d484) = 0;
  }
  return;
}


