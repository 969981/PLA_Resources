/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0112ef8c; name: FUN_0112ef8c
 */


int FUN_0112ef8c(long param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  
  iVar4 = 0;
  uVar5 = 0xfffffffffffffc77;
  lVar6 = 0x13e;
  sVar1 = *(short *)(param_1 + 0x13e);
  while( true ) {
    if (sVar1 != 0) {
      iVar3 = FUN_0112eff0(param_1,(int)uVar5 + 0x38a);
      iVar4 = iVar3 + iVar4;
    }
    bVar2 = 0xfffffffffffffffe < uVar5;
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 0x58;
    if (bVar2) break;
    sVar1 = *(short *)(param_1 + lVar6);
  }
  return iVar4;
}


