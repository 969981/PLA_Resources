/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bb464; name: FUN_031bb464
 */


undefined8 FUN_031bb464(long param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  byte bVar6;
  undefined1 auVar7 [12];
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 uVar15;
  char cVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar32;
  ulong uVar30;
  undefined1 auVar31 [16];
  int iVar33;
  float fVar34;
  int iVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  ulong uVar48;
  undefined1 *puVar49;
  float fStack_dc;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 local_80;
  undefined8 local_78;
  
  if (((param_3 < 0) || (*(int *)(param_1 + 0x24) <= param_3)) ||
     ((*(byte *)(*(long *)(param_1 + 0x40) + (long)param_3 * 0x80 + 0x10) >> 4 & 1) == 0)) {
    return 0;
  }
  lVar13 = (long)*(int *)(param_1 + 0x80) + -1;
  lVar14 = (long)*(int *)(param_1 + 0x70);
  lVar8 = *(long *)(param_1 + 0x78);
  if (*(int *)(lVar8 + lVar14 * 0x30) != *(int *)(lVar8 + lVar13 * 0x30)) {
    return 1;
  }
  lVar12 = lVar8 + lVar14 * 0x30;
  lVar10 = lVar8 + lVar13 * 0x30;
  iVar33 = *(int *)(param_1 + 0x74);
  fVar38 = (float)*(undefined8 *)(lVar12 + 0x10) - *(float *)(lVar10 + 0x10);
  fVar37 = (float)((ulong)*(undefined8 *)(lVar12 + 0x10) >> 0x20) - *(float *)(lVar10 + 0x14);
  fVar24 = (float)*(undefined8 *)(lVar12 + 0x18) - *(float *)(lVar10 + 0x18);
  fVar26 = (float)((ulong)*(undefined8 *)(lVar12 + 0x18) >> 0x20) - *(float *)(lVar10 + 0x1c);
  cVar16 = *(char *)(lVar12 + 8);
  lVar10 = (long)iVar33;
  fStack_dc = (float)(CONCAT17((char)((uint)fVar37 >> 0x18),
                               CONCAT16((char)((uint)fVar37 >> 0x10),
                                        CONCAT15((char)((uint)fVar37 >> 8),
                                                 CONCAT14(SUB41(fVar37,0),fVar38)))) >> 0x20);
  if (lVar10 + 1 < (long)*(int *)(param_1 + 0x80)) {
    lVar12 = lVar10 * 0x30;
    lVar10 = lVar10 + 2;
    while( true ) {
      puVar11 = (undefined8 *)(lVar8 + lVar12);
      local_78 = puVar11[5];
      fStack_88 = (float)puVar11[3];
      fStack_84 = (float)((ulong)puVar11[3] >> 0x20);
      local_98 = puVar11[1];
      local_a0 = *puVar11;
      local_80 = puVar11[4];
      local_90 = (float)puVar11[2];
      fStack_8c = (float)((ulong)puVar11[2] >> 0x20);
      local_a8 = puVar11[0xb];
      uStack_b8 = puVar11[9];
      local_c8 = puVar11[7];
      local_d0 = puVar11[6];
      local_c0 = puVar11[8];
      local_b0 = puVar11[10];
      FUN_031bb3f8(param_1,&local_a0,&local_d0);
      fVar37 = fVar38 * ((float)local_c0 - local_90);
      fVar28 = fStack_dc * ((float)((ulong)local_c0 >> 0x20) - fStack_8c);
      uVar15 = (undefined1)((uint)fVar28 >> 8);
      uVar17 = (undefined1)((uint)fVar28 >> 0x10);
      uVar18 = (undefined1)((uint)fVar28 >> 0x18);
      fVar25 = fVar24 * ((float)uStack_b8 - fStack_88);
      fVar27 = fVar26 * ((float)((ulong)uStack_b8 >> 0x20) - fStack_84);
      auVar31[4] = SUB41(fVar28,0);
      auVar31._0_4_ = fVar37;
      auVar31[5] = uVar15;
      auVar31[6] = uVar17;
      auVar31[7] = uVar18;
      auVar31._8_4_ = fVar25;
      auVar31._12_4_ = fVar27;
      auVar3[4] = SUB41(fVar28,0);
      auVar3._0_4_ = fVar37;
      auVar3[5] = uVar15;
      auVar3[6] = uVar17;
      auVar3[7] = uVar18;
      auVar3._8_4_ = fVar25;
      auVar3._12_4_ = fVar27;
      auVar31 = NEON_ext(auVar31,auVar3,8,1);
      if (fVar37 + fVar28 + auVar31._0_4_ < 0.0) break;
      FUN_031bb9e0(param_1,&local_a0,&local_d0);
      if (*(int *)(param_1 + 0x80) <= lVar10) {
        iVar33 = -1;
        break;
      }
      lVar8 = *(long *)(param_1 + 0x78);
      iVar33 = iVar33 + 1;
      lVar12 = lVar12 + 0x30;
      lVar10 = lVar10 + 1;
    }
  }
  else {
    iVar33 = -1;
  }
  iVar35 = *(int *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0x70) < iVar35) {
    lVar8 = (long)iVar35 + -1;
    lVar10 = (long)iVar35 * 0x30;
    do {
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar10);
      local_a0 = *puVar11;
      local_98 = puVar11[1];
      local_80 = puVar11[4];
      local_78 = puVar11[5];
      local_90 = (float)puVar11[2];
      fStack_8c = (float)((ulong)puVar11[2] >> 0x20);
      fStack_88 = (float)puVar11[3];
      fStack_84 = (float)((ulong)puVar11[3] >> 0x20);
      local_a8 = puVar11[-1];
      uStack_b8 = puVar11[-3];
      local_c8 = puVar11[-5];
      local_d0 = puVar11[-6];
      local_c0 = puVar11[-4];
      local_b0 = puVar11[-2];
      FUN_031bb3f8(param_1,&local_a0,&local_d0);
      fVar37 = fVar38 * ((float)local_c0 - local_90);
      fVar28 = fStack_dc * ((float)((ulong)local_c0 >> 0x20) - fStack_8c);
      uVar15 = (undefined1)((uint)fVar28 >> 8);
      uVar17 = (undefined1)((uint)fVar28 >> 0x10);
      uVar18 = (undefined1)((uint)fVar28 >> 0x18);
      fVar25 = fVar24 * ((float)uStack_b8 - fStack_88);
      fVar27 = fVar26 * ((float)((ulong)uStack_b8 >> 0x20) - fStack_84);
      auVar4[4] = SUB41(fVar28,0);
      auVar4._0_4_ = fVar37;
      auVar4[5] = uVar15;
      auVar4[6] = uVar17;
      auVar4[7] = uVar18;
      auVar4._8_4_ = fVar25;
      auVar4._12_4_ = fVar27;
      auVar5[4] = SUB41(fVar28,0);
      auVar5._0_4_ = fVar37;
      auVar5[5] = uVar15;
      auVar5[6] = uVar17;
      auVar5[7] = uVar18;
      auVar5._8_4_ = fVar25;
      auVar5._12_4_ = fVar27;
      auVar31 = NEON_ext(auVar4,auVar5,8,1);
      if (0.0 <= fVar37 + fVar28 + auVar31._0_4_) goto LAB_031bb704;
      FUN_031bb9e0(param_1,&local_a0,&local_d0);
      lVar8 = lVar8 + -1;
      iVar35 = iVar35 + -1;
      lVar10 = lVar10 + -0x30;
    } while (*(int *)(param_1 + 0x70) <= lVar8);
    iVar35 = -1;
  }
  else {
    iVar35 = -1;
  }
