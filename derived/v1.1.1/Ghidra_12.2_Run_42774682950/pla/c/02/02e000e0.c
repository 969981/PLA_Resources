/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e000e0; name: FUN_02e000e0
 */


void FUN_02e000e0(float param_1,float param_2,float *param_3,float *param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = fVar6 + fVar7;
  fVar10 = (float)((uint)(fVar8 + -6.2831855) ^
                  ((uint)(fVar8 + -6.2831855) ^ (uint)fVar8) & -(uint)(fVar8 < 3.1415925));
  fVar8 = fVar10 + fVar7;
  fVar9 = (float)((uint)(fVar8 + -6.2831855) ^
                 ((uint)(fVar8 + -6.2831855) ^ (uint)fVar8) & -(uint)(fVar8 < 3.1415925));
  fVar8 = fVar9 + fVar7;
  fVar7 = fVar7 * 4.0;
  fVar8 = (float)((uint)(fVar8 + -6.2831855) ^
                 ((uint)(fVar8 + -6.2831855) ^ (uint)fVar8) & -(uint)(fVar8 < 3.1415925));
  if (6.2831855 <= fVar7) {
    fVar7 = fVar7 + -6.2831855;
  }
  if (param_5 != 0) {
    pfVar4 = param_4;
    do {
      fVar11 = fVar6 * fVar6;
      fVar12 = fVar10 * fVar10;
      fVar13 = fVar9 * fVar9;
      fVar14 = fVar8 * fVar8;
      fVar15 = fVar6 + fVar7;
      fVar16 = fVar10 + fVar7;
      fVar17 = fVar9 + fVar7;
      fVar18 = fVar8 + fVar7;
      pfVar3 = pfVar4 + 4;
      pfVar4[2] = fVar9 + (fVar13 * (fVar13 * -0.00016147594 + 0.008199913) + -0.16652186) *
                          fVar13 * fVar9;
      pfVar4[3] = fVar8 + (fVar14 * (fVar14 * -0.00016147594 + 0.008199913) + -0.16652186) *
                          fVar14 * fVar8;
      *pfVar4 = fVar6 + (fVar11 * (fVar11 * -0.00016147594 + 0.008199913) + -0.16652186) *
                        fVar11 * fVar6;
      pfVar4[1] = fVar10 + (fVar12 * (fVar12 * -0.00016147594 + 0.008199913) + -0.16652186) *
                           fVar12 * fVar10;
      fVar6 = (float)((uint)(fVar15 + -6.2831855) ^
                     ((uint)(fVar15 + -6.2831855) ^ (uint)fVar15) & -(uint)(fVar15 < 3.1415925));
      fVar10 = (float)((uint)(fVar16 + -6.2831855) ^
                      ((uint)(fVar16 + -6.2831855) ^ (uint)fVar16) & -(uint)(fVar16 < 3.1415925));
      fVar9 = (float)((uint)(fVar17 + -6.2831855) ^
                     ((uint)(fVar17 + -6.2831855) ^ (uint)fVar17) & -(uint)(fVar17 < 3.1415925));
      fVar8 = (float)((uint)(fVar18 + -6.2831855) ^
                     ((uint)(fVar18 + -6.2831855) ^ (uint)fVar18) & -(uint)(fVar18 < 3.1415925));
      pfVar4 = pfVar3;
    } while (pfVar3 < param_4 + param_5);
  }
  *param_3 = fVar6;
  if (param_2 != param_1) {
    pfVar4 = param_4;
    if ((3 < param_5) && (uVar1 = param_5 & 0xfffffffc, uVar1 != 0)) {
      fVar9 = (param_2 - param_1) / (float)uVar1;
      fVar6 = fVar9 + param_1;
      fVar10 = fVar6 + fVar9;
      fVar8 = fVar9 * 4.0;
      fVar9 = fVar10 + fVar9;
      pfVar3 = param_4;
      fVar7 = param_1;
      do {
        pfVar4 = pfVar3 + 4;
        fVar11 = *pfVar3 * fVar7;
        fVar12 = pfVar3[1] * fVar6;
        fVar13 = pfVar3[2] * fVar10;
        fVar14 = pfVar3[3] * fVar9;
        fVar7 = fVar7 + fVar8;
        fVar6 = fVar6 + fVar8;
        fVar10 = fVar10 + fVar8;
        fVar9 = fVar9 + fVar8;
        pfVar3[2] = fVar13;
        pfVar3[3] = fVar14;
        *pfVar3 = fVar11;
        pfVar3[1] = fVar12;
        pfVar3 = pfVar4;
      } while (pfVar4 < param_4 + uVar1);
    }
    if (pfVar4 < param_4 + param_5) {
      fVar7 = (param_2 - param_1) / (float)param_5;
      uVar2 = (long)param_4 + ~(ulong)pfVar4 + (ulong)param_5 * 4;
      pfVar3 = pfVar4;
      if (((uint)uVar2 >> 2 & 1) == 0) {
        fVar8 = *pfVar4 * param_1;
        param_1 = fVar7 + param_1;
        pfVar3 = pfVar4 + 1;
        *pfVar4 = fVar8;
      }
      if (3 < uVar2) {
        do {
          fVar6 = *pfVar3 * param_1;
          fVar8 = param_1 + fVar7;
          param_1 = fVar8 + fVar7;
          pfVar4 = pfVar3 + 2;
          *pfVar3 = fVar6;
          pfVar3[1] = pfVar3[1] * fVar8;
          pfVar3 = pfVar4;
        } while (pfVar4 < param_4 + param_5);
      }
    }
    return;
  }
  if (param_1 != 1.0) {
    pfVar4 = param_4;
    if ((3 < param_5) && ((param_5 & 0xfffffffc) != 0)) {
      pfVar3 = param_4;
      do {
        pfVar4 = pfVar3 + 4;
        pfVar3[2] = pfVar3[2] * param_1;
        pfVar3[3] = pfVar3[3] * param_1;
        *pfVar3 = *pfVar3 * param_1;
        pfVar3[1] = pfVar3[1] * param_1;
        pfVar3 = pfVar4;
      } while (pfVar4 < param_4 + (param_5 & 0xfffffffc));
    }
    if (pfVar4 < param_4 + param_5) {
      uVar2 = (long)param_4 + ~(ulong)pfVar4 + (ulong)param_5 * 4;
      uVar1 = ((uint)(uVar2 >> 2) & 0x3fffffff) + 1;
      uVar5 = (ulong)uVar1 & 3;
      pfVar3 = pfVar4;
      if ((uVar1 & 3) != 0) {
        do {
          uVar5 = uVar5 - 1;
          pfVar4 = pfVar3 + 1;
          *pfVar3 = *pfVar3 * param_1;
          pfVar3 = pfVar4;
        } while (uVar5 != 0);
      }
      if (0xb < uVar2) {
        do {
          *pfVar4 = *pfVar4 * param_1;
          pfVar4[1] = pfVar4[1] * param_1;
          pfVar4[2] = pfVar4[2] * param_1;
          pfVar4[3] = pfVar4[3] * param_1;
          pfVar4 = pfVar4 + 4;
        } while (pfVar4 < param_4 + param_5);
      }
    }
  }
  return;
}


