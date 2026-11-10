/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b81b8; name: FUN_031b81b8
 */


void FUN_031b81b8(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  lVar2 = *(long *)(*param_1 + 0x10);
  puVar1 = (undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0x38) + (param_2 & 0x3fffff) * 0x10);
  uVar4 = *puVar1;
  fVar8 = (float)uVar4;
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  fVar7 = (float)puVar1[1];
  fVar3 = ((float)*(undefined8 *)(lVar2 + 0x70) +
          (float)*(undefined8 *)(lVar2 + 0x60) * fVar7 +
          (float)*(undefined8 *)(lVar2 + 0x40) * fVar8 +
          (float)*(undefined8 *)(lVar2 + 0x50) * fVar5) - (float)param_1[2];
  fVar6 = ((float)((ulong)*(undefined8 *)(lVar2 + 0x70) >> 0x20) +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x60) >> 0x20) * fVar7 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20) * fVar8 +
          (float)((ulong)*(undefined8 *)(lVar2 + 0x50) >> 0x20) * fVar5) -
          (float)((ulong)param_1[2] >> 0x20);
  fVar8 = ((float)*(undefined8 *)(lVar2 + 0x78) +
          (float)*(undefined8 *)(lVar2 + 0x68) * fVar7 +
          (float)*(undefined8 *)(lVar2 + 0x48) * fVar8 +
          (float)*(undefined8 *)(lVar2 + 0x58) * fVar5) - (float)param_1[3];
  fVar3 = fVar3 * fVar3;
  fVar6 = fVar6 * fVar6;
  fVar8 = fVar8 * fVar8;
  uVar4 = CONCAT44(fVar3 + fVar6 + fVar8,fVar3 + fVar6 + fVar8);
  uVar9 = NEON_frsqrte(uVar4,4);
  fVar8 = (float)uVar9;
  fVar3 = (float)((ulong)uVar9 >> 0x20);
  uVar9 = NEON_frsqrts(uVar4,CONCAT44(fVar3 * fVar3,fVar8 * fVar8),4);
  fVar8 = fVar8 * (float)uVar9;
  fVar3 = fVar3 * (float)((ulong)uVar9 >> 0x20);
  NEON_frsqrts(uVar4,CONCAT44(fVar3 * fVar3,fVar8 * fVar8),4);
  return;
}


