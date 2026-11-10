/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f08488; name: FUN_02f08488
 */


long FUN_02f08488(void)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = DAT_0440ab48;
  if (DAT_0440ab4c <= DAT_0440ab48) {
    iVar1 = DAT_0440ab4c + (DAT_0440ab4c >> 1);
    if (DAT_0440ab4c == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN_02f08510(iVar1);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  if (DAT_0440ab4c <= uVar3) {
    return 0;
  }
  uVar4 = (ulong)DAT_0440ab48;
  lVar2 = DAT_0440ab40 + uVar4 * 0x10;
  DAT_0440ab48 = DAT_0440ab48 + 1;
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(DAT_0440ab40 + uVar4 * 0x10 + 8) = 0;
  return lVar2;
}


