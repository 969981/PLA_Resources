/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6726c; name: FUN_02e6726c
 */


long FUN_02e6726c(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = DAT_0440a0b0;
  if (DAT_0440a0b4 <= DAT_0440a0b0) {
    iVar1 = DAT_0440a0b4 + (DAT_0440a0b4 >> 1);
    if (DAT_0440a0b4 == 0) {
      iVar1 = 1;
    }
    uVar3 = FUN_02e672e0(iVar1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if (uVar2 < DAT_0440a0b4) {
    uVar3 = (ulong)DAT_0440a0b0;
    DAT_0440a0b0 = DAT_0440a0b0 + 1;
    return DAT_0440a0a8 + uVar3 * 8;
  }
  return 0;
}


