/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030753f0; name: FUN_030753f0
 */


undefined8
FUN_030753f0(long param_1,long param_2,undefined1 (*param_3) [16],double *param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  float *pfVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  lVar9 = (long)*(int *)(param_2 + 0x10);
  if (0 < *(int *)(param_2 + 0x10)) {
    auVar3 = param_3[2];
    auVar4 = *param_3;
    auVar5 = param_3[1];
    auVar12 = NEON_ext(auVar4,auVar4,8,1);
    auVar17 = NEON_ext(auVar5,auVar5,8,1);
    auVar11 = NEON_ext(auVar3,auVar3,8,1);
    fVar6 = *(float *)(param_1 + 0x10);
    fVar7 = *(float *)(param_1 + 0x14);
    fVar8 = *(float *)(param_1 + 0x18);
    fVar13 = fVar6 * (float)(((double)*(float *)param_3[3] +
                             (double)(float)*(undefined8 *)param_3[4]) - *param_4);
    fVar14 = fVar7 * (float)(((double)*(float *)(param_3[3] + 4) +
                             (double)(float)((ulong)*(undefined8 *)param_3[4] >> 0x20)) - param_4[1]
                            );
    fVar15 = fVar8 * (float)(((double)*(float *)(param_3[3] + 8) +
                             (double)(float)*(undefined8 *)(param_3[4] + 8)) - param_4[2]);
    fVar16 = *(float *)(param_1 + 0x1c) *
             (float)(((double)*(float *)(param_3[3] + 0xc) +
                     (double)(float)((ulong)*(undefined8 *)(param_3[4] + 8) >> 0x20)) - param_4[3]);
    auVar19._4_4_ = fVar14;
    auVar19._0_4_ = fVar13;
    auVar19._8_4_ = fVar15;
    auVar19._12_4_ = fVar16;
    auVar1._4_4_ = fVar14;
    auVar1._0_4_ = fVar13;
    auVar1._8_4_ = fVar15;
    auVar1._12_4_ = fVar16;
    auVar19 = NEON_ext(auVar19,auVar1,8,1);
    fVar13 = *(float *)(param_1 + 0x1c) + fVar13 + fVar14 + auVar19._0_4_;
    fVar14 = fVar6 * (float)*param_5;
    fVar15 = fVar7 * (float)((ulong)*param_5 >> 0x20);
    fVar16 = fVar8 * (float)param_5[1];
    pfVar10 = (float *)(*(long *)(param_2 + 8) + 8);
    uVar2 = NEON_fmax(CONCAT44(1e-05 - (float)((ulong)*param_6 >> 0x20) * (fVar16 + fVar14 + fVar15)
                               ,1e-05 - (float)*param_6 * (fVar16 + fVar14 + fVar15)),
                      0x3727c5ac3727c5ac,4);
    do {
      auVar18._0_4_ =
           (auVar12._0_4_ * fVar8 + auVar4._0_4_ * fVar6 + auVar4._4_4_ * fVar7) *
           (float)*(undefined8 *)(pfVar10 + -2);
      auVar18._4_4_ =
           (auVar17._0_4_ * fVar8 + auVar5._0_4_ * fVar6 + auVar5._4_4_ * fVar7) *
           (float)((ulong)*(undefined8 *)(pfVar10 + -2) >> 0x20);
      auVar18._8_4_ =
           (auVar11._0_4_ * fVar8 + auVar3._0_4_ * fVar6 + auVar3._4_4_ * fVar7) * *pfVar10;
      auVar18._12_4_ = fVar13 * *pfVar10;
      auVar19 = NEON_ext(auVar18,auVar18,8,1);
      if (auVar18._0_4_ + auVar18._4_4_ + auVar19._0_4_ + fVar13 < (float)uVar2) {
        return 1;
      }
      lVar9 = lVar9 + -1;
      pfVar10 = pfVar10 + 3;
    } while (lVar9 != 0);
  }
  return 0;
}


