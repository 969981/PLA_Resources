/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314ebc0; name: FUN_0314ebc0
 */


void FUN_0314ebc0(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar10;
  undefined8 uVar9;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  uVar12 = *(undefined8 *)(param_4 + 0x38);
  uVar8 = *(undefined8 *)(param_4 + 0x30);
  fVar1 = (float)*param_1;
  fVar2 = (float)((ulong)*param_1 >> 0x20);
  fVar6 = fVar2 * (float)((ulong)uVar5 >> 0x20);
  fVar3 = fVar2 * (float)((ulong)uVar12 >> 0x20);
  fVar7 = (float)*param_2;
  fVar10 = (float)((ulong)*param_2 >> 0x20);
  fVar11 = (float)param_2[1];
  fVar13 = (float)((ulong)param_2[1] >> 0x20);
  *(ulong *)(param_3 + 0x18) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20) + fVar13 * fVar6,
                (float)*(undefined8 *)(param_3 + 0x18) + fVar11 * fVar6);
  *(ulong *)(param_3 + 0x10) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) + fVar10 * fVar6,
                (float)*(undefined8 *)(param_3 + 0x10) + fVar7 * fVar6);
  *(ulong *)(param_4 + 0x18) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x18) >> 0x20) - fVar13 * fVar3,
                (float)*(undefined8 *)(param_4 + 0x18) - fVar11 * fVar3);
  *(ulong *)(param_4 + 0x10) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x10) >> 0x20) - fVar10 * fVar3,
                (float)*(undefined8 *)(param_4 + 0x10) - fVar7 * fVar3);
  uVar9 = param_2[2];
  uVar15 = param_2[5];
  uVar14 = param_2[4];
  *(ulong *)(param_3 + 0x28) =
       CONCAT44(fVar6 * (float)((ulong)param_2[3] >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20),
                fVar1 * (float)uVar5 * (float)param_2[3] + (float)*(undefined8 *)(param_3 + 0x28));
  *(ulong *)(param_3 + 0x20) =
       CONCAT44(fVar2 * (float)((ulong)uVar4 >> 0x20) * (float)((ulong)uVar9 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_3 + 0x20) >> 0x20),
                fVar1 * (float)uVar4 * (float)uVar9 + (float)*(undefined8 *)(param_3 + 0x20));
  *(ulong *)(param_4 + 0x28) =
       CONCAT44(fVar3 * (float)((ulong)uVar15 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20),
                fVar1 * (float)uVar12 * (float)uVar15 + (float)*(undefined8 *)(param_4 + 0x28));
  *(ulong *)(param_4 + 0x20) =
       CONCAT44(fVar2 * (float)((ulong)uVar8 >> 0x20) * (float)((ulong)uVar14 >> 0x20) +
                (float)((ulong)*(undefined8 *)(param_4 + 0x20) >> 0x20),
                fVar1 * (float)uVar8 * (float)uVar14 + (float)*(undefined8 *)(param_4 + 0x20));
  return;
}


