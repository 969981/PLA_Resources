/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c600e8; name: FUN_02c600e8
 */


void FUN_02c600e8(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar3 = FUN_02c6849c();
    uVar4 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    uVar1 = FUN_02c68e44(*(undefined8 *)(param_1 + 0x98));
    uVar6 = 1;
    do {
      uVar2 = FUN_02c524b0(uVar3,uVar4,uVar6);
      if (uVar1 < uVar2) break;
      uVar6 = uVar6 + 1;
    } while ((uVar6 & 0xff) < 0x65);
    uVar1 = uVar6 - 1;
    if ((uVar6 & 0xff) < 2) {
      uVar1 = 1;
    }
    uVar1 = uVar1 & 0xff;
  }
  else {
    uVar1 = FUN_02c68174();
  }
  iVar5 = 100;
  if (uVar1 + 1 < 100) {
    iVar5 = uVar1 + 1;
  }
  uVar3 = FUN_02c6849c(100,*(undefined8 *)(param_1 + 0x98));
  uVar4 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  FUN_02c524b0(uVar3,uVar4,iVar5);
  return;
}


