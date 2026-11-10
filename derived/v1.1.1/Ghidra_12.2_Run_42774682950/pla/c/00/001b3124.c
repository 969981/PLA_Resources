/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b3124; name: FUN_001b3124
 */


undefined4 FUN_001b3124(long param_1,float *param_2,long param_3,uint param_4,undefined8 *param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  int iVar21;
  long lVar22;
  float *pfVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  float *pfVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  undefined1 (*pauVar30) [16];
  int iVar31;
  long lVar32;
  undefined8 uVar33;
  int *piVar34;
  int iVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  int iVar39;
  undefined1 (*pauVar40) [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  float fVar47;
  undefined1 auVar49 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  float fVar58;
  undefined1 auVar59 [16];
  float fVar60;
  undefined8 uVar61;
  float fVar63;
  undefined8 uVar62;
  int iVar64;
  undefined8 uVar65;
  int iVar66;
  undefined8 uVar67;
  float fVar68;
  float fVar69;
  float fVar71;
  undefined1 auVar70 [16];
  float fVar72;
  long local_130;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  int local_90;
  long local_88;
  undefined8 local_80;
  
  iVar31 = param_4 * 3;
  local_a0 = 0x8000000000000000;
  lVar11 = tpidr_el0;
  local_90 = iVar31;
  if (param_4 == 0) {
    local_a8 = 0;
  }
  else {
    lVar17 = *(long *)(lVar11 + 0x38d490);
    if (lVar17 == 0) {
      lVar17 = FUN_0333d16c(0,1);
      *(long *)(lVar11 + 0x38d490) = lVar17;
    }
    lVar17 = *(long *)(lVar17 + 8);
    uVar12 = (ulong)(int)(param_4 * 0x30 + 0x7f & 0xffffff80);
    if (uVar12 <= *(ulong *)(lVar17 + 0x10)) {
      local_a8 = *(long *)(lVar17 + 0x18);
      uVar12 = local_a8 + uVar12;
      if (uVar12 <= *(ulong *)(lVar17 + 0x20)) {
        *(ulong *)(lVar17 + 0x18) = uVar12;
        goto LAB_001b3200;
      }
    }
    local_a8 = FUN_032ce670(lVar17);
  }
LAB_001b3200:
  local_a0 = CONCAT44(iVar31,(int)local_a0) | 0x8000000000000000;
  iVar64 = (param_4 - 1) * param_4;
  iVar31 = iVar64;
  if (iVar64 < 0) {
    iVar31 = iVar64 + 1;
  }
  uVar33 = *(undefined8 *)PTR_PTR_04372400;
  local_88 = CONCAT44(local_88._4_4_,iVar31 >> 1);
  local_98 = local_a8;
  if (iVar64 < 2) {
    lVar17 = 0;
    uVar15 = 0x80000000;
  }
  else {
    lVar17 = FUN_032cf190(uVar33,4,&local_88);
    uVar15 = (uint)local_88;
  }
  local_88 = 0;
  local_80 = 0x8000000000000000;
  if (1 < iVar64) {
    local_88 = FUN_032bd1d4(uVar33,iVar31 >> 1,0x10,0,0,(long)&local_80 + 4);
  }
  if (0 < (int)param_4) {
    uVar67 = *(undefined8 *)(PTR_DAT_04372370 + 0x60);
    uVar36 = 0;
    iVar31 = 0;
    pauVar24 = (undefined1 (*) [16])(param_3 + 0x10);
    pauVar25 = (undefined1 (*) [16])(param_2 + 4);
    uVar12 = 1;
    uVar28 = 1;
    if (1 < (long)(int)param_4) goto LAB_001b3338;
    while( true ) {
      uVar36 = uVar28;
      uVar12 = uVar12 + 1;
      pauVar24 = pauVar24 + 1;
      pauVar25 = pauVar25 + 1;
      if (uVar36 == param_4) break;
      uVar28 = uVar36 + 1;
      if ((long)uVar28 < (long)(int)param_4) {
LAB_001b3338:
        piVar34 = (int *)(lVar17 + (long)iVar31 * 4);
        pauVar30 = pauVar24;
        uVar38 = (ulong)param_4;
        pauVar40 = pauVar25;
        do {
          uVar18 = local_80;
          lVar27 = local_88;
          auVar45 = *(undefined1 (*) [16])(param_2 + uVar36 * 4);
          auVar53 = *pauVar40;
          fVar46 = auVar45._0_4_;
          fVar51 = auVar53._0_4_;
          fVar47 = auVar45._4_4_;
          fVar52 = auVar53._4_4_;
          fVar50 = auVar45._8_4_;
          fVar58 = auVar53._8_4_;
          fVar41 = fVar46 * fVar51 + fVar47 * fVar52 + fVar50 * fVar58;
          fVar42 = fVar46 * fVar51 + fVar47 * fVar52 + fVar50 * fVar58;
          fVar55 = (float)uVar67 - fVar41 * fVar41;
          uVar56 = CONCAT44((float)((ulong)uVar67 >> 0x20) - fVar42 * fVar42,fVar55);
          if (fVar55 <= 0.0) {
LAB_001b3540:
            *piVar34 = -1;
          }
          else {
            auVar49 = *(undefined1 (*) [16])(param_3 + uVar36 * 0x10);
            fVar55 = fVar46 * auVar49._0_4_;
            fVar43 = fVar47 * auVar49._4_4_;
            fVar44 = fVar50 * auVar49._8_4_;
            fVar68 = fVar55 + fVar43 + fVar44;
            fVar44 = fVar55 + fVar43 + fVar44;
            auVar54 = *pauVar30;
            fVar55 = fVar51 * auVar54._0_4_;
            fVar43 = fVar52 * auVar54._4_4_;
            fVar71 = fVar58 * auVar54._8_4_;
            uVar61 = NEON_frecpe(uVar56,4);
            uVar65 = NEON_frecps(uVar56,uVar61,4);
            fVar60 = (float)uVar61 * (float)uVar65;
            fVar63 = (float)((ulong)uVar61 >> 0x20) * (float)((ulong)uVar65 >> 0x20);
            uVar56 = NEON_frecps(uVar56,CONCAT44(fVar63,fVar60),4);
            fVar60 = fVar60 * (float)uVar56;
            fVar63 = fVar63 * (float)((ulong)uVar56 >> 0x20);
            uVar56 = CONCAT44(fVar63,fVar60);
            fVar69 = fVar55 + fVar43 + fVar71;
            fVar71 = fVar55 + fVar43 + fVar71;
            iVar64 = -(uint)(fVar60 <= 0.0);
            iVar66 = -(uint)(fVar63 <= 0.0);
            fVar72 = fVar68 + fVar69 * -fVar41;
            fVar69 = fVar68 * -fVar41 + fVar69;
            auVar70 = NEON_ext(auVar53,auVar53,4,1);
            uVar61 = NEON_frsqrte(uVar56,4);
            fVar41 = (float)uVar61;
            fVar68 = (float)((ulong)uVar61 >> 0x20);
            uVar61 = NEON_frsqrts(uVar56,CONCAT44(fVar68 * fVar68,fVar41 * fVar41),4);
            fVar41 = fVar41 * (float)uVar61;
            fVar68 = fVar68 * (float)((ulong)uVar61 >> 0x20);
            fVar55 = fVar60 * (fVar51 * fVar69 + fVar46 * fVar72);
            fVar43 = fVar63 * (fVar52 * (fVar44 * -fVar42 + fVar71) +
                              fVar47 * (fVar44 + fVar71 * -fVar42));
            fVar44 = fVar60 * (fVar58 * fVar69 + fVar50 * fVar72);
            auVar59 = NEON_ext(auVar45,auVar45,4,1);
            uVar56 = NEON_frsqrts(uVar56,CONCAT44(fVar68 * fVar68,fVar41 * fVar41),4);
            auVar48._0_4_ = fVar46 * auVar70._0_4_ - fVar51 * auVar59._0_4_;
            auVar48._4_4_ = fVar47 * auVar70._4_4_ - fVar52 * auVar59._4_4_;
            auVar48._8_4_ = fVar50 * fVar51 - fVar58 * fVar46;
            auVar48._12_4_ = auVar45._12_4_ * fVar52 - auVar53._12_4_ * fVar47;
            auVar53 = NEON_ext(auVar48,auVar48,4,1);
            fVar60 = fVar60 * (float)uVar56 * fVar41;
            fVar63 = fVar63 * (float)((ulong)uVar56 >> 0x20) * fVar68;
            fVar68 = fVar55 - auVar49._0_4_;
            fVar71 = fVar43 - auVar49._4_4_;
            fVar72 = fVar44 - auVar49._8_4_;
            auVar45 = NEON_ext(auVar49,auVar49,8,1);
            fVar41 = auVar45._4_4_ * auVar45._4_4_;
            fVar42 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                                     CONCAT12((byte)((uint)fVar60 >> 0x10) &
                                              ~(byte)((uint)iVar64 >> 0x10),
                                              CONCAT11((byte)((uint)fVar60 >> 8) &
                                                       ~(byte)((uint)iVar64 >> 8),
                                                       SUB41(fVar60,0) & ~(byte)iVar64)));
            fVar58 = auVar53._0_4_ * fVar42;
            fVar69 = auVar53._4_4_ *
                     (float)(CONCAT17((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                                      CONCAT16((byte)((uint)fVar63 >> 0x10) &
                                               ~(byte)((uint)iVar66 >> 0x10),
                                               CONCAT15((byte)((uint)fVar63 >> 8) &
                                                        ~(byte)((uint)iVar66 >> 8),
                                                        CONCAT14(SUB41(fVar63,0) & ~(byte)iVar66,
                                                                 fVar42)))) >> 0x20);
            fVar42 = auVar48._0_4_ * fVar42;
            fVar46 = fVar58 * fVar68;
            fVar50 = fVar69 * fVar71;
            fVar51 = fVar42 * fVar72;
            fVar47 = fVar46 + fVar50 + fVar51;
            fVar52 = -fVar47;
            fVar68 = fVar68 + fVar58 * fVar52;
            fVar71 = fVar71 + fVar69 * -(fVar46 + fVar50 + fVar51);
            fVar72 = fVar72 + fVar42 * fVar52;
            fVar68 = fVar68 * fVar68;
            fVar71 = fVar71 * fVar71;
            fVar72 = fVar72 * fVar72;
            fVar46 = fVar41 - (fVar68 + fVar71 + fVar72);
            uVar56 = CONCAT44(fVar41 - (fVar68 + fVar71 + fVar72),fVar46);
            if (fVar46 < 0.0) goto LAB_001b3540;
            fVar55 = fVar55 - auVar54._0_4_;
            fVar43 = fVar43 - auVar54._4_4_;
            fVar44 = fVar44 - auVar54._8_4_;
            auVar45 = NEON_ext(auVar54,auVar54,8,1);
            fVar51 = auVar45._4_4_ * auVar45._4_4_;
            fVar41 = fVar58 * fVar55;
            fVar60 = fVar69 * fVar43;
            fVar63 = fVar42 * fVar44;
            fVar68 = fVar63 + fVar41 + fVar60;
            fVar50 = -fVar68;
            fVar55 = fVar55 + fVar58 * fVar50;
            fVar43 = fVar43 + fVar69 * -(fVar63 + fVar41 + fVar60);
            fVar44 = fVar44 + fVar42 * fVar50;
            fVar55 = fVar55 * fVar55;
            fVar43 = fVar43 * fVar43;
            fVar44 = fVar44 * fVar44;
            fVar41 = fVar51 - (fVar55 + fVar43 + fVar44);
            uVar61 = CONCAT44(fVar51 - (fVar55 + fVar43 + fVar44),fVar41);
            if (fVar41 < 0.0) goto LAB_001b3540;
            uVar65 = NEON_frsqrte(uVar56,4);
            fVar42 = (float)uVar65;
            fVar51 = (float)((ulong)uVar65 >> 0x20);
            uVar65 = NEON_frsqrts(uVar56,CONCAT44(fVar51 * fVar51,fVar42 * fVar42),4);
            fVar42 = fVar42 * (float)uVar65;
            fVar51 = fVar51 * (float)((ulong)uVar65 >> 0x20);
            uVar56 = NEON_frsqrts(uVar56,CONCAT44(fVar51 * fVar51,fVar42 * fVar42),4);
            iVar64 = -(uint)(fVar46 <= 0.0);
            fVar46 = fVar46 * (float)uVar56 * fVar42;
            fVar42 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                                     CONCAT12((byte)((uint)fVar46 >> 0x10) &
                                              ~(byte)((uint)iVar64 >> 0x10),
                                              CONCAT11((byte)((uint)fVar46 >> 8) &
                                                       ~(byte)((uint)iVar64 >> 8),
                                                       SUB41(fVar46,0) & ~(byte)iVar64)));
            uVar56 = NEON_frsqrte(uVar61,4);
            fVar47 = fVar42 - fVar47;
            fVar46 = (float)uVar56;
            fVar51 = (float)((ulong)uVar56 >> 0x20);
            uVar56 = NEON_frsqrts(uVar61,CONCAT44(fVar51 * fVar51,fVar46 * fVar46),4);
            fVar46 = fVar46 * (float)uVar56;
            fVar51 = fVar51 * (float)((ulong)uVar56 >> 0x20);
            uVar56 = NEON_frsqrts(uVar61,CONCAT44(fVar51 * fVar51,fVar46 * fVar46),4);
            iVar64 = -(uint)(fVar41 <= 0.0);
            fVar41 = fVar41 * (float)uVar56 * fVar46;
            fVar41 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                                     CONCAT12((byte)((uint)fVar41 >> 0x10) &
                                              ~(byte)((uint)iVar64 >> 0x10),
                                              CONCAT11((byte)((uint)fVar41 >> 8) &
                                                       ~(byte)((uint)iVar64 >> 8),
                                                       SUB41(fVar41,0) & ~(byte)iVar64)));
            fVar50 = fVar50 - fVar41;
            bVar8 = false;
            bVar9 = true;
            if (fVar52 - fVar42 <= fVar41 - fVar68) {
              bVar8 = false;
              bVar9 = true;
              if (!NAN(fVar50) && !NAN(fVar47)) {
                bVar8 = fVar50 == fVar47;
                bVar9 = fVar47 <= fVar50;
              }
            }
            if (bVar9 && !bVar8) goto LAB_001b3540;
            *piVar34 = (int)local_80;
            uVar1 = (int)local_80 + 1;
            if ((int)local_80 < (int)(local_80._4_4_ & 0x3fffffff)) {
              iVar64 = (int)local_80;
            }
            else {
              if (0x3ffffffe < (int)local_80) {
                FUN_032bd0a8(uVar1);
              }
              uVar16 = (local_80._4_4_ & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar16) {
                uVar16 = 0x3fffffff;
              }
              uVar3 = uVar1;
              if ((int)uVar1 <= (int)uVar16) {
                uVar3 = uVar16;
              }
              local_88 = FUN_032bd1d4(uVar33,uVar3,0x10,lVar27,uVar18 & 0xffffffff,
                                      (long)&local_80 + 4);
              iVar64 = (int)local_80;
            }
            local_80 = CONCAT44(local_80._4_4_,uVar1);
            auVar45 = *(undefined1 (*) [16])(param_2 + uVar36 * 4);
            auVar53 = *pauVar40;
            auVar54 = NEON_ext(auVar53,auVar53,8,1);
            auVar49 = NEON_ext(auVar45,auVar45,8,1);
            uVar61 = NEON_ext(auVar53._0_8_,auVar54._0_8_,4,1);
            uVar56 = NEON_ext(auVar45._0_8_,auVar49._0_8_,4,1);
            auVar49._0_8_ =
                 CONCAT44(auVar45._4_4_ * (float)((ulong)uVar61 >> 0x20) -
                          auVar53._4_4_ * (float)((ulong)uVar56 >> 0x20),
                          auVar45._0_4_ * (float)uVar61 - auVar53._0_4_ * (float)uVar56);
            auVar49._8_4_ = auVar45._8_4_ * auVar53._0_4_ - auVar53._8_4_ * auVar45._0_4_;
            auVar49._12_4_ = auVar45._12_4_ * auVar53._4_4_ - auVar53._12_4_ * auVar45._4_4_;
            auVar45 = NEON_ext(auVar49,auVar49,4,1);
            puVar20 = (undefined8 *)(local_88 + (long)iVar64 * 0x10);
            puVar20[1] = auVar49._0_8_;
            *puVar20 = auVar45._0_8_;
          }
          uVar38 = uVar38 - 1;
          pauVar30 = pauVar30 + 1;
          pauVar40 = pauVar40 + 1;
          piVar34 = piVar34 + 1;
          iVar31 = iVar31 + 1;
        } while (uVar12 != uVar38);
      }
    }
  }
  uVar12 = local_a0;
  uVar1 = (int)local_80 * 3;
  uVar67 = *(undefined8 *)PTR_PTR_04372408;
  if ((int)(local_a0._4_4_ & 0x3fffffff) < (int)uVar1) {
    if (0x3fffffff < (int)uVar1) {
      FUN_032bd0a8(uVar1);
    }
    uVar16 = (local_a0._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar16) {
      uVar16 = 0x3fffffff;
    }
    if ((int)uVar1 <= (int)uVar16) {
      uVar1 = uVar16;
    }
    local_a8 = FUN_032bd1d4(uVar67,uVar1,0x10,local_a8,uVar12 & 0xffffffff,(long)&local_a0 + 4);
  }
  if ((int)param_4 < 1) {
    bVar8 = false;
  }
  else {
    iVar64 = param_4 * 2 + -3;
    lVar37 = (long)(int)param_4;
    lVar27 = 0x200000000;
    iVar66 = -2;
    fVar41 = *(float *)(PTR_DAT_04372370 + 0x260);
    bVar8 = false;
    iVar31 = 2;
    local_130 = 1;
    lVar29 = 0x100000000;
    uVar12 = 0;
    pfVar26 = param_2;
    do {
      pfVar26 = pfVar26 + 4;
      iVar39 = (int)uVar12;
      iVar4 = (iVar64 - iVar39) * iVar39;
      uVar28 = uVar12 + 1;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      if ((long)uVar28 < lVar37) {
        iVar4 = iVar4 >> 1;
        lVar13 = (long)iVar31;
        iVar39 = *(int *)(lVar17 + (long)(iVar4 + iVar39) * 4);
        uVar36 = uVar12;
        iVar6 = iVar66;
        lVar2 = local_130;
        do {
          if (-1 < iVar39) {
            iVar5 = (iVar64 - (int)lVar2) * (int)lVar2;
            if (iVar5 < 0) {
              iVar5 = iVar5 + 1;
            }
            if ((long)(uVar36 + 2) < lVar37) {
              lVar32 = lVar13;
              iVar35 = iVar6;
LAB_001b3824:
              uVar38 = local_a0;
              iVar21 = (int)lVar32 + -1;
              uVar1 = *(uint *)(lVar17 + (long)(iVar21 + (iVar5 >> 1)) * 4);
              uVar16 = *(uint *)(lVar17 + (long)(iVar21 + iVar4) * 4);
              if (-1 < (int)(uVar16 | uVar1)) {
                auVar45 = *(undefined1 (*) [16])(local_88 + (long)iVar39 * 0x10);
                auVar53 = *(undefined1 (*) [16])(param_2 + lVar32 * 4);
                fVar46 = auVar45._0_4_ * auVar53._0_4_;
                fVar50 = auVar45._4_4_ * auVar53._4_4_;
                fVar51 = auVar45._8_4_ * auVar53._8_4_;
                fVar42 = auVar53._12_4_;
                fVar47 = fVar46 + fVar50 + fVar51;
                uVar56 = CONCAT44(fVar46 + fVar50 + fVar51,fVar47);
                if (fVar41 < ABS(fVar47)) {
                  pfVar23 = (float *)(local_88 + (long)(int)uVar16 * 0x10);
                  puVar20 = (undefined8 *)(local_88 + (long)(int)uVar1 * 0x10);
                  uVar57 = puVar20[1];
                  uVar61 = *puVar20;
                  fVar46 = param_2[uVar12 * 4 + 3];
                  uVar65 = NEON_frecpe(uVar56,4);
                  fVar58 = (float)((ulong)*(undefined8 *)(param_2 + lVar2 * 4 + 2) >> 0x20);
                  uVar62 = NEON_frecps(uVar56,uVar65,4);
                  fVar47 = (float)uVar65 * (float)uVar62;
                  fVar50 = (float)((ulong)uVar65 >> 0x20) * (float)((ulong)uVar62 >> 0x20);
                  uVar56 = NEON_frecps(uVar56,CONCAT44(fVar50,fVar47),4);
                  fVar47 = -(fVar47 * (float)uVar56);
                  fVar50 = -(fVar50 * (float)((ulong)uVar56 >> 0x20));
                  fVar51 = fVar47 * (auVar45._0_4_ * fVar42 +
                                    (float)uVar61 * fVar46 + -*pfVar23 * fVar58);
                  fVar52 = fVar50 * (auVar45._4_4_ * fVar42 +
                                    (float)((ulong)uVar61 >> 0x20) * fVar46 + -pfVar23[1] * fVar58);
                  auVar53._0_8_ = CONCAT44(fVar52,fVar51);
                  auVar53._8_4_ =
                       fVar47 * (auVar45._8_4_ * fVar42 +
                                (float)uVar57 * fVar46 + -pfVar23[2] * fVar58);
                  auVar53._12_4_ =
                       fVar50 * (auVar45._12_4_ * fVar42 +
                                (float)((ulong)uVar57 >> 0x20) * fVar46 + pfVar23[3] * fVar58);
                  if (uVar12 != 0) {
                    uVar18 = 0;
                    do {
                      pfVar23 = param_2 + uVar18 * 4;
                      auVar45._0_4_ = fVar51 * *pfVar23;
                      auVar45._4_4_ = fVar52 * pfVar23[1];
                      auVar45._8_4_ = auVar53._8_4_ * pfVar23[2];
                      auVar45._12_4_ = auVar53._12_4_ * pfVar23[3];
                      auVar49 = NEON_ext(auVar45,auVar45,8,1);
                      if (1e-05 < auVar45._0_4_ + auVar45._4_4_ + auVar49._0_4_ + pfVar23[3])
                      goto LAB_001b380c;
                      uVar18 = uVar18 + 1;
                    } while (uVar12 != uVar18);
                  }
                  lVar19 = lVar29;
                  lVar22 = lVar27;
                  pfVar23 = pfVar26;
                  do {
                    if ((long)uVar36 < lVar19 >> 0x20) {
                      lVar19 = lVar22 >> 0x20;
                      if (lVar32 <= lVar19) goto LAB_001b397c;
                      pfVar23 = param_2 + lVar19 * 4;
                      iVar21 = iVar35 + (int)((ulong)lVar22 >> 0x20);
                      goto LAB_001b394c;
                    }
                    pfVar7 = pfVar23 + 3;
                    lVar22 = lVar22 + 0x100000000;
                    auVar70._0_4_ = fVar51 * *pfVar23;
                    auVar70._4_4_ = fVar52 * pfVar23[1];
                    auVar70._8_4_ = auVar53._8_4_ * pfVar23[2];
                    auVar70._12_4_ = auVar53._12_4_ * *pfVar7;
                    auVar45 = NEON_ext(auVar70,auVar70,8,1);
                    lVar19 = lVar19 + 0x100000000;
                    pfVar23 = pfVar23 + 4;
                  } while (auVar70._0_4_ + auVar70._4_4_ + auVar45._0_4_ + *pfVar7 <= 1e-05);
                }
                goto LAB_001b380c;
              }
              goto LAB_001b3814;
            }
          }
LAB_001b37bc:
          uVar36 = uVar36 + 1;
          lVar2 = lVar2 + 1;
          lVar13 = lVar13 + 1;
          iVar6 = iVar6 + -1;
          if (uVar36 == param_4 - 1) break;
          iVar39 = *(int *)(lVar17 + (long)(iVar4 + (int)uVar36) * 4);
        } while( true );
      }
      local_130 = local_130 + 1;
      iVar31 = iVar31 + 1;
      lVar27 = lVar27 + 0x100000000;
      lVar29 = lVar29 + 0x100000000;
      iVar66 = iVar66 + -1;
      uVar12 = uVar28;
    } while (uVar28 != param_4);
  }
  uVar12 = local_80;
  uVar1 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < (long)uVar12) && (local_88 != 0)) {
    FUN_032cf244(uVar33,local_88,0x10,uVar1 & 0x3fffffff);
  }
  if ((lVar17 != 0) && (-1 < (int)uVar15)) {
    FUN_032cf244(uVar33,lVar17,4,uVar15 & 0x3fffffff);
  }
  if (bVar8) {
    if (3 < (int)local_a0) {
      puVar20 = *(undefined8 **)(param_1 + 0x18);
      uVar33 = *param_5;
      *(undefined8 *)((long)puVar20 + 7) = *(undefined8 *)((long)param_5 + 7);
      *puVar20 = uVar33;
      uVar33 = param_5[2];
      puVar20[3] = param_5[3];
      puVar20[2] = uVar33;
      auVar45 = *(undefined1 (*) [16])(param_5 + 4);
      puVar20[5] = auVar45._8_8_;
      puVar20[4] = auVar45._0_8_;
      uVar10 = FUN_001c3964(*(undefined8 *)(param_1 + 0x18),local_a8,local_a0 & 0xffffffff,0,0);
      lVar17 = local_98;
      iVar31 = local_90;
      goto joined_r0x001b3b70;
    }
  }
  uVar10 = 0xffffffff;
  lVar17 = local_98;
  iVar31 = local_90;
