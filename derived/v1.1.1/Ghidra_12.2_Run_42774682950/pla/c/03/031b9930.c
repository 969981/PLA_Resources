/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b9930; name: FUN_031b9930
 */


uint FUN_031b9930(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined4 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8,
                 undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined4 param_13)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_230;
  undefined1 local_22c;
  undefined4 local_22b;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined1 local_1fc;
  undefined4 local_1fb;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined **local_1d0 [8];
  long local_190;
  undefined4 local_188;
  uint local_184;
  long local_180;
  int local_178;
  long local_158;
  undefined4 local_150;
  uint local_14c;
  undefined1 auStack_c0 [80];
  
  FUN_031ba1b4(auStack_c0);
  FUN_031ba1bc(auStack_c0,param_11,param_12,param_13);
  FUN_031bac48(param_1,local_1d0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,auStack_c0);
  local_200 = 0xffffffff;
  local_1fc = 0xff;
  uStack_1e8 = param_6[1];
  local_1f0 = *param_6;
  local_22c = 0xff;
  local_1fb = (uint)CONCAT11(*(float *)((long)param_6 + 0xc) < 0.0,1);
  local_230 = *(undefined4 *)(param_4 + 8);
  uStack_218 = param_7[1];
  local_220 = *param_7;
  local_22b = (uint)CONCAT11(*(float *)((long)param_7 + 0xc) < 0.0,2);
  uStack_210 = local_220;
  uStack_208 = uStack_218;
  uStack_1e0 = local_1f0;
  uStack_1d8 = uStack_1e8;
  FUN_031bb9e0(local_1d0,&local_200,&local_230);
  uVar1 = FUN_031bc40c(local_1d0);
  local_1d0[0] = &PTR_LAB_042f0c90;
  local_150 = 0;
  if ((-1 < (int)local_14c) && (local_158 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
              (PTR_PTR_0434a090,local_158,((ulong)local_14c & 0x3fffffff) * 0x30);
  }
  local_14c = 0x80000000;
  local_158 = 0;
  if (local_180 == local_190) {
    local_188 = 0;
  }
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar4;
  }
  lVar2 = *(long *)(lVar4 + 8);
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
  local_188 = 0;
  if ((-1 < (int)local_184) && (local_190 != 0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_190,((ulong)local_184 & 0x3fffffff) << 7);
  }
  return uVar1 & 1;
}


