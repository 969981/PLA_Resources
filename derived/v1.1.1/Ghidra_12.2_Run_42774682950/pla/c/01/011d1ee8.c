/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d1ee8; name: FUN_011d1ee8
 */


void FUN_011d1ee8(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if (param_1[6] == 0) {
    return;
  }
  plVar5 = (long *)*param_1;
  lVar4 = param_1[6] << 3;
  uVar3 = param_1[4];
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
      FUN_02bcc824(plVar5,uVar3,lVar4,4);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x011d1f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,uVar3,lVar4,4);
  return;
}


