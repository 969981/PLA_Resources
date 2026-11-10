/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319a380; name: FUN_0319a380
 */


int FUN_0319a380(long param_1,long param_2,uint *param_3,uint *param_4,undefined1 (*param_5) [16],
                float *param_6,float *param_7,float *param_8,ulong *param_9,undefined8 *param_10,
                uint *param_11)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plVar8;
  float fVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  char cVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  int *piVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  float *pfVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  uint uVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  uint *puVar32;
  float fVar33;
  float fVar40;
  undefined8 uVar34;
  float fVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  undefined1 auVar43 [12];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  int iVar48;
  int iVar52;
  int iVar53;
  int iVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 uVar62;
  uint local_28c;
  float local_240;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long local_170;
  undefined8 local_168;
  undefined4 local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  long local_128;
  ulong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  int local_dc;
  long local_d8;
  int local_d0;
  uint local_cc;
  ulong local_c8;
  undefined8 local_c0;
  long local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_90;
  uint local_68;
  int local_64;
  
  local_108 = 0;
  local_100 = 0x8000000000000000;
  iVar16 = *(int *)(param_2 + 0x10);
  if (iVar16 < *(int *)(param_2 + 0x20)) {
    auVar60._0_4_ = *param_6 * *param_8;
    auVar60._4_4_ = param_6[1] * param_8[1];
    auVar60._8_4_ = param_6[2] * param_8[2];
    auVar60._12_4_ = param_6[3] * param_8[3];
    auVar55 = NEON_ext(auVar60,auVar60,8,1);
    auVar56._0_4_ = *param_8 * *param_7;
    auVar56._4_4_ = param_8[1] * param_7[1];
    auVar56._8_4_ = param_8[2] * param_7[2];
    auVar56._12_4_ = param_8[3] * param_7[3];
    auVar44 = NEON_ext(auVar56,auVar56,8,1);
    auVar7._4_4_ = auVar60._0_4_ + auVar60._4_4_ + auVar55._4_4_;
    auVar7._0_4_ = auVar60._0_4_ + auVar60._4_4_ + auVar55._0_4_;
    auVar55._4_4_ = auVar56._0_4_ + auVar56._4_4_ + auVar44._4_4_;
    auVar55._0_4_ = auVar56._0_4_ + auVar56._4_4_ + auVar44._0_4_;
    lVar22 = (long)*(int *)(param_2 + 0x20) - (long)iVar16;
    piVar20 = (int *)(*(long *)(param_2 + 0x18) + (long)iVar16 * 0xc + 8);
    do {
      iVar16 = iVar16 + 1;
      if (*piVar20 == -1) {
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
        *(undefined4 *)(param_2 + 0x50) = 0;
        puVar11 = PTR_PTR_0434a090;
        puVar10 = PTR_PTR_0434a080;
        iVar16 = piVar20[-2];
        if (iVar16 == -1) {
          return 0;
        }
        local_64 = 0;
        fVar9 = 3.40282e+38;
        auVar44._8_4_ = 0x7f7fffee;
        auVar44._0_8_ = 0x7f7fffee7f7fffee;
        auVar44._12_4_ = 0x7f7fffee;
        goto LAB_0319a508;
      }
      *(int *)(param_2 + 0x10) = iVar16;
      piVar20 = piVar20 + 3;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  return 0;
LAB_0319a508:
  local_128 = 0;
  local_120 = 0x8000000000000000;
  local_118 = 0;
  uStack_110 = 0x8000000000000000;
  if (0 < (int)local_100) {
    uVar31 = 0;
    do {
      *(undefined4 *)(local_108 + uVar31 * 4) = 0xffffffff;
      uVar31 = uVar31 + 1;
    } while ((local_100 & 0xffffffff) != uVar31);
  }
  local_f8 = 0;
  FUN_0319becc(&local_128,param_1,iVar16,param_2,&local_108);
  local_138 = (long *)0x0;
  local_130 = 0x8000000000000000;
  local_148 = 0;
  local_140 = 0x8000000000000000;
  if (0 < (int)local_120) {
    plVar14 = (long *)FUN_0319bb18(puVar11,local_120 & 0xffffffff,0,0,(long)&local_130 + 4);
    local_138 = plVar14;
    if (0 < (int)local_120) {
      lVar22 = 0;
      iVar16 = (int)local_130;
      do {
        local_140 = local_140 & 0xffffffff00000000;
        FUN_0319c4fc(param_1,*(undefined8 *)(local_128 + lVar22 * 8),&local_148);
        uVar28 = (uint)local_140;
        local_f0 = (undefined **)0x0;
        uStack_e8 = 0x8000000000000000;
        if (0 < (int)(uint)local_140) {
          if ((int)(uint)local_140 < 0x40000000) {
            uVar17 = 0;
          }
          else {
            FUN_032bd0a8(local_140 & 0xffffffff);
            uVar17 = (uint)uStack_e8._4_4_;
          }
          uVar17 = (uVar17 & 0x3fffffff) * 2;
          if (uVar17 < 0x3fffffff) {
            if ((int)uVar28 <= (int)uVar17) goto LAB_0319ad54;
          }
          else {
            uVar17 = 0x3fffffff;
            if ((int)uVar28 < 0x40000000) {
LAB_0319ad54:
              uVar28 = uVar17;
            }
          }
          local_f0 = (undefined **)FUN_032bd1d4(puVar10,uVar28,8,0,0,(long)&uStack_e8 + 4);
          if (0 < (int)(uint)local_140) {
            uVar31 = uStack_e8 & 0xffffffff;
            lVar23 = 0;
            do {
              ppuVar12 = local_f0;
              uVar18 = uVar31 + lVar23;
              pfVar24 = (float *)(local_148 + lVar23 * 0x10);
              auVar45._0_4_ = *pfVar24 * *param_6;
              auVar45._4_4_ = pfVar24[1] * param_6[1];
              auVar45._8_4_ = pfVar24[2] * param_6[2];
              auVar45._12_4_ = pfVar24[3] * param_6[3];
              auVar36._0_4_ = *pfVar24 * *param_7;
              auVar36._4_4_ = pfVar24[1] * param_7[1];
              auVar36._8_4_ = pfVar24[2] * param_7[2];
              auVar36._12_4_ = pfVar24[3] * param_7[3];
              auVar60 = NEON_ext(auVar45,auVar45,8,1);
              auVar56 = NEON_ext(auVar36,auVar36,8,1);
              iVar48 = (int)uVar18;
              uVar28 = (uint)(uVar18 + 1);
              if (iVar48 < (int)((uint)uStack_e8._4_4_ & 0x3fffffff)) {
              }
              else {
                if (0x3ffffffe < iVar48) {
                  FUN_032bd0a8(uVar18 + 1 & 0xffffffff);
                }
                uVar17 = ((uint)uStack_e8._4_4_ & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar17) {
                  uVar17 = 0x3fffffff;
                }
                uVar29 = uVar28;
                if ((int)uVar28 <= (int)uVar17) {
                  uVar29 = uVar17;
                }
                local_f0 = (undefined **)
                           FUN_032bd1d4(puVar10,uVar29,8,ppuVar12,uVar18 & 0xffffffff,
                                        (long)&uStack_e8 + 4);
                iVar48 = (int)(float)uStack_e8;
              }
              *(float *)(local_f0 + iVar48) = auVar45._0_4_ + auVar45._4_4_ + auVar60._0_4_;
              *(float *)((long)(local_f0 + iVar48) + 4) =
                   auVar36._0_4_ + auVar36._4_4_ + auVar56._0_4_;
              lVar23 = lVar23 + 1;
              uStack_e8 = CONCAT44(uStack_e8._4_4_,uVar28);
            } while (lVar23 < (int)(uint)local_140);
          }
        }
        FUN_0319f78c(&local_f0);
        if (2 < (int)(float)uStack_e8) {
          plVar27 = plVar14 + (long)iVar16 * 2;
          *plVar27 = 0;
          plVar27[1] = -0x8000000000000000;
          plVar26 = plVar27;
          while (plVar8 = plVar26 + 2, plVar8 != plVar14 + ((long)iVar16 + 1) * 2) {
            *plVar8 = 0;
            plVar26[3] = -0x8000000000000000;
            plVar26 = plVar8;
          }
          auVar35._0_8_ = *param_9;
          auVar35._8_8_ = 0;
          FUN_0319e50c(auVar35,plVar27,&local_f0,8);
          iVar16 = (int)((long)iVar16 + 1);
        }
        uVar31 = uStack_e8;
        uVar18 = (ulong)(uint)uStack_e8._4_4_;
        uStack_e8 = (ulong)(uint)uStack_e8._4_4_ << 0x20;
        if ((-1 < (long)uVar31) && (local_f0 != (undefined **)0x0)) {
          (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_f0,(uVar18 & 0x3fffffff) << 3);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < (int)local_120);
      local_130 = CONCAT44(local_130._4_4_,iVar16);
    }
  }
  local_158 = 0;
  local_150 = -0x8000000000000000;
  if (param_3 == param_4) {
    uVar28 = 0;
    lVar15 = 0;
  }
  else {
    lVar15 = 0;
    lVar23 = 0;
    lVar22 = 0;
    uVar28 = 0;
    puVar32 = param_3;
    do {
      uVar17 = (int)local_100 - 1;
      if (0 < (int)uVar17) {
        uVar1 = *puVar32;
        uVar29 = (uVar1 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar1 * -0x61c8864f & 0xff00ff) << 8;
        uVar29 = uVar17 & (uVar29 >> 0x10 | uVar29 << 0x10);
        uVar2 = *(uint *)(local_108 + (long)(int)uVar29 * 4);
        while (uVar2 != 0xffffffff) {
          if (uVar2 == uVar1) {
            if ((int)uVar29 < (int)local_100) {
              uVar29 = local_150._4_4_;
              uVar17 = uVar28 + 1;
              if ((int)(local_150._4_4_ & 0x3fffffff) <= (int)uVar28) {
                if (0x3ffffffe < (int)uVar28) {
                  FUN_032bd0a8(uVar17);
                }
                uVar29 = (uVar29 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar29) {
                  uVar29 = 0x3fffffff;
                }
                uVar2 = uVar17;
                if ((int)uVar17 <= (int)uVar29) {
                  uVar2 = uVar29;
                }
                lVar15 = FUN_032bd1d4(puVar11,uVar2,4,lVar23,uVar28,(long)&local_150 + 4);
                lVar22 = lVar15;
                lVar23 = lVar15;
                uVar28 = (uint)local_150;
                local_158 = lVar15;
              }
              *(uint *)(lVar22 + (long)(int)uVar28 * 4) = uVar1;
              local_150 = CONCAT44(local_150._4_4_,uVar17);
              uVar28 = uVar17;
            }
            break;
          }
          uVar29 = uVar29 + 1 & uVar17;
          uVar2 = *(uint *)(local_108 + (long)(int)uVar29 * 4);
        }
      }
      puVar32 = puVar32 + 1;
    } while (puVar32 != param_4);
  }
  FUN_0319c6e8(&local_f0,param_1,param_6,param_7,lVar15,lVar15 + (long)(int)uVar28 * 4);
  if (local_e0 < local_d0) {
    piVar20 = (int *)(local_d8 + (long)local_e0 * 0xc + 8);
    lVar22 = (long)local_d0 - (long)local_e0;
    do {
      iVar16 = local_e0 + 1;
      if (*piVar20 == -1) {
        local_dc = local_dc + 1;
        iVar16 = piVar20[-2];
        if (iVar16 != -1) goto LAB_0319af9c;
        break;
      }
      piVar20 = piVar20 + 3;
      lVar22 = lVar22 + -1;
      local_e0 = iVar16;
    } while (lVar22 != 0);
  }
LAB_0319a7fc:
  local_f0 = &PTR_LAB_042f0530;
  local_a0 = 0;
  if ((-1 < (int)local_9c) && (local_a8 != 0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_a8,((ulong)local_9c & 0x3fffffff) << 3);
  }
  local_a8 = 0;
  local_9c = 0x80000000;
  FUN_0319b918(&local_c8);
  local_d0 = 0;
  if ((-1 < (int)local_cc) && (local_d8 != 0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_d8,((ulong)local_cc & 0x3fffffff) * 0xc);
  }
  lVar22 = local_150;
  uVar28 = local_150._4_4_;
  local_150 = (ulong)local_150._4_4_ << 0x20;
  if ((-1 < lVar22) && (local_158 != 0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_158,uVar28 << 2);
  }
  plVar27 = local_138;
  iVar16 = (int)local_130;
  lVar22 = (long)(int)local_130;
  plVar14 = local_138 + lVar22 * 2;
  auVar55._8_8_ = 0;
  auVar7._8_8_ = 0;
  FUN_0319f8d4(auVar7,auVar55,&local_f0,local_138,plVar14);
  local_90 = 0xff7fffee;
  local_c8 = local_c8 & 0xffffffff00000000;
  do {
    uVar18 = FUN_031a034c(&local_f0);
    uVar31 = uStack_e8;
  } while ((uVar18 & 1) != 0);
  if ((char)local_dc == '\0') {
    FUN_031a0138(&local_f0);
  }
  else {
    uVar18 = uStack_e8 >> 0x20;
    local_240 = (float)uStack_e8;
    FUN_031a0138(&local_f0);
    auVar60 = ZEXT816(0x3f800000);
    fVar33 = (float)(uVar31 >> 0x20);
    auVar37._0_8_ =
         CONCAT44(param_6[1] * local_240 + param_7[1] * fVar33,
                  *param_6 * local_240 + *param_7 * fVar33);
    auVar37._8_4_ = param_6[2] * local_240 + param_7[2] * fVar33;
    auVar37._12_4_ = param_6[3] * local_240 + param_7[3] * fVar33;
    auVar56 = *param_5;
    uStack_198 = auVar37._8_8_;
    iVar48 = -(uint)(auVar56._0_4_ == 0.0);
    iVar52 = -(uint)(auVar56._4_4_ == 0.0);
    iVar53 = -(uint)(auVar56._8_4_ == 0.0);
    iVar54 = -(uint)(auVar60._0_4_ == 0.0);
    fVar42 = (float)CONCAT13(auVar56[3] & ~(byte)((uint)iVar48 >> 0x18),
                             CONCAT12(auVar56[2] & ~(byte)((uint)iVar48 >> 0x10),
                                      CONCAT11(auVar56[1] & ~(byte)((uint)iVar48 >> 8),
                                               auVar56[0] & ~(byte)iVar48)));
    auVar43._0_8_ =
         CONCAT17(auVar56[7] & ~(byte)((uint)iVar52 >> 0x18),
                  CONCAT16(auVar56[6] & ~(byte)((uint)iVar52 >> 0x10),
                           CONCAT15(auVar56[5] & ~(byte)((uint)iVar52 >> 8),
                                    CONCAT14(auVar56[4] & ~(byte)iVar52,fVar42))));
    auVar43[8] = auVar56[8] & ~(byte)iVar53;
    auVar43[9] = auVar56[9] & ~(byte)((uint)iVar53 >> 8);
    auVar43[10] = auVar56[10] & ~(byte)((uint)iVar53 >> 0x10);
    auVar43[0xb] = auVar56[0xb] & ~(byte)((uint)iVar53 >> 0x18);
    auVar46._12_2_ = 0;
    auVar46._0_12_ = auVar43;
    auVar46[0xe] = auVar60[2] & ~(byte)((uint)iVar54 >> 0x10);
    auVar46[0xf] = auVar60[3] & ~(byte)((uint)iVar54 >> 0x18);
    auVar56 = NEON_frecpe(auVar46,4);
    iVar48 = -(uint)(fVar42 == 0.0);
    iVar52 = -(uint)((float)((ulong)auVar43._0_8_ >> 0x20) == 0.0);
    iVar53 = -(uint)(auVar43._8_4_ == 0.0);
    iVar54 = -(uint)(auVar46._12_4_ == 0.0);
    auVar49[0] = ~(byte)iVar48;
    auVar49[1] = ~(byte)((uint)iVar48 >> 8);
    auVar49[2] = ~(byte)((uint)iVar48 >> 0x10);
    auVar49[3] = ~(byte)((uint)iVar48 >> 0x18);
    auVar49[4] = ~(byte)iVar52;
    auVar49[5] = ~(byte)((uint)iVar52 >> 8);
    auVar49[6] = ~(byte)((uint)iVar52 >> 0x10);
    auVar49[7] = ~(byte)((uint)iVar52 >> 0x18);
    auVar49[8] = ~(byte)iVar53;
    auVar49[9] = ~(byte)((uint)iVar53 >> 8);
    auVar49[10] = ~(byte)((uint)iVar53 >> 0x10);
    auVar49[0xb] = ~(byte)((uint)iVar53 >> 0x18);
    auVar49[0xc] = ~(byte)iVar54;
    auVar49[0xd] = ~(byte)((uint)iVar54 >> 8);
    auVar49[0xe] = ~(byte)((uint)iVar54 >> 0x10);
    auVar49[0xf] = ~(byte)((uint)iVar54 >> 0x18);
    auVar60 = NEON_frecps(auVar46,auVar56,4);
    auVar57._0_4_ = auVar56._0_4_ * auVar60._0_4_;
    auVar57._4_4_ = auVar56._4_4_ * auVar60._4_4_;
    auVar57._8_4_ = auVar56._8_4_ * auVar60._8_4_;
    auVar57._12_4_ = auVar56._12_4_ * auVar60._12_4_;
    auVar56 = NEON_frecps(auVar46,auVar57,4);
    auVar58._0_4_ = auVar57._0_4_ * auVar56._0_4_;
    auVar58._4_4_ = auVar57._4_4_ * auVar56._4_4_;
    auVar58._8_4_ = auVar57._8_4_ * auVar56._8_4_;
    auVar58._12_4_ = auVar57._12_4_ * auVar56._12_4_;
    auVar50._8_8_ = auVar44._8_8_;
    auVar50._0_8_ = 0x7f7fffee7f7fffee;
    auVar50 = auVar50 ^ (auVar50 ^ auVar58) & auVar49;
    uStack_188 = auVar46._8_8_;
    uStack_178 = auVar50._8_8_;
    uStack_180 = auVar50._0_8_;
    local_1a0 = auVar37._0_8_;
    local_190 = auVar43._0_8_;
    if (*(int *)(param_2 + 0x50) == 0) {
      uVar30 = 0xffffffff;
    }
    else {
      plVar26 = *(long **)(param_2 + 0x48);
      plVar8 = plVar26 + *(int *)(param_2 + 0x50);
      if (param_3 == param_4) {
        uVar30 = 0xffffffff;
        plVar25 = plVar26;
        do {
          plVar19 = (long *)*plVar25;
          if ((((*(float *)(plVar19 + 2) <= local_240) &&
               (*(float *)((long)plVar19 + 0x14) <= fVar33)) &&
              (local_240 <= *(float *)(plVar19 + 3))) &&
             (fVar33 <= *(float *)((long)plVar19 + 0x1c))) {
            if ((int)plVar19[1] != 0) {
              lVar23 = (long)(int)plVar19[1] * 0x14;
              pfVar24 = (float *)(*plVar19 + 0x10);
              do {
                if (0.0 < *pfVar24 + local_240 * pfVar24[-2] + fVar33 * pfVar24[-1])
                goto LAB_0319a968;
                lVar23 = lVar23 + -0x14;
                pfVar24 = pfVar24 + 5;
              } while (lVar23 != 0);
            }
            uVar28 = *(uint *)(plVar19 + 4);
            lVar15 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar28 >> 0x16) * 0xf0);
            lVar23 = *(long *)(lVar15 + 0x20);
            if ((*(int *)(lVar23 + 0x108) == 0) ||
               (uVar21 = (ulong)uVar28 & 0x3fffff,
               (*(byte *)(*(long *)(lVar23 + 0x100) + uVar21) & 1) == 0)) {
              uVar30 = (ulong)uVar28;
              break;
            }
            local_f0 = (undefined **)CONCAT44(local_f0._4_4_,(int)uVar21);
            cVar13 = FUN_0318fe6c(lVar23,&local_f0,&local_170,&local_158);
            if (cVar13 != '\0') {
              local_28c = (uint)local_170;
              if ((uint)local_170 != (uint)local_158) {
                do {
                  local_68 = local_28c;
                  local_f0 = (undefined **)0x3c0102043c010204;
                  uVar21 = FUN_03195fcc(lVar15,&local_68,&local_190,&local_1a0,&local_f0);
                  if ((uVar21 & 1) != 0) {
                    uVar30 = (ulong)(local_28c | uVar28 & 0xffc00000);
                    break;
                  }
                  local_28c = local_28c + 1;
                } while (local_28c != (uint)local_158);
              }
            }
          }
LAB_0319a968:
          plVar25 = plVar25 + 1;
        } while (plVar25 != plVar8);
      }
      else {
        local_28c = 0xffffffff;
        plVar25 = plVar26;
        do {
          plVar19 = (long *)*plVar25;
          uVar28 = *(uint *)(plVar19 + 4);
          uVar30 = (ulong)uVar28;
          puVar32 = param_3;
          do {
            if (*puVar32 == uVar28) {
              if (param_4 != puVar32) goto LAB_0319b2e8;
              break;
            }
            puVar32 = puVar32 + 1;
          } while (param_4 != puVar32);
          if (((*(float *)(plVar19 + 2) <= local_240) &&
              (*(float *)((long)plVar19 + 0x14) <= fVar33)) &&
             ((local_240 <= *(float *)(plVar19 + 3) && (fVar33 <= *(float *)((long)plVar19 + 0x1c)))
             )) {
            if ((int)plVar19[1] != 0) {
              lVar23 = (long)(int)plVar19[1] * 0x14;
              pfVar24 = (float *)(*plVar19 + 0x10);
              do {
                if (0.0 < *pfVar24 + local_240 * pfVar24[-2] + fVar33 * pfVar24[-1])
                goto LAB_0319b2e8;
                lVar23 = lVar23 + -0x14;
                pfVar24 = pfVar24 + 5;
              } while (lVar23 != 0);
            }
            lVar15 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar28 >> 0x16) * 0xf0);
            lVar23 = *(long *)(lVar15 + 0x20);
            if (*(int *)(lVar23 + 0x108) == 0) goto joined_r0x0319b3e0;
            if ((*(byte *)(*(long *)(lVar23 + 0x100) + (uVar30 & 0x3fffff)) & 1) == 0) break;
            local_f0 = (undefined **)CONCAT44(local_f0._4_4_,(int)(uVar30 & 0x3fffff));
            cVar13 = FUN_0318fe6c(lVar23,&local_f0,&local_170,&local_158);
            if (cVar13 != '\0') {
              if ((uint)local_170 != (uint)local_158) {
                uVar17 = (uint)local_170;
                do {
                  local_f0 = (undefined **)0x3c0102043c010204;
                  local_68 = uVar17;
                  uVar30 = FUN_03195fcc(lVar15,&local_68,&local_190,&local_1a0,&local_f0);
                  if ((uVar30 & 1) != 0) {
                    local_28c = uVar17 | uVar28 & 0xffc00000;
                    break;
                  }
                  uVar17 = uVar17 + 1;
                } while (uVar17 != (uint)local_158);
              }
            }
          }
LAB_0319b2e8:
          uVar30 = (ulong)local_28c;
          plVar25 = plVar25 + 1;
        } while (plVar25 != plVar8);
      }
      uVar28 = (uint)uVar30;
joined_r0x0319b3e0:
      if (uVar28 == 0xffffffff) {
        fVar42 = 3.40282e+38;
        uVar30 = 0xffffffff;
        do {
          lVar23 = *plVar26;
          puVar32 = param_3;
          if (param_3 == param_4) {
LAB_0319b4c4:
            if (puVar32 == param_4) {
              uVar28 = *(uint *)(lVar23 + 0x20);
              goto LAB_0319b4d4;
            }
          }
          else {
            uVar28 = *(uint *)(lVar23 + 0x20);
            do {
              if (*puVar32 == uVar28) goto LAB_0319b4c4;
              puVar32 = puVar32 + 1;
            } while (param_4 != puVar32);
LAB_0319b4d4:
            lVar15 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar28 >> 0x16) * 0xf0)
                              + 0x20);
            if ((*(int *)(lVar15 + 0x108) == 0) ||
               ((*(byte *)(*(long *)(lVar15 + 0x100) + ((ulong)uVar28 & 0x3fffff)) & 1) == 0)) {
              auVar3._8_8_ = 0;
              auVar3._0_8_ = uVar18;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar31 & 0xffffffff;
              fVar33 = (float)FUN_0319e2dc(auVar5,auVar3,lVar23);
              if (fVar33 < fVar42) {
                uVar30 = (ulong)*(uint *)(lVar23 + 0x20);
                fVar42 = fVar33;
              }
            }
            else {
              local_f0 = (undefined **)CONCAT44(local_f0._4_4_,(int)((ulong)uVar28 & 0x3fffff));
              cVar13 = FUN_0318fe6c(lVar15,&local_f0,&local_170,&local_158);
              if (cVar13 != '\0') {
                if ((uint)local_170 != (uint)local_158) {
                  uVar17 = (uint)local_170;
                  fVar33 = fVar42;
                  do {
                    uVar29 = uVar17 | uVar28 & 0xffc00000;
                    local_f0 = (undefined **)0x0;
                    uStack_e8 = -0x8000000000000000;
                    local_c8 = 0;
                    local_c0 = -0x8000000000000000;
                    FUN_0319dc9c(&local_f0,param_1,uVar29,param_6,param_7);
                    auVar4._8_8_ = 0;
                    auVar4._0_8_ = uVar18;
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = uVar31 & 0xffffffff;
                    fVar42 = (float)FUN_0319e2dc(auVar6,auVar4,&local_f0);
                    lVar23 = local_c0;
                    uVar1 = local_c0._4_4_;
                    if (fVar33 <= fVar42) {
                      uVar29 = (uint)uVar30;
                    }
                    uVar30 = (ulong)uVar29;
                    if (fVar33 <= fVar42) {
                      fVar42 = fVar33;
                    }
                    local_c0 = (ulong)local_c0._4_4_ << 0x20;
                    if ((-1 < lVar23) && (local_c8 != 0)) {
                      (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_c8,uVar1 << 2);
                    }
                    lVar23 = uStack_e8;
                    local_c0 = CONCAT44(0x80000000,(undefined4)local_c0);
                    uVar21 = (ulong)(uint)uStack_e8._4_4_;
                    local_c8 = 0;
                    uStack_e8 = (ulong)(uint)uStack_e8._4_4_ << 0x20;
                    if ((-1 < lVar23) && (local_f0 != (undefined **)0x0)) {
                      (**(code **)(*(long *)puVar10 + 0x18))
                                (puVar10,local_f0,(uVar21 & 0x3fffffff) * 0x14);
                    }
                    uVar17 = uVar17 + 1;
                    fVar33 = fVar42;
                  } while (uVar17 != (uint)local_158);
                }
              }
            }
          }
          plVar26 = plVar26 + 1;
        } while (plVar26 != plVar8);
      }
    }
    lVar23 = *(long *)(*(long *)(param_1 + 0x38) + (uVar30 >> 0x16) * 0xf0);
    FUN_03198f50(*(undefined8 *)(lVar23 + 0x20),(uint)uVar30 & 0x3fffff,&local_f0);
    fVar33 = *(float *)(lVar23 + 0x80) * (float)uStack_e8 +
             *(float *)(lVar23 + 0x60) * (float)local_f0 +
             *(float *)(lVar23 + 0x70) * local_f0._4_4_;
    fVar40 = *(float *)(lVar23 + 0x84) * (float)uStack_e8 +
             *(float *)(lVar23 + 100) * (float)local_f0 + *(float *)(lVar23 + 0x74) * local_f0._4_4_
    ;
    fVar41 = *(float *)(lVar23 + 0x88) * (float)uStack_e8 +
             *(float *)(lVar23 + 0x68) * (float)local_f0 +
             *(float *)(lVar23 + 0x78) * local_f0._4_4_;
    auVar51._0_4_ = *(float *)(lVar23 + 0x90) * fVar33;
    auVar51._4_4_ = *(float *)(lVar23 + 0x94) * fVar40;
    auVar51._8_4_ = *(float *)(lVar23 + 0x98) * fVar41;
    auVar51._12_4_ =
         *(float *)(lVar23 + 0x9c) *
         (*(float *)(lVar23 + 0x8c) * (float)uStack_e8 +
         *(float *)(lVar23 + 0x6c) * (float)local_f0 + *(float *)(lVar23 + 0x7c) * local_f0._4_4_);
    auVar56 = NEON_ext(auVar51,auVar51,8,1);
    fVar42 = uStack_e8._4_4_ - (auVar51._0_4_ + auVar51._4_4_ + auVar56._0_4_);
    auVar61._0_4_ = (float)local_1a0 * fVar33;
    auVar61._4_4_ = local_1a0._4_4_ * fVar40;
    auVar61._8_4_ = (float)uStack_198 * fVar41;
    auVar61._12_4_ = uStack_198._4_4_ * fVar42;
    auVar56 = NEON_ext(auVar61,auVar61,8,1);
    fVar42 = auVar56._0_4_ + fVar42;
    uVar34 = CONCAT44((float)local_190 * fVar33 + local_190._4_4_ * fVar40 +
                      (float)uStack_188 * fVar41,
                      (float)local_190 * fVar33 + local_190._4_4_ * fVar40 +
                      (float)uStack_188 * fVar41);
    uVar59 = NEON_frecpe(uVar34,4);
    uVar62 = NEON_frecps(uVar34,uVar59,4);
    fVar33 = (float)uVar59 * (float)uVar62;
    fVar40 = (float)((ulong)uVar59 >> 0x20) * (float)((ulong)uVar62 >> 0x20);
    uVar34 = NEON_frecps(uVar34,CONCAT44(fVar40,fVar33),4);
    fVar33 = -((auVar61._0_4_ + auVar61._4_4_ + fVar42) * fVar33 * (float)uVar34);
    fVar40 = -((auVar61._0_4_ + auVar61._4_4_ + fVar42) * fVar40 * (float)((ulong)uVar34 >> 0x20));
    fVar42 = (float)local_1a0 + (float)local_190 * fVar33;
    fVar41 = local_1a0._4_4_ + local_190._4_4_ * fVar40;
    auVar38._0_8_ = CONCAT44(fVar41,fVar42);
    auVar38._8_4_ = (float)uStack_198 + (float)uStack_188 * fVar33;
    auVar38._12_4_ = uStack_198._4_4_ + uStack_188._4_4_ * fVar40;
    fVar42 = fVar42 - *param_8;
    fVar41 = fVar41 - param_8[1];
    fVar42 = fVar42 * fVar42 + fVar41 * fVar41 +
             (auVar38._8_4_ - param_8[2]) * (auVar38._8_4_ - param_8[2]);
    if ((local_64 == 0) || (fVar42 < fVar9)) {
      local_64 = 1;
      param_10[1] = auVar38._8_8_;
      *param_10 = auVar38._0_8_;
      *param_11 = (uint)uVar30;
      fVar9 = fVar42;
    }
  }
  uVar31 = local_140;
  uVar18 = (ulong)local_140._4_4_;
  local_140 = (ulong)local_140._4_4_ << 0x20;
  if ((-1 < (long)uVar31) && (local_148 != 0)) {
    (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_148,(uVar18 & 0x3fffffff) << 4);
  }
  if (iVar16 != 0) {
    *(undefined4 *)(plVar14 + -1) = 0;
    if ((-1 < (int)*(uint *)((long)plVar14 + -4)) && (lVar23 = plVar14[-2], lVar23 != 0)) {
      (**(code **)(*(long *)puVar10 + 0x18))
                (puVar10,lVar23,((ulong)*(uint *)((long)plVar14 + -4) & 0x3fffffff) << 3);
    }
    plVar14[-2] = 0;
    *(undefined4 *)((long)plVar14 + -4) = 0x80000000;
    if (plVar14 + -2 != plVar27) {
      lVar22 = lVar22 << 4;
      do {
        uVar28 = *(uint *)((long)plVar27 + lVar22 + -0x14);
        *(undefined4 *)((long)plVar27 + lVar22 + -0x18) = 0;
        if ((-1 < (int)uVar28) && (lVar23 = *(long *)((long)plVar27 + lVar22 + -0x20), lVar23 != 0))
        {
          (**(code **)(*(long *)puVar10 + 0x18))(puVar10,lVar23,((ulong)uVar28 & 0x3fffffff) << 3);
        }
        lVar23 = lVar22 + -0x10;
        *(undefined8 *)((long)plVar27 + lVar22 + -0x20) = 0;
        *(undefined4 *)((long)plVar27 + lVar22 + -0x14) = 0x80000000;
        lVar22 = lVar23;
      } while (lVar23 != 0x10);
    }
  }
  uVar31 = local_130;
  uVar18 = (ulong)local_130._4_4_;
  local_130 = (ulong)local_130._4_4_ << 0x20;
  if ((-1 < (long)uVar31) && (local_138 != (long *)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_138,(uVar18 & 0x3fffffff) << 4);
  }
  FUN_0319bd38(&local_128);
  uVar31 = local_100;
  iVar16 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x20) <= iVar16) {
LAB_0319acc0:
    uVar28 = local_100._4_4_;
    local_100 = (ulong)local_100._4_4_ << 0x20;
    if ((-1 < (long)uVar31) && (local_108 != 0)) {
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_108,uVar28 << 2);
    }
    return local_64;
  }
  piVar20 = (int *)(*(long *)(param_2 + 0x18) + (long)iVar16 * 0xc + 8);
  lVar22 = (long)*(int *)(param_2 + 0x20) - (long)iVar16;
  while (iVar16 = iVar16 + 1, *piVar20 != -1) {
    *(int *)(param_2 + 0x10) = iVar16;
    piVar20 = piVar20 + 3;
    lVar22 = lVar22 + -1;
    if (lVar22 == 0) goto LAB_0319acc0;
  }
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  *(undefined4 *)(param_2 + 0x50) = 0;
  iVar16 = piVar20[-2];
  if (iVar16 == -1) goto LAB_0319acc0;
  goto LAB_0319a508;
