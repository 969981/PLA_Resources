/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c6104; name: FUN_013c6104
 */


uint FUN_013c6104(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = thunk_FUN_00d73754(*(undefined8 *)(param_1 + 0x90));
  if (((((uVar2 & 1) == 0) &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x98) + 0xb0))(), (uVar2 & 1) == 0)) &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0xa0) + 0xb0))(), (uVar2 & 1) == 0)) &&
     (((uVar2 = (**(code **)(**(long **)(param_1 + 0xa8) + 0xb0))(), (uVar2 & 1) == 0 &&
       (uVar2 = (**(code **)(**(long **)(param_1 + 0xb0) + 0xb0))(), (uVar2 & 1) == 0)) &&
      (uVar2 = (**(code **)(**(long **)(param_1 + 0xb8) + 0xb0))(), (uVar2 & 1) == 0)))) {
    uVar2 = FUN_00d6a610(*(undefined8 *)(param_1 + 0x270));
    if ((uVar2 & 1) == 0) {
      uVar1 = FUN_00d6a788(*(undefined8 *)(param_1 + 0x270));
      uVar1 = uVar1 ^ 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}


