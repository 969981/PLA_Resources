/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024ab84; name: FUN_0024ab84
 */


void FUN_0024ab84(float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
                 uint param_7,uint param_8,undefined4 param_9,float *param_10,int param_11,
                 uint param_12)

{
  float fVar1;
  undefined4 uVar2;
  float local_48;
  float local_44;
  
  if ((param_7 & 1) == 0) {
    *(undefined4 *)(param_6 + 0x9c) = 0;
  }
  else {
    local_48 = param_4;
    local_44 = param_2;
    FUN_00251400(0,0x42c80000,&local_44);
    *(undefined4 *)(param_6 + 0x54) = param_9;
    *(float *)(param_6 + 0x80) = local_44 / param_1 + 1e-05;
    FUN_00251400(0,0x42c80000,&local_48);
    param_3 = (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0) * param_3;
    fVar1 = cosf(param_3);
    fVar1 = fVar1 * (local_48 / *(float *)(param_5 + 0x50));
    *(float *)(param_6 + 0x84) = fVar1 + fVar1;
    fVar1 = sinf(param_3);
    *(float *)(param_6 + 0x88) = fVar1 * (local_48 / *(float *)(param_5 + 0x54)) * -2.0;
    fVar1 = *param_10;
    *(undefined4 *)(param_6 + 0xa0) = 0;
    *(float *)(param_6 + 0x90) = fVar1 / 255.0;
    fVar1 = param_10[1];
    *(undefined4 *)(param_6 + 0xa4) = 0;
    *(float *)(param_6 + 0x94) = fVar1 / 255.0;
    fVar1 = param_10[2];
    *(undefined4 *)(param_6 + 0xa8) = 0;
    *(float *)(param_6 + 0x98) = fVar1 / 255.0;
    fVar1 = param_10[3];
    *(undefined4 *)(param_6 + 0xac) = 0;
    *(float *)(param_6 + 0x9c) = fVar1 / 255.0;
    ((undefined4 *)(param_6 + 0xa0))[param_11] = 0x3f800000;
    *(undefined4 *)(param_6 + 0x8c) = 0;
    if ((param_12 & 1) != 0) {
      uVar2 = 0x40000000;
      if ((param_8 & 1) == 0) {
        uVar2 = 0x3f800000;
      }
      *(undefined4 *)(param_6 + 0x8c) = uVar2;
      fVar1 = (float)NEON_ucvtf((uint)*(byte *)(param_5 + 0x5a));
      *(float *)(param_6 + 0x9c) = *(float *)(param_6 + 0x9c) * (fVar1 / 255.0);
    }
  }
  return;
}


