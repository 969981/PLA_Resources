/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f82a24; name: FUN_02f82a24
 */


void FUN_02f82a24(long *param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  undefined1 auVar9 [16];
  long lVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined1 (*pauVar16) [16];
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  byte bVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long *plVar25;
  long lVar26;
  undefined1 (*pauVar27) [16];
  undefined1 *puVar28;
  int iVar29;
  undefined4 uVar30;
  int iVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int iVar39;
  float fVar40;
  float fVar41;
  int iVar42;
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar71;
  float fVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar76 [16];
  float fVar77;
  undefined8 uVar78;
  float fVar79;
  undefined1 auVar80 [16];
  float fVar81;
  float fVar82;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
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
  
  puVar11 = PTR_PTR_0434a080;
  uVar1 = *(ushort *)((long)param_1 + 0x1c);
  if ((ulong)uVar1 != 0) {
    lVar10 = param_2[1];
    lVar26 = 0;
    if (*param_1 != 0) {
      lVar26 = *param_1 + (long)param_1;
    }
    plVar21 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
    lVar23 = *plVar21;
    lVar22 = 0;
    if (lVar23 != 0) {
      lVar22 = lVar23 + (long)plVar21;
    }
    if ((*(uint *)(lVar22 + ((ulong)(uVar1 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar1 & 0x1f)) != 0) {
      pauVar16 = (undefined1 (*) [16])(lVar26 + (ulong)uVar1 * 0x20);
      iVar31 = -(uint)((float)param_3[2] <= *(float *)pauVar16[1]);
      iVar39 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= *(float *)(pauVar16[1] + 4));
      iVar42 = -(uint)((float)param_3[3] <= *(float *)(pauVar16[1] + 8));
      iVar29 = -(uint)((float)*(undefined8 *)*pauVar16 <= (float)param_3[4]);
      iVar13 = -(uint)((float)((ulong)*(undefined8 *)*pauVar16 >> 0x20) <=
                      (float)((ulong)param_3[4] >> 0x20));
      iVar4 = -(uint)((float)*(undefined8 *)(*pauVar16 + 8) <= (float)param_3[5]);
      uVar32 = CONCAT13((byte)((uint)iVar29 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                        CONCAT12((byte)((uint)iVar29 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                 CONCAT11((byte)((uint)iVar29 >> 8) & (byte)((uint)iVar31 >> 8),
                                          (byte)iVar29 & (byte)iVar31)));
      auVar37._0_8_ =
           CONCAT17((byte)((uint)iVar13 >> 0x18) & (byte)((uint)iVar39 >> 0x18),
                    CONCAT16((byte)((uint)iVar13 >> 0x10) & (byte)((uint)iVar39 >> 0x10),
                             CONCAT15((byte)((uint)iVar13 >> 8) & (byte)((uint)iVar39 >> 8),
                                      CONCAT14((byte)iVar13 & (byte)iVar39,uVar32))));
      auVar37[8] = (byte)iVar4 & (byte)iVar42;
      auVar37[9] = (byte)((uint)iVar4 >> 8) & (byte)((uint)iVar42 >> 8);
      auVar37[10] = (byte)((uint)iVar4 >> 0x10) & (byte)((uint)iVar42 >> 0x10);
      auVar37[0xb] = (byte)((uint)iVar4 >> 0x18) & (byte)((uint)iVar42 >> 0x18);
      if ((uVar32 & (uint)((ulong)auVar37._0_8_ >> 0x20) & auVar37._8_4_) != 0) {
        uVar78 = NEON_fmov(0x3f800000,4);
        NEON_fmov(0x3f800000,4);
LAB_02f82b4c:
        uVar1 = *(ushort *)(pauVar16[1] + 0xc);
        do {
          uVar24 = (ulong)uVar1;
          if (uVar24 == 0) goto LAB_02f82c50;
LAB_02f82b54:
          uVar1 = *(ushort *)(pauVar16[1] + 0xe);
          lVar26 = 0;
          if (*param_1 != 0) {
            lVar26 = *param_1 + (long)param_1;
          }
          pauVar27 = (undefined1 (*) [16])(lVar26 + (ulong)uVar1 * 0x20);
          pauVar16 = (undefined1 (*) [16])(lVar26 + uVar24 * 0x20);
          auVar68 = *pauVar27;
          plVar21 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
          lVar22 = *plVar21;
          lVar26 = 0;
          if (lVar22 != 0) {
            lVar26 = lVar22 + (long)plVar21;
          }
          if ((*(uint *)(lVar26 + (uVar24 >> 3 & 0x1ffc)) & 1 << (ulong)((uint)uVar24 & 0x1f)) == 0)
          {
            bVar12 = false;
          }
          else {
            iVar29 = -(uint)(*(float *)(param_3 + 2) <= (float)*(undefined8 *)pauVar16[1]);
            iVar13 = -(uint)(*(float *)((long)param_3 + 0x14) <=
                            (float)((ulong)*(undefined8 *)pauVar16[1] >> 0x20));
            iVar4 = -(uint)(*(float *)(param_3 + 3) <= (float)*(undefined8 *)(pauVar16[1] + 8));
            iVar31 = -(uint)(*(float *)*pauVar16 <= *(float *)(param_3 + 4));
            iVar39 = -(uint)(*(float *)(*pauVar16 + 4) <= *(float *)((long)param_3 + 0x24));
            iVar42 = -(uint)(*(float *)(*pauVar16 + 8) <= *(float *)(param_3 + 5));
            bVar12 = (CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                               CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                                        CONCAT11((byte)((uint)iVar31 >> 8) &
                                                 (byte)((uint)iVar29 >> 8),
                                                 (byte)iVar31 & (byte)iVar29))) &
                      CONCAT13((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                               CONCAT12((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                                        CONCAT11((byte)((uint)iVar39 >> 8) &
                                                 (byte)((uint)iVar13 >> 8),
                                                 (byte)iVar39 & (byte)iVar13))) &
                     CONCAT13((byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar4 >> 0x18),
                              CONCAT12((byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar4 >> 0x10),
                                       CONCAT11((byte)((uint)iVar42 >> 8) & (byte)((uint)iVar4 >> 8)
                                                ,(byte)iVar42 & (byte)iVar4)))) != 0;
          }
          if ((*(uint *)(lVar26 + ((ulong)(uVar1 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar1 & 0x1f)) == 0
             ) {
LAB_02f82c24:
            bVar20 = 0;
          }
          else {
            auVar76 = *(undefined1 (*) [16])(param_3 + 4);
            iVar31 = -(uint)(auVar68._0_4_ <= auVar76._0_4_);
            iVar39 = -(uint)(auVar68._4_4_ <= auVar76._4_4_);
            iVar42 = -(uint)(auVar68._8_4_ <= auVar76._8_4_);
            iVar29 = -(uint)((float)param_3[2] <= (float)*(undefined8 *)pauVar27[1]);
            iVar13 = -(uint)((float)((ulong)param_3[2] >> 0x20) <=
                            (float)((ulong)*(undefined8 *)pauVar27[1] >> 0x20));
            iVar4 = -(uint)((float)param_3[3] <= (float)*(undefined8 *)(pauVar27[1] + 8));
            uVar32 = CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar29 >> 0x18),
                              CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar29 >> 0x10),
                                       CONCAT11((byte)((uint)iVar31 >> 8) &
                                                (byte)((uint)iVar29 >> 8),
                                                (byte)iVar31 & (byte)iVar29)));
            auVar38._0_8_ =
                 CONCAT17((byte)((uint)iVar39 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                          CONCAT16((byte)((uint)iVar39 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                                   CONCAT15((byte)((uint)iVar39 >> 8) & (byte)((uint)iVar13 >> 8),
                                            CONCAT14((byte)iVar39 & (byte)iVar13,uVar32))));
            auVar38[8] = (byte)iVar42 & (byte)iVar4;
            auVar38[9] = (byte)((uint)iVar42 >> 8) & (byte)((uint)iVar4 >> 8);
            auVar38[10] = (byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar4 >> 0x10);
            auVar38[0xb] = (byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar4 >> 0x18);
            if ((uVar32 & (uint)((ulong)auVar38._0_8_ >> 0x20) & auVar38._8_4_) == 0)
            goto LAB_02f82c24;
            bVar20 = 2;
          }
          bVar20 = bVar20 | bVar12;
          if (bVar20 == 1) goto LAB_02f82b4c;
          if (bVar20 != 3) {
            pauVar16 = pauVar27;
            if (bVar20 != 2) {
LAB_02f82e28:
              do {
                if ((int)param_2[1] <= (int)lVar10) {
                  return;
                }
                iVar29 = (int)param_2[1] + -1;
                *(int *)(param_2 + 1) = iVar29;
                lVar26 = 0;
                if (*param_1 != 0) {
                  lVar26 = *param_1 + (long)param_1;
                }
                pauVar16 = (undefined1 (*) [16])
                           (lVar26 + (ulong)*(ushort *)(*param_2 + (long)iVar29 * 2) * 0x20);
                uVar24 = (ulong)*(ushort *)(pauVar16[1] + 0xc);
                if (uVar24 != 0) goto LAB_02f82b54;
LAB_02f82c50:
                lVar26 = *param_3;
                lVar22 = *(long *)(lVar26 + 8);
                uVar1 = *(ushort *)(pauVar16[1] + 0xe);
                pauVar16 = (undefined1 (*) [16])
                           (lVar22 + 0x48 + (ulong)uVar1 * 0x40 + *(long *)(lVar22 + 0x48));
                if (((byte)pauVar16[1][0xe] >> 6 & 1) != 0) {
                  pauVar27 = pauVar16 + 3;
                  if (*(long *)*pauVar27 == 0) {
                    puVar28 = (undefined1 *)0x0;
                  }
                  else {
                    puVar28 = *pauVar27 + *(long *)*pauVar27;
                  }
                  plVar21 = (long *)(*(long *)(lVar26 + 0x10) + 0x28);
                  local_88 = **(undefined8 **)(lVar26 + 0x58);
                  uStack_80 = (*(undefined8 **)(lVar26 + 0x58))[1];
                  plVar25 = *(long **)(lVar26 + 0x70);
                  uVar17 = *(undefined8 *)((long)plVar21 + (ulong)uVar1 * 8 + *plVar21);
                  puVar18 = *(undefined8 **)(lVar26 + 0x60);
                  uVar24 = puVar18[3];
                  iVar29 = (int)(uVar24 >> 0x20) + (uint)*(byte *)(lVar22 + 0x1c);
                  uVar24 = (ulong)((uVar1 + 1 << (ulong)(-iVar29 & 0x1f)) - 1) |
                           uVar24 & (uint)(&DAT_03aa74b0)[(long)uVar24 >> 0x20];
                  plVar21 = (long *)**(long **)(lVar26 + 0x48);
                  uVar30 = (undefined4)uVar24;
                  if (plVar21 != (long *)0x0) {
                    if (*(long *)*pauVar27 == 0) {
                      puVar14 = (undefined1 *)0x0;
                    }
                    else {
                      puVar14 = *pauVar27 + *(long *)*pauVar27;
                    }
                    (**(code **)(*plVar21 + 0x40))
                              (plVar21,*(undefined2 *)(pauVar16[2] + 0xc),6,*puVar18,puVar18[1],
                               lVar22,uVar24,puVar14,&local_88);
                    lVar23 = *(long *)(lVar26 + 0x48);
                    if (*(long *)(lVar23 + 8) != 0) {
                      local_140 = CONCAT62(local_140._2_6_,*(undefined2 *)(lVar23 + 0x10));
                      uVar19 = *(undefined8 *)(lVar23 + 0x14);
                      *(undefined4 *)((undefined8 *)((ulong)&local_140 | 4) + 1) =
                           *(undefined4 *)(lVar23 + 0x1c);
                      *(undefined8 *)((ulong)&local_140 | 4) = uVar19;
                      puVar18 = *(undefined8 **)(lVar26 + 0x50);
                      local_130 = (undefined1 *)*puVar18;
                      local_128 = puVar18[1];
                      local_120 = puVar18[2];
                      local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(puVar18 + 3));
                      local_e0 = CONCAT62(local_e0._2_6_,(undefined2)local_88);
                      uVar19 = *(undefined8 *)((ulong)&local_88 | 4);
                      local_110 = 0;
                      *(undefined4 *)((undefined8 *)((ulong)&local_e0 | 4) + 1) =
                           *(undefined4 *)((undefined8 *)((ulong)&local_88 | 4) + 1);
                      *(undefined8 *)((ulong)&local_e0 | 4) = uVar19;
                      local_d0 = **(undefined8 **)(lVar26 + 0x60);
                      local_c8 = (*(undefined8 **)(lVar26 + 0x60))[1];
                      local_b8 = CONCAT44(local_b8._4_4_,uVar30);
                      local_b0 = *(undefined1 **)*pauVar27;
                      if (local_b0 != (undefined1 *)0x0) {
                        local_b0 = *pauVar27 + (long)local_b0;
                      }
                      lStack_c0 = lVar22;
                      uVar24 = (**(code **)(**(long **)(lVar23 + 8) + 0x40))
                                         (*(long **)(lVar23 + 8),6,1,&local_140,&local_e0);
                      if ((uVar24 & 1) == 0) goto LAB_02f82e28;
                    }
                  }
                  if (puVar28[0x19] == '\x03') {
                    puVar18 = *(undefined8 **)(lVar26 + 0x48);
                    local_d8 = puVar18[1];
                    local_e0 = *puVar18;
                    local_b8 = puVar18[5];
                    local_c8 = puVar18[3];
                    local_d0 = puVar18[2];
                    lStack_c0 = puVar18[4];
                    bVar20 = pauVar16[1][0xe];
                    fVar45 = (float)uVar78;
                    if ((bVar20 >> 3 & 1) == 0) {
                      fVar33 = *(float *)pauVar16[1];
                      fVar40 = *(float *)(pauVar16[1] + 4);
                      fVar43 = *(float *)(pauVar16[1] + 8);
                      if ((bVar20 >> 2 & 1) == 0) {
                        fVar45 = (float)((ulong)*(undefined8 *)(lVar26 + 0x20) >> 0x20) - fVar40;
                        fVar5 = (float)((ulong)*(undefined8 *)(lVar26 + 0x28) >> 0x20) - 0.0;
                        uStack_a8 = CONCAT17((char)((uint)fVar5 >> 0x18),
                                             CONCAT16((char)((uint)fVar5 >> 0x10),
                                                      CONCAT15((char)((uint)fVar5 >> 8),
                                                               CONCAT14(SUB41(fVar5,0),
                                                                        (float)*(undefined8 *)
                                                                                (lVar26 + 0x28) -
                                                                        fVar43))));
                        local_b0 = (undefined1 *)
                                   CONCAT17((char)((uint)fVar45 >> 0x18),
                                            CONCAT16((char)((uint)fVar45 >> 0x10),
                                                     CONCAT15((char)((uint)fVar45 >> 8),
                                                              CONCAT14(SUB41(fVar45,0),
                                                                       (float)*(undefined8 *)
                                                                               (lVar26 + 0x20) -
                                                                       fVar33))));
                        fVar33 = (float)*(undefined8 *)(lVar26 + 0x30) - fVar33;
                        fVar40 = (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20) - fVar40;
                        fVar43 = (float)*(undefined8 *)(lVar26 + 0x38) - fVar43;
                        fVar45 = (float)((ulong)*(undefined8 *)(lVar26 + 0x38) >> 0x20) - 0.0;
LAB_02f82f64:
                        uStack_98 = CONCAT44(fVar45,fVar43);
                        local_a0 = CONCAT44(fVar40,fVar33);
                      }
                      else {
                        uVar19 = *(undefined8 *)(*pauVar16 + 8);
                        uVar47 = (undefined1)((ulong)uVar19 >> 8);
                        uVar48 = (undefined1)((ulong)uVar19 >> 0x10);
                        uVar49 = (undefined1)((ulong)uVar19 >> 0x18);
                        uVar50 = (undefined1)((ulong)uVar19 >> 0x20);
                        uVar51 = (undefined1)((ulong)uVar19 >> 0x28);
                        uVar52 = (undefined1)((ulong)uVar19 >> 0x30);
                        uVar53 = (undefined1)((ulong)uVar19 >> 0x38);
                        fVar5 = (float)*(undefined8 *)*pauVar16;
                        fVar41 = fVar5 + fVar5;
                        fVar64 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
                        fVar44 = fVar64 + fVar64;
                        uVar54 = (undefined1)((uint)fVar44 >> 8);
                        uVar55 = (undefined1)((uint)fVar44 >> 0x10);
                        uVar56 = (undefined1)((uint)fVar44 >> 0x18);
                        fVar46 = (float)uVar19 + (float)uVar19;
                        uVar57 = (undefined1)((uint)fVar46 >> 8);
                        uVar58 = (undefined1)((uint)fVar46 >> 0x10);
                        uVar59 = (undefined1)((uint)fVar46 >> 0x18);
                        fVar34 = (float)((ulong)uVar19 >> 0x20);
                        fVar36 = fVar34 + fVar34;
                        uVar60 = (undefined1)((uint)fVar36 >> 8);
                        uVar61 = (undefined1)((uint)fVar36 >> 0x10);
                        uVar62 = (undefined1)((uint)fVar36 >> 0x18);
                        auVar2[9] = uVar47;
                        auVar2._0_9_ = *(unkbyte9 *)*pauVar16;
                        auVar2[10] = uVar48;
                        auVar2[0xb] = uVar49;
                        auVar2[0xc] = uVar50;
                        auVar2[0xd] = uVar51;
                        auVar2[0xe] = uVar52;
                        auVar2[0xf] = uVar53;
                        auVar3[9] = uVar47;
                        auVar3._0_9_ = *(unkbyte9 *)*pauVar16;
                        auVar3[10] = uVar48;
                        auVar3[0xb] = uVar49;
                        auVar3[0xc] = uVar50;
                        auVar3[0xd] = uVar51;
                        auVar3[0xe] = uVar52;
                        auVar3[0xf] = uVar53;
                        auVar68 = NEON_ext(auVar2,auVar3,8,1);
                        auVar6[4] = SUB41(fVar44,0);
                        auVar6._0_4_ = fVar41;
                        auVar6[5] = uVar54;
                        auVar6[6] = uVar55;
                        auVar6[7] = uVar56;
                        auVar6[8] = SUB41(fVar46,0);
                        auVar6[9] = uVar57;
                        auVar6[10] = uVar58;
                        auVar6[0xb] = uVar59;
                        auVar6[0xc] = SUB41(fVar36,0);
                        auVar6[0xd] = uVar60;
                        auVar6[0xe] = uVar61;
                        auVar6[0xf] = uVar62;
                        auVar7[4] = SUB41(fVar44,0);
                        auVar7._0_4_ = fVar41;
                        auVar7[5] = uVar54;
                        auVar7[6] = uVar55;
                        auVar7[7] = uVar56;
                        auVar7[8] = SUB41(fVar46,0);
                        auVar7[9] = uVar57;
                        auVar7[10] = uVar58;
                        auVar7[0xb] = uVar59;
                        auVar7[0xc] = SUB41(fVar36,0);
                        auVar7[0xd] = uVar60;
                        auVar7[0xe] = uVar61;
                        auVar7[0xf] = uVar62;
                        auVar76 = NEON_ext(auVar6,auVar7,8,1);
                        fVar35 = auVar68._0_4_ * auVar76._0_4_;
                        fVar65 = (float)*(undefined8 *)(lVar26 + 0x20);
                        fVar66 = (float)((ulong)*(undefined8 *)(lVar26 + 0x20) >> 0x20);
                        fVar67 = (float)*(undefined8 *)(lVar26 + 0x28);
                        fVar82 = fVar44 * fVar5 + fVar46 * fVar34;
                        fVar79 = fVar44 * fVar5 - fVar46 * fVar34;
                        fVar81 = fVar46 * fVar5 - fVar44 * fVar34;
                        fVar36 = fVar46 * fVar5 + fVar44 * fVar34;
                        fVar63 = fVar45 - (fVar44 * fVar64 + fVar35);
                        fVar35 = fVar45 - (fVar41 * fVar5 + fVar35);
                        fVar75 = fVar46 * fVar64 - fVar41 * fVar34;
                        fVar45 = fVar45 - (fVar41 * fVar5 + fVar44 * fVar64);
                        fVar33 = (fVar65 + *(float *)(lVar26 + 0x30)) * 0.5 - fVar33;
                        fVar40 = (fVar66 + *(float *)(lVar26 + 0x34)) * 0.5 - fVar40;
                        fVar43 = (fVar67 + *(float *)(lVar26 + 0x38)) * 0.5 - fVar43;
                        fVar5 = fVar46 * fVar64 + fVar41 * fVar34;
                        fVar64 = (*(float *)(lVar26 + 0x30) - fVar65) * 0.5;
                        fVar65 = (*(float *)(lVar26 + 0x34) - fVar66) * 0.5;
                        fVar66 = (*(float *)(lVar26 + 0x38) - fVar67) * 0.5;
                        fVar67 = (float)(CONCAT17((char)((uint)fVar75 >> 0x18),
                                                  CONCAT16((char)((uint)fVar75 >> 0x10),
                                                           CONCAT15((char)((uint)fVar75 >> 8),
                                                                    CONCAT14(SUB41(fVar75,0),fVar36)
                                                                   ))) >> 0x20);
                        fVar34 = fVar81 * fVar43 + fVar63 * fVar33 + fVar82 * fVar40;
                        fVar41 = fVar5 * fVar43 + fVar79 * fVar33 + fVar35 * fVar40;
                        fVar44 = fVar45 * fVar43 + fVar36 * fVar33 + fVar75 * fVar40;
                        fVar46 = fVar43 * 0.0 + fVar67 * fVar33 + fVar40 * 0.0;
                        fVar33 = ABS(fVar81 * fVar66) + ABS(fVar63 * fVar64) + ABS(fVar82 * fVar65);
                        fVar40 = ABS(fVar5 * fVar66) + ABS(fVar79 * fVar64) + ABS(fVar35 * fVar65);
                        fVar45 = ABS(fVar45 * fVar66) + ABS(fVar36 * fVar64) + ABS(fVar75 * fVar65);
                        fVar43 = ABS(fVar66 * 0.0) + ABS(fVar67 * fVar64) + ABS(fVar65 * 0.0);
                        fVar5 = fVar41 - fVar40;
                        fVar64 = fVar46 - fVar43;
                        uStack_a8 = CONCAT17((char)((uint)fVar64 >> 0x18),
                                             CONCAT16((char)((uint)fVar64 >> 0x10),
                                                      CONCAT15((char)((uint)fVar64 >> 8),
                                                               CONCAT14(SUB41(fVar64,0),
                                                                        fVar44 - fVar45))));
                        local_b0 = (undefined1 *)
                                   CONCAT17((char)((uint)fVar5 >> 0x18),
                                            CONCAT16((char)((uint)fVar5 >> 0x10),
                                                     CONCAT15((char)((uint)fVar5 >> 8),
                                                              CONCAT14(SUB41(fVar5,0),
                                                                       fVar34 - fVar33))));
                        uStack_98 = CONCAT44(fVar46 + fVar43,fVar44 + fVar45);
                        local_a0 = CONCAT44(fVar41 + fVar40,fVar34 + fVar33);
                      }
                    }
                    else {
                      fVar5 = *(float *)(lVar26 + 0x20);
                      fVar64 = *(float *)(lVar26 + 0x24);
                      local_b0 = *(undefined1 **)(lVar26 + 0x20);
                      fVar34 = *(float *)(lVar26 + 0x28);
                      uStack_a8 = *(undefined8 *)(lVar26 + 0x28);
                      fVar33 = (float)*(undefined8 *)(lVar26 + 0x30);
                      fVar40 = (float)((ulong)*(undefined8 *)(lVar26 + 0x30) >> 0x20);
                      fVar43 = (float)*(undefined8 *)(lVar26 + 0x38);
                      if (fVar43 < fVar34 || (fVar33 < fVar5 || fVar40 < fVar64)) {
                        fVar33 = *(float *)(lVar26 + 0x30);
                        fVar40 = *(float *)(lVar26 + 0x34);
                        fVar43 = *(float *)(lVar26 + 0x38);
                        fVar45 = *(float *)(lVar26 + 0x3c);
                        goto LAB_02f82f64;
                      }
                      pauVar27 = pauVar16 + 2;
                      auVar68 = *pauVar16;
                      fVar46 = auVar68._0_4_;
                      auVar69._0_4_ = fVar46 + fVar46;
                      fVar65 = auVar68._4_4_;
                      auVar69._4_4_ = fVar65 + fVar65;
                      auVar69._8_4_ = auVar68._8_4_ + auVar68._8_4_;
                      fVar79 = auVar68._12_4_;
                      auVar69._12_4_ = fVar79 + fVar79;
                      auVar76 = NEON_ext(auVar68,auVar68,8,1);
                      auVar70 = NEON_ext(auVar69,auVar69,8,1);
                      auVar68._12_4_ = 0x3f800000;
                      auVar68._0_12_ = *(undefined1 (*) [12])*pauVar27;
                      auVar68 = NEON_frecpe(auVar68,4);
                      fVar36 = auVar76._0_4_ * auVar70._0_4_;
                      auVar76._12_4_ = 0x3f800000;
                      auVar76._0_12_ = *(undefined1 (*) [12])*pauVar27;
                      auVar76 = NEON_frecps(auVar76,auVar68,4);
                      fVar35 = (fVar33 - fVar5) * 0.5;
                      fVar44 = (fVar40 - fVar64) * 0.5;
                      fVar63 = (fVar43 - fVar34) * 0.5;
                      fVar41 = (fVar5 + fVar33) * 0.5;
                      fVar64 = (fVar64 + fVar40) * 0.5;
                      fVar34 = (fVar34 + fVar43) * 0.5;
                      fVar43 = auVar69._8_4_ * fVar65 - auVar69._0_4_ * fVar79;
                      auVar80._0_4_ = auVar68._0_4_ * auVar76._0_4_;
                      auVar80._4_4_ = auVar68._4_4_ * auVar76._4_4_;
                      auVar80._8_4_ = auVar68._8_4_ * auVar76._8_4_;
                      auVar80._12_4_ = auVar68._12_4_ * auVar76._12_4_;
                      auVar70._12_4_ = 0x3f800000;
                      auVar70._0_12_ = *(undefined1 (*) [12])*pauVar27;
                      auVar68 = NEON_frecps(auVar70,auVar80,4);
                      fVar77 = *(float *)(pauVar16[1] + 8);
                      fVar82 = auVar80._0_4_ * auVar68._0_4_;
                      fVar71 = auVar80._4_4_ * auVar68._4_4_;
                      fVar72 = auVar80._8_4_ * auVar68._8_4_;
                      fVar73 = auVar80._12_4_ * auVar68._12_4_;
                      fVar66 = fVar82 * (fVar45 - (auVar69._4_4_ * fVar65 + fVar36));
                      fVar75 = fVar71 * (auVar69._4_4_ * fVar46 - auVar69._8_4_ * fVar79);
                      fVar67 = fVar72 * (auVar69._8_4_ * fVar46 + auVar69._4_4_ * fVar79);
                      fVar81 = fVar73 * fVar43;
                      fVar33 = fVar82 * (auVar69._4_4_ * fVar46 + auVar69._8_4_ * fVar79);
                      fVar40 = fVar71 * (fVar45 - (auVar69._0_4_ * fVar46 + fVar36));
                      fVar43 = fVar72 * fVar43;
                      fVar5 = fVar73 * 0.0;
                      fVar82 = fVar82 * (auVar69._8_4_ * fVar46 - auVar69._4_4_ * fVar79);
                      fVar71 = fVar71 * (auVar69._8_4_ * fVar65 + auVar69._0_4_ * fVar79);
                      fVar72 = fVar72 * (fVar45 - (auVar69._0_4_ * fVar46 + auVar69._4_4_ * fVar65))
                      ;
                      fVar73 = fVar73 * 0.0;
                      fVar79 = (float)*(undefined8 *)pauVar16[1];
                      fVar74 = (float)((ulong)*(undefined8 *)pauVar16[1] >> 0x20);
                      fVar36 = ABS(fVar82 * fVar63) + ABS(fVar66 * fVar35) + ABS(fVar33 * fVar44);
                      fVar46 = ABS(fVar71 * fVar63) + ABS(fVar75 * fVar35) + ABS(fVar40 * fVar44);
                      fVar65 = ABS(fVar72 * fVar63) + ABS(fVar67 * fVar35) + ABS(fVar43 * fVar44);
                      fVar35 = ABS(fVar73 * fVar63) + ABS(fVar81 * fVar35) + ABS(fVar5 * fVar44);
                      fVar45 = fVar82 * fVar34 + fVar66 * fVar41 + fVar33 * fVar64 +
                               -(fVar82 * fVar77 + fVar66 * fVar79 + fVar33 * fVar74);
                      fVar33 = fVar71 * fVar34 + fVar75 * fVar41 + fVar40 * fVar64 +
                               -(fVar71 * fVar77 + fVar75 * fVar79 + fVar40 * fVar74);
                      fVar40 = fVar72 * fVar34 + fVar67 * fVar41 + fVar43 * fVar64 +
                               -(fVar72 * fVar77 + fVar67 * fVar79 + fVar43 * fVar74);
                      fVar43 = fVar73 * fVar34 + fVar81 * fVar41 + fVar5 * fVar64 +
                               fVar73 * fVar77 + fVar81 * fVar79 + fVar5 * fVar74;
                      fVar5 = fVar46 + fVar33;
                      fVar64 = fVar35 + fVar43;
                      uStack_a8 = CONCAT44(fVar43 - fVar35,fVar40 - fVar65);
                      local_b0 = (undefined1 *)CONCAT44(fVar33 - fVar46,fVar45 - fVar36);
                      uStack_98 = CONCAT17((char)((uint)fVar64 >> 0x18),
                                           CONCAT16((char)((uint)fVar64 >> 0x10),
                                                    CONCAT15((char)((uint)fVar64 >> 8),
                                                             CONCAT14(SUB41(fVar64,0),
                                                                      fVar65 + fVar40))));
                      local_a0 = CONCAT17((char)((uint)fVar5 >> 0x18),
                                          CONCAT16((char)((uint)fVar5 >> 0x10),
                                                   CONCAT15((char)((uint)fVar5 >> 8),
                                                            CONCAT14(SUB41(fVar5,0),fVar36 + fVar45)
                                                           )));
                    }
                    puVar18 = *(undefined8 **)(lVar26 + 0x60);
                    uVar24 = (ulong)local_110 >> 8;
                    local_140 = *puVar18;
                    local_138 = puVar18[1];
                    local_120 = puVar18[4];
                    local_100 = puVar18[8];
                    uStack_f8 = puVar18[9];
                    local_f0 = puVar18[10];
                    uStack_e8 = puVar18[0xb];
                    uStack_148 = 0x5f7ffff05f7ffff0;
                    uStack_108 = *(undefined4 *)(puVar18 + 7);
                    local_110 = CONCAT44(*(undefined4 *)((long)puVar18 + 0x34),
                                         (int)CONCAT71((int7)uVar24,*(undefined1 *)(puVar18 + 6)));
                    local_150 = 0x5f7ffff05f7ffff0;
                    auVar9._8_4_ = 0xdf7ffff0;
                    auVar9._0_8_ = 0xdf7ffff0df7ffff0;
                    auVar9._12_4_ = 0xdf7ffff0;
                    local_128 = CONCAT44(iVar29,uVar30);
                    uStack_158 = auVar9._8_8_;
                    local_160 = 0xdf7ffff0df7ffff0;
                    local_130 = puVar28;
                    local_118 = uVar17;
                    (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar28[0x18] * 0x200 + 0xe0))
                              (puVar28,*(undefined8 *)(lVar26 + 0x40),&local_e0,
                               *(undefined8 *)(lVar26 + 0x50),&local_88,&local_140,plVar25,
                               &local_160);
                  }
                  else {
                    iVar13 = (int)plVar25[1];
                    lVar26 = *plVar25;
                    iVar29 = iVar13 + 1;
                    if ((int)(*(uint *)((long)plVar25 + 0xc) & 0x3fffffff) <= iVar13) {
                      lVar26 = FUN_02f7f7b8(puVar11,iVar29);
                      iVar13 = (int)plVar25[1];
                      *plVar25 = lVar26;
                    }
                    *(undefined4 *)(lVar26 + (long)iVar13 * 4) = uVar30;
                    *(int *)(plVar25 + 1) = iVar29;
                  }
                }
              } while( true );
            }
            goto LAB_02f82b4c;
          }
          iVar29 = (int)param_2[1];
          uVar15 = *(uint *)((long)param_2 + 0xc);
          uVar32 = iVar29 + 1;
          if (iVar29 < (int)(uVar15 & 0x3fffffff)) {
            lVar26 = *param_2;
          }
          else {
            lVar26 = *param_2;
            if (0x3ffffffe < iVar29) {
              FUN_032bd0a8(uVar32);
              uVar15 = *(uint *)((long)param_2 + 0xc);
            }
            uVar15 = (uVar15 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar15) {
              uVar15 = 0x3fffffff;
            }
            uVar8 = uVar32;
            if ((int)uVar32 <= (int)uVar15) {
              uVar8 = uVar15;
            }
            lVar26 = FUN_032bd1d4(puVar11,uVar8,2,lVar26,iVar29,(uint *)((long)param_2 + 0xc));
            iVar29 = (int)param_2[1];
            *param_2 = lVar26;
          }
          *(uint *)(param_2 + 1) = uVar32;
          *(ushort *)(lVar26 + (long)iVar29 * 2) = uVar1;
          uVar1 = *(ushort *)(pauVar16[1] + 0xc);
        } while( true );
      }
    }
  }
  return;
}


