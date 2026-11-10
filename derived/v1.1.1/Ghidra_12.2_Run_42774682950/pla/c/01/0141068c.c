/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141068c; name: FUN_0141068c
 */


void FUN_0141068c(long param_1,uint param_2)

{
  long lVar1;
  long *local_50;
  char *local_48;
  char *local_40;
  long *local_38;
  long *local_30;
  long local_28;
  
  local_50 = (long *)0xc8e82e87b533acb8;
  local_48 = "symbol_panel";
  local_40 = (char *)0xc;
  local_38 = (long *)0x0;
  lVar1 = thunk_FUN_00d2ec48(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (lVar1 != 0) {
    local_50 = &local_28;
    local_28 = 0;
    local_48 = (char *)0x38e3a74145a9cb4f;
    local_40 = "symbol_panel_cursor";
    local_38 = (long *)0x13;
    local_30 = (long *)0x0;
    FUN_00d36f04(lVar1,&local_50,0);
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_28 != 0) {
      FUN_028077c0(local_28,param_2 & 1);
    }
  }
  return;
}


