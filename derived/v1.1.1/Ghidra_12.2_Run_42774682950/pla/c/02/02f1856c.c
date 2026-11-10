/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1856c; name: FUN_02f1856c
 */


long FUN_02f1856c(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  uVar3 = DAT_0440ae50;
  uVar2 = DAT_0440ae54;
  lVar4 = DAT_0440ae48;
  if (DAT_0440ae54 <= DAT_0440ae50) {
    iVar1 = DAT_0440ae54 + (DAT_0440ae54 >> 1);
    if (DAT_0440ae54 == 0) {
      iVar1 = 1;
    }
    uVar2 = iVar1 + DAT_0440ae54;
    lVar4 = (*DAT_0442d148)(5,DAT_0440ae48,(ulong)uVar2 * 0x18);
    if (lVar4 == 0) {
      return 0;
    }
  }
  DAT_0440ae48 = lVar4;
  DAT_0440ae54 = uVar2;
  if (uVar3 < DAT_0440ae54) {
    uVar5 = (ulong)DAT_0440ae50;
    DAT_0440ae50 = DAT_0440ae50 + 1;
    puVar6 = (undefined8 *)(DAT_0440ae48 + uVar5 * 0x18);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined4 *)(DAT_0440ae48 + uVar5 * 0x18 + 0x10) = 0xff7fffff;
    }
    lVar4 = DAT_0440ae48;
    puVar7 = (undefined8 *)(DAT_0440ae48 + (ulong)param_1 * 0x18);
    if (puVar7 < puVar6) {
      do {
        puVar8 = puVar6 + -3;
        *puVar6 = *puVar8;
        puVar6[1] = puVar6[-2];
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar6 + -1);
        puVar6 = puVar8;
      } while (puVar7 < puVar8);
    }
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)(lVar4 + (ulong)param_1 * 0x18 + 0x10) = 0xff7fffff;
      lVar4 = DAT_0440ae48;
    }
    lVar4 = lVar4 + (ulong)param_1 * 0x18;
  }
  else {
    lVar4 = 0;
  }
  return lVar4;
}


