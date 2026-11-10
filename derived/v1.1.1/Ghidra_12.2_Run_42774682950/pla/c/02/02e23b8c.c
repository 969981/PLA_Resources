/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e23b8c; name: FUN_02e23b8c
 */


void FUN_02e23b8c(long param_1)

{
  if (*(char *)(param_1 + 0xc0) != '\0') {
    FUN_02e25080(param_1 + 0x18);
    if (*(void **)(param_1 + 0x38) != (void *)0x0) {
      memset(*(void **)(param_1 + 0x38),0,(ulong)*(uint *)(param_1 + 0x50));
      return;
    }
  }
  return;
}


