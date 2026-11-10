/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108bb7c; name: FUN_0108bb7c
 */


void FUN_0108bb7c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_1[0x23];
  *param_1 = &PTR_FUN_041ef888;
  param_1[9] = &PTR_LAB_041ef8f8;
  param_1[10] = &PTR_LAB_041ef940;
  if (lVar5 == 0) {
LAB_0108bc34:
    lVar5 = param_1[0x1c];
  }
  else {
    lVar1 = param_1[0x25];
    plVar2 = (long *)param_1[0x26];
    param_1[0x24] = lVar5;
    uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar4 & 1) == 0) {
LAB_0108bc18:
      (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,8);
      goto LAB_0108bc34;
    }
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar3 + 0x38d480) < 1) goto LAB_0108bc18;
    FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,8);
    lVar5 = param_1[0x1c];
  }
  if (lVar5 != 0) {
    lVar1 = param_1[0x1e];
    plVar2 = (long *)param_1[0x1f];
    param_1[0x1d] = lVar5;
    uVar4 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    if ((uVar4 & 1) != 0) {
      lVar3 = tpidr_el0;
      if (*(char *)(lVar3 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar3 + 0x38d488) = 1;
        *(undefined8 *)(lVar3 + 0x38d478) = 0;
        *(undefined8 *)(lVar3 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar3 + 0x38d480)) {
        FUN_02bcc824(plVar2,lVar5,lVar1 - lVar5,8);
        goto LAB_0108bcbc;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,8);
  }
LAB_0108bcbc:
  FUN_0108877c(param_1);
  return;
}


