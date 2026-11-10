/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01777654; name: FUN_01777654
 */


void FUN_01777654(byte *param_1)

{
  if ((*param_1 & 1) == 0) {
    FUN_017778e0(param_1 + 1,*param_1 >> 1);
    return;
  }
  FUN_017778e0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  return;
}


