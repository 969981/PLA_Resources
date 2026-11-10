/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02238f98; name: FUN_02238f98
 */


void FUN_02238f98(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_02239160(param_1 + 1,*param_1 >> 1);
    return;
  }
  FUN_02239160(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return;
}


