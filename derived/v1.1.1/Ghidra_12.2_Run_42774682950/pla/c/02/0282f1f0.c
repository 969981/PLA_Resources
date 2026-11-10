/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282f1f0; name: FUN_0282f1f0
 */


void FUN_0282f1f0(long param_1)

{
  long lVar1;
  float fVar2;
  ulong auStack_60 [3];
  undefined8 uStack_48;
  ulong local_40 [3];
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x10;
  FUN_0282c3a4(lVar1);
  fVar2 = *(float *)(param_1 + 0x1a0);
  if (fVar2 <= *(float *)(param_1 + 0x1d4)) {
    fVar2 = *(float *)(param_1 + 0x1a4);
  }
  local_40[2] = (ulong)(uint)*(float *)(param_1 + 0x1d4);
  auStack_60[2] = (ulong)(uint)fVar2;
  uStack_28 = 0;
  local_40[0] = (ulong)(uint)*(float *)(param_1 + 0x1d8);
  uStack_48 = 0;
  local_40[1] = 0;
  auStack_60[0] = (ulong)(uint)-*(float *)(param_1 + 0x1d8);
  auStack_60[1] = 0;
  FUN_0282c3c4(lVar1,0,local_40 + 2,local_40);
  FUN_0282c3c4(lVar1,*(undefined4 *)(param_1 + 0x1b0),auStack_60 + 2,auStack_60);
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(float *)(param_1 + 0x1c4) = fVar2;
  *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1b0);
  return;
}


