/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030281b8; name: FUN_030281b8
 */


int FUN_030281b8(undefined1 (*param_1) [16],float *param_2,long param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [14];
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint6 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined8 uVar20;
  float fVar26;
  undefined1 auVar21 [16];
  int iVar27;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar34;
  int iVar40;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar47;
  float fVar50;
  int iVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  uint uVar57;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar58;
  undefined1 auVar59 [16];
  undefined8 uVar60;
  
  bVar15 = (*param_1)[0xb];
  uVar12 = (uint)bVar15;
  if (bVar15 == 0xff) {
    return 0;
  }
  bVar3 = (*param_1)[10];
  uVar13 = bVar3 + 1;
  bVar4 = *(byte *)(param_3 + 0x38);
  uVar6 = (uint)bVar4 << 2;
  if (bVar15 == 0) {
    uVar14 = 0;
    uVar7 = uVar13 & 3;
  }
  else {
    fVar19 = param_2[0xd];
    uVar57 = (uint)bVar15;
    fVar26 = (float)*(undefined8 *)(param_2 + 0xe);
    fVar28 = (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20);
    fVar29 = fVar26 * fVar26 + fVar28 * fVar28 + fVar19 * fVar19;
    uVar36 = CONCAT44(fVar26 * fVar26 + fVar28 * fVar28 + fVar19 * fVar19,fVar29);
    uVar14 = uVar57 - 1 >> 2;
    if (bVar4 <= uVar14) {
      uVar14 = (uint)bVar4;
    }
    iVar27 = 4 << (ulong)(uVar14 & 0x1f);
    uVar7 = (uint)fVar29 >> 0x17 & 0xff;
    if (fVar29 != 0.0) {
      fVar41 = *param_4;
      fVar42 = param_4[1];
      fVar45 = param_4[2];
      uVar20 = NEON_frsqrte(uVar36,4);
      fVar46 = (float)uVar20;
      fVar58 = (float)((ulong)uVar20 >> 0x20);
      uVar36 = NEON_frsqrts(uVar36,CONCAT44(fVar58 * fVar58,fVar46 * fVar46),4);
      fVar52 = fVar41 * fVar41 + fVar42 * fVar42 + fVar45 * fVar45;
      fVar53 = fVar41 * fVar41 + fVar42 * fVar42 + fVar45 * fVar45;
      uVar20 = CONCAT44(fVar53,fVar52);
      uVar35 = NEON_frsqrte(uVar20,4);
      fVar47 = (float)uVar35;
      fVar50 = (float)((ulong)uVar35 >> 0x20);
      uVar20 = NEON_frsqrts(uVar20,CONCAT44(fVar50 * fVar50,fVar47 * fVar47),4);
      iVar51 = 0x10 << (ulong)(uVar14 & 0x1f);
      fVar47 = fVar47 * (float)uVar20;
      fVar50 = fVar50 * (float)((ulong)uVar20 >> 0x20);
      iVar34 = -(uint)(fVar52 <= 0.0);
      iVar40 = -(uint)(fVar53 <= 0.0);
      fVar46 = fVar46 * (float)uVar36;
      uVar20 = NEON_scvtf(CONCAT44(iVar51,iVar51),4);
      fVar52 = (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18),
                               CONCAT12((byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar47 >> 8) &
                                                  ~(byte)((uint)iVar34 >> 8),
                                                  SUB41(fVar47,0) & ~(byte)iVar34)));
      uVar35 = NEON_frecpe(uVar20,4);
      uVar20 = NEON_frecps(uVar20,uVar35,4);
      fVar26 = fVar26 * fVar46 * fVar41 * fVar52;
      fVar28 = fVar28 * fVar58 * (float)((ulong)uVar36 >> 0x20) *
               fVar42 * (float)(CONCAT17((byte)((uint)fVar50 >> 0x18) &
                                         ~(byte)((uint)iVar40 >> 0x18),
                                         CONCAT16((byte)((uint)fVar50 >> 0x10) &
                                                  ~(byte)((uint)iVar40 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar50 >> 8) &
                                                           ~(byte)((uint)iVar40 >> 8),
                                                           CONCAT14(SUB41(fVar50,0) & ~(byte)iVar40,
                                                                    fVar52)))) >> 0x20);
      fVar41 = fVar19 * fVar46 * fVar45 * fVar52;
      fVar19 = (float)uVar35 * (float)uVar20 * (fVar26 + fVar28 + fVar41) * 32767.0 + 0.5;
      fVar26 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar20 >> 0x20) *
               (fVar26 + fVar28 + fVar41) * 32767.0 + 0.5;
      auVar21 = *(undefined1 (*) [16])(*param_1 + 8);
      iVar51 = auVar21._0_4_ << 0x10;
      iVar34 = auVar21._4_4_ << 0x10;
      auVar30._0_8_ = CONCAT44(iVar34,iVar51);
      auVar30._8_4_ = auVar21._8_4_ << 0x10;
      auVar30._12_4_ = auVar21._12_4_ << 0x10;
      auVar55._0_4_ = (int)fVar19 + (iVar51 >> 0x10);
      auVar55._4_4_ = (int)fVar26 + (iVar34 >> 0x10);
      auVar55._8_4_ = (int)fVar19 + (auVar30._8_4_ >> 0x10);
      auVar55._12_4_ = (int)fVar26 + (auVar30._12_4_ >> 0x10);
      auVar31._8_8_ = auVar30._8_8_;
      auVar31._0_8_ = NEON_sqxtn(auVar30._0_8_,auVar55,4);
      auVar55 = NEON_sqxtn2(auVar31,auVar55,4);
      auVar56._8_8_ = 0xffff0000ffff;
      auVar56._0_8_ = 0xffff0000ffff;
      auVar21 = auVar21 ^ (auVar21 ^ auVar55) & auVar56;
      (*param_1)[8] = auVar21[0];
      (*param_1)[9] = auVar21[1];
      (*param_1)[10] = auVar21[2];
      (*param_1)[0xb] = auVar21[3];
    }
    uVar8 = uVar57 - 1 >> 1 & 1;
    bVar4 = (*param_1)[(ulong)uVar8 + 0xc];
    uVar1 = uVar6 & 0xff;
    bVar15 = bVar4;
    if (uVar57 <= uVar1) {
      bVar15 = (byte)((uint)fVar29 >> 0x17);
    }
    uVar2 = (uint)bVar4;
    if (bVar4 <= uVar7) {
      uVar2 = uVar7;
    }
    if (iVar27 * 2 != (uint)bVar3 && (uVar57 < uVar1 || uVar12 == uVar1)) {
      bVar15 = (byte)uVar2;
    }
    uVar57 = uVar12;
    if (((2 < uVar12) && (*(byte *)(param_3 + 0x3c) < uVar7)) &&
       (uVar57 = 0,
       uVar7 <= (uint)*(byte *)(param_3 + 0x3b) + (uint)(byte)(*param_1)[(ulong)(uVar8 ^ 1) + 0xc]))
    {
      uVar57 = uVar12;
    }
    (*param_1)[(ulong)uVar8 + 0xc] = bVar15;
    uVar7 = iVar27 - 1U & uVar13;
    uVar12 = uVar57;
  }
  if (uVar7 != 0) goto LAB_030281e8;
  fVar28 = *(float *)(param_3 + 0x30);
  uVar36 = CONCAT44(fVar28,fVar28);
  uVar20 = NEON_frecpe(uVar36,4);
  uVar35 = NEON_frecps(uVar36,uVar20,4);
  fVar19 = (float)uVar20 * (float)uVar35;
  fVar26 = (float)((ulong)uVar20 >> 0x20) * (float)((ulong)uVar35 >> 0x20);
  auVar21 = *param_1;
  uVar57 = auVar21._4_4_ >> 10;
  uVar36 = NEON_frecps(uVar36,CONCAT44(fVar26,fVar19),4);
  uVar16 = CONCAT15((char)(uVar57 >> 8),
                    CONCAT14((char)uVar57,(uint)((ushort)(auVar21._0_4_ >> 10) & 0x3ff))) &
           0x3ffffffffff;
  fVar19 = fVar19 * (float)uVar36;
  fVar26 = fVar26 * (float)((ulong)uVar36 >> 0x20);
  auVar9._2_2_ = 0;
  auVar9._0_2_ = auVar21._0_2_ & 0x3ff;
  auVar9._4_4_ = (int)uVar16;
  auVar9._8_6_ = CONCAT15(auVar21[7] >> 4,
                          CONCAT14((char)(auVar21._4_4_ >> 0x14),
                                   (uint)(CONCAT11(auVar21[3] >> 4,(char)(auVar21._0_4_ >> 0x14)) &
                                         0x3ff))) & 0x3ffffffffff;
  auVar48._0_12_ = auVar9._0_12_;
  auVar48._12_2_ = (short)(uVar16 >> 0x20);
  auVar48._14_2_ = 0;
  fVar41 = fVar19 * 0.0009765625;
  fVar45 = fVar26 * 0.0009765625;
  auVar21 = NEON_scvtf(auVar48,4);
  fVar52 = (float)*(double *)(param_2 + 6);
  fVar58 = (float)*(double *)(param_2 + 4);
  fVar53 = (float)*(double *)(param_2 + 8);
  fVar29 = fVar28 * 1024.0;
  fVar28 = fVar28 * 1024.0;
  auVar54._0_6_ =
       CONCAT15((char)((uint)(int)(fVar28 * fVar52) >> 8),
                CONCAT14((char)(int)(fVar28 * fVar52),(uint)((ushort)(int)(fVar29 * fVar58) & 0x3ff)
                        )) & 0x3ffffffffff;
  auVar54._6_2_ = 0;
  auVar54[8] = (undefined1)(int)(fVar29 * fVar53);
  auVar54[9] = (byte)((uint)(int)(fVar29 * fVar53) >> 8) & 3;
  auVar54._10_2_ = 0;
  auVar54[0xc] = (undefined1)(int)(fVar28 * 0.0);
  auVar54[0xd] = (byte)((uint)(int)(fVar28 * 0.0) >> 8) & 3;
  auVar54._14_2_ = 0;
  auVar55 = NEON_scvtf(auVar54,4);
  fVar42 = ABS(fVar41 * auVar21._0_4_ - fVar41 * auVar55._0_4_);
  fVar46 = ABS(fVar45 * auVar21._4_4_ - fVar45 * auVar55._4_4_);
  fVar41 = ABS(fVar41 * auVar21._8_4_ - fVar41 * auVar55._8_4_);
  fVar45 = ABS(fVar45 * auVar21._12_4_ - fVar45 * auVar55._12_4_);
  fVar42 = (float)((uint)(fVar19 - fVar42) ^
                  ((uint)(fVar19 - fVar42) ^ (uint)fVar42) & -(uint)(fVar42 < fVar19 * 0.5));
  fVar46 = (float)((uint)(fVar26 - fVar46) ^
                  ((uint)(fVar26 - fVar46) ^ (uint)fVar46) & -(uint)(fVar46 < fVar26 * 0.5));
  fVar19 = (float)((uint)(fVar19 - fVar41) ^
                  ((uint)(fVar19 - fVar41) ^ (uint)fVar41) & -(uint)(fVar41 < fVar19 * 0.5));
  fVar26 = (float)((uint)(fVar26 - fVar45) ^
                  ((uint)(fVar26 - fVar45) ^ (uint)fVar45) & -(uint)(fVar45 < fVar26 * 0.5));
  auVar21._0_4_ = fVar42 * fVar42;
  auVar21._4_4_ = fVar46 * fVar46;
  auVar21._8_4_ = fVar19 * fVar19;
  auVar21._12_4_ = fVar26 * fVar26;
  auVar55 = NEON_ext(auVar21,auVar21,8,1);
  if (auVar21._0_4_ + auVar21._4_4_ + auVar55._0_4_ <= *(float *)(param_3 + 0x28)) {
    uVar35 = NEON_frecpe(0x4300000043000000,4);
    uVar60 = NEON_frecps(0x4300000043000000,uVar35,4);
    uVar36 = NEON_frecpe(0x3f8ccccd3f8ccccd,4);
    uVar20 = NEON_frecps(0x3f8ccccd3f8ccccd,uVar36,4);
    fVar41 = (float)uVar35 * (float)uVar60;
    fVar42 = (float)((ulong)uVar35 >> 0x20) * (float)((ulong)uVar60 >> 0x20);
    uVar35 = NEON_frecps(0x4300000043000000,CONCAT44(fVar42,fVar41),4);
    fVar19 = (float)uVar36 * (float)uVar20;
    fVar26 = (float)((ulong)uVar36 >> 0x20) * (float)((ulong)uVar20 >> 0x20);
    fVar41 = fVar41 * (float)uVar35 * 1.1;
    fVar42 = fVar42 * (float)((ulong)uVar35 >> 0x20) * 1.1;
    uVar36 = NEON_frecps(0x3f8ccccd3f8ccccd,CONCAT44(fVar26,fVar19),4);
    fVar19 = fVar19 * (float)uVar36 * 128.0;
    fVar26 = fVar26 * (float)((ulong)uVar36 >> 0x20) * 128.0;
    auVar37._0_4_ = (int)(*param_2 * fVar19);
    auVar37._4_4_ = (int)(param_2[1] * fVar26);
    auVar37._8_4_ = (int)(param_2[2] * fVar19);
    auVar37._12_4_ = (int)(param_2[3] * fVar26);
    auVar21 = NEON_scvtf(auVar37,4);
    auVar38._8_4_ = 0x43000000;
    auVar38._0_8_ = 0x4300000043000000;
    auVar38._12_4_ = 0x43000000;
    auVar55 = NEON_frecpe(auVar38,4);
    uVar36 = *(undefined8 *)(*param_1 + 4);
    bVar15 = (byte)((ulong)uVar36 >> 8);
    auVar56 = NEON_frecps(auVar38,auVar55,4);
    auVar43._0_4_ = auVar55._0_4_ * auVar56._0_4_;
    auVar43._4_4_ = auVar55._4_4_ * auVar56._4_4_;
    auVar43._8_4_ = auVar55._8_4_ * auVar56._8_4_;
    auVar43._12_4_ = auVar55._12_4_ * auVar56._12_4_;
    auVar59._0_4_ = (CONCAT12(bVar15,(ushort)(byte)uVar36) & 0xffff) - 0x7f;
    auVar59._4_4_ = bVar15 - 0x7f;
    auVar59._8_4_ = (byte)((ulong)uVar36 >> 0x10) - 0x7f;
    auVar59._12_4_ = (byte)((ulong)uVar36 >> 0x18) - 0x7f;
    auVar55 = NEON_frecps(auVar38,auVar43,4);
    auVar56 = NEON_scvtf(auVar59,4);
    auVar44._8_4_ = 0x3f8ccccd;
    auVar44._0_8_ = 0x3f8ccccd3f8ccccd;
    auVar44._12_4_ = 0x3f8ccccd;
    fVar19 = auVar43._0_4_ * auVar55._0_4_ * 1.1 * auVar56._0_4_ - fVar41 * auVar21._0_4_;
    fVar26 = auVar43._4_4_ * auVar55._4_4_ * 1.1 * auVar56._4_4_ - fVar42 * auVar21._4_4_;
    fVar41 = auVar43._8_4_ * auVar55._8_4_ * 1.1 * auVar56._8_4_ - fVar41 * auVar21._8_4_;
    fVar42 = auVar43._12_4_ * auVar55._12_4_ * 1.1 * auVar56._12_4_ - fVar42 * auVar21._12_4_;
    auVar49._0_4_ = fVar19 * fVar19;
    auVar49._4_4_ = fVar26 * fVar26;
    auVar49._8_4_ = fVar41 * fVar41;
    auVar49._12_4_ = fVar42 * fVar42;
    auVar21 = NEON_ext(auVar49,auVar49,8,1);
    if (auVar49._0_4_ + auVar49._4_4_ + auVar21._0_4_ + auVar21._4_4_ <= *(float *)(param_3 + 0x2c))
    {
      if (uVar12 == 0) {
        uVar13 = 0;
        *(undefined2 *)(*param_1 + 8) = 0;
        *(undefined2 *)(*param_1 + 0xc) = 0;
      }
      else {
        if ((uVar12 & 3) == 0) {
          sVar5 = *(short *)(*param_1 + 8);
          bVar15 = (*param_1)[0xd];
          if (0x7fff - (0x7fff - *(short *)(param_3 + 0x34) >> (uVar14 & 0x1f)) < (int)sVar5) {
            if ((uVar12 == (uVar6 & 0xff)) &&
               (*(byte *)(param_3 + 0x3a) <= (byte)(*param_1)[0xc] ||
                *(byte *)(param_3 + 0x3a) <= bVar15)) goto LAB_03028690;
          }
          else {
            bVar10 = true;
            bVar11 = false;
            if (*(byte *)(param_3 + 0x39) <= bVar15 ||
                *(byte *)(param_3 + 0x39) <= (byte)(*param_1)[0xc]) {
              bVar11 = SBORROW4((int)sVar5,(int)*(short *)(param_3 + 0x36));
              bVar10 = (int)sVar5 - (int)*(short *)(param_3 + 0x36) < 0;
            }
            uVar13 = uVar6 & 0xff;
            if (bVar10 == bVar11) {
              uVar13 = uVar12;
            }
            uVar12 = uVar13;
          }
          auVar55 = NEON_frecpe(auVar44,4);
          auVar21 = NEON_frecps(auVar44,auVar55,4);
          uVar13 = 0;
          uVar16 = CONCAT15((char)((uint)(int)(fVar28 * fVar52) >> 8),
                            CONCAT14((char)(int)(fVar28 * fVar52),
                                     (uint)((ushort)(int)(fVar29 * fVar58) & 0x3ff))) &
                   0x3ffffffffff;
          auVar32._0_4_ = auVar55._0_4_ * auVar21._0_4_;
          auVar32._4_4_ = auVar55._4_4_ * auVar21._4_4_;
          auVar32._8_4_ = auVar55._8_4_ * auVar21._8_4_;
          auVar32._12_4_ = auVar55._12_4_ * auVar21._12_4_;
          iVar27 = (uint)(ushort)(uVar16 >> 0x20) << 10;
          auVar21 = NEON_frecps(auVar44,auVar32,4);
          iVar51 = (uint)((ushort)(int)(fVar29 * fVar53) & 0x3ff) << 0x14;
          (*param_1)[0] = (char)uVar16;
          (*param_1)[1] = (byte)((uint)iVar27 >> 8) | (byte)(uVar16 >> 8);
          (*param_1)[2] = (byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar51 >> 0x10);
          (*param_1)[3] = (char)((uint)iVar51 >> 0x18);
          auVar22._8_4_ = 0x7f;
          auVar22._0_8_ = 0x7f0000007f;
          auVar22._12_4_ = 0x7f;
          auVar17._0_8_ =
               CONCAT44((int)(param_2[1] * auVar32._4_4_ * auVar21._4_4_ * 128.0) + 0x7f,
                        (int)(*param_2 * auVar32._0_4_ * auVar21._0_4_ * 128.0) + 0x7f);
          auVar17._8_4_ = (int)(param_2[2] * auVar32._8_4_ * auVar21._8_4_ * 128.0) + 0x7f;
          auVar17._12_4_ = (int)(param_2[3] * auVar32._12_4_ * auVar21._12_4_ * 128.0) + 0x7f;
          auVar23._8_8_ = auVar22._8_8_;
          auVar23._0_8_ = NEON_sqxtn(0x7f0000007f,auVar17,4);
          auVar21 = NEON_sqxtn2(auVar23,auVar17,4);
          uVar36 = NEON_sqxtun(auVar17._0_8_,auVar21,2);
          (*param_1)[4] = (char)uVar36;
          (*param_1)[5] = (char)((ulong)uVar36 >> 8);
          (*param_1)[6] = (char)((ulong)uVar36 >> 0x10);
          bVar3 = 0;
          if ((uVar6 & 0xff) <= uVar12) {
            bVar3 = bVar15;
          }
          (*param_1)[7] = (char)((ulong)uVar36 >> 0x18);
          (*param_1)[0xc] = bVar3;
          *(undefined2 *)(*param_1 + 8) = 0;
        }
        if (0xfc < uVar12) {
          uVar12 = 0xfd;
        }
      }
      uVar12 = uVar12 + 1;
      goto LAB_030281e8;
    }
  }
