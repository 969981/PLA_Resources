/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0133a4d4; name: FUN_0133a4d4
 */


void FUN_0133a4d4(long param_1)

{
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = 0x47de06da09910cf1;
  pcStack_48 = "anime_L_cursor_00_select";
  local_40 = 0x18;
  FUN_00d2e2d0(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  local_50 = 0x47de06da09910cf1;
  pcStack_48 = "anime_L_cursor_00_select";
  local_40 = 0x18;
  local_38 = (long *)0x0;
  FUN_00d2df7c(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


