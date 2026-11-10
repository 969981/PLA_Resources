/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02926b7c; name: FUN_02926b7c
 */


void FUN_02926b7c(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04275bc8;
  param_1[9] = &PTR_LAB_04275bf8;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x76));
  FUN_00936104(param_1 + 0x70);
  FUN_00936104(param_1 + 0x6a);
  FUN_02929f48(param_1 + 0x5d);
  FUN_02929f48(param_1 + 0x50);
  FUN_0292a1c8(param_1 + 0x43);
  FUN_0292a1c8(param_1 + 0x36);
  FUN_0292a430(param_1 + 0x25);
  lVar5 = param_1[0x1a];
  if (lVar5 != 0) {
    lVar1 = param_1[0x1c];
    plVar2 = (long *)param_1[0x1d];
    param_1[0x1b] = lVar5;
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
        goto LAB_02926c70;
      }
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,8);
  }
LAB_02926c70:
  FUN_02926cf4(param_1 + 0xd);
  return;
}


