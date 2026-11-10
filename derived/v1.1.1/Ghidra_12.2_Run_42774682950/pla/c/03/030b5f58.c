/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030b5f58; name: FUN_030b5f58
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030b5f58(long param_1,long param_2,int *param_3,long param_4,undefined8 *param_5,
                 undefined8 param_6,undefined1 (*param_7) [16],ushort *param_8,float *param_9,
                 long param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  float *pfVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  float *pfVar17;
  float *pfVar18;
  ushort *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  uint *puVar23;
  uint *puVar24;
  long lVar25;
  undefined4 uVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  byte bVar53;
  float fVar52;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar63;
  float fVar64;
  undefined1 auVar65 [12];
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  float fVar73;
  undefined1 auVar66 [16];
  float fVar74;
  float fVar75;
  int iVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  float fVar80;
  ulong uVar81;
  float fVar82;
  byte bVar85;
  byte bVar86;
  int iVar83;
  byte bVar87;
  float fVar84;
  byte bVar91;
  byte bVar92;
  undefined4 uVar88;
  int iVar89;
  byte bVar93;
  float fVar90;
  float fVar94;
  undefined8 uVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_110;
  undefined8 uStack_108;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  ushort *local_98;
  long lStack_90;
  int local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  FUN_030b40c4(param_1,*(undefined8 *)(param_2 + 0x10),param_3,param_8,param_9,param_10,param_11,
               param_12,param_13,param_14,param_15,param_16);
  uVar3 = *param_8;
  if ((uVar3 >> 10 & 1) != 0) {
    if ((*(byte *)(param_3 + 4) >> 1 & 1) == 0) {
      return;
    }
    if ((param_8[3] & 0xe0) == 0x60) {
      return;
    }
  }
  memcpy(&local_150,param_7,0xb0);
  auVar26 = ZEXT816(0);
  uStack_158 = 0;
  local_160 = 0;
  bVar2 = *(byte *)((long)param_8 + 5);
  if ((bVar2 & 0xe) != 0) {
    if ((bVar2 >> 1 & 1) == 0) {
      auVar26 = ZEXT816(0);
    }
    else {
      lVar12 = 0x40;
      if ((uVar3 & 0x30) != 0) {
        lVar12 = 0xd0;
      }
      lVar12 = lVar12 + (ulong)(byte)param_8[2] * 0x20;
      auVar26 = *(undefined1 (*) [16])
                 ((long)param_8 +
                 (ulong)(byte)(&DAT_03aa2b64)[*(byte *)((long)param_8 + lVar12 + 4)] + lVar12);
      fVar40 = auVar26._8_4_;
      fVar45 = auVar26._12_4_;
      uStack_158 = auVar26._8_8_;
      local_160 = auVar26._0_8_;
      if (fVar45 != 0.0 || (fVar40 != 0.0 || (auVar26._0_4_ != 0.0 || auVar26._4_4_ != 0.0))) {
        if ((uVar3 >> 6 & 1) == 0) {
          uVar9 = *(undefined8 *)(param_3 + 2);
        }
        else {
          uVar9 = NEON_scvtf(CONCAT44(*param_3 + 1,*param_3 + 1),4);
        }
        fVar46 = (float)((ulong)uVar9 >> 0x20);
        auVar26._0_8_ = CONCAT44(auVar26._4_4_ * fVar46,auVar26._0_4_ * (float)uVar9);
        auVar26._8_4_ = fVar40 * (float)uVar9;
        auVar26._12_4_ = fVar45 * fVar46;
        uStack_158 = auVar26._8_8_;
        lVar12 = *(long *)(param_4 + ((ulong)uVar3 & 1) * 8) +
                 (ulong)*(uint *)(param_8 + 0x14) * 0x20;
        *(uint *)(lVar12 + 0x18) = *(uint *)(lVar12 + 0x18) | 0x80000000;
        local_160 = auVar26._0_8_;
      }
    }
    if ((bVar2 >> 2 & 1) != 0) {
      lVar12 = 0x40;
      if ((uVar3 & 0x30) != 0) {
        lVar12 = 0xd0;
      }
      lVar12 = lVar12 + (ulong)(byte)param_8[2] * 0x20;
      pfVar8 = (float *)((long)param_8 +
                        (ulong)(byte)(&DAT_03aa2c64)[*(byte *)((long)param_8 + lVar12 + 4)] + lVar12
                        );
      local_e0 = local_e0 * *pfVar8;
      fStack_dc = fStack_dc * pfVar8[1];
      fStack_d8 = fStack_d8 * pfVar8[2];
      fStack_d4 = fStack_d4 * pfVar8[3];
      auVar36 = *(undefined1 (*) [16])(pfVar8 + 4);
      auVar43._0_8_ = CONCAT44(local_d0._4_4_ * auVar36._4_4_,(float)local_d0 * auVar36._0_4_);
      auVar43._8_4_ = (float)uStack_c8 * auVar36._8_4_;
      auVar43._12_4_ = uStack_c8._4_4_ * auVar36._12_4_;
      uStack_c8 = auVar43._8_8_;
      local_d0 = auVar43._0_8_;
    }
    if ((bVar2 >> 3 & 1) != 0) {
      lVar12 = 0x40;
      if ((uVar3 & 0x30) != 0) {
        lVar12 = 0xd0;
      }
      lVar12 = lVar12 + (ulong)(byte)param_8[2] * 0x20;
      auVar36 = *(undefined1 (*) [16])
                 (*(long *)(param_2 + 0x50) +
                 ((ulong)*(uint *)(*(long *)(param_4 + ((ulong)uVar3 & 1) * 8) +
                                   (ulong)*(uint *)(param_8 + 0x14) * 0x20 + 0x18) & 0x7fffffff) *
                 0x80);
      auVar43 = NEON_ext(auVar36,auVar36,8,1);
      fVar82 = auVar43._4_4_ * auVar43._4_4_;
      uVar9 = NEON_ext(auVar36._0_8_,auVar43._0_8_,4,1);
      fVar48 = fVar82 + -0.5;
      fVar82 = fVar82 + -0.5;
      auVar44._8_4_ = fStack_148;
      auVar44._0_8_ = CONCAT44(fStack_14c,local_150);
      auVar44._12_4_ = fStack_144;
      fVar40 = auVar36._0_4_;
      fVar45 = auVar36._4_4_;
      fVar46 = auVar36._8_4_;
      fVar47 = auVar36._12_4_;
      fVar74 = fVar40 * local_150 + fVar45 * fStack_14c + fVar46 * fStack_148;
      fVar63 = fVar40 * local_150 + fVar45 * fStack_14c + fVar46 * fStack_148;
      auVar36 = NEON_ext(auVar44,auVar44,8,1);
      uVar41 = NEON_ext(CONCAT44(fStack_14c,local_150),auVar36._0_8_,4,1);
      fVar49 = (float)((ulong)uVar9 >> 0x20);
      auVar36._0_4_ = fVar40 * (float)uVar41 - local_150 * (float)uVar9;
      auVar36._4_4_ = fVar45 * (float)((ulong)uVar41 >> 0x20) - fStack_14c * fVar49;
      auVar36._8_4_ = fVar46 * local_150 - fStack_148 * fVar40;
      auVar36._12_4_ = fVar47 * fStack_14c - fStack_144 * fVar45;
      auVar43 = NEON_ext(auVar36,auVar36,4,1);
      fVar52 = local_150 * fVar48 + fVar40 * fVar74 + auVar43._0_4_ * fVar47;
      fVar64 = fStack_14c * fVar82 + fVar45 * fVar63 + auVar43._4_4_ * fVar47;
      fVar74 = fStack_148 * fVar48 + fVar46 * fVar74 + auVar36._0_4_ * fVar47;
      fVar63 = fStack_144 * fVar82 + fVar47 * fVar63 + auVar36._4_4_ * fVar47;
      auVar50._0_4_ = fVar52 + fVar52;
      auVar50._4_4_ = fVar64 + fVar64;
      auVar50._8_4_ = fVar74 + fVar74;
      auVar50._12_4_ = fVar63 + fVar63;
      auVar44 = NEON_ext(auVar50,auVar50,4,1);
      auVar36 = *(undefined1 (*) [16])
                 ((long)param_8 +
                 (ulong)(byte)(&DAT_03aa2d64)[*(byte *)((long)param_8 + lVar12 + 4)] + lVar12);
      auVar43 = NEON_ext(auVar36,auVar36,8,1);
      uVar41 = NEON_ext(auVar36._0_8_,auVar43._0_8_,4,1);
      fVar52 = auVar36._0_4_;
      fVar64 = auVar36._4_4_;
      fVar74 = (float)((ulong)uVar41 >> 0x20);
      auVar51._0_4_ = (float)uVar41 * auVar50._0_4_ - fVar52 * auVar44._0_4_;
      auVar51._4_4_ = fVar74 * auVar50._4_4_ - fVar64 * auVar44._4_4_;
      auVar51._8_4_ = fVar52 * auVar50._8_4_ - auVar36._8_4_ * auVar50._0_4_;
      auVar51._12_4_ = fVar64 * auVar50._12_4_ - auVar36._12_4_ * auVar50._4_4_;
      auVar43 = NEON_ext(auVar51,auVar51,4,1);
      local_130 = local_130 + auVar43._0_4_;
      fStack_12c = fStack_12c + auVar43._4_4_;
      fStack_128 = fStack_128 + auVar51._0_4_;
      fStack_124 = fStack_124 + auVar51._4_4_;
      if ((uVar3 >> 6 & 1) != 0) {
        auVar6._8_4_ = fStack_f8;
        auVar6._0_8_ = CONCAT44(fStack_fc,fStack_100);
        auVar6._12_4_ = fStack_f4;
        fVar63 = fVar40 * fStack_100 + fVar45 * fStack_fc + fVar46 * fStack_f8;
        fVar80 = fVar40 * fStack_100 + fVar45 * fStack_fc + fVar46 * fStack_f8;
        auVar43 = NEON_ext(auVar6,auVar6,8,1);
        uVar16 = NEON_ext(CONCAT44(fStack_fc,fStack_100),auVar43._0_8_,4,1);
        auVar42._0_4_ = fVar40 * (float)uVar16 - (float)uVar9 * fStack_100;
        auVar42._4_4_ = fVar45 * (float)((ulong)uVar16 >> 0x20) - fVar49 * fStack_fc;
        auVar42._8_4_ = fVar46 * fStack_100 - fVar40 * fStack_f8;
        auVar42._12_4_ = fVar47 * fStack_fc - fVar45 * fStack_f4;
        auVar43 = NEON_ext(auVar42,auVar42,4,1);
        fVar40 = fVar48 * fStack_100 + fVar40 * fVar63 + fVar47 * auVar43._0_4_;
        fVar45 = fVar82 * fStack_fc + fVar45 * fVar80 + fVar47 * auVar43._4_4_;
        fVar46 = fVar48 * fStack_f8 + fVar46 * fVar63 + fVar47 * auVar42._0_4_;
        fVar47 = fVar82 * fStack_f4 + fVar47 * fVar80 + fVar47 * auVar42._4_4_;
        auVar33._0_4_ = fVar40 + fVar40;
        auVar33._4_4_ = fVar45 + fVar45;
        auVar33._8_4_ = fVar46 + fVar46;
        auVar33._12_4_ = fVar47 + fVar47;
        auVar43 = NEON_ext(auVar33,auVar33,4,1);
        auVar34._0_4_ = (float)uVar41 * auVar33._0_4_ - fVar52 * auVar43._0_4_;
        auVar34._4_4_ = fVar74 * auVar33._4_4_ - fVar64 * auVar43._4_4_;
        auVar34._8_4_ = fVar52 * auVar33._8_4_ - auVar36._8_4_ * auVar33._0_4_;
        auVar34._12_4_ = fVar64 * auVar33._12_4_ - auVar36._12_4_ * auVar33._4_4_;
        auVar36 = NEON_ext(auVar34,auVar34,4,1);
        auVar35._0_8_ = CONCAT44(local_110._4_4_ + auVar36._4_4_,(float)local_110 + auVar36._0_4_);
        auVar35._8_4_ = (float)uStack_108 + auVar34._0_4_;
        auVar35._12_4_ = uStack_108._4_4_ + auVar34._4_4_;
        uStack_108 = auVar35._8_8_;
        local_110 = auVar35._0_8_;
      }
    }
  }
  uVar3 = *param_8;
  pfVar8 = *(float **)(param_2 + 0x10);
  if ((uVar3 & 0x300) == 0) {
    bVar2 = *(byte *)((long)param_8 + 5);
    uVar9 = 0;
    *(undefined4 *)(param_5 + 3) = 0;
    *(uint *)((long)param_5 + 0x1c) = bVar2 & 0x40;
    param_5[2] = 0;
    if ((uVar3 >> 2 & 1) != 0) {
      uVar9 = 0xbf800000bf800000;
    }
    param_5[4] = uVar9;
    uVar15 = (ulong)(byte)param_8[2];
    if (uVar15 != 0) {
      pfVar17 = (float *)(param_8 + 0x20);
      auVar38._4_4_ = fStack_12c;
      auVar38._0_4_ = local_130;
      auVar38._8_4_ = fStack_128;
      auVar38._12_4_ = fStack_124;
      fVar40 = (float)((ulong)uVar9 >> 0x20);
      bVar85 = (byte)_DAT_03889700;
      bVar86 = (byte)((ulong)_DAT_03889700 >> 8);
      bVar87 = (byte)((ulong)_DAT_03889700 >> 0x10);
      bVar91 = (byte)((ulong)_DAT_03889700 >> 0x18);
      bVar92 = (byte)((ulong)_DAT_03889700 >> 0x20);
      bVar93 = (byte)((ulong)_DAT_03889700 >> 0x28);
      bVar53 = (byte)((ulong)_DAT_03889700 >> 0x30);
      bVar54 = (byte)((ulong)_DAT_03889700 >> 0x38);
      bVar55 = (byte)_UNK_03889708;
      bVar56 = (byte)((ulong)_UNK_03889708 >> 8);
      bVar57 = (byte)((ulong)_UNK_03889708 >> 0x10);
      bVar58 = (byte)((ulong)_UNK_03889708 >> 0x18);
      bVar59 = (byte)((ulong)_UNK_03889708 >> 0x20);
      bVar60 = (byte)((ulong)_UNK_03889708 >> 0x28);
      bVar61 = (byte)((ulong)_UNK_03889708 >> 0x30);
      bVar62 = (byte)((ulong)_UNK_03889708 >> 0x38);
      if ((uVar3 >> 6 & 1) == 0) {
        fVar45 = *(float *)(param_8 + 8);
        fVar46 = *(float *)(param_8 + 10);
        fVar47 = *(float *)(param_8 + 0xc);
        fVar48 = *(float *)(param_8 + 0xe);
        uVar20 = uVar15;
        pfVar18 = param_9;
        fVar82 = local_150;
        fVar49 = fStack_14c;
        fVar52 = fStack_148;
        fVar64 = fStack_144;
        do {
          pfVar18 = pfVar18 + 1;
          fVar74 = *pfVar17;
          fVar63 = pfVar17[1];
          fVar80 = pfVar17[2];
          fVar84 = pfVar17[3];
          fVar96 = auVar38._4_4_;
          fVar90 = auVar38._8_4_;
          fVar94 = auVar38._12_4_;
          fVar97 = fVar45 * auVar38._0_4_ + fVar82 * fVar74;
          fVar98 = fVar46 * fVar96 + fVar49 * fVar63;
          fVar73 = fVar47 * fVar90 + fVar52 * fVar80;
          fVar75 = auVar26._0_4_ + fVar97 + fVar98 + fVar73;
          fVar73 = auVar26._0_4_ + fVar97 + fVar98 + fVar73;
          fVar98 = (float)((ulong)*(undefined8 *)(pfVar17 + 6) >> 0x20);
          iVar83 = -(uint)(fVar98 <= fVar75);
          iVar89 = -(uint)(fVar98 <= fVar73);
          bVar67 = (byte)((uint)iVar83 >> 8);
          bVar68 = (byte)((uint)iVar83 >> 0x10);
          bVar69 = (byte)((uint)iVar83 >> 0x18);
          iVar76 = CONCAT13(bVar69 & bVar91,
                            CONCAT12(bVar68 & bVar87,CONCAT11(bVar67 & bVar86,(byte)iVar83 & bVar85)
                                    ));
          bVar70 = (byte)((uint)iVar89 >> 8);
          bVar71 = (byte)((uint)iVar89 >> 0x10);
          bVar72 = (byte)((uint)iVar89 >> 0x18);
          auVar65._0_8_ =
               CONCAT17(bVar72 & bVar54,
                        CONCAT16(bVar71 & bVar53,
                                 CONCAT15(bVar70 & bVar93,CONCAT14((byte)iVar89 & bVar92,iVar76))));
          auVar65[8] = (byte)iVar83 & bVar55;
          auVar65[9] = bVar67 & bVar56;
          auVar65[10] = bVar68 & bVar57;
          auVar65[0xb] = bVar69 & bVar58;
          auVar66[0xc] = (byte)iVar89 & bVar59;
          auVar66._0_12_ = auVar65;
          auVar66[0xd] = bVar70 & bVar60;
          auVar66[0xe] = bVar71 & bVar61;
          auVar66[0xf] = bVar72 & bVar62;
          fVar97 = *pfVar18;
          if ((iVar76 + (int)((ulong)auVar65._0_8_ >> 0x20) + auVar65._8_4_ + auVar66._12_4_ == 0)
             || (fVar97 != 0.0)) {
            uVar41 = NEON_fmax(CONCAT44(fVar40 * fVar97,(float)uVar9 * fVar97),
                               CONCAT44((fVar98 - fVar73) * fVar84,(fVar98 - fVar75) * fVar84),4);
            fVar98 = (float)uVar41;
            fVar73 = (float)((ulong)uVar41 >> 0x20);
            *pfVar18 = fVar97 + fVar98;
            fVar97 = fStack_d4 * fVar73;
            fVar82 = fVar82 + fVar74 * local_e0 * fVar98;
            fVar49 = fVar49 + fVar63 * fStack_dc * fVar73;
            fVar52 = fVar52 + fVar80 * fStack_d8 * fVar98;
            fVar64 = fVar64 + fVar84 * fVar97;
            auVar38._0_4_ = auVar38._0_4_ + fVar45 * fVar97;
            auVar38._4_4_ = fVar96 + fVar46 * fVar97;
            auVar38._8_4_ = fVar90 + fVar47 * fVar97;
            auVar38._12_4_ = fVar94 + fVar48 * fVar97;
            local_b0 = CONCAT44(fVar73 + (float)((ulong)local_b0 >> 0x20),fVar98 + (float)local_b0);
            local_150 = fVar82;
            fStack_14c = fVar49;
            fStack_148 = fVar52;
            fStack_144 = fVar64;
            local_130 = auVar38._0_4_;
            fStack_12c = auVar38._4_4_;
            fStack_128 = auVar38._8_4_;
            fStack_124 = auVar38._12_4_;
          }
          auVar26 = NEON_ext(auVar26,auVar26,4,1);
          uVar20 = uVar20 - 1;
          pfVar17 = pfVar17 + 8;
        } while (uVar20 != 0);
      }
      else {
        fVar45 = *(float *)(param_8 + 8);
        fVar46 = *(float *)(param_8 + 10);
        fVar47 = *(float *)(param_8 + 0xc);
        fVar48 = *(float *)(param_8 + 0xe);
        uVar41 = *(undefined8 *)(pfVar8 + 0x30);
        uVar20 = uVar15;
        pfVar18 = param_9;
        fVar82 = local_150;
        fVar49 = fStack_14c;
        fVar52 = fStack_148;
        fVar64 = fStack_144;
        do {
          pfVar18 = pfVar18 + 1;
          fVar74 = (float)*(undefined8 *)pfVar17;
          fVar63 = (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
          fVar80 = (float)*(undefined8 *)(pfVar17 + 2);
          fVar84 = fVar45 * (auVar38._0_4_ - (float)local_110) + (fVar82 - fStack_100) * fVar74;
          fVar90 = fVar46 * (auVar38._4_4_ - local_110._4_4_) + (fVar49 - fStack_fc) * fVar63;
          fVar94 = fVar47 * (auVar38._8_4_ - (float)uStack_108) + (fVar52 - fStack_f8) * fVar80;
          fVar96 = auVar26._0_4_ + fVar84 + fVar90 + fVar94;
          fVar84 = auVar26._0_4_ + fVar84 + fVar90 + fVar94;
          fVar90 = (float)local_110 * fVar45 + fStack_100 * fVar74;
          fVar97 = local_110._4_4_ * fVar46 + fStack_fc * fVar63;
          fVar98 = (float)uStack_108 * fVar47 + fStack_f8 * fVar80;
          fVar73 = (float)((ulong)*(undefined8 *)(pfVar17 + 6) >> 0x20);
          fVar94 = (float)uVar41 * (fVar73 - (fVar98 + fVar90 + fVar97));
          fVar90 = (float)uVar41 * (fVar73 - (fVar98 + fVar90 + fVar97));
          uVar16 = NEON_fmin(CONCAT44(fVar90,fVar94),CONCAT44(fVar90 * *pfVar8,fVar94 * *pfVar8),4);
          iVar83 = -(uint)((float)uVar16 <= fVar96);
          fVar90 = (float)((ulong)uVar16 >> 0x20);
          iVar89 = -(uint)(fVar90 <= fVar84);
          bVar67 = (byte)((uint)iVar83 >> 8);
          bVar68 = (byte)((uint)iVar83 >> 0x10);
          bVar69 = (byte)((uint)iVar83 >> 0x18);
          iVar76 = CONCAT13(bVar69 & bVar91,
                            CONCAT12(bVar68 & bVar87,CONCAT11(bVar67 & bVar86,(byte)iVar83 & bVar85)
                                    ));
          bVar70 = (byte)((uint)iVar89 >> 8);
          bVar71 = (byte)((uint)iVar89 >> 0x10);
          bVar72 = (byte)((uint)iVar89 >> 0x18);
          iVar83 = CONCAT13(bVar69 & bVar58,
                            CONCAT12(bVar68 & bVar57,CONCAT11(bVar67 & bVar56,(byte)iVar83 & bVar55)
                                    ));
          fVar94 = *pfVar18;
          if ((iVar76 + (int)(CONCAT17(bVar72 & bVar54,
                                       CONCAT16(bVar71 & bVar53,
                                                CONCAT15(bVar70 & bVar93,
                                                         CONCAT14((byte)iVar89 & bVar92,iVar76))))
                             >> 0x20) +
               iVar83 + (int)(CONCAT17(bVar72 & bVar62,
                                       CONCAT16(bVar71 & bVar61,
                                                CONCAT15(bVar70 & bVar60,
                                                         CONCAT14((byte)iVar89 & bVar59,iVar83))))
                             >> 0x20) == 0) || (auVar39 = auVar38, fVar94 != 0.0)) {
            fVar97 = (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20);
            uVar16 = NEON_fmax(CONCAT44(fVar40 * fVar94,(float)uVar9 * fVar94),
                               CONCAT44((fVar90 - fVar84) * fVar97,((float)uVar16 - fVar96) * fVar97
                                       ),4);
            fVar84 = (float)uVar16;
            *pfVar18 = fVar94 + fVar84;
            fVar96 = (float)((ulong)uVar16 >> 0x20);
            fVar90 = fVar96 * fStack_d4;
            fVar82 = fVar82 + fVar74 * fVar84 * local_e0;
            fVar49 = fVar49 + fVar63 * fVar96 * fStack_dc;
            fVar52 = fVar52 + fVar80 * fVar84 * fStack_d8;
            fVar64 = fVar64 + fVar97 * fVar90;
            auVar39._0_4_ = auVar38._0_4_ + fVar45 * fVar90;
            auVar39._4_4_ = auVar38._4_4_ + fVar46 * fVar90;
            auVar39._8_4_ = auVar38._8_4_ + fVar47 * fVar90;
            auVar39._12_4_ = auVar38._12_4_ + fVar48 * fVar90;
            local_b0 = CONCAT44(fVar96 + (float)((ulong)local_b0 >> 0x20),fVar84 + (float)local_b0);
            local_150 = fVar82;
            fStack_14c = fVar49;
            fStack_148 = fVar52;
            fStack_144 = fVar64;
            local_130 = auVar39._0_4_;
            fStack_12c = auVar39._4_4_;
            fStack_128 = auVar39._8_4_;
            fStack_124 = auVar39._12_4_;
          }
          auVar26 = NEON_ext(auVar26,auVar26,4,1);
          uVar20 = uVar20 - 1;
          pfVar17 = pfVar17 + 8;
          auVar38 = auVar39;
        } while (uVar20 != 0);
      }
    }
    if ((uVar3 & 0x30) != 0) {
      pfVar17 = (float *)(param_8 + uVar15 * 0x10 + 0x20);
      if ((uVar3 >> 5 & 1) == 0) {
        fVar40 = *(float *)(param_8 + uVar15 * 0x10 + 0x62);
        uVar9 = CONCAT44(fVar40,fVar40);
      }
      else {
        uVar9 = NEON_fmax(CONCAT44((float)((ulong)local_b0 >> 0x20) *
                                   *(float *)(param_8 + uVar15 * 0x10 + 0x66),
                                   (float)local_b0 * *(float *)(param_8 + uVar15 * 0x10 + 0x66)),0,4
                         );
        fVar40 = (float)uVar9;
      }
      if (fVar40 == 0.0) {
        *param_9 = 0.0;
      }
      else {
        if ((bVar2 & 1) == 0) {
          fVar40 = local_130 * *pfVar17 + local_150 * *(float *)(param_8 + uVar15 * 0x10 + 0x28);
          fVar45 = fStack_12c * *(float *)(param_8 + uVar15 * 0x10 + 0x22) +
                   fStack_14c * *(float *)(param_8 + uVar15 * 0x10 + 0x2a);
          fVar46 = fStack_128 * *(float *)(param_8 + uVar15 * 0x10 + 0x24) +
                   fStack_148 * *(float *)(param_8 + uVar15 * 0x10 + 0x2c);
          fVar49 = *(float *)(param_8 + uVar15 * 0x10 + 0x26) - (fVar40 + fVar45 + fVar46);
          fVar52 = *(float *)(param_8 + uVar15 * 0x10 + 0x26) - (fVar40 + fVar45 + fVar46);
          fVar40 = local_130 * *(float *)(param_8 + uVar15 * 0x10 + 0x38) +
                   local_150 * *(float *)(param_8 + uVar15 * 0x10 + 0x40);
          fVar45 = fStack_12c * *(float *)(param_8 + uVar15 * 0x10 + 0x3a) +
                   fStack_14c * *(float *)(param_8 + uVar15 * 0x10 + 0x42);
          fVar46 = fStack_128 * *(float *)(param_8 + uVar15 * 0x10 + 0x3c) +
                   fStack_148 * *(float *)(param_8 + uVar15 * 0x10 + 0x44);
          fVar64 = *(float *)(param_8 + uVar15 * 0x10 + 0x3e) - (fVar40 + fVar45 + fVar46);
          fVar74 = *(float *)(param_8 + uVar15 * 0x10 + 0x3e) - (fVar40 + fVar45 + fVar46);
          fVar40 = *(float *)(param_8 + uVar15 * 0x10 + 0x50);
          fVar45 = *(float *)(param_8 + uVar15 * 0x10 + 0x52);
          fVar46 = *(float *)(param_8 + uVar15 * 0x10 + 0x54);
          fVar47 = *(float *)(param_8 + uVar15 * 0x10 + 0x56);
          fVar82 = (float)((ulong)*(undefined8 *)(param_8 + uVar15 * 0x10 + 0x5c) >> 0x20);
          fVar48 = fVar82;
        }
        else {
          lVar12 = (ulong)(byte)(&DAT_03aa2a64)[(byte)param_8[uVar15 * 0x10 + 0x6a]] + uVar15 * 0x20
          ;
          uVar41 = *(undefined8 *)((long)param_8 + lVar12 + 0xd0);
          fVar40 = local_130 * *pfVar17 + local_150 * *(float *)(param_8 + uVar15 * 0x10 + 0x28);
          fVar45 = fStack_12c * *(float *)(param_8 + uVar15 * 0x10 + 0x22) +
                   fStack_14c * *(float *)(param_8 + uVar15 * 0x10 + 0x2a);
          fVar46 = fStack_128 * *(float *)(param_8 + uVar15 * 0x10 + 0x24) +
                   fStack_148 * *(float *)(param_8 + uVar15 * 0x10 + 0x2c);
          fVar47 = (float)uVar41;
          fVar82 = (float)*(undefined8 *)(param_3 + 2);
          fVar63 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
          fVar48 = (float)((ulong)uVar41 >> 0x20);
          fVar49 = (*(float *)(param_8 + uVar15 * 0x10 + 0x26) + fVar82 * fVar47) -
                   (fVar40 + fVar45 + fVar46);
          fVar52 = (*(float *)(param_8 + uVar15 * 0x10 + 0x26) + fVar63 * fVar47) -
                   (fVar40 + fVar45 + fVar46);
          fVar80 = (float)*(undefined8 *)((long)param_8 + lVar12 + 0xd8);
          fVar40 = local_130 * *(float *)(param_8 + uVar15 * 0x10 + 0x38) +
                   local_150 * *(float *)(param_8 + uVar15 * 0x10 + 0x40);
          fVar45 = fStack_12c * *(float *)(param_8 + uVar15 * 0x10 + 0x3a) +
                   fStack_14c * *(float *)(param_8 + uVar15 * 0x10 + 0x42);
          fVar46 = fStack_128 * *(float *)(param_8 + uVar15 * 0x10 + 0x3c) +
                   fStack_148 * *(float *)(param_8 + uVar15 * 0x10 + 0x44);
          fVar64 = (fVar82 * fVar48 + *(float *)(param_8 + uVar15 * 0x10 + 0x3e)) -
                   (fVar40 + fVar45 + fVar46);
          fVar74 = (fVar63 * fVar48 + *(float *)(param_8 + uVar15 * 0x10 + 0x3e)) -
                   (fVar40 + fVar45 + fVar46);
          fVar48 = (float)((ulong)*(undefined8 *)(param_8 + uVar15 * 0x10 + 0x5c) >> 0x20);
          fVar40 = *(float *)(param_8 + uVar15 * 0x10 + 0x50);
          fVar45 = *(float *)(param_8 + uVar15 * 0x10 + 0x52);
          fVar46 = *(float *)(param_8 + uVar15 * 0x10 + 0x54);
          fVar47 = *(float *)(param_8 + uVar15 * 0x10 + 0x56);
          fVar82 = fVar82 * fVar80 + fVar48;
          fVar48 = fVar63 * fVar80 + fVar48;
        }
        fVar82 = fVar82 - (local_150 * fVar40 + fStack_14c * fVar45 + fStack_148 * fVar46);
        fVar48 = fVar48 - (local_150 * fVar40 + fStack_14c * fVar45 + fStack_148 * fVar46);
        fVar40 = *(float *)(param_8 + uVar15 * 0x10 + 0x60);
        fVar45 = (float)((ulong)*(undefined8 *)(param_8 + uVar15 * 0x10 + 0x34) >> 0x20);
        fVar80 = fVar49 * fVar45 + fVar64 * fVar40;
        fVar84 = fVar52 * fVar45 + fVar74 * fVar40;
        fVar45 = (float)((ulong)*(undefined8 *)(param_8 + uVar15 * 0x10 + 0x4c) >> 0x20);
        fVar46 = fVar49 * fVar40 + fVar64 * fVar45;
        fVar63 = fVar52 * fVar40 + fVar74 * fVar45;
        fVar45 = fVar82 * fVar47;
        fVar47 = fVar48 * fVar47;
        fVar96 = fVar80 * fVar80 + fVar46 * fVar46;
        uVar41 = CONCAT44(fVar84 * fVar84 + fVar63 * fVar63,fVar96);
        fVar40 = (float)uVar9;
        if (fVar40 * fVar40 < fVar45 * fVar45 + fVar96) {
          fVar82 = fVar82 * *(float *)(param_8 + uVar15 * 0x10 + 100);
          fVar48 = fVar48 * *(float *)(param_8 + uVar15 * 0x10 + 100);
          fVar82 = fVar82 * fVar82;
          fVar48 = fVar48 * fVar48;
          uVar16 = CONCAT44(fVar48,fVar82);
          uVar77 = NEON_frecpe(uVar16,4);
          iVar83 = -(uint)(fVar82 == 0.0);
          iVar76 = -(uint)(fVar48 == 0.0);
          uVar16 = NEON_frecps(uVar16,uVar77,4);
          uVar78 = NEON_frsqrte(uVar41,4);
          fVar96 = (float)uVar78;
          fVar90 = (float)((ulong)uVar78 >> 0x20);
          uVar78 = NEON_frsqrts(uVar41,CONCAT44(fVar90 * fVar90,fVar96 * fVar96),4);
          uVar41 = NEON_fmov(0x3f800000,4);
          uVar16 = NEON_fmin((CONCAT44((fVar74 * fVar74 + fVar52 * fVar52) * 0.5 *
                                       (float)((ulong)uVar77 >> 0x20) *
                                       (float)((ulong)uVar16 >> 0x20),
                                       (fVar64 * fVar64 + fVar49 * fVar49) * 0.5 *
                                       (float)uVar77 * (float)uVar16) ^ 0x5f7ffff05f7ffff0) &
                             CONCAT17(~(byte)((uint)iVar76 >> 0x18),
                                      CONCAT16(~(byte)((uint)iVar76 >> 0x10),
                                               CONCAT15(~(byte)((uint)iVar76 >> 8),
                                                        CONCAT14(~(byte)iVar76,
                                                                 CONCAT13(~(byte)((uint)iVar83 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((uint)
                                                  iVar83 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar83 >> 8),~(byte)iVar83)
                                                  )))))) ^ 0x5f7ffff05f7ffff0,uVar41,4);
          uVar77 = NEON_fmax(uVar16,0x3d8888893d888889,4);
          fVar82 = (float)((ulong)uVar77 >> 0x20);
          fVar48 = (float)((ulong)uVar9 >> 0x20);
          uVar95 = NEON_fmax(CONCAT44((float)((ulong)uVar41 >> 0x20) - fVar82,
                                      (float)uVar41 - (float)uVar77),0x3d8888893d888889,4);
          uVar79 = NEON_frecpe(CONCAT44(ABS(fVar47),ABS(fVar45)),4);
          uVar16 = NEON_frecps(CONCAT44(ABS(fVar47),ABS(fVar45)),uVar79,4);
          iVar83 = -(uint)(fVar45 == 0.0);
          iVar76 = -(uint)(fVar47 == 0.0);
          uVar9 = NEON_fmin(CONCAT44(fVar48 * fVar82 * fVar90 * (float)((ulong)uVar78 >> 0x20),
                                     fVar40 * (float)uVar77 * fVar96 * (float)uVar78),uVar41,4);
          uVar41 = NEON_fmin((CONCAT44(fVar48 * (float)((ulong)uVar95 >> 0x20) *
                                       (float)((ulong)uVar79 >> 0x20) *
                                       (float)((ulong)uVar16 >> 0x20),
                                       fVar40 * (float)uVar95 * (float)uVar79 * (float)uVar16) ^
                             0x5f7ffff05f7ffff0) &
                             CONCAT17(~(byte)((uint)iVar76 >> 0x18),
                                      CONCAT16(~(byte)((uint)iVar76 >> 0x10),
                                               CONCAT15(~(byte)((uint)iVar76 >> 8),
                                                        CONCAT14(~(byte)iVar76,
                                                                 CONCAT13(~(byte)((uint)iVar83 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((uint)
                                                  iVar83 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar83 >> 8),~(byte)iVar83)
                                                  )))))) ^ 0x5f7ffff05f7ffff0,uVar41,4);
          fVar80 = fVar80 * (float)uVar9;
          fVar40 = (float)((ulong)uVar9 >> 0x20);
          fVar84 = fVar84 * fVar40;
          fVar46 = fVar46 * (float)uVar9;
          fVar63 = fVar63 * fVar40;
          fVar45 = fVar45 * (float)uVar41;
          fVar47 = fVar47 * (float)((ulong)uVar41 >> 0x20);
          if ((*(byte *)(param_3 + 4) >> 1 & 1) != 0) {
            uVar16 = NEON_fmin(uVar9,uVar41,4);
            uVar78 = NEON_fmov(0x41700000,4);
            uVar9 = NEON_fmax(uVar9,uVar41,4);
            uVar9 = NEON_fmin(CONCAT44((float)((ulong)uVar16 >> 0x20) *
                                       (float)((ulong)uVar78 >> 0x20),(float)uVar16 * (float)uVar78)
                              ,uVar9,4);
            *param_9 = (float)uVar9;
          }
        }
        else {
          *param_9 = 1.0;
        }
        local_130 = local_130 + fVar80 * *pfVar17 * fStack_d4 +
                    fVar46 * *(float *)(param_8 + uVar15 * 0x10 + 0x38) * fStack_d4;
        fStack_12c = fStack_12c + fVar84 * *(float *)(param_8 + uVar15 * 0x10 + 0x22) * fStack_d4 +
                     fVar63 * *(float *)(param_8 + uVar15 * 0x10 + 0x3a) * fStack_d4;
        fStack_128 = fStack_128 + fVar80 * *(float *)(param_8 + uVar15 * 0x10 + 0x24) * fStack_d4 +
                     fVar46 * *(float *)(param_8 + uVar15 * 0x10 + 0x3c) * fStack_d4;
        fStack_124 = fStack_124 + fVar84 * *(float *)(param_8 + uVar15 * 0x10 + 0x26) * fStack_d4 +
                     fVar63 * *(float *)(param_8 + uVar15 * 0x10 + 0x3e) * fStack_d4;
        fVar45 = fVar45 * *(float *)(param_8 + uVar15 * 0x10 + 100);
        fVar47 = fVar47 * *(float *)(param_8 + uVar15 * 0x10 + 100);
        local_150 = local_150 + fVar80 * local_e0 * *(float *)(param_8 + uVar15 * 0x10 + 0x28) +
                    fVar46 * local_e0 * *(float *)(param_8 + uVar15 * 0x10 + 0x40) +
                    fVar45 * local_e0 * *(float *)(param_8 + uVar15 * 0x10 + 0x50);
        fStack_14c = fStack_14c + fVar84 * fStack_dc * *(float *)(param_8 + uVar15 * 0x10 + 0x2a) +
                     fVar63 * fStack_dc * *(float *)(param_8 + uVar15 * 0x10 + 0x42) +
                     fVar47 * fStack_dc * *(float *)(param_8 + uVar15 * 0x10 + 0x52);
        fStack_148 = fStack_148 + fVar80 * fStack_d8 * *(float *)(param_8 + uVar15 * 0x10 + 0x2c) +
                     fVar46 * fStack_d8 * *(float *)(param_8 + uVar15 * 0x10 + 0x44) +
                     fVar45 * fStack_d8 * *(float *)(param_8 + uVar15 * 0x10 + 0x54);
        fStack_144 = fStack_144 + fVar84 * fStack_d4 * *(float *)(param_8 + uVar15 * 0x10 + 0x2e) +
                     fVar63 * fStack_d4 * *(float *)(param_8 + uVar15 * 0x10 + 0x46) +
                     fVar47 * fStack_d4 * *(float *)(param_8 + uVar15 * 0x10 + 0x56);
      }
    }
    if ((uVar3 >> 1 & 1) == 0) goto LAB_030b634c;
    FUN_030b9a90(pfVar8,param_8,&local_150,&local_160,param_5,param_9);
    if ((*(byte *)((long)param_8 + 5) >> 3 & 1) != 0) goto LAB_030b69a8;
LAB_030b6354:
    bVar2 = *(byte *)(param_3 + 4);
  }
  else {
    auVar36 = *(undefined1 (*) [16])(param_8 + 8);
    fVar40 = auVar36._12_4_;
    *param_5 = CONCAT44(fVar40,fVar40);
    uVar9 = 0;
    if ((uVar3 & 4) != 0) {
      uVar9 = 0xbf800000bf800000;
    }
    uVar41 = NEON_scvtf((ulong)CONCAT14(*(byte *)((long)param_8 + 7),
                                        (uint)*(byte *)((long)param_8 + 7)),4);
    uVar20 = CONCAT44((float)((ulong)uVar41 >> 0x20) * 0.003921569 * fVar40,
                      (float)uVar41 * 0.003921569 * fVar40);
    param_5[1] = uVar20;
    bVar2 = *(byte *)((long)param_8 + 5);
    param_5[2] = 0;
    param_5[4] = uVar9;
    *(undefined4 *)(param_5 + 3) = 0;
    *(uint *)((long)param_5 + 0x1c) = bVar2 & 0x40;
    uVar16 = _UNK_03889708;
    uVar41 = _DAT_03889700;
    uVar15 = (ulong)(byte)param_8[2];
    if (uVar15 != 0) {
      fVar74 = 0.0;
      fVar63 = 0.0;
      pfVar17 = param_9 + 1;
      uVar31 = 0;
      puVar19 = param_8 + 0x28;
      fVar82 = auVar26._0_4_;
      fVar49 = auVar36._0_4_;
      fVar52 = auVar36._4_4_;
      fVar64 = auVar36._8_4_;
      uVar21 = uVar15;
      fVar45 = local_130;
      fVar46 = fStack_12c;
      fVar47 = fStack_128;
      fVar48 = fStack_124;
      if ((uVar3 >> 6 & 1) == 0) goto LAB_030b6114;
      do {
        uVar77 = *(undefined8 *)(puVar19 + -4);
        uVar78 = *(undefined8 *)(puVar19 + -8);
        fVar80 = (float)((ulong)uVar78 >> 0x20);
        fVar96 = fVar49 * (fVar45 - (float)local_110) + (local_150 - fStack_100) * (float)uVar78;
        fVar97 = fVar52 * (fVar46 - local_110._4_4_) + (fStack_14c - fStack_fc) * fVar80;
        fVar98 = fVar64 * (fVar47 - (float)uStack_108) + (fStack_148 - fStack_f8) * (float)uVar77;
        fVar84 = fVar49 * (float)local_110 + fStack_100 * (float)uVar78;
        fVar90 = fVar52 * local_110._4_4_ + fStack_fc * fVar80;
        fVar94 = fVar64 * (float)uStack_108 + fStack_f8 * (float)uVar77;
        fVar80 = fVar82 + fVar96 + fVar97 + fVar98;
        fVar82 = fVar82 + fVar96 + fVar97 + fVar98;
        fVar97 = (float)((ulong)*(undefined8 *)(puVar19 + 4) >> 0x20);
        fVar96 = (fVar97 - (fVar94 + fVar84 + fVar90)) * (float)*(undefined8 *)(pfVar8 + 0x30);
        fVar84 = (fVar97 - (fVar94 + fVar84 + fVar90)) * (float)*(undefined8 *)(pfVar8 + 0x30);
        uVar95 = NEON_fmin(CONCAT44(fVar84,fVar96),CONCAT44(fVar84 * *pfVar8,fVar96 * *pfVar8),4);
        while( true ) {
          iVar83 = -(uint)((float)uVar95 <= fVar80);
          fVar96 = (float)((ulong)uVar95 >> 0x20);
          iVar89 = -(uint)(fVar96 <= fVar82);
          bVar85 = (byte)((uint)iVar83 >> 8);
          bVar86 = (byte)((uint)iVar83 >> 0x10);
          bVar87 = (byte)((uint)iVar83 >> 0x18);
          iVar76 = CONCAT13(bVar87 & (byte)((ulong)uVar41 >> 0x18),
                            CONCAT12(bVar86 & (byte)((ulong)uVar41 >> 0x10),
                                     CONCAT11(bVar85 & (byte)((ulong)uVar41 >> 8),
                                              (byte)iVar83 & (byte)uVar41)));
          bVar91 = (byte)((uint)iVar89 >> 8);
          bVar92 = (byte)((uint)iVar89 >> 0x10);
          bVar93 = (byte)((uint)iVar89 >> 0x18);
          iVar83 = CONCAT13(bVar87 & (byte)((ulong)uVar16 >> 0x18),
                            CONCAT12(bVar86 & (byte)((ulong)uVar16 >> 0x10),
                                     CONCAT11(bVar85 & (byte)((ulong)uVar16 >> 8),
                                              (byte)iVar83 & (byte)uVar16)));
          fVar84 = *pfVar17;
          if ((iVar76 + (int)(CONCAT17(bVar93 & (byte)((ulong)uVar41 >> 0x38),
                                       CONCAT16(bVar92 & (byte)((ulong)uVar41 >> 0x30),
                                                CONCAT15(bVar91 & (byte)((ulong)uVar41 >> 0x28),
                                                         CONCAT14((byte)iVar89 &
                                                                  (byte)((ulong)uVar41 >> 0x20),
                                                                  iVar76)))) >> 0x20) +
               iVar83 + (int)(CONCAT17(bVar93 & (byte)((ulong)uVar16 >> 0x38),
                                       CONCAT16(bVar92 & (byte)((ulong)uVar16 >> 0x30),
                                                CONCAT15(bVar91 & (byte)((ulong)uVar16 >> 0x28),
                                                         CONCAT14((byte)iVar89 &
                                                                  (byte)((ulong)uVar16 >> 0x20),
                                                                  iVar83)))) >> 0x20) == 0) ||
             (fVar84 != 0.0)) {
            fVar90 = (float)((ulong)uVar77 >> 0x20);
            uVar81 = NEON_fmax(CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar84,(float)uVar9 * fVar84
                                       ),
                               CONCAT44((fVar96 - fVar82) * fVar90,((float)uVar95 - fVar80) * fVar90
                                       ),4);
            fVar82 = (float)uVar81;
            uVar81 = uVar81 ^ (uVar81 ^ uVar20) &
                              CONCAT44(-(uint)(fVar40 < (float)(uVar81 >> 0x20)),
                                       -(uint)(fVar40 < fVar82));
            fVar74 = fVar74 + fVar82;
            fVar80 = (float)uVar81;
            fVar63 = fVar63 + fVar80;
            if (fVar40 < fVar82) {
              uVar31 = 0xffffffff;
            }
            *(undefined4 *)(param_5 + 3) = uVar31;
            *(float *)(param_5 + 2) = fVar74;
            *(float *)((long)param_5 + 0x14) = fVar63;
            *pfVar17 = fVar84 + fVar80;
            fVar82 = (float)(uVar81 >> 0x20);
            fVar84 = fVar82 * fStack_d4;
            local_150 = local_150 + (float)uVar78 * fVar80 * local_e0;
            fStack_14c = fStack_14c + (float)((ulong)uVar78 >> 0x20) * fVar82 * fStack_dc;
            fStack_148 = fStack_148 + (float)uVar77 * fVar80 * fStack_d8;
            fStack_144 = fStack_144 + fVar90 * fVar84;
            fVar45 = fVar45 + fVar49 * fVar84;
            fVar46 = fVar46 + fVar52 * fVar84;
            fVar47 = fVar47 + fVar64 * fVar84;
            fVar48 = fVar48 + fVar40 * fVar84;
            local_b0 = CONCAT44(fVar82 + (float)((ulong)local_b0 >> 0x20),fVar80 + (float)local_b0);
            local_130 = fVar45;
            fStack_12c = fVar46;
            fStack_128 = fVar47;
            fStack_124 = fVar48;
          }
          auVar26 = NEON_ext(auVar26,auVar26,4,1);
          uVar21 = uVar21 - 1;
          pfVar17 = pfVar17 + 1;
          puVar19 = puVar19 + 0x10;
          if (uVar21 == 0) goto LAB_030b61f4;
          fVar82 = auVar26._0_4_;
          if ((uVar3 >> 6 & 1) != 0) break;
LAB_030b6114:
          uVar77 = *(undefined8 *)(puVar19 + -4);
          uVar78 = *(undefined8 *)(puVar19 + -8);
          fVar84 = fVar49 * fVar45 + local_150 * (float)uVar78;
          fVar96 = fVar52 * fVar46 + fStack_14c * (float)((ulong)uVar78 >> 0x20);
          fVar90 = fVar64 * fVar47 + fStack_148 * (float)uVar77;
          fVar80 = fVar82 + fVar84 + fVar96 + fVar90;
          fVar82 = fVar82 + fVar84 + fVar96 + fVar90;
          uVar88 = (undefined4)((ulong)*(undefined8 *)(puVar19 + 4) >> 0x20);
          uVar95 = CONCAT44(uVar88,uVar88);
        }
      } while( true );
    }
