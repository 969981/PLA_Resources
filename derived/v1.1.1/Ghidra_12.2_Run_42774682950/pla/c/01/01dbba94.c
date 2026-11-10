/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dbba94; name: FUN_01dbba94
 */


void FUN_01dbba94(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 local_e0 [2];
  undefined *local_d0;
  undefined4 local_c8;
  undefined **local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined2 local_40;
  
  FUN_01dbbbc4();
  local_c8 = 1;
  local_d0 = PTR_DAT_04382858 + 0x10;
  local_c0 = &PTR_FUN_04287c08;
  local_e0[0] = *param_2;
  local_90 = *(undefined4 *)((long)param_2 + 0x1c);
  local_8c = *(undefined4 *)(param_2 + 4);
  local_88 = *(undefined4 *)((long)param_2 + 0x24);
  local_84 = *(undefined4 *)(param_2 + 5);
  local_80 = *(undefined1 *)((long)param_2 + 0x2c);
  local_70 = *(char *)(param_2 + 6) != '\0';
  if ((bool)local_70) {
    local_58 = param_2[9];
    local_60 = param_2[8];
  }
  local_50 = *(undefined4 *)(param_2 + 1);
  local_4c = *(undefined8 *)((long)param_2 + 0xc);
  local_44 = *(undefined4 *)((long)param_2 + 0x14);
  local_40 = *(undefined2 *)(param_2 + 3);
  local_a8 = *(undefined8 *)(param_3 + 0x18);
  local_a0 = *(undefined4 *)(param_3 + 0x20);
  local_b0 = *(undefined8 *)(param_3 + 0x10);
  FUN_01dbcc78(param_1 + 0x10,local_e0);
  return;
}


