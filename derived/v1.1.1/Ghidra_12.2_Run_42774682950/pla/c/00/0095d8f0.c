/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0095d8f0; name: FUN_0095d8f0
 */


float FUN_0095d8f0(float param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  puVar1 = PTR_AngleIndexHalfRound_04372cd8;
  if (param_1 < 0.0) {
    if (-0.70710677 <= param_1) {
      iVar2 = *(int *)PTR_AngleIndexQuarterRound_04379f40;
      fVar7 = 1.0 - param_1 * param_1;
      fVar6 = SQRT(fVar7);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar7);
      }
      iVar5 = (int)((-param_1 / fVar6) * 128.0);
      uVar3 = *(int *)(PTR_AtanSampleTable_04379f38 + (long)iVar5 * 8) + iVar2 +
              (int)(*(float *)((long)(PTR_AtanSampleTable_04379f38 + (long)iVar5 * 8) + 4) *
                   ((-param_1 / fVar6) * 128.0 - (float)iVar5));
      goto LAB_0095d984;
    }
    iVar2 = *(int *)PTR_AngleIndexHalfRound_04372cd8;
    fVar7 = 1.0 - param_1 * param_1;
    fVar6 = SQRT(fVar7);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar7);
    }
    fVar6 = (fVar6 / param_1) * -128.0;
    iVar5 = (int)fVar6;
    piVar4 = (int *)(PTR_AtanSampleTable_04379f38 + (long)iVar5 * 8);
    fVar6 = fVar6 - (float)iVar5;
  }
  else {
    if (0.70710677 < param_1) {
      fVar7 = 1.0 - param_1 * param_1;
      fVar6 = SQRT(fVar7);
      if (NAN(fVar6)) {
        fVar6 = sqrtf(fVar7);
      }
      iVar2 = (int)((fVar6 / param_1) * 128.0);
      uVar3 = *(int *)(PTR_AtanSampleTable_04379f38 + (long)iVar2 * 8) +
              (int)(*(float *)((long)(PTR_AtanSampleTable_04379f38 + (long)iVar2 * 8) + 4) *
                   ((fVar6 / param_1) * 128.0 - (float)iVar2));
      goto LAB_0095d984;
    }
    fVar7 = 1.0 - param_1 * param_1;
    fVar6 = SQRT(fVar7);
    iVar2 = *(int *)PTR_AngleIndexQuarterRound_04379f40;
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar7);
    }
    iVar5 = (int)((param_1 / fVar6) * 128.0);
    piVar4 = (int *)(PTR_AtanSampleTable_04379f38 + (long)iVar5 * 8);
    fVar6 = (param_1 / fVar6) * 128.0 - (float)iVar5;
  }
  uVar3 = (iVar2 - *piVar4) - (int)((float)piVar4[1] * fVar6);
LAB_0095d984:
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)puVar1);
  return (*(float *)PTR_FloatDegree180_04372ce0 / fVar6) * (float)uVar3;
}


