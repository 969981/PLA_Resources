/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00441c70; name: FUN_00441c70
 */


void FUN_00441c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  local_18 = 0;
  local_4 = (undefined1)(param_4 >> 0x15);
  local_3 = (undefined1)(param_4 >> 0xd);
  local_2 = (undefined1)(param_4 >> 5);
  local_1 = (undefined1)(param_4 << 3);
  local_20 = &local_4;
  local_30 = &local_28;
  local_28 = 0x400000004;
  local_40 = param_2;
  uStack_38 = param_3;
  FUN_0041f020(&local_40,param_1,&DAT_04166138);
  return;
}


