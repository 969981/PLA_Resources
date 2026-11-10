/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00211cfc; name: FUN_00211cfc
 */


void FUN_00211cfc(long param_1,long param_2)

{
  long lVar1;
  
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + *(int *)(param_2 + 0xd0);
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    *(long *)(param_2 + 0x88) = lVar1;
    *(long *)(lVar1 + 0x80) = param_2;
  }
  *(long *)(param_1 + 0x78) = param_2;
  *(long *)(param_2 + 0x70) = param_1;
  return;
}


