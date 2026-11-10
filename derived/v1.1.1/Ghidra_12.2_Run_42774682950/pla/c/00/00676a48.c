/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00676a48; name: FUN_00676a48
 */


bool FUN_00676a48(void)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)FUN_00654504();
  bVar2 = *pbVar3;
  uVar1 = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar3 + 8);
  }
  if (uVar1 != 5) {
    return false;
  }
  pbVar4 = *(byte **)(pbVar3 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar4 = pbVar3 + 1;
  }
  return *(int *)pbVar4 == 0x74735f5f && pbVar4[4] == 0x67;
}


