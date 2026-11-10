/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018394e4; name: FUN_018394e4
 */


void FUN_018394e4(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x200) == '\0') {
    FUN_01838c14(param_1,*(uint *)(param_1 + 0x354) | param_2,0);
    return;
  }
  return;
}


