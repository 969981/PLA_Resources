/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112e868; name: FUN_0112e868
 */


int FUN_0112e868(long param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  
  iVar3 = 0;
  puVar4 = (uint *)(param_1 + 0x134);
  lVar5 = -0x389;
  do {
    iVar2 = FUN_0112e8d0(param_2,(int)lVar5 + 0x38a,0);
    if (iVar2 != 0) {
      iVar3 = (*puVar4 & 1) + iVar3;
    }
    bVar1 = lVar5 != -1;
    lVar5 = lVar5 + 1;
    puVar4 = puVar4 + 0x16;
  } while (bVar1);
  return iVar3;
}


