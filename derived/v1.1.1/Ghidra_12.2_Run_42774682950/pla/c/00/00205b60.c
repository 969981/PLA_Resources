/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205b60; name: FUN_00205b60
 */


undefined8 FUN_00205b60(byte *param_1,long param_2)

{
  while( true ) {
    if (param_2 == 0) {
      return 1;
    }
    if (*(int *)(&DAT_039c7f20 + (ulong)*param_1 * 4) == 0) break;
    param_2 = param_2 + -1;
    param_1 = param_1 + 1;
  }
  return 0;
}


