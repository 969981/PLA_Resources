/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f80408; name: FUN_02f80408
 */


void FUN_02f80408(long *param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 *puVar2;
  byte bVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  long lVar10;
  undefined *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  undefined1 (*pauVar21) [16];
  undefined4 uVar22;
  long lVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  int iVar34;
  float fVar36;
  float fVar37;
  int iVar38;
  undefined1 auVar30 [12];
  int iVar35;
  int iVar39;
  undefined1 auVar31 [12];
  undefined1 auVar32 [12];
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar33 [16];
  float fVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar64;
  float fVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  float fVar69;
  undefined8 uVar70;
  float fVar71;
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
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
  
  puVar11 = PTR_PTR_0434a080;
  if ((ulong)*(ushort *)((long)param_1 + 0x1c) != 0) {
    lVar10 = 0;
    if (*param_1 != 0) {
      lVar10 = *param_1 + (long)param_1;
    }
    pauVar14 = (undefined1 (*) [16])(lVar10 + (ulong)*(ushort *)((long)param_1 + 0x1c) * 0x20);
    iVar24 = -(uint)((float)param_3[2] <= *(float *)pauVar14[1]);
    iVar34 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= *(float *)(pauVar14[1] + 4));
    iVar38 = -(uint)((float)param_3[3] <= *(float *)(pauVar14[1] + 8));
    iVar26 = -(uint)((float)*(undefined8 *)*pauVar14 <= (float)param_3[4]);
    iVar35 = -(uint)((float)((ulong)*(undefined8 *)*pauVar14 >> 0x20) <=
                    (float)((ulong)param_3[4] >> 0x20));
    iVar39 = -(uint)((float)*(undefined8 *)(*pauVar14 + 8) <= (float)param_3[5]);
    uVar25 = CONCAT13((byte)((uint)iVar26 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                      CONCAT12((byte)((uint)iVar26 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                               CONCAT11((byte)((uint)iVar26 >> 8) & (byte)((uint)iVar24 >> 8),
                                        (byte)iVar26 & (byte)iVar24)));
    auVar30._0_8_ =
         CONCAT17((byte)((uint)iVar35 >> 0x18) & (byte)((uint)iVar34 >> 0x18),
                  CONCAT16((byte)((uint)iVar35 >> 0x10) & (byte)((uint)iVar34 >> 0x10),
                           CONCAT15((byte)((uint)iVar35 >> 8) & (byte)((uint)iVar34 >> 8),
                                    CONCAT14((byte)iVar35 & (byte)iVar34,uVar25))));
    auVar30[8] = (byte)iVar39 & (byte)iVar38;
    auVar30[9] = (byte)((uint)iVar39 >> 8) & (byte)((uint)iVar38 >> 8);
    auVar30[10] = (byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar38 >> 0x10);
    auVar30[0xb] = (byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar38 >> 0x18);
    if ((uVar25 & (uint)((ulong)auVar30._0_8_ >> 0x20) & auVar30._8_4_) != 0) {
      lVar10 = param_2[1];
      NEON_fmov(0x3f800000,4);
      uVar70 = NEON_fmov(0x3f800000,4);
      auVar33._8_4_ = 0xdf7ffff0;
      auVar33._0_8_ = 0xdf7ffff0df7ffff0;
      auVar33._12_4_ = 0xdf7ffff0;
LAB_02f804f8:
      uVar4 = *(ushort *)(pauVar14[1] + 0xc);
      do {
        uVar16 = (ulong)uVar4;
        if (uVar16 == 0) goto LAB_02f805a4;
LAB_02f80500:
        fVar43 = (float)param_3[2];
        fVar28 = (float)((ulong)param_3[2] >> 0x20);
        auVar61 = *(undefined1 (*) [16])(param_3 + 4);
        lVar20 = 0;
        if (*param_1 != 0) {
          lVar20 = *param_1 + (long)param_1;
        }
        pauVar1 = (undefined1 (*) [16])(lVar20 + uVar16 * 0x20);
        uVar4 = *(ushort *)(pauVar14[1] + 0xe);
        pauVar21 = (undefined1 (*) [16])(lVar20 + (ulong)uVar4 * 0x20);
        iVar24 = -(uint)(*(float *)*pauVar1 <= auVar61._0_4_);
        iVar34 = -(uint)(*(float *)(*pauVar1 + 4) <= auVar61._4_4_);
        iVar38 = -(uint)(*(float *)(*pauVar1 + 8) <= auVar61._8_4_);
        iVar26 = -(uint)(fVar43 <= *(float *)pauVar1[1]);
        iVar35 = -(uint)(fVar28 <= *(float *)(pauVar1[1] + 4));
        iVar39 = -(uint)((float)param_3[3] <= *(float *)(pauVar1[1] + 8));
        uVar25 = CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                          CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                                   CONCAT11((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar26 >> 8),
                                            (byte)iVar24 & (byte)iVar26)));
        auVar31._0_8_ =
             CONCAT17((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                      CONCAT16((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                               CONCAT15((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar35 >> 8),
                                        CONCAT14((byte)iVar34 & (byte)iVar35,uVar25))));
        auVar31[8] = (byte)iVar38 & (byte)iVar39;
        auVar31[9] = (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar39 >> 8);
        auVar31[10] = (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar39 >> 0x10);
        auVar31[0xb] = (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar39 >> 0x18);
        auVar68 = *pauVar21;
        iVar26 = -(uint)(fVar43 <= (float)*(undefined8 *)pauVar21[1]);
        iVar35 = -(uint)(fVar28 <= (float)((ulong)*(undefined8 *)pauVar21[1] >> 0x20));
        iVar39 = -(uint)((float)param_3[3] <= (float)*(undefined8 *)(pauVar21[1] + 8));
        iVar24 = -(uint)(auVar68._0_4_ <= auVar61._0_4_);
        iVar34 = -(uint)(auVar68._4_4_ <= auVar61._4_4_);
        iVar38 = -(uint)(auVar68._8_4_ <= auVar61._8_4_);
        uVar27 = CONCAT13((byte)((uint)iVar24 >> 0x18) & (byte)((uint)iVar26 >> 0x18),
                          CONCAT12((byte)((uint)iVar24 >> 0x10) & (byte)((uint)iVar26 >> 0x10),
                                   CONCAT11((byte)((uint)iVar24 >> 8) & (byte)((uint)iVar26 >> 8),
                                            (byte)iVar24 & (byte)iVar26)));
        auVar32._0_8_ =
             CONCAT17((byte)((uint)iVar34 >> 0x18) & (byte)((uint)iVar35 >> 0x18),
                      CONCAT16((byte)((uint)iVar34 >> 0x10) & (byte)((uint)iVar35 >> 0x10),
                               CONCAT15((byte)((uint)iVar34 >> 8) & (byte)((uint)iVar35 >> 8),
                                        CONCAT14((byte)iVar34 & (byte)iVar35,uVar27))));
        auVar32[8] = (byte)iVar38 & (byte)iVar39;
        auVar32[9] = (byte)((uint)iVar38 >> 8) & (byte)((uint)iVar39 >> 8);
        auVar32[10] = (byte)((uint)iVar38 >> 0x10) & (byte)((uint)iVar39 >> 0x10);
        auVar32[0xb] = (byte)((uint)iVar38 >> 0x18) & (byte)((uint)iVar39 >> 0x18);
        bVar3 = (uVar25 & (uint)((ulong)auVar31._0_8_ >> 0x20) & auVar31._8_4_) != 0 |
                ((uVar27 & (uint)((ulong)auVar32._0_8_ >> 0x20) & auVar32._8_4_) != 0) << 1;
        pauVar14 = pauVar1;
        if (bVar3 == 1) goto LAB_02f804f8;
        if (bVar3 != 3) {
          pauVar14 = pauVar21;
          if (bVar3 != 2) {
LAB_02f805cc:
            do {
              if ((int)param_2[1] <= (int)lVar10) {
                return;
              }
              iVar26 = (int)param_2[1] + -1;
              *(int *)(param_2 + 1) = iVar26;
              lVar20 = 0;
              if (*param_1 != 0) {
                lVar20 = *param_1 + (long)param_1;
              }
              pauVar14 = (undefined1 (*) [16])
                         (lVar20 + (ulong)*(ushort *)(*param_2 + (long)iVar26 * 2) * 0x20);
              uVar16 = (ulong)*(ushort *)(pauVar14[1] + 0xc);
              if (uVar16 != 0) goto LAB_02f80500;
LAB_02f805a4:
              lVar20 = *param_3;
              lVar23 = *(long *)(lVar20 + 8);
              pauVar1 = (undefined1 (*) [16])
                        (lVar23 + 0x48 +
                        (ulong)*(ushort *)(pauVar14[1] + 0xe) * 0x40 + *(long *)(lVar23 + 0x48));
              if (((byte)pauVar1[1][0xe] >> 6 & 1) != 0) {
                pauVar21 = pauVar1 + 3;
                plVar19 = *(long **)(lVar20 + 0x70);
                local_88 = **(undefined8 **)(lVar20 + 0x58);
                uStack_80 = (*(undefined8 **)(lVar20 + 0x58))[1];
                puVar2 = (undefined1 *)0x0;
                if (*(long *)*pauVar21 != 0) {
                  puVar2 = *pauVar21 + *(long *)*pauVar21;
                }
                puVar17 = *(undefined8 **)(lVar20 + 0x60);
                uVar16 = puVar17[3];
                iVar26 = (int)(uVar16 >> 0x20) + (uint)*(byte *)(lVar23 + 0x1c);
                uVar16 = (ulong)((*(ushort *)(pauVar14[1] + 0xe) + 1 << (ulong)(-iVar26 & 0x1f)) - 1
                                ) | uVar16 & (uint)(&DAT_03aa74b0)[(long)uVar16 >> 0x20];
                plVar12 = (long *)**(long **)(lVar20 + 0x48);
                uVar22 = (undefined4)uVar16;
                if (plVar12 != (long *)0x0) {
                  if (*(long *)*pauVar21 == 0) {
                    puVar13 = (undefined1 *)0x0;
                  }
                  else {
                    puVar13 = *pauVar21 + *(long *)*pauVar21;
                  }
                  (**(code **)(*plVar12 + 0x40))
                            (plVar12,*(undefined2 *)(pauVar1[2] + 0xc),6,*puVar17,puVar17[1],lVar23,
                             uVar16,puVar13,&local_88);
                  lVar15 = *(long *)(lVar20 + 0x48);
                  if (*(long *)(lVar15 + 8) != 0) {
                    local_140 = CONCAT62(local_140._2_6_,*(undefined2 *)(lVar15 + 0x10));
                    uVar18 = *(undefined8 *)(lVar15 + 0x14);
                    *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                         *(undefined4 *)(lVar15 + 0x1c);
                    *(undefined8 *)((ulong)&local_140 | 4) = uVar18;
                    plVar12 = *(long **)(lVar20 + 0x50);
                    local_130 = (undefined1 *)*plVar12;
                    local_128 = plVar12[1];
                    local_120 = plVar12[2];
                    local_118 = CONCAT44(local_118._4_4_,(int)plVar12[3]);
                    local_e0 = CONCAT62(local_e0._2_6_,(undefined2)local_88);
                    uVar18 = *(undefined8 *)((ulong)&local_88 | 4);
                    local_110 = 0;
                    *(undefined4 *)((undefined8 *)((ulong)&local_e0 | 4) + 1) =
                         *(undefined4 *)((undefined8 *)((ulong)&local_88 | 4) + 1);
                    *(undefined8 *)((ulong)&local_e0 | 4) = uVar18;
                    local_d0 = **(undefined8 **)(lVar20 + 0x60);
                    local_c8 = (*(undefined8 **)(lVar20 + 0x60))[1];
                    local_b8 = CONCAT44(local_b8._4_4_,uVar22);
                    local_b0 = *(undefined1 **)*pauVar21;
                    if (local_b0 != (undefined1 *)0x0) {
                      local_b0 = *pauVar21 + (long)local_b0;
                    }
                    lStack_c0 = lVar23;
                    uVar16 = (**(code **)(**(long **)(lVar15 + 8) + 0x40))
                                       (*(long **)(lVar15 + 8),6,1,&local_140,&local_e0);
                    if ((uVar16 & 1) == 0) goto LAB_02f805cc;
                  }
                }
                if (puVar2[0x19] == '\x03') {
                  puVar17 = *(undefined8 **)(lVar20 + 0x48);
                  local_d8 = puVar17[1];
                  local_e0 = *puVar17;
                  local_b8 = puVar17[5];
                  local_c8 = puVar17[3];
                  local_d0 = puVar17[2];
                  lStack_c0 = puVar17[4];
                  bVar3 = pauVar1[1][0xe];
                  fVar43 = (float)uVar70;
                  if ((bVar3 >> 3 & 1) == 0) {
                    fVar28 = *(float *)pauVar1[1];
                    fVar36 = *(float *)(pauVar1[1] + 4);
                    fVar40 = *(float *)(pauVar1[1] + 8);
                    if ((bVar3 >> 2 & 1) == 0) {
                      fVar43 = (float)((ulong)*(undefined8 *)(lVar20 + 0x20) >> 0x20) - fVar36;
                      fVar29 = (float)((ulong)*(undefined8 *)(lVar20 + 0x28) >> 0x20) - 0.0;
                      uStack_a8 = CONCAT17((char)((uint)fVar29 >> 0x18),
                                           CONCAT16((char)((uint)fVar29 >> 0x10),
                                                    CONCAT15((char)((uint)fVar29 >> 8),
                                                             CONCAT14(SUB41(fVar29,0),
                                                                      (float)*(undefined8 *)
                                                                              (lVar20 + 0x28) -
                                                                      fVar40))));
                      local_b0 = (undefined1 *)
                                 CONCAT17((char)((uint)fVar43 >> 0x18),
                                          CONCAT16((char)((uint)fVar43 >> 0x10),
                                                   CONCAT15((char)((uint)fVar43 >> 8),
                                                            CONCAT14(SUB41(fVar43,0),
                                                                     (float)*(undefined8 *)
                                                                             (lVar20 + 0x20) -
                                                                     fVar28))));
                      fVar28 = (float)*(undefined8 *)(lVar20 + 0x30) - fVar28;
                      fVar36 = (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20) - fVar36;
                      fVar40 = (float)*(undefined8 *)(lVar20 + 0x38) - fVar40;
                      fVar43 = (float)((ulong)*(undefined8 *)(lVar20 + 0x38) >> 0x20) - 0.0;
LAB_02f8089c:
                      uStack_98 = CONCAT44(fVar43,fVar40);
                      local_a0 = CONCAT44(fVar36,fVar28);
                    }
                    else {
                      uVar18 = *(undefined8 *)(*pauVar1 + 8);
                      uVar44 = (undefined1)((ulong)uVar18 >> 8);
                      uVar45 = (undefined1)((ulong)uVar18 >> 0x10);
                      uVar46 = (undefined1)((ulong)uVar18 >> 0x18);
                      uVar47 = (undefined1)((ulong)uVar18 >> 0x20);
                      uVar48 = (undefined1)((ulong)uVar18 >> 0x28);
                      uVar49 = (undefined1)((ulong)uVar18 >> 0x30);
                      uVar50 = (undefined1)((ulong)uVar18 >> 0x38);
                      fVar29 = (float)*(undefined8 *)*pauVar1;
                      fVar51 = fVar29 + fVar29;
                      fVar37 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
                      fVar53 = fVar37 + fVar37;
                      fVar54 = (float)uVar18 + (float)uVar18;
                      fVar41 = (float)((ulong)uVar18 >> 0x20);
                      auVar5[9] = uVar44;
                      auVar5._0_9_ = *(unkbyte9 *)*pauVar1;
                      auVar5[10] = uVar45;
                      auVar5[0xb] = uVar46;
                      auVar5[0xc] = uVar47;
                      auVar5[0xd] = uVar48;
                      auVar5[0xe] = uVar49;
                      auVar5[0xf] = uVar50;
                      auVar6[9] = uVar44;
                      auVar6._0_9_ = *(unkbyte9 *)*pauVar1;
                      auVar6[10] = uVar45;
                      auVar6[0xb] = uVar46;
                      auVar6[0xc] = uVar47;
                      auVar6[0xd] = uVar48;
                      auVar6[0xe] = uVar49;
                      auVar6[0xf] = uVar50;
                      auVar61 = NEON_ext(auVar5,auVar6,8,1);
                      auVar7._4_4_ = fVar53;
                      auVar7._0_4_ = fVar51;
                      auVar7._8_4_ = fVar54;
                      auVar7._12_4_ = fVar41 + fVar41;
                      auVar8._4_4_ = fVar53;
                      auVar8._0_4_ = fVar51;
                      auVar8._8_4_ = fVar54;
                      auVar8._12_4_ = fVar41 + fVar41;
                      auVar68 = NEON_ext(auVar7,auVar8,8,1);
                      fVar52 = auVar61._0_4_ * auVar68._0_4_;
                      fVar56 = (float)*(undefined8 *)(lVar20 + 0x20);
                      fVar58 = (float)((ulong)*(undefined8 *)(lVar20 + 0x20) >> 0x20);
                      fVar57 = (float)*(undefined8 *)(lVar20 + 0x28);
                      fVar74 = fVar53 * fVar29 + fVar54 * fVar41;
                      fVar71 = fVar53 * fVar29 - fVar54 * fVar41;
                      fVar73 = fVar54 * fVar29 - fVar53 * fVar41;
                      fVar42 = fVar54 * fVar29 + fVar53 * fVar41;
                      fVar55 = fVar43 - (fVar53 * fVar37 + fVar52);
                      fVar52 = fVar43 - (fVar51 * fVar29 + fVar52);
                      fVar67 = fVar54 * fVar37 - fVar51 * fVar41;
                      fVar43 = fVar43 - (fVar51 * fVar29 + fVar53 * fVar37);
                      fVar28 = (fVar56 + *(float *)(lVar20 + 0x30)) * 0.5 - fVar28;
                      fVar36 = (fVar58 + *(float *)(lVar20 + 0x34)) * 0.5 - fVar36;
                      fVar40 = (fVar57 + *(float *)(lVar20 + 0x38)) * 0.5 - fVar40;
                      fVar53 = fVar54 * fVar37 + fVar51 * fVar41;
                      fVar54 = (*(float *)(lVar20 + 0x30) - fVar56) * 0.5;
                      fVar56 = (*(float *)(lVar20 + 0x34) - fVar58) * 0.5;
                      fVar58 = (*(float *)(lVar20 + 0x38) - fVar57) * 0.5;
                      fVar57 = (float)(CONCAT17((char)((uint)fVar67 >> 0x18),
                                                CONCAT16((char)((uint)fVar67 >> 0x10),
                                                         CONCAT15((char)((uint)fVar67 >> 8),
                                                                  CONCAT14(SUB41(fVar67,0),fVar42)))
                                               ) >> 0x20);
                      fVar29 = fVar73 * fVar40 + fVar55 * fVar28 + fVar74 * fVar36;
                      fVar37 = fVar53 * fVar40 + fVar71 * fVar28 + fVar52 * fVar36;
                      fVar41 = fVar43 * fVar40 + fVar42 * fVar28 + fVar67 * fVar36;
                      fVar51 = fVar40 * 0.0 + fVar57 * fVar28 + fVar36 * 0.0;
                      fVar28 = ABS(fVar73 * fVar58) + ABS(fVar55 * fVar54) + ABS(fVar74 * fVar56);
                      fVar36 = ABS(fVar53 * fVar58) + ABS(fVar71 * fVar54) + ABS(fVar52 * fVar56);
                      fVar43 = ABS(fVar43 * fVar58) + ABS(fVar42 * fVar54) + ABS(fVar67 * fVar56);
                      fVar40 = ABS(fVar58 * 0.0) + ABS(fVar57 * fVar54) + ABS(fVar56 * 0.0);
                      uStack_a8 = CONCAT44(fVar51 - fVar40,fVar41 - fVar43);
                      local_b0 = (undefined1 *)CONCAT44(fVar37 - fVar36,fVar29 - fVar28);
                      uStack_98 = CONCAT44(fVar51 + fVar40,fVar41 + fVar43);
                      local_a0 = CONCAT44(fVar37 + fVar36,fVar29 + fVar28);
                    }
                  }
                  else {
                    fVar29 = *(float *)(lVar20 + 0x20);
                    fVar37 = *(float *)(lVar20 + 0x24);
                    local_b0 = *(undefined1 **)(lVar20 + 0x20);
                    fVar41 = *(float *)(lVar20 + 0x28);
                    uStack_a8 = *(undefined8 *)(lVar20 + 0x28);
                    fVar28 = (float)*(undefined8 *)(lVar20 + 0x30);
                    fVar36 = (float)((ulong)*(undefined8 *)(lVar20 + 0x30) >> 0x20);
                    fVar40 = (float)*(undefined8 *)(lVar20 + 0x38);
                    if (fVar40 < fVar41 || (fVar28 < fVar29 || fVar36 < fVar37)) {
                      fVar28 = *(float *)(lVar20 + 0x30);
                      fVar36 = *(float *)(lVar20 + 0x34);
                      fVar40 = *(float *)(lVar20 + 0x38);
                      fVar43 = *(float *)(lVar20 + 0x3c);
                      goto LAB_02f8089c;
                    }
                    pauVar14 = pauVar1 + 2;
                    auVar61 = *pauVar1;
                    fVar58 = auVar61._0_4_;
                    auVar62._0_4_ = fVar58 + fVar58;
                    fVar57 = auVar61._4_4_;
                    auVar62._4_4_ = fVar57 + fVar57;
                    auVar62._8_4_ = auVar61._8_4_ + auVar61._8_4_;
                    fVar74 = auVar61._12_4_;
                    auVar62._12_4_ = fVar74 + fVar74;
                    auVar68 = NEON_ext(auVar61,auVar61,8,1);
                    auVar63 = NEON_ext(auVar62,auVar62,8,1);
                    auVar61._12_4_ = 0x3f800000;
                    auVar61._0_12_ = *(undefined1 (*) [12])*pauVar14;
                    auVar61 = NEON_frecpe(auVar61,4);
                    fVar42 = auVar68._0_4_ * auVar63._0_4_;
                    auVar68._12_4_ = 0x3f800000;
                    auVar68._0_12_ = *(undefined1 (*) [12])*pauVar14;
                    auVar68 = NEON_frecps(auVar68,auVar61,4);
                    fVar51 = (fVar28 - fVar29) * 0.5;
                    fVar52 = (fVar36 - fVar37) * 0.5;
                    fVar53 = (fVar40 - fVar41) * 0.5;
                    fVar54 = (fVar29 + fVar28) * 0.5;
                    fVar55 = (fVar37 + fVar36) * 0.5;
                    fVar56 = (fVar41 + fVar40) * 0.5;
                    fVar40 = auVar62._8_4_ * fVar57 - auVar62._0_4_ * fVar74;
                    auVar72._0_4_ = auVar61._0_4_ * auVar68._0_4_;
                    auVar72._4_4_ = auVar61._4_4_ * auVar68._4_4_;
                    auVar72._8_4_ = auVar61._8_4_ * auVar68._8_4_;
                    auVar72._12_4_ = auVar61._12_4_ * auVar68._12_4_;
                    auVar63._12_4_ = 0x3f800000;
                    auVar63._0_12_ = *(undefined1 (*) [12])*pauVar14;
                    auVar61 = NEON_frecps(auVar63,auVar72,4);
                    fVar69 = *(float *)(pauVar1[1] + 8);
                    fVar60 = auVar72._0_4_ * auVar61._0_4_;
                    fVar64 = auVar72._4_4_ * auVar61._4_4_;
                    fVar65 = auVar72._8_4_ * auVar61._8_4_;
                    fVar66 = auVar72._12_4_ * auVar61._12_4_;
                    fVar67 = fVar60 * (fVar43 - (auVar62._4_4_ * fVar57 + fVar42));
                    fVar71 = fVar64 * (auVar62._4_4_ * fVar58 - auVar62._8_4_ * fVar74);
                    fVar73 = fVar65 * (auVar62._8_4_ * fVar58 + auVar62._4_4_ * fVar74);
                    fVar59 = fVar66 * fVar40;
                    fVar28 = fVar60 * (auVar62._4_4_ * fVar58 + auVar62._8_4_ * fVar74);
                    fVar36 = fVar64 * (fVar43 - (auVar62._0_4_ * fVar58 + fVar42));
                    fVar40 = fVar65 * fVar40;
                    fVar29 = fVar66 * 0.0;
                    fVar60 = fVar60 * (auVar62._8_4_ * fVar58 - auVar62._4_4_ * fVar74);
                    fVar64 = fVar64 * (auVar62._8_4_ * fVar57 + auVar62._0_4_ * fVar74);
                    fVar65 = fVar65 * (fVar43 - (auVar62._0_4_ * fVar58 + auVar62._4_4_ * fVar57));
                    fVar66 = fVar66 * 0.0;
                    fVar58 = (float)*(undefined8 *)pauVar1[1];
                    fVar57 = (float)((ulong)*(undefined8 *)pauVar1[1] >> 0x20);
                    fVar37 = ABS(fVar60 * fVar53) + ABS(fVar67 * fVar51) + ABS(fVar28 * fVar52);
                    fVar41 = ABS(fVar64 * fVar53) + ABS(fVar71 * fVar51) + ABS(fVar36 * fVar52);
                    fVar42 = ABS(fVar65 * fVar53) + ABS(fVar73 * fVar51) + ABS(fVar40 * fVar52);
                    fVar51 = ABS(fVar66 * fVar53) + ABS(fVar59 * fVar51) + ABS(fVar29 * fVar52);
                    fVar43 = fVar60 * fVar56 + fVar67 * fVar54 + fVar28 * fVar55 +
                             -(fVar60 * fVar69 + fVar67 * fVar58 + fVar28 * fVar57);
                    fVar28 = fVar64 * fVar56 + fVar71 * fVar54 + fVar36 * fVar55 +
                             -(fVar64 * fVar69 + fVar71 * fVar58 + fVar36 * fVar57);
                    fVar36 = fVar65 * fVar56 + fVar73 * fVar54 + fVar40 * fVar55 +
                             -(fVar65 * fVar69 + fVar73 * fVar58 + fVar40 * fVar57);
                    fVar40 = fVar66 * fVar56 + fVar59 * fVar54 + fVar29 * fVar55 +
                             fVar66 * fVar69 + fVar59 * fVar58 + fVar29 * fVar57;
                    uStack_a8 = CONCAT44(fVar40 - fVar51,fVar36 - fVar42);
                    local_b0 = (undefined1 *)CONCAT44(fVar28 - fVar41,fVar43 - fVar37);
                    uStack_98 = CONCAT44(fVar51 + fVar40,fVar42 + fVar36);
                    local_a0 = CONCAT44(fVar41 + fVar28,fVar37 + fVar43);
                  }
                  puVar17 = *(undefined8 **)(lVar20 + 0x60);
                  uVar16 = (ulong)local_110 >> 8;
                  local_140 = *puVar17;
                  local_138 = puVar17[1];
                  local_120 = puVar17[4];
                  local_118 = 0;
                  local_100 = puVar17[8];
                  uStack_f8 = puVar17[9];
                  local_f0 = puVar17[10];
                  uStack_e8 = puVar17[0xb];
                  uStack_148 = 0x5f7ffff05f7ffff0;
                  uStack_108 = *(undefined4 *)(puVar17 + 7);
                  local_110 = CONCAT44(*(undefined4 *)((long)puVar17 + 0x34),
                                       (int)CONCAT71((int7)uVar16,*(undefined1 *)(puVar17 + 6)));
                  local_150 = 0x5f7ffff05f7ffff0;
                  local_128 = CONCAT44(iVar26,uVar22);
                  local_160 = 0xdf7ffff0df7ffff0;
                  uStack_158 = auVar33._8_8_;
                  local_130 = puVar2;
                  (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar2[0x18] * 0x200 + 0xe0))
                            (puVar2,*(undefined8 *)(lVar20 + 0x40),&local_e0,
                             *(undefined8 *)(lVar20 + 0x50),&local_88,&local_140,plVar19,&local_160)
                  ;
                }
                else {
                  iVar35 = (int)plVar19[1];
                  lVar20 = *plVar19;
                  iVar26 = iVar35 + 1;
                  if ((int)(*(uint *)((long)plVar19 + 0xc) & 0x3fffffff) <= iVar35) {
                    lVar20 = FUN_02f7f7b8(puVar11,iVar26);
                    iVar35 = (int)plVar19[1];
                    *plVar19 = lVar20;
                  }
                  *(undefined4 *)(lVar20 + (long)iVar35 * 4) = uVar22;
                  *(int *)(plVar19 + 1) = iVar26;
                }
              }
            } while( true );
          }
          goto LAB_02f804f8;
        }
        iVar26 = (int)param_2[1];
        uVar27 = *(uint *)((long)param_2 + 0xc);
        uVar25 = iVar26 + 1;
        if (iVar26 < (int)(uVar27 & 0x3fffffff)) {
          lVar20 = *param_2;
        }
        else {
          lVar20 = *param_2;
          if (0x3ffffffe < iVar26) {
            FUN_032bd0a8(uVar25);
            uVar27 = *(uint *)((long)param_2 + 0xc);
          }
          uVar27 = (uVar27 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar27) {
            uVar27 = 0x3fffffff;
          }
          uVar9 = uVar25;
          if ((int)uVar25 <= (int)uVar27) {
            uVar9 = uVar27;
          }
          lVar20 = FUN_032bd1d4(puVar11,uVar9,2,lVar20,iVar26,(uint *)((long)param_2 + 0xc));
          iVar26 = (int)param_2[1];
          *param_2 = lVar20;
        }
        *(uint *)(param_2 + 1) = uVar25;
        *(ushort *)(lVar20 + (long)iVar26 * 2) = uVar4;
        uVar4 = *(ushort *)(pauVar1[1] + 0xc);
      } while( true );
    }
  }
  return;
}


