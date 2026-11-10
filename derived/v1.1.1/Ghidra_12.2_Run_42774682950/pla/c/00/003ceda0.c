/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ceda0; name: FUN_003ceda0
 */


undefined8 FUN_003ceda0(long param_1)

{
  if (**(char **)(param_1 + 0x20) == '\0') {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x28);
}


