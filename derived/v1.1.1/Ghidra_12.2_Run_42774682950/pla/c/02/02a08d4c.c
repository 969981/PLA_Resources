/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a08d4c; name: FUN_02a08d4c
 */


bool FUN_02a08d4c(long param_1,undefined1 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined1 param_6,undefined1 param_7,undefined4 param_8,undefined8 param_9,
                 undefined8 param_10)

{
  byte bVar1;
  byte local_b0 [8];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  int local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined1 local_8c;
  long local_8a;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  local_a8[0] = param_2;
  uStack_94 = param_4;
  local_90 = param_5;
  if (param_3 == 10) {
    local_a0 = param_9;
    local_98 = 1;
    local_8c = 0;
    local_8a = ((ulong)CONCAT15(param_6,CONCAT14(param_7,param_8)) & 0x101ffffffff) << 0x10;
    local_80 = param_10;
    local_78 = 1;
    local_70 = 0;
    local_68 = 0;
    FUN_029ee8bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15a0),local_b0,local_a8);
    bVar1 = local_b0[0];
    local_98 = 2;
    local_a0 = param_9;
    local_8c = 0;
    local_8a = ((ulong)CONCAT15(param_6,CONCAT14(param_7,param_8)) & 0x101ffffffff) << 0x10;
    local_80 = param_10;
    local_78 = 1;
    local_70 = 0;
    local_68 = 0;
    local_a8[0] = param_2;
    uStack_94 = param_4;
    local_90 = param_5;
    FUN_029ee8bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15a0),local_b0,local_a8);
    local_b0[0] = local_b0[0] | bVar1;
  }
  else {
    local_a0 = param_9;
    local_8c = 0;
    local_8a = ((ulong)CONCAT15(param_6,CONCAT14(param_7,param_8)) & 0x101ffffffff) << 0x10;
    local_80 = param_10;
    local_78 = 1;
    local_70 = 0;
    local_68 = 0;
    local_98 = param_3;
    FUN_029ee8bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15a0),local_b0,local_a8);
  }
  return local_b0[0] != 0;
}


