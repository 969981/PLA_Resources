/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0149e1ac; name: FUN_0149e1ac
 */


undefined2 FUN_0149e1ac(long param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0x260)) {
    return *(undefined2 *)(param_1 + (long)(int)param_2 * 2 + 0x60);
  }
  return 0;
}


