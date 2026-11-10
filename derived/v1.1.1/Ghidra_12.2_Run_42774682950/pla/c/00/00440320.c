/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00440320; name: FUN_00440320
 */


undefined8 FUN_00440320(int *param_1)

{
  if (*param_1 == 1) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x28);
  }
  if (*param_1 == 0) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x30);
  }
  return 0;
}


