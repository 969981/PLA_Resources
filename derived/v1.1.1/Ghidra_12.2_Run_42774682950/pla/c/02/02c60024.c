/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c60024; name: FUN_02c60024
 */


void FUN_02c60024(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  if (*(long *)(*(long *)(param_1 + 0x98) + 8) == 0) {
    uVar4 = FUN_02c6849c();
    uVar5 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    uVar3 = FUN_02c68e44(*(undefined8 *)(param_1 + 0x98));
    uVar7 = 1;
    do {
      uVar6 = FUN_02c524b0(uVar4,uVar5,uVar7);
      if (uVar3 < uVar6) break;
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xff) < 0x65);
    uVar3 = uVar7 - 1;
    if ((uVar7 & 0xff) < 2) {
      uVar3 = 1;
    }
    uVar3 = uVar3 & 0xff;
  }
  else {
    uVar3 = FUN_02c68174();
  }
  FUN_02c524b0(uVar1,uVar2,uVar3);
  return;
}


