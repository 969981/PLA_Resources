/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016a2138; name: FUN_016a2138
 */


void FUN_016a2138(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  FUN_016a2138(param_1,*param_2);
  FUN_016a2138(param_1,param_2[1]);
  plVar3 = *(long **)(param_1 + 0x10);
  uVar2 = (**(code **)(*plVar3 + 0xc0))(plVar3);
  if ((uVar2 & 1) != 0) {
    lVar1 = tpidr_el0;
    if (*(char *)(lVar1 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar1 + 0x38d488) = 1;
      *(undefined8 *)(lVar1 + 0x38d478) = 0;
      *(undefined8 *)(lVar1 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar1 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar1 + 0x38d480)) {
      FUN_02bcc824(plVar3,param_2,0x30,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x016a21e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0x30,8);
  return;
}


