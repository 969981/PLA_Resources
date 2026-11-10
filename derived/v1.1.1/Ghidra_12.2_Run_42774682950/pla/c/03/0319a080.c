/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0319a080; name: FUN_0319a080
 */


undefined4
FUN_0319a080(long param_1,uint param_2,long param_3,undefined8 param_4,undefined4 param_5,
            undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            undefined8 *param_10,undefined8 *param_11,undefined8 param_12,undefined8 param_13)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined **local_130;
  int local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined1 auStack_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined4 local_e0;
  uint local_dc;
  long local_d8;
  undefined *local_d0;
  undefined1 local_c8;
  long local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  long *local_a0;
  long *plStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  local_78 = 0;
  local_70 = -0x8000000000000000;
  local_88 = 0;
  local_80 = -0x8000000000000000;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_130 = (undefined **)(PTR_DAT_04388cf0 + 0x10);
  local_128 = 1 << (ulong)(param_2 & 0x1f);
  uStack_f8 = param_11[1];
  local_100 = *param_11;
  lStack_e8 = param_11[3];
  local_f0 = param_11[2];
  local_d0 = &DAT_042f0500;
  local_a0 = &local_78;
  plStack_98 = &local_88;
  local_c8 = 0;
  local_90 = *param_10;
  local_c0 = param_1;
  lStack_b8 = param_3;
  local_b0 = param_4;
  local_a8 = param_5;
  (**(code **)(**(long **)(param_1 + 0xe0) + 0x48))(*(long **)(param_1 + 0xe0),&local_130,&local_d0)
  ;
  if ((int)local_70 == 0) {
    uVar3 = 0;
    plVar5 = (long *)PTR_PTR_0434a090;
  }
  else {
    if (param_3 == 0) {
      FUN_0319c6e8(&local_130,param_1,param_7,param_8,local_78,local_78 + (long)(int)local_70 * 4);
      uVar3 = FUN_0319a380(param_1,&local_130,local_88,local_88 + (long)(int)local_80 * 4,param_6,
                           param_7,param_8,param_9,param_10,param_12,param_13);
      plVar5 = (long *)PTR_PTR_0434a090;
      local_130 = &PTR_LAB_042f0530;
      local_e0 = 0;
      if ((-1 < (int)local_dc) && (lStack_e8 != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
                  (PTR_PTR_0434a090,lStack_e8,((ulong)local_dc & 0x3fffffff) << 3);
      }
    }
    else {
      FUN_0319c6e8(&local_130,param_1,param_7,param_8,local_78,local_78 + (long)(int)local_70 * 4);
      local_130 = &PTR_LAB_042f0578;
      local_d8 = param_3;
      uVar3 = FUN_0319a380(param_1,&local_130,local_88,local_88 + (long)(int)local_80 * 4,param_6,
                           param_7,param_8,param_9,param_10,param_12,param_13);
      plVar5 = (long *)PTR_PTR_0434a090;
      local_130 = &PTR_LAB_042f0530;
      local_e0 = 0;
      if ((-1 < (int)local_dc) && (lStack_e8 != 0)) {
        (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
                  (PTR_PTR_0434a090,lStack_e8,((ulong)local_dc & 0x3fffffff) << 3);
      }
    }
    lStack_e8 = 0;
    local_dc = 0x80000000;
    FUN_0319b918(auStack_108);
    lVar1 = local_110;
    uVar4 = (ulong)local_110._4_4_;
    local_110 = (ulong)local_110._4_4_ << 0x20;
    if ((-1 < lVar1) && (CONCAT44(uStack_114,local_118) != 0)) {
      (**(code **)(*plVar5 + 0x18))
                (plVar5,CONCAT44(uStack_114,local_118),(uVar4 & 0x3fffffff) * 0xc);
    }
  }
  lVar1 = local_80;
  uVar2 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_88 != 0)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,local_88,uVar2 << 2);
  }
  lVar1 = local_70;
  uVar2 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_78 != 0)) {
    (**(code **)(*plVar5 + 0x18))(plVar5,local_78,uVar2 << 2);
  }
  return uVar3;
}


