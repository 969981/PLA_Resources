/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b870c; name: FUN_028b870c
 */


undefined1  [16] FUN_028b870c(float param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ushort *puVar3;
  uint *puVar4;
  int iVar5;
  ushort *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 (*pauVar9) [12];
  float *pfVar10;
  ulong uVar11;
  uint uVar12;
  float fVar13;
  float fVar15;
  undefined8 uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  puVar3 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar3 < 5) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if ((ulong)puVar3[2] != 0) {
      puVar4 = (uint *)((long)param_2 + (ulong)puVar3[2]);
      lVar7 = (long)puVar4 + (ulong)*puVar4;
    }
    if (6 < *puVar3) {
      puVar4 = (uint *)0x0;
      if ((ulong)puVar3[3] != 0) {
        puVar4 = (uint *)((long)param_2 + (ulong)puVar3[3]);
        puVar4 = (uint *)((long)puVar4 + (ulong)*puVar4);
      }
      goto LAB_028b8750;
    }
  }
  puVar4 = (uint *)0x0;
LAB_028b8750:
  lVar1 = lVar7 + 4;
  puVar3 = (ushort *)(lVar7 + 8);
  lVar7 = ((lVar1 + (ulong)*puVar4 * 2) - (long)puVar3) + -2;
  if (lVar7 != 0) {
    uVar8 = lVar7 >> 1;
    puVar6 = puVar3;
    do {
      uVar11 = uVar8 >> 1;
      puVar3 = puVar6 + uVar11 + 1;
      uVar8 = uVar8 + ~uVar11;
      if (param_1 <= (float)puVar6[uVar11]) {
        puVar3 = puVar6;
        uVar8 = uVar11;
      }
      puVar6 = puVar3;
    } while (uVar8 != 0);
  }
  uVar8 = (ulong)((long)puVar3 - lVar1) >> 1;
  iVar5 = (int)uVar8;
  uVar12 = (uint)*(ushort *)(lVar1 + (ulong)(iVar5 - 1U) * 2);
  fVar17 = (param_1 - (float)uVar12) /
           (float)(int)(*(ushort *)(lVar1 + (uVar8 & 0xffffffff) * 2) - uVar12);
  uVar14 = *(undefined8 *)(puVar4 + (ulong)(iVar5 - 1U) * 3 + 1);
  fVar16 = (float)(puVar4 + (ulong)(iVar5 - 1U) * 3 + 1)[2];
  uVar8 = (ulong)(uint)fVar16;
  if (0.0 < fVar17) {
    pauVar9 = (undefined1 (*) [12])
              (puVar4 + ((ulong)((long)puVar3 - lVar1) >> 1 & 0xffffffff) * 3 + 1);
    fVar20 = *(float *)((long)*pauVar9 + 8);
    if (1.0 <= fVar17) {
      auVar27._12_4_ = 0;
      auVar27._0_12_ = *pauVar9;
      return auVar27;
    }
    pfVar10 = (float *)(puVar4 + (ulong)(iVar5 - 2) * 3 + 1);
    fVar18 = (float)*(undefined8 *)*pauVar9;
    fVar19 = (float)((ulong)*(undefined8 *)*pauVar9 >> 0x20);
    auVar28 = NEON_fmov(0x40400000,4);
    uVar2 = *(undefined8 *)(puVar4 + (ulong)(iVar5 + 1) * 3 + 1);
    fVar21 = (fVar18 - *pfVar10) * 0.5;
    fVar22 = (fVar19 - pfVar10[1]) * 0.5;
    fVar23 = (fVar20 - pfVar10[2]) * 0.5;
    fVar13 = (float)uVar14;
    fVar15 = (float)((ulong)uVar14 >> 0x20);
    fVar24 = ((float)uVar2 - fVar13) * 0.5;
    fVar25 = ((float)((ulong)uVar2 >> 0x20) - fVar15) * 0.5;
    fVar26 = ((float)(puVar4 + (ulong)(iVar5 + 1) * 3 + 1)[2] - fVar16) * 0.5;
    auVar27 = NEON_fmov(0xc0400000,4);
    uVar14 = CONCAT44(fVar15 + (fVar22 + ((((fVar15 * auVar27._4_4_ + fVar19 * auVar28._4_4_) -
                                           (fVar22 + fVar22)) - fVar25) +
                                         (((fVar15 + fVar15) - (fVar19 + fVar19)) + fVar22 + fVar25)
                                         * fVar17) * fVar17) * fVar17,
                      fVar13 + (fVar21 + ((((fVar13 * auVar27._0_4_ + fVar18 * auVar28._0_4_) -
                                           (fVar21 + fVar21)) - fVar24) +
                                         (((fVar13 + fVar13) - (fVar18 + fVar18)) + fVar21 + fVar24)
                                         * fVar17) * fVar17) * fVar17);
    uVar8 = CONCAT44((((((auVar27._12_4_ * 0.0 + auVar28._12_4_ * 0.0) - 0.0) - 0.0) + fVar17 * 0.0)
                      * fVar17 + 0.0) * fVar17 + 0.0,
                     fVar16 + (fVar23 + ((((fVar16 * auVar27._8_4_ + fVar20 * auVar28._8_4_) -
                                          (fVar23 + fVar23)) - fVar26) +
                                        (((fVar16 + fVar16) - (fVar20 + fVar20)) + fVar23 + fVar26)
                                        * fVar17) * fVar17) * fVar17);
  }
  auVar28._8_8_ = uVar8;
  auVar28._0_8_ = uVar14;
  return auVar28;
}


