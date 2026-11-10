/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f167d4; name: FUN_02f167d4
 */


byte FUN_02f167d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  FUN_02f18338(param_1,param_2,0x1b,&local_60);
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0xff;
  local_40 = 0xff;
  local_38 = 0;
  FUN_02f18338(param_1,param_3,0x1c,&local_60);
  bVar1 = *(byte *)(param_1 + 0x184);
  *(byte *)(param_1 + 0x184) = bVar1 & 0xdf;
  return bVar1 >> 5 & 1;
}


