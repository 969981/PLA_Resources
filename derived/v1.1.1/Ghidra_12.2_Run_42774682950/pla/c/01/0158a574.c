/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158a574; name: FUN_0158a574
 */


undefined4 FUN_0158a574(int param_1)

{
  if (param_1 - 1U < 0x22) {
    return *(undefined4 *)(&DAT_03a7c360 + (long)(int)(param_1 - 1U) * 4);
  }
  return 0;
}


