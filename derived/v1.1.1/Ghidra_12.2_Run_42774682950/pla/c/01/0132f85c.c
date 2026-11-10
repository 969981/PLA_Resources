/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0132f85c; name: FUN_0132f85c
 */


void FUN_0132f85c(long *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = 0x30a9c837e1e298d0;
  pcStack_48 = "View_Icon";
  local_40 = 9;
  uVar1 = FUN_0130e28c(*(undefined8 *)(*param_1 + 0x4c8),&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  FUN_0133ae94(uVar1,param_2,param_3);
  return;
}


