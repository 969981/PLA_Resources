/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec3a8; name: FUN_007ec3a8
 */


void FUN_007ec3a8(long param_1,long param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 | (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
    FUN_007e34ac(param_2,uVar1 >> 0x10 | uVar1 << 0x10);
    *(ushort *)(param_2 + 0x18) = *(ushort *)(param_1 + 2) >> 8 | *(ushort *)(param_1 + 2) << 8;
  }
  return;
}


