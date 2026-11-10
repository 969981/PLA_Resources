/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f78168; name: FUN_02f78168
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f78168(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,uint param_5,
                 int param_6)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  int iVar31;
  uint uVar32;
  int iVar36;
  undefined1 auVar33 [12];
  int iVar35;
  undefined1 auVar34 [16];
  int iVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  undefined1 uVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  byte bVar52;
  undefined1 uVar53;
  byte bVar54;
  byte bVar55;
  undefined1 uVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  undefined1 uVar61;
  byte bVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  byte bVar74;
  undefined1 uVar75;
  byte bVar76;
  byte bVar77;
  undefined1 uVar78;
  byte bVar79;
  int iVar80;
  uint5 uVar81;
  int iVar82;
  int iVar83;
  int iVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar96 [16];
  uint local_1080 [2];
  undefined8 auStack_1078 [255];
  float local_880 [2];
  undefined8 auStack_878 [255];
  uint local_80;
  
  uVar9 = _UNK_03889708;
  uVar8 = _DAT_03889700;
  bVar10 = *(byte *)(param_4 + 0x10);
  bVar11 = *(byte *)(param_4 + 0x11);
  if ((bVar11 & bVar10) == 0) {
    fVar26 = (float)param_3[1];
    fVar18 = (float)*param_3;
    fVar22 = (float)((ulong)*param_3 >> 0x20);
    fVar27 = (float)param_2[1];
    fVar19 = (float)*param_2;
    fVar23 = (float)((ulong)*param_2 >> 0x20);
    fVar28 = (float)param_2[5];
    fVar20 = (float)param_2[4];
    fVar24 = (float)((ulong)param_2[4] >> 0x20);
    lVar12 = *(long *)(param_4 + 0x48);
    fVar21 = (float)*(undefined8 *)(lVar12 + 0x10);
    uVar25 = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x10) >> 0x20);
    local_1080[0] = param_6 << 1;
    local_880[0] = 0.0;
    local_80 = 1;
    fVar29 = fVar21;
    uVar30 = uVar25;
    uVar14 = 1;
    do {
      while( true ) {
        bVar39 = (byte)((ulong)uVar8 >> 8);
        bVar47 = (byte)((ulong)uVar8 >> 0x10);
        bVar58 = (byte)((ulong)uVar8 >> 0x18);
        bVar79 = (byte)((ulong)uVar8 >> 0x20);
        bVar48 = (byte)((ulong)uVar8 >> 0x28);
        bVar51 = (byte)((ulong)uVar8 >> 0x30);
        bVar54 = (byte)((ulong)uVar8 >> 0x38);
        bVar59 = (byte)((ulong)uVar9 >> 8);
        bVar62 = (byte)((ulong)uVar9 >> 0x10);
        bVar65 = (byte)((ulong)uVar9 >> 0x18);
        bVar68 = (byte)((ulong)uVar9 >> 0x20);
        bVar70 = (byte)((ulong)uVar9 >> 0x28);
        bVar73 = (byte)((ulong)uVar9 >> 0x30);
        bVar76 = (byte)((ulong)uVar9 >> 0x38);
        if ((param_5 & 1) != 0) break;
        lVar13 = (long)(int)uVar14 + -1;
        local_80 = (uint)lVar13;
        fVar92 = local_880[lVar13];
        uVar32 = local_1080[lVar13];
LAB_02f782c0:
        if ((uVar32 & 1) == 0) {
          puVar2 = (undefined8 *)((long)param_1 + (ulong)(uVar32 >> 1) * 0x80 + *param_1);
          fVar92 = (float)*puVar2;
          fVar93 = (float)((ulong)*puVar2 >> 0x20);
          fVar94 = (float)puVar2[1];
          fVar95 = (float)((ulong)puVar2[1] >> 0x20);
          iVar31 = -(uint)(fVar92 <= *(float *)(puVar2 + 2));
          iVar35 = -(uint)(fVar93 <= *(float *)((long)puVar2 + 0x14));
          iVar36 = -(uint)(fVar94 <= *(float *)(puVar2 + 3));
          iVar37 = -(uint)(fVar95 <= *(float *)((long)puVar2 + 0x1c));
          auVar87._0_4_ = fVar20 * ((fVar92 - fVar18) - fVar19);
          auVar87._4_4_ = fVar20 * ((fVar93 - fVar18) - fVar19);
          auVar87._8_4_ = fVar20 * ((fVar94 - fVar18) - fVar19);
          auVar87._12_4_ = fVar20 * ((fVar95 - fVar18) - fVar19);
          auVar85._0_4_ = fVar20 * ((fVar18 + *(float *)(puVar2 + 2)) - fVar19);
          auVar85._4_4_ = fVar20 * ((fVar18 + *(float *)((long)puVar2 + 0x14)) - fVar19);
          auVar85._8_4_ = fVar20 * ((fVar18 + *(float *)(puVar2 + 3)) - fVar19);
          auVar85._12_4_ = fVar20 * ((fVar18 + *(float *)((long)puVar2 + 0x1c)) - fVar19);
          auVar88._0_4_ = fVar24 * ((*(float *)(puVar2 + 4) - fVar22) - fVar23);
          auVar88._4_4_ = fVar24 * ((*(float *)((long)puVar2 + 0x24) - fVar22) - fVar23);
          auVar88._8_4_ = fVar24 * ((*(float *)(puVar2 + 5) - fVar22) - fVar23);
          auVar88._12_4_ = fVar24 * ((*(float *)((long)puVar2 + 0x2c) - fVar22) - fVar23);
          auVar90._0_4_ = fVar24 * ((fVar22 + *(float *)(puVar2 + 6)) - fVar23);
          auVar90._4_4_ = fVar24 * ((fVar22 + *(float *)((long)puVar2 + 0x34)) - fVar23);
          auVar90._8_4_ = fVar24 * ((fVar22 + *(float *)(puVar2 + 7)) - fVar23);
          auVar90._12_4_ = fVar24 * ((fVar22 + *(float *)((long)puVar2 + 0x3c)) - fVar23);
          auVar91._0_4_ = fVar28 * ((*(float *)(puVar2 + 8) - fVar26) - fVar27);
          auVar91._4_4_ = fVar28 * ((*(float *)((long)puVar2 + 0x44) - fVar26) - fVar27);
          auVar91._8_4_ = fVar28 * ((*(float *)(puVar2 + 9) - fVar26) - fVar27);
          auVar91._12_4_ = fVar28 * ((*(float *)((long)puVar2 + 0x4c) - fVar26) - fVar27);
          fVar92 = fVar28 * ((fVar26 + (float)puVar2[10]) - fVar27);
          fVar93 = fVar28 * ((fVar26 + (float)((ulong)puVar2[10] >> 0x20)) - fVar27);
          fVar94 = fVar28 * ((fVar26 + (float)puVar2[0xb]) - fVar27);
          fVar95 = fVar28 * ((fVar26 + (float)((ulong)puVar2[0xb] >> 0x20)) - fVar27);
          auVar96 = NEON_smin(auVar87,auVar85,4);
          auVar86 = NEON_smax(auVar87,auVar85,4);
          auVar34 = NEON_smin(auVar88,auVar90,4);
          auVar89 = NEON_smax(auVar88,auVar90,4);
          auVar34 = NEON_smax(auVar96,auVar34,4);
          auVar87 = NEON_smin(auVar86,auVar89,4);
          auVar89._4_4_ = fVar93;
          auVar89._0_4_ = fVar92;
          auVar89._8_4_ = fVar94;
          auVar89._12_4_ = fVar95;
          auVar86 = NEON_smin(auVar91,auVar89,4);
          auVar96._4_4_ = fVar93;
          auVar96._0_4_ = fVar92;
          auVar96._8_4_ = fVar94;
          auVar96._12_4_ = fVar95;
          auVar96 = NEON_smax(auVar91,auVar96,4);
          auVar89 = NEON_smax(auVar86,ZEXT816(0),4);
          auVar86._4_4_ = uVar25;
          auVar86._0_4_ = fVar21;
          auVar86._8_4_ = fVar29;
          auVar86._12_4_ = uVar30;
          auVar86 = NEON_smin(auVar96,auVar86,4);
          auVar34 = NEON_smax(auVar34,auVar89,4);
          auVar86 = NEON_smin(auVar87,auVar86,4);
          iVar80 = -(uint)(auVar34._0_4_ <= auVar86._0_4_);
          iVar82 = -(uint)(auVar34._4_4_ <= auVar86._4_4_);
          iVar83 = -(uint)(auVar34._8_4_ <= auVar86._8_4_);
          iVar84 = -(uint)(auVar34._12_4_ <= auVar86._12_4_);
          bVar38 = (byte)iVar80 & (byte)iVar31;
          bVar40 = (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar31 >> 8);
          bVar42 = (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar31 >> 0x10);
          bVar44 = (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar31 >> 0x18);
          bVar46 = (byte)iVar82 & (byte)iVar35;
          bVar49 = (byte)((uint)iVar82 >> 8) & (byte)((uint)iVar35 >> 8);
          bVar52 = (byte)((uint)iVar82 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
          bVar55 = (byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar35 >> 0x18);
          bVar57 = (byte)iVar83 & (byte)iVar36;
          bVar60 = (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar36 >> 8);
          bVar63 = (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar36 >> 0x10);
          bVar66 = (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar36 >> 0x18);
          bVar69 = (byte)iVar84 & (byte)iVar37;
          bVar71 = (byte)((uint)iVar84 >> 8) & (byte)((uint)iVar37 >> 8);
          bVar74 = (byte)((uint)iVar84 >> 0x10) & (byte)((uint)iVar37 >> 0x10);
          bVar77 = (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar37 >> 0x18);
          if (((CONCAT13(bVar44,CONCAT12(bVar42,CONCAT11(bVar40,bVar38))) != 0 ||
               CONCAT13(bVar55,CONCAT12(bVar52,CONCAT11(bVar49,bVar46))) != 0) ||
              CONCAT13(bVar66,CONCAT12(bVar63,CONCAT11(bVar60,bVar57))) != 0) ||
              CONCAT13(bVar77,CONCAT12(bVar74,CONCAT11(bVar71,bVar69))) != 0) {
            uVar15 = (ulong)(uint)(CONCAT13(bVar44 & bVar58,
                                            CONCAT12(bVar42 & bVar47,
                                                     CONCAT11(bVar40 & bVar39,bVar38 & (byte)uVar8))
                                           ) +
                                   CONCAT13(bVar55 & bVar54,
                                            CONCAT12(bVar52 & bVar51,
                                                     CONCAT11(bVar49 & bVar48,bVar46 & bVar79))) +
                                  CONCAT13(bVar66 & bVar65,
                                           CONCAT12(bVar63 & bVar62,
                                                    CONCAT11(bVar60 & bVar59,bVar57 & (byte)uVar9)))
                                  + CONCAT13(bVar77 & bVar76,
                                             CONCAT12(bVar74 & bVar73,
                                                      CONCAT11(bVar71 & bVar70,bVar69 & bVar68))));
            lVar13 = uVar15 * 0x10;
            uVar3 = *(undefined8 *)(&UNK_03aae128 + lVar13);
            uVar41 = (undefined1)((ulong)uVar3 >> 8);
            uVar43 = (undefined1)((ulong)uVar3 >> 0x10);
            uVar45 = (undefined1)((ulong)uVar3 >> 0x18);
            uVar50 = (undefined1)((ulong)uVar3 >> 0x20);
            uVar53 = (undefined1)((ulong)uVar3 >> 0x28);
            uVar56 = (undefined1)((ulong)uVar3 >> 0x30);
            uVar61 = (undefined1)((ulong)uVar3 >> 0x38);
            auVar4[9] = uVar41;
            auVar4._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar13);
            auVar4[10] = uVar43;
            auVar4[0xb] = uVar45;
            auVar4[0xc] = uVar50;
            auVar4[0xd] = uVar53;
            auVar4[0xe] = uVar56;
            auVar4[0xf] = uVar61;
            auVar86 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar2 + 0xc),auVar4);
            auVar5[9] = uVar41;
            auVar5._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar13);
            auVar5[10] = uVar43;
            auVar5[0xb] = uVar45;
            auVar5[0xc] = uVar50;
            auVar5[0xd] = uVar53;
            auVar5[0xe] = uVar56;
            auVar5[0xf] = uVar61;
            auVar34 = a64_TBL(ZEXT816(0),auVar34,auVar5);
            iVar35 = auVar86._0_4_ << 1;
            uVar41 = (undefined1)((uint)iVar35 >> 8);
            uVar43 = (undefined1)((uint)iVar35 >> 0x10);
            uVar45 = (undefined1)((uint)iVar35 >> 0x18);
            iVar36 = auVar86._4_4_ << 1;
            uVar50 = (undefined1)((uint)iVar36 >> 8);
            uVar53 = (undefined1)((uint)iVar36 >> 0x10);
            uVar56 = (undefined1)((uint)iVar36 >> 0x18);
            iVar37 = auVar86._8_4_ << 1;
            uVar61 = (undefined1)((uint)iVar37 >> 8);
            uVar64 = (undefined1)((uint)iVar37 >> 0x10);
            uVar67 = (undefined1)((uint)iVar37 >> 0x18);
            iVar80 = auVar86._12_4_ << 1;
            uVar72 = (undefined1)((uint)iVar80 >> 8);
            uVar75 = (undefined1)((uint)iVar80 >> 0x10);
            uVar78 = (undefined1)((uint)iVar80 >> 0x18);
            bVar79 = -(*(char *)(puVar2 + 0xe) == '\0');
            iVar31 = *(int *)(&DAT_03aadfe0 + uVar15 * 4);
            uVar81 = CONCAT14(~bVar79,(uint)(~bVar79 & 1)) & 0x1ffffffff;
            bVar39 = (byte)uVar81 | (byte)iVar35;
            bVar47 = (byte)(uVar81 >> 0x20) | (byte)iVar36;
            bVar58 = ~bVar79 & 1 | (byte)iVar37;
            bVar79 = ~bVar79 & 1 | (byte)iVar80;
            auVar6[1] = uVar41;
            auVar6[0] = bVar39;
            auVar6[2] = uVar43;
            auVar6[3] = uVar45;
            auVar6[4] = bVar47;
            auVar6[5] = uVar50;
            auVar6[6] = uVar53;
            auVar6[7] = uVar56;
            auVar6[8] = bVar58;
            auVar6[9] = uVar61;
            auVar6[10] = uVar64;
            auVar6[0xb] = uVar67;
            auVar6[0xc] = bVar79;
            auVar6[0xd] = uVar72;
            auVar6[0xe] = uVar75;
            auVar6[0xf] = uVar78;
            auVar7[1] = uVar41;
            auVar7[0] = bVar39;
            auVar7[2] = uVar43;
            auVar7[3] = uVar45;
            auVar7[4] = bVar47;
            auVar7[5] = uVar50;
            auVar7[6] = uVar53;
            auVar7[7] = uVar56;
            auVar7[8] = bVar58;
            auVar7[9] = uVar61;
            auVar7[10] = uVar64;
            auVar7[0xb] = uVar67;
            auVar7[0xc] = bVar79;
            auVar7[0xd] = uVar72;
            auVar7[0xe] = uVar75;
            auVar7[0xf] = uVar78;
            auVar86 = NEON_ext(auVar6,auVar7,8,1);
            *(ulong *)(local_1080 + (int)local_80) =
                 CONCAT17(uVar56,CONCAT16(uVar53,CONCAT15(uVar50,CONCAT14(bVar47,CONCAT13(uVar45,
                                                  CONCAT12(uVar43,CONCAT11(uVar41,bVar39)))))));
            *(long *)((long)auStack_1078 + (long)(int)local_80 * 4) = auVar86._0_8_;
            lVar13 = (long)(int)local_80;
            *(long *)((long)auStack_878 + lVar13 * 4) = auVar34._8_8_;
            *(long *)(local_880 + lVar13) = auVar34._0_8_;
            local_80 = local_80 + iVar31;
          }
        }
        else {
          plVar16 = (long *)(*(long *)(param_4 + 8) + 0x38);
          if ((*(uint *)((long)plVar16 + (ulong)(uVar32 >> 6) * 4 + *plVar16) &
              1 << (ulong)(uVar32 >> 1 & 0x1f)) != 0) {
            uVar3 = *(undefined8 *)(lVar12 + 0x10);
            uVar30 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x18);
            *(float *)(*(long *)(param_4 + 0x18) + 0x18) = fVar92;
            FUN_02f7855c(param_4);
            *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x18) = uVar30;
            lVar12 = *(long *)(param_4 + 0x48);
            bVar10 = (float)*(undefined8 *)(lVar12 + 0x10) < (float)uVar3;
            bVar11 = *(byte *)(param_4 + 0x11);
            *(byte *)(param_4 + 0x10) = bVar10;
          }
          fVar21 = (float)*(undefined8 *)(lVar12 + 0x10);
          uVar25 = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x10) >> 0x20);
          fVar29 = fVar21;
          uVar30 = uVar25;
          if ((bVar10 & bVar11) != 0) {
            return;
          }
        }
