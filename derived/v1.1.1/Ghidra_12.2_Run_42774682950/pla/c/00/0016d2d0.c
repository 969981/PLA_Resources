/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016d2d0; name: FUN_0016d2d0
 */


uint FUN_0016d2d0(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (*(char *)(param_1 + 10) != '\0') {
    return *(uint *)(param_1 + 0xc);
  }
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar4 = uVar3 >> 5;
  uVar2 = *(uint *)(param_1 + 0xc) ^ (uint)uVar3;
  if (uVar4 < uVar3) {
    do {
      pbVar1 = (byte *)(param_1 + 0x17 + uVar3);
      uVar3 = uVar3 + ~uVar4;
      uVar2 = uVar2 * 0x20 + (uVar2 >> 2) + (uint)*pbVar1 ^ uVar2;
    } while (uVar4 < uVar3);
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  *(undefined1 *)(param_1 + 10) = 1;
  return uVar2;
}


