/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b2c70; name: FUN_001b2c70
 */


ulong FUN_001b2c70(long param_1,ulong *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *local_60;
  undefined8 local_58;
  
  puVar8 = (undefined8 *)*param_2;
  if (*(int *)((long)param_2 + 0xc) == 0x10 && ((ulong)puVar8 & 0xf) == 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    uVar7 = *param_3;
    uVar4 = param_2[1];
    *(undefined8 *)((long)puVar6 + 7) = *(undefined8 *)((long)param_3 + 7);
    *puVar6 = uVar7;
    uVar7 = param_3[2];
    puVar6[3] = param_3[3];
    puVar6[2] = uVar7;
    uVar7 = param_3[4];
    puVar6[5] = param_3[5];
    puVar6[4] = uVar7;
    uVar4 = FUN_001c3964(*(undefined8 *)(param_1 + 0x18),puVar8,(int)uVar4,0,0);
    return uVar4;
  }
  local_60 = (undefined8 *)0x0;
  local_58 = 0x8000000000000000;
  uVar2 = (uint)param_2[1];
  uVar7 = *(undefined8 *)PTR_PTR_04372408;
  if ((int)uVar2 < 1) {
    uVar4 = 0;
    if (uVar2 == 0) goto LAB_001b2d18;
  }
  else {
    if (0x3fffffff < (int)uVar2) {
      FUN_032bd0a8(uVar2);
    }
    local_60 = (undefined8 *)FUN_032bd1d4(uVar7,uVar2,0x10,0,0,(long)&local_58 + 4);
    uVar4 = local_58 & 0xffffffff;
    if ((uint)local_58 == uVar2) goto LAB_001b2d18;
  }
  uVar4 = (ulong)uVar2;
  local_58 = CONCAT44(local_58._4_4_,uVar2);
LAB_001b2d18:
  if (0 < (int)param_2[1]) {
    uVar9 = *puVar8;
    local_60[1] = CONCAT44(*(undefined4 *)(puVar8 + 1),*(undefined4 *)(puVar8 + 1));
    *local_60 = uVar9;
    local_60[1] = local_60[1] & 0xffffffff;
    *local_60 = *local_60;
    if (1 < (int)param_2[1]) {
      lVar5 = 1;
      do {
        puVar8 = (undefined8 *)((long)*(int *)((long)param_2 + 0xc) + (long)puVar8);
        uVar9 = *puVar8;
        lVar1 = lVar5 + 1;
        (local_60 + lVar5 * 2)[1] =
             CONCAT44(*(undefined4 *)(puVar8 + 1),*(undefined4 *)(puVar8 + 1));
        local_60[lVar5 * 2] = uVar9;
        uVar9 = local_60[lVar5 * 2];
        (local_60 + lVar5 * 2)[1] = (local_60 + lVar5 * 2)[1] & 0xffffffff;
        local_60[lVar5 * 2] = uVar9;
        lVar5 = lVar1;
      } while (lVar1 < (int)param_2[1]);
    }
    uVar4 = local_58 & 0xffffffff;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x18);
  puVar8 = (undefined8 *)0x0;
  if ((int)uVar4 != 0) {
    puVar8 = local_60;
  }
  uVar9 = *param_3;
  *(undefined8 *)((long)puVar6 + 7) = *(undefined8 *)((long)param_3 + 7);
  *puVar6 = uVar9;
  uVar9 = param_3[2];
  puVar6[3] = param_3[3];
  puVar6[2] = uVar9;
  uVar9 = param_3[4];
  puVar6[5] = param_3[5];
  puVar6[4] = uVar9;
  uVar3 = FUN_001c3964(*(undefined8 *)(param_1 + 0x18),puVar8,uVar4,0,0);
  uVar4 = local_58;
  uVar2 = local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < (long)uVar4) && (local_60 != (undefined8 *)0x0)) {
    FUN_032cf244(uVar7,local_60,0x10,uVar2 & 0x3fffffff);
  }
  return uVar3 & 0xffffffff;
}