LAB_02f7848c:
        uVar14 = local_80;
        if (local_80 == 0) {
          return;
        }
      }
      uVar32 = uVar14;
      if (3 < (int)uVar14) {
        uVar32 = 4;
      }
      local_80 = uVar14 - uVar32;
      pauVar1 = (undefined1 (*) [16])(local_880 + (int)local_80);
      if (uVar32 == 4) {
        auVar34 = *pauVar1;
        fVar92 = (float)NEON_fminnmv(auVar34,4);
        iVar31 = -(uint)(auVar34._0_4_ <= fVar92);
        iVar35 = -(uint)(auVar34._4_4_ <= fVar92);
        iVar36 = -(uint)(auVar34._8_4_ <= fVar92);
        iVar37 = -(uint)(auVar34._12_4_ <= fVar92);
        iVar31 = CONCAT13((byte)((uint)iVar31 >> 0x18) & bVar58,
                          CONCAT12((byte)((uint)iVar31 >> 0x10) & bVar47,
                                   CONCAT11((byte)((uint)iVar31 >> 8) & bVar39,
                                            (byte)iVar31 & (byte)uVar8)));
        auVar33._0_8_ =
             CONCAT17((byte)((uint)iVar35 >> 0x18) & bVar54,
                      CONCAT16((byte)((uint)iVar35 >> 0x10) & bVar51,
                               CONCAT15((byte)((uint)iVar35 >> 8) & bVar48,
                                        CONCAT14((byte)iVar35 & bVar79,iVar31))));
        auVar33[8] = (byte)iVar36 & (byte)uVar9;
        auVar33[9] = (byte)((uint)iVar36 >> 8) & bVar59;
        auVar33[10] = (byte)((uint)iVar36 >> 0x10) & bVar62;
        auVar33[0xb] = (byte)((uint)iVar36 >> 0x18) & bVar65;
        auVar34[0xc] = (byte)iVar37 & bVar68;
        auVar34._0_12_ = auVar33;
        auVar34[0xd] = (byte)((uint)iVar37 >> 8) & bVar70;
        auVar34[0xe] = (byte)((uint)iVar37 >> 0x10) & bVar73;
        auVar34[0xf] = (byte)((uint)iVar37 >> 0x18) & bVar76;
        uVar32 = iVar31 + (int)((ulong)auVar33._0_8_ >> 0x20) + auVar33._8_4_ + auVar34._12_4_;
LAB_02f784bc:
        uVar17 = (uint)(char)(&DAT_03aadfc0)[uVar32];
LAB_02f784c0:
        uVar17 = local_80 + uVar17;
      }
      else {
        if (uVar32 == 3) {
          auVar34 = *pauVar1;
          uVar3 = NEON_fminp(auVar34._0_8_,auVar34._0_8_,4);
          fVar92 = auVar34._8_4_;
          uVar3 = NEON_fmin(CONCAT44(fVar92,fVar92),uVar3,4);
          uVar32 = (-(uint)(auVar34._4_4_ <= (float)((ulong)uVar3 >> 0x20)) & 2) +
                   (uint)(auVar34._0_4_ <= (float)uVar3) | -(uint)(fVar92 <= (float)uVar3) & 4;
          goto LAB_02f784bc;
        }
        uVar17 = local_80;
        if (uVar32 == 2) {
          uVar17 = (uint)(local_880[(long)(int)local_80 + 1] <= *(float *)*pauVar1);
          goto LAB_02f784c0;
        }
      }
      if (local_880[(int)uVar17] <= fVar21) {
        uVar32 = local_1080[uVar17];
        fVar92 = local_880[uVar17];
        local_80 = (uint)((long)(int)uVar14 + -1);
        local_880[uVar17] = local_880[(long)(int)uVar14 + -1];
        local_1080[uVar17] = local_1080[(int)local_80];
        if (uVar32 != 0xffffffff) goto LAB_02f782c0;
        goto LAB_02f7848c;
      }
      uVar14 = local_80;
    } while (local_80 != 0);
  }
  return;
}


