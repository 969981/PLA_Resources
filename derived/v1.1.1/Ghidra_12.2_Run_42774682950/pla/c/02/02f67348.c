/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f67348; name: FUN_02f67348
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f67348(long *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,uint param_5)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  char cVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  long *plVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  int iVar32;
  uint uVar33;
  int iVar37;
  undefined1 auVar34 [12];
  int iVar36;
  undefined1 auVar35 [16];
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
  byte bVar50;
  undefined1 uVar51;
  byte bVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  byte bVar64;
  undefined1 uVar65;
  byte bVar66;
  byte bVar67;
  undefined1 uVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  undefined1 uVar73;
  byte bVar74;
  byte bVar75;
  undefined1 uVar76;
  byte bVar77;
  byte bVar78;
  undefined1 uVar79;
  byte bVar80;
  int iVar81;
  uint5 uVar82;
  int iVar83;
  int iVar84;
  int iVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar97 [16];
  uint local_1090 [2];
  undefined8 auStack_1088 [255];
  float local_890 [2];
  undefined8 auStack_888 [255];
  uint local_90;
  
  uVar16 = _UNK_03889708;
  uVar15 = _DAT_03889700;
  if (*(char *)(param_4 + 4) == '\0') {
    fVar29 = (float)param_3[1];
    fVar25 = (float)*param_3;
    fVar27 = (float)((ulong)*param_3 >> 0x20);
    fVar12 = *param_2;
    fVar13 = param_2[1];
    fVar14 = param_2[2];
    fVar4 = (float)*(undefined8 *)(param_2 + 8);
    fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar10 = (float)*(undefined8 *)(param_2 + 10);
    fVar26 = (float)*param_4;
    uVar28 = (undefined4)((ulong)*param_4 >> 0x20);
    local_1090[0] = 2;
    local_890[0] = 0.0;
    local_90 = 1;
    fVar30 = fVar26;
    uVar31 = uVar28;
    uVar20 = 1;
    do {
      while( true ) {
        bVar40 = (byte)((ulong)uVar15 >> 8);
        bVar48 = (byte)((ulong)uVar15 >> 0x10);
        bVar59 = (byte)((ulong)uVar15 >> 0x18);
        bVar80 = (byte)((ulong)uVar15 >> 0x20);
        bVar49 = (byte)((ulong)uVar15 >> 0x28);
        bVar52 = (byte)((ulong)uVar15 >> 0x30);
        bVar55 = (byte)((ulong)uVar15 >> 0x38);
        bVar60 = (byte)((ulong)uVar16 >> 8);
        bVar63 = (byte)((ulong)uVar16 >> 0x10);
        bVar66 = (byte)((ulong)uVar16 >> 0x18);
        bVar69 = (byte)((ulong)uVar16 >> 0x20);
        bVar71 = (byte)((ulong)uVar16 >> 0x28);
        bVar74 = (byte)((ulong)uVar16 >> 0x30);
        bVar77 = (byte)((ulong)uVar16 >> 0x38);
        if ((param_5 & 1) != 0) break;
        lVar21 = (long)(int)uVar20 + -1;
        local_90 = (uint)lVar21;
        fVar93 = local_890[lVar21];
        uVar33 = local_1090[lVar21];
LAB_02f6749c:
        if ((uVar33 & 1) == 0) {
          puVar2 = (undefined8 *)((long)param_1 + (ulong)(uVar33 >> 1) * 0x80 + *param_1);
          fVar93 = (float)*puVar2;
          fVar94 = (float)((ulong)*puVar2 >> 0x20);
          fVar95 = (float)puVar2[1];
          fVar96 = (float)((ulong)puVar2[1] >> 0x20);
          iVar32 = -(uint)(fVar93 <= *(float *)(puVar2 + 2));
          iVar36 = -(uint)(fVar94 <= *(float *)((long)puVar2 + 0x14));
          iVar37 = -(uint)(fVar95 <= *(float *)(puVar2 + 3));
          iVar38 = -(uint)(fVar96 <= *(float *)((long)puVar2 + 0x1c));
          auVar88._0_4_ = fVar4 * ((fVar93 - fVar25) - fVar12);
          auVar88._4_4_ = fVar4 * ((fVar94 - fVar25) - fVar12);
          auVar88._8_4_ = fVar4 * ((fVar95 - fVar25) - fVar12);
          auVar88._12_4_ = fVar4 * ((fVar96 - fVar25) - fVar12);
          auVar86._0_4_ = fVar4 * ((fVar25 + *(float *)(puVar2 + 2)) - fVar12);
          auVar86._4_4_ = fVar4 * ((fVar25 + *(float *)((long)puVar2 + 0x14)) - fVar12);
          auVar86._8_4_ = fVar4 * ((fVar25 + *(float *)(puVar2 + 3)) - fVar12);
          auVar86._12_4_ = fVar4 * ((fVar25 + *(float *)((long)puVar2 + 0x1c)) - fVar12);
          auVar89._0_4_ = fVar9 * ((*(float *)(puVar2 + 4) - fVar27) - fVar13);
          auVar89._4_4_ = fVar9 * ((*(float *)((long)puVar2 + 0x24) - fVar27) - fVar13);
          auVar89._8_4_ = fVar9 * ((*(float *)(puVar2 + 5) - fVar27) - fVar13);
          auVar89._12_4_ = fVar9 * ((*(float *)((long)puVar2 + 0x2c) - fVar27) - fVar13);
          auVar91._0_4_ = fVar9 * ((fVar27 + *(float *)(puVar2 + 6)) - fVar13);
          auVar91._4_4_ = fVar9 * ((fVar27 + *(float *)((long)puVar2 + 0x34)) - fVar13);
          auVar91._8_4_ = fVar9 * ((fVar27 + *(float *)(puVar2 + 7)) - fVar13);
          auVar91._12_4_ = fVar9 * ((fVar27 + *(float *)((long)puVar2 + 0x3c)) - fVar13);
          auVar92._0_4_ = fVar10 * ((*(float *)(puVar2 + 8) - fVar29) - fVar14);
          auVar92._4_4_ = fVar10 * ((*(float *)((long)puVar2 + 0x44) - fVar29) - fVar14);
          auVar92._8_4_ = fVar10 * ((*(float *)(puVar2 + 9) - fVar29) - fVar14);
          auVar92._12_4_ = fVar10 * ((*(float *)((long)puVar2 + 0x4c) - fVar29) - fVar14);
          fVar93 = fVar10 * ((fVar29 + (float)puVar2[10]) - fVar14);
          fVar94 = fVar10 * ((fVar29 + (float)((ulong)puVar2[10] >> 0x20)) - fVar14);
          fVar95 = fVar10 * ((fVar29 + (float)puVar2[0xb]) - fVar14);
          fVar96 = fVar10 * ((fVar29 + (float)((ulong)puVar2[0xb] >> 0x20)) - fVar14);
          auVar97 = NEON_smin(auVar88,auVar86,4);
          auVar87 = NEON_smax(auVar88,auVar86,4);
          auVar35 = NEON_smin(auVar89,auVar91,4);
          auVar90 = NEON_smax(auVar89,auVar91,4);
          auVar35 = NEON_smax(auVar97,auVar35,4);
          auVar88 = NEON_smin(auVar87,auVar90,4);
          auVar90._4_4_ = fVar94;
          auVar90._0_4_ = fVar93;
          auVar90._8_4_ = fVar95;
          auVar90._12_4_ = fVar96;
          auVar87 = NEON_smin(auVar92,auVar90,4);
          auVar97._4_4_ = fVar94;
          auVar97._0_4_ = fVar93;
          auVar97._8_4_ = fVar95;
          auVar97._12_4_ = fVar96;
          auVar97 = NEON_smax(auVar92,auVar97,4);
          auVar90 = NEON_smax(auVar87,ZEXT816(0),4);
          auVar87._4_4_ = uVar28;
          auVar87._0_4_ = fVar26;
          auVar87._8_4_ = fVar30;
          auVar87._12_4_ = uVar31;
          auVar87 = NEON_smin(auVar97,auVar87,4);
          auVar35 = NEON_smax(auVar35,auVar90,4);
          auVar87 = NEON_smin(auVar88,auVar87,4);
          iVar81 = -(uint)(auVar35._0_4_ <= auVar87._0_4_);
          iVar83 = -(uint)(auVar35._4_4_ <= auVar87._4_4_);
          iVar84 = -(uint)(auVar35._8_4_ <= auVar87._8_4_);
          iVar85 = -(uint)(auVar35._12_4_ <= auVar87._12_4_);
          bVar39 = (byte)iVar81 & (byte)iVar32;
          bVar41 = (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar32 >> 8);
          bVar43 = (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar32 >> 0x10);
          bVar45 = (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar32 >> 0x18);
          bVar47 = (byte)iVar83 & (byte)iVar36;
          bVar50 = (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar36 >> 8);
          bVar53 = (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar36 >> 0x10);
          bVar56 = (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar36 >> 0x18);
          bVar58 = (byte)iVar84 & (byte)iVar37;
          bVar61 = (byte)((uint)iVar84 >> 8) & (byte)((uint)iVar37 >> 8);
          bVar64 = (byte)((uint)iVar84 >> 0x10) & (byte)((uint)iVar37 >> 0x10);
          bVar67 = (byte)((uint)iVar84 >> 0x18) & (byte)((uint)iVar37 >> 0x18);
          bVar70 = (byte)iVar85 & (byte)iVar38;
          bVar72 = (byte)((uint)iVar85 >> 8) & (byte)((uint)iVar38 >> 8);
          bVar75 = (byte)((uint)iVar85 >> 0x10) & (byte)((uint)iVar38 >> 0x10);
          bVar78 = (byte)((uint)iVar85 >> 0x18) & (byte)((uint)iVar38 >> 0x18);
          if (((CONCAT13(bVar45,CONCAT12(bVar43,CONCAT11(bVar41,bVar39))) != 0 ||
               CONCAT13(bVar56,CONCAT12(bVar53,CONCAT11(bVar50,bVar47))) != 0) ||
              CONCAT13(bVar67,CONCAT12(bVar64,CONCAT11(bVar61,bVar58))) != 0) ||
              CONCAT13(bVar78,CONCAT12(bVar75,CONCAT11(bVar72,bVar70))) != 0) {
            uVar18 = (ulong)(uint)(CONCAT13(bVar45 & bVar59,
                                            CONCAT12(bVar43 & bVar48,
                                                     CONCAT11(bVar41 & bVar40,bVar39 & (byte)uVar15)
                                                    )) +
                                   CONCAT13(bVar56 & bVar55,
                                            CONCAT12(bVar53 & bVar52,
                                                     CONCAT11(bVar50 & bVar49,bVar47 & bVar80))) +
                                  CONCAT13(bVar67 & bVar66,
                                           CONCAT12(bVar64 & bVar63,
                                                    CONCAT11(bVar61 & bVar60,bVar58 & (byte)uVar16))
                                          ) +
                                  CONCAT13(bVar78 & bVar77,
                                           CONCAT12(bVar75 & bVar74,
                                                    CONCAT11(bVar72 & bVar71,bVar70 & bVar69))));
            lVar21 = uVar18 * 0x10;
            uVar11 = *(undefined8 *)(&UNK_03aae128 + lVar21);
            uVar42 = (undefined1)((ulong)uVar11 >> 8);
            uVar44 = (undefined1)((ulong)uVar11 >> 0x10);
            uVar46 = (undefined1)((ulong)uVar11 >> 0x18);
            uVar51 = (undefined1)((ulong)uVar11 >> 0x20);
            uVar54 = (undefined1)((ulong)uVar11 >> 0x28);
            uVar57 = (undefined1)((ulong)uVar11 >> 0x30);
            uVar62 = (undefined1)((ulong)uVar11 >> 0x38);
            auVar5[9] = uVar42;
            auVar5._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar21);
            auVar5[10] = uVar44;
            auVar5[0xb] = uVar46;
            auVar5[0xc] = uVar51;
            auVar5[0xd] = uVar54;
            auVar5[0xe] = uVar57;
            auVar5[0xf] = uVar62;
            auVar87 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(puVar2 + 0xc),auVar5);
            auVar6[9] = uVar42;
            auVar6._0_9_ = *(unkbyte9 *)(&DAT_03aae120 + lVar21);
            auVar6[10] = uVar44;
            auVar6[0xb] = uVar46;
            auVar6[0xc] = uVar51;
            auVar6[0xd] = uVar54;
            auVar6[0xe] = uVar57;
            auVar6[0xf] = uVar62;
            auVar35 = a64_TBL(ZEXT816(0),auVar35,auVar6);
            iVar36 = auVar87._0_4_ << 1;
            uVar42 = (undefined1)((uint)iVar36 >> 8);
            uVar44 = (undefined1)((uint)iVar36 >> 0x10);
            uVar46 = (undefined1)((uint)iVar36 >> 0x18);
            iVar37 = auVar87._4_4_ << 1;
            uVar51 = (undefined1)((uint)iVar37 >> 8);
            uVar54 = (undefined1)((uint)iVar37 >> 0x10);
            uVar57 = (undefined1)((uint)iVar37 >> 0x18);
            iVar38 = auVar87._8_4_ << 1;
            uVar62 = (undefined1)((uint)iVar38 >> 8);
            uVar65 = (undefined1)((uint)iVar38 >> 0x10);
            uVar68 = (undefined1)((uint)iVar38 >> 0x18);
            iVar81 = auVar87._12_4_ << 1;
            uVar73 = (undefined1)((uint)iVar81 >> 8);
            uVar76 = (undefined1)((uint)iVar81 >> 0x10);
            uVar79 = (undefined1)((uint)iVar81 >> 0x18);
            bVar80 = -(*(char *)(puVar2 + 0xe) == '\0');
            iVar32 = *(int *)(&DAT_03aadfe0 + uVar18 * 4);
            uVar82 = CONCAT14(~bVar80,(uint)(~bVar80 & 1)) & 0x1ffffffff;
            bVar40 = (byte)uVar82 | (byte)iVar36;
            bVar48 = (byte)(uVar82 >> 0x20) | (byte)iVar37;
            bVar59 = ~bVar80 & 1 | (byte)iVar38;
            bVar80 = ~bVar80 & 1 | (byte)iVar81;
            auVar7[1] = uVar42;
            auVar7[0] = bVar40;
            auVar7[2] = uVar44;
            auVar7[3] = uVar46;
            auVar7[4] = bVar48;
            auVar7[5] = uVar51;
            auVar7[6] = uVar54;
            auVar7[7] = uVar57;
            auVar7[8] = bVar59;
            auVar7[9] = uVar62;
            auVar7[10] = uVar65;
            auVar7[0xb] = uVar68;
            auVar7[0xc] = bVar80;
            auVar7[0xd] = uVar73;
            auVar7[0xe] = uVar76;
            auVar7[0xf] = uVar79;
            auVar8[1] = uVar42;
            auVar8[0] = bVar40;
            auVar8[2] = uVar44;
            auVar8[3] = uVar46;
            auVar8[4] = bVar48;
            auVar8[5] = uVar51;
            auVar8[6] = uVar54;
            auVar8[7] = uVar57;
            auVar8[8] = bVar59;
            auVar8[9] = uVar62;
            auVar8[10] = uVar65;
            auVar8[0xb] = uVar68;
            auVar8[0xc] = bVar80;
            auVar8[0xd] = uVar73;
            auVar8[0xe] = uVar76;
            auVar8[0xf] = uVar79;
            auVar87 = NEON_ext(auVar7,auVar8,8,1);
            *(ulong *)(local_1090 + (int)local_90) =
                 CONCAT17(uVar57,CONCAT16(uVar54,CONCAT15(uVar51,CONCAT14(bVar48,CONCAT13(uVar46,
                                                  CONCAT12(uVar44,CONCAT11(uVar42,bVar40)))))));
            *(long *)((long)auStack_1088 + (long)(int)local_90 * 4) = auVar87._0_8_;
            lVar21 = (long)(int)local_90;
            *(long *)((long)auStack_888 + lVar21 * 4) = auVar35._8_8_;
            *(long *)(local_890 + lVar21) = auVar35._0_8_;
            local_90 = local_90 + iVar32;
          }
        }
        else {
          lVar21 = param_4[2];
          lVar24 = param_4[1] + (ulong)(uVar33 >> 1) * 0xc0;
          plVar23 = (long *)(lVar24 + 0xb0);
          lVar19 = *plVar23;
          if (lVar19 == *(long *)(lVar21 + 0x80)) {
LAB_02f67610:
            cVar3 = *(char *)(param_4 + 4);
          }
          else {
            plVar17 = *(long **)(lVar21 + 8);
            if (plVar17 != (long *)0x0) {
              if (*(long *)(lVar21 + 0x80) != -1) {
                uVar18 = (**(code **)(*plVar17 + 0x38))(plVar17,3);
                if ((uVar18 & 1) == 0) goto LAB_02f67610;
                lVar21 = param_4[2];
              }
              uVar18 = (**(code **)(**(long **)(lVar21 + 8) + 0x30))
                                 (*(long **)(lVar21 + 8),3,lVar21 + 0x10,lVar24);
              if ((uVar18 & 1) == 0) goto LAB_02f67610;
              lVar19 = *plVar23;
            }
            (**(code **)(*(long *)param_4[3] + 0x20))(fVar93,(long *)param_4[3],lVar19);
            cVar3 = *(char *)(param_4[3] + 9);
            *(char *)(param_4 + 4) = cVar3;
          }
          fVar26 = (float)*param_4;
          uVar28 = (undefined4)((ulong)*param_4 >> 0x20);
          fVar30 = fVar26;
          uVar31 = uVar28;
          if (cVar3 != '\0') {
            return;
          }
        }
LAB_02f67620:
        uVar20 = local_90;
        if (local_90 == 0) {
          return;
        }
      }
      uVar33 = uVar20;
      if (3 < (int)uVar20) {
        uVar33 = 4;
      }
      local_90 = uVar20 - uVar33;
      pauVar1 = (undefined1 (*) [16])(local_890 + (int)local_90);
      if (uVar33 == 4) {
        auVar35 = *pauVar1;
        fVar93 = (float)NEON_fminnmv(auVar35,4);
        iVar32 = -(uint)(auVar35._0_4_ <= fVar93);
        iVar36 = -(uint)(auVar35._4_4_ <= fVar93);
        iVar37 = -(uint)(auVar35._8_4_ <= fVar93);
        iVar38 = -(uint)(auVar35._12_4_ <= fVar93);
        iVar32 = CONCAT13((byte)((uint)iVar32 >> 0x18) & bVar59,
                          CONCAT12((byte)((uint)iVar32 >> 0x10) & bVar48,
                                   CONCAT11((byte)((uint)iVar32 >> 8) & bVar40,
                                            (byte)iVar32 & (byte)uVar15)));
        auVar34._0_8_ =
             CONCAT17((byte)((uint)iVar36 >> 0x18) & bVar55,
                      CONCAT16((byte)((uint)iVar36 >> 0x10) & bVar52,
                               CONCAT15((byte)((uint)iVar36 >> 8) & bVar49,
                                        CONCAT14((byte)iVar36 & bVar80,iVar32))));
        auVar34[8] = (byte)iVar37 & (byte)uVar16;
        auVar34[9] = (byte)((uint)iVar37 >> 8) & bVar60;
        auVar34[10] = (byte)((uint)iVar37 >> 0x10) & bVar63;
        auVar34[0xb] = (byte)((uint)iVar37 >> 0x18) & bVar66;
        auVar35[0xc] = (byte)iVar38 & bVar69;
        auVar35._0_12_ = auVar34;
        auVar35[0xd] = (byte)((uint)iVar38 >> 8) & bVar71;
        auVar35[0xe] = (byte)((uint)iVar38 >> 0x10) & bVar74;
        auVar35[0xf] = (byte)((uint)iVar38 >> 0x18) & bVar77;
        uVar33 = iVar32 + (int)((ulong)auVar34._0_8_ >> 0x20) + auVar34._8_4_ + auVar35._12_4_;
LAB_02f676c4:
        uVar22 = (uint)(char)(&DAT_03aadfc0)[uVar33];
LAB_02f676d0:
        uVar22 = local_90 + uVar22;
      }
      else {
        if (uVar33 == 3) {
          auVar35 = *pauVar1;
          uVar11 = NEON_fminp(auVar35._0_8_,auVar35._0_8_,4);
          fVar93 = auVar35._8_4_;
          uVar11 = NEON_fmin(CONCAT44(fVar93,fVar93),uVar11,4);
          uVar33 = (-(uint)(auVar35._4_4_ <= (float)((ulong)uVar11 >> 0x20)) & 2) +
                   (uint)(auVar35._0_4_ <= (float)uVar11) | -(uint)(fVar93 <= (float)uVar11) & 4;
          goto LAB_02f676c4;
        }
        uVar22 = local_90;
        if (uVar33 == 2) {
          uVar22 = (uint)(local_890[(long)(int)local_90 + 1] <= *(float *)*pauVar1);
          goto LAB_02f676d0;
        }
      }
      if (local_890[(int)uVar22] <= fVar26) {
        fVar93 = local_890[uVar22];
        uVar33 = local_1090[uVar22];
        local_90 = (uint)((long)(int)uVar20 + -1);
        local_890[uVar22] = local_890[(long)(int)uVar20 + -1];
        local_1090[uVar22] = local_1090[(int)local_90];
        if (uVar33 != 0xffffffff) goto LAB_02f6749c;
        goto LAB_02f67620;
      }
      uVar20 = local_90;
    } while (local_90 != 0);
  }
  return;
}


