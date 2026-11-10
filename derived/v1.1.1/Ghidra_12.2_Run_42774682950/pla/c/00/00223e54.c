/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00223e54; name: FUN_00223e54
 */


void FUN_00223e54(long param_1,uint param_2)

{
  do {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & ~param_2;
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_00223e54(*(long *)(param_1 + 0x20),param_2);
    }
    param_1 = *(long *)(param_1 + 0x28);
  } while (param_1 != 0);
  return;
}


