/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e97d0; name: FUN_031e97d0
 */


undefined8 FUN_031e97d0(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    lVar2 = (long)*(int *)(param_1 + 0xa8) * 0x60;
    plVar1 = *(long **)(param_1 + 0xa0);
    do {
      if (*plVar1 == param_2) {
        return 1;
      }
      lVar2 = lVar2 + -0x60;
      plVar1 = plVar1 + 0xc;
    } while (lVar2 != 0);
  }
  return 0;
}