LAB_030b61f4:
    if ((uVar3 & 0x30) != 0) {
      pfVar17 = (float *)(param_8 + uVar15 * 0x10 + 0x20);
      if ((uVar3 >> 5 & 1) == 0) {
        fVar40 = *(float *)(param_8 + uVar15 * 0x10 + 0x62);
        uVar9 = CONCAT44(fVar40,fVar40);
      }
      else {
        uVar9 = NEON_fmax(CONCAT44((float)((ulong)local_b0 >> 0x20) *
                                   *(float *)(param_8 + uVar15 * 0x10 + 0x66),
                                   (float)local_b0 * *(float *)(param_8 + uVar15 * 0x10 + 0x66)),0,4
                         );
        fVar40 = (float)uVar9;
      }
      if (fVar40 == 0.0) {
        *param_9 = 0.0;
      }
      else {
        if ((bVar2 & 1) == 0) {
          fVar40 = local_130 * *pfVar17 + local_150 * *(float *)(param_8 + uVar15 * 0x10 + 0x28);
          fVar45 = fStack_12c * *(float *)(param_8 + uVar15 * 0x10 + 0x22) +
                   fStack_14c * *(float *)(param_8 + uVar15 * 0x10 + 0x2a);
          fVar46 = fStack_128 * *(float *)(param_8 + uVar15 * 0x10 + 0x24) +
                   fStack_148 * *(float *)(param_8 + uVar15 * 0x10 + 0x2c);
          fVar49 = *(float *)(param_8 + uVar15 * 0x10 + 0x26) - (fVar40 + fVar45 + fVar46);
          fVar52 = *(float *)(param_8 + uVar15 * 0x10 + 0x26) - (fVar40 + fVar45 + fVar46);
          fVar40 = local_130 * *(float *)(param_8 + uVar15 * 0x10 + 0x38) +
                   local_150 * *(float *)(param_8 + uVar15 * 0x10 + 0x40);
          fVar45 = fStack_12c * *(float *)(param_8 + uVar15 * 0x10 + 0x3a) +
                   fStack_14c * *(float *)(param_8 + uVar15 * 0x10 + 0x42);
          fVar46 = fStack_128 * *(float *)(param_8 + uVar15 * 0x10 + 0x3c) +
                   fStack_148 * *(float *)(param_8 + uVar15 * 0x10 + 0x44);
          fVar64 = *(float *)(param_8 + uVar15 * 0x10 + 0x3e) - (fVar40 + fVar45 + fVar46);
          fVar74 = *(float *)(param_8 + uVar15 * 0x10 + 0x3e) - (fVar40 + fVar45 + fVar46);
          fVar40 = *(float *)(param_8 + uVar15 * 0x10 + 0x50);
          fVar45 = *(float *)(param_8 + uVar15 * 0x10 + 0x52);
          fVar46 = *(float *)(param_8 + uVar15 * 0x10 + 0x54);
          fVar47 = *(float *)(param_8 + uVar15 * 0x10 + 0x56);
          fVar82 = (float)((ulong)*(undefined8 *)(param_8 + uVar15 * 0x10 + 0x5c) >> 0x20);
          fVar48 = fVar82;
        }
        else {
          lVar12 = (ulong)(byte)(&DAT_03aa2a64)[(byte)param_8[uVar15 * 0x10 + 0x6a]] + uVar15 * 0x20
          ;
          uVar41 = *(undefined8 *)((long)param_8 + lVar12 + 0xd0);
          fVar40 = local_130 * *pfVar17 + local_150 * *(float *)(param_8 + uVar15 * 0x10 + 0x28);
          fVar45 = fStack_12c * *(float *)(param_8 + uVar15 * 0x10 + 0x22) +
                   fStack_14c * *(float *)(param_8 + uVar15 * 0x10 + 0x2a);
          fVar46 = fStack_128 * *(float *)(param_8 + uVar15 * 0x10 + 0x24) +
                   fStack_148 * *(float *)(param_8 + uVar15 * 0x10 + 0x2c);
          fVar47 = (float)uVar41;
          fVar82 = (float)*(undefined8 *)(param_3 + 2);
          fVar63 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20);
          fVar48 = (float)((ulong)uVar41 >> 0x20);
          fVar49 = (*(float *)(param_8 + uVar15 * 0x10 + 0x26) + fVar82 * fVar47) -
                   (fVar40 + fVar45 + fVar46);
          fVar52 = (*(float *)(param_8 + uVar15 * 0x10 + 0x26) + fVar63 * fVar47) -
                   (fVar40 + fVar45 + fVar46);
          fVar80 = (float)*(undefined8 *)((long)param_8 + lVar12 + 0xd8);
          fVar40 = local_130 * *(float *)(param_8 + uVar15 * 0x10 + 0x38) +
                   local_150 * *(float *)(param_8 + uVar15 * 0x10 + 0x40);
          fVar45 = fStack_12c * *(float *)(param_8 + uVar15 * 0x10 + 0x3a) +
                   fStack_14c * *(float *)(param_8 + uVar15 * 0x10 + 0x42);
          fVar46 = fStack_128 * *(float *)(param_8 + uVar15 * 0x10 + 0x3c) +
                   fStack_148 * *(float *)(param_8 + uVar15 * 0x10 + 0x44);
          fVar64 = (fVar82 * fVar48 + *(float *)(param_8 + uVar15 * 0x10 + 0x3e)) -
                   (fVar40 + fVar45 + fVar46);
          fVar74 = (fVar63 * fVar48 + *(float *)(param_8 + uVar15 * 0x10 + 0x3e)) -
                   (fVar40 + fVar45 + fVar46);
          fVar48 = (float)((ulong)*(undefined8 *)(param_8 + uVar15 * 0x10 + 0x5c) >> 0x20);
          fVar40 = *(float *)(param_8 + uVar15 * 0x10 + 0x50);
          fVar45 = *(float *)(param_8 + uVar15 * 0x10 + 0x52);
          fVar46 = *(float *)(param_8 + uVar15 * 0x10 + 0x54);
          fVar47 = *(float *)(param_8 + uVar15 * 0x10 + 0x56);
          fVar82 = fVar82 * fVar80 + fVar48;
          fVar48 = fVar63 * fVar80 + fVar48;
        }
        fVar82 = fVar82 - (local_150 * fVar40 + fStack_14c * fVar45 + fStack_148 * fVar46);
        fVar48 = fVar48 - (local_150 * fVar40 + fStack_14c * fVar45 + fStack_148 * fVar46);
        fVar40 = *(float *)(param_8 + uVar15 * 0x10 + 0x60);
        fVar45 = (float)((ulong)*(undefined8 *)(param_8 + uVar15 * 0x10 + 0x34) >> 0x20);
        fVar80 = fVar49 * fVar45 + fVar64 * fVar40;
        fVar84 = fVar52 * fVar45 + fVar74 * fVar40;
        fVar45 = (float)((ulong)*(undefined8 *)(param_8 + uVar15 * 0x10 + 0x4c) >> 0x20);
        fVar46 = fVar49 * fVar40 + fVar64 * fVar45;
        fVar63 = fVar52 * fVar40 + fVar74 * fVar45;
        fVar45 = fVar82 * fVar47;
        fVar47 = fVar48 * fVar47;
        fVar96 = fVar80 * fVar80 + fVar46 * fVar46;
        uVar41 = CONCAT44(fVar84 * fVar84 + fVar63 * fVar63,fVar96);
        fVar40 = (float)uVar9;
        if (fVar40 * fVar40 < fVar45 * fVar45 + fVar96) {
          fVar82 = fVar82 * *(float *)(param_8 + uVar15 * 0x10 + 100);
          fVar48 = fVar48 * *(float *)(param_8 + uVar15 * 0x10 + 100);
          fVar82 = fVar82 * fVar82;
          fVar48 = fVar48 * fVar48;
          uVar16 = CONCAT44(fVar48,fVar82);
          uVar77 = NEON_frecpe(uVar16,4);
          iVar83 = -(uint)(fVar82 == 0.0);
          iVar76 = -(uint)(fVar48 == 0.0);
          uVar16 = NEON_frecps(uVar16,uVar77,4);
          uVar78 = NEON_frsqrte(uVar41,4);
          fVar96 = (float)uVar78;
          fVar90 = (float)((ulong)uVar78 >> 0x20);
          uVar78 = NEON_frsqrts(uVar41,CONCAT44(fVar90 * fVar90,fVar96 * fVar96),4);
          uVar41 = NEON_fmov(0x3f800000,4);
          uVar16 = NEON_fmin((CONCAT44((fVar74 * fVar74 + fVar52 * fVar52) * 0.5 *
                                       (float)((ulong)uVar77 >> 0x20) *
                                       (float)((ulong)uVar16 >> 0x20),
                                       (fVar64 * fVar64 + fVar49 * fVar49) * 0.5 *
                                       (float)uVar77 * (float)uVar16) ^ 0x5f7ffff05f7ffff0) &
                             CONCAT17(~(byte)((uint)iVar76 >> 0x18),
                                      CONCAT16(~(byte)((uint)iVar76 >> 0x10),
                                               CONCAT15(~(byte)((uint)iVar76 >> 8),
                                                        CONCAT14(~(byte)iVar76,
                                                                 CONCAT13(~(byte)((uint)iVar83 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((uint)
                                                  iVar83 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar83 >> 8),~(byte)iVar83)
                                                  )))))) ^ 0x5f7ffff05f7ffff0,uVar41,4);
          uVar77 = NEON_fmax(uVar16,0x3d8888893d888889,4);
          fVar82 = (float)((ulong)uVar77 >> 0x20);
          fVar48 = (float)((ulong)uVar9 >> 0x20);
          uVar95 = NEON_fmax(CONCAT44((float)((ulong)uVar41 >> 0x20) - fVar82,
                                      (float)uVar41 - (float)uVar77),0x3d8888893d888889,4);
          uVar79 = NEON_frecpe(CONCAT44(ABS(fVar47),ABS(fVar45)),4);
          uVar16 = NEON_frecps(CONCAT44(ABS(fVar47),ABS(fVar45)),uVar79,4);
          iVar83 = -(uint)(fVar45 == 0.0);
          iVar76 = -(uint)(fVar47 == 0.0);
          uVar9 = NEON_fmin(CONCAT44(fVar48 * fVar82 * fVar90 * (float)((ulong)uVar78 >> 0x20),
                                     fVar40 * (float)uVar77 * fVar96 * (float)uVar78),uVar41,4);
          uVar41 = NEON_fmin((CONCAT44(fVar48 * (float)((ulong)uVar95 >> 0x20) *
                                       (float)((ulong)uVar79 >> 0x20) *
                                       (float)((ulong)uVar16 >> 0x20),
                                       fVar40 * (float)uVar95 * (float)uVar79 * (float)uVar16) ^
                             0x5f7ffff05f7ffff0) &
                             CONCAT17(~(byte)((uint)iVar76 >> 0x18),
                                      CONCAT16(~(byte)((uint)iVar76 >> 0x10),
                                               CONCAT15(~(byte)((uint)iVar76 >> 8),
                                                        CONCAT14(~(byte)iVar76,
                                                                 CONCAT13(~(byte)((uint)iVar83 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((uint)
                                                  iVar83 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar83 >> 8),~(byte)iVar83)
                                                  )))))) ^ 0x5f7ffff05f7ffff0,uVar41,4);
          fVar80 = fVar80 * (float)uVar9;
          fVar40 = (float)((ulong)uVar9 >> 0x20);
          fVar84 = fVar84 * fVar40;
          fVar46 = fVar46 * (float)uVar9;
          fVar63 = fVar63 * fVar40;
          fVar45 = fVar45 * (float)uVar41;
          fVar47 = fVar47 * (float)((ulong)uVar41 >> 0x20);
          if ((*(byte *)(param_3 + 4) >> 1 & 1) != 0) {
            uVar16 = NEON_fmin(uVar9,uVar41,4);
            uVar78 = NEON_fmov(0x41700000,4);
            uVar9 = NEON_fmax(uVar9,uVar41,4);
            uVar9 = NEON_fmin(CONCAT44((float)((ulong)uVar16 >> 0x20) *
                                       (float)((ulong)uVar78 >> 0x20),(float)uVar16 * (float)uVar78)
                              ,uVar9,4);
            *param_9 = (float)uVar9;
          }
        }
        else {
          *param_9 = 1.0;
        }
        local_130 = local_130 + fVar80 * *pfVar17 * fStack_d4 +
                    fVar46 * *(float *)(param_8 + uVar15 * 0x10 + 0x38) * fStack_d4;
        fStack_12c = fStack_12c + fVar84 * *(float *)(param_8 + uVar15 * 0x10 + 0x22) * fStack_d4 +
                     fVar63 * *(float *)(param_8 + uVar15 * 0x10 + 0x3a) * fStack_d4;
        fStack_128 = fStack_128 + fVar80 * *(float *)(param_8 + uVar15 * 0x10 + 0x24) * fStack_d4 +
                     fVar46 * *(float *)(param_8 + uVar15 * 0x10 + 0x3c) * fStack_d4;
        fStack_124 = fStack_124 + fVar84 * *(float *)(param_8 + uVar15 * 0x10 + 0x26) * fStack_d4 +
                     fVar63 * *(float *)(param_8 + uVar15 * 0x10 + 0x3e) * fStack_d4;
        fVar45 = fVar45 * *(float *)(param_8 + uVar15 * 0x10 + 100);
        fVar47 = fVar47 * *(float *)(param_8 + uVar15 * 0x10 + 100);
        local_150 = local_150 + fVar80 * local_e0 * *(float *)(param_8 + uVar15 * 0x10 + 0x28) +
                    fVar46 * local_e0 * *(float *)(param_8 + uVar15 * 0x10 + 0x40) +
                    fVar45 * local_e0 * *(float *)(param_8 + uVar15 * 0x10 + 0x50);
        fStack_14c = fStack_14c + fVar84 * fStack_dc * *(float *)(param_8 + uVar15 * 0x10 + 0x2a) +
                     fVar63 * fStack_dc * *(float *)(param_8 + uVar15 * 0x10 + 0x42) +
                     fVar47 * fStack_dc * *(float *)(param_8 + uVar15 * 0x10 + 0x52);
        fStack_148 = fStack_148 + fVar80 * fStack_d8 * *(float *)(param_8 + uVar15 * 0x10 + 0x2c) +
                     fVar46 * fStack_d8 * *(float *)(param_8 + uVar15 * 0x10 + 0x44) +
                     fVar45 * fStack_d8 * *(float *)(param_8 + uVar15 * 0x10 + 0x54);
        fStack_144 = fStack_144 + fVar84 * fStack_d4 * *(float *)(param_8 + uVar15 * 0x10 + 0x2e) +
                     fVar63 * fStack_d4 * *(float *)(param_8 + uVar15 * 0x10 + 0x46) +
                     fVar47 * fStack_d4 * *(float *)(param_8 + uVar15 * 0x10 + 0x56);
      }
    }
    if ((uVar3 >> 1 & 1) == 0) {
LAB_030b634c:
      bVar2 = *(byte *)((long)param_8 + 5);
    }
    else {
      FUN_030b98a0(pfVar8,param_8,&local_150,&local_160,param_5,param_9);
      bVar2 = *(byte *)((long)param_8 + 5);
    }
    if ((bVar2 >> 3 & 1) == 0) goto LAB_030b6354;
