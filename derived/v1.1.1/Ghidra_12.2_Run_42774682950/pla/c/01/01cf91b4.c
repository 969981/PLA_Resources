/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cf91b4; name: FUN_01cf91b4
 */


void FUN_01cf91b4(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[3];
  if (plVar4 == *(long **)(param_2 + 0x18)) goto LAB_01cf92b4;
  lVar1 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar1) {
    lVar5 = lVar1;
  }
  else {
    do {
      plVar4 = (long *)(lVar5 + -8);
      lVar5 = lVar5 + -0x20;
      if ((long *)*plVar4 != (long *)0x0) {
        (**(code **)(*(long *)*plVar4 + 0x20))();
      }
    } while (lVar1 != lVar5);
    lVar5 = *param_1;
    plVar4 = (long *)param_1[3];
  }
  lVar3 = param_1[2];
  param_1[1] = lVar1;
  uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if ((uVar2 & 1) == 0) {
LAB_01cf9290:
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar3 - lVar5,8);
  }
  else {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_01cf9290;
    FUN_02bcc824(plVar4,lVar5,lVar3 - lVar5,8);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_01cf92b4:
  lVar1 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[3] = lVar1;
  param_1[4] = lVar5;
  param_1[5] = lVar3;
  return;
}


