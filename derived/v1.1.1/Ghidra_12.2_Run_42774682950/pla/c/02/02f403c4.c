/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f403c4; name: FUN_02f403c4
 */


void FUN_02f403c4(float param_1,long param_2)

{
  float fVar1;
  
  if (param_1 == 0.0) {
    param_1 = *(float *)(param_2 + 0x50);
  }
  else {
    *(float *)(param_2 + 0x50) = param_1;
  }
  fVar1 = (float)NEON_ucvtf(*(undefined4 *)(param_2 + 0x1c));
  *(float *)(param_2 + 0x54) = 60000.0 / (param_1 * fVar1);
  *(float *)(param_2 + 0x58) = param_1 * fVar1 * 1.6666667e-05;
  return;
}


