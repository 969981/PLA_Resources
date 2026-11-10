/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01311dc4; name: FUN_01311dc4
 */


void FUN_01311dc4(long param_1,undefined4 param_2,uint param_3)

{
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  FUN_00d42438(param_1,0,1);
  *(undefined4 *)(param_1 + 0x5ac) = param_2;
  *(undefined4 *)(param_1 + 0x5b0) = 1;
  FUN_0130ee9c(param_1,param_3 & 1);
  if (*(char *)(param_1 + 0xd5c) != '\0') {
    local_50 = 0x7a4a9d0dc22b5460;
    pcStack_48 = "STOP_UI_COMMON_MAP_CURSOR_MOVE";
    local_40 = 0x1e;
    local_38 = (long *)0x0;
    FUN_028354b0(&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    *(undefined1 *)(param_1 + 0xd5c) = 0;
  }
  return;
}


