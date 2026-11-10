/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fe55c; name: FUN_014fe55c
 */


char FUN_014fe55c(long param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),0);
  if (iVar2 == 0) {
    cVar1 = '\0';
  }
  else {
    if (((iVar2 == *(int *)(param_1 + 0x640)) || (iVar2 == *(int *)(param_1 + 0x644))) ||
       (iVar2 == *(int *)(param_1 + 0x648))) {
      cVar1 = false;
    }
    else {
      cVar1 = iVar2 != *(int *)(param_1 + 0x64c);
    }
    iVar2 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),1);
    if (iVar2 != 0) {
      if (((iVar2 != *(int *)(param_1 + 0x640)) && (iVar2 != *(int *)(param_1 + 0x644))) &&
         ((iVar2 != *(int *)(param_1 + 0x648) && (iVar2 != *(int *)(param_1 + 0x64c))))) {
        cVar1 = cVar1 + '\x01';
      }
      iVar2 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),2);
      if (iVar2 != 0) {
        if (((iVar2 != *(int *)(param_1 + 0x640)) && (iVar2 != *(int *)(param_1 + 0x644))) &&
           ((iVar2 != *(int *)(param_1 + 0x648) && (iVar2 != *(int *)(param_1 + 0x64c))))) {
          cVar1 = cVar1 + '\x01';
        }
        iVar2 = FUN_02c6b1c0(*(undefined8 *)(*(long *)(param_1 + 0x5b8) + 0x98),3);
        if ((((iVar2 != 0) && (iVar2 != *(int *)(param_1 + 0x640))) &&
            (iVar2 != *(int *)(param_1 + 0x644))) &&
           ((iVar2 != *(int *)(param_1 + 0x648) && (iVar2 != *(int *)(param_1 + 0x64c))))) {
          cVar1 = cVar1 + '\x01';
        }
      }
    }
  }
  return cVar1;
}


