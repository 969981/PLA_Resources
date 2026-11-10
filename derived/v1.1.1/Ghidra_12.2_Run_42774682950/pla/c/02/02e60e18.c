/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e60e18; name: FUN_02e60e18
 */


void FUN_02e60e18(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_f0 [8];
  float local_e8;
  undefined8 **local_e0;
  long *local_d8;
  undefined8 uStack_d0;
  float local_c8;
  undefined2 local_c4;
  long local_c0;
  ulong local_b8;
  undefined8 *local_a8;
  ulong local_a0;
  long local_90;
  ulong local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined1 auStack_50 [8];
  long local_48;
  
  *param_1 = *(long *)(param_4 + 0x78) + 8;
  FUN_02e54670(param_2,&local_48,auStack_50);
  uVar4 = (ulong)(local_48 != param_4);
  FUN_02e54a80(&local_60,param_2,uVar4);
  FUN_02e54670(param_3,&local_48,auStack_50);
  uVar5 = (ulong)(local_48 != param_4);
  FUN_02e54a80(&local_70,param_3,uVar5);
  local_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_c8 = SQRT((local_60 - local_70) * (local_60 - local_70) +
                  (fStack_5c - fStack_6c) * (fStack_5c - fStack_6c) +
                  (local_58 - local_68) * (local_58 - local_68));
  local_80 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  uStack_d0 = param_5;
  if (*(ulong *)(param_3 + uVar5 * 0x38 + 0x650) < *(ulong *)(param_2 + uVar4 * 0x38 + 0x650)) {
    local_c8 = local_c8 * 8.0;
    local_e8 = local_68;
    local_e0 = &local_a8;
    local_d8 = &local_c0;
    local_c4 = 0x100;
    FUN_02e6075c(param_1,&local_60,param_2 + uVar4 * 0x38 + 0x620,local_f0,1,0);
    FUN_02e58f68(param_5);
  }
  else {
    local_c8 = local_c8 * 8.0;
    local_e8 = local_58;
    local_e0 = &local_a8;
    local_d8 = &local_c0;
    local_c4 = 0x100;
    FUN_02e6075c(param_1,&local_70,param_3 + uVar5 * 0x38 + 0x620,local_f0,1,0);
  }
  if (local_c0 != 0) {
    local_b8 = local_b8 & 0xffffffff00000000;
    (*DAT_0442d158)(9);
    local_b8 = local_b8 & 0xffffffff;
  }
  local_c0 = 0;
  if (local_a8 == (undefined8 *)0x0) {
  }
  else {
    if ((int)local_a0 != 0) {
      lVar2 = (local_a0 & 0xffffffff) * 0x50;
      puVar3 = local_a8;
      do {
        (**(code **)*puVar3)(puVar3);
        lVar2 = lVar2 + -0x50;
        puVar3 = puVar3 + 10;
      } while (lVar2 != 0);
    }
    local_a0 = local_a0 & 0xffffffff00000000;
    (*DAT_0442d158)(0xb,local_a8);
    local_a0 = local_a0 & 0xffffffff;
  }
  local_a8 = (undefined8 *)0x0;
  if ((int)local_88 != 0) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(local_90 + uVar4 * 8);
      while (plVar1 != (long *)0x0) {
        plVar1 = (long *)*plVar1;
        FUN_02f59e60(0xb);
      }
      *(undefined8 *)(local_90 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (local_88 & 0xffffffff));
  }
  local_80 = 0;
  if (local_90 != 0) {
    local_88 = local_88 & 0xffffffff00000000;
    FUN_02f59e60(0xb);
  }
  return;
}


