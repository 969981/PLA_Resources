/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b82e8; name: FUN_031b82e8
 */


uint FUN_031b82e8(undefined8 param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
                 undefined4 param_9,undefined8 *param_10,byte param_11,undefined8 param_12,
                 undefined8 param_13,undefined4 param_14,undefined8 *param_15)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined **local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  long local_180;
  int local_178;
  long local_158;
  undefined4 local_150;
  uint local_14c;
  undefined1 auStack_c0 [48];
  undefined8 local_90;
  
  FUN_033299e0(0x98ec58ea);
  FUN_031ba1b4(auStack_c0);
  FUN_031ba1bc(auStack_c0,param_12,param_13,param_14);
  if ((param_11 & 1) == 0) {
    FUN_033299e0(0x466fae2f);
    FUN_031bac48(param_1,&local_1d0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 param_10,auStack_c0);
    uVar1 = FUN_031bcbd4(&local_1d0);
    FUN_033299e0(0x22f3b1d7);
    local_1d0 = &PTR_LAB_042f0c90;
    local_150 = 0;
    if ((-1 < (int)local_14c) && (local_158 != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
                (PTR_PTR_0434a090,local_158,((ulong)local_14c & 0x3fffffff) * 0x30);
    }
    local_14c = 0x80000000;
    local_158 = 0;
    if (local_180 == CONCAT44(uStack_18c,local_190)) {
      local_188 = (undefined1 *)((ulong)local_188 & 0xffffffff00000000);
    }
    lVar2 = tpidr_el0;
    lVar5 = *(long *)(lVar2 + 0x38d490);
    if (lVar5 == 0) {
      lVar5 = FUN_0333d16c(0,1);
      *(long *)(lVar2 + 0x38d490) = lVar5;
    }
    lVar2 = *(long *)(lVar5 + 8);
    uVar3 = (long)local_178 * 0x80;
    if (((*(ulong *)(lVar2 + 0x10) < uVar3) || (*(long *)(lVar2 + 0x18) != uVar3 + local_180)) ||
       (*(long *)(lVar2 + 0x28) == local_180)) {
      if (local_180 != 0) {
        if (*(ulong *)(lVar2 + 0x10) < uVar3) {
          *(int *)(*(long *)(lVar2 + 8) + 0x20) = *(int *)(*(long *)(lVar2 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar2 + 0x40) + 0x18))(*(long **)(lVar2 + 0x40),local_180);
        }
        else if (*(long *)(lVar2 + 0x18) == uVar3 + local_180) {
          *(long *)(lVar2 + 0x18) = local_180;
          FUN_032ce944();
        }
        else {
          FUN_032ceaf0(lVar2,local_180);
        }
      }
    }
    else {
      *(long *)(lVar2 + 0x18) = local_180;
    }
    uVar3 = (ulong)local_188;
    uVar4 = (ulong)local_188._4_4_;
    uVar1 = uVar1 & 1;
    local_188 = (undefined1 *)((ulong)local_188._4_4_ << 0x20);
    if ((-1 < (long)uVar3) && (CONCAT44(uStack_18c,local_190) != 0)) {
      (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                (PTR_PTR_0434a080,CONCAT44(uStack_18c,local_190),(uVar4 & 0x3fffffff) << 7);
    }
  }
  else {
    local_1b8 = param_6[1];
    local_1c0 = *param_6;
    local_1a8 = param_7[1];
    local_1b0 = *param_7;
    local_198 = param_10[1];
    local_1a0 = *param_10;
    local_188 = auStack_c0;
    uStack_18c = (undefined4)param_1;
    local_1d0 = param_2;
    uStack_1c8 = param_4;
    local_190 = param_5;
    uVar1 = FUN_031b85e4(&local_1d0,param_9);
    FUN_033299e0(0xb4802c79);
  }
  if (param_15 != (undefined8 *)0x0) {
    *param_15 = local_90;
  }
  return uVar1;
}


