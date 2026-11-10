/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011f11b4; name: FUN_011f11b4
 */


void FUN_011f11b4(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(*(long *)(param_2 + 8) + 0x250);
  *(ulong *)(param_1 + 0x58) = (long)puVar1 + (ulong)*puVar1;
  puVar1 = *(uint **)(*(long *)(param_3 + 8) + 0x250);
  *(ulong *)(param_1 + 0x60) = (long)puVar1 + (ulong)*puVar1;
  return;
}


