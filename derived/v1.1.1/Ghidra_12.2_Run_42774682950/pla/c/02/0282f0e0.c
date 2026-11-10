/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282f0e0; name: FUN_0282f0e0
 */


void FUN_0282f0e0(float param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined4 param_5)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_4 + 0x1b8) != 0) {
    *(undefined4 *)(param_4 + 0x1b8) = 0;
    *(undefined1 *)(param_4 + 0x1dc) = 0;
    *(undefined4 *)(param_4 + 0x1d8) = 0;
  }
  fVar1 = *(float *)(param_4 + 0x1d4);
  if (fVar1 < *(float *)(param_4 + 0x1a0)) {
    if (param_1 < 0.0) {
      return;
    }
    fVar2 = *(float *)(param_4 + 0x1a4);
  }
  else {
    fVar2 = *(float *)(param_4 + 0x1a4);
    if (fVar1 <= fVar2) goto LAB_0282f104;
  }
  if ((0.0 < param_1) && (fVar2 < fVar1)) {
    return;
  }
LAB_0282f104:
  *(undefined4 *)(param_4 + 0x1c0) = param_5;
  *(float *)(param_4 + 0x1d8) = param_1;
  *(undefined4 *)(param_4 + 0x1d0) = param_2;
  *(undefined4 *)(param_4 + 0x1cc) = param_3;
  *(undefined8 *)(param_4 + 0x1b8) = 4;
  return;
}


