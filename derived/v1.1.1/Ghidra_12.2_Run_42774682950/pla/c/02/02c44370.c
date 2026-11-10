/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c44370; name: FUN_02c44370
 */


undefined8 FUN_02c44370(long param_1,uint param_2)

{
  if (((param_2 < *(uint *)(param_1 + 0x278)) &&
      (*(char *)(*(long *)(param_1 + 600) + (ulong)param_2 * 0x48 + 8) != '\0')) &&
     (*(char *)(*(long *)(param_1 + 600) + (ulong)param_2 * 0x48 + 0xb) != '\0')) {
    return 1;
  }
  return 0;
}


