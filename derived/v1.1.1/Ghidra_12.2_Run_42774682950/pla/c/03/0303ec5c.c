/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303ec5c; name: FUN_0303ec5c
 */


void FUN_0303ec5c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  iVar3 = *(int *)(param_1 + 0x2c);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  fVar6 = *(float *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x24);
  fVar4 = (float)FUN_032c8ed0(*(undefined4 *)(param_1 + 0x1c));
  *(float *)(param_1 + 0x30) = (fVar6 * (float)iVar3) / (fVar4 * (float)iVar5);
  return;
}


