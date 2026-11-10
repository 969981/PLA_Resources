/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315ee00; name: FUN_0315ee00
 */


void FUN_0315ee00(undefined1 param_1 [16],long param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_1._0_4_;
  fVar1 = (float)FUN_032c8ef0(fVar2 - *(float *)(param_2 + 0x18));
  if (fVar2 * 1.1920929e-07 < fVar1) {
    if ((((param_3 & 1) == 0) || (*(int *)(param_2 + 0x40) == 0)) ||
       (*(float *)(param_2 + 0x18) <= fVar2)) {
      FUN_0315e684(param_2);
    }
    else {
      FUN_0315eecc(*(float *)(param_2 + 0x18),param_1._0_8_,param_2);
    }
  }
  *(float *)(param_2 + 0x18) = fVar2;
  if (fVar2 <= *(float *)(param_2 + 0x1c) + 0.001) {
    *(undefined4 *)(param_2 + 0x24) = 0;
    fVar1 = 0.0;
  }
  else {
    fVar2 = fVar2 - *(float *)(param_2 + 0x1c);
    fVar1 = fVar2 / 254.0;
    *(int *)(param_2 + 0x24) = (int)(254.0 / fVar2) + 1;
  }
  *(float *)(param_2 + 0x20) = fVar1;
  return;
}


