/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010eb434; name: FUN_010eb434
 */


void FUN_010eb434(long param_1,uint param_2)

{
  if (param_2 < 0xb) {
    *(uint *)(param_1 + 0x68) =
         *(uint *)(param_1 + 0x68) & 0xfffc0000 |
         *(uint *)(param_1 + 0x68) & 0x3fff | (param_2 & 0xf) << 0xe;
  }
  return;
}


