/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e61a6c; name: FUN_02e61a6c
 */


void FUN_02e61a6c(undefined8 *param_1,undefined1 (*param_2) [12],undefined8 *param_3,
                 undefined8 param_4,undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined **local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_170;
  long local_168;
  ulong local_160;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  
  uVar7 = param_3[2];
  uVar3 = FUN_02e5fd8c(uVar7,param_6);
  if ((uVar3 & 1) == 0) {
    uVar3 = (ulong)*(uint *)(param_6 + 0x40);
    if (*(uint *)(param_6 + 0x40) != 0) {
      plVar6 = (long *)(*(long *)(param_6 + 0x38) + 0x18);
      do {
        if (*plVar6 == 0) {
          if (*(char *)((long)param_3 + 0x2c) == '\0') {
            return;
          }
          uVar3 = FUN_02e61f68(param_4,param_5,param_7);
          if ((uVar3 & 1) != 0) {
            auVar9 = NEON_fmov(0x3f800000,4);
            local_68 = 0;
            local_150 = 0;
            local_148 = 0;
            local_140 = 0;
            local_138 = 0;
            local_130 = 0;
            local_128 = 0;
            local_70 = 0x3f80000000000000;
            local_120 = 0;
            local_118 = 0;
            local_110 = 0;
            local_108 = 0;
            local_100 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_e8 = 0;
            local_e0 = 0;
            local_d8 = 0;
            local_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            uStack_b8 = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_90 = 0;
            uStack_88 = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_1a0 = (undefined **)*param_3;
            uStack_198 = CONCAT44(auVar9._12_4_,*(undefined4 *)(param_3 + 1));
            auVar9._12_4_ = auVar9._12_4_;
            auVar9._0_12_ = *param_2;
            uStack_1d8 = auVar9._8_8_;
            local_1e0 = SUB128(*param_2,0);
            iVar2 = FUN_02e5e6c4(param_1,&local_1a0,&local_1e0,param_6,&local_150,0,0);
            if ((iVar2 == 0) &&
               (fVar8 = (float)FUN_02e569cc(&local_150,param_2,param_3),
               fVar8 < *(float *)(param_3 + 5))) {
              pvVar5 = (void *)FUN_02e5a074(param_3[3]);
              if (pvVar5 != (void *)0x0) {
                memcpy(pvVar5,&local_150,0xf0);
              }
              FUN_02e5fe50(uVar7,param_6);
              return;
            }
          }
          if (*(char *)((long)param_3 + 0x2c) == '\0') {
            return;
          }
          if (*(char *)(param_1 + 4) == '\0') {
            return;
          }
          lVar1 = *(long *)(param_6 + 0x38) + (ulong)*(uint *)(param_6 + 0x40) * 0x20;
          if (*(long *)(lVar1 + -8) == 0) {
            return;
          }
          local_1a0 = &PTR_LAB_042a5f70;
          local_168 = 0;
          local_160 = 0;
          FUN_02e62634(&local_1a0,param_6);
          local_150 = local_190;
          local_1c8 = 0;
          local_1e0 = 0;
          uStack_1d8 = 0;
          uStack_1d0 = 0;
          local_1c0 = 0;
          uStack_1b8 = 0;
          local_1b0 = 0;
          local_148 = CONCAT44(local_148._4_4_,local_188);
          iVar2 = 0;
          if ((uint)local_160 < 9) {
            iVar2 = 8 - (uint)local_160;
          }
          uVar3 = FUN_02e4cb9c(&local_1e0,&local_150,*(undefined8 *)(lVar1 + -8),param_3,*param_1,
                               &local_1a0,iVar2);
          if (((uVar3 & 1) != 0) && (uVar3 = FUN_02e5fd8c(uVar7,&local_1a0), (uVar3 & 1) == 0)) {
            auVar9 = NEON_fmov(0x3f800000,4);
            local_68 = 0;
            local_150 = 0;
            local_148 = 0;
            local_140 = 0;
            local_138 = 0;
            local_130 = 0;
            local_128 = 0;
            local_70 = 0x3f80000000000000;
            local_120 = 0;
            local_118 = 0;
            local_110 = 0;
            local_108 = 0;
            local_100 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_e8 = 0;
            local_e0 = 0;
            local_d8 = 0;
            local_d0 = 0;
            local_c8 = 0;
            local_c0 = 0;
            uStack_b8 = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_90 = 0;
            uStack_88 = 0;
            local_80 = 0;
            uStack_78 = 0;
            local_1f0 = *param_3;
            uStack_1e8 = CONCAT44(auVar9._12_4_,*(undefined4 *)(param_3 + 1));
            auVar10._12_4_ = auVar9._12_4_;
            auVar10._0_12_ = *param_2;
            uStack_1f8 = auVar10._8_8_;
            local_200 = SUB128(*param_2,0);
            iVar2 = FUN_02e5e6c4(param_1,&local_1f0,&local_200,&local_1a0,&local_150,0,0);
            if ((iVar2 == 0) &&
               (fVar8 = (float)FUN_02e569cc(&local_150,param_2,param_3),
               fVar8 < *(float *)(param_3 + 5))) {
              pvVar5 = (void *)FUN_02e5a074(param_3[3]);
              if (pvVar5 != (void *)0x0) {
                memcpy(pvVar5,&local_150,0xf0);
              }
              FUN_02e5fe50(uVar7,&local_1a0);
            }
          }
          FUN_02e4c5cc(&local_1e0);
          goto LAB_02e61ca4;
        }
        uVar3 = uVar3 - 1;
        plVar6 = plVar6 + 4;
      } while (uVar3 != 0);
    }
    if ((*(char *)((long)param_1 + 0x21) != '\0') && (*(char *)((long)param_3 + 0x2d) != '\0')) {
      local_160 = 0;
      local_1a0 = &PTR_LAB_042a5f70;
      local_150 = 0;
      local_c8 = CONCAT44(local_c8._4_4_,0x811c9dc5);
      local_170 = 0;
      local_168 = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_108 = 0;
      local_100 = 0;
      local_118 = 0;
      local_110 = 0;
      local_128 = 0;
      local_120 = 0;
      local_138 = 0;
      local_130 = 0;
      local_148 = 0;
      local_140 = 0;
      uVar3 = FUN_02e5f64c(param_1,param_2,param_3,param_6,&local_1a0,&local_150);
      if (((uVar3 & 1) != 0) && (uVar3 = FUN_02e5fd8c(uVar7,&local_1a0), (uVar3 & 1) == 0)) {
        puVar4 = (undefined4 *)(**(code **)(*(long *)param_3[4] + 8))();
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = (undefined4)local_150;
          puVar4[1] = local_150._4_4_;
          puVar4[2] = (undefined4)local_148;
          puVar4[3] = local_148._4_4_;
          puVar4[4] = (undefined4)local_140;
          puVar4[5] = local_140._4_4_;
          puVar4[6] = (undefined4)local_138;
          puVar4[7] = local_138._4_4_;
          puVar4[8] = (undefined4)local_130;
          puVar4[9] = local_130._4_4_;
          puVar4[10] = (undefined4)local_128;
          puVar4[0xb] = local_128._4_4_;
          puVar4[0xc] = (undefined4)local_120;
          puVar4[0xd] = local_120._4_4_;
          puVar4[0xe] = (undefined4)local_118;
          puVar4[0xf] = local_118._4_4_;
          puVar4[0x10] = (undefined4)local_110;
          puVar4[0x11] = local_110._4_4_;
          puVar4[0x12] = (undefined4)local_108;
          puVar4[0x13] = local_108._4_4_;
          puVar4[0x14] = (undefined4)local_100;
          puVar4[0x15] = local_100._4_4_;
          puVar4[0x16] = (undefined4)local_f8;
          puVar4[0x17] = local_f8._4_4_;
          puVar4[0x18] = (undefined4)local_f0;
          puVar4[0x19] = local_f0._4_4_;
          puVar4[0x1a] = (undefined4)local_e8;
          puVar4[0x1b] = local_e8._4_4_;
          puVar4[0x1c] = (undefined4)local_e0;
          puVar4[0x1d] = local_e0._4_4_;
          puVar4[0x22] = (undefined4)local_c8;
          *(undefined8 *)(puVar4 + 0x1e) = local_d8;
          *(undefined8 *)(puVar4 + 0x20) = local_d0;
        }
        FUN_02e5fe50(uVar7,&local_1a0);
      }
LAB_02e61ca4:
      local_1a0 = &PTR_LAB_042a5f70;
      if (local_168 != 0) {
        local_160 = local_160 & 0xffffffff00000000;
        (*DAT_0442d158)(0xb);
      }
    }
  }
  return;
}


