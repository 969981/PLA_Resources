/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0818c; name: FUN_02f0818c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_02f0818c(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  uVar2 = DAT_0440ab18;
  if (_DAT_0440ab1c <= DAT_0440ab18) {
    iVar1 = _DAT_0440ab1c + (_DAT_0440ab1c >> 1);
    if (_DAT_0440ab1c == 0) {
      iVar1 = 1;
    }
    uVar4 = FUN_02f08218(iVar1);
    if ((uVar4 & 1) == 0) {
      return (undefined8 *)0x0;
    }
  }
  if (_DAT_0440ab1c <= uVar2) {
    return (undefined8 *)0x0;
  }
  uVar4 = (ulong)DAT_0440ab18;
  DAT_0440ab18 = DAT_0440ab18 + 1;
  puVar3 = (undefined8 *)(DAT_0440ab10 + uVar4 * 0x18);
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  return puVar3;
}


