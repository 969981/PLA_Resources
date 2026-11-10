/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fad140; name: FUN_02fad140
 */


void FUN_02fad140(undefined8 *param_1,long *param_2,undefined8 *param_3,long param_4,long *param_5,
                 undefined8 *param_6,long *param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  unkbyte9 Var25;
  unkbyte9 Var26;
  unkbyte9 Var27;
  unkbyte9 *pVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  byte bVar32;
  long lVar33;
  undefined4 uVar34;
  undefined1 (*pauVar35) [16];
  unkbyte9 *pVar36;
  undefined8 *puVar37;
  long *plVar38;
  int iVar39;
  uint uVar40;
  float fVar41;
  float fVar45;
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  float fVar46;
  undefined1 auVar44 [16];
  float fVar47;
  float fVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  int iVar53;
  float fVar54;
  int iVar57;
  int iVar58;
  undefined1 auVar55 [12];
  undefined1 auVar56 [16];
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  int iVar67;
  int iVar69;
  int iVar70;
  undefined1 auVar68 [16];
  undefined1 auVar71 [16];
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined2 local_ab8 [2];
  undefined8 local_ab4;
  undefined4 local_aac;
  long local_aa8;
  long local_aa0;
  long lStack_a98;
  uint local_a90;
  undefined8 local_a88;
  undefined2 local_a80;
  undefined2 uStack_a7e;
  undefined4 uStack_a7c;
  undefined4 uStack_a78;
  undefined4 local_a74;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined1 auStack_a60 [8];
  undefined8 uStack_a58;
  undefined1 auStack_a50 [8];
  undefined8 uStack_a48;
  uint auStack_a40 [568];
  int local_160;
  long local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined2 local_140;
  undefined4 local_13c;
  long *plStack_130;
  undefined1 local_120 [16];
  undefined2 local_110;
  undefined4 local_10c;
  int local_100;
  int local_fc;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  long local_e0;
  long local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  
  FUN_02fa7314(auStack_a60,param_4,param_3,param_3 + 2);
  iVar39 = local_160;
  pauVar35 = (undefined1 (*) [16])PTR_DAT_043723a0;
  if (param_7 == (long *)0x0) {
    bVar32 = 0;
  }
  else {
    bVar32 = *(byte *)(param_7 + 1) & 1;
  }
  do {
    while( true ) {
      while( true ) {
        if (iVar39 == 0) {
          return;
        }
        lVar30 = (long)iVar39 + -1;
        uVar3 = auStack_a40[lVar30 * 0xc];
        uVar4 = auStack_a40[lVar30 * 0xc + 1];
        uVar5 = auStack_a40[lVar30 * 0xc + 2];
        local_160 = (int)lVar30;
        if (uVar3 == 0) break;
        lVar33 = lVar30 * 0x30;
        pVar36 = (unkbyte9 *)(auStack_a60 + lVar33);
        pVar28 = (unkbyte9 *)(auStack_a50 + lVar33);
        fVar41 = *(float *)(auStack_a60 + lVar33 + 4);
        fVar48 = *(float *)(auStack_a50 + lVar33 + 4);
        fVar45 = fVar41;
        fVar46 = fVar41;
        fVar47 = fVar41;
        fVar50 = fVar48;
        fVar51 = fVar48;
        fVar52 = fVar48;
        if ((int)*(uint *)(local_158 + 0x50) < (int)uVar3) {
          iVar53 = uVar3 + ~*(uint *)(local_158 + 0x50);
          plVar38 = (long *)(local_158 + 0x20);
          lVar31 = *plVar38;
          if ((int)uVar4 <
              (int)(uint)*(ushort *)((long)plVar38 + (long)iVar53 * 0x18 + lVar31 + 0x10)) {
            uVar6 = *(ushort *)((long)plVar38 + (long)iVar53 * 0x18 + lVar31 + 0x12);
            if ((int)uVar5 < (int)(uint)uVar6) {
              plVar38 = (long *)((long)plVar38 + (long)iVar53 * 0x18 + lVar31);
              uVar40 = uVar5 + uVar4 * uVar6;
              fVar54 = *(float *)(local_158 + 0x40);
              puVar7 = (ushort *)
                       ((long)plVar38 +
                       (-(ulong)((uVar40 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                       (ulong)(uVar40 * 4) << 2) + *plVar38);
              auVar44._2_2_ = 0;
              auVar44._0_2_ = *puVar7;
              auVar44._4_2_ = puVar7[1];
              auVar44._6_2_ = 0;
              auVar44._8_2_ = puVar7[2];
              auVar44._10_2_ = 0;
              auVar44._12_2_ = puVar7[3];
              auVar44._14_2_ = 0;
              auVar49._2_2_ = 0;
              auVar49._0_2_ = puVar7[4];
              auVar49._4_2_ = puVar7[5];
              auVar49._6_2_ = 0;
              auVar49._8_2_ = puVar7[6];
              auVar49._10_2_ = 0;
              auVar49._12_2_ = puVar7[7];
              auVar49._14_2_ = 0;
              auVar44 = NEON_ucvtf(auVar44,4);
              auVar49 = NEON_ucvtf(auVar49,4);
              fVar48 = (float)*(undefined8 *)(local_158 + 0x30);
              fVar41 = fVar48 + auVar44._0_4_ * fVar54;
              fVar50 = (float)((ulong)*(undefined8 *)(local_158 + 0x30) >> 0x20);
              fVar45 = fVar50 + auVar44._4_4_ * fVar54;
              fVar51 = (float)*(undefined8 *)(local_158 + 0x38);
              fVar46 = fVar51 + auVar44._8_4_ * fVar54;
              fVar52 = (float)((ulong)*(undefined8 *)(local_158 + 0x38) >> 0x20);
              fVar47 = fVar52 + auVar44._12_4_ * fVar54;
              fVar48 = fVar48 + auVar49._0_4_ * fVar54;
              fVar50 = fVar50 + auVar49._4_4_ * fVar54;
              fVar51 = fVar51 + auVar49._8_4_ * fVar54;
              fVar52 = fVar52 + auVar49._12_4_ * fVar54;
            }
          }
        }
        uVar2 = *(undefined8 *)(auStack_a50 + lVar33 + 8);
        uVar72 = (undefined1)((ulong)uVar2 >> 8);
        uVar73 = (undefined1)((ulong)uVar2 >> 0x10);
        uVar74 = (undefined1)((ulong)uVar2 >> 0x18);
        uVar75 = (undefined1)((ulong)uVar2 >> 0x20);
        uVar76 = (undefined1)((ulong)uVar2 >> 0x28);
        uVar77 = (undefined1)((ulong)uVar2 >> 0x30);
        uVar78 = (undefined1)((ulong)uVar2 >> 0x38);
        Var25 = *pVar28;
        uVar16 = *(undefined8 *)(auStack_a60 + lVar33 + 8);
        uVar79 = (undefined1)((ulong)uVar16 >> 8);
        uVar80 = (undefined1)((ulong)uVar16 >> 0x10);
        uVar81 = (undefined1)((ulong)uVar16 >> 0x18);
        uVar82 = (undefined1)((ulong)uVar16 >> 0x20);
        uVar83 = (undefined1)((ulong)uVar16 >> 0x28);
        uVar84 = (undefined1)((ulong)uVar16 >> 0x30);
        uVar85 = (undefined1)((ulong)uVar16 >> 0x38);
        Var27 = *pVar36;
        Var26 = *pVar36;
        fVar86 = ((float)*(undefined8 *)pVar36 + (float)*(undefined8 *)pVar28) * 0.5;
        fVar87 = ((float)((ulong)*(undefined8 *)pVar36 >> 0x20) +
                 (float)((ulong)*(undefined8 *)pVar28 >> 0x20)) * 0.5;
        fVar88 = ((float)uVar16 + (float)uVar2) * 0.5;
        fVar89 = ((float)((ulong)uVar16 >> 0x20) + (float)((ulong)uVar2 >> 0x20)) * 0.5;
        auVar12[9] = uVar79;
        auVar12._0_9_ = *pVar36;
        auVar12[10] = uVar80;
        auVar12[0xb] = uVar81;
        auVar12[0xc] = uVar82;
        auVar12[0xd] = uVar83;
        auVar12[0xe] = uVar84;
        auVar12[0xf] = uVar85;
        auVar17._4_4_ = fVar87;
        auVar17._0_4_ = fVar86;
        auVar17._8_4_ = fVar88;
        auVar17._12_4_ = fVar89;
        auVar90[9] = uVar79;
        auVar90._0_9_ = *pVar36;
        auVar90[10] = uVar80;
        auVar90[0xb] = uVar81;
        auVar90[0xc] = uVar82;
        auVar90[0xd] = uVar83;
        auVar90[0xe] = uVar84;
        auVar90[0xf] = uVar85;
        auVar90 = auVar90 ^ (auVar12 ^ auVar17) & *pauVar35;
        uVar3 = uVar3 - 1;
        auVar8[9] = uVar72;
        auVar8._0_9_ = *pVar28;
        auVar8[10] = uVar73;
        auVar8[0xb] = uVar74;
        auVar8[0xc] = uVar75;
        auVar8[0xd] = uVar76;
        auVar8[0xe] = uVar77;
        auVar8[0xf] = uVar78;
        auVar18._4_4_ = fVar87;
        auVar18._0_4_ = fVar86;
        auVar18._8_4_ = fVar88;
        auVar18._12_4_ = fVar89;
        auVar61._4_4_ = fVar87;
        auVar61._0_4_ = fVar86;
        auVar61._8_4_ = fVar88;
        auVar61._12_4_ = fVar89;
        auVar61 = auVar61 ^ (auVar18 ^ auVar8) & *pauVar35;
        fVar54 = (float)*param_3;
        iVar53 = -(uint)(fVar54 <= auVar61._0_4_);
        fVar59 = (float)((ulong)*param_3 >> 0x20);
        iVar57 = -(uint)(fVar59 <= fVar48);
        fVar60 = (float)param_3[1];
        iVar58 = -(uint)(fVar60 <= auVar61._8_4_);
        fVar63 = (float)param_3[2];
        iVar67 = -(uint)(auVar90._0_4_ <= fVar63);
        fVar64 = (float)((ulong)param_3[2] >> 0x20);
        iVar69 = -(uint)(fVar41 <= fVar64);
        fVar65 = (float)param_3[3];
        iVar70 = -(uint)(auVar90._8_4_ <= fVar65);
        uVar40 = CONCAT13((byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar53 >> 0x18),
                          CONCAT12((byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar53 >> 0x10),
                                   CONCAT11((byte)((uint)iVar67 >> 8) & (byte)((uint)iVar53 >> 8),
                                            (byte)iVar67 & (byte)iVar53)));
        auVar55._0_8_ =
             CONCAT17((byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
                      CONCAT16((byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar57 >> 0x10),
                               CONCAT15((byte)((uint)iVar69 >> 8) & (byte)((uint)iVar57 >> 8),
                                        CONCAT14((byte)iVar69 & (byte)iVar57,uVar40))));
        auVar55[8] = (byte)iVar70 & (byte)iVar58;
        auVar55[9] = (byte)((uint)iVar70 >> 8) & (byte)((uint)iVar58 >> 8);
        auVar55[10] = (byte)((uint)iVar70 >> 0x10) & (byte)((uint)iVar58 >> 0x10);
        auVar55[0xb] = (byte)((uint)iVar70 >> 0x18) & (byte)((uint)iVar58 >> 0x18);
        auVar13[9] = uVar79;
        auVar13._0_9_ = *pVar36;
        auVar13[10] = uVar80;
        auVar13[0xb] = uVar81;
        auVar13[0xc] = uVar82;
        auVar13[0xd] = uVar83;
        auVar13[0xe] = uVar84;
        auVar13[0xf] = uVar85;
        auVar19._4_4_ = fVar87;
        auVar19._0_4_ = fVar86;
        auVar19._8_4_ = fVar88;
        auVar19._12_4_ = fVar89;
        auVar91[9] = uVar79;
        auVar91._0_9_ = *pVar36;
        auVar91[10] = uVar80;
        auVar91[0xb] = uVar81;
        auVar91[0xc] = uVar82;
        auVar91[0xd] = uVar83;
        auVar91[0xe] = uVar84;
        auVar91[0xf] = uVar85;
        auVar91 = auVar91 ^ (auVar13 ^ auVar19) & pauVar35[1];
        auVar9[9] = uVar72;
        auVar9._0_9_ = *pVar28;
        auVar9[10] = uVar73;
        auVar9[0xb] = uVar74;
        auVar9[0xc] = uVar75;
        auVar9[0xd] = uVar76;
        auVar9[0xe] = uVar77;
        auVar9[0xf] = uVar78;
        auVar20._4_4_ = fVar87;
        auVar20._0_4_ = fVar86;
        auVar20._8_4_ = fVar88;
        auVar20._12_4_ = fVar89;
        auVar66._4_4_ = fVar87;
        auVar66._0_4_ = fVar86;
        auVar66._8_4_ = fVar88;
        auVar66._12_4_ = fVar89;
        auVar66 = auVar66 ^ (auVar20 ^ auVar9) & pauVar35[1];
        auVar44 = pauVar35[4];
        auVar10[9] = uVar72;
        auVar10._0_9_ = *pVar28;
        auVar10[10] = uVar73;
        auVar10[0xb] = uVar74;
        auVar10[0xc] = uVar75;
        auVar10[0xd] = uVar76;
        auVar10[0xe] = uVar77;
        auVar10[0xf] = uVar78;
        auVar21._4_4_ = fVar87;
        auVar21._0_4_ = fVar86;
        auVar21._8_4_ = fVar88;
        auVar21._12_4_ = fVar89;
        auVar68._4_4_ = fVar87;
        auVar68._0_4_ = fVar86;
        auVar68._8_4_ = fVar88;
        auVar68._12_4_ = fVar89;
        auVar68 = auVar68 ^ (auVar21 ^ auVar10) & pauVar35[5];
        auVar14[9] = uVar79;
        auVar14._0_9_ = *pVar36;
        auVar14[10] = uVar80;
        auVar14[0xb] = uVar81;
        auVar14[0xc] = uVar82;
        auVar14[0xd] = uVar83;
        auVar14[0xe] = uVar84;
        auVar14[0xf] = uVar85;
        auVar22._4_4_ = fVar87;
        auVar22._0_4_ = fVar86;
        auVar22._8_4_ = fVar88;
        auVar22._12_4_ = fVar89;
        auVar71[9] = uVar79;
        auVar71._0_9_ = *pVar36;
        auVar71[10] = uVar80;
        auVar71[0xb] = uVar81;
        auVar71[0xc] = uVar82;
        auVar71[0xd] = uVar83;
        auVar71[0xe] = uVar84;
        auVar71[0xf] = uVar85;
        auVar71 = auVar71 ^ (auVar14 ^ auVar22) & pauVar35[5];
        if ((uVar40 & (uint)((ulong)auVar55._0_8_ >> 0x20) & auVar55._8_4_) != 0) {
          local_160 = iVar39;
          auStack_a40[lVar30 * 0xc] = uVar3;
          auStack_a40[lVar30 * 0xc + 1] = uVar4 << 1;
          auStack_a40[lVar30 * 0xc + 2] = uVar5 << 1;
          *(long *)(auStack_a60 + lVar33 + 8) = auVar90._8_8_;
          *(ulong *)pVar36 = CONCAT44(fVar41,auVar90._0_4_);
          *(long *)(auStack_a50 + lVar33 + 8) = auVar61._8_8_;
          *(ulong *)pVar28 = CONCAT44(fVar48,auVar61._0_4_);
        }
        auVar11[9] = uVar72;
        auVar11._0_9_ = Var25;
        auVar11[10] = uVar73;
        auVar11[0xb] = uVar74;
        auVar11[0xc] = uVar75;
        auVar11[0xd] = uVar76;
        auVar11[0xe] = uVar77;
        auVar11[0xf] = uVar78;
        auVar23._4_4_ = fVar87;
        auVar23._0_4_ = fVar86;
        auVar23._8_4_ = fVar88;
        auVar23._12_4_ = fVar89;
        auVar56._4_4_ = fVar87;
        auVar56._0_4_ = fVar86;
        auVar56._8_4_ = fVar88;
        auVar56._12_4_ = fVar89;
        auVar56 = auVar56 ^ (auVar23 ^ auVar11) & auVar44;
        iVar39 = -(uint)(fVar54 <= auVar66._0_4_);
        iVar53 = -(uint)(fVar59 <= fVar50);
        iVar57 = -(uint)(fVar60 <= auVar66._8_4_);
        auVar15[9] = uVar79;
        auVar15._0_9_ = Var26;
        auVar15[10] = uVar80;
        auVar15[0xb] = uVar81;
        auVar15[0xc] = uVar82;
        auVar15[0xd] = uVar83;
        auVar15[0xe] = uVar84;
        auVar15[0xf] = uVar85;
        auVar24._4_4_ = fVar87;
        auVar24._0_4_ = fVar86;
        auVar24._8_4_ = fVar88;
        auVar24._12_4_ = fVar89;
        auVar62[9] = uVar79;
        auVar62._0_9_ = Var27;
        auVar62[10] = uVar80;
        auVar62[0xb] = uVar81;
        auVar62[0xc] = uVar82;
        auVar62[0xd] = uVar83;
        auVar62[0xe] = uVar84;
        auVar62[0xf] = uVar85;
        auVar62 = auVar62 ^ (auVar15 ^ auVar24) & auVar44;
        iVar58 = -(uint)(auVar91._0_4_ <= fVar63);
        iVar67 = -(uint)(fVar45 <= fVar64);
        iVar69 = -(uint)(auVar91._8_4_ <= fVar65);
        if ((CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar58 >> 0x18),
                      CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar58 >> 0x10),
                               CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar58 >> 8),
                                        (byte)iVar39 & (byte)iVar58))) &
             CONCAT13((byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar67 >> 0x18),
                      CONCAT12((byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar67 >> 0x10),
                               CONCAT11((byte)((uint)iVar53 >> 8) & (byte)((uint)iVar67 >> 8),
                                        (byte)iVar53 & (byte)iVar67))) &
            CONCAT13((byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar69 >> 0x18),
                     CONCAT12((byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar69 >> 0x10),
                              CONCAT11((byte)((uint)iVar57 >> 8) & (byte)((uint)iVar69 >> 8),
                                       (byte)iVar57 & (byte)iVar69)))) != 0) {
          lVar33 = (long)local_160;
          lVar30 = lVar33 * 0x30;
          local_160 = local_160 + 1;
          auStack_a40[lVar33 * 0xc] = uVar3;
          auStack_a40[lVar33 * 0xc + 1] = uVar4 << 1 | 1;
          auStack_a40[lVar33 * 0xc + 2] = uVar5 << 1;
          *(long *)(auStack_a60 + lVar30 + 8) = auVar91._8_8_;
          *(ulong *)(auStack_a60 + lVar30) = CONCAT44(fVar45,auVar91._0_4_);
          *(long *)(auStack_a50 + lVar30 + 8) = auVar66._8_8_;
          *(ulong *)(auStack_a50 + lVar30) = CONCAT44(fVar50,auVar66._0_4_);
        }
        iVar39 = -(uint)(fVar54 <= auVar68._0_4_);
        iVar53 = -(uint)(fVar59 <= fVar51);
        iVar57 = -(uint)(fVar60 <= auVar68._8_4_);
        iVar58 = -(uint)(auVar71._0_4_ <= fVar63);
        iVar67 = -(uint)(fVar46 <= fVar64);
        iVar69 = -(uint)(auVar71._8_4_ <= fVar65);
        uVar40 = CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar58 >> 0x18),
                          CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar58 >> 0x10),
                                   CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar58 >> 8),
                                            (byte)iVar39 & (byte)iVar58)));
        auVar42._0_8_ =
             CONCAT17((byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar67 >> 0x18),
                      CONCAT16((byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar67 >> 0x10),
                               CONCAT15((byte)((uint)iVar53 >> 8) & (byte)((uint)iVar67 >> 8),
                                        CONCAT14((byte)iVar53 & (byte)iVar67,uVar40))));
        auVar42[8] = (byte)iVar57 & (byte)iVar69;
        auVar42[9] = (byte)((uint)iVar57 >> 8) & (byte)((uint)iVar69 >> 8);
        auVar42[10] = (byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar69 >> 0x10);
        auVar42[0xb] = (byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar69 >> 0x18);
        if ((uVar40 & (uint)((ulong)auVar42._0_8_ >> 0x20) & auVar42._8_4_) != 0) {
          lVar33 = (long)local_160;
          lVar30 = lVar33 * 0x30;
          local_160 = local_160 + 1;
          auStack_a40[lVar33 * 0xc] = uVar3;
          auStack_a40[lVar33 * 0xc + 1] = uVar4 << 1 | 1;
          *(long *)(auStack_a60 + lVar30 + 8) = auVar71._8_8_;
          *(ulong *)(auStack_a60 + lVar30) = CONCAT44(fVar46,auVar71._0_4_);
          *(long *)(auStack_a50 + lVar30 + 8) = auVar68._8_8_;
          *(ulong *)(auStack_a50 + lVar30) = CONCAT44(fVar51,auVar68._0_4_);
          auStack_a40[lVar33 * 0xc + 2] = uVar5 << 1 | 1;
        }
        iVar39 = -(uint)(fVar54 <= auVar56._0_4_);
        iVar53 = -(uint)(fVar59 <= fVar52);
        iVar57 = -(uint)(fVar60 <= auVar56._8_4_);
        iVar58 = -(uint)(auVar62._0_4_ <= fVar63);
        iVar67 = -(uint)(fVar47 <= fVar64);
        iVar69 = -(uint)(auVar62._8_4_ <= fVar65);
        uVar40 = CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar58 >> 0x18),
                          CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar58 >> 0x10),
                                   CONCAT11((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar58 >> 8),
                                            (byte)iVar39 & (byte)iVar58)));
        auVar43._0_8_ =
             CONCAT17((byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar67 >> 0x18),
                      CONCAT16((byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar67 >> 0x10),
                               CONCAT15((byte)((uint)iVar53 >> 8) & (byte)((uint)iVar67 >> 8),
                                        CONCAT14((byte)iVar53 & (byte)iVar67,uVar40))));
        auVar43[8] = (byte)iVar57 & (byte)iVar69;
        auVar43[9] = (byte)((uint)iVar57 >> 8) & (byte)((uint)iVar69 >> 8);
        auVar43[10] = (byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar69 >> 0x10);
        auVar43[0xb] = (byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar69 >> 0x18);
        iVar39 = local_160;
        if ((uVar40 & (uint)((ulong)auVar43._0_8_ >> 0x20) & auVar43._8_4_) != 0) {
          lVar33 = (long)local_160;
          lVar30 = lVar33 * 0x30;
          local_160 = local_160 + 1;
          auStack_a40[lVar33 * 0xc] = uVar3;
          auStack_a40[lVar33 * 0xc + 1] = uVar4 << 1;
          auStack_a40[lVar33 * 0xc + 2] = uVar5 << 1 | 1;
          *(long *)(auStack_a60 + lVar30 + 8) = auVar62._8_8_;
          *(ulong *)(auStack_a60 + lVar30) = CONCAT44(fVar47,auVar62._0_4_);
          *(long *)(auStack_a50 + lVar30 + 8) = auVar56._8_8_;
          *(ulong *)(auStack_a50 + lVar30) = CONCAT44(fVar52,auVar56._0_4_);
          iVar39 = local_160;
        }
      }
      if ((int)uVar4 < local_100 && (int)uVar5 < local_fc) break;
      iVar39 = local_160;
    }
    local_160 = iVar39;
    (**(code **)(*plStack_130 + 0x28))();
    uStack_148 = local_120._8_8_;
    local_150 = local_120._0_8_;
    local_140 = local_110;
    lVar30 = (long)local_160 + -1;
    local_160 = (int)lVar30;
    local_13c = local_10c;
    iVar39 = (auStack_a40[lVar30 * 0xc + 2] << (ulong)(*(int *)(param_4 + 0x60) + 1U & 0x1f)) +
             auStack_a40[lVar30 * 0xc + 1] * 2;
    uVar3 = -((uint)*(byte *)(param_4 + 0x1c) + *(int *)((long)param_5 + 0x1c));
    plVar38 = (long *)*param_1;
    uVar4 = (iVar39 + 1 << (ulong)(uVar3 & 0x1f)) - 1U |
            (&DAT_03aa74b0)[*(int *)((long)param_5 + 0x1c)] & *(uint *)(param_5 + 3);
    uVar3 = (iVar39 + 2 << (ulong)(uVar3 & 0x1f)) - 1U |
            (&DAT_03aa74b0)[*(int *)((long)param_5 + 0x1c)] & *(uint *)(param_5 + 3);
    if (plVar38 == (long *)0x0) {
      lVar33 = *param_2;
      lVar30 = *param_5;
      uVar34 = 0xffffff;
      local_b8 = 0xffffffff;
      local_e0 = 0;
      local_d8 = 0;
      local_c0._4_4_ = (undefined4)((ulong)local_c0 >> 0x20);
      local_b4 = 0xf;
      local_b0 = 0xffff;
      local_ac = 0;
      local_8c = 0xf;
      local_88 = 0xffff;
      local_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      local_d0 = local_d0 & 0xffffffff00000000;
      local_78 = 6;
      uStack_74 = 0;
      local_f0 = 0;
      uStack_ee = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      local_e4 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      if (lVar33 == 0) {
        local_c8 = 0xffffffffffffffff;
      }
      else {
        local_c8 = *(undefined8 *)(lVar33 + 0xb0);
        uVar34 = *(undefined4 *)(lVar33 + 0x50);
      }
      if (lVar30 == 0) {
        local_98 = 0xffffff;
        local_a0 = 0xffffffffffffffff;
      }
      else {
        local_a0 = *(undefined8 *)(lVar30 + 0xb0);
        local_98 = *(undefined4 *)(lVar30 + 0x50);
      }
      local_90 = uVar4;
      local_c0._0_4_ = uVar34;
      (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
      if (bVar32 != 0) {
        return;
      }
      lVar33 = *param_2;
      uVar34 = 0xffffff;
      lVar30 = *param_5;
      local_b0 = 0xffff;
      local_ac = 0;
      local_88 = 0xffff;
      local_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      if (lVar33 == 0) {
        local_c8 = 0xffffffffffffffff;
      }
      else {
        local_c8 = *(undefined8 *)(lVar33 + 0xb0);
        uVar34 = *(undefined4 *)(lVar33 + 0x50);
      }
      local_c0 = CONCAT44(local_c0._4_4_,uVar34);
      if (lVar30 == 0) {
        local_98 = 0xffffff;
        local_a0 = 0xffffffffffffffff;
      }
      else {
        local_a0 = *(undefined8 *)(lVar30 + 0xb0);
        local_98 = *(undefined4 *)(lVar30 + 0x50);
      }
LAB_02fad88c:
      local_d0 = local_d0 & 0xffffffff00000000;
      local_e4 = 0;
      uStack_e8 = 0;
      uStack_ec = 0;
      uStack_ee = 0;
      local_f0 = 0;
      uStack_74 = 0;
      local_78 = 6;
      local_8c = 0xf;
      local_b4 = 0xf;
      local_b8 = 0xffffffff;
      local_d8 = 0;
      local_e0 = 0;
      local_90 = uVar3;
      (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
      iVar53 = 0;
    }
    else {
      puVar1 = (undefined8 *)((long)param_1 + 0x14);
      local_a70 = *param_6;
      uStack_a68 = param_6[1];
      uVar2 = *param_6;
      local_a80 = (undefined2)uVar2;
      uStack_a7e = (undefined2)((ulong)uVar2 >> 0x10);
      uStack_a7c = (undefined4)((ulong)uVar2 >> 0x20);
      uStack_a78 = (undefined4)param_6[1];
      local_a74 = (undefined4)((ulong)param_6[1] >> 0x20);
      puVar37 = (undefined8 *)((ulong)&local_a70 | 4);
      (**(code **)(*plVar38 + 0x40))
                (plVar38,local_110,6,*param_5,param_5[1],param_4,uVar4,0,&local_a70);
      (**(code **)(*plVar38 + 0x40))
                (plVar38,local_140,6,*param_5,param_5[1],param_4,uVar3,0,&local_a80);
      plVar38 = (long *)param_1[1];
      if (plVar38 == (long *)0x0) {
LAB_02fad64c:
        lVar33 = *param_2;
        lVar30 = *param_5;
        uVar34 = 0xffffff;
        local_b8 = 0xffffffff;
        local_e0 = 0;
        local_d8 = 0;
        local_b4 = 0xf;
        local_8c = 0xf;
        local_d0 = local_d0 & 0xffffffff00000000;
        local_78 = 6;
        uStack_74 = 0;
        local_f0 = 0;
        uStack_ee = 0;
        uStack_ec = 0;
        uStack_e8 = 0;
        local_e4 = 0;
        if (lVar33 == 0) {
          local_c8 = 0xffffffffffffffff;
        }
        else {
          local_c8 = *(undefined8 *)(lVar33 + 0xb0);
          uVar34 = *(undefined4 *)(lVar33 + 0x50);
        }
        local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar34);
        local_b0 = *(undefined2 *)(param_1 + 2);
        uStack_a4 = *(undefined4 *)((long)param_1 + 0x1c);
        local_ac = (undefined4)*puVar1;
        uStack_a8 = (undefined4)((ulong)*puVar1 >> 0x20);
        if (lVar30 == 0) {
          local_98 = 0xffffff;
          local_a0 = 0xffffffffffffffff;
        }
        else {
          local_a0 = *(undefined8 *)(lVar30 + 0xb0);
          local_98 = *(undefined4 *)(lVar30 + 0x50);
        }
        uStack_7c = *(undefined4 *)(puVar37 + 1);
        local_88 = (undefined2)local_a70;
        local_84 = (undefined4)*puVar37;
        uStack_80 = (undefined4)((ulong)*puVar37 >> 0x20);
        local_90 = uVar4;
        (**(code **)(*param_7 + 0x28))(param_7,&local_f0);
        if (bVar32 == 0) {
          lVar33 = *param_2;
          lVar30 = *param_5;
          uVar34 = 0xffffff;
          if (lVar33 == 0) {
            local_c8 = 0xffffffffffffffff;
          }
          else {
            local_c8 = *(undefined8 *)(lVar33 + 0xb0);
            uVar34 = *(undefined4 *)(lVar33 + 0x50);
          }
          local_c0 = CONCAT44((int)((ulong)local_c0 >> 0x20),uVar34);
          local_b0 = *(undefined2 *)(param_1 + 2);
          uStack_a4 = *(undefined4 *)((long)param_1 + 0x1c);
          local_ac = (undefined4)*puVar1;
          uStack_a8 = (undefined4)((ulong)*puVar1 >> 0x20);
          if (lVar30 == 0) {
            local_98 = 0xffffff;
            local_a0 = 0xffffffffffffffff;
          }
          else {
            local_a0 = *(undefined8 *)(lVar30 + 0xb0);
            local_98 = *(undefined4 *)(lVar30 + 0x50);
          }
          local_88 = local_a80;
          uStack_7c = local_a74;
          local_84 = uStack_a7c;
          uStack_80 = uStack_a78;
          goto LAB_02fad88c;
        }
        iVar53 = 3;
      }
      else {
        local_f0 = *(undefined2 *)(param_1 + 2);
        local_e4 = *(undefined4 *)((long)param_1 + 0x1c);
        uStack_ec = (undefined4)*puVar1;
        uStack_e8 = (undefined4)((ulong)*puVar1 >> 0x20);
        local_e0 = *param_2;
        local_d8 = param_2[1];
        local_d0 = param_2[2];
        local_c8 = CONCAT44(local_c8._4_4_,(int)param_2[3]);
        local_c0 = 0;
        local_aa8 = *param_5;
        local_aa0 = param_5[1];
        local_ab8[0] = (undefined2)local_a70;
        local_aac = *(undefined4 *)(puVar37 + 1);
        local_ab4 = *puVar37;
        local_a88 = 0;
        lStack_a98 = param_4;
        local_a90 = uVar4;
        uVar29 = (**(code **)(*plVar38 + 0x40))(plVar38,6,1,&local_f0,local_ab8);
        if ((uVar29 & 1) != 0) {
          local_ab8[0] = local_a80;
          *(undefined4 *)((undefined8 *)((ulong)local_ab8 | 4) + 1) = local_a74;
          *(undefined8 *)((ulong)local_ab8 | 4) = CONCAT44(uStack_a78,uStack_a7c);
          local_a90 = uVar3;
          uVar29 = (**(code **)(*(long *)param_1[1] + 0x40))
                             ((long *)param_1[1],6,1,&local_f0,local_ab8);
          if ((uVar29 & 1) != 0) goto LAB_02fad64c;
        }
        iVar53 = 2;
      }
    }
    iVar39 = local_160;
    pauVar35 = (undefined1 (*) [16])PTR_DAT_043723a0;
    if (iVar53 == 3) {
      return;
    }
  } while( true );
}


