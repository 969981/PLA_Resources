/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d8a58; name: FUN_008d8a58
 */


void FUN_008d8a58(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_008d8cf0(param_1 + 1,*param_1 >> 1);
    return;
  }
  FUN_008d8cf0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return;
}


