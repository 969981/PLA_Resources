/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fd638; name: FUN_007fd638
 */


undefined8 FUN_007fd638(long *param_1,long *param_2)

{
  uint uVar1;
  int local_28 [5];
  int local_14;
  
  local_14 = 0;
  uVar1 = *(int *)((long)param_1 + 0x1c) + (int)param_1[3];
  (**(code **)(*param_2 + 0x10))
            (local_28,param_2,param_1[1] + (ulong)uVar1,&local_14,(int)param_1[2] - uVar1);
  if (local_28[0] == 0) {
    *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + local_14;
    (**(code **)(*param_1 + 0x10))(param_1);
    return 1;
  }
  return 0;
}


