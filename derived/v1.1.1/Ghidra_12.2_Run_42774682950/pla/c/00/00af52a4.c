/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00af52a4; name: FUN_00af52a4
 */


float FUN_00af52a4(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x27c);
  if (*(char *)(param_1 + 0x2c4) == '\0') {
    pfVar1 = (float *)(param_1 + 700);
    pfVar2 = (float *)(param_1 + 0x290);
  }
  else {
    pfVar1 = (float *)(param_1 + 0x2c0);
    pfVar2 = (float *)(param_1 + 0x2d4);
    fVar3 = fVar3 * *(float *)(param_1 + 0x290);
  }
  return *pfVar1 + fVar3 * *pfVar2;
}


