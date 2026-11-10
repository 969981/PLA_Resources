/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03390458; name: FUN_03390458
 */


void FUN_03390458(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_38;
  
  local_38 = (long)(int)param_1[1];
  FUN_033960c4(&local_38);
  lVar3 = (long)(int)param_1[2];
  iVar1 = (int)param_1[1];
  if ((int)param_1[2] < iVar1) {
    lVar4 = lVar3 << 3;
    do {
      lVar2 = *param_1;
      local_38 = (long)*(int *)(lVar2 + lVar4);
      FUN_033960c4(&local_38,param_2);
      local_38 = CONCAT44(local_38._4_4_,((int *)(lVar2 + lVar4))[1]);
      FUN_032afb80(param_2,&local_38,4);
      iVar1 = (int)param_1[1];
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar3 < iVar1);
  }
  *(int *)(param_1 + 2) = iVar1;
  return;
}


