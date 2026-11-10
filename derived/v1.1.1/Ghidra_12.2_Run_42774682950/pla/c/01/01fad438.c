/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01fad438; name: FUN_01fad438
 */


long FUN_01fad438(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  if (plVar3 != plVar1) {
    lVar2 = *plVar3;
    if (lVar2 != 0) goto LAB_01fad474;
    do {
      do {
        plVar3 = plVar3 + 1;
        if (plVar1 == plVar3) {
          plVar3 = plVar1;
          goto LAB_01fad488;
        }
        lVar2 = *plVar3;
      } while (lVar2 == 0);
LAB_01fad474:
      lVar2 = FUN_01fad4bc(lVar2 + 8);
    } while (lVar2 == 0);
LAB_01fad488:
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


