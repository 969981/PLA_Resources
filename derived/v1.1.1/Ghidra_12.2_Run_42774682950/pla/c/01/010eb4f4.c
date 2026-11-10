/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010eb4f4; name: FUN_010eb4f4
 */


void FUN_010eb4f4(long param_1,uint param_2)

{
  if (param_2 < 5) {
    *(uint *)(param_1 + 0x68) =
         *(uint *)(param_1 + 0x68) & 0xf8000000 |
         *(uint *)(param_1 + 0x68) & 0xffffff | (param_2 & 7) << 0x18;
  }
  return;
}


