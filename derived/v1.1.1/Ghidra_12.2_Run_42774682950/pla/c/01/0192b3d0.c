/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0192b3d0; name: FUN_0192b3d0
 */


void FUN_0192b3d0(undefined1 *param_1,float param_2,long param_3,long param_4)

{
  float fVar1;
  
  *param_1 = 0;
  fVar1 = 1.0 - param_2;
  *(float *)(param_1 + 4) = fVar1 * *(float *)(param_3 + 4) + *(float *)(param_4 + 4) * param_2;
  *(float *)(param_1 + 8) = fVar1 * *(float *)(param_3 + 8) + *(float *)(param_4 + 8) * param_2;
  *(float *)(param_1 + 0xc) =
       fVar1 * *(float *)(param_3 + 0xc) + *(float *)(param_4 + 0xc) * param_2;
  *(float *)(param_1 + 0x10) =
       fVar1 * *(float *)(param_3 + 0x10) + *(float *)(param_4 + 0x10) * param_2;
  *(float *)(param_1 + 0x14) =
       fVar1 * *(float *)(param_3 + 0x14) + *(float *)(param_4 + 0x14) * param_2;
  *(float *)(param_1 + 0x18) =
       fVar1 * *(float *)(param_3 + 0x18) + *(float *)(param_4 + 0x18) * param_2;
  *(float *)(param_1 + 0x1c) =
       fVar1 * *(float *)(param_3 + 0x1c) + *(float *)(param_4 + 0x1c) * param_2;
  return;
}


