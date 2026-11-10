/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ef670; name: FUN_032ef670
 */


byte * FUN_032ef670(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)FUN_032dcd08();
  if ((*pbVar2 & 1) == 0) {
    pbVar3 = *(byte **)(pbVar2 + 8);
    bVar1 = *pbVar3;
    while ((bVar1 & 1) == 0) {
      pbVar3 = *(byte **)(pbVar3 + 8);
      bVar1 = *pbVar3;
    }
  }
  else {
    pbVar3 = pbVar2;
  }
  if ((*(ulong *)(pbVar3 + 0x10) & 0x1f) != 8) {
    pbVar2 = (byte *)0x0;
  }
  return pbVar2;
}


