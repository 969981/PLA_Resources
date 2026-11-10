/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ec9d0; name: FUN_002ec9d0
 */


int FUN_002ec9d0(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  do {
    iVar1 = tolower((uint)*(byte *)(param_1 + lVar3));
    iVar2 = tolower((uint)*(byte *)(param_2 + lVar3));
    if (((lVar3 == -2) || (iVar2 == 0)) || (iVar1 == 0)) break;
    lVar3 = lVar3 + 1;
  } while (iVar1 == iVar2);
  return iVar1 - iVar2;
}


