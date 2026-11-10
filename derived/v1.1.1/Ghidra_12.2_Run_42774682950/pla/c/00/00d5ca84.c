/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5ca84; name: FUN_00d5ca84
 */


undefined8 FUN_00d5ca84(long param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x6e0);
  iVar4 = 0;
  if (iVar1 < 2) {
    iVar4 = iVar1 + 1;
  }
  while( true ) {
    iVar3 = iVar4;
    if (iVar3 == iVar1) {
      return 0;
    }
    if (iVar3 == 2) {
      cVar2 = *(char *)(param_1 + 0x5f2);
    }
    else {
      if (iVar3 != 1) break;
      cVar2 = *(char *)(param_1 + 0x5f1);
    }
    if (cVar2 != '\0') break;
    iVar4 = 0;
    if (iVar3 < 2) {
      iVar4 = iVar3 + 1;
    }
  }
  FUN_00d5172c(param_1,iVar3,3);
  return 1;
}


