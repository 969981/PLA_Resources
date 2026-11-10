/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021beb40; name: FUN_021beb40
 */


void FUN_021beb40(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_021bed10(param_1 + 1,*param_1 >> 1);
    return;
  }
  FUN_021bed10(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return;
}


