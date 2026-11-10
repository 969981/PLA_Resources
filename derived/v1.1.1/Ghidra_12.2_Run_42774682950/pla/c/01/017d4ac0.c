/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d4ac0; name: FUN_017d4ac0
 */


int FUN_017d4ac0(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0xf0);
  if (lVar4 == param_1 + 0xe8) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    lVar2 = *(long *)(lVar4 + 0x18);
    while( true ) {
      if (lVar2 != 0) {
        uVar1 = FUN_02a43a8c();
        iVar3 = iVar3 + (~uVar1 & 1);
      }
      lVar4 = *(long *)(lVar4 + 8);
      if (lVar4 == param_1 + 0xe8) break;
      lVar2 = *(long *)(lVar4 + 0x18);
    }
  }
  return iVar3;
}


