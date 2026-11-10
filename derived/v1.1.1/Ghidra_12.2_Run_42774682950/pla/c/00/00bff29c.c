/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bff29c; name: FUN_00bff29c
 */


void FUN_00bff29c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = param_1[0x2a];
  *param_1 = &PTR_FUN_041dc8e8;
  param_1[9] = &PTR_LAB_041dc988;
  if (lVar4 != 0) {
    lVar1 = param_1[0x2c];
    plVar5 = (long *)param_1[0x2d];
    param_1[0x2b] = lVar4;
    uVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if ((uVar3 & 1) != 0) {
      lVar2 = tpidr_el0;
      if (*(char *)(lVar2 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar2 + 0x38d488) = 1;
        *(undefined8 *)(lVar2 + 0x38d478) = 0;
        *(undefined8 *)(lVar2 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar2 + 0x38d480)) {
        FUN_02bcc824(plVar5,lVar4,lVar1 - lVar4,8);
        plVar5 = (long *)param_1[0x29];
        goto joined_r0x00bff354;
      }
    }
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,lVar1 - lVar4,8);
  }
  plVar5 = (long *)param_1[0x29];
joined_r0x00bff354:
  if ((plVar5 != (long *)0x0) && (uVar3 = FUN_02a43a5c(plVar5[0xb]), (uVar3 & 1) != 0)) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  thunk_FUN_00bbcdac(param_1);
  return;
}


