/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d8b70; name: FUN_011d8b70
 */


long FUN_011d8b70(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    plVar4 = &DAT_041f87a8;
  }
  else {
    plVar4 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      plVar4 = &DAT_041f8af0;
      break;
    case 3:
      plVar4 = &DAT_041f8e38;
      break;
    case 4:
      plVar4 = &DAT_041f9180;
      break;
    case 5:
      plVar4 = &DAT_041f94c8;
    }
  }
  plVar2 = *(long **)(*param_1 + 0x148);
  lVar3 = *(long *)(*param_1 + 0x150);
  if ((lVar3 == 0) || (*plVar2 == *plVar4)) {
    plVar6 = plVar2;
  }
  else {
    lVar5 = lVar3 * 0x30;
    plVar7 = plVar2;
    do {
      lVar5 = lVar5 + -0x30;
      if (lVar5 == 0) {
        return 0;
      }
      plVar1 = plVar7 + 6;
      plVar6 = plVar7 + 6;
      plVar7 = plVar7 + 6;
    } while (*plVar1 != *plVar4);
  }
  if (plVar6 == plVar2 + lVar3 * 6) {
    return 0;
  }
  return plVar6[4];
}


