/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282ef20; name: FUN_0282ef20
 */


void FUN_0282ef20(float param_1,long param_2)

{
  code *pcVar1;
  float fVar2;
  undefined4 local_18;
  float local_14;
  
  if (*(char *)(param_2 + 0x1ac) == '\0') {
    fVar2 = *(float *)(param_2 + 0x1a0);
    if (param_1 < fVar2) {
      pcVar1 = *(code **)(param_2 + 0x120);
    }
    else {
      fVar2 = *(float *)(param_2 + 0x1a4);
      pcVar1 = *(code **)(param_2 + 0x120);
      if (param_1 <= fVar2) goto joined_r0x0282ef98;
    }
    if (pcVar1 != (code *)0x0) {
      local_18 = *(undefined4 *)(param_2 + 0x1d4);
      local_14 = fVar2;
      (*pcVar1)(param_2 + 0x140,&local_14,&local_18);
    }
  }
  else {
    pcVar1 = *(code **)(param_2 + 0x120);
joined_r0x0282ef98:
    if (pcVar1 != (code *)0x0) {
      local_18 = *(undefined4 *)(param_2 + 0x1d4);
      local_14 = param_1;
      (*pcVar1)(param_2 + 0x140,&local_14,&local_18);
    }
    fVar2 = param_1;
  }
  *(float *)(param_2 + 0x1d4) = fVar2;
  return;
}


