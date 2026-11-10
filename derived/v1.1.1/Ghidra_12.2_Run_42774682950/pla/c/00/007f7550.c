/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f7550; name: FUN_007f7550
 */


int FUN_007f7550(long param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(short *)(param_1 + 0x114e) == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      uVar1 = FUN_007f0ee4(*(long *)(*(long *)(param_1 + 0x88) + uVar3 * 8) + 0x10);
      if ((uVar1 & 1) != 0) {
        uVar1 = FUN_007f0f48(*(long *)(*(long *)(param_1 + 0x88) + uVar3 * 8) + 0x10,param_1 + 0x98)
        ;
        if ((uVar1 & 1) == 0) {
          iVar2 = (1 << (ulong)((uint)uVar3 & 0x1f)) + iVar2;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x114e));
  }
  return iVar2;
}


