/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303ea2c; name: FUN_0303ea2c
 */


void FUN_0303ea2c(float param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1 / param_2;
  fVar2 = param_2 / param_1;
  param_3[0x38] = fVar2;
  param_3[0x39] = fVar1;
  *(ulong *)(param_3 + 0x2e) = (ulong)(uint)fVar1;
  *(ulong *)(param_3 + 0x2c) = CONCAT44(fVar1,fVar1);
  *(ulong *)(param_3 + 0x32) = (ulong)(uint)fVar2;
  *(ulong *)(param_3 + 0x30) = CONCAT44(fVar2,fVar2);
  *(ulong *)(param_3 + 2) = CONCAT44(param_2,param_2);
  fVar2 = param_1 * 0.5;
  *param_3 = param_1;
  param_3[1] = fVar2;
  param_3[0x3a] = param_2 / fVar2;
  param_3[0x3b] = fVar2 / param_2;
  fVar1 = fVar1 * (float)*(undefined8 *)(param_3 + 0x10);
  fVar2 = -((fVar2 / param_2) * (float)*(undefined8 *)(param_3 + 0x10));
  *(ulong *)(param_3 + 0x34) = CONCAT44(fVar1,fVar1);
  *(ulong *)(param_3 + 0x36) = CONCAT44(fVar2,fVar2);
  return;
}


