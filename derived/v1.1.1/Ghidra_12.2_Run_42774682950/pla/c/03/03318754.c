/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03318754; name: FUN_03318754
 */


undefined4 FUN_03318754(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long local_78;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  undefined8 local_48;
  
  puVar1 = PTR_PTR_0434a090;
  local_50 = 0;
  local_48 = -0x8000000000000000;
  uVar5 = (ulong)((long)param_3 - (long)param_2) >> 3;
  local_60 = local_50;
  if (0 < (int)uVar5) {
    if (0x3fffffff < (int)uVar5) {
      FUN_032bd0a8(uVar5 & 0xffffffff);
    }
    local_60 = FUN_032bd1d4(puVar1,uVar5 & 0xffffffff,8,0,0,(long)&local_48 + 4);
  }
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    if (*param_2 != 0) {
      *(long *)(local_60 + (long)(int)local_48 * 8) = *param_2;
      local_48._4_4_ = (uint)((ulong)local_48 >> 0x20);
      local_48 = CONCAT44(local_48._4_4_,(int)local_48 + 1);
    }
  }
  lStack_58 = local_60 + (long)(int)local_48 * 8;
  local_78 = param_1 + 0x20;
  if (*(long *)(param_1 + 0x30) == 1) {
    *(undefined1 **)(param_1 + 0x30) = &LAB_03318e80;
    *(long **)(param_1 + 0x38) = &local_70;
  }
  local_70 = local_78;
  lStack_68 = param_1;
  local_50 = local_60;
  uVar4 = FUN_033188c8(&local_78,local_60,lStack_58,param_1);
  lVar2 = local_48;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  if (*(undefined1 **)(local_70 + 0x10) == &LAB_03318e80) {
    *(undefined8 *)(local_70 + 0x10) = 1;
    *(undefined8 *)(local_70 + 0x18) = 0;
  }
  uVar3 = local_48._4_4_;
  local_48 = (ulong)local_48._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_50 != 0)) {
    FUN_032cf244(puVar1,local_50,8,uVar3 & 0x3fffffff);
  }
  return uVar4;
}


