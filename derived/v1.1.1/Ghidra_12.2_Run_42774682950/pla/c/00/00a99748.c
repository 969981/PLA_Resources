/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00a99748; name: FUN_00a99748
 */


void FUN_00a99748(long param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0xe0);
  fVar2 = *(float *)(param_1 + 0xe4);
  if (fVar2 == fVar1) {
    return;
  }
  if (fVar1 <= fVar2) {
    fVar2 = fVar2 - *(float *)(param_1 + 0xd8);
    if (fVar1 <= fVar2) {
      fVar1 = fVar2;
    }
  }
  else {
    fVar2 = fVar2 + *(float *)(param_1 + 0xd8);
    if (fVar2 <= fVar1) {
      fVar1 = fVar2;
    }
  }
  *(float *)(param_1 + 0xe4) = fVar2;
  *(float *)(param_1 + 0xe4) = fVar1;
  FUN_00a99788();
  return;
}


