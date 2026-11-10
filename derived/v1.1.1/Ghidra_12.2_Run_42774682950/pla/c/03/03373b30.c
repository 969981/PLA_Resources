/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03373b30; name: FUN_03373b30
 */


int FUN_03373b30(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int local_c0 [8];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  long local_60;
  long lStack_58;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  
  if (param_1[3] < 0) {
    FUN_0337380c(&local_40,param_1);
    lVar2 = param_2[3];
  }
  else {
    local_40 = *param_1;
    lStack_38 = param_1[1];
    local_30 = param_1[2];
    lStack_28 = param_1[3];
    lVar2 = param_2[3];
  }
  if (lVar2 < 0) {
    FUN_0337380c(&local_60,param_2);
  }
  else {
    local_60 = *param_2;
    lStack_58 = param_2[1];
    local_50 = param_2[2];
    lStack_48 = param_2[3];
  }
  local_7c = (undefined4)((ulong)local_40 >> 0x20);
  uStack_78 = (undefined4)lStack_38;
  local_80 = (undefined4)local_40;
  local_a0 = (undefined4)local_60;
  uStack_9c = (undefined4)((ulong)local_60 >> 0x20);
  local_74 = (undefined4)((ulong)lStack_38 >> 0x20);
  uStack_70 = (undefined4)local_30;
  local_98 = (undefined4)lStack_58;
  local_94 = (undefined4)((ulong)lStack_58 >> 0x20);
  uStack_90 = (undefined4)local_50;
  local_68 = (undefined4)lStack_28;
  uStack_64 = (undefined4)((ulong)lStack_28 >> 0x20);
  local_6c = (undefined4)((ulong)local_30 >> 0x20);
  local_88 = (undefined4)lStack_48;
  uStack_84 = (undefined4)((ulong)lStack_48 >> 0x20);
  local_8c = (undefined4)((ulong)local_50 >> 0x20);
  FUN_03373040(&local_80,&local_a0,local_c0,8);
  if (param_1[3] < 0) {
    uVar1 = 0xffffffff;
    lVar2 = param_2[3];
  }
  else if ((*param_1 == 0) && (param_1[1] == 0)) {
    uVar1 = (uint)(param_1[2] != 0 || param_1[3] != 0);
    lVar2 = param_2[3];
  }
  else {
    uVar1 = 1;
    lVar2 = param_2[3];
  }
  if (lVar2 < 0) {
    uVar3 = 0xffffffff;
  }
  else if ((*param_2 == 0) && (param_2[1] == 0)) {
    uVar3 = (uint)(param_2[2] != 0 || lVar2 != 0);
  }
  else {
    uVar3 = 1;
  }
  return uVar3 * uVar1 * local_c0[0];
}


