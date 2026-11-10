/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03197e2c; name: FUN_03197e2c
 */


void FUN_03197e2c(long param_1,ulong param_2,undefined1 (*param_3) [16],long *param_4,
                 undefined8 param_5,float *param_6,long *param_7)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined *puVar9;
  long lVar10;
  ulong *puVar11;
  undefined4 *puVar12;
  long lVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint *puVar19;
  ulong uVar20;
  int *piVar21;
  long lVar22;
  ulong uVar23;
  int iVar24;
  long lVar25;
  byte *pbVar26;
  long lVar27;
  long lVar28;
  float fVar29;
  float fVar34;
  float fVar35;
  undefined1 auVar30 [16];
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uVar37;
  float fVar43;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  int iVar44;
  undefined8 uVar46;
  int iVar53;
  int iVar54;
  undefined1 auVar48 [12];
  undefined8 uVar47;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  uint uVar45;
  undefined1 auVar49 [12];
  undefined1 auVar52 [16];
  float fVar55;
  int iVar56;
  float fVar57;
  undefined8 uVar58;
  undefined1 auVar59 [12];
  float fVar66;
  int iVar67;
  int iVar69;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar60 [12];
  float fVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar70;
  undefined8 uVar71;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined8 uVar72;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined8 uVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 uVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  undefined4 *local_98;
  undefined8 local_90;
  int local_88;
  long local_80;
  
  lVar13 = tpidr_el0;
  if (*(long *)(lVar13 + 0x38d490) == 0) {
    lVar25 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar25;
    lVar25 = *(long *)(lVar25 + 0x10);
  }
  else {
    lVar25 = *(long *)(*(long *)(lVar13 + 0x38d490) + 0x10);
  }
  if (lVar25 != 0) {
    puVar4 = *(undefined8 **)(lVar25 + 8);
    uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= *(ulong *)(lVar25 + 0x10)) &&
       (*(ulong *)(lVar25 + 8) = uVar16, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TtgetNearbyBoundariesFlood";
      uVar82 = nn::os::GetSystemTick();
      puVar4[1] = uVar82;
    }
  }
  local_80 = lVar25;
  if ((int)param_2 == -1) goto joined_r0x03198cfc;
  auVar51 = *param_3;
  auVar52 = param_3[1];
  auVar73._0_8_ =
       CONCAT44((auVar52._4_4_ - auVar51._4_4_) * 0.5,(auVar52._0_4_ - auVar51._0_4_) * 0.5);
  auVar73._8_4_ = (auVar52._8_4_ - auVar51._8_4_) * 0.5;
  auVar73._12_4_ = (auVar52._12_4_ - auVar51._12_4_) * 0.5;
  lVar17 = *(long *)(lVar13 + 0x38d490);
  if (lVar17 == 0) {
    lVar17 = FUN_0333d16c(0,1);
    auVar73._8_8_ = auVar73._8_8_;
    *(long *)(lVar13 + 0x38d490) = lVar17;
  }
  lVar10 = *(long *)(lVar17 + 8);
  fVar29 = auVar73._0_4_ * auVar73._0_4_;
  fVar34 = auVar73._4_4_ * auVar73._4_4_;
  auVar81._0_8_ = CONCAT44(fVar34,fVar29);
  auVar81._8_4_ = auVar73._8_4_ * auVar73._8_4_;
  auVar81._12_4_ = auVar73._12_4_ * auVar73._12_4_;
  if (*(ulong *)(lVar10 + 0x10) < 0x200) {
LAB_03197fc8:
    puVar11 = (ulong *)FUN_032ce670(lVar10,0x200);
    auVar8._8_8_ = auVar81._8_8_;
    auVar8._0_8_ = auVar81._0_8_;
    lVar17 = *(long *)(lVar13 + 0x38d490);
    auVar73 = NEON_ext(auVar8,auVar8,8,1);
    fVar70 = auVar73._0_4_;
  }
  else {
    puVar11 = *(ulong **)(lVar10 + 0x18);
    if (*(ulong **)(lVar10 + 0x20) < puVar11 + 0x40) goto LAB_03197fc8;
    *(ulong **)(lVar10 + 0x18) = puVar11 + 0x40;
    auVar73 = NEON_ext(auVar81,auVar81,8,1);
    fVar70 = auVar73._0_4_;
  }
  if (lVar17 == 0) {
    lVar17 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar17;
  }
  lVar17 = *(long *)(lVar17 + 8);
  auVar50._0_8_ = CONCAT44(auVar52._4_4_ + auVar51._4_4_,auVar52._0_4_ + auVar51._0_4_);
  auVar50._8_4_ = auVar52._8_4_ + auVar51._8_4_;
  auVar50._12_4_ = auVar52._12_4_ + auVar51._12_4_;
  if (*(ulong *)(lVar17 + 0x10) < 0x200) {
LAB_031980b0:
    puVar12 = (undefined4 *)FUN_032ce670(lVar17,0x200);
    auVar50._8_8_ = auVar50._8_8_;
  }
  else {
    puVar12 = *(undefined4 **)(lVar17 + 0x18);
    if (*(undefined4 **)(lVar17 + 0x20) < puVar12 + 0x80) goto LAB_031980b0;
    *(undefined4 **)(lVar17 + 0x18) = puVar12 + 0x80;
  }
  puVar9 = PTR_PTR_0434a080;
  local_90 = -0x7fffff7fffffff80;
  local_88 = 0;
  *puVar12 = 0xffffffff;
  lVar17 = 0;
  while( true ) {
    *(undefined4 *)((long)puVar12 + lVar17 + 4) = 0xffffffff;
    *(undefined4 *)((long)puVar12 + lVar17 + 8) = 0xffffffff;
    *(undefined4 *)((long)puVar12 + lVar17 + 0xc) = 0xffffffff;
    if (lVar17 == 0x1f0) break;
    *(undefined4 *)((long)puVar12 + lVar17 + 0x10) = 0xffffffff;
    lVar17 = lVar17 + 0x10;
  }
  uVar82 = NEON_fmov(0x3f800000,4);
  uVar16 = 1;
  *puVar11 = param_2 | 0xffffffff00000000;
  local_98 = puVar12;
