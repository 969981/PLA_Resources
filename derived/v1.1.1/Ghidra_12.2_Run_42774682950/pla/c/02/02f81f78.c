/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f81f78; name: FUN_02f81f78
 */


void FUN_02f81f78(long *param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  byte bVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  undefined1 *puVar21;
  int iVar22;
  byte *pbVar23;
  undefined1 (*pauVar24) [16];
  float fVar25;
  float fVar32;
  float fVar34;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar36;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar33;
  float fVar35;
  undefined1 auVar31 [16];
  float fVar37;
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar43;
  undefined1 auVar50 [16];
  float fVar51;
  undefined8 uVar53;
  float fVar58;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar52;
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  float fVar62;
  float fVar63;
  float fVar67;
  float fVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar69;
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  uint uVar72;
  float fVar73;
  undefined8 uVar74;
  undefined1 auVar75 [12];
  undefined1 auVar76 [12];
  float fVar77;
  undefined4 uVar78;
  undefined8 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  float fVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  float fVar101;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar1 = *(ushort *)((long)param_1 + 0x1c);
  if ((ulong)uVar1 != 0) {
    lVar20 = 0;
    if (*param_1 != 0) {
      lVar20 = *param_1 + (long)param_1;
    }
    pauVar10 = (undefined1 (*) [16])(lVar20 + (ulong)uVar1 * 0x20);
    auVar38 = *pauVar10;
    auVar26 = pauVar10[1];
    lVar4 = param_2[1];
    plVar15 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
    lVar16 = *plVar15;
    lVar20 = 0;
    if (lVar16 != 0) {
      lVar20 = lVar16 + (long)plVar15;
    }
    if ((*(uint *)(lVar20 + ((ulong)(uVar1 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar1 & 0x1f)) != 0) {
      auVar98._0_12_ = auVar26._0_12_;
      auVar98._12_4_ = 0;
      auVar54._0_4_ = -(uint)(auVar38._0_4_ <= *(float *)(param_3 + 4));
      auVar54._4_4_ = -(uint)(auVar38._4_4_ <= *(float *)((long)param_3 + 0x24));
      auVar54._8_4_ = -(uint)(auVar38._8_4_ <= *(float *)(param_3 + 5));
      auVar54._12_4_ = -(uint)(auVar38._12_4_ <= *(float *)((long)param_3 + 0x2c));
      auVar44._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar26._0_4_);
      auVar44._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar26._4_4_);
      auVar44._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar26._8_4_);
      auVar44._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
      uVar72 = CONCAT13((byte)((uint)auVar54._0_4_ >> 0x18) & (byte)((uint)auVar44._0_4_ >> 0x18),
                        CONCAT12((byte)((uint)auVar54._0_4_ >> 0x10) &
                                 (byte)((uint)auVar44._0_4_ >> 0x10),
                                 CONCAT11((byte)((uint)auVar54._0_4_ >> 8) &
                                          (byte)((uint)auVar44._0_4_ >> 8),
                                          (byte)auVar54._0_4_ & (byte)auVar44._0_4_)));
      auVar75._0_8_ =
           CONCAT17((byte)((uint)auVar54._4_4_ >> 0x18) & (byte)((uint)auVar44._4_4_ >> 0x18),
                    CONCAT16((byte)((uint)auVar54._4_4_ >> 0x10) &
                             (byte)((uint)auVar44._4_4_ >> 0x10),
                             CONCAT15((byte)((uint)auVar54._4_4_ >> 8) &
                                      (byte)((uint)auVar44._4_4_ >> 8),
                                      CONCAT14((byte)auVar54._4_4_ & (byte)auVar44._4_4_,uVar72))));
      auVar75[8] = (byte)auVar54._8_4_ & (byte)auVar44._8_4_;
      auVar75[9] = (byte)((uint)auVar54._8_4_ >> 8) & (byte)((uint)auVar44._8_4_ >> 8);
      auVar75[10] = (byte)((uint)auVar54._8_4_ >> 0x10) & (byte)((uint)auVar44._8_4_ >> 0x10);
      auVar75[0xb] = (byte)((uint)auVar54._8_4_ >> 0x18) & (byte)((uint)auVar44._8_4_ >> 0x18);
      auVar38 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar38,4);
      auVar26 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar98,4);
      auVar26 = auVar26 ^ (auVar26 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar44;
      auVar38 = auVar38 ^ (auVar38 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar54;
      param_3[7] = auVar26._8_8_;
      param_3[6] = auVar26._0_8_;
      param_3[9] = auVar38._8_8_;
      param_3[8] = auVar38._0_8_;
      puVar5 = PTR_PTR_0434a080;
      if ((uVar72 & (uint)((ulong)auVar75._0_8_ >> 0x20) & auVar75._8_4_) != 0) {
        uVar79 = NEON_fmov(0x3f800000,4);
LAB_02f8208c:
        uVar1 = *(ushort *)(pauVar10[1] + 0xc);
        do {
          uVar18 = (ulong)uVar1;
          if (uVar18 == 0) goto LAB_02f821d0;
LAB_02f82094:
          lVar20 = 0;
          if (*param_1 != 0) {
            lVar20 = *param_1 + (long)param_1;
          }
          uVar1 = *(ushort *)(pauVar10[1] + 0xe);
          pauVar10 = (undefined1 (*) [16])(lVar20 + uVar18 * 0x20);
          pauVar24 = (undefined1 (*) [16])(lVar20 + (ulong)uVar1 * 0x20);
          auVar38 = *pauVar10;
          auVar26 = pauVar10[1];
          auVar44 = *pauVar24;
          auVar98 = pauVar24[1];
          plVar15 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
          lVar17 = *plVar15;
          lVar20 = lVar17 + (long)plVar15;
          lVar16 = 0;
          if (lVar17 != 0) {
            lVar16 = lVar20;
          }
          if ((*(uint *)(lVar16 + (uVar18 >> 3 & 0x1ffc)) & 1 << (ulong)((uint)uVar18 & 0x1f)) == 0)
          {
            bVar6 = false;
          }
          else {
            auVar45._0_12_ = auVar26._0_12_;
            auVar45._12_4_ = 0;
            auVar70._0_4_ = -(uint)(auVar38._0_4_ <= *(float *)(param_3 + 4));
            auVar70._4_4_ = -(uint)(auVar38._4_4_ <= *(float *)((long)param_3 + 0x24));
            auVar70._8_4_ = -(uint)(auVar38._8_4_ <= *(float *)(param_3 + 5));
            auVar70._12_4_ = -(uint)(auVar38._12_4_ <= *(float *)((long)param_3 + 0x2c));
            uVar78 = (undefined4)((ulong)param_3[7] >> 0x20);
            auVar54 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar38,4);
            auVar64._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar26._0_4_);
            auVar64._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar26._4_4_);
            auVar64._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar26._8_4_);
            auVar64._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
            auVar26._12_4_ = uVar78;
            auVar26._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar26 = NEON_fmax(auVar26,auVar45,4);
            auVar38._12_4_ = uVar78;
            auVar38._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar26 = auVar26 ^ (auVar26 ^ auVar38) & auVar64;
            auVar54 = auVar54 ^ (auVar54 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar70;
            bVar6 = (CONCAT13((byte)((uint)auVar70._0_4_ >> 0x18) &
                              (byte)((uint)auVar64._0_4_ >> 0x18),
                              CONCAT12((byte)((uint)auVar70._0_4_ >> 0x10) &
                                       (byte)((uint)auVar64._0_4_ >> 0x10),
                                       CONCAT11((byte)((uint)auVar70._0_4_ >> 8) &
                                                (byte)((uint)auVar64._0_4_ >> 8),
                                                (byte)auVar70._0_4_ & (byte)auVar64._0_4_))) &
                     CONCAT13((byte)((uint)auVar70._4_4_ >> 0x18) &
                              (byte)((uint)auVar64._4_4_ >> 0x18),
                              CONCAT12((byte)((uint)auVar70._4_4_ >> 0x10) &
                                       (byte)((uint)auVar64._4_4_ >> 0x10),
                                       CONCAT11((byte)((uint)auVar70._4_4_ >> 8) &
                                                (byte)((uint)auVar64._4_4_ >> 8),
                                                (byte)auVar70._4_4_ & (byte)auVar64._4_4_))) &
                    CONCAT13((byte)((uint)auVar70._8_4_ >> 0x18) &
                             (byte)((uint)auVar64._8_4_ >> 0x18),
                             CONCAT12((byte)((uint)auVar70._8_4_ >> 0x10) &
                                      (byte)((uint)auVar64._8_4_ >> 0x10),
                                      CONCAT11((byte)((uint)auVar70._8_4_ >> 8) &
                                               (byte)((uint)auVar64._8_4_ >> 8),
                                               (byte)auVar70._8_4_ & (byte)auVar64._8_4_)))) != 0;
            param_3[7] = auVar26._8_8_;
            param_3[6] = auVar26._0_8_;
            param_3[9] = auVar54._8_8_;
            param_3[8] = auVar54._0_8_;
            plVar15 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
            lVar17 = *plVar15;
            lVar20 = lVar17 + (long)plVar15;
          }
          lVar16 = 0;
          if (lVar17 != 0) {
            lVar16 = lVar20;
          }
          if ((*(uint *)(lVar16 + ((ulong)(uVar1 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar1 & 0x1f)) == 0
             ) {
LAB_02f821a4:
            bVar14 = 0;
          }
          else {
            auVar27._0_12_ = auVar98._0_12_;
            auVar27._12_4_ = 0;
            auVar55._0_4_ = -(uint)(auVar44._0_4_ <= *(float *)(param_3 + 4));
            auVar55._4_4_ = -(uint)(auVar44._4_4_ <= *(float *)((long)param_3 + 0x24));
            auVar55._8_4_ = -(uint)(auVar44._8_4_ <= *(float *)(param_3 + 5));
            auVar55._12_4_ = -(uint)(auVar44._12_4_ <= *(float *)((long)param_3 + 0x2c));
            auVar46._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar98._0_4_);
            auVar46._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar98._4_4_);
            auVar46._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar98._8_4_);
            auVar46._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
            uVar72 = CONCAT13((byte)((uint)auVar55._0_4_ >> 0x18) &
                              (byte)((uint)auVar46._0_4_ >> 0x18),
                              CONCAT12((byte)((uint)auVar55._0_4_ >> 0x10) &
                                       (byte)((uint)auVar46._0_4_ >> 0x10),
                                       CONCAT11((byte)((uint)auVar55._0_4_ >> 8) &
                                                (byte)((uint)auVar46._0_4_ >> 8),
                                                (byte)auVar55._0_4_ & (byte)auVar46._0_4_)));
            auVar76._0_8_ =
                 CONCAT17((byte)((uint)auVar55._4_4_ >> 0x18) & (byte)((uint)auVar46._4_4_ >> 0x18),
                          CONCAT16((byte)((uint)auVar55._4_4_ >> 0x10) &
                                   (byte)((uint)auVar46._4_4_ >> 0x10),
                                   CONCAT15((byte)((uint)auVar55._4_4_ >> 8) &
                                            (byte)((uint)auVar46._4_4_ >> 8),
                                            CONCAT14((byte)auVar55._4_4_ & (byte)auVar46._4_4_,
                                                     uVar72))));
            auVar76[8] = (byte)auVar55._8_4_ & (byte)auVar46._8_4_;
            auVar76[9] = (byte)((uint)auVar55._8_4_ >> 8) & (byte)((uint)auVar46._8_4_ >> 8);
            auVar76[10] = (byte)((uint)auVar55._8_4_ >> 0x10) & (byte)((uint)auVar46._8_4_ >> 0x10);
            auVar76[0xb] = (byte)((uint)auVar55._8_4_ >> 0x18) & (byte)((uint)auVar46._8_4_ >> 0x18)
            ;
            auVar38 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar44,4);
            auVar26 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar27,4);
            auVar26 = auVar26 ^ (auVar26 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar46;
            auVar38 = auVar38 ^ (auVar38 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar55;
            param_3[7] = auVar26._8_8_;
            param_3[6] = auVar26._0_8_;
            param_3[9] = auVar38._8_8_;
            param_3[8] = auVar38._0_8_;
            if ((uVar72 & (uint)((ulong)auVar76._0_8_ >> 0x20) & auVar76._8_4_) == 0)
            goto LAB_02f821a4;
            bVar14 = 2;
          }
          bVar14 = bVar14 | bVar6;
          if (bVar14 == 1) goto LAB_02f8208c;
          if (bVar14 != 3) {
            pauVar10 = pauVar24;
            if (bVar14 != 2) {
LAB_02f823b0:
              do {
                if ((int)param_2[1] <= (int)lVar4) {
                  return;
                }
                iVar22 = (int)param_2[1] + -1;
                *(int *)(param_2 + 1) = iVar22;
                lVar20 = 0;
                if (*param_1 != 0) {
                  lVar20 = *param_1 + (long)param_1;
                }
                pauVar10 = (undefined1 (*) [16])
                           (lVar20 + (ulong)*(ushort *)(*param_2 + (long)iVar22 * 2) * 0x20);
                uVar18 = (ulong)*(ushort *)(pauVar10[1] + 0xc);
                if (uVar18 != 0) goto LAB_02f82094;
LAB_02f821d0:
                lVar20 = *param_3;
                lVar16 = *(long *)(lVar20 + 8);
                uVar1 = *(ushort *)(pauVar10[1] + 0xe);
                pauVar10 = (undefined1 (*) [16])
                           (lVar16 + 0x48 + (ulong)uVar1 * 0x40 + *(long *)(lVar16 + 0x48));
                pbVar23 = pauVar10[1] + 0xe;
                if ((*pbVar23 >> 6 & 1) != 0) {
                  pauVar24 = pauVar10 + 3;
                  if (*(long *)*pauVar24 == 0) {
                    puVar21 = (undefined1 *)0x0;
                  }
                  else {
                    puVar21 = *pauVar24 + *(long *)*pauVar24;
                  }
                  plVar15 = (long *)(*(long *)(lVar20 + 0x10) + 0x28);
                  local_88 = **(undefined8 **)(lVar20 + 0x58);
                  uStack_80 = (*(undefined8 **)(lVar20 + 0x58))[1];
                  uVar11 = *(undefined8 *)((long)plVar15 + (ulong)uVar1 * 8 + *plVar15);
                  plVar19 = *(long **)(lVar20 + 0x70);
                  puVar12 = *(undefined8 **)(lVar20 + 0x60);
                  uVar18 = puVar12[3];
                  iVar22 = (int)(uVar18 >> 0x20) + (uint)*(byte *)(lVar16 + 0x1c);
                  uVar18 = (ulong)((uVar1 + 1 << (ulong)(-iVar22 & 0x1f)) - 1) |
                           uVar18 & (uint)(&DAT_03aa74b0)[(long)uVar18 >> 0x20];
                  plVar15 = (long *)**(long **)(lVar20 + 0x48);
                  uVar78 = (undefined4)uVar18;
                  if (plVar15 != (long *)0x0) {
                    if (*(long *)*pauVar24 == 0) {
                      puVar8 = (undefined1 *)0x0;
                    }
                    else {
                      puVar8 = *pauVar24 + *(long *)*pauVar24;
                    }
                    (**(code **)(*plVar15 + 0x40))
                              (plVar15,*(undefined2 *)(pauVar10[2] + 0xc),6,*puVar12,puVar12[1],
                               lVar16,uVar18,puVar8,&local_88);
                    lVar17 = *(long *)(lVar20 + 0x48);
                    if (*(long *)(lVar17 + 8) != 0) {
                      local_140 = CONCAT62(local_140._2_6_,*(undefined2 *)(lVar17 + 0x10));
                      uVar13 = *(undefined8 *)(lVar17 + 0x14);
                      *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                           *(undefined4 *)(lVar17 + 0x1c);
                      *(undefined8 *)((ulong)&local_140 | 4) = uVar13;
                      puVar12 = *(undefined8 **)(lVar20 + 0x50);
                      local_130 = (undefined1 *)*puVar12;
                      local_128 = puVar12[1];
                      local_120 = puVar12[2];
                      local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(puVar12 + 3));
                      local_e0 = CONCAT62(local_e0._2_6_,(undefined2)local_88);
                      uVar13 = *(undefined8 *)((ulong)&local_88 | 4);
                      local_110 = 0;
                      *(undefined4 *)((undefined8 *)((ulong)&local_e0 | 4) + 1) =
                           *(undefined4 *)((undefined8 *)((ulong)&local_88 | 4) + 1);
                      *(undefined8 *)((ulong)&local_e0 | 4) = uVar13;
                      local_d0 = **(undefined8 **)(lVar20 + 0x60);
                      local_c8 = (*(undefined8 **)(lVar20 + 0x60))[1];
                      local_b8 = CONCAT44(local_b8._4_4_,uVar78);
                      local_b0 = *(undefined1 **)*pauVar24;
                      if (local_b0 != (undefined1 *)0x0) {
                        local_b0 = *pauVar24 + (long)local_b0;
                      }
                      lStack_c0 = lVar16;
                      uVar18 = (**(code **)(**(long **)(lVar17 + 8) + 0x40))
                                         (*(long **)(lVar17 + 8),6,1,&local_140,&local_e0);
                      if ((uVar18 & 1) == 0) goto LAB_02f823b0;
                    }
                  }
                  if (puVar21[0x19] == '\x03') {
                    puVar12 = *(undefined8 **)(lVar20 + 0x48);
                    local_d8 = puVar12[1];
                    local_e0 = *puVar12;
                    local_b8 = puVar12[5];
                    local_c8 = puVar12[3];
                    local_d0 = puVar12[2];
                    lStack_c0 = puVar12[4];
                    fVar41 = (float)uVar79;
                    if ((*pbVar23 >> 3 & 1) == 0) {
                      fVar25 = *(float *)pauVar10[1];
                      fVar32 = *(float *)(pauVar10[1] + 4);
                      fVar34 = *(float *)(pauVar10[1] + 8);
                      if ((*pbVar23 >> 2 & 1) == 0) {
                        uStack_a8 = CONCAT44(*(float *)(lVar20 + 0x2c) - 0.0,
                                             *(float *)(lVar20 + 0x28) - fVar34);
                        local_b0 = (undefined1 *)
                                   CONCAT44(*(float *)(lVar20 + 0x24) - fVar32,
                                            *(float *)(lVar20 + 0x20) - fVar25);
                        fVar25 = *(float *)(lVar20 + 0x30) - fVar25;
                        fVar32 = *(float *)(lVar20 + 0x34) - fVar32;
                        fVar34 = *(float *)(lVar20 + 0x38) - fVar34;
                        fVar36 = *(float *)(lVar20 + 0x3c) - 0.0;
LAB_02f824e8:
                        uStack_98 = CONCAT44(fVar36,fVar34);
                        local_a0 = CONCAT44(fVar32,fVar25);
                      }
                      else {
                        auVar26 = *pauVar10;
                        fVar43 = auVar26._0_4_;
                        auVar49._0_4_ = fVar43 + fVar43;
                        fVar52 = auVar26._4_4_;
                        auVar49._4_4_ = fVar52 + fVar52;
                        auVar49._8_4_ = auVar26._8_4_ + auVar26._8_4_;
                        fVar57 = auVar26._12_4_;
                        auVar49._12_4_ = fVar57 + fVar57;
                        auVar26 = NEON_ext(auVar26,auVar26,8,1);
                        auVar38 = NEON_ext(auVar49,auVar49,8,1);
                        fVar42 = auVar26._0_4_ * auVar38._0_4_;
                        fVar36 = (float)*(undefined8 *)(lVar20 + 0x20);
                        fVar33 = (float)((ulong)*(undefined8 *)(lVar20 + 0x20) >> 0x20);
                        fVar35 = (float)*(undefined8 *)(lVar20 + 0x28);
                        fVar101 = auVar49._4_4_ * fVar43 + auVar49._8_4_ * fVar57;
                        fVar96 = auVar49._4_4_ * fVar43 - auVar49._8_4_ * fVar57;
                        fVar100 = auVar49._8_4_ * fVar43 - auVar49._4_4_ * fVar57;
                        fVar37 = auVar49._8_4_ * fVar43 + auVar49._4_4_ * fVar57;
                        fVar51 = fVar41 - (auVar49._4_4_ * fVar52 + fVar42);
                        fVar42 = fVar41 - (auVar49._0_4_ * fVar43 + fVar42);
                        fVar73 = auVar49._8_4_ * fVar52 - auVar49._0_4_ * fVar57;
                        fVar62 = fVar41 - (auVar49._0_4_ * fVar43 + auVar49._4_4_ * fVar52);
                        fVar25 = (fVar36 + *(float *)(lVar20 + 0x30)) * 0.5 - fVar25;
                        fVar32 = (fVar33 + *(float *)(lVar20 + 0x34)) * 0.5 - fVar32;
                        fVar34 = (fVar35 + *(float *)(lVar20 + 0x38)) * 0.5 - fVar34;
                        fVar43 = auVar49._8_4_ * fVar52 + auVar49._0_4_ * fVar57;
                        fVar52 = (*(float *)(lVar20 + 0x30) - fVar36) * 0.5;
                        fVar57 = (*(float *)(lVar20 + 0x34) - fVar33) * 0.5;
                        fVar58 = (*(float *)(lVar20 + 0x38) - fVar35) * 0.5;
                        fVar36 = fVar100 * fVar34 + fVar51 * fVar25 + fVar101 * fVar32;
                        fVar33 = fVar43 * fVar34 + fVar96 * fVar25 + fVar42 * fVar32;
                        fVar35 = fVar62 * fVar34 + fVar37 * fVar25 + fVar73 * fVar32;
                        fVar25 = fVar34 * 0.0 + fVar73 * fVar25 + fVar32 * 0.0;
                        fVar32 = ABS(fVar100 * fVar58) +
                                 ABS(fVar51 * fVar52) + ABS(fVar101 * fVar57);
                        fVar34 = ABS(fVar43 * fVar58) + ABS(fVar96 * fVar52) + ABS(fVar42 * fVar57);
                        fVar43 = ABS(fVar62 * fVar58) + ABS(fVar37 * fVar52) + ABS(fVar73 * fVar57);
                        fVar37 = ABS(fVar58 * 0.0) + ABS(fVar73 * fVar52) + ABS(fVar57 * 0.0);
                        uStack_a8 = CONCAT44(fVar25 - fVar37,fVar35 - fVar43);
                        local_b0 = (undefined1 *)CONCAT44(fVar33 - fVar34,fVar36 - fVar32);
                        uStack_98 = CONCAT44(fVar25 + fVar37,fVar35 + fVar43);
                        local_a0 = CONCAT44(fVar33 + fVar34,fVar36 + fVar32);
                      }
                    }
                    else {
                      fVar25 = *(float *)(lVar20 + 0x20);
                      fVar32 = *(float *)(lVar20 + 0x24);
                      local_b0 = *(undefined1 **)(lVar20 + 0x20);
                      fVar34 = *(float *)(lVar20 + 0x28);
                      uStack_a8 = *(undefined8 *)(lVar20 + 0x28);
                      fVar36 = *(float *)(lVar20 + 0x30);
                      fVar33 = *(float *)(lVar20 + 0x34);
                      fVar35 = *(float *)(lVar20 + 0x38);
                      if ((fVar36 < fVar25 || fVar33 < fVar32) || fVar35 < fVar34) {
                        fVar25 = *(float *)(lVar20 + 0x30);
                        fVar32 = *(float *)(lVar20 + 0x34);
                        fVar34 = *(float *)(lVar20 + 0x38);
                        fVar36 = *(float *)(lVar20 + 0x3c);
                        goto LAB_02f824e8;
                      }
                      auVar26 = *pauVar10;
                      fVar73 = auVar26._0_4_;
                      auVar65._0_4_ = fVar73 + fVar73;
                      fVar100 = auVar26._4_4_;
                      auVar65._4_4_ = fVar100 + fVar100;
                      auVar65._8_4_ = auVar26._8_4_ + auVar26._8_4_;
                      fVar60 = auVar26._12_4_;
                      auVar65._12_4_ = fVar60 + fVar60;
                      auVar71._0_12_ = SUB1612(pauVar10[2],0);
                      auVar71._12_4_ = 0x3f800000;
                      auVar26 = NEON_ext(auVar26,auVar26,8,1);
                      auVar38 = NEON_ext(auVar65,auVar65,8,1);
                      auVar98 = NEON_frecpe(auVar71,4);
                      fVar57 = auVar26._0_4_ * auVar38._0_4_;
                      auVar26 = NEON_frecps(auVar71,auVar98,4);
                      fVar43 = (fVar36 - fVar25) * 0.5;
                      fVar37 = (fVar33 - fVar32) * 0.5;
                      fVar52 = (fVar35 - fVar34) * 0.5;
                      fVar51 = (fVar25 + fVar36) * 0.5;
                      fVar58 = (fVar32 + fVar33) * 0.5;
                      fVar62 = (fVar34 + fVar35) * 0.5;
                      fVar42 = auVar65._8_4_ * fVar100 - auVar65._0_4_ * fVar60;
                      auVar99._0_4_ = auVar98._0_4_ * auVar26._0_4_;
                      auVar99._4_4_ = auVar98._4_4_ * auVar26._4_4_;
                      auVar99._8_4_ = auVar98._8_4_ * auVar26._8_4_;
                      auVar99._12_4_ = auVar98._12_4_ * auVar26._12_4_;
                      auVar26 = NEON_frecps(auVar71,auVar99,4);
                      fVar77 = *(float *)(pauVar10[1] + 8);
                      fVar63 = auVar99._0_4_ * auVar26._0_4_;
                      fVar67 = auVar99._4_4_ * auVar26._4_4_;
                      fVar68 = auVar99._8_4_ * auVar26._8_4_;
                      fVar69 = auVar99._12_4_ * auVar26._12_4_;
                      fVar96 = fVar63 * (fVar41 - (auVar65._4_4_ * fVar100 + fVar57));
                      fVar101 = fVar67 * (auVar65._4_4_ * fVar73 - auVar65._8_4_ * fVar60);
                      fVar59 = fVar68 * (auVar65._8_4_ * fVar73 + auVar65._4_4_ * fVar60);
                      fVar61 = fVar69 * fVar42;
                      fVar33 = fVar63 * (auVar65._4_4_ * fVar73 + auVar65._8_4_ * fVar60);
                      fVar35 = fVar67 * (fVar41 - (auVar65._0_4_ * fVar73 + fVar57));
                      fVar42 = fVar68 * fVar42;
                      fVar57 = fVar69 * 0.0;
                      fVar63 = fVar63 * (auVar65._8_4_ * fVar73 - auVar65._4_4_ * fVar60);
                      fVar67 = fVar67 * (auVar65._8_4_ * fVar100 + auVar65._0_4_ * fVar60);
                      fVar68 = fVar68 * (fVar41 - (auVar65._0_4_ * fVar73 + auVar65._4_4_ * fVar100)
                                        );
                      fVar69 = fVar69 * 0.0;
                      fVar73 = (float)*(undefined8 *)pauVar10[1];
                      fVar100 = (float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20);
                      fVar25 = ABS(fVar63 * fVar52) + ABS(fVar96 * fVar43) + ABS(fVar33 * fVar37);
                      fVar32 = ABS(fVar67 * fVar52) + ABS(fVar101 * fVar43) + ABS(fVar35 * fVar37);
                      fVar34 = ABS(fVar68 * fVar52) + ABS(fVar59 * fVar43) + ABS(fVar42 * fVar37);
                      fVar36 = ABS(fVar69 * fVar52) + ABS(fVar61 * fVar43) + ABS(fVar57 * fVar37);
                      fVar33 = fVar63 * fVar62 + fVar96 * fVar51 + fVar33 * fVar58 +
                               -(fVar63 * fVar77 + fVar96 * fVar73 + fVar33 * fVar100);
                      fVar35 = fVar67 * fVar62 + fVar101 * fVar51 + fVar35 * fVar58 +
                               -(fVar67 * fVar77 + fVar101 * fVar73 + fVar35 * fVar100);
                      fVar43 = fVar68 * fVar62 + fVar59 * fVar51 + fVar42 * fVar58 +
                               -(fVar68 * fVar77 + fVar59 * fVar73 + fVar42 * fVar100);
                      fVar37 = fVar69 * fVar62 + fVar61 * fVar51 + fVar57 * fVar58 +
                               fVar69 * fVar77 + fVar61 * fVar73 + fVar57 * fVar100;
                      uStack_a8 = CONCAT44(fVar37 - fVar36,fVar43 - fVar34);
                      local_b0 = (undefined1 *)CONCAT44(fVar35 - fVar32,fVar33 - fVar25);
                      uStack_98 = CONCAT44(fVar36 + fVar37,fVar34 + fVar43);
                      local_a0 = CONCAT44(fVar32 + fVar35,fVar25 + fVar33);
                    }
                    puVar12 = *(undefined8 **)(lVar20 + 0x60);
                    NEON_fmov(0x3f800000,4);
                    uVar18 = (ulong)local_110 >> 8;
                    local_140 = *puVar12;
                    local_138 = puVar12[1];
                    local_120 = puVar12[4];
                    local_100 = puVar12[8];
                    uStack_f8 = puVar12[9];
                    local_f0 = puVar12[10];
                    uStack_e8 = puVar12[0xb];
                    uStack_108 = *(undefined4 *)(puVar12 + 7);
                    local_110 = CONCAT44(*(undefined4 *)((long)puVar12 + 0x34),
                                         (int)CONCAT71((int7)uVar18,*(undefined1 *)(puVar12 + 6)));
                    auVar28._8_4_ = 0x5f7ffff0;
                    auVar28._0_8_ = 0x5f7ffff05f7ffff0;
                    auVar28._12_4_ = 0x5f7ffff0;
                    local_128 = CONCAT44(iVar22,uVar78);
                    auVar39._8_4_ = 0xdf7ffff0;
                    auVar39._0_8_ = 0xdf7ffff0df7ffff0;
                    auVar39._12_4_ = 0xdf7ffff0;
                    uStack_158 = auVar39._8_8_;
                    local_160 = 0xdf7ffff0df7ffff0;
                    uStack_148 = auVar28._8_8_;
                    uStack_150 = 0x5f7ffff05f7ffff0;
                    local_130 = puVar21;
                    local_118 = uVar11;
                    (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar21[0x18] * 0x200 + 0xe0))
                              (puVar21,*(undefined8 *)(lVar20 + 0x40),&local_e0,
                               *(undefined8 *)(lVar20 + 0x50),&local_88,&local_140,plVar19,
                               &local_160);
                    fVar34 = *(float *)pauVar10[2];
                    fVar36 = *(float *)(pauVar10[2] + 4);
                    fVar33 = *(float *)(pauVar10[2] + 8);
                    bVar14 = *pbVar23;
                    fVar35 = (float)((ulong)uStack_150 >> 0x20);
                    fVar43 = (float)((ulong)uStack_148 >> 0x20);
                    fVar25 = (float)((ulong)local_160 >> 0x20);
                    fVar32 = (float)((ulong)uStack_158 >> 0x20);
                    if ((bVar14 >> 2 & 1) == 0) {
                      auVar56._8_8_ = uStack_158;
                      auVar56._0_8_ = local_160;
                      auVar50._8_8_ = uStack_148;
                      auVar50._0_8_ = uStack_150;
                      if ((bVar14 >> 3 & 1) != 0) {
                        auVar66._0_4_ = fVar34 * (float)local_160;
                        auVar66._4_4_ = fVar36 * fVar25;
                        auVar66._8_4_ = fVar33 * (float)uStack_158;
                        auVar66._12_4_ = fVar32 * 1.0;
                        auVar31._0_4_ = fVar34 * (float)uStack_150;
                        auVar31._4_4_ = fVar36 * fVar35;
                        auVar31._8_4_ = fVar33 * (float)uStack_148;
                        auVar31._12_4_ = fVar43 * 1.0;
                        auVar56 = NEON_fmin(auVar66,auVar31,4);
                        auVar50 = NEON_fmax(auVar66,auVar31,4);
                      }
                      auVar29._0_4_ = *(float *)pauVar10[1] + auVar56._0_4_;
                      auVar29._4_4_ = *(float *)(pauVar10[1] + 4) + auVar56._4_4_;
                      auVar29._8_4_ = *(float *)(pauVar10[1] + 8) + auVar56._8_4_;
                      auVar29._12_4_ = auVar56._12_4_ + 0.0;
                      auVar48._0_4_ = *(float *)pauVar10[1] + auVar50._0_4_;
                      auVar48._4_4_ = *(float *)(pauVar10[1] + 4) + auVar50._4_4_;
                      auVar48._8_4_ = *(float *)(pauVar10[1] + 8) + auVar50._8_4_;
                      auVar48._12_4_ = auVar50._12_4_ + 0.0;
                      auVar40 = NEON_fmin(auVar29,*(undefined1 (*) [16])(lVar20 + 0x20),4);
                      auVar30 = NEON_fmax(auVar48,*(undefined1 (*) [16])(lVar20 + 0x30),4);
                    }
                    else {
                      auVar26 = *pauVar10;
                      fVar37 = auVar26._0_4_;
                      auVar47._0_4_ = fVar37 + fVar37;
                      fVar52 = auVar26._4_4_;
                      auVar47._4_4_ = fVar52 + fVar52;
                      auVar47._8_4_ = auVar26._8_4_ + auVar26._8_4_;
                      fVar57 = auVar26._12_4_;
                      auVar47._12_4_ = fVar57 + fVar57;
                      auVar38 = NEON_ext(auVar26,auVar26,8,1);
                      auVar26 = NEON_ext(auVar47,auVar47,8,1);
                      fVar42 = auVar38._0_4_ * auVar26._0_4_;
                      auVar97._0_4_ = (float)uStack_150 - (float)local_a0;
                      auVar97._4_4_ = fVar35 - local_a0._4_4_;
                      auVar97._8_4_ = (float)uStack_148 - (float)uStack_98;
                      auVar97._12_4_ = fVar43 - uStack_98._4_4_;
                      fVar35 = SUB84(local_b0,0) - (float)local_160;
                      uVar80 = SUB41(fVar35,0);
                      uVar81 = (undefined1)((uint)fVar35 >> 8);
                      uVar82 = (undefined1)((uint)fVar35 >> 0x10);
                      uVar83 = (undefined1)((uint)fVar35 >> 0x18);
                      fVar25 = (float)((ulong)local_b0 >> 0x20) - fVar25;
                      uVar84 = SUB41(fVar25,0);
                      uVar85 = (undefined1)((uint)fVar25 >> 8);
                      uVar86 = (undefined1)((uint)fVar25 >> 0x10);
                      uVar87 = (undefined1)((uint)fVar25 >> 0x18);
                      fVar43 = (float)uStack_a8 - (float)uStack_158;
                      uVar88 = SUB41(fVar43,0);
                      uVar89 = (undefined1)((uint)fVar43 >> 8);
                      uVar90 = (undefined1)((uint)fVar43 >> 0x10);
                      uVar91 = (undefined1)((uint)fVar43 >> 0x18);
                      fVar32 = (float)((ulong)uStack_a8 >> 0x20) - fVar32;
                      uVar92 = SUB41(fVar32,0);
                      uVar93 = (undefined1)((uint)fVar32 >> 8);
                      uVar94 = (undefined1)((uint)fVar32 >> 0x10);
                      uVar95 = (undefined1)((uint)fVar32 >> 0x18);
                      if ((bVar14 >> 3 & 1) != 0) {
                        fVar35 = ABS(fVar34) * fVar35;
                        uVar80 = SUB41(fVar35,0);
                        uVar81 = (undefined1)((uint)fVar35 >> 8);
                        uVar82 = (undefined1)((uint)fVar35 >> 0x10);
                        uVar83 = (undefined1)((uint)fVar35 >> 0x18);
                        fVar25 = ABS(fVar36) * fVar25;
                        uVar84 = SUB41(fVar25,0);
                        uVar85 = (undefined1)((uint)fVar25 >> 8);
                        uVar86 = (undefined1)((uint)fVar25 >> 0x10);
                        uVar87 = (undefined1)((uint)fVar25 >> 0x18);
                        fVar43 = ABS(fVar33) * fVar43;
                        uVar88 = SUB41(fVar43,0);
                        uVar89 = (undefined1)((uint)fVar43 >> 8);
                        uVar90 = (undefined1)((uint)fVar43 >> 0x10);
                        uVar91 = (undefined1)((uint)fVar43 >> 0x18);
                        fVar32 = fVar32 * 1.0;
                        uVar92 = SUB41(fVar32,0);
                        uVar93 = (undefined1)((uint)fVar32 >> 8);
                        uVar94 = (undefined1)((uint)fVar32 >> 0x10);
                        uVar95 = (undefined1)((uint)fVar32 >> 0x18);
                        auVar97._0_4_ = ABS(fVar34) * auVar97._0_4_;
                        auVar97._4_4_ = ABS(fVar36) * auVar97._4_4_;
                        auVar97._8_4_ = ABS(fVar33) * auVar97._8_4_;
                        auVar97._12_4_ = auVar97._12_4_ * 1.0;
                      }
                      auVar2[1] = uVar81;
                      auVar2[0] = uVar80;
                      auVar2[2] = uVar82;
                      auVar2[3] = uVar83;
                      auVar2[4] = uVar84;
                      auVar2[5] = uVar85;
                      auVar2[6] = uVar86;
                      auVar2[7] = uVar87;
                      auVar2[8] = uVar88;
                      auVar2[9] = uVar89;
                      auVar2[10] = uVar90;
                      auVar2[0xb] = uVar91;
                      auVar2[0xc] = uVar92;
                      auVar2[0xd] = uVar93;
                      auVar2[0xe] = uVar94;
                      auVar2[0xf] = uVar95;
                      auVar26 = NEON_smin(auVar2,auVar97,4);
                      uVar74 = NEON_fminp(auVar26._0_8_,auVar26._0_8_,4);
                      uVar11 = CONCAT44(ABS(auVar47._8_4_ * fVar52 + auVar47._0_4_ * fVar57) +
                                        ABS(auVar47._4_4_ * fVar37 - auVar47._8_4_ * fVar57) +
                                        ABS(fVar41 - (auVar47._0_4_ * fVar37 + fVar42)),
                                        ABS(auVar47._8_4_ * fVar37 - auVar47._4_4_ * fVar57) +
                                        ABS(fVar41 - (auVar47._4_4_ * fVar52 + fVar42)) +
                                        ABS(auVar47._4_4_ * fVar37 + auVar47._8_4_ * fVar57));
                      fVar41 = ABS(fVar41 - (auVar47._0_4_ * fVar37 + auVar47._4_4_ * fVar52)) +
                               ABS(auVar47._8_4_ * fVar37 + auVar47._4_4_ * fVar57) +
                               ABS(auVar47._8_4_ * fVar52 - auVar47._0_4_ * fVar57);
                      uVar11 = NEON_fmaxp(uVar11,uVar11,4);
                      uVar11 = NEON_fmax(CONCAT44(fVar41,fVar41),uVar11,4);
                      uVar13 = NEON_frecpe(uVar11,4);
                      uVar53 = NEON_frecps(uVar11,uVar13,4);
                      fVar41 = (float)uVar13 * (float)uVar53;
                      fVar25 = (float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar53 >> 0x20);
                      uVar13 = NEON_frecps(uVar11,CONCAT44(fVar25,fVar41),4);
                      auVar26 = NEON_ext(auVar26,auVar26,8,1);
                      uVar11 = NEON_fmin(CONCAT44(auVar26._0_4_,auVar26._0_4_),uVar74,4);
                      fVar41 = (float)uVar11 * fVar41 * (float)uVar13;
                      fVar25 = (float)((ulong)uVar11 >> 0x20) *
                               fVar25 * (float)((ulong)uVar13 >> 0x20);
                      auVar30._0_4_ = *(float *)(lVar20 + 0x30) + fVar41;
                      auVar30._4_4_ = *(float *)(lVar20 + 0x34) + fVar25;
                      auVar30._8_4_ = *(float *)(lVar20 + 0x38) + fVar41;
                      auVar30._12_4_ = *(float *)(lVar20 + 0x3c) + fVar25;
                      auVar40._0_4_ = *(float *)(lVar20 + 0x20) - fVar41;
                      auVar40._4_4_ = *(float *)(lVar20 + 0x24) - fVar25;
                      auVar40._8_4_ = *(float *)(lVar20 + 0x28) - fVar41;
                      auVar40._12_4_ = *(float *)(lVar20 + 0x2c) - fVar25;
                    }
                    auVar26 = NEON_fmin(auVar30,*(undefined1 (*) [16])(param_3 + 8),4);
                    auVar38 = NEON_fmax(auVar40,*(undefined1 (*) [16])(param_3 + 6),4);
                    param_3[7] = auVar38._8_8_;
                    param_3[6] = auVar38._0_8_;
                    param_3[9] = auVar26._8_8_;
                    param_3[8] = auVar26._0_8_;
                  }
                  else {
                    iVar7 = (int)plVar19[1];
                    lVar20 = *plVar19;
                    iVar22 = iVar7 + 1;
                    if ((int)(*(uint *)((long)plVar19 + 0xc) & 0x3fffffff) <= iVar7) {
                      lVar20 = FUN_02f7f7b8(puVar5,iVar22);
                      iVar7 = (int)plVar19[1];
                      *plVar19 = lVar20;
                    }
                    *(undefined4 *)(lVar20 + (long)iVar7 * 4) = uVar78;
                    *(int *)(plVar19 + 1) = iVar22;
                  }
                }
              } while( true );
            }
            goto LAB_02f8208c;
          }
          iVar22 = (int)param_2[1];
          uVar9 = *(uint *)((long)param_2 + 0xc);
          uVar72 = iVar22 + 1;
          if (iVar22 < (int)(uVar9 & 0x3fffffff)) {
            lVar20 = *param_2;
          }
          else {
            lVar20 = *param_2;
            if (0x3ffffffe < iVar22) {
              FUN_032bd0a8(uVar72);
              uVar9 = *(uint *)((long)param_2 + 0xc);
            }
            uVar9 = (uVar9 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar9) {
              uVar9 = 0x3fffffff;
            }
            uVar3 = uVar72;
            if ((int)uVar72 <= (int)uVar9) {
              uVar3 = uVar9;
            }
            lVar20 = FUN_032bd1d4(puVar5,uVar3,2,lVar20,iVar22,(uint *)((long)param_2 + 0xc));
            iVar22 = (int)param_2[1];
            *param_2 = lVar20;
          }
          *(uint *)(param_2 + 1) = uVar72;
          *(ushort *)(lVar20 + (long)iVar22 * 2) = uVar1;
          uVar1 = *(ushort *)(pauVar10[1] + 0xc);
        } while( true );
      }
    }
  }
  return;
}


