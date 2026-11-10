/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7fb0; name: FUN_003d7fb0
 */


undefined4 FUN_003d7fb0(uint param_1)

{
  if (param_1 < 0xf) {
    return *(undefined4 *)(&DAT_039fe124 + (long)(int)param_1 * 4);
  }
  return 2;
}


