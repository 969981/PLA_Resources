/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a9d678; name: FUN_01a9d678
 */


void FUN_01a9d678(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_1[3] == *(long *)(param_2 + 0x18)) || (param_1[2] == 0)) goto LAB_01a9d6ac;
  lVar1 = *param_1;
  plVar5 = (long *)param_1[1];
  *(undefined8 *)(*plVar5 + 8) = *(undefined8 *)(lVar1 + 8);
  **(long **)(lVar1 + 8) = *plVar5;
  param_1[2] = 0;
  if (plVar5 == param_1) goto LAB_01a9d6ac;
  plVar7 = (long *)param_1[3];
  plVar6 = (long *)plVar5[1];
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) == 0) {
LAB_01a9d774:
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar5,0x30,0x10);
  }
  else {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_01a9d774;
    FUN_02bcc824(plVar7,plVar5,0x30,0x10);
  }
  if (plVar6 == param_1) goto LAB_01a9d6ac;
  plVar7 = (long *)param_1[3];
  plVar5 = (long *)plVar6[1];
  uVar3 = (**(code **)(*plVar7 + 0xc0))(plVar7);
  if ((uVar3 & 1) == 0) {
LAB_01a9d7f8:
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar6,0x30,0x10);
  }
  else {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_01a9d7f8;
    FUN_02bcc824(plVar7,plVar6,0x30,0x10);
  }
  if (plVar5 != param_1) {
    lVar1 = tpidr_el0;
    do {
      plVar6 = (long *)param_1[3];
      plVar7 = (long *)plVar5[1];
      uVar3 = (**(code **)(*plVar6 + 0xc0))(plVar6);
      if ((uVar3 & 1) == 0) {
LAB_01a9d88c:
        (**(code **)(*plVar6 + 0x18))(plVar6,plVar5,0x30,0x10);
      }
      else {
        if (*(char *)(lVar1 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar1 + 0x38d488) = 1;
          *(undefined8 *)(lVar1 + 0x38d478) = 0;
          *(undefined8 *)(lVar1 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_01a9d88c;
        FUN_02bcc824(plVar6,plVar5,0x30,0x10);
      }
      plVar5 = plVar7;
    } while (plVar7 != param_1);
  }
LAB_01a9d6ac:
  lVar1 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  lVar4 = *(long *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = lVar1;
  param_1[4] = lVar2;
  param_1[5] = lVar4;
  return;
}


