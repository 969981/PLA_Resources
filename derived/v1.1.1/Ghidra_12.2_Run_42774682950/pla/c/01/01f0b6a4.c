/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f0b6a4; name: FUN_01f0b6a4
 */


void FUN_01f0b6a4(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  plVar3 = (long *)*param_2;
  FUN_009848d0(param_2 + 3);
  plVar4 = *(long **)(param_1 + 0x38);
  uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  if ((uVar2 & 1) == 0) {
LAB_01f0b734:
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x48,8);
  }
  else {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_01f0b734;
    FUN_02bcc824(plVar4,param_2,0x48,8);
  }
  if (plVar3 == (long *)0x0) {
    return;
  }
  plVar4 = (long *)*plVar3;
  FUN_009848d0(plVar3 + 3);
  plVar5 = *(long **)(param_1 + 0x38);
  uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
  if ((uVar2 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar5,plVar3,0x48,8);
      goto joined_r0x01f0b828;
    }
  }
  (**(code **)(*plVar5 + 0x18))(plVar5,plVar3,0x48,8);
joined_r0x01f0b828:
  if (plVar4 != (long *)0x0) {
    lVar1 = tpidr_el0;
    do {
      while( true ) {
        plVar5 = (long *)*plVar4;
        FUN_009848d0(plVar4 + 3);
        plVar3 = *(long **)(param_1 + 0x38);
        uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
        if ((uVar2 & 1) != 0) break;
LAB_01f0b8b0:
        (**(code **)(*plVar3 + 0x18))(plVar3,plVar4,0x48,8);
        plVar4 = plVar5;
        if (plVar5 == (long *)0x0) {
          return;
        }
      }
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar1 + 0x38d480) < 1) goto LAB_01f0b8b0;
      FUN_02bcc824(plVar3,plVar4,0x48,8);
      plVar4 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}


