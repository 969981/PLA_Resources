/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00404df0; name: FUN_00404df0
 */


/* WARNING: Removing unreachable block (ram,0x00404e0c) */

byte FUN_00404df0(long param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    bVar3 = 0;
    lVar4 = 0;
  }
  else {
    bVar3 = 0;
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(param_1 + lVar4);
      pbVar2 = (byte *)(param_2 + lVar4);
      lVar4 = lVar4 + 2;
      bVar3 = bVar3 | *pbVar2 ^ *pbVar1 | pbVar2[1] ^ pbVar1[1];
    } while (param_3 - (param_3 & 1) != lVar4);
    if ((param_3 & 1) == 0) {
      return bVar3;
    }
  }
  return bVar3 | *(byte *)(param_2 + lVar4) ^ *(byte *)(param_1 + lVar4);
}


