/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 022974e0; name: FUN_022974e0
 */


long FUN_022974e0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = param_1 + param_2;
  lVar5 = lVar1;
  lVar4 = lVar1;
  if (0xd < param_2) {
    while (param_2 != 0xd) {
      param_2 = param_2 + -1;
      if (*(char *)(param_1 + param_2) == 'k') {
        lVar6 = 0;
        do {
          if (lVar6 == -0xd) {
            lVar5 = lVar4 + -0xe;
            goto LAB_02297554;
          }
          lVar2 = lVar4 + lVar6;
          lVar3 = lVar6 + 0xc;
          lVar6 = lVar6 + -1;
        } while (*(char *)(lVar2 + -2) == "seperator_mark"[lVar3]);
      }
      lVar4 = lVar4 + -1;
    }
  }
LAB_02297554:
  param_1 = lVar5 - param_1;
  if (lVar5 == lVar1) {
    param_1 = -1;
  }
  return param_1;
}


