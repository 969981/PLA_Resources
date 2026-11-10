/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b1cf54; name: FUN_02b1cf54
 */


void FUN_02b1cf54(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  *param_1 = (long)&PTR_FUN_04284150;
  param_1[9] = (long)&PTR_LAB_042841b0;
  param_1[10] = (long)&PTR_LAB_042841f8;
  FUN_02b1d320(param_1 + 0x55);
  lVar6 = param_1[0x4e];
  if (lVar6 != 0) {
    lVar5 = param_1[0x4f];
    if (lVar5 == lVar6) {
      lVar5 = lVar6;
    }
    else {
      do {
        lVar5 = lVar5 + -0x130;
        FUN_02b1d5d0(lVar5);
      } while (lVar6 != lVar5);
      lVar5 = param_1[0x4e];
    }
    lVar4 = param_1[0x50];
    param_1[0x4f] = lVar6;
    plVar7 = (long *)param_1[0x51];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar6 = tpidr_el0;
      if (*(char *)(lVar6 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar6 + 0x38d488) = 1;
        *(undefined8 *)(lVar6 + 0x38d478) = 0;
        *(undefined8 *)(lVar6 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar6 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar5,lVar4 - lVar5,0x10);
        goto LAB_02b1d044;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar5,lVar4 - lVar5,0x10);
  }
LAB_02b1d044:
  puVar2 = PTR_DAT_04388118;
  lVar6 = param_1[0x4a];
  param_1[0x4a] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x70);
  param_1[10] = (long)(puVar2 + 0xb8);
  if (lVar6 != 0) {
    plVar7 = (long *)param_1[0x4b];
    lVar5 = param_1[0x4c];
    lVar4 = param_1[0x4d];
    uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
    if ((uVar3 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar7,lVar6,lVar5,lVar4);
        goto LAB_02b1d0ec;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar6,lVar5,lVar4);
  }
LAB_02b1d0ec:
  FUN_0093ac1c(param_1);
  return;
}


