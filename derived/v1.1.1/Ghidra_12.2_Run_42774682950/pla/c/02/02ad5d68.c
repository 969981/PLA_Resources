/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ad5d68; name: FUN_02ad5d68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_02ad5d68(long param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  undefined1 auVar14 [16];
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
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_3c [3];
  
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  fVar15 = (float)uVar3;
  auVar7 = *(undefined1 (*) [12])(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  fVar26 = (float)uVar4;
  auVar6 = *(undefined1 (*) [12])(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x88);
  fVar19 = (float)*(undefined8 *)(param_1 + 200);
  auVar8 = *(undefined1 (*) [12])(param_1 + 0xc0);
  fVar12 = auVar6._0_4_;
  fVar16 = auVar6._4_4_;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x98);
  uVar29 = (undefined4)_UNK_0388a138;
  fVar13 = auVar7._0_4_;
  fVar17 = auVar7._4_4_;
  fVar21 = auVar8._0_4_;
  fVar24 = auVar8._4_4_;
  fVar18 = SUB124(*(undefined1 (*) [12])(param_1 + 0xa0),8);
  fVar25 = SUB124(*(undefined1 (*) [12])(param_1 + 0xc0),8);
  fVar20 = SUB124(*(undefined1 (*) [12])(param_1 + 0xb0),8);
  fVar30 = (float)*(undefined8 *)(param_1 + 0xd8);
  fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0xd8) >> 0x20);
  fVar27 = (float)*(undefined8 *)(param_1 + 0xd0);
  fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 0x20);
  *(ulong *)(param_1 + 0xa8) = (ulong)(uint)fVar21;
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar12,fVar13);
  *(ulong *)(param_1 + 0xb8) = (ulong)(uint)fVar24;
  *(ulong *)(param_1 + 0xb0) = CONCAT44(fVar16,fVar17);
  fVar22 = 0.0 - (fVar13 * fVar27 + fVar17 * fVar28 + fVar18 * fVar30 +
                 (float)((ulong)uVar3 >> 0x20) * fVar31);
  fVar23 = 0.0 - (fVar12 * fVar27 + fVar16 * fVar28 + fVar20 * fVar30 +
                 (float)((ulong)uVar4 >> 0x20) * fVar31);
  fVar24 = 0.0 - (fVar21 * fVar27 + fVar24 * fVar28 + fVar25 * fVar30 +
                 (float)((ulong)*(undefined8 *)(param_1 + 200) >> 0x20) * fVar31);
  *(ulong *)(param_1 + 200) = CONCAT44(uVar29,fVar25);
  *(ulong *)(param_1 + 0xc0) = CONCAT44(fVar20,fVar18);
  *(ulong *)(param_1 + 0xd8) = CONCAT44(0x3f800000,fVar24);
  *(ulong *)(param_1 + 0xd0) = CONCAT44(fVar23,fVar22);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[3];
  *(undefined8 *)(param_1 + 0x70) = param_2[2];
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar4;
  fVar20 = (float)*(undefined8 *)(param_1 + 0x68);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x60);
  fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  fVar27 = (float)*(undefined8 *)(param_1 + 0x78);
  fVar17 = (float)*(undefined8 *)(param_1 + 0x70);
  fVar25 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[7];
  *(undefined8 *)(param_1 + 0x90) = param_2[6];
  *(undefined8 *)(param_1 + 0x98) = uVar5;
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  fVar30 = (float)*(undefined8 *)(param_1 + 0x88);
  fVar18 = (float)*(undefined8 *)(param_1 + 0x80);
  fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  fVar31 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar33 = (float)*(undefined8 *)(param_1 + 0x98);
  fVar12 = fVar13 * fVar15 + fVar17 * fVar26 + fVar18 * fVar19 + fVar31 * 0.0;
  fVar16 = fVar20 * fVar15 + fVar27 * fVar26 + fVar30 * fVar19 + fVar33 * 0.0;
  fVar17 = fVar13 * fVar22 + fVar17 * fVar23 + fVar18 * fVar24 + fVar31 * 1.0;
  fVar18 = fVar21 * fVar22 + fVar25 * fVar23 + fVar28 * fVar24 + fVar32 * 1.0;
  fVar20 = fVar20 * fVar22 + fVar27 * fVar23 + fVar30 * fVar24 + fVar33 * 1.0;
  fVar13 = atan2f(fVar12,fVar16);
  fVar12 = fVar12 * fVar12 + fVar16 * fVar16;
  fVar16 = SQRT(fVar12);
  if (NAN(fVar16)) {
    fVar16 = sqrtf(fVar12);
  }
  fVar12 = atan2f(fVar21 * fVar15 + fVar25 * fVar26 + fVar28 * fVar19 + fVar32 * 0.0,fVar16);
  fVar16 = *(float *)(param_1 + 0xf0);
  fVar24 = *(float *)(param_1 + 0xf4);
  fVar25 = -fVar16;
  fVar21 = *(float *)(param_1 + 0xe0);
  if ((fVar17 <= fVar24 && fVar13 <= fVar24) || (fVar21 <= fVar25)) {
    if ((-fVar24 <= fVar17 && -fVar24 <= fVar13) || (fVar16 <= fVar21)) {
      fVar13 = *(float *)(param_1 + 0xf8);
      if (-fVar13 < fVar21) {
        if (fVar13 <= fVar21) {
          fVar21 = fVar21 - fVar13;
          *(float *)(param_1 + 0xe0) = fVar21;
        }
        else {
          fVar21 = 0.0;
          *(undefined4 *)(param_1 + 0xe0) = 0;
        }
        goto LAB_02ad5f34;
      }
    }
    else {
      fVar13 = 1.0;
    }
    fVar21 = fVar21 + fVar13;
    *(float *)(param_1 + 0xe0) = fVar21;
  }
  else {
    fVar21 = fVar21 + -1.0;
    *(float *)(param_1 + 0xe0) = fVar21;
  }
