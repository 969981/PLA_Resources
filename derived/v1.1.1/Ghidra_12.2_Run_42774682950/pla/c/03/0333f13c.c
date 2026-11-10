/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333f13c; name: FUN_0333f13c
 */


uint FUN_0333f13c(ushort *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *param_1;
  uVar4 = uVar2 & 0x3ff;
  if ((uVar2 & 0x7c00) == 0) {
    if ((uVar2 & 0x3ff) == 0) {
      uVar5 = 0xffffff90;
    }
    else {
      uVar5 = 1;
      do {
        uVar5 = uVar5 - 1;
        uVar3 = uVar4 << 1;
        uVar1 = uVar4 >> 9;
        uVar4 = uVar3;
      } while ((uVar1 & 1) == 0);
      uVar4 = uVar3 & 0x3fe;
    }
  }
  else {
    uVar5 = 0x8f;
    if ((uVar2 & 0x7c00) != 0x7c00) {
      uVar5 = uVar2 >> 10 & 0x1f;
    }
  }
  return uVar5 * 0x800000 + 0x38000000 | (uVar2 & 0x8000) << 0x10 | uVar4 << 0xd;
}


