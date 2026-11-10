/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c16a0; name: FUN_031c16a0
 */


undefined8
FUN_031c16a0(long param_1,undefined1 (*param_2) [16],long *param_3,uint param_4,int *param_5,
            float *param_6)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  bool bVar13;
  long lVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar23 [12];
  float fVar29;
  undefined1 auVar24 [16];
  undefined8 uVar30;
  int iVar35;
  int iVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar34;
  float fVar36;
  undefined1 auVar33 [16];
  int iVar38;
  uint uVar39;
  undefined8 uVar40;
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined8 uVar41;
  int iVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 uVar49;
  int iVar53;
  undefined1 auVar50 [16];
  int iVar52;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar56;
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  int local_2b8;
  int iStack_2b4;
  ulong local_2a8;
  float local_2a0;
  float fStack_29c;
  int local_284;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float local_240;
  float fStack_23c;
  float fStack_238;
  undefined6 uStack_228;
  short local_222;
  undefined6 uStack_220;
  uint local_218;
  undefined4 local_214;
  undefined8 local_210;
  uint local_208 [2];
  long local_200;
  undefined1 *local_1f8;
  uint *local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined6 uStack_1a8;
  short local_1a2;
  undefined6 uStack_1a0;
  uint local_198;
  undefined4 local_194;
  uint local_190;
  undefined4 uStack_18c;
  undefined6 *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined6 *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  uint local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long local_98;
  
  FUN_033299e0(0xd27d5388);
  local_2a0 = 0.0;
  if ((*(int *)param_2[2] == -1) || (*(int *)(param_2[2] + 4) == -1)) {
    local_284 = 0;
joined_r0x031c2058:
    if (param_3 != (long *)0x0) {
      *(undefined4 *)(param_3 + 1) = 0;
    }
    if (param_5 != (int *)0x0) {
      *param_5 = local_284;
    }
    if (param_6 != (float *)0x0) {
      *param_6 = local_2a0;
    }
    return 0;
  }
  uVar40 = *(undefined8 *)*param_2;
  uVar30 = *(undefined8 *)(*param_2 + 8);
  auVar46 = param_2[1];
  lVar19 = tpidr_el0;
  lVar11 = *(long *)(lVar19 + 0x38d490);
  if (lVar11 == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar19 + 0x38d490) = lVar11;
  }
  lVar19 = *(long *)(lVar11 + 0x10);
  if (lVar19 != 0) {
    FUN_032d5af0(lVar19,"TtlosCheck",10);
  }
  auVar44._8_4_ = 0x7f7fffee;
  auVar44._0_8_ = 0x7f7fffee7f7fffee;
  auVar44._12_4_ = 0x7f7fffee;
  local_150 = CONCAT44(local_150._4_4_,0xffffffff);
  local_148 = (undefined6 *)0x0;
  local_110 = 0xffffffff;
  local_108 = (undefined8 *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_b8 = auVar44._8_8_;
  local_c0 = 0x7f7fffee7f7fffee;
  uStack_a8 = 0xff7fffee;
  uStack_a4 = 0xff7fffee;
  local_b0 = 0xff7fffeeff7fffee;
  local_190 = *(uint *)param_2[2];
  local_2a8 = (ulong)(local_190 >> 0x16);
  lVar11 = *(long *)(*(long *)(param_1 + 0x38) + local_2a8 * 0xf0 + 8);
  lVar14 = *(long *)(lVar11 + 0x20);
  puVar16 = (undefined8 *)(*(long *)(lVar14 + 0x18) + ((ulong)local_190 & 0x3fffff) * 0x18);
  uStack_1a0 = (undefined6)((ulong)*(undefined8 *)((long)puVar16 + 6) >> 0x10);
  uStack_1a8 = (undefined6)*puVar16;
  local_1a2 = (short)((ulong)*puVar16 >> 0x30);
  local_198 = *(uint *)(puVar16 + 2);
  local_194 = *(undefined4 *)((long)puVar16 + 0x14);
  if (*(int *)(lVar14 + 0x48) == 0) {
    local_2b8 = -1;
    iStack_2b4 = 0;
  }
  else {
    iVar38 = *(int *)(*(long *)(lVar14 + 0x40) + ((ulong)local_190 & 0x3fffff) * 4);
    if (iVar38 == -1) {
      local_2b8 = -1;
      iStack_2b4 = 0;
    }
    else {
      piVar2 = (int *)(*(long *)(lVar14 + 0x50) + (long)iVar38 * 8);
      local_2b8 = *piVar2;
      iStack_2b4 = piVar2[1];
    }
  }
  local_188 = &uStack_1a8;
  uStack_178 = SUB168(*param_2,8);
  local_180 = SUB168(*param_2,0);
  local_98 = lVar19;
  FUN_03159b7c(lVar11,&uStack_1a8,&local_170);
  uVar17 = *(uint *)param_2[2];
  local_2a0 = 0.0;
  fStack_29c = 0.0;
  if (uVar17 == *(uint *)(param_2[2] + 4)) {
    local_260 = auVar46._0_4_;
    fStack_25c = auVar46._4_4_;
    fStack_258 = auVar46._8_4_;
    local_250 = (float)uVar40;
    fStack_24c = (float)((ulong)uVar40 >> 0x20);
    fStack_248 = (float)uVar30;
    plVar9 = *(long **)param_2[4];
    fVar20 = (local_250 - local_260) * (local_250 - local_260);
    fVar25 = (fStack_24c - fStack_25c) * (fStack_24c - fStack_25c);
    fVar27 = (fStack_248 - fStack_258) * (fStack_248 - fStack_258);
    fVar21 = fVar20 + fVar25 + fVar27;
    fVar27 = fVar20 + fVar25 + fVar27;
    uVar40 = CONCAT44(fVar27,fVar21);
    uVar30 = NEON_frsqrte(uVar40,4);
    fVar20 = (float)uVar30;
    fVar25 = (float)((ulong)uVar30 >> 0x20);
    uVar30 = NEON_frsqrts(uVar40,CONCAT44(fVar25 * fVar25,fVar20 * fVar20),4);
    fVar20 = fVar20 * (float)uVar30;
    fVar25 = fVar25 * (float)((ulong)uVar30 >> 0x20);
    uVar40 = NEON_frsqrts(uVar40,CONCAT44(fVar25 * fVar25,fVar20 * fVar20),4);
    iVar38 = -(uint)(fVar21 <= 0.0);
    iVar48 = -(uint)(fVar27 <= 0.0);
    fVar21 = fVar21 * (float)uVar40 * fVar20;
    fVar27 = fVar27 * (float)((ulong)uVar40 >> 0x20) * fVar25;
    uVar40 = CONCAT17((byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                      CONCAT16((byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                               CONCAT15((byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar48 >> 8),
                                        CONCAT14(SUB41(fVar27,0) & ~(byte)iVar48,
                                                 CONCAT13((byte)((uint)fVar21 >> 0x18) &
                                                          ~(byte)((uint)iVar38 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar21 >> 0x10) &
                                                                   ~(byte)((uint)iVar38 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar21 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar38 >> 8),SUB41(fVar21,0) & ~(byte)iVar38))))))
                     );
    if ((plVar9 == (long *)0x0) && (*(long *)(param_2[3] + 8) == 0)) {
      uVar17 = *(uint *)(param_2[2] + 4);
    }
    else {
      local_150 = CONCAT44(uStack_18c,local_190);
      local_110 = 0xffffffff;
      local_108 = (undefined8 *)0x0;
      local_1b8 = &local_190;
      puVar1 = param_2[2] + 0xc;
      local_148 = local_188;
      local_1b0 = 0x52;
      uStack_138 = SUB168(param_2[1],8);
      local_140 = SUB168(param_2[1],0);
      uStack_128 = uStack_168;
      local_130 = local_170;
      uStack_118 = uStack_158;
      local_120 = local_160;
      local_1c8 = param_1;
      local_1c0 = puVar1;
      if ((plVar9 != (long *)0x0) &&
         (uVar10 = (**(code **)(*plVar9 + 0x28))(plVar9,&local_1c8), (uVar10 & 1) == 0)) {
        local_284 = 0;
        local_2a0 = 0.0;
joined_r0x031c1dd0:
        bVar13 = true;
joined_r0x031c2014:
        if (lVar19 != 0) {
          FUN_032d5b34(lVar19,&DAT_0390f40e);
        }
        if (!bVar13) {
          if (param_3 != (long *)0x0) {
            uVar17 = *(uint *)((long)param_3 + 0xc) & 0x3fffffff;
            iVar38 = (int)param_3[1];
            if ((iVar38 < (int)uVar17) || ((param_4 & 1) == 0)) {
              lVar19 = *param_3;
              iVar48 = iVar38 + 1;
              if ((int)uVar17 <= iVar38) {
                lVar19 = FUN_0315ac2c(PTR_PTR_0434a080,iVar48);
                *param_3 = lVar19;
                iVar38 = (int)param_3[1];
              }
              *(undefined4 *)(lVar19 + (long)iVar38 * 4) = *(undefined4 *)(param_2[2] + 4);
              *(int *)(param_3 + 1) = iVar48;
            }
          }
          if (param_5 != (int *)0x0) {
            *param_5 = local_284;
          }
          if (param_6 != (float *)0x0) {
            *param_6 = local_2a0;
          }
          return 1;
        }
        goto joined_r0x031c2058;
      }
      plVar9 = *(long **)(param_2[3] + 8);
      if (plVar9 != (long *)0x0) {
        local_1f0 = &local_190;
        local_1e8 = 0x52;
        local_1e0 = 0;
        local_1d0 = 0;
        local_200 = param_1;
        local_1f8 = puVar1;
        local_1d8 = uVar40;
        uVar40 = (**(code **)(*plVar9 + 0x28))(plVar9,&local_200);
      }
      uVar17 = *(uint *)param_2[2];
    }
    local_2a0 = (float)uVar40 + 0.0;
    fStack_29c = (float)((ulong)uVar40 >> 0x20) + 0.0;
  }
  auVar44 = ZEXT816(0x3f800000);
  uVar40 = NEON_fmov(0x3f800000,4);
  local_284 = 0;
  auVar46 = *param_2;
  fVar20 = *(float *)param_2[1];
  fVar21 = *(float *)(param_2[1] + 4);
  fVar25 = *(float *)(param_2[1] + 8);
  fVar27 = *(float *)(param_2[1] + 0xc);
  fVar22 = auVar46._0_4_ - fVar20;
  fVar26 = auVar46._4_4_ - fVar21;
  fVar28 = auVar46._8_4_ - fVar25;
  puVar1 = param_2[2] + 0xc;
  iVar38 = -(uint)(fVar22 == 0.0);
  iVar48 = -(uint)(fVar26 == 0.0);
  iVar35 = -(uint)(fVar28 == 0.0);
  iVar37 = -(uint)(auVar44._0_4_ == 0.0);
  fVar22 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                           CONCAT12((byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                    CONCAT11((byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar38 >> 8),
                                             SUB41(fVar22,0) & ~(byte)iVar38)));
  auVar23._0_8_ =
       CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                         CONCAT15((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar48 >> 8),
                                  CONCAT14(SUB41(fVar26,0) & ~(byte)iVar48,fVar22))));
  auVar23[8] = SUB41(fVar28,0) & ~(byte)iVar35;
  auVar23[9] = (byte)((uint)fVar28 >> 8) & ~(byte)((uint)iVar35 >> 8);
  auVar23[10] = (byte)((uint)fVar28 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10);
  auVar23[0xb] = (byte)((uint)fVar28 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18);
  auVar32._12_2_ = 0;
  auVar32._0_12_ = auVar23;
  auVar32[0xe] = auVar44[2] & ~(byte)((uint)iVar37 >> 0x10);
  auVar32[0xf] = auVar44[3] & ~(byte)((uint)iVar37 >> 0x18);
  auVar44 = NEON_frecpe(auVar32,4);
  iVar38 = -(uint)(fVar22 == 0.0);
  iVar48 = -(uint)((float)((ulong)auVar23._0_8_ >> 0x20) == 0.0);
  iVar35 = -(uint)(auVar23._8_4_ == 0.0);
  iVar37 = -(uint)(auVar32._12_4_ == 0.0);
  auVar31[0] = ~(byte)iVar38;
  auVar31[1] = ~(byte)((uint)iVar38 >> 8);
  auVar31[2] = ~(byte)((uint)iVar38 >> 0x10);
  auVar31[3] = ~(byte)((uint)iVar38 >> 0x18);
  auVar31[4] = ~(byte)iVar48;
  auVar31[5] = ~(byte)((uint)iVar48 >> 8);
  auVar31[6] = ~(byte)((uint)iVar48 >> 0x10);
  auVar31[7] = ~(byte)((uint)iVar48 >> 0x18);
  auVar31[8] = ~(byte)iVar35;
  auVar31[9] = ~(byte)((uint)iVar35 >> 8);
  auVar31[10] = ~(byte)((uint)iVar35 >> 0x10);
  auVar31[0xb] = ~(byte)((uint)iVar35 >> 0x18);
  auVar31[0xc] = ~(byte)iVar37;
  auVar31[0xd] = ~(byte)((uint)iVar37 >> 8);
  auVar31[0xe] = ~(byte)((uint)iVar37 >> 0x10);
  auVar31[0xf] = ~(byte)((uint)iVar37 >> 0x18);
  auVar50 = NEON_frecps(auVar32,auVar44,4);
  uVar18 = 0xffffffff;
  auVar45._0_4_ = auVar44._0_4_ * auVar50._0_4_;
  auVar45._4_4_ = auVar44._4_4_ * auVar50._4_4_;
  auVar45._8_4_ = auVar44._8_4_ * auVar50._8_4_;
  auVar45._12_4_ = auVar44._12_4_ * auVar50._12_4_;
  auVar44 = NEON_frecps(auVar32,auVar45,4);
  auVar55._0_4_ = auVar45._0_4_ * auVar44._0_4_;
  auVar55._4_4_ = auVar45._4_4_ * auVar44._4_4_;
  auVar55._8_4_ = auVar45._8_4_ * auVar44._8_4_;
  auVar55._12_4_ = auVar45._12_4_ * auVar44._12_4_;
  auVar50._8_4_ = 0x7f7fffee;
  auVar50._0_8_ = 0x7f7fffee7f7fffee;
  auVar50._12_4_ = 0x7f7fffee;
  auVar50 = auVar50 ^ (auVar50 ^ auVar55) & auVar31;
