/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01086000; name: FUN_01086000
 */


undefined1  [16]
FUN_01086000(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5)

{
  undefined1 auVar1 [16];
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
  
  fVar2 = (float)*param_2;
  fVar6 = (float)*param_3;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar7 = (float)((ulong)*param_3 >> 0x20);
  fVar4 = (float)param_2[1];
  fVar8 = (float)param_3[1];
  fVar5 = (float)((ulong)param_2[1] >> 0x20);
  fVar9 = (float)((ulong)param_3[1] >> 0x20);
  fVar2 = fVar2 + (fVar6 - fVar2) * param_1;
  fVar3 = fVar3 + (fVar7 - fVar3) * param_1;
  fVar4 = fVar4 + (fVar8 - fVar4) * param_1;
  fVar5 = fVar5 + (fVar9 - fVar5) * param_1;
  fVar10 = (float)*param_4;
  fVar11 = (float)((ulong)*param_4 >> 0x20);
  fVar12 = (float)param_4[1];
  fVar13 = (float)((ulong)param_4[1] >> 0x20);
  fVar6 = fVar6 + (fVar10 - fVar6) * param_1;
  fVar7 = fVar7 + (fVar11 - fVar7) * param_1;
  fVar8 = fVar8 + (fVar12 - fVar8) * param_1;
  fVar9 = fVar9 + (fVar13 - fVar9) * param_1;
  fVar2 = fVar2 + (fVar6 - fVar2) * param_1;
  fVar3 = fVar3 + (fVar7 - fVar3) * param_1;
  fVar4 = fVar4 + (fVar8 - fVar4) * param_1;
  fVar5 = fVar5 + (fVar9 - fVar5) * param_1;
  auVar1._4_4_ = fVar3 + ((fVar7 + ((fVar11 + ((float)((ulong)*param_5 >> 0x20) - fVar11) * param_1)
                                   - fVar7) * param_1) - fVar3) * param_1;
  auVar1._0_4_ = fVar2 + ((fVar6 + ((fVar10 + ((float)*param_5 - fVar10) * param_1) - fVar6) *
                                   param_1) - fVar2) * param_1;
  auVar1._12_4_ =
       fVar5 + ((fVar9 + ((fVar13 + ((float)((ulong)param_5[1] >> 0x20) - fVar13) * param_1) - fVar9
                         ) * param_1) - fVar5) * param_1;
  auVar1._8_4_ = fVar4 + ((fVar8 + ((fVar12 + ((float)param_5[1] - fVar12) * param_1) - fVar8) *
                                   param_1) - fVar4) * param_1;
  return auVar1;
}


