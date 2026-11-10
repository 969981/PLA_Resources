/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03193d34; name: FUN_03193d34
 */


void FUN_03193d34(long param_1,undefined8 *param_2,uint *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined8 uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  float fVar90;
  float fVar93;
  undefined1 auVar91 [16];
  float fVar94;
  undefined1 auVar92 [16];
  undefined1 auVar95 [16];
  float fVar96;
  float fVar97;
  undefined1 auVar98 [16];
  
  uVar4 = *param_3;
  uVar7 = uVar4 - *(int *)(param_1 + 0x20);
  if ((int)uVar4 < *(int *)(param_1 + 0x20)) {
    lVar26 = *(long *)(param_1 + 0x18);
    uVar22 = uVar4;
    if (*(int *)(param_1 + 0x98) != 0) {
      uVar22 = *(uint *)(*(long *)(param_1 + 0x90) + (long)(int)uVar4 * 4);
    }
    uVar7 = uVar4;
    if (uVar22 != 0xffffffff) {
      lVar26 = *(long *)(param_1 + 0xb0);
      uVar7 = uVar22;
    }
  }
  else {
    lVar26 = *(long *)(param_1 + 0xd0);
  }
  iVar6 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(lVar26 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar7 << 4));
  if (iVar5 < iVar6) {
    iVar23 = iVar5;
    if (*(int *)(param_1 + 0x78) != 0) {
      iVar23 = *(int *)(*(long *)(param_1 + 0x70) + (long)iVar5 * 4);
    }
    lVar28 = *(long *)(param_1 + 0x28);
    iVar27 = iVar5;
    if (iVar23 != -1) {
      lVar28 = *(long *)(param_1 + 0xc0);
      iVar27 = iVar23;
    }
  }
  else {
    lVar28 = *(long *)(param_1 + 0xe0);
    iVar27 = iVar5 - iVar6;
  }
  iVar23 = *(int *)(param_1 + 0x40);
  lVar24 = *(long *)(param_1 + 0x38);
  lVar25 = *(long *)(param_1 + 0xf0);
  iVar27 = *(int *)(lVar28 + (long)iVar27 * 0x14);
  uVar33 = param_2[1];
  uVar30 = *param_2;
  puVar1 = (undefined8 *)(lVar24 + (long)iVar27 * 0x10);
  if (iVar23 <= iVar27) {
    puVar1 = (undefined8 *)(lVar25 + (long)(iVar27 - iVar23) * 0x10);
  }
  iVar27 = iVar5 + 1;
  iVar5 = iVar5 + *(short *)(lVar26 + (long)(int)uVar7 * 0x10 + 8) + -1;
  if (iVar5 <= iVar27) {
    param_4[1] = uVar33;
    *param_4 = uVar30;
    return;
  }
  lVar26 = (long)iVar27;
  fVar29 = (float)uVar30;
  fVar35 = (float)*puVar1;
  fVar39 = fVar29 - fVar35;
  fVar31 = (float)((ulong)uVar30 >> 0x20);
  fVar36 = (float)((ulong)*puVar1 >> 0x20);
  fVar40 = fVar31 - fVar36;
  fVar32 = (float)uVar33;
  fVar37 = (float)puVar1[1];
  fVar41 = fVar32 - fVar37;
  fVar34 = (float)((ulong)uVar33 >> 0x20);
  fVar38 = (float)((ulong)puVar1[1] >> 0x20);
  fVar42 = fVar34 - fVar38;
  auVar43._4_4_ = fVar40;
  auVar43._0_4_ = fVar39;
  auVar43._8_4_ = fVar41;
  auVar43._12_4_ = fVar42;
  auVar44._4_4_ = fVar40;
  auVar44._0_4_ = fVar39;
  auVar44._8_4_ = fVar41;
  auVar44._12_4_ = fVar42;
  auVar43 = NEON_ext(auVar43,auVar44,4,1);
  lVar28 = (long)iVar27 * 0x14 + (long)iVar6 * -0x14;
  auVar44 = NEON_fmov(0x3f800000,4);
  uVar45 = NEON_fmov(0x3f800000,4);
  fVar20 = 3.40282e+38;
  do {
    if (lVar26 < iVar6) {
      if (*(int *)(param_1 + 0x78) == 0) {
        iVar27 = (int)lVar26;
      }
      else {
        iVar27 = *(int *)(*(long *)(param_1 + 0x70) + lVar26 * 4);
      }
      if (iVar27 == -1) {
        piVar21 = (int *)(*(long *)(param_1 + 0x28) + lVar26 * 0x14);
      }
      else {
        piVar21 = (int *)(*(long *)(param_1 + 0xc0) + (long)iVar27 * 0x14);
      }
    }
    else {
      piVar21 = (int *)(*(long *)(param_1 + 0xe0) + lVar28);
    }
    iVar27 = *piVar21;
    iVar3 = piVar21[1];
    puVar1 = (undefined8 *)(lVar24 + (long)iVar27 * 0x10);
    if (iVar23 <= iVar27) {
      puVar1 = (undefined8 *)(lVar25 + (long)(iVar27 - iVar23) * 0x10);
    }
    fVar69 = (float)puVar1[1];
    fVar70 = (float)((ulong)puVar1[1] >> 0x20);
    pfVar2 = (float *)(lVar24 + (long)iVar3 * 0x10);
    if (iVar23 <= iVar3) {
      pfVar2 = (float *)(lVar25 + (long)(iVar3 - iVar23) * 0x10);
    }
    fVar47 = *pfVar2;
    fVar49 = pfVar2[1];
    fVar61 = pfVar2[2];
    fVar62 = pfVar2[3];
    fVar67 = (float)*puVar1;
    fVar63 = fVar67 - fVar35;
    fVar68 = (float)((ulong)*puVar1 >> 0x20);
    fVar64 = fVar68 - fVar36;
    fVar65 = fVar69 - fVar37;
    fVar66 = fVar70 - fVar38;
    auVar98._4_4_ = fVar64;
    auVar98._0_4_ = fVar63;
    auVar98._8_4_ = fVar65;
    auVar98._12_4_ = fVar66;
    auVar13._4_4_ = fVar64;
    auVar13._0_4_ = fVar63;
    auVar13._8_4_ = fVar65;
    auVar13._12_4_ = fVar66;
    auVar78 = NEON_ext(auVar98,auVar13,4,1);
    auVar53._0_4_ = fVar47 - fVar67;
    auVar53._4_4_ = fVar49 - fVar68;
    auVar53._8_4_ = fVar61 - fVar69;
    auVar53._12_4_ = fVar62 - fVar70;
    auVar84 = NEON_ext(auVar53,auVar53,4,1);
    fVar67 = fVar29 - fVar67;
    fVar68 = fVar31 - fVar68;
    fVar69 = fVar32 - fVar69;
    fVar70 = fVar34 - fVar70;
    fVar46 = fVar35 - fVar47;
    fVar48 = fVar36 - fVar49;
    fVar50 = fVar37 - fVar61;
    fVar51 = fVar38 - fVar62;
    fVar47 = fVar29 - fVar47;
    fVar49 = fVar31 - fVar49;
    uVar57 = SUB41(fVar49,0);
    uVar58 = (undefined1)((uint)fVar49 >> 8);
    uVar59 = (undefined1)((uint)fVar49 >> 0x10);
    uVar60 = (undefined1)((uint)fVar49 >> 0x18);
    fVar61 = fVar32 - fVar61;
    fVar62 = fVar34 - fVar62;
    auVar91[4] = uVar57;
    auVar91._0_4_ = fVar47;
    auVar91[5] = uVar58;
    auVar91[6] = uVar59;
    auVar91[7] = uVar60;
    auVar91._8_4_ = fVar61;
    auVar91._12_4_ = fVar62;
    auVar95[4] = uVar57;
    auVar95._0_4_ = fVar47;
    auVar95[5] = uVar58;
    auVar95[6] = uVar59;
    auVar95[7] = uVar60;
    auVar95._8_4_ = fVar61;
    auVar95._12_4_ = fVar62;
    auVar98 = NEON_ext(auVar91,auVar95,4,1);
    auVar79._0_4_ = auVar43._0_4_ * fVar63 - fVar39 * auVar78._0_4_;
    auVar79._4_4_ = auVar43._4_4_ * fVar64 - fVar40 * auVar78._4_4_;
    auVar79._8_4_ = fVar39 * fVar65 - fVar41 * fVar63;
    auVar79._12_4_ = fVar40 * fVar66 - fVar42 * fVar64;
    auVar95 = NEON_ext(auVar79,auVar79,4,1);
    fVar75 = fVar63 * auVar84._0_4_ - auVar78._0_4_ * auVar53._0_4_;
    auVar76._0_8_ = CONCAT44(fVar64 * auVar84._4_4_ - auVar78._4_4_ * auVar53._4_4_,fVar75);
    auVar76._8_4_ = fVar65 * auVar53._0_4_ - fVar63 * auVar53._8_4_;
    auVar76._12_4_ = fVar66 * auVar53._4_4_ - fVar64 * auVar53._12_4_;
    auVar91 = NEON_ext(auVar76,auVar76,4,1);
    auVar15._4_4_ = fVar68;
    auVar15._0_4_ = fVar67;
    auVar15._8_4_ = fVar69;
    auVar15._12_4_ = fVar70;
    auVar16._4_4_ = fVar68;
    auVar16._0_4_ = fVar67;
    auVar16._8_4_ = fVar69;
    auVar16._12_4_ = fVar70;
    auVar78 = NEON_ext(auVar15,auVar16,4,1);
    auVar74._8_8_ = auVar76._0_8_;
    auVar74._0_8_ = auVar91._0_8_;
    fVar93 = auVar91._4_4_;
    fVar71 = auVar91._0_4_;
    fVar96 = auVar95._0_4_ * fVar71;
    auVar80._0_4_ = auVar78._0_4_ * auVar53._0_4_ - fVar67 * auVar84._0_4_;
    auVar80._4_4_ = auVar78._4_4_ * auVar53._4_4_ - fVar68 * auVar84._4_4_;
    auVar80._8_4_ = fVar67 * auVar53._8_4_ - fVar69 * auVar53._0_4_;
    auVar80._12_4_ = fVar68 * auVar53._12_4_ - fVar70 * auVar53._4_4_;
    auVar91 = NEON_ext(auVar80,auVar80,4,1);
    auVar78._4_4_ = fVar48;
    auVar78._0_4_ = fVar46;
    auVar78._8_4_ = fVar50;
    auVar78._12_4_ = fVar51;
    auVar84._4_4_ = fVar48;
    auVar84._0_4_ = fVar46;
    auVar84._8_4_ = fVar50;
    auVar84._12_4_ = fVar51;
    auVar78 = NEON_ext(auVar78,auVar84,4,1);
    fVar97 = fVar71 * auVar91._0_4_;
    auVar81._0_4_ = fVar46 * auVar98._0_4_ - fVar47 * auVar78._0_4_;
    auVar81._4_4_ = fVar48 * auVar98._4_4_ - fVar49 * auVar78._4_4_;
    auVar81._8_4_ = fVar50 * fVar47 - fVar61 * fVar46;
    auVar81._12_4_ =
         fVar51 * (float)(CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,fVar47))))
                         >> 0x20) - fVar62 * fVar48;
    auVar78 = NEON_ext(auVar81,auVar81,4,1);
    fVar90 = fVar71 * auVar78._0_4_;
    fVar94 = fVar93 * auVar78._4_4_;
    auVar18._4_4_ = fVar97;
    auVar18._0_4_ = fVar96;
    auVar18._8_4_ = auVar79._0_4_ * fVar75;
    auVar18._12_4_ = fVar75 * auVar80._0_4_;
    auVar19._4_4_ = fVar97;
    auVar19._0_4_ = fVar96;
    auVar19._8_4_ = auVar79._0_4_ * fVar75;
    auVar19._12_4_ = fVar75 * auVar80._0_4_;
    auVar78 = NEON_ext(auVar18,auVar19,8,1);
    auVar85._0_4_ = auVar78._0_4_ + auVar95._4_4_ * fVar93 + fVar96;
    auVar85._4_4_ = auVar78._4_4_ + fVar93 * auVar91._4_4_ + fVar97;
    fVar96 = fVar90 + fVar94 + fVar75 * auVar81._0_4_;
    fVar90 = fVar90 + fVar94 + fVar75 * auVar81._0_4_;
    auVar85._12_4_ = fVar90;
    auVar85._8_4_ = fVar96;
    if (0.0 < fVar96 && (0.0 < auVar85._0_4_ && 0.0 < auVar85._4_4_)) {
      fVar69 = fVar75 * fVar75 + fVar71 * fVar71 + fVar93 * fVar93;
      fVar70 = fVar75 * fVar75 + fVar71 * fVar71 + fVar93 * fVar93;
      uVar52 = NEON_frecpe(CONCAT44(fVar70,fVar69),4);
      iVar27 = -(uint)(fVar69 == 0.0);
      iVar3 = -(uint)(fVar70 == 0.0);
      uVar17 = NEON_frecps(CONCAT44(fVar70,fVar69),uVar52,4);
      fVar67 = (float)uVar52 * (float)uVar17;
      fVar68 = (float)((ulong)uVar52 >> 0x20) * (float)((ulong)uVar17 >> 0x20);
      uVar52 = NEON_frecps(CONCAT44(fVar70,fVar69),CONCAT44(fVar68,fVar67),4);
      uVar12 = CONCAT44(fVar68 * (float)((ulong)uVar52 >> 0x20),fVar67 * (float)uVar52) &
               CONCAT17(~(byte)((uint)iVar3 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar3 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar3 >> 8),
                                          CONCAT14(~(byte)iVar3,
                                                   CONCAT13(~(byte)((uint)iVar27 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar27 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar27
                                                                                     >> 8),
                                                                              ~(byte)iVar27)))))));
      fVar70 = (fVar41 * fVar75 + fVar39 * fVar71 + fVar40 * fVar93) * (float)uVar12;
      uVar52 = CONCAT44((fVar41 * fVar75 + fVar39 * fVar71 + fVar40 * fVar93) *
                        (float)(uVar12 >> 0x20),fVar70);
      fVar69 = fVar69 * fVar70 * fVar70;
    }
    else {
      fVar71 = fVar39 * fVar63;
      auVar86._4_12_ = auVar85._4_12_;
      auVar86._0_4_ = fVar71;
      auVar88._0_8_ = auVar86._0_8_;
      auVar88._8_4_ = fVar41 * fVar65;
      auVar88._12_4_ = fVar90;
      auVar87._8_8_ = auVar88._8_8_;
      auVar87._4_4_ = fVar67 * auVar53._0_4_;
      auVar87._0_4_ = fVar71;
      auVar89._0_12_ = auVar87._0_12_;
      auVar89._12_4_ = fVar69 * auVar53._8_4_;
      auVar78 = NEON_ext(auVar89,auVar89,8,1);
      auVar92._4_4_ = auVar53._0_4_ * auVar53._0_4_;
      auVar92._0_4_ = fVar63 * fVar63;
      auVar92._8_4_ = fVar65 * fVar65;
      auVar92._12_4_ = auVar53._8_4_ * auVar53._8_4_;
      auVar84 = NEON_ext(auVar92,auVar92,8,1);
      auVar77._0_4_ = auVar84._0_4_ + fVar64 * fVar64 + fVar63 * fVar63;
      auVar77._4_4_ = auVar84._4_4_ + auVar53._4_4_ * auVar53._4_4_ + auVar53._0_4_ * auVar53._0_4_;
      auVar77._12_4_ = fVar50 * fVar50 + fVar46 * fVar46 + fVar48 * fVar48;
      auVar77._8_4_ = fVar50 * fVar50 + fVar46 * fVar46 + fVar48 * fVar48;
      auVar84 = NEON_frecpe(auVar77,4);
      auVar91 = NEON_frecps(auVar77,auVar84,4);
      auVar82._0_4_ = auVar84._0_4_ * auVar91._0_4_;
      auVar82._4_4_ = auVar84._4_4_ * auVar91._4_4_;
      auVar82._8_4_ = auVar84._8_4_ * auVar91._8_4_;
      auVar82._12_4_ = auVar84._12_4_ * auVar91._12_4_;
      auVar84 = NEON_frecps(auVar77,auVar82,4);
      auVar72._0_4_ = (auVar78._0_4_ + fVar40 * fVar64 + fVar71) * auVar82._0_4_ * auVar84._0_4_;
      auVar72._4_4_ =
           (auVar78._4_4_ + fVar68 * auVar53._4_4_ + fVar67 * auVar53._0_4_) *
           auVar82._4_4_ * auVar84._4_4_;
      auVar72._8_4_ =
           (fVar50 * fVar61 + fVar46 * fVar47 + fVar48 * fVar49) * auVar82._8_4_ * auVar84._8_4_;
      auVar72._12_4_ =
           (fVar50 * fVar61 + fVar46 * fVar47 + fVar48 * fVar49) * auVar82._12_4_ * auVar84._12_4_;
      auVar78 = NEON_fminnm(auVar72,auVar44,4);
      auVar78 = NEON_fmax(auVar78,ZEXT816(0),4);
      fVar71 = auVar78._0_4_;
      fVar75 = auVar78._4_4_;
      fVar63 = fVar39 - fVar63 * fVar71;
      fVar64 = fVar40 - fVar64 * fVar71;
      fVar65 = fVar41 - fVar65 * fVar71;
      fVar96 = auVar78._8_4_;
      auVar54._0_4_ = fVar67 - auVar53._0_4_ * fVar75;
      auVar54._4_4_ = fVar68 - auVar53._4_4_ * fVar75;
      auVar54._8_4_ = fVar69 - auVar53._8_4_ * fVar75;
      auVar54._12_4_ = fVar70 - auVar53._12_4_ * fVar75;
      fVar47 = fVar47 - fVar46 * fVar96;
      fVar49 = fVar49 - fVar48 * fVar96;
      fVar61 = fVar61 - fVar50 * fVar96;
      fVar62 = fVar62 - fVar51 * fVar96;
      fVar69 = fVar63 * fVar63 + fVar64 * fVar64 + fVar65 * fVar65;
      fVar70 = fVar63 * fVar63 + fVar64 * fVar64 + fVar65 * fVar65;
      fVar67 = auVar54._0_4_ * auVar54._0_4_ + auVar54._4_4_ * auVar54._4_4_ +
               auVar54._8_4_ * auVar54._8_4_;
      fVar68 = auVar54._0_4_ * auVar54._0_4_ + auVar54._4_4_ * auVar54._4_4_ +
               auVar54._8_4_ * auVar54._8_4_;
      auVar83._0_8_ = CONCAT44(-(uint)(fVar70 < fVar68),-(uint)(fVar69 < fVar67));
      auVar83._8_8_ = auVar83._0_8_;
      fVar46 = fVar47 * fVar47 + fVar49 * fVar49 + fVar61 * fVar61;
      fVar48 = fVar47 * fVar47 + fVar49 * fVar49 + fVar61 * fVar61;
      auVar14._4_4_ = fVar64;
      auVar14._0_4_ = fVar63;
      auVar14._8_4_ = fVar65;
      auVar14._12_4_ = fVar42 - fVar66 * fVar71;
      uVar52 = NEON_fmin(CONCAT17((char)((uint)fVar70 >> 0x18),
                                  CONCAT16((char)((uint)fVar70 >> 0x10),
                                           CONCAT15((char)((uint)fVar70 >> 8),
                                                    CONCAT14(SUB41(fVar70,0),fVar69)))),
                         CONCAT44(fVar68,fVar67),4);
      auVar73._0_8_ =
           CONCAT44(-(uint)((float)((ulong)uVar52 >> 0x20) < fVar48),-(uint)((float)uVar52 < fVar46)
                   );
      auVar73._8_8_ = auVar73._0_8_;
      auVar9._4_4_ = fVar49;
      auVar9._0_4_ = fVar47;
      auVar9._8_4_ = fVar61;
      auVar9._12_4_ = fVar62;
      auVar10._4_4_ = fVar49;
      auVar10._0_4_ = fVar47;
      auVar10._8_4_ = fVar61;
      auVar10._12_4_ = fVar62;
      auVar74 = auVar10 ^ (auVar9 ^ auVar54 ^ (auVar54 ^ auVar14) & auVar83) & auVar73;
      uVar52 = NEON_fmin(uVar52,CONCAT44(fVar48,fVar46),4);
      fVar69 = (float)uVar52;
      uVar52 = uVar45;
    }
    lVar26 = lVar26 + 1;
    fVar67 = (float)((ulong)uVar52 >> 0x20);
    fVar70 = fVar31 - fVar67 * auVar74._4_4_;
    auVar55._0_4_ = -(uint)(fVar69 < fVar20);
    auVar55._4_4_ = auVar55._0_4_;
    auVar55._8_4_ = auVar55._0_4_;
    auVar55._12_4_ = auVar55._0_4_;
    auVar8._8_8_ = uVar33;
    auVar8._0_8_ = uVar30;
    auVar11[4] = SUB41(fVar70,0);
    auVar11._0_4_ = fVar29 - (float)uVar52 * auVar74._0_4_;
    auVar11[5] = (char)((uint)fVar70 >> 8);
    auVar11[6] = (char)((uint)fVar70 >> 0x10);
    auVar11[7] = (char)((uint)fVar70 >> 0x18);
    auVar11._8_4_ = fVar32 - (float)uVar52 * auVar74._8_4_;
    auVar11._12_4_ = fVar34 - fVar67 * auVar74._12_4_;
    auVar56._8_8_ = uVar33;
    auVar56._0_8_ = uVar30;
    auVar56 = auVar56 ^ (auVar8 ^ auVar11) & auVar55;
    if (fVar20 <= fVar69) {
      fVar69 = fVar20;
    }
    fVar20 = fVar69;
    uVar33 = auVar56._8_8_;
    uVar30 = auVar56._0_8_;
    lVar28 = lVar28 + 0x14;
  } while (iVar5 != lVar26);
  param_4[1] = uVar33;
  *param_4 = uVar30;
  return;
}