LAB_030b69a8:
    lVar12 = 0;
    if ((*param_8 & 0x30) != 0) {
      lVar12 = 0x90;
    }
    lVar12 = lVar12 + (ulong)(byte)param_8[2] * 0x20;
    auVar26 = *(undefined1 (*) [16])
               (*(long *)(param_2 + 0x50) +
               ((ulong)*(uint *)(*(long *)(param_4 + ((ulong)*param_8 & 1) * 8) +
                                 (ulong)*(uint *)(param_8 + 0x14) * 0x20 + 0x18) & 0x7fffffff) *
               0x80);
    auVar36 = NEON_ext(auVar26,auVar26,8,1);
    fVar82 = auVar36._4_4_ * auVar36._4_4_;
    uVar9 = NEON_ext(auVar26._0_8_,auVar36._0_8_,4,1);
    fVar48 = fVar82 + -0.5;
    fVar82 = fVar82 + -0.5;
    auVar36 = *param_7;
    fVar40 = auVar26._0_4_;
    fVar49 = auVar36._0_4_;
    fVar45 = auVar26._4_4_;
    fVar52 = auVar36._4_4_;
    fVar46 = auVar26._8_4_;
    fVar64 = auVar36._8_4_;
    fVar47 = auVar26._12_4_;
    fVar74 = fVar40 * fVar49 + fVar45 * fVar52 + fVar46 * fVar64;
    fVar63 = fVar40 * fVar49 + fVar45 * fVar52 + fVar46 * fVar64;
    auVar26 = NEON_ext(auVar36,auVar36,8,1);
    uVar41 = NEON_ext(auVar36._0_8_,auVar26._0_8_,4,1);
    auVar37._0_4_ = fVar40 * (float)uVar41 - fVar49 * (float)uVar9;
    auVar37._4_4_ = fVar45 * (float)((ulong)uVar41 >> 0x20) - fVar52 * (float)((ulong)uVar9 >> 0x20)
    ;
    auVar37._8_4_ = fVar46 * fVar49 - fVar64 * fVar40;
    auVar37._12_4_ = fVar47 * fVar52 - auVar36._12_4_ * fVar45;
    auVar43 = NEON_ext(auVar37,auVar37,4,1);
    auVar26 = *(undefined1 (*) [16])
               ((long)param_8 +
               (ulong)(byte)(&DAT_03aa2d64)[*(byte *)((long)param_8 + lVar12 + 0x44)] + lVar12 +
               0x40);
    auVar44 = NEON_ext(auVar26,auVar26,8,1);
    uVar9 = NEON_ext(auVar26._0_8_,auVar44._0_8_,4,1);
    fVar40 = fVar49 * fVar48 + fVar40 * fVar74 + auVar43._0_4_ * fVar47;
    fVar45 = fVar52 * fVar82 + fVar45 * fVar63 + auVar43._4_4_ * fVar47;
    fVar46 = fVar64 * fVar48 + fVar46 * fVar74 + auVar37._0_4_ * fVar47;
    fVar47 = auVar36._12_4_ * fVar82 + fVar47 * fVar63 + auVar37._4_4_ * fVar47;
    auVar27._0_4_ = fVar40 + fVar40;
    auVar27._4_4_ = fVar45 + fVar45;
    auVar27._8_4_ = fVar46 + fVar46;
    auVar27._12_4_ = fVar47 + fVar47;
    auVar36 = NEON_ext(auVar27,auVar27,4,1);
    auVar28._0_4_ = (float)uVar9 * auVar27._0_4_ - auVar26._0_4_ * auVar36._0_4_;
    auVar28._4_4_ = (float)((ulong)uVar9 >> 0x20) * auVar27._4_4_ - auVar26._4_4_ * auVar36._4_4_;
    auVar28._8_4_ = auVar26._0_4_ * auVar27._8_4_ - auVar26._8_4_ * auVar27._0_4_;
    auVar28._12_4_ = auVar26._4_4_ * auVar27._12_4_ - auVar26._12_4_ * auVar27._4_4_;
    auVar26 = NEON_ext(auVar28,auVar28,4,1);
    auVar29._0_8_ =
         CONCAT44(*(float *)(param_7[2] + 4) - auVar26._4_4_,*(float *)param_7[2] - auVar26._0_4_);
    auVar29._8_4_ = *(float *)(param_7[2] + 8) - auVar28._0_4_;
    auVar29._12_4_ = *(float *)(param_7[2] + 0xc) - auVar28._4_4_;
    *(long *)(param_7[2] + 8) = auVar29._8_8_;
    *(undefined8 *)param_7[2] = auVar29._0_8_;
    bVar2 = *(byte *)(param_3 + 4);
  }
  if ((bVar2 >> 1 & 1) == 0) goto LAB_030b635c;
  bVar2 = *(byte *)((long)param_8 + 5);
  if (0x1f < bVar2) {
    lStack_90 = param_10;
    lVar12 = 0;
    if ((*param_8 & 0x30) != 0) {
      lVar12 = 0x90;
    }
    lVar12 = lVar12 + (ulong)(byte)param_8[2] * 0x20 + 0x40;
    local_88 = *(int *)(param_5 + 3);
    local_98 = param_8;
    if (((bVar2 >> 6 & 1) == 0) || (local_88 == 0)) {
LAB_030b6b3c:
      if (-1 < (char)bVar2) goto LAB_030b6b44;
LAB_030b6fe8:
      if (((param_8[3] & 0xe0) != 0x40) || (*(int *)(param_5 + 3) == 0)) goto LAB_030b6b44;
      uVar9 = FUN_03024d10(*(undefined8 *)(param_1 + 8),param_8);
      uVar41 = FUN_03024d40(*(undefined8 *)(param_1 + 8),param_8);
      puVar19 = local_98;
      puVar13 = *(undefined8 **)(param_1 + 0x4e0);
      puVar23 = *(uint **)(*(long *)(param_1 + 0x630) + (long)*(int *)(param_1 + 0x638) * 8 + -8);
      uVar10 = *puVar23;
      bVar7 = 0x3a < uVar10 >> 0x16;
      uVar15 = (ulong)local_98 >> 0x20;
      if (*(int *)(param_8 + 0x14) == 0) {
        if (bVar7) {
          puVar24 = puVar23;
          do {
            iVar83 = *(int *)(puVar13 + 0xb) + -1;
            if (*(int *)(puVar13 + 0xb) < 1) {
              lVar22 = puVar13[1];
              (**(code **)(*(long *)*puVar13 + 0x20))((long *)*puVar13,lVar22,6);
              *(undefined4 *)(puVar13 + 0xb) = 5;
              puVar14 = (undefined8 *)(lVar22 + 0x28);
            }
            else {
              *(int *)(puVar13 + 0xb) = iVar83;
              puVar14 = (undefined8 *)(puVar13[1] + (long)iVar83 * 8);
            }
            puVar23 = (uint *)*puVar14;
            puVar23[4] = 0;
            puVar23[5] = 0;
            puVar23[6] = 0;
            puVar23[7] = 0;
            puVar23[0] = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            puVar23[1] = *(uint *)(param_1 + 0x638);
            iVar83 = *(int *)(param_1 + 0x638);
            uVar10 = iVar83 + 1;
            uVar11 = *(uint *)(param_1 + 0x63c);
            if (iVar83 < (int)(uVar11 & 0x3fffffff)) {
              lVar22 = *(long *)(param_1 + 0x630);
            }
            else {
              uVar16 = *(undefined8 *)(param_1 + 0x630);
              if (0x3ffffffe < iVar83) {
                FUN_032bd0a8(uVar10);
                uVar11 = *(uint *)(param_1 + 0x63c);
              }
              uVar11 = (uVar11 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar11) {
                uVar11 = 0x3fffffff;
              }
              uVar1 = uVar10;
              if ((int)uVar10 <= (int)uVar11) {
                uVar1 = uVar11;
              }
              lVar22 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,8,uVar16,iVar83,(uint *)(param_1 + 0x63c)
                                   );
              iVar83 = *(int *)(param_1 + 0x638);
              *(long *)(param_1 + 0x630) = lVar22;
            }
            *(uint **)(lVar22 + (long)iVar83 * 8) = puVar23;
            *(uint *)(param_1 + 0x638) = uVar10;
            *(uint **)(puVar24 + 2) = puVar23;
            uVar10 = *puVar23;
            puVar24 = puVar23;
          } while (0x3a < uVar10 >> 0x16);
        }
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar23,0x10);
          if (bVar7) {
            *puVar23 = *puVar23 + 0x200001;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      else {
        if (bVar7) {
          puVar24 = puVar23;
          do {
            iVar83 = *(int *)(puVar13 + 0xb) + -1;
            if (*(int *)(puVar13 + 0xb) < 1) {
              lVar22 = puVar13[1];
              (**(code **)(*(long *)*puVar13 + 0x20))((long *)*puVar13,lVar22,6);
              *(undefined4 *)(puVar13 + 0xb) = 5;
              puVar14 = (undefined8 *)(lVar22 + 0x28);
            }
            else {
              *(int *)(puVar13 + 0xb) = iVar83;
              puVar14 = (undefined8 *)(puVar13[1] + (long)iVar83 * 8);
            }
            puVar23 = (uint *)*puVar14;
            puVar23[4] = 0;
            puVar23[5] = 0;
            puVar23[6] = 0;
            puVar23[7] = 0;
            puVar23[0] = 0;
            puVar23[1] = 0;
            puVar23[2] = 0;
            puVar23[3] = 0;
            puVar23[1] = *(uint *)(param_1 + 0x638);
            iVar83 = *(int *)(param_1 + 0x638);
            uVar10 = iVar83 + 1;
            uVar11 = *(uint *)(param_1 + 0x63c);
            if (iVar83 < (int)(uVar11 & 0x3fffffff)) {
              lVar22 = *(long *)(param_1 + 0x630);
            }
            else {
              uVar16 = *(undefined8 *)(param_1 + 0x630);
              if (0x3ffffffe < iVar83) {
                FUN_032bd0a8(uVar10);
                uVar11 = *(uint *)(param_1 + 0x63c);
              }
              uVar11 = (uVar11 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar11) {
                uVar11 = 0x3fffffff;
              }
              uVar1 = uVar10;
              if ((int)uVar10 <= (int)uVar11) {
                uVar1 = uVar11;
              }
              lVar22 = FUN_032bd1d4(PTR_PTR_0434a080,uVar1,8,uVar16,iVar83,(uint *)(param_1 + 0x63c)
                                   );
              iVar83 = *(int *)(param_1 + 0x638);
              *(long *)(param_1 + 0x630) = lVar22;
            }
            *(uint **)(lVar22 + (long)iVar83 * 8) = puVar23;
            *(uint *)(param_1 + 0x638) = uVar10;
            *(uint **)(puVar24 + 2) = puVar23;
            uVar10 = *puVar23;
            puVar24 = puVar23;
          } while (0x3a < uVar10 >> 0x16);
        }
        do {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar23,0x10);
          if (bVar7) {
            *puVar23 = *puVar23 + 0x200001;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uVar10 = uVar10 >> 0x10;
      *(int *)(param_1 + 0x628) = *(int *)(param_1 + 0x628) + 1;
      *(undefined4 *)((long)puVar23 + (ulong)uVar10 + 0x20) = 0x3000020;
      *(undefined4 *)((long)puVar23 + (ulong)uVar10 + 0x24) = 3;
      *(int *)((long)puVar23 + (ulong)uVar10 + 0x28) = (int)uVar9;
      *(int *)((long)puVar23 + (ulong)uVar10 + 0x2c) = (int)((ulong)uVar9 >> 0x20);
      *(int *)((long)puVar23 + (ulong)uVar10 + 0x30) = (int)uVar41;
      *(int *)((long)puVar23 + (ulong)uVar10 + 0x34) = (int)((ulong)uVar41 >> 0x20);
      *(int *)((long)puVar23 + (ulong)uVar10 + 0x38) = (int)puVar19;
      *(int *)((long)puVar23 + (ulong)uVar10 + 0x3c) = (int)uVar15;
      bVar2 = *(byte *)((long)param_8 + 5);
    }
    else {
      lVar22 = *(long *)(param_1 + 0x40);
      uVar10 = *(uint *)((long)param_8 + lVar12);
      if ((*(uint *)(lVar22 + 0x840) & uVar10) == 0) goto LAB_030b6b3c;
      puVar13 = (undefined8 *)(lVar22 + 0x850);
      lVar25 = 1;
      while( true ) {
        if ((*(uint *)(puVar13 + -1) & uVar10) != 0) {
          (**(code **)(*(long *)*puVar13 + 0x60))
                    ((long *)*puVar13,param_1,&local_98,param_5 + 2,(long)param_5 + 0x14);
        }
        if (*(int *)(lVar22 + 0x844) <= lVar25) break;
        uVar10 = *(uint *)((long)param_8 + lVar12);
        lVar25 = lVar25 + 1;
        puVar13 = puVar13 + 2;
      }
      if (*(char *)((long)param_8 + 5) < '\0') goto LAB_030b6fe8;
LAB_030b6b44:
      bVar2 = *(byte *)((long)param_8 + 5);
    }
    if ((bVar2 >> 5 & 1) == 0) goto LAB_030b6ab8;
    lVar22 = *(long *)(param_1 + 0x40);
    uVar10 = *(uint *)((long)param_8 + lVar12);
    if ((*(uint *)(lVar22 + 0x738) & uVar10) == 0) goto LAB_030b6ab8;
    local_80 = 0;
    uStack_78 = 0;
    switch((char)param_8[2]) {
    case '\0':
      goto switchD_030b6bdc_caseD_0;
    case '\x01':
      fVar40 = param_9[1];
      auVar30._4_4_ = fVar40;
      auVar30._0_4_ = fVar40;
      auVar30._8_4_ = fVar40;
      auVar30._12_4_ = fVar40;
      break;
    case '\x02':
      auVar30._0_8_ = *(undefined8 *)(param_9 + 1);
      uVar31 = (undefined4)((ulong)auVar30._0_8_ >> 0x20);
      auVar30._12_4_ = uVar31;
      auVar30._8_4_ = uVar31;
      break;
    case '\x03':
      auVar30._12_4_ = param_9[3];
      auVar30._8_4_ = param_9[3];
      auVar30._0_8_ = *(undefined8 *)(param_9 + 1);
      break;
    default:
      auVar30 = *(undefined1 (*) [16])(param_9 + 1);
    }
    uStack_78 = auVar30._8_8_;
    local_80 = auVar30._0_8_;
switchD_030b6bdc_caseD_0:
    puVar13 = (undefined8 *)(lVar22 + 0x748);
    lVar25 = 1;
    while( true ) {
      if ((*(uint *)(puVar13 + -1) & uVar10) != 0) {
        (**(code **)(*(long *)*puVar13 + 0x58))((long *)*puVar13,param_1,&local_98,&local_80);
      }
      if (*(int *)(lVar22 + 0x73c) <= lVar25) break;
      uVar10 = *(uint *)((long)param_8 + lVar12);
      lVar25 = lVar25 + 1;
      puVar13 = puVar13 + 2;
    }
  }
LAB_030b6ab8:
  if ((param_10 != 0) && ((param_8[3] & 0xe0) != 0x60)) {
    bVar2 = (byte)param_8[2];
    if (((ulong)bVar2 != 0) && (*(float *)(param_10 + 0x40) = param_9[1], bVar2 != 1)) {
      lVar12 = (ulong)bVar2 - 1;
      pfVar8 = (float *)(param_10 + 0x44);
      pfVar17 = param_9 + 2;
      do {
        lVar12 = lVar12 + -1;
        *pfVar8 = *pfVar17;
        pfVar8 = pfVar8 + 1;
        pfVar17 = pfVar17 + 1;
      } while (lVar12 != 0);
    }
    *(undefined2 *)(param_10 + 0x3c) = *(undefined2 *)((long)param_9 + 2);
  }
LAB_030b635c:
  uVar9 = CONCAT44(fStack_12c,local_130);
  auVar5._8_4_ = fStack_128;
  auVar5._0_8_ = uVar9;
  auVar5._12_4_ = fStack_124;
  auVar32._8_8_ = _UNK_0388a1f8;
  auVar32._0_8_ = _DAT_0388a1f0;
  *(long *)(param_7[2] + 8) = auVar5._8_8_;
  *(undefined8 *)param_7[2] = uVar9;
  pfVar8 = *(float **)param_7[9];
  auVar26 = a64_TBL(ZEXT816(0),auVar5,auVar32);
  *(float *)(*param_7 + 8) = fStack_148;
  *(float *)(*param_7 + 0xc) = fStack_144;
  *(float *)*param_7 = local_150;
  *(float *)(*param_7 + 4) = fStack_14c;
  *(undefined8 *)(pfVar8 + 4) = uVar9;
  pfVar8[2] = fStack_148;
  pfVar8[3] = auVar26._12_4_;
  *pfVar8 = local_150;
  pfVar8[1] = fStack_14c;
  return;
}


