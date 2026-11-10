/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060686c; name: FUN_0060686c
 */


void FUN_0060686c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return;
  }
  FUN_006042a8(lVar1);
  FUN_002e2ea0(PTR_LAB_04373088,lVar1);
  return;
}


