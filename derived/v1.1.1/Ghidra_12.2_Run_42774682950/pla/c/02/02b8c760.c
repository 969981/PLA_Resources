/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8c760; name: FUN_02b8c760
 */


void FUN_02b8c760(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_78 [24];
  
  plVar10 = (long *)*param_1;
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar4 = tpidr_el0;
  if ((long *)param_1[1] == plVar10) {
    plVar6 = plVar10;
  }
  else {
    plVar6 = (long *)param_1[1];
    do {
      plVar7 = plVar6 + -4;
      lVar8 = *plVar7;
      *plVar7 = 0;
      if (lVar8 != 0) {
        FUN_02bcbe58(auStack_78,0);
        FUN_02b912a8(lVar8);
        plVar1 = (long *)plVar6[-3];
        lVar2 = plVar6[-2];
        lVar9 = plVar6[-1];
        uVar5 = (**(code **)(*plVar1 + 0xc0))(plVar1);
        if ((uVar5 & 1) == 0) {
LAB_02b8c84c:
          (**(code **)(*plVar1 + 0x18))(plVar1,lVar8,lVar2,lVar9);
        }
        else {
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_02b8c84c;
          FUN_02bcc824(plVar1,lVar8,lVar2,lVar9);
        }
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar3 = *(int *)(lVar4 + 0x38d480) + -1;
        *(int *)(lVar4 + 0x38d480) = iVar3;
        if (iVar3 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar4 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar4 + 0x38d488) = 1;
            *(undefined8 *)(lVar4 + 0x38d478) = 0;
            *(undefined8 *)(lVar4 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar4 + 0x38d484) = 0;
        }
      }
      plVar6 = plVar7;
    } while (plVar10 != plVar7);
    plVar6 = (long *)*param_1;
  }
  lVar8 = param_1[2];
  plVar7 = (long *)param_1[3];
  param_1[1] = plVar10;
  uVar5 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar5 & 1) != 0) {
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar4 + 0x38d480)) {
      FUN_02bcc824(plVar7,plVar6,lVar8 - (long)plVar6,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02b8ca94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,lVar8 - (long)plVar6,8);
  return;
}


