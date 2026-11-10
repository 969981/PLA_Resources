/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03268f90; name: FUN_03268f90
 */


undefined4
FUN_03268f90(long param_1,float *param_2,long param_3,long param_4,int param_5,int param_6,
            int param_7,int param_8,int *param_9)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined4 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long *plVar23;
  undefined1 extraout_b0;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar34;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar42 [16];
  int iVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar67;
  float fVar68;
  ulong uVar66;
  float fVar69;
  int iVar70;
  float fVar71;
  float fVar72;
  int iVar73;
  int iVar78;
  undefined8 uVar74;
  ulong uVar75;
  float fVar79;
  undefined8 uVar76;
  undefined1 auVar77 [16];
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  float fVar85;
  float fVar86;
  undefined8 uVar83;
  undefined1 auVar84 [16];
  float fVar87;
  float fVar88;
  undefined8 uVar89;
  float fVar90;
  float fVar91;
  undefined1 auStack_1c0 [16];
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  float fStack_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float local_110;
  float fStack_10c;
  float fStack_108;
  undefined8 uStack_100;
  float fStack_f8;
  float local_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  int local_88 [2];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int local_58 [2];
  
  local_58[0] = param_7;
  FUN_031934ec(param_3,local_58,&uStack_70);
  local_88[0] = param_8;
  FUN_031934ec(param_4,local_88,&local_80);
  fVar34 = (float)((ulong)uStack_68 >> 0x20);
  fVar48 = (float)uStack_70;
  fVar29 = fVar48 * local_80;
  fVar31 = (float)((ulong)uStack_70 >> 0x20);
  fVar65 = fVar31 * fStack_7c;
  uVar24 = (undefined1)((uint)fVar65 >> 8);
  uVar25 = (undefined1)((uint)fVar65 >> 0x10);
  uVar26 = (undefined1)((uint)fVar65 >> 0x18);
  fVar27 = (float)uStack_68 * fStack_78;
  fVar28 = fVar34 * fStack_74;
  auVar32[4] = SUB41(fVar65,0);
  auVar32._0_4_ = fVar29;
  auVar32[5] = uVar24;
  auVar32[6] = uVar25;
  auVar32[7] = uVar26;
  auVar32._8_4_ = fVar27;
  auVar32._12_4_ = fVar28;
  auVar58[4] = SUB41(fVar65,0);
  auVar58._0_4_ = fVar29;
  auVar58[5] = uVar24;
  auVar58[6] = uVar25;
  auVar58[7] = uVar26;
  auVar58._8_4_ = fVar27;
  auVar58._12_4_ = fVar28;
  auVar32 = NEON_ext(auVar32,auVar58,8,1);
  if (fVar29 + fVar65 + auVar32._0_4_ < *(float *)(param_1 + 0x24)) {
    return 0xc;
  }
  lVar22 = *(long *)(param_3 + 0x20);
  if (param_5 < *(int *)(lVar22 + 0x30)) {
    lVar20 = *(long *)(lVar22 + 0x28);
    iVar70 = param_5;
    if (*(int *)(lVar22 + 0x78) != 0) {
      iVar70 = *(int *)(*(long *)(lVar22 + 0x70) + (long)param_5 * 4);
    }
    if (iVar70 != -1) {
      plVar18 = (long *)(lVar22 + 0xc0);
      goto LAB_0326907c;
    }
    iVar70 = param_5;
  }
  else {
    iVar70 = param_5 - *(int *)(lVar22 + 0x30);
    plVar18 = (long *)(lVar22 + 0xe0);
LAB_0326907c:
    lVar20 = *plVar18;
  }
  lVar19 = *(long *)(param_4 + 0x20);
  if (param_6 < *(int *)(lVar19 + 0x30)) {
    lVar17 = *(long *)(lVar19 + 0x28);
    iVar78 = param_6;
    if (*(int *)(lVar19 + 0x78) != 0) {
      iVar78 = *(int *)(*(long *)(lVar19 + 0x70) + (long)param_6 * 4);
    }
    if (iVar78 == -1) {
      iVar78 = param_6;
      goto LAB_032690c8;
    }
    plVar18 = (long *)(lVar19 + 0xc0);
  }
  else {
    iVar78 = param_6 - *(int *)(lVar19 + 0x30);
    plVar18 = (long *)(lVar19 + 0xe0);
  }
  lVar17 = *plVar18;
