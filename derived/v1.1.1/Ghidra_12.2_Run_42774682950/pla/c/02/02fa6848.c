/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa6848; name: FUN_02fa6848
 */


undefined8 FUN_02fa6848(long param_1,long param_2,long param_3,long *param_4)

{
  float *pfVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
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
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  unkbyte9 Var26;
  unkbyte9 Var27;
  unkbyte9 Var28;
  undefined *puVar29;
  undefined *puVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  undefined8 *puVar36;
  undefined8 uVar37;
  uint *puVar38;
  unkbyte9 *pVar39;
  unkbyte9 *pVar40;
  long lVar41;
  long *plVar42;
  int iVar43;
  uint uVar44;
  float fVar45;
  float fVar49;
  undefined1 auVar46 [12];
  undefined1 auVar47 [12];
  float fVar50;
  undefined1 auVar48 [16];
  float fVar51;
  float fVar52;
  float fVar55;
  float fVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  int iVar57;
  float fVar58;
  int iVar61;
  int iVar62;
  undefined1 auVar59 [12];
  undefined1 auVar60 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  int iVar66;
  int iVar68;
  int iVar69;
  undefined1 auVar67 [16];
  undefined1 auVar70 [16];
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
  undefined1 uVar83;
  undefined1 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  long local_a88;
  undefined8 *local_a80;
  undefined8 local_a78;
  undefined8 auStack_a70 [8];
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined1 auStack_9f0 [8];
  undefined8 uStack_9e8;
  undefined1 auStack_9e0 [8];
  undefined8 uStack_9d8;
  uint auStack_9d0 [568];
  int local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ushort local_d0;
  int local_cc;
  long *plStack_c0;
  undefined1 local_b0 [16];
  ushort local_a0;
  int local_9c;
  int local_90;
  int local_8c;
  ulong local_80;
  ulong uStack_78;
  
  local_a80 = (undefined8 *)0x0;
  local_a78 = 0;
  uStack_78 = (ulong)(uint)(float)*(int *)(param_1 + 0x5c);
  local_80 = (ulong)(uint)(float)*(int *)(param_1 + 0x58);
  FUN_02fa7314(auStack_9f0,param_1,&local_a80,&local_80);
  puVar30 = PTR_DAT_043723a0;
  uStack_a28 = *(undefined8 *)(PTR_DAT_043723a0 + 8);
  local_a30 = *(undefined8 *)PTR_DAT_043723a0;
  uStack_a18 = *(undefined8 *)(PTR_DAT_043723a0 + 0x18);
  uStack_a20 = *(undefined8 *)(PTR_DAT_043723a0 + 0x10);
  uStack_a08 = *(undefined8 *)(PTR_DAT_043723a0 + 0x48);
  local_a10 = *(undefined8 *)(PTR_DAT_043723a0 + 0x40);
  uStack_9f8 = SUB168(*(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x50),8);
  uStack_a00 = SUB168(*(undefined1 (*) [16])(PTR_DAT_043723a0 + 0x50),0);
  if (local_f0 != 0) {
    auVar24 = *(undefined1 (*) [16])(param_1 + 0x80);
    auVar25 = *(undefined1 (*) [16])(param_2 + 0x20);
    cVar4 = *(char *)(param_2 + 4);
    do {
      while( true ) {
        iVar43 = local_f0;
        puVar29 = PTR_PTR_0434a080;
        lVar41 = (long)local_f0 + -1;
        uVar34 = auStack_9d0[lVar41 * 0xc];
        uVar33 = auStack_9d0[lVar41 * 0xc + 1];
        uVar3 = auStack_9d0[lVar41 * 0xc + 2];
        iVar57 = (int)lVar41;
        if (uVar34 == 0) break;
        lVar35 = lVar41 * 0x30;
        pVar39 = (unkbyte9 *)(auStack_9f0 + lVar35);
        pVar40 = (unkbyte9 *)(auStack_9e0 + lVar35);
        fVar45 = *(float *)(auStack_9f0 + lVar35 + 4);
        fVar52 = *(float *)(auStack_9e0 + lVar35 + 4);
        fVar49 = fVar45;
        fVar50 = fVar45;
        fVar51 = fVar45;
        fVar55 = fVar52;
        fVar56 = fVar52;
        fVar58 = fVar52;
        if ((int)*(uint *)(local_e8 + 0x50) < (int)uVar34) {
          iVar61 = uVar34 + ~*(uint *)(local_e8 + 0x50);
          plVar42 = (long *)(local_e8 + 0x20);
          lVar32 = *plVar42;
          if ((int)uVar33 <
              (int)(uint)*(ushort *)((long)plVar42 + (long)iVar61 * 0x18 + lVar32 + 0x10)) {
            uVar5 = *(ushort *)((long)plVar42 + (long)iVar61 * 0x18 + lVar32 + 0x12);
            if ((int)uVar3 < (int)(uint)uVar5) {
              plVar42 = (long *)((long)plVar42 + (long)iVar61 * 0x18 + lVar32);
              uVar44 = uVar3 + uVar33 * uVar5;
              fVar58 = *(float *)(local_e8 + 0x40);
              puVar6 = (ushort *)
                       ((long)plVar42 +
                       (-(ulong)((uVar44 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                       (ulong)(uVar44 * 4) << 2) + *plVar42);
              auVar48._2_2_ = 0;
              auVar48._0_2_ = *puVar6;
              auVar48._4_2_ = puVar6[1];
              auVar48._6_2_ = 0;
              auVar48._8_2_ = puVar6[2];
              auVar48._10_2_ = 0;
              auVar48._12_2_ = puVar6[3];
              auVar48._14_2_ = 0;
              auVar53._2_2_ = 0;
              auVar53._0_2_ = puVar6[4];
              auVar53._4_2_ = puVar6[5];
              auVar53._6_2_ = 0;
              auVar53._8_2_ = puVar6[6];
              auVar53._10_2_ = 0;
              auVar53._12_2_ = puVar6[7];
              auVar53._14_2_ = 0;
              auVar48 = NEON_ucvtf(auVar48,4);
              auVar54 = NEON_ucvtf(auVar53,4);
              fVar45 = *(float *)(local_e8 + 0x30) + auVar48._0_4_ * fVar58;
              fVar49 = *(float *)(local_e8 + 0x34) + auVar48._4_4_ * fVar58;
              fVar50 = *(float *)(local_e8 + 0x38) + auVar48._8_4_ * fVar58;
              fVar51 = *(float *)(local_e8 + 0x3c) + auVar48._12_4_ * fVar58;
              fVar52 = *(float *)(local_e8 + 0x30) + auVar54._0_4_ * fVar58;
              fVar55 = *(float *)(local_e8 + 0x34) + auVar54._4_4_ * fVar58;
              fVar56 = *(float *)(local_e8 + 0x38) + auVar54._8_4_ * fVar58;
              fVar58 = *(float *)(local_e8 + 0x3c) + auVar54._12_4_ * fVar58;
            }
          }
        }
        local_f0 = iVar57;
        uVar37 = *(undefined8 *)(auStack_9e0 + lVar35 + 8);
        uVar71 = (undefined1)((ulong)uVar37 >> 8);
        uVar72 = (undefined1)((ulong)uVar37 >> 0x10);
        uVar73 = (undefined1)((ulong)uVar37 >> 0x18);
        uVar74 = (undefined1)((ulong)uVar37 >> 0x20);
        uVar75 = (undefined1)((ulong)uVar37 >> 0x28);
        uVar76 = (undefined1)((ulong)uVar37 >> 0x30);
        uVar77 = (undefined1)((ulong)uVar37 >> 0x38);
        Var26 = *pVar40;
        uVar15 = *(undefined8 *)(auStack_9f0 + lVar35 + 8);
        uVar78 = (undefined1)((ulong)uVar15 >> 8);
        uVar79 = (undefined1)((ulong)uVar15 >> 0x10);
        uVar80 = (undefined1)((ulong)uVar15 >> 0x18);
        uVar81 = (undefined1)((ulong)uVar15 >> 0x20);
        uVar82 = (undefined1)((ulong)uVar15 >> 0x28);
        uVar83 = (undefined1)((ulong)uVar15 >> 0x30);
        uVar84 = (undefined1)((ulong)uVar15 >> 0x38);
        Var28 = *pVar39;
        Var27 = *pVar39;
        fVar85 = ((float)*(undefined8 *)pVar39 + (float)*(undefined8 *)pVar40) * 0.5;
        fVar86 = ((float)((ulong)*(undefined8 *)pVar39 >> 0x20) +
                 (float)((ulong)*(undefined8 *)pVar40 >> 0x20)) * 0.5;
        fVar87 = ((float)uVar15 + (float)uVar37) * 0.5;
        fVar88 = ((float)((ulong)uVar15 >> 0x20) + (float)((ulong)uVar37 >> 0x20)) * 0.5;
        auVar11[9] = uVar78;
        auVar11._0_9_ = *pVar39;
        auVar11[10] = uVar79;
        auVar11[0xb] = uVar80;
        auVar11[0xc] = uVar81;
        auVar11[0xd] = uVar82;
        auVar11[0xe] = uVar83;
        auVar11[0xf] = uVar84;
        auVar16._4_4_ = fVar86;
        auVar16._0_4_ = fVar85;
        auVar16._8_4_ = fVar87;
        auVar16._12_4_ = fVar88;
        auVar90[9] = uVar78;
        auVar90._0_9_ = *pVar39;
        auVar90[10] = uVar79;
        auVar90[0xb] = uVar80;
        auVar90[0xc] = uVar81;
        auVar90[0xd] = uVar82;
        auVar90[0xe] = uVar83;
        auVar90[0xf] = uVar84;
        auVar90 = auVar90 ^ (auVar11 ^ auVar16) & *(undefined1 (*) [16])puVar30;
        uVar34 = uVar34 - 1;
        auVar7[9] = uVar71;
        auVar7._0_9_ = *pVar40;
        auVar7[10] = uVar72;
        auVar7[0xb] = uVar73;
        auVar7[0xc] = uVar74;
        auVar7[0xd] = uVar75;
        auVar7[0xe] = uVar76;
        auVar7[0xf] = uVar77;
        auVar17._4_4_ = fVar86;
        auVar17._0_4_ = fVar85;
        auVar17._8_4_ = fVar87;
        auVar17._12_4_ = fVar88;
        auVar63._4_4_ = fVar86;
        auVar63._0_4_ = fVar85;
        auVar63._8_4_ = fVar87;
        auVar63._12_4_ = fVar88;
        auVar63 = auVar63 ^ (auVar17 ^ auVar7) & *(undefined1 (*) [16])puVar30;
        iVar66 = -(uint)(auVar90._0_4_ <= 3.40282e+38);
        iVar68 = -(uint)(fVar45 <= 3.40282e+38);
        iVar69 = -(uint)(auVar90._8_4_ <= 3.40282e+38);
        iVar57 = -(uint)(-3.40282e+38 <= auVar63._0_4_);
        iVar61 = -(uint)(-3.40282e+38 <= fVar52);
        iVar62 = -(uint)(-3.40282e+38 <= auVar63._8_4_);
        uVar44 = CONCAT13((byte)((uint)iVar66 >> 0x18) & (byte)((uint)iVar57 >> 0x18),
                          CONCAT12((byte)((uint)iVar66 >> 0x10) & (byte)((uint)iVar57 >> 0x10),
                                   CONCAT11((byte)((uint)iVar66 >> 8) & (byte)((uint)iVar57 >> 8),
                                            (byte)iVar66 & (byte)iVar57)));
        auVar59._0_8_ =
             CONCAT17((byte)((uint)iVar68 >> 0x18) & (byte)((uint)iVar61 >> 0x18),
                      CONCAT16((byte)((uint)iVar68 >> 0x10) & (byte)((uint)iVar61 >> 0x10),
                               CONCAT15((byte)((uint)iVar68 >> 8) & (byte)((uint)iVar61 >> 8),
                                        CONCAT14((byte)iVar68 & (byte)iVar61,uVar44))));
        auVar59[8] = (byte)iVar69 & (byte)iVar62;
        auVar59[9] = (byte)((uint)iVar69 >> 8) & (byte)((uint)iVar62 >> 8);
        auVar59[10] = (byte)((uint)iVar69 >> 0x10) & (byte)((uint)iVar62 >> 0x10);
        auVar59[0xb] = (byte)((uint)iVar69 >> 0x18) & (byte)((uint)iVar62 >> 0x18);
        auVar12[9] = uVar78;
        auVar12._0_9_ = *pVar39;
        auVar12[10] = uVar79;
        auVar12[0xb] = uVar80;
        auVar12[0xc] = uVar81;
        auVar12[0xd] = uVar82;
        auVar12[0xe] = uVar83;
        auVar12[0xf] = uVar84;
        auVar18._4_4_ = fVar86;
        auVar18._0_4_ = fVar85;
        auVar18._8_4_ = fVar87;
        auVar18._12_4_ = fVar88;
        auVar89[9] = uVar78;
        auVar89._0_9_ = *pVar39;
        auVar89[10] = uVar79;
        auVar89[0xb] = uVar80;
        auVar89[0xc] = uVar81;
        auVar89[0xd] = uVar82;
        auVar89[0xe] = uVar83;
        auVar89[0xf] = uVar84;
        auVar89 = auVar89 ^ (auVar12 ^ auVar18) & *(undefined1 (*) [16])(puVar30 + 0x10);
        auVar8[9] = uVar71;
        auVar8._0_9_ = *pVar40;
        auVar8[10] = uVar72;
        auVar8[0xb] = uVar73;
        auVar8[0xc] = uVar74;
        auVar8[0xd] = uVar75;
        auVar8[0xe] = uVar76;
        auVar8[0xf] = uVar77;
        auVar19._4_4_ = fVar86;
        auVar19._0_4_ = fVar85;
        auVar19._8_4_ = fVar87;
        auVar19._12_4_ = fVar88;
        auVar65._4_4_ = fVar86;
        auVar65._0_4_ = fVar85;
        auVar65._8_4_ = fVar87;
        auVar65._12_4_ = fVar88;
        auVar65 = auVar65 ^ (auVar19 ^ auVar8) & *(undefined1 (*) [16])(puVar30 + 0x10);
        auVar48 = *(undefined1 (*) [16])(puVar30 + 0x40);
        auVar9[9] = uVar71;
        auVar9._0_9_ = *pVar40;
        auVar9[10] = uVar72;
        auVar9[0xb] = uVar73;
        auVar9[0xc] = uVar74;
        auVar9[0xd] = uVar75;
        auVar9[0xe] = uVar76;
        auVar9[0xf] = uVar77;
        auVar20._4_4_ = fVar86;
        auVar20._0_4_ = fVar85;
        auVar20._8_4_ = fVar87;
        auVar20._12_4_ = fVar88;
        auVar67._4_4_ = fVar86;
        auVar67._0_4_ = fVar85;
        auVar67._8_4_ = fVar87;
        auVar67._12_4_ = fVar88;
        auVar67 = auVar67 ^ (auVar20 ^ auVar9) & *(undefined1 (*) [16])(puVar30 + 0x50);
        auVar13[9] = uVar78;
        auVar13._0_9_ = *pVar39;
        auVar13[10] = uVar79;
        auVar13[0xb] = uVar80;
        auVar13[0xc] = uVar81;
        auVar13[0xd] = uVar82;
        auVar13[0xe] = uVar83;
        auVar13[0xf] = uVar84;
        auVar21._4_4_ = fVar86;
        auVar21._0_4_ = fVar85;
        auVar21._8_4_ = fVar87;
        auVar21._12_4_ = fVar88;
        auVar70[9] = uVar78;
        auVar70._0_9_ = *pVar39;
        auVar70[10] = uVar79;
        auVar70[0xb] = uVar80;
        auVar70[0xc] = uVar81;
        auVar70[0xd] = uVar82;
        auVar70[0xe] = uVar83;
        auVar70[0xf] = uVar84;
        auVar70 = auVar70 ^ (auVar13 ^ auVar21) & *(undefined1 (*) [16])(puVar30 + 0x50);
        if ((uVar44 & (uint)((ulong)auVar59._0_8_ >> 0x20) & auVar59._8_4_) != 0) {
          local_f0 = iVar43;
          auStack_9d0[lVar41 * 0xc] = uVar34;
          auStack_9d0[lVar41 * 0xc + 1] = uVar33 << 1;
          auStack_9d0[lVar41 * 0xc + 2] = uVar3 << 1;
          *(long *)(auStack_9f0 + lVar35 + 8) = auVar90._8_8_;
          *(ulong *)pVar39 = CONCAT44(fVar45,auVar90._0_4_);
          *(long *)(auStack_9e0 + lVar35 + 8) = auVar63._8_8_;
          *(ulong *)pVar40 = CONCAT44(fVar52,auVar63._0_4_);
        }
        auVar10[9] = uVar71;
        auVar10._0_9_ = Var26;
        auVar10[10] = uVar72;
        auVar10[0xb] = uVar73;
        auVar10[0xc] = uVar74;
        auVar10[0xd] = uVar75;
        auVar10[0xe] = uVar76;
        auVar10[0xf] = uVar77;
        auVar22._4_4_ = fVar86;
        auVar22._0_4_ = fVar85;
        auVar22._8_4_ = fVar87;
        auVar22._12_4_ = fVar88;
        auVar60._4_4_ = fVar86;
        auVar60._0_4_ = fVar85;
        auVar60._8_4_ = fVar87;
        auVar60._12_4_ = fVar88;
        auVar60 = auVar60 ^ (auVar22 ^ auVar10) & auVar48;
        iVar43 = -(uint)(-3.40282e+38 <= auVar65._0_4_);
        iVar57 = -(uint)(-3.40282e+38 <= fVar55);
        iVar61 = -(uint)(-3.40282e+38 <= auVar65._8_4_);
        auVar14[9] = uVar78;
        auVar14._0_9_ = Var27;
        auVar14[10] = uVar79;
        auVar14[0xb] = uVar80;
        auVar14[0xc] = uVar81;
        auVar14[0xd] = uVar82;
        auVar14[0xe] = uVar83;
        auVar14[0xf] = uVar84;
        auVar23._4_4_ = fVar86;
        auVar23._0_4_ = fVar85;
        auVar23._8_4_ = fVar87;
        auVar23._12_4_ = fVar88;
        auVar64[9] = uVar78;
        auVar64._0_9_ = Var28;
        auVar64[10] = uVar79;
        auVar64[0xb] = uVar80;
        auVar64[0xc] = uVar81;
        auVar64[0xd] = uVar82;
        auVar64[0xe] = uVar83;
        auVar64[0xf] = uVar84;
        auVar64 = auVar64 ^ (auVar14 ^ auVar23) & auVar48;
        iVar62 = -(uint)(auVar89._0_4_ <= 3.40282e+38);
        iVar66 = -(uint)(fVar49 <= 3.40282e+38);
        iVar68 = -(uint)(auVar89._8_4_ <= 3.40282e+38);
        if ((CONCAT13((byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar62 >> 0x18),
                      CONCAT12((byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar62 >> 0x10),
                               CONCAT11((byte)((uint)iVar43 >> 8) & (byte)((uint)iVar62 >> 8),
                                        (byte)iVar43 & (byte)iVar62))) &
             CONCAT13((byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar66 >> 0x18),
                      CONCAT12((byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar66 >> 0x10),
                               CONCAT11((byte)((uint)iVar57 >> 8) & (byte)((uint)iVar66 >> 8),
                                        (byte)iVar57 & (byte)iVar66))) &
            CONCAT13((byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar68 >> 0x18),
                     CONCAT12((byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar68 >> 0x10),
                              CONCAT11((byte)((uint)iVar61 >> 8) & (byte)((uint)iVar68 >> 8),
                                       (byte)iVar61 & (byte)iVar68)))) != 0) {
          lVar35 = (long)local_f0;
          lVar41 = lVar35 * 0x30;
          local_f0 = local_f0 + 1;
          auStack_9d0[lVar35 * 0xc] = uVar34;
          auStack_9d0[lVar35 * 0xc + 1] = uVar33 << 1 | 1;
          auStack_9d0[lVar35 * 0xc + 2] = uVar3 << 1;
          *(long *)(auStack_9f0 + lVar41 + 8) = auVar89._8_8_;
          *(ulong *)(auStack_9f0 + lVar41) = CONCAT44(fVar49,auVar89._0_4_);
          *(long *)(auStack_9e0 + lVar41 + 8) = auVar65._8_8_;
          *(ulong *)(auStack_9e0 + lVar41) = CONCAT44(fVar55,auVar65._0_4_);
        }
        iVar43 = -(uint)(-3.40282e+38 <= auVar67._0_4_);
        iVar57 = -(uint)(-3.40282e+38 <= fVar56);
        iVar61 = -(uint)(-3.40282e+38 <= auVar67._8_4_);
        iVar62 = -(uint)(auVar70._0_4_ <= 3.40282e+38);
        iVar66 = -(uint)(fVar50 <= 3.40282e+38);
        iVar68 = -(uint)(auVar70._8_4_ <= 3.40282e+38);
        uVar44 = CONCAT13((byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar62 >> 0x18),
                          CONCAT12((byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar62 >> 0x10),
                                   CONCAT11((byte)((uint)iVar43 >> 8) & (byte)((uint)iVar62 >> 8),
                                            (byte)iVar43 & (byte)iVar62)));
        auVar46._0_8_ =
             CONCAT17((byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar66 >> 0x18),
                      CONCAT16((byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar66 >> 0x10),
                               CONCAT15((byte)((uint)iVar57 >> 8) & (byte)((uint)iVar66 >> 8),
                                        CONCAT14((byte)iVar57 & (byte)iVar66,uVar44))));
        auVar46[8] = (byte)iVar61 & (byte)iVar68;
        auVar46[9] = (byte)((uint)iVar61 >> 8) & (byte)((uint)iVar68 >> 8);
        auVar46[10] = (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar68 >> 0x10);
        auVar46[0xb] = (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar68 >> 0x18);
        if ((uVar44 & (uint)((ulong)auVar46._0_8_ >> 0x20) & auVar46._8_4_) != 0) {
          lVar35 = (long)local_f0;
          lVar41 = lVar35 * 0x30;
          local_f0 = local_f0 + 1;
          auStack_9d0[lVar35 * 0xc] = uVar34;
          auStack_9d0[lVar35 * 0xc + 1] = uVar33 << 1 | 1;
          *(long *)(auStack_9f0 + lVar41 + 8) = auVar70._8_8_;
          *(ulong *)(auStack_9f0 + lVar41) = CONCAT44(fVar50,auVar70._0_4_);
          *(long *)(auStack_9e0 + lVar41 + 8) = auVar67._8_8_;
          *(ulong *)(auStack_9e0 + lVar41) = CONCAT44(fVar56,auVar67._0_4_);
          auStack_9d0[lVar35 * 0xc + 2] = uVar3 << 1 | 1;
        }
        iVar43 = -(uint)(-3.40282e+38 <= auVar60._0_4_);
        iVar57 = -(uint)(-3.40282e+38 <= fVar58);
        iVar61 = -(uint)(-3.40282e+38 <= auVar60._8_4_);
        iVar62 = -(uint)(auVar64._0_4_ <= 3.40282e+38);
        iVar66 = -(uint)(fVar51 <= 3.40282e+38);
        iVar68 = -(uint)(auVar64._8_4_ <= 3.40282e+38);
        uVar44 = CONCAT13((byte)((uint)iVar43 >> 0x18) & (byte)((uint)iVar62 >> 0x18),
                          CONCAT12((byte)((uint)iVar43 >> 0x10) & (byte)((uint)iVar62 >> 0x10),
                                   CONCAT11((byte)((uint)iVar43 >> 8) & (byte)((uint)iVar62 >> 8),
                                            (byte)iVar43 & (byte)iVar62)));
        auVar47._0_8_ =
             CONCAT17((byte)((uint)iVar57 >> 0x18) & (byte)((uint)iVar66 >> 0x18),
                      CONCAT16((byte)((uint)iVar57 >> 0x10) & (byte)((uint)iVar66 >> 0x10),
                               CONCAT15((byte)((uint)iVar57 >> 8) & (byte)((uint)iVar66 >> 8),
                                        CONCAT14((byte)iVar57 & (byte)iVar66,uVar44))));
        auVar47[8] = (byte)iVar61 & (byte)iVar68;
        auVar47[9] = (byte)((uint)iVar61 >> 8) & (byte)((uint)iVar68 >> 8);
        auVar47[10] = (byte)((uint)iVar61 >> 0x10) & (byte)((uint)iVar68 >> 0x10);
        auVar47[0xb] = (byte)((uint)iVar61 >> 0x18) & (byte)((uint)iVar68 >> 0x18);
        if ((uVar44 & (uint)((ulong)auVar47._0_8_ >> 0x20) & auVar47._8_4_) != 0) {
          lVar35 = (long)local_f0;
          lVar41 = lVar35 * 0x30;
          local_f0 = local_f0 + 1;
          auStack_9d0[lVar35 * 0xc] = uVar34;
          auStack_9d0[lVar35 * 0xc + 1] = uVar33 << 1;
          auStack_9d0[lVar35 * 0xc + 2] = uVar3 << 1 | 1;
          *(long *)(auStack_9f0 + lVar41 + 8) = auVar64._8_8_;
          *(ulong *)(auStack_9f0 + lVar41) = CONCAT44(fVar51,auVar64._0_4_);
          *(long *)(auStack_9e0 + lVar41 + 8) = auVar60._8_8_;
          *(ulong *)(auStack_9e0 + lVar41) = CONCAT44(fVar58,auVar60._0_4_);
        }
joined_r0x02fa6adc:
        if (local_f0 == 0) {
          return 0;
        }
      }
      if (local_90 <= (int)uVar33 || local_8c <= (int)uVar3) {
        local_f0 = iVar57;
        goto joined_r0x02fa6adc;
      }
      puVar38 = (uint *)(param_3 + 0x24);
      lVar41 = param_3 + 0x34;
      (**(code **)(*plStack_c0 + 0x28))();
      local_d0 = local_a0;
      uStack_d8 = local_b0._8_8_;
      local_e0 = local_b0._0_8_;
      local_cc = local_9c;
      lVar35 = (long)local_f0;
      local_f0 = (int)(lVar35 + -1);
      lVar35 = (lVar35 + -1) * 0x30;
      iVar43 = *(int *)(param_3 + 0x20);
      local_a78 = 0x8000000400000000;
      local_a88 = 0;
      local_a80 = auStack_a70;
      iVar57 = iVar43;
      while( true ) {
        uVar34 = iVar57 + 1;
        uVar33 = *puVar38;
        if (iVar57 < (int)(uVar33 & 0x3fffffff)) {
          lVar32 = *(long *)(param_3 + 0x18);
        }
        else {
          uVar37 = *(undefined8 *)(param_3 + 0x18);
          if (0x3ffffffe < iVar57) {
            FUN_032bd0a8(uVar34);
            uVar33 = *puVar38;
          }
          uVar33 = (uVar33 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar33) {
            uVar33 = 0x3fffffff;
          }
          uVar3 = uVar34;
          if ((int)uVar34 <= (int)uVar33) {
            uVar3 = uVar33;
          }
          lVar32 = FUN_032bd1d4(puVar29,uVar3,0x10,uVar37,iVar57,puVar38);
          iVar57 = *(int *)(param_3 + 0x20);
          *(long *)(param_3 + 0x18) = lVar32;
        }
        uVar31 = local_a78;
        puVar36 = local_a80;
        *(uint *)(param_3 + 0x20) = uVar34;
        pfVar1 = (float *)(lVar32 + (long)iVar57 * 0x10);
        auVar48 = *(undefined1 (*) [16])(auStack_9f0 + lVar35) ^
                  (*(undefined1 (*) [16])(auStack_9f0 + lVar35) ^
                  *(undefined1 (*) [16])(auStack_9e0 + lVar35)) &
                  *(undefined1 (*) [16])(auStack_a70 + local_a88 * 2 + 8);
        iVar57 = (int)local_a88;
        *(long *)(pfVar1 + 2) = auVar48._8_8_;
        *(long *)pfVar1 = auVar48._0_8_;
        if (iVar57 == 1) {
          fVar45 = (float)((ulong)local_e0 >> 0x20);
        }
        else if (iVar57 == 3) {
          fVar45 = (float)((ulong)uStack_d8 >> 0x20);
        }
        else {
          if (iVar57 == 2) {
            uVar37 = uStack_d8;
          }
          else {
            uVar37 = local_e0;
          }
          fVar45 = (float)uVar37;
        }
        fVar52 = auVar24._0_4_ * auVar25._0_4_ * auVar48._0_4_;
        fVar45 = auVar24._4_4_ * auVar25._4_4_ * fVar45;
        fVar49 = auVar24._8_4_ * auVar25._8_4_ * auVar48._8_4_;
        fVar50 = auVar24._12_4_ * auVar25._12_4_ * auVar48._12_4_;
        pfVar1[2] = fVar49;
        pfVar1[3] = fVar50;
        *pfVar1 = fVar52;
        pfVar1[1] = fVar45;
        auVar48 = *(undefined1 (*) [16])(param_2 + 0x40);
        auVar54._0_8_ = CONCAT44(auVar48._4_4_ + fVar45,auVar48._0_4_ + fVar52);
        auVar54._8_4_ = auVar48._8_4_ + fVar49;
        auVar54._12_4_ = auVar48._12_4_ + fVar50;
        *(long *)(pfVar1 + 2) = auVar54._8_8_;
        *(undefined8 *)pfVar1 = auVar54._0_8_;
        uVar34 = (int)local_a78 + 1;
        if ((int)(local_a78._4_4_ & 0x3fffffff) <= (int)local_a78) {
          if (0x3ffffffe < (int)local_a78) {
            FUN_032bd0a8(uVar34);
          }
          uVar33 = (local_a78._4_4_ & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar33) {
            uVar33 = 0x3fffffff;
          }
          uVar3 = uVar34;
          if ((int)uVar34 <= (int)uVar33) {
            uVar3 = uVar33;
          }
          local_a80 = (undefined8 *)
                      FUN_032bd1d4(puVar29,uVar3,0x10,puVar36,uVar31 & 0xffffffff,
                                   (ulong)&local_a80 | 0xc);
        }
        (local_a80 + (long)(int)local_a78 * 2)[1] = *(undefined8 *)(pfVar1 + 2);
        local_a80[(long)(int)local_a78 * 2] = *(undefined8 *)pfVar1;
        local_a78 = CONCAT44(local_a78._4_4_,uVar34);
        if (local_a88 == 3) break;
        local_a88 = local_a88 + 1;
        iVar57 = *(int *)(param_3 + 0x20);
      }
      if (local_cc == 1) {
        uVar34 = (uint)local_d0;
        iVar61 = *(int *)(param_3 + 0x30);
        lVar35 = *(long *)(param_3 + 0x28);
        iVar57 = iVar61 + 1;
        if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) <= iVar61) {
          lVar35 = FUN_02fada68(puVar29,iVar57,lVar35,iVar61,lVar41);
          iVar61 = *(int *)(param_3 + 0x30);
          *(long *)(param_3 + 0x28) = lVar35;
        }
        *(int *)(param_3 + 0x30) = iVar57;
        piVar2 = (int *)(lVar35 + (long)iVar61 * 0x10);
        *piVar2 = iVar43;
        piVar2[1] = iVar43 + 3;
        piVar2[2] = iVar43 + 1;
        piVar2[3] = uVar34;
        uVar34 = (uint)local_d0;
        lVar35 = *(long *)(param_3 + 0x28);
        iVar61 = *(int *)(param_3 + 0x30);
        iVar57 = iVar61 + 1;
        if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) <= iVar61) {
          lVar35 = FUN_02fada68(puVar29,iVar57,lVar35,iVar61,lVar41);
          iVar61 = *(int *)(param_3 + 0x30);
          *(long *)(param_3 + 0x28) = lVar35;
        }
        *(int *)(param_3 + 0x30) = iVar57;
        piVar2 = (int *)(lVar35 + (long)iVar61 * 0x10);
        *piVar2 = iVar43;
        piVar2[1] = iVar43 + 2;
        piVar2[2] = iVar43 + 3;
        piVar2[3] = uVar34;
        if (cVar4 != '\0') {
          puVar38 = (uint *)((long)param_4 + 0xc);
          uVar33 = *puVar38;
          iVar43 = (int)param_4[1];
          uVar34 = iVar43 + 10;
          if ((int)(uVar33 & 0x3fffffff) < (int)uVar34) {
            lVar41 = *param_4;
            if (0x3fffffff < (int)uVar34) {
              FUN_032bd0a8(uVar34);
              uVar33 = *puVar38;
            }
            uVar33 = (uVar33 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar33) {
              uVar33 = 0x3fffffff;
            }
            uVar3 = uVar34;
            if ((int)uVar34 <= (int)uVar33) {
              uVar3 = uVar33;
            }
            lVar41 = FUN_032bd1d4(puVar29,uVar3,0x10,lVar41,(long)iVar43,puVar38);
            *param_4 = lVar41;
          }
          else {
            lVar41 = *param_4;
          }
          *(uint *)(param_4 + 1) = uVar34;
          puVar36 = (undefined8 *)(lVar41 + (long)iVar43 * 0x10);
          uVar37 = *local_a80;
          puVar36[1] = local_a80[1];
          *puVar36 = uVar37;
          uVar37 = local_a80[6];
          puVar36[3] = local_a80[7];
          puVar36[2] = uVar37;
          uVar37 = local_a80[6];
          puVar36[5] = local_a80[7];
          puVar36[4] = uVar37;
          uVar37 = local_a80[2];
          puVar36[7] = local_a80[3];
          puVar36[6] = uVar37;
          uVar37 = local_a80[2];
          puVar36[9] = local_a80[3];
          puVar36[8] = uVar37;
          uVar37 = *local_a80;
          puVar36[0xb] = local_a80[1];
          puVar36[10] = uVar37;
          uVar37 = *local_a80;
          puVar36[0xd] = local_a80[1];
          puVar36[0xc] = uVar37;
          uVar37 = local_a80[4];
          puVar36[0xf] = local_a80[5];
          puVar36[0xe] = uVar37;
          uVar37 = local_a80[4];
          puVar36[0x11] = local_a80[5];
          puVar36[0x10] = uVar37;
          auVar48 = *(undefined1 (*) [16])(local_a80 + 6);
          goto LAB_02fa71a4;
        }
      }
      else {
        uVar34 = (uint)local_d0;
        iVar61 = *(int *)(param_3 + 0x30);
        lVar35 = *(long *)(param_3 + 0x28);
        iVar57 = iVar61 + 1;
        if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) <= iVar61) {
          lVar35 = FUN_02fada68(puVar29,iVar57,lVar35,iVar61,lVar41);
          iVar61 = *(int *)(param_3 + 0x30);
          *(long *)(param_3 + 0x28) = lVar35;
        }
        *(int *)(param_3 + 0x30) = iVar57;
        piVar2 = (int *)(lVar35 + (long)iVar61 * 0x10);
        *piVar2 = iVar43;
        piVar2[1] = iVar43 + 2;
        piVar2[2] = iVar43 + 1;
        piVar2[3] = uVar34;
        uVar34 = (uint)local_d0;
        lVar35 = *(long *)(param_3 + 0x28);
        iVar61 = *(int *)(param_3 + 0x30);
        iVar57 = iVar61 + 1;
        if ((int)(*(uint *)(param_3 + 0x34) & 0x3fffffff) <= iVar61) {
          lVar35 = FUN_02fada68(puVar29,iVar57,lVar35,iVar61,lVar41);
          iVar61 = *(int *)(param_3 + 0x30);
          *(long *)(param_3 + 0x28) = lVar35;
        }
        *(int *)(param_3 + 0x30) = iVar57;
        piVar2 = (int *)(lVar35 + (long)iVar61 * 0x10);
        *piVar2 = iVar43 + 1;
        piVar2[1] = iVar43 + 2;
        piVar2[2] = iVar43 + 3;
        piVar2[3] = uVar34;
        if (cVar4 != '\0') {
          puVar38 = (uint *)((long)param_4 + 0xc);
          uVar33 = *puVar38;
          iVar43 = (int)param_4[1];
          uVar34 = iVar43 + 10;
          if ((int)(uVar33 & 0x3fffffff) < (int)uVar34) {
            lVar41 = *param_4;
            if (0x3fffffff < (int)uVar34) {
              FUN_032bd0a8(uVar34);
              uVar33 = *puVar38;
            }
            uVar33 = (uVar33 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar33) {
              uVar33 = 0x3fffffff;
            }
            uVar3 = uVar34;
            if ((int)uVar34 <= (int)uVar33) {
              uVar3 = uVar33;
            }
            lVar41 = FUN_032bd1d4(puVar29,uVar3,0x10,lVar41,(long)iVar43,puVar38);
            *param_4 = lVar41;
          }
          else {
            lVar41 = *param_4;
          }
          *(uint *)(param_4 + 1) = uVar34;
          puVar36 = (undefined8 *)(lVar41 + (long)iVar43 * 0x10);
          uVar37 = *local_a80;
          puVar36[1] = local_a80[1];
          *puVar36 = uVar37;
          uVar37 = local_a80[4];
          puVar36[3] = local_a80[5];
          puVar36[2] = uVar37;
          uVar37 = local_a80[4];
          puVar36[5] = local_a80[5];
          puVar36[4] = uVar37;
          uVar37 = local_a80[2];
          puVar36[7] = local_a80[3];
          puVar36[6] = uVar37;
          uVar37 = local_a80[2];
          puVar36[9] = local_a80[3];
          puVar36[8] = uVar37;
          uVar37 = *local_a80;
          puVar36[0xb] = local_a80[1];
          puVar36[10] = uVar37;
          uVar37 = local_a80[4];
          puVar36[0xd] = local_a80[5];
          puVar36[0xc] = uVar37;
          uVar37 = local_a80[6];
          puVar36[0xf] = local_a80[7];
          puVar36[0xe] = uVar37;
          uVar37 = local_a80[6];
          puVar36[0x11] = local_a80[7];
          puVar36[0x10] = uVar37;
          auVar48 = *(undefined1 (*) [16])(local_a80 + 2);
LAB_02fa71a4:
          puVar36[0x13] = auVar48._8_8_;
          puVar36[0x12] = auVar48._0_8_;
        }
      }
      uVar31 = local_a78;
      uVar34 = local_a78._4_4_;
      local_a78 = (ulong)local_a78._4_4_ << 0x20;
      if ((-1 < (long)uVar31) && (local_a80 != (undefined8 *)0x0)) {
        FUN_032cf244(puVar29,local_a80,0x10,uVar34 & 0x3fffffff);
      }
    } while (local_f0 != 0);
  }
  return 0;
}


