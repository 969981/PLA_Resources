/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007828d8; name: FUN_007828d8
 */


void FUN_007828d8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  param_1[1] = param_2;
  *param_1 = 0xffffffff;
  uStack_58 = 1;
  uStack_48 = param_3[1];
  local_50 = *param_3;
  uStack_38 = param_3[3];
  uStack_40 = param_3[2];
  uStack_28 = param_3[5];
  local_30 = param_3[4];
  uStack_18 = param_3[7];
  uStack_20 = param_3[6];
  local_60 = param_2;
  FUN_006172f4(param_1 + 2,&local_60);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return;
}