LAB_031c19c0:
  if (uVar17 == *(uint *)(param_2[2] + 4)) {
    plVar9 = *(long **)param_2[4];
    if (plVar9 != (long *)0x0) {
      local_150 = CONCAT44(local_150._4_4_,0xffffffff);
      local_148 = (undefined6 *)0x0;
      local_1f0 = &local_190;
      uStack_138 = SUB168(param_2[1],8);
      local_140 = SUB168(param_2[1],0);
      local_110 = 0xffffffff;
      local_108 = (undefined8 *)0x0;
      local_1e8 = 0x42;
      local_200 = param_1;
      local_1f8 = puVar1;
      uVar10 = (**(code **)(*plVar9 + 0x28))(plVar9,&local_200);
      if ((uVar10 & 1) == 0) goto LAB_031c200c;
    }
    bVar13 = false;
    goto joined_r0x031c2014;
  }
  if (*(int *)(param_2[2] + 8) <= local_284) {
LAB_031c200c:
    bVar13 = true;
    goto joined_r0x031c2014;
  }
  local_284 = local_284 + 1;
  lVar11 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)local_2a8 * 0xf0 + 8);
  local_1c8 = CONCAT44(local_198 + (int)local_1a2,local_198);
  local_1c0 = (undefined1 *)CONCAT44(iStack_2b4 + local_2b8,local_2b8);
  local_1b8 = (uint *)((ulong)local_198 << 0x20);
  if ((local_1a2 != 0) ||
     (local_1b8 = (uint *)CONCAT44(local_2b8,1), local_2b8 != iStack_2b4 + local_2b8)) {
    auVar32 = NEON_fmin(auVar46,param_2[1],4);
    auVar44 = NEON_fmax(auVar46,param_2[1],4);
    fStack_238 = auVar32._8_4_;
    local_240 = auVar32._0_4_;
    fStack_23c = auVar32._4_4_;
    do {
      FUN_031c2108(local_208,&local_1c8);
      uVar8 = local_208[0];
      lVar12 = *(long *)(lVar11 + 0x20);
      iVar38 = *(int *)(lVar12 + 0x30);
      lVar14 = 0x28;
      if (iVar38 <= (int)local_208[0]) {
        lVar14 = 0x60;
      }
      iVar48 = 0;
      if (iVar38 <= (int)local_208[0]) {
        iVar48 = iVar38;
      }
      local_210 = *(ulong *)(*(long *)(lVar12 + lVar14) + (long)(int)(local_208[0] - iVar48) * 8);
      if (((uint)local_210 >> 0x14 & 1) == 0) {
        uVar15 = (uint)(local_210 >> 0x20);
        uVar39 = 0xffffffff;
        if (uVar15 != 0xffffffff) {
          uVar39 = uVar15 & 0x3fffff | *(int *)(lVar12 + 0x94) << 0x16;
        }
        if ((local_210 & 0x400000) == 0) {
          uVar15 = uVar39;
        }
        local_210 = CONCAT44(uVar15,(uint)local_210);
        if (uVar15 != uVar18) {
          lVar14 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar15 >> 0x16) * 0xf0 + 8);
          puVar16 = (undefined8 *)
                    (*(long *)(*(long *)(lVar14 + 0x20) + 0x18) + (ulong)(uVar15 & 0x3fffff) * 0x18)
          ;
          uStack_220 = (undefined6)((ulong)*(undefined8 *)((long)puVar16 + 6) >> 0x10);
          uStack_228 = (undefined6)*puVar16;
          local_222 = (short)((ulong)*puVar16 >> 0x30);
          local_218 = *(uint *)(puVar16 + 2);
          local_214 = *(undefined4 *)((long)puVar16 + 0x14);
          FUN_03159b7c(lVar14,&uStack_228,&local_130);
          auVar7._8_8_ = uStack_118;
          auVar7._0_8_ = local_120;
          local_250 = auVar44._0_4_;
          fStack_24c = auVar44._4_4_;
          fStack_248 = auVar44._8_4_;
          fVar22 = (float)local_120;
          iVar38 = -(uint)(local_240 <= fVar22);
          fVar26 = (float)((ulong)local_120 >> 0x20);
          iVar48 = -(uint)(fStack_23c <= fVar26);
          fVar28 = (float)uStack_118;
          iVar35 = -(uint)(fStack_238 <= fVar28);
          auVar6._8_8_ = uStack_128;
          auVar6._0_8_ = local_130;
          fVar29 = (float)local_130;
          iVar37 = -(uint)(fVar29 <= local_250);
          fVar34 = (float)((ulong)local_130 >> 0x20);
          iVar52 = -(uint)(fVar34 <= fStack_24c);
          fVar36 = (float)uStack_128;
          iVar53 = -(uint)(fVar36 <= fStack_248);
          uVar39 = CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar38 >> 0x18),
                            CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar38 >> 0x10),
                                     CONCAT11((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar38 >> 8),
                                              (byte)iVar37 & (byte)iVar38)));
          auVar42._0_8_ =
               CONCAT17((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                        CONCAT16((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar48 >> 0x10),
                                 CONCAT15((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar48 >> 8),
                                          CONCAT14((byte)iVar52 & (byte)iVar48,uVar39))));
          auVar42[8] = (byte)iVar53 & (byte)iVar35;
          auVar42[9] = (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar35 >> 8);
          auVar42[10] = (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
          auVar42[0xb] = (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar35 >> 0x18);
          if ((uVar39 & (uint)((ulong)auVar42._0_8_ >> 0x20) & auVar42._8_4_) != 0) {
            auVar4._8_8_ = uStack_158;
            auVar4._0_8_ = local_160;
            auVar46 = NEON_fmin(auVar7,auVar4,4);
            auVar3._8_8_ = uStack_168;
            auVar3._0_8_ = local_170;
            auVar32 = NEON_fmax(auVar6,auVar3,4);
            auVar55 = NEON_fmin(auVar32,auVar46,4);
            auVar46 = NEON_fmax(auVar32,auVar46,4);
            uStack_d8 = auVar55._8_8_;
            local_e0 = auVar55._0_8_;
            uStack_c8 = auVar46._8_8_;
            local_d0 = auVar46._0_8_;
            local_280 = auVar50._0_4_;
            fStack_27c = auVar50._4_4_;
            fStack_278 = auVar50._8_4_;
            fStack_274 = auVar50._12_4_;
            auVar51._0_4_ = local_280 * (auVar55._0_4_ - fVar20);
            auVar51._4_4_ = fStack_27c * (auVar55._4_4_ - fVar21);
            auVar51._8_4_ = fStack_278 * (auVar55._8_4_ - fVar25);
            auVar51._12_4_ = fStack_274 * (auVar55._12_4_ - fVar27);
            auVar47._0_4_ = local_280 * (auVar46._0_4_ - fVar20);
            auVar47._4_4_ = fStack_27c * (auVar46._4_4_ - fVar21);
            auVar47._8_4_ = fStack_278 * (auVar46._8_4_ - fVar25);
            auVar47._12_4_ = fStack_274 * (auVar46._12_4_ - fVar27);
            auVar32 = NEON_fmin(auVar51,auVar47,4);
            auVar46 = NEON_fmax(auVar51,auVar47,4);
            uVar30 = NEON_fmaxp(auVar32._0_8_,auVar32._0_8_,4);
            uVar49 = NEON_fmax(CONCAT44(auVar32._8_4_,auVar32._8_4_),uVar30,4);
            uVar30 = NEON_fminp(auVar46._0_8_,auVar46._0_8_,4);
            uVar30 = NEON_fmin(CONCAT44(auVar46._8_4_,auVar46._8_4_),uVar30,4);
            uVar49 = NEON_fmax(uVar49,0,4);
            uVar30 = NEON_fmin(uVar30,uVar40,4);
            if ((float)uVar49 <= (float)uVar30) {
              auVar46 = param_2[1];
              fVar54 = auVar46._0_4_;
              iVar38 = -(uint)(fVar29 <= fVar54);
              fVar56 = auVar46._4_4_;
              iVar48 = -(uint)(fVar34 <= fVar56);
              fVar57 = auVar46._8_4_;
              iVar35 = -(uint)(fVar36 <= fVar57);
              fVar58 = auVar46._12_4_;
              iVar37 = -(uint)(fVar54 <= fVar22);
              iVar52 = -(uint)(fVar56 <= fVar26);
              iVar53 = -(uint)(fVar57 <= fVar28);
              uVar39 = CONCAT13((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar38 >> 0x18),
                                CONCAT12((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar38 >> 0x10)
                                         ,CONCAT11((byte)((uint)iVar37 >> 8) &
                                                   (byte)((uint)iVar38 >> 8),
                                                   (byte)iVar37 & (byte)iVar38)));
              auVar43._0_8_ =
                   CONCAT17((byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar48 >> 0x18),
                            CONCAT16((byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar48 >> 0x10),
                                     CONCAT15((byte)((uint)iVar52 >> 8) & (byte)((uint)iVar48 >> 8),
                                              CONCAT14((byte)iVar52 & (byte)iVar48,uVar39))));
              auVar43[8] = (byte)iVar53 & (byte)iVar35;
              auVar43[9] = (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar35 >> 8);
              auVar43[10] = (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
              auVar43[0xb] = (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar35 >> 0x18);
              if ((uVar39 & (uint)((ulong)auVar43._0_8_ >> 0x20) & auVar43._8_4_) != 0)
              goto LAB_031c1c44;
              auVar33._0_4_ = local_280 * (fVar29 - fVar20);
              auVar33._4_4_ = fStack_27c * (fVar34 - fVar21);
              auVar33._8_4_ = fStack_278 * (fVar36 - fVar25);
              auVar33._12_4_ = fStack_274 * ((float)((ulong)uStack_128 >> 0x20) - fVar27);
              auVar24._0_4_ = local_280 * (fVar22 - fVar20);
              auVar24._4_4_ = fStack_27c * (fVar26 - fVar21);
              auVar24._8_4_ = fStack_278 * (fVar28 - fVar25);
              auVar24._12_4_ = fStack_274 * ((float)((ulong)uStack_118 >> 0x20) - fVar27);
              auVar32 = NEON_fmin(auVar33,auVar24,4);
              auVar46 = NEON_fmax(auVar33,auVar24,4);
              uVar30 = NEON_fmaxp(auVar32._0_8_,auVar32._0_8_,4);
              uVar30 = NEON_fmax(CONCAT44(auVar32._8_4_,auVar32._8_4_),uVar30,4);
              uVar49 = NEON_fminp(auVar46._0_8_,auVar46._0_8_,4);
              uVar49 = NEON_fmin(CONCAT44(auVar46._8_4_,auVar46._8_4_),uVar49,4);
              uVar30 = NEON_fmax(uVar30,0,4);
              uVar49 = NEON_fmin(uVar49,uVar40,4);
              fVar22 = (float)uVar30;
              if (fVar22 <= (float)uVar49) goto code_r0x031c1c30;
            }
          }
        }
      }
      if (1 < (int)local_1b8) goto joined_r0x031c1dd0;
    } while( true );
  }
  local_1b8 = (uint *)CONCAT44(local_2b8,2);
  goto joined_r0x031c1dd0;
