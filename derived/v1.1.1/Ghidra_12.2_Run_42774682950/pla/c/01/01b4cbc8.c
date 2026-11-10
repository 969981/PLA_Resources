/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b4cbc8; name: FUN_01b4cbc8
 */


int FUN_01b4cbc8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x3b8);
  uVar4 = *(ulong *)(param_1 + 0x3c0);
  do {
    uVar5 = uVar2 ^ uVar4;
    iVar3 = (int)uVar4;
    uVar4 = uVar5 >> 0x1b | uVar5 << 0x25;
    uVar1 = (int)uVar2 + iVar3 & 0x7f;
    uVar2 = uVar5 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar5 << 0x10;
  } while (99 < uVar1);
  *(ulong *)(param_1 + 0x3b8) = uVar2;
  *(ulong *)(param_1 + 0x3c0) = uVar4;
  return uVar1 + 1;
}