LAB_031bb704:
  iVar2 = *(int *)(param_1 + 0x74);
  uVar48 = NEON_fmov(0x3f800000,4);
  if (iVar35 == iVar2) {
    bVar6 = 0;
  }
  else {
    if (iVar33 != iVar2) {
      lVar8 = *(long *)(param_1 + 0x78);
      puVar11 = (undefined8 *)(lVar8 + lVar14 * 0x30);
      local_98 = puVar11[1];
      lVar13 = lVar8 + lVar13 * 0x30;
      auVar7 = *(undefined1 (*) [12])(puVar11 + 2);
      local_80 = puVar11[4];
      local_78 = puVar11[5];
      fStack_84 = (float)((ulong)puVar11[3] >> 0x20);
      uVar39 = *(undefined8 *)(lVar13 + 0x18);
      uVar41 = *(undefined8 *)(lVar13 + 0x10);
      local_90 = auVar7._0_4_ + ((float)uVar41 - auVar7._0_4_) * 0.5;
      fVar38 = auVar7._4_4_ + ((float)((ulong)uVar41 >> 0x20) - auVar7._4_4_) * 0.5;
      fStack_88 = auVar7._8_4_ + ((float)uVar39 - auVar7._8_4_) * 0.5;
      fStack_84 = fStack_84 + ((float)((ulong)uVar39 >> 0x20) - fStack_84) * 0.5;
      local_a0._5_3_ = (undefined3)((ulong)*puVar11 >> 0x28);
      local_a0._0_4_ = (undefined4)*puVar11;
      local_a0._0_5_ = CONCAT14(0xff,(undefined4)local_a0);
      fStack_8c = (float)(CONCAT17((char)((uint)fVar38 >> 0x18),
                                   CONCAT16((char)((uint)fVar38 >> 0x10),
                                            CONCAT15((char)((uint)fVar38 >> 8),
                                                     CONCAT14(SUB41(fVar38,0),local_90)))) >> 0x20);
      FUN_031bb9e0(param_1,lVar8 + (long)iVar2 * 0x30,&local_a0);
      puVar49 = &DAT_3f0000003f000000;
      goto LAB_031bb860;
    }
    bVar6 = 1;
    iVar33 = iVar35;
  }
  if (iVar33 == -1) {
    iVar33 = -(uint)bVar6;
    puVar49 = (undefined1 *)
              (uVar48 & CONCAT17((char)((uint)iVar33 >> 0x18),
                                 CONCAT16((char)((uint)iVar33 >> 0x10),
                                          CONCAT15((char)((uint)iVar33 >> 8),
                                                   CONCAT14((char)iVar33,iVar33)))));
  }
  else {
    puVar11 = (undefined8 *)(*(long *)(param_1 + 0x78) + (long)iVar33 * 0x30);
    lVar8 = *(long *)(param_1 + 0x78) + lVar13 * 0x30;
    local_78 = puVar11[5];
    local_98 = puVar11[1];
    local_a0._4_1_ = (char)((ulong)*puVar11 >> 0x20);
    local_80 = puVar11[4];
    fStack_88 = (float)puVar11[3];
    fStack_84 = (float)((ulong)puVar11[3] >> 0x20);
    uVar41 = NEON_fmov(0xbf800000,4);
    uVar15 = (undefined1)uVar41;
    uVar17 = (undefined1)((ulong)uVar41 >> 8);
    uVar18 = (undefined1)((ulong)uVar41 >> 0x10);
    uVar19 = (undefined1)((ulong)uVar41 >> 0x18);
    uVar20 = (undefined1)((ulong)uVar41 >> 0x20);
    uVar21 = (undefined1)((ulong)uVar41 >> 0x28);
    uVar22 = (undefined1)((ulong)uVar41 >> 0x30);
    uVar23 = (undefined1)((ulong)uVar41 >> 0x38);
    local_90 = (float)puVar11[2];
    fStack_8c = (float)((ulong)puVar11[2] >> 0x20);
    uVar30 = 0;
    if (local_a0._4_1_ == '\0') {
      uVar30 = uVar48;
    }
    if (local_a0._4_1_ != '\x01') {
      uVar15 = (undefined1)uVar30;
      uVar17 = (undefined1)(uVar30 >> 8);
      uVar18 = (undefined1)(uVar30 >> 0x10);
      uVar19 = (undefined1)(uVar30 >> 0x18);
      uVar20 = (undefined1)(uVar30 >> 0x20);
      uVar21 = (undefined1)(uVar30 >> 0x28);
      uVar22 = (undefined1)(uVar30 >> 0x30);
      uVar23 = (undefined1)(uVar30 >> 0x38);
    }
    fVar29 = fVar24 * fVar24 + fVar38 * fVar38 + fStack_dc * fStack_dc;
    fVar32 = fVar24 * fVar24 + fVar38 * fVar38 + fStack_dc * fStack_dc;
    uVar41 = CONCAT44(fVar32,fVar29);
    uVar39 = NEON_frsqrte(uVar41,4);
    fVar37 = (float)uVar39;
    fVar25 = (float)((ulong)uVar39 >> 0x20);
    uVar39 = NEON_frsqrts(uVar41,CONCAT44(fVar25 * fVar25,fVar37 * fVar37),4);
    fVar37 = fVar37 * (float)uVar39;
    fVar25 = fVar25 * (float)((ulong)uVar39 >> 0x20);
    uVar41 = NEON_frsqrts(uVar41,CONCAT44(fVar25 * fVar25,fVar37 * fVar37),4);
    iVar33 = -(uint)(fVar29 <= 0.0);
    iVar35 = -(uint)(fVar32 <= 0.0);
    fVar37 = (float)uVar41 * fVar37;
    fVar25 = (float)((ulong)uVar41 >> 0x20) * fVar25;
    fVar34 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                             CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                      CONCAT11((byte)((uint)fVar37 >> 8) &
                                               ~(byte)((uint)iVar33 >> 8),
                                               SUB41(fVar37,0) & ~(byte)iVar33)));
    fVar37 = (float)CONCAT13(uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar15))) *
             (float)*(undefined8 *)(param_1 + 0x18);
    fVar28 = (float)CONCAT13(uVar23,CONCAT12(uVar22,CONCAT11(uVar21,uVar20))) *
             (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
    fVar36 = (float)(CONCAT17((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar35 >> 0x18),
                              CONCAT16((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar35 >> 0x10),
                                       CONCAT15((byte)((uint)fVar25 >> 8) &
                                                ~(byte)((uint)iVar35 >> 8),
                                                CONCAT14(SUB41(fVar25,0) & ~(byte)iVar35,fVar34))))
                    >> 0x20);
    uVar41 = CONCAT44(fVar32 * fVar36,fVar29 * fVar34);
    uVar44 = *(undefined8 *)(lVar8 + 0x18);
    uVar39 = *(undefined8 *)(lVar8 + 0x10);
    fVar38 = fVar38 * fVar34;
    fStack_dc = fStack_dc * fVar36;
    fVar24 = fVar24 * fVar34;
    local_90 = local_90 + fVar37 * fVar38;
    fVar25 = fStack_8c + fVar28 * fStack_dc;
    fStack_88 = fStack_88 + fVar37 * fVar24;
    fStack_84 = fStack_84 +
                (float)(CONCAT17((char)((uint)fVar28 >> 0x18),
                                 CONCAT16((char)((uint)fVar28 >> 0x10),
                                          CONCAT15((char)((uint)fVar28 >> 8),
                                                   CONCAT14(SUB41(fVar28,0),fVar37)))) >> 0x20) *
                fVar26 * fVar36;
    uVar46 = NEON_frecpe(uVar41,4);
    fStack_8c = (float)(CONCAT17((char)((uint)fVar25 >> 0x18),
                                 CONCAT16((char)((uint)fVar25 >> 0x10),
                                          CONCAT15((char)((uint)fVar25 >> 8),
                                                   CONCAT14(SUB41(fVar25,0),local_90)))) >> 0x20);
    fVar40 = (float)uVar39;
    fVar42 = (float)((ulong)uVar39 >> 0x20);
    fVar43 = (float)uVar44;
    uVar39 = NEON_frecps(uVar41,uVar46,4);
    fVar37 = fVar38 * (local_90 - fVar40);
    fVar25 = fStack_dc * (fVar25 - fVar42);
    fVar27 = fVar24 * (fStack_88 - fVar43);
    fVar45 = (float)uVar46 * (float)uVar39;
    fVar47 = (float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar39 >> 0x20);
    local_b0 = param_2[4];
    local_a8 = param_2[5];
    fVar28 = fVar37 + fVar25 + fVar27;
    fVar27 = fVar37 + fVar25 + fVar27;
    iVar33 = -(uint)(fVar29 * fVar34 == 0.0);
    iVar35 = -(uint)(fVar32 * fVar36 == 0.0);
    uVar41 = NEON_frecps(uVar41,CONCAT44(fVar47,fVar45),4);
    uVar30 = CONCAT44(fVar47 * (float)((ulong)uVar41 >> 0x20),fVar45 * (float)uVar41) &
             CONCAT17(~(byte)((uint)iVar35 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar35 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar35 >> 8),
                                        CONCAT14(~(byte)iVar35,
                                                 CONCAT13(~(byte)((uint)iVar33 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar33 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar33 >>
                                                                                   8),~(byte)iVar33)
                                                                  ))))));
    puVar49 = (undefined1 *)CONCAT44(fVar27 * (float)(uVar30 >> 0x20),fVar28 * (float)uVar30);
    local_c8 = param_2[1];
    local_d0 = *param_2;
    fVar42 = fVar42 + fStack_dc * fVar27;
    uStack_b8 = CONCAT44((float)((ulong)uVar44 >> 0x20) +
                         fVar26 * fVar36 *
                         (float)(CONCAT17((char)((uint)fVar27 >> 0x18),
                                          CONCAT16((char)((uint)fVar27 >> 0x10),
                                                   CONCAT15((char)((uint)fVar27 >> 8),
                                                            CONCAT14(SUB41(fVar27,0),fVar28)))) >>
                                0x20),fVar43 + fVar24 * fVar28);
    local_c0 = CONCAT17((char)((uint)fVar42 >> 0x18),
                        CONCAT16((char)((uint)fVar42 >> 0x10),
                                 CONCAT15((char)((uint)fVar42 >> 8),
                                          CONCAT14(SUB41(fVar42,0),fVar40 + fVar38 * fVar28))));
    local_a0 = *puVar11;
    FUN_031bb9e0(param_1,&local_a0,&local_d0);
  }