joined_r0x001b3b70:
  if (lVar17 == local_a8) {
    local_a0 = local_a0 & 0xffffffff00000000;
    lVar27 = *(long *)(lVar11 + 0x38d490);
  }
  else {
    lVar27 = *(long *)(lVar11 + 0x38d490);
  }
  local_98 = lVar17;
  local_90 = iVar31;
  if (lVar27 == 0) {
    lVar27 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar27;
  }
  lVar11 = *(long *)(lVar27 + 8);
  uVar12 = (ulong)(int)(iVar31 * 0x10 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar11 + 0x10) < uVar12) || (*(long *)(lVar11 + 0x18) != uVar12 + lVar17)) ||
     (*(long *)(lVar11 + 0x28) == lVar17)) {
    FUN_032cedf0(lVar11,lVar17);
    uVar15 = local_a0._4_4_;
  }
  else {
    *(long *)(lVar11 + 0x18) = lVar17;
    uVar15 = local_a0._4_4_;
  }
  if ((-1 < (long)local_a0) && (local_a0 = (ulong)uVar15 << 0x20, local_a8 != 0)) {
    FUN_032cf244(uVar67,local_a8,0x10,uVar15 & 0x3fffffff);
  }
  return uVar10;
  while( true ) {
    bVar9 = iVar21 == -1;
    iVar21 = iVar21 + 1;
    pfVar23 = pfVar23 + 4;
    if (bVar9) break;
LAB_001b394c:
    auVar54._0_4_ = fVar51 * *pfVar23;
    auVar54._4_4_ = fVar52 * pfVar23[1];
    auVar54._8_4_ = auVar53._8_4_ * pfVar23[2];
    auVar54._12_4_ = auVar53._12_4_ * pfVar23[3];
    auVar45 = NEON_ext(auVar54,auVar54,8,1);
    if (1e-05 < auVar54._0_4_ + auVar54._4_4_ + auVar45._0_4_ + pfVar23[3]) goto LAB_001b380c;
  }
