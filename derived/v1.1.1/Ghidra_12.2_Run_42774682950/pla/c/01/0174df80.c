/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0174df80; name: FUN_0174df80
 */


void FUN_0174df80(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_0174e210(param_1 + 1,*param_1 >> 1);
    return;
  }
  FUN_0174e210(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return;
}


