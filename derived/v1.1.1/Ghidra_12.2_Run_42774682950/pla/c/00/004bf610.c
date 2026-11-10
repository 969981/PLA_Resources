/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bf610; name: FUN_004bf610
 */


int * FUN_004bf610(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_00407950(param_1);
    if (iVar1 < 1) {
      return (int *)0x0;
    }
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_00407970(param_1,iVar3);
      if (*piVar2 == param_2) {
        return piVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return (int *)0x0;
}


