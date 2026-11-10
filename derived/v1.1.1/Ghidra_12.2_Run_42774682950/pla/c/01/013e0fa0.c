/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013e0fa0; name: FUN_013e0fa0
 */


/* WARNING: Removing unreachable block (ram,0x013e1250) */

int FUN_013e0fa0(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5,
                undefined8 *param_6)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ushort uVar6;
  
  iVar2 = FUN_013e0d80();
  if ((int)*param_5 < 0x3d5) {
    uVar6 = *(ushort *)(*(long *)*param_6 + (*param_5 & 0xffffffff) * 0x58 + 0xe8);
  }
  else {
    uVar6 = 0;
  }
  if (((int)*param_4 < 0x3d5) &&
     (uVar6 < *(ushort *)(*(long *)*param_6 + (*param_4 & 0xffffffff) * 0x58 + 0xe8))) {
    uVar4 = *param_4;
    uVar1 = param_4[1];
    uVar5 = *param_5;
    *(int *)(param_4 + 1) = (int)param_5[1];
    *param_4 = uVar5;
    *(int *)(param_5 + 1) = (int)uVar1;
    *param_5 = uVar4;
    if ((int)*param_4 < 0x3d5) {
      uVar6 = *(ushort *)(*(long *)*param_6 + (*param_4 & 0xffffffff) * 0x58 + 0xe8);
    }
    else {
      uVar6 = 0;
    }
    if (((int)*param_3 < 0x3d5) &&
       (uVar6 < *(ushort *)(*(long *)*param_6 + (*param_3 & 0xffffffff) * 0x58 + 0xe8))) {
      uVar4 = *param_3;
      uVar1 = param_3[1];
      uVar5 = *param_4;
      *(int *)(param_3 + 1) = (int)param_4[1];
      *param_3 = uVar5;
      *(int *)(param_4 + 1) = (int)uVar1;
      *param_4 = uVar4;
      if ((int)*param_3 < 0x3d5) {
        uVar6 = *(ushort *)(*(long *)*param_6 + (*param_3 & 0xffffffff) * 0x58 + 0xe8);
      }
      else {
        uVar6 = 0;
      }
      if (((int)*param_2 < 0x3d5) &&
         (uVar6 < *(ushort *)(*(long *)*param_6 + (*param_2 & 0xffffffff) * 0x58 + 0xe8))) {
        uVar4 = *param_2;
        uVar1 = param_2[1];
        uVar5 = *param_3;
        *(int *)(param_2 + 1) = (int)param_3[1];
        *param_2 = uVar5;
        *(int *)(param_3 + 1) = (int)uVar1;
        *param_3 = uVar4;
        if ((int)*param_2 < 0x3d5) {
          uVar6 = *(ushort *)(*(long *)*param_6 + (*param_2 & 0xffffffff) * 0x58 + 0xe8);
        }
        else {
          uVar6 = 0;
        }
        iVar3 = iVar2 + 3;
        if (((int)*param_1 < 0x3d5) &&
           (uVar6 < *(ushort *)(*(long *)*param_6 + (*param_1 & 0xffffffff) * 0x58 + 0xe8))) {
          uVar4 = *param_1;
          uVar1 = param_1[1];
          uVar5 = *param_2;
          *(int *)(param_1 + 1) = (int)param_2[1];
          *param_1 = uVar5;
          *param_2 = uVar4;
          *(int *)(param_2 + 1) = (int)uVar1;
          iVar3 = iVar2 + 4;
        }
      }
      else {
        iVar3 = iVar2 + 2;
      }
    }
    else {
      iVar3 = iVar2 + 1;
    }
  }
  else {
    iVar3 = iVar2;
  }
  return iVar3;
}


