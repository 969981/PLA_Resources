/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03267e50; name: FUN_03267e50
 */


undefined4
FUN_03267e50(float *param_1,undefined1 (*param_2) [16],long param_3,long param_4,int param_5,
            int param_6,int param_7,int param_8,int *param_9)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  long *plVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  float fVar64;
  float fVar65;
  float fVar72;
  undefined8 uVar66;
  ulong uVar67;
  ulong uVar68;
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar74;
  float fVar75;
  float fVar81;
  ulong uVar76;
  int iVar80;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar82;
  float fVar83;
  float fVar84;
  undefined8 uVar85;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar86;
  undefined1 auVar87 [16];
  undefined8 uVar93;
  undefined1 auVar94 [16];
  float fVar96;
  ulong uVar95;
  undefined8 uVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  lVar23 = *(long *)(param_3 + 0x20);
  auVar44 = *param_2;
  if (param_5 < *(int *)(lVar23 + 0x30)) {
    lVar21 = *(long *)(lVar23 + 0x28);
    iVar74 = param_5;
    if (*(int *)(lVar23 + 0x78) != 0) {
      iVar74 = *(int *)(*(long *)(lVar23 + 0x70) + (long)param_5 * 4);
    }
    if (iVar74 != -1) {
      plVar15 = (long *)(lVar23 + 0xc0);
      goto LAB_03267ed8;
    }
    iVar74 = param_5;
  }
  else {
    iVar74 = param_5 - *(int *)(lVar23 + 0x30);
    plVar15 = (long *)(lVar23 + 0xe0);
LAB_03267ed8:
    lVar21 = *plVar15;
  }
  lVar20 = *(long *)(param_4 + 0x20);
  if (param_6 < *(int *)(lVar20 + 0x30)) {
    lVar19 = *(long *)(lVar20 + 0x28);
    iVar80 = param_6;
    if (*(int *)(lVar20 + 0x78) != 0) {
      iVar80 = *(int *)(*(long *)(lVar20 + 0x70) + (long)param_6 * 4);
    }
    if (iVar80 != -1) {
      plVar15 = (long *)(lVar20 + 0xc0);
      goto LAB_03267f20;
    }
    iVar80 = param_6;
  }
  else {
    iVar80 = param_6 - *(int *)(lVar20 + 0x30);
    plVar15 = (long *)(lVar20 + 0xe0);
LAB_03267f20:
    lVar19 = *plVar15;
  }
  iVar17 = *(int *)(lVar23 + 0x40);
  iVar26 = *(int *)(lVar21 + (long)iVar74 * 0x14);
  plVar15 = (long *)(lVar23 + 0x38);
  if (iVar26 < iVar17) {
    iVar22 = 0;
    plVar27 = plVar15;
  }
  else {
    plVar27 = (long *)(lVar23 + 0xf0);
    iVar22 = iVar17;
  }
  pfVar1 = (float *)(*plVar27 + (long)(iVar26 - iVar22) * 0x10);
  fVar55 = *pfVar1;
  fVar56 = pfVar1[1];
  fVar47 = pfVar1[2];
  fVar48 = (float)*(undefined8 *)(param_3 + 0x78);
  fVar51 = (float)((ulong)*(undefined8 *)(param_3 + 0x78) >> 0x20);
  fVar30 = (float)*(undefined8 *)(param_3 + 0x70);
  fVar31 = (float)((ulong)*(undefined8 *)(param_3 + 0x70) >> 0x20);
  fVar52 = (float)*(undefined8 *)(param_3 + 0x88);
  fVar59 = (float)((ulong)*(undefined8 *)(param_3 + 0x88) >> 0x20);
  fVar39 = (float)*(undefined8 *)(param_3 + 0x80);
  fVar40 = (float)((ulong)*(undefined8 *)(param_3 + 0x80) >> 0x20);
  fVar45 = *(float *)(param_3 + 0x90) +
           fVar39 * fVar47 + *(float *)(param_3 + 0x60) * fVar55 + fVar30 * fVar56;
  fVar49 = *(float *)(param_3 + 0x94) +
           fVar40 * fVar47 + *(float *)(param_3 + 100) * fVar55 + fVar31 * fVar56;
  fVar53 = *(float *)(param_3 + 0x98) +
           fVar52 * fVar47 + *(float *)(param_3 + 0x68) * fVar55 + fVar48 * fVar56;
  fVar55 = *(float *)(param_3 + 0x9c) +
           fVar59 * fVar47 + *(float *)(param_3 + 0x6c) * fVar55 + fVar51 * fVar56;
  iVar74 = *(int *)(lVar21 + (long)iVar74 * 0x14 + 4);
  if (iVar74 < iVar17) {
    iVar17 = 0;
  }
  else {
    plVar15 = (long *)(lVar23 + 0xf0);
  }
  pfVar1 = (float *)(*plVar15 + (long)(iVar74 - iVar17) * 0x10);
  fVar56 = *pfVar1;
  fVar47 = pfVar1[1];
  fVar75 = pfVar1[2];
  local_a0 = *(float *)(param_3 + 0x90) +
             fVar39 * fVar75 + *(float *)(param_3 + 0x60) * fVar56 + fVar30 * fVar47;
  fStack_9c = *(float *)(param_3 + 0x94) +
              fVar40 * fVar75 + *(float *)(param_3 + 100) * fVar56 + fVar31 * fVar47;
  fStack_98 = *(float *)(param_3 + 0x98) +
              fVar52 * fVar75 + *(float *)(param_3 + 0x68) * fVar56 + fVar48 * fVar47;
  fStack_94 = *(float *)(param_3 + 0x9c) +
              fVar59 * fVar75 + *(float *)(param_3 + 0x6c) * fVar56 + fVar51 * fVar47;
  iVar17 = *(int *)(lVar19 + (long)iVar80 * 0x14);
  iVar74 = *(int *)(lVar20 + 0x40);
  plVar15 = (long *)(lVar20 + 0x38);
  if (iVar17 < iVar74) {
    iVar26 = 0;
    plVar27 = plVar15;
  }
  else {
    plVar27 = (long *)(lVar20 + 0xf0);
    iVar26 = iVar74;
  }
  pfVar1 = (float *)(*plVar27 + (long)(iVar17 - iVar26) * 0x10);
  fVar56 = *pfVar1;
  fVar47 = pfVar1[1];
  fVar48 = pfVar1[2];
  fVar51 = (float)*(undefined8 *)(param_4 + 0x78);
  fVar52 = (float)((ulong)*(undefined8 *)(param_4 + 0x78) >> 0x20);
  fVar30 = (float)*(undefined8 *)(param_4 + 0x70);
  fVar31 = (float)((ulong)*(undefined8 *)(param_4 + 0x70) >> 0x20);
  fVar59 = (float)*(undefined8 *)(param_4 + 0x88);
  fVar75 = (float)((ulong)*(undefined8 *)(param_4 + 0x88) >> 0x20);
  auVar33 = *(undefined1 (*) [16])(param_4 + 0x90);
  fVar39 = (float)*(undefined8 *)(param_4 + 0x80);
  fVar40 = (float)((ulong)*(undefined8 *)(param_4 + 0x80) >> 0x20);
  fVar46 = auVar33._0_4_ + fVar39 * fVar48 + *(float *)(param_4 + 0x60) * fVar56 + fVar30 * fVar47;
  fVar50 = auVar33._4_4_ + fVar40 * fVar48 + *(float *)(param_4 + 100) * fVar56 + fVar31 * fVar47;
  fVar54 = auVar33._8_4_ + fVar59 * fVar48 + *(float *)(param_4 + 0x68) * fVar56 + fVar51 * fVar47;
  fVar56 = auVar33._12_4_ + fVar75 * fVar48 + *(float *)(param_4 + 0x6c) * fVar56 + fVar52 * fVar47;
  iVar80 = *(int *)(lVar19 + (long)iVar80 * 0x14 + 4);
  if (iVar80 < iVar74) {
    iVar74 = 0;
  }
  else {
    plVar15 = (long *)(lVar20 + 0xf0);
  }
  auVar60 = *(undefined1 (*) [16])(*plVar15 + (long)(iVar80 - iVar74) * 0x10);
  fVar47 = auVar60._0_4_;
  fVar48 = auVar60._4_4_;
  fVar63 = auVar60._8_4_;
  auVar60._0_8_ =
       CONCAT44(auVar33._4_4_ +
                fVar40 * fVar63 + *(float *)(param_4 + 100) * fVar47 + fVar31 * fVar48,
                auVar33._0_4_ +
                fVar39 * fVar63 + *(float *)(param_4 + 0x60) * fVar47 + fVar30 * fVar48);
  auVar60._8_4_ =
       auVar33._8_4_ + fVar59 * fVar63 + *(float *)(param_4 + 0x68) * fVar47 + fVar51 * fVar48;
  auVar60._12_4_ =
       auVar33._12_4_ + fVar75 * fVar63 + *(float *)(param_4 + 0x6c) * fVar47 + fVar52 * fVar48;
  uStack_b8 = auVar60._8_8_;
  local_c0 = auVar60._0_8_;
  local_b0 = fVar46;
  fStack_ac = fVar50;
  fStack_a8 = fVar54;
  fStack_a4 = fVar56;
  local_90 = fVar45;
  fStack_8c = fVar49;
  fStack_88 = fVar53;
  fStack_84 = fVar55;
  FUN_032699a8(&local_1a0,&local_90,&local_a0,&local_b0,&local_c0);
  fStack_190 = fStack_190 - local_1a0;
  fStack_18c = fStack_18c - fStack_19c;
  fStack_188 = fStack_188 - fStack_198;
  fStack_184 = fStack_184 - fStack_194;
  auVar33 = *param_2;
  fVar59 = auVar33._0_4_;
  fVar75 = auVar33._4_4_;
  fVar63 = auVar33._8_4_;
  fVar65 = auVar33._12_4_;
  fVar47 = -(fStack_190 * fVar59 + fStack_18c * fVar75 + fStack_188 * fVar63);
  fVar51 = -(fStack_190 * fVar59 + fStack_18c * fVar75 + fStack_188 * fVar63);
  fVar30 = (float)uStack_170 - local_180;
  fVar31 = (float)((ulong)uStack_170 >> 0x20) - fStack_17c;
  fVar39 = (float)uStack_168 - fStack_178;
  fVar40 = (float)((ulong)uStack_168 >> 0x20) - fStack_174;
  fVar48 = fStack_190 + fVar59 * fVar47;
  fVar52 = fStack_18c + fVar75 * fVar51;
  fVar47 = fStack_188 + fVar63 * fVar47;
  fVar64 = fVar48 * fVar48 + fVar52 * fVar52 + fVar47 * fVar47;
  fVar72 = fVar48 * fVar48 + fVar52 * fVar52 + fVar47 * fVar47;
  uVar66 = CONCAT44(fVar72,fVar64);
  uVar85 = NEON_frsqrte(uVar66,4);
  fVar82 = (float)uVar85;
  fVar88 = (float)((ulong)uVar85 >> 0x20);
  uVar85 = NEON_frsqrts(uVar66,CONCAT44(fVar88 * fVar88,fVar82 * fVar82),4);
  fVar82 = fVar82 * (float)uVar85;
  fVar88 = fVar88 * (float)((ulong)uVar85 >> 0x20);
  iVar74 = -(uint)(fVar64 <= 0.0);
  iVar80 = -(uint)(fVar72 <= 0.0);
  uVar66 = NEON_frsqrts(uVar66,CONCAT44(fVar88 * fVar88,fVar82 * fVar82),4);
  fVar64 = -(fVar30 * fVar59 + fVar31 * fVar75 + fVar39 * fVar63);
  fVar61 = -(fVar30 * fVar59 + fVar31 * fVar75 + fVar39 * fVar63);
  fVar82 = (float)uVar66 * fVar82;
  fVar88 = (float)((ulong)uVar66 >> 0x20) * fVar88;
  fVar72 = fVar30 + fVar59 * fVar64;
  fVar62 = fVar31 + fVar75 * fVar61;
  fVar64 = fVar39 + fVar63 * fVar64;
  fVar82 = (float)CONCAT13((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar82,0) & ~(byte)iVar74)));
  fVar81 = (float)(CONCAT17((byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT16((byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT15((byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,CONCAT14(SUB41(fVar88,0) & ~(byte)iVar80,fVar82))))
                  >> 0x20);
  fVar88 = fVar72 * fVar72 + fVar62 * fVar62 + fVar64 * fVar64;
  fVar73 = fVar72 * fVar72 + fVar62 * fVar62 + fVar64 * fVar64;
  uVar66 = CONCAT44(fVar73,fVar88);
  uVar85 = NEON_frsqrte(uVar66,4);
  fVar83 = (float)uVar85;
  fVar89 = (float)((ulong)uVar85 >> 0x20);
  uVar85 = NEON_frsqrts(uVar66,CONCAT44(fVar89 * fVar89,fVar83 * fVar83),4);
  fVar83 = fVar83 * (float)uVar85;
  fVar89 = fVar89 * (float)((ulong)uVar85 >> 0x20);
  iVar74 = -(uint)(fVar88 <= 0.0);
  iVar80 = -(uint)(fVar73 <= 0.0);
  uVar66 = NEON_frsqrts(uVar66,CONCAT44(fVar89 * fVar89,fVar83 * fVar83),4);
  fVar83 = (float)uVar66 * fVar83;
  fVar89 = (float)((ulong)uVar66 >> 0x20) * fVar89;
  fVar88 = (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar83,0) & ~(byte)iVar74)));
  fVar83 = (float)(CONCAT17((byte)((uint)fVar89 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT16((byte)((uint)fVar89 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT15((byte)((uint)fVar89 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,CONCAT14(SUB41(fVar89,0) & ~(byte)iVar80,fVar88))))
                  >> 0x20);
  auVar77._0_4_ = fVar48 * fVar82 * fVar72 * fVar88;
  auVar77._4_4_ = fVar52 * fVar81 * fVar62 * fVar83;
  auVar77._8_4_ = fVar47 * fVar82 * fVar64 * fVar88;
  auVar77._12_4_ = (fStack_184 + fVar65 * fVar51) * fVar81 * (fVar40 + fVar65 * fVar61) * fVar83;
  auVar60 = NEON_ext(auVar77,auVar77,8,1);
  fVar47 = -(auVar77._0_4_ + auVar77._4_4_ + auVar60._0_4_);
  if (fVar47 < param_1[4]) {
    return 0;
  }
  fVar48 = fStack_190 * fStack_190 + fStack_18c * fStack_18c + fStack_188 * fStack_188;
  fVar52 = fStack_190 * fStack_190 + fStack_18c * fStack_18c + fStack_188 * fStack_188;
  uVar66 = CONCAT44(fVar52,fVar48);
  uVar85 = NEON_frsqrte(uVar66,4);
  fVar51 = (float)uVar85;
  fVar64 = (float)((ulong)uVar85 >> 0x20);
  uVar85 = NEON_frsqrts(uVar66,CONCAT44(fVar64 * fVar64,fVar51 * fVar51),4);
  fVar51 = fVar51 * (float)uVar85;
  fVar64 = fVar64 * (float)((ulong)uVar85 >> 0x20);
  iVar74 = -(uint)(fVar48 <= 0.0);
  iVar80 = -(uint)(fVar52 <= 0.0);
  uVar66 = NEON_frsqrts(uVar66,CONCAT44(fVar64 * fVar64,fVar51 * fVar51),4);
  fVar51 = (float)uVar66 * fVar51;
  fVar64 = (float)((ulong)uVar66 >> 0x20) * fVar64;
  fVar48 = (float)CONCAT13((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar51,0) & ~(byte)iVar74)));
  fVar100 = fStack_190 * fVar48;
  fVar64 = (float)(CONCAT17((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT16((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT15((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,CONCAT14(SUB41(fVar64,0) & ~(byte)iVar80,fVar48))))
                  >> 0x20);
  fVar101 = fStack_18c * fVar64;
  fVar48 = fStack_188 * fVar48;
  fVar64 = fStack_184 * fVar64;
  fVar51 = fVar39 * fVar39 + fVar30 * fVar30 + fVar31 * fVar31;
  fVar72 = fVar39 * fVar39 + fVar30 * fVar30 + fVar31 * fVar31;
  uVar66 = CONCAT44(fVar72,fVar51);
  uVar85 = NEON_frsqrte(uVar66,4);
  fVar52 = (float)uVar85;
  fVar61 = (float)((ulong)uVar85 >> 0x20);
  uVar85 = NEON_frsqrts(uVar66,CONCAT44(fVar61 * fVar61,fVar52 * fVar52),4);
  fVar52 = fVar52 * (float)uVar85;
  fVar61 = fVar61 * (float)((ulong)uVar85 >> 0x20);
  iVar74 = -(uint)(fVar51 <= 0.0);
  iVar80 = -(uint)(fVar72 <= 0.0);
  uVar66 = NEON_frsqrts(uVar66,CONCAT44(fVar61 * fVar61,fVar52 * fVar52),4);
  fVar52 = (float)uVar66 * fVar52;
  fVar61 = (float)((ulong)uVar66 >> 0x20) * fVar61;
  auVar77 = NEON_ext(auVar33,auVar33,4,1);
  fVar51 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar52,0) & ~(byte)iVar74)));
  fVar98 = fVar30 * fVar51;
  fVar52 = (float)(CONCAT17((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT16((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT15((byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,CONCAT14(SUB41(fVar61,0) & ~(byte)iVar80,fVar51))))
                  >> 0x20);
  fVar99 = fVar31 * fVar52;
  fVar51 = fVar39 * fVar51;
  fVar52 = fVar40 * fVar52;
  auVar33._0_4_ = fVar100 - fVar98;
  auVar33._4_4_ = fVar101 - fVar99;
  auVar33._8_4_ = fVar48 - fVar51;
  auVar33._12_4_ = fVar64 - fVar52;
  auVar60 = NEON_ext(auVar33,auVar33,4,1);
  auVar69._0_4_ = auVar77._0_4_ * auVar33._0_4_ - fVar59 * auVar60._0_4_;
  auVar69._4_4_ = auVar77._4_4_ * auVar33._4_4_ - fVar75 * auVar60._4_4_;
  auVar69._8_4_ = fVar59 * auVar33._8_4_ - fVar63 * auVar33._0_4_;
  auVar69._12_4_ = fVar75 * auVar33._12_4_ - fVar65 * auVar33._4_4_;
  auVar60 = NEON_ext(auVar69,auVar69,4,1);
  fVar61 = auVar60._0_4_;
  fVar88 = auVar60._4_4_;
  fVar65 = auVar69._0_4_ * auVar69._0_4_ + fVar61 * fVar61 + fVar88 * fVar88;
  fVar62 = auVar69._0_4_ * auVar69._0_4_ + fVar61 * fVar61 + fVar88 * fVar88;
  uVar66 = CONCAT44(fVar62,fVar65);
  uVar85 = NEON_frsqrte(uVar66,4);
  fVar72 = (float)uVar85;
  fVar82 = (float)((ulong)uVar85 >> 0x20);
  uVar85 = NEON_frsqrts(uVar66,CONCAT44(fVar82 * fVar82,fVar72 * fVar72),4);
  fVar72 = fVar72 * (float)uVar85;
  fVar82 = fVar82 * (float)((ulong)uVar85 >> 0x20);
  iVar74 = -(uint)(fVar65 <= 0.0);
  iVar80 = -(uint)(fVar62 <= 0.0);
  uVar66 = NEON_frsqrts(uVar66,CONCAT44(fVar82 * fVar82,fVar72 * fVar72),4);
  fVar72 = (float)uVar66 * fVar72;
  fVar82 = (float)((ulong)uVar66 >> 0x20) * fVar82;
  fVar65 = (float)CONCAT13((byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar72,0) & ~(byte)iVar74)));
  fVar61 = fVar61 * fVar65;
  fVar62 = (float)(CONCAT17((byte)((uint)fVar82 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT16((byte)((uint)fVar82 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT15((byte)((uint)fVar82 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,CONCAT14(SUB41(fVar82,0) & ~(byte)iVar80,fVar65))))
                  >> 0x20);
  fVar88 = fVar88 * fVar62;
  fVar65 = auVar69._0_4_ * fVar65;
  fVar62 = auVar69._4_4_ * fVar62;
  fVar72 = -(fVar100 * fVar61 + fVar101 * fVar88 + fVar48 * fVar65);
  fVar83 = -(fVar100 * fVar61 + fVar101 * fVar88 + fVar48 * fVar65);
  fVar89 = -(fVar98 * fVar61 + fVar99 * fVar88 + fVar51 * fVar65);
  fVar90 = -(fVar98 * fVar61 + fVar99 * fVar88 + fVar51 * fVar65);
  fVar82 = fVar100 + fVar61 * fVar72;
  fVar81 = fVar101 + fVar88 * fVar83;
  fVar73 = fVar48 + fVar65 * fVar72;
  fVar84 = fVar82 * fVar82 + fVar81 * fVar81 + fVar73 * fVar73;
  fVar91 = fVar82 * fVar82 + fVar81 * fVar81 + fVar73 * fVar73;
  uVar66 = CONCAT44(fVar91,fVar84);
  uVar85 = NEON_frsqrte(uVar66,4);
  fVar72 = fVar98 + fVar61 * fVar89;
  fVar61 = fVar99 + fVar88 * fVar90;
  fVar65 = fVar51 + fVar65 * fVar89;
  fVar88 = (float)uVar85;
  fVar89 = (float)((ulong)uVar85 >> 0x20);
  uVar85 = NEON_frsqrts(uVar66,CONCAT44(fVar89 * fVar89,fVar88 * fVar88),4);
  fVar88 = fVar88 * (float)uVar85;
  fVar89 = fVar89 * (float)((ulong)uVar85 >> 0x20);
  iVar74 = -(uint)(fVar84 <= 0.0);
  iVar80 = -(uint)(fVar91 <= 0.0);
  uVar66 = NEON_frsqrts(uVar66,CONCAT44(fVar89 * fVar89,fVar88 * fVar88),4);
  fVar88 = (float)uVar66 * fVar88;
  fVar89 = (float)((ulong)uVar66 >> 0x20) * fVar89;
  fVar88 = (float)CONCAT13((byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar88,0) & ~(byte)iVar74)));
  fVar91 = (float)(CONCAT17((byte)((uint)fVar89 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT16((byte)((uint)fVar89 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT15((byte)((uint)fVar89 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,CONCAT14(SUB41(fVar89,0) & ~(byte)iVar80,fVar88))))
                  >> 0x20);
  fVar89 = fVar72 * fVar72 + fVar61 * fVar61 + fVar65 * fVar65;
  fVar92 = fVar72 * fVar72 + fVar61 * fVar61 + fVar65 * fVar65;
  uVar66 = CONCAT44(fVar92,fVar89);
  uVar85 = NEON_frsqrte(uVar66,4);
  fVar84 = (float)uVar85;
  fVar96 = (float)((ulong)uVar85 >> 0x20);
  uVar85 = NEON_frsqrts(uVar66,CONCAT44(fVar96 * fVar96,fVar84 * fVar84),4);
  fVar84 = fVar84 * (float)uVar85;
  fVar96 = fVar96 * (float)((ulong)uVar85 >> 0x20);
  iVar74 = -(uint)(fVar89 <= 0.0);
  iVar80 = -(uint)(fVar92 <= 0.0);
  uVar66 = NEON_frsqrts(uVar66,CONCAT44(fVar96 * fVar96,fVar84 * fVar84),4);
  fVar84 = (float)uVar66 * fVar84;
  fVar96 = (float)((ulong)uVar66 >> 0x20) * fVar96;
  fVar89 = (float)CONCAT13((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar84 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar84 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar84,0) & ~(byte)iVar74)));
  fVar84 = (float)(CONCAT17((byte)((uint)fVar96 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT16((byte)((uint)fVar96 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT15((byte)((uint)fVar96 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,CONCAT14(SUB41(fVar96,0) & ~(byte)iVar80,fVar89))))
                  >> 0x20);
  auVar70._0_4_ = fVar82 * fVar88 * fVar72 * fVar89;
  auVar70._4_4_ = fVar81 * fVar91 * fVar61 * fVar84;
  auVar70._8_4_ = fVar73 * fVar88 * fVar65 * fVar89;
  auVar70._12_4_ = (fVar64 + fVar62 * fVar83) * fVar91 * (fVar52 + fVar62 * fVar90) * fVar84;
  auVar60 = NEON_ext(auVar70,auVar70,8,1);
  if (-(auVar70._0_4_ + auVar70._4_4_ + auVar60._0_4_) < param_1[5]) {
    return 1;
  }
  fVar72 = fVar59 * auVar33._0_4_ * 0.5;
  fVar62 = fVar75 * auVar33._4_4_ * 0.5;
  fVar82 = fVar63 * auVar33._8_4_ * 0.5;
  fVar61 = -(fVar82 + fVar72 + fVar62);
  fVar65 = auVar33._0_4_ * 0.5 + fVar59 * fVar61;
  fVar72 = auVar33._4_4_ * 0.5 + fVar75 * -(fVar82 + fVar72 + fVar62);
  fVar61 = auVar33._8_4_ * 0.5 + fVar63 * fVar61;
  fVar59 = fVar65 * fVar65 + fVar72 * fVar72 + fVar61 * fVar61;
  fVar63 = fVar65 * fVar65 + fVar72 * fVar72 + fVar61 * fVar61;
  uVar66 = CONCAT44(fVar63,fVar59);
  uVar85 = NEON_frsqrte(uVar66,4);
  fVar75 = (float)uVar85;
  fVar62 = (float)((ulong)uVar85 >> 0x20);
  uVar85 = NEON_frsqrts(uVar66,CONCAT44(fVar62 * fVar62,fVar75 * fVar75),4);
  fVar75 = fVar75 * (float)uVar85;
  fVar62 = fVar62 * (float)((ulong)uVar85 >> 0x20);
  iVar74 = -(uint)(fVar59 <= 0.0);
  iVar80 = -(uint)(fVar63 <= 0.0);
  uVar66 = NEON_frsqrts(uVar66,CONCAT44(fVar62 * fVar62,fVar75 * fVar75),4);
  fVar75 = (float)uVar66 * fVar75;
  fVar62 = (float)((ulong)uVar66 >> 0x20) * fVar62;
  fVar59 = (float)CONCAT13((byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar75 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar75 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar75,0) & ~(byte)iVar74)));
  fVar65 = fVar65 * fVar59;
  fVar72 = fVar72 * (float)(CONCAT17((byte)((uint)fVar62 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                                     CONCAT16((byte)((uint)fVar62 >> 0x10) &
                                              ~(byte)((uint)iVar80 >> 0x10),
                                              CONCAT15((byte)((uint)fVar62 >> 8) &
                                                       ~(byte)((uint)iVar80 >> 8),
                                                       CONCAT14(SUB41(fVar62,0) & ~(byte)iVar80,
                                                                fVar59)))) >> 0x20);
  fVar61 = fVar61 * fVar59;
  fVar75 = local_150 * fVar65 + fStack_14c * fVar72 + fStack_148 * fVar61;
  fVar63 = local_150 * fVar65 + fStack_14c * fVar72 + fStack_148 * fVar61;
  fVar62 = (float)local_140 * fVar65 + local_140._4_4_ * fVar72 + (float)uStack_138 * fVar61;
  uVar68 = CONCAT44((float)local_140 * fVar65 + local_140._4_4_ * fVar72 +
                    (float)uStack_138 * fVar61,fVar62);
  fVar82 = (float)local_130 * fVar65 + local_130._4_4_ * fVar72 + (float)uStack_128 * fVar61;
  uVar95 = CONCAT44((float)local_130 * fVar65 + local_130._4_4_ * fVar72 +
                    (float)uStack_128 * fVar61,fVar82);
  fVar59 = fVar82;
  if (fVar62 <= fVar82) {
    fVar59 = fVar62;
  }
  if (fVar75 < fVar59) {
    return 3;
  }
  fVar59 = (float)local_160 * fVar65 + local_160._4_4_ * fVar72 + (float)uStack_158 * fVar61;
  fVar65 = (float)local_160 * fVar65 + local_160._4_4_ * fVar72 + (float)uStack_158 * fVar61;
  uVar67 = CONCAT44(-(uint)(fVar82 < fVar62),-(uint)(fVar82 < fVar62));
  uVar76 = uVar95 ^ (uVar95 ^ uVar68) & uVar67;
  fVar72 = (float)uVar76;
  if (fVar72 < fVar59) {
    return 3;
  }
  fVar61 = fVar75 - fVar59;
  uVar66 = CONCAT44(fVar63 - fVar65,fVar61);
  if (fVar61 < 1e-06) {
    return 3;
  }
  uVar68 = uVar68 ^ (uVar68 ^ uVar95) & uVar67;
  fVar62 = (float)uVar68;
  fVar83 = fVar72 - fVar62;
  fVar82 = (float)(uVar68 >> 0x20);
  fVar88 = (float)(uVar76 >> 0x20);
  uVar85 = CONCAT44(fVar88 - fVar82,fVar83);
  if (fVar83 < 1e-06) {
    return 3;
  }
  uVar93 = NEON_fmax(CONCAT44(fVar65,fVar59),uVar68,4);
  uVar97 = NEON_fmin(CONCAT44(fVar63,fVar75),uVar76,4);
  fVar81 = (float)uVar97 - (float)uVar93;
  fVar61 = ABS(fVar81 - fVar61);
  bVar11 = false;
  bVar13 = false;
  if (fVar81 < param_1[6]) {
    bVar11 = false;
    bVar13 = true;
    if (!NAN(fVar61)) {
      bVar11 = fVar61 == 1e-05;
      bVar13 = 1e-05 <= fVar61;
    }
  }
  fVar61 = ABS(fVar81 - fVar83);
  bVar12 = false;
  bVar14 = false;
  if (bVar13 && !bVar11) {
    bVar12 = false;
    bVar14 = true;
    if (!NAN(fVar61)) {
      bVar12 = fVar61 == 1e-05;
      bVar14 = 1e-05 <= fVar61;
    }
  }
  if (bVar14 && !bVar12) {
    return 4;
  }
  param_9[5] = (int)fVar47;
  param_9[6] = (int)fVar81;
  uVar93 = NEON_frecpe(uVar66,4);
  uVar97 = NEON_frecps(uVar66,uVar93,4);
  fVar61 = (float)uVar93 * (float)uVar97;
  fVar81 = (float)((ulong)uVar93 >> 0x20) * (float)((ulong)uVar97 >> 0x20);
  uVar66 = NEON_frecps(uVar66,CONCAT44(fVar81,fVar61),4);
  fVar61 = fVar61 * (float)uVar66;
  fVar81 = fVar81 * (float)((ulong)uVar66 >> 0x20);
  uVar66 = NEON_frecpe(uVar85,4);
  uVar93 = NEON_frecps(uVar85,uVar66,4);
  fVar83 = (float)uVar66 * (float)uVar93;
  fVar73 = (float)((ulong)uVar66 >> 0x20) * (float)((ulong)uVar93 >> 0x20);
  uVar66 = NEON_frecps(uVar85,CONCAT44(fVar73,fVar83),4);
  param_9[3] = param_8;
  param_9[4] = -0x40800000;
  *(undefined1 *)(param_9 + 7) = 1;
  *param_9 = param_5;
  param_9[1] = param_6;
  param_9[2] = param_7;
  fVar83 = fVar83 * (float)uVar66;
  fVar73 = fVar73 * (float)((ulong)uVar66 >> 0x20);
  local_e0 = 0.0;
  fStack_dc = 0.0;
  fVar47 = 0.0;
  fVar89 = 0.0;
  if (0.001 < ABS(fVar59 - fVar62)) {
    if (fVar59 <= fVar62) {
      local_e0 = (fVar62 - fVar59) * fVar61;
      fStack_dc = (fVar82 - fVar65) * fVar81;
    }
    else {
      fVar47 = (fVar59 - fVar62) * fVar83;
      fVar89 = (fVar65 - fVar82) * fVar73;
    }
  }
  uVar85 = NEON_fmov(0x3f800000,4);
  local_d8 = uVar85;
  uVar66 = uVar85;
  if (0.001 < ABS(fVar75 - fVar72)) {
    if (fVar75 <= fVar72) {
      uVar66 = CONCAT44((fVar63 - fVar82) * fVar73,(fVar75 - fVar62) * fVar83);
    }
    else {
      local_d8 = CONCAT44((fVar88 - fVar65) * fVar81,(fVar72 - fVar59) * fVar61);
    }
  }
  fVar72 = (float)local_d8;
  fVar75 = (float)uVar85 - (float)uVar66;
  fVar59 = (float)((ulong)uVar85 >> 0x20);
  fVar63 = fVar59 - (float)((ulong)uVar66 >> 0x20);
  local_d0 = CONCAT44(fVar63,fVar75);
  fVar65 = (float)((ulong)local_d8 >> 0x20);
  fVar47 = (float)uVar85 - fVar47;
  fVar59 = fVar59 - fVar89;
  uVar35 = SUB41(fVar59,0);
  uVar36 = (undefined1)((uint)fVar59 >> 8);
  uVar37 = (undefined1)((uint)fVar59 >> 0x10);
  uVar38 = (undefined1)((uint)fVar59 >> 0x18);
  auVar71._0_8_ = CONCAT44(fStack_19c + fStack_18c * fStack_dc,local_1a0 + fStack_190 * local_e0);
  auVar71._8_4_ = fStack_198 + fStack_188 * local_e0;
  auVar71._12_4_ = fStack_194 + fStack_184 * fStack_dc;
  local_150 = local_1a0 + fStack_190 * fVar72;
  fStack_14c = fStack_19c + fStack_18c * fVar65;
  fStack_148 = fStack_198 + fStack_188 * fVar72;
  fStack_144 = fStack_194 + fStack_184 * fVar65;
  local_c8 = CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,fVar47))));
  uStack_158 = auVar71._8_8_;
  auVar41._0_8_ = CONCAT44(fStack_17c + fVar31 * fVar63,local_180 + fVar30 * fVar75);
  auVar41._8_4_ = fStack_178 + fVar39 * fVar75;
  auVar41._12_4_ = fStack_174 + fVar40 * fVar63;
  auVar32._0_8_ =
       CONCAT44(fStack_17c +
                fVar31 * (float)(CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,
                                                  fVar47)))) >> 0x20),local_180 + fVar30 * fVar47);
  auVar32._8_4_ = fStack_178 + fVar39 * fVar47;
  auVar32._12_4_ =
       fStack_174 +
       fVar40 * (float)(CONCAT17(uVar38,CONCAT16(uVar37,CONCAT15(uVar36,CONCAT14(uVar35,fVar47))))
                       >> 0x20);
  uStack_138 = auVar41._8_8_;
  uStack_128 = auVar32._8_8_;
  if ((fVar72 <= local_e0) || (fVar47 <= fVar75)) {
    return 5;
  }
  auVar9._12_4_ = fVar52;
  auVar9._8_4_ = fVar51;
  auVar9._4_4_ = fVar99;
  auVar9._0_4_ = fVar98;
  auVar10._12_4_ = fVar64;
  auVar10._8_4_ = fVar48;
  auVar10._4_4_ = fVar101;
  auVar10._0_4_ = fVar100;
  local_160 = auVar71._0_8_;
  local_140 = auVar41._0_8_;
  local_130 = auVar32._0_8_;
  FUN_03269aac(&local_1a0,&local_1b0);
  if (*param_1 <
      ABS(local_1b0 * (float)*(undefined8 *)*param_2 +
          fStack_1ac * (float)((ulong)*(undefined8 *)*param_2 >> 0x20) +
          fStack_1a8 * (float)*(undefined8 *)(*param_2 + 8))) {
    return 6;
  }
  FUN_03269c4c(&local_1a0,param_2);
  fVar30 = param_1[1];
  fVar31 = (float)FUN_03269cec(&local_1a0);
  if (fVar30 * fVar30 < fVar31) {
    return 2;
  }
  param_9[8] = (int)local_e0;
  param_9[9] = (int)local_d8;
  param_9[10] = (int)local_d0;
  param_9[0xb] = (int)local_c8;
  FUN_03269c4c(&local_1a0,param_2);
  fVar30 = (float)local_120;
  fVar31 = (float)((ulong)local_120 >> 0x20);
  fVar59 = fVar30 - fStack_110;
  fVar75 = fVar31 - fStack_10c;
  fVar63 = fStack_118 - fStack_108;
  fVar39 = (float)((ulong)uStack_f0 >> 0x20);
  fVar40 = local_100 - (float)uStack_f0;
  fVar47 = fStack_fc - fVar39;
  fVar62 = fStack_f8 - fStack_e8;
  fVar65 = local_100 - (fVar30 + (fStack_110 - fVar30) * 0.5);
  fVar72 = fStack_fc - (fVar31 + (fStack_10c - fVar31) * 0.5);
  fVar61 = fStack_f8 - (fStack_118 + (fStack_108 - fStack_118) * 0.5);
  fVar82 = fVar40 * fVar65;
  fVar88 = fVar47 * fVar72;
  fVar83 = fVar62 * fVar61;
  uVar66 = CONCAT44(fVar40 * fVar40 + fVar47 * fVar47 + fVar62 * fVar62,
                    fVar40 * fVar40 + fVar47 * fVar47 + fVar62 * fVar62);
  uVar85 = NEON_frecpe(uVar66,4);
  fVar30 = fVar30 - (local_100 + ((float)uStack_f0 - local_100) * 0.5);
  fVar31 = fVar31 - (fStack_fc + (fVar39 - fStack_fc) * 0.5);
  fStack_118 = fStack_118 - (fStack_f8 + (fStack_e8 - fStack_f8) * 0.5);
  uVar93 = NEON_frecps(uVar66,uVar85,4);
  fVar81 = fVar59 * fVar30;
  fVar73 = fVar75 * fVar31;
  fVar89 = fVar63 * fStack_118;
  fVar39 = (float)uVar85 * (float)uVar93;
  fVar84 = (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar93 >> 0x20);
  uVar66 = NEON_frecps(uVar66,CONCAT44(fVar84,fVar39),4);
  uVar93 = NEON_fmov(0x3f800000,4);
  uVar66 = NEON_fminnm(CONCAT44((fVar82 + fVar88 + fVar83) * fVar84 * (float)((ulong)uVar66 >> 0x20)
                                ,(fVar82 + fVar88 + fVar83) * fVar39 * (float)uVar66),uVar93,4);
  uVar66 = NEON_fmax(uVar66,0,4);
  fVar65 = fVar65 - fVar40 * (float)uVar66;
  fVar72 = fVar72 - fVar47 * (float)((ulong)uVar66 >> 0x20);
  fVar61 = fVar61 - fVar62 * (float)uVar66;
  fVar65 = fVar65 * fVar65;
  fVar72 = fVar72 * fVar72;
  fVar61 = fVar61 * fVar61;
  fVar39 = fVar65 + fVar72 + fVar61;
  uVar85 = CONCAT44(fVar65 + fVar72 + fVar61,fVar39);
  uVar66 = NEON_frsqrte(uVar85,4);
  fVar40 = (float)uVar66;
  fVar47 = (float)((ulong)uVar66 >> 0x20);
  uVar66 = NEON_frsqrts(uVar85,CONCAT44(fVar47 * fVar47,fVar40 * fVar40),4);
  fVar40 = fVar40 * (float)uVar66;
  fVar47 = fVar47 * (float)((ulong)uVar66 >> 0x20);
  uVar66 = CONCAT44(fVar63 * fVar63 + fVar59 * fVar59 + fVar75 * fVar75,
                    fVar63 * fVar63 + fVar59 * fVar59 + fVar75 * fVar75);
  uVar97 = NEON_frecpe(uVar66,4);
  uVar86 = NEON_frecps(uVar66,uVar97,4);
  fVar65 = (float)uVar97 * (float)uVar86;
  fVar72 = (float)((ulong)uVar97 >> 0x20) * (float)((ulong)uVar86 >> 0x20);
  uVar66 = NEON_frecps(uVar66,CONCAT44(fVar72,fVar65),4);
  iVar80 = -(uint)(fVar39 <= 0.0);
  uVar66 = NEON_fminnm(CONCAT44((fVar89 + fVar81 + fVar73) * fVar72 * (float)((ulong)uVar66 >> 0x20)
                                ,(fVar89 + fVar81 + fVar73) * fVar65 * (float)uVar66),uVar93,4);
  uVar66 = NEON_fmax(uVar66,0,4);
  uVar85 = NEON_frsqrts(uVar85,CONCAT44(fVar47 * fVar47,fVar40 * fVar40),4);
  fVar30 = fVar30 - fVar59 * (float)uVar66;
  fVar31 = fVar31 - fVar75 * (float)((ulong)uVar66 >> 0x20);
  fStack_118 = fStack_118 - fVar63 * (float)uVar66;
  fVar30 = fVar30 * fVar30;
  fVar31 = fVar31 * fVar31;
  fStack_118 = fStack_118 * fStack_118;
  fVar39 = (float)uVar85 * fVar40 * fVar39;
  fVar40 = fVar30 + fVar31 + fStack_118;
  uVar85 = CONCAT44(fVar30 + fVar31 + fStack_118,fVar40);
  uVar66 = NEON_frsqrte(uVar85,4);
  fVar30 = (float)uVar66;
  fVar31 = (float)((ulong)uVar66 >> 0x20);
  uVar66 = NEON_frsqrts(uVar85,CONCAT44(fVar31 * fVar31,fVar30 * fVar30),4);
  fVar30 = fVar30 * (float)uVar66;
  fVar31 = fVar31 * (float)((ulong)uVar66 >> 0x20);
  uVar66 = NEON_frsqrts(uVar85,CONCAT44(fVar31 * fVar31,fVar30 * fVar30),4);
  iVar74 = -(uint)(fVar40 <= 0.0);
  auVar60 = NEON_ext(auVar10,auVar10,4,1);
  auVar33 = NEON_ext(auVar44,auVar44,4,1);
  fVar40 = (float)uVar66 * fVar30 * fVar40;
  fVar47 = auVar44._0_4_;
  fVar59 = auVar44._4_4_;
  auVar42._0_4_ = auVar33._0_4_ * fVar100 - fVar47 * auVar60._0_4_;
  auVar42._4_4_ = auVar33._4_4_ * fVar101 - fVar59 * auVar60._4_4_;
  auVar42._8_4_ = fVar47 * fVar48 - auVar44._8_4_ * fVar100;
  auVar42._12_4_ = fVar59 * fVar64 - auVar44._12_4_ * fVar101;
  fVar39 = ((float)CONCAT13((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT12((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT11((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,SUB41(fVar39,0) & ~(byte)iVar80))) +
           (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar40,0) & ~(byte)iVar74)))) * 0.5;
  auVar60 = NEON_ext(auVar42,auVar42,4,1);
  fVar30 = auVar60._0_4_;
  fVar31 = auVar60._4_4_;
  fVar40 = auVar42._0_4_ * auVar42._0_4_ + fVar30 * fVar30 + fVar31 * fVar31;
  fVar75 = auVar42._0_4_ * auVar42._0_4_ + fVar30 * fVar30 + fVar31 * fVar31;
  uVar66 = CONCAT44(fVar75,fVar40);
  uVar85 = NEON_frsqrte(uVar66,4);
  fVar48 = (float)uVar85;
  fVar63 = (float)((ulong)uVar85 >> 0x20);
  uVar85 = NEON_frsqrts(uVar66,CONCAT44(fVar63 * fVar63,fVar48 * fVar48),4);
  fVar48 = fVar48 * (float)uVar85;
  fVar63 = fVar63 * (float)((ulong)uVar85 >> 0x20);
  iVar74 = -(uint)(fVar40 <= 0.0);
  iVar80 = -(uint)(fVar75 <= 0.0);
  uVar66 = NEON_frsqrts(uVar66,CONCAT44(fVar63 * fVar63,fVar48 * fVar48),4);
  fVar48 = (float)uVar66 * fVar48;
  fVar63 = (float)((ulong)uVar66 >> 0x20) * fVar63;
  fVar48 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar48 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar48 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar48,0) & ~(byte)iVar74)));
  fVar30 = fVar30 * fVar48;
  fVar40 = (float)(CONCAT17((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT16((byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT15((byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,CONCAT14(SUB41(fVar63,0) & ~(byte)iVar80,fVar48))))
                  >> 0x20);
  fVar31 = fVar31 * fVar40;
  fVar48 = auVar42._0_4_ * fVar48;
  fVar45 = fVar45 * fVar30;
  fVar49 = fVar49 * fVar31;
  uVar35 = (undefined1)((uint)fVar49 >> 8);
  uVar36 = (undefined1)((uint)fVar49 >> 0x10);
  uVar37 = (undefined1)((uint)fVar49 >> 0x18);
  fVar53 = fVar53 * fVar48;
  fVar55 = fVar55 * auVar42._4_4_ * fVar40;
  auVar5[4] = SUB41(fVar49,0);
  auVar5._0_4_ = fVar45;
  auVar5[5] = uVar35;
  auVar5[6] = uVar36;
  auVar5[7] = uVar37;
  auVar5._8_4_ = fVar53;
  auVar5._12_4_ = fVar55;
  auVar6[4] = SUB41(fVar49,0);
  auVar6._0_4_ = fVar45;
  auVar6[5] = uVar35;
  auVar6[6] = uVar36;
  auVar6[7] = uVar37;
  auVar6._8_4_ = fVar53;
  auVar6._12_4_ = fVar55;
  auVar60 = NEON_ext(auVar5,auVar6,8,1);
  fVar55 = -(fVar45 + fVar49 + auVar60._0_4_);
  param_9[4] = (int)(fVar39 * fVar39);
  fVar39 = (float)local_140 * fVar30;
  fVar45 = (float)((ulong)local_140 >> 0x20) * fVar31;
  uVar35 = (undefined1)((uint)fVar45 >> 8);
  uVar36 = (undefined1)((uint)fVar45 >> 0x10);
  uVar37 = (undefined1)((uint)fVar45 >> 0x18);
  fVar40 = (float)uStack_138 * fVar48;
  fVar49 = (float)((ulong)uStack_138 >> 0x20) * fVar55;
  auVar7[4] = SUB41(fVar45,0);
  auVar7._0_4_ = fVar39;
  auVar7[5] = uVar35;
  auVar7[6] = uVar36;
  auVar7[7] = uVar37;
  auVar7._8_4_ = fVar40;
  auVar7._12_4_ = fVar49;
  auVar8[4] = SUB41(fVar45,0);
  auVar8._0_4_ = fVar39;
  auVar8[5] = uVar35;
  auVar8[6] = uVar36;
  auVar8[7] = uVar37;
  auVar8._8_4_ = fVar40;
  auVar8._12_4_ = fVar49;
  auVar60 = NEON_ext(auVar7,auVar8,8,1);
  fVar40 = -param_1[2];
  if (fVar39 + fVar45 + auVar60._0_4_ + fVar55 < fVar40) {
    return 7;
  }
  auVar43._0_4_ = fVar30 * (float)local_130;
  auVar43._4_4_ = fVar31 * local_130._4_4_;
  auVar43._8_4_ = fVar48 * (float)uStack_128;
  auVar43._12_4_ = fVar55 * uStack_128._4_4_;
  auVar60 = NEON_ext(auVar43,auVar43,8,1);
  if (auVar43._0_4_ + auVar43._4_4_ + auVar60._0_4_ + fVar55 < fVar40) {
    return 7;
  }
  auVar60 = NEON_ext(auVar9,auVar9,4,1);
  auVar34._0_4_ = auVar33._0_4_ * fVar98 - fVar47 * auVar60._0_4_;
  auVar34._4_4_ = auVar33._4_4_ * fVar99 - fVar59 * auVar60._4_4_;
  auVar34._8_4_ = fVar47 * fVar51 - auVar44._8_4_ * fVar98;
  auVar34._12_4_ = fVar59 * fVar52 - auVar44._12_4_ * fVar99;
  auVar44 = NEON_ext(auVar34,auVar34,4,1);
  fVar49 = auVar44._0_4_;
  fVar52 = auVar44._4_4_;
  fVar39 = auVar34._0_4_ * auVar34._0_4_ + fVar49 * fVar49 + fVar52 * fVar52;
  fVar47 = auVar34._0_4_ * auVar34._0_4_ + fVar49 * fVar49 + fVar52 * fVar52;
  uVar66 = CONCAT44(fVar47,fVar39);
  uVar85 = NEON_frsqrte(uVar66,4);
  fVar45 = (float)uVar85;
  fVar51 = (float)((ulong)uVar85 >> 0x20);
  uVar85 = NEON_frsqrts(uVar66,CONCAT44(fVar51 * fVar51,fVar45 * fVar45),4);
  fVar45 = fVar45 * (float)uVar85;
  fVar51 = fVar51 * (float)((ulong)uVar85 >> 0x20);
  iVar74 = -(uint)(fVar39 <= 0.0);
  iVar80 = -(uint)(fVar47 <= 0.0);
  uVar66 = NEON_frsqrts(uVar66,CONCAT44(fVar51 * fVar51,fVar45 * fVar45),4);
  fVar45 = (float)uVar66 * fVar45;
  fVar51 = (float)((ulong)uVar66 >> 0x20) * fVar51;
  fVar39 = (float)CONCAT13((byte)((uint)fVar45 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                           CONCAT12((byte)((uint)fVar45 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                    CONCAT11((byte)((uint)fVar45 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                             SUB41(fVar45,0) & ~(byte)iVar74)));
  fVar49 = fVar49 * fVar39;
  fVar45 = (float)(CONCAT17((byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar80 >> 0x18),
                            CONCAT16((byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar80 >> 0x10),
                                     CONCAT15((byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar80 >> 8)
                                              ,CONCAT14(SUB41(fVar51,0) & ~(byte)iVar80,fVar39))))
                  >> 0x20);
  fVar52 = fVar52 * fVar45;
  fVar39 = auVar34._0_4_ * fVar39;
  auVar44._0_4_ = fVar46 * fVar49;
  auVar44._4_4_ = fVar50 * fVar52;
  auVar44._8_4_ = fVar54 * fVar39;
  auVar44._12_4_ = fVar56 * auVar34._4_4_ * fVar45;
  auVar33 = NEON_ext(auVar44,auVar44,8,1);
  fVar45 = -(auVar44._0_4_ + auVar44._4_4_ + auVar33._0_4_);
  auVar57._0_4_ = fVar49 * (float)local_160;
  auVar57._4_4_ = fVar52 * local_160._4_4_;
  auVar57._8_4_ = fVar39 * (float)uStack_158;
  auVar57._12_4_ = fVar45 * uStack_158._4_4_;
  auVar44 = NEON_ext(auVar57,auVar57,8,1);
  if (auVar57._0_4_ + auVar57._4_4_ + auVar44._0_4_ + fVar45 < fVar40) {
    return 7;
  }
  auVar58._0_4_ = fVar49 * local_150;
  auVar58._4_4_ = fVar52 * fStack_14c;
  auVar58._8_4_ = fVar39 * fStack_148;
  auVar58._12_4_ = fVar45 * fStack_144;
  auVar44 = NEON_ext(auVar58,auVar58,8,1);
  if (auVar58._0_4_ + auVar58._4_4_ + auVar44._0_4_ + fVar45 < fVar40) {
    return 7;
  }
  lVar23 = *(long *)(param_4 + 0x20);
  fVar40 = param_1[3];
  iVar74 = *(int *)(lVar23 + 0x20);
  lVar21 = *(long *)(lVar23 + 0x18);
  if (param_8 < iVar74) {
    iVar17 = param_8;
    if (*(int *)(lVar23 + 0x98) != 0) {
      iVar17 = *(int *)(*(long *)(lVar23 + 0x90) + (long)param_8 * 4);
    }
    lVar20 = lVar21;
    iVar80 = param_8;
    if (iVar17 != -1) {
      plVar15 = (long *)(lVar23 + 0xb0);
      iVar80 = iVar17;
      goto LAB_032689d0;
    }
  }
  else {
    iVar80 = param_8 - iVar74;
    plVar15 = (long *)(lVar23 + 0xd0);
LAB_032689d0:
    lVar20 = *plVar15;
  }
  uVar68 = (ulong)*(short *)(lVar20 + (long)iVar80 * 0x10 + 8);
  if ((long)uVar68 < 1) {
    uVar66 = 0xff7fffeeff7fffee;
  }
  else {
    lVar24 = (long)*(int *)(lVar20 + (long)iVar80 * 0x10);
    uVar66 = 0xff7fffeeff7fffee;
    lVar19 = (long)*(int *)(lVar23 + 0x30) * -0x14 + lVar24 * 0x14;
    lVar20 = 0;
    uVar68 = uVar68 & 0xffffffff;
    lVar28 = lVar24;
    do {
      if (lVar28 < *(int *)(lVar23 + 0x30)) {
        if (*(int *)(lVar23 + 0x78) == 0) {
          iVar80 = (int)lVar28;
        }
        else {
          iVar80 = *(int *)(*(long *)(lVar23 + 0x70) + lVar28 * 4);
        }
        if (iVar80 == -1) {
          piVar16 = (int *)(*(long *)(lVar23 + 0x28) + (lVar20 + lVar24) * 0x14);
        }
        else {
          piVar16 = (int *)(*(long *)(lVar23 + 0xc0) + (long)iVar80 * 0x14);
        }
      }
      else {
        piVar16 = (int *)(*(long *)(lVar23 + 0xe0) + lVar19);
      }
      if (*piVar16 < *(int *)(lVar23 + 0x40)) {
        iVar80 = 0;
        plVar15 = (long *)(lVar23 + 0x38);
      }
      else {
        plVar15 = (long *)(lVar23 + 0xf0);
        iVar80 = *(int *)(lVar23 + 0x40);
      }
      lVar20 = lVar20 + 1;
      pfVar1 = (float *)(*plVar15 + (long)(*piVar16 - iVar80) * 0x10);
      fVar56 = *pfVar1;
      fVar47 = pfVar1[1];
      fVar51 = pfVar1[2];
      lVar19 = lVar19 + 0x14;
      lVar28 = lVar28 + 1;
      uVar68 = uVar68 - 1;
      auVar94._0_4_ =
           fVar30 * (*(float *)(param_4 + 0x90) +
                    *(float *)(param_4 + 0x80) * fVar51 +
                    *(float *)(param_4 + 0x60) * fVar56 + *(float *)(param_4 + 0x70) * fVar47);
      auVar94._4_4_ =
           fVar31 * (*(float *)(param_4 + 0x94) +
                    *(float *)(param_4 + 0x84) * fVar51 +
                    *(float *)(param_4 + 100) * fVar56 + *(float *)(param_4 + 0x74) * fVar47);
      auVar94._8_4_ =
           fVar48 * (*(float *)(param_4 + 0x98) +
                    *(float *)(param_4 + 0x88) * fVar51 +
                    *(float *)(param_4 + 0x68) * fVar56 + *(float *)(param_4 + 0x78) * fVar47);
      auVar94._12_4_ =
           fVar55 * (*(float *)(param_4 + 0x9c) +
                    *(float *)(param_4 + 0x8c) * fVar51 +
                    *(float *)(param_4 + 0x6c) * fVar56 + *(float *)(param_4 + 0x7c) * fVar47);
      auVar44 = NEON_ext(auVar94,auVar94,8,1);
      fVar56 = auVar44._0_4_ + fVar55;
      uVar66 = NEON_fmax(uVar66,CONCAT44(auVar94._0_4_ + auVar94._4_4_ + fVar56,
                                         auVar94._0_4_ + auVar94._4_4_ + fVar56),4);
    } while (uVar68 != 0);
  }
  if ((float)uVar66 < fVar40) {
    return 8;
  }
  lVar20 = *(long *)(param_3 + 0x20);
  iVar80 = *(int *)(lVar20 + 0x20);
  lVar19 = *(long *)(lVar20 + 0x18);
  if (param_7 < iVar80) {
    iVar26 = param_7;
    if (*(int *)(lVar20 + 0x98) != 0) {
      iVar26 = *(int *)(*(long *)(lVar20 + 0x90) + (long)param_7 * 4);
    }
    lVar28 = lVar19;
    iVar17 = param_7;
    if (iVar26 != -1) {
      plVar15 = (long *)(lVar20 + 0xb0);
      iVar17 = iVar26;
      goto LAB_03268b44;
    }
  }
  else {
    iVar17 = param_7 - iVar80;
    plVar15 = (long *)(lVar20 + 0xd0);
LAB_03268b44:
    lVar28 = *plVar15;
  }
  uVar68 = (ulong)*(short *)(lVar28 + (long)iVar17 * 0x10 + 8);
  if ((long)uVar68 < 1) {
    uVar66 = 0xff7fffeeff7fffee;
  }
  else {
    lVar29 = (long)*(int *)(lVar28 + (long)iVar17 * 0x10);
    uVar66 = 0xff7fffeeff7fffee;
    lVar24 = (long)*(int *)(lVar20 + 0x30) * -0x14 + lVar29 * 0x14;
    lVar28 = 0;
    uVar68 = uVar68 & 0xffffffff;
    lVar25 = lVar29;
    do {
      if (lVar25 < *(int *)(lVar20 + 0x30)) {
        if (*(int *)(lVar20 + 0x78) == 0) {
          iVar17 = (int)lVar25;
        }
        else {
          iVar17 = *(int *)(*(long *)(lVar20 + 0x70) + lVar25 * 4);
        }
        if (iVar17 == -1) {
          piVar16 = (int *)(*(long *)(lVar20 + 0x28) + (lVar28 + lVar29) * 0x14);
        }
        else {
          piVar16 = (int *)(*(long *)(lVar20 + 0xc0) + (long)iVar17 * 0x14);
        }
      }
      else {
        piVar16 = (int *)(*(long *)(lVar20 + 0xe0) + lVar24);
      }
      if (*piVar16 < *(int *)(lVar20 + 0x40)) {
        iVar17 = 0;
        plVar15 = (long *)(lVar20 + 0x38);
      }
      else {
        plVar15 = (long *)(lVar20 + 0xf0);
        iVar17 = *(int *)(lVar20 + 0x40);
      }
      lVar28 = lVar28 + 1;
      pfVar1 = (float *)(*plVar15 + (long)(*piVar16 - iVar17) * 0x10);
      fVar56 = *pfVar1;
      fVar47 = pfVar1[1];
      fVar51 = pfVar1[2];
      lVar24 = lVar24 + 0x14;
      lVar25 = lVar25 + 1;
      uVar68 = uVar68 - 1;
      auVar87._0_4_ =
           fVar49 * (*(float *)(param_3 + 0x90) +
                    *(float *)(param_3 + 0x80) * fVar51 +
                    *(float *)(param_3 + 0x60) * fVar56 + *(float *)(param_3 + 0x70) * fVar47);
      auVar87._4_4_ =
           fVar52 * (*(float *)(param_3 + 0x94) +
                    *(float *)(param_3 + 0x84) * fVar51 +
                    *(float *)(param_3 + 100) * fVar56 + *(float *)(param_3 + 0x74) * fVar47);
      auVar87._8_4_ =
           fVar39 * (*(float *)(param_3 + 0x98) +
                    *(float *)(param_3 + 0x88) * fVar51 +
                    *(float *)(param_3 + 0x68) * fVar56 + *(float *)(param_3 + 0x78) * fVar47);
      auVar87._12_4_ =
           fVar45 * (*(float *)(param_3 + 0x9c) +
                    *(float *)(param_3 + 0x8c) * fVar51 +
                    *(float *)(param_3 + 0x6c) * fVar56 + *(float *)(param_3 + 0x7c) * fVar47);
      auVar44 = NEON_ext(auVar87,auVar87,8,1);
      fVar56 = auVar44._0_4_ + fVar45;
      uVar66 = NEON_fmax(uVar66,CONCAT44(auVar87._0_4_ + auVar87._4_4_ + fVar56,
                                         auVar87._0_4_ + auVar87._4_4_ + fVar56),4);
    } while (uVar68 != 0);
  }
  if ((float)uVar66 < fVar40) {
    return 8;
  }
  if (fVar40 <= 0.0) {
    return 0xffffffff;
  }
  if (param_7 < iVar80) {
    iVar80 = param_7;
    if (*(int *)(lVar20 + 0x98) != 0) {
      iVar80 = *(int *)(*(long *)(lVar20 + 0x90) + (long)param_7 * 4);
    }
    if (iVar80 != -1) {
      plVar15 = (long *)(lVar20 + 0xb0);
      param_7 = iVar80;
      goto LAB_03268ca4;
    }
  }
  else {
    param_7 = param_7 - iVar80;
    plVar15 = (long *)(lVar20 + 0xd0);
LAB_03268ca4:
    lVar19 = *plVar15;
  }
  uVar68 = (ulong)*(short *)(lVar19 + (long)param_7 * 0x10 + 8);
  if ((long)uVar68 < 1) {
    uVar35 = 0xee;
    uVar36 = 0xff;
    uVar37 = 0x7f;
    uVar38 = 0xff;
  }
  else {
    auVar78 = ZEXT816(0xff7fffeeff7fffee);
    lVar25 = (long)*(int *)(lVar19 + (long)param_7 * 0x10);
    lVar28 = (long)*(int *)(lVar20 + 0x30) * -0x14 + lVar25 * 0x14;
    lVar19 = 0;
    uVar68 = uVar68 & 0xffffffff;
    lVar24 = lVar25;
    do {
      if (lVar24 < *(int *)(lVar20 + 0x30)) {
        if (*(int *)(lVar20 + 0x78) == 0) {
          iVar80 = (int)lVar24;
        }
        else {
          iVar80 = *(int *)(*(long *)(lVar20 + 0x70) + lVar24 * 4);
        }
        if (iVar80 == -1) {
          piVar16 = (int *)(*(long *)(lVar20 + 0x28) + (lVar19 + lVar25) * 0x14);
        }
        else {
          piVar16 = (int *)(*(long *)(lVar20 + 0xc0) + (long)iVar80 * 0x14);
        }
      }
      else {
        piVar16 = (int *)(*(long *)(lVar20 + 0xe0) + lVar28);
      }
      if (*piVar16 < *(int *)(lVar20 + 0x40)) {
        iVar80 = 0;
        plVar15 = (long *)(lVar20 + 0x38);
      }
      else {
        plVar15 = (long *)(lVar20 + 0xf0);
        iVar80 = *(int *)(lVar20 + 0x40);
      }
      lVar19 = lVar19 + 1;
      puVar2 = (undefined8 *)(*plVar15 + (long)(*piVar16 - iVar80) * 0x10);
      fVar53 = (float)puVar2[1];
      uVar66 = *puVar2;
      lVar28 = lVar28 + 0x14;
      fVar40 = (float)uVar66;
      lVar24 = lVar24 + 1;
      fVar56 = (float)((ulong)uVar66 >> 0x20);
      uVar68 = uVar68 - 1;
      fVar47 = (*(float *)(param_3 + 0x90) +
               *(float *)(param_3 + 0x80) * fVar53 +
               (float)*(undefined8 *)(param_3 + 0x60) * fVar40 + *(float *)(param_3 + 0x70) * fVar56
               ) * -fVar30;
      fVar51 = (*(float *)(param_3 + 0x94) +
               *(float *)(param_3 + 0x84) * fVar53 +
               (float)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x20) * fVar40 +
               *(float *)(param_3 + 0x74) * fVar56) * -fVar31;
      uVar35 = (undefined1)((uint)fVar51 >> 8);
      uVar36 = (undefined1)((uint)fVar51 >> 0x10);
      uVar37 = (undefined1)((uint)fVar51 >> 0x18);
      fVar59 = (*(float *)(param_3 + 0x98) +
               *(float *)(param_3 + 0x88) * fVar53 +
               (float)*(undefined8 *)(param_3 + 0x68) * fVar40 + *(float *)(param_3 + 0x78) * fVar56
               ) * -fVar48;
      fVar40 = (*(float *)(param_3 + 0x9c) +
               *(float *)(param_3 + 0x8c) * fVar53 +
               (float)((ulong)*(undefined8 *)(param_3 + 0x68) >> 0x20) * fVar40 +
               *(float *)(param_3 + 0x7c) * fVar56) * -fVar55;
      auVar3[4] = SUB41(fVar51,0);
      auVar3._0_4_ = fVar47;
      auVar3[5] = uVar35;
      auVar3[6] = uVar36;
      auVar3[7] = uVar37;
      auVar3._8_4_ = fVar59;
      auVar3._12_4_ = fVar40;
      auVar4[4] = SUB41(fVar51,0);
      auVar4._0_4_ = fVar47;
      auVar4[5] = uVar35;
      auVar4[6] = uVar36;
      auVar4[7] = uVar37;
      auVar4._8_4_ = fVar59;
      auVar4._12_4_ = fVar40;
      auVar44 = NEON_ext(auVar3,auVar4,8,1);
      fVar40 = fVar47 + fVar51 + auVar44._0_4_ + -fVar55;
      uVar95 = auVar78._0_8_ ^
               (auVar78._0_8_ ^ (ulong)(uint)fVar40) & (ulong)-(uint)(auVar78._0_4_ < fVar40);
      uVar35 = (undefined1)uVar95;
      uVar36 = (undefined1)(uVar95 >> 8);
      uVar37 = (undefined1)(uVar95 >> 0x10);
      uVar38 = (undefined1)(uVar95 >> 0x18);
      auVar78._8_8_ = 0;
      auVar78._0_8_ = uVar95;
    } while (uVar68 != 0);
  }
  if (param_8 < iVar74) {
    iVar74 = param_8;
    if (*(int *)(lVar23 + 0x98) != 0) {
      iVar74 = *(int *)(*(long *)(lVar23 + 0x90) + (long)param_8 * 4);
    }
    if (iVar74 == -1) goto LAB_03268e04;
    plVar15 = (long *)(lVar23 + 0xb0);
    param_8 = iVar74;
  }
  else {
    param_8 = param_8 - iVar74;
    plVar15 = (long *)(lVar23 + 0xd0);
  }
  lVar21 = *plVar15;
LAB_03268e04:
  uVar68 = (ulong)*(short *)(lVar21 + (long)param_8 * 0x10 + 8);
  if ((long)uVar68 < 1) {
    fVar30 = -3.40282e+38;
  }
  else {
    fVar30 = -3.40282e+38;
    lVar28 = (long)*(int *)(lVar21 + (long)param_8 * 0x10);
    lVar20 = (long)*(int *)(lVar23 + 0x30) * -0x14 + lVar28 * 0x14;
    lVar21 = 0;
    uVar68 = uVar68 & 0xffffffff;
    lVar19 = lVar28;
    do {
      if (lVar19 < *(int *)(lVar23 + 0x30)) {
        if (*(int *)(lVar23 + 0x78) == 0) {
          iVar74 = (int)lVar19;
        }
        else {
          iVar74 = *(int *)(*(long *)(lVar23 + 0x70) + lVar19 * 4);
        }
        if (iVar74 == -1) {
          piVar16 = (int *)(*(long *)(lVar23 + 0x28) + (lVar21 + lVar28) * 0x14);
        }
        else {
          piVar16 = (int *)(*(long *)(lVar23 + 0xc0) + (long)iVar74 * 0x14);
        }
      }
      else {
        piVar16 = (int *)(*(long *)(lVar23 + 0xe0) + lVar20);
      }
      if (*piVar16 < *(int *)(lVar23 + 0x40)) {
        iVar74 = 0;
        plVar15 = (long *)(lVar23 + 0x38);
      }
      else {
        plVar15 = (long *)(lVar23 + 0xf0);
        iVar74 = *(int *)(lVar23 + 0x40);
      }
      lVar21 = lVar21 + 1;
      pfVar1 = (float *)(*plVar15 + (long)(*piVar16 - iVar74) * 0x10);
      fVar31 = *pfVar1;
      fVar40 = pfVar1[1];
      fVar55 = pfVar1[2];
      lVar20 = lVar20 + 0x14;
      lVar19 = lVar19 + 1;
      uVar68 = uVar68 - 1;
      auVar79._0_4_ =
           (*(float *)(param_4 + 0x90) +
           *(float *)(param_4 + 0x80) * fVar55 +
           *(float *)(param_4 + 0x60) * fVar31 + (float)*(undefined8 *)(param_4 + 0x70) * fVar40) *
           -fVar49;
      auVar79._4_4_ =
           (*(float *)(param_4 + 0x94) +
           *(float *)(param_4 + 0x84) * fVar55 +
           *(float *)(param_4 + 100) * fVar31 +
           (float)((ulong)*(undefined8 *)(param_4 + 0x70) >> 0x20) * fVar40) * -fVar52;
      auVar79._8_4_ =
           (*(float *)(param_4 + 0x98) +
           *(float *)(param_4 + 0x88) * fVar55 +
           *(float *)(param_4 + 0x68) * fVar31 + (float)*(undefined8 *)(param_4 + 0x78) * fVar40) *
           -fVar39;
      auVar79._12_4_ =
           (*(float *)(param_4 + 0x9c) +
           *(float *)(param_4 + 0x8c) * fVar55 +
           *(float *)(param_4 + 0x6c) * fVar31 +
           (float)((ulong)*(undefined8 *)(param_4 + 0x78) >> 0x20) * fVar40) * -fVar45;
      auVar44 = NEON_ext(auVar79,auVar79,8,1);
      fVar31 = auVar79._0_4_ + auVar79._4_4_ + auVar44._0_4_ + -fVar45;
      fVar30 = (float)((uint)fVar30 ^ ((uint)fVar30 ^ (uint)fVar31) & -(uint)(fVar30 < fVar31));
    } while (uVar68 != 0);
  }
  bVar11 = false;
  bVar13 = true;
  bVar12 = false;
  if (0.0 < fVar30) {
    bVar11 = false;
    bVar13 = false;
    bVar12 = true;
    if (!NAN((float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))))) {
      bVar11 = (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) < 0.0;
      bVar13 = (float)CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) == 0.0;
      bVar12 = false;
    }
  }
  uVar18 = 9;
  if (!bVar13 && bVar11 == bVar12) {
    uVar18 = 0xffffffff;
  }
  return uVar18;
}


