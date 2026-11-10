/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5d784; name: FUN_02c5d784
 */


void FUN_02c5d784(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if (iVar1 == 0xea) {
    iVar1 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
    if (iVar1 == 0xea) {
      iVar1 = FUN_02c8ad24(*(undefined8 *)(param_1 + 0x98));
    }
    else {
      iVar1 = 0;
    }
    iVar2 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
    if (iVar2 == 0xea) {
      uVar3 = iVar1 + param_2;
      FUN_02c8ad24(*(undefined8 *)(param_1 + 0x98));
      if (0x270e < uVar3) {
        uVar3 = 9999;
      }
      FUN_02c8a9e4(*(undefined8 *)(param_1 + 0x98),uVar3);
      return;
    }
  }
  return;
}


