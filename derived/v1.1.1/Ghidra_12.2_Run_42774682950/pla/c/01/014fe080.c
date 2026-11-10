/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fe080; name: FUN_014fe080
 */


void FUN_014fe080(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  lVar1 = param_1 + 0x180;
  if (*(char *)(param_1 + 0x650) == '\0') {
    local_60 = 0x3e15d4fcf512bfb7;
    pcStack_58 = "waza_custom_list";
    local_50 = 0x10;
    local_48 = (long *)0x0;
    FUN_00d2ee28(lVar1,&local_60);
    FUN_0280787c();
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60 = 0x97490c5fdbbdb8fe;
    pcStack_58 = "custom_list_cursor";
    local_50 = 0x12;
  }
  else {
    local_60 = 0xf4f2119844d295f9;
    pcStack_58 = "poke_waza_list";
    local_50 = 0xe;
    local_48 = (long *)0x0;
    FUN_00d2ee28(lVar1,&local_60);
    FUN_0280787c();
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x20))();
    }
    local_60 = 0x33666ec2888983b7;
    pcStack_58 = "poke_waza_cursor";
    local_50 = 0x10;
  }
  local_48 = (long *)0x0;
  FUN_014f9eb0(param_1,&local_60,0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x640);
  uVar5 = *(undefined8 *)(param_1 + 0x600);
  uVar3 = FUN_014fcf64(param_1,uVar2);
  uVar4 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),*(undefined4 *)(param_1 + 0x640));
  FUN_014f1490(uVar5,uVar2,&DAT_043c6f68,~uVar3 & 1,uVar4 & 1);
  uVar2 = *(undefined4 *)(param_1 + 0x644);
  uVar5 = *(undefined8 *)(param_1 + 0x600);
  uVar3 = FUN_014fcf64(param_1,uVar2);
  uVar4 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),*(undefined4 *)(param_1 + 0x644));
  FUN_014f1490(uVar5,uVar2,&DAT_043c70a8,~uVar3 & 1,uVar4 & 1);
  uVar2 = *(undefined4 *)(param_1 + 0x648);
  uVar5 = *(undefined8 *)(param_1 + 0x600);
  uVar3 = FUN_014fcf64(param_1,uVar2);
  uVar4 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),*(undefined4 *)(param_1 + 0x648));
  FUN_014f1490(uVar5,uVar2,&DAT_043c71e8,~uVar3 & 1,uVar4 & 1);
  uVar2 = *(undefined4 *)(param_1 + 0x64c);
  uVar5 = *(undefined8 *)(param_1 + 0x600);
  uVar3 = FUN_014fcf64(param_1,uVar2);
  uVar4 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),*(undefined4 *)(param_1 + 0x64c));
  FUN_014f1490(uVar5,uVar2,&DAT_043c7328,~uVar3 & 1,uVar4 & 1);
  local_60 = 0x3797be83d231e954;
  pcStack_58 = "anime_shift_confirm_wake";
  local_50 = 0x18;
  local_48 = (long *)0x0;
  FUN_00d2df7c(lVar1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  local_60 = 0x5455579bd50b5ff8;
  pcStack_58 = "anime_shift_confirm_roop";
  local_50 = 0x18;
  local_48 = (long *)0x0;
  FUN_00d2df7c(lVar1,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


