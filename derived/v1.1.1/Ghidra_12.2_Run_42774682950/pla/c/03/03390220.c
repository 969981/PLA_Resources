/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03390220; name: FUN_03390220
 */


void FUN_03390220(long *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_38;
  
  iVar2 = (int)param_1[1];
  iVar1 = (int)param_1[4];
  if (iVar1 != iVar2) {
    lVar4 = (long)iVar2 * 8 + (long)iVar1 * -8;
    puVar3 = (undefined8 *)(*param_1 + (long)iVar1 * 8);
    do {
      local_38 = *puVar3;
      FUN_0339608c(&local_38,param_2);
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 4) = iVar2;
  return;
}


