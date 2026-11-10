/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c62fcc; name: FUN_02c62fcc
 */


void FUN_02c62fcc(long param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  uVar1 = FUN_02c6849c(*(undefined8 *)(param_1 + 0x98));
  uVar2 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
  if ((uVar2 & 0xffff) == (param_2 & 0xffff)) {
    return;
  }
  FUN_02c6314c(param_1,param_2,param_3);
  FUN_02c7f4bc(*(undefined8 *)(param_1 + 0x98),param_2);
  uVar3 = FUN_02c702e0(*(undefined8 *)(param_1 + 0x98));
  uVar5 = FUN_02c7061c(*(undefined8 *)(param_1 + 0x98));
  uVar2 = 2;
  if ((uVar5 & 1) == 0) {
    uVar2 = uVar3 & 1;
  }
  uVar4 = FUN_02c8b630(uVar1,param_2,uVar2);
  FUN_02c7ac88(*(undefined8 *)(param_1 + 0x98),uVar4);
  uVar4 = FUN_02c6f5e8(*(undefined8 *)(param_1 + 0x98));
  uVar1 = FUN_02c8b41c(uVar1,param_2,uVar4);
  FUN_02c7f16c(*(undefined8 *)(param_1 + 0x98),uVar1);
  FUN_02c5bb1c(param_1,1);
  return;
}


