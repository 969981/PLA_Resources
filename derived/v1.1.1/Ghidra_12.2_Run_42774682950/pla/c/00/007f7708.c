/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7708; name: FUN_007f7708
 */


void FUN_007f7708(long *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  int local_48;
  int iStack_44;
  
  FUN_007fdf00(auStack_60,param_1 + 0x52,0x4d8,param_1);
  FUN_007fdfa4(auStack_60);
  FUN_007ff084(auStack_78,param_1 + 0x188,0x4d8);
  FUN_007ff094(auStack_78,local_58,iStack_44 + local_48,0x41);
  (**(code **)(*param_1 + 0x140))(param_1,auStack_78,param_2,0);
  return;
}


