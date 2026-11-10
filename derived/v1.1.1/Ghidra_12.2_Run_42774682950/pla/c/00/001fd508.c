/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd508; name: FUN_001fd508
 */


undefined4 FUN_001fd508(int param_1)

{
  if (param_1 - 5U < 4) {
    return *(undefined4 *)(&DAT_038894a0 + (long)(int)(param_1 - 5U) * 4);
  }
  return 3;
}


