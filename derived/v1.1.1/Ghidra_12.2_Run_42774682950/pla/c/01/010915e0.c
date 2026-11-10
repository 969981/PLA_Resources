/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010915e0; name: FUN_010915e0
 */


undefined4 FUN_010915e0(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  uVar4 = FUN_02c6cf3c(*(undefined8 *)(param_1 + 0x98));
  uVar3 = 0;
  if (((uVar4 & 1) == 0) &&
     ((*(ushort *)(*(long *)(*(long *)(param_1 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) {
    iVar2 = FUN_02c6849c(*(long *)(param_1 + 0x98));
    uVar1 = FUN_02c6f924(*(undefined8 *)(param_1 + 0x98));
    uVar3 = 0;
    if ((iVar2 == 0x1df) && (uVar1 < 6)) {
      uVar3 = *(undefined4 *)(&DAT_03a7895c + (ulong)uVar1 * 4);
    }
  }
  return uVar3;
}


