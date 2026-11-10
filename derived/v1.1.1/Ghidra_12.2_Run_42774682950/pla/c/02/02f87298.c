/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f87298; name: FUN_02f87298
 */


void FUN_02f87298(long *param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  undefined1 auVar10 [16];
  long lVar11;
  undefined *puVar12;
  bool bVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined1 (*pauVar16) [16];
  ulong *puVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  byte bVar21;
  undefined4 uVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long *plVar27;
  undefined4 uVar28;
  long lVar29;
  undefined1 (*pauVar30) [16];
  int iVar31;
  undefined1 *puVar32;
  int iVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int iVar41;
  float fVar42;
  float fVar43;
  int iVar44;
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  float fVar45;
  float fVar46;
  float fVar47;
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
  undefined1 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar73;
  float fVar74;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar75;
  undefined1 auVar72 [16];
  float fVar76;
  float fVar77;
  undefined1 auVar78 [16];
  float fVar79;
  undefined8 uVar80;
  float fVar81;
  undefined1 auVar82 [16];
  float fVar83;
  float fVar84;
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
  
  puVar12 = PTR_PTR_0434a080;
  uVar1 = *(ushort *)((long)param_1 + 0x1c);
  if ((ulong)uVar1 != 0) {
    lVar11 = param_2[1];
    lVar29 = 0;
    if (*param_1 != 0) {
      lVar29 = *param_1 + (long)param_1;
    }
    plVar23 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
    lVar25 = *plVar23;
    lVar24 = 0;
    if (lVar25 != 0) {
      lVar24 = lVar25 + (long)plVar23;
    }
    if ((*(uint *)(lVar24 + ((ulong)(uVar1 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar1 & 0x1f)) != 0) {
      pauVar16 = (undefined1 (*) [16])(lVar29 + (ulong)uVar1 * 0x20);
      iVar33 = -(uint)((float)param_3[2] <= *(float *)pauVar16[1]);
      iVar41 = -(uint)((float)((ulong)param_3[2] >> 0x20) <= *(float *)(pauVar16[1] + 4));
      iVar44 = -(uint)((float)param_3[3] <= *(float *)(pauVar16[1] + 8));
      iVar31 = -(uint)((float)*(undefined8 *)*pauVar16 <= (float)param_3[4]);
      iVar4 = -(uint)((float)((ulong)*(undefined8 *)*pauVar16 >> 0x20) <=
                     (float)((ulong)param_3[4] >> 0x20));
      iVar5 = -(uint)((float)*(undefined8 *)(*pauVar16 + 8) <= (float)param_3[5]);
      uVar34 = CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((uint)iVar33 >> 0x18),
                        CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((uint)iVar33 >> 0x10),
                                 CONCAT11((byte)((uint)iVar31 >> 8) & (byte)((uint)iVar33 >> 8),
                                          (byte)iVar31 & (byte)iVar33)));
      auVar39._0_8_ =
           CONCAT17((byte)((uint)iVar4 >> 0x18) & (byte)((uint)iVar41 >> 0x18),
                    CONCAT16((byte)((uint)iVar4 >> 0x10) & (byte)((uint)iVar41 >> 0x10),
                             CONCAT15((byte)((uint)iVar4 >> 8) & (byte)((uint)iVar41 >> 8),
                                      CONCAT14((byte)iVar4 & (byte)iVar41,uVar34))));
      auVar39[8] = (byte)iVar5 & (byte)iVar44;
      auVar39[9] = (byte)((uint)iVar5 >> 8) & (byte)((uint)iVar44 >> 8);
      auVar39[10] = (byte)((uint)iVar5 >> 0x10) & (byte)((uint)iVar44 >> 0x10);
      auVar39[0xb] = (byte)((uint)iVar5 >> 0x18) & (byte)((uint)iVar44 >> 0x18);
      if ((uVar34 & (uint)((ulong)auVar39._0_8_ >> 0x20) & auVar39._8_4_) != 0) {
        uVar80 = NEON_fmov(0x3f800000,4);
        puVar17 = (ulong *)((ulong)&local_110 | 4);
        NEON_fmov(0x3f800000,4);
LAB_02f873d0:
        uVar1 = *(ushort *)(pauVar16[1] + 0xc);
        do {
          uVar26 = (ulong)uVar1;
          if (uVar26 == 0) goto LAB_02f874d4;
LAB_02f873d8:
          uVar1 = *(ushort *)(pauVar16[1] + 0xe);
          lVar29 = 0;
          if (*param_1 != 0) {
            lVar29 = *param_1 + (long)param_1;
          }
          pauVar30 = (undefined1 (*) [16])(lVar29 + (ulong)uVar1 * 0x20);
          pauVar16 = (undefined1 (*) [16])(lVar29 + uVar26 * 0x20);
          auVar72 = *pauVar30;
          plVar23 = (long *)(*(long *)(*param_3 + 0x10) + 0x38);
          lVar24 = *plVar23;
          lVar29 = 0;
          if (lVar24 != 0) {
            lVar29 = lVar24 + (long)plVar23;
          }
          if ((*(uint *)(lVar29 + (uVar26 >> 3 & 0x1ffc)) & 1 << (ulong)((uint)uVar26 & 0x1f)) == 0)
          {
            bVar13 = false;
          }
          else {
            iVar31 = -(uint)(*(float *)(param_3 + 2) <= (float)*(undefined8 *)pauVar16[1]);
            iVar4 = -(uint)(*(float *)((long)param_3 + 0x14) <=
                           (float)((ulong)*(undefined8 *)pauVar16[1] >> 0x20));
            iVar5 = -(uint)(*(float *)(param_3 + 3) <= (float)*(undefined8 *)(pauVar16[1] + 8));
            iVar33 = -(uint)(*(float *)*pauVar16 <= *(float *)(param_3 + 4));
            iVar41 = -(uint)(*(float *)(*pauVar16 + 4) <= *(float *)((long)param_3 + 0x24));
            iVar44 = -(uint)(*(float *)(*pauVar16 + 8) <= *(float *)(param_3 + 5));
            bVar13 = (CONCAT13((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                               CONCAT12((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                        CONCAT11((byte)((uint)iVar33 >> 8) &
                                                 (byte)((uint)iVar31 >> 8),
                                                 (byte)iVar33 & (byte)iVar31))) &
                      CONCAT13((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar4 >> 0x18),
                               CONCAT12((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar4 >> 0x10),
                                        CONCAT11((byte)((uint)iVar41 >> 8) &
                                                 (byte)((uint)iVar4 >> 8),(byte)iVar41 & (byte)iVar4
                                                ))) &
                     CONCAT13((byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar5 >> 0x18),
                              CONCAT12((byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar5 >> 0x10),
                                       CONCAT11((byte)((uint)iVar44 >> 8) & (byte)((uint)iVar5 >> 8)
                                                ,(byte)iVar44 & (byte)iVar5)))) != 0;
          }
          if ((*(uint *)(lVar29 + ((ulong)(uVar1 >> 3) & 0x1ffc)) & 1 << (ulong)(uVar1 & 0x1f)) == 0
             ) {
LAB_02f874a8:
            bVar21 = 0;
          }
          else {
            auVar78 = *(undefined1 (*) [16])(param_3 + 4);
            iVar33 = -(uint)(auVar72._0_4_ <= auVar78._0_4_);
            iVar41 = -(uint)(auVar72._4_4_ <= auVar78._4_4_);
            iVar44 = -(uint)(auVar72._8_4_ <= auVar78._8_4_);
            iVar31 = -(uint)((float)param_3[2] <= (float)*(undefined8 *)pauVar30[1]);
            iVar4 = -(uint)((float)((ulong)param_3[2] >> 0x20) <=
                           (float)((ulong)*(undefined8 *)pauVar30[1] >> 0x20));
            iVar5 = -(uint)((float)param_3[3] <= (float)*(undefined8 *)(pauVar30[1] + 8));
            uVar34 = CONCAT13((byte)((uint)iVar33 >> 0x18) & (byte)((uint)iVar31 >> 0x18),
                              CONCAT12((byte)((uint)iVar33 >> 0x10) & (byte)((uint)iVar31 >> 0x10),
                                       CONCAT11((byte)((uint)iVar33 >> 8) &
                                                (byte)((uint)iVar31 >> 8),
                                                (byte)iVar33 & (byte)iVar31)));
            auVar40._0_8_ =
                 CONCAT17((byte)((uint)iVar41 >> 0x18) & (byte)((uint)iVar4 >> 0x18),
                          CONCAT16((byte)((uint)iVar41 >> 0x10) & (byte)((uint)iVar4 >> 0x10),
                                   CONCAT15((byte)((uint)iVar41 >> 8) & (byte)((uint)iVar4 >> 8),
                                            CONCAT14((byte)iVar41 & (byte)iVar4,uVar34))));
            auVar40[8] = (byte)iVar44 & (byte)iVar5;
            auVar40[9] = (byte)((uint)iVar44 >> 8) & (byte)((uint)iVar5 >> 8);
            auVar40[10] = (byte)((uint)iVar44 >> 0x10) & (byte)((uint)iVar5 >> 0x10);
            auVar40[0xb] = (byte)((uint)iVar44 >> 0x18) & (byte)((uint)iVar5 >> 0x18);
            if ((uVar34 & (uint)((ulong)auVar40._0_8_ >> 0x20) & auVar40._8_4_) == 0)
            goto LAB_02f874a8;
            bVar21 = 2;
          }
          bVar21 = bVar21 | bVar13;
          if (bVar21 == 1) goto LAB_02f873d0;
          if (bVar21 != 3) {
            pauVar16 = pauVar30;
            if (bVar21 != 2) {
LAB_02f87a9c:
              do {
                if ((int)param_2[1] <= (int)lVar11) {
                  return;
                }
                iVar31 = (int)param_2[1] + -1;
                *(int *)(param_2 + 1) = iVar31;
                lVar29 = 0;
                if (*param_1 != 0) {
                  lVar29 = *param_1 + (long)param_1;
                }
                pauVar16 = (undefined1 (*) [16])
                           (lVar29 + (ulong)*(ushort *)(*param_2 + (long)iVar31 * 2) * 0x20);
                uVar26 = (ulong)*(ushort *)(pauVar16[1] + 0xc);
                if (uVar26 != 0) goto LAB_02f873d8;
LAB_02f874d4:
                lVar29 = *param_3;
                lVar24 = *(long *)(lVar29 + 8);
                uVar1 = *(ushort *)(pauVar16[1] + 0xe);
                pauVar16 = (undefined1 (*) [16])
                           (lVar24 + 0x48 + (ulong)uVar1 * 0x40 + *(long *)(lVar24 + 0x48));
                if (((byte)pauVar16[1][0xe] >> 6 & 1) != 0) {
                  pauVar30 = pauVar16 + 3;
                  if (*(long *)*pauVar30 == 0) {
                    puVar32 = (undefined1 *)0x0;
                  }
                  else {
                    puVar32 = *pauVar30 + *(long *)*pauVar30;
                  }
                  plVar23 = (long *)(*(long *)(lVar29 + 0x10) + 0x28);
                  local_110 = **(undefined8 **)(lVar29 + 0x58);
                  uStack_108 = (*(undefined8 **)(lVar29 + 0x58))[1];
                  plVar27 = *(long **)(lVar29 + 0x70);
                  uVar18 = *(undefined8 *)((long)plVar23 + (ulong)uVar1 * 8 + *plVar23);
                  puVar19 = *(undefined8 **)(lVar29 + 0x60);
                  uVar26 = puVar19[3];
                  iVar31 = (int)(uVar26 >> 0x20) + (uint)*(byte *)(lVar24 + 0x1c);
                  uVar26 = (ulong)((uVar1 + 1 << (ulong)(-iVar31 & 0x1f)) - 1) |
                           uVar26 & (uint)(&DAT_03aa74b0)[(long)uVar26 >> 0x20];
                  plVar23 = (long *)**(long **)(lVar29 + 0x48);
                  uVar28 = (undefined4)uVar26;
                  if (plVar23 != (long *)0x0) {
                    if (*(long *)*pauVar30 == 0) {
                      puVar14 = (undefined1 *)0x0;
                    }
                    else {
                      puVar14 = *pauVar30 + *(long *)*pauVar30;
                    }
                    (**(code **)(*plVar23 + 0x40))
                              (plVar23,*(undefined2 *)(pauVar16[2] + 0xc),6,*puVar19,puVar19[1],
                               lVar24,uVar26,puVar14,&local_110);
                    lVar25 = *(long *)(lVar29 + 0x48);
                    if (*(long *)(lVar25 + 8) != 0) {
                      local_100 = CONCAT62(local_100._2_6_,*(undefined2 *)(lVar25 + 0x10));
                      uVar20 = *(undefined8 *)(lVar25 + 0x14);
                      *(undefined4 *)((undefined8 *)((ulong)&local_100 | 4) + 1) =
                           *(undefined4 *)(lVar25 + 0x1c);
                      *(undefined8 *)((ulong)&local_100 | 4) = uVar20;
                      puVar19 = *(undefined8 **)(lVar29 + 0x50);
                      local_f0 = (undefined1 *)*puVar19;
                      local_e8 = puVar19[1];
                      local_e0 = puVar19[2];
                      local_d8 = CONCAT44(local_d8._4_4_,*(undefined4 *)(puVar19 + 3));
                      local_d0 = 0;
                      local_160 = CONCAT62(local_160._2_6_,(undefined2)local_110);
                      uVar26 = *puVar17;
                      *(int *)((ulong *)((ulong)&local_160 | 4) + 1) = (int)puVar17[1];
                      *(ulong *)((ulong)&local_160 | 4) = uVar26;
                      local_150 = **(undefined8 **)(lVar29 + 0x60);
                      local_148 = (*(undefined8 **)(lVar29 + 0x60))[1];
                      local_138 = CONCAT44(local_138._4_4_,uVar28);
                      local_130 = *(undefined1 **)*pauVar30;
                      if (local_130 != (undefined1 *)0x0) {
                        local_130 = *pauVar30 + (long)local_130;
                      }
                      lStack_140 = lVar24;
                      uVar26 = (**(code **)(**(long **)(lVar25 + 8) + 0x40))
                                         (*(long **)(lVar25 + 8),6,1,&local_100,&local_160);
                      if ((uVar26 & 1) == 0) goto LAB_02f87a9c;
                    }
                  }
                  if (puVar32[0x19] == '\x03') {
                    puVar19 = *(undefined8 **)(lVar29 + 0x48);
                    local_158 = puVar19[1];
                    local_160 = *puVar19;
                    local_138 = puVar19[5];
                    local_148 = puVar19[3];
                    local_150 = puVar19[2];
                    lStack_140 = puVar19[4];
                    bVar21 = pauVar16[1][0xe];
                    fVar69 = (float)uVar80;
                    if ((bVar21 >> 3 & 1) == 0) {
                      fVar37 = *(float *)pauVar16[1];
                      fVar42 = *(float *)(pauVar16[1] + 4);
                      fVar45 = *(float *)(pauVar16[1] + 8);
                      if ((bVar21 >> 2 & 1) == 0) {
                        fVar69 = (float)((ulong)*(undefined8 *)(lVar29 + 0x20) >> 0x20) - fVar42;
                        fVar6 = (float)((ulong)*(undefined8 *)(lVar29 + 0x28) >> 0x20) - 0.0;
                        uStack_128 = CONCAT17((char)((uint)fVar6 >> 0x18),
                                              CONCAT16((char)((uint)fVar6 >> 0x10),
                                                       CONCAT15((char)((uint)fVar6 >> 8),
                                                                CONCAT14(SUB41(fVar6,0),
                                                                         (float)*(undefined8 *)
                                                                                 (lVar29 + 0x28) -
                                                                         fVar45))));
                        local_130 = (undefined1 *)
                                    CONCAT17((char)((uint)fVar69 >> 0x18),
                                             CONCAT16((char)((uint)fVar69 >> 0x10),
                                                      CONCAT15((char)((uint)fVar69 >> 8),
                                                               CONCAT14(SUB41(fVar69,0),
                                                                        (float)*(undefined8 *)
                                                                                (lVar29 + 0x20) -
                                                                        fVar37))));
                        uStack_118 = CONCAT44((float)((ulong)*(undefined8 *)(lVar29 + 0x38) >> 0x20)
                                              - 0.0,(float)*(undefined8 *)(lVar29 + 0x38) - fVar45);
                        local_120 = CONCAT44((float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20)
                                             - fVar42,(float)*(undefined8 *)(lVar29 + 0x30) - fVar37
                                            );
                      }
                      else {
                        uVar20 = *(undefined8 *)(*pauVar16 + 8);
                        uVar48 = (undefined1)((ulong)uVar20 >> 8);
                        uVar49 = (undefined1)((ulong)uVar20 >> 0x10);
                        uVar50 = (undefined1)((ulong)uVar20 >> 0x18);
                        uVar51 = (undefined1)((ulong)uVar20 >> 0x20);
                        uVar52 = (undefined1)((ulong)uVar20 >> 0x28);
                        uVar53 = (undefined1)((ulong)uVar20 >> 0x30);
                        uVar54 = (undefined1)((ulong)uVar20 >> 0x38);
                        fVar6 = (float)*(undefined8 *)*pauVar16;
                        fVar43 = fVar6 + fVar6;
                        fVar65 = (float)((ulong)*(undefined8 *)*pauVar16 >> 0x20);
                        fVar46 = fVar65 + fVar65;
                        uVar55 = (undefined1)((uint)fVar46 >> 8);
                        uVar56 = (undefined1)((uint)fVar46 >> 0x10);
                        uVar57 = (undefined1)((uint)fVar46 >> 0x18);
                        fVar47 = (float)uVar20 + (float)uVar20;
                        uVar58 = (undefined1)((uint)fVar47 >> 8);
                        uVar59 = (undefined1)((uint)fVar47 >> 0x10);
                        uVar60 = (undefined1)((uint)fVar47 >> 0x18);
                        fVar38 = (float)((ulong)uVar20 >> 0x20);
                        fVar36 = fVar38 + fVar38;
                        uVar61 = (undefined1)((uint)fVar36 >> 8);
                        uVar62 = (undefined1)((uint)fVar36 >> 0x10);
                        uVar63 = (undefined1)((uint)fVar36 >> 0x18);
                        auVar2[9] = uVar48;
                        auVar2._0_9_ = *(unkbyte9 *)*pauVar16;
                        auVar2[10] = uVar49;
                        auVar2[0xb] = uVar50;
                        auVar2[0xc] = uVar51;
                        auVar2[0xd] = uVar52;
                        auVar2[0xe] = uVar53;
                        auVar2[0xf] = uVar54;
                        auVar3[9] = uVar48;
                        auVar3._0_9_ = *(unkbyte9 *)*pauVar16;
                        auVar3[10] = uVar49;
                        auVar3[0xb] = uVar50;
                        auVar3[0xc] = uVar51;
                        auVar3[0xd] = uVar52;
                        auVar3[0xe] = uVar53;
                        auVar3[0xf] = uVar54;
                        auVar72 = NEON_ext(auVar2,auVar3,8,1);
                        auVar7[4] = SUB41(fVar46,0);
                        auVar7._0_4_ = fVar43;
                        auVar7[5] = uVar55;
                        auVar7[6] = uVar56;
                        auVar7[7] = uVar57;
                        auVar7[8] = SUB41(fVar47,0);
                        auVar7[9] = uVar58;
                        auVar7[10] = uVar59;
                        auVar7[0xb] = uVar60;
                        auVar7[0xc] = SUB41(fVar36,0);
                        auVar7[0xd] = uVar61;
                        auVar7[0xe] = uVar62;
                        auVar7[0xf] = uVar63;
                        auVar8[4] = SUB41(fVar46,0);
                        auVar8._0_4_ = fVar43;
                        auVar8[5] = uVar55;
                        auVar8[6] = uVar56;
                        auVar8[7] = uVar57;
                        auVar8[8] = SUB41(fVar47,0);
                        auVar8[9] = uVar58;
                        auVar8[10] = uVar59;
                        auVar8[0xb] = uVar60;
                        auVar8[0xc] = SUB41(fVar36,0);
                        auVar8[0xd] = uVar61;
                        auVar8[0xe] = uVar62;
                        auVar8[0xf] = uVar63;
                        auVar78 = NEON_ext(auVar7,auVar8,8,1);
                        fVar35 = auVar72._0_4_ * auVar78._0_4_;
                        fVar66 = (float)*(undefined8 *)(lVar29 + 0x20);
                        fVar68 = (float)((ulong)*(undefined8 *)(lVar29 + 0x20) >> 0x20);
                        fVar67 = (float)*(undefined8 *)(lVar29 + 0x28);
                        fVar84 = fVar46 * fVar6 + fVar47 * fVar38;
                        fVar81 = fVar46 * fVar6 - fVar47 * fVar38;
                        fVar83 = fVar47 * fVar6 - fVar46 * fVar38;
                        fVar36 = fVar47 * fVar6 + fVar46 * fVar38;
                        fVar64 = fVar69 - (fVar46 * fVar65 + fVar35);
                        fVar35 = fVar69 - (fVar43 * fVar6 + fVar35);
                        fVar77 = fVar47 * fVar65 - fVar43 * fVar38;
                        fVar69 = fVar69 - (fVar43 * fVar6 + fVar46 * fVar65);
                        fVar37 = (fVar66 + *(float *)(lVar29 + 0x30)) * 0.5 - fVar37;
                        fVar42 = (fVar68 + *(float *)(lVar29 + 0x34)) * 0.5 - fVar42;
                        fVar45 = (fVar67 + *(float *)(lVar29 + 0x38)) * 0.5 - fVar45;
                        fVar6 = fVar47 * fVar65 + fVar43 * fVar38;
                        fVar65 = (*(float *)(lVar29 + 0x30) - fVar66) * 0.5;
                        fVar66 = (*(float *)(lVar29 + 0x34) - fVar68) * 0.5;
                        fVar68 = (*(float *)(lVar29 + 0x38) - fVar67) * 0.5;
                        fVar67 = (float)(CONCAT17((char)((uint)fVar77 >> 0x18),
                                                  CONCAT16((char)((uint)fVar77 >> 0x10),
                                                           CONCAT15((char)((uint)fVar77 >> 8),
                                                                    CONCAT14(SUB41(fVar77,0),fVar36)
                                                                   ))) >> 0x20);
                        fVar38 = fVar83 * fVar45 + fVar64 * fVar37 + fVar84 * fVar42;
                        fVar43 = fVar6 * fVar45 + fVar81 * fVar37 + fVar35 * fVar42;
                        fVar46 = fVar69 * fVar45 + fVar36 * fVar37 + fVar77 * fVar42;
                        fVar47 = fVar45 * 0.0 + fVar67 * fVar37 + fVar42 * 0.0;
                        fVar37 = ABS(fVar83 * fVar68) + ABS(fVar64 * fVar65) + ABS(fVar84 * fVar66);
                        fVar42 = ABS(fVar6 * fVar68) + ABS(fVar81 * fVar65) + ABS(fVar35 * fVar66);
                        fVar69 = ABS(fVar69 * fVar68) + ABS(fVar36 * fVar65) + ABS(fVar77 * fVar66);
                        fVar45 = ABS(fVar68 * 0.0) + ABS(fVar67 * fVar65) + ABS(fVar66 * 0.0);
                        fVar6 = fVar43 - fVar42;
                        fVar65 = fVar47 - fVar45;
                        uStack_128 = CONCAT17((char)((uint)fVar65 >> 0x18),
                                              CONCAT16((char)((uint)fVar65 >> 0x10),
                                                       CONCAT15((char)((uint)fVar65 >> 8),
                                                                CONCAT14(SUB41(fVar65,0),
                                                                         fVar46 - fVar69))));
                        local_130 = (undefined1 *)
                                    CONCAT17((char)((uint)fVar6 >> 0x18),
                                             CONCAT16((char)((uint)fVar6 >> 0x10),
                                                      CONCAT15((char)((uint)fVar6 >> 8),
                                                               CONCAT14(SUB41(fVar6,0),
                                                                        fVar38 - fVar37))));
                        uStack_118 = CONCAT44(fVar47 + fVar45,fVar46 + fVar69);
                        local_120 = CONCAT44(fVar43 + fVar42,fVar38 + fVar37);
                      }
                    }
                    else {
                      fVar6 = *(float *)(lVar29 + 0x20);
                      fVar65 = *(float *)(lVar29 + 0x24);
                      local_130 = *(undefined1 **)(lVar29 + 0x20);
                      fVar38 = *(float *)(lVar29 + 0x28);
                      uStack_128 = *(undefined8 *)(lVar29 + 0x28);
                      fVar37 = (float)*(undefined8 *)(lVar29 + 0x30);
                      fVar42 = (float)((ulong)*(undefined8 *)(lVar29 + 0x30) >> 0x20);
                      fVar45 = (float)*(undefined8 *)(lVar29 + 0x38);
                      if (fVar45 < fVar38 || (fVar37 < fVar6 || fVar42 < fVar65)) {
                        local_120 = *(undefined8 *)(lVar29 + 0x30);
                        uStack_118 = *(undefined8 *)(lVar29 + 0x38);
                      }
                      else {
                        pauVar30 = pauVar16 + 2;
                        auVar72 = *pauVar16;
                        fVar47 = auVar72._0_4_;
                        auVar70._0_4_ = fVar47 + fVar47;
                        fVar66 = auVar72._4_4_;
                        auVar70._4_4_ = fVar66 + fVar66;
                        auVar70._8_4_ = auVar72._8_4_ + auVar72._8_4_;
                        fVar81 = auVar72._12_4_;
                        auVar70._12_4_ = fVar81 + fVar81;
                        auVar78 = NEON_ext(auVar72,auVar72,8,1);
                        auVar71 = NEON_ext(auVar70,auVar70,8,1);
                        auVar72._12_4_ = 0x3f800000;
                        auVar72._0_12_ = *(undefined1 (*) [12])*pauVar30;
                        auVar72 = NEON_frecpe(auVar72,4);
                        fVar36 = auVar78._0_4_ * auVar71._0_4_;
                        auVar78._12_4_ = 0x3f800000;
                        auVar78._0_12_ = *(undefined1 (*) [12])*pauVar30;
                        auVar78 = NEON_frecps(auVar78,auVar72,4);
                        fVar35 = (fVar37 - fVar6) * 0.5;
                        fVar46 = (fVar42 - fVar65) * 0.5;
                        fVar64 = (fVar45 - fVar38) * 0.5;
                        fVar43 = (fVar6 + fVar37) * 0.5;
                        fVar65 = (fVar65 + fVar42) * 0.5;
                        fVar38 = (fVar38 + fVar45) * 0.5;
                        fVar45 = auVar70._8_4_ * fVar66 - auVar70._0_4_ * fVar81;
                        auVar82._0_4_ = auVar72._0_4_ * auVar78._0_4_;
                        auVar82._4_4_ = auVar72._4_4_ * auVar78._4_4_;
                        auVar82._8_4_ = auVar72._8_4_ * auVar78._8_4_;
                        auVar82._12_4_ = auVar72._12_4_ * auVar78._12_4_;
                        auVar71._12_4_ = 0x3f800000;
                        auVar71._0_12_ = *(undefined1 (*) [12])*pauVar30;
                        auVar72 = NEON_frecps(auVar71,auVar82,4);
                        fVar79 = *(float *)(pauVar16[1] + 8);
                        fVar84 = auVar82._0_4_ * auVar72._0_4_;
                        fVar73 = auVar82._4_4_ * auVar72._4_4_;
                        fVar74 = auVar82._8_4_ * auVar72._8_4_;
                        fVar75 = auVar82._12_4_ * auVar72._12_4_;
                        fVar68 = fVar84 * (fVar69 - (auVar70._4_4_ * fVar66 + fVar36));
                        fVar77 = fVar73 * (auVar70._4_4_ * fVar47 - auVar70._8_4_ * fVar81);
                        fVar67 = fVar74 * (auVar70._8_4_ * fVar47 + auVar70._4_4_ * fVar81);
                        fVar83 = fVar75 * fVar45;
                        fVar37 = fVar84 * (auVar70._4_4_ * fVar47 + auVar70._8_4_ * fVar81);
                        fVar42 = fVar73 * (fVar69 - (auVar70._0_4_ * fVar47 + fVar36));
                        fVar45 = fVar74 * fVar45;
                        fVar6 = fVar75 * 0.0;
                        fVar84 = fVar84 * (auVar70._8_4_ * fVar47 - auVar70._4_4_ * fVar81);
                        fVar73 = fVar73 * (auVar70._8_4_ * fVar66 + auVar70._0_4_ * fVar81);
                        fVar74 = fVar74 * (fVar69 - (auVar70._0_4_ * fVar47 + auVar70._4_4_ * fVar66
                                                    ));
                        fVar75 = fVar75 * 0.0;
                        fVar81 = (float)*(undefined8 *)pauVar16[1];
                        fVar76 = (float)((ulong)*(undefined8 *)pauVar16[1] >> 0x20);
                        fVar36 = ABS(fVar84 * fVar64) + ABS(fVar68 * fVar35) + ABS(fVar37 * fVar46);
                        fVar47 = ABS(fVar73 * fVar64) + ABS(fVar77 * fVar35) + ABS(fVar42 * fVar46);
                        fVar66 = ABS(fVar74 * fVar64) + ABS(fVar67 * fVar35) + ABS(fVar45 * fVar46);
                        fVar35 = ABS(fVar75 * fVar64) + ABS(fVar83 * fVar35) + ABS(fVar6 * fVar46);
                        fVar69 = fVar84 * fVar38 + fVar68 * fVar43 + fVar37 * fVar65 +
                                 -(fVar84 * fVar79 + fVar68 * fVar81 + fVar37 * fVar76);
                        fVar37 = fVar73 * fVar38 + fVar77 * fVar43 + fVar42 * fVar65 +
                                 -(fVar73 * fVar79 + fVar77 * fVar81 + fVar42 * fVar76);
                        fVar42 = fVar74 * fVar38 + fVar67 * fVar43 + fVar45 * fVar65 +
                                 -(fVar74 * fVar79 + fVar67 * fVar81 + fVar45 * fVar76);
                        fVar45 = fVar75 * fVar38 + fVar83 * fVar43 + fVar6 * fVar65 +
                                 fVar75 * fVar79 + fVar83 * fVar81 + fVar6 * fVar76;
                        fVar6 = fVar47 + fVar37;
                        fVar65 = fVar35 + fVar45;
                        uStack_128 = CONCAT44(fVar45 - fVar35,fVar42 - fVar66);
                        local_130 = (undefined1 *)CONCAT44(fVar37 - fVar47,fVar69 - fVar36);
                        uStack_118 = CONCAT17((char)((uint)fVar65 >> 0x18),
                                              CONCAT16((char)((uint)fVar65 >> 0x10),
                                                       CONCAT15((char)((uint)fVar65 >> 8),
                                                                CONCAT14(SUB41(fVar65,0),
                                                                         fVar66 + fVar42))));
                        local_120 = CONCAT17((char)((uint)fVar6 >> 0x18),
                                             CONCAT16((char)((uint)fVar6 >> 0x10),
                                                      CONCAT15((char)((uint)fVar6 >> 8),
                                                               CONCAT14(SUB41(fVar6,0),
                                                                        fVar36 + fVar69))));
                      }
                    }
                    puVar19 = *(undefined8 **)(lVar29 + 0x60);
                    uVar26 = (ulong)local_d0 >> 8;
                    local_100 = *puVar19;
                    local_f8 = puVar19[1];
                    local_e0 = puVar19[4];
                    local_c0 = puVar19[8];
                    uStack_b8 = puVar19[9];
                    local_b0 = puVar19[10];
                    uStack_a8 = puVar19[0xb];
                    uStack_168 = 0x5f7ffff05f7ffff0;
                    local_c8 = *(undefined4 *)(puVar19 + 7);
                    local_d0 = CONCAT44(*(undefined4 *)((long)puVar19 + 0x34),
                                        (int)CONCAT71((int7)uVar26,*(undefined1 *)(puVar19 + 6)));
                    local_e8 = CONCAT44(iVar31,uVar28);
                    local_170 = 0x5f7ffff05f7ffff0;
                    auVar10._8_4_ = 0xdf7ffff0;
                    auVar10._0_8_ = 0xdf7ffff0df7ffff0;
                    auVar10._12_4_ = 0xdf7ffff0;
                    uStack_178 = auVar10._8_8_;
                    local_180 = 0xdf7ffff0df7ffff0;
                    local_f0 = puVar32;
                    local_d8 = uVar18;
                    (**(code **)(DAT_0442d3b0 + (ulong)(byte)puVar32[0x18] * 0x200 + 0xe8))
                              (puVar32,*(undefined8 *)(lVar29 + 0x40),&local_160,
                               *(undefined8 *)(lVar29 + 0x50),&local_110,&local_100,plVar27,
                               &local_180);
                  }
                  else {
                    lVar25 = **(long **)(lVar29 + 0x50);
                    lVar24 = **(long **)(lVar29 + 0x60);
                    uVar22 = 0xffffff;
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
                    if (lVar25 == 0) {
                      local_d8 = 0xffffffffffffffff;
                    }
                    else {
                      local_d8 = *(undefined8 *)(lVar25 + 0xb0);
                      uVar22 = *(undefined4 *)(lVar25 + 0x50);
                    }
                    local_d0 = CONCAT44((int)((ulong)local_d0 >> 0x20),uVar22);
                    local_c0 = CONCAT62((int6)(local_c0 >> 0x10),
                                        *(undefined2 *)(*(long *)(lVar29 + 0x48) + 0x10)) &
                               0xffffffff;
                    uStack_b8 = *(ulong *)(*(long *)(lVar29 + 0x48) + 0x14) >> 0x20;
                    if (lVar24 == 0) {
                      uVar22 = 0xffffff;
                      local_b0 = 0xffffffffffffffff;
                    }
                    else {
                      local_b0 = *(undefined8 *)(lVar24 + 0xb0);
                      uVar22 = *(undefined4 *)(lVar24 + 0x50);
                    }
                    uStack_a8 = CONCAT44((int)((ulong)uStack_a8 >> 0x20),uVar22);
                    local_98 = (undefined2)local_110;
                    local_94 = (undefined4)*puVar17;
                    uStack_90 = *puVar17 >> 0x20;
                    local_a0 = uVar28;
                    (**(code **)(*plVar27 + 0x28))(plVar27,&local_100);
                  }
                }
              } while( true );
            }
            goto LAB_02f873d0;
          }
          iVar31 = (int)param_2[1];
          uVar15 = *(uint *)((long)param_2 + 0xc);
          uVar34 = iVar31 + 1;
          if (iVar31 < (int)(uVar15 & 0x3fffffff)) {
            lVar29 = *param_2;
          }
          else {
            lVar29 = *param_2;
            if (0x3ffffffe < iVar31) {
              FUN_032bd0a8(uVar34);
              uVar15 = *(uint *)((long)param_2 + 0xc);
            }
            uVar15 = (uVar15 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar15) {
              uVar15 = 0x3fffffff;
            }
            uVar9 = uVar34;
            if ((int)uVar34 <= (int)uVar15) {
              uVar9 = uVar15;
            }
            lVar29 = FUN_032bd1d4(puVar12,uVar9,2,lVar29,iVar31,(uint *)((long)param_2 + 0xc));
            iVar31 = (int)param_2[1];
            *param_2 = lVar29;
          }
          *(uint *)(param_2 + 1) = uVar34;
          *(ushort *)(lVar29 + (long)iVar31 * 2) = uVar1;
          uVar1 = *(ushort *)(pauVar16[1] + 0xc);
        } while( true );
      }
    }
  }
  return;
}


