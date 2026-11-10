/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fabe60; name: FUN_02fabe60
 */


void FUN_02fabe60(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                 undefined8 *param_5,undefined8 *param_6,long *param_7)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  unkbyte9 Var24;
  unkbyte9 Var25;
  unkbyte9 Var26;
  undefined *puVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  uint *puVar31;
  unkbyte9 *pVar32;
  unkbyte9 *pVar33;
  long lVar34;
  long *plVar35;
  int iVar36;
  uint uVar37;
  float fVar38;
  float fVar42;
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  float fVar43;
  undefined1 auVar41 [16];
  float fVar44;
  float fVar45;
  float fVar47;
  float fVar48;
  undefined1 auVar46 [16];
  float fVar49;
  int iVar50;
  float fVar51;
  int iVar54;
  int iVar55;
  undefined1 auVar52 [12];
  undefined1 auVar53 [16];
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  int iVar64;
  int iVar66;
  int iVar67;
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
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
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined2 local_a70 [2];
  undefined8 local_a6c;
  undefined4 local_a64;
  undefined8 local_a60;
  undefined8 local_a58;
  long lStack_a50;
  uint local_a48;
  undefined8 local_a40;
  undefined2 local_a38 [2];
  undefined8 local_a34;
  undefined4 local_a2c;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined4 local_a10;
  undefined8 local_a08;
  undefined2 local_a00;
  undefined2 uStack_9fe;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 local_9f4;
  undefined2 local_9f0;
  undefined2 uStack_9ee;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 local_9e4;
  undefined1 auStack_9e0 [8];
  undefined8 uStack_9d8;
  undefined1 auStack_9d0 [8];
  undefined8 uStack_9c8;
  uint auStack_9c0 [568];
  int local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 local_c0;
  undefined4 local_bc;
  long *plStack_b0;
  undefined1 local_a0 [16];
  undefined2 local_90;
  undefined4 local_8c;
  int local_80;
  int local_7c;
  
  FUN_02fa7314(auStack_9e0,param_4,param_3,param_3 + 2);
  puVar27 = PTR_DAT_043723a0;
  iVar36 = local_e0;
  do {
    do {
      while( true ) {
        while( true ) {
          if (iVar36 == 0) {
            return;
          }
          lVar34 = (long)iVar36 + -1;
          uVar2 = auStack_9c0[lVar34 * 0xc];
          uVar3 = auStack_9c0[lVar34 * 0xc + 1];
          uVar4 = auStack_9c0[lVar34 * 0xc + 2];
          local_e0 = (int)lVar34;
          if (uVar2 == 0) break;
          lVar30 = lVar34 * 0x30;
          pVar32 = (unkbyte9 *)(auStack_9e0 + lVar30);
          pVar33 = (unkbyte9 *)(auStack_9d0 + lVar30);
          fVar38 = *(float *)(auStack_9e0 + lVar30 + 4);
          fVar45 = *(float *)(auStack_9d0 + lVar30 + 4);
          fVar42 = fVar38;
          fVar43 = fVar38;
          fVar44 = fVar38;
          fVar47 = fVar45;
          fVar48 = fVar45;
          fVar49 = fVar45;
          if ((int)*(uint *)(local_d8 + 0x50) < (int)uVar2) {
            iVar50 = uVar2 + ~*(uint *)(local_d8 + 0x50);
            plVar35 = (long *)(local_d8 + 0x20);
            lVar28 = *plVar35;
            if ((int)uVar3 <
                (int)(uint)*(ushort *)((long)plVar35 + (long)iVar50 * 0x18 + lVar28 + 0x10)) {
              uVar5 = *(ushort *)((long)plVar35 + (long)iVar50 * 0x18 + lVar28 + 0x12);
              if ((int)uVar4 < (int)(uint)uVar5) {
                plVar35 = (long *)((long)plVar35 + (long)iVar50 * 0x18 + lVar28);
                uVar37 = uVar4 + uVar3 * uVar5;
                fVar51 = *(float *)(local_d8 + 0x40);
                puVar6 = (ushort *)
                         ((long)plVar35 +
                         (-(ulong)((uVar37 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                         (ulong)(uVar37 * 4) << 2) + *plVar35);
                auVar41._2_2_ = 0;
                auVar41._0_2_ = *puVar6;
                auVar41._4_2_ = puVar6[1];
                auVar41._6_2_ = 0;
                auVar41._8_2_ = puVar6[2];
                auVar41._10_2_ = 0;
                auVar41._12_2_ = puVar6[3];
                auVar41._14_2_ = 0;
                auVar46._2_2_ = 0;
                auVar46._0_2_ = puVar6[4];
                auVar46._4_2_ = puVar6[5];
                auVar46._6_2_ = 0;
                auVar46._8_2_ = puVar6[6];
                auVar46._10_2_ = 0;
                auVar46._12_2_ = puVar6[7];
                auVar46._14_2_ = 0;
                auVar41 = NEON_ucvtf(auVar41,4);
                auVar46 = NEON_ucvtf(auVar46,4);
                fVar45 = (float)*(undefined8 *)(local_d8 + 0x30);
                fVar38 = fVar45 + auVar41._0_4_ * fVar51;
                fVar47 = (float)((ulong)*(undefined8 *)(local_d8 + 0x30) >> 0x20);
                fVar42 = fVar47 + auVar41._4_4_ * fVar51;
                fVar48 = (float)*(undefined8 *)(local_d8 + 0x38);
                fVar43 = fVar48 + auVar41._8_4_ * fVar51;
                fVar49 = (float)((ulong)*(undefined8 *)(local_d8 + 0x38) >> 0x20);
                fVar44 = fVar49 + auVar41._12_4_ * fVar51;
                fVar45 = fVar45 + auVar46._0_4_ * fVar51;
                fVar47 = fVar47 + auVar46._4_4_ * fVar51;
                fVar48 = fVar48 + auVar46._8_4_ * fVar51;
                fVar49 = fVar49 + auVar46._12_4_ * fVar51;
              }
            }
          }
          uVar1 = *(undefined8 *)(auStack_9d0 + lVar30 + 8);
          uVar69 = (undefined1)((ulong)uVar1 >> 8);
          uVar70 = (undefined1)((ulong)uVar1 >> 0x10);
          uVar71 = (undefined1)((ulong)uVar1 >> 0x18);
          uVar72 = (undefined1)((ulong)uVar1 >> 0x20);
          uVar73 = (undefined1)((ulong)uVar1 >> 0x28);
          uVar74 = (undefined1)((ulong)uVar1 >> 0x30);
          uVar75 = (undefined1)((ulong)uVar1 >> 0x38);
          Var24 = *pVar33;
          uVar15 = *(undefined8 *)(auStack_9e0 + lVar30 + 8);
          uVar76 = (undefined1)((ulong)uVar15 >> 8);
          uVar77 = (undefined1)((ulong)uVar15 >> 0x10);
          uVar78 = (undefined1)((ulong)uVar15 >> 0x18);
          uVar79 = (undefined1)((ulong)uVar15 >> 0x20);
          uVar80 = (undefined1)((ulong)uVar15 >> 0x28);
          uVar81 = (undefined1)((ulong)uVar15 >> 0x30);
          uVar82 = (undefined1)((ulong)uVar15 >> 0x38);
          Var26 = *pVar32;
          Var25 = *pVar32;
          fVar83 = ((float)*(undefined8 *)pVar32 + (float)*(undefined8 *)pVar33) * 0.5;
          fVar84 = ((float)((ulong)*(undefined8 *)pVar32 >> 0x20) +
                   (float)((ulong)*(undefined8 *)pVar33 >> 0x20)) * 0.5;
          fVar85 = ((float)uVar15 + (float)uVar1) * 0.5;
          fVar86 = ((float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar1 >> 0x20)) * 0.5;
          auVar11[9] = uVar76;
          auVar11._0_9_ = *pVar32;
          auVar11[10] = uVar77;
          auVar11[0xb] = uVar78;
          auVar11[0xc] = uVar79;
          auVar11[0xd] = uVar80;
          auVar11[0xe] = uVar81;
          auVar11[0xf] = uVar82;
          auVar16._4_4_ = fVar84;
          auVar16._0_4_ = fVar83;
          auVar16._8_4_ = fVar85;
          auVar16._12_4_ = fVar86;
          auVar87[9] = uVar76;
          auVar87._0_9_ = *pVar32;
          auVar87[10] = uVar77;
          auVar87[0xb] = uVar78;
          auVar87[0xc] = uVar79;
          auVar87[0xd] = uVar80;
          auVar87[0xe] = uVar81;
          auVar87[0xf] = uVar82;
          auVar87 = auVar87 ^ (auVar11 ^ auVar16) & *(undefined1 (*) [16])puVar27;
          uVar2 = uVar2 - 1;
          auVar7[9] = uVar69;
          auVar7._0_9_ = *pVar33;
          auVar7[10] = uVar70;
          auVar7[0xb] = uVar71;
          auVar7[0xc] = uVar72;
          auVar7[0xd] = uVar73;
          auVar7[0xe] = uVar74;
          auVar7[0xf] = uVar75;
          auVar17._4_4_ = fVar84;
          auVar17._0_4_ = fVar83;
          auVar17._8_4_ = fVar85;
          auVar17._12_4_ = fVar86;
          auVar58._4_4_ = fVar84;
          auVar58._0_4_ = fVar83;
          auVar58._8_4_ = fVar85;
          auVar58._12_4_ = fVar86;
          auVar58 = auVar58 ^ (auVar17 ^ auVar7) & *(undefined1 (*) [16])puVar27;
          fVar51 = (float)*param_3;
          iVar50 = -(uint)(fVar51 <= auVar58._0_4_);
          fVar56 = (float)((ulong)*param_3 >> 0x20);
          iVar54 = -(uint)(fVar56 <= fVar45);
          fVar57 = (float)param_3[1];
          iVar55 = -(uint)(fVar57 <= auVar58._8_4_);
          fVar60 = (float)param_3[2];
          iVar64 = -(uint)(auVar87._0_4_ <= fVar60);
          fVar61 = (float)((ulong)param_3[2] >> 0x20);
          iVar66 = -(uint)(fVar38 <= fVar61);
          fVar62 = (float)param_3[3];
          iVar67 = -(uint)(auVar87._8_4_ <= fVar62);
          uVar37 = CONCAT13((byte)((uint)iVar64 >> 0x18) & (byte)((uint)iVar50 >> 0x18),
                            CONCAT12((byte)((uint)iVar64 >> 0x10) & (byte)((uint)iVar50 >> 0x10),
                                     CONCAT11((byte)((uint)iVar64 >> 8) & (byte)((uint)iVar50 >> 8),
                                              (byte)iVar64 & (byte)iVar50)));
          auVar52._0_8_ =
               CONCAT17((byte)((uint)iVar66 >> 0x18) & (byte)((uint)iVar54 >> 0x18),
                        CONCAT16((byte)((uint)iVar66 >> 0x10) & (byte)((uint)iVar54 >> 0x10),
                                 CONCAT15((byte)((uint)iVar66 >> 8) & (byte)((uint)iVar54 >> 8),
                                          CONCAT14((byte)iVar66 & (byte)iVar54,uVar37))));
          auVar52[8] = (byte)iVar67 & (byte)iVar55;
          auVar52[9] = (byte)((uint)iVar67 >> 8) & (byte)((uint)iVar55 >> 8);
          auVar52[10] = (byte)((uint)iVar67 >> 0x10) & (byte)((uint)iVar55 >> 0x10);
          auVar52[0xb] = (byte)((uint)iVar67 >> 0x18) & (byte)((uint)iVar55 >> 0x18);
          auVar12[9] = uVar76;
          auVar12._0_9_ = *pVar32;
          auVar12[10] = uVar77;
          auVar12[0xb] = uVar78;
          auVar12[0xc] = uVar79;
          auVar12[0xd] = uVar80;
          auVar12[0xe] = uVar81;
          auVar12[0xf] = uVar82;
          auVar18._4_4_ = fVar84;
          auVar18._0_4_ = fVar83;
          auVar18._8_4_ = fVar85;
          auVar18._12_4_ = fVar86;
          auVar88[9] = uVar76;
          auVar88._0_9_ = *pVar32;
          auVar88[10] = uVar77;
          auVar88[0xb] = uVar78;
          auVar88[0xc] = uVar79;
          auVar88[0xd] = uVar80;
          auVar88[0xe] = uVar81;
          auVar88[0xf] = uVar82;
          auVar88 = auVar88 ^ (auVar12 ^ auVar18) & *(undefined1 (*) [16])(puVar27 + 0x10);
          auVar8[9] = uVar69;
          auVar8._0_9_ = *pVar33;
          auVar8[10] = uVar70;
          auVar8[0xb] = uVar71;
          auVar8[0xc] = uVar72;
          auVar8[0xd] = uVar73;
          auVar8[0xe] = uVar74;
          auVar8[0xf] = uVar75;
          auVar19._4_4_ = fVar84;
          auVar19._0_4_ = fVar83;
          auVar19._8_4_ = fVar85;
          auVar19._12_4_ = fVar86;
          auVar63._4_4_ = fVar84;
          auVar63._0_4_ = fVar83;
          auVar63._8_4_ = fVar85;
          auVar63._12_4_ = fVar86;
          auVar63 = auVar63 ^ (auVar19 ^ auVar8) & *(undefined1 (*) [16])(puVar27 + 0x10);
          auVar41 = *(undefined1 (*) [16])(puVar27 + 0x40);
          auVar9[9] = uVar69;
          auVar9._0_9_ = *pVar33;
          auVar9[10] = uVar70;
          auVar9[0xb] = uVar71;
          auVar9[0xc] = uVar72;
          auVar9[0xd] = uVar73;
          auVar9[0xe] = uVar74;
          auVar9[0xf] = uVar75;
          auVar20._4_4_ = fVar84;
          auVar20._0_4_ = fVar83;
          auVar20._8_4_ = fVar85;
          auVar20._12_4_ = fVar86;
          auVar65._4_4_ = fVar84;
          auVar65._0_4_ = fVar83;
          auVar65._8_4_ = fVar85;
          auVar65._12_4_ = fVar86;
          auVar65 = auVar65 ^ (auVar20 ^ auVar9) & *(undefined1 (*) [16])(puVar27 + 0x50);
          auVar13[9] = uVar76;
          auVar13._0_9_ = *pVar32;
          auVar13[10] = uVar77;
          auVar13[0xb] = uVar78;
          auVar13[0xc] = uVar79;
          auVar13[0xd] = uVar80;
          auVar13[0xe] = uVar81;
          auVar13[0xf] = uVar82;
          auVar21._4_4_ = fVar84;
          auVar21._0_4_ = fVar83;
          auVar21._8_4_ = fVar85;
          auVar21._12_4_ = fVar86;
          auVar68[9] = uVar76;
          auVar68._0_9_ = *pVar32;
          auVar68[10] = uVar77;
          auVar68[0xb] = uVar78;
          auVar68[0xc] = uVar79;
          auVar68[0xd] = uVar80;
          auVar68[0xe] = uVar81;
          auVar68[0xf] = uVar82;
          auVar68 = auVar68 ^ (auVar13 ^ auVar21) & *(undefined1 (*) [16])(puVar27 + 0x50);
          if ((uVar37 & (uint)((ulong)auVar52._0_8_ >> 0x20) & auVar52._8_4_) != 0) {
            local_e0 = iVar36;
            auStack_9c0[lVar34 * 0xc] = uVar2;
            auStack_9c0[lVar34 * 0xc + 1] = uVar3 << 1;
            auStack_9c0[lVar34 * 0xc + 2] = uVar4 << 1;
            *(long *)(auStack_9e0 + lVar30 + 8) = auVar87._8_8_;
            *(ulong *)pVar32 = CONCAT44(fVar38,auVar87._0_4_);
            *(long *)(auStack_9d0 + lVar30 + 8) = auVar58._8_8_;
            *(ulong *)pVar33 = CONCAT44(fVar45,auVar58._0_4_);
          }
          auVar10[9] = uVar69;
          auVar10._0_9_ = Var24;
          auVar10[10] = uVar70;
          auVar10[0xb] = uVar71;
          auVar10[0xc] = uVar72;
          auVar10[0xd] = uVar73;
          auVar10[0xe] = uVar74;
          auVar10[0xf] = uVar75;
          auVar22._4_4_ = fVar84;
          auVar22._0_4_ = fVar83;
          auVar22._8_4_ = fVar85;
          auVar22._12_4_ = fVar86;
          auVar53._4_4_ = fVar84;
          auVar53._0_4_ = fVar83;
          auVar53._8_4_ = fVar85;
          auVar53._12_4_ = fVar86;
          auVar53 = auVar53 ^ (auVar22 ^ auVar10) & auVar41;
          iVar36 = -(uint)(fVar51 <= auVar63._0_4_);
          iVar50 = -(uint)(fVar56 <= fVar47);
          iVar54 = -(uint)(fVar57 <= auVar63._8_4_);
          auVar14[9] = uVar76;
          auVar14._0_9_ = Var25;
          auVar14[10] = uVar77;
          auVar14[0xb] = uVar78;
          auVar14[0xc] = uVar79;
          auVar14[0xd] = uVar80;
          auVar14[0xe] = uVar81;
          auVar14[0xf] = uVar82;
          auVar23._4_4_ = fVar84;
          auVar23._0_4_ = fVar83;
          auVar23._8_4_ = fVar85;
          auVar23._12_4_ = fVar86;
          auVar59[9] = uVar76;
          auVar59._0_9_ = Var26;
          auVar59[10] = uVar77;
          auVar59[0xb] = uVar78;
          auVar59[0xc] = uVar79;
          auVar59[0xd] = uVar80;
          auVar59[0xe] = uVar81;
          auVar59[0xf] = uVar82;
          auVar59 = auVar59 ^ (auVar14 ^ auVar23) & auVar41;
          iVar55 = -(uint)(auVar88._0_4_ <= fVar60);
          iVar64 = -(uint)(fVar42 <= fVar61);
          iVar66 = -(uint)(auVar88._8_4_ <= fVar62);
          if ((CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar55 >> 0x18),
                        CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar55 >> 0x10),
                                 CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar55 >> 8),
                                          (byte)iVar36 & (byte)iVar55))) &
               CONCAT13((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar64 >> 0x18),
                        CONCAT12((byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar64 >> 0x10),
                                 CONCAT11((byte)((uint)iVar50 >> 8) & (byte)((uint)iVar64 >> 8),
                                          (byte)iVar50 & (byte)iVar64))) &
              CONCAT13((byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar66 >> 0x18),
                       CONCAT12((byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar66 >> 0x10),
                                CONCAT11((byte)((uint)iVar54 >> 8) & (byte)((uint)iVar66 >> 8),
                                         (byte)iVar54 & (byte)iVar66)))) != 0) {
            lVar30 = (long)local_e0;
            lVar34 = lVar30 * 0x30;
            local_e0 = local_e0 + 1;
            auStack_9c0[lVar30 * 0xc] = uVar2;
            auStack_9c0[lVar30 * 0xc + 1] = uVar3 << 1 | 1;
            auStack_9c0[lVar30 * 0xc + 2] = uVar4 << 1;
            *(long *)(auStack_9e0 + lVar34 + 8) = auVar88._8_8_;
            *(ulong *)(auStack_9e0 + lVar34) = CONCAT44(fVar42,auVar88._0_4_);
            *(long *)(auStack_9d0 + lVar34 + 8) = auVar63._8_8_;
            *(ulong *)(auStack_9d0 + lVar34) = CONCAT44(fVar47,auVar63._0_4_);
          }
          iVar36 = -(uint)(fVar51 <= auVar65._0_4_);
          iVar50 = -(uint)(fVar56 <= fVar48);
          iVar54 = -(uint)(fVar57 <= auVar65._8_4_);
          iVar55 = -(uint)(auVar68._0_4_ <= fVar60);
          iVar64 = -(uint)(fVar43 <= fVar61);
          iVar66 = -(uint)(auVar68._8_4_ <= fVar62);
          uVar37 = CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar55 >> 0x18),
                            CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar55 >> 0x10),
                                     CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar55 >> 8),
                                              (byte)iVar36 & (byte)iVar55)));
          auVar39._0_8_ =
               CONCAT17((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar64 >> 0x18),
                        CONCAT16((byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar64 >> 0x10),
                                 CONCAT15((byte)((uint)iVar50 >> 8) & (byte)((uint)iVar64 >> 8),
                                          CONCAT14((byte)iVar50 & (byte)iVar64,uVar37))));
          auVar39[8] = (byte)iVar54 & (byte)iVar66;
          auVar39[9] = (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar66 >> 8);
          auVar39[10] = (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar66 >> 0x10);
          auVar39[0xb] = (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar66 >> 0x18);
          if ((uVar37 & (uint)((ulong)auVar39._0_8_ >> 0x20) & auVar39._8_4_) != 0) {
            lVar30 = (long)local_e0;
            lVar34 = lVar30 * 0x30;
            local_e0 = local_e0 + 1;
            auStack_9c0[lVar30 * 0xc] = uVar2;
            auStack_9c0[lVar30 * 0xc + 1] = uVar3 << 1 | 1;
            *(long *)(auStack_9e0 + lVar34 + 8) = auVar68._8_8_;
            *(ulong *)(auStack_9e0 + lVar34) = CONCAT44(fVar43,auVar68._0_4_);
            *(long *)(auStack_9d0 + lVar34 + 8) = auVar65._8_8_;
            *(ulong *)(auStack_9d0 + lVar34) = CONCAT44(fVar48,auVar65._0_4_);
            auStack_9c0[lVar30 * 0xc + 2] = uVar4 << 1 | 1;
          }
          iVar36 = -(uint)(fVar51 <= auVar53._0_4_);
          iVar50 = -(uint)(fVar56 <= fVar49);
          iVar54 = -(uint)(fVar57 <= auVar53._8_4_);
          iVar55 = -(uint)(auVar59._0_4_ <= fVar60);
          iVar64 = -(uint)(fVar44 <= fVar61);
          iVar66 = -(uint)(auVar59._8_4_ <= fVar62);
          uVar37 = CONCAT13((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar55 >> 0x18),
                            CONCAT12((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar55 >> 0x10),
                                     CONCAT11((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar55 >> 8),
                                              (byte)iVar36 & (byte)iVar55)));
          auVar40._0_8_ =
               CONCAT17((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar64 >> 0x18),
                        CONCAT16((byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar64 >> 0x10),
                                 CONCAT15((byte)((uint)iVar50 >> 8) & (byte)((uint)iVar64 >> 8),
                                          CONCAT14((byte)iVar50 & (byte)iVar64,uVar37))));
          auVar40[8] = (byte)iVar54 & (byte)iVar66;
          auVar40[9] = (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar66 >> 8);
          auVar40[10] = (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar66 >> 0x10);
          auVar40[0xb] = (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar66 >> 0x18);
          iVar36 = local_e0;
          if ((uVar37 & (uint)((ulong)auVar40._0_8_ >> 0x20) & auVar40._8_4_) != 0) {
            lVar30 = (long)local_e0;
            lVar34 = lVar30 * 0x30;
            local_e0 = local_e0 + 1;
            auStack_9c0[lVar30 * 0xc] = uVar2;
            auStack_9c0[lVar30 * 0xc + 1] = uVar3 << 1;
            auStack_9c0[lVar30 * 0xc + 2] = uVar4 << 1 | 1;
            *(long *)(auStack_9e0 + lVar34 + 8) = auVar59._8_8_;
            *(ulong *)(auStack_9e0 + lVar34) = CONCAT44(fVar44,auVar59._0_4_);
            *(long *)(auStack_9d0 + lVar34 + 8) = auVar53._8_8_;
            *(ulong *)(auStack_9d0 + lVar34) = CONCAT44(fVar49,auVar53._0_4_);
            iVar36 = local_e0;
          }
        }
        if ((int)uVar3 < local_80 && (int)uVar4 < local_7c) break;
        iVar36 = local_e0;
      }
      local_e0 = iVar36;
      (**(code **)(*plStack_b0 + 0x28))();
      local_c0 = local_90;
      lVar34 = (long)local_e0 + -1;
      uStack_c8 = local_a0._8_8_;
      local_d0 = local_a0._0_8_;
      local_e0 = (int)lVar34;
      local_bc = local_8c;
      iVar36 = (auStack_9c0[lVar34 * 0xc + 2] << (ulong)(*(int *)(param_4 + 0x60) + 1U & 0x1f)) +
               auStack_9c0[lVar34 * 0xc + 1] * 2;
      uVar2 = -((uint)*(byte *)(param_4 + 0x1c) + *(int *)((long)param_5 + 0x1c));
      uVar3 = (iVar36 + 2 << (ulong)(uVar2 & 0x1f)) - 1U |
              (&DAT_03aa74b0)[*(int *)((long)param_5 + 0x1c)] & *(uint *)(param_5 + 3);
      plVar35 = (long *)*param_1;
      uVar2 = (iVar36 + 1 << (ulong)(uVar2 & 0x1f)) - 1U |
              (&DAT_03aa74b0)[*(int *)((long)param_5 + 0x1c)] & *(uint *)(param_5 + 3);
      if (plVar35 == (long *)0x0) goto LAB_02fac354;
      uVar1 = *param_6;
      local_9f0 = (undefined2)uVar1;
      uStack_9ee = (undefined2)((ulong)uVar1 >> 0x10);
      uStack_9ec = (undefined4)((ulong)uVar1 >> 0x20);
      uStack_9e8 = (undefined4)param_6[1];
      local_9e4 = (undefined4)((ulong)param_6[1] >> 0x20);
      uVar1 = *param_6;
      local_a00 = (undefined2)uVar1;
      uStack_9fe = (undefined2)((ulong)uVar1 >> 0x10);
      uStack_9fc = (undefined4)((ulong)uVar1 >> 0x20);
      uStack_9f8 = (undefined4)param_6[1];
      local_9f4 = (undefined4)((ulong)param_6[1] >> 0x20);
      (**(code **)(*plVar35 + 0x40))
                (plVar35,local_90,6,*param_5,param_5[1],param_4,uVar2,0,&local_9f0);
      (**(code **)(*plVar35 + 0x40))
                (plVar35,local_c0,6,*param_5,param_5[1],param_4,uVar3,0,&local_a00);
      plVar35 = (long *)param_1[1];
      if (plVar35 == (long *)0x0) goto LAB_02fac354;
      local_a38[0] = (undefined2)param_1[2];
      local_a34 = *(undefined8 *)((long)param_1 + 0x14);
      local_a2c = *(undefined4 *)((long)param_1 + 0x1c);
      local_a28 = *param_2;
      local_a20 = param_2[1];
      local_a18 = param_2[2];
      local_a10 = *(undefined4 *)(param_2 + 3);
      local_a08 = 0;
      local_a60 = *param_5;
      local_a58 = param_5[1];
      local_a70[0] = local_9f0;
      local_a6c = CONCAT44(uStack_9e8,uStack_9ec);
      local_a64 = local_9e4;
      local_a40 = 0;
      lStack_a50 = param_4;
      local_a48 = uVar2;
      uVar29 = (**(code **)(*plVar35 + 0x40))(plVar35,6,1,local_a38,local_a70);
      iVar36 = local_e0;
    } while ((uVar29 & 1) == 0);
    local_a70[0] = local_a00;
    *(undefined4 *)((undefined8 *)((ulong)local_a70 | 4) + 1) = local_9f4;
    *(undefined8 *)((ulong)local_a70 | 4) = CONCAT44(uStack_9f8,uStack_9fc);
    local_a48 = uVar3;
    uVar29 = (**(code **)(*(long *)param_1[1] + 0x40))((long *)param_1[1],6,1,local_a38,local_a70);
    iVar36 = local_e0;
    if ((uVar29 & 1) != 0) {
LAB_02fac354:
      puVar31 = (uint *)((long)param_7 + 0xc);
      iVar50 = (int)param_7[1];
      iVar36 = iVar50 + 1;
      lVar34 = *param_7;
      if (iVar50 < (int)(*puVar31 & 0x3fffffff)) {
        iVar54 = iVar50;
      }
      else {
        lVar34 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar36,lVar34,iVar50,puVar31);
        *param_7 = lVar34;
        iVar54 = (int)param_7[1];
      }
      *(uint *)(lVar34 + (long)iVar54 * 4) = uVar2;
      *(int *)(param_7 + 1) = iVar36;
      lVar34 = *param_7;
      if ((int)(*(uint *)((long)param_7 + 0xc) & 0x3fffffff) <= iVar36) {
        lVar34 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar50 + 2,lVar34,iVar36,puVar31);
        *param_7 = lVar34;
        iVar36 = (int)param_7[1];
      }
      *(uint *)(lVar34 + (long)iVar36 * 4) = uVar3;
      *(int *)(param_7 + 1) = iVar50 + 2;
      iVar36 = local_e0;
    }
  } while( true );
}


