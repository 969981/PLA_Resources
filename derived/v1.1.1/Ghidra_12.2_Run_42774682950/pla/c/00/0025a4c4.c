/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025a4c4; name: FUN_0025a4c4
 */


void FUN_0025a4c4(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar2 = (long *)param_1[3];
  while (param_1 + 2 != plVar2) {
    plVar5 = (long *)plVar2[0xb];
    plVar6 = (long *)plVar2[1];
    if (plVar2 + 10 != plVar5) {
      lVar4 = plVar5[3];
      plVar3 = (long *)plVar5[1];
      while( true ) {
        if (lVar4 != 0) {
          FUN_00232674();
        }
        plVar5[3] = 0;
        if (plVar6 + 10 != plVar5) {
          plVar1 = (long *)plVar5[1];
          lVar4 = *plVar1;
          *(long **)(*plVar5 + 8) = plVar1;
          *plVar1 = *plVar5;
          *(long **)(lVar4 + 8) = plVar5;
          *plVar5 = lVar4;
        }
        FUN_00232674(plVar5);
        if (plVar2 + 10 == plVar3) break;
        lVar4 = plVar3[3];
        plVar5 = plVar3;
        plVar3 = (long *)plVar3[1];
      }
    }
    if (param_1 + 2 != plVar2) {
      plVar5 = (long *)plVar2[1];
      lVar4 = *plVar5;
      *(long **)(*plVar2 + 8) = plVar5;
      *plVar5 = *plVar2;
      *(long **)(lVar4 + 8) = plVar2;
      *plVar2 = lVar4;
    }
    FUN_00232674(plVar2);
    plVar2 = plVar6;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


