/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e37f04; name: FUN_02e37f04
 */


void FUN_02e37f04(long param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar4 = 0.0;
  fVar7 = 0.0;
  if (-37.0 <= *(float *)(param_1 + 4) * -0.01) {
    uVar3 = (uint)(*(float *)(param_1 + 4) * -278663.5 + 1.0653532e+09);
    fVar7 = (float)(uVar3 & 0x7fffff | 0x3f800000);
    fVar7 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar3 & 0xff800000);
  }
  if (-37.0 <= *(float *)(param_1 + 8) * -0.01) {
    uVar3 = (uint)(*(float *)(param_1 + 8) * -278663.5 + 1.0653532e+09);
    fVar4 = (float)(uVar3 & 0x7fffff | 0x3f800000);
    fVar4 = (fVar4 * (fVar4 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar3 & 0xff800000);
  }
  if (param_3 != 0) {
    fVar7 = fVar7 - fVar4;
    fVar6 = (*(float *)(param_1 + 0x18) * 0.003333333 + 0.6666666) * *(float *)(param_1 + 0x10);
    fVar5 = (*(float *)(param_1 + 0x14) * 0.003333333 + 0.6666666) * *(float *)(param_1 + 0xc) -
            fVar6;
    pfVar1 = param_2;
    do {
      fVar8 = *pfVar1 * fVar6;
      fVar6 = fVar6 + fVar5 / (float)param_3;
      fVar10 = ABS(fVar8);
      fVar11 = fVar10 * -3.0 + 2.0;
      fVar9 = 1.0;
      if (fVar10 <= 0.6666666) {
        fVar9 = fVar8;
      }
      if (fVar10 <= 0.6666666) {
        fVar9 = 0.99999994 - fVar11 * fVar11 * 0.3333333;
      }
      if (fVar10 <= 0.3333333) {
        fVar9 = fVar10 + fVar10;
      }
      if (fVar8 <= 0.0) {
        fVar9 = -fVar9;
      }
      fVar9 = fVar9 * fVar4;
      fVar4 = fVar4 + fVar7 / (float)param_3;
      pfVar2 = pfVar1 + 1;
      *pfVar1 = fVar9;
      pfVar1 = pfVar2;
    } while (pfVar2 < param_2 + param_3);
  }
  return;
}