LAB_001b397c:
  if (lVar19 <= lVar32) {
    lVar19 = lVar32;
  }
  do {
    lVar19 = lVar19 + 1;
    if (lVar37 <= lVar19) {
      uVar1 = (int)local_a0 + 1;
      if ((int)(local_a0._4_4_ & 0x3fffffff) <= (int)local_a0) {
        if (0x3ffffffe < (int)local_a0) {
          FUN_032bd0a8(uVar1);
        }
        uVar16 = (local_a0._4_4_ & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar16) {
          uVar16 = 0x3fffffff;
        }
        uVar3 = uVar1;
        if ((int)uVar1 <= (int)uVar16) {
          uVar3 = uVar16;
        }
        local_a8 = FUN_032bd1d4(uVar67,uVar3,0x10,local_a8,uVar38 & 0xffffffff,(long)&local_a0 + 4);
        auVar53._8_8_ = auVar53._8_8_;
      }
      bVar14 = 1;
      puVar20 = (undefined8 *)(local_a8 + (long)(int)local_a0 * 0x10);
      puVar20[1] = auVar53._8_8_;
      *puVar20 = auVar53._0_8_;
      local_a0 = CONCAT44(local_a0._4_4_,uVar1);
      goto LAB_001b3810;
    }
    pfVar23 = param_2 + lVar19 * 4;
    auVar59._0_4_ = fVar51 * *pfVar23;
    auVar59._4_4_ = fVar52 * pfVar23[1];
    auVar59._8_4_ = auVar53._8_4_ * pfVar23[2];
    auVar59._12_4_ = auVar53._12_4_ * pfVar23[3];
    auVar45 = NEON_ext(auVar59,auVar59,8,1);
  } while (auVar59._0_4_ + auVar59._4_4_ + auVar45._0_4_ + pfVar23[3] <= 1e-05);
LAB_001b380c:
  bVar14 = 0;
LAB_001b3810:
  bVar8 = (bool)(bVar8 | bVar14);
LAB_001b3814:
  lVar32 = lVar32 + 1;
  iVar35 = iVar35 + -1;
  if ((uint)lVar32 == param_4) goto LAB_001b37bc;
  goto LAB_001b3824;
}


