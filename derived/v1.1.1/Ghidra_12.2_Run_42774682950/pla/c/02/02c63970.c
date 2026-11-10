/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c63970; name: FUN_02c63970
 */


undefined8 FUN_02c63970(long param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  if ((iVar2 == 0x2d0) || (iVar2 == 0x2a4)) {
    sVar1 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    if (sVar1 == 0) {
      return 0;
    }
    FUN_02c62fcc(param_1,0,0);
    uVar3 = FUN_02c8ad24(*(undefined8 *)(param_1 + 0x98));
    FUN_02c8a9e4(*(undefined8 *)(param_1 + 0x98),uVar3 & 0xffff00ff);
    uVar3 = FUN_02c8ad24(*(undefined8 *)(param_1 + 0x98));
    FUN_02c8a9e4(*(undefined8 *)(param_1 + 0x98),uVar3 & 0xffffff00);
  }
  else {
    if ((iVar2 != 0x1ec) || (sVar1 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98)), sVar1 == 0)) {
      return 0;
    }
    FUN_02c62fcc(param_1,0,0);
  }
  return 1;
}


