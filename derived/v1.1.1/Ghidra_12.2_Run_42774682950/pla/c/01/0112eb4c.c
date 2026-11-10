/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112eb4c; name: FUN_0112eb4c
 */


int FUN_0112eb4c(long param_1)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  lVar2 = 0x388;
  puVar1 = (uint *)(param_1 + 0x18c);
  while( true ) {
    iVar3 = (puVar1[-0x16] & 1) + iVar3;
    if (lVar2 == 0) break;
    iVar3 = (*puVar1 & 1) + iVar3;
    lVar2 = lVar2 + -2;
    puVar1 = puVar1 + 0x2c;
  }
  return iVar3;
}


