/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef21b0; name: FUN_02ef21b0
 */


void FUN_02ef21b0(long param_1)

{
  FUN_02ef3978();
  if (*(long *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}


