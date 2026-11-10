/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fe19c8; name: FUN_02fe19c8
 */


byte FUN_02fe19c8(int *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  int *piVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  int iVar38;
  undefined8 uVar39;
  float fVar40;
  int iVar41;
  float fVar42;
  undefined8 uVar43;
  
  lVar20 = 0;
  if (*param_1 != 0) {
    lVar20 = (long)*param_1 + (long)param_1;
  }
  if (param_1[5] == 0) {
    puVar12 = (undefined8 *)(lVar20 + (ulong)(param_2 >> 0x18) * 0xc);
    uVar27 = *puVar12;
    uVar16 = (ulong)(param_2 >> 0x10 & 0xff);
    fVar23 = *(float *)(puVar12 + 1);
    uVar13 = (ulong)(param_2 >> 8 & 0xff);
    puVar12 = (undefined8 *)(lVar20 + uVar13 * 0xc);
    uVar33 = *puVar12;
    fVar26 = *(float *)(puVar12 + 1);
    puVar19 = (undefined8 *)(lVar20 + uVar16 * 0xc);
    puVar12 = (undefined8 *)(lVar20 + (ulong)(param_2 & 0xff) * 0xc);
    uVar39 = *puVar19;
    uVar43 = *puVar12;
    fVar21 = (float)uVar27;
    fVar22 = (float)((ulong)uVar27 >> 0x20);
    fVar25 = (float)uVar33;
    fVar24 = fVar25 - fVar21;
    fVar31 = (float)((ulong)uVar33 >> 0x20);
    fVar30 = fVar31 - fVar22;
    fVar37 = (float)uVar43 - (float)uVar39;
    fVar40 = (float)((ulong)uVar43 >> 0x20) - (float)((ulong)uVar39 >> 0x20);
    fVar42 = *(float *)(puVar12 + 1) - *(float *)(puVar19 + 1);
    uVar33 = NEON_ext(CONCAT44(fVar40,fVar37),(ulong)(uint)fVar42,4,1);
    uVar27 = NEON_ext(CONCAT44(fVar30,fVar24),CONCAT44(fVar26 - fVar23,fVar26 - fVar23),4,1);
    fVar25 = (fVar25 - fVar21) * (float)uVar33 - fVar37 * (float)uVar27;
    fVar31 = (fVar31 - fVar22) * (float)((ulong)uVar33 >> 0x20) -
             fVar40 * (float)((ulong)uVar27 >> 0x20);
    auVar28._0_8_ = CONCAT44(fVar31,fVar25);
    auVar28._8_4_ = (fVar26 - fVar23) * fVar37 - fVar24 * fVar42;
    auVar28._12_4_ = (fVar26 - fVar23) * fVar40 - fVar30 * fVar42;
    auVar32 = NEON_ext(auVar28,auVar28,4,1);
    fVar40 = auVar32._0_4_;
    fVar42 = auVar32._4_4_;
    auVar35._0_8_ = auVar32._0_8_;
    auVar35._8_8_ = auVar28._0_8_;
    fVar26 = fVar40 * fVar40 + fVar42 * fVar42 + fVar25 * fVar25;
    fVar30 = fVar40 * fVar40 + fVar42 * fVar42 + fVar25 * fVar25;
    uVar27 = CONCAT44(fVar30,fVar26);
    uVar33 = NEON_frsqrte(uVar27,4);
    fVar24 = (float)uVar33;
    fVar37 = (float)((ulong)uVar33 >> 0x20);
    uVar33 = NEON_frsqrts(uVar27,CONCAT44(fVar37 * fVar37,fVar24 * fVar24),4);
    fVar24 = fVar24 * (float)uVar33;
    fVar37 = fVar37 * (float)((ulong)uVar33 >> 0x20);
    auVar34._0_8_ = CONCAT44(-(uint)(0.0 < fVar30),-(uint)(0.0 < fVar26));
    iVar38 = -(uint)(fVar26 <= 0.0);
    iVar41 = -(uint)(fVar30 <= 0.0);
    uVar27 = NEON_frsqrts(uVar27,CONCAT44(fVar37 * fVar37,fVar24 * fVar24),4);
    auVar34._8_8_ = auVar34._0_8_;
    fVar24 = (float)uVar27 * fVar24;
    fVar37 = (float)((ulong)uVar27 >> 0x20) * fVar37;
    fVar26 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                             CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10),
                                      CONCAT11((byte)((uint)fVar24 >> 8) &
                                               ~(byte)((uint)iVar38 >> 8),
                                               SUB41(fVar24,0) & ~(byte)iVar38)));
    auVar29._0_4_ = fVar40 * fVar26;
    fVar24 = (float)(CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                              CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                                       CONCAT15((byte)((uint)fVar37 >> 8) &
                                                ~(byte)((uint)iVar41 >> 8),
                                                CONCAT14(SUB41(fVar37,0) & ~(byte)iVar41,fVar26))))
                    >> 0x20);
    auVar29._4_4_ = fVar42 * fVar24;
    auVar29._8_4_ = fVar25 * fVar26;
    auVar29._12_4_ = fVar31 * fVar24;
    auVar35 = auVar35 ^ (auVar35 ^ auVar29) & auVar34;
    fVar21 = fVar21 * auVar35._0_4_;
    fVar22 = fVar22 * auVar35._4_4_;
    fVar26 = fVar23 * auVar35._8_4_;
    fVar23 = fVar23 * auVar35._12_4_;
    auVar32._4_4_ = fVar22;
    auVar32._0_4_ = fVar21;
    auVar32._8_4_ = fVar26;
    auVar32._12_4_ = fVar23;
    auVar9._4_4_ = fVar22;
    auVar9._0_4_ = fVar21;
    auVar9._8_4_ = fVar26;
    auVar9._12_4_ = fVar23;
    auVar32 = NEON_ext(auVar32,auVar9,8,1);
    auVar36._0_12_ = auVar35._0_12_;
    auVar36._12_4_ = -(fVar21 + fVar22 + auVar32._0_4_);
    param_3[1] = auVar36._8_8_;
    *param_3 = auVar35._0_8_;
    if (*param_1 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = (long)*param_1 + (long)param_1;
    }
    puVar12 = (undefined8 *)(lVar20 + (ulong)(param_2 >> 0x18) * 0xc);
    puVar17 = (undefined8 *)(lVar20 + uVar16 * 0xc);
    uVar43 = *puVar12;
    puVar19 = (undefined8 *)(lVar20 + uVar13 * 0xc);
    puVar14 = (undefined8 *)(lVar20 + (ulong)(param_2 & 0xff) * 0xc);
    uVar5 = *(undefined4 *)(puVar12 + 1);
    uVar6 = *(undefined4 *)(puVar17 + 1);
    uVar7 = *(undefined4 *)(puVar19 + 1);
    uVar27 = *puVar17;
    uVar8 = *(undefined4 *)(puVar14 + 1);
    uVar33 = *puVar19;
    uVar39 = *puVar14;
    param_4[1] = CONCAT44(uVar5,uVar5);
    *param_4 = uVar43;
    param_4[3] = CONCAT44(uVar6,uVar6);
    param_4[2] = uVar27;
    *(uint *)((long)param_4 + 0xc) = param_2 >> 0x18 | 0x3f000000;
    *(uint *)((long)param_4 + 0x1c) = param_2 >> 0x10 & 0xff | 0x3f000000;
    param_4[5] = CONCAT44(uVar7,uVar7);
    param_4[4] = uVar33;
    param_4[7] = CONCAT44(uVar8,uVar8);
    param_4[6] = uVar39;
    *(uint *)((long)param_4 + 0x2c) = param_2 >> 8 & 0xff | 0x3f000000;
    *(uint *)((long)param_4 + 0x3c) = param_2 & 0xff | 0x3f000000;
    return 4;
  }
  piVar10 = param_1 + 6;
  iVar38 = *piVar10;
  puVar1 = (ushort *)((long)param_1 + (long)(int)param_2 * 4 + (long)param_1[4] + 0x10);
  bVar2 = (byte)puVar1[1];
  uVar13 = (ulong)*puVar1;
  puVar12 = (undefined8 *)((long)(param_1 + 2) + (long)(int)param_2 * 0x10 + (long)param_1[2]);
  uVar27 = *puVar12;
  pbVar11 = (byte *)((long)piVar10 + uVar13 + (long)iVar38);
  param_3[1] = puVar12[1];
  *param_3 = uVar27;
  bVar3 = *pbVar11;
  bVar4 = pbVar11[1];
  puVar12 = (undefined8 *)(lVar20 + (ulong)bVar3 * 0xc);
  uVar27 = *puVar12;
  puVar19 = (undefined8 *)(lVar20 + (ulong)bVar4 * 0xc);
  uVar33 = *puVar19;
  uVar39 = puVar19[1];
  param_4[1] = puVar12[1];
  *param_4 = uVar27;
  param_4[3] = uVar39;
  param_4[2] = uVar33;
  *(uint *)((long)param_4 + 0xc) = bVar3 | 0x3f000000;
  *(uint *)((long)param_4 + 0x1c) = bVar4 | 0x3f000000;
  if (2 < bVar2) {
    bVar3 = pbVar11[2];
    puVar12 = (undefined8 *)(lVar20 + (ulong)bVar3 * 0xc);
    uVar27 = *puVar12;
    param_4[5] = puVar12[1];
    param_4[4] = uVar27;
    *(uint *)((long)param_4 + 0x2c) = bVar3 | 0x3f000000;
    if (bVar2 != 3) {
      bVar3 = pbVar11[3];
      puVar12 = (undefined8 *)(lVar20 + (ulong)bVar3 * 0xc);
      uVar27 = *puVar12;
      param_4[7] = puVar12[1];
      param_4[6] = uVar27;
      *(uint *)((long)param_4 + 0x3c) = bVar3 | 0x3f000000;
      if (bVar2 != 4) {
        lVar15 = (ulong)bVar2 - 4;
        pbVar11 = (byte *)((long)piVar10 + uVar13 + (long)iVar38 + 4);
        puVar18 = (uint *)((long)param_4 + 0x4c);
        do {
          bVar3 = *pbVar11;
          puVar12 = (undefined8 *)(lVar20 + (ulong)bVar3 * 0xc);
          uVar27 = *puVar12;
          *(undefined8 *)(puVar18 + -1) = puVar12[1];
          *(undefined8 *)(puVar18 + -3) = uVar27;
          lVar15 = lVar15 + -1;
          *puVar18 = bVar3 | 0x3f000000;
          pbVar11 = pbVar11 + 1;
          puVar18 = puVar18 + 4;
        } while (lVar15 != 0);
      }
    }
  }
  return bVar2;
}


