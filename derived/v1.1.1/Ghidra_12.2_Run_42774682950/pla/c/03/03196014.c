/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03196014; name: FUN_03196014
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_03196014(long param_1,int *param_2,undefined1 (*param_3) [16],undefined8 *param_4,
            undefined8 *param_5)

{
  bool bVar1;
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  int *piVar4;
  short sVar5;
  int iVar6;
  undefined1 (*pauVar7) [12];
  float *pfVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uVar13;
  float fVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar30 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  float fVar61;
  float fVar64;
  float fVar65;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  float fVar67;
  float fVar70;
  float fVar71;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float in_s20;
  ulong uVar72;
  float in_register_00005284;
  float in_register_00005288;
  undefined1 auVar74 [16];
  ulong uVar73;
  float fVar76;
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  float fVar82;
  float fVar83;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar84;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  int iVar87;
  int iVar89;
  int iVar90;
  undefined1 auVar88 [16];
  int iVar91;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  uint uVar95;
  float fVar96;
  
  lVar19 = *(long *)(param_1 + 0x20);
  fVar36 = (float)*(undefined8 *)(*param_3 + 8);
  fVar37 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  uVar13 = *(undefined8 *)*param_3;
  fVar34 = (float)uVar13;
  fVar35 = (float)((ulong)uVar13 >> 0x20);
  uVar40 = param_4[1];
  uVar38 = *param_4;
  iVar21 = *param_2;
  pauVar2 = (undefined1 (*) [12])(param_1 + 0x80);
  fVar45 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
  fVar41 = (float)*(undefined8 *)*pauVar2;
  fVar42 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  pauVar3 = (undefined1 (*) [12])(param_1 + 0x60);
  fVar49 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  fVar47 = (float)*(undefined8 *)*pauVar3;
  fVar48 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  pauVar7 = (undefined1 (*) [12])(param_1 + 0x70);
  fVar46 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  fVar43 = (float)*(undefined8 *)*pauVar7;
  fVar44 = (float)((ulong)*(undefined8 *)*pauVar7 >> 0x20);
  if (iVar21 < *(int *)(lVar19 + 0x20)) {
    lVar22 = *(long *)(lVar19 + 0x18);
    iVar20 = iVar21;
    if (*(int *)(lVar19 + 0x98) != 0) {
      iVar20 = *(int *)(*(long *)(lVar19 + 0x90) + (long)iVar21 * 4);
    }
    if (iVar20 != -1) {
      plVar16 = (long *)(lVar19 + 0xb0);
      iVar21 = iVar20;
      goto LAB_03196274;
    }
  }
  else {
    plVar16 = (long *)(lVar19 + 0xd0);
    iVar21 = iVar21 - *(int *)(lVar19 + 0x20);
LAB_03196274:
    lVar22 = *plVar16;
  }
  piVar4 = (int *)(lVar22 + (long)iVar21 * 0x10);
  iVar6 = *(int *)(lVar19 + 0x30);
  sVar5 = (short)piVar4[2];
  iVar21 = *piVar4;
  iVar20 = iVar21 + sVar5;
  iVar24 = iVar20 + -1;
  if (iVar6 < iVar20) {
    iVar24 = iVar24 - iVar6;
    plVar16 = (long *)(lVar19 + 0xe0);
LAB_03196290:
    lVar22 = *plVar16;
  }
  else {
    iVar23 = iVar24;
    if (*(int *)(lVar19 + 0x78) != 0) {
      iVar23 = *(int *)(*(long *)(lVar19 + 0x70) + (long)iVar24 * 4);
    }
    lVar22 = *(long *)(lVar19 + 0x28);
    if (iVar23 != -1) {
      plVar16 = (long *)(lVar19 + 0xc0);
      iVar24 = iVar23;
      goto LAB_03196290;
    }
  }
  iVar24 = *(int *)(lVar22 + (long)iVar24 * 0x14 + 4);
  iVar23 = *(int *)(lVar19 + 0x40);
  fVar39 = (float)((ulong)uVar38 >> 0x20);
  fVar28 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar32 = (float)*(undefined8 *)(param_1 + 0x98);
  if (iVar24 < iVar23) {
    iVar17 = 0;
    plVar16 = (long *)(lVar19 + 0x38);
    if (0 < sVar5) goto LAB_031960cc;
LAB_031962ac:
    auVar60 = ZEXT816(0x5f7ffff0);
  }
  else {
    plVar16 = (long *)(lVar19 + 0xf0);
    iVar17 = iVar23;
    if (sVar5 < 1) goto LAB_031962ac;
LAB_031960cc:
    fVar55 = fVar34 * fVar34;
    uVar29 = 0;
    uVar33 = 0;
    auVar50._0_12_ = SUB1612(*param_3,0);
    auVar50._12_4_ = 0;
    auVar88._8_8_ = _UNK_03889f18;
    auVar88._0_8_ = _DAT_03889f10;
    auVar60._12_4_ = fVar37;
    auVar60._0_12_ = *(undefined1 (*) [12])*param_3;
    auVar69._12_4_ = fVar37;
    auVar69._0_12_ = *(undefined1 (*) [12])*param_3;
    auVar60 = NEON_ext(auVar60,auVar69,8,1);
    auVar68._12_4_ = fVar49;
    auVar68._0_12_ = *pauVar3;
    auVar10._12_4_ = fVar49;
    auVar10._0_12_ = *pauVar3;
    auVar68 = NEON_ext(auVar68,auVar10,8,1);
    auVar74._12_4_ = fVar46;
    auVar74._0_12_ = *pauVar7;
    auVar9._12_4_ = fVar46;
    auVar9._0_12_ = *pauVar7;
    auVar74 = NEON_ext(auVar74,auVar9,8,1);
    auVar62._12_4_ = fVar45;
    auVar62._0_12_ = *pauVar2;
    auVar85._12_4_ = fVar45;
    auVar85._0_12_ = *pauVar2;
    auVar62 = NEON_ext(auVar62,auVar85,8,1);
    auVar77._0_4_ = fVar55 + fVar55;
    auVar77._4_4_ = fVar35 * fVar35 + fVar55;
    auVar77._8_4_ = fVar36 * fVar36 + fVar55;
    auVar77._12_4_ = fVar37 * fVar37 + fVar55;
    auVar78._8_8_ = _UNK_03889038;
    auVar78._0_8_ = _DAT_03889030;
    lVar22 = (long)iVar21;
    uVar13 = NEON_ext(uVar13,auVar60._0_8_,4,1);
    auVar85 = NEON_frsqrte(auVar77,4);
    auVar69 = a64_TBL(ZEXT816(0),auVar50,auVar78);
    auVar60 = a64_TBL(ZEXT816(0),auVar50,auVar88);
    uVar72 = CONCAT44(-(uint)(auVar77._8_4_ < auVar77._4_4_),-(uint)(auVar77._8_4_ < auVar77._4_4_))
    ;
    fVar55 = auVar85._0_4_;
    auVar79._0_4_ = fVar55 * fVar55;
    fVar82 = auVar85._4_4_;
    auVar79._4_4_ = fVar82 * fVar82;
    fVar83 = auVar85._8_4_;
    auVar79._8_4_ = fVar83 * fVar83;
    fVar84 = auVar85._12_4_;
    auVar79._12_4_ = fVar84 * fVar84;
    auVar92._8_8_ = uVar72;
    auVar92._0_8_ = uVar72;
    iVar25 = 0;
    auVar85 = NEON_frsqrts(auVar77,auVar79,4);
    auVar60 = auVar60 ^ (auVar60 ^ auVar69) & auVar92;
    fVar66 = -auVar60._0_4_;
    fVar57 = auVar60._4_4_;
    fVar55 = fVar55 * auVar85._0_4_;
    fVar82 = fVar82 * auVar85._4_4_;
    fVar83 = fVar83 * auVar85._8_4_;
    fVar84 = fVar84 * auVar85._12_4_;
    auVar51._0_4_ = fVar55 * fVar55;
    auVar51._4_4_ = fVar82 * fVar82;
    auVar51._8_4_ = fVar83 * fVar83;
    auVar51._12_4_ = fVar84 * fVar84;
    auVar69 = NEON_frsqrts(auVar77,auVar51,4);
    auVar93._4_12_ = auVar60._4_12_;
    auVar93._0_4_ = fVar66;
    iVar87 = -(uint)(auVar77._0_4_ <= 0.0);
    iVar89 = -(uint)(auVar77._4_4_ <= 0.0);
    iVar90 = -(uint)(auVar77._8_4_ <= 0.0);
    iVar91 = -(uint)(auVar77._12_4_ <= 0.0);
    auVar85 = NEON_ext(auVar93,auVar93,4,1);
    fVar55 = auVar69._0_4_ * fVar55;
    fVar82 = auVar69._4_4_ * fVar82;
    fVar83 = auVar69._8_4_ * fVar83;
    fVar84 = auVar69._12_4_ * fVar84;
    auVar52._0_8_ =
         CONCAT17((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18),
                  CONCAT16((byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar89 >> 0x10),
                           CONCAT15((byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar89 >> 8),
                                    CONCAT14(SUB41(fVar82,0) & ~(byte)iVar89,
                                             CONCAT13((byte)((uint)fVar55 >> 0x18) &
                                                      ~(byte)((uint)iVar87 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar55 >> 0x10) &
                                                               ~(byte)((uint)iVar87 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar55 >> 8) &
                                                                        ~(byte)((uint)iVar87 >> 8),
                                                                        SUB41(fVar55,0) &
                                                                        ~(byte)iVar87)))))));
    auVar52[8] = SUB41(fVar83,0) & ~(byte)iVar90;
    auVar52[9] = (byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar90 >> 8);
    auVar52[10] = (byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
    auVar52[0xb] = (byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
    auVar52[0xc] = SUB41(fVar84,0) & ~(byte)iVar91;
    auVar52[0xd] = (byte)((uint)fVar84 >> 8) & ~(byte)((uint)iVar91 >> 8);
    auVar52[0xe] = (byte)((uint)fVar84 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10);
    auVar52[0xf] = (byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18);
    fVar67 = (float)uVar38 - fVar28;
    fVar70 = fVar39 - fVar31;
    fVar71 = (float)uVar40 - fVar32;
    auVar69 = NEON_ext(auVar52,auVar52,8,1);
    uVar54 = (undefined4)((ulong)auVar52._0_8_ >> 0x20);
    fVar84 = fVar34 * auVar85._0_4_ - (float)uVar13 * fVar66;
    fVar56 = fVar35 * auVar85._4_4_ - (float)((ulong)uVar13 >> 0x20) * fVar57;
    fVar58 = fVar36 * fVar66 - fVar34 * auVar60._8_4_;
    fVar59 = fVar37 * fVar57 - fVar35 * auVar60._12_4_;
    uVar73 = CONCAT44(auVar69._0_4_,auVar69._0_4_);
    pfVar8 = (float *)(*plVar16 + (long)(iVar24 - iVar17) * 0x10);
    fVar55 = *pfVar8;
    fVar82 = pfVar8[1];
    fVar83 = pfVar8[2];
    uVar73 = uVar73 ^ (uVar73 ^ CONCAT44(uVar54,uVar54)) & uVar72;
    auVar11._4_4_ = fVar56;
    auVar11._0_4_ = fVar84;
    auVar11._8_4_ = fVar58;
    auVar11._12_4_ = fVar59;
    auVar12._4_4_ = fVar56;
    auVar12._0_4_ = fVar84;
    auVar12._8_4_ = fVar58;
    auVar12._12_4_ = fVar59;
    auVar69 = NEON_ext(auVar11,auVar12,4,1);
    fVar61 = auVar68._0_4_ * fVar71 + fVar47 * fVar67 + fVar48 * fVar70;
    fVar64 = auVar74._0_4_ * fVar71 + fVar43 * fVar67 + fVar44 * fVar70;
    fVar65 = auVar62._0_4_ * fVar71 + fVar41 * fVar67 + fVar42 * fVar70;
    fVar71 = auVar62._4_4_ * fVar71 + fVar42 * fVar67 + auVar62._4_4_ * fVar70;
    fVar70 = (float)uVar73;
    fVar66 = fVar70 * fVar66;
    fVar76 = (float)(uVar73 >> 0x20);
    fVar57 = fVar76 * fVar57;
    fVar58 = fVar70 * auVar60._8_4_;
    fVar59 = fVar70 * auVar69._0_4_;
    fVar67 = fVar76 * auVar69._4_4_;
    fVar70 = fVar70 * fVar84;
    auVar53._0_4_ = fVar61 * fVar66;
    auVar53._4_4_ = fVar64 * fVar57;
    auVar53._8_4_ = fVar65 * fVar58;
    auVar53._12_4_ = fVar71 * fVar76 * auVar60._12_4_;
    auVar60 = NEON_ext(auVar53,auVar53,8,1);
    auVar63._0_4_ = fVar61 * fVar59;
    auVar63._4_4_ = fVar64 * fVar67;
    auVar63._8_4_ = fVar65 * fVar70;
    auVar63._12_4_ = fVar71 * fVar76 * fVar56;
    auVar69 = NEON_ext(auVar63,auVar63,8,1);
    fVar61 = -(auVar53._0_4_ + auVar53._4_4_ + auVar60._0_4_);
    auVar60 = ZEXT416(0x5f7ffff0);
    fVar64 = -(auVar63._0_4_ + auVar63._4_4_ + auVar69._0_4_);
    auVar75._0_4_ = fVar66 * fVar55;
    auVar75._4_4_ = fVar57 * fVar82;
    auVar75._8_4_ = fVar58 * fVar83;
    auVar75._12_4_ = fVar61 * pfVar8[3];
    auVar69 = NEON_ext(auVar75,auVar75,8,1);
    auVar80._0_4_ = fVar59 * fVar55;
    auVar80._4_4_ = fVar67 * fVar82;
    auVar80._8_4_ = fVar70 * fVar83;
    auVar80._12_4_ = fVar64 * pfVar8[3];
    auVar62 = NEON_ext(auVar80,auVar80,8,1);
    in_s20 = auVar75._0_4_ + auVar75._4_4_;
    in_register_00005284 = auVar69._0_4_ + fVar61;
    in_register_00005288 = 0.0;
    lVar15 = (long)iVar6 * -0x14 + lVar22 * 0x14;
    fVar84 = in_s20 + in_register_00005284;
    fVar56 = auVar80._0_4_ + auVar80._4_4_ + auVar62._0_4_ + fVar64;
    do {
      bVar1 = 0.0 < fVar84;
      if (lVar22 < iVar6) {
        iVar24 = iVar21;
        if (*(int *)(lVar19 + 0x78) != 0) {
          iVar24 = *(int *)(*(long *)(lVar19 + 0x70) + lVar22 * 4);
        }
        if (iVar24 == -1) {
          lVar18 = *(long *)(lVar19 + 0x28) + lVar22 * 0x14;
        }
        else {
          lVar18 = *(long *)(lVar19 + 0xc0) + (long)iVar24 * 0x14;
        }
      }
      else {
        lVar18 = *(long *)(lVar19 + 0xe0) + lVar15;
      }
      if (*(int *)(lVar18 + 4) < iVar23) {
        iVar24 = 0;
        plVar16 = (long *)(lVar19 + 0x38);
      }
      else {
        plVar16 = (long *)(lVar19 + 0xf0);
        iVar24 = iVar23;
      }
      pfVar8 = (float *)(*plVar16 + (long)(*(int *)(lVar18 + 4) - iVar24) * 0x10);
      fVar71 = *pfVar8;
      fVar76 = pfVar8[1];
      fVar14 = pfVar8[2];
      auVar81._0_4_ = fVar66 * fVar71;
      auVar81._4_4_ = fVar57 * fVar76;
      auVar81._8_4_ = fVar58 * fVar14;
      auVar81._12_4_ = fVar61 * pfVar8[3];
      auVar69 = NEON_ext(auVar81,auVar81,8,1);
      fVar26 = auVar81._0_4_ + auVar81._4_4_ + auVar69._0_4_ + fVar61;
      auVar86._0_4_ = fVar59 * fVar71;
      auVar86._4_4_ = fVar67 * fVar76;
      auVar86._8_4_ = fVar70 * fVar14;
      auVar86._12_4_ = fVar64 * pfVar8[3];
      auVar69 = NEON_ext(auVar86,auVar86,8,1);
      fVar27 = auVar86._0_4_ + auVar86._4_4_ + auVar69._0_4_ + fVar64;
      fVar65 = fVar26 * fVar26 + fVar27 * fVar27;
      fVar94 = auVar60._0_4_;
      uVar95 = -(uint)(fVar65 < fVar94);
      if (fVar94 <= fVar65) {
        fVar65 = fVar94;
      }
      auVar60 = ZEXT416((uint)fVar65);
      in_s20 = (float)((uint)in_s20 ^ ((uint)in_s20 ^ (uint)fVar71) & uVar95);
      in_register_00005284 =
           (float)((uint)in_register_00005284 ^ ((uint)in_register_00005284 ^ (uint)fVar76) & uVar95
                  );
      in_register_00005288 =
           (float)((uint)in_register_00005288 ^ ((uint)in_register_00005288 ^ (uint)fVar14) & uVar95
                  );
      fVar94 = fVar84 * fVar27 - fVar56 * fVar26;
      fVar96 = (fVar84 - fVar26) * (fVar84 - fVar26) + (fVar56 - fVar27) * (fVar56 - fVar27);
      if (fVar94 * fVar94 < fVar96 * fVar65) {
        fVar65 = fVar84 * (fVar26 - fVar84) + fVar56 * (fVar27 - fVar56);
        if ((fVar65 < 0.0) && (0.0 < fVar26 * (fVar26 - fVar84) + fVar27 * (fVar27 - fVar56))) {
          fVar84 = -fVar65 / fVar96;
          in_s20 = fVar55 + (fVar71 - fVar55) * fVar84;
          in_register_00005284 = fVar82 + (fVar76 - fVar82) * fVar84;
          in_register_00005288 = fVar83 + (fVar14 - fVar83) * fVar84;
          auVar60 = ZEXT416((uint)((fVar94 * fVar94) / fVar96));
        }
      }
      if (fVar56 <= 0.0 && 0.0 < fVar27) {
        if (0.0 < fVar26 && bVar1) {
          iVar25 = iVar25 + 1;
        }
        else {
          iVar25 = iVar25 + (uint)((bVar1 || 0.0 < fVar26) && 0.0 < fVar94);
        }
      }
      else if ((fVar27 <= 0.0) && (fVar56 > 0.0)) {
        if (0.0 < fVar26 && bVar1) {
          iVar25 = iVar25 + -1;
        }
        else {
          iVar25 = iVar25 - (uint)((bVar1 || 0.0 < fVar26) && fVar94 <= 0.0);
        }
      }
      lVar22 = lVar22 + 1;
      lVar15 = lVar15 + 0x14;
      iVar21 = iVar21 + 1;
      fVar84 = fVar26;
      fVar56 = fVar27;
      fVar55 = fVar71;
      fVar82 = fVar76;
      fVar83 = fVar14;
    } while (lVar22 < iVar20);
    if (iVar25 != 0) goto LAB_03196314;
  }
  fVar55 = fVar34 * (float)uVar38;
  fVar39 = fVar35 * fVar39;
  fVar82 = fVar36 * (float)uVar40;
  fVar28 = fVar28 + fVar41 * in_register_00005288 + fVar47 * in_s20 + fVar43 * in_register_00005284;
  fVar31 = fVar31 + fVar42 * in_register_00005288 + fVar48 * in_s20 + fVar44 * in_register_00005284;
  fVar32 = fVar32 + (float)*(undefined8 *)(param_1 + 0x88) * in_register_00005288 +
                    (float)*(undefined8 *)(param_1 + 0x68) * in_s20 +
                    (float)*(undefined8 *)(param_1 + 0x78) * in_register_00005284;
  fVar41 = fVar34 * fVar28;
  fVar43 = fVar35 * fVar31;
  fVar44 = fVar36 * fVar32;
  fVar42 = fVar41 + fVar43 + fVar44;
  fVar44 = fVar41 + fVar43 + fVar44;
  fVar41 = fVar82 + fVar55 + fVar39;
  fVar82 = fVar82 + fVar55 + fVar39;
  uVar38 = CONCAT44(fVar35 * fVar82 + (fVar31 - fVar35 * fVar44),
                    fVar34 * fVar41 + (fVar28 - fVar34 * fVar42));
  uVar40 = CONCAT44(fVar37 * fVar82 +
                    (((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                     fVar45 * in_register_00005288 + fVar49 * in_s20 + fVar46 * in_register_00005284
                     ) - fVar37 * fVar44),fVar36 * fVar41 + (fVar32 - fVar36 * fVar42));
  uVar33 = auVar60._8_8_;
  uVar29 = auVar60._0_8_;
LAB_03196314:
  param_5[1] = uVar40;
  *param_5 = uVar38;
  auVar30._8_8_ = uVar33;
  auVar30._0_8_ = uVar29;
  return auVar30;
}


