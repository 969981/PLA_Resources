/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280f4d4; name: FUN_0280f4d4
 */


void FUN_0280f4d4(long param_1,int *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x468);
  if (*(int *)(lVar1 + 0x1c) == 0) {
    uVar2 = *param_2 + *(int *)(lVar1 + 0xc) * param_2[1];
  }
  else {
    uVar2 = param_2[1] + *(int *)(lVar1 + 0x10) * *param_2;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x40) + 0x20) + (ulong)uVar2 * 0x28;
  *(ulong *)(lVar1 + 0x20) = *(ulong *)(lVar1 + 0x20) & 0xfffffffffffffffe | param_3 & 1;
  return;
}


