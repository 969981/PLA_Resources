/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df4640; name: FUN_02df4640
 */


void FUN_02df4640(uint param_1,long param_2,long param_3,undefined4 param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [12];
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 *puVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  undefined4 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uVar50;
  float fVar51;
  undefined8 uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar82 [16];
  undefined4 uVar83;
  float fVar84;
  float fVar85;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  undefined1 auVar86 [16];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar101;
  undefined1 auVar100 [16];
  float fVar102;
  
  if ((param_1 >> 4 & 1) == 0) {
    if ((param_1 >> 5 & 1) == 0) {
      if ((param_1 >> 6 & 1) == 0) {
        if ((param_1 >> 7 & 1) == 0) {
          if ((param_1 >> 8 & 1) == 0) {
            uVar18 = 9;
            uVar17 = param_1 >> 9 & 1;
            while (uVar17 == 0) {
              uVar18 = uVar18 + 1;
              uVar17 = 1 << (ulong)(uVar18 & 0x1f) & param_1;
            }
          }
          else {
            uVar18 = 8;
          }
        }
        else {
          uVar18 = 7;
        }
      }
      else {
        uVar18 = 6;
      }
    }
    else {
      uVar18 = 5;
    }
  }
  else {
    uVar18 = 4;
  }
  uVar17 = param_1;
  if ((int)param_1 < 0) {
    uVar17 = param_1 + 1;
  }
  iVar4 = (int)uVar17 >> 1;
  FUN_02df3f90(param_2,iVar4,0xd - uVar18,param_3,param_4);
  FUN_02df4290(param_2,iVar4,0xd - uVar18,param_3);
  if (0 < (int)(uVar18 - 8)) {
    uVar17 = 0;
    lVar16 = (long)(int)-uVar18 + 0xf;
    do {
      if (uVar17 != 0x1f) {
        uVar6 = (int)lVar16 * 4 - 4;
        uVar12 = -(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2;
        uVar26 = *(undefined8 *)(&UNK_03a86138 + lVar16 * 0x10);
        uVar25 = *(undefined8 *)(&UNK_03a86130 + lVar16 * 0x10);
        fVar33 = *(float *)(&DAT_03a85cb0 + uVar12);
        fVar36 = *(float *)(&DAT_03a85dd0 + uVar12);
        fVar32 = *(float *)(&DAT_03a85ef0 + uVar12);
        fVar60 = *(float *)(&DAT_03a86010 + uVar12);
        uVar6 = iVar4 >> (uVar17 & 0x1f);
        uVar5 = uVar6;
        if ((int)uVar6 < 0) {
          uVar5 = uVar6 + 1;
        }
        lVar22 = 0;
        pfVar13 = (float *)(param_3 + -0x20);
        do {
          pfVar13 = (float *)((long)pfVar13 +
                             (-(ulong)(uVar6 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar6 << 2));
          puVar3 = (undefined8 *)(param_3 + lVar22 * (int)uVar6 * 4);
          puVar15 = (undefined8 *)
                    ((long)puVar3 + ((long)((ulong)uVar5 << 0x20) >> 0x21) * 4 + -0x40);
          pfVar14 = pfVar13;
          fVar44 = fVar60;
          fVar45 = fVar60;
          fVar42 = fVar32;
          fVar43 = fVar32;
          fVar62 = fVar60;
          fVar39 = fVar60;
          fVar64 = fVar32;
          fVar41 = fVar32;
          fVar46 = fVar36;
          fVar47 = fVar36;
          fVar56 = fVar33;
          fVar58 = fVar33;
          fVar48 = fVar36;
          fVar49 = fVar36;
          fVar35 = fVar33;
          fVar38 = fVar33;
          do {
            fVar67 = (float)*(undefined8 *)(pfVar14 + -8);
            fVar85 = (float)*(undefined8 *)(pfVar14 + -4);
            fVar59 = fVar67 - fVar85;
            fVar93 = (float)((ulong)*(undefined8 *)(pfVar14 + -8) >> 0x20);
            fVar87 = (float)((ulong)*(undefined8 *)(pfVar14 + -4) >> 0x20);
            fVar61 = fVar93 - fVar87;
            fVar51 = (float)*(undefined8 *)(pfVar14 + -6);
            fVar89 = (float)*(undefined8 *)(pfVar14 + -2);
            fVar63 = fVar51 - fVar89;
            fVar75 = (float)((ulong)*(undefined8 *)(pfVar14 + -6) >> 0x20);
            fVar91 = (float)((ulong)*(undefined8 *)(pfVar14 + -2) >> 0x20);
            fVar65 = fVar75 - fVar91;
            fVar84 = (float)*(undefined8 *)(pfVar14 + 4);
            fVar94 = (float)((ulong)*(undefined8 *)(pfVar14 + 4) >> 0x20);
            fVar88 = (float)*(undefined8 *)(pfVar14 + 6);
            fVar90 = (float)((ulong)*(undefined8 *)(pfVar14 + 6) >> 0x20);
            fVar31 = (float)uVar25;
            fVar34 = (float)((ulong)uVar25 >> 0x20);
            fVar37 = (float)uVar26;
            fVar40 = (float)((ulong)uVar26 >> 0x20);
            fVar53 = -fVar44 + fVar31 * fVar42;
            fVar54 = -fVar45 + fVar34 * fVar43;
            fVar55 = -fVar62 + fVar37 * fVar64;
            fVar57 = -fVar39 + fVar40 * fVar41;
            fVar66 = fVar84 - *pfVar14;
            fVar74 = fVar94 - pfVar14[1];
            fVar76 = fVar88 - pfVar14[2];
            fVar77 = fVar90 - pfVar14[3];
            *(ulong *)(pfVar14 + 2) = CONCAT44(pfVar14[3] + fVar90,pfVar14[2] + fVar88);
            *(ulong *)pfVar14 = CONCAT44(pfVar14[1] + fVar94,*pfVar14 + fVar84);
            *(ulong *)(pfVar14 + -6) = CONCAT44(fVar91 + fVar75,fVar89 + fVar51);
            *(ulong *)(pfVar14 + -8) = CONCAT44(fVar87 + fVar93,fVar85 + fVar67);
            fVar31 = -fVar46 + fVar31 * fVar56;
            fVar34 = -fVar47 + fVar34 * fVar58;
            fVar37 = -fVar48 + fVar37 * fVar35;
            fVar40 = -fVar49 + fVar40 * fVar38;
            fVar44 = (float)*puVar15;
            fVar67 = (float)puVar15[2];
            fVar45 = (float)((ulong)*puVar15 >> 0x20);
            fVar93 = (float)((ulong)puVar15[2] >> 0x20);
            fVar62 = (float)puVar15[1];
            fVar51 = (float)puVar15[3];
            fVar39 = (float)((ulong)puVar15[1] >> 0x20);
            fVar75 = (float)((ulong)puVar15[3] >> 0x20);
            fVar46 = fVar67 - fVar44;
            fVar47 = fVar93 - fVar45;
            fVar48 = fVar51 - fVar62;
            fVar49 = fVar75 - fVar39;
            *(ulong *)(pfVar14 + -2) = CONCAT44(fVar39 + fVar75,fVar62 + fVar51);
            *(ulong *)(pfVar14 + -4) = CONCAT44(fVar45 + fVar93,fVar44 + fVar67);
            fVar44 = (float)puVar15[4];
            fVar67 = (float)puVar15[6];
            fVar85 = fVar67 - fVar44;
            fVar45 = (float)((ulong)puVar15[4] >> 0x20);
            fVar93 = (float)((ulong)puVar15[6] >> 0x20);
            fVar87 = fVar93 - fVar45;
            fVar62 = (float)puVar15[5];
            fVar51 = (float)puVar15[7];
            fVar89 = fVar51 - fVar62;
            fVar39 = (float)((ulong)puVar15[5] >> 0x20);
            fVar75 = (float)((ulong)puVar15[7] >> 0x20);
            fVar91 = fVar75 - fVar39;
            *(ulong *)(pfVar14 + 6) = CONCAT44(fVar39 + fVar75,fVar62 + fVar51);
            *(ulong *)(pfVar14 + 4) = CONCAT44(fVar45 + fVar93,fVar44 + fVar67);
            pfVar14 = pfVar14 + -0x10;
            puVar15[1] = CONCAT44(fVar65 * fVar57 + fVar40 * fVar77,
                                  fVar63 * fVar55 + fVar37 * fVar76);
            *puVar15 = CONCAT44(fVar61 * fVar54 + fVar34 * fVar74,fVar59 * fVar53 + fVar31 * fVar66)
            ;
            puVar15[3] = CONCAT44(fVar49 * fVar40 + fVar57 * fVar91,
                                  fVar48 * fVar37 + fVar55 * fVar89);
            puVar15[2] = CONCAT44(fVar47 * fVar34 + fVar54 * fVar87,
                                  fVar46 * fVar31 + fVar53 * fVar85);
            puVar15[5] = CONCAT44(-(fVar77 * fVar57) + fVar40 * fVar65,
                                  -(fVar76 * fVar55) + fVar37 * fVar63);
            puVar15[4] = CONCAT44(-(fVar74 * fVar54) + fVar34 * fVar61,
                                  -(fVar66 * fVar53) + fVar31 * fVar59);
            puVar15[7] = CONCAT44(-(fVar49 * fVar57) + fVar40 * fVar91,
                                  -(fVar48 * fVar55) + fVar37 * fVar89);
            puVar15[6] = CONCAT44(-(fVar47 * fVar54) + fVar34 * fVar87,
                                  -(fVar46 * fVar53) + fVar31 * fVar85);
            puVar15 = puVar15 + -8;
            fVar44 = fVar42;
            fVar45 = fVar43;
            fVar42 = fVar53;
            fVar43 = fVar54;
            fVar62 = fVar64;
            fVar39 = fVar41;
            fVar64 = fVar55;
            fVar41 = fVar57;
            fVar46 = fVar56;
            fVar47 = fVar58;
            fVar56 = fVar31;
            fVar58 = fVar34;
            fVar48 = fVar35;
            fVar49 = fVar38;
            fVar35 = fVar37;
            fVar38 = fVar40;
          } while (puVar3 <= puVar15);
          lVar22 = lVar22 + 1;
        } while (lVar22 < 1 << (ulong)(uVar17 & 0x1f));
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 1;
    } while (uVar17 != uVar18 - 8);
  }
  if ((((1 < (int)param_1) && (FUN_02df4fe0(param_3,0,iVar4), 0x101 < (int)param_1)) &&
      (FUN_02df4fe0(param_3 + 0x200,0x20,iVar4), 0x201 < (int)param_1)) &&
     (((FUN_02df4fe0(param_3 + 0x400,0x40,iVar4), 0x301 < (int)param_1 &&
       (FUN_02df4fe0(param_3 + 0x600,0x60,iVar4), 0x401 < (int)param_1)) &&
      (FUN_02df4fe0(param_3 + 0x800,0x80,iVar4), 0x501 < (int)param_1)))) {
    lVar16 = param_3 + 0xa00;
    iVar23 = 0xa0;
    lVar22 = 0x280;
    do {
      FUN_02df4fe0(lVar16,iVar23,iVar4);
      lVar22 = lVar22 + 0x80;
      iVar23 = iVar23 + 0x20;
      lVar16 = lVar16 + 0x200;
    } while (lVar22 < iVar4);
  }
  lVar19 = (0xe - (long)(int)uVar18) * 0x10;
  uVar26 = *(undefined8 *)(&UNK_03a86138 + lVar19);
  uVar25 = *(undefined8 *)(&UNK_03a86130 + lVar19);
  lVar16 = 0;
  lVar22 = 0xc - (long)(int)uVar18;
  lVar20 = lVar22 * 0x10;
  uVar30 = *(undefined8 *)(&UNK_03a86138 + lVar20);
  uVar29 = *(undefined8 *)(&UNK_03a86130 + lVar20);
  uVar18 = param_1 + 0xf;
  if (-1 < (int)param_1) {
    uVar18 = param_1;
  }
  uVar17 = (int)uVar18 >> 4;
  uVar12 = -(ulong)(uVar17 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar17 << 5;
  lVar21 = ((long)((ulong)uVar18 << 0x20) >> 0x24) + -1;
  uVar10 = *(undefined8 *)(&DAT_03a862b0 + lVar19);
  uVar11 = *(undefined8 *)(&UNK_03a862b8 + lVar19);
  uVar50 = *(undefined8 *)(&DAT_03a86320 + lVar19);
  uVar52 = *(undefined8 *)(&UNK_03a86328 + lVar19);
  fVar33 = *(float *)(&DAT_03a86320 + lVar20);
  fVar36 = *(float *)(&UNK_03a86324 + lVar20);
  fVar32 = *(float *)(&UNK_03a86328 + lVar20);
  fVar60 = *(float *)(&UNK_03a8632c + lVar20);
  fVar44 = *(float *)(&DAT_03a862b0 + lVar20);
  fVar45 = *(float *)(&UNK_03a862b4 + lVar20);
  fVar42 = *(float *)(&UNK_03a862b8 + lVar20);
  fVar43 = *(float *)(&UNK_03a862bc + lVar20);
  fVar62 = *(float *)(&DAT_03a86240 + lVar20);
  fVar39 = *(float *)(&UNK_03a86244 + lVar20);
  fVar64 = *(float *)(&UNK_03a86248 + lVar20);
  fVar41 = *(float *)(&UNK_03a8624c + lVar20);
  fVar46 = *(float *)(&UNK_03a861d0 + lVar20);
  fVar47 = *(float *)(&UNK_03a861d4 + lVar20);
  fVar56 = *(float *)(&UNK_03a861d8 + lVar20);
  fVar58 = *(float *)(&UNK_03a861dc + lVar20);
  fVar48 = *(float *)(&UNK_03a861d8 + lVar19);
  fVar49 = *(float *)(&UNK_03a861dc + lVar19);
  fVar35 = *(float *)(&UNK_03a86248 + lVar19);
  fVar38 = *(float *)(&UNK_03a8624c + lVar19);
  fVar31 = *(float *)(&UNK_03a861d0 + lVar19);
  fVar34 = *(float *)(&UNK_03a861d4 + lVar19);
  fVar37 = *(float *)(&DAT_03a86240 + lVar19);
  fVar40 = *(float *)(&UNK_03a86244 + lVar19);
  do {
    fVar51 = fVar48;
    uVar28 = uVar11;
    uVar27 = uVar10;
    uVar12 = uVar12 - 0x10;
    fVar75 = (float)uVar29;
    fVar85 = (float)((ulong)uVar29 >> 0x20);
    fVar53 = (float)uVar30;
    fVar87 = (float)((ulong)uVar30 >> 0x20);
    fVar54 = -fVar62 + fVar75 * fVar46;
    fVar89 = -fVar39 + fVar85 * fVar47;
    fVar55 = -fVar64 + fVar53 * fVar56;
    fVar91 = -fVar41 + fVar87 * fVar58;
    uVar18 = (uint)lVar22;
    pauVar1 = (undefined1 (*) [16])
              (param_3 +
              (long)(int)(uint)((ushort)(&DAT_03a858ac)[lVar21] >> (ulong)(uVar18 & 0x1f)) * 0x10);
    auVar8 = *pauVar1;
    pauVar7 = pauVar1 + 1;
    uVar83 = (undefined4)((ulong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20);
    pauVar2 = (undefined1 (*) [12])
              (param_3 +
              (long)(int)(uint)((ushort)(&DAT_03a858ac)[lVar16] >> (ulong)(uVar18 & 0x1f)) * 0x10);
    auVar68._12_4_ = uVar83;
    auVar68._0_12_ = *(undefined1 (*) [12])*pauVar7;
    auVar73._12_4_ = uVar83;
    auVar73._0_12_ = *(undefined1 (*) [12])*pauVar7;
    auVar68 = NEON_ext(auVar68,auVar73,8,1);
    auVar9 = *(undefined1 (*) [12])(pauVar2[1] + 4);
    lVar19 = lVar16 * 0x10;
    auVar86._12_4_ = (int)((ulong)*(undefined8 *)pauVar2[2] >> 0x20);
    auVar86._0_12_ = *(undefined1 (*) [12])(pauVar2[1] + 4);
    auVar100 = NEON_rev64(auVar86,4);
    auVar86 = NEON_ext(auVar8,auVar8,8,1);
    uVar24 = SUB124(*(undefined1 (*) [12])*pauVar7,8);
    auVar69._4_12_ = auVar68._4_12_;
    auVar69._0_4_ = uVar24;
    auVar71._12_4_ = auVar68._12_4_;
    auVar71._0_8_ = auVar69._0_8_;
    auVar71._8_4_ = uVar83;
    auVar70._8_8_ = auVar71._8_8_;
    auVar70._4_4_ = auVar68._8_4_;
    auVar70._0_4_ = uVar24;
    auVar72._0_12_ = auVar70._0_12_;
    auVar72._12_4_ = auVar71._12_4_;
    fVar62 = auVar9._0_4_;
    fVar39 = auVar9._8_4_;
    auVar82._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar2 + 8) >> 0x20);
    auVar82._0_12_ = *pauVar2;
    auVar68 = NEON_rev64(auVar82,4);
    auVar73 = NEON_ext(auVar72,auVar72,8,1);
    auVar78._4_12_ = auVar8._4_12_;
    auVar78._0_4_ = auVar8._8_4_;
    auVar80._0_8_ = auVar78._0_8_;
    auVar80._8_4_ = auVar8._12_4_;
    auVar80._12_4_ = auVar8._12_4_;
    auVar79._8_8_ = auVar80._8_8_;
    auVar79._4_4_ = auVar86._8_4_;
    auVar79._0_4_ = auVar8._8_4_;
    auVar81._0_12_ = auVar79._0_12_;
    auVar81._12_4_ = auVar86._12_4_;
    fVar64 = (float)uVar25;
    fVar41 = (float)((ulong)uVar25 >> 0x20);
    fVar67 = (float)uVar26;
    fVar93 = (float)((ulong)uVar26 >> 0x20);
    fVar99 = -fVar37 + fVar64 * fVar31;
    fVar101 = -fVar40 + fVar41 * fVar34;
    fVar48 = -fVar35 + fVar67 * fVar51;
    fVar102 = -fVar38 + fVar93 * fVar49;
    fVar95 = -fVar33 + fVar75 * fVar44;
    fVar96 = -fVar36 + fVar85 * fVar45;
    fVar97 = -fVar32 + fVar53 * fVar42;
    fVar98 = -fVar60 + fVar87 * fVar43;
    fVar33 = SUB124(*pauVar2,0);
    fVar36 = SUB124(*pauVar2,8);
    lVar16 = lVar16 + 1;
    fVar32 = fVar62 - auVar73._0_4_;
    fVar35 = fVar39 - auVar73._4_4_;
    fVar38 = auVar100._0_4_ - auVar73._8_4_;
    fVar37 = auVar100._8_4_ - auVar73._12_4_;
    auVar82 = NEON_ext(auVar81,auVar81,8,1);
    fVar85 = fVar33 + auVar82._0_4_;
    fVar87 = fVar36 + auVar82._4_4_;
    fVar59 = auVar68._0_4_ + auVar82._8_4_;
    fVar94 = auVar68._8_4_ + auVar82._12_4_;
    fVar74 = -(float)uVar50 + fVar64 * (float)uVar27;
    fVar76 = -(float)((ulong)uVar50 >> 0x20) + fVar41 * (float)((ulong)uVar27 >> 0x20);
    fVar77 = -(float)uVar52 + fVar67 * (float)uVar28;
    fVar84 = -(float)((ulong)uVar52 >> 0x20) + fVar93 * (float)((ulong)uVar28 >> 0x20);
    fVar61 = (fVar95 + fVar54) * 0.70710677;
    fVar63 = (fVar96 + fVar89) * 0.70710677;
    fVar65 = (fVar97 + fVar55) * 0.70710677;
    fVar66 = (fVar98 + fVar91) * 0.70710677;
    fVar67 = (fVar62 + auVar73._0_4_) * 0.5;
    fVar75 = (fVar39 + auVar73._4_4_) * 0.5;
    fVar53 = (auVar100._0_4_ + auVar73._8_4_) * 0.5;
    fVar57 = (auVar100._8_4_ + auVar73._12_4_) * 0.5;
    fVar60 = (auVar82._0_4_ - fVar33) * 0.5;
    fVar62 = (auVar82._4_4_ - fVar36) * 0.5;
    fVar64 = (auVar82._8_4_ - auVar68._0_4_) * 0.5;
    fVar40 = (auVar82._12_4_ - auVar68._8_4_) * 0.5;
    fVar33 = (-(fVar85 * fVar99) + fVar74 * fVar32) * 0.5;
    fVar36 = (-(fVar87 * fVar101) + fVar76 * fVar35) * 0.5;
    fVar39 = (-(fVar59 * fVar48) + fVar77 * fVar38) * 0.5;
    fVar41 = (-(fVar94 * fVar102) + fVar84 * fVar37) * 0.5;
    fVar93 = (fVar85 * fVar74 + fVar99 * fVar32) * 0.5;
    fVar85 = (fVar87 * fVar76 + fVar101 * fVar35) * 0.5;
    fVar87 = (fVar59 * fVar77 + fVar48 * fVar38) * 0.5;
    fVar59 = (fVar94 * fVar84 + fVar102 * fVar37) * 0.5;
    fVar94 = (fVar95 - fVar54) * 0.70710677;
    fVar88 = (fVar96 - fVar89) * 0.70710677;
    fVar90 = (fVar97 - fVar55) * 0.70710677;
    fVar92 = (fVar98 - fVar91) * 0.70710677;
    fVar32 = fVar67 - fVar93;
    fVar35 = fVar75 - fVar85;
    fVar38 = fVar53 - fVar87;
    fVar37 = fVar57 - fVar59;
    fVar93 = fVar93 + fVar67;
    fVar85 = fVar85 + fVar75;
    fVar87 = fVar87 + fVar53;
    fVar59 = fVar59 + fVar57;
    fVar67 = fVar60 - fVar33;
    fVar75 = fVar62 - fVar36;
    fVar53 = fVar64 - fVar39;
    fVar57 = fVar40 - fVar41;
    fVar60 = fVar60 + fVar33;
    fVar62 = fVar62 + fVar36;
    fVar64 = fVar64 + fVar39;
    fVar40 = fVar40 + fVar41;
    auVar100._0_4_ = -(fVar32 * fVar61) + fVar94 * fVar67;
    auVar100._4_4_ = -(fVar35 * fVar63) + fVar88 * fVar75;
    auVar100._8_4_ = -(fVar38 * fVar65) + fVar90 * fVar53;
    auVar100._12_4_ = -(fVar37 * fVar66) + fVar92 * fVar57;
    auVar8._4_4_ = fVar75 * fVar63 + fVar88 * fVar35;
    auVar8._0_4_ = fVar67 * fVar61 + fVar94 * fVar32;
    auVar8._8_4_ = fVar53 * fVar65 + fVar90 * fVar38;
    auVar8._12_4_ = fVar57 * fVar66 + fVar92 * fVar37;
    auVar73 = NEON_rev64(auVar8,4);
    auVar68 = NEON_rev64(auVar100,4);
    auVar73 = NEON_ext(auVar73,auVar73,8,1);
    auVar68 = NEON_ext(auVar68,auVar68,8,1);
    puVar3 = (undefined8 *)(param_2 + lVar19);
    puVar3[1] = CONCAT44((-(fVar98 * fVar40) + fVar91 * fVar59) * 0.00390625,
                         (-(fVar97 * fVar64) + fVar55 * fVar87) * 0.00390625);
    *puVar3 = CONCAT44((-(fVar96 * fVar62) + fVar89 * fVar85) * 0.00390625,
                       (-(fVar95 * fVar60) + fVar54 * fVar93) * 0.00390625);
    puVar3 = (undefined8 *)(param_2 + (long)(int)uVar17 * 0x10 + lVar19);
    puVar3[1] = CONCAT44((-(fVar59 * fVar98) - fVar91 * fVar40) * 0.00390625,
                         (-(fVar87 * fVar97) - fVar55 * fVar64) * 0.00390625);
    *puVar3 = CONCAT44((-(fVar85 * fVar96) - fVar89 * fVar62) * 0.00390625,
                       (-(fVar93 * fVar95) - fVar54 * fVar60) * 0.00390625);
    pfVar13 = (float *)(param_2 + lVar21 * 0x10);
    pfVar13[2] = auVar73._8_4_ * 0.00390625;
    pfVar13[3] = auVar73._12_4_ * 0.00390625;
    *pfVar13 = auVar73._0_4_ * 0.00390625;
    pfVar13[1] = auVar73._4_4_ * 0.00390625;
    ((undefined8 *)(param_2 + uVar12))[1] =
         CONCAT44(auVar68._12_4_ * 0.00390625,auVar68._8_4_ * 0.00390625);
    *(undefined8 *)(param_2 + uVar12) =
         CONCAT44(auVar68._4_4_ * 0.00390625,auVar68._0_4_ * 0.00390625);
    lVar21 = lVar21 + -1;
    uVar10 = CONCAT44(fVar76,fVar74);
    uVar11 = CONCAT44(fVar84,fVar77);
    uVar50 = uVar27;
    uVar52 = uVar28;
    fVar33 = fVar44;
    fVar36 = fVar45;
    fVar32 = fVar42;
    fVar60 = fVar43;
    fVar44 = fVar95;
    fVar45 = fVar96;
    fVar42 = fVar97;
    fVar43 = fVar98;
    fVar62 = fVar46;
    fVar39 = fVar47;
    fVar64 = fVar56;
    fVar41 = fVar58;
    fVar46 = fVar54;
    fVar47 = fVar89;
    fVar56 = fVar55;
    fVar58 = fVar91;
    fVar49 = fVar102;
    fVar35 = fVar51;
    fVar38 = fVar49;
    fVar31 = fVar99;
    fVar34 = fVar101;
    fVar37 = fVar31;
    fVar40 = fVar34;
  } while (lVar16 < lVar21);
  return;
}


