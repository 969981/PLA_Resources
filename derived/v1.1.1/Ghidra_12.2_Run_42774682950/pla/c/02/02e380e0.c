/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e380e0; name: FUN_02e380e0
 */


void FUN_02e380e0(long param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = 0.0;
  fVar4 = *(float *)(param_1 + 0x10);
  fVar7 = 0.0;
  if (-37.0 <= *(float *)(param_1 + 4) * -0.01) {
    uVar3 = (uint)(*(float *)(param_1 + 4) * -278663.5 + 1.0653532e+09);
    fVar7 = (float)(uVar3 & 0x7fffff | 0x3f800000);
    fVar7 = (fVar7 * (fVar7 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar3 & 0xff800000);
  }
  if (-37.0 <= *(float *)(param_1 + 8) * -0.01) {
    uVar3 = (uint)(*(float *)(param_1 + 8) * -278663.5 + 1.0653532e+09);
    fVar5 = (float)(uVar3 & 0x7fffff | 0x3f800000);
    fVar5 = (fVar5 * (fVar5 * 0.32518977 + 0.020805772) + 0.65304345) * (float)(uVar3 & 0xff800000);
  }
  if (param_3 != 0) {
    fVar6 = *(float *)(param_1 + 0xc) - fVar4;
    fVar7 = fVar7 - fVar5;
    pfVar1 = param_2;
    do {
      fVar8 = *pfVar1 * fVar4;
      fVar4 = fVar4 + fVar6 / (float)param_3;
      fVar8 = (float)NEON_fminnm(fVar8,0x3f800000);
      if (fVar8 <= -1.0) {
        fVar8 = -1.0;
      }
      fVar8 = fVar8 * fVar5;
      fVar5 = fVar5 + fVar7 / (float)param_3;
      pfVar2 = pfVar1 + 1;
      *pfVar1 = fVar8;
      pfVar1 = pfVar2;
    } while (pfVar2 < param_2 + param_3);
  }
  return;
}


