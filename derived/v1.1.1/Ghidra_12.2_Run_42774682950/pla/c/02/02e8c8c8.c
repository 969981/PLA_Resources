/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8c8c8; name: FUN_02e8c8c8
 */


void FUN_02e8c8c8(long param_1,undefined8 param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  long local_20;
  float local_18;
  byte local_14;
  
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_38 = *(byte *)(param_1 + 0x36) & 0x1f;
  uStack_3c = 0;
  fVar1 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x4c);
  if (fVar1 == 0.0) {
    local_18 = 0.0;
  }
  else {
    DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
    local_18 = fVar1 * 4.656613e-10 * (float)(uint)((ulong)DAT_0440a190 >> 0x21);
  }
  local_18 = *(float *)(param_1 + 0x4c) + *(float *)(param_1 + 0x48) + local_18;
  if (*(byte *)(param_1 + 0x54) == 0) {
    local_18 = (float)(int)local_18;
  }
  local_14 = *(byte *)(param_1 + 0x54) | *(char *)(param_1 + 0x55) << 1;
  local_50[0] = 4;
  local_20 = param_1 + 0x38;
  local_48 = param_2;
  local_40 = param_3;
  FUN_02e9faa0(local_50);
  return;
}


