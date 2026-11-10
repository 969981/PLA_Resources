/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eacdcc; name: FUN_02eacdcc
 */


long FUN_02eacdcc(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = DAT_0440a440;
  if (DAT_0440a444 <= DAT_0440a440) {
    iVar1 = DAT_0440a444 + (DAT_0440a444 >> 1);
    if (DAT_0440a444 == 0) {
      iVar1 = 1;
    }
    uVar3 = FUN_02eace44(iVar1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if (uVar2 < DAT_0440a444) {
    uVar3 = (ulong)DAT_0440a440;
    DAT_0440a440 = DAT_0440a440 + 1;
    return DAT_0440a438 + uVar3 * 0x28;
  }
  return 0;
}


