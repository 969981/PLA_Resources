/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03390344; name: FUN_03390344
 */


void FUN_03390344(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_58;
  
  local_58 = (long)(int)param_1[1];
  FUN_033960c4(&local_58);
  lVar3 = (long)(int)param_1[2];
  iVar2 = (int)param_1[1];
  if ((int)param_1[2] < iVar2) {
    do {
      lVar7 = *param_1;
      piVar4 = (int *)(lVar7 + lVar3 * 0x18);
      local_58 = (long)*piVar4;
      FUN_033960c4(&local_58,param_2);
      piVar4 = piVar4 + 4;
      local_58 = (long)*piVar4;
      FUN_033960c4(&local_58,param_2);
      if (0 < *piVar4) {
        lVar5 = 0;
        lVar6 = 0;
        plVar1 = (long *)(lVar7 + lVar3 * 0x18 + 8);
        do {
          local_58 = *(long *)(*plVar1 + lVar5);
          FUN_033960c4(&local_58,param_2);
          local_58 = *(long *)(*plVar1 + lVar5 + 8);
          FUN_033960c4(&local_58,param_2);
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 0x10;
        } while (lVar6 < *piVar4);
      }
      iVar2 = (int)param_1[1];
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  *(int *)(param_1 + 2) = iVar2;
  return;
}


