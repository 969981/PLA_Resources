/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba058c; name: FUN_02ba058c
 */


void FUN_02ba058c(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar5 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != lVar5) {
    lVar2 = tpidr_el0;
    do {
      param_1[2] = lVar4 + -0x20;
      lVar7 = *(long *)(lVar4 + -0x20);
      *(undefined8 *)(lVar4 + -0x20) = 0;
      if (lVar7 != 0) {
        plVar6 = *(long **)(lVar4 + -0x18);
        uVar1 = *(undefined8 *)(lVar4 + -0x10);
        uVar8 = *(undefined8 *)(lVar4 + -8);
        uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if ((uVar3 & 1) != 0) {
          if (*(char *)(lVar2 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar2 + 0x38d488) = 1;
            *(undefined8 *)(lVar2 + 0x38d478) = 0;
            *(undefined8 *)(lVar2 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar2 + 0x38d480)) {
            FUN_02bcc824(plVar6,lVar7,uVar1,uVar8);
            goto LAB_02ba05f4;
          }
        }
        (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,uVar1,uVar8);
      }
LAB_02ba05f4:
      lVar4 = param_1[2];
    } while (lVar4 != lVar5);
  }
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar4 = param_1[3];
  plVar6 = *(long **)param_1[4];
  uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar3 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar5,lVar4 - lVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02ba0768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar4 - lVar5,8);
  return;
}