LAB_03198230:
  do {
    uVar16 = (long)(int)uVar16 - 1;
    uVar45 = (uint)puVar11[uVar16];
    uVar20 = (ulong)uVar45;
    uVar3 = *(uint *)((long)(puVar11 + uVar16) + 4);
    if (0 < (int)((int)local_90 - 1U)) {
      uVar18 = (uVar45 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar45 * -0x61c8864f & 0xff00ff) << 8;
      uVar18 = uVar18 >> 0x10 | uVar18 << 0x10;
      while( true ) {
        uVar18 = (int)local_90 - 1U & uVar18;
        if (local_98[(int)uVar18] == 0xffffffff) break;
        if (local_98[(int)uVar18] == uVar45) {
          if ((int)uVar18 < (int)local_90) goto LAB_0319822c;
          break;
        }
        uVar18 = uVar18 + 1;
      }
    }
    if ((int)local_90 <= local_88 * 2) break;
    lVar10 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar45 >> 0x16) * 0xf0);
    lVar17 = *(long *)(lVar10 + 0x20);
    iVar44 = *(int *)(lVar17 + 0x50);
    uVar23 = uVar20 & 0x3fffff;
    iVar53 = (int)uVar23;
    iVar24 = iVar53 - *(int *)(lVar17 + 0x20);
    if (iVar53 < *(int *)(lVar17 + 0x20)) {
      if (*(int *)(lVar17 + 0x98) == 0) {
        iVar24 = iVar53;
LAB_031982d4:
        lVar15 = *(long *)(lVar17 + 0x120) + (long)(iVar24 * iVar44) * 4;
        lVar17 = *(long *)(lVar17 + 0xb0);
        goto LAB_031982f8;
      }
      iVar24 = *(int *)(*(long *)(lVar17 + 0x90) + uVar23 * 4);
      if (iVar24 != -1) goto LAB_031982d4;
      lVar15 = *(long *)(lVar17 + 0x48) + (long)(iVar44 * iVar53) * 4;
      piVar21 = (int *)(*(long *)(lVar17 + 0x18) + uVar23 * 0x10);
      lVar17 = lVar15 + (long)iVar44 * 4;
      if (param_4 != (long *)0x0) goto LAB_031987fc;
LAB_03198304:
      if ((int)local_90 <= local_88 * 2) {
LAB_03198880:
        FUN_03199d54(&local_98,(int)local_90 << 1);
      }
LAB_0319830c:
      uVar18 = (uVar45 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar45 * -0x61c8864f & 0xff00ff) << 8;
      uVar18 = (int)local_90 - 1U & (uVar18 >> 0x10 | uVar18 << 0x10);
      puVar19 = local_98 + (int)uVar18;
      if (*puVar19 == 0xffffffff) {
        iVar24 = 1;
      }
      else if (*puVar19 == uVar45) {
        iVar24 = 0;
      }
      else {
        do {
          uVar18 = uVar18 + 1 & (int)local_90 - 1U;
          if (local_98[(int)uVar18] == 0xffffffff) {
            iVar24 = 1;
            goto LAB_031983ac;
          }
        } while (local_98[(int)uVar18] != uVar45);
        iVar24 = 0;
LAB_031983ac:
        puVar19 = local_98 + (int)uVar18;
      }
      local_88 = local_88 + iVar24;
      *puVar19 = uVar45;
      if (0 < (short)piVar21[2]) {
        iVar24 = 0;
        do {
          lVar17 = *(long *)(lVar10 + 0x20);
          uVar45 = *piVar21 + iVar24;
          iVar44 = *(int *)(lVar17 + 0x30);
          iVar53 = *(int *)(lVar17 + 0x60);
          uVar18 = uVar45 - iVar44;
          if ((int)uVar45 < iVar44) {
            lVar28 = *(long *)(lVar17 + 0x28);
            uVar18 = uVar45;
            if (*(int *)(lVar17 + 0x78) != 0) {
              uVar18 = *(uint *)(*(long *)(lVar17 + 0x70) + (long)(int)uVar45 * 4);
            }
            if (uVar18 == 0xffffffff) {
              lVar15 = *(long *)(lVar17 + 0x58) + (long)(int)(iVar53 * uVar45) * 4;
              uVar18 = uVar45;
            }
            else {
              lVar15 = *(long *)(lVar17 + 0x130) + (long)(int)(uVar18 * iVar53) * 4;
              lVar28 = *(long *)(lVar17 + 0xc0);
            }
          }
          else {
            lVar28 = *(long *)(lVar17 + 0xe0);
            lVar15 = *(long *)(lVar17 + 0x150) + (long)(iVar53 * ((iVar24 + *piVar21) - iVar44)) * 4
            ;
          }
          lVar27 = (long)(int)uVar18;
          if (uVar3 == 0xffffffff) {
LAB_03198474:
            piVar14 = (int *)(lVar28 + (long)(int)uVar18 * 0x14);
            iVar44 = *(int *)(lVar17 + 0x40);
            iVar54 = *piVar14;
            auVar51 = *(undefined1 (*) [16])(lVar10 + 0x70);
            plVar2 = (long *)(lVar17 + 0x38);
            if (iVar44 <= iVar54) {
              plVar2 = (long *)(lVar17 + 0xf0);
            }
            iVar56 = 0;
            if (iVar44 <= iVar54) {
              iVar56 = iVar44;
            }
            pfVar7 = (float *)(*plVar2 + (long)(iVar54 - iVar56) * 0x10);
            fVar86 = *pfVar7;
            fVar87 = pfVar7[1];
            fVar88 = pfVar7[2];
            iVar54 = *(int *)(lVar28 + lVar27 * 0x14 + 4);
            plVar2 = (long *)(lVar17 + 0x38);
            if (iVar44 <= iVar54) {
              plVar2 = (long *)(lVar17 + 0xf0);
            }
            iVar56 = 0;
            if (iVar44 <= iVar54) {
              iVar56 = iVar44;
            }
            auVar52 = *(undefined1 (*) [16])(lVar10 + 0x80);
            auVar73 = *(undefined1 (*) [16])(lVar10 + 0x90);
            pfVar7 = (float *)(*plVar2 + (long)(iVar54 - iVar56) * 0x10);
            fVar90 = *pfVar7;
            fVar94 = pfVar7[1];
            fVar95 = pfVar7[2];
            fVar83 = auVar73._0_4_ +
                     auVar52._0_4_ * fVar88 +
                     *(float *)(lVar10 + 0x60) * fVar86 + auVar51._0_4_ * fVar87;
            fVar84 = auVar73._4_4_ +
                     auVar52._4_4_ * fVar88 +
                     *(float *)(lVar10 + 100) * fVar86 + auVar51._4_4_ * fVar87;
            uVar72 = CONCAT44(fVar84,fVar83);
            fVar85 = auVar73._8_4_ +
                     auVar52._8_4_ * fVar88 +
                     *(float *)(lVar10 + 0x68) * fVar86 + auVar51._8_4_ * fVar87;
            fVar86 = auVar73._12_4_ +
                     auVar52._12_4_ * fVar88 +
                     *(float *)(lVar10 + 0x6c) * fVar86 + auVar51._12_4_ * fVar87;
            uVar78 = CONCAT44(fVar86,fVar85);
            fVar87 = auVar73._0_4_ +
                     auVar52._0_4_ * fVar95 +
                     *(float *)(lVar10 + 0x60) * fVar90 + auVar51._0_4_ * fVar94;
            fVar88 = auVar73._4_4_ +
                     auVar52._4_4_ * fVar95 +
                     *(float *)(lVar10 + 100) * fVar90 + auVar51._4_4_ * fVar94;
            uVar37 = CONCAT44(fVar88,fVar87);
            fVar89 = auVar73._8_4_ +
                     auVar52._8_4_ * fVar95 +
                     *(float *)(lVar10 + 0x68) * fVar90 + auVar51._8_4_ * fVar94;
            fVar90 = auVar73._12_4_ +
                     auVar52._12_4_ * fVar95 +
                     *(float *)(lVar10 + 0x6c) * fVar90 + auVar51._12_4_ * fVar94;
            uVar47 = CONCAT44(fVar90,fVar89);
            auVar30._0_4_ = fVar83 - auVar50._0_4_ * 0.5;
            auVar30._4_4_ = fVar84 - auVar50._4_4_ * 0.5;
            auVar30._8_4_ = fVar85 - auVar50._8_4_ * 0.5;
            auVar30._12_4_ = fVar86 - auVar50._12_4_ * 0.5;
            auVar73 = NEON_ext(auVar30,auVar30,4,1);
            fVar94 = fVar87 - fVar83;
            fVar95 = fVar88 - fVar84;
            fVar96 = fVar89 - fVar85;
            fVar97 = fVar90 - fVar86;
            auVar51._4_4_ = fVar95;
            auVar51._0_4_ = fVar94;
            auVar51._8_4_ = fVar96;
            auVar51._12_4_ = fVar97;
            auVar52._4_4_ = fVar95;
            auVar52._0_4_ = fVar94;
            auVar52._8_4_ = fVar96;
            auVar52._12_4_ = fVar97;
            auVar51 = NEON_ext(auVar51,auVar52,4,1);
            auVar38._0_4_ = auVar30._0_4_ * auVar51._0_4_ - fVar94 * auVar73._0_4_;
            auVar38._4_4_ = auVar30._4_4_ * auVar51._4_4_ - fVar95 * auVar73._4_4_;
            auVar38._8_4_ = auVar30._8_4_ * fVar94 - fVar96 * auVar30._0_4_;
            auVar38._12_4_ = auVar30._12_4_ * fVar95 - fVar97 * auVar30._4_4_;
            auVar51 = NEON_ext(auVar38,auVar38,4,1);
            auVar39._0_4_ = *param_6 * auVar51._0_4_;
            auVar39._4_4_ = param_6[1] * auVar51._4_4_;
            auVar39._8_4_ = param_6[2] * auVar38._0_4_;
            auVar39._12_4_ = param_6[3] * auVar38._4_4_;
            auVar51 = NEON_ext(auVar39,auVar39,8,1);
            if (0.0 <= auVar39._0_4_ + auVar39._4_4_ + auVar51._0_4_) {
              fVar91 = fVar83 - fVar87;
              fVar92 = fVar84 - fVar88;
              fVar93 = fVar85 - fVar89;
              uVar46 = CONCAT44(fVar93 * fVar93 + fVar91 * fVar91 + fVar92 * fVar92,
                                fVar93 * fVar93 + fVar91 * fVar91 + fVar92 * fVar92);
              uVar58 = NEON_frecpe(uVar46,4);
              uVar71 = NEON_frecps(uVar46,uVar58,4);
              fVar55 = (float)uVar58 * (float)uVar71;
              fVar66 = (float)((ulong)uVar58 >> 0x20) * (float)((ulong)uVar71 >> 0x20);
              uVar46 = NEON_frecps(uVar46,CONCAT44(fVar66,fVar55),4);
              uVar46 = NEON_fminnm(CONCAT44((auVar30._8_4_ * fVar93 +
                                            auVar30._0_4_ * fVar91 + auVar30._4_4_ * fVar92) *
                                            fVar66 * (float)((ulong)uVar46 >> 0x20),
                                            (auVar30._8_4_ * fVar93 +
                                            auVar30._0_4_ * fVar91 + auVar30._4_4_ * fVar92) *
                                            fVar55 * (float)uVar46),uVar82,4);
              uVar46 = NEON_fmax(uVar46,0,4);
              fVar36 = (float)((ulong)uVar46 >> 0x20);
              fVar55 = auVar30._0_4_ - fVar91 * (float)uVar46;
              fVar66 = auVar30._4_4_ - fVar92 * fVar36;
              fVar35 = auVar30._8_4_ - fVar93 * (float)uVar46;
              fVar36 = auVar30._12_4_ - (fVar86 - fVar90) * fVar36;
              auVar31._0_4_ = fVar55 * fVar55;
              auVar31._4_4_ = fVar66 * fVar66;
              auVar31._8_4_ = fVar35 * fVar35;
              auVar31._12_4_ = fVar36 * fVar36;
              auVar51 = NEON_ext(auVar31,auVar31,8,1);
              if (auVar31._0_4_ + auVar31._4_4_ + auVar51._0_4_ < fVar29 + fVar34 + fVar70) {
                if (*(int *)(lVar28 + lVar27 * 0x14 + 8) == -1) {
LAB_0319862c:
                  auVar51 = *param_3;
                  auVar52 = param_3[1];
                  fVar36 = auVar52._0_4_;
                  iVar56 = -(uint)(fVar83 <= fVar36);
                  fVar42 = auVar52._4_4_;
                  iVar67 = -(uint)(fVar84 <= fVar42);
                  fVar43 = auVar52._8_4_;
                  iVar69 = -(uint)(fVar85 <= fVar43);
                  fVar55 = auVar51._0_4_;
                  iVar44 = -(uint)(fVar55 <= fVar83);
                  fVar66 = auVar51._4_4_;
                  iVar53 = -(uint)(fVar66 <= fVar84);
                  fVar35 = auVar51._8_4_;
                  iVar54 = -(uint)(fVar35 <= fVar85);
                  uVar45 = CONCAT13((byte)((uint)iVar56 >> 0x18) & (byte)((uint)iVar44 >> 0x18),
                                    CONCAT12((byte)((uint)iVar56 >> 0x10) &
                                             (byte)((uint)iVar44 >> 0x10),
                                             CONCAT11((byte)((uint)iVar56 >> 8) &
                                                      (byte)((uint)iVar44 >> 8),
                                                      (byte)iVar56 & (byte)iVar44)));
                  auVar48._0_8_ =
                       CONCAT17((byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar53 >> 0x18),
                                CONCAT16((byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar53 >> 0x10)
                                         ,CONCAT15((byte)((uint)iVar67 >> 8) &
                                                   (byte)((uint)iVar53 >> 8),
                                                   CONCAT14((byte)iVar67 & (byte)iVar53,uVar45))));
                  auVar48[8] = (byte)iVar69 & (byte)iVar54;
                  auVar48[9] = (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar54 >> 8);
                  auVar48[10] = (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar54 >> 0x10);
                  auVar48[0xb] = (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar54 >> 0x18);
                  iVar56 = -(uint)(fVar55 <= fVar87);
                  iVar67 = -(uint)(fVar66 <= fVar88);
                  iVar69 = -(uint)(fVar35 <= fVar89);
                  uVar45 = uVar45 & (uint)((ulong)auVar48._0_8_ >> 0x20) & auVar48._8_4_;
                  iVar44 = -(uint)(fVar87 <= fVar36);
                  iVar53 = -(uint)(fVar88 <= fVar42);
                  iVar54 = -(uint)(fVar89 <= fVar43);
                  uVar18 = CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar56 >> 0x18),
                                    CONCAT12((byte)((uint)iVar44 >> 0x10) &
                                             (byte)((uint)iVar56 >> 0x10),
                                             CONCAT11((byte)((uint)iVar44 >> 8) &
                                                      (byte)((uint)iVar56 >> 8),
                                                      (byte)iVar44 & (byte)iVar56)));
                  auVar49._0_8_ =
                       CONCAT17((byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar67 >> 0x18),
                                CONCAT16((byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar67 >> 0x10)
                                         ,CONCAT15((byte)((uint)iVar53 >> 8) &
                                                   (byte)((uint)iVar67 >> 8),
                                                   CONCAT14((byte)iVar53 & (byte)iVar67,uVar18))));
                  auVar49[8] = (byte)iVar54 & (byte)iVar69;
                  auVar49[9] = (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar69 >> 8);
                  auVar49[10] = (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar69 >> 0x10);
                  auVar49[0xb] = (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar69 >> 0x18);
                  uVar18 = uVar18 & (uint)((ulong)auVar49._0_8_ >> 0x20) & auVar49._8_4_;
                  if (uVar45 == 0 || uVar18 == 0) {
                    auVar77._8_4_ = 0x7f7fffee;
                    auVar77._0_8_ = 0x7f7fffee7f7fffee;
                    auVar77._12_4_ = 0x7f7fffee;
                    if (uVar45 == 0) {
                      iVar44 = -(uint)(fVar94 == 0.0);
                      iVar53 = -(uint)(fVar95 == 0.0);
                      iVar54 = -(uint)(fVar96 == 0.0);
                      fVar57 = (float)CONCAT13((byte)((uint)fVar94 >> 0x18) &
                                               ~(byte)((uint)iVar44 >> 0x18),
                                               CONCAT12((byte)((uint)fVar94 >> 0x10) &
                                                        ~(byte)((uint)iVar44 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar94 >> 8) &
                                                                 ~(byte)((uint)iVar44 >> 8),
                                                                 SUB41(fVar94,0) & ~(byte)iVar44)));
                      auVar59._0_8_ =
                           CONCAT17((byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                                    CONCAT16((byte)((uint)fVar95 >> 0x10) &
                                             ~(byte)((uint)iVar53 >> 0x10),
                                             CONCAT15((byte)((uint)fVar95 >> 8) &
                                                      ~(byte)((uint)iVar53 >> 8),
                                                      CONCAT14(SUB41(fVar95,0) & ~(byte)iVar53,
                                                               fVar57))));
                      auVar59[8] = SUB41(fVar96,0) & ~(byte)iVar54;
                      auVar59[9] = (byte)((uint)fVar96 >> 8) & ~(byte)((uint)iVar54 >> 8);
                      auVar59[10] = (byte)((uint)fVar96 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
                      auVar59[0xb] = (byte)((uint)fVar96 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
                      auVar61._12_2_ = 0;
                      auVar61._0_12_ = auVar59;
                      auVar61[0xe] = 0x80;
                      auVar61[0xf] = 0x3f;
                      auVar73 = NEON_frecpe(auVar61,4);
                      iVar44 = -(uint)(fVar57 == 0.0);
                      iVar53 = -(uint)((float)((ulong)auVar59._0_8_ >> 0x20) == 0.0);
                      iVar54 = -(uint)(auVar59._8_4_ == 0.0);
                      iVar56 = -(uint)(auVar61._12_4_ == 0.0);
                      auVar74[0] = ~(byte)iVar44;
                      auVar74[1] = ~(byte)((uint)iVar44 >> 8);
                      auVar74[2] = ~(byte)((uint)iVar44 >> 0x10);
                      auVar74[3] = ~(byte)((uint)iVar44 >> 0x18);
                      auVar74[4] = ~(byte)iVar53;
                      auVar74[5] = ~(byte)((uint)iVar53 >> 8);
                      auVar74[6] = ~(byte)((uint)iVar53 >> 0x10);
                      auVar74[7] = ~(byte)((uint)iVar53 >> 0x18);
                      auVar74[8] = ~(byte)iVar54;
                      auVar74[9] = ~(byte)((uint)iVar54 >> 8);
                      auVar74[10] = ~(byte)((uint)iVar54 >> 0x10);
                      auVar74[0xb] = ~(byte)((uint)iVar54 >> 0x18);
                      auVar74[0xc] = ~(byte)iVar56;
                      auVar74[0xd] = ~(byte)((uint)iVar56 >> 8);
                      auVar74[0xe] = ~(byte)((uint)iVar56 >> 0x10);
                      auVar74[0xf] = ~(byte)((uint)iVar56 >> 0x18);
                      auVar81 = NEON_frecps(auVar61,auVar73,4);
                      auVar79._0_4_ = auVar73._0_4_ * auVar81._0_4_;
                      auVar79._4_4_ = auVar73._4_4_ * auVar81._4_4_;
                      auVar79._8_4_ = auVar73._8_4_ * auVar81._8_4_;
                      auVar79._12_4_ = auVar73._12_4_ * auVar81._12_4_;
                      auVar73 = NEON_frecps(auVar61,auVar79,4);
                      auVar62._0_4_ = auVar79._0_4_ * auVar73._0_4_;
                      auVar62._4_4_ = auVar79._4_4_ * auVar73._4_4_;
                      auVar62._8_4_ = auVar79._8_4_ * auVar73._8_4_;
                      auVar62._12_4_ = auVar79._12_4_ * auVar73._12_4_;
                      auVar73 = auVar77 ^ (auVar77 ^ auVar62) & auVar74;
                      auVar63._0_4_ = (fVar55 - fVar83) * auVar73._0_4_;
                      auVar63._4_4_ = (fVar66 - fVar84) * auVar73._4_4_;
                      auVar63._8_4_ = (fVar35 - fVar85) * auVar73._8_4_;
                      auVar63._12_4_ = (auVar51._12_4_ - fVar86) * auVar73._12_4_;
                      auVar75._0_4_ = (fVar36 - fVar83) * auVar73._0_4_;
                      auVar75._4_4_ = (fVar42 - fVar84) * auVar73._4_4_;
                      auVar75._8_4_ = (fVar43 - fVar85) * auVar73._8_4_;
                      auVar75._12_4_ = (auVar52._12_4_ - fVar86) * auVar73._12_4_;
                      auVar81 = NEON_fmin(auVar63,auVar75,4);
                      auVar73 = NEON_fmax(auVar63,auVar75,4);
                      uVar72 = NEON_fmaxp(auVar81._0_8_,auVar81._0_8_,4);
                      uVar72 = NEON_fmax(CONCAT44(auVar81._8_4_,auVar81._8_4_),uVar72,4);
                      uVar78 = NEON_fminp(auVar73._0_8_,auVar73._0_8_,4);
                      uVar78 = NEON_fmin(CONCAT44(auVar73._8_4_,auVar73._8_4_),uVar78,4);
                      uVar72 = NEON_fmax(uVar72,0,4);
                      uVar78 = NEON_fmin(uVar78,uVar82,4);
                      fVar57 = (float)uVar72;
                      if ((float)uVar78 < fVar57) goto LAB_031983b8;
                      fVar68 = (float)((ulong)uVar72 >> 0x20);
                      uVar72 = CONCAT44(fVar84 + fVar95 * fVar68,fVar83 + fVar94 * fVar57);
                      uVar78 = CONCAT44(fVar86 + fVar97 * fVar68,fVar85 + fVar96 * fVar57);
                    }
                    if (uVar18 == 0) {
                      iVar44 = -(uint)(fVar91 == 0.0);
                      iVar53 = -(uint)(fVar92 == 0.0);
                      iVar54 = -(uint)(fVar93 == 0.0);
                      fVar94 = (float)CONCAT13((byte)((uint)fVar91 >> 0x18) &
                                               ~(byte)((uint)iVar44 >> 0x18),
                                               CONCAT12((byte)((uint)fVar91 >> 0x10) &
                                                        ~(byte)((uint)iVar44 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar91 >> 8) &
                                                                 ~(byte)((uint)iVar44 >> 8),
                                                                 SUB41(fVar91,0) & ~(byte)iVar44)));
                      auVar60._0_8_ =
                           CONCAT17((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                                    CONCAT16((byte)((uint)fVar92 >> 0x10) &
                                             ~(byte)((uint)iVar53 >> 0x10),
                                             CONCAT15((byte)((uint)fVar92 >> 8) &
                                                      ~(byte)((uint)iVar53 >> 8),
                                                      CONCAT14(SUB41(fVar92,0) & ~(byte)iVar53,
                                                               fVar94))));
                      auVar60[8] = SUB41(fVar93,0) & ~(byte)iVar54;
                      auVar60[9] = (byte)((uint)fVar93 >> 8) & ~(byte)((uint)iVar54 >> 8);
                      auVar60[10] = (byte)((uint)fVar93 >> 0x10) & ~(byte)((uint)iVar54 >> 0x10);
                      auVar60[0xb] = (byte)((uint)fVar93 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18);
                      auVar64._12_2_ = 0;
                      auVar64._0_12_ = auVar60;
                      auVar64[0xe] = 0x80;
                      auVar64[0xf] = 0x3f;
                      auVar73 = NEON_frecpe(auVar64,4);
                      iVar44 = -(uint)(fVar94 == 0.0);
                      iVar53 = -(uint)((float)((ulong)auVar60._0_8_ >> 0x20) == 0.0);
                      iVar54 = -(uint)(auVar60._8_4_ == 0.0);
                      iVar56 = -(uint)(auVar64._12_4_ == 0.0);
                      auVar76[0] = ~(byte)iVar44;
                      auVar76[1] = ~(byte)((uint)iVar44 >> 8);
                      auVar76[2] = ~(byte)((uint)iVar44 >> 0x10);
                      auVar76[3] = ~(byte)((uint)iVar44 >> 0x18);
                      auVar76[4] = ~(byte)iVar53;
                      auVar76[5] = ~(byte)((uint)iVar53 >> 8);
                      auVar76[6] = ~(byte)((uint)iVar53 >> 0x10);
                      auVar76[7] = ~(byte)((uint)iVar53 >> 0x18);
                      auVar76[8] = ~(byte)iVar54;
                      auVar76[9] = ~(byte)((uint)iVar54 >> 8);
                      auVar76[10] = ~(byte)((uint)iVar54 >> 0x10);
                      auVar76[0xb] = ~(byte)((uint)iVar54 >> 0x18);
                      auVar76[0xc] = ~(byte)iVar56;
                      auVar76[0xd] = ~(byte)((uint)iVar56 >> 8);
                      auVar76[0xe] = ~(byte)((uint)iVar56 >> 0x10);
                      auVar76[0xf] = ~(byte)((uint)iVar56 >> 0x18);
                      auVar81 = NEON_frecps(auVar64,auVar73,4);
                      auVar80._0_4_ = auVar73._0_4_ * auVar81._0_4_;
                      auVar80._4_4_ = auVar73._4_4_ * auVar81._4_4_;
                      auVar80._8_4_ = auVar73._8_4_ * auVar81._8_4_;
                      auVar80._12_4_ = auVar73._12_4_ * auVar81._12_4_;
                      auVar73 = NEON_frecps(auVar64,auVar80,4);
                      auVar65._0_4_ = auVar80._0_4_ * auVar73._0_4_;
                      auVar65._4_4_ = auVar80._4_4_ * auVar73._4_4_;
                      auVar65._8_4_ = auVar80._8_4_ * auVar73._8_4_;
                      auVar65._12_4_ = auVar80._12_4_ * auVar73._12_4_;
                      auVar77 = auVar77 ^ (auVar77 ^ auVar65) & auVar76;
                      auVar32._0_4_ = (fVar55 - fVar87) * auVar77._0_4_;
                      auVar32._4_4_ = (fVar66 - fVar88) * auVar77._4_4_;
                      auVar32._8_4_ = (fVar35 - fVar89) * auVar77._8_4_;
                      auVar32._12_4_ = (auVar51._12_4_ - fVar90) * auVar77._12_4_;
                      auVar40._0_4_ = (fVar36 - fVar87) * auVar77._0_4_;
                      auVar40._4_4_ = (fVar42 - fVar88) * auVar77._4_4_;
                      auVar40._8_4_ = (fVar43 - fVar89) * auVar77._8_4_;
                      auVar40._12_4_ = (auVar52._12_4_ - fVar90) * auVar77._12_4_;
                      auVar52 = NEON_fmin(auVar32,auVar40,4);
                      auVar51 = NEON_fmax(auVar32,auVar40,4);
                      uVar37 = NEON_fmaxp(auVar52._0_8_,auVar52._0_8_,4);
                      uVar37 = NEON_fmax(CONCAT44(auVar52._8_4_,auVar52._8_4_),uVar37,4);
                      uVar47 = NEON_fminp(auVar51._0_8_,auVar51._0_8_,4);
                      uVar47 = NEON_fmin(CONCAT44(auVar51._8_4_,auVar51._8_4_),uVar47,4);
                      uVar37 = NEON_fmax(uVar37,0,4);
                      uVar47 = NEON_fmin(uVar47,uVar82,4);
                      fVar94 = (float)uVar37;
                      if ((float)uVar47 < fVar94) goto LAB_031983b8;
                      fVar95 = (float)((ulong)uVar37 >> 0x20);
                      uVar37 = CONCAT44(fVar88 + fVar92 * fVar95,fVar87 + fVar91 * fVar94);
                      uVar47 = CONCAT44(fVar90 + (fVar86 - fVar90) * fVar95,fVar89 + fVar93 * fVar94
                                       );
                    }
                  }
                  iVar44 = (int)param_7[1];
                  puVar4 = (undefined8 *)(*param_7 + (long)iVar44 * 0x10);
                  puVar4[1] = uVar78;
                  *puVar4 = uVar72;
                  puVar4 = (undefined8 *)(*param_7 + (long)(iVar44 + 1) * 0x10);
                  puVar4[1] = uVar47;
                  *puVar4 = uVar37;
                  *(uint *)(param_7 + 1) = iVar44 + 2U;
                  if (iVar44 + 2U == (*(uint *)((long)param_7 + 0xc) & 0x3fffffff))
                  goto LAB_03198ae0;
                }
                else {
                  pbVar26 = (byte *)(lVar28 + lVar27 * 0x14 + 0x10);
                  bVar6 = *pbVar26;
                  if ((param_4 == (long *)0x0) || ((bVar6 >> 5 & 1) != 0)) {
                    if ((bVar6 >> 5 & 1) != 0) goto LAB_0319862c;
                  }
                  else {
                    uVar23 = (**(code **)(*param_4 + 0x28))
                                       (param_4,param_1,(ulong)uVar45 | uVar20 & 0xffc00000,piVar14,
                                        lVar15,lVar15 + (long)iVar53 * 4);
                    if ((uVar23 & 1) == 0) goto LAB_0319862c;
                  }
                  iVar44 = (int)uVar16;
                  if (iVar44 < 0x40) {
                    uVar18 = *(uint *)(lVar28 + lVar27 * 0x14 + 0xc);
                    if ((*pbVar26 >> 6 & 1) == 0) {
                      if (uVar18 == 0xffffffff) {
                        uVar18 = 0xffffffff;
                      }
                      else {
                        uVar18 = uVar18 & 0x3fffff |
                                 *(int *)(*(long *)(lVar10 + 0x20) + 0x17c) << 0x16;
                      }
                    }
                    puVar11[iVar44] = (ulong)uVar18 | ((ulong)uVar45 | uVar20 & 0xffc00000) << 0x20;
                    uVar16 = (ulong)(iVar44 + 1);
                  }
                }
              }
            }
          }
          else {
            lVar22 = lVar28 + lVar27 * 0x14;
            uVar5 = *(uint *)(lVar22 + 8);
            uVar1 = 0xffffffff;
            if (uVar5 != 0xffffffff) {
              uVar1 = uVar5 & 0x3fffff | *(int *)(lVar17 + 0x17c) << 0x16;
            }
            if ((*(byte *)(lVar22 + 0x10) & 0x40) == 0) {
              uVar5 = uVar1;
            }
            if (uVar5 != uVar3) goto LAB_03198474;
          }
LAB_031983b8:
          iVar24 = iVar24 + 1;
        } while (iVar24 < (short)piVar21[2]);
      }
LAB_0319822c:
      if ((int)uVar16 == 0) break;
      goto LAB_03198230;
    }
    lVar15 = *(long *)(lVar17 + 0x140) + (long)(iVar44 * iVar24) * 4;
    lVar17 = *(long *)(lVar17 + 0xd0);
