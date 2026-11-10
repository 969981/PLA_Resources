/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7674; name: FUN_007f7674
 */


void FUN_007f7674(long *param_1)

{
  undefined1 auStack_60 [24];
  undefined *local_48;
  long *local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  
  local_28 = 0;
  local_40 = param_1 + 0x52;
  local_34 = 0x40;
  local_48 = PTR_DAT_043775c0 + 0x10;
  local_38 = 0x4d8;
  local_30 = 4;
  FUN_007fd434(&local_48);
  FUN_007ff084(auStack_60,param_1 + 0x188,0x4d8);
  FUN_007ff094(auStack_60,local_40,local_30._4_4_ + (int)local_30,0x40);
  (**(code **)(*param_1 + 0x138))(param_1,auStack_60);
  return;
}


