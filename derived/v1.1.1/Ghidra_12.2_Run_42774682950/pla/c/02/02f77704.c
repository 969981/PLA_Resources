/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f77704; name: FUN_02f77704
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f77704(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,uint param_5,
                 int param_6)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  int iVar29;
  uint uVar30;
  int iVar34;
  undefined1 auVar31 [12];
  int iVar33;
  undefined1 auVar32 [16];
  int iVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  byte bVar42;
  undefined1 uVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 uVar48;
  byte bVar49;
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  byte bVar72;
  undefined1 uVar73;
  byte bVar74;
  byte bVar75;
  undefined1 uVar76;
  byte bVar77;
  int iVar78;
  uint5 uVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar94 [16];
  uint local_1080 [2];
  undefined8 auStack_1078 [255];
  float local_880 [2];
  undefined8 auStack_878 [255];
  uint local_80;
  
  uVar12 = _UNK_03889708;
  uVar11 = _DAT_03889700;
  if ((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) == 0) {
    fVar25 = (float)param_3[1];
    fVar19 = (float)*param_3;
    fVar22 = (float)((ulong)*param_3 >> 0x20);
    fVar26 = (float)param_2[1];
    fVar20 = (float)*param_2;
    fVar23 = (float)((ulong)*param_2 >> 0x20);
    fVar8 = *(float *)(param_2 + 4);
    fVar9 = *(float *)((long)param_2 + 0x24);
    fVar10 = *(float *)(param_2 + 5);
    uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x48) + 0x10);
    fVar21 = (float)uVar3;
    uVar24 = (undefined4)((ulong)uVar3 >> 0x20);
    local_1080[0] = param_6 << 1;
    local_880[0] = 0.0;
    local_80 = 1;
    fVar27 = fVar21;
    uVar28 = uVar24;
    uVar14 = 1;
    do {
      while( true ) {
        bVar37 = (byte)((ulong)uVar11 >> 8);
        bVar45 = (byte)((ulong)uVar11 >> 0x10);
        bVar56 = (byte)((ulong)uVar11 >> 0x18);
        bVar77 = (byte)((ulong)uVar11 >> 0x20);
        bVar46 = (byte)((ulong)uVar11 >> 0x28);
        bVar49 = (byte)((ulong)uVar11 >> 0x30);
        bVar52 = (byte)((ulong)uVar11 >> 0x38);
        bVar57 = (byte)((ulong)uVar12 >> 8);
        bVar60 = (byte)((ulong)uVar12 >> 0x10);
        bVar63 = (byte)((ulong)uVar12 >> 0x18);
        bVar66 = (byte)((ulong)uVar12 >> 0x20);
        bVar68 = (byte)((ulong)uVar12 >> 0x28);
        bVar71 = (byte)((ulong)uVar12 >> 0x30);
        bVar74 = (byte)((ulong)uVar12 >> 0x38);
        if ((param_5 & 1) != 0) break;
        lVar15 = (long)(int)uVar14 + -1;
        local_80 = (uint)lVar15;
        fVar90 = local_880[lVar15];
        uVar30 = local_1080[lVar15];
LAB_02f77854:
        if ((uVar30 & 1) == 0) {
          puVar2 = (undefined8 *)((long)param_1 + (ulong)(uVar30 >> 1) * 0x80 + *param_1);
          fVar90 = (float)*puVar2;
          fVar91 = (float)((ulong)*puVar2 >> 0x20);
          fVar92 = (float)puVar2[1];
          fVar93 = (float)((ulong)puVar2[1] >> 0x20);
          iVar29 = -(uint)(fVar90 <= *(float *)(puVar2 + 2));
          iVar33 = -(uint)(fVar91 <= *(float *)((long)puVar2 + 0x14));
          iVar34 = -(uint)(fVar92 <= *(float *)(puVar2 + 3));
          iVar35 = -(uint)(fVar93 <= *(float *)((long)puVar2 + 0x1c));
          auVar85._0_4_ = fVar8 * ((fVar90 - fVar19) - fVar20);
          auVar85._4_4_ = fVar8 * ((fVar91 - fVar19) - fVar20);
          auVar85._8_4_ = fVar8 * ((fVar92 - fVar19) - fVar20);
          auVar85._12_4_ = fVar8 * ((fVar93 - fVar19) - fVar20);
          auVar83._0_4_ = fVar8 * ((fVar19 + *(float *)(puVar2 + 2)) - fVar20);
          auVar83._4_4_ = fVar8 * ((fVar19 + *(float *)((long)puVar2 + 0x14)) - fVar20);
          auVar83._8_4_ = fVar8 * ((fVar19 + *(float *)(puVar2 + 3)) - fVar20);
          auVar83._12_4_ = fVar8 * ((fVar19 + *(float *)((long)puVar2 + 0x1c)) - fVar20);
          auVar86._0_4_ = fVar9 * ((*(float *)(puVar2 + 4) - fVar22) - fVar23);
          auVar86._4_4_ = fVar9 * ((*(float *)((long)puVar2 + 0x24) - fVar22) - fVar23);
          auVar86._8_4_ = fVar9 * ((*(float *)(puVar2 + 5) - fVar22) - fVar23);
          auVar86._12_4_ = fVar9 * ((*(float *)((long)puVar2 + 0x2c) - fVar22) - fVar23);
          auVar88._0_4_ = fVar9 * ((fVar22 + *(float *)(puVar2 + 6)) - fVar23);
          auVar88._4_4_ = fVar9 * ((fVar22 + *(float *)((long)puVar2 + 0x34)) - fVar23);
          auVar88._8_4_ = fVar9 * ((fVar22 + *(float *)(puVar2 + 7)) - fVar23);
          auVar88._12_4_ = fVar9 * ((fVar22 + *(float *)((long)puVar2 + 0x3c)) - fVar23);
          auVar89._0_4_ = fVar10 * ((*(float *)(puVar2 + 8) - fVar25) - fVar26);
          auVar89._4_4_ = fVar10 * ((*(float *)((long)puVar2 + 0x44) - fVar25) - fVar26);
          auVar89._8_4_ = fVar10 * ((*(float *)(puVar2 + 9) - fVar25) - fVar26);
          auVar89._12_4_ = fVar10 * ((*(float *)((long)puVar2 + 0x4c) - fVar25) - fVar26);
          fVar90 = fVar10 * ((fVar25 + (float)puVar2[10]) - fVar26);
          fVar91 = fVar10 * ((fVar25 + (float)((ulong)puVar2[10] >> 0x20)) - fVar26);
          fVar92 = fVar10 * ((fVar25 + (float)puVar2[0xb]) - fVar26);
          fVar93 = fVar10 * ((fVar25 + (float)((ulong)puVar2[0xb] >> 0x20)) - fVar26);
          auVar94 = NEON_smin(auVar85,auVar83,4);
          auVar84 = NEON_smax(auVar85,auVar83,4);
          auVar32 = NEON_smin(auVar86,auVar88,4);
          auVar87 = NEON_smax(auVar86,auVar88,4);
          auVar32 = NEON_smax(auVar94,auVar32,4);
          auVar85 = NEON_smin(auVar84,auVar87,4);
          auVar87._4_4_ = fVar91;
          auVar87._0_4_ = fVar90;
          auVar87._8_4_ = fVar92;
          auVar87._12_4_ = fVar93;
          auVar84 = NEON_smin(auVar89,auVar87,4);
          auVar94._4_4_ = fVar91;
          auVar94._0_4_ = fVar90;
          auVar94._8_4_ = fVar92;
          auVar94._12_4_ = fVar93;
          auVar94 = NEON_smax(auVar89,auVar94,4);
          auVar87 = NEON_smax(auVar84,ZEXT816(0),4);
          auVar84._4_4_ = uVar24;
          auVar84._0_4_ = fVar21;
          auVar84._8_4_ = fVar27;
          auVar84._12_4_ = uVar28;
          auVar84 = NEON_smin(auVar94,auVar84,4);
          auVar32 = NEON_smax(auVar32,auVar87,4);
          auVar84 = NEON_smin(auVar85,auVar84,4);
          iVar78 = -(uint)(auVar32._0_4_ <= auVar84._0_4_);
          iVar80 = -(uint)(auVar32._4_4_ <= auVar84._4_4_);
          iVar81 = -(uint)(auVar32._8_4_ <= auVar84._8_4_);
          iVar82 = -(uint)(auVar32._12_4_ <= auVar84._12_4_);
          bVar36 = (byte)iVar78 & (byte)iVar29;
          bVar38 = (byte)((uint)iVar78 >> 8) & (byte)((uint)iVar29 >> 8);
          bVar40 = (byte)((uint)iVar78 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
          bVar42 = (byte)((uint)iVar78 >> 0x18) & (byte)((uint)iVar29 >> 0x18);
          bVar44 = (byte)iVar80 & (byte)iVar33;
          bVar47 = (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar33 >> 8);
          bVar50 = (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar33 >> 0x10);
          bVar53 = (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar33 >> 0x18);
          bVar55 = (byte)iVar81 & (byte)iVar34;
          bVar58 = (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar34 >> 8);
          bVar61 = (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar34 >> 0x10);
          bVar64 = (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar34 >> 0x18);
          bVar67 = (byte)iVar82 & (byte)iVar35;
          bVar69 = (byte)((uint)iVar82 >> 8) & (byte)((uint)iVar35 >> 8);
          bVar72 = (byte)((uint)iVar82 >> 0x10) & (byte)((uint)iVar35 >> 0x10);
          bVar75 = (byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar35 >> 0x18);
          if (((CONCAT13(bVar42,CONCAT12(bVar40,CONCAT11(bVar38,bVar36))) != 0 ||
               CONCAT13(bVar53,CONCAT12(bVar50,CONCAT11(bVar47,bVar44))) != 0) ||
              CONCAT13(bVar64,CONCAT12(bVar61,CONCAT11(bVar58,bVar55))) != 0) ||
              CONCAT13(bVar75,CONCAT12(bVar72,CONCAT11(bVar69,bVar67))) != 0) {
            uVar13 = (ulong)(uint)(CONCAT13(bVar42 & bVar56,
                                            CONCAT12(bVar40 & bVar45,
                                                     CONCAT11(bVar38 & bVar37,bVar36 & (byte)uVar11)
                                                    )) +
                                   CONCAT13(bVar53 & bVar52,
                                            CONCAT12(bVar50 & bVar49,
                                                     CONCAT11(bVar47 & bVar46,bVar44 & bVar77))) +
                                  CONCAT13(bVar64 & bVar63,
                                           CONCAT12(bVar61 & bVar60,
                                                    CONCAT11(bVar58 & bVar57,bVar55 & (byte)uVar12))
                                          ) +
                                  CONCAT13(bVar75 & bVar74,
                                           CONCAT12(bVar72 & bVar71,
                                                    CONCAT11(bVar69 & bVar68,bVar67 & bVar66))));
            lVar15 = uVar13 * 0x10;
            uVar3 = *(undefined8 *)(&UNK_03aae128 + lVar15);
            uVar39 = (undefined1)((ulong)uVar3 >> 8);
            uVar41 = (undefined1)((ulong)uVar3 >> 0x10);
            uVar43 = (undefined1)((ulong)uVar3 >> 0x18);
            uVar48 = (undefined1)((ulong)uVar3 >> 0x20);
            uVar51 = (undefined1)((ulong)uVar3 >> 0x28);
            uVar54 = (undefined1)((ulong)uVar3 >> 0x30);
            uVar59 = (undefined1)((ulong)uVar3 >> 0x38);
            auVar4[9] = uVar39;
            auVar4._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar15);
            auVar4[10] = uVar41;
            auVar4[0xb] = uVar43;
            auVar4[0xc] = uVar48;
            auVar4[0xd] = uVar51;
            auVar4[0xe] = uVar54;
            auVar4[0xf] = uVar59;
            auVar84 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar2 + 0xc),auVar4);
            auVar5[9] = uVar39;
            auVar5._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar15);
            auVar5[10] = uVar41;
            auVar5[0xb] = uVar43;
            auVar5[0xc] = uVar48;
            auVar5[0xd] = uVar51;
            auVar5[0xe] = uVar54;
            auVar5[0xf] = uVar59;
            auVar32 = a64_TBL(ZEXT816(0),auVar32,auVar5);
            iVar33 = auVar84._0_4_ << 1;
            uVar39 = (undefined1)((uint)iVar33 >> 8);
            uVar41 = (undefined1)((uint)iVar33 >> 0x10);
            uVar43 = (undefined1)((uint)iVar33 >> 0x18);
            iVar34 = auVar84._4_4_ << 1;
            uVar48 = (undefined1)((uint)iVar34 >> 8);
            uVar51 = (undefined1)((uint)iVar34 >> 0x10);
            uVar54 = (undefined1)((uint)iVar34 >> 0x18);
            iVar35 = auVar84._8_4_ << 1;
            uVar59 = (undefined1)((uint)iVar35 >> 8);
            uVar62 = (undefined1)((uint)iVar35 >> 0x10);
            uVar65 = (undefined1)((uint)iVar35 >> 0x18);
            iVar78 = auVar84._12_4_ << 1;
            uVar70 = (undefined1)((uint)iVar78 >> 8);
            uVar73 = (undefined1)((uint)iVar78 >> 0x10);
            uVar76 = (undefined1)((uint)iVar78 >> 0x18);
            bVar77 = -(*(char *)(puVar2 + 0xe) == '\0');
            iVar29 = *(int *)(&DAT_03aadfe0 + uVar13 * 4);
            uVar79 = CONCAT14(~bVar77,(uint)(~bVar77 & 1)) & 0x1ffffffff;
            bVar37 = (byte)uVar79 | (byte)iVar33;
            bVar45 = (byte)(uVar79 >> 0x20) | (byte)iVar34;
            bVar56 = ~bVar77 & 1 | (byte)iVar35;
            bVar77 = ~bVar77 & 1 | (byte)iVar78;
            auVar6[1] = uVar39;
            auVar6[0] = bVar37;
            auVar6[2] = uVar41;
            auVar6[3] = uVar43;
            auVar6[4] = bVar45;
            auVar6[5] = uVar48;
            auVar6[6] = uVar51;
            auVar6[7] = uVar54;
            auVar6[8] = bVar56;
            auVar6[9] = uVar59;
            auVar6[10] = uVar62;
            auVar6[0xb] = uVar65;
            auVar6[0xc] = bVar77;
            auVar6[0xd] = uVar70;
            auVar6[0xe] = uVar73;
            auVar6[0xf] = uVar76;
            auVar7[1] = uVar39;
            auVar7[0] = bVar37;
            auVar7[2] = uVar41;
            auVar7[3] = uVar43;
            auVar7[4] = bVar45;
            auVar7[5] = uVar48;
            auVar7[6] = uVar51;
            auVar7[7] = uVar54;
            auVar7[8] = bVar56;
            auVar7[9] = uVar59;
            auVar7[10] = uVar62;
            auVar7[0xb] = uVar65;
            auVar7[0xc] = bVar77;
            auVar7[0xd] = uVar70;
            auVar7[0xe] = uVar73;
            auVar7[0xf] = uVar76;
            auVar84 = NEON_ext(auVar6,auVar7,8,1);
            *(ulong *)(local_1080 + (int)local_80) =
                 CONCAT17(uVar54,CONCAT16(uVar51,CONCAT15(uVar48,CONCAT14(bVar45,CONCAT13(uVar43,
                                                  CONCAT12(uVar41,CONCAT11(uVar39,bVar37)))))));
            *(long *)((long)auStack_1078 + (long)(int)local_80 * 4) = auVar84._0_8_;
            lVar15 = (long)(int)local_80;
            *(long *)((long)auStack_878 + lVar15 * 4) = auVar32._8_8_;
            *(long *)(local_880 + lVar15) = auVar32._0_8_;
            local_80 = local_80 + iVar29;
          }
        }
        else {
          plVar16 = (long *)(*(long *)(param_4 + 8) + 0x28);
          lVar18 = *plVar16;
          lVar15 = 0;
          if (lVar18 != 0) {
            lVar15 = lVar18 + (long)plVar16;
          }
          uVar13 = FUN_02f89744(lVar15,uVar30 >> 1 & 0xffff);
          if ((uVar13 & 1) == 0) {
            lVar15 = *(long *)(param_4 + 0x48);
            bVar37 = *(byte *)(param_4 + 0x10);
          }
          else {
            uVar3 = *(undefined8 *)(*(long *)(param_4 + 0x48) + 0x10);
            uVar28 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x18);
            *(float *)(*(long *)(param_4 + 0x18) + 0x18) = fVar90;
            FUN_02f77b08(param_4,(ulong)(uVar30 >> 1));
            *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x18) = uVar28;
            lVar15 = *(long *)(param_4 + 0x48);
            bVar37 = (float)*(undefined8 *)(lVar15 + 0x10) < (float)uVar3;
            *(byte *)(param_4 + 0x10) = bVar37;
          }
          fVar21 = (float)*(undefined8 *)(lVar15 + 0x10);
          uVar24 = (undefined4)((ulong)*(undefined8 *)(lVar15 + 0x10) >> 0x20);
          fVar27 = fVar21;
          uVar28 = uVar24;
          if ((*(byte *)(param_4 + 0x11) & bVar37) != 0) {
            return;
          }
        }
