/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fea334; name: FUN_02fea334
 */


void FUN_02fea334(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 *param_7,byte param_8,long param_9)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_1a0 [32];
  undefined *local_180;
  long *local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 auStack_160 [144];
  undefined8 local_d0;
  long local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_50;
  long local_48;
  
  lVar4 = *(long *)(param_4 + 0x50);
  if (*(char *)(lVar4 + 0x15df) != '\0') {
    puStack_170 = auStack_160;
    local_168 = 0x90;
    local_178 = (long *)0x0;
    local_180 = PTR_DAT_043887d0 + 0x10;
    local_50 = param_8 & 1;
    uStack_88 = param_7[1];
    local_90 = *param_7;
    uStack_78 = param_7[3];
    local_80 = param_7[2];
    uStack_68 = param_7[5];
    local_70 = param_7[4];
    uStack_58 = param_7[7];
    local_60 = param_7[6];
    local_48 = param_9;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_c8 = param_4;
    uStack_c0 = param_1;
    local_b8 = param_2;
    lStack_b0 = param_3;
    local_a8 = param_6;
    uStack_a0 = param_5;
    local_d0 = FUN_02fd8ea4(0,&local_180,&local_1e0);
    if (*(char *)(param_3 + 0x30) == '\0') {
      lVar1 = *(long *)(param_2 + 0x28);
      pcVar3 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18);
    }
    else {
      puVar2 = *(undefined8 **)(param_3 + 0x20);
      local_1e0 = *puVar2;
      uStack_1d8 = puVar2[1];
      local_1d0 = puVar2[2];
      uStack_1c8 = puVar2[3];
      local_1c0 = puVar2[4];
      uStack_1b8 = puVar2[5];
      local_1b0 = puVar2[6];
      uStack_1a8 = puVar2[7];
      FUN_032cc384(auStack_1a0,&local_1e0,param_3 + 0x50);
      local_1b0 = CONCAT44((float)((ulong)local_1b0 >> 0x20) + auStack_1a0._4_4_,
                           (float)local_1b0 + auStack_1a0._0_4_);
      uStack_1a8 = CONCAT44((float)((ulong)uStack_1a8 >> 0x20) + auStack_1a0._12_4_,
                            (float)uStack_1a8 + auStack_1a0._8_4_);
      fVar5 = (float)*(undefined8 *)(param_3 + 0x40);
      local_1e0 = CONCAT44((float)((ulong)local_1e0 >> 0x20) * fVar5,(float)local_1e0 * fVar5);
      uStack_1d8 = CONCAT44((float)((ulong)uStack_1d8 >> 0x20) * fVar5,(float)uStack_1d8 * fVar5);
      fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
      local_1d0 = CONCAT44((float)((ulong)local_1d0 >> 0x20) * fVar5,(float)local_1d0 * fVar5);
      uStack_1c8 = CONCAT44((float)((ulong)uStack_1c8 >> 0x20) * fVar5,(float)uStack_1c8 * fVar5);
      fVar5 = (float)*(undefined8 *)(param_3 + 0x48);
      local_1c0 = CONCAT44((float)((ulong)local_1c0 >> 0x20) * fVar5,(float)local_1c0 * fVar5);
      uStack_1b8 = CONCAT44((float)((ulong)uStack_1b8 >> 0x20) * fVar5,(float)uStack_1b8 * fVar5);
      lVar1 = *(long *)(param_2 + 0x28);
      pcVar3 = *(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar1 + 0x18) * 0x200 + 0x18);
      param_7 = &local_1e0;
    }
    (*pcVar3)(lVar1,param_7,auStack_1a0);
    uVar6 = NEON_fmax(*(undefined8 *)(param_9 + 0x10),0,4);
    fVar5 = (float)((ulong)uVar6 >> 0x20);
    local_1e0 = CONCAT44(fVar5 * fVar5,(float)uVar6 * (float)uVar6);
    uVar6 = FUN_030fe59c(lVar4);
    if ((*(byte *)(param_9 + 8) & 0x41) == 0) {
      FUN_02fea97c(uVar6,auStack_1a0,&local_1e0,&local_180);
    }
    else {
      FUN_02fea514();
    }
    local_180 = PTR_DAT_043724f0 + 0x10;
    if (local_178 != (long *)0x0) {
      (**(code **)(*local_178 + 8))();
    }
  }
  return;
}


