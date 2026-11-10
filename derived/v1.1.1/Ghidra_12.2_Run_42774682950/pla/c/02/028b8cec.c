/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b8cec; name: FUN_028b8cec
 */


undefined1  [16] FUN_028b8cec(float param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  ushort *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [12];
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  float fVar14;
  float fVar16;
  undefined8 uVar15;
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
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  puVar5 = (ushort *)((long)param_2 - (long)*param_2);
  if (*puVar5 < 5) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if ((ulong)puVar5[2] != 0) {
      puVar6 = (uint *)((long)param_2 + (ulong)puVar5[2]);
      lVar8 = (long)puVar6 + (ulong)*puVar6;
    }
    if (6 < *puVar5) {
      puVar6 = (uint *)0x0;
      if ((ulong)puVar5[3] != 0) {
        puVar6 = (uint *)((long)param_2 + (ulong)puVar5[3]);
        puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
      }
      goto LAB_028b8d30;
    }
  }
  puVar6 = (uint *)0x0;
LAB_028b8d30:
  lVar1 = lVar8 + 4;
  pbVar4 = (byte *)(lVar8 + 6U);
  uVar9 = ~(lVar8 + 6U) + lVar1 + (ulong)*puVar6;
  while (pbVar3 = pbVar4, uVar9 != 0) {
    uVar12 = uVar9 >> 1;
    pbVar4 = pbVar3 + uVar12 + 1;
    uVar9 = uVar9 + ~uVar12;
    if (param_1 <= (float)pbVar3[uVar12]) {
      pbVar4 = pbVar3;
      uVar9 = uVar12;
    }
  }
  iVar7 = (int)((long)pbVar3 - lVar1);
  uVar9 = (long)pbVar3 - lVar1 & 0xffffffff;
  uVar13 = (uint)*(byte *)(lVar1 + (ulong)(iVar7 - 1U));
  fVar18 = (param_1 - (float)uVar13) / (float)(int)(*(byte *)(lVar1 + uVar9) - uVar13);
  uVar15 = *(undefined8 *)(puVar6 + (ulong)(iVar7 - 1U) * 3 + 1);
  fVar17 = (float)(puVar6 + (ulong)(iVar7 - 1U) * 3 + 1)[2];
  uVar12 = (ulong)(uint)fVar17;
  if (0.0 < fVar18) {
    pauVar10 = (undefined1 (*) [12])(puVar6 + uVar9 * 3 + 1);
    fVar21 = *(float *)((long)*pauVar10 + 8);
    if (1.0 <= fVar18) {
      auVar28._12_4_ = 0;
      auVar28._0_12_ = *pauVar10;
      return auVar28;
    }
    pfVar11 = (float *)(puVar6 + (ulong)(iVar7 - 2) * 3 + 1);
    fVar19 = (float)*(undefined8 *)*pauVar10;
    fVar20 = (float)((ulong)*(undefined8 *)*pauVar10 >> 0x20);
    auVar29 = NEON_fmov(0x40400000,4);
    uVar2 = *(undefined8 *)(puVar6 + (ulong)(iVar7 + 1) * 3 + 1);
    fVar22 = (fVar19 - *pfVar11) * 0.5;
    fVar23 = (fVar20 - pfVar11[1]) * 0.5;
    fVar24 = (fVar21 - pfVar11[2]) * 0.5;
    fVar14 = (float)uVar15;
    fVar16 = (float)((ulong)uVar15 >> 0x20);
    fVar25 = ((float)uVar2 - fVar14) * 0.5;
    fVar26 = ((float)((ulong)uVar2 >> 0x20) - fVar16) * 0.5;
    fVar27 = ((float)(puVar6 + (ulong)(iVar7 + 1) * 3 + 1)[2] - fVar17) * 0.5;
    auVar28 = NEON_fmov(0xc0400000,4);
    uVar15 = CONCAT44(fVar16 + (fVar23 + ((((fVar16 * auVar28._4_4_ + fVar20 * auVar29._4_4_) -
                                           (fVar23 + fVar23)) - fVar26) +
                                         (((fVar16 + fVar16) - (fVar20 + fVar20)) + fVar23 + fVar26)
                                         * fVar18) * fVar18) * fVar18,
                      fVar14 + (fVar22 + ((((fVar14 * auVar28._0_4_ + fVar19 * auVar29._0_4_) -
                                           (fVar22 + fVar22)) - fVar25) +
                                         (((fVar14 + fVar14) - (fVar19 + fVar19)) + fVar22 + fVar25)
                                         * fVar18) * fVar18) * fVar18);
    uVar12 = CONCAT44((((((auVar28._12_4_ * 0.0 + auVar29._12_4_ * 0.0) - 0.0) - 0.0) + fVar18 * 0.0
                       ) * fVar18 + 0.0) * fVar18 + 0.0,
                      fVar17 + (fVar24 + ((((fVar17 * auVar28._8_4_ + fVar21 * auVar29._8_4_) -
                                           (fVar24 + fVar24)) - fVar27) +
                                         (((fVar17 + fVar17) - (fVar21 + fVar21)) + fVar24 + fVar27)
                                         * fVar18) * fVar18) * fVar18);
  }
  auVar29._8_8_ = uVar12;
  auVar29._0_8_ = uVar15;
  return auVar29;
}


