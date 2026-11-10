/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02feb0d0; name: FUN_02feb0d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02feb0d0(long *param_1,undefined1 (*param_2) [16],float *param_3,long param_4)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  int *piVar17;
  uint uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  byte bVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  byte bVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  byte bVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  byte bVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  uint uVar48;
  undefined1 auVar49 [12];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  byte bVar54;
  byte bVar64;
  byte bVar65;
  float fVar55;
  int iVar56;
  undefined1 auVar57 [12];
  undefined1 auVar58 [12];
  byte bVar66;
  byte bVar67;
  byte bVar70;
  byte bVar71;
  float fVar68;
  int iVar69;
  byte bVar72;
  float fVar73;
  int iVar74;
  byte bVar76;
  byte bVar77;
  int iVar75;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  byte bVar78;
  float fVar79;
  int iVar80;
  uint5 uVar81;
  float fVar82;
  int iVar83;
  float fVar84;
  int iVar85;
  int iVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar99 [16];
  uint local_1200 [2];
  undefined8 auStack_11f8 [255];
  float local_a00 [2];
  undefined8 auStack_9f8 [255];
  uint local_200;
  undefined1 auStack_1f0 [64];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  uint local_198;
  undefined4 uStack_194;
  undefined8 *local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar13 = _UNK_03889708;
  uVar12 = _DAT_03889700;
  if (*(char *)(*(long *)(param_4 + 0x130) + 0x18) != '\0') {
    return;
  }
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  auVar51 = *param_2;
  auVar88 = param_2[2];
  uVar19 = *(undefined8 *)(*(long *)(param_4 + 0x130) + 0x10);
  uVar21 = (undefined1)uVar19;
  uVar23 = (undefined1)((ulong)uVar19 >> 8);
  uVar26 = (undefined1)((ulong)uVar19 >> 0x10);
  uVar29 = (undefined1)((ulong)uVar19 >> 0x18);
  uVar32 = (undefined1)((ulong)uVar19 >> 0x20);
  uVar35 = (undefined1)((ulong)uVar19 >> 0x28);
  uVar38 = (undefined1)((ulong)uVar19 >> 0x30);
  uVar41 = (undefined1)((ulong)uVar19 >> 0x38);
  fVar55 = auVar51._0_4_;
  fVar68 = auVar51._4_4_;
  local_1200[0] = 2;
  fVar73 = auVar51._8_4_;
  fVar79 = auVar88._0_4_;
  fVar82 = auVar88._4_4_;
  fVar84 = auVar88._8_4_;
  local_a00[0] = 0.0;
  local_200 = 1;
  uVar22 = uVar21;
  uVar24 = uVar23;
  uVar27 = uVar26;
  uVar30 = uVar29;
  uVar33 = uVar32;
  uVar36 = uVar35;
  uVar39 = uVar38;
  uVar42 = uVar41;
  uVar14 = 1;
  do {
    uVar48 = uVar14;
    if (3 < (int)uVar14) {
      uVar48 = 4;
    }
    local_200 = uVar14 - uVar48;
    pauVar1 = (undefined1 (*) [16])(local_a00 + (int)local_200);
    bVar78 = (byte)((ulong)uVar12 >> 8);
    bVar25 = (byte)((ulong)uVar12 >> 0x10);
    bVar28 = (byte)((ulong)uVar12 >> 0x18);
    bVar31 = (byte)((ulong)uVar12 >> 0x20);
    bVar34 = (byte)((ulong)uVar12 >> 0x28);
    bVar37 = (byte)((ulong)uVar12 >> 0x30);
    bVar40 = (byte)((ulong)uVar12 >> 0x38);
    bVar43 = (byte)((ulong)uVar13 >> 8);
    bVar44 = (byte)((ulong)uVar13 >> 0x10);
    bVar45 = (byte)((ulong)uVar13 >> 0x18);
    bVar46 = (byte)((ulong)uVar13 >> 0x20);
    bVar47 = (byte)((ulong)uVar13 >> 0x28);
    bVar76 = (byte)((ulong)uVar13 >> 0x30);
    bVar77 = (byte)((ulong)uVar13 >> 0x38);
    if (uVar48 == 4) {
      auVar51 = *pauVar1;
      fVar95 = (float)NEON_fminnmv(auVar51,4);
      iVar56 = -(uint)(auVar51._0_4_ <= fVar95);
      iVar69 = -(uint)(auVar51._4_4_ <= fVar95);
      iVar74 = -(uint)(auVar51._8_4_ <= fVar95);
      iVar75 = -(uint)(auVar51._12_4_ <= fVar95);
      iVar56 = CONCAT13((byte)((uint)iVar56 >> 0x18) & bVar28,
                        CONCAT12((byte)((uint)iVar56 >> 0x10) & bVar25,
                                 CONCAT11((byte)((uint)iVar56 >> 8) & bVar78,
                                          (byte)iVar56 & (byte)uVar12)));
      auVar49._0_8_ =
           CONCAT17((byte)((uint)iVar69 >> 0x18) & bVar40,
                    CONCAT16((byte)((uint)iVar69 >> 0x10) & bVar37,
                             CONCAT15((byte)((uint)iVar69 >> 8) & bVar34,
                                      CONCAT14((byte)iVar69 & bVar31,iVar56))));
      auVar49[8] = (byte)iVar74 & (byte)uVar13;
      auVar49[9] = (byte)((uint)iVar74 >> 8) & bVar43;
      auVar49[10] = (byte)((uint)iVar74 >> 0x10) & bVar44;
      auVar49[0xb] = (byte)((uint)iVar74 >> 0x18) & bVar45;
      auVar51[0xc] = (byte)iVar75 & bVar46;
      auVar51._0_12_ = auVar49;
      auVar51[0xd] = (byte)((uint)iVar75 >> 8) & bVar47;
      auVar51[0xe] = (byte)((uint)iVar75 >> 0x10) & bVar76;
      auVar51[0xf] = (byte)((uint)iVar75 >> 0x18) & bVar77;
      uVar48 = iVar56 + (int)((ulong)auVar49._0_8_ >> 0x20) + auVar49._8_4_ + auVar51._12_4_;
LAB_02feb224:
      uVar18 = (uint)(char)(&DAT_03aadfc0)[uVar48];
LAB_02feb230:
      uVar18 = local_200 + uVar18;
    }
    else {
      if (uVar48 == 3) {
        auVar51 = *pauVar1;
        uVar19 = NEON_fminp(auVar51._0_8_,auVar51._0_8_,4);
        fVar95 = auVar51._8_4_;
        uVar19 = NEON_fmin(CONCAT44(fVar95,fVar95),uVar19,4);
        uVar48 = (-(uint)(auVar51._4_4_ <= (float)((ulong)uVar19 >> 0x20)) & 2) +
                 (uint)(auVar51._0_4_ <= (float)uVar19) | -(uint)(fVar95 <= (float)uVar19) & 4;
        goto LAB_02feb224;
      }
      uVar18 = local_200;
      if (uVar48 == 2) {
        uVar18 = (uint)(local_a00[(long)(int)local_200 + 1] <= *(float *)*pauVar1);
        goto LAB_02feb230;
      }
    }
    if (local_a00[(int)uVar18] != (float)CONCAT13(uVar29,CONCAT12(uVar26,CONCAT11(uVar23,uVar21)))
        && (float)CONCAT13(uVar29,CONCAT12(uVar26,CONCAT11(uVar23,uVar21))) <=
           local_a00[(int)uVar18]) {
      uVar14 = local_200;
      if (local_200 == 0) {
        return;
      }
    }
    else {
      uVar48 = local_1200[uVar18];
      local_200 = (uint)((long)(int)uVar14 + -1);
      local_a00[uVar18] = local_a00[(long)(int)uVar14 + -1];
      local_1200[uVar18] = local_1200[(int)local_200];
      if (uVar48 != 0xffffffff) {
        uVar20 = (ulong)(uVar48 >> 1);
        if ((uVar48 & 1) == 0) {
          pfVar2 = (float *)((long)param_1 + uVar20 * 0x80 + *param_1);
          iVar56 = -(uint)(*pfVar2 <= pfVar2[4]);
          iVar69 = -(uint)(pfVar2[1] <= pfVar2[5]);
          iVar74 = -(uint)(pfVar2[2] <= pfVar2[6]);
          iVar75 = -(uint)(pfVar2[3] <= pfVar2[7]);
          auVar50._0_4_ = fVar79 * ((*pfVar2 - fVar9) - fVar55);
          auVar50._4_4_ = fVar79 * ((pfVar2[1] - fVar9) - fVar55);
          auVar50._8_4_ = fVar79 * ((pfVar2[2] - fVar9) - fVar55);
          auVar50._12_4_ = fVar79 * ((pfVar2[3] - fVar9) - fVar55);
          auVar87._0_4_ = fVar79 * ((fVar9 + pfVar2[4]) - fVar55);
          auVar87._4_4_ = fVar79 * ((fVar9 + pfVar2[5]) - fVar55);
          auVar87._8_4_ = fVar79 * ((fVar9 + pfVar2[6]) - fVar55);
          auVar87._12_4_ = fVar79 * ((fVar9 + pfVar2[7]) - fVar55);
          auVar89._0_4_ = fVar82 * ((pfVar2[8] - fVar10) - fVar68);
          auVar89._4_4_ = fVar82 * ((pfVar2[9] - fVar10) - fVar68);
          auVar89._8_4_ = fVar82 * ((pfVar2[10] - fVar10) - fVar68);
          auVar89._12_4_ = fVar82 * ((pfVar2[0xb] - fVar10) - fVar68);
          auVar92._0_4_ = fVar82 * ((fVar10 + pfVar2[0xc]) - fVar68);
          auVar92._4_4_ = fVar82 * ((fVar10 + pfVar2[0xd]) - fVar68);
          auVar92._8_4_ = fVar82 * ((fVar10 + pfVar2[0xe]) - fVar68);
          auVar92._12_4_ = fVar82 * ((fVar10 + pfVar2[0xf]) - fVar68);
          auVar93._0_4_ = fVar84 * ((pfVar2[0x10] - fVar11) - fVar73);
          auVar93._4_4_ = fVar84 * ((pfVar2[0x11] - fVar11) - fVar73);
          auVar93._8_4_ = fVar84 * ((pfVar2[0x12] - fVar11) - fVar73);
          auVar93._12_4_ = fVar84 * ((pfVar2[0x13] - fVar11) - fVar73);
          fVar95 = fVar84 * ((fVar11 + (float)*(undefined8 *)(pfVar2 + 0x14)) - fVar73);
          fVar96 = fVar84 * ((fVar11 + (float)((ulong)*(undefined8 *)(pfVar2 + 0x14) >> 0x20)) -
                            fVar73);
          fVar97 = fVar84 * ((fVar11 + (float)*(undefined8 *)(pfVar2 + 0x16)) - fVar73);
          fVar98 = fVar84 * ((fVar11 + (float)((ulong)*(undefined8 *)(pfVar2 + 0x16) >> 0x20)) -
                            fVar73);
          auVar99 = NEON_smin(auVar50,auVar87,4);
          auVar88 = NEON_smax(auVar50,auVar87,4);
          auVar51 = NEON_smin(auVar89,auVar92,4);
          auVar90 = NEON_smax(auVar89,auVar92,4);
          auVar51 = NEON_smax(auVar99,auVar51,4);
          auVar88 = NEON_smin(auVar88,auVar90,4);
          auVar7._4_4_ = fVar96;
          auVar7._0_4_ = fVar95;
          auVar7._8_4_ = fVar97;
          auVar7._12_4_ = fVar98;
          auVar90 = NEON_smin(auVar93,auVar7,4);
          auVar8._4_4_ = fVar96;
          auVar8._0_4_ = fVar95;
          auVar8._8_4_ = fVar97;
          auVar8._12_4_ = fVar98;
          auVar94 = NEON_smax(auVar93,auVar8,4);
          auVar99 = NEON_smax(auVar90,ZEXT816(0),4);
          auVar3[1] = uVar23;
          auVar3[0] = uVar21;
          auVar3[2] = uVar26;
          auVar3[3] = uVar29;
          auVar3[4] = uVar32;
          auVar3[5] = uVar35;
          auVar3[6] = uVar38;
          auVar3[7] = uVar41;
          auVar3[8] = uVar22;
          auVar3[9] = uVar24;
          auVar3[10] = uVar27;
          auVar3[0xb] = uVar30;
          auVar3[0xc] = uVar33;
          auVar3[0xd] = uVar36;
          auVar3[0xe] = uVar39;
          auVar3[0xf] = uVar42;
          auVar90 = NEON_smin(auVar94,auVar3,4);
          auVar51 = NEON_smax(auVar51,auVar99,4);
          auVar88 = NEON_smin(auVar88,auVar90,4);
          iVar80 = -(uint)(auVar51._0_4_ <= auVar88._0_4_);
          iVar83 = -(uint)(auVar51._4_4_ <= auVar88._4_4_);
          iVar85 = -(uint)(auVar51._8_4_ <= auVar88._8_4_);
          iVar86 = -(uint)(auVar51._12_4_ <= auVar88._12_4_);
          bVar54 = (byte)iVar80 & (byte)iVar56;
          bVar64 = (byte)((uint)iVar80 >> 8) & (byte)((uint)iVar56 >> 8);
          bVar65 = (byte)((uint)iVar80 >> 0x10) & (byte)((uint)iVar56 >> 0x10);
          bVar66 = (byte)((uint)iVar80 >> 0x18) & (byte)((uint)iVar56 >> 0x18);
          iVar56 = CONCAT13(bVar66,CONCAT12(bVar65,CONCAT11(bVar64,bVar54)));
          bVar67 = (byte)iVar83 & (byte)iVar69;
          bVar70 = (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar69 >> 8);
          bVar71 = (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar69 >> 0x10);
          bVar72 = (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar69 >> 0x18);
          auVar57._0_8_ = CONCAT17(bVar72,CONCAT16(bVar71,CONCAT15(bVar70,CONCAT14(bVar67,iVar56))))
          ;
          auVar57[8] = (byte)iVar85 & (byte)iVar74;
          auVar57[9] = (byte)((uint)iVar85 >> 8) & (byte)((uint)iVar74 >> 8);
          auVar57[10] = (byte)((uint)iVar85 >> 0x10) & (byte)((uint)iVar74 >> 0x10);
          auVar57[0xb] = (byte)((uint)iVar85 >> 0x18) & (byte)((uint)iVar74 >> 0x18);
          auVar59[0xc] = (byte)iVar86 & (byte)iVar75;
          auVar59._0_12_ = auVar57;
          auVar59[0xd] = (byte)((uint)iVar86 >> 8) & (byte)((uint)iVar75 >> 8);
          auVar59[0xe] = (byte)((uint)iVar86 >> 0x10) & (byte)((uint)iVar75 >> 0x10);
          auVar59[0xf] = (byte)((uint)iVar86 >> 0x18) & (byte)((uint)iVar75 >> 0x18);
          if (((iVar56 != 0 || (int)((ulong)auVar57._0_8_ >> 0x20) != 0) || auVar57._8_4_ != 0) ||
              auVar59._12_4_ != 0) {
            iVar56 = CONCAT13(bVar66 & bVar28,
                              CONCAT12(bVar65 & bVar25,
                                       CONCAT11(bVar64 & bVar78,bVar54 & (byte)uVar12)));
            auVar58._0_8_ =
                 CONCAT17(bVar72 & bVar40,
                          CONCAT16(bVar71 & bVar37,
                                   CONCAT15(bVar70 & bVar34,CONCAT14(bVar67 & bVar31,iVar56))));
            auVar58[8] = auVar57[8] & (byte)uVar13;
            auVar58[9] = auVar57[9] & bVar43;
            auVar58[10] = auVar57[10] & bVar44;
            auVar58[0xb] = auVar57[0xb] & bVar45;
            auVar60[0xc] = auVar59[0xc] & bVar46;
            auVar60._0_12_ = auVar58;
            auVar60[0xd] = auVar59[0xd] & bVar47;
            auVar60[0xe] = auVar59[0xe] & bVar76;
            auVar60[0xf] = auVar59[0xf] & bVar77;
            uVar20 = (ulong)(uint)(iVar56 + (int)((ulong)auVar58._0_8_ >> 0x20) +
                                  auVar58._8_4_ + auVar60._12_4_);
            iVar56 = *(int *)(&DAT_03aadfe0 + uVar20 * 4);
            auVar88 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar2 + 0x18),
                              *(undefined1 (*) [16])(&DAT_03aae120 + uVar20 * 0x10));
            auVar51 = a64_TBL(ZEXT816(0),auVar51,
                              *(undefined1 (*) [16])(&DAT_03aae120 + uVar20 * 0x10));
            iVar69 = auVar88._0_4_ << 1;
            iVar74 = auVar88._4_4_ << 1;
            iVar75 = auVar88._8_4_ << 1;
            iVar80 = auVar88._12_4_ << 1;
            bVar78 = -(*(char *)(pfVar2 + 0x1c) == '\0');
            uVar81 = CONCAT14(~bVar78,(uint)(~bVar78 & 1)) & 0x1ffffffff;
            auVar61._0_8_ =
                 CONCAT17((char)((uint)iVar74 >> 0x18),
                          CONCAT16((char)((uint)iVar74 >> 0x10),
                                   CONCAT15((char)((uint)iVar74 >> 8),
                                            CONCAT14((byte)(uVar81 >> 0x20) | (byte)iVar74,
                                                     CONCAT13((char)((uint)iVar69 >> 0x18),
                                                              CONCAT12((char)((uint)iVar69 >> 0x10),
                                                                       CONCAT11((char)((uint)iVar69
                                                                                      >> 8),
                                                                                (byte)uVar81 |
                                                                                (byte)iVar69)))))));
            auVar61[8] = ~bVar78 & 1 | (byte)iVar75;
            auVar61[9] = (undefined1)((uint)iVar75 >> 8);
            auVar61[10] = (undefined1)((uint)iVar75 >> 0x10);
            auVar61[0xb] = (undefined1)((uint)iVar75 >> 0x18);
            auVar61[0xc] = ~bVar78 & 1 | (byte)iVar80;
            auVar61[0xd] = (undefined1)((uint)iVar80 >> 8);
            auVar61[0xe] = (undefined1)((uint)iVar80 >> 0x10);
            auVar61[0xf] = (undefined1)((uint)iVar80 >> 0x18);
            *(undefined8 *)(local_1200 + (int)local_200) = auVar61._0_8_;
            auVar88 = NEON_ext(auVar61,auVar61,8,1);
            *(long *)((long)auStack_11f8 + (long)(int)local_200 * 4) = auVar88._0_8_;
            lVar15 = (long)(int)local_200;
            *(long *)((long)auStack_9f8 + lVar15 * 4) = auVar51._8_8_;
            *(long *)(local_a00 + lVar15) = auVar51._0_8_;
            local_200 = local_200 + iVar56;
          }
        }
        else {
          lVar15 = *(long *)(*(long *)(param_4 + 0xb8) + 0x50);
          if (*(char *)(*(long *)(param_4 + 200) + 0x20) == '\x02') {
            if (*(int *)(lVar15 + 0x30) == 0) {
              piVar17 = (int *)(lVar15 + 0x20);
            }
            else {
              piVar17 = (int *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(lVar15 + 0x34) * uVar20);
            }
            fVar95 = (float)*(undefined8 *)
                             (*(long *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x18) +
                                       (long)*piVar17 * 8) + 0x10);
            *(float *)(*(long *)(param_4 + 0xb0) + 0x20) = fVar95;
            FUN_02fdb190(SUB41(DAT_042b0ab0 * fVar95,0),*(undefined8 *)(param_4 + 0xb0));
            uVar19 = *(undefined8 *)(param_4 + 0xb0);
          }
          else {
            if (*(int *)(lVar15 + 0x30) == 0) {
              piVar17 = (int *)(lVar15 + 0x20);
            }
            else {
              piVar17 = (int *)(*(long *)(lVar15 + 0x28) + (long)*(int *)(lVar15 + 0x34) * uVar20);
            }
            uVar19 = *(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x18) + (long)*piVar17 * 8) +
                      0xa0);
          }
          puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x110) + uVar20 * 0x20);
          uStack_78 = puVar16[1];
          local_80 = *puVar16;
          if (*(char *)(lVar15 + 0x15dc) == '\0') {
            auVar88._8_8_ = _UNK_03889a88;
            auVar88._0_8_ = _DAT_03889a80;
            auVar90._8_8_ = DAT_0388a148;
            auVar90._0_8_ = DAT_0388a140;
            uVar21 = (undefined1)_UNK_03888d18;
            uVar23 = (undefined1)((ulong)_UNK_03888d18 >> 8);
            uVar26 = (undefined1)((ulong)_UNK_03888d18 >> 0x10);
            uVar29 = (undefined1)((ulong)_UNK_03888d18 >> 0x18);
            uVar32 = (undefined1)((ulong)_UNK_03888d18 >> 0x20);
            uVar35 = (undefined1)((ulong)_UNK_03888d18 >> 0x28);
            uVar38 = (undefined1)((ulong)_UNK_03888d18 >> 0x30);
            uVar41 = (undefined1)((ulong)_UNK_03888d18 >> 0x38);
            uVar22 = (undefined1)_DAT_03888d10;
            uVar24 = (undefined1)((ulong)_DAT_03888d10 >> 8);
            uVar27 = (undefined1)((ulong)_DAT_03888d10 >> 0x10);
            uVar30 = (undefined1)((ulong)_DAT_03888d10 >> 0x18);
            uVar33 = (undefined1)((ulong)_DAT_03888d10 >> 0x20);
            uVar36 = (undefined1)((ulong)_DAT_03888d10 >> 0x28);
            uVar39 = (undefined1)((ulong)_DAT_03888d10 >> 0x30);
            uVar42 = (undefined1)((ulong)_DAT_03888d10 >> 0x38);
            uStack_a8 = _UNK_03889a88;
            local_b0 = _DAT_03889a80;
            uStack_98 = DAT_0388a148;
            uStack_a0 = DAT_0388a140;
            uStack_88 = _UNK_03888d18;
            local_90 = _DAT_03888d10;
          }
          else {
            FUN_032c9fc0(&local_b0,*(long *)(lVar15 + 0x120) + uVar20 * 0x10);
            auVar88._8_8_ = uStack_a8;
            auVar88._0_8_ = local_b0;
            auVar90._8_8_ = uStack_98;
            auVar90._0_8_ = uStack_a0;
            uVar21 = (undefined1)uStack_88;
            uVar23 = (undefined1)((ulong)uStack_88 >> 8);
            uVar26 = (undefined1)((ulong)uStack_88 >> 0x10);
            uVar29 = (undefined1)((ulong)uStack_88 >> 0x18);
            uVar32 = (undefined1)((ulong)uStack_88 >> 0x20);
            uVar35 = (undefined1)((ulong)uStack_88 >> 0x28);
            uVar38 = (undefined1)((ulong)uStack_88 >> 0x30);
            uVar41 = (undefined1)((ulong)uStack_88 >> 0x38);
            uVar22 = (undefined1)local_90;
            uVar24 = (undefined1)((ulong)local_90 >> 8);
            uVar27 = (undefined1)((ulong)local_90 >> 0x10);
            uVar30 = (undefined1)((ulong)local_90 >> 0x18);
            uVar33 = (undefined1)((ulong)local_90 >> 0x20);
            uVar36 = (undefined1)((ulong)local_90 >> 0x28);
            uVar39 = (undefined1)((ulong)local_90 >> 0x30);
            uVar42 = (undefined1)((ulong)local_90 >> 0x38);
          }
          puVar16 = *(undefined8 **)(param_4 + 200);
          auVar51 = NEON_ext(auVar88,auVar88,8,1);
          local_138 = puVar16[3];
          local_148 = puVar16[1];
          local_150 = *puVar16;
          local_140 = puVar16[2];
          local_130 = puVar16[4];
          local_128 = puVar16[5];
          auVar91 = NEON_ext(auVar90,auVar90,8,1);
          auVar99[1] = uVar24;
          auVar99[0] = uVar22;
          auVar99[2] = uVar27;
          auVar99[3] = uVar30;
          auVar99[4] = uVar33;
          auVar99[5] = uVar36;
          auVar99[6] = uVar39;
          auVar99[7] = uVar42;
          auVar99[8] = uVar21;
          auVar99[9] = uVar23;
          auVar99[10] = uVar26;
          auVar99[0xb] = uVar29;
          auVar99[0xc] = uVar32;
          auVar99[0xd] = uVar35;
          auVar99[0xe] = uVar38;
          auVar99[0xf] = uVar41;
          auVar94[1] = uVar24;
          auVar94[0] = uVar22;
          auVar94[2] = uVar27;
          auVar94[3] = uVar30;
          auVar94[4] = uVar33;
          auVar94[5] = uVar36;
          auVar94[6] = uVar39;
          auVar94[7] = uVar42;
          auVar94[8] = uVar21;
          auVar94[9] = uVar23;
          auVar94[10] = uVar26;
          auVar94[0xb] = uVar29;
          auVar94[0xc] = uVar32;
          auVar94[0xd] = uVar35;
          auVar94[0xe] = uVar38;
          auVar94[0xf] = uVar41;
          auVar99 = NEON_ext(auVar99,auVar94,8,1);
          local_b8 = puVar16[0x13];
          local_c8 = puVar16[0x11];
          local_d8 = puVar16[0xf];
          local_e8 = puVar16[0xd];
          local_f0 = puVar16[0xc];
          local_e0 = puVar16[0xe];
          local_d0 = puVar16[0x10];
          local_c0 = puVar16[0x12];
          auVar63._8_4_ = 0x7f7fffee;
          auVar63._0_8_ = 0x7f7fffee7f7fffee;
          auVar63._12_4_ = 0x7f7fffee;
          fVar95 = (float)puVar16[8];
          local_118 = 0;
          fVar96 = (float)((ulong)puVar16[8] >> 0x20);
          local_120 = 0;
          fVar97 = (float)puVar16[9];
          NEON_fmov(0x3f800000,4);
          fVar98 = auVar51._0_4_ * fVar97 + auVar88._0_4_ * fVar95 + auVar88._4_4_ * fVar96;
          fVar6 = auVar91._0_4_ * fVar97 + auVar90._0_4_ * fVar95 + auVar90._4_4_ * fVar96;
          fVar95 = auVar99._0_4_ * fVar97 +
                   (float)CONCAT13(uVar30,CONCAT12(uVar27,CONCAT11(uVar24,uVar22))) * fVar95 +
                   (float)CONCAT13(uVar42,CONCAT12(uVar39,CONCAT11(uVar36,uVar33))) * fVar96;
          iVar56 = -(uint)(fVar98 == 0.0);
          iVar69 = -(uint)(fVar6 == 0.0);
          iVar74 = -(uint)(fVar95 == 0.0);
          bVar78 = SUB41(fVar98,0) & ~(byte)iVar56;
          bVar25 = (byte)((uint)fVar98 >> 8) & ~(byte)((uint)iVar56 >> 8);
          bVar28 = (byte)((uint)fVar98 >> 0x10) & ~(byte)((uint)iVar56 >> 0x10);
          bVar31 = (byte)((uint)fVar98 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18);
          bVar34 = SUB41(fVar6,0) & ~(byte)iVar69;
          bVar37 = (byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar69 >> 8);
          bVar40 = (byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
          bVar43 = (byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
          bVar44 = SUB41(fVar95,0) & ~(byte)iVar74;
          bVar45 = (byte)((uint)fVar95 >> 8) & ~(byte)((uint)iVar74 >> 8);
          bVar46 = (byte)((uint)fVar95 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10);
          bVar47 = (byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18);
          auVar91[1] = bVar25;
          auVar91[0] = bVar78;
          auVar91[2] = bVar28;
          auVar91[3] = bVar31;
          auVar91[4] = bVar34;
          auVar91[5] = bVar37;
          auVar91[6] = bVar40;
          auVar91[7] = bVar43;
          auVar91[8] = bVar44;
          auVar91[9] = bVar45;
          auVar91[10] = bVar46;
          auVar91[0xb] = bVar47;
          auVar91._12_4_ = 0;
          auVar51 = NEON_frecpe(auVar91,4);
          iVar56 = -(uint)((float)CONCAT13(bVar31,CONCAT12(bVar28,CONCAT11(bVar25,bVar78))) == 0.0);
          iVar69 = -(uint)((float)CONCAT13(bVar43,CONCAT12(bVar40,CONCAT11(bVar37,bVar34))) == 0.0);
          iVar74 = -(uint)((float)CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,bVar44))) == 0.0);
          auVar62[0] = ~(byte)iVar56;
          auVar62[1] = ~(byte)((uint)iVar56 >> 8);
          auVar62[2] = ~(byte)((uint)iVar56 >> 0x10);
          auVar62[3] = ~(byte)((uint)iVar56 >> 0x18);
          auVar62[4] = ~(byte)iVar69;
          auVar62[5] = ~(byte)((uint)iVar69 >> 8);
          auVar62[6] = ~(byte)((uint)iVar69 >> 0x10);
          auVar62[7] = ~(byte)((uint)iVar69 >> 0x18);
          auVar62[8] = ~(byte)iVar74;
          auVar62[9] = ~(byte)((uint)iVar74 >> 8);
          auVar62[10] = ~(byte)((uint)iVar74 >> 0x10);
          auVar62[0xb] = ~(byte)((uint)iVar74 >> 0x18);
          auVar62._12_4_ = 0;
          auVar4[1] = bVar25;
          auVar4[0] = bVar78;
          auVar4[2] = bVar28;
          auVar4[3] = bVar31;
          auVar4[4] = bVar34;
          auVar4[5] = bVar37;
          auVar4[6] = bVar40;
          auVar4[7] = bVar43;
          auVar4[8] = bVar44;
          auVar4[9] = bVar45;
          auVar4[10] = bVar46;
          auVar4[0xb] = bVar47;
          auVar4._12_4_ = 0;
          auVar88 = NEON_frecps(auVar4,auVar51,4);
          uStack_108 = (ulong)CONCAT13(bVar47,CONCAT12(bVar46,CONCAT11(bVar45,bVar44)));
          local_110 = CONCAT17(bVar43,CONCAT16(bVar40,CONCAT15(bVar37,CONCAT14(bVar34,CONCAT13(
                                                  bVar31,CONCAT12(bVar28,CONCAT11(bVar25,bVar78)))))
                                              ));
          auVar52._0_4_ = auVar51._0_4_ * auVar88._0_4_;
          auVar52._4_4_ = auVar51._4_4_ * auVar88._4_4_;
          auVar52._8_4_ = auVar51._8_4_ * auVar88._8_4_;
          auVar52._12_4_ = auVar51._12_4_ * auVar88._12_4_;
          auVar5[1] = bVar25;
          auVar5[0] = bVar78;
          auVar5[2] = bVar28;
          auVar5[3] = bVar31;
          auVar5[4] = bVar34;
          auVar5[5] = bVar37;
          auVar5[6] = bVar40;
          auVar5[7] = bVar43;
          auVar5[8] = bVar44;
          auVar5[9] = bVar45;
          auVar5[10] = bVar46;
          auVar5[0xb] = bVar47;
          auVar5._12_4_ = 0;
          auVar51 = NEON_frecps(auVar5,auVar52,4);
          auVar53._0_4_ = auVar52._0_4_ * auVar51._0_4_;
          auVar53._4_4_ = auVar52._4_4_ * auVar51._4_4_;
          auVar53._8_4_ = auVar52._8_4_ * auVar51._8_4_;
          auVar53._12_4_ = auVar52._12_4_ * auVar51._12_4_;
          auVar63 = auVar63 ^ (auVar63 ^ auVar53) & auVar62;
          uStack_f8 = auVar63._8_8_;
          local_100 = auVar63._0_8_;
          puVar16 = *(undefined8 **)(param_4 + 0xe0);
          local_1b0 = *puVar16;
          local_1a8 = puVar16[1];
          local_188 = 0;
          local_180 = *(undefined1 *)(puVar16 + 6);
          local_17c = *(undefined4 *)((long)puVar16 + 0x34);
          uStack_168 = puVar16[9];
          local_170 = puVar16[8];
          uStack_158 = puVar16[0xb];
          local_160 = puVar16[10];
          local_178 = *(undefined4 *)(puVar16 + 7);
          local_1a0 = *(undefined8 *)(param_4 + 0xb8);
          local_190 = &local_b0;
          _local_198 = CONCAT44(0x20,uVar48 >> 1);
          FUN_032ca498(auStack_1f0,&local_b0,param_4 + 0xf0);
          FUN_02f91438(**(undefined8 **)(param_4 + 0xc0),*(undefined8 **)(param_4 + 0xc0),&local_150
                       ,*(undefined8 *)(param_4 + 0xd0),uVar19,*(undefined8 *)(param_4 + 0xd8),
                       &local_1b0,auStack_1f0,*(undefined1 *)(param_4 + 0xe8),
                       *(undefined8 *)(param_4 + 0x130),*(undefined8 *)(param_4 + 0x138));
          uVar19 = *(undefined8 *)(*(long *)(param_4 + 0x130) + 0x10);
          uVar21 = (undefined1)uVar19;
          uVar23 = (undefined1)((ulong)uVar19 >> 8);
          uVar26 = (undefined1)((ulong)uVar19 >> 0x10);
          uVar29 = (undefined1)((ulong)uVar19 >> 0x18);
          uVar32 = (undefined1)((ulong)uVar19 >> 0x20);
          uVar35 = (undefined1)((ulong)uVar19 >> 0x28);
          uVar38 = (undefined1)((ulong)uVar19 >> 0x30);
          uVar41 = (undefined1)((ulong)uVar19 >> 0x38);
          uVar22 = uVar21;
          uVar24 = uVar23;
          uVar27 = uVar26;
          uVar30 = uVar29;
          uVar33 = uVar32;
          uVar36 = uVar35;
          uVar39 = uVar38;
          uVar42 = uVar41;
          if (*(char *)(*(long *)(param_4 + 0x130) + 0x18) != '\0') {
            return;
          }
        }
      }
      uVar14 = local_200;
      if (local_200 == 0) {
        return;
      }
    }
  } while( true );
}


