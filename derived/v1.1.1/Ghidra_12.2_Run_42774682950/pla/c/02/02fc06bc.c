/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc06bc; name: FUN_02fc06bc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02fc06bc(long *param_1,float *param_2,float *param_3,long *param_4,ulong param_5)

{
  undefined1 (*pauVar1) [16];
  int *piVar2;
  int *piVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  undefined4 uVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  uint uVar23;
  undefined8 *puVar24;
  float *pfVar25;
  undefined1 uVar26;
  float *pfVar27;
  undefined4 uVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  byte bVar40;
  byte bVar41;
  byte bVar52;
  byte bVar54;
  byte bVar56;
  int iVar42;
  float fVar43;
  undefined8 uVar44;
  undefined1 auVar45 [12];
  undefined1 auVar46 [12];
  byte bVar53;
  byte bVar55;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar62;
  byte bVar64;
  byte bVar66;
  int iVar60;
  float fVar61;
  byte bVar63;
  byte bVar65;
  byte bVar67;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  int iVar69;
  byte bVar73;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  int iVar74;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  int iVar78;
  uint5 uVar79;
  int iVar81;
  int iVar82;
  int iVar83;
  undefined1 auVar80 [16];
  undefined8 uVar84;
  undefined1 auVar85 [16];
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
  uint local_11a0 [2];
  undefined8 auStack_1198 [255];
  float local_9a0 [2];
  undefined8 auStack_998 [255];
  uint local_1a0;
  undefined2 local_190 [8];
  undefined8 local_180;
  undefined8 local_178;
  long local_170;
  uint local_168;
  long local_160;
  undefined2 local_158 [8];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  uint local_f8;
  int iStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80 [8];
  
  if (*(char *)(param_4[0x10] + 0x18) != '\0') {
    return;
  }
  fVar8 = *param_3;
  fVar9 = param_3[1];
  fVar10 = param_3[2];
  fVar11 = *param_2;
  fVar12 = param_2[1];
  fVar13 = param_2[2];
  auVar80._0_8_ = *(undefined8 *)(param_4[0x10] + 0x10);
  auVar80._8_8_ = auVar80._0_8_;
  fVar14 = param_2[8];
  fVar15 = param_2[9];
  fVar16 = param_2[10];
  local_9a0[0] = 0.0;
  local_11a0[0] = 2;
  uVar17 = 1;
  local_1a0 = 1;
  bVar40 = (byte)_DAT_03889700;
  bVar52 = (byte)((ulong)_DAT_03889700 >> 8);
  bVar54 = (byte)((ulong)_DAT_03889700 >> 0x10);
  bVar56 = (byte)((ulong)_DAT_03889700 >> 0x18);
  bVar58 = (byte)((ulong)_DAT_03889700 >> 0x20);
  bVar62 = (byte)((ulong)_DAT_03889700 >> 0x28);
  bVar64 = (byte)((ulong)_DAT_03889700 >> 0x30);
  bVar66 = (byte)((ulong)_DAT_03889700 >> 0x38);
  bVar68 = (byte)_UNK_03889708;
  bVar70 = (byte)((ulong)_UNK_03889708 >> 8);
  bVar71 = (byte)((ulong)_UNK_03889708 >> 0x10);
  bVar72 = (byte)((ulong)_UNK_03889708 >> 0x18);
  bVar73 = (byte)((ulong)_UNK_03889708 >> 0x20);
  bVar75 = (byte)((ulong)_UNK_03889708 >> 0x28);
  bVar76 = (byte)((ulong)_UNK_03889708 >> 0x30);
  bVar77 = (byte)((ulong)_UNK_03889708 >> 0x38);
  uVar33 = param_5;
  local_1a0 = uVar17;
  if ((param_5 & 1) == 0) goto LAB_02fc0874;
  do {
    uVar34 = uVar17;
    if (3 < (int)uVar17) {
      uVar34 = 4;
    }
    local_1a0 = uVar17 - uVar34;
    pauVar1 = (undefined1 (*) [16])(local_9a0 + (int)local_1a0);
    if (uVar34 == 4) {
      auVar37 = *pauVar1;
      fVar93 = (float)NEON_fminnmv(auVar37,4);
      iVar42 = -(uint)(auVar37._0_4_ <= fVar93);
      iVar60 = -(uint)(auVar37._4_4_ <= fVar93);
      iVar69 = -(uint)(auVar37._8_4_ <= fVar93);
      iVar74 = -(uint)(auVar37._12_4_ <= fVar93);
      iVar42 = CONCAT13((byte)((uint)iVar42 >> 0x18) & bVar56,
                        CONCAT12((byte)((uint)iVar42 >> 0x10) & bVar54,
                                 CONCAT11((byte)((uint)iVar42 >> 8) & bVar52,(byte)iVar42 & bVar40))
                       );
      auVar35._0_8_ =
           CONCAT17((byte)((uint)iVar60 >> 0x18) & bVar66,
                    CONCAT16((byte)((uint)iVar60 >> 0x10) & bVar64,
                             CONCAT15((byte)((uint)iVar60 >> 8) & bVar62,
                                      CONCAT14((byte)iVar60 & bVar58,iVar42))));
      auVar35[8] = (byte)iVar69 & bVar68;
      auVar35[9] = (byte)((uint)iVar69 >> 8) & bVar70;
      auVar35[10] = (byte)((uint)iVar69 >> 0x10) & bVar71;
      auVar35[0xb] = (byte)((uint)iVar69 >> 0x18) & bVar72;
      auVar37[0xc] = (byte)iVar74 & bVar73;
      auVar37._0_12_ = auVar35;
      auVar37[0xd] = (byte)((uint)iVar74 >> 8) & bVar75;
      auVar37[0xe] = (byte)((uint)iVar74 >> 0x10) & bVar76;
      auVar37[0xf] = (byte)((uint)iVar74 >> 0x18) & bVar77;
      uVar34 = iVar42 + (int)((ulong)auVar35._0_8_ >> 0x20) + auVar35._8_4_ + auVar37._12_4_;
LAB_02fc0ed4:
      uVar23 = (uint)(char)(&DAT_03aadfc0)[uVar34];
LAB_02fc0ee0:
      uVar23 = local_1a0 + uVar23;
    }
    else {
      if (uVar34 == 3) {
        auVar37 = *pauVar1;
        uVar44 = NEON_fminp(auVar37._0_8_,auVar37._0_8_,4);
        fVar93 = auVar37._8_4_;
        uVar44 = NEON_fmin(CONCAT44(fVar93,fVar93),uVar44,4);
        uVar34 = (-(uint)(auVar37._4_4_ <= (float)((ulong)uVar44 >> 0x20)) & 2) +
                 (uint)(auVar37._0_4_ <= (float)uVar44) | -(uint)(fVar93 <= (float)uVar44) & 4;
        goto LAB_02fc0ed4;
      }
      uVar23 = local_1a0;
      if (uVar34 == 2) {
        uVar23 = (uint)(local_9a0[(long)(int)local_1a0 + 1] <= *(float *)*pauVar1);
        goto LAB_02fc0ee0;
      }
    }
    if (auVar80._0_4_ < local_9a0[(int)uVar23]) {
      if (local_1a0 != 0) goto LAB_02fc082c;
      return;
    }
    uVar34 = local_11a0[uVar23];
    fVar93 = local_9a0[uVar23];
    local_1a0 = (uint)((long)(int)uVar17 + -1);
    local_9a0[uVar23] = local_9a0[(long)(int)uVar17 + -1];
    local_11a0[uVar23] = local_11a0[(int)local_1a0];
    if (uVar34 != 0xffffffff) goto LAB_02fc088c;
    while( true ) {
      if (local_1a0 == 0) {
        return;
      }
LAB_02fc082c:
      uVar17 = local_1a0;
      if ((uVar33 & 1) != 0) break;
LAB_02fc0874:
      lVar22 = (long)(int)local_1a0 + -1;
      local_1a0 = (uint)lVar22;
      fVar93 = local_9a0[lVar22];
      uVar34 = local_11a0[lVar22];
LAB_02fc088c:
      uVar32 = (ulong)(uVar34 >> 1);
      if ((uVar34 & 1) == 0) {
        pfVar31 = (float *)((long)param_1 + uVar32 * 0x80 + *param_1);
        iVar42 = -(uint)(*pfVar31 <= pfVar31[4]);
        iVar60 = -(uint)(pfVar31[1] <= pfVar31[5]);
        iVar69 = -(uint)(pfVar31[2] <= pfVar31[6]);
        iVar74 = -(uint)(pfVar31[3] <= pfVar31[7]);
        auVar36._0_4_ = fVar14 * ((*pfVar31 - fVar8) - fVar11);
        auVar36._4_4_ = fVar14 * ((pfVar31[1] - fVar8) - fVar11);
        auVar36._8_4_ = fVar14 * ((pfVar31[2] - fVar8) - fVar11);
        auVar36._12_4_ = fVar14 * ((pfVar31[3] - fVar8) - fVar11);
        auVar85._0_4_ = fVar14 * ((fVar8 + pfVar31[4]) - fVar11);
        auVar85._4_4_ = fVar14 * ((fVar8 + pfVar31[5]) - fVar11);
        auVar85._8_4_ = fVar14 * ((fVar8 + pfVar31[6]) - fVar11);
        auVar85._12_4_ = fVar14 * ((fVar8 + pfVar31[7]) - fVar11);
        auVar88._0_4_ = fVar15 * ((pfVar31[8] - fVar9) - fVar12);
        auVar88._4_4_ = fVar15 * ((pfVar31[9] - fVar9) - fVar12);
        auVar88._8_4_ = fVar15 * ((pfVar31[10] - fVar9) - fVar12);
        auVar88._12_4_ = fVar15 * ((pfVar31[0xb] - fVar9) - fVar12);
        auVar90._0_4_ = fVar15 * ((fVar9 + pfVar31[0xc]) - fVar12);
        auVar90._4_4_ = fVar15 * ((fVar9 + pfVar31[0xd]) - fVar12);
        auVar90._8_4_ = fVar15 * ((fVar9 + pfVar31[0xe]) - fVar12);
        auVar90._12_4_ = fVar15 * ((fVar9 + pfVar31[0xf]) - fVar12);
        auVar91._0_4_ = fVar16 * ((pfVar31[0x10] - fVar10) - fVar13);
        auVar91._4_4_ = fVar16 * ((pfVar31[0x11] - fVar10) - fVar13);
        auVar91._8_4_ = fVar16 * ((pfVar31[0x12] - fVar10) - fVar13);
        auVar91._12_4_ = fVar16 * ((pfVar31[0x13] - fVar10) - fVar13);
        fVar93 = fVar16 * ((fVar10 + (float)*(undefined8 *)(pfVar31 + 0x14)) - fVar13);
        fVar94 = fVar16 * ((fVar10 + (float)((ulong)*(undefined8 *)(pfVar31 + 0x14) >> 0x20)) -
                          fVar13);
        fVar95 = fVar16 * ((fVar10 + (float)*(undefined8 *)(pfVar31 + 0x16)) - fVar13);
        fVar96 = fVar16 * ((fVar10 + (float)((ulong)*(undefined8 *)(pfVar31 + 0x16) >> 0x20)) -
                          fVar13);
        auVar97 = NEON_smin(auVar36,auVar85,4);
        auVar86 = NEON_smax(auVar36,auVar85,4);
        auVar37 = NEON_smin(auVar88,auVar90,4);
        auVar89 = NEON_smax(auVar88,auVar90,4);
        auVar37 = NEON_smax(auVar97,auVar37,4);
        auVar86 = NEON_smin(auVar86,auVar89,4);
        auVar6._4_4_ = fVar94;
        auVar6._0_4_ = fVar93;
        auVar6._8_4_ = fVar95;
        auVar6._12_4_ = fVar96;
        auVar89 = NEON_smin(auVar91,auVar6,4);
        auVar7._4_4_ = fVar94;
        auVar7._0_4_ = fVar93;
        auVar7._8_4_ = fVar95;
        auVar7._12_4_ = fVar96;
        auVar92 = NEON_smax(auVar91,auVar7,4);
        auVar97 = NEON_smax(auVar89,ZEXT816(0),4);
        auVar89 = NEON_smin(auVar92,auVar80,4);
        auVar37 = NEON_smax(auVar37,auVar97,4);
        auVar86 = NEON_smin(auVar86,auVar89,4);
        iVar78 = -(uint)(auVar37._0_4_ <= auVar86._0_4_);
        iVar81 = -(uint)(auVar37._4_4_ <= auVar86._4_4_);
        iVar82 = -(uint)(auVar37._8_4_ <= auVar86._8_4_);
        iVar83 = -(uint)(auVar37._12_4_ <= auVar86._12_4_);
        bVar41 = (byte)iVar78 & (byte)iVar42;
        bVar53 = (byte)((uint)iVar78 >> 8) & (byte)((uint)iVar42 >> 8);
        bVar55 = (byte)((uint)iVar78 >> 0x10) & (byte)((uint)iVar42 >> 0x10);
        bVar57 = (byte)((uint)iVar78 >> 0x18) & (byte)((uint)iVar42 >> 0x18);
        iVar42 = CONCAT13(bVar57,CONCAT12(bVar55,CONCAT11(bVar53,bVar41)));
        bVar59 = (byte)iVar81 & (byte)iVar60;
        bVar63 = (byte)((uint)iVar81 >> 8) & (byte)((uint)iVar60 >> 8);
        bVar65 = (byte)((uint)iVar81 >> 0x10) & (byte)((uint)iVar60 >> 0x10);
        bVar67 = (byte)((uint)iVar81 >> 0x18) & (byte)((uint)iVar60 >> 0x18);
        auVar45._0_8_ = CONCAT17(bVar67,CONCAT16(bVar65,CONCAT15(bVar63,CONCAT14(bVar59,iVar42))));
        auVar45[8] = (byte)iVar82 & (byte)iVar69;
        auVar45[9] = (byte)((uint)iVar82 >> 8) & (byte)((uint)iVar69 >> 8);
        auVar45[10] = (byte)((uint)iVar82 >> 0x10) & (byte)((uint)iVar69 >> 0x10);
        auVar45[0xb] = (byte)((uint)iVar82 >> 0x18) & (byte)((uint)iVar69 >> 0x18);
        auVar47[0xc] = (byte)iVar83 & (byte)iVar74;
        auVar47._0_12_ = auVar45;
        auVar47[0xd] = (byte)((uint)iVar83 >> 8) & (byte)((uint)iVar74 >> 8);
        auVar47[0xe] = (byte)((uint)iVar83 >> 0x10) & (byte)((uint)iVar74 >> 0x10);
        auVar47[0xf] = (byte)((uint)iVar83 >> 0x18) & (byte)((uint)iVar74 >> 0x18);
        if (((iVar42 != 0 || (int)((ulong)auVar45._0_8_ >> 0x20) != 0) || auVar45._8_4_ != 0) ||
            auVar47._12_4_ != 0) {
          iVar42 = CONCAT13(bVar57 & bVar56,
                            CONCAT12(bVar55 & bVar54,CONCAT11(bVar53 & bVar52,bVar41 & bVar40)));
          auVar46._0_8_ =
               CONCAT17(bVar67 & bVar66,
                        CONCAT16(bVar65 & bVar64,
                                 CONCAT15(bVar63 & bVar62,CONCAT14(bVar59 & bVar58,iVar42))));
          auVar46[8] = auVar45[8] & bVar68;
          auVar46[9] = auVar45[9] & bVar70;
          auVar46[10] = auVar45[10] & bVar71;
          auVar46[0xb] = auVar45[0xb] & bVar72;
          auVar48[0xc] = auVar47[0xc] & bVar73;
          auVar48._0_12_ = auVar46;
          auVar48[0xd] = auVar47[0xd] & bVar75;
          auVar48[0xe] = auVar47[0xe] & bVar76;
          auVar48[0xf] = auVar47[0xf] & bVar77;
          uVar32 = (ulong)(uint)(iVar42 + (int)((ulong)auVar46._0_8_ >> 0x20) +
                                auVar46._8_4_ + auVar48._12_4_);
          iVar42 = *(int *)(&DAT_03aadfe0 + uVar32 * 4);
          auVar86 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(pfVar31 + 0x18),
                            *(undefined1 (*) [16])(&DAT_03aae120 + uVar32 * 0x10));
          auVar37 = a64_TBL(ZEXT816(0),auVar37,*(undefined1 (*) [16])(&DAT_03aae120 + uVar32 * 0x10)
                           );
          iVar60 = auVar86._0_4_ << 1;
          iVar69 = auVar86._4_4_ << 1;
          iVar74 = auVar86._8_4_ << 1;
          iVar78 = auVar86._12_4_ << 1;
          bVar41 = -(*(char *)(pfVar31 + 0x1c) == '\0');
          uVar79 = CONCAT14(~bVar41,(uint)(~bVar41 & 1)) & 0x1ffffffff;
          auVar49._0_8_ =
               CONCAT17((char)((uint)iVar69 >> 0x18),
                        CONCAT16((char)((uint)iVar69 >> 0x10),
                                 CONCAT15((char)((uint)iVar69 >> 8),
                                          CONCAT14((byte)(uVar79 >> 0x20) | (byte)iVar69,
                                                   CONCAT13((char)((uint)iVar60 >> 0x18),
                                                            CONCAT12((char)((uint)iVar60 >> 0x10),
                                                                     CONCAT11((char)((uint)iVar60 >>
                                                                                    8),(byte)uVar79
                                                                                       | (byte)
                                                  iVar60)))))));
          auVar49[8] = ~bVar41 & 1 | (byte)iVar74;
          auVar49[9] = (undefined1)((uint)iVar74 >> 8);
          auVar49[10] = (undefined1)((uint)iVar74 >> 0x10);
          auVar49[0xb] = (undefined1)((uint)iVar74 >> 0x18);
          auVar49[0xc] = ~bVar41 & 1 | (byte)iVar78;
          auVar49[0xd] = (undefined1)((uint)iVar78 >> 8);
          auVar49[0xe] = (undefined1)((uint)iVar78 >> 0x10);
          auVar49[0xf] = (undefined1)((uint)iVar78 >> 0x18);
          *(undefined8 *)(local_11a0 + (int)local_1a0) = auVar49._0_8_;
          auVar86 = NEON_ext(auVar49,auVar49,8,1);
          *(long *)((long)auStack_1198 + (long)(int)local_1a0 * 4) = auVar86._0_8_;
          lVar22 = (long)(int)local_1a0;
          *(long *)((long)auStack_998 + lVar22 * 4) = auVar37._8_8_;
          *(long *)(local_9a0 + lVar22) = auVar37._0_8_;
          local_1a0 = local_1a0 + iVar42;
        }
      }
      else {
        uVar5 = *(undefined4 *)(param_4[10] + 0x18);
        *(float *)(param_4[10] + 0x18) = fVar93;
        (**(code **)(**(long **)(*param_4 + 0x50) + 0x68))
                  (*(long **)(*param_4 + 0x50),uVar32,&local_b0);
        uVar17 = (**(code **)(**(long **)(*param_4 + 0x50) + 0x78))
                           (*(long **)(*param_4 + 0x50),uVar32);
        iVar42 = (**(code **)(**(long **)(*param_4 + 0x50) + 0x20))();
        uVar18 = (**(code **)(**(long **)(*param_4 + 0x50) + 0x70))
                           (*(long **)(*param_4 + 0x50),uVar32);
        uVar33 = 0;
        lVar22 = *(long *)(param_4[10] + 0x10);
        *(undefined4 *)(lVar22 + 0x20) = *(undefined4 *)(*param_4 + 0x20);
        piVar2 = (int *)(lVar22 + 0x40);
        piVar3 = (int *)(lVar22 + 0x48);
        uVar32 = 1;
        if (iVar42 <= (int)(uVar34 >> 1) && (uVar17 & 7) != 7) {
          uVar32 = 2;
        }
        pfVar31 = &local_90;
        do {
          iVar42 = (uVar34 & 0xfffffffe | (uint)uVar33) + 1;
          bVar41 = *(byte *)(*param_4 + 0x1c);
          uVar23 = *(uint *)(param_4[0xe] + 0x18);
          iVar60 = *(int *)(param_4[0xe] + 0x1c);
          if ((uVar17 & 7) == 7) {
            if (*piVar2 == 0) {
              pfVar25 = (float *)0x0;
              iVar69 = *piVar3;
              if (iVar69 != 0) goto LAB_02fc0b50;
LAB_02fc0f78:
              puVar24 = (undefined8 *)0x0;
            }
            else {
              pfVar25 = (float *)((long)*piVar2 + (long)piVar2);
              iVar69 = *piVar3;
              if (iVar69 == 0) goto LAB_02fc0f78;
LAB_02fc0b50:
              puVar24 = (undefined8 *)((long)iVar69 + (long)piVar3);
            }
            auVar38._0_4_ = local_a0 - local_b0;
            auVar38._4_4_ = fStack_9c - fStack_ac;
            auVar38._8_4_ = fStack_98 - fStack_a8;
            auVar38._12_4_ = fStack_94 - fStack_a4;
            auVar50._0_4_ = local_90 - local_b0;
            auVar50._4_4_ = fStack_8c - fStack_ac;
            auVar50._8_4_ = fStack_88 - fStack_a8;
            auVar50._12_4_ = fStack_84 - fStack_a4;
            auVar37 = NEON_ext(auVar50,auVar50,4,1);
            auVar80 = NEON_ext(auVar38,auVar38,4,1);
            uVar26 = 3;
            uVar28 = 4;
            fVar93 = auVar38._0_4_ * auVar37._0_4_ - auVar50._0_4_ * auVar80._0_4_;
            auVar51._0_8_ =
                 CONCAT44(auVar38._4_4_ * auVar37._4_4_ - auVar50._4_4_ * auVar80._4_4_,fVar93);
            auVar51._8_4_ = auVar38._8_4_ * auVar50._0_4_ - auVar50._8_4_ * auVar38._0_4_;
            auVar51._12_4_ = auVar38._12_4_ * auVar50._4_4_ - auVar50._12_4_ * auVar38._4_4_;
            auVar80 = NEON_ext(auVar51,auVar51,4,1);
            fVar94 = auVar80._0_4_ * auVar80._0_4_;
            fVar96 = auVar80._4_4_ * auVar80._4_4_;
            auVar89._0_8_ = auVar80._0_8_;
            auVar89._8_8_ = auVar51._0_8_;
            fVar95 = fVar94 + fVar96 + fVar93 * fVar93;
            fVar94 = fVar94 + fVar96 + fVar93 * fVar93;
            uVar44 = CONCAT44(fVar94,fVar95);
            uVar84 = NEON_frsqrte(uVar44,4);
            fVar93 = (float)uVar84;
            fVar96 = (float)((ulong)uVar84 >> 0x20);
            uVar84 = NEON_frsqrts(uVar44,CONCAT44(fVar96 * fVar96,fVar93 * fVar93),4);
            fVar93 = fVar93 * (float)uVar84;
            fVar96 = fVar96 * (float)((ulong)uVar84 >> 0x20);
            uVar44 = NEON_frsqrts(uVar44,CONCAT44(fVar96 * fVar96,fVar93 * fVar93),4);
            uVar84 = CONCAT44(-(uint)(fVar94 <= 0.0),-(uint)(fVar95 <= 0.0));
            pfVar27 = &local_a0;
            pfVar29 = local_80;
            pfVar30 = &local_90;
          }
          else {
            if (*piVar2 == 0) {
              pfVar25 = (float *)0x0;
              iVar69 = *piVar3;
              if (iVar69 != 0) goto LAB_02fc0be0;
LAB_02fc0f8c:
              puVar24 = (undefined8 *)0x0;
            }
            else {
              pfVar25 = (float *)((long)*piVar2 + (long)piVar2);
              iVar69 = *piVar3;
              if (iVar69 == 0) goto LAB_02fc0f8c;
LAB_02fc0be0:
              puVar24 = (undefined8 *)((long)iVar69 + (long)piVar3);
            }
            pfVar27 = pfVar31 + -4;
            uVar26 = 0;
            auVar97._0_4_ = *pfVar27 - local_b0;
            auVar97._4_4_ = pfVar31[-3] - fStack_ac;
            auVar97._8_4_ = pfVar31[-2] - fStack_a8;
            auVar97._12_4_ = pfVar31[-1] - fStack_a4;
            auVar80 = NEON_ext(auVar97,auVar97,4,1);
            auVar86._0_4_ = *pfVar31 - local_b0;
            auVar86._4_4_ = pfVar31[1] - fStack_ac;
            auVar86._8_4_ = pfVar31[2] - fStack_a8;
            auVar86._12_4_ = pfVar31[3] - fStack_a4;
            auVar37 = NEON_ext(auVar86,auVar86,4,1);
            uVar28 = 3;
            fVar93 = auVar97._0_4_ * auVar37._0_4_ - auVar86._0_4_ * auVar80._0_4_;
            auVar92._0_8_ =
                 CONCAT44(auVar97._4_4_ * auVar37._4_4_ - auVar86._4_4_ * auVar80._4_4_,fVar93);
            auVar92._8_4_ = auVar97._8_4_ * auVar86._0_4_ - auVar86._8_4_ * auVar97._0_4_;
            auVar92._12_4_ = auVar97._12_4_ * auVar86._4_4_ - auVar86._12_4_ * auVar97._4_4_;
            auVar80 = NEON_ext(auVar92,auVar92,4,1);
            fVar95 = auVar80._0_4_ * auVar80._0_4_;
            fVar96 = auVar80._4_4_ * auVar80._4_4_;
            auVar89._8_8_ = auVar92._0_8_;
            auVar89._0_8_ = auVar80._0_8_;
            fVar94 = fVar95 + fVar96 + fVar93 * fVar93;
            fVar95 = fVar95 + fVar96 + fVar93 * fVar93;
            uVar44 = CONCAT44(fVar95,fVar94);
            uVar84 = NEON_frsqrte(uVar44,4);
            fVar93 = (float)uVar84;
            fVar96 = (float)((ulong)uVar84 >> 0x20);
            uVar84 = NEON_frsqrts(uVar44,CONCAT44(fVar96 * fVar96,fVar93 * fVar93),4);
            fVar93 = fVar93 * (float)uVar84;
            fVar96 = fVar96 * (float)((ulong)uVar84 >> 0x20);
            uVar84 = CONCAT44(-(uint)(fVar95 <= 0.0),-(uint)(fVar94 <= 0.0));
            uVar44 = NEON_frsqrts(uVar44,CONCAT44(fVar96 * fVar96,fVar93 * fVar93),4);
            pfVar29 = pfVar31;
            pfVar30 = pfVar31;
          }
          fVar93 = (float)uVar44 * fVar93;
          fVar96 = (float)((ulong)uVar44 >> 0x20) * fVar96;
          auVar87._0_4_ = local_b0 * auVar89._0_4_;
          auVar87._4_4_ = fStack_ac * auVar89._4_4_;
          auVar87._8_4_ = fStack_a8 * auVar89._8_4_;
          auVar87._12_4_ = fStack_a4 * auVar89._12_4_;
          fVar43 = (float)CONCAT13((byte)((uint)fVar93 >> 0x18) & ~(byte)((ulong)uVar84 >> 0x18),
                                   CONCAT12((byte)((uint)fVar93 >> 0x10) &
                                            ~(byte)((ulong)uVar84 >> 0x10),
                                            CONCAT11((byte)((uint)fVar93 >> 8) &
                                                     ~(byte)((ulong)uVar84 >> 8),
                                                     SUB41(fVar93,0) & ~(byte)uVar84)));
          auVar80 = NEON_ext(auVar87,auVar87,8,1);
          *pfVar25 = local_b0;
          pfVar25[1] = fStack_ac;
          pfVar25[2] = fStack_a8;
          fVar93 = pfVar27[1];
          fVar94 = pfVar27[2];
          pfVar25[3] = *pfVar27;
          pfVar25[4] = fVar93;
          pfVar25[5] = fVar94;
          fVar93 = pfVar30[1];
          fVar94 = pfVar30[2];
          pfVar25[6] = *pfVar30;
          pfVar25[7] = fVar93;
          pfVar25[8] = fVar94;
          fVar93 = pfVar29[1];
          fVar94 = pfVar29[2];
          fVar95 = auVar89._0_4_ * fVar43;
          fVar61 = (float)(CONCAT17((byte)((uint)fVar96 >> 0x18) & ~(byte)((ulong)uVar84 >> 0x38),
                                    CONCAT16((byte)((uint)fVar96 >> 0x10) &
                                             ~(byte)((ulong)uVar84 >> 0x30),
                                             CONCAT15((byte)((uint)fVar96 >> 8) &
                                                      ~(byte)((ulong)uVar84 >> 0x28),
                                                      CONCAT14(SUB41(fVar96,0) &
                                                               ~(byte)((ulong)uVar84 >> 0x20),fVar43
                                                              )))) >> 0x20);
          fVar96 = auVar89._4_4_ * fVar61;
          auVar39._0_8_ = CONCAT44(fVar96,fVar95);
          auVar39._8_4_ = auVar89._8_4_ * fVar43;
          auVar39._12_4_ = -(auVar87._0_4_ + auVar87._4_4_ + auVar80._0_4_) * fVar61;
          pfVar25[9] = *pfVar29;
          pfVar25[10] = fVar93;
          pfVar25[0xb] = fVar94;
          lVar4 = 0;
          if (*(int *)(lVar22 + 0x58) != 0) {
            lVar4 = (long)*(int *)(lVar22 + 0x58) + lVar22 + 0x58;
          }
          *(undefined4 *)(lVar22 + 0x44) = uVar28;
          *(undefined1 *)(lVar4 + 3) = uVar26;
          *(undefined1 *)(lVar4 + 7) = uVar26;
          uVar44 = auVar39._8_8_;
          puVar24[1] = uVar44;
          *puVar24 = auVar39._0_8_;
          *(float *)(puVar24 + 3) = -auVar39._8_4_;
          *(float *)((long)puVar24 + 0x1c) = -auVar39._12_4_;
          *(float *)(puVar24 + 2) = -fVar95;
          *(float *)((long)puVar24 + 0x14) = -fVar96;
          NEON_fmov(0x3f800000,4);
          puVar24[5] = uVar44;
          puVar24[4] = auVar39._0_8_;
          puVar24[7] = uVar44;
          puVar24[6] = auVar39._0_8_;
          puVar24 = (undefined8 *)param_4[0xe];
          local_110 = *puVar24;
          local_108 = puVar24[1];
          local_f0 = puVar24[4];
          uStack_e8 = 0;
          local_e0 = *(undefined1 *)(puVar24 + 6);
          local_dc = *(undefined4 *)((long)puVar24 + 0x34);
          local_d0 = puVar24[8];
          uStack_c8 = puVar24[9];
          uStack_b8 = SUB168(*(undefined1 (*) [16])(puVar24 + 10),8);
          local_c0 = SUB168(*(undefined1 (*) [16])(puVar24 + 10),0);
          local_d8 = *(undefined4 *)(puVar24 + 7);
          local_100 = *param_4;
          iVar69 = *(int *)((long)puVar24 + 0x1c) + (uint)*(byte *)(local_100 + 0x1c);
          _local_f8 = CONCAT44(iVar69,(iVar42 << (ulong)(-iVar69 & 0x1f)) - 1U |
                                      (&DAT_03aa74b0)[*(int *)((long)puVar24 + 0x1c)] &
                                      *(uint *)(puVar24 + 3));
          local_120 = *(undefined8 *)param_4[0xd];
          local_118 = ((undefined8 *)param_4[0xd])[1];
          plVar21 = (long *)param_4[0xb];
          plVar19 = (long *)*plVar21;
          if (plVar19 != (long *)0x0) {
            uVar23 = (iVar42 << (ulong)(-((uint)bVar41 + iVar60) & 0x1f)) - 1U |
                     (&DAT_03aa74b0)[iVar60] & uVar23;
            (**(code **)(*plVar19 + 0x40))
                      (plVar19,uVar18,2,*puVar24,puVar24[1],local_100,uVar23,lVar22,&local_120);
            plVar21 = (long *)param_4[0xb];
            if (plVar21[1] != 0) {
              local_158[0] = (undefined2)plVar21[2];
              uVar44 = *(undefined8 *)((long)plVar21 + 0x14);
              *(undefined4 *)((undefined8 *)((ulong)local_158 | 4) + 1) =
                   *(undefined4 *)((long)plVar21 + 0x1c);
              *(undefined8 *)((ulong)local_158 | 4) = uVar44;
              puVar24 = (undefined8 *)param_4[0xc];
              local_148 = *puVar24;
              local_140 = puVar24[1];
              local_138 = puVar24[2];
              local_130 = *(undefined4 *)(puVar24 + 3);
              local_128 = plVar21[5];
              local_190[0] = (undefined2)local_120;
              uVar44 = *(undefined8 *)((ulong)&local_120 | 4);
              *(undefined4 *)((undefined8 *)((ulong)local_190 | 4) + 1) =
                   *(undefined4 *)((undefined8 *)((ulong)&local_120 | 4) + 1);
              *(undefined8 *)((ulong)local_190 | 4) = uVar44;
              local_180 = *(undefined8 *)param_4[0xe];
              local_178 = ((undefined8 *)param_4[0xe])[1];
              local_170 = *param_4;
              local_168 = uVar23;
              local_160 = lVar22;
              uVar20 = (**(code **)(*(long *)plVar21[1] + 0x40))
                                 ((long *)plVar21[1],2,(char)param_4[0xf] == '\0',local_158,
                                  local_190);
              if ((uVar20 & 1) == 0) break;
              plVar21 = (long *)param_4[0xb];
            }
          }
          FUN_02f91438(*(undefined8 *)param_4[10],(undefined8 *)param_4[10],plVar21,param_4[0xc],
                       lVar22,&local_120,&local_110,param_4 + 2,(char)param_4[0xf],param_4[0x10],
                       param_4[0x11]);
          uVar33 = uVar33 + 1;
          pfVar31 = pfVar31 + 4;
        } while (uVar33 < uVar32);
        *(undefined4 *)(param_4[10] + 0x18) = uVar5;
        auVar80._0_8_ = *(undefined8 *)(param_4[0x10] + 0x10);
        auVar80._8_8_ = auVar80._0_8_;
        uVar33 = param_5 & 0xffffffff;
        if (*(char *)(param_4[0x10] + 0x18) != '\0') {
          return;
        }
      }
    }
  } while( true );
}


