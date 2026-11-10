/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008dbae0; name: FUN_008dbae0
 */


int FUN_008dbae0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar4 = FUN_008db910();
  bVar2 = *param_4 >> 0x20 == 0;
  bVar3 = (*param_4 & 0xff) == 0x1f;
  iVar5 = iVar4;
  if (((!bVar2 && !bVar3) && (int)param_4[1] != (int)param_3[1]) &&
      ((bVar2 || bVar3) || (int)param_3[1] <= (int)param_4[1])) {
    uVar6 = *param_3;
    uVar1 = param_3[1];
    uVar7 = *param_4;
    *(int *)(param_3 + 1) = (int)param_4[1];
    *param_3 = uVar7;
    *(int *)(param_4 + 1) = (int)uVar1;
    *param_4 = uVar6;
    iVar5 = iVar4 + 1;
    if (((*param_3 >> 0x20 != 0) && ((*param_3 & 0xff) != 0x1f)) &&
       ((int)param_2[1] < (int)param_3[1])) {
      uVar6 = *param_2;
      uVar1 = param_2[1];
      uVar7 = *param_3;
      *(int *)(param_2 + 1) = (int)param_3[1];
      *param_2 = uVar7;
      *(int *)(param_3 + 1) = (int)uVar1;
      *param_3 = uVar6;
      iVar5 = iVar4 + 2;
      if (((*param_2 >> 0x20 != 0) && ((*param_2 & 0xff) != 0x1f)) &&
         ((int)param_1[1] < (int)param_2[1])) {
        uVar6 = *param_1;
        uVar1 = param_1[1];
        uVar7 = *param_2;
        *(int *)(param_1 + 1) = (int)param_2[1];
        *param_1 = uVar7;
        *param_2 = uVar6;
        iVar5 = iVar4 + 3;
        *(int *)(param_2 + 1) = (int)uVar1;
      }
    }
  }
  return iVar5;
}


