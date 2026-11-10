/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033904f8; name: FUN_033904f8
 */


void FUN_033904f8(long *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long local_38;
  
  local_38 = (long)(int)param_1[1];
  FUN_033960c4(&local_38);
  lVar3 = (long)(int)param_1[4];
  iVar2 = (int)param_1[1];
  if ((int)param_1[4] < iVar2) {
    lVar4 = lVar3 * 0xc;
    do {
      piVar1 = (int *)(*param_1 + lVar4);
      local_38 = (long)*piVar1;
      FUN_033960c4(&local_38,param_2);
      local_38 = (long)piVar1[1];
      FUN_033960c4(&local_38,param_2);
      local_38 = (long)piVar1[2];
      FUN_033960c4(&local_38,param_2);
      iVar2 = (int)param_1[1];
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0xc;
    } while (lVar3 < iVar2);
  }
  *(int *)(param_1 + 4) = iVar2;
  return;
}


