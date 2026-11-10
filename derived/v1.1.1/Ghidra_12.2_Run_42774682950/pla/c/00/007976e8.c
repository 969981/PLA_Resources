/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007976e8; name: FUN_007976e8
 */


long FUN_007976e8(long param_1,long param_2)

{
  int iVar1;
  
  if ((*(char **)(param_2 + 8) == PTR_s_N2nn4npln3gnp9AllocatorINS1_22De_04376eb8) ||
     (iVar1 = strcmp(*(char **)(param_2 + 8),PTR_s_N2nn4npln3gnp9AllocatorINS1_22De_04376eb8),
     iVar1 == 0)) {
    return param_1 + 0x18;
  }
  return 0;
}


