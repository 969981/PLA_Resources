/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5f924; name: FUN_02e5f924
 */


void FUN_02e5f924(long param_1,undefined1 (*param_2) [12],long param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  void *__dest;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined **local_f0 [6];
  undefined8 local_c0;
  long local_b8;
  ulong local_b0;
  undefined8 *local_a0;
  ulong local_98;
  long local_88;
  ulong local_80;
  undefined4 local_78;
  undefined8 local_70;
  
  plVar5 = *(long **)(param_3 + 0x10);
  lVar7 = *plVar5;
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  local_78 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  if (lVar7 == *plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x50) {
LAB_02e5fc6c:
    FUN_02e44bd8(plVar5,&local_a0);
    if (local_a0 == (undefined8 *)0x0) {
    }
    else {
      if ((int)local_98 != 0) {
        lVar7 = (local_98 & 0xffffffff) * 0x50;
        puVar6 = local_a0;
        do {
          (**(code **)*puVar6)(puVar6);
          lVar7 = lVar7 + -0x50;
          puVar6 = puVar6 + 10;
        } while (lVar7 != 0);
      }
      local_98 = local_98 & 0xffffffff00000000;
      (*DAT_0442d158)(0xb,local_a0);
      local_98 = local_98 & 0xffffffff;
    }
    local_a0 = (undefined8 *)0x0;
    if ((int)local_80 != 0) {
      local_a0 = (undefined8 *)0x0;
      uVar3 = 0;
      do {
        plVar5 = *(long **)(local_88 + uVar3 * 8);
        while (plVar5 != (long *)0x0) {
          plVar5 = (long *)*plVar5;
          FUN_02f59e60(0xb);
        }
        *(undefined8 *)(local_88 + uVar3 * 8) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar3 < (local_80 & 0xffffffff));
    }
    local_78 = 0;
    if (local_88 != 0) {
      local_80 = local_80 & 0xffffffff00000000;
      FUN_02f59e60(0xb);
    }
    return;
  }
  auVar10 = NEON_fmov(0x3f800000,4);
  uVar11 = auVar10._8_8_;
  uVar9 = auVar10._0_8_;
  uVar1 = *(uint *)(lVar7 + 0x40);
  do {
    if (uVar1 != 0) {
      uVar3 = (ulong)uVar1;
      plVar4 = (long *)(*(long *)(lVar7 + 0x38) + 0x18);
      do {
        if (*plVar4 == 0) {
          if (*(char *)(param_3 + 0x2c) == '\0') goto LAB_02e5f9cc;
          local_f8 = 0;
          local_100 = 0x3f80000000000000;
          local_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          local_1c8 = 0;
          local_f0[0] = &PTR_LAB_042a5f70;
          local_b0 = 0;
          local_1c0 = 0;
          local_1b8 = 0;
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          local_198 = 0;
          local_190 = 0;
          local_188 = 0;
          local_180 = 0;
          local_178 = 0;
          local_170 = 0;
          local_168 = 0;
          local_160 = 0;
          local_158 = 0;
          local_150 = 0;
          uStack_148 = 0;
          local_140 = 0;
          uStack_138 = 0;
          local_130 = 0;
          uStack_128 = 0;
          local_120 = 0;
          uStack_118 = 0;
          local_110 = 0;
          uStack_108 = 0;
          local_c0 = 0;
          local_b8 = 0;
          auVar10._12_4_ = (int)((ulong)uVar11 >> 0x20);
          auVar10._0_12_ = *param_2;
          uStack_1e8 = auVar10._8_8_;
          local_1f0 = SUB128(*param_2,0);
          uVar3 = FUN_02e5e1bc(param_1,param_3,&local_1f0,lVar7,&local_1e0,local_f0,in_x6,in_x7,
                               uVar9,uVar11);
          if ((((uVar3 & 1) == 0) || (uVar3 = FUN_02e5fd8c(&local_a0,local_f0), (uVar3 & 1) != 0))
             || (fVar8 = (float)FUN_02e569cc(&local_1e0,param_2,param_3),
                *(float *)(param_3 + 0x28) <= fVar8)) goto LAB_02e5f9c0;
          __dest = (void *)FUN_02e5a074(*(undefined8 *)(param_3 + 0x18));
          if (__dest != (void *)0x0) {
            memcpy(__dest,&local_1e0,0xf0);
          }
          goto LAB_02e5f9b4;
        }
        uVar3 = uVar3 - 1;
        plVar4 = plVar4 + 4;
      } while (uVar3 != 0);
      if ((*(char *)(param_1 + 0x21) != '\0') && (*(char *)(param_3 + 0x2d) != '\0')) {
        local_f0[0] = &PTR_LAB_042a5f70;
        local_b0 = 0;
        local_1e0 = 0;
        local_c0 = 0;
        local_b8 = 0;
        uVar3 = (ulong)local_158 >> 0x20;
        local_158 = CONCAT44((int)uVar3,0x811c9dc5);
        local_168 = 0;
        local_160 = 0;
        local_178 = 0;
        local_170 = 0;
        local_188 = 0;
        local_180 = 0;
        local_198 = 0;
        local_190 = 0;
        local_1a8 = 0;
        local_1a0 = 0;
        local_1b8 = 0;
        local_1b0 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        uVar3 = FUN_02e5f64c(param_1,param_2,param_3,lVar7,local_f0,&local_1e0);
        if (((uVar3 & 1) != 0) && (uVar3 = FUN_02e5fd8c(&local_a0,local_f0), (uVar3 & 1) == 0)) {
          puVar2 = (undefined4 *)(**(code **)(**(long **)(param_3 + 0x20) + 8))();
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = (undefined4)local_1e0;
            puVar2[1] = local_1e0._4_4_;
            puVar2[2] = (undefined4)local_1d8;
            puVar2[3] = local_1d8._4_4_;
            puVar2[4] = (undefined4)local_1d0;
            puVar2[5] = local_1d0._4_4_;
            puVar2[6] = (undefined4)local_1c8;
            puVar2[7] = local_1c8._4_4_;
            puVar2[8] = (undefined4)local_1c0;
            puVar2[9] = local_1c0._4_4_;
            puVar2[10] = (undefined4)local_1b8;
            puVar2[0xb] = local_1b8._4_4_;
            puVar2[0xc] = (undefined4)local_1b0;
            puVar2[0xd] = local_1b0._4_4_;
            puVar2[0xe] = (undefined4)local_1a8;
            puVar2[0xf] = local_1a8._4_4_;
            puVar2[0x10] = (undefined4)local_1a0;
            puVar2[0x11] = local_1a0._4_4_;
            puVar2[0x12] = (undefined4)local_198;
            puVar2[0x13] = local_198._4_4_;
            puVar2[0x14] = (undefined4)local_190;
            puVar2[0x15] = local_190._4_4_;
            puVar2[0x16] = (undefined4)local_188;
            puVar2[0x17] = local_188._4_4_;
            puVar2[0x18] = (undefined4)local_180;
            puVar2[0x19] = local_180._4_4_;
            puVar2[0x1a] = (undefined4)local_178;
            puVar2[0x1b] = local_178._4_4_;
            puVar2[0x1c] = (undefined4)local_170;
            puVar2[0x1d] = local_170._4_4_;
            puVar2[0x22] = (undefined4)local_158;
            *(undefined8 *)(puVar2 + 0x1e) = local_168;
            *(undefined8 *)(puVar2 + 0x20) = local_160;
          }
LAB_02e5f9b4:
          FUN_02e5fe50(&local_a0,local_f0);
        }
LAB_02e5f9c0:
        local_f0[0] = &PTR_LAB_042a5f70;
        if (local_b8 != 0) {
          local_b0 = local_b0 & 0xffffffff00000000;
          (*DAT_0442d158)(0xb);
          local_b8 = 0;
          local_b0 = local_b0 & 0xffffffff;
        }
      }
    }
LAB_02e5f9cc:
    if (lVar7 + 0x50 == *plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x50) goto LAB_02e5fc6c;
    uVar1 = *(uint *)(lVar7 + 0x90);
    lVar7 = lVar7 + 0x50;
  } while( true );
}


