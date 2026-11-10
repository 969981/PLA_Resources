/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03269c4c; name: FUN_03269c4c
 */


void FUN_03269c4c(long param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  fVar3 = (float)*param_2;
  fVar11 = (float)uVar2 * fVar3;
  fVar1 = (float)((ulong)uVar2 >> 0x20);
  fVar4 = (float)((ulong)*param_2 >> 0x20);
  fVar13 = fVar1 * fVar4;
  fVar6 = (float)param_2[1];
  fVar14 = (float)uVar5 * fVar6;
  fVar12 = fVar11 + fVar13 + fVar14;
  fVar14 = fVar11 + fVar13 + fVar14;
  *(ulong *)(param_1 + 0x88) =
       CONCAT44((float)((ulong)uVar5 >> 0x20) - (float)((ulong)param_2[1] >> 0x20) * fVar14,
                (float)uVar5 - fVar6 * fVar12);
  *(ulong *)(param_1 + 0x80) = CONCAT44(fVar1 - fVar4 * fVar14,(float)uVar2 - fVar3 * fVar12);
  *(undefined8 *)(param_1 + 0x98) = uVar8;
  *(undefined8 *)(param_1 + 0x90) = uVar7;
  fVar1 = (float)*param_2;
  fVar11 = (float)uVar7 * fVar1;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar6 = (float)((ulong)uVar7 >> 0x20);
  fVar13 = fVar6 * fVar3;
  fVar4 = (float)param_2[1];
  fVar14 = (float)uVar8 * fVar4;
  fVar12 = fVar11 + fVar13 + fVar14;
  fVar14 = fVar11 + fVar13 + fVar14;
  uVar5 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  *(ulong *)(param_1 + 0x98) =
       CONCAT44((float)((ulong)uVar8 >> 0x20) - (float)((ulong)param_2[1] >> 0x20) * fVar14,
                (float)uVar8 - fVar4 * fVar12);
  *(ulong *)(param_1 + 0x90) = CONCAT44(fVar6 - fVar3 * fVar14,(float)uVar7 - fVar1 * fVar12);
  *(undefined8 *)(param_1 + 0xa8) = uVar5;
  *(undefined8 *)(param_1 + 0xa0) = uVar2;
  fVar1 = (float)*param_2;
  fVar11 = (float)uVar2 * fVar1;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar6 = (float)((ulong)uVar2 >> 0x20);
  fVar13 = fVar6 * fVar3;
  fVar4 = (float)param_2[1];
  fVar14 = (float)uVar5 * fVar4;
  fVar12 = fVar11 + fVar13 + fVar14;
  fVar14 = fVar11 + fVar13 + fVar14;
  *(ulong *)(param_1 + 0xa8) =
       CONCAT44((float)((ulong)uVar5 >> 0x20) - (float)((ulong)param_2[1] >> 0x20) * fVar14,
                (float)uVar5 - fVar4 * fVar12);
  *(ulong *)(param_1 + 0xa0) = CONCAT44(fVar6 - fVar3 * fVar14,(float)uVar2 - fVar1 * fVar12);
  *(undefined8 *)(param_1 + 0xb8) = uVar10;
  *(undefined8 *)(param_1 + 0xb0) = uVar9;
  fVar1 = (float)*param_2;
  fVar6 = (float)uVar9 * fVar1;
  fVar3 = (float)((ulong)*param_2 >> 0x20);
  fVar14 = (float)((ulong)uVar9 >> 0x20);
  fVar12 = fVar14 * fVar3;
  fVar4 = (float)param_2[1];
  fVar13 = (float)uVar10 * fVar4;
  fVar11 = fVar6 + fVar12 + fVar13;
  fVar13 = fVar6 + fVar12 + fVar13;
  *(ulong *)(param_1 + 0xb8) =
       CONCAT44((float)((ulong)uVar10 >> 0x20) - (float)((ulong)param_2[1] >> 0x20) * fVar13,
                (float)uVar10 - fVar4 * fVar11);
  *(ulong *)(param_1 + 0xb0) = CONCAT44(fVar14 - fVar3 * fVar13,(float)uVar9 - fVar1 * fVar11);
  return;
}


