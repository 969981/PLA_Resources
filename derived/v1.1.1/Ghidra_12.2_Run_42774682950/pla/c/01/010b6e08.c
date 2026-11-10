/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b6e08; name: FUN_010b6e08
 */


undefined4 FUN_010b6e08(int param_1)

{
  if (param_1 - 2U < 8) {
    return *(undefined4 *)(&DAT_03888400 + (long)(int)(param_1 - 2U) * 4);
  }
  return 0;
}


