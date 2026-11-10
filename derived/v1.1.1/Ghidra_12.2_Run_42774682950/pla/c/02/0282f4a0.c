/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282f4a0; name: FUN_0282f4a0
 */


void FUN_0282f4a0(long param_1)

{
  uint uVar1;
  float fVar2;
  float local_28;
  float local_24;
  
  uVar1 = *(int *)(param_1 + 0x1bc) + 1;
  *(uint *)(param_1 + 0x1bc) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x1c0)) {
    fVar2 = (float)FUN_0282c55c(param_1 + 0x10);
    local_28 = *(float *)(param_1 + 0x1d4);
    *(float *)(param_1 + 0x1d8) = fVar2 - local_28;
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_24 = fVar2;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&local_24,&local_28);
    }
    *(float *)(param_1 + 0x1d4) = fVar2;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x1c4);
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    *(undefined1 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    if (*(code **)(param_1 + 0x120) != (code *)0x0) {
      local_28 = *(float *)(param_1 + 0x1d4);
      local_24 = fVar2;
      (**(code **)(param_1 + 0x120))(param_1 + 0x140,&local_24,&local_28);
    }
    *(float *)(param_1 + 0x1d4) = fVar2;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
  }
  return;
}


