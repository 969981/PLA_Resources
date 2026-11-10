/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef8108; name: FUN_02ef8108
 */


bool FUN_02ef8108(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0xdc) == 0)) {
    return false;
  }
  return DAT_042ac98c < *(float *)(lVar1 + 0xc4);
}


