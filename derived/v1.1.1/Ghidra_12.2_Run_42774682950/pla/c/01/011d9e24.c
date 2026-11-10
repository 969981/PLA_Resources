/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d9e24; name: FUN_011d9e24
 */


void FUN_011d9e24(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar5 = 0;
  switch(*(undefined4 *)(param_1 + 0x724)) {
  case 2:
    lVar5 = 1;
    break;
  case 3:
    lVar5 = 2;
    break;
  case 4:
    lVar5 = 3;
    break;
  case 5:
    lVar5 = 4;
    break;
  case 0x15:
    goto switchD_011d9e88_caseD_15;
  }
  lVar5 = FUN_011d8b70(param_1 + lVar5 * 0x48 + 0x5b0);
  if (lVar5 != 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar7 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    plVar9 = plVar6;
    if ((lVar7 != 0) && (*plVar6 != -0x29a8c00afa37995f)) {
      lVar8 = 0;
      do {
        if (lVar7 * 0x30 + -0x30 == lVar8) goto LAB_011d9f1c;
        lVar2 = lVar8 + 0x30;
        lVar3 = lVar8 + 0x30;
        lVar8 = lVar2;
      } while (*(long *)((long)plVar6 + lVar3) != -0x29a8c00afa37995f);
      plVar9 = (long *)((long)plVar6 + lVar2);
    }
    if ((plVar9 != plVar6 + lVar7 * 6) && (plVar9[4] != 0)) {
      FUN_00242d70(plVar9[4],lVar5);
      plVar6 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
      lVar7 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    }
LAB_011d9f1c:
    plVar9 = plVar6;
    if ((lVar7 != 0) && (*plVar6 != 0x248bd8892deae8cd)) {
      lVar8 = lVar7 * 0x30;
      plVar4 = plVar6;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto switchD_011d9e88_caseD_15;
        plVar9 = plVar4 + 6;
        plVar1 = plVar4 + 6;
        plVar4 = plVar9;
      } while (*plVar1 != 0x248bd8892deae8cd);
    }
    if ((plVar9 != plVar6 + lVar7 * 6) && (plVar9[4] != 0)) {
      FUN_00242d3c(plVar9[4],lVar5);
    }
  }
switchD_011d9e88_caseD_15:
  lVar5 = 0;
  if (param_2 - 2U < 4) {
    lVar5 = (ulong)(param_2 - 2U) + 1;
  }
  lVar5 = FUN_011d8b70(param_1 + lVar5 * 0x48 + 0x5b0);
  if (lVar5 != 0) {
    plVar6 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
    lVar7 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    plVar9 = plVar6;
    if ((lVar7 != 0) && (*plVar6 != 0x248bd8892deae8cd)) {
      lVar8 = 0;
      do {
        if (lVar7 * 0x30 + -0x30 == lVar8) goto LAB_011da024;
        lVar2 = lVar8 + 0x30;
        lVar3 = lVar8 + 0x30;
        lVar8 = lVar2;
      } while (*(long *)((long)plVar6 + lVar3) != 0x248bd8892deae8cd);
      plVar9 = (long *)((long)plVar6 + lVar2);
    }
    if ((plVar9 != plVar6 + lVar7 * 6) && (plVar9[4] != 0)) {
      FUN_00242d70(plVar9[4],lVar5);
      plVar6 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
      lVar7 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
    }
LAB_011da024:
    plVar9 = plVar6;
    if ((lVar7 != 0) && (*plVar6 != -0x29a8c00afa37995f)) {
      lVar8 = lVar7 * 0x30;
      plVar4 = plVar6;
      do {
        lVar8 = lVar8 + -0x30;
        if (lVar8 == 0) goto LAB_011da090;
        plVar9 = plVar4 + 6;
        plVar1 = plVar4 + 6;
        plVar4 = plVar9;
      } while (*plVar1 != -0x29a8c00afa37995f);
    }
    if ((plVar9 != plVar6 + lVar7 * 6) && (plVar9[4] != 0)) {
      FUN_00242d3c(plVar9[4],lVar5);
    }
  }
LAB_011da090:
  *(int *)(param_1 + 0x724) = param_2;
  return;
}


