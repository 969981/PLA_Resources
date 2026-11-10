/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026eb04; name: FUN_0026eb04
 */


void FUN_0026eb04(long param_1,long param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 != 0) {
    plVar2 = (long *)(param_1 + 0x188);
    if ((param_3 & 1) == 0) {
      for (plVar2 = (long *)*plVar2; plVar2 != (long *)(param_1 + 0x180); plVar2 = (long *)plVar2[1]
          ) {
        if (plVar2[-2] == param_2) {
          plVar1 = plVar2 + 2;
          *(undefined4 *)(plVar2 + -3) = *(undefined4 *)(param_1 + 0x1a0);
          lVar3 = *plVar1;
          *plVar1 = *(long *)(param_1 + 400);
          *(long *)(lVar3 + 8) = param_1 + 400;
          *(long **)(*(long *)(param_1 + 400) + 8) = plVar1;
          *(long *)(param_1 + 400) = lVar3;
          return;
        }
      }
    }
    else {
      while (plVar1 = (long *)*plVar2, (long *)(param_1 + 0x180) != plVar1) {
        plVar2 = plVar1 + 1;
        if (plVar1[-2] == param_2) {
          plVar1[-2] = 0;
          *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) - plVar1[-1];
          plVar2 = (long *)plVar1[1];
          lVar3 = *plVar2;
          *(long **)(*plVar1 + 8) = plVar2;
          *plVar2 = *plVar1;
          *(long **)(lVar3 + 8) = plVar1;
          *plVar1 = lVar3;
          *(long **)(param_1 + 0x1d0) = plVar1 + -3;
          *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + -1;
          return;
        }
      }
    }
  }
  return;
}


