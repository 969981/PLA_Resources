/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024af88; name: FUN_0024af88
 */


void FUN_0024af88(undefined1 param_1 [16],float param_2,long param_3,long param_4,long param_5,
                 long param_6)

{
  void *__dest;
  long lVar1;
  undefined8 uVar2;
  void *__src;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_54;
  float local_38;
  float local_34;
  
  __dest = (void *)(*(long *)(*(long *)(param_4 + 200) + 0x38) + (long)*(int *)(param_6 + 0xc));
  uVar2 = FUN_00244288();
  __src = (void *)FUN_0023e82c(uVar2,param_4);
  memcpy(__dest,__src,0x230);
  local_38 = (float)FUN_00242da4(param_3);
  local_54 = *(float *)(param_5 + 0xe4);
  fVar3 = 0.0;
  local_34 = param_2;
  FUN_00251400(0,0x42c80000,&local_54);
  fVar5 = 0.0;
  if (0.0 < *(float *)(param_5 + 0xe4)) {
    fVar4 = *(float *)(param_5 + 0xe0) *
            (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0);
    fVar3 = cosf(fVar4);
    fVar5 = -(fVar3 * local_54);
    local_38 = local_38 - fVar3 * local_54;
    fVar4 = sinf(fVar4);
    fVar3 = -(fVar4 * local_54);
    local_34 = local_34 - fVar4 * local_54;
  }
  FUN_0022d200(fVar5 / *(float *)(param_3 + 0x50),-fVar3 / *(float *)(param_3 + 0x54),param_4,__dest
               ,&local_38,(float *)(param_3 + 0x50),*(undefined1 *)(param_3 + 0xf1),
               *(undefined8 *)(param_3 + 0xf8));
  *(undefined8 *)((long)__dest + 0xd0) = 0x3f8000003f800000;
  *(undefined8 *)((long)__dest + 0xd8) = 0x3f8000003f800000;
  lVar1 = *(long *)(*(long *)(param_4 + 200) + 0x38) + (long)*(int *)(param_6 + 0x10);
  uVar2 = FUN_0024a81c(param_3,lVar1,param_5);
  *(undefined4 *)(lVar1 + 0x7c) = 0;
  FUN_0024ab84(uVar2,*(undefined4 *)(param_5 + 0xe8),*(undefined4 *)(param_5 + 0xe0),
               *(undefined4 *)(param_5 + 0xe4),param_3,lVar1,*(byte *)(param_5 + 4) >> 4 & 1,
               *(byte *)(param_5 + 4) >> 5 & 1,*(undefined1 *)(param_5 + 10),param_5 + 0xd0,
               *(undefined1 *)(param_5 + 0xb),1);
  *(undefined8 *)(lVar1 + 0xbc) = 0xbf80000000000000;
  return;
}


