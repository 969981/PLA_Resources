/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f04e0; name: FUN_032f04e0
 */


bool FUN_032f04e0(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  
  pbVar4 = param_1;
  if ((*param_1 & 1) == 0) {
    pbVar4 = *(byte **)(param_1 + 8);
    bVar1 = *pbVar4;
    while ((bVar1 & 1) == 0) {
      pbVar4 = *(byte **)(pbVar4 + 8);
      bVar1 = *pbVar4;
    }
  }
  bVar2 = false;
  if ((param_1 != (byte *)0x0) && ((*(ulong *)(pbVar4 + 0x10) & 0x1f) == 1)) {
    iVar3 = FUN_032e2120();
    bVar2 = iVar3 != 0;
  }
  return bVar2;
}


