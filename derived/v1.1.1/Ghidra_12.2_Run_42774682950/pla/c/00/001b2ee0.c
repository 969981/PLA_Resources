/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b2ee0; name: FUN_001b2ee0
 */


ulong FUN_001b2ee0(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_60;
  undefined8 local_58;
  
  if (*(int *)((long)param_2 + 0xc) == 0x10) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    uVar9 = *param_4;
    lVar4 = *param_2;
    lVar8 = param_2[1];
    *(undefined8 *)((long)puVar5 + 7) = *(undefined8 *)((long)param_4 + 7);
    *puVar5 = uVar9;
    uVar9 = param_4[2];
    puVar5[3] = param_4[3];
    puVar5[2] = uVar9;
    uVar9 = param_4[4];
    puVar5[5] = param_4[5];
    puVar5[4] = uVar9;
    uVar9 = *param_3;
    lVar6 = *(long *)(param_1 + 0x18);
    *(undefined8 *)(lVar6 + 0x128) = param_3[1];
    *(undefined8 *)(lVar6 + 0x120) = uVar9;
    uVar2 = FUN_001c3964(*(undefined8 *)(param_1 + 0x18),lVar4,(int)lVar8,1,0);
    return uVar2;
  }
  puVar5 = (undefined8 *)*param_2;
  local_60 = (undefined8 *)0x0;
  local_58 = 0x8000000000000000;
  uVar1 = *(uint *)(param_2 + 1);
  uVar9 = *(undefined8 *)PTR_PTR_04372408;
  if ((int)uVar1 < 1) {
    uVar2 = 0;
    if (uVar1 == 0) goto LAB_001b2fe4;
  }
  else {
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
    }
    local_60 = (undefined8 *)FUN_032bd1d4(uVar9,uVar1,0x10,0,0,(long)&local_58 + 4);
    uVar2 = local_58 & 0xffffffff;
    if ((uint)local_58 == uVar1) goto LAB_001b2fe4;
  }
  uVar2 = (ulong)uVar1;
  local_58 = CONCAT44(local_58._4_4_,uVar1);
LAB_001b2fe4:
  if (0 < (int)param_2[1]) {
    uVar10 = *puVar5;
    local_60[1] = CONCAT44(*(undefined4 *)(puVar5 + 1),*(undefined4 *)(puVar5 + 1));
    *local_60 = uVar10;
    local_60[1] = local_60[1] & 0xffffffff;
    *local_60 = *local_60;
    if (1 < (int)param_2[1]) {
      lVar8 = 1;
      do {
        puVar5 = (undefined8 *)((long)*(int *)((long)param_2 + 0xc) + (long)puVar5);
        uVar10 = *puVar5;
        lVar4 = lVar8 + 1;
        (local_60 + lVar8 * 2)[1] =
             CONCAT44(*(undefined4 *)(puVar5 + 1),*(undefined4 *)(puVar5 + 1));
        local_60[lVar8 * 2] = uVar10;
        uVar10 = local_60[lVar8 * 2];
        (local_60 + lVar8 * 2)[1] = (local_60 + lVar8 * 2)[1] & 0xffffffff;
        local_60[lVar8 * 2] = uVar10;
        lVar8 = lVar4;
      } while (lVar4 < (int)param_2[1]);
    }
    uVar2 = local_58 & 0xffffffff;
  }
  puVar7 = *(undefined8 **)(param_1 + 0x18);
  puVar5 = (undefined8 *)0x0;
  if ((int)uVar2 != 0) {
    puVar5 = local_60;
  }
  uVar10 = *param_4;
  *(undefined8 *)((long)puVar7 + 7) = *(undefined8 *)((long)param_4 + 7);
  *puVar7 = uVar10;
  uVar10 = param_4[2];
  puVar7[3] = param_4[3];
  puVar7[2] = uVar10;
  uVar10 = param_4[4];
  puVar7[5] = param_4[5];
  puVar7[4] = uVar10;
  uVar10 = *param_3;
  lVar8 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(lVar8 + 0x128) = param_3[1];
  *(undefined8 *)(lVar8 + 0x120) = uVar10;
  uVar3 = FUN_001c3964(*(undefined8 *)(param_1 + 0x18),puVar5,uVar2,1,0);
  uVar2 = local_58;
  uVar1 = local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < (long)uVar2) && (local_60 != (undefined8 *)0x0)) {
    FUN_032cf244(uVar9,local_60,0x10,uVar1 & 0x3fffffff);
  }
  return uVar3 & 0xffffffff;
}


