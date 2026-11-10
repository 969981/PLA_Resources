/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e03abc; name: FUN_02e03abc
 */


undefined8 FUN_02e03abc(long param_1,int *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if (*param_2 == 0) {
    uVar1 = 0x11;
  }
  else {
    FUN_02e04064(*(undefined8 *)(param_1 + 8),param_1 + 0x18);
    uVar1 = 0x2d;
    fVar3 = (float)NEON_ucvtf(*param_2);
    fVar2 = (float)NEON_fminnm(*(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x1c),0x44c80000);
    if (fVar2 <= 25.0) {
      fVar2 = 25.0;
    }
    fVar2 = (fVar3 * 100.0) / fVar2;
    *(float *)(param_1 + 0xa0) = fVar2 + *(float *)(param_1 + 0xa0);
    *param_2 = (int)fVar2;
  }
  return uVar1;
}


