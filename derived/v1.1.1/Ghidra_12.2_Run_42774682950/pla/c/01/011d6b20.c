/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d6b20; name: FUN_011d6b20
 */


void FUN_011d6b20(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    if (*(int *)((long)param_1 + 0x3c) == 1) {
      plVar5 = &DAT_041f87a8;
    }
    else {
      plVar5 = &DAT_041f8460;
      switch(*(int *)((long)param_1 + 0x3c)) {
      case 0:
        break;
      default:
        goto switchD_011d6d44_caseD_1;
      case 2:
        plVar5 = &DAT_041f8af0;
        break;
      case 3:
        plVar5 = &DAT_041f8e38;
        break;
      case 4:
        plVar5 = &DAT_041f9180;
        break;
      case 5:
        plVar5 = &DAT_041f94c8;
      }
    }
    plVar7 = *(long **)(*param_1 + 0x148);
    lVar9 = *(long *)(*param_1 + 0x150);
    if ((lVar9 != 0) && (*plVar7 != *plVar5)) {
      plVar8 = plVar7 + lVar9 * 6;
      lVar9 = lVar9 * 0x30;
      do {
        lVar9 = lVar9 + -0x30;
        if (lVar9 == 0) {
          plVar7 = plVar8;
          break;
        }
        plVar2 = plVar7 + 6;
        plVar1 = plVar7 + 6;
        plVar7 = plVar2;
      } while (*plVar1 != *plVar5);
    }
    lVar9 = plVar7[4];
    bVar4 = *(byte *)(lVar9 + 0x58) & 0xfe;
  }
  else {
    iVar3 = *(int *)((long)param_1 + 0x3c);
    uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x70) + 0x60);
    FUN_011d6e78(param_1,uVar10);
    FUN_011d7128(param_1,uVar10);
    bVar4 = FUN_02c6d5b0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x70) + 0x60) + 0x98));
    if (*(int *)((long)param_1 + 0x3c) == 1) {
      puVar6 = &DAT_041f87a8;
    }
    else {
      puVar6 = &DAT_041f8460;
      switch(*(int *)((long)param_1 + 0x3c)) {
      case 0:
        break;
      default:
        goto switchD_011d6d44_caseD_1;
      case 2:
        puVar6 = &DAT_041f8af0;
        break;
      case 3:
        puVar6 = &DAT_041f8e38;
        break;
      case 4:
        puVar6 = &DAT_041f9180;
        break;
      case 5:
        puVar6 = &DAT_041f94c8;
      }
    }
    plVar5 = *(long **)(*param_1 + 0x148);
    lVar9 = *(long *)(*param_1 + 0x150);
    if ((lVar9 != 0) && (*plVar5 != puVar6[0x12])) {
      plVar7 = plVar5 + lVar9 * 6;
      lVar9 = lVar9 * 0x30;
      do {
        lVar9 = lVar9 + -0x30;
        if (lVar9 == 0) {
          plVar5 = plVar7;
          break;
        }
        plVar1 = plVar5 + 6;
        plVar8 = plVar5 + 6;
        plVar5 = plVar1;
      } while (*plVar8 != puVar6[0x12]);
    }
    *(byte *)(plVar5[4] + 0x58) = *(byte *)(plVar5[4] + 0x58) & 0xfe | bVar4 & 1;
    FUN_011d7224(param_1,param_2);
    if (iVar3 != 0) {
      FUN_011d8088(param_1,param_2);
    }
    FUN_011d761c(param_1,uVar10);
    FUN_011d78e4(param_1,param_2);
    FUN_011d7ad0(param_1,param_2);
    FUN_011d7f3c(param_1,uVar10);
    if (*(int *)((long)param_1 + 0x3c) == 1) {
      plVar5 = &DAT_041f87a8;
    }
    else {
      plVar5 = &DAT_041f8460;
      switch(*(int *)((long)param_1 + 0x3c)) {
      case 0:
        break;
      default:
switchD_011d6d44_caseD_1:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      case 2:
        plVar5 = &DAT_041f8af0;
        break;
      case 3:
        plVar5 = &DAT_041f8e38;
        break;
      case 4:
        plVar5 = &DAT_041f9180;
        break;
      case 5:
        plVar5 = &DAT_041f94c8;
      }
    }
    plVar7 = *(long **)(*param_1 + 0x148);
    lVar9 = *(long *)(*param_1 + 0x150);
    if ((lVar9 != 0) && (*plVar7 != *plVar5)) {
      plVar8 = plVar7 + lVar9 * 6;
      lVar9 = lVar9 * 0x30;
      do {
        lVar9 = lVar9 + -0x30;
        if (lVar9 == 0) {
          plVar7 = plVar8;
          break;
        }
        plVar2 = plVar7 + 6;
        plVar1 = plVar7 + 6;
        plVar7 = plVar2;
      } while (*plVar1 != *plVar5);
    }
    lVar9 = plVar7[4];
    bVar4 = *(byte *)(lVar9 + 0x58) | 1;
  }
  *(byte *)(lVar9 + 0x58) = bVar4;
  return;
}


