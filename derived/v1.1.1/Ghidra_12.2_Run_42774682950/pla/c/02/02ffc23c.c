/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffc23c; name: FUN_02ffc23c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02ffc23c(undefined1 param_1 [16],undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar10;
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0 [2];
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
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_1e0 = local_1d0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  uVar10 = param_1._8_8_;
  local_1d8 = -0x7ffffffdfffffffe;
  local_1d0[0] = 0;
  local_140 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_178 = _UNK_03889a88;
  local_180 = _DAT_03889a80;
  uStack_168 = DAT_0388a148;
  uStack_170 = DAT_0388a140;
  uVar8 = 0x80040200;
  local_190 = 0;
  uStack_188 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_158 = _UNK_03888d18;
  local_160 = _DAT_03888d10;
  uStack_148 = _UNK_0388a138;
  uStack_150 = _DAT_0388a130;
  uStack_e8 = _UNK_03889a88;
  local_f0 = _DAT_03889a80;
  uStack_d8 = DAT_0388a148;
  uStack_e0 = DAT_0388a140;
  uStack_c8 = _UNK_03888d18;
  local_d0 = _DAT_03888d10;
  uStack_b8 = _UNK_0388a138;
  uStack_c0 = _DAT_0388a130;
  local_230 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uStack_228 = CONCAT44(uVar1,uVar1);
  uStack_78 = CONCAT44(*(undefined4 *)((long)param_3 + 0x14),*(undefined4 *)((long)param_3 + 0x14));
  local_80 = *(undefined8 *)((long)param_3 + 0xc);
  local_b0 = param_3[3];
  uVar1 = *(undefined4 *)(param_3 + 4);
  uStack_a8 = CONCAT44(uVar1,uVar1);
  iVar7 = FUN_0328f204(ZEXT816(0x3f800000),param_1,&local_230,&local_80,&local_b0);
  if (-1 < iVar7) {
    uVar1 = *(undefined4 *)(param_3 + 4);
    uStack_228 = CONCAT44(uVar1,uVar1);
    local_230 = param_3[3];
    uStack_78 = CONCAT44(*(undefined4 *)((long)param_3 + 0x2c),*(undefined4 *)((long)param_3 + 0x2c)
                        );
    local_80 = *(undefined8 *)((long)param_3 + 0x24);
    local_b0 = *param_3;
    uVar1 = *(undefined4 *)(param_3 + 1);
    uStack_a8 = CONCAT44(uVar1,uVar1);
    auVar11._8_8_ = uVar10;
    auVar11._0_8_ = param_1._0_8_;
    iVar7 = FUN_0328f204(ZEXT816(0x3f800000),auVar11,&local_230,&local_80,&local_b0,local_1e0 + 0x12
                        );
    if (-1 < iVar7) {
      local_230 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      local_1f0 = 0;
      uStack_1e8 = 0;
      FUN_03290038(&local_1e0,&local_230);
      *(undefined8 *)(param_4 + 6) = uStack_218;
      *(undefined8 *)(param_4 + 4) = local_220;
      param_4[1] = local_230._4_4_;
      *param_4 = (float)local_230;
      local_a0 = local_200;
      uStack_98 = uStack_1f8;
      local_90 = local_1f0;
      uStack_88 = uStack_1e8;
      local_b0 = local_210;
      uStack_a8 = uStack_208;
      FUN_032911c0(&local_b0,&local_80);
      auVar12._8_8_ = uStack_a8;
      auVar12._0_8_ = local_b0;
      auVar2._8_8_ = uStack_98;
      auVar2._0_8_ = local_a0;
      *(undefined8 *)(param_4 + 10) = uStack_a8;
      *(undefined8 *)(param_4 + 8) = local_b0;
      puVar4 = PTR_DAT_043723a0;
      auVar12 = auVar12 ^ (auVar12 ^ auVar2) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x20);
      *(long *)(param_4 + 10) = auVar12._8_8_;
      *(long *)(param_4 + 8) = auVar12._0_8_;
      auVar3._8_8_ = uStack_88;
      auVar3._0_8_ = local_90;
      auVar9._0_12_ =
           auVar12._0_12_ ^
           (auVar12._0_12_ ^ auVar3._0_12_) & SUB1612(*(undefined1 (*) [16])(puVar4 + 0x40),0);
      auVar9._12_4_ = (float)local_230;
      *(long *)(param_4 + 10) = auVar9._8_8_;
      *(long *)(param_4 + 8) = auVar9._0_8_;
      FUN_032cb060(param_4 + 0xc,&local_80);
      if ((float)local_230 != 0.0) {
        uVar8 = 0;
      }
    }
  }
  lVar5 = local_1d8;
  uVar6 = local_1d8._4_4_;
  local_1d8 = (ulong)local_1d8._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_1e0 != (undefined8 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_1e0,0x90,uVar6 & 0x3fffffff);
  }
  return uVar8;
}


