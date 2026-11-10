/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e17a98; name: FUN_01e17a98
 */


void FUN_01e17a98(long *param_1,long *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long local_50;
  byte *pbStack_48;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(lVar4,0xfff0b9d8,(long)(int)param_2[1]);
    if (*param_2 != lVar4) {
      FUN_0014fe00(*param_2,lVar4,1);
    }
  }
  lVar4 = *param_2;
  FUN_001514d0(lVar4,*param_3);
  pbStack_48 = (byte *)FUN_01e17ba8();
  if ((*pbStack_48 & 1) == 0) {
    pbStack_48 = pbStack_48 + 1;
  }
  else {
    pbStack_48 = *(byte **)(pbStack_48 + 0x10);
  }
  local_50 = lVar4;
  puVar3 = (undefined8 *)FUN_01e17d90(lVar4);
  *puVar3 = param_4;
  FUN_01e17edc(&local_50);
  iVar1 = FUN_0014fef0(*param_2);
  if (iVar1 < 4) {
    iVar1 = 3;
  }
  FUN_00152d80(*param_2,2,0xffffffff,0,0);
  iVar2 = FUN_0014fef0(*param_2);
  *param_1 = *param_2;
  *(int *)(param_1 + 1) = iVar1 + -2;
  *(int *)((long)param_1 + 0xc) = (iVar2 - iVar1) + 3;
  return;
}


