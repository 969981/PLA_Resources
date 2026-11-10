/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d88cc0; name: FUN_00d88cc0
 */


void FUN_00d88cc0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if (param_2 != param_1) {
    plVar5 = param_2 + -4;
    lVar2 = *plVar5;
    *plVar5 = 0;
    lVar1 = *(long *)(param_3 + -0x20);
    *(long *)(param_3 + -0x20) = lVar2;
    if (lVar1 != 0) {
      FUN_00d85e08(param_3 + -0x18);
    }
    lVar1 = param_2[-3];
    lVar2 = param_2[-1];
    *(long *)(param_3 + -0x10) = param_2[-2];
    *(long *)(param_3 + -8) = lVar2;
    *(long *)(param_3 + -0x18) = lVar1;
    if (plVar5 != param_1) {
      plVar3 = (long *)(param_3 + -0x40);
      do {
        plVar4 = plVar5 + -4;
        lVar2 = *plVar4;
        *plVar4 = 0;
        lVar1 = *plVar3;
        *plVar3 = lVar2;
        if (lVar1 != 0) {
          FUN_00d85e08(plVar3 + 1);
        }
        lVar1 = plVar5[-3];
        lVar2 = plVar5[-1];
        plVar3[2] = plVar5[-2];
        plVar3[3] = lVar2;
        plVar3[1] = lVar1;
        plVar3 = plVar3 + -4;
        plVar5 = plVar4;
      } while (param_1 != plVar4);
    }
  }
  return;
}


