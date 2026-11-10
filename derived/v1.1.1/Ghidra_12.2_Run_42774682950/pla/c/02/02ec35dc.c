/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec35dc; name: FUN_02ec35dc
 */


void FUN_02ec35dc(long param_1,int param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  *(undefined4 *)(param_3 + 1) = 0xffffffff;
  fVar7 = *(float *)(param_1 + 0x44);
  fVar10 = *(float *)(param_1 + 0x48);
  iVar1 = *(int *)(param_1 + 0x4c);
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x40);
  puVar6 = param_3 + 3;
  *puVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_3 + 4) = uVar2;
  *(float *)((long)param_3 + 0x24) = fVar7;
  *(float *)(param_3 + 5) = fVar10;
  *(int *)((long)param_3 + 0x2c) = iVar1;
  param_3[6] = uVar5;
  if (iVar1 == 0) {
    fVar8 = 6.2831855;
LAB_02ec3660:
    fVar7 = fmodf(fVar7,fVar8);
    *(float *)((long)param_3 + 0x24) = fVar7;
  }
  else if (iVar1 != 5) {
    fVar8 = 1.0;
    goto LAB_02ec3660;
  }
  fVar9 = *(float *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar4 = *(uint *)(param_1 + 0x1c);
  fVar8 = fVar9;
  if (uVar3 - param_2 < uVar4) {
    fVar8 = (fVar9 * (float)(uVar3 - param_2)) / (float)uVar4;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    if (uVar3 < uVar4) {
      fVar9 = (fVar9 * (float)uVar3) / (float)uVar4;
    }
    FUN_02ec3760(fVar9,fVar8,*(undefined4 *)(param_1 + 0x30),puVar6,param_4,param_2);
    *(undefined4 *)((long)param_3 + 0xc) = *(undefined4 *)(param_4 + (ulong)(param_2 - 1) * 4);
    *(float *)(param_3 + 2) = fVar9;
    return;
  }
  fVar7 = fVar7 + (float)(param_2 - 1) * fVar10;
  *param_3 = 0;
  *(float *)((long)param_3 + 0x24) = fVar7;
  if (iVar1 == 0) {
    fVar10 = 6.2831855;
  }
  else {
    if (iVar1 == 5) goto LAB_02ec3738;
    fVar10 = 1.0;
  }
  fVar7 = fmodf(fVar7,fVar10);
  *(float *)((long)param_3 + 0x24) = fVar7;
LAB_02ec3738:
  FUN_02ec3760(fVar8,fVar8,*(undefined4 *)(param_1 + 0x30),puVar6,(long)param_3 + 0xc,1);
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)((long)param_3 + 0xc);
  return;
}


