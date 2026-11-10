/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fa9b94; name: FUN_01fa9b94
 */


long FUN_01fa9b94(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar3 != plVar1) {
    do {
      if ((*plVar3 != 0) && (lVar2 = FUN_01fa9c0c(*plVar3 + 8), lVar2 != 0)) goto LAB_01fa9bd8;
      plVar3 = plVar3 + 1;
    } while (plVar1 != plVar3);
    plVar3 = plVar1;
LAB_01fa9bd8:
    if (plVar3 != (long *)param_1[1]) {
      lVar2 = 0;
      if (*plVar3 != 0) {
        lVar2 = *plVar3 + -0x48;
      }
      return lVar2;
    }
  }
  return 0;
}


