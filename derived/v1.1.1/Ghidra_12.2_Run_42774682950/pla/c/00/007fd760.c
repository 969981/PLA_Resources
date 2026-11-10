/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fd760; name: FUN_007fd760
 */


void FUN_007fd760(long *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 != (void *)0x0) {
    uVar1 = *(int *)((long)param_1 + 0x1c) + (int)param_1[3];
    if (uVar1 + param_3 <= *(uint *)(param_1 + 2)) {
      memcpy((void *)(param_1[1] + (ulong)uVar1),param_2,(ulong)param_3);
      *(uint *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + param_3;
                    /* WARNING: Could not recover jumptable at 0x007fd7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))(param_1);
      return;
    }
  }
  return;
}


