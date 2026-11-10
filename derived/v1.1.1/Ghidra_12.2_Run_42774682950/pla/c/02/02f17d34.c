/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f17d34; name: FUN_02f17d34
 */


void FUN_02f17d34(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    bVar1 = *(byte *)(lVar3 + 0x168);
    while( true ) {
      if ((((bVar1 >> 3 & 1) == 0) || ((~bVar1 & 3) == 0 || *(long *)(lVar3 + 0x20) == 0)) ||
         (lVar2 = *(long *)(*(long *)(lVar3 + 0x50) + 0x58), lVar2 == 0)) {
        lVar3 = *(long *)(lVar3 + 0x40);
      }
      else {
        FUN_02f295dc(param_1,lVar2,lVar3);
        lVar3 = *(long *)(lVar3 + 0x40);
      }
      if (lVar3 == 0) break;
      bVar1 = *(byte *)(lVar3 + 0x168);
    }
  }
  return;
}


