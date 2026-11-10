/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02570304; name: FUN_02570304
 */


void FUN_02570304(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  plVar3 = (long *)*param_2;
  FUN_0256719c(param_2 + 3);
  plVar4 = *(long **)(param_1 + 0x38);
  uVar2 = (**(code **)(*plVar4 + 0xc0))(plVar4);
  lVar1 = tpidr_el0;
  if ((uVar2 & 1) != 0) {
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar4,param_2,0x60,8);
      goto joined_r0x025703cc;
    }
  }
  (**(code **)(*plVar4 + 0x18))(plVar4,param_2,0x60,8);
joined_r0x025703cc:
  plVar4 = plVar3;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    plVar3 = (long *)*plVar4;
    FUN_0256719c(plVar4 + 3);
    plVar5 = *(long **)(param_1 + 0x38);
    uVar2 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar2 & 1) != 0) {
      if (*(char *)(lVar1 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar1 + 0x38d488) = 1;
        *(undefined8 *)(lVar1 + 0x38d478) = 0;
        *(undefined8 *)(lVar1 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar1 + 0x38d480)) break;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,plVar4,0x60,8);
    plVar4 = plVar3;
    if (plVar3 == (long *)0x0) {
      return;
    }
  } while( true );
  FUN_02bcc824(plVar5,plVar4,0x60,8);
  goto joined_r0x025703cc;
}


