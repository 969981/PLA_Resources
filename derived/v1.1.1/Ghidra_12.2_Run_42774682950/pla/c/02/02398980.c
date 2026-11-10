/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02398980; name: FUN_02398980
 */


void FUN_02398980(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_02398c10(param_1 + 1,*param_1 >> 1);
    return;
  }
  FUN_02398c10(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return;
}