LAB_03028690:
  auVar39._8_4_ = 0x3f8ccccd;
  auVar39._0_8_ = 0x3f8ccccd3f8ccccd;
  auVar39._12_4_ = 0x3f8ccccd;
  auVar55 = NEON_frecpe(auVar39,4);
  uVar12 = 0;
  auVar21 = NEON_frecps(auVar39,auVar55,4);
  uVar16 = CONCAT15((char)((uint)(int)(fVar28 * fVar52) >> 8),
                    CONCAT14((char)(int)(fVar28 * fVar52),
                             (uint)((ushort)(int)(fVar29 * fVar58) & 0x3ff))) & 0x3ffffffffff;
  auVar33._0_4_ = auVar55._0_4_ * auVar21._0_4_;
  auVar33._4_4_ = auVar55._4_4_ * auVar21._4_4_;
  auVar33._8_4_ = auVar55._8_4_ * auVar21._8_4_;
  auVar33._12_4_ = auVar55._12_4_ * auVar21._12_4_;
  auVar21 = NEON_frecps(auVar39,auVar33,4);
  iVar51 = (uint)(ushort)(uVar16 >> 0x20) << 10;
  iVar27 = (uint)((ushort)(int)(fVar29 * fVar53) & 0x3ff) << 0x14;
  (*param_1)[0] = (char)uVar16;
  (*param_1)[1] = (byte)((uint)iVar51 >> 8) | (byte)(uVar16 >> 8);
  (*param_1)[2] = (byte)((uint)iVar51 >> 0x10) | (byte)((uint)iVar27 >> 0x10);
  (*param_1)[3] = (char)((uint)iVar27 >> 0x18);
  auVar24._8_4_ = 0x7f;
  auVar24._0_8_ = 0x7f0000007f;
  auVar24._12_4_ = 0x7f;
  auVar18._0_8_ =
       CONCAT44((int)(param_2[1] * auVar33._4_4_ * auVar21._4_4_ * 128.0) + 0x7f,
                (int)(*param_2 * auVar33._0_4_ * auVar21._0_4_ * 128.0) + 0x7f);
  auVar18._8_4_ = (int)(param_2[2] * auVar33._8_4_ * auVar21._8_4_ * 128.0) + 0x7f;
  auVar18._12_4_ = (int)(param_2[3] * auVar33._12_4_ * auVar21._12_4_ * 128.0) + 0x7f;
  auVar25._8_8_ = auVar24._8_8_;
  auVar25._0_8_ = NEON_sqxtn(0x7f0000007f,auVar18,4);
  auVar21 = NEON_sqxtn2(auVar25,auVar18,4);
  uVar36 = NEON_sqxtun(auVar18._0_8_,auVar21,2);
  (*param_1)[4] = (char)uVar36;
  (*param_1)[5] = (char)((ulong)uVar36 >> 8);
  (*param_1)[6] = (char)((ulong)uVar36 >> 0x10);
  (*param_1)[7] = (char)((ulong)uVar36 >> 0x18);
LAB_030281e8:
  (*param_1)[10] = (char)uVar13;
  (*param_1)[0xb] = (char)uVar12;
  return (int)((uint)*(byte *)(param_3 + 0x38) * 4 - (uVar12 & 0xff)) >> 0x1f;
}


