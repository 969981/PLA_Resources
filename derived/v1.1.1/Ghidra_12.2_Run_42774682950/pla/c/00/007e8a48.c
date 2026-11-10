/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e8a48; name: FUN_007e8a48
 */


void FUN_007e8a48(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_007e5f30(param_2);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_007e5f54(param_2);
    if ((uVar1 & 1) != 0) {
      FUN_007e8ec8(*(undefined8 *)(param_1 + 0x88),param_2);
      return;
    }
  }
  else {
    uVar1 = FUN_007e9010(param_1,*(int *)(param_1 + 0x14) + param_2);
    if ((uVar1 & 1) != 0) {
      FUN_007e8fec(param_1,*(int *)(param_1 + 0x14) + param_2);
      return;
    }
    uVar1 = FUN_007e9010(param_1 + 0x18,*(int *)(param_1 + 0x2c) + param_2);
    if ((uVar1 & 1) != 0) {
      FUN_007e8fec(param_1 + 0x18,*(int *)(param_1 + 0x2c) + param_2);
      return;
    }
  }
  return;
}