LAB_031982f8:
    piVar21 = (int *)(lVar17 + (long)iVar24 * 0x10);
    lVar17 = lVar15 + (long)iVar44 * 4;
    if (param_4 == (long *)0x0) goto LAB_03198304;
LAB_031987fc:
    uVar23 = (**(code **)(*param_4 + 0x20))(param_4,param_1,uVar20,piVar21,lVar15,lVar17);
    if ((uVar23 & 1) != 0) {
      if ((int)local_90 <= local_88 * 2) goto LAB_03198880;
      goto LAB_0319830c;
    }
    if (uVar3 != 0xffffffff) {
      uVar20 = (ulong)uVar3 & 0x3fffff;
      lVar17 = *(long *)(*(long *)(param_1 + 0x38) + (ulong)(uVar3 >> 0x16) * 0xf0);
      lVar10 = *(long *)(lVar17 + 0x20);
      if ((int)uVar20 < *(int *)(lVar10 + 0x30)) {
        if (*(int *)(lVar10 + 0x78) != 0) {
          uVar45 = *(uint *)(*(long *)(lVar10 + 0x70) + uVar20 * 4);
          if (uVar45 == 0xffffffff) {
            piVar21 = (int *)(*(long *)(lVar10 + 0x28) + uVar20 * 0x14);
            goto LAB_031989c8;
          }
          uVar20 = (ulong)uVar45;
        }
        piVar21 = (int *)(*(long *)(lVar10 + 0xc0) + (long)(int)uVar20 * 0x14);
      }
      else {
        piVar21 = (int *)(*(long *)(lVar10 + 0xe0) +
                         (long)((int)uVar20 - *(int *)(lVar10 + 0x30)) * 0x14);
      }
LAB_031989c8:
      iVar53 = *(int *)(lVar10 + 0x40);
      iVar24 = *piVar21;
      iVar44 = piVar21[1];
      plVar2 = (long *)(lVar10 + 0x38);
      if (iVar53 <= iVar24) {
        plVar2 = (long *)(lVar10 + 0xf0);
      }
      iVar54 = 0;
      if (iVar53 <= iVar24) {
        iVar54 = iVar53;
      }
      pfVar7 = (float *)(*plVar2 + (long)(iVar24 - iVar54) * 0x10);
      fVar86 = *pfVar7;
      fVar87 = pfVar7[1];
      fVar88 = pfVar7[2];
      plVar2 = (long *)(lVar10 + 0x38);
      if (iVar53 <= iVar44) {
        plVar2 = (long *)(lVar10 + 0xf0);
      }
      iVar24 = 0;
      if (iVar53 <= iVar44) {
        iVar24 = iVar53;
      }
      pfVar7 = (float *)(*plVar2 + (long)(iVar44 - iVar24) * 0x10);
      fVar90 = *pfVar7;
      fVar94 = pfVar7[1];
      fVar95 = pfVar7[2];
      iVar24 = (int)param_7[1];
      auVar51 = *(undefined1 (*) [16])(lVar17 + 0x80);
      auVar52 = *(undefined1 (*) [16])(lVar17 + 0x90);
      auVar33._0_8_ =
           CONCAT44(auVar52._4_4_ +
                    auVar51._4_4_ * fVar88 +
                    *(float *)(lVar17 + 100) * fVar86 + *(float *)(lVar17 + 0x74) * fVar87,
                    auVar52._0_4_ +
                    auVar51._0_4_ * fVar88 +
                    *(float *)(lVar17 + 0x60) * fVar86 + *(float *)(lVar17 + 0x70) * fVar87);
      auVar33._8_4_ =
           auVar52._8_4_ +
           auVar51._8_4_ * fVar88 +
           *(float *)(lVar17 + 0x68) * fVar86 + *(float *)(lVar17 + 0x78) * fVar87;
      auVar33._12_4_ =
           auVar52._12_4_ +
           auVar51._12_4_ * fVar88 +
           *(float *)(lVar17 + 0x6c) * fVar86 + *(float *)(lVar17 + 0x7c) * fVar87;
      auVar41._0_8_ =
           CONCAT44(auVar52._4_4_ +
                    auVar51._4_4_ * fVar95 +
                    *(float *)(lVar17 + 100) * fVar90 + *(float *)(lVar17 + 0x74) * fVar94,
                    auVar52._0_4_ +
                    auVar51._0_4_ * fVar95 +
                    *(float *)(lVar17 + 0x60) * fVar90 + *(float *)(lVar17 + 0x70) * fVar94);
      auVar41._8_4_ =
           auVar52._8_4_ +
           auVar51._8_4_ * fVar95 +
           *(float *)(lVar17 + 0x68) * fVar90 + *(float *)(lVar17 + 0x78) * fVar94;
      auVar41._12_4_ =
           auVar52._12_4_ +
           auVar51._12_4_ * fVar95 +
           *(float *)(lVar17 + 0x6c) * fVar90 + *(float *)(lVar17 + 0x7c) * fVar94;
      puVar4 = (undefined8 *)(*param_7 + (long)iVar24 * 0x10);
      puVar4[1] = auVar33._8_8_;
      *puVar4 = auVar33._0_8_;
      puVar4 = (undefined8 *)(*param_7 + (long)(iVar24 + 1) * 0x10);
      puVar4[1] = auVar41._8_8_;
      *puVar4 = auVar41._0_8_;
      *(uint *)(param_7 + 1) = iVar24 + 2U;
      if (iVar24 + 2U != (*(uint *)((long)param_7 + 0xc) & 0x3fffffff)) goto LAB_0319822c;
      break;
    }
  } while ((int)uVar16 != 0);
