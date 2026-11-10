/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f83e30; name: FUN_02f83e30
 */


void FUN_02f83e30(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 (*pauVar11) [16];
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  long *plVar18;
  undefined1 (*pauVar19) [16];
  long lVar20;
  byte *pbVar21;
  int iVar22;
  undefined1 *puVar23;
  long lVar24;
  float fVar31;
  float fVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar39;
  undefined8 uVar43;
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  float fVar40;
  float fVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar48 [16];
  float fVar50;
  undefined8 uVar51;
  float fVar55;
  undefined1 auVar52 [16];
  float fVar54;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar53 [16];
  float fVar59;
  float fVar60;
  float fVar64;
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  undefined8 uVar70;
  undefined1 auVar71 [12];
  undefined1 auVar72 [16];
  float fVar73;
  undefined1 auVar74 [16];
  undefined8 uVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined4 uVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar85;
  float fVar86;
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
  
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar6 = 0;
    if (*param_1 != 0) {
      lVar6 = *param_1 + (long)param_1;
    }
    pauVar11 = (undefined1 (*) [16])(lVar6 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    auVar25 = *pauVar11;
    auVar33 = pauVar11[1];
    auVar82._0_12_ = auVar33._0_12_;
    auVar82._12_4_ = 0;
    lVar6 = param_2[1];
    auVar26._0_4_ = -(uint)(auVar25._0_4_ <= *(float *)(param_3 + 4));
    auVar26._4_4_ = -(uint)(auVar25._4_4_ <= *(float *)((long)param_3 + 0x24));
    auVar26._8_4_ = -(uint)(auVar25._8_4_ <= *(float *)(param_3 + 5));
    auVar26._12_4_ = -(uint)(auVar25._12_4_ <= *(float *)((long)param_3 + 0x2c));
    auVar35._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar33._0_4_);
    auVar35._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar33._4_4_);
    auVar35._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar33._8_4_);
    auVar35._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
    uVar39 = CONCAT13((byte)((uint)auVar26._0_4_ >> 0x18) & (byte)((uint)auVar35._0_4_ >> 0x18),
                      CONCAT12((byte)((uint)auVar26._0_4_ >> 0x10) &
                               (byte)((uint)auVar35._0_4_ >> 0x10),
                               CONCAT11((byte)((uint)auVar26._0_4_ >> 8) &
                                        (byte)((uint)auVar35._0_4_ >> 8),
                                        (byte)auVar26._0_4_ & (byte)auVar35._0_4_)));
    auVar71._0_8_ =
         CONCAT17((byte)((uint)auVar26._4_4_ >> 0x18) & (byte)((uint)auVar35._4_4_ >> 0x18),
                  CONCAT16((byte)((uint)auVar26._4_4_ >> 0x10) & (byte)((uint)auVar35._4_4_ >> 0x10)
                           ,CONCAT15((byte)((uint)auVar26._4_4_ >> 8) &
                                     (byte)((uint)auVar35._4_4_ >> 8),
                                     CONCAT14((byte)auVar26._4_4_ & (byte)auVar35._4_4_,uVar39))));
    auVar71[8] = (byte)auVar26._8_4_ & (byte)auVar35._8_4_;
    auVar71[9] = (byte)((uint)auVar26._8_4_ >> 8) & (byte)((uint)auVar35._8_4_ >> 8);
    auVar71[10] = (byte)((uint)auVar26._8_4_ >> 0x10) & (byte)((uint)auVar35._8_4_ >> 0x10);
    auVar71[0xb] = (byte)((uint)auVar26._8_4_ >> 0x18) & (byte)((uint)auVar35._8_4_ >> 0x18);
    auVar25 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar25,4);
    auVar33 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar82,4);
    auVar33 = auVar33 ^ (auVar33 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar35;
    auVar25 = auVar25 ^ (auVar25 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar26;
    param_3[7] = auVar33._8_8_;
    param_3[6] = auVar33._0_8_;
    param_3[9] = auVar25._8_8_;
    param_3[8] = auVar25._0_8_;
    puVar7 = PTR_PTR_0434a080;
    if ((uVar39 & (uint)((ulong)auVar71._0_8_ >> 0x20) & auVar71._8_4_) != 0) {
      uVar75 = NEON_fmov(0x3f800000,4);
      puVar13 = (ulong *)((ulong)&local_110 | 4);
LAB_02f83f20:
      uVar3 = *(ushort *)(pauVar11[1] + 0xc);
      do {
        uVar14 = (ulong)uVar3;
        if (uVar14 == 0) goto LAB_02f83ff0;
LAB_02f83f28:
        uVar3 = *(ushort *)(pauVar11[1] + 0xe);
        lVar20 = 0;
        if (*param_1 != 0) {
          lVar20 = *param_1 + (long)param_1;
        }
        pauVar11 = (undefined1 (*) [16])(lVar20 + uVar14 * 0x20);
        pauVar1 = (undefined1 (*) [16])(lVar20 + (ulong)uVar3 * 0x20);
        auVar25 = *pauVar11;
        auVar33 = pauVar11[1];
        auVar34._0_12_ = auVar33._0_12_;
        auVar34._12_4_ = 0;
        auVar82 = *pauVar1;
        auVar35 = pauVar1[1];
        auVar52._0_12_ = auVar35._0_12_;
        auVar52._12_4_ = 0;
        uVar79 = (undefined4)((ulong)param_3[7] >> 0x20);
        auVar67._0_4_ = -(uint)(auVar25._0_4_ <= *(float *)(param_3 + 4));
        auVar67._4_4_ = -(uint)(auVar25._4_4_ <= *(float *)((long)param_3 + 0x24));
        auVar67._8_4_ = -(uint)(auVar25._8_4_ <= *(float *)(param_3 + 5));
        auVar67._12_4_ = -(uint)(auVar25._12_4_ <= *(float *)((long)param_3 + 0x2c));
        auVar26 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar25,4);
        auVar74._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar33._0_4_);
        auVar74._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar33._4_4_);
        auVar74._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar33._8_4_);
        auVar74._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
        auVar61._0_4_ = -(uint)(auVar82._0_4_ <= *(float *)(param_3 + 4));
        auVar61._4_4_ = -(uint)(auVar82._4_4_ <= *(float *)((long)param_3 + 0x24));
        auVar61._8_4_ = -(uint)(auVar82._8_4_ <= *(float *)(param_3 + 5));
        auVar61._12_4_ = -(uint)(auVar82._12_4_ <= *(float *)((long)param_3 + 0x2c));
        auVar72._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar35._0_4_);
        auVar72._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar35._4_4_);
        auVar72._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar35._8_4_);
        auVar72._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
        auVar26 = auVar26 ^ (auVar26 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar67;
        auVar25._12_4_ = uVar79;
        auVar25._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
        auVar35 = NEON_fmax(auVar25,auVar34,4);
        auVar25 = NEON_fmin(auVar26,auVar82,4);
        uVar39 = CONCAT13((byte)((uint)auVar61._0_4_ >> 0x18) & (byte)((uint)auVar72._0_4_ >> 0x18),
                          CONCAT12((byte)((uint)auVar61._0_4_ >> 0x10) &
                                   (byte)((uint)auVar72._0_4_ >> 0x10),
                                   CONCAT11((byte)((uint)auVar61._0_4_ >> 8) &
                                            (byte)((uint)auVar72._0_4_ >> 8),
                                            (byte)auVar61._0_4_ & (byte)auVar72._0_4_)));
        auVar44._0_8_ =
             CONCAT17((byte)((uint)auVar61._4_4_ >> 0x18) & (byte)((uint)auVar72._4_4_ >> 0x18),
                      CONCAT16((byte)((uint)auVar61._4_4_ >> 0x10) &
                               (byte)((uint)auVar72._4_4_ >> 0x10),
                               CONCAT15((byte)((uint)auVar61._4_4_ >> 8) &
                                        (byte)((uint)auVar72._4_4_ >> 8),
                                        CONCAT14((byte)auVar61._4_4_ & (byte)auVar72._4_4_,uVar39)))
                     );
        auVar44[8] = (byte)auVar61._8_4_ & (byte)auVar72._8_4_;
        auVar44[9] = (byte)((uint)auVar61._8_4_ >> 8) & (byte)((uint)auVar72._8_4_ >> 8);
        auVar44[10] = (byte)((uint)auVar61._8_4_ >> 0x10) & (byte)((uint)auVar72._8_4_ >> 0x10);
        auVar44[0xb] = (byte)((uint)auVar61._8_4_ >> 0x18) & (byte)((uint)auVar72._8_4_ >> 0x18);
        auVar33._12_4_ = uVar79;
        auVar33._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
        auVar35 = auVar35 ^ (auVar35 ^ auVar33) & auVar74;
        auVar33 = NEON_fmax(auVar35,auVar52,4);
        auVar33 = auVar33 ^ (auVar33 ^ auVar35) & auVar72;
        bVar2 = (CONCAT13((byte)((uint)auVar67._0_4_ >> 0x18) & (byte)((uint)auVar74._0_4_ >> 0x18),
                          CONCAT12((byte)((uint)auVar67._0_4_ >> 0x10) &
                                   (byte)((uint)auVar74._0_4_ >> 0x10),
                                   CONCAT11((byte)((uint)auVar67._0_4_ >> 8) &
                                            (byte)((uint)auVar74._0_4_ >> 8),
                                            (byte)auVar67._0_4_ & (byte)auVar74._0_4_))) &
                 CONCAT13((byte)((uint)auVar67._4_4_ >> 0x18) & (byte)((uint)auVar74._4_4_ >> 0x18),
                          CONCAT12((byte)((uint)auVar67._4_4_ >> 0x10) &
                                   (byte)((uint)auVar74._4_4_ >> 0x10),
                                   CONCAT11((byte)((uint)auVar67._4_4_ >> 8) &
                                            (byte)((uint)auVar74._4_4_ >> 8),
                                            (byte)auVar67._4_4_ & (byte)auVar74._4_4_))) &
                CONCAT13((byte)((uint)auVar67._8_4_ >> 0x18) & (byte)((uint)auVar74._8_4_ >> 0x18),
                         CONCAT12((byte)((uint)auVar67._8_4_ >> 0x10) &
                                  (byte)((uint)auVar74._8_4_ >> 0x10),
                                  CONCAT11((byte)((uint)auVar67._8_4_ >> 8) &
                                           (byte)((uint)auVar74._8_4_ >> 8),
                                           (byte)auVar67._8_4_ & (byte)auVar74._8_4_)))) != 0 |
                ((uVar39 & (uint)((ulong)auVar44._0_8_ >> 0x20) & auVar44._8_4_) != 0) << 1;
        auVar25 = auVar25 ^ (auVar25 ^ auVar26) & auVar61;
        param_3[7] = auVar33._8_8_;
        param_3[6] = auVar33._0_8_;
        param_3[9] = auVar25._8_8_;
        param_3[8] = auVar25._0_8_;
        if (bVar2 == 1) goto LAB_02f83f20;
        if (bVar2 != 3) {
          pauVar11 = pauVar1;
          if (bVar2 != 2) {
LAB_02f84018:
            do {
              if ((int)param_2[1] <= (int)lVar6) {
                return;
              }
              iVar22 = (int)param_2[1] + -1;
              *(int *)(param_2 + 1) = iVar22;
              lVar20 = 0;
              if (*param_1 != 0) {
                lVar20 = *param_1 + (long)param_1;
              }
              pauVar11 = (undefined1 (*) [16])
                         (lVar20 + (ulong)*(ushort *)(*param_2 + (long)iVar22 * 2) * 0x20);
              uVar14 = (ulong)*(ushort *)(pauVar11[1] + 0xc);
              if (uVar14 != 0) goto LAB_02f83f28;
LAB_02f83ff0:
              lVar20 = *param_3;
              lVar24 = *(long *)(lVar20 + 8);
              pauVar1 = (undefined1 (*) [16])
                        (lVar24 + 0x48 +
                        (ulong)*(ushort *)(pauVar11[1] + 0xe) * 0x40 + *(long *)(lVar24 + 0x48));
              pbVar21 = pauVar1[1] + 0xe;
              if ((*pbVar21 >> 6 & 1) != 0) {
                pauVar19 = pauVar1 + 3;
                if (*(long *)*pauVar19 == 0) {
                  puVar23 = (undefined1 *)0x0;
                }
                else {
                  puVar23 = *pauVar19 + *(long *)*pauVar19;
                }
                local_110 = **(undefined8 **)(lVar20 + 0x58);
                uStack_108 = (*(undefined8 **)(lVar20 + 0x58))[1];
                plVar18 = *(long **)(lVar20 + 0x70);
                puVar15 = *(undefined8 **)(lVar20 + 0x60);
                uVar14 = puVar15[3];
                iVar22 = (int)(uVar14 >> 0x20) + (uint)*(byte *)(lVar24 + 0x1c);
                uVar14 = (ulong)((*(ushort *)(pauVar11[1] + 0xe) + 1 << (ulong)(-iVar22 & 0x1f)) - 1
                                ) | uVar14 & (uint)(&DAT_03aa74b0)[(long)uVar14 >> 0x20];
                plVar8 = (long *)**(long **)(lVar20 + 0x48);
                uVar79 = (undefined4)uVar14;
                if (plVar8 != (long *)0x0) {
                  if (*(long *)*pauVar19 == 0) {
                    puVar9 = (undefined1 *)0x0;
                  }
                  else {
                    puVar9 = *pauVar19 + *(long *)*pauVar19;
                  }
                  (**(code **)(*plVar8 + 0x40))
                            (plVar8,*(undefined2 *)(pauVar1[2] + 0xc),6,*puVar15,puVar15[1],lVar24,
                             uVar14,puVar9,&local_110);
                  lVar12 = *(long *)(lVar20 + 0x48);
                  if (*(long *)(lVar12 + 8) != 0) {
                    local_100 = CONCAT62(local_100._2_6_,*(undefined2 *)(lVar12 + 0x10));
                    uVar16 = *(undefined8 *)(lVar12 + 0x14);
                    *(undefined4 *)((undefined8 *)((ulong)&local_100 | 4) + 1) =
                         *(undefined4 *)(lVar12 + 0x1c);
                    *(undefined8 *)((ulong)&local_100 | 4) = uVar16;
                    puVar15 = *(undefined8 **)(lVar20 + 0x50);
                    local_f0 = (undefined1 *)*puVar15;
                    local_e8 = puVar15[1];
                    local_e0 = puVar15[2];
                    local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(puVar15 + 3));
                    local_d0 = 0;
                    local_160 = CONCAT62(local_160._2_6_,(undefined2)local_110);
                    uVar14 = *puVar13;
                    *(int *)((ulong *)((ulong)&local_160 | 4) + 1) = (int)puVar13[1];
                    *(ulong *)((ulong)&local_160 | 4) = uVar14;
                    local_150 = **(undefined8 **)(lVar20 + 0x60);
                    local_148 = (*(undefined8 **)(lVar20 + 0x60))[1];
                    local_138 = CONCAT44(local_138._4_4_,uVar79);
                    local_130 = *(undefined1 **)*pauVar19;
                    if (local_130 != (undefined1 *)0x0) {
                      local_130 = *pauVar19 + (long)local_130;
                    }
                    lStack_140 = lVar24;
                    uVar14 = (**(code **)(**(long **)(lVar12 + 8) + 0x40))
                                       (*(long **)(lVar12 + 8),6,1,&local_100,&local_160);
                    if ((uVar14 & 1) == 0) goto LAB_02f84018;
                  }
                }
                if (puVar23[0x19] == '\x03') {
                  puVar15 = *(undefined8 **)(lVar20 + 0x48);
                  local_158 = puVar15[1];
                  local_160 = *puVar15;
                  local_138 = puVar15[5];
                  local_148 = puVar15[3];
                  local_150 = puVar15[2];
                  lStack_140 = puVar15[4];
                  fVar38 = (float)uVar75;
                  if ((*pbVar21 >> 3 & 1) == 0) {
                    fVar49 = *(float *)pauVar1[1];
                    fVar31 = *(float *)(pauVar1[1] + 4);
                    fVar32 = *(float *)(pauVar1[1] + 8);
                    if ((*pbVar21 >> 2 & 1) == 0) {
                      uStack_128 = CONCAT44(*(float *)(lVar20 + 0x2c) - 0.0,
                                            *(float *)(lVar20 + 0x28) - fVar32);
                      local_130 = (undefined1 *)
                                  CONCAT44(*(float *)(lVar20 + 0x24) - fVar31,
                                           *(float *)(lVar20 + 0x20) - fVar49);
                      uStack_118 = CONCAT44(*(float *)(lVar20 + 0x3c) - 0.0,
                                            *(float *)(lVar20 + 0x38) - fVar32);
                      local_120 = CONCAT44(*(float *)(lVar20 + 0x34) - fVar31,
                                           *(float *)(lVar20 + 0x30) - fVar49);
                    }
                    else {
                      auVar25 = *pauVar1;
                      fVar77 = auVar25._0_4_;
                      auVar47._0_4_ = fVar77 + fVar77;
                      fVar80 = auVar25._4_4_;
                      auVar47._4_4_ = fVar80 + fVar80;
                      auVar47._8_4_ = auVar25._8_4_ + auVar25._8_4_;
                      fVar76 = auVar25._12_4_;
                      auVar47._12_4_ = fVar76 + fVar76;
                      auVar25 = NEON_ext(auVar25,auVar25,8,1);
                      auVar33 = NEON_ext(auVar47,auVar47,8,1);
                      fVar56 = (float)*(undefined8 *)(lVar20 + 0x28);
                      fVar40 = (float)*(undefined8 *)(lVar20 + 0x20);
                      fVar54 = (float)((ulong)*(undefined8 *)(lVar20 + 0x20) >> 0x20);
                      fVar41 = auVar25._0_4_ * auVar33._0_4_;
                      fVar86 = auVar47._4_4_ * fVar77 + auVar47._8_4_ * fVar76;
                      fVar81 = auVar47._4_4_ * fVar77 - auVar47._8_4_ * fVar76;
                      fVar85 = auVar47._8_4_ * fVar77 - auVar47._4_4_ * fVar76;
                      fVar78 = auVar47._8_4_ * fVar77 + auVar47._4_4_ * fVar76;
                      fVar50 = fVar38 - (auVar47._4_4_ * fVar80 + fVar41);
                      fVar41 = fVar38 - (auVar47._0_4_ * fVar77 + fVar41);
                      fVar69 = auVar47._8_4_ * fVar80 - auVar47._0_4_ * fVar76;
                      fVar60 = fVar38 - (auVar47._0_4_ * fVar77 + auVar47._4_4_ * fVar80);
                      fVar49 = (fVar40 + *(float *)(lVar20 + 0x30)) * 0.5 - fVar49;
                      fVar31 = (fVar54 + *(float *)(lVar20 + 0x34)) * 0.5 - fVar31;
                      fVar32 = (fVar56 + *(float *)(lVar20 + 0x38)) * 0.5 - fVar32;
                      fVar42 = auVar47._8_4_ * fVar80 + auVar47._0_4_ * fVar76;
                      fVar40 = (*(float *)(lVar20 + 0x30) - fVar40) * 0.5;
                      fVar54 = (*(float *)(lVar20 + 0x34) - fVar54) * 0.5;
                      fVar56 = (*(float *)(lVar20 + 0x38) - fVar56) * 0.5;
                      fVar77 = fVar85 * fVar32 + fVar50 * fVar49 + fVar86 * fVar31;
                      fVar80 = fVar42 * fVar32 + fVar81 * fVar49 + fVar41 * fVar31;
                      fVar76 = fVar60 * fVar32 + fVar78 * fVar49 + fVar69 * fVar31;
                      fVar49 = fVar32 * 0.0 + fVar69 * fVar49 + fVar31 * 0.0;
                      fVar31 = ABS(fVar85 * fVar56) + ABS(fVar50 * fVar40) + ABS(fVar86 * fVar54);
                      fVar32 = ABS(fVar42 * fVar56) + ABS(fVar81 * fVar40) + ABS(fVar41 * fVar54);
                      fVar78 = ABS(fVar60 * fVar56) + ABS(fVar78 * fVar40) + ABS(fVar69 * fVar54);
                      fVar41 = ABS(fVar56 * 0.0) + ABS(fVar69 * fVar40) + ABS(fVar54 * 0.0);
                      uStack_128 = CONCAT44(fVar49 - fVar41,fVar76 - fVar78);
                      local_130 = (undefined1 *)CONCAT44(fVar80 - fVar32,fVar77 - fVar31);
                      uStack_118 = CONCAT44(fVar49 + fVar41,fVar76 + fVar78);
                      local_120 = CONCAT44(fVar80 + fVar32,fVar77 + fVar31);
                    }
                  }
                  else {
                    fVar49 = *(float *)(lVar20 + 0x20);
                    fVar31 = *(float *)(lVar20 + 0x24);
                    local_130 = *(undefined1 **)(lVar20 + 0x20);
                    fVar32 = *(float *)(lVar20 + 0x28);
                    uStack_128 = *(undefined8 *)(lVar20 + 0x28);
                    fVar77 = *(float *)(lVar20 + 0x30);
                    fVar80 = *(float *)(lVar20 + 0x34);
                    fVar76 = *(float *)(lVar20 + 0x38);
                    if ((fVar77 < fVar49 || fVar80 < fVar31) || fVar76 < fVar32) {
                      local_120 = *(undefined8 *)(lVar20 + 0x30);
                      uStack_118 = *(undefined8 *)(lVar20 + 0x38);
                    }
                    else {
                      auVar25 = *pauVar1;
                      fVar69 = auVar25._0_4_;
                      auVar62._0_4_ = fVar69 + fVar69;
                      fVar85 = auVar25._4_4_;
                      auVar62._4_4_ = fVar85 + fVar85;
                      auVar62._8_4_ = auVar25._8_4_ + auVar25._8_4_;
                      fVar57 = auVar25._12_4_;
                      auVar62._12_4_ = fVar57 + fVar57;
                      auVar68._0_12_ = SUB1612(pauVar1[2],0);
                      auVar68._12_4_ = 0x3f800000;
                      auVar25 = NEON_ext(auVar25,auVar25,8,1);
                      auVar33 = NEON_ext(auVar62,auVar62,8,1);
                      auVar82 = NEON_frecpe(auVar68,4);
                      fVar50 = auVar25._0_4_ * auVar33._0_4_;
                      auVar25 = NEON_frecps(auVar68,auVar82,4);
                      fVar78 = (fVar77 - fVar49) * 0.5;
                      fVar41 = (fVar80 - fVar31) * 0.5;
                      fVar42 = (fVar76 - fVar32) * 0.5;
                      fVar54 = (fVar49 + fVar77) * 0.5;
                      fVar56 = (fVar31 + fVar80) * 0.5;
                      fVar60 = (fVar32 + fVar76) * 0.5;
                      fVar40 = auVar62._8_4_ * fVar85 - auVar62._0_4_ * fVar57;
                      auVar83._0_4_ = auVar82._0_4_ * auVar25._0_4_;
                      auVar83._4_4_ = auVar82._4_4_ * auVar25._4_4_;
                      auVar83._8_4_ = auVar82._8_4_ * auVar25._8_4_;
                      auVar83._12_4_ = auVar82._12_4_ * auVar25._12_4_;
                      auVar25 = NEON_frecps(auVar68,auVar83,4);
                      fVar73 = *(float *)(pauVar1[1] + 8);
                      fVar59 = auVar83._0_4_ * auVar25._0_4_;
                      fVar64 = auVar83._4_4_ * auVar25._4_4_;
                      fVar65 = auVar83._8_4_ * auVar25._8_4_;
                      fVar66 = auVar83._12_4_ * auVar25._12_4_;
                      fVar81 = fVar59 * (fVar38 - (auVar62._4_4_ * fVar85 + fVar50));
                      fVar86 = fVar64 * (auVar62._4_4_ * fVar69 - auVar62._8_4_ * fVar57);
                      fVar55 = fVar65 * (auVar62._8_4_ * fVar69 + auVar62._4_4_ * fVar57);
                      fVar58 = fVar66 * fVar40;
                      fVar80 = fVar59 * (auVar62._4_4_ * fVar69 + auVar62._8_4_ * fVar57);
                      fVar76 = fVar64 * (fVar38 - (auVar62._0_4_ * fVar69 + fVar50));
                      fVar40 = fVar65 * fVar40;
                      fVar50 = fVar66 * 0.0;
                      fVar59 = fVar59 * (auVar62._8_4_ * fVar69 - auVar62._4_4_ * fVar57);
                      fVar64 = fVar64 * (auVar62._8_4_ * fVar85 + auVar62._0_4_ * fVar57);
                      fVar65 = fVar65 * (fVar38 - (auVar62._0_4_ * fVar69 + auVar62._4_4_ * fVar85))
                      ;
                      fVar66 = fVar66 * 0.0;
                      fVar69 = (float)*(undefined8 *)pauVar1[1];
                      fVar85 = (float)((ulong)*(undefined8 *)pauVar1[1] >> 0x20);
                      fVar49 = ABS(fVar59 * fVar42) + ABS(fVar81 * fVar78) + ABS(fVar80 * fVar41);
                      fVar31 = ABS(fVar64 * fVar42) + ABS(fVar86 * fVar78) + ABS(fVar76 * fVar41);
                      fVar32 = ABS(fVar65 * fVar42) + ABS(fVar55 * fVar78) + ABS(fVar40 * fVar41);
                      fVar77 = ABS(fVar66 * fVar42) + ABS(fVar58 * fVar78) + ABS(fVar50 * fVar41);
                      fVar80 = fVar59 * fVar60 + fVar81 * fVar54 + fVar80 * fVar56 +
                               -(fVar59 * fVar73 + fVar81 * fVar69 + fVar80 * fVar85);
                      fVar76 = fVar64 * fVar60 + fVar86 * fVar54 + fVar76 * fVar56 +
                               -(fVar64 * fVar73 + fVar86 * fVar69 + fVar76 * fVar85);
                      fVar78 = fVar65 * fVar60 + fVar55 * fVar54 + fVar40 * fVar56 +
                               -(fVar65 * fVar73 + fVar55 * fVar69 + fVar40 * fVar85);
                      fVar41 = fVar66 * fVar60 + fVar58 * fVar54 + fVar50 * fVar56 +
                               fVar66 * fVar73 + fVar58 * fVar69 + fVar50 * fVar85;
                      uStack_128 = CONCAT44(fVar41 - fVar77,fVar78 - fVar32);
                      local_130 = (undefined1 *)CONCAT44(fVar76 - fVar31,fVar80 - fVar49);
                      uStack_118 = CONCAT44(fVar77 + fVar41,fVar32 + fVar78);
                      local_120 = CONCAT44(fVar31 + fVar76,fVar49 + fVar80);
                    }
                  }
                  puVar15 = *(undefined8 **)(lVar20 + 0x60);
                  NEON_fmov(0x3f800000,4);
                  uVar14 = (ulong)local_d0 >> 8;
                  local_100 = *puVar15;
                  local_f8 = puVar15[1];
                  local_e0 = puVar15[4];
                  local_d8 = 0;
                  local_d0 = CONCAT44(*(undefined4 *)((long)puVar15 + 0x34),
                                      (int)CONCAT71((int7)uVar14,*(undefined1 *)(puVar15 + 6)));
                  local_c0 = puVar15[8];
                  uStack_b8 = puVar15[9];
                  local_b0 = puVar15[10];
                  uStack_a8 = puVar15[0xb];
                  local_c8 = *(undefined4 *)(puVar15 + 7);
                  auVar27._8_4_ = 0x5f7ffff0;
                  auVar27._0_8_ = 0x5f7ffff05f7ffff0;
                  auVar27._12_4_ = 0x5f7ffff0;
                  local_e8 = CONCAT44(iVar22,uVar79);
                  auVar36._8_4_ = 0xdf7ffff0;
                  auVar36._0_8_ = 0xdf7ffff0df7ffff0;
                  auVar36._12_4_ = 0xdf7ffff0;
                  uStack_178 = auVar36._8_8_;
                  local_180 = 0xdf7ffff0df7ffff0;
                  uStack_168 = auVar27._8_8_;
                  uStack_170 = 0x5f7ffff05f7ffff0;
                  local_f0 = puVar23;
                  (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar23[0x18] * 0x200 + 0xe8))
                            (puVar23,*(undefined8 *)(lVar20 + 0x40),&local_160,
                             *(undefined8 *)(lVar20 + 0x50),&local_110,&local_100,plVar18,&local_180
                            );
                  fVar49 = *(float *)pauVar1[2];
                  fVar31 = *(float *)(pauVar1[2] + 4);
                  fVar32 = *(float *)(pauVar1[2] + 8);
                  bVar2 = *pbVar21;
                  fVar77 = (float)((ulong)local_180 >> 0x20);
                  fVar80 = (float)((ulong)uStack_178 >> 0x20);
                  fVar76 = (float)((ulong)uStack_170 >> 0x20);
                  fVar78 = (float)((ulong)uStack_168 >> 0x20);
                  if ((bVar2 >> 2 & 1) == 0) {
                    auVar53._8_8_ = uStack_178;
                    auVar53._0_8_ = local_180;
                    auVar48._8_8_ = uStack_168;
                    auVar48._0_8_ = uStack_170;
                    if ((bVar2 >> 3 & 1) != 0) {
                      auVar63._0_4_ = fVar49 * (float)local_180;
                      auVar63._4_4_ = fVar31 * fVar77;
                      auVar63._8_4_ = fVar32 * (float)uStack_178;
                      auVar63._12_4_ = fVar80 * 1.0;
                      auVar30._0_4_ = fVar49 * (float)uStack_170;
                      auVar30._4_4_ = fVar31 * fVar76;
                      auVar30._8_4_ = fVar32 * (float)uStack_168;
                      auVar30._12_4_ = fVar78 * 1.0;
                      auVar53 = NEON_fmin(auVar63,auVar30,4);
                      auVar48 = NEON_fmax(auVar63,auVar30,4);
                    }
                    auVar28._0_4_ = *(float *)pauVar1[1] + auVar53._0_4_;
                    auVar28._4_4_ = *(float *)(pauVar1[1] + 4) + auVar53._4_4_;
                    auVar28._8_4_ = *(float *)(pauVar1[1] + 8) + auVar53._8_4_;
                    auVar28._12_4_ = auVar53._12_4_ + 0.0;
                    auVar46._0_4_ = *(float *)pauVar1[1] + auVar48._0_4_;
                    auVar46._4_4_ = *(float *)(pauVar1[1] + 4) + auVar48._4_4_;
                    auVar46._8_4_ = *(float *)(pauVar1[1] + 8) + auVar48._8_4_;
                    auVar46._12_4_ = auVar48._12_4_ + 0.0;
                    auVar37 = NEON_fmin(auVar28,*(undefined1 (*) [16])(lVar20 + 0x20),4);
                    auVar29 = NEON_fmax(auVar46,*(undefined1 (*) [16])(lVar20 + 0x30),4);
                  }
                  else {
                    auVar25 = *pauVar1;
                    fVar41 = auVar25._0_4_;
                    auVar45._0_4_ = fVar41 + fVar41;
                    fVar42 = auVar25._4_4_;
                    auVar45._4_4_ = fVar42 + fVar42;
                    auVar45._8_4_ = auVar25._8_4_ + auVar25._8_4_;
                    fVar50 = auVar25._12_4_;
                    auVar45._12_4_ = fVar50 + fVar50;
                    auVar33 = NEON_ext(auVar25,auVar25,8,1);
                    auVar25 = NEON_ext(auVar45,auVar45,8,1);
                    fVar40 = auVar33._0_4_ * auVar25._0_4_;
                    auVar84._0_4_ = (float)uStack_170 - (float)local_120;
                    auVar84._4_4_ = fVar76 - local_120._4_4_;
                    auVar84._8_4_ = (float)uStack_168 - (float)uStack_118;
                    auVar84._12_4_ = fVar78 - uStack_118._4_4_;
                    fVar76 = (float)local_130 - (float)local_180;
                    fVar77 = local_130._4_4_ - fVar77;
                    fVar78 = (float)uStack_128 - (float)uStack_178;
                    fVar80 = uStack_128._4_4_ - fVar80;
                    if ((bVar2 >> 3 & 1) != 0) {
                      fVar76 = ABS(fVar49) * fVar76;
                      fVar77 = ABS(fVar31) * fVar77;
                      fVar78 = ABS(fVar32) * fVar78;
                      fVar80 = fVar80 * 1.0;
                      auVar84._0_4_ = ABS(fVar49) * auVar84._0_4_;
                      auVar84._4_4_ = ABS(fVar31) * auVar84._4_4_;
                      auVar84._8_4_ = ABS(fVar32) * auVar84._8_4_;
                      auVar84._12_4_ = auVar84._12_4_ * 1.0;
                    }
                    auVar4._4_4_ = fVar77;
                    auVar4._0_4_ = fVar76;
                    auVar4._8_4_ = fVar78;
                    auVar4._12_4_ = fVar80;
                    auVar25 = NEON_smin(auVar4,auVar84,4);
                    uVar70 = NEON_fminp(auVar25._0_8_,auVar25._0_8_,4);
                    uVar16 = CONCAT44(ABS(auVar45._8_4_ * fVar42 + auVar45._0_4_ * fVar50) +
                                      ABS(auVar45._4_4_ * fVar41 - auVar45._8_4_ * fVar50) +
                                      ABS(fVar38 - (auVar45._0_4_ * fVar41 + fVar40)),
                                      ABS(auVar45._8_4_ * fVar41 - auVar45._4_4_ * fVar50) +
                                      ABS(fVar38 - (auVar45._4_4_ * fVar42 + fVar40)) +
                                      ABS(auVar45._4_4_ * fVar41 + auVar45._8_4_ * fVar50));
                    fVar38 = ABS(fVar38 - (auVar45._0_4_ * fVar41 + auVar45._4_4_ * fVar42)) +
                             ABS(auVar45._8_4_ * fVar41 + auVar45._4_4_ * fVar50) +
                             ABS(auVar45._8_4_ * fVar42 - auVar45._0_4_ * fVar50);
                    uVar16 = NEON_fmaxp(uVar16,uVar16,4);
                    uVar16 = NEON_fmax(CONCAT44(fVar38,fVar38),uVar16,4);
                    uVar43 = NEON_frecpe(uVar16,4);
                    uVar51 = NEON_frecps(uVar16,uVar43,4);
                    fVar38 = (float)uVar43 * (float)uVar51;
                    fVar49 = (float)((ulong)uVar43 >> 0x20) * (float)((ulong)uVar51 >> 0x20);
                    uVar43 = NEON_frecps(uVar16,CONCAT44(fVar49,fVar38),4);
                    auVar25 = NEON_ext(auVar25,auVar25,8,1);
                    uVar16 = NEON_fmin(CONCAT44(auVar25._0_4_,auVar25._0_4_),uVar70,4);
                    fVar38 = (float)uVar16 * fVar38 * (float)uVar43;
                    fVar49 = (float)((ulong)uVar16 >> 0x20) *
                             fVar49 * (float)((ulong)uVar43 >> 0x20);
                    auVar29._0_4_ = *(float *)(lVar20 + 0x30) + fVar38;
                    auVar29._4_4_ = *(float *)(lVar20 + 0x34) + fVar49;
                    auVar29._8_4_ = *(float *)(lVar20 + 0x38) + fVar38;
                    auVar29._12_4_ = *(float *)(lVar20 + 0x3c) + fVar49;
                    auVar37._0_4_ = *(float *)(lVar20 + 0x20) - fVar38;
                    auVar37._4_4_ = *(float *)(lVar20 + 0x24) - fVar49;
                    auVar37._8_4_ = *(float *)(lVar20 + 0x28) - fVar38;
                    auVar37._12_4_ = *(float *)(lVar20 + 0x2c) - fVar49;
                  }
                  auVar25 = NEON_fmin(auVar29,*(undefined1 (*) [16])(param_3 + 8),4);
                  auVar33 = NEON_fmax(auVar37,*(undefined1 (*) [16])(param_3 + 6),4);
                  param_3[7] = auVar33._8_8_;
                  param_3[6] = auVar33._0_8_;
                  param_3[9] = auVar25._8_8_;
                  param_3[8] = auVar25._0_8_;
                }
                else {
                  lVar12 = **(long **)(lVar20 + 0x50);
                  lVar24 = **(long **)(lVar20 + 0x60);
                  uVar17 = 0xffffff;
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
                  if (lVar12 == 0) {
                    local_d8 = 0xffffffffffffffff;
                  }
                  else {
                    local_d8 = *(undefined8 *)(lVar12 + 0xb0);
                    uVar17 = *(undefined4 *)(lVar12 + 0x50);
                  }
                  local_d0 = CONCAT44((int)((ulong)local_d0 >> 0x20),uVar17);
                  local_c0 = CONCAT62((int6)(local_c0 >> 0x10),
                                      *(undefined2 *)(*(long *)(lVar20 + 0x48) + 0x10)) & 0xffffffff
                  ;
                  uStack_b8 = *(ulong *)(*(long *)(lVar20 + 0x48) + 0x14) >> 0x20;
                  if (lVar24 == 0) {
                    uVar17 = 0xffffff;
                    local_b0 = 0xffffffffffffffff;
                  }
                  else {
                    local_b0 = *(undefined8 *)(lVar24 + 0xb0);
                    uVar17 = *(undefined4 *)(lVar24 + 0x50);
                  }
                  uStack_a8 = CONCAT44((int)((ulong)uStack_a8 >> 0x20),uVar17);
                  local_98 = (undefined2)local_110;
                  local_94 = (undefined4)*puVar13;
                  uStack_90 = *puVar13 >> 0x20;
                  local_a0 = uVar79;
                  (**(code **)(*plVar18 + 0x28))(plVar18,&local_100);
                }
              }
            } while( true );
          }
          goto LAB_02f83f20;
        }
        iVar22 = (int)param_2[1];
        uVar10 = *(uint *)((long)param_2 + 0xc);
        uVar39 = iVar22 + 1;
        if (iVar22 < (int)(uVar10 & 0x3fffffff)) {
          lVar20 = *param_2;
        }
        else {
          lVar20 = *param_2;
          if (0x3ffffffe < iVar22) {
            FUN_032bd0a8(uVar39);
            uVar10 = *(uint *)((long)param_2 + 0xc);
          }
          uVar10 = (uVar10 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar10) {
            uVar10 = 0x3fffffff;
          }
          uVar5 = uVar39;
          if ((int)uVar39 <= (int)uVar10) {
            uVar5 = uVar10;
          }
          lVar20 = FUN_032bd1d4(puVar7,uVar5,2,lVar20,iVar22,(uint *)((long)param_2 + 0xc));
          iVar22 = (int)param_2[1];
          *param_2 = lVar20;
        }
        *(uint *)(param_2 + 1) = uVar39;
        *(ushort *)(lVar20 + (long)iVar22 * 2) = uVar3;
        uVar3 = *(ushort *)(pauVar11[1] + 0xc);
      } while( true );
    }
  }
  return;
}


