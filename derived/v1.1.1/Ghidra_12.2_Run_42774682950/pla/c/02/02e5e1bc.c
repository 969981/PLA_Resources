/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5e1bc; name: FUN_02e5e1bc
 */


bool FUN_02e5e1bc(undefined8 *param_1,undefined1 (*param_2) [12],undefined1 (*param_3) [16],
                 long param_4,undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  float fVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar19;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined **local_270;
  ulong uStack_268;
  undefined8 local_240;
  long local_238;
  ulong local_230;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
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
  undefined **ppuStack_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined4 local_d8;
  long local_d0;
  undefined1 local_a0 [16];
  float local_90;
  float fStack_8c;
  float local_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  
  auVar14 = NEON_fmov(0x3f800000,4);
  local_78 = 0;
  local_70 = 0.0;
  auVar15._12_4_ = auVar14._12_4_;
  auVar15._0_12_ = *param_2;
  uStack_1c8 = auVar15._8_8_;
  local_1d0 = SUB128(*param_2,0);
  iVar4 = FUN_02e5e6c4(param_1,&local_1d0);
  if (iVar4 == 0) {
    *(undefined8 *)(param_6 + 0x30) = *(undefined8 *)(param_4 + 0x30);
    FUN_02e622bc(param_6 + 0x38,param_4 + 0x38);
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_6 + 0x18) = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(param_6 + 0x10) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_6 + 0x28) = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(param_6 + 0x20) = uVar8;
    return true;
  }
  if (iVar4 == 3) {
    lVar11 = param_6 + 0x38;
    *(undefined8 *)(param_6 + 0x30) = *(undefined8 *)(param_4 + 0x30);
    FUN_02e622bc(lVar11,param_4 + 0x38);
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_6 + 0x18) = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(param_6 + 0x10) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_6 + 0x28) = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(param_6 + 0x20) = uVar8;
    fStack_8c = local_78._4_4_ - *(float *)(*param_3 + 4);
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_90 = (float)local_78 - *(float *)*param_3;
    local_88 = local_70 - *(float *)(*param_3 + 8);
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_270 = (undefined **)CONCAT44(fStack_8c,local_90);
    local_120 = 0;
    uStack_118 = 0;
    uStack_268 = (ulong)(uint)local_88;
    local_f0 = local_80;
    local_e0 = 0;
    local_dc = 0;
    uStack_108 = SUB168(*param_3,8);
    local_110 = SUB168(*param_3,0);
    local_d8 = 0x7f7fffff;
    local_d0 = 0;
    ppuStack_100 = local_270;
    uStack_f8 = uStack_268;
    FUN_02e5ed60(*param_1,param_3,&local_270,&local_1d0);
    uVar6 = FUN_02e5ee24(&local_1d0);
    if ((uVar6 & 1) == 0) {
      return false;
    }
    uStack_268 = local_a0._8_8_;
    local_270 = local_a0._0_8_;
    if (local_d0 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(local_d0 + 0x38);
    }
    uVar6 = FUN_02e5ee80(param_3,&local_270,uVar8,&local_1d8,&local_1dc);
    if ((uVar6 & 1) != 0) {
      local_1e8 = 0;
      local_1e0 = 0.0;
      local_270 = *(undefined ***)*param_3;
      uStack_268 = CONCAT44(uStack_268._4_4_,*(undefined4 *)(*param_3 + 8));
      uVar6 = FUN_02e4c050(local_1d8,&local_270,&local_90,&local_1e8);
      bVar3 = false;
      if ((uVar6 & 1) == 0) {
        return false;
      }
      puVar7 = (undefined4 *)FUN_02e4d874(lVar11,0);
      if (puVar7 != (undefined4 *)0x0) {
        *(undefined8 *)(puVar7 + 4) = 0;
        *(undefined8 *)(puVar7 + 6) = local_1d8;
        *puVar7 = local_1dc;
        uVar8 = *(undefined8 *)*param_3;
        *(undefined8 *)(param_6 + 0x18) = *(undefined8 *)(*param_3 + 8);
        *(undefined8 *)(param_6 + 0x10) = uVar8;
        uVar19 = *(undefined8 *)(*param_3 + 8);
        uVar8 = *(undefined8 *)*param_3;
        fVar18 = *(float *)((ulong)&local_1e8 | 4);
        *(float *)(param_6 + 0x28) = local_1e0 - (float)uVar19;
        *(float *)(param_6 + 0x2c) = auVar15._12_4_ - (float)((ulong)uVar19 >> 0x20);
        *(float *)(param_6 + 0x20) = (float)local_1e8 - (float)uVar8;
        *(float *)(param_6 + 0x24) = fVar18 - (float)((ulong)uVar8 >> 0x20);
        auVar16._12_4_ = auVar15._12_4_;
        auVar16._0_12_ = *param_2;
        uStack_268 = auVar16._8_8_;
        local_270 = SUB128(*param_2,0);
        iVar4 = FUN_02e5e6c4(auVar16,uVar8,auVar14._0_8_,param_1,&local_270,param_3,param_6,param_5,
                             0,0);
        if (iVar4 != 0) {
          local_208 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_220 = 0;
          local_200 = 0;
          uStack_1f8 = 0;
          local_1f0 = 0;
          local_270 = &PTR_LAB_042a5f70;
          local_230 = 0;
          local_240 = 0;
          local_238 = 0;
          iVar5 = 0;
          if (*(uint *)(param_6 + 0x40) < 9) {
            iVar5 = 8 - *(uint *)(param_6 + 0x40);
          }
          local_280 = *(undefined8 *)*param_3;
          uStack_278 = CONCAT44(uStack_278._4_4_,*(undefined4 *)(*param_3 + 8));
          uVar6 = FUN_02e4cb9c(&local_220,&local_280,local_1d8,&local_78,*param_1,&local_270,iVar5);
          if ((uVar6 & 1) == 0) {
            bVar2 = false;
          }
          else {
            uVar13 = (int)local_230 - 1;
            if (-1 < (int)uVar13) {
              bVar2 = true;
              do {
                puVar9 = (undefined8 *)FUN_02e4d874(lVar11,1);
                if (puVar9 == (undefined8 *)0x0) {
                  bVar3 = false;
                  goto LAB_02e5e67c;
                }
                uVar6 = (ulong)uVar13;
                uVar13 = uVar13 - 1;
                puVar10 = (undefined8 *)(local_238 + uVar6 * 0x20);
                uVar8 = *puVar10;
                uVar19 = puVar10[1];
                uVar1 = puVar10[3];
                puVar9[2] = puVar10[2];
                puVar9[3] = uVar1;
                *puVar9 = uVar8;
                puVar9[1] = uVar19;
              } while (-1 < (int)uVar13);
            }
            auVar14._12_4_ = auVar15._12_4_;
            auVar14._0_12_ = *param_2;
            uStack_278 = auVar14._8_8_;
            local_280 = SUB128(*param_2,0);
            iVar5 = FUN_02e5e6c4(param_1,&local_280,param_3,param_6,param_5,0,0);
            bVar3 = iVar5 == 0;
            bVar2 = true;
          }
LAB_02e5e67c:
          local_270 = &PTR_LAB_042a5f70;
          if (local_238 != 0) {
            local_230 = local_230 & 0xffffffff00000000;
            (*DAT_0442d158)(0xb);
            local_238 = 0;
            local_230 = local_230 & 0xffffffff;
          }
          FUN_02e4c5cc(&local_220);
          if (bVar2) {
            return bVar3;
          }
        }
        return iVar4 == 0;
      }
    }
  }
  else {
    if (iVar4 != 2) {
      return false;
    }
    *(undefined8 *)(param_6 + 0x30) = *(undefined8 *)(param_4 + 0x30);
    FUN_02e622bc((undefined8 *)(param_6 + 0x38),param_4 + 0x38);
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    uVar13 = *(uint *)(param_6 + 0x40);
    *(undefined8 *)(param_6 + 0x18) = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(param_6 + 0x10) = uVar8;
    uVar8 = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_6 + 0x28) = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(param_6 + 0x20) = uVar8;
    if (1 < uVar13) {
      puVar9 = *(undefined8 **)(param_6 + 0x38);
      if (puVar9 < puVar9 + (ulong)uVar13 * 4 + -4) {
        lVar11 = (ulong)uVar13 * 0x20 + -0x21;
        puVar10 = puVar9;
        if (((uint)lVar11 >> 5 & 1) == 0) {
          puVar10 = puVar9 + 4;
          *puVar9 = *puVar10;
          puVar9[1] = puVar9[5];
          puVar9[2] = puVar9[6];
          puVar9[3] = puVar9[7];
        }
        if (lVar11 != 0x1f) {
          do {
            *puVar10 = puVar10[4];
            puVar10[1] = puVar10[5];
            puVar10[2] = puVar10[6];
            puVar10[3] = puVar10[7];
            puVar12 = puVar10 + 8;
            puVar10[4] = *puVar12;
            puVar10[5] = puVar10[9];
            puVar10[6] = puVar10[10];
            puVar10[7] = puVar10[0xb];
            puVar10 = puVar12;
          } while (puVar12 < puVar9 + (ulong)uVar13 * 4 + -4);
        }
        uVar13 = *(uint *)(param_6 + 0x40);
      }
      *(uint *)(param_6 + 0x40) = uVar13 - 1;
      auVar17._12_4_ = auVar15._12_4_;
      auVar17._0_12_ = *param_2;
      uStack_1c8 = auVar17._8_8_;
      local_1d0 = SUB128(*param_2,0);
      iVar4 = FUN_02e5e6c4(param_1,&local_1d0,param_3,param_6,param_5,0,0);
      return iVar4 == 0;
    }
  }
  return false;
}


