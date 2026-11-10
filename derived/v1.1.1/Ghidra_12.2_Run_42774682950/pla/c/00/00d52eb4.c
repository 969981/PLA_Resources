/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d52eb4; name: FUN_00d52eb4
 */


void FUN_00d52eb4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((param_2 & 1) == 0) {
    local_50 = 0x16445a137decbd35;
    pcStack_48 = "anime_L_inventory_parts_00_L_cursor_inventory_00_catch";
    local_40 = 0x36;
    uStack_38 = 0;
    lVar1 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_50);
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    local_50 = 0xb31b3e9543725743;
    pcStack_48 = "anime_L_inventory_parts_00_L_cursor_inventory_00_release";
    local_40 = 0x38;
  }
  else {
    local_50 = 0xb31b3e9543725743;
    pcStack_48 = "anime_L_inventory_parts_00_L_cursor_inventory_00_release";
    local_40 = 0x38;
    uStack_38 = 0;
    lVar1 = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_50);
      lVar1 = *(long *)(param_1 + 0x2c8);
    }
    local_50 = 0x16445a137decbd35;
    pcStack_48 = "anime_L_inventory_parts_00_L_cursor_inventory_00_catch";
    local_40 = 0x36;
  }
  if (lVar1 != 0) {
    uStack_38 = 0;
    FUN_0283b1e8(lVar1,&local_50);
  }
  return;
}


