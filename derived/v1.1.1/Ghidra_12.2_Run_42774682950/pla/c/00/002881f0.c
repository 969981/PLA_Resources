/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002881f0; name: FUN_002881f0
 */


int FUN_002881f0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = FUN_00287fd0();
  fVar3 = *param_5;
  fVar4 = *param_4;
  if ((0.0 <= fVar3) || (0.0 <= fVar4)) {
    if (fVar4 <= fVar3) {
      return iVar1;
    }
  }
  else if (fVar3 <= fVar4) {
    return iVar1;
  }
  uVar2 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = *(undefined8 *)param_5;
  *(undefined8 *)param_5 = uVar2;
  fVar3 = *param_4;
  fVar4 = *param_3;
  if ((0.0 <= fVar3) || (0.0 <= fVar4)) {
    if (fVar4 <= fVar3) {
      return iVar1 + 1;
    }
  }
  else if (fVar3 <= fVar4) {
    return iVar1 + 1;
  }
  uVar2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = *(undefined8 *)param_4;
  *(undefined8 *)param_4 = uVar2;
  fVar3 = *param_3;
  fVar4 = *param_2;
  if ((0.0 <= fVar3) || (0.0 <= fVar4)) {
    if (fVar4 <= fVar3) {
      return iVar1 + 2;
    }
  }
  else if (fVar3 <= fVar4) {
    return iVar1 + 2;
  }
  uVar2 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = *(undefined8 *)param_3;
  *(undefined8 *)param_3 = uVar2;
  fVar3 = *param_2;
  fVar4 = *param_1;
  if ((0.0 <= fVar3) || (0.0 <= fVar4)) {
    if (fVar4 <= fVar3) {
      return iVar1 + 3;
    }
  }
  else if (fVar3 <= fVar4) {
    return iVar1 + 3;
  }
  uVar2 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar2;
  return iVar1 + 4;
}


