/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bb3f8; name: FUN_031bb3f8
 */


void FUN_031bb3f8(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  
  if ((*(char *)(param_2 + 7) == '\0') && (cVar1 = *(char *)(param_2 + 4), cVar1 != -1)) {
    if (*(char *)(param_2 + 6) == '\0') {
      cVar1 = -1;
    }
    iVar2 = (int)cVar1;
  }
  else {
    iVar2 = -1;
  }
  if ((*(char *)(param_3 + 7) != '\0') || (cVar1 = *(char *)(param_3 + 4), cVar1 == -1)) {
    FUN_031bb35c(param_1,param_2 + 0x10,iVar2,param_3 + 0x10,0xffffffff);
    return;
  }
  if (*(char *)(param_3 + 6) == '\0') {
    cVar1 = -1;
  }
  FUN_031bb35c(param_1,param_2 + 0x10,iVar2,param_3 + 0x10,(int)cVar1);
  return;
}


