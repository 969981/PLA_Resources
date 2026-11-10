/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e06c44; name: FUN_02e06c44
 */


void FUN_02e06c44(long param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  pfVar1 = param_2 + (ulong)(*(uint *)(param_1 + 8) >> 1) * 2;
  fVar6 = *pfVar1;
  fVar7 = pfVar1[1];
  FUN_02e06f60(param_2);
  fVar3 = fVar5 + -4.712389;
  if (fVar5 + 1.5707964 <= 3.1415927) {
    fVar3 = fVar5 + 1.5707964;
  }
  fVar2 = fVar7 + -4.712389;
  if (fVar7 + 1.5707964 <= 3.1415927) {
    fVar2 = fVar7 + 1.5707964;
  }
  fVar5 = (1.2732395 - ABS(fVar5) * 0.4052847) * fVar5;
  fVar3 = (1.2732395 - ABS(fVar3) * 0.4052847) * fVar3;
  fVar2 = (1.2732395 - ABS(fVar2) * 0.4052847) * fVar2;
  *param_2 = (fVar3 + (ABS(fVar3) * fVar3 - fVar3) * 0.225) * fVar4;
  param_2[1] = (fVar5 + (ABS(fVar5) * fVar5 - fVar5) * 0.225) * fVar4;
  fVar7 = (1.2732395 - ABS(fVar7) * 0.4052847) * fVar7;
  *pfVar1 = (fVar2 + (ABS(fVar2) * fVar2 - fVar2) * 0.225) * fVar6;
  pfVar1[1] = (fVar7 + (ABS(fVar7) * fVar7 - fVar7) * 0.225) * fVar6;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return;
}


