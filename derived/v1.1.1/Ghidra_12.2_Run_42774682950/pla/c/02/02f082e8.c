/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f082e8; name: FUN_02f082e8
 */


long FUN_02f082e8(uint param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  long lVar6;
  
  if (DAT_0440ab48 == 0) {
    lVar6 = 0;
    uVar4 = 0;
  }
  else {
    iVar3 = 0;
    uVar5 = DAT_0440ab48;
    do {
      uVar1 = iVar3 + (uVar5 >> 1);
      lVar6 = (long)(int)uVar1;
      uVar2 = *(uint *)(DAT_0440ab40 +
                       (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
      if (uVar2 == param_1) {
        uVar4 = 1;
        goto LAB_02f08340;
      }
      if (uVar2 < param_1) {
        iVar3 = uVar1 + 1;
      }
      uVar5 = uVar5 - (uVar2 < param_1) >> 1;
    } while (uVar5 != 0);
    lVar6 = (long)iVar3;
    uVar4 = 0;
  }
LAB_02f08340:
  *param_2 = uVar4;
  return DAT_0440ab40 + lVar6 * 0x10;
}


