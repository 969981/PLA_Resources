/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f4730; name: FUN_031f4730
 */


void FUN_031f4730(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar6;
  undefined8 uVar5;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  undefined1 local_40 [16];
  
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_2 + 2) * 0x40);
  fVar3 = (float)*puVar1 - (float)*param_2;
  fVar6 = (float)((ulong)*puVar1 >> 0x20) - (float)((ulong)*param_2 >> 0x20);
  uVar5 = CONCAT44(fVar6,fVar3);
  fVar7 = (float)puVar1[1] - (float)param_2[1];
  fVar9 = (float)((ulong)puVar1[1] >> 0x20) - (float)((ulong)param_2[1] >> 0x20);
  uVar8 = CONCAT44(fVar9,fVar7);
  iVar2 = FUN_031f5e80(puVar1 + 2);
  if (iVar2 == 0) {
    fVar4 = *(float *)(puVar1 + 4);
    if (*(float *)((long)puVar1 + 0x24) <= *(float *)(puVar1 + 4)) {
      fVar4 = *(float *)((long)puVar1 + 0x24);
    }
    fVar4 = fVar4 * 0.01;
    FUN_031f5d58(puVar1 + 2,local_40);
    uVar5 = CONCAT44(fVar6 - local_40._4_4_ * fVar4,fVar3 - local_40._0_4_ * fVar4);
    uVar8 = CONCAT44(fVar9 - local_40._12_4_ * fVar4,fVar7 - local_40._8_4_ * fVar4);
  }
  param_3[1] = uVar8;
  *param_3 = uVar5;
  return;
}


