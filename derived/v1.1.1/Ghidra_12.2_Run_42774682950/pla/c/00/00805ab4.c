/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00805ab4; name: FUN_00805ab4
 */


uint FUN_00805ab4(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  undefined8 local_28;
  
  uVar1 = FUN_007f7550(*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *(uint *)(param_1 + 0x80) & uVar1;
  *(uint *)(param_1 + 0x80) = uVar1;
  if (uVar1 != 0) {
    local_28 = 0;
    FUN_007ecf14(&local_28);
    lVar5 = local_28 - *(long *)(param_1 + 0x88);
    plVar2 = (long *)FUN_007ecfa4();
    uVar1 = 0;
    if (*plVar2 != 0) {
      uVar1 = (uint)(lVar5 / *plVar2);
    }
    if (*(uint *)(param_1 + 0x90) <= uVar1) {
      uVar3 = FUN_007f0ee4(param_1 + 0x60);
      if ((uVar3 & 1) == 0) {
        local_28 = (ulong)local_28._4_4_ << 0x20;
        (**(code **)(**(long **)(param_1 + 0xa8) + 0x148))
                  (*(long **)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98),
                   *(uint *)(param_1 + 0x80) & (*(uint *)(param_1 + 0x84) ^ 0xffffffff),&local_28);
      }
      else {
        local_28 = (ulong)local_28._4_4_ << 0x20;
        (**(code **)(**(long **)(param_1 + 0xa8) + 0x140))
                  (*(long **)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98),param_1 + 0x60,
                   &local_28);
      }
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | (uint)local_28;
      local_28 = 0;
      FUN_007ecf14(&local_28);
      *(long *)(param_1 + 0x88) = local_28;
      uVar1 = *(int *)(param_1 + 0x90) << 0x10;
      uVar4 = 4;
      goto LAB_00805ba4;
    }
  }
  uVar1 = 0;
  uVar4 = 5;
LAB_00805ba4:
  return uVar1 | uVar4;
}


