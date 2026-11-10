/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b429b0; name: FUN_01b429b0
 */


float FUN_01b429b0(long param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0xbf8);
  if (iVar1 == 2) {
    fVar2 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_1 + 0xdb4) * 8))
                             (*(float *)(param_1 + 0xbfc) / *(float *)(param_1 + 0xc00));
    fVar3 = fVar2 + 0.0;
  }
  else {
    fVar2 = 1.0;
    if (iVar1 != 4) {
      fVar2 = 0.0;
    }
    fVar3 = 1.0;
    if (iVar1 != 3) {
      fVar3 = fVar2;
    }
  }
  return fVar3;
}


