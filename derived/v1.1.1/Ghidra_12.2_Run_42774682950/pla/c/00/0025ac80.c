/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025ac80; name: FUN_0025ac80
 */


undefined1  [16] FUN_0025ac80(undefined1 param_1 [16],long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar4;
  undefined1 auVar3 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = param_1._8_8_;
  fVar7 = *(float *)(param_2 + 0xc) * 3.0;
  fVar5 = *(float *)(param_2 + 4) * 3.0;
  fVar8 = (fVar7 - fVar5) + 1.0;
  fVar5 = (*(float *)(param_2 + 0xc) * -6.0 + 0.0 + fVar5) / fVar8;
  fVar7 = fVar7 / fVar8;
  fVar9 = (fVar5 * fVar5 - fVar7 * 3.0) / 9.0;
  fVar10 = (((0.0 - param_1._0_4_) / fVar8) * 27.0 +
           (fVar5 * fVar5 * (fVar5 + fVar5) - fVar7 * fVar5 * 9.0)) / 54.0;
  fVar8 = fVar9 * fVar9 * fVar9;
  fVar7 = fVar10 * fVar10 - fVar8;
  if (0.0 < fVar7) {
    fVar8 = 1.0;
    if (-1 < (int)fVar10) {
      fVar8 = -1.0;
    }
    fVar6 = SQRT(fVar7);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar7);
    }
    fVar7 = powf(ABS(fVar10) + fVar6,0.33333334);
    uVar1 = (ulong)(uint)(fVar8 * (fVar7 + fVar9 / fVar7) + fVar5 / -3.0);
    uVar4 = 0;
  }
  else {
    fVar7 = SQRT(fVar8);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar8);
    }
    fVar7 = acosf(fVar10 * (1.0 / fVar7));
    fVar8 = SQRT(fVar9);
    if (NAN(fVar8)) {
      fVar8 = sqrtf(fVar9);
    }
    fVar5 = fVar5 / 3.0;
    fVar8 = fVar8 * -2.0;
    fVar9 = cosf(fVar7 / 3.0);
    fVar9 = fVar8 * fVar9 - fVar5;
    uVar2 = (ulong)(uint)fVar9;
    if ((fVar9 < 0.0) || (1.0 < fVar9)) {
      fVar10 = *(float *)PTR_FloatPi_04372db0;
      fVar9 = cosf((fVar7 + fVar10 + fVar10) / 3.0);
      fVar9 = fVar8 * fVar9 - fVar5;
      uVar2 = (ulong)(uint)fVar9;
      if ((fVar9 < 0.0) || (1.0 < fVar9)) {
        fVar7 = cosf((fVar7 + fVar10 * 4.0) / 3.0);
        fVar5 = fVar8 * fVar7 - fVar5;
        uVar2 = (ulong)(uint)fVar5;
        uVar1 = param_1._0_8_;
        if ((fVar5 < 0.0) || (1.0 < fVar5)) goto LAB_0025ae60;
      }
    }
    uVar4 = 0;
    uVar1 = uVar2;
  }
LAB_0025ae60:
  auVar3._8_8_ = uVar4;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


