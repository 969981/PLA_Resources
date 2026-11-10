/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f866dc; name: FUN_02f866dc
 */


void FUN_02f866dc(long *param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 *puVar7;
  uint uVar8;
  ulong *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined4 uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  byte *pbVar22;
  int iVar23;
  undefined1 *puVar24;
  undefined1 (*pauVar25) [16];
  float fVar26;
  float fVar33;
  float fVar35;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar34;
  float fVar36;
  undefined1 auVar32 [16];
  float fVar37;
  float fVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  float fVar51;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar43;
  undefined1 auVar50 [16];
  float fVar52;
  undefined8 uVar54;
  float fVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar53;
  float fVar58;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar57 [16];
  float fVar63;
  float fVar64;
  float fVar68;
  float fVar69;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar70;
  undefined1 auVar67 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  uint uVar73;
  float fVar74;
  undefined8 uVar75;
  undefined1 auVar76 [12];
  undefined1 auVar77 [12];
  float fVar78;
  undefined4 uVar79;
  undefined8 uVar80;
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
  undefined1 uVar96;
  float fVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar101;
  float fVar102;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  long lStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined2 local_98;
  undefined4 local_94;
  ulong uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  
  uVar1 = *(ushort *)((long)param_1 + 0x1c);
  if ((ulong)uVar1 != 0) {
    lVar21 = 0;
    if (*param_1 != 0) {
      lVar21 = *param_1 + (long)param_1;
    }
    pauVar10 = (undefined1 (*) [16])(lVar21 + (ulong)uVar1 * 0x20);
    auVar38 = *pauVar10;
    auVar27 = pauVar10[1];
    lVar4 = param_2[1];
    plVar16 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
    lVar17 = *plVar16;
    lVar21 = 0;
    if (lVar17 != 0) {
      lVar21 = lVar17 + (long)plVar16;
    }
    if ((*(uint *)(lVar21 + ((ulong)(uVar1 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar1 & 0x1f)) != 0) {
      auVar98._0_12_ = auVar27._0_12_;
      auVar98._12_4_ = 0;
      auVar55._0_4_ = -(uint)(auVar38._0_4_ <= *(float *)(param_3 + 4));
      auVar55._4_4_ = -(uint)(auVar38._4_4_ <= *(float *)((long)param_3 + 0x24));
      auVar55._8_4_ = -(uint)(auVar38._8_4_ <= *(float *)(param_3 + 5));
      auVar55._12_4_ = -(uint)(auVar38._12_4_ <= *(float *)((long)param_3 + 0x2c));
      auVar44._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar27._0_4_);
      auVar44._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar27._4_4_);
      auVar44._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar27._8_4_);
      auVar44._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
      uVar73 = CONCAT13((byte)((uint)auVar55._0_4_ >> 0x18) & (byte)((uint)auVar44._0_4_ >> 0x18),
                        CONCAT12((byte)((uint)auVar55._0_4_ >> 0x10) &
                                 (byte)((uint)auVar44._0_4_ >> 0x10),
                                 CONCAT11((byte)((uint)auVar55._0_4_ >> 8) &
                                          (byte)((uint)auVar44._0_4_ >> 8),
                                          (byte)auVar55._0_4_ & (byte)auVar44._0_4_)));
      auVar76._0_8_ =
           CONCAT17((byte)((uint)auVar55._4_4_ >> 0x18) & (byte)((uint)auVar44._4_4_ >> 0x18),
                    CONCAT16((byte)((uint)auVar55._4_4_ >> 0x10) &
                             (byte)((uint)auVar44._4_4_ >> 0x10),
                             CONCAT15((byte)((uint)auVar55._4_4_ >> 8) &
                                      (byte)((uint)auVar44._4_4_ >> 8),
                                      CONCAT14((byte)auVar55._4_4_ & (byte)auVar44._4_4_,uVar73))));
      auVar76[8] = (byte)auVar55._8_4_ & (byte)auVar44._8_4_;
      auVar76[9] = (byte)((uint)auVar55._8_4_ >> 8) & (byte)((uint)auVar44._8_4_ >> 8);
      auVar76[10] = (byte)((uint)auVar55._8_4_ >> 0x10) & (byte)((uint)auVar44._8_4_ >> 0x10);
      auVar76[0xb] = (byte)((uint)auVar55._8_4_ >> 0x18) & (byte)((uint)auVar44._8_4_ >> 0x18);
      auVar38 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar38,4);
      auVar27 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar98,4);
      auVar27 = auVar27 ^ (auVar27 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar44;
      auVar38 = auVar38 ^ (auVar38 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar55;
      param_3[7] = auVar27._8_8_;
      param_3[6] = auVar27._0_8_;
      param_3[9] = auVar38._8_8_;
      param_3[8] = auVar38._0_8_;
      puVar5 = PTR_PTR_0434a080;
      if ((uVar73 & (uint)((ulong)auVar76._0_8_ >> 0x20) & auVar76._8_4_) != 0) {
        uVar80 = NEON_fmov(0x3f800000,4);
        puVar9 = (ulong *)((ulong)&local_110 | 4);
LAB_02f86804:
        uVar1 = *(ushort *)(pauVar10[1] + 0xc);
        do {
          uVar19 = (ulong)uVar1;
          if (uVar19 == 0) goto LAB_02f86948;
LAB_02f8680c:
          lVar21 = 0;
          if (*param_1 != 0) {
            lVar21 = *param_1 + (long)param_1;
          }
          uVar1 = *(ushort *)(pauVar10[1] + 0xe);
          pauVar10 = (undefined1 (*) [16])(lVar21 + uVar19 * 0x20);
          pauVar25 = (undefined1 (*) [16])(lVar21 + (ulong)uVar1 * 0x20);
          auVar38 = *pauVar10;
          auVar27 = pauVar10[1];
          auVar44 = *pauVar25;
          auVar98 = pauVar25[1];
          plVar16 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
          lVar18 = *plVar16;
          lVar21 = lVar18 + (long)plVar16;
          lVar17 = 0;
          if (lVar18 != 0) {
            lVar17 = lVar21;
          }
          if ((*(uint *)(lVar17 + (uVar19 >> 3 & 0x1ffc)) & 1 << (ulong)((uint)uVar19 & 0x1f)) == 0)
          {
            bVar6 = false;
          }
          else {
            auVar45._0_12_ = auVar27._0_12_;
            auVar45._12_4_ = 0;
            auVar71._0_4_ = -(uint)(auVar38._0_4_ <= *(float *)(param_3 + 4));
            auVar71._4_4_ = -(uint)(auVar38._4_4_ <= *(float *)((long)param_3 + 0x24));
            auVar71._8_4_ = -(uint)(auVar38._8_4_ <= *(float *)(param_3 + 5));
            auVar71._12_4_ = -(uint)(auVar38._12_4_ <= *(float *)((long)param_3 + 0x2c));
            uVar79 = (undefined4)((ulong)param_3[7] >> 0x20);
            auVar55 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar38,4);
            auVar65._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar27._0_4_);
            auVar65._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar27._4_4_);
            auVar65._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar27._8_4_);
            auVar65._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
            auVar27._12_4_ = uVar79;
            auVar27._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar27 = NEON_fmax(auVar27,auVar45,4);
            auVar38._12_4_ = uVar79;
            auVar38._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
            auVar27 = auVar27 ^ (auVar27 ^ auVar38) & auVar65;
            auVar55 = auVar55 ^ (auVar55 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar71;
            bVar6 = (CONCAT13((byte)((uint)auVar71._0_4_ >> 0x18) &
                              (byte)((uint)auVar65._0_4_ >> 0x18),
                              CONCAT12((byte)((uint)auVar71._0_4_ >> 0x10) &
                                       (byte)((uint)auVar65._0_4_ >> 0x10),
                                       CONCAT11((byte)((uint)auVar71._0_4_ >> 8) &
                                                (byte)((uint)auVar65._0_4_ >> 8),
                                                (byte)auVar71._0_4_ & (byte)auVar65._0_4_))) &
                     CONCAT13((byte)((uint)auVar71._4_4_ >> 0x18) &
                              (byte)((uint)auVar65._4_4_ >> 0x18),
                              CONCAT12((byte)((uint)auVar71._4_4_ >> 0x10) &
                                       (byte)((uint)auVar65._4_4_ >> 0x10),
                                       CONCAT11((byte)((uint)auVar71._4_4_ >> 8) &
                                                (byte)((uint)auVar65._4_4_ >> 8),
                                                (byte)auVar71._4_4_ & (byte)auVar65._4_4_))) &
                    CONCAT13((byte)((uint)auVar71._8_4_ >> 0x18) &
                             (byte)((uint)auVar65._8_4_ >> 0x18),
                             CONCAT12((byte)((uint)auVar71._8_4_ >> 0x10) &
                                      (byte)((uint)auVar65._8_4_ >> 0x10),
                                      CONCAT11((byte)((uint)auVar71._8_4_ >> 8) &
                                               (byte)((uint)auVar65._8_4_ >> 8),
                                               (byte)auVar71._8_4_ & (byte)auVar65._8_4_)))) != 0;
            param_3[7] = auVar27._8_8_;
            param_3[6] = auVar27._0_8_;
            param_3[9] = auVar55._8_8_;
            param_3[8] = auVar55._0_8_;
            plVar16 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
            lVar18 = *plVar16;
            lVar21 = lVar18 + (long)plVar16;
          }
          lVar17 = 0;
          if (lVar18 != 0) {
            lVar17 = lVar21;
          }
          if ((*(uint *)(lVar17 + ((ulong)(uVar1 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar1 & 0x1f)) == 0
             ) {
LAB_02f8691c:
            bVar14 = 0;
          }
          else {
            auVar28._0_12_ = auVar98._0_12_;
            auVar28._12_4_ = 0;
            auVar56._0_4_ = -(uint)(auVar44._0_4_ <= *(float *)(param_3 + 4));
            auVar56._4_4_ = -(uint)(auVar44._4_4_ <= *(float *)((long)param_3 + 0x24));
            auVar56._8_4_ = -(uint)(auVar44._8_4_ <= *(float *)(param_3 + 5));
            auVar56._12_4_ = -(uint)(auVar44._12_4_ <= *(float *)((long)param_3 + 0x2c));
            auVar46._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar98._0_4_);
            auVar46._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar98._4_4_);
            auVar46._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar98._8_4_);
            auVar46._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
            uVar73 = CONCAT13((byte)((uint)auVar56._0_4_ >> 0x18) &
                              (byte)((uint)auVar46._0_4_ >> 0x18),
                              CONCAT12((byte)((uint)auVar56._0_4_ >> 0x10) &
                                       (byte)((uint)auVar46._0_4_ >> 0x10),
                                       CONCAT11((byte)((uint)auVar56._0_4_ >> 8) &
                                                (byte)((uint)auVar46._0_4_ >> 8),
                                                (byte)auVar56._0_4_ & (byte)auVar46._0_4_)));
            auVar77._0_8_ =
                 CONCAT17((byte)((uint)auVar56._4_4_ >> 0x18) & (byte)((uint)auVar46._4_4_ >> 0x18),
                          CONCAT16((byte)((uint)auVar56._4_4_ >> 0x10) &
                                   (byte)((uint)auVar46._4_4_ >> 0x10),
                                   CONCAT15((byte)((uint)auVar56._4_4_ >> 8) &
                                            (byte)((uint)auVar46._4_4_ >> 8),
                                            CONCAT14((byte)auVar56._4_4_ & (byte)auVar46._4_4_,
                                                     uVar73))));
            auVar77[8] = (byte)auVar56._8_4_ & (byte)auVar46._8_4_;
            auVar77[9] = (byte)((uint)auVar56._8_4_ >> 8) & (byte)((uint)auVar46._8_4_ >> 8);
            auVar77[10] = (byte)((uint)auVar56._8_4_ >> 0x10) & (byte)((uint)auVar46._8_4_ >> 0x10);
            auVar77[0xb] = (byte)((uint)auVar56._8_4_ >> 0x18) & (byte)((uint)auVar46._8_4_ >> 0x18)
            ;
            auVar38 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar44,4);
            auVar27 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar28,4);
            auVar27 = auVar27 ^ (auVar27 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar46;
            auVar38 = auVar38 ^ (auVar38 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar56;
            param_3[7] = auVar27._8_8_;
            param_3[6] = auVar27._0_8_;
            param_3[9] = auVar38._8_8_;
            param_3[8] = auVar38._0_8_;
            if ((uVar73 & (uint)((ulong)auVar77._0_8_ >> 0x20) & auVar77._8_4_) == 0)
            goto LAB_02f8691c;
            bVar14 = 2;
          }
          bVar14 = bVar14 | bVar6;
          if (bVar14 == 1) goto LAB_02f86804;
          if (bVar14 != 3) {
            pauVar10 = pauVar25;
            if (bVar14 != 2) {
LAB_02f87094:
              do {
                if ((int)param_2[1] <= (int)lVar4) {
                  return;
                }
                iVar23 = (int)param_2[1] + -1;
                *(int *)(param_2 + 1) = iVar23;
                lVar21 = 0;
                if (*param_1 != 0) {
                  lVar21 = *param_1 + (long)param_1;
                }
                pauVar10 = (undefined1 (*) [16])
                           (lVar21 + (ulong)*(ushort *)(*param_2 + (long)iVar23 * 2) * 0x20);
                uVar19 = (ulong)*(ushort *)(pauVar10[1] + 0xc);
                if (uVar19 != 0) goto LAB_02f8680c;
LAB_02f86948:
                lVar21 = *param_3;
                lVar17 = *(long *)(lVar21 + 8);
                uVar1 = *(ushort *)(pauVar10[1] + 0xe);
                pauVar10 = (undefined1 (*) [16])
                           (lVar17 + 0x48 + (ulong)uVar1 * 0x40 + *(long *)(lVar17 + 0x48));
                pbVar22 = pauVar10[1] + 0xe;
                if ((*pbVar22 >> 6 & 1) != 0) {
                  pauVar25 = pauVar10 + 3;
                  if (*(long *)*pauVar25 == 0) {
                    puVar24 = (undefined1 *)0x0;
                  }
                  else {
                    puVar24 = *pauVar25 + *(long *)*pauVar25;
                  }
                  plVar16 = (long *)(*(long *)(lVar21 + 0x10) + 0x28);
                  local_110 = **(undefined8 **)(lVar21 + 0x58);
                  uStack_108 = (*(undefined8 **)(lVar21 + 0x58))[1];
                  uVar11 = *(undefined8 *)((long)plVar16 + (ulong)uVar1 * 8 + *plVar16);
                  plVar20 = *(long **)(lVar21 + 0x70);
                  puVar12 = *(undefined8 **)(lVar21 + 0x60);
                  uVar19 = puVar12[3];
                  iVar23 = (int)(uVar19 >> 0x20) + (uint)*(byte *)(lVar17 + 0x1c);
                  uVar19 = (ulong)((uVar1 + 1 << (ulong)(-iVar23 & 0x1f)) - 1) |
                           uVar19 & (uint)(&DAT_03aa74b0)[(long)uVar19 >> 0x20];
                  plVar16 = (long *)**(long **)(lVar21 + 0x48);
                  uVar79 = (undefined4)uVar19;
                  if (plVar16 != (long *)0x0) {
                    if (*(long *)*pauVar25 == 0) {
                      puVar7 = (undefined1 *)0x0;
                    }
                    else {
                      puVar7 = *pauVar25 + *(long *)*pauVar25;
                    }
                    (**(code **)(*plVar16 + 0x40))
                              (plVar16,*(undefined2 *)(pauVar10[2] + 0xc),6,*puVar12,puVar12[1],
                               lVar17,uVar19,puVar7,&local_110);
                    lVar18 = *(long *)(lVar21 + 0x48);
                    if (*(long *)(lVar18 + 8) != 0) {
                      local_100 = CONCAT62(local_100._2_6_,*(undefined2 *)(lVar18 + 0x10));
                      uVar13 = *(undefined8 *)(lVar18 + 0x14);
                      *(undefined4 *)((undefined8 *)((ulong)&local_100 | 4) + 1) =
                           *(undefined4 *)(lVar18 + 0x1c);
                      *(undefined8 *)((ulong)&local_100 | 4) = uVar13;
                      puVar12 = *(undefined8 **)(lVar21 + 0x50);
                      local_f0 = (undefined1 *)*puVar12;
                      local_e8 = puVar12[1];
                      local_e0 = puVar12[2];
                      local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(puVar12 + 3));
                      local_d0 = 0;
                      local_160 = CONCAT62(local_160._2_6_,(undefined2)local_110);
                      uVar19 = *puVar9;
                      *(int *)((ulong *)((ulong)&local_160 | 4) + 1) = (int)puVar9[1];
                      *(ulong *)((ulong)&local_160 | 4) = uVar19;
                      local_150 = **(undefined8 **)(lVar21 + 0x60);
                      local_148 = (*(undefined8 **)(lVar21 + 0x60))[1];
                      local_138 = CONCAT44(local_138._4_4_,uVar79);
                      local_130 = *(undefined1 **)*pauVar25;
                      if (local_130 != (undefined1 *)0x0) {
                        local_130 = *pauVar25 + (long)local_130;
                      }
                      lStack_140 = lVar17;
                      uVar19 = (**(code **)(**(long **)(lVar18 + 8) + 0x40))
                                         (*(long **)(lVar18 + 8),6,1,&local_100,&local_160);
                      if ((uVar19 & 1) == 0) goto LAB_02f87094;
                    }
                  }
                  if (puVar24[0x19] == '\x03') {
                    puVar12 = *(undefined8 **)(lVar21 + 0x48);
                    local_158 = puVar12[1];
                    local_160 = *puVar12;
                    local_138 = puVar12[5];
                    local_148 = puVar12[3];
                    local_150 = puVar12[2];
                    lStack_140 = puVar12[4];
                    fVar41 = (float)uVar80;
                    if ((*pbVar22 >> 3 & 1) == 0) {
                      fVar51 = *(float *)pauVar10[1];
                      fVar33 = *(float *)(pauVar10[1] + 4);
                      fVar35 = *(float *)(pauVar10[1] + 8);
                      if ((*pbVar22 >> 2 & 1) == 0) {
                        uStack_128 = CONCAT44(*(float *)(lVar21 + 0x2c) - 0.0,
                                              *(float *)(lVar21 + 0x28) - fVar35);
                        local_130 = (undefined1 *)
                                    CONCAT44(*(float *)(lVar21 + 0x24) - fVar33,
                                             *(float *)(lVar21 + 0x20) - fVar51);
                        uStack_118 = CONCAT44(*(float *)(lVar21 + 0x3c) - 0.0,
                                              *(float *)(lVar21 + 0x38) - fVar35);
                        local_120 = CONCAT44(*(float *)(lVar21 + 0x34) - fVar33,
                                             *(float *)(lVar21 + 0x30) - fVar51);
                      }
                      else {
                        auVar27 = *pauVar10;
                        fVar43 = auVar27._0_4_;
                        auVar49._0_4_ = fVar43 + fVar43;
                        fVar53 = auVar27._4_4_;
                        auVar49._4_4_ = fVar53 + fVar53;
                        auVar49._8_4_ = auVar27._8_4_ + auVar27._8_4_;
                        fVar58 = auVar27._12_4_;
                        auVar49._12_4_ = fVar58 + fVar58;
                        auVar27 = NEON_ext(auVar27,auVar27,8,1);
                        auVar38 = NEON_ext(auVar49,auVar49,8,1);
                        fVar42 = auVar27._0_4_ * auVar38._0_4_;
                        fVar26 = (float)*(undefined8 *)(lVar21 + 0x20);
                        fVar34 = (float)((ulong)*(undefined8 *)(lVar21 + 0x20) >> 0x20);
                        fVar36 = (float)*(undefined8 *)(lVar21 + 0x28);
                        fVar102 = auVar49._4_4_ * fVar43 + auVar49._8_4_ * fVar58;
                        fVar97 = auVar49._4_4_ * fVar43 - auVar49._8_4_ * fVar58;
                        fVar101 = auVar49._8_4_ * fVar43 - auVar49._4_4_ * fVar58;
                        fVar37 = auVar49._8_4_ * fVar43 + auVar49._4_4_ * fVar58;
                        fVar52 = fVar41 - (auVar49._4_4_ * fVar53 + fVar42);
                        fVar42 = fVar41 - (auVar49._0_4_ * fVar43 + fVar42);
                        fVar74 = auVar49._8_4_ * fVar53 - auVar49._0_4_ * fVar58;
                        fVar64 = fVar41 - (auVar49._0_4_ * fVar43 + auVar49._4_4_ * fVar53);
                        fVar51 = (fVar26 + *(float *)(lVar21 + 0x30)) * 0.5 - fVar51;
                        fVar33 = (fVar34 + *(float *)(lVar21 + 0x34)) * 0.5 - fVar33;
                        fVar35 = (fVar36 + *(float *)(lVar21 + 0x38)) * 0.5 - fVar35;
                        fVar43 = auVar49._8_4_ * fVar53 + auVar49._0_4_ * fVar58;
                        fVar53 = (*(float *)(lVar21 + 0x30) - fVar26) * 0.5;
                        fVar58 = (*(float *)(lVar21 + 0x34) - fVar34) * 0.5;
                        fVar60 = (*(float *)(lVar21 + 0x38) - fVar36) * 0.5;
                        fVar26 = fVar101 * fVar35 + fVar52 * fVar51 + fVar102 * fVar33;
                        fVar34 = fVar43 * fVar35 + fVar97 * fVar51 + fVar42 * fVar33;
                        fVar36 = fVar64 * fVar35 + fVar37 * fVar51 + fVar74 * fVar33;
                        fVar51 = fVar35 * 0.0 + fVar74 * fVar51 + fVar33 * 0.0;
                        fVar33 = ABS(fVar101 * fVar60) +
                                 ABS(fVar52 * fVar53) + ABS(fVar102 * fVar58);
                        fVar35 = ABS(fVar43 * fVar60) + ABS(fVar97 * fVar53) + ABS(fVar42 * fVar58);
                        fVar43 = ABS(fVar64 * fVar60) + ABS(fVar37 * fVar53) + ABS(fVar74 * fVar58);
                        fVar37 = ABS(fVar60 * 0.0) + ABS(fVar74 * fVar53) + ABS(fVar58 * 0.0);
                        uStack_128 = CONCAT44(fVar51 - fVar37,fVar36 - fVar43);
                        local_130 = (undefined1 *)CONCAT44(fVar34 - fVar35,fVar26 - fVar33);
                        uStack_118 = CONCAT44(fVar51 + fVar37,fVar36 + fVar43);
                        local_120 = CONCAT44(fVar34 + fVar35,fVar26 + fVar33);
                      }
                    }
                    else {
                      fVar51 = *(float *)(lVar21 + 0x20);
                      fVar33 = *(float *)(lVar21 + 0x24);
                      local_130 = *(undefined1 **)(lVar21 + 0x20);
                      fVar35 = *(float *)(lVar21 + 0x28);
                      uStack_128 = *(undefined8 *)(lVar21 + 0x28);
                      fVar26 = *(float *)(lVar21 + 0x30);
                      fVar34 = *(float *)(lVar21 + 0x34);
                      fVar36 = *(float *)(lVar21 + 0x38);
                      if ((fVar26 < fVar51 || fVar34 < fVar33) || fVar36 < fVar35) {
                        local_120 = *(undefined8 *)(lVar21 + 0x30);
                        uStack_118 = *(undefined8 *)(lVar21 + 0x38);
                      }
                      else {
                        auVar27 = *pauVar10;
                        fVar74 = auVar27._0_4_;
                        auVar66._0_4_ = fVar74 + fVar74;
                        fVar101 = auVar27._4_4_;
                        auVar66._4_4_ = fVar101 + fVar101;
                        auVar66._8_4_ = auVar27._8_4_ + auVar27._8_4_;
                        fVar61 = auVar27._12_4_;
                        auVar66._12_4_ = fVar61 + fVar61;
                        auVar72._0_12_ = SUB1612(pauVar10[2],0);
                        auVar72._12_4_ = 0x3f800000;
                        auVar27 = NEON_ext(auVar27,auVar27,8,1);
                        auVar38 = NEON_ext(auVar66,auVar66,8,1);
                        auVar98 = NEON_frecpe(auVar72,4);
                        fVar58 = auVar27._0_4_ * auVar38._0_4_;
                        auVar27 = NEON_frecps(auVar72,auVar98,4);
                        fVar43 = (fVar26 - fVar51) * 0.5;
                        fVar37 = (fVar34 - fVar33) * 0.5;
                        fVar53 = (fVar36 - fVar35) * 0.5;
                        fVar52 = (fVar51 + fVar26) * 0.5;
                        fVar60 = (fVar33 + fVar34) * 0.5;
                        fVar64 = (fVar35 + fVar36) * 0.5;
                        fVar42 = auVar66._8_4_ * fVar101 - auVar66._0_4_ * fVar61;
                        auVar99._0_4_ = auVar98._0_4_ * auVar27._0_4_;
                        auVar99._4_4_ = auVar98._4_4_ * auVar27._4_4_;
                        auVar99._8_4_ = auVar98._8_4_ * auVar27._8_4_;
                        auVar99._12_4_ = auVar98._12_4_ * auVar27._12_4_;
                        auVar27 = NEON_frecps(auVar72,auVar99,4);
                        fVar78 = *(float *)(pauVar10[1] + 8);
                        fVar63 = auVar99._0_4_ * auVar27._0_4_;
                        fVar68 = auVar99._4_4_ * auVar27._4_4_;
                        fVar69 = auVar99._8_4_ * auVar27._8_4_;
                        fVar70 = auVar99._12_4_ * auVar27._12_4_;
                        fVar97 = fVar63 * (fVar41 - (auVar66._4_4_ * fVar101 + fVar58));
                        fVar102 = fVar68 * (auVar66._4_4_ * fVar74 - auVar66._8_4_ * fVar61);
                        fVar59 = fVar69 * (auVar66._8_4_ * fVar74 + auVar66._4_4_ * fVar61);
                        fVar62 = fVar70 * fVar42;
                        fVar34 = fVar63 * (auVar66._4_4_ * fVar74 + auVar66._8_4_ * fVar61);
                        fVar36 = fVar68 * (fVar41 - (auVar66._0_4_ * fVar74 + fVar58));
                        fVar42 = fVar69 * fVar42;
                        fVar58 = fVar70 * 0.0;
                        fVar63 = fVar63 * (auVar66._8_4_ * fVar74 - auVar66._4_4_ * fVar61);
                        fVar68 = fVar68 * (auVar66._8_4_ * fVar101 + auVar66._0_4_ * fVar61);
                        fVar69 = fVar69 * (fVar41 - (auVar66._0_4_ * fVar74 +
                                                    auVar66._4_4_ * fVar101));
                        fVar70 = fVar70 * 0.0;
                        fVar74 = (float)*(undefined8 *)pauVar10[1];
                        fVar101 = (float)((ulong)*(undefined8 *)pauVar10[1] >> 0x20);
                        fVar51 = ABS(fVar63 * fVar53) + ABS(fVar97 * fVar43) + ABS(fVar34 * fVar37);
                        fVar33 = ABS(fVar68 * fVar53) + ABS(fVar102 * fVar43) + ABS(fVar36 * fVar37)
                        ;
                        fVar35 = ABS(fVar69 * fVar53) + ABS(fVar59 * fVar43) + ABS(fVar42 * fVar37);
                        fVar26 = ABS(fVar70 * fVar53) + ABS(fVar62 * fVar43) + ABS(fVar58 * fVar37);
                        fVar34 = fVar63 * fVar64 + fVar97 * fVar52 + fVar34 * fVar60 +
                                 -(fVar63 * fVar78 + fVar97 * fVar74 + fVar34 * fVar101);
                        fVar36 = fVar68 * fVar64 + fVar102 * fVar52 + fVar36 * fVar60 +
                                 -(fVar68 * fVar78 + fVar102 * fVar74 + fVar36 * fVar101);
                        fVar43 = fVar69 * fVar64 + fVar59 * fVar52 + fVar42 * fVar60 +
                                 -(fVar69 * fVar78 + fVar59 * fVar74 + fVar42 * fVar101);
                        fVar37 = fVar70 * fVar64 + fVar62 * fVar52 + fVar58 * fVar60 +
                                 fVar70 * fVar78 + fVar62 * fVar74 + fVar58 * fVar101;
                        uStack_128 = CONCAT44(fVar37 - fVar26,fVar43 - fVar35);
                        local_130 = (undefined1 *)CONCAT44(fVar36 - fVar33,fVar34 - fVar51);
                        uStack_118 = CONCAT44(fVar26 + fVar37,fVar35 + fVar43);
                        local_120 = CONCAT44(fVar33 + fVar36,fVar51 + fVar34);
                      }
                    }
                    puVar12 = *(undefined8 **)(lVar21 + 0x60);
                    NEON_fmov(0x3f800000,4);
                    uVar19 = (ulong)local_d0 >> 8;
                    local_100 = *puVar12;
                    local_f8 = puVar12[1];
                    local_e0 = puVar12[4];
                    local_d0 = CONCAT44(*(undefined4 *)((long)puVar12 + 0x34),
                                        (int)CONCAT71((int7)uVar19,*(undefined1 *)(puVar12 + 6)));
                    local_c0 = puVar12[8];
                    uStack_b8 = puVar12[9];
                    local_b0 = puVar12[10];
                    uStack_a8 = puVar12[0xb];
                    local_c8 = *(undefined4 *)(puVar12 + 7);
                    auVar29._8_4_ = 0x5f7ffff0;
                    auVar29._0_8_ = 0x5f7ffff05f7ffff0;
                    auVar29._12_4_ = 0x5f7ffff0;
                    local_e8 = CONCAT44(iVar23,uVar79);
                    auVar39._8_4_ = 0xdf7ffff0;
                    auVar39._0_8_ = 0xdf7ffff0df7ffff0;
                    auVar39._12_4_ = 0xdf7ffff0;
                    uStack_178 = auVar39._8_8_;
                    local_180 = 0xdf7ffff0df7ffff0;
                    uStack_168 = auVar29._8_8_;
                    uStack_170 = 0x5f7ffff05f7ffff0;
                    local_f0 = puVar24;
                    local_d8 = uVar11;
                    (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar24[0x18] * 0x200 + 0xe8))
                              (puVar24,*(undefined8 *)(lVar21 + 0x40),&local_160,
                               *(undefined8 *)(lVar21 + 0x50),&local_110,&local_100,plVar20,
                               &local_180);
                    fVar35 = *(float *)pauVar10[2];
                    fVar26 = *(float *)(pauVar10[2] + 4);
                    fVar34 = *(float *)(pauVar10[2] + 8);
                    bVar14 = *pbVar22;
                    fVar36 = (float)((ulong)uStack_170 >> 0x20);
                    fVar43 = (float)((ulong)uStack_168 >> 0x20);
                    fVar51 = (float)((ulong)local_180 >> 0x20);
                    fVar33 = (float)((ulong)uStack_178 >> 0x20);
                    if ((bVar14 >> 2 & 1) == 0) {
                      auVar57._8_8_ = uStack_178;
                      auVar57._0_8_ = local_180;
                      auVar50._8_8_ = uStack_168;
                      auVar50._0_8_ = uStack_170;
                      if ((bVar14 >> 3 & 1) != 0) {
                        auVar67._0_4_ = fVar35 * (float)local_180;
                        auVar67._4_4_ = fVar26 * fVar51;
                        auVar67._8_4_ = fVar34 * (float)uStack_178;
                        auVar67._12_4_ = fVar33 * 1.0;
                        auVar32._0_4_ = fVar35 * (float)uStack_170;
                        auVar32._4_4_ = fVar26 * fVar36;
                        auVar32._8_4_ = fVar34 * (float)uStack_168;
                        auVar32._12_4_ = fVar43 * 1.0;
                        auVar57 = NEON_fmin(auVar67,auVar32,4);
                        auVar50 = NEON_fmax(auVar67,auVar32,4);
                      }
                      auVar30._0_4_ = *(float *)pauVar10[1] + auVar57._0_4_;
                      auVar30._4_4_ = *(float *)(pauVar10[1] + 4) + auVar57._4_4_;
                      auVar30._8_4_ = *(float *)(pauVar10[1] + 8) + auVar57._8_4_;
                      auVar30._12_4_ = auVar57._12_4_ + 0.0;
                      auVar48._0_4_ = *(float *)pauVar10[1] + auVar50._0_4_;
                      auVar48._4_4_ = *(float *)(pauVar10[1] + 4) + auVar50._4_4_;
                      auVar48._8_4_ = *(float *)(pauVar10[1] + 8) + auVar50._8_4_;
                      auVar48._12_4_ = auVar50._12_4_ + 0.0;
                      auVar40 = NEON_fmin(auVar30,*(undefined1 (*) [16])(lVar21 + 0x20),4);
                      auVar31 = NEON_fmax(auVar48,*(undefined1 (*) [16])(lVar21 + 0x30),4);
                    }
                    else {
                      auVar27 = *pauVar10;
                      fVar37 = auVar27._0_4_;
                      auVar47._0_4_ = fVar37 + fVar37;
                      fVar53 = auVar27._4_4_;
                      auVar47._4_4_ = fVar53 + fVar53;
                      auVar47._8_4_ = auVar27._8_4_ + auVar27._8_4_;
                      fVar58 = auVar27._12_4_;
                      auVar47._12_4_ = fVar58 + fVar58;
                      auVar38 = NEON_ext(auVar27,auVar27,8,1);
                      auVar27 = NEON_ext(auVar47,auVar47,8,1);
                      fVar42 = auVar38._0_4_ * auVar27._0_4_;
                      auVar100._0_4_ = (float)uStack_170 - (float)local_120;
                      auVar100._4_4_ = fVar36 - local_120._4_4_;
                      auVar100._8_4_ = (float)uStack_168 - (float)uStack_118;
                      auVar100._12_4_ = fVar43 - uStack_118._4_4_;
                      fVar36 = SUB84(local_130,0) - (float)local_180;
                      uVar81 = SUB41(fVar36,0);
                      uVar82 = (undefined1)((uint)fVar36 >> 8);
                      uVar83 = (undefined1)((uint)fVar36 >> 0x10);
                      uVar84 = (undefined1)((uint)fVar36 >> 0x18);
                      fVar51 = (float)((ulong)local_130 >> 0x20) - fVar51;
                      uVar85 = SUB41(fVar51,0);
                      uVar86 = (undefined1)((uint)fVar51 >> 8);
                      uVar87 = (undefined1)((uint)fVar51 >> 0x10);
                      uVar88 = (undefined1)((uint)fVar51 >> 0x18);
                      fVar43 = (float)uStack_128 - (float)uStack_178;
                      uVar89 = SUB41(fVar43,0);
                      uVar90 = (undefined1)((uint)fVar43 >> 8);
                      uVar91 = (undefined1)((uint)fVar43 >> 0x10);
                      uVar92 = (undefined1)((uint)fVar43 >> 0x18);
                      fVar33 = (float)((ulong)uStack_128 >> 0x20) - fVar33;
                      uVar93 = SUB41(fVar33,0);
                      uVar94 = (undefined1)((uint)fVar33 >> 8);
                      uVar95 = (undefined1)((uint)fVar33 >> 0x10);
                      uVar96 = (undefined1)((uint)fVar33 >> 0x18);
                      if ((bVar14 >> 3 & 1) != 0) {
                        fVar36 = ABS(fVar35) * fVar36;
                        uVar81 = SUB41(fVar36,0);
                        uVar82 = (undefined1)((uint)fVar36 >> 8);
                        uVar83 = (undefined1)((uint)fVar36 >> 0x10);
                        uVar84 = (undefined1)((uint)fVar36 >> 0x18);
                        fVar51 = ABS(fVar26) * fVar51;
                        uVar85 = SUB41(fVar51,0);
                        uVar86 = (undefined1)((uint)fVar51 >> 8);
                        uVar87 = (undefined1)((uint)fVar51 >> 0x10);
                        uVar88 = (undefined1)((uint)fVar51 >> 0x18);
                        fVar43 = ABS(fVar34) * fVar43;
                        uVar89 = SUB41(fVar43,0);
                        uVar90 = (undefined1)((uint)fVar43 >> 8);
                        uVar91 = (undefined1)((uint)fVar43 >> 0x10);
                        uVar92 = (undefined1)((uint)fVar43 >> 0x18);
                        fVar33 = fVar33 * 1.0;
                        uVar93 = SUB41(fVar33,0);
                        uVar94 = (undefined1)((uint)fVar33 >> 8);
                        uVar95 = (undefined1)((uint)fVar33 >> 0x10);
                        uVar96 = (undefined1)((uint)fVar33 >> 0x18);
                        auVar100._0_4_ = ABS(fVar35) * auVar100._0_4_;
                        auVar100._4_4_ = ABS(fVar26) * auVar100._4_4_;
                        auVar100._8_4_ = ABS(fVar34) * auVar100._8_4_;
                        auVar100._12_4_ = auVar100._12_4_ * 1.0;
                      }
                      auVar2[1] = uVar82;
                      auVar2[0] = uVar81;
                      auVar2[2] = uVar83;
                      auVar2[3] = uVar84;
                      auVar2[4] = uVar85;
                      auVar2[5] = uVar86;
                      auVar2[6] = uVar87;
                      auVar2[7] = uVar88;
                      auVar2[8] = uVar89;
                      auVar2[9] = uVar90;
                      auVar2[10] = uVar91;
                      auVar2[0xb] = uVar92;
                      auVar2[0xc] = uVar93;
                      auVar2[0xd] = uVar94;
                      auVar2[0xe] = uVar95;
                      auVar2[0xf] = uVar96;
                      auVar27 = NEON_smin(auVar2,auVar100,4);
                      uVar75 = NEON_fminp(auVar27._0_8_,auVar27._0_8_,4);
                      uVar11 = CONCAT44(ABS(auVar47._8_4_ * fVar53 + auVar47._0_4_ * fVar58) +
                                        ABS(auVar47._4_4_ * fVar37 - auVar47._8_4_ * fVar58) +
                                        ABS(fVar41 - (auVar47._0_4_ * fVar37 + fVar42)),
                                        ABS(auVar47._8_4_ * fVar37 - auVar47._4_4_ * fVar58) +
                                        ABS(fVar41 - (auVar47._4_4_ * fVar53 + fVar42)) +
                                        ABS(auVar47._4_4_ * fVar37 + auVar47._8_4_ * fVar58));
                      fVar41 = ABS(fVar41 - (auVar47._0_4_ * fVar37 + auVar47._4_4_ * fVar53)) +
                               ABS(auVar47._8_4_ * fVar37 + auVar47._4_4_ * fVar58) +
                               ABS(auVar47._8_4_ * fVar53 - auVar47._0_4_ * fVar58);
                      uVar11 = NEON_fmaxp(uVar11,uVar11,4);
                      uVar11 = NEON_fmax(CONCAT44(fVar41,fVar41),uVar11,4);
                      uVar13 = NEON_frecpe(uVar11,4);
                      uVar54 = NEON_frecps(uVar11,uVar13,4);
                      fVar41 = (float)uVar13 * (float)uVar54;
                      fVar51 = (float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar54 >> 0x20);
                      uVar13 = NEON_frecps(uVar11,CONCAT44(fVar51,fVar41),4);
                      auVar27 = NEON_ext(auVar27,auVar27,8,1);
                      uVar11 = NEON_fmin(CONCAT44(auVar27._0_4_,auVar27._0_4_),uVar75,4);
                      fVar41 = (float)uVar11 * fVar41 * (float)uVar13;
                      fVar51 = (float)((ulong)uVar11 >> 0x20) *
                               fVar51 * (float)((ulong)uVar13 >> 0x20);
                      auVar31._0_4_ = *(float *)(lVar21 + 0x30) + fVar41;
                      auVar31._4_4_ = *(float *)(lVar21 + 0x34) + fVar51;
                      auVar31._8_4_ = *(float *)(lVar21 + 0x38) + fVar41;
                      auVar31._12_4_ = *(float *)(lVar21 + 0x3c) + fVar51;
                      auVar40._0_4_ = *(float *)(lVar21 + 0x20) - fVar41;
                      auVar40._4_4_ = *(float *)(lVar21 + 0x24) - fVar51;
                      auVar40._8_4_ = *(float *)(lVar21 + 0x28) - fVar41;
                      auVar40._12_4_ = *(float *)(lVar21 + 0x2c) - fVar51;
                    }
                    auVar27 = NEON_fmin(auVar31,*(undefined1 (*) [16])(param_3 + 8),4);
                    auVar38 = NEON_fmax(auVar40,*(undefined1 (*) [16])(param_3 + 6),4);
                    param_3[7] = auVar38._8_8_;
                    param_3[6] = auVar38._0_8_;
                    param_3[9] = auVar27._8_8_;
                    param_3[8] = auVar27._0_8_;
                  }
                  else {
                    lVar18 = **(long **)(lVar21 + 0x50);
                    lVar17 = **(long **)(lVar21 + 0x60);
                    uVar15 = 0xffffff;
                    local_c8 = 0xffffffff;
                    local_f0 = (undefined1 *)0x0;
                    local_e8 = 0;
                    local_100 = 0;
                    local_f8 = 0;
                    local_c4 = 0xf;
                    local_9c = 0xf;
                    local_e0 = local_e0 & 0xffffffff00000000;
                    local_84 = 0;
                    local_88 = 6;
                    if (lVar18 == 0) {
                      local_d8 = 0xffffffffffffffff;
                    }
                    else {
                      local_d8 = *(undefined8 *)(lVar18 + 0xb0);
                      uVar15 = *(undefined4 *)(lVar18 + 0x50);
                    }
                    local_d0 = CONCAT44((int)((ulong)local_d0 >> 0x20),uVar15);
                    local_c0 = CONCAT62((int6)(local_c0 >> 0x10),
                                        *(undefined2 *)(*(long *)(lVar21 + 0x48) + 0x10)) &
                               0xffffffff;
                    uStack_b8 = *(ulong *)(*(long *)(lVar21 + 0x48) + 0x14) >> 0x20;
                    if (lVar17 == 0) {
                      uVar15 = 0xffffff;
                      local_b0 = 0xffffffffffffffff;
                    }
                    else {
                      local_b0 = *(undefined8 *)(lVar17 + 0xb0);
                      uVar15 = *(undefined4 *)(lVar17 + 0x50);
                    }
                    uStack_a8 = CONCAT44((int)((ulong)uStack_a8 >> 0x20),uVar15);
                    local_98 = (undefined2)local_110;
                    local_94 = (undefined4)*puVar9;
                    uStack_90 = *puVar9 >> 0x20;
                    local_a0 = uVar79;
                    (**(code **)(*plVar20 + 0x28))(plVar20,&local_100);
                  }
                }
              } while( true );
            }
            goto LAB_02f86804;
          }
          iVar23 = (int)param_2[1];
          uVar8 = *(uint *)((long)param_2 + 0xc);
          uVar73 = iVar23 + 1;
          if (iVar23 < (int)(uVar8 & 0x3fffffff)) {
            lVar21 = *param_2;
          }
          else {
            lVar21 = *param_2;
            if (0x3ffffffe < iVar23) {
              FUN_032bd0a8(uVar73);
              uVar8 = *(uint *)((long)param_2 + 0xc);
            }
            uVar8 = (uVar8 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar8) {
              uVar8 = 0x3fffffff;
            }
            uVar3 = uVar73;
            if ((int)uVar73 <= (int)uVar8) {
              uVar3 = uVar8;
            }
            lVar21 = FUN_032bd1d4(puVar5,uVar3,2,lVar21,iVar23,(uint *)((long)param_2 + 0xc));
            iVar23 = (int)param_2[1];
            *param_2 = lVar21;
          }
          *(uint *)(param_2 + 1) = uVar73;
          *(ushort *)(lVar21 + (long)iVar23 * 2) = uVar1;
          uVar1 = *(ushort *)(pauVar10[1] + 0xc);
        } while( true );
      }
    }
  }
  return;
}


