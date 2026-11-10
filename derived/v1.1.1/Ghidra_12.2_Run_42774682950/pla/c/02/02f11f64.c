/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f11f64; name: FUN_02f11f64
 */


void FUN_02f11f64(long param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = *param_3;
  fVar5 = param_3[1];
  fVar7 = *param_4;
  fVar9 = param_4[1];
  fVar12 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar13 = fVar7 * fVar7 + fVar9 * fVar9;
  fVar10 = ((fVar5 * fVar1 + fVar7 * (fVar2 - fVar5)) - fVar9 * fVar1) + fVar3 * (fVar9 - fVar2);
  fVar11 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar6 = (fVar5 * fVar11 - fVar12 * fVar2) + fVar9 * (fVar12 - fVar11) + (fVar2 - fVar5) * fVar13;
  fVar4 = (fVar11 * fVar3 + fVar7 * (fVar12 - fVar11)) - fVar13 * fVar3;
  fVar8 = fVar4 + fVar1 * (fVar13 - fVar12);
  *(float *)(param_1 + 0xc) = fVar6 / (fVar10 + fVar10);
  *(float *)(param_1 + 0x10) = (-((fVar13 - fVar12) * fVar1) - fVar4) / (fVar10 + fVar10);
  *(float *)(param_1 + 0x14) =
       SQRT(fVar6 * fVar6 +
            ((fVar9 * fVar11 * fVar3 + fVar7 * fVar12 * fVar2 + fVar5 * fVar1 * fVar13) -
            (fVar5 * fVar11 * fVar7 + fVar12 * fVar9 * fVar1 + fVar2 * fVar13 * fVar3)) *
            fVar10 * 4.0 + fVar8 * fVar8) / (ABS(fVar10) + ABS(fVar10));
  return;
}


