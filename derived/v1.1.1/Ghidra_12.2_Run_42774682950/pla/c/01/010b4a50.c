/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b4a50; name: FUN_010b4a50
 */


bool FUN_010b4a50(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    iVar1 = nn::pl::GetSharedFontLoadState(*(undefined4 *)(param_1 + 0x3c));
    return iVar1 == 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x10) + 0x1e1) != '\0';
}


