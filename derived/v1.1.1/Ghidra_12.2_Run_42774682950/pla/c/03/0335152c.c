/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335152c; name: FUN_0335152c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0335152c(long *param_1,undefined1 (*param_2) [16],long param_3,long *param_4)

{
  unkbyte9 *pVar1;
  undefined8 uVar2;
  char cVar3;
  unkbyte9 *pVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  bool bVar27;
  uint uVar28;
  undefined1 auVar50 [12];
  ulong uVar29;
  int iVar30;
  int iVar31;
  undefined8 *puVar32;
  long lVar33;
  unkbyte9 *pVar34;
  unkbyte9 *pVar35;
  int iVar36;
  long lVar37;
  long lVar38;
  int iVar39;
  undefined8 *puVar40;
  ulong uVar41;
  int iVar42;
  ulong uVar43;
  long lVar44;
  long lVar45;
  int iVar46;
  int iVar47;
  ulong uVar48;
  float fVar49;
  undefined1 auVar51 [12];
  float fVar57;
  float fVar58;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined4 uVar59;
  undefined8 uVar60;
  uint uVar73;
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  undefined1 auVar63 [12];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar72;
  undefined4 uVar74;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  byte bVar75;
  byte bVar76;
  byte bVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined8 local_31a0;
  undefined8 uStack_3198;
  undefined8 local_3190;
  undefined8 uStack_3188;
  undefined8 local_3180;
  undefined8 uStack_3178;
  undefined8 local_3170;
  undefined8 uStack_3168;
  undefined8 local_3160;
  undefined8 uStack_3158;
  undefined8 local_3150;
  undefined8 uStack_3148;
  undefined8 local_3140;
  undefined8 local_3138;
  undefined8 local_3130 [4];
  undefined8 local_3110;
  int local_3108 [3062];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  int local_110 [4];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  int local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  int local_ac;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90 [16];
  int local_80;
  int local_7c;
  
  local_3130[1] = SUB168(*param_2,8);
  local_3130[0] = SUB168(*param_2,0);
  local_3130[3] = *(undefined8 *)(param_2[1] + 8);
  local_3130[2] = *(undefined8 *)param_2[1];
  local_3110 = *(undefined8 *)param_2[2];
  local_3108[0] = *(int *)(param_2[2] + 8);
  if (*(int *)(param_2[2] + 4) < 5) {
    lVar33 = *param_4;
    uVar48 = lVar33 - param_3;
    local_3110._4_4_ = (int)((ulong)local_3110 >> 0x20);
    iVar36 = *(int *)(param_2[2] + 8);
    if (local_3110._4_4_ < 5) {
      lVar37 = param_1[4] + (long)(int)local_3110 * 0x10;
      uVar59 = *(undefined4 *)(lVar37 + 0xc);
      uVar72 = *(undefined4 *)(lVar37 + 0x1c);
      uVar74 = *(undefined4 *)(lVar37 + 0x3c);
      *(undefined4 *)(lVar33 + 0x68) = *(undefined4 *)(lVar37 + 0x2c);
      *(undefined4 *)(lVar33 + 0x6c) = uVar74;
      *(undefined4 *)(lVar33 + 0x60) = uVar59;
      *(undefined4 *)(lVar33 + 100) = uVar72;
      lVar33 = *param_4;
      if (local_3110._4_4_ != 4) {
        lVar37 = (long)local_3110._4_4_ + 0x18;
        do {
          *(undefined4 *)(lVar33 + lVar37 * 4) = 0xffffffff;
          lVar33 = *param_4;
          lVar37 = lVar37 + 1;
        } while (lVar37 != 0x1c);
      }
      *(undefined1 *)(lVar33 + 0x70) = 1;
      lVar33 = *param_4;
    }
    param_3 = param_3 + (long)iVar36 * 0x80;
    *param_4 = lVar33 + 0x80;
    *(undefined1 *)(param_3 + 0x70) = 0;
    *(undefined8 *)(param_3 + 0x68) = 0;
    *(ulong *)(param_3 + 0x60) = uVar48 >> 7 & 0xffffffff;
  }
  else {
    uVar73 = 1;
    do {
      uVar48 = (long)(int)uVar73 - 1;
      uVar2 = local_3130[uVar48 * 6 + 4];
      local_3138 = *(undefined8 *)(local_3108 + uVar48 * 0xc);
      local_3150 = local_3130[uVar48 * 6 + 2];
      uStack_3148 = local_3130[uVar48 * 6 + 3];
      local_3140._4_4_ = (uint)((ulong)uVar2 >> 0x20);
      local_3160 = local_3130[uVar48 * 6];
      uStack_3158 = local_3130[uVar48 * 6 + 1];
      local_3140 = uVar2;
      if ((int)local_3140._4_4_ < 0x21) {
        uVar29 = (ulong)local_3140._4_4_;
        local_3140._0_4_ = (int)uVar2;
        if (*(int *)((long)param_1 + 0xc) == 0) {
          local_3160._4_4_ = (float)((ulong)local_3160 >> 0x20);
          local_3150._4_4_ = (float)((ulong)local_3150 >> 0x20);
          uVar60 = CONCAT44(local_3150._4_4_ - local_3160._4_4_,
                            (float)local_3150 - (float)local_3160);
          uStack_3148._0_4_ = (float)uStack_3148 - (float)uStack_3158;
          uVar60 = NEON_fmaxp(uVar60,uVar60,4);
          uVar60 = NEON_fmax(CONCAT17((char)((uint)(float)uStack_3148 >> 0x18),
                                      CONCAT16((char)((uint)(float)uStack_3148 >> 0x10),
                                               CONCAT15((char)((uint)(float)uStack_3148 >> 8),
                                                        CONCAT14(SUB41((float)uStack_3148,0),
                                                                 (float)uStack_3148)))),uVar60,4);
          cVar3 = (&DAT_03aadfd0)
                  [(-(uint)((float)((ulong)uVar60 >> 0x20) <= local_3150._4_4_ - local_3160._4_4_) &
                   2) + (uint)((float)uVar60 <= (float)local_3150 - (float)local_3160) |
                   -(uint)((float)uVar60 <= (float)uStack_3148) & 4];
          if (cVar3 == '\x01') {
            if (0 < (int)local_3140._4_4_) {
              uVar29 = 0;
              lVar33 = param_1[4] + (long)(int)local_3140 * 0x10;
              puVar32 = (undefined8 *)(lVar33 + -0x10);
              do {
                auVar56 = *(undefined1 (*) [16])(lVar33 + uVar29 * 0x10);
                if (uVar29 == 0) {
                  iVar36 = 0;
                }
                else {
                  uVar73 = (uint)(auVar56._4_4_ >> 0x1f) >> 1;
                  auVar25._4_4_ = (uint)(auVar56._12_4_ >> 0x1f) >> 1;
                  auVar25._0_4_ = (uint)(auVar56._8_4_ >> 0x1f) >> 1;
                  auVar25._8_8_ = 0;
                  auVar24._1_11_ = SUB1611(auVar25 << 0x40,5);
                  auVar24[0] = (byte)uVar73 ^ auVar56[4];
                  lVar37 = 0;
                  puVar40 = puVar32;
                  do {
                    uVar60 = *puVar40;
                    bVar75 = (byte)((ulong)uVar60 >> 0x38);
                    uVar28 = CONCAT13((char)bVar75 >> 7,(int3)((int)(char)bVar75 >> 7)) >> 1;
                    if ((float)CONCAT13((byte)((char)bVar75 >> 7) >> 1 ^ bVar75,
                                        CONCAT12((byte)(uVar28 >> 0x10) ^
                                                 (byte)((ulong)uVar60 >> 0x30),
                                                 CONCAT11((byte)(uVar28 >> 8) ^
                                                          (byte)((ulong)uVar60 >> 0x28),
                                                          (byte)uVar28 ^
                                                          (byte)((ulong)uVar60 >> 0x20)))) <=
                        (float)(CONCAT17((byte)((char)auVar56[7] >> 7) >> 1 ^ auVar56[7],
                                         CONCAT16((byte)(uVar73 >> 0x10) ^ auVar56[6],
                                                  CONCAT15((byte)(uVar73 >> 8) ^ auVar56[5],
                                                           auVar24._0_5_ << 0x20))) >> 0x20)) break;
                    lVar37 = lVar37 + -1;
                    puVar40[2] = *puVar40;
                    puVar40[3] = puVar40[1];
                    puVar40 = puVar40 + -2;
                  } while (0 < (long)(uVar29 + lVar37));
                  iVar36 = (int)uVar29 + (int)lVar37;
                }
                uVar29 = uVar29 + 1;
                puVar32 = puVar32 + 2;
                puVar40 = (undefined8 *)(lVar33 + (long)iVar36 * 0x10);
                puVar40[1] = auVar56._8_8_;
                *puVar40 = auVar56._0_8_;
              } while (uVar29 != local_3140._4_4_);
            }
          }
          else if (cVar3 == '\x02') {
            if (0 < (int)local_3140._4_4_) {
              uVar29 = 0;
              lVar33 = param_1[4] + (long)(int)local_3140 * 0x10;
              puVar32 = (undefined8 *)(lVar33 + -0x10);
              do {
                auVar56 = *(undefined1 (*) [16])(lVar33 + uVar29 * 0x10);
                if (uVar29 == 0) {
                  iVar36 = 0;
                }
                else {
                  uVar73 = (uint)(auVar56._8_4_ >> 0x1f) >> 1;
                  auVar61._0_8_ =
                       (long)CONCAT81(CONCAT44((uint)(auVar56._12_4_ >> 0x1f) >> 1,uVar73),
                                      auVar56[7]) << 0x38;
                  auVar61[8] = (byte)uVar73 ^ auVar56[8];
                  auVar61[9] = (byte)(uVar73 >> 8) ^ auVar56[9];
                  auVar61[10] = (byte)(uVar73 >> 0x10) ^ auVar56[10];
                  auVar61[0xb] = (byte)((char)auVar56[0xb] >> 7) >> 1 ^ auVar56[0xb];
                  lVar37 = 0;
                  puVar40 = puVar32;
                  do {
                    uVar60 = puVar40[1];
                    bVar75 = (byte)((ulong)uVar60 >> 0x18);
                    uVar73 = CONCAT13((char)bVar75 >> 7,(int3)((int)(char)bVar75 >> 7)) >> 1;
                    if ((float)CONCAT13((byte)((char)bVar75 >> 7) >> 1 ^ bVar75,
                                        CONCAT12((byte)(uVar73 >> 0x10) ^
                                                 (byte)((ulong)uVar60 >> 0x10),
                                                 CONCAT11((byte)(uVar73 >> 8) ^
                                                          (byte)((ulong)uVar60 >> 8),
                                                          (byte)uVar73 ^ (byte)uVar60))) <=
                        auVar61._8_4_) break;
                    lVar37 = lVar37 + -1;
                    puVar40[2] = *puVar40;
                    puVar40[3] = puVar40[1];
                    puVar40 = puVar40 + -2;
                  } while (0 < (long)(uVar29 + lVar37));
                  iVar36 = (int)uVar29 + (int)lVar37;
                }
                uVar29 = uVar29 + 1;
                puVar32 = puVar32 + 2;
                puVar40 = (undefined8 *)(lVar33 + (long)iVar36 * 0x10);
                puVar40[1] = auVar56._8_8_;
                *puVar40 = auVar56._0_8_;
              } while (uVar29 != local_3140._4_4_);
            }
          }
          else if ((cVar3 == '\0') && (0 < (int)local_3140._4_4_)) {
            uVar43 = 0;
            lVar33 = param_1[4] + (long)(int)local_3140 * 0x10;
            puVar32 = (undefined8 *)(lVar33 + -0x10);
            do {
              auVar56 = *(undefined1 (*) [16])(lVar33 + uVar43 * 0x10);
              if (uVar43 == 0) {
                iVar36 = 0;
              }
              else {
                uVar73 = (uint)(auVar56._0_4_ >> 0x1f) >> 1;
                lVar37 = 0;
                puVar40 = puVar32;
                do {
                  uVar60 = *puVar40;
                  bVar75 = (byte)((ulong)uVar60 >> 0x18);
                  uVar28 = CONCAT13((char)bVar75 >> 7,(int3)((int)(char)bVar75 >> 7)) >> 1;
                  if ((float)CONCAT13((byte)((char)bVar75 >> 7) >> 1 ^ bVar75,
                                      CONCAT12((byte)(uVar28 >> 0x10) ^
                                               (byte)((ulong)uVar60 >> 0x10),
                                               CONCAT11((byte)(uVar28 >> 8) ^
                                                        (byte)((ulong)uVar60 >> 8),
                                                        (byte)uVar28 ^ (byte)uVar60))) <=
                      (float)CONCAT13((byte)((char)auVar56[3] >> 7) >> 1 ^ auVar56[3],
                                      CONCAT12((byte)(uVar73 >> 0x10) ^ auVar56[2],
                                               CONCAT11((byte)(uVar73 >> 8) ^ auVar56[1],
                                                        (byte)uVar73 ^ auVar56[0])))) break;
                  lVar37 = lVar37 + -1;
                  puVar40[2] = *puVar40;
                  puVar40[3] = puVar40[1];
                  puVar40 = puVar40 + -2;
                } while (0 < (long)(uVar43 + lVar37));
                iVar36 = (int)uVar43 + (int)lVar37;
              }
              uVar43 = uVar43 + 1;
              puVar32 = puVar32 + 2;
              puVar40 = (undefined8 *)(lVar33 + (long)iVar36 * 0x10);
              puVar40[1] = auVar56._8_8_;
              *puVar40 = auVar56._0_8_;
            } while (uVar43 != uVar29);
          }
        }
        else if ((*(int *)((long)param_1 + 0xc) == 2) && (*(char *)((long)param_1 + 0x1f) != '\0'))
        {
          FUN_033526dc(param_1,&local_3160);
          uVar2 = local_3140;
        }
        else {
          pVar1 = (unkbyte9 *)(param_1[4] + (long)(int)local_3140 * 0x10);
          auVar56._8_8_ = 0x7f8000007f800000;
          auVar56._0_8_ = 0x7f8000007f800000;
          auVar51 = auVar56._0_12_;
          auVar71._8_8_ = 0x807fffff807fffff;
          auVar71._0_8_ = 0x807fffff807fffff;
          auVar50 = auVar71._0_12_;
          if (local_3140._4_4_ != 0) {
            auVar70._8_8_ = 0x7f8000007f800000;
            auVar70._0_8_ = 0x7f8000007f800000;
            auVar55._8_8_ = 0x807fffff807fffff;
            auVar55._0_8_ = 0x807fffff807fffff;
            uVar43 = (long)(int)local_3140._4_4_ * 0x10 - 0x10;
            uVar73 = ((uint)(uVar43 >> 4) & 0xfffffff) + 1;
            pVar35 = pVar1;
            if ((uVar73 & 7) != 0) {
              auVar70._8_4_ = 0x7f800000;
              auVar70._0_8_ = 0x7f8000007f800000;
              auVar70._12_4_ = 0x7f800000;
              lVar33 = -((ulong)uVar73 & 7);
              auVar55._8_4_ = 0x807fffff;
              auVar55._0_8_ = 0x807fffff807fffff;
              auVar55._12_4_ = 0x807fffff;
              pVar34 = pVar1;
              do {
                pVar35 = pVar34 + 1;
                uVar60 = *(undefined8 *)((long)pVar34 + 8);
                uVar78 = (undefined1)((ulong)uVar60 >> 8);
                uVar79 = (undefined1)((ulong)uVar60 >> 0x10);
                uVar80 = (undefined1)((ulong)uVar60 >> 0x18);
                uVar81 = (undefined1)((ulong)uVar60 >> 0x20);
                uVar82 = (undefined1)((ulong)uVar60 >> 0x28);
                uVar83 = (undefined1)((ulong)uVar60 >> 0x30);
                uVar84 = (undefined1)((ulong)uVar60 >> 0x38);
                auVar5[9] = uVar78;
                auVar5._0_9_ = *pVar34;
                auVar5[10] = uVar79;
                auVar5[0xb] = uVar80;
                auVar5[0xc] = uVar81;
                auVar5[0xd] = uVar82;
                auVar5[0xe] = uVar83;
                auVar5[0xf] = uVar84;
                auVar70 = NEON_smin(auVar70,auVar5,4);
                auVar6[9] = uVar78;
                auVar6._0_9_ = *pVar34;
                auVar6[10] = uVar79;
                auVar6[0xb] = uVar80;
                auVar6[0xc] = uVar81;
                auVar6[0xd] = uVar82;
                auVar6[0xe] = uVar83;
                auVar6[0xf] = uVar84;
                auVar55 = NEON_smax(auVar55,auVar6,4);
                bVar27 = lVar33 != -1;
                lVar33 = lVar33 + 1;
                pVar34 = pVar35;
              } while (bVar27);
            }
            auVar50 = auVar55._0_12_;
            auVar51 = auVar70._0_12_;
            if (0x6f < uVar43) {
              do {
                uVar60 = *(undefined8 *)((long)pVar35 + 8);
                uVar78 = (undefined1)((ulong)uVar60 >> 8);
                uVar79 = (undefined1)((ulong)uVar60 >> 0x10);
                uVar80 = (undefined1)((ulong)uVar60 >> 0x18);
                uVar81 = (undefined1)((ulong)uVar60 >> 0x20);
                uVar82 = (undefined1)((ulong)uVar60 >> 0x28);
                uVar83 = (undefined1)((ulong)uVar60 >> 0x30);
                uVar84 = (undefined1)((ulong)uVar60 >> 0x38);
                uVar60 = *(undefined8 *)((long)pVar35 + 0x18);
                uVar85 = (undefined1)((ulong)uVar60 >> 8);
                uVar86 = (undefined1)((ulong)uVar60 >> 0x10);
                uVar87 = (undefined1)((ulong)uVar60 >> 0x18);
                uVar88 = (undefined1)((ulong)uVar60 >> 0x20);
                uVar89 = (undefined1)((ulong)uVar60 >> 0x28);
                uVar90 = (undefined1)((ulong)uVar60 >> 0x30);
                uVar91 = (undefined1)((ulong)uVar60 >> 0x38);
                auVar7[9] = uVar78;
                auVar7._0_9_ = *pVar35;
                auVar7[10] = uVar79;
                auVar7[0xb] = uVar80;
                auVar7[0xc] = uVar81;
                auVar7[0xd] = uVar82;
                auVar7[0xe] = uVar83;
                auVar7[0xf] = uVar84;
                auVar71 = NEON_smin(auVar70,auVar7,4);
                auVar8[9] = uVar78;
                auVar8._0_9_ = *pVar35;
                auVar8[10] = uVar79;
                auVar8[0xb] = uVar80;
                auVar8[0xc] = uVar81;
                auVar8[0xd] = uVar82;
                auVar8[0xe] = uVar83;
                auVar8[0xf] = uVar84;
                auVar56 = NEON_smax(auVar55,auVar8,4);
                auVar16[9] = uVar85;
                auVar16._0_9_ = pVar35[1];
                auVar16[10] = uVar86;
                auVar16[0xb] = uVar87;
                auVar16[0xc] = uVar88;
                auVar16[0xd] = uVar89;
                auVar16[0xe] = uVar90;
                auVar16[0xf] = uVar91;
                auVar71 = NEON_smin(auVar71,auVar16,4);
                auVar17[9] = uVar85;
                auVar17._0_9_ = pVar35[1];
                auVar17[10] = uVar86;
                auVar17[0xb] = uVar87;
                auVar17[0xc] = uVar88;
                auVar17[0xd] = uVar89;
                auVar17[0xe] = uVar90;
                auVar17[0xf] = uVar91;
                auVar56 = NEON_smax(auVar56,auVar17,4);
                uVar60 = *(undefined8 *)((long)pVar35 + 0x28);
                uVar78 = (undefined1)((ulong)uVar60 >> 8);
                uVar79 = (undefined1)((ulong)uVar60 >> 0x10);
                uVar80 = (undefined1)((ulong)uVar60 >> 0x18);
                uVar81 = (undefined1)((ulong)uVar60 >> 0x20);
                uVar82 = (undefined1)((ulong)uVar60 >> 0x28);
                uVar83 = (undefined1)((ulong)uVar60 >> 0x30);
                uVar84 = (undefined1)((ulong)uVar60 >> 0x38);
                uVar60 = *(undefined8 *)((long)pVar35 + 0x38);
                uVar85 = (undefined1)((ulong)uVar60 >> 8);
                uVar86 = (undefined1)((ulong)uVar60 >> 0x10);
                uVar87 = (undefined1)((ulong)uVar60 >> 0x18);
                uVar88 = (undefined1)((ulong)uVar60 >> 0x20);
                uVar89 = (undefined1)((ulong)uVar60 >> 0x28);
                uVar90 = (undefined1)((ulong)uVar60 >> 0x30);
                uVar91 = (undefined1)((ulong)uVar60 >> 0x38);
                auVar9[9] = uVar78;
                auVar9._0_9_ = pVar35[2];
                auVar9[10] = uVar79;
                auVar9[0xb] = uVar80;
                auVar9[0xc] = uVar81;
                auVar9[0xd] = uVar82;
                auVar9[0xe] = uVar83;
                auVar9[0xf] = uVar84;
                auVar71 = NEON_smin(auVar71,auVar9,4);
                auVar10[9] = uVar78;
                auVar10._0_9_ = pVar35[2];
                auVar10[10] = uVar79;
                auVar10[0xb] = uVar80;
                auVar10[0xc] = uVar81;
                auVar10[0xd] = uVar82;
                auVar10[0xe] = uVar83;
                auVar10[0xf] = uVar84;
                auVar56 = NEON_smax(auVar56,auVar10,4);
                auVar18[9] = uVar85;
                auVar18._0_9_ = pVar35[3];
                auVar18[10] = uVar86;
                auVar18[0xb] = uVar87;
                auVar18[0xc] = uVar88;
                auVar18[0xd] = uVar89;
                auVar18[0xe] = uVar90;
                auVar18[0xf] = uVar91;
                auVar71 = NEON_smin(auVar71,auVar18,4);
                auVar19[9] = uVar85;
                auVar19._0_9_ = pVar35[3];
                auVar19[10] = uVar86;
                auVar19[0xb] = uVar87;
                auVar19[0xc] = uVar88;
                auVar19[0xd] = uVar89;
                auVar19[0xe] = uVar90;
                auVar19[0xf] = uVar91;
                auVar56 = NEON_smax(auVar56,auVar19,4);
                uVar60 = *(undefined8 *)((long)pVar35 + 0x48);
                uVar78 = (undefined1)((ulong)uVar60 >> 8);
                uVar79 = (undefined1)((ulong)uVar60 >> 0x10);
                uVar80 = (undefined1)((ulong)uVar60 >> 0x18);
                uVar81 = (undefined1)((ulong)uVar60 >> 0x20);
                uVar82 = (undefined1)((ulong)uVar60 >> 0x28);
                uVar83 = (undefined1)((ulong)uVar60 >> 0x30);
                uVar84 = (undefined1)((ulong)uVar60 >> 0x38);
                uVar60 = *(undefined8 *)((long)pVar35 + 0x58);
                uVar85 = (undefined1)((ulong)uVar60 >> 8);
                uVar86 = (undefined1)((ulong)uVar60 >> 0x10);
                uVar87 = (undefined1)((ulong)uVar60 >> 0x18);
                uVar88 = (undefined1)((ulong)uVar60 >> 0x20);
                uVar89 = (undefined1)((ulong)uVar60 >> 0x28);
                uVar90 = (undefined1)((ulong)uVar60 >> 0x30);
                uVar91 = (undefined1)((ulong)uVar60 >> 0x38);
                auVar11[9] = uVar78;
                auVar11._0_9_ = pVar35[4];
                auVar11[10] = uVar79;
                auVar11[0xb] = uVar80;
                auVar11[0xc] = uVar81;
                auVar11[0xd] = uVar82;
                auVar11[0xe] = uVar83;
                auVar11[0xf] = uVar84;
                auVar71 = NEON_smin(auVar71,auVar11,4);
                auVar12[9] = uVar78;
                auVar12._0_9_ = pVar35[4];
                auVar12[10] = uVar79;
                auVar12[0xb] = uVar80;
                auVar12[0xc] = uVar81;
                auVar12[0xd] = uVar82;
                auVar12[0xe] = uVar83;
                auVar12[0xf] = uVar84;
                auVar56 = NEON_smax(auVar56,auVar12,4);
                auVar20[9] = uVar85;
                auVar20._0_9_ = pVar35[5];
                auVar20[10] = uVar86;
                auVar20[0xb] = uVar87;
                auVar20[0xc] = uVar88;
                auVar20[0xd] = uVar89;
                auVar20[0xe] = uVar90;
                auVar20[0xf] = uVar91;
                auVar71 = NEON_smin(auVar71,auVar20,4);
                auVar21[9] = uVar85;
                auVar21._0_9_ = pVar35[5];
                auVar21[10] = uVar86;
                auVar21[0xb] = uVar87;
                auVar21[0xc] = uVar88;
                auVar21[0xd] = uVar89;
                auVar21[0xe] = uVar90;
                auVar21[0xf] = uVar91;
                auVar56 = NEON_smax(auVar56,auVar21,4);
                pVar34 = pVar35 + 6;
                uVar60 = *(undefined8 *)((long)pVar35 + 0x68);
                uVar78 = (undefined1)((ulong)uVar60 >> 8);
                uVar79 = (undefined1)((ulong)uVar60 >> 0x10);
                uVar80 = (undefined1)((ulong)uVar60 >> 0x18);
                uVar81 = (undefined1)((ulong)uVar60 >> 0x20);
                uVar82 = (undefined1)((ulong)uVar60 >> 0x28);
                uVar83 = (undefined1)((ulong)uVar60 >> 0x30);
                uVar84 = (undefined1)((ulong)uVar60 >> 0x38);
                pVar4 = pVar35 + 7;
                uVar60 = *(undefined8 *)((long)pVar35 + 0x78);
                uVar85 = (undefined1)((ulong)uVar60 >> 8);
                uVar86 = (undefined1)((ulong)uVar60 >> 0x10);
                uVar87 = (undefined1)((ulong)uVar60 >> 0x18);
                uVar88 = (undefined1)((ulong)uVar60 >> 0x20);
                uVar89 = (undefined1)((ulong)uVar60 >> 0x28);
                uVar90 = (undefined1)((ulong)uVar60 >> 0x30);
                uVar91 = (undefined1)((ulong)uVar60 >> 0x38);
                pVar35 = pVar35 + 8;
                auVar13[9] = uVar78;
                auVar13._0_9_ = *pVar34;
                auVar13[10] = uVar79;
                auVar13[0xb] = uVar80;
                auVar13[0xc] = uVar81;
                auVar13[0xd] = uVar82;
                auVar13[0xe] = uVar83;
                auVar13[0xf] = uVar84;
                auVar71 = NEON_smin(auVar71,auVar13,4);
                auVar14[9] = uVar78;
                auVar14._0_9_ = *pVar34;
                auVar14[10] = uVar79;
                auVar14[0xb] = uVar80;
                auVar14[0xc] = uVar81;
                auVar14[0xd] = uVar82;
                auVar14[0xe] = uVar83;
                auVar14[0xf] = uVar84;
                auVar56 = NEON_smax(auVar56,auVar14,4);
                auVar22[9] = uVar85;
                auVar22._0_9_ = *pVar4;
                auVar22[10] = uVar86;
                auVar22[0xb] = uVar87;
                auVar22[0xc] = uVar88;
                auVar22[0xd] = uVar89;
                auVar22[0xe] = uVar90;
                auVar22[0xf] = uVar91;
                auVar70 = NEON_smin(auVar71,auVar22,4);
                auVar51 = auVar70._0_12_;
                auVar23[9] = uVar85;
                auVar23._0_9_ = *pVar4;
                auVar23[10] = uVar86;
                auVar23[0xb] = uVar87;
                auVar23[0xc] = uVar88;
                auVar23[0xd] = uVar89;
                auVar23[0xe] = uVar90;
                auVar23[0xf] = uVar91;
                auVar55 = NEON_smax(auVar56,auVar23,4);
                auVar50 = auVar55._0_12_;
              } while (pVar35 != pVar1 + (int)local_3140._4_4_);
            }
          }
          bVar75 = (char)auVar51[3] >> 7;
          bVar76 = (char)auVar51[7] >> 7;
          bVar77 = (char)auVar51[0xb] >> 7;
          uVar73 = CONCAT13(bVar75,CONCAT12(bVar75,CONCAT11(bVar75,bVar75))) >> 1;
          uVar28 = CONCAT13(bVar76,CONCAT12(bVar76,CONCAT11(bVar76,bVar76))) >> 1;
          uVar15 = CONCAT13(bVar77,CONCAT12(bVar77,CONCAT11(bVar77,bVar77))) >> 1;
          fVar57 = (float)CONCAT13(bVar75 >> 1 ^ auVar51[3],
                                   CONCAT12((byte)(uVar73 >> 0x10) ^ auVar51[2],
                                            CONCAT11((byte)(uVar73 >> 8) ^ auVar51[1],
                                                     (byte)uVar73 ^ auVar51[0])));
          auVar62._0_8_ =
               CONCAT17(bVar76 >> 1 ^ auVar51[7],
                        CONCAT16((byte)(uVar28 >> 0x10) ^ auVar51[6],
                                 CONCAT15((byte)(uVar28 >> 8) ^ auVar51[5],
                                          CONCAT14((byte)uVar28 ^ auVar51[4],fVar57))));
          auVar62[8] = (byte)uVar15 ^ auVar51[8];
          auVar62[9] = (byte)(uVar15 >> 8) ^ auVar51[9];
          auVar62[10] = (byte)(uVar15 >> 0x10) ^ auVar51[10];
          auVar62[0xb] = bVar77 >> 1 ^ auVar51[0xb];
          bVar75 = (char)auVar50[3] >> 7;
          bVar76 = (char)auVar50[7] >> 7;
          bVar77 = (char)auVar50[0xb] >> 7;
          uVar73 = CONCAT13(bVar75,CONCAT12(bVar75,CONCAT11(bVar75,bVar75))) >> 1;
          uVar28 = CONCAT13(bVar76,CONCAT12(bVar76,CONCAT11(bVar76,bVar76))) >> 1;
          uVar15 = CONCAT13(bVar77,CONCAT12(bVar77,CONCAT11(bVar77,bVar77))) >> 1;
          fVar49 = (float)CONCAT13(bVar75 >> 1 ^ auVar50[3],
                                   CONCAT12((byte)(uVar73 >> 0x10) ^ auVar50[2],
                                            CONCAT11((byte)(uVar73 >> 8) ^ auVar50[1],
                                                     (byte)uVar73 ^ auVar50[0])));
          auVar51._0_8_ =
               CONCAT17(bVar76 >> 1 ^ auVar50[7],
                        CONCAT16((byte)(uVar28 >> 0x10) ^ auVar50[6],
                                 CONCAT15((byte)(uVar28 >> 8) ^ auVar50[5],
                                          CONCAT14((byte)uVar28 ^ auVar50[4],fVar49))));
          auVar51[8] = (byte)uVar15 ^ auVar50[8];
          auVar51[9] = (byte)(uVar15 >> 8) ^ auVar50[9];
          auVar51[10] = (byte)(uVar15 >> 0x10) ^ auVar50[10];
          auVar51[0xb] = bVar77 >> 1 ^ auVar50[0xb];
          fVar49 = fVar49 - fVar57;
          fVar57 = (float)((ulong)auVar51._0_8_ >> 0x20) - (float)((ulong)auVar62._0_8_ >> 0x20);
          uVar60 = CONCAT44(fVar57,fVar49);
          fVar58 = auVar51._8_4_ - auVar62._8_4_;
          uVar60 = NEON_fmaxp(uVar60,uVar60,4);
          uVar60 = NEON_fmax(CONCAT17((char)((uint)fVar58 >> 0x18),
                                      CONCAT16((char)((uint)fVar58 >> 0x10),
                                               CONCAT15((char)((uint)fVar58 >> 8),
                                                        CONCAT14(SUB41(fVar58,0),fVar58)))),uVar60,4
                            );
          cVar3 = (&DAT_03aadfd0)
                  [(-(uint)((float)((ulong)uVar60 >> 0x20) <= fVar57) & 2) +
                   (uint)((float)uVar60 <= fVar49) | -(uint)((float)uVar60 <= fVar58) & 4];
          if (cVar3 == '\x01') {
            if (0 < (int)local_3140._4_4_) {
              uVar43 = 0;
              pVar35 = pVar1 + -1;
              do {
                auVar56 = *(undefined1 (*) [16])(pVar1 + uVar43);
                if (uVar43 == 0) {
                  iVar36 = 0;
                }
                else {
                  uVar73 = (uint)(auVar56._4_4_ >> 0x1f) >> 1;
                  auVar26._4_4_ = (uint)(auVar56._12_4_ >> 0x1f) >> 1;
                  auVar26._0_4_ = (uint)(auVar56._8_4_ >> 0x1f) >> 1;
                  auVar26._8_8_ = 0;
                  auVar50._1_11_ = SUB1611(auVar26 << 0x40,5);
                  auVar50[0] = (byte)uVar73 ^ auVar56[4];
                  lVar33 = 0;
                  pVar34 = pVar35;
                  do {
                    uVar60 = *(undefined8 *)pVar34;
                    bVar75 = (byte)((ulong)uVar60 >> 0x38);
                    uVar28 = CONCAT13((char)bVar75 >> 7,(int3)((int)(char)bVar75 >> 7)) >> 1;
                    if ((float)CONCAT13((byte)((char)bVar75 >> 7) >> 1 ^ bVar75,
                                        CONCAT12((byte)(uVar28 >> 0x10) ^
                                                 (byte)((ulong)uVar60 >> 0x30),
                                                 CONCAT11((byte)(uVar28 >> 8) ^
                                                          (byte)((ulong)uVar60 >> 0x28),
                                                          (byte)uVar28 ^
                                                          (byte)((ulong)uVar60 >> 0x20)))) <=
                        (float)(CONCAT17((byte)((char)auVar56[7] >> 7) >> 1 ^ auVar56[7],
                                         CONCAT16((byte)(uVar73 >> 0x10) ^ auVar56[6],
                                                  CONCAT15((byte)(uVar73 >> 8) ^ auVar56[5],
                                                           auVar50._0_5_ << 0x20))) >> 0x20)) break;
                    lVar33 = lVar33 + -1;
                    *(undefined8 *)(pVar34 + 1) = *(undefined8 *)pVar34;
                    *(undefined8 *)((long)pVar34 + 0x18) = *(undefined8 *)((long)pVar34 + 8);
                    pVar34 = pVar34 + -1;
                  } while (0 < (long)(uVar43 + lVar33));
                  iVar36 = (int)uVar43 + (int)lVar33;
                }
                *(long *)((long)(pVar1 + iVar36) + 8) = auVar56._8_8_;
                *(long *)(pVar1 + iVar36) = auVar56._0_8_;
                uVar43 = uVar43 + 1;
                pVar35 = pVar35 + 1;
              } while (uVar43 != uVar29);
            }
          }
          else if (cVar3 == '\x02') {
            if (0 < (int)local_3140._4_4_) {
              uVar43 = 0;
              pVar35 = pVar1 + -1;
              do {
                auVar56 = *(undefined1 (*) [16])(pVar1 + uVar43);
                if (uVar43 == 0) {
                  iVar36 = 0;
                }
                else {
                  uVar73 = (uint)(auVar56._8_4_ >> 0x1f) >> 1;
                  auVar63._0_8_ =
                       (long)CONCAT81(CONCAT44((uint)(auVar56._12_4_ >> 0x1f) >> 1,uVar73),
                                      auVar56[7]) << 0x38;
                  auVar63[8] = (byte)uVar73 ^ auVar56[8];
                  auVar63[9] = (byte)(uVar73 >> 8) ^ auVar56[9];
                  auVar63[10] = (byte)(uVar73 >> 0x10) ^ auVar56[10];
                  auVar63[0xb] = (byte)((char)auVar56[0xb] >> 7) >> 1 ^ auVar56[0xb];
                  lVar33 = 0;
                  pVar34 = pVar35;
                  do {
                    uVar60 = *(undefined8 *)((long)pVar34 + 8);
                    bVar75 = (byte)((ulong)uVar60 >> 0x18);
                    uVar73 = CONCAT13((char)bVar75 >> 7,(int3)((int)(char)bVar75 >> 7)) >> 1;
                    if ((float)CONCAT13((byte)((char)bVar75 >> 7) >> 1 ^ bVar75,
                                        CONCAT12((byte)(uVar73 >> 0x10) ^
                                                 (byte)((ulong)uVar60 >> 0x10),
                                                 CONCAT11((byte)(uVar73 >> 8) ^
                                                          (byte)((ulong)uVar60 >> 8),
                                                          (byte)uVar73 ^ (byte)uVar60))) <=
                        auVar63._8_4_) break;
                    lVar33 = lVar33 + -1;
                    *(undefined8 *)(pVar34 + 1) = *(undefined8 *)pVar34;
                    *(undefined8 *)((long)pVar34 + 0x18) = *(undefined8 *)((long)pVar34 + 8);
                    pVar34 = pVar34 + -1;
                  } while (0 < (long)(uVar43 + lVar33));
                  iVar36 = (int)uVar43 + (int)lVar33;
                }
                *(long *)((long)(pVar1 + iVar36) + 8) = auVar56._8_8_;
                *(long *)(pVar1 + iVar36) = auVar56._0_8_;
                uVar43 = uVar43 + 1;
                pVar35 = pVar35 + 1;
              } while (uVar43 != uVar29);
            }
          }
          else if (cVar3 == '\0' && 0 < (int)local_3140._4_4_) {
            uVar43 = 0;
            pVar35 = pVar1 + -1;
            do {
              auVar56 = *(undefined1 (*) [16])(pVar1 + uVar43);
              if (uVar43 == 0) {
                iVar36 = 0;
              }
              else {
                uVar73 = (uint)(auVar56._0_4_ >> 0x1f) >> 1;
                lVar33 = 0;
                pVar34 = pVar35;
                do {
                  uVar60 = *(undefined8 *)pVar34;
                  bVar75 = (byte)((ulong)uVar60 >> 0x18);
                  uVar28 = CONCAT13((char)bVar75 >> 7,(int3)((int)(char)bVar75 >> 7)) >> 1;
                  if ((float)CONCAT13((byte)((char)bVar75 >> 7) >> 1 ^ bVar75,
                                      CONCAT12((byte)(uVar28 >> 0x10) ^
                                               (byte)((ulong)uVar60 >> 0x10),
                                               CONCAT11((byte)(uVar28 >> 8) ^
                                                        (byte)((ulong)uVar60 >> 8),
                                                        (byte)uVar28 ^ (byte)uVar60))) <=
                      (float)CONCAT13((byte)((char)auVar56[3] >> 7) >> 1 ^ auVar56[3],
                                      CONCAT12((byte)(uVar73 >> 0x10) ^ auVar56[2],
                                               CONCAT11((byte)(uVar73 >> 8) ^ auVar56[1],
                                                        (byte)uVar73 ^ auVar56[0])))) break;
                  lVar33 = lVar33 + -1;
                  *(undefined8 *)(pVar34 + 1) = *(undefined8 *)pVar34;
                  *(undefined8 *)((long)pVar34 + 0x18) = *(undefined8 *)((long)pVar34 + 8);
                  pVar34 = pVar34 + -1;
                } while (0 < (long)(uVar43 + lVar33));
                iVar36 = (int)uVar43 + (int)lVar33;
              }
              *(long *)((long)(pVar1 + iVar36) + 8) = auVar56._8_8_;
              *(long *)(pVar1 + iVar36) = auVar56._0_8_;
              uVar43 = uVar43 + 1;
              pVar35 = pVar35 + 1;
            } while (uVar43 != uVar29);
          }
        }
        local_3140 = uVar2;
        do {
          if ((int)local_3140._4_4_ < 5) {
            if (local_3140._4_4_ == 0) {
              lVar33 = param_3 + (long)(int)local_3138 * 0x80;
              *(undefined1 *)(lVar33 + 0x70) = 0;
              *(undefined8 *)(lVar33 + 0x60) = 0;
              *(undefined8 *)(lVar33 + 0x68) = 0;
              break;
            }
            lVar33 = 0;
          }
          else {
            local_110[1] = 4;
            local_110[0] = (int)local_3140;
            if ((int)(local_3140._4_4_ + -4) < 5) {
              lVar33 = 1;
              local_3140._4_4_ = local_3140._4_4_ + -4;
              local_3140._0_4_ = (int)local_3140 + 4;
            }
            else {
              local_e0 = (int)local_3140 + 4;
              local_dc = 4;
              if ((int)(local_3140._4_4_ + -8) < 5) {
                lVar33 = 2;
                local_3140._4_4_ = local_3140._4_4_ + -8;
                local_3140._0_4_ = (int)local_3140 + 8;
              }
              else {
                local_ac = 4;
                lVar33 = 3;
                local_b0 = (int)local_3140 + 8;
                local_3140._4_4_ = local_3140._4_4_ + -0xc;
                local_3140._0_4_ = (int)local_3140 + 0xc;
              }
            }
          }
          local_110[lVar33 * 0xc] = (int)local_3140;
          local_110[lVar33 * 0xc + 1] = local_3140._4_4_;
          lVar38 = param_1[4];
          lVar37 = *param_4;
          uVar73 = (int)lVar33 + 1;
          uVar43 = (ulong)uVar73;
          uVar29 = uVar43 & 3;
          iVar36 = (int)local_3138;
          if (uVar43 - 1 < 3) {
            auVar52 = ZEXT816(0);
            iVar39 = 0;
            uVar41 = 0;
          }
          else {
            auVar52 = ZEXT816(0);
            iVar39 = 0;
            uVar41 = 0;
            lVar33 = uVar43 - uVar29;
            do {
              iVar46 = (int)((ulong)(lVar37 - param_3) >> 7);
              auVar53._4_12_ = auVar52._4_12_;
              auVar53._0_4_ = iVar46;
              iVar42 = local_110[uVar41 * 0xc + 1];
              iVar31 = local_110[uVar41 * 0xc];
              if (iVar42 < 5) {
                lVar45 = lVar38 + (long)iVar31 * 0x10;
                auVar64._0_8_ =
                     CONCAT44(*(undefined4 *)(lVar45 + 0x1c),*(undefined4 *)(lVar45 + 0xc));
                auVar64._8_4_ = *(undefined4 *)(lVar45 + 0x2c);
                auVar64._12_4_ = *(undefined4 *)(lVar45 + 0x3c);
                *(long *)(lVar37 + 0x68) = auVar64._8_8_;
                *(undefined8 *)(lVar37 + 0x60) = auVar64._0_8_;
                iVar31 = local_110[uVar41 * 0xc + 1];
                lVar37 = *param_4;
                if (iVar31 < 4) {
                  lVar45 = (long)iVar31 + 0x18;
                  do {
                    *(undefined4 *)(lVar37 + lVar45 * 4) = 0xffffffff;
                    lVar37 = *param_4;
                    lVar45 = lVar45 + 1;
                  } while (lVar45 != 0x1c);
                }
                *(undefined1 *)(lVar37 + 0x70) = 1;
                lVar37 = *param_4;
                iVar42 = local_3140._4_4_;
                iVar31 = (int)local_3140;
                iVar46 = iVar36;
              }
              else {
                iVar39 = iVar39 + 1;
              }
              uVar43 = uVar41 | 1;
              lVar45 = lVar37 + 0x80;
              *param_4 = lVar45;
              uStack_3188 = auVar52._8_8_;
              local_3190 = auVar53._0_8_;
              iVar47 = (int)((ulong)(lVar45 - param_3) >> 7);
              *(int *)((ulong)&local_3170 | (ulong)((int)uVar43 == 1) << 2) = iVar47;
              iVar30 = local_110[uVar43 * 0xc + 1];
              iVar36 = local_110[uVar43 * 0xc];
              if (iVar30 < 5) {
                lVar45 = lVar38 + (long)iVar36 * 0x10;
                auVar65._0_8_ =
                     CONCAT44(*(undefined4 *)(lVar45 + 0x1c),*(undefined4 *)(lVar45 + 0xc));
                auVar65._8_4_ = *(undefined4 *)(lVar45 + 0x2c);
                auVar65._12_4_ = *(undefined4 *)(lVar45 + 0x3c);
                *(long *)(lVar37 + 0xe8) = auVar65._8_8_;
                *(undefined8 *)(lVar37 + 0xe0) = auVar65._0_8_;
                iVar36 = local_110[uVar43 * 0xc + 1];
                lVar37 = *param_4;
                if (iVar36 < 4) {
                  lVar45 = (long)iVar36 + 0x18;
                  do {
                    *(undefined4 *)(lVar37 + lVar45 * 4) = 0xffffffff;
                    lVar37 = *param_4;
                    lVar45 = lVar45 + 1;
                  } while (lVar45 != 0x1c);
                }
                *(undefined1 *)(lVar37 + 0x70) = 1;
                lVar45 = *param_4;
                iVar30 = iVar42;
                iVar36 = iVar31;
                iVar47 = iVar46;
              }
              else {
                iVar39 = iVar39 + 1;
              }
              uVar43 = uVar41 | 2;
              uVar28 = (uint)uVar43;
              if (2 < uVar28 - 1) {
                uVar28 = 0;
              }
              lVar44 = lVar45 + 0x80;
              *param_4 = lVar44;
              iVar46 = (int)((ulong)(lVar44 - param_3) >> 7);
              *(int *)((ulong)&local_3180 | ((ulong)uVar28 & 3) << 2) = iVar46;
              iVar42 = local_110[uVar43 * 0xc + 1];
              iVar31 = local_110[uVar43 * 0xc];
              if (iVar42 < 5) {
                lVar37 = lVar38 + (long)iVar31 * 0x10;
                auVar66._0_8_ =
                     CONCAT44(*(undefined4 *)(lVar37 + 0x1c),*(undefined4 *)(lVar37 + 0xc));
                auVar66._8_4_ = *(undefined4 *)(lVar37 + 0x2c);
                auVar66._12_4_ = *(undefined4 *)(lVar37 + 0x3c);
                *(long *)(lVar45 + 0xe8) = auVar66._8_8_;
                *(undefined8 *)(lVar45 + 0xe0) = auVar66._0_8_;
                iVar31 = local_110[uVar43 * 0xc + 1];
                lVar37 = *param_4;
                if (iVar31 < 4) {
                  lVar45 = (long)iVar31 + 0x18;
                  do {
                    *(undefined4 *)(lVar37 + lVar45 * 4) = 0xffffffff;
                    lVar37 = *param_4;
                    lVar45 = lVar45 + 1;
                  } while (lVar45 != 0x1c);
                }
                *(undefined1 *)(lVar37 + 0x70) = 1;
                lVar44 = *param_4;
                iVar42 = iVar30;
                iVar31 = iVar36;
                iVar46 = iVar47;
              }
              else {
                iVar39 = iVar39 + 1;
              }
              uVar43 = uVar41 | 3;
              lVar37 = lVar44 + 0x80;
              *param_4 = lVar37;
              lVar45 = 3;
              if ((int)uVar43 != 3) {
                lVar45 = 0;
              }
              iVar36 = (int)((ulong)(lVar37 - param_3) >> 7);
              *(int *)((ulong)&local_3190 | lVar45 << 2) = iVar36;
              auVar52._8_8_ = uStack_3188;
              auVar52._0_8_ = local_3190;
              local_3140._4_4_ = local_110[uVar43 * 0xc + 1];
              local_3140._0_4_ = local_110[uVar43 * 0xc];
              if ((int)local_3140._4_4_ < 5) {
                lVar37 = lVar38 + (long)(int)local_3140 * 0x10;
                auVar67._0_8_ =
                     CONCAT44(*(undefined4 *)(lVar37 + 0x1c),*(undefined4 *)(lVar37 + 0xc));
                auVar67._8_4_ = *(undefined4 *)(lVar37 + 0x2c);
                auVar67._12_4_ = *(undefined4 *)(lVar37 + 0x3c);
                *(long *)(lVar44 + 0xe8) = auVar67._8_8_;
                *(undefined8 *)(lVar44 + 0xe0) = auVar67._0_8_;
                iVar36 = local_110[uVar43 * 0xc + 1];
                lVar37 = *param_4;
                if (iVar36 < 4) {
                  lVar45 = (long)iVar36 + 0x18;
                  do {
                    *(undefined4 *)(lVar37 + lVar45 * 4) = 0xffffffff;
                    lVar37 = *param_4;
                    lVar45 = lVar45 + 1;
                  } while (lVar45 != 0x1c);
                }
                *(undefined1 *)(lVar37 + 0x70) = 1;
                lVar37 = *param_4;
                local_3140._4_4_ = iVar42;
                local_3140._0_4_ = iVar31;
                iVar36 = iVar46;
              }
              else {
                iVar39 = iVar39 + 1;
              }
              lVar37 = lVar37 + 0x80;
              uVar41 = uVar41 + 4;
              *param_4 = lVar37;
              lVar33 = lVar33 + -4;
              local_3180 = local_3190;
              uStack_3178 = uStack_3188;
              local_3170 = local_3190;
              uStack_3168 = uStack_3188;
            } while (lVar33 != 0);
          }
          if ((uVar73 & 3) != 0) {
            do {
              uVar73 = (uint)uVar41;
              if (2 < uVar73 - 1) {
                uVar73 = 0;
              }
              iVar42 = (int)((ulong)(lVar37 - param_3) >> 7);
              *(int *)((ulong)&local_31a0 | ((ulong)uVar73 & 3) << 2) = iVar42;
              iVar31 = local_110[uVar41 * 0xc + 1];
              if (iVar31 < 5) {
                lVar33 = lVar38 + (long)local_110[uVar41 * 0xc] * 0x10;
                auVar68._0_8_ =
                     CONCAT44(*(undefined4 *)(lVar33 + 0x1c),*(undefined4 *)(lVar33 + 0xc));
                auVar68._8_4_ = *(undefined4 *)(lVar33 + 0x2c);
                auVar68._12_4_ = *(undefined4 *)(lVar33 + 0x3c);
                *(long *)(lVar37 + 0x68) = auVar68._8_8_;
                *(undefined8 *)(lVar37 + 0x60) = auVar68._0_8_;
                iVar31 = local_110[uVar41 * 0xc + 1];
                lVar33 = *param_4;
                if (iVar31 < 4) {
                  lVar37 = (long)iVar31 + 0x18;
                  do {
                    *(undefined4 *)(lVar33 + lVar37 * 4) = 0xffffffff;
                    lVar33 = *param_4;
                    lVar37 = lVar37 + 1;
                  } while (lVar37 != 0x1c);
                }
                *(undefined1 *)(lVar33 + 0x70) = 1;
                lVar37 = *param_4;
              }
              else {
                iVar39 = iVar39 + 1;
                local_3140._4_4_ = iVar31;
                local_3140._0_4_ = local_110[uVar41 * 0xc];
                iVar36 = iVar42;
              }
              lVar37 = lVar37 + 0x80;
              uVar41 = uVar41 + 1;
              *param_4 = lVar37;
              uVar29 = uVar29 - 1;
              local_31a0 = auVar52._0_8_;
              uStack_3198 = auVar52._8_8_;
            } while (uVar29 != 0);
          }
          lVar33 = param_3 + (long)(int)local_3138 * 0x80;
          *(undefined1 *)(lVar33 + 0x70) = 0;
          *(long *)(lVar33 + 0x68) = auVar52._8_8_;
          *(long *)(lVar33 + 0x60) = auVar52._0_8_;
          local_3138._0_4_ = iVar36;
        } while (iVar39 != 0);
      }
      else {
        (**(code **)(*param_1 + 0x20))(param_1,&local_3160,&local_130);
        lVar37 = *param_4;
        iVar36 = (int)((ulong)(lVar37 - param_3) >> 7);
        lVar33 = param_1[4];
        if (local_110[1] < 5) {
          lVar38 = lVar33 + (long)local_110[0] * 0x10;
          uVar59 = *(undefined4 *)(lVar38 + 0xc);
          uVar72 = *(undefined4 *)(lVar38 + 0x1c);
          uVar74 = *(undefined4 *)(lVar38 + 0x3c);
          *(undefined4 *)(lVar37 + 0x68) = *(undefined4 *)(lVar38 + 0x2c);
          *(undefined4 *)(lVar37 + 0x6c) = uVar74;
          *(undefined4 *)(lVar37 + 0x60) = uVar59;
          *(undefined4 *)(lVar37 + 100) = uVar72;
          lVar37 = *param_4;
          if (local_110[1] != 4) {
            lVar38 = (long)local_110[1] + 0x18;
            do {
              *(undefined4 *)(lVar37 + lVar38 * 4) = 0xffffffff;
              lVar37 = *param_4;
              lVar38 = lVar38 + 1;
            } while (lVar38 != 0x1c);
          }
          *(undefined1 *)(lVar37 + 0x70) = 1;
          lVar37 = *param_4;
        }
        else {
          local_3130[uVar48 * 6 + 1] = uStack_128;
          local_3130[uVar48 * 6] = local_130;
          *(int *)(local_3130 + uVar48 * 6 + 4) = local_110[0];
          local_3108[uVar48 * 0xc + -1] = local_110[1];
          local_3108[uVar48 * 0xc] = iVar36;
          local_3130[uVar48 * 6 + 3] = uStack_118;
          local_3130[uVar48 * 6 + 2] = local_120;
          uVar48 = (ulong)uVar73;
        }
        lVar38 = lVar37 + 0x80;
        iVar39 = (int)((ulong)(lVar38 - param_3) >> 7);
        auVar54._0_8_ = CONCAT44(iVar39,iVar36);
        *param_4 = lVar38;
        if (local_dc < 5) {
          lVar38 = lVar33 + (long)local_e0 * 0x10;
          uVar59 = *(undefined4 *)(lVar38 + 0xc);
          uVar72 = *(undefined4 *)(lVar38 + 0x1c);
          uVar74 = *(undefined4 *)(lVar38 + 0x3c);
          *(undefined4 *)(lVar37 + 0xe8) = *(undefined4 *)(lVar38 + 0x2c);
          *(undefined4 *)(lVar37 + 0xec) = uVar74;
          *(undefined4 *)(lVar37 + 0xe0) = uVar59;
          *(undefined4 *)(lVar37 + 0xe4) = uVar72;
          lVar37 = *param_4;
          if (local_dc != 4) {
            lVar38 = (long)local_dc + 0x18;
            do {
              *(undefined4 *)(lVar37 + lVar38 * 4) = 0xffffffff;
              lVar37 = *param_4;
              lVar38 = lVar38 + 1;
            } while (lVar38 != 0x1c);
          }
          *(undefined1 *)(lVar37 + 0x70) = 1;
          lVar38 = *param_4;
        }
        else {
          lVar37 = (long)(int)uVar48;
          local_3108[lVar37 * 0xc + -1] = local_dc;
          local_3108[lVar37 * 0xc] = iVar39;
          uVar48 = (ulong)((int)uVar48 + 1);
          *(int *)(local_3130 + lVar37 * 6 + 4) = local_e0;
          local_3130[lVar37 * 6 + 1] = uStack_f8;
          local_3130[lVar37 * 6] = local_100;
          local_3130[lVar37 * 6 + 3] = uStack_e8;
          local_3130[lVar37 * 6 + 2] = local_f0;
        }
        lVar37 = lVar38 + 0x80;
        iVar36 = (int)((ulong)(lVar37 - param_3) >> 7);
        auVar54._8_4_ = iVar36;
        *param_4 = lVar37;
        if (local_ac < 5) {
          lVar37 = lVar33 + (long)local_b0 * 0x10;
          uVar59 = *(undefined4 *)(lVar37 + 0xc);
          uVar72 = *(undefined4 *)(lVar37 + 0x1c);
          uVar74 = *(undefined4 *)(lVar37 + 0x3c);
          *(undefined4 *)(lVar38 + 0xe8) = *(undefined4 *)(lVar37 + 0x2c);
          *(undefined4 *)(lVar38 + 0xec) = uVar74;
          *(undefined4 *)(lVar38 + 0xe0) = uVar59;
          *(undefined4 *)(lVar38 + 0xe4) = uVar72;
          lVar37 = *param_4;
          if (local_ac != 4) {
            lVar38 = (long)local_ac + 0x18;
            do {
              *(undefined4 *)(lVar37 + lVar38 * 4) = 0xffffffff;
              lVar37 = *param_4;
              lVar38 = lVar38 + 1;
            } while (lVar38 != 0x1c);
          }
          *(undefined1 *)(lVar37 + 0x70) = 1;
          lVar37 = *param_4;
        }
        else {
          lVar38 = (long)(int)uVar48;
          local_3108[lVar38 * 0xc + -1] = local_ac;
          local_3108[lVar38 * 0xc] = iVar36;
          uVar48 = (ulong)((int)uVar48 + 1);
          *(int *)(local_3130 + lVar38 * 6 + 4) = local_b0;
          local_3130[lVar38 * 6 + 1] = uStack_c8;
          local_3130[lVar38 * 6] = local_d0;
          local_3130[lVar38 * 6 + 3] = uStack_b8;
          local_3130[lVar38 * 6 + 2] = local_c0;
        }
        lVar38 = lVar37 + 0x80;
        iVar36 = (int)((ulong)(lVar38 - param_3) >> 7);
        auVar54._12_4_ = iVar36;
        *param_4 = lVar38;
        if (local_7c < 5) {
          lVar33 = lVar33 + (long)local_80 * 0x10;
          auVar69._0_8_ = CONCAT44(*(undefined4 *)(lVar33 + 0x1c),*(undefined4 *)(lVar33 + 0xc));
          auVar69._8_4_ = *(undefined4 *)(lVar33 + 0x2c);
          auVar69._12_4_ = *(undefined4 *)(lVar33 + 0x3c);
          *(long *)(lVar37 + 0xe8) = auVar69._8_8_;
          *(undefined8 *)(lVar37 + 0xe0) = auVar69._0_8_;
          lVar33 = *param_4;
          if (local_7c != 4) {
            lVar37 = (long)local_7c + 0x18;
            do {
              *(undefined4 *)(lVar33 + lVar37 * 4) = 0xffffffff;
              lVar33 = *param_4;
              lVar37 = lVar37 + 1;
            } while (lVar37 != 0x1c);
          }
          *(undefined1 *)(lVar33 + 0x70) = 1;
          lVar38 = *param_4;
        }
        else {
          lVar33 = (long)(int)uVar48;
          local_3108[lVar33 * 0xc + -1] = local_7c;
          local_3108[lVar33 * 0xc] = iVar36;
          *(int *)(local_3130 + lVar33 * 6 + 4) = local_80;
          uVar48 = (ulong)((int)uVar48 + 1);
          local_3130[lVar33 * 6 + 1] = uStack_98;
          local_3130[lVar33 * 6] = local_a0;
          local_3130[lVar33 * 6 + 3] = local_90._8_8_;
          local_3130[lVar33 * 6 + 2] = local_90._0_8_;
        }
        lVar33 = param_3 + (long)(int)local_3138 * 0x80;
        *param_4 = lVar38 + 0x80;
        *(undefined1 *)(lVar33 + 0x70) = 0;
        *(long *)(lVar33 + 0x68) = auVar54._8_8_;
        *(undefined8 *)(lVar33 + 0x60) = auVar54._0_8_;
      }
      uVar73 = (uint)uVar48;
    } while (uVar73 != 0);
  }
  return;
}


