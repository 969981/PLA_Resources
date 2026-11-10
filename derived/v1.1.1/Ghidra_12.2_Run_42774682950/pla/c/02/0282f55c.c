/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282f55c; name: FUN_0282f55c
 */


void FUN_0282f55c(long param_1)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_28;
  float fStack_24;
  
  uVar1 = *(int *)(param_1 + 0x1bc) + 1;
  *(uint *)(param_1 + 0x1bc) = uVar1;
  if (*(uint *)(param_1 + 0x1c0) <= uVar1) {
    fVar5 = *(float *)(param_1 + 0x1c4);
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_28 = *(float *)(param_1 + 0x1d4);
      fStack_24 = fVar5;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&fStack_24,&local_28);
    }
    *(float *)(param_1 + 0x1d4) = fVar5;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    return;
  }
  local_28 = *(float *)(param_1 + 0x1d4);
  fVar5 = local_28 + *(float *)(param_1 + 0x1cc);
  fVar3 = *(float *)(param_1 + 0x1a0);
  fVar4 = *(float *)(param_1 + 0x1a4);
  if (fVar3 <= fVar5) {
    if (fVar4 < fVar5) {
      fVar5 = fVar3 + (fVar5 - fVar4);
      pcVar2 = *(code **)(param_1 + 0x120);
      goto joined_r0x0282f620;
    }
  }
  else {
    fVar5 = fVar4 - (fVar5 - fVar3);
  }
  pcVar2 = *(code **)(param_1 + 0x120);
joined_r0x0282f620:
  if (pcVar2 != (code *)0x0) {
    fStack_24 = fVar5;
    (*pcVar2)(param_1 + 0x140,&fStack_24,&local_28);
  }
  *(float *)(param_1 + 0x1d4) = fVar5;
  return;
}


