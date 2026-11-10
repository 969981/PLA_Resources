/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f8ae0; name: FUN_003f8ae0
 */


long FUN_003f8ae0(char *param_1)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,"TSI_INTEGRITY_ONLY");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp(param_1,"TSI_PRIVACY_AND_INTEGRITY");
  return (ulong)(iVar1 == 0) << 1;
}


