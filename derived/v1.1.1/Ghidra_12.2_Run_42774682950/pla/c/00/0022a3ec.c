/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022a3ec; name: FUN_0022a3ec
 */


uint FUN_0022a3ec(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1b < param_2) {
    return 0xff;
  }
  iVar1 = param_2 + 3;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  uVar4 = iVar1 >> 2;
  if (uVar4 < 2) {
    switch(param_2 % 4) {
    case 0:
      return (uint)*(byte *)(param_1 + (ulong)uVar4 * 4 + 8);
    case 1:
      return (uint)*(byte *)(param_1 + (ulong)uVar4 * 4 + 9);
    case 2:
      return (uint)*(byte *)(param_1 + (ulong)uVar4 * 4 + 10);
    case 3:
      return (uint)*(byte *)(param_1 + (ulong)uVar4 * 4 + 0xb);
    }
  }
  else {
    if (6 < uVar4) {
      return 0xff;
    }
    uVar2 = *(uint *)(param_1 + 0x10);
    if ((uVar2 >> 0x10 & 1) == 0) {
      if ((uVar2 >> 0x11 & 1) == 0) {
        return 0xff;
      }
      uVar3 = param_2 + uVar4 * -4;
      if (uVar3 < 4) {
        uVar4 = *(uint *)(*(long *)(param_1 + 0x18) +
                          (long)(int)((uVar2 >> 4 & 0x1c) + (uVar2 >> 8 & 0xc) + (uVar2 >> 0xc & 8)
                                      + (uVar2 >> 0xc & 1) * 0xc + (uVar2 >> 0x10 & 1) * 0x1c +
                                      (uVar2 >> 0xc & 0x10) * (uVar2 >> 6 & 7) +
                                      ((uVar2 & 3) * 0x10 + (uVar2 & 0x30) | uVar2 >> 6 & 8) +
                                     ((uVar2 >> 0xd & 3) + (uVar2 >> 2 & 3)) * 0x14) +
                          (ulong)((uVar4 - 2) % 5) * 4 + 0x60);
        switch(uVar3) {
        case 0:
          return uVar4 & 0xff;
        case 1:
          return uVar4 >> 8 & 0xff;
        case 2:
          return uVar4 >> 0x10 & 0xff;
        case 3:
          return uVar4 >> 0x18;
        }
      }
    }
    else {
      uVar4 = FUN_0022a650(param_1,uVar4 - 2);
      switch(param_2 % 4) {
      case 0:
        return uVar4 & 0xff;
      case 1:
        return uVar4 >> 8 & 0xff;
      case 2:
        return uVar4 >> 0x10 & 0xff;
      case 3:
        return uVar4 >> 0x18;
      }
    }
  }
  return 0;
}


