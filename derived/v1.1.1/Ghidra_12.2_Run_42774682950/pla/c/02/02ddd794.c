/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ddd794; name: FUN_02ddd794
 */


void FUN_02ddd794(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  fVar7 = 0.0;
  lVar4 = (long)param_2;
  lVar5 = *(long *)(param_1 + 0x110);
  if (((*(int *)(param_1 + 0x94) == 1) && (*(char *)(lVar5 + lVar4 * 0x450 + 0x290) != '\0')) &&
     (fVar8 = *(float *)(lVar5 + lVar4 * 0x450 + 0x414), 0.0 < fVar8)) {
    lVar6 = lVar5 + lVar4 * 0x450;
    fVar13 = (*(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0x44)) / fVar8;
    fVar8 = (*(float *)(lVar6 + 0x48) + *(float *)(lVar6 + 0x4c)) / fVar8;
    fVar7 = 0.0;
    fVar9 = 0.0;
    if (0.0 < fVar13) {
      fVar9 = (float)*(undefined8 *)(lVar6 + 0x2d0) - *(float *)(lVar6 + 0x2f0);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar6 + 0x2d0) >> 0x20) - *(float *)(lVar6 + 0x2f4);
      fVar11 = (float)*(undefined8 *)(lVar6 + 0x2d8) - *(float *)(lVar6 + 0x2f8);
      fVar12 = (float)((ulong)*(undefined8 *)(lVar6 + 0x2d8) >> 0x20) - *(float *)(lVar6 + 0x2fc);
      fVar9 = fVar9 * fVar9;
      fVar10 = fVar10 * fVar10;
      fVar11 = fVar11 * fVar11;
      fVar12 = fVar12 * fVar12;
      auVar14._4_4_ = fVar10;
      auVar14._0_4_ = fVar9;
      auVar14._8_4_ = fVar11;
      auVar14._12_4_ = fVar12;
      auVar3._4_4_ = fVar10;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = fVar11;
      auVar3._12_4_ = fVar12;
      auVar14 = NEON_ext(auVar14,auVar3,8,1);
      fVar9 = SQRT(auVar14._0_4_ + fVar9 + auVar14._4_4_ + fVar10) / fVar13;
    }
    if (0.0 < fVar8) {
      fVar7 = *(float *)(lVar6 + 0x2b0) - (float)*(undefined8 *)(lVar6 + 0x310);
      fVar13 = *(float *)(lVar6 + 0x2b4) - (float)((ulong)*(undefined8 *)(lVar6 + 0x310) >> 0x20);
      fVar10 = *(float *)(lVar6 + 0x2b8) - (float)*(undefined8 *)(lVar6 + 0x318);
      fVar11 = *(float *)(lVar6 + 700) - (float)((ulong)*(undefined8 *)(lVar6 + 0x318) >> 0x20);
      fVar7 = fVar7 * fVar7;
      fVar13 = fVar13 * fVar13;
      fVar10 = fVar10 * fVar10;
      fVar11 = fVar11 * fVar11;
      auVar1._4_4_ = fVar13;
      auVar1._0_4_ = fVar7;
      auVar1._8_4_ = fVar10;
      auVar1._12_4_ = fVar11;
      auVar2._4_4_ = fVar13;
      auVar2._0_4_ = fVar7;
      auVar2._8_4_ = fVar10;
      auVar2._12_4_ = fVar11;
      auVar14 = NEON_ext(auVar1,auVar2,8,1);
      fVar7 = SQRT(auVar14._0_4_ + fVar7 + auVar14._4_4_ + fVar13) / fVar8;
    }
    fVar7 = (fVar9 + fVar7) * 0.5;
  }
  *(float *)(lVar5 + lVar4 * 0x450 + 0x410) = fVar7;
  return;
}