LAB_0319af9c:
  local_a0 = 0;
  local_160 = 0;
  local_1a0 = 0;
  uStack_198 = 0x8000000000000000;
  local_190 = 0;
  uStack_188 = 0x8000000000000000;
  local_170 = 0;
  local_168 = -0x8000000000000000;
  FUN_0319becc(&local_1a0,param_1,iVar16,&local_f0,&local_170);
  if (0 < (int)(float)uStack_198) {
    lVar22 = 0;
    do {
      local_140 = local_140 & 0xffffffff00000000;
      FUN_0319c4fc(param_1,*(undefined8 *)(local_1a0 + lVar22 * 8),&local_148);
      iVar16 = (int)local_130 + 1;
      if ((int)(local_130._4_4_ & 0x3fffffff) <= (int)local_130) {
        local_138 = (long *)FUN_0319bb18(puVar11,iVar16,local_138,local_130 & 0xffffffff,
                                         (long)&local_130 + 4);
      }
      plVar14 = local_138 + (long)(int)local_130 * 2;
      local_130 = CONCAT44(local_130._4_4_,iVar16);
      puVar32 = (uint *)((long)plVar14 + 0xc);
      *plVar14 = 0;
      plVar27 = plVar14 + 1;
      *plVar27 = -0x8000000000000000;
      uVar28 = (uint)local_140;
      if (0 < (int)(uint)local_140) {
        if ((int)(uint)local_140 < 0x40000000) {
          uVar17 = 0;
        }
        else {
          FUN_032bd0a8(local_140 & 0xffffffff);
          uVar17 = *puVar32;
        }
        uVar17 = (uVar17 & 0x3fffffff) * 2;
        if (uVar17 < 0x3fffffff) {
          if ((int)uVar28 <= (int)uVar17) goto LAB_0319b2d4;
        }
        else {
          uVar17 = 0x3fffffff;
          if ((int)uVar28 < 0x40000000) {
LAB_0319b2d4:
            uVar28 = uVar17;
          }
        }
        lVar23 = FUN_032bd1d4(puVar10,uVar28,8,0,0,puVar32);
        *plVar14 = lVar23;
        if (0 < (int)(uint)local_140) {
          lVar23 = (long)(int)(uint)local_140;
          iVar16 = (int)*plVar27;
          do {
            lVar15 = lVar23 + -1;
            lVar23 = local_148 + lVar23 * 0x10;
            iVar48 = iVar16 + 1;
            auVar39._0_4_ = *(float *)(lVar23 + -0x10) * *param_6;
            auVar39._4_4_ = *(float *)(lVar23 + -0xc) * param_6[1];
            auVar39._8_4_ = *(float *)(lVar23 + -8) * param_6[2];
            auVar39._12_4_ = *(float *)(lVar23 + -4) * param_6[3];
            uVar28 = *puVar32;
            auVar47._0_4_ = *(float *)(lVar23 + -0x10) * *param_7;
            auVar47._4_4_ = *(float *)(lVar23 + -0xc) * param_7[1];
            auVar47._8_4_ = *(float *)(lVar23 + -8) * param_7[2];
            auVar47._12_4_ = *(float *)(lVar23 + -4) * param_7[3];
            auVar60 = NEON_ext(auVar39,auVar39,8,1);
            auVar56 = NEON_ext(auVar47,auVar47,8,1);
            if (iVar16 < (int)(uVar28 & 0x3fffffff)) {
              lVar23 = *plVar14;
            }
            else {
              lVar23 = *plVar14;
              if (0x3ffffffe < iVar16) {
                FUN_032bd0a8(iVar48);
                uVar28 = *puVar32;
              }
              uVar28 = (uVar28 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar28) {
                uVar28 = 0x3fffffff;
              }
              if ((int)uVar28 < iVar48) {
                uVar28 = iVar16 + 1;
              }
              lVar23 = FUN_032bd1d4(puVar10,uVar28,8,lVar23,iVar16,puVar32);
              *plVar14 = lVar23;
              iVar16 = (int)*plVar27;
            }
            pfVar24 = (float *)(lVar23 + (long)iVar16 * 8);
            *pfVar24 = auVar39._0_4_ + auVar39._4_4_ + auVar60._0_4_;
            pfVar24[1] = auVar47._0_4_ + auVar47._4_4_ + auVar56._0_4_;
            *(int *)plVar27 = iVar48;
            lVar23 = lVar15;
            iVar16 = iVar48;
          } while (0 < lVar15);
        }
      }
      FUN_0319f78c(plVar14);
      plVar14 = local_138;
      if ((int)*plVar27 < 3) {
        iVar16 = (int)local_130;
        uVar28 = *(uint *)((long)local_138 + (long)(int)local_130 * 0x10 + -4);
        *(undefined4 *)(local_138 + (long)(int)local_130 * 2 + -1) = 0;
        if ((-1 < (int)uVar28) && (local_138[(long)(int)local_130 * 2 + -2] != 0)) {
          (**(code **)(*(long *)puVar10 + 0x18))
                    (puVar10,local_138[(long)(int)local_130 * 2 + -2],
                     ((ulong)uVar28 & 0x3fffffff) << 3);
        }
        *(undefined4 *)((long)plVar14 + (long)iVar16 * 0x10 + -4) = 0x80000000;
        plVar14[(long)iVar16 * 2 + -2] = 0;
        local_130 = CONCAT44(local_130._4_4_,iVar16 + -1);
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)(float)uStack_198);
  }
  lVar22 = local_168;
  uVar28 = local_168._4_4_;
  local_168 = (ulong)local_168._4_4_ << 0x20;
  if ((-1 < lVar22) && (local_170 != 0)) {
    (**(code **)(*(long *)puVar10 + 0x18))(puVar10,local_170,uVar28 << 2);
  }
  FUN_0319bd38(&local_1a0);
  if (local_d0 <= local_e0) goto LAB_0319a7fc;
  piVar20 = (int *)(local_d8 + (long)local_e0 * 0xc + 8);
  lVar22 = (long)local_d0 - (long)local_e0;
  while (iVar16 = local_e0 + 1, *piVar20 != -1) {
    piVar20 = piVar20 + 3;
    lVar22 = lVar22 + -1;
    local_e0 = iVar16;
    if (lVar22 == 0) goto LAB_0319a7fc;
  }
  local_dc = local_dc + 1;
  iVar16 = piVar20[-2];
  if (iVar16 == -1) goto LAB_0319a7fc;
  goto LAB_0319af9c;
}


