/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c4ee40; name: FUN_01c4ee40
 */


void FUN_01c4ee40(long param_1)

{
  if (*(int *)(param_1 + 0x590) == 0) {
    *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) | 8;
    *(undefined8 *)(param_1 + 0x590) = 1;
  }
  return;
}


