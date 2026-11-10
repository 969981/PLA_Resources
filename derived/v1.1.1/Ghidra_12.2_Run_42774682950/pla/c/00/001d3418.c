/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d3418; name: FUN_001d3418
 */


undefined4 FUN_001d3418(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [12];
  char *pcVar2;
  short *psVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  float *pfVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined *puVar10;
  ulong uVar11;
  char cVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  undefined8 *puVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  float fVar26;
  double dVar24;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  int iVar37;
  float fVar41;
  int iVar42;
  double dVar38;
  float fVar40;
  float fVar43;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined4 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 uVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  int iVar58;
  float local_b0;
  float fStack_ac;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1ab) = 0;
  *(undefined4 *)(param_1 + 0x9bd) = 8;
  puVar10 = PTR_DAT_04372370;
  uStack_78 = *(undefined8 *)(PTR_DAT_04372370 + 0x248);
  local_80 = *(undefined8 *)*(undefined1 (*) [16])(PTR_DAT_04372370 + 0x240);
  auVar56 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x240);
  auVar32._0_8_ = CONCAT44(-(float)((ulong)local_80 >> 0x20),-(float)local_80);
  auVar32._8_4_ = -(float)uStack_78;
  auVar32._12_4_ = -(float)((ulong)uStack_78 >> 0x20);
  uStack_70 = auVar32._0_8_;
  uStack_68 = auVar32._8_8_;
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1[1],&local_80);
  fVar35 = (float)uStack_70 - (float)local_80;
  fVar25 = (float)((ulong)uStack_70 >> 0x20);
  fVar40 = fVar25 - local_80._4_4_;
  fVar43 = (float)uStack_68 - (float)uStack_78;
  fVar22 = (float)uStack_70 + (float)local_80;
  fVar25 = fVar25 + local_80._4_4_;
  fVar27 = (float)uStack_68 + (float)uStack_78;
  auVar53 = *(undefined1 (*) [16])(puVar10 + 0x150);
  auVar33 = NEON_ext(auVar53,auVar53,8,1);
  auVar39 = NEON_ext(auVar33,auVar53,8,1);
  fStack_98 = auVar56._8_4_;
  fStack_94 = auVar56._12_4_;
  local_a0 = auVar56._0_4_;
  fStack_9c = auVar56._4_4_;
  local_90 = auVar32._0_8_;
  uStack_88 = auVar32._8_8_;
  (**(code **)(*(long *)*param_1 + 8))((long *)*param_1,param_1[2],&local_a0);
  fVar36 = (float)local_90 - local_a0;
  fVar26 = (float)((ulong)local_90 >> 0x20);
  fVar41 = fVar26 - fStack_9c;
  fVar44 = (float)uStack_88 - fStack_98;
  auVar32 = *(undefined1 (*) [16])(param_1 + 4);
  auVar34 = *(undefined1 (*) [16])(param_1 + 8);
  auVar52 = NEON_ext(auVar32,auVar32,8,1);
  fVar23 = auVar39._0_4_ * ((float)local_90 + local_a0) - (float)param_1[10];
  fVar26 = auVar39._4_4_ * (fVar26 + fStack_9c) - (float)((ulong)param_1[10] >> 0x20);
  fVar28 = auVar39._8_4_ * ((float)uStack_88 + fStack_98) - (float)param_1[0xb];
  pauVar1 = (undefined1 (*) [12])(param_1 + 6);
  uVar48 = (undefined4)((ulong)param_1[7] >> 0x20);
  auVar56._12_4_ = uVar48;
  auVar56._0_12_ = *pauVar1;
  auVar33._12_4_ = uVar48;
  auVar33._0_12_ = *pauVar1;
  auVar56 = NEON_ext(auVar56,auVar33,8,1);
  fVar36 = fVar36 * fVar36;
  fVar41 = fVar41 * fVar41;
  fVar44 = fVar44 * fVar44;
  auVar33 = NEON_ext(auVar34,auVar34,8,1);
  fVar35 = fVar35 * fVar35;
  fVar40 = fVar40 * fVar40;
  fVar43 = fVar43 * fVar43;
  fVar30 = fVar43 + fVar35 + fVar40;
  fVar43 = fVar43 + fVar35 + fVar40;
  uVar49 = NEON_frsqrte(CONCAT44(fVar43,fVar30),4);
  fVar35 = (float)uVar49;
  fVar40 = (float)((ulong)uVar49 >> 0x20);
  uVar49 = NEON_frsqrts(CONCAT44(fVar43,fVar30),CONCAT44(fVar40 * fVar40,fVar35 * fVar35),4);
  iVar37 = -(uint)(fVar30 <= 0.0);
  iVar19 = -(uint)(fVar43 <= 0.0);
  fVar30 = fVar30 * fVar35 * (float)uVar49;
  fVar43 = fVar43 * fVar40 * (float)((ulong)uVar49 >> 0x20);
  fVar30 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                           CONCAT12((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                                    CONCAT11((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar37 >> 8),
                                             SUB41(fVar30,0) & ~(byte)iVar37)));
  fVar35 = fVar44 + fVar36 + fVar41;
  fVar44 = fVar44 + fVar36 + fVar41;
  uVar49 = NEON_frsqrte(CONCAT44(fVar44,fVar35),4);
  fVar40 = (float)uVar49;
  fVar36 = (float)((ulong)uVar49 >> 0x20);
  uVar49 = NEON_frsqrts(CONCAT44(fVar44,fVar35),CONCAT44(fVar36 * fVar36,fVar40 * fVar40),4);
  iVar37 = -(uint)(fVar35 <= 0.0);
  iVar58 = -(uint)(fVar44 <= 0.0);
  fVar35 = fVar35 * fVar40 * (float)uVar49;
  fVar44 = fVar44 * fVar36 * (float)((ulong)uVar49 >> 0x20);
  fVar40 = (float)CONCAT13((byte)((uint)fVar35 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                           CONCAT12((byte)((uint)fVar35 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                                    CONCAT11((byte)((uint)fVar35 >> 8) & ~(byte)((uint)iVar37 >> 8),
                                             SUB41(fVar35,0) & ~(byte)iVar37)));
  local_b0 = auVar53._0_4_;
  fStack_ac = auVar53._4_4_;
  fVar22 = fVar22 * auVar39._0_4_ -
           (auVar52._0_4_ * fVar28 + auVar32._0_4_ * fVar23 + auVar32._4_4_ * fVar26);
  fVar35 = fVar25 * auVar39._4_4_ -
           (auVar56._0_4_ * fVar28 +
           (float)*(undefined8 *)*pauVar1 * fVar23 +
           (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar26);
  fVar26 = fVar27 * auVar39._8_4_ -
           (auVar33._0_4_ * fVar28 + auVar34._0_4_ * fVar23 + auVar34._4_4_ * fVar26);
  fVar22 = fVar22 * fVar22;
  fVar35 = fVar35 * fVar35;
  fVar26 = fVar26 * fVar26;
  fVar25 = fVar22 + fVar35 + fVar26;
  fVar26 = fVar22 + fVar35 + fVar26;
  uVar49 = NEON_frsqrte(CONCAT44(fVar26,fVar25),4);
  fVar22 = (float)uVar49;
  fVar23 = (float)((ulong)uVar49 >> 0x20);
  uVar49 = NEON_frsqrts(CONCAT44(fVar26,fVar25),CONCAT44(fVar23 * fVar23,fVar22 * fVar22),4);
  iVar37 = -(uint)(fVar25 <= 0.0);
  iVar42 = -(uint)(fVar26 <= 0.0);
  fVar25 = fVar25 * fVar22 * (float)uVar49;
  fVar26 = fVar26 * fVar23 * (float)((ulong)uVar49 >> 0x20);
  fVar22 = (float)CONCAT13((byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                           CONCAT12((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar37 >> 0x10),
                                    CONCAT11((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar37 >> 8),
                                             SUB41(fVar25,0) & ~(byte)iVar37)));
  fVar23 = (local_b0 * (fVar30 + fVar40) + fVar22) * 1.01;
  fVar25 = (fStack_ac *
            ((float)(CONCAT17((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                              CONCAT16((byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10),
                                       CONCAT15((byte)((uint)fVar43 >> 8) &
                                                ~(byte)((uint)iVar19 >> 8),
                                                CONCAT14(SUB41(fVar43,0) & ~(byte)iVar19,fVar30))))
                    >> 0x20) +
            (float)(CONCAT17((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                             CONCAT16((byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10),
                                      CONCAT15((byte)((uint)fVar44 >> 8) &
                                               ~(byte)((uint)iVar58 >> 8),
                                               CONCAT14(SUB41(fVar44,0) & ~(byte)iVar58,fVar40))))
                   >> 0x20)) +
           (float)(CONCAT17((byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18),
                            CONCAT16((byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10),
                                     CONCAT15((byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar42 >> 8)
                                              ,CONCAT14(SUB41(fVar26,0) & ~(byte)iVar42,fVar22))))
                  >> 0x20)) * 1.01;
  fVar26 = (float)param_1[0xc] * 1024.0 * 1024.0;
  fVar22 = fVar23;
  if (fVar23 <= fVar26) {
    fVar22 = fVar26;
  }
  fVar26 = (float)((uint)fVar22 & 0x7f800000) * 6.0;
  auVar53._0_8_ = CONCAT44(fVar26,fVar26);
  auVar53._8_4_ = fVar26;
  auVar53._12_4_ = fVar26;
  fVar26 = fVar26 * fVar26;
  param_1[0x13] = auVar53._8_8_;
  param_1[0x12] = auVar53._0_8_;
  *(float *)(param_1 + 0x15) = fVar26;
  *(float *)((long)param_1 + 0xac) = fVar26;
  *(float *)(param_1 + 0x14) = fVar26;
  *(float *)((long)param_1 + 0xa4) = fVar26;
  fVar26 = (float)((uint)fVar22 & 0x7f800000) * 4.0 * 1.1920929e-07;
  uVar49 = NEON_fmov(0x41800000,4);
  param_1[0x17] =
       CONCAT44(fVar25 * fVar25 * fVar25 * (float)((ulong)uVar49 >> 0x20) * 1.1920929e-07,
                fVar23 * fVar23 * fVar23 * (float)uVar49 * 1.1920929e-07);
  uVar49 = NEON_fmax(param_1[0xc],CONCAT44(fVar26 + fVar26,fVar26 + fVar26),4);
  param_1[0xc] = uVar49;
  fVar22 = (float)((ulong)uVar49 >> 0x20);
  *(float *)(param_1 + 0x16) = fVar26;
  param_1[0xd] = CONCAT44(fVar22 * fVar22,(float)uVar49 * (float)uVar49);
  uVar11 = FUN_001d1534(param_1);
  if ((uVar11 & 1) == 0) {
    uVar49 = param_1[0x9c0];
    param_2[3] = CONCAT44(0.0 - (float)((ulong)param_1[0x9c1] >> 0x20),0.0 - (float)param_1[0x9c1]);
    param_2[2] = CONCAT44(0.0 - (float)((ulong)uVar49 >> 0x20),0.0 - (float)uVar49);
    *param_2 = CONCAT44(*(undefined4 *)(param_1 + 0x9c2),*(undefined4 *)(param_1 + 0x9c2));
    iVar37 = *(int *)((long)param_1 + 0x4dec);
    if (iVar37 == 1) {
      uVar20 = *(uint *)(param_1 + 0x9be);
      uVar14 = (ulong)(int)uVar20;
      uVar29 = param_1[uVar14 * 2 + 0x1b];
      uVar49 = param_1[uVar14 * 2 + 0x1a];
      uVar11 = (ulong)uVar20;
      uVar21 = (ulong)uVar20;
    }
    else {
      if (iVar37 == 2) {
        uVar20 = *(uint *)(param_1 + 0x9be);
        uVar21 = (ulong)*(byte *)((long)param_1 + (long)(int)uVar20 * 4 + 0xd62);
        uVar14 = (ulong)*(byte *)((long)param_1 +
                                 (long)(int)(0x2dU >> (ulong)((uVar20 & 3) << 1) & 3 ^ uVar20) * 4 +
                                 0xd62);
        uVar29 = (param_1 + uVar21 * 2 + 0x1a)[1];
        uVar49 = param_1[uVar21 * 2 + 0x1a];
        fVar26 = *(float *)(param_1 + 0x9c6);
        pfVar16 = (float *)(param_1 + uVar14 * 2 + 0x1a);
        fVar22 = (*pfVar16 - (float)uVar49) * fVar26;
        fVar23 = (pfVar16[1] - (float)((ulong)uVar49 >> 0x20)) * fVar26;
        fVar25 = (pfVar16[2] - (float)uVar29) * fVar26;
        fVar26 = (pfVar16[3] - (float)((ulong)uVar29 >> 0x20)) * fVar26;
        uVar11 = uVar14;
      }
      else {
        if (iVar37 != 3) {
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
        uVar20 = *(uint *)(param_1 + 0x9be) << 2;
        uVar14 = (ulong)(long)(int)uVar20 >> 2;
        uVar21 = (ulong)*(byte *)((long)param_1 +
                                 (-(ulong)((*(uint *)(param_1 + 0x9be) & 0x3fffffff) >> 0x1d) &
                                  0xfffffffc00000000 | (ulong)uVar20 << 2) + 0xd62);
        uVar11 = (ulong)*(byte *)((long)param_1 + (uVar14 << 4 | 4) + 0xd62);
        uVar29 = (param_1 + uVar21 * 2 + 0x1a)[1];
        uVar49 = param_1[uVar21 * 2 + 0x1a];
        pfVar16 = (float *)(param_1 + uVar11 * 2 + 0x1a);
        uVar14 = (ulong)*(byte *)((long)param_1 + (uVar14 << 4 | 8) + 0xd62);
        fVar26 = (float)param_1[0x9c5];
        pfVar7 = (float *)(param_1 + uVar14 * 2 + 0x1a);
        fVar22 = (float)param_1[0x9c4];
        fVar23 = (float)((ulong)param_1[0x9c4] >> 0x20);
        uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) * fVar22 + pfVar16[1] * fVar23,
                          (float)uVar49 * fVar22 + *pfVar16 * fVar23);
        uVar29 = CONCAT44((float)((ulong)uVar29 >> 0x20) * fVar22 + pfVar16[3] * fVar23,
                          (float)uVar29 * fVar22 + pfVar16[2] * fVar23);
        fVar22 = *pfVar7 * fVar26;
        fVar23 = pfVar7[1] * fVar26;
        fVar25 = pfVar7[2] * fVar26;
        fVar26 = pfVar7[3] * fVar26;
      }
      uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) + fVar23,(float)uVar49 + fVar22);
      uVar29 = CONCAT44((float)((ulong)uVar29 >> 0x20) + fVar26,(float)uVar29 + fVar25);
    }
    param_2[5] = uVar29;
    param_2[4] = uVar49;
LAB_001d3e94:
    uVar21 = -(uVar21 >> 0x1f) & 0xfffffff000000000 | uVar21 << 4;
    puVar17 = (undefined8 *)param_1[0xe];
    puVar8 = (undefined8 *)((long)param_1 + uVar21 + 0xd0);
    uVar49 = *puVar8;
    uVar15 = -(uVar11 >> 0x1f) & 0xfffffff000000000 | uVar11 << 4;
    puVar17[1] = puVar8[1];
    *puVar17 = uVar49;
    puVar8 = (undefined8 *)((long)param_1 + uVar15 + 0xd0);
    uVar49 = *puVar8;
    lVar18 = param_1[0xe];
    *(undefined8 *)(lVar18 + 0x18) = puVar8[1];
    *(undefined8 *)(lVar18 + 0x10) = uVar49;
    uVar11 = -(uVar14 >> 0x1f & 1) & 0xfffffff000000000 | (uVar14 & 0xffffffff) << 4;
    puVar8 = (undefined8 *)((long)param_1 + uVar11 + 0xd0);
    uVar49 = *puVar8;
    lVar18 = param_1[0xe];
    *(undefined8 *)(lVar18 + 0x28) = puVar8[1];
    *(undefined8 *)(lVar18 + 0x20) = uVar49;
    puVar8 = (undefined8 *)((long)param_1 + uVar21 + 0x4d0);
    uVar49 = *puVar8;
    puVar17 = (undefined8 *)param_1[0xf];
    puVar17[1] = puVar8[1];
    *puVar17 = uVar49;
    puVar8 = (undefined8 *)((long)param_1 + uVar15 + 0x4d0);
    uVar49 = *puVar8;
    lVar18 = param_1[0xf];
    *(undefined8 *)(lVar18 + 0x18) = puVar8[1];
    *(undefined8 *)(lVar18 + 0x10) = uVar49;
    puVar8 = (undefined8 *)((long)param_1 + uVar11 + 0x4d0);
    uVar49 = *puVar8;
    lVar18 = param_1[0xf];
    *(undefined8 *)(lVar18 + 0x28) = puVar8[1];
    *(undefined8 *)(lVar18 + 0x20) = uVar49;
    if (*(int *)(param_1 + 0x18) < 0x40) {
      uVar48 = *(undefined4 *)(param_1 + 0x9bd);
    }
    else {
      uVar48 = 3;
    }
    return uVar48;
  }
  fVar22 = *(float *)(param_1 + 0x4ec);
  iVar37 = *(int *)(param_1 + 0x1ab);
joined_r0x001d36c8:
  if (iVar37 < 2) goto LAB_001d3be4;
LAB_001d3708:
  uVar11 = (ulong)(iVar37 - 1U) & 3;
  if ((long)iVar37 - 2U < 3) {
    iVar19 = 0;
    lVar13 = 1;
  }
  else {
    iVar19 = 0;
    lVar18 = 0;
    pfVar16 = (float *)(param_1 + 0x4ee);
    do {
      lVar13 = lVar18;
      iVar58 = (int)lVar13;
      if (fVar22 < pfVar16[-3]) {
        iVar19 = iVar58 + 1;
        fVar22 = pfVar16[-3];
      }
      fVar25 = pfVar16[-1];
      iVar42 = iVar58 + 2;
      fVar23 = pfVar16[-2];
      if (pfVar16[-2] <= fVar22) {
        iVar42 = iVar19;
        fVar23 = fVar22;
      }
      fVar26 = fVar25;
      if (fVar25 <= fVar23) {
        fVar26 = fVar23;
      }
      iVar4 = iVar58 + 3;
      if (fVar25 <= fVar23) {
        iVar4 = iVar42;
      }
      iVar19 = iVar58 + 4;
      fVar22 = *pfVar16;
      if (*pfVar16 <= fVar26) {
        iVar19 = iVar4;
        fVar22 = fVar26;
      }
      lVar18 = lVar13 + 4;
      pfVar16 = pfVar16 + 4;
    } while (~uVar11 + (long)iVar37 != lVar13 + 4);
    lVar13 = lVar13 + 5;
  }
  iVar58 = iVar19;
  if ((iVar37 - 1U & 3) != 0) {
    do {
      fVar23 = *(float *)((long)param_1 + lVar13 * 4 + 0x2760);
      iVar19 = (int)lVar13;
      if (fVar23 <= fVar22) {
        iVar19 = iVar58;
        fVar23 = fVar22;
      }
      fVar22 = fVar23;
      lVar13 = lVar13 + 1;
      uVar11 = uVar11 - 1;
      iVar58 = iVar19;
    } while (uVar11 != 0);
  }
  do {
    if (fVar22 < 0.0) {
      *(undefined4 *)(param_1 + 0x9bd) = 1;
    }
    auVar56 = *(undefined1 (*) [16])(param_1 + (long)iVar19 * 2 + 0x3ac);
    uVar29 = param_1[(long)iVar19 * 2 + 0x2ad];
    uVar49 = param_1[(long)iVar19 * 2 + 0x2ac];
    auVar33 = *(undefined1 (*) [16])(param_1 + 0x12);
    fStack_98 = auVar56._8_4_;
    fStack_94 = auVar56._12_4_;
    local_a0 = auVar56._0_4_;
    fStack_9c = auVar56._4_4_;
    pcVar2 = (char *)((long)param_1 + (long)iVar19 + 0x2b60);
    cVar5 = *pcVar2;
    if (0x3f < *(int *)(param_1 + 0x18)) {
LAB_001d3970:
      bVar9 = false;
      if (*(int *)(param_1 + 0x9bd) != 0) goto LAB_001d397c;
LAB_001d3ce4:
      if (bVar9) {
        *(undefined4 *)((long)param_1 + 0x4dec) = 1;
        *(int *)(param_1 + 0x9be) = *(int *)(param_1 + 0x18) + -1;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x4dec) = 3;
        *(int *)(param_1 + 0x9be) = iVar19;
        FUN_001d3138(param_1,iVar19);
      }
      uVar49 = param_1[0x9c0];
      param_2[3] = CONCAT44(0.0 - (float)((ulong)param_1[0x9c1] >> 0x20),0.0 - (float)param_1[0x9c1]
                           );
      param_2[2] = CONCAT44(0.0 - (float)((ulong)uVar49 >> 0x20),0.0 - (float)uVar49);
      *param_2 = CONCAT44(*(undefined4 *)(param_1 + 0x9c2),*(undefined4 *)(param_1 + 0x9c2));
      iVar37 = *(int *)((long)param_1 + 0x4dec);
      if (iVar37 != 1) {
        if (iVar37 != 2) {
          if (iVar37 != 3) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          goto LAB_001d3dc0;
        }
LAB_001d3e44:
        uVar20 = *(uint *)(param_1 + 0x9be);
        uVar21 = (ulong)*(byte *)((long)param_1 + (long)(int)uVar20 * 4 + 0xd62);
        uVar14 = (ulong)*(byte *)((long)param_1 +
                                 (long)(int)(0x2dU >> (ulong)((uVar20 & 3) << 1) & 3 ^ uVar20) * 4 +
                                 0xd62);
        uVar29 = (param_1 + uVar21 * 2 + 0x1a)[1];
        uVar49 = param_1[uVar21 * 2 + 0x1a];
        fVar26 = *(float *)(param_1 + 0x9c6);
        pfVar16 = (float *)(param_1 + uVar14 * 2 + 0x1a);
        fVar22 = (*pfVar16 - (float)uVar49) * fVar26;
        fVar23 = (pfVar16[1] - (float)((ulong)uVar49 >> 0x20)) * fVar26;
        fVar25 = (pfVar16[2] - (float)uVar29) * fVar26;
        fVar26 = (pfVar16[3] - (float)((ulong)uVar29 >> 0x20)) * fVar26;
        uVar11 = uVar14;
        goto LAB_001d3e8c;
      }
LAB_001d3e2c:
      uVar20 = *(uint *)(param_1 + 0x9be);
      uVar14 = (ulong)(int)uVar20;
      uVar29 = param_1[uVar14 * 2 + 0x1b];
      uVar49 = param_1[uVar14 * 2 + 0x1a];
      uVar11 = (ulong)uVar20;
      uVar21 = (ulong)uVar20;
LAB_001d3e90:
      param_2[5] = uVar29;
      param_2[4] = uVar49;
      goto LAB_001d3e94;
    }
    (*(code *)**(undefined8 **)*param_1)
              ((undefined8 *)*param_1,param_1[1],&local_a0,param_1[2],
               (undefined1 (*) [16])(param_1 + 4),&local_80);
    auVar56 = *(undefined1 (*) [16])(param_1 + 4);
    auVar53 = *(undefined1 (*) [16])(param_1 + 6);
    auVar39 = NEON_ext(auVar56,auVar56,8,1);
    auVar32 = *(undefined1 (*) [16])(param_1 + 8);
    auVar52 = NEON_ext(auVar53,auVar53,8,1);
    auVar34 = NEON_ext(auVar32,auVar32,8,1);
    fVar22 = (float)uStack_70 - (float)param_1[10];
    fVar23 = uStack_70._4_4_ - (float)((ulong)param_1[10] >> 0x20);
    fVar25 = (float)uStack_68 - (float)param_1[0xb];
    fVar35 = auVar39._0_4_ * fVar25 + auVar56._0_4_ * fVar22 + auVar56._4_4_ * fVar23;
    fVar27 = auVar52._0_4_ * fVar25 + auVar53._0_4_ * fVar22 + auVar53._4_4_ * fVar23;
    auVar52._0_8_ = CONCAT44(fVar27,fVar35);
    auVar52._8_4_ = auVar34._0_4_ * fVar25 + auVar32._0_4_ * fVar22 + auVar32._4_4_ * fVar23;
    fVar36 = local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98;
    fVar41 = local_a0 * local_a0 + fStack_9c * fStack_9c + fStack_98 * fStack_98;
    uVar55 = CONCAT44(fVar41,fVar36);
    uVar50 = NEON_frsqrte(uVar55,4);
    auVar52._12_4_ = uStack_68._4_4_;
    fVar22 = (float)uVar50;
    fVar23 = (float)((ulong)uVar50 >> 0x20);
    fVar35 = (float)local_80 - fVar35;
    fVar27 = (float)((ulong)local_80 >> 0x20) - fVar27;
    fVar28 = (float)uStack_78 - auVar52._8_4_;
    fVar30 = (float)((ulong)uStack_78 >> 0x20) - uStack_68._4_4_;
    uVar50 = NEON_frsqrts(uVar55,CONCAT44(fVar23 * fVar23,fVar22 * fVar22),4);
    fVar22 = fVar22 * (float)uVar50;
    fVar23 = fVar23 * (float)((ulong)uVar50 >> 0x20);
    fVar25 = local_a0 * (fVar35 - ((float)uVar49 - auVar33._0_4_));
    fVar26 = fStack_9c * (fVar27 - ((float)((ulong)uVar49 >> 0x20) - auVar33._4_4_));
    uVar45 = (undefined1)((uint)fVar26 >> 8);
    uVar46 = (undefined1)((uint)fVar26 >> 0x10);
    uVar47 = (undefined1)((uint)fVar26 >> 0x18);
    fVar40 = fStack_98 * (fVar28 - ((float)uVar29 - auVar33._8_4_));
    fVar43 = fStack_94 * (fVar30 - ((float)((ulong)uVar29 >> 0x20) - auVar33._12_4_));
    auVar34[4] = SUB41(fVar26,0);
    auVar34._0_4_ = fVar25;
    auVar34[5] = uVar45;
    auVar34[6] = uVar46;
    auVar34[7] = uVar47;
    auVar34._8_4_ = fVar40;
    auVar34._12_4_ = fVar43;
    auVar39[4] = SUB41(fVar26,0);
    auVar39._0_4_ = fVar25;
    auVar39[5] = uVar45;
    auVar39[6] = uVar46;
    auVar39[7] = uVar47;
    auVar39._8_4_ = fVar40;
    auVar39._12_4_ = fVar43;
    auVar56 = NEON_ext(auVar34,auVar39,8,1);
    if (*(int *)(param_1 + 0x9bd) == 8) {
      auVar51._0_4_ = local_a0 * fVar35;
      auVar51._4_4_ = fStack_9c * fVar27;
      auVar51._8_4_ = fStack_98 * fVar28;
      auVar51._12_4_ = fStack_94 * fVar30;
      auVar33 = NEON_ext(auVar51,auVar51,8,1);
      fVar40 = (float)param_1[0xc];
      if (fVar40 < -(fVar22 * (auVar33._0_4_ + auVar51._0_4_ + auVar51._4_4_))) {
        iVar37 = -(uint)(fVar36 <= 0.0);
        iVar58 = -(uint)(fVar41 <= 0.0);
        uVar49 = NEON_frsqrts(uVar55,CONCAT44(fVar23 * fVar23,fVar22 * fVar22),4);
        fVar43 = fVar22 * (float)uVar49;
        fVar23 = fVar23 * (float)((ulong)uVar49 >> 0x20);
        fVar43 = (float)CONCAT13((byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar37 >> 0x18),
                                 CONCAT12((byte)((uint)fVar43 >> 0x10) &
                                          ~(byte)((uint)iVar37 >> 0x10),
                                          CONCAT11((byte)((uint)fVar43 >> 8) &
                                                   ~(byte)((uint)iVar37 >> 8),
                                                   SUB41(fVar43,0) & ~(byte)iVar37)));
        fVar36 = (float)(CONCAT17((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                                  CONCAT16((byte)((uint)fVar23 >> 0x10) &
                                           ~(byte)((uint)iVar58 >> 0x10),
                                           CONCAT15((byte)((uint)fVar23 >> 8) &
                                                    ~(byte)((uint)iVar58 >> 8),
                                                    CONCAT14(SUB41(fVar23,0) & ~(byte)iVar58,fVar43)
                                                   ))) >> 0x20);
        fVar23 = fStack_9c * fVar36;
        auVar54._0_8_ = CONCAT44(fVar23,local_a0 * fVar43);
        auVar54._8_4_ = fStack_98 * fVar43;
        auVar54._12_4_ = fStack_94 * fVar36;
        auVar57._0_4_ = fVar35 * local_a0 * fVar43;
        auVar57._4_4_ = fVar27 * fVar23;
        auVar57._8_4_ = fVar28 * auVar54._8_4_;
        auVar57._12_4_ = fVar30 * auVar54._12_4_;
        auVar33 = NEON_ext(auVar57,auVar57,8,1);
        fVar23 = -(auVar57._0_4_ + auVar57._4_4_ + auVar33._0_4_);
        if (fVar40 < fVar23) {
          *(undefined4 *)(param_1 + 0x9bd) = 0;
          param_1[0x9c1] = auVar54._8_8_;
          param_1[0x9c0] = auVar54._0_8_;
          *(float *)(param_1 + 0x9c2) = fVar23;
        }
      }
    }
    else {
      fVar40 = (float)param_1[0xc];
    }
    if (fVar22 * (fVar25 + fVar26 + auVar56._0_4_) < fVar40) goto LAB_001d3970;
    iVar37 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar37 * 2 + 0x1b] = uStack_78;
    param_1[(long)iVar37 * 2 + 0x1a] = local_80;
    iVar37 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar37 * 2 + 0x9b] = auVar52._8_8_;
    param_1[(long)iVar37 * 2 + 0x9a] = auVar52._0_8_;
    uVar49 = param_1[0x12];
    iVar37 = *(int *)(param_1 + 0x18);
    param_1[(long)iVar37 * 2 + 0x11b] =
         CONCAT44(fVar30 + (float)((ulong)param_1[0x13] >> 0x20),fVar28 + (float)param_1[0x13]);
    param_1[(long)iVar37 * 2 + 0x11a] =
         CONCAT44(fVar27 + (float)((ulong)uVar49 >> 0x20),fVar35 + (float)uVar49);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    bVar9 = true;
    if (*(int *)(param_1 + 0x9bd) == 0) goto LAB_001d3ce4;
LAB_001d397c:
    if (!bVar9) {
LAB_001d36e4:
      if (*pcVar2 == '\0') {
        if ((float)param_1[0xc] < *(float *)((long)param_1 + (long)iVar19 * 4 + 0x2960)) {
          FUN_001d2b94(param_1,iVar19);
          cVar12 = *pcVar2;
          goto joined_r0x001d375c;
        }
      }
      else {
        cVar12 = '\x01';
joined_r0x001d375c:
        if ((cVar5 == '\0') && (cVar12 != '\0')) {
          fVar22 = *(float *)(param_1 + 0x4ec);
          iVar37 = *(int *)(param_1 + 0x1ab);
          goto joined_r0x001d36c8;
        }
      }
      FUN_001d3138(param_1,iVar19);
      uVar49 = param_1[0x9c0];
      param_2[3] = CONCAT44(0.0 - (float)((ulong)param_1[0x9c1] >> 0x20),0.0 - (float)param_1[0x9c1]
                           );
      param_2[2] = CONCAT44(0.0 - (float)((ulong)uVar49 >> 0x20),0.0 - (float)uVar49);
      *param_2 = CONCAT44(*(undefined4 *)(param_1 + 0x9c2),*(undefined4 *)(param_1 + 0x9c2));
      iVar37 = *(int *)((long)param_1 + 0x4dec);
      if (iVar37 == 1) goto LAB_001d3e2c;
      if (iVar37 == 2) goto LAB_001d3e44;
      if (iVar37 != 3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
LAB_001d3dc0:
      uVar20 = *(uint *)(param_1 + 0x9be) << 2;
      uVar14 = (ulong)(long)(int)uVar20 >> 2;
      uVar21 = (ulong)*(byte *)((long)param_1 +
                               (-(ulong)((*(uint *)(param_1 + 0x9be) & 0x3fffffff) >> 0x1d) &
                                0xfffffffc00000000 | (ulong)uVar20 << 2) + 0xd62);
      uVar11 = (ulong)*(byte *)((long)param_1 + (uVar14 << 4 | 4) + 0xd62);
      uVar29 = (param_1 + uVar21 * 2 + 0x1a)[1];
      uVar49 = param_1[uVar21 * 2 + 0x1a];
      pfVar16 = (float *)(param_1 + uVar11 * 2 + 0x1a);
      uVar14 = (ulong)*(byte *)((long)param_1 + (uVar14 << 4 | 8) + 0xd62);
      fVar26 = (float)param_1[0x9c5];
      pfVar7 = (float *)(param_1 + uVar14 * 2 + 0x1a);
      fVar22 = (float)param_1[0x9c4];
      fVar23 = (float)((ulong)param_1[0x9c4] >> 0x20);
      uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) * fVar22 + pfVar16[1] * fVar23,
                        (float)uVar49 * fVar22 + *pfVar16 * fVar23);
      uVar29 = CONCAT44((float)((ulong)uVar29 >> 0x20) * fVar22 + pfVar16[3] * fVar23,
                        (float)uVar29 * fVar22 + pfVar16[2] * fVar23);
      fVar22 = *pfVar7 * fVar26;
      fVar23 = pfVar7[1] * fVar26;
      fVar25 = pfVar7[2] * fVar26;
      fVar26 = pfVar7[3] * fVar26;
LAB_001d3e8c:
      uVar49 = CONCAT44((float)((ulong)uVar49 >> 0x20) + fVar23,(float)uVar49 + fVar22);
      uVar29 = CONCAT44((float)((ulong)uVar29 >> 0x20) + fVar26,(float)uVar29 + fVar25);
      goto LAB_001d3e90;
    }
    uVar20 = *(uint *)(param_1 + 0x1ab);
    if ((int)uVar20 < 1) {
      *(undefined4 *)((long)param_1 + 0x4de4) = 0;
      *(uint *)(param_1 + 0x97c) = uVar20;
LAB_001d36d8:
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      goto LAB_001d36e4;
    }
    iVar58 = *(int *)(param_1 + 0x18);
    iVar37 = 0;
    uVar11 = (long)(int)uVar20;
    do {
      while( true ) {
        uVar21 = uVar11 - 1;
        fVar22 = (float)param_1[(long)iVar58 * 2 + 0x118] - *(float *)(param_1 + uVar21 * 2 + 0x2ac)
        ;
        fVar23 = (float)((ulong)param_1[(long)iVar58 * 2 + 0x118] >> 0x20) -
                 *(float *)((long)param_1 + uVar21 * 0x10 + 0x1564);
        fVar26 = (float)param_1[(long)iVar58 * 2 + 0x119] - *(float *)(param_1 + uVar21 * 2 + 0x2ad)
        ;
        fVar25 = (float)param_1[uVar21 * 2 + 0x3ac] * fVar22 +
                 (float)((ulong)param_1[uVar21 * 2 + 0x3ac] >> 0x20) * fVar23 +
                 (float)param_1[uVar21 * 2 + 0x3ad] * fVar26;
        if ((float)param_1[0x17] < ABS(fVar25)) break;
        if (-3.40282e+38 < *(float *)((long)param_1 + uVar21 * 4 + 0x2760)) {
          if (*(char *)((long)param_1 + uVar11 + 0x2b5f) == '\0') {
            FUN_001d2b94(param_1,uVar21 & 0xffffffff);
          }
          dVar31 = (double)fVar22;
          dVar24 = (double)fVar23;
          dVar38 = (double)fVar26;
          if (0.0 < (double)param_1[uVar21 * 4 + 0x57c] * dVar31 +
                    (double)param_1[uVar21 * 4 + 0x57d] * dVar24 +
                    (double)param_1[uVar21 * 4 + 0x57e] * dVar38 +
                    (double)param_1[uVar21 * 4 + 0x77c] * dVar31 +
                    (double)param_1[uVar21 * 4 + 0x77d] * dVar24 +
                    (double)param_1[uVar21 * 4 + 0x77e] * dVar38) goto LAB_001d3aa0;
        }
LAB_001d39a8:
        *(undefined4 *)((long)param_1 + uVar21 * 4 + 0x4be4) = 0;
        uVar11 = uVar21;
        if ((long)uVar21 < 1) goto LAB_001d3ab8;
      }
      if (fVar25 <= 0.0) goto LAB_001d39a8;
LAB_001d3aa0:
      iVar37 = iVar37 + 1;
      *(uint *)((long)param_1 + uVar21 * 4 + 0x4be4) = uVar20;
      uVar20 = (uint)uVar21;
      uVar11 = uVar21;
    } while (0 < (long)uVar21);
LAB_001d3ab8:
    *(int *)((long)param_1 + 0x4de4) = iVar37;
    *(uint *)(param_1 + 0x97c) = uVar20;
    if (iVar37 == 0) goto LAB_001d36d8;
    if (iVar37 < 1) goto LAB_001d36e4;
    if (iVar37 == 1) {
      *(undefined4 *)((long)param_1 + 0xd54) = 3;
      psVar3 = (short *)((long)param_1 +
                        (-(ulong)((uVar20 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                        (ulong)(uVar20 << 2) << 2) + 0xd60);
      sVar6 = *psVar3;
      *(short *)((long)param_1 + (ulong)*(byte *)(psVar3 + 1) * 2 + 0xcd4) = sVar6;
      uVar11 = (ulong)(long)(int)(uVar20 << 2) >> 2;
      *(int *)(param_1 + 0x19a) = (int)sVar6;
      psVar3 = (short *)((long)param_1 + (uVar11 << 4 | 4) + 0xd60);
      sVar6 = *psVar3;
      *(short *)((long)param_1 + (ulong)*(byte *)(psVar3 + 1) * 2 + 0xcd4) = sVar6;
      *(int *)(param_1 + 0x19a) = (int)sVar6;
      psVar3 = (short *)((long)param_1 + (uVar11 << 4 | 8) + 0xd60);
      sVar6 = *psVar3;
      *(short *)((long)param_1 + (ulong)*(byte *)(psVar3 + 1) * 2 + 0xcd4) = sVar6;
      *(int *)(param_1 + 0x19a) = (int)sVar6;
    }
    else {
      FUN_001d2dc4(param_1);
    }
    FUN_001d27b0(param_1);
    fVar22 = *(float *)(param_1 + 0x4ec);
    iVar37 = *(int *)(param_1 + 0x1ab);
    if (1 < iVar37) goto LAB_001d3708;
LAB_001d3be4:
    iVar19 = 0;
  } while( true );
}


