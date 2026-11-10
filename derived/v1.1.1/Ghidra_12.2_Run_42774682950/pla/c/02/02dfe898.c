/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfe898; name: FUN_02dfe898
 */


void FUN_02dfe898(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  
  if (param_2 != 0) {
    uVar1 = 0;
    fVar10 = *(float *)(param_1 + 0xa4);
    fVar7 = fVar10 * 4.0;
    fVar13 = *(float *)(param_1 + 0x98);
    fVar6 = fVar10 + *(float *)(param_1 + 0xac);
    fVar8 = fVar13 + *(float *)(param_1 + 0xa0);
    fVar14 = fVar8 + fVar13;
    fVar11 = fVar6 + fVar10;
    fVar15 = fVar14 + fVar13;
    fVar12 = fVar11 + fVar10;
    fVar9 = fVar13 * 4.0;
    fVar13 = fVar15 + fVar13;
    fVar10 = fVar12 + fVar10;
    do {
      uVar1 = uVar1 + 4;
      fVar2 = fVar8 * (float)*param_4;
      fVar3 = fVar14 * (float)((ulong)*param_4 >> 0x20);
      fVar4 = fVar15 * (float)param_4[1];
      fVar5 = fVar13 * (float)((ulong)param_4[1] >> 0x20);
      fVar8 = fVar8 + fVar9;
      fVar14 = fVar14 + fVar9;
      fVar15 = fVar15 + fVar9;
      fVar13 = fVar13 + fVar9;
      fVar2 = ((float)*param_3 + fVar2) * fVar6;
      fVar3 = ((float)((ulong)*param_3 >> 0x20) + fVar3) * fVar11;
      fVar4 = ((float)param_3[1] + fVar4) * fVar12;
      fVar5 = ((float)((ulong)param_3[1] >> 0x20) + fVar5) * fVar10;
      fVar6 = fVar6 + fVar7;
      fVar11 = fVar11 + fVar7;
      fVar12 = fVar12 + fVar7;
      fVar10 = fVar10 + fVar7;
      param_3[1] = CONCAT44(fVar5,fVar4);
      *param_3 = CONCAT44(fVar3,fVar2);
      param_4 = param_4 + 2;
      param_3 = param_3 + 2;
    } while (uVar1 < param_2);
  }
  return;
}


