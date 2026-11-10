/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205b18; name: FUN_00205b18
 */


undefined8 FUN_00205b18(byte *param_1,long param_2)

{
  if (param_2 != 0) {
    if (*param_1 == 0x3a) {
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        return 0;
      }
      param_1 = param_1 + 1;
    }
    while (*(int *)(&DAT_039c8320 + (ulong)*param_1 * 4) != 0) {
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      if (param_2 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


