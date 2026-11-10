/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f6654c; name: FUN_02f6654c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f6654c(long *param_1,float *param_2,ulong *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  byte bVar18;
  uint uVar19;
  undefined4 uVar20;
  uint5 uVar21;
  undefined8 uVar22;
  float fVar26;
  byte bVar27;
  byte bVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar29;
  ulong uVar30;
  undefined1 auVar31 [12];
  int iVar34;
  int iVar35;
  int iVar38;
  undefined1 auVar32 [16];
  uint uVar36;
  uint uVar37;
  uint uVar39;
  undefined1 auVar33 [16];
  float fVar40;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar46;
  int iVar47;
  float fVar50;
  int iVar51;
  float fVar52;
  int iVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar54;
  int iVar55;
  float fVar56;
  float fVar58;
  float fVar59;
  undefined1 auVar57 [16];
  float fVar60;
  undefined1 auVar61 [16];
  ulong uVar62;
  ulong uVar63;
  float fVar64;
  uint local_1140 [2];
  undefined8 auStack_1138 [255];
  undefined1 local_940 [8];
  ulong auStack_938 [255];
  int local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined5 uStack_c4;
  undefined8 local_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_88 [2];
  undefined4 local_84;
  undefined8 local_80;
  
  uVar9 = _UNK_03889708;
  uVar8 = _DAT_03889700;
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  uVar62 = *param_3;
  local_1140[0] = 2;
  local_940._0_4_ = 0;
  local_140 = 1;
  auVar61._0_8_ = *param_4;
  auVar61._8_8_ = auVar61._0_8_;
  puVar15 = PTR_DAT_043723a0;
  uVar63 = uVar62;
  do {
    while( true ) {
      lVar13 = (long)local_140;
      *(ulong *)((long)auStack_938 + lVar13 * 4) = uVar63;
      *(ulong *)(local_940 + lVar13 * 4) = uVar62;
      uVar19 = local_140 + 3;
      uVar37 = uVar19 & 0xfffffffc;
      fVar26 = (float)uVar62;
      fVar64 = (float)(uVar63 >> 0x20);
      if ((int)uVar37 < 0x81) {
        uVar14 = CONCAT44(uVar19,uVar19) & 0xfffffffcfffffffc;
        uVar30 = uVar62 & 0xffffff00ffffff00;
        uVar36 = (uint)(float)uVar63 & 0xffffff00;
        uVar39 = (uint)fVar64 & 0xffffff00;
        auVar24[0] = (undefined1)uVar14;
        auVar24[1] = (byte)(uVar14 >> 8) | (byte)(uVar30 >> 8);
        auVar24[2] = (byte)(uVar14 >> 0x10) | (byte)(uVar30 >> 0x10);
        auVar24[3] = (byte)(uVar14 >> 0x18) | (byte)(uVar30 >> 0x18);
        auVar24[4] = (undefined1)(uVar14 >> 0x20);
        auVar24[5] = (byte)(uVar14 >> 0x28) | (byte)(uVar30 >> 0x28);
        auVar24[6] = (byte)(uVar14 >> 0x30) | (byte)(uVar30 >> 0x30);
        auVar24[7] = (byte)(uVar14 >> 0x38) | (byte)(uVar30 >> 0x38);
        auVar24[8] = (undefined1)uVar37;
        bVar18 = (byte)(uVar37 >> 8);
        auVar24[9] = bVar18 | (byte)(uVar36 >> 8);
        bVar27 = (byte)(uVar37 >> 0x10);
        auVar24[10] = bVar27 | (byte)(uVar36 >> 0x10);
        bVar28 = (byte)(uVar37 >> 0x18);
        auVar24[0xb] = bVar28 | (byte)(uVar36 >> 0x18);
        auVar24[0xc] = auVar24[8];
        auVar24[0xd] = bVar18 | (byte)(uVar39 >> 8);
        auVar24[0xe] = bVar27 | (byte)(uVar39 >> 0x10);
        auVar24[0xf] = bVar28 | (byte)(uVar39 >> 0x18);
        if (3 < (int)uVar37) {
          auVar49._4_12_ = stack0xfffffffffffff6c4;
          auVar49._0_4_ = local_940._0_4_;
          uVar14 = auVar49._0_8_ & 0xffffff00ffffff00;
          uVar37 = local_940._8_4_ & 0xffffff00;
          uVar36 = local_940._12_4_ & 0xffffff00;
          auVar48[1] = (byte)(uVar14 >> 8) | (byte)((ulong)_DAT_03889d70 >> 8);
          auVar48[0] = (char)_DAT_03889d70;
          auVar48[2] = (byte)(uVar14 >> 0x10) | (byte)((ulong)_DAT_03889d70 >> 0x10);
          auVar48[3] = (byte)(uVar14 >> 0x18) | (byte)((ulong)_DAT_03889d70 >> 0x18);
          auVar48[4] = (char)((ulong)_DAT_03889d70 >> 0x20);
          auVar48[5] = (byte)(uVar14 >> 0x28) | (byte)((ulong)_DAT_03889d70 >> 0x28);
          auVar48[6] = (byte)(uVar14 >> 0x30) | (byte)((ulong)_DAT_03889d70 >> 0x30);
          auVar48[7] = (byte)(uVar14 >> 0x38) | (byte)((ulong)_DAT_03889d70 >> 0x38);
          auVar48[8] = (char)_UNK_03889d78;
          auVar48[9] = (byte)(uVar37 >> 8) | (byte)((ulong)_UNK_03889d78 >> 8);
          auVar48[10] = (byte)(uVar37 >> 0x10) | (byte)((ulong)_UNK_03889d78 >> 0x10);
          auVar48[0xb] = (byte)(uVar37 >> 0x18) | (byte)((ulong)_UNK_03889d78 >> 0x18);
          auVar48[0xc] = (char)((ulong)_UNK_03889d78 >> 0x20);
          auVar48[0xd] = (byte)(uVar36 >> 8) | (byte)((ulong)_UNK_03889d78 >> 0x28);
          auVar48[0xe] = (byte)(uVar36 >> 0x10) | (byte)((ulong)_UNK_03889d78 >> 0x30);
          auVar48[0xf] = (byte)(uVar36 >> 0x18) | (byte)((ulong)_UNK_03889d78 >> 0x38);
          auVar24 = NEON_smin(auVar48,auVar24,4);
          if (7 < uVar19) {
            auVar57._8_8_ = _UNK_03889088;
            auVar57._0_8_ = _DAT_03889080;
            lVar13 = 0x81;
            do {
              auVar49 = *(undefined1 (*) [16])(local_1140 + lVar13 * 4);
              uVar14 = auVar49._0_8_ & 0xffffff00ffffff00;
              uVar37 = auVar49._8_4_ & 0xffffff00;
              uVar36 = auVar49._12_4_ & 0xffffff00;
              auVar42[1] = (byte)(uVar14 >> 8) | auVar57[1];
              auVar42[0] = auVar57[0];
              auVar42[2] = (byte)(uVar14 >> 0x10) | auVar57[2];
              auVar42[3] = (byte)(uVar14 >> 0x18) | auVar57[3];
              auVar42[4] = auVar57[4];
              auVar42[5] = (byte)(uVar14 >> 0x28) | auVar57[5];
              auVar42[6] = (byte)(uVar14 >> 0x30) | auVar57[6];
              auVar42[7] = (byte)(uVar14 >> 0x38) | auVar57[7];
              auVar42[8] = auVar57[8];
              auVar42[9] = (byte)(uVar37 >> 8) | auVar57[9];
              auVar42[10] = (byte)(uVar37 >> 0x10) | auVar57[10];
              auVar42[0xb] = (byte)(uVar37 >> 0x18) | auVar57[0xb];
              auVar42[0xc] = auVar57[0xc];
              auVar42[0xd] = (byte)(uVar36 >> 8) | auVar57[0xd];
              auVar42[0xe] = (byte)(uVar36 >> 0x10) | auVar57[0xe];
              auVar42[0xf] = (byte)(uVar36 >> 0x18) | auVar57[0xf];
              auVar33._0_4_ = auVar57._0_4_ + 4;
              auVar33._4_4_ = auVar57._4_4_ + 4;
              auVar33._8_4_ = auVar57._8_4_ + 4;
              auVar33._12_4_ = auVar57._12_4_ + 4;
              auVar24 = NEON_smin(auVar42,auVar24,4);
              uVar14 = lVar13 - 0x7f;
              lVar13 = lVar13 + 1;
              auVar57 = auVar33;
            } while (uVar14 < uVar19 >> 2);
          }
        }
        uVar19 = NEON_sminv(auVar24,4);
        uVar19 = uVar19 & 0xff;
        if (local_140 <= (int)uVar19) goto LAB_02f66a14;
      }
      else {
        uVar19 = local_140 - 1;
      }
      local_140 = local_140 + -1;
      uVar14 = (ulong)uVar19;
      uVar19 = local_1140[uVar14];
      auVar25._0_4_ = *(undefined4 *)(local_940 + uVar14 * 4);
      *(undefined4 *)(local_940 + uVar14 * 4) = *(undefined4 *)(local_940 + (long)local_140 * 4);
      local_1140[uVar14] = local_1140[local_140];
      if ((uVar19 & 1) != 0) break;
      pauVar1 = (undefined1 (*) [16])
                ((long)param_1 + ((ulong)uVar19 & 0xfffffffe) * 0x40 + *param_1);
      auVar24 = *pauVar1;
      auVar49 = pauVar1[1];
      auVar2._4_4_ = fVar5;
      auVar2._0_4_ = fVar5;
      auVar2._8_4_ = fVar5;
      auVar2._12_4_ = fVar5;
      auVar48 = NEON_fmax(auVar2,auVar24,4);
      auVar3._4_4_ = fVar6;
      auVar3._0_4_ = fVar6;
      auVar3._8_4_ = fVar6;
      auVar3._12_4_ = fVar6;
      auVar57 = NEON_fmax(auVar3,pauVar1[2],4);
      iVar29 = -(uint)(auVar24._0_4_ <= auVar49._0_4_);
      iVar34 = -(uint)(auVar24._4_4_ <= auVar49._4_4_);
      iVar35 = -(uint)(auVar24._8_4_ <= auVar49._8_4_);
      iVar38 = -(uint)(auVar24._12_4_ <= auVar49._12_4_);
      auVar24 = NEON_fmin(auVar48,auVar49,4);
      auVar49 = NEON_fmin(auVar57,pauVar1[3],4);
      fVar40 = auVar24._0_4_ - fVar5;
      fVar43 = auVar24._4_4_ - fVar5;
      fVar44 = auVar24._8_4_ - fVar5;
      fVar45 = auVar24._12_4_ - fVar5;
      fVar46 = auVar49._0_4_ - fVar6;
      fVar50 = auVar49._4_4_ - fVar6;
      fVar52 = auVar49._8_4_ - fVar6;
      fVar54 = auVar49._12_4_ - fVar6;
      auVar4._4_4_ = fVar7;
      auVar4._0_4_ = fVar7;
      auVar4._8_4_ = fVar7;
      auVar4._12_4_ = fVar7;
      auVar24 = NEON_fmax(auVar4,pauVar1[4],4);
      auVar24 = NEON_fmin(auVar24,pauVar1[5],4);
      fVar56 = auVar24._0_4_ - fVar7;
      fVar58 = auVar24._4_4_ - fVar7;
      fVar59 = auVar24._8_4_ - fVar7;
      fVar60 = auVar24._12_4_ - fVar7;
      auVar41._0_4_ = fVar40 * fVar40 + fVar46 * fVar46 + fVar56 * fVar56;
      auVar41._4_4_ = fVar43 * fVar43 + fVar50 * fVar50 + fVar58 * fVar58;
      auVar41._8_4_ = fVar44 * fVar44 + fVar52 * fVar52 + fVar59 * fVar59;
      auVar41._12_4_ = fVar45 * fVar45 + fVar54 * fVar54 + fVar60 * fVar60;
      bVar18 = -(pauVar1[7][0] == '\0');
      iVar47 = -(uint)(auVar41._0_4_ <= fVar26);
      iVar51 = -(uint)(auVar41._4_4_ <= (float)(uVar62 >> 0x20));
      iVar53 = -(uint)(auVar41._8_4_ <= (float)uVar63);
      iVar55 = -(uint)(auVar41._12_4_ <= fVar64);
      uVar21 = CONCAT14(~bVar18,(uint)(~bVar18 & 1)) & 0x1ffffffff;
      iVar29 = CONCAT13((byte)((uint)iVar47 >> 0x18) & (byte)((uint)iVar29 >> 0x18) &
                        (byte)((ulong)uVar8 >> 0x18),
                        CONCAT12((byte)((uint)iVar47 >> 0x10) & (byte)((uint)iVar29 >> 0x10) &
                                 (byte)((ulong)uVar8 >> 0x10),
                                 CONCAT11((byte)((uint)iVar47 >> 8) & (byte)((uint)iVar29 >> 8) &
                                          (byte)((ulong)uVar8 >> 8),
                                          (byte)iVar47 & (byte)iVar29 & (byte)uVar8)));
      auVar31._0_8_ =
           CONCAT17((byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar34 >> 0x18) &
                    (byte)((ulong)uVar8 >> 0x38),
                    CONCAT16((byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar34 >> 0x10) &
                             (byte)((ulong)uVar8 >> 0x30),
                             CONCAT15((byte)((uint)iVar51 >> 8) & (byte)((uint)iVar34 >> 8) &
                                      (byte)((ulong)uVar8 >> 0x28),
                                      CONCAT14((byte)iVar51 & (byte)iVar34 &
                                               (byte)((ulong)uVar8 >> 0x20),iVar29))));
      auVar31[8] = (byte)iVar53 & (byte)iVar35 & (byte)uVar9;
      auVar31[9] = (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar35 >> 8) & (byte)((ulong)uVar9 >> 8)
      ;
      auVar31[10] = (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar35 >> 0x10) &
                    (byte)((ulong)uVar9 >> 0x10);
      auVar31[0xb] = (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar35 >> 0x18) &
                     (byte)((ulong)uVar9 >> 0x18);
      auVar32[0xc] = (byte)iVar55 & (byte)iVar38 & (byte)((ulong)uVar9 >> 0x20);
      auVar32._0_12_ = auVar31;
      auVar32[0xd] = (byte)((uint)iVar55 >> 8) & (byte)((uint)iVar38 >> 8) &
                     (byte)((ulong)uVar9 >> 0x28);
      auVar32[0xe] = (byte)((uint)iVar55 >> 0x10) & (byte)((uint)iVar38 >> 0x10) &
                     (byte)((ulong)uVar9 >> 0x30);
      auVar32[0xf] = (byte)((uint)iVar55 >> 0x18) & (byte)((uint)iVar38 >> 0x18) &
                     (byte)((ulong)uVar9 >> 0x38);
      uVar14 = (ulong)(uint)(iVar29 + (int)((ulong)auVar31._0_8_ >> 0x20) +
                            auVar31._8_4_ + auVar32._12_4_);
      auVar24 = a64_TBL(ZEXT816(0),pauVar1[6],*(undefined1 (*) [16])(&DAT_03aae120 + uVar14 * 0x10))
      ;
      iVar29 = *(int *)(&DAT_03aadfe0 + uVar14 * 4);
      iVar34 = auVar24._0_4_ << 1;
      iVar35 = auVar24._4_4_ << 1;
      iVar38 = auVar24._8_4_ << 1;
      iVar47 = auVar24._12_4_ << 1;
      auVar23._0_8_ =
           CONCAT17((char)((uint)iVar35 >> 0x18),
                    CONCAT16((char)((uint)iVar35 >> 0x10),
                             CONCAT15((char)((uint)iVar35 >> 8),
                                      CONCAT14((byte)(uVar21 >> 0x20) | (byte)iVar35,
                                               CONCAT13((char)((uint)iVar34 >> 0x18),
                                                        CONCAT12((char)((uint)iVar34 >> 0x10),
                                                                 CONCAT11((char)((uint)iVar34 >> 8),
                                                                          (byte)uVar21 |
                                                                          (byte)iVar34)))))));
      auVar23[8] = ~bVar18 & 1 | (byte)iVar38;
      auVar23[9] = (char)((uint)iVar38 >> 8);
      auVar23[10] = (char)((uint)iVar38 >> 0x10);
      auVar23[0xb] = (char)((uint)iVar38 >> 0x18);
      auVar23[0xc] = ~bVar18 & 1 | (byte)iVar47;
      auVar23[0xd] = (char)((uint)iVar47 >> 8);
      auVar23[0xe] = (char)((uint)iVar47 >> 0x10);
      auVar23[0xf] = (char)((uint)iVar47 >> 0x18);
      auVar24 = a64_TBL(ZEXT816(0),auVar41,*(undefined1 (*) [16])(&DAT_03aae120 + uVar14 * 0x10));
      auVar49 = NEON_ext(auVar23,auVar23,8,1);
      auVar61 = NEON_smin(auVar61,auVar24 ^ (auVar24 ^ auVar61) &
                                            *(undefined1 (*) [16])
                                             (puVar15 +
                                             (ulong)(0xf >> (ulong)(4U - iVar29 & 0x1f)) * 0x10),4);
      *(undefined8 *)(local_1140 + local_140) = auVar23._0_8_;
      *(long *)((long)auStack_1138 + (long)local_140 * 4) = auVar49._0_8_;
      lVar13 = (long)local_140;
      *(long *)((long)auStack_938 + lVar13 * 4) = auVar24._8_8_;
      *(long *)(local_940 + lVar13 * 4) = auVar24._0_8_;
      local_140 = local_140 + iVar29;
      if (local_140 == 0) goto LAB_02f66a14;
    }
    lVar16 = param_5[1];
    uVar63 = (ulong)(uVar19 >> 1);
    lVar17 = lVar16 + uVar63 * 0xc0;
    lVar13 = param_5[0x10];
    iVar29 = *(int *)(lVar13 + 0xc);
    uVar62 = CONCAT44(fVar26,fVar26);
    if ((~*(uint *)(lVar17 + 0x50) & 0xffffff) != 0) {
      puVar11 = (undefined8 *)param_5[2];
      lVar12 = puVar11[7];
      if ((lVar12 == 0) || (*(uint *)(lVar17 + 0x50) != *(uint *)(lVar12 + 0x50))) {
        plVar10 = (long *)puVar11[1];
        if (plVar10 == (long *)0x0) {
LAB_02f668c8:
          lVar16 = lVar16 + uVar63 * 0xc0;
          auVar24 = NEON_fmov(0x3f800000,4);
          local_e8 = *(undefined8 *)(lVar16 + 0x78);
          local_88[0] = *(undefined2 *)(lVar16 + 0x8a);
          local_84 = *(undefined4 *)(lVar16 + 0x8c);
          local_80 = *(undefined8 *)(lVar16 + 0x98);
          local_d8 = 0xffffffff;
          uStack_e0 = 0;
          uStack_c4 = 0;
          local_d4 = 0;
          uStack_c8 = 0;
          local_bc = 0;
          uStack_a8 = auVar24._8_8_;
          local_b0 = auVar24._0_8_;
          local_a0 = 0;
          uStack_98 = 0;
          local_130 = *puVar11;
          local_120 = puVar11[2];
          local_118 = puVar11[3];
          local_110 = puVar11[4];
          local_108 = puVar11[5];
          local_100 = puVar11[6];
          local_f8 = puVar11[7];
          local_128 = *(undefined8 *)(puVar11[1] + 0x30);
          local_f0 = lVar17;
          uStack_d0 = lVar17;
          FUN_02ffa204(*param_5,&local_130,param_5 + 4,local_e8,local_88,&local_f0,lVar13);
          uVar22 = NEON_fmax(*(undefined8 *)(param_5[0x10] + 0x10),0,4);
          fVar26 = (float)((ulong)uVar22 >> 0x20);
          uVar62 = CONCAT44(fVar26 * fVar26,(float)uVar22 * (float)uVar22);
        }
        else {
          if (lVar12 == 0) {
LAB_02f66860:
            uVar14 = (**(code **)(*(long *)puVar11[1] + 0x30))
                               ((long *)puVar11[1],5,puVar11 + 2,lVar17);
            puVar15 = PTR_DAT_043723a0;
            if ((uVar14 & 1) == 0) goto LAB_02f667e8;
            puVar11 = (undefined8 *)param_5[2];
            lVar13 = param_5[0x10];
            goto LAB_02f668c8;
          }
          uVar14 = (**(code **)(*plVar10 + 0x38))
                             (plVar10,5,*(undefined8 *)(lVar12 + 0xb0),
                              *(undefined8 *)(lVar16 + uVar63 * 0xc0 + 0xb0));
          if ((uVar14 & 1) != 0) {
            puVar11 = (undefined8 *)param_5[2];
            goto LAB_02f66860;
          }
        }
        puVar15 = PTR_DAT_043723a0;
      }
    }
LAB_02f667e8:
    if (iVar29 == *(int *)(param_5[0x10] + 0xc)) {
      auVar25._4_4_ = auVar25._0_4_;
      auVar25._8_4_ = auVar25._0_4_;
      auVar25._12_4_ = auVar25._0_4_;
      auVar61 = NEON_smin(auVar61,auVar25,4);
    }
    uVar63 = uVar62;
  } while (local_140 != 0);
LAB_02f66a14:
  uVar20 = NEON_fminnmv(auVar61,4);
  *param_4 = CONCAT44(uVar20,uVar20);
  return;
}


