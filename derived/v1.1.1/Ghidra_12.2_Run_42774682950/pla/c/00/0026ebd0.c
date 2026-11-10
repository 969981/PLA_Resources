/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026ebd0; name: FUN_0026ebd0
 */


void FUN_0026ebd0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x198);
  plVar1 = (long *)(param_1 + 400);
  if (plVar1 != plVar3) {
    plVar5 = plVar3 + -5;
    iVar6 = (int)*plVar5;
    plVar2 = (long *)plVar3[1];
    if (iVar6 == 0) goto LAB_0026ec20;
LAB_0026ebfc:
    *(int *)plVar5 = iVar6 + -1;
    plVar3 = plVar2;
    while (plVar1 != plVar3) {
      plVar5 = plVar3 + -5;
      iVar6 = (int)*plVar5;
      plVar2 = (long *)plVar3[1];
      if (iVar6 != 0) goto LAB_0026ebfc;
LAB_0026ec20:
      if (plVar1 != plVar3) {
        lVar7 = *plVar2;
        *(long **)(*plVar3 + 8) = plVar2;
        *plVar2 = *plVar3;
        *(long **)(lVar7 + 8) = plVar3;
        *plVar3 = lVar7;
      }
      plVar3 = (long *)(param_1 + 0x188);
      while (plVar4 = (long *)*plVar3, plVar3 = plVar2, (long *)(param_1 + 0x180) != plVar4) {
        plVar3 = plVar4 + 1;
        if (plVar4[-2] == plVar5[1]) {
          plVar4[-2] = 0;
          *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) - plVar4[-1];
          plVar3 = (long *)plVar4[1];
          lVar7 = *plVar3;
          *(long **)(*plVar4 + 8) = plVar3;
          *plVar3 = *plVar4;
          *(long **)(lVar7 + 8) = plVar4;
          *plVar4 = lVar7;
          iVar6 = *(int *)(param_1 + 0x1b0);
          *(long **)(param_1 + 0x1d0) = plVar4 + -3;
          plVar5 = (long *)(param_1 + 0x1b0);
          goto LAB_0026ebfc;
        }
      }
    }
  }
  return;
}


