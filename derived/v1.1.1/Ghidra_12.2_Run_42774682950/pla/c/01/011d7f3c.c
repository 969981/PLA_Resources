/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d7f3c; name: FUN_011d7f3c
 */


void FUN_011d7f3c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if (*(int *)((long)param_1 + 0x3c) == 1) {
    puVar5 = &DAT_041f87a8;
  }
  else {
    puVar5 = &DAT_041f8460;
    switch(*(int *)((long)param_1 + 0x3c)) {
    case 0:
      break;
    default:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    case 2:
      puVar5 = &DAT_041f8af0;
      break;
    case 3:
      puVar5 = &DAT_041f8e38;
      break;
    case 4:
      puVar5 = &DAT_041f9180;
      break;
    case 5:
      puVar5 = &DAT_041f94c8;
    }
  }
  lVar9 = *param_1;
  lVar8 = puVar5[0x18];
  uVar3 = FUN_02c68b0c(*(undefined8 *)(param_2 + 0x98));
  uVar4 = FUN_02c70958(*(undefined8 *)(param_2 + 0x98));
  plVar6 = *(long **)(lVar9 + 0x148);
  lVar9 = *(long *)(lVar9 + 0x150);
  if ((lVar9 != 0) && (*plVar6 != lVar8)) {
    plVar7 = plVar6 + lVar9 * 6;
    lVar9 = lVar9 * 0x30;
    do {
      lVar9 = lVar9 + -0x30;
      if (lVar9 == 0) {
        plVar6 = plVar7;
        break;
      }
      plVar2 = plVar6 + 6;
      plVar1 = plVar6 + 6;
      plVar6 = plVar2;
    } while (*plVar1 != lVar8);
  }
  *(byte *)(plVar6[4] + 0x58) =
       *(byte *)(plVar6[4] + 0x58) & 0xfe |
       (uVar3 & 0xfff0 ^ uVar3 >> 0x10 ^ uVar4 >> 0x10 ^ uVar4 & 0xfff0) < 0x10;
  return;
}


