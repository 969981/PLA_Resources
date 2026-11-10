/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b8b14; name: FUN_028b8b14
 */


undefined1  [16] FUN_028b8b14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  fVar10 = *(float *)(param_3 + 8);
  fVar13 = (float)param_1;
  *(float *)(param_3 + 8) = fVar13;
  *(undefined1 *)(param_3 + 2) = 0;
  if (fVar10 <= fVar13) {
    uVar8 = *(uint *)(param_3 + 0xc);
    uVar3 = uVar8 + 1 & 7;
    if (fVar13 <= *(float *)(param_3 + (ulong)uVar3 * 4 + 0x10)) goto LAB_028b8c00;
    uVar4 = uVar8 + 2 & 7;
    if (fVar13 <= *(float *)(param_3 + (ulong)uVar4 * 4 + 0x10)) {
      uVar5 = uVar8 + 1 & 3;
      *(uint *)(param_3 + 0xc) = uVar3;
      uVar8 = uVar3;
    }
    else {
      uVar5 = uVar8 + 2 & 3;
      if (uVar5 == 3) {
        *(uint *)(param_3 + 0xc) = uVar4;
        *(undefined1 *)(param_3 + 2) = 1;
        goto LAB_028b8b54;
      }
      if (*(float *)(param_3 + (ulong)(uVar8 + 3 & 7) * 4 + 0x10) < fVar13) {
        iVar7 = -1;
        goto LAB_028b8b48;
      }
      *(uint *)(param_3 + 0xc) = uVar4;
      uVar8 = uVar4;
    }
    if (uVar5 != 2) goto LAB_028b8c00;
  }
  else {
    iVar7 = -(uint)(0.0 < fVar13);
LAB_028b8b48:
    *(int *)(param_3 + 4) = iVar7;
    *(undefined4 *)(param_3 + 0xc) = 1;
  }
LAB_028b8b54:
  FUN_028b8eac(param_1,param_2,param_3);
  uVar8 = *(uint *)(param_3 + 0xc);
LAB_028b8c00:
  uVar9 = (ulong)(uVar8 + 1 & 7);
  fVar10 = *(float *)(param_3 + 0x10 + (ulong)(uVar8 & 7) * 4);
  lVar1 = param_3 + (ulong)(uVar8 & 7) * 0x10;
  fVar10 = (fVar13 - fVar10) / (*(float *)(param_3 + 0x10 + uVar9 * 4) - fVar10);
  if (fVar10 <= 0.0) {
    uVar12 = *(undefined8 *)(lVar1 + 0x38);
    uVar11 = *(undefined8 *)(lVar1 + 0x30);
  }
  else {
    lVar2 = param_3 + uVar9 * 0x10;
    if (1.0 <= fVar10) {
      uVar12 = *(undefined8 *)(lVar2 + 0x38);
      uVar11 = *(undefined8 *)(lVar2 + 0x30);
    }
    else {
      uVar18 = *(undefined8 *)(lVar2 + 0x30);
      uVar29 = *(undefined8 *)(lVar1 + 0x30);
      puVar6 = (undefined8 *)(param_3 + 0x30 + (ulong)(uVar8 - 1 & 7) * 0x10);
      uVar12 = puVar6[1];
      uVar11 = *puVar6;
      puVar6 = (undefined8 *)(param_3 + 0x30 + (ulong)(uVar8 + 2 & 7) * 0x10);
      uVar27 = puVar6[1];
      uVar26 = *puVar6;
      fVar17 = (float)uVar18;
      fVar19 = (float)((ulong)uVar18 >> 0x20);
      fVar20 = (float)*(undefined8 *)(lVar2 + 0x38);
      fVar21 = (float)((ulong)*(undefined8 *)(lVar2 + 0x38) >> 0x20);
      auVar34 = NEON_fmov(0x40400000,4);
      fVar28 = (float)uVar29;
      fVar30 = (float)((ulong)uVar29 >> 0x20);
      fVar31 = (float)*(undefined8 *)(lVar1 + 0x38);
      fVar32 = (float)((ulong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
      fVar13 = (fVar17 - (float)uVar11) * 0.5;
      fVar14 = (fVar19 - (float)((ulong)uVar11 >> 0x20)) * 0.5;
      fVar15 = (fVar20 - (float)uVar12) * 0.5;
      fVar16 = (fVar21 - (float)((ulong)uVar12 >> 0x20)) * 0.5;
      fVar22 = ((float)uVar26 - fVar28) * 0.5;
      fVar23 = ((float)((ulong)uVar26 >> 0x20) - fVar30) * 0.5;
      fVar24 = ((float)uVar27 - fVar31) * 0.5;
      fVar25 = ((float)((ulong)uVar27 >> 0x20) - fVar32) * 0.5;
      auVar33 = NEON_fmov(0xc0400000,4);
      uVar11 = CONCAT44(fVar30 + (fVar14 + ((((fVar19 * auVar34._4_4_ + fVar30 * auVar33._4_4_) -
                                             (fVar14 + fVar14)) - fVar23) +
                                           (fVar23 + fVar14 + ((fVar30 + fVar30) - (fVar19 + fVar19)
                                                              )) * fVar10) * fVar10) * fVar10,
                        fVar28 + (fVar13 + ((((fVar17 * auVar34._0_4_ + fVar28 * auVar33._0_4_) -
                                             (fVar13 + fVar13)) - fVar22) +
                                           (fVar22 + fVar13 + ((fVar28 + fVar28) - (fVar17 + fVar17)
                                                              )) * fVar10) * fVar10) * fVar10);
      uVar12 = CONCAT44(fVar32 + (fVar16 + ((((fVar21 * auVar34._12_4_ + fVar32 * auVar33._12_4_) -
                                             (fVar16 + fVar16)) - fVar25) +
                                           (fVar25 + fVar16 + ((fVar32 + fVar32) - (fVar21 + fVar21)
                                                              )) * fVar10) * fVar10) * fVar10,
                        fVar31 + (fVar15 + ((((fVar20 * auVar34._8_4_ + fVar31 * auVar33._8_4_) -
                                             (fVar15 + fVar15)) - fVar24) +
                                           (fVar24 + fVar15 + ((fVar31 + fVar31) - (fVar20 + fVar20)
                                                              )) * fVar10) * fVar10) * fVar10);
    }
  }
  auVar33._8_8_ = uVar12;
  auVar33._0_8_ = uVar11;
  return auVar33;
}


