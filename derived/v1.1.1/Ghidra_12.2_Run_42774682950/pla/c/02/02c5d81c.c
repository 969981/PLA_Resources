/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5d81c; name: FUN_02c5d81c
 */


void FUN_02c5d81c(long param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if (iVar2 != 0xd3) {
    return;
  }
  sVar1 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  if (sVar1 != 1) {
    return;
  }
  iVar2 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if ((iVar2 == 0xd3) && (sVar1 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98)), sVar1 == 1)) {
    iVar2 = FUN_02c8ad24(*(undefined8 *)(param_1 + 0x98));
  }
  else {
    iVar2 = 0;
  }
  iVar3 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if ((iVar3 != 0xd3) || (sVar1 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98)), sVar1 != 1)) {
    return;
  }
  uVar4 = iVar2 + param_2;
  FUN_02c8ad24(*(undefined8 *)(param_1 + 0x98));
  if (0x270e < uVar4) {
    uVar4 = 9999;
  }
  FUN_02c8a9e4(*(undefined8 *)(param_1 + 0x98),uVar4);
  return;
}


