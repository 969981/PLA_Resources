/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03193a34; name: FUN_03193a34
 */


void FUN_03193a34(long param_1,undefined8 *param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  long lVar18;
  long lVar19;
  int *piVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
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
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  float fVar83;
  float fVar86;
  undefined1 auVar84 [16];
  float fVar87;
  undefined1 auVar85 [16];
  undefined1 auVar88 [16];
  float fVar89;
  float fVar90;
  undefined1 auVar91 [16];
  
  piVar20 = (int *)(*(long *)(param_1 + 0x18) + (long)*param_3 * 0x10);
  iVar2 = *piVar20;
  uVar26 = param_2[1];
  uVar23 = *param_2;
  iVar1 = iVar2 + 1;
  iVar3 = iVar2 + (short)piVar20[2] + -1;
  if (iVar3 <= iVar1) {
    param_4[1] = uVar26;
    *param_4 = uVar23;
    return;
  }
  lVar18 = *(long *)(param_1 + 0x38);
  puVar4 = (undefined8 *)
           (lVar18 + (long)*(int *)(*(long *)(param_1 + 0x28) + (long)iVar2 * 0x14) * 0x10);
  uVar45 = puVar4[1];
  uVar38 = *puVar4;
  fVar22 = (float)uVar23;
  fVar28 = (float)uVar38;
  fVar32 = fVar22 - fVar28;
  fVar24 = (float)((ulong)uVar23 >> 0x20);
  fVar29 = (float)((ulong)uVar38 >> 0x20);
  fVar33 = fVar24 - fVar29;
  fVar25 = (float)uVar26;
  fVar30 = (float)uVar45;
  fVar34 = fVar25 - fVar30;
  fVar27 = (float)((ulong)uVar26 >> 0x20);
  fVar31 = (float)((ulong)uVar45 >> 0x20);
  fVar35 = fVar27 - fVar31;
  auVar36._4_4_ = fVar33;
  auVar36._0_4_ = fVar32;
  auVar36._8_4_ = fVar34;
  auVar36._12_4_ = fVar35;
  auVar37._4_4_ = fVar33;
  auVar37._0_4_ = fVar32;
  auVar37._8_4_ = fVar34;
  auVar37._12_4_ = fVar35;
  auVar36 = NEON_ext(auVar36,auVar37,4,1);
  lVar19 = (long)iVar3 - (long)iVar1;
  auVar37 = NEON_fmov(0x3f800000,4);
  uVar38 = NEON_fmov(0x3f800000,4);
  piVar20 = (int *)(*(long *)(param_1 + 0x28) + (long)iVar1 * 0x14 + 4);
  fVar21 = 3.40282e+38;
  do {
    puVar4 = (undefined8 *)(lVar18 + (long)piVar20[-1] * 0x10);
    uVar45 = puVar4[1];
    fVar62 = (float)uVar45;
    fVar63 = (float)((ulong)uVar45 >> 0x20);
    uVar45 = *puVar4;
    pfVar5 = (float *)(lVar18 + (long)*piVar20 * 0x10);
    fVar40 = *pfVar5;
    fVar42 = pfVar5[1];
    fVar54 = pfVar5[2];
    fVar55 = pfVar5[3];
    fVar60 = (float)uVar45;
    fVar56 = fVar60 - fVar28;
    fVar61 = (float)((ulong)uVar45 >> 0x20);
    fVar57 = fVar61 - fVar29;
    fVar58 = fVar62 - fVar30;
    fVar59 = fVar63 - fVar31;
    auVar91._4_4_ = fVar57;
    auVar91._0_4_ = fVar56;
    auVar91._8_4_ = fVar58;
    auVar91._12_4_ = fVar59;
    auVar11._4_4_ = fVar57;
    auVar11._0_4_ = fVar56;
    auVar11._8_4_ = fVar58;
    auVar11._12_4_ = fVar59;
    auVar71 = NEON_ext(auVar91,auVar11,4,1);
    auVar46._0_4_ = fVar40 - fVar60;
    auVar46._4_4_ = fVar42 - fVar61;
    auVar46._8_4_ = fVar54 - fVar62;
    auVar46._12_4_ = fVar55 - fVar63;
    auVar77 = NEON_ext(auVar46,auVar46,4,1);
    fVar60 = fVar22 - fVar60;
    fVar61 = fVar24 - fVar61;
    fVar62 = fVar25 - fVar62;
    fVar63 = fVar27 - fVar63;
    fVar39 = fVar28 - fVar40;
    fVar41 = fVar29 - fVar42;
    fVar43 = fVar30 - fVar54;
    fVar44 = fVar31 - fVar55;
    fVar40 = fVar22 - fVar40;
    fVar42 = fVar24 - fVar42;
    uVar50 = SUB41(fVar42,0);
    uVar51 = (undefined1)((uint)fVar42 >> 8);
    uVar52 = (undefined1)((uint)fVar42 >> 0x10);
    uVar53 = (undefined1)((uint)fVar42 >> 0x18);
    fVar54 = fVar25 - fVar54;
    fVar55 = fVar27 - fVar55;
    auVar84[4] = uVar50;
    auVar84._0_4_ = fVar40;
    auVar84[5] = uVar51;
    auVar84[6] = uVar52;
    auVar84[7] = uVar53;
    auVar84._8_4_ = fVar54;
    auVar84._12_4_ = fVar55;
    auVar88[4] = uVar50;
    auVar88._0_4_ = fVar40;
    auVar88[5] = uVar51;
    auVar88[6] = uVar52;
    auVar88[7] = uVar53;
    auVar88._8_4_ = fVar54;
    auVar88._12_4_ = fVar55;
    auVar91 = NEON_ext(auVar84,auVar88,4,1);
    auVar72._0_4_ = auVar36._0_4_ * fVar56 - fVar32 * auVar71._0_4_;
    auVar72._4_4_ = auVar36._4_4_ * fVar57 - fVar33 * auVar71._4_4_;
    auVar72._8_4_ = fVar32 * fVar58 - fVar34 * fVar56;
    auVar72._12_4_ = fVar33 * fVar59 - fVar35 * fVar57;
    auVar88 = NEON_ext(auVar72,auVar72,4,1);
    fVar68 = fVar56 * auVar77._0_4_ - auVar46._0_4_ * auVar71._0_4_;
    auVar69._0_8_ = CONCAT44(fVar57 * auVar77._4_4_ - auVar46._4_4_ * auVar71._4_4_,fVar68);
    auVar69._8_4_ = fVar58 * auVar46._0_4_ - auVar46._8_4_ * fVar56;
    auVar69._12_4_ = fVar59 * auVar46._4_4_ - auVar46._12_4_ * fVar57;
    auVar84 = NEON_ext(auVar69,auVar69,4,1);
    auVar13._4_4_ = fVar61;
    auVar13._0_4_ = fVar60;
    auVar13._8_4_ = fVar62;
    auVar13._12_4_ = fVar63;
    auVar14._4_4_ = fVar61;
    auVar14._0_4_ = fVar60;
    auVar14._8_4_ = fVar62;
    auVar14._12_4_ = fVar63;
    auVar71 = NEON_ext(auVar13,auVar14,4,1);
    auVar67._8_8_ = auVar69._0_8_;
    auVar67._0_8_ = auVar84._0_8_;
    fVar86 = auVar84._4_4_;
    fVar64 = auVar84._0_4_;
    fVar89 = auVar88._0_4_ * fVar64;
    auVar73._0_4_ = auVar46._0_4_ * auVar71._0_4_ - fVar60 * auVar77._0_4_;
    auVar73._4_4_ = auVar46._4_4_ * auVar71._4_4_ - fVar61 * auVar77._4_4_;
    auVar73._8_4_ = auVar46._8_4_ * fVar60 - fVar62 * auVar46._0_4_;
    auVar73._12_4_ = auVar46._12_4_ * fVar61 - fVar63 * auVar46._4_4_;
    auVar84 = NEON_ext(auVar73,auVar73,4,1);
    auVar71._4_4_ = fVar41;
    auVar71._0_4_ = fVar39;
    auVar71._8_4_ = fVar43;
    auVar71._12_4_ = fVar44;
    auVar77._4_4_ = fVar41;
    auVar77._0_4_ = fVar39;
    auVar77._8_4_ = fVar43;
    auVar77._12_4_ = fVar44;
    auVar71 = NEON_ext(auVar71,auVar77,4,1);
    fVar90 = fVar64 * auVar84._0_4_;
    auVar74._0_4_ = fVar39 * auVar91._0_4_ - fVar40 * auVar71._0_4_;
    auVar74._4_4_ = fVar41 * auVar91._4_4_ - fVar42 * auVar71._4_4_;
    auVar74._8_4_ = fVar43 * fVar40 - fVar54 * fVar39;
    auVar74._12_4_ =
         fVar44 * (float)(CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14(uVar50,fVar40))))
                         >> 0x20) - fVar55 * fVar41;
    auVar71 = NEON_ext(auVar74,auVar74,4,1);
    fVar83 = fVar64 * auVar71._0_4_;
    fVar87 = fVar86 * auVar71._4_4_;
    auVar16._4_4_ = fVar90;
    auVar16._0_4_ = fVar89;
    auVar16._8_4_ = auVar72._0_4_ * fVar68;
    auVar16._12_4_ = fVar68 * auVar73._0_4_;
    auVar17._4_4_ = fVar90;
    auVar17._0_4_ = fVar89;
    auVar17._8_4_ = auVar72._0_4_ * fVar68;
    auVar17._12_4_ = fVar68 * auVar73._0_4_;
    auVar71 = NEON_ext(auVar16,auVar17,8,1);
    auVar78._0_4_ = auVar71._0_4_ + auVar88._4_4_ * fVar86 + fVar89;
    auVar78._4_4_ = auVar71._4_4_ + fVar86 * auVar84._4_4_ + fVar90;
    fVar89 = fVar83 + fVar87 + fVar68 * auVar74._0_4_;
    fVar83 = fVar83 + fVar87 + fVar68 * auVar74._0_4_;
    auVar78._12_4_ = fVar83;
    auVar78._8_4_ = fVar89;
    if (0.0 < fVar89 && (0.0 < auVar78._0_4_ && 0.0 < auVar78._4_4_)) {
      fVar60 = fVar68 * fVar68 + fVar64 * fVar64 + fVar86 * fVar86;
      fVar61 = fVar68 * fVar68 + fVar64 * fVar64 + fVar86 * fVar86;
      uVar45 = NEON_frecpe(CONCAT44(fVar61,fVar60),4);
      iVar1 = -(uint)(fVar60 == 0.0);
      iVar2 = -(uint)(fVar61 == 0.0);
      uVar15 = NEON_frecps(CONCAT44(fVar61,fVar60),uVar45,4);
      fVar40 = (float)uVar45 * (float)uVar15;
      fVar42 = (float)((ulong)uVar45 >> 0x20) * (float)((ulong)uVar15 >> 0x20);
      uVar45 = NEON_frecps(CONCAT44(fVar61,fVar60),CONCAT44(fVar42,fVar40),4);
      uVar10 = CONCAT44(fVar42 * (float)((ulong)uVar45 >> 0x20),fVar40 * (float)uVar45) &
               CONCAT17(~(byte)((uint)iVar2 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar2 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar2 >> 8),
                                          CONCAT14(~(byte)iVar2,
                                                   CONCAT13(~(byte)((uint)iVar1 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar1 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar1 >>
                                                                                     8),~(byte)iVar1
                                                                             )))))));
      fVar61 = (fVar34 * fVar68 + fVar32 * fVar64 + fVar33 * fVar86) * (float)uVar10;
      uVar45 = CONCAT44((fVar34 * fVar68 + fVar32 * fVar64 + fVar33 * fVar86) *
                        (float)(uVar10 >> 0x20),fVar61);
      fVar60 = fVar60 * fVar61 * fVar61;
    }
    else {
      fVar64 = fVar32 * fVar56;
      auVar79._4_12_ = auVar78._4_12_;
      auVar79._0_4_ = fVar64;
      auVar81._0_8_ = auVar79._0_8_;
      auVar81._8_4_ = fVar34 * fVar58;
      auVar81._12_4_ = fVar83;
      auVar80._8_8_ = auVar81._8_8_;
      auVar80._4_4_ = fVar60 * auVar46._0_4_;
      auVar80._0_4_ = fVar64;
      auVar82._0_12_ = auVar80._0_12_;
      auVar82._12_4_ = fVar62 * auVar46._8_4_;
      auVar71 = NEON_ext(auVar82,auVar82,8,1);
      auVar85._4_4_ = auVar46._0_4_ * auVar46._0_4_;
      auVar85._0_4_ = fVar56 * fVar56;
      auVar85._8_4_ = fVar58 * fVar58;
      auVar85._12_4_ = auVar46._8_4_ * auVar46._8_4_;
      auVar77 = NEON_ext(auVar85,auVar85,8,1);
      auVar70._0_4_ = auVar77._0_4_ + fVar57 * fVar57 + fVar56 * fVar56;
      auVar70._4_4_ = auVar77._4_4_ + auVar46._4_4_ * auVar46._4_4_ + auVar46._0_4_ * auVar46._0_4_;
      auVar70._12_4_ = fVar43 * fVar43 + fVar39 * fVar39 + fVar41 * fVar41;
      auVar70._8_4_ = fVar43 * fVar43 + fVar39 * fVar39 + fVar41 * fVar41;
      auVar77 = NEON_frecpe(auVar70,4);
      auVar84 = NEON_frecps(auVar70,auVar77,4);
      auVar75._0_4_ = auVar77._0_4_ * auVar84._0_4_;
      auVar75._4_4_ = auVar77._4_4_ * auVar84._4_4_;
      auVar75._8_4_ = auVar77._8_4_ * auVar84._8_4_;
      auVar75._12_4_ = auVar77._12_4_ * auVar84._12_4_;
      auVar77 = NEON_frecps(auVar70,auVar75,4);
      auVar65._0_4_ = (auVar71._0_4_ + fVar33 * fVar57 + fVar64) * auVar75._0_4_ * auVar77._0_4_;
      auVar65._4_4_ =
           (auVar71._4_4_ + fVar61 * auVar46._4_4_ + fVar60 * auVar46._0_4_) *
           auVar75._4_4_ * auVar77._4_4_;
      auVar65._8_4_ =
           (fVar43 * fVar54 + fVar39 * fVar40 + fVar41 * fVar42) * auVar75._8_4_ * auVar77._8_4_;
      auVar65._12_4_ =
           (fVar43 * fVar54 + fVar39 * fVar40 + fVar41 * fVar42) * auVar75._12_4_ * auVar77._12_4_;
      auVar71 = NEON_fminnm(auVar65,auVar37,4);
      auVar71 = NEON_fmax(auVar71,ZEXT816(0),4);
      fVar64 = auVar71._0_4_;
      fVar68 = auVar71._4_4_;
      fVar56 = fVar32 - fVar56 * fVar64;
      fVar57 = fVar33 - fVar57 * fVar64;
      fVar58 = fVar34 - fVar58 * fVar64;
      fVar89 = auVar71._8_4_;
      auVar47._0_4_ = fVar60 - auVar46._0_4_ * fVar68;
      auVar47._4_4_ = fVar61 - auVar46._4_4_ * fVar68;
      auVar47._8_4_ = fVar62 - auVar46._8_4_ * fVar68;
      auVar47._12_4_ = fVar63 - auVar46._12_4_ * fVar68;
      fVar40 = fVar40 - fVar39 * fVar89;
      fVar42 = fVar42 - fVar41 * fVar89;
      fVar54 = fVar54 - fVar43 * fVar89;
      fVar55 = fVar55 - fVar44 * fVar89;
      fVar60 = fVar56 * fVar56 + fVar57 * fVar57 + fVar58 * fVar58;
      fVar61 = fVar56 * fVar56 + fVar57 * fVar57 + fVar58 * fVar58;
      fVar39 = auVar47._0_4_ * auVar47._0_4_ + auVar47._4_4_ * auVar47._4_4_ +
               auVar47._8_4_ * auVar47._8_4_;
      fVar41 = auVar47._0_4_ * auVar47._0_4_ + auVar47._4_4_ * auVar47._4_4_ +
               auVar47._8_4_ * auVar47._8_4_;
      auVar76._0_8_ = CONCAT44(-(uint)(fVar61 < fVar41),-(uint)(fVar60 < fVar39));
      auVar76._8_8_ = auVar76._0_8_;
      fVar43 = fVar40 * fVar40 + fVar42 * fVar42 + fVar54 * fVar54;
      fVar44 = fVar40 * fVar40 + fVar42 * fVar42 + fVar54 * fVar54;
      auVar12._4_4_ = fVar57;
      auVar12._0_4_ = fVar56;
      auVar12._8_4_ = fVar58;
      auVar12._12_4_ = fVar35 - fVar59 * fVar64;
      uVar45 = NEON_fmin(CONCAT17((char)((uint)fVar61 >> 0x18),
                                  CONCAT16((char)((uint)fVar61 >> 0x10),
                                           CONCAT15((char)((uint)fVar61 >> 8),
                                                    CONCAT14(SUB41(fVar61,0),fVar60)))),
                         CONCAT44(fVar41,fVar39),4);
      auVar66._0_8_ =
           CONCAT44(-(uint)((float)((ulong)uVar45 >> 0x20) < fVar44),-(uint)((float)uVar45 < fVar43)
                   );
      auVar66._8_8_ = auVar66._0_8_;
      auVar7._4_4_ = fVar42;
      auVar7._0_4_ = fVar40;
      auVar7._8_4_ = fVar54;
      auVar7._12_4_ = fVar55;
      auVar8._4_4_ = fVar42;
      auVar8._0_4_ = fVar40;
      auVar8._8_4_ = fVar54;
      auVar8._12_4_ = fVar55;
      auVar67 = auVar8 ^ (auVar7 ^ auVar47 ^ (auVar47 ^ auVar12) & auVar76) & auVar66;
      uVar45 = NEON_fmin(uVar45,CONCAT44(fVar44,fVar43),4);
      fVar60 = (float)uVar45;
      uVar45 = uVar38;
    }
    piVar20 = piVar20 + 5;
    fVar40 = (float)((ulong)uVar45 >> 0x20);
    fVar61 = fVar24 - fVar40 * auVar67._4_4_;
    auVar48._0_4_ = -(uint)(fVar60 < fVar21);
    auVar48._4_4_ = auVar48._0_4_;
    auVar48._8_4_ = auVar48._0_4_;
    auVar48._12_4_ = auVar48._0_4_;
    auVar6._8_8_ = uVar26;
    auVar6._0_8_ = uVar23;
    auVar9[4] = SUB41(fVar61,0);
    auVar9._0_4_ = fVar22 - (float)uVar45 * auVar67._0_4_;
    auVar9[5] = (char)((uint)fVar61 >> 8);
    auVar9[6] = (char)((uint)fVar61 >> 0x10);
    auVar9[7] = (char)((uint)fVar61 >> 0x18);
    auVar9._8_4_ = fVar25 - (float)uVar45 * auVar67._8_4_;
    auVar9._12_4_ = fVar27 - fVar40 * auVar67._12_4_;
    auVar49._8_8_ = uVar26;
    auVar49._0_8_ = uVar23;
    auVar49 = auVar49 ^ (auVar6 ^ auVar9) & auVar48;
    if (fVar21 <= fVar60) {
      fVar60 = fVar21;
    }
    fVar21 = fVar60;
    lVar19 = lVar19 + -1;
    uVar26 = auVar49._8_8_;
    uVar23 = auVar49._0_8_;
  } while (lVar19 != 0);
  param_4[1] = uVar26;
  *param_4 = uVar23;
  return;
}


