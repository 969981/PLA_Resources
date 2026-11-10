/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f4b17c; name: FUN_01f4b17c
 */


void FUN_01f4b17c(undefined8 param_1,long *param_2,long *param_3)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_40;
  byte *pbStack_38;
  
  lVar3 = *param_2;
  if (lVar3 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(lVar3,0xfff0b9d8,(long)(int)param_2[1]);
    if (*param_2 != lVar3) {
      FUN_0014fe00(*param_2,lVar3,1);
    }
  }
  lVar4 = *param_2;
  lVar3 = *param_3;
  pbVar1 = (byte *)FUN_01f4b244();
  pbStack_38 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_38 = pbVar1 + 1;
  }
  local_40 = lVar4;
  if (lVar3 == 0) {
    FUN_00151490();
  }
  else {
    plVar2 = (long *)FUN_01f4b430(lVar4);
    *plVar2 = lVar3;
    FUN_01f4b578(&local_40);
  }
  FUN_0107ec80(param_1,param_2);
  return;
}


