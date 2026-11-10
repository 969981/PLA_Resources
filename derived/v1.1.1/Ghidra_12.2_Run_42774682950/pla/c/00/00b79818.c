/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b79818; name: FUN_00b79818
 */


void FUN_00b79818(long *param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [24];
  
  lVar5 = param_1[1];
  lVar8 = param_1[2];
  if (lVar8 != lVar5) {
    lVar3 = tpidr_el0;
    do {
      param_1[2] = lVar8 + -0x20;
      lVar6 = *(long *)(lVar8 + -0x20);
      *(undefined8 *)(lVar8 + -0x20) = 0;
      if (lVar6 != 0) {
        FUN_02bcbe58(auStack_78,0);
        FUN_00936104(lVar6);
        plVar7 = *(long **)(lVar8 + -0x18);
        uVar1 = *(undefined8 *)(lVar8 + -0x10);
        uVar9 = *(undefined8 *)(lVar8 + -8);
        uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
        if ((uVar4 & 1) == 0) {
LAB_00b799fc:
          (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,uVar1,uVar9);
        }
        else {
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_00b799fc;
          FUN_02bcc824(plVar7,lVar6,uVar1,uVar9);
        }
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar2 = *(int *)(lVar3 + 0x38d480) + -1;
        *(int *)(lVar3 + 0x38d480) = iVar2;
        if (iVar2 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar3 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar3 + 0x38d488) = 1;
            *(undefined8 *)(lVar3 + 0x38d478) = 0;
            *(undefined8 *)(lVar3 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar3 + 0x38d484) = 0;
        }
      }
      lVar8 = param_1[2];
    } while (lVar8 != lVar5);
  }
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar8 = param_1[3];
  plVar7 = *(long **)param_1[4];
  uVar4 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar4 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar7,lVar5,lVar8 - lVar5,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00b79958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar8 - lVar5,8);
  return;
}


