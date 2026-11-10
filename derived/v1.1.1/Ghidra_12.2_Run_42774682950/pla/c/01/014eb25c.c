/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014eb25c; name: FUN_014eb25c
 */


void FUN_014eb25c(long param_1)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x1cc) != 1) {
    if (*(int *)(param_1 + 0x1cc) != 0) {
      return;
    }
    FUN_014fe33c(*(undefined8 *)(param_1 + 0x1a8),0);
    FUN_00d6a4ec(*(undefined8 *)(param_1 + 0x1b8));
    *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
  }
  uVar1 = FUN_014fe3c4(*(undefined8 *)(param_1 + 0x1a8));
  if (((uVar1 & 1) != 0) &&
     (uVar1 = FUN_00d6a610(*(undefined8 *)(param_1 + 0x1b8)), (uVar1 & 1) != 0)) {
    FUN_014fe4a4(*(undefined8 *)(param_1 + 0x1a8));
    FUN_00d428b0(*(undefined8 *)(param_1 + 0x1a8),0);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  return;
}


