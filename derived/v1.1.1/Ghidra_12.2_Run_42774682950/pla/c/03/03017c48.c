/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03017c48; name: FUN_03017c48
 */


void FUN_03017c48(float param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined8 *)(param_2 + 100) = 0;
  *(undefined8 *)(param_2 + 0x5c) = 0;
  *(undefined8 *)(param_2 + 0x54) = 0;
  *(undefined8 *)(param_2 + 0x4c) = 0;
  *(undefined8 *)(param_2 + 0x44) = 0;
  *(undefined8 *)(param_2 + 0x3c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  if (param_3 == 1) {
    *(undefined8 *)(param_2 + 0x18) = 0;
LAB_03017c8c:
    uVar1 = 0x3f8000003f800000;
LAB_03017c98:
    fVar2 = 0.0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 8) = uVar1;
    *(undefined8 *)(param_2 + 0x10) = 0x42c8000043480000;
    if (param_1 != 0.0) {
      fVar2 = ABS(param_1) * 0.0;
    }
    *(float *)(param_2 + 0x24) = fVar2;
    fVar3 = 200.0;
  }
  else {
    switch(param_3) {
    case 0:
      fVar3 = 0.0;
      *(undefined8 *)(param_2 + 8) = 0x3f80000000000000;
      *(undefined8 *)(param_2 + 0x10) = 0;
      fVar2 = 0.0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined4 *)(param_2 + 0x20) = 0;
      if (param_1 != 0.0) {
        fVar2 = ABS(param_1) * 0.0;
      }
      *(float *)(param_2 + 0x24) = fVar2;
      break;
    default:
      fVar3 = *(float *)(param_2 + 0x10);
      break;
    case 2:
      *(undefined8 *)(param_2 + 0x18) = 0;
      uVar1 = 0x3f80000000000000;
      goto LAB_03017c98;
    case 3:
      *(undefined8 *)(param_2 + 0x18) = 0x5f7ffff05f7ffff0;
      goto LAB_03017c8c;
    case 4:
      *(undefined8 *)(param_2 + 0x18) = 0x3f0000003c23d70a;
      *(undefined8 *)(param_2 + 8) = 0x3f8000003f800000;
      *(undefined8 *)(param_2 + 0x10) = 0x4120000042c80000;
      *(undefined4 *)(param_2 + 0x20) = 0x3e4ccccd;
      if (param_1 == 0.0) {
        fVar2 = 1.0;
      }
      else {
        fVar2 = ABS(param_1) * 0.1;
      }
      fVar3 = 100.0;
      *(float *)(param_2 + 0x24) = fVar2;
    }
  }
  *(undefined8 *)(param_2 + 0x28) = 0x3b23d70b3b23d70b;
  *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x3a) = 0x75;
  *(undefined2 *)(param_2 + 0x34) = 0x67ff;
  *(undefined2 *)(param_2 + 0x38) = 0x7304;
  *(undefined2 *)(param_2 + 0x3b) = 0x7306;
  *(undefined4 *)(param_2 + 100) = 5;
  *(undefined8 *)(param_2 + 0x40) = 0xbe000000bf000000;
  *(undefined8 *)(param_2 + 0x48) = 0xbdb33333be800000;
  *(undefined4 *)(param_2 + 0x50) = 0x3c23d70a;
  if (fVar3 <= 0.0) {
    fVar2 = -1.0;
    fVar3 = -1.0;
  }
  else {
    fVar2 = 5.0 / fVar3;
    fVar3 = 0.005 / fVar3;
  }
  *(float *)(param_2 + 0x54) = fVar2;
  *(float *)(param_2 + 0x58) = fVar3;
  *(undefined8 *)(param_2 + 0x5c) = 0x3d4ccccd3d4ccccd;
  return;
}


