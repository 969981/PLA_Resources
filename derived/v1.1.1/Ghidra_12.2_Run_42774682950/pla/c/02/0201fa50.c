/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0201fa50; name: FUN_0201fa50
 */


long FUN_0201fa50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + param_2;
  lVar5 = lVar1;
  lVar3 = lVar1;
  if (0xd < param_2) {
    while (param_2 != 0xd) {
      param_2 = param_2 + -1;
      if (*(char *)(param_1 + param_2) == 'k') {
        lVar6 = 0;
        do {
          if (lVar6 == -0xd) {
            lVar5 = lVar3 + -0xe;
            goto LAB_0201fac4;
          }
          lVar2 = lVar3 + lVar6;
          lVar4 = lVar6 + 0xc;
          lVar6 = lVar6 + -1;
        } while (*(char *)(lVar2 + -2) == "seperator_mark"[lVar4]);
      }
      lVar3 = lVar3 + -1;
    }
  }
LAB_0201fac4:
  lVar3 = -1;
  if (lVar5 != lVar1) {
    lVar3 = lVar5 - param_1;
  }
  return lVar3;
}


