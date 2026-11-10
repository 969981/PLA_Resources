/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141d374; name: FUN_0141d374
 */


void FUN_0141d374(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 0x5b4) - *(float *)(param_1 + 0x5b0);
  fVar2 = (float)NEON_fminnm(fVar1,0x41f00000);
  fVar3 = 0.0;
  fVar4 = 0.0;
  if ((int)fVar2 != 0) {
    fVar4 = fVar1 / (float)(uint)(int)fVar2;
  }
  *(float *)(param_1 + 0x5b8) = fVar4;
  *(float *)(param_1 + 0x5c8) = -fVar4;
  if (*(float *)(param_1 + 0x5d0) != 100.0) {
    if (*(float *)(param_1 + 0x5c0) == 0.0) {
      fVar1 = 0.0;
    }
    else {
      fVar1 = (100.0 - *(float *)(param_1 + 0x5d0)) / *(float *)(param_1 + 0x5c0);
    }
    fVar3 = -(fVar1 * -fVar4);
  }
  *(float *)(param_1 + 0x5d8) = fVar3;
  return;
}


