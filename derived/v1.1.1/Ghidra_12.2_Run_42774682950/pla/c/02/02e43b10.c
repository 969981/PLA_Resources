/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e43b10; name: FUN_02e43b10
 */


void FUN_02e43b10(float param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = *(float *)(param_3 + 100);
  uVar1 = *(undefined4 *)(param_3 + 0x6c);
  lVar3 = *(long *)(param_3 + 0x40);
  uVar2 = *(undefined4 *)(param_3 + 0x60);
  if (param_4 == 0) {
    uVar5 = 0;
    uVar4 = 0xffffffffffffffff;
    fVar10 = 0.0;
    uVar6 = 0x3f800000;
  }
  else {
    fVar10 = *(float *)(param_4 + 100) - *(float *)(param_4 + 100) * param_1 * param_1;
    uVar4 = *(undefined8 *)(param_4 + 0x40);
    uVar5 = *(undefined4 *)(param_4 + 0x60);
    uVar6 = *(undefined4 *)(param_4 + 0x6c);
  }
  lVar8 = *(long *)(param_2 + 0xa8);
  *(long *)(param_2 + 0xa8) = lVar3;
  lVar7 = *(long *)(param_2 + 0x98);
  *(long *)(param_2 + 0x98) = param_5;
  *(undefined4 *)(param_2 + 0xb0) = uVar2;
  *(float *)(param_2 + 0xb4) = fVar9 - fVar9 * (1.0 - param_1) * (1.0 - param_1);
  *(undefined4 *)(param_2 + 0xb8) = uVar1;
  *(undefined4 *)(param_2 + 0xbc) = 0;
  *(undefined8 *)(param_2 + 0xc0) = uVar4;
  *(undefined4 *)(param_2 + 200) = uVar5;
  *(float *)(param_2 + 0xcc) = fVar10;
  *(undefined4 *)(param_2 + 0xd0) = uVar6;
  *(undefined4 *)(param_2 + 0xd4) = 0;
  *(float *)(param_2 + 0xd8) = param_1;
  if (lVar8 != lVar3) {
    *(undefined2 *)(param_2 + 0xf8) = 0x101;
  }
  if (lVar7 == param_5) {
    return;
  }
  *(undefined1 *)(param_2 + 0xf8) = 1;
  return;
}


