/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f9bdc; name: FUN_007f9bdc
 */


void FUN_007f9bdc(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 auStack_70 [24];
  undefined *local_58;
  long *local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  local_88 = *(undefined4 *)((long)param_2 + 0xc);
  uStack_90 = *param_2;
  local_78 = 0;
  local_98 = PTR_DAT_04377598 + 0x10;
  local_84 = -0x80;
  local_80 = 4;
  uVar1 = FUN_007fd53c(&local_98);
  if (((((uVar1 & 1) != 0) && (local_84 == -0x80)) && (*(char *)((long)param_1 + 0x284) == '\0')) &&
     (param_1[0x230] != 0)) {
    local_38 = 0;
    local_48 = 0x4d8;
    local_50 = param_1 + 0x52;
    local_44 = 0x81;
    local_58 = PTR_DAT_043775e8 + 0x10;
    local_40 = 4;
    FUN_007fd434(&local_58);
    FUN_007ff084(auStack_70,param_1 + 0x188,0x4d8);
    FUN_007ff094(auStack_70,local_50,local_40._4_4_ + (int)local_40,0x81);
    (**(code **)(*param_1 + 0x140))(param_1,auStack_70,param_3,0);
  }
  return;
}


