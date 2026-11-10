/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010eb4a4; name: FUN_010eb4a4
 */


void FUN_010eb4a4(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x68) & 0xffdfffff;
  if ((param_2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x68) | 0x200000;
  }
  *(uint *)(param_1 + 0x68) = uVar1;
  return;
}


