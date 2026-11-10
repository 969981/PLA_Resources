/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0cf80; name: FUN_02e0cf80
 */


void FUN_02e0cf80(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x158);
  fVar2 = *(float *)(lVar1 + 0x10) * 0.0247212 + -1.85409;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar3 = NEON_fminnm(fVar2,0x3f1e3737);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  fVar2 = *(float *)(lVar1 + 0x10) * 0.0247212 + -1.23606;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar3 = NEON_fminnm(fVar2,0x3f1e3737);
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  fVar2 = *(float *)(lVar1 + 0x10) * 0.0247212 + -0.61803;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar3 = NEON_fminnm(fVar2,0x3f1e3737);
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  fVar2 = *(float *)(lVar1 + 0x10) * 0.0247212;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar3 = NEON_fminnm(fVar2,0x3f1e3737);
  *(undefined4 *)(param_1 + 100) = uVar3;
  return;
}


