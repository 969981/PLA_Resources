/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318abb4; name: FUN_0318abb4
 */


void FUN_0318abb4(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  int local_78 [2];
  int local_70 [2];
  int local_68 [2];
  long local_60;
  int *piStack_58;
  
  plVar3 = (long *)(param_1 + 0x20);
  local_68[0] = *param_2;
  lVar4 = *(long *)(*plVar3 + 0x168);
  iVar1 = *(int *)(*plVar3 + 0x170);
  piStack_58 = local_68;
  local_60 = param_1;
  FUN_0318b67c(param_1,&local_60);
  iVar5 = *(int *)(lVar4 + (long)*param_2 * 4);
  if (-1 < iVar5) {
    lVar2 = (long)iVar5;
    do {
      lVar2 = lVar2 + 1;
      local_70[0] = iVar5;
      local_60 = param_1;
      piStack_58 = local_70;
      FUN_0318b67c(param_1,&local_60);
      if (iVar1 <= lVar2) break;
      iVar5 = iVar5 + 1;
    } while (*(int *)(lVar4 + lVar2 * 4) == *param_2);
  }
  if (*(char *)(param_1 + 0x30) == '\x01') {
    lVar4 = *plVar3;
  }
  else {
    lVar4 = FUN_02898b44(plVar3);
  }
  local_78[0] = *param_2;
  FUN_0318f8d0(lVar4,local_78);
  return;
}


