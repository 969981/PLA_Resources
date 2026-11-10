/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025993f4; name: FUN_025993f4
 */


int FUN_025993f4(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  if (((iVar1 == 0) && (iVar1 = *(int *)(param_1 + 0xbc), iVar1 == 0)) &&
     (iVar1 = *(int *)(param_1 + 0xb8), iVar1 == 0)) {
    iVar1 = *(int *)(param_1 + 0xb4);
  }
  return iVar1;
}


