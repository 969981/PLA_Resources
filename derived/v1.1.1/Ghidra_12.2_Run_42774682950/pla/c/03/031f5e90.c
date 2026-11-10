/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f5e90; name: FUN_031f5e90
 */


void FUN_031f5e90(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  bVar2 = (*(byte *)(param_1 + 6) & 1) != 0;
  iVar1 = (int)((uint)*(byte *)(param_1 + 6) << 0x18) >> 0x19;
  iVar3 = 1;
  if (bVar2) {
    iVar3 = 2;
  }
  iVar4 = 1;
  if (!bVar2) {
    iVar4 = 2;
  }
  iVar3 = (iVar3 + iVar1) % 3;
  iVar1 = (iVar4 + iVar1) % 3;
  if (iVar3 == 0) {
    fVar6 = *param_1;
  }
  else if (iVar3 == 2) {
    fVar6 = param_1[2];
  }
  else if (iVar3 == 1) {
    fVar6 = param_1[1];
  }
  else {
    fVar6 = param_1[3];
  }
  if (iVar1 == 0) {
    pfVar5 = param_1;
  }
  else if (iVar1 == 2) {
    pfVar5 = param_1 + 2;
  }
  else if (iVar1 == 1) {
    pfVar5 = param_1 + 1;
  }
  else {
    pfVar5 = param_1 + 3;
  }
  fVar8 = param_1[4];
  fVar9 = param_1[5];
  fVar7 = *pfVar5;
  *param_2 = fVar6;
  *param_3 = fVar7;
  *param_4 = fVar6 + fVar8;
  *param_5 = fVar7 + fVar9;
  return;
}


