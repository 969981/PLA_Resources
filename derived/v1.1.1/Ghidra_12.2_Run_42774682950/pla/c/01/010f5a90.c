/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010f5a90; name: FUN_010f5a90
 */


void FUN_010f5a90(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 local_28;
  
  if (*(long *)(param_2 + 8) == 0) {
    if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar2 != 0)) {
      local_28 = FUN_00938550();
      puVar1 = PTR_DAT_0437a7d0;
      FUN_00b0fde8(PTR_DAT_0437a7d0,&local_28);
      FUN_00100250(PTR_LAB_0437a8d8,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a7c0);
    }
    plVar3 = *(long **)PTR_DAT_0437a7d0;
    *param_1 = (long)plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  else {
    plVar3 = *(long **)(*(long *)(*(long *)(param_2 + 8) + 0x270) + param_3 * 8);
    *param_1 = (long)plVar3;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x010f5adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  return;
}


