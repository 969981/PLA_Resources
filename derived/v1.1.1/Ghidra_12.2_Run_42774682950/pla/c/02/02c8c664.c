/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c8c664; name: FUN_02c8c664
 */


void FUN_02c8c664(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  LightEventType aLStack_44 [12];
  undefined8 local_38;
  
  local_60 = 0;
  uStack_58 = 0;
  local_68 = &PTR_LAB_0428aeb0;
  local_50 = 0;
  nn::os::InitializeLightEvent(aLStack_44,0,1);
  local_38 = 0;
  local_50 = local_50 & 0xffff0000;
  FUN_02c658e0(&local_68,param_1,0);
  if (*(int *)(param_2 + 0x28) != 0) {
    FUN_02c77c14(&local_68,*(undefined4 *)(param_2 + 0x10));
    FUN_02c7a244(&local_68,*(undefined4 *)(param_2 + 0x20));
    FUN_02c80bbc(&local_68,*(undefined4 *)(param_2 + 0x18));
    FUN_02c79bc4(&local_68,*(undefined4 *)(param_2 + 0x28));
    FUN_02c7f4bc(&local_68,*(undefined2 *)(param_2 + 0x2c));
    FUN_02c79f04(&local_68,*(undefined2 *)(param_2 + 0x2e));
    FUN_02c78264(&local_68,*(undefined1 *)(param_2 + 0x30));
    FUN_02c7f7fc(&local_68,*(undefined2 *)(param_2 + 0x34));
    FUN_02c7fb3c(&local_68,*(undefined2 *)(param_2 + 0x36));
    FUN_02c7f16c(&local_68,*(undefined2 *)(param_2 + 0x32));
    FUN_02c8383c(&local_68,*(undefined1 *)(param_2 + 0x30));
    FUN_02c8135c(&local_68,0);
    FUN_02c7a8c4(&local_68,*(undefined4 *)(param_2 + 0x60));
    FUN_02c7b308(&local_68,*(undefined1 *)(DAT_04407c08 + 600));
    FUN_02c8a6a4(&local_68,0xff);
    FUN_02c7d3c4(&local_68,*(undefined1 *)(param_2 + 0x3a));
    FUN_02c7d70c(&local_68,*(undefined1 *)(param_2 + 0x3c));
    FUN_02c7da58(&local_68,*(undefined1 *)(param_2 + 0x3e));
    FUN_02c7dda4(&local_68,*(undefined1 *)(param_2 + 0x40));
    FUN_02c7e0f0(&local_68,*(undefined1 *)(param_2 + 0x42));
    FUN_02c7e43c(&local_68,*(undefined1 *)(param_2 + 0x44));
    FUN_02c7b648(&local_68,*(undefined1 *)(param_2 + 0x46));
    FUN_02c7b988(&local_68,*(undefined1 *)(param_2 + 0x48));
    FUN_02c7bcc8(&local_68,*(undefined1 *)(param_2 + 0x4a));
    FUN_02c7c008(&local_68,*(undefined1 *)(param_2 + 0x4c));
    FUN_02c7c348(&local_68,*(undefined1 *)(param_2 + 0x4e));
    FUN_02c7c688(&local_68,*(undefined1 *)(param_2 + 0x50));
    FUN_02c87e8c(&local_68,*(undefined1 *)(param_2 + 0x52));
    FUN_02c881cc(&local_68,*(undefined1 *)(param_2 + 0x54));
    FUN_02c8850c(&local_68,*(undefined1 *)(param_2 + 0x56));
    FUN_02c88b8c(&local_68,*(undefined1 *)(param_2 + 0x58));
    FUN_02c88ecc(&local_68,*(undefined1 *)(param_2 + 0x5a));
    FUN_02c8884c(&local_68,*(undefined1 *)(param_2 + 0x5c));
    uVar1 = FUN_02c8b630(*(undefined4 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2c),
                         *(undefined1 *)(param_2 + 0x38));
    FUN_02c7ac88(&local_68,uVar1);
    FUN_02c7fe7c(&local_68,*(char *)(param_2 + 0x38) == '\0');
    FUN_02c801cc(&local_68,*(char *)(param_2 + 0x38) == '\x01');
    FUN_02c8051c(&local_68,*(char *)(param_2 + 0x38) == '\x02');
    FUN_02c8086c(&local_68,0);
    uVar1 = FUN_02c524b0(*(undefined4 *)(param_2 + 0x28),*(undefined2 *)(param_2 + 0x2c),
                         *(undefined1 *)(param_2 + 0x30));
    FUN_02c7a584(&local_68,uVar1);
    FUN_02c8920c(&local_68,*(undefined1 *)(param_2 + 0x68));
    FUN_02c8954c(&local_68,*(undefined1 *)(param_2 + 0x66));
    FUN_02c8988c(&local_68,*(undefined1 *)(param_2 + 0x6a));
    FUN_02c874ac(&local_68,*(undefined1 *)(param_2 + 0x6c));
    FUN_02c877fc(&local_68,*(undefined1 *)(param_2 + 0x6d));
  }
  local_68 = &PTR_LAB_0428aeb0;
  nn::os::FinalizeLightEvent(aLStack_44);
  return;
}


