/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e76e60; name: FUN_02e76e60
 */


undefined8 FUN_02e76e60(short param_1,int param_2)

{
  if (param_1 == 0) {
    return 0x1f;
  }
  if (param_2 <= DAT_042a7034) {
    DAT_042a7034 = param_2;
    DAT_0440add8 = param_1;
  }
  return 1;
}