LAB_02ad5f34:
  fVar13 = -fVar24;
  fVar17 = *(float *)(param_1 + 0xe4);
  if ((fVar13 <= fVar18 && fVar13 <= fVar12) || (fVar17 <= fVar25)) {
    if ((fVar18 <= fVar24 && fVar12 <= fVar24) || (fVar16 <= fVar17)) {
      fVar12 = *(float *)(param_1 + 0xf8);
      if (fVar17 <= -fVar12) {
        fVar17 = fVar17 + fVar12;
      }
      else if (fVar12 <= fVar17) {
        fVar17 = fVar17 - fVar12;
      }
      else {
        fVar17 = 0.0;
      }
    }
    else {
      fVar17 = fVar17 + 1.0;
    }
  }
  else {
    fVar17 = fVar17 + -1.0;
  }
  fVar12 = *(float *)(param_1 + 0xe8);
  bVar9 = false;
  bVar10 = true;
  bVar11 = false;
  if (fVar20 < fVar13) {
    bVar9 = false;
    bVar10 = false;
    bVar11 = true;
    if (!NAN(fVar12) && !NAN(fVar25)) {
      bVar9 = fVar12 < fVar25;
      bVar10 = fVar12 == fVar25;
      bVar11 = false;
    }
  }
  *(float *)(param_1 + 0xe4) = fVar17;
  if (bVar10 || bVar9 != bVar11) {
    bVar9 = false;
    if ((fVar24 < fVar20) && (bVar9 = false, !NAN(fVar12) && !NAN(fVar16))) {
      bVar9 = fVar12 < fVar16;
    }
    if (bVar9) {
      fVar13 = 1.0;
    }
    else {
      fVar13 = *(float *)(param_1 + 0xf8);
      if (-fVar13 < fVar12) {
        if (fVar13 <= fVar12) {
          fVar12 = fVar12 - fVar13;
        }
        else {
          fVar12 = 0.0;
        }
        goto LAB_02ad6018;
      }
    }
    fVar12 = fVar12 + fVar13;
  }
  else {
    fVar12 = fVar12 + -1.0;
  }
LAB_02ad6018:
  *(float *)(param_1 + 0xe8) = fVar12;
  local_3c[2] = ABS(fVar21);
  pfVar1 = local_3c + 1;
  if (ABS(fVar17) <= ABS(fVar21)) {
    pfVar1 = local_3c + 2;
  }
  local_3c[0] = ABS(fVar12);
  local_3c[1] = ABS(fVar17);
  auVar14._0_4_ = fVar21 / fVar16;
  pfVar2 = local_3c;
  if (ABS(fVar12) <= *pfVar1) {
    pfVar2 = pfVar1;
  }
  fVar13 = *pfVar2;
  *(float *)(param_1 + 0xec) = fVar13;
  auVar14._4_4_ = fVar17 / fVar16;
  auVar14._8_4_ = fVar12 / fVar16;
  auVar14._12_4_ = fVar13 / fVar16;
  return auVar14;
}


