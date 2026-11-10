/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7673c; name: FUN_02f7673c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f7673c(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,uint param_5,
                 int param_6)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  int iVar29;
  uint uVar30;
  int iVar34;
  int iVar36;
  undefined1 auVar31 [12];
  float fVar33;
  float fVar35;
  float fVar37;
  undefined1 auVar32 [16];
  int iVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  undefined1 uVar42;
  byte bVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 uVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined1 uVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined1 uVar58;
  byte bVar59;
  undefined1 uVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  byte bVar70;
  int iVar71;
  uint5 uVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar88 [16];
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  uint local_1080 [2];
  undefined8 auStack_1078 [255];
  float local_880 [2];
  undefined8 auStack_878 [255];
  uint local_80;
  
  uVar11 = _UNK_03889708;
  uVar10 = _DAT_03889700;
  if ((*(byte *)(param_4 + 0x11) & *(byte *)(param_4 + 0x10)) == 0) {
    fVar24 = (float)param_3[1];
    fVar18 = (float)*param_3;
    fVar21 = (float)((ulong)*param_3 >> 0x20);
    fVar25 = (float)param_2[1];
    fVar19 = (float)*param_2;
    fVar22 = (float)((ulong)*param_2 >> 0x20);
    lVar13 = *(long *)(param_4 + 0x48);
    fVar20 = (float)*(undefined8 *)(lVar13 + 0x10);
    uVar23 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x10) >> 0x20);
    auVar32 = *(undefined1 (*) [16])(param_2 + 4);
    fVar28 = auVar32._0_4_;
    fVar33 = auVar32._4_4_;
    fVar35 = auVar32._8_4_;
    local_1080[0] = param_6 << 1;
    local_880[0] = 0.0;
    local_80 = 1;
    fVar26 = fVar20;
    uVar27 = uVar23;
    uVar14 = 1;
    do {
      while( true ) {
        bVar40 = (byte)((ulong)uVar10 >> 8);
        bVar48 = (byte)((ulong)uVar10 >> 0x10);
        bVar56 = (byte)((ulong)uVar10 >> 0x18);
        bVar70 = (byte)((ulong)uVar10 >> 0x20);
        bVar89 = (byte)((ulong)uVar10 >> 0x28);
        bVar90 = (byte)((ulong)uVar10 >> 0x30);
        bVar91 = (byte)((ulong)uVar10 >> 0x38);
        bVar92 = (byte)((ulong)uVar11 >> 8);
        bVar93 = (byte)((ulong)uVar11 >> 0x10);
        bVar94 = (byte)((ulong)uVar11 >> 0x18);
        bVar95 = (byte)((ulong)uVar11 >> 0x20);
        bVar96 = (byte)((ulong)uVar11 >> 0x28);
        bVar97 = (byte)((ulong)uVar11 >> 0x30);
        bVar98 = (byte)((ulong)uVar11 >> 0x38);
        if ((param_5 & 1) != 0) break;
        lVar15 = (long)(int)uVar14 + -1;
        local_80 = (uint)lVar15;
        fVar37 = local_880[lVar15];
        uVar30 = local_1080[lVar15];
LAB_02f76818:
        if ((uVar30 & 1) == 0) {
          puVar2 = (undefined8 *)((long)param_1 + (ulong)(uVar30 >> 1) * 0x80 + *param_1);
          fVar37 = (float)*puVar2;
          fVar7 = (float)((ulong)*puVar2 >> 0x20);
          fVar8 = (float)puVar2[1];
          fVar9 = (float)((ulong)puVar2[1] >> 0x20);
          auVar83._0_4_ = fVar28 * ((fVar18 + *(float *)(puVar2 + 2)) - fVar19);
          auVar83._4_4_ = fVar28 * ((fVar18 + *(float *)((long)puVar2 + 0x14)) - fVar19);
          auVar83._8_4_ = fVar28 * ((fVar18 + *(float *)(puVar2 + 3)) - fVar19);
          auVar83._12_4_ = fVar28 * ((fVar18 + *(float *)((long)puVar2 + 0x1c)) - fVar19);
          auVar77._0_4_ = fVar33 * ((*(float *)(puVar2 + 4) - fVar21) - fVar22);
          auVar77._4_4_ = fVar33 * ((*(float *)((long)puVar2 + 0x24) - fVar21) - fVar22);
          auVar77._8_4_ = fVar33 * ((*(float *)(puVar2 + 5) - fVar21) - fVar22);
          auVar77._12_4_ = fVar33 * ((*(float *)((long)puVar2 + 0x2c) - fVar21) - fVar22);
          auVar78._0_4_ = fVar28 * ((fVar37 - fVar18) - fVar19);
          auVar78._4_4_ = fVar28 * ((fVar7 - fVar18) - fVar19);
          auVar78._8_4_ = fVar28 * ((fVar8 - fVar18) - fVar19);
          auVar78._12_4_ = fVar28 * ((fVar9 - fVar18) - fVar19);
          auVar88 = NEON_smin(auVar78,auVar83,4);
          auVar79._0_4_ = fVar33 * ((fVar21 + *(float *)(puVar2 + 6)) - fVar22);
          auVar79._4_4_ = fVar33 * ((fVar21 + *(float *)((long)puVar2 + 0x34)) - fVar22);
          auVar79._8_4_ = fVar33 * ((fVar21 + *(float *)(puVar2 + 7)) - fVar22);
          auVar79._12_4_ = fVar33 * ((fVar21 + *(float *)((long)puVar2 + 0x3c)) - fVar22);
          auVar76 = NEON_smax(auVar78,auVar83,4);
          auVar82._0_4_ = fVar35 * ((*(float *)(puVar2 + 8) - fVar24) - fVar25);
          auVar82._4_4_ = fVar35 * ((*(float *)((long)puVar2 + 0x44) - fVar24) - fVar25);
          auVar82._8_4_ = fVar35 * ((*(float *)(puVar2 + 9) - fVar24) - fVar25);
          auVar82._12_4_ = fVar35 * ((*(float *)((long)puVar2 + 0x4c) - fVar24) - fVar25);
          auVar32 = NEON_smin(auVar77,auVar79,4);
          fVar84 = fVar35 * ((fVar24 + (float)puVar2[10]) - fVar25);
          fVar85 = fVar35 * ((fVar24 + (float)((ulong)puVar2[10] >> 0x20)) - fVar25);
          fVar86 = fVar35 * ((fVar24 + (float)puVar2[0xb]) - fVar25);
          fVar87 = fVar35 * ((fVar24 + (float)((ulong)puVar2[0xb] >> 0x20)) - fVar25);
          auVar78 = NEON_smax(auVar77,auVar79,4);
          auVar80._4_4_ = fVar85;
          auVar80._0_4_ = fVar84;
          auVar80._8_4_ = fVar86;
          auVar80._12_4_ = fVar87;
          auVar80 = NEON_smin(auVar82,auVar80,4);
          auVar81._4_4_ = fVar85;
          auVar81._0_4_ = fVar84;
          auVar81._8_4_ = fVar86;
          auVar81._12_4_ = fVar87;
          auVar83 = NEON_smax(auVar82,auVar81,4);
          auVar32 = NEON_smax(auVar88,auVar32,4);
          auVar81 = NEON_smax(auVar80,ZEXT816(0),4);
          auVar80 = NEON_smin(auVar76,auVar78,4);
          auVar76._4_4_ = uVar23;
          auVar76._0_4_ = fVar20;
          auVar76._8_4_ = fVar26;
          auVar76._12_4_ = uVar27;
          auVar76 = NEON_smin(auVar83,auVar76,4);
          iVar29 = -(uint)(fVar37 <= *(float *)(puVar2 + 2));
          iVar34 = -(uint)(fVar7 <= *(float *)((long)puVar2 + 0x14));
          iVar36 = -(uint)(fVar8 <= *(float *)(puVar2 + 3));
          iVar38 = -(uint)(fVar9 <= *(float *)((long)puVar2 + 0x1c));
          auVar32 = NEON_smax(auVar32,auVar81,4);
          auVar76 = NEON_smin(auVar80,auVar76,4);
          iVar71 = -(uint)(auVar32._0_4_ <= auVar76._0_4_);
          iVar73 = -(uint)(auVar32._4_4_ <= auVar76._4_4_);
          iVar74 = -(uint)(auVar32._8_4_ <= auVar76._8_4_);
          iVar75 = -(uint)(auVar32._12_4_ <= auVar76._12_4_);
          bVar39 = (byte)iVar71 & (byte)iVar29;
          bVar41 = (byte)((uint)iVar71 >> 8) & (byte)((uint)iVar29 >> 8);
          bVar43 = (byte)((uint)iVar71 >> 0x10) & (byte)((uint)iVar29 >> 0x10);
          bVar45 = (byte)((uint)iVar71 >> 0x18) & (byte)((uint)iVar29 >> 0x18);
          bVar47 = (byte)iVar73 & (byte)iVar34;
          bVar49 = (byte)((uint)iVar73 >> 8) & (byte)((uint)iVar34 >> 8);
          bVar51 = (byte)((uint)iVar73 >> 0x10) & (byte)((uint)iVar34 >> 0x10);
          bVar53 = (byte)((uint)iVar73 >> 0x18) & (byte)((uint)iVar34 >> 0x18);
          bVar55 = (byte)iVar74 & (byte)iVar36;
          bVar57 = (byte)((uint)iVar74 >> 8) & (byte)((uint)iVar36 >> 8);
          bVar59 = (byte)((uint)iVar74 >> 0x10) & (byte)((uint)iVar36 >> 0x10);
          bVar61 = (byte)((uint)iVar74 >> 0x18) & (byte)((uint)iVar36 >> 0x18);
          bVar63 = (byte)iVar75 & (byte)iVar38;
          bVar64 = (byte)((uint)iVar75 >> 8) & (byte)((uint)iVar38 >> 8);
          bVar66 = (byte)((uint)iVar75 >> 0x10) & (byte)((uint)iVar38 >> 0x10);
          bVar68 = (byte)((uint)iVar75 >> 0x18) & (byte)((uint)iVar38 >> 0x18);
          if (((CONCAT13(bVar45,CONCAT12(bVar43,CONCAT11(bVar41,bVar39))) != 0 ||
               CONCAT13(bVar53,CONCAT12(bVar51,CONCAT11(bVar49,bVar47))) != 0) ||
              CONCAT13(bVar61,CONCAT12(bVar59,CONCAT11(bVar57,bVar55))) != 0) ||
              CONCAT13(bVar68,CONCAT12(bVar66,CONCAT11(bVar64,bVar63))) != 0) {
            uVar16 = (ulong)(uint)(CONCAT13(bVar45 & bVar56,
                                            CONCAT12(bVar43 & bVar48,
                                                     CONCAT11(bVar41 & bVar40,bVar39 & (byte)uVar10)
                                                    )) +
                                   CONCAT13(bVar53 & bVar91,
                                            CONCAT12(bVar51 & bVar90,
                                                     CONCAT11(bVar49 & bVar89,bVar47 & bVar70))) +
                                  CONCAT13(bVar61 & bVar94,
                                           CONCAT12(bVar59 & bVar93,
                                                    CONCAT11(bVar57 & bVar92,bVar55 & (byte)uVar11))
                                          ) +
                                  CONCAT13(bVar68 & bVar98,
                                           CONCAT12(bVar66 & bVar97,
                                                    CONCAT11(bVar64 & bVar96,bVar63 & bVar95))));
            lVar15 = uVar16 * 0x10;
            uVar3 = *(undefined8 *)(&UNK_03aae128 + lVar15);
            uVar42 = (undefined1)((ulong)uVar3 >> 8);
            uVar44 = (undefined1)((ulong)uVar3 >> 0x10);
            uVar46 = (undefined1)((ulong)uVar3 >> 0x18);
            uVar50 = (undefined1)((ulong)uVar3 >> 0x20);
            uVar52 = (undefined1)((ulong)uVar3 >> 0x28);
            uVar54 = (undefined1)((ulong)uVar3 >> 0x30);
            uVar58 = (undefined1)((ulong)uVar3 >> 0x38);
            auVar88[9] = uVar42;
            auVar88._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar15);
            auVar88[10] = uVar44;
            auVar88[0xb] = uVar46;
            auVar88[0xc] = uVar50;
            auVar88[0xd] = uVar52;
            auVar88[0xe] = uVar54;
            auVar88[0xf] = uVar58;
            auVar32 = a64_TBL(ZEXT816(0),auVar32,auVar88);
            auVar4[9] = uVar42;
            auVar4._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar15);
            auVar4[10] = uVar44;
            auVar4[0xb] = uVar46;
            auVar4[0xc] = uVar50;
            auVar4[0xd] = uVar52;
            auVar4[0xe] = uVar54;
            auVar4[0xf] = uVar58;
            auVar76 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar2 + 0xc),auVar4);
            iVar34 = auVar76._0_4_ << 1;
            uVar42 = (undefined1)((uint)iVar34 >> 8);
            uVar44 = (undefined1)((uint)iVar34 >> 0x10);
            uVar46 = (undefined1)((uint)iVar34 >> 0x18);
            iVar36 = auVar76._4_4_ << 1;
            uVar50 = (undefined1)((uint)iVar36 >> 8);
            uVar52 = (undefined1)((uint)iVar36 >> 0x10);
            uVar54 = (undefined1)((uint)iVar36 >> 0x18);
            iVar38 = auVar76._8_4_ << 1;
            uVar58 = (undefined1)((uint)iVar38 >> 8);
            uVar60 = (undefined1)((uint)iVar38 >> 0x10);
            uVar62 = (undefined1)((uint)iVar38 >> 0x18);
            iVar71 = auVar76._12_4_ << 1;
            uVar65 = (undefined1)((uint)iVar71 >> 8);
            uVar67 = (undefined1)((uint)iVar71 >> 0x10);
            uVar69 = (undefined1)((uint)iVar71 >> 0x18);
            bVar70 = -(*(char *)(puVar2 + 0xe) == '\0');
            iVar29 = *(int *)(&DAT_03aadfe0 + uVar16 * 4);
            uVar72 = CONCAT14(~bVar70,(uint)(~bVar70 & 1)) & 0x1ffffffff;
            bVar40 = (byte)uVar72 | (byte)iVar34;
            bVar48 = (byte)(uVar72 >> 0x20) | (byte)iVar36;
            bVar56 = ~bVar70 & 1 | (byte)iVar38;
            bVar70 = ~bVar70 & 1 | (byte)iVar71;
            auVar5[1] = uVar42;
            auVar5[0] = bVar40;
            auVar5[2] = uVar44;
            auVar5[3] = uVar46;
            auVar5[4] = bVar48;
            auVar5[5] = uVar50;
            auVar5[6] = uVar52;
            auVar5[7] = uVar54;
            auVar5[8] = bVar56;
            auVar5[9] = uVar58;
            auVar5[10] = uVar60;
            auVar5[0xb] = uVar62;
            auVar5[0xc] = bVar70;
            auVar5[0xd] = uVar65;
            auVar5[0xe] = uVar67;
            auVar5[0xf] = uVar69;
            auVar6[1] = uVar42;
            auVar6[0] = bVar40;
            auVar6[2] = uVar44;
            auVar6[3] = uVar46;
            auVar6[4] = bVar48;
            auVar6[5] = uVar50;
            auVar6[6] = uVar52;
            auVar6[7] = uVar54;
            auVar6[8] = bVar56;
            auVar6[9] = uVar58;
            auVar6[10] = uVar60;
            auVar6[0xb] = uVar62;
            auVar6[0xc] = bVar70;
            auVar6[0xd] = uVar65;
            auVar6[0xe] = uVar67;
            auVar6[0xf] = uVar69;
            auVar76 = NEON_ext(auVar5,auVar6,8,1);
            *(ulong *)(local_1080 + (int)local_80) =
                 CONCAT17(uVar54,CONCAT16(uVar52,CONCAT15(uVar50,CONCAT14(bVar48,CONCAT13(uVar46,
                                                  CONCAT12(uVar44,CONCAT11(uVar42,bVar40)))))));
            *(long *)((long)auStack_1078 + (long)(int)local_80 * 4) = auVar76._0_8_;
            lVar15 = (long)(int)local_80;
            *(long *)((long)auStack_878 + lVar15 * 4) = auVar32._8_8_;
            *(long *)(local_880 + lVar15) = auVar32._0_8_;
            local_80 = local_80 + iVar29;
          }
        }
        else {
          uVar3 = *(undefined8 *)(lVar13 + 0x10);
          uVar27 = *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x18);
          *(float *)(*(long *)(param_4 + 0x18) + 0x18) = fVar37;
          FUN_02f76af8(param_4);
          *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x18) = uVar27;
          lVar13 = *(long *)(param_4 + 0x48);
          bVar12 = (float)*(undefined8 *)(lVar13 + 0x10) < (float)uVar3;
          *(bool *)(param_4 + 0x10) = bVar12;
          if ((*(byte *)(param_4 + 0x11) & bVar12) != 0) {
            return;
          }
          fVar20 = (float)*(undefined8 *)(lVar13 + 0x10);
          uVar23 = (undefined4)((ulong)*(undefined8 *)(lVar13 + 0x10) >> 0x20);
          fVar26 = fVar20;
          uVar27 = uVar23;
        }
