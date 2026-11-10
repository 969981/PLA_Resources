/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4a9d4; name: FUN_02f4a9d4
 */


undefined4 FUN_02f4a9d4(long param_1)

{
  if (*(long *)(param_1 + 0x110) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x110) + 4);
}


