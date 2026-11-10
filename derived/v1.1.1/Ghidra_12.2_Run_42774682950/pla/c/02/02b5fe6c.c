/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5fe6c; name: FUN_02b5fe6c
 */


void FUN_02b5fe6c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_042853a0;
  param_1[9] = (long)&PTR_LAB_04285400;
  param_1[10] = (long)&PTR_LAB_04285448;
  FUN_02ae4140(param_1 + 0x56);
  lVar5 = param_1[0x4f];
  if (lVar5 != 0) {
    lVar4 = param_1[0x51];
    param_1[0x50] = lVar5;
    plVar6 = (long *)param_1[0x52];
    uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar3 & 1) != 0) {
      lVar7 = tpidr_el0;
      if (*(char *)(lVar7 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar7 + 0x38d488) = 1;
        *(undefined8 *)(lVar7 + 0x38d478) = 0;
        *(undefined8 *)(lVar7 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar7 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar5,lVar4 - lVar5,8);
        goto LAB_02b5ff30;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar4 - lVar5,8);
  }
LAB_02b5ff30:
  puVar2 = PTR_DAT_04388118;
  lVar5 = param_1[0x4a];
  param_1[0x4a] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[9] = (long)(puVar2 + 0x70);
  param_1[10] = (long)(puVar2 + 0xb8);
  if (lVar5 != 0) {
    plVar6 = (long *)param_1[0x4b];
    lVar4 = param_1[0x4c];
    lVar7 = param_1[0x4d];
    uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
    if ((uVar3 & 1) != 0) {
      lVar1 = tpidr_el0;
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) {
        FUN_02bcc824(plVar6,lVar5,lVar4,lVar7);
        goto LAB_02b5ffd8;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,lVar4,lVar7);
  }
LAB_02b5ffd8:
  FUN_0093ac1c(param_1);
  return;
}


