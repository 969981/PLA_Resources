/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03022f80; name: FUN_03022f80
 */


/* WARNING: Removing unreachable block (ram,0x03023a24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03022f80(undefined2 *param_1,undefined2 *param_2,long param_3,long *param_4,
                 undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 *param_8,
                 undefined4 *param_9,float *param_10,float *param_11)

{
  long lVar1;
  byte bVar2;
  undefined1 (*pauVar3) [16];
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  uint uVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  ulong uVar17;
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 *puVar20;
  uint uVar21;
  byte *pbVar22;
  undefined1 (*pauVar23) [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [12];
  float fVar39;
  float fVar40;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar41;
  float fVar42;
  undefined2 uVar46;
  float fVar47;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar48;
  float fVar49;
  float fVar50;
  float fVar54;
  undefined1 auVar51 [12];
  float fVar55;
  float fVar56;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar67;
  float fVar70;
  undefined8 uVar68;
  float fVar71;
  undefined1 auVar69 [16];
  float fVar72;
  float fVar74;
  undefined1 auVar73 [16];
  int iVar75;
  int iVar78;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined2 uVar79;
  float fVar80;
  byte bVar83;
  undefined8 uVar81;
  byte bVar84;
  float fVar85;
  int iVar86;
  undefined1 auVar82 [16];
  float fVar87;
  float fVar88;
  undefined1 auVar89 [16];
  undefined8 uVar90;
  float fStack_ac;
  
  pauVar23 = (undefined1 (*) [16])*param_4;
  *(undefined4 *)(pauVar23[0xe] + 8) = 0xbf80bf80;
  *(undefined2 *)(pauVar23[0xd] + 0xc) = 0;
  *(undefined8 *)pauVar23[0xd] = 0;
  *(undefined8 *)pauVar23[0xe] = 0;
  *(undefined8 *)(pauVar23[0xe] + 0xc) = 0;
  *(undefined8 *)(pauVar23[0xf] + 0xc) = 0;
  *(undefined8 *)(pauVar23[0xf] + 4) = 0xbf80bf8000000000;
  *(undefined8 *)(pauVar23[0x10] + 4) = 0xbf80bf8000000000;
  *(undefined8 *)(pauVar23[0x10] + 0xc) = 0;
  *(undefined8 *)(pauVar23[0x11] + 4) = 0xbf80bf8000000000;
  *(undefined8 *)(pauVar23[0x11] + 0xc) = 0;
  *(undefined8 *)(pauVar23[0x12] + 4) = 0xbf80bf8000000000;
  *(undefined8 *)(pauVar23[0x12] + 0xc) = 0;
  *(undefined8 *)(pauVar23[0x13] + 4) = 0xbf80bf8000000000;
  *(undefined4 *)(pauVar23[0x13] + 0xc) = 0;
  fVar39 = *param_10;
  fVar40 = param_10[1];
  fVar25 = param_10[2];
  fVar41 = fVar39 * fVar39 + fVar40 * fVar40 + fVar25 * fVar25;
  fVar47 = fVar39 * fVar39 + fVar40 * fVar40 + fVar25 * fVar25;
  uVar68 = CONCAT44(fVar47,fVar41);
  fVar42 = *param_11;
  fVar50 = param_11[1];
  fVar59 = param_11[2];
  uVar81 = NEON_frsqrte(uVar68,4);
  iVar75 = -(uint)(fVar41 <= 0.0);
  iVar78 = -(uint)(fVar47 <= 0.0);
  fVar80 = (float)uVar81;
  fVar85 = (float)((ulong)uVar81 >> 0x20);
  fVar24 = fVar85 * fVar85;
  uVar81 = NEON_frsqrts(uVar68,CONCAT17((char)((uint)fVar24 >> 0x18),
                                        CONCAT16((char)((uint)fVar24 >> 0x10),
                                                 CONCAT15((char)((uint)fVar24 >> 8),
                                                          CONCAT14(SUB41(fVar24,0),fVar80 * fVar80))
                                                )),4);
  fVar80 = fVar80 * (float)uVar81;
  fVar85 = fVar85 * (float)((ulong)uVar81 >> 0x20);
  fVar24 = fVar85 * fVar85;
  fVar57 = fVar42 * fVar42 + fVar50 * fVar50 + fVar59 * fVar59;
  fVar63 = fVar42 * fVar42 + fVar50 * fVar50 + fVar59 * fVar59;
  uVar60 = CONCAT44(fVar63,fVar57);
  auVar62._0_8_ = CONCAT44(-(uint)(1.4210855e-14 < fVar47),-(uint)(1.4210855e-14 < fVar41));
  auVar62._8_8_ = auVar62._0_8_;
  auVar73._0_8_ = CONCAT44(-(uint)(1.4210855e-14 < fVar63),-(uint)(1.4210855e-14 < fVar57));
  auVar73._8_8_ = auVar73._0_8_;
  uVar81 = NEON_frsqrts(uVar68,CONCAT17((char)((uint)fVar24 >> 0x18),
                                        CONCAT16((char)((uint)fVar24 >> 0x10),
                                                 CONCAT15((char)((uint)fVar24 >> 8),
                                                          CONCAT14(SUB41(fVar24,0),fVar80 * fVar80))
                                                )),4);
  fVar80 = (float)uVar81 * fVar80;
  fVar85 = (float)((ulong)uVar81 >> 0x20) * fVar85;
  uVar81 = NEON_frsqrte(uVar60,4);
  fVar24 = (float)uVar81;
  fVar47 = (float)((ulong)uVar81 >> 0x20);
  uVar81 = NEON_frsqrts(uVar60,CONCAT44(fVar47 * fVar47,fVar24 * fVar24),4);
  fVar24 = fVar24 * (float)uVar81;
  fVar47 = fVar47 * (float)((ulong)uVar81 >> 0x20);
  uVar81 = NEON_frsqrts(uVar60,CONCAT44(fVar47 * fVar47,fVar24 * fVar24),4);
  fVar80 = (float)CONCAT13((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                           CONCAT12((byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                                    CONCAT11((byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                             SUB41(fVar80,0) & ~(byte)iVar75)));
  iVar75 = -(uint)(fVar57 <= 0.0);
  iVar86 = -(uint)(fVar63 <= 0.0);
  fVar24 = (float)uVar81 * fVar24;
  fVar47 = (float)((ulong)uVar81 >> 0x20) * fVar47;
  uVar79 = CONCAT11((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar75 >> 8),
                    SUB41(fVar24,0) & ~(byte)iVar75);
  bVar83 = (byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10);
  bVar84 = (byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18);
  fVar24 = (float)CONCAT13(bVar84,CONCAT12(bVar83,uVar79));
  auVar26._0_4_ = fVar39 * fVar80;
  auVar26._4_4_ =
       fVar40 * (float)(CONCAT17((byte)((uint)fVar85 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                                 CONCAT16((byte)((uint)fVar85 >> 0x10) &
                                          ~(byte)((uint)iVar78 >> 0x10),
                                          CONCAT15((byte)((uint)fVar85 >> 8) &
                                                   ~(byte)((uint)iVar78 >> 8),
                                                   CONCAT14(SUB41(fVar85,0) & ~(byte)iVar78,fVar80))
                                         )) >> 0x20);
  auVar26._8_4_ = fVar25 * fVar80;
  auVar51._0_4_ = fVar42 * (float)CONCAT13(bVar84,CONCAT12(bVar83,uVar79));
  auVar51._4_4_ =
       fVar50 * (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18),
                                CONCAT12((byte)((uint)fVar47 >> 0x10) &
                                         ~(byte)((uint)iVar86 >> 0x10),
                                         (short)(CONCAT15((byte)((uint)fVar47 >> 8) &
                                                          ~(byte)((uint)iVar86 >> 8),
                                                          CONCAT14(SUB41(fVar47,0) & ~(byte)iVar86,
                                                                   fVar24)) >> 0x20)));
  auVar51._8_4_ = fVar59 * fVar24;
  uVar48 = (undefined4)_UNK_03889a88;
  auVar6._8_4_ = uVar48;
  auVar6._0_8_ = _DAT_03889a80;
  auVar7._8_4_ = uVar48;
  auVar7._0_8_ = _DAT_03889a80;
  auVar61._0_12_ = auVar7 ^ (auVar6 ^ auVar26) & auVar62._0_12_;
  auVar8._8_4_ = uVar48;
  auVar8._0_8_ = _DAT_03889a80;
  auVar9._8_4_ = uVar48;
  auVar9._0_8_ = _DAT_03889a80;
  auVar53._0_12_ = auVar9 ^ (auVar8 ^ auVar51) & auVar73._0_12_;
  auVar61._12_4_ = fVar41 * fVar80;
  auVar53._12_4_ = fVar57 * fVar24;
  *(long *)(*pauVar23 + 8) = auVar61._8_8_;
  *(long *)*pauVar23 = auVar61._0_8_;
  *(long *)(pauVar23[1] + 8) = auVar53._8_8_;
  *(long *)pauVar23[1] = auVar53._0_8_;
  uVar81 = *param_6;
  lVar15 = *(long *)(param_3 + 0x30);
  lVar1 = *(long *)(param_3 + 0x38);
  fVar24 = *(float *)(param_7 + 6);
  fVar47 = *(float *)((long)param_7 + 0x34);
  fVar39 = *(float *)(param_7 + 7);
  fVar40 = *(float *)((long)param_7 + 0x3c);
  auVar73 = *(undefined1 (*) [16])(param_6 + 6);
  pauVar18 = pauVar23 + 5;
  *(undefined8 *)(pauVar23[5] + 8) = param_6[1];
  *(undefined8 *)*pauVar18 = uVar81;
  uVar81 = param_6[2];
  *(undefined8 *)(pauVar23[6] + 8) = param_6[3];
  *(undefined8 *)pauVar23[6] = uVar81;
  uVar81 = param_6[4];
  *(undefined8 *)(pauVar23[7] + 8) = param_6[5];
  *(undefined8 *)pauVar23[7] = uVar81;
  uVar81 = param_6[6];
  *(undefined8 *)(pauVar23[8] + 8) = param_6[7];
  *(undefined8 *)pauVar23[8] = uVar81;
  uVar81 = *param_7;
  pauVar19 = pauVar23 + 9;
  *(undefined8 *)(pauVar23[9] + 8) = param_7[1];
  *(undefined8 *)*pauVar19 = uVar81;
  uVar81 = param_7[2];
  *(undefined8 *)(pauVar23[10] + 8) = param_7[3];
  *(undefined8 *)pauVar23[10] = uVar81;
  uVar81 = param_7[4];
  *(undefined8 *)(pauVar23[0xb] + 8) = param_7[5];
  *(undefined8 *)pauVar23[0xb] = uVar81;
  uVar81 = param_7[6];
  *(undefined8 *)(pauVar23[0xc] + 8) = param_7[7];
  *(undefined8 *)pauVar23[0xc] = uVar81;
  uVar81 = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(pauVar23[2] + 8) = *(undefined8 *)(lVar1 + 0x78);
  *(undefined8 *)pauVar23[2] = uVar81;
  uVar81 = *(undefined8 *)(lVar15 + 0x80);
  *(undefined8 *)(pauVar23[3] + 8) = *(undefined8 *)(lVar15 + 0x88);
  *(undefined8 *)pauVar23[3] = uVar81;
  uVar81 = *(undefined8 *)(lVar1 + 0x80);
  *(undefined8 *)(pauVar23[4] + 8) = *(undefined8 *)(lVar1 + 0x88);
  *(undefined8 *)pauVar23[4] = uVar81;
  uVar48 = NEON_fminnm(*param_8,0x5f7ffff0);
  *(undefined4 *)pauVar23[0xd] = uVar48;
  uVar48 = NEON_fminnm(*param_9,0x5f7ffff0);
  *(undefined4 *)(pauVar23[0xd] + 4) = uVar48;
  if (param_1 < param_2) {
    fVar24 = fVar24 - auVar73._0_4_;
    fVar47 = fVar47 - auVar73._4_4_;
    fVar39 = fVar39 - auVar73._8_4_;
    fVar40 = fVar40 - auVar73._12_4_;
    iVar75 = 0;
    do {
      switch(*param_1) {
      case 5:
        pauVar23[(long)iVar75 + 0xe][0xd] = 1;
        pauVar23[(long)iVar75 + 0xf][0xd] = 1;
        pauVar23[(long)iVar75 + 0x10][0xd] = 1;
        auVar73 = pauVar23[3];
        auVar53 = pauVar23[4];
        auVar62 = *pauVar23;
        auVar61 = pauVar23[1];
        auVar82 = NEON_ext(auVar53,auVar53,8,1);
        auVar89 = NEON_ext(auVar61,auVar61,8,1);
        auVar69 = NEON_ext(auVar73,auVar73,8,1);
        auVar76 = NEON_ext(auVar62,auVar62,8,1);
        uVar68 = NEON_ext(auVar62._0_8_,auVar76._0_8_,4,1);
        uVar81 = NEON_ext(auVar73._0_8_,auVar69._0_8_,4,1);
        fVar42 = auVar73._0_4_;
        fVar49 = auVar62._0_4_;
        fVar59 = auVar73._4_4_;
        fVar54 = auVar62._4_4_;
        fVar41 = auVar73._8_4_;
        fVar55 = auVar62._8_4_;
        fVar57 = auVar73._12_4_;
        fVar56 = auVar62._12_4_;
        fVar70 = auVar69._4_4_ * auVar69._4_4_;
        fVar63 = auVar53._0_4_;
        fVar58 = auVar61._0_4_;
        fVar80 = auVar53._4_4_;
        fVar64 = auVar61._4_4_;
        fVar85 = auVar53._8_4_;
        fVar65 = auVar61._8_4_;
        uVar60 = NEON_ext(auVar61._0_8_,auVar89._0_8_,4,1);
        uVar90 = NEON_ext(auVar53._0_8_,auVar82._0_8_,4,1);
        fVar67 = fVar70 + -0.5;
        iVar78 = iVar75 + 3;
        auVar77._0_4_ = fVar49 * (float)uVar81 - fVar42 * (float)uVar68;
        auVar77._4_4_ =
             fVar54 * (float)((ulong)uVar81 >> 0x20) - fVar59 * (float)((ulong)uVar68 >> 0x20);
        auVar77._8_4_ = fVar55 * fVar42 - fVar41 * fVar49;
        auVar77._12_4_ = fVar56 * fVar59 - fVar57 * fVar54;
        fVar72 = fVar42 * fVar49 + fVar59 * fVar54 + fVar41 * fVar55;
        fVar66 = auVar61._12_4_;
        fVar71 = auVar53._12_4_;
        fVar87 = fVar58 * (float)uVar90 - fVar63 * (float)uVar60;
        fVar25 = fVar64 * (float)((ulong)uVar90 >> 0x20) - fVar80 * (float)((ulong)uVar60 >> 0x20);
        fVar50 = fVar65 * fVar63 - fVar85 * fVar58;
        fVar88 = fVar66 * fVar80 - fVar71 * fVar64;
        auVar53 = NEON_ext(auVar77,auVar77,4,1);
        auVar10._4_4_ = fVar25;
        auVar10._0_4_ = fVar87;
        auVar10._8_4_ = fVar50;
        auVar10._12_4_ = fVar88;
        auVar11._4_4_ = fVar25;
        auVar11._0_4_ = fVar87;
        auVar11._8_4_ = fVar50;
        auVar11._12_4_ = fVar88;
        auVar73 = NEON_ext(auVar10,auVar11,4,1);
        fVar74 = auVar82._4_4_ * auVar82._4_4_;
        fVar25 = fVar63 * fVar58 + fVar80 * fVar64 + fVar85 * fVar65;
        fVar88 = fVar74 + -0.5;
        fVar50 = fVar49 * fVar67 + fVar42 * fVar72 + auVar53._0_4_ * fVar57;
        fVar59 = fVar54 * (fVar70 + -0.5) +
                 fVar59 * (fVar42 * fVar49 + fVar59 * fVar54 + fVar41 * fVar55) +
                 auVar53._4_4_ * fVar57;
        fVar41 = fVar55 * fVar67 + fVar41 * fVar72 + auVar77._0_4_ * fVar57;
        fVar57 = fVar58 * fVar88 + fVar63 * fVar25 + auVar73._0_4_ * fVar71;
        fVar63 = fVar64 * (fVar74 + -0.5) +
                 fVar80 * (fVar63 * fVar58 + fVar80 * fVar64 + fVar85 * fVar65) +
                 auVar73._4_4_ * fVar71;
        fVar80 = fVar65 * fVar88 + fVar85 * fVar25 + fVar87 * fVar71;
        fVar25 = *(float *)(pauVar23[2] + 4);
        fVar42 = *(float *)(pauVar23[2] + 8);
        *(float *)pauVar23[(long)iVar75 + 0xe] =
             *(float *)pauVar23[2] + ((fVar57 + fVar57) * fVar66 - (fVar50 + fVar50) * fVar56);
        *(float *)pauVar23[(long)iVar75 + 0xf] =
             fVar25 + ((fVar63 + fVar63) * fVar66 - (fVar59 + fVar59) * fVar56);
        *(float *)pauVar23[(long)iVar75 + 0x10] =
             fVar42 + ((fVar80 + fVar80) * fVar66 - (fVar41 + fVar41) * fVar56);
        fVar25 = *(float *)(param_3 + 0x74);
        fVar42 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar25 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar42 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar79 = (undefined2)((uint)fVar42 >> 0x10);
        if (1.0 < fVar42) {
          uVar79 = 0x3f80;
        }
        uVar46 = (undefined2)((uint)fVar25 >> 0x10);
        if (1.0 < fVar25) {
          uVar46 = 0x3f80;
        }
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 8) = uVar79;
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 10) = uVar46;
        fVar25 = *(float *)(param_3 + 0x74);
        fVar42 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar25 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar42 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar79 = (undefined2)((uint)fVar42 >> 0x10);
        if (1.0 < fVar42) {
          uVar79 = 0x3f80;
        }
        uVar46 = (undefined2)((uint)fVar25 >> 0x10);
        if (1.0 < fVar25) {
          uVar46 = 0x3f80;
        }
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xf] + 8) = uVar79;
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xf] + 10) = uVar46;
        fVar25 = *(float *)(param_3 + 0x74);
        fVar42 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar25 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar42 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar79 = (undefined2)((uint)fVar42 >> 0x10);
        if (1.0 < fVar42) {
          uVar79 = 0x3f80;
        }
        uVar46 = (undefined2)((uint)fVar25 >> 0x10);
        if (1.0 < fVar25) {
          uVar46 = 0x3f80;
        }
        *(undefined2 *)(pauVar23[(long)iVar75 + 0x10] + 8) = uVar79;
        *(undefined2 *)(pauVar23[(long)iVar75 + 0x10] + 10) = uVar46;
        goto LAB_03023268;
      default:
        goto switchD_03023298_caseD_6;
      case 7:
        pauVar23[(long)iVar75 + 0xe][0xd] = 2;
        pauVar23[(long)iVar75 + 0xe][0xc] =
             pauVar23[(long)iVar75 + 0xe][0xc] & 2 | (*(byte *)(param_1 + 1) & 3) << 2;
        pfVar4 = (float *)(param_7 + (ulong)*(byte *)(param_1 + 1) * 2);
        auVar27._0_4_ = fVar24 * *pfVar4;
        auVar27._4_4_ = fVar47 * pfVar4[1];
        auVar27._8_4_ = fVar39 * pfVar4[2];
        auVar27._12_4_ = fVar40 * pfVar4[3];
        auVar73 = NEON_ext(auVar27,auVar27,8,1);
        *(float *)pauVar23[(long)iVar75 + 0xe] = auVar27._0_4_ + auVar27._4_4_ + auVar73._0_4_;
        fVar25 = *(float *)(param_3 + 0x74);
        fVar42 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 2) && 0.0 <= *(float *)(param_1 + 4)) {
          fVar25 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 4);
          fVar42 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 2);
        }
        uVar79 = (undefined2)((uint)fVar42 >> 0x10);
        if (1.0 < fVar42) {
          uVar79 = 0x3f80;
        }
        uVar46 = (undefined2)((uint)fVar25 >> 0x10);
        if (1.0 < fVar25) {
          uVar46 = 0x3f80;
        }
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 8) = uVar79;
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 10) = uVar46;
        iVar78 = iVar75 + 1;
        goto LAB_03023268;
      case 9:
        fVar25 = *(float *)(param_1 + 2);
        fVar50 = *(float *)(param_1 + 4);
        fVar42 = (float)FUN_032c8ef0(fVar25);
        if (3.40282e+38 <= fVar42) {
          fVar25 = (float)FUN_032c8ef0(fVar50);
          if (fVar25 < 3.40282e+38) {
            bVar13 = true;
            fVar25 = fVar50;
            goto LAB_030234d0;
          }
LAB_03023ec8:
          lVar15 = 0x20;
          goto LAB_03023c24;
        }
        bVar13 = false;
LAB_030234d0:
        pbVar22 = pauVar23[(long)iVar75 + 0xe] + 0xc;
        *pbVar22 = bVar13 | (byte)((*(byte *)(param_1 + 1) & 3) << 2) | *pbVar22 & 2 |
                   (char)((*(byte *)(param_1 + 1) + 1) % 3) * '\x10';
        pauVar23[(long)iVar75 + 0xe][0xd] = 4;
        fVar42 = *(float *)(param_3 + 0x74);
        fVar59 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 6) && 0.0 <= *(float *)(param_1 + 8)) {
          fVar42 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 8);
          fVar59 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 6);
        }
        uVar79 = (undefined2)((uint)fVar59 >> 0x10);
        if (1.0 < fVar59) {
          uVar79 = 0x3f80;
        }
        uVar46 = (undefined2)((uint)fVar42 >> 0x10);
        if (1.0 < fVar42) {
          uVar46 = 0x3f80;
        }
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 8) = uVar79;
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 10) = uVar46;
        pfVar4 = (float *)(param_7 + (ulong)*(byte *)(param_1 + 1) * 2);
        auVar28._0_4_ = fVar24 * *pfVar4;
        auVar28._4_4_ = fVar47 * pfVar4[1];
        auVar28._8_4_ = fVar39 * pfVar4[2];
        auVar28._12_4_ = fVar40 * pfVar4[3];
        auVar73 = NEON_ext(auVar28,auVar28,8,1);
        fVar42 = auVar28._0_4_ + auVar28._4_4_ + auVar73._0_4_;
        *(float *)pauVar23[(long)iVar75 + 0xe] = fVar25 + fVar42;
        if (!bVar13) {
          fVar25 = (float)FUN_032c8ef0(fVar50);
          if (3.40282e+38 <= fVar25) {
            lVar15 = 0x20;
          }
          else {
            *(float *)(pauVar23[(long)iVar75 + 0xe] + 4) = fVar50 + fVar42;
            *pbVar22 = *pbVar22 | 2;
            lVar15 = 0x20;
          }
          goto LAB_03023c20;
        }
        lVar15 = 0x20;
        iVar75 = iVar75 + 1;
        break;
      case 0xc:
        bVar83 = *(byte *)(param_1 + 1);
        uVar21 = (bVar83 + 2) % 3;
        pauVar16 = pauVar23 + iVar75;
        pauVar16[0xe][0xc] =
             pauVar16[0xe][0xc] & 2 | (bVar83 & 3) << 4 | (char)uVar21 * '@' |
             (char)((bVar83 + 1) % 3) * '\x04';
        bVar84 = *(byte *)(param_1 + 1);
        uVar14 = (bVar84 + 1) % 3;
        pauVar16[0xf][0xc] =
             pauVar16[0xf][0xc] & 2 | (bVar84 & 3) << 4 | (char)uVar14 * '@' |
             (char)((bVar84 + 2) % 3) * '\x04';
        fVar42 = *(float *)(param_3 + 0x70);
        fVar25 = *(float *)(param_3 + 0x74);
        fVar59 = *(float *)(param_1 + 2);
        fVar50 = *(float *)(param_1 + 4);
LAB_03023648:
        pauVar16[0xe][0xd] = 3;
        pauVar5 = pauVar23 + ((ulong)bVar83 & 3) + 5;
        pauVar3 = pauVar23 + (ulong)uVar21 + 9;
        auVar29._0_4_ = *(float *)*pauVar5 * *(float *)*pauVar3;
        auVar29._4_4_ = *(float *)(*pauVar5 + 4) * *(float *)(*pauVar3 + 4);
        auVar29._8_4_ = *(float *)(*pauVar5 + 8) * *(float *)(*pauVar3 + 8);
        auVar29._12_4_ = *(float *)(*pauVar5 + 0xc) * *(float *)(*pauVar3 + 0xc);
        auVar73 = NEON_ext(auVar29,auVar29,8,1);
        fVar41 = auVar29._0_4_ + auVar29._4_4_ + auVar73._0_4_;
        *(float *)pauVar16[0xe] = -fVar41;
        if ((0.0 <= fVar59) && (0.0 <= fVar50)) {
          fVar42 = fVar42 * fVar59;
          fVar25 = fVar25 * fVar50;
        }
        uVar79 = (undefined2)((uint)fVar42 >> 0x10);
        if (1.0 < fVar42) {
          uVar79 = 0x3f80;
        }
        uVar46 = (undefined2)((uint)fVar25 >> 0x10);
        if (1.0 < fVar25) {
          uVar46 = 0x3f80;
        }
        *(undefined2 *)(pauVar16[0xe] + 8) = uVar79;
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 10) = uVar46;
        pauVar23[(long)iVar75 + 0xf][0xd] = 3;
        iVar78 = iVar75 + 2;
        pauVar3 = pauVar23 + ((ulong)bVar84 & 3) + 5;
        fVar25 = *(float *)*pauVar3;
        fVar42 = *(float *)(*pauVar3 + 4);
        fVar50 = *(float *)(*pauVar3 + 8);
        fVar59 = *(float *)(*pauVar3 + 0xc);
        pauVar3 = pauVar23 + (ulong)uVar14 + 9;
        fVar57 = *(float *)*pauVar3;
        fVar63 = *(float *)(*pauVar3 + 4);
        fVar80 = *(float *)(*pauVar3 + 8);
        fVar85 = *(float *)(*pauVar3 + 0xc);
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xf] + 8) = uVar79;
        auVar52._0_4_ = fVar25 * fVar57;
        auVar52._4_4_ = fVar42 * fVar63;
        auVar52._8_4_ = fVar50 * fVar80;
        auVar52._12_4_ = fVar59 * fVar85;
        auVar73 = NEON_ext(auVar52,auVar52,8,1);
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xf] + 10) = uVar46;
        *(float *)pauVar23[(long)iVar75 + 0xf] = -(auVar52._0_4_ + auVar52._4_4_ + auVar73._0_4_);
        *(float *)pauVar16[0xe] = fVar41;
        goto LAB_03023268;
      case 0xd:
        bVar83 = *(byte *)((long)param_1 + 5);
        if (bVar83 != 0) {
          if (bVar83 == 2) {
            bVar83 = *(byte *)(param_1 + 2);
            uVar21 = (bVar83 + 2) % 3;
            pauVar16 = pauVar23 + iVar75;
            pauVar16[0xe][0xc] =
                 pauVar16[0xe][0xc] & 2 | (bVar83 & 3) << 4 | (char)uVar21 * '@' |
                 (char)((bVar83 + 1) % 3) * '\x04';
            bVar84 = *(byte *)(param_1 + 2);
            uVar14 = (bVar84 + 1) % 3;
            pauVar16[0xf][0xc] =
                 pauVar16[0xf][0xc] & 2 | (bVar84 & 3) << 4 | (char)uVar14 * '@' |
                 (char)((bVar84 + 2) % 3) * '\x04';
            fVar42 = *(float *)(param_3 + 0x70);
            fVar25 = *(float *)(param_3 + 0x74);
            fVar59 = *(float *)(param_1 + 4);
            fVar50 = *(float *)(param_1 + 6);
            goto LAB_03023648;
          }
          uVar14 = (uint)bVar83;
          if (uVar14 == 1) {
            pauVar23[(long)iVar75 + 0xe][0xc] =
                 (*(byte *)(param_1 + 1) & 3) << 2 | (*(byte *)(param_1 + 2) & 3) << 4 |
                 *(char *)((long)param_1 + 3) << 6 | pauVar23[(long)iVar75 + 0xe][0xc] & 2;
            iVar78 = iVar75 + 1;
            fVar25 = *(float *)(param_3 + 0x74);
            fVar42 = *(float *)(param_3 + 0x70);
            if (0.0 <= *(float *)(param_1 + 4) && 0.0 <= *(float *)(param_1 + 6)) {
              fVar25 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 6);
              fVar42 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 4);
            }
            uVar79 = (undefined2)((uint)fVar42 >> 0x10);
            if (1.0 < fVar42) {
              uVar79 = 0x3f80;
            }
            uVar46 = (undefined2)((uint)fVar25 >> 0x10);
            if (1.0 < fVar25) {
              uVar46 = 0x3f80;
            }
            *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 8) = uVar79;
            *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 10) = uVar46;
            pauVar16 = pauVar18 + *(byte *)((long)param_1 + 3);
            fVar25 = *(float *)*pauVar16;
            fVar42 = *(float *)(*pauVar16 + 4);
            fVar50 = *(float *)(*pauVar16 + 8);
            fVar59 = *(float *)(*pauVar16 + 0xc);
            pauVar16 = pauVar19 + *(byte *)(param_1 + 2);
            fVar41 = *(float *)*pauVar16;
            fVar57 = *(float *)(*pauVar16 + 4);
            fVar63 = *(float *)(*pauVar16 + 8);
            fVar80 = *(float *)(*pauVar16 + 0xc);
            pauVar23[(long)iVar75 + 0xe][0xd] = 3;
            auVar30._0_4_ = fVar25 * fVar41;
            auVar30._4_4_ = fVar42 * fVar57;
            auVar30._8_4_ = fVar50 * fVar63;
            auVar30._12_4_ = fVar59 * fVar80;
            auVar73 = NEON_ext(auVar30,auVar30,8,1);
            *(float *)pauVar23[(long)iVar75 + 0xe] =
                 -(auVar30._0_4_ + auVar30._4_4_ + auVar73._0_4_);
          }
          else {
            bVar83 = *(byte *)(param_1 + 1);
            pauVar23[(long)iVar75 + 0xe][0xc] =
                 pauVar23[(long)iVar75 + 0xe][0xc] & 2 | (byte)((bVar83 & 3) << 2) |
                 (byte)((uint)((ulong)(bVar83 + 2) * 0x2aaaaaaab >> 0x21) << 6) |
                 (char)((bVar83 + 1) % 3) * '\x10';
            bVar83 = *(byte *)((long)param_1 + 3);
            pauVar23[(long)iVar75 + 0xf][0xc] =
                 pauVar23[(long)iVar75 + 0xf][0xc] & 2 | (bVar83 & 3) << 2 |
                 (byte)((uint)((ulong)(bVar83 + 2) * 0x2aaaaaaab >> 0x21) << 6) |
                 (char)((bVar83 + 1) % 3) * '\x10';
            bVar83 = *(byte *)(param_1 + 2);
            pauVar23[(long)iVar75 + 0x10][0xc] =
                 pauVar23[(long)iVar75 + 0x10][0xc] & 2 | (bVar83 & 3) << 2 |
                 (byte)((uint)((ulong)(bVar83 + 2) * 0x2aaaaaaab >> 0x21) << 6) |
                 (char)((bVar83 + 1) % 3) * '\x10';
            fVar42 = *(float *)(param_3 + 0x70);
            fVar25 = *(float *)(param_3 + 0x74);
            uVar17 = (ulong)uVar14;
            if ((*(float *)(param_1 + 4) < 0.0) || (*(float *)(param_1 + 6) < 0.0)) {
              uVar79 = (undefined2)((uint)fVar42 >> 0x10);
              if (1.0 < fVar42) {
                uVar79 = 0x3f80;
              }
              uVar46 = (undefined2)((uint)fVar25 >> 0x10);
              if (1.0 < fVar25) {
                uVar46 = 0x3f80;
              }
              puVar20 = pauVar23[(long)iVar75 + 0xe] + 0xd;
              do {
                *puVar20 = 3;
                uVar17 = uVar17 - 1;
                pauVar16 = pauVar23 + ((ulong)((byte)puVar20[-1] >> 4) & 3) + 5;
                fVar25 = *(float *)*pauVar16;
                fVar42 = *(float *)(*pauVar16 + 4);
                fVar50 = *(float *)(*pauVar16 + 8);
                fVar59 = *(float *)(*pauVar16 + 0xc);
                pauVar16 = pauVar23 + (ulong)((byte)puVar20[-1] >> 6) + 9;
                fVar41 = *(float *)*pauVar16;
                fVar57 = *(float *)(*pauVar16 + 4);
                fVar63 = *(float *)(*pauVar16 + 8);
                fVar80 = *(float *)(*pauVar16 + 0xc);
                *(undefined2 *)(puVar20 + -5) = uVar79;
                auVar38._0_4_ = fVar25 * fVar41;
                auVar38._4_4_ = fVar42 * fVar57;
                auVar38._8_4_ = fVar50 * fVar63;
                auVar38._12_4_ = fVar59 * fVar80;
                auVar73 = NEON_ext(auVar38,auVar38,8,1);
                *(float *)(puVar20 + -0xd) = -(auVar38._0_4_ + auVar38._4_4_ + auVar73._0_4_);
                *(undefined2 *)(puVar20 + -3) = uVar46;
                puVar20 = puVar20 + 0x10;
              } while (uVar17 != 0);
            }
            else {
              fVar42 = fVar42 * *(float *)(param_1 + 4);
              fVar25 = fVar25 * *(float *)(param_1 + 6);
              puVar20 = pauVar23[(long)iVar75 + 0xe] + 0xd;
              uVar79 = (undefined2)((uint)fVar42 >> 0x10);
              if (1.0 < fVar42) {
                uVar79 = 0x3f80;
              }
              uVar46 = (undefined2)((uint)fVar25 >> 0x10);
              if (1.0 < fVar25) {
                uVar46 = 0x3f80;
              }
              do {
                *puVar20 = 3;
                uVar17 = uVar17 - 1;
                pauVar16 = pauVar23 + ((ulong)((byte)puVar20[-1] >> 4) & 3) + 5;
                fVar25 = *(float *)*pauVar16;
                fVar42 = *(float *)(*pauVar16 + 4);
                fVar50 = *(float *)(*pauVar16 + 8);
                fVar59 = *(float *)(*pauVar16 + 0xc);
                pauVar16 = pauVar23 + (ulong)((byte)puVar20[-1] >> 6) + 9;
                fVar41 = *(float *)*pauVar16;
                fVar57 = *(float *)(*pauVar16 + 4);
                fVar63 = *(float *)(*pauVar16 + 8);
                fVar80 = *(float *)(*pauVar16 + 0xc);
                *(undefined2 *)(puVar20 + -5) = uVar79;
                auVar37._0_4_ = fVar25 * fVar41;
                auVar37._4_4_ = fVar42 * fVar57;
                auVar37._8_4_ = fVar50 * fVar63;
                auVar37._12_4_ = fVar59 * fVar80;
                auVar73 = NEON_ext(auVar37,auVar37,8,1);
                *(float *)(puVar20 + -0xd) = -(auVar37._0_4_ + auVar37._4_4_ + auVar73._0_4_);
                *(undefined2 *)(puVar20 + -3) = uVar46;
                puVar20 = puVar20 + 0x10;
              } while (uVar17 != 0);
            }
            iVar78 = iVar75 + uVar14;
          }
          goto LAB_03023268;
        }
        lVar15 = 0x10;
        break;
      case 0xe:
        if (*(char *)(param_1 + 1) == '\0') {
LAB_03023e50:
          lVar15 = 0x20;
        }
        else {
          fVar25 = *(float *)(param_1 + 4);
          fVar50 = *(float *)(param_1 + 6);
          fVar42 = (float)FUN_032c8ef0(fVar25);
          if (1.8446726e+19 <= fVar42) {
            fVar25 = (float)FUN_032c8ef0(fVar50);
            if (1.8446726e+19 <= fVar25) goto LAB_03023ec8;
            bVar83 = 1;
            fVar25 = fVar50;
          }
          else {
            bVar83 = 0;
          }
          bVar84 = *(byte *)((long)param_1 + 3);
          bVar2 = *(byte *)(param_1 + 2);
          pbVar22 = pauVar23[(long)iVar75 + 0xe] + 0xc;
          *pbVar22 = bVar83 | (bVar84 & 3) << 2 | (bVar2 & 3) << 4 | *pbVar22 & 2;
          pauVar23[(long)iVar75 + 0xe][0xd] = 5;
          fVar42 = *(float *)(param_3 + 0x70);
          fVar59 = *(float *)(param_3 + 0x74);
          if (0.0 <= *(float *)(param_1 + 8) && 0.0 <= *(float *)(param_1 + 10)) {
            fVar42 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 8);
            fVar59 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 10);
          }
          uVar79 = (undefined2)((uint)fVar59 >> 0x10);
          if (1.0 < fVar59) {
            uVar79 = 0x3f80;
          }
          uVar46 = (undefined2)((uint)fVar42 >> 0x10);
          if (1.0 < fVar42) {
            uVar46 = 0x3f80;
          }
          *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 10) = uVar79;
          *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 8) = uVar46;
          auVar73 = pauVar19[(ulong)bVar84 & 3];
          uVar17 = (ulong)bVar2 & 3;
          auVar53 = pauVar19[uVar17];
          auVar62 = NEON_ext(auVar73,auVar73,8,1);
          auVar61 = NEON_ext(auVar53,auVar53,8,1);
          uVar81 = NEON_ext(auVar73._0_8_,auVar62._0_8_,4,1);
          uVar68 = NEON_ext(auVar53._0_8_,auVar61._0_8_,4,1);
          lVar15 = (long)iVar75;
          fVar42 = auVar53._0_4_;
          fVar59 = auVar53._4_4_;
          pauVar16 = pauVar18 + uVar17;
          auVar31._0_4_ = auVar73._0_4_ * (float)uVar68 - fVar42 * (float)uVar81;
          auVar31._4_4_ =
               auVar73._4_4_ * (float)((ulong)uVar68 >> 0x20) -
               fVar59 * (float)((ulong)uVar81 >> 0x20);
          auVar31._8_4_ = auVar73._8_4_ * fVar42 - auVar53._8_4_ * auVar73._0_4_;
          auVar31._12_4_ = auVar73._12_4_ * fVar59 - auVar53._12_4_ * auVar73._4_4_;
          auVar73 = NEON_ext(auVar31,auVar31,4,1);
          auVar43._0_4_ = fVar42 * *(float *)*pauVar16;
          auVar43._4_4_ = fVar59 * *(float *)(*pauVar16 + 4);
          auVar43._8_4_ = auVar53._8_4_ * *(float *)(*pauVar16 + 8);
          auVar43._12_4_ = auVar53._12_4_ * *(float *)(*pauVar16 + 0xc);
          auVar32._0_4_ = *(float *)*pauVar16 * auVar73._0_4_;
          auVar32._4_4_ = *(float *)(*pauVar16 + 4) * auVar73._4_4_;
          auVar32._8_4_ = *(float *)(*pauVar16 + 8) * auVar31._0_4_;
          auVar32._12_4_ = *(float *)(*pauVar16 + 0xc) * auVar31._4_4_;
          auVar73 = NEON_ext(auVar32,auVar32,8,1);
          auVar53 = NEON_ext(auVar43,auVar43,8,1);
          fVar42 = atan2f(auVar32._0_4_ + auVar32._4_4_ + auVar73._0_4_,
                          auVar43._0_4_ + auVar43._4_4_ + auVar53._0_4_);
          if (param_4[1] != 0) {
            fVar57 = 0.0;
            fVar59 = -*(float *)(param_4[1] + lVar15 * 8 + 4);
            uVar81 = NEON_fminnm(CONCAT44(fVar59,fVar59),0x46f56fdb46f56fdb,4);
            uVar81 = NEON_fmax(uVar81,0xc6f56fdbc6f56fdb,4);
            uVar60 = CONCAT44(fVar42 - (float)((ulong)uVar81 >> 0x20),fVar42 - (float)uVar81);
            uVar81 = NEON_frecpe(0x40c90fdb40c90fdb,4);
            uVar68 = NEON_frecps(0x40c90fdb40c90fdb,uVar81,4);
            fVar59 = (float)uVar81 * (float)uVar68;
            fVar41 = (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar68 >> 0x20);
            uVar81 = NEON_frecps(0x40c90fdb40c90fdb,CONCAT44(fVar41,fVar59),4);
            fVar59 = fVar59 * (float)uVar81;
            auVar12._4_4_ = fVar41 * (float)((ulong)uVar81 >> 0x20);
            auVar12._0_4_ = fVar59;
            do {
              auVar12._8_8_ = 0;
              fVar41 = (float)FUN_032c8fd0(fVar59 * ((float)uVar60 + 3.1415927),auVar12);
              fStack_ac = (float)((ulong)uVar60 >> 0x20);
              fVar57 = fVar57 + fVar41;
              fVar63 = (float)uVar60 + fVar41 * -6.2831855;
              uVar60 = CONCAT44(fStack_ac + fVar41 * -6.2831855,fVar63);
              uVar81 = NEON_fminnm(uVar60,0x40490fdb40490fdb,4);
              uVar81 = NEON_fmax(uVar81,0xc0490fdbc0490fdb,4);
            } while ((float)uVar81 != fVar63);
            fVar42 = fVar42 + fVar57 * -6.2831855;
          }
          *(short *)(pauVar23[lVar15 + 0xe] + 0xe) = (short)((uint)fVar42 >> 0x10);
          fVar59 = -6.2831855;
          if (-6.2831855 <= fVar25 - fVar42) {
            fVar59 = fVar25 - fVar42;
          }
          *(float *)pauVar23[lVar15 + 0xe] = fVar59;
          if (bVar83 == 0) {
            fVar25 = (float)FUN_032c8ef0(fVar50);
            if (1.8446726e+19 <= fVar25) goto LAB_03023c14;
            fVar25 = (float)FUN_032c8ef0(fVar50 - fVar42);
            if (fVar25 < 6.2831855) {
              *(float *)(pauVar23[lVar15 + 0xe] + 4) = fVar50 - fVar42;
              *pbVar22 = *pbVar22 | 2;
            }
          }
          lVar15 = 0x20;
          iVar75 = iVar75 + 1;
        }
        break;
      case 0xf:
        if (*(char *)(param_1 + 1) == '\0') goto LAB_03023e50;
        fVar25 = *(float *)(param_1 + 4);
        fVar50 = *(float *)(param_1 + 6);
        fVar42 = (float)FUN_032c8ef0(fVar25);
        if (3.1415927 <= fVar42) {
          fVar25 = (float)FUN_032c8ef0(fVar50);
          if (3.1415927 <= fVar25) goto LAB_03023ec8;
          bVar13 = true;
          fVar25 = fVar50;
        }
        else {
          bVar13 = false;
        }
        pbVar22 = pauVar23[(long)iVar75 + 0xe] + 0xc;
        *pbVar22 = bVar13 | (*(byte *)((long)param_1 + 3) & 3) << 2 |
                   (*(byte *)(param_1 + 2) & 3) << 4 | *pbVar22 & 2;
        pauVar23[(long)iVar75 + 0xe][0xd] = 6;
        fVar42 = *(float *)(param_3 + 0x74);
        fVar59 = *(float *)(param_3 + 0x70);
        if (0.0 <= *(float *)(param_1 + 8) && 0.0 <= *(float *)(param_1 + 10)) {
          fVar42 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 10);
          fVar59 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 8);
        }
        uVar79 = (undefined2)((uint)fVar59 >> 0x10);
        if (1.0 < fVar59) {
          uVar79 = 0x3f80;
        }
        uVar46 = (undefined2)((uint)fVar42 >> 0x10);
        if (1.0 < fVar42) {
          uVar46 = 0x3f80;
        }
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 8) = uVar79;
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 10) = uVar46;
        auVar33 = pauVar19[*(byte *)((long)param_1 + 3)];
        pauVar16 = pauVar18 + *(byte *)((long)param_1 + 3);
        fVar59 = auVar33._0_4_ + *(float *)*pauVar16;
        fVar41 = auVar33._4_4_ + *(float *)(*pauVar16 + 4);
        fVar57 = auVar33._8_4_ + *(float *)(*pauVar16 + 8);
        fVar42 = auVar33._12_4_;
        fVar63 = fVar59 * fVar59 + fVar41 * fVar41 + fVar57 * fVar57;
        fVar80 = fVar59 * fVar59 + fVar41 * fVar41 + fVar57 * fVar57;
        uVar81 = CONCAT44(fVar80,fVar63);
        uVar68 = NEON_frsqrte(uVar81,4);
        fVar85 = (float)uVar68;
        fVar71 = (float)((ulong)uVar68 >> 0x20);
        uVar68 = NEON_frsqrts(uVar81,CONCAT44(fVar71 * fVar71,fVar85 * fVar85),4);
        fVar85 = fVar85 * (float)uVar68;
        fVar71 = fVar71 * (float)((ulong)uVar68 >> 0x20);
        uVar81 = NEON_frsqrts(uVar81,CONCAT44(fVar71 * fVar71,fVar85 * fVar85),4);
        iVar78 = -(uint)(fVar63 <= 0.0);
        iVar86 = -(uint)(fVar80 <= 0.0);
        fVar63 = fVar63 * (float)uVar81 * fVar85;
        fVar80 = fVar80 * (float)((ulong)uVar81 >> 0x20) * fVar71;
        fVar63 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar78 >> 0x18),
                                 CONCAT12((byte)((uint)fVar63 >> 0x10) &
                                          ~(byte)((uint)iVar78 >> 0x10),
                                          CONCAT11((byte)((uint)fVar63 >> 8) &
                                                   ~(byte)((uint)iVar78 >> 8),
                                                   SUB41(fVar63,0) & ~(byte)iVar78)));
        uVar81 = CONCAT17((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18),
                          CONCAT16((byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10),
                                   CONCAT15((byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar86 >> 8),
                                            CONCAT14(SUB41(fVar80,0) & ~(byte)iVar86,fVar63))));
        if (1e-16 < fVar63) {
          uVar68 = NEON_frecpe(uVar81,4);
          uVar60 = NEON_frecps(uVar81,uVar68,4);
          fVar63 = (float)uVar68 * (float)uVar60;
          fVar80 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar60 >> 0x20);
          uVar81 = NEON_frecps(uVar81,CONCAT44(fVar80,fVar63),4);
          fVar63 = fVar63 * (float)uVar81;
          fVar80 = fVar80 * (float)((ulong)uVar81 >> 0x20);
          auVar33._0_4_ = fVar59 * fVar63;
          auVar33._4_4_ = fVar41 * fVar80;
          auVar33._8_4_ = fVar57 * fVar63;
          auVar33._12_4_ = (fVar42 + *(float *)(*pauVar16 + 0xc)) * fVar80;
        }
        auVar53 = NEON_ext(auVar33,auVar33,4,1);
        auVar73 = pauVar19[*(byte *)(param_1 + 2)];
        auVar62 = NEON_ext(auVar73,auVar73,8,1);
        uVar81 = NEON_ext(auVar73._0_8_,auVar62._0_8_,4,1);
        fVar41 = auVar33._0_4_;
        fVar57 = auVar33._4_4_;
        fVar42 = fVar41 * (float)uVar81 - auVar73._0_4_ * auVar53._0_4_;
        fVar59 = fVar57 * (float)((ulong)uVar81 >> 0x20) - auVar73._4_4_ * auVar53._4_4_;
        auVar44._0_8_ = CONCAT44(fVar59,fVar42);
        auVar44._8_4_ = auVar33._8_4_ * auVar73._0_4_ - auVar73._8_4_ * fVar41;
        auVar44._12_4_ = auVar33._12_4_ * auVar73._4_4_ - auVar73._12_4_ * fVar57;
        auVar73 = NEON_ext(auVar44,auVar44,4,1);
        uVar81 = NEON_ext(auVar73._0_8_,auVar44._0_8_,4,1);
        fVar63 = auVar73._0_4_;
        fVar80 = auVar73._4_4_;
        pauVar16 = pauVar18 + *(byte *)(param_1 + 2);
        auVar34._0_4_ = auVar53._0_4_ * fVar63 - fVar41 * (float)uVar81;
        auVar34._4_4_ = auVar53._4_4_ * fVar80 - fVar57 * (float)((ulong)uVar81 >> 0x20);
        auVar34._8_4_ = fVar41 * fVar42 - auVar33._8_4_ * fVar63;
        auVar34._12_4_ = fVar57 * fVar59 - auVar33._12_4_ * fVar80;
        auVar73 = NEON_ext(auVar34,auVar34,4,1);
        auVar35._0_4_ = *(float *)*pauVar16 * fVar63;
        auVar35._4_4_ = *(float *)(*pauVar16 + 4) * fVar80;
        auVar35._8_4_ = *(float *)(*pauVar16 + 8) * fVar42;
        auVar35._12_4_ = *(float *)(*pauVar16 + 0xc) * fVar59;
        auVar53 = NEON_ext(auVar35,auVar35,8,1);
        auVar45._0_4_ = *(float *)*pauVar16 * auVar73._0_4_;
        auVar45._4_4_ = *(float *)(*pauVar16 + 4) * auVar73._4_4_;
        auVar45._8_4_ = *(float *)(*pauVar16 + 8) * auVar34._0_4_;
        auVar45._12_4_ = *(float *)(*pauVar16 + 0xc) * auVar34._4_4_;
        auVar73 = NEON_ext(auVar45,auVar45,8,1);
        fVar42 = atan2f(auVar35._0_4_ + auVar35._4_4_ + auVar53._0_4_,
                        auVar45._0_4_ + auVar45._4_4_ + auVar73._0_4_);
        *(float *)pauVar23[(long)iVar75 + 0xe] = fVar25 - fVar42;
        if ((!bVar13) && (fVar25 = (float)FUN_032c8ef0(fVar50), fVar25 < 3.1415927)) {
          *(float *)(pauVar23[(long)iVar75 + 0xe] + 4) = fVar50 - fVar42;
          *pbVar22 = *pbVar22 | 2;
        }
LAB_03023c14:
        lVar15 = 0x20;
LAB_03023c20:
        iVar75 = iVar75 + 1;
LAB_03023c24:
        break;
      case 0x10:
        if (*(char *)(param_1 + 1) != '\0') {
          fVar25 = *(float *)(param_1 + 8);
          fVar50 = *(float *)(param_1 + 10);
          fVar42 = (float)FUN_032c8ef0(fVar25);
          if ((fVar25 < 0.0) || (3.1415927 < fVar42)) {
            fVar25 = (float)FUN_032c8ef0(fVar50);
            if (3.1415927 < fVar25) {
              lVar15 = 0x30;
              goto LAB_03023c24;
            }
            bVar13 = true;
            fVar25 = fVar50;
          }
          else {
            bVar13 = false;
          }
          pbVar22 = pauVar23[(long)iVar75 + 0xe] + 0xc;
          *pbVar22 = bVar13 | (*(byte *)((long)param_1 + 3) & 3) << 2 |
                     (*(byte *)(param_1 + 2) & 3) << 4 | *pbVar22 & 2;
          pauVar23[(long)iVar75 + 0xe][0xd] = 7;
          fVar42 = *(float *)(param_3 + 0x74);
          fVar59 = *(float *)(param_3 + 0x70);
          if (0.0 <= *(float *)(param_1 + 4) && 0.0 <= *(float *)(param_1 + 6)) {
            fVar42 = *(float *)(param_3 + 0x74) * *(float *)(param_1 + 6);
            fVar59 = *(float *)(param_3 + 0x70) * *(float *)(param_1 + 4);
          }
          uVar79 = (undefined2)((uint)fVar59 >> 0x10);
          if (1.0 < fVar59) {
            uVar79 = 0x3f80;
          }
          uVar46 = (undefined2)((uint)fVar42 >> 0x10);
          if (1.0 < fVar42) {
            uVar46 = 0x3f80;
          }
          *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 8) = uVar79;
          *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 10) = uVar46;
          pauVar16 = pauVar19 + *(byte *)(param_1 + 2);
          pauVar3 = pauVar18 + *(byte *)((long)param_1 + 3);
          auVar89._0_4_ = *(float *)*pauVar16 * *(float *)*pauVar3;
          auVar89._4_4_ = *(float *)(*pauVar16 + 4) * *(float *)(*pauVar3 + 4);
          auVar89._8_4_ = *(float *)(*pauVar16 + 8) * *(float *)(*pauVar3 + 8);
          auVar89._12_4_ = *(float *)(*pauVar16 + 0xc) * *(float *)(*pauVar3 + 0xc);
          auVar73 = NEON_ext(auVar89,auVar89,8,1);
          auVar36._0_4_ = auVar89._0_4_ + auVar89._4_4_ + auVar73._0_4_;
          auVar36._4_4_ = auVar89._0_4_ + auVar89._4_4_ + auVar73._4_4_;
          auVar36._8_8_ = 0;
          fVar42 = (float)FUN_032c8f50(auVar36,auVar73);
          *(float *)pauVar23[(long)iVar75 + 0xe] = fVar25 - fVar42;
          if ((!bVar13) && (fVar25 = (float)FUN_032c8ef0(fVar50), fVar25 <= 3.1415927)) {
            *(float *)(pauVar23[(long)iVar75 + 0xe] + 4) = fVar50 - fVar42;
            *pbVar22 = *pbVar22 | 2;
          }
          lVar15 = 0x30;
          goto LAB_03023c20;
        }
        lVar15 = 0x30;
        break;
      case 0x18:
        pauVar23[(long)iVar75 + 0xe][0xc] = pauVar23[(long)iVar75 + 0xe][0xc] & 2 | 0x90;
        pauVar23[(long)iVar75 + 0xf][0xc] = pauVar23[(long)iVar75 + 0xf][0xc] & 2 | 0x24;
        pauVar23[(long)iVar75 + 0x10][0xc] = pauVar23[(long)iVar75 + 0x10][0xc] & 2 | 0x48;
        fVar42 = *(float *)(param_3 + 0x70);
        fVar25 = *(float *)(param_3 + 0x74);
        fVar59 = *(float *)(param_1 + 2);
        fVar50 = *(float *)(param_1 + 4);
        pauVar23[(long)iVar75 + 0xe][0xd] = 3;
        auVar69._0_4_ = *(float *)pauVar23[6] * *(float *)pauVar23[0xb];
        auVar69._4_4_ = *(float *)(pauVar23[6] + 4) * *(float *)(pauVar23[0xb] + 4);
        auVar69._8_4_ = *(float *)(pauVar23[6] + 8) * *(float *)(pauVar23[0xb] + 8);
        auVar69._12_4_ = *(float *)(pauVar23[6] + 0xc) * *(float *)(pauVar23[0xb] + 0xc);
        auVar73 = NEON_ext(auVar69,auVar69,8,1);
        *(float *)pauVar23[(long)iVar75 + 0xe] = -(auVar69._0_4_ + auVar69._4_4_ + auVar73._0_4_);
        if ((0.0 <= fVar59) && (0.0 <= fVar50)) {
          fVar42 = fVar42 * fVar59;
          fVar25 = fVar25 * fVar50;
        }
        uVar79 = (undefined2)((uint)fVar42 >> 0x10);
        if (1.0 < fVar42) {
          uVar79 = 0x3f80;
        }
        uVar46 = (undefined2)((uint)fVar25 >> 0x10);
        if (1.0 < fVar25) {
          uVar46 = 0x3f80;
        }
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 8) = uVar79;
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xe] + 10) = uVar46;
        pauVar23[(long)iVar75 + 0xf][0xd] = 3;
        fVar25 = *(float *)pauVar23[7];
        fVar42 = *(float *)(pauVar23[7] + 4);
        fVar50 = *(float *)(pauVar23[7] + 8);
        fVar59 = *(float *)(pauVar23[7] + 0xc);
        fVar41 = *(float *)pauVar23[9];
        fVar57 = *(float *)(pauVar23[9] + 4);
        fVar63 = *(float *)(pauVar23[9] + 8);
        fVar80 = *(float *)(pauVar23[9] + 0xc);
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xf] + 8) = uVar79;
        auVar76._0_4_ = fVar25 * fVar41;
        auVar76._4_4_ = fVar42 * fVar57;
        auVar76._8_4_ = fVar50 * fVar63;
        auVar76._12_4_ = fVar59 * fVar80;
        auVar73 = NEON_ext(auVar76,auVar76,8,1);
        *(float *)pauVar23[(long)iVar75 + 0xf] = -(auVar76._0_4_ + auVar76._4_4_ + auVar73._0_4_);
        *(undefined2 *)(pauVar23[(long)iVar75 + 0xf] + 10) = uVar46;
        pauVar23[(long)iVar75 + 0x10][0xd] = 3;
        fVar25 = *(float *)pauVar23[5];
        fVar42 = *(float *)(pauVar23[5] + 4);
        fVar50 = *(float *)(pauVar23[5] + 8);
        fVar59 = *(float *)(pauVar23[5] + 0xc);
        fVar41 = *(float *)pauVar23[10];
        fVar57 = *(float *)(pauVar23[10] + 4);
        fVar63 = *(float *)(pauVar23[10] + 8);
        fVar80 = *(float *)(pauVar23[10] + 0xc);
        *(undefined2 *)(pauVar23[(long)iVar75 + 0x10] + 8) = uVar79;
        *(undefined2 *)(pauVar23[(long)iVar75 + 0x10] + 10) = uVar46;
        auVar82._0_4_ = fVar25 * fVar41;
        auVar82._4_4_ = fVar42 * fVar57;
        auVar82._8_4_ = fVar50 * fVar63;
        auVar82._12_4_ = fVar59 * fVar80;
        auVar73 = NEON_ext(auVar82,auVar82,8,1);
        *(float *)pauVar23[(long)iVar75 + 0x10] = -(auVar82._0_4_ + auVar82._4_4_ + auVar73._0_4_);
        iVar78 = iVar75 + 3;
LAB_03023268:
        lVar15 = 0x10;
        iVar75 = iVar78;
      }
      param_1 = (undefined2 *)(lVar15 + (long)param_1);
    } while (param_1 < param_2);
  }
switchD_03023298_caseD_6:
  *param_4 = (long)(pauVar23 + 0x14);
  (*pauVar23)[0] = 0x1e;
  param_4[1] = param_4[1] + 0x30;
  return;
}


