/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4e640; name: FUN_02e4e640
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_02e4e640(undefined1 param_1 [16],long *param_2,undefined1 (*param_3) [16],undefined8 *param_4)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  float *pfVar11;
  float *pfVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  float fVar18;
  float fVar19;
  undefined1 auVar17 [16];
  byte bVar20;
  uint uVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar29;
  float fVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  int iVar38;
  uint uVar39;
  float fVar40;
  float fVar41;
  int iVar42;
  float fVar43;
  int iVar44;
  float fVar45;
  int iVar46;
  undefined1 auVar47 [16];
  float fVar49;
  undefined1 auVar48 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  
  uVar4 = _UNK_03889708;
  uVar3 = _DAT_03889700;
  fVar19 = param_1._8_4_;
  fVar18 = param_1._4_4_;
  fVar40 = param_1._0_4_;
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    auVar53 = NEON_fmov(0xbf800000,4);
    auVar54 = NEON_fmov(0x3f800000,4);
    uVar10 = 0;
    pbVar7 = PTR_DAT_043886b0;
    pbVar8 = PTR_DAT_043886c0;
    pfVar11 = (float *)PTR_DAT_043886b8;
    pfVar12 = (float *)PTR_DAT_043886c8;
    do {
      lVar9 = *param_2;
      pauVar13 = *(undefined1 (**) [16])(lVar9 + (ulong)uVar10 * 8);
      pauVar14 = pauVar13;
      if (uVar10 + 1 < uVar1) {
        pauVar14 = *(undefined1 (**) [16])(lVar9 + (ulong)(uVar10 + 1) * 8);
      }
      pauVar15 = pauVar14;
      if (uVar10 + 2 < uVar1) {
        pauVar15 = *(undefined1 (**) [16])(lVar9 + (ulong)(uVar10 + 2) * 8);
      }
      pauVar16 = pauVar15;
      if (uVar10 + 3 < uVar1) {
        pauVar16 = *(undefined1 (**) [16])(lVar9 + (ulong)(uVar10 + 3) * 8);
      }
      auVar51 = *pauVar13;
      auVar28 = *pauVar14;
      auVar48 = *pauVar15;
      auVar52 = *pauVar16;
      auVar27 = NEON_ext(auVar48,auVar48,8,1);
      auVar17 = NEON_ext(auVar51,auVar51,8,1);
      auVar23 = NEON_ext(auVar28,auVar28,8,1);
      auVar33 = NEON_ext(auVar52,auVar52,8,1);
      auVar47 = *param_3;
      if (((*pbVar7 & 1) == 0) &&
         (iVar38 = __cxa_guard_acquire(pbVar7), puVar6 = PTR_DAT_043886b8, puVar5 = PTR_DAT_043886b0
         , pbVar7 = PTR_DAT_043886b0, pbVar8 = PTR_DAT_043886c0, pfVar11 = (float *)PTR_DAT_043886b8
         , pfVar12 = (float *)PTR_DAT_043886c8, iVar38 != 0)) {
        *(long *)(PTR_DAT_043886b8 + 8) = auVar53._8_8_;
        *(long *)puVar6 = auVar53._0_8_;
        __cxa_guard_release(puVar5);
        pbVar7 = PTR_DAT_043886b0;
        pbVar8 = PTR_DAT_043886c0;
        pfVar11 = (float *)PTR_DAT_043886b8;
        pfVar12 = (float *)PTR_DAT_043886c8;
      }
      fVar71 = auVar51._0_4_ * fVar40 + fVar18 * auVar51._4_4_ + fVar19 * auVar17._0_4_;
      fVar72 = auVar28._0_4_ * fVar40 + fVar18 * auVar28._4_4_ + fVar19 * auVar23._0_4_;
      fVar73 = auVar48._0_4_ * fVar40 + fVar18 * auVar48._4_4_ + fVar19 * auVar27._0_4_;
      fVar74 = auVar52._0_4_ * fVar40 + fVar18 * auVar52._4_4_ + fVar19 * auVar33._0_4_;
      fVar22 = auVar47._0_4_;
      fVar24 = auVar47._4_4_;
      fVar25 = auVar47._8_4_;
      if ((*pbVar8 & 1) == 0) {
        iVar38 = __cxa_guard_acquire(pbVar8);
        puVar6 = PTR_DAT_043886c8;
        puVar5 = PTR_DAT_043886c0;
        pbVar7 = PTR_DAT_043886b0;
        pbVar8 = PTR_DAT_043886c0;
        pfVar11 = (float *)PTR_DAT_043886b8;
        pfVar12 = (float *)PTR_DAT_043886c8;
        if (iVar38 != 0) {
          *(long *)(PTR_DAT_043886c8 + 8) = auVar54._8_8_;
          *(long *)puVar6 = auVar54._0_8_;
          __cxa_guard_release(puVar5);
          pbVar7 = PTR_DAT_043886b0;
          pbVar8 = PTR_DAT_043886c0;
          pfVar11 = (float *)PTR_DAT_043886b8;
          pfVar12 = (float *)PTR_DAT_043886c8;
        }
      }
      fVar2 = *pfVar12;
      fVar37 = *pfVar11 * (auVar51._4_4_ * fVar24 + fVar25 * auVar17._0_4_ + fVar22 * auVar51._0_4_)
               + auVar17._4_4_ * fVar2;
      fVar41 = pfVar11[1] *
               (auVar28._4_4_ * fVar24 + fVar25 * auVar23._0_4_ + fVar22 * auVar28._0_4_) +
               auVar23._4_4_ * pfVar12[1];
      fVar43 = pfVar11[2] *
               (auVar48._4_4_ * fVar24 + fVar25 * auVar27._0_4_ + fVar22 * auVar48._0_4_) +
               auVar27._4_4_ * pfVar12[2];
      fVar45 = pfVar11[3] *
               (auVar52._4_4_ * fVar24 + fVar25 * auVar33._0_4_ + fVar22 * auVar52._0_4_) +
               auVar33._4_4_ * pfVar12[3];
      bVar20 = (char)((byte)((uint)(-fVar37 + fVar71 * fVar2) >> 0x18) ^
                     (byte)((uint)fVar37 >> 0x18)) >> 7;
      bVar55 = (byte)uVar3;
      auVar51[0] = bVar20 & bVar55;
      bVar56 = (byte)((ulong)uVar3 >> 8);
      auVar51[1] = bVar20 & bVar56;
      bVar57 = (byte)((ulong)uVar3 >> 0x10);
      auVar51[2] = bVar20 & bVar57;
      bVar58 = (byte)((ulong)uVar3 >> 0x18);
      auVar51[3] = bVar20 & bVar58;
      bVar20 = (char)((byte)((uint)(-fVar41 + fVar72 * pfVar12[1]) >> 0x18) ^
                     (byte)((uint)fVar41 >> 0x18)) >> 7;
      bVar59 = (byte)((ulong)uVar3 >> 0x20);
      auVar51[4] = bVar20 & bVar59;
      bVar60 = (byte)((ulong)uVar3 >> 0x28);
      auVar51[5] = bVar20 & bVar60;
      bVar61 = (byte)((ulong)uVar3 >> 0x30);
      auVar51[6] = bVar20 & bVar61;
      bVar62 = (byte)((ulong)uVar3 >> 0x38);
      auVar51[7] = bVar20 & bVar62;
      bVar20 = (char)((byte)((uint)(-fVar43 + fVar73 * pfVar12[2]) >> 0x18) ^
                     (byte)((uint)fVar43 >> 0x18)) >> 7;
      bVar63 = (byte)uVar4;
      auVar51[8] = bVar20 & bVar63;
      bVar64 = (byte)((ulong)uVar4 >> 8);
      auVar51[9] = bVar20 & bVar64;
      bVar65 = (byte)((ulong)uVar4 >> 0x10);
      auVar51[10] = bVar20 & bVar65;
      bVar66 = (byte)((ulong)uVar4 >> 0x18);
      auVar51[0xb] = bVar20 & bVar66;
      bVar20 = (char)((byte)((uint)(-fVar45 + fVar74 * pfVar12[3]) >> 0x18) ^
                     (byte)((uint)fVar45 >> 0x18)) >> 7;
      bVar67 = (byte)((ulong)uVar4 >> 0x20);
      auVar51[0xc] = bVar20 & bVar67;
      bVar68 = (byte)((ulong)uVar4 >> 0x28);
      auVar51[0xd] = bVar20 & bVar68;
      bVar69 = (byte)((ulong)uVar4 >> 0x30);
      auVar51[0xe] = bVar20 & bVar69;
      bVar70 = (byte)((ulong)uVar4 >> 0x38);
      auVar51[0xf] = bVar20 & bVar70;
      auVar28 = NEON_ext(auVar51,auVar51,8,1);
      uVar21 = CONCAT13(auVar28[3] | auVar51[3],
                        CONCAT12(auVar28[2] | auVar51[2],
                                 CONCAT11(auVar28[1] | auVar51[1],auVar28[0] | auVar51[0])));
      uVar21 = uVar21 | (uint)(CONCAT17(auVar28[7] | auVar51[7],
                                        CONCAT16(auVar28[6] | auVar51[6],
                                                 CONCAT15(auVar28[5] | auVar51[5],
                                                          CONCAT14(auVar28[4] | auVar51[4],uVar21)))
                                       ) >> 0x20);
      if (uVar21 != 0xf) {
        auVar51 = pauVar13[1];
        auVar28 = pauVar14[1];
        auVar48 = pauVar15[1];
        auVar52 = pauVar16[1];
        auVar27 = NEON_ext(auVar48,auVar48,8,1);
        auVar23 = NEON_ext(auVar28,auVar28,8,1);
        auVar47 = NEON_ext(auVar52,auVar52,8,1);
        fVar32 = fVar71 * fVar22 + fVar40 * fVar37;
        fVar34 = fVar72 * fVar22 + fVar40 * fVar41;
        fVar35 = fVar73 * fVar22 + fVar40 * fVar43;
        fVar36 = fVar74 * fVar22 + fVar40 * fVar45;
        auVar17 = NEON_ext(auVar51,auVar51,8,1);
        fVar26 = fVar71 * fVar24 + fVar18 * fVar37;
        fVar29 = fVar72 * fVar24 + fVar18 * fVar41;
        fVar30 = fVar73 * fVar24 + fVar18 * fVar43;
        fVar31 = fVar74 * fVar24 + fVar18 * fVar45;
        fVar22 = fVar71 * fVar25 + fVar19 * fVar37;
        fVar24 = fVar72 * fVar25 + fVar19 * fVar41;
        fVar37 = fVar73 * fVar25 + fVar19 * fVar43;
        fVar25 = fVar74 * fVar25 + fVar19 * fVar45;
        fVar41 = auVar51._0_4_ * fVar32 + fVar26 * auVar51._4_4_ + fVar22 * auVar17._0_4_ +
                 fVar71 * auVar17._4_4_;
        fVar43 = auVar28._0_4_ * fVar34 + fVar29 * auVar28._4_4_ + fVar24 * auVar23._0_4_ +
                 fVar72 * auVar23._4_4_;
        fVar45 = auVar48._0_4_ * fVar35 + fVar30 * auVar48._4_4_ + fVar37 * auVar27._0_4_ +
                 fVar73 * auVar27._4_4_;
        fVar49 = auVar52._0_4_ * fVar36 + fVar31 * auVar52._4_4_ + fVar25 * auVar47._0_4_ +
                 fVar74 * auVar47._4_4_;
        iVar38 = -(uint)(fVar41 == 0.0);
        iVar42 = -(uint)(fVar43 == 0.0);
        iVar44 = -(uint)(fVar45 == 0.0);
        iVar46 = -(uint)(fVar49 == 0.0);
        auVar28[0] = (byte)iVar38 & bVar55;
        auVar28[1] = (byte)((uint)iVar38 >> 8) & bVar56;
        auVar28[2] = (byte)((uint)iVar38 >> 0x10) & bVar57;
        auVar28[3] = (byte)((uint)iVar38 >> 0x18) & bVar58;
        auVar28[4] = (byte)iVar42 & bVar59;
        auVar28[5] = (byte)((uint)iVar42 >> 8) & bVar60;
        auVar28[6] = (byte)((uint)iVar42 >> 0x10) & bVar61;
        auVar28[7] = (byte)((uint)iVar42 >> 0x18) & bVar62;
        auVar28[8] = (byte)iVar44 & bVar63;
        auVar28[9] = (byte)((uint)iVar44 >> 8) & bVar64;
        auVar28[10] = (byte)((uint)iVar44 >> 0x10) & bVar65;
        auVar28[0xb] = (byte)((uint)iVar44 >> 0x18) & bVar66;
        auVar28[0xc] = (byte)iVar46 & bVar67;
        auVar28[0xd] = (byte)((uint)iVar46 >> 8) & bVar68;
        auVar28[0xe] = (byte)((uint)iVar46 >> 0x10) & bVar69;
        auVar28[0xf] = (byte)((uint)iVar46 >> 0x18) & bVar70;
        auVar51 = NEON_ext(auVar28,auVar28,8,1);
        bVar20 = (char)((byte)((uint)(fVar71 - fVar41) >> 0x18) ^ (byte)((uint)fVar41 >> 0x18)) >> 7
        ;
        auVar48[0] = bVar20 & bVar55;
        auVar48[1] = bVar20 & bVar56;
        auVar48[2] = bVar20 & bVar57;
        auVar48[3] = bVar20 & bVar58;
        bVar20 = (char)((byte)((uint)(fVar72 - fVar43) >> 0x18) ^ (byte)((uint)fVar43 >> 0x18)) >> 7
        ;
        auVar48[4] = bVar20 & bVar59;
        auVar48[5] = bVar20 & bVar60;
        auVar48[6] = bVar20 & bVar61;
        auVar48[7] = bVar20 & bVar62;
        bVar20 = (char)((byte)((uint)(fVar73 - fVar45) >> 0x18) ^ (byte)((uint)fVar45 >> 0x18)) >> 7
        ;
        auVar48[8] = bVar20 & bVar63;
        auVar48[9] = bVar20 & bVar64;
        auVar48[10] = bVar20 & bVar65;
        auVar48[0xb] = bVar20 & bVar66;
        bVar20 = (char)((byte)((uint)(fVar74 - fVar49) >> 0x18) ^ (byte)((uint)fVar49 >> 0x18)) >> 7
        ;
        auVar48[0xc] = bVar20 & bVar67;
        auVar48[0xd] = bVar20 & bVar68;
        auVar48[0xe] = bVar20 & bVar69;
        auVar48[0xf] = bVar20 & bVar70;
        auVar52 = NEON_ext(auVar48,auVar48,8,1);
        uVar21 = (uint)(byte)(auVar52[0] | auVar48[0] | auVar52[4] | auVar48[4]) &
                 ((byte)(auVar51[0] | auVar28[0] | auVar51[4] | auVar28[4]) ^ 0xffffffff) & 0xf |
                 uVar21;
        if (uVar21 != 0xf) {
          auVar51 = pauVar13[2];
          auVar28 = pauVar14[2];
          auVar48 = pauVar15[2];
          auVar52 = pauVar16[2];
          auVar47 = NEON_ext(auVar51,auVar51,8,1);
          auVar17 = NEON_ext(auVar28,auVar28,8,1);
          auVar23 = NEON_ext(auVar48,auVar48,8,1);
          auVar27 = NEON_ext(auVar52,auVar52,8,1);
          fVar50 = auVar51._0_4_ * fVar32 + fVar26 * auVar51._4_4_ + fVar22 * auVar47._0_4_ +
                   fVar71 * auVar47._4_4_;
          fVar24 = auVar28._0_4_ * fVar34 + fVar29 * auVar28._4_4_ + fVar24 * auVar17._0_4_ +
                   fVar72 * auVar17._4_4_;
          fVar37 = auVar48._0_4_ * fVar35 + fVar30 * auVar48._4_4_ + fVar37 * auVar23._0_4_ +
                   fVar73 * auVar23._4_4_;
          fVar25 = auVar52._0_4_ * fVar36 + fVar31 * auVar52._4_4_ + fVar25 * auVar27._0_4_ +
                   fVar74 * auVar27._4_4_;
          bVar20 = (char)((byte)((uint)((fVar71 - fVar41) - fVar50) >> 0x18) ^
                         (byte)((uint)fVar50 >> 0x18)) >> 7;
          auVar52[0] = bVar20 & bVar55;
          auVar52[1] = bVar20 & bVar56;
          auVar52[2] = bVar20 & bVar57;
          auVar52[3] = bVar20 & bVar58;
          bVar20 = (char)((byte)((uint)((fVar72 - fVar43) - fVar24) >> 0x18) ^
                         (byte)((uint)fVar24 >> 0x18)) >> 7;
          auVar52[4] = bVar20 & bVar59;
          auVar52[5] = bVar20 & bVar60;
          auVar52[6] = bVar20 & bVar61;
          auVar52[7] = bVar20 & bVar62;
          bVar20 = (char)((byte)((uint)((fVar73 - fVar45) - fVar37) >> 0x18) ^
                         (byte)((uint)fVar37 >> 0x18)) >> 7;
          auVar52[8] = bVar20 & bVar63;
          auVar52[9] = bVar20 & bVar64;
          auVar52[10] = bVar20 & bVar65;
          auVar52[0xb] = bVar20 & bVar66;
          bVar20 = (char)((byte)((uint)((fVar74 - fVar49) - fVar25) >> 0x18) ^
                         (byte)((uint)fVar25 >> 0x18)) >> 7;
          auVar52[0xc] = bVar20 & bVar67;
          auVar52[0xd] = bVar20 & bVar68;
          auVar52[0xe] = bVar20 & bVar69;
          auVar52[0xf] = bVar20 & bVar70;
          auVar51 = NEON_ext(auVar52,auVar52,8,1);
          uVar39 = CONCAT13(auVar51[3] | auVar52[3],
                            CONCAT12(auVar51[2] | auVar52[2],
                                     CONCAT11(auVar51[1] | auVar52[1],auVar51[0] | auVar52[0])));
          uVar39 = (uint)(CONCAT17(auVar51[7] | auVar52[7],
                                   CONCAT16(auVar51[6] | auVar52[6],
                                            CONCAT15(auVar51[5] | auVar52[5],
                                                     CONCAT14(auVar51[4] | auVar52[4],uVar39)))) >>
                         0x20) | uVar21 | uVar39;
          if (uVar39 != 0xf) {
            auVar53._4_4_ = fVar72;
            auVar53._0_4_ = fVar71;
            auVar53._8_4_ = fVar73;
            auVar53._12_4_ = fVar74;
            auVar53 = NEON_frecpe(auVar53,4);
            iVar38 = 0;
            auVar54._4_4_ = fVar72;
            auVar54._0_4_ = fVar71;
            auVar54._8_4_ = fVar73;
            auVar54._12_4_ = fVar74;
            auVar54 = NEON_frecps(auVar54,auVar53,4);
            fVar40 = auVar53._0_4_ * fVar2 * auVar54._0_4_;
            param_4[1] = CONCAT44(fVar2,fVar40 * fVar22);
            *param_4 = CONCAT44(fVar40 * fVar26,fVar40 * fVar32);
            for (; (uVar39 & 1) != 0; uVar39 = uVar39 >> 1) {
              iVar38 = iVar38 + 1;
            }
            return *(undefined8 *)(*param_2 + (ulong)(iVar38 + uVar10) * 8);
          }
        }
      }
      uVar10 = uVar10 + 4;
    } while (uVar10 < uVar1);
  }
  return 0;
}


