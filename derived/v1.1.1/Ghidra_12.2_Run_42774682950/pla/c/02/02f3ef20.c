/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3ef20; name: FUN_02f3ef20
 */


void FUN_02f3ef20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  FUN_02e7c070(param_1,param_6,param_7,param_8,0);
  FUN_02f3c508(param_1 + 0xb,param_2);
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0xff;
  local_60 = 0xff;
  local_58 = 0;
  FUN_02ee8c24(param_1 + 0xe,&local_80,1);
  *param_1 = &PTR_FUN_042adbe0;
  param_1[0xb] = &PTR_LAB_042adc98;
  param_1[0xe] = &PTR_LAB_042add08;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x17] = param_3;
  param_1[0x18] = param_4;
  param_1[0x19] = param_5;
  param_1[0x1a] = param_9;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_02f400c0(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = param_11;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)((long)param_1 + 0x174) = param_12;
  *(byte *)((long)param_1 + 0x17c) = *(byte *)((long)param_1 + 0x17c) & 0xf0 | 4;
  (**(code **)(*(long *)param_1[0x18] + 0x10))();
  return;
}


