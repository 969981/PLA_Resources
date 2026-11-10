/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ac1ec; name: FUN_031ac1ec
 */


byte FUN_031ac1ec(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = FUN_031acbdc((long *)(param_1 + 0x18));
  if ((lVar2 == 0) ||
     (uVar3 = (ulong)*(uint *)(lVar2 + 4) | (lVar2 - *(long *)(param_1 + 0x28)) * 0x20000000,
     (int)uVar3 < 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + ((long)(uVar3 << 0x20) >> 0x1d) + 4) >> 1 & 1;
  }
  return bVar1;
}


