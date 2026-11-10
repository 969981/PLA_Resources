/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0145a97c; name: FUN_0145a97c
 */


void FUN_0145a97c(long param_1,byte param_2)

{
  long lVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  local_38 = (long *)0x0;
  local_50 = 0x3b0cf44c775f253f;
  pcStack_48 = "report_normal";
  param_1 = param_1 + 0x180;
  local_40 = 0xd;
  lVar1 = thunk_FUN_00d2e944(param_1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0xa3) == '\0')) {
    local_50 = 0xeb3b05ae26b5ada2;
    pcStack_48 = "report_backup";
    local_40 = 0xd;
    local_38 = (long *)0x0;
    lVar1 = thunk_FUN_00d2e944(param_1,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if ((lVar1 == 0) || (*(char *)(lVar1 + 0xa3) == '\0')) {
      local_50 = 0xd5745e6ad4390d42;
      pcStack_48 = "report_no_card";
      local_40 = 0xe;
      local_38 = (long *)0x0;
      lVar1 = thunk_FUN_00d2e944(param_1,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0xa3) == '\0')) {
        local_50 = 0x26020f6a52ed69d;
        pcStack_48 = "report_no_card_backup";
        local_40 = 0x15;
        local_38 = (long *)0x0;
        lVar1 = thunk_FUN_00d2e944(param_1,&local_50);
        if (local_38 != (long *)0x0) {
          (**(code **)(*local_38 + 0x20))();
        }
        if (lVar1 == 0) {
          return;
        }
        if (*(char *)(lVar1 + 0xa3) == '\0') {
          return;
        }
      }
    }
  }
  *(byte *)(lVar1 + 0x2aa) = param_2 & 1;
  return;
}


