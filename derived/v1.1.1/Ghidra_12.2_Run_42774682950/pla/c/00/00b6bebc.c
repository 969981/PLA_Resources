/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b6bebc; name: FUN_00b6bebc
 */


void FUN_00b6bebc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_2 + 0x360) != 0) {
    lVar1 = *(long *)(param_2 + 0x360) + 0x120;
  }
  *param_1 = lVar1;
  return;
}


