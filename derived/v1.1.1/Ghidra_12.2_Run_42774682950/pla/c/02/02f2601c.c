/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2601c; name: FUN_02f2601c
 */


int FUN_02f2601c(long param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    bVar1 = *(byte *)(lVar3 + 0x168);
    while( true ) {
      if (((bVar1 >> 3 & 1) == 0) && (*(int *)(*(long *)(lVar3 + 0x58) + 0x348) == param_2)) {
        iVar2 = iVar2 + 1;
      }
      lVar3 = *(long *)(lVar3 + 0x48);
      if (lVar3 == 0) break;
      bVar1 = *(byte *)(lVar3 + 0x168);
    }
  }
  return iVar2;
}


