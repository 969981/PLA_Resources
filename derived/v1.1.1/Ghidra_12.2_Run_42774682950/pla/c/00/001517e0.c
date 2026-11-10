/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001517e0; name: FUN_001517e0
 */


void FUN_001517e0(long param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x10);
  *puVar1 = (uint)(param_2 != 0);
  puVar1[2] = 1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return;
}