code_r0x031c1c30:
  fVar26 = (float)((ulong)uVar30 >> 0x20);
  auVar46._0_4_ = fVar54 + fVar22 * (*(float *)*param_2 - fVar54);
  auVar46._4_4_ = fVar56 + fVar26 * (*(float *)(*param_2 + 4) - fVar56);
  auVar46._8_4_ = fVar57 + fVar22 * (*(float *)(*param_2 + 8) - fVar57);
  auVar46._12_4_ = fVar58 + fVar26 * (*(float *)(*param_2 + 0xc) - fVar58);
LAB_031c1c44:
  auVar23 = auVar46._0_12_;
  local_150 = CONCAT44(local_150._4_4_,uVar15);
  local_110 = uVar8 | (int)local_2a8 << 0x16;
  uStack_138 = auVar46._8_8_;
  fStack_238 = auVar46._8_4_;
  local_140 = auVar46._0_8_;
  local_240 = auVar46._0_4_;
  fStack_23c = auVar46._4_4_;
  local_108 = &local_210;
  local_148 = &uStack_228;
  plVar9 = *(long **)param_2[4];
  fVar22 = ((float)local_180 - local_240) * ((float)local_180 - local_240);
  fVar28 = (local_180._4_4_ - fStack_23c) * (local_180._4_4_ - fStack_23c);
  fVar29 = ((float)uStack_178 - fStack_238) * ((float)uStack_178 - fStack_238);
  fVar26 = fVar22 + fVar28 + fVar29;
  fVar29 = fVar22 + fVar28 + fVar29;
  uVar30 = CONCAT44(fVar29,fVar26);
  uVar49 = NEON_frsqrte(uVar30,4);
  fVar22 = (float)uVar49;
  fVar28 = (float)((ulong)uVar49 >> 0x20);
  uVar49 = NEON_frsqrts(uVar30,CONCAT44(fVar28 * fVar28,fVar22 * fVar22),4);
  fVar22 = fVar22 * (float)uVar49;
  fVar28 = fVar28 * (float)((ulong)uVar49 >> 0x20);
  uVar49 = NEON_frsqrts(uVar30,CONCAT44(fVar28 * fVar28,fVar22 * fVar22),4);
  iVar38 = -(uint)(fVar26 <= 0.0);
  iVar48 = -(uint)(fVar29 <= 0.0);
  fVar26 = fVar26 * (float)uVar49 * fVar22;
  fVar29 = fVar29 * (float)((ulong)uVar49 >> 0x20) * fVar28;
  uVar41 = CONCAT44(fVar29,fVar26);
  uVar49 = CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                    CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                             CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar48 >> 8),
                                      CONCAT14(SUB41(fVar29,0) & ~(byte)iVar48,
                                               CONCAT13((byte)((uint)fVar26 >> 0x18) &
                                                        ~(byte)((uint)iVar38 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar26 >> 0x10) &
                                                                 ~(byte)((uint)iVar38 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar26 >> 8)
                                                                          & ~(byte)((uint)iVar38 >>
                                                                                   8),
                                                                          SUB41(fVar26,0) &
                                                                          ~(byte)iVar38)))))));
  if (plVar9 == (long *)0x0) {
    plVar9 = *(long **)(param_2[3] + 8);
    if (plVar9 != (long *)0x0) {
LAB_031c1dec:
      local_240 = auVar23._0_4_ - local_240;
      fStack_23c = auVar23._4_4_ - fStack_23c;
      fStack_238 = auVar23._8_4_ - fStack_238;
      iVar38 = -(uint)((float)uVar30 <= 0.0);
      iVar48 = -(uint)((float)((ulong)uVar30 >> 0x20) <= 0.0);
      local_1d8 = CONCAT17((byte)((ulong)uVar41 >> 0x38) & ~(byte)((uint)iVar48 >> 0x18),
                           CONCAT16((byte)((ulong)uVar41 >> 0x30) & ~(byte)((uint)iVar48 >> 0x10),
                                    CONCAT15((byte)((ulong)uVar41 >> 0x28) &
                                             ~(byte)((uint)iVar48 >> 8),
                                             CONCAT14((byte)((ulong)uVar41 >> 0x20) & ~(byte)iVar48,
                                                      CONCAT13((byte)((ulong)uVar41 >> 0x18) &
                                                               ~(byte)((uint)iVar38 >> 0x18),
                                                               CONCAT12((byte)((ulong)uVar41 >> 0x10
                                                                              ) & ~(byte)((uint)
                                                  iVar38 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar41 >> 8) &
                                                           ~(byte)((uint)iVar38 >> 8),
                                                           (byte)uVar41 & ~(byte)iVar38)))))));
      local_240 = local_240 * local_240;
      fStack_23c = fStack_23c * fStack_23c;
      fStack_238 = fStack_238 * fStack_238;
      fVar22 = local_240 + fStack_23c + fStack_238;
      fStack_238 = local_240 + fStack_23c + fStack_238;
      uVar30 = CONCAT44(fStack_238,fVar22);
      uVar49 = NEON_frsqrte(uVar30,4);
      fVar26 = (float)uVar49;
      fVar28 = (float)((ulong)uVar49 >> 0x20);
      uVar49 = NEON_frsqrts(uVar30,CONCAT44(fVar28 * fVar28,fVar26 * fVar26),4);
      fVar26 = fVar26 * (float)uVar49;
      fVar28 = fVar28 * (float)((ulong)uVar49 >> 0x20);
      uVar30 = NEON_frsqrts(uVar30,CONCAT44(fVar28 * fVar28,fVar26 * fVar26),4);
      iVar38 = -(uint)(fVar22 <= 0.0);
      iVar48 = -(uint)(fStack_238 <= 0.0);
      fVar22 = fVar22 * (float)uVar30 * fVar26;
      fStack_238 = fStack_238 * (float)((ulong)uVar30 >> 0x20) * fVar28;
      local_1f0 = &local_190;
      local_1e8 = 0x52;
      local_1d0 = CONCAT17((byte)((uint)fStack_238 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                           CONCAT16((byte)((uint)fStack_238 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10)
                                    ,CONCAT15((byte)((uint)fStack_238 >> 8) &
                                              ~(byte)((uint)iVar48 >> 8),
                                              CONCAT14(SUB41(fStack_238,0) & ~(byte)iVar48,
                                                       CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                                ~(byte)((uint)iVar38 >> 0x18),
                                                                CONCAT12((byte)((uint)fVar22 >> 0x10
                                                                               ) & ~(byte)((uint)
                                                  iVar38 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar22 >> 8) &
                                                           ~(byte)((uint)iVar38 >> 8),
                                                           SUB41(fVar22,0) & ~(byte)iVar38)))))));
      local_1e0 = CONCAT44(fStack_29c,local_2a0);
      local_200 = param_1;
      local_1f8 = puVar1;
      auVar44 = (**(code **)(*plVar9 + 0x28))(plVar9,&local_200);
      uVar49 = auVar44._0_8_;
    }
  }
  else {
    local_1e8 = 0x12;
    if (uVar17 != *(uint *)param_2[2]) {
      local_1e8 = 0x22;
    }
    local_1f0 = &local_190;
    local_200 = param_1;
    local_1f8 = puVar1;
    uVar10 = (**(code **)(*plVar9 + 0x28))(plVar9,&local_200);
    if ((uVar10 & 1) == 0) {
      bVar13 = false;
      goto LAB_031c1f74;
    }
    plVar9 = *(long **)(param_2[3] + 8);
    if (plVar9 != (long *)0x0) {
      fVar22 = ((float)local_180 - local_240) * ((float)local_180 - local_240);
      fVar28 = (local_180._4_4_ - fStack_23c) * (local_180._4_4_ - fStack_23c);
      fVar29 = ((float)uStack_178 - fStack_238) * ((float)uStack_178 - fStack_238);
      fVar26 = fVar22 + fVar28 + fVar29;
      fVar29 = fVar22 + fVar28 + fVar29;
      uVar30 = CONCAT44(fVar29,fVar26);
      uVar49 = NEON_frsqrte(uVar30,4);
      fVar22 = (float)uVar49;
      fVar28 = (float)((ulong)uVar49 >> 0x20);
      uVar49 = NEON_frsqrts(uVar30,CONCAT44(fVar28 * fVar28,fVar22 * fVar22),4);
      fVar22 = fVar22 * (float)uVar49;
      fVar28 = fVar28 * (float)((ulong)uVar49 >> 0x20);
      uVar49 = NEON_frsqrts(uVar30,CONCAT44(fVar28 * fVar28,fVar22 * fVar22),4);
      auVar5._8_8_ = uStack_138;
      auVar5._0_8_ = local_140;
      auVar23 = auVar5._0_12_;
      uVar41 = CONCAT44(fVar29 * (float)((ulong)uVar49 >> 0x20) * fVar28,
                        fVar26 * (float)uVar49 * fVar22);
      goto LAB_031c1dec;
    }
  }
  if (param_3 != (long *)0x0) {
    uVar18 = *(uint *)((long)param_3 + 0xc) & 0x3fffffff;
    iVar38 = (int)param_3[1];
    if ((iVar38 < (int)uVar18) || ((param_4 & 1) == 0)) {
      lVar11 = *param_3;
      iVar48 = iVar38 + 1;
      if ((int)uVar18 <= iVar38) {
        lVar11 = FUN_0315ac2c(PTR_PTR_0434a080,iVar48);
        *param_3 = lVar11;
        iVar38 = (int)param_3[1];
      }
      *(uint *)(lVar11 + (long)iVar38 * 4) = uVar17;
      *(int *)(param_3 + 1) = iVar48;
    }
  }
  uStack_1a8 = uStack_228;
  uStack_168 = uStack_128;
  local_170 = local_130;
  local_1a2 = local_222;
  uStack_1a0 = uStack_220;
  local_194 = local_214;
  uStack_158 = uStack_118;
  local_160 = local_120;
  local_198 = local_218;
  lVar11 = *(long *)(lVar14 + 0x20);
  if (*(int *)(lVar11 + 0x48) == 0) {
    local_2b8 = -1;
    iStack_2b4 = 0;
  }
  else {
    iVar38 = *(int *)(*(long *)(lVar11 + 0x40) + ((ulong)local_210._4_4_ & 0x3fffff) * 4);
    if (iVar38 == -1) {
      local_2b8 = -1;
      iStack_2b4 = 0;
    }
    else {
      piVar2 = (int *)(*(long *)(lVar11 + 0x50) + (long)iVar38 * 8);
      local_2b8 = *piVar2;
      iStack_2b4 = piVar2[1];
    }
  }
  local_2a0 = local_2a0 + (float)uVar49;
  fStack_29c = fStack_29c + (float)((ulong)uVar49 >> 0x20);
  local_2a8 = (ulong)(local_210._4_4_ >> 0x16);
  local_188 = &uStack_1a8;
  uStack_178 = uStack_138;
  local_180 = local_140;
  bVar13 = true;
  local_190 = local_210._4_4_;
  uVar18 = uVar17;
  uVar17 = local_210._4_4_;
LAB_031c1f74:
  if (!bVar13) goto joined_r0x031c1dd0;
  goto LAB_031c19c0;
}


