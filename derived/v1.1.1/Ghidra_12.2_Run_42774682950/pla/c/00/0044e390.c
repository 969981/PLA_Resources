/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044e390; name: FUN_0044e390
 */


int FUN_0044e390(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(param_2 + 0x18);
  if (((*(long *)(lVar3 + 0x18) == 0) || (*(int *)(lVar3 + 8) != 0)) &&
     (iVar2 = FUN_0044abd0(lVar3,0), iVar2 < 0)) {
    iVar2 = -2;
  }
  else {
    if (((*(long *)(lVar4 + 0x18) == 0) || (*(int *)(lVar4 + 8) != 0)) &&
       (iVar2 = FUN_0044abd0(lVar4,0), iVar2 < 0)) {
      return -2;
    }
    iVar1 = *(int *)(lVar3 + 0x20);
    iVar2 = iVar1 - *(int *)(lVar4 + 0x20);
    if ((iVar1 != 0) && (iVar2 == 0)) {
      iVar2 = memcmp(*(void **)(lVar3 + 0x18),*(void **)(lVar4 + 0x18),(long)iVar1);
      return iVar2;
    }
  }
  return iVar2;
}


