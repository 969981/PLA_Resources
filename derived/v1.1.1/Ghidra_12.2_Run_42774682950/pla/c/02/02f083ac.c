/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f083ac; name: FUN_02f083ac
 */


long FUN_02f083ac(uint param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  
  uVar2 = DAT_0440ab48;
  if (DAT_0440ab4c <= DAT_0440ab48) {
    iVar1 = DAT_0440ab4c + (DAT_0440ab4c >> 1);
    if (DAT_0440ab4c == 0) {
      iVar1 = 1;
    }
    uVar3 = FUN_02f08510(iVar1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  if (DAT_0440ab4c <= uVar2) {
    return 0;
  }
  uVar3 = (ulong)DAT_0440ab48;
  DAT_0440ab48 = DAT_0440ab48 + 1;
  puVar5 = (undefined8 *)(DAT_0440ab40 + uVar3 * 0x10);
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined8 *)(DAT_0440ab40 + uVar3 * 0x10 + 8) = 0;
  }
  puVar4 = (undefined8 *)(DAT_0440ab40 + (ulong)param_1 * 0x10);
  uVar3 = (ulong)param_1;
  if (puVar4 < puVar5) {
    do {
      puVar6 = puVar5 + -2;
      *puVar5 = *puVar6;
      puVar5[1] = puVar5[-1];
      puVar4 = (undefined8 *)(DAT_0440ab40 + uVar3 * 0x10);
      puVar5 = puVar6;
    } while (puVar4 < puVar6);
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(DAT_0440ab40 + uVar3 * 0x10 + 8) = 0;
  }
  return DAT_0440ab40 + uVar3 * 0x10;
}


