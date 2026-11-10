/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025b22c; name: FUN_0025b22c
 */


void FUN_0025b22c(float param_1,float param_2,long *param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(*param_3 + 0x70))();
  if (iVar1 == 1) {
    fVar2 = 1.0 - param_2;
    param_2 = 1.0 - param_1;
    *(float *)(param_3 + 1) = fVar2;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    *(float *)(param_3 + 1) = param_1;
  }
  *(float *)((long)param_3 + 0xc) = param_2;
  return;
}


