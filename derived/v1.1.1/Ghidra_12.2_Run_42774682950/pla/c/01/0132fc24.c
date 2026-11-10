/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0132fc24; name: FUN_0132fc24
 */


void FUN_0132fc24(long *param_1,undefined8 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_48 = (long *)0x0;
  local_60 = 0x30a9c837e1e298d0;
  pcStack_58 = "View_Icon";
  local_50 = 9;
  uVar1 = FUN_0130e28c(*(undefined8 *)(*param_1 + 0x4c8),&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_0133af4c(uVar1,param_2,param_3 & 1,param_4 & 1,param_5);
  return;
}


