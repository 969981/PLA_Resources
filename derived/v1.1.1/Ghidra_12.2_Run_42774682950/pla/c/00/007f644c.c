/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f644c; name: FUN_007f644c
 */


undefined8 FUN_007f644c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_170 [17];
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 auStack_c0 [64];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  undefined8 local_18;
  
  local_170[0] = 0;
  FUN_007ecf14(local_170);
  local_18 = local_170[0];
  uVar1 = FUN_007e362c(param_2);
  if ((uVar1 & 1) == 0) {
    local_c8 = (undefined *)((ulong)local_c8._4_4_ << 0x20);
    FUN_007e3524(local_170,param_2,&local_c8);
    FUN_007ed380(&local_18,(ulong)local_c8 & 0xffffffff);
    return local_18;
  }
  local_40 = 0;
  uStack_38 = 0;
  FUN_007e3670(local_170,param_2,&local_40);
  memcpy(auStack_30,&local_40,0x10);
  memset(auStack_50,0,0x10);
  local_80 = 0;
  local_78 = 0;
  local_c8 = PTR_DAT_043775a8 + 0x10;
  memset(auStack_c0,0,0x40);
  local_c8 = PTR_DAT_043775b0 + 0x10;
  FUN_007f135c(local_170);
  FUN_007f1364(local_170,&local_c8,auStack_50,0x10);
  FUN_007f1590(local_170,auStack_e8,auStack_30,0x10);
  memcpy(&local_18,auStack_e8,8);
  return local_18;
}


