/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6145c; name: FUN_02e6145c
 */


undefined8
FUN_02e6145c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 param_7,uint param_8,
            undefined8 param_9,long *param_10)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 local_150;
  ulong uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined **local_130;
  undefined4 local_128;
  long local_f8;
  ulong local_f0;
  float local_e0;
  float fStack_dc;
  float local_d8;
  undefined **local_d0;
  undefined4 local_c8;
  long local_98;
  ulong local_90;
  undefined8 local_78;
  float local_70;
  
  uVar1 = FUN_02e61714(param_7,param_9,param_2);
  if ((uVar1 & 1) == 0) {
    local_78 = 0;
    local_70 = 0.0;
    local_d0 = (undefined **)*param_5;
    local_c8 = *(undefined4 *)(param_5 + 1);
    uVar1 = FUN_02e4c050(param_2,param_6,&local_d0,&local_78);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    auVar5 = NEON_fmov(0x3f800000,4);
    lVar2 = FUN_02e61778(param_7,param_9,param_2,param_3);
    if (lVar2 == 0) {
      return 0;
    }
    if ((*(char *)(param_1 + 0x20) != '\0') && (param_8 < *(uint *)(param_1 + 0x14))) {
      local_d0 = &PTR_LAB_042a5f70;
      local_98 = 0;
      local_90 = 0;
      FUN_02e62634(&local_d0,lVar2);
      if (*(int *)(param_1 + 0x1c) != 0) {
        uVar3 = 0;
        do {
          (**(code **)(*param_10 + 0x20))(&local_e0,param_10);
          fVar4 = *(float *)(param_1 + 0x18);
          fStack_dc = fStack_dc * fVar4;
          local_d8 = local_d8 * fVar4;
          local_e0 = local_e0 * fVar4;
          local_130 = (undefined **)*param_4;
          local_128 = *(undefined4 *)(param_4 + 1);
          local_140 = CONCAT44(local_78._4_4_ + fStack_dc,(float)local_78 + local_e0);
          local_138 = CONCAT44(local_138._4_4_,local_70 + local_d8);
          uVar1 = FUN_02e61810(param_2,&local_130,&local_140);
          if ((uVar1 & 1) != 0) {
            local_130 = &PTR_LAB_042a5f70;
            local_f8 = 0;
            local_f0 = 0;
            FUN_02e62634(&local_130,&local_d0);
            local_140 = CONCAT44(*(undefined4 *)((ulong)&local_78 | 4),(float)local_78);
            local_150 = CONCAT44(*(undefined4 *)((ulong)&local_e0 | 4),local_e0);
            local_138 = CONCAT44(auVar5._12_4_,local_70);
            uStack_148 = (ulong)(uint)local_d8;
            FUN_02e60188(param_1,&local_140,&local_150,param_6,param_7,param_8 + 1,&local_130,
                         param_10);
            local_130 = &PTR_LAB_042a5f70;
            if (local_f8 != 0) {
              local_f0 = local_f0 & 0xffffffff00000000;
              (*DAT_0442d158)(0xb);
              local_f8 = 0;
              local_f0 = local_f0 & 0xffffffff;
            }
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(param_1 + 0x1c));
      }
      local_d0 = &PTR_LAB_042a5f70;
      if (local_98 != 0) {
        local_90 = local_90 & 0xffffffff00000000;
        (*DAT_0442d158)(0xb);
      }
    }
  }
  return 1;
}