LAB_032690c8:
  iVar56 = *(int *)(lVar22 + 0x40);
  iVar73 = *(int *)(lVar20 + (long)iVar70 * 0x14);
  plVar18 = (long *)(lVar22 + 0x38);
  if (iVar73 < iVar56) {
    iVar21 = 0;
    plVar23 = plVar18;
  }
  else {
    plVar23 = (long *)(lVar22 + 0xf0);
    iVar21 = iVar56;
  }
  pfVar1 = (float *)(*plVar23 + (long)(iVar73 - iVar21) * 0x10);
  fVar51 = *pfVar1;
  fVar30 = pfVar1[1];
  fVar64 = pfVar1[2];
  fVar52 = (float)*(undefined8 *)(param_3 + 0x68);
  fVar57 = (float)((ulong)*(undefined8 *)(param_3 + 0x68) >> 0x20);
  fVar29 = (float)*(undefined8 *)(param_3 + 0x60);
  fVar65 = (float)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x20);
  fVar71 = (float)*(undefined8 *)(param_3 + 0x88);
  fVar62 = (float)((ulong)*(undefined8 *)(param_3 + 0x88) >> 0x20);
  fVar27 = (float)*(undefined8 *)(param_3 + 0x80);
  fVar28 = (float)((ulong)*(undefined8 *)(param_3 + 0x80) >> 0x20);
  fVar39 = *(float *)(param_3 + 0x90) +
           fVar27 * fVar64 + fVar29 * fVar51 + *(float *)(param_3 + 0x70) * fVar30;
  fVar43 = *(float *)(param_3 + 0x94) +
           fVar28 * fVar64 + fVar65 * fVar51 + *(float *)(param_3 + 0x74) * fVar30;
  fVar49 = *(float *)(param_3 + 0x98) +
           fVar71 * fVar64 + fVar52 * fVar51 + *(float *)(param_3 + 0x78) * fVar30;
  fVar51 = *(float *)(param_3 + 0x9c) +
           fVar62 * fVar64 + fVar57 * fVar51 + *(float *)(param_3 + 0x7c) * fVar30;
  iVar70 = *(int *)(lVar20 + (long)iVar70 * 0x14 + 4);
  if (iVar70 < iVar56) {
    iVar56 = 0;
  }
  else {
    plVar18 = (long *)(lVar22 + 0xf0);
  }
  pfVar1 = (float *)(*plVar18 + (long)(iVar70 - iVar56) * 0x10);
  fVar30 = *pfVar1;
  fVar64 = pfVar1[1];
  fVar50 = pfVar1[2];
  fVar65 = *(float *)(param_3 + 0x94) +
           fVar28 * fVar50 + fVar65 * fVar30 + *(float *)(param_3 + 0x74) * fVar64;
  uStack_a8 = CONCAT44(*(float *)(param_3 + 0x9c) +
                       fVar62 * fVar50 + fVar57 * fVar30 + *(float *)(param_3 + 0x7c) * fVar64,
                       *(float *)(param_3 + 0x98) +
                       fVar71 * fVar50 + fVar52 * fVar30 + *(float *)(param_3 + 0x78) * fVar64);
  local_b0 = CONCAT17((char)((uint)fVar65 >> 0x18),
                      CONCAT16((char)((uint)fVar65 >> 0x10),
                               CONCAT15((char)((uint)fVar65 >> 8),
                                        CONCAT14(SUB41(fVar65,0),
                                                 *(float *)(param_3 + 0x90) +
                                                 fVar27 * fVar50 +
                                                 fVar29 * fVar30 +
                                                 *(float *)(param_3 + 0x70) * fVar64))));
  iVar56 = *(int *)(lVar17 + (long)iVar78 * 0x14);
  iVar70 = *(int *)(lVar19 + 0x40);
  plVar18 = (long *)(lVar19 + 0x38);
  if (iVar56 < iVar70) {
    iVar73 = 0;
    plVar23 = plVar18;
  }
  else {
    plVar23 = (long *)(lVar19 + 0xf0);
    iVar73 = iVar70;
  }
  pfVar1 = (float *)(*plVar23 + (long)(iVar56 - iVar73) * 0x10);
  fVar52 = *pfVar1;
  fVar57 = pfVar1[1];
  fVar71 = pfVar1[2];
  fVar62 = (float)*(undefined8 *)(param_4 + 0x68);
  fVar35 = (float)((ulong)*(undefined8 *)(param_4 + 0x68) >> 0x20);
  fVar29 = (float)*(undefined8 *)(param_4 + 0x60);
  fVar65 = (float)((ulong)*(undefined8 *)(param_4 + 0x60) >> 0x20);
  fVar37 = (float)*(undefined8 *)(param_4 + 0x88);
  fVar38 = (float)((ulong)*(undefined8 *)(param_4 + 0x88) >> 0x20);
  auVar32 = *(undefined1 (*) [16])(param_4 + 0x90);
  fVar30 = (float)*(undefined8 *)(param_4 + 0x80);
  fVar64 = (float)((ulong)*(undefined8 *)(param_4 + 0x80) >> 0x20);
  fVar27 = auVar32._0_4_ + fVar30 * fVar71 + fVar29 * fVar52 + *(float *)(param_4 + 0x70) * fVar57;
  fVar28 = auVar32._4_4_ + fVar64 * fVar71 + fVar65 * fVar52 + *(float *)(param_4 + 0x74) * fVar57;
  fVar50 = auVar32._8_4_ + fVar37 * fVar71 + fVar62 * fVar52 + *(float *)(param_4 + 0x78) * fVar57;
  fVar52 = auVar32._12_4_ + fVar38 * fVar71 + fVar35 * fVar52 + *(float *)(param_4 + 0x7c) * fVar57;
  iVar78 = *(int *)(lVar17 + (long)iVar78 * 0x14 + 4);
  if (iVar78 < iVar70) {
    iVar70 = 0;
  }
  else {
    plVar18 = (long *)(lVar19 + 0xf0);
  }
  auVar58 = *(undefined1 (*) [16])(*plVar18 + (long)(iVar78 - iVar70) * 0x10);
  fVar57 = auVar58._0_4_;
  fVar71 = auVar58._4_4_;
  fVar40 = auVar58._8_4_;
  fVar65 = auVar32._4_4_ + fVar64 * fVar40 + fVar65 * fVar57 + *(float *)(param_4 + 0x74) * fVar71;
  uStack_c8 = CONCAT44(auVar32._12_4_ +
                       fVar38 * fVar40 + fVar35 * fVar57 + *(float *)(param_4 + 0x7c) * fVar71,
                       auVar32._8_4_ +
                       fVar37 * fVar40 + fVar62 * fVar57 + *(float *)(param_4 + 0x78) * fVar71);
  local_d0 = CONCAT17((char)((uint)fVar65 >> 0x18),
                      CONCAT16((char)((uint)fVar65 >> 0x10),
                               CONCAT15((char)((uint)fVar65 >> 8),
                                        CONCAT14(SUB41(fVar65,0),
                                                 auVar32._0_4_ +
                                                 fVar30 * fVar40 +
                                                 fVar29 * fVar57 +
                                                 *(float *)(param_4 + 0x70) * fVar71))));
  local_c0 = fVar27;
  fStack_bc = fVar28;
  fStack_b8 = fVar50;
  fStack_b4 = fVar52;
  local_a0 = fVar39;
  fStack_9c = fVar43;
  fStack_98 = fVar49;
  fStack_94 = fVar51;
  FUN_032699a8(&local_1b0,&local_a0,&local_b0,&local_c0,&local_d0);
  fVar30 = (float)uStack_1a0 - local_1b0;
  fVar64 = (float)((ulong)uStack_1a0 >> 0x20) - fStack_1ac;
  fVar37 = (float)uStack_198 - fStack_1a8;
  fVar38 = (float)((ulong)uStack_198 >> 0x20) - fStack_1a4;
  fVar57 = *param_2;
  fVar71 = param_2[1];
  fVar62 = param_2[2];
  fVar35 = (float)uStack_188;
  fStack_134 = (float)((ulong)uStack_188 >> 0x20);
  fVar40 = -(fVar30 * fVar57 + fVar64 * fVar71 + fVar37 * fVar62);
  fVar44 = -(fVar30 * fVar57 + fVar64 * fVar71 + fVar37 * fVar62);
  fVar29 = (float)local_190;
  fStack_180 = fStack_180 - fVar29;
  fVar65 = (float)((ulong)local_190 >> 0x20);
  fStack_17c = fStack_17c - fVar65;
  fStack_178 = fStack_178 - fVar35;
  fStack_174 = fStack_174 - fStack_134;
  fVar41 = fVar30 + fVar57 * fVar40;
  fVar45 = fVar64 + fVar71 * fVar44;
  fVar40 = fVar37 + fVar62 * fVar40;
  fVar63 = fVar41 * fVar41 + fVar45 * fVar45 + fVar40 * fVar40;
  fVar67 = fVar41 * fVar41 + fVar45 * fVar45 + fVar40 * fVar40;
  uVar74 = CONCAT44(fVar67,fVar63);
  uVar82 = NEON_frsqrte(uVar74,4);
  fVar80 = (float)uVar82;
  fVar85 = (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(uVar74,CONCAT44(fVar85 * fVar85,fVar80 * fVar80),4);
  fVar80 = fVar80 * (float)uVar82;
  fVar85 = fVar85 * (float)((ulong)uVar82 >> 0x20);
  iVar70 = -(uint)(fVar63 <= 0.0);
  iVar78 = -(uint)(fVar67 <= 0.0);
  uVar82 = NEON_frsqrts(uVar74,CONCAT44(fVar85 * fVar85,fVar80 * fVar80),4);
  fVar63 = -(fStack_180 * fVar57 + fStack_17c * fVar71 + fStack_178 * fVar62);
  fVar60 = -(fStack_180 * fVar57 + fStack_17c * fVar71 + fStack_178 * fVar62);
  fVar80 = (float)uVar82 * fVar80;
  fVar85 = (float)((ulong)uVar82 >> 0x20) * fVar85;
  fVar67 = fStack_180 + fVar57 * fVar63;
  fVar61 = fStack_17c + fVar71 * fVar60;
  fVar63 = fStack_178 + fVar62 * fVar63;
  fVar80 = (float)CONCAT13((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                           CONCAT12((byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                                    CONCAT11((byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                             SUB41(fVar80,0) & ~(byte)iVar70)));
  fVar69 = (float)(CONCAT17((byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                            CONCAT16((byte)((uint)fVar85 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10),
                                     CONCAT15((byte)((uint)fVar85 >> 8) & ~(byte)((uint)iVar78 >> 8)
                                              ,CONCAT14(SUB41(fVar85,0) & ~(byte)iVar78,fVar80))))
                  >> 0x20);
  fVar85 = fVar67 * fVar67 + fVar61 * fVar61 + fVar63 * fVar63;
  fVar68 = fVar67 * fVar67 + fVar61 * fVar61 + fVar63 * fVar63;
  uVar74 = CONCAT44(fVar68,fVar85);
  uVar82 = NEON_frsqrte(uVar74,4);
  fVar81 = (float)uVar82;
  fVar86 = (float)((ulong)uVar82 >> 0x20);
  uVar82 = NEON_frsqrts(uVar74,CONCAT44(fVar86 * fVar86,fVar81 * fVar81),4);
  fVar81 = fVar81 * (float)uVar82;
  fVar86 = fVar86 * (float)((ulong)uVar82 >> 0x20);
  iVar70 = -(uint)(fVar85 <= 0.0);
  iVar78 = -(uint)(fVar68 <= 0.0);
  uVar82 = NEON_frsqrts(uVar74,CONCAT44(fVar86 * fVar86,fVar81 * fVar81),4);
  fVar81 = (float)uVar82 * fVar81;
  fVar86 = (float)((ulong)uVar82 >> 0x20) * fVar86;
  fVar85 = (float)CONCAT13((byte)((uint)fVar81 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                           CONCAT12((byte)((uint)fVar81 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                                    CONCAT11((byte)((uint)fVar81 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                             SUB41(fVar81,0) & ~(byte)iVar70)));
  fVar81 = (float)(CONCAT17((byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                            CONCAT16((byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10),
                                     CONCAT15((byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar78 >> 8)
                                              ,CONCAT14(SUB41(fVar86,0) & ~(byte)iVar78,fVar85))))
                  >> 0x20);
  auVar77._0_4_ = fVar41 * fVar80 * fVar67 * fVar85;
  auVar77._4_4_ = fVar45 * fVar69 * fVar61 * fVar81;
  auVar77._8_4_ = fVar40 * fVar80 * fVar63 * fVar85;
  auVar77._12_4_ =
       (fVar38 + param_2[3] * fVar44) * fVar69 * (fStack_174 + param_2[3] * fVar60) * fVar81;
  auVar32 = NEON_ext(auVar77,auVar77,8,1);
  fVar40 = -(auVar77._0_4_ + auVar77._4_4_ + auVar32._0_4_);
  if (fVar40 < *(float *)(param_1 + 0x28)) {
    uVar16 = 0xd;
  }
  else {
    fVar41 = fVar37 * fVar37 + fVar30 * fVar30 + fVar64 * fVar64;
    fVar45 = fVar37 * fVar37 + fVar30 * fVar30 + fVar64 * fVar64;
    uVar82 = CONCAT44(fVar45,fVar41);
    uVar74 = NEON_frsqrte(uVar82,4);
    fVar44 = (float)uVar74;
    fVar67 = (float)((ulong)uVar74 >> 0x20);
    uVar74 = NEON_frsqrts(uVar82,CONCAT44(fVar67 * fVar67,fVar44 * fVar44),4);
    fVar44 = fVar44 * (float)uVar74;
    fVar67 = fVar67 * (float)((ulong)uVar74 >> 0x20);
    iVar70 = -(uint)(fVar41 <= 0.0);
    iVar78 = -(uint)(fVar45 <= 0.0);
    uVar82 = NEON_frsqrts(uVar82,CONCAT44(fVar67 * fVar67,fVar44 * fVar44),4);
    fVar44 = (float)uVar82 * fVar44;
    fVar67 = (float)((ulong)uVar82 >> 0x20) * fVar67;
    fVar63 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                             CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                                      CONCAT11((byte)((uint)fVar44 >> 8) &
                                               ~(byte)((uint)iVar70 >> 8),
                                               SUB41(fVar44,0) & ~(byte)iVar70)));
    fVar90 = fVar30 * fVar63;
    fVar60 = (float)(CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                              CONCAT16((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10),
                                       CONCAT15((byte)((uint)fVar67 >> 8) &
                                                ~(byte)((uint)iVar78 >> 8),
                                                CONCAT14(SUB41(fVar67,0) & ~(byte)iVar78,fVar63))))
                    >> 0x20);
    fVar91 = fVar64 * fVar60;
    fVar63 = fVar37 * fVar63;
    fVar60 = fVar38 * fVar60;
    fVar41 = fStack_178 * fStack_178 + fStack_180 * fStack_180 + fStack_17c * fStack_17c;
    fVar45 = fStack_178 * fStack_178 + fStack_180 * fStack_180 + fStack_17c * fStack_17c;
    uVar82 = CONCAT44(fVar45,fVar41);
    uVar74 = NEON_frsqrte(uVar82,4);
    fVar44 = (float)uVar74;
    fVar61 = (float)((ulong)uVar74 >> 0x20);
    uVar74 = NEON_frsqrts(uVar82,CONCAT44(fVar61 * fVar61,fVar44 * fVar44),4);
    fVar44 = fVar44 * (float)uVar74;
    fVar61 = fVar61 * (float)((ulong)uVar74 >> 0x20);
    iVar70 = -(uint)(fVar41 <= 0.0);
    iVar78 = -(uint)(fVar45 <= 0.0);
    uVar82 = NEON_frsqrts(uVar82,CONCAT44(fVar61 * fVar61,fVar44 * fVar44),4);
    fVar44 = (float)uVar82 * fVar44;
    fVar61 = (float)((ulong)uVar82 >> 0x20) * fVar61;
    fVar67 = (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                             CONCAT12((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                                      CONCAT11((byte)((uint)fVar44 >> 8) &
                                               ~(byte)((uint)iVar70 >> 8),
                                               SUB41(fVar44,0) & ~(byte)iVar70)));
    fVar68 = fStack_180 * fVar67;
    fVar61 = (float)(CONCAT17((byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                              CONCAT16((byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar78 >> 0x10),
                                       CONCAT15((byte)((uint)fVar61 >> 8) &
                                                ~(byte)((uint)iVar78 >> 8),
                                                CONCAT14(SUB41(fVar61,0) & ~(byte)iVar78,fVar67))))
                    >> 0x20);
    fVar86 = fStack_17c * fVar61;
    fVar67 = fStack_178 * fVar67;
    fVar61 = fStack_174 * fVar61;
    fVar41 = (fVar90 - fVar68) * 0.5;
    fVar44 = (fVar91 - fVar86) * 0.5;
    fVar45 = (fVar63 - fVar67) * 0.5;
    fVar80 = fVar57 * fVar41;
    fVar81 = fVar71 * fVar44;
    fVar69 = fVar62 * fVar45;
    fVar85 = -(fVar69 + fVar80 + fVar81);
    fVar41 = fVar41 + fVar57 * fVar85;
    fVar44 = fVar44 + fVar71 * -(fVar69 + fVar80 + fVar81);
    fVar45 = fVar45 + fVar62 * fVar85;
    fVar57 = fVar41 * fVar41 + fVar44 * fVar44 + fVar45 * fVar45;
    fVar62 = fVar41 * fVar41 + fVar44 * fVar44 + fVar45 * fVar45;
    uVar82 = CONCAT44(fVar62,fVar57);
    uVar74 = NEON_frsqrte(uVar82,4);
    fVar71 = (float)uVar74;
    fVar80 = (float)((ulong)uVar74 >> 0x20);
    uVar74 = NEON_frsqrts(uVar82,CONCAT44(fVar80 * fVar80,fVar71 * fVar71),4);
    fVar71 = fVar71 * (float)uVar74;
    fVar80 = fVar80 * (float)((ulong)uVar74 >> 0x20);
    iVar70 = -(uint)(fVar57 <= 0.0);
    iVar78 = -(uint)(fVar62 <= 0.0);
    uVar82 = NEON_frsqrts(uVar82,CONCAT44(fVar80 * fVar80,fVar71 * fVar71),4);
    fVar71 = (float)uVar82 * fVar71;
    fVar80 = (float)((ulong)uVar82 >> 0x20) * fVar80;
    fVar57 = (float)CONCAT13((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                             CONCAT12((byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                                      CONCAT11((byte)((uint)fVar71 >> 8) &
                                               ~(byte)((uint)iVar70 >> 8),
                                               SUB41(fVar71,0) & ~(byte)iVar70)));
    fVar41 = fVar41 * fVar57;
    fVar44 = fVar44 * (float)(CONCAT17((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                                       CONCAT16((byte)((uint)fVar80 >> 0x10) &
                                                ~(byte)((uint)iVar78 >> 0x10),
                                                CONCAT15((byte)((uint)fVar80 >> 8) &
                                                         ~(byte)((uint)iVar78 >> 8),
                                                         CONCAT14(SUB41(fVar80,0) & ~(byte)iVar78,
                                                                  fVar57)))) >> 0x20);
    fVar45 = fVar45 * fVar57;
    fVar71 = local_160 * fVar41 + fStack_15c * fVar44 + fStack_158 * fVar45;
    fVar62 = local_160 * fVar41 + fStack_15c * fVar44 + fStack_158 * fVar45;
    fVar80 = (float)local_150 * fVar41 + local_150._4_4_ * fVar44 + (float)uStack_148 * fVar45;
    fVar85 = (float)local_150 * fVar41 + local_150._4_4_ * fVar44 + (float)uStack_148 * fVar45;
    fVar81 = (float)local_140 * fVar41 + local_140._4_4_ * fVar44 + fStack_138 * fVar45;
    fVar69 = (float)local_140 * fVar41 + local_140._4_4_ * fVar44 + fStack_138 * fVar45;
    fVar57 = fVar81;
    if (fVar80 <= fVar81) {
      fVar57 = fVar80;
    }
    if (fVar57 <= fVar71) {
      fVar57 = (float)local_170 * fVar41 + local_170._4_4_ * fVar44 + (float)uStack_168 * fVar45;
      fVar41 = (float)local_170 * fVar41 + local_170._4_4_ * fVar44 + (float)uStack_168 * fVar45;
      uVar66 = CONCAT44(-(uint)(fVar81 < fVar80),-(uint)(fVar81 < fVar80));
      uVar75 = CONCAT44(fVar69,fVar81) ^
               (CONCAT44(fVar69,fVar81) ^ CONCAT44(fVar85,fVar80)) & uVar66;
      fVar44 = (float)uVar75;
      if (fVar57 <= fVar44) {
        fVar45 = fVar71 - fVar57;
        uVar82 = CONCAT44(fVar62 - fVar41,fVar45);
        if (1e-06 <= fVar45) {
          uVar66 = CONCAT44(fVar85,fVar80) ^
                   (CONCAT44(fVar85,fVar80) ^ CONCAT44(fVar69,fVar81)) & uVar66;
          fVar80 = (float)uVar66;
          fVar69 = fVar44 - fVar80;
          fVar85 = (float)(uVar66 >> 0x20);
          fVar81 = (float)(uVar75 >> 0x20);
          fVar87 = fVar81 - fVar85;
          if (1e-06 <= fVar69) {
            uVar74 = NEON_fmax(CONCAT44(fVar41,fVar57),uVar66,4);
            uVar89 = NEON_fmin(CONCAT44(fVar62,fVar71),uVar75,4);
            fVar88 = (float)uVar89 - (float)uVar74;
            fVar45 = ABS(fVar88 - fVar45);
            bVar12 = false;
            bVar14 = false;
            if (fVar88 < *(float *)(param_1 + 0x18)) {
              bVar12 = false;
              bVar14 = true;
              if (!NAN(fVar45)) {
                bVar12 = fVar45 == 1e-05;
                bVar14 = 1e-05 <= fVar45;
              }
            }
            fVar45 = ABS(fVar88 - fVar69);
            bVar13 = false;
            bVar15 = false;
            if (bVar14 && !bVar12) {
              bVar13 = false;
              bVar15 = true;
              if (!NAN(fVar45)) {
                bVar13 = fVar45 == 1e-05;
                bVar15 = 1e-05 <= fVar45;
              }
            }
            if (!bVar15 || bVar13) {
              param_9[5] = (int)fVar40;
              param_9[6] = (int)fVar88;
              uVar89 = NEON_frecpe(uVar82,4);
              uVar74 = NEON_frecps(uVar82,uVar89,4);
              fVar40 = (float)uVar89 * (float)uVar74;
              fVar88 = (float)((ulong)uVar89 >> 0x20) * (float)((ulong)uVar74 >> 0x20);
              uVar82 = NEON_frecps(uVar82,CONCAT44(fVar88,fVar40),4);
              fVar40 = fVar40 * (float)uVar82;
              fVar88 = fVar88 * (float)((ulong)uVar82 >> 0x20);
              uVar74 = NEON_frecpe(CONCAT44(fVar87,fVar69),4);
              uVar82 = NEON_frecps(CONCAT44(fVar87,fVar69),uVar74,4);
              fVar45 = (float)uVar74 * (float)uVar82;
              fVar46 = (float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
              uVar82 = NEON_frecps(CONCAT44(fVar87,fVar69),CONCAT44(fVar46,fVar45),4);
              param_9[3] = param_8;
              param_9[4] = -0x40800000;
              *(undefined1 *)(param_9 + 7) = 1;
              *param_9 = param_5;
              param_9[1] = param_6;
              param_9[2] = param_7;
              fVar45 = fVar45 * (float)uVar82;
              fVar46 = fVar46 * (float)((ulong)uVar82 >> 0x20);
              fVar69 = 0.0;
              fStack_ec = 0.0;
              if (ABS(fVar57 - fVar80) <= 0.001) {
                fVar87 = 0.0;
                fVar47 = 0.0;
              }
              else if (fVar57 <= fVar80) {
                fVar69 = (fVar80 - fVar57) * fVar40;
                fStack_ec = (fVar85 - fVar41) * fVar88;
                fVar87 = 0.0;
                fVar47 = 0.0;
              }
              else {
                fVar87 = (fVar57 - fVar80) * fVar45;
                fVar47 = (fVar41 - fVar85) * fVar46;
              }
              uStack_e8 = NEON_fmov(0x3f800000,4);
              fVar72 = (float)uStack_e8;
              fVar79 = (float)((ulong)uStack_e8 >> 0x20);
              uVar82 = uStack_e8;
              if (0.001 < ABS(fVar71 - fVar44)) {
                if (fVar71 <= fVar44) {
                  uVar82 = CONCAT44((fVar62 - fVar85) * fVar46,(fVar71 - fVar80) * fVar45);
                }
                else {
                  uStack_e8 = CONCAT44((fVar81 - fVar41) * fVar88,(fVar44 - fVar57) * fVar40);
                }
              }
              fVar71 = fVar72 - (float)uVar82;
              fVar62 = fVar79 - (float)((ulong)uVar82 >> 0x20);
              local_e0 = CONCAT44(fVar62,fVar71);
              fVar72 = fVar72 - fVar87;
              fVar79 = fVar79 - fVar47;
              uStack_d8 = CONCAT44(fVar79,fVar72);
              fVar40 = (float)uStack_e8;
              fVar57 = (float)((ulong)uStack_e8 >> 0x20);
              auVar53._0_8_ = CONCAT44(fStack_1ac + fVar64 * fStack_ec,local_1b0 + fVar30 * fVar69);
              auVar53._8_4_ = fStack_1a8 + fVar37 * fVar69;
              auVar53._12_4_ = fStack_1a4 + fVar38 * fStack_ec;
              local_160 = local_1b0 + fVar30 * fVar40;
              fStack_15c = fStack_1ac + fVar64 * fVar57;
              fStack_158 = fStack_1a8 + fVar37 * fVar40;
              fStack_154 = fStack_1a4 + fVar38 * fVar57;
              uStack_168 = auVar53._8_8_;
              auVar84._0_8_ = CONCAT44(fVar65 + fStack_17c * fVar62,fVar29 + fStack_180 * fVar71);
              auVar84._8_4_ = fVar35 + fStack_178 * fVar71;
              auVar84._12_4_ = fStack_134 + fStack_174 * fVar62;
              fVar65 = fVar65 + fStack_17c * fVar79;
              fStack_138 = fVar35 + fStack_178 * fVar72;
              fStack_134 = fStack_134 + fStack_174 * fVar79;
              uStack_148 = auVar84._8_8_;
              local_140 = CONCAT17((char)((uint)fVar65 >> 0x18),
                                   CONCAT16((char)((uint)fVar65 >> 0x10),
                                            CONCAT15((char)((uint)fVar65 >> 8),
                                                     CONCAT14(SUB41(fVar65,0),
                                                              fVar29 + fStack_180 * fVar72))));
              if ((fVar69 < fVar40) && (fVar71 < fVar72)) {
                auVar10._12_4_ = fVar60;
                auVar10._8_4_ = fVar63;
                auVar10._4_4_ = fVar91;
                auVar10._0_4_ = fVar90;
                local_170 = auVar53._0_8_;
                local_150 = auVar84._0_8_;
                local_f0 = fVar69;
                FUN_03269aac(&local_1b0,auStack_1c0);
                fVar29 = *(float *)(param_1 + 4) * *(float *)(param_1 + 4);
                if ((float)CONCAT13(extraout_var_01,
                                    CONCAT12(extraout_var_00,CONCAT11(extraout_var,extraout_b0))) !=
                    fVar29 && fVar29 <= (float)CONCAT13(extraout_var_01,
                                                        CONCAT12(extraout_var_00,
                                                                 CONCAT11(extraout_var,extraout_b0))
                                                       )) {
                  return 2;
                }
                param_9[8] = (int)fVar69;
                param_9[9] = (int)fVar40;
                param_9[10] = (int)fVar71;
                param_9[0xb] = (int)fVar72;
                FUN_03269c4c(&local_1b0,param_2);
                fVar29 = (float)((ulong)uStack_120 >> 0x20);
                fVar65 = local_130 - (float)uStack_120;
                fVar30 = fStack_12c - fVar29;
                fVar62 = fStack_128 - fStack_118;
                fVar64 = (float)((ulong)uStack_100 >> 0x20);
                fVar57 = local_110 - (float)uStack_100;
                fVar71 = fStack_10c - fVar64;
                fVar38 = fStack_108 - fStack_f8;
                fVar35 = local_110 - (local_130 + ((float)uStack_120 - local_130) * 0.5);
                fVar29 = fStack_10c - (fStack_12c + (fVar29 - fStack_12c) * 0.5);
                fVar37 = fStack_108 - (fStack_128 + (fStack_118 - fStack_128) * 0.5);
                fVar40 = fVar57 * fVar35;
                fVar41 = fVar71 * fVar29;
                fVar44 = fVar38 * fVar37;
                uVar82 = CONCAT44(fVar57 * fVar57 + fVar71 * fVar71 + fVar38 * fVar38,
                                  fVar57 * fVar57 + fVar71 * fVar71 + fVar38 * fVar38);
                uVar74 = NEON_frecpe(uVar82,4);
                local_130 = local_130 - (local_110 + ((float)uStack_100 - local_110) * 0.5);
                fStack_12c = fStack_12c - (fStack_10c + (fVar64 - fStack_10c) * 0.5);
                fStack_128 = fStack_128 - (fStack_108 + (fStack_f8 - fStack_108) * 0.5);
                uVar89 = NEON_frecps(uVar82,uVar74,4);
                fVar64 = (float)uVar74 * (float)uVar89;
                fVar45 = (float)((ulong)uVar74 >> 0x20) * (float)((ulong)uVar89 >> 0x20);
                uVar82 = NEON_frecps(uVar82,CONCAT44(fVar45,fVar64),4);
                uVar89 = NEON_fmov(0x3f800000,4);
                uVar82 = NEON_fminnm(CONCAT44((fVar40 + fVar41 + fVar44) *
                                              fVar45 * (float)((ulong)uVar82 >> 0x20),
                                              (fVar40 + fVar41 + fVar44) * fVar64 * (float)uVar82),
                                     uVar89,4);
                uVar82 = NEON_fmax(uVar82,0,4);
                fVar35 = fVar35 - fVar57 * (float)uVar82;
                fVar29 = fVar29 - fVar71 * (float)((ulong)uVar82 >> 0x20);
                fVar37 = fVar37 - fVar38 * (float)uVar82;
                fVar35 = fVar35 * fVar35;
                fVar29 = fVar29 * fVar29;
                fVar37 = fVar37 * fVar37;
                fVar57 = fVar35 + fVar29 + fVar37;
                uVar74 = CONCAT44(fVar35 + fVar29 + fVar37,fVar57);
                uVar82 = NEON_frsqrte(uVar74,4);
                fVar29 = (float)uVar82;
                fVar64 = (float)((ulong)uVar82 >> 0x20);
                uVar82 = NEON_frsqrts(uVar74,CONCAT44(fVar64 * fVar64,fVar29 * fVar29),4);
                fVar29 = fVar29 * (float)uVar82;
                fVar64 = fVar64 * (float)((ulong)uVar82 >> 0x20);
                fVar71 = fVar65 * local_130;
                fVar35 = fVar30 * fStack_12c;
                fVar37 = fVar62 * fStack_128;
                uVar82 = CONCAT44(fVar62 * fVar62 + fVar65 * fVar65 + fVar30 * fVar30,
                                  fVar62 * fVar62 + fVar65 * fVar65 + fVar30 * fVar30);
                uVar76 = NEON_frecpe(uVar82,4);
                uVar83 = NEON_frecps(uVar82,uVar76,4);
                fVar38 = (float)uVar76 * (float)uVar83;
                fVar40 = (float)((ulong)uVar76 >> 0x20) * (float)((ulong)uVar83 >> 0x20);
                uVar82 = NEON_frecps(uVar82,CONCAT44(fVar40,fVar38),4);
                iVar73 = -(uint)(fVar57 <= 0.0);
                uVar82 = NEON_fminnm(CONCAT44((fVar37 + fVar71 + fVar35) *
                                              fVar40 * (float)((ulong)uVar82 >> 0x20),
                                              (fVar37 + fVar71 + fVar35) * fVar38 * (float)uVar82),
                                     uVar89,4);
                uVar82 = NEON_fmax(uVar82,0,4);
                auVar11._8_8_ = uStack_68;
                auVar11._0_8_ = uStack_70;
                auVar7._4_4_ = fStack_7c;
                auVar7._0_4_ = local_80;
                auVar7._8_4_ = fStack_78;
                auVar6._4_4_ = fStack_7c;
                auVar6._0_4_ = local_80;
                auVar6._8_4_ = fStack_78;
                auVar6._12_4_ = fStack_74;
                auVar7._12_4_ = fStack_74;
                auVar84 = NEON_ext(auVar6,auVar7,4,1);
                uVar74 = NEON_frsqrts(uVar74,CONCAT44(fVar64 * fVar64,fVar29 * fVar29),4);
                auVar58 = NEON_ext(auVar11,auVar11,4,1);
                fVar57 = (float)uVar74 * fVar29 * fVar57;
                local_130 = local_130 - fVar65 * (float)uVar82;
                fStack_12c = fStack_12c - fVar30 * (float)((ulong)uVar82 >> 0x20);
                fStack_128 = fStack_128 - fVar62 * (float)uVar82;
                local_130 = local_130 * local_130;
                fStack_12c = fStack_12c * fStack_12c;
                fStack_128 = fStack_128 * fStack_128;
                fVar30 = local_130 + fStack_12c + fStack_128;
                uVar74 = CONCAT44(local_130 + fStack_12c + fStack_128,fVar30);
                uVar82 = NEON_frsqrte(uVar74,4);
                auVar9._8_4_ = fVar67;
                auVar9._0_8_ = CONCAT44(fVar86,fVar68);
                auVar8._8_4_ = fVar67;
                auVar8._0_8_ = CONCAT44(fVar86,fVar68);
                auVar32 = NEON_ext(auVar10,auVar10,4,1);
                auVar8._12_4_ = fVar61;
                auVar9._12_4_ = fVar61;
                auVar77 = NEON_ext(auVar8,auVar9,4,1);
                fVar29 = (float)uVar82;
                fVar65 = (float)((ulong)uVar82 >> 0x20);
                uVar82 = NEON_frsqrts(uVar74,CONCAT44(fVar65 * fVar65,fVar29 * fVar29),4);
                fVar29 = fVar29 * (float)uVar82;
                fVar65 = fVar65 * (float)((ulong)uVar82 >> 0x20);
                iVar70 = -(uint)(fVar30 <= 0.0);
                auVar42._0_4_ = auVar58._0_4_ * fVar90 - fVar48 * auVar32._0_4_;
                auVar42._4_4_ = auVar58._4_4_ * fVar91 - fVar31 * auVar32._4_4_;
                auVar42._8_4_ = fVar48 * fVar63 - (float)uStack_68 * fVar90;
                auVar42._12_4_ = fVar31 * fVar60 - fVar34 * fVar91;
                uVar82 = NEON_frsqrts(uVar74,CONCAT44(fVar65 * fVar65,fVar29 * fVar29),4);
                auVar32 = NEON_ext(auVar42,auVar42,4,1);
                fVar71 = auVar32._0_4_;
                fVar35 = auVar32._4_4_;
                fVar30 = (float)uVar82 * fVar29 * fVar30;
                auVar36._0_4_ = auVar84._0_4_ * fVar68 - local_80 * auVar77._0_4_;
                auVar36._4_4_ = auVar84._4_4_ * fVar86 - fStack_7c * auVar77._4_4_;
                auVar36._8_4_ = local_80 * fVar67 - fStack_78 * fVar68;
                auVar36._12_4_ = fStack_7c * fVar61 - fStack_74 * fVar86;
                fVar29 = auVar42._0_4_ * auVar42._0_4_ + fVar71 * fVar71 + fVar35 * fVar35;
                fVar48 = auVar42._0_4_ * auVar42._0_4_ + fVar71 * fVar71 + fVar35 * fVar35;
                uVar82 = CONCAT44(fVar48,fVar29);
                uVar74 = NEON_frsqrte(uVar82,4);
                fVar65 = (float)uVar74;
                fVar62 = (float)((ulong)uVar74 >> 0x20);
                uVar74 = NEON_frsqrts(uVar82,CONCAT44(fVar62 * fVar62,fVar65 * fVar65),4);
                fVar65 = fVar65 * (float)uVar74;
                fVar62 = fVar62 * (float)((ulong)uVar74 >> 0x20);
                iVar78 = -(uint)(fVar29 <= 0.0);
                iVar56 = -(uint)(fVar48 <= 0.0);
                uVar82 = NEON_frsqrts(uVar82,CONCAT44(fVar62 * fVar62,fVar65 * fVar65),4);
                fVar65 = (float)uVar82 * fVar65;
                fVar62 = (float)((ulong)uVar82 >> 0x20) * fVar62;
                fVar64 = (float)CONCAT13((byte)((uint)fVar65 >> 0x18) &
                                         ~(byte)((uint)iVar78 >> 0x18),
                                         CONCAT12((byte)((uint)fVar65 >> 0x10) &
                                                  ~(byte)((uint)iVar78 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar65 >> 8) &
                                                           ~(byte)((uint)iVar78 >> 8),
                                                           SUB41(fVar65,0) & ~(byte)iVar78)));
                auVar32 = NEON_ext(auVar36,auVar36,4,1);
                fVar31 = auVar32._0_4_;
                fVar34 = auVar32._4_4_;
                fVar29 = ((float)CONCAT13((byte)((uint)fVar57 >> 0x18) &
                                          ~(byte)((uint)iVar73 >> 0x18),
                                          CONCAT12((byte)((uint)fVar57 >> 0x10) &
                                                   ~(byte)((uint)iVar73 >> 0x10),
                                                   CONCAT11((byte)((uint)fVar57 >> 8) &
                                                            ~(byte)((uint)iVar73 >> 8),
                                                            SUB41(fVar57,0) & ~(byte)iVar73))) +
                         (float)CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                         ~(byte)((uint)iVar70 >> 0x18),
                                         CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                  ~(byte)((uint)iVar70 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar30 >> 8) &
                                                           ~(byte)((uint)iVar70 >> 8),
                                                           SUB41(fVar30,0) & ~(byte)iVar70)))) * 0.5
                ;
                fVar71 = fVar71 * fVar64;
                fVar65 = (float)(CONCAT17((byte)((uint)fVar62 >> 0x18) &
                                          ~(byte)((uint)iVar56 >> 0x18),
                                          CONCAT16((byte)((uint)fVar62 >> 0x10) &
                                                   ~(byte)((uint)iVar56 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar62 >> 8) &
                                                            ~(byte)((uint)iVar56 >> 8),
                                                            CONCAT14(SUB41(fVar62,0) & ~(byte)iVar56
                                                                     ,fVar64)))) >> 0x20);
                fVar35 = fVar35 * fVar65;
                fVar64 = auVar42._0_4_ * fVar64;
                auVar54._0_4_ = fVar39 * fVar71;
                auVar54._4_4_ = fVar43 * fVar35;
                auVar54._8_4_ = fVar49 * fVar64;
                auVar54._12_4_ = fVar51 * auVar42._4_4_ * fVar65;
                fVar65 = auVar36._0_4_ * auVar36._0_4_ + fVar31 * fVar31 + fVar34 * fVar34;
                fVar48 = auVar36._0_4_ * auVar36._0_4_ + fVar31 * fVar31 + fVar34 * fVar34;
                uVar82 = CONCAT44(fVar48,fVar65);
                iVar70 = -(uint)(fVar65 <= 0.0);
                iVar78 = -(uint)(fVar48 <= 0.0);
                param_9[4] = (int)(fVar29 * fVar29);
                auVar32 = NEON_ext(auVar54,auVar54,8,1);
                uVar74 = NEON_frsqrte(uVar82,4);
                fVar29 = (float)uVar74;
                fVar48 = (float)((ulong)uVar74 >> 0x20);
                uVar74 = NEON_frsqrts(uVar82,CONCAT44(fVar48 * fVar48,fVar29 * fVar29),4);
                fVar29 = fVar29 * (float)uVar74;
                fVar48 = fVar48 * (float)((ulong)uVar74 >> 0x20);
                uVar82 = NEON_frsqrts(uVar82,CONCAT44(fVar48 * fVar48,fVar29 * fVar29),4);
                fVar29 = (float)uVar82 * fVar29;
                fVar48 = (float)((ulong)uVar82 >> 0x20) * fVar48;
                fVar51 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) &
                                         ~(byte)((uint)iVar70 >> 0x18),
                                         CONCAT12((byte)((uint)fVar29 >> 0x10) &
                                                  ~(byte)((uint)iVar70 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar29 >> 8) &
                                                           ~(byte)((uint)iVar70 >> 8),
                                                           SUB41(fVar29,0) & ~(byte)iVar70)));
                fVar30 = -(auVar54._0_4_ + auVar54._4_4_ + auVar32._0_4_);
                fVar29 = fVar71 * (float)local_140;
                fVar65 = fVar35 * (float)((ulong)local_140 >> 0x20);
                uVar24 = (undefined1)((uint)fVar65 >> 8);
                uVar25 = (undefined1)((uint)fVar65 >> 0x10);
                uVar26 = (undefined1)((uint)fVar65 >> 0x18);
                auVar59._0_4_ = (float)local_150 * fVar71;
                auVar59._4_4_ = local_150._4_4_ * fVar35;
                auVar59._8_4_ = (float)uStack_148 * fVar64;
                auVar59._12_4_ = uStack_148._4_4_ * fVar30;
                auVar4[4] = SUB41(fVar65,0);
                auVar4._0_4_ = fVar29;
                auVar4[5] = uVar24;
                auVar4[6] = uVar25;
                auVar4[7] = uVar26;
                auVar4._8_4_ = fVar64 * fStack_138;
                auVar4._12_4_ = fVar30 * fStack_134;
                auVar5[4] = SUB41(fVar65,0);
                auVar5._0_4_ = fVar29;
                auVar5[5] = uVar24;
                auVar5[6] = uVar25;
                auVar5[7] = uVar26;
                auVar5._8_4_ = fVar64 * fStack_138;
                auVar5._12_4_ = fVar30 * fStack_134;
                auVar32 = NEON_ext(auVar4,auVar5,8,1);
                fVar31 = fVar31 * fVar51;
                fVar48 = (float)(CONCAT17((byte)((uint)fVar48 >> 0x18) &
                                          ~(byte)((uint)iVar78 >> 0x18),
                                          CONCAT16((byte)((uint)fVar48 >> 0x10) &
                                                   ~(byte)((uint)iVar78 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar48 >> 8) &
                                                            ~(byte)((uint)iVar78 >> 8),
                                                            CONCAT14(SUB41(fVar48,0) & ~(byte)iVar78
                                                                     ,fVar51)))) >> 0x20);
                fVar34 = fVar34 * fVar48;
                fVar51 = auVar36._0_4_ * fVar51;
                auVar58 = NEON_ext(auVar59,auVar59,8,1);
                fVar27 = fVar27 * fVar31;
                fVar28 = fVar28 * fVar34;
                uVar24 = (undefined1)((uint)fVar28 >> 8);
                uVar25 = (undefined1)((uint)fVar28 >> 0x10);
                uVar26 = (undefined1)((uint)fVar28 >> 0x18);
                fVar50 = fVar50 * fVar51;
                fVar52 = fVar52 * auVar36._4_4_ * fVar48;
                fVar65 = fVar29 + fVar65 + auVar32._0_4_ + fVar30;
                auVar2[4] = SUB41(fVar28,0);
                auVar2._0_4_ = fVar27;
                auVar2[5] = uVar24;
                auVar2[6] = uVar25;
                auVar2[7] = uVar26;
                auVar2._8_4_ = fVar50;
                auVar2._12_4_ = fVar52;
                auVar3[4] = SUB41(fVar28,0);
                auVar3._0_4_ = fVar27;
                auVar3[5] = uVar24;
                auVar3[6] = uVar25;
                auVar3[7] = uVar26;
                auVar3._8_4_ = fVar50;
                auVar3._12_4_ = fVar52;
                auVar32 = NEON_ext(auVar2,auVar3,8,1);
                fVar48 = auVar59._0_4_ + auVar59._4_4_ + auVar58._0_4_ + fVar30;
                fVar29 = -(fVar27 + fVar28 + auVar32._0_4_);
                auVar55._0_4_ = fVar31 * (float)local_170;
                auVar55._4_4_ = fVar34 * local_170._4_4_;
                auVar55._8_4_ = fVar51 * (float)uStack_168;
                auVar55._12_4_ = fVar29 * uStack_168._4_4_;
                auVar32 = NEON_ext(auVar55,auVar55,8,1);
                auVar33._0_4_ = fVar31 * local_160;
                auVar33._4_4_ = fVar34 * fStack_15c;
                auVar33._8_4_ = fVar51 * fStack_158;
                auVar33._12_4_ = fVar29 * fStack_154;
                fVar31 = auVar55._0_4_ + auVar55._4_4_ + auVar32._0_4_ + fVar29;
                auVar32 = NEON_ext(auVar33,auVar33,8,1);
                fVar27 = -*(float *)(param_1 + 8);
                bVar12 = true;
                if ((fVar27 <= auVar33._0_4_ + auVar33._4_4_ + auVar32._0_4_ + fVar29) &&
                   (bVar12 = false, !NAN(fVar31) && !NAN(fVar27))) {
                  bVar12 = fVar31 < fVar27;
                }
                bVar14 = true;
                if ((!bVar12) && (bVar14 = false, !NAN(fVar65) && !NAN(fVar27))) {
                  bVar14 = fVar65 < fVar27;
                }
                bVar12 = true;
                if ((!bVar14) && (bVar12 = false, !NAN(fVar48) && !NAN(fVar27))) {
                  bVar12 = fVar48 < fVar27;
                }
                uVar16 = 7;
                if (!bVar12) {
                  uVar16 = 0xffffffff;
                }
                return uVar16;
              }
              return 5;
            }
            return 4;
          }
        }
      }
    }
    uVar16 = 3;
  }
  return uVar16;
}


