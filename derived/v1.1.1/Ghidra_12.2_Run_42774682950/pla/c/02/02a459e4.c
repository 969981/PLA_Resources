/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a459e4; name: FUN_02a459e4
 */


void FUN_02a459e4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar7 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)param_1[2];
  if ((long)puVar8 - (long)puVar7 != 0) {
    uVar4 = param_1[8];
    plVar6 = (long *)((long)puVar7 + (uVar4 >> 7 & 0x1fffffffffffff8));
    lVar3 = *plVar6 + (uVar4 & 0x3ff) * 4;
    lVar1 = *(long *)((long)puVar7 + (param_1[9] + uVar4 >> 7 & 0x1fffffffffffff8)) +
            (param_1[9] + uVar4 & 0x3ff) * 4;
    while (lVar1 != lVar3) {
      while (lVar3 = lVar3 + 4, lVar3 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        lVar3 = *plVar6;
        if (lVar1 == lVar3) goto LAB_02a45a7c;
      }
    }
  }
LAB_02a45a7c:
  uVar4 = (long)puVar8 - (long)puVar7 >> 3;
  param_1[9] = 0;
  if (2 < uVar4) {
    lVar3 = tpidr_el0;
    do {
      plVar6 = (long *)param_1[10];
      uVar5 = *puVar7;
      uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar4 & 1) == 0) {
LAB_02a45b04:
        (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,4);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02a45b04;
        FUN_02bcc824(plVar6,uVar5,0x1000,4);
      }
      puVar8 = (undefined8 *)param_1[2];
      puVar7 = (undefined8 *)(param_1[1] + 8);
      uVar4 = (long)puVar8 - (long)puVar7 >> 3;
      param_1[1] = (long)puVar7;
    } while (2 < uVar4);
  }
  if (uVar4 == 1) {
    lVar3 = 0x200;
  }
  else {
    if (uVar4 != 2) goto LAB_02a45bbc;
    lVar3 = 0x400;
  }
  param_1[8] = lVar3;
LAB_02a45bbc:
  if (puVar7 != puVar8) {
    lVar3 = tpidr_el0;
    do {
      plVar6 = (long *)param_1[10];
      uVar5 = *puVar7;
      uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar4 & 1) == 0) {
LAB_02a45c3c:
        (**(code **)(*plVar6 + 0x18))(plVar6,uVar5,0x1000,4);
      }
      else {
        if (*(char *)(lVar3 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar3 + 0x38d488) = 1;
          *(undefined8 *)(lVar3 + 0x38d478) = 0;
          *(undefined8 *)(lVar3 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_02a45c3c;
        FUN_02bcc824(plVar6,uVar5,0x1000,4);
      }
      puVar7 = puVar7 + 1;
    } while (puVar8 != puVar7);
    lVar3 = param_1[2] - param_1[1];
    if (lVar3 != 0) {
      param_1[2] = param_1[2] + (lVar3 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    return;
  }
  lVar1 = param_1[3];
  plVar6 = (long *)param_1[4];
  uVar4 = (**(code **)(*plVar6 + 0xc0))(plVar6);
  if ((uVar4 & 1) != 0) {
    lVar2 = tpidr_el0;
    if (*(char *)(lVar2 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar2 + 0x38d488) = 1;
      *(undefined8 *)(lVar2 + 0x38d478) = 0;
      *(undefined8 *)(lVar2 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar2 + 0x38d480)) {
      FUN_02bcc824(plVar6,lVar3,lVar1 - lVar3,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x02a45d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,lVar3,lVar1 - lVar3,4);
  return;
}


