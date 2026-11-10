/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cc428; name: FUN_032cc428
 */


void FUN_032cc428(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  fVar5 = (float)((ulong)*param_3 >> 0x20);
  uVar7 = param_2[4];
  uVar8 = param_2[6];
  fVar4 = (float)*param_3;
  fVar6 = (float)param_3[1];
  uVar3 = param_2[8];
  param_1[1] = CONCAT44((float)((ulong)param_2[7] >> 0x20) +
                        (float)((ulong)param_2[9] >> 0x20) +
                        (float)((ulong)param_2[5] >> 0x20) * fVar6 +
                        (float)((ulong)param_2[1] >> 0x20) * fVar4 +
                        (float)((ulong)param_2[3] >> 0x20) * fVar5,
                        (float)param_2[7] +
                        (float)param_2[9] +
                        (float)param_2[5] * fVar6 +
                        (float)param_2[1] * fVar4 + (float)param_2[3] * fVar5);
  *param_1 = CONCAT44((float)((ulong)uVar8 >> 0x20) +
                      (float)((ulong)uVar3 >> 0x20) +
                      (float)((ulong)uVar7 >> 0x20) * fVar6 +
                      (float)((ulong)uVar1 >> 0x20) * fVar4 + (float)((ulong)uVar2 >> 0x20) * fVar5,
                      (float)uVar8 +
                      (float)uVar3 +
                      (float)uVar7 * fVar6 + (float)uVar1 * fVar4 + (float)uVar2 * fVar5);
  return;
}


