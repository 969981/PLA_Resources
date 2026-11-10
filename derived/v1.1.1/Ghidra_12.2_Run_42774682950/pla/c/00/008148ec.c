/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008148ec; name: FUN_008148ec
 */


undefined8 FUN_008148ec(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int local_60 [4];
  undefined1 auStack_50 [32];
  
  uVar4 = FUN_007f7d40();
  if (((uVar4 & 1) != 0) && (**(long **)(param_1 + 0x88) != 0)) {
    uVar1 = *(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x20) + *(int *)(param_2 + 0x48);
    FUN_007f0ce0(auStack_50);
    iVar2 = *(int *)(param_2 + 0x1c);
    uVar3 = FUN_007f0d7c(auStack_50);
    if (((iVar2 - uVar1 <= uVar3) &&
        ((FUN_007f0e44(local_60,auStack_50,
                       *(long *)(param_2 + 8) + (ulong)*(uint *)(param_2 + 0x18) + (ulong)uVar1,
                       *(int *)(param_2 + 0x1c) - uVar1), local_60[0] == 0 &&
         (uVar4 = FUN_007f0ee4(auStack_50), (uVar4 & 1) != 0)))) &&
       (((uVar4 = FUN_007f63fc(param_1), (uVar4 & 1) == 0 &&
         (uVar4 = FUN_007f6c84(param_1), (uVar4 & 1) == 0)) ||
        (uVar4 = FUN_007f0f48(auStack_50,param_1 + 0xb8), (uVar4 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}


