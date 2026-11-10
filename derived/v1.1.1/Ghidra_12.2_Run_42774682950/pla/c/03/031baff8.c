/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031baff8; name: FUN_031baff8
 */


void FUN_031baff8(long param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_40;
  undefined8 uStack_38;
  
  fVar2 = (float)*param_2;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar4 = (float)param_2[1];
  fVar5 = (float)((ulong)param_2[1] >> 0x20);
  local_40 = CONCAT44(fVar3 + ((float)((ulong)*param_3 >> 0x20) - fVar3) * 0.5,
                      fVar2 + ((float)*param_3 - fVar2) * 0.5);
  uStack_38 = CONCAT44(fVar5 + ((float)((ulong)param_3[1] >> 0x20) - fVar5) * 0.5,
                       fVar4 + ((float)param_3[1] - fVar4) * 0.5);
  iVar1 = *(int *)(param_1 + 0x20);
  if ((param_4 != -1) && (iVar1 == 0)) {
    FUN_031bad88(&local_40,param_1 + 0x90,param_3,param_1 + 0x18,param_4);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  if ((param_4 != -1) && (iVar1 == 0)) {
    FUN_031bad88(&local_40,param_1 + 0x90,param_2,param_1 + 0x18,param_4);
  }
  return;
}


