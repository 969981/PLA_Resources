/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a02d0; name: FUN_010a02d0
 */


void FUN_010a02d0(long *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = FUN_02c6849c(*(undefined8 *)(*param_1 + 0x98));
  uVar2 = FUN_02c6f924(*(undefined8 *)(*param_1 + 0x98));
  uVar3 = FUN_02c6f5e8(*(undefined8 *)(*param_1 + 0x98));
  uVar4 = FUN_02c6d5b0(*(undefined8 *)(*param_1 + 0x98));
  uVar5 = FUN_02c6d8ec(*(undefined8 *)(*param_1 + 0x98));
  FUN_010a0360(uVar1,uVar2,uVar3,uVar4 & 1,uVar5 & 1);
  return;
}


