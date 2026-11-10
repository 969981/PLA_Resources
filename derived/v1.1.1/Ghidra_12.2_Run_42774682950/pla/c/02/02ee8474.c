/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee8474; name: FUN_02ee8474
 */


float FUN_02ee8474(long *param_1,long param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_38;
  undefined4 local_34;
  
  local_70 = *param_3;
  uStack_68 = param_3[1];
  local_60 = param_3[2];
  uStack_58 = param_3[3];
  local_50 = param_3[4];
  uStack_48 = param_3[5];
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = param_4 / uVar3;
    }
    for (puVar5 = *(uint **)(*param_1 + (ulong)(param_4 - uVar1 * uVar3) * 8); puVar5 != (uint *)0x0
        ; puVar5 = *(uint **)(puVar5 + 2)) {
      if (*puVar5 == param_4) {
        puVar5 = (uint *)FUN_02eb14e4(puVar5 + 8,&local_70);
        if (puVar5 == (uint *)0x0) goto LAB_02ee8590;
        local_38 = *puVar5;
        goto LAB_02ee8528;
      }
    }
  }
  if ((*(int *)(param_2 + 0x48) != 1) &&
     (((*(int *)(param_2 + 8) == 7 || (*(int *)(param_2 + 8) == 0)) &&
      (uVar2 = FUN_02ec5b20(DAT_0440a180,param_4), (uVar2 & 1) != 0)))) {
    return 1.0;
  }
  uVar2 = FUN_02ec5abc(DAT_0440a180,param_4,&local_70,&local_38);
  if ((uVar2 & 1) == 0) {
LAB_02ee8590:
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 != 0) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = param_4 / uVar3;
      }
      puVar5 = *(uint **)(*param_1 + (ulong)(param_4 - uVar1 * uVar3) * 8);
      if (puVar5 != (uint *)0x0) {
        local_38 = 0;
        do {
          if (*puVar5 == param_4) {
            local_38 = puVar5[4];
            break;
          }
          puVar5 = *(uint **)(puVar5 + 2);
        } while (puVar5 != (uint *)0x0);
        uVar3 = *(uint *)(param_2 + 0x58);
        goto joined_r0x02ee852c;
      }
    }
    local_38 = 0;
    uVar3 = *(uint *)(param_2 + 0x58);
  }
  else {
LAB_02ee8528:
    uVar3 = *(uint *)(param_2 + 0x58);
  }
joined_r0x02ee852c:
  if (uVar3 == 0) {
    return 1.0;
  }
  lVar4 = *(long *)(param_2 + 0x50);
  fVar8 = 1.0;
  lVar6 = lVar4;
  do {
    if (*(uint *)(lVar6 + 4) == param_4) {
      local_34 = *(undefined4 *)(lVar6 + 0x18);
      fVar7 = (float)FUN_02e74568(local_38,lVar6 + 8,&local_34);
      *(undefined4 *)(lVar6 + 0x18) = local_34;
      fVar8 = fVar7 * fVar8;
      lVar4 = *(long *)(param_2 + 0x50);
      uVar3 = *(uint *)(param_2 + 0x58);
    }
    lVar6 = lVar6 + 0x20;
  } while (lVar6 != lVar4 + (ulong)uVar3 * 0x20);
  return fVar8;
}


