/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0124f3ec; name: FUN_0124f3ec
 */


void FUN_0124f3ec(long param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x5b8) =
       *(undefined4 *)(&UNK_03a7a354 + (long)*(int *)(param_1 + 0x5bc) * 4 + (long)param_2 * 8);
  return;
}


