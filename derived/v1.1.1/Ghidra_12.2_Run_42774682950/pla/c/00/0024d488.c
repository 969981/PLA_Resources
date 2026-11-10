/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0024d488; name: FUN_0024d488
 */


void FUN_0024d488(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 auStack_88 [20];
  undefined8 local_74;
  undefined4 local_64;
  long local_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  long local_30;
  byte local_28;
  byte local_26;
  
  if (*(char *)(param_1 + 0x117) != '\0') {
    FUN_00223eac(auStack_88);
    local_74 = 0;
    bVar1 = (byte)((ushort)*(undefined2 *)(param_1 + 0x114) >> 8);
    local_28 = bVar1 & 1;
    local_26 = bVar1 >> 6 & 1;
    local_64 = *(undefined4 *)(param_1 + 0x118);
    local_60 = *(long *)(param_1 + 0xf0);
    if (local_60 != 0) {
      FUN_0021bc50(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),auStack_88);
      local_44 = *(undefined4 *)(param_1 + 0x100);
      local_48 = *(undefined4 *)(param_1 + 0x104);
      if ((*(byte *)(param_1 + 0x114) >> 6 & 1) == 0) {
        local_4c = 0x7f7fffff;
      }
      else {
        local_4c = *(undefined4 *)(param_1 + 0x50);
      }
    }
    if (*(long *)(param_1 + 0x108) != 0) {
      local_30 = *(long *)(param_1 + 0x108);
    }
    FUN_00223f7c(auStack_88,param_2,*(undefined8 *)(param_1 + 0xd8),*(undefined2 *)(param_1 + 0x112)
                );
    thunk_FUN_0021bc4c(auStack_88);
    return;
  }
  FUN_002256a8(auStack_88);
  local_74 = 0;
  bVar1 = (byte)((ushort)*(undefined2 *)(param_1 + 0x114) >> 8);
  local_28 = bVar1 & 1;
  local_26 = bVar1 >> 6 & 1;
  local_64 = *(undefined4 *)(param_1 + 0x118);
  local_60 = *(long *)(param_1 + 0xf0);
  if (local_60 != 0) {
    FUN_0021bc50(*(undefined4 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc),auStack_88);
    local_44 = *(undefined4 *)(param_1 + 0x100);
    local_48 = *(undefined4 *)(param_1 + 0x104);
    if ((*(byte *)(param_1 + 0x114) >> 6 & 1) == 0) {
      local_4c = 0x7f7fffff;
    }
    else {
      local_4c = *(undefined4 *)(param_1 + 0x50);
    }
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    local_30 = *(long *)(param_1 + 0x108);
  }
  FUN_00225778(auStack_88,param_2,*(undefined8 *)(param_1 + 0xd8),*(undefined2 *)(param_1 + 0x112));
  thunk_FUN_0021bc4c(auStack_88);
  return;
}


