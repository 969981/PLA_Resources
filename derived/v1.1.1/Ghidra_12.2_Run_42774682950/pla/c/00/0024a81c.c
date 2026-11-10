/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024a81c; name: FUN_0024a81c
 */


float FUN_0024a81c(long param_1,float *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_34;
  
  fVar8 = *(float *)(param_1 + 0x50) * 0.5;
  fVar7 = *(float *)(param_1 + 0x54) * 0.5;
  pfVar3 = (float *)(param_3 + 0x2c);
  local_34 = *pfVar3;
  fVar9 = 1.0 / fVar7;
  fVar10 = 1.0 / fVar8;
  FUN_00251400(0,fVar8,&local_34);
  FUN_00251400(0,fVar7,&local_34);
  *param_2 = fVar10;
  param_2[1] = fVar9;
  fVar5 = 1.0;
  if (-1 < *(char *)(param_3 + 4)) {
    fVar5 = 0.0;
  }
  param_2[2] = fVar5;
  param_2[5] = local_34;
  pfVar4 = (float *)(param_3 + 0x1c);
  param_2[4] = *pfVar4;
  FUN_00251400(0x3f000000,0x40400000);
  fVar5 = 0.99999;
  if (local_34 / fVar8 != 0.0) {
    fVar5 = 1.0 - local_34 / fVar8;
  }
  param_2[6] = fVar5;
  FUN_00251400(0,0x3f800000);
  fVar5 = 0.99999;
  if (local_34 / fVar7 != 0.0) {
    fVar5 = 1.0 - local_34 / fVar7;
  }
  param_2[7] = fVar5;
  FUN_00251400(0,0x3f800000);
  fVar5 = local_34;
  uVar2 = (ulong)(*(byte *)(param_3 + 4) >> 6) & 1;
  local_34 = pfVar3[uVar2];
  FUN_00251400(0,fVar8,&local_34);
  FUN_00251400(0,fVar7,&local_34);
  *param_2 = fVar10;
  param_2[1] = fVar9;
  fVar6 = 1.0;
  if (-1 < *(char *)(param_3 + 4)) {
    fVar6 = 0.0;
  }
  param_2[2] = fVar6;
  param_2[9] = local_34;
  param_2[8] = pfVar4[uVar2];
  FUN_00251400(0x3f000000,0x40400000);
  fVar6 = 0.99999;
  if (local_34 / fVar8 != 0.0) {
    fVar6 = 1.0 - local_34 / fVar8;
  }
  param_2[10] = fVar6;
  FUN_00251400(0,0x3f800000);
  fVar6 = 0.99999;
  if (local_34 / fVar7 != 0.0) {
    fVar6 = 1.0 - local_34 / fVar7;
  }
  param_2[0xb] = fVar6;
  FUN_00251400(0,0x3f800000);
  uVar2 = (ulong)(*(byte *)(param_3 + 4) >> 3) & 8;
  local_34 = *(float *)((long)pfVar3 + uVar2);
  FUN_00251400(0,fVar8,&local_34);
  FUN_00251400(0,fVar7,&local_34);
  *param_2 = fVar10;
  param_2[1] = fVar9;
  fVar6 = 1.0;
  if (-1 < *(char *)(param_3 + 4)) {
    fVar6 = 0.0;
  }
  param_2[2] = fVar6;
  param_2[0xd] = local_34;
  param_2[0xc] = *(float *)((long)pfVar4 + uVar2);
  FUN_00251400(0x3f000000,0x40400000);
  fVar6 = 0.99999;
  if (local_34 / fVar8 != 0.0) {
    fVar6 = 1.0 - local_34 / fVar8;
  }
  param_2[0xe] = fVar6;
  FUN_00251400(0,0x3f800000);
  fVar6 = 0.99999;
  if (local_34 / fVar7 != 0.0) {
    fVar6 = 1.0 - local_34 / fVar7;
  }
  param_2[0xf] = fVar6;
  FUN_00251400(0,0x3f800000);
  lVar1 = 0;
  if ((*(byte *)(param_3 + 4) & 0x40) != 0) {
    lVar1 = 0xc;
  }
  local_34 = *(float *)((long)pfVar3 + lVar1);
  FUN_00251400(0,fVar8,&local_34);
  FUN_00251400(0,fVar7,&local_34);
  *param_2 = fVar10;
  param_2[1] = fVar9;
  fVar9 = 1.0;
  if (-1 < *(char *)(param_3 + 4)) {
    fVar9 = 0.0;
  }
  param_2[2] = fVar9;
  param_2[0x11] = local_34;
  param_2[0x10] = *(float *)((long)pfVar4 + lVar1);
  FUN_00251400(0x3f000000,0x40400000);
  fVar9 = 0.99999;
  if (local_34 / fVar8 != 0.0) {
    fVar9 = 1.0 - local_34 / fVar8;
  }
  param_2[0x12] = fVar9;
  FUN_00251400(0,0x3f800000);
  fVar8 = 0.99999;
  if (local_34 / fVar7 != 0.0) {
    fVar8 = 1.0 - local_34 / fVar7;
  }
  param_2[0x13] = fVar8;
  FUN_00251400(0,0x3f800000,param_2 + 0x13);
  return fVar5;
}


