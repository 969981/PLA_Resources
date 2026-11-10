/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e38770; name: FUN_02e38770
 */


void FUN_02e38770(float param_1,float param_2,float *param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pfVar3 = param_3;
  if ((3 < param_4) && (uVar2 = param_4 & 0xfffffffc, uVar2 != 0)) {
    fVar7 = (param_2 - param_1) / (float)uVar2;
    fVar12 = fVar7 + param_1;
    fVar13 = fVar12 + fVar7;
    fVar5 = fVar7 * 4.0;
    fVar7 = fVar13 + fVar7;
    pfVar4 = param_3;
    fVar6 = param_1;
    do {
      pfVar3 = pfVar4 + 4;
      fVar8 = (float)*(undefined8 *)pfVar4 * fVar6;
      fVar9 = (float)((ulong)*(undefined8 *)pfVar4 >> 0x20) * fVar12;
      fVar10 = (float)*(undefined8 *)(pfVar4 + 2) * fVar13;
      fVar11 = (float)((ulong)*(undefined8 *)(pfVar4 + 2) >> 0x20) * fVar7;
      fVar6 = fVar6 + fVar5;
      fVar12 = fVar12 + fVar5;
      fVar13 = fVar13 + fVar5;
      fVar7 = fVar7 + fVar5;
      *(ulong *)(pfVar4 + 2) = CONCAT44(fVar11,fVar10);
      *(ulong *)pfVar4 = CONCAT44(fVar9,fVar8);
      pfVar4 = pfVar3;
    } while (pfVar3 < param_3 + uVar2);
  }
  if (pfVar3 < param_3 + param_4) {
    fVar6 = (param_2 - param_1) / (float)param_4;
    uVar1 = (long)param_3 + ~(ulong)pfVar3 + (ulong)param_4 * 4;
    pfVar4 = pfVar3;
    if (((uint)uVar1 >> 2 & 1) == 0) {
      fVar5 = *pfVar3 * param_1;
      param_1 = fVar6 + param_1;
      pfVar4 = pfVar3 + 1;
      *pfVar3 = fVar5;
    }
    if (3 < uVar1) {
      do {
        fVar12 = *pfVar4 * param_1;
        fVar5 = param_1 + fVar6;
        param_1 = fVar5 + fVar6;
        pfVar3 = pfVar4 + 2;
        *pfVar4 = fVar12;
        pfVar4[1] = pfVar4[1] * fVar5;
        pfVar4 = pfVar3;
      } while (pfVar3 < param_3 + param_4);
    }
  }
  return;
}


