/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287bbf0; name: FUN_0287bbf0
 */


void FUN_0287bbf0(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  FUN_02bcbe58(auStack_58,0);
  FUN_0287c358(param_2);
  plVar1 = (long *)*param_1;
  uVar2 = param_1[1];
  uVar5 = param_1[2];
  uVar4 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  if ((uVar4 & 1) != 0) {
    lVar3 = tpidr_el0;
    if (*(char *)(lVar3 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar3 + 0x38d488) = 1;
      *(undefined8 *)(lVar3 + 0x38d478) = 0;
      *(undefined8 *)(lVar3 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar3 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar3 + 0x38d480)) {
      FUN_02bcc824(plVar1,param_2,uVar2,uVar5);
      goto LAB_0287bca0;
    }
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,param_2,uVar2,uVar5);
LAB_0287bca0:
  FUN_02bcc1dc(auStack_58);
  return;
}


