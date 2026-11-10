/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e32e00; name: FUN_02e32e00
 */


void FUN_02e32e00(long param_1)

{
  if (*(char *)(param_1 + 0x138) != '\0') {
    FUN_02e344fc(param_1 + 0x18);
    FUN_02e342ec(param_1 + 0x18);
    if (*(void **)(param_1 + 200) != (void *)0x0) {
      memset(*(void **)(param_1 + 200),0,(ulong)*(uint *)(param_1 + 0xe0));
    }
  }
  if (*(char *)(param_1 + 0x154) != '\0') {
    FUN_02e344fc(param_1 + 0x70);
    FUN_02e342ec(param_1 + 0x70);
    if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
      memset(*(void **)(param_1 + 0xf0),0,(ulong)*(uint *)(param_1 + 0x108));
      return;
    }
  }
  return;
}


