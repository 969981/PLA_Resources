/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f080c4; name: FUN_02f080c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_02f080c4(uint param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar4 = DAT_0440ab18;
  lVar2 = DAT_0440ab10;
  uVar3 = DAT_0440ab18;
  if (_DAT_0440ab1c <= DAT_0440ab18) {
    iVar1 = _DAT_0440ab1c + (_DAT_0440ab1c >> 1);
    if (_DAT_0440ab1c == 0) {
      iVar1 = 1;
    }
    uVar6 = FUN_02f08218(iVar1);
    lVar2 = DAT_0440ab10;
    uVar3 = DAT_0440ab18;
    if ((uVar6 & 1) == 0) {
      return (undefined8 *)0x0;
    }
  }
  if (_DAT_0440ab1c <= uVar4) {
    DAT_0440ab18 = uVar3;
    DAT_0440ab10 = lVar2;
    return (undefined8 *)0x0;
  }
  DAT_0440ab18 = uVar3 + 1;
  puVar7 = (undefined8 *)(lVar2 + (ulong)uVar3 * 0x18);
  DAT_0440ab10 = lVar2;
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
  }
  puVar5 = (undefined8 *)(lVar2 + (ulong)param_1 * 0x18);
  if (param_1 < uVar3) {
    do {
      puVar8 = puVar7 + -3;
      puVar7[2] = puVar7[-1];
      *puVar7 = *puVar8;
      puVar7[1] = puVar7[-2];
      puVar7 = puVar8;
    } while (puVar5 < puVar8);
  }
  if (puVar5 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  return puVar5;
}


