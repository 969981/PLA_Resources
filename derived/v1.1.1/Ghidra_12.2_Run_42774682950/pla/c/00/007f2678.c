/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2678; name: FUN_007f2678
 */


void FUN_007f2678(long param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x14) | 4;
  if ((param_2 & 1) == 0) {
    uVar1 = *(ushort *)(param_1 + 0x14) & 0xfffb;
  }
  *(ushort *)(param_1 + 0x14) = uVar1;
  return;
}


