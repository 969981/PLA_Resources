/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cc3fc; name: FUN_032cc3fc
 */


void FUN_032cc3fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  uVar6 = param_2[4];
  uVar7 = param_2[6];
  fVar3 = (float)*param_3;
  fVar5 = (float)param_3[1];
  param_1[1] = CONCAT44((float)((ulong)param_2[7] >> 0x20) +
                        (float)((ulong)param_2[5] >> 0x20) * fVar5 +
                        (float)((ulong)param_2[1] >> 0x20) * fVar3 +
                        (float)((ulong)param_2[3] >> 0x20) * fVar4,
                        (float)param_2[7] +
                        (float)param_2[5] * fVar5 +
                        (float)param_2[1] * fVar3 + (float)param_2[3] * fVar4);
  *param_1 = CONCAT44((float)((ulong)uVar7 >> 0x20) +
                      (float)((ulong)uVar6 >> 0x20) * fVar5 +
                      (float)((ulong)uVar1 >> 0x20) * fVar3 + (float)((ulong)uVar2 >> 0x20) * fVar4,
                      (float)uVar7 +
                      (float)uVar6 * fVar5 + (float)uVar1 * fVar3 + (float)uVar2 * fVar4);
  return;
}


