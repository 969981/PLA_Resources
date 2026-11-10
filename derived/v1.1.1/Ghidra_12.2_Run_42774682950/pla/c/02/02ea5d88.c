/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea5d88; name: FUN_02ea5d88
 */


int FUN_02ea5d88(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_b0 [128];
  
  uVar1 = *(uint *)(param_1 + 0x50);
  FUN_02ea5fac();
  iVar2 = FUN_02ea6020(param_1);
  uVar3 = FUN_02ea6144(param_1,auStack_b0 + (0x80 - ((ulong)uVar1 * 4 + 0xf & 0x7fffffff0)));
  FUN_02ea60c8(param_1,uVar3);
  iVar4 = FUN_02ea61c4(param_1,auStack_b0 + (0x80 - ((ulong)uVar1 * 4 + 0xf & 0x7fffffff0)));
  return iVar2 + iVar4 + 0x18;
}