LAB_02f77a30:
        uVar14 = local_80;
        if (local_80 == 0) {
          return;
        }
      }
      uVar30 = uVar14;
      if (3 < (int)uVar14) {
        uVar30 = 4;
      }
      local_80 = uVar14 - uVar30;
      pauVar1 = (undefined1 (*) [16])(local_880 + (int)local_80);
      if (uVar30 == 4) {
        auVar32 = *pauVar1;
        fVar90 = (float)NEON_fminnmv(auVar32,4);
        iVar29 = -(uint)(auVar32._0_4_ <= fVar90);
        iVar33 = -(uint)(auVar32._4_4_ <= fVar90);
        iVar34 = -(uint)(auVar32._8_4_ <= fVar90);
        iVar35 = -(uint)(auVar32._12_4_ <= fVar90);
        iVar29 = CONCAT13((byte)((uint)iVar29 >> 0x18) & bVar56,
                          CONCAT12((byte)((uint)iVar29 >> 0x10) & bVar45,
                                   CONCAT11((byte)((uint)iVar29 >> 8) & bVar37,
                                            (byte)iVar29 & (byte)uVar11)));
        auVar31._0_8_ =
             CONCAT17((byte)((uint)iVar33 >> 0x18) & bVar52,
                      CONCAT16((byte)((uint)iVar33 >> 0x10) & bVar49,
                               CONCAT15((byte)((uint)iVar33 >> 8) & bVar46,
                                        CONCAT14((byte)iVar33 & bVar77,iVar29))));
        auVar31[8] = (byte)iVar34 & (byte)uVar12;
        auVar31[9] = (byte)((uint)iVar34 >> 8) & bVar57;
        auVar31[10] = (byte)((uint)iVar34 >> 0x10) & bVar60;
        auVar31[0xb] = (byte)((uint)iVar34 >> 0x18) & bVar63;
        auVar32[0xc] = (byte)iVar35 & bVar66;
        auVar32._0_12_ = auVar31;
        auVar32[0xd] = (byte)((uint)iVar35 >> 8) & bVar68;
        auVar32[0xe] = (byte)((uint)iVar35 >> 0x10) & bVar71;
        auVar32[0xf] = (byte)((uint)iVar35 >> 0x18) & bVar74;
        uVar30 = iVar29 + (int)((ulong)auVar31._0_8_ >> 0x20) + auVar31._8_4_ + auVar32._12_4_;
LAB_02f77a60:
        uVar17 = (uint)(char)(&DAT_03aadfc0)[uVar30];
LAB_02f77a6c:
        uVar17 = local_80 + uVar17;
      }
      else {
        if (uVar30 == 3) {
          auVar32 = *pauVar1;
          uVar3 = NEON_fminp(auVar32._0_8_,auVar32._0_8_,4);
          fVar90 = auVar32._8_4_;
          uVar3 = NEON_fmin(CONCAT44(fVar90,fVar90),uVar3,4);
          uVar30 = (-(uint)(auVar32._4_4_ <= (float)((ulong)uVar3 >> 0x20)) & 2) +
                   (uint)(auVar32._0_4_ <= (float)uVar3) | -(uint)(fVar90 <= (float)uVar3) & 4;
          goto LAB_02f77a60;
        }
        uVar17 = local_80;
        if (uVar30 == 2) {
          uVar17 = (uint)(local_880[(long)(int)local_80 + 1] <= *(float *)*pauVar1);
          goto LAB_02f77a6c;
        }
      }
      if (local_880[(int)uVar17] <= fVar21) {
        uVar30 = local_1080[uVar17];
        fVar90 = local_880[uVar17];
        local_80 = (uint)((long)(int)uVar14 + -1);
        local_880[uVar17] = local_880[(long)(int)uVar14 + -1];
        local_1080[uVar17] = local_1080[(int)local_80];
        if (uVar30 != 0xffffffff) goto LAB_02f77854;
        goto LAB_02f77a30;
      }
      uVar14 = local_80;
    } while (local_80 != 0);
  }
  return;
}


