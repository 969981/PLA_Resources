/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00726a0c; name: FUN_00726a0c
 */


void FUN_00726a0c(long *param_1,long *param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_70;
  long lStack_68;
  long local_60;
  undefined8 uStack_58;
  long local_50;
  long lStack_48;
  long lStack_40;
  undefined8 local_38;
  
  FUN_006fba94(&local_50,param_2,param_3,0);
  if (local_50 != 0) {
    *param_1 = local_50;
    *(undefined1 *)(param_1 + 3) = 0;
    param_1[2] = lStack_40;
    param_1[1] = lStack_48;
    return;
  }
  uVar1 = param_2[1];
  uVar6 = *param_2 + 1;
  uVar5 = uVar1 * 3 >> 2 & 0xfffffffffffffff;
  if (uVar6 < uVar5) {
    if ((8 < uVar1) && (uVar6 <= (uVar1 * 3 & 0x3fffffffffffffff) >> 4)) {
      uVar7 = 0;
      do {
        uVar7 = uVar7 + 1;
      } while ((uVar6 * 5 >> 2) + 1 << (uVar7 & 0x3f) < uVar5);
      uVar6 = uVar1 >> (uVar7 & 0x3f);
      if (uVar6 < 9) {
        uVar6 = 8;
      }
      if (uVar6 != uVar1) goto LAB_00726aec;
    }
  }
  else if (uVar1 < 0x800000000000001) {
    uVar6 = uVar1 << 1;
LAB_00726aec:
    FUN_006fc524(param_2,uVar6);
    FUN_006fba94(&local_70,param_2,param_3,0);
    lVar3 = param_2[5];
    uVar2 = uStack_58;
    local_50 = local_70;
    goto joined_r0x00726b20;
  }
  lVar3 = param_2[5];
  local_50 = 0;
  uVar2 = local_38;
joined_r0x00726b20:
  if (lVar3 == 0) {
    puVar4 = (undefined8 *)FUN_002ee6d0(0x18);
  }
  else {
    if (*(long *)(lVar3 + 0x70) != 0) {
      FUN_0032cf88(lVar3,0,0x18);
    }
    puVar4 = (undefined8 *)FUN_0032cea0(lVar3,0x18);
  }
  uVar8 = *param_3;
  puVar4[1] = param_3[1];
  *puVar4 = uVar8;
  FUN_006fc310(&local_70,param_2,uVar2,puVar4);
  *param_2 = *param_2 + 1;
  param_1[2] = local_60;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[1] = lStack_68;
  *param_1 = local_70;
  return;
}