LAB_02f76940:
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
        fVar37 = (float)NEON_fminnmv(auVar32,4);
        iVar29 = -(uint)(auVar32._0_4_ <= fVar37);
        iVar34 = -(uint)(auVar32._4_4_ <= fVar37);
        iVar36 = -(uint)(auVar32._8_4_ <= fVar37);
        iVar38 = -(uint)(auVar32._12_4_ <= fVar37);
        iVar29 = CONCAT13((byte)((uint)iVar29 >> 0x18) & bVar56,
                          CONCAT12((byte)((uint)iVar29 >> 0x10) & bVar48,
                                   CONCAT11((byte)((uint)iVar29 >> 8) & bVar40,
                                            (byte)iVar29 & (byte)uVar10)));
        auVar31._0_8_ =
             CONCAT17((byte)((uint)iVar34 >> 0x18) & bVar91,
                      CONCAT16((byte)((uint)iVar34 >> 0x10) & bVar90,
                               CONCAT15((byte)((uint)iVar34 >> 8) & bVar89,
                                        CONCAT14((byte)iVar34 & bVar70,iVar29))));
        auVar31[8] = (byte)iVar36 & (byte)uVar11;
        auVar31[9] = (byte)((uint)iVar36 >> 8) & bVar92;
        auVar31[10] = (byte)((uint)iVar36 >> 0x10) & bVar93;
        auVar31[0xb] = (byte)((uint)iVar36 >> 0x18) & bVar94;
        auVar32[0xc] = (byte)iVar38 & bVar95;
        auVar32._0_12_ = auVar31;
        auVar32[0xd] = (byte)((uint)iVar38 >> 8) & bVar96;
        auVar32[0xe] = (byte)((uint)iVar38 >> 0x10) & bVar97;
        auVar32[0xf] = (byte)((uint)iVar38 >> 0x18) & bVar98;
        uVar30 = iVar29 + (int)((ulong)auVar31._0_8_ >> 0x20) + auVar31._8_4_ + auVar32._12_4_;
