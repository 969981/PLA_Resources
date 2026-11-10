/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e65b0c; name: FUN_02e65b0c
 */


void FUN_02e65b0c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02e6722c(*(long *)(param_1 + 8) + 0x10);
    (*DAT_0442d150)(0,*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


