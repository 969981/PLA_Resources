/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0281e088; name: FUN_0281e088
 */


void FUN_0281e088(undefined1 param_1 [16],float param_2,long *param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(**(code **)(*param_3 + 0xe0))();
  if ((int)param_3[0xe2] == 0) {
    fVar2 = -(*(float *)((long)param_3 + 0x76c) * (float)*(int *)(param_3[0x116] + 0x10));
    fVar3 = 0.0;
  }
  else {
    fVar3 = *(float *)(param_3 + 0xed) * (float)*(int *)(param_3[0x116] + 0x10);
    fVar2 = 0.0;
  }
  param_5[1] = 0;
  *param_5 = CONCAT44(param_2 - fVar2,fVar1 - fVar3);
  return;
}


