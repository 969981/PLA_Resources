/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f750b8; name: FUN_02f750b8
 */


void FUN_02f750b8(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  ushort uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  byte bVar15;
  long lVar16;
  float *pfVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  int iVar20;
  long *plVar21;
  long lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar33 [12];
  float fVar36;
  undefined1 auVar34 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar45;
  undefined1 auVar44 [16];
  int iVar46;
  int iVar49;
  int iVar50;
  int iVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
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
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined8 local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  
  puVar8 = PTR_PTR_0434a080;
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar5 = 0;
    if (*param_1 != 0) {
      lVar5 = *param_1 + (long)param_1;
    }
    if ((char)param_3[8] != '\0') {
      pfVar17 = (float *)(lVar5 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
      auVar23._0_4_ = (*pfVar17 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
      auVar23._4_4_ =
           (pfVar17[1] - *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
      auVar23._8_4_ = (pfVar17[2] - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
      auVar23._12_4_ =
           (pfVar17[3] - *(float *)((long)param_3 + 0x1c)) * *(float *)((long)param_3 + 0x3c);
      auVar58._0_4_ = *(float *)(param_3 + 6) * (pfVar17[4] - *(float *)(param_3 + 2));
      auVar58._4_4_ =
           *(float *)((long)param_3 + 0x34) * (pfVar17[5] - *(float *)((long)param_3 + 0x14));
      auVar58._8_4_ = *(float *)(param_3 + 7) * (pfVar17[6] - *(float *)(param_3 + 3));
      auVar58._12_4_ = *(float *)((long)param_3 + 0x3c) * (0.0 - *(float *)((long)param_3 + 0x1c));
      auVar41 = NEON_fmin(auVar23,auVar58,4);
      auVar23 = NEON_fmax(auVar23,auVar58,4);
      uVar26 = NEON_fmaxp(auVar41._0_8_,auVar41._0_8_,4);
      uVar27 = NEON_fmax(CONCAT44(auVar41._8_4_,auVar41._8_4_),uVar26,4);
      uVar26 = NEON_fminp(auVar23._0_8_,auVar23._0_8_,4);
      uVar26 = NEON_fmin(CONCAT44(auVar23._8_4_,auVar23._8_4_),uVar26,4);
      uVar27 = NEON_fmax(uVar27,0,4);
      uVar26 = NEON_fmin(uVar26,*(undefined8 *)(*(long *)(*param_3 + 0x38) + 0x10),4);
      if ((float)uVar27 <= (float)uVar26) {
        lVar7 = param_2[1];
        uVar26 = NEON_fmov(0x3f800000,4);
        lVar5 = tpidr_el0;
        NEON_fmov(0x3f800000,4);
LAB_02f751e0:
        uVar4 = *(ushort *)(pfVar17 + 7);
joined_r0x02f751e4:
        uVar14 = (ulong)uVar4;
        if (uVar14 == 0) goto LAB_02f752e4;
        do {
          uVar4 = *(ushort *)((long)pfVar17 + 0x1e);
          lVar22 = 0;
          if (*param_1 != 0) {
            lVar22 = *param_1 + (long)param_1;
          }
          pfVar17 = (float *)(lVar22 + uVar14 * 0x20);
          pfVar2 = (float *)(lVar22 + (ulong)uVar4 * 0x20);
          bVar9 = false;
          if ((char)param_3[8] == '\0') {
LAB_02f752b8:
            bVar15 = 0;
          }
          else {
            auVar23 = *(undefined1 (*) [16])(param_3 + 6);
            uVar56 = *(undefined8 *)(*(long *)(*param_3 + 0x38) + 0x10);
            auVar58 = *(undefined1 (*) [16])(param_3 + 2);
            fVar25 = auVar58._0_4_;
            fVar29 = auVar58._4_4_;
            fVar30 = auVar58._8_4_;
            fVar31 = auVar58._12_4_;
            fVar37 = auVar23._0_4_;
            auVar34._0_4_ = (*pfVar17 - fVar25) * fVar37;
            fVar38 = auVar23._4_4_;
            auVar34._4_4_ = (pfVar17[1] - fVar29) * fVar38;
            fVar32 = auVar23._8_4_;
            auVar34._8_4_ = (pfVar17[2] - fVar30) * fVar32;
            fVar59 = auVar23._12_4_;
            auVar34._12_4_ = (pfVar17[3] - fVar31) * fVar59;
            auVar42._0_4_ = fVar37 * (pfVar17[4] - fVar25);
            auVar42._4_4_ = fVar38 * (pfVar17[5] - fVar29);
            auVar42._8_4_ = fVar32 * (pfVar17[6] - fVar30);
            auVar42._12_4_ = fVar59 * (0.0 - fVar31);
            auVar41._0_4_ = fVar37 * (*pfVar2 - fVar25);
            auVar41._4_4_ = fVar38 * (pfVar2[1] - fVar29);
            auVar41._8_4_ = fVar32 * (pfVar2[2] - fVar30);
            auVar41._12_4_ = fVar59 * (pfVar2[3] - fVar31);
            auVar28._0_4_ = fVar37 * (pfVar2[4] - fVar25);
            auVar28._4_4_ = fVar38 * (pfVar2[5] - fVar29);
            auVar28._8_4_ = fVar32 * (pfVar2[6] - fVar30);
            auVar28._12_4_ = fVar59 * (0.0 - fVar31);
            auVar58 = NEON_fmin(auVar34,auVar42,4);
            auVar23 = NEON_fmax(auVar34,auVar42,4);
            uVar27 = NEON_fmaxp(auVar58._0_8_,auVar58._0_8_,4);
            uVar40 = NEON_fmax(CONCAT44(auVar58._8_4_,auVar58._8_4_),uVar27,4);
            uVar27 = NEON_fminp(auVar23._0_8_,auVar23._0_8_,4);
            uVar27 = NEON_fmin(CONCAT44(auVar23._8_4_,auVar23._8_4_),uVar27,4);
            uVar40 = NEON_fmax(uVar40,0,4);
            uVar27 = NEON_fmin(uVar27,uVar56,4);
            bVar9 = (float)uVar40 <= (float)uVar27;
            auVar58 = NEON_fmin(auVar41,auVar28,4);
            auVar23 = NEON_fmax(auVar41,auVar28,4);
            uVar27 = NEON_fmaxp(auVar58._0_8_,auVar58._0_8_,4);
            uVar40 = NEON_fmax(CONCAT44(auVar58._8_4_,auVar58._8_4_),uVar27,4);
            uVar27 = NEON_fminp(auVar23._0_8_,auVar23._0_8_,4);
            uVar27 = NEON_fmin(CONCAT44(auVar23._8_4_,auVar23._8_4_),uVar27,4);
            uVar40 = NEON_fmax(uVar40,0,4);
            uVar27 = NEON_fmin(uVar27,uVar56,4);
            if ((float)uVar27 < (float)uVar40) goto LAB_02f752b8;
            bVar15 = 2;
          }
          bVar15 = bVar15 | bVar9;
          if (bVar15 == 1) goto LAB_02f751e0;
          if (bVar15 == 3) goto LAB_02f757e8;
          pfVar17 = pfVar2;
          if (bVar15 == 2) goto LAB_02f751e0;
          while( true ) {
            if ((int)param_2[1] <= (int)lVar7) {
              return;
            }
            iVar20 = (int)param_2[1] + -1;
            *(int *)(param_2 + 1) = iVar20;
            lVar22 = 0;
            if (*param_1 != 0) {
              lVar22 = *param_1 + (long)param_1;
            }
            pfVar17 = (float *)(lVar22 + (ulong)*(ushort *)(*param_2 + (long)iVar20 * 2) * 0x20);
            uVar14 = (ulong)*(ushort *)(pfVar17 + 7);
            if (uVar14 != 0) break;
LAB_02f752e4:
            if ((char)param_3[8] != '\0') {
              plVar21 = (long *)*param_3;
              if (*(long *)(lVar5 + 0x38d490) == 0) {
                lVar22 = FUN_0333d16c(0,1);
                *(long *)(lVar5 + 0x38d490) = lVar22;
                lVar22 = *(long *)(lVar22 + 0x10);
              }
              else {
                lVar22 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
              }
              if (lVar22 != 0) {
                puVar13 = *(undefined8 **)(lVar22 + 8);
                uVar14 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
                if ((uVar14 <= *(ulong *)(lVar22 + 0x10)) &&
                   (*(ulong *)(lVar22 + 8) = uVar14, puVar13 != (undefined8 *)0x0)) {
                  *puVar13 = "TtprocessLeaf";
                  uVar27 = nn::os::GetSystemTick();
                  puVar13[1] = uVar27;
                }
              }
              lVar11 = *plVar21;
              pauVar3 = (undefined1 (*) [16])
                        (lVar11 + 0x48 +
                        (ulong)*(ushort *)((long)pfVar17 + 0x1e) * 0x40 + *(long *)(lVar11 + 0x48));
              if (((byte)pauVar3[1][0xe] >> 6 & 1) != 0) {
                local_88 = *(undefined8 *)plVar21[6];
                uStack_80 = ((undefined8 *)plVar21[6])[1];
                puVar13 = (undefined8 *)plVar21[5];
                uVar14 = puVar13[3];
                iVar20 = (uint)*(byte *)(lVar11 + 0x1c) + (int)(uVar14 >> 0x20);
                uVar14 = (ulong)((*(ushort *)((long)pfVar17 + 0x1e) + 1 << (ulong)(-iVar20 & 0x1f))
                                - 1) | uVar14 & (uint)(&DAT_03aa74b0)[(long)uVar14 >> 0x20];
                lVar16 = *(long *)pauVar3[3];
                if (lVar16 == 0) {
                  puVar18 = (undefined1 *)0x0;
                }
                else {
                  puVar18 = pauVar3[3] + lVar16;
                }
                plVar10 = *(long **)plVar21[4];
                uVar19 = (undefined4)uVar14;
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x40))
                            (plVar10,*(undefined2 *)(pauVar3[2] + 0xc),1,*puVar13,puVar13[1],lVar11,
                             uVar14,puVar18,&local_88);
                  lVar11 = plVar21[4];
                  if (*(long *)(lVar11 + 8) != 0) {
                    local_140 = CONCAT62(local_140._2_6_,*(undefined2 *)(lVar11 + 0x10));
                    uVar27 = *(undefined8 *)(lVar11 + 0x14);
                    *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                         *(undefined4 *)(lVar11 + 0x1c);
                    *(undefined8 *)((ulong)&local_140 | 4) = uVar27;
                    local_128 = 0;
                    local_120 = 0;
                    local_130 = 0;
                    local_118 = 0xffffffff;
                    local_110 = 0;
                    local_1e0 = CONCAT62(local_1e0._2_6_,(undefined2)local_88);
                    uVar27 = *(undefined8 *)((ulong)&local_88 | 4);
                    *(undefined4 *)((undefined8 *)((ulong)&local_1e0 | 4) + 1) =
                         *(undefined4 *)((undefined8 *)((ulong)&local_88 | 4) + 1);
                    *(undefined8 *)((ulong)&local_1e0 | 4) = uVar27;
                    local_1d0 = *(long *)plVar21[5];
                    local_1c8 = ((long *)plVar21[5])[1];
                    local_1c0 = (undefined8 *)*plVar21;
                    local_1b8 = CONCAT44(local_1b8._4_4_,uVar19);
                    local_1b0 = puVar18;
                    uVar14 = (**(code **)(**(long **)(lVar11 + 8) + 0x40))
                                       (*(long **)(lVar11 + 8),1,1,&local_140,&local_1e0);
                    if ((uVar14 & 1) == 0) goto LAB_02f75774;
                  }
                }
                auVar23 = pauVar3[2];
                auVar24._0_12_ = auVar23._0_12_;
                auVar24._12_4_ = 0x3f800000;
                auVar58 = NEON_frecpe(auVar24,4);
                puVar13 = *(undefined8 **)(plVar21[5] + 0x20);
                auVar41 = NEON_frecps(auVar24,auVar58,4);
                auVar43._0_4_ = auVar58._0_4_ * auVar41._0_4_;
                auVar43._4_4_ = auVar58._4_4_ * auVar41._4_4_;
                auVar43._8_4_ = auVar58._8_4_ * auVar41._8_4_;
                auVar43._12_4_ = auVar58._12_4_ * auVar41._12_4_;
                auVar58 = *pauVar3;
                fVar25 = *(float *)pauVar3[1];
                fVar29 = *(float *)(pauVar3[1] + 4);
                fVar30 = *(float *)(pauVar3[1] + 8);
                auVar41 = NEON_ext(auVar58,auVar58,8,1);
                fVar31 = auVar58._0_4_;
                auVar61._0_4_ = fVar31 + fVar31;
                fVar37 = auVar58._4_4_;
                auVar61._4_4_ = fVar37 + fVar37;
                auVar61._8_4_ = auVar58._8_4_ + auVar58._8_4_;
                fVar38 = auVar58._12_4_;
                auVar61._12_4_ = fVar38 + fVar38;
                auVar58 = NEON_ext(auVar61,auVar61,8,1);
                fVar59 = auVar41._0_4_ * auVar58._0_4_;
                fVar36 = (float)*puVar13;
                fVar66 = (float)((ulong)*puVar13 >> 0x20);
                fVar67 = (float)puVar13[1];
                fVar68 = (float)((ulong)puVar13[1] >> 0x20);
                fVar69 = (float)puVar13[2];
                fVar70 = (float)((ulong)puVar13[2] >> 0x20);
                fVar71 = (float)puVar13[3];
                fVar72 = (float)((ulong)puVar13[3] >> 0x20);
                fVar32 = auVar61._8_4_ * fVar31 - auVar61._4_4_ * fVar38;
                fVar63 = auVar61._8_4_ * fVar31 + auVar61._4_4_ * fVar38;
                fVar73 = (float)puVar13[4];
                fVar74 = (float)((ulong)puVar13[4] >> 0x20);
                fVar75 = (float)puVar13[5];
                fVar76 = (float)((ulong)puVar13[5] >> 0x20);
                fVar64 = (float)uVar26;
                fVar55 = fVar64 - (auVar61._0_4_ * fVar31 + auVar61._4_4_ * fVar37);
                fVar60 = auVar61._8_4_ * fVar37 - auVar61._0_4_ * fVar38;
                fVar52 = auVar61._8_4_ * fVar37 + auVar61._0_4_ * fVar38;
                fVar57 = fVar64 - (auVar61._4_4_ * fVar37 + fVar59);
                fVar65 = auVar61._4_4_ * fVar31 - auVar61._8_4_ * fVar38;
                fVar62 = auVar61._4_4_ * fVar31 + auVar61._8_4_ * fVar38;
                auVar58 = NEON_frecps(auVar24,auVar43,4);
                uStack_a8 = CONCAT44(fVar68 * fVar63 + fVar72 * fVar60 + fVar76 * fVar55,
                                     fVar67 * fVar63 + fVar71 * fVar60 + fVar75 * fVar55);
                fVar39 = auVar43._0_4_ * auVar58._0_4_;
                fVar45 = auVar43._4_4_ * auVar58._4_4_;
                auVar44._0_8_ = CONCAT44(fVar45,fVar39);
                auVar44._8_4_ = auVar43._8_4_ * auVar58._8_4_;
                auVar44._12_4_ = auVar43._12_4_ * auVar58._12_4_;
                local_b0 = CONCAT44(fVar66 * fVar63 + fVar70 * fVar60 + fVar74 * fVar55,
                                    fVar36 * fVar63 + fVar69 * fVar60 + fVar73 * fVar55);
                fVar64 = fVar64 - (auVar61._0_4_ * fVar31 + fVar59);
                uStack_b8 = CONCAT44(fVar76 * fVar52 + fVar68 * fVar65 + fVar72 * fVar64,
                                     fVar75 * fVar52 + fVar67 * fVar65 + fVar71 * fVar64);
                local_d0 = CONCAT44(fVar74 * fVar32 + fVar70 * fVar62 + fVar66 * fVar57,
                                    fVar73 * fVar32 + fVar69 * fVar62 + fVar36 * fVar57);
                uStack_c8 = CONCAT44(fVar76 * fVar32 + fVar72 * fVar62 + fVar68 * fVar57,
                                     fVar75 * fVar32 + fVar71 * fVar62 + fVar67 * fVar57);
                uStack_c0 = CONCAT44(fVar74 * fVar52 + fVar66 * fVar65 + fVar70 * fVar64,
                                     fVar73 * fVar52 + fVar36 * fVar65 + fVar69 * fVar64);
                local_a0 = CONCAT44(fVar74 * fVar30 + fVar66 * fVar25 + fVar70 * fVar29 +
                                    (float)((ulong)puVar13[6] >> 0x20),
                                    fVar73 * fVar30 + fVar36 * fVar25 + fVar69 * fVar29 +
                                    (float)puVar13[6]);
                uStack_98 = CONCAT44(fVar76 * fVar30 + fVar68 * fVar25 + fVar72 * fVar29 +
                                     (float)((ulong)puVar13[7] >> 0x20),
                                     fVar75 * fVar30 + fVar67 * fVar25 + fVar71 * fVar29 +
                                     (float)puVar13[7]);
                puVar13 = (undefined8 *)plVar21[4];
                local_128 = puVar13[3];
                local_138 = puVar13[1];
                local_140 = *puVar13;
                local_130 = puVar13[2];
                local_120 = puVar13[4];
                local_e0 = *(undefined4 *)(puVar13 + 0xc);
                fVar31 = *(float *)(puVar13 + 8);
                fVar37 = *(float *)((long)puVar13 + 0x44);
                fVar38 = *(float *)(puVar13 + 9);
                lVar11 = plVar21[7];
                fVar25 = (float)puVar13[6] - fVar25;
                fVar29 = (float)((ulong)puVar13[6] >> 0x20) - fVar29;
                fVar30 = (float)puVar13[7] - fVar30;
                uVar27 = *(undefined8 *)(lVar11 + 0x10);
                fVar59 = fVar39 * (fVar32 * fVar38 + fVar57 * fVar31 + fVar62 * fVar37);
                fVar36 = fVar45 * (fVar52 * fVar38 + fVar65 * fVar31 + fVar64 * fVar37);
                fVar37 = auVar44._8_4_ * (fVar55 * fVar38 + fVar63 * fVar31 + fVar60 * fVar37);
                local_160 = DAT_03aae450;
                uStack_158 = DAT_03aae458;
                iVar46 = -(uint)(fVar59 == 0.0);
                iVar49 = -(uint)(fVar36 == 0.0);
                iVar50 = -(uint)(fVar37 == 0.0);
                iVar51 = -(uint)((float)uVar27 == 0.0);
                fVar31 = (float)CONCAT13((byte)((uint)fVar59 >> 0x18) &
                                         ~(byte)((uint)iVar46 >> 0x18),
                                         CONCAT12((byte)((uint)fVar59 >> 0x10) &
                                                  ~(byte)((uint)iVar46 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar59 >> 8) &
                                                           ~(byte)((uint)iVar46 >> 8),
                                                           SUB41(fVar59,0) & ~(byte)iVar46)));
                auVar33._0_8_ =
                     CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                              CONCAT16((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10),
                                       CONCAT15((byte)((uint)fVar36 >> 8) &
                                                ~(byte)((uint)iVar49 >> 8),
                                                CONCAT14(SUB41(fVar36,0) & ~(byte)iVar49,fVar31))));
                auVar33[8] = SUB41(fVar37,0) & ~(byte)iVar50;
                auVar33[9] = (byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar50 >> 8);
                auVar33[10] = (byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar50 >> 0x10);
                auVar33[0xb] = (byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar50 >> 0x18);
                auVar35[0xc] = (byte)uVar27 & ~(byte)iVar51;
                auVar35._0_12_ = auVar33;
                auVar35[0xd] = (byte)((ulong)uVar27 >> 8) & ~(byte)((uint)iVar51 >> 8);
                auVar35[0xe] = (byte)((ulong)uVar27 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10);
                auVar35[0xf] = (byte)((ulong)uVar27 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18);
                local_150 = DAT_03aae460;
                uStack_148 = DAT_03aae468;
                auVar58 = NEON_frecpe(auVar35,4);
                iVar46 = -(uint)(fVar31 == 0.0);
                iVar49 = -(uint)((float)((ulong)auVar33._0_8_ >> 0x20) == 0.0);
                iVar50 = -(uint)(auVar33._8_4_ == 0.0);
                iVar51 = -(uint)(auVar35._12_4_ == 0.0);
                auVar47[0] = ~(byte)iVar46;
                auVar47[1] = ~(byte)((uint)iVar46 >> 8);
                auVar47[2] = ~(byte)((uint)iVar46 >> 0x10);
                auVar47[3] = ~(byte)((uint)iVar46 >> 0x18);
                auVar47[4] = ~(byte)iVar49;
                auVar47[5] = ~(byte)((uint)iVar49 >> 8);
                auVar47[6] = ~(byte)((uint)iVar49 >> 0x10);
                auVar47[7] = ~(byte)((uint)iVar49 >> 0x18);
                auVar47[8] = ~(byte)iVar50;
                auVar47[9] = ~(byte)((uint)iVar50 >> 8);
                auVar47[10] = ~(byte)((uint)iVar50 >> 0x10);
                auVar47[0xb] = ~(byte)((uint)iVar50 >> 0x18);
                auVar47[0xc] = ~(byte)iVar51;
                auVar47[0xd] = ~(byte)((uint)iVar51 >> 8);
                auVar47[0xe] = ~(byte)((uint)iVar51 >> 0x10);
                auVar47[0xf] = ~(byte)((uint)iVar51 >> 0x18);
                auVar41 = NEON_frecps(auVar35,auVar58,4);
                auVar53._0_4_ = auVar58._0_4_ * auVar41._0_4_;
                auVar53._4_4_ = auVar58._4_4_ * auVar41._4_4_;
                auVar53._8_4_ = auVar58._8_4_ * auVar41._8_4_;
                auVar53._12_4_ = auVar58._12_4_ * auVar41._12_4_;
                local_180 = DAT_03aae430;
                uStack_178 = DAT_03aae438;
                auVar58 = NEON_frecps(auVar35,auVar53,4);
                auVar54._0_4_ = auVar53._0_4_ * auVar58._0_4_;
                auVar54._4_4_ = auVar53._4_4_ * auVar58._4_4_;
                auVar54._8_4_ = auVar53._8_4_ * auVar58._8_4_;
                auVar54._12_4_ = auVar53._12_4_ * auVar58._12_4_;
                auVar48._8_4_ = 0x7f7fffee;
                auVar48._0_8_ = 0x7f7fffee7f7fffee;
                auVar48._12_4_ = 0x7f7fffee;
                uStack_108 = CONCAT44(auVar44._12_4_ *
                                      (fVar30 * 0.0 + fVar60 * fVar25 + fVar29 * 0.0),
                                      auVar44._8_4_ *
                                      (fVar55 * fVar30 + fVar63 * fVar25 + fVar60 * fVar29));
                local_110 = CONCAT44(fVar45 * (fVar52 * fVar30 + fVar65 * fVar25 + fVar64 * fVar29),
                                     fVar39 * (fVar32 * fVar30 + fVar57 * fVar25 + fVar62 * fVar29))
                ;
                local_170 = DAT_03aae440;
                uStack_168 = DAT_03aae448;
                auVar48 = auVar48 ^ (auVar48 ^ auVar54) & auVar47;
                uStack_f8 = auVar35._8_8_;
                uStack_e8 = auVar48._8_8_;
                local_f0 = auVar48._0_8_;
                puVar13 = (undefined8 *)plVar21[5];
                uVar14 = (ulong)local_1b0 >> 8;
                local_1e0 = *puVar13;
                local_1d8 = puVar13[1];
                local_1a0 = puVar13[8];
                uStack_198 = puVar13[9];
                local_190 = puVar13[10];
                uStack_188 = puVar13[0xb];
                uStack_1a8 = *(undefined4 *)(puVar13 + 7);
                local_1b0 = (undefined1 *)
                            CONCAT44(*(undefined4 *)((long)puVar13 + 0x34),
                                     (int)CONCAT71((int7)uVar14,*(undefined1 *)(puVar13 + 6)));
                local_1c0 = &local_180;
                local_1d0 = *plVar21;
                local_1c8 = CONCAT44(iVar20,uVar19);
                local_1b8 = 0;
                plVar21[0xd] = auVar24._8_8_;
                plVar21[0xc] = auVar23._0_8_;
                plVar21[0xf] = auVar44._8_8_;
                plVar21[0xe] = auVar44._0_8_;
                plVar21[0x10] = (long)&local_d0;
                plVar21[0x11] = lVar11;
                *(undefined1 *)(plVar21 + 9) = *(undefined1 *)(lVar11 + 8);
                lVar16 = NEON_fmin(plVar21[10],*(undefined8 *)(lVar11 + 0x10),4);
                plVar21[10] = lVar16;
                if ((char)plVar21[0xb] == '\0') {
                  bVar9 = *(char *)(lVar11 + 0x18) != '\0';
                }
                else {
                  bVar9 = true;
                }
                *(bool *)(plVar21 + 0xb) = bVar9;
                *(undefined4 *)((long)plVar21 + 0x4c) = *(undefined4 *)(lVar11 + 0xc);
                local_100 = auVar33._0_8_;
                (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar18[0x18] * 0x200 + 0xd0))
                          (puVar18,plVar21[3],&local_140,&local_88,&local_1e0,plVar21 + 8);
              }
LAB_02f75774:
              iVar20 = *(int *)(plVar21[7] + 0xc);
              if (lVar22 != 0) {
                puVar13 = *(undefined8 **)(lVar22 + 8);
                uVar14 = (long)puVar13 + 0x17U & 0xfffffffffffffff8;
                if ((uVar14 <= *(ulong *)(lVar22 + 0x10)) &&
                   (*(ulong *)(lVar22 + 8) = uVar14, puVar13 != (undefined8 *)0x0)) {
                  *puVar13 = &DAT_0390f40e;
                  uVar27 = nn::os::GetSystemTick();
                  puVar13[1] = uVar27;
                }
              }
              *(bool *)(param_3 + 8) = iVar20 == 0;
            }
          }
        } while( true );
      }
    }
  }
  return;
LAB_02f757e8:
  iVar20 = (int)param_2[1];
  uVar12 = *(uint *)((long)param_2 + 0xc);
  uVar1 = iVar20 + 1;
  if (iVar20 < (int)(uVar12 & 0x3fffffff)) {
    lVar22 = *param_2;
  }
  else {
    lVar22 = *param_2;
    if (0x3ffffffe < iVar20) {
      FUN_032bd0a8(uVar1);
      uVar12 = *(uint *)((long)param_2 + 0xc);
    }
    uVar12 = (uVar12 & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    uVar6 = uVar1;
    if ((int)uVar1 <= (int)uVar12) {
      uVar6 = uVar12;
    }
    lVar22 = FUN_032bd1d4(puVar8,uVar6,2,lVar22,iVar20,(uint *)((long)param_2 + 0xc));
    iVar20 = (int)param_2[1];
    *param_2 = lVar22;
  }
  *(uint *)(param_2 + 1) = uVar1;
  *(ushort *)(lVar22 + (long)iVar20 * 2) = uVar4;
  uVar4 = *(ushort *)(pfVar17 + 7);
  goto joined_r0x02f751e4;
}


