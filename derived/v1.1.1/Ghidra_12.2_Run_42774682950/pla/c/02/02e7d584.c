/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7d584; name: FUN_02e7d584
 */


void FUN_02e7d584(long param_1)

{
  if (*(long *)(param_1 + 0xa8) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}


