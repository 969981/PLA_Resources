/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb371c; name: FUN_02eb371c
 */


void FUN_02eb371c(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x100);
  while (plVar1 != (long *)0x0) {
    if (*plVar1 == 0) {
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    else {
      *(long *)(param_1 + 0x100) = *plVar1;
    }
    FUN_02eb3774(param_1,plVar1);
    FUN_02eb382c(plVar1);
    plVar1 = *(long **)(param_1 + 0x100);
  }
  return;
}


