/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008db910; name: FUN_008db910
 */


undefined1 FUN_008db910(ulong *param_1,ulong *param_2,ulong *param_3)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  
  bVar5 = *param_3 >> 0x20 != 0;
  iVar2 = (int)param_2[1];
  bVar6 = (*param_3 & 0xff) != 0x1f;
  bVar1 = iVar2 < (int)param_3[1];
  bVar3 = bVar1 && (bVar5 && bVar6);
  if ((((int)param_1[1] < iVar2) && (*param_2 >> 0x20 != 0)) && ((*param_2 & 0xff) != 0x1f)) {
    if (bVar3) {
      uVar7 = *param_1;
      uVar4 = param_1[1];
      uVar8 = *param_3;
      *(int *)(param_1 + 1) = (int)param_3[1];
      *param_1 = uVar8;
      *(int *)(param_3 + 1) = (int)uVar4;
      *param_3 = uVar7;
      return true;
    }
    uVar7 = *param_1;
    uVar4 = param_1[1];
    uVar8 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *param_1 = uVar8;
    *(int *)(param_2 + 1) = (int)uVar4;
    *param_2 = uVar7;
    if (*param_3 >> 0x20 == 0) {
      return true;
    }
    if ((*param_3 & 0xff) == 0x1f) {
      return true;
    }
    if ((int)param_3[1] <= (int)param_2[1]) {
      return true;
    }
    uVar7 = *param_2;
    uVar4 = param_2[1];
    uVar8 = *param_3;
    *(int *)(param_2 + 1) = (int)param_3[1];
    *param_2 = uVar8;
    *(int *)(param_3 + 1) = (int)uVar4;
    *param_3 = uVar7;
  }
  else {
    if (!bVar1 || (!bVar5 || !bVar6)) {
      return bVar3;
    }
    uVar7 = *param_2;
    uVar4 = param_2[1];
    uVar8 = *param_3;
    *(int *)(param_2 + 1) = (int)param_3[1];
    *param_2 = uVar8;
    *(int *)(param_3 + 1) = (int)uVar4;
    *param_3 = uVar7;
    if (*param_2 >> 0x20 == 0) {
      return true;
    }
    if ((*param_2 & 0xff) == 0x1f) {
      return true;
    }
    if ((int)param_2[1] <= (int)param_1[1]) {
      return true;
    }
    uVar7 = *param_1;
    uVar4 = param_1[1];
    uVar8 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *param_1 = uVar8;
    *(int *)(param_2 + 1) = (int)uVar4;
    *param_2 = uVar7;
  }
  return 2;
}


