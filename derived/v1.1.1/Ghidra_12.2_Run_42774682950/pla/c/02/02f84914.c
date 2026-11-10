/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f84914; name: FUN_02f84914
 */


void FUN_02f84914(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [16];
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  long *plVar20;
  undefined4 uVar21;
  long lVar22;
  undefined1 (*pauVar23) [16];
  undefined1 *puVar24;
  long lVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  int iVar36;
  float fVar38;
  float fVar39;
  int iVar40;
  undefined1 auVar32 [12];
  int iVar37;
  int iVar41;
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar35 [16];
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar66;
  float fVar67;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar68;
  undefined1 auVar65 [16];
  float fVar69;
  undefined1 auVar70 [16];
  float fVar71;
  undefined8 uVar72;
  float fVar73;
  undefined1 auVar74 [16];
  float fVar75;
  float fVar76;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
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
  undefined4 uStack_84;
  
  puVar10 = PTR_PTR_0434a080;
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar9 = 0;
    if (*param_1 != 0) {
      lVar9 = *param_1 + (long)param_1;
    }
    pauVar13 = (undefined1 (*) [16])(lVar9 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    iVar26 = -(uint)((float)param_3[2] <= *(float *)pauVar13[1]);
    iVar36 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= *(float *)(pauVar13[1] + 4));
    iVar40 = -(uint)((float)param_3[3] <= *(float *)(pauVar13[1] + 8));
    iVar28 = -(uint)((float)*(undefined8 *)*pauVar13 <= (float)param_3[4]);
    iVar37 = -(uint)((float)((ulong)*(undefined8 *)*pauVar13 >> 0x20) <=
                    (float)((ulong)param_3[4] >> 0x20));
    iVar41 = -(uint)((float)*(undefined8 *)(*pauVar13 + 8) <= (float)param_3[5]);
    uVar27 = CONCAT13((byte)((uint)iVar28 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                      CONCAT12((byte)((uint)iVar28 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                               CONCAT11((byte)((uint)iVar28 >> 8) & (byte)((uint)iVar26 >> 8),
                                        (byte)iVar28 & (byte)iVar26)));
    auVar32._0_8_ =
         CONCAT17((byte)((uint)iVar37 >> 0x18) & (byte)((uint)iVar36 >> 0x18),
                  CONCAT16((byte)((uint)iVar37 >> 0x10) & (byte)((uint)iVar36 >> 0x10),
                           CONCAT15((byte)((uint)iVar37 >> 8) & (byte)((uint)iVar36 >> 8),
                                    CONCAT14((byte)iVar37 & (byte)iVar36,uVar27))));
    auVar32[8] = (byte)iVar41 & (byte)iVar40;
    auVar32[9] = (byte)((uint)iVar41 >> 8) & (byte)((uint)iVar40 >> 8);
    auVar32[10] = (byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar40 >> 0x10);
    auVar32[0xb] = (byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar40 >> 0x18);
    if ((uVar27 & (uint)((ulong)auVar32._0_8_ >> 0x20) & auVar32._8_4_) != 0) {
      lVar9 = param_2[1];
      NEON_fmov(0x3f800000,4);
      uVar72 = NEON_fmov(0x3f800000,4);
      puVar15 = (ulong *)((ulong)&local_110 | 4);
      auVar35._8_4_ = 0xdf7ffff0;
      auVar35._0_8_ = 0xdf7ffff0df7ffff0;
      auVar35._12_4_ = 0xdf7ffff0;
LAB_02f84a14:
      uVar3 = *(ushort *)(pauVar13[1] + 0xc);
      do {
        uVar16 = (ulong)uVar3;
        if (uVar16 == 0) goto LAB_02f84ac0;
LAB_02f84a1c:
        fVar62 = (float)param_3[2];
        fVar30 = (float)((ulong)param_3[2] >> 0x20);
        auVar65 = *(undefined1 (*) [16])(param_3 + 4);
        lVar22 = 0;
        if (*param_1 != 0) {
          lVar22 = *param_1 + (long)param_1;
        }
        pauVar1 = (undefined1 (*) [16])(lVar22 + uVar16 * 0x20);
        uVar3 = *(ushort *)(pauVar13[1] + 0xe);
        pauVar23 = (undefined1 (*) [16])(lVar22 + (ulong)uVar3 * 0x20);
        iVar26 = -(uint)(*(float *)*pauVar1 <= auVar65._0_4_);
        iVar36 = -(uint)(*(float *)(*pauVar1 + 4) <= auVar65._4_4_);
        iVar40 = -(uint)(*(float *)(*pauVar1 + 8) <= auVar65._8_4_);
        iVar28 = -(uint)(fVar62 <= *(float *)pauVar1[1]);
        iVar37 = -(uint)(fVar30 <= *(float *)(pauVar1[1] + 4));
        iVar41 = -(uint)((float)param_3[3] <= *(float *)(pauVar1[1] + 8));
        uVar27 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                          CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar28 >> 0x10),
                                   CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar28 >> 8),
                                            (byte)iVar26 & (byte)iVar28)));
        auVar33._0_8_ =
             CONCAT17((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                      CONCAT16((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                               CONCAT15((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar37 >> 8),
                                        CONCAT14((byte)iVar36 & (byte)iVar37,uVar27))));
        auVar33[8] = (byte)iVar40 & (byte)iVar41;
        auVar33[9] = (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar41 >> 8);
        auVar33[10] = (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
        auVar33[0xb] = (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar41 >> 0x18);
        auVar70 = *pauVar23;
        iVar28 = -(uint)(fVar62 <= (float)*(undefined8 *)pauVar23[1]);
        iVar37 = -(uint)(fVar30 <= (float)((ulong)*(undefined8 *)pauVar23[1] >> 0x20));
        iVar41 = -(uint)((float)param_3[3] <= (float)*(undefined8 *)(pauVar23[1] + 8));
        iVar26 = -(uint)(auVar70._0_4_ <= auVar65._0_4_);
        iVar36 = -(uint)(auVar70._4_4_ <= auVar65._4_4_);
        iVar40 = -(uint)(auVar70._8_4_ <= auVar65._8_4_);
        uVar29 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar28 >> 0x18),
                          CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar28 >> 0x10),
                                   CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar28 >> 8),
                                            (byte)iVar26 & (byte)iVar28)));
        auVar34._0_8_ =
             CONCAT17((byte)((uint)iVar36 >> 0x18) & (byte)((uint)iVar37 >> 0x18),
                      CONCAT16((byte)((uint)iVar36 >> 0x10) & (byte)((uint)iVar37 >> 0x10),
                               CONCAT15((byte)((uint)iVar36 >> 8) & (byte)((uint)iVar37 >> 8),
                                        CONCAT14((byte)iVar36 & (byte)iVar37,uVar29))));
        auVar34[8] = (byte)iVar40 & (byte)iVar41;
        auVar34[9] = (byte)((uint)iVar40 >> 8) & (byte)((uint)iVar41 >> 8);
        auVar34[10] = (byte)((uint)iVar40 >> 0x10) & (byte)((uint)iVar41 >> 0x10);
        auVar34[0xb] = (byte)((uint)iVar40 >> 0x18) & (byte)((uint)iVar41 >> 0x18);
        bVar2 = (uVar27 & (uint)((ulong)auVar33._0_8_ >> 0x20) & auVar33._8_4_) != 0 |
                ((uVar29 & (uint)((ulong)auVar34._0_8_ >> 0x20) & auVar34._8_4_) != 0) << 1;
        pauVar13 = pauVar1;
        if (bVar2 == 1) goto LAB_02f84a14;
        if (bVar2 != 3) {
          pauVar13 = pauVar23;
          if (bVar2 != 2) {
LAB_02f84ae8:
            do {
              if ((int)param_2[1] <= (int)lVar9) {
                return;
              }
              iVar28 = (int)param_2[1] + -1;
              *(int *)(param_2 + 1) = iVar28;
              lVar22 = 0;
              if (*param_1 != 0) {
                lVar22 = *param_1 + (long)param_1;
              }
              pauVar13 = (undefined1 (*) [16])
                         (lVar22 + (ulong)*(ushort *)(*param_2 + (long)iVar28 * 2) * 0x20);
              uVar16 = (ulong)*(ushort *)(pauVar13[1] + 0xc);
              if (uVar16 != 0) goto LAB_02f84a1c;
LAB_02f84ac0:
              lVar22 = *param_3;
              lVar25 = *(long *)(lVar22 + 8);
              pauVar1 = (undefined1 (*) [16])
                        (lVar25 + 0x48 +
                        (ulong)*(ushort *)(pauVar13[1] + 0xe) * 0x40 + *(long *)(lVar25 + 0x48));
              if (((byte)pauVar1[1][0xe] >> 6 & 1) != 0) {
                pauVar23 = pauVar1 + 3;
                if (*(long *)*pauVar23 == 0) {
                  puVar24 = (undefined1 *)0x0;
                }
                else {
                  puVar24 = *pauVar23 + *(long *)*pauVar23;
                }
                local_110 = **(undefined8 **)(lVar22 + 0x58);
                uStack_108 = (*(undefined8 **)(lVar22 + 0x58))[1];
                plVar20 = *(long **)(lVar22 + 0x70);
                puVar17 = *(undefined8 **)(lVar22 + 0x60);
                uVar16 = puVar17[3];
                iVar28 = (int)(uVar16 >> 0x20) + (uint)*(byte *)(lVar25 + 0x1c);
                uVar16 = (ulong)((*(ushort *)(pauVar13[1] + 0xe) + 1 << (ulong)(-iVar28 & 0x1f)) - 1
                                ) | uVar16 & (uint)(&DAT_03aa74b0)[(long)uVar16 >> 0x20];
                plVar11 = (long *)**(long **)(lVar22 + 0x48);
                uVar21 = (undefined4)uVar16;
                if (plVar11 != (long *)0x0) {
                  if (*(long *)*pauVar23 == 0) {
                    puVar12 = (undefined1 *)0x0;
                  }
                  else {
                    puVar12 = *pauVar23 + *(long *)*pauVar23;
                  }
                  (**(code **)(*plVar11 + 0x40))
                            (plVar11,*(undefined2 *)(pauVar1[2] + 0xc),6,*puVar17,puVar17[1],lVar25,
                             uVar16,puVar12,&local_110);
                  lVar14 = *(long *)(lVar22 + 0x48);
                  if (*(long *)(lVar14 + 8) != 0) {
                    local_100 = CONCAT62(local_100._2_6_,*(undefined2 *)(lVar14 + 0x10));
                    uVar18 = *(undefined8 *)(lVar14 + 0x14);
                    *(undefined4 *)((undefined8 *)((ulong)&local_100 | 4) + 1) =
                         *(undefined4 *)(lVar14 + 0x1c);
                    *(undefined8 *)((ulong)&local_100 | 4) = uVar18;
                    puVar17 = *(undefined8 **)(lVar22 + 0x50);
                    local_f0 = (undefined1 *)*puVar17;
                    local_e8 = puVar17[1];
                    local_e0 = puVar17[2];
                    local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(puVar17 + 3));
                    local_d0 = 0;
                    local_160 = CONCAT62(local_160._2_6_,(undefined2)local_110);
                    uVar16 = *puVar15;
                    *(int *)((ulong *)((ulong)&local_160 | 4) + 1) = (int)puVar15[1];
                    *(ulong *)((ulong)&local_160 | 4) = uVar16;
                    local_150 = **(undefined8 **)(lVar22 + 0x60);
                    local_148 = (*(undefined8 **)(lVar22 + 0x60))[1];
                    local_138 = CONCAT44(local_138._4_4_,uVar21);
                    local_130 = *(undefined1 **)*pauVar23;
                    if (local_130 != (undefined1 *)0x0) {
                      local_130 = *pauVar23 + (long)local_130;
                    }
                    lStack_140 = lVar25;
                    uVar16 = (**(code **)(**(long **)(lVar14 + 8) + 0x40))
                                       (*(long **)(lVar14 + 8),6,1,&local_100,&local_160);
                    if ((uVar16 & 1) == 0) goto LAB_02f84ae8;
                  }
                }
                if (puVar24[0x19] == '\x03') {
                  puVar17 = *(undefined8 **)(lVar22 + 0x48);
                  local_158 = puVar17[1];
                  local_160 = *puVar17;
                  local_138 = puVar17[5];
                  local_148 = puVar17[3];
                  local_150 = puVar17[2];
                  lStack_140 = puVar17[4];
                  bVar2 = pauVar1[1][0xe];
                  fVar62 = (float)uVar72;
                  if ((bVar2 >> 3 & 1) == 0) {
                    fVar30 = *(float *)pauVar1[1];
                    fVar38 = *(float *)(pauVar1[1] + 4);
                    fVar43 = *(float *)(pauVar1[1] + 8);
                    if ((bVar2 >> 2 & 1) == 0) {
                      fVar62 = (float)((ulong)*(undefined8 *)(lVar22 + 0x20) >> 0x20) - fVar38;
                      fVar31 = (float)((ulong)*(undefined8 *)(lVar22 + 0x28) >> 0x20) - 0.0;
                      uStack_128 = CONCAT17((char)((uint)fVar31 >> 0x18),
                                            CONCAT16((char)((uint)fVar31 >> 0x10),
                                                     CONCAT15((char)((uint)fVar31 >> 8),
                                                              CONCAT14(SUB41(fVar31,0),
                                                                       (float)*(undefined8 *)
                                                                               (lVar22 + 0x28) -
                                                                       fVar43))));
                      local_130 = (undefined1 *)
                                  CONCAT17((char)((uint)fVar62 >> 0x18),
                                           CONCAT16((char)((uint)fVar62 >> 0x10),
                                                    CONCAT15((char)((uint)fVar62 >> 8),
                                                             CONCAT14(SUB41(fVar62,0),
                                                                      (float)*(undefined8 *)
                                                                              (lVar22 + 0x20) -
                                                                      fVar30))));
                      uStack_118 = CONCAT44((float)((ulong)*(undefined8 *)(lVar22 + 0x38) >> 0x20) -
                                            0.0,(float)*(undefined8 *)(lVar22 + 0x38) - fVar43);
                      local_120 = CONCAT44((float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20) -
                                           fVar38,(float)*(undefined8 *)(lVar22 + 0x30) - fVar30);
                    }
                    else {
                      uVar18 = *(undefined8 *)(*pauVar1 + 8);
                      uVar45 = (undefined1)((ulong)uVar18 >> 8);
                      uVar46 = (undefined1)((ulong)uVar18 >> 0x10);
                      uVar47 = (undefined1)((ulong)uVar18 >> 0x18);
                      uVar48 = (undefined1)((ulong)uVar18 >> 0x20);
                      uVar49 = (undefined1)((ulong)uVar18 >> 0x28);
                      uVar50 = (undefined1)((ulong)uVar18 >> 0x30);
                      uVar51 = (undefined1)((ulong)uVar18 >> 0x38);
                      fVar31 = (float)*(undefined8 *)*pauVar1;
                      fVar52 = fVar31 + fVar31;
                      fVar39 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
                      fVar54 = fVar39 + fVar39;
                      fVar55 = (float)uVar18 + (float)uVar18;
                      fVar44 = (float)((ulong)uVar18 >> 0x20);
                      auVar4[9] = uVar45;
                      auVar4._0_9_ = *(unkbyte9 *)*pauVar1;
                      auVar4[10] = uVar46;
                      auVar4[0xb] = uVar47;
                      auVar4[0xc] = uVar48;
                      auVar4[0xd] = uVar49;
                      auVar4[0xe] = uVar50;
                      auVar4[0xf] = uVar51;
                      auVar5[9] = uVar45;
                      auVar5._0_9_ = *(unkbyte9 *)*pauVar1;
                      auVar5[10] = uVar46;
                      auVar5[0xb] = uVar47;
                      auVar5[0xc] = uVar48;
                      auVar5[0xd] = uVar49;
                      auVar5[0xe] = uVar50;
                      auVar5[0xf] = uVar51;
                      auVar65 = NEON_ext(auVar4,auVar5,8,1);
                      auVar6._4_4_ = fVar54;
                      auVar6._0_4_ = fVar52;
                      auVar6._8_4_ = fVar55;
                      auVar6._12_4_ = fVar44 + fVar44;
                      auVar7._4_4_ = fVar54;
                      auVar7._0_4_ = fVar52;
                      auVar7._8_4_ = fVar55;
                      auVar7._12_4_ = fVar44 + fVar44;
                      auVar70 = NEON_ext(auVar6,auVar7,8,1);
                      fVar53 = auVar65._0_4_ * auVar70._0_4_;
                      fVar58 = (float)*(undefined8 *)(lVar22 + 0x20);
                      fVar59 = (float)((ulong)*(undefined8 *)(lVar22 + 0x20) >> 0x20);
                      fVar57 = (float)*(undefined8 *)(lVar22 + 0x28);
                      fVar76 = fVar54 * fVar31 + fVar55 * fVar44;
                      fVar73 = fVar54 * fVar31 - fVar55 * fVar44;
                      fVar75 = fVar55 * fVar31 - fVar54 * fVar44;
                      fVar42 = fVar55 * fVar31 + fVar54 * fVar44;
                      fVar56 = fVar62 - (fVar54 * fVar39 + fVar53);
                      fVar53 = fVar62 - (fVar52 * fVar31 + fVar53);
                      fVar69 = fVar55 * fVar39 - fVar52 * fVar44;
                      fVar62 = fVar62 - (fVar52 * fVar31 + fVar54 * fVar39);
                      fVar30 = (fVar58 + *(float *)(lVar22 + 0x30)) * 0.5 - fVar30;
                      fVar38 = (fVar59 + *(float *)(lVar22 + 0x34)) * 0.5 - fVar38;
                      fVar43 = (fVar57 + *(float *)(lVar22 + 0x38)) * 0.5 - fVar43;
                      fVar54 = fVar55 * fVar39 + fVar52 * fVar44;
                      fVar55 = (*(float *)(lVar22 + 0x30) - fVar58) * 0.5;
                      fVar58 = (*(float *)(lVar22 + 0x34) - fVar59) * 0.5;
                      fVar59 = (*(float *)(lVar22 + 0x38) - fVar57) * 0.5;
                      fVar57 = (float)(CONCAT17((char)((uint)fVar69 >> 0x18),
                                                CONCAT16((char)((uint)fVar69 >> 0x10),
                                                         CONCAT15((char)((uint)fVar69 >> 8),
                                                                  CONCAT14(SUB41(fVar69,0),fVar42)))
                                               ) >> 0x20);
                      fVar31 = fVar75 * fVar43 + fVar56 * fVar30 + fVar76 * fVar38;
                      fVar39 = fVar54 * fVar43 + fVar73 * fVar30 + fVar53 * fVar38;
                      fVar44 = fVar62 * fVar43 + fVar42 * fVar30 + fVar69 * fVar38;
                      fVar52 = fVar43 * 0.0 + fVar57 * fVar30 + fVar38 * 0.0;
                      fVar30 = ABS(fVar75 * fVar59) + ABS(fVar56 * fVar55) + ABS(fVar76 * fVar58);
                      fVar38 = ABS(fVar54 * fVar59) + ABS(fVar73 * fVar55) + ABS(fVar53 * fVar58);
                      fVar62 = ABS(fVar62 * fVar59) + ABS(fVar42 * fVar55) + ABS(fVar69 * fVar58);
                      fVar43 = ABS(fVar59 * 0.0) + ABS(fVar57 * fVar55) + ABS(fVar58 * 0.0);
                      uStack_128 = CONCAT44(fVar52 - fVar43,fVar44 - fVar62);
                      local_130 = (undefined1 *)CONCAT44(fVar39 - fVar38,fVar31 - fVar30);
                      uStack_118 = CONCAT44(fVar52 + fVar43,fVar44 + fVar62);
                      local_120 = CONCAT44(fVar39 + fVar38,fVar31 + fVar30);
                    }
                  }
                  else {
                    fVar31 = *(float *)(lVar22 + 0x20);
                    fVar39 = *(float *)(lVar22 + 0x24);
                    local_130 = *(undefined1 **)(lVar22 + 0x20);
                    fVar44 = *(float *)(lVar22 + 0x28);
                    uStack_128 = *(undefined8 *)(lVar22 + 0x28);
                    fVar30 = (float)*(undefined8 *)(lVar22 + 0x30);
                    fVar38 = (float)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
                    fVar43 = (float)*(undefined8 *)(lVar22 + 0x38);
                    if (fVar43 < fVar44 || (fVar30 < fVar31 || fVar38 < fVar39)) {
                      local_120 = *(undefined8 *)(lVar22 + 0x30);
                      uStack_118 = *(undefined8 *)(lVar22 + 0x38);
                    }
                    else {
                      pauVar13 = pauVar1 + 2;
                      auVar65 = *pauVar1;
                      fVar59 = auVar65._0_4_;
                      auVar63._0_4_ = fVar59 + fVar59;
                      fVar57 = auVar65._4_4_;
                      auVar63._4_4_ = fVar57 + fVar57;
                      auVar63._8_4_ = auVar65._8_4_ + auVar65._8_4_;
                      fVar76 = auVar65._12_4_;
                      auVar63._12_4_ = fVar76 + fVar76;
                      auVar70 = NEON_ext(auVar65,auVar65,8,1);
                      auVar64 = NEON_ext(auVar63,auVar63,8,1);
                      auVar65._12_4_ = 0x3f800000;
                      auVar65._0_12_ = *(undefined1 (*) [12])*pauVar13;
                      auVar65 = NEON_frecpe(auVar65,4);
                      fVar42 = auVar70._0_4_ * auVar64._0_4_;
                      auVar70._12_4_ = 0x3f800000;
                      auVar70._0_12_ = *(undefined1 (*) [12])*pauVar13;
                      auVar70 = NEON_frecps(auVar70,auVar65,4);
                      fVar52 = (fVar30 - fVar31) * 0.5;
                      fVar53 = (fVar38 - fVar39) * 0.5;
                      fVar54 = (fVar43 - fVar44) * 0.5;
                      fVar55 = (fVar31 + fVar30) * 0.5;
                      fVar56 = (fVar39 + fVar38) * 0.5;
                      fVar58 = (fVar44 + fVar43) * 0.5;
                      fVar43 = auVar63._8_4_ * fVar57 - auVar63._0_4_ * fVar76;
                      auVar74._0_4_ = auVar65._0_4_ * auVar70._0_4_;
                      auVar74._4_4_ = auVar65._4_4_ * auVar70._4_4_;
                      auVar74._8_4_ = auVar65._8_4_ * auVar70._8_4_;
                      auVar74._12_4_ = auVar65._12_4_ * auVar70._12_4_;
                      auVar64._12_4_ = 0x3f800000;
                      auVar64._0_12_ = *(undefined1 (*) [12])*pauVar13;
                      auVar65 = NEON_frecps(auVar64,auVar74,4);
                      fVar71 = *(float *)(pauVar1[1] + 8);
                      fVar61 = auVar74._0_4_ * auVar65._0_4_;
                      fVar66 = auVar74._4_4_ * auVar65._4_4_;
                      fVar67 = auVar74._8_4_ * auVar65._8_4_;
                      fVar68 = auVar74._12_4_ * auVar65._12_4_;
                      fVar69 = fVar61 * (fVar62 - (auVar63._4_4_ * fVar57 + fVar42));
                      fVar73 = fVar66 * (auVar63._4_4_ * fVar59 - auVar63._8_4_ * fVar76);
                      fVar75 = fVar67 * (auVar63._8_4_ * fVar59 + auVar63._4_4_ * fVar76);
                      fVar60 = fVar68 * fVar43;
                      fVar30 = fVar61 * (auVar63._4_4_ * fVar59 + auVar63._8_4_ * fVar76);
                      fVar38 = fVar66 * (fVar62 - (auVar63._0_4_ * fVar59 + fVar42));
                      fVar43 = fVar67 * fVar43;
                      fVar31 = fVar68 * 0.0;
                      fVar61 = fVar61 * (auVar63._8_4_ * fVar59 - auVar63._4_4_ * fVar76);
                      fVar66 = fVar66 * (auVar63._8_4_ * fVar57 + auVar63._0_4_ * fVar76);
                      fVar67 = fVar67 * (fVar62 - (auVar63._0_4_ * fVar59 + auVar63._4_4_ * fVar57))
                      ;
                      fVar68 = fVar68 * 0.0;
                      fVar59 = (float)*(undefined8 *)pauVar1[1];
                      fVar57 = (float)((ulong)*(undefined8 *)pauVar1[1] >> 0x20);
                      fVar39 = ABS(fVar61 * fVar54) + ABS(fVar69 * fVar52) + ABS(fVar30 * fVar53);
                      fVar44 = ABS(fVar66 * fVar54) + ABS(fVar73 * fVar52) + ABS(fVar38 * fVar53);
                      fVar42 = ABS(fVar67 * fVar54) + ABS(fVar75 * fVar52) + ABS(fVar43 * fVar53);
                      fVar52 = ABS(fVar68 * fVar54) + ABS(fVar60 * fVar52) + ABS(fVar31 * fVar53);
                      fVar62 = fVar61 * fVar58 + fVar69 * fVar55 + fVar30 * fVar56 +
                               -(fVar61 * fVar71 + fVar69 * fVar59 + fVar30 * fVar57);
                      fVar30 = fVar66 * fVar58 + fVar73 * fVar55 + fVar38 * fVar56 +
                               -(fVar66 * fVar71 + fVar73 * fVar59 + fVar38 * fVar57);
                      fVar38 = fVar67 * fVar58 + fVar75 * fVar55 + fVar43 * fVar56 +
                               -(fVar67 * fVar71 + fVar75 * fVar59 + fVar43 * fVar57);
                      fVar43 = fVar68 * fVar58 + fVar60 * fVar55 + fVar31 * fVar56 +
                               fVar68 * fVar71 + fVar60 * fVar59 + fVar31 * fVar57;
                      uStack_128 = CONCAT44(fVar43 - fVar52,fVar38 - fVar42);
                      local_130 = (undefined1 *)CONCAT44(fVar30 - fVar44,fVar62 - fVar39);
                      uStack_118 = CONCAT44(fVar52 + fVar43,fVar42 + fVar38);
                      local_120 = CONCAT44(fVar44 + fVar30,fVar39 + fVar62);
                    }
                  }
                  puVar17 = *(undefined8 **)(lVar22 + 0x60);
                  uVar16 = (ulong)local_d0 >> 8;
                  local_100 = *puVar17;
                  local_f8 = puVar17[1];
                  local_e0 = puVar17[4];
                  local_d8 = 0;
                  local_c0 = puVar17[8];
                  uStack_b8 = puVar17[9];
                  local_b0 = puVar17[10];
                  uStack_a8 = puVar17[0xb];
                  uStack_168 = 0x5f7ffff05f7ffff0;
                  local_c8 = *(undefined4 *)(puVar17 + 7);
                  local_d0 = CONCAT44(*(undefined4 *)((long)puVar17 + 0x34),
                                      (int)CONCAT71((int7)uVar16,*(undefined1 *)(puVar17 + 6)));
                  local_e8 = CONCAT44(iVar28,uVar21);
                  local_170 = 0x5f7ffff05f7ffff0;
                  local_180 = 0xdf7ffff0df7ffff0;
                  uStack_178 = auVar35._8_8_;
                  local_f0 = puVar24;
                  (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar24[0x18] * 0x200 + 0xe8))
                            (puVar24,*(undefined8 *)(lVar22 + 0x40),&local_160,
                             *(undefined8 *)(lVar22 + 0x50),&local_110,&local_100,plVar20,&local_180
                            );
                }
                else {
                  lVar14 = **(long **)(lVar22 + 0x50);
                  lVar25 = **(long **)(lVar22 + 0x60);
                  uVar19 = 0xffffff;
                  local_c8 = 0xffffffff;
                  local_f0 = (undefined1 *)0x0;
                  local_e8 = 0;
                  local_100 = 0;
                  local_f8 = 0;
                  local_c4 = 0xf;
                  local_9c = 0xf;
                  local_e0 = local_e0 & 0xffffffff00000000;
                  local_88 = 6;
                  uStack_84 = 0;
                  if (lVar14 == 0) {
                    local_d8 = 0xffffffffffffffff;
                  }
                  else {
                    local_d8 = *(undefined8 *)(lVar14 + 0xb0);
                    uVar19 = *(undefined4 *)(lVar14 + 0x50);
                  }
                  local_d0 = CONCAT44((int)((ulong)local_d0 >> 0x20),uVar19);
                  local_c0 = CONCAT62((int6)(local_c0 >> 0x10),
                                      *(undefined2 *)(*(long *)(lVar22 + 0x48) + 0x10)) & 0xffffffff
                  ;
                  uStack_b8 = *(ulong *)(*(long *)(lVar22 + 0x48) + 0x14) >> 0x20;
                  if (lVar25 == 0) {
                    uVar19 = 0xffffff;
                    local_b0 = 0xffffffffffffffff;
                  }
                  else {
                    local_b0 = *(undefined8 *)(lVar25 + 0xb0);
                    uVar19 = *(undefined4 *)(lVar25 + 0x50);
                  }
                  uStack_a8 = CONCAT44((int)((ulong)uStack_a8 >> 0x20),uVar19);
                  local_98 = (undefined2)local_110;
                  local_94 = (undefined4)*puVar15;
                  uStack_90 = *puVar15 >> 0x20;
                  local_a0 = uVar21;
                  (**(code **)(*plVar20 + 0x28))(plVar20,&local_100);
                }
              }
            } while( true );
          }
          goto LAB_02f84a14;
        }
        iVar28 = (int)param_2[1];
        uVar29 = *(uint *)((long)param_2 + 0xc);
        uVar27 = iVar28 + 1;
        if (iVar28 < (int)(uVar29 & 0x3fffffff)) {
          lVar22 = *param_2;
        }
        else {
          lVar22 = *param_2;
          if (0x3ffffffe < iVar28) {
            FUN_032bd0a8(uVar27);
            uVar29 = *(uint *)((long)param_2 + 0xc);
          }
          uVar29 = (uVar29 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar29) {
            uVar29 = 0x3fffffff;
          }
          uVar8 = uVar27;
          if ((int)uVar27 <= (int)uVar29) {
            uVar8 = uVar29;
          }
          lVar22 = FUN_032bd1d4(puVar10,uVar8,2,lVar22,iVar28,(uint *)((long)param_2 + 0xc));
          iVar28 = (int)param_2[1];
          *param_2 = lVar22;
        }
        *(uint *)(param_2 + 1) = uVar27;
        *(ushort *)(lVar22 + (long)iVar28 * 2) = uVar3;
        uVar3 = *(ushort *)(pauVar1[1] + 0xc);
      } while( true );
    }
  }
  return;
}


