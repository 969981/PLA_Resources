/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d98848; name: FUN_02d98848
 */


void FUN_02d98848(long param_1,uint param_2)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_007f2694(*(long *)(param_1 + 0x18),param_2 & 1);
  return;
}


