/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0ca80; name: FUN_02f0ca80
 */


long * FUN_02f0ca80(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 == 0) {
    return (long *)0x0;
  }
  lVar4 = *param_2;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)lVar4 / uVar1;
  }
  plVar5 = (long *)(*param_1 + (ulong)((uint)lVar4 - uVar2 * uVar1) * 8);
  plVar3 = (long *)*plVar5;
  if (plVar3 != (long *)0x0) {
    if (*plVar3 != lVar4) {
      do {
        plVar5 = plVar3;
        plVar3 = (long *)plVar5[1];
        if (plVar3 == (long *)0x0) {
          return (long *)0x0;
        }
      } while (*plVar3 != lVar4);
      plVar5 = plVar5 + 1;
    }
    *plVar5 = plVar3[1];
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  return plVar3;
}


