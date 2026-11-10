/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014eb80c; name: FUN_014eb80c
 */


void FUN_014eb80c(long param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  long local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  
  *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
  local_78 = &LAB_014eba5c;
  uStack_70 = 0;
  local_a0 = &LAB_014ebcb8;
  local_98 = FUN_014ebcd4;
  local_90 = &LAB_014ebcd8;
  puStack_88 = &LAB_014ebcec;
  local_80 = param_1;
  FUN_014fee44(*(undefined8 *)(param_1 + 0x1a8),0);
  FUN_014fef78(*(undefined8 *)(param_1 + 0x1a8),1,param_2);
  iVar2 = FUN_014fe69c(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1d0));
  FUN_014eb764(param_1,0x73cd0c0f31b23f7a,&local_a0,iVar2 == 0);
  local_c0 = 0x12023f07bd41a487;
  puStack_b8 = &DAT_038f5325;
  local_b0 = 2;
  local_a8 = (long *)0x0;
  local_e0 = 0xc9492c80c15c7fc9;
  pcStack_d8 = "PLAY_ME_HA_SYS_SKILL_LEARN";
  local_d0 = 0x1a;
  local_c8 = (long *)0x0;
  FUN_0284fda8(&local_c0,&local_e0);
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  if (local_a8 != (long *)0x0) {
    (**(code **)(*local_a8 + 0x20))();
  }
  FUN_00dac5ac(0xd,1);
  pcVar1 = local_98;
  if (local_98 != (code *)0x0) {
    local_90 = (undefined1 *)0x0;
    puStack_88 = (undefined1 *)0x0;
    local_a0 = (undefined1 *)0x0;
    local_98 = (code *)0x0;
    (*pcVar1)(&local_80);
  }
  return;
}


