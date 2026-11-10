/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f75938; name: FUN_02f75938
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02f75938(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  byte bVar3;
  ushort uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  bool bVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  long lVar21;
  long *plVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar33;
  float fVar34;
  undefined1 auVar30 [16];
  undefined8 uVar29;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined1 auVar38 [12];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar40 [16];
  float fVar44;
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  int iVar49;
  int iVar51;
  int iVar52;
  int iVar53;
  undefined1 auVar50 [16];
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar57;
  undefined8 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
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
  float fVar77;
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
  undefined8 uStack_138;
  undefined8 local_130;
  ulong uStack_128;
  float *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  float *local_f0;
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
    pfVar18 = (float *)(lVar5 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    auVar23._0_4_ = (*pfVar18 - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    auVar23._4_4_ =
         (pfVar18[1] - *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    auVar23._8_4_ = (pfVar18[2] - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar23._12_4_ =
         (pfVar18[3] - *(float *)((long)param_3 + 0x1c)) * *(float *)((long)param_3 + 0x3c);
    auVar32._0_4_ = *(float *)(param_3 + 6) * (pfVar18[4] - *(float *)(param_3 + 2));
    auVar32._4_4_ =
         *(float *)((long)param_3 + 0x34) * (pfVar18[5] - *(float *)((long)param_3 + 0x14));
    auVar32._8_4_ = *(float *)(param_3 + 7) * (pfVar18[6] - *(float *)(param_3 + 3));
    auVar32._12_4_ = *(float *)((long)param_3 + 0x3c) * (0.0 - *(float *)((long)param_3 + 0x1c));
    auVar45 = NEON_fmin(auVar23,auVar32,4);
    auVar23 = NEON_fmax(auVar23,auVar32,4);
    uVar27 = NEON_fmaxp(auVar45._0_8_,auVar45._0_8_,4);
    uVar28 = NEON_fmax(CONCAT44(auVar45._8_4_,auVar45._8_4_),uVar27,4);
    uVar27 = NEON_fminp(auVar23._0_8_,auVar23._0_8_,4);
    uVar27 = NEON_fmin(CONCAT44(auVar23._8_4_,auVar23._8_4_),uVar27,4);
    uVar28 = NEON_fmax(uVar28,0,4);
    uVar27 = NEON_fmin(uVar27,*(undefined8 *)(*(long *)(*param_3 + 0x38) + 0x10),4);
    if ((float)uVar28 <= (float)uVar27) {
      lVar7 = param_2[1];
      lVar5 = tpidr_el0;
      uVar27 = NEON_fmov(0x3f800000,4);
      NEON_fmov(0x3f800000,4);
      uVar4 = *(ushort *)(pfVar18 + 7);
joined_r0x02f75a5c:
      do {
        if ((ulong)uVar4 == 0) {
          plVar22 = (long *)*param_3;
          if (*(long *)(lVar5 + 0x38d490) == 0) {
            lVar21 = FUN_0333d16c(0,1);
            *(long *)(lVar5 + 0x38d490) = lVar21;
            lVar21 = *(long *)(lVar21 + 0x10);
          }
          else {
            lVar21 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
          }
          if (lVar21 != 0) {
            puVar14 = *(undefined8 **)(lVar21 + 8);
            uVar13 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
            if ((uVar13 <= *(ulong *)(lVar21 + 0x10)) &&
               (*(ulong *)(lVar21 + 8) = uVar13, puVar14 != (undefined8 *)0x0)) {
              *puVar14 = "TtprocessLeaf";
              uVar28 = nn::os::GetSystemTick();
              puVar14[1] = uVar28;
            }
          }
          lVar11 = *plVar22;
          pauVar2 = (undefined1 (*) [16])
                    (lVar11 + 0x48 +
                    (ulong)*(ushort *)((long)pfVar18 + 0x1e) * 0x40 + *(long *)(lVar11 + 0x48));
          if (((byte)pauVar2[1][0xe] >> 6 & 1) != 0) {
            local_88 = *(undefined8 *)plVar22[6];
            uStack_80 = ((undefined8 *)plVar22[6])[1];
            puVar14 = (undefined8 *)plVar22[5];
            uVar13 = puVar14[3];
            iVar16 = (uint)*(byte *)(lVar11 + 0x1c) + (int)(uVar13 >> 0x20);
            uVar13 = (ulong)((*(ushort *)((long)pfVar18 + 0x1e) + 1 << (ulong)(-iVar16 & 0x1f)) - 1)
                     | uVar13 & (uint)(&DAT_03aa74b0)[(long)uVar13 >> 0x20];
            lVar15 = *(long *)pauVar2[3];
            if (lVar15 == 0) {
              puVar19 = (undefined1 *)0x0;
            }
            else {
              puVar19 = pauVar2[3] + lVar15;
            }
            plVar10 = *(long **)plVar22[4];
            uVar20 = (undefined4)uVar13;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 0x40))
                        (plVar10,*(undefined2 *)(pauVar2[2] + 0xc),1,*puVar14,puVar14[1],lVar11,
                         uVar13,puVar19,&local_88);
              lVar11 = plVar22[4];
              if (*(long *)(lVar11 + 8) != 0) {
                local_140 = CONCAT62(local_140._2_6_,*(undefined2 *)(lVar11 + 0x10));
                uVar28 = *(undefined8 *)(lVar11 + 0x14);
                *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                     *(undefined4 *)(lVar11 + 0x1c);
                *(undefined8 *)((ulong)&local_140 | 4) = uVar28;
                uStack_128 = 0;
                local_120 = (float *)0x0;
                local_130 = 0;
                local_118._0_4_ = 0xffffffff;
                local_110 = 0;
                local_1e0 = CONCAT62(local_1e0._2_6_,(undefined2)local_88);
                uVar28 = *(undefined8 *)((ulong)&local_88 | 4);
                *(undefined4 *)((undefined8 *)((ulong)&local_1e0 | 4) + 1) =
                     *(undefined4 *)((undefined8 *)((ulong)&local_88 | 4) + 1);
                *(undefined8 *)((ulong)&local_1e0 | 4) = uVar28;
                local_1d0 = *(long *)plVar22[5];
                local_1c8 = ((long *)plVar22[5])[1];
                local_1c0 = (undefined8 *)*plVar22;
                local_1b8 = CONCAT44(local_1b8._4_4_,uVar20);
                local_1b0 = puVar19;
                uVar13 = (**(code **)(**(long **)(lVar11 + 8) + 0x40))
                                   (*(long **)(lVar11 + 8),1,1,&local_140,&local_1e0);
                if ((uVar13 & 1) == 0) goto LAB_02f760a8;
              }
            }
            auVar23 = pauVar2[2];
            auVar25._0_12_ = auVar23._0_12_;
            auVar25._12_4_ = 0x3f800000;
            auVar32 = NEON_frecpe(auVar25,4);
            puVar14 = *(undefined8 **)(plVar22[5] + 0x20);
            auVar45 = NEON_frecps(auVar25,auVar32,4);
            auVar46._0_4_ = auVar32._0_4_ * auVar45._0_4_;
            auVar46._4_4_ = auVar32._4_4_ * auVar45._4_4_;
            auVar46._8_4_ = auVar32._8_4_ * auVar45._8_4_;
            auVar46._12_4_ = auVar32._12_4_ * auVar45._12_4_;
            auVar32 = *pauVar2;
            fVar26 = *(float *)pauVar2[1];
            fVar33 = *(float *)(pauVar2[1] + 4);
            fVar34 = *(float *)(pauVar2[1] + 8);
            auVar45 = NEON_ext(auVar32,auVar32,8,1);
            fVar35 = auVar32._0_4_;
            auVar62._0_4_ = fVar35 + fVar35;
            fVar42 = auVar32._4_4_;
            auVar62._4_4_ = fVar42 + fVar42;
            auVar62._8_4_ = auVar32._8_4_ + auVar32._8_4_;
            fVar43 = auVar32._12_4_;
            auVar62._12_4_ = fVar43 + fVar43;
            auVar32 = NEON_ext(auVar62,auVar62,8,1);
            fVar60 = auVar45._0_4_ * auVar32._0_4_;
            fVar41 = (float)*puVar14;
            fVar67 = (float)((ulong)*puVar14 >> 0x20);
            fVar68 = (float)puVar14[1];
            fVar69 = (float)((ulong)puVar14[1] >> 0x20);
            fVar70 = (float)puVar14[2];
            fVar71 = (float)((ulong)puVar14[2] >> 0x20);
            fVar72 = (float)puVar14[3];
            fVar73 = (float)((ulong)puVar14[3] >> 0x20);
            fVar36 = auVar62._8_4_ * fVar35 - auVar62._4_4_ * fVar43;
            fVar64 = auVar62._8_4_ * fVar35 + auVar62._4_4_ * fVar43;
            fVar74 = (float)puVar14[4];
            fVar75 = (float)((ulong)puVar14[4] >> 0x20);
            fVar76 = (float)puVar14[5];
            fVar77 = (float)((ulong)puVar14[5] >> 0x20);
            fVar65 = (float)uVar27;
            fVar57 = fVar65 - (auVar62._0_4_ * fVar35 + auVar62._4_4_ * fVar42);
            fVar61 = auVar62._8_4_ * fVar42 - auVar62._0_4_ * fVar43;
            fVar54 = auVar62._8_4_ * fVar42 + auVar62._0_4_ * fVar43;
            fVar59 = fVar65 - (auVar62._4_4_ * fVar42 + fVar60);
            fVar66 = auVar62._4_4_ * fVar35 - auVar62._8_4_ * fVar43;
            fVar63 = auVar62._4_4_ * fVar35 + auVar62._8_4_ * fVar43;
            auVar32 = NEON_frecps(auVar25,auVar46,4);
            uStack_a8 = CONCAT44(fVar69 * fVar64 + fVar73 * fVar61 + fVar77 * fVar57,
                                 fVar68 * fVar64 + fVar72 * fVar61 + fVar76 * fVar57);
            fVar44 = auVar46._0_4_ * auVar32._0_4_;
            fVar48 = auVar46._4_4_ * auVar32._4_4_;
            auVar47._0_8_ = CONCAT44(fVar48,fVar44);
            auVar47._8_4_ = auVar46._8_4_ * auVar32._8_4_;
            auVar47._12_4_ = auVar46._12_4_ * auVar32._12_4_;
            local_b0 = CONCAT44(fVar67 * fVar64 + fVar71 * fVar61 + fVar75 * fVar57,
                                fVar41 * fVar64 + fVar70 * fVar61 + fVar74 * fVar57);
            fVar65 = fVar65 - (auVar62._0_4_ * fVar35 + fVar60);
            uStack_b8 = CONCAT44(fVar77 * fVar54 + fVar69 * fVar66 + fVar73 * fVar65,
                                 fVar76 * fVar54 + fVar68 * fVar66 + fVar72 * fVar65);
            local_d0 = CONCAT44(fVar75 * fVar36 + fVar71 * fVar63 + fVar67 * fVar59,
                                fVar74 * fVar36 + fVar70 * fVar63 + fVar41 * fVar59);
            uStack_c8 = CONCAT44(fVar77 * fVar36 + fVar73 * fVar63 + fVar69 * fVar59,
                                 fVar76 * fVar36 + fVar72 * fVar63 + fVar68 * fVar59);
            uStack_c0 = CONCAT44(fVar75 * fVar54 + fVar67 * fVar66 + fVar71 * fVar65,
                                 fVar74 * fVar54 + fVar41 * fVar66 + fVar70 * fVar65);
            local_a0 = CONCAT44(fVar75 * fVar34 + fVar67 * fVar26 + fVar71 * fVar33 +
                                (float)((ulong)puVar14[6] >> 0x20),
                                fVar74 * fVar34 + fVar41 * fVar26 + fVar70 * fVar33 +
                                (float)puVar14[6]);
            uStack_98 = CONCAT44(fVar77 * fVar34 + fVar69 * fVar26 + fVar73 * fVar33 +
                                 (float)((ulong)puVar14[7] >> 0x20),
                                 fVar76 * fVar34 + fVar68 * fVar26 + fVar72 * fVar33 +
                                 (float)puVar14[7]);
            puVar14 = (undefined8 *)plVar22[4];
            uStack_128 = puVar14[3];
            uStack_138 = puVar14[1];
            local_140 = *puVar14;
            local_130 = puVar14[2];
            local_120 = (float *)puVar14[4];
            local_e0 = *(undefined4 *)(puVar14 + 0xc);
            fVar35 = *(float *)(puVar14 + 8);
            fVar42 = *(float *)((long)puVar14 + 0x44);
            fVar43 = *(float *)(puVar14 + 9);
            lVar11 = plVar22[7];
            fVar26 = (float)puVar14[6] - fVar26;
            fVar33 = (float)((ulong)puVar14[6] >> 0x20) - fVar33;
            fVar34 = (float)puVar14[7] - fVar34;
            uVar28 = *(undefined8 *)(lVar11 + 0x10);
            fVar60 = fVar44 * (fVar36 * fVar43 + fVar59 * fVar35 + fVar63 * fVar42);
            fVar41 = fVar48 * (fVar54 * fVar43 + fVar66 * fVar35 + fVar65 * fVar42);
            fVar42 = auVar47._8_4_ * (fVar57 * fVar43 + fVar64 * fVar35 + fVar61 * fVar42);
            local_160 = DAT_03aae450;
            uStack_158 = DAT_03aae458;
            iVar49 = -(uint)(fVar60 == 0.0);
            iVar51 = -(uint)(fVar41 == 0.0);
            iVar52 = -(uint)(fVar42 == 0.0);
            iVar53 = -(uint)((float)uVar28 == 0.0);
            fVar35 = (float)CONCAT13((byte)((uint)fVar60 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                     CONCAT12((byte)((uint)fVar60 >> 0x10) &
                                              ~(byte)((uint)iVar49 >> 0x10),
                                              CONCAT11((byte)((uint)fVar60 >> 8) &
                                                       ~(byte)((uint)iVar49 >> 8),
                                                       SUB41(fVar60,0) & ~(byte)iVar49)));
            auVar38._0_8_ =
                 CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar51 >> 0x18),
                          CONCAT16((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar51 >> 0x10),
                                   CONCAT15((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar51 >> 8),
                                            CONCAT14(SUB41(fVar41,0) & ~(byte)iVar51,fVar35))));
            auVar38[8] = SUB41(fVar42,0) & ~(byte)iVar52;
            auVar38[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar52 >> 8);
            auVar38[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar52 >> 0x10);
            auVar38[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar52 >> 0x18);
            auVar40[0xc] = (byte)uVar28 & ~(byte)iVar53;
            auVar40._0_12_ = auVar38;
            auVar40[0xd] = (byte)((ulong)uVar28 >> 8) & ~(byte)((uint)iVar53 >> 8);
            auVar40[0xe] = (byte)((ulong)uVar28 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
            auVar40[0xf] = (byte)((ulong)uVar28 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
            local_150 = DAT_03aae460;
            uStack_148 = DAT_03aae468;
            auVar32 = NEON_frecpe(auVar40,4);
            iVar49 = -(uint)(fVar35 == 0.0);
            iVar51 = -(uint)((float)((ulong)auVar38._0_8_ >> 0x20) == 0.0);
            iVar52 = -(uint)(auVar38._8_4_ == 0.0);
            iVar53 = -(uint)(auVar40._12_4_ == 0.0);
            auVar50[0] = ~(byte)iVar49;
            auVar50[1] = ~(byte)((uint)iVar49 >> 8);
            auVar50[2] = ~(byte)((uint)iVar49 >> 0x10);
            auVar50[3] = ~(byte)((uint)iVar49 >> 0x18);
            auVar50[4] = ~(byte)iVar51;
            auVar50[5] = ~(byte)((uint)iVar51 >> 8);
            auVar50[6] = ~(byte)((uint)iVar51 >> 0x10);
            auVar50[7] = ~(byte)((uint)iVar51 >> 0x18);
            auVar50[8] = ~(byte)iVar52;
            auVar50[9] = ~(byte)((uint)iVar52 >> 8);
            auVar50[10] = ~(byte)((uint)iVar52 >> 0x10);
            auVar50[0xb] = ~(byte)((uint)iVar52 >> 0x18);
            auVar50[0xc] = ~(byte)iVar53;
            auVar50[0xd] = ~(byte)((uint)iVar53 >> 8);
            auVar50[0xe] = ~(byte)((uint)iVar53 >> 0x10);
            auVar50[0xf] = ~(byte)((uint)iVar53 >> 0x18);
            auVar45 = NEON_frecps(auVar40,auVar32,4);
            auVar55._0_4_ = auVar32._0_4_ * auVar45._0_4_;
            auVar55._4_4_ = auVar32._4_4_ * auVar45._4_4_;
            auVar55._8_4_ = auVar32._8_4_ * auVar45._8_4_;
            auVar55._12_4_ = auVar32._12_4_ * auVar45._12_4_;
            local_180 = DAT_03aae430;
            uStack_178 = DAT_03aae438;
            auVar32 = NEON_frecps(auVar40,auVar55,4);
            auVar56._0_4_ = auVar55._0_4_ * auVar32._0_4_;
            auVar56._4_4_ = auVar55._4_4_ * auVar32._4_4_;
            auVar56._8_4_ = auVar55._8_4_ * auVar32._8_4_;
            auVar56._12_4_ = auVar55._12_4_ * auVar32._12_4_;
            auVar45._8_4_ = 0x7f7fffee;
            auVar45._0_8_ = 0x7f7fffee7f7fffee;
            auVar45._12_4_ = 0x7f7fffee;
            uStack_108 = CONCAT44(auVar47._12_4_ * (fVar34 * 0.0 + fVar61 * fVar26 + fVar33 * 0.0),
                                  auVar47._8_4_ *
                                  (fVar57 * fVar34 + fVar64 * fVar26 + fVar61 * fVar33));
            local_110 = CONCAT44(fVar48 * (fVar54 * fVar34 + fVar66 * fVar26 + fVar65 * fVar33),
                                 fVar44 * (fVar36 * fVar34 + fVar59 * fVar26 + fVar63 * fVar33));
            local_170 = DAT_03aae440;
            uStack_168 = DAT_03aae448;
            auVar45 = auVar45 ^ (auVar45 ^ auVar56) & auVar50;
            uStack_f8 = auVar40._8_8_;
            uStack_e8 = auVar45._8_8_;
            local_f0 = auVar45._0_8_;
            puVar14 = (undefined8 *)plVar22[5];
            uVar13 = (ulong)local_1b0 >> 8;
            local_1e0 = *puVar14;
            local_1d8 = puVar14[1];
            local_1a0 = puVar14[8];
            uStack_198 = puVar14[9];
            local_190 = puVar14[10];
            uStack_188 = puVar14[0xb];
            uStack_1a8 = *(undefined4 *)(puVar14 + 7);
            local_1b0 = (undefined1 *)
                        CONCAT44(*(undefined4 *)((long)puVar14 + 0x34),
                                 (int)CONCAT71((int7)uVar13,*(undefined1 *)(puVar14 + 6)));
            local_1c0 = &local_180;
            local_1d0 = *plVar22;
            local_1c8 = CONCAT44(iVar16,uVar20);
            local_1b8 = 0;
            plVar22[0xd] = auVar25._8_8_;
            plVar22[0xc] = auVar23._0_8_;
            plVar22[0xf] = auVar47._8_8_;
            plVar22[0xe] = auVar47._0_8_;
            plVar22[0x10] = (long)&local_d0;
            plVar22[0x11] = lVar11;
            *(undefined1 *)(plVar22 + 9) = *(undefined1 *)(lVar11 + 8);
            lVar15 = NEON_fmin(plVar22[10],*(undefined8 *)(lVar11 + 0x10),4);
            plVar22[10] = lVar15;
            if ((char)plVar22[0xb] == '\0') {
              bVar9 = *(char *)(lVar11 + 0x18) != '\0';
            }
            else {
              bVar9 = true;
            }
            *(bool *)(plVar22 + 0xb) = bVar9;
            *(undefined4 *)((long)plVar22 + 0x4c) = *(undefined4 *)(lVar11 + 0xc);
            local_100 = auVar38._0_8_;
            (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar19[0x18] * 0x200 + 0xd0))
                      (puVar19,plVar22[3],&local_140,&local_88,&local_1e0,plVar22 + 8);
          }
LAB_02f760a8:
          if (lVar21 != 0) {
            puVar14 = *(undefined8 **)(lVar21 + 8);
            uVar13 = (long)puVar14 + 0x17U & 0xfffffffffffffff8;
            if ((uVar13 <= *(ulong *)(lVar21 + 0x10)) &&
               (*(ulong *)(lVar21 + 8) = uVar13, puVar14 != (undefined8 *)0x0)) {
              *puVar14 = &DAT_0390f40e;
              uVar28 = nn::os::GetSystemTick();
              puVar14[1] = uVar28;
            }
          }
        }
        else {
          uVar1 = (uint)(undefined4)local_118 >> 0x10;
          local_118._0_4_ = CONCAT22((short)uVar1,uVar4);
          lVar21 = 0;
          if (*param_1 != 0) {
            lVar21 = *param_1 + (long)param_1;
          }
          pfVar17 = (float *)(lVar21 + (ulong)uVar4 * 0x20);
          local_120 = pfVar17;
          local_130 = *(undefined8 *)(pfVar17 + 4);
          uStack_128 = (ulong)(uint)pfVar17[6];
          local_140 = *(undefined8 *)pfVar17;
          uStack_138 = *(undefined8 *)(pfVar17 + 2);
          local_f0 = (float *)(lVar21 + (ulong)*(ushort *)((long)pfVar18 + 0x1e) * 0x20);
          uVar13 = (ulong)uStack_e8 >> 0x10;
          uStack_e8 = CONCAT62((int6)uVar13,*(ushort *)((long)pfVar18 + 0x1e));
          uStack_f8 = (ulong)(uint)local_f0[6];
          local_100 = *(undefined8 *)(local_f0 + 4);
          uStack_108 = *(undefined8 *)(local_f0 + 2);
          local_110 = *(undefined8 *)local_f0;
          auVar23 = *(undefined1 (*) [16])(param_3 + 2);
          fVar26 = auVar23._0_4_;
          fVar34 = auVar23._4_4_;
          fVar35 = auVar23._8_4_;
          fVar42 = auVar23._12_4_;
          auVar23 = *(undefined1 (*) [16])(param_3 + 6);
          uVar58 = *(undefined8 *)(*(long *)(*param_3 + 0x38) + 0x10);
          fVar43 = auVar23._0_4_;
          auVar30._0_4_ = (*pfVar17 - fVar26) * fVar43;
          fVar36 = auVar23._4_4_;
          auVar30._4_4_ = (pfVar17[1] - fVar34) * fVar36;
          fVar60 = auVar23._8_4_;
          auVar30._8_4_ = (pfVar17[2] - fVar35) * fVar60;
          fVar41 = auVar23._12_4_;
          auVar30._12_4_ = (pfVar17[3] - fVar42) * fVar41;
          auVar24._0_4_ = fVar43 * (pfVar17[4] - fVar26);
          auVar24._4_4_ = fVar36 * (pfVar17[5] - fVar34);
          auVar24._8_4_ = fVar60 * (pfVar17[6] - fVar35);
          auVar24._12_4_ = fVar41 * (0.0 - fVar42);
          auVar39._0_4_ = fVar43 * (local_f0[4] - fVar26);
          auVar39._4_4_ = fVar36 * (local_f0[5] - fVar34);
          auVar39._8_4_ = fVar60 * (local_f0[6] - fVar35);
          auVar39._12_4_ = fVar41 * (0.0 - fVar42);
          auVar32 = NEON_fmin(auVar30,auVar24,4);
          auVar23 = NEON_fmax(auVar30,auVar24,4);
          uVar28 = NEON_fmaxp(auVar32._0_8_,auVar32._0_8_,4);
          uVar29 = NEON_fmax(CONCAT44(auVar32._8_4_,auVar32._8_4_),uVar28,4);
          uVar28 = NEON_fminp(auVar23._0_8_,auVar23._0_8_,4);
          uVar28 = NEON_fmin(CONCAT44(auVar23._8_4_,auVar23._8_4_),uVar28,4);
          uVar29 = NEON_fmax(uVar29,0,4);
          fVar33 = (float)uVar29;
          auVar31._0_4_ = fVar43 * (*local_f0 - fVar26);
          auVar31._4_4_ = fVar36 * (local_f0[1] - fVar34);
          auVar31._8_4_ = fVar60 * (local_f0[2] - fVar35);
          auVar31._12_4_ = fVar41 * (local_f0[3] - fVar42);
          uVar28 = NEON_fmin(uVar28,uVar58,4);
          auVar23 = NEON_fmin(auVar31,auVar39,4);
          auVar32 = NEON_fmax(auVar31,auVar39,4);
          uVar29 = NEON_fmaxp(auVar23._0_8_,auVar23._0_8_,4);
          uVar29 = NEON_fmax(CONCAT44(auVar23._8_4_,auVar23._8_4_),uVar29,4);
          uVar37 = NEON_fminp(auVar32._0_8_,auVar32._0_8_,4);
          uVar37 = NEON_fmin(CONCAT44(auVar32._8_4_,auVar32._8_4_),uVar37,4);
          uVar29 = NEON_fmax(uVar29,0,4);
          fVar26 = (float)uVar29;
          uVar29 = NEON_fmin(uVar37,uVar58,4);
          bVar3 = fVar33 <= (float)uVar28 | (fVar26 <= (float)uVar29) << 1;
          if ((bVar3 == 1) || (pfVar17 = local_f0, bVar3 == 2)) {
            uVar4 = *(ushort *)(pfVar17 + 7);
            pfVar18 = pfVar17;
            goto joined_r0x02f75a5c;
          }
          if (bVar3 == 3) {
            *(uint *)(param_3 + 8) = (uint)(fVar26 < fVar33);
            iVar16 = (int)param_2[1];
            uVar12 = *(uint *)((long)param_2 + 0xc);
            uVar1 = iVar16 + 1;
            if (iVar16 < (int)(uVar12 & 0x3fffffff)) {
              lVar21 = *param_2;
            }
            else {
              lVar21 = *param_2;
              if (0x3ffffffe < iVar16) {
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
              lVar21 = FUN_032bd1d4(puVar8,uVar6,2,lVar21,iVar16,(uint *)((long)param_2 + 0xc));
              *param_2 = lVar21;
              iVar16 = (int)param_2[1];
            }
            *(uint *)(param_2 + 1) = uVar1;
            *(undefined2 *)(lVar21 + (long)iVar16 * 2) =
                 *(undefined2 *)(&local_118 + (ulong)(fVar26 >= fVar33) * 6);
            pfVar18 = (float *)(&local_118)[(ulong)(fVar26 < fVar33) * 6 + 0xffffffffffffffff];
            uVar4 = *(ushort *)(pfVar18 + 7);
            goto joined_r0x02f75a5c;
          }
        }
        if ((int)param_2[1] <= (int)lVar7) {
          return;
        }
        iVar16 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar16;
        lVar21 = 0;
        if (*param_1 != 0) {
          lVar21 = *param_1 + (long)param_1;
        }
        pfVar18 = (float *)(lVar21 + (ulong)*(ushort *)(*param_2 + (long)iVar16 * 2) * 0x20);
        uVar4 = *(ushort *)(pfVar18 + 7);
      } while( true );
    }
  }
  return;
}


