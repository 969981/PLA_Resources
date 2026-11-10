/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00876a28; name: FUN_00876a28
 */


void FUN_00876a28(long param_1)

{
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    if (**(int **)(param_1 + 0x58) == 1) {
      FUN_007e5d18();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}


