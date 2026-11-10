/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c8720; name: FUN_003c8720
 */


undefined8 FUN_003c8720(long *param_1,long *param_2)

{
  if (*(int *)(*param_1 + 8) == 0) {
    if ((ulong)*(uint *)(param_1 + 2) < *(ulong *)(param_1[1] + 0x28)) {
      *param_2 = *(long *)(param_1[1] + 0x20) + (ulong)*(uint *)(param_1 + 2) * 0x20;
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      return 1;
    }
  }
  return 0;
}


