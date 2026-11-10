/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004051d0; name: FUN_004051d0
 */


undefined4 FUN_004051d0(char param_1)

{
  if ((byte)(param_1 - 0x30U) < 0x37) {
    return *(undefined4 *)(&DAT_039fedb8 + (long)(char)(param_1 - 0x30U) * 4);
  }
  return 0xffffffff;
}


