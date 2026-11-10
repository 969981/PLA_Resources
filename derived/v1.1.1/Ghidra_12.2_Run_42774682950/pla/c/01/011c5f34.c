/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c5f34; name: FUN_011c5f34
 */


void FUN_011c5f34(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  ulong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  ulong local_70;
  char *local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  iVar6 = 1;
  if (param_2 == 0) {
    iVar6 = 2;
  }
  *(char *)(param_1 + 0x821) = (char)((iVar6 + (uint)*(byte *)(param_1 + 0x821)) % 3);
  if (((*PTR_DAT_043796b8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_043796b8);
  }
  local_70 = 0x3a762bffc2cfbee6;
  lVar7 = *(long *)PTR_DAT_043796c0 + 0x3c0;
  *(long *)PTR_DAT_043796c8 = *(long *)PTR_DAT_043796c0;
  uVar5 = FUN_00da36a4(lVar7,&local_70);
  FUN_00da36f0(lVar7,uVar5,0);
  if (*(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x820) * 0x2c + 0x5d4) == 1) {
LAB_011c6220:
    local_70 = 0xc1a949029450238f;
    local_68 = "PLAY_UI_COMMON_DECIDE";
    local_60 = 0x15;
    local_58 = (long *)0x0;
    FUN_028354b0(&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
  }
  else {
    iVar6 = *(int *)(&DAT_03a7996c + (ulong)*(byte *)(param_1 + 0x821) * 4);
    if (iVar6 == 1) {
      local_68 = "PLAY_UI_BATTLE_SELECT_P";
      local_70 = 0xbb27bfa57445;
    }
    else {
      if (iVar6 == 0) goto LAB_011c6220;
      if (iVar6 != 2) goto LAB_011c6060;
      local_68 = "PLAY_UI_BATTLE_SELECT_H";
      local_70 = 0xd327bfa59d0d;
    }
    local_70 = local_70 | 0x3fd6000000000000;
    local_60 = 0x17;
    local_58 = (long *)0x0;
    FUN_028354b0(&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    local_70 = 0x3a762bffc2cfbee6;
    FUN_00da3604(lVar7,&local_70,0);
  }
LAB_011c6060:
  local_70 = 0xa769058d1b7b8b81;
  local_68 = "PLAY_UI_BATTLE_COMPLETE";
  local_60 = 0x17;
  local_58 = (long *)0x0;
  FUN_028354b0(&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  lVar7 = param_1 + (ulong)*(byte *)(param_1 + 0x820) * 0x2c;
  uVar1 = *(ulong *)(lVar7 + 0x5ac);
  uVar3 = *(undefined8 *)(lVar7 + 0x5b4);
  uVar9 = *(undefined8 *)(lVar7 + 0x5cc);
  uVar2 = *(undefined8 *)(lVar7 + 0x5bc);
  uVar4 = *(undefined8 *)(lVar7 + 0x5c4);
  uVar5 = *(undefined4 *)(lVar7 + 0x5d4);
  uVar8 = *(undefined1 *)(param_1 + 0x821);
  lVar7 = param_1 + 0x7a0;
  local_70 = uVar1;
  local_68 = (char *)uVar3;
  local_60 = uVar2;
  local_58 = (long *)uVar4;
  uStack_50 = uVar9;
  local_48 = uVar5;
  FUN_011c0488(lVar7,&local_70,uVar8);
  local_a0 = uVar1;
  local_98 = uVar3;
  uStack_90 = uVar2;
  local_88 = uVar4;
  uStack_80 = uVar9;
  local_78 = uVar5;
  FUN_011c08cc(lVar7,&local_a0,uVar8);
  local_d0 = uVar1;
  local_c8 = uVar3;
  uStack_c0 = uVar2;
  local_b8 = uVar4;
  uStack_b0 = uVar9;
  local_a8 = uVar5;
  FUN_011c0c44(lVar7,&local_d0);
  local_100 = uVar1;
  local_f8 = uVar3;
  uStack_f0 = uVar2;
  local_e8 = uVar4;
  uStack_e0 = uVar9;
  local_d8 = uVar5;
  FUN_011c0dbc(lVar7,&local_100);
  local_130 = uVar1;
  local_128 = uVar3;
  uStack_120 = uVar2;
  local_118 = uVar4;
  uStack_110 = uVar9;
  local_108 = uVar5;
  FUN_011c0f00(lVar7,&local_130);
  if (*(code **)(param_1 + 0x8c0) != (code *)0x0) {
    if (*(int *)(param_1 + (ulong)*(byte *)(param_1 + 0x820) * 0x2c + 0x5d4) == 1) {
      uVar8 = 0;
    }
    else {
      uVar8 = (undefined1)*(undefined4 *)(&DAT_03a7996c + (ulong)*(byte *)(param_1 + 0x821) * 4);
    }
    local_70 = CONCAT71(local_70._1_7_,*(byte *)(param_1 + 0x820));
    local_a0 = CONCAT71(local_a0._1_7_,uVar8);
    (**(code **)(param_1 + 0x8c0))(param_1 + 0x8e0,&local_70,&local_a0);
  }
  return;
}


