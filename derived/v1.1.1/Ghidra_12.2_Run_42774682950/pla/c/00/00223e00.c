/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00223e00; name: FUN_00223e00
 */


void FUN_00223e00(long param_1)

{
  do {
    *(byte *)(param_1 + 0x38) =
         *(byte *)(param_1 + 0x38) & 0x60 | ((*(byte *)(param_1 + 0x38) & 5) != 0) << 4;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_00223e00();
    }
    param_1 = *(long *)(param_1 + 0x28);
  } while (param_1 != 0);
  return;
}


