/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0289f734; name: FUN_0289f734
 */


long FUN_0289f734(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x250);
  plVar2 = *(long **)(param_1 + 600);
  if (plVar1 == plVar2) {
LAB_0289f768:
    if (plVar1 != plVar2) {
      return *plVar1 + 0x68;
    }
  }
  else {
    do {
      if (*(long *)(*plVar1 + 0x158) == *param_2) goto LAB_0289f768;
      plVar1 = plVar1 + 1;
    } while (plVar2 != plVar1);
  }
  return 0x68;
}


