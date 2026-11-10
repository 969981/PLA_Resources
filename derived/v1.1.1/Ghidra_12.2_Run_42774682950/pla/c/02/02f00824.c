/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f00824; name: FUN_02f00824
 */


undefined8 FUN_02f00824(float *param_1,uint param_2,float *param_3,float *param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 != 0) {
    uVar3 = (ulong)param_2;
    pfVar5 = param_3;
    do {
      fVar6 = *param_1;
      *pfVar5 = fVar6 * 0.017453294;
      if (3.1415927 <= fVar6 * 0.017453294) {
        return 2;
      }
      uVar3 = uVar3 - 1;
      pfVar5 = pfVar5 + 1;
      param_1 = param_1 + 1;
    } while (uVar3 != 0);
  }
  fVar6 = *param_3;
  if (1.5707964 <= fVar6) {
    return 2;
  }
  if (1 < param_2) {
    lVar4 = (ulong)param_2 - 1;
    fVar7 = fVar6;
    pfVar5 = param_3;
    do {
      pfVar5 = pfVar5 + 1;
      fVar8 = *pfVar5;
      if (fVar8 < fVar7) {
        return 2;
      }
      fVar7 = fVar8 - fVar7;
      bVar1 = false;
      bVar2 = false;
      if (fVar7 != 0.0) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar7)) {
          bVar1 = fVar7 < 3.1415927;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        return 2;
      }
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      fVar6 = fVar7;
      lVar4 = lVar4 + -1;
      fVar7 = fVar8;
    } while (lVar4 != 0);
    fVar6 = (float)NEON_fminnm(6.2831855 - (param_3[param_2 - 1] + param_3[param_2 - 1]),fVar6);
  }
  *param_4 = fVar6;
  return 1;
}


