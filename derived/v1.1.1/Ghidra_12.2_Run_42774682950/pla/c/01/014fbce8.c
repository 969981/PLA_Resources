/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fbce8; name: FUN_014fbce8
 */


void FUN_014fbce8(long param_1,ulong param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  FUN_014fcfd8(param_1,param_2,param_3 & 1);
  lVar1 = param_1 + (param_2 & 0xffffffff) * 4;
  uVar2 = *(undefined4 *)(lVar1 + 0x640);
  uVar5 = *(undefined8 *)(param_1 + 0x600);
  uVar3 = FUN_014fcf64(param_1,uVar2);
  uVar4 = FUN_02c618d4(*(undefined8 *)(param_1 + 0x5b8),*(undefined4 *)(lVar1 + 0x640));
  FUN_014f1490(uVar5,uVar2,&DAT_043c6568 + (param_2 & 0xffffffff) * 0x28,~uVar3 & 1,uVar4 & 1);
  return;
}