LAB_031bb860:
  *(undefined4 *)(param_1 + 0x80) = 0;
  cVar16 = -(cVar16 == '\0');
  uVar30 = CONCAT44((float)(uVar48 >> 0x20) - (float)((ulong)puVar49 >> 0x20),
                    (float)uVar48 - SUB84(puVar49,0));
  uVar41 = NEON_fmin(uVar30 ^ (uVar30 ^ (ulong)puVar49) &
                              CONCAT17(cVar16,CONCAT16(cVar16,CONCAT15(cVar16,CONCAT14(cVar16,
                                                  CONCAT13(cVar16,CONCAT12(cVar16,CONCAT11(cVar16,
                                                  cVar16))))))),uVar48,4);
  lVar8 = *(long *)(param_1 + 0x40) + (long)param_3 * 0x80;
  uVar41 = NEON_fmax(uVar41,0,4);
  *(undefined8 *)(param_1 + 0x70) = 0;
  uVar1 = *(undefined4 *)param_2;
  fVar38 = (float)*(undefined8 *)(lVar8 + 0x60);
  fVar37 = (float)((ulong)*(undefined8 *)(lVar8 + 0x60) >> 0x20);
  fVar24 = (float)*(undefined8 *)(lVar8 + 0x68);
  fVar28 = (float)((ulong)*(undefined8 *)(lVar8 + 0x68) >> 0x20);
  lVar13 = *(long *)(param_1 + 0x78);
  fVar26 = (float)((ulong)uVar41 >> 0x20);
  fVar38 = fVar38 + (*(float *)(lVar8 + 0x50) - fVar38) * (float)uVar41;
  fVar37 = fVar37 + (*(float *)(lVar8 + 0x54) - fVar37) * fVar26;
  uVar15 = (undefined1)((uint)fVar37 >> 8);
  uVar17 = (undefined1)((uint)fVar37 >> 0x10);
  uVar18 = (undefined1)((uint)fVar37 >> 0x18);
  fVar24 = fVar24 + (*(float *)(lVar8 + 0x58) - fVar24) * (float)uVar41;
  fVar28 = fVar28 + (*(float *)(lVar8 + 0x5c) - fVar28) * fVar26;
  if ((*(uint *)(param_1 + 0x84) & 0x3fffffff) == 0) {
    lVar13 = FUN_031bd3f4(PTR_PTR_0434a090,1,lVar13,0);
    *(long *)(param_1 + 0x78) = lVar13;
    lVar8 = (long)*(int *)(param_1 + 0x80);
  }
  else {
    lVar8 = 0;
  }
  puVar9 = (undefined4 *)(lVar13 + lVar8 * 0x30);
  *(undefined1 *)(puVar9 + 1) = 0xff;
  *puVar9 = uVar1;
  *(uint *)((long)puVar9 + 5) = (uint)(fVar28 < 0.0) << 8 | 0x10000;
  uVar1 = (undefined4)local_a0;
  puVar9[3] = local_a0._3_4_;
  *(undefined4 *)((long)puVar9 + 9) = uVar1;
  *(ulong *)(puVar9 + 6) = CONCAT44(fVar28,fVar24);
  *(ulong *)(puVar9 + 4) =
       CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar15,CONCAT14(SUB41(fVar37,0),fVar38))));
  *(ulong *)(puVar9 + 10) = CONCAT44(fVar28,fVar24);
  *(ulong *)(puVar9 + 8) =
       CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar15,CONCAT14(SUB41(fVar37,0),fVar38))));
  *(undefined4 *)(param_1 + 0x80) = 1;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return 1;
}


