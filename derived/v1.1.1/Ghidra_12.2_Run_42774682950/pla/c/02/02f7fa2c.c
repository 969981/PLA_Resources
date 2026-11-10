/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f7fa2c; name: FUN_02f7fa2c
 */


void FUN_02f7fa2c(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined1 (*pauVar18) [16];
  long lVar19;
  int iVar20;
  byte *pbVar21;
  long *plVar22;
  long lVar23;
  float fVar24;
  float fVar31;
  float fVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar40;
  undefined8 uVar44;
  undefined1 auVar45 [12];
  undefined1 auVar46 [16];
  float fVar41;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar49 [16];
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
  undefined4 uVar78;
  float fVar79;
  float fVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  float fVar85;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  long local_120;
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
  
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar7 = 0;
    if (*param_1 != 0) {
      lVar7 = *param_1 + (long)param_1;
    }
    pauVar13 = (undefined1 (*) [16])(lVar7 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    auVar25 = *pauVar13;
    auVar34 = pauVar13[1];
    auVar82._0_12_ = auVar34._0_12_;
    auVar82._12_4_ = 0;
    lVar7 = param_2[1];
    auVar26._0_4_ = -(uint)(auVar25._0_4_ <= *(float *)(param_3 + 4));
    auVar26._4_4_ = -(uint)(auVar25._4_4_ <= *(float *)((long)param_3 + 0x24));
    auVar26._8_4_ = -(uint)(auVar25._8_4_ <= *(float *)(param_3 + 5));
    auVar26._12_4_ = -(uint)(auVar25._12_4_ <= *(float *)((long)param_3 + 0x2c));
    auVar36._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar34._0_4_);
    auVar36._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar34._4_4_);
    auVar36._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar34._8_4_);
    auVar36._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
    uVar40 = CONCAT13((byte)((uint)auVar26._0_4_ >> 0x18) & (byte)((uint)auVar36._0_4_ >> 0x18),
                      CONCAT12((byte)((uint)auVar26._0_4_ >> 0x10) &
                               (byte)((uint)auVar36._0_4_ >> 0x10),
                               CONCAT11((byte)((uint)auVar26._0_4_ >> 8) &
                                        (byte)((uint)auVar36._0_4_ >> 8),
                                        (byte)auVar26._0_4_ & (byte)auVar36._0_4_)));
    auVar71._0_8_ =
         CONCAT17((byte)((uint)auVar26._4_4_ >> 0x18) & (byte)((uint)auVar36._4_4_ >> 0x18),
                  CONCAT16((byte)((uint)auVar26._4_4_ >> 0x10) & (byte)((uint)auVar36._4_4_ >> 0x10)
                           ,CONCAT15((byte)((uint)auVar26._4_4_ >> 8) &
                                     (byte)((uint)auVar36._4_4_ >> 8),
                                     CONCAT14((byte)auVar26._4_4_ & (byte)auVar36._4_4_,uVar40))));
    auVar71[8] = (byte)auVar26._8_4_ & (byte)auVar36._8_4_;
    auVar71[9] = (byte)((uint)auVar26._8_4_ >> 8) & (byte)((uint)auVar36._8_4_ >> 8);
    auVar71[10] = (byte)((uint)auVar26._8_4_ >> 0x10) & (byte)((uint)auVar36._8_4_ >> 0x10);
    auVar71[0xb] = (byte)((uint)auVar26._8_4_ >> 0x18) & (byte)((uint)auVar36._8_4_ >> 0x18);
    auVar25 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar25,4);
    auVar34 = NEON_fmax(*(undefined1 (*) [16])(param_3 + 6),auVar82,4);
    auVar34 = auVar34 ^ (auVar34 ^ *(undefined1 (*) [16])(param_3 + 6)) & auVar36;
    auVar25 = auVar25 ^ (auVar25 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar26;
    param_3[7] = auVar34._8_8_;
    param_3[6] = auVar34._0_8_;
    param_3[9] = auVar25._8_8_;
    param_3[8] = auVar25._0_8_;
    puVar8 = PTR_PTR_0434a080;
    if ((uVar40 & (uint)((ulong)auVar71._0_8_ >> 0x20) & auVar71._8_4_) != 0) {
      uVar75 = NEON_fmov(0x3f800000,4);
LAB_02f7fb08:
      uVar4 = *(ushort *)(pauVar13[1] + 0xc);
      do {
        uVar15 = (ulong)uVar4;
        if (uVar15 == 0) goto LAB_02f7fbd8;
LAB_02f7fb10:
        uVar4 = *(ushort *)(pauVar13[1] + 0xe);
        lVar19 = 0;
        if (*param_1 != 0) {
          lVar19 = *param_1 + (long)param_1;
        }
        pauVar13 = (undefined1 (*) [16])(lVar19 + uVar15 * 0x20);
        pauVar1 = (undefined1 (*) [16])(lVar19 + (ulong)uVar4 * 0x20);
        auVar25 = *pauVar13;
        auVar34 = pauVar13[1];
        auVar35._0_12_ = auVar34._0_12_;
        auVar35._12_4_ = 0;
        auVar82 = *pauVar1;
        auVar36 = pauVar1[1];
        auVar52._0_12_ = auVar36._0_12_;
        auVar52._12_4_ = 0;
        uVar78 = (undefined4)((ulong)param_3[7] >> 0x20);
        auVar67._0_4_ = -(uint)(auVar25._0_4_ <= *(float *)(param_3 + 4));
        auVar67._4_4_ = -(uint)(auVar25._4_4_ <= *(float *)((long)param_3 + 0x24));
        auVar67._8_4_ = -(uint)(auVar25._8_4_ <= *(float *)(param_3 + 5));
        auVar67._12_4_ = -(uint)(auVar25._12_4_ <= *(float *)((long)param_3 + 0x2c));
        auVar26 = NEON_fmin(*(undefined1 (*) [16])(param_3 + 8),auVar25,4);
        auVar74._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar34._0_4_);
        auVar74._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar34._4_4_);
        auVar74._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar34._8_4_);
        auVar74._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
        auVar61._0_4_ = -(uint)(auVar82._0_4_ <= *(float *)(param_3 + 4));
        auVar61._4_4_ = -(uint)(auVar82._4_4_ <= *(float *)((long)param_3 + 0x24));
        auVar61._8_4_ = -(uint)(auVar82._8_4_ <= *(float *)(param_3 + 5));
        auVar61._12_4_ = -(uint)(auVar82._12_4_ <= *(float *)((long)param_3 + 0x2c));
        auVar72._0_4_ = -(uint)(*(float *)(param_3 + 2) <= auVar36._0_4_);
        auVar72._4_4_ = -(uint)(*(float *)((long)param_3 + 0x14) <= auVar36._4_4_);
        auVar72._8_4_ = -(uint)(*(float *)(param_3 + 3) <= auVar36._8_4_);
        auVar72._12_4_ = -(uint)(*(float *)((long)param_3 + 0x1c) <= 0.0);
        auVar26 = auVar26 ^ (auVar26 ^ *(undefined1 (*) [16])(param_3 + 8)) & auVar67;
        auVar25._12_4_ = uVar78;
        auVar25._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
        auVar36 = NEON_fmax(auVar25,auVar35,4);
        auVar25 = NEON_fmin(auVar26,auVar82,4);
        uVar40 = CONCAT13((byte)((uint)auVar61._0_4_ >> 0x18) & (byte)((uint)auVar72._0_4_ >> 0x18),
                          CONCAT12((byte)((uint)auVar61._0_4_ >> 0x10) &
                                   (byte)((uint)auVar72._0_4_ >> 0x10),
                                   CONCAT11((byte)((uint)auVar61._0_4_ >> 8) &
                                            (byte)((uint)auVar72._0_4_ >> 8),
                                            (byte)auVar61._0_4_ & (byte)auVar72._0_4_)));
        auVar45._0_8_ =
             CONCAT17((byte)((uint)auVar61._4_4_ >> 0x18) & (byte)((uint)auVar72._4_4_ >> 0x18),
                      CONCAT16((byte)((uint)auVar61._4_4_ >> 0x10) &
                               (byte)((uint)auVar72._4_4_ >> 0x10),
                               CONCAT15((byte)((uint)auVar61._4_4_ >> 8) &
                                        (byte)((uint)auVar72._4_4_ >> 8),
                                        CONCAT14((byte)auVar61._4_4_ & (byte)auVar72._4_4_,uVar40)))
                     );
        auVar45[8] = (byte)auVar61._8_4_ & (byte)auVar72._8_4_;
        auVar45[9] = (byte)((uint)auVar61._8_4_ >> 8) & (byte)((uint)auVar72._8_4_ >> 8);
        auVar45[10] = (byte)((uint)auVar61._8_4_ >> 0x10) & (byte)((uint)auVar72._8_4_ >> 0x10);
        auVar45[0xb] = (byte)((uint)auVar61._8_4_ >> 0x18) & (byte)((uint)auVar72._8_4_ >> 0x18);
        auVar34._12_4_ = uVar78;
        auVar34._0_12_ = *(undefined1 (*) [12])(param_3 + 6);
        auVar36 = auVar36 ^ (auVar36 ^ auVar34) & auVar74;
        auVar34 = NEON_fmax(auVar36,auVar52,4);
        auVar34 = auVar34 ^ (auVar34 ^ auVar36) & auVar72;
        bVar3 = (CONCAT13((byte)((uint)auVar67._0_4_ >> 0x18) & (byte)((uint)auVar74._0_4_ >> 0x18),
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
                ((uVar40 & (uint)((ulong)auVar45._0_8_ >> 0x20) & auVar45._8_4_) != 0) << 1;
        auVar25 = auVar25 ^ (auVar25 ^ auVar26) & auVar61;
        param_3[7] = auVar34._8_8_;
        param_3[6] = auVar34._0_8_;
        param_3[9] = auVar25._8_8_;
        param_3[8] = auVar25._0_8_;
        if (bVar3 == 1) goto LAB_02f7fb08;
        if (bVar3 != 3) {
          pauVar13 = pauVar1;
          if (bVar3 != 2) {
LAB_02f7fc00:
            do {
              if ((int)param_2[1] <= (int)lVar7) {
                return;
              }
              iVar20 = (int)param_2[1] + -1;
              *(int *)(param_2 + 1) = iVar20;
              lVar19 = 0;
              if (*param_1 != 0) {
                lVar19 = *param_1 + (long)param_1;
              }
              pauVar13 = (undefined1 (*) [16])
                         (lVar19 + (ulong)*(ushort *)(*param_2 + (long)iVar20 * 2) * 0x20);
              uVar15 = (ulong)*(ushort *)(pauVar13[1] + 0xc);
              if (uVar15 != 0) goto LAB_02f7fb10;
LAB_02f7fbd8:
              lVar19 = *param_3;
              lVar23 = *(long *)(lVar19 + 8);
              pauVar1 = (undefined1 (*) [16])
                        (lVar23 + 0x48 +
                        (ulong)*(ushort *)(pauVar13[1] + 0xe) * 0x40 + *(long *)(lVar23 + 0x48));
              pbVar21 = pauVar1[1] + 0xe;
              if ((*pbVar21 >> 6 & 1) != 0) {
                pauVar18 = pauVar1 + 3;
                plVar22 = *(long **)(lVar19 + 0x70);
                local_88 = **(undefined8 **)(lVar19 + 0x58);
                uStack_80 = (*(undefined8 **)(lVar19 + 0x58))[1];
                puVar2 = (undefined1 *)0x0;
                if (*(long *)*pauVar18 != 0) {
                  puVar2 = *pauVar18 + *(long *)*pauVar18;
                }
                puVar16 = *(undefined8 **)(lVar19 + 0x60);
                uVar15 = puVar16[3];
                iVar20 = (int)(uVar15 >> 0x20) + (uint)*(byte *)(lVar23 + 0x1c);
                uVar15 = (ulong)((*(ushort *)(pauVar13[1] + 0xe) + 1 << (ulong)(-iVar20 & 0x1f)) - 1
                                ) | uVar15 & (uint)(&DAT_03aa74b0)[(long)uVar15 >> 0x20];
                plVar9 = (long *)**(long **)(lVar19 + 0x48);
                uVar78 = (undefined4)uVar15;
                if (plVar9 != (long *)0x0) {
                  if (*(long *)*pauVar18 == 0) {
                    puVar11 = (undefined1 *)0x0;
                  }
                  else {
                    puVar11 = *pauVar18 + *(long *)*pauVar18;
                  }
                  (**(code **)(*plVar9 + 0x40))
                            (plVar9,*(undefined2 *)(pauVar1[2] + 0xc),6,*puVar16,puVar16[1],lVar23,
                             uVar15,puVar11,&local_88);
                  lVar14 = *(long *)(lVar19 + 0x48);
                  if (*(long *)(lVar14 + 8) != 0) {
                    local_140 = CONCAT62(local_140._2_6_,*(undefined2 *)(lVar14 + 0x10));
                    uVar17 = *(undefined8 *)(lVar14 + 0x14);
                    *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                         *(undefined4 *)(lVar14 + 0x1c);
                    *(undefined8 *)((ulong)&local_140 | 4) = uVar17;
                    plVar9 = *(long **)(lVar19 + 0x50);
                    local_130 = (undefined1 *)*plVar9;
                    local_128 = plVar9[1];
                    local_120 = plVar9[2];
                    local_118 = CONCAT44(local_118._4_4_,(int)plVar9[3]);
                    local_e0 = CONCAT62(local_e0._2_6_,(undefined2)local_88);
                    uVar17 = *(undefined8 *)((ulong)&local_88 | 4);
                    local_110 = 0;
                    *(undefined4 *)((undefined8 *)((ulong)&local_e0 | 4) + 1) =
                         *(undefined4 *)((undefined8 *)((ulong)&local_88 | 4) + 1);
                    *(undefined8 *)((ulong)&local_e0 | 4) = uVar17;
                    local_d0 = **(undefined8 **)(lVar19 + 0x60);
                    local_c8 = (*(undefined8 **)(lVar19 + 0x60))[1];
                    local_b8 = CONCAT44(local_b8._4_4_,uVar78);
                    local_b0 = *(undefined1 **)*pauVar18;
                    if (local_b0 != (undefined1 *)0x0) {
                      local_b0 = *pauVar18 + (long)local_b0;
                    }
                    lStack_c0 = lVar23;
                    uVar15 = (**(code **)(**(long **)(lVar14 + 8) + 0x40))
                                       (*(long **)(lVar14 + 8),6,1,&local_140,&local_e0);
                    if ((uVar15 & 1) == 0) goto LAB_02f7fc00;
                  }
                }
                if (puVar2[0x19] == '\x03') {
                  puVar16 = *(undefined8 **)(lVar19 + 0x48);
                  local_d8 = puVar16[1];
                  local_e0 = *puVar16;
                  local_b8 = puVar16[5];
                  local_c8 = puVar16[3];
                  local_d0 = puVar16[2];
                  lStack_c0 = puVar16[4];
                  fVar39 = (float)uVar75;
                  if ((*pbVar21 >> 3 & 1) == 0) {
                    fVar24 = *(float *)pauVar1[1];
                    fVar31 = *(float *)(pauVar1[1] + 4);
                    fVar32 = *(float *)(pauVar1[1] + 8);
                    if ((*pbVar21 >> 2 & 1) == 0) {
                      uStack_a8 = CONCAT44(*(float *)(lVar19 + 0x2c) - 0.0,
                                           *(float *)(lVar19 + 0x28) - fVar32);
                      local_b0 = (undefined1 *)
                                 CONCAT44(*(float *)(lVar19 + 0x24) - fVar31,
                                          *(float *)(lVar19 + 0x20) - fVar24);
                      fVar24 = *(float *)(lVar19 + 0x30) - fVar24;
                      fVar31 = *(float *)(lVar19 + 0x34) - fVar31;
                      fVar32 = *(float *)(lVar19 + 0x38) - fVar32;
                      fVar33 = *(float *)(lVar19 + 0x3c) - 0.0;
LAB_02f7fed4:
                      uStack_98 = CONCAT44(fVar33,fVar32);
                      local_a0 = CONCAT44(fVar31,fVar24);
                    }
                    else {
                      auVar25 = *pauVar1;
                      fVar33 = auVar25._0_4_;
                      auVar48._0_4_ = fVar33 + fVar33;
                      fVar79 = auVar25._4_4_;
                      auVar48._4_4_ = fVar79 + fVar79;
                      auVar48._8_4_ = auVar25._8_4_ + auVar25._8_4_;
                      fVar76 = auVar25._12_4_;
                      auVar48._12_4_ = fVar76 + fVar76;
                      auVar25 = NEON_ext(auVar25,auVar25,8,1);
                      auVar34 = NEON_ext(auVar48,auVar48,8,1);
                      fVar55 = (float)*(undefined8 *)(lVar19 + 0x28);
                      fVar41 = (float)*(undefined8 *)(lVar19 + 0x20);
                      fVar54 = (float)((ulong)*(undefined8 *)(lVar19 + 0x20) >> 0x20);
                      fVar42 = auVar25._0_4_ * auVar34._0_4_;
                      fVar85 = auVar48._4_4_ * fVar33 + auVar48._8_4_ * fVar76;
                      fVar80 = auVar48._4_4_ * fVar33 - auVar48._8_4_ * fVar76;
                      fVar84 = auVar48._8_4_ * fVar33 - auVar48._4_4_ * fVar76;
                      fVar77 = auVar48._8_4_ * fVar33 + auVar48._4_4_ * fVar76;
                      fVar50 = fVar39 - (auVar48._4_4_ * fVar79 + fVar42);
                      fVar42 = fVar39 - (auVar48._0_4_ * fVar33 + fVar42);
                      fVar69 = auVar48._8_4_ * fVar79 - auVar48._0_4_ * fVar76;
                      fVar59 = fVar39 - (auVar48._0_4_ * fVar33 + auVar48._4_4_ * fVar79);
                      fVar24 = (fVar41 + *(float *)(lVar19 + 0x30)) * 0.5 - fVar24;
                      fVar31 = (fVar54 + *(float *)(lVar19 + 0x34)) * 0.5 - fVar31;
                      fVar32 = (fVar55 + *(float *)(lVar19 + 0x38)) * 0.5 - fVar32;
                      fVar43 = auVar48._8_4_ * fVar79 + auVar48._0_4_ * fVar76;
                      fVar41 = (*(float *)(lVar19 + 0x30) - fVar41) * 0.5;
                      fVar54 = (*(float *)(lVar19 + 0x34) - fVar54) * 0.5;
                      fVar55 = (*(float *)(lVar19 + 0x38) - fVar55) * 0.5;
                      fVar33 = fVar84 * fVar32 + fVar50 * fVar24 + fVar85 * fVar31;
                      fVar79 = fVar43 * fVar32 + fVar80 * fVar24 + fVar42 * fVar31;
                      fVar76 = fVar59 * fVar32 + fVar77 * fVar24 + fVar69 * fVar31;
                      fVar24 = fVar32 * 0.0 + fVar69 * fVar24 + fVar31 * 0.0;
                      fVar31 = ABS(fVar84 * fVar55) + ABS(fVar50 * fVar41) + ABS(fVar85 * fVar54);
                      fVar32 = ABS(fVar43 * fVar55) + ABS(fVar80 * fVar41) + ABS(fVar42 * fVar54);
                      fVar77 = ABS(fVar59 * fVar55) + ABS(fVar77 * fVar41) + ABS(fVar69 * fVar54);
                      fVar42 = ABS(fVar55 * 0.0) + ABS(fVar69 * fVar41) + ABS(fVar54 * 0.0);
                      uStack_a8 = CONCAT44(fVar24 - fVar42,fVar76 - fVar77);
                      local_b0 = (undefined1 *)CONCAT44(fVar79 - fVar32,fVar33 - fVar31);
                      uStack_98 = CONCAT44(fVar24 + fVar42,fVar76 + fVar77);
                      local_a0 = CONCAT44(fVar79 + fVar32,fVar33 + fVar31);
                    }
                  }
                  else {
                    fVar24 = *(float *)(lVar19 + 0x20);
                    fVar31 = *(float *)(lVar19 + 0x24);
                    local_b0 = *(undefined1 **)(lVar19 + 0x20);
                    fVar32 = *(float *)(lVar19 + 0x28);
                    uStack_a8 = *(undefined8 *)(lVar19 + 0x28);
                    fVar33 = *(float *)(lVar19 + 0x30);
                    fVar79 = *(float *)(lVar19 + 0x34);
                    fVar76 = *(float *)(lVar19 + 0x38);
                    if ((fVar33 < fVar24 || fVar79 < fVar31) || fVar76 < fVar32) {
                      fVar24 = *(float *)(lVar19 + 0x30);
                      fVar31 = *(float *)(lVar19 + 0x34);
                      fVar32 = *(float *)(lVar19 + 0x38);
                      fVar33 = *(float *)(lVar19 + 0x3c);
                      goto LAB_02f7fed4;
                    }
                    auVar25 = *pauVar1;
                    fVar69 = auVar25._0_4_;
                    auVar62._0_4_ = fVar69 + fVar69;
                    fVar84 = auVar25._4_4_;
                    auVar62._4_4_ = fVar84 + fVar84;
                    auVar62._8_4_ = auVar25._8_4_ + auVar25._8_4_;
                    fVar57 = auVar25._12_4_;
                    auVar62._12_4_ = fVar57 + fVar57;
                    auVar68._0_12_ = SUB1612(pauVar1[2],0);
                    auVar68._12_4_ = 0x3f800000;
                    auVar25 = NEON_ext(auVar25,auVar25,8,1);
                    auVar34 = NEON_ext(auVar62,auVar62,8,1);
                    auVar82 = NEON_frecpe(auVar68,4);
                    fVar50 = auVar25._0_4_ * auVar34._0_4_;
                    auVar25 = NEON_frecps(auVar68,auVar82,4);
                    fVar77 = (fVar33 - fVar24) * 0.5;
                    fVar42 = (fVar79 - fVar31) * 0.5;
                    fVar43 = (fVar76 - fVar32) * 0.5;
                    fVar54 = (fVar24 + fVar33) * 0.5;
                    fVar55 = (fVar31 + fVar79) * 0.5;
                    fVar59 = (fVar32 + fVar76) * 0.5;
                    fVar41 = auVar62._8_4_ * fVar84 - auVar62._0_4_ * fVar57;
                    auVar83._0_4_ = auVar82._0_4_ * auVar25._0_4_;
                    auVar83._4_4_ = auVar82._4_4_ * auVar25._4_4_;
                    auVar83._8_4_ = auVar82._8_4_ * auVar25._8_4_;
                    auVar83._12_4_ = auVar82._12_4_ * auVar25._12_4_;
                    auVar25 = NEON_frecps(auVar68,auVar83,4);
                    fVar73 = *(float *)(pauVar1[1] + 8);
                    fVar60 = auVar83._0_4_ * auVar25._0_4_;
                    fVar64 = auVar83._4_4_ * auVar25._4_4_;
                    fVar65 = auVar83._8_4_ * auVar25._8_4_;
                    fVar66 = auVar83._12_4_ * auVar25._12_4_;
                    fVar80 = fVar60 * (fVar39 - (auVar62._4_4_ * fVar84 + fVar50));
                    fVar85 = fVar64 * (auVar62._4_4_ * fVar69 - auVar62._8_4_ * fVar57);
                    fVar56 = fVar65 * (auVar62._8_4_ * fVar69 + auVar62._4_4_ * fVar57);
                    fVar58 = fVar66 * fVar41;
                    fVar79 = fVar60 * (auVar62._4_4_ * fVar69 + auVar62._8_4_ * fVar57);
                    fVar76 = fVar64 * (fVar39 - (auVar62._0_4_ * fVar69 + fVar50));
                    fVar41 = fVar65 * fVar41;
                    fVar50 = fVar66 * 0.0;
                    fVar60 = fVar60 * (auVar62._8_4_ * fVar69 - auVar62._4_4_ * fVar57);
                    fVar64 = fVar64 * (auVar62._8_4_ * fVar84 + auVar62._0_4_ * fVar57);
                    fVar65 = fVar65 * (fVar39 - (auVar62._0_4_ * fVar69 + auVar62._4_4_ * fVar84));
                    fVar66 = fVar66 * 0.0;
                    fVar69 = (float)*(undefined8 *)pauVar1[1];
                    fVar84 = (float)((ulong)*(undefined8 *)pauVar1[1] >> 0x20);
                    fVar24 = ABS(fVar60 * fVar43) + ABS(fVar80 * fVar77) + ABS(fVar79 * fVar42);
                    fVar31 = ABS(fVar64 * fVar43) + ABS(fVar85 * fVar77) + ABS(fVar76 * fVar42);
                    fVar32 = ABS(fVar65 * fVar43) + ABS(fVar56 * fVar77) + ABS(fVar41 * fVar42);
                    fVar33 = ABS(fVar66 * fVar43) + ABS(fVar58 * fVar77) + ABS(fVar50 * fVar42);
                    fVar79 = fVar60 * fVar59 + fVar80 * fVar54 + fVar79 * fVar55 +
                             -(fVar60 * fVar73 + fVar80 * fVar69 + fVar79 * fVar84);
                    fVar76 = fVar64 * fVar59 + fVar85 * fVar54 + fVar76 * fVar55 +
                             -(fVar64 * fVar73 + fVar85 * fVar69 + fVar76 * fVar84);
                    fVar77 = fVar65 * fVar59 + fVar56 * fVar54 + fVar41 * fVar55 +
                             -(fVar65 * fVar73 + fVar56 * fVar69 + fVar41 * fVar84);
                    fVar42 = fVar66 * fVar59 + fVar58 * fVar54 + fVar50 * fVar55 +
                             fVar66 * fVar73 + fVar58 * fVar69 + fVar50 * fVar84;
                    uStack_a8 = CONCAT44(fVar42 - fVar33,fVar77 - fVar32);
                    local_b0 = (undefined1 *)CONCAT44(fVar76 - fVar31,fVar79 - fVar24);
                    uStack_98 = CONCAT44(fVar33 + fVar42,fVar32 + fVar77);
                    local_a0 = CONCAT44(fVar31 + fVar76,fVar24 + fVar79);
                  }
                  puVar16 = *(undefined8 **)(lVar19 + 0x60);
                  NEON_fmov(0x3f800000,4);
                  uVar15 = (ulong)local_110 >> 8;
                  local_140 = *puVar16;
                  local_138 = puVar16[1];
                  local_120 = puVar16[4];
                  local_118 = 0;
                  local_100 = puVar16[8];
                  uStack_f8 = puVar16[9];
                  local_f0 = puVar16[10];
                  uStack_e8 = puVar16[0xb];
                  uStack_108 = *(undefined4 *)(puVar16 + 7);
                  local_110 = CONCAT44(*(undefined4 *)((long)puVar16 + 0x34),
                                       (int)CONCAT71((int7)uVar15,*(undefined1 *)(puVar16 + 6)));
                  local_128 = CONCAT44(iVar20,uVar78);
                  auVar27._8_4_ = 0x5f7ffff0;
                  auVar27._0_8_ = 0x5f7ffff05f7ffff0;
                  auVar27._12_4_ = 0x5f7ffff0;
                  auVar37._8_4_ = 0xdf7ffff0;
                  auVar37._0_8_ = 0xdf7ffff0df7ffff0;
                  auVar37._12_4_ = 0xdf7ffff0;
                  uStack_158 = auVar37._8_8_;
                  local_160 = 0xdf7ffff0df7ffff0;
                  uStack_148 = auVar27._8_8_;
                  uStack_150 = 0x5f7ffff05f7ffff0;
                  local_130 = puVar2;
                  (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar2[0x18] * 0x200 + 0xe0))
                            (puVar2,*(undefined8 *)(lVar19 + 0x40),&local_e0,
                             *(undefined8 *)(lVar19 + 0x50),&local_88,&local_140,plVar22,&local_160)
                  ;
                  fVar24 = *(float *)pauVar1[2];
                  fVar31 = *(float *)(pauVar1[2] + 4);
                  fVar32 = *(float *)(pauVar1[2] + 8);
                  bVar3 = *pbVar21;
                  fVar33 = (float)((ulong)local_160 >> 0x20);
                  fVar79 = (float)((ulong)uStack_158 >> 0x20);
                  fVar76 = (float)((ulong)uStack_150 >> 0x20);
                  fVar77 = (float)((ulong)uStack_148 >> 0x20);
                  if ((bVar3 >> 2 & 1) == 0) {
                    auVar53._8_8_ = uStack_158;
                    auVar53._0_8_ = local_160;
                    auVar49._8_8_ = uStack_148;
                    auVar49._0_8_ = uStack_150;
                    if ((bVar3 >> 3 & 1) != 0) {
                      auVar63._0_4_ = fVar24 * (float)local_160;
                      auVar63._4_4_ = fVar31 * fVar33;
                      auVar63._8_4_ = fVar32 * (float)uStack_158;
                      auVar63._12_4_ = fVar79 * 1.0;
                      auVar30._0_4_ = fVar24 * (float)uStack_150;
                      auVar30._4_4_ = fVar31 * fVar76;
                      auVar30._8_4_ = fVar32 * (float)uStack_148;
                      auVar30._12_4_ = fVar77 * 1.0;
                      auVar53 = NEON_fmin(auVar63,auVar30,4);
                      auVar49 = NEON_fmax(auVar63,auVar30,4);
                    }
                    auVar28._0_4_ = *(float *)pauVar1[1] + auVar53._0_4_;
                    auVar28._4_4_ = *(float *)(pauVar1[1] + 4) + auVar53._4_4_;
                    auVar28._8_4_ = *(float *)(pauVar1[1] + 8) + auVar53._8_4_;
                    auVar28._12_4_ = auVar53._12_4_ + 0.0;
                    auVar47._0_4_ = *(float *)pauVar1[1] + auVar49._0_4_;
                    auVar47._4_4_ = *(float *)(pauVar1[1] + 4) + auVar49._4_4_;
                    auVar47._8_4_ = *(float *)(pauVar1[1] + 8) + auVar49._8_4_;
                    auVar47._12_4_ = auVar49._12_4_ + 0.0;
                    auVar38 = NEON_fmin(auVar28,*(undefined1 (*) [16])(lVar19 + 0x20),4);
                    auVar29 = NEON_fmax(auVar47,*(undefined1 (*) [16])(lVar19 + 0x30),4);
                  }
                  else {
                    auVar25 = *pauVar1;
                    fVar42 = auVar25._0_4_;
                    auVar46._0_4_ = fVar42 + fVar42;
                    fVar43 = auVar25._4_4_;
                    auVar46._4_4_ = fVar43 + fVar43;
                    auVar46._8_4_ = auVar25._8_4_ + auVar25._8_4_;
                    fVar50 = auVar25._12_4_;
                    auVar46._12_4_ = fVar50 + fVar50;
                    auVar34 = NEON_ext(auVar25,auVar25,8,1);
                    auVar25 = NEON_ext(auVar46,auVar46,8,1);
                    fVar41 = auVar34._0_4_ * auVar25._0_4_;
                    auVar81._0_4_ = (float)uStack_150 - (float)local_a0;
                    auVar81._4_4_ = fVar76 - local_a0._4_4_;
                    auVar81._8_4_ = (float)uStack_148 - (float)uStack_98;
                    auVar81._12_4_ = fVar77 - uStack_98._4_4_;
                    fVar76 = (float)local_b0 - (float)local_160;
                    fVar33 = local_b0._4_4_ - fVar33;
                    fVar77 = (float)uStack_a8 - (float)uStack_158;
                    fVar79 = uStack_a8._4_4_ - fVar79;
                    if ((bVar3 >> 3 & 1) != 0) {
                      fVar76 = ABS(fVar24) * fVar76;
                      fVar33 = ABS(fVar31) * fVar33;
                      fVar77 = ABS(fVar32) * fVar77;
                      fVar79 = fVar79 * 1.0;
                      auVar81._0_4_ = ABS(fVar24) * auVar81._0_4_;
                      auVar81._4_4_ = ABS(fVar31) * auVar81._4_4_;
                      auVar81._8_4_ = ABS(fVar32) * auVar81._8_4_;
                      auVar81._12_4_ = auVar81._12_4_ * 1.0;
                    }
                    auVar5._4_4_ = fVar33;
                    auVar5._0_4_ = fVar76;
                    auVar5._8_4_ = fVar77;
                    auVar5._12_4_ = fVar79;
                    auVar25 = NEON_smin(auVar5,auVar81,4);
                    uVar70 = NEON_fminp(auVar25._0_8_,auVar25._0_8_,4);
                    uVar17 = CONCAT44(ABS(auVar46._8_4_ * fVar43 + auVar46._0_4_ * fVar50) +
                                      ABS(auVar46._4_4_ * fVar42 - auVar46._8_4_ * fVar50) +
                                      ABS(fVar39 - (auVar46._0_4_ * fVar42 + fVar41)),
                                      ABS(auVar46._8_4_ * fVar42 - auVar46._4_4_ * fVar50) +
                                      ABS(fVar39 - (auVar46._4_4_ * fVar43 + fVar41)) +
                                      ABS(auVar46._4_4_ * fVar42 + auVar46._8_4_ * fVar50));
                    fVar39 = ABS(fVar39 - (auVar46._0_4_ * fVar42 + auVar46._4_4_ * fVar43)) +
                             ABS(auVar46._8_4_ * fVar42 + auVar46._4_4_ * fVar50) +
                             ABS(auVar46._8_4_ * fVar43 - auVar46._0_4_ * fVar50);
                    uVar17 = NEON_fmaxp(uVar17,uVar17,4);
                    uVar17 = NEON_fmax(CONCAT44(fVar39,fVar39),uVar17,4);
                    uVar44 = NEON_frecpe(uVar17,4);
                    uVar51 = NEON_frecps(uVar17,uVar44,4);
                    fVar39 = (float)uVar44 * (float)uVar51;
                    fVar24 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar51 >> 0x20);
                    uVar44 = NEON_frecps(uVar17,CONCAT44(fVar24,fVar39),4);
                    auVar25 = NEON_ext(auVar25,auVar25,8,1);
                    uVar17 = NEON_fmin(CONCAT44(auVar25._0_4_,auVar25._0_4_),uVar70,4);
                    fVar39 = (float)uVar17 * fVar39 * (float)uVar44;
                    fVar24 = (float)((ulong)uVar17 >> 0x20) *
                             fVar24 * (float)((ulong)uVar44 >> 0x20);
                    auVar29._0_4_ = *(float *)(lVar19 + 0x30) + fVar39;
                    auVar29._4_4_ = *(float *)(lVar19 + 0x34) + fVar24;
                    auVar29._8_4_ = *(float *)(lVar19 + 0x38) + fVar39;
                    auVar29._12_4_ = *(float *)(lVar19 + 0x3c) + fVar24;
                    auVar38._0_4_ = *(float *)(lVar19 + 0x20) - fVar39;
                    auVar38._4_4_ = *(float *)(lVar19 + 0x24) - fVar24;
                    auVar38._8_4_ = *(float *)(lVar19 + 0x28) - fVar39;
                    auVar38._12_4_ = *(float *)(lVar19 + 0x2c) - fVar24;
                  }
                  auVar25 = NEON_fmin(auVar29,*(undefined1 (*) [16])(param_3 + 8),4);
                  auVar34 = NEON_fmax(auVar38,*(undefined1 (*) [16])(param_3 + 6),4);
                  param_3[7] = auVar34._8_8_;
                  param_3[6] = auVar34._0_8_;
                  param_3[9] = auVar25._8_8_;
                  param_3[8] = auVar25._0_8_;
                }
                else {
                  iVar10 = (int)plVar22[1];
                  iVar20 = iVar10 + 1;
                  lVar19 = *plVar22;
                  if ((int)(*(uint *)((long)plVar22 + 0xc) & 0x3fffffff) <= iVar10) {
                    lVar19 = FUN_02f7f7b8(puVar8,iVar20);
                    iVar10 = (int)plVar22[1];
                    *plVar22 = lVar19;
                  }
                  *(undefined4 *)(lVar19 + (long)iVar10 * 4) = uVar78;
                  *(int *)(plVar22 + 1) = iVar20;
                }
              }
            } while( true );
          }
          goto LAB_02f7fb08;
        }
        iVar20 = (int)param_2[1];
        uVar12 = *(uint *)((long)param_2 + 0xc);
        uVar40 = iVar20 + 1;
        if (iVar20 < (int)(uVar12 & 0x3fffffff)) {
          lVar19 = *param_2;
        }
        else {
          lVar19 = *param_2;
          if (0x3ffffffe < iVar20) {
            FUN_032bd0a8(uVar40);
            uVar12 = *(uint *)((long)param_2 + 0xc);
          }
          uVar12 = (uVar12 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar12) {
            uVar12 = 0x3fffffff;
          }
          uVar6 = uVar40;
          if ((int)uVar40 <= (int)uVar12) {
            uVar6 = uVar12;
          }
          lVar19 = FUN_032bd1d4(puVar8,uVar6,2,lVar19,iVar20,(uint *)((long)param_2 + 0xc));
          iVar20 = (int)param_2[1];
          *param_2 = lVar19;
        }
        *(uint *)(param_2 + 1) = uVar40;
        *(ushort *)(lVar19 + (long)iVar20 * 2) = uVar4;
        uVar4 = *(ushort *)(pauVar13[1] + 0xc);
      } while( true );
    }
  }
  return;
}


