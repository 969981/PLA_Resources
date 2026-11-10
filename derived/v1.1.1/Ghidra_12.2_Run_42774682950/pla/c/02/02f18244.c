/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f18244; name: FUN_02f18244
 */


undefined8 * FUN_02f18244(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar4 = DAT_0440ae08;
  if (DAT_0440ae0c <= DAT_0440ae08) {
    iVar2 = DAT_0440ae0c + (DAT_0440ae0c >> 1);
    if (DAT_0440ae0c == 0) {
      iVar2 = 1;
    }
    uVar3 = iVar2 + DAT_0440ae0c;
    puVar5 = (undefined8 *)(*DAT_0442d148)(5,DAT_0440ae00,(ulong)uVar3 << 3);
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    DAT_0440ae00 = puVar5;
    DAT_0440ae0c = uVar3;
  }
  puVar5 = DAT_0440ae00;
  if (uVar4 < DAT_0440ae0c) {
    uVar7 = (ulong)DAT_0440ae08;
    if (DAT_0440ae08 == 0) {
      puVar6 = DAT_0440ae00;
      DAT_0440ae08 = DAT_0440ae08 + 1;
    }
    else {
      puVar8 = DAT_0440ae00 + (uVar7 - 1);
      DAT_0440ae08 = DAT_0440ae08 + 1;
      DAT_0440ae00[uVar7] = *puVar8;
      puVar6 = DAT_0440ae00;
      if ((DAT_0440ae00 < puVar8) &&
         (puVar9 = puVar5 + (uVar7 - 2), *puVar8 = *puVar9, puVar6 = DAT_0440ae00,
         DAT_0440ae00 < puVar9)) {
        puVar5 = puVar5 + (uVar7 - 3);
        do {
          puVar5[1] = *puVar5;
          bVar1 = DAT_0440ae00 < puVar5;
          puVar6 = DAT_0440ae00;
          puVar5 = puVar5 + -1;
        } while (bVar1);
      }
    }
  }
  else {
    puVar6 = (undefined8 *)0x0;
  }
  return puVar6;
}


