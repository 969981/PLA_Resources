/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed9e08; name: FUN_01ed9e08
 */


void FUN_01ed9e08(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  int local_50;
  long local_48;
  int local_40;
  
  uStack_70 = *(undefined8 *)(param_3 + 8);
  local_68 = *(undefined8 *)(param_4 + 8);
  local_78 = param_2 + 0x158;
  uStack_60 = *(undefined8 *)(param_5 + 8);
  FUN_01ed9f48(&local_58,local_78,&uStack_70,&local_68,&uStack_60);
  local_78 = param_2;
  FUN_01ed9ec0(param_1,*(undefined8 *)(param_2 + 8),&local_78,&local_58);
  if ((local_48 != 0) && (local_40 != -2)) {
    FUN_00155150(local_48,0xfff0b9d8);
  }
  if ((local_58 != 0) && (local_50 != -2)) {
    FUN_00155150(local_58,0xfff0b9d8);
  }
  return;
}


