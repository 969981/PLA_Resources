/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e0ae0; name: FUN_013e0ae0
 */


undefined8 FUN_013e0ae0(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 *param_4)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ushort uVar6;
  long lVar7;
  ushort uVar8;
  ushort uVar9;
  
  uVar2 = *param_2 & 0xffffffff;
  lVar7 = *(long *)*param_4;
  iVar5 = (int)*param_2;
  if (iVar5 < 0x3d5) {
    uVar6 = *(ushort *)(lVar7 + uVar2 * 0x58 + 0xe8);
  }
  else {
    uVar6 = 0;
  }
  if ((int)*param_1 < 0x3d5) {
    uVar8 = *(ushort *)(lVar7 + (*param_1 & 0xffffffff) * 0x58 + 0xe8);
  }
  else {
    uVar8 = 0;
  }
  if ((int)*param_3 < 0x3d5) {
    uVar9 = *(ushort *)(lVar7 + (*param_3 & 0xffffffff) * 0x58 + 0xe8);
  }
  else {
    uVar9 = 0;
  }
  if (iVar5 < 0x3d5) {
    uVar1 = *(ushort *)(lVar7 + uVar2 * 0x58 + 0xe8);
  }
  else {
    uVar1 = 0;
  }
  if (uVar6 < uVar8) {
    if (uVar9 < uVar1) {
      uVar3 = *param_1;
      uVar2 = param_1[1];
      uVar4 = *param_3;
      *(int *)(param_1 + 1) = (int)param_3[1];
      *param_1 = uVar4;
      *(int *)(param_3 + 1) = (int)uVar2;
      *param_3 = uVar3;
    }
    else {
      uVar3 = *param_1;
      uVar2 = param_1[1];
      uVar4 = *param_2;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *param_1 = uVar4;
      *(int *)(param_2 + 1) = (int)uVar2;
      *param_2 = uVar3;
      if ((int)*param_3 < 0x3d5) {
        uVar6 = *(ushort *)(*(long *)*param_4 + (*param_3 & 0xffffffff) * 0x58 + 0xe8);
      }
      else {
        uVar6 = 0;
      }
      if (((int)uVar3 < 0x3d5) &&
         (uVar6 < *(ushort *)(*(long *)*param_4 + (uVar3 & 0xffffffff) * 0x58 + 0xe8))) {
        uVar3 = *param_2;
        uVar2 = param_2[1];
        uVar4 = *param_3;
        *(int *)(param_2 + 1) = (int)param_3[1];
        *param_2 = uVar4;
        *(int *)(param_3 + 1) = (int)uVar2;
        *param_3 = uVar3;
        return 2;
      }
    }
  }
  else {
    if (uVar1 <= uVar9) {
      return 0;
    }
    uVar3 = *param_2;
    uVar2 = param_2[1];
    uVar4 = *param_3;
    *(int *)(param_2 + 1) = (int)param_3[1];
    *param_2 = uVar4;
    *(int *)(param_3 + 1) = (int)uVar2;
    *param_3 = uVar3;
    if ((int)*param_2 < 0x3d5) {
      uVar6 = *(ushort *)(*(long *)*param_4 + (*param_2 & 0xffffffff) * 0x58 + 0xe8);
    }
    else {
      uVar6 = 0;
    }
    if (((int)*param_1 < 0x3d5) &&
       (uVar6 < *(ushort *)(*(long *)*param_4 + (*param_1 & 0xffffffff) * 0x58 + 0xe8))) {
      uVar3 = *param_1;
      uVar2 = param_1[1];
      uVar4 = *param_2;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *param_1 = uVar4;
      *(int *)(param_2 + 1) = (int)uVar2;
      *param_2 = uVar3;
      return 2;
    }
  }
  return 1;
}


