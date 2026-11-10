/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffcb50; name: FUN_02ffcb50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02ffcb50(undefined1 param_1 [16],long param_2,undefined8 *param_3,uint param_4,
                float *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  char cVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar27;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  float fVar33;
  undefined8 local_1190;
  undefined8 uStack_1188;
  undefined8 local_1180;
  undefined4 uStack_1178;
  undefined4 uStack_1174;
  undefined8 local_1170;
  undefined4 uStack_1168;
  undefined4 uStack_1164;
  undefined1 local_1160 [16];
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  undefined8 uStack_1138;
  undefined8 local_1130;
  undefined8 local_1128;
  undefined8 local_1120;
  undefined8 uStack_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 local_1100;
  undefined8 uStack_10f8;
  undefined8 local_10f0;
  undefined8 uStack_10e8;
  undefined1 auStack_160 [10];
  undefined1 local_156;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  uVar27 = param_1._8_8_;
  auVar22._0_8_ = param_1._0_8_;
  if (param_4 == 3) {
    iVar14 = FUN_02ffc0cc(param_1,param_2,param_3,param_5);
    return iVar14;
  }
  if (param_4 == 2) {
    uStack_a8 = CONCAT44(*(undefined4 *)(param_3 + 1),*(undefined4 *)(param_3 + 1));
    local_b0 = *param_3;
    local_130 = *(undefined8 *)((long)param_3 + 0xc);
    uStack_128 = CONCAT44(*(undefined4 *)((long)param_3 + 0x14),
                          *(undefined4 *)((long)param_3 + 0x14));
    local_1120 = 0;
    uStack_1118 = 0;
    local_1110 = 0;
    uStack_1108 = 0;
    local_1130 = (undefined8 *)0x0;
    local_1100 = 0;
    uStack_10f8 = 0;
    local_10f0 = 0;
    uStack_10e8 = 0;
    iVar14 = FUN_0328fa78(param_1,&local_b0,&local_130,&local_1130);
    if (-1 < iVar14) {
      *(undefined8 *)(param_5 + 6) = uStack_1118;
      *(undefined8 *)(param_5 + 4) = local_1120;
      param_5[1] = local_1130._4_4_;
      *param_5 = (float)local_1130;
      local_1180 = local_1100;
      uStack_1178 = (undefined4)uStack_10f8;
      uStack_1174 = (undefined4)((ulong)uStack_10f8 >> 0x20);
      local_1170 = local_10f0;
      uStack_1168 = (undefined4)uStack_10e8;
      uStack_1164 = (undefined4)((ulong)uStack_10e8 >> 0x20);
      local_1190 = local_1110;
      uStack_1188 = uStack_1108;
      FUN_032911c0(&local_1190,&local_100);
      auVar29._8_8_ = uStack_1188;
      auVar29._0_8_ = local_1190;
      auVar3._8_4_ = uStack_1178;
      auVar3._0_8_ = local_1180;
      *(undefined8 *)(param_5 + 10) = uStack_1188;
      *(undefined8 *)(param_5 + 8) = local_1190;
      puVar10 = PTR_DAT_043723a0;
      auVar3._12_4_ = uStack_1174;
      auVar29 = auVar29 ^ (auVar29 ^ auVar3) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x20);
      *(long *)(param_5 + 10) = auVar29._8_8_;
      *(long *)(param_5 + 8) = auVar29._0_8_;
      auVar8._8_4_ = uStack_1168;
      auVar8._0_8_ = local_1170;
      auVar20._0_12_ =
           auVar29._0_12_ ^
           (auVar29._0_12_ ^ auVar8) & SUB1612(*(undefined1 (*) [16])(puVar10 + 0x40),0);
      auVar20._12_4_ = (float)local_1130;
      *(long *)(param_5 + 10) = auVar20._8_8_;
      *(long *)(param_5 + 8) = auVar20._0_8_;
      FUN_032cb060(param_5 + 0xc,&local_100);
      fVar19 = *(float *)(param_2 + 0x20);
      if (fVar19 < 0.0) {
        fVar19 = -(*param_5 * fVar19);
      }
      fVar18 = *(float *)(param_2 + 0x1c);
      param_5[1] = fVar19;
      fVar18 = fVar18 * fVar19;
      uVar28 = *(undefined8 *)(param_5 + 10);
      uVar27 = *(undefined8 *)(param_5 + 8);
      param_5[10] = (float)uVar28 * fVar18;
      param_5[0xb] = (float)((ulong)uVar28 >> 0x20) * fVar18;
      param_5[8] = (float)uVar27 * fVar18;
      param_5[9] = (float)((ulong)uVar27 >> 0x20) * fVar18;
    }
    return iVar14;
  }
  fVar19 = param_1._0_4_;
  if (param_4 == 1) {
    if (fVar19 <= 0.0) {
      return -0x7ffbfe00;
    }
    uVar27 = *param_3;
    uVar32 = *(uint *)(param_3 + 1);
    fVar18 = fVar19 * 4.1887903 * fVar19 * fVar19;
    *param_5 = fVar18;
    fVar33 = *(float *)(param_2 + 0x20);
    fVar18 = -(fVar18 * fVar33);
    if (0.0 <= fVar33) {
      fVar18 = fVar33;
    }
    param_5[1] = fVar18;
    fVar19 = *(float *)(param_2 + 0x1c) * fVar19 * fVar19 * 0.4 * fVar18;
    *(ulong *)(param_5 + 6) = (ulong)uVar32;
    *(undefined8 *)(param_5 + 4) = uVar27;
    param_5[10] = fVar19;
    param_5[0xb] = fVar19;
    param_5[8] = fVar19;
    param_5[9] = fVar19;
    uVar27 = _DAT_0388a130;
    *(undefined8 *)(param_5 + 0xe) = _UNK_0388a138;
    *(undefined8 *)(param_5 + 0xc) = uVar27;
    return 0;
  }
  FUN_001b1d70(&local_130);
  FUN_001b1d20(auStack_160);
  puVar10 = PTR_PTR_0434a080;
  local_156 = 1;
  local_1130 = &local_1120;
  local_1128._0_4_ = 0;
  local_1128._4_4_ = 0x800000fc;
  if ((int)param_4 < 0xfd) {
    if (0 < (int)param_4) goto LAB_02ffcdb8;
    bVar7 = false;
  }
  else {
    local_1130 = (undefined8 *)
                 FUN_032bd1d4(PTR_PTR_0434a080,param_4,0x10,local_1130,0,(ulong)&local_1130 | 0xc);
LAB_02ffcdb8:
    uVar17 = (ulong)param_4;
    puVar15 = param_3 + 1;
    do {
      uVar12 = (uint)local_1128;
      puVar11 = local_1130;
      uVar2 = *(undefined4 *)puVar15;
      uVar28 = puVar15[-1];
      uVar32 = (uint)local_1128 + 1;
      if ((int)(local_1128._4_4_ & 0x3fffffff) <= (int)(uint)local_1128) {
        if (0x3ffffffe < (int)(uint)local_1128) {
          FUN_032bd0a8(uVar32);
        }
        uVar16 = (local_1128._4_4_ & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar16) {
          uVar16 = 0x3fffffff;
        }
        uVar1 = uVar32;
        if ((int)uVar32 <= (int)uVar16) {
          uVar1 = uVar16;
        }
        local_1130 = (undefined8 *)
                     FUN_032bd1d4(puVar10,uVar1,0x10,puVar11,uVar12,(ulong)&local_1130 | 0xc);
      }
      uVar17 = uVar17 - 1;
      puVar15 = (undefined8 *)((long)puVar15 + 0xc);
      (local_1130 + (long)(int)(uint)local_1128 * 2)[1] = CONCAT44(uVar2,uVar2);
      local_1130[(long)(int)(uint)local_1128 * 2] = uVar28;
      local_1128._0_4_ = uVar32;
    } while (uVar17 != 0);
    bVar7 = true;
  }
  iVar14 = -0x7ffbfe00;
  uVar17 = FUN_001b2c3c(&local_130,local_1130,param_4,auStack_160);
  switch(uVar17 & 0xffffffff) {
  case 0:
    if (fVar19 <= 0.0) break;
    uVar27 = *param_3;
    uVar32 = *(uint *)(param_3 + 1);
    fVar18 = fVar19 * 4.1887903 * fVar19 * fVar19;
    *param_5 = fVar18;
    fVar33 = *(float *)(param_2 + 0x20);
    fVar18 = -(fVar18 * fVar33);
    if (0.0 <= fVar33) {
      fVar18 = fVar33;
    }
    param_5[1] = fVar18;
    fVar19 = *(float *)(param_2 + 0x1c) * fVar19 * fVar19 * 0.4 * fVar18;
    *(ulong *)(param_5 + 6) = (ulong)uVar32;
    *(undefined8 *)(param_5 + 4) = uVar27;
    param_5[10] = fVar19;
    param_5[0xb] = fVar19;
    param_5[8] = fVar19;
    param_5[9] = fVar19;
    uVar27 = _DAT_0388a130;
    uVar28 = _UNK_0388a138;
    goto LAB_02ffcf60;
  case 1:
    auVar21._8_4_ = 0x7f7fffee;
    auVar21._0_8_ = 0x7f7fffee7f7fffee;
    auVar21._12_4_ = 0x7f7fffee;
    auVar30._8_4_ = 0xff7fffee;
    auVar30._0_8_ = 0xff7fffeeff7fffee;
    auVar30._12_4_ = 0xff7fffee;
    uStack_1148 = auVar21._8_8_;
    local_1150 = 0x7f7fffee7f7fffee;
    uStack_1138 = auVar30._8_8_;
    uStack_1140 = 0xff7fffeeff7fffee;
    if (bVar7) {
      uVar17 = (ulong)param_4;
      param_3 = param_3 + 1;
      do {
        uVar2 = *(undefined4 *)param_3;
        uVar17 = uVar17 - 1;
        puVar15 = param_3 + -1;
        param_3 = (undefined8 *)((long)param_3 + 0xc);
        uVar28 = CONCAT44(uVar2,uVar2);
        auVar5._8_8_ = uVar28;
        auVar5._0_8_ = *puVar15;
        auVar21 = NEON_fmin(auVar21,auVar5,4);
        local_1150 = auVar21._0_8_;
        auVar6._8_8_ = uVar28;
        auVar6._0_8_ = *puVar15;
        auVar30 = NEON_fmax(auVar30,auVar6,4);
      } while (uVar17 != 0);
      uStack_1148 = auVar21._8_8_;
      uStack_1138 = auVar30._8_8_;
      uStack_1140 = auVar30._0_8_;
    }
    auVar22._8_8_ = uVar27;
    local_100 = 0;
    local_f0 = 0;
    uStack_ef = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    iVar14 = FUN_0328fa78(auVar22,&uStack_1140,&local_1150,&local_100);
    if (-1 < iVar14) {
      *(undefined8 *)(param_5 + 6) = uStack_e8;
      *(ulong *)(param_5 + 4) = CONCAT71(uStack_ef,local_f0);
      param_5[1] = local_100._4_4_;
      *param_5 = (float)local_100;
      local_a0 = local_d0;
      uStack_98 = (undefined4)uStack_c8;
      uStack_94 = (undefined4)((ulong)uStack_c8 >> 0x20);
      local_90 = local_c0;
      uStack_88 = (undefined4)uStack_b8;
      uStack_84 = (undefined4)((ulong)uStack_b8 >> 0x20);
      local_b0 = local_e0;
      uStack_a8 = uStack_d8;
      FUN_032911c0(&local_b0,&local_1190);
      auVar31._8_8_ = uStack_a8;
      auVar31._0_8_ = local_b0;
      auVar4._8_4_ = uStack_98;
      auVar4._0_8_ = local_a0;
      *(undefined8 *)(param_5 + 10) = uStack_a8;
      *(undefined8 *)(param_5 + 8) = local_b0;
      puVar10 = PTR_DAT_043723a0;
      auVar4._12_4_ = uStack_94;
      auVar31 = auVar31 ^ (auVar31 ^ auVar4) & *(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x20);
      *(long *)(param_5 + 10) = auVar31._8_8_;
      *(long *)(param_5 + 8) = auVar31._0_8_;
      auVar9._8_4_ = uStack_88;
      auVar9._0_8_ = local_90;
      auVar23._0_12_ =
           auVar31._0_12_ ^
           (auVar31._0_12_ ^ auVar9) & SUB1612(*(undefined1 (*) [16])(puVar10 + 0x40),0);
      auVar23._12_4_ = (float)local_100;
      *(long *)(param_5 + 10) = auVar23._8_8_;
      *(long *)(param_5 + 8) = auVar23._0_8_;
      FUN_032cb060(param_5 + 0xc,&local_1190);
      fVar19 = *(float *)(param_2 + 0x20);
      if (fVar19 < 0.0) {
        fVar19 = -(*param_5 * fVar19);
      }
      fVar18 = *(float *)(param_2 + 0x1c);
      param_5[1] = fVar19;
      fVar18 = fVar18 * fVar19;
      uVar28 = *(undefined8 *)(param_5 + 10);
      uVar27 = *(undefined8 *)(param_5 + 8);
      param_5[10] = (float)uVar28 * fVar18;
      param_5[0xb] = (float)((ulong)uVar28 >> 0x20) * fVar18;
      param_5[8] = (float)uVar27 * fVar18;
      param_5[9] = (float)((ulong)uVar27 >> 0x20) * fVar18;
    }
    break;
  case 2:
    if (param_4 == 4) {
      auVar24._8_8_ = uVar27;
      auVar24._0_8_ = auVar22._0_8_;
      iVar14 = FUN_02ffc23c(auVar24,uVar17,param_3,param_5);
    }
    else {
      auVar26._8_8_ = uVar27;
      auVar26._0_8_ = auVar22._0_8_;
      iVar14 = FUN_02ffc47c(auVar26,param_2,param_3,param_4,param_5);
    }
    break;
  case 3:
    if (0.0 < fVar19) {
      FUN_001b1d4c(&local_100);
      auVar25._8_8_ = uVar27;
      auVar25._0_8_ = auVar22._0_8_;
      local_f0 = 1;
      FUN_001bb1fc(auVar25,&local_130,&local_100);
    }
    cVar13 = FUN_001bed24(&local_130);
    if (cVar13 == '\0') break;
    FUN_001befa4(&local_130,&local_1190,&local_e0);
    uStack_e8 = local_1160._8_8_;
    local_f0 = local_1160[0];
    uStack_ef = local_1160._1_7_;
    FUN_032cb060(&local_d0,&local_1190);
    fVar19 = (float)FUN_001bee64(&local_130);
    fVar18 = *(float *)(param_2 + 0x20);
    if (fVar18 < 0.0) {
      fVar18 = -(fVar18 * fVar19);
    }
    local_100 = CONCAT44(fVar18,fVar19);
    fVar18 = fVar18 * *(float *)(param_2 + 0x1c);
    local_e0._0_4_ = (float)local_e0 * fVar18;
    local_e0._4_4_ = local_e0._4_4_ * fVar18;
    uStack_d8._0_4_ = (float)uStack_d8 * fVar18;
    uStack_d8._4_4_ = uStack_d8._4_4_ * fVar18;
    *(undefined8 *)param_5 = local_100;
    *(undefined8 *)(param_5 + 2) = uStack_f8;
    *(undefined8 *)(param_5 + 6) = uStack_e8;
    *(ulong *)(param_5 + 4) = CONCAT71(uStack_ef,local_f0);
    param_5[10] = (float)uStack_d8;
    param_5[0xb] = uStack_d8._4_4_;
    param_5[8] = (float)local_e0;
    param_5[9] = local_e0._4_4_;
    uVar27 = local_d0;
    uVar28 = uStack_c8;
LAB_02ffcf60:
    iVar14 = 0;
    *(undefined8 *)(param_5 + 0xe) = uVar28;
    *(undefined8 *)(param_5 + 0xc) = uVar27;
  }
  uVar32 = local_1128._4_4_;
  local_1128 = (ulong)local_1128._4_4_ << 0x20;
  if ((-1 < (int)uVar32) && (local_1130 != (undefined8 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_1130,0x10,uVar32 & 0x3fffffff);
  }
  FUN_001b1ed4(&local_130);
  return iVar14;
}


