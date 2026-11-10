/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03288a50; name: FUN_03288a50
 */


uint FUN_03288a50(long param_1,undefined8 *param_2,undefined8 *param_3)

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
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  fVar2 = (float)*param_3;
  fVar5 = (float)*(undefined8 *)(param_1 + 0x30);
  fVar8 = fVar2 * fVar5;
  fVar3 = (float)((ulong)*param_3 >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20);
  fVar10 = fVar3 * fVar6;
  fVar4 = (float)param_3[1];
  fVar7 = (float)*(undefined8 *)(param_1 + 0x38);
  fVar11 = fVar4 * fVar7;
  fVar9 = fVar8 + fVar10 + fVar11;
  fVar11 = fVar8 + fVar10 + fVar11;
  fVar8 = (float)((ulong)param_3[1] >> 0x20);
  local_20 = CONCAT44(fVar6 - fVar3 * fVar11,fVar5 - fVar2 * fVar9);
  uStack_18 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) - fVar8 * fVar11,
                       fVar7 - fVar4 * fVar9);
  fVar5 = (float)*param_2;
  fVar9 = fVar2 * fVar5;
  fVar6 = (float)((ulong)*param_2 >> 0x20);
  fVar11 = fVar3 * fVar6;
  fVar7 = (float)param_2[1];
  fVar12 = fVar4 * fVar7;
  fVar10 = fVar9 + fVar11 + fVar12;
  local_30 = CONCAT44(fVar6 - fVar3 * (fVar9 + fVar11 + fVar12),fVar5 - fVar2 * fVar10);
  uStack_28 = CONCAT44((float)((ulong)param_2[1] >> 0x20) + *(float *)(param_1 + 0xa0),
                       fVar7 - fVar4 * fVar10);
  fVar5 = (float)param_2[2] - (float)*(undefined8 *)(param_1 + 0x50);
  fVar6 = (float)((ulong)param_2[2] >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  fVar7 = (float)param_2[3] - (float)*(undefined8 *)(param_1 + 0x58);
  fVar9 = fVar2 * fVar5;
  fVar11 = fVar3 * fVar6;
  fVar12 = fVar4 * fVar7;
  fVar10 = fVar9 + fVar11 + fVar12;
  fVar12 = fVar9 + fVar11 + fVar12;
  local_40 = CONCAT44(fVar6 - fVar3 * fVar12,fVar5 - fVar2 * fVar10);
  uStack_38 = CONCAT44(((float)((ulong)param_2[3] >> 0x20) -
                       (float)((ulong)*(undefined8 *)(param_1 + 0x58) >> 0x20)) - fVar8 * fVar12,
                       fVar7 - fVar4 * fVar10);
  uVar1 = FUN_03288b30(&local_20,&local_30,&local_40);
  return uVar1 & 1;
}


