/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bbf418; name: FUN_01bbf418
 */


void FUN_01bbf418(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) goto LAB_01bbf43c;
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = lVar5;
  uVar3 = (**(code **)(*plVar2 + 0xc0))(plVar2);
  if ((uVar3 & 1) == 0) {
LAB_01bbf4ec:
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,4);
  }
  else {
    lVar4 = tpidr_el0;
    if (*(char *)(lVar4 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar4 + 0x38d488) = 1;
      *(undefined8 *)(lVar4 + 0x38d478) = 0;
      *(undefined8 *)(lVar4 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar4 + 0x38d480) < 1) goto LAB_01bbf4ec;
    FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,4);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_01bbf43c:
  lVar5 = param_2[3];
  lVar1 = param_2[4];
  lVar4 = param_2[5];
  *(int *)(param_1 + 6) = (int)param_2[6];
  param_1[3] = lVar5;
  param_1[4] = lVar1;
  param_1[5] = lVar4;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}


