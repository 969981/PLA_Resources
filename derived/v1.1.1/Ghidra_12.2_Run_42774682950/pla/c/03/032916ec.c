/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032916ec; name: FUN_032916ec
 */


void FUN_032916ec(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  uint local_34;
  
  puVar1 = PTR_PTR_0434a080;
  local_50 = 0;
  local_48 = -0x8000000000000000;
  local_60 = 0;
  local_58 = -0x8000000000000000;
  local_70 = 0;
  local_68 = -0x8000000000000000;
  uVar3 = *(int *)(param_2 + 0x20) + 4;
  local_80 = 0;
  local_78 = 0x8000000000000000;
  local_90 = CONCAT44(local_90._4_4_,uVar3);
  if ((int)uVar3 < 1) {
    local_90._0_4_ = 0x80000000;
    local_80 = 0;
    uVar4 = 0;
  }
  else {
    local_80 = FUN_032cf190(PTR_PTR_0434a080,0x20,&local_90);
    uVar4 = uVar3;
    uVar3 = *(int *)(param_2 + 0x20) + 4;
  }
  local_78 = CONCAT44((undefined4)local_90,uVar4);
  local_90 = 0;
  local_88 = 0x8000000000000000;
  local_a0 = CONCAT44(local_a0._4_4_,uVar3);
  if ((int)uVar3 < 1) {
    local_a0._0_4_ = 0x80000000;
    local_90 = 0;
    uVar4 = 0;
  }
  else {
    local_90 = FUN_032cf190(puVar1,8,&local_a0);
    uVar4 = uVar3;
    uVar3 = *(int *)(param_2 + 0x20) + 4;
  }
  local_88 = CONCAT44((undefined4)local_a0,uVar4);
  local_a0 = 0;
  local_98 = 0x8000000000000000;
  local_34 = uVar3;
  if ((int)uVar3 < 1) {
    local_98._0_4_ = 0;
    local_98._4_4_ = 0x80000000;
    local_a0 = 0;
  }
  else {
    local_a0 = FUN_032cf190(puVar1,0x20,&local_34);
    local_98._0_4_ = uVar3;
    local_98._4_4_ = local_34;
  }
  FUN_03291924(param_1,param_2,0,&local_50,&local_60,&local_70,&local_80,&local_90,&local_a0);
  uVar3 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (int)uVar3) && (local_a0 != 0)) {
    FUN_032cf244(puVar1,local_a0,0x20,uVar3 & 0x3fffffff);
  }
  lVar2 = local_88;
  uVar3 = local_88._4_4_;
  local_88 = (ulong)local_88._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_90 != 0)) {
    FUN_032cf244(puVar1,local_90,8,uVar3 & 0x3fffffff);
  }
  lVar2 = local_78;
  uVar3 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_80 != 0)) {
    FUN_032cf244(puVar1,local_80,0x20,uVar3 & 0x3fffffff);
  }
  lVar2 = local_68;
  uVar3 = local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_70 != 0)) {
    FUN_032cf244(puVar1,local_70,0x10,uVar3 & 0x3fffffff);
  }
  lVar2 = local_58;
  uVar3 = local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_60 != 0)) {
    FUN_032cf244(puVar1,local_60,4,uVar3 & 0x3fffffff);
  }
  lVar2 = local_48;
  uVar3 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_50 != 0)) {
    FUN_032cf244(puVar1,local_50,4,uVar3 & 0x3fffffff);
  }
  return;
}


