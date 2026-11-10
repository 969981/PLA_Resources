/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0aae0; name: FUN_02e0aae0
 */


void FUN_02e0aae0(float param_1,float param_2,float *param_3,uint param_4)

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
  
  if (param_2 != param_1) {
    pfVar4 = param_3;
    if ((3 < param_4) && (uVar1 = param_4 & 0xfffffffc, uVar1 != 0)) {
      fVar8 = (param_2 - param_1) / (float)uVar1;
      fVar13 = fVar8 + param_1;
      fVar14 = fVar13 + fVar8;
      fVar6 = fVar8 * 4.0;
      fVar8 = fVar14 + fVar8;
      pfVar3 = param_3;
      fVar7 = param_1;
      do {
        pfVar4 = pfVar3 + 4;
        fVar9 = (float)*(undefined8 *)pfVar3 * fVar7;
        fVar10 = (float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * fVar13;
        fVar11 = (float)*(undefined8 *)(pfVar3 + 2) * fVar14;
        fVar12 = (float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * fVar8;
        fVar7 = fVar7 + fVar6;
        fVar13 = fVar13 + fVar6;
        fVar14 = fVar14 + fVar6;
        fVar8 = fVar8 + fVar6;
        *(ulong *)(pfVar3 + 2) = CONCAT44(fVar12,fVar11);
        *(ulong *)pfVar3 = CONCAT44(fVar10,fVar9);
        pfVar3 = pfVar4;
      } while (pfVar4 < param_3 + uVar1);
    }
    if (pfVar4 < param_3 + param_4) {
      fVar7 = (param_2 - param_1) / (float)param_4;
      uVar2 = (long)param_3 + ~(ulong)pfVar4 + (ulong)param_4 * 4;
      pfVar3 = pfVar4;
      if (((uint)uVar2 >> 2 & 1) == 0) {
        fVar6 = *pfVar4 * param_1;
        param_1 = fVar7 + param_1;
        pfVar3 = pfVar4 + 1;
        *pfVar4 = fVar6;
      }
      if (3 < uVar2) {
        do {
          fVar13 = *pfVar3 * param_1;
          fVar6 = param_1 + fVar7;
          param_1 = fVar6 + fVar7;
          pfVar4 = pfVar3 + 2;
          *pfVar3 = fVar13;
          pfVar3[1] = pfVar3[1] * fVar6;
          pfVar3 = pfVar4;
        } while (pfVar4 < param_3 + param_4);
      }
    }
    return;
  }
  if (param_1 != 1.0) {
    pfVar4 = param_3;
    if ((3 < param_4) && ((param_4 & 0xfffffffc) != 0)) {
      pfVar3 = param_3;
      do {
        pfVar4 = pfVar3 + 4;
        *(ulong *)(pfVar3 + 2) =
             CONCAT44((float)((ulong)*(undefined8 *)(pfVar3 + 2) >> 0x20) * param_1,
                      (float)*(undefined8 *)(pfVar3 + 2) * param_1);
        *(ulong *)pfVar3 =
             CONCAT44((float)((ulong)*(undefined8 *)pfVar3 >> 0x20) * param_1,
                      (float)*(undefined8 *)pfVar3 * param_1);
        pfVar3 = pfVar4;
      } while (pfVar4 < param_3 + (param_4 & 0xfffffffc));
    }
    if (pfVar4 < param_3 + param_4) {
      uVar2 = (long)param_3 + ~(ulong)pfVar4 + (ulong)param_4 * 4;
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
        } while (pfVar4 < param_3 + param_4);
      }
    }
  }
  return;
}


