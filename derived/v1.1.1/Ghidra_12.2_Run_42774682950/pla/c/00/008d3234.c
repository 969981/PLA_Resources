/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008d3234; name: FUN_008d3234
 */


void FUN_008d3234(long param_1,long param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  int local_80 [2];
  int local_78 [2];
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  local_58 = CONCAT31(local_58._1_3_,0x1f);
  local_54 = -0x80000000;
  local_50 = CONCAT31(local_50._1_3_,0x1f);
  local_4c = -0x80000000;
  local_48 = CONCAT31(local_48._1_3_,0x1f);
  local_44 = -0x80000000;
  local_40 = CONCAT31(local_40._1_3_,0x1f);
  local_3c = -0x80000000;
  local_38 = CONCAT31(local_38._1_3_,0x1f);
  local_34 = -0x80000000;
  bVar1 = param_3[0x28];
  if ((ulong)bVar1 != 0) {
    local_58 = CONCAT31(local_58._1_3_,*param_3);
    local_54 = *(int *)(param_3 + 4);
    if (bVar1 != 1) {
      local_50 = CONCAT31(local_50._1_3_,param_3[8]);
      local_4c = *(int *)(param_3 + 0xc);
      if (bVar1 != 2) {
        lVar4 = (ulong)bVar1 - 2;
        piVar5 = &local_44;
        piVar6 = (int *)(param_3 + 0x14);
        do {
          *(char *)(piVar5 + -1) = (char)piVar6[-1];
          lVar4 = lVar4 + -1;
          *piVar5 = *piVar6;
          piVar5 = piVar5 + 2;
          piVar6 = piVar6 + 2;
        } while (lVar4 != 0);
      }
    }
  }
  FUN_008d6410(&local_58,local_78 + 0x12);
  local_78[0] = CONCAT31(local_78[0]._1_3_,0x1f);
  local_78[1] = -0x80000000;
  local_70 = 0x1f;
  local_6c = 0x80000000;
  local_68 = 0x1f;
  local_64 = 0x80000000;
  local_60 = 0x1f;
  local_5c = 0x80000000;
  local_80[0] = local_58;
  local_80[1] = local_54;
  if (local_4c == local_54) {
    uVar7 = 2;
    local_78[0] = local_50;
    local_78[1] = local_54;
  }
  else {
    uVar7 = 1;
  }
  uVar8 = uVar7;
  if (local_44 == local_54) {
    uVar8 = (ulong)((int)uVar7 + 1);
    local_80[uVar7 * 2] = local_48;
    local_80[uVar7 * 2 + 1] = local_54;
  }
  uVar7 = uVar8;
  if (local_3c == local_54) {
    uVar7 = (ulong)((int)uVar8 + 1);
    local_80[uVar8 * 2] = local_40;
    local_80[uVar8 * 2 + 1] = local_54;
  }
  if (local_34 == local_54) {
    uVar8 = (ulong)((uint)uVar7 + 1);
    local_80[uVar7 * 2] = local_38;
    local_80[uVar7 * 2 + 1] = local_54;
  }
  else {
    uVar8 = uVar7;
    if ((uint)uVar7 < 2) {
      lVar4 = 0;
      goto LAB_008d3398;
    }
  }
  FUN_008c5a38(param_1);
  uVar3 = FUN_00923bf0();
  iVar2 = FUN_009273d4(uVar3,uVar8);
  lVar4 = (long)iVar2;
LAB_008d3398:
  *(uint *)(param_2 + 4) = (uint)*(byte *)(local_80 + lVar4 * 2);
  *(int *)(param_1 + 0x54) = local_80[lVar4 * 2 + 1];
  return;
}


