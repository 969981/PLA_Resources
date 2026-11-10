/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da36f0; name: FUN_00da36f0
 */


void FUN_00da36f0(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  if ((((param_2 < 0) || (iVar1 = *(int *)(param_1 + 0x78), iVar1 <= param_2)) ||
      (lVar2 = *(long *)(*(long *)(param_1 + 200) + (long)param_2 * 0x70 + 0x48), lVar2 == 0)) ||
     (*(char *)(lVar2 + 0x1e1) == '\0')) {
    return;
  }
  if (param_3 == 0) {
    FUN_00da3780(param_1,param_2);
    iVar1 = *(int *)(param_1 + 0x78);
  }
  else {
    if (param_3 == 1) goto LAB_00da374c;
    if (param_3 != 2) {
      return;
    }
  }
  param_2 = iVar1 + param_2;
LAB_00da374c:
  FUN_00da3780(param_1,param_2);
  return;
}