LAB_02f76a08:
        uVar17 = (uint)(char)(&DAT_03aadfc0)[uVar30];
LAB_02f76a0c:
        uVar17 = local_80 + uVar17;
      }
      else {
        if (uVar30 == 3) {
          auVar32 = *pauVar1;
          uVar3 = NEON_fminp(auVar32._0_8_,auVar32._0_8_,4);
          fVar37 = auVar32._8_4_;
          uVar3 = NEON_fmin(CONCAT44(fVar37,fVar37),uVar3,4);
          uVar30 = (-(uint)(auVar32._4_4_ <= (float)((ulong)uVar3 >> 0x20)) & 2) +
                   (uint)(auVar32._0_4_ <= (float)uVar3) | -(uint)(fVar37 <= (float)uVar3) & 4;
          goto LAB_02f76a08;
        }
        uVar17 = local_80;
        if (uVar30 == 2) {
          uVar17 = (uint)(local_880[(long)(int)local_80 + 1] <= *(float *)*pauVar1);
          goto LAB_02f76a0c;
        }
      }
      if (local_880[(int)uVar17] <= fVar20) {
        uVar30 = local_1080[uVar17];
        fVar37 = local_880[uVar17];
        local_80 = (uint)((long)(int)uVar14 + -1);
        local_880[uVar17] = local_880[(long)(int)uVar14 + -1];
        local_1080[uVar17] = local_1080[(int)local_80];
        if (uVar30 != 0xffffffff) goto LAB_02f76818;
        goto LAB_02f76940;
      }
      uVar14 = local_80;
    } while (local_80 != 0);
  }
  return;
}


