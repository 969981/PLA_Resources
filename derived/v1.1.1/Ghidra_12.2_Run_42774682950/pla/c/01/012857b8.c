/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012857b8; name: FUN_012857b8
 */


void FUN_012857b8(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x1bc) == 1) {
    uVar2 = FUN_00d67230(*(undefined8 *)(param_1 + 0x1b0));
    if ((uVar2 & 1) != 0) {
      iVar1 = FUN_00d67240(*(undefined8 *)(param_1 + 0x1b0));
      if (iVar1 == 0) {
        FUN_01285cbc(param_1);
        return;
      }
      FUN_01285d08(param_1);
      return;
    }
  }
  else if ((*(int *)(param_1 + 0x1bc) == 0) &&
          (uVar2 = FUN_00d6721c(*(undefined8 *)(param_1 + 0x1b0)), (uVar2 & 1) != 0)) {
    FUN_00d67178(*(undefined8 *)(param_1 + 0x1b0));
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + 1;
  }
  return;
}


