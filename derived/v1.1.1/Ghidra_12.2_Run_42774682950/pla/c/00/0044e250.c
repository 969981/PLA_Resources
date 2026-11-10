/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044e250; name: FUN_0044e250
 */


int FUN_0044e250(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  
  if (((*(long *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) &&
     (iVar2 = FUN_0044abd0(param_1,0), iVar2 < 0)) {
    iVar2 = -2;
  }
  else {
    if (((*(long *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) &&
       (iVar2 = FUN_0044abd0(param_2,0), iVar2 < 0)) {
      return -2;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = iVar1 - *(int *)(param_2 + 0x20);
    if ((iVar1 != 0) && (iVar2 == 0)) {
      iVar2 = memcmp(*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(long)iVar1);
      return iVar2;
    }
  }
  return iVar2;
}


