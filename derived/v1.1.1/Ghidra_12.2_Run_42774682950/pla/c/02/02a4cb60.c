/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4cb60; name: FUN_02a4cb60
 */


void FUN_02a4cb60(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  (**(code **)(*param_1 + 0x78))();
  if (*(char *)((long)param_1 + 0x1ee) != '\0') {
    FUN_02a5c678(DAT_043eeee8,param_1);
                    /* WARNING: Could not recover jumptable at 0x02a4cbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[1] + 0xa0))();
    return;
  }
  plVar1 = (long *)param_1[1];
  lVar3 = param_1[2];
  lVar2 = param_1[3];
  lVar4 = param_1[4];
  FUN_02bcbe58(auStack_58,0);
  (**(code **)*param_1)(param_1);
  uVar7 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  lVar6 = tpidr_el0;
  if ((uVar7 & 1) != 0) {
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar1,lVar3,lVar2,lVar4);
      goto LAB_02a4cc5c;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,lVar3,lVar2,lVar4);
LAB_02a4cc5c:
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


