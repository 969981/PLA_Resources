/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0331fa60; name: FUN_0331fa60
 */


uint FUN_0331fa60(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong local_30;
  ulong uStack_28;
  
  local_30 = 0;
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_30);
  uVar1 = local_30;
  if (local_30 == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_032e2ef4(param_1[1]);
    if ((uVar3 & 1) == 0) {
      local_30 = FUN_032c4950(uVar1,0);
      uStack_28 = 0;
    }
    else {
      uStack_28 = FUN_032c4940(uVar1,0);
      local_30 = -uStack_28;
      if (-1 < (long)uStack_28) {
        local_30 = uStack_28;
      }
      uStack_28 = uStack_28 >> 0x3f;
    }
    uVar2 = (**(code **)(*(long *)(param_1[2] & 0xfffffffffffffffe) + 0x30))
                      ((long *)(param_1[2] & 0xfffffffffffffffe),*param_1,param_1[1],&local_30);
    uVar2 = ~uVar2 >> 0x1f;
  }
  return uVar2;
}


