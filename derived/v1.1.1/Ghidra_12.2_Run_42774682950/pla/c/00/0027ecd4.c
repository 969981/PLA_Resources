/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027ecd4; name: FUN_0027ecd4
 */


void FUN_0027ecd4(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(lVar5 + 0x418);
  lVar6 = *(long *)(*(long *)(lVar5 + 0x238) + 0x338);
  lVar2 = FUN_0028d5b8(lVar5 + 0x7a8,*(undefined4 *)(lVar7 + 0x38));
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((long)param_3 + 0x84) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_3 + 0xf) = 0;
  lVar4 = *(long *)(param_2 + 0x10);
  puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x1f0) + (long)*(int *)(param_2 + 0x20) * 0x10);
  uStack_58 = puVar1[1];
  local_60 = *puVar1;
  FUN_00274278(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18),
               *(undefined8 *)(lVar4 + 0x98),param_3,*(undefined8 *)(lVar4 + 0x238),&local_60);
  uVar3 = FUN_00274a98(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18),
                       *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x98),param_3 + 2,
                       *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x238),&local_60);
  fVar9 = *(float *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x238) + 0x18) + 0x360);
  fVar8 = *(float *)(param_3 + 0x11);
  param_3[1] = CONCAT44((int)((ulong)param_3[1] >> 0x20),fVar9 * (float)param_3[1]);
  *param_3 = CONCAT44(fVar9 * (float)((ulong)*param_3 >> 0x20),fVar9 * (float)*param_3);
  param_3[3] = CONCAT44((int)((ulong)param_3[3] >> 0x20),fVar9 * (float)param_3[3]);
  param_3[2] = CONCAT44(fVar9 * (float)((ulong)param_3[2] >> 0x20),fVar9 * (float)param_3[2]);
  *(undefined4 *)(param_3 + 0x11) = *(undefined4 *)(param_2 + 0x18);
  FUN_0027ee80(uVar3,param_2,param_3,lVar6,
               *(float *)(param_3 + 0x10) == 0.0 ||
               0.0 < (float)(int)*(float *)(param_3 + 0x10) - (float)(int)fVar8);
  lVar2 = lVar2 + (long)(*(int *)(lVar7 + 0x20) * *(int *)((long)param_3 + 0x7c)) * 0x50;
  if (*(int *)(lVar6 + 0x28) == 0) {
    FUN_002809e4(0,param_1,lVar2,param_3,lVar5,lVar6);
  }
  else {
    FUN_00280d38(0,param_1,lVar2,param_3,lVar5,lVar6);
  }
  FUN_0028d5c4(*(long *)(param_2 + 0x10) + 0x7a8);
  return;
}


