/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f16864; name: FUN_02f16864
 */


byte FUN_02f16864(long param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0xff;
  local_30 = 0xff;
  local_28 = 0;
  FUN_02f18338(param_1,param_2,0x1d,&local_50);
  *param_3 = *(byte *)(param_1 + 0x184) >> 3 & 1;
  bVar1 = *(byte *)(param_1 + 0x184);
  *(byte *)(param_1 + 0x184) = bVar1 & 0xef;
  return bVar1 >> 4 & 1;
}


