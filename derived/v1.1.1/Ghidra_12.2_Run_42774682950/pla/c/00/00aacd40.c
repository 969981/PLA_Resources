/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aacd40; name: FUN_00aacd40
 */


float FUN_00aacd40(float param_1,float param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  if ((param_1 == 0.0) && (param_2 == 0.0)) {
    uVar1 = 0;
    goto LAB_00aacdb4;
  }
  if (param_2 < 0.0) {
    if (0.0 <= param_1) {
      param_2 = -param_2;
      if (param_1 <= param_2) {
        iVar3 = (int)((param_1 / param_2) * 128.0);
        fVar5 = (param_1 / param_2) * 128.0 - (float)iVar3;
        fVar4 = *(float *)((long)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8) + 4);
        iVar3 = *(int *)PTR_AngleIndexHalfRound_04372cd8 -
                *(int *)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8);
        goto LAB_00aaceac;
      }
      piVar2 = (int *)PTR_AngleIndexQuarterRound_04379f40;
      goto LAB_00aacedc;
    }
    if (param_1 < param_2) {
      piVar2 = (int *)PTR_AngleIndexThreeQuarterRound_0437a5a0;
      goto LAB_00aace74;
    }
    iVar3 = (int)((param_1 / param_2) * 128.0);
    fVar5 = (param_1 / param_2) * 128.0 - (float)iVar3;
    fVar4 = *(float *)((long)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8) + 4);
    iVar3 = *(int *)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8) +
            *(int *)PTR_AngleIndexHalfRound_04372cd8;
  }
  else {
    if (0.0 <= param_1) {
      if (param_1 <= param_2) {
        iVar3 = (int)((param_1 / param_2) * 128.0);
        uVar1 = *(int *)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8) +
                (int)(((param_1 / param_2) * 128.0 - (float)iVar3) *
                     *(float *)((long)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8) + 4));
        goto LAB_00aacdb4;
      }
      piVar2 = (int *)PTR_AngleIndexQuarterRound_04379f40;
LAB_00aace74:
      iVar3 = (int)((param_2 / param_1) * 128.0);
      fVar5 = (param_2 / param_1) * 128.0 - (float)iVar3;
      fVar4 = *(float *)((long)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8) + 4);
      iVar3 = *piVar2 - *(int *)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8);
LAB_00aaceac:
      uVar1 = iVar3 - (int)(fVar5 * fVar4);
      goto LAB_00aacdb4;
    }
    param_1 = -param_1;
    if (param_1 <= param_2) {
      iVar3 = (int)((param_1 / param_2) * 128.0);
      uVar1 = -(*(int *)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8) +
               (int)(((param_1 / param_2) * 128.0 - (float)iVar3) *
                    *(float *)((long)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8) + 4)));
      goto LAB_00aacdb4;
    }
    piVar2 = (int *)PTR_AngleIndexThreeQuarterRound_0437a5a0;
LAB_00aacedc:
    iVar3 = (int)((param_2 / param_1) * 128.0);
    fVar5 = (param_2 / param_1) * 128.0 - (float)iVar3;
    fVar4 = *(float *)((long)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8) + 4);
    iVar3 = *(int *)(PTR_AtanSampleTable_04379f38 + (long)iVar3 * 8) + *piVar2;
  }
  uVar1 = iVar3 + (int)(fVar5 * fVar4);
LAB_00aacdb4:
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
  return (*(float *)PTR_FloatDegree180_04372ce0 / fVar5) * (float)uVar1;
}


