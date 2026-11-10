/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03324cc0; name: FUN_03324cc0
 */


int FUN_03324cc0(long *param_1,long param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x20))();
  iVar3 = 0;
  if ((param_3 != 0) && (cVar1 != '\0')) {
    iVar3 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2 + iVar3,param_3);
      if (iVar2 < 1) {
        return iVar3;
      }
      param_3 = param_3 - iVar2;
      iVar3 = iVar2 + iVar3;
    } while (param_3 != 0);
  }
  return iVar3;
}


