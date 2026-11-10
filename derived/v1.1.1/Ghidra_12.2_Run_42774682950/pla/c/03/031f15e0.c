/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f15e0; name: FUN_031f15e0
 */


int FUN_031f15e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x20);
  fVar2 = (float)FUN_031f1440(param_2,param_3);
  if (fVar4 <= fVar2) {
    iVar1 = -1;
  }
  else {
    fVar3 = (float)FUN_031f1490(param_1,param_2,param_3);
    iVar1 = -(uint)(fVar4 <= fVar2 + fVar3);
  }
  return iVar1;
}


