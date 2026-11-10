/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f283c; name: FUN_007f283c
 */


void FUN_007f283c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
  return;
}


