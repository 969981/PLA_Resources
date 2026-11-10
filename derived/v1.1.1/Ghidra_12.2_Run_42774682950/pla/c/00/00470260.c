/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00470260; name: FUN_00470260
 */


undefined8 FUN_00470260(int *param_1)

{
  if (*param_1 == 1) {
    return *(undefined8 *)(*(long *)(param_1 + 2) + 0x30);
  }
  return 0;
}


