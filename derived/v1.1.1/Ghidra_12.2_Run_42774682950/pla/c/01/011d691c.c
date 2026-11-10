/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d691c; name: FUN_011d691c
 */


void FUN_011d691c(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    plVar3 = &DAT_041f87a8;
  }
  else {
    plVar3 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      plVar3 = &DAT_041f8af0;
      break;
    case 3:
      plVar3 = &DAT_041f8e38;
      break;
    case 4:
      plVar3 = &DAT_041f9180;
      break;
    case 5:
      plVar3 = &DAT_041f94c8;
    }
  }
  plVar4 = *(long **)(*param_1 + 0x148);
  lVar6 = *(long *)(*param_1 + 0x150);
  if ((lVar6 != 0) && (*plVar4 != *plVar3)) {
    plVar5 = plVar4 + lVar6 * 6;
    lVar6 = lVar6 * 0x30;
    do {
      lVar6 = lVar6 + -0x30;
      if (lVar6 == 0) {
        plVar4 = plVar5;
        break;
      }
      plVar2 = plVar4 + 6;
      plVar1 = plVar4 + 6;
      plVar4 = plVar2;
    } while (*plVar1 != *plVar3);
  }
  *(byte *)(plVar4[4] + 0x58) = *(byte *)(plVar4[4] + 0x58) & 0xfe | param_2 & 1;
  return;
}


