/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d3e10; name: FUN_010d3e10
 */


void FUN_010d3e10(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14) ^ *(uint *)(param_1 + 0x14) << 2;
  uVar1 = uVar1 ^ uVar1 >> 0xf;
  *(uint *)(param_1 + 0x14) = uVar1 ^ uVar1 << 0xd;
  return;
}


