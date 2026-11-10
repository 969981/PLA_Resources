/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dff52c; name: FUN_02dff52c
 */


void FUN_02dff52c(int *param_1,float *param_2,uint param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  
  if (param_3 != 0) {
    pfVar2 = param_2;
    do {
      iVar1 = *param_1 * 0x343fd + 0x269ec3;
      *param_1 = iVar1;
      pfVar3 = pfVar2 + 1;
      *pfVar2 = (float)iVar1 * 2.3283064e-10;
      pfVar2 = pfVar3;
    } while (pfVar3 < param_2 + param_3);
  }
  return;
}


