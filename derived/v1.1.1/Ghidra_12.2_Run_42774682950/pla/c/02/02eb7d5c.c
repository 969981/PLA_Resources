/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb7d5c; name: FUN_02eb7d5c
 */


long FUN_02eb7d5c(uint *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar6 = (ulong)*param_1;
  if (*param_1 == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + 2);
  uVar7 = 0;
  lVar4 = 0;
  do {
    uVar3 = *(int *)(lVar5 + 4) - param_2;
    uVar1 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    lVar2 = lVar5;
    if (lVar4 != 0 && uVar7 <= uVar1) {
      lVar2 = lVar4;
      uVar1 = uVar7;
    }
    uVar7 = uVar1;
    uVar6 = uVar6 - 1;
    lVar5 = lVar5 + 0x10;
    lVar4 = lVar2;
  } while (uVar6 != 0);
  return lVar2;
}


