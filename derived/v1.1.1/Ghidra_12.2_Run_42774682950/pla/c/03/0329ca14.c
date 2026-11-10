/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329ca14; name: FUN_0329ca14
 */


undefined8 FUN_0329ca14(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  
  if (1 < (int)*(uint *)(param_1 + 0x100)) {
    lVar3 = (ulong)*(uint *)(param_1 + 0x100) - 1;
    pbVar4 = (byte *)(param_1 + 0xb);
    bVar2 = *(byte *)(param_1 + 2);
    do {
      bVar1 = pbVar4[-1];
      if ((bVar1 < bVar2) || ((bVar1 <= bVar2 && (*pbVar4 <= pbVar4[-8])))) {
        return 0;
      }
      lVar3 = lVar3 + -1;
      pbVar4 = pbVar4 + 8;
      bVar2 = bVar1;
    } while (lVar3 != 0);
  }
  return 1;
}