LAB_03198ae0:
  lVar17 = local_90;
  uVar45 = local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < lVar17) && (local_98 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar9 + 0x18))(puVar9,local_98,uVar45 << 2);
  }
  lVar17 = *(long *)(lVar13 + 0x38d490);
  if (lVar17 == 0) {
    lVar17 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar17;
  }
  lVar17 = *(long *)(lVar17 + 8);
  if (((*(ulong *)(lVar17 + 0x10) < 0x200) || (*(undefined4 **)(lVar17 + 0x18) != puVar12 + 0x80))
     || (*(undefined4 **)(lVar17 + 0x28) == puVar12)) {
    if (puVar12 != (undefined4 *)0x0) {
      if (*(ulong *)(lVar17 + 0x10) < 0x200) {
        *(int *)(*(long *)(lVar17 + 8) + 0x20) = *(int *)(*(long *)(lVar17 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar17 + 0x40) + 0x18))(*(long **)(lVar17 + 0x40),puVar12,0x200);
      }
      else if (*(undefined4 **)(lVar17 + 0x18) == puVar12 + 0x80) {
        *(undefined4 **)(lVar17 + 0x18) = puVar12;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar17,puVar12,0x200);
      }
    }
  }
  else {
    *(undefined4 **)(lVar17 + 0x18) = puVar12;
  }
  lVar17 = *(long *)(lVar13 + 0x38d490);
  if (lVar17 == 0) {
    lVar17 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar17;
  }
  lVar13 = *(long *)(lVar17 + 8);
  if (((*(ulong *)(lVar13 + 0x10) < 0x200) || (*(ulong **)(lVar13 + 0x18) != puVar11 + 0x40)) ||
     (*(ulong **)(lVar13 + 0x28) == puVar11)) {
    if (puVar11 != (ulong *)0x0) {
      if (*(ulong *)(lVar13 + 0x10) < 0x200) {
        *(int *)(*(long *)(lVar13 + 8) + 0x20) = *(int *)(*(long *)(lVar13 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar13 + 0x40) + 0x18))(*(long **)(lVar13 + 0x40),puVar11,0x200);
      }
      else if (*(ulong **)(lVar13 + 0x18) == puVar11 + 0x40) {
        *(ulong **)(lVar13 + 0x18) = puVar11;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar13,puVar11,0x200);
      }
    }
  }
  else {
    *(ulong **)(lVar13 + 0x18) = puVar11;
  }
joined_r0x03198cfc:
  if (lVar25 != 0) {
    puVar4 = *(undefined8 **)(lVar25 + 8);
    uVar16 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar16 <= *(ulong *)(lVar25 + 0x10)) &&
       (*(ulong *)(lVar25 + 8) = uVar16, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_0390f40e;
      uVar82 = nn::os::GetSystemTick();
      puVar4[1] = uVar82;
    }
  }
  return;
}


