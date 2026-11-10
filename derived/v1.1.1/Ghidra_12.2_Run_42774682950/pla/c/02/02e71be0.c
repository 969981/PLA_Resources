/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71be0; name: FUN_02e71be0
 */


undefined8 FUN_02e71be0(long param_1,float *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_14 [4];
  
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 6);
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(float *)(param_1 + 0x80) = param_2[8];
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = (int)uVar1;
  *(float *)(param_1 + 0x3c) = fVar8 * fVar4 - fVar7 * fVar5;
  *(float *)(param_1 + 0x40) = fVar6 * fVar5 - fVar9 * fVar8;
  *(float *)(param_1 + 0x44) = fVar9 * fVar7 - fVar6 * fVar4;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x60);
  FUN_02e44d58(&DAT_0440a0e8,*(undefined8 *)(*(long *)(param_1 + 8) + 0x48),auStack_14);
  return 1;
}


