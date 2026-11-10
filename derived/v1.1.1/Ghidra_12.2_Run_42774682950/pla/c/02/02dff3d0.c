/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dff3d0; name: FUN_02dff3d0
 */


void FUN_02dff3d0(long param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  
  FUN_02dff52c();
  fVar3 = *(float *)(param_1 + 0x58);
  if (param_3 != 0) {
    pfVar1 = param_2;
    do {
      fVar3 = *(float *)(param_1 + 0x5c) * *pfVar1 - *(float *)(param_1 + 0x60) * fVar3;
      pfVar2 = pfVar1 + 1;
      *pfVar1 = fVar3;
      pfVar1 = pfVar2;
    } while (pfVar2 < param_2 + param_3);
  }
  *(float *)(param_1 + 0x58) = fVar3;
  return;
}


